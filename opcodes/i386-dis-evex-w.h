  /* EVEX_W_0F5B_P_0 */
  {
    { "%XEvcvtdq2ps",	{ XM, EXx, EXxEVexR }, 0 },
    { "vcvtqq2ps%XY",	{ XMxmmq, EXx, EXxEVexR }, 0 },
  },
  /* EVEX_W_0F62 */
  {
    { "%XEvpunpckldq",	{ XM, Vex, EXx }, PREFIX_DATA },
  },
  /* EVEX_W_0F66 */
  {
    { "vpcmpgtd",	{ MaskG, Vex, EXx }, PREFIX_DATA },
  },
  /* EVEX_W_0F6A */
  {
    { "%XEvpunpckhdq",	{ XM, Vex, EXx }, PREFIX_DATA },
  },
  /* EVEX_W_0F6B */
  {
    { "%XEvpackssdw",	{ XM, Vex, EXx }, PREFIX_DATA },
  },
  /* EVEX_W_0F6C */
  {
    { Bad_Opcode },
    { "%XEvpunpcklqdq",	{ XM, Vex, EXx }, PREFIX_DATA },
  },
  /* EVEX_W_0F6D */
  {
    { Bad_Opcode },
    { "%XEvpunpckhqdq",	{ XM, Vex, EXx }, PREFIX_DATA },
  },
  /* EVEX_W_0F6F_P_1 */
  {
    { "vmovdqu32",	{ XM, EXEvexXNoBcst }, 0 },
    { "vmovdqu64",	{ XM, EXEvexXNoBcst }, 0 },
  },
  /* EVEX_W_0F6F_P_2 */
  {
    { "vmovdqa32",	{ XM, EXEvexXNoBcst }, 0 },
    { "vmovdqa64",	{ XM, EXEvexXNoBcst }, 0 },
  },
  /* EVEX_W_0F6F_P_3 */
  {
    { "vmovdqu8",	{ XM, EXx }, 0 },
    { "vmovdqu16",	{ XM, EXx }, 0 },
  },
  /* EVEX_W_0F70_P_2 */
  {
    { "%XEvpshufd",	{ XM, EXx, Ib }, 0 },
  },
  /* EVEX_W_0F72_R_2 */
  {
    { "%MEvpsrld",	{ Vex, EXx, Ib }, PREFIX_DATA },
  },
  /* EVEX_W_0F72_R_4 */
  {
    { "%MEvpsrad",	{ Vex, EXx, Ib }, PREFIX_DATA },
    { "vpsraq",	{ Vex, EXx, Ib }, PREFIX_DATA },
  },
  /* EVEX_W_0F72_R_6 */
  {
    { "%MEvpslld",	{ Vex, EXx, Ib }, PREFIX_DATA },
  },
  /* EVEX_W_0F73_R_2 */
  {
    { Bad_Opcode },
    { "%MEvpsrlq",	{ Vex, EXx, Ib }, PREFIX_DATA },
  },
  /* EVEX_W_0F73_R_6 */
  {
    { Bad_Opcode },
    { "%MEvpsllq",	{ Vex, EXx, Ib }, PREFIX_DATA },
  },
  /* EVEX_W_0F76 */
  {
    { "vpcmpeqd",	{ MaskG, Vex, EXx }, PREFIX_DATA },
  },
  /* EVEX_W_0F78_P_0 */
  {
    { "vcvttps2udq",	{ XM, EXx, EXxEVexS }, 0 },
    { "vcvttpd2udq%XY",	{ XMxmmq, EXx, EXxEVexS }, 0 },
  },
  /* EVEX_W_0F78_P_2 */
  {
    { "vcvttps2uqq",	{ XM, EXEvexHalfBcstXmmq, EXxEVexS }, 0 },
    { "vcvttpd2uqq",	{ XM, EXx, EXxEVexS }, 0 },
  },
  /* EVEX_W_0F79_P_0 */
  {
    { "vcvtps2udq",	{ XM, EXx, EXxEVexR }, 0 },
    { "vcvtpd2udq%XY",	{ XMxmmq, EXx, EXxEVexR }, 0 },
  },
  /* EVEX_W_0F79_P_2 */
  {
    { "vcvtps2uqq",	{ XM, EXEvexHalfBcstXmmq, EXxEVexR }, 0 },
    { "vcvtpd2uqq",	{ XM, EXx, EXxEVexR }, 0 },
  },
  /* EVEX_W_0F7A_P_1 */
  {
    { "vcvtudq2pd",	{ XM, EXEvexHalfBcstXmmq }, 0 },
    { "vcvtuqq2pd",	{ XM, EXx, EXxEVexR }, 0 },
  },
  /* EVEX_W_0F7A_P_2 */
  {
    { "vcvttps2qq",	{ XM, EXEvexHalfBcstXmmq, EXxEVexS }, 0 },
    { "vcvttpd2qq",	{ XM, EXx, EXxEVexS }, 0 },
  },
  /* EVEX_W_0F7A_P_3 */
  {
    { "vcvtudq2ps",	{ XM, EXx, EXxEVexR }, 0 },
    { "vcvtuqq2ps%XY",	{ XMxmmq, EXx, EXxEVexR }, 0 },
  },
  /* EVEX_W_0F7B_P_2 */
  {
    { "vcvtps2qq",	{ XM, EXEvexHalfBcstXmmq, EXxEVexR }, 0 },
    { "vcvtpd2qq",	{ XM, EXx, EXxEVexR }, 0 },
  },
  /* EVEX_W_0F7E_P_1 */
  {
    { EVEX_LEN_TABLE (EVEX_LEN_0F7E_P_1_W_0) },
    { VEX_LEN_TABLE (VEX_LEN_0F7E_P_1) },
  },
  /* EVEX_W_0F7F_P_1 */
  {
    { "vmovdqu32",	{ EXxS, XM }, 0 },
    { "vmovdqu64",	{ EXxS, XM }, 0 },
  },
  /* EVEX_W_0F7F_P_2 */
  {
    { "vmovdqa32",	{ EXxS, XM }, 0 },
    { "vmovdqa64",	{ EXxS, XM }, 0 },
  },
  /* EVEX_W_0F7F_P_3 */
  {
    { "vmovdqu8",	{ EXxS, XM }, 0 },
    { "vmovdqu16",	{ EXxS, XM }, 0 },
  },
  /* EVEX_W_0FD2 */
  {
    { "%XEvpsrld",	{ XM, Vex, EXxmm }, PREFIX_DATA },
  },
  /* EVEX_W_0FD3 */
  {
    { Bad_Opcode },
    { "%XEvpsrlq",	{ XM, Vex, EXxmm }, PREFIX_DATA },
  },
  /* EVEX_W_0FD4 */
  {
    { Bad_Opcode },
    { "%XEvpaddq",	{ XM, Vex, EXx }, PREFIX_DATA },
  },
  /* EVEX_W_0FD6 */
  {
    { EVEX_LEN_TABLE (EVEX_LEN_0FD6_P_2_W_0) },
    { VEX_LEN_TABLE (VEX_LEN_0FD6) },
  },
  /* EVEX_W_0FE2 */
  {
    { "%XEvpsrad",	{ XM, Vex, EXxmm }, PREFIX_DATA },
    { "vpsraq",	{ XM, Vex, EXxmm }, PREFIX_DATA },
  },
  /* EVEX_W_0FE6_P_1 */
  {
    { "%XEvcvtdq2pd",	{ XM, EXEvexHalfBcstXmmq }, 0 },
    { "vcvtqq2pd",	{ XM, EXx, EXxEVexR }, 0 },
  },
  /* EVEX_W_0FE7 */
  {
    { "%XEvmovntdq",	{ Mx, XM }, PREFIX_DATA },
  },
  /* EVEX_W_0FF2 */
  {
    { "%XEvpslld",		{ XM, Vex, EXxmm }, PREFIX_DATA },
  },
  /* EVEX_W_0FF3 */
  {
    { Bad_Opcode },
    { "%XEvpsllq",		{ XM, Vex, EXxmm }, PREFIX_DATA },
  },
  /* EVEX_W_0FF4 */
  {
    { Bad_Opcode },
    { "%XEvpmuludq",	{ XM, Vex, EXx }, PREFIX_DATA },
  },
  /* EVEX_W_0FFA */
  {
    { "%XEvpsubd",		{ XM, Vex, EXx }, PREFIX_DATA },
  },
  /* EVEX_W_0FFB */
  {
    { Bad_Opcode },
    { "%XEvpsubq",		{ XM, Vex, EXx }, PREFIX_DATA },
  },
  /* EVEX_W_0FFE */
  {
    { "%XEvpaddd",		{ XM, Vex, EXx }, PREFIX_DATA },
  },
  /* EVEX_W_0F3810_P_1 */
  {
    { "vpmovuswb",	{ EXxmmq, XM }, 0 },
  },
  /* EVEX_W_0F3810_P_2 */
  {
    { Bad_Opcode },
    { "vpsrlvw",	{ XM, Vex, EXx }, 0 },
  },
  /* EVEX_W_0F3811_P_1 */
  {
    { "vpmovusdb",	{ EXxmmqd, XM }, 0 },
  },
  /* EVEX_W_0F3811_P_2 */
  {
    { Bad_Opcode },
    { "vpsravw",	{ XM, Vex, EXx }, 0 },
  },
  /* EVEX_W_0F3812_P_1 */
  {
    { "vpmovusqb",	{ EXxmmdw, XM }, 0 },
  },
  /* EVEX_W_0F3812_P_2 */
  {
    { Bad_Opcode },
    { "vpsllvw",	{ XM, Vex, EXx }, 0 },
  },
  /* EVEX_W_0F3813_P_1 */
  {
    { "vpmovusdw",	{ EXxmmq, XM }, 0 },
  },
  /* EVEX_W_0F3814_P_1 */
  {
    { "vpmovusqw",	{ EXxmmqd, XM }, 0 },
  },
  /* EVEX_W_0F3815_P_1 */
  {
    { "vpmovusqd",	{ EXxmmq, XM }, 0 },
  },
  /* EVEX_W_0F3819_L_n */
  {
    { "vbroadcastf32x2",	{ XM, EXq }, PREFIX_DATA },
    { "%XEvbroadcastsd",	{ XM, EXq }, PREFIX_DATA },
  },
  /* EVEX_W_0F381A_L_n */
  {
    { "vbroadcastf32x4",	{ XM, Mxmm }, PREFIX_DATA },
    { "vbroadcastf64x2",	{ XM, Mxmm }, PREFIX_DATA },
  },
  /* EVEX_W_0F381B_L_2 */
  {
    { "vbroadcastf32x8",	{ XM, Mymm }, PREFIX_DATA },
    { "vbroadcastf64x4",	{ XM, Mymm }, PREFIX_DATA },
  },
  /* EVEX_W_0F381E */
  {
    { "%XEvpabsd",	{ XM, EXx }, PREFIX_DATA },
  },
  /* EVEX_W_0F381F */
  {
    { Bad_Opcode },
    { "vpabsq",	{ XM, EXx }, PREFIX_DATA },
  },
  /* EVEX_W_0F3820_P_1 */
  {
    { "vpmovswb",	{ EXxmmq, XM }, 0 },
  },
  /* EVEX_W_0F3821_P_1 */
  {
    { "vpmovsdb",	{ EXxmmqd, XM }, 0 },
  },
  /* EVEX_W_0F3822_P_1 */
  {
    { "vpmovsqb",	{ EXxmmdw, XM }, 0 },
  },
  /* EVEX_W_0F3823_P_1 */
  {
    { "vpmovsdw",	{ EXxmmq, XM }, 0 },
  },
  /* EVEX_W_0F3824_P_1 */
  {
    { "vpmovsqw",	{ EXxmmqd, XM }, 0 },
  },
  /* EVEX_W_0F3825_P_1 */
  {
    { "vpmovsqd",	{ EXxmmq, XM }, 0 },
  },
  /* EVEX_W_0F3825_P_2 */
  {
    { "%XEvpmovsxdq",	{ XM, EXxmmq }, 0 },
  },
  /* EVEX_W_0F3828_P_2 */
  {
    { Bad_Opcode },
    { "%XEvpmuldq",	{ XM, Vex, EXx }, 0 },
  },
  /* EVEX_W_0F3829_P_2 */
  {
    { Bad_Opcode },
    { "vpcmpeqq",	{ MaskG, Vex, EXx }, 0 },
  },
  /* EVEX_W_0F382A_P_1 */
  {
    { Bad_Opcode },
    { "vpbroadcastmb2qY", { XM, MaskR }, 0 },
  },
  /* EVEX_W_0F382A_P_2 */
  {
    { "%XEvmovntdqaY",	{ XM, Mx }, 0 },
  },
  /* EVEX_W_0F382B */
  {
    { "%XEvpackusdw",	{ XM, Vex, EXx }, PREFIX_DATA },
  },
  /* EVEX_W_0F3830_P_1 */
  {
    { "vpmovwb",	{ EXxmmq, XM }, 0 },
  },
  /* EVEX_W_0F3831_P_1 */
  {
    { "vpmovdb",	{ EXxmmqd, XM }, 0 },
  },
  /* EVEX_W_0F3832_P_1 */
  {
    { "vpmovqb",	{ EXxmmdw, XM }, 0 },
  },
  /* EVEX_W_0F3833_P_1 */
  {
    { "vpmovdw",	{ EXxmmq, XM }, 0 },
  },
  /* EVEX_W_0F3834_P_1 */
  {
    { "vpmovqw",	{ EXxmmqd, XM }, 0 },
  },
  /* EVEX_W_0F3835_P_1 */
  {
    { "vpmovqd",	{ EXxmmq, XM }, 0 },
  },
  /* EVEX_W_0F3835_P_2 */
  {
    { "%XEvpmovzxdq",	{ XM, EXxmmq }, 0 },
  },
  /* EVEX_W_0F3837 */
  {
    { Bad_Opcode },
    { "vpcmpgtq",	{ MaskG, Vex, EXx }, PREFIX_DATA },
  },
  /* EVEX_W_0F383A_P_1 */
  {
    { "vpbroadcastmw2dY",	{ XM, MaskR }, 0 },
  },
  /* EVEX_W_0F384A_X86_64 */
  {
    { EVEX_LEN_TABLE (EVEX_LEN_0F384A_X86_64_W_0) },
  },
  /* EVEX_W_0F3859 */
  {
    { "vbroadcasti32x2",	{ XM, EXq }, PREFIX_DATA },
    { "%XEvpbroadcastq",	{ XM, EXq }, PREFIX_DATA },
  },
  /* EVEX_W_0F385A_L_n */
  {
    { "vbroadcasti32x4",	{ XM, Mxmm }, PREFIX_DATA },
    { "vbroadcasti64x2",	{ XM, Mxmm }, PREFIX_DATA },
  },
  /* EVEX_W_0F385B_L_2 */
  {
    { "vbroadcasti32x8",	{ XM, Mymm }, PREFIX_DATA },
    { "vbroadcasti64x4",	{ XM, Mymm }, PREFIX_DATA },
  },
  /* EVEX_W_0F386D_X86_64 */
  {
    { EVEX_LEN_TABLE (EVEX_LEN_0F386D_X86_64_W_0) },
  },
  /* EVEX_W_0F3870 */
  {
    { Bad_Opcode },
    { "vpshldvw",  { XM, Vex, EXx }, PREFIX_DATA },
  },
  /* EVEX_W_0F3872_P_2 */
  {
    { Bad_Opcode },
    { "vpshrdvw",  { XM, Vex, EXx }, 0 },
  },
  /* EVEX_W_0F387A */
  {
    { "vpbroadcastb",	{ XM, Rd }, PREFIX_DATA },
  },
  /* EVEX_W_0F387B */
  {
    { "vpbroadcastw",	{ XM, Rd }, PREFIX_DATA },
  },
  /* EVEX_W_0F3883 */
  {
    { Bad_Opcode },
    { "vpmultishiftqb",	{ XM, Vex, EXx }, PREFIX_DATA },
  },
  /* EVEX_W_0F3A07_X86_64 */
  {
    { EVEX_LEN_TABLE (EVEX_LEN_0F3A07_X86_64_W_0) },
  },
  /* EVEX_W_0F3A18_L_n */
  {
    { "vinsertf32x4",	{ XM, Vex, EXxmm, Ib }, PREFIX_DATA },
    { "vinsertf64x2",	{ XM, Vex, EXxmm, Ib }, PREFIX_DATA },
  },
  /* EVEX_W_0F3A19_L_n */
  {
    { "vextractf32x4",	{ EXxmm, XM, Ib }, PREFIX_DATA },
    { "vextractf64x2",	{ EXxmm, XM, Ib }, PREFIX_DATA },
  },
  /* EVEX_W_0F3A1A_L_2 */
  {
    { "vinsertf32x8",	{ XM, Vex, EXymm, Ib }, PREFIX_DATA },
    { "vinsertf64x4",	{ XM, Vex, EXymm, Ib }, PREFIX_DATA },
  },
  /* EVEX_W_0F3A1B_L_2 */
  {
    { "vextractf32x8",	{ EXymm, XM, Ib }, PREFIX_DATA },
    { "vextractf64x4",	{ EXymm, XM, Ib }, PREFIX_DATA },
  },
  /* EVEX_W_0F3A21 */
  {
    { VEX_LEN_TABLE (VEX_LEN_0F3A21) },
  },
  /* EVEX_W_0F3A23_L_n */
  {
    { "vshuff32x4",	{ XM, Vex, EXx, Ib }, PREFIX_DATA },
    { "vshuff64x2",	{ XM, Vex, EXx, Ib }, PREFIX_DATA },
  },
  /* EVEX_W_0F3A38_L_n */
  {
    { "vinserti32x4",	{ XM, Vex, EXxmm, Ib }, PREFIX_DATA },
    { "vinserti64x2",	{ XM, Vex, EXxmm, Ib }, PREFIX_DATA },
  },
  /* EVEX_W_0F3A39_L_n */
  {
    { "vextracti32x4",	{ EXxmm, XM, Ib }, PREFIX_DATA },
    { "vextracti64x2",	{ EXxmm, XM, Ib }, PREFIX_DATA },
  },
  /* EVEX_W_0F3A3A_L_2 */
  {
    { "vinserti32x8",	{ XM, Vex, EXymm, Ib }, PREFIX_DATA },
    { "vinserti64x4",	{ XM, Vex, EXymm, Ib }, PREFIX_DATA },
  },
  /* EVEX_W_0F3A3B_L_2 */
  {
    { "vextracti32x8",	{ EXymm, XM, Ib }, PREFIX_DATA },
    { "vextracti64x4",	{ EXymm, XM, Ib }, PREFIX_DATA },
  },
  /* EVEX_W_0F3A42 */
  {
    { PREFIX_TABLE (PREFIX_EVEX_0F3A42_W_0) },
  },
  /* EVEX_W_0F3A43_L_n */
  {
    { "vshufi32x4",	{ XM, Vex, EXx, Ib }, PREFIX_DATA },
    { "vshufi64x2",	{ XM, Vex, EXx, Ib }, PREFIX_DATA },
  },
  /* EVEX_W_0F3A70 */
  {
    { Bad_Opcode },
    { "vpshldw",   { XM, Vex, EXx, Ib }, 0 },
  },
  /* EVEX_W_0F3A72 */
  {
    { Bad_Opcode },
    { "vpshrdw",   { XM, Vex, EXx, Ib }, 0 },
  },
  /* EVEX_W_0F3A77_X86_64 */
  {
    { EVEX_LEN_TABLE (EVEX_LEN_0F3A77_X86_64_W_0) },
  },
  /* EVEX_W_MAP4_8F_R_0 */
  {
    { "pop2", { { PUSH2_POP2_Fixup, q_mode}, Eq }, NO_PREFIX },
    { "pop2p", { { PUSH2_POP2_Fixup, q_mode}, Eq }, NO_PREFIX },
  },
  /* EVEX_W_MAP4_F8_P1_M_1 */
  {
    { "uwrmsr",		{ Gq, Eq }, 0 },
  },
  /* EVEX_W_MAP4_F8_P3_M_1 */
  {
    { "urdmsr",		{ Eq, Gq }, 0 },
  },
  /* EVEX_W_MAP4_FF_R_6 */
  {
    { "push2", { { PUSH2_POP2_Fixup, q_mode}, Eq }, 0 },
    { "push2p", { { PUSH2_POP2_Fixup, q_mode}, Eq }, 0 },
  },
  /* EVEX_W_MAP5_5B_P_0 */
  {
    { "vcvtdq2ph%XY",	{ XMxmmq, EXx, EXxEVexR }, 0 },
    { "vcvtqq2ph%XZ",	{ XMM, EXx, EXxEVexR }, 0 },
  },
  /* EVEX_W_MAP5_6C_P_0 */
  {
    { "vcvttps2udqs",	{ XM, EXx, EXxEVexS }, 0 },
    { "vcvttpd2udqs%XY",	{ XMxmmq, EXx, EXxEVexS }, 0 },
  },
  /* EVEX_W_MAP5_6C_P_2 */
  {
    { "vcvttps2uqqs",	{ XM, EXEvexHalfBcstXmmq, EXxEVexS }, 0 },
    { "vcvttpd2uqqs",	{ XM, EXx, EXxEVexS }, 0 },
  },
  /* EVEX_W_MAP5_6D_P_0 */
  {
    { "vcvttps2dqs",	{ XM, EXx, EXxEVexS }, 0 },
    { "vcvttpd2dqs%XY", { XMxmmq, EXx, EXxEVexS }, 0 },
  },
  /* EVEX_W_MAP5_6D_P_2 */
  {
    { "vcvttps2qqs",	{ XM, EXEvexHalfBcstXmmq, EXxEVexS }, 0 },
    { "vcvttpd2qqs",	{ XM, EXx, EXxEVexS }, 0 },
  },
  /* EVEX_W_MAP5_6E_P_1 */
  {
    { "vmovw",	{ XMScalar, EXw }, 0 },
  },
  /* EVEX_W_MAP5_7A_P_3 */
  {
    { "vcvtudq2ph%XY",	{ XMxmmq, EXx, EXxEVexR }, 0 },
    { "vcvtuqq2ph%XZ",	{ XMM, EXx, EXxEVexR }, 0 },
  },
  /* EVEX_W_MAP5_7E_P_1 */
  {
    { "vmovw",	{ EXwS, XMScalar }, 0 },
  },
