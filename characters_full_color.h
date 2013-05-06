/*
:call matchadd('Error', '1')
yank, then :@"
*/

#ifndef CHARACTERS_FULL_COLOR_H
#define CHARACTERS_FULL_COLOR_H

struct character {
	uint8_t* pixels;
	uint8_t width;
};

struct charTable_t {
	uint8_t width[0x80];
	const uint8_t* pixels[0x80];
};

#define SETUP_CHARS() \
struct charTable_t charTable;


#define INIT_CAPITALS() \
INIT_LETTER_A();\
INIT_LETTER_B();\
INIT_LETTER_C();\
INIT_LETTER_D();\
INIT_LETTER_E();\
INIT_LETTER_F();\
INIT_LETTER_G();\
INIT_LETTER_H();\
INIT_LETTER_I();\
INIT_LETTER_J();\
INIT_LETTER_K();\
INIT_LETTER_L();\
INIT_LETTER_M();\
INIT_LETTER_N();\
INIT_LETTER_O();\
INIT_LETTER_P();\
INIT_LETTER_Q();\
INIT_LETTER_R();\
INIT_LETTER_S();\
INIT_LETTER_T();\
INIT_LETTER_U();\
INIT_LETTER_V();\
INIT_LETTER_W();\
INIT_LETTER_X();\
INIT_LETTER_Y();\
INIT_LETTER_Z();

#define LOAD_CAPITALS() \
LOAD_LETTER_A();\
LOAD_LETTER_B();\
LOAD_LETTER_C();\
LOAD_LETTER_D();\
LOAD_LETTER_E();\
LOAD_LETTER_F();\
LOAD_LETTER_G();\
LOAD_LETTER_H();\
LOAD_LETTER_I();\
LOAD_LETTER_J();\
LOAD_LETTER_K();\
LOAD_LETTER_L();\
LOAD_LETTER_M();\
LOAD_LETTER_N();\
LOAD_LETTER_O();\
LOAD_LETTER_P();\
LOAD_LETTER_Q();\
LOAD_LETTER_R();\
LOAD_LETTER_S();\
LOAD_LETTER_T();\
LOAD_LETTER_U();\
LOAD_LETTER_V();\
LOAD_LETTER_W();\
LOAD_LETTER_X();\
LOAD_LETTER_Y();\
LOAD_LETTER_Z();

#define INIT_LOWERCASE() \
INIT_LETTER_a();\
INIT_LETTER_b();\
INIT_LETTER_c();\
INIT_LETTER_d();\
INIT_LETTER_e();\
INIT_LETTER_f();\
INIT_LETTER_g();\
INIT_LETTER_h();\
INIT_LETTER_i();\
INIT_LETTER_j();\
INIT_LETTER_k();\
INIT_LETTER_l();\
INIT_LETTER_m();\
INIT_LETTER_n();\
INIT_LETTER_o();\
INIT_LETTER_p();\
INIT_LETTER_q();\
INIT_LETTER_r();\
INIT_LETTER_s();\
INIT_LETTER_t();\
INIT_LETTER_u();\
INIT_LETTER_v();\
INIT_LETTER_w();\
INIT_LETTER_x();\
INIT_LETTER_y();\
INIT_LETTER_z();

#define LOAD_LOWERCASE() \
LOAD_LETTER_a();\
LOAD_LETTER_b();\
LOAD_LETTER_c();\
LOAD_LETTER_d();\
LOAD_LETTER_e();\
LOAD_LETTER_f();\
LOAD_LETTER_g();\
LOAD_LETTER_h();\
LOAD_LETTER_i();\
LOAD_LETTER_j();\
LOAD_LETTER_k();\
LOAD_LETTER_l();\
LOAD_LETTER_m();\
LOAD_LETTER_n();\
LOAD_LETTER_o();\
LOAD_LETTER_p();\
LOAD_LETTER_q();\
LOAD_LETTER_r();\
LOAD_LETTER_s();\
LOAD_LETTER_t();\
LOAD_LETTER_u();\
LOAD_LETTER_v();\
LOAD_LETTER_w();\
LOAD_LETTER_x();\
LOAD_LETTER_y();\
LOAD_LETTER_z();

#define INIT_NUMBERS() \
INIT_NUMBER_0();\
INIT_NUMBER_1();\
INIT_NUMBER_2();\
INIT_NUMBER_3();\
INIT_NUMBER_4();\
INIT_NUMBER_5();\
INIT_NUMBER_6();\
INIT_NUMBER_7();\
INIT_NUMBER_8();\
INIT_NUMBER_9();

#define LOAD_NUMBERS() \
LOAD_NUMBER_0();\
LOAD_NUMBER_1();\
LOAD_NUMBER_2();\
LOAD_NUMBER_3();\
LOAD_NUMBER_4();\
LOAD_NUMBER_5();\
LOAD_NUMBER_6();\
LOAD_NUMBER_7();\
LOAD_NUMBER_8();\
LOAD_NUMBER_9();

