// VA 0x140a36630, PDB extent 658 bytes
// country_core::systems::camera_rig::MainCamera::zoom
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/camera_rig.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x000140a3998c) overlaps instruction at (ram,0x000140a39989)
    */
/* WARNING: Removing unreachable block (ram,0x000140a39208) */
/* WARNING: Removing unreachable block (ram,0x000140a3922d) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: country_core::systems::camera_rig::MainCamera::zoom
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/camera_rig.rs
   Extent: 658 */

undefined1 (*) [16]
pdb_140a36630(undefined1 (*UNRECOVERED_JUMPTABLE_00) [16],undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  uint *puVar2;
  byte *pbVar3;
  code cVar4;
  undefined8 uVar5;
  code cVar6;
  int iVar7;
  ulonglong *puVar8;
  ulonglong uVar9;
  char unaff_00084f00;
  undefined1 *unaff_0008ae00;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined1 (**ppauVar14) [16];
  char cVar15;
  byte bVar16;
  undefined1 uVar17;
  float fVar18;
  float fVar19;
  int iVar20;
  uint7 uVar28;
  undefined7 uVar29;
  char *pcVar21;
  longlong lVar22;
  ulonglong uVar23;
  undefined8 *puVar24;
  undefined1 (*pauVar25) [16];
  undefined *puVar26;
  code *UNRECOVERED_JUMPTABLE;
  undefined1 (*pauVar27) [16];
  undefined1 (*extraout_RAX) [16];
  byte bVar30;
  uint uVar31;
  longlong lVar32;
  undefined2 uVar33;
  float fVar34;
  longlong lVar35;
  undefined1 (*pauVar36) [16];
  undefined1 (*unaff_RBX) [16];
  undefined1 (**ppauVar37) [16];
  undefined1 (**ppauVar38) [16];
  undefined1 (**ppauVar39) [16];
  undefined1 (**ppauVar40) [16];
  undefined1 (**ppauVar41) [16];
  undefined1 (**ppauVar42) [16];
  undefined1 (**ppauVar43) [16];
  undefined1 (**ppauVar44) [16];
  undefined1 *puVar45;
  ulonglong *puVar46;
  int *piVar47;
  undefined8 *puVar48;
  ulonglong *puVar49;
  undefined8 *puVar50;
  undefined1 (*unaff_RBP) [16];
  undefined4 uVar51;
  undefined1 (*unaff_RSI) [16];
  undefined1 (*pauVar52) [16];
  undefined1 (*unaff_RDI) [16];
  undefined1 (*pauVar53) [16];
  uint uVar54;
  undefined1 (*pauVar55) [16];
  undefined1 (*pauVar56) [16];
  ulonglong uVar57;
  undefined1 (*pauVar58) [16];
  undefined8 uVar59;
  undefined1 (*in_R11) [16];
  undefined1 (*unaff_R12) [16];
  undefined1 (*unaff_R13) [16];
  undefined1 (*unaff_R14) [16];
  undefined1 (*unaff_R15) [16];
  undefined2 in_ES;
  undefined2 in_FS;
  longlong in_FS_OFFSET;
  bool bVar60;
  char in_AF;
  bool bVar61;
  bool bVar62;
  bool bVar63;
  bool bVar64;
  float10 in_ST0;
  float10 in_ST1;
  unkbyte10 in_ST2;
  unkbyte10 in_ST3;
  float extraout_XMM0_Dc;
  undefined1 auVar67 [12];
  float extraout_XMM0_Da;
  undefined4 uVar65;
  float fVar66;
  undefined8 extraout_XMM0_Qa;
  undefined1 auVar68 [16];
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined8 extraout_XMM0_Qb_00;
  float fVar72;
  float fVar78;
  float fVar80;
  undefined1 in_XMM1 [16];
  float fVar81;
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  undefined1 auVar79 [12];
  float fVar82;
  float fVar84;
  undefined1 in_XMM2 [16];
  undefined1 auVar83 [16];
  undefined1 in_XMM3 [16];
  undefined1 in_XMM4 [16];
  undefined1 in_XMM5 [16];
  undefined1 auVar85 [16];
  longlong unaff_XMM6_Qb;
  float unaff_XMM7_Da;
  uint uVar86;
  float unaff_XMM7_Db;
  float unaff_XMM7_Dc;
  float unaff_XMM7_Dd;
  float unaff_XMM8_Da;
  float unaff_XMM8_Db;
  float unaff_XMM8_Dc;
  float unaff_XMM8_Dd;
  float unaff_XMM9_Da;
  float unaff_XMM9_Db;
  float unaff_XMM9_Dc;
  float unaff_XMM9_Dd;
  undefined1 unaff_XMM10 [16];
  undefined1 auVar87 [16];
  undefined1 auVar88 [16];
  float unaff_XMM11_Da;
  undefined1 auStackX_10 [24];
  uint in_stack_00000048;
  byte abStack_135 [117];
  ulonglong auStack_c0 [2];
  undefined1 (*pauStack_a8) [16];
  undefined8 auStack_a0 [2];
  char acStack_8f [7];
  undefined8 uStack_88;
  float fStack_80;
  float fStack_7c;
  undefined8 uStack_78;
  code *pcStack_70;
  float *pfStack_68;
  code *pcStack_60;
  undefined1 auStack_50 [8];
  float fStack_48;
  undefined8 uStack_44;
  undefined4 auStack_3c [11];
  undefined1 auVar69 [16];
  
  uVar59 = (undefined8)in_ST2;
  auVar87._0_8_ = in_XMM1._0_8_;
  auVar79 = in_XMM1._0_12_;
  ppauVar44 = &pauStack_a8;
  ppauVar43 = &pauStack_a8;
  ppauVar42 = &pauStack_a8;
  ppauVar41 = &pauStack_a8;
  ppauVar37 = &pauStack_a8;
  ppauVar40 = &pauStack_a8;
  fVar18 = in_XMM1._0_4_;
  if (0x7f7fffff < (uint)ABS(fVar18)) {
    return (undefined1 (*) [16])(ulonglong)(uint)ABS(fVar18);
  }
  uVar5 = *param_3;
  fVar84 = (float)((ulonglong)uVar5 >> 0x20);
  fVar34 = (float)uVar5;
  fVar72 = *(float *)(param_3 + 1);
  auVar68 = ZEXT416((uint)fVar72);
  auVar67._4_8_ = 0;
  auVar67._0_4_ = fVar72;
  fVar19 = ABS(fVar84);
  pauVar27 = (undefined1 (*) [16])
             (ulonglong)CONCAT31((int3)((uint)fVar19 >> 8),(uint)fVar19 < 0x7f800000);
  if ((0x7f7fffff < (uint)ABS(fVar72) || 0x7f7fffff < (uint)ABS(fVar34)) ||
      (uint)fVar19 >= 0x7f800000) {
    return pauVar27;
  }
  if (DAT_143ca42c4 != '\0') {
    fVar19 = SQRT(fVar72 * fVar72 + fVar34 * fVar34);
    in_XMM2 = ZEXT416((uint)fVar19);
    in_XMM3 = ZEXT416((uint)_DAT_143006a28);
    in_AF = '\0';
    if (_DAT_143006a28 <= fVar19) {
      return pauVar27;
    }
  }
  uVar23 = in_XMM2._0_8_;
  cVar6 = (code)UNRECOVERED_JUMPTABLE_00[0x4d][0];
  pauVar25 = (undefined1 (*) [16])(ulonglong)(byte)cVar6;
  pauVar36 = (undefined1 (*) [16])0x0;
  bVar61 = pauVar25 == (undefined1 (*) [16])0x1;
  uVar54 = CONCAT31((int3)((uint)ABS(fVar72) >> 8),bVar61);
  pauVar55 = (undefined1 (*) [16])(ulonglong)uVar54;
  pauVar56 = (undefined1 (*) [16])&UNK_14303b588;
  uVar57 = (ulonglong)*(int *)(&UNK_14303b588 + (longlong)pauVar25 * 4);
  bVar60 = 0xfffffffebcfc4a77 < uVar57;
  bVar64 = SCARRY8(uVar57,0x14303b588);
  pauVar58 = (undefined1 (*) [16])(&UNK_14303b588 + uVar57);
  bVar63 = (longlong)pauVar58 < 0;
  bVar62 = pauVar58 == (undefined1 (*) [16])0x0;
  uVar86 = (uint)(byte)cVar6;
  cVar15 = (char)unaff_RBX;
  bVar30 = (byte)UNRECOVERED_JUMPTABLE_00;
  uVar31 = (uint)UNRECOVERED_JUMPTABLE_00;
  iVar20 = (int)unaff_RSI;
  fVar19 = in_XMM1._4_4_;
  fVar80 = in_XMM1._12_4_;
  fVar66 = in_XMM2._12_4_;
  fVar78 = in_XMM1._8_4_;
  fVar81 = in_XMM2._8_4_;
  ppauVar39 = &pauStack_a8;
  ppauVar14 = &pauStack_a8;
  ppauVar38 = &pauStack_a8;
  pauVar27 = in_R11;
  pauVar53 = unaff_RDI;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(cVar6) {
  case (code)0x0:
    pauVar25 = UNRECOVERED_JUMPTABLE_00 + 0x10;
    goto code_r0x000140a3672f;
  case (code)0x1:
    pauVar25 = (undefined1 (*) [16])(UNRECOVERED_JUMPTABLE_00[0x1b] + 8);
    goto code_r0x000140a3672f;
  default:
    goto LAB_140a36855;
  case (code)0x4:
    pauVar25 = UNRECOVERED_JUMPTABLE_00 + 0x39;
code_r0x000140a3672f:
    fVar18 = *(float *)(&UNK_14303a9f0 + (ulonglong)bVar61 * 4);
    if (*(int *)(pauVar25[1] + 8) == 1) {
      fStack_7c = *(float *)(pauVar25[6] + 4);
      if (fStack_7c < fVar18) {
        uStack_78 = &fStack_80;
        pcStack_70 = pdb_140f705d0;
        pfStack_68 = &fStack_7c;
        pcStack_60 = pdb_140f705d0;
        fStack_80 = fVar18;
                    /* WARNING: Subroutine does not return */
        pdb_142dc83d0(&UNK_14303aab0,&uStack_78,&UNK_14303ab50);
      }
      pauVar27 = (undefined1 (*) [16])pub_142e32a10();
      unaff_XMM10._0_4_ = extraout_XMM0_Da * *(float *)pauVar25[2];
      if (fVar18 <= unaff_XMM10._0_4_) {
        fVar18 = unaff_XMM10._0_4_;
      }
      if (fVar18 <= fStack_7c) {
        fStack_7c = fVar18;
      }
      *(float *)pauVar25[2] = fStack_7c;
      pauVar25 = pauVar27;
    }
    else {
      unaff_XMM10._0_4_ = *(float *)(pauVar25[4] + 0xc);
      fVar72 = (*(float *)pauVar25[4] + unaff_XMM10._0_4_) - fVar72;
      fVar19 = (float)pub_142e32a10();
      fVar78 = (float)*(undefined8 *)(pauVar25[4] + 4);
      fVar80 = (float)((ulonglong)*(undefined8 *)(pauVar25[4] + 4) >> 0x20);
      fVar34 = ((float)*(undefined8 *)(pauVar25[3] + 8) + fVar78) - fVar34;
      fVar84 = ((float)((ulonglong)*(undefined8 *)(pauVar25[3] + 8) >> 0x20) + fVar80) - fVar84;
      fVar81 = fVar19 * fVar34;
      fVar66 = fVar19 * fVar84;
      auVar87._0_8_ = CONCAT44(fVar66,fVar81);
      auVar87._8_4_ = extraout_XMM0_Dc * 0.0;
      auVar87._12_4_ = extraout_XMM0_Dc * 0.0;
      fVar19 = fVar19 * fVar72;
      fVar81 = fVar19 * fVar19 + fVar66 * fVar66 + fVar81 * fVar81;
      if (fVar81 < *(float *)(&UNK_14303a9f8 + (ulonglong)(cVar6 == (code)0x1) * 4)) {
        fVar81 = SQRT(fVar81);
        auVar85._4_4_ = fVar81;
        auVar85._0_4_ = fVar81;
        auVar85._8_4_ = extraout_XMM0_Dc;
        auVar85._12_4_ = extraout_XMM0_Dc;
        auVar87 = divps(auVar87,auVar85);
        auVar87._0_8_ = CONCAT44(auVar87._4_4_ * fVar18,auVar87._0_4_ * fVar18);
        fVar19 = (fVar19 / fVar81) * fVar18;
      }
      *(ulonglong *)(pauVar25[4] + 4) =
           CONCAT44(fVar80 + ((float)((ulonglong)auVar87._0_8_ >> 0x20) - fVar84),
                    fVar78 + ((float)auVar87._0_8_ - fVar34));
      *(float *)(pauVar25[4] + 0xc) = unaff_XMM10._0_4_ + (fVar19 - fVar72);
    }
LAB_140a36855:
    return pauVar25;
  case (code)0x6:
                    /* WARNING: Could not recover jumptable at 0x000140a36910. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pauVar27 = (undefined1 (*) [16])
               (*(code *)(&UNK_14303b5a0 + *(int *)(&UNK_14303b5a0 + (longlong)pauVar55 * 4)))
                         (&UNK_143397930,0,
                          &UNK_14303b5a0 + *(int *)(&UNK_14303b5a0 + (longlong)pauVar55 * 4));
    return pauVar27;
  case (code)0x7:
    *(uint *)*pauVar25 = *(int *)*pauVar25 + uVar86;
    pauVar25[-8][0xd] = pauVar25[-8][0xd] + bVar30;
    pauVar25 = (undefined1 (*) [16])(ulonglong)(uVar86 | 0x2961075);
    auVar87._0_8_ = 0x248;
    uVar59 = 0x264;
    goto code_r0x000140a369a0;
  case (code)0x8:
    if (cVar15 < '\0') {
      pauVar55 = (undefined1 (*) [16])0xb8;
      auVar87._0_8_ = 0x128;
      uVar59 = 0x144;
    }
    else {
      pauVar25 = (undefined1 (*) [16])0x290;
      auVar87._0_8_ = 0x300;
      uVar59 = 0x31c;
    }
    goto code_r0x000140a369a0;
  case (code)0x9:
    *(uint *)*pauVar25 = *(int *)*pauVar25 + uVar86;
    pauVar25[-8][0xd] = pauVar25[-8][0xd] + bVar30;
    pauVar25 = (undefined1 (*) [16])(ulonglong)(uVar86 | 0x2961021);
    auVar87._0_8_ = 0x1a8;
    uVar59 = 0x1c4;
    goto code_r0x000140a369a0;
  case (code)0xa:
    *(uint *)(*unaff_RBP + 1) = *(uint *)(*unaff_RBP + 1) | 0xe0ff41c8;
    auVar87._0_8_ = 0x70;
    uVar59 = 0x8c;
    pauVar55 = pauVar36;
code_r0x000140a369a0:
    *(undefined1 (**) [16])*pauVar25 = pauVar55;
    *(undefined1 (**) [16])(*pauVar25 + 8) = UNRECOVERED_JUMPTABLE_00;
    *(undefined8 *)pauVar25[1] = uVar59;
    *(undefined8 *)(pauVar25[1] + 8) = auVar87._0_8_;
    return pauVar25;
  case (code)0xb:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (code)0xc:
    pauVar55 = (undefined1 (*) [16])(ulonglong)*(uint *)(unaff_RDI[1] + 8);
    unaff_R12 = (undefined1 (*) [16])CONCAT44(uRam0000000000000004,uRam0000000000000000);
    goto code_r0x000140a36bf4;
  case (code)0xd:
    if (bVar64) {
      (*unaff_RDI)[0] = (byte)(*unaff_RDI)[0] >> (bVar30 & 7) | (*unaff_RDI)[0] << 8 - (bVar30 & 7);
      unaff_00084f00 = '\x02';
      unaff_0008ae00 = &stack0xffffffffffffff50;
      puVar24 = (undefined8 *)&stack0xffffffffffffff50;
      cVar15 = '\x01';
      do {
        unaff_RBP = (undefined1 (*) [16])(unaff_RBP[-1] + 8);
        puVar24 = puVar24 + -1;
        *puVar24 = *(undefined8 *)*unaff_RBP;
        cVar15 = cVar15 + -1;
      } while ('\0' < cVar15);
    }
    else {
      *(undefined1 (*) [16])(unaff_RDI[1] + 0xc) = auVar68;
    }
    auStack_c0[1 - (ulonglong)(byte)(unaff_00084f00 - 1)] = (ulonglong)unaff_0008ae00;
    *(undefined4 *)(unaff_RDI[1] + 8) = 0;
    *(float *)(unaff_RDI[1] + 0xc) = fVar72;
                    /* WARNING: Could not recover jumptable at 0x000140a36c95. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pauVar27 = (undefined1 (*) [16])
               (*(code *)(&UNK_14303b5c8 +
                         *(int *)(&UNK_14303b5c8 +
                                 (ulonglong)
                                 *(uint *)(*(longlong *)*UNRECOVERED_JUMPTABLE_00 + 0x138) * 4)))
                         (*(longlong *)*UNRECOVERED_JUMPTABLE_00,
                          &UNK_14303b5c8 +
                          *(int *)(&UNK_14303b5c8 +
                                  (ulonglong)
                                  *(uint *)(*(longlong *)*UNRECOVERED_JUMPTABLE_00 + 0x138) * 4));
    return pauVar27;
  case (code)0xe:
code_r0x000140a36bf4:
                    /* WARNING: Could not recover jumptable at 0x000140a36c1a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pauVar27 = (undefined1 (*) [16])
               (*(code *)(&UNK_14303b5b8 + *(int *)(&UNK_14303b5b8 + (longlong)pauVar55 * 4)))
                         (UNRECOVERED_JUMPTABLE_00,
                          *(float *)(unaff_R12[2] + 8) * *(float *)(*(longlong *)*pauVar25 + 0xbc),
                          pauVar55,&UNK_14303b5b8 +
                                   *(int *)(&UNK_14303b5b8 + (longlong)pauVar55 * 4));
    return pauVar27;
  case (code)0xf:
    (*unaff_RDI)[0] = (byte)(*unaff_RDI)[0] >> (bVar30 & 7) | (*unaff_RDI)[0] << 8 - (bVar30 & 7);
    bVar61 = ((ulonglong)UNRECOVERED_JUMPTABLE_00 & 0x1f) == 0;
    cVar6 = (code)(*unaff_RDI)[0];
    puVar24 = (undefined8 *)&stack0xffffffffffffff50;
    cVar15 = '\x01';
    do {
      unaff_RBP = (undefined1 (*) [16])(unaff_RBP[-1] + 8);
      puVar24 = puVar24 + -1;
      *puVar24 = *(undefined8 *)*unaff_RBP;
      cVar15 = cVar15 + -1;
    } while ('\0' < cVar15);
    if ((bool)(bVar61 * bVar60 | !bVar61 * ((char)cVar6 < '\0')) || bVar62) {
      fVar72 = 0.0;
    }
    *(undefined4 *)(unaff_RDI[1] + 8) = 3;
    *(float *)(unaff_RDI[1] + 0xc) = fVar72;
                    /* WARNING: Could not recover jumptable at 0x000140a36c5d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pauVar27 = (undefined1 (*) [16])
               (*(code *)(&UNK_14303b5c8 +
                         *(int *)(&UNK_14303b5c8 +
                                 (ulonglong)
                                 *(uint *)(*(longlong *)*UNRECOVERED_JUMPTABLE_00 + 0x138) * 4)))
                         (*(longlong *)*UNRECOVERED_JUMPTABLE_00,
                          &UNK_14303b5c8 +
                          *(int *)(&UNK_14303b5c8 +
                                  (ulonglong)
                                  *(uint *)(*(longlong *)*UNRECOVERED_JUMPTABLE_00 + 0x138) * 4));
    return pauVar27;
  case (code)0x10:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (code)0x11:
  case (code)0x13:
  case (code)0x14:
    puVar24 = (undefined8 *)&stack0xffffffffffffff50;
    cVar15 = '\x12';
    do {
      unaff_RBP = (undefined1 (*) [16])(unaff_RBP[-1] + 8);
      puVar24 = puVar24 + -1;
      *puVar24 = *(undefined8 *)*unaff_RBP;
      cVar15 = cVar15 + -1;
    } while ('\0' < cVar15);
    fVar72 = fVar72 + _DAT_14303aa00;
    goto code_r0x000140a36cae;
  case (code)0x12:
    (*pauVar25)[0] = (*pauVar25)[0] + (char)cVar6;
    bVar62 = _DAT_142e37900 == fVar72;
    bVar60 = _DAT_142e37900 < fVar72;
  case (code)0x16:
  case (code)0x18:
  case (code)0x19:
    if (bVar60 || bVar62) {
code_r0x000140a36cae:
      fVar72 = fVar72 + _DAT_14303aa00;
      uVar54 = 2;
    }
    *(uint *)(unaff_RDI[1] + 8) = uVar54;
    *(float *)(unaff_RDI[1] + 0xc) = fVar72;
code_r0x000140a36cc5:
                    /* WARNING: Could not recover jumptable at 0x000140a36cdc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pauVar27 = (undefined1 (*) [16])
               (*(code *)(&UNK_14303b5c8 +
                         *(int *)(&UNK_14303b5c8 +
                                 (ulonglong)
                                 *(uint *)(*(longlong *)*UNRECOVERED_JUMPTABLE_00 + 0x138) * 4)))
                         (*(longlong *)*UNRECOVERED_JUMPTABLE_00,
                          &UNK_14303b5c8 +
                          *(int *)(&UNK_14303b5c8 +
                                  (ulonglong)
                                  *(uint *)(*(longlong *)*UNRECOVERED_JUMPTABLE_00 + 0x138) * 4));
    return pauVar27;
  case (code)0x15:
    goto code_r0x000140a36d71;
  case (code)0x17:
    *(int *)(CONCAT71((int7)((ulonglong)UNRECOVERED_JUMPTABLE_00 >> 8),
                      bVar30 + unaff_RBP[3][(longlong)UNRECOVERED_JUMPTABLE_00 * 4 + 0xc]) + -0x3f)
         = (int)in_ST0;
    out(2,uVar86);
    unaff_R15 = (undefined1 (*) [16])(*unaff_R15 + *(longlong *)(*unaff_RDI + 8));
    pauVar25 = unaff_R14;
    goto code_r0x000140a36d71;
  case (code)0x1a:
    return pauVar25;
  case (code)0x1b:
    *(undefined1 (*) [16])(unaff_RDI[1] + 0xc) = auVar68;
    goto code_r0x000140a36cc5;
  case (code)0x1c:
    *(uint *)*pauVar25 = *(int *)*pauVar25 + uVar54;
    (*unaff_RDI)[0] = (*unaff_RDI)[0] + bVar30;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (code)0x1d:
    pauVar25[-8][9] = pauVar25[-8][9] + bVar30 + bVar60;
    pauVar25[-8][5] = pauVar25[-8][5] & bVar30;
    (*pauStack_a8)[0] =
         (byte)(*pauStack_a8)[0] >> (bVar30 & 7) | (*pauStack_a8)[0] << 8 - (bVar30 & 7);
    (*pauVar25)[0] = (*pauVar25)[0] + (char)cVar6;
    pauVar25[3][9] = pauVar25[3][9] + bVar30;
    *(uint *)*pauStack_a8 =
         *(uint *)*pauStack_a8 >> (bVar30 & 0x1f) | *(int *)*pauStack_a8 << 0x20 - (bVar30 & 0x1f);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (code)0x1e:
    goto code_r0x000140a36d92;
  case (code)0x1f:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (code)0x20:
    *(undefined4 *)(unaff_RSI[-0x7341bf0] + 2) = *(undefined4 *)(unaff_RSI[-0x7341bf0] + 2);
    (*pauVar25)[0] = (*pauVar25)[0] + (char)cVar6;
    pauVar25[-8][0xd] = pauVar25[-8][0xd] + bVar30;
    goto code_r0x000140a36f5c;
  case (code)0x21:
    goto code_r0x000140a36f7d;
  case (code)0x22:
    goto code_r0x000140a36f8e;
  case (code)0x23:
    UNRECOVERED_JUMPTABLE = (code *)(pauVar25[-8] + 9);
    *(uint *)UNRECOVERED_JUMPTABLE =
         *(uint *)UNRECOVERED_JUMPTABLE >> 1 |
         (uint)((*(uint *)UNRECOVERED_JUMPTABLE & 1) != 0) << 0x1f;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (code)0x24:
    pbVar3 = (byte *)((longlong)pauVar25 * 2);
    *pbVar3 = *pbVar3 << 1 | (char)*pbVar3 < '\0';
    pauVar25[-8][0xd] = pauVar25[-8][0xd] + bVar30;
    goto code_r0x000140a36faf;
  case (code)0x25:
    ppauVar37 = (undefined1 (**) [16])&stack0xffffffffffffff50;
    pauVar25[-8][0xb] = pauVar25[-8][0xb] + bVar30;
    *(undefined2 *)(*pauVar25 + (longlong)unaff_RSI * 8) = in_FS;
    (*pauVar25)[0] = (*pauVar25)[0] + (char)cVar6;
    pauVar25[-8][9] = pauVar25[-8][9] + bVar30;
    *(uint *)(UNRECOVERED_JUMPTABLE_00[0x1db8085] + 1) =
         *(int *)(UNRECOVERED_JUMPTABLE_00[0x1db8085] + 1) + uVar31;
    *(uint *)*pauVar25 = *(int *)*pauVar25 + uVar86;
    UNRECOVERED_JUMPTABLE = (code *)(UNRECOVERED_JUMPTABLE_00[-8] + 3);
    cVar4 = *UNRECOVERED_JUMPTABLE;
    *UNRECOVERED_JUMPTABLE = (code)((char)*UNRECOVERED_JUMPTABLE + (char)cVar6);
    if (*UNRECOVERED_JUMPTABLE == (code)0x0 ||
        SCARRY1((char)cVar4,(char)cVar6) != (char)*UNRECOVERED_JUMPTABLE < '\0') {
      return (undefined1 (*) [16])0x0;
    }
    *(int *)*UNRECOVERED_JUMPTABLE_00 = *(int *)*UNRECOVERED_JUMPTABLE_00 + iVar20;
    UNRECOVERED_JUMPTABLE = (code *)(*pauVar25 + (longlong)*unaff_RSI);
    *(int *)UNRECOVERED_JUMPTABLE = *(int *)UNRECOVERED_JUMPTABLE + 1;
    bVar62 = *(int *)UNRECOVERED_JUMPTABLE == 0;
    goto code_r0x000140a3763f;
  case (code)0x26:
  case (code)0x28:
  case (code)0x29:
    auVar87 = divps(in_XMM1,in_XMM1);
    auVar79 = auVar87._0_12_;
    goto code_r0x000140a379bb;
  case (code)0x27:
    auStack_50 = (undefined1  [8])unaff_XMM6_Qb;
    *(undefined2 *)(&pauStack_a8 + (longlong)unaff_RDI) = in_FS;
    (*pauVar25)[0] = (*pauVar25)[0] + (char)cVar6;
    *(uint *)*UNRECOVERED_JUMPTABLE_00 =
         *(int *)*UNRECOVERED_JUMPTABLE_00 << 0x14 | *(uint *)*UNRECOVERED_JUMPTABLE_00 >> 0xc;
    unaff_RBP = (undefined1 (*) [16])0x48005053;
    *(ulonglong *)(ulonglong)in_stack_00000048 =
         (ulonglong)
         (byte)(((char)cVar6 - (char)((ulonglong)UNRECOVERED_JUMPTABLE_00 >> 8)) -
               ((*(uint *)*UNRECOVERED_JUMPTABLE_00 & 1) != 0));
    *(undefined4 *)((ulonglong *)(ulonglong)in_stack_00000048 + 1) = 0;
    in_R11 = (undefined1 (*) [16])
             CONCAT71((int7)((ulonglong)in_R11 >> 8),*(uint *)unaff_R15[1] < 3 | (byte)unaff_RDI);
    pauVar25 = (undefined1 (*) [16])(ulonglong)*(byte *)((longlong)auStack_50 + 0x11d);
    unaff_RDI = (undefined1 (*) [16])0x0;
    bVar62 = *(byte *)((longlong)auStack_50 + 0x11d) == 6;
    ppauVar37 = &pauStack_a8;
code_r0x000140a3763f:
    unaff_RDI = (undefined1 (*) [16])((ulonglong)unaff_RDI & 0xffffffff);
    if (!bVar62) {
      unaff_RDI = pauVar25;
    }
    *(int *)*unaff_R12 = iVar20;
    uVar54 = (byte)unaff_RBX[0x4d][0] - 2;
    pauVar36 = (undefined1 (*) [16])(ulonglong)uVar54;
    bVar30 = (byte)in_R11;
    if (uVar54 < 4) {
      *(byte *)((longlong)ppauVar37 + 0x3a) = bVar30;
      if (((ulonglong)in_R11 & 1) == 0) {
LAB_140a37683:
                    /* WARNING: Could not recover jumptable at 0x000140a37695. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        pauVar27 = (undefined1 (*) [16])
                   (*(code *)(&UNK_14303b61c +
                             *(int *)(&UNK_14303b61c + (ulonglong)*(uint *)unaff_R15[1] * 4)))();
        return pauVar27;
      }
    }
    else {
      lVar22 = 0x100;
      if ((code)unaff_RBX[0x4d][0] != (code)0x0) {
        lVar22 = 0x1b8;
      }
      iVar7 = *(int *)(unaff_RBX[1] + lVar22 + 8);
      *(byte *)((longlong)ppauVar37 + 0x3a) = bVar30;
      if ((bVar30 & iVar7 == 0) == 0) goto LAB_140a37683;
    }
    uVar54 = *(uint *)*unaff_R14;
    *(float *)((longlong)ppauVar37 + 0x28) = (float)*(uint *)(*unaff_R14 + 4);
    *(float *)((longlong)ppauVar37 + 0x20) = (float)uVar54;
    unaff_R12 = (undefined1 (*) [16])((longlong)ppauVar37 + 0x140);
    *(undefined8 *)((longlong)ppauVar37 + -8) = 0x140a376e2;
    pauVar56 = unaff_RBX;
    pdb_1414c9450(unaff_R12);
    unaff_XMM7_Db = 0.0;
    unaff_XMM7_Dc = 0.0;
    unaff_XMM7_Dd = 0.0;
    in_XMM2 = ZEXT416((uint)(*(float *)*unaff_RBP / (float)*(uint *)*unaff_R14));
    fVar18 = (_DAT_142e36f28 - *(float *)(*unaff_RBP + 4)) / (float)*(uint *)(*unaff_R14 + 4);
    unaff_XMM7_Da = _DAT_142e36f28;
code_r0x000140a37716:
    fVar72 = in_XMM2._0_4_ + in_XMM2._0_4_ + _DAT_142e36f34;
    fVar18 = fVar18 + fVar18 + unaff_XMM7_Da;
    auVar68 = unaff_RBX[6];
    in_XMM3 = unaff_RBX[7];
    in_XMM2._0_4_ = fVar72 * *(float *)unaff_RBX[4];
    in_XMM2._4_4_ = fVar72 * *(float *)(unaff_RBX[4] + 4);
    in_XMM2._8_4_ = fVar72 * *(float *)(unaff_RBX[4] + 8);
    in_XMM2._12_4_ = fVar72 * *(float *)(unaff_RBX[4] + 0xc);
    in_XMM1._0_4_ = fVar18 * *(float *)unaff_RBX[5];
    in_XMM1._4_4_ = fVar18 * *(float *)(unaff_RBX[5] + 4);
    in_XMM1._8_4_ = fVar18 * *(float *)(unaff_RBX[5] + 8);
    in_XMM1._12_4_ = fVar18 * *(float *)(unaff_RBX[5] + 0xc);
    goto code_r0x000140a37742;
  case (code)0x2a:
    auVar87 = divps(in_XMM1,in_XMM3);
    fVar18 = auVar87._0_4_;
    goto code_r0x000140a37716;
  case (code)0x2b:
    goto code_r0x000140a37765;
  case (code)0x2c:
    ppauVar37 = &pauStack_a8;
    if (!bVar64) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    goto code_r0x000140a37742;
  case (code)0x2d:
    pauStack_a8 = pauVar55;
    ppauVar37 = &pauStack_a8;
code_r0x000140a37742:
    fVar19 = in_XMM1._0_4_ + in_XMM2._0_4_;
    fVar78 = in_XMM1._4_4_ + in_XMM2._4_4_;
    fVar80 = in_XMM1._8_4_ + in_XMM2._8_4_;
    fVar81 = in_XMM1._12_4_ + in_XMM2._12_4_;
    fVar18 = auVar68._4_4_;
    fVar72 = auVar68._12_4_;
    fVar66 = auVar68._8_4_;
    auVar83._0_4_ = auVar68._0_4_ + fVar19 + in_XMM3._0_4_;
    auVar83._4_4_ = fVar18 + fVar78 + in_XMM3._4_4_;
    auVar83._8_4_ = fVar66 + fVar80 + in_XMM3._8_4_;
    auVar83._12_4_ = fVar72 + fVar81 + in_XMM3._12_4_;
    in_XMM4._4_4_ = auVar83._12_4_;
    in_XMM4._0_4_ = auVar83._12_4_;
    in_XMM4._8_4_ = auVar83._12_4_;
    in_XMM4._12_4_ = auVar83._12_4_;
    in_XMM2 = divps(auVar83,in_XMM4);
    auVar68._0_4_ = auVar68._0_4_ * _DAT_14303aa10 + fVar19 + in_XMM3._0_4_;
    auVar68._4_4_ = fVar18 * _UNK_14303aa14 + fVar78 + in_XMM3._4_4_;
    auVar68._8_4_ = fVar66 * _UNK_14303aa18 + fVar80 + in_XMM3._8_4_;
    auVar68._12_4_ = fVar72 * _UNK_14303aa1c + fVar81 + in_XMM3._12_4_;
    ppauVar38 = ppauVar37;
code_r0x000140a37765:
    uVar51 = auVar68._12_4_;
    auVar73._4_4_ = uVar51;
    auVar73._0_4_ = uVar51;
    auVar73._8_4_ = uVar51;
    auVar73._12_4_ = uVar51;
    auVar87 = divps(auVar68,auVar73);
    auVar68._0_4_ = auVar87._0_4_ - in_XMM2._0_4_;
    auVar68._4_4_ = auVar87._4_4_ - in_XMM2._4_4_;
    auVar68._8_4_ = auVar87._8_4_ - in_XMM2._8_4_;
    auVar68._12_4_ = auVar87._12_4_ - in_XMM2._12_4_;
    auVar79._4_8_ = auVar73._8_8_;
    auVar79._0_4_ = auVar68._4_4_;
    auVar74._0_8_ = auVar79._0_8_ << 0x20;
    auVar74._8_4_ = auVar68._8_4_;
    auVar74._12_4_ = auVar68._12_4_;
    in_XMM1._8_8_ = auVar68._8_8_;
    in_XMM1._0_8_ = auVar74._8_8_;
    in_XMM2._0_4_ = auVar68._0_4_ * auVar68._0_4_;
    in_XMM2._4_4_ = auVar68._4_4_ * auVar68._4_4_;
    in_XMM2._8_4_ = auVar68._8_4_ * auVar68._8_4_;
    in_XMM2._12_4_ = auVar68._12_4_ * auVar68._12_4_;
    in_XMM3._4_4_ = in_XMM2._4_4_;
    in_XMM3._0_4_ = in_XMM2._4_4_;
    in_XMM3._8_4_ = in_XMM2._12_4_;
    in_XMM3._12_4_ = in_XMM2._12_4_;
    ppauVar44 = ppauVar38;
code_r0x000140a37783:
    uVar59 = (undefined8)in_ST2;
    in_XMM3._0_4_ = in_XMM3._0_4_ + in_XMM2._0_4_;
    fVar18 = in_XMM1._0_4_;
    in_XMM2._4_12_ = in_XMM1._4_12_;
    in_XMM2._0_4_ = SQRT(fVar18 * fVar18 + in_XMM3._0_4_);
    fVar72 = unaff_XMM7_Da / in_XMM2._0_4_;
    unaff_XMM8_Da = fVar72 * auVar68._0_4_;
    unaff_XMM8_Db = fVar72 * auVar68._4_4_;
    unaff_XMM8_Dc = unaff_XMM7_Dc * auVar68._8_4_;
    unaff_XMM8_Dd = unaff_XMM7_Dc * auVar68._12_4_;
    unaff_XMM7_Da = fVar72 * fVar18;
    UNRECOVERED_JUMPTABLE_00 = (undefined1 (*) [16])&UNK_14303b630;
    uVar57 = (ulonglong)*(int *)(&UNK_14303b630 + ((ulonglong)unaff_RDI & 0xff) * 4);
    bVar62 = 0xfffffffebcfc49cf < uVar57;
    pauVar27 = (undefined1 (*) [16])(&UNK_14303b630 + uVar57);
    cVar15 = (char)pauVar27;
    uVar28 = (uint7)((ulonglong)pauVar27 >> 8);
    uVar33 = SUB82(pauVar36,0);
    pauVar25 = pauVar27;
    pauVar53 = unaff_RDI;
    auVar87 = in_XMM1;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch((ulonglong)unaff_RDI & 0xff) {
    case 0:
      fVar18 = *(float *)((longlong)ppauVar44 + 0x180);
      unaff_XMM10._0_4_ = *(float *)((longlong)ppauVar44 + 0x184);
      fVar72 = *(float *)((longlong)ppauVar44 + 0x188);
      unaff_R12 = *(undefined1 (**) [16])((longlong)ppauVar44 + 0x40);
      break;
    case 1:
      fVar18 = *(float *)unaff_R13[2];
      unaff_XMM10._0_4_ = *(float *)(unaff_R13[2] + 4);
      fVar72 = *(float *)(unaff_R13[2] + 8);
      unaff_R12 = *(undefined1 (**) [16])((longlong)ppauVar44 + 0x40);
      break;
    case 2:
      fVar18 = *(float *)(unaff_R13[1] + 4);
      unaff_XMM10._0_4_ = *(float *)(unaff_R13[1] + 8);
      fVar72 = *(float *)(unaff_R13[1] + 0xc);
      goto code_r0x000140a377f3;
    case 3:
      fVar18 = *(float *)(unaff_R13[2] + 0xc);
      unaff_XMM10._0_4_ = *(float *)unaff_R13[3];
      fVar72 = *(float *)(unaff_R13[3] + 4);
code_r0x000140a377f3:
      unaff_XMM7_Db = 0.0;
      unaff_XMM7_Dc = 0.0;
      unaff_XMM7_Dd = 0.0;
      unaff_R12 = *(undefined1 (**) [16])((longlong)ppauVar44 + 0x40);
      unaff_XMM8_Da = _DAT_142e37b50;
      unaff_XMM8_Db = _UNK_142e37b54;
      unaff_XMM8_Dc = _UNK_142e37b58;
      unaff_XMM8_Dd = _UNK_142e37b5c;
      unaff_XMM7_Da = _DAT_142e36f34;
      break;
    case 4:
      goto code_r0x000140a37833;
    case 5:
      unaff_XMM7_Db = 0.0;
      unaff_XMM7_Dc = 0.0;
      unaff_XMM7_Dd = 0.0;
      unaff_XMM8_Da = _DAT_142e37b50;
      unaff_XMM8_Db = _UNK_142e37b54;
      unaff_XMM8_Dc = _UNK_142e37b58;
      unaff_XMM8_Dd = _UNK_142e37b5c;
      unaff_XMM7_Da = _DAT_142e36f34;
      goto code_r0x000140a37833;
    case 6:
      UNK_14303b626 = UNK_14303b626 + cVar15;
      return pauVar27;
    case 7:
      goto code_r0x000140a37a66;
    default:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 10:
      *(undefined8 *)((longlong)ppauVar44 + -8) = 0x140a37a62;
      pauVar27 = (undefined1 (*) [16])func_0x00014fa37a62();
      auVar68._8_8_ = extraout_XMM0_Qb;
      auVar68._0_8_ = extraout_XMM0_Qa;
      (*pauVar27)[0] = (*pauVar27)[0] + (char)pauVar27;
      goto code_r0x000140a37a66;
    case 0xc:
      uVar57 = (ulonglong)pauVar27 ^ 0x24;
      goto code_r0x000140a37d74;
    case 0xd:
      *(short *)(&UNK_14303b5bd + uVar57) = (short)in_ST0;
      halt_baddata();
    case 0xe:
      *(int *)(uVar57 + 0x286076c60) = *(int *)(uVar57 + 0x286076c60) + (int)pauVar27 + (uint)bVar62
      ;
      goto code_r0x000140a37e00;
    case 0xf:
      goto code_r0x000140a37e33;
    case 0x10:
      cVar6 = (code)in(uVar33);
      (*unaff_RDI)[0] = cVar6;
      unaff_RDI = (undefined1 (*) [16])(*unaff_RDI + 1);
      goto code_r0x000140a37e00;
    case 0x11:
      *(short *)(&UNK_14303b5bd + uVar57) = (short)in_ST0;
      unaff_RSI = (undefined1 (*) [16])(ulonglong)*(uint *)(&UNK_14303b632 + uVar57);
      (*pauVar27)[0] = (*pauVar27)[0] + cVar15;
      puVar26 = &UNK_143397968;
      in_ST0 = in_ST1;
      in_ST2 = in_ST3;
      goto code_r0x000140a37e93;
    case 0x12:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0x13:
      goto code_r0x000140a3819a;
    case 0x14:
      (*pauVar27)[0] = (*pauVar27)[0] + cVar15;
      unaff_RBX[0x413c244][4] = unaff_RBX[0x413c244][4] + 0x30;
      goto code_r0x000140a3818a;
    case 0x15:
      goto code_r0x000140a38185;
    case 0x16:
      (*pauVar27)[0] = (*pauVar27)[0] + cVar15;
      goto code_r0x000140a3817d;
    case 0x17:
      ppauVar44 = (undefined1 (**) [16])(*unaff_RBP + 8);
      unaff_RBP = *(undefined1 (**) [16])*unaff_RBP;
      goto code_r0x000140a3819a;
    case 0x18:
      unaff_RSI[0x14303b61][0] = unaff_RSI[0x14303b61][0] + '0';
      pauVar25 = unaff_RBP;
      goto code_r0x000140a387dd;
    case 0x19:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0x1a:
      ppauVar44 = (undefined1 (**) [16])(ulonglong)*(uint *)((longlong)ppauVar44 + 0x40);
      goto code_r0x000140a38800;
    case 0x1b:
      UNK_14303b5b9 = UNK_14303b5b9 + cVar15;
      goto code_r0x000140a38800;
    case 0x1c:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0x1d:
      goto code_r0x000140a38837;
    case 0x1e:
      (*pauVar27)[0] = (*pauVar27)[0] + cVar15;
      goto code_r0x000140a38ae7;
    case 0x1f:
      (*unaff_RDI)[0] = (*unaff_RDI)[0] + 0x30;
      *(int *)unaff_RBX[10] = *(int *)unaff_RBX[10] - (int)pauVar36;
      goto code_r0x000140a38a40;
    case 0x20:
      piVar47 = (int *)((ulonglong)uVar28 << 8);
      *piVar47 = *piVar47 + (int)piVar47;
      (*unaff_RDI)[0] = (*unaff_RDI)[0] + 0x30;
      goto code_r0x000140a38ac2;
    case 0x21:
      goto code_r0x000140a38acc;
    case 0x22:
      *(int *)unaff_RBX[0xb] = *(int *)unaff_RBX[0xb] - (int)unaff_RBX;
      goto code_r0x000140a38a40;
    case 0x23:
      (*pauVar27)[0] = (*pauVar27)[0];
      (*unaff_RDI)[0] = (*unaff_RDI)[0] + 0x30;
      *(int *)unaff_RBX[0xd] = *(int *)unaff_RBX[0xd] + -0x4303b630;
      goto code_r0x000140a38ae7;
    case 0x24:
      (&UNK_14303b603)[uVar57] = (&UNK_14303b603)[uVar57] + '0';
      *(undefined **)((longlong)ppauVar44 + -8) = &UNK_140a38d37;
      func_0x00010d7059fa();
      UNRECOVERED_JUMPTABLE = (code *)swi(3);
      pauVar27 = (undefined1 (*) [16])(*UNRECOVERED_JUMPTABLE)();
      return pauVar27;
    case 0x25:
      goto code_r0x000140a38d73;
    case 0x26:
      UNK_14303b630 = in(uVar33);
      *(char *)CONCAT71(uVar28,UNK_14303b630) =
           *(char *)CONCAT71(uVar28,UNK_14303b630) + UNK_14303b630;
      goto code_r0x000140a38d45;
    case 0x27:
      goto code_r0x000140a38d5d;
    case 0x28:
      UNRECOVERED_JUMPTABLE = (code *)swi(3);
      pauVar27 = (undefined1 (*) [16])(*UNRECOVERED_JUMPTABLE)();
      return pauVar27;
    case 0x29:
      UNRECOVERED_JUMPTABLE = (code *)(unaff_RBX[-0x74b7e3c] + 1);
      *(uint *)UNRECOVERED_JUMPTABLE =
           *(uint *)UNRECOVERED_JUMPTABLE >> 0x19 | *(uint *)UNRECOVERED_JUMPTABLE << 7;
      goto code_r0x000140a38d8a;
    case 0x2a:
    case 0x2b:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0x2c:
      *(int *)(*unaff_RSI + 0xf) = *(int *)(*unaff_RSI + 0xf) + (int)ppauVar44;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0x2d:
      *(undefined1 (**) [16])((longlong)ppauVar44 + -8) = pauVar27;
      lVar22 = CONCAT71(uVar28,cVar15 + -0x15 + bVar62);
      uVar86 = *(int *)(lVar22 + -0x75) + 0x4303b630;
      UNRECOVERED_JUMPTABLE_00 = (undefined1 (*) [16])(ulonglong)uVar86;
      puVar2 = (uint *)(lVar22 + -0x75);
      uVar54 = *puVar2;
      *puVar2 = *puVar2 + uVar86;
      pauVar25 = (undefined1 (*) [16])
                 (ulonglong)
                 ((int)lVar22 + *(int *)(*unaff_RBX + (longlong)UNRECOVERED_JUMPTABLE_00 * 4 + 2) +
                 (uint)CARRY4(uVar54,uVar86));
      goto code_r0x000140a3945c;
    case 0x2e:
      goto code_r0x000140a393ab;
    case 0x2f:
      goto code_r0x000140a399c9;
    case 0x30:
      uVar54 = (int)pauVar27 + *(int *)*pauVar27 + (uint)bVar62;
      *(char *)(ulonglong)uVar54 = *(char *)(ulonglong)uVar54 + (char)uVar54;
      goto code_r0x000140a39a46;
    case 0x31:
      *(undefined1 (**) [16])unaff_RBP[-1] = unaff_RDI;
      goto code_r0x000140a39a2a;
    case 0x32:
      goto code_r0x000140a39a34;
    case 0x33:
      (*pauVar27)[0] = (*pauVar27)[0] + cVar15;
      in(uVar33);
      goto code_r0x000140a39a2a;
    case 0x34:
      *(undefined1 (**) [16])((longlong)ppauVar44 + 0x10) = pauVar36;
      *(undefined1 (**) [16])((longlong)ppauVar44 + -8) = unaff_RBP;
      puVar46 = (ulonglong *)((longlong)ppauVar44 + -0x10);
      ppauVar44 = (undefined1 (**) [16])((longlong)ppauVar44 + -0x10);
      *puVar46 = (ulonglong)unaff_RSI;
      goto code_r0x000140a39a57;
    case 0x35:
    case 0x36:
    case 0x37:
      ffree(in_ST1);
      uVar54 = *(uint *)(unaff_RDI[-0x603dfc1] + 0xd);
      uVar57 = (ulonglong)uVar54 << 4;
      *(uint *)(unaff_RDI[-0x603dfc1] + 0xd) = uVar54 >> 0x1d | (uint)uVar57;
      uVar54 = *(uint *)(unaff_RDI[-0x603bdb1] + 0xd);
      *(uint *)(unaff_RDI[-0x603bdb1] + 0xd) =
           (uint)(CONCAT14((uVar57 & 0x100000000) != 0,uVar54) >> 0x1d) | uVar54 << 4;
      halt_baddata();
    }
    goto code_r0x000140a37929;
  case (code)0x2e:
    in_XMM2._0_4_ = in_XMM2._0_4_ * fVar18;
    in_XMM2._4_4_ = 0.0;
    in_XMM2._8_4_ = fVar81 * fVar78;
    in_XMM2._12_4_ = fVar66 * fVar80;
    ppauVar44 = &pauStack_a8;
    goto code_r0x000140a37783;
  case (code)0x2f:
    (*unaff_RDI)[0] = (byte)(*unaff_RDI)[0] >> 1 | (*unaff_RDI)[0] << 7;
    unaff_RBX = (undefined1 (*) [16])CONCAT71((int7)((ulonglong)unaff_RBX >> 8),cVar15 << 1);
    in_XMM3._8_8_ = uVar23;
    ppauVar44 = (undefined1 (**) [16])auStack_a0;
    goto code_r0x000140a37783;
  case (code)0x30:
    ppauVar39 = &pauStack_a8;
    goto code_r0x000140a3798c;
  case (code)0x31:
    ppauVar40 = (undefined1 (**) [16])(*unaff_RBP + 8);
    unaff_RBP = *(undefined1 (**) [16])*unaff_RBP;
    goto code_r0x000140a379bb;
  case (code)0x32:
  case (code)0x33:
  case (code)0x35:
    goto code_r0x000140a3798c;
  case (code)0x34:
    (*unaff_RDI)[0] = (byte)(*unaff_RDI)[0] >> 1 | (*unaff_RDI)[0] << 7;
    return pauVar25;
  case (code)0x36:
    (*unaff_RBX)[0] = (*unaff_RBX)[0] + (char)cVar6 + bVar60;
    bVar62 = (code)(*unaff_RBX)[0] == (code)0x0;
    ppauVar44 = &pauStack_a8;
    goto code_r0x000140a37cd8;
  case (code)0x37:
    goto code_r0x000140a37d9e;
  case (code)0x38:
    in(0x2c);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (code)0x39:
    *(uint *)*pauVar25 = *(int *)*pauVar25 + uVar86;
    (*unaff_RDI)[0] = (*unaff_RDI)[0] + bVar30;
    pbVar3 = (byte *)((longlong)pauVar25 * 2);
    *pbVar3 = *pbVar3 << 1 | (char)*pbVar3 < '\0';
    goto code_r0x000140a37d96;
  case (code)0x3a:
    *(uint *)*unaff_RDI = *(uint *)*unaff_RDI >> 0x14 | *(int *)*unaff_RDI << 0xc;
    uVar57 = (ulonglong)(uVar86 + 0x23ffa6c);
    ppauVar44 = &pauStack_a8;
    goto code_r0x000140a37d74;
  case (code)0x3b:
    UNRECOVERED_JUMPTABLE = (code *)((ulonglong)UNRECOVERED_JUMPTABLE_00 & 0xffffffff);
    goto code_r0x000140a37dac;
  case (code)0x3c:
    in_XMM1._0_4_ = fVar18 * unaff_XMM9_Da;
    in_XMM1._4_4_ = fVar19 * unaff_XMM9_Db;
    in_XMM1._8_4_ = fVar78 * unaff_XMM9_Dc;
    in_XMM1._12_4_ = fVar80 * unaff_XMM9_Dd;
    goto code_r0x000140a380cc;
  case (code)0x3d:
    goto code_r0x000140a380ef;
  case (code)0x3e:
    pcVar21 = (char *)((ulonglong)(byte)cVar6 | 1);
    *pcVar21 = *pcVar21 + (char)pcVar21;
    ppauVar41 = &pauStack_a8;
    goto code_r0x000140a380df;
  case (code)0x3f:
    (*unaff_RDI)[0] = (byte)(*unaff_RDI)[0] >> 4 | (*unaff_RDI)[0] << 4;
    ppauVar42 = (undefined1 (**) [16])auStack_a0;
    goto code_r0x000140a380ef;
  case (code)0x40:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (code)0x41:
    (*unaff_RDI)[0] = (*unaff_RDI)[0] + bVar30;
    ppauVar44 = &pauStack_a8;
    goto code_r0x000140a38107;
  case (code)0x42:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (code)0x43:
    goto code_r0x000140a3877d;
  case (code)0x44:
    *unaff_RDI = in_XMM1;
    goto code_r0x000140a38750;
  case (code)0x45:
    pauVar25[-8][0xb] = pauVar25[-8][0xb] + bVar30;
    unaff_RBX = (undefined1 (*) [16])0x458;
    ppauVar43 = &pauStack_a8;
code_r0x000140a38750:
    *(float *)*unaff_R15 = unaff_XMM9_Da;
    *(float *)(*unaff_R15 + 4) = unaff_XMM9_Db;
    *(float *)(*unaff_R15 + 8) = unaff_XMM9_Dc;
    *(float *)(*unaff_R15 + 0xc) = unaff_XMM9_Dd;
    unaff_XMM7_Da = unaff_XMM7_Da + _DAT_142e378e0;
    unaff_XMM7_Db = unaff_XMM7_Db + _UNK_142e378e4;
    unaff_XMM8_Da = unaff_XMM8_Da + 0.0;
    pauVar25 = *(undefined1 (**) [16])unaff_RBX[0x45];
    unaff_RDI = (undefined1 (*) [16])(*(longlong *)(unaff_RBX[0x45] + 8) << 4);
    unaff_R14 = (undefined1 (*) [16])((longlong)ppauVar43 + 0x140);
    ppauVar14 = ppauVar43;
code_r0x000140a3877d:
    ppauVar44 = ppauVar14;
    unaff_R12 = (undefined1 (*) [16])0x990135eacca0220c;
    unaff_R13 = (undefined1 (*) [16])0x450831ed88cc926;
code_r0x000140a387a0:
    do {
      do {
        if (unaff_RDI == (undefined1 (*) [16])0x0) {
          puVar26 = &UNK_14337fa75;
          goto code_r0x000140a38cd0;
        }
        pauVar27 = pauVar25 + 1;
        auVar87._0_8_ = *(undefined8 *)*pauVar25;
        UNRECOVERED_JUMPTABLE = *(code **)(*(longlong *)(*pauVar25 + 8) + 0x40);
        *(undefined8 *)((longlong)ppauVar44 + -8) = 0x140a387b7;
        unaff_R15 = (undefined1 (*) [16])(*UNRECOVERED_JUMPTABLE)(auVar87._0_8_);
        UNRECOVERED_JUMPTABLE = *(code **)(pauVar36[1] + 8);
        *(undefined8 *)((longlong)ppauVar44 + -8) = 0x140a387c6;
        pauVar36 = unaff_R15;
        (*UNRECOVERED_JUMPTABLE)(unaff_R14);
        unaff_RDI = unaff_RDI + -1;
        pauVar25 = pauVar27;
      } while (unaff_R15 == (undefined1 (*) [16])0x0);
      pauVar27 = (undefined1 (*) [16])
                 (*(ulonglong *)((longlong)ppauVar44 + 0x140) ^ (ulonglong)unaff_R12);
code_r0x000140a387dd:
      unaff_RBP = pauVar25;
    } while (*(undefined1 (**) [16])((longlong)ppauVar44 + 0x148) != unaff_R13 ||
             pauVar27 != (undefined1 (*) [16])0x0);
    goto code_r0x000140a387f0;
  case (code)0x46:
    goto code_r0x000140a3873f;
  case (code)0x47:
    ppauVar44 = (undefined1 (**) [16])&stack0xffffffffffffff50;
    pauVar25 = (undefined1 (*) [16])(ulonglong)(byte)((char)cVar6 + 0x66);
    goto code_r0x000140a387a0;
  case (code)0x48:
    ppauVar44 = (undefined1 (**) [16])0xd024;
    (*unaff_RDI)[0] = (*unaff_RDI)[0] + bVar30;
    iRam000000000000d154 = iRam000000000000d154 - (int)unaff_RDI;
    goto code_r0x000140a38a40;
  case (code)0x49:
    *(uint *)*pauVar25 = *(int *)*pauVar25 + uVar86;
    (*unaff_RDI)[0] = (*unaff_RDI)[0] + bVar30;
    ppauVar44 = &pauStack_a8;
    goto code_r0x000140a38a10;
  case (code)0x4a:
    *(int *)(ulonglong)bRam0024bc290f000000 =
         *(int *)(ulonglong)bRam0024bc290f000000 + (uint)bRam0024bc290f000000;
    (*unaff_RDI)[0] = (*unaff_RDI)[0] + bVar30;
    ppauVar44 = &pauStack_a8;
    goto code_r0x000140a38a28;
  case (code)0x4b:
    ppauVar44 = &pauStack_a8;
    goto code_r0x000140a38a28;
  case (code)0x4c:
    piVar47 = (int *)((ulonglong)pauVar25 & 0xffffffffffffff40);
    *piVar47 = *piVar47 + (int)piVar47;
    (*unaff_RDI)[0] = (*unaff_RDI)[0] + bVar30;
    ppauVar44 = &pauStack_a8;
    goto code_r0x000140a38a18;
  case (code)0x4d:
    (*pauVar25)[0] = (*pauVar25)[0];
    (*unaff_RDI)[0] = (*unaff_RDI)[0] + bVar30;
    ppauVar44 = &pauStack_a8;
    goto code_r0x000140a38a40;
  case (code)0x4e:
    (unaff_RDI[2] + 8)[(longlong)UNRECOVERED_JUMPTABLE_00] =
         (unaff_RDI[2] + 8)[(longlong)UNRECOVERED_JUMPTABLE_00] + (char)cVar6;
    pcVar21 = (char *)((ulonglong)
                       (byte)((char)(char *)((ulonglong)pauVar25 & 0xffffffffffffff90) +
                             *(char *)((ulonglong)pauVar25 & 0xffffffffffffff90)) - 0x7f);
    *pcVar21 = *pcVar21 + bVar30;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (code)0x4f:
    goto code_r0x000140a38ccb;
  case (code)0x50:
    return pauVar25;
  case (code)0x51:
    *(uint *)*pauVar25 = *(int *)*pauVar25 + uVar86;
    pauVar25[-4][7] = pauVar25[-4][7] + bVar30;
    *(uint *)*pauVar25 = *(int *)*pauVar25 + uVar86;
    (*pauVar25)[0] = (*pauVar25)[0] + (char)cVar6;
    goto code_r0x000140a38ccb;
  case (code)0x52:
    return pauVar25;
  case (code)0x53:
    *(uint *)*pauVar25 = *(int *)*pauVar25 + uVar86;
    (*unaff_RDI)[0] = (*unaff_RDI)[0] + cVar15;
    (*pauVar25)[0] = (*pauVar25)[0] + (char)cVar6;
    pauVar25[-8][0xd] = pauVar25[-8][0xd] + bVar30;
    *(uint *)*pauVar25 = *(int *)*pauVar25 + uVar86;
    pauVar25[-8][9] = pauVar25[-8][9] + bVar30;
    *(uint *)*pauVar25 = *(int *)*pauVar25 + uVar86;
    pauVar25[-8][0xd] = pauVar25[-8][0xd] + bVar30;
    UNRECOVERED_JUMPTABLE = (code *)(ulonglong)(uVar86 - 0x74b8fb);
    ppauVar44 = &pauStack_a8;
    goto code_r0x000140a38cfb;
  case (code)0x54:
  case (code)0x55:
    *(int *)(unaff_RDI[4] + 1) = *(int *)(unaff_RDI[4] + 1) + 1;
                    /* WARNING: Subroutine does not return */
    pdb_142dc81f2(2,0,&UNK_14303b180);
  case (code)0x56:
    if (!bVar62 && -0x14303b589 < (longlong)uVar57) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    uVar57 = 0;
    if (((int)uVar31 < 0x7f800000 && bVar61) && ((uint)pauVar58 & 0x7fffffff) < 0x7f800000) {
      **(undefined4 **)UNRECOVERED_JUMPTABLE_00[1] =
           *(undefined4 *)(UNRECOVERED_JUMPTABLE_00[1] + 0xc);
      lVar22 = *(longlong *)*UNRECOVERED_JUMPTABLE_00;
      *(undefined8 *)(lVar22 + 0x20) = auVar87._0_8_;
      *(float *)(lVar22 + 0x28) = fVar72;
      uVar57 = *(ulonglong *)pauVar25[1];
    }
    if (uVar57 < 4) {
                    /* WARNING: Subroutine does not return */
      pdb_142dc81f2(3,uVar57,&UNK_14303b198);
    }
    goto code_r0x000140a392b5;
  case (code)0x57:
    goto code_r0x000140a393a7;
  case (code)0x58:
    goto code_r0x000140a39303;
  case (code)0x59:
    *(int *)(pauVar25[-8] + 5) = *(int *)(pauVar25[-8] + 5) + -1;
    (*unaff_RDI)[0] = (byte)(*unaff_RDI)[0] >> 4 | (*unaff_RDI)[0] << 4;
    (*pauVar25)[0] = (*pauVar25)[0] + (char)cVar6;
    auVar68._1_6_ = _UNK_14303b311;
    auVar68[0] = DAT_14303b310;
    auVar68._7_9_ = _UNK_14303b317;
    break;
  case (code)0x5a:
    (*pauVar25)[0] = (*pauVar25)[0] + (char)cVar6;
    break;
  case (code)0x5b:
    *(uint *)*unaff_RDI = *(uint *)*unaff_RDI | uVar31;
    DAT_14303b307 = DAT_14303b307 + (char)cVar6;
    break;
  case (code)0x5c:
    *(uint *)*pauVar25 = (*(int *)*pauVar25 - uVar86) - (uint)bVar60;
    (*pauVar25)[0] = (*pauVar25)[0] + (char)cVar6;
    break;
  case (code)0x5d:
    DAT_14303b310 = DAT_14303b310 + (char)cVar6 + bVar60;
    break;
  case (code)0x5e:
    goto code_r0x000140a399a8;
  case (code)0x5f:
  case (code)0x60:
  case (code)0x61:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(undefined1 (*) [16])(*pauVar25 + 9) = auVar68;
  auVar87._0_8_ = CONCAT62(_UNK_14303b311,CONCAT11(DAT_14303b310,UNK_14303b30f));
  *(ulonglong *)*pauVar25 = CONCAT71(_UNK_14303b308,DAT_14303b307);
  *(undefined8 *)(*pauVar25 + 8) = auVar87._0_8_;
  *(undefined8 *)*unaff_RDI = 0x19;
  *(undefined1 (**) [16])(*unaff_RDI + 8) = pauVar25;
  *(undefined8 *)unaff_RDI[1] = 0x19;
  *(undefined8 *)(unaff_RBP[-3] + 8) = 1;
  *(undefined1 (**) [16])unaff_RBP[-2] = unaff_RDI;
code_r0x000140a399a8:
  *(undefined8 *)(unaff_RBP[-2] + 8) = 1;
  pdb_14007ee60(UNRECOVERED_JUMPTABLE_00,0);
  pauVar27 = (undefined1 (*) [16])pub_1406abab0(0x13,1);
  if (pauVar27 != (undefined1 (*) [16])0x0) {
code_r0x000140a399c9:
    auVar87._0_8_ = _UNK_14303b328;
    *(undefined8 *)*pauVar27 = _DAT_14303b320;
    *(undefined8 *)(*pauVar27 + 8) = auVar87._0_8_;
    *(undefined4 *)(*pauVar27 + 0xf) = 0x65636e65;
    auVar87._0_8_ = *(undefined8 *)unaff_RBP[-2];
    *(undefined8 *)*unaff_RSI = *(undefined8 *)(unaff_RBP[-3] + 8);
    *(undefined8 *)(*unaff_RSI + 8) = auVar87._0_8_;
    *(undefined8 *)unaff_RSI[1] = *(undefined8 *)(unaff_RBP[-2] + 8);
    *(undefined8 *)(unaff_RSI[1] + 8) = 0x13;
    *(undefined1 (**) [16])unaff_RSI[2] = pauVar27;
    *(undefined8 *)(unaff_RSI[2] + 8) = 0x13;
    *(undefined8 *)unaff_RSI[3] = 0x8000000000000000;
    return unaff_RSI;
  }
  UNRECOVERED_JUMPTABLE_00 = (undefined1 (*) [16])0x1;
  ppauVar44 = &pauStack_a8;
code_r0x000140a39a46:
  *(undefined8 *)((longlong)ppauVar44 + -8) = 0x140a39a4b;
  pdb_142dc7e2a(UNRECOVERED_JUMPTABLE_00);
LAB_140a39a4c:
                    /* WARNING: Does not return */
  UNRECOVERED_JUMPTABLE = (code *)invalidInstructionException();
  (*UNRECOVERED_JUMPTABLE)();
code_r0x000140a37a66:
  fVar19 = in_XMM1._0_4_;
  fVar72 = auVar68._0_4_;
  fVar18 = in_XMM2._0_4_;
  bVar30 = (char)UNRECOVERED_JUMPTABLE_00 + (char)((ulonglong)UNRECOVERED_JUMPTABLE_00 >> 8);
  UNRECOVERED_JUMPTABLE_00 = (undefined1 (*) [16])(ulonglong)bVar30;
  cVar15 = (char)pauVar27 + *(char *)(longlong)(int)pauVar27;
  piVar47 = (int *)CONCAT71((int7)((ulonglong)pauVar27 >> 8),cVar15);
  *(char *)((longlong)piVar47 + -0x73) = *(char *)((longlong)piVar47 + -0x73) + bVar30;
  *piVar47 = *piVar47 + 1;
  *(char *)piVar47 = (char)*piVar47 + cVar15;
  goto code_r0x000140a37a6c;
code_r0x000140a38d5f:
  *(int *)((longlong)ppauVar44 + 0x150) = *(int *)((longlong)ppauVar44 + 0x150) - (int)unaff_RDI;
  puVar45 = (undefined1 *)ppauVar44;
code_r0x000140a38d66:
  *(undefined8 *)(puVar45 + 0x140) = uVar5;
  *(undefined8 *)(puVar45 + 0x148) = 0;
  pauVar27 = *(undefined1 (**) [16])*pauVar36;
  pauVar36 = (undefined1 (*) [16])(ulonglong)*(uint *)*pauVar27;
code_r0x000140a38d73:
  auVar79 = in_XMM1._4_12_;
  auVar68._0_4_ = (float)(longlong)pauVar36;
  goto code_r0x000140a38d78;
code_r0x000140a38732:
  pauVar25 = (undefined1 (*) [16])
             (*(ulonglong *)((longlong)ppauVar44 + 0x140) ^ (ulonglong)unaff_R12);
  UNRECOVERED_JUMPTABLE_00 =
       (undefined1 (*) [16])(*(ulonglong *)((longlong)ppauVar44 + 0x148) ^ (ulonglong)unaff_R13);
code_r0x000140a3873f:
  *(undefined2 *)(*pauVar25 + (longlong)UNRECOVERED_JUMPTABLE_00 * 2) = in_FS;
  *(int *)*pauVar25 = *(int *)*pauVar25 + (int)pauVar25;
  (UNRECOVERED_JUMPTABLE_00[-2] + 9)[(longlong)unaff_RSI] =
       (UNRECOVERED_JUMPTABLE_00[-2] + 9)[(longlong)unaff_RSI] + (char)UNRECOVERED_JUMPTABLE_00;
  pauVar53 = unaff_RBP;
  ppauVar43 = ppauVar44;
  in_R11 = pauVar27;
  if (UNRECOVERED_JUMPTABLE_00 == (undefined1 (*) [16])0x0 && pauVar25 == (undefined1 (*) [16])0x0)
  goto code_r0x000140a38750;
  goto code_r0x000140a38700;
code_r0x000140a39a86:
  puVar49 = (ulonglong *)((longlong)ppauVar44 + -8);
  ppauVar44 = (undefined1 (**) [16])((longlong)ppauVar44 + -8);
  *puVar49 = (ulonglong)unaff_RSI;
  goto code_r0x000140a39a87;
code_r0x000140a38ccb:
  puVar26 = (undefined *)(ulonglong)(uVar86 + 0x2946da5);
  ppauVar44 = &pauStack_a8;
code_r0x000140a38cd0:
  *(undefined **)((longlong)ppauVar44 + 0x100) = puVar26;
  *(undefined8 *)((longlong)ppauVar44 + 0x108) = 0x1f;
code_r0x000140a38ce4:
  *(undefined1 **)((longlong)ppauVar44 + 0x140) = (undefined1 *)((longlong)ppauVar44 + 0x100);
  UNRECOVERED_JUMPTABLE = pdb_1402ed400;
code_r0x000140a38cfb:
  *(code **)((longlong)ppauVar44 + 0x148) = UNRECOVERED_JUMPTABLE;
                    /* WARNING: Subroutine does not return */
  *(undefined8 *)((longlong)ppauVar44 + -8) = 0x140a38d1e;
  pdb_142dc83d0(&UNK_14337f99a,(undefined1 *)((longlong)ppauVar44 + 0x140),&UNK_14337fa18);
code_r0x000140a36d71:
  if (unaff_RBX <= pauVar25 && (longlong)pauVar25 - (longlong)unaff_RBX != 0) {
    pub_142e32770(unaff_R15[2] + 4,unaff_R15,((longlong)pauVar25 - (longlong)unaff_RBX) * 0x24);
  }
  *(undefined4 *)unaff_R15[2] = pfStack_68._0_4_;
code_r0x000140a36d92:
  *(float **)unaff_R15[1] = uStack_78;
  *(code **)(unaff_R15[1] + 8) = pcStack_70;
  *(undefined8 *)*unaff_R15 = uStack_88;
  *(ulonglong *)(*unaff_R15 + 8) = CONCAT44(fStack_7c,fStack_80);
  *(undefined1 **)unaff_RDI[1] = *unaff_R14 + 1;
  *(undefined1 (**) [16])unaff_RDI[2] = unaff_RBX;
  iVar20 = *(int *)(unaff_RDI[1] + 8);
  if (iVar20 == 0) {
    return (undefined1 (*) [16])0x0;
  }
  if (iVar20 == 3) {
code_r0x000140a36f7d:
    pdb_140de9fd0();
  }
  else if (iVar20 != 2) {
    **(undefined4 **)unaff_RSI[1] = *(undefined4 *)(unaff_RSI[1] + 0xc);
    unaff_RBX = (undefined1 (*) [16])(*(longlong *)*unaff_RSI + 0x100);
    UNRECOVERED_JUMPTABLE_00 =
         (undefined1 (*) [16])(ulonglong)*(byte *)(*(longlong *)*unaff_RSI + 0x4d0);
    pauVar36 = (undefined1 (*) [16])&UNK_14303b604;
code_r0x000140a36f5c:
                    /* WARNING: Could not recover jumptable at 0x000140a36f66. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pauVar27 = (undefined1 (*) [16])
               (*(code *)(*pauVar36 + *(int *)(*pauVar36 + (longlong)UNRECOVERED_JUMPTABLE_00 * 4)))
                         (*pauVar36 + *(int *)(*pauVar36 + (longlong)UNRECOVERED_JUMPTABLE_00 * 4),
                          unaff_RBX);
    return pauVar27;
  }
code_r0x000140a36f8e:
  **(undefined4 **)unaff_RSI[1] = *(undefined4 *)(unaff_RSI[1] + 0xc);
  unaff_RBX = (undefined1 (*) [16])(*(longlong *)*unaff_RSI + 0x100);
  UNRECOVERED_JUMPTABLE_00 =
       (undefined1 (*) [16])(ulonglong)*(byte *)(*(longlong *)*unaff_RSI + 0x4d0);
code_r0x000140a36faf:
                    /* WARNING: Could not recover jumptable at 0x000140a36fc6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pauVar27 = (undefined1 (*) [16])
             (*(code *)(&UNK_14303b604 +
                       *(int *)(&UNK_14303b604 + (longlong)UNRECOVERED_JUMPTABLE_00 * 4)))
                       (&UNK_14303b604 +
                        *(int *)(&UNK_14303b604 + (longlong)UNRECOVERED_JUMPTABLE_00 * 4),unaff_RBX)
  ;
  return pauVar27;
code_r0x000140a37833:
  *(undefined8 *)((longlong)ppauVar44 + -8) = 0x140a37843;
  pdb_140e08f50((undefined1 *)((longlong)ppauVar44 + 0x100),unaff_RBX);
  unaff_R13 = (undefined1 (*) [16])((longlong)ppauVar44 + 0x60);
  *(undefined8 *)((longlong)ppauVar44 + -8) = 0x140a37853;
  pdb_140e08fa0(unaff_R13,unaff_RBX);
  fVar19 = *(float *)((longlong)ppauVar44 + 0x68) * _DAT_142e3c654;
  unaff_XMM10._0_4_ = (float)*(undefined8 *)((longlong)ppauVar44 + 0x60) * _DAT_1430155a0;
  fVar72 = (float)((ulonglong)*(undefined8 *)((longlong)ppauVar44 + 0x60) >> 0x20) * _UNK_1430155a4;
  auVar87._0_8_ = *(undefined8 *)((longlong)ppauVar44 + 0x100);
  fVar18 = *(float *)((longlong)ppauVar44 + 0x108);
  *(undefined8 *)((longlong)ppauVar44 + -8) = 0x140a37898;
  pdb_140e08fa0((undefined1 *)((longlong)ppauVar44 + 0x100),unaff_RBX);
  *(ulonglong *)((longlong)ppauVar44 + 0x60) =
       CONCAT44((float)((ulonglong)auVar87._0_8_ >> 0x20) + fVar72,
                (float)auVar87._0_8_ + unaff_XMM10._0_4_);
  *(float *)((longlong)ppauVar44 + 0x68) = fVar19 + fVar18;
  *(undefined8 *)((longlong)ppauVar44 + 0x6c) = *(undefined8 *)((longlong)ppauVar44 + 0x100);
  *(undefined4 *)((longlong)ppauVar44 + 0x74) = *(undefined4 *)((longlong)ppauVar44 + 0x108);
  pauVar55 = unaff_R12;
  if ((byte)unaff_RDI != 4) {
    pauVar55 = unaff_R13;
  }
  in_XMM3 = ZEXT416(_DAT_142e36f3c);
  *(undefined8 *)((longlong)ppauVar44 + -8) = 0x140a378e5;
  pdb_1419c14e0((undefined1 *)((longlong)ppauVar44 + 0x100),
                *(undefined8 *)((longlong)ppauVar44 + 0x200));
  iVar7 = *(int *)((longlong)ppauVar44 + 0x100);
  if (iVar7 == 0) {
    fVar18 = 0.0;
  }
  else {
    fVar18 = *(float *)((longlong)ppauVar44 + 0x108);
  }
  unaff_R12 = *(undefined1 (**) [16])((longlong)ppauVar44 + 0x40);
  unaff_XMM10._0_4_ = (float)((iVar7 << 0x1f) >> 0x1f & *(uint *)((longlong)ppauVar44 + 0x10c));
  fVar72 = (float)((iVar7 << 0x1f) >> 0x1f & *(uint *)((longlong)ppauVar44 + 0x110));
code_r0x000140a37929:
  unaff_XMM9_Dd = 0.0;
  unaff_XMM9_Dc = 0.0;
  unaff_XMM9_Db = 0.0;
  unaff_R14 = (undefined1 (*) [16])(ulonglong)((byte)unaff_RDI < 2);
  *(undefined8 *)((longlong)ppauVar44 + -8) = 0x140a37941;
  pdb_140e08f50((undefined1 *)((longlong)ppauVar44 + 0x60),unaff_RBX);
  unaff_XMM9_Da = fVar18 - *(float *)((longlong)ppauVar44 + 0x60);
  unaff_XMM10._0_4_ = unaff_XMM10._0_4_ - (float)*(undefined8 *)((longlong)ppauVar44 + 100);
  unaff_XMM10._4_4_ =
       fVar72 - (float)((ulonglong)*(undefined8 *)((longlong)ppauVar44 + 100) >> 0x20);
  unaff_XMM10._8_8_ = 0;
  *(undefined8 *)((longlong)ppauVar44 + -8) = 0x140a3795f;
  pdb_140e08f50((undefined1 *)((longlong)ppauVar44 + 0x60),unaff_RBX);
  fVar72 = (float)*(undefined8 *)((longlong)ppauVar44 + 100);
  fVar18 = (float)((ulonglong)*(undefined8 *)((longlong)ppauVar44 + 100) >> 0x20);
  auVar68 = ZEXT416((uint)SQRT(fVar18 * fVar18 +
                               *(float *)((longlong)ppauVar44 + 0x60) *
                               *(float *)((longlong)ppauVar44 + 0x60) + fVar72 * fVar72));
  pauVar25 = (undefined1 (*) [16])&UNK_14303aa20;
  ppauVar39 = ppauVar44;
code_r0x000140a3798c:
  auVar69._4_12_ = auVar68._4_12_;
  auVar69._0_4_ = auVar68._0_4_ + *(float *)(*pauVar25 + (longlong)unaff_R14 * 4);
  auVar67 = auVar69._0_12_;
  auVar75._4_4_ = unaff_XMM10._4_4_ * unaff_XMM10._4_4_;
  auVar75._12_4_ = unaff_XMM10._12_4_ * unaff_XMM10._12_4_;
  auVar75._0_4_ = auVar75._4_4_;
  auVar75._8_4_ = auVar75._12_4_;
  auVar76._4_12_ = auVar75._4_12_;
  auVar76._0_4_ =
       auVar75._4_4_ + unaff_XMM9_Da * unaff_XMM9_Da + unaff_XMM10._0_4_ * unaff_XMM10._0_4_;
  auVar79 = auVar76._0_12_;
  in_AF = '\0';
  ppauVar40 = ppauVar39;
  ppauVar44 = ppauVar39;
  if (auVar69._0_4_ * auVar69._0_4_ < auVar76._0_4_) {
code_r0x000140a379bb:
    auVar77._0_4_ = SQRT(auVar79._0_4_);
    auVar77._4_4_ = auVar77._0_4_;
    auVar77._8_4_ = auVar79._8_4_;
    auVar77._12_4_ = auVar77._8_4_;
    auVar87 = divps(unaff_XMM10,auVar77);
    fVar18 = auVar67._0_4_;
    unaff_XMM9_Da = (unaff_XMM9_Da / auVar77._0_4_) * fVar18;
    unaff_XMM10._0_4_ = auVar87._0_4_ * fVar18;
    unaff_XMM10._4_4_ = auVar87._4_4_ * fVar18;
    unaff_XMM10._8_4_ = auVar87._8_4_ * auVar67._8_4_;
    unaff_XMM10._12_4_ = auVar87._12_4_ * auVar67._8_4_;
    ppauVar44 = ppauVar40;
  }
  *(int *)((longlong)ppauVar44 + -8) = 0x40a379e6;
  *(int *)((longlong)ppauVar44 + -4) = 1;
  pdb_140e08f50((int *)((longlong)ppauVar44 + 0x60),unaff_RBX);
  unaff_XMM9_Da = unaff_XMM9_Da + *(float *)((longlong)ppauVar44 + 0x60);
  unaff_XMM11_Da = *(float *)((longlong)ppauVar44 + 100) + unaff_XMM10._0_4_;
  auVar88._4_4_ = unaff_XMM10._4_4_;
  auVar88._0_4_ = auVar88._4_4_;
  auVar88._12_4_ = unaff_XMM10._12_4_;
  auVar88._8_4_ = auVar88._12_4_;
  unaff_XMM10._4_12_ = auVar88._4_12_;
  unaff_XMM10._0_4_ = auVar88._4_4_ + *(float *)((longlong)ppauVar44 + 0x68);
  *(int *)*unaff_R12 = iVar20;
  *(int *)((longlong)ppauVar44 + -8) = 0x40a37a16;
  *(int *)((longlong)ppauVar44 + -4) = 1;
  pauVar36 = unaff_RBX;
  pdb_140e08f50((int *)((longlong)ppauVar44 + 0x60));
  uVar59 = (undefined8)in_ST2;
  fVar18 = *(float *)((longlong)ppauVar44 + 0x60);
  in_XMM2 = ZEXT416((uint)fVar18);
  fVar72 = *(float *)((longlong)ppauVar44 + 100);
  auVar68 = ZEXT416((uint)fVar72);
  fVar19 = *(float *)((longlong)ppauVar44 + 0x68);
  in_XMM1 = ZEXT416((uint)fVar19);
  uVar57 = (ulonglong)*(int *)(&UNK_14303b648 + (ulonglong)(byte)unaff_RBX[0x4d][0] * 4);
  pauVar25 = (undefined1 (*) [16])(&UNK_14303b648 + uVar57);
  in_R11 = (undefined1 (*) [16])(ulonglong)*(byte *)((longlong)ppauVar44 + 0x3a);
  uVar54 = *(uint *)((longlong)ppauVar44 + 0xfc);
  UNRECOVERED_JUMPTABLE_00 = (undefined1 (*) [16])(ulonglong)uVar54;
  bVar30 = (byte)uVar54;
  uVar86 = (uint)unaff_RBP;
  cVar15 = (char)pauVar25;
  uVar29 = (undefined7)((ulonglong)pauVar25 >> 8);
  pauVar27 = pauVar25;
  auVar87 = auVar68;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(unaff_RBX[0x4d][0]) {
  case 0:
code_r0x000140a37a6c:
    pauVar27 = unaff_RBX + 0x10;
    goto code_r0x000140a37a85;
  case 1:
    pauVar27 = (undefined1 (*) [16])(unaff_RBX[0x1b] + 8);
    goto code_r0x000140a37a85;
  default:
    if ((uVar54 & 1) != 0) goto code_r0x000140a37a55;
    goto code_r0x000140a37ad5;
  case 4:
    pauVar27 = unaff_RBX + 0x39;
code_r0x000140a37a85:
    fVar18 = SQRT((fVar19 - unaff_XMM10._0_4_) * (fVar19 - unaff_XMM10._0_4_) +
                  (fVar72 - unaff_XMM11_Da) * (fVar72 - unaff_XMM11_Da) +
                  (fVar18 - unaff_XMM9_Da) * (fVar18 - unaff_XMM9_Da));
    *(undefined4 *)(pauVar27[1] + 8) = 1;
    *(float *)(pauVar27[1] + 0xc) = fVar18;
    *(float *)pauVar27[2] = fVar18;
    *(undefined8 *)(pauVar27[2] + 4) = 0;
    *(ulonglong *)(pauVar27[2] + 0xc) = CONCAT44(unaff_XMM8_Db,unaff_XMM8_Da);
    *(float *)(pauVar27[3] + 4) = unaff_XMM7_Da;
    if (((ulonglong)UNRECOVERED_JUMPTABLE_00 & 1) == 0) {
code_r0x000140a37ad5:
      puVar24 = *(undefined8 **)((longlong)ppauVar44 + 0x310);
      *(undefined4 *)puVar24[2] = *(undefined4 *)((longlong)puVar24 + 0x1c);
      unaff_RDI = (undefined1 (*) [16])*puVar24;
      lVar22 = *(longlong *)unaff_RDI[3];
      auVar87._0_8_ = *(undefined8 *)unaff_RDI[4];
      if (lVar22 == *(longlong *)unaff_RDI[2]) {
        *(undefined8 *)((longlong)ppauVar44 + -8) = 0x140a37b00;
        pdb_142d7e980(unaff_RDI + 2);
        in_R11 = (undefined1 (*) [16])(ulonglong)*(byte *)((longlong)ppauVar44 + 0x3a);
      }
      lVar35 = *(longlong *)(unaff_RDI[2] + 8);
      *(undefined8 *)(lVar35 + lVar22 * 0x10) = auVar87._0_8_;
      *(undefined1 *)(lVar35 + 8 + lVar22 * 0x10) = 0;
      unaff_R14 = (undefined1 (*) [16])(lVar22 + 1);
      *(undefined1 (**) [16])unaff_RDI[3] = unaff_R14;
      *(longlong *)unaff_RDI[4] = *(longlong *)unaff_RDI[4] + 1;
      unaff_R12 = *(undefined1 (**) [16])((longlong)ppauVar44 + 0x40);
      unaff_R13 = *(undefined1 (**) [16])((longlong)ppauVar44 + 0xe8);
      if (((ulonglong)in_R11 & 1) == 0) goto code_r0x000140a37cd3;
code_r0x000140a37b3c:
      fVar18 = 0.0;
      unaff_XMM10._0_4_ = 0.0;
      if (*(int *)unaff_R15[1] - 1U < 2) {
        puVar8 = (ulonglong *)**(undefined8 **)((longlong)ppauVar44 + 400);
        lVar22 = (*(undefined8 **)((longlong)ppauVar44 + 400))[1];
        uVar57 = *puVar8;
        pauVar55 = (undefined1 (*) [16])0x0;
        pauVar27 = (undefined1 (*) [16])(uVar57 - *(ulonglong *)(lVar22 + 0x18));
        if (uVar57 < *(ulonglong *)(lVar22 + 0x18)) {
          pauVar27 = pauVar55;
        }
        pauVar36 = (undefined1 (*) [16])(uVar57 - *(ulonglong *)(lVar22 + 0x38));
        if (uVar57 < *(ulonglong *)(lVar22 + 0x38)) {
          pauVar36 = pauVar55;
        }
        pauVar58 = *(undefined1 (**) [16])(lVar22 + 8);
        pauVar56 = *(undefined1 (**) [16])(lVar22 + 0x30);
        pauVar25 = (undefined1 (*) [16])((longlong)pauVar56 - (longlong)pauVar36);
        if (pauVar56 < pauVar36) {
          pauVar25 = pauVar55;
        }
        pauVar53 = *(undefined1 (**) [16])(lVar22 + 0x10);
        pauVar52 = (undefined1 (*) [16])((longlong)pauVar53 - (longlong)pauVar27);
        if (pauVar53 < pauVar27) {
          pauVar52 = pauVar55;
        }
        unaff_RDI = *(undefined1 (**) [16])(lVar22 + 0x28);
        uVar57 = *(ulonglong *)(lVar22 + 0x40);
        unaff_R13 = *(undefined1 (**) [16])((longlong)ppauVar44 + 0xe8);
        *puVar8 = (uVar57 - (longlong)pauVar25) - (longlong)pauVar52;
        in_R11 = (undefined1 (*) [16])(ulonglong)*(byte *)((longlong)ppauVar44 + 0x3a);
        unaff_RSI = (undefined1 (*) [16])(ulonglong)*(uint *)((longlong)ppauVar44 + 0x3c);
        pauVar55 = pauVar25;
        unaff_R14 = pauVar52;
        if (pauVar53 >= pauVar27 &&
            (undefined1 (*) [16])((longlong)pauVar53 - (longlong)pauVar27) !=
            (undefined1 (*) [16])0x0 ||
            pauVar56 >= pauVar36 &&
            (undefined1 (*) [16])((longlong)pauVar56 - (longlong)pauVar36) !=
            (undefined1 (*) [16])0x0) {
          pauVar55 = (undefined1 (*) [16])((longlong)pauVar25 * 0x10);
          unaff_RDI = unaff_RDI + (longlong)pauVar36;
          unaff_R14 = (undefined1 (*) [16])((longlong)pauVar52 * 0x10);
          pauVar58 = pauVar58 + (longlong)pauVar27;
          if (pauVar53 < pauVar27) {
            pauVar58 = (undefined1 (*) [16])0x8;
          }
          pauVar58 = pauVar58 + -1 + (longlong)pauVar52;
          pauVar52 = (undefined1 (*) [16])0x0;
          if (pauVar27 < pauVar53) {
            pauVar52 = pauVar58;
          }
          if (pauVar56 < pauVar36) {
            unaff_RDI = (undefined1 (*) [16])0x8;
          }
          pauVar27 = unaff_RDI + -1 + (longlong)pauVar25;
          if (pauVar56 <= pauVar36) {
            pauVar27 = pauVar52;
          }
          in_R11 = (undefined1 (*) [16])(ulonglong)*(byte *)((longlong)ppauVar44 + 0x3a);
          *puVar8 = uVar57;
          uVar33 = *(undefined2 *)(*(longlong *)((longlong)ppauVar44 + 0x58) + 0x11f);
          uVar17 = (undefined1)((ushort)uVar33 >> 8);
          auVar87 = ZEXT416(CONCAT22((short)(CONCAT13(uVar17,CONCAT12(uVar17,uVar33)) >> 0x10),
                                     CONCAT11((char)uVar33,(char)uVar33)));
          auVar87 = pshuflw(auVar87,auVar87,0xd4);
          uVar54 = (auVar87._0_4_ << 0x1f) >> 0x1f & _UNK_14303aa30;
          uVar86 = (auVar87._4_4_ << 0x1f) >> 0x1f & _UNK_14303aa34;
          unaff_XMM10._0_4_ = *(float *)(*(longlong *)((longlong)ppauVar44 + 0x58) + 0x108);
          fVar18 = unaff_XMM10._0_4_ * _UNK_14303aa40;
          unaff_XMM10._0_4_ = unaff_XMM10._0_4_ * _UNK_14303aa44;
          fVar18 = (float)*(undefined8 *)(*pauVar27 + 8) *
                   (float)(~uVar54 & (uint)fVar18 | (_DAT_142e37820 ^ (uint)fVar18) & uVar54) + 0.0;
          unaff_XMM10._0_4_ =
               (float)((ulonglong)*(undefined8 *)(*pauVar27 + 8) >> 0x20) *
               (float)(~uVar86 & (uint)unaff_XMM10._0_4_ |
                      (_UNK_142e37824 ^ (uint)unaff_XMM10._0_4_) & uVar86) + 0.0;
        }
      }
      unaff_R15 = *(undefined1 (**) [16])((longlong)ppauVar44 + 0x48);
      uVar57 = *(ulonglong *)((longlong)ppauVar44 + 0x58);
      fVar18 = *(float *)(uVar57 + 0x108) *
               (float)*(undefined8 *)(unaff_R15[0x17] + 8) * _DAT_14303aa50 + fVar18;
      unaff_XMM10._0_4_ =
           *(float *)(uVar57 + 0x108) *
           (float)((ulonglong)*(undefined8 *)(unaff_R15[0x17] + 8) >> 0x20) * _UNK_14303aa54 +
           unaff_XMM10._0_4_;
      unaff_R12 = *(undefined1 (**) [16])((longlong)ppauVar44 + 0x40);
      if (((fVar18 == 0.0) && (unaff_XMM10._0_4_ == 0.0)) && (!NAN(unaff_XMM10._0_4_)))
      goto code_r0x000140a37cd3;
      auVar68._0_4_ = (float)((uint)fVar18 & _DAT_142e377e0);
      auVar68._4_4_ = (float)((uint)fVar18 & _UNK_142e377e4);
      auVar68._8_4_ = (float)((uint)unaff_XMM10._0_4_ & _UNK_142e377e8);
      auVar68._12_4_ = (float)((uint)unaff_XMM10._0_4_ & _UNK_142e377ec);
code_r0x000140a37d74:
      auVar70._0_4_ = -(uint)(_DAT_14303aa60 < auVar68._0_4_);
      auVar70._4_4_ = -(uint)(_UNK_14303aa64 < auVar68._4_4_);
      auVar70._8_4_ = -(uint)(_UNK_14303aa68 < auVar68._8_4_);
      auVar70._12_4_ = -(uint)(_UNK_14303aa6c < auVar68._12_4_);
      uVar51 = SUB84(unaff_RSI,0);
      *(undefined4 *)*unaff_R12 = uVar51;
      iVar20 = movmskpd((int)uVar57,auVar70);
      if (iVar20 == 0) {
        UNRECOVERED_JUMPTABLE_00 = (undefined1 (*) [16])(ulonglong)(byte)unaff_RBX[0x4d][0];
code_r0x000140a37d9e:
        UNRECOVERED_JUMPTABLE =
             (code *)(&UNK_14303b660 +
                     *(int *)(&UNK_14303b660 + (longlong)UNRECOVERED_JUMPTABLE_00 * 4));
code_r0x000140a37dac:
                    /* WARNING: Could not recover jumptable at 0x000140a37dac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        pauVar27 = (undefined1 (*) [16])(*UNRECOVERED_JUMPTABLE)(UNRECOVERED_JUMPTABLE);
        return pauVar27;
      }
code_r0x000140a37e99:
      **(undefined4 **)((longlong)ppauVar44 + 0xe0) = *(undefined4 *)((longlong)ppauVar44 + 0x54);
      lVar22 = *(longlong *)unaff_R13[3];
      unaff_R14 = *(undefined1 (**) [16])unaff_R13[4];
      if (lVar22 == *(longlong *)unaff_R13[2]) {
        *(undefined8 *)((longlong)ppauVar44 + -8) = 0x140a37ec1;
        pdb_142d7e980(unaff_R13 + 2);
        in_R11 = (undefined1 (*) [16])((ulonglong)in_R11 & 0xffffffff);
      }
      lVar35 = *(longlong *)(unaff_R13[2] + 8);
      *(undefined4 *)(lVar35 + lVar22 * 0x10) = 2;
      *(undefined1 (**) [16])(lVar35 + 8 + lVar22 * 0x10) = unaff_R14;
      unaff_RDI = (undefined1 (*) [16])(lVar22 + 1);
      *(undefined1 (**) [16])unaff_R13[3] = unaff_RDI;
      *(longlong *)unaff_R13[4] = *(longlong *)unaff_R13[4] + 1;
      if (*(int *)unaff_R15[1] != 3) goto code_r0x000140a37ef1;
code_r0x000140a37cde:
      puVar24 = *(undefined8 **)((longlong)ppauVar44 + 0x310);
      *(undefined4 *)puVar24[2] = *(undefined4 *)((longlong)puVar24 + 0x1c);
      unaff_RDI = (undefined1 (*) [16])*puVar24;
      lVar22 = *(longlong *)unaff_RDI[3];
      auVar87._0_8_ = *(undefined8 *)unaff_RDI[4];
      if (lVar22 == *(longlong *)unaff_RDI[2]) {
        *(undefined8 *)((longlong)ppauVar44 + -8) = 0x140a37d09;
        pdb_142d7e980(unaff_RDI + 2);
      }
      lVar35 = *(longlong *)(unaff_RDI[2] + 8);
      *(undefined8 *)(lVar35 + lVar22 * 0x10) = auVar87._0_8_;
      *(undefined1 *)(lVar35 + 8 + lVar22 * 0x10) = 1;
      unaff_R14 = (undefined1 (*) [16])(lVar22 + 1);
      *(undefined1 (**) [16])unaff_RDI[3] = unaff_R14;
      *(longlong *)unaff_RDI[4] = *(longlong *)unaff_RDI[4] + 1;
      *(undefined4 *)*unaff_R12 = uVar51;
      unaff_R15 = *(undefined1 (**) [16])((longlong)ppauVar44 + 0x48);
      if (3 < (byte)unaff_RBX[0x4d][0] - 2) {
        if ((code)unaff_RBX[0x4d][0] == (code)0x0) {
          unaff_R12 = unaff_RBX + 0x10;
          iVar20 = *(int *)(unaff_RBX[0x11] + 8);
          *(undefined4 *)(unaff_RBX[0x11] + 8) = 0;
        }
        else {
          unaff_R12 = (undefined1 (*) [16])(unaff_RBX[0x1b] + 8);
          iVar20 = *(int *)unaff_RBX[0x1d];
          *(undefined4 *)unaff_RBX[0x1d] = 0;
        }
        if (iVar20 == 1) {
          auVar87._0_8_ = *(undefined8 *)(unaff_R12[1] + 0xc);
          uVar59 = *(undefined8 *)(unaff_R12[2] + 4);
          uVar5 = *(undefined8 *)unaff_R12[3];
          *(undefined8 *)((longlong)ppauVar44 + 0x6c) = *(undefined8 *)(unaff_R12[2] + 8);
          *(undefined8 *)((longlong)ppauVar44 + 0x74) = uVar5;
          *(undefined8 *)((longlong)ppauVar44 + 0x60) = auVar87._0_8_;
          *(undefined8 *)((longlong)ppauVar44 + 0x68) = uVar59;
          unaff_RDI = *(undefined1 (**) [16])unaff_R12[1];
          if (unaff_RDI == *(undefined1 (**) [16])*unaff_R12) {
            *(undefined8 *)((longlong)ppauVar44 + -8) = 0x140a37e00;
            pdb_142d8dbe0(unaff_R12);
          }
code_r0x000140a37e00:
          lVar22 = *(longlong *)(*unaff_R12 + 8);
          auVar87._0_8_ = *(undefined8 *)((longlong)ppauVar44 + 0x74);
          puVar24 = (undefined8 *)(lVar22 + 0xc + (longlong)unaff_RDI * 0x1c);
          *puVar24 = *(undefined8 *)((longlong)ppauVar44 + 0x6c);
          puVar24[1] = auVar87._0_8_;
          auVar87._0_8_ = *(undefined8 *)((longlong)ppauVar44 + 0x68);
          puVar24 = (undefined8 *)(lVar22 + (longlong)unaff_RDI * 0x1c);
          *puVar24 = *(undefined8 *)((longlong)ppauVar44 + 0x60);
          puVar24[1] = auVar87._0_8_;
          unaff_RDI = (undefined1 (*) [16])(*unaff_RDI + 1);
          *(undefined1 (**) [16])unaff_R12[1] = unaff_RDI;
        }
      }
      pauVar27 = *(undefined1 (**) [16])((longlong)ppauVar44 + 0xf0);
code_r0x000140a37e33:
      *(undefined4 *)(*pauVar27 + 8) = 1000000000;
      unaff_R12 = *(undefined1 (**) [16])((longlong)ppauVar44 + 0x40);
      ppauVar41 = ppauVar44;
    }
    else {
code_r0x000140a37a55:
      unaff_R13 = *(undefined1 (**) [16])((longlong)ppauVar44 + 0xe8);
      if (((ulonglong)in_R11 & 1) != 0) goto code_r0x000140a37b3c;
code_r0x000140a37cd3:
      bVar62 = *(int *)unaff_R15[1] == 3;
code_r0x000140a37cd8:
      uVar51 = SUB84(unaff_RSI,0);
      if (bVar62) goto code_r0x000140a37cde;
code_r0x000140a37ef1:
      *(undefined4 *)*unaff_R12 = uVar51;
      ppauVar41 = ppauVar44;
      if (3 < (byte)unaff_RBX[0x4d][0] - 2) {
        lVar22 = 0x100;
        if ((code)unaff_RBX[0x4d][0] != (code)0x0) {
          lVar22 = 0x1b8;
        }
        bVar30 = (byte)in_R11;
        in_R11 = (undefined1 (*) [16])CONCAT71((int7)((ulonglong)in_R11 >> 8),~bVar30);
        if ((unaff_RBX[1][lVar22 + 8] & ~bVar30) != 0) goto code_r0x000140a37cde;
      }
    }
    unaff_XMM8_Da = 0.0;
    unaff_XMM8_Db = 0.0;
    unaff_XMM8_Dd = 0.0;
    unaff_XMM7_Da = 0.0;
    if (*(uint *)(unaff_R15[1] + 8) < 3) {
      puVar8 = (ulonglong *)**(undefined8 **)((longlong)ppauVar41 + 400);
      lVar22 = (*(undefined8 **)((longlong)ppauVar41 + 400))[1];
      uVar57 = *puVar8;
      pauVar55 = (undefined1 (*) [16])0x0;
      pauVar27 = (undefined1 (*) [16])(uVar57 - *(ulonglong *)(lVar22 + 0x18));
      if (uVar57 < *(ulonglong *)(lVar22 + 0x18)) {
        pauVar27 = pauVar55;
      }
      pauVar36 = (undefined1 (*) [16])(uVar57 - *(ulonglong *)(lVar22 + 0x38));
      if (uVar57 < *(ulonglong *)(lVar22 + 0x38)) {
        pauVar36 = pauVar55;
      }
      pauVar58 = *(undefined1 (**) [16])(lVar22 + 8);
      pauVar56 = *(undefined1 (**) [16])(lVar22 + 0x30);
      pauVar25 = (undefined1 (*) [16])((longlong)pauVar56 - (longlong)pauVar36);
      if (pauVar56 < pauVar36) {
        pauVar25 = pauVar55;
      }
      pauVar53 = *(undefined1 (**) [16])(lVar22 + 0x10);
      pauVar52 = (undefined1 (*) [16])((longlong)pauVar53 - (longlong)pauVar27);
      if (pauVar53 < pauVar27) {
        pauVar52 = pauVar55;
      }
      unaff_RDI = *(undefined1 (**) [16])(lVar22 + 0x28);
      in_R11 = *(undefined1 (**) [16])(lVar22 + 0x40);
      unaff_R12 = *(undefined1 (**) [16])((longlong)ppauVar41 + 0x40);
      *puVar8 = (ulonglong)((longlong)in_R11 + (-(longlong)pauVar52 - (longlong)pauVar25));
      unaff_R13 = *(undefined1 (**) [16])((longlong)ppauVar41 + 0xe8);
      bVar30 = *(byte *)((longlong)ppauVar41 + 0x3b);
      pauVar55 = pauVar25;
      unaff_R14 = pauVar52;
      if (pauVar53 >= pauVar27 &&
          (undefined1 (*) [16])((longlong)pauVar53 - (longlong)pauVar27) != (undefined1 (*) [16])0x0
          || pauVar56 >= pauVar36 &&
             (undefined1 (*) [16])((longlong)pauVar56 - (longlong)pauVar36) !=
             (undefined1 (*) [16])0x0) {
        pauVar55 = (undefined1 (*) [16])((longlong)pauVar25 * 0x10);
        unaff_RDI = unaff_RDI + (longlong)pauVar36;
        unaff_R14 = (undefined1 (*) [16])((longlong)pauVar52 * 0x10);
        pauVar58 = pauVar58 + (longlong)pauVar27;
        if (pauVar53 < pauVar27) {
          pauVar58 = (undefined1 (*) [16])0x8;
        }
        pauVar58 = pauVar58 + -1 + (longlong)pauVar52;
        pauVar52 = (undefined1 (*) [16])0x0;
        if (pauVar27 < pauVar53) {
          pauVar52 = pauVar58;
        }
        if (pauVar56 < pauVar36) {
          unaff_RDI = (undefined1 (*) [16])0x8;
        }
        pauVar27 = unaff_RDI + -1 + (longlong)pauVar25;
        if (pauVar56 <= pauVar36) {
          pauVar27 = pauVar52;
        }
        *puVar8 = (ulonglong)in_R11;
        *(undefined8 *)((longlong)ppauVar41 + -8) = 0x140a38004;
        pdb_140df4520((undefined1 *)((longlong)ppauVar41 + 0x60),*pauVar27 + 8);
        fVar18 = *(float *)(*(longlong *)((longlong)ppauVar41 + 0x58) + 0x10c);
        unaff_XMM10._0_4_ = *(float *)((longlong)ppauVar41 + 0x60) * _DAT_1430155b0 * fVar18;
        fVar72 = fVar18 * (float)*(undefined8 *)((longlong)ppauVar41 + 100) * _UNK_14303aa70;
        fVar18 = fVar18 * (float)((ulonglong)*(undefined8 *)((longlong)ppauVar41 + 100) >> 0x20) *
                          _UNK_14303aa74;
        fVar19 = _UNK_14303aa7c * 0.0 * 0.0;
        if (((code)unaff_RBX[0x4d][0] == (code)0x4) || ((code)unaff_RBX[0x4d][0] == (code)0x1)) {
          unaff_XMM10._0_4_ = unaff_XMM10._0_4_ * _DAT_142e36f50;
          fVar72 = fVar72 * _DAT_142e36f60;
          fVar18 = fVar18 * _UNK_142e36f64;
          fVar19 = fVar19 * _UNK_142e36f6c;
        }
        unaff_XMM7_Da = unaff_XMM10._0_4_ + 0.0;
        unaff_XMM8_Da = fVar72 + 0.0;
        unaff_XMM8_Db = fVar18 + 0.0;
        unaff_XMM8_Dd = fVar19 + 0.0;
      }
      cVar6 = (code)unaff_RBX[0x4d][0];
    }
    else {
      bVar30 = *(byte *)((longlong)ppauVar41 + 0x3b);
      cVar6 = (code)unaff_RBX[0x4d][0];
      unaff_XMM7_Da = 0.0;
    }
    unaff_RBP = (undefined1 (*) [16])(ulonglong)bVar30;
    unaff_XMM9_Da = _DAT_142e36f28;
    if ((byte)((char)cVar6 - 1U) < 4) {
      unaff_XMM9_Da = *(float *)(&UNK_14303b560 + (ulonglong)(byte)((char)cVar6 - 1U) * 4);
    }
    unaff_RSI = *(undefined1 (**) [16])((longlong)ppauVar41 + 0x48);
    *(undefined8 *)((longlong)ppauVar41 + -8) = 0x140a380b6;
    pdb_140df4520((undefined1 *)((longlong)ppauVar41 + 0x60));
    uVar59 = (undefined8)in_ST2;
    fVar72 = *(float *)((longlong)ppauVar41 + 100) * unaff_XMM9_Da;
    in_XMM1 = ZEXT416((uint)(*(float *)((longlong)ppauVar41 + 0x68) * unaff_XMM9_Da));
code_r0x000140a380cc:
    uVar23 = (ulonglong)*(uint *)((longlong)ppauVar41 + 0x60);
    in_XMM3 = ZEXT416(*(uint *)(*(longlong *)((longlong)ppauVar41 + 0x58) + 0x10c));
code_r0x000140a380df:
    in_XMM1._0_4_ = in_XMM1._0_4_ * in_XMM3._0_4_;
    unaff_XMM7_Db = fVar72 * in_XMM3._0_4_ + unaff_XMM8_Da;
    unaff_XMM7_Dd = 0.0;
    ppauVar42 = ppauVar41;
code_r0x000140a380ef:
    auVar71._4_4_ = unaff_XMM8_Db;
    auVar71._0_4_ = unaff_XMM8_Db;
    auVar71._8_4_ = unaff_XMM8_Dd;
    auVar71._12_4_ = unaff_XMM8_Dd;
    auVar68._4_12_ = auVar71._4_12_;
    auVar68._0_4_ = unaff_XMM8_Db + in_XMM1._0_4_;
    unaff_XMM9_Dd = in_XMM3._4_4_;
    unaff_XMM9_Db = in_XMM3._0_4_;
    in_XMM2._0_4_ = (float)uVar23;
    in_XMM2._4_4_ = (float)*(undefined4 *)(unaff_RSI[0x16] + 8);
    in_XMM2._8_4_ = (float)(int)(uVar23 >> 0x20);
    in_XMM2._12_4_ = 0.0;
    ppauVar44 = ppauVar42;
code_r0x000140a38107:
    fVar18 = unaff_XMM9_Da * in_XMM2._4_4_ * unaff_XMM9_Db;
    unaff_XMM9_Da = unaff_XMM9_Db * in_XMM2._0_4_ * unaff_XMM9_Da + unaff_XMM7_Da;
    unaff_XMM9_Db = fVar18 + unaff_XMM7_Db;
    fVar18 = unaff_XMM9_Dd * in_XMM2._12_4_ * unaff_XMM9_Dd + unaff_XMM7_Dd;
    in_XMM1._4_4_ = unaff_XMM9_Db;
    in_XMM1._0_4_ = unaff_XMM9_Db;
    in_XMM1._8_4_ = fVar18;
    in_XMM1._12_4_ = fVar18;
    in_XMM2 = ZEXT816(0);
    fVar18 = auVar68._0_4_;
    if (((unaff_XMM9_Da == 0.0) && (unaff_XMM9_Db == 0.0)) &&
       ((!NAN(unaff_XMM9_Db) && ((fVar18 == 0.0 && (!NAN(fVar18))))))) goto code_r0x000140a38260;
    UNRECOVERED_JUMPTABLE_00 = (undefined1 (*) [16])(ulonglong)((uint)ABS(fVar18) < 0x7f800000);
    if ((0x7f7fffff < (uint)ABS(unaff_XMM9_Da)) || (0x7f7fffff < (uint)ABS(unaff_XMM9_Db)))
    goto code_r0x000140a38260;
code_r0x000140a3817d:
    if ((char)UNRECOVERED_JUMPTABLE_00 == '\0') goto code_r0x000140a38260;
code_r0x000140a38185:
    *(undefined4 *)*unaff_R12 = *(undefined4 *)((longlong)ppauVar44 + 0x3c);
    *(ulonglong *)((longlong)ppauVar44 + 0x60) = CONCAT44(unaff_XMM9_Db,unaff_XMM9_Da);
    *(int *)((longlong)ppauVar44 + 0x68) = auVar68._0_4_;
code_r0x000140a3819a:
    pauVar25 = (undefined1 (*) [16])&UNK_143397930;
    pauVar36 = (undefined1 (*) [16])&UNK_14303b678;
    uVar57 = (ulonglong)*(int *)(&UNK_14303b678 + (ulonglong)(byte)unaff_RBX[0x4d][0] * 4);
    bVar62 = 0xfffffffebcfc4987 < uVar57;
    UNRECOVERED_JUMPTABLE_00 = (undefined1 (*) [16])(&UNK_14303b678 + uVar57);
    bVar30 = (byte)UNRECOVERED_JUMPTABLE_00;
    pauVar27 = pauVar25;
    piVar47 = (int *)ppauVar44;
    pauVar53 = unaff_RDI;
    auVar87 = auVar68;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(unaff_RBX[0x4d][0]) {
    case 0:
      pauVar27 = unaff_RBX + 0x10;
      break;
    case 1:
      pauVar27 = (undefined1 (*) [16])(unaff_RBX[0x1b] + 8);
      break;
    case 2:
      pauVar27 = unaff_RBX + 0x27;
      pauVar25 = (undefined1 (*) [16])&UNK_143397968;
      break;
    case 3:
      pauVar27 = unaff_RBX + 0x2f;
      pauVar25 = (undefined1 (*) [16])&UNK_1433979d8;
      break;
    case 4:
      pauVar27 = unaff_RBX + 0x39;
      break;
    case 5:
      pauVar27 = (undefined1 (*) [16])(unaff_RBX[0x44] + 8);
      pauVar25 = (undefined1 (*) [16])&UNK_1433979a0;
      break;
    case 6:
      UNK_1433978bd = UNK_1433978bd + bVar30;
      goto code_r0x000140a38800;
    case 7:
      goto code_r0x000140a3886d;
    case 8:
      goto code_r0x000140a388ab;
    case 9:
      goto code_r0x000140a38857;
    case 10:
      UNRECOVERED_JUMPTABLE_00 =
           (undefined1 (*) [16])
           CONCAT71((int7)((ulonglong)UNRECOVERED_JUMPTABLE_00 >> 8),bVar30 + UNK_143397993);
      puVar26 = &UNK_1433979b1;
      goto code_r0x000140a38830;
    case 0xb:
      unaff_RBX = (undefined1 (*) [16])
                  CONCAT71((int7)((ulonglong)unaff_RBX >> 8),
                           (char)unaff_RBX + (char)((ulonglong)UNRECOVERED_JUMPTABLE_00 >> 8));
      goto code_r0x000140a3888c;
    case 0xc:
      goto code_r0x000140a38b32;
    case 0xd:
      _UNK_143397930 = CONCAT31(_UNK_143397931,UNK_143397930 + '0');
code_r0x000140a38af4:
      pauVar25[-8][0xb] = pauVar25[-8][0xb] + (char)UNRECOVERED_JUMPTABLE_00;
      goto code_r0x000140a38ae7;
    case 0xe:
      goto code_r0x000140a38b04;
    case 0xf:
      goto code_r0x000140a38b14;
    case 0x10:
      UNK_1433978bb = UNK_1433978bb ^ bVar30;
      _UNK_143397930 = _UNK_143397930 + 0x43397930;
      (*unaff_RDI)[0] = (*unaff_RDI)[0] + bVar30;
      pauVar25 = (undefined1 (*) [16])0x7930;
      cRam0000000000007930 = cRam0000000000007930 + '0';
      goto code_r0x000140a38b0a;
    case 0x11:
      _UNK_143397930 = _UNK_143397930 + 0x43397930;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0x12:
code_r0x000140a38d75:
      auVar79 = in_XMM1._4_12_;
      auVar68._0_4_ = (float)(int)uVar59;
      auVar68._8_8_ = auVar87._8_8_;
      auVar68._4_4_ = (float)(int)((ulonglong)uVar59 >> 0x20);
code_r0x000140a38d78:
      in_XMM1._0_4_ = (float)*(uint *)(*pauVar27 + 4);
      in_XMM1._4_12_ = auVar79;
      goto code_r0x000140a38d80;
    case 0x13:
      goto code_r0x000140a38dbb;
    case 0x14:
      goto code_r0x000140a38d8f;
    case 0x15:
      goto code_r0x000140a38da5;
    case 0x16:
      goto code_r0x000140a38d80;
    case 0x17:
      pauVar53 = (undefined1 (*) [16])0x43397930;
      iVar20 = (int)unaff_RDI + *(int *)((ulonglong)unaff_RDI & 0xffffffff);
      pbVar3 = &UNK_14303b636 + uVar57;
      bVar30 = *pbVar3;
      bVar16 = (byte)iVar20;
      *pbVar3 = *pbVar3 + bVar16;
      pauVar25 = (undefined1 (*) [16])
                 (ulonglong)CONCAT31((int3)((uint)iVar20 >> 8),(bVar16 - 3) - CARRY1(bVar30,bVar16))
      ;
      goto code_r0x000140a38dd3;
    case 0x18:
    case 0x19:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0x1a:
      pauVar25 = (undefined1 (*) [16])CONCAT71(0x1433979,UNK_143397930 + '0');
      (&UNK_14303b603)[uVar57] = (&UNK_14303b603)[uVar57] + bVar30;
      *(undefined1 (**) [16])((longlong)ppauVar44 + -8) = unaff_RSI;
      (*pauVar25)[1] = (*pauVar25)[1] ^ bVar30;
      UNRECOVERED_JUMPTABLE = (code *)(pauVar25[-1] + 0xf);
      *UNRECOVERED_JUMPTABLE =
           (code)((byte)*UNRECOVERED_JUMPTABLE >> 1 | (char)*UNRECOVERED_JUMPTABLE << 7);
      puVar24 = (undefined8 *)((longlong)ppauVar44 + -0x10);
      *(undefined1 (**) [16])((longlong)ppauVar44 + -0x10) = unaff_RBP;
      cVar15 = '\x15';
      do {
        unaff_RBP = (undefined1 (*) [16])(unaff_RBP[-1] + 8);
        puVar24 = puVar24 + -1;
        *puVar24 = *(undefined8 *)*unaff_RBP;
        cVar15 = cVar15 + -1;
      } while ('\0' < cVar15);
      *(undefined1 **)((longlong)ppauVar44 + -0xc0) = (undefined1 *)((longlong)ppauVar44 + -0x10);
      *(byte *)((longlong)ppauVar44 + -0x85) = *(byte *)((longlong)ppauVar44 + -0x85) & bVar30;
      *(char *)((longlong)ppauVar44 + 0x21) = *(char *)((longlong)ppauVar44 + 0x21) - (char)pauVar55
      ;
      goto code_r0x000140a39372;
    case 0x1b:
      pauVar36 = (undefined1 (*) [16])CONCAT62(0x14303,CONCAT11((char)unaff_RBX + -0x4a,0x78));
      goto code_r0x000140a39467;
    case 0x1c:
code_r0x000140a393f3:
      pauVar58 = *(undefined1 (**) [16])UNRECOVERED_JUMPTABLE_00[1];
      *(int *)*pauVar58 = (int)pauVar56;
      pauVar25 = *(undefined1 (**) [16])*UNRECOVERED_JUMPTABLE_00;
      *(int *)*pauVar25 = auVar68._0_4_;
      *(undefined4 *)((longlong)ppauVar44 + 0x30) =
           *(undefined4 *)(pauVar55[5] + 4 + (longlong)pauVar36);
      goto code_r0x000140a3940b;
    case 0x1d:
code_r0x000140a39a57:
      *(undefined1 (**) [16])((longlong)ppauVar44 + -8) = unaff_RDI;
      piVar47 = (int *)((longlong)ppauVar44 + -0x28);
code_r0x000140a39a5c:
      unaff_RBP = pauVar36 + 5;
      pauVar36 = (undefined1 (*) [16])0x18;
    case 0x21:
      pauVar55 = (undefined1 (*) [16])0x8;
      UNRECOVERED_JUMPTABLE_00 = *(undefined1 (**) [16])unaff_RBP[-1];
      goto code_r0x000140a39a6f;
    case 0x1e:
      uVar17 = in(0xb678);
      pbVar3 = (byte *)(CONCAT71(0x1433979,uVar17) + -0x73);
      *pbVar3 = *pbVar3 & bVar30;
      puVar50 = (undefined8 *)((longlong)ppauVar44 + -8);
      ppauVar44 = (undefined1 (**) [16])((longlong)ppauVar44 + -8);
      *puVar50 = 0x50;
      goto code_r0x000140a39a87;
    case 0x1f:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0x20:
      goto code_r0x000140a39a7c;
    case 0x22:
      *(undefined8 *)((longlong)ppauVar44 + -8) = 0x140a39a9e;
      pauVar27 = (undefined1 (*) [16])(*pcRam0000000163fdfc78)();
      return pauVar27;
    default:
      return pauVar25;
    }
    *(undefined1 (**) [16])((longlong)ppauVar44 + 0x20) = unaff_RBX;
    pauVar56 = (undefined1 (*) [16])((longlong)ppauVar44 + 0x1e0);
    UNRECOVERED_JUMPTABLE = *(code **)(pauVar25[2] + 8);
    *(undefined8 *)((longlong)ppauVar44 + -8) = 0x140a38219;
    (*UNRECOVERED_JUMPTABLE)(pauVar27);
    **(undefined4 **)((longlong)ppauVar44 + 0xe0) = *(undefined4 *)((longlong)ppauVar44 + 0x54);
    lVar22 = *(longlong *)unaff_R13[3];
    auVar87._0_8_ = *(undefined8 *)unaff_R13[4];
    if (lVar22 == *(longlong *)unaff_R13[2]) {
      *(undefined8 *)((longlong)ppauVar44 + -8) = 0x140a3823e;
      pdb_142d7e980(unaff_R13 + 2);
    }
    lVar35 = *(longlong *)(unaff_R13[2] + 8);
    *(undefined4 *)(lVar35 + lVar22 * 0x10) = 0;
    *(undefined8 *)(lVar35 + 8 + lVar22 * 0x10) = auVar87._0_8_;
    *(longlong *)unaff_R13[3] = lVar22 + 1;
    *(longlong *)unaff_R13[4] = *(longlong *)unaff_R13[4] + 1;
code_r0x000140a38260:
    fVar18 = *(float *)unaff_RSI[0x17];
    in_XMM1 = ZEXT416((uint)fVar18);
    uVar54 = *(uint *)((longlong)ppauVar44 + 0x3c);
    unaff_RSI = (undefined1 (*) [16])(ulonglong)uVar54;
    if (fVar18 == 0.0) {
code_r0x000140a382d2:
      if ((char)unaff_RBP == '\x05') goto code_r0x000140a382dc;
code_r0x000140a384ce:
      *(uint *)*unaff_R12 = uVar54;
      unaff_RBX[0x4d][0] = *(code *)(*(longlong *)((longlong)ppauVar44 + 0x198) + 0xd4);
    }
    else {
      cVar6 = (code)unaff_RBX[0x4d][0];
      if ((1 < (byte)cVar6) && (cVar6 != (code)0x4)) {
        if (cVar6 == (code)0x5) {
          in_XMM1 = ZEXT416((uint)fVar18 & _DAT_142e37820) | _DAT_142e3c640;
          fVar18 = in_XMM1._0_4_;
          iVar20 = 0x7fffffff;
          if (fVar18 <= _DAT_142e382cc) {
            iVar20 = (int)fVar18;
          }
          if (NAN(fVar18)) {
            iVar20 = 0;
          }
          iVar20 = *(int *)(unaff_RBX[0x48] + 4) - iVar20;
          if (iVar20 < 1) {
            iVar20 = 0;
          }
          *(uint *)*unaff_R12 = uVar54;
          *(int *)(unaff_RBX[0x48] + 4) = iVar20;
        }
        goto code_r0x000140a382d2;
      }
      uVar86 = _DAT_142e377e0 & (uint)fVar18;
      *(uint *)*unaff_R12 = uVar54;
      in_XMM1 = ZEXT416((uint)(fVar18 * _DAT_142e36f38));
      pauVar55 = (undefined1 (*) [16])((longlong)ppauVar44 + 0x180);
      *(undefined8 *)((longlong)ppauVar44 + -8) = 0x140a38477;
      pdb_140a36630(unaff_RBX);
      **(undefined4 **)((longlong)ppauVar44 + 0xe0) = *(undefined4 *)((longlong)ppauVar44 + 0x54);
      lVar22 = *(longlong *)unaff_R13[3];
      auVar87._0_8_ = *(undefined8 *)unaff_R13[4];
      if (lVar22 == *(longlong *)unaff_R13[2]) {
        *(undefined8 *)((longlong)ppauVar44 + -8) = 0x140a3849c;
        pdb_142d7e980(unaff_R13 + 2);
      }
      lVar35 = *(longlong *)(unaff_R13[2] + 8);
      lVar32 = lVar22 * 0x10;
      *(undefined4 *)(lVar35 + lVar32) = 1;
      *(uint *)(lVar35 + 4 + lVar32) = uVar86;
      *(undefined8 *)(lVar35 + 8 + lVar32) = auVar87._0_8_;
      *(longlong *)unaff_R13[3] = lVar22 + 1;
      *(longlong *)unaff_R13[4] = *(longlong *)unaff_R13[4] + 1;
      if ((char)unaff_RBP != '\x05') goto code_r0x000140a384ce;
code_r0x000140a382dc:
      pauVar27 = *(undefined1 (**) [16])((longlong)ppauVar44 + 0x1b8);
      pauVar58 = *(undefined1 (**) [16])((longlong)ppauVar44 + 0x1c0);
      lVar22 = *(longlong *)(pauVar58[0xf] + 8);
      pauVar55 = (undefined1 (*) [16])(lVar22 + *(longlong *)pauVar58[0x10] * 4);
      pauVar56 = (undefined1 (*) [16])(ulonglong)(byte)pauVar58[0x10][8];
      *(undefined1 *)((longlong)ppauVar44 + 0xc0) = pauVar58[0x10][8];
      *(longlong *)((longlong)ppauVar44 + 0x80) = lVar22;
      *(undefined1 (**) [16])((longlong)ppauVar44 + 0x88) = pauVar55;
      *(undefined8 *)((longlong)ppauVar44 + 0x90) = 8;
      *(undefined8 *)((longlong)ppauVar44 + 0x98) = 0;
      *(undefined8 *)((longlong)ppauVar44 + 0xa0) = 8;
      *(undefined8 *)((longlong)ppauVar44 + 0xa8) = 0;
      *(undefined8 *)((longlong)ppauVar44 + 0xb0) = 0;
      *(undefined8 *)((longlong)ppauVar44 + 0xb8) = 0;
      *(undefined1 (**) [16])((longlong)ppauVar44 + 0x60) = pauVar27;
      *(undefined1 **)((longlong)ppauVar44 + 0x68) = pauVar27[0x19] + 8;
      *(undefined1 **)((longlong)ppauVar44 + 0x70) = pauVar27[0xf] + 8;
      *(undefined1 (**) [16])((longlong)ppauVar44 + 0x78) = pauVar58;
      uVar51 = *(undefined4 *)(unaff_RBX[0x48] + 4);
      *(undefined8 *)((longlong)ppauVar44 + -8) = 0x140a3838b;
      lVar22 = pdb_1415235e0((undefined1 *)((longlong)ppauVar44 + 0x60),uVar51);
      in_R11 = pauVar27;
      if (lVar22 == 0) {
        uVar54 = *(uint *)((longlong)ppauVar44 + 0xbc);
        uVar57 = (ulonglong)uVar54;
        uVar86 = *(uint *)((longlong)ppauVar44 + 0xb8);
        pauVar56 = (undefined1 (*) [16])(ulonglong)uVar86;
        pauVar55 = *(undefined1 (**) [16])((longlong)ppauVar44 + 0x88);
        if (*(char *)((longlong)ppauVar44 + 0xc0) == '\0') {
          if (uVar54 == uVar86) {
            in_R11 = *(undefined1 (**) [16])((longlong)ppauVar44 + 0x80);
            do {
              if (in_R11 == pauVar55) goto code_r0x000140a38800;
              pauVar27 = (undefined1 (*) [16])(*in_R11 + 4);
              *(undefined1 (**) [16])((longlong)ppauVar44 + 0x80) = pauVar27;
              UNRECOVERED_JUMPTABLE = (code *)*in_R11;
              pauVar56 = *(undefined1 (**) [16])(*(longlong *)((longlong)ppauVar44 + 0x70) + 8);
              pauVar58 = *(undefined1 (**) [16])
                          (pauVar56[(ulonglong)*(uint *)UNRECOVERED_JUMPTABLE * 10 + 5] + 8);
              unaff_RSI = (undefined1 (*) [16])(ulonglong)*(uint *)((longlong)ppauVar44 + 0x3c);
              in_R11 = pauVar27;
            } while (pauVar58 == (undefined1 (*) [16])0x0);
            pauVar56 = pauVar56 + (ulonglong)*(uint *)UNRECOVERED_JUMPTABLE * 10;
            lVar22 = *(longlong *)(*(longlong *)((longlong)ppauVar44 + 0x68) + 8);
            uVar23 = *(ulonglong *)(*(longlong *)((longlong)ppauVar44 + 0x78) + 0x110);
            uVar57 = 0;
            if (uVar23 < *(ulonglong *)
                          (lVar22 + 0x40 + (ulonglong)*(uint *)(pauVar56[9] + 4) * 0x48)) {
              lVar22 = lVar22 + (ulonglong)*(uint *)(pauVar56[9] + 4) * 0x48;
              uVar23 = *(ulonglong *)(*(longlong *)(lVar22 + 0x38) + uVar23 * 8);
              if (uVar23 == 0) goto code_r0x000140a385d4;
              lVar22 = *(longlong *)(*(longlong *)(lVar22 + 0x18) + 0x10 + ~uVar23 * 0x30);
            }
            else {
code_r0x000140a385d4:
              lVar22 = 0;
            }
            *(longlong *)((longlong)ppauVar44 + 0xb0) = lVar22;
            lVar35 = *(longlong *)pauVar56[5];
            *(longlong *)((longlong)ppauVar44 + 0xa0) = lVar35;
            *(undefined1 (**) [16])((longlong)ppauVar44 + 0xa8) = pauVar58;
            *(int *)((longlong)ppauVar44 + 0xb8) = (int)pauVar58;
            *(undefined4 *)((longlong)ppauVar44 + 0xbc) = 0;
          }
          else {
            lVar35 = *(longlong *)((longlong)ppauVar44 + 0xa0);
            lVar22 = *(longlong *)((longlong)ppauVar44 + 0xb0);
          }
          pauVar55 = (undefined1 (*) [16])(uVar57 * 0x10);
          uVar23 = (ulonglong)~*(uint *)(*pauVar55 + lVar35 + 8);
          goto code_r0x000140a38613;
        }
        if (uVar54 != uVar86) {
          lVar22 = *(longlong *)((longlong)ppauVar44 + 0xb0);
          uVar23 = uVar57;
          goto code_r0x000140a38613;
        }
        pauVar36 = *(undefined1 (**) [16])((longlong)ppauVar44 + 0x80);
        do {
          in_R11 = pauVar27;
          if (pauVar36 == pauVar55) goto code_r0x000140a38800;
          *(undefined1 (**) [16])((longlong)ppauVar44 + 0x80) = (undefined1 (*) [16])(*pauVar36 + 4)
          ;
          uVar23 = (ulonglong)*(uint *)*pauVar36;
          pauVar58 = *(undefined1 (**) [16])(*(longlong *)((longlong)ppauVar44 + 0x68) + 8);
          pauVar27 = (undefined1 (*) [16])(uVar23 * 9);
          pauVar56 = *(undefined1 (**) [16])((longlong)pauVar58 + uVar23 * 0x48 + 0x10);
          unaff_RSI = (undefined1 (*) [16])(ulonglong)*(uint *)((longlong)ppauVar44 + 0x3c);
          pauVar36 = (undefined1 (*) [16])(*pauVar36 + 4);
        } while (pauVar56 == (undefined1 (*) [16])0x0);
        uVar9 = *(ulonglong *)(*(longlong *)((longlong)ppauVar44 + 0x78) + 0x110);
        uVar57 = 0;
        if (uVar9 < *(ulonglong *)((longlong)pauVar58 + uVar23 * 0x48 + 0x40)) {
          pauVar55 = *(undefined1 (**) [16])((longlong)pauVar58 + uVar23 * 0x48 + 0x38);
          UNRECOVERED_JUMPTABLE = (code *)*pauVar55;
          if (*(ulonglong *)(UNRECOVERED_JUMPTABLE + uVar9 * 8) == 0) goto code_r0x000140a385aa;
          pauVar55 = *(undefined1 (**) [16])((longlong)pauVar58 + uVar23 * 0x48 + 0x18);
          lVar22 = *(longlong *)pauVar55[~*(ulonglong *)(UNRECOVERED_JUMPTABLE + uVar9 * 8) * 3 + 1]
          ;
        }
        else {
code_r0x000140a385aa:
          lVar22 = 0;
        }
        *(longlong *)((longlong)ppauVar44 + 0xb0) = lVar22;
        *(undefined8 *)((longlong)ppauVar44 + 0x90) =
             *(undefined8 *)((longlong)pauVar58 + uVar23 * 0x48 + 8);
        *(undefined1 (**) [16])((longlong)ppauVar44 + 0x98) = pauVar56;
        *(int *)((longlong)ppauVar44 + 0xb8) = (int)pauVar56;
        uVar23 = uVar57;
code_r0x000140a38613:
        pauVar36 = (undefined1 (*) [16])(uVar23 * 0x30 + lVar22);
        *(int *)((longlong)ppauVar44 + 0xbc) = (int)uVar57 + 1;
        *(int *)*unaff_R12 = (int)unaff_RSI;
        unaff_XMM7_Da = *(float *)pauVar36[1];
        unaff_XMM7_Db = *(float *)(pauVar36[1] + 4);
        unaff_XMM8_Da = *(float *)(pauVar36[1] + 8);
        unaff_XMM9_Da = *(float *)*pauVar36;
        unaff_XMM9_Db = *(float *)(*pauVar36 + 4);
        unaff_XMM9_Dc = *(float *)(*pauVar36 + 8);
        unaff_XMM9_Dd = *(float *)(*pauVar36 + 0xc);
        unaff_RBX[0x4d][0] = (code)0x5;
        lVar22 = *(longlong *)(unaff_RBX[0x45] + 8) << 4;
        puVar24 = *(undefined8 **)unaff_RBX[0x45];
        do {
          if (lVar22 == 0) {
            puVar26 = &UNK_14337fa53;
            goto code_r0x000140a38cb3;
          }
          puVar1 = puVar24 + 2;
          auVar87._0_8_ = *puVar24;
          UNRECOVERED_JUMPTABLE = *(code **)(puVar24[1] + 0x40);
          *(undefined8 *)((longlong)ppauVar44 + -8) = 0x140a38687;
          pauVar25 = (undefined1 (*) [16])(*UNRECOVERED_JUMPTABLE)(auVar87._0_8_);
          UNRECOVERED_JUMPTABLE = *(code **)(pauVar36[1] + 8);
          *(undefined8 *)((longlong)ppauVar44 + -8) = 0x140a38696;
          pauVar36 = pauVar25;
          (*UNRECOVERED_JUMPTABLE)((undefined1 *)((longlong)ppauVar44 + 0x140));
          lVar22 = lVar22 + -0x10;
          puVar24 = puVar1;
        } while ((pauVar25 == (undefined1 (*) [16])0x0) ||
                (*(longlong *)((longlong)ppauVar44 + 0x148) != 0x2e441b8be050d85b ||
                 *(longlong *)((longlong)ppauVar44 + 0x140) != 0x1d5a207d10288a54));
        *(float *)*pauVar25 = unaff_XMM7_Da;
        *(float *)(*pauVar25 + 4) = unaff_XMM7_Db;
        *(float *)(*pauVar25 + 8) = unaff_XMM8_Da;
        pauVar53 = *(undefined1 (**) [16])unaff_RBX[0x45];
        unaff_RDI = (undefined1 (*) [16])(*(longlong *)(unaff_RBX[0x45] + 8) << 4);
        unaff_R14 = (undefined1 (*) [16])((longlong)ppauVar44 + 0x140);
        unaff_R12 = (undefined1 (*) [16])0x89b6aef75b352be9;
        unaff_R13 = (undefined1 (*) [16])0x57d498b94ce2e276;
code_r0x000140a38700:
        while (unaff_RDI != (undefined1 (*) [16])0x0) {
          unaff_RBP = pauVar53 + 1;
          auVar87._0_8_ = *(undefined8 *)*pauVar53;
          UNRECOVERED_JUMPTABLE = *(code **)(*(longlong *)(*pauVar53 + 8) + 0x40);
          *(undefined8 *)((longlong)ppauVar44 + -8) = 0x140a38717;
          unaff_R15 = (undefined1 (*) [16])(*UNRECOVERED_JUMPTABLE)(auVar87._0_8_);
          UNRECOVERED_JUMPTABLE = *(code **)(pauVar36[1] + 8);
          *(undefined8 *)((longlong)ppauVar44 + -8) = 0x140a38726;
          pauVar36 = unaff_R15;
          (*UNRECOVERED_JUMPTABLE)(unaff_R14);
          unaff_RDI = unaff_RDI + -1;
          pauVar53 = unaff_RBP;
          if (unaff_R15 != (undefined1 (*) [16])0x0) goto code_r0x000140a38732;
        }
        puVar26 = &UNK_14337f978;
code_r0x000140a38cb3:
        *(undefined **)((longlong)ppauVar44 + 0x100) = puVar26;
        *(undefined8 *)((longlong)ppauVar44 + 0x108) = 0x22;
        goto code_r0x000140a38ce4;
      }
    }
code_r0x000140a38800:
    *(undefined8 *)((longlong)ppauVar44 + -8) = 0x140a38810;
    pauVar36 = unaff_RBX;
    auVar68._0_8_ = pdb_140e08f50((undefined1 *)((longlong)ppauVar44 + 0x1a0));
    auVar68._8_8_ = extraout_XMM0_Qb_00;
    *(int *)*unaff_R12 = (int)unaff_RSI;
    unaff_R14 = unaff_RBX + 0x10;
    puVar26 = (undefined *)(ulonglong)(byte)unaff_RBX[0x4d][0];
    unaff_RDI = (undefined1 (*) [16])&UNK_143397930;
    UNRECOVERED_JUMPTABLE_00 = (undefined1 (*) [16])&UNK_14303b690;
code_r0x000140a38830:
    pauVar25 = (undefined1 (*) [16])
               (*UNRECOVERED_JUMPTABLE_00 +
               *(int *)(*UNRECOVERED_JUMPTABLE_00 + (longlong)puVar26 * 4));
    pauVar53 = unaff_RDI;
    auVar87 = in_XMM1;
code_r0x000140a38837:
    piVar47 = (int *)ppauVar44;
    unaff_RDI = pauVar53;
    in_XMM1 = auVar87;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
    switch(pauVar25) {
    case (undefined1 (*) [16])0x140a38839:
code_r0x000140a38839:
      pauVar36 = unaff_R14;
      unaff_R12 = (undefined1 (*) [16])0x8c;
      pauVar53 = unaff_RDI;
      unaff_R14 = pauVar36;
      break;
    case (undefined1 (*) [16])0x140a38847:
code_r0x000140a38847:
      pauVar36 = unaff_RBX + 0x39;
      unaff_R12 = (undefined1 (*) [16])0x31c;
      pauVar25 = unaff_RDI;
      pauVar53 = unaff_RDI;
code_r0x000140a38857:
      unaff_RDI = pauVar25;
      break;
    case (undefined1 (*) [16])0x140a38859:
      pauVar36 = unaff_RBX + 0x27;
      unaff_R12 = (undefined1 (*) [16])0x1c4;
      pauVar25 = (undefined1 (*) [16])&UNK_143397968;
code_r0x000140a3886d:
      unaff_RDI = pauVar25;
      break;
    case (undefined1 (*) [16])0x140a3886f:
      pauVar36 = unaff_RBX + 0x2f;
      unaff_RDI = (undefined1 (*) [16])&UNK_1433979d8;
      unaff_R12 = (undefined1 (*) [16])0x264;
      break;
    case (undefined1 (*) [16])0x140a38885:
code_r0x000140a3888c:
      pauVar36 = (undefined1 (*) [16])(unaff_RBX[0x1b] + 8);
      unaff_R12 = (undefined1 (*) [16])0x144;
      pauVar53 = unaff_RDI;
      break;
    case (undefined1 (*) [16])0x140a38897:
      pauVar36 = (undefined1 (*) [16])(unaff_RBX[0x44] + 8);
      unaff_RDI = (undefined1 (*) [16])&UNK_1433979a0;
      unaff_R12 = (undefined1 (*) [16])0x3a4;
      break;
    case (undefined1 (*) [16])0x140a38b0a:
code_r0x000140a38b0a:
      bVar30 = (byte)UNRECOVERED_JUMPTABLE_00;
      (*unaff_RDI)[0] = (*unaff_RDI)[0] + bVar30;
      pbVar3 = (byte *)((longlong)pauVar25 * 2);
      *pbVar3 = *pbVar3 << 1 | (char)*pbVar3 < '\0';
      UNRECOVERED_JUMPTABLE = (code *)(pauVar25[-8] + 0xd);
      bVar62 = CARRY1((byte)*UNRECOVERED_JUMPTABLE,bVar30);
      *UNRECOVERED_JUMPTABLE = (code)((char)*UNRECOVERED_JUMPTABLE + bVar30);
code_r0x000140a38b14:
      pauVar25 = (undefined1 (*) [16])(ulonglong)((int)pauVar25 + 0x2602b8f + (uint)bVar62);
      pauVar53 = unaff_RDI;
      goto code_r0x000140a38b04;
    case (undefined1 (*) [16])0x140a38b13:
      goto code_r0x000140a38b04;
    case (undefined1 (*) [16])0x140a38b1c:
      uVar54 = (int)pauVar53 >> 1;
      pauVar53 = (undefined1 (*) [16])(ulonglong)uVar54;
      if (CONCAT71((int7)((ulonglong)UNRECOVERED_JUMPTABLE_00 >> 8),(*pauVar25)[1]) != 1 &&
          uVar54 == 0) goto code_r0x000140a38b62;
      goto code_r0x000140a38b22;
    case (undefined1 (*) [16])0x140a38b2c:
      goto code_r0x000140a38b32;
    case (undefined1 (*) [16])0x140a38b3c:
      goto code_r0x000140a38b34;
    case (undefined1 (*) [16])0x140a38b4a:
      pauVar25[-8][0xd] = pauVar25[-8][0xd] + (char)UNRECOVERED_JUMPTABLE_00;
      goto code_r0x000140a38b44;
    case (undefined1 (*) [16])0x140a38d79:
      in_XMM1._0_4_ = (float)SUB104(in_ST0,0);
      in_XMM1._8_8_ = auVar87._8_8_;
      in_XMM1._4_4_ = 0.0;
code_r0x000140a38d80:
      auVar68._0_4_ = auVar68._0_4_ / in_XMM1._0_4_;
      unaff_RDI = *(undefined1 (**) [16])*UNRECOVERED_JUMPTABLE_00;
      pauVar25 = (undefined1 (*) [16])(ulonglong)*(uint *)(UNRECOVERED_JUMPTABLE_00[1] + 0xc);
code_r0x000140a38d8a:
      UNRECOVERED_JUMPTABLE_00 = *(undefined1 (**) [16])UNRECOVERED_JUMPTABLE_00[1];
code_r0x000140a38d8e:
      *(int *)(unaff_RDI[0x4d] + 8) = auVar68._0_4_;
      *(int *)*UNRECOVERED_JUMPTABLE_00 = (int)pauVar25;
code_r0x000140a38d98:
      UNRECOVERED_JUMPTABLE_00 = (undefined1 (*) [16])(ulonglong)(byte)unaff_RDI[0x4d][0];
      goto code_r0x000140a38dad;
    case (undefined1 (*) [16])0x140a38d8d:
code_r0x000140a38d8f:
      *(undefined1 (*) [16])(unaff_RDI[0x4d] + 8) = auVar68;
      goto code_r0x000140a38d8e;
    case (undefined1 (*) [16])0x140a38d98:
      goto code_r0x000140a38d98;
    case (undefined1 (*) [16])0x140a38da7:
      goto code_r0x000140a38dad;
    case (undefined1 (*) [16])0x140a38dbd:
      unaff_R14 = (undefined1 (*) [16])0x8c;
      goto code_r0x000140a38e26;
    case (undefined1 (*) [16])0x140a38dd3:
code_r0x000140a38dd3:
      (*pauVar25)[0] = (*pauVar25)[0] + (char)pauVar25;
      goto code_r0x000140a38dd5;
    case (undefined1 (*) [16])0x140a392fe:
      (*pauVar25)[0] = (*pauVar25)[0] + (char)pauVar25;
      UNRECOVERED_JUMPTABLE = (code *)(pauVar36[0x418b167] + (longlong)pauVar25 * 8 + 4);
      *UNRECOVERED_JUMPTABLE =
           (code)((char)*UNRECOVERED_JUMPTABLE << 4 | (byte)*UNRECOVERED_JUMPTABLE >> 4);
code_r0x000140a3930d:
      uVar65 = auVar68._0_4_;
      **(undefined4 **)UNRECOVERED_JUMPTABLE_00[1] = (int)pauVar25;
      pauVar25 = *(undefined1 (**) [16])*UNRECOVERED_JUMPTABLE_00;
      goto code_r0x000140a39316;
    case (undefined1 (*) [16])0x140a39372:
code_r0x000140a39372:
      if (pauVar36 <= pauVar25) {
        pauVar56 = pauVar36;
      }
      pauVar36 = (undefined1 (*) [16])(((longlong)pauVar25 - (longlong)pauVar56) * 0xd0);
      pauVar25 = *(undefined1 (**) [16])*UNRECOVERED_JUMPTABLE_00;
      uVar65 = *(undefined4 *)*pauVar25;
      goto code_r0x000140a3938a;
    case (undefined1 (*) [16])0x140a3940b:
code_r0x000140a3940b:
      *(undefined8 *)((longlong)ppauVar44 + 0x28) =
           *(undefined8 *)(pauVar55[4] + 0xc + (longlong)pauVar36);
      uVar51 = SUB84(pauVar56,0);
      *(undefined4 *)*pauVar58 = uVar51;
      *(undefined4 *)pauVar25[1] = *(undefined4 *)((longlong)ppauVar44 + 0x30);
      in_R11 = *(undefined1 (**) [16])((longlong)ppauVar44 + 0x28);
      goto code_r0x000140a39426;
    case (undefined1 (*) [16])0x140a394af:
      *(undefined1 (**) [16])((longlong)ppauVar44 + -8) = pauVar25;
      goto code_r0x000140a39467;
    case (undefined1 (*) [16])0x140a39a6f:
code_r0x000140a39a6f:
      *(undefined8 *)((longlong)piVar47 + -8) = 0x140a39a74;
      pub_1406abac0((byte *)UNRECOVERED_JUMPTABLE_00,(ulonglong)pauVar36,(ulonglong)pauVar55);
      pauVar25 = extraout_RAX;
code_r0x000140a39a7c:
      return pauVar25;
    case (undefined1 (*) [16])0x140a39a80:
      *(undefined1 (**) [16])((longlong)ppauVar44 + 0x10) = pauVar36;
      puVar48 = (undefined8 *)((longlong)ppauVar44 + -8);
      ppauVar44 = (undefined1 (**) [16])((longlong)ppauVar44 + -8);
      *puVar48 = unaff_RBP;
    case (undefined1 (*) [16])0x140a39a86:
      goto code_r0x000140a39a86;
    case (undefined1 (*) [16])0x140a39a94:
      goto code_r0x000140a39a94;
    case (undefined1 (*) [16])0x140a39aa2:
      UNRECOVERED_JUMPTABLE = (code *)swi(3);
      pauVar27 = (undefined1 (*) [16])(*UNRECOVERED_JUMPTABLE)();
      return pauVar27;
    case (undefined1 (*) [16])0x140a39ab0:
      *(undefined1 (**) [16])((longlong)ppauVar44 + -8) = unaff_RSI;
      uVar57 = (ulonglong)(byte)(*UNRECOVERED_JUMPTABLE_00)[0];
      UNRECOVERED_JUMPTABLE_00 = (undefined1 (*) [16])&UNK_14303b6ec;
      goto code_r0x000140a39ac2;
    case (undefined1 (*) [16])0x14303b690:
      *(uint *)(pauVar53[-0x602e361] + 0xd) = *(uint *)(pauVar53[-0x602e361] + 0xd) >> 1;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
code_r0x000140a388ab:
    UNRECOVERED_JUMPTABLE = *(code **)unaff_RDI[3];
    *(undefined8 *)((longlong)ppauVar44 + -8) = 0x140a388bc;
    (*UNRECOVERED_JUMPTABLE)((undefined1 *)((longlong)ppauVar44 + 0x220),pauVar36);
    *(undefined8 *)((longlong)ppauVar44 + -8) = 0x140a388cc;
    unaff_XMM10._0_4_ = (float)pub_142e32a20(CONCAT44(fVar84,fVar34 / _DAT_142f60fec));
    fVar18 = _DAT_142e36f28;
    *(float *)(unaff_RBX[0x10] + 4 + (longlong)unaff_R12) =
         (_DAT_142e36f28 - unaff_XMM10._0_4_) *
         (float)((ulonglong)*(undefined8 *)(unaff_RBX[0x10] + 4 + (longlong)unaff_R12) >> 0x20) +
         (_DAT_142e36f28 - (_DAT_142e36f28 - unaff_XMM10._0_4_)) *
         (float)*(undefined8 *)(unaff_RBX[0x10] + 4 + (longlong)unaff_R12);
    auVar87._0_8_ = *(undefined8 *)(*unaff_R12 + (longlong)*unaff_R14);
    uVar59 = *(undefined8 *)(*unaff_R12 + (longlong)*unaff_R14 + 8);
    uVar5 = *(undefined8 *)(*unaff_R12 + (longlong)unaff_R14[1]);
    uVar10 = *(undefined8 *)(*unaff_R12 + (longlong)unaff_R14[1] + 8);
    uVar11 = *(undefined8 *)(unaff_R14[1] + 0xc + (longlong)unaff_R12 + 8);
    *(undefined8 *)((longlong)ppauVar44 + 0x7c) =
         *(undefined8 *)(unaff_R14[1] + 0xc + (longlong)unaff_R12);
    *(undefined8 *)((longlong)ppauVar44 + 0x84) = uVar11;
    *(undefined8 *)((longlong)ppauVar44 + 0x70) = uVar5;
    *(undefined8 *)((longlong)ppauVar44 + 0x78) = uVar10;
    *(undefined8 *)((longlong)ppauVar44 + 0x60) = auVar87._0_8_;
    *(undefined8 *)((longlong)ppauVar44 + 0x68) = uVar59;
    *(undefined8 *)((longlong)ppauVar44 + -8) = 0x140a38933;
    unaff_XMM10._0_4_ = (float)pdb_140dee660((undefined1 *)((longlong)ppauVar44 + 0x60));
    *(undefined8 *)((longlong)ppauVar44 + -8) = 0x140a38956;
    fVar72 = (float)pub_142e329e0();
    *(undefined8 *)((longlong)ppauVar44 + -8) = 0x140a38963;
    fVar19 = (float)pub_142e32b30();
    fVar72 = fVar72 / fVar19;
    fVar19 = fVar72 / *(float *)(unaff_RBX[0x4d] + 8);
    *(undefined8 *)((longlong)ppauVar44 + -8) = 0x140a38982;
    pdb_140e07bc0((undefined1 *)((longlong)ppauVar44 + 0x60),
                  (undefined1 *)((longlong)ppauVar44 + 0x220));
    in_XMM1 = ZEXT416((uint)fVar19);
    in_XMM2 = ZEXT416((uint)fVar72) << 0x20;
    in_XMM3 = ZEXT416((uint)unaff_XMM10._0_4_) << 0x40;
    in_XMM4 = ZEXT416((uint)(fVar18 / fVar19));
    in_XMM5 = ZEXT416((uint)(fVar18 / fVar72)) << 0x20;
    auVar68._0_12_ = ZEXT412(0);
    auVar68._12_4_ = fVar18 / unaff_XMM10._0_4_;
    *(undefined8 *)((longlong)ppauVar44 + 0x170) = *(undefined8 *)((longlong)ppauVar44 + 0x90);
    *(undefined8 *)((longlong)ppauVar44 + 0x178) = *(undefined8 *)((longlong)ppauVar44 + 0x98);
    *(undefined8 *)((longlong)ppauVar44 + 0x160) = *(undefined8 *)((longlong)ppauVar44 + 0x80);
    *(undefined8 *)((longlong)ppauVar44 + 0x168) = *(undefined8 *)((longlong)ppauVar44 + 0x88);
    *(undefined8 *)((longlong)ppauVar44 + 0x150) = *(undefined8 *)((longlong)ppauVar44 + 0x70);
    *(undefined8 *)((longlong)ppauVar44 + 0x158) = *(undefined8 *)((longlong)ppauVar44 + 0x78);
    *(undefined8 *)((longlong)ppauVar44 + 0x140) = *(undefined8 *)((longlong)ppauVar44 + 0x60);
    *(undefined8 *)((longlong)ppauVar44 + 0x148) = *(undefined8 *)((longlong)ppauVar44 + 0x68);
code_r0x000140a38a10:
    unaff_XMM7_Da = *(float *)((longlong)ppauVar44 + 0xa0);
    unaff_XMM7_Db = *(float *)((longlong)ppauVar44 + 0xa4);
    unaff_XMM7_Dc = *(float *)((longlong)ppauVar44 + 0xa8);
    unaff_XMM7_Dd = *(float *)((longlong)ppauVar44 + 0xac);
code_r0x000140a38a18:
    *(float *)((longlong)ppauVar44 + 0x100) = unaff_XMM7_Da;
    *(float *)((longlong)ppauVar44 + 0x104) = unaff_XMM7_Db;
    *(float *)((longlong)ppauVar44 + 0x108) = unaff_XMM7_Dc;
    *(float *)((longlong)ppauVar44 + 0x10c) = unaff_XMM7_Dd;
    unaff_XMM7_Da = *(float *)((longlong)ppauVar44 + 0xb0);
    unaff_XMM7_Db = *(float *)((longlong)ppauVar44 + 0xb4);
    unaff_XMM7_Dc = *(float *)((longlong)ppauVar44 + 0xb8);
    unaff_XMM7_Dd = *(float *)((longlong)ppauVar44 + 0xbc);
    unaff_RDI = pauVar53;
code_r0x000140a38a28:
    *(float *)((longlong)ppauVar44 + 0x110) = unaff_XMM7_Da;
    *(float *)((longlong)ppauVar44 + 0x114) = unaff_XMM7_Db;
    *(float *)((longlong)ppauVar44 + 0x118) = unaff_XMM7_Dc;
    *(float *)((longlong)ppauVar44 + 0x11c) = unaff_XMM7_Dd;
    *(undefined8 *)((longlong)ppauVar44 + 0x120) = *(undefined8 *)((longlong)ppauVar44 + 0xc0);
    *(undefined8 *)((longlong)ppauVar44 + 0x128) = *(undefined8 *)((longlong)ppauVar44 + 200);
    break;
  case 6:
code_r0x000140a37d96:
    pauVar25[-8][0xd] = pauVar25[-8][0xd] + (char)UNRECOVERED_JUMPTABLE_00;
    goto code_r0x000140a37d9e;
  case 7:
    pbVar3 = (byte *)((ulonglong)
                      CONCAT22((short)(uVar54 >> 0x10),
                               CONCAT11((char)(uVar54 >> 8) + (char)unaff_RBX,bVar30)) * 5 + -0x21);
    *pbVar3 = *pbVar3 ^ (byte)unaff_RBP;
    UNRECOVERED_JUMPTABLE_00 = unaff_RBX + 0x2f;
    puVar26 = &UNK_1433979d8;
    goto code_r0x000140a37e93;
  case 8:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 9:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 10:
    pauVar27 = (undefined1 (*) [16])(ulonglong)*(uint *)((longlong)ppauVar44 + 0xf0);
    goto code_r0x000140a37e33;
  case 0xb:
    lVar22 = CONCAT71(uVar29,cVar15 + (*pauVar25)[0]);
    pcVar21 = (char *)(lVar22 + -0x73);
    *pcVar21 = *pcVar21 + bVar30;
    puVar26 = (undefined *)(ulonglong)((int)lVar22 + 0x295fb64);
code_r0x000140a37e93:
    uVar51 = SUB84(unaff_RSI,0);
    UNRECOVERED_JUMPTABLE = *(code **)(puVar26 + 0x18);
    *(undefined8 *)((longlong)ppauVar44 + -8) = 0x140a37e96;
    (*UNRECOVERED_JUMPTABLE)(UNRECOVERED_JUMPTABLE_00);
    in_R11 = (undefined1 (*) [16])((ulonglong)unaff_RDI & 0xffffffff);
    goto code_r0x000140a37e99;
  case 0xc:
code_r0x000140a3818a:
    *(int *)ppauVar44 = (int)pauVar27;
    goto code_r0x000140a38185;
  case 0xd:
    uVar54 = *(uint *)*pauVar25;
    *(int *)(ulonglong)uVar54 = *(int *)(ulonglong)uVar54 + uVar54;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0xe:
    goto code_r0x000140a3819a;
  case 0xf:
    goto code_r0x000140a3819a;
  case 0x10:
    goto code_r0x000140a38185;
  case 0x11:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x12:
    *(float *)(unaff_RDI[1] + 4) = unaff_XMM7_Da;
    *(float *)(unaff_RDI[1] + 8) = unaff_XMM7_Db;
code_r0x000140a387f0:
    *(float *)(unaff_R15[1] + 4) = unaff_XMM7_Da;
    *(float *)(unaff_R15[1] + 8) = unaff_XMM7_Db;
    *(float *)(unaff_R15[1] + 0xc) = unaff_XMM8_Da;
    unaff_R12 = *(undefined1 (**) [16])((longlong)ppauVar44 + 0x40);
    goto code_r0x000140a38800;
  case 0x13:
    (*pauVar25)[0] = (*pauVar25)[0] + cVar15;
    goto code_r0x000140a38839;
  case 0x14:
    *(int *)ppauVar44 = iVar20;
    goto code_r0x000140a38800;
  case 0x15:
    uVar57 = (ulonglong)unaff_RBP & 0xffffffff;
    unaff_RBP = (undefined1 (*) [16])((ulonglong)pauVar25 & 0xffffffff);
    UNRECOVERED_JUMPTABLE_00 =
         (undefined1 (*) [16])
         (ulonglong)CONCAT31((int3)(uVar54 >> 8),bVar30 + *(char *)(uVar57 - 0x73));
    puVar26 = (undefined *)(ulonglong)(uVar86 | 0x2602e60);
    goto code_r0x000140a38830;
  case 0x16:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x17:
    ppauVar44 = (undefined1 (**) [16])0x31c;
    goto code_r0x000140a38847;
  case 0x18:
    (*pauVar25)[0] = (*pauVar25)[0] + cVar15;
    pauVar53 = unaff_RDI;
    goto code_r0x000140a38b04;
  case 0x19:
code_r0x000140a38ac2:
    *(char *)((longlong)ppauVar44 + 0x110) =
         *(char *)((longlong)ppauVar44 + 0x110) - (char)UNRECOVERED_JUMPTABLE_00;
    break;
  case 0x1a:
    piVar47 = (int *)((ulonglong)pauVar25 & 0xffffffffffffff30);
    *piVar47 = *piVar47 + (int)piVar47;
    (*unaff_RDI)[0] = (*unaff_RDI)[0] + bVar30;
    *(int *)unaff_RBX[0xc] = *(int *)unaff_RBX[0xc] - (int)piVar47;
    break;
  case 0x1b:
    (*pauVar25)[0] = (*pauVar25)[0] + cVar15;
    (*unaff_RDI)[0] = (*unaff_RDI)[0] + bVar30;
    *(int *)unaff_RBX[0xe] = *(int *)unaff_RBX[0xe] - (int)pauVar36;
    goto code_r0x000140a38ae7;
  case 0x1c:
    pauVar27 = (undefined1 (*) [16])((ulonglong)ppauVar44 & 0xffffffff);
    ppauVar44 = (undefined1 (**) [16])((ulonglong)pauVar25 & 0xffffffff);
code_r0x000140a38acc:
    piVar47 = (int *)((ulonglong)pauVar27 & 0xffffffffffffff20);
    *piVar47 = *piVar47 + (int)piVar47;
    (*unaff_RDI)[0] = (*unaff_RDI)[0] + (char)UNRECOVERED_JUMPTABLE_00;
    *(char *)((longlong)ppauVar44 + 0x130) =
         *(char *)((longlong)ppauVar44 + 0x130) - (char)unaff_RBX;
    break;
  case 0x1d:
    goto code_r0x000140a38af4;
  case 0x1e:
code_r0x000140a38d45:
    puVar45 = (undefined1 *)((longlong)ppauVar44 + -0x188);
    *(float *)((longlong)ppauVar44 + -0x18) = unaff_XMM9_Da;
    *(float *)((longlong)ppauVar44 + -0x14) = unaff_XMM9_Db;
    *(float *)((longlong)ppauVar44 + -0x10) = unaff_XMM9_Dc;
    *(float *)((longlong)ppauVar44 + -0xc) = unaff_XMM9_Dd;
    *(float *)((longlong)ppauVar44 + -0x28) = unaff_XMM8_Da;
    *(float *)((longlong)ppauVar44 + -0x24) = unaff_XMM8_Db;
    *(float *)((longlong)ppauVar44 + -0x20) = unaff_XMM8_Dc;
    *(float *)((longlong)ppauVar44 + -0x1c) = unaff_XMM8_Dd;
    *(float *)((longlong)ppauVar44 + -0x38) = unaff_XMM7_Da;
    *(float *)((longlong)ppauVar44 + -0x34) = unaff_XMM7_Db;
    *(float *)((longlong)ppauVar44 + -0x30) = unaff_XMM7_Dc;
    *(float *)((longlong)ppauVar44 + -0x2c) = unaff_XMM7_Dd;
    goto code_r0x000140a38d66;
  case 0x1f:
    UNRECOVERED_JUMPTABLE_00 = (undefined1 (*) [16])(ulonglong)*(uint *)UNRECOVERED_JUMPTABLE_00[1];
    goto code_r0x000140a38d8e;
  case 0x20:
    goto code_r0x000140a38d5f;
  case 0x21:
    goto code_r0x000140a38d75;
  case 0x22:
    piVar47 = (int *)((ulonglong)pauVar25 & 0xffffffffffffff70);
    *piVar47 = *piVar47 + (int)piVar47;
    (unaff_RDI[2] + 9)[(longlong)UNRECOVERED_JUMPTABLE_00] =
         (unaff_RDI[2] + 9)[(longlong)UNRECOVERED_JUMPTABLE_00] + (char)piVar47;
    *piVar47 = *piVar47 + (int)piVar47;
code_r0x000140a38d5d:
    (*unaff_RDI)[0] = (*unaff_RDI)[0] + (char)UNRECOVERED_JUMPTABLE_00;
    goto code_r0x000140a38d5f;
  case 0x23:
    pcVar21 = (char *)CONCAT62((int6)((ulonglong)pauVar25 >> 0x10),
                               CONCAT11(((longlong)pauVar25 < 0) << 7 |
                                        (pauVar25 == (undefined1 (*) [16])0x0) << 6 | in_AF << 4 |
                                        ((POPCOUNT((ulonglong)pauVar25 & 0xff) & 1U) == 0) << 2 | 2U
                                        | 0xfffffffebcfc49b7 < uVar57,cVar15));
    (*UNRECOVERED_JUMPTABLE_00)[0] = (*UNRECOVERED_JUMPTABLE_00)[0] + cVar15;
    *pcVar21 = *pcVar21 + cVar15;
    goto code_r0x000140a38d98;
  case 0x24:
  case 0x25:
    pauVar25 = (undefined1 (*) [16])(ulonglong)*(uint *)(&UNK_14303b650 + uVar57);
code_r0x000140a392b5:
    auVar87 = *(undefined1 (*) [16])(*(longlong *)(*pauVar25 + 8) + 0x30);
    auVar68._8_8_ = auVar87._8_8_;
    auVar68._0_8_ = auVar68._8_8_;
    pauVar36 = (undefined1 (*) [16])
               (ulonglong)
               ((auVar87._4_4_ & 0x7fffffff) < 0x7f800000 &&
               (auVar87._0_4_ & 0x7fffffff) < 0x7f800000);
    uVar54 = auVar87._8_4_ & 0x7fffffff;
    bVar64 = SBORROW4(uVar54,0x7f800000);
    bVar63 = (int)(uVar54 + 0x80800000) < 0;
code_r0x000140a39303:
    if (((byte)pauVar36 & bVar64 != bVar63) != 0) {
      pauVar25 = (undefined1 (*) [16])(ulonglong)*(uint *)(UNRECOVERED_JUMPTABLE_00[1] + 0xc);
      goto code_r0x000140a3930d;
    }
    goto LAB_140a39320;
  case 0x26:
    goto code_r0x000140a3932a;
  case 0x27:
    goto code_r0x000140a39467;
  case 0x28:
    *(undefined4 *)(*unaff_RDI + 1) = *(undefined4 *)(*unaff_RDI + 1);
    (*UNRECOVERED_JUMPTABLE_00)[3] = (*UNRECOVERED_JUMPTABLE_00)[3] + bVar30;
    UNRECOVERED_JUMPTABLE_00[-8][0xb] = UNRECOVERED_JUMPTABLE_00[-8][0xb] ^ (byte)pauVar56;
    *(undefined1 (**) [16])((longlong)ppauVar44 + -8) = unaff_RSI;
    unaff_RBP[-8][0xb] = unaff_RBP[-8][0xb] & bVar30;
    unaff_RBP[3][1] = unaff_RBP[3][1] - (char)pauVar55;
    ppauVar44 = (undefined1 (**) [16])(*unaff_RBP + 8);
    if (pauVar36 <= pauVar25) {
      pauVar56 = pauVar36;
    }
    pauVar36 = (undefined1 (*) [16])(((longlong)pauVar25 - (longlong)pauVar56) * 0xd0);
    auVar68 = ZEXT416(*(uint *)((pauVar55 + 4)[((longlong)pauVar25 - (longlong)pauVar56) * 0xd] + 8)
                     );
    pauVar56 = (undefined1 (*) [16])(ulonglong)*(uint *)(UNRECOVERED_JUMPTABLE_00[1] + 0xc);
    goto code_r0x000140a393f3;
  case 0x29:
    *(int *)unaff_RBP[-1] = (int)unaff_RDI;
code_r0x000140a39a2a:
    UNRECOVERED_JUMPTABLE_00 = (undefined1 (*) [16])0x1;
code_r0x000140a39a34:
    *(undefined8 *)((longlong)ppauVar44 + -8) = 0x140a39a39;
    pdb_142dc7e2a(UNRECOVERED_JUMPTABLE_00);
    goto LAB_140a39a4c;
  case 0x2a:
    uVar17 = in((short)pauVar36);
    pbVar3 = (byte *)(CONCAT71(uVar29,uVar17) + -0x73);
    *pbVar3 = *pbVar3 & bVar30;
    piVar47 = (int *)((longlong)ppauVar44 + -8);
    *(int *)((longlong)ppauVar44 + -8) = 0x50;
    *(int *)((longlong)ppauVar44 + -4) = 0;
    goto code_r0x000140a39a5c;
  case 0x2b:
    (*pauVar25)[0] = (*pauVar25)[0] + cVar15;
    pauVar36[1][3] = pauVar36[1][3] + (char)((ulonglong)unaff_RBX >> 8);
    goto code_r0x000140a39a46;
  case 0x2c:
    goto LAB_140a39a4c;
  case 0x2d:
    UNRECOVERED_JUMPTABLE = (code *)swi(1);
    pauVar27 = (undefined1 (*) [16])(*UNRECOVERED_JUMPTABLE)();
    return pauVar27;
  case 0x2e:
    (*pauVar25)[0] = (*pauVar25)[0] + cVar15;
    (&UNK_14303b5d3)[uVar57] = (&UNK_14303b5d3)[uVar57] + bVar30;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x2f:
  case 0x30:
  case 0x31:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
code_r0x000140a38a40:
  *(undefined8 *)((longlong)ppauVar44 + 0x130) = *(undefined8 *)((longlong)ppauVar44 + 0xd0);
  *(undefined8 *)((longlong)ppauVar44 + 0x138) = *(undefined8 *)((longlong)ppauVar44 + 0xd8);
  *unaff_RBX = in_XMM1;
  unaff_RBX[1] = in_XMM2;
  auVar87._0_8_ = _UNK_142e37ab8;
  *(undefined8 *)unaff_RBX[2] = _DAT_142e37ab0;
  *(undefined8 *)(unaff_RBX[2] + 8) = auVar87._0_8_;
  unaff_RBX[3] = in_XMM3;
  unaff_RBX[4] = in_XMM4;
  unaff_RBX[5] = in_XMM5;
  unaff_RBX[6] = auVar68;
  auVar87._0_8_ = _UNK_142e37ac8;
  *(undefined8 *)unaff_RBX[7] = _DAT_142e37ac0;
  *(undefined8 *)(unaff_RBX[7] + 8) = auVar87._0_8_;
  auVar87._0_8_ = *(undefined8 *)((longlong)ppauVar44 + 0x148);
  uVar59 = *(undefined8 *)((longlong)ppauVar44 + 0x150);
  uVar5 = *(undefined8 *)((longlong)ppauVar44 + 0x158);
  uVar10 = *(undefined8 *)((longlong)ppauVar44 + 0x160);
  uVar11 = *(undefined8 *)((longlong)ppauVar44 + 0x168);
  uVar12 = *(undefined8 *)((longlong)ppauVar44 + 0x170);
  uVar13 = *(undefined8 *)((longlong)ppauVar44 + 0x178);
  *(undefined8 *)unaff_RBX[8] = *(undefined8 *)((longlong)ppauVar44 + 0x140);
  *(undefined8 *)(unaff_RBX[8] + 8) = auVar87._0_8_;
  *(undefined8 *)unaff_RBX[9] = uVar59;
  *(undefined8 *)(unaff_RBX[9] + 8) = uVar5;
  *(undefined8 *)unaff_RBX[10] = uVar10;
  *(undefined8 *)(unaff_RBX[10] + 8) = uVar11;
  *(undefined8 *)unaff_RBX[0xb] = uVar12;
  *(undefined8 *)(unaff_RBX[0xb] + 8) = uVar13;
  auVar68 = *(undefined1 (*) [16])((longlong)ppauVar44 + 0x100);
  in_XMM1 = *(undefined1 (*) [16])((longlong)ppauVar44 + 0x110);
  in_XMM2 = *(undefined1 (*) [16])((longlong)ppauVar44 + 0x120);
  in_XMM3 = *(undefined1 (*) [16])((longlong)ppauVar44 + 0x130);
  unaff_RBX[0xc] = auVar68;
  unaff_RBX[0xd] = in_XMM1;
code_r0x000140a38ae7:
  unaff_RBX[0xe] = in_XMM2;
  unaff_RBX[0xf] = in_XMM3;
  **(undefined4 **)((longlong)ppauVar44 + 0x40) = (int)unaff_RSI;
  pauVar25 = *(undefined1 (**) [16])((longlong)ppauVar44 + 0x1c8);
  pauVar53 = unaff_RDI;
code_r0x000140a38b04:
  uVar65 = auVar68._0_4_;
  uVar51 = SUB84(pauVar56,0);
  auVar87._0_8_ = in_XMM1._0_8_;
  cVar6 = (code)pauVar25[9][8];
  pauVar25 = (undefined1 (*) [16])(ulonglong)(byte)cVar6;
  pauVar36 = (undefined1 (*) [16])&UNK_14303b6a8;
  UNRECOVERED_JUMPTABLE_00 =
       (undefined1 (*) [16])
       (&UNK_14303b6a8 + *(int *)(&UNK_14303b6a8 + (ulonglong)(byte)unaff_RBX[0x4d][0] * 4));
  unaff_RDI = pauVar53;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(unaff_RBX[0x4d][0]) {
  case 0:
    break;
  case 1:
code_r0x000140a38b22:
    unaff_R14 = (undefined1 (*) [16])(unaff_RBX[0x1b] + 8);
    break;
  case 2:
code_r0x000140a38b34:
    unaff_R14 = unaff_RBX + 0x27;
    pauVar53 = (undefined1 (*) [16])&UNK_143397968;
    break;
  case 3:
code_r0x000140a38b44:
    unaff_R14 = unaff_RBX + 0x2f;
    pauVar53 = (undefined1 (*) [16])&UNK_1433979d8;
    break;
  case 4:
    unaff_R14 = unaff_RBX + 0x39;
code_r0x000140a38b32:
    break;
  case 5:
    unaff_R14 = (undefined1 (*) [16])(unaff_RBX[0x44] + 8);
    pauVar53 = (undefined1 (*) [16])&UNK_1433979a0;
    break;
  case 6:
code_r0x000140a38da5:
    pauVar25[-8][0xd] = pauVar25[-8][0xd] + (char)UNRECOVERED_JUMPTABLE_00;
code_r0x000140a38dad:
    UNRECOVERED_JUMPTABLE_00 =
         (undefined1 (*) [16])
         (&UNK_14303b6c0 + *(int *)(&UNK_14303b6c0 + (longlong)UNRECOVERED_JUMPTABLE_00 * 4));
code_r0x000140a38dbb:
                    /* WARNING: Could not recover jumptable at 0x000140a38dbb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pauVar27 = (undefined1 (*) [16])(*(code *)UNRECOVERED_JUMPTABLE_00)(UNRECOVERED_JUMPTABLE_00);
    return pauVar27;
  case 7:
    goto code_r0x000140a38e26;
  case 8:
    *(undefined2 *)*pauVar25 = in_ES;
    (*pauVar25)[0] = (*pauVar25)[0] + (char)cVar6;
    goto code_r0x000140a38e26;
  case 9:
code_r0x000140a38dd5:
    goto code_r0x000140a38e26;
  case 10:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0xb:
    pauVar53 = (undefined1 (*) [16])
               (ulonglong)
               (byte)((char)cVar6 +
                      (&UNK_14303b666)
                      [*(int *)(&UNK_14303b6a8 + (ulonglong)(byte)unaff_RBX[0x4d][0] * 4)] +
                     *(char *)(in_FS_OFFSET +
                              (ulonglong)
                              (byte)((char)cVar6 +
                                    (&UNK_14303b666)
                                    [*(int *)(&UNK_14303b6a8 +
                                             (ulonglong)(byte)unaff_RBX[0x4d][0] * 4)])));
    unaff_RBX = (undefined1 (*) [16])
                CONCAT71((int7)((ulonglong)unaff_RBX >> 8),
                         (char)unaff_RBX + (char)((ulonglong)UNRECOVERED_JUMPTABLE_00 >> 8));
    pauVar25 = (undefined1 (*) [16])0x41000001;
code_r0x000140a38e26:
    UNRECOVERED_JUMPTABLE = *(code **)pauVar25[3];
    *(undefined8 *)((longlong)ppauVar44 + -8) = 0x140a38e3a;
    (*UNRECOVERED_JUMPTABLE)((undefined1 *)((longlong)ppauVar44 + 0x120));
    *(float *)(pauVar53[0x10] + 4 + (longlong)unaff_R14) =
         *(float *)(pauVar53[0x10] + 8 + (longlong)unaff_R14) * 0.0 +
         *(float *)(pauVar53[0x10] + 4 + (longlong)unaff_R14);
    auVar87._0_8_ = *(undefined8 *)(*unaff_R14 + (longlong)*unaff_RBX);
    uVar59 = *(undefined8 *)(*unaff_R14 + (longlong)*unaff_RBX + 8);
    uVar5 = *(undefined8 *)(*unaff_R14 + (longlong)unaff_RBX[1]);
    uVar10 = *(undefined8 *)(*unaff_R14 + (longlong)unaff_RBX[1] + 8);
    uVar11 = *(undefined8 *)(unaff_RBX[1] + 0xc + (longlong)unaff_R14 + 8);
    *(undefined8 *)((longlong)ppauVar44 + 0xbc) =
         *(undefined8 *)(unaff_RBX[1] + 0xc + (longlong)unaff_R14);
    *(undefined8 *)((longlong)ppauVar44 + 0xc4) = uVar11;
    *(undefined8 *)((longlong)ppauVar44 + 0xb0) = uVar5;
    *(undefined8 *)((longlong)ppauVar44 + 0xb8) = uVar10;
    *(undefined8 *)((longlong)ppauVar44 + 0xa0) = auVar87._0_8_;
    *(undefined8 *)((longlong)ppauVar44 + 0xa8) = uVar59;
    *(undefined8 *)((longlong)ppauVar44 + -8) = 0x140a38e90;
    fVar18 = (float)pdb_140dee660((undefined1 *)((longlong)ppauVar44 + 0xa0));
    *(undefined8 *)((longlong)ppauVar44 + -8) = 0x140a38eaf;
    unaff_XMM10._0_4_ = (float)pub_142e329e0();
    *(undefined8 *)((longlong)ppauVar44 + -8) = 0x140a38ebb;
    fVar72 = (float)pub_142e32b30();
    unaff_XMM10._0_4_ = unaff_XMM10._0_4_ / fVar72;
    fVar19 = unaff_XMM10._0_4_ / *(float *)(pauVar53[0x4d] + 8);
    *(undefined8 *)((longlong)ppauVar44 + -8) = 0x140a38edc;
    pauVar27 = (undefined1 (*) [16])
               pdb_140e07bc0((undefined1 *)((longlong)ppauVar44 + 0xa0),
                             (undefined1 *)((longlong)ppauVar44 + 0x120));
    fVar84 = _DAT_142e36f28 / fVar19;
    fVar34 = _DAT_142e36f28 / unaff_XMM10._0_4_;
    fVar72 = _DAT_142e36f28 / fVar18;
    *(undefined8 *)((longlong)ppauVar44 + 0x90) = *(undefined8 *)((longlong)ppauVar44 + 0xd0);
    *(undefined8 *)((longlong)ppauVar44 + 0x98) = *(undefined8 *)((longlong)ppauVar44 + 0xd8);
    *(undefined8 *)((longlong)ppauVar44 + 0x80) = *(undefined8 *)((longlong)ppauVar44 + 0xc0);
    *(undefined8 *)((longlong)ppauVar44 + 0x88) = *(undefined8 *)((longlong)ppauVar44 + 200);
    *(undefined8 *)((longlong)ppauVar44 + 0x70) = *(undefined8 *)((longlong)ppauVar44 + 0xb0);
    *(undefined8 *)((longlong)ppauVar44 + 0x78) = *(undefined8 *)((longlong)ppauVar44 + 0xb8);
    *(undefined8 *)((longlong)ppauVar44 + 0x60) = *(undefined8 *)((longlong)ppauVar44 + 0xa0);
    *(undefined8 *)((longlong)ppauVar44 + 0x68) = *(undefined8 *)((longlong)ppauVar44 + 0xa8);
    *(undefined8 *)((longlong)ppauVar44 + 0x20) = *(undefined8 *)((longlong)ppauVar44 + 0xe0);
    *(undefined8 *)((longlong)ppauVar44 + 0x28) = *(undefined8 *)((longlong)ppauVar44 + 0xe8);
    *(undefined8 *)((longlong)ppauVar44 + 0x30) = *(undefined8 *)((longlong)ppauVar44 + 0xf0);
    *(undefined8 *)((longlong)ppauVar44 + 0x38) = *(undefined8 *)((longlong)ppauVar44 + 0xf8);
    *(undefined8 *)((longlong)ppauVar44 + 0x40) = *(undefined8 *)((longlong)ppauVar44 + 0x100);
    *(undefined8 *)((longlong)ppauVar44 + 0x48) = *(undefined8 *)((longlong)ppauVar44 + 0x108);
    *(undefined8 *)((longlong)ppauVar44 + 0x50) = *(undefined8 *)((longlong)ppauVar44 + 0x110);
    *(undefined8 *)((longlong)ppauVar44 + 0x58) = *(undefined8 *)((longlong)ppauVar44 + 0x118);
    *pauVar53 = ZEXT416((uint)fVar19);
    pauVar53[1] = ZEXT416((uint)unaff_XMM10._0_4_) << 0x20;
    auVar87._0_8_ = _UNK_142e37ab8;
    *(undefined8 *)pauVar53[2] = _DAT_142e37ab0;
    *(undefined8 *)(pauVar53[2] + 8) = auVar87._0_8_;
    pauVar53[3] = ZEXT416((uint)fVar18) << 0x40;
    pauVar53[4] = ZEXT416((uint)fVar84);
    pauVar53[5] = ZEXT416((uint)fVar34) << 0x20;
    *(undefined4 *)pauVar53[6] = 0;
    *(undefined4 *)(pauVar53[6] + 4) = 0;
    *(undefined4 *)(pauVar53[6] + 8) = 0;
    *(float *)(pauVar53[6] + 0xc) = fVar72;
    auVar87._0_8_ = _UNK_142e37ac8;
    *(undefined8 *)pauVar53[7] = _DAT_142e37ac0;
    *(undefined8 *)(pauVar53[7] + 8) = auVar87._0_8_;
    auVar87._0_8_ = *(undefined8 *)((longlong)ppauVar44 + 0x68);
    uVar59 = *(undefined8 *)((longlong)ppauVar44 + 0x70);
    uVar5 = *(undefined8 *)((longlong)ppauVar44 + 0x78);
    uVar10 = *(undefined8 *)((longlong)ppauVar44 + 0x80);
    uVar11 = *(undefined8 *)((longlong)ppauVar44 + 0x88);
    uVar12 = *(undefined8 *)((longlong)ppauVar44 + 0x90);
    uVar13 = *(undefined8 *)((longlong)ppauVar44 + 0x98);
    *(undefined8 *)pauVar53[8] = *(undefined8 *)((longlong)ppauVar44 + 0x60);
    *(undefined8 *)(pauVar53[8] + 8) = auVar87._0_8_;
    *(undefined8 *)pauVar53[9] = uVar59;
    *(undefined8 *)(pauVar53[9] + 8) = uVar5;
    *(undefined8 *)pauVar53[10] = uVar10;
    *(undefined8 *)(pauVar53[10] + 8) = uVar11;
    *(undefined8 *)pauVar53[0xb] = uVar12;
    *(undefined8 *)(pauVar53[0xb] + 8) = uVar13;
    auVar87._0_8_ = *(undefined8 *)((longlong)ppauVar44 + 0x28);
    uVar59 = *(undefined8 *)((longlong)ppauVar44 + 0x30);
    uVar5 = *(undefined8 *)((longlong)ppauVar44 + 0x38);
    uVar10 = *(undefined8 *)((longlong)ppauVar44 + 0x40);
    uVar11 = *(undefined8 *)((longlong)ppauVar44 + 0x48);
    uVar12 = *(undefined8 *)((longlong)ppauVar44 + 0x50);
    uVar13 = *(undefined8 *)((longlong)ppauVar44 + 0x58);
    *(undefined8 *)pauVar53[0xc] = *(undefined8 *)((longlong)ppauVar44 + 0x20);
    *(undefined8 *)(pauVar53[0xc] + 8) = auVar87._0_8_;
    *(undefined8 *)pauVar53[0xd] = uVar59;
    *(undefined8 *)(pauVar53[0xd] + 8) = uVar5;
    *(undefined8 *)pauVar53[0xe] = uVar10;
    *(undefined8 *)(pauVar53[0xe] + 8) = uVar11;
    *(undefined8 *)pauVar53[0xf] = uVar12;
    *(undefined8 *)(pauVar53[0xf] + 8) = uVar13;
    return pauVar27;
  case 0xc:
  case 0xd:
code_r0x000140a39316:
    *(undefined8 *)(pauVar25[2] + 0xc) = auVar87._0_8_;
    *(undefined4 *)(pauVar25[3] + 4) = uVar65;
LAB_140a39320:
    pauVar25 = *(undefined1 (**) [16])unaff_R14[4];
    unaff_R12 = (undefined1 (*) [16])((ulonglong)(unaff_R12[-1] + 0xf) ^ (ulonglong)pauVar25);
code_r0x000140a3932a:
    pauVar27 = (undefined1 (*) [16])0x1;
    if ((longlong)pauVar25 < 0) {
      pauVar27 = unaff_R12;
    }
                    /* WARNING: Could not recover jumptable at 0x000140a39344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pauVar27 = (undefined1 (*) [16])
               (*(code *)(&UNK_14303b6d8 + *(int *)(&UNK_14303b6d8 + (longlong)pauVar27 * 4)))();
    return pauVar27;
  case 0xe:
code_r0x000140a3938a:
    *(undefined4 *)(pauVar55[4] + 8 + (longlong)pauVar36) = uVar65;
    auVar87._0_8_ = *(undefined8 *)(*pauVar25 + 8);
    *(undefined4 *)(pauVar55[5] + 4 + (longlong)pauVar36) = *(undefined4 *)pauVar25[1];
    *(undefined8 *)(pauVar55[4] + 0xc + (longlong)pauVar36) = auVar87._0_8_;
    pauVar56 = *(undefined1 (**) [16])(pauVar25[1] + 4);
    unaff_RDI = pauVar53;
code_r0x000140a393a7:
    pauVar58 = (undefined1 (*) [16])(ulonglong)*(uint *)(pauVar25[1] + 0xc);
code_r0x000140a393ab:
    *(int *)(*pauVar36 + (longlong)pauVar55[6]) = (int)pauVar58;
    *(undefined1 (**) [16])(pauVar55[5] + 8 + (longlong)pauVar36) = pauVar56;
    goto code_r0x000140a39456;
  case 0xf:
    UNRECOVERED_JUMPTABLE_00 =
         (undefined1 (*) [16])
         CONCAT71((int7)((ulonglong)UNRECOVERED_JUMPTABLE_00 >> 8),
                  (char)UNRECOVERED_JUMPTABLE_00 - (char)cVar6);
    goto code_r0x000140a39467;
  case 0x10:
    ppauVar44 = (undefined1 (**) [16])*ppauVar44;
    pauVar25 = (undefined1 (*) [16])((ulonglong)pauVar25 & 0xffffffffffffff28);
code_r0x000140a39426:
    *(undefined1 (**) [16])(*pauVar25 + 8) = in_R11;
    *(undefined4 *)((longlong)ppauVar44 + 0x30) = *(undefined4 *)(*pauVar36 + (longlong)pauVar55[6])
    ;
    *(undefined8 *)((longlong)ppauVar44 + 0x28) =
         *(undefined8 *)(pauVar55[5] + 8 + (longlong)pauVar36);
    *(undefined4 *)*pauVar58 = uVar51;
    *(undefined4 *)(pauVar25[1] + 0xc) = *(undefined4 *)((longlong)ppauVar44 + 0x30);
    *(undefined8 *)(pauVar25[1] + 4) = *(undefined8 *)((longlong)ppauVar44 + 0x28);
code_r0x000140a39456:
    pauVar36 = *(undefined1 (**) [16])*unaff_RBX;
    pauVar55 = (undefined1 (*) [16])(ulonglong)*(uint *)*pauVar36;
code_r0x000140a3945c:
    fVar18 = (float)(longlong)pauVar55;
    pauVar55 = *(undefined1 (**) [16])*unaff_RDI;
    in_XMM1 = ZEXT416((uint)fVar18);
code_r0x000140a39467:
    fVar18 = *(float *)*pauVar55 / in_XMM1._0_4_;
    unaff_XMM10._0_4_ = *(float *)(*pauVar55 + 4) / (float)*(uint *)(*pauVar36 + 4);
    lVar22 = *(longlong *)*unaff_RSI;
    fVar66 = fVar18 + fVar18 + _DAT_142e36f34;
    fVar82 = unaff_XMM10._0_4_ + unaff_XMM10._0_4_ + _DAT_142e36f34;
    unaff_XMM10._0_4_ = *(float *)(lVar22 + 0x48);
    fVar72 = *(float *)(lVar22 + 0x4c);
    fVar19 = *(float *)(lVar22 + 0x58);
    fVar34 = *(float *)(lVar22 + 0x5c);
    fVar18 = *(float *)*pauVar25;
    fVar84 = *(float *)(lVar22 + 0x68);
    fVar78 = *(float *)(lVar22 + 0x6c);
    fVar80 = *(float *)(lVar22 + 0x78);
    fVar81 = *(float *)(lVar22 + 0x7c);
    **(undefined4 **)UNRECOVERED_JUMPTABLE_00[1] =
         *(undefined4 *)(UNRECOVERED_JUMPTABLE_00[1] + 0xc);
    *(uint *)(*pauVar25 + 4) =
         (uint)((fVar18 * fVar84 + (fVar66 * unaff_XMM10._0_4_ - fVar82 * fVar19) + fVar80) /
               (fVar18 * fVar78 + (fVar66 * fVar72 - fVar82 * fVar34) + fVar81)) ^ _DAT_142e37820;
    return pauVar25;
  case 0x11:
code_r0x000140a39a87:
    *(undefined1 (**) [16])((longlong)ppauVar44 + -8) = unaff_RDI;
    ppauVar44 = (undefined1 (**) [16])((longlong)ppauVar44 + -0x28);
    UNRECOVERED_JUMPTABLE_00 = (undefined1 (*) [16])(pauVar36[2] + 8);
code_r0x000140a39a94:
    *(undefined8 *)((longlong)ppauVar44 + -8) = 0x140a39a99;
    pauVar27 = (undefined1 (*) [16])pdb_1404ca240(UNRECOVERED_JUMPTABLE_00);
    return pauVar27;
  case 0x12:
    *(int *)(pauVar25[-8] + 0xd) = *(int *)(pauVar25[-8] + 0xd) + (int)UNRECOVERED_JUMPTABLE_00;
    uVar57 = (ulonglong)((byte)cVar6 | 0x2601c2a);
code_r0x000140a39ac2:
                    /* WARNING: Could not recover jumptable at 0x000140a39ac9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pauVar27 = (undefined1 (*) [16])
               (*(code *)(*UNRECOVERED_JUMPTABLE_00 +
                         *(int *)(*UNRECOVERED_JUMPTABLE_00 + uVar57 * 4)))();
    return pauVar27;
  case 0x13:
    return pauVar25;
  case 0x14:
    UNRECOVERED_JUMPTABLE = (code *)swi(3);
    pauVar27 = (undefined1 (*) [16])(*UNRECOVERED_JUMPTABLE)();
    return pauVar27;
  case 0x15:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x16:
    puVar24 = ppauVar44 + -1;
    ppauVar44[-1] = unaff_RBP;
    cVar15 = '\a';
    do {
      unaff_RBP = (undefined1 (*) [16])(unaff_RBP[-1] + 8);
      puVar24 = puVar24 + -1;
      *puVar24 = *(undefined8 *)*unaff_RBP;
      cVar15 = cVar15 + -1;
    } while ('\0' < cVar15);
    ppauVar44[-9] = (undefined1 (*) [16])(ppauVar44 + -1);
    uVar59 = 0x2d;
    *(undefined8 *)((longlong)ppauVar44 + -0xe14f) = 0x140a39b1d;
    auVar87._0_8_ = pdb_140dc6290(0x4303b333);
    *(undefined8 *)((longlong)ppauVar44 + -0xe127) = auVar87._0_8_;
    *(undefined8 *)((longlong)ppauVar44 + -0xe11f) = uVar59;
    *(longlong *)((longlong)ppauVar44 + -0xe117) = (longlong)ppauVar44 + -0xe127;
    *(code **)((longlong)ppauVar44 + -0xe10f) = pdb_1402ed400;
    auVar87._0_8_ = *(undefined8 *)*unaff_RSI;
    uVar59 = *(undefined8 *)(*unaff_RSI + 8);
    *(undefined8 *)((longlong)ppauVar44 + -0xe14f) = 0x140a39b55;
    pauVar27 = (undefined1 (*) [16])
               pdb_140f681d0(auVar87._0_8_,uVar59,&UNK_14303b360,(longlong)ppauVar44 + -0xe117);
    return pauVar27;
  default:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
code_r0x000140a38b62:
  lVar22 = *(longlong *)((longlong)ppauVar44 + 0x48);
  *(bool *)((longlong)ppauVar44 + 0x20) = (char)pauVar25 == '\x04';
  UNRECOVERED_JUMPTABLE = *(code **)pauVar53[2];
  *(undefined8 *)((longlong)ppauVar44 + -8) = 0x140a38b8c;
  (*UNRECOVERED_JUMPTABLE)
            (unaff_R14,(undefined1 *)((longlong)ppauVar44 + 0x1e0),
             *(undefined8 *)((longlong)ppauVar44 + 0x1d0),
             *(undefined8 *)((longlong)ppauVar44 + 0x1d8));
  *(undefined8 *)((longlong)ppauVar44 + -8) = 0x140a38b9c;
  pauVar27 = (undefined1 (*) [16])
             pdb_140e08f50((undefined1 *)((longlong)ppauVar44 + 0x1ac),unaff_RBX);
  if ((*(uint *)(lVar22 + 0x10) < 3) &&
     (fVar34 * _DAT_142e3787c <
      SQRT((*(float *)((longlong)ppauVar44 + 0x1a8) - *(float *)((longlong)ppauVar44 + 0x1b4)) *
           (*(float *)((longlong)ppauVar44 + 0x1a8) - *(float *)((longlong)ppauVar44 + 0x1b4)) +
           (*(float *)((longlong)ppauVar44 + 0x1a4) - *(float *)((longlong)ppauVar44 + 0x1b0)) *
           (*(float *)((longlong)ppauVar44 + 0x1a4) - *(float *)((longlong)ppauVar44 + 0x1b0)) +
           (*(float *)((longlong)ppauVar44 + 0x1a0) - *(float *)((longlong)ppauVar44 + 0x1ac)) *
           (*(float *)((longlong)ppauVar44 + 0x1a0) - *(float *)((longlong)ppauVar44 + 0x1ac))))) {
    **(undefined4 **)((longlong)ppauVar44 + 0xe0) = *(undefined4 *)((longlong)ppauVar44 + 0x54);
    lVar22 = *(longlong *)((longlong)ppauVar44 + 0xe8);
    lVar35 = *(longlong *)(lVar22 + 0x30);
    auVar87._0_8_ = *(undefined8 *)(lVar22 + 0x40);
    if (lVar35 == *(longlong *)(lVar22 + 0x20)) {
      *(undefined8 *)((longlong)ppauVar44 + -8) = 0x140a38c39;
      pdb_142d7e980(lVar22 + 0x20);
    }
    pauVar27 = *(undefined1 (**) [16])(lVar22 + 0x28);
    *(undefined4 *)pauVar27[lVar35] = 2;
    *(undefined8 *)(pauVar27[lVar35] + 8) = auVar87._0_8_;
    *(longlong *)(lVar22 + 0x30) = lVar35 + 1;
    *(longlong *)(lVar22 + 0x40) = *(longlong *)(lVar22 + 0x40) + 1;
  }
  return pauVar27;
}

