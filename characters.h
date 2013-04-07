#ifndef CHARACTERS_H
#define CHARACTERS_H

#define INIT_LETTER_A() \
struct character letter_A;\
letter_A.colCount = 6;\
uint8_t letter_A_cols[6] = {\
	0b01111111,\
	0b11111111,\
	0b11001100,\
	0b11001100,\
	0b11111111,\
	0b01111111\
};\
letter_A.cols = letter_A_cols;

#define INIT_LETTER_B() \
struct character letter_B;\
letter_B.colCount = 6;\
uint8_t letter_B_cols[6] = {\
	0b00000110,\
	0b01101111,\
	0b11111011,\
	0b11011011,\
	0b11111111,\
	0b11111111\
};\
letter_B.cols = letter_B_cols;

#define INIT_LETTER_C() \
struct character letter_C;\
letter_C.colCount = 6;\
uint8_t letter_C_cols[6] = {\
	0b01100110,\
	0b11000011,\
	0b11000011,\
	0b11000011,\
	0b11111111,\
	0b01111110\
};\
letter_C.cols = letter_C_cols;

#define INIT_LETTER_D() \
struct character letter_D;\
letter_D.colCount = 6;\
uint8_t letter_D_cols[6] = {\
	0b01111110,\
	0b11111111,\
	0b11000011,\
	0b11000011,\
	0b11111111,\
	0b11111111\
};\
letter_D.cols = letter_D_cols;

/*

#define INIT_LETTER_E() \
struct character letter_E;\
letter_E.colCount = @;\
uint8_t letter_E_cols[@] = {\
	0b00000000,\
	0b00000000,\
	0b00000000,\
	0b00000000,\
	0b00000000,\
	0b00000000\
};\
letter_E.cols = letter_E_cols;

#define INIT_LETTER_F() \
struct character letter_F;\
letter_F.colCount = @;\
uint8_t letter_F_cols[@] = {\
	0b00000000,\
	0b00000000,\
	0b00000000,\
	0b00000000,\
	0b00000000,\
	0b00000000\
};\
letter_F.cols = letter_F_cols;

*/

#define INIT_LETTER_G() \
struct character letter_G;\
letter_G.colCount = 6;\
uint8_t letter_G_cols[6] = {\
	0b01001110,\
	0b11001111,\
	0b11001011,\
	0b11000011,\
	0b11111111,\
	0b01111110\
};\
letter_G.cols = letter_G_cols;

#define INIT_LETTER_H() \
struct character letter_H;\
letter_H.colCount = 6;\
uint8_t letter_H_cols[6] = {\
	0b11111111,\
	0b11111111,\
	0b00011000,\
	0b00011000,\
	0b11111111,\
	0b11111111\
};\
letter_H.cols = letter_H_cols;


#define INIT_LETTER_I() \
struct character letter_I;\
letter_I.colCount = 4;\
uint8_t letter_I_cols[4] = {\
	0b11000011,\
	0b11111111,\
	0b11111111,\
	0b11000011\
};\
letter_I.cols = letter_I_cols;

/*

#define INIT_LETTER_J() \
struct character letter_J;\
letter_J.colCount = @;\
uint8_t letter_J_cols[@] = {\
	0b00000000,\
	0b00000000,\
	0b00000000,\
	0b00000000,\
	0b00000000,\
	0b00000000\
};\
letter_J.cols = letter_J_cols;

#define INIT_LETTER_K() \
struct character letter_K;\
letter_K.colCount = @;\
uint8_t letter_K_cols[@] = {\
	0b00000000,\
	0b00000000,\
	0b00000000,\
	0b00000000,\
	0b00000000,\
	0b00000000\
};\
letter_K.cols = letter_K_cols;

#define INIT_LETTER_L() \
struct character letter_L;\
letter_L.colCount = @;\
uint8_t letter_L_cols[@] = {\
	0b00000000,\
	0b00000000,\
	0b00000000,\
	0b00000000,\
	0b00000000,\
	0b00000000\
};\
letter_L.cols = letter_L_cols;

#define INIT_LETTER_M() \
struct character letter_M;\
letter_M.colCount = @;\
uint8_t letter_M_cols[@] = {\
	0b00000000,\
	0b00000000,\
	0b00000000,\
	0b00000000,\
	0b00000000,\
	0b00000000\
};\
letter_M.cols = letter_M_cols;

#define INIT_LETTER_N() \
struct character letter_N;\
letter_N.colCount = @;\
uint8_t letter_N_cols[@] = {\
	0b00000000,\
	0b00000000,\
	0b00000000,\
	0b00000000,\
	0b00000000,\
	0b00000000\
};\
letter_N.cols = letter_N_cols;

#define INIT_LETTER_O() \
struct character letter_O;\
letter_O.colCount = @;\
uint8_t letter_O_cols[@] = {\
	0b00000000,\
	0b00000000,\
	0b00000000,\
	0b00000000,\
	0b00000000,\
	0b00000000\
};\
letter_O.cols = letter_O_cols;

*/