#define INIT_SYMBOLS() \
INIT_SYMBOL_SPACE();\
INIT_SYMBOL_EXCLAMATION_POINT();\
INIT_SYMBOL_PERIOD();\

#define LOAD_SYMBOLS() \
LOAD_SYMBOL_SPACE();\
LOAD_SYMBOL_EXCLAMATION_POINT();\
LOAD_SYMBOL_PERIOD();\

#define INIT_SYMBOL_SPACE() \
static const uint8_t symbol_space_pixels[] PROGMEM = {\
	0,0,0,0,\
	0,0,0,0,\
	0,0,0,0,\
	0,0,0,0,\
	0,0,0,0,\
	0,0,0,0,\
	0,0,0,0,\
	0,0,0,0\
};

#define LOAD_SYMBOL_SPACE() \
charTable.pixels[' '] = symbol_space_pixels;\
charTable.width[' '] = 4;

#define INIT_SYMBOL_EXCLAMATION_POINT() \
static const uint8_t symbol_exclamation_point_pixels[] PROGMEM = {\
	1,1,\
	1,1,\
	1,1,\
	1,1,\
	1,1,\
	0,0,\
	1,1,\
	1,1\
};

#define LOAD_SYMBOL_EXCLAMATION_POINT() \
charTable.pixels['!'] = symbol_exclamation_point_pixels;\
charTable.width['!'] = 2;

#define INIT_SYMBOL_PERIOD() \
static const uint8_t symbol_period_pixels[] PROGMEM = {\
	0,0,\
	0,0,\
	0,0,\
	0,0,\
	0,0,\
	0,0,\
	1,1,\
	1,1\
};

#define LOAD_SYMBOL_PERIOD() \
charTable.pixels['.'] = symbol_period_pixels;\
charTable.width['.'] = 2;

#define INIT_NUMBER_0() \
static const uint8_t number_0_pixels[] PROGMEM = {\
	0,1,1,1,1,0,\
	1,1,1,1,1,1,\
	1,1,0,0,1,1,\
	1,1,1,0,1,1,\
	1,1,0,1,1,1,\
	1,1,0,0,1,1,\
	1,1,1,1,1,1,\
	0,1,1,1,1,0\
};

#define LOAD_NUMBER_0() \
charTable.pixels['0'] = number_0_pixels;\
charTable.width['0'] = 6;

#define INIT_NUMBER_1() \
static const uint8_t number_1_pixels[] PROGMEM = {\
	0,1,1,0,\
	1,1,1,0,\
	0,1,1,0,\
	0,1,1,0,\
	0,1,1,0,\
	0,1,1,0,\
	1,1,1,1,\
	1,1,1,1\
};

#define LOAD_NUMBER_1() \
charTable.pixels['1'] = number_1_pixels;\
charTable.width['1'] = 4;

#define INIT_NUMBER_2() \
static const uint8_t number_2_pixels[] PROGMEM = {\
	0,1,1,1,1,0,\
	1,1,1,1,1,1,\
	1,1,0,0,1,1,\
	0,0,0,1,1,0,\
	0,0,1,1,0,0,\
	0,1,1,0,0,0,\
	1,1,1,1,1,1,\
	1,1,1,1,1,1\
};

#define LOAD_NUMBER_2() \
charTable.pixels['2'] = number_2_pixels;\
charTable.width['2'] = 6;

#define INIT_NUMBER_3() \
static const uint8_t number_3_pixels[] PROGMEM = {\
	0,1,1,1,1,0,\
	1,1,1,1,1,1,\
	0,0,0,0,1,1,\
	0,0,1,1,1,0,\
	0,0,1,1,1,0,\
	0,0,0,0,1,1,\
	1,1,1,1,1,1,\
	0,1,1,1,1,0\
};

#define LOAD_NUMBER_3() \
charTable.pixels['3'] = number_3_pixels;\
charTable.width['3'] = 6;

#define INIT_NUMBER_4() \
static const uint8_t number_4_pixels[] PROGMEM = {\
	1,1,0,1,1,0,\
	1,1,0,1,1,0,\
	1,1,0,1,1,0,\
	1,1,1,1,1,1,\
	1,1,1,1,1,1,\
	0,0,0,1,1,0,\
	0,0,0,1,1,0,\
	0,0,0,1,1,0\
};

#define LOAD_NUMBER_4() \
charTable.pixels['4'] = number_4_pixels;\
charTable.width['4'] = 6;

#define INIT_NUMBER_5() \
static const uint8_t number_5_pixels[] PROGMEM = {\
	1,1,1,1,1,1,\
	1,1,1,1,1,1,\
	1,1,0,0,0,0,\
	1,1,1,1,1,0,\
	1,1,1,1,1,1,\
	0,0,0,0,1,1,\
	1,1,1,1,1,1,\
	1,1,1,1,1,0\
};

