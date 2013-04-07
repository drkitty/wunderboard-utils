#ifndef CHARACTERS_H
#define CHARACTERS_H

#define INIT_LETTER_A() \
struct character letter_A;\
letter_A.rowCount = 6;\
uint8_t letter_A_rows[6] = {\
	0b01111111,\
	0b11111111,\
	0b11001100,\
	0b11001100,\
	0b11111111,\
	0b01111111\
};\
letter_A.rows = letter_A_rows;

#define INIT_LETTER_B() \
struct character letter_B;\
letter_B.rowCount = 6;\
uint8_t letter_B_rows[6] = {\
	0b00000110,\
	0b01101111,\
	0b11111011,\
	0b11011011,\
	0b11111111,\
	0b11111111\
};\
letter_B.rows = letter_B_rows;

#define INIT_LETTER_C() \
struct character letter_C;\
letter_C.rowCount = 6;\
uint8_t letter_C_rows[6] = {\
	0b01100110,\
	0b11000011,\
	0b11000011,\
	0b11000011,\
	0b11111111,\
	0b01111110\
};\
letter_C.rows = letter_C_rows;

#define INIT_LETTER_D() \
struct character letter_D;\
letter_D.rowCount = 6;\
uint8_t letter_D_rows[6] = {\
	0b01111110,\
	0b11111111,\
	0b11000011,\
	0b11000011,\
	0b11111111,\
	0b11111111\
};\
letter_D.rows = letter_D_rows;

/*

#define INIT_LETTER_E() \
struct character letter_E;\
letter_E.rowCount = @;\
uint8_t letter_E_rows[@] = {\
	0b00000000,\
	0b00000000,\
	0b00000000,\
	0b00000000,\
	0b00000000,\
	0b00000000\
};\
letter_E.rows = letter_E_rows;

#define INIT_LETTER_F() \
struct character letter_F;\
letter_F.rowCount = @;\
uint8_t letter_F_rows[@] = {\
	0b00000000,\
	0b00000000,\
	0b00000000,\
	0b00000000,\
	0b00000000,\
	0b00000000\
};\
letter_F.rows = letter_F_rows;

#define INIT_LETTER_G() \
struct character letter_G;\
letter_G.rowCount = @;\
uint8_t letter_G_rows[@] = {\
	0b00000000,\
	0b00000000,\
	0b00000000,\
	0b00000000,\
	0b00000000,\
	0b00000000\
};\
letter_G.rows = letter_G_rows;

*/

#define INIT_LETTER_H() \
struct character letter_H;\
letter_H.rowCount = 6;\
uint8_t letter_H_rows[6] = {\
	0b11111111,\
	0b11111111,\
	0b00011000,\
	0b00011000,\
	0b11111111,\
	0b11111111\
};\
letter_H.rows = letter_H_rows;

