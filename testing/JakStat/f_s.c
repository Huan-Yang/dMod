/** Code auto-generated by cOde 0.2 **/
#include <R.h> 
 #include <math.h> 

static double parms[190];
static double forc[0];

#define alpha parms[0] 
 #define beta parms[1] 
 #define p1 parms[2] 
 #define p5 parms[3] 
 #define p2 parms[4] 
 #define p3 parms[5] 
 #define p4 parms[6] 
 #define sSTAT parms[7] 
 #define y0_0 parms[8] 
 #define y1_0 parms[9] 
 #define y2_0 parms[10] 
 #define y3_0 parms[11] 
 #define y4_0 parms[12] 
 #define y5_0 parms[13] 
 #define y6_0 parms[14] 
 #define y7_0 parms[15] 
 #define y8_0 parms[16] 
 #define y9_0 parms[17] 
 #define y10_0 parms[18] 
 #define y11_0 parms[19] 
 #define y12_0 parms[20] 
 #define y13_0 parms[21] 
 #define y14_0 parms[22] 
 #define y15_0 parms[23] 
 #define y16_0 parms[24] 
 #define y17_0 parms[25] 
 #define y18_0 parms[26] 
 #define y19_0 parms[27] 
 #define y20_0 parms[28] 
 #define y21_0 parms[29] 
 #define y22_0 parms[30] 
 #define y23_0 parms[31] 
 #define y24_0 parms[32] 
 #define y25_0 parms[33] 
 #define y26_0 parms[34] 
 #define y27_0 parms[35] 
 #define y28_0 parms[36] 
 #define y29_0 parms[37] 
 #define y30_0 parms[38] 
 #define y31_0 parms[39] 
 #define y32_0 parms[40] 
 #define y33_0 parms[41] 
 #define y34_0 parms[42] 
 #define y35_0 parms[43] 
 #define y36_0 parms[44] 
 #define y37_0 parms[45] 
 #define y38_0 parms[46] 
 #define y39_0 parms[47] 
 #define y40_0 parms[48] 
 #define y41_0 parms[49] 
 #define y42_0 parms[50] 
 #define y43_0 parms[51] 
 #define y44_0 parms[52] 
 #define y45_0 parms[53] 
 #define y46_0 parms[54] 
 #define y47_0 parms[55] 
 #define y48_0 parms[56] 
 #define y49_0 parms[57] 
 #define y50_0 parms[58] 
 #define y51_0 parms[59] 
 #define y52_0 parms[60] 
 #define y53_0 parms[61] 
 #define y54_0 parms[62] 
 #define y55_0 parms[63] 
 #define y56_0 parms[64] 
 #define y57_0 parms[65] 
 #define y58_0 parms[66] 
 #define y59_0 parms[67] 
 #define y60_0 parms[68] 
 #define y61_0 parms[69] 
 #define y62_0 parms[70] 
 #define y63_0 parms[71] 
 #define y64_0 parms[72] 
 #define y65_0 parms[73] 
 #define y66_0 parms[74] 
 #define y67_0 parms[75] 
 #define y68_0 parms[76] 
 #define y69_0 parms[77] 
 #define y70_0 parms[78] 
 #define y71_0 parms[79] 
 #define y72_0 parms[80] 
 #define y73_0 parms[81] 
 #define y74_0 parms[82] 
 #define y75_0 parms[83] 
 #define y76_0 parms[84] 
 #define y77_0 parms[85] 
 #define y78_0 parms[86] 
 #define y79_0 parms[87] 
 #define y80_0 parms[88] 
 #define y81_0 parms[89] 
 #define y82_0 parms[90] 
 #define y83_0 parms[91] 
 #define y84_0 parms[92] 
 #define y85_0 parms[93] 
 #define y86_0 parms[94] 
 #define y87_0 parms[95] 
 #define y88_0 parms[96] 
 #define y89_0 parms[97] 
 #define y90_0 parms[98] 
 #define y91_0 parms[99] 
 #define y92_0 parms[100] 
 #define y93_0 parms[101] 
 #define y94_0 parms[102] 
 #define y95_0 parms[103] 
 #define y96_0 parms[104] 
 #define y97_0 parms[105] 
 #define y98_0 parms[106] 
 #define y99_0 parms[107] 
 #define y100_0 parms[108] 
 #define y101_0 parms[109] 
 #define y102_0 parms[110] 
 #define y103_0 parms[111] 
 #define y104_0 parms[112] 
 #define y105_0 parms[113] 
 #define y106_0 parms[114] 
 #define y107_0 parms[115] 
 #define y108_0 parms[116] 
 #define y109_0 parms[117] 
 #define y110_0 parms[118] 
 #define y111_0 parms[119] 
 #define y112_0 parms[120] 
 #define y113_0 parms[121] 
 #define y114_0 parms[122] 
 #define y115_0 parms[123] 
 #define y116_0 parms[124] 
 #define y117_0 parms[125] 
 #define y118_0 parms[126] 
 #define y119_0 parms[127] 
 #define y120_0 parms[128] 
 #define y121_0 parms[129] 
 #define y122_0 parms[130] 
 #define y123_0 parms[131] 
 #define y124_0 parms[132] 
 #define y125_0 parms[133] 
 #define y126_0 parms[134] 
 #define y127_0 parms[135] 
 #define y128_0 parms[136] 
 #define y129_0 parms[137] 
 #define y130_0 parms[138] 
 #define y131_0 parms[139] 
 #define y132_0 parms[140] 
 #define y133_0 parms[141] 
 #define y134_0 parms[142] 
 #define y135_0 parms[143] 
 #define y136_0 parms[144] 
 #define y137_0 parms[145] 
 #define y138_0 parms[146] 
 #define y139_0 parms[147] 
 #define y140_0 parms[148] 
 #define y141_0 parms[149] 
 #define y142_0 parms[150] 
 #define y143_0 parms[151] 
 #define y144_0 parms[152] 
 #define y145_0 parms[153] 
 #define y146_0 parms[154] 
 #define y147_0 parms[155] 
 #define y148_0 parms[156] 
 #define y149_0 parms[157] 
 #define y150_0 parms[158] 
 #define y151_0 parms[159] 
 #define y152_0 parms[160] 
 #define y153_0 parms[161] 
 #define y154_0 parms[162] 
 #define y155_0 parms[163] 
 #define y156_0 parms[164] 
 #define y157_0 parms[165] 
 #define y158_0 parms[166] 
 #define y159_0 parms[167] 
 #define y160_0 parms[168] 
 #define y161_0 parms[169] 
 #define y162_0 parms[170] 
 #define y163_0 parms[171] 
 #define y164_0 parms[172] 
 #define y165_0 parms[173] 
 #define y166_0 parms[174] 
 #define y167_0 parms[175] 
 #define y168_0 parms[176] 
 #define y169_0 parms[177] 
 #define y170_0 parms[178] 
 #define y171_0 parms[179] 
 #define y172_0 parms[180] 
 #define y173_0 parms[181] 
 #define y174_0 parms[182] 
 #define y175_0 parms[183] 
 #define y176_0 parms[184] 
 #define y177_0 parms[185] 
 #define y178_0 parms[186] 
 #define y179_0 parms[187] 
 #define y180_0 parms[188] 
 #define y181_0 parms[189] 

