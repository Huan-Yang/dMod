% Generated by roxygen2: do not edit by hand
% Please edit documentation in R/parClass.R
\name{as.parframe}
\alias{as.parframe}
\alias{as.parframe.parlist}
\title{Coerce object to a parameter frame}
\usage{
as.parframe(x, ...)

\method{as.parframe}{parlist}(x, sort.by = "value", ...)
}
\arguments{
\item{x}{object to be coerced}

\item{...}{other arguments}

\item{sort.by}{character indicating by which colum the returned parameter frame
should be sorted. Defaults to \code{"value"}.}
}
\value{
object of class \link{parframe}.
}
\description{
Coerce object to a parameter frame
}
\examples{
## Generate a prediction function
regfn <- c(y = "sin(a*time)")

g <- Y(regfn, parameters = "a")
x <- Xt(condition = "C1")

## Generate data
data <- datalist(
  C1 = data.frame(
    name = "y",
    time = 1:5,
    value = sin(1:5) + rnorm(5, 0, .1),
    sigma = .1
  )
)

## Initialize parameters and time 
pars <- c(a = 1)
times <- seq(0, 5, .1)

plot((g*x)(times, pars), data)

## Do many fits from random positions and store them into parlist
out <- as.parlist(lapply(1:50, function(i) {
  trust(normL2(data, g*x), pars + rnorm(length(pars), 0, 1), rinit = 1, rmax = 10)
}))

summary(out)

## Reduce parlist to parframe
parframe <- as.parframe(out)
plotValues(parframe)

## Reduce parframe to best fit
bestfit <- as.parvec(parframe)
plot((g*x)(times, bestfit), data)
}