/*

#define INIT_LETTER_I() \
struct character letter_I;\
letter_I.rowCount = @;\
uint8_t letter_I_rows[@] = {\
	0b00000000,\
	0b00000000,\
	0b00000000,\
	0b00000000,\
	0b00000000,\
	0b00000000\
};\
letter_I.rows = letter_I_rows;

#define INIT_LETTER_J() \
struct character letter_J;\
letter_J.rowCount = @;\
uint8_t letter_J_rows[@] = {\
	0b00000000,\
	0b00000000,\
	0b00000000,\
	0b00000000,\
	0b00000000,\
	0b00000000\
};\
letter_J.rows = letter_J_rows;

#define INIT_LETTER_K() \
struct character letter_K;\
letter_K.rowCount = @;\
uint8_t letter_K_rows[@] = {\
	0b00000000,\
	0b00000000,\
	0b00000000,\
	0b00000000,\
	0b00000000,\
	0b00000000\
};\
letter_K.rows = letter_K_rows;

#define INIT_LETTER_L() \
struct character letter_L;\
letter_L.rowCount = @;\
uint8_t letter_L_rows[@] = {\
	0b00000000,\
	0b00000000,\
	0b00000000,\
	0b00000000,\
	0b00000000,\
	0b00000000\
};\
letter_L.rows = letter_L_rows;

#define INIT_LETTER_M() \
struct character letter_M;\
letter_M.rowCount = @;\
uint8_t letter_M_rows[@] = {\
	0b00000000,\
	0b00000000,\
	0b00000000,\
	0b00000000,\
	0b00000000,\
	0b00000000\
};\
letter_M.rows = letter_M_rows;

#define INIT_LETTER_N() \
struct character letter_N;\
letter_N.rowCount = @;\
uint8_t letter_N_rows[@] = {\
	0b00000000,\
	0b00000000,\
	0b00000000,\
	0b00000000,\
	0b00000000,\
	0b00000000\
};\
letter_N.rows = letter_N_rows;

#define INIT_LETTER_O() \
struct character letter_O;\
letter_O.rowCount = @;\
uint8_t letter_O_rows[@] = {\
	0b00000000,\
	0b00000000,\
	0b00000000,\
	0b00000000,\
	0b00000000,\
	0b00000000\
};\
letter_O.rows = letter_O_rows;

#define INIT_LETTER_P() \
struct character letter_P;\
letter_P.rowCount = @;\
uint8_t letter_P_rows[@] = {\
	0b00000000,\
	0b00000000,\
	0b00000000,\
	0b00000000,\
	0b00000000,\
	0b00000000\
};\
letter_P.rows = letter_P_rows;

#define INIT_LETTER_Q() \
struct character letter_Q;\
letter_Q.rowCount = @;\
uint8_t letter_Q_rows[@] = {\
	0b00000000,\
	0b00000000,\
	0b00000000,\
	0b00000000,\
	0b00000000,\
	0b00000000\
};\
letter_Q.rows = letter_Q_rows;

#define INIT_LETTER_R() \
struct character letter_R;\
letter_R.rowCount = @;\
uint8_t letter_R_rows[@] = {\
	0b00000000,\
	0b00000000,\
	0b00000000,\
	0b00000000,\
	0b00000000,\
	0b00000000\
};\
letter_R.rows = letter_R_rows;

#define INIT_LETTER_S() \
struct character letter_S;\
letter_S.rowCount = @;\
uint8_t letter_S_rows[@] = {\
	0b00000000,\
	0b00000000,\
	0b00000000,\
	0b00000000,\
	0b00000000,\
	0b00000000\
};\
letter_S.rows = letter_S_rows;

#define INIT_LETTER_T() \
struct character letter_T;\
letter_T.rowCount = @;\
uint8_t letter_T_rows[@] = {\
	0b00000000,\
	0b00000000,\
	0b00000000,\
	0b00000000,\
	0b00000000,\
	0b00000000\
};\
letter_T.rows = letter_T_rows;

#define INIT_LETTER_U() \
struct character letter_U;\
letter_U.rowCount = @;\
uint8_t letter_U_rows[@] = {\
	0b00000000,\
	0b00000000,\
	0b00000000,\
	0b00000000,\
	0b00000000,\
	0b00000000\
};\
letter_U.rows = letter_U_rows;

#define INIT_LETTER_V() \
struct character letter_V;\
letter_V.rowCount = @;\
uint8_t letter_V_rows[@] = {\
	0b00000000,\
	0b00000000,\
	0b00000000,\
	0b00000000,\
	0b00000000,\
	0b00000000\
};\
letter_V.rows = letter_V_rows;

#define INIT_LETTER_W() \
struct character letter_W;\
letter_W.rowCount = @;\
uint8_t letter_W_rows[@] = {\
	0b00000000,\
	0b00000000,\
	0b00000000,\
	0b00000000,\
	0b00000000,\
	0b00000000\
};\
letter_W.rows = letter_W_rows;

#define INIT_LETTER_X() \
struct character letter_X;\
letter_X.rowCount = @;\
uint8_t letter_X_rows[@] = {\
	0b00000000,\
	0b00000000,\
	0b00000000,\
	0b00000000,\
	0b00000000,\
	0b00000000\
};\
letter_X.rows = letter_X_rows;

#define INIT_LETTER_Y() \
struct character letter_Y;\
letter_Y.rowCount = @;\
uint8_t letter_Y_rows[@] = {\
	0b00000000,\
	0b00000000,\
	0b00000000,\
	0b00000000,\
	0b00000000,\
	0b00000000\
};\
letter_Y.rows = letter_Y_rows;

#define INIT_LETTER_Z() \
struct character letter_Z;\
letter_Z.rowCount = @;\
uint8_t letter_Z_rows[@] = {\
	0b00000000,\
	0b00000000,\
	0b00000000,\
	0b00000000,\
	0b00000000,\
	0b00000000\
};\
letter_Z.rows = letter_Z_rows;

#define INIT_LETTER_a() \
struct character letter_a;\
letter_a.rowCount = @;\
uint8_t letter_a_rows[@] = {\
	0b00000000,\
	0b00000000,\
	0b00000000,\
	0b00000000,\
	0b00000000,\
	0b00000000\
};\
letter_a.rows = letter_a_rows;

#define INIT_LETTER_b() \
struct character letter_b;\
letter_b.rowCount = @;\
uint8_t letter_b_rows[@] = {\
	0b00000000,\
	0b00000000,\
	0b00000000,\
	0b00000000,\
	0b00000000,\
	0b00000000\
};\
letter_b.rows = letter_b_rows;

#define INIT_LETTER_c() \
struct character letter_c;\
letter_c.rowCount = @;\
uint8_t letter_c_rows[@] = {\
	0b00000000,\
	0b00000000,\
	0b00000000,\
	0b00000000,\
	0b00000000,\
	0b00000000\
};\
letter_c.rows = letter_c_rows;

#define INIT_LETTER_d() \
struct character letter_d;\
letter_d.rowCount = @;\
uint8_t letter_d_rows[@] = {\
	0b00000000,\
	0b00000000,\
	0b00000000,\
	0b00000000,\
	0b00000000,\
	0b00000000\
};\
letter_d.rows = letter_d_rows;

*/