#define LOAD_NUMBER_5() \
charTable.pixels['5'] = number_5_pixels;\
charTable.width['5'] = 6;

#define INIT_NUMBER_6() \
static const uint8_t number_6_pixels[] PROGMEM = {\
	0,1,1,1,1,0,\
	1,1,1,1,1,1,\
	1,1,0,0,0,0,\
	1,1,1,1,1,0,\
	1,1,1,1,1,1,\
	1,1,0,0,1,1,\
	1,1,1,1,1,1,\
	0,1,1,1,1,0\
};

#define LOAD_NUMBER_6() \
charTable.pixels['6'] = number_6_pixels;\
charTable.width['6'] = 6;

#define INIT_NUMBER_7() \
static const uint8_t number_7_pixels[] PROGMEM = {\
	1,1,1,1,1,1,\
	1,1,1,1,1,1,\
	0,0,0,0,1,1,\
	0,0,0,1,1,0,\
	0,0,0,1,1,0,\
	0,0,1,1,0,0,\
	0,0,1,1,0,0,\
	0,0,1,1,0,0\
};

#define LOAD_NUMBER_7() \
charTable.pixels['7'] = number_7_pixels;\
charTable.width['7'] = 6;

#define INIT_NUMBER_8() \
static const uint8_t number_8_pixels[] PROGMEM = {\
	0,1,1,1,1,0,\
	1,1,1,1,1,1,\
	1,1,0,0,1,1,\
	0,1,1,1,1,0,\
	0,1,1,1,1,0,\
	1,1,0,0,1,1,\
	1,1,1,1,1,1,\
	0,1,1,1,1,0\
};

#define LOAD_NUMBER_8() \
charTable.pixels['8'] = number_8_pixels;\
charTable.width['8'] = 6;

#define INIT_NUMBER_9() \
static const uint8_t number_9_pixels[] PROGMEM = {\
	0,1,1,1,1,0,\
	1,1,1,1,1,1,\
	1,1,0,0,1,1,\
	1,1,1,1,1,1,\
	0,1,1,1,1,1,\
	0,0,0,0,1,1,\
	0,0,0,1,1,0,\
	0,0,1,1,0,0\
};

#define LOAD_NUMBER_9() \
charTable.pixels['9'] = number_9_pixels;\
charTable.width['9'] = 6;

#define INIT_LETTER_A() \
static const uint8_t letter_A_pixels[] PROGMEM = {\
	0,1,1,1,1,0,\
	1,1,1,1,1,1,\
	1,1,0,0,1,1,\
	1,1,0,0,1,1,\
	1,1,1,1,1,1,\
	1,1,1,1,1,1,\
	1,1,0,0,1,1,\
	1,1,0,0,1,1\
};

#define LOAD_LETTER_A() \
charTable.pixels['A'] = letter_A_pixels;\
charTable.width['A'] = 6;

#define INIT_LETTER_B() \
static const uint8_t letter_B_pixels[] PROGMEM = {\
	1,1,1,1,0,0,\
	1,1,1,1,1,0,\
	1,1,0,1,1,0,\
	1,1,1,1,0,0,\
	1,1,1,1,1,0,\
	1,1,0,0,1,1,\
	1,1,1,1,1,1,\
	1,1,1,1,1,0\
};

#define LOAD_LETTER_B() \
charTable.pixels['B'] = letter_B_pixels;\
charTable.width['B'] = 6;

#define INIT_LETTER_C() \
static const uint8_t letter_C_pixels[] PROGMEM = {\
	0,1,1,1,1,0,\
	1,1,1,1,1,1,\
	1,1,0,0,0,1,\
	1,1,0,0,0,0,\
	1,1,0,0,0,0,\
	1,1,0,0,0,1,\
	1,1,1,1,1,1,\
	0,1,1,1,1,0\
};

#define LOAD_LETTER_C() \
charTable.pixels['C'] = letter_C_pixels;\
charTable.width['C'] = 6;

#define INIT_LETTER_D() \
static const uint8_t letter_D_pixels[] PROGMEM = {\
	1,1,1,1,1,0,\
	1,1,1,1,1,1,\
	1,1,0,0,1,1,\
	1,1,0,0,1,1,\
	1,1,0,0,1,1,\
	1,1,0,0,1,1,\
	1,1,1,1,1,1,\
	1,1,1,1,1,0\
};

#define LOAD_LETTER_D() \
charTable.pixels['D'] = letter_D_pixels;\
charTable.width['D'] = 6;

#define INIT_LETTER_E() \
static const uint8_t letter_E_pixels[] PROGMEM = {\
	1,1,1,1,1,1,\
	1,1,1,1,1,1,\
	1,1,0,0,0,0,\
	1,1,1,1,1,0,\
	1,1,1,1,1,0,\
	1,1,0,0,0,0,\
	1,1,1,1,1,1,\
	1,1,1,1,1,1\
};

#define LOAD_LETTER_E() \
charTable.pixels['E'] = letter_E_pixels;\
charTable.width['E'] = 6;