#define INIT_LETTER_P() \
struct character letter_P;\
letter_P.colCount = 6;\
uint8_t letter_P_cols[6] = {\
	0b01110000,\
	0b11111000,\
	0b11011000,\
	0b11011000,\
	0b11111111,\
	0b11111111\
};\
letter_P.cols = letter_P_cols;

/*

#define INIT_LETTER_Q() \
struct character letter_Q;\
letter_Q.colCount = @;\
uint8_t letter_Q_cols[@] = {\
	0b00000000,\
	0b00000000,\
	0b00000000,\
	0b00000000,\
	0b00000000,\
	0b00000000\
};\
letter_Q.cols = letter_Q_cols;

#define INIT_LETTER_R() \
struct character letter_R;\
letter_R.colCount = @;\
uint8_t letter_R_cols[@] = {\
	0b00000000,\
	0b00000000,\
	0b00000000,\
	0b00000000,\
	0b00000000,\
	0b00000000\
};\
letter_R.cols = letter_R_cols;

#define INIT_LETTER_S() \
struct character letter_S;\
letter_S.colCount = @;\
uint8_t letter_S_cols[@] = {\
	0b00000000,\
	0b00000000,\
	0b00000000,\
	0b00000000,\
	0b00000000,\
	0b00000000\
};\
letter_S.cols = letter_S_cols;

#define INIT_LETTER_T() \
struct character letter_T;\
letter_T.colCount = @;\
uint8_t letter_T_cols[@] = {\
	0b00000000,\
	0b00000000,\
	0b00000000,\
	0b00000000,\
	0b00000000,\
	0b00000000\
};\
letter_T.cols = letter_T_cols;

#define INIT_LETTER_U() \
struct character letter_U;\
letter_U.colCount = @;\
uint8_t letter_U_cols[@] = {\
	0b00000000,\
	0b00000000,\
	0b00000000,\
	0b00000000,\
	0b00000000,\
	0b00000000\
};\
letter_U.cols = letter_U_cols;

#define INIT_LETTER_V() \
struct character letter_V;\
letter_V.colCount = @;\
uint8_t letter_V_cols[@] = {\
	0b00000000,\
	0b00000000,\
	0b00000000,\
	0b00000000,\
	0b00000000,\
	0b00000000\
};\
letter_V.cols = letter_V_cols;

*/

#define INIT_LETTER_W() \
struct character letter_W;\
letter_W.colCount = 7;\
uint8_t letter_W_cols[7] = {\
	0b11111110,\
	0b11111111,\
	0b00000011,\
	0b00011110,\
	0b00000011,\
	0b11111111,\
	0b11111110\
};\
letter_W.cols = letter_W_cols;

