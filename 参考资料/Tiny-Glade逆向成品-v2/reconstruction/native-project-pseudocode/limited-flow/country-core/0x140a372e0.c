// VA 0x140a372e0, PDB extent 6719 bytes
// country_core::systems::main_camera::main_camera_update
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/main_camera.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x000140a39a26) overlaps instruction at (ram,0x000140a39a24)
    */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: country_core::systems::main_camera::main_camera_update
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/main_camera.rs
   Extent: 6719 */

void pdb_140a372e0(undefined8 *param_1,undefined8 *param_2,undefined1 (*param_3) [16],
                  undefined8 *param_4,longlong *param_5,undefined8 *param_6,longlong *param_7,
                  undefined8 param_8,undefined1 (*param_9) [16],longlong *param_10,
                  longlong *param_11)

{
  char *pcVar1;
  uint *puVar2;
  byte *pbVar3;
  code cVar4;
  ulonglong *puVar5;
  ulonglong uVar6;
  undefined **ppuVar7;
  undefined1 auVar8 [12];
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined **ppuVar12;
  undefined **ppuVar13;
  undefined **ppuVar14;
  undefined ***pppuVar15;
  char cVar16;
  char cVar17;
  undefined1 uVar18;
  int iVar19;
  int iVar20;
  longlong lVar21;
  undefined **ppuVar22;
  longlong lVar23;
  undefined1 (*UNRECOVERED_JUMPTABLE) [16];
  uint7 uVar32;
  undefined7 uVar33;
  ulonglong uVar24;
  undefined1 (*pauVar25) [16];
  undefined **ppuVar26;
  undefined1 (*pauVar27) [16];
  int *piVar28;
  undefined1 (*pauVar29) [16];
  undefined *puVar30;
  undefined8 uVar31;
  byte bVar34;
  uint uVar35;
  undefined1 (*pauVar36) [16];
  code *UNRECOVERED_JUMPTABLE_00;
  undefined2 uVar37;
  undefined4 uVar38;
  uint uVar39;
  ulonglong uVar40;
  undefined1 (*pauVar41) [16];
  undefined8 uVar42;
  char cVar43;
  undefined1 (*pauVar44) [16];
  float *pfVar45;
  float *pfVar46;
  float *pfVar47;
  float *pfVar48;
  float *pfVar49;
  float *pfVar50;
  float *pfVar51;
  float *pfVar52;
  float *pfVar53;
  float *pfVar54;
  float *pfVar55;
  undefined **ppuVar56;
  float *pfVar57;
  float *pfVar58;
  undefined1 (**ppauVar59) [16];
  undefined1 (**ppauVar60) [16];
  float *pfVar61;
  undefined1 (*pauVar63) [16];
  undefined1 (*pauVar64) [16];
  ulonglong uVar65;
  bool bVar66;
  undefined1 (*pauVar67) [16];
  longlong lVar68;
  undefined1 (*pauVar69) [16];
  ulonglong uVar70;
  undefined4 uVar71;
  undefined1 (*pauVar72) [16];
  undefined1 (*pauVar73) [16];
  undefined1 (*pauVar74) [16];
  undefined1 (*pauVar75) [16];
  ulonglong uVar76;
  undefined2 in_ES;
  longlong in_FS_OFFSET;
  bool bVar77;
  float10 in_ST0;
  unkbyte10 in_ST1;
  unkbyte10 in_ST2;
  float fVar78;
  float fVar79;
  float fVar85;
  undefined8 extraout_XMM0_Qa;
  uint uVar86;
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  undefined8 extraout_XMM0_Qb;
  uint uVar87;
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  undefined1 auVar84 [16];
  float fVar88;
  float fVar89;
  float fVar90;
  float fVar94;
  float fVar95;
  undefined1 auVar91 [16];
  undefined1 auVar92 [16];
  undefined1 auVar93 [16];
  float fVar96;
  float fVar97;
  float fVar98;
  float fVar102;
  undefined1 auVar99 [16];
  undefined1 auVar100 [16];
  float fVar103;
  undefined1 auVar101 [16];
  undefined1 auVar104 [16];
  float unaff_XMM9_Da;
  float fVar105;
  float unaff_XMM9_Db;
  undefined4 unaff_XMM9_Dc;
  undefined4 unaff_XMM9_Dd;
  float unaff_XMM10_Da;
  undefined1 auVar106 [16];
  float unaff_XMM11_Da;
  undefined1 auStack_470 [376];
  undefined1 (*pauStack_2f8) [16];
  undefined1 (*pauStack_2f0) [16];
  float afStack_2e8 [4];
  undefined *puStack_2d8;
  undefined1 (*pauStack_2c8) [16];
  float fStack_2c0;
  byte bStack_2ae;
  byte bStack_2ad;
  uint uStack_2ac;
  undefined1 (*pauStack_2a8) [16];
  undefined1 (*pauStack_2a0) [16];
  undefined4 uStack_294;
  ulonglong uStack_290;
  float fStack_288;
  float fStack_284;
  longlong lStack_280;
  undefined8 uStack_278;
  undefined4 uStack_270;
  undefined4 uStack_26c;
  uint *puStack_268;
  uint *puStack_260;
  undefined8 uStack_258;
  ulonglong uStack_250;
  longlong lStack_248;
  ulonglong uStack_240;
  longlong lStack_238;
  undefined8 uStack_230;
  char cStack_228;
  undefined4 *puStack_208;
  undefined1 (*pauStack_200) [16];
  undefined1 (*pauStack_1f8) [16];
  uint uStack_1ec;
  undefined *puStack_1e8;
  undefined8 uStack_1e0;
  uint uStack_1d8;
  undefined **ppuStack_1a8;
  undefined1 (*pauStack_1a0) [16];
  int iStack_198;
  undefined8 uStack_168;
  float fStack_160;
  undefined8 *puStack_158;
  longlong lStack_150;
  longlong lStack_130;
  longlong lStack_128;
  longlong lStack_120;
  longlong lStack_118;
  longlong lStack_110;
  longlong lStack_108;
  longlong lStack_100;
  longlong lStack_f8;
  longlong lStack_f0;
  longlong lStack_e8;
  longlong lStack_e0;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined8 *puVar62;
  float fVar107;
  
  pfVar48 = afStack_2e8;
  pfVar51 = afStack_2e8;
  pfVar57 = afStack_2e8;
  pfVar58 = afStack_2e8;
  ppauVar59 = (undefined1 (**) [16])afStack_2e8;
  pfVar53 = afStack_2e8;
  pfVar55 = afStack_2e8;
  pfVar49 = afStack_2e8;
  ppauVar60 = (undefined1 (**) [16])afStack_2e8;
  pfVar46 = afStack_2e8;
  pfVar47 = afStack_2e8;
  pfVar61 = afStack_2e8;
  pfVar50 = afStack_2e8;
  pfVar45 = afStack_2e8;
  lStack_128 = *param_7;
  lStack_130 = param_7[1];
  pauVar63 = (undefined1 (*) [16])param_7[3];
  pauVar75 = (undefined1 (*) [16])param_7[7];
  lStack_108 = param_7[0xb];
  lStack_100 = param_7[0xc];
  lStack_f8 = param_7[0xd];
  lStack_f0 = param_7[0xe];
  lStack_e8 = param_7[0xf];
  lStack_e0 = param_7[0x10];
  uStack_d8 = (undefined4)param_7[0x11];
  uStack_d4 = *(undefined4 *)((longlong)param_7 + 0x8c);
  uStack_d0 = (undefined4)param_7[0x12];
  uStack_cc = *(undefined4 *)((longlong)param_7 + 0x94);
  pauVar25 = (undefined1 (*) [16])param_7[0x1b];
  if ((*(short *)(*param_11 + 0x18) == 2) ||
     (auVar82 = ZEXT816(0), *(char *)(*param_11 + 0x1f) == '\0')) {
    auVar82 = ZEXT416(*(uint *)(param_7[0x17] + 0x28));
  }
  lVar23 = param_7[0x13];
  lStack_150 = param_7[0x1f];
  uStack_290 = param_7[0x23];
  lStack_120 = param_7[0x27];
  lStack_118 = param_7[0x2b];
  pauStack_200 = (undefined1 (*) [16])param_10[4];
  uVar39 = *(uint *)*pauVar25;
  uVar35 = *(uint *)((longlong)*pauVar25 + 4);
  puStack_208 = (undefined4 *)param_10[6];
  uStack_294 = *(undefined4 *)((longlong)param_10 + 0x3c);
  uStack_2ac = *(uint *)((longlong)param_6 + 0x1c);
  pauVar73 = (undefined1 (*) [16])(ulonglong)uStack_2ac;
  pauStack_2a8 = (undefined1 (*) [16])param_6[2];
  *(uint *)*pauStack_2a8 = uStack_2ac;
  pauVar44 = (undefined1 (*) [16])*param_6;
  *(float *)((longlong)pauVar44[0x4d] + 8) = (float)uVar39 / (float)uVar35;
  ppuVar22 = *(undefined ***)*param_9;
  pauStack_2a0 = (undefined1 (*) [16])*param_1;
  if (*(int *)(ppuVar22 + 3) != 0) {
    if ((2 < *(uint *)((longlong)pauStack_2a0[1] + 8)) &&
       (fVar88 = SUB84(*(undefined ***)pauStack_2a0[0x17],0),
       fVar79 = (float)((ulonglong)*(undefined ***)pauStack_2a0[0x17] >> 0x20),
       fVar79 * fVar79 + fVar88 * fVar88 <= 0.0)) {
      return;
    }
    pauVar64 = param_9 + 1;
    param_9 = *(undefined1 (**) [16])param_9[1];
    *(undefined4 *)*param_9 = *(undefined4 *)((longlong)*pauVar64 + 0xc);
    *(undefined4 *)(ppuVar22 + 3) = 0;
  }
  pauVar64 = (undefined1 (*) [16])(ulonglong)uStack_2ac;
  pauStack_1f8 = param_3;
  puStack_158 = param_4;
  lStack_110 = lVar23;
  if ((*(uint *)pauStack_2a0[1] < 3) || (*(uint *)((longlong)pauStack_2a0[1] + 8) < 3)) {
    param_9 = (undefined1 (*) [16])param_10[2];
    *(undefined4 *)*param_9 = *(undefined4 *)((longlong)param_10 + 0x1c);
    lVar21 = *param_10;
    lVar68 = *(longlong *)(lVar21 + 0x30);
    uVar42 = *(undefined8 *)(lVar21 + 0x40);
    if (lVar68 == *(longlong *)(lVar21 + 0x20)) {
      pauStack_2f0 = (undefined1 (*) [16])0x140a37508;
      pdb_142d7e8a0(lVar21 + 0x20);
      pauVar64 = (undefined1 (*) [16])(ulonglong)uStack_2ac;
    }
    *(undefined8 *)(*(longlong *)(lVar21 + 0x28) + lVar68 * 8) = uVar42;
    *(longlong *)(lVar21 + 0x30) = lVar68 + 1;
    *(longlong *)(lVar21 + 0x40) = *(longlong *)(lVar21 + 0x40) + 1;
  }
  pauVar27 = pauStack_2a0;
  pauVar41 = pauStack_2a8;
  cVar4 = *(code *)*param_2;
  fVar79 = SUB84(pauVar64,0);
  *(float *)*pauStack_2a8 = fVar79;
  *(code *)((longlong)pauVar44[0x34] + 4) = cVar4;
  bStack_2ad = *(byte *)(lStack_150 + 0xd4);
  bVar34 = *(byte *)(uStack_290 + 0x11c + (ulonglong)(2 < *(uint *)pauStack_2a0[1]) * 2);
  bVar66 = false;
  if (bVar34 == 6) {
    bVar34 = 0;
  }
  fStack_160 = *(float *)((longlong)*pauVar75 +
                         *(longlong *)(&UNK_14303b530 + (ulonglong)bVar34 * 8) + 8);
  uStack_168 = *(undefined8 *)
                ((longlong)*pauVar75 + *(longlong *)(&UNK_14303b530 + (ulonglong)bVar34 * 8));
  uVar39 = -(uint)(*(float *)((longlong)pauStack_2a0[0x17] + 0xc) != 0.0 ||
                  *(float *)((longlong)pauStack_2a0[0x17] + 8) != 0.0);
  if (*(float *)((longlong)*pauStack_1f8 + 8) != 0.0047237873) {
    fStack_288 = SUB84(*(undefined ***)*pauStack_1f8,0);
    fStack_284 = (float)((ulonglong)*(undefined ***)*pauStack_1f8 >> 0x20);
    pauStack_2f0 = (undefined1 (*) [16])0x140a375e8;
    lStack_280._0_4_ = *(float *)((longlong)*pauStack_1f8 + 8);
    lVar21 = pdb_140f3cb70(&fStack_288);
    bVar66 = (uint)param_2 < 500000000 && lVar21 == 0;
  }
  uVar38 = SUB84(param_2,0);
  lVar21 = 0x11c;
  uStack_1ec = uVar39;
  if ((uVar39 & 1) != 0) {
    pauStack_2f0 = (undefined1 (*) [16])0x140a37613;
    ppuVar22 = (undefined **)pdb_140f3c9d0();
    *(undefined ***)*pauStack_1f8 = ppuVar22;
    *(undefined4 *)((longlong)*pauStack_1f8 + 8) = uVar38;
    lVar21 = 0x11d;
  }
  bVar77 = *(uint *)pauVar27[1] < 3;
  bStack_2ae = bVar77 | bVar66;
  ppuVar22 = (undefined **)CONCAT71((int7)((ulonglong)lVar23 >> 8),bStack_2ae);
  pauVar69 = (undefined1 (*) [16])0x0;
  if (*(byte *)(uStack_290 + lVar21) != 6) {
    pauVar69 = (undefined1 (*) [16])(ulonglong)*(byte *)(uStack_290 + lVar21);
  }
  *(float *)*pauVar41 = fVar79;
  uVar39 = (byte)pauVar44[0x4d][0] - 2;
  pauVar41 = (undefined1 (*) [16])(ulonglong)uVar39;
  if (uVar39 < 4) {
    if (!bVar77 && !bVar66) {
LAB_140a37683:
                    /* WARNING: Could not recover jumptable at 0x000140a37695. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(&UNK_14303b61c + *(int *)(&UNK_14303b61c + (ulonglong)*(uint *)pauVar27[1] * 4)))()
      ;
      return;
    }
  }
  else {
    lVar23 = 0x100;
    if ((code)pauVar44[0x4d][0] != (code)0x0) {
      lVar23 = 0x1b8;
    }
    if ((bStack_2ae & *(int *)((longlong)pauVar44[1] + lVar23 + 8) == 0) == 0) goto LAB_140a37683;
  }
  fStack_2c0 = (float)*(uint *)((longlong)*pauVar25 + 4);
  pauStack_2c8 = (undefined1 (*) [16])CONCAT44(pauStack_2c8._4_4_,(float)*(uint *)*pauVar25);
  pauVar74 = (undefined1 (*) [16])&ppuStack_1a8;
  pauStack_2f0 = (undefined1 (*) [16])0x140a376e2;
  pauVar72 = pauVar44;
  pdb_1414c9450(pauVar74);
  fVar96 = *(float *)*pauVar63 / (float)*(uint *)*pauVar25;
  fVar88 = (_DAT_142e36f28 - *(float *)((longlong)*pauVar63 + 4)) /
           (float)*(uint *)((longlong)*pauVar25 + 4);
  fVar97 = fVar96 + fVar96 + _DAT_142e36f34;
  fVar89 = fVar88 + fVar88 + _DAT_142e36f28;
  fVar88 = *(float *)((longlong)pauVar44[6] + 4);
  fVar96 = *(float *)((longlong)pauVar44[6] + 0xc);
  fVar102 = *(float *)((longlong)pauVar44[7] + 4);
  fVar103 = *(float *)((longlong)pauVar44[7] + 0xc);
  fVar90 = fVar89 * *(float *)pauVar44[5] + fVar97 * *(float *)pauVar44[4];
  fVar94 = fVar89 * *(float *)((longlong)pauVar44[5] + 4) +
           fVar97 * *(float *)((longlong)pauVar44[4] + 4);
  fVar95 = fVar89 * *(float *)((longlong)pauVar44[5] + 8) +
           fVar97 * *(float *)((longlong)pauVar44[4] + 8);
  fVar89 = fVar89 * *(float *)((longlong)pauVar44[5] + 0xc) +
           fVar97 * *(float *)((longlong)pauVar44[4] + 0xc);
  auVar99._0_4_ = *(float *)pauVar44[6] + fVar90 + *(float *)pauVar44[7];
  auVar99._4_4_ = fVar88 + fVar94 + fVar102;
  auVar99._8_4_ =
       *(float *)((longlong)pauVar44[6] + 8) + fVar95 + *(float *)((longlong)pauVar44[7] + 8);
  auVar99._12_4_ = fVar96 + fVar89 + fVar103;
  auVar104._4_4_ = auVar99._12_4_;
  auVar104._0_4_ = auVar99._12_4_;
  auVar104._8_4_ = auVar99._12_4_;
  auVar104._12_4_ = auVar99._12_4_;
  auVar100 = divps(auVar99,auVar104);
  auVar80._0_4_ = *(float *)pauVar44[6] * _DAT_14303aa10 + fVar90 + *(float *)pauVar44[7];
  auVar80._4_4_ = fVar88 * _UNK_14303aa14 + fVar94 + fVar102;
  auVar80._8_4_ =
       *(float *)((longlong)pauVar44[6] + 8) * _UNK_14303aa18 + fVar95 +
       *(float *)((longlong)pauVar44[7] + 8);
  auVar80._12_4_ = fVar96 * _UNK_14303aa1c + fVar89 + fVar103;
  auVar91._4_4_ = auVar80._12_4_;
  auVar91._0_4_ = auVar80._12_4_;
  auVar91._8_4_ = auVar80._12_4_;
  auVar91._12_4_ = auVar80._12_4_;
  auVar81 = divps(auVar80,auVar91);
  auVar83._0_4_ = auVar81._0_4_ - auVar100._0_4_;
  auVar83._4_4_ = auVar81._4_4_ - auVar100._4_4_;
  auVar83._8_4_ = auVar81._8_4_ - auVar100._8_4_;
  auVar83._12_4_ = auVar81._12_4_ - auVar100._12_4_;
  auVar8._4_8_ = auVar91._8_8_;
  auVar8._0_4_ = auVar83._4_4_;
  auVar92._0_8_ = auVar8._0_8_ << 0x20;
  auVar92._8_4_ = auVar83._8_4_;
  auVar92._12_4_ = auVar83._12_4_;
  auVar81._8_8_ = auVar83._8_8_;
  auVar81._0_8_ = auVar92._8_8_;
  fVar102 = auVar83._4_4_ * auVar83._4_4_;
  fVar103 = auVar83._12_4_ * auVar83._12_4_;
  fVar96 = fVar102 + auVar83._0_4_ * auVar83._0_4_;
  auVar101._8_4_ = auVar83._8_4_;
  auVar101._0_8_ = auVar92._8_8_;
  auVar101._12_4_ = auVar83._12_4_;
  auVar100._4_12_ = auVar101._4_12_;
  auVar100._0_4_ = SQRT(auVar83._8_4_ * auVar83._8_4_ + fVar96);
  fVar97 = _DAT_142e36f28 / auVar100._0_4_;
  fVar88 = fVar97 * auVar83._0_4_;
  fVar90 = fVar97 * auVar83._4_4_;
  fVar94 = auVar83._8_4_ * 0.0;
  fVar95 = auVar83._12_4_ * 0.0;
  fVar97 = fVar97 * auVar83._8_4_;
  fVar98 = 0.0;
  pauVar36 = (undefined1 (*) [16])&UNK_14303b630;
  auVar106._0_8_ = (ulonglong)*(int *)(&UNK_14303b630 + (longlong)pauVar69 * 4);
  bVar66 = 0xfffffffebcfc49cf < auVar106._0_8_;
  UNRECOVERED_JUMPTABLE = (undefined1 (*) [16])(&UNK_14303b630 + auVar106._0_8_);
  cVar17 = (char)UNRECOVERED_JUMPTABLE;
  uVar32 = (uint7)((ulonglong)UNRECOVERED_JUMPTABLE >> 8);
  uVar37 = SUB82(pauVar41,0);
  cVar43 = (char)pauVar44;
  iVar20 = (int)pauVar44;
  pauVar29 = UNRECOVERED_JUMPTABLE;
  pfVar54 = afStack_2e8;
  pfVar52 = afStack_2e8;
  pauVar67 = pauVar69;
  fVar89 = fVar103;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(pauVar69) {
  case (undefined1 (*) [16])0x0:
    fVar85 = (float)uStack_168;
    fVar105 = uStack_168._4_4_;
    fVar107 = fStack_160;
    break;
  case (undefined1 (*) [16])0x1:
    fVar85 = *(float *)pauVar75[2];
    fVar105 = *(float *)((longlong)pauVar75[2] + 4);
    fVar107 = *(float *)((longlong)pauVar75[2] + 8);
    break;
  case (undefined1 (*) [16])0x2:
    fVar85 = *(float *)((longlong)pauVar75[1] + 4);
    fVar105 = *(float *)((longlong)pauVar75[1] + 8);
    fVar107 = *(float *)((longlong)pauVar75[1] + 0xc);
    fVar88 = _DAT_142e37b50;
    fVar90 = _UNK_142e37b54;
    fVar94 = _UNK_142e37b58;
    fVar95 = _UNK_142e37b5c;
    fVar97 = _DAT_142e36f34;
    break;
  case (undefined1 (*) [16])0x3:
    fVar85 = *(float *)((longlong)pauVar75[2] + 0xc);
    fVar105 = *(float *)pauVar75[3];
    fVar107 = *(float *)((longlong)pauVar75[3] + 4);
    fVar88 = _DAT_142e37b50;
    fVar90 = _UNK_142e37b54;
    fVar94 = _UNK_142e37b58;
    fVar95 = _UNK_142e37b5c;
    fVar97 = _DAT_142e36f34;
    break;
  case (undefined1 (*) [16])0x4:
    goto code_r0x000140a37833;
  case (undefined1 (*) [16])0x5:
    fVar88 = _DAT_142e37b50;
    fVar90 = _UNK_142e37b54;
    fVar94 = _UNK_142e37b58;
    fVar95 = _UNK_142e37b5c;
    fVar97 = _DAT_142e36f34;
    goto code_r0x000140a37833;
  case (undefined1 (*) [16])0x6:
                    /* WARNING: This code block may not be properly labeled as switch case */
    UNK_14303b626 = UNK_14303b626 + cVar17;
    return;
  case (undefined1 (*) [16])0x7:
    goto code_r0x000140a37a66;
  case (undefined1 (*) [16])0x8:
  case (undefined1 (*) [16])0x9:
  case (undefined1 (*) [16])0xb:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (undefined1 (*) [16])0xa:
    pauStack_2f0 = (undefined1 (*) [16])0x140a37a62;
    UNRECOVERED_JUMPTABLE = (undefined1 (*) [16])func_0x00014fa37a62();
    auVar83._8_8_ = extraout_XMM0_Qb;
    auVar83._0_8_ = extraout_XMM0_Qa;
    (*UNRECOVERED_JUMPTABLE)[0] = (*UNRECOVERED_JUMPTABLE)[0] + (char)UNRECOVERED_JUMPTABLE;
    goto code_r0x000140a37a66;
  case (undefined1 (*) [16])0xc:
    auVar106._0_8_ = (ulonglong)UNRECOVERED_JUMPTABLE ^ 0x24;
    goto code_r0x000140a37d80;
  case (undefined1 (*) [16])0xd:
    *(short *)(&UNK_14303b5bd + auVar106._0_8_) = (short)in_ST0;
    halt_baddata();
  case (undefined1 (*) [16])0xe:
    *(int *)(auVar106._0_8_ + 0x286076c60) =
         *(int *)(auVar106._0_8_ + 0x286076c60) + (int)UNRECOVERED_JUMPTABLE + (uint)bVar66;
    goto code_r0x000140a37e00;
  case (undefined1 (*) [16])0xf:
    goto code_r0x000140a37e33;
  case (undefined1 (*) [16])0x10:
    cVar4 = (code)in(uVar37);
    (*pauVar69)[0] = cVar4;
    pauVar69 = (undefined1 (*) [16])((longlong)*pauVar69 + 1);
    goto code_r0x000140a37e00;
  case (undefined1 (*) [16])0x11:
    *(short *)(&UNK_14303b5bd + auVar106._0_8_) = (short)in_ST0;
    pauVar64 = (undefined1 (*) [16])(ulonglong)*(uint *)(&UNK_14303b632 + auVar106._0_8_);
    (*UNRECOVERED_JUMPTABLE)[0] = (*UNRECOVERED_JUMPTABLE)[0] + cVar17;
    goto code_r0x000140a37e5a;
  case (undefined1 (*) [16])0x12:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (undefined1 (*) [16])0x13:
    goto code_r0x000140a3819a;
  case (undefined1 (*) [16])0x14:
    (*UNRECOVERED_JUMPTABLE)[0] = (*UNRECOVERED_JUMPTABLE)[0] + cVar17;
    UNRECOVERED_JUMPTABLE_00 = (code *)((longlong)pauVar44[0x413c244] + 4);
    *UNRECOVERED_JUMPTABLE_00 = (code)((char)*UNRECOVERED_JUMPTABLE_00 + '0');
    goto code_r0x000140a3818a;
  case (undefined1 (*) [16])0x15:
    goto code_r0x000140a38194;
  case (undefined1 (*) [16])0x16:
    (*UNRECOVERED_JUMPTABLE)[0] = (*UNRECOVERED_JUMPTABLE)[0] + cVar17;
    goto code_r0x000140a3817d;
  case (undefined1 (*) [16])0x17:
    lVar23 = CONCAT71(0x14303b6,*(char *)(((ulonglong)UNRECOVERED_JUMPTABLE ^ 0x60) + 99) + '0');
    goto code_r0x000140a381b3;
  case (undefined1 (*) [16])0x18:
    goto code_r0x000140a387d9;
  case (undefined1 (*) [16])0x19:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (undefined1 (*) [16])0x1a:
    pfVar45 = (float *)((ulonglong)pauStack_2a8 & 0xffffffff);
    goto code_r0x000140a38800;
  case (undefined1 (*) [16])0x1b:
    UNK_14303b5b9 = UNK_14303b5b9 + cVar17;
    goto code_r0x000140a38814;
  case (undefined1 (*) [16])0x1c:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (undefined1 (*) [16])0x1d:
    goto code_r0x000140a38837;
  case (undefined1 (*) [16])0x1e:
    goto code_r0x000140a38aec;
  case (undefined1 (*) [16])0x1f:
    (*pauVar69)[0] = (*pauVar69)[0] + '0';
    *(int *)pauVar44[10] = *(int *)pauVar44[10] - (int)pauVar41;
    pfVar47 = afStack_2e8;
    fVar79 = fVar103;
    goto code_r0x000140a38ab2;
  case (undefined1 (*) [16])0x20:
    piVar28 = (int *)((ulonglong)uVar32 << 8);
    *piVar28 = *piVar28 + (int)piVar28;
    (*pauVar69)[0] = (*pauVar69)[0] + '0';
    goto code_r0x000140a38ac2;
  case (undefined1 (*) [16])0x21:
    goto code_r0x000140a38acc;
  case (undefined1 (*) [16])0x22:
    *(int *)pauVar44[0xb] = *(int *)pauVar44[0xb] - iVar20;
    pfVar47 = afStack_2e8;
    goto code_r0x000140a38ab9;
  case (undefined1 (*) [16])0x23:
    (*UNRECOVERED_JUMPTABLE)[0] = (*UNRECOVERED_JUMPTABLE)[0];
    (*pauVar69)[0] = (*pauVar69)[0] + '0';
    *(int *)pauVar44[0xd] = *(int *)pauVar44[0xd] + -0x4303b630;
    pfVar49 = afStack_2e8;
    goto code_r0x000140a38ae7;
  case (undefined1 (*) [16])0x24:
    (&UNK_14303b603)[auVar106._0_8_] = (&UNK_14303b603)[auVar106._0_8_] + '0';
    pauStack_2f0 = (undefined1 (*) [16])&UNK_140a38d37;
    func_0x00010d7059fa();
    UNRECOVERED_JUMPTABLE_00 = (code *)swi(3);
    (*UNRECOVERED_JUMPTABLE_00)();
    return;
  case (undefined1 (*) [16])0x25:
    goto code_r0x000140a38d73;
  case (undefined1 (*) [16])0x26:
    UNK_14303b630 = in(uVar37);
    *(char *)CONCAT71(uVar32,UNK_14303b630) =
         *(char *)CONCAT71(uVar32,UNK_14303b630) + UNK_14303b630;
    goto code_r0x000140a38d4c;
  case (undefined1 (*) [16])0x27:
    goto code_r0x000140a38d5d;
  case (undefined1 (*) [16])0x28:
    UNRECOVERED_JUMPTABLE_00 = (code *)swi(3);
    (*UNRECOVERED_JUMPTABLE_00)();
    return;
  case (undefined1 (*) [16])0x29:
    goto code_r0x000140a38d82;
  case (undefined1 (*) [16])0x2a:
  case (undefined1 (*) [16])0x2b:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (undefined1 (*) [16])0x2c:
    UNRECOVERED_JUMPTABLE_00 = (code *)((longlong)*pauVar64 + 0xf);
    *(uint *)UNRECOVERED_JUMPTABLE_00 = *(int *)UNRECOVERED_JUMPTABLE_00 + (uint)afStack_2e8;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (undefined1 (*) [16])0x2d:
    pauStack_2f0 = UNRECOVERED_JUMPTABLE;
    lVar23 = CONCAT71(uVar32,cVar17 + -0x15 + bVar66);
    uVar35 = *(int *)(lVar23 + -0x75) + 0x4303b630;
    pauVar36 = (undefined1 (*) [16])(ulonglong)uVar35;
    puVar2 = (uint *)(lVar23 + -0x75);
    uVar39 = *puVar2;
    *puVar2 = *puVar2 + uVar35;
    pauVar29 = (undefined1 (*) [16])
               (ulonglong)
               ((int)lVar23 + *(int *)((longlong)*pauVar44 + (longlong)pauVar36 * 4 + 2) +
               (uint)CARRY4(uVar39,uVar35));
    goto code_r0x000140a3945c;
  case (undefined1 (*) [16])0x2e:
    goto code_r0x000140a393ab;
  case (undefined1 (*) [16])0x2f:
    return;
  case (undefined1 (*) [16])0x30:
    uVar39 = (int)UNRECOVERED_JUMPTABLE + *(int *)*UNRECOVERED_JUMPTABLE + (uint)bVar66;
    *(char *)(ulonglong)uVar39 = *(char *)(ulonglong)uVar39 + (char)uVar39;
    goto code_r0x000140a39a46;
  case (undefined1 (*) [16])0x31:
    *(undefined1 (**) [16])pauVar63[-1] = pauVar69;
    goto code_r0x000140a39a24;
  case (undefined1 (*) [16])0x32:
    goto code_r0x000140a39a34;
  case (undefined1 (*) [16])0x33:
    (*UNRECOVERED_JUMPTABLE)[0] = (*UNRECOVERED_JUMPTABLE)[0] + cVar17;
    in(uVar37);
    goto code_r0x000140a39a24;
  case (undefined1 (*) [16])0x34:
    goto DAT_140a39a50;
  default:
    goto code_r0x00014303b630;
  }
code_r0x000140a37929:
  pauVar74 = pauStack_2a8;
  fVar98 = 0.0;
  unaff_XMM9_Dd = 0;
  unaff_XMM9_Dc = 0;
  unaff_XMM9_Db = 0.0;
  pauVar25 = (undefined1 (*) [16])(ulonglong)((byte)pauVar69 < 2);
  pauStack_2f0 = (undefined1 (*) [16])0x140a37941;
  pdb_140e08f50(&fStack_288,pauVar44);
  fVar85 = fVar85 - fStack_288;
  fVar105 = fVar105 - fStack_284;
  fVar107 = fVar107 - (float)lStack_280;
  auVar106._0_8_ = CONCAT44(fVar107,fVar105);
  auVar106._8_8_ = 0;
  pauStack_2f0 = (undefined1 (*) [16])0x140a3795f;
  pdb_140e08f50(&fStack_288,pauVar44);
  fVar78 = SQRT((float)lStack_280 * (float)lStack_280 +
                fStack_288 * fStack_288 + fStack_284 * fStack_284) +
           *(float *)(&UNK_14303aa20 + (longlong)pauVar25 * 4);
  fVar105 = fVar107 * fVar107 + fVar85 * fVar85 + fVar105 * fVar105;
  cVar17 = '\0';
  if (fVar78 * fVar78 < fVar105) {
    auVar93._0_4_ = SQRT(fVar105);
    auVar93._4_4_ = auVar93._0_4_;
    auVar93._8_8_ = 0;
    auVar81 = divps(auVar106,auVar93);
    fVar85 = (fVar85 / auVar93._0_4_) * fVar78;
    auVar106._0_8_ = CONCAT44(auVar81._4_4_ * fVar78,auVar81._0_4_ * fVar78);
  }
  pauStack_2f0 = (undefined1 (*) [16])0x140a379e6;
  pdb_140e08f50(&fStack_288,pauVar44);
  unaff_XMM9_Da = fVar85 + fStack_288;
  unaff_XMM11_Da = fStack_284 + (float)auVar106._0_8_;
  unaff_XMM10_Da = (float)(auVar106._0_8_ >> 0x20) + (float)lStack_280;
  *(float *)*pauVar74 = fVar79;
  pauStack_2f0 = (undefined1 (*) [16])0x140a37a16;
  pauVar41 = pauVar44;
  pdb_140e08f50(&fStack_288);
  auVar100 = ZEXT416((uint)fStack_288);
  auVar83 = ZEXT416((uint)fStack_284);
  auVar81 = ZEXT416((uint)(float)lStack_280);
  auVar106._0_8_ = (ulonglong)*(int *)(&UNK_14303b648 + (ulonglong)(byte)pauVar44[0x4d][0] * 4);
  pauVar29 = (undefined1 (*) [16])(&UNK_14303b648 + auVar106._0_8_);
  ppuVar22 = (undefined **)(ulonglong)bStack_2ae;
  pauVar36 = (undefined1 (*) [16])(ulonglong)uStack_1ec;
  bVar34 = (byte)uStack_1ec;
  cVar16 = (char)pauVar29;
  uVar33 = (undefined7)((ulonglong)pauVar29 >> 8);
  fVar85 = fStack_288;
  fVar105 = fStack_284;
  fVar107 = (float)lStack_280;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(pauVar44[0x4d][0]) {
  case 0:
    pauVar75 = pauVar44 + 0x10;
    break;
  case 1:
    pauVar75 = (undefined1 (*) [16])((longlong)pauVar44[0x1b] + 8);
    break;
  default:
    if ((uStack_1ec & 1) != 0) goto code_r0x000140a37a55;
    goto code_r0x000140a37ad5;
  case 4:
    pauVar75 = pauVar44 + 0x39;
    break;
  case 6:
    (&UNK_14303b5d5)[auVar106._0_8_] = (&UNK_14303b5d5)[auVar106._0_8_] + bVar34;
    goto code_r0x000140a37d90;
  case 7:
    pbVar3 = (byte *)((ulonglong)
                      CONCAT22((short)(uStack_1ec >> 0x10),
                               CONCAT11((char)(uStack_1ec >> 8) + cVar43,bVar34)) * 5 + -0x21);
    *pbVar3 = *pbVar3 ^ (byte)pauVar63;
    goto code_r0x000140a37e66;
  case 8:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 9:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 10:
    UNRECOVERED_JUMPTABLE = (undefined1 (*) [16])((ulonglong)pauStack_1f8 & 0xffffffff);
    goto code_r0x000140a37e33;
  case 0xb:
    pcVar1 = (char *)(CONCAT71(uVar33,cVar16 + (*pauVar29)[0]) + -0x73);
    *pcVar1 = *pcVar1 + bVar34;
    goto code_r0x000140a37e66;
  case 0xc:
code_r0x000140a3818a:
    afStack_2e8[0] = SUB84(pauVar29,0);
    goto code_r0x000140a38185;
  case 0xd:
    uVar39 = *(uint *)*pauVar29;
    *(int *)(ulonglong)uVar39 = *(int *)(ulonglong)uVar39 + uVar39;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0xe:
    goto code_r0x000140a3819a;
  case 0xf:
    goto code_r0x000140a381af;
  case 0x10:
    goto code_r0x000140a38194;
  case 0x11:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x12:
    *(float *)((longlong)pauVar69[1] + 4) = fVar97;
    *(undefined4 *)((longlong)pauVar69[1] + 8) = 0;
    goto code_r0x000140a387f0;
  case 0x13:
    (*pauVar29)[0] = (*pauVar29)[0] + cVar16;
    goto code_r0x000140a3883f;
  case 0x14:
    afStack_2e8[0] = fVar79;
    goto code_r0x000140a38814;
  case 0x15:
    pauVar29 = (undefined1 (*) [16])(ulonglong)((uint)pauVar63 | 0x2602e60);
    goto code_r0x000140a38829;
  case 0x16:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x17:
    pfVar46 = (float *)0x31c;
    goto code_r0x000140a388ab;
  case 0x18:
    (*pauVar29)[0] = (*pauVar29)[0] + cVar16;
    goto code_r0x000140a38afc;
  case 0x19:
code_r0x000140a38ac2:
    uStack_1d8 = CONCAT31(uStack_1d8._1_3_,(char)uStack_1d8 - (char)pauVar36);
    goto code_r0x000140a38ab9;
  case 0x1a:
    pauVar29 = (undefined1 (*) [16])((ulonglong)pauVar29 & 0xffffffffffffff30);
    *(int *)*pauVar29 = *(int *)*pauVar29 + (int)pauVar29;
    (*pauVar69)[0] = (*pauVar69)[0] + bVar34;
    goto code_r0x000140a38ada;
  case 0x1b:
    (*pauVar29)[0] = (*pauVar29)[0] + cVar16;
    (*pauVar69)[0] = (*pauVar69)[0] + bVar34;
    *(int *)pauVar44[0xe] = *(int *)pauVar44[0xe] - (int)pauVar41;
    goto code_r0x000140a38aee;
  case 0x1c:
    UNRECOVERED_JUMPTABLE = (undefined1 (*) [16])((ulonglong)afStack_2e8 & 0xffffffff);
    pfVar48 = (float *)((ulonglong)pauVar29 & 0xffffffff);
code_r0x000140a38acc:
    piVar28 = (int *)((ulonglong)UNRECOVERED_JUMPTABLE & 0xffffffffffffff20);
    *piVar28 = *piVar28 + (int)piVar28;
    (*pauVar69)[0] = (*pauVar69)[0] + (char)pauVar36;
    *(char *)((longlong)pfVar48 + 0x130) = *(char *)((longlong)pfVar48 + 0x130) - cVar43;
    pfVar47 = pfVar48;
    goto code_r0x000140a38ab9;
  case 0x1d:
    (&UNK_14303b5d3)[auVar106._0_8_] = (&UNK_14303b5d3)[auVar106._0_8_] + bVar34;
    pfVar50 = afStack_2e8;
    goto code_r0x000140a38aee;
  case 0x1e:
    pfVar51 = (float *)auStack_470;
code_r0x000140a38d4c:
    *(float *)((longlong)pfVar51 + 0x170) = unaff_XMM9_Da;
    *(float *)((longlong)pfVar51 + 0x174) = unaff_XMM9_Db;
    *(undefined4 *)((longlong)pfVar51 + 0x178) = unaff_XMM9_Dc;
    *(undefined4 *)((longlong)pfVar51 + 0x17c) = unaff_XMM9_Dd;
    *(float *)((longlong)pfVar51 + 0x160) = fVar88;
    *(float *)((longlong)pfVar51 + 0x164) = fVar90;
    *(float *)((longlong)pfVar51 + 0x168) = fVar94;
    *(float *)((longlong)pfVar51 + 0x16c) = fVar95;
    *(float *)((longlong)pfVar51 + 0x150) = fVar97;
    *(undefined4 *)((longlong)pfVar51 + 0x154) = 0;
    *(undefined4 *)((longlong)pfVar51 + 0x158) = 0;
    *(undefined4 *)((longlong)pfVar51 + 0x15c) = 0;
    goto code_r0x000140a38d66;
  case 0x1f:
    pauVar36 = (undefined1 (*) [16])(ulonglong)*(uint *)pauVar36[1];
    goto code_r0x000140a38d8e;
  case 0x20:
    goto code_r0x000140a38d5f;
  case 0x21:
    auVar83._0_4_ = (float)(int)in_ST2;
    auVar83._4_4_ = (float)(int)((unkuint10)in_ST2 >> 0x20);
    auVar83._8_8_ = 0;
    goto code_r0x000140a38d78;
  case 0x22:
    piVar28 = (int *)((ulonglong)pauVar29 & 0xffffffffffffff70);
    *piVar28 = *piVar28 + (int)piVar28;
    UNRECOVERED_JUMPTABLE_00 = (code *)((longlong)pauVar69[2] + 9) + (longlong)pauVar36;
    *UNRECOVERED_JUMPTABLE_00 = (code)((char)*UNRECOVERED_JUMPTABLE_00 + (char)piVar28);
    *piVar28 = *piVar28 + (int)piVar28;
    goto code_r0x000140a38d5d;
  case 0x23:
    pauVar29 = (undefined1 (*) [16])
               CONCAT62((int6)((ulonglong)pauVar29 >> 0x10),
                        CONCAT11(((longlong)pauVar29 < 0) << 7 |
                                 (pauVar29 == (undefined1 (*) [16])0x0) << 6 | cVar17 << 4 |
                                 ((POPCOUNT((ulonglong)pauVar29 & 0xff) & 1U) == 0) << 2 | 2U |
                                 0xfffffffebcfc49b7 < auVar106._0_8_,cVar16));
    (*pauVar36)[0] = (*pauVar36)[0] + cVar16;
    (*pauVar29)[0] = (*pauVar29)[0] + cVar16;
    pfVar61 = afStack_2e8;
    goto code_r0x000140a38d8e;
  case 0x24:
  case 0x25:
    auVar83 = *(undefined1 (*) [16])((ulonglong)*(uint *)(&UNK_14303b650 + auVar106._0_8_) + 0x30);
    uVar42 = auVar83._0_8_;
    pauVar29 = (undefined1 (*) [16])(ulonglong)auVar83._0_4_;
    pauVar41 = (undefined1 (*) [16])(ulonglong)auVar83._4_4_;
    goto code_r0x000140a392ce;
  case 0x26:
    goto code_r0x000140a3932a;
  case 0x27:
    goto code_r0x000140a39467;
  case 0x28:
    UNRECOVERED_JUMPTABLE_00 = (code *)((longlong)*pauVar69 + 1);
    *(undefined4 *)UNRECOVERED_JUMPTABLE_00 = *(undefined4 *)UNRECOVERED_JUMPTABLE_00;
    UNRECOVERED_JUMPTABLE_00 = (code *)((longlong)*pauVar36 + 3);
    *UNRECOVERED_JUMPTABLE_00 = (code)((char)*UNRECOVERED_JUMPTABLE_00 + bVar34);
    UNRECOVERED_JUMPTABLE_00 = (code *)((longlong)pauVar36[-8] + 0xb);
    *UNRECOVERED_JUMPTABLE_00 = (code)((byte)*UNRECOVERED_JUMPTABLE_00 ^ (byte)pauVar72);
    pauStack_2f0 = pauVar64;
    pbVar3 = (byte *)((longlong)pauVar63[-8] + 0xb);
    *pbVar3 = *pbVar3 & bVar34;
    pcVar1 = (char *)((longlong)pauVar63[3] + 1);
    *pcVar1 = *pcVar1 - (char)param_9;
    ppuVar56 = (undefined **)((longlong)*pauVar63 + 8);
    if (pauVar41 <= pauVar29) {
      ppuVar56 = (undefined **)((longlong)*pauVar63 + 8);
      pauVar72 = pauVar41;
    }
    goto code_r0x000140a393de;
  case 0x29:
    *(int *)pauVar63[-1] = (int)pauVar69;
code_r0x000140a39a24:
    pauVar36 = (undefined1 (*) [16])0x1;
code_r0x000140a39a34:
    pauStack_2f0 = (undefined1 (*) [16])0x140a39a39;
    pdb_142dc7e2a(pauVar36);
    goto LAB_140a39a4c;
  case 0x2a:
    uVar18 = in((short)pauVar41);
    pbVar3 = (byte *)(CONCAT71(uVar33,uVar18) + -0x73);
    *pbVar3 = *pbVar3 & bVar34;
    ppauVar59 = &pauStack_2f0;
    pauStack_2f0 = (undefined1 (*) [16])0x50;
    goto code_r0x000140a39a5c;
  case 0x2b:
    (*pauVar29)[0] = (*pauVar29)[0] + cVar16;
    UNRECOVERED_JUMPTABLE_00 = (code *)((longlong)pauVar41[1] + 3);
    *UNRECOVERED_JUMPTABLE_00 =
         (code)((char)*UNRECOVERED_JUMPTABLE_00 + (char)((ulonglong)pauVar44 >> 8));
    goto code_r0x000140a39a46;
  case 0x2c:
    goto LAB_140a39a4c;
  case 0x2d:
    UNRECOVERED_JUMPTABLE_00 = (code *)swi(1);
    (*UNRECOVERED_JUMPTABLE_00)();
    return;
  case 0x2e:
    (*pauVar29)[0] = (*pauVar29)[0] + cVar16;
    (&UNK_14303b5d3)[auVar106._0_8_] = (&UNK_14303b5d3)[auVar106._0_8_] + bVar34;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x2f:
  case 0x30:
  case 0x31:
code_r0x00014303b630:
    ffree(in_ST1);
    UNRECOVERED_JUMPTABLE_00 = (code *)((longlong)pauVar69[-0x603dfc1] + 0xd);
    uVar39 = *(uint *)UNRECOVERED_JUMPTABLE_00;
    auVar106._0_8_ = (ulonglong)uVar39 << 4;
    *(uint *)UNRECOVERED_JUMPTABLE_00 = uVar39 >> 0x1d | (uint)auVar106._0_8_;
    UNRECOVERED_JUMPTABLE_00 = (code *)((longlong)pauVar69[-0x603bdb1] + 0xd);
    uVar39 = *(uint *)UNRECOVERED_JUMPTABLE_00;
    *(uint *)UNRECOVERED_JUMPTABLE_00 =
         (uint)(CONCAT14((auVar106._0_8_ & 0x100000000) != 0,uVar39) >> 0x1d) | uVar39 << 4;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
code_r0x000140a37a85:
  fVar79 = SQRT((fVar107 - unaff_XMM10_Da) * (fVar107 - unaff_XMM10_Da) +
                (fVar105 - unaff_XMM11_Da) * (fVar105 - unaff_XMM11_Da) +
                (fVar85 - unaff_XMM9_Da) * (fVar85 - unaff_XMM9_Da));
  *(undefined4 *)((longlong)pauVar75[1] + 8) = 1;
  *(float *)((longlong)pauVar75[1] + 0xc) = fVar79;
  *(float *)pauVar75[2] = fVar79;
  *(undefined8 *)((longlong)pauVar75[2] + 4) = 0;
  *(ulonglong *)((longlong)pauVar75[2] + 0xc) = CONCAT44(fVar90,fVar88);
  *(float *)((longlong)pauVar75[3] + 4) = fVar97;
  if (((ulonglong)pauVar36 & 1) != 0) {
code_r0x000140a37a55:
    if (((ulonglong)ppuVar22 & 1) != 0) goto code_r0x000140a37b3c;
code_r0x000140a37cd3:
    uVar38 = SUB84(pauVar64,0);
    bVar34 = (byte)ppuVar22;
    pauVar75 = pauStack_200;
    if (*(int *)pauVar27[1] != 3) goto code_r0x000140a37ef1;
    goto code_r0x000140a37cde;
  }
code_r0x000140a37ad5:
  *(undefined4 *)param_5[2] = *(undefined4 *)((longlong)param_5 + 0x1c);
  pauVar69 = (undefined1 (*) [16])*param_5;
  ppuVar56 = *(undefined ***)pauVar69[3];
  ppuVar7 = *(undefined ***)pauVar69[4];
  if (ppuVar56 == *(undefined ***)pauVar69[2]) {
    pauStack_2f0 = (undefined1 (*) [16])0x140a37b00;
    pdb_142d7e980(pauVar69 + 2);
    ppuVar22 = (undefined **)(ulonglong)bStack_2ae;
  }
  ppuVar26 = *(undefined ***)((longlong)pauVar69[2] + 8);
  ppuVar26[(longlong)ppuVar56 * 2] = (undefined *)ppuVar7;
  *(undefined1 *)(ppuVar26 + (longlong)ppuVar56 * 2 + 1) = 0;
  pauVar25 = (undefined1 (*) [16])((longlong)ppuVar56 + 1);
  *(undefined1 (**) [16])pauVar69[3] = pauVar25;
  *(undefined ***)pauVar69[4] = (undefined **)((longlong)*(undefined ***)pauVar69[4] + 1);
  pauVar74 = pauStack_2a8;
  if (((ulonglong)ppuVar22 & 1) == 0) goto code_r0x000140a37cd3;
code_r0x000140a37b3c:
  fVar79 = 0.0;
  fVar88 = 0.0;
  fVar90 = 0.0;
  fVar94 = 0.0;
  if (*(int *)pauVar27[1] - 1U < 2) {
    puVar5 = (ulonglong *)*puStack_158;
    lVar23 = puStack_158[1];
    auVar106._0_8_ = *puVar5;
    pauVar25 = (undefined1 (*) [16])0x0;
    pauVar75 = (undefined1 (*) [16])(auVar106._0_8_ - *(ulonglong *)(lVar23 + 0x18));
    if (auVar106._0_8_ < *(ulonglong *)(lVar23 + 0x18)) {
      pauVar75 = pauVar25;
    }
    pauVar41 = (undefined1 (*) [16])(auVar106._0_8_ - *(ulonglong *)(lVar23 + 0x38));
    if (auVar106._0_8_ < *(ulonglong *)(lVar23 + 0x38)) {
      pauVar41 = pauVar25;
    }
    pauVar73 = *(undefined1 (**) [16])(lVar23 + 8);
    pauVar72 = *(undefined1 (**) [16])(lVar23 + 0x30);
    bVar66 = pauVar41 <= pauVar72;
    pauVar74 = (undefined1 (*) [16])((longlong)pauVar72 - (longlong)pauVar41);
    pauVar27 = pauVar74;
    if (!bVar66) {
      pauVar27 = pauVar25;
    }
    pauVar36 = *(undefined1 (**) [16])(lVar23 + 0x10);
    pauVar63 = (undefined1 (*) [16])
               CONCAT71((int7)((ulonglong)pauVar63 >> 8),
                        bVar66 && pauVar74 != (undefined1 (*) [16])0x0);
    pauVar29 = (undefined1 (*) [16])((longlong)pauVar36 - (longlong)pauVar75);
    if (pauVar36 < pauVar75) {
      pauVar29 = pauVar25;
    }
    pauVar69 = *(undefined1 (**) [16])(lVar23 + 0x28);
    auVar106._0_8_ = *(ulonglong *)(lVar23 + 0x40);
    *puVar5 = (auVar106._0_8_ - (longlong)pauVar27) - (longlong)pauVar29;
    ppuVar22 = (undefined **)(ulonglong)bStack_2ae;
    pauVar64 = (undefined1 (*) [16])(ulonglong)uStack_2ac;
    param_9 = pauVar27;
    pauVar25 = pauVar29;
    if (pauVar36 >= pauVar75 &&
        (undefined1 (*) [16])((longlong)pauVar36 - (longlong)pauVar75) != (undefined1 (*) [16])0x0
        || bVar66 && pauVar74 != (undefined1 (*) [16])0x0) {
      param_9 = (undefined1 (*) [16])((longlong)pauVar27 * 0x10);
      pauVar69 = pauVar69 + (longlong)pauVar41;
      pauVar25 = (undefined1 (*) [16])((longlong)pauVar29 * 0x10);
      pauVar73 = pauVar73 + (longlong)pauVar75;
      if (pauVar36 < pauVar75) {
        pauVar73 = (undefined1 (*) [16])0x8;
      }
      pauVar73 = pauVar73 + -1 + (longlong)pauVar29;
      pauVar74 = (undefined1 (*) [16])0x0;
      if (pauVar75 < pauVar36) {
        pauVar74 = pauVar73;
      }
      if (pauVar72 < pauVar41) {
        pauVar69 = (undefined1 (*) [16])0x8;
      }
      pauVar75 = pauVar69 + -1 + (longlong)pauVar27;
      if (pauVar72 <= pauVar41) {
        pauVar75 = pauVar74;
      }
      ppuVar22 = (undefined **)(ulonglong)bStack_2ae;
      *puVar5 = auVar106._0_8_;
      uVar37 = *(undefined2 *)(uStack_290 + 0x11f);
      uVar18 = (undefined1)((ushort)uVar37 >> 8);
      auVar81 = ZEXT416(CONCAT22((short)(CONCAT13(uVar18,CONCAT12(uVar18,uVar37)) >> 0x10),
                                 CONCAT11((char)uVar37,(char)uVar37)));
      auVar81 = pshuflw(auVar81,auVar81,0xd4);
      uVar39 = (auVar81._0_4_ << 0x1f) >> 0x1f & _UNK_14303aa30;
      uVar35 = (auVar81._4_4_ << 0x1f) >> 0x1f & _UNK_14303aa34;
      uVar86 = (auVar81._4_4_ << 0x1f) >> 0x1f & _UNK_14303aa38;
      uVar87 = (auVar81._12_4_ << 0x1f) >> 0x1f & _UNK_14303aa3c;
      fVar79 = *(float *)(uStack_290 + 0x108) * _UNK_14303aa40;
      fVar88 = *(float *)(uStack_290 + 0x108) * _UNK_14303aa44;
      fVar79 = SUB84(*(undefined ***)((longlong)*pauVar75 + 8),0) *
               (float)(~uVar39 & (uint)fVar79 | (_DAT_142e37820 ^ (uint)fVar79) & uVar39) + 0.0;
      fVar88 = (float)((ulonglong)*(undefined ***)((longlong)*pauVar75 + 8) >> 0x20) *
               (float)(~uVar35 & (uint)fVar88 | (_UNK_142e37824 ^ (uint)fVar88) & uVar35) + 0.0;
      fVar90 = (float)(~uVar86 & (uint)(_UNK_14303aa48 * 0.0) |
                      (_UNK_142e37828 ^ (uint)(_UNK_14303aa48 * 0.0)) & uVar86) * 0.0 + 0.0;
      fVar94 = (float)(~uVar87 & (uint)(_UNK_14303aa4c * 0.0) |
                      (_UNK_142e3782c ^ (uint)(_UNK_14303aa4c * 0.0)) & uVar87) * 0.0 + 0.0;
    }
  }
  auVar81._0_4_ =
       *(float *)(uStack_290 + 0x108) *
       SUB84(*(undefined ***)((longlong)pauStack_2a0[0x17] + 8),0) * _DAT_14303aa50 + fVar79;
  auVar81._4_4_ =
       *(float *)(uStack_290 + 0x108) *
       (float)((ulonglong)*(undefined ***)((longlong)pauStack_2a0[0x17] + 8) >> 0x20) *
       _UNK_14303aa54 + fVar88;
  auVar81._8_4_ = _UNK_14303aa58 * 0.0 * 0.0 + fVar90;
  auVar81._12_4_ = _UNK_14303aa5c * 0.0 * 0.0 + fVar94;
  auVar100._4_4_ = auVar81._4_4_;
  auVar100._0_4_ = auVar81._4_4_;
  auVar100._8_4_ = auVar81._12_4_;
  auVar100._12_4_ = auVar81._12_4_;
  pauVar74 = pauStack_2a8;
  pauVar27 = pauStack_2a0;
  if (((auVar81._0_4_ == 0.0) && (auVar81._4_4_ == 0.0)) && (!NAN(auVar81._4_4_)))
  goto code_r0x000140a37cd3;
  auVar83._0_4_ = (float)-(uint)(_DAT_14303aa60 < (int)((uint)auVar81._0_4_ & _DAT_142e377e0));
  auVar83._4_4_ = (float)-(uint)(_UNK_14303aa64 < (int)((uint)auVar81._0_4_ & _UNK_142e377e4));
  auVar83._8_4_ = (float)-(uint)(_UNK_14303aa68 < (int)((uint)auVar81._4_4_ & _UNK_142e377e8));
  auVar83._12_4_ = (float)-(uint)(_UNK_14303aa6c < (int)((uint)auVar81._4_4_ & _UNK_142e377ec));
  *(int *)*pauStack_2a8 = (int)pauVar64;
  auVar106._0_8_ = uStack_290;
  pauVar75 = pauStack_200;
code_r0x000140a37d80:
  iVar19 = movmskpd((int)auVar106._0_8_,auVar83);
  pauVar67 = pauVar69;
  if (iVar19 != 0) goto code_r0x000140a37e99;
code_r0x000140a37d90:
  uVar42 = auVar81._0_8_;
  pauVar29 = (undefined1 (*) [16])&UNK_143397930;
  pauVar41 = (undefined1 (*) [16])&UNK_14303b660;
  auVar106._0_8_ = (ulonglong)*(int *)(&UNK_14303b660 + (ulonglong)(byte)pauVar44[0x4d][0] * 4);
  pauVar36 = (undefined1 (*) [16])(&UNK_14303b660 + auVar106._0_8_);
  cVar17 = (char)pauVar36;
  uVar33 = (undefined7)((ulonglong)pauVar36 >> 8);
  uVar39 = (uint)ppuVar22;
  ppauVar60 = (undefined1 (**) [16])afStack_2e8;
  pauVar69 = pauVar67;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(pauVar44[0x4d][0]) {
  case 0:
    pauVar36 = pauVar44 + 0x10;
    break;
  case 1:
    pauVar36 = (undefined1 (*) [16])((longlong)pauVar44[0x1b] + 8);
    break;
  case 2:
    pauVar69 = (undefined1 (*) [16])((ulonglong)ppuVar22 & 0xffffffff);
    pauVar36 = pauVar44 + 0x27;
code_r0x000140a37e5a:
    uVar39 = (uint)pauVar69;
    pauVar29 = (undefined1 (*) [16])&UNK_143397968;
    break;
  case 3:
    pauVar69 = (undefined1 (*) [16])((ulonglong)ppuVar22 & 0xffffffff);
code_r0x000140a37e66:
    uVar39 = (uint)pauVar69;
    pauVar36 = pauVar44 + 0x2f;
    pauVar29 = (undefined1 (*) [16])&UNK_1433979d8;
    break;
  case 4:
    pauVar36 = pauVar44 + 0x39;
    break;
  case 5:
    pauVar36 = (undefined1 (*) [16])((longlong)pauVar44[0x44] + 8);
    pauVar29 = (undefined1 (*) [16])&UNK_1433979a0;
    break;
  case 6:
    UNK_1433978bd = UNK_1433978bd + cVar17;
    goto code_r0x000140a3819a;
  case 7:
    pauVar29 = (undefined1 (*) [16])0x43397968;
    goto code_r0x000140a38201;
  case 8:
    pauVar36 = (undefined1 (*) [16])(CONCAT71(uVar33,UNK_143397931) + -1);
    if (pauVar36 == (undefined1 (*) [16])0x0 || (int)pauVar67 >> 1 != 0) {
      pauVar36 = (undefined1 (*) [16])(ulonglong)(iVar20 + 0x100);
    }
    goto code_r0x000140a38201;
  case 9:
    pauVar36 = (undefined1 (*) [16])(ulonglong)(iVar20 + 0x390);
    goto code_r0x000140a38201;
  case 10:
    pauVar41 = (undefined1 (*) [16])0x4303b678;
    goto code_r0x000140a381af;
  case 0xb:
    pauVar36 = (undefined1 (*) [16])(ulonglong)(iVar20 + 0x2f0);
    pauVar29 = (undefined1 (*) [16])&UNK_1433979d8;
code_r0x000140a38201:
    pauStack_2f0 = (undefined1 (*) [16])0x140a38219;
    pauStack_2c8 = pauVar44;
    (*(code *)*(undefined ***)((longlong)pauVar29[2] + 8))(pauVar36);
    *puStack_208 = uStack_294;
    ppuVar22 = *(undefined ***)pauVar75[3];
    ppuVar56 = *(undefined ***)pauVar75[4];
    if (ppuVar22 == *(undefined ***)pauVar75[2]) {
      pauStack_2f0 = (undefined1 (*) [16])0x140a3823e;
      pdb_142d7e980(pauVar75 + 2);
    }
    ppuVar7 = *(undefined ***)((longlong)pauVar75[2] + 8);
    *(undefined4 *)(ppuVar7 + (longlong)ppuVar22 * 2) = 0;
    ppuVar7[(longlong)ppuVar22 * 2 + 1] = (undefined *)ppuVar56;
    *(undefined ***)pauVar75[3] = (undefined **)((longlong)ppuVar22 + 1);
    *(undefined ***)pauVar75[4] = (undefined **)((longlong)*(undefined ***)pauVar75[4] + 1);
    goto code_r0x000140a38260;
  case 0xc:
    goto code_r0x000140a38800;
  case 0xd:
    pauVar69 = (undefined1 (*) [16])((ulonglong)pauVar67 & 0xffffffff);
    goto code_r0x000140a388ab;
  case 0xe:
    goto code_r0x000140a38829;
  case 0xf:
code_r0x000140a3883f:
    pfVar46 = afStack_2e8;
    pauVar67 = pauVar69;
    goto code_r0x000140a388ab;
  case 0x10:
    (*pauVar36)[0] = (*pauVar36)[0] + '0';
    _UNK_143397930 = CONCAT31(_UNK_143397931,UNK_143397930 + '0');
    goto code_r0x000140a38814;
  case 0x11:
    pauVar74 = (undefined1 (*) [16])0x1c4;
    pauVar69 = pauVar29;
    pfVar46 = afStack_2e8;
code_r0x000140a388ab:
    ppuVar56 = *(undefined ***)pauVar69[3];
    *(undefined8 *)((longlong)pfVar46 + -8) = 0x140a388bc;
    (*(code *)ppuVar56)((undefined1 *)((longlong)pfVar46 + 0x220));
    auVar84._0_4_ = auVar82._0_4_ / _DAT_142f60fec;
    auVar84._4_12_ = auVar82._4_12_;
    *(undefined8 *)((longlong)pfVar46 + -8) = 0x140a388cc;
    fVar88 = (float)pub_142e32a20(auVar84._0_8_);
    fVar79 = _DAT_142e36f28;
    uVar42 = *(undefined8 *)((code *)((longlong)pauVar44[0x10] + 4) + (longlong)pauVar74);
    *(float *)((code *)((longlong)pauVar44[0x10] + 4) + (longlong)pauVar74) =
         (_DAT_142e36f28 - fVar88) * (float)((ulonglong)uVar42 >> 0x20) +
         (_DAT_142e36f28 - (_DAT_142e36f28 - fVar88)) * (float)uVar42;
    UNRECOVERED_JUMPTABLE_00 = (code *)((longlong)*pauVar74 + (longlong)*pauVar25);
    uVar42 = *(undefined8 *)UNRECOVERED_JUMPTABLE_00;
    uVar31 = *(undefined8 *)(UNRECOVERED_JUMPTABLE_00 + 8);
    UNRECOVERED_JUMPTABLE_00 = (code *)((longlong)*pauVar74 + (longlong)pauVar25[1]);
    uVar9 = *(undefined8 *)UNRECOVERED_JUMPTABLE_00;
    uVar10 = *(undefined8 *)(UNRECOVERED_JUMPTABLE_00 + 8);
    UNRECOVERED_JUMPTABLE_00 = (code *)((longlong)pauVar25[1] + 0xc) + (longlong)pauVar74;
    uVar11 = *(undefined8 *)(UNRECOVERED_JUMPTABLE_00 + 8);
    *(undefined8 *)((longlong)pfVar46 + 0x7c) = *(undefined8 *)UNRECOVERED_JUMPTABLE_00;
    *(undefined8 *)((longlong)pfVar46 + 0x84) = uVar11;
    *(undefined8 *)((longlong)pfVar46 + 0x70) = uVar9;
    *(undefined8 *)((longlong)pfVar46 + 0x78) = uVar10;
    *(undefined8 *)((longlong)pfVar46 + 0x60) = uVar42;
    *(undefined8 *)((longlong)pfVar46 + 0x68) = uVar31;
    *(undefined8 *)((longlong)pfVar46 + -8) = 0x140a38933;
    fVar88 = (float)pdb_140dee660((undefined1 *)((longlong)pfVar46 + 0x60));
    *(undefined8 *)((longlong)pfVar46 + -8) = 0x140a38956;
    fVar96 = (float)pub_142e329e0();
    *(undefined8 *)((longlong)pfVar46 + -8) = 0x140a38963;
    fVar102 = (float)pub_142e32b30();
    fVar96 = fVar96 / fVar102;
    fVar102 = fVar96 / *(float *)((longlong)pauVar44[0x4d] + 8);
    *(undefined8 *)((longlong)pfVar46 + -8) = 0x140a38982;
    pdb_140e07bc0((undefined1 *)((longlong)pfVar46 + 0x60),(undefined1 *)((longlong)pfVar46 + 0x220)
                 );
    *(undefined8 *)((longlong)pfVar46 + 0x170) = *(undefined8 *)((longlong)pfVar46 + 0x90);
    *(undefined8 *)((longlong)pfVar46 + 0x178) = *(undefined8 *)((longlong)pfVar46 + 0x98);
    *(undefined8 *)((longlong)pfVar46 + 0x160) = *(undefined8 *)((longlong)pfVar46 + 0x80);
    *(undefined8 *)((longlong)pfVar46 + 0x168) = *(undefined8 *)((longlong)pfVar46 + 0x88);
    *(undefined8 *)((longlong)pfVar46 + 0x150) = *(undefined8 *)((longlong)pfVar46 + 0x70);
    *(undefined8 *)((longlong)pfVar46 + 0x158) = *(undefined8 *)((longlong)pfVar46 + 0x78);
    *(undefined8 *)((longlong)pfVar46 + 0x140) = *(undefined8 *)((longlong)pfVar46 + 0x60);
    *(undefined8 *)((longlong)pfVar46 + 0x148) = *(undefined8 *)((longlong)pfVar46 + 0x68);
    *(undefined8 *)((longlong)pfVar46 + 0x100) = *(undefined8 *)((longlong)pfVar46 + 0xa0);
    *(undefined8 *)((longlong)pfVar46 + 0x108) = *(undefined8 *)((longlong)pfVar46 + 0xa8);
    *(undefined8 *)((longlong)pfVar46 + 0x110) = *(undefined8 *)((longlong)pfVar46 + 0xb0);
    *(undefined8 *)((longlong)pfVar46 + 0x118) = *(undefined8 *)((longlong)pfVar46 + 0xb8);
    *(undefined8 *)((longlong)pfVar46 + 0x120) = *(undefined8 *)((longlong)pfVar46 + 0xc0);
    *(undefined8 *)((longlong)pfVar46 + 0x128) = *(undefined8 *)((longlong)pfVar46 + 200);
    *(undefined8 *)((longlong)pfVar46 + 0x130) = *(undefined8 *)((longlong)pfVar46 + 0xd0);
    *(undefined8 *)((longlong)pfVar46 + 0x138) = *(undefined8 *)((longlong)pfVar46 + 0xd8);
    *pauVar44 = ZEXT416((uint)fVar102);
    pauVar44[1] = ZEXT416((uint)fVar96) << 0x20;
    ppuVar56 = _UNK_142e37ab8;
    *(undefined ***)pauVar44[2] = _DAT_142e37ab0;
    *(undefined ***)((longlong)pauVar44[2] + 8) = ppuVar56;
    pauVar44[3] = ZEXT416((uint)fVar88) << 0x40;
    pauVar44[4] = ZEXT416((uint)(fVar79 / fVar102));
    pauVar44[5] = ZEXT416((uint)(fVar79 / fVar96)) << 0x20;
    *(undefined4 *)pauVar44[6] = 0;
    *(undefined4 *)((longlong)pauVar44[6] + 4) = 0;
    *(undefined4 *)((longlong)pauVar44[6] + 8) = 0;
    *(float *)((longlong)pauVar44[6] + 0xc) = fVar79 / fVar88;
    ppuVar56 = _UNK_142e37ac8;
    *(undefined ***)pauVar44[7] = _DAT_142e37ac0;
    *(undefined ***)((longlong)pauVar44[7] + 8) = ppuVar56;
    ppuVar56 = *(undefined ***)((longlong)pfVar46 + 0x148);
    ppuVar7 = *(undefined ***)((longlong)pfVar46 + 0x150);
    ppuVar26 = *(undefined ***)((longlong)pfVar46 + 0x158);
    ppuVar12 = *(undefined ***)((longlong)pfVar46 + 0x160);
    ppuVar13 = *(undefined ***)((longlong)pfVar46 + 0x168);
    fVar96 = *(float *)((longlong)pfVar46 + 0x170);
    fVar102 = *(float *)((longlong)pfVar46 + 0x174);
    fVar103 = *(float *)((longlong)pfVar46 + 0x178);
    fVar79 = *(float *)((longlong)pfVar46 + 0x17c);
    *(undefined ***)pauVar44[8] = *(undefined ***)((longlong)pfVar46 + 0x140);
    *(undefined ***)((longlong)pauVar44[8] + 8) = ppuVar56;
    *(undefined ***)pauVar44[9] = ppuVar7;
    *(undefined ***)((longlong)pauVar44[9] + 8) = ppuVar26;
    *(undefined ***)pauVar44[10] = ppuVar12;
    *(undefined ***)((longlong)pauVar44[10] + 8) = ppuVar13;
    pfVar47 = pfVar46;
code_r0x000140a38ab2:
    *(float *)pauVar44[0xb] = fVar96;
    *(float *)((longlong)pauVar44[0xb] + 4) = fVar102;
    *(float *)((longlong)pauVar44[0xb] + 8) = fVar103;
    *(float *)((longlong)pauVar44[0xb] + 0xc) = fVar79;
code_r0x000140a38ab9:
    auVar83 = *(undefined1 (*) [16])((longlong)pfVar47 + 0x100);
    auVar81 = *(undefined1 (*) [16])((longlong)pfVar47 + 0x110);
    auVar100 = *(undefined1 (*) [16])((longlong)pfVar47 + 0x120);
    fVar96 = *(float *)((longlong)pfVar47 + 0x130);
    fVar102 = *(float *)((longlong)pfVar47 + 0x134);
    fVar103 = *(float *)((longlong)pfVar47 + 0x138);
    fVar89 = *(float *)((longlong)pfVar47 + 0x13c);
    pauVar44[0xc] = auVar83;
    pfVar49 = pfVar47;
code_r0x000140a38ae0:
    pauVar44[0xd] = auVar81;
code_r0x000140a38ae7:
    pauVar44[0xe] = auVar100;
    pfVar50 = pfVar49;
    pauVar69 = pauVar67;
code_r0x000140a38aee:
    *(float *)pauVar44[0xf] = fVar96;
    *(float *)((longlong)pauVar44[0xf] + 4) = fVar102;
    *(float *)((longlong)pauVar44[0xf] + 8) = fVar103;
    *(float *)((longlong)pauVar44[0xf] + 0xc) = fVar89;
    **(undefined4 **)((longlong)pfVar50 + 0x40) = (int)pauVar64;
    ppauVar60 = (undefined1 (**) [16])pfVar50;
    goto code_r0x000140a38afc;
  case 0x12:
    ppauVar60 = (undefined1 (**) [16])afStack_2e8;
    goto code_r0x000140a38afc;
  case 0x13:
code_r0x000140a38ada:
    *(int *)pauVar44[0xc] = *(int *)pauVar44[0xc] - (int)pauVar29;
    pfVar49 = afStack_2e8;
    pauVar67 = pauVar69;
    goto code_r0x000140a38ae0;
  case 0x14:
code_r0x000140a38aec:
    (*pauVar29)[0] = (*pauVar29)[0] + (char)pauVar29;
    pfVar50 = afStack_2e8;
    pauVar69 = pauVar67;
    goto code_r0x000140a38aee;
  case 0x15:
    goto code_r0x000140a38afc;
  case 0x16:
    _UNK_143397930 =
         CONCAT31(_UNK_143397931,(UNK_143397930 << 1 | (char)UNK_143397930 < '\0') + 0x30);
    goto code_r0x000140a38ae7;
  case 0x17:
    bRam000000028672f260 = bRam000000028672f260 << 1 | (char)bRam000000028672f260 < '\0';
    UNK_1433978bd = UNK_1433978bd + cVar17;
    ppauVar60 = (undefined1 (**) [16])afStack_2e8;
code_r0x000140a38afc:
    uVar39 = auVar83._0_4_;
    uVar71 = SUB84(pauVar72,0);
    uVar42 = auVar81._0_8_;
    bVar34 = *(byte *)((longlong)ppauVar60[0x39] + 0x98);
    pauVar29 = (undefined1 (*) [16])(ulonglong)bVar34;
    pauVar41 = (undefined1 (*) [16])&UNK_14303b6a8;
    pauVar36 = (undefined1 (*) [16])
               (&UNK_14303b6a8 + *(int *)(&UNK_14303b6a8 + (ulonglong)(byte)pauVar44[0x4d][0] * 4));
    pfVar55 = (float *)ppauVar60;
    pfVar61 = (float *)ppauVar60;
    pauVar67 = pauVar69;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(pauVar44[0x4d][0]) {
    case 0:
      break;
    case 1:
      pauVar25 = (undefined1 (*) [16])((longlong)pauVar44[0x1b] + 8);
      break;
    case 2:
      pauVar25 = pauVar44 + 0x27;
      pauVar69 = (undefined1 (*) [16])&UNK_143397968;
      break;
    case 3:
      pauVar25 = pauVar44 + 0x2f;
      pauVar69 = (undefined1 (*) [16])&UNK_1433979d8;
      break;
    case 4:
      pauVar25 = pauVar44 + 0x39;
      break;
    case 5:
      pauVar25 = (undefined1 (*) [16])((longlong)pauVar44[0x44] + 8);
      pauVar69 = (undefined1 (*) [16])&UNK_1433979a0;
      break;
    case 6:
code_r0x000140a38da5:
      UNRECOVERED_JUMPTABLE_00 = (code *)((longlong)pauVar29[-8] + 0xd);
      *UNRECOVERED_JUMPTABLE_00 = (code)((char)*UNRECOVERED_JUMPTABLE_00 + (char)pauVar36);
      pauVar29 = (undefined1 (*) [16])(ulonglong)((int)pauVar29 + 0x295eb83);
      pfVar61 = pfVar55;
      pauVar69 = pauVar67;
code_r0x000140a38d8e:
      uVar71 = SUB84(pauVar72,0);
      *(int *)((longlong)pauVar69[0x4d] + 8) = auVar83._0_4_;
      *(int *)*pauVar36 = (int)pauVar29;
      pauVar44 = pauVar69 + 0x10;
      pauVar29 = (undefined1 (*) [16])&UNK_143397930;
      pauVar41 = (undefined1 (*) [16])&UNK_14303b6c0;
      pauVar36 = (undefined1 (*) [16])
                 (&UNK_14303b6c0 + *(int *)(&UNK_14303b6c0 + (ulonglong)(byte)pauVar69[0x4d][0] * 4)
                 );
      ppauVar60 = (undefined1 (**) [16])pfVar61;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
      switch(pauVar69[0x4d][0]) {
      case 0:
        goto code_r0x000140a38dbd;
      case 1:
        goto code_r0x000140a38e03;
      case 2:
        pauVar41 = pauVar69 + 0x27;
        pauVar29 = (undefined1 (*) [16])&UNK_143397968;
        pauVar25 = (undefined1 (*) [16])0x1c4;
        goto code_r0x000140a38deb;
      case 3:
        pauVar41 = pauVar69 + 0x2f;
        pauVar29 = (undefined1 (*) [16])&UNK_1433979d8;
        pauVar25 = (undefined1 (*) [16])0x264;
        break;
      case 4:
        pauVar41 = pauVar69 + 0x39;
        pauVar25 = (undefined1 (*) [16])0x31c;
        goto code_r0x000140a38dd5;
      case 5:
        pauVar41 = (undefined1 (*) [16])((longlong)pauVar69[0x44] + 8);
        pauVar29 = (undefined1 (*) [16])&UNK_1433979a0;
        pauVar25 = (undefined1 (*) [16])0x3a4;
        break;
      case 6:
      case 7:
        _UNK_143397930 = _UNK_143397930 + 0x43397930;
        cVar17 = UNK_143397930 + '0';
        _UNK_143397931 = (undefined3)((uint)_UNK_143397930 >> 8);
        _UNK_143397930 = CONCAT31(_UNK_143397931,cVar17);
        bVar66 = cVar17 < '\0';
        goto code_r0x000140a39332;
      case 8:
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      case 9:
        pauVar29 = (undefined1 (*) [16])0x433ffb3c;
        goto code_r0x000140a39467;
      case 10:
        ppuVar56 = (undefined **)((longlong)pfVar61 + -8);
        *(float **)((longlong)pfVar61 + -8) = pfVar61;
        pauVar29 = (undefined1 (*) [16])&UNK_143397920;
        goto code_r0x000140a3943e;
      case 0xb:
        goto code_r0x000140a39a9f;
      case 0xc:
        goto code_r0x000140a39ad2;
      case 0xd:
        goto code_r0x000140a39ab6;
      case 0xe:
        puVar30 = &UNK_1433979b1;
        goto code_r0x000140a39ac6;
      case 0xf:
        UNRECOVERED_JUMPTABLE_00 = (code *)swi(3);
        (*UNRECOVERED_JUMPTABLE_00)();
        return;
      case 0x10:
        uVar42 = 0x2f;
        goto code_r0x000140a39b18;
      default:
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      goto code_r0x000140a38e26;
    case 7:
code_r0x000140a38deb:
      ppauVar60 = (undefined1 (**) [16])pfVar61;
      goto code_r0x000140a38e26;
    case 8:
      *(undefined2 *)*pauVar29 = in_ES;
      (*pauVar29)[0] = (*pauVar29)[0] + bVar34;
code_r0x000140a38dbd:
      pauVar41 = pauVar44;
      pauVar25 = (undefined1 (*) [16])0x8c;
      pauVar44 = pauVar41;
code_r0x000140a38e26:
      ppuVar22 = *(undefined ***)pauVar29[3];
      *(undefined8 *)((longlong)ppauVar60 + -8) = 0x140a38e3a;
      (*(code *)ppuVar22)((undefined1 *)((longlong)ppauVar60 + 0x120),pauVar41);
      *(float *)((code *)((longlong)pauVar69[0x10] + 4) + (longlong)pauVar25) =
           *(float *)((longlong)((longlong)pauVar69[0x10] + 8) + (longlong)pauVar25) * 0.0 +
           *(float *)((code *)((longlong)pauVar69[0x10] + 4) + (longlong)pauVar25);
      UNRECOVERED_JUMPTABLE_00 = (code *)((longlong)*pauVar25 + (longlong)*pauVar44);
      uVar42 = *(undefined8 *)UNRECOVERED_JUMPTABLE_00;
      uVar31 = *(undefined8 *)(UNRECOVERED_JUMPTABLE_00 + 8);
      UNRECOVERED_JUMPTABLE_00 = (code *)((longlong)*pauVar25 + (longlong)pauVar44[1]);
      uVar9 = *(undefined8 *)UNRECOVERED_JUMPTABLE_00;
      uVar10 = *(undefined8 *)(UNRECOVERED_JUMPTABLE_00 + 8);
      UNRECOVERED_JUMPTABLE_00 = (code *)((longlong)pauVar44[1] + 0xc) + (longlong)pauVar25;
      uVar11 = *(undefined8 *)(UNRECOVERED_JUMPTABLE_00 + 8);
      *(undefined8 *)((longlong)ppauVar60 + 0xbc) = *(undefined8 *)UNRECOVERED_JUMPTABLE_00;
      *(undefined8 *)((longlong)ppauVar60 + 0xc4) = uVar11;
      *(undefined8 *)((longlong)ppauVar60 + 0xb0) = uVar9;
      *(undefined8 *)((longlong)ppauVar60 + 0xb8) = uVar10;
      *(undefined8 *)((longlong)ppauVar60 + 0xa0) = uVar42;
      *(undefined8 *)((longlong)ppauVar60 + 0xa8) = uVar31;
      *(undefined8 *)((longlong)ppauVar60 + -8) = 0x140a38e90;
      fVar79 = (float)pdb_140dee660((undefined1 *)((longlong)ppauVar60 + 0xa0));
      *(undefined8 *)((longlong)ppauVar60 + -8) = 0x140a38eaf;
      fVar88 = (float)pub_142e329e0();
      *(undefined8 *)((longlong)ppauVar60 + -8) = 0x140a38ebb;
      fVar96 = (float)pub_142e32b30();
      fVar88 = fVar88 / fVar96;
      fVar102 = fVar88 / *(float *)((longlong)pauVar69[0x4d] + 8);
      *(undefined8 *)((longlong)ppauVar60 + -8) = 0x140a38edc;
      pdb_140e07bc0((undefined1 *)((longlong)ppauVar60 + 0xa0),
                    (undefined1 *)((longlong)ppauVar60 + 0x120));
      fVar89 = _DAT_142e36f28 / fVar102;
      fVar103 = _DAT_142e36f28 / fVar88;
      fVar96 = _DAT_142e36f28 / fVar79;
      *(undefined8 *)((longlong)ppauVar60 + 0x90) = *(undefined8 *)((longlong)ppauVar60 + 0xd0);
      *(undefined8 *)((longlong)ppauVar60 + 0x98) = *(undefined8 *)((longlong)ppauVar60 + 0xd8);
      *(undefined8 *)((longlong)ppauVar60 + 0x80) = *(undefined8 *)((longlong)ppauVar60 + 0xc0);
      *(undefined8 *)((longlong)ppauVar60 + 0x88) = *(undefined8 *)((longlong)ppauVar60 + 200);
      *(undefined8 *)((longlong)ppauVar60 + 0x70) = *(undefined8 *)((longlong)ppauVar60 + 0xb0);
      *(undefined8 *)((longlong)ppauVar60 + 0x78) = *(undefined8 *)((longlong)ppauVar60 + 0xb8);
      *(undefined8 *)((longlong)ppauVar60 + 0x60) = *(undefined8 *)((longlong)ppauVar60 + 0xa0);
      *(undefined8 *)((longlong)ppauVar60 + 0x68) = *(undefined8 *)((longlong)ppauVar60 + 0xa8);
      *(undefined8 *)((longlong)ppauVar60 + 0x20) = *(undefined8 *)((longlong)ppauVar60 + 0xe0);
      *(undefined8 *)((longlong)ppauVar60 + 0x28) = *(undefined8 *)((longlong)ppauVar60 + 0xe8);
      *(undefined8 *)((longlong)ppauVar60 + 0x30) = *(undefined8 *)((longlong)ppauVar60 + 0xf0);
      *(undefined8 *)((longlong)ppauVar60 + 0x38) = *(undefined8 *)((longlong)ppauVar60 + 0xf8);
      *(undefined8 *)((longlong)ppauVar60 + 0x40) = *(undefined8 *)((longlong)ppauVar60 + 0x100);
      *(undefined8 *)((longlong)ppauVar60 + 0x48) = *(undefined8 *)((longlong)ppauVar60 + 0x108);
      *(undefined8 *)((longlong)ppauVar60 + 0x50) = *(undefined8 *)((longlong)ppauVar60 + 0x110);
      *(undefined8 *)((longlong)ppauVar60 + 0x58) = *(undefined8 *)((longlong)ppauVar60 + 0x118);
      *pauVar69 = ZEXT416((uint)fVar102);
      pauVar69[1] = ZEXT416((uint)fVar88) << 0x20;
      ppuVar22 = _UNK_142e37ab8;
      *(undefined ***)pauVar69[2] = _DAT_142e37ab0;
      *(undefined ***)((longlong)pauVar69[2] + 8) = ppuVar22;
      pauVar69[3] = ZEXT416((uint)fVar79) << 0x40;
      pauVar69[4] = ZEXT416((uint)fVar89);
      pauVar69[5] = ZEXT416((uint)fVar103) << 0x20;
      *(undefined4 *)pauVar69[6] = 0;
      *(undefined4 *)((longlong)pauVar69[6] + 4) = 0;
      *(undefined4 *)((longlong)pauVar69[6] + 8) = 0;
      *(float *)((longlong)pauVar69[6] + 0xc) = fVar96;
      ppuVar22 = _UNK_142e37ac8;
      *(undefined ***)pauVar69[7] = _DAT_142e37ac0;
      *(undefined ***)((longlong)pauVar69[7] + 8) = ppuVar22;
      ppuVar22 = *(undefined ***)((longlong)ppauVar60 + 0x68);
      ppuVar56 = *(undefined ***)((longlong)ppauVar60 + 0x70);
      ppuVar7 = *(undefined ***)((longlong)ppauVar60 + 0x78);
      ppuVar26 = *(undefined ***)((longlong)ppauVar60 + 0x80);
      ppuVar12 = *(undefined ***)((longlong)ppauVar60 + 0x88);
      ppuVar13 = *(undefined ***)((longlong)ppauVar60 + 0x90);
      ppuVar14 = *(undefined ***)((longlong)ppauVar60 + 0x98);
      *(undefined ***)pauVar69[8] = *(undefined ***)((longlong)ppauVar60 + 0x60);
      *(undefined ***)((longlong)pauVar69[8] + 8) = ppuVar22;
      *(undefined ***)pauVar69[9] = ppuVar56;
      *(undefined ***)((longlong)pauVar69[9] + 8) = ppuVar7;
      *(undefined ***)pauVar69[10] = ppuVar26;
      *(undefined ***)((longlong)pauVar69[10] + 8) = ppuVar12;
      *(undefined ***)pauVar69[0xb] = ppuVar13;
      *(undefined ***)((longlong)pauVar69[0xb] + 8) = ppuVar14;
      ppuVar22 = *(undefined ***)((longlong)ppauVar60 + 0x28);
      ppuVar56 = *(undefined ***)((longlong)ppauVar60 + 0x30);
      ppuVar7 = *(undefined ***)((longlong)ppauVar60 + 0x38);
      ppuVar26 = *(undefined ***)((longlong)ppauVar60 + 0x40);
      ppuVar12 = *(undefined ***)((longlong)ppauVar60 + 0x48);
      ppuVar13 = *(undefined ***)((longlong)ppauVar60 + 0x50);
      ppuVar14 = *(undefined ***)((longlong)ppauVar60 + 0x58);
      *(undefined ***)pauVar69[0xc] = *(undefined ***)((longlong)ppauVar60 + 0x20);
      *(undefined ***)((longlong)pauVar69[0xc] + 8) = ppuVar22;
      *(undefined ***)pauVar69[0xd] = ppuVar56;
      *(undefined ***)((longlong)pauVar69[0xd] + 8) = ppuVar7;
      *(undefined ***)pauVar69[0xe] = ppuVar26;
      *(undefined ***)((longlong)pauVar69[0xe] + 8) = ppuVar12;
      *(undefined ***)pauVar69[0xf] = ppuVar13;
      *(undefined ***)((longlong)pauVar69[0xf] + 8) = ppuVar14;
      return;
    case 9:
code_r0x000140a38dd5:
      ppauVar60 = (undefined1 (**) [16])pfVar61;
      goto code_r0x000140a38e26;
    case 10:
code_r0x000140a38db2:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0xb:
      pauVar69 = (undefined1 (*) [16])
                 (ulonglong)
                 (byte)(bVar34 + (&UNK_14303b666)
                                 [*(int *)(&UNK_14303b6a8 + (ulonglong)(byte)pauVar44[0x4d][0] * 4)]
                       + *(char *)(in_FS_OFFSET +
                                  (ulonglong)
                                  (byte)(bVar34 + (&UNK_14303b666)
                                                  [*(int *)(&UNK_14303b6a8 +
                                                           (ulonglong)(byte)pauVar44[0x4d][0] * 4)])
                                  ));
      pauVar44 = (undefined1 (*) [16])
                 CONCAT71((int7)((ulonglong)pauVar44 >> 8),cVar43 + (char)((ulonglong)pauVar36 >> 8)
                         );
      pauVar29 = (undefined1 (*) [16])0x41000001;
code_r0x000140a38e03:
      pauVar41 = (undefined1 (*) [16])((longlong)pauVar69[0x1b] + 8);
      pauVar25 = (undefined1 (*) [16])0x144;
      goto code_r0x000140a38e26;
    case 0xc:
    case 0xd:
code_r0x000140a39316:
      *(undefined8 *)((longlong)pauVar29[2] + 0xc) = uVar42;
      *(uint *)((longlong)pauVar29[3] + 4) = uVar39;
LAB_140a39320:
      pauVar29 = *(undefined1 (**) [16])pauVar25[4];
      pauVar74 = (undefined1 (*) [16])
                 ((ulonglong)((longlong)pauVar74[-1] + 0xf) ^ (ulonglong)pauVar29);
code_r0x000140a3932a:
      bVar66 = (longlong)pauVar29 < 0;
      pauVar29 = (undefined1 (*) [16])0x1;
code_r0x000140a39332:
      if (bVar66) {
        pauVar29 = pauVar74;
      }
code_r0x000140a39336:
                    /* WARNING: Could not recover jumptable at 0x000140a39344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(&UNK_14303b6d8 + *(int *)(&UNK_14303b6d8 + (longlong)pauVar29 * 4)))();
      return;
    case 0xe:
      *(uint *)param_9[0x14303b6f] = uVar39;
      ppuVar22 = *(undefined ***)((longlong)*pauVar29 + 8);
      *(undefined4 *)((longlong)param_9[0x14303b6f] + 0xc) = *(undefined4 *)pauVar29[1];
      *(undefined ***)((longlong)param_9[0x14303b6f] + 4) = ppuVar22;
      pauVar72 = *(undefined1 (**) [16])((longlong)pauVar29[1] + 4);
      pauVar73 = (undefined1 (*) [16])(ulonglong)*(uint *)((longlong)pauVar29[1] + 0xc);
code_r0x000140a393ab:
      *(int *)((longlong)*pauVar41 + (longlong)param_9[6]) = (int)pauVar73;
      *(undefined1 (**) [16])((longlong)((longlong)param_9[5] + 8) + (longlong)pauVar41) = pauVar72;
      goto code_r0x000140a39456;
    case 0xf:
      pauVar36 = (undefined1 (*) [16])
                 CONCAT71((int7)((ulonglong)pauVar36 >> 8),(char)pauVar36 - bVar34);
      goto code_r0x000140a39467;
    case 0x10:
      ppuVar56 = (undefined **)*ppauVar60;
      pauVar29 = (undefined1 (*) [16])((ulonglong)pauVar29 & 0xffffffffffffff28);
code_r0x000140a39426:
      *(undefined ***)((longlong)*pauVar29 + 8) = ppuVar22;
      *(undefined4 *)((longlong)ppuVar56 + 0x30) =
           *(undefined4 *)((longlong)*pauVar41 + (longlong)param_9[6]);
      *(undefined8 *)((longlong)ppuVar56 + 0x28) =
           *(undefined8 *)((longlong)((longlong)param_9[5] + 8) + (longlong)pauVar41);
code_r0x000140a3943e:
      *(undefined4 *)*pauVar73 = uVar71;
      *(undefined4 *)((longlong)pauVar29[1] + 0xc) = *(undefined4 *)((longlong)ppuVar56 + 0x30);
      *(undefined8 *)((longlong)pauVar29[1] + 4) = *(undefined8 *)((longlong)ppuVar56 + 0x28);
code_r0x000140a39456:
      pauVar41 = *(undefined1 (**) [16])*pauVar44;
      param_9 = (undefined1 (*) [16])(ulonglong)*(uint *)*pauVar41;
code_r0x000140a3945c:
      auVar81 = ZEXT416((uint)(float)(longlong)param_9);
      param_9 = *(undefined1 (**) [16])*pauVar69;
code_r0x000140a39467:
      fVar79 = *(float *)*param_9 / auVar81._0_4_;
      fVar88 = *(float *)((longlong)*param_9 + 4) / (float)*(uint *)((longlong)*pauVar41 + 4);
      ppuVar22 = *(undefined ***)*pauVar64;
      fVar97 = fVar79 + fVar79 + _DAT_142e36f34;
      fVar98 = fVar88 + fVar88 + _DAT_142e36f34;
      fVar88 = *(float *)(ppuVar22 + 9);
      fVar96 = *(float *)((longlong)ppuVar22 + 0x4c);
      fVar102 = *(float *)(ppuVar22 + 0xb);
      fVar103 = *(float *)((longlong)ppuVar22 + 0x5c);
      fVar79 = *(float *)*pauVar29;
      fVar89 = *(float *)(ppuVar22 + 0xd);
      fVar90 = *(float *)((longlong)ppuVar22 + 0x6c);
      fVar94 = *(float *)(ppuVar22 + 0xf);
      fVar95 = *(float *)((longlong)ppuVar22 + 0x7c);
      *(undefined4 *)*(undefined ***)pauVar36[1] = *(undefined4 *)((longlong)pauVar36[1] + 0xc);
      *(uint *)((longlong)*pauVar29 + 4) =
           (uint)((fVar79 * fVar89 + (fVar97 * fVar88 - fVar98 * fVar102) + fVar94) /
                 (fVar79 * fVar90 + (fVar97 * fVar96 - fVar98 * fVar103) + fVar95)) ^ _DAT_142e37820
      ;
      return;
    case 0x11:
code_r0x000140a39a87:
      *(undefined1 (**) [16])((longlong)ppauVar60 + -8) = pauVar67;
      *(undefined8 *)((longlong)ppauVar60 + -0x30) = 0x140a39a99;
      pdb_1404ca240((undefined ***)((longlong)pauVar41[2] + 8));
    case 0x13:
code_r0x000140a39a9f:
      return;
    case 0x12:
      UNRECOVERED_JUMPTABLE_00 = (code *)((longlong)pauVar29[-8] + 0xd);
      *(int *)UNRECOVERED_JUMPTABLE_00 = *(int *)UNRECOVERED_JUMPTABLE_00 + (int)pauVar36;
code_r0x000140a39ab6:
      pppuVar15 = (undefined ***)*pauVar36;
      pauVar36 = (undefined1 (*) [16])&UNK_14303b6ec;
      puVar30 = (undefined *)
                (longlong)*(int *)(&UNK_14303b6ec + (ulonglong)(byte)*(code *)pppuVar15 * 4);
code_r0x000140a39ac6:
                    /* WARNING: Could not recover jumptable at 0x000140a39ac9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)((longlong)*pauVar36 + (longlong)puVar30))();
      return;
    case 0x14:
      UNRECOVERED_JUMPTABLE_00 = (code *)swi(3);
      (*UNRECOVERED_JUMPTABLE_00)();
      return;
    case 0x15:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0x16:
      puVar62 = ppauVar60 + -1;
      ppauVar60[-1] = pauVar63;
      cVar17 = '\a';
      do {
        pauVar63 = (undefined1 (*) [16])((longlong)pauVar63[-1] + 8);
        puVar62 = puVar62 + -1;
        *puVar62 = *(undefined **)*pauVar63;
        cVar17 = cVar17 + -1;
      } while ('\0' < cVar17);
      ppauVar60[-9] = (undefined1 (*) [16])(ppauVar60 + -1);
      pfVar61 = (float *)((longlong)ppauVar60 + -0xe147);
      pauVar36 = (undefined1 (*) [16])0x4303b333;
code_r0x000140a39ad2:
      uVar42 = 0x2d;
code_r0x000140a39b18:
      *(undefined8 *)((longlong)pfVar61 + -8) = 0x140a39b1d;
      uVar31 = pdb_140dc6290(pauVar36);
      *(undefined8 *)((longlong)pfVar61 + 0x20) = uVar31;
      *(undefined8 *)((longlong)pfVar61 + 0x28) = uVar42;
      *(undefined1 **)((longlong)pfVar61 + 0x30) = (undefined1 *)((longlong)pfVar61 + 0x20);
      *(code **)((longlong)pfVar61 + 0x38) = pdb_1402ed400;
      ppuVar22 = *(undefined ***)*pauVar64;
      ppuVar56 = *(undefined ***)((longlong)*pauVar64 + 8);
      *(undefined8 *)((longlong)pfVar61 + -8) = 0x140a39b55;
      pdb_140f681d0(ppuVar22,ppuVar56,&UNK_14303b360,(undefined1 *)((longlong)pfVar61 + 0x30));
      return;
    default:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    lVar23 = (longlong)ppauVar60[9];
    *(bool *)(ppauVar60 + 4) = bVar34 == 4;
    ppuVar22 = *(undefined ***)pauVar69[2];
    ppauVar60[-1] = (undefined1 (*) [16])0x140a38b8c;
    (*(code *)ppuVar22)(pauVar25,ppauVar60 + 0x3c,ppauVar60[0x3a],ppauVar60[0x3b]);
    ppauVar60[-1] = (undefined1 (*) [16])0x140a38b9c;
    pdb_140e08f50((undefined1 *)((longlong)ppauVar60 + 0x1ac),pauVar44);
    if ((*(uint *)(lVar23 + 0x10) < 3) &&
       (auVar82._0_4_ * _DAT_142e3787c <
        SQRT((*(float *)(ppauVar60 + 0x35) - *(float *)((longlong)ppauVar60 + 0x1b4)) *
             (*(float *)(ppauVar60 + 0x35) - *(float *)((longlong)ppauVar60 + 0x1b4)) +
             (*(float *)((longlong)ppauVar60 + 0x1a4) - *(float *)(ppauVar60 + 0x36)) *
             (*(float *)((longlong)ppauVar60 + 0x1a4) - *(float *)(ppauVar60 + 0x36)) +
             (*(float *)(ppauVar60 + 0x34) - *(float *)((longlong)ppauVar60 + 0x1ac)) *
             (*(float *)(ppauVar60 + 0x34) - *(float *)((longlong)ppauVar60 + 0x1ac))))) {
      *(undefined4 *)ppauVar60[0x1c] = *(undefined4 *)((longlong)ppauVar60 + 0x54);
      lVar23 = (longlong)ppauVar60[0x1d];
      lVar21 = *(longlong *)(lVar23 + 0x30);
      uVar42 = *(undefined8 *)(lVar23 + 0x40);
      if (lVar21 == *(longlong *)(lVar23 + 0x20)) {
        ppauVar60[-1] = (undefined1 (*) [16])0x140a38c39;
        pdb_142d7e980(lVar23 + 0x20);
      }
      lVar68 = *(longlong *)(lVar23 + 0x28);
      *(undefined4 *)(lVar68 + lVar21 * 0x10) = 2;
      *(undefined8 *)(lVar68 + 8 + lVar21 * 0x10) = uVar42;
      *(longlong *)(lVar23 + 0x30) = lVar21 + 1;
      *(longlong *)(lVar23 + 0x40) = *(longlong *)(lVar23 + 0x40) + 1;
    }
    return;
  case 0x18:
code_r0x000140a38d5d:
    (*pauVar69)[0] = (*pauVar69)[0] + (char)pauVar36;
code_r0x000140a38d5f:
    iStack_198 = iStack_198 - (int)pauVar69;
    pfVar51 = afStack_2e8;
code_r0x000140a38d66:
    *(undefined1 (*) [16])((longlong)pfVar51 + 0x140) = auVar82;
    pauVar29 = *(undefined1 (**) [16])*pauVar41;
    pauVar41 = (undefined1 (*) [16])(ulonglong)*(uint *)*pauVar29;
    pfVar52 = pfVar51;
code_r0x000140a38d73:
    auVar83._0_4_ = (float)(longlong)pauVar41;
    pfVar53 = pfVar52;
    goto code_r0x000140a38d78;
  case 0x19:
    pauVar29 = (undefined1 (*) [16])&UNK_143397930;
    goto code_r0x000140a38da5;
  case 0x1a:
    return;
  case 0x1b:
    *(undefined1 (*) [16])((longlong)pauVar67[0x4d] + 8) = auVar83;
    pfVar61 = afStack_2e8;
    goto code_r0x000140a38d8e;
  case 0x1c:
    _UNK_143392430 = _UNK_143392430 + 0x43392430;
    UNK_1433923bb = UNK_1433923bb + cVar17;
    pauVar36 = (undefined1 (*) [16])CONCAT71(uVar33,cVar17 + pauVar44[0xf48f31][0]);
    pauVar29 = (undefined1 (*) [16])&UNK_1433924d0;
    pfVar53 = afStack_2e8;
code_r0x000140a38d78:
    auVar81._0_4_ = (float)*(uint *)((longlong)*pauVar29 + 4);
    auVar83._0_4_ = auVar83._0_4_ / auVar81._0_4_;
    pauVar29 = (undefined1 (*) [16])(ulonglong)*(uint *)((longlong)pauVar36[1] + 0xc);
    pauVar69 = *(undefined1 (**) [16])*pauVar36;
    pfVar54 = pfVar53;
code_r0x000140a38d82:
    pauVar64 = *(undefined1 (**) [16])pfVar54;
    UNRECOVERED_JUMPTABLE_00 = (code *)((longlong)pauVar44[-0x74b7e3c] + 1);
    *(uint *)UNRECOVERED_JUMPTABLE_00 =
         *(uint *)UNRECOVERED_JUMPTABLE_00 >> 0x19 | *(uint *)UNRECOVERED_JUMPTABLE_00 << 7;
    pauVar36 = *(undefined1 (**) [16])pauVar36[1];
    pfVar61 = (float *)((longlong)pfVar54 + 8);
    goto code_r0x000140a38d8e;
  case 0x1d:
    goto code_r0x000140a38db2;
  case 0x1e:
  case 0x1f:
code_r0x000140a392ce:
    uVar39 = auVar83._8_4_;
    if ((((uint)pauVar41 & 0x7fffffff) < 0x7f800000 && ((uint)pauVar29 & 0x7fffffff) < 0x7f800000)
        && (uVar39 & 0x7fffffff) < 0x7f800000) {
      *(undefined4 *)*(undefined ***)pauVar36[1] = *(undefined4 *)((longlong)pauVar36[1] + 0xc);
      pauVar29 = *(undefined1 (**) [16])*pauVar36;
      goto code_r0x000140a39316;
    }
    goto LAB_140a39320;
  case 0x20:
    pauVar29 = (undefined1 (*) [16])0x863d2f90;
    goto code_r0x000140a39336;
  case 0x21:
    pauStack_2f0 = (undefined1 (*) [16])&UNK_143397930;
    pauVar29 = (undefined1 (*) [16])&UNK_143397923;
    divps(auVar100,auVar81);
    goto code_r0x000140a39467;
  case 0x22:
    pauVar36 = (undefined1 (*) [16])((ulonglong)pauVar36 & 0xffffffff);
    ppuVar56 = (undefined **)afStack_2e8;
    if (auVar106._0_8_ < 0xfffffffebcfc49a0) {
      pauVar36 = (undefined1 (*) [16])0x4303b660;
      ppuVar56 = (undefined **)afStack_2e8;
    }
code_r0x000140a393de:
    lVar23 = (longlong)pauVar29 - (longlong)pauVar72;
    pauVar41 = (undefined1 (*) [16])(lVar23 * 0xd0);
    uVar38 = *(undefined4 *)((longlong)(param_9 + 4)[lVar23 * 0xd] + 8);
    uVar71 = *(undefined4 *)((longlong)pauVar36[1] + 0xc);
    pauVar73 = *(undefined1 (**) [16])pauVar36[1];
    *(undefined4 *)*pauVar73 = uVar71;
    pauVar29 = *(undefined1 (**) [16])*pauVar36;
    *(undefined4 *)*pauVar29 = uVar38;
    *(undefined4 *)((longlong)ppuVar56 + 0x30) =
         *(undefined4 *)((longlong)(param_9 + 5)[lVar23 * 0xd] + 4);
    *(undefined8 *)((longlong)ppuVar56 + 0x28) =
         *(undefined8 *)((longlong)(param_9 + 4)[lVar23 * 0xd] + 0xc);
    *(undefined4 *)*pauVar73 = uVar71;
    *(undefined4 *)pauVar29[1] = *(undefined4 *)((longlong)ppuVar56 + 0x30);
    ppuVar22 = *(undefined ***)((longlong)ppuVar56 + 0x28);
    goto code_r0x000140a39426;
  case 0x23:
    _UNK_143397930 = CONCAT31(_UNK_143397931,UNK_143397930 + '0');
code_r0x000140a39a46:
    pauStack_2f0 = (undefined1 (*) [16])0x140a39a4b;
    pdb_142dc7e2a();
LAB_140a39a4c:
                    /* WARNING: Does not return */
    UNRECOVERED_JUMPTABLE_00 = (code *)invalidInstructionException();
    (*UNRECOVERED_JUMPTABLE_00)();
  case 0x24:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x25:
    goto code_r0x000140a39a56;
  case 0x26:
    (&UNK_14303b618)[auVar106._0_8_] = (&UNK_14303b618)[auVar106._0_8_] + '0';
    UNK_143397930 = (byte)_UNK_143397930 | 0x30;
    _UNK_143397930 = CONCAT31(_UNK_143397931,UNK_143397930 + 0x30);
    goto code_r0x000140a39a5c;
  case 0x27:
    pfVar57 = (float *)(ulonglong)((uint)afStack_2e8 | *(uint *)pauVar64[-7]);
DAT_140a39a50:
    *(undefined1 (**) [16])((longlong)pfVar57 + 0x10) = pauVar41;
    pfVar58 = (float *)((longlong)pfVar57 + -8);
    *(undefined1 (**) [16])((longlong)pfVar57 + -8) = pauVar63;
    goto code_r0x000140a39a56;
  case 0x28:
    puStack_2d8 = &UNK_14303b660;
    ppauVar60 = &pauStack_2f8;
    pauStack_2f8 = pauVar64;
    pauStack_2f0 = pauVar63;
    goto code_r0x000140a39a87;
  default:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  pauStack_2f0 = (undefined1 (*) [16])0x140a37e96;
  (*(code *)*(undefined ***)((longlong)pauVar29[1] + 8))(pauVar36);
  ppuVar22 = (undefined **)(ulonglong)uVar39;
code_r0x000140a37e99:
  uVar38 = SUB84(pauVar64,0);
  bVar34 = (byte)ppuVar22;
  *puStack_208 = uStack_294;
  ppuVar22 = *(undefined ***)pauVar75[3];
  ppuVar56 = *(undefined ***)pauVar75[4];
  if (ppuVar22 == *(undefined ***)pauVar75[2]) {
    pauStack_2f0 = (undefined1 (*) [16])0x140a37ec1;
    pdb_142d7e980(pauVar75 + 2);
  }
  ppuVar7 = *(undefined ***)((longlong)pauVar75[2] + 8);
  *(undefined4 *)(ppuVar7 + (longlong)ppuVar22 * 2) = 2;
  ppuVar7[(longlong)ppuVar22 * 2 + 1] = (undefined *)ppuVar56;
  *(undefined ***)pauVar75[3] = (undefined **)((longlong)ppuVar22 + 1);
  *(undefined ***)pauVar75[4] = (undefined **)((longlong)*(undefined ***)pauVar75[4] + 1);
  if (*(int *)pauVar27[1] == 3) {
code_r0x000140a37cde:
    *(undefined4 *)param_5[2] = *(undefined4 *)((longlong)param_5 + 0x1c);
    lVar23 = *param_5;
    lVar21 = *(longlong *)(lVar23 + 0x30);
    uVar42 = *(undefined8 *)(lVar23 + 0x40);
    if (lVar21 == *(longlong *)(lVar23 + 0x20)) {
      pauStack_2f0 = (undefined1 (*) [16])0x140a37d09;
      pdb_142d7e980(lVar23 + 0x20);
    }
    pauVar27 = pauStack_2a0;
    lVar68 = *(longlong *)(lVar23 + 0x28);
    *(undefined8 *)(lVar68 + lVar21 * 0x10) = uVar42;
    *(undefined1 *)(lVar68 + 8 + lVar21 * 0x10) = 1;
    *(longlong *)(lVar23 + 0x30) = lVar21 + 1;
    *(longlong *)(lVar23 + 0x40) = *(longlong *)(lVar23 + 0x40) + 1;
    *(undefined4 *)*pauVar74 = uVar38;
    UNRECOVERED_JUMPTABLE = pauStack_1f8;
    if (3 < (byte)pauVar44[0x4d][0] - 2) {
      if ((code)pauVar44[0x4d][0] == (code)0x0) {
        pauVar74 = pauVar44 + 0x10;
        iVar20 = *(int *)((longlong)pauVar44[0x11] + 8);
        *(undefined4 *)((longlong)pauVar44[0x11] + 8) = 0;
      }
      else {
        pauVar74 = (undefined1 (*) [16])((longlong)pauVar44[0x1b] + 8);
        iVar20 = *(int *)pauVar44[0x1d];
        *(undefined4 *)pauVar44[0x1d] = 0;
      }
      if (iVar20 == 1) {
        uVar42 = *(undefined8 *)((longlong)pauVar74[1] + 0xc);
        uVar31 = *(undefined8 *)((longlong)pauVar74[2] + 4);
        uStack_278._0_4_ =
             (undefined4)((ulonglong)*(undefined ***)((longlong)pauVar74[2] + 8) >> 0x20);
        uStack_278._4_4_ = SUB84(*(undefined ***)pauVar74[3],0);
        uStack_270 = (undefined4)((ulonglong)*(undefined ***)pauVar74[3] >> 0x20);
        fStack_288 = (float)uVar42;
        fStack_284 = (float)((ulonglong)uVar42 >> 0x20);
        lStack_280._0_4_ = (float)uVar31;
        lStack_280._4_4_ = (undefined4)((ulonglong)uVar31 >> 0x20);
        pauVar69 = *(undefined1 (**) [16])pauVar74[1];
        if (pauVar69 == *(undefined1 (**) [16])*pauVar74) {
          pauStack_2f0 = (undefined1 (*) [16])0x140a37e00;
          pdb_142d8dbe0(pauVar74);
        }
code_r0x000140a37e00:
        ppuVar22 = *(undefined ***)((longlong)*pauVar74 + 8);
        puVar62 = (undefined8 *)((longlong)ppuVar22 + (longlong)pauVar69 * 0x1c + 0xc);
        *puVar62 = CONCAT44((undefined4)uStack_278,lStack_280._4_4_);
        puVar62[1] = CONCAT44(uStack_270,uStack_278._4_4_);
        puVar62 = (undefined8 *)((longlong)ppuVar22 + (longlong)pauVar69 * 0x1c);
        *puVar62 = CONCAT44(fStack_284,fStack_288);
        puVar62[1] = CONCAT44(lStack_280._4_4_,(float)lStack_280);
        *(undefined ***)pauVar74[1] = (undefined **)((longlong)*pauVar69 + 1);
        UNRECOVERED_JUMPTABLE = pauStack_1f8;
      }
    }
code_r0x000140a37e33:
    *(undefined4 *)((longlong)*UNRECOVERED_JUMPTABLE + 8) = 1000000000;
    pauVar63 = pauStack_2a8;
  }
  else {
code_r0x000140a37ef1:
    *(undefined4 *)*pauVar74 = uVar38;
    pauVar63 = pauVar74;
    if (3 < (byte)pauVar44[0x4d][0] - 2) {
      lVar23 = 0x100;
      if ((code)pauVar44[0x4d][0] != (code)0x0) {
        lVar23 = 0x1b8;
      }
      if (((byte)*(code *)((longlong)pauVar44[1] + lVar23 + 8) & ~bVar34) != 0)
      goto code_r0x000140a37cde;
    }
  }
  pauVar25 = pauStack_200;
  pauVar74 = pauStack_2a8;
  bVar34 = bStack_2ad;
  fVar88 = 0.0;
  fVar79 = 0.0;
  fVar96 = 0.0;
  fVar102 = 0.0;
  if (*(uint *)((longlong)pauVar27[1] + 8) < 3) {
    puVar5 = (ulonglong *)*puStack_158;
    lVar23 = puStack_158[1];
    auVar106._0_8_ = *puVar5;
    uVar65 = 0;
    uVar40 = auVar106._0_8_ - *(ulonglong *)(lVar23 + 0x18);
    if (auVar106._0_8_ < *(ulonglong *)(lVar23 + 0x18)) {
      uVar40 = uVar65;
    }
    uVar24 = auVar106._0_8_ - *(ulonglong *)(lVar23 + 0x38);
    if (auVar106._0_8_ < *(ulonglong *)(lVar23 + 0x38)) {
      uVar24 = uVar65;
    }
    lVar21 = *(longlong *)(lVar23 + 8);
    auVar106._0_8_ = *(ulonglong *)(lVar23 + 0x30);
    uVar70 = auVar106._0_8_ - uVar24;
    if (auVar106._0_8_ < uVar24) {
      uVar70 = uVar65;
    }
    uVar6 = *(ulonglong *)(lVar23 + 0x10);
    uVar76 = uVar6 - uVar40;
    if (uVar6 < uVar40) {
      uVar76 = uVar65;
    }
    lVar68 = *(longlong *)(lVar23 + 0x28);
    uVar65 = *(ulonglong *)(lVar23 + 0x40);
    *puVar5 = (uVar65 - uVar70) - uVar76;
    if (uVar6 >= uVar40 && uVar6 - uVar40 != 0 ||
        auVar106._0_8_ >= uVar24 && auVar106._0_8_ - uVar24 != 0) {
      lVar68 = lVar68 + uVar24 * 0x10;
      lVar21 = lVar21 + uVar40 * 0x10;
      if (uVar6 < uVar40) {
        lVar21 = 8;
      }
      lVar23 = 0;
      if (uVar40 < uVar6) {
        lVar23 = lVar21 + -0x10 + uVar76 * 0x10;
      }
      if (auVar106._0_8_ < uVar24) {
        lVar68 = 8;
      }
      lVar21 = lVar68 + -0x10 + uVar70 * 0x10;
      if (auVar106._0_8_ <= uVar24) {
        lVar21 = lVar23;
      }
      *puVar5 = uVar65;
      pauStack_2f0 = (undefined1 (*) [16])0x140a38004;
      pdb_140df4520(&fStack_288,lVar21 + 8);
      fVar79 = *(float *)(uStack_290 + 0x10c);
      fVar102 = fStack_288 * _DAT_1430155b0 * fVar79;
      fVar88 = fVar79 * fStack_284 * _UNK_14303aa70;
      fVar79 = fVar79 * (float)lStack_280 * _UNK_14303aa74;
      fVar96 = _UNK_14303aa7c * 0.0 * 0.0;
      if (((code)pauVar44[0x4d][0] == (code)0x4) || ((code)pauVar44[0x4d][0] == (code)0x1)) {
        fVar102 = fVar102 * _DAT_142e36f50;
        fVar88 = fVar88 * _DAT_142e36f60;
        fVar79 = fVar79 * _UNK_142e36f64;
        fVar96 = fVar96 * _UNK_142e36f6c;
      }
      fVar102 = fVar102 + 0.0;
      fVar88 = fVar88 + 0.0;
      fVar79 = fVar79 + 0.0;
      fVar96 = fVar96 + 0.0;
    }
    cVar4 = (code)pauVar44[0x4d][0];
    pauVar75 = pauVar25;
    pauVar64 = pauStack_2a0;
  }
  else {
    cVar4 = (code)pauVar44[0x4d][0];
    pauVar74 = pauVar63;
    pauVar64 = pauStack_2a0;
    fVar102 = 0.0;
  }
  fVar103 = _DAT_142e36f28;
  if ((byte)((char)cVar4 - 1U) < 4) {
    fVar103 = *(float *)(&UNK_14303b560 + (ulonglong)(byte)((char)cVar4 - 1U) * 4);
  }
  pauVar63 = (undefined1 (*) [16])(ulonglong)bVar34;
  pauStack_2f0 = (undefined1 (*) [16])0x140a380b6;
  pauStack_2a0 = pauVar64;
  pdb_140df4520(&fStack_288);
  fVar89 = *(float *)(uStack_290 + 0x10c);
  auVar82._4_4_ = fVar79;
  auVar82._0_4_ = fVar79;
  auVar82._8_4_ = fVar96;
  auVar82._12_4_ = fVar96;
  auVar83._4_12_ = auVar82._4_12_;
  auVar83._0_4_ = fVar79 + (float)lStack_280 * fVar103 * fVar89;
  unaff_XMM9_Da = fVar89 * fStack_288 * fVar103 + fVar102;
  unaff_XMM9_Db =
       fVar103 * *(float *)((longlong)pauVar64[0x16] + 8) * fVar89 +
       fStack_284 * fVar103 * fVar89 + fVar88;
  if ((((unaff_XMM9_Da != 0.0) || (unaff_XMM9_Db != 0.0)) || (NAN(unaff_XMM9_Db))) ||
     ((auVar83._0_4_ != 0.0 || (NAN(auVar83._0_4_))))) {
    pauVar36 = (undefined1 (*) [16])(ulonglong)((uint)ABS(auVar83._0_4_) < 0x7f800000);
    if (((uint)ABS(unaff_XMM9_Da) < 0x7f800000) && ((uint)ABS(unaff_XMM9_Db) < 0x7f800000)) {
code_r0x000140a3817d:
      if ((char)pauVar36 != '\0') {
code_r0x000140a38185:
        *(uint *)*pauVar74 = uStack_2ac;
        fStack_288 = unaff_XMM9_Da;
        fStack_284 = unaff_XMM9_Db;
code_r0x000140a38194:
        lStack_280._0_4_ = auVar83._0_4_;
code_r0x000140a3819a:
        pauVar36 = (undefined1 (*) [16])(ulonglong)(byte)pauVar44[0x4d][0];
        pauVar41 = (undefined1 (*) [16])&UNK_14303b678;
code_r0x000140a381af:
        lVar23 = (longlong)*(int *)((longlong)*pauVar41 + (longlong)pauVar36 * 4);
code_r0x000140a381b3:
        UNRECOVERED_JUMPTABLE_00 = (code *)((longlong)*pauVar41 + lVar23);
                    /* WARNING: Could not recover jumptable at 0x000140a381b6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE_00)(UNRECOVERED_JUMPTABLE_00);
        return;
      }
    }
  }
code_r0x000140a38260:
  uVar39 = uStack_2ac;
  fVar79 = *(float *)pauVar64[0x17];
  pauVar64 = (undefined1 (*) [16])(ulonglong)uStack_2ac;
  if (fVar79 == 0.0) {
code_r0x000140a382d2:
    if ((char)pauVar63 == '\x05') goto code_r0x000140a382dc;
code_r0x000140a384ce:
    *(uint *)*pauVar74 = uVar39;
    pauVar44[0x4d][0] = *(code *)(lStack_150 + 0xd4);
    pfVar45 = afStack_2e8;
  }
  else {
    cVar4 = (code)pauVar44[0x4d][0];
    if ((1 < (byte)cVar4) && (cVar4 != (code)0x4)) {
      if (cVar4 == (code)0x5) {
        fVar79 = (float)((uint)fVar79 & _DAT_142e37820 | (uint)DAT_142e3c640);
        iVar20 = 0x7fffffff;
        if (fVar79 <= _DAT_142e382cc) {
          iVar20 = (int)fVar79;
        }
        if (NAN(fVar79)) {
          iVar20 = 0;
        }
        iVar20 = *(int *)((longlong)pauVar44[0x48] + 4) - iVar20;
        if (iVar20 < 1) {
          iVar20 = 0;
        }
        *(uint *)*pauVar74 = uStack_2ac;
        *(int *)((longlong)pauVar44[0x48] + 4) = iVar20;
      }
      goto code_r0x000140a382d2;
    }
    uVar35 = _DAT_142e377e0 & (uint)fVar79;
    *(uint *)*pauVar74 = uStack_2ac;
    pauStack_2f0 = (undefined1 (*) [16])0x140a38477;
    pdb_140a36630(pauVar44,fVar79 * _DAT_142e36f38,&uStack_168);
    *puStack_208 = uStack_294;
    ppuVar22 = *(undefined ***)pauVar75[3];
    ppuVar56 = *(undefined ***)pauVar75[4];
    if (ppuVar22 == *(undefined ***)pauVar75[2]) {
      pauStack_2f0 = (undefined1 (*) [16])0x140a3849c;
      pdb_142d7e980(pauVar75 + 2);
    }
    ppuVar7 = *(undefined ***)((longlong)pauVar75[2] + 8);
    *(undefined4 *)(ppuVar7 + (longlong)ppuVar22 * 2) = 1;
    *(uint *)((longlong)ppuVar7 + (longlong)ppuVar22 * 0x10 + 4) = uVar35;
    ppuVar7[(longlong)ppuVar22 * 2 + 1] = (undefined *)ppuVar56;
    *(undefined ***)pauVar75[3] = (undefined **)((longlong)ppuVar22 + 1);
    *(undefined ***)pauVar75[4] = (undefined **)((longlong)*(undefined ***)pauVar75[4] + 1);
    if ((char)pauVar63 != '\x05') goto code_r0x000140a384ce;
code_r0x000140a382dc:
    lStack_280 = lStack_130 + 0x198;
    uStack_278 = lStack_130 + 0xf8;
    puStack_268 = *(uint **)(lStack_128 + 0xf8);
    puStack_260 = puStack_268 + *(longlong *)(lStack_128 + 0x100);
    cStack_228 = *(char *)(lStack_128 + 0x108);
    uStack_258 = 8;
    uStack_250 = 0;
    lStack_248 = 8;
    uStack_240 = 0;
    lStack_238 = 0;
    uStack_230 = 0;
    fStack_288 = (float)lStack_130;
    fStack_284 = (float)((ulonglong)lStack_130 >> 0x20);
    uStack_270 = (undefined4)lStack_128;
    uStack_26c = (undefined4)((ulonglong)lStack_128 >> 0x20);
    pauStack_2f0 = (undefined1 (*) [16])0x140a3838b;
    lVar23 = pdb_1415235e0(&fStack_288,*(undefined4 *)((longlong)pauVar44[0x48] + 4));
    pfVar45 = afStack_2e8;
    if (lVar23 == 0) {
      auVar106._0_8_ = (ulonglong)uStack_230._4_4_;
      if (cStack_228 == '\0') {
        if (uStack_230._4_4_ == (uint)uStack_230) {
          do {
            pfVar45 = afStack_2e8;
            if (puStack_268 == puStack_260) goto code_r0x000140a38800;
            puVar2 = puStack_268 + 1;
            uVar39 = *puStack_268;
            uVar40 = *(ulonglong *)(*(longlong *)(uStack_278 + 8) + 0x58 + (ulonglong)uVar39 * 0xa0)
            ;
            pauVar64 = (undefined1 (*) [16])(ulonglong)uStack_2ac;
            puStack_268 = puVar2;
          } while (uVar40 == 0);
          lVar23 = *(longlong *)(uStack_278 + 8) + (ulonglong)uVar39 * 0xa0;
          uVar24 = (ulonglong)*(uint *)(lVar23 + 0x94);
          uVar65 = *(ulonglong *)(CONCAT44(uStack_26c,uStack_270) + 0x110);
          auVar106._0_8_ = 0;
          if (uVar65 < *(ulonglong *)(*(longlong *)(lStack_280 + 8) + 0x40 + uVar24 * 0x48)) {
            lVar21 = *(longlong *)(lStack_280 + 8) + uVar24 * 0x48;
            uVar65 = *(ulonglong *)(*(longlong *)(lVar21 + 0x38) + uVar65 * 8);
            if (uVar65 == 0) goto code_r0x000140a385d4;
            lStack_238 = *(longlong *)(*(longlong *)(lVar21 + 0x18) + 0x10 + ~uVar65 * 0x30);
          }
          else {
code_r0x000140a385d4:
            lStack_238 = 0;
          }
          lStack_248 = *(longlong *)(lVar23 + 0x50);
          uStack_230 = uVar40 & 0xffffffff;
          uStack_240 = uVar40;
        }
        uVar40 = (ulonglong)~*(uint *)(lStack_248 + 8 + auVar106._0_8_ * 0x10);
      }
      else {
        if (uStack_230._4_4_ == (uint)uStack_230) {
          do {
            pfVar45 = afStack_2e8;
            if (puStack_268 == puStack_260) goto code_r0x000140a38800;
            puVar2 = puStack_268 + 1;
            uVar39 = *puStack_268;
            uVar40 = *(ulonglong *)(*(longlong *)(lStack_280 + 8) + 0x10 + (ulonglong)uVar39 * 0x48)
            ;
            pauVar64 = (undefined1 (*) [16])(ulonglong)uStack_2ac;
            puStack_268 = puVar2;
          } while (uVar40 == 0);
          lVar23 = *(longlong *)(lStack_280 + 8) + (ulonglong)uVar39 * 0x48;
          uVar65 = *(ulonglong *)(CONCAT44(uStack_26c,uStack_270) + 0x110);
          auVar106._0_8_ = 0;
          if ((uVar65 < *(ulonglong *)(lVar23 + 0x40)) &&
             (uVar65 = *(ulonglong *)(*(longlong *)(lVar23 + 0x38) + uVar65 * 8), uVar65 != 0)) {
            lStack_238 = *(longlong *)(*(longlong *)(lVar23 + 0x18) + 0x10 + ~uVar65 * 0x30);
          }
          else {
            lStack_238 = 0;
          }
          uStack_258 = *(undefined8 *)(lVar23 + 8);
          uStack_230 = uVar40 & 0xffffffff;
          uStack_250 = uVar40;
        }
        uVar40 = auVar106._0_8_;
      }
      pauVar41 = (undefined1 (*) [16])(uVar40 * 0x30 + lStack_238);
      uStack_230 = CONCAT44((int)auVar106._0_8_ + 1,(uint)uStack_230);
      *(int *)*pauVar74 = (int)pauVar64;
      ppuVar22 = *(undefined ***)pauVar41[1];
      fVar88 = *(float *)((longlong)pauVar41[1] + 8);
      ppuVar56 = *(undefined ***)*pauVar41;
      ppuVar7 = *(undefined ***)((longlong)*pauVar41 + 8);
      pauVar44[0x4d][0] = (code)0x5;
      lVar23 = (longlong)*(undefined ***)((longlong)pauVar44[0x45] + 8) << 4;
      ppuVar26 = *(undefined ***)pauVar44[0x45];
      do {
        if (lVar23 == 0) {
          puStack_1e8 = &UNK_14337fa53;
          goto code_r0x000140a38cb3;
        }
        ppuVar12 = ppuVar26 + 2;
        pauStack_2f0 = (undefined1 (*) [16])0x140a38687;
        pauVar25 = (undefined1 (*) [16])(**(code **)(ppuVar26[1] + 0x40))(*ppuVar26);
        pauVar63 = pauVar41 + 1;
        pauStack_2f0 = (undefined1 (*) [16])0x140a38696;
        pauVar41 = pauVar25;
        (*(code *)*(undefined ***)((longlong)*pauVar63 + 8))(&ppuStack_1a8);
        lVar23 = lVar23 + -0x10;
        ppuVar26 = ppuVar12;
      } while ((pauVar25 == (undefined1 (*) [16])0x0) ||
              (pauStack_1a0 != (undefined1 (*) [16])0x2e441b8be050d85b ||
               ppuStack_1a8 != (undefined **)0x1d5a207d10288a54));
      *(undefined ***)*pauVar25 = ppuVar22;
      *(float *)((longlong)*pauVar25 + 8) = fVar88;
      lVar23 = (longlong)*(undefined ***)((longlong)pauVar44[0x45] + 8) << 4;
      ppuVar26 = *(undefined ***)pauVar44[0x45];
      do {
        if (lVar23 == 0) {
          puStack_1e8 = &UNK_14337f978;
code_r0x000140a38cb3:
          uStack_1e0 = 0x22;
          goto code_r0x000140a38ce4;
        }
        ppuVar12 = ppuVar26 + 2;
        pauStack_2f0 = (undefined1 (*) [16])0x140a38717;
        pauVar25 = (undefined1 (*) [16])(**(code **)(ppuVar26[1] + 0x40))(*ppuVar26);
        pauVar63 = pauVar41 + 1;
        pauStack_2f0 = (undefined1 (*) [16])0x140a38726;
        pauVar41 = pauVar25;
        (*(code *)*(undefined ***)((longlong)*pauVar63 + 8))(&ppuStack_1a8);
        lVar23 = lVar23 + -0x10;
        ppuVar26 = ppuVar12;
      } while ((pauVar25 == (undefined1 (*) [16])0x0) ||
              (pauStack_1a0 != (undefined1 (*) [16])0x57d498b94ce2e276 ||
               ppuStack_1a8 != (undefined **)0x89b6aef75b352be9));
      *(undefined ***)*pauVar25 = ppuVar56;
      *(undefined ***)((longlong)*pauVar25 + 8) = ppuVar7;
      fVar97 = SUB84(ppuVar22,0) + _DAT_142e378e0;
      fVar98 = (float)((ulonglong)ppuVar22 >> 0x20) + _UNK_142e378e4;
      fVar88 = fVar88 + 0.0;
      pauVar73 = *(undefined1 (**) [16])pauVar44[0x45];
      pauVar69 = (undefined1 (*) [16])
                 ((longlong)*(undefined ***)((longlong)pauVar44[0x45] + 8) << 4);
      pauVar25 = (undefined1 (*) [16])&ppuStack_1a8;
      pauVar74 = (undefined1 (*) [16])0x990135eacca0220c;
      pauVar75 = (undefined1 (*) [16])0x450831ed88cc926;
      do {
        do {
          if (pauVar69 == (undefined1 (*) [16])0x0) {
            puStack_1e8 = &UNK_14337fa75;
            uStack_1e0 = 0x1f;
code_r0x000140a38ce4:
            ppuStack_1a8 = &puStack_1e8;
            pauStack_1a0 = (undefined1 (*) [16])pdb_1402ed400;
                    /* WARNING: Subroutine does not return */
            pauStack_2f0 = (undefined1 (*) [16])0x140a38d1e;
            pdb_142dc83d0(&UNK_14337f99a,&ppuStack_1a8,&UNK_14337fa18);
          }
          pauVar63 = pauVar73 + 1;
          pauStack_2f0 = (undefined1 (*) [16])0x140a387b7;
          pauVar27 = (undefined1 (*) [16])
                     (**(code **)(*(undefined **)((longlong)*pauVar73 + 8) + 0x40))
                               (*(undefined **)*pauVar73);
          pauVar73 = pauVar41 + 1;
          pauStack_2f0 = (undefined1 (*) [16])0x140a387c6;
          pauVar36 = pauVar25;
          pauVar41 = pauVar27;
          (*(code *)*(undefined ***)((longlong)*pauVar73 + 8))();
          pauVar69 = pauVar69 + -1;
          pauVar73 = pauVar63;
        } while (pauVar27 == (undefined1 (*) [16])0x0);
        UNRECOVERED_JUMPTABLE = (undefined1 (*) [16])((ulonglong)ppuStack_1a8 ^ (ulonglong)pauVar74)
        ;
code_r0x000140a387d9:
        UNRECOVERED_JUMPTABLE_00 = (code *)((longlong)*pauVar64 + (longlong)pauVar36[-2]);
        *UNRECOVERED_JUMPTABLE_00 = (code)((char)*UNRECOVERED_JUMPTABLE_00 + (char)pauVar36);
        pauVar73 = pauVar63;
      } while (pauStack_1a0 != pauVar75 || UNRECOVERED_JUMPTABLE != (undefined1 (*) [16])0x0);
code_r0x000140a387f0:
      *(float *)((longlong)pauVar27[1] + 4) = fVar97;
      *(float *)((longlong)pauVar27[1] + 8) = fVar98;
      *(float *)((longlong)pauVar27[1] + 0xc) = fVar88;
      pfVar45 = afStack_2e8;
      pauVar74 = pauStack_2a8;
    }
  }
code_r0x000140a38800:
  *(undefined8 *)((longlong)pfVar45 + -8) = 0x140a38810;
  pdb_140e08f50((undefined1 *)((longlong)pfVar45 + 0x1a0),pauVar44);
  *(int *)*pauVar74 = (int)pauVar64;
code_r0x000140a38814:
  pauVar29 = (undefined1 (*) [16])(ulonglong)(byte)pauVar44[0x4d][0];
code_r0x000140a38829:
  UNRECOVERED_JUMPTABLE =
       (undefined1 (*) [16])(&UNK_14303b690 + *(int *)(&UNK_14303b690 + (longlong)pauVar29 * 4));
code_r0x000140a38837:
                    /* WARNING: Could not recover jumptable at 0x000140a38837. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)UNRECOVERED_JUMPTABLE)();
  return;
code_r0x000140a37a66:
  bVar34 = (char)pauVar36 + (char)((ulonglong)pauVar36 >> 8);
  pauVar36 = (undefined1 (*) [16])(ulonglong)bVar34;
  cVar17 = (char)UNRECOVERED_JUMPTABLE + *(char *)(longlong)(int)UNRECOVERED_JUMPTABLE;
  pauVar75 = (undefined1 (*) [16])CONCAT71((int7)((ulonglong)UNRECOVERED_JUMPTABLE >> 8),cVar17);
  UNRECOVERED_JUMPTABLE_00 = (code *)((longlong)pauVar75[-8] + 0xd);
  *UNRECOVERED_JUMPTABLE_00 = (code)((char)*UNRECOVERED_JUMPTABLE_00 + bVar34);
  *(int *)*pauVar75 = *(int *)*pauVar75 + 1;
  (*pauVar75)[0] = (*pauVar75)[0] + cVar17;
  fVar85 = auVar100._0_4_;
  fVar105 = auVar83._0_4_;
  fVar107 = auVar81._0_4_;
  goto code_r0x000140a37a85;
code_r0x000140a37833:
  pauStack_2f0 = (undefined1 (*) [16])0x140a37843;
  pdb_140e08f50(&puStack_1e8,pauVar44);
  pauVar75 = (undefined1 (*) [16])&fStack_288;
  pauStack_2f0 = (undefined1 (*) [16])0x140a37853;
  pdb_140e08fa0(pauVar75,pauVar44);
  fVar98 = fStack_288 * _DAT_1430155a0;
  fVar85 = fStack_284 * _UNK_1430155a4;
  fVar107 = SUB84(puStack_1e8,0);
  auVar106._0_8_ = (ulonglong)puStack_1e8 >> 0x20;
  fVar105 = (float)lStack_280 * _DAT_142e3c654 + (float)uStack_1e0;
  pauStack_2f0 = (undefined1 (*) [16])0x140a37898;
  pdb_140e08fa0(&puStack_1e8,pauVar44);
  lStack_280._4_4_ = SUB84(puStack_1e8,0);
  uStack_278._0_4_ = (undefined4)((ulonglong)puStack_1e8 >> 0x20);
  uStack_278._4_4_ = (float)uStack_1e0;
  param_9 = pauVar74;
  if ((byte)pauVar69 != 4) {
    param_9 = pauVar75;
  }
  fVar102 = 0.0;
  fVar103 = 0.0;
  fVar89 = 0.0;
  pauStack_2f0 = (undefined1 (*) [16])0x140a378e5;
  fVar96 = _DAT_142e36f3c;
  fStack_288 = fVar107 + fVar98;
  fStack_284 = (float)auVar106._0_8_ + fVar85;
  lStack_280._0_4_ = fVar105;
  pdb_1419c14e0(&puStack_1e8,lStack_e8);
  if ((int)puStack_1e8 == 0) {
    uStack_1e0._0_4_ = 0.0;
  }
  else {
  }
  fVar85 = (float)uStack_1e0;
  fVar105 = (float)(((int)puStack_1e8 << 0x1f) >> 0x1f & uStack_1e0._4_4_);
  fVar107 = (float)(((int)puStack_1e8 << 0x1f) >> 0x1f & uStack_1d8);
  goto code_r0x000140a37929;
code_r0x000140a39a56:
  *(undefined1 (**) [16])((longlong)pfVar58 + -8) = pauVar64;
  *(undefined1 (**) [16])((longlong)pfVar58 + -0x10) = pauVar67;
  ppauVar59 = (undefined1 (**) [16])((longlong)pfVar58 + -0x30);
code_r0x000140a39a5c:
  ppuVar22 = *(undefined ***)pauVar41[4];
  *(undefined8 *)((longlong)ppauVar59 + -8) = 0x140a39a74;
  pub_1406abac0((byte *)ppuVar22,0x18,8);
  return;
}