#define INIT_LETTER_F() \
static const uint8_t letter_F_pixels[] PROGMEM = {\
	1,1,1,1,1,1,\
	1,1,1,1,1,1,\
	1,1,0,0,0,0,\
	1,1,1,1,1,0,\
	1,1,1,1,1,0,\
	1,1,0,0,0,0,\
	1,1,0,0,0,0,\
	1,1,0,0,0,0\
};

#define LOAD_LETTER_F() \
charTable.pixels['F'] = letter_F_pixels;\
charTable.width['F'] = 6;

#define INIT_LETTER_G() \
static const uint8_t letter_G_pixels[] PROGMEM = {\
	0,1,1,1,1,0,\
	1,1,1,1,1,1,\
	1,1,0,0,0,0,\
	1,1,0,0,0,0,\
	1,1,0,1,1,1,\
	1,1,0,0,1,1,\
	1,1,1,1,1,1,\
	0,1,1,1,1,0\
};

#define LOAD_LETTER_G() \
charTable.pixels['G'] = letter_G_pixels;\
charTable.width['G'] = 6;

#define INIT_LETTER_H() \
static const uint8_t letter_H_pixels[] PROGMEM = {\
	1,1,0,0,1,1,\
	1,1,0,0,1,1,\
	1,1,0,0,1,1,\
	1,1,1,1,1,1,\
	1,1,1,1,1,1,\
	1,1,0,0,1,1,\
	1,1,0,0,1,1,\
	1,1,0,0,1,1\
};

#define LOAD_LETTER_H() \
charTable.pixels['H'] = letter_H_pixels;\
charTable.width['H'] = 6;

#define INIT_LETTER_I() \
static const uint8_t letter_I_pixels[] PROGMEM = {\
	1,1,1,1,\
	1,1,1,1,\
	0,1,1,0,\
	0,1,1,0,\
	0,1,1,0,\
	0,1,1,0,\
	1,1,1,1,\
	1,1,1,1\
};

#define LOAD_LETTER_I() \
charTable.pixels['I'] = letter_I_pixels;\
charTable.width['I'] = 4;

#define INIT_LETTER_J() \
static const uint8_t letter_J_pixels[] PROGMEM = {\
	1,1,1,1,1,1,\
	1,1,1,1,1,1,\
	0,0,1,1,0,0,\
	0,0,1,1,0,0,\
	0,0,1,1,0,0,\
	0,0,1,1,0,0,\
	1,1,1,1,0,0,\
	0,1,1,0,0,0\
};

#define LOAD_LETTER_J() \
charTable.pixels['J'] = letter_J_pixels;\
charTable.width['J'] = 6;

#define INIT_LETTER_K() \
static const uint8_t letter_K_pixels[] PROGMEM = {\
	1,1,0,0,1,1,\
	1,1,0,1,1,1,\
	1,1,1,1,1,0,\
	1,1,1,1,0,0,\
	1,1,1,1,0,0,\
	1,1,1,1,1,0,\
	1,1,0,1,1,1,\
	1,1,0,0,1,1\
};

#define LOAD_LETTER_K() \
charTable.pixels['K'] = letter_K_pixels;\
charTable.width['K'] = 6;

#define INIT_LETTER_L() \
static const uint8_t letter_L_pixels[] PROGMEM = {\
	1,1,0,0,0,0,\
	1,1,0,0,0,0,\
	1,1,0,0,0,0,\
	1,1,0,0,0,0,\
	1,1,0,0,0,0,\
	1,1,0,0,0,0,\
	1,1,1,1,1,1,\
	1,1,1,1,1,1\
};

#define LOAD_LETTER_L() \
charTable.pixels['L'] = letter_L_pixels;\
charTable.width['L'] = 6;

#define INIT_LETTER_M() \
static const uint8_t letter_M_pixels[] PROGMEM = {\
	1,1,1,0,1,1,0,\
	1,1,1,1,1,1,1,\
	1,1,0,1,0,1,1,\
	1,1,0,1,0,1,1,\
	1,1,0,0,0,1,1,\
	1,1,0,0,0,1,1,\
	1,1,0,0,0,1,1,\
	1,1,0,0,0,1,1\
};

#define LOAD_LETTER_M() \
charTable.pixels['M'] = letter_M_pixels;\
charTable.width['M'] = 7;

#define INIT_LETTER_N() \
static const uint8_t letter_N_pixels[] PROGMEM = {\
	1,1,0,0,0,1,1,\
	1,1,0,0,0,1,1,\
	1,1,1,0,0,1,1,\
	1,1,1,1,0,1,1,\
	1,1,0,1,1,1,1,\
	1,1,0,0,1,1,1,\
	1,1,0,0,0,1,1,\
	1,1,0,0,0,1,1\
};

#define LOAD_LETTER_N() \
charTable.pixels['N'] = letter_N_pixels;\
charTable.width['N'] = 7;