#define INIT_LETTER_e() \
struct character letter_e;\
letter_e.rowCount = 5;\
uint8_t letter_e_rows[5] = {\
	0b00110010,\
	0b01111011,\
	0b01101011,\
	0b01111111,\
	0b00111110\
};\
letter_e.rows = letter_e_rows;

/*

#define INIT_LETTER_f() \
struct character letter_f;\
letter_f.rowCount = @;\
uint8_t letter_f_rows[@] = {\
	0b00000000,\
	0b00000000,\
	0b00000000,\
	0b00000000,\
	0b00000000,\
	0b00000000\
};\
letter_f.rows = letter_f_rows;

#define INIT_LETTER_g() \
struct character letter_g;\
letter_g.rowCount = @;\
uint8_t letter_g_rows[@] = {\
	0b00000000,\
	0b00000000,\
	0b00000000,\
	0b00000000,\
	0b00000000,\
	0b00000000\
};\
letter_g.rows = letter_g_rows;

#define INIT_LETTER_h() \
struct character letter_h;\
letter_h.rowCount = @;\
uint8_t letter_h_rows[@] = {\
	0b00000000,\
	0b00000000,\
	0b00000000,\
	0b00000000,\
	0b00000000,\
	0b00000000\
};\
letter_h.rows = letter_h_rows;

#define INIT_LETTER_i() \
struct character letter_i;\
letter_i.rowCount = @;\
uint8_t letter_i_rows[@] = {\
	0b00000000,\
	0b00000000,\
	0b00000000,\
	0b00000000,\
	0b00000000,\
	0b00000000\
};\
letter_i.rows = letter_i_rows;

#define INIT_LETTER_j() \
struct character letter_j;\
letter_j.rowCount = @;\
uint8_t letter_j_rows[@] = {\
	0b00000000,\
	0b00000000,\
	0b00000000,\
	0b00000000,\
	0b00000000,\
	0b00000000\
};\
letter_j.rows = letter_j_rows;

#define INIT_LETTER_k() \
struct character letter_k;\
letter_k.rowCount = @;\
uint8_t letter_k_rows[@] = {\
	0b00000000,\
	0b00000000,\
	0b00000000,\
	0b00000000,\
	0b00000000,\
	0b00000000\
};\
letter_k.rows = letter_k_rows;

*/

#define INIT_LETTER_l() \
struct character letter_l;\
letter_l.rowCount = 3;\
uint8_t letter_l_rows[3] = {\
	0b00000011,\
	0b11111111,\
	0b11111100\
};\
letter_l.rows = letter_l_rows;

/*

#define INIT_LETTER_m() \
struct character letter_m;\
letter_m.rowCount = @;\
uint8_t letter_m_rows[@] = {\
	0b00000000,\
	0b00000000,\
	0b00000000,\
	0b00000000,\
	0b00000000,\
	0b00000000\
};\
letter_m.rows = letter_m_rows;

#define INIT_LETTER_n() \
struct character letter_n;\
letter_n.rowCount = @;\
uint8_t letter_n_rows[@] = {\
	0b00000000,\
	0b00000000,\
	0b00000000,\
	0b00000000,\
	0b00000000,\
	0b00000000\
};\
letter_n.rows = letter_n_rows;

*/