/*

#define INIT_LETTER_X() \
struct character letter_X;\
letter_X.colCount = @;\
uint8_t letter_X_cols[@] = {\
	0b00000000,\
	0b00000000,\
	0b00000000,\
	0b00000000,\
	0b00000000,\
	0b00000000\
};\
letter_X.cols = letter_X_cols;

#define INIT_LETTER_Y() \
struct character letter_Y;\
letter_Y.colCount = @;\
uint8_t letter_Y_cols[@] = {\
	0b00000000,\
	0b00000000,\
	0b00000000,\
	0b00000000,\
	0b00000000,\
	0b00000000\
};\
letter_Y.cols = letter_Y_cols;

#define INIT_LETTER_Z() \
struct character letter_Z;\
letter_Z.colCount = @;\
uint8_t letter_Z_cols[@] = {\
	0b00000000,\
	0b00000000,\
	0b00000000,\
	0b00000000,\
	0b00000000,\
	0b00000000\
};\
letter_Z.cols = letter_Z_cols;

#define INIT_LETTER_a() \
struct character letter_a;\
letter_a.colCount = @;\
uint8_t letter_a_cols[@] = {\
	0b00000000,\
	0b00000000,\
	0b00000000,\
	0b00000000,\
	0b00000000,\
	0b00000000\
};\
letter_a.cols = letter_a_cols;

#define INIT_LETTER_b() \
struct character letter_b;\
letter_b.colCount = @;\
uint8_t letter_b_cols[@] = {\
	0b00000000,\
	0b00000000,\
	0b00000000,\
	0b00000000,\
	0b00000000,\
	0b00000000\
};\
letter_b.cols = letter_b_cols;

#define INIT_LETTER_c() \
struct character letter_c;\
letter_c.colCount = @;\
uint8_t letter_c_cols[@] = {\
	0b00000000,\
	0b00000000,\
	0b00000000,\
	0b00000000,\
	0b00000000,\
	0b00000000\
};\
letter_c.cols = letter_c_cols;

#define INIT_LETTER_d() \
struct character letter_d;\
letter_d.colCount = @;\
uint8_t letter_d_cols[@] = {\
	0b00000000,\
	0b00000000,\
	0b00000000,\
	0b00000000,\
	0b00000000,\
	0b00000000\
};\
letter_d.cols = letter_d_cols;

*/

#define INIT_LETTER_e() \
struct character letter_e;\
letter_e.colCount = 5;\
uint8_t letter_e_cols[5] = {\
	0b00110010,\
	0b01111011,\
	0b01101011,\
	0b01111111,\
	0b00111110\
};\
letter_e.cols = letter_e_cols;

/*

#define INIT_LETTER_f() \
struct character letter_f;\
letter_f.colCount = @;\
uint8_t letter_f_cols[@] = {\
	0b00000000,\
	0b00000000,\
	0b00000000,\
	0b00000000,\
	0b00000000,\
	0b00000000\
};\
letter_f.cols = letter_f_cols;

#define INIT_LETTER_g() \
struct character letter_g;\
letter_g.colCount = @;\
uint8_t letter_g_cols[@] = {\
	0b00000000,\
	0b00000000,\
	0b00000000,\
	0b00000000,\
	0b00000000,\
	0b00000000\
};\
letter_g.cols = letter_g_cols;

#define INIT_LETTER_h() \
struct character letter_h;\
letter_h.colCount = @;\
uint8_t letter_h_cols[@] = {\
	0b00000000,\
	0b00000000,\
	0b00000000,\
	0b00000000,\
	0b00000000,\
	0b00000000\
};\
letter_h.cols = letter_h_cols;

#define INIT_LETTER_i() \
struct character letter_i;\
letter_i.colCount = @;\
uint8_t letter_i_cols[@] = {\
	0b00000000,\
	0b00000000,\
	0b00000000,\
	0b00000000,\
	0b00000000,\
	0b00000000\
};\
letter_i.cols = letter_i_cols;

#define INIT_LETTER_j() \
struct character letter_j;\
letter_j.colCount = @;\
uint8_t letter_j_cols[@] = {\
	0b00000000,\
	0b00000000,\
	0b00000000,\
	0b00000000,\
	0b00000000,\
	0b00000000\
};\
letter_j.cols = letter_j_cols;

#define INIT_LETTER_k() \
struct character letter_k;\
letter_k.colCount = @;\
uint8_t letter_k_cols[@] = {\
	0b00000000,\
	0b00000000,\
	0b00000000,\
	0b00000000,\
	0b00000000,\
	0b00000000\
};\
letter_k.cols = letter_k_cols;

*/

#define INIT_LETTER_l() \
struct character letter_l;\
letter_l.colCount = 3;\
uint8_t letter_l_cols[3] = {\
	0b00000011,\
	0b11111111,\
	0b11111110\
};\
letter_l.cols = letter_l_cols;

/*

#define INIT_LETTER_m() \
struct character letter_m;\
letter_m.colCount = @;\
uint8_t letter_m_cols[@] = {\
	0b00000000,\
	0b00000000,\
	0b00000000,\
	0b00000000,\
	0b00000000,\
	0b00000000\
};\
letter_m.cols = letter_m_cols;

#define INIT_LETTER_n() \
struct character letter_n;\
letter_n.colCount = @;\
uint8_t letter_n_cols[@] = {\
	0b00000000,\
	0b00000000,\
	0b00000000,\
	0b00000000,\
	0b00000000,\
	0b00000000\
};\
letter_n.cols = letter_n_cols;

*/