#define INIT_LETTER_O() \
static const uint8_t letter_O_pixels[] PROGMEM = {\
	0,1,1,1,1,0,\
	1,1,1,1,1,1,\
	1,1,0,0,1,1,\
	1,1,0,0,1,1,\
	1,1,0,0,1,1,\
	1,1,0,0,1,1,\
	1,1,1,1,1,1,\
	0,1,1,1,1,0\
};

#define LOAD_LETTER_O() \
charTable.pixels['O'] = letter_O_pixels;\
charTable.width['O'] = 6;

#define INIT_LETTER_P() \
static const uint8_t letter_P_pixels[] PROGMEM = {\
	1,1,1,1,1,0,\
	1,1,1,1,1,1,\
	1,1,0,0,1,1,\
	1,1,1,1,1,1,\
	1,1,1,1,1,0,\
	1,1,0,0,0,0,\
	1,1,0,0,0,0,\
	1,1,0,0,0,0\
};

#define LOAD_LETTER_P() \
charTable.pixels['P'] = letter_P_pixels;\
charTable.width['P'] = 6;

#define INIT_LETTER_Q() \
static const uint8_t letter_Q_pixels[] PROGMEM = {\
	0,1,1,1,1,0,\
	1,1,1,1,1,1,\
	1,1,0,0,0,1,\
	1,1,0,0,0,1,\
	1,1,0,0,0,1,\
	1,1,0,1,1,0,\
	1,1,0,1,1,1,\
	0,1,1,0,1,1\
};

#define LOAD_LETTER_Q() \
charTable.pixels['Q'] = letter_Q_pixels;\
charTable.width['Q'] = 6;

#define INIT_LETTER_R() \
static const uint8_t letter_R_pixels[] PROGMEM = {\
	1,1,1,1,1,0,\
	1,1,1,1,1,1,\
	1,1,0,0,1,1,\
	1,1,0,0,1,1,\
	1,1,1,1,1,0,\
	1,1,1,1,0,0,\
	1,1,0,1,1,0,\
	1,1,0,0,1,1\
};

#define LOAD_LETTER_R() \
charTable.pixels['R'] = letter_R_pixels;\
charTable.width['R'] = 6;

#define INIT_LETTER_S() \
static const uint8_t letter_S_pixels[] PROGMEM = {\
	0,1,1,1,1,0,\
	1,1,1,1,1,0,\
	1,1,0,0,0,0,\
	1,1,1,1,1,0,\
	0,1,1,1,1,1,\
	0,0,0,0,1,1,\
	1,1,1,1,1,1,\
	1,1,1,1,1,0\
};

#define LOAD_LETTER_S() \
charTable.pixels['S'] = letter_S_pixels;\
charTable.width['S'] = 6;

#define INIT_LETTER_T() \
static const uint8_t letter_T_pixels[] PROGMEM = {\
	1,1,1,1,1,1,\
	1,1,1,1,1,1,\
	0,0,1,1,0,0,\
	0,0,1,1,0,0,\
	0,0,1,1,0,0,\
	0,0,1,1,0,0,\
	0,0,1,1,0,0,\
	0,0,1,1,0,0\
};

#define LOAD_LETTER_T() \
charTable.pixels['T'] = letter_T_pixels;\
charTable.width['T'] = 6;

#define INIT_LETTER_U() \
static const uint8_t letter_U_pixels[] PROGMEM = {\
	1,1,0,0,1,1,\
	1,1,0,0,1,1,\
	1,1,0,0,1,1,\
	1,1,0,0,1,1,\
	1,1,0,0,1,1,\
	1,1,0,0,1,1,\
	1,1,1,1,1,1,\
	0,1,1,1,1,0\
};

#define LOAD_LETTER_U() \
charTable.pixels['U'] = letter_U_pixels;\
charTable.width['U'] = 6;

#define INIT_LETTER_V() \
static const uint8_t letter_V_pixels[] PROGMEM = {\
	1,1,0,0,1,1,\
	1,1,0,0,1,1,\
	1,1,0,0,1,1,\
	1,1,0,0,1,1,\
	1,1,0,0,1,1,\
	1,1,1,1,1,1,\
	0,1,1,1,1,0,\
	0,0,1,1,0,0\
};

#define LOAD_LETTER_V() \
charTable.pixels['V'] = letter_V_pixels;\
charTable.width['V'] = 6;

#define INIT_LETTER_W() \
static const uint8_t letter_W_pixels[] PROGMEM = {\
	1,1,0,0,0,1,1,\
	1,1,0,0,0,1,1,\
	1,1,0,0,0,1,1,\
	1,1,0,1,0,1,1,\
	1,1,0,1,0,1,1,\
	1,1,0,1,0,1,1,\
	1,1,1,1,1,1,1,\
	0,1,1,0,1,1,0\
};

#define LOAD_LETTER_W() \
charTable.pixels['W'] = letter_W_pixels;\
charTable.width['W'] = 7;