#define INIT_LETTER_o() \
struct character letter_o;\
letter_o.rowCount = 5;\
uint8_t letter_o_rows[5] = {\
	0b00011110,\
	0b00111111,\
	0b00110011,\
	0b00111111,\
	0b00011110\
};\
letter_o.rows = letter_o_rows;

/*

#define INIT_LETTER_p() \
struct character letter_p;\
letter_p.rowCount = @;\
uint8_t letter_p_rows[@] = {\
	0b00000000,\
	0b00000000,\
	0b00000000,\
	0b00000000,\
	0b00000000,\
	0b00000000\
};\
letter_p.rows = letter_p_rows;

#define INIT_LETTER_q() \
struct character letter_q;\
letter_q.rowCount = @;\
uint8_t letter_q_rows[@] = {\
	0b00000000,\
	0b00000000,\
	0b00000000,\
	0b00000000,\
	0b00000000,\
	0b00000000\
};\
letter_q.rows = letter_q_rows;

#define INIT_LETTER_r() \
struct character letter_r;\
letter_r.rowCount = @;\
uint8_t letter_r_rows[@] = {\
	0b00000000,\
	0b00000000,\
	0b00000000,\
	0b00000000,\
	0b00000000,\
	0b00000000\
};\
letter_r.rows = letter_r_rows;

#define INIT_LETTER_s() \
struct character letter_s;\
letter_s.rowCount = @;\
uint8_t letter_s_rows[@] = {\
	0b00000000,\
	0b00000000,\
	0b00000000,\
	0b00000000,\
	0b00000000,\
	0b00000000\
};\
letter_s.rows = letter_s_rows;

#define INIT_LETTER_t() \
struct character letter_t;\
letter_t.rowCount = @;\
uint8_t letter_t_rows[@] = {\
	0b00000000,\
	0b00000000,\
	0b00000000,\
	0b00000000,\
	0b00000000,\
	0b00000000\
};\
letter_t.rows = letter_t_rows;

#define INIT_LETTER_u() \
struct character letter_u;\
letter_u.rowCount = @;\
uint8_t letter_u_rows[@] = {\
	0b00000000,\
	0b00000000,\
	0b00000000,\
	0b00000000,\
	0b00000000,\
	0b00000000\
};\
letter_u.rows = letter_u_rows;

#define INIT_LETTER_v() \
struct character letter_v;\
letter_v.rowCount = @;\
uint8_t letter_v_rows[@] = {\
	0b00000000,\
	0b00000000,\
	0b00000000,\
	0b00000000,\
	0b00000000,\
	0b00000000\
};\
letter_v.rows = letter_v_rows;

#define INIT_LETTER_w() \
struct character letter_w;\
letter_w.rowCount = @;\
uint8_t letter_w_rows[@] = {\
	0b00000000,\
	0b00000000,\
	0b00000000,\
	0b00000000,\
	0b00000000,\
	0b00000000\
};\
letter_w.rows = letter_w_rows;

#define INIT_LETTER_x() \
struct character letter_x;\
letter_x.rowCount = @;\
uint8_t letter_x_rows[@] = {\
	0b00000000,\
	0b00000000,\
	0b00000000,\
	0b00000000,\
	0b00000000,\
	0b00000000\
};\
letter_x.rows = letter_x_rows;

#define INIT_LETTER_y() \
struct character letter_y;\
letter_y.rowCount = @;\
uint8_t letter_y_rows[@] = {\
	0b00000000,\
	0b00000000,\
	0b00000000,\
	0b00000000,\
	0b00000000,\
	0b00000000\
};\
letter_y.rows = letter_y_rows;

#define INIT_LETTER_z() \
struct character letter_z;\
letter_z.rowCount = @;\
uint8_t letter_z_rows[@] = {\
	0b00000000,\
	0b00000000,\
	0b00000000,\
	0b00000000,\
	0b00000000,\
	0b00000000\
};\
letter_z.rows = letter_z_rows;

*/

#define INIT_EXCLAMATION_POINT() \
struct character exclamationPoint;\
exclamationPoint.rowCount = 2;\
uint8_t exclamationPoint_rows[2] = {\
	0b11111011,\
	0b11111011\
};\
exclamationPoint.rows = exclamationPoint_rows;

#endif // CHARACTERS_H