#define INIT_LETTER_o() \
struct character letter_o;\
letter_o.colCount = 5;\
uint8_t letter_o_cols[5] = {\
	0b00011110,\
	0b00111111,\
	0b00110011,\
	0b00111111,\
	0b00011110\
};\
letter_o.cols = letter_o_cols;

/*

#define INIT_LETTER_p() \
struct character letter_p;\
letter_p.colCount = @;\
uint8_t letter_p_cols[@] = {\
	0b00000000,\
	0b00000000,\
	0b00000000,\
	0b00000000,\
	0b00000000,\
	0b00000000\
};\
letter_p.cols = letter_p_cols;

#define INIT_LETTER_q() \
struct character letter_q;\
letter_q.colCount = @;\
uint8_t letter_q_cols[@] = {\
	0b00000000,\
	0b00000000,\
	0b00000000,\
	0b00000000,\
	0b00000000,\
	0b00000000\
};\
letter_q.cols = letter_q_cols;

#define INIT_LETTER_r() \
struct character letter_r;\
letter_r.colCount = @;\
uint8_t letter_r_cols[@] = {\
	0b00000000,\
	0b00000000,\
	0b00000000,\
	0b00000000,\
	0b00000000,\
	0b00000000\
};\
letter_r.cols = letter_r_cols;

#define INIT_LETTER_s() \
struct character letter_s;\
letter_s.colCount = @;\
uint8_t letter_s_cols[@] = {\
	0b00000000,\
	0b00000000,\
	0b00000000,\
	0b00000000,\
	0b00000000,\
	0b00000000\
};\
letter_s.cols = letter_s_cols;

#define INIT_LETTER_t() \
struct character letter_t;\
letter_t.colCount = @;\
uint8_t letter_t_cols[@] = {\
	0b00000000,\
	0b00000000,\
	0b00000000,\
	0b00000000,\
	0b00000000,\
	0b00000000\
};\
letter_t.cols = letter_t_cols;

#define INIT_LETTER_u() \
struct character letter_u;\
letter_u.colCount = @;\
uint8_t letter_u_cols[@] = {\
	0b00000000,\
	0b00000000,\
	0b00000000,\
	0b00000000,\
	0b00000000,\
	0b00000000\
};\
letter_u.cols = letter_u_cols;

#define INIT_LETTER_v() \
struct character letter_v;\
letter_v.colCount = @;\
uint8_t letter_v_cols[@] = {\
	0b00000000,\
	0b00000000,\
	0b00000000,\
	0b00000000,\
	0b00000000,\
	0b00000000\
};\
letter_v.cols = letter_v_cols;

#define INIT_LETTER_w() \
struct character letter_w;\
letter_w.colCount = @;\
uint8_t letter_w_cols[@] = {\
	0b00000000,\
	0b00000000,\
	0b00000000,\
	0b00000000,\
	0b00000000,\
	0b00000000\
};\
letter_w.cols = letter_w_cols;

#define INIT_LETTER_x() \
struct character letter_x;\
letter_x.colCount = @;\
uint8_t letter_x_cols[@] = {\
	0b00000000,\
	0b00000000,\
	0b00000000,\
	0b00000000,\
	0b00000000,\
	0b00000000\
};\
letter_x.cols = letter_x_cols;

#define INIT_LETTER_y() \
struct character letter_y;\
letter_y.colCount = @;\
uint8_t letter_y_cols[@] = {\
	0b00000000,\
	0b00000000,\
	0b00000000,\
	0b00000000,\
	0b00000000,\
	0b00000000\
};\
letter_y.cols = letter_y_cols;

#define INIT_LETTER_z() \
struct character letter_z;\
letter_z.colCount = @;\
uint8_t letter_z_cols[@] = {\
	0b00000000,\
	0b00000000,\
	0b00000000,\
	0b00000000,\
	0b00000000,\
	0b00000000\
};\
letter_z.cols = letter_z_cols;

*/

#define INIT_EXCLAMATION_POINT() \
struct character exclamationPoint;\
exclamationPoint.colCount = 2;\
uint8_t exclamationPoint_cols[2] = {\
	0b11111011,\
	0b11111011\
};\
exclamationPoint.cols = exclamationPoint_cols;

#endif // CHARACTERS_H