#define INIT_LETTER_X() \
static const uint8_t letter_X_pixels[] PROGMEM = {\
	1,1,0,0,1,1,\
	1,1,0,0,1,1,\
	0,1,1,1,1,0,\
	0,0,1,1,0,0,\
	0,0,1,1,0,0,\
	0,1,1,1,1,0,\
	1,1,0,0,1,1,\
	1,1,0,0,1,1\
};

#define LOAD_LETTER_X() \
charTable.pixels['X'] = letter_X_pixels;\
charTable.width['X'] = 6;

#define INIT_LETTER_Y() \
static const uint8_t letter_Y_pixels[] PROGMEM = {\
	1,1,0,0,1,1,\
	1,1,0,0,1,1,\
	1,1,0,0,1,1,\
	0,1,1,1,1,0,\
	0,0,1,1,0,0,\
	0,0,1,1,0,0,\
	0,0,1,1,0,0,\
	0,0,1,1,0,0\
};

#define LOAD_LETTER_Y() \
charTable.pixels['Y'] = letter_Y_pixels;\
charTable.width['Y'] = 6;

#define INIT_LETTER_Z() \
static const uint8_t letter_Z_pixels[] PROGMEM = {\
	1,1,1,1,1,1,\
	1,1,1,1,1,1,\
	0,0,0,1,1,1,\
	0,0,1,1,1,0,\
	0,1,1,1,0,0,\
	1,1,1,0,0,0,\
	1,1,1,1,1,1,\
	1,1,1,1,1,1\
};

#define LOAD_LETTER_Z() \
charTable.pixels['Z'] = letter_Z_pixels;\
charTable.width['Z'] = 6;

#define INIT_LETTER_a() \
static const uint8_t letter_a_pixels[] PROGMEM = {\
	0,0,0,0,0,0,\
	0,0,0,0,0,0,\
	0,1,1,1,1,0,\
	1,1,1,1,1,0,\
	1,1,0,1,1,0,\
	1,1,0,1,1,0,\
	1,1,1,1,1,0,\
	0,1,1,1,0,1\
};

#define LOAD_LETTER_a() \
charTable.pixels['a'] = letter_a_pixels;\
charTable.width['a'] = 6;

#define INIT_LETTER_b() \
static const uint8_t letter_b_pixels[] PROGMEM = {\
	1,1,0,0,0,\
	1,1,0,0,0,\
	1,1,0,0,0,\
	1,1,1,1,0,\
	1,1,1,1,1,\
	1,1,0,1,1,\
	1,1,1,1,1,\
	1,1,1,1,0\
};

#define LOAD_LETTER_b() \
charTable.pixels['b'] = letter_b_pixels;\
charTable.width['b'] = 5;

#define INIT_LETTER_c() \
static const uint8_t letter_c_pixels[] PROGMEM = {\
	0,0,0,0,0,\
	0,0,0,0,0,\
	0,1,1,1,0,\
	1,1,1,1,1,\
	1,1,0,0,0,\
	1,1,0,0,0,\
	1,1,1,1,1,\
	0,1,1,1,0\
};

#define LOAD_LETTER_c() \
charTable.pixels['c'] = letter_c_pixels;\
charTable.width['c'] = 5;

#define INIT_LETTER_d() \
static const uint8_t letter_d_pixels[] PROGMEM = {\
	0,0,0,1,1,\
	0,0,0,1,1,\
	0,0,0,1,1,\
	0,1,1,1,1,\
	1,1,1,1,1,\
	1,1,0,1,1,\
	1,1,1,1,1,\
	0,1,1,1,1\
};

#define LOAD_LETTER_d() \
charTable.pixels['d'] = letter_d_pixels;\
charTable.width['d'] = 5;

#define INIT_LETTER_e() \
static const uint8_t letter_e_pixels[] PROGMEM = {\
	0,0,0,0,0,\
	0,1,1,1,0,\
	1,1,1,1,1,\
	1,1,0,1,1,\
	1,1,1,1,0,\
	1,1,0,0,0,\
	1,1,1,1,1,\
	0,1,1,1,0\
};

#define LOAD_LETTER_e() \
charTable.pixels['e'] = letter_e_pixels;\
charTable.width['e'] = 5;

#define INIT_LETTER_f() \
static const uint8_t letter_f_pixels[] PROGMEM = {\
	0,0,1,1,0,\
	0,1,1,1,1,\
	0,1,1,0,0,\
	1,1,1,1,0,\
	1,1,1,1,0,\
	0,1,1,0,0,\
	0,1,1,0,0,\
	0,1,1,0,0\
};

#define LOAD_LETTER_f() \
charTable.pixels['f'] = letter_f_pixels;\
charTable.width['f'] = 5;

#define INIT_LETTER_g() \
static const uint8_t letter_g_pixels[] PROGMEM = {\
	0,1,1,1,1,\
	1,1,0,1,1,\
	1,1,0,1,1,\
	0,1,1,1,1,\
	0,0,0,1,1,\
	1,0,0,1,1,\
	1,1,1,1,1,\
	0,1,1,1,0\
};

