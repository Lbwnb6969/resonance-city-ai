// VA 0x140c53680, PDB extent 18943 bytes
// country_core::startup::load_prefabs::build_prefab
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/startup/load_prefabs.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Removing unreachable block (ram,0x000140c55864) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: country_core::startup::load_prefabs::build_prefab
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/startup/load_prefabs.rs
   Extent: 18943 */

void pdb_140c53680(undefined8 *param_1,longlong *param_2,undefined8 param_3,undefined8 *param_4,
                  longlong *param_5,undefined8 param_6)

{
  char *pcVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  short *psVar4;
  code *pcVar5;
  uint uVar6;
  char cVar7;
  char cVar8;
  char cVar9;
  char cVar10;
  char cVar11;
  char cVar12;
  char cVar13;
  char cVar14;
  char cVar15;
  char cVar16;
  char cVar17;
  char cVar18;
  char cVar19;
  char cVar20;
  char cVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined1 (**ppauVar26) [16];
  ushort uVar27;
  int iVar28;
  undefined1 *puVar29;
  byte *pbVar30;
  undefined8 uVar31;
  longlong *plVar32;
  undefined1 (*pauVar33) [16];
  longlong lVar34;
  longlong lVar35;
  ulonglong uVar36;
  longlong lVar37;
  undefined1 (*pauVar38) [16];
  undefined1 (**ppauVar39) [16];
  undefined1 (*pauVar40) [16];
  byte *pbVar41;
  char cVar42;
  byte bVar43;
  uint uVar44;
  undefined1 (*pauVar45) [16];
  undefined8 *puVar46;
  longlong lVar47;
  uint uVar48;
  undefined1 *puVar49;
  undefined1 (*pauVar50) [16];
  byte bVar51;
  ulonglong uVar52;
  longlong lVar53;
  ulonglong uVar54;
  bool bVar55;
  bool bVar56;
  bool bVar57;
  float fVar58;
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  float fVar62;
  float fVar73;
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  float fVar63;
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  float fVar74;
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  undefined1 auVar82 [16];
  undefined1 unaff_XMM7_Ba;
  char cVar83;
  undefined1 unaff_XMM7_Bb;
  char cVar84;
  undefined1 unaff_XMM7_Bc;
  char cVar85;
  undefined1 unaff_XMM7_Bd;
  char cVar86;
  undefined1 unaff_XMM7_Be;
  char cVar87;
  undefined1 unaff_XMM7_Bf;
  char cVar88;
  undefined1 unaff_XMM7_Bg;
  char cVar89;
  undefined1 unaff_XMM7_Bh;
  char cVar90;
  undefined1 unaff_XMM7_Bi;
  char cVar91;
  undefined1 unaff_XMM7_Bj;
  char cVar92;
  undefined1 unaff_XMM7_Bk;
  char cVar93;
  undefined1 unaff_XMM7_Bl;
  char cVar94;
  undefined1 unaff_XMM7_Bm;
  char cVar95;
  undefined1 unaff_XMM7_Bn;
  char cVar96;
  undefined1 unaff_XMM7_Bo;
  char cVar97;
  undefined1 unaff_XMM7_Bp;
  char cVar98;
  undefined1 auVar99 [16];
  undefined1 (**ppauStack_430) [16];
  undefined1 (**ppauStack_428) [16];
  undefined8 uStack_420;
  undefined4 uStack_418;
  undefined1 (**ppauStack_410) [16];
  longlong lStack_408;
  longlong lStack_400;
  undefined8 *puStack_3f8;
  longlong *plStack_3f0;
  longlong *plStack_3e8;
  undefined8 uStack_3e0;
  longlong lStack_3d8;
  ulonglong uStack_3d0;
  longlong lStack_3c8;
  longlong lStack_3c0;
  undefined1 (*pauStack_3b8) [16];
  undefined1 (*pauStack_3b0) [16];
  longlong lStack_3a8;
  undefined1 (*pauStack_398) [16];
  undefined1 (*pauStack_390) [16];
  undefined1 (*pauStack_388) [16];
  undefined1 (*pauStack_378) [16];
  undefined1 (*pauStack_370) [16];
  longlong lStack_368;
  undefined8 uStack_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined1 (*pauStack_348) [16];
  undefined1 (*pauStack_340) [16];
  undefined1 (*pauStack_338) [16];
  undefined1 (*pauStack_330) [16];
  undefined1 (*pauStack_328) [16];
  longlong lStack_320;
  uint uStack_314;
  undefined1 (*pauStack_310) [16];
  undefined1 (*pauStack_308) [16];
  undefined1 (*pauStack_300) [16];
  undefined1 (*pauStack_2f8) [16];
  undefined1 (*pauStack_2f0) [16];
  undefined1 (*pauStack_2e8) [16];
  undefined1 (*pauStack_2e0) [16];
  undefined1 (*pauStack_2d8) [16];
  undefined1 (*pauStack_2d0) [16];
  undefined1 (*pauStack_2c0) [16];
  undefined1 (*pauStack_2b8) [16];
  undefined1 (*pauStack_2b0) [16];
  ulonglong uStack_2a8;
  undefined1 (*pauStack_2a0) [16];
  undefined1 (*pauStack_298) [16];
  undefined1 (*pauStack_290) [16];
  undefined1 (**ppauStack_288) [16];
  undefined1 uStack_280;
  undefined7 uStack_27f;
  undefined1 (*pauStack_278) [16];
  ulonglong uStack_270;
  undefined1 (*pauStack_268) [16];
  undefined1 (*pauStack_260) [16];
  undefined1 (*pauStack_258) [16];
  undefined1 (*pauStack_250) [16];
  undefined1 (*pauStack_248) [16];
  undefined1 (*pauStack_240) [16];
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined4 uStack_228;
  undefined4 uStack_224;
  undefined4 uStack_220;
  undefined4 uStack_21c;
  longlong lStack_218;
  undefined8 uStack_210;
  longlong lStack_208;
  undefined8 uStack_200;
  longlong lStack_1f8;
  undefined8 uStack_1f0;
  longlong lStack_1e8;
  undefined8 uStack_1e0;
  undefined1 (*pauStack_1c8) [16];
  undefined8 uStack_1c0;
  undefined1 (*pauStack_1b8) [16];
  undefined1 (*pauStack_1b0) [16];
  undefined1 (*pauStack_1a8) [16];
  undefined1 (*pauStack_1a0) [16];
  undefined1 (*pauStack_198) [16];
  undefined1 (*pauStack_190) [16];
  undefined1 (*pauStack_180) [16];
  undefined1 (*pauStack_178) [16];
  undefined1 (*pauStack_170) [16];
  undefined1 (*pauStack_168) [16];
  undefined1 (*pauStack_160) [16];
  undefined1 (*pauStack_158) [16];
  undefined1 (*pauStack_150) [16];
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  longlong lStack_138;
  undefined8 uStack_130;
  longlong lStack_128;
  undefined8 uStack_120;
  longlong lStack_118;
  undefined8 uStack_110;
  longlong lStack_108;
  undefined8 uStack_100;
  undefined1 (*pauStack_f0) [16];
  undefined1 (*pauStack_e8) [16];
  undefined1 (*pauStack_e0) [16];
  undefined1 uStack_d0;
  undefined1 uStack_cf;
  undefined1 uStack_ce;
  undefined1 uStack_cd;
  undefined1 uStack_cc;
  undefined1 uStack_cb;
  undefined1 uStack_ca;
  undefined1 uStack_c9;
  undefined1 uStack_c8;
  undefined1 uStack_c7;
  undefined1 uStack_c6;
  undefined1 uStack_c5;
  undefined1 uStack_c4;
  undefined1 uStack_c3;
  undefined1 uStack_c2;
  undefined8 uStack_c0;
  
  uVar25 = _UNK_142e47bfc;
  uVar24 = _UNK_142e47bf8;
  uVar23 = _UNK_142e3c648;
  uVar22 = _DAT_142e3c640;
  fVar63 = _DAT_142e36f28;
  uStack_c0 = 0xfffffffffffffffe;
  uStack_360 = 0;
  uStack_358 = 8;
  uStack_350 = 0;
  pauVar50 = (undefined1 (*) [16])*param_4;
  lStack_400 = param_4[3];
  auVar59 = *pauVar50;
  pauVar33 = pauVar50 + 1;
  uStack_314 = ~(uint)(ushort)((ushort)(SUB161(auVar59 >> 7,0) & 1) |
                               (ushort)(SUB161(auVar59 >> 0xf,0) & 1) << 1 |
                               (ushort)(SUB161(auVar59 >> 0x17,0) & 1) << 2 |
                               (ushort)(SUB161(auVar59 >> 0x1f,0) & 1) << 3 |
                               (ushort)(SUB161(auVar59 >> 0x27,0) & 1) << 4 |
                               (ushort)(SUB161(auVar59 >> 0x2f,0) & 1) << 5 |
                               (ushort)(SUB161(auVar59 >> 0x37,0) & 1) << 6 |
                               (ushort)(SUB161(auVar59 >> 0x3f,0) & 1) << 7 |
                               (ushort)(SUB161(auVar59 >> 0x47,0) & 1) << 8 |
                               (ushort)(SUB161(auVar59 >> 0x4f,0) & 1) << 9 |
                               (ushort)(SUB161(auVar59 >> 0x57,0) & 1) << 10 |
                               (ushort)(SUB161(auVar59 >> 0x5f,0) & 1) << 0xb |
                               (ushort)(SUB161(auVar59 >> 0x67,0) & 1) << 0xc |
                               (ushort)(SUB161(auVar59 >> 0x6f,0) & 1) << 0xd |
                               (ushort)(SUB161(auVar59 >> 0x77,0) & 1) << 0xe |
                              (ushort)(byte)(auVar59[0xf] >> 7) << 0xf);
  plStack_3f0 = param_5 + 4;
  iVar28 = -(uint)(CONCAT13(unaff_XMM7_Bd,
                            CONCAT12(unaff_XMM7_Bc,CONCAT11(unaff_XMM7_Bb,unaff_XMM7_Ba))) ==
                  CONCAT13(unaff_XMM7_Bd,
                           CONCAT12(unaff_XMM7_Bc,CONCAT11(unaff_XMM7_Bb,unaff_XMM7_Ba))));
  cVar83 = (char)iVar28;
  cVar84 = (char)((uint)iVar28 >> 8);
  cVar85 = (char)((uint)iVar28 >> 0x10);
  cVar86 = (char)((uint)iVar28 >> 0x18);
  iVar28 = -(uint)(CONCAT13(unaff_XMM7_Bh,
                            CONCAT12(unaff_XMM7_Bg,CONCAT11(unaff_XMM7_Bf,unaff_XMM7_Be))) ==
                  CONCAT13(unaff_XMM7_Bh,
                           CONCAT12(unaff_XMM7_Bg,CONCAT11(unaff_XMM7_Bf,unaff_XMM7_Be))));
  cVar87 = (char)iVar28;
  cVar88 = (char)((uint)iVar28 >> 8);
  cVar89 = (char)((uint)iVar28 >> 0x10);
  cVar90 = (char)((uint)iVar28 >> 0x18);
  iVar28 = -(uint)(CONCAT13(unaff_XMM7_Bl,
                            CONCAT12(unaff_XMM7_Bk,CONCAT11(unaff_XMM7_Bj,unaff_XMM7_Bi))) ==
                  CONCAT13(unaff_XMM7_Bl,
                           CONCAT12(unaff_XMM7_Bk,CONCAT11(unaff_XMM7_Bj,unaff_XMM7_Bi))));
  cVar91 = (char)iVar28;
  cVar92 = (char)((uint)iVar28 >> 8);
  cVar93 = (char)((uint)iVar28 >> 0x10);
  cVar94 = (char)((uint)iVar28 >> 0x18);
  iVar28 = -(uint)(CONCAT13(unaff_XMM7_Bp,
                            CONCAT12(unaff_XMM7_Bo,CONCAT11(unaff_XMM7_Bn,unaff_XMM7_Bm))) ==
                  CONCAT13(unaff_XMM7_Bp,
                           CONCAT12(unaff_XMM7_Bo,CONCAT11(unaff_XMM7_Bn,unaff_XMM7_Bm))));
  cVar95 = (char)iVar28;
  cVar96 = (char)((uint)iVar28 >> 8);
  cVar97 = (char)((uint)iVar28 >> 0x10);
  cVar98 = (char)((uint)iVar28 >> 0x18);
  do {
    if (lStack_400 == 0) {
      param_1[2] = 0;
      *param_1 = 0;
      param_1[1] = 8;
      return;
    }
    if ((short)uStack_314 == 0) {
      do {
        auVar59 = *pauVar33;
        pauVar50 = pauVar50 + -0xd8;
        pauVar33 = pauVar33 + 1;
        uStack_314 = (ushort)((ushort)(SUB161(auVar59 >> 7,0) & 1) |
                              (ushort)(SUB161(auVar59 >> 0xf,0) & 1) << 1 |
                              (ushort)(SUB161(auVar59 >> 0x17,0) & 1) << 2 |
                              (ushort)(SUB161(auVar59 >> 0x1f,0) & 1) << 3 |
                              (ushort)(SUB161(auVar59 >> 0x27,0) & 1) << 4 |
                              (ushort)(SUB161(auVar59 >> 0x2f,0) & 1) << 5 |
                              (ushort)(SUB161(auVar59 >> 0x37,0) & 1) << 6 |
                              (ushort)(SUB161(auVar59 >> 0x3f,0) & 1) << 7 |
                              (ushort)(SUB161(auVar59 >> 0x47,0) & 1) << 8 |
                              (ushort)(SUB161(auVar59 >> 0x4f,0) & 1) << 9 |
                              (ushort)(SUB161(auVar59 >> 0x57,0) & 1) << 10 |
                              (ushort)(SUB161(auVar59 >> 0x5f,0) & 1) << 0xb |
                              (ushort)(SUB161(auVar59 >> 0x67,0) & 1) << 0xc |
                              (ushort)(SUB161(auVar59 >> 0x6f,0) & 1) << 0xd |
                              (ushort)(SUB161(auVar59 >> 0x77,0) & 1) << 0xe |
                             (ushort)(byte)(auVar59[0xf] >> 7) << 0xf) ^ 0xffff;
      } while (uStack_314 == 0);
    }
    uVar48 = 0;
    for (uVar44 = uStack_314; (uVar44 & 1) == 0; uVar44 = uVar44 >> 1 | 0x80000000) {
      uVar48 = uVar48 + 1;
    }
    lVar47 = (ulonglong)uVar48 * -0xd8;
    bVar51 = *(byte *)((longlong)pauVar50 + lVar47 + -4);
    cVar42 = bVar51 - 2;
    if (bVar51 < 2) {
      cVar42 = '\x02';
    }
    plStack_3e8 = param_2;
    uStack_3e0 = param_3;
    if (cVar42 != '\x02') {
      if (cVar42 != '\0') {
        pauStack_178 = (undefined1 (*) [16])&UNK_14304e267;
        pauStack_170 = (undefined1 (*) [16])0x4;
        pauStack_268 = (undefined1 (*) [16])&pauStack_178;
        pauStack_260 = (undefined1 (*) [16])pdb_1402ed400;
                    /* WARNING: Subroutine does not return */
        pdb_142dc83d0(&UNK_14304e411,&pauStack_268,&UNK_14306e7c8);
      }
                    /* WARNING: Subroutine does not return */
      pdb_142dc83d0(&UNK_14304e3c3,0x9d,&UNK_14306e7c8);
    }
    lStack_400 = lStack_400 + -1;
    uStack_314 = uStack_314 - 1 & uStack_314;
  } while ((bVar51 & 1) != 0);
  uVar54 = *(ulonglong *)((longlong)pauVar50 + lVar47 + -0xc0);
  lVar35 = uVar54 + 0x7ffffffffffffffe;
  if (uVar54 < 0x8000000000000002) {
    lVar35 = 2;
  }
  if (lVar35 != 2) {
    if (lVar35 != 0) {
      pauStack_178 = (undefined1 (*) [16])&UNK_14304e1f3;
      pauStack_170 = (undefined1 (*) [16])0x29;
      pauStack_268 = (undefined1 (*) [16])&pauStack_178;
      pauStack_260 = (undefined1 (*) [16])pdb_1402ed400;
                    /* WARNING: Subroutine does not return */
      pdb_142dc83d0(&UNK_14304e411,&pauStack_268,&UNK_14306e7e0);
    }
                    /* WARNING: Subroutine does not return */
    pdb_142dc83d0(&UNK_14304e3c3,0x9d,&UNK_14306e7e0);
  }
  uVar36 = uVar54 ^ 0x8000000000000000;
  if (-1 < (longlong)uVar54) {
    uVar36 = 2;
  }
  if (uVar36 != 2) {
    if (uVar36 != 0) {
      pauStack_178 = (undefined1 (*) [16])&UNK_14304e2d0;
      pauStack_170 = (undefined1 (*) [16])0x15;
      pauStack_268 = (undefined1 (*) [16])&pauStack_178;
      pauStack_260 = (undefined1 (*) [16])pdb_1402ed400;
                    /* WARNING: Subroutine does not return */
      pdb_142dc83d0(&UNK_14304e411,&pauStack_268,&UNK_14306ea30);
    }
                    /* WARNING: Subroutine does not return */
    pdb_142dc83d0(&UNK_14304e3c3,0x9d,&UNK_14306ea30);
  }
  pdb_140f60be0(&pauStack_398,(longlong)pauVar50 + lVar47 + -0xc0);
  uVar54 = *(ulonglong *)((longlong)pauVar50 + lVar47 + -0x90);
  lVar35 = uVar54 + 0x7fffffffffffffff;
  if (uVar54 < 0x8000000000000001) {
    lVar35 = 2;
  }
  if (lVar35 != 2) {
    if (lVar35 != 0) {
      pauStack_178 = (undefined1 (*) [16])&UNK_14304e290;
      pauStack_170 = (undefined1 (*) [16])0x40;
      pauStack_268 = (undefined1 (*) [16])&pauStack_178;
      pauStack_260 = (undefined1 (*) [16])pdb_1402ed400;
      uStack_c3 = 1;
                    /* WARNING: Subroutine does not return */
      pdb_142dc83d0(&UNK_14304e411,&pauStack_268,&UNK_14306ea48);
    }
    uStack_c3 = 1;
                    /* WARNING: Subroutine does not return */
    pdb_142dc83d0(&UNK_14304e3c3,0x9d,&UNK_14306ea48);
  }
  if (SBORROW8(0,uVar54)) {
    pauStack_378 = (undefined1 (*) [16])0x8000000000000000;
  }
  else {
    uStack_c3 = 1;
    pdb_140f60be0(&pauStack_378,(longlong)pauVar50 + lVar47 + -0x90);
  }
  uStack_cb = 1;
  uStack_cc = 1;
  pdb_140f60be0(&pauStack_268,&pauStack_398);
  pauVar33 = pauStack_258;
  pauStack_310 = pauStack_268;
  pauStack_308 = pauStack_260;
  uStack_cd = 1;
  uStack_ce = 1;
  uStack_cf = 1;
  pdb_140f60be0(&pauStack_178,&pauStack_398);
  puStack_3f8 = param_1;
  if (SBORROW8(0,(longlong)pauStack_378)) {
    pauStack_268 = (undefined1 (*) [16])0x8000000000000000;
  }
  else {
    pdb_140f60be0(&pauStack_268,&pauStack_378);
  }
  pauStack_2e8 = pauStack_168;
  pauStack_2f8 = pauStack_178;
  pauStack_2f0 = pauStack_170;
  pauStack_2d0 = pauStack_258;
  pauStack_2e0 = pauStack_268;
  pauStack_2d8 = pauStack_260;
  if (param_5[3] != 0) {
    uStack_c4 = 1;
    uStack_c5 = 1;
    uStack_c6 = 1;
    puVar29 = (undefined1 *)pdb_1417c3d40(plStack_3f0,&pauStack_2f8);
    pauVar38 = pauStack_2e8;
    pauVar45 = (undefined1 (*) [16])*param_5;
    uVar54 = param_5[1];
    bVar51 = (byte)((ulonglong)puVar29 >> 0x39);
    auVar59 = ZEXT216(CONCAT11(bVar51,bVar51));
    auVar59 = pshuflw(auVar59,auVar59,0);
    pauStack_e0 = pauStack_2f0;
    pauStack_f0 = pauStack_2d0;
    pauStack_2b8 = pauStack_2d8;
    pauStack_278 = (undefined1 (*) [16])0x0;
    pauVar40 = pauStack_2e0;
    while( true ) {
      uVar36 = (ulonglong)puVar29 & uVar54;
      pcVar1 = (char *)((longlong)pauVar45 + uVar36);
      cVar42 = *pcVar1;
      cVar7 = pcVar1[1];
      cVar8 = pcVar1[2];
      cVar9 = pcVar1[3];
      cVar10 = pcVar1[4];
      cVar11 = pcVar1[5];
      cVar12 = pcVar1[6];
      cVar13 = pcVar1[7];
      cVar14 = pcVar1[8];
      cVar15 = pcVar1[9];
      cVar16 = pcVar1[10];
      cVar17 = pcVar1[0xb];
      cVar18 = pcVar1[0xc];
      cVar19 = pcVar1[0xd];
      cVar20 = pcVar1[0xe];
      cVar21 = pcVar1[0xf];
      auVar60[0] = -(cVar42 == auVar59[0]);
      auVar60[1] = -(cVar7 == auVar59[1]);
      auVar60[2] = -(cVar8 == auVar59[2]);
      auVar60[3] = -(cVar9 == auVar59[3]);
      auVar60[4] = -(cVar10 == auVar59[4]);
      auVar60[5] = -(cVar11 == auVar59[5]);
      auVar60[6] = -(cVar12 == auVar59[6]);
      auVar60[7] = -(cVar13 == auVar59[7]);
      auVar60[8] = -(cVar14 == auVar59[0]);
      auVar60[9] = -(cVar15 == auVar59[1]);
      auVar60[10] = -(cVar16 == auVar59[2]);
      auVar60[0xb] = -(cVar17 == auVar59[3]);
      auVar60[0xc] = -(cVar18 == auVar59[4]);
      auVar60[0xd] = -(cVar19 == auVar59[5]);
      auVar60[0xe] = -(cVar20 == auVar59[6]);
      auVar60[0xf] = -(cVar21 == auVar59[7]);
      uVar27 = (ushort)(SUB161(auVar60 >> 7,0) & 1) | (ushort)(SUB161(auVar60 >> 0xf,0) & 1) << 1 |
               (ushort)(SUB161(auVar60 >> 0x17,0) & 1) << 2 |
               (ushort)(SUB161(auVar60 >> 0x1f,0) & 1) << 3 |
               (ushort)(SUB161(auVar60 >> 0x27,0) & 1) << 4 |
               (ushort)(SUB161(auVar60 >> 0x2f,0) & 1) << 5 |
               (ushort)(SUB161(auVar60 >> 0x37,0) & 1) << 6 |
               (ushort)(SUB161(auVar60 >> 0x3f,0) & 1) << 7 |
               (ushort)(SUB161(auVar60 >> 0x47,0) & 1) << 8 |
               (ushort)(SUB161(auVar60 >> 0x4f,0) & 1) << 9 |
               (ushort)(SUB161(auVar60 >> 0x57,0) & 1) << 10 |
               (ushort)(SUB161(auVar60 >> 0x5f,0) & 1) << 0xb |
               (ushort)(SUB161(auVar60 >> 0x67,0) & 1) << 0xc |
               (ushort)(SUB161(auVar60 >> 0x6f,0) & 1) << 0xd |
               (ushort)(SUB161(auVar60 >> 0x77,0) & 1) << 0xe | (ushort)(auVar60[0xf] >> 7) << 0xf;
      uVar52 = (ulonglong)uVar27;
      if (uVar27 != 0) {
        pauStack_2b0 = pauVar33;
        uStack_2a8 = uVar54;
        pauStack_2a0 = pauVar40;
        pauStack_180 = pauVar45;
        if (SBORROW8(0,(longlong)pauVar40)) {
          do {
            uVar48 = 0;
            for (uVar44 = (uint)uVar52; (uVar44 & 1) == 0; uVar44 = uVar44 >> 1 | 0x80000000) {
              uVar48 = uVar48 + 1;
            }
            uVar54 = uVar48 + uVar36 & uStack_2a8;
            uStack_270 = uVar52;
            if (pauVar38 == *(undefined1 (**) [16])((longlong)pauVar45 + -0x28 + uVar54 * -0x38)) {
              lVar35 = uVar54 * -0x38 + (longlong)pauVar45;
              iVar28 = pub_142e32750(pauStack_e0,*(undefined8 *)(lVar35 + -0x30));
              pauVar45 = pauStack_180;
              if ((iVar28 == 0) && (SBORROW8(0,*(longlong *)(lVar35 + -0x20)))) goto LAB_140c53bda;
            }
            iVar28 = (int)uStack_270 + -1;
            uVar27 = (ushort)iVar28 & (ushort)uStack_270;
            uVar52 = (ulonglong)CONCAT22((short)((uint)iVar28 >> 0x10),uVar27);
            uVar54 = uStack_2a8;
            pauVar40 = pauStack_2a0;
            pauVar33 = pauStack_2b0;
          } while (uVar27 != 0);
        }
        else {
          do {
            uVar48 = 0;
            for (uVar44 = (uint)uVar52; (uVar44 & 1) == 0; uVar44 = uVar44 >> 1 | 0x80000000) {
              uVar48 = uVar48 + 1;
            }
            uVar54 = uVar48 + uVar36 & uStack_2a8;
            uStack_270 = uVar52;
            if (pauVar38 == *(undefined1 (**) [16])((longlong)pauVar45 + -0x28 + uVar54 * -0x38)) {
              lVar35 = uVar54 * -0x38 + (longlong)pauVar45;
              iVar28 = pub_142e32750(pauStack_e0,*(undefined8 *)(lVar35 + -0x30));
              pauVar45 = pauStack_180;
              if ((((iVar28 == 0) && (!SBORROW8(0,*(longlong *)(lVar35 + -0x20)))) &&
                  (pauStack_f0 == *(undefined1 (**) [16])(lVar35 + -0x10))) &&
                 (iVar28 = pub_142e32750(pauStack_2b8,*(undefined8 *)(lVar35 + -0x18),pauStack_f0),
                 pauVar45 = pauStack_180, iVar28 == 0)) goto LAB_140c53bda;
            }
            iVar28 = (int)uStack_270 + -1;
            uVar27 = (ushort)iVar28 & (ushort)uStack_270;
            uVar52 = (ulonglong)CONCAT22((short)((uint)iVar28 >> 0x10),uVar27);
            uVar54 = uStack_2a8;
            pauVar40 = pauStack_2a0;
            pauVar33 = pauStack_2b0;
          } while (uVar27 != 0);
        }
      }
      auVar99[0] = -(cVar42 == cVar83);
      auVar99[1] = -(cVar7 == cVar84);
      auVar99[2] = -(cVar8 == cVar85);
      auVar99[3] = -(cVar9 == cVar86);
      auVar99[4] = -(cVar10 == cVar87);
      auVar99[5] = -(cVar11 == cVar88);
      auVar99[6] = -(cVar12 == cVar89);
      auVar99[7] = -(cVar13 == cVar90);
      auVar99[8] = -(cVar14 == cVar91);
      auVar99[9] = -(cVar15 == cVar92);
      auVar99[10] = -(cVar16 == cVar93);
      auVar99[0xb] = -(cVar17 == cVar94);
      auVar99[0xc] = -(cVar18 == cVar95);
      auVar99[0xd] = -(cVar19 == cVar96);
      auVar99[0xe] = -(cVar20 == cVar97);
      auVar99[0xf] = -(cVar21 == cVar98);
      if ((((((((((((((((SUB161(auVar99 >> 7,0) & 1) != 0 || (SUB161(auVar99 >> 0xf,0) & 1) != 0) ||
                      (SUB161(auVar99 >> 0x17,0) & 1) != 0) || (SUB161(auVar99 >> 0x1f,0) & 1) != 0)
                    || (SUB161(auVar99 >> 0x27,0) & 1) != 0) || (SUB161(auVar99 >> 0x2f,0) & 1) != 0
                   ) || (SUB161(auVar99 >> 0x37,0) & 1) != 0) ||
                 (SUB161(auVar99 >> 0x3f,0) & 1) != 0) || (SUB161(auVar99 >> 0x47,0) & 1) != 0) ||
               (SUB161(auVar99 >> 0x4f,0) & 1) != 0) || (SUB161(auVar99 >> 0x57,0) & 1) != 0) ||
             (SUB161(auVar99 >> 0x5f,0) & 1) != 0) || (SUB161(auVar99 >> 0x67,0) & 1) != 0) ||
           (SUB161(auVar99 >> 0x6f,0) & 1) != 0) || (SUB161(auVar99 >> 0x77,0) & 1) != 0) ||
          auVar99[0xf] < '\0') break;
      puVar29 = pauStack_278[1] + uVar36;
      pauStack_278 = pauStack_278 + 1;
    }
  }
  pauStack_178 = pauStack_310;
  pauStack_170 = pauStack_308;
  pauStack_160 = (undefined1 (*) [16])0x8000000000000000;
  uStack_c4 = 1;
  uStack_c5 = 1;
  uStack_c6 = 0;
  pauStack_168 = pauVar33;
  pdb_1417a8c80(&pauStack_268,param_5,&pauStack_178);
  pauVar38 = pauStack_258;
  pauVar33 = pauStack_260;
  pauVar45 = pauStack_268;
  if (!SBORROW8(0,(longlong)pauStack_268)) {
    pauStack_348 = pauStack_250;
    pauStack_340 = pauStack_248;
    pauStack_338 = pauStack_240;
    pauStack_330 = uStack_238;
    pauStack_328 = uStack_230;
    pauStack_1c8 = pauStack_268;
    uStack_1c0 = pauStack_260;
    pauStack_1b8 = pauStack_258;
    pauStack_190 = uStack_230;
    pauStack_1a0 = pauStack_240;
    pauStack_198 = uStack_238;
    pauStack_1b0 = pauStack_250;
    pauStack_1a8 = pauStack_248;
    pauStack_268 = (undefined1 (*) [16])&pauStack_398;
    pauStack_260 = (undefined1 (*) [16])pdb_140001020;
    pdb_140f60760(&pauStack_298,&UNK_14306eaa7,&pauStack_268);
    uStack_280 = 1;
    LOCK();
    lVar35 = *plStack_3e8;
    *plStack_3e8 = *plStack_3e8 + 1;
    UNLOCK();
    if (*plStack_3e8 == 0 || SCARRY8(lVar35,1) != *plStack_3e8 < 0) goto LAB_140c56b2e;
    uStack_c7 = 1;
    pauStack_e0 = pauStack_290;
    pdb_141c86d40(param_6,pauStack_290,ppauStack_288,plStack_3e8,uStack_3e0);
    pauStack_250 = (undefined1 (*) [16])CONCAT71(uStack_27f,uStack_280);
    pauStack_258 = (undefined1 (*) [16])ppauStack_288;
    pauStack_268 = pauStack_298;
    pauStack_260 = pauStack_290;
    uStack_c7 = 0;
    pdb_141b248b0(&pauStack_178,&pauStack_268);
    if (SBORROW8(0,(longlong)pauStack_178)) {
      pauStack_268 = pauStack_170;
                    /* WARNING: Subroutine does not return */
      pdb_142dc8170(&UNK_14306f5b0,0x2b,&pauStack_268,&UNK_14306f570,&UNK_14306eac0);
    }
    lStack_1e8 = lStack_108;
    uStack_1e0 = uStack_100;
    lStack_1f8 = lStack_118;
    uStack_1f0 = uStack_110;
    lStack_208 = lStack_128;
    uStack_200 = uStack_120;
    lStack_218 = lStack_138;
    uStack_210 = uStack_130;
    uStack_228 = uStack_148;
    uStack_224 = uStack_144;
    uStack_220 = uStack_140;
    uStack_21c = uStack_13c;
    uStack_238 = pauStack_158;
    uStack_230 = pauStack_150;
    pauStack_248 = pauStack_168;
    pauStack_240 = pauStack_160;
    pauStack_258 = pauStack_178;
    pauStack_250 = pauStack_170;
    pauStack_268 = (undefined1 (*) [16])0x1;
    pauStack_260 = (undefined1 (*) [16])0x1;
    pdb_14007ee60();
    pbVar30 = pub_1406abab0(0x90,8);
    if (pbVar30 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
      pdb_142dc7e11(8,0x90);
    }
    pub_142e32760(pbVar30,&pauStack_268,0x90);
    pauVar40 = *(undefined1 (**) [16])*pauStack_198;
    uVar54 = *(ulonglong *)(*pauStack_198 + 8);
    uVar36 = uVar54 & (ulonglong)pauStack_190;
    auVar59 = *(undefined1 (*) [16])(*pauVar40 + uVar36);
    uVar27 = (ushort)(SUB161(auVar59 >> 7,0) & 1) | (ushort)(SUB161(auVar59 >> 0xf,0) & 1) << 1 |
             (ushort)(SUB161(auVar59 >> 0x17,0) & 1) << 2 |
             (ushort)(SUB161(auVar59 >> 0x1f,0) & 1) << 3 |
             (ushort)(SUB161(auVar59 >> 0x27,0) & 1) << 4 |
             (ushort)(SUB161(auVar59 >> 0x2f,0) & 1) << 5 |
             (ushort)(SUB161(auVar59 >> 0x37,0) & 1) << 6 |
             (ushort)(SUB161(auVar59 >> 0x3f,0) & 1) << 7 |
             (ushort)(SUB161(auVar59 >> 0x47,0) & 1) << 8 |
             (ushort)(SUB161(auVar59 >> 0x4f,0) & 1) << 9 |
             (ushort)(SUB161(auVar59 >> 0x57,0) & 1) << 10 |
             (ushort)(SUB161(auVar59 >> 0x5f,0) & 1) << 0xb |
             (ushort)(SUB161(auVar59 >> 0x67,0) & 1) << 0xc |
             (ushort)(SUB161(auVar59 >> 0x6f,0) & 1) << 0xd |
             (ushort)(SUB161(auVar59 >> 0x77,0) & 1) << 0xe |
             (ushort)(byte)(auVar59[0xf] >> 7) << 0xf;
    uVar48 = (uint)uVar27;
    if (uVar27 == 0) {
      lVar35 = 0x10;
      do {
        uVar36 = uVar36 + lVar35 & uVar54;
        auVar59 = *(undefined1 (*) [16])(*pauVar40 + uVar36);
        lVar35 = lVar35 + 0x10;
        uVar48 = (uint)(ushort)((ushort)(SUB161(auVar59 >> 7,0) & 1) |
                                (ushort)(SUB161(auVar59 >> 0xf,0) & 1) << 1 |
                                (ushort)(SUB161(auVar59 >> 0x17,0) & 1) << 2 |
                                (ushort)(SUB161(auVar59 >> 0x1f,0) & 1) << 3 |
                                (ushort)(SUB161(auVar59 >> 0x27,0) & 1) << 4 |
                                (ushort)(SUB161(auVar59 >> 0x2f,0) & 1) << 5 |
                                (ushort)(SUB161(auVar59 >> 0x37,0) & 1) << 6 |
                                (ushort)(SUB161(auVar59 >> 0x3f,0) & 1) << 7 |
                                (ushort)(SUB161(auVar59 >> 0x47,0) & 1) << 8 |
                                (ushort)(SUB161(auVar59 >> 0x4f,0) & 1) << 9 |
                                (ushort)(SUB161(auVar59 >> 0x57,0) & 1) << 10 |
                                (ushort)(SUB161(auVar59 >> 0x5f,0) & 1) << 0xb |
                                (ushort)(SUB161(auVar59 >> 0x67,0) & 1) << 0xc |
                                (ushort)(SUB161(auVar59 >> 0x6f,0) & 1) << 0xd |
                                (ushort)(SUB161(auVar59 >> 0x77,0) & 1) << 0xe |
                               (ushort)(byte)(auVar59[0xf] >> 7) << 0xf);
      } while (uVar48 == 0);
    }
    uVar44 = 0;
    for (; (uVar48 & 1) == 0; uVar48 = uVar48 >> 1 | 0x80000000) {
      uVar44 = uVar44 + 1;
    }
    uVar36 = uVar44 + uVar36 & uVar54;
    bVar51 = (*pauVar40)[uVar36];
    if (-1 < (char)bVar51) {
      auVar59 = *pauVar40;
      uVar48 = 0;
      for (uVar44 = (uint)(ushort)((ushort)(SUB161(auVar59 >> 7,0) & 1) |
                                   (ushort)(SUB161(auVar59 >> 0xf,0) & 1) << 1 |
                                   (ushort)(SUB161(auVar59 >> 0x17,0) & 1) << 2 |
                                   (ushort)(SUB161(auVar59 >> 0x1f,0) & 1) << 3 |
                                   (ushort)(SUB161(auVar59 >> 0x27,0) & 1) << 4 |
                                   (ushort)(SUB161(auVar59 >> 0x2f,0) & 1) << 5 |
                                   (ushort)(SUB161(auVar59 >> 0x37,0) & 1) << 6 |
                                   (ushort)(SUB161(auVar59 >> 0x3f,0) & 1) << 7 |
                                   (ushort)(SUB161(auVar59 >> 0x47,0) & 1) << 8 |
                                   (ushort)(SUB161(auVar59 >> 0x4f,0) & 1) << 9 |
                                   (ushort)(SUB161(auVar59 >> 0x57,0) & 1) << 10 |
                                   (ushort)(SUB161(auVar59 >> 0x5f,0) & 1) << 0xb |
                                   (ushort)(SUB161(auVar59 >> 0x67,0) & 1) << 0xc |
                                   (ushort)(SUB161(auVar59 >> 0x6f,0) & 1) << 0xd |
                                   (ushort)(SUB161(auVar59 >> 0x77,0) & 1) << 0xe |
                                  (ushort)(byte)(auVar59[0xf] >> 7) << 0xf); (uVar44 & 1) == 0;
          uVar44 = uVar44 >> 1 | 0x80000000) {
        uVar48 = uVar48 + 1;
      }
      uVar36 = (ulonglong)uVar48;
      bVar51 = (*pauVar40)[uVar36];
    }
    bVar43 = (byte)((ulonglong)pauStack_190 >> 0x39);
    (*pauVar40)[uVar36] = bVar43;
    pauVar40[1][uVar36 - 0x10 & uVar54] = bVar43;
    lVar35 = uVar36 * -0x38;
    *(ulonglong *)pauStack_198[1] = *(longlong *)pauStack_198[1] - (ulonglong)(bVar51 & 1);
    *(undefined1 (**) [16])((longlong)pauVar40 + lVar35 + -0x38) = pauVar45;
    *(undefined1 (**) [16])((longlong)pauVar40 + lVar35 + -0x30) = pauVar33;
    pauVar33 = (undefined1 (*) [16])((longlong)pauVar40 + lVar35);
    *(undefined1 (**) [16])((longlong)pauVar40 + lVar35 + -0x28) = pauVar38;
    plVar32 = (longlong *)((longlong)pauVar40 + lVar35 + -0x20);
    *plVar32 = (longlong)pauStack_348;
    plVar32[1] = (longlong)pauStack_340;
    *(undefined1 (**) [16])((longlong)pauVar40 + lVar35 + -0x10) = pauStack_338;
    *(byte **)((longlong)pauVar40 + lVar35 + -8) = pbVar30;
    *(longlong *)(pauStack_198[1] + 8) = *(longlong *)(pauStack_198[1] + 8) + 1;
  }
  pauVar33 = *(undefined1 (**) [16])(pauVar33[-1] + 8);
  LOCK();
  lVar35 = *(longlong *)*pauVar33;
  *(longlong *)*pauVar33 = *(longlong *)*pauVar33 + 1;
  UNLOCK();
  if (*(longlong *)*pauVar33 == 0 || SCARRY8(lVar35,1) != *(longlong *)*pauVar33 < 0)
  goto LAB_140c56b2e;
  uStack_270 = CONCAT71(uStack_270._1_7_,SBORROW8(0,(longlong)pauStack_378));
  pauStack_2c0 = pauVar33;
  if (!SBORROW8(0,(longlong)pauStack_378)) {
    lStack_3a8 = lStack_368;
    pauStack_3b8 = pauStack_378;
    pauStack_3b0 = pauStack_370;
    ppauStack_410 = &pauStack_3b8;
    if (lStack_368 == 0xd) {
      if (*(longlong *)(*pauStack_370 + 5) != 0x6b6e7572745f7463 ||
          *(longlong *)*pauStack_370 != 0x5f74636172747865) goto LAB_140c56ab1;
      uStack_c2 = 1;
      pdb_1418255c0(&pauStack_268,pauVar33 + 1,pauStack_370,0xd);
      if (lStack_218 == 0) {
        pauVar33 = (undefined1 (*) [16])0x0;
      }
      else {
        auVar59 = *uStack_230;
        uVar27 = (ushort)(SUB161(auVar59 >> 7,0) & 1) | (ushort)(SUB161(auVar59 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar59 >> 0x17,0) & 1) << 2 |
                 (ushort)(SUB161(auVar59 >> 0x1f,0) & 1) << 3 |
                 (ushort)(SUB161(auVar59 >> 0x27,0) & 1) << 4 |
                 (ushort)(SUB161(auVar59 >> 0x2f,0) & 1) << 5 |
                 (ushort)(SUB161(auVar59 >> 0x37,0) & 1) << 6 |
                 (ushort)(SUB161(auVar59 >> 0x3f,0) & 1) << 7 |
                 (ushort)(SUB161(auVar59 >> 0x47,0) & 1) << 8 |
                 (ushort)(SUB161(auVar59 >> 0x4f,0) & 1) << 9 |
                 (ushort)(SUB161(auVar59 >> 0x57,0) & 1) << 10 |
                 (ushort)(SUB161(auVar59 >> 0x5f,0) & 1) << 0xb |
                 (ushort)(SUB161(auVar59 >> 0x67,0) & 1) << 0xc |
                 (ushort)(SUB161(auVar59 >> 0x6f,0) & 1) << 0xd |
                 (ushort)(SUB161(auVar59 >> 0x77,0) & 1) << 0xe |
                 (ushort)(byte)(auVar59[0xf] >> 7) << 0xf;
        pauVar33 = uStack_230;
        pauVar45 = uStack_230;
        while (uVar48 = uVar27 ^ 0xffff, uVar48 == 0) {
          pauVar45 = pauVar45 + 1;
          auVar59 = *pauVar45;
          pauVar33 = pauVar33 + -0x38;
          uVar27 = (ushort)(SUB161(auVar59 >> 7,0) & 1) |
                   (ushort)(SUB161(auVar59 >> 0xf,0) & 1) << 1 |
                   (ushort)(SUB161(auVar59 >> 0x17,0) & 1) << 2 |
                   (ushort)(SUB161(auVar59 >> 0x1f,0) & 1) << 3 |
                   (ushort)(SUB161(auVar59 >> 0x27,0) & 1) << 4 |
                   (ushort)(SUB161(auVar59 >> 0x2f,0) & 1) << 5 |
                   (ushort)(SUB161(auVar59 >> 0x37,0) & 1) << 6 |
                   (ushort)(SUB161(auVar59 >> 0x3f,0) & 1) << 7 |
                   (ushort)(SUB161(auVar59 >> 0x47,0) & 1) << 8 |
                   (ushort)(SUB161(auVar59 >> 0x4f,0) & 1) << 9 |
                   (ushort)(SUB161(auVar59 >> 0x57,0) & 1) << 10 |
                   (ushort)(SUB161(auVar59 >> 0x5f,0) & 1) << 0xb |
                   (ushort)(SUB161(auVar59 >> 0x67,0) & 1) << 0xc |
                   (ushort)(SUB161(auVar59 >> 0x6f,0) & 1) << 0xd |
                   (ushort)(SUB161(auVar59 >> 0x77,0) & 1) << 0xe |
                   (ushort)(byte)(auVar59[0xf] >> 7) << 0xf;
        }
        uVar44 = 0;
        for (; (uVar48 & 1) == 0; uVar48 = uVar48 >> 1 | 0x80000000) {
          uVar44 = uVar44 + 1;
        }
        pauVar33 = *(undefined1 (**) [16])((longlong)pauVar33 + (ulonglong)uVar44 * -0x38 + -8);
      }
      uVar31 = pdb_1400af950(&uStack_210,&UNK_14306ea98,2);
      pdb_140caa5c0(&pauStack_178,&uStack_230,uVar31,&UNK_14306ea98,2);
      pauVar40 = pauStack_150;
      pauVar38 = pauStack_158;
      pauVar45 = pauStack_160;
      if (pauStack_160 != (undefined1 (*) [16])0x6) {
        if (pauStack_178 != (undefined1 (*) [16])0x0) {
          pub_1406abac0((byte *)pauStack_170,(ulonglong)pauStack_178,1);
        }
        switch(pauVar45) {
        case (undefined1 (*) [16])0x0:
        case (undefined1 (*) [16])0x2:
          if (pauVar38 != (undefined1 (*) [16])0x0) {
            uVar54 = (longlong)pauVar38 << 2;
code_r0x000140c54e31:
            uVar36 = 4;
code_r0x000140c54e3d:
            pub_1406abac0((byte *)pauVar40,uVar54,uVar36);
          }
          break;
        case (undefined1 (*) [16])0x1:
          if (pauVar38 != (undefined1 (*) [16])0x0) {
            uVar54 = (longlong)pauVar38 << 3;
            uVar36 = 2;
            goto code_r0x000140c54e3d;
          }
          break;
        case (undefined1 (*) [16])0x3:
          if (pauVar38 != (undefined1 (*) [16])0x0) {
            uVar54 = (longlong)pauVar38 << 3;
            goto code_r0x000140c54e31;
          }
          break;
        case (undefined1 (*) [16])0x4:
          if (pauVar38 != (undefined1 (*) [16])0x0) {
            uVar54 = (longlong)pauVar38 * 0xc;
            uVar36 = 4;
            goto code_r0x000140c54e3d;
          }
          break;
        default:
          if (pauVar38 != (undefined1 (*) [16])0x0) {
            uVar54 = (longlong)pauVar38 << 4;
            goto code_r0x000140c54e31;
          }
        }
      }
      if (pauVar33 != (undefined1 (*) [16])0x0) {
        if (lStack_218 != 0) {
          uVar54 = pdb_1400af950(&uStack_210,&UNK_14306ea9a,10);
          bVar51 = (byte)(uVar54 >> 0x39);
          auVar59 = ZEXT216(CONCAT11(bVar51,bVar51));
          auVar59 = pshuflw(auVar59,auVar59,0);
          lVar35 = 0;
          while( true ) {
            uVar54 = uVar54 & CONCAT44(uStack_224,uStack_228);
            pcVar1 = *uStack_230 + uVar54;
            auVar79[0] = -(*pcVar1 == auVar59[0]);
            auVar79[1] = -(pcVar1[1] == auVar59[1]);
            auVar79[2] = -(pcVar1[2] == auVar59[2]);
            auVar79[3] = -(pcVar1[3] == auVar59[3]);
            auVar79[4] = -(pcVar1[4] == auVar59[4]);
            auVar79[5] = -(pcVar1[5] == auVar59[5]);
            auVar79[6] = -(pcVar1[6] == auVar59[6]);
            auVar79[7] = -(pcVar1[7] == auVar59[7]);
            auVar79[8] = -(pcVar1[8] == auVar59[0]);
            auVar79[9] = -(pcVar1[9] == auVar59[1]);
            auVar79[10] = -(pcVar1[10] == auVar59[2]);
            auVar79[0xb] = -(pcVar1[0xb] == auVar59[3]);
            auVar79[0xc] = -(pcVar1[0xc] == auVar59[4]);
            auVar79[0xd] = -(pcVar1[0xd] == auVar59[5]);
            auVar79[0xe] = -(pcVar1[0xe] == auVar59[6]);
            auVar79[0xf] = -(pcVar1[0xf] == auVar59[7]);
            uVar27 = (ushort)(SUB161(auVar79 >> 7,0) & 1) |
                     (ushort)(SUB161(auVar79 >> 0xf,0) & 1) << 1 |
                     (ushort)(SUB161(auVar79 >> 0x17,0) & 1) << 2 |
                     (ushort)(SUB161(auVar79 >> 0x1f,0) & 1) << 3 |
                     (ushort)(SUB161(auVar79 >> 0x27,0) & 1) << 4 |
                     (ushort)(SUB161(auVar79 >> 0x2f,0) & 1) << 5 |
                     (ushort)(SUB161(auVar79 >> 0x37,0) & 1) << 6 |
                     (ushort)(SUB161(auVar79 >> 0x3f,0) & 1) << 7 |
                     (ushort)(SUB161(auVar79 >> 0x47,0) & 1) << 8 |
                     (ushort)(SUB161(auVar79 >> 0x4f,0) & 1) << 9 |
                     (ushort)(SUB161(auVar79 >> 0x57,0) & 1) << 10 |
                     (ushort)(SUB161(auVar79 >> 0x5f,0) & 1) << 0xb |
                     (ushort)(SUB161(auVar79 >> 0x67,0) & 1) << 0xc |
                     (ushort)(SUB161(auVar79 >> 0x6f,0) & 1) << 0xd |
                     (ushort)(SUB161(auVar79 >> 0x77,0) & 1) << 0xe |
                     (ushort)(auVar79[0xf] >> 7) << 0xf;
            uVar48 = (uint)uVar27;
            while (uVar27 != 0) {
              uVar44 = 0;
              for (uVar6 = uVar48; (uVar6 & 1) == 0; uVar6 = uVar6 >> 1 | 0x80000000) {
                uVar44 = uVar44 + 1;
              }
              lVar37 = (uVar44 + uVar54 & CONCAT44(uStack_224,uStack_228)) * -0x38;
              if ((*(longlong *)((longlong)uStack_230 + lVar37 + -0x28) == 10) &&
                 (plVar32 = *(longlong **)((longlong)uStack_230 + lVar37 + -0x30),
                 (short)plVar32[1] == 0x736f && *plVar32 == 0x705f726165707061)) goto LAB_140c54f83;
              uVar27 = (ushort)(uVar48 - 1) & (ushort)uVar48;
              uVar48 = CONCAT22((short)(uVar48 - 1 >> 0x10),uVar27);
            }
            auVar68[0] = -(*pcVar1 == cVar83);
            auVar68[1] = -(pcVar1[1] == cVar84);
            auVar68[2] = -(pcVar1[2] == cVar85);
            auVar68[3] = -(pcVar1[3] == cVar86);
            auVar68[4] = -(pcVar1[4] == cVar87);
            auVar68[5] = -(pcVar1[5] == cVar88);
            auVar68[6] = -(pcVar1[6] == cVar89);
            auVar68[7] = -(pcVar1[7] == cVar90);
            auVar68[8] = -(pcVar1[8] == cVar91);
            auVar68[9] = -(pcVar1[9] == cVar92);
            auVar68[10] = -(pcVar1[10] == cVar93);
            auVar68[0xb] = -(pcVar1[0xb] == cVar94);
            auVar68[0xc] = -(pcVar1[0xc] == cVar95);
            auVar68[0xd] = -(pcVar1[0xd] == cVar96);
            auVar68[0xe] = -(pcVar1[0xe] == cVar97);
            auVar68[0xf] = -(pcVar1[0xf] == cVar98);
            if ((((((((((((((((SUB161(auVar68 >> 7,0) & 1) != 0 ||
                             (SUB161(auVar68 >> 0xf,0) & 1) != 0) ||
                            (SUB161(auVar68 >> 0x17,0) & 1) != 0) ||
                           (SUB161(auVar68 >> 0x1f,0) & 1) != 0) ||
                          (SUB161(auVar68 >> 0x27,0) & 1) != 0) ||
                         (SUB161(auVar68 >> 0x2f,0) & 1) != 0) ||
                        (SUB161(auVar68 >> 0x37,0) & 1) != 0) ||
                       (SUB161(auVar68 >> 0x3f,0) & 1) != 0) || (SUB161(auVar68 >> 0x47,0) & 1) != 0
                      ) || (SUB161(auVar68 >> 0x4f,0) & 1) != 0) ||
                    (SUB161(auVar68 >> 0x57,0) & 1) != 0) || (SUB161(auVar68 >> 0x5f,0) & 1) != 0)
                  || (SUB161(auVar68 >> 0x67,0) & 1) != 0) || (SUB161(auVar68 >> 0x6f,0) & 1) != 0)
                || (SUB161(auVar68 >> 0x77,0) & 1) != 0) || auVar68[0xf] < '\0') break;
            uVar54 = uVar54 + lVar35 + 0x10;
            lVar35 = lVar35 + 0x10;
          }
        }
        uStack_1c0 = (undefined1 (*) [16])((ulonglong)uStack_1c0 & 0xffffffff00000000);
        pauStack_1c8 = (undefined1 (*) [16])0x0;
        pdb_1415e43a0(&pauStack_178,&pauStack_1c8,pauVar33);
        pdb_140c93200(&pauStack_268,&UNK_14306ea9a,10,&pauStack_178);
        if (lStack_218 != 0) {
LAB_140c54f83:
          uVar54 = pdb_1400af950(&uStack_210,&UNK_14306eaa4,3);
          bVar51 = (byte)(uVar54 >> 0x39);
          auVar59 = ZEXT216(CONCAT11(bVar51,bVar51));
          auVar59 = pshuflw(auVar59,auVar59,0);
          lVar35 = 0;
          while( true ) {
            uVar54 = uVar54 & CONCAT44(uStack_224,uStack_228);
            pcVar1 = *uStack_230 + uVar54;
            auVar80[0] = -(*pcVar1 == auVar59[0]);
            auVar80[1] = -(pcVar1[1] == auVar59[1]);
            auVar80[2] = -(pcVar1[2] == auVar59[2]);
            auVar80[3] = -(pcVar1[3] == auVar59[3]);
            auVar80[4] = -(pcVar1[4] == auVar59[4]);
            auVar80[5] = -(pcVar1[5] == auVar59[5]);
            auVar80[6] = -(pcVar1[6] == auVar59[6]);
            auVar80[7] = -(pcVar1[7] == auVar59[7]);
            auVar80[8] = -(pcVar1[8] == auVar59[0]);
            auVar80[9] = -(pcVar1[9] == auVar59[1]);
            auVar80[10] = -(pcVar1[10] == auVar59[2]);
            auVar80[0xb] = -(pcVar1[0xb] == auVar59[3]);
            auVar80[0xc] = -(pcVar1[0xc] == auVar59[4]);
            auVar80[0xd] = -(pcVar1[0xd] == auVar59[5]);
            auVar80[0xe] = -(pcVar1[0xe] == auVar59[6]);
            auVar80[0xf] = -(pcVar1[0xf] == auVar59[7]);
            uVar27 = (ushort)(SUB161(auVar80 >> 7,0) & 1) |
                     (ushort)(SUB161(auVar80 >> 0xf,0) & 1) << 1 |
                     (ushort)(SUB161(auVar80 >> 0x17,0) & 1) << 2 |
                     (ushort)(SUB161(auVar80 >> 0x1f,0) & 1) << 3 |
                     (ushort)(SUB161(auVar80 >> 0x27,0) & 1) << 4 |
                     (ushort)(SUB161(auVar80 >> 0x2f,0) & 1) << 5 |
                     (ushort)(SUB161(auVar80 >> 0x37,0) & 1) << 6 |
                     (ushort)(SUB161(auVar80 >> 0x3f,0) & 1) << 7 |
                     (ushort)(SUB161(auVar80 >> 0x47,0) & 1) << 8 |
                     (ushort)(SUB161(auVar80 >> 0x4f,0) & 1) << 9 |
                     (ushort)(SUB161(auVar80 >> 0x57,0) & 1) << 10 |
                     (ushort)(SUB161(auVar80 >> 0x5f,0) & 1) << 0xb |
                     (ushort)(SUB161(auVar80 >> 0x67,0) & 1) << 0xc |
                     (ushort)(SUB161(auVar80 >> 0x6f,0) & 1) << 0xd |
                     (ushort)(SUB161(auVar80 >> 0x77,0) & 1) << 0xe |
                     (ushort)(auVar80[0xf] >> 7) << 0xf;
            uVar48 = (uint)uVar27;
            while (uVar27 != 0) {
              uVar44 = 0;
              for (uVar6 = uVar48; (uVar6 & 1) == 0; uVar6 = uVar6 >> 1 | 0x80000000) {
                uVar44 = uVar44 + 1;
              }
              lVar37 = (uVar44 + uVar54 & CONCAT44(uStack_224,uStack_228)) * -0x38;
              if ((*(longlong *)((longlong)uStack_230 + lVar37 + -0x28) == 3) &&
                 (psVar4 = *(short **)((longlong)uStack_230 + lVar37 + -0x30),
                 (char)psVar4[1] == 'e' && *psVar4 == 0x6761)) goto LAB_140c5545b;
              uVar27 = (ushort)(uVar48 - 1) & (ushort)uVar48;
              uVar48 = CONCAT22((short)(uVar48 - 1 >> 0x10),uVar27);
            }
            auVar69[0] = -(*pcVar1 == cVar83);
            auVar69[1] = -(pcVar1[1] == cVar84);
            auVar69[2] = -(pcVar1[2] == cVar85);
            auVar69[3] = -(pcVar1[3] == cVar86);
            auVar69[4] = -(pcVar1[4] == cVar87);
            auVar69[5] = -(pcVar1[5] == cVar88);
            auVar69[6] = -(pcVar1[6] == cVar89);
            auVar69[7] = -(pcVar1[7] == cVar90);
            auVar69[8] = -(pcVar1[8] == cVar91);
            auVar69[9] = -(pcVar1[9] == cVar92);
            auVar69[10] = -(pcVar1[10] == cVar93);
            auVar69[0xb] = -(pcVar1[0xb] == cVar94);
            auVar69[0xc] = -(pcVar1[0xc] == cVar95);
            auVar69[0xd] = -(pcVar1[0xd] == cVar96);
            auVar69[0xe] = -(pcVar1[0xe] == cVar97);
            auVar69[0xf] = -(pcVar1[0xf] == cVar98);
            if ((((((((((((((((SUB161(auVar69 >> 7,0) & 1) != 0 ||
                             (SUB161(auVar69 >> 0xf,0) & 1) != 0) ||
                            (SUB161(auVar69 >> 0x17,0) & 1) != 0) ||
                           (SUB161(auVar69 >> 0x1f,0) & 1) != 0) ||
                          (SUB161(auVar69 >> 0x27,0) & 1) != 0) ||
                         (SUB161(auVar69 >> 0x2f,0) & 1) != 0) ||
                        (SUB161(auVar69 >> 0x37,0) & 1) != 0) ||
                       (SUB161(auVar69 >> 0x3f,0) & 1) != 0) || (SUB161(auVar69 >> 0x47,0) & 1) != 0
                      ) || (SUB161(auVar69 >> 0x4f,0) & 1) != 0) ||
                    (SUB161(auVar69 >> 0x57,0) & 1) != 0) || (SUB161(auVar69 >> 0x5f,0) & 1) != 0)
                  || (SUB161(auVar69 >> 0x67,0) & 1) != 0) || (SUB161(auVar69 >> 0x6f,0) & 1) != 0)
                || (SUB161(auVar69 >> 0x77,0) & 1) != 0) || auVar69[0xf] < '\0') break;
            uVar54 = uVar54 + lVar35 + 0x10;
            lVar35 = lVar35 + 0x10;
          }
        }
        pdb_14007ee60();
        pbVar30 = pub_1406abab0((longlong)pauVar33 * 4,4);
        if (pbVar30 == (byte *)0x0) {
          pdb_142dc7e2a(4,(longlong)pauVar33 * 4);
          goto LAB_140c56b2e;
        }
        pbVar41 = pbVar30;
        if (pauVar33 != (undefined1 (*) [16])0x1) {
          lVar35 = 1;
          if ((undefined1 (*) [16])0x8 < pauVar33) {
            puVar29 = (undefined1 *)((ulonglong)(pauVar33[-1] + 0xf) & 0xfffffffffffffff8);
            pbVar41 = pbVar30 + (longlong)puVar29 * 4;
            lVar35 = (longlong)puVar29 + 1;
            puVar49 = (undefined1 *)0x0;
            do {
              *(undefined8 *)(pbVar30 + (longlong)puVar49 * 4) = uVar22;
              *(undefined8 *)(pbVar30 + (longlong)puVar49 * 4 + 8) = uVar23;
              *(undefined8 *)(pbVar30 + (longlong)puVar49 * 4 + 0x10) = uVar22;
              *(undefined8 *)(pbVar30 + (longlong)puVar49 * 4 + 0x10 + 8) = uVar23;
              puVar49 = puVar49 + 8;
            } while (puVar29 != puVar49);
            if (pauVar33[-1] + 0xf == puVar29) goto LAB_140c550cf;
          }
          lVar35 = (longlong)pauVar33 - lVar35;
          do {
            pbVar41[0] = 0;
            pbVar41[1] = 0;
            pbVar41[2] = 0x80;
            pbVar41[3] = 0x3f;
            pbVar41 = pbVar41 + 4;
            lVar35 = lVar35 + -1;
          } while (lVar35 != 0);
        }
LAB_140c550cf:
        pbVar41[0] = 0;
        pbVar41[1] = 0;
        pbVar41[2] = 0x80;
        pbVar41[3] = 0x3f;
        pauStack_178 = pauVar33;
        pauStack_170 = (undefined1 (*) [16])pbVar30;
        pauStack_168 = pauVar33;
        pdb_140c93680(&pauStack_268,&UNK_14306eaa4,3,&pauStack_178);
      }
    }
    else {
      if ((lStack_368 != 0xe) ||
         (*(longlong *)(*pauStack_370 + 6) != 0x79706f6e61635f74 ||
          *(longlong *)*pauStack_370 != 0x5f74636172747865)) {
LAB_140c56ab1:
        pauStack_268 = (undefined1 (*) [16])&ppauStack_410;
        pauStack_260 = (undefined1 (*) [16])pdb_140493e10;
        uStack_c2 = 1;
                    /* WARNING: Subroutine does not return */
        pdb_142dc83d0(&UNK_14306ea60,&pauStack_268,&UNK_14306ea80);
      }
      uStack_c2 = 1;
      pdb_141824f90(&pauStack_268,pauVar33 + 1,pauStack_370,0xe);
      pauVar33 = uStack_230;
      if (lStack_218 == 0) {
        pauStack_e8 = (undefined1 (*) [16])0x0;
      }
      else {
        auVar59 = *uStack_230;
        uVar27 = (ushort)(SUB161(auVar59 >> 7,0) & 1) | (ushort)(SUB161(auVar59 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar59 >> 0x17,0) & 1) << 2 |
                 (ushort)(SUB161(auVar59 >> 0x1f,0) & 1) << 3 |
                 (ushort)(SUB161(auVar59 >> 0x27,0) & 1) << 4 |
                 (ushort)(SUB161(auVar59 >> 0x2f,0) & 1) << 5 |
                 (ushort)(SUB161(auVar59 >> 0x37,0) & 1) << 6 |
                 (ushort)(SUB161(auVar59 >> 0x3f,0) & 1) << 7 |
                 (ushort)(SUB161(auVar59 >> 0x47,0) & 1) << 8 |
                 (ushort)(SUB161(auVar59 >> 0x4f,0) & 1) << 9 |
                 (ushort)(SUB161(auVar59 >> 0x57,0) & 1) << 10 |
                 (ushort)(SUB161(auVar59 >> 0x5f,0) & 1) << 0xb |
                 (ushort)(SUB161(auVar59 >> 0x67,0) & 1) << 0xc |
                 (ushort)(SUB161(auVar59 >> 0x6f,0) & 1) << 0xd |
                 (ushort)(SUB161(auVar59 >> 0x77,0) & 1) << 0xe |
                 (ushort)(byte)(auVar59[0xf] >> 7) << 0xf;
        pauVar45 = uStack_230;
        pauVar38 = uStack_230;
        while (uVar48 = uVar27 ^ 0xffff, uVar48 == 0) {
          pauVar38 = pauVar38 + 1;
          auVar59 = *pauVar38;
          pauVar45 = pauVar45 + -0x38;
          uVar27 = (ushort)(SUB161(auVar59 >> 7,0) & 1) |
                   (ushort)(SUB161(auVar59 >> 0xf,0) & 1) << 1 |
                   (ushort)(SUB161(auVar59 >> 0x17,0) & 1) << 2 |
                   (ushort)(SUB161(auVar59 >> 0x1f,0) & 1) << 3 |
                   (ushort)(SUB161(auVar59 >> 0x27,0) & 1) << 4 |
                   (ushort)(SUB161(auVar59 >> 0x2f,0) & 1) << 5 |
                   (ushort)(SUB161(auVar59 >> 0x37,0) & 1) << 6 |
                   (ushort)(SUB161(auVar59 >> 0x3f,0) & 1) << 7 |
                   (ushort)(SUB161(auVar59 >> 0x47,0) & 1) << 8 |
                   (ushort)(SUB161(auVar59 >> 0x4f,0) & 1) << 9 |
                   (ushort)(SUB161(auVar59 >> 0x57,0) & 1) << 10 |
                   (ushort)(SUB161(auVar59 >> 0x5f,0) & 1) << 0xb |
                   (ushort)(SUB161(auVar59 >> 0x67,0) & 1) << 0xc |
                   (ushort)(SUB161(auVar59 >> 0x6f,0) & 1) << 0xd |
                   (ushort)(SUB161(auVar59 >> 0x77,0) & 1) << 0xe |
                   (ushort)(byte)(auVar59[0xf] >> 7) << 0xf;
        }
        uVar44 = 0;
        for (; (uVar48 & 1) == 0; uVar48 = uVar48 >> 1 | 0x80000000) {
          uVar44 = uVar44 + 1;
        }
        pauStack_e8 = *(undefined1 (**) [16])((longlong)pauVar45 + (ulonglong)uVar44 * -0x38 + -8);
        uVar54 = pdb_1400af950(&uStack_210,&UNK_14306eb70);
        pauVar45 = (undefined1 (*) [16])CONCAT44(uStack_224,uStack_228);
        bVar51 = (byte)(uVar54 >> 0x39);
        auVar59 = ZEXT216(CONCAT11(bVar51,bVar51));
        auVar59 = pshuflw(auVar59,auVar59,0);
        lVar35 = 0;
        while( true ) {
          uVar54 = uVar54 & (ulonglong)pauVar45;
          auVar60 = *(undefined1 (*) [16])(*pauVar33 + uVar54);
          auVar75[0] = -(auVar60[0] == auVar59[0]);
          auVar75[1] = -(auVar60[1] == auVar59[1]);
          auVar75[2] = -(auVar60[2] == auVar59[2]);
          auVar75[3] = -(auVar60[3] == auVar59[3]);
          auVar75[4] = -(auVar60[4] == auVar59[4]);
          auVar75[5] = -(auVar60[5] == auVar59[5]);
          auVar75[6] = -(auVar60[6] == auVar59[6]);
          auVar75[7] = -(auVar60[7] == auVar59[7]);
          auVar75[8] = -(auVar60[8] == auVar59[0]);
          auVar75[9] = -(auVar60[9] == auVar59[1]);
          auVar75[10] = -(auVar60[10] == auVar59[2]);
          auVar75[0xb] = -(auVar60[0xb] == auVar59[3]);
          auVar75[0xc] = -(auVar60[0xc] == auVar59[4]);
          auVar75[0xd] = -(auVar60[0xd] == auVar59[5]);
          auVar75[0xe] = -(auVar60[0xe] == auVar59[6]);
          auVar75[0xf] = -(auVar60[0xf] == auVar59[7]);
          uVar27 = (ushort)(SUB161(auVar75 >> 7,0) & 1) |
                   (ushort)(SUB161(auVar75 >> 0xf,0) & 1) << 1 |
                   (ushort)(SUB161(auVar75 >> 0x17,0) & 1) << 2 |
                   (ushort)(SUB161(auVar75 >> 0x1f,0) & 1) << 3 |
                   (ushort)(SUB161(auVar75 >> 0x27,0) & 1) << 4 |
                   (ushort)(SUB161(auVar75 >> 0x2f,0) & 1) << 5 |
                   (ushort)(SUB161(auVar75 >> 0x37,0) & 1) << 6 |
                   (ushort)(SUB161(auVar75 >> 0x3f,0) & 1) << 7 |
                   (ushort)(SUB161(auVar75 >> 0x47,0) & 1) << 8 |
                   (ushort)(SUB161(auVar75 >> 0x4f,0) & 1) << 9 |
                   (ushort)(SUB161(auVar75 >> 0x57,0) & 1) << 10 |
                   (ushort)(SUB161(auVar75 >> 0x5f,0) & 1) << 0xb |
                   (ushort)(SUB161(auVar75 >> 0x67,0) & 1) << 0xc |
                   (ushort)(SUB161(auVar75 >> 0x6f,0) & 1) << 0xd |
                   (ushort)(SUB161(auVar75 >> 0x77,0) & 1) << 0xe |
                   (ushort)(auVar75[0xf] >> 7) << 0xf;
          uVar48 = (uint)uVar27;
          while (uVar27 != 0) {
            uVar44 = 0;
            for (uVar6 = uVar48; (uVar6 & 1) == 0; uVar6 = uVar6 >> 1 | 0x80000000) {
              uVar44 = uVar44 + 1;
            }
            lVar37 = (uVar44 + uVar54 & (ulonglong)pauVar45) * -0x38;
            if ((*(longlong *)((longlong)pauVar33 + lVar37 + -0x28) == 0xb) &&
               (plVar32 = *(longlong **)((longlong)pauVar33 + lVar37 + -0x30),
               *(longlong *)((longlong)plVar32 + 3) == 0x7265746e65635f6d &&
               *plVar32 == 0x6e65635f6d697270)) {
              uStack_2a8 = pdb_140e4d980((longlong)pauVar33 + lVar37 + -0x20);
              pauStack_300 = pauVar45;
              if (lStack_218 == 0) goto LAB_140c560a0;
              uVar54 = pdb_1400af950(&uStack_210,&UNK_14306e5e8,0xf);
              bVar51 = (byte)(uVar54 >> 0x39);
              auVar59 = ZEXT216(CONCAT11(bVar51,bVar51));
              auVar59 = pshuflw(auVar59,auVar59,0);
              lVar35 = 0;
              goto LAB_140c54259;
            }
            uVar27 = (ushort)(uVar48 - 1) & (ushort)uVar48;
            uVar48 = CONCAT22((short)(uVar48 - 1 >> 0x10),uVar27);
          }
          auVar64[0] = -(auVar60[0] == cVar83);
          auVar64[1] = -(auVar60[1] == cVar84);
          auVar64[2] = -(auVar60[2] == cVar85);
          auVar64[3] = -(auVar60[3] == cVar86);
          auVar64[4] = -(auVar60[4] == cVar87);
          auVar64[5] = -(auVar60[5] == cVar88);
          auVar64[6] = -(auVar60[6] == cVar89);
          auVar64[7] = -(auVar60[7] == cVar90);
          auVar64[8] = -(auVar60[8] == cVar91);
          auVar64[9] = -(auVar60[9] == cVar92);
          auVar64[10] = -(auVar60[10] == cVar93);
          auVar64[0xb] = -(auVar60[0xb] == cVar94);
          auVar64[0xc] = -(auVar60[0xc] == cVar95);
          auVar64[0xd] = -(auVar60[0xd] == cVar96);
          auVar64[0xe] = -(auVar60[0xe] == cVar97);
          auVar64[0xf] = -(auVar60[0xf] == cVar98);
          if ((((((((((((((((SUB161(auVar64 >> 7,0) & 1) != 0 || (SUB161(auVar64 >> 0xf,0) & 1) != 0
                           ) || (SUB161(auVar64 >> 0x17,0) & 1) != 0) ||
                         (SUB161(auVar64 >> 0x1f,0) & 1) != 0) ||
                        (SUB161(auVar64 >> 0x27,0) & 1) != 0) ||
                       (SUB161(auVar64 >> 0x2f,0) & 1) != 0) || (SUB161(auVar64 >> 0x37,0) & 1) != 0
                      ) || (SUB161(auVar64 >> 0x3f,0) & 1) != 0) ||
                    (SUB161(auVar64 >> 0x47,0) & 1) != 0) || (SUB161(auVar64 >> 0x4f,0) & 1) != 0)
                  || (SUB161(auVar64 >> 0x57,0) & 1) != 0) || (SUB161(auVar64 >> 0x5f,0) & 1) != 0)
                || (SUB161(auVar64 >> 0x67,0) & 1) != 0) || (SUB161(auVar64 >> 0x6f,0) & 1) != 0) ||
              (SUB161(auVar64 >> 0x77,0) & 1) != 0) || auVar64[0xf] < '\0') break;
          uVar54 = uVar54 + lVar35 + 0x10;
          lVar35 = lVar35 + 0x10;
        }
      }
LAB_140c542f6:
      uVar31 = pdb_1400af950(&uStack_210,&UNK_14306ea98,2);
      pdb_140caa5c0(&pauStack_178,&uStack_230,uVar31,&UNK_14306ea98,2);
      pauVar38 = pauStack_150;
      pauVar45 = pauStack_158;
      pauVar33 = pauStack_160;
      if (pauStack_160 != (undefined1 (*) [16])0x6) {
        if (pauStack_178 != (undefined1 (*) [16])0x0) {
          pub_1406abac0((byte *)pauStack_170,(ulonglong)pauStack_178,1);
        }
        switch(pauVar33) {
        case (undefined1 (*) [16])0x0:
        case (undefined1 (*) [16])0x2:
          if (pauVar45 != (undefined1 (*) [16])0x0) {
            uVar54 = (longlong)pauVar45 << 2;
code_r0x000140c5514d:
            uVar36 = 4;
code_r0x000140c55159:
            pub_1406abac0((byte *)pauVar38,uVar54,uVar36);
          }
          break;
        case (undefined1 (*) [16])0x1:
          if (pauVar45 != (undefined1 (*) [16])0x0) {
            uVar54 = (longlong)pauVar45 << 3;
            uVar36 = 2;
            goto code_r0x000140c55159;
          }
          break;
        case (undefined1 (*) [16])0x3:
          if (pauVar45 != (undefined1 (*) [16])0x0) {
            uVar54 = (longlong)pauVar45 << 3;
            goto code_r0x000140c5514d;
          }
          break;
        case (undefined1 (*) [16])0x4:
          if (pauVar45 != (undefined1 (*) [16])0x0) {
            uVar54 = (longlong)pauVar45 * 0xc;
            uVar36 = 4;
            goto code_r0x000140c55159;
          }
          break;
        default:
          if (pauVar45 != (undefined1 (*) [16])0x0) {
            uVar54 = (longlong)pauVar45 << 4;
            goto code_r0x000140c5514d;
          }
        }
      }
      if (lStack_218 != 0) {
        uVar54 = pdb_1400af950(&uStack_210,&UNK_14306ea9a,10);
        bVar51 = (byte)(uVar54 >> 0x39);
        auVar59 = ZEXT216(CONCAT11(bVar51,bVar51));
        auVar59 = pshuflw(auVar59,auVar59,0);
        lVar35 = 0;
        while( true ) {
          uVar54 = uVar54 & CONCAT44(uStack_224,uStack_228);
          pcVar1 = *uStack_230 + uVar54;
          auVar81[0] = -(*pcVar1 == auVar59[0]);
          auVar81[1] = -(pcVar1[1] == auVar59[1]);
          auVar81[2] = -(pcVar1[2] == auVar59[2]);
          auVar81[3] = -(pcVar1[3] == auVar59[3]);
          auVar81[4] = -(pcVar1[4] == auVar59[4]);
          auVar81[5] = -(pcVar1[5] == auVar59[5]);
          auVar81[6] = -(pcVar1[6] == auVar59[6]);
          auVar81[7] = -(pcVar1[7] == auVar59[7]);
          auVar81[8] = -(pcVar1[8] == auVar59[0]);
          auVar81[9] = -(pcVar1[9] == auVar59[1]);
          auVar81[10] = -(pcVar1[10] == auVar59[2]);
          auVar81[0xb] = -(pcVar1[0xb] == auVar59[3]);
          auVar81[0xc] = -(pcVar1[0xc] == auVar59[4]);
          auVar81[0xd] = -(pcVar1[0xd] == auVar59[5]);
          auVar81[0xe] = -(pcVar1[0xe] == auVar59[6]);
          auVar81[0xf] = -(pcVar1[0xf] == auVar59[7]);
          uVar27 = (ushort)(SUB161(auVar81 >> 7,0) & 1) |
                   (ushort)(SUB161(auVar81 >> 0xf,0) & 1) << 1 |
                   (ushort)(SUB161(auVar81 >> 0x17,0) & 1) << 2 |
                   (ushort)(SUB161(auVar81 >> 0x1f,0) & 1) << 3 |
                   (ushort)(SUB161(auVar81 >> 0x27,0) & 1) << 4 |
                   (ushort)(SUB161(auVar81 >> 0x2f,0) & 1) << 5 |
                   (ushort)(SUB161(auVar81 >> 0x37,0) & 1) << 6 |
                   (ushort)(SUB161(auVar81 >> 0x3f,0) & 1) << 7 |
                   (ushort)(SUB161(auVar81 >> 0x47,0) & 1) << 8 |
                   (ushort)(SUB161(auVar81 >> 0x4f,0) & 1) << 9 |
                   (ushort)(SUB161(auVar81 >> 0x57,0) & 1) << 10 |
                   (ushort)(SUB161(auVar81 >> 0x5f,0) & 1) << 0xb |
                   (ushort)(SUB161(auVar81 >> 0x67,0) & 1) << 0xc |
                   (ushort)(SUB161(auVar81 >> 0x6f,0) & 1) << 0xd |
                   (ushort)(SUB161(auVar81 >> 0x77,0) & 1) << 0xe |
                   (ushort)(auVar81[0xf] >> 7) << 0xf;
          uVar48 = (uint)uVar27;
          while (uVar27 != 0) {
            uVar44 = 0;
            for (uVar6 = uVar48; (uVar6 & 1) == 0; uVar6 = uVar6 >> 1 | 0x80000000) {
              uVar44 = uVar44 + 1;
            }
            lVar37 = (uVar44 + uVar54 & CONCAT44(uStack_224,uStack_228)) * -0x38;
            if ((*(longlong *)((longlong)uStack_230 + lVar37 + -0x28) == 10) &&
               (plVar32 = *(longlong **)((longlong)uStack_230 + lVar37 + -0x30),
               (short)plVar32[1] == 0x736f && *plVar32 == 0x705f726165707061)) goto LAB_140c552a1;
            uVar27 = (ushort)(uVar48 - 1) & (ushort)uVar48;
            uVar48 = CONCAT22((short)(uVar48 - 1 >> 0x10),uVar27);
          }
          auVar70[0] = -(*pcVar1 == cVar83);
          auVar70[1] = -(pcVar1[1] == cVar84);
          auVar70[2] = -(pcVar1[2] == cVar85);
          auVar70[3] = -(pcVar1[3] == cVar86);
          auVar70[4] = -(pcVar1[4] == cVar87);
          auVar70[5] = -(pcVar1[5] == cVar88);
          auVar70[6] = -(pcVar1[6] == cVar89);
          auVar70[7] = -(pcVar1[7] == cVar90);
          auVar70[8] = -(pcVar1[8] == cVar91);
          auVar70[9] = -(pcVar1[9] == cVar92);
          auVar70[10] = -(pcVar1[10] == cVar93);
          auVar70[0xb] = -(pcVar1[0xb] == cVar94);
          auVar70[0xc] = -(pcVar1[0xc] == cVar95);
          auVar70[0xd] = -(pcVar1[0xd] == cVar96);
          auVar70[0xe] = -(pcVar1[0xe] == cVar97);
          auVar70[0xf] = -(pcVar1[0xf] == cVar98);
          if ((((((((((((((((SUB161(auVar70 >> 7,0) & 1) != 0 || (SUB161(auVar70 >> 0xf,0) & 1) != 0
                           ) || (SUB161(auVar70 >> 0x17,0) & 1) != 0) ||
                         (SUB161(auVar70 >> 0x1f,0) & 1) != 0) ||
                        (SUB161(auVar70 >> 0x27,0) & 1) != 0) ||
                       (SUB161(auVar70 >> 0x2f,0) & 1) != 0) || (SUB161(auVar70 >> 0x37,0) & 1) != 0
                      ) || (SUB161(auVar70 >> 0x3f,0) & 1) != 0) ||
                    (SUB161(auVar70 >> 0x47,0) & 1) != 0) || (SUB161(auVar70 >> 0x4f,0) & 1) != 0)
                  || (SUB161(auVar70 >> 0x57,0) & 1) != 0) || (SUB161(auVar70 >> 0x5f,0) & 1) != 0)
                || (SUB161(auVar70 >> 0x67,0) & 1) != 0) || (SUB161(auVar70 >> 0x6f,0) & 1) != 0) ||
              (SUB161(auVar70 >> 0x77,0) & 1) != 0) || auVar70[0xf] < '\0') break;
          uVar54 = uVar54 + lVar35 + 0x10;
          lVar35 = lVar35 + 0x10;
        }
      }
      uStack_1c0 = (undefined1 (*) [16])((ulonglong)uStack_1c0 & 0xffffffff00000000);
      pauStack_1c8 = (undefined1 (*) [16])0x0;
      pdb_1415e43a0(&pauStack_178,&pauStack_1c8,pauStack_e8);
      pdb_140c93200(&pauStack_268,&UNK_14306ea9a,10,&pauStack_178);
      if (lStack_218 != 0) {
LAB_140c552a1:
        uVar54 = pdb_1400af950(&uStack_210,&UNK_14306eaa4,3);
        bVar51 = (byte)(uVar54 >> 0x39);
        auVar59 = ZEXT216(CONCAT11(bVar51,bVar51));
        auVar59 = pshuflw(auVar59,auVar59,0);
        lVar35 = 0;
        while( true ) {
          uVar54 = uVar54 & CONCAT44(uStack_224,uStack_228);
          pcVar1 = *uStack_230 + uVar54;
          auVar82[0] = -(*pcVar1 == auVar59[0]);
          auVar82[1] = -(pcVar1[1] == auVar59[1]);
          auVar82[2] = -(pcVar1[2] == auVar59[2]);
          auVar82[3] = -(pcVar1[3] == auVar59[3]);
          auVar82[4] = -(pcVar1[4] == auVar59[4]);
          auVar82[5] = -(pcVar1[5] == auVar59[5]);
          auVar82[6] = -(pcVar1[6] == auVar59[6]);
          auVar82[7] = -(pcVar1[7] == auVar59[7]);
          auVar82[8] = -(pcVar1[8] == auVar59[0]);
          auVar82[9] = -(pcVar1[9] == auVar59[1]);
          auVar82[10] = -(pcVar1[10] == auVar59[2]);
          auVar82[0xb] = -(pcVar1[0xb] == auVar59[3]);
          auVar82[0xc] = -(pcVar1[0xc] == auVar59[4]);
          auVar82[0xd] = -(pcVar1[0xd] == auVar59[5]);
          auVar82[0xe] = -(pcVar1[0xe] == auVar59[6]);
          auVar82[0xf] = -(pcVar1[0xf] == auVar59[7]);
          uVar27 = (ushort)(SUB161(auVar82 >> 7,0) & 1) |
                   (ushort)(SUB161(auVar82 >> 0xf,0) & 1) << 1 |
                   (ushort)(SUB161(auVar82 >> 0x17,0) & 1) << 2 |
                   (ushort)(SUB161(auVar82 >> 0x1f,0) & 1) << 3 |
                   (ushort)(SUB161(auVar82 >> 0x27,0) & 1) << 4 |
                   (ushort)(SUB161(auVar82 >> 0x2f,0) & 1) << 5 |
                   (ushort)(SUB161(auVar82 >> 0x37,0) & 1) << 6 |
                   (ushort)(SUB161(auVar82 >> 0x3f,0) & 1) << 7 |
                   (ushort)(SUB161(auVar82 >> 0x47,0) & 1) << 8 |
                   (ushort)(SUB161(auVar82 >> 0x4f,0) & 1) << 9 |
                   (ushort)(SUB161(auVar82 >> 0x57,0) & 1) << 10 |
                   (ushort)(SUB161(auVar82 >> 0x5f,0) & 1) << 0xb |
                   (ushort)(SUB161(auVar82 >> 0x67,0) & 1) << 0xc |
                   (ushort)(SUB161(auVar82 >> 0x6f,0) & 1) << 0xd |
                   (ushort)(SUB161(auVar82 >> 0x77,0) & 1) << 0xe |
                   (ushort)(auVar82[0xf] >> 7) << 0xf;
          uVar48 = (uint)uVar27;
          while (uVar27 != 0) {
            uVar44 = 0;
            for (uVar6 = uVar48; (uVar6 & 1) == 0; uVar6 = uVar6 >> 1 | 0x80000000) {
              uVar44 = uVar44 + 1;
            }
            lVar37 = (uVar44 + uVar54 & CONCAT44(uStack_224,uStack_228)) * -0x38;
            if ((*(longlong *)((longlong)uStack_230 + lVar37 + -0x28) == 3) &&
               (psVar4 = *(short **)((longlong)uStack_230 + lVar37 + -0x30),
               (char)psVar4[1] == 'e' && *psVar4 == 0x6761)) goto LAB_140c5545b;
            uVar27 = (ushort)(uVar48 - 1) & (ushort)uVar48;
            uVar48 = CONCAT22((short)(uVar48 - 1 >> 0x10),uVar27);
          }
          auVar71[0] = -(*pcVar1 == cVar83);
          auVar71[1] = -(pcVar1[1] == cVar84);
          auVar71[2] = -(pcVar1[2] == cVar85);
          auVar71[3] = -(pcVar1[3] == cVar86);
          auVar71[4] = -(pcVar1[4] == cVar87);
          auVar71[5] = -(pcVar1[5] == cVar88);
          auVar71[6] = -(pcVar1[6] == cVar89);
          auVar71[7] = -(pcVar1[7] == cVar90);
          auVar71[8] = -(pcVar1[8] == cVar91);
          auVar71[9] = -(pcVar1[9] == cVar92);
          auVar71[10] = -(pcVar1[10] == cVar93);
          auVar71[0xb] = -(pcVar1[0xb] == cVar94);
          auVar71[0xc] = -(pcVar1[0xc] == cVar95);
          auVar71[0xd] = -(pcVar1[0xd] == cVar96);
          auVar71[0xe] = -(pcVar1[0xe] == cVar97);
          auVar71[0xf] = -(pcVar1[0xf] == cVar98);
          if ((((((((((((((((SUB161(auVar71 >> 7,0) & 1) != 0 || (SUB161(auVar71 >> 0xf,0) & 1) != 0
                           ) || (SUB161(auVar71 >> 0x17,0) & 1) != 0) ||
                         (SUB161(auVar71 >> 0x1f,0) & 1) != 0) ||
                        (SUB161(auVar71 >> 0x27,0) & 1) != 0) ||
                       (SUB161(auVar71 >> 0x2f,0) & 1) != 0) || (SUB161(auVar71 >> 0x37,0) & 1) != 0
                      ) || (SUB161(auVar71 >> 0x3f,0) & 1) != 0) ||
                    (SUB161(auVar71 >> 0x47,0) & 1) != 0) || (SUB161(auVar71 >> 0x4f,0) & 1) != 0)
                  || (SUB161(auVar71 >> 0x57,0) & 1) != 0) || (SUB161(auVar71 >> 0x5f,0) & 1) != 0)
                || (SUB161(auVar71 >> 0x67,0) & 1) != 0) || (SUB161(auVar71 >> 0x6f,0) & 1) != 0) ||
              (SUB161(auVar71 >> 0x77,0) & 1) != 0) || auVar71[0xf] < '\0') break;
          uVar54 = uVar54 + lVar35 + 0x10;
          lVar35 = lVar35 + 0x10;
        }
      }
      pauVar33 = pauStack_e8;
      if (pauStack_e8 == (undefined1 (*) [16])0x0) {
        pbVar30 = (byte *)0x4;
        pauStack_178 = (undefined1 (*) [16])0x0;
      }
      else {
        uVar54 = (longlong)pauStack_e8 * 4;
        pdb_14007ee60();
        pbVar30 = pub_1406abab0(uVar54,4);
        if (pbVar30 == (byte *)0x0) {
          pdb_142dc7e2a(4,uVar54);
          goto LAB_140c56b2e;
        }
        pbVar41 = pbVar30;
        pauStack_178 = (undefined1 (*) [16])0x1;
        if (pauVar33 != (undefined1 (*) [16])0x1) {
          pauVar45 = (undefined1 (*) [16])0x1;
          pauStack_178 = pauVar33;
          if ((undefined1 (*) [16])0x8 < pauVar33) {
            puVar49 = (undefined1 *)((ulonglong)(pauVar33[-1] + 0xf) & 0xfffffffffffffff8);
            pbVar41 = pbVar30 + (longlong)puVar49 * 4;
            pauVar45 = (undefined1 (*) [16])(puVar49 + 1);
            puVar29 = (undefined1 *)0x0;
            do {
              *(undefined8 *)(pbVar30 + (longlong)puVar29 * 4) = uVar22;
              *(undefined8 *)(pbVar30 + (longlong)puVar29 * 4 + 8) = uVar23;
              *(undefined8 *)(pbVar30 + (longlong)puVar29 * 4 + 0x10) = uVar22;
              *(undefined8 *)(pbVar30 + (longlong)puVar29 * 4 + 0x10 + 8) = uVar23;
              puVar29 = puVar29 + 8;
            } while (puVar49 != puVar29);
            if (pauVar33[-1] + 0xf == puVar49) goto LAB_140c55415;
          }
          do {
            pauVar45 = (undefined1 (*) [16])(*pauVar45 + 1);
            pbVar41[0] = 0;
            pbVar41[1] = 0;
            pbVar41[2] = 0x80;
            pbVar41[3] = 0x3f;
            pbVar41 = pbVar41 + 4;
          } while (pauVar33 != pauVar45);
        }
LAB_140c55415:
        pbVar41[0] = 0;
        pbVar41[1] = 0;
        pbVar41[2] = 0x80;
        pbVar41[3] = 0x3f;
      }
      pauStack_168 = pauVar33;
      pauStack_170 = (undefined1 (*) [16])pbVar30;
      pdb_140c93680(&pauStack_268,&UNK_14306eaa4,3,&pauStack_178);
    }
LAB_140c5545b:
    lStack_108 = lStack_1f8;
    uStack_100 = uStack_1f0;
    lStack_118 = lStack_208;
    uStack_110 = uStack_200;
    lStack_128 = lStack_218;
    uStack_120 = uStack_210;
    lStack_138 = CONCAT44(uStack_224,uStack_228);
    uStack_130 = CONCAT44(uStack_21c,uStack_220);
    uStack_148 = (undefined4)uStack_238;
    uStack_144 = uStack_238._4_4_;
    uStack_140 = (undefined4)uStack_230;
    uStack_13c = uStack_230._4_4_;
    pauStack_158 = pauStack_248;
    pauStack_150 = pauStack_240;
    pauStack_168 = pauStack_258;
    pauStack_160 = pauStack_250;
    pauStack_178 = pauStack_268;
    pauStack_170 = pauStack_260;
    pauStack_338 = pauStack_388;
    pauStack_348 = pauStack_398;
    pauStack_340 = pauStack_390;
    lStack_320 = lStack_3a8;
    pauStack_330 = pauStack_3b8;
    pauStack_328 = pauStack_3b0;
    uStack_d0 = 1;
    pdb_1417a8c80(&pauStack_268,param_5,&pauStack_348);
    if (SBORROW8(0,(longlong)pauStack_268)) {
      uStack_d0 = 1;
                    /* WARNING: Subroutine does not return */
      pdb_142dc83d0(&UNK_14306ead8,0x21,&UNK_14306eae8);
    }
    pauStack_190 = uStack_230;
    pauStack_1a0 = pauStack_240;
    pauStack_198 = uStack_238;
    pauStack_1b0 = pauStack_250;
    pauStack_1a8 = pauStack_248;
    pauStack_1c8 = pauStack_268;
    uStack_1c0 = pauStack_260;
    pauStack_1b8 = pauStack_258;
    lStack_1e8 = lStack_108;
    uStack_1e0 = uStack_100;
    lStack_1f8 = lStack_118;
    uStack_1f0 = uStack_110;
    lStack_208 = lStack_128;
    uStack_200 = uStack_120;
    lStack_218 = lStack_138;
    uStack_210 = uStack_130;
    uStack_228 = uStack_148;
    uStack_224 = uStack_144;
    uStack_220 = uStack_140;
    uStack_21c = uStack_13c;
    uStack_238 = pauStack_158;
    uStack_230 = pauStack_150;
    pauStack_248 = pauStack_168;
    pauStack_240 = pauStack_160;
    pauStack_258 = pauStack_178;
    pauStack_250 = pauStack_170;
    pauStack_268 = (undefined1 (*) [16])0x1;
    pauStack_260 = (undefined1 (*) [16])0x1;
    pdb_14007ee60();
    pbVar30 = pub_1406abab0(0x90,8);
    if (pbVar30 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
      pdb_142dc7e11(8,0x90);
    }
    pub_142e32760(pbVar30,&pauStack_268,0x90);
    pauStack_248 = pauStack_1a8;
    pauStack_240 = pauStack_1a0;
    pauStack_258 = pauStack_1b8;
    pauStack_250 = pauStack_1b0;
    pauStack_268 = pauStack_1c8;
    pauStack_260 = uStack_1c0;
    pauVar33 = *(undefined1 (**) [16])*pauStack_198;
    uVar54 = *(ulonglong *)(*pauStack_198 + 8);
    uVar36 = uVar54 & (ulonglong)pauStack_190;
    auVar59 = *(undefined1 (*) [16])(*pauVar33 + uVar36);
    uVar27 = (ushort)(SUB161(auVar59 >> 7,0) & 1) | (ushort)(SUB161(auVar59 >> 0xf,0) & 1) << 1 |
             (ushort)(SUB161(auVar59 >> 0x17,0) & 1) << 2 |
             (ushort)(SUB161(auVar59 >> 0x1f,0) & 1) << 3 |
             (ushort)(SUB161(auVar59 >> 0x27,0) & 1) << 4 |
             (ushort)(SUB161(auVar59 >> 0x2f,0) & 1) << 5 |
             (ushort)(SUB161(auVar59 >> 0x37,0) & 1) << 6 |
             (ushort)(SUB161(auVar59 >> 0x3f,0) & 1) << 7 |
             (ushort)(SUB161(auVar59 >> 0x47,0) & 1) << 8 |
             (ushort)(SUB161(auVar59 >> 0x4f,0) & 1) << 9 |
             (ushort)(SUB161(auVar59 >> 0x57,0) & 1) << 10 |
             (ushort)(SUB161(auVar59 >> 0x5f,0) & 1) << 0xb |
             (ushort)(SUB161(auVar59 >> 0x67,0) & 1) << 0xc |
             (ushort)(SUB161(auVar59 >> 0x6f,0) & 1) << 0xd |
             (ushort)(SUB161(auVar59 >> 0x77,0) & 1) << 0xe |
             (ushort)(byte)(auVar59[0xf] >> 7) << 0xf;
    uVar48 = (uint)uVar27;
    if (uVar27 == 0) {
      lVar35 = 0x10;
      do {
        uVar36 = uVar36 + lVar35 & uVar54;
        auVar59 = *(undefined1 (*) [16])(*pauVar33 + uVar36);
        lVar35 = lVar35 + 0x10;
        uVar48 = (uint)(ushort)((ushort)(SUB161(auVar59 >> 7,0) & 1) |
                                (ushort)(SUB161(auVar59 >> 0xf,0) & 1) << 1 |
                                (ushort)(SUB161(auVar59 >> 0x17,0) & 1) << 2 |
                                (ushort)(SUB161(auVar59 >> 0x1f,0) & 1) << 3 |
                                (ushort)(SUB161(auVar59 >> 0x27,0) & 1) << 4 |
                                (ushort)(SUB161(auVar59 >> 0x2f,0) & 1) << 5 |
                                (ushort)(SUB161(auVar59 >> 0x37,0) & 1) << 6 |
                                (ushort)(SUB161(auVar59 >> 0x3f,0) & 1) << 7 |
                                (ushort)(SUB161(auVar59 >> 0x47,0) & 1) << 8 |
                                (ushort)(SUB161(auVar59 >> 0x4f,0) & 1) << 9 |
                                (ushort)(SUB161(auVar59 >> 0x57,0) & 1) << 10 |
                                (ushort)(SUB161(auVar59 >> 0x5f,0) & 1) << 0xb |
                                (ushort)(SUB161(auVar59 >> 0x67,0) & 1) << 0xc |
                                (ushort)(SUB161(auVar59 >> 0x6f,0) & 1) << 0xd |
                                (ushort)(SUB161(auVar59 >> 0x77,0) & 1) << 0xe |
                               (ushort)(byte)(auVar59[0xf] >> 7) << 0xf);
      } while (uVar48 == 0);
    }
    uVar44 = 0;
    for (; (uVar48 & 1) == 0; uVar48 = uVar48 >> 1 | 0x80000000) {
      uVar44 = uVar44 + 1;
    }
    uVar36 = uVar44 + uVar36 & uVar54;
    bVar51 = (*pauVar33)[uVar36];
    if (-1 < (char)bVar51) {
      auVar59 = *pauVar33;
      uVar48 = 0;
      for (uVar44 = (uint)(ushort)((ushort)(SUB161(auVar59 >> 7,0) & 1) |
                                   (ushort)(SUB161(auVar59 >> 0xf,0) & 1) << 1 |
                                   (ushort)(SUB161(auVar59 >> 0x17,0) & 1) << 2 |
                                   (ushort)(SUB161(auVar59 >> 0x1f,0) & 1) << 3 |
                                   (ushort)(SUB161(auVar59 >> 0x27,0) & 1) << 4 |
                                   (ushort)(SUB161(auVar59 >> 0x2f,0) & 1) << 5 |
                                   (ushort)(SUB161(auVar59 >> 0x37,0) & 1) << 6 |
                                   (ushort)(SUB161(auVar59 >> 0x3f,0) & 1) << 7 |
                                   (ushort)(SUB161(auVar59 >> 0x47,0) & 1) << 8 |
                                   (ushort)(SUB161(auVar59 >> 0x4f,0) & 1) << 9 |
                                   (ushort)(SUB161(auVar59 >> 0x57,0) & 1) << 10 |
                                   (ushort)(SUB161(auVar59 >> 0x5f,0) & 1) << 0xb |
                                   (ushort)(SUB161(auVar59 >> 0x67,0) & 1) << 0xc |
                                   (ushort)(SUB161(auVar59 >> 0x6f,0) & 1) << 0xd |
                                   (ushort)(SUB161(auVar59 >> 0x77,0) & 1) << 0xe |
                                  (ushort)(byte)(auVar59[0xf] >> 7) << 0xf); (uVar44 & 1) == 0;
          uVar44 = uVar44 >> 1 | 0x80000000) {
        uVar48 = uVar48 + 1;
      }
      uVar36 = (ulonglong)uVar48;
      bVar51 = (*pauVar33)[uVar36];
    }
    bVar43 = (byte)((ulonglong)pauStack_190 >> 0x39);
    (*pauVar33)[uVar36] = bVar43;
    pauVar33[1][uVar36 - 0x10 & uVar54] = bVar43;
    lVar37 = uVar36 * -0x38;
    plVar32 = (longlong *)((longlong)pauVar33 + lVar37 + -0x18);
    *plVar32 = (longlong)pauStack_1a8;
    plVar32[1] = (longlong)pauStack_1a0;
    plVar32 = (longlong *)((longlong)pauVar33 + lVar37 + -0x28);
    *plVar32 = (longlong)pauStack_1b8;
    plVar32[1] = (longlong)pauStack_1b0;
    plVar32 = (longlong *)((longlong)pauVar33 + lVar37 + -0x38);
    *plVar32 = (longlong)pauStack_1c8;
    plVar32[1] = (longlong)uStack_1c0;
    *(byte **)((longlong)pauVar33 + lVar37 + -8) = pbVar30;
    lVar35 = *(longlong *)(pauStack_198[1] + 8);
    auVar72._8_4_ = uVar24;
    auVar72._0_8_ = (ulonglong)bVar51 & 0xffffffffffffff01;
    auVar72._12_4_ = uVar25;
    *(ulonglong *)pauStack_198[1] =
         *(longlong *)pauStack_198[1] - ((ulonglong)bVar51 & 0xffffffffffffff01);
    *(longlong *)(pauStack_198[1] + 8) = lVar35 - auVar72._8_8_;
    pauVar33 = *(undefined1 (**) [16])((longlong)pauVar33 + lVar37 + -8);
    LOCK();
    lVar35 = *(longlong *)*pauVar33;
    *(longlong *)*pauVar33 = *(longlong *)*pauVar33 + 1;
    UNLOCK();
    if (*(longlong *)*pauVar33 == 0 || SCARRY8(lVar35,1) != *(longlong *)*pauVar33 < 0)
    goto LAB_140c56b2e;
    LOCK();
    *(longlong *)*pauStack_2c0 = *(longlong *)*pauStack_2c0 + -1;
    UNLOCK();
    if (*(longlong *)*pauStack_2c0 == 0) {
      uStack_c4 = 0;
      uStack_c5 = 0;
      uStack_c6 = 0;
      pdb_140c7ba90(&pauStack_2c0);
    }
  }
  if (pauStack_2f8 != (undefined1 (*) [16])0x0) {
    pub_1406abac0((byte *)pauStack_2f0,(ulonglong)pauStack_2f8,1);
  }
  pauVar45 = pauStack_2e0;
  pauVar38 = pauStack_2d8;
  if (!SBORROW8(0,(longlong)pauStack_2e0)) goto joined_r0x000140c53c44;
LAB_140c5577d:
  if (((byte)uStack_270 & !SBORROW8(0,(longlong)pauStack_378)) == 0) {
    if ((byte)uStack_270 != 0) goto LAB_140c557b5;
  }
  else {
    if (pauStack_378 != (undefined1 (*) [16])0x0) {
      pub_1406abac0((byte *)pauStack_370,(ulonglong)pauStack_378,1);
    }
LAB_140c557b5:
    if (pauStack_398 != (undefined1 (*) [16])0x0) {
      pub_1406abac0((byte *)pauStack_390,(ulonglong)pauStack_398,1);
    }
  }
  uVar54 = *(ulonglong *)((longlong)pauVar50 + lVar47 + -0xa8);
  uVar36 = uVar54 ^ 0x8000000000000000;
  if (-1 < (longlong)uVar54) {
    uVar36 = 2;
  }
  pauStack_298 = pauVar33;
  if (uVar36 != 2) {
    if (uVar36 != 0) {
      pauStack_178 = (undefined1 (*) [16])&UNK_14304e2d0;
      pauStack_170 = (undefined1 (*) [16])0x15;
      pauStack_268 = (undefined1 (*) [16])&pauStack_178;
      pauStack_260 = (undefined1 (*) [16])pdb_1402ed400;
                    /* WARNING: Subroutine does not return */
      pdb_142dc83d0(&UNK_14304e411,&pauStack_268,&UNK_14306e7f8);
    }
                    /* WARNING: Subroutine does not return */
    pdb_142dc83d0(&UNK_14304e3c3,0x9d,&UNK_14306e7f8);
  }
  lStack_408 = (longlong)pauVar50 + lVar47 + -0xa8;
  LOCK();
  lVar35 = *(longlong *)*pauVar33;
  *(longlong *)*pauVar33 = *(longlong *)*pauVar33 + 1;
  UNLOCK();
  if (*(longlong *)*pauVar33 != 0 && SCARRY8(lVar35,1) == *(longlong *)*pauVar33 < 0) {
    pauStack_f0 = (undefined1 (*) [16])((longlong)pauVar50 + lVar47 + -0xd8);
    pauStack_180 = pauVar33;
    pauStack_178 = pauVar33;
                    /* WARNING: Could not recover jumptable at 0x000140c5587a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&UNK_14306f720 + _UNK_14306f720))();
    return;
  }
LAB_140c56b2e:
                    /* WARNING: Does not return */
  pcVar5 = (code *)invalidInstructionException();
  (*pcVar5)();
LAB_140c53bda:
  pauVar33 = *(undefined1 (**) [16])((longlong)pauStack_180 + -8 + uVar54 * -0x38);
  LOCK();
  lVar35 = *(longlong *)*pauVar33;
  *(longlong *)*pauVar33 = *(longlong *)*pauVar33 + 1;
  UNLOCK();
  if (*(longlong *)*pauVar33 == 0 || SCARRY8(lVar35,1) != *(longlong *)*pauVar33 < 0)
  goto LAB_140c56b2e;
  if (pauStack_2f8 != (undefined1 (*) [16])0x0) {
    pub_1406abac0((byte *)pauStack_2f0,(ulonglong)pauStack_2f8,1);
  }
  if ((!SBORROW8(0,(longlong)pauStack_2e0)) && (pauStack_2e0 != (undefined1 (*) [16])0x0)) {
    pub_1406abac0((byte *)pauStack_2d8,(ulonglong)pauStack_2e0,1);
  }
  uStack_270 = CONCAT71(uStack_270._1_7_,1);
  pauVar45 = pauStack_310;
  pauVar38 = pauStack_308;
joined_r0x000140c53c44:
  if (pauVar45 != (undefined1 (*) [16])0x0) {
    pub_1406abac0((byte *)pauVar38,(ulonglong)pauVar45,1);
  }
  goto LAB_140c5577d;
LAB_140c54259:
  uVar54 = uVar54 & CONCAT44(uStack_224,uStack_228);
  auVar60 = *(undefined1 (*) [16])(*uStack_230 + uVar54);
  auVar76[0] = -(auVar60[0] == auVar59[0]);
  auVar76[1] = -(auVar60[1] == auVar59[1]);
  auVar76[2] = -(auVar60[2] == auVar59[2]);
  auVar76[3] = -(auVar60[3] == auVar59[3]);
  auVar76[4] = -(auVar60[4] == auVar59[4]);
  auVar76[5] = -(auVar60[5] == auVar59[5]);
  auVar76[6] = -(auVar60[6] == auVar59[6]);
  auVar76[7] = -(auVar60[7] == auVar59[7]);
  auVar76[8] = -(auVar60[8] == auVar59[0]);
  auVar76[9] = -(auVar60[9] == auVar59[1]);
  auVar76[10] = -(auVar60[10] == auVar59[2]);
  auVar76[0xb] = -(auVar60[0xb] == auVar59[3]);
  auVar76[0xc] = -(auVar60[0xc] == auVar59[4]);
  auVar76[0xd] = -(auVar60[0xd] == auVar59[5]);
  auVar76[0xe] = -(auVar60[0xe] == auVar59[6]);
  auVar76[0xf] = -(auVar60[0xf] == auVar59[7]);
  uVar27 = (ushort)(SUB161(auVar76 >> 7,0) & 1) | (ushort)(SUB161(auVar76 >> 0xf,0) & 1) << 1 |
           (ushort)(SUB161(auVar76 >> 0x17,0) & 1) << 2 |
           (ushort)(SUB161(auVar76 >> 0x1f,0) & 1) << 3 |
           (ushort)(SUB161(auVar76 >> 0x27,0) & 1) << 4 |
           (ushort)(SUB161(auVar76 >> 0x2f,0) & 1) << 5 |
           (ushort)(SUB161(auVar76 >> 0x37,0) & 1) << 6 |
           (ushort)(SUB161(auVar76 >> 0x3f,0) & 1) << 7 |
           (ushort)(SUB161(auVar76 >> 0x47,0) & 1) << 8 |
           (ushort)(SUB161(auVar76 >> 0x4f,0) & 1) << 9 |
           (ushort)(SUB161(auVar76 >> 0x57,0) & 1) << 10 |
           (ushort)(SUB161(auVar76 >> 0x5f,0) & 1) << 0xb |
           (ushort)(SUB161(auVar76 >> 0x67,0) & 1) << 0xc |
           (ushort)(SUB161(auVar76 >> 0x6f,0) & 1) << 0xd |
           (ushort)(SUB161(auVar76 >> 0x77,0) & 1) << 0xe | (ushort)(auVar76[0xf] >> 7) << 0xf;
  uVar48 = (uint)uVar27;
  while (uVar27 != 0) {
    uVar44 = 0;
    for (uVar6 = uVar48; (uVar6 & 1) == 0; uVar6 = uVar6 >> 1 | 0x80000000) {
      uVar44 = uVar44 + 1;
    }
    lVar37 = (uVar44 + uVar54 & CONCAT44(uStack_224,uStack_228)) * -0x38;
    if ((*(longlong *)((longlong)uStack_230 + lVar37 + -0x28) == 0xf) &&
       (plVar32 = *(longlong **)((longlong)uStack_230 + lVar37 + -0x30),
       *(longlong *)((longlong)plVar32 + 7) == 0x6e6f697469736f50 && *plVar32 == 0x505f786574726556)
       ) {
      pauVar33 = uStack_230;
      pauStack_180 = (undefined1 (*) [16])pdb_140e4d980((longlong)uStack_230 + lVar37 + -0x20);
      pauStack_e0 = pauVar33;
      plVar32 = (longlong *)pdb_140f3bda0();
      if ((char)plVar32[2] == '\x01') {
        pauStack_158 = (undefined1 (*) [16])*plVar32;
        pauVar33 = (undefined1 (*) [16])plVar32[1];
      }
      else {
        pauStack_158 = (undefined1 (*) [16])pdb_140f4fd10();
        *plVar32 = (longlong)pauStack_158;
        plVar32[1] = (longlong)pauVar33;
        *(undefined1 *)(plVar32 + 2) = 1;
      }
      *plVar32 = (longlong)(*pauStack_158 + 1);
      pauStack_168 = _DAT_14306f540;
      pauStack_160 = _UNK_14306f548;
      pauStack_178 = _DAT_14306f530;
      pauStack_170 = _UNK_14306f538;
      pauStack_150 = pauVar33;
      if (lStack_218 == 0) goto LAB_140c56113;
      uVar54 = pdb_1400af950(&uStack_210,&UNK_14306eb98,0xd);
      pauVar33 = (undefined1 (*) [16])CONCAT44(uStack_224,uStack_228);
      bVar51 = (byte)(uVar54 >> 0x39);
      auVar59 = ZEXT216(CONCAT11(bVar51,bVar51));
      auVar59 = pshuflw(auVar59,auVar59,0);
      lVar35 = 0;
      goto LAB_140c54508;
    }
    uVar27 = (ushort)(uVar48 - 1) & (ushort)uVar48;
    uVar48 = CONCAT22((short)(uVar48 - 1 >> 0x10),uVar27);
  }
  auVar65[0] = -(auVar60[0] == cVar83);
  auVar65[1] = -(auVar60[1] == cVar84);
  auVar65[2] = -(auVar60[2] == cVar85);
  auVar65[3] = -(auVar60[3] == cVar86);
  auVar65[4] = -(auVar60[4] == cVar87);
  auVar65[5] = -(auVar60[5] == cVar88);
  auVar65[6] = -(auVar60[6] == cVar89);
  auVar65[7] = -(auVar60[7] == cVar90);
  auVar65[8] = -(auVar60[8] == cVar91);
  auVar65[9] = -(auVar60[9] == cVar92);
  auVar65[10] = -(auVar60[10] == cVar93);
  auVar65[0xb] = -(auVar60[0xb] == cVar94);
  auVar65[0xc] = -(auVar60[0xc] == cVar95);
  auVar65[0xd] = -(auVar60[0xd] == cVar96);
  auVar65[0xe] = -(auVar60[0xe] == cVar97);
  auVar65[0xf] = -(auVar60[0xf] == cVar98);
  if ((((((((((((((((SUB161(auVar65 >> 7,0) & 1) != 0 || (SUB161(auVar65 >> 0xf,0) & 1) != 0) ||
                  (SUB161(auVar65 >> 0x17,0) & 1) != 0) || (SUB161(auVar65 >> 0x1f,0) & 1) != 0) ||
                (SUB161(auVar65 >> 0x27,0) & 1) != 0) || (SUB161(auVar65 >> 0x2f,0) & 1) != 0) ||
              (SUB161(auVar65 >> 0x37,0) & 1) != 0) || (SUB161(auVar65 >> 0x3f,0) & 1) != 0) ||
            (SUB161(auVar65 >> 0x47,0) & 1) != 0) || (SUB161(auVar65 >> 0x4f,0) & 1) != 0) ||
          (SUB161(auVar65 >> 0x57,0) & 1) != 0) || (SUB161(auVar65 >> 0x5f,0) & 1) != 0) ||
        (SUB161(auVar65 >> 0x67,0) & 1) != 0) || (SUB161(auVar65 >> 0x6f,0) & 1) != 0) ||
      (SUB161(auVar65 >> 0x77,0) & 1) != 0) || auVar65[0xf] < '\0') goto LAB_140c560a0;
  uVar54 = uVar54 + lVar35 + 0x10;
  lVar35 = lVar35 + 0x10;
  goto LAB_140c54259;
LAB_140c54508:
  uVar54 = uVar54 & (ulonglong)pauVar33;
  auVar60 = *(undefined1 (*) [16])(*uStack_230 + uVar54);
  auVar77[0] = -(auVar60[0] == auVar59[0]);
  auVar77[1] = -(auVar60[1] == auVar59[1]);
  auVar77[2] = -(auVar60[2] == auVar59[2]);
  auVar77[3] = -(auVar60[3] == auVar59[3]);
  auVar77[4] = -(auVar60[4] == auVar59[4]);
  auVar77[5] = -(auVar60[5] == auVar59[5]);
  auVar77[6] = -(auVar60[6] == auVar59[6]);
  auVar77[7] = -(auVar60[7] == auVar59[7]);
  auVar77[8] = -(auVar60[8] == auVar59[0]);
  auVar77[9] = -(auVar60[9] == auVar59[1]);
  auVar77[10] = -(auVar60[10] == auVar59[2]);
  auVar77[0xb] = -(auVar60[0xb] == auVar59[3]);
  auVar77[0xc] = -(auVar60[0xc] == auVar59[4]);
  auVar77[0xd] = -(auVar60[0xd] == auVar59[5]);
  auVar77[0xe] = -(auVar60[0xe] == auVar59[6]);
  auVar77[0xf] = -(auVar60[0xf] == auVar59[7]);
  uVar27 = (ushort)(SUB161(auVar77 >> 7,0) & 1) | (ushort)(SUB161(auVar77 >> 0xf,0) & 1) << 1 |
           (ushort)(SUB161(auVar77 >> 0x17,0) & 1) << 2 |
           (ushort)(SUB161(auVar77 >> 0x1f,0) & 1) << 3 |
           (ushort)(SUB161(auVar77 >> 0x27,0) & 1) << 4 |
           (ushort)(SUB161(auVar77 >> 0x2f,0) & 1) << 5 |
           (ushort)(SUB161(auVar77 >> 0x37,0) & 1) << 6 |
           (ushort)(SUB161(auVar77 >> 0x3f,0) & 1) << 7 |
           (ushort)(SUB161(auVar77 >> 0x47,0) & 1) << 8 |
           (ushort)(SUB161(auVar77 >> 0x4f,0) & 1) << 9 |
           (ushort)(SUB161(auVar77 >> 0x57,0) & 1) << 10 |
           (ushort)(SUB161(auVar77 >> 0x5f,0) & 1) << 0xb |
           (ushort)(SUB161(auVar77 >> 0x67,0) & 1) << 0xc |
           (ushort)(SUB161(auVar77 >> 0x6f,0) & 1) << 0xd |
           (ushort)(SUB161(auVar77 >> 0x77,0) & 1) << 0xe | (ushort)(auVar77[0xf] >> 7) << 0xf;
  uVar48 = (uint)uVar27;
  if (uVar27 != 0) {
LAB_140c54523:
    uVar44 = 0;
    for (uVar6 = uVar48; (uVar6 & 1) == 0; uVar6 = uVar6 >> 1 | 0x80000000) {
      uVar44 = uVar44 + 1;
    }
    lVar37 = (uVar44 + uVar54 & (ulonglong)pauVar33) * -0x38;
    if ((*(longlong *)((longlong)uStack_230 + lVar37 + -0x28) != 0xd) ||
       (plVar32 = *(longlong **)((longlong)uStack_230 + lVar37 + -0x30),
       *(longlong *)((longlong)plVar32 + 5) != 0x6c616d726f4e5f78 || *plVar32 != 0x4e5f786574726556)
       ) goto LAB_140c5456a;
    lStack_3c0 = (longlong)uStack_230 + lVar37 + -0x20;
    lStack_3d8 = pdb_140e4d980();
    pauStack_2a0 = pauVar33;
    if (pauStack_300 <= pauVar33) {
      pauStack_2a0 = pauStack_300;
    }
    pauStack_f0 = (undefined1 (*) [16])0x0;
    pauVar33 = (undefined1 (*) [16])0x0;
    while (pauVar33 < pauStack_2a0) {
      lVar35 = (longlong)pauVar33 * 0xc;
      uVar3 = *(undefined4 *)(uStack_2a8 + 8 + lVar35);
      pauStack_1c8 = *(undefined1 (**) [16])(uStack_2a8 + lVar35);
      uStack_1c0 = (undefined1 (*) [16])CONCAT44(uStack_1c0._4_4_,uVar3);
      pauStack_2b8 = pauVar33;
      uVar36 = pdb_1417c4f40(&pauStack_158,&pauStack_1c8);
      pauStack_2b8 = (undefined1 (*) [16])(*pauStack_2b8 + 1);
      puVar46 = (undefined8 *)(lVar35 + lStack_3d8);
      pauStack_2b0 = (undefined1 (*) [16])CONCAT44(pauStack_2b0._4_4_,(int)pauStack_f0 + 1);
      uVar52 = uVar36 >> 0x39;
      bVar51 = (byte)(uVar36 >> 0x38);
      bVar43 = bVar51 >> 1;
      auVar59 = ZEXT216(CONCAT11(bVar43,bVar43));
      auVar59 = pshuflw(auVar59,auVar59,0);
      pauStack_278 = pauStack_1c8;
      lVar35 = 0;
      uVar54 = uVar36;
      while( true ) {
        uVar54 = uVar54 & (ulonglong)pauStack_170;
        pcVar1 = *pauStack_178 + uVar54;
        auVar78[0] = -(*pcVar1 == auVar59[0]);
        auVar78[1] = -(pcVar1[1] == auVar59[1]);
        auVar78[2] = -(pcVar1[2] == auVar59[2]);
        auVar78[3] = -(pcVar1[3] == auVar59[3]);
        auVar78[4] = -(pcVar1[4] == auVar59[4]);
        auVar78[5] = -(pcVar1[5] == auVar59[5]);
        auVar78[6] = -(pcVar1[6] == auVar59[6]);
        auVar78[7] = -(pcVar1[7] == auVar59[7]);
        auVar78[8] = -(pcVar1[8] == auVar59[0]);
        auVar78[9] = -(pcVar1[9] == auVar59[1]);
        auVar78[10] = -(pcVar1[10] == auVar59[2]);
        auVar78[0xb] = -(pcVar1[0xb] == auVar59[3]);
        auVar78[0xc] = -(pcVar1[0xc] == auVar59[4]);
        auVar78[0xd] = -(pcVar1[0xd] == auVar59[5]);
        auVar78[0xe] = -(pcVar1[0xe] == auVar59[6]);
        auVar78[0xf] = -(pcVar1[0xf] == auVar59[7]);
        uVar27 = (ushort)(SUB161(auVar78 >> 7,0) & 1) | (ushort)(SUB161(auVar78 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar78 >> 0x17,0) & 1) << 2 |
                 (ushort)(SUB161(auVar78 >> 0x1f,0) & 1) << 3 |
                 (ushort)(SUB161(auVar78 >> 0x27,0) & 1) << 4 |
                 (ushort)(SUB161(auVar78 >> 0x2f,0) & 1) << 5 |
                 (ushort)(SUB161(auVar78 >> 0x37,0) & 1) << 6 |
                 (ushort)(SUB161(auVar78 >> 0x3f,0) & 1) << 7 |
                 (ushort)(SUB161(auVar78 >> 0x47,0) & 1) << 8 |
                 (ushort)(SUB161(auVar78 >> 0x4f,0) & 1) << 9 |
                 (ushort)(SUB161(auVar78 >> 0x57,0) & 1) << 10 |
                 (ushort)(SUB161(auVar78 >> 0x5f,0) & 1) << 0xb |
                 (ushort)(SUB161(auVar78 >> 0x67,0) & 1) << 0xc |
                 (ushort)(SUB161(auVar78 >> 0x6f,0) & 1) << 0xd |
                 (ushort)(SUB161(auVar78 >> 0x77,0) & 1) << 0xe | (ushort)(auVar78[0xf] >> 7) << 0xf
        ;
        uVar48 = (uint)uVar27;
        while (uVar27 != 0) {
          uVar44 = 0;
          for (uVar6 = uVar48; (uVar6 & 1) == 0; uVar6 = uVar6 >> 1 | 0x80000000) {
            uVar44 = uVar44 + 1;
          }
          lVar37 = (uVar44 + uVar54 & (ulonglong)pauStack_170) * -0x38;
          uStack_3d0 = uVar52;
          lStack_3c8 = lVar35;
          if (*(undefined1 (**) [16])((longlong)pauStack_178 + lVar37 + -0x38) == pauStack_1c8 &&
              *(int *)((longlong)pauStack_178 + lVar37 + -0x30) == (int)uStack_1c0) {
            lVar37 = (longlong)pauStack_178 + lVar37;
            lVar35 = *(longlong *)(lVar37 + -0x18);
            if (lVar35 == *(longlong *)(lVar37 + -0x28)) goto LAB_140c5484e;
            goto LAB_140c545d0;
          }
          uVar27 = (ushort)(uVar48 - 1) & (ushort)uVar48;
          uVar48 = CONCAT22((short)(uVar48 - 1 >> 0x10),uVar27);
        }
        auVar67[0] = -(*pcVar1 == cVar83);
        auVar67[1] = -(pcVar1[1] == cVar84);
        auVar67[2] = -(pcVar1[2] == cVar85);
        auVar67[3] = -(pcVar1[3] == cVar86);
        auVar67[4] = -(pcVar1[4] == cVar87);
        auVar67[5] = -(pcVar1[5] == cVar88);
        auVar67[6] = -(pcVar1[6] == cVar89);
        auVar67[7] = -(pcVar1[7] == cVar90);
        auVar67[8] = -(pcVar1[8] == cVar91);
        auVar67[9] = -(pcVar1[9] == cVar92);
        auVar67[10] = -(pcVar1[10] == cVar93);
        auVar67[0xb] = -(pcVar1[0xb] == cVar94);
        auVar67[0xc] = -(pcVar1[0xc] == cVar95);
        auVar67[0xd] = -(pcVar1[0xd] == cVar96);
        auVar67[0xe] = -(pcVar1[0xe] == cVar97);
        auVar67[0xf] = -(pcVar1[0xf] == cVar98);
        if ((((((((((((((((SUB161(auVar67 >> 7,0) & 1) != 0 || (SUB161(auVar67 >> 0xf,0) & 1) != 0)
                        || (SUB161(auVar67 >> 0x17,0) & 1) != 0) ||
                       (SUB161(auVar67 >> 0x1f,0) & 1) != 0) || (SUB161(auVar67 >> 0x27,0) & 1) != 0
                      ) || (SUB161(auVar67 >> 0x2f,0) & 1) != 0) ||
                    (SUB161(auVar67 >> 0x37,0) & 1) != 0) || (SUB161(auVar67 >> 0x3f,0) & 1) != 0)
                  || (SUB161(auVar67 >> 0x47,0) & 1) != 0) || (SUB161(auVar67 >> 0x4f,0) & 1) != 0)
                || (SUB161(auVar67 >> 0x57,0) & 1) != 0) || (SUB161(auVar67 >> 0x5f,0) & 1) != 0) ||
              (SUB161(auVar67 >> 0x67,0) & 1) != 0) || (SUB161(auVar67 >> 0x6f,0) & 1) != 0) ||
            (SUB161(auVar67 >> 0x77,0) & 1) != 0) || auVar67[0xf] < '\0') break;
        uVar54 = uVar54 + lVar35 + 0x10;
        lVar35 = lVar35 + 0x10;
      }
      if (pauStack_168 == (undefined1 (*) [16])0x0) {
        pdb_142d984a0(&pauStack_178,1,&pauStack_158,CONCAT71((int7)(uVar54 >> 8),1));
      }
      uVar36 = uVar36 & (ulonglong)pauStack_170;
      auVar59 = *(undefined1 (*) [16])(*pauStack_178 + uVar36);
      uVar27 = (ushort)(SUB161(auVar59 >> 7,0) & 1) | (ushort)(SUB161(auVar59 >> 0xf,0) & 1) << 1 |
               (ushort)(SUB161(auVar59 >> 0x17,0) & 1) << 2 |
               (ushort)(SUB161(auVar59 >> 0x1f,0) & 1) << 3 |
               (ushort)(SUB161(auVar59 >> 0x27,0) & 1) << 4 |
               (ushort)(SUB161(auVar59 >> 0x2f,0) & 1) << 5 |
               (ushort)(SUB161(auVar59 >> 0x37,0) & 1) << 6 |
               (ushort)(SUB161(auVar59 >> 0x3f,0) & 1) << 7 |
               (ushort)(SUB161(auVar59 >> 0x47,0) & 1) << 8 |
               (ushort)(SUB161(auVar59 >> 0x4f,0) & 1) << 9 |
               (ushort)(SUB161(auVar59 >> 0x57,0) & 1) << 10 |
               (ushort)(SUB161(auVar59 >> 0x5f,0) & 1) << 0xb |
               (ushort)(SUB161(auVar59 >> 0x67,0) & 1) << 0xc |
               (ushort)(SUB161(auVar59 >> 0x6f,0) & 1) << 0xd |
               (ushort)(SUB161(auVar59 >> 0x77,0) & 1) << 0xe |
               (ushort)(byte)(auVar59[0xf] >> 7) << 0xf;
      uVar48 = (uint)uVar27;
      if (uVar27 == 0) {
        lVar35 = 0x10;
        do {
          uVar36 = uVar36 + lVar35 & (ulonglong)pauStack_170;
          auVar59 = *(undefined1 (*) [16])(*pauStack_178 + uVar36);
          lVar35 = lVar35 + 0x10;
          uVar48 = (uint)(ushort)((ushort)(SUB161(auVar59 >> 7,0) & 1) |
                                  (ushort)(SUB161(auVar59 >> 0xf,0) & 1) << 1 |
                                  (ushort)(SUB161(auVar59 >> 0x17,0) & 1) << 2 |
                                  (ushort)(SUB161(auVar59 >> 0x1f,0) & 1) << 3 |
                                  (ushort)(SUB161(auVar59 >> 0x27,0) & 1) << 4 |
                                  (ushort)(SUB161(auVar59 >> 0x2f,0) & 1) << 5 |
                                  (ushort)(SUB161(auVar59 >> 0x37,0) & 1) << 6 |
                                  (ushort)(SUB161(auVar59 >> 0x3f,0) & 1) << 7 |
                                  (ushort)(SUB161(auVar59 >> 0x47,0) & 1) << 8 |
                                  (ushort)(SUB161(auVar59 >> 0x4f,0) & 1) << 9 |
                                  (ushort)(SUB161(auVar59 >> 0x57,0) & 1) << 10 |
                                  (ushort)(SUB161(auVar59 >> 0x5f,0) & 1) << 0xb |
                                  (ushort)(SUB161(auVar59 >> 0x67,0) & 1) << 0xc |
                                  (ushort)(SUB161(auVar59 >> 0x6f,0) & 1) << 0xd |
                                  (ushort)(SUB161(auVar59 >> 0x77,0) & 1) << 0xe |
                                 (ushort)(byte)(auVar59[0xf] >> 7) << 0xf);
        } while (uVar48 == 0);
      }
      uVar44 = 0;
      for (; (uVar48 & 1) == 0; uVar48 = uVar48 >> 1 | 0x80000000) {
        uVar44 = uVar44 + 1;
      }
      uVar54 = uVar44 + uVar36 & (ulonglong)pauStack_170;
      bVar43 = (*pauStack_178)[uVar54];
      if (-1 < (char)bVar43) {
        auVar59 = *pauStack_178;
        uVar48 = 0;
        for (uVar44 = (uint)(ushort)((ushort)(SUB161(auVar59 >> 7,0) & 1) |
                                     (ushort)(SUB161(auVar59 >> 0xf,0) & 1) << 1 |
                                     (ushort)(SUB161(auVar59 >> 0x17,0) & 1) << 2 |
                                     (ushort)(SUB161(auVar59 >> 0x1f,0) & 1) << 3 |
                                     (ushort)(SUB161(auVar59 >> 0x27,0) & 1) << 4 |
                                     (ushort)(SUB161(auVar59 >> 0x2f,0) & 1) << 5 |
                                     (ushort)(SUB161(auVar59 >> 0x37,0) & 1) << 6 |
                                     (ushort)(SUB161(auVar59 >> 0x3f,0) & 1) << 7 |
                                     (ushort)(SUB161(auVar59 >> 0x47,0) & 1) << 8 |
                                     (ushort)(SUB161(auVar59 >> 0x4f,0) & 1) << 9 |
                                     (ushort)(SUB161(auVar59 >> 0x57,0) & 1) << 10 |
                                     (ushort)(SUB161(auVar59 >> 0x5f,0) & 1) << 0xb |
                                     (ushort)(SUB161(auVar59 >> 0x67,0) & 1) << 0xc |
                                     (ushort)(SUB161(auVar59 >> 0x6f,0) & 1) << 0xd |
                                     (ushort)(SUB161(auVar59 >> 0x77,0) & 1) << 0xe |
                                    (ushort)(byte)(auVar59[0xf] >> 7) << 0xf); (uVar44 & 1) == 0;
            uVar44 = uVar44 >> 1 | 0x80000000) {
          uVar48 = uVar48 + 1;
        }
        uVar54 = (ulonglong)uVar48;
        bVar43 = (*pauStack_178)[uVar54];
      }
      bVar51 = bVar51 >> 1;
      (*pauStack_178)[uVar54] = bVar51;
      pauStack_178[1][uVar54 - 0x10 & (ulonglong)pauStack_170] = bVar51;
      lVar35 = uVar54 * -0x38;
      lVar37 = (longlong)pauStack_178 + lVar35;
      pauStack_168 = (undefined1 (*) [16])
                     ((longlong)pauStack_168 - ((ulonglong)bVar43 & 0xffffffffffffff01));
      *(undefined1 (**) [16])((longlong)pauStack_178 + lVar35 + -0x38) = pauStack_278;
      *(undefined4 *)((longlong)pauStack_178 + lVar35 + -0x30) = uVar3;
      *(undefined8 *)((longlong)pauStack_178 + lVar35 + -0x28) = 0;
      *(undefined8 *)((longlong)pauStack_178 + lVar35 + -0x20) = 4;
      puVar2 = (undefined8 *)((longlong)pauStack_178 + lVar35 + -0x18);
      *puVar2 = 0;
      puVar2[1] = 0;
      *(undefined4 *)((longlong)pauStack_178 + lVar35 + -8) = 0;
      pauStack_160 = (undefined1 (*) [16])(*pauStack_160 + 1);
      lVar35 = *(longlong *)(lVar37 + -0x18);
      if (lVar35 == *(longlong *)(lVar37 + -0x28)) {
LAB_140c5484e:
        pdb_142db0990(lVar37 + -0x28);
      }
LAB_140c545d0:
      *(int *)(*(longlong *)(lVar37 + -0x20) + lVar35 * 4) = (int)pauStack_f0;
      *(longlong *)(lVar37 + -0x18) = lVar35 + 1;
      fVar58 = *(float *)(puVar46 + 1);
      uVar31 = *puVar46;
      *(ulonglong *)(lVar37 + -0x10) =
           CONCAT44((float)((ulonglong)*(undefined8 *)(lVar37 + -0x10) >> 0x20) +
                    (float)((ulonglong)uVar31 >> 0x20),
                    (float)*(undefined8 *)(lVar37 + -0x10) + (float)uVar31);
      *(float *)(lVar37 + -8) = fVar58 + *(float *)(lVar37 + -8);
      pauStack_f0 = (undefined1 (*) [16])((ulonglong)pauStack_2b0 & 0xffffffff);
      pauVar33 = pauStack_2b8;
    }
    if (pauStack_160 != (undefined1 (*) [16])0x0) {
      auVar59 = *pauStack_178;
      uVar48 = ~(uint)(ushort)((ushort)(SUB161(auVar59 >> 7,0) & 1) |
                               (ushort)(SUB161(auVar59 >> 0xf,0) & 1) << 1 |
                               (ushort)(SUB161(auVar59 >> 0x17,0) & 1) << 2 |
                               (ushort)(SUB161(auVar59 >> 0x1f,0) & 1) << 3 |
                               (ushort)(SUB161(auVar59 >> 0x27,0) & 1) << 4 |
                               (ushort)(SUB161(auVar59 >> 0x2f,0) & 1) << 5 |
                               (ushort)(SUB161(auVar59 >> 0x37,0) & 1) << 6 |
                               (ushort)(SUB161(auVar59 >> 0x3f,0) & 1) << 7 |
                               (ushort)(SUB161(auVar59 >> 0x47,0) & 1) << 8 |
                               (ushort)(SUB161(auVar59 >> 0x4f,0) & 1) << 9 |
                               (ushort)(SUB161(auVar59 >> 0x57,0) & 1) << 10 |
                               (ushort)(SUB161(auVar59 >> 0x5f,0) & 1) << 0xb |
                               (ushort)(SUB161(auVar59 >> 0x67,0) & 1) << 0xc |
                               (ushort)(SUB161(auVar59 >> 0x6f,0) & 1) << 0xd |
                               (ushort)(SUB161(auVar59 >> 0x77,0) & 1) << 0xe |
                              (ushort)(byte)(auVar59[0xf] >> 7) << 0xf);
      pauVar33 = pauStack_178 + 1;
      pauVar45 = pauStack_160;
      pauVar38 = pauStack_178;
      do {
        if ((short)uVar48 == 0) {
          do {
            auVar59 = *pauVar33;
            pauVar38 = pauVar38 + -0x38;
            pauVar33 = pauVar33 + 1;
            uVar48 = (ushort)((ushort)(SUB161(auVar59 >> 7,0) & 1) |
                              (ushort)(SUB161(auVar59 >> 0xf,0) & 1) << 1 |
                              (ushort)(SUB161(auVar59 >> 0x17,0) & 1) << 2 |
                              (ushort)(SUB161(auVar59 >> 0x1f,0) & 1) << 3 |
                              (ushort)(SUB161(auVar59 >> 0x27,0) & 1) << 4 |
                              (ushort)(SUB161(auVar59 >> 0x2f,0) & 1) << 5 |
                              (ushort)(SUB161(auVar59 >> 0x37,0) & 1) << 6 |
                              (ushort)(SUB161(auVar59 >> 0x3f,0) & 1) << 7 |
                              (ushort)(SUB161(auVar59 >> 0x47,0) & 1) << 8 |
                              (ushort)(SUB161(auVar59 >> 0x4f,0) & 1) << 9 |
                              (ushort)(SUB161(auVar59 >> 0x57,0) & 1) << 10 |
                              (ushort)(SUB161(auVar59 >> 0x5f,0) & 1) << 0xb |
                              (ushort)(SUB161(auVar59 >> 0x67,0) & 1) << 0xc |
                              (ushort)(SUB161(auVar59 >> 0x6f,0) & 1) << 0xd |
                              (ushort)(SUB161(auVar59 >> 0x77,0) & 1) << 0xe |
                             (ushort)(byte)(auVar59[0xf] >> 7) << 0xf) ^ 0xffff;
          } while (uVar48 == 0);
        }
        uVar44 = 0;
        for (uVar6 = uVar48; (uVar6 & 1) == 0; uVar6 = uVar6 >> 1 | 0x80000000) {
          uVar44 = uVar44 + 1;
        }
        lVar35 = (ulonglong)uVar44 * -0x38;
        fVar58 = *(float *)((longlong)pauVar38 + lVar35 + -8);
        uVar31 = *(undefined8 *)((longlong)pauVar38 + lVar35 + -0x10);
        fVar62 = (float)uVar31;
        fVar73 = (float)((ulonglong)uVar31 >> 0x20);
        fVar74 = fVar63 / SQRT(fVar73 * fVar73 + fVar62 * fVar62 + fVar58 * fVar58);
        bVar57 = -1 < (int)fVar74;
        bVar55 = (int)ABS(fVar74) - 0x800000U < 0x7f000000;
        bVar56 = (int)fVar74 - 1U < 0x7fffff;
        if (bVar56 || bVar55 && bVar57) {
          fVar58 = fVar58 * fVar74;
        }
        else {
          fVar58 = 0.0;
        }
        uVar48 = uVar48 - 1 & uVar48;
        *(ulonglong *)((longlong)pauVar38 + lVar35 + -0x10) =
             CONCAT44((int)((uint)(bVar56 || bVar55 && bVar57) << 0x1f) >> 0x1f,
                      (int)((uint)(bVar56 || bVar55 && bVar57) << 0x1f) >> 0x1f) &
             CONCAT44(fVar73 * fVar74,fVar62 * fVar74);
        *(float *)((longlong)pauVar38 + lVar35 + -8) = fVar58;
        pauVar45 = (undefined1 (*) [16])(pauVar45[-1] + 0xf);
      } while (pauVar45 != (undefined1 (*) [16])0x0);
    }
    uStack_420 = 0;
    uStack_418 = 0;
    uStack_1c0 = (undefined1 (*) [16])((ulonglong)uStack_1c0._4_4_ << 0x20);
    pauStack_1c8 = (undefined1 (*) [16])0x0;
    ppauVar39 = &pauStack_1c8;
    pdb_1415e43a0(&pauStack_298,ppauVar39,pauStack_300);
    ppauVar26 = ppauStack_288;
    ppauStack_428 = ppauStack_288;
    uStack_c8 = 1;
    pdb_140e4d980(lStack_3c0);
    ppauStack_430 = ppauVar39;
    if (ppauVar26 != ppauVar39) {
      uStack_c8 = 1;
      pdb_142dc7fb4(0,&ppauStack_428,&ppauStack_430,0);
      goto LAB_140c56b2e;
    }
    if (pauStack_160 != (undefined1 (*) [16])0x0) {
      auVar59 = *pauStack_178;
      uVar48 = ~(uint)(ushort)((ushort)(SUB161(auVar59 >> 7,0) & 1) |
                               (ushort)(SUB161(auVar59 >> 0xf,0) & 1) << 1 |
                               (ushort)(SUB161(auVar59 >> 0x17,0) & 1) << 2 |
                               (ushort)(SUB161(auVar59 >> 0x1f,0) & 1) << 3 |
                               (ushort)(SUB161(auVar59 >> 0x27,0) & 1) << 4 |
                               (ushort)(SUB161(auVar59 >> 0x2f,0) & 1) << 5 |
                               (ushort)(SUB161(auVar59 >> 0x37,0) & 1) << 6 |
                               (ushort)(SUB161(auVar59 >> 0x3f,0) & 1) << 7 |
                               (ushort)(SUB161(auVar59 >> 0x47,0) & 1) << 8 |
                               (ushort)(SUB161(auVar59 >> 0x4f,0) & 1) << 9 |
                               (ushort)(SUB161(auVar59 >> 0x57,0) & 1) << 10 |
                               (ushort)(SUB161(auVar59 >> 0x5f,0) & 1) << 0xb |
                               (ushort)(SUB161(auVar59 >> 0x67,0) & 1) << 0xc |
                               (ushort)(SUB161(auVar59 >> 0x6f,0) & 1) << 0xd |
                               (ushort)(SUB161(auVar59 >> 0x77,0) & 1) << 0xe |
                              (ushort)(byte)(auVar59[0xf] >> 7) << 0xf);
      pauVar33 = pauStack_178 + 1;
      pauVar45 = pauStack_160;
      pauVar38 = pauStack_178;
      do {
        if ((short)uVar48 == 0) {
          do {
            auVar59 = *pauVar33;
            pauVar38 = pauVar38 + -0x38;
            pauVar33 = pauVar33 + 1;
            uVar48 = (ushort)((ushort)(SUB161(auVar59 >> 7,0) & 1) |
                              (ushort)(SUB161(auVar59 >> 0xf,0) & 1) << 1 |
                              (ushort)(SUB161(auVar59 >> 0x17,0) & 1) << 2 |
                              (ushort)(SUB161(auVar59 >> 0x1f,0) & 1) << 3 |
                              (ushort)(SUB161(auVar59 >> 0x27,0) & 1) << 4 |
                              (ushort)(SUB161(auVar59 >> 0x2f,0) & 1) << 5 |
                              (ushort)(SUB161(auVar59 >> 0x37,0) & 1) << 6 |
                              (ushort)(SUB161(auVar59 >> 0x3f,0) & 1) << 7 |
                              (ushort)(SUB161(auVar59 >> 0x47,0) & 1) << 8 |
                              (ushort)(SUB161(auVar59 >> 0x4f,0) & 1) << 9 |
                              (ushort)(SUB161(auVar59 >> 0x57,0) & 1) << 10 |
                              (ushort)(SUB161(auVar59 >> 0x5f,0) & 1) << 0xb |
                              (ushort)(SUB161(auVar59 >> 0x67,0) & 1) << 0xc |
                              (ushort)(SUB161(auVar59 >> 0x6f,0) & 1) << 0xd |
                              (ushort)(SUB161(auVar59 >> 0x77,0) & 1) << 0xe |
                             (ushort)(byte)(auVar59[0xf] >> 7) << 0xf) ^ 0xffff;
          } while (uVar48 == 0);
        }
        uVar44 = 0;
        for (uVar6 = uVar48; (uVar6 & 1) == 0; uVar6 = uVar6 >> 1 | 0x80000000) {
          uVar44 = uVar44 + 1;
        }
        lVar37 = (ulonglong)uVar44 * -0x38;
        lVar35 = *(longlong *)((longlong)pauVar38 + lVar37 + -0x18);
        if (lVar35 != 0) {
          lVar34 = *(longlong *)((longlong)pauVar38 + lVar37 + -0x20);
          lVar53 = 0;
          do {
            ppauVar39 = (undefined1 (**) [16])(ulonglong)*(uint *)(lVar34 + lVar53);
            if (ppauVar26 <= ppauVar39) {
              uStack_c8 = 1;
                    /* WARNING: Subroutine does not return */
              pdb_142dc81f2(ppauVar39,ppauVar26,&UNK_14306ec18);
            }
            uVar3 = *(undefined4 *)((longlong)pauVar38 + lVar37 + -8);
            *(undefined8 *)(*pauStack_290 + (longlong)ppauVar39 * 0xc) =
                 *(undefined8 *)((longlong)pauVar38 + lVar37 + -0x10);
            *(undefined4 *)(*pauStack_290 + (longlong)ppauVar39 * 0xc + 8) = uVar3;
            lVar53 = lVar53 + 4;
          } while (lVar35 << 2 != lVar53);
        }
        uVar48 = uVar48 - 1 & uVar48;
        pauVar45 = (undefined1 (*) [16])(pauVar45[-1] + 0xf);
      } while (pauVar45 != (undefined1 (*) [16])0x0);
    }
    uStack_c8 = 1;
    pdb_1415e43a0(&pauStack_348,&uStack_420,pauStack_300);
    if (pauStack_160 != (undefined1 (*) [16])0x0) {
      auVar59 = *pauStack_178;
      uVar48 = ~(uint)(ushort)((ushort)(SUB161(auVar59 >> 7,0) & 1) |
                               (ushort)(SUB161(auVar59 >> 0xf,0) & 1) << 1 |
                               (ushort)(SUB161(auVar59 >> 0x17,0) & 1) << 2 |
                               (ushort)(SUB161(auVar59 >> 0x1f,0) & 1) << 3 |
                               (ushort)(SUB161(auVar59 >> 0x27,0) & 1) << 4 |
                               (ushort)(SUB161(auVar59 >> 0x2f,0) & 1) << 5 |
                               (ushort)(SUB161(auVar59 >> 0x37,0) & 1) << 6 |
                               (ushort)(SUB161(auVar59 >> 0x3f,0) & 1) << 7 |
                               (ushort)(SUB161(auVar59 >> 0x47,0) & 1) << 8 |
                               (ushort)(SUB161(auVar59 >> 0x4f,0) & 1) << 9 |
                               (ushort)(SUB161(auVar59 >> 0x57,0) & 1) << 10 |
                               (ushort)(SUB161(auVar59 >> 0x5f,0) & 1) << 0xb |
                               (ushort)(SUB161(auVar59 >> 0x67,0) & 1) << 0xc |
                               (ushort)(SUB161(auVar59 >> 0x6f,0) & 1) << 0xd |
                               (ushort)(SUB161(auVar59 >> 0x77,0) & 1) << 0xe |
                              (ushort)(byte)(auVar59[0xf] >> 7) << 0xf);
      pauVar33 = pauStack_178 + 1;
      pauVar45 = pauStack_178;
      pauVar38 = pauStack_160;
      do {
        if ((short)uVar48 == 0) {
          do {
            auVar59 = *pauVar33;
            pauVar45 = pauVar45 + -0x38;
            pauVar33 = pauVar33 + 1;
            uVar48 = (ushort)((ushort)(SUB161(auVar59 >> 7,0) & 1) |
                              (ushort)(SUB161(auVar59 >> 0xf,0) & 1) << 1 |
                              (ushort)(SUB161(auVar59 >> 0x17,0) & 1) << 2 |
                              (ushort)(SUB161(auVar59 >> 0x1f,0) & 1) << 3 |
                              (ushort)(SUB161(auVar59 >> 0x27,0) & 1) << 4 |
                              (ushort)(SUB161(auVar59 >> 0x2f,0) & 1) << 5 |
                              (ushort)(SUB161(auVar59 >> 0x37,0) & 1) << 6 |
                              (ushort)(SUB161(auVar59 >> 0x3f,0) & 1) << 7 |
                              (ushort)(SUB161(auVar59 >> 0x47,0) & 1) << 8 |
                              (ushort)(SUB161(auVar59 >> 0x4f,0) & 1) << 9 |
                              (ushort)(SUB161(auVar59 >> 0x57,0) & 1) << 10 |
                              (ushort)(SUB161(auVar59 >> 0x5f,0) & 1) << 0xb |
                              (ushort)(SUB161(auVar59 >> 0x67,0) & 1) << 0xc |
                              (ushort)(SUB161(auVar59 >> 0x6f,0) & 1) << 0xd |
                              (ushort)(SUB161(auVar59 >> 0x77,0) & 1) << 0xe |
                             (ushort)(byte)(auVar59[0xf] >> 7) << 0xf) ^ 0xffff;
          } while (uVar48 == 0);
        }
        uVar44 = 0;
        for (uVar6 = uVar48; (uVar6 & 1) == 0; uVar6 = uVar6 >> 1 | 0x80000000) {
          uVar44 = uVar44 + 1;
        }
        lVar35 = *(longlong *)((longlong)pauVar45 + (ulonglong)uVar44 * -0x38 + -0x18);
        if (lVar35 != 0) {
          lVar37 = *(longlong *)((longlong)pauVar45 + (ulonglong)uVar44 * -0x38 + -0x20);
          fVar63 = 0.0;
          lVar34 = 0;
          auVar59 = (undefined1  [16])0x0;
          do {
            pauVar40 = (undefined1 (*) [16])(ulonglong)*(uint *)(lVar37 + lVar34);
            pauStack_f0 = pauVar38;
            if (pauStack_e0 <= pauVar40) {
              uStack_c9 = 1;
              uStack_ca = 1;
                    /* WARNING: Subroutine does not return */
              pdb_142dc81f2(pauVar40,pauStack_e0,&UNK_14306ec00);
            }
            uVar31 = *(undefined8 *)((longlong)pauStack_180 + (longlong)pauVar40 * 0xc);
            auVar61._0_4_ = auVar59._0_4_ + (float)uVar31;
            auVar61._4_4_ = auVar59._4_4_ + (float)((ulonglong)uVar31 >> 0x20);
            auVar61._8_4_ = auVar59._8_4_ + 0.0;
            auVar61._12_4_ = auVar59._12_4_ + 0.0;
            fVar63 = fVar63 + *(float *)((longlong)pauStack_180 + 8 + (longlong)pauVar40 * 0xc);
            lVar34 = lVar34 + 4;
            auVar59 = auVar61;
          } while (lVar35 * 4 - lVar34 != 0);
          fVar58 = (float)lVar35;
          auVar59._4_4_ = fVar58;
          auVar59._0_4_ = fVar58;
          auVar59._8_8_ = 0;
          auVar59 = divps(auVar61,auVar59);
          lVar34 = 0;
          do {
            pauVar40 = (undefined1 (*) [16])(ulonglong)*(uint *)(lVar37 + lVar34);
            if (pauStack_338 <= pauVar40) {
              uStack_c9 = 1;
              uStack_ca = 1;
                    /* WARNING: Subroutine does not return */
              pdb_142dc81f2(pauVar40,pauStack_338,&UNK_14306ebe8);
            }
            *(longlong *)(*pauStack_340 + (longlong)pauVar40 * 0xc) = auVar59._0_8_;
            *(float *)(*pauStack_340 + (longlong)pauVar40 * 0xc + 8) = fVar63 / fVar58;
            lVar34 = lVar34 + 4;
          } while (lVar35 * 4 - lVar34 != 0);
        }
        uVar48 = uVar48 - 1 & uVar48;
        pauVar38 = (undefined1 (*) [16])(pauVar38[-1] + 0xf);
      } while (pauVar38 != (undefined1 (*) [16])0x0);
    }
    pauStack_1b8 = (undefined1 (*) [16])ppauStack_288;
    pauStack_1c8 = pauStack_298;
    uStack_1c0 = pauStack_290;
    uStack_c9 = 1;
    uStack_ca = 0;
    pdb_140c93200(&pauStack_268,&UNK_14306ebd8,0xc,&pauStack_1c8);
    pauStack_1b8 = pauStack_338;
    pauStack_1c8 = pauStack_348;
    uStack_1c0 = pauStack_340;
    uStack_c9 = 0;
    uStack_ca = 0;
    pdb_140c93200(&pauStack_268,&UNK_14306eb70,0xb,&pauStack_1c8);
    if (pauStack_170 != (undefined1 (*) [16])0x0) {
      pauStack_e0 = pauStack_170;
      if (pauStack_160 != (undefined1 (*) [16])0x0) {
        auVar59 = *pauStack_178;
        pauVar33 = pauStack_178 + 1;
        uVar48 = ~(uint)(ushort)((ushort)(SUB161(auVar59 >> 7,0) & 1) |
                                 (ushort)(SUB161(auVar59 >> 0xf,0) & 1) << 1 |
                                 (ushort)(SUB161(auVar59 >> 0x17,0) & 1) << 2 |
                                 (ushort)(SUB161(auVar59 >> 0x1f,0) & 1) << 3 |
                                 (ushort)(SUB161(auVar59 >> 0x27,0) & 1) << 4 |
                                 (ushort)(SUB161(auVar59 >> 0x2f,0) & 1) << 5 |
                                 (ushort)(SUB161(auVar59 >> 0x37,0) & 1) << 6 |
                                 (ushort)(SUB161(auVar59 >> 0x3f,0) & 1) << 7 |
                                 (ushort)(SUB161(auVar59 >> 0x47,0) & 1) << 8 |
                                 (ushort)(SUB161(auVar59 >> 0x4f,0) & 1) << 9 |
                                 (ushort)(SUB161(auVar59 >> 0x57,0) & 1) << 10 |
                                 (ushort)(SUB161(auVar59 >> 0x5f,0) & 1) << 0xb |
                                 (ushort)(SUB161(auVar59 >> 0x67,0) & 1) << 0xc |
                                 (ushort)(SUB161(auVar59 >> 0x6f,0) & 1) << 0xd |
                                 (ushort)(SUB161(auVar59 >> 0x77,0) & 1) << 0xe |
                                (ushort)(byte)(auVar59[0xf] >> 7) << 0xf);
        pauVar45 = pauStack_160;
        pauVar38 = pauStack_178;
        do {
          if ((short)uVar48 == 0) {
            do {
              auVar59 = *pauVar33;
              pauVar38 = pauVar38 + -0x38;
              pauVar33 = pauVar33 + 1;
              uVar48 = (ushort)((ushort)(SUB161(auVar59 >> 7,0) & 1) |
                                (ushort)(SUB161(auVar59 >> 0xf,0) & 1) << 1 |
                                (ushort)(SUB161(auVar59 >> 0x17,0) & 1) << 2 |
                                (ushort)(SUB161(auVar59 >> 0x1f,0) & 1) << 3 |
                                (ushort)(SUB161(auVar59 >> 0x27,0) & 1) << 4 |
                                (ushort)(SUB161(auVar59 >> 0x2f,0) & 1) << 5 |
                                (ushort)(SUB161(auVar59 >> 0x37,0) & 1) << 6 |
                                (ushort)(SUB161(auVar59 >> 0x3f,0) & 1) << 7 |
                                (ushort)(SUB161(auVar59 >> 0x47,0) & 1) << 8 |
                                (ushort)(SUB161(auVar59 >> 0x4f,0) & 1) << 9 |
                                (ushort)(SUB161(auVar59 >> 0x57,0) & 1) << 10 |
                                (ushort)(SUB161(auVar59 >> 0x5f,0) & 1) << 0xb |
                                (ushort)(SUB161(auVar59 >> 0x67,0) & 1) << 0xc |
                                (ushort)(SUB161(auVar59 >> 0x6f,0) & 1) << 0xd |
                                (ushort)(SUB161(auVar59 >> 0x77,0) & 1) << 0xe |
                               (ushort)(byte)(auVar59[0xf] >> 7) << 0xf) ^ 0xffff;
            } while (uVar48 == 0);
          }
          uVar44 = 0;
          for (uVar6 = uVar48; (uVar6 & 1) == 0; uVar6 = uVar6 >> 1 | 0x80000000) {
            uVar44 = uVar44 + 1;
          }
          lVar35 = *(longlong *)((longlong)pauVar38 + (ulonglong)uVar44 * -0x38 + -0x28);
          if (lVar35 != 0) {
            pub_1406abac0(*(byte **)((longlong)pauVar38 + (ulonglong)uVar44 * -0x38 + -0x20),
                          lVar35 << 2,4);
          }
          uVar48 = uVar48 - 1 & uVar48;
          pauVar45 = (undefined1 (*) [16])(pauVar45[-1] + 0xf);
        } while (pauVar45 != (undefined1 (*) [16])0x0);
      }
      uVar54 = (longlong)pauStack_e0 * 0x38 + 0x47U & 0xfffffffffffffff0;
      if (pauStack_e0[1] + uVar54 + 1 != (undefined1 *)0x0) {
        pub_1406abac0((byte *)((longlong)pauStack_178 - uVar54),
                      (ulonglong)(pauStack_e0[1] + uVar54 + 1),0x10);
      }
    }
    goto LAB_140c542f6;
  }
LAB_140c54577:
  auVar66[0] = -(auVar60[0] == cVar83);
  auVar66[1] = -(auVar60[1] == cVar84);
  auVar66[2] = -(auVar60[2] == cVar85);
  auVar66[3] = -(auVar60[3] == cVar86);
  auVar66[4] = -(auVar60[4] == cVar87);
  auVar66[5] = -(auVar60[5] == cVar88);
  auVar66[6] = -(auVar60[6] == cVar89);
  auVar66[7] = -(auVar60[7] == cVar90);
  auVar66[8] = -(auVar60[8] == cVar91);
  auVar66[9] = -(auVar60[9] == cVar92);
  auVar66[10] = -(auVar60[10] == cVar93);
  auVar66[0xb] = -(auVar60[0xb] == cVar94);
  auVar66[0xc] = -(auVar60[0xc] == cVar95);
  auVar66[0xd] = -(auVar60[0xd] == cVar96);
  auVar66[0xe] = -(auVar60[0xe] == cVar97);
  auVar66[0xf] = -(auVar60[0xf] == cVar98);
  if ((((((((((((((((SUB161(auVar66 >> 7,0) & 1) != 0 || (SUB161(auVar66 >> 0xf,0) & 1) != 0) ||
                  (SUB161(auVar66 >> 0x17,0) & 1) != 0) || (SUB161(auVar66 >> 0x1f,0) & 1) != 0) ||
                (SUB161(auVar66 >> 0x27,0) & 1) != 0) || (SUB161(auVar66 >> 0x2f,0) & 1) != 0) ||
              (SUB161(auVar66 >> 0x37,0) & 1) != 0) || (SUB161(auVar66 >> 0x3f,0) & 1) != 0) ||
            (SUB161(auVar66 >> 0x47,0) & 1) != 0) || (SUB161(auVar66 >> 0x4f,0) & 1) != 0) ||
          (SUB161(auVar66 >> 0x57,0) & 1) != 0) || (SUB161(auVar66 >> 0x5f,0) & 1) != 0) ||
        (SUB161(auVar66 >> 0x67,0) & 1) != 0) || (SUB161(auVar66 >> 0x6f,0) & 1) != 0) ||
      (SUB161(auVar66 >> 0x77,0) & 1) != 0) || auVar66[0xf] < '\0') goto LAB_140c56113;
  uVar54 = uVar54 + lVar35 + 0x10;
  lVar35 = lVar35 + 0x10;
  goto LAB_140c54508;
LAB_140c5456a:
  uVar27 = (ushort)(uVar48 - 1) & (ushort)uVar48;
  uVar48 = CONCAT22((short)(uVar48 - 1 >> 0x10),uVar27);
  if (uVar27 == 0) goto LAB_140c54577;
  goto LAB_140c54523;
LAB_140c56113:
  pdb_142dc8110(&UNK_14306e575,0x16,&UNK_14306eba8);
  goto LAB_140c56b2e;
LAB_140c560a0:
  pdb_142dc8110(&UNK_14306e575,0x16,&UNK_14306eb80);
  goto LAB_140c56b2e;
}