void initmod(void (* odeparms)(int *, double *)) {
	 int N=190;
	 odeparms(&N, parms);
}

void initforc(void (* odeforcs)(int *, double *)) {
	 int N=0;
	 odeforcs(&N, forc);
}

/** Derivatives (ODE system) **/
void derivs (int *n, double *t, double *y, double *ydot, double *RPAR, int *IPAR) {

	 double time = *t;

	 ydot[0] = 1*2*alpha*time;
 	 ydot[1] = -1*beta*y[1];
 	 ydot[2] = -1*p1*y[0]*y[1]*y[2]+1*p5*y[10];
 	 ydot[3] = 1*p1*y[0]*y[1]*y[2]-2*p2*y[3]*y[3];
 	 ydot[4] = 1*p2*y[3]*y[3]-1*p3*y[4];
 	 ydot[5] = 1*p3*y[4]-1*p4*y[5];
 	 ydot[6] = 2*p4*y[5]-1*p5*y[6];
 	 ydot[7] = 1*p5*y[6]-1*p5*y[7];
 	 ydot[8] = 1*p5*y[7]-1*p5*y[8];
 	 ydot[9] = 1*p5*y[8]-1*p5*y[9];
 	 ydot[10] = 1*p5*y[9]-1*p5*y[10];
 	 ydot[11] = (1)*(-1*p1*y[0]*y[1]*y[2]+1*p5*y[10])+(1)*(1*p1*y[0]*y[1]*y[2]-2*p2*y[3]*y[3])+(2)*(1*p2*y[3]*y[3]-1*p3*y[4])+0+0;
 	 ydot[12] = 0+(sSTAT)*(1*p1*y[0]*y[1]*y[2]-2*p2*y[3]*y[3])+(sSTAT*2)*(1*p2*y[3]*y[3]-1*p3*y[4])+0+0;
 	 ydot[13] = 0+0+0+(y[1])*(1*2*alpha*time)+(y[0])*(-1*beta*y[1]);
 	 ydot[14] = 0;
 	 ydot[15] = (-1*beta)*(y[15]);
 	 ydot[16] = (-1*p1*y[1]*y[2])*(y[14])+(-1*p1*y[0]*y[2])*(y[15])+(-1*p1*y[0]*y[1])*(y[16])+(1*p5)*(y[24]);
 	 ydot[17] = (1*p1*y[1]*y[2])*(y[14])+(1*p1*y[0]*y[2])*(y[15])+(1*p1*y[0]*y[1])*(y[16])+(-(2*p2*y[3]+2*p2*y[3]))*(y[17]);
 	 ydot[18] = (1*p2*y[3]+1*p2*y[3])*(y[17])+(-(1*p3))*(y[18]);
 	 ydot[19] = (1*p3)*(y[18])+(-(1*p4))*(y[19]);
 	 ydot[20] = (2*p4)*(y[19])+(-(1*p5))*(y[20]);
 	 ydot[21] = (1*p5)*(y[20])+(-(1*p5))*(y[21]);
 	 ydot[22] = (1*p5)*(y[21])+(-(1*p5))*(y[22]);
 	 ydot[23] = (1*p5)*(y[22])+(-(1*p5))*(y[23]);
 	 ydot[24] = (1*p5)*(y[23])+(-(1*p5))*(y[24]);
 	 ydot[25] = ((1)*(-1*p1*y[1]*y[2])+(1)*(1*p1*y[1]*y[2]))*(y[14])+((1)*(-1*p1*y[0]*y[2])+(1)*(1*p1*y[0]*y[2]))*(y[15])+((1)*(-1*p1*y[0]*y[1])+(1)*(1*p1*y[0]*y[1]))*(y[16])+((2)*(1*p2*y[3]+1*p2*y[3])-(1)*(2*p2*y[3]+2*p2*y[3]))*(y[17])+(-((2)*(1*p3)))*(y[18])+((1)*(1*p5))*(y[24]);
 	 ydot[26] = ((sSTAT)*(1*p1*y[1]*y[2]))*(y[14])+((sSTAT)*(1*p1*y[0]*y[2]))*(y[15])+((sSTAT)*(1*p1*y[0]*y[1]))*(y[16])+((sSTAT*2)*(1*p2*y[3]+1*p2*y[3])-(sSTAT)*(2*p2*y[3]+2*p2*y[3]))*(y[17])+(-((sSTAT*2)*(1*p3)))*(y[18]);
 	 ydot[27] = ((-1*beta*y[1]))*(y[14])+((1*2*alpha*time)+(y[0])*(-1*beta))*(y[15]);
 	 ydot[28] = 0;
 	 ydot[29] = (-1*beta)*(y[29]);
 	 ydot[30] = (-1*p1*y[1]*y[2])*(y[28])+(-1*p1*y[0]*y[2])*(y[29])+(-1*p1*y[0]*y[1])*(y[30])+(1*p5)*(y[38]);
 	 ydot[31] = (1*p1*y[1]*y[2])*(y[28])+(1*p1*y[0]*y[2])*(y[29])+(1*p1*y[0]*y[1])*(y[30])+(-(2*p2*y[3]+2*p2*y[3]))*(y[31]);
 	 ydot[32] = (1*p2*y[3]+1*p2*y[3])*(y[31])+(-(1*p3))*(y[32]);
 	 ydot[33] = (1*p3)*(y[32])+(-(1*p4))*(y[33]);
 	 ydot[34] = (2*p4)*(y[33])+(-(1*p5))*(y[34]);
 	 ydot[35] = (1*p5)*(y[34])+(-(1*p5))*(y[35]);
 	 ydot[36] = (1*p5)*(y[35])+(-(1*p5))*(y[36]);
 	 ydot[37] = (1*p5)*(y[36])+(-(1*p5))*(y[37]);
 	 ydot[38] = (1*p5)*(y[37])+(-(1*p5))*(y[38]);
 	 ydot[39] = ((1)*(-1*p1*y[1]*y[2])+(1)*(1*p1*y[1]*y[2]))*(y[28])+((1)*(-1*p1*y[0]*y[2])+(1)*(1*p1*y[0]*y[2]))*(y[29])+((1)*(-1*p1*y[0]*y[1])+(1)*(1*p1*y[0]*y[1]))*(y[30])+((2)*(1*p2*y[3]+1*p2*y[3])-(1)*(2*p2*y[3]+2*p2*y[3]))*(y[31])+(-((2)*(1*p3)))*(y[32])+((1)*(1*p5))*(y[38]);
 	 ydot[40] = ((sSTAT)*(1*p1*y[1]*y[2]))*(y[28])+((sSTAT)*(1*p1*y[0]*y[2]))*(y[29])+((sSTAT)*(1*p1*y[0]*y[1]))*(y[30])+((sSTAT*2)*(1*p2*y[3]+1*p2*y[3])-(sSTAT)*(2*p2*y[3]+2*p2*y[3]))*(y[31])+(-((sSTAT*2)*(1*p3)))*(y[32]);
 	 ydot[41] = ((-1*beta*y[1]))*(y[28])+((1*2*alpha*time)+(y[0])*(-1*beta))*(y[29]);
 	 ydot[42] = 0;
 	 ydot[43] = (-1*beta)*(y[43]);
 	 ydot[44] = (-1*p1*y[1]*y[2])*(y[42])+(-1*p1*y[0]*y[2])*(y[43])+(-1*p1*y[0]*y[1])*(y[44])+(1*p5)*(y[52]);
 	 ydot[45] = (1*p1*y[1]*y[2])*(y[42])+(1*p1*y[0]*y[2])*(y[43])+(1*p1*y[0]*y[1])*(y[44])+(-(2*p2*y[3]+2*p2*y[3]))*(y[45]);
 	 ydot[46] = (1*p2*y[3]+1*p2*y[3])*(y[45])+(-(1*p3))*(y[46]);
 	 ydot[47] = (1*p3)*(y[46])+(-(1*p4))*(y[47]);
 	 ydot[48] = (2*p4)*(y[47])+(-(1*p5))*(y[48]);
 	 ydot[49] = (1*p5)*(y[48])+(-(1*p5))*(y[49]);
 	 ydot[50] = (1*p5)*(y[49])+(-(1*p5))*(y[50]);
 	 ydot[51] = (1*p5)*(y[50])+(-(1*p5))*(y[51]);
 	 ydot[52] = (1*p5)*(y[51])+(-(1*p5))*(y[52]);
 	 ydot[53] = ((1)*(-1*p1*y[1]*y[2])+(1)*(1*p1*y[1]*y[2]))*(y[42])+((1)*(-1*p1*y[0]*y[2])+(1)*(1*p1*y[0]*y[2]))*(y[43])+((1)*(-1*p1*y[0]*y[1])+(1)*(1*p1*y[0]*y[1]))*(y[44])+((2)*(1*p2*y[3]+1*p2*y[3])-(1)*(2*p2*y[3]+2*p2*y[3]))*(y[45])+(-((2)*(1*p3)))*(y[46])+((1)*(1*p5))*(y[52]);
 	 ydot[54] = ((sSTAT)*(1*p1*y[1]*y[2]))*(y[42])+((sSTAT)*(1*p1*y[0]*y[2]))*(y[43])+((sSTAT)*(1*p1*y[0]*y[1]))*(y[44])+((sSTAT*2)*(1*p2*y[3]+1*p2*y[3])-(sSTAT)*(2*p2*y[3]+2*p2*y[3]))*(y[45])+(-((sSTAT*2)*(1*p3)))*(y[46]);
 	 ydot[55] = ((-1*beta*y[1]))*(y[42])+((1*2*alpha*time)+(y[0])*(-1*beta))*(y[43]);
 	 ydot[56] = 0;
 	 ydot[57] = (-1*beta)*(y[57]);
 	 ydot[58] = (-1*p1*y[1]*y[2])*(y[56])+(-1*p1*y[0]*y[2])*(y[57])+(-1*p1*y[0]*y[1])*(y[58])+(1*p5)*(y[66]);
 	 ydot[59] = (1*p1*y[1]*y[2])*(y[56])+(1*p1*y[0]*y[2])*(y[57])+(1*p1*y[0]*y[1])*(y[58])+(-(2*p2*y[3]+2*p2*y[3]))*(y[59]);
 	 ydot[60] = (1*p2*y[3]+1*p2*y[3])*(y[59])+(-(1*p3))*(y[60]);
 	 ydot[61] = (1*p3)*(y[60])+(-(1*p4))*(y[61]);
 	 ydot[62] = (2*p4)*(y[61])+(-(1*p5))*(y[62]);
 	 ydot[63] = (1*p5)*(y[62])+(-(1*p5))*(y[63]);
 	 ydot[64] = (1*p5)*(y[63])+(-(1*p5))*(y[64]);
 	 ydot[65] = (1*p5)*(y[64])+(-(1*p5))*(y[65]);
 	 ydot[66] = (1*p5)*(y[65])+(-(1*p5))*(y[66]);
 	 ydot[67] = ((1)*(-1*p1*y[1]*y[2])+(1)*(1*p1*y[1]*y[2]))*(y[56])+((1)*(-1*p1*y[0]*y[2])+(1)*(1*p1*y[0]*y[2]))*(y[57])+((1)*(-1*p1*y[0]*y[1])+(1)*(1*p1*y[0]*y[1]))*(y[58])+((2)*(1*p2*y[3]+1*p2*y[3])-(1)*(2*p2*y[3]+2*p2*y[3]))*(y[59])+(-((2)*(1*p3)))*(y[60])+((1)*(1*p5))*(y[66]);
 	 ydot[68] = ((sSTAT)*(1*p1*y[1]*y[2]))*(y[56])+((sSTAT)*(1*p1*y[0]*y[2]))*(y[57])+((sSTAT)*(1*p1*y[0]*y[1]))*(y[58])+((sSTAT*2)*(1*p2*y[3]+1*p2*y[3])-(sSTAT)*(2*p2*y[3]+2*p2*y[3]))*(y[59])+(-((sSTAT*2)*(1*p3)))*(y[60]);
 	 ydot[69] = ((-1*beta*y[1]))*(y[56])+((1*2*alpha*time)+(y[0])*(-1*beta))*(y[57]);
 	 ydot[70] = 1*2*time;
 	 ydot[71] = (-1*beta)*(y[71]);
 	 ydot[72] = (-1*p1*y[1]*y[2])*(y[70])+(-1*p1*y[0]*y[2])*(y[71])+(-1*p1*y[0]*y[1])*(y[72])+(1*p5)*(y[80]);
 	 ydot[73] = (1*p1*y[1]*y[2])*(y[70])+(1*p1*y[0]*y[2])*(y[71])+(1*p1*y[0]*y[1])*(y[72])+(-(2*p2*y[3]+2*p2*y[3]))*(y[73]);
 	 ydot[74] = (1*p2*y[3]+1*p2*y[3])*(y[73])+(-(1*p3))*(y[74]);
 	 ydot[75] = (1*p3)*(y[74])+(-(1*p4))*(y[75]);
 	 ydot[76] = (2*p4)*(y[75])+(-(1*p5))*(y[76]);
 	 ydot[77] = (1*p5)*(y[76])+(-(1*p5))*(y[77]);
 	 ydot[78] = (1*p5)*(y[77])+(-(1*p5))*(y[78]);
 	 ydot[79] = (1*p5)*(y[78])+(-(1*p5))*(y[79]);
 	 ydot[80] = (1*p5)*(y[79])+(-(1*p5))*(y[80]);
 	 ydot[81] = ((1)*(-1*p1*y[1]*y[2])+(1)*(1*p1*y[1]*y[2]))*(y[70])+((1)*(-1*p1*y[0]*y[2])+(1)*(1*p1*y[0]*y[2]))*(y[71])+((1)*(-1*p1*y[0]*y[1])+(1)*(1*p1*y[0]*y[1]))*(y[72])+((2)*(1*p2*y[3]+1*p2*y[3])-(1)*(2*p2*y[3]+2*p2*y[3]))*(y[73])+(-((2)*(1*p3)))*(y[74])+((1)*(1*p5))*(y[80]);
 	 ydot[82] = ((sSTAT)*(1*p1*y[1]*y[2]))*(y[70])+((sSTAT)*(1*p1*y[0]*y[2]))*(y[71])+((sSTAT)*(1*p1*y[0]*y[1]))*(y[72])+((sSTAT*2)*(1*p2*y[3]+1*p2*y[3])-(sSTAT)*(2*p2*y[3]+2*p2*y[3]))*(y[73])+(-((sSTAT*2)*(1*p3)))*(y[74]);
 	 ydot[83] = ((-1*beta*y[1]))*(y[70])+((1*2*alpha*time)+(y[0])*(-1*beta))*(y[71])+(y[1])*(1*2*time);
 	 ydot[84] = 0;
 	 ydot[85] = (-1*beta)*(y[85])+-y[1];
 	 ydot[86] = (-1*p1*y[1]*y[2])*(y[84])+(-1*p1*y[0]*y[2])*(y[85])+(-1*p1*y[0]*y[1])*(y[86])+(1*p5)*(y[94]);
 	 ydot[87] = (1*p1*y[1]*y[2])*(y[84])+(1*p1*y[0]*y[2])*(y[85])+(1*p1*y[0]*y[1])*(y[86])+(-(2*p2*y[3]+2*p2*y[3]))*(y[87]);
 	 ydot[88] = (1*p2*y[3]+1*p2*y[3])*(y[87])+(-(1*p3))*(y[88]);
 	 ydot[89] = (1*p3)*(y[88])+(-(1*p4))*(y[89]);
 	 ydot[90] = (2*p4)*(y[89])+(-(1*p5))*(y[90]);
 	 ydot[91] = (1*p5)*(y[90])+(-(1*p5))*(y[91]);
 	 ydot[92] = (1*p5)*(y[91])+(-(1*p5))*(y[92]);
 	 ydot[93] = (1*p5)*(y[92])+(-(1*p5))*(y[93]);
 	 ydot[94] = (1*p5)*(y[93])+(-(1*p5))*(y[94]);
 	 ydot[95] = ((1)*(-1*p1*y[1]*y[2])+(1)*(1*p1*y[1]*y[2]))*(y[84])+((1)*(-1*p1*y[0]*y[2])+(1)*(1*p1*y[0]*y[2]))*(y[85])+((1)*(-1*p1*y[0]*y[1])+(1)*(1*p1*y[0]*y[1]))*(y[86])+((2)*(1*p2*y[3]+1*p2*y[3])-(1)*(2*p2*y[3]+2*p2*y[3]))*(y[87])+(-((2)*(1*p3)))*(y[88])+((1)*(1*p5))*(y[94]);
 	 ydot[96] = ((sSTAT)*(1*p1*y[1]*y[2]))*(y[84])+((sSTAT)*(1*p1*y[0]*y[2]))*(y[85])+((sSTAT)*(1*p1*y[0]*y[1]))*(y[86])+((sSTAT*2)*(1*p2*y[3]+1*p2*y[3])-(sSTAT)*(2*p2*y[3]+2*p2*y[3]))*(y[87])+(-((sSTAT*2)*(1*p3)))*(y[88]);
 	 ydot[97] = ((-1*beta*y[1]))*(y[84])+((1*2*alpha*time)+(y[0])*(-1*beta))*(y[85])+-((y[0])*y[1]);
 	 ydot[98] = 0;
 	 ydot[99] = (-1*beta)*(y[99]);
 	 ydot[100] = (-1*p1*y[1]*y[2])*(y[98])+(-1*p1*y[0]*y[2])*(y[99])+(-1*p1*y[0]*y[1])*(y[100])+(1*p5)*(y[108])+-(y[0]*y[1]*y[2]);
 	 ydot[101] = (1*p1*y[1]*y[2])*(y[98])+(1*p1*y[0]*y[2])*(y[99])+(1*p1*y[0]*y[1])*(y[100])+(-(2*p2*y[3]+2*p2*y[3]))*(y[101])+y[0]*y[1]*y[2];
 	 ydot[102] = (1*p2*y[3]+1*p2*y[3])*(y[101])+(-(1*p3))*(y[102]);
 	 ydot[103] = (1*p3)*(y[102])+(-(1*p4))*(y[103]);
 	 ydot[104] = (2*p4)*(y[103])+(-(1*p5))*(y[104]);
 	 ydot[105] = (1*p5)*(y[104])+(-(1*p5))*(y[105]);
 	 ydot[106] = (1*p5)*(y[105])+(-(1*p5))*(y[106]);
 	 ydot[107] = (1*p5)*(y[106])+(-(1*p5))*(y[107]);
 	 ydot[108] = (1*p5)*(y[107])+(-(1*p5))*(y[108]);
 	 ydot[109] = ((1)*(-1*p1*y[1]*y[2])+(1)*(1*p1*y[1]*y[2]))*(y[98])+((1)*(-1*p1*y[0]*y[2])+(1)*(1*p1*y[0]*y[2]))*(y[99])+((1)*(-1*p1*y[0]*y[1])+(1)*(1*p1*y[0]*y[1]))*(y[100])+((2)*(1*p2*y[3]+1*p2*y[3])-(1)*(2*p2*y[3]+2*p2*y[3]))*(y[101])+(-((2)*(1*p3)))*(y[102])+((1)*(1*p5))*(y[108])+(1)*(y[0]*y[1]*y[2])-(1)*(y[0]*y[1]*y[2]);
 	 ydot[110] = ((sSTAT)*(1*p1*y[1]*y[2]))*(y[98])+((sSTAT)*(1*p1*y[0]*y[2]))*(y[99])+((sSTAT)*(1*p1*y[0]*y[1]))*(y[100])+((sSTAT*2)*(1*p2*y[3]+1*p2*y[3])-(sSTAT)*(2*p2*y[3]+2*p2*y[3]))*(y[101])+(-((sSTAT*2)*(1*p3)))*(y[102])+(sSTAT)*(y[0]*y[1]*y[2]);
 	 ydot[111] = ((-1*beta*y[1]))*(y[98])+((1*2*alpha*time)+(y[0])*(-1*beta))*(y[99]);
 	 ydot[112] = 0;
 	 ydot[113] = (-1*beta)*(y[113]);
 	 ydot[114] = (-1*p1*y[1]*y[2])*(y[112])+(-1*p1*y[0]*y[2])*(y[113])+(-1*p1*y[0]*y[1])*(y[114])+(1*p5)*(y[122])+y[10];
 	 ydot[115] = (1*p1*y[1]*y[2])*(y[112])+(1*p1*y[0]*y[2])*(y[113])+(1*p1*y[0]*y[1])*(y[114])+(-(2*p2*y[3]+2*p2*y[3]))*(y[115]);
 	 ydot[116] = (1*p2*y[3]+1*p2*y[3])*(y[115])+(-(1*p3))*(y[116]);
 	 ydot[117] = (1*p3)*(y[116])+(-(1*p4))*(y[117]);
 	 ydot[118] = (2*p4)*(y[117])+(-(1*p5))*(y[118])+-y[6];
 	 ydot[119] = (1*p5)*(y[118])+(-(1*p5))*(y[119])+y[6]-y[7];
 	 ydot[120] = (1*p5)*(y[119])+(-(1*p5))*(y[120])+y[7]-y[8];
 	 ydot[121] = (1*p5)*(y[120])+(-(1*p5))*(y[121])+y[8]-y[9];
 	 ydot[122] = (1*p5)*(y[121])+(-(1*p5))*(y[122])+y[9]-y[10];
 	 ydot[123] = ((1)*(-1*p1*y[1]*y[2])+(1)*(1*p1*y[1]*y[2]))*(y[112])+((1)*(-1*p1*y[0]*y[2])+(1)*(1*p1*y[0]*y[2]))*(y[113])+((1)*(-1*p1*y[0]*y[1])+(1)*(1*p1*y[0]*y[1]))*(y[114])+((2)*(1*p2*y[3]+1*p2*y[3])-(1)*(2*p2*y[3]+2*p2*y[3]))*(y[115])+(-((2)*(1*p3)))*(y[116])+((1)*(1*p5))*(y[122])+(1)*y[10];
 	 ydot[124] = ((sSTAT)*(1*p1*y[1]*y[2]))*(y[112])+((sSTAT)*(1*p1*y[0]*y[2]))*(y[113])+((sSTAT)*(1*p1*y[0]*y[1]))*(y[114])+((sSTAT*2)*(1*p2*y[3]+1*p2*y[3])-(sSTAT)*(2*p2*y[3]+2*p2*y[3]))*(y[115])+(-((sSTAT*2)*(1*p3)))*(y[116]);
 	 ydot[125] = ((-1*beta*y[1]))*(y[112])+((1*2*alpha*time)+(y[0])*(-1*beta))*(y[113]);
 	 ydot[126] = 0;
 	 ydot[127] = (-1*beta)*(y[127]);
 	 ydot[128] = (-1*p1*y[1]*y[2])*(y[126])+(-1*p1*y[0]*y[2])*(y[127])+(-1*p1*y[0]*y[1])*(y[128])+(1*p5)*(y[136]);
 	 ydot[129] = (1*p1*y[1]*y[2])*(y[126])+(1*p1*y[0]*y[2])*(y[127])+(1*p1*y[0]*y[1])*(y[128])+(-(2*p2*y[3]+2*p2*y[3]))*(y[129])+-(2*y[3]*y[3]);
 	 ydot[130] = (1*p2*y[3]+1*p2*y[3])*(y[129])+(-(1*p3))*(y[130])+y[3]*y[3];
 	 ydot[131] = (1*p3)*(y[130])+(-(1*p4))*(y[131]);
 	 ydot[132] = (2*p4)*(y[131])+(-(1*p5))*(y[132]);
 	 ydot[133] = (1*p5)*(y[132])+(-(1*p5))*(y[133]);
 	 ydot[134] = (1*p5)*(y[133])+(-(1*p5))*(y[134]);
 	 ydot[135] = (1*p5)*(y[134])+(-(1*p5))*(y[135]);
 	 ydot[136] = (1*p5)*(y[135])+(-(1*p5))*(y[136]);
 	 ydot[137] = ((1)*(-1*p1*y[1]*y[2])+(1)*(1*p1*y[1]*y[2]))*(y[126])+((1)*(-1*p1*y[0]*y[2])+(1)*(1*p1*y[0]*y[2]))*(y[127])+((1)*(-1*p1*y[0]*y[1])+(1)*(1*p1*y[0]*y[1]))*(y[128])+((2)*(1*p2*y[3]+1*p2*y[3])-(1)*(2*p2*y[3]+2*p2*y[3]))*(y[129])+(-((2)*(1*p3)))*(y[130])+((1)*(1*p5))*(y[136])+(2)*(y[3]*y[3])-(1)*(2*y[3]*y[3]);
 	 ydot[138] = ((sSTAT)*(1*p1*y[1]*y[2]))*(y[126])+((sSTAT)*(1*p1*y[0]*y[2]))*(y[127])+((sSTAT)*(1*p1*y[0]*y[1]))*(y[128])+((sSTAT*2)*(1*p2*y[3]+1*p2*y[3])-(sSTAT)*(2*p2*y[3]+2*p2*y[3]))*(y[129])+(-((sSTAT*2)*(1*p3)))*(y[130])+(sSTAT*2)*(y[3]*y[3])-(sSTAT)*(2*y[3]*y[3]);
 	 ydot[139] = ((-1*beta*y[1]))*(y[126])+((1*2*alpha*time)+(y[0])*(-1*beta))*(y[127]);
 	 ydot[140] = 0;
 	 ydot[141] = (-1*beta)*(y[141]);
 	 ydot[142] = (-1*p1*y[1]*y[2])*(y[140])+(-1*p1*y[0]*y[2])*(y[141])+(-1*p1*y[0]*y[1])*(y[142])+(1*p5)*(y[150]);
 	 ydot[143] = (1*p1*y[1]*y[2])*(y[140])+(1*p1*y[0]*y[2])*(y[141])+(1*p1*y[0]*y[1])*(y[142])+(-(2*p2*y[3]+2*p2*y[3]))*(y[143]);
 	 ydot[144] = (1*p2*y[3]+1*p2*y[3])*(y[143])+(-(1*p3))*(y[144])+-y[4];
 	 ydot[145] = (1*p3)*(y[144])+(-(1*p4))*(y[145])+y[4];
 	 ydot[146] = (2*p4)*(y[145])+(-(1*p5))*(y[146]);
 	 ydot[147] = (1*p5)*(y[146])+(-(1*p5))*(y[147]);
 	 ydot[148] = (1*p5)*(y[147])+(-(1*p5))*(y[148]);
 	 ydot[149] = (1*p5)*(y[148])+(-(1*p5))*(y[149]);
 	 ydot[150] = (1*p5)*(y[149])+(-(1*p5))*(y[150]);
 	 ydot[151] = ((1)*(-1*p1*y[1]*y[2])+(1)*(1*p1*y[1]*y[2]))*(y[140])+((1)*(-1*p1*y[0]*y[2])+(1)*(1*p1*y[0]*y[2]))*(y[141])+((1)*(-1*p1*y[0]*y[1])+(1)*(1*p1*y[0]*y[1]))*(y[142])+((2)*(1*p2*y[3]+1*p2*y[3])-(1)*(2*p2*y[3]+2*p2*y[3]))*(y[143])+(-((2)*(1*p3)))*(y[144])+((1)*(1*p5))*(y[150])+-((2)*y[4]);
 	 ydot[152] = ((sSTAT)*(1*p1*y[1]*y[2]))*(y[140])+((sSTAT)*(1*p1*y[0]*y[2]))*(y[141])+((sSTAT)*(1*p1*y[0]*y[1]))*(y[142])+((sSTAT*2)*(1*p2*y[3]+1*p2*y[3])-(sSTAT)*(2*p2*y[3]+2*p2*y[3]))*(y[143])+(-((sSTAT*2)*(1*p3)))*(y[144])+-((sSTAT*2)*y[4]);
 	 ydot[153] = ((-1*beta*y[1]))*(y[140])+((1*2*alpha*time)+(y[0])*(-1*beta))*(y[141]);
 	 ydot[154] = 0;
 	 ydot[155] = (-1*beta)*(y[155]);
 	 ydot[156] = (-1*p1*y[1]*y[2])*(y[154])+(-1*p1*y[0]*y[2])*(y[155])+(-1*p1*y[0]*y[1])*(y[156])+(1*p5)*(y[164]);
 	 ydot[157] = (1*p1*y[1]*y[2])*(y[154])+(1*p1*y[0]*y[2])*(y[155])+(1*p1*y[0]*y[1])*(y[156])+(-(2*p2*y[3]+2*p2*y[3]))*(y[157]);
 	 ydot[158] = (1*p2*y[3]+1*p2*y[3])*(y[157])+(-(1*p3))*(y[158]);
 	 ydot[159] = (1*p3)*(y[158])+(-(1*p4))*(y[159])+-y[5];
 	 ydot[160] = (2*p4)*(y[159])+(-(1*p5))*(y[160])+2*y[5];
 	 ydot[161] = (1*p5)*(y[160])+(-(1*p5))*(y[161]);
 	 ydot[162] = (1*p5)*(y[161])+(-(1*p5))*(y[162]);
 	 ydot[163] = (1*p5)*(y[162])+(-(1*p5))*(y[163]);
 	 ydot[164] = (1*p5)*(y[163])+(-(1*p5))*(y[164]);
 	 ydot[165] = ((1)*(-1*p1*y[1]*y[2])+(1)*(1*p1*y[1]*y[2]))*(y[154])+((1)*(-1*p1*y[0]*y[2])+(1)*(1*p1*y[0]*y[2]))*(y[155])+((1)*(-1*p1*y[0]*y[1])+(1)*(1*p1*y[0]*y[1]))*(y[156])+((2)*(1*p2*y[3]+1*p2*y[3])-(1)*(2*p2*y[3]+2*p2*y[3]))*(y[157])+(-((2)*(1*p3)))*(y[158])+((1)*(1*p5))*(y[164]);
 	 ydot[166] = ((sSTAT)*(1*p1*y[1]*y[2]))*(y[154])+((sSTAT)*(1*p1*y[0]*y[2]))*(y[155])+((sSTAT)*(1*p1*y[0]*y[1]))*(y[156])+((sSTAT*2)*(1*p2*y[3]+1*p2*y[3])-(sSTAT)*(2*p2*y[3]+2*p2*y[3]))*(y[157])+(-((sSTAT*2)*(1*p3)))*(y[158]);
 	 ydot[167] = ((-1*beta*y[1]))*(y[154])+((1*2*alpha*time)+(y[0])*(-1*beta))*(y[155]);
 	 ydot[168] = 0;
 	 ydot[169] = (-1*beta)*(y[169]);
 	 ydot[170] = (-1*p1*y[1]*y[2])*(y[168])+(-1*p1*y[0]*y[2])*(y[169])+(-1*p1*y[0]*y[1])*(y[170])+(1*p5)*(y[178]);
 	 ydot[171] = (1*p1*y[1]*y[2])*(y[168])+(1*p1*y[0]*y[2])*(y[169])+(1*p1*y[0]*y[1])*(y[170])+(-(2*p2*y[3]+2*p2*y[3]))*(y[171]);
 	 ydot[172] = (1*p2*y[3]+1*p2*y[3])*(y[171])+(-(1*p3))*(y[172]);
 	 ydot[173] = (1*p3)*(y[172])+(-(1*p4))*(y[173]);
 	 ydot[174] = (2*p4)*(y[173])+(-(1*p5))*(y[174]);
 	 ydot[175] = (1*p5)*(y[174])+(-(1*p5))*(y[175]);
 	 ydot[176] = (1*p5)*(y[175])+(-(1*p5))*(y[176]);
 	 ydot[177] = (1*p5)*(y[176])+(-(1*p5))*(y[177]);
 	 ydot[178] = (1*p5)*(y[177])+(-(1*p5))*(y[178]);
 	 ydot[179] = ((1)*(-1*p1*y[1]*y[2])+(1)*(1*p1*y[1]*y[2]))*(y[168])+((1)*(-1*p1*y[0]*y[2])+(1)*(1*p1*y[0]*y[2]))*(y[169])+((1)*(-1*p1*y[0]*y[1])+(1)*(1*p1*y[0]*y[1]))*(y[170])+((2)*(1*p2*y[3]+1*p2*y[3])-(1)*(2*p2*y[3]+2*p2*y[3]))*(y[171])+(-((2)*(1*p3)))*(y[172])+((1)*(1*p5))*(y[178]);
 	 ydot[180] = ((sSTAT)*(1*p1*y[1]*y[2]))*(y[168])+((sSTAT)*(1*p1*y[0]*y[2]))*(y[169])+((sSTAT)*(1*p1*y[0]*y[1]))*(y[170])+((sSTAT*2)*(1*p2*y[3]+1*p2*y[3])-(sSTAT)*(2*p2*y[3]+2*p2*y[3]))*(y[171])+(-((sSTAT*2)*(1*p3)))*(y[172])+(1*p1*y[0]*y[1]*y[2]-2*p2*y[3]*y[3])+2*(1*p2*y[3]*y[3]-1*p3*y[4]);
 	 ydot[181] = ((-1*beta*y[1]))*(y[168])+((1*2*alpha*time)+(y[0])*(-1*beta))*(y[169]);

}