#define LOAD_LETTER_g() \
charTable.pixels['g'] = letter_g_pixels;\
charTable.width['g'] = 5;

#define INIT_LETTER_h() \
static const uint8_t letter_h_pixels[] PROGMEM = {\
	1,1,0,0,0,\
	1,1,0,0,0,\
	1,1,0,0,0,\
	1,1,1,1,0,\
	1,1,1,1,1,\
	1,1,0,1,1,\
	1,1,0,1,1,\
	1,1,0,1,1\
};

#define LOAD_LETTER_h() \
charTable.pixels['h'] = letter_h_pixels;\
charTable.width['h'] = 5;

#define INIT_LETTER_i() \
static const uint8_t letter_i_pixels[] PROGMEM = {\
	0,0,\
	1,1,\
	1,1,\
	0,0,\
	1,1,\
	1,1,\
	1,1,\
	1,1\
};

#define LOAD_LETTER_i() \
charTable.pixels['i'] = letter_i_pixels;\
charTable.width['i'] = 2;

#define INIT_LETTER_j() \
static const uint8_t letter_j_pixels[] PROGMEM = {\
	0,0,1,1,\
	0,0,1,1,\
	0,0,0,0,\
	0,0,1,1,\
	0,0,1,1,\
	0,0,1,1,\
	1,1,1,1,\
	0,1,1,0\
};

#define LOAD_LETTER_j() \
charTable.pixels['j'] = letter_j_pixels;\
charTable.width['j'] = 4;

#define INIT_LETTER_k() \
static const uint8_t letter_k_pixels[] PROGMEM = {\
	1,1,0,0,0,\
	1,1,0,0,0,\
	1,1,0,1,1,\
	1,1,1,1,1,\
	1,1,1,1,0,\
	1,1,1,1,0,\
	1,1,1,1,1,\
	1,1,0,1,1\
};

#define LOAD_LETTER_k() \
charTable.pixels['k'] = letter_k_pixels;\
charTable.width['k'] = 5;

#define INIT_LETTER_l() \
static const uint8_t letter_l_pixels[] PROGMEM = {\
	1,1,0,\
	1,1,0,\
	1,1,0,\
	1,1,0,\
	1,1,0,\
	1,1,0,\
	1,1,1,\
	0,1,1\
};

#define LOAD_LETTER_l() \
charTable.pixels['l'] = letter_l_pixels;\
charTable.width['l'] = 3;

#define INIT_LETTER_m() \
static const uint8_t letter_m_pixels[] PROGMEM = {\
	0,0,0,0,0,0,0,\
	0,0,0,0,0,0,0,\
	0,0,0,0,0,0,0,\
	1,1,1,0,1,1,0,\
	1,1,1,1,1,1,1,\
	1,1,0,1,0,1,1,\
	1,1,0,0,0,1,1,\
	1,1,0,0,0,1,1\
};

#define LOAD_LETTER_m() \
charTable.pixels['m'] = letter_m_pixels;\
charTable.width['m'] = 7;

#define INIT_LETTER_n() \
static const uint8_t letter_n_pixels[] PROGMEM = {\
	0,0,0,0,0,\
	0,0,0,0,0,\
	0,0,0,0,0,\
	1,0,1,1,0,\
	1,1,1,1,1,\
	1,1,0,1,1,\
	1,1,0,1,1,\
	1,1,0,1,1\
};

#define LOAD_LETTER_n() \
charTable.pixels['n'] = letter_n_pixels;\
charTable.width['n'] = 5;

#define INIT_LETTER_o() \
static const uint8_t letter_o_pixels[] PROGMEM = {\
	0,0,0,0,0,\
	0,0,0,0,0,\
	0,1,1,1,0,\
	1,1,1,1,1,\
	1,1,0,1,1,\
	1,1,0,1,1,\
	1,1,1,1,1,\
	0,1,1,1,0\
};

#define LOAD_LETTER_o() \
charTable.pixels['o'] = letter_o_pixels;\
charTable.width['o'] = 5;

#define INIT_LETTER_p() \
static const uint8_t letter_p_pixels[] PROGMEM = {\
	0,0,0,0,0,\
	1,1,1,1,0,\
	1,1,1,1,1,\
	1,1,0,1,1,\
	1,1,1,1,1,\
	1,1,1,1,0,\
	1,1,0,0,0,\
	1,1,0,0,0\
};

#define LOAD_LETTER_p() \
charTable.pixels['p'] = letter_p_pixels;\
charTable.width['p'] = 5;

#define INIT_LETTER_q() \
static const uint8_t letter_q_pixels[] PROGMEM = {\
	0,0,0,0,0,0,\
	0,1,1,1,1,0,\
	1,1,0,1,1,0,\
	1,1,0,1,1,0,\
	0,1,1,1,1,0,\
	0,0,0,1,1,0,\
	0,0,0,1,1,1,\
	0,0,0,1,1,1\
};

#define LOAD_LETTER_q() \
charTable.pixels['q'] = letter_q_pixels;\
charTable.width['q'] = 6;

#define INIT_LETTER_r() \
static const uint8_t letter_r_pixels[] PROGMEM = {\
	0,0,0,0,0,\
	0,0,0,0,0,\
	1,1,1,1,0,\
	1,1,1,1,1,\
	1,1,0,1,1,\
	1,1,0,0,0,\
	1,1,0,0,0,\
	1,1,0,0,0\
};

#define LOAD_LETTER_r() \
charTable.pixels['r'] = letter_r_pixels;\
charTable.width['r'] = 5;

#define INIT_LETTER_s() \
static const uint8_t letter_s_pixels[] PROGMEM = {\
	0,0,0,0,0,\
	0,1,1,1,1,\
	1,1,1,1,1,\
	1,1,0,0,0,\
	0,1,1,1,0,\
	0,0,0,0,1,\
	1,1,1,1,1,\
	1,1,1,1,0\
};

#define LOAD_LETTER_s() \
charTable.pixels['s'] = letter_s_pixels;\
charTable.width['s'] = 5;

#define INIT_LETTER_t() \
static const uint8_t letter_t_pixels[] PROGMEM = {\
	0,1,1,0,0,\
	0,1,1,0,0,\
	1,1,1,1,0,\
	1,1,1,1,0,\
	0,1,1,0,0,\
	0,1,1,0,0,\
	0,1,1,1,1,\
	0,0,1,1,0\
};

#define LOAD_LETTER_t() \
charTable.pixels['t'] = letter_t_pixels;\
charTable.width['t'] = 5;

#define INIT_LETTER_u() \
static const uint8_t letter_u_pixels[] PROGMEM = {\
	0,0,0,0,0,\
	0,0,0,0,0,\
	0,0,0,0,0,\
	1,1,0,1,1,\
	1,1,0,1,1,\
	1,1,0,1,1,\
	1,1,1,1,1,\
	0,1,1,0,1\
};

#define LOAD_LETTER_u() \
charTable.pixels['u'] = letter_u_pixels;\
charTable.width['u'] = 5;

#define INIT_LETTER_v() \
static const uint8_t letter_v_pixels[] PROGMEM = {\
	0,0,0,0,0,\
	0,0,0,0,0,\
	0,0,0,0,0,\
	1,1,0,1,1,\
	1,1,0,1,1,\
	1,1,1,1,1,\
	0,1,1,1,0,\
	0,0,1,0,0\
};

#define LOAD_LETTER_v() \
charTable.pixels['v'] = letter_v_pixels;\
charTable.width['v'] = 5;

#define INIT_LETTER_w() \
static const uint8_t letter_w_pixels[] PROGMEM = {\
	0,0,0,0,0,0,0,\
	0,0,0,0,0,0,0,\
	0,0,0,0,0,0,0,\
	1,1,0,0,0,1,1,\
	1,1,0,0,0,1,1,\
	1,1,0,1,0,1,1,\
	1,1,1,1,1,1,1,\
	0,1,1,0,1,1,0\
};

#define LOAD_LETTER_w() \
charTable.pixels['w'] = letter_w_pixels;\
charTable.width['w'] = 7;

#define INIT_LETTER_x() \
static const uint8_t letter_x_pixels[] PROGMEM = {\
	0,0,0,0,0,\
	0,0,0,0,0,\
	1,1,0,1,1,\
	1,1,1,1,1,\
	0,1,1,1,0,\
	0,1,1,1,0,\
	1,1,1,1,1,\
	1,1,0,1,1\
};

#define LOAD_LETTER_x() \
charTable.pixels['x'] = letter_x_pixels;\
charTable.width['x'] = 5;

#define INIT_LETTER_y() \
static const uint8_t letter_y_pixels[] PROGMEM = {\
	0,0,0,0,0,\
	0,0,0,0,0,\
	1,1,0,1,1,\
	1,1,1,1,1,\
	0,1,1,1,1,\
	0,0,0,1,1,\
	1,1,1,1,1,\
	0,1,1,1,0\
};

#define LOAD_LETTER_y() \
charTable.pixels['y'] = letter_y_pixels;\
charTable.width['y'] = 5;

#define INIT_LETTER_z() \
static const uint8_t letter_z_pixels[] PROGMEM = {\
	0,0,0,0,0,\
	0,0,0,0,0,\
	1,1,1,1,1,\
	1,1,1,1,1,\
	0,0,1,1,0,\
	0,1,1,0,0,\
	1,1,1,1,1,\
	1,1,1,1,1\
};

#define LOAD_LETTER_z() \
charTable.pixels['z'] = letter_z_pixels;\
charTable.width['z'] = 5;


#endif // CHARACTERS_FULL_COLOR_H
