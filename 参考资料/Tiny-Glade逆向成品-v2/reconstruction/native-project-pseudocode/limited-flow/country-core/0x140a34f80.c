// VA 0x140a34f80, PDB extent 801 bytes
// country_core::systems::camera_rig::MainCamera::immediately_finish_interpolating
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/camera_rig.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x000140a39982) overlaps instruction at (ram,0x000140a3997f)
    */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::systems::camera_rig::MainCamera::immediately_finish_interpolating
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/camera_rig.rs
   Extent: 801 */

undefined1 (*) [16]
pdb_140a34f80(undefined1 (*param_1) [16],undefined8 param_2,undefined1 (*param_3) [16],
             undefined8 param_4)

{
  undefined8 *puVar1;
  uint *puVar2;
  byte *pbVar3;
  code cVar4;
  undefined2 uVar5;
  ulonglong *puVar6;
  ulonglong uVar7;
  undefined1 auVar8 [16];
  code *pcVar9;
  undefined1 auVar10 [12];
  float fVar11;
  float fVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined1 (**ppauVar18) [16];
  undefined1 (**ppauVar19) [16];
  char cVar20;
  byte bVar21;
  code cVar22;
  undefined1 uVar23;
  int iVar24;
  int iVar25;
  undefined1 (*pauVar26) [16];
  undefined8 uVar27;
  undefined7 uVar35;
  int *piVar28;
  undefined1 (*pauVar29) [16];
  longlong lVar30;
  ulonglong uVar31;
  undefined8 *puVar32;
  char *pcVar33;
  undefined *puVar34;
  undefined1 (*extraout_RAX) [16];
  byte bVar36;
  ulonglong uVar37;
  undefined1 (*UNRECOVERED_JUMPTABLE) [16];
  longlong lVar38;
  undefined1 (*pauVar39) [16];
  longlong lVar40;
  undefined8 uVar41;
  uint7 uVar43;
  undefined1 (*pauVar42) [16];
  undefined1 (**ppauVar44) [16];
  undefined1 (**ppauVar45) [16];
  undefined1 (**ppauVar46) [16];
  undefined1 (**ppauVar47) [16];
  undefined1 (**ppauVar48) [16];
  undefined1 (**ppauVar49) [16];
  undefined1 (**ppauVar50) [16];
  undefined1 (**ppauVar51) [16];
  undefined1 (**ppauVar52) [16];
  undefined1 (**ppauVar53) [16];
  undefined1 (**ppauVar54) [16];
  undefined1 (**ppauVar55) [16];
  undefined1 (**ppauVar56) [16];
  undefined1 (**ppauVar57) [16];
  undefined1 (**ppauVar58) [16];
  undefined1 (**ppauVar59) [16];
  undefined1 (**ppauVar60) [16];
  undefined1 (**ppauVar61) [16];
  undefined1 (**ppauVar62) [16];
  undefined1 (**ppauVar63) [16];
  undefined1 (**ppauVar64) [16];
  undefined1 (**ppauVar65) [16];
  undefined1 (**ppauVar66) [16];
  undefined1 (**ppauVar67) [16];
  undefined1 (**ppauVar68) [16];
  undefined1 (**ppauVar69) [16];
  undefined1 (**ppauVar70) [16];
  undefined8 *puVar71;
  ulonglong *puVar72;
  undefined1 (**ppauVar73) [16];
  undefined1 (*unaff_RBP) [16];
  undefined4 uVar74;
  undefined1 (*unaff_RDI) [16];
  undefined1 (*pauVar75) [16];
  uint uVar76;
  undefined1 (*in_R9) [16];
  undefined1 (*in_R10) [16];
  undefined1 (*in_R11) [16];
  undefined1 (*pauVar77) [16];
  undefined1 (*unaff_R12) [16];
  undefined1 (*unaff_R13) [16];
  undefined1 (*unaff_R14) [16];
  undefined1 (*unaff_R15) [16];
  undefined2 in_ES;
  undefined2 in_FS;
  longlong in_FS_OFFSET;
  bool bVar78;
  bool bVar79;
  byte in_AF;
  bool bVar80;
  bool bVar81;
  byte in_TF;
  byte in_IF;
  byte in_NT;
  byte in_AC;
  byte in_VIF;
  byte in_VIP;
  byte in_ID;
  float10 in_ST0;
  float10 in_ST1;
  unkbyte10 in_ST2;
  unkbyte10 in_ST3;
  float fVar82;
  undefined8 extraout_XMM0_Qa;
  undefined1 in_XMM0 [16];
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar83 [16];
  undefined1 auVar84 [16];
  undefined8 extraout_XMM0_Qb_00;
  uint uVar90;
  undefined1 auVar85 [16];
  undefined1 auVar86 [16];
  undefined1 auVar87 [16];
  undefined8 extraout_XMM0_Qb_01;
  undefined1 auVar88 [16];
  undefined1 auVar89 [16];
  float fVar91;
  undefined1 in_XMM1 [16];
  undefined1 auVar92 [16];
  undefined1 auVar93 [16];
  undefined1 auVar94 [12];
  float fVar95;
  float fVar96;
  undefined1 in_XMM2 [16];
  undefined1 auVar97 [16];
  undefined1 auVar98 [16];
  undefined1 auVar99 [16];
  undefined1 auVar100 [16];
  float fVar101;
  float in_XMM3_Dc;
  float in_XMM3_Dd;
  undefined1 in_XMM4 [16];
  undefined1 auVar102 [16];
  undefined1 in_XMM5 [16];
  undefined1 unaff_XMM6 [16];
  float unaff_XMM7_Da;
  float fVar103;
  uint uVar104;
  float fVar105;
  float unaff_XMM7_Db;
  float unaff_XMM7_Dc;
  float unaff_XMM7_Dd;
  float unaff_XMM8_Da;
  float unaff_XMM8_Db;
  float unaff_XMM8_Dc;
  float unaff_XMM8_Dd;
  float unaff_XMM9_Da;
  float fVar106;
  float unaff_XMM9_Db;
  float fVar107;
  undefined4 unaff_XMM9_Dc;
  undefined4 unaff_XMM9_Dd;
  undefined1 unaff_XMM10 [16];
  undefined1 auVar108 [16];
  undefined1 auVar109 [16];
  undefined1 auVar110 [16];
  float unaff_XMM11_Da;
  byte abStack_235 [133];
  undefined1 (*apauStack_1a8 [3]) [16];
  char acStack_18f [7];
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined2 uStack_170;
  byte bStack_16e;
  undefined1 uStack_16d;
  undefined4 uStack_16c;
  undefined4 uStack_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined8 uStack_158;
  longlong lStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  longlong lStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 *puStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined1 auStack_88 [8];
  char acStack_80 [24];
  
  fVar101 = (float)((ulonglong)param_4 >> 0x20);
  fVar95 = (float)param_4;
  uVar27 = (undefined8)in_ST2;
  auVar94 = in_XMM0._0_12_;
  uVar41 = in_XMM0._0_8_;
  fVar91 = in_XMM2._0_4_;
  ppauVar63 = apauStack_1a8;
  ppauVar70 = apauStack_1a8;
  ppauVar51 = apauStack_1a8;
  ppauVar53 = apauStack_1a8;
  ppauVar45 = apauStack_1a8;
  ppauVar46 = apauStack_1a8;
  ppauVar47 = apauStack_1a8;
  ppauVar52 = apauStack_1a8;
  ppauVar54 = apauStack_1a8;
  ppauVar61 = apauStack_1a8;
  ppauVar59 = apauStack_1a8;
  ppauVar68 = apauStack_1a8;
  ppauVar69 = apauStack_1a8;
  ppauVar67 = apauStack_1a8;
  ppauVar66 = apauStack_1a8;
  ppauVar65 = apauStack_1a8;
  ppauVar64 = apauStack_1a8;
  ppauVar60 = apauStack_1a8;
  ppauVar57 = apauStack_1a8;
  ppauVar55 = apauStack_1a8;
  ppauVar56 = apauStack_1a8;
  ppauVar50 = apauStack_1a8;
  ppauVar73 = apauStack_1a8;
  ppauVar44 = apauStack_1a8;
  pauVar42 = param_1 + 0x10;
  pauVar26 = (undefined1 (*) [16])&UNK_143397930;
  pauVar39 = (undefined1 (*) [16])&UNK_14303b570;
  uVar37 = (ulonglong)*(int *)(&UNK_14303b570 + (ulonglong)(byte)param_1[0x4d][0] * 4);
  bVar78 = 0xfffffffebcfc4a8f < uVar37;
  UNRECOVERED_JUMPTABLE = (undefined1 (*) [16])(&UNK_14303b570 + uVar37);
  bVar80 = UNRECOVERED_JUMPTABLE == (undefined1 (*) [16])0x0;
  bVar79 = (POPCOUNT((ulonglong)UNRECOVERED_JUMPTABLE & 0xff) & 1U) == 0;
  bVar36 = (byte)UNRECOVERED_JUMPTABLE;
  fVar107 = in_XMM1._0_4_;
  cVar20 = (char)((ulonglong)pauVar42 >> 8);
  uVar43 = (uint7)((ulonglong)pauVar42 >> 8);
  fVar105 = in_XMM1._8_4_;
  fVar106 = in_XMM1._12_4_;
  ppauVar48 = apauStack_1a8;
  ppauVar18 = apauStack_1a8;
  ppauVar19 = apauStack_1a8;
  ppauVar49 = apauStack_1a8;
  ppauVar58 = apauStack_1a8;
  pauVar75 = unaff_RDI;
  iVar25 = _UNK_143397934;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(param_1[0x4d][0]) {
  case 0:
    lVar30 = 0x8c;
    UNRECOVERED_JUMPTABLE = pauVar42;
    break;
  case 1:
    lVar30 = 0x144;
    UNRECOVERED_JUMPTABLE = (undefined1 (*) [16])(param_1[0x1b] + 8);
    break;
  case 2:
    pauVar26 = (undefined1 (*) [16])&UNK_143397968;
    lVar30 = 0x1c4;
    UNRECOVERED_JUMPTABLE = param_1 + 0x27;
    break;
  case 3:
    pauVar26 = (undefined1 (*) [16])&UNK_1433979d8;
    lVar30 = 0x264;
    UNRECOVERED_JUMPTABLE = param_1 + 0x2f;
    break;
  case 4:
    lVar30 = 0x31c;
    UNRECOVERED_JUMPTABLE = param_1 + 0x39;
    break;
  case 5:
    pauVar26 = (undefined1 (*) [16])&UNK_1433979a0;
    lVar30 = 0x3a4;
    UNRECOVERED_JUMPTABLE = (undefined1 (*) [16])(param_1[0x44] + 8);
    break;
  case 6:
    param_3 = (undefined1 (*) [16])((ulonglong)param_3 & 0xffffffffffffff00);
    in_R9 = (undefined1 (*) [16])&UNK_14303b588;
    goto code_r0x000140a3670c;
  case 7:
    goto code_r0x000140a36710;
  default:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 10:
    pauVar26 = (undefined1 (*) [16])0x43797f7c;
code_r0x000140a3670c:
    in_R10 = (undefined1 (*) [16])(longlong)*(int *)(*in_R9 + (longlong)pauVar26 * 4);
code_r0x000140a36710:
                    /* WARNING: Could not recover jumptable at 0x000140a36713. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE =
         (undefined1 (*) [16])
         (*(code *)(*in_R9 + (longlong)*in_R10))(UNRECOVERED_JUMPTABLE,&UNK_14303b570,param_3);
    return UNRECOVERED_JUMPTABLE;
  case 0xc:
    return (undefined1 (*) [16])((ulonglong)((int)UNRECOVERED_JUMPTABLE + 0x43397930) + 0x100);
  case 0xd:
    UNRECOVERED_JUMPTABLE = (undefined1 (*) [16])0x43397968;
    lVar30 = 0x1a8;
    lVar40 = 0x1c4;
    goto code_r0x000140a369a0;
  case 0xe:
    goto code_r0x000140a36909;
  case 0xf:
    pauVar26 = (undefined1 (*) [16])0x4303b800;
    lVar30 = 0x300;
    lVar40 = 0x31c;
    goto code_r0x000140a369a0;
  case 0x10:
    UNRECOVERED_JUMPTABLE = (undefined1 (*) [16])&UNK_143397930;
    in_R9 = (undefined1 (*) [16])&UNK_14303b5a0;
code_r0x000140a36909:
                    /* WARNING: Could not recover jumptable at 0x000140a36910. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE =
         (undefined1 (*) [16])
         (*(code *)(*in_R9 + *(int *)(*in_R9 + (longlong)param_3 * 4)))
                   (UNRECOVERED_JUMPTABLE,&UNK_14303b570,
                    *in_R9 + *(int *)(*in_R9 + (longlong)param_3 * 4));
    return UNRECOVERED_JUMPTABLE;
  case 0x11:
    pauVar26 = (undefined1 (*) [16])0x4303b760;
    UNRECOVERED_JUMPTABLE = (undefined1 (*) [16])&UNK_1433979d8;
    lVar30 = 0x248;
    lVar40 = 0x264;
code_r0x000140a369a0:
    *(undefined1 (**) [16])*pauVar26 = param_3;
    *(undefined1 (**) [16])(*pauVar26 + 8) = UNRECOVERED_JUMPTABLE;
    *(char **)pauVar26[1] = &UNK_14303b570 + lVar40;
    *(char **)(pauVar26[1] + 8) = &UNK_14303b570 + lVar30;
    return pauVar26;
  case 0x12:
    param_3 = (undefined1 (*) [16])(ulonglong)*(uint *)(in_R9[1] + 0xc);
    in_R10 = *(undefined1 (**) [16])in_R9[1];
    goto code_r0x000140a36be7;
  case 0x13:
                    /* WARNING: Could not recover jumptable at 0x000140a36c5d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE =
         (undefined1 (*) [16])
         (*(code *)(&UNK_14303b5c8 + iRam000000064f128b88))
                   (UNRECOVERED_JUMPTABLE,&UNK_14303b5c8 + iRam000000064f128b88);
    return UNRECOVERED_JUMPTABLE;
  case 0x14:
    _UNK_143397920 = _UNK_143397920 + 0x43397920;
    unaff_RBP[-8][0xb] = unaff_RBP[-8][0xb] + 0x20;
code_r0x000140a36be7:
    *(int *)*in_R10 = (int)param_3;
    pauVar39 = (undefined1 (*) [16])&UNK_14303b5b8;
    in_R9 = (undefined1 (*) [16])
            (longlong)
            *(int *)(&UNK_14303b5b8 + (ulonglong)*(uint *)(*(longlong *)*in_R9 + 0x18) * 4);
code_r0x000140a36c17:
                    /* WARNING: Could not recover jumptable at 0x000140a36c1a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE = (undefined1 (*) [16])(*(code *)(*pauVar39 + (longlong)*in_R9))();
    return UNRECOVERED_JUMPTABLE;
  case 0x15:
    goto code_r0x000140a36c17;
  case 0x16:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x17:
  case 0x19:
  case 0x1a:
    goto code_r0x000140a36c92;
  case 0x18:
    (*unaff_RBP)[(longlong)UNRECOVERED_JUMPTABLE * 4 + 5] =
         (*unaff_RBP)[(longlong)UNRECOVERED_JUMPTABLE * 4 + 5] + bVar36;
    UNRECOVERED_JUMPTABLE =
         (undefined1 (*) [16])
         CONCAT71((int7)((ulonglong)UNRECOVERED_JUMPTABLE >> 8),bVar36 + (&UNK_14303b5d3)[uVar37]);
code_r0x000140a36c92:
                    /* WARNING: Could not recover jumptable at 0x000140a36c95. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE =
         (undefined1 (*) [16])
         (*(code *)(param_3 + 0x14303b57))(UNRECOVERED_JUMPTABLE,param_3 + 0x14303b57);
    return UNRECOVERED_JUMPTABLE;
  case 0x1b:
    UNK_1433978b9 = UNK_1433978b9 | bVar36;
code_r0x000140a36d5a:
    pdb_142d91b00();
    goto code_r0x000140a36d62;
  case 0x1c:
  case 0x1e:
  case 0x1f:
    return pauVar26;
  case 0x1d:
    param_1 = (undefined1 (*) [16])(ulonglong)*(uint *)unaff_RDI[1];
    if (unaff_R14 < pauVar42) {
      pdb_142dc7e73(pauVar42);
                    /* WARNING: Subroutine does not return */
      pdb_142dc81f2(pauVar42);
    }
    if (unaff_R14 == *(undefined1 (**) [16])*unaff_RDI) goto code_r0x000140a36d5a;
code_r0x000140a36d62:
    unaff_R15 = (undefined1 (*) [16])((longlong)pauVar42 * 0x24 + *(longlong *)(*unaff_RDI + 8));
    pauVar26 = (undefined1 (*) [16])((longlong)unaff_R14 - (longlong)pauVar42);
    if (pauVar42 <= unaff_R14 && pauVar26 != (undefined1 (*) [16])0x0) {
      UNRECOVERED_JUMPTABLE = (undefined1 (*) [16])(unaff_R15[2] + 4);
code_r0x000140a36d7a:
      param_3 = (undefined1 (*) [16])((longlong)pauVar26 * 0x24);
      pub_142e32770(UNRECOVERED_JUMPTABLE,unaff_R15);
    }
code_r0x000140a36d8a:
    *(undefined4 *)unaff_R15[2] = uStack_168;
    in_XMM1._8_2_ = uStack_170;
    in_XMM1._0_8_ = uStack_178;
    in_XMM1[10] = bStack_16e;
    in_XMM1[0xb] = uStack_16d;
    in_XMM1._12_4_ = (float)uStack_16c;
    unaff_R15[1] = in_XMM1;
    *(undefined8 *)*unaff_R15 = uStack_188;
    *(undefined8 *)(*unaff_R15 + 8) = uStack_180;
    *(undefined1 **)unaff_RDI[1] = *unaff_R14 + 1;
    *(undefined1 (**) [16])unaff_RDI[2] = pauVar42;
    goto code_r0x000140a36eec;
  case 0x20:
    if (!bVar78) {
      pdb_142dc7ef8(pauVar42);
      pcVar9 = (code *)swi(3);
      UNRECOVERED_JUMPTABLE = (undefined1 (*) [16])(*pcVar9)();
      return UNRECOVERED_JUMPTABLE;
    }
    param_3 = (undefined1 (*) [16])((longlong)(*unaff_R14 + ~(ulonglong)pauVar42) * 0x24);
    pub_142e32770(*(longlong *)(*unaff_RDI + 8) + (longlong)pauVar42 * 0x24,
                  *(longlong *)(*unaff_RDI + 8) + (longlong)pauVar42 * 0x24 + 0x24);
    *(undefined1 **)unaff_RDI[1] = unaff_R14[-1] + 0xf;
    UNRECOVERED_JUMPTABLE = *(undefined1 (**) [16])unaff_RDI[2];
    if (pauVar42 <= UNRECOVERED_JUMPTABLE) {
      *(undefined1 **)unaff_RDI[2] =
           UNRECOVERED_JUMPTABLE[-1] +
           (ulonglong)(UNRECOVERED_JUMPTABLE == (undefined1 (*) [16])0x0) + 0xf;
    }
    goto code_r0x000140a36eec;
  case 0x21:
    if (fVar107 <= in_XMM0._0_4_) {
      in_XMM0._0_4_ = in_XMM0._0_4_ + _DAT_14303aa00;
      param_3 = (undefined1 (*) [16])0x2;
    }
    *(int *)(unaff_RDI[1] + 8) = (int)param_3;
    *(int *)(unaff_RDI[1] + 0xc) = in_XMM0._0_4_;
                    /* WARNING: Could not emulate address calculation at 0x000140a36cc8 */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE =
         (undefined1 (*) [16])
         (*(code *)(&UNK_14303b5c8 +
                   *(int *)(&UNK_14303b5c8 +
                           (ulonglong)*(uint *)(*(longlong *)*UNRECOVERED_JUMPTABLE + 0x138) * 4)))
                   (*(longlong *)*UNRECOVERED_JUMPTABLE,
                    &UNK_14303b5c8 +
                    *(int *)(&UNK_14303b5c8 +
                            (ulonglong)*(uint *)(*(longlong *)*UNRECOVERED_JUMPTABLE + 0x138) * 4));
    return UNRECOVERED_JUMPTABLE;
  case 0x22:
    *(uint *)*unaff_RDI = *(int *)*unaff_RDI + 0x43397930 + (uint)bVar78;
    goto code_r0x000140a36d8a;
  case 0x23:
    iVar25 = CONCAT22(_UNK_143397932,CONCAT11(UNK_143397931,UNK_143397930)) << 1;
    UNK_143397930 = (byte)iVar25 | _UNK_143397932 < 0;
    UNK_143397931 = (undefined1)((uint)iVar25 >> 8);
    _UNK_143397932 = (short)((uint)iVar25 >> 0x10);
    UNK_143397930 = UNK_143397930 + 0x30;
    auVar8._8_8_ = 0;
    auVar8._0_8_ = UNRECOVERED_JUMPTABLE;
    lVar40 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x143397930)) % auVar8,0);
    *(longlong *)unaff_RDI[2] = lVar40;
    lVar30 = *(longlong *)(*unaff_RDI + 8);
    *(undefined8 *)(unaff_RDI[1] + 8) = 1;
    **(undefined4 **)param_1[1] = *(undefined4 *)(param_1[1] + 0xc);
    param_3 = (undefined1 (*) [16])0x0;
    pdb_140a34510(*(undefined8 *)*param_1,lVar40 * 0x24 + lVar30);
code_r0x000140a36eec:
    uVar76 = *(uint *)(unaff_RDI[1] + 8);
    UNRECOVERED_JUMPTABLE = (undefined1 (*) [16])(ulonglong)uVar76;
    iVar25 = _UNK_143397934;
    if (uVar76 == 0) goto code_r0x000140a37268;
    unaff_XMM6 = ZEXT416(*(uint *)(unaff_R12[2] + 8));
    in_XMM0 = ZEXT416((uint)(*(float *)(unaff_R13[0xb] + 0xc) * _DAT_142e3b1d8));
    if (uVar76 == 3) {
      fVar91 = *(float *)(unaff_RDI[1] + 0xc) * _DAT_142e37ae4;
      auVar97 = ZEXT416((uint)(fVar91 * fVar91));
code_r0x000140a36f79:
      in_XMM2._4_12_ = auVar97._4_12_;
      in_XMM2._0_4_ = auVar97._0_4_ * auVar97._0_4_;
      in_XMM1 = ZEXT416((uint)_DAT_142e36f28);
      in_XMM0._0_8_ = pdb_140de9fd0();
      in_XMM0._8_8_ = extraout_XMM0_Qb;
    }
    else {
      bVar78 = uVar76 < 2;
      if (uVar76 != 2) {
        UNRECOVERED_JUMPTABLE = *(undefined1 (**) [16])param_1[1];
        *(undefined4 *)*UNRECOVERED_JUMPTABLE = *(undefined4 *)(param_1[1] + 0xc);
        unaff_RDI = *(undefined1 (**) [16])*param_1;
code_r0x000140a36f34:
        UNRECOVERED_JUMPTABLE[0x3e8b480][1] =
             UNRECOVERED_JUMPTABLE[0x3e8b480][1] + (char)UNRECOVERED_JUMPTABLE + bVar78;
        pauVar42 = unaff_RDI + 0x10;
        UNRECOVERED_JUMPTABLE = (undefined1 (*) [16])(ulonglong)(byte)unaff_RDI[0x4d][0];
code_r0x000140a36f4f:
        pauVar39 = (undefined1 (*) [16])&UNK_14303b604;
        UNRECOVERED_JUMPTABLE =
             (undefined1 (*) [16])
             (longlong)*(int *)(&UNK_14303b604 + (longlong)UNRECOVERED_JUMPTABLE * 4);
code_r0x000140a36f60:
                    /* WARNING: Could not recover jumptable at 0x000140a36f66. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        UNRECOVERED_JUMPTABLE =
             (undefined1 (*) [16])
             (*(code *)(*pauVar39 + (longlong)*UNRECOVERED_JUMPTABLE))
                       (*pauVar39 + (longlong)*UNRECOVERED_JUMPTABLE,pauVar42);
        return UNRECOVERED_JUMPTABLE;
      }
    }
code_r0x000140a36f8a:
    uVar27 = (undefined8)in_ST2;
    unaff_XMM6._0_4_ = unaff_XMM6._0_4_ * in_XMM0._0_4_;
    **(undefined4 **)param_1[1] = *(undefined4 *)(param_1[1] + 0xc);
    unaff_RDI = *(undefined1 (**) [16])*param_1;
    pauVar39 = unaff_RDI + 0x10;
    pauVar26 = (undefined1 (*) [16])&UNK_143397930;
    unaff_R14 = (undefined1 (*) [16])0x8c;
    uVar37 = (ulonglong)*(int *)(&UNK_14303b604 + (ulonglong)(byte)unaff_RDI[0x4d][0] * 4);
    bVar80 = 0xfffffffebcfc49fb < uVar37;
    bVar78 = SCARRY8(uVar37,0x14303b604);
    UNRECOVERED_JUMPTABLE = (undefined1 (*) [16])(&UNK_14303b604 + uVar37);
    bVar79 = (longlong)UNRECOVERED_JUMPTABLE < 0;
    bVar81 = UNRECOVERED_JUMPTABLE == (undefined1 (*) [16])0x0;
    bVar36 = (byte)UNRECOVERED_JUMPTABLE;
    pauVar29 = pauVar26;
    pauVar42 = pauVar39;
    ppauVar53 = apauStack_1a8;
    ppauVar48 = apauStack_1a8;
    ppauVar18 = apauStack_1a8;
    ppauVar19 = apauStack_1a8;
    ppauVar49 = apauStack_1a8;
    ppauVar51 = apauStack_1a8;
    ppauVar70 = apauStack_1a8;
    ppauVar45 = apauStack_1a8;
    ppauVar58 = apauStack_1a8;
    ppauVar62 = apauStack_1a8;
    pauVar75 = unaff_RDI;
    pauVar77 = in_R11;
    iVar25 = _UNK_143397934;
    auVar109 = in_XMM1;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(unaff_RDI[0x4d][0]) {
    case 0:
      break;
    case 1:
      pauVar42 = (undefined1 (*) [16])(unaff_RDI[0x1b] + 8);
      pauVar26 = (undefined1 (*) [16])&UNK_143397930;
      unaff_R14 = (undefined1 (*) [16])0x144;
      break;
    case 2:
      pauVar42 = unaff_RDI + 0x27;
      pauVar26 = (undefined1 (*) [16])&UNK_143397968;
      unaff_R14 = (undefined1 (*) [16])0x1c4;
      break;
    case 3:
      pauVar42 = unaff_RDI + 0x2f;
      pauVar26 = (undefined1 (*) [16])&UNK_1433979d8;
      unaff_R14 = (undefined1 (*) [16])0x264;
      break;
    case 4:
      pauVar42 = unaff_RDI + 0x39;
      pauVar26 = (undefined1 (*) [16])&UNK_143397930;
      unaff_R14 = (undefined1 (*) [16])0x31c;
      break;
    case 5:
      pauVar42 = (undefined1 (*) [16])(unaff_RDI[0x44] + 8);
      pauVar26 = (undefined1 (*) [16])&UNK_1433979a0;
      unaff_R14 = (undefined1 (*) [16])0x3a4;
      break;
    case 6:
LAB_140a37683:
                    /* WARNING: Could not recover jumptable at 0x000140a37695. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      UNRECOVERED_JUMPTABLE =
           (undefined1 (*) [16])
           (*(code *)(&UNK_14303b61c +
                     *(int *)(&UNK_14303b61c + (ulonglong)*(uint *)unaff_R15[1] * 4)))();
      return UNRECOVERED_JUMPTABLE;
    default:
      goto code_r0x000140a37a3d;
    case 8:
      puVar34 = &UNK_143397930;
LAB_140a37671:
      bStack_16e = (byte)in_R11;
      if ((bStack_16e & *(int *)(pauVar42[1] + (longlong)(puVar34 + 8)) == 0) == 0)
      goto LAB_140a37683;
LAB_140a376a5:
      uStack_180 = CONCAT44(uStack_180._4_4_,(float)*(uint *)(*unaff_R14 + 4));
      uStack_188 = CONCAT44(uStack_188._4_4_,(float)*(uint *)*unaff_R14);
      unaff_R12 = (undefined1 (*) [16])&stack0xffffffffffffff98;
      in_R9 = pauVar42;
      pdb_1414c9450(unaff_R12);
      in_XMM2 = ZEXT416(*(uint *)*unaff_RBP);
      unaff_XMM7_Db = 0.0;
      unaff_XMM7_Dc = 0.0;
      unaff_XMM7_Dd = 0.0;
      in_XMM1 = ZEXT416((uint)(_DAT_142e36f28 - *(float *)(*unaff_RBP + 4)));
      fVar91 = (float)*(uint *)*unaff_R14;
      unaff_XMM7_Da = _DAT_142e36f28;
code_r0x000140a37702:
      fVar91 = in_XMM2._0_4_ / fVar91;
      auVar99._4_12_ = in_XMM1._4_12_;
      fVar95 = in_XMM1._0_4_ / (float)*(uint *)(*unaff_R14 + 4);
      in_XMM2._0_4_ = fVar91 + fVar91;
      auVar99._0_4_ = fVar95 + fVar95;
code_r0x000140a3771e:
      in_XMM2._0_4_ = in_XMM2._0_4_ + _DAT_142e36f34;
      in_XMM1._4_12_ = auVar99._4_12_;
      in_XMM1._0_4_ = auVar99._0_4_ + unaff_XMM7_Da;
      ppauVar45 = ppauVar44;
code_r0x000140a3772a:
      fVar105 = in_XMM2._0_4_;
      fVar91 = in_XMM1._0_4_;
      fVar95 = fVar91 * *(float *)pauVar42[5] + fVar105 * *(float *)pauVar42[4];
      fVar101 = fVar91 * *(float *)(pauVar42[5] + 4) + fVar105 * *(float *)(pauVar42[4] + 4);
      fVar107 = fVar91 * *(float *)(pauVar42[5] + 8) + fVar105 * *(float *)(pauVar42[4] + 8);
      fVar91 = fVar91 * *(float *)(pauVar42[5] + 0xc) + fVar105 * *(float *)(pauVar42[4] + 0xc);
      auVar98._0_4_ = *(float *)pauVar42[6] + fVar95 + *(float *)pauVar42[7];
      auVar98._4_4_ = *(float *)(pauVar42[6] + 4) + fVar101 + *(float *)(pauVar42[7] + 4);
      auVar98._8_4_ = *(float *)(pauVar42[6] + 8) + fVar107 + *(float *)(pauVar42[7] + 8);
      auVar98._12_4_ = *(float *)(pauVar42[6] + 0xc) + fVar91 + *(float *)(pauVar42[7] + 0xc);
      auVar102._4_4_ = auVar98._12_4_;
      auVar102._0_4_ = auVar98._12_4_;
      auVar102._8_4_ = auVar98._12_4_;
      auVar102._12_4_ = auVar98._12_4_;
      auVar99 = divps(auVar98,auVar102);
      auVar83._0_4_ = *(float *)pauVar42[6] * _DAT_14303aa10 + fVar95 + *(float *)pauVar42[7];
      auVar83._4_4_ =
           *(float *)(pauVar42[6] + 4) * _UNK_14303aa14 + fVar101 + *(float *)(pauVar42[7] + 4);
      auVar83._8_4_ =
           *(float *)(pauVar42[6] + 8) * _UNK_14303aa18 + fVar107 + *(float *)(pauVar42[7] + 8);
      auVar83._12_4_ =
           *(float *)(pauVar42[6] + 0xc) * _UNK_14303aa1c + fVar91 + *(float *)(pauVar42[7] + 0xc);
      auVar92._4_4_ = auVar83._12_4_;
      auVar92._0_4_ = auVar83._12_4_;
      auVar92._8_4_ = auVar83._12_4_;
      auVar92._12_4_ = auVar83._12_4_;
      auVar109 = divps(auVar83,auVar92);
      in_XMM0._0_4_ = auVar109._0_4_ - auVar99._0_4_;
      in_XMM0._4_4_ = auVar109._4_4_ - auVar99._4_4_;
      in_XMM0._8_4_ = auVar109._8_4_ - auVar99._8_4_;
      in_XMM0._12_4_ = auVar109._12_4_ - auVar99._12_4_;
      auVar10._4_8_ = auVar92._8_8_;
      auVar10._0_4_ = in_XMM0._4_4_;
      auVar109._0_8_ = auVar10._0_8_ << 0x20;
      auVar109._8_4_ = in_XMM0._8_4_;
      auVar109._12_4_ = in_XMM0._12_4_;
      ppauVar73 = ppauVar45;
      pauVar75 = unaff_RDI;
      iVar25 = _UNK_143397934;
      goto code_r0x000140a37775;
    case 0xb:
      ppauVar73 = apauStack_1a8;
      goto code_r0x000140a37775;
    case 0xc:
      *(int *)(unaff_RBP[1] + 8) = (int)in_ST2;
      ppauVar73 = apauStack_1a8;
      iVar25 = _UNK_143397934;
      goto code_r0x000140a377d9;
    case 0xd:
      ppauVar73 = apauStack_1a8;
code_r0x000140a37775:
      _UNK_143397936 = (undefined2)((uint)iVar25 >> 0x10);
      _UNK_143397934 = (undefined2)iVar25;
      uVar27 = (undefined8)in_ST2;
      in_XMM1._0_8_ = auVar109._8_8_;
      in_XMM1._8_8_ = in_XMM0._8_8_;
      fVar91 = in_XMM0._0_4_;
      fVar107 = in_XMM0._4_4_;
      fVar105 = in_XMM0._12_4_;
      fVar101 = fVar107 * fVar107;
      in_XMM3_Dc = fVar105 * fVar105;
      fVar95 = fVar101 + fVar91 * fVar91;
      fVar106 = auVar109._8_4_;
      auVar100._8_4_ = in_XMM0._8_4_;
      auVar100._0_8_ = in_XMM1._0_8_;
      auVar100._12_4_ = fVar105;
      in_XMM2._4_12_ = auVar100._4_12_;
      in_XMM2._0_4_ = SQRT(fVar106 * fVar106 + fVar95);
      fVar103 = unaff_XMM7_Da / in_XMM2._0_4_;
      unaff_XMM8_Da = fVar103 * fVar91;
      unaff_XMM8_Db = fVar103 * fVar107;
      unaff_XMM8_Dc = unaff_XMM7_Dc * in_XMM0._8_4_;
      unaff_XMM8_Dd = unaff_XMM7_Dc * fVar105;
      unaff_XMM7_Da = fVar103 * fVar106;
      UNRECOVERED_JUMPTABLE = (undefined1 (*) [16])&UNK_14303b630;
      uVar37 = (ulonglong)*(int *)(&UNK_14303b630 + ((ulonglong)pauVar75 & 0xff) * 4);
      bVar79 = 0xfffffffebcfc49cf < uVar37;
      pauVar26 = (undefined1 (*) [16])(&UNK_14303b630 + uVar37);
      cVar20 = (char)pauVar26;
      ppauVar68 = ppauVar73;
      ppauVar61 = ppauVar73;
      ppauVar18 = ppauVar73;
      ppauVar56 = ppauVar73;
      unaff_RDI = pauVar75;
      pauVar77 = in_R11;
      auVar109 = in_XMM1;
      in_XMM3_Dd = in_XMM3_Dc;
      ppauVar65 = ppauVar73;
      _UNK_143397934 = iVar25;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
      switch((ulonglong)pauVar75 & 0xff) {
      case 0:
code_r0x000140a377bb:
        ppauVar73 = ppauVar18;
        unaff_XMM9_Da = *(float *)((longlong)ppauVar73 + 0x180);
        unaff_XMM9_Db = 0.0;
        unaff_XMM9_Dc = 0;
        unaff_XMM9_Dd = 0;
        unaff_XMM10._8_8_ = 0;
        unaff_XMM10._0_8_ = *(ulonglong *)((longlong)ppauVar73 + 0x184);
        unaff_R12 = *(undefined1 (**) [16])((longlong)ppauVar73 + 0x40);
        pauVar39 = pauVar42;
        _UNK_143397934 = iVar25;
        break;
      case 1:
        unaff_XMM9_Da = *(float *)unaff_R13[2];
        unaff_XMM9_Db = 0.0;
        unaff_XMM9_Dc = 0;
        unaff_XMM9_Dd = 0;
        unaff_XMM10._8_8_ = 0;
        unaff_XMM10._0_8_ = *(ulonglong *)(unaff_R13[2] + 4);
        unaff_R12 = *(undefined1 (**) [16])((longlong)ppauVar73 + 0x40);
        pauVar39 = pauVar42;
        break;
      case 2:
code_r0x000140a377d9:
        pauVar39 = pauVar42;
        unaff_XMM9_Da = *(float *)(unaff_R13[1] + 4);
        unaff_XMM9_Db = 0.0;
        unaff_XMM9_Dc = 0;
        unaff_XMM9_Dd = 0;
        unaff_XMM10._8_8_ = 0;
        unaff_XMM10._0_8_ = *(ulonglong *)(unaff_R13[1] + 8);
        _UNK_143397934 = iVar25;
        goto code_r0x000140a377f3;
      case 3:
        unaff_XMM9_Da = *(float *)(unaff_R13[2] + 0xc);
        unaff_XMM9_Db = 0.0;
        unaff_XMM9_Dc = 0;
        unaff_XMM9_Dd = 0;
        unaff_XMM10._8_8_ = 0;
        unaff_XMM10._0_8_ = *(ulonglong *)unaff_R13[3];
        pauVar39 = pauVar42;
code_r0x000140a377f3:
        unaff_XMM7_Db = 0.0;
        unaff_XMM7_Dc = 0.0;
        unaff_XMM7_Dd = 0.0;
        unaff_R12 = *(undefined1 (**) [16])((longlong)ppauVar73 + 0x40);
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
        UNK_14303b626 = UNK_14303b626 + cVar20;
        return pauVar26;
      case 7:
        goto code_r0x000140a37a66;
      default:
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      case 10:
        *(undefined8 *)((longlong)ppauVar73 + -8) = 0x140a37a62;
        pauVar26 = (undefined1 (*) [16])func_0x00014fa37a62();
        in_XMM0._8_8_ = extraout_XMM0_Qb_00;
        in_XMM0._0_8_ = extraout_XMM0_Qa;
        (*pauVar26)[0] = (*pauVar26)[0] + (char)pauVar26;
        iVar25 = _UNK_143397934;
        goto code_r0x000140a37a66;
      case 0xc:
        pauVar26 = (undefined1 (*) [16])((ulonglong)pauVar26 ^ 0x24);
        goto code_r0x000140a37d67;
      case 0xd:
        *(short *)(&UNK_14303b5bd + uVar37) = (short)in_ST0;
        iVar25 = _UNK_143397934;
        goto code_r0x000140a37e4f;
      case 0xe:
        *(int *)(uVar37 + 0x286076c60) =
             *(int *)(uVar37 + 0x286076c60) + (int)pauVar26 + (uint)bVar79;
        ppauVar51 = ppauVar73;
        goto code_r0x000140a37e1a;
      case 0xf:
        goto code_r0x000140a37e33;
      case 0x10:
        unaff_RDI = (undefined1 (*) [16])(*pauVar75 + 1);
        cVar22 = (code)in((short)pauVar39);
        (*pauVar75)[0] = cVar22;
        pauVar39 = pauVar42;
        ppauVar50 = ppauVar73;
        goto code_r0x000140a37e00;
      case 0x11:
        *(short *)(&UNK_14303b5bd + uVar37) = (short)in_ST0;
        param_1 = (undefined1 (*) [16])(ulonglong)*(uint *)(&UNK_14303b632 + uVar37);
        (*pauVar26)[0] = (*pauVar26)[0] + cVar20;
        puVar34 = &UNK_143397968;
        in_ST0 = in_ST1;
        in_ST2 = in_ST3;
        goto code_r0x000140a37e93;
      case 0x12:
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      case 0x13:
        ppauVar70 = ppauVar73;
        goto code_r0x000140a3819a;
      case 0x14:
        (*pauVar26)[0] = (*pauVar26)[0] + cVar20;
        pauVar42[0x413c244][4] = pauVar42[0x413c244][4] + 0x30;
        goto code_r0x000140a3818a;
      case 0x15:
        pauVar39 = pauVar42;
        ppauVar57 = ppauVar73;
        goto code_r0x000140a38194;
      case 0x16:
code_r0x000140a38179:
        cVar20 = (char)UNRECOVERED_JUMPTABLE;
        _UNK_143397934 = iVar25;
        (*pauVar26)[0] = (*pauVar26)[0] + (char)pauVar26;
        pauVar39 = pauVar42;
        goto code_r0x000140a3817d;
      case 0x17:
        ppauVar70 = (undefined1 (**) [16])(*unaff_RBP + 8);
        unaff_RBP = *(undefined1 (**) [16])*unaff_RBP;
        goto code_r0x000140a3819a;
      case 0x18:
        param_1[0x14303b61][0] = param_1[0x14303b61][0] + '0';
        ppauVar60 = ppauVar73;
        goto code_r0x000140a387dd;
      case 0x19:
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      case 0x1a:
code_r0x000140a387f9:
        _UNK_143397934 = iVar25;
        pauVar39 = pauVar42;
        ppauVar70 = (undefined1 (**) [16])(ulonglong)*(uint *)((longlong)ppauVar61 + 0x40);
        goto code_r0x000140a38800;
      case 0x1b:
        UNK_14303b5b9 = UNK_14303b5b9 + cVar20;
        ppauVar62 = ppauVar73;
        goto code_r0x000140a3880b;
      case 0x1c:
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      case 0x1d:
        goto code_r0x000140a38837;
      case 0x1e:
        (*pauVar26)[0] = (*pauVar26)[0] + cVar20;
        goto code_r0x000140a38ae7;
      case 0x1f:
        (*pauVar75)[0] = (*pauVar75)[0] + 0x30;
        *(int *)pauVar42[10] = *(int *)pauVar42[10] - (int)pauVar39;
        pauVar39 = pauVar42;
        goto code_r0x000140a38aab;
      case 0x20:
        pauVar26 = (undefined1 (*) [16])((ulonglong)pauVar26 & 0xffffffffffffff00);
        ppauVar48 = ppauVar73;
code_r0x000140a38abe:
        _UNK_143397934 = iVar25;
        *(int *)*pauVar26 = *(int *)*pauVar26 + (int)pauVar26;
        (*pauVar75)[0] = (*pauVar75)[0] + (char)UNRECOVERED_JUMPTABLE;
        iVar25 = _UNK_143397934;
        goto code_r0x000140a38ac2;
      case 0x21:
        goto code_r0x000140a38acc;
      case 0x22:
        *(int *)pauVar42[0xb] = *(int *)pauVar42[0xb] - (int)pauVar42;
        pauVar39 = pauVar42;
        goto code_r0x000140a38aab;
      case 0x23:
        (*pauVar26)[0] = (*pauVar26)[0];
        (*pauVar75)[0] = (*pauVar75)[0] + 0x30;
        *(int *)pauVar42[0xd] = *(int *)pauVar42[0xd] + -0x4303b630;
        goto code_r0x000140a38ae7;
      case 0x24:
        (&UNK_14303b603)[uVar37] = (&UNK_14303b603)[uVar37] + '0';
        *(undefined **)((longlong)ppauVar73 + -8) = &UNK_140a38d37;
        func_0x00010d7059fa();
        pcVar9 = (code *)swi(3);
        UNRECOVERED_JUMPTABLE = (undefined1 (*) [16])(*pcVar9)();
        return UNRECOVERED_JUMPTABLE;
      case 0x25:
        goto code_r0x000140a38d73;
      case 0x26:
code_r0x000140a38d47:
        cVar22 = (code)in((short)pauVar39);
        pcVar33 = (char *)CONCAT71((int7)((ulonglong)pauVar26 >> 8),cVar22);
        _UNK_143397934 = iVar25;
        (*UNRECOVERED_JUMPTABLE)[0] = cVar22;
        *pcVar33 = *pcVar33 + (char)cVar22;
        iVar25 = _UNK_143397934;
        goto code_r0x000140a38d45;
      case 0x27:
        goto code_r0x000140a38d5d;
      case 0x28:
        pcVar9 = (code *)swi(3);
        UNRECOVERED_JUMPTABLE = (undefined1 (*) [16])(*pcVar9)();
        return UNRECOVERED_JUMPTABLE;
      case 0x29:
        pcVar9 = (code *)(pauVar42[-0x74b7e3c] + 1);
        *(uint *)pcVar9 = *(uint *)pcVar9 >> 0x19 | *(uint *)pcVar9 << 7;
        goto code_r0x000140a38d8a;
      case 0x2a:
      case 0x2b:
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      case 0x2c:
        *(int *)(*param_1 + 0xf) = *(int *)(*param_1 + 0xf) + (int)ppauVar73;
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      case 0x2d:
        *(undefined1 (**) [16])((longlong)ppauVar73 + -8) = pauVar26;
        lVar30 = CONCAT71((int7)((ulonglong)pauVar26 >> 8),cVar20 + -0x15 + bVar79);
        uVar104 = *(int *)(lVar30 + -0x75) + 0x4303b630;
        UNRECOVERED_JUMPTABLE = (undefined1 (*) [16])(ulonglong)uVar104;
        puVar2 = (uint *)(lVar30 + -0x75);
        uVar76 = *puVar2;
        *puVar2 = *puVar2 + uVar104;
        pauVar26 = (undefined1 (*) [16])
                   (ulonglong)
                   ((int)lVar30 + *(int *)(*pauVar42 + (longlong)UNRECOVERED_JUMPTABLE * 4 + 2) +
                   (uint)CARRY4(uVar76,uVar104));
        goto code_r0x000140a3945c;
      case 0x2e:
        goto code_r0x000140a393ab;
      case 0x2f:
code_r0x000140a39a0b:
        _UNK_143397936 = (undefined2)((uint)iVar25 >> 0x10);
        _UNK_143397934 = (undefined2)iVar25;
        return param_1;
      case 0x30:
        uVar76 = (int)pauVar26 + *(int *)*pauVar26 + (uint)bVar79;
        *(char *)(ulonglong)uVar76 = *(char *)(ulonglong)uVar76 + (char)uVar76;
        goto code_r0x000140a39a46;
      case 0x31:
LAB_140a39a26:
        _UNK_143397934 = iVar25;
        *(undefined1 (**) [16])unaff_RBP[-1] = pauVar75;
        goto code_r0x000140a39a2a;
      case 0x32:
        goto code_r0x000140a39a34;
      case 0x33:
        (*pauVar26)[0] = (*pauVar26)[0] + cVar20;
        in((short)pauVar39);
        ppauVar53 = ppauVar73;
code_r0x000140a39a24:
        ppauVar73 = ppauVar53;
        goto code_r0x000140a39a2a;
      case 0x34:
        *(undefined1 (**) [16])((longlong)ppauVar73 + 0x10) = pauVar39;
        *(undefined1 (**) [16])((longlong)ppauVar73 + -8) = unaff_RBP;
        ppauVar70 = (undefined1 (**) [16])((longlong)ppauVar73 + -0x10);
        *(undefined1 (**) [16])((longlong)ppauVar73 + -0x10) = param_1;
        goto code_r0x000140a39a57;
      case 0x35:
      case 0x36:
      case 0x37:
        ffree(in_ST1);
        uVar76 = *(uint *)(pauVar75[-0x603dfc1] + 0xd);
        in_XMM1._0_8_ = (ulonglong)uVar76 << 4;
        *(uint *)(pauVar75[-0x603dfc1] + 0xd) = uVar76 >> 0x1d | (uint)in_XMM1._0_8_;
        uVar76 = *(uint *)(pauVar75[-0x603bdb1] + 0xd);
        *(uint *)(pauVar75[-0x603bdb1] + 0xd) =
             (uint)(CONCAT14((in_XMM1._0_8_ & 0x100000000) != 0,uVar76) >> 0x1d) | uVar76 << 4;
        iVar25 = _UNK_143397934;
        goto code_r0x00014303b64c;
      }
      goto code_r0x000140a37929;
    case 0xe:
      goto code_r0x000140a377bb;
    case 0xf:
      goto code_r0x000140a37929;
    case 0x10:
      ppauVar73 = (undefined1 (**) [16])&stack0xfffffffffffffe50;
      goto code_r0x000140a377f3;
    case 0x11:
      goto code_r0x000140a37a28;
    case 0x12:
      goto code_r0x000140a37a3a;
    case 0x13:
    case 0x14:
    case 0x16:
      ppauVar46 = apauStack_1a8;
      goto code_r0x000140a379d9;
    case 0x15:
      uVar37 = 0x43797d32;
      ppauVar47 = apauStack_1a8;
      goto code_r0x000140a37a36;
    case 0x17:
      pauVar26 = (undefined1 (*) [16])&UNK_143397910;
      ppauVar48 = apauStack_1a8;
      goto code_r0x000140a37d54;
    case 0x18:
      goto code_r0x000140a37e1a;
    case 0x19:
      ppauVar49 = apauStack_1a8;
      goto code_r0x000140a37de8;
    case 0x1a:
      goto code_r0x000140a37e00;
    case 0x1b:
      goto code_r0x000140a37de8;
    case 0x1c:
      goto code_r0x000140a37e26;
    case 0x1d:
      ppauVar54 = apauStack_1a8;
      ppauVar70 = apauStack_1a8;
      if (bVar81 || (longlong)uVar37 < -0x14303b604) goto code_r0x000140a3813a;
      goto code_r0x000140a3819a;
    case 0x1e:
      (*unaff_RDI)[0] = (byte)(*unaff_RDI)[0] >> 4 | (*unaff_RDI)[0] << 4;
      iVar25 = _UNK_143397934;
      goto code_r0x000140a38179;
    case 0x1f:
      goto code_r0x000140a38156;
    case 0x20:
      goto code_r0x000140a38166;
    case 0x21:
      if (bVar81 || (longlong)uVar37 < -0x14303b604) {
        UNK_143397930 = UNK_143397930 + '0';
        (*param_1)[0xf] = 0;
        puVar2 = (uint *)(&UNK_14303b5e5 + uVar37);
        *puVar2 = *puVar2 << 0x1f | *puVar2 >> 1;
        goto code_r0x000140a38160;
      }
      goto code_r0x000140a38194;
    case 0x22:
      goto code_r0x000140a3817f;
    case 0x23:
      goto code_r0x000140a387ad;
    case 0x24:
      goto code_r0x000140a387f9;
    case 0x25:
      goto code_r0x000140a387cd;
    case 0x26:
      UNK_143397930 = UNK_143397930 + '0';
      goto code_r0x000140a387dd;
    case 0x27:
      pauVar26 = (undefined1 (*) [16])((ulonglong)pauVar39 & 0xffffffff);
      ppauVar58 = apauStack_1a8;
      goto code_r0x000140a387ad;
    case 0x28:
      goto code_r0x000140a3880b;
    case 0x29:
      goto code_r0x000140a38abe;
    case 0x2a:
      goto code_r0x000140a38a20;
    case 0x2b:
      _UNK_143397920 = _UNK_143397920 + 0x43397920;
      (*unaff_RDI)[0] = (*unaff_RDI)[0] + bVar36;
      ppauVar64 = apauStack_1a8;
      goto code_r0x000140a38a20;
    case 0x2c:
      (*unaff_RDI)[0] = (*unaff_RDI)[0] + bVar36;
      *(int *)unaff_RDI[0x19] = *(int *)unaff_RDI[0x19] - (int)UNRECOVERED_JUMPTABLE;
      goto code_r0x000140a38aab;
    case 0x2d:
      *(undefined2 *)(&UNK_143397930 + (longlong)pauVar39 * 2) = in_FS;
      iVar25 = CONCAT22(_UNK_143397932,CONCAT11(UNK_143397931,UNK_143397930)) + 0x43397930;
      UNK_143397930 = (byte)iVar25;
      UNK_143397931 = (undefined1)((uint)iVar25 >> 8);
      _UNK_143397932 = (short)((uint)iVar25 >> 0x10);
      (*unaff_RDI)[0] = (*unaff_RDI)[0] + bVar36;
      ppauVar64 = apauStack_1a8;
code_r0x000140a38a20:
      *(undefined8 *)((longlong)ppauVar64 + 0x110) = *(undefined8 *)((longlong)ppauVar64 + 0xb0);
      *(undefined8 *)((longlong)ppauVar64 + 0x118) = *(undefined8 *)((longlong)ppauVar64 + 0xb8);
      *(undefined8 *)((longlong)ppauVar64 + 0x120) = *(undefined8 *)((longlong)ppauVar64 + 0xc0);
      *(undefined8 *)((longlong)ppauVar64 + 0x128) = *(undefined8 *)((longlong)ppauVar64 + 200);
      *(undefined8 *)((longlong)ppauVar64 + 0x130) = *(undefined8 *)((longlong)ppauVar64 + 0xd0);
      *(undefined8 *)((longlong)ppauVar64 + 0x138) = *(undefined8 *)((longlong)ppauVar64 + 0xd8);
      *pauVar39 = in_XMM1;
      pauVar39[1] = in_XMM2;
      uVar27 = _UNK_142e37ab8;
      *(undefined8 *)pauVar39[2] = _DAT_142e37ab0;
      *(undefined8 *)(pauVar39[2] + 8) = uVar27;
      *(float *)pauVar39[3] = fVar95;
      *(float *)(pauVar39[3] + 4) = fVar101;
      *(float *)(pauVar39[3] + 8) = in_XMM3_Dc;
      *(float *)(pauVar39[3] + 0xc) = in_XMM3_Dd;
      pauVar39[4] = in_XMM4;
      pauVar39[5] = in_XMM5;
      pauVar39[6] = in_XMM0;
      uVar27 = _UNK_142e37ac8;
      *(undefined8 *)pauVar39[7] = _DAT_142e37ac0;
      *(undefined8 *)(pauVar39[7] + 8) = uVar27;
      uVar27 = *(undefined8 *)((longlong)ppauVar64 + 0x148);
      uVar41 = *(undefined8 *)((longlong)ppauVar64 + 0x150);
      uVar13 = *(undefined8 *)((longlong)ppauVar64 + 0x158);
      in_XMM2 = *(undefined1 (*) [16])((longlong)ppauVar64 + 0x160);
      fVar95 = *(float *)((longlong)ppauVar64 + 0x170);
      fVar101 = *(float *)((longlong)ppauVar64 + 0x174);
      in_XMM3_Dc = *(float *)((longlong)ppauVar64 + 0x178);
      in_XMM3_Dd = *(float *)((longlong)ppauVar64 + 0x17c);
      *(undefined8 *)pauVar39[8] = *(undefined8 *)((longlong)ppauVar64 + 0x140);
      *(undefined8 *)(pauVar39[8] + 8) = uVar27;
      *(undefined8 *)pauVar39[9] = uVar41;
      *(undefined8 *)(pauVar39[9] + 8) = uVar13;
      ppauVar65 = ppauVar64;
code_r0x000140a38aab:
      pauVar39[10] = in_XMM2;
      *(float *)pauVar39[0xb] = fVar95;
      *(float *)(pauVar39[0xb] + 4) = fVar101;
      *(float *)(pauVar39[0xb] + 8) = in_XMM3_Dc;
      *(float *)(pauVar39[0xb] + 0xc) = in_XMM3_Dd;
      in_XMM0 = *(undefined1 (*) [16])((longlong)ppauVar65 + 0x100);
      in_XMM1 = *(undefined1 (*) [16])((longlong)ppauVar65 + 0x110);
      in_XMM2 = *(undefined1 (*) [16])((longlong)ppauVar65 + 0x120);
      fVar95 = *(float *)((longlong)ppauVar65 + 0x130);
      fVar101 = *(float *)((longlong)ppauVar65 + 0x134);
      in_XMM3_Dc = *(float *)((longlong)ppauVar65 + 0x138);
      in_XMM3_Dd = *(float *)((longlong)ppauVar65 + 0x13c);
      pauVar39[0xc] = in_XMM0;
      pauVar39[0xd] = in_XMM1;
      pauVar42 = pauVar39;
      ppauVar73 = ppauVar65;
      pauVar75 = unaff_RDI;
code_r0x000140a38ae7:
      pauVar42[0xe] = in_XMM2;
      *(float *)pauVar42[0xf] = fVar95;
      *(float *)(pauVar42[0xf] + 4) = fVar101;
      *(float *)(pauVar42[0xf] + 8) = in_XMM3_Dc;
      *(float *)(pauVar42[0xf] + 0xc) = in_XMM3_Dd;
      **(undefined4 **)((longlong)ppauVar73 + 0x40) = (int)param_1;
      pauVar29 = *(undefined1 (**) [16])((longlong)ppauVar73 + 0x1c8);
      iVar25 = _UNK_143397934;
code_r0x000140a38b04:
      _UNK_143397936 = (undefined2)((uint)iVar25 >> 0x10);
      _UNK_143397934 = (undefined2)iVar25;
      uVar74 = in_XMM0._0_4_;
      uVar27 = in_XMM1._0_8_;
      cVar22 = (code)pauVar29[9][8];
      pauVar26 = (undefined1 (*) [16])(ulonglong)(byte)cVar22;
      pauVar77 = pauVar42 + 0x4d;
      pauVar39 = (undefined1 (*) [16])&UNK_14303b6a8;
      UNRECOVERED_JUMPTABLE =
           (undefined1 (*) [16])
           (&UNK_14303b6a8 + *(int *)(&UNK_14303b6a8 + (ulonglong)(byte)(*pauVar77)[0] * 4));
      ppauVar69 = ppauVar73;
      unaff_RDI = pauVar75;
      _UNK_143397934 = iVar25;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
      switch((*pauVar77)[0]) {
      case 0:
        break;
      case 1:
code_r0x000140a38b22:
        unaff_R14 = (undefined1 (*) [16])(pauVar42[0x1b] + 8);
        break;
      case 2:
code_r0x000140a38b34:
        unaff_R14 = pauVar42 + 0x27;
        pauVar75 = (undefined1 (*) [16])&UNK_143397968;
        break;
      case 3:
code_r0x000140a38b44:
        unaff_R14 = pauVar42 + 0x2f;
        pauVar75 = (undefined1 (*) [16])&UNK_1433979d8;
        break;
      case 4:
        unaff_R14 = pauVar42 + 0x39;
code_r0x000140a38b32:
        break;
      case 5:
        unaff_R14 = (undefined1 (*) [16])(pauVar42[0x44] + 8);
        pauVar75 = (undefined1 (*) [16])&UNK_1433979a0;
        break;
      case 6:
code_r0x000140a38da5:
        _UNK_143397934 = iVar25;
        pauVar26[-8][0xd] = pauVar26[-8][0xd] + (char)UNRECOVERED_JUMPTABLE;
        iVar25 = _UNK_143397934;
code_r0x000140a38dad:
        UNRECOVERED_JUMPTABLE =
             (undefined1 (*) [16])
             (&UNK_14303b6c0 + *(int *)(&UNK_14303b6c0 + (longlong)UNRECOVERED_JUMPTABLE * 4));
code_r0x000140a38dbb:
        _UNK_143397934 = iVar25;
                    /* WARNING: Could not recover jumptable at 0x000140a38dbb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        UNRECOVERED_JUMPTABLE =
             (undefined1 (*) [16])(*(code *)UNRECOVERED_JUMPTABLE)(UNRECOVERED_JUMPTABLE);
        return UNRECOVERED_JUMPTABLE;
      case 7:
        goto code_r0x000140a38e26;
      case 8:
        *(undefined2 *)*pauVar26 = in_ES;
        (*pauVar26)[0] = (*pauVar26)[0] + (char)cVar22;
        iVar25 = _UNK_143397934;
        goto code_r0x000140a38e26;
      case 9:
code_r0x000140a38dd5:
        goto code_r0x000140a38e26;
      case 10:
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      case 0xb:
        pauVar42 = (undefined1 (*) [16])
                   CONCAT71((int7)((ulonglong)pauVar42 >> 8),
                            (char)pauVar42 + (char)((ulonglong)UNRECOVERED_JUMPTABLE >> 8));
        pauVar75 = (undefined1 (*) [16])
                   (ulonglong)
                   (byte)((char)cVar22 +
                          (&UNK_14303b666)
                          [*(int *)(&UNK_14303b6a8 + (ulonglong)(byte)(*pauVar77)[0] * 4)] +
                         *(char *)(in_FS_OFFSET +
                                  (ulonglong)
                                  (byte)((char)cVar22 +
                                        (&UNK_14303b666)
                                        [*(int *)(&UNK_14303b6a8 +
                                                 (ulonglong)(byte)(*pauVar77)[0] * 4)])));
        pauVar26 = (undefined1 (*) [16])0x41000001;
code_r0x000140a38e26:
        pcVar9 = *(code **)pauVar26[3];
        *(undefined8 *)((longlong)ppauVar73 + -8) = 0x140a38e3a;
        _UNK_143397934 = iVar25;
        (*pcVar9)((undefined1 *)((longlong)ppauVar73 + 0x120));
        *(float *)(pauVar75[0x10] + 4 + (longlong)unaff_R14) =
             *(float *)(pauVar75[0x10] + 8 + (longlong)unaff_R14) * 0.0 +
             *(float *)(pauVar75[0x10] + 4 + (longlong)unaff_R14);
        uVar27 = *(undefined8 *)(*unaff_R14 + (longlong)*pauVar42);
        uVar41 = *(undefined8 *)(*unaff_R14 + (longlong)*pauVar42 + 8);
        uVar13 = *(undefined8 *)(*unaff_R14 + (longlong)pauVar42[1]);
        uVar14 = *(undefined8 *)(*unaff_R14 + (longlong)pauVar42[1] + 8);
        uVar15 = *(undefined8 *)(pauVar42[1] + 0xc + (longlong)unaff_R14 + 8);
        *(undefined8 *)((longlong)ppauVar73 + 0xbc) =
             *(undefined8 *)(pauVar42[1] + 0xc + (longlong)unaff_R14);
        *(undefined8 *)((longlong)ppauVar73 + 0xc4) = uVar15;
        *(undefined8 *)((longlong)ppauVar73 + 0xb0) = uVar13;
        *(undefined8 *)((longlong)ppauVar73 + 0xb8) = uVar14;
        *(undefined8 *)((longlong)ppauVar73 + 0xa0) = uVar27;
        *(undefined8 *)((longlong)ppauVar73 + 0xa8) = uVar41;
        *(undefined8 *)((longlong)ppauVar73 + -8) = 0x140a38e90;
        fVar91 = (float)pdb_140dee660((undefined1 *)((longlong)ppauVar73 + 0xa0));
        *(undefined8 *)((longlong)ppauVar73 + -8) = 0x140a38eaf;
        fVar95 = (float)pub_142e329e0();
        *(undefined8 *)((longlong)ppauVar73 + -8) = 0x140a38ebb;
        fVar101 = (float)pub_142e32b30();
        fVar95 = fVar95 / fVar101;
        fVar107 = fVar95 / *(float *)(pauVar75[0x4d] + 8);
        *(undefined8 *)((longlong)ppauVar73 + -8) = 0x140a38edc;
        UNRECOVERED_JUMPTABLE =
             (undefined1 (*) [16])
             pdb_140e07bc0((undefined1 *)((longlong)ppauVar73 + 0xa0),
                           (undefined1 *)((longlong)ppauVar73 + 0x120));
        fVar106 = _DAT_142e36f28 / fVar107;
        fVar105 = _DAT_142e36f28 / fVar95;
        fVar101 = _DAT_142e36f28 / fVar91;
        *(undefined8 *)((longlong)ppauVar73 + 0x90) = *(undefined8 *)((longlong)ppauVar73 + 0xd0);
        *(undefined8 *)((longlong)ppauVar73 + 0x98) = *(undefined8 *)((longlong)ppauVar73 + 0xd8);
        *(undefined8 *)((longlong)ppauVar73 + 0x80) = *(undefined8 *)((longlong)ppauVar73 + 0xc0);
        *(undefined8 *)((longlong)ppauVar73 + 0x88) = *(undefined8 *)((longlong)ppauVar73 + 200);
        *(undefined8 *)((longlong)ppauVar73 + 0x70) = *(undefined8 *)((longlong)ppauVar73 + 0xb0);
        *(undefined8 *)((longlong)ppauVar73 + 0x78) = *(undefined8 *)((longlong)ppauVar73 + 0xb8);
        *(undefined8 *)((longlong)ppauVar73 + 0x60) = *(undefined8 *)((longlong)ppauVar73 + 0xa0);
        *(undefined8 *)((longlong)ppauVar73 + 0x68) = *(undefined8 *)((longlong)ppauVar73 + 0xa8);
        *(undefined8 *)((longlong)ppauVar73 + 0x20) = *(undefined8 *)((longlong)ppauVar73 + 0xe0);
        *(undefined8 *)((longlong)ppauVar73 + 0x28) = *(undefined8 *)((longlong)ppauVar73 + 0xe8);
        *(undefined8 *)((longlong)ppauVar73 + 0x30) = *(undefined8 *)((longlong)ppauVar73 + 0xf0);
        *(undefined8 *)((longlong)ppauVar73 + 0x38) = *(undefined8 *)((longlong)ppauVar73 + 0xf8);
        *(undefined8 *)((longlong)ppauVar73 + 0x40) = *(undefined8 *)((longlong)ppauVar73 + 0x100);
        *(undefined8 *)((longlong)ppauVar73 + 0x48) = *(undefined8 *)((longlong)ppauVar73 + 0x108);
        *(undefined8 *)((longlong)ppauVar73 + 0x50) = *(undefined8 *)((longlong)ppauVar73 + 0x110);
        *(undefined8 *)((longlong)ppauVar73 + 0x58) = *(undefined8 *)((longlong)ppauVar73 + 0x118);
        *pauVar75 = ZEXT416((uint)fVar107);
        pauVar75[1] = ZEXT416((uint)fVar95) << 0x20;
        uVar27 = _UNK_142e37ab8;
        *(undefined8 *)pauVar75[2] = _DAT_142e37ab0;
        *(undefined8 *)(pauVar75[2] + 8) = uVar27;
        pauVar75[3] = ZEXT416((uint)fVar91) << 0x40;
        pauVar75[4] = ZEXT416((uint)fVar106);
        pauVar75[5] = ZEXT416((uint)fVar105) << 0x20;
        *(undefined4 *)pauVar75[6] = 0;
        *(undefined4 *)(pauVar75[6] + 4) = 0;
        *(undefined4 *)(pauVar75[6] + 8) = 0;
        *(float *)(pauVar75[6] + 0xc) = fVar101;
        uVar27 = _UNK_142e37ac8;
        *(undefined8 *)pauVar75[7] = _DAT_142e37ac0;
        *(undefined8 *)(pauVar75[7] + 8) = uVar27;
        uVar27 = *(undefined8 *)((longlong)ppauVar73 + 0x68);
        uVar41 = *(undefined8 *)((longlong)ppauVar73 + 0x70);
        uVar13 = *(undefined8 *)((longlong)ppauVar73 + 0x78);
        uVar14 = *(undefined8 *)((longlong)ppauVar73 + 0x80);
        uVar15 = *(undefined8 *)((longlong)ppauVar73 + 0x88);
        uVar16 = *(undefined8 *)((longlong)ppauVar73 + 0x90);
        uVar17 = *(undefined8 *)((longlong)ppauVar73 + 0x98);
        *(undefined8 *)pauVar75[8] = *(undefined8 *)((longlong)ppauVar73 + 0x60);
        *(undefined8 *)(pauVar75[8] + 8) = uVar27;
        *(undefined8 *)pauVar75[9] = uVar41;
        *(undefined8 *)(pauVar75[9] + 8) = uVar13;
        *(undefined8 *)pauVar75[10] = uVar14;
        *(undefined8 *)(pauVar75[10] + 8) = uVar15;
        *(undefined8 *)pauVar75[0xb] = uVar16;
        *(undefined8 *)(pauVar75[0xb] + 8) = uVar17;
        uVar27 = *(undefined8 *)((longlong)ppauVar73 + 0x28);
        uVar41 = *(undefined8 *)((longlong)ppauVar73 + 0x30);
        uVar13 = *(undefined8 *)((longlong)ppauVar73 + 0x38);
        uVar14 = *(undefined8 *)((longlong)ppauVar73 + 0x40);
        uVar15 = *(undefined8 *)((longlong)ppauVar73 + 0x48);
        uVar16 = *(undefined8 *)((longlong)ppauVar73 + 0x50);
        uVar17 = *(undefined8 *)((longlong)ppauVar73 + 0x58);
        *(undefined8 *)pauVar75[0xc] = *(undefined8 *)((longlong)ppauVar73 + 0x20);
        *(undefined8 *)(pauVar75[0xc] + 8) = uVar27;
        *(undefined8 *)pauVar75[0xd] = uVar41;
        *(undefined8 *)(pauVar75[0xd] + 8) = uVar13;
        *(undefined8 *)pauVar75[0xe] = uVar14;
        *(undefined8 *)(pauVar75[0xe] + 8) = uVar15;
        *(undefined8 *)pauVar75[0xf] = uVar16;
        *(undefined8 *)(pauVar75[0xf] + 8) = uVar17;
        return UNRECOVERED_JUMPTABLE;
      case 0xc:
      case 0xd:
code_r0x000140a39316:
        _UNK_143397934 = iVar25;
        *(undefined8 *)(pauVar26[2] + 0xc) = uVar27;
        *(undefined4 *)(pauVar26[3] + 4) = uVar74;
LAB_140a39320:
        pauVar29 = *(undefined1 (**) [16])unaff_R14[4];
        unaff_R12 = (undefined1 (*) [16])((ulonglong)(unaff_R12[-1] + 0xf) ^ (ulonglong)pauVar29);
        iVar25 = _UNK_143397934;
code_r0x000140a3932a:
        UNRECOVERED_JUMPTABLE = (undefined1 (*) [16])0x1;
        if ((longlong)pauVar29 < 0) {
          UNRECOVERED_JUMPTABLE = unaff_R12;
        }
        _UNK_143397934 = iVar25;
                    /* WARNING: Could not recover jumptable at 0x000140a39344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        UNRECOVERED_JUMPTABLE =
             (undefined1 (*) [16])
             (*(code *)(&UNK_14303b6d8 +
                       *(int *)(&UNK_14303b6d8 + (longlong)UNRECOVERED_JUMPTABLE * 4)))();
        return UNRECOVERED_JUMPTABLE;
      case 0xe:
code_r0x000140a3938a:
        *(undefined4 *)(param_3[4] + 8 + (longlong)pauVar39) = uVar74;
        in_R9 = *(undefined1 (**) [16])(*pauVar26 + 8);
code_r0x000140a39395:
        *(undefined4 *)(param_3[5] + 4 + (longlong)pauVar39) = *(undefined4 *)pauVar26[1];
        *(undefined1 (**) [16])(param_3[4] + 0xc + (longlong)pauVar39) = in_R9;
        in_R9 = *(undefined1 (**) [16])(pauVar26[1] + 4);
        in_R10 = (undefined1 (*) [16])(ulonglong)*(uint *)(pauVar26[1] + 0xc);
code_r0x000140a393ab:
        *(int *)(*pauVar39 + (longlong)param_3[6]) = (int)in_R10;
        *(undefined1 (**) [16])(param_3[5] + 8 + (longlong)pauVar39) = in_R9;
        _UNK_143397934 = iVar25;
        goto code_r0x000140a39456;
      case 0xf:
        UNRECOVERED_JUMPTABLE =
             (undefined1 (*) [16])
             CONCAT71((int7)((ulonglong)UNRECOVERED_JUMPTABLE >> 8),
                      (char)UNRECOVERED_JUMPTABLE - (char)cVar22);
        goto code_r0x000140a39467;
      case 0x10:
code_r0x000140a39423:
        _UNK_143397934 = iVar25;
        uVar74 = SUB84(in_R9,0);
        ppauVar70 = (undefined1 (**) [16])*ppauVar69;
        pauVar26 = (undefined1 (*) [16])((ulonglong)pauVar26 & 0xffffffffffffff28);
code_r0x000140a39426:
        *(undefined1 (**) [16])(*pauVar26 + 8) = in_R11;
        *(undefined4 *)((longlong)ppauVar70 + 0x30) =
             *(undefined4 *)(*pauVar39 + (longlong)param_3[6]);
        *(undefined8 *)((longlong)ppauVar70 + 0x28) =
             *(undefined8 *)(param_3[5] + 8 + (longlong)pauVar39);
        *(undefined4 *)*in_R10 = uVar74;
        *(undefined4 *)(pauVar26[1] + 0xc) = *(undefined4 *)((longlong)ppauVar70 + 0x30);
        *(undefined8 *)(pauVar26[1] + 4) = *(undefined8 *)((longlong)ppauVar70 + 0x28);
code_r0x000140a39456:
        pauVar39 = *(undefined1 (**) [16])*pauVar42;
        param_3 = (undefined1 (*) [16])(ulonglong)*(uint *)*pauVar39;
        pauVar75 = unaff_RDI;
code_r0x000140a3945c:
        fVar91 = (float)(longlong)param_3;
        param_3 = *(undefined1 (**) [16])*pauVar75;
        in_XMM1 = ZEXT416((uint)fVar91);
        iVar25 = _UNK_143397934;
code_r0x000140a39467:
        fVar91 = *(float *)*param_3 / in_XMM1._0_4_;
        fVar95 = *(float *)(*param_3 + 4) / (float)*(uint *)(*pauVar39 + 4);
        lVar30 = *(longlong *)*param_1;
        fVar82 = fVar91 + fVar91 + _DAT_142e36f34;
        fVar96 = fVar95 + fVar95 + _DAT_142e36f34;
        fVar95 = *(float *)(lVar30 + 0x48);
        fVar101 = *(float *)(lVar30 + 0x4c);
        fVar107 = *(float *)(lVar30 + 0x58);
        fVar105 = *(float *)(lVar30 + 0x5c);
        fVar91 = *(float *)*pauVar26;
        fVar106 = *(float *)(lVar30 + 0x68);
        fVar103 = *(float *)(lVar30 + 0x6c);
        fVar11 = *(float *)(lVar30 + 0x78);
        fVar12 = *(float *)(lVar30 + 0x7c);
        _UNK_143397934 = iVar25;
        **(undefined4 **)UNRECOVERED_JUMPTABLE[1] = *(undefined4 *)(UNRECOVERED_JUMPTABLE[1] + 0xc);
        *(uint *)(*pauVar26 + 4) =
             (uint)((fVar91 * fVar106 + (fVar82 * fVar95 - fVar96 * fVar107) + fVar11) /
                   (fVar91 * fVar103 + (fVar82 * fVar101 - fVar96 * fVar105) + fVar12)) ^
             _DAT_142e37820;
        return pauVar26;
      case 0x11:
code_r0x000140a39a87:
        *(undefined1 (**) [16])((longlong)ppauVar73 + -8) = unaff_RDI;
        ppauVar73 = (undefined1 (**) [16])((longlong)ppauVar73 + -0x28);
        UNRECOVERED_JUMPTABLE = (undefined1 (*) [16])(pauVar39[2] + 8);
code_r0x000140a39a94:
        *(undefined8 *)((longlong)ppauVar73 + -8) = 0x140a39a99;
        _UNK_143397934 = iVar25;
        pauVar26 = (undefined1 (*) [16])pdb_1404ca240(UNRECOVERED_JUMPTABLE);
        iVar25 = _UNK_143397934;
      case 0x13:
code_r0x000140a39a9e:
        _UNK_143397936 = (undefined2)((uint)iVar25 >> 0x10);
        _UNK_143397934 = (undefined2)iVar25;
        return pauVar26;
      case 0x12:
        *(int *)(pauVar26[-8] + 0xd) = *(int *)(pauVar26[-8] + 0xd) + (int)UNRECOVERED_JUMPTABLE;
        in_XMM1._0_8_ = (ulonglong)((byte)cVar22 | 0x2601c2a);
        iVar25 = _UNK_143397934;
code_r0x000140a39ac2:
        _UNK_143397934 = iVar25;
                    /* WARNING: Could not recover jumptable at 0x000140a39ac9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        UNRECOVERED_JUMPTABLE =
             (undefined1 (*) [16])
             (*(code *)(*UNRECOVERED_JUMPTABLE +
                       *(int *)(*UNRECOVERED_JUMPTABLE + in_XMM1._0_8_ * 4)))();
        return UNRECOVERED_JUMPTABLE;
      case 0x14:
        pcVar9 = (code *)swi(3);
        UNRECOVERED_JUMPTABLE = (undefined1 (*) [16])(*pcVar9)();
        return UNRECOVERED_JUMPTABLE;
      case 0x15:
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      case 0x16:
        puVar32 = (undefined8 *)((longlong)ppauVar73 + -8);
        *(undefined1 (**) [16])((longlong)ppauVar73 + -8) = unaff_RBP;
        cVar20 = '\a';
        do {
          unaff_RBP = (undefined1 (*) [16])(unaff_RBP[-1] + 8);
          puVar32 = puVar32 + -1;
          *puVar32 = *(undefined8 *)*unaff_RBP;
          cVar20 = cVar20 + -1;
        } while ('\0' < cVar20);
        *(undefined1 **)((longlong)ppauVar73 + -0x48) = (undefined1 *)((longlong)ppauVar73 + -8);
        uVar41 = 0x2d;
        *(undefined8 *)((longlong)ppauVar73 + -0xe14f) = 0x140a39b1d;
        uVar27 = pdb_140dc6290(0x4303b333);
        *(undefined8 *)((longlong)ppauVar73 + -0xe127) = uVar27;
        *(undefined8 *)((longlong)ppauVar73 + -0xe11f) = uVar41;
        *(undefined1 **)((longlong)ppauVar73 + -0xe117) =
             (undefined1 *)((longlong)ppauVar73 + -0xe127);
        *(code **)((longlong)ppauVar73 + -0xe10f) = pdb_1402ed400;
        uVar27 = *(undefined8 *)*param_1;
        uVar41 = *(undefined8 *)(*param_1 + 8);
        *(undefined8 *)((longlong)ppauVar73 + -0xe14f) = 0x140a39b55;
        UNRECOVERED_JUMPTABLE =
             (undefined1 (*) [16])
             pdb_140f681d0(uVar27,uVar41,&UNK_14303b360,
                           (undefined1 *)((longlong)ppauVar73 + -0xe117));
        return UNRECOVERED_JUMPTABLE;
      default:
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
code_r0x000140a38b62:
      lVar30 = *(longlong *)((longlong)ppauVar73 + 0x48);
      *(bool *)((longlong)ppauVar73 + 0x20) = (char)pauVar26 == '\x04';
      pcVar9 = *(code **)pauVar75[2];
      *(undefined8 *)((longlong)ppauVar73 + -8) = 0x140a38b8c;
      _UNK_143397934 = iVar25;
      (*pcVar9)(unaff_R14,(undefined1 *)((longlong)ppauVar73 + 0x1e0),
                *(undefined8 *)((longlong)ppauVar73 + 0x1d0),
                *(undefined8 *)((longlong)ppauVar73 + 0x1d8));
      *(undefined8 *)((longlong)ppauVar73 + -8) = 0x140a38b9c;
      pauVar26 = (undefined1 (*) [16])
                 pdb_140e08f50((undefined1 *)((longlong)ppauVar73 + 0x1ac),pauVar42);
      iVar25 = _UNK_143397934;
      if ((*(uint *)(lVar30 + 0x10) < 3) &&
         (unaff_XMM6._0_4_ * _DAT_142e3787c <
          SQRT((*(float *)((longlong)ppauVar73 + 0x1a8) - *(float *)((longlong)ppauVar73 + 0x1b4)) *
               (*(float *)((longlong)ppauVar73 + 0x1a8) - *(float *)((longlong)ppauVar73 + 0x1b4)) +
               (*(float *)((longlong)ppauVar73 + 0x1a4) - *(float *)((longlong)ppauVar73 + 0x1b0)) *
               (*(float *)((longlong)ppauVar73 + 0x1a4) - *(float *)((longlong)ppauVar73 + 0x1b0)) +
               (*(float *)((longlong)ppauVar73 + 0x1a0) - *(float *)((longlong)ppauVar73 + 0x1ac)) *
               (*(float *)((longlong)ppauVar73 + 0x1a0) - *(float *)((longlong)ppauVar73 + 0x1ac))))
         ) {
        **(undefined4 **)((longlong)ppauVar73 + 0xe0) = *(undefined4 *)((longlong)ppauVar73 + 0x54);
        lVar30 = *(longlong *)((longlong)ppauVar73 + 0xe8);
        lVar40 = *(longlong *)(lVar30 + 0x30);
        uVar27 = *(undefined8 *)(lVar30 + 0x40);
        if (lVar40 == *(longlong *)(lVar30 + 0x20)) {
          *(undefined8 *)((longlong)ppauVar73 + -8) = 0x140a38c39;
          pdb_142d7e980(lVar30 + 0x20);
        }
        pauVar26 = *(undefined1 (**) [16])(lVar30 + 0x28);
        *(undefined4 *)pauVar26[lVar40] = 2;
        *(undefined8 *)(pauVar26[lVar40] + 8) = uVar27;
        *(longlong *)(lVar30 + 0x30) = lVar40 + 1;
        *(longlong *)(lVar30 + 0x40) = *(longlong *)(lVar30 + 0x40) + 1;
        iVar25 = _UNK_143397934;
      }
code_r0x000140a38c9e:
      _UNK_143397936 = (undefined2)((uint)iVar25 >> 0x10);
      _UNK_143397934 = (undefined2)iVar25;
      return pauVar26;
    case 0x2e:
      UNK_143397930 = UNK_143397930 + '0';
      ppauVar65 = apauStack_1a8;
      goto code_r0x000140a38aab;
    case 0x2f:
      UNK_143397930 = UNK_143397930 + '0';
      goto code_r0x000140a38ce4;
    case 0x30:
      goto code_r0x000140a38d47;
    case 0x31:
      pcVar9 = (code *)swi(3);
      UNRECOVERED_JUMPTABLE =
           (undefined1 (*) [16])
           (*pcVar9)(CONCAT71((int7)((ulonglong)UNRECOVERED_JUMPTABLE >> 8),
                              bVar36 + (char)(0x7930 % (short)(char)UNK_143397930)));
      return UNRECOVERED_JUMPTABLE;
    case 0x32:
      return (undefined1 (*) [16])(ulonglong)(0x43397930 >> (bVar36 & 0x1f));
    case 0x33:
      ppauVar66 = apauStack_1a8;
code_r0x000140a38ce4:
      *(undefined1 **)((longlong)ppauVar66 + 0x140) = (undefined1 *)((longlong)ppauVar66 + 0x100);
      *(code **)((longlong)ppauVar66 + 0x148) = pdb_1402ed400;
                    /* WARNING: Subroutine does not return */
      *(undefined8 *)((longlong)ppauVar66 + -8) = 0x140a38d1e;
      pdb_142dc83d0(&UNK_14337f99a,(undefined1 *)((longlong)ppauVar66 + 0x140),&UNK_14337fa18);
    case 0x34:
      goto code_r0x000140a38d5e;
    case 0x35:
    case 0x36:
code_r0x000140a39272:
      puVar34 = &UNK_143397930;
      if ((bVar78 != bVar79 & (byte)param_3 & ((uint)in_R10 & 0x7fffffff) < 0x7f800000) != 0) {
        **(undefined4 **)UNRECOVERED_JUMPTABLE[1] = *(undefined4 *)(UNRECOVERED_JUMPTABLE[1] + 0xc);
        lVar30 = *(longlong *)*UNRECOVERED_JUMPTABLE;
        *(ulonglong *)(lVar30 + 0x20) = in_XMM1._0_8_;
        *(int *)(lVar30 + 0x28) = in_XMM0._0_4_;
        pauVar39 = _UNK_143397940;
      }
      iVar25 = _UNK_143397934;
      if (pauVar39 < (undefined1 (*) [16])0x4) {
                    /* WARNING: Subroutine does not return */
        pdb_142dc81f2(3,pauVar39,&UNK_14303b198);
      }
      goto code_r0x000140a392b5;
    case 0x37:
      goto code_r0x000140a392e6;
    case 0x38:
      goto code_r0x000140a39423;
    case 0x39:
      UNK_143397930 = (UNK_143397930 << 1 | (char)UNK_143397930 < '\0') + 0x30;
      goto code_r0x000140a39379;
    case 0x3a:
      pauVar26 = (undefined1 (*) [16])func_0x000150f22331();
code_r0x000140a399e9:
      *(undefined8 *)(param_1[1] + 8) = 0x13;
    case 0x3e:
      *(undefined1 (**) [16])param_1[2] = pauVar26;
      *(undefined8 *)(param_1[2] + 8) = 0x13;
      *(undefined8 *)param_1[3] = 0x8000000000000000;
      iVar25 = _UNK_143397934;
      goto code_r0x000140a39a0b;
    case 0x3b:
                    /* WARNING: Subroutine does not return */
      pdb_142dc7e11(8,0x18);
    case 0x3c:
      UNK_1433978e8 = UNK_1433978e8 + bVar36;
      UNK_143397930 = UNK_143397930 + -0x40;
      cRam0000000173800278 = cRam0000000173800278 + '0';
      goto code_r0x000140a39a0b;
    case 0x3d:
      *(undefined4 *)param_1[3] = 0x43397930;
      iVar25 = _UNK_143397934;
      goto code_r0x000140a39a0b;
    case 0x3f:
      goto code_r0x000140a39a24;
    case 0x40:
    case 0x41:
    case 0x42:
      unaff_RDI[-0x463b017][0xf] = unaff_RDI[-0x463b017][0xf] ^ (byte)((ulonglong)pauVar39 >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    (**(code **)pauVar26[3])(auStack_88,pauVar42);
    fVar95 = (float)pub_142e32a20();
    fVar91 = _DAT_142e36f28;
    *(float *)(unaff_RDI[0x10] + 4 + (longlong)unaff_R14) =
         (_DAT_142e36f28 - fVar95) *
         (float)((ulonglong)*(undefined8 *)(unaff_RDI[0x10] + 4 + (longlong)unaff_R14) >> 0x20) +
         (_DAT_142e36f28 - (_DAT_142e36f28 - fVar95)) *
         (float)*(undefined8 *)(unaff_RDI[0x10] + 4 + (longlong)unaff_R14);
    uStack_188 = *(undefined8 *)(*unaff_R14 + (longlong)*pauVar39);
    uStack_180 = *(undefined8 *)(*unaff_R14 + (longlong)*pauVar39 + 8);
    uStack_178 = *(undefined8 *)(*unaff_R14 + (longlong)unaff_RDI[0x11]);
    uVar27 = *(undefined8 *)(*unaff_R14 + (longlong)unaff_RDI[0x11] + 8);
    uVar41 = *(undefined8 *)(unaff_RDI[0x11] + 0xc + (longlong)unaff_R14 + 8);
    uStack_168 = (undefined4)
                 ((ulonglong)*(undefined8 *)(unaff_RDI[0x11] + 0xc + (longlong)unaff_R14) >> 0x20);
    uStack_164 = (undefined4)uVar41;
    uStack_160 = (undefined4)((ulonglong)uVar41 >> 0x20);
    uStack_170 = (undefined2)uVar27;
    bStack_16e = (byte)((ulonglong)uVar27 >> 0x10);
    uStack_16d = (undefined1)((ulonglong)uVar27 >> 0x18);
    uStack_16c = (undefined4)((ulonglong)uVar27 >> 0x20);
    fVar95 = (float)pdb_140dee660(&uStack_188);
    fVar101 = (float)pub_142e329e0();
    fVar107 = (float)pub_142e32b30();
    fVar101 = fVar101 / fVar107;
    fVar107 = fVar101 / *(float *)(unaff_RDI[0x4d] + 8);
    UNRECOVERED_JUMPTABLE = (undefined1 (*) [16])pdb_140e07bc0(&uStack_188,auStack_88);
    *unaff_RDI = ZEXT416((uint)fVar107);
    unaff_RDI[1] = ZEXT416((uint)fVar101) << 0x20;
    uVar27 = _UNK_142e37ab8;
    *(undefined8 *)unaff_RDI[2] = _DAT_142e37ab0;
    *(undefined8 *)(unaff_RDI[2] + 8) = uVar27;
    unaff_RDI[3] = ZEXT416((uint)fVar95) << 0x40;
    unaff_RDI[4] = ZEXT416((uint)(fVar91 / fVar107));
    unaff_RDI[5] = ZEXT416((uint)(fVar91 / fVar101)) << 0x20;
    *(undefined4 *)unaff_RDI[6] = 0;
    *(undefined4 *)(unaff_RDI[6] + 4) = 0;
    *(undefined4 *)(unaff_RDI[6] + 8) = 0;
    *(float *)(unaff_RDI[6] + 0xc) = fVar91 / fVar95;
    uVar27 = _UNK_142e37ac8;
    *(undefined8 *)unaff_RDI[7] = _DAT_142e37ac0;
    *(undefined8 *)(unaff_RDI[7] + 8) = uVar27;
    *(undefined8 *)unaff_RDI[8] = uStack_188;
    *(undefined8 *)(unaff_RDI[8] + 8) = uStack_180;
    *(undefined8 *)unaff_RDI[9] = uStack_178;
    *(ulonglong *)(unaff_RDI[9] + 8) =
         CONCAT44(uStack_16c,CONCAT13(uStack_16d,CONCAT12(bStack_16e,uStack_170)));
    *(ulonglong *)unaff_RDI[10] = CONCAT44(uStack_164,uStack_168);
    *(ulonglong *)(unaff_RDI[10] + 8) = CONCAT44(uStack_15c,uStack_160);
    *(undefined8 *)unaff_RDI[0xb] = uStack_158;
    *(longlong *)(unaff_RDI[0xb] + 8) = lStack_150;
    *(undefined8 *)unaff_RDI[0xc] = uStack_148;
    *(undefined8 *)(unaff_RDI[0xc] + 8) = uStack_140;
    *(undefined8 *)unaff_RDI[0xd] = uStack_138;
    *(undefined8 *)(unaff_RDI[0xd] + 8) = uStack_130;
    *(undefined8 *)unaff_RDI[0xe] = uStack_128;
    *(undefined8 *)(unaff_RDI[0xe] + 8) = uStack_120;
    *(undefined8 *)unaff_RDI[0xf] = uStack_118;
    *(undefined8 *)(unaff_RDI[0xf] + 8) = uStack_110;
    iVar25 = _UNK_143397934;
code_r0x000140a37268:
    _UNK_143397936 = (undefined2)((uint)iVar25 >> 0x10);
    _UNK_143397934 = (undefined2)iVar25;
    return UNRECOVERED_JUMPTABLE;
  case 0x24:
    goto code_r0x000140a36d7a;
  case 0x25:
    (*unaff_RDI)[0] = (*unaff_RDI)[0] + bVar36;
    bRam000000028672f260 = bRam000000028672f260 << 1 | (char)bRam000000028672f260 < '\0';
    _UNK_1433978bd = CONCAT31(_UNK_1433978be,UNK_1433978bd + bVar36);
    goto code_r0x000140a36f8a;
  case 0x26:
    goto code_r0x000140a36f34;
  case 0x27:
    goto code_r0x000140a36f60;
  case 0x28:
    auVar97._0_4_ = fVar91 * fVar91;
    auVar97._4_4_ = in_XMM2._4_4_ * in_XMM2._4_4_;
    auVar97._8_4_ = in_XMM2._8_4_ * in_XMM2._8_4_;
    auVar97._12_4_ = in_XMM2._12_4_ * in_XMM2._12_4_;
    goto code_r0x000140a36f79;
  case 0x29:
    goto code_r0x000140a36f4f;
  case 0x2a:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x2b:
    _UNK_143397950 = 0x11cb8c7;
    UNK_143397930 = UNK_143397930 + '0';
  case 0x2d:
    lVar30 = 0x11c;
    uStack_b0 = CONCAT44((int)UNRECOVERED_JUMPTABLE,(undefined4)uStack_b0);
    if (((ulonglong)UNRECOVERED_JUMPTABLE & 1) != 0) {
      uVar27 = pdb_140f3c9d0();
      *puStack_b8 = uVar27;
      *(int *)(puStack_b8 + 1) = (int)pauVar39;
      lVar30 = 0x11d;
    }
    bStack_16e = *(uint *)unaff_R15[1] < 3;
    in_R11 = (undefined1 (*) [16])CONCAT71((int7)((ulonglong)in_R11 >> 8),bStack_16e);
    unaff_RDI = (undefined1 (*) [16])0x0;
    if (*(byte *)(lStack_150 + lVar30) != 6) {
      unaff_RDI = (undefined1 (*) [16])(ulonglong)*(byte *)(lStack_150 + lVar30);
    }
    *(int *)*unaff_R12 = (int)param_1;
    uVar76 = (byte)param_1[0x5d][0] - 2;
    pauVar39 = (undefined1 (*) [16])(ulonglong)uVar76;
    if (3 < uVar76) {
      puVar34 = (undefined *)0x100;
      if (param_1[0x5d][0] != 0) {
        puVar34 = (undefined *)0x1b8;
      }
      goto LAB_140a37671;
    }
    if (!(bool)bStack_16e) goto LAB_140a37683;
    goto LAB_140a376a5;
  case 0x2c:
  case 0x2e:
  case 0x2f:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x30:
    ppauVar44 = (undefined1 (**) [16])&stack0xfffffffffffffe50;
    pauVar42 = (undefined1 (*) [16])((ulonglong)uVar43 << 8);
    fVar91 = (float)SUB104(in_ST0,0);
    goto code_r0x000140a37702;
  case 0x31:
    *(uint *)*unaff_RDI =
         *(uint *)*unaff_RDI >> (bVar36 & 0x1f) | *(int *)*unaff_RDI << 0x20 - (bVar36 & 0x1f);
    pauVar39 = (undefined1 (*) [16])&UNK_14303b5f7;
    goto code_r0x000140a3772a;
  case 0x32:
    pauVar42 = (undefined1 (*) [16])CONCAT71(uVar43,(char)pauVar42 << (bVar36 & 0x1f));
    auVar99._0_4_ = fVar107 + fVar107;
    auVar99._4_4_ = in_XMM1._4_4_ + in_XMM1._4_4_;
    auVar99._8_4_ = fVar105 + fVar105;
    auVar99._12_4_ = fVar106 + fVar106;
    ppauVar44 = apauStack_1a8;
    goto code_r0x000140a3771e;
  case 0x33:
    in_XMM1._0_4_ = fVar107 + unaff_XMM7_Da;
    in_XMM1._4_4_ = 0.0;
    in_XMM1._8_4_ = fVar105 + unaff_XMM7_Dc;
    in_XMM1._12_4_ = fVar106 + unaff_XMM7_Dd;
    ppauVar45 = apauStack_1a8;
    goto code_r0x000140a3772a;
  case 0x34:
    ppauVar73 = apauStack_1a8;
    auVar109 = in_XMM1;
    goto code_r0x000140a37775;
  case 0x35:
    return apauStack_1a8[0];
  case 0x36:
    pauVar39 = pauVar42;
    ppauVar73 = apauStack_1a8;
    in_XMM1 = unaff_XMM10;
    goto code_r0x000140a37996;
  case 0x37:
    pauVar39 = (undefined1 (*) [16])(ulonglong)(uint)((int)pauVar42 << 1);
    in_XMM1._8_8_ = in_XMM1._0_8_;
    ppauVar73 = apauStack_1a8;
    goto code_r0x000140a3799f;
  case 0x38:
  case 0x39:
  case 0x3b:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x3a:
    pauVar39 = pauVar42;
    ppauVar73 = apauStack_1a8;
    goto code_r0x000140a3799f;
  case 0x3c:
    goto code_r0x000140a37cbe;
  case 0x3d:
    uVar76 = *(int *)(param_1[-0x7af0fb1] + 8) + 0x43397930;
    *(uint *)*UNRECOVERED_JUMPTABLE = *(uint *)*UNRECOVERED_JUMPTABLE | uVar76;
    *(char *)(ulonglong)uVar76 = *(char *)(ulonglong)uVar76 + (char)uVar76;
    iVar25 = _UNK_143397934;
    goto code_r0x000140a37d90;
  case 0x3e:
    goto code_r0x000140a37d60;
  case 0x3f:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x40:
    goto code_r0x000140a37d54;
  case 0x41:
    pauVar29 = (undefined1 (*) [16])&UNK_143397930;
    iVar25 = _UNK_143397934;
    goto code_r0x000140a37d96;
  case 0x42:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x43:
    return pauVar26;
  case 0x44:
    goto code_r0x000140a380bc;
  case 0x45:
    goto code_r0x000140a380d2;
  case 0x46:
    ppauVar53 = apauStack_1a8;
    goto code_r0x000140a380bc;
  case 0x47:
    (*unaff_RDI)[0] = (byte)(*unaff_RDI)[0] >> 4 | (*unaff_RDI)[0] << 4;
    ppauVar70 = apauStack_1a8;
    pauVar77 = in_R11;
    goto code_r0x000140a380ef;
  case 0x48:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x49:
    _UNK_143397934 = _UNK_143397934 + (uint)bVar78;
    UNK_1433978bb = UNK_1433978bb + bVar36;
    pauVar42 = (undefined1 (*) [16])0x458;
    goto code_r0x000140a38750;
  case 0x4a:
    (&UNK_14303b550)[(longlong)(*param_1 + uVar37)] =
         (&UNK_14303b550)[(longlong)(*param_1 + uVar37)] + bVar36;
    ppauVar70 = apauStack_1a8;
    goto code_r0x000140a3873d;
  case 0x4b:
    *unaff_RDI = in_XMM1;
    ppauVar51 = apauStack_1a8;
    goto code_r0x000140a38750;
  case 0x4c:
    unaff_RDI = (undefined1 (*) [16])(ulonglong)((int)unaff_RDI - 0x10);
    ppauVar70 = apauStack_1a8;
    goto code_r0x000140a3872a;
  case 0x4d:
    _UNK_143392430 = _UNK_143392430 + 0x43392430;
    (&UNK_14303b52c)[uVar37] = (&UNK_14303b52c)[uVar37] + bVar36;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x4e:
    (*unaff_RDI)[0] = (*unaff_RDI)[0] + bVar36;
    cRam00000000000110e4 = cRam00000000000110e4 - cVar20;
    pauVar39 = pauVar42;
    ppauVar64 = (undefined1 (**) [16])(undefined1 *)0x11024;
    goto code_r0x000140a38a20;
  case 0x4f:
    UNK_143397930 = UNK_143397930 + '0';
    (unaff_RDI[2] + 9)[(longlong)UNRECOVERED_JUMPTABLE] =
         (unaff_RDI[2] + 9)[(longlong)UNRECOVERED_JUMPTABLE] + 0x30;
    ppauVar63 = (undefined1 (**) [16])0x43397930;
    pauVar26 = (undefined1 (*) [16])((ulonglong)apauStack_1a8 & 0xffffff70);
  case 0x52:
    *(int *)*pauVar26 = *(int *)*pauVar26 + (int)pauVar26;
    (unaff_RDI[2] + 9)[(longlong)UNRECOVERED_JUMPTABLE] =
         (unaff_RDI[2] + 9)[(longlong)UNRECOVERED_JUMPTABLE] + (char)pauVar26;
    *(undefined2 *)*pauVar26 = in_FS;
    ppauVar58 = ppauVar63;
code_r0x000140a389fc:
    *(int *)*pauVar26 = *(int *)*pauVar26 + (int)pauVar26;
    (unaff_RDI[2] + 9)[(longlong)UNRECOVERED_JUMPTABLE] =
         (unaff_RDI[2] + 9)[(longlong)UNRECOVERED_JUMPTABLE] + (char)pauVar26;
    *(int *)*pauVar26 = *(int *)*pauVar26 + (int)pauVar26;
    (*unaff_RDI)[0] = (*unaff_RDI)[0] + bVar36;
    *(int *)((longlong)ppauVar58 + 0x140) = *(int *)((longlong)ppauVar58 + 0x140) - (int)unaff_RDI;
    ppauVar70 = ppauVar58;
    goto code_r0x000140a38a10;
  case 0x50:
    goto code_r0x000140a389fc;
  case 0x51:
    iVar25 = CONCAT22(_UNK_143397932,CONCAT11(UNK_143397931,UNK_143397930)) + 0x43397930;
    UNK_143397930 = (byte)iVar25;
    UNK_143397931 = (undefined1)((uint)iVar25 >> 8);
    _UNK_143397932 = (short)((uint)iVar25 >> 0x10);
    (*unaff_RDI)[0] = (*unaff_RDI)[0] + bVar36;
    lStack_108 = CONCAT71(lStack_108._1_7_,(char)lStack_108 - cVar20);
    ppauVar70 = apauStack_1a8;
    goto code_r0x000140a38a10;
  case 0x53:
    (*UNRECOVERED_JUMPTABLE)[0] = (*UNRECOVERED_JUMPTABLE)[0] + 0x30;
    UNK_143397930 = UNK_143397930 + '0';
    pauVar39 = pauVar42;
    ppauVar64 = apauStack_1a8;
    goto code_r0x000140a38a20;
  case 0x54:
    goto code_r0x000140a38c9e;
  case 0x55:
code_r0x000140a38cb3:
    *(undefined1 (**) [16])((longlong)ppauVar70 + 0x100) = pauVar26;
    *(undefined8 *)((longlong)ppauVar70 + 0x108) = 0x22;
    ppauVar66 = ppauVar70;
    goto code_r0x000140a38ce4;
  case 0x56:
    goto code_r0x000140a38c9e;
  case 0x57:
    goto code_r0x000140a38c9e;
  case 0x58:
    cVar20 = UNK_143397930 + '0';
    (unaff_RDI[2] + 8)[(longlong)UNRECOVERED_JUMPTABLE] =
         (unaff_RDI[2] + 8)[(longlong)UNRECOVERED_JUMPTABLE] + cVar20;
    pcVar33 = (char *)((ulonglong)apauStack_1a8 & 0xffffff80);
    bVar21 = (char)pcVar33 + *pcVar33;
    pcVar9 = (code *)(unaff_RDI[2] + 8 + (longlong)UNRECOVERED_JUMPTABLE);
    cVar22 = *pcVar9;
    cVar4 = *pcVar9;
    *pcVar9 = (code)((char)*pcVar9 + bVar21);
    *(ulonglong *)((CONCAT71(0x1433979,cVar20) & 0xffffffff) - 8) =
         (ulonglong)(in_NT & 1) * 0x4000 | (ulonglong)SCARRY1((char)cVar4,bVar21) * 0x800 |
         (ulonglong)(in_IF & 1) * 0x200 | (ulonglong)(in_TF & 1) * 0x100 |
         (ulonglong)((char)*pcVar9 < '\0') * 0x80 | (ulonglong)(*pcVar9 == (code)0x0) * 0x40 |
         (ulonglong)(in_AF & 1) * 0x10 | (ulonglong)((POPCOUNT(*pcVar9) & 1U) == 0) * 4 |
         (ulonglong)CARRY1((byte)cVar22,bVar21) | (ulonglong)(in_ID & 1) * 0x200000 |
         (ulonglong)(in_VIP & 1) * 0x100000 | (ulonglong)(in_VIF & 1) * 0x80000 |
         (ulonglong)(in_AC & 1) * 0x40000;
    pcVar33 = (char *)(CONCAT71((int7)((ulonglong)pcVar33 >> 8),bVar21) & 0xffffffffffffff90);
    pcVar33 = (char *)(CONCAT71((int7)((ulonglong)pcVar33 >> 8),(char)pcVar33 + *pcVar33) + -0x7f);
    *pcVar33 = *pcVar33 + bVar36;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x59:
    UNK_14303b570 = UNK_14303b570 + 'y';
    UNK_143397930 = UNK_143397930 + '0';
    puVar34 = (undefined *)0x45cde6d5;
    ppauVar60 = apauStack_1a8;
code_r0x000140a38cd0:
    *(undefined **)((longlong)ppauVar60 + 0x100) = puVar34;
    *(undefined8 *)((longlong)ppauVar60 + 0x108) = 0x1f;
    ppauVar66 = ppauVar60;
    goto code_r0x000140a38ce4;
  case 0x5a:
  case 0x5b:
    if (UNRECOVERED_JUMPTABLE == (undefined1 (*) [16])0x0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x5c:
    param_3 = (undefined1 (*) [16])(ulonglong)(((uint)param_3 & 0x7fffffff) < 0x7f800000);
    uVar76 = (uint)in_R9 & 0x7fffffff;
    bVar78 = SBORROW4(uVar76,0x7f800000);
    bVar79 = (int)(uVar76 + 0x80800000) < 0;
    goto code_r0x000140a39272;
  case 0x5d:
    UNK_14339797c = UNK_14339797c + bVar36 + bVar78;
    UNRECOVERED_JUMPTABLE = (undefined1 (*) [16])(ulonglong)_UNK_143397938;
    goto code_r0x000140a39395;
  case 0x5e:
    UNK_143397930 = UNK_143397930 + '0';
    return pauVar26;
  case 0x5f:
    UNK_143397930 = UNK_143397930 + '0';
    UNK_1433978b9 = UNK_1433978b9 + bVar36;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x60:
    *(uint *)*UNRECOVERED_JUMPTABLE = (*(int *)*UNRECOVERED_JUMPTABLE + -0x110f0260) - (uint)bVar78;
    UNK_1433978f7 = UNK_1433978f7 + bVar36;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x61:
    goto code_r0x000140a39966;
  case 0x62:
    goto code_r0x000140a39974;
  case 99:
    iVar25 = (CONCAT22(_UNK_143397932,CONCAT11(UNK_143397931,UNK_143397930)) + -0x43397930) -
             (uint)bVar78;
    UNK_143397930 = (byte)iVar25;
    UNK_143397931 = (undefined1)((uint)iVar25 >> 8);
    _UNK_143397932 = (short)((uint)iVar25 >> 0x10);
    UNK_143397930 = UNK_143397930 + '0';
    pauVar39 = (undefined1 (*) [16])0x1;
code_r0x000140a39966:
    pauVar26 = (undefined1 (*) [16])
               pub_1406abab0((ulonglong)UNRECOVERED_JUMPTABLE,(ulonglong)pauVar39);
    ppauVar73 = apauStack_1a8;
    iVar25 = _UNK_143397934;
    if (pauVar26 == (undefined1 (*) [16])0x0) goto LAB_140a39a26;
code_r0x000140a39974:
    uVar27 = _UNK_14303b318;
    *(ulonglong *)(*pauVar26 + 9) = CONCAT17(UNK_14303b317,_DAT_14303b310);
    *(undefined8 *)(pauVar26[1] + 1) = uVar27;
    uVar27 = CONCAT71(_DAT_14303b310,UNK_14303b30f);
    *(undefined8 *)*pauVar26 = _DAT_14303b307;
    *(undefined8 *)(*pauVar26 + 8) = uVar27;
    *(undefined8 *)*unaff_RDI = 0x19;
code_r0x000140a39990:
    *(undefined1 (**) [16])(*unaff_RDI + 8) = pauVar26;
    *(undefined8 *)unaff_RDI[1] = 0x19;
    *(undefined8 *)(unaff_RBP[-3] + 8) = 1;
    *(undefined1 (**) [16])unaff_RBP[-2] = unaff_RDI;
    *(undefined8 *)(unaff_RBP[-2] + 8) = 1;
    pdb_14007ee60();
    pauVar26 = (undefined1 (*) [16])pub_1406abab0(0x13,1);
    uVar27 = _UNK_14303b328;
    if (pauVar26 != (undefined1 (*) [16])0x0) {
      *(undefined8 *)*pauVar26 = _DAT_14303b320;
      *(undefined8 *)(*pauVar26 + 8) = uVar27;
      *(undefined4 *)(*pauVar26 + 0xf) = 0x65636e65;
      uVar27 = *(undefined8 *)unaff_RBP[-2];
      *(undefined8 *)*param_1 = *(undefined8 *)(unaff_RBP[-3] + 8);
      *(undefined8 *)(*param_1 + 8) = uVar27;
      *(undefined8 *)param_1[1] = *(undefined8 *)(unaff_RBP[-2] + 8);
      goto code_r0x000140a399e9;
    }
    UNRECOVERED_JUMPTABLE = (undefined1 (*) [16])0x1;
    ppauVar73 = apauStack_1a8;
    goto code_r0x000140a39a46;
  case 100:
    goto code_r0x000140a39990;
  case 0x65:
  case 0x66:
  case 0x67:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  (**(code **)pauVar26[3])(auStack_88,UNRECOVERED_JUMPTABLE);
  fVar95 = (float)pub_142e32a20();
  fVar91 = _DAT_142e36f28;
  *(float *)(param_1[0x10] + lVar30 + 4) =
       (_DAT_142e36f28 - fVar95) *
       (float)((ulonglong)*(undefined8 *)(param_1[0x10] + lVar30 + 4) >> 0x20) +
       (_DAT_142e36f28 - (_DAT_142e36f28 - fVar95)) *
       (float)*(undefined8 *)(param_1[0x10] + lVar30 + 4);
  lStack_108 = *(longlong *)(*pauVar42 + lVar30);
  uStack_100 = *(undefined8 *)(*pauVar42 + lVar30 + 8);
  uStack_f8 = *(undefined8 *)(param_1[0x11] + lVar30);
  uVar27 = *(undefined8 *)((longlong)(param_1[0x11] + lVar30) + 8);
  uVar41 = *(undefined8 *)((longlong)(param_1[0x11] + lVar30 + 0xc) + 8);
  uStack_e8 = (undefined4)((ulonglong)*(undefined8 *)(param_1[0x11] + lVar30 + 0xc) >> 0x20);
  uStack_e4 = (undefined4)uVar41;
  uStack_e0 = (undefined4)((ulonglong)uVar41 >> 0x20);
  uStack_f0 = (undefined4)uVar27;
  uStack_ec = (undefined4)((ulonglong)uVar27 >> 0x20);
  fVar95 = (float)pdb_140dee660(&lStack_108);
  fVar101 = (float)pub_142e329e0();
  fVar107 = (float)pub_142e32b30();
  fVar101 = fVar101 / fVar107;
  fVar107 = fVar101 / *(float *)(param_1[0x4d] + 8);
  UNRECOVERED_JUMPTABLE = (undefined1 (*) [16])pdb_140e07bc0(&lStack_108,auStack_88);
  *param_1 = ZEXT416((uint)fVar107);
  param_1[1] = ZEXT416((uint)fVar101) << 0x20;
  uVar27 = _UNK_142e37ab8;
  *(undefined8 *)param_1[2] = _DAT_142e37ab0;
  *(undefined8 *)(param_1[2] + 8) = uVar27;
  param_1[3] = ZEXT416((uint)fVar95) << 0x40;
  param_1[4] = ZEXT416((uint)(fVar91 / fVar107));
  param_1[5] = ZEXT416((uint)(fVar91 / fVar101)) << 0x20;
  *(undefined4 *)param_1[6] = 0;
  *(undefined4 *)(param_1[6] + 4) = 0;
  *(undefined4 *)(param_1[6] + 8) = 0;
  *(float *)(param_1[6] + 0xc) = fVar91 / fVar95;
  uVar27 = _UNK_142e37ac8;
  *(undefined8 *)param_1[7] = _DAT_142e37ac0;
  *(undefined8 *)(param_1[7] + 8) = uVar27;
  *(longlong *)param_1[8] = lStack_108;
  *(undefined8 *)(param_1[8] + 8) = uStack_100;
  *(undefined8 *)param_1[9] = uStack_f8;
  *(ulonglong *)(param_1[9] + 8) = CONCAT44(uStack_ec,uStack_f0);
  *(ulonglong *)param_1[10] = CONCAT44(uStack_e4,uStack_e8);
  *(ulonglong *)(param_1[10] + 8) = CONCAT44(uStack_dc,uStack_e0);
  *(undefined8 *)param_1[0xb] = uStack_d8;
  *(undefined8 *)(param_1[0xb] + 8) = uStack_d0;
  *(undefined8 *)param_1[0xc] = uStack_c8;
  *(undefined8 *)(param_1[0xc] + 8) = uStack_c0;
  *(undefined8 **)param_1[0xd] = puStack_b8;
  *(undefined8 *)(param_1[0xd] + 8) = uStack_b0;
  *(undefined8 *)param_1[0xe] = uStack_a8;
  *(undefined8 *)(param_1[0xe] + 8) = uStack_a0;
  *(undefined8 *)param_1[0xf] = uStack_98;
  *(undefined8 *)(param_1[0xf] + 8) = uStack_90;
  return UNRECOVERED_JUMPTABLE;
code_r0x000140a37a66:
  bVar36 = (char)UNRECOVERED_JUMPTABLE + (char)((ulonglong)UNRECOVERED_JUMPTABLE >> 8);
  UNRECOVERED_JUMPTABLE = (undefined1 (*) [16])(ulonglong)bVar36;
  cVar20 = (char)pauVar26 + *(char *)(longlong)(int)pauVar26;
  piVar28 = (int *)CONCAT71((int7)((ulonglong)pauVar26 >> 8),cVar20);
  _UNK_143397934 = iVar25;
  *(char *)((longlong)piVar28 + -0x73) = *(char *)((longlong)piVar28 + -0x73) + bVar36;
  *piVar28 = *piVar28 + 1;
  *(char *)piVar28 = (char)*piVar28 + cVar20;
  iVar25 = _UNK_143397934;
  goto code_r0x000140a37a6c;
code_r0x000140a37833:
  *(undefined8 *)((longlong)ppauVar73 + -8) = 0x140a37843;
  pdb_140e08f50((undefined1 *)((longlong)ppauVar73 + 0x100),pauVar42);
  unaff_R13 = (undefined1 (*) [16])((longlong)ppauVar73 + 0x60);
  *(undefined8 *)((longlong)ppauVar73 + -8) = 0x140a37853;
  pdb_140e08fa0(unaff_R13,pauVar42);
  fVar107 = *(float *)((longlong)ppauVar73 + 0x68) * _DAT_142e3c654;
  fVar95 = (float)*(undefined8 *)((longlong)ppauVar73 + 0x60) * _DAT_1430155a0;
  fVar101 = (float)((ulonglong)*(undefined8 *)((longlong)ppauVar73 + 0x60) >> 0x20) * _UNK_1430155a4
  ;
  uVar27 = *(undefined8 *)((longlong)ppauVar73 + 0x100);
  fVar91 = *(float *)((longlong)ppauVar73 + 0x108);
  *(undefined8 *)((longlong)ppauVar73 + -8) = 0x140a37898;
  pdb_140e08fa0((undefined1 *)((longlong)ppauVar73 + 0x100),pauVar42);
  *(ulonglong *)((longlong)ppauVar73 + 0x60) =
       CONCAT44((float)((ulonglong)uVar27 >> 0x20) + fVar101,(float)uVar27 + fVar95);
  *(float *)((longlong)ppauVar73 + 0x68) = fVar107 + fVar91;
  *(undefined8 *)((longlong)ppauVar73 + 0x6c) = *(undefined8 *)((longlong)ppauVar73 + 0x100);
  *(undefined4 *)((longlong)ppauVar73 + 0x74) = *(undefined4 *)((longlong)ppauVar73 + 0x108);
  param_3 = unaff_R12;
  if ((char)pauVar75 != '\x04') {
    param_3 = unaff_R13;
  }
  fVar101 = 0.0;
  in_XMM3_Dc = 0.0;
  in_XMM3_Dd = 0.0;
  *(undefined8 *)((longlong)ppauVar73 + -8) = 0x140a378e5;
  fVar95 = _DAT_142e36f3c;
  pdb_1419c14e0((undefined1 *)((longlong)ppauVar73 + 0x100),
                *(undefined8 *)((longlong)ppauVar73 + 0x200));
  iVar25 = *(int *)((longlong)ppauVar73 + 0x100);
  auVar84._8_8_ = 0;
  auVar84._0_8_ = *(ulonglong *)((longlong)ppauVar73 + 0x10c);
  auVar108._0_4_ = (iVar25 << 0x1f) >> 0x1f;
  auVar108._4_4_ = (iVar25 << 0x1f) >> 0x1f;
  auVar108._8_4_ = (iVar25 << 0x1f) >> 0x1f;
  auVar108._12_4_ = (iVar25 << 0x1f) >> 0x1f;
  if (iVar25 == 0) {
    unaff_XMM9_Da = 0.0;
  }
  else {
    unaff_XMM9_Da = *(float *)((longlong)ppauVar73 + 0x108);
  }
  unaff_XMM9_Dd = 0;
  unaff_XMM9_Dc = 0;
  unaff_XMM9_Db = 0.0;
  unaff_R12 = *(undefined1 (**) [16])((longlong)ppauVar73 + 0x40);
  unaff_XMM10 = auVar108 & auVar84;
  pauVar39 = pauVar42;
code_r0x000140a37929:
  unaff_R14 = (undefined1 (*) [16])(ulonglong)((byte)unaff_RDI < 2);
  *(undefined8 *)((longlong)ppauVar73 + -8) = 0x140a37941;
  pdb_140e08f50((undefined1 *)((longlong)ppauVar73 + 0x60),pauVar39);
  unaff_XMM9_Da = unaff_XMM9_Da - *(float *)((longlong)ppauVar73 + 0x60);
  in_XMM1._0_4_ = unaff_XMM10._0_4_ - (float)*(undefined8 *)((longlong)ppauVar73 + 100);
  in_XMM1._4_4_ =
       unaff_XMM10._4_4_ - (float)((ulonglong)*(undefined8 *)((longlong)ppauVar73 + 100) >> 0x20);
  in_XMM1._8_4_ = unaff_XMM10._8_4_ - 0.0;
  in_XMM1._12_4_ = unaff_XMM10._12_4_ - 0.0;
  *(undefined8 *)((longlong)ppauVar73 + -8) = 0x140a3795f;
  pdb_140e08f50((undefined1 *)((longlong)ppauVar73 + 0x60),pauVar39);
  fVar107 = (float)*(undefined8 *)((longlong)ppauVar73 + 100);
  fVar91 = (float)((ulonglong)*(undefined8 *)((longlong)ppauVar73 + 100) >> 0x20);
  auVar94._0_4_ =
       SQRT(fVar91 * fVar91 +
            *(float *)((longlong)ppauVar73 + 0x60) * *(float *)((longlong)ppauVar73 + 0x60) +
            fVar107 * fVar107) + *(float *)(&UNK_14303aa20 + (longlong)unaff_R14 * 4);
  auVar94._4_8_ = 0;
  in_XMM2._4_4_ = unaff_XMM9_Db;
  in_XMM2._0_4_ = unaff_XMM9_Da;
  in_XMM2._8_4_ = unaff_XMM9_Dc;
  in_XMM2._12_4_ = unaff_XMM9_Dd;
code_r0x000140a37996:
  in_XMM2._0_4_ = in_XMM2._0_4_ * unaff_XMM9_Da;
  unaff_XMM10 = in_XMM1;
code_r0x000140a3799f:
  auVar93._12_4_ = in_XMM1._12_4_ * unaff_XMM10._12_4_;
  fVar107 = in_XMM1._4_4_ * unaff_XMM10._4_4_ + in_XMM2._0_4_ + in_XMM1._0_4_ * unaff_XMM10._0_4_;
  fVar91 = auVar94._0_4_;
  in_AF = 0;
  pauVar42 = pauVar39;
  ppauVar46 = ppauVar73;
  if (fVar91 * fVar91 < fVar107) {
    auVar93._0_4_ = SQRT(fVar107);
    auVar93._4_4_ = auVar93._0_4_;
    auVar93._8_4_ = auVar93._12_4_;
    auVar109 = divps(unaff_XMM10,auVar93);
    unaff_XMM9_Da = (unaff_XMM9_Da / auVar93._0_4_) * fVar91;
    unaff_XMM10._0_4_ = auVar109._0_4_ * fVar91;
    unaff_XMM10._4_4_ = auVar109._4_4_ * fVar91;
    unaff_XMM10._8_4_ = auVar109._8_4_ * auVar94._8_4_;
    unaff_XMM10._12_4_ = auVar109._12_4_ * auVar94._8_4_;
  }
code_r0x000140a379d9:
  *(undefined8 *)((longlong)ppauVar46 + -8) = 0x140a379e6;
  pdb_140e08f50((undefined1 *)((longlong)ppauVar46 + 0x60),pauVar42);
  unaff_XMM9_Da = unaff_XMM9_Da + *(float *)((longlong)ppauVar46 + 0x60);
  unaff_XMM11_Da = *(float *)((longlong)ppauVar46 + 100) + unaff_XMM10._0_4_;
  auVar110._4_4_ = unaff_XMM10._4_4_;
  auVar110._0_4_ = auVar110._4_4_;
  auVar110._12_4_ = unaff_XMM10._12_4_;
  auVar110._8_4_ = auVar110._12_4_;
  unaff_XMM10._4_12_ = auVar110._4_12_;
  unaff_XMM10._0_4_ = auVar110._4_4_ + *(float *)((longlong)ppauVar46 + 0x68);
  *(int *)*unaff_R12 = (int)param_1;
  *(undefined8 *)((longlong)ppauVar46 + -8) = 0x140a37a16;
  pauVar39 = pauVar42;
  pdb_140e08f50((undefined1 *)((longlong)ppauVar46 + 0x60));
  in_XMM2 = ZEXT416(*(uint *)((longlong)ppauVar46 + 0x60));
  in_XMM0 = ZEXT416(*(uint *)((longlong)ppauVar46 + 100));
  in_XMM1 = ZEXT416(*(uint *)((longlong)ppauVar46 + 0x68));
code_r0x000140a37a28:
  uVar37 = (ulonglong)(byte)pauVar42[0x4d][0];
  UNRECOVERED_JUMPTABLE = (undefined1 (*) [16])&UNK_14303b648;
  ppauVar47 = ppauVar46;
code_r0x000140a37a36:
  pauVar26 = (undefined1 (*) [16])(longlong)*(int *)(*UNRECOVERED_JUMPTABLE + uVar37 * 4);
code_r0x000140a37a3a:
  bVar80 = CARRY8((ulonglong)pauVar26,(ulonglong)UNRECOVERED_JUMPTABLE);
  UNRECOVERED_JUMPTABLE = (undefined1 (*) [16])(*UNRECOVERED_JUMPTABLE + (longlong)*pauVar26);
  bVar79 = (longlong)UNRECOVERED_JUMPTABLE < 0;
  bVar81 = UNRECOVERED_JUMPTABLE == (undefined1 (*) [16])0x0;
  pauVar29 = UNRECOVERED_JUMPTABLE;
  ppauVar19 = ppauVar47;
  iVar25 = _UNK_143397934;
code_r0x000140a37a3d:
  ppauVar73 = ppauVar19;
  _UNK_143397936 = (undefined2)((uint)iVar25 >> 0x10);
  _UNK_143397934 = (undefined2)iVar25;
  fVar91 = unaff_XMM10._0_4_;
  uVar27 = (undefined8)in_ST2;
  uVar37 = (ulonglong)UNRECOVERED_JUMPTABLE & 0xff;
  in_R11 = (undefined1 (*) [16])(ulonglong)*(byte *)((longlong)ppauVar73 + 0x3a);
  uVar76 = *(uint *)((longlong)ppauVar73 + 0xfc);
  UNRECOVERED_JUMPTABLE = (undefined1 (*) [16])(ulonglong)uVar76;
  bVar36 = (byte)uVar76;
  uVar104 = (uint)unaff_RBP;
  cVar20 = (char)pauVar29;
  uVar35 = (undefined7)((ulonglong)pauVar29 >> 8);
  pauVar26 = pauVar29;
  ppauVar70 = ppauVar73;
  ppauVar68 = ppauVar73;
  ppauVar48 = ppauVar73;
  pauVar75 = unaff_RDI;
  pauVar77 = in_R11;
  _UNK_143397934 = iVar25;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
  switch(pauVar29) {
  case (undefined1 (*) [16])0x140a37a4c:
    ppauVar52 = ppauVar73;
    if ((uVar76 & 1) != 0) goto code_r0x000140a37a55;
    goto code_r0x000140a37ad5;
  case (undefined1 (*) [16])0x140a37a6c:
code_r0x000140a37a6c:
    fVar91 = unaff_XMM10._0_4_;
    pauVar39 = pauVar42 + 0x10;
    goto code_r0x000140a37a85;
  case (undefined1 (*) [16])0x140a37a75:
    pauVar39 = pauVar42 + 0x39;
code_r0x000140a37a85:
    fVar101 = in_XMM2._0_4_ - unaff_XMM9_Da;
    fVar95 = in_XMM0._0_4_ - unaff_XMM11_Da;
    fVar91 = in_XMM1._0_4_ - fVar91;
    fVar91 = SQRT(fVar91 * fVar91 + fVar95 * fVar95 + fVar101 * fVar101);
    _UNK_143397934 = iVar25;
    *(undefined4 *)(pauVar39[1] + 8) = 1;
    *(float *)(pauVar39[1] + 0xc) = fVar91;
    *(float *)pauVar39[2] = fVar91;
    *(undefined8 *)(pauVar39[2] + 4) = 0;
    *(ulonglong *)(pauVar39[2] + 0xc) = CONCAT44(unaff_XMM8_Db,unaff_XMM8_Da);
    *(float *)(pauVar39[3] + 4) = unaff_XMM7_Da;
    ppauVar52 = ppauVar73;
    unaff_RDI = pauVar75;
    if (((ulonglong)UNRECOVERED_JUMPTABLE & 1) == 0) {
code_r0x000140a37ad5:
      uVar74 = SUB84(param_1,0);
      puVar32 = *(undefined8 **)((longlong)ppauVar52 + 0x310);
      *(undefined4 *)puVar32[2] = *(undefined4 *)((longlong)puVar32 + 0x1c);
      unaff_RDI = (undefined1 (*) [16])*puVar32;
      lVar30 = *(longlong *)unaff_RDI[3];
      uVar27 = *(undefined8 *)unaff_RDI[4];
      if (lVar30 == *(longlong *)unaff_RDI[2]) {
        *(undefined8 *)((longlong)ppauVar52 + -8) = 0x140a37b00;
        pdb_142d7e980(unaff_RDI + 2);
        in_R11 = (undefined1 (*) [16])(ulonglong)*(byte *)((longlong)ppauVar52 + 0x3a);
      }
      lVar40 = *(longlong *)(unaff_RDI[2] + 8);
      *(undefined8 *)(lVar40 + lVar30 * 0x10) = uVar27;
      *(undefined1 *)(lVar40 + 8 + lVar30 * 0x10) = 0;
      unaff_R14 = (undefined1 (*) [16])(lVar30 + 1);
      *(undefined1 (**) [16])unaff_RDI[3] = unaff_R14;
      *(longlong *)unaff_RDI[4] = *(longlong *)unaff_RDI[4] + 1;
      unaff_R12 = *(undefined1 (**) [16])((longlong)ppauVar52 + 0x40);
      unaff_R13 = *(undefined1 (**) [16])((longlong)ppauVar52 + 0xe8);
      if (((ulonglong)in_R11 & 1) == 0) goto code_r0x000140a37cd3;
code_r0x000140a37b3c:
      fVar91 = 0.0;
      fVar95 = 0.0;
      fVar101 = 0.0;
      if (*(int *)unaff_R15[1] - 1U < 2) {
        puVar6 = (ulonglong *)**(undefined8 **)((longlong)ppauVar52 + 400);
        lVar30 = (*(undefined8 **)((longlong)ppauVar52 + 400))[1];
        in_XMM1._0_8_ = *puVar6;
        pauVar39 = (undefined1 (*) [16])0x0;
        UNRECOVERED_JUMPTABLE = (undefined1 (*) [16])(in_XMM1._0_8_ - *(ulonglong *)(lVar30 + 0x18))
        ;
        if (in_XMM1._0_8_ < *(ulonglong *)(lVar30 + 0x18)) {
          UNRECOVERED_JUMPTABLE = pauVar39;
        }
        pauVar26 = (undefined1 (*) [16])(in_XMM1._0_8_ - *(ulonglong *)(lVar30 + 0x38));
        if (in_XMM1._0_8_ < *(ulonglong *)(lVar30 + 0x38)) {
          pauVar26 = pauVar39;
        }
        in_R10 = *(undefined1 (**) [16])(lVar30 + 8);
        in_R9 = *(undefined1 (**) [16])(lVar30 + 0x30);
        pauVar75 = (undefined1 (*) [16])((longlong)in_R9 - (longlong)pauVar26);
        if (in_R9 < pauVar26) {
          pauVar75 = pauVar39;
        }
        pauVar77 = *(undefined1 (**) [16])(lVar30 + 0x10);
        pauVar29 = (undefined1 (*) [16])((longlong)pauVar77 - (longlong)UNRECOVERED_JUMPTABLE);
        if (pauVar77 < UNRECOVERED_JUMPTABLE) {
          pauVar29 = pauVar39;
        }
        unaff_RDI = *(undefined1 (**) [16])(lVar30 + 0x28);
        in_XMM1._0_8_ = *(ulonglong *)(lVar30 + 0x40);
        unaff_R13 = *(undefined1 (**) [16])((longlong)ppauVar52 + 0xe8);
        *puVar6 = (in_XMM1._0_8_ - (longlong)pauVar75) - (longlong)pauVar29;
        in_R11 = (undefined1 (*) [16])(ulonglong)*(byte *)((longlong)ppauVar52 + 0x3a);
        param_1 = (undefined1 (*) [16])(ulonglong)*(uint *)((longlong)ppauVar52 + 0x3c);
        param_3 = pauVar75;
        unaff_R14 = pauVar29;
        if (pauVar77 >= UNRECOVERED_JUMPTABLE &&
            (undefined1 (*) [16])((longlong)pauVar77 - (longlong)UNRECOVERED_JUMPTABLE) !=
            (undefined1 (*) [16])0x0 ||
            in_R9 >= pauVar26 &&
            (undefined1 (*) [16])((longlong)in_R9 - (longlong)pauVar26) != (undefined1 (*) [16])0x0)
        {
          param_3 = (undefined1 (*) [16])((longlong)pauVar75 * 0x10);
          unaff_RDI = unaff_RDI + (longlong)pauVar26;
          unaff_R14 = (undefined1 (*) [16])((longlong)pauVar29 * 0x10);
          pauVar39 = in_R10 + (longlong)UNRECOVERED_JUMPTABLE;
          if (pauVar77 < UNRECOVERED_JUMPTABLE) {
            pauVar39 = (undefined1 (*) [16])0x8;
          }
          in_R10 = pauVar39 + -1 + (longlong)pauVar29;
          pauVar39 = (undefined1 (*) [16])0x0;
          if (UNRECOVERED_JUMPTABLE < pauVar77) {
            pauVar39 = in_R10;
          }
          if (in_R9 < pauVar26) {
            unaff_RDI = (undefined1 (*) [16])0x8;
          }
          UNRECOVERED_JUMPTABLE = unaff_RDI + -1 + (longlong)pauVar75;
          if (in_R9 <= pauVar26) {
            UNRECOVERED_JUMPTABLE = pauVar39;
          }
          in_R11 = (undefined1 (*) [16])(ulonglong)*(byte *)((longlong)ppauVar52 + 0x3a);
          *puVar6 = in_XMM1._0_8_;
          uVar5 = *(undefined2 *)(*(longlong *)((longlong)ppauVar52 + 0x58) + 0x11f);
          uVar23 = (undefined1)((ushort)uVar5 >> 8);
          auVar109 = ZEXT416(CONCAT22((short)(CONCAT13(uVar23,CONCAT12(uVar23,uVar5)) >> 0x10),
                                      CONCAT11((char)uVar5,(char)uVar5)));
          auVar109 = pshuflw(auVar109,auVar109,0xd4);
          uVar76 = (auVar109._0_4_ << 0x1f) >> 0x1f & _UNK_14303aa30;
          uVar104 = (auVar109._4_4_ << 0x1f) >> 0x1f & _UNK_14303aa34;
          uVar90 = (auVar109._12_4_ << 0x1f) >> 0x1f & _UNK_14303aa3c;
          fVar95 = *(float *)(*(longlong *)((longlong)ppauVar52 + 0x58) + 0x108);
          fVar91 = fVar95 * _UNK_14303aa40;
          fVar95 = fVar95 * _UNK_14303aa44;
          fVar91 = (float)*(undefined8 *)(*UNRECOVERED_JUMPTABLE + 8) *
                   (float)(~uVar76 & (uint)fVar91 | (_DAT_142e37820 ^ (uint)fVar91) & uVar76) + 0.0;
          fVar95 = (float)((ulonglong)*(undefined8 *)(*UNRECOVERED_JUMPTABLE + 8) >> 0x20) *
                   (float)(~uVar104 & (uint)fVar95 | (_UNK_142e37824 ^ (uint)fVar95) & uVar104) +
                   0.0;
          fVar101 = (float)(~uVar90 & (uint)(_UNK_14303aa4c * 0.0) |
                           (_UNK_142e3782c ^ (uint)(_UNK_14303aa4c * 0.0)) & uVar90) * 0.0 + 0.0;
        }
      }
      unaff_R15 = *(undefined1 (**) [16])((longlong)ppauVar52 + 0x48);
      pauVar26 = *(undefined1 (**) [16])((longlong)ppauVar52 + 0x58);
      fVar91 = *(float *)(pauVar26[0x10] + 8) *
               (float)*(undefined8 *)(unaff_R15[0x17] + 8) * _DAT_14303aa50 + fVar91;
      fVar95 = *(float *)(pauVar26[0x10] + 8) *
               (float)((ulonglong)*(undefined8 *)(unaff_R15[0x17] + 8) >> 0x20) * _UNK_14303aa54 +
               fVar95;
      in_XMM1._0_8_ = CONCAT44(fVar95,fVar91);
      fVar101 = _UNK_14303aa5c * 0.0 * 0.0 + fVar101;
      in_XMM2._4_4_ = fVar95;
      in_XMM2._0_4_ = fVar95;
      in_XMM2._8_4_ = fVar101;
      in_XMM2._12_4_ = fVar101;
      in_XMM0 = ZEXT816(0);
      bVar79 = NAN(fVar91);
      unaff_R12 = *(undefined1 (**) [16])((longlong)ppauVar52 + 0x40);
      ppauVar73 = ppauVar52;
      ppauVar18 = ppauVar52;
      iVar25 = _UNK_143397934;
      if (fVar91 == 0.0) {
code_r0x000140a37cbe:
        ppauVar52 = ppauVar18;
        uVar74 = SUB84(param_1,0);
        ppauVar73 = ppauVar52;
        iVar25 = _UNK_143397934;
        if (!bVar79) {
          if ((in_XMM2._0_4_ == in_XMM0._0_4_) && (!NAN(in_XMM2._0_4_) && !NAN(in_XMM0._0_4_)))
          goto code_r0x000140a37cd3;
        }
      }
code_r0x000140a37d67:
      uVar76 = (uint)(in_XMM1._0_8_ >> 0x20);
      auVar85._0_4_ = -(uint)(_DAT_14303aa60 < (int)((uint)in_XMM1._0_8_ & _DAT_142e377e0));
      auVar85._4_4_ = -(uint)(_UNK_14303aa64 < (int)((uint)in_XMM1._0_8_ & _UNK_142e377e4));
      auVar85._8_4_ = -(uint)(_UNK_14303aa68 < (int)(uVar76 & _UNK_142e377e8));
      auVar85._12_4_ = -(uint)(_UNK_14303aa6c < (int)(uVar76 & _UNK_142e377ec));
      uVar74 = SUB84(param_1,0);
      *(undefined4 *)*unaff_R12 = uVar74;
      iVar24 = movmskpd((int)pauVar26,auVar85);
      ppauVar52 = ppauVar73;
      _UNK_143397934 = iVar25;
      if (iVar24 == 0) {
code_r0x000140a37d90:
        UNRECOVERED_JUMPTABLE = (undefined1 (*) [16])(ulonglong)(byte)pauVar42[0x4d][0];
code_r0x000140a37d9e:
        _UNK_143397934 = iVar25;
                    /* WARNING: Could not recover jumptable at 0x000140a37dac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        UNRECOVERED_JUMPTABLE =
             (undefined1 (*) [16])
             (*(code *)(&UNK_14303b660 +
                       *(int *)(&UNK_14303b660 + (longlong)UNRECOVERED_JUMPTABLE * 4)))
                       (&UNK_14303b660 +
                        *(int *)(&UNK_14303b660 + (longlong)UNRECOVERED_JUMPTABLE * 4));
        return UNRECOVERED_JUMPTABLE;
      }
code_r0x000140a37e99:
      **(undefined4 **)((longlong)ppauVar52 + 0xe0) = *(undefined4 *)((longlong)ppauVar52 + 0x54);
      lVar30 = *(longlong *)unaff_R13[3];
      unaff_R14 = *(undefined1 (**) [16])unaff_R13[4];
      if (lVar30 == *(longlong *)unaff_R13[2]) {
        *(undefined8 *)((longlong)ppauVar52 + -8) = 0x140a37ec1;
        pdb_142d7e980(unaff_R13 + 2);
        in_R11 = (undefined1 (*) [16])((ulonglong)in_R11 & 0xffffffff);
      }
      lVar40 = *(longlong *)(unaff_R13[2] + 8);
      *(undefined4 *)(lVar40 + lVar30 * 0x10) = 2;
      *(undefined1 (**) [16])(lVar40 + 8 + lVar30 * 0x10) = unaff_R14;
      unaff_RDI = (undefined1 (*) [16])(lVar30 + 1);
      *(undefined1 (**) [16])unaff_R13[3] = unaff_RDI;
      *(longlong *)unaff_R13[4] = *(longlong *)unaff_R13[4] + 1;
      if (*(int *)unaff_R15[1] != 3) goto code_r0x000140a37ef1;
code_r0x000140a37cde:
      puVar32 = *(undefined8 **)((longlong)ppauVar52 + 0x310);
      *(undefined4 *)puVar32[2] = *(undefined4 *)((longlong)puVar32 + 0x1c);
      unaff_RDI = (undefined1 (*) [16])*puVar32;
      lVar30 = *(longlong *)unaff_RDI[3];
      uVar27 = *(undefined8 *)unaff_RDI[4];
      if (lVar30 == *(longlong *)unaff_RDI[2]) {
        *(undefined8 *)((longlong)ppauVar52 + -8) = 0x140a37d09;
        pdb_142d7e980(unaff_RDI + 2);
      }
      lVar40 = *(longlong *)(unaff_RDI[2] + 8);
      *(undefined8 *)(lVar40 + lVar30 * 0x10) = uVar27;
      *(undefined1 *)(lVar40 + 8 + lVar30 * 0x10) = 1;
      unaff_R14 = (undefined1 (*) [16])(lVar30 + 1);
      *(undefined1 (**) [16])unaff_RDI[3] = unaff_R14;
      *(longlong *)unaff_RDI[4] = *(longlong *)unaff_RDI[4] + 1;
      *(undefined4 *)*unaff_R12 = uVar74;
      unaff_R15 = *(undefined1 (**) [16])((longlong)ppauVar52 + 0x48);
      if (3 < (byte)pauVar42[0x4d][0] - 2) {
        if ((code)pauVar42[0x4d][0] == (code)0x0) {
          unaff_R12 = pauVar42 + 0x10;
          pauVar26 = (undefined1 (*) [16])(ulonglong)*(uint *)(pauVar42[0x11] + 8);
          ppauVar48 = ppauVar52;
code_r0x000140a37d54:
          *(undefined4 *)(unaff_R12[1] + 8) = 0;
          bVar80 = (int)pauVar26 == 1;
          ppauVar19 = ppauVar48;
code_r0x000140a37d60:
          ppauVar52 = ppauVar19;
          pauVar39 = pauVar42;
          if (bVar80) {
code_r0x000140a37dd7:
            in_XMM0 = *(undefined1 (*) [16])(unaff_R12[1] + 0xc);
            uVar27 = *(undefined8 *)unaff_R12[3];
            *(undefined8 *)((longlong)ppauVar52 + 0x6c) = *(undefined8 *)(unaff_R12[2] + 8);
            *(undefined8 *)((longlong)ppauVar52 + 0x74) = uVar27;
            ppauVar49 = ppauVar52;
code_r0x000140a37de8:
            *(undefined1 (*) [16])((longlong)ppauVar49 + 0x60) = in_XMM0;
            unaff_RDI = *(undefined1 (**) [16])unaff_R12[1];
            ppauVar50 = ppauVar49;
            if (unaff_RDI == *(undefined1 (**) [16])*unaff_R12) {
              *(undefined8 *)((longlong)ppauVar49 + -8) = 0x140a37e00;
              pdb_142d8dbe0(unaff_R12);
            }
code_r0x000140a37e00:
            pauVar26 = *(undefined1 (**) [16])(*unaff_R12 + 8);
            UNRECOVERED_JUMPTABLE = (undefined1 (*) [16])((longlong)unaff_RDI * 0x1c);
            uVar27 = *(undefined8 *)((longlong)ppauVar50 + 0x74);
            pcVar9 = (code *)((longlong)pauVar26 + (longlong)unaff_RDI * 0x1c + 0xc);
            *(undefined8 *)pcVar9 = *(undefined8 *)((longlong)ppauVar50 + 0x6c);
            *(undefined8 *)(pcVar9 + 8) = uVar27;
            pauVar42 = pauVar39;
            ppauVar51 = ppauVar50;
            pauVar75 = unaff_RDI;
code_r0x000140a37e1a:
            uVar27 = *(undefined8 *)((longlong)ppauVar51 + 0x68);
            *(undefined8 *)(*UNRECOVERED_JUMPTABLE + (longlong)*pauVar26) =
                 *(undefined8 *)((longlong)ppauVar51 + 0x60);
            *(undefined8 *)(*UNRECOVERED_JUMPTABLE + (longlong)*pauVar26 + 8) = uVar27;
            unaff_RDI = (undefined1 (*) [16])(*pauVar75 + 1);
            pauVar39 = pauVar42;
            ppauVar52 = ppauVar51;
code_r0x000140a37e26:
            *(undefined1 (**) [16])unaff_R12[1] = unaff_RDI;
            pauVar42 = pauVar39;
          }
        }
        else {
          unaff_R12 = (undefined1 (*) [16])(pauVar42[0x1b] + 8);
          iVar25 = *(int *)pauVar42[0x1d];
          *(undefined4 *)pauVar42[0x1d] = 0;
          pauVar39 = pauVar42;
          if (iVar25 == 1) goto code_r0x000140a37dd7;
        }
      }
      pauVar26 = *(undefined1 (**) [16])((longlong)ppauVar52 + 0xf0);
      ppauVar73 = ppauVar52;
      iVar25 = _UNK_143397934;
code_r0x000140a37e33:
      _UNK_143397934 = iVar25;
      *(undefined4 *)(*pauVar26 + 8) = 1000000000;
      unaff_R12 = *(undefined1 (**) [16])((longlong)ppauVar73 + 0x40);
      ppauVar53 = ppauVar73;
    }
    else {
code_r0x000140a37a55:
      uVar74 = SUB84(param_1,0);
      unaff_R13 = *(undefined1 (**) [16])((longlong)ppauVar52 + 0xe8);
      if (((ulonglong)in_R11 & 1) != 0) goto code_r0x000140a37b3c;
code_r0x000140a37cd3:
      if (*(int *)unaff_R15[1] == 3) goto code_r0x000140a37cde;
code_r0x000140a37ef1:
      *(undefined4 *)*unaff_R12 = uVar74;
      ppauVar53 = ppauVar52;
      if (3 < (byte)pauVar42[0x4d][0] - 2) {
        lVar30 = 0x100;
        if ((code)pauVar42[0x4d][0] != (code)0x0) {
          lVar30 = 0x1b8;
        }
        bVar36 = (byte)in_R11;
        in_R11 = (undefined1 (*) [16])CONCAT71((int7)((ulonglong)in_R11 >> 8),~bVar36);
        if ((pauVar42[1][lVar30 + 8] & ~bVar36) != 0) goto code_r0x000140a37cde;
      }
    }
    unaff_XMM8_Da = 0.0;
    unaff_XMM8_Db = 0.0;
    unaff_XMM8_Dd = 0.0;
    unaff_XMM7_Da = 0.0;
    if (*(uint *)(unaff_R15[1] + 8) < 3) {
      puVar6 = (ulonglong *)**(undefined8 **)((longlong)ppauVar53 + 400);
      lVar30 = (*(undefined8 **)((longlong)ppauVar53 + 400))[1];
      in_XMM1._0_8_ = *puVar6;
      pauVar39 = (undefined1 (*) [16])0x0;
      UNRECOVERED_JUMPTABLE = (undefined1 (*) [16])(in_XMM1._0_8_ - *(ulonglong *)(lVar30 + 0x18));
      if (in_XMM1._0_8_ < *(ulonglong *)(lVar30 + 0x18)) {
        UNRECOVERED_JUMPTABLE = pauVar39;
      }
      pauVar26 = (undefined1 (*) [16])(in_XMM1._0_8_ - *(ulonglong *)(lVar30 + 0x38));
      if (in_XMM1._0_8_ < *(ulonglong *)(lVar30 + 0x38)) {
        pauVar26 = pauVar39;
      }
      in_R10 = *(undefined1 (**) [16])(lVar30 + 8);
      in_R9 = *(undefined1 (**) [16])(lVar30 + 0x30);
      pauVar75 = (undefined1 (*) [16])((longlong)in_R9 - (longlong)pauVar26);
      if (in_R9 < pauVar26) {
        pauVar75 = pauVar39;
      }
      pauVar77 = *(undefined1 (**) [16])(lVar30 + 0x10);
      pauVar29 = (undefined1 (*) [16])((longlong)pauVar77 - (longlong)UNRECOVERED_JUMPTABLE);
      if (pauVar77 < UNRECOVERED_JUMPTABLE) {
        pauVar29 = pauVar39;
      }
      unaff_RDI = *(undefined1 (**) [16])(lVar30 + 0x28);
      in_R11 = *(undefined1 (**) [16])(lVar30 + 0x40);
      unaff_R12 = *(undefined1 (**) [16])((longlong)ppauVar53 + 0x40);
      *puVar6 = (ulonglong)((longlong)in_R11 + (-(longlong)pauVar29 - (longlong)pauVar75));
      unaff_R13 = *(undefined1 (**) [16])((longlong)ppauVar53 + 0xe8);
      bVar36 = *(byte *)((longlong)ppauVar53 + 0x3b);
      param_3 = pauVar75;
      unaff_R14 = pauVar29;
      if (pauVar77 >= UNRECOVERED_JUMPTABLE &&
          (undefined1 (*) [16])((longlong)pauVar77 - (longlong)UNRECOVERED_JUMPTABLE) !=
          (undefined1 (*) [16])0x0 ||
          in_R9 >= pauVar26 &&
          (undefined1 (*) [16])((longlong)in_R9 - (longlong)pauVar26) != (undefined1 (*) [16])0x0) {
        param_3 = (undefined1 (*) [16])((longlong)pauVar75 * 0x10);
        unaff_RDI = unaff_RDI + (longlong)pauVar26;
        unaff_R14 = (undefined1 (*) [16])((longlong)pauVar29 * 0x10);
        pauVar39 = in_R10 + (longlong)UNRECOVERED_JUMPTABLE;
        if (pauVar77 < UNRECOVERED_JUMPTABLE) {
          pauVar39 = (undefined1 (*) [16])0x8;
        }
        in_R10 = pauVar39 + -1 + (longlong)pauVar29;
        pauVar39 = (undefined1 (*) [16])0x0;
        if (UNRECOVERED_JUMPTABLE < pauVar77) {
          pauVar39 = in_R10;
        }
        if (in_R9 < pauVar26) {
          unaff_RDI = (undefined1 (*) [16])0x8;
        }
        UNRECOVERED_JUMPTABLE = unaff_RDI + -1 + (longlong)pauVar75;
        if (in_R9 <= pauVar26) {
          UNRECOVERED_JUMPTABLE = pauVar39;
        }
        *puVar6 = (ulonglong)in_R11;
        *(undefined8 *)((longlong)ppauVar53 + -8) = 0x140a38004;
        pdb_140df4520((undefined1 *)((longlong)ppauVar53 + 0x60),*UNRECOVERED_JUMPTABLE + 8);
        fVar91 = *(float *)(*(longlong *)((longlong)ppauVar53 + 0x58) + 0x10c);
        fVar95 = *(float *)((longlong)ppauVar53 + 0x60) * _DAT_1430155b0 * fVar91;
        fVar101 = fVar91 * (float)*(undefined8 *)((longlong)ppauVar53 + 100) * _UNK_14303aa70;
        fVar91 = fVar91 * (float)((ulonglong)*(undefined8 *)((longlong)ppauVar53 + 100) >> 0x20) *
                          _UNK_14303aa74;
        fVar107 = _UNK_14303aa7c * 0.0 * 0.0;
        if (((code)pauVar42[0x4d][0] == (code)0x4) || ((code)pauVar42[0x4d][0] == (code)0x1)) {
          fVar95 = fVar95 * _DAT_142e36f50;
          fVar101 = fVar101 * _DAT_142e36f60;
          fVar91 = fVar91 * _UNK_142e36f64;
          fVar107 = fVar107 * _UNK_142e36f6c;
        }
        unaff_XMM7_Da = fVar95 + 0.0;
        unaff_XMM8_Da = fVar101 + 0.0;
        unaff_XMM8_Db = fVar91 + 0.0;
        unaff_XMM8_Dd = fVar107 + 0.0;
      }
      cVar22 = (code)pauVar42[0x4d][0];
    }
    else {
      bVar36 = *(byte *)((longlong)ppauVar53 + 0x3b);
      cVar22 = (code)pauVar42[0x4d][0];
      unaff_XMM7_Da = 0.0;
    }
    unaff_RBP = (undefined1 (*) [16])(ulonglong)bVar36;
    unaff_XMM9_Da = _DAT_142e36f28;
    if ((byte)((char)cVar22 - 1U) < 4) {
      unaff_XMM9_Da = *(float *)(&UNK_14303b560 + (ulonglong)(byte)((char)cVar22 - 1U) * 4);
    }
    param_1 = *(undefined1 (**) [16])((longlong)ppauVar53 + 0x48);
    *(undefined8 *)((longlong)ppauVar53 + -8) = 0x140a380b6;
    pdb_140df4520((undefined1 *)((longlong)ppauVar53 + 0x60));
    uVar27 = (undefined8)in_ST2;
    in_XMM0 = ZEXT416(*(uint *)((longlong)ppauVar53 + 100));
code_r0x000140a380bc:
    auVar86._4_12_ = in_XMM0._4_12_;
    auVar86._0_4_ = in_XMM0._0_4_ * unaff_XMM9_Da;
    uVar41 = auVar86._0_8_;
    in_XMM1 = ZEXT416((uint)(*(float *)((longlong)ppauVar53 + 0x68) * unaff_XMM9_Da));
    fVar91 = *(float *)((longlong)ppauVar53 + 0x60);
    ppauVar49 = ppauVar53;
code_r0x000140a380d2:
    fVar95 = *(float *)(*(longlong *)((longlong)ppauVar49 + 0x58) + 0x10c);
    fVar101 = 0.0;
    in_XMM3_Dc = 0.0;
    in_XMM3_Dd = 0.0;
    in_XMM1._0_4_ = in_XMM1._0_4_ * fVar95;
    unaff_XMM7_Db = (float)uVar41 * fVar95 + unaff_XMM8_Da;
    unaff_XMM7_Dd = (float)((ulonglong)uVar41 >> 0x20);
    ppauVar70 = ppauVar49;
    pauVar77 = in_R11;
code_r0x000140a380ef:
    auVar87._4_4_ = unaff_XMM8_Db;
    auVar87._0_4_ = unaff_XMM8_Db;
    auVar87._8_4_ = unaff_XMM8_Dd;
    auVar87._12_4_ = unaff_XMM8_Dd;
    in_XMM0._4_12_ = auVar87._4_12_;
    in_XMM0._0_4_ = unaff_XMM8_Db + in_XMM1._0_4_;
    fVar107 = unaff_XMM9_Da * *(float *)(param_1[0x16] + 8) * fVar95;
    unaff_XMM9_Da = fVar95 * fVar91 * unaff_XMM9_Da + unaff_XMM7_Da;
    unaff_XMM9_Db = fVar107 + unaff_XMM7_Db;
    fVar91 = fVar101 * fVar101 * 0.0 + unaff_XMM7_Dd;
    in_XMM1._4_4_ = unaff_XMM9_Db;
    in_XMM1._0_4_ = unaff_XMM9_Db;
    in_XMM1._8_4_ = fVar91;
    in_XMM1._12_4_ = fVar91;
    in_XMM2 = ZEXT816(0);
    ppauVar54 = ppauVar70;
    in_R11 = pauVar77;
    if ((((unaff_XMM9_Da == 0.0) && (unaff_XMM9_Db == 0.0)) && (!NAN(unaff_XMM9_Db))) &&
       ((in_XMM0._0_4_ == 0.0 && (!NAN(in_XMM0._0_4_))))) goto code_r0x000140a38260;
code_r0x000140a3813a:
    pauVar39 = (undefined1 (*) [16])(ulonglong)(uint)ABS(unaff_XMM9_Da);
    pauVar26 = (undefined1 (*) [16])(ulonglong)((in_XMM1._0_4_ & 0x7fffffff) < 0x7f800000);
code_r0x000140a38156:
    UNRECOVERED_JUMPTABLE = (undefined1 (*) [16])(ulonglong)(in_XMM0._0_4_ & 0x7fffffff);
    ppauVar55 = ppauVar54;
code_r0x000140a38160:
    bVar78 = SBORROW4((int)UNRECOVERED_JUMPTABLE,0x7f800000);
    bVar79 = (int)UNRECOVERED_JUMPTABLE + -0x7f800000 < 0;
    ppauVar70 = ppauVar55;
    pauVar77 = in_R11;
code_r0x000140a38166:
    cVar20 = bVar78 != bVar79;
    if ((0x7f7fffff < (int)pauVar39) ||
       (pauVar39 = pauVar42, ppauVar56 = ppauVar70, in_R11 = pauVar77, (char)pauVar26 == '\0'))
    goto code_r0x000140a38260;
code_r0x000140a3817d:
    bVar81 = cVar20 == '\0';
    ppauVar45 = ppauVar56;
    pauVar77 = in_R11;
code_r0x000140a3817f:
    ppauVar70 = ppauVar45;
    pauVar42 = pauVar39;
    ppauVar73 = ppauVar70;
    in_R11 = pauVar77;
    if (bVar81) goto code_r0x000140a38260;
code_r0x000140a38185:
    *(undefined4 *)*unaff_R12 = *(undefined4 *)((longlong)ppauVar73 + 0x3c);
    *(ulonglong *)((longlong)ppauVar73 + 0x60) = CONCAT44(unaff_XMM9_Db,unaff_XMM9_Da);
    pauVar39 = pauVar42;
    ppauVar57 = ppauVar73;
code_r0x000140a38194:
    *(int *)((longlong)ppauVar57 + 0x68) = in_XMM0._0_4_;
    pauVar42 = pauVar39;
    ppauVar70 = ppauVar57;
    pauVar77 = in_R11;
    iVar25 = _UNK_143397934;
code_r0x000140a3819a:
    _UNK_143397936 = (undefined2)((uint)iVar25 >> 0x10);
    _UNK_143397934 = (undefined2)iVar25;
    pauVar26 = (undefined1 (*) [16])&UNK_143397930;
    pauVar39 = (undefined1 (*) [16])&UNK_14303b678;
    uVar37 = (ulonglong)*(int *)(&UNK_14303b678 + (ulonglong)(byte)pauVar42[0x4d][0] * 4);
    bVar79 = 0xfffffffebcfc4987 < uVar37;
    UNRECOVERED_JUMPTABLE = (undefined1 (*) [16])(&UNK_14303b678 + uVar37);
    bVar36 = (byte)UNRECOVERED_JUMPTABLE;
    pauVar29 = pauVar26;
    ppauVar73 = ppauVar70;
    pauVar75 = unaff_RDI;
    in_R11 = pauVar77;
    _UNK_143397934 = iVar25;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(pauVar42[0x4d][0]) {
    case 0:
      UNRECOVERED_JUMPTABLE = pauVar42 + 0x10;
      break;
    case 1:
      UNRECOVERED_JUMPTABLE = (undefined1 (*) [16])(pauVar42[0x1b] + 8);
      break;
    case 2:
      UNRECOVERED_JUMPTABLE = pauVar42 + 0x27;
      pauVar26 = (undefined1 (*) [16])&UNK_143397968;
      break;
    case 3:
      UNRECOVERED_JUMPTABLE = pauVar42 + 0x2f;
      pauVar26 = (undefined1 (*) [16])&UNK_1433979d8;
      break;
    case 4:
      UNRECOVERED_JUMPTABLE = pauVar42 + 0x39;
      break;
    case 5:
      UNRECOVERED_JUMPTABLE = (undefined1 (*) [16])(pauVar42[0x44] + 8);
      pauVar26 = (undefined1 (*) [16])&UNK_1433979a0;
      break;
    case 6:
      _UNK_1433978bd = CONCAT31(_UNK_1433978be,UNK_1433978bd + bVar36);
      ppauVar62 = ppauVar70;
      goto code_r0x000140a3880b;
    case 7:
      goto code_r0x000140a3886d;
    case 8:
      goto code_r0x000140a388ab;
    case 9:
      goto code_r0x000140a38857;
    case 10:
      UNRECOVERED_JUMPTABLE =
           (undefined1 (*) [16])
           CONCAT71((int7)((ulonglong)UNRECOVERED_JUMPTABLE >> 8),bVar36 + UNK_143397993);
      puVar34 = &UNK_1433979b1;
      goto code_r0x000140a38830;
    case 0xb:
      pauVar42 = (undefined1 (*) [16])
                 CONCAT71((int7)((ulonglong)pauVar42 >> 8),
                          (char)pauVar42 + (char)((ulonglong)UNRECOVERED_JUMPTABLE >> 8));
      goto code_r0x000140a3888c;
    case 0xc:
      goto code_r0x000140a38b32;
    case 0xd:
      UNK_143397930 = UNK_143397930 + '0';
code_r0x000140a38af4:
      _UNK_143397934 = iVar25;
      pauVar26[-8][0xb] = pauVar26[-8][0xb] + (char)UNRECOVERED_JUMPTABLE;
      pauVar75 = unaff_RDI;
      goto code_r0x000140a38ae7;
    case 0xe:
      goto code_r0x000140a38b04;
    case 0xf:
      goto code_r0x000140a38b14;
    case 0x10:
      UNK_1433978bb = UNK_1433978bb ^ bVar36;
      iVar25 = CONCAT22(_UNK_143397932,CONCAT11(UNK_143397931,UNK_143397930)) + 0x43397930;
      UNK_143397930 = (byte)iVar25;
      UNK_143397931 = (undefined1)((uint)iVar25 >> 8);
      _UNK_143397932 = (short)((uint)iVar25 >> 0x10);
      (*unaff_RDI)[0] = (*unaff_RDI)[0] + bVar36;
      pauVar26 = (undefined1 (*) [16])0x7930;
      cRam0000000000007930 = cRam0000000000007930 + '0';
      goto code_r0x000140a38b0a;
    case 0x11:
      iVar25 = CONCAT22(_UNK_143397932,CONCAT11(UNK_143397931,UNK_143397930)) + 0x43397930;
      UNK_143397930 = (byte)iVar25;
      UNK_143397931 = (undefined1)((uint)iVar25 >> 8);
      _UNK_143397932 = (short)((uint)iVar25 >> 0x10);
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0x12:
code_r0x000140a38d75:
      auVar94 = in_XMM1._4_12_;
      auVar89._0_4_ = (float)(int)uVar27;
      auVar89._8_8_ = in_XMM0._8_8_;
      auVar89._4_4_ = (float)(int)((ulonglong)uVar27 >> 0x20);
      in_XMM0 = auVar89;
code_r0x000140a38d78:
      in_XMM1._0_4_ = (float)*(uint *)(*pauVar26 + 4);
      in_XMM1._4_12_ = auVar94;
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
      pauVar75 = (undefined1 (*) [16])0x43397930;
      iVar25 = (int)unaff_RDI + *(int *)((ulonglong)unaff_RDI & 0xffffffff);
      pbVar3 = &UNK_14303b636 + uVar37;
      bVar36 = *pbVar3;
      bVar21 = (byte)iVar25;
      *pbVar3 = *pbVar3 + bVar21;
      pauVar26 = (undefined1 (*) [16])
                 (ulonglong)CONCAT31((int3)((uint)iVar25 >> 8),(bVar21 - 3) - CARRY1(bVar36,bVar21))
      ;
      goto code_r0x000140a38dd3;
    case 0x18:
    case 0x19:
code_r0x000140a392e6:
      _UNK_143397936 = (undefined2)((uint)iVar25 >> 0x10);
      _UNK_143397934 = (undefined2)iVar25;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0x1a:
      pauVar26 = (undefined1 (*) [16])CONCAT71(0x1433979,UNK_143397930 + '0');
      (&UNK_14303b603)[uVar37] = (&UNK_14303b603)[uVar37] + bVar36;
      *(undefined1 (**) [16])((longlong)ppauVar70 + -8) = param_1;
      (*pauVar26)[1] = (*pauVar26)[1] ^ bVar36;
      pcVar9 = (code *)(pauVar26[-1] + 0xf);
      *pcVar9 = (code)((byte)*pcVar9 >> 1 | (char)*pcVar9 << 7);
      puVar32 = (undefined8 *)((longlong)ppauVar70 + -0x10);
      *(undefined1 (**) [16])((longlong)ppauVar70 + -0x10) = unaff_RBP;
      cVar20 = '\x15';
      do {
        unaff_RBP = (undefined1 (*) [16])(unaff_RBP[-1] + 8);
        puVar32 = puVar32 + -1;
        *puVar32 = *(undefined8 *)*unaff_RBP;
        cVar20 = cVar20 + -1;
      } while ('\0' < cVar20);
      *(undefined1 **)((longlong)ppauVar70 + -0xc0) = (undefined1 *)((longlong)ppauVar70 + -0x10);
      *(byte *)((longlong)ppauVar70 + -0x85) = *(byte *)((longlong)ppauVar70 + -0x85) & bVar36;
      *(char *)((longlong)ppauVar70 + 0x21) = *(char *)((longlong)ppauVar70 + 0x21) - (char)param_3;
      goto code_r0x000140a39372;
    case 0x1b:
      pauVar39 = (undefined1 (*) [16])CONCAT62(0x14303,CONCAT11((char)pauVar42 + -0x4a,0x78));
      goto code_r0x000140a39467;
    case 0x1c:
code_r0x000140a393f3:
      in_R10 = *(undefined1 (**) [16])UNRECOVERED_JUMPTABLE[1];
      _UNK_143397934 = iVar25;
      *(int *)*in_R10 = (int)in_R9;
      pauVar26 = *(undefined1 (**) [16])*UNRECOVERED_JUMPTABLE;
      *(int *)*pauVar26 = in_XMM0._0_4_;
      *(undefined4 *)((longlong)ppauVar70 + 0x30) =
           *(undefined4 *)(param_3[5] + 4 + (longlong)pauVar39);
      goto code_r0x000140a3940b;
    case 0x1d:
code_r0x000140a39a57:
      *(undefined1 (**) [16])((longlong)ppauVar70 + -8) = pauVar75;
      ppauVar70 = (undefined1 (**) [16])((longlong)ppauVar70 + -0x28);
      _UNK_143397934 = iVar25;
code_r0x000140a39a5c:
      unaff_RBP = pauVar39 + 5;
      pauVar39 = (undefined1 (*) [16])0x18;
      iVar25 = _UNK_143397934;
    case 0x21:
      param_3 = (undefined1 (*) [16])0x8;
      UNRECOVERED_JUMPTABLE = *(undefined1 (**) [16])unaff_RBP[-1];
      goto code_r0x000140a39a6f;
    case 0x1e:
      uVar23 = in(0xb678);
      pbVar3 = (byte *)(CONCAT71(0x1433979,uVar23) + -0x73);
      *pbVar3 = *pbVar3 & bVar36;
      ppauVar73 = (undefined1 (**) [16])((longlong)ppauVar70 + -8);
      *(undefined8 *)((longlong)ppauVar70 + -8) = 0x50;
      iVar25 = _UNK_143397934;
      goto code_r0x000140a39a87;
    case 0x1f:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0x20:
      goto code_r0x000140a39a7c;
    case 0x22:
      *(undefined8 *)((longlong)ppauVar70 + -8) = 0x140a39a9e;
      pauVar26 = (undefined1 (*) [16])(*pcRam0000000163fdfc78)();
      iVar25 = _UNK_143397934;
      goto code_r0x000140a39a9e;
    default:
      return pauVar26;
    }
    *(undefined1 (**) [16])((longlong)ppauVar70 + 0x20) = pauVar42;
    in_R9 = (undefined1 (*) [16])((longlong)ppauVar70 + 0x1e0);
    pcVar9 = *(code **)(pauVar26[2] + 8);
    *(undefined8 *)((longlong)ppauVar70 + -8) = 0x140a38219;
    (*pcVar9)(UNRECOVERED_JUMPTABLE);
    **(undefined4 **)((longlong)ppauVar70 + 0xe0) = *(undefined4 *)((longlong)ppauVar70 + 0x54);
    lVar30 = *(longlong *)unaff_R13[3];
    uVar27 = *(undefined8 *)unaff_R13[4];
    if (lVar30 == *(longlong *)unaff_R13[2]) {
      *(undefined8 *)((longlong)ppauVar70 + -8) = 0x140a3823e;
      pdb_142d7e980(unaff_R13 + 2);
    }
    lVar40 = *(longlong *)(unaff_R13[2] + 8);
    *(undefined4 *)(lVar40 + lVar30 * 0x10) = 0;
    *(undefined8 *)(lVar40 + 8 + lVar30 * 0x10) = uVar27;
    *(longlong *)unaff_R13[3] = lVar30 + 1;
    *(longlong *)unaff_R13[4] = *(longlong *)unaff_R13[4] + 1;
code_r0x000140a38260:
    fVar91 = *(float *)param_1[0x17];
    in_XMM1 = ZEXT416((uint)fVar91);
    uVar76 = *(uint *)((longlong)ppauVar70 + 0x3c);
    param_1 = (undefined1 (*) [16])(ulonglong)uVar76;
    pauVar39 = pauVar42;
    if (fVar91 == 0.0) {
code_r0x000140a382d2:
      if ((char)unaff_RBP == '\x05') goto code_r0x000140a382dc;
code_r0x000140a384ce:
      *(uint *)*unaff_R12 = uVar76;
      pauVar42[0x4d][0] = *(code *)(*(longlong *)((longlong)ppauVar70 + 0x198) + 0xd4);
    }
    else {
      cVar22 = (code)pauVar42[0x4d][0];
      if ((1 < (byte)cVar22) && (cVar22 != (code)0x4)) {
        if (cVar22 == (code)0x5) {
          in_XMM1 = ZEXT416((uint)fVar91 & _DAT_142e37820) | _DAT_142e3c640;
          fVar91 = in_XMM1._0_4_;
          iVar25 = 0x7fffffff;
          if (fVar91 <= _DAT_142e382cc) {
            iVar25 = (int)fVar91;
          }
          if (NAN(fVar91)) {
            iVar25 = 0;
          }
          iVar25 = *(int *)(pauVar42[0x48] + 4) - iVar25;
          if (iVar25 < 1) {
            iVar25 = 0;
          }
          *(uint *)*unaff_R12 = uVar76;
          *(int *)(pauVar42[0x48] + 4) = iVar25;
        }
        goto code_r0x000140a382d2;
      }
      uVar104 = _DAT_142e377e0 & (uint)fVar91;
      *(uint *)*unaff_R12 = uVar76;
      in_XMM1 = ZEXT416((uint)(fVar91 * _DAT_142e36f38));
      param_3 = (undefined1 (*) [16])((longlong)ppauVar70 + 0x180);
      *(undefined8 *)((longlong)ppauVar70 + -8) = 0x140a38477;
      pdb_140a36630(pauVar42);
      **(undefined4 **)((longlong)ppauVar70 + 0xe0) = *(undefined4 *)((longlong)ppauVar70 + 0x54);
      lVar30 = *(longlong *)unaff_R13[3];
      uVar27 = *(undefined8 *)unaff_R13[4];
      if (lVar30 == *(longlong *)unaff_R13[2]) {
        *(undefined8 *)((longlong)ppauVar70 + -8) = 0x140a3849c;
        pdb_142d7e980(unaff_R13 + 2);
      }
      lVar40 = *(longlong *)(unaff_R13[2] + 8);
      lVar38 = lVar30 * 0x10;
      *(undefined4 *)(lVar40 + lVar38) = 1;
      *(uint *)(lVar40 + 4 + lVar38) = uVar104;
      *(undefined8 *)(lVar40 + 8 + lVar38) = uVar27;
      *(longlong *)unaff_R13[3] = lVar30 + 1;
      *(longlong *)unaff_R13[4] = *(longlong *)unaff_R13[4] + 1;
      if ((char)unaff_RBP != '\x05') goto code_r0x000140a384ce;
code_r0x000140a382dc:
      in_R11 = *(undefined1 (**) [16])((longlong)ppauVar70 + 0x1b8);
      in_R10 = *(undefined1 (**) [16])((longlong)ppauVar70 + 0x1c0);
      lVar30 = *(longlong *)(in_R10[0xf] + 8);
      param_3 = (undefined1 (*) [16])(lVar30 + *(longlong *)in_R10[0x10] * 4);
      in_R9 = (undefined1 (*) [16])(ulonglong)(byte)in_R10[0x10][8];
      *(undefined1 *)((longlong)ppauVar70 + 0xc0) = in_R10[0x10][8];
      *(longlong *)((longlong)ppauVar70 + 0x80) = lVar30;
      *(undefined1 (**) [16])((longlong)ppauVar70 + 0x88) = param_3;
      *(undefined8 *)((longlong)ppauVar70 + 0x90) = 8;
      *(undefined8 *)((longlong)ppauVar70 + 0x98) = 0;
      *(undefined8 *)((longlong)ppauVar70 + 0xa0) = 8;
      *(undefined8 *)((longlong)ppauVar70 + 0xa8) = 0;
      *(undefined8 *)((longlong)ppauVar70 + 0xb0) = 0;
      *(undefined8 *)((longlong)ppauVar70 + 0xb8) = 0;
      *(undefined1 (**) [16])((longlong)ppauVar70 + 0x60) = in_R11;
      *(undefined1 **)((longlong)ppauVar70 + 0x68) = in_R11[0x19] + 8;
      *(undefined1 **)((longlong)ppauVar70 + 0x70) = in_R11[0xf] + 8;
      *(undefined1 (**) [16])((longlong)ppauVar70 + 0x78) = in_R10;
      uVar74 = *(undefined4 *)(pauVar42[0x48] + 4);
      *(undefined8 *)((longlong)ppauVar70 + -8) = 0x140a3838b;
      lVar30 = pdb_1415235e0((undefined1 *)((longlong)ppauVar70 + 0x60),uVar74);
      pauVar77 = in_R11;
      if (lVar30 == 0) {
        uVar76 = *(uint *)((longlong)ppauVar70 + 0xbc);
        uVar37 = (ulonglong)uVar76;
        uVar104 = *(uint *)((longlong)ppauVar70 + 0xb8);
        in_R9 = (undefined1 (*) [16])(ulonglong)uVar104;
        param_3 = *(undefined1 (**) [16])((longlong)ppauVar70 + 0x88);
        if (*(char *)((longlong)ppauVar70 + 0xc0) == '\0') {
          if (uVar76 == uVar104) {
            pauVar77 = *(undefined1 (**) [16])((longlong)ppauVar70 + 0x80);
            do {
              if (pauVar77 == param_3) goto code_r0x000140a38800;
              in_R11 = (undefined1 (*) [16])(*pauVar77 + 4);
              *(undefined1 (**) [16])((longlong)ppauVar70 + 0x80) = in_R11;
              pcVar9 = (code *)*pauVar77;
              in_R9 = *(undefined1 (**) [16])(*(longlong *)((longlong)ppauVar70 + 0x70) + 8);
              in_R10 = *(undefined1 (**) [16])(in_R9[(ulonglong)*(uint *)pcVar9 * 10 + 5] + 8);
              param_1 = (undefined1 (*) [16])(ulonglong)*(uint *)((longlong)ppauVar70 + 0x3c);
              pauVar77 = in_R11;
            } while (in_R10 == (undefined1 (*) [16])0x0);
            in_R9 = in_R9 + (ulonglong)*(uint *)pcVar9 * 10;
            lVar30 = *(longlong *)(*(longlong *)((longlong)ppauVar70 + 0x68) + 8);
            uVar31 = *(ulonglong *)(*(longlong *)((longlong)ppauVar70 + 0x78) + 0x110);
            uVar37 = 0;
            if (uVar31 < *(ulonglong *)(lVar30 + 0x40 + (ulonglong)*(uint *)(in_R9[9] + 4) * 0x48))
            {
              lVar30 = lVar30 + (ulonglong)*(uint *)(in_R9[9] + 4) * 0x48;
              uVar31 = *(ulonglong *)(*(longlong *)(lVar30 + 0x38) + uVar31 * 8);
              if (uVar31 == 0) goto code_r0x000140a385d4;
              lVar30 = *(longlong *)(*(longlong *)(lVar30 + 0x18) + 0x10 + ~uVar31 * 0x30);
            }
            else {
code_r0x000140a385d4:
              lVar30 = 0;
            }
            *(longlong *)((longlong)ppauVar70 + 0xb0) = lVar30;
            lVar40 = *(longlong *)in_R9[5];
            *(longlong *)((longlong)ppauVar70 + 0xa0) = lVar40;
            *(undefined1 (**) [16])((longlong)ppauVar70 + 0xa8) = in_R10;
            *(int *)((longlong)ppauVar70 + 0xb8) = (int)in_R10;
            *(undefined4 *)((longlong)ppauVar70 + 0xbc) = 0;
          }
          else {
            lVar40 = *(longlong *)((longlong)ppauVar70 + 0xa0);
            lVar30 = *(longlong *)((longlong)ppauVar70 + 0xb0);
          }
          param_3 = (undefined1 (*) [16])(uVar37 * 0x10);
          uVar31 = (ulonglong)~*(uint *)(*param_3 + lVar40 + 8);
        }
        else if (uVar76 == uVar104) {
          UNRECOVERED_JUMPTABLE = *(undefined1 (**) [16])((longlong)ppauVar70 + 0x80);
          do {
            pauVar77 = in_R11;
            if (UNRECOVERED_JUMPTABLE == param_3) goto code_r0x000140a38800;
            *(undefined1 (**) [16])((longlong)ppauVar70 + 0x80) =
                 (undefined1 (*) [16])(*UNRECOVERED_JUMPTABLE + 4);
            uVar31 = (ulonglong)*(uint *)*UNRECOVERED_JUMPTABLE;
            in_R10 = *(undefined1 (**) [16])(*(longlong *)((longlong)ppauVar70 + 0x68) + 8);
            in_R11 = (undefined1 (*) [16])(uVar31 * 9);
            in_R9 = *(undefined1 (**) [16])((longlong)in_R10 + uVar31 * 0x48 + 0x10);
            param_1 = (undefined1 (*) [16])(ulonglong)*(uint *)((longlong)ppauVar70 + 0x3c);
            UNRECOVERED_JUMPTABLE = (undefined1 (*) [16])(*UNRECOVERED_JUMPTABLE + 4);
          } while (in_R9 == (undefined1 (*) [16])0x0);
          uVar7 = *(ulonglong *)(*(longlong *)((longlong)ppauVar70 + 0x78) + 0x110);
          uVar37 = 0;
          if (uVar7 < *(ulonglong *)((longlong)in_R10 + uVar31 * 0x48 + 0x40)) {
            param_3 = *(undefined1 (**) [16])((longlong)in_R10 + uVar31 * 0x48 + 0x38);
            pcVar9 = (code *)*param_3;
            if (*(ulonglong *)(pcVar9 + uVar7 * 8) == 0) goto code_r0x000140a385aa;
            param_3 = *(undefined1 (**) [16])((longlong)in_R10 + uVar31 * 0x48 + 0x18);
            lVar30 = *(longlong *)param_3[~*(ulonglong *)(pcVar9 + uVar7 * 8) * 3 + 1];
          }
          else {
code_r0x000140a385aa:
            lVar30 = 0;
          }
          *(longlong *)((longlong)ppauVar70 + 0xb0) = lVar30;
          *(undefined8 *)((longlong)ppauVar70 + 0x90) =
               *(undefined8 *)((longlong)in_R10 + uVar31 * 0x48 + 8);
          *(undefined1 (**) [16])((longlong)ppauVar70 + 0x98) = in_R9;
          *(int *)((longlong)ppauVar70 + 0xb8) = (int)in_R9;
          uVar31 = uVar37;
        }
        else {
          lVar30 = *(longlong *)((longlong)ppauVar70 + 0xb0);
          uVar31 = uVar37;
        }
        pauVar39 = (undefined1 (*) [16])(uVar31 * 0x30 + lVar30);
        *(int *)((longlong)ppauVar70 + 0xbc) = (int)uVar37 + 1;
        *(int *)*unaff_R12 = (int)param_1;
        unaff_XMM7_Da = *(float *)pauVar39[1];
        unaff_XMM7_Db = *(float *)(pauVar39[1] + 4);
        unaff_XMM8_Da = *(float *)(pauVar39[1] + 8);
        unaff_XMM9_Da = *(float *)*pauVar39;
        unaff_XMM9_Db = *(float *)(*pauVar39 + 4);
        unaff_XMM9_Dc = *(undefined4 *)(*pauVar39 + 8);
        unaff_XMM9_Dd = *(undefined4 *)(*pauVar39 + 0xc);
        pauVar42[0x4d][0] = (code)0x5;
        lVar30 = *(longlong *)(pauVar42[0x45] + 8) << 4;
        puVar32 = *(undefined8 **)pauVar42[0x45];
        do {
          if (lVar30 == 0) {
            pauVar26 = (undefined1 (*) [16])&UNK_14337fa53;
            goto code_r0x000140a38cb3;
          }
          puVar1 = puVar32 + 2;
          uVar27 = *puVar32;
          pcVar9 = *(code **)(puVar32[1] + 0x40);
          *(undefined8 *)((longlong)ppauVar70 + -8) = 0x140a38687;
          UNRECOVERED_JUMPTABLE = (undefined1 (*) [16])(*pcVar9)(uVar27);
          pcVar9 = *(code **)(pauVar39[1] + 8);
          *(undefined8 *)((longlong)ppauVar70 + -8) = 0x140a38696;
          pauVar39 = UNRECOVERED_JUMPTABLE;
          (*pcVar9)((undefined1 *)((longlong)ppauVar70 + 0x140));
          lVar30 = lVar30 + -0x10;
          puVar32 = puVar1;
        } while ((UNRECOVERED_JUMPTABLE == (undefined1 (*) [16])0x0) ||
                (*(longlong *)((longlong)ppauVar70 + 0x148) != 0x2e441b8be050d85b ||
                 *(longlong *)((longlong)ppauVar70 + 0x140) != 0x1d5a207d10288a54));
        *(float *)*UNRECOVERED_JUMPTABLE = unaff_XMM7_Da;
        *(float *)(*UNRECOVERED_JUMPTABLE + 4) = unaff_XMM7_Db;
        *(float *)(*UNRECOVERED_JUMPTABLE + 8) = unaff_XMM8_Da;
        unaff_RBP = *(undefined1 (**) [16])pauVar42[0x45];
        unaff_RDI = (undefined1 (*) [16])(*(longlong *)(pauVar42[0x45] + 8) << 4);
        unaff_R14 = (undefined1 (*) [16])((longlong)ppauVar70 + 0x140);
        unaff_R12 = (undefined1 (*) [16])0x89b6aef75b352be9;
        unaff_R13 = (undefined1 (*) [16])0x57d498b94ce2e276;
        do {
          do {
            if (unaff_RDI == (undefined1 (*) [16])0x0) {
              pauVar26 = (undefined1 (*) [16])&UNK_14337f978;
              goto code_r0x000140a38cb3;
            }
            uVar27 = *(undefined8 *)*unaff_RBP;
            pcVar9 = *(code **)(*(longlong *)(*unaff_RBP + 8) + 0x40);
            *(undefined8 *)((longlong)ppauVar70 + -8) = 0x140a38717;
            unaff_R15 = (undefined1 (*) [16])(*pcVar9)(uVar27);
            pcVar9 = *(code **)(pauVar39[1] + 8);
            *(undefined8 *)((longlong)ppauVar70 + -8) = 0x140a38726;
            pauVar39 = unaff_R15;
            (*pcVar9)(unaff_R14);
            unaff_RDI = unaff_RDI + -1;
            unaff_RBP = unaff_RBP + 1;
code_r0x000140a3872a:
          } while (unaff_R15 == (undefined1 (*) [16])0x0);
          pauVar26 = (undefined1 (*) [16])
                     (*(ulonglong *)((longlong)ppauVar70 + 0x140) ^ (ulonglong)unaff_R12);
code_r0x000140a3873d:
          ppauVar51 = ppauVar70;
        } while (*(undefined1 (**) [16])((longlong)ppauVar70 + 0x148) != unaff_R13 ||
                 pauVar26 != (undefined1 (*) [16])0x0);
code_r0x000140a38750:
        *(float *)*unaff_R15 = unaff_XMM9_Da;
        *(float *)(*unaff_R15 + 4) = unaff_XMM9_Db;
        *(undefined4 *)(*unaff_R15 + 8) = unaff_XMM9_Dc;
        *(undefined4 *)(*unaff_R15 + 0xc) = unaff_XMM9_Dd;
        unaff_XMM7_Da = unaff_XMM7_Da + _DAT_142e378e0;
        unaff_XMM7_Db = unaff_XMM7_Db + _UNK_142e378e4;
        unaff_XMM8_Da = unaff_XMM8_Da + 0.0;
        unaff_RDI = (undefined1 (*) [16])(*(longlong *)(pauVar42[0x45] + 8) << 4);
        unaff_R14 = (undefined1 (*) [16])((longlong)ppauVar51 + 0x140);
        unaff_R12 = (undefined1 (*) [16])0x990135eacca0220c;
        unaff_R13 = (undefined1 (*) [16])0x450831ed88cc926;
        pauVar26 = *(undefined1 (**) [16])pauVar42[0x45];
        ppauVar60 = ppauVar51;
        do {
          do {
            if (unaff_RDI == (undefined1 (*) [16])0x0) {
              puVar34 = &UNK_14337fa75;
              goto code_r0x000140a38cd0;
            }
            unaff_RBP = pauVar26 + 1;
            ppauVar58 = ppauVar60;
code_r0x000140a387ad:
            uVar27 = *(undefined8 *)*pauVar26;
            pcVar9 = *(code **)(*(longlong *)(*pauVar26 + 8) + 0x40);
            *(undefined8 *)((longlong)ppauVar58 + -8) = 0x140a387b7;
            unaff_R15 = (undefined1 (*) [16])(*pcVar9)(uVar27);
            pcVar9 = *(code **)(pauVar39[1] + 8);
            *(undefined8 *)((longlong)ppauVar58 + -8) = 0x140a387c6;
            pauVar39 = unaff_R15;
            (*pcVar9)(unaff_R14);
            unaff_RDI = unaff_RDI + -1;
            pauVar26 = unaff_RBP;
            ppauVar59 = ppauVar58;
code_r0x000140a387cd:
            ppauVar60 = ppauVar59;
          } while (unaff_R15 == (undefined1 (*) [16])0x0);
          pauVar26 = (undefined1 (*) [16])
                     (*(ulonglong *)((longlong)ppauVar59 + 0x140) ^ (ulonglong)unaff_R12);
code_r0x000140a387dd:
          bVar79 = pauVar26 != (undefined1 (*) [16])0x0;
          pauVar26 = unaff_RBP;
          ppauVar70 = ppauVar60;
        } while (*(undefined1 (**) [16])((longlong)ppauVar60 + 0x148) != unaff_R13 || bVar79);
code_r0x000140a387f0:
        *(float *)(unaff_R15[1] + 4) = unaff_XMM7_Da;
        *(float *)(unaff_R15[1] + 8) = unaff_XMM7_Db;
        *(float *)(unaff_R15[1] + 0xc) = unaff_XMM8_Da;
        unaff_R12 = *(undefined1 (**) [16])((longlong)ppauVar70 + 0x40);
        pauVar39 = pauVar42;
        pauVar77 = in_R11;
      }
    }
code_r0x000140a38800:
    UNRECOVERED_JUMPTABLE = (undefined1 (*) [16])((longlong)ppauVar70 + 0x1a0);
    pauVar42 = pauVar39;
    ppauVar62 = ppauVar70;
    in_R11 = pauVar77;
    iVar25 = _UNK_143397934;
code_r0x000140a3880b:
    *(undefined8 *)((longlong)ppauVar62 + -8) = 0x140a38810;
    _UNK_143397934 = iVar25;
    in_XMM0._0_8_ = pdb_140e08f50(UNRECOVERED_JUMPTABLE);
    in_XMM0._8_8_ = extraout_XMM0_Qb_01;
    *(int *)*unaff_R12 = (int)param_1;
    unaff_R14 = pauVar42 + 0x10;
    puVar34 = (undefined *)(ulonglong)(byte)pauVar42[0x4d][0];
    unaff_RDI = (undefined1 (*) [16])&UNK_143397930;
    UNRECOVERED_JUMPTABLE = (undefined1 (*) [16])&UNK_14303b690;
    ppauVar73 = ppauVar62;
    iVar25 = _UNK_143397934;
code_r0x000140a38830:
    pauVar26 = (undefined1 (*) [16])
               (*UNRECOVERED_JUMPTABLE + *(int *)(*UNRECOVERED_JUMPTABLE + (longlong)puVar34 * 4));
    pauVar75 = unaff_RDI;
    auVar109 = in_XMM1;
code_r0x000140a38837:
    uVar27 = auVar109._0_8_;
    ppauVar70 = ppauVar73;
    unaff_RDI = pauVar75;
    pauVar77 = in_R11;
    in_XMM1 = auVar109;
    _UNK_143397934 = iVar25;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
    switch(pauVar26) {
    case (undefined1 (*) [16])0x140a38839:
code_r0x000140a38839:
      pauVar39 = unaff_R14;
      unaff_R12 = (undefined1 (*) [16])0x8c;
      pauVar75 = unaff_RDI;
      unaff_R14 = pauVar39;
      iVar25 = _UNK_143397934;
      break;
    case (undefined1 (*) [16])0x140a38847:
code_r0x000140a38847:
      pauVar39 = pauVar42 + 0x39;
      unaff_R12 = (undefined1 (*) [16])0x31c;
      pauVar26 = pauVar75;
code_r0x000140a38857:
      unaff_RDI = pauVar26;
      ppauVar70 = ppauVar73;
      break;
    case (undefined1 (*) [16])0x140a38859:
      pauVar39 = pauVar42 + 0x27;
      unaff_R12 = (undefined1 (*) [16])0x1c4;
      pauVar26 = (undefined1 (*) [16])&UNK_143397968;
code_r0x000140a3886d:
      unaff_RDI = pauVar26;
      ppauVar70 = ppauVar73;
      pauVar77 = in_R11;
      break;
    case (undefined1 (*) [16])0x140a3886f:
      pauVar39 = pauVar42 + 0x2f;
      unaff_RDI = (undefined1 (*) [16])&UNK_1433979d8;
      unaff_R12 = (undefined1 (*) [16])0x264;
      break;
    case (undefined1 (*) [16])0x140a38885:
code_r0x000140a3888c:
      pauVar39 = (undefined1 (*) [16])(pauVar42[0x1b] + 8);
      unaff_R12 = (undefined1 (*) [16])0x144;
      pauVar75 = unaff_RDI;
      break;
    case (undefined1 (*) [16])0x140a38897:
      pauVar39 = (undefined1 (*) [16])(pauVar42[0x44] + 8);
      unaff_RDI = (undefined1 (*) [16])&UNK_1433979a0;
      unaff_R12 = (undefined1 (*) [16])0x3a4;
      break;
    case (undefined1 (*) [16])0x140a38b0a:
code_r0x000140a38b0a:
      bVar36 = (byte)UNRECOVERED_JUMPTABLE;
      (*unaff_RDI)[0] = (*unaff_RDI)[0] + bVar36;
      pbVar3 = (byte *)((longlong)pauVar26 * 2);
      *pbVar3 = *pbVar3 << 1 | (char)*pbVar3 < '\0';
      pcVar9 = (code *)(pauVar26[-8] + 0xd);
      bVar79 = CARRY1((byte)*pcVar9,bVar36);
      *pcVar9 = (code)((char)*pcVar9 + bVar36);
      iVar25 = _UNK_143397934;
code_r0x000140a38b14:
      pauVar29 = (undefined1 (*) [16])(ulonglong)((int)pauVar26 + 0x2602b8f + (uint)bVar79);
      pauVar75 = unaff_RDI;
      in_R11 = pauVar77;
      goto code_r0x000140a38b04;
    case (undefined1 (*) [16])0x140a38b13:
      pauVar29 = pauVar26;
      goto code_r0x000140a38b04;
    case (undefined1 (*) [16])0x140a38b1c:
      uVar76 = (int)pauVar75 >> 1;
      pauVar75 = (undefined1 (*) [16])(ulonglong)uVar76;
      if (CONCAT71((int7)((ulonglong)UNRECOVERED_JUMPTABLE >> 8),(*pauVar26)[1]) == 1 || uVar76 != 0
         ) goto code_r0x000140a38b22;
      goto code_r0x000140a38b62;
    case (undefined1 (*) [16])0x140a38b2c:
      goto code_r0x000140a38b32;
    case (undefined1 (*) [16])0x140a38b3c:
      goto code_r0x000140a38b34;
    case (undefined1 (*) [16])0x140a38b4a:
      pauVar26[-8][0xd] = pauVar26[-8][0xd] + (char)UNRECOVERED_JUMPTABLE;
      iVar25 = _UNK_143397934;
      goto code_r0x000140a38b44;
    case (undefined1 (*) [16])0x140a38d79:
      in_XMM1._0_4_ = (float)SUB104(in_ST0,0);
      in_XMM1._8_8_ = auVar109._8_8_;
      in_XMM1._4_4_ = 0.0;
code_r0x000140a38d80:
      in_XMM0._0_4_ = in_XMM0._0_4_ / in_XMM1._0_4_;
      pauVar26 = (undefined1 (*) [16])(ulonglong)*(uint *)(UNRECOVERED_JUMPTABLE[1] + 0xc);
      pauVar75 = *(undefined1 (**) [16])*UNRECOVERED_JUMPTABLE;
      _UNK_143397934 = iVar25;
code_r0x000140a38d8a:
      UNRECOVERED_JUMPTABLE = *(undefined1 (**) [16])UNRECOVERED_JUMPTABLE[1];
      pauVar29 = pauVar26;
      unaff_RDI = pauVar75;
      iVar25 = _UNK_143397934;
code_r0x000140a38d8e:
      _UNK_143397934 = iVar25;
      *(int *)(unaff_RDI[0x4d] + 8) = in_XMM0._0_4_;
      *(int *)*UNRECOVERED_JUMPTABLE = (int)pauVar29;
code_r0x000140a38d98:
      UNRECOVERED_JUMPTABLE = (undefined1 (*) [16])(ulonglong)(byte)unaff_RDI[0x4d][0];
      iVar25 = _UNK_143397934;
      goto code_r0x000140a38dad;
    case (undefined1 (*) [16])0x140a38d8d:
code_r0x000140a38d8f:
      _UNK_143397934 = iVar25;
      *(undefined1 (*) [16])(pauVar75[0x4d] + 8) = in_XMM0;
      pauVar29 = pauVar26;
      unaff_RDI = pauVar75;
      iVar25 = _UNK_143397934;
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
      (*pauVar26)[0] = (*pauVar26)[0] + (char)pauVar26;
      iVar25 = _UNK_143397934;
      goto code_r0x000140a38dd5;
    case (undefined1 (*) [16])0x140a392fe:
      (*pauVar26)[0] = (*pauVar26)[0] + (char)pauVar26;
      pcVar9 = (code *)(pauVar39[0x418b167] + (longlong)pauVar26 * 8 + 4);
      *pcVar9 = (code)((char)*pcVar9 << 4 | (byte)*pcVar9 >> 4);
code_r0x000140a3930d:
      uVar74 = in_XMM0._0_4_;
      **(undefined4 **)UNRECOVERED_JUMPTABLE[1] = (int)pauVar26;
      pauVar26 = *(undefined1 (**) [16])*UNRECOVERED_JUMPTABLE;
      iVar25 = _UNK_143397934;
      goto code_r0x000140a39316;
    case (undefined1 (*) [16])0x140a39372:
code_r0x000140a39372:
      if (pauVar39 <= pauVar26) {
        in_R9 = pauVar39;
      }
code_r0x000140a39379:
      pauVar39 = (undefined1 (*) [16])(((longlong)pauVar26 - (longlong)in_R9) * 0xd0);
      pauVar26 = *(undefined1 (**) [16])*UNRECOVERED_JUMPTABLE;
      uVar74 = *(undefined4 *)*pauVar26;
      iVar25 = _UNK_143397934;
      goto code_r0x000140a3938a;
    case (undefined1 (*) [16])0x140a3940b:
code_r0x000140a3940b:
      *(undefined8 *)((longlong)ppauVar70 + 0x28) =
           *(undefined8 *)(param_3[4] + 0xc + (longlong)pauVar39);
      uVar74 = SUB84(in_R9,0);
      *(undefined4 *)*in_R10 = uVar74;
      *(undefined4 *)pauVar26[1] = *(undefined4 *)((longlong)ppauVar70 + 0x30);
      in_R11 = *(undefined1 (**) [16])((longlong)ppauVar70 + 0x28);
      goto code_r0x000140a39426;
    case (undefined1 (*) [16])0x140a394af:
      *(undefined1 (**) [16])((longlong)ppauVar73 + -8) = pauVar26;
      goto code_r0x000140a39467;
    case (undefined1 (*) [16])0x140a39a6f:
code_r0x000140a39a6f:
      *(undefined8 *)((longlong)ppauVar70 + -8) = 0x140a39a74;
      _UNK_143397934 = iVar25;
      pub_1406abac0((byte *)UNRECOVERED_JUMPTABLE,(ulonglong)pauVar39,(ulonglong)param_3);
      pauVar26 = extraout_RAX;
      iVar25 = _UNK_143397934;
code_r0x000140a39a7c:
      _UNK_143397936 = (undefined2)((uint)iVar25 >> 0x10);
      _UNK_143397934 = (undefined2)iVar25;
      return pauVar26;
    case (undefined1 (*) [16])0x140a39a80:
      *(undefined1 (**) [16])((longlong)ppauVar73 + 0x10) = pauVar39;
      puVar71 = (undefined8 *)((longlong)ppauVar73 + -8);
      ppauVar73 = (undefined1 (**) [16])((longlong)ppauVar73 + -8);
      *puVar71 = unaff_RBP;
    case (undefined1 (*) [16])0x140a39a86:
      goto code_r0x000140a39a86;
    case (undefined1 (*) [16])0x140a39a94:
      goto code_r0x000140a39a94;
    case (undefined1 (*) [16])0x140a39aa2:
      pcVar9 = (code *)swi(3);
      UNRECOVERED_JUMPTABLE = (undefined1 (*) [16])(*pcVar9)();
      return UNRECOVERED_JUMPTABLE;
    case (undefined1 (*) [16])0x140a39ab0:
      *(undefined1 (**) [16])((longlong)ppauVar73 + -8) = param_1;
      in_XMM1._0_8_ = (ulonglong)(byte)(*UNRECOVERED_JUMPTABLE)[0];
      UNRECOVERED_JUMPTABLE = (undefined1 (*) [16])&UNK_14303b6ec;
      goto code_r0x000140a39ac2;
    case (undefined1 (*) [16])0x14303b690:
      *(uint *)(pauVar75[-0x602e361] + 0xd) = *(uint *)(pauVar75[-0x602e361] + 0xd) >> 1;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
code_r0x000140a388ab:
    pcVar9 = *(code **)unaff_RDI[3];
    *(undefined8 *)((longlong)ppauVar70 + -8) = 0x140a388bc;
    _UNK_143397934 = iVar25;
    (*pcVar9)((undefined1 *)((longlong)ppauVar70 + 0x220),pauVar39);
    auVar88._4_12_ = unaff_XMM6._4_12_;
    auVar88._0_4_ = unaff_XMM6._0_4_ / _DAT_142f60fec;
    *(undefined8 *)((longlong)ppauVar70 + -8) = 0x140a388cc;
    fVar95 = (float)pub_142e32a20(auVar88._0_8_);
    fVar91 = _DAT_142e36f28;
    *(float *)(pauVar42[0x10] + 4 + (longlong)unaff_R12) =
         (_DAT_142e36f28 - fVar95) *
         (float)((ulonglong)*(undefined8 *)(pauVar42[0x10] + 4 + (longlong)unaff_R12) >> 0x20) +
         (_DAT_142e36f28 - (_DAT_142e36f28 - fVar95)) *
         (float)*(undefined8 *)(pauVar42[0x10] + 4 + (longlong)unaff_R12);
    uVar27 = *(undefined8 *)(*unaff_R12 + (longlong)*unaff_R14);
    uVar41 = *(undefined8 *)(*unaff_R12 + (longlong)*unaff_R14 + 8);
    uVar13 = *(undefined8 *)(*unaff_R12 + (longlong)unaff_R14[1]);
    uVar14 = *(undefined8 *)(*unaff_R12 + (longlong)unaff_R14[1] + 8);
    uVar15 = *(undefined8 *)(unaff_R14[1] + 0xc + (longlong)unaff_R12 + 8);
    *(undefined8 *)((longlong)ppauVar70 + 0x7c) =
         *(undefined8 *)(unaff_R14[1] + 0xc + (longlong)unaff_R12);
    *(undefined8 *)((longlong)ppauVar70 + 0x84) = uVar15;
    *(undefined8 *)((longlong)ppauVar70 + 0x70) = uVar13;
    *(undefined8 *)((longlong)ppauVar70 + 0x78) = uVar14;
    *(undefined8 *)((longlong)ppauVar70 + 0x60) = uVar27;
    *(undefined8 *)((longlong)ppauVar70 + 0x68) = uVar41;
    *(undefined8 *)((longlong)ppauVar70 + -8) = 0x140a38933;
    in_XMM3_Dc = (float)pdb_140dee660((undefined1 *)((longlong)ppauVar70 + 0x60));
    *(undefined8 *)((longlong)ppauVar70 + -8) = 0x140a38956;
    fVar107 = (float)pub_142e329e0();
    *(undefined8 *)((longlong)ppauVar70 + -8) = 0x140a38963;
    fVar95 = (float)pub_142e32b30();
    fVar107 = fVar107 / fVar95;
    fVar105 = fVar107 / *(float *)(pauVar42[0x4d] + 8);
    *(undefined8 *)((longlong)ppauVar70 + -8) = 0x140a38982;
    pdb_140e07bc0((undefined1 *)((longlong)ppauVar70 + 0x60),
                  (undefined1 *)((longlong)ppauVar70 + 0x220));
    in_XMM1 = ZEXT416((uint)fVar105);
    in_XMM2 = ZEXT416((uint)fVar107) << 0x20;
    fVar95 = 0.0;
    fVar101 = 0.0;
    in_XMM3_Dd = 0.0;
    in_XMM4 = ZEXT416((uint)(fVar91 / fVar105));
    in_XMM5 = ZEXT416((uint)(fVar91 / fVar107)) << 0x20;
    in_XMM0._0_12_ = ZEXT412(0);
    in_XMM0._12_4_ = fVar91 / in_XMM3_Dc;
    *(undefined8 *)((longlong)ppauVar70 + 0x170) = *(undefined8 *)((longlong)ppauVar70 + 0x90);
    *(undefined8 *)((longlong)ppauVar70 + 0x178) = *(undefined8 *)((longlong)ppauVar70 + 0x98);
    *(undefined8 *)((longlong)ppauVar70 + 0x160) = *(undefined8 *)((longlong)ppauVar70 + 0x80);
    *(undefined8 *)((longlong)ppauVar70 + 0x168) = *(undefined8 *)((longlong)ppauVar70 + 0x88);
    *(undefined8 *)((longlong)ppauVar70 + 0x150) = *(undefined8 *)((longlong)ppauVar70 + 0x70);
    *(undefined8 *)((longlong)ppauVar70 + 0x158) = *(undefined8 *)((longlong)ppauVar70 + 0x78);
    *(undefined8 *)((longlong)ppauVar70 + 0x140) = *(undefined8 *)((longlong)ppauVar70 + 0x60);
    *(undefined8 *)((longlong)ppauVar70 + 0x148) = *(undefined8 *)((longlong)ppauVar70 + 0x68);
    in_R11 = pauVar77;
code_r0x000140a38a10:
    *(undefined8 *)((longlong)ppauVar70 + 0x100) = *(undefined8 *)((longlong)ppauVar70 + 0xa0);
    *(undefined8 *)((longlong)ppauVar70 + 0x108) = *(undefined8 *)((longlong)ppauVar70 + 0xa8);
    pauVar39 = pauVar42;
    ppauVar64 = ppauVar70;
    unaff_RDI = pauVar75;
    goto code_r0x000140a38a20;
  case (undefined1 (*) [16])0x140a37a7e:
    pauVar39 = (undefined1 (*) [16])(pauVar42[0x1b] + 8);
    goto code_r0x000140a37a85;
  case (undefined1 (*) [16])0x140a37d96:
code_r0x000140a37d96:
    _UNK_143397934 = iVar25;
    pauVar29[-8][0xd] = pauVar29[-8][0xd] + (char)UNRECOVERED_JUMPTABLE;
    iVar25 = _UNK_143397934;
    goto code_r0x000140a37d9e;
  case (undefined1 (*) [16])0x140a37e2c:
    pauVar26 = (undefined1 (*) [16])(ulonglong)*(uint *)((longlong)ppauVar73 + 0xf0);
    goto code_r0x000140a37e33;
  case (undefined1 (*) [16])0x140a37e38:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (undefined1 (*) [16])0x140a37e4b:
code_r0x000140a37e4f:
    _UNK_143397936 = (undefined2)((uint)iVar25 >> 0x10);
    _UNK_143397934 = (undefined2)iVar25;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (undefined1 (*) [16])0x140a37e5e:
    pbVar3 = (byte *)((ulonglong)
                      CONCAT22((short)(uVar76 >> 0x10),
                               CONCAT11((char)(uVar76 >> 8) + (char)pauVar42,bVar36)) * 5 + -0x21);
    *pbVar3 = *pbVar3 ^ (byte)unaff_RBP;
    UNRECOVERED_JUMPTABLE = pauVar42 + 0x2f;
    puVar34 = &UNK_1433979d8;
    goto code_r0x000140a37e93;
  case (undefined1 (*) [16])0x140a37e6a:
    lVar30 = CONCAT71(uVar35,cVar20 + (*pauVar29)[0]);
    pcVar33 = (char *)(lVar30 + -0x73);
    *pcVar33 = *pcVar33 + bVar36;
    puVar34 = (undefined *)(ulonglong)((int)lVar30 + 0x295fb64);
code_r0x000140a37e93:
    uVar74 = SUB84(param_1,0);
    pcVar9 = *(code **)(puVar34 + 0x18);
    *(undefined8 *)((longlong)ppauVar73 + -8) = 0x140a37e96;
    (*pcVar9)(UNRECOVERED_JUMPTABLE);
    in_R11 = (undefined1 (*) [16])((ulonglong)unaff_RDI & 0xffffffff);
    ppauVar52 = ppauVar73;
    goto code_r0x000140a37e99;
  case (undefined1 (*) [16])0x140a38188:
code_r0x000140a3818a:
    *(int *)ppauVar73 = (int)pauVar26;
    goto code_r0x000140a38185;
  case (undefined1 (*) [16])0x140a38191:
    pauVar39 = pauVar42;
    ppauVar57 = ppauVar73;
    goto code_r0x000140a38194;
  case (undefined1 (*) [16])0x140a3819a:
    goto code_r0x000140a3819a;
  case (undefined1 (*) [16])0x140a381aa:
    goto code_r0x000140a3819a;
  case (undefined1 (*) [16])0x140a381ba:
    uVar76 = *(uint *)*pauVar29;
    *(int *)(ulonglong)uVar76 = *(int *)(ulonglong)uVar76 + uVar76;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (undefined1 (*) [16])0x140a381c3:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (undefined1 (*) [16])0x140a387f1:
    *(float *)(unaff_RDI[1] + 4) = unaff_XMM7_Da;
    *(float *)(unaff_RDI[1] + 8) = unaff_XMM7_Db;
    goto code_r0x000140a387f0;
  case (undefined1 (*) [16])0x140a387ff:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (undefined1 (*) [16])0x140a38811:
    *(int *)ppauVar73 = (int)param_1;
    ppauVar62 = ppauVar73;
    goto code_r0x000140a3880b;
  case (undefined1 (*) [16])0x140a38827:
    uVar37 = (ulonglong)unaff_RBP & 0xffffffff;
    unaff_RBP = (undefined1 (*) [16])((ulonglong)pauVar29 & 0xffffffff);
    UNRECOVERED_JUMPTABLE =
         (undefined1 (*) [16])
         (ulonglong)CONCAT31((int3)(uVar76 >> 8),bVar36 + *(char *)(uVar37 - 0x73));
    puVar34 = (undefined *)(ulonglong)(uVar104 | 0x2602e60);
    goto code_r0x000140a38830;
  case (undefined1 (*) [16])0x140a3883d:
    (*pauVar29)[0] = (*pauVar29)[0] + cVar20;
    goto code_r0x000140a38839;
  case (undefined1 (*) [16])0x140a3884f:
    ppauVar73 = (undefined1 (**) [16])0x31c;
    goto code_r0x000140a38847;
  case (undefined1 (*) [16])0x140a38ac2:
code_r0x000140a38ac2:
    _UNK_143397934 = iVar25;
    *(char *)((longlong)ppauVar48 + 0x110) =
         *(char *)((longlong)ppauVar48 + 0x110) - (char)UNRECOVERED_JUMPTABLE;
    pauVar39 = pauVar42;
    ppauVar65 = ppauVar48;
    unaff_RDI = pauVar75;
    break;
  case (undefined1 (*) [16])0x140a38acb:
    pauVar26 = (undefined1 (*) [16])((ulonglong)ppauVar73 & 0xffffffff);
    ppauVar73 = (undefined1 (**) [16])((ulonglong)pauVar29 & 0xffffffff);
code_r0x000140a38acc:
    piVar28 = (int *)((ulonglong)pauVar26 & 0xffffffffffffff20);
    _UNK_143397934 = iVar25;
    *piVar28 = *piVar28 + (int)piVar28;
    (*unaff_RDI)[0] = (*unaff_RDI)[0] + (char)UNRECOVERED_JUMPTABLE;
    *(char *)((longlong)ppauVar73 + 0x130) = *(char *)((longlong)ppauVar73 + 0x130) - (char)pauVar42
    ;
    pauVar39 = pauVar42;
    ppauVar65 = ppauVar73;
    break;
  case (undefined1 (*) [16])0x140a38ad4:
    piVar28 = (int *)((ulonglong)pauVar29 & 0xffffffffffffff30);
    *piVar28 = *piVar28 + (int)piVar28;
    (*unaff_RDI)[0] = (*unaff_RDI)[0] + bVar36;
    *(int *)pauVar42[0xc] = *(int *)pauVar42[0xc] - (int)piVar28;
    pauVar39 = pauVar42;
    ppauVar65 = ppauVar73;
    break;
  case (undefined1 (*) [16])0x140a38ae4:
    (*pauVar29)[0] = (*pauVar29)[0] + cVar20;
    (*unaff_RDI)[0] = (*unaff_RDI)[0] + bVar36;
    *(int *)pauVar42[0xe] = *(int *)pauVar42[0xe] - (int)pauVar39;
    goto code_r0x000140a38ae7;
  case (undefined1 (*) [16])0x140a38af4:
    goto code_r0x000140a38af4;
  case (undefined1 (*) [16])0x140a38b02:
    (*pauVar29)[0] = (*pauVar29)[0] + cVar20;
    iVar25 = _UNK_143397934;
    goto code_r0x000140a38b04;
  case (undefined1 (*) [16])0x140a38d45:
code_r0x000140a38d45:
    ppauVar67 = (undefined1 (**) [16])((longlong)ppauVar68 + -0x188);
    *(float *)((longlong)ppauVar68 + -0x18) = unaff_XMM9_Da;
    *(float *)((longlong)ppauVar68 + -0x14) = unaff_XMM9_Db;
    *(undefined4 *)((longlong)ppauVar68 + -0x10) = unaff_XMM9_Dc;
    *(undefined4 *)((longlong)ppauVar68 + -0xc) = unaff_XMM9_Dd;
    *(float *)((longlong)ppauVar68 + -0x28) = unaff_XMM8_Da;
    *(float *)((longlong)ppauVar68 + -0x24) = unaff_XMM8_Db;
    *(float *)((longlong)ppauVar68 + -0x20) = unaff_XMM8_Dc;
    *(float *)((longlong)ppauVar68 + -0x1c) = unaff_XMM8_Dd;
    _UNK_143397934 = iVar25;
code_r0x000140a38d5e:
    *(float *)((longlong)ppauVar67 + 0x150) = unaff_XMM7_Da;
    *(float *)((longlong)ppauVar67 + 0x154) = unaff_XMM7_Db;
    *(float *)((longlong)ppauVar67 + 0x158) = unaff_XMM7_Dc;
    *(float *)((longlong)ppauVar67 + 0x15c) = unaff_XMM7_Dd;
    goto code_r0x000140a38d66;
  case (undefined1 (*) [16])0x140a38d50:
    piVar28 = (int *)((ulonglong)pauVar29 & 0xffffffffffffff70);
    *piVar28 = *piVar28 + (int)piVar28;
    (unaff_RDI[2] + 9)[(longlong)UNRECOVERED_JUMPTABLE] =
         (unaff_RDI[2] + 9)[(longlong)UNRECOVERED_JUMPTABLE] + (char)piVar28;
    *piVar28 = *piVar28 + (int)piVar28;
    iVar25 = _UNK_143397934;
code_r0x000140a38d5d:
    _UNK_143397934 = iVar25;
    (*unaff_RDI)[0] = (*unaff_RDI)[0] + (char)UNRECOVERED_JUMPTABLE;
    iVar25 = _UNK_143397934;
code_r0x000140a38d5f:
    _UNK_143397934 = iVar25;
    *(int *)((longlong)ppauVar73 + 0x150) = *(int *)((longlong)ppauVar73 + 0x150) - (int)unaff_RDI;
    ppauVar67 = ppauVar73;
code_r0x000140a38d66:
    *(undefined1 (*) [16])((longlong)ppauVar67 + 0x140) = unaff_XMM6;
    pauVar26 = *(undefined1 (**) [16])*pauVar39;
    pauVar39 = (undefined1 (*) [16])(ulonglong)*(uint *)*pauVar26;
    iVar25 = _UNK_143397934;
code_r0x000140a38d73:
    auVar94 = in_XMM1._4_12_;
    in_XMM0._0_4_ = (float)(longlong)pauVar39;
    goto code_r0x000140a38d78;
  case (undefined1 (*) [16])0x140a38d5f:
    goto code_r0x000140a38d5f;
  case (undefined1 (*) [16])0x140a38d75:
    goto code_r0x000140a38d75;
  case (undefined1 (*) [16])0x140a38d8b:
    UNRECOVERED_JUMPTABLE = (undefined1 (*) [16])(ulonglong)*(uint *)UNRECOVERED_JUMPTABLE[1];
    goto code_r0x000140a38d8e;
  case (undefined1 (*) [16])0x140a38d9a:
    pcVar33 = (char *)CONCAT62((int6)((ulonglong)pauVar29 >> 0x10),
                               CONCAT11(bVar79 << 7 | bVar81 << 6 | in_AF << 4 |
                                        ((POPCOUNT(uVar37) & 1U) == 0) << 2 | 2 | bVar80,cVar20));
    (*UNRECOVERED_JUMPTABLE)[0] = (*UNRECOVERED_JUMPTABLE)[0] + cVar20;
    *pcVar33 = *pcVar33 + cVar20;
    goto code_r0x000140a38d98;
  case (undefined1 (*) [16])0x140a392b6:
    puVar34 = (undefined *)(ulonglong)*(uint *)(*pauVar29 + 8);
code_r0x000140a392b5:
    auVar109 = *(undefined1 (*) [16])(*(longlong *)(puVar34 + 8) + 0x30);
    uVar27 = auVar109._0_8_;
    in_XMM0._8_8_ = auVar109._8_8_;
    in_XMM0._0_8_ = in_XMM0._8_8_;
    _UNK_143397934 = iVar25;
    if (((auVar109._4_4_ & 0x7fffffff) < 0x7f800000 && (auVar109._0_4_ & 0x7fffffff) < 0x7f800000)
        && (auVar109._8_4_ & 0x7fffffff) < 0x7f800000) {
      pauVar26 = (undefined1 (*) [16])(ulonglong)*(uint *)(UNRECOVERED_JUMPTABLE[1] + 0xc);
      goto code_r0x000140a3930d;
    }
    goto LAB_140a39320;
  case (undefined1 (*) [16])0x140a3932a:
    goto code_r0x000140a3932a;
  case (undefined1 (*) [16])0x140a393c3:
    *(undefined4 *)(*unaff_RDI + 1) = *(undefined4 *)(*unaff_RDI + 1);
    (*UNRECOVERED_JUMPTABLE)[3] = (*UNRECOVERED_JUMPTABLE)[3] + bVar36;
    UNRECOVERED_JUMPTABLE[-8][0xb] = UNRECOVERED_JUMPTABLE[-8][0xb] ^ (byte)in_R9;
    *(undefined1 (**) [16])((longlong)ppauVar73 + -8) = param_1;
    unaff_RBP[-8][0xb] = unaff_RBP[-8][0xb] & bVar36;
    unaff_RBP[3][1] = unaff_RBP[3][1] - (char)param_3;
    ppauVar70 = (undefined1 (**) [16])(*unaff_RBP + 8);
    if (pauVar39 <= pauVar29) {
      in_R9 = pauVar39;
    }
    pauVar39 = (undefined1 (*) [16])(((longlong)pauVar29 - (longlong)in_R9) * 0xd0);
    in_XMM0 = ZEXT416(*(uint *)((param_3 + 4)[((longlong)pauVar29 - (longlong)in_R9) * 0xd] + 8));
    in_R9 = (undefined1 (*) [16])(ulonglong)*(uint *)(UNRECOVERED_JUMPTABLE[1] + 0xc);
    iVar25 = _UNK_143397934;
    goto code_r0x000140a393f3;
  case (undefined1 (*) [16])0x140a39467:
    goto code_r0x000140a39467;
  case (undefined1 (*) [16])0x140a39a27:
    *(int *)unaff_RBP[-1] = (int)unaff_RDI;
code_r0x000140a39a2a:
    UNRECOVERED_JUMPTABLE = (undefined1 (*) [16])0x1;
    iVar25 = _UNK_143397934;
code_r0x000140a39a34:
    *(undefined8 *)((longlong)ppauVar73 + -8) = 0x140a39a39;
    _UNK_143397934 = iVar25;
    pdb_142dc7e2a(UNRECOVERED_JUMPTABLE);
    iVar25 = _UNK_143397934;
  case (undefined1 (*) [16])0x140a39a4c:
LAB_140a39a4c:
                    /* WARNING: Does not return */
    pcVar9 = (code *)invalidInstructionException();
    _UNK_143397934 = iVar25;
    (*pcVar9)();
  case (undefined1 (*) [16])0x140a39a35:
    pcVar9 = (code *)swi(1);
    UNRECOVERED_JUMPTABLE = (undefined1 (*) [16])(*pcVar9)();
    return UNRECOVERED_JUMPTABLE;
  case (undefined1 (*) [16])0x140a39a3e:
    (*pauVar29)[0] = (*pauVar29)[0] + cVar20;
    pauVar39[1][3] = pauVar39[1][3] + (char)((ulonglong)pauVar42 >> 8);
code_r0x000140a39a46:
    *(undefined8 *)((longlong)ppauVar73 + -8) = 0x140a39a4b;
    pdb_142dc7e2a(UNRECOVERED_JUMPTABLE);
    iVar25 = _UNK_143397934;
    goto LAB_140a39a4c;
  case (undefined1 (*) [16])0x140a39a5a:
    uVar23 = in((short)pauVar39);
    pbVar3 = (byte *)(CONCAT71(uVar35,uVar23) + -0x73);
    *pbVar3 = *pbVar3 & bVar36;
    ppauVar70 = (undefined1 (**) [16])((longlong)ppauVar73 + -8);
    *(undefined8 *)((longlong)ppauVar73 + -8) = 0x50;
    goto code_r0x000140a39a5c;
  case (undefined1 (*) [16])0x140a39a68:
    (*pauVar29)[0] = (*pauVar29)[0] + cVar20;
    pauVar29[-8][0xb] = pauVar29[-8][0xb] + bVar36;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (undefined1 (*) [16])0x14303b648:
code_r0x00014303b64c:
    _UNK_143397936 = (undefined2)((uint)iVar25 >> 0x10);
    _UNK_143397934 = (undefined2)iVar25;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  goto code_r0x000140a38aab;
code_r0x000140a39a86:
  puVar72 = (ulonglong *)((longlong)ppauVar73 + -8);
  ppauVar73 = (undefined1 (**) [16])((longlong)ppauVar73 + -8);
  *puVar72 = (ulonglong)param_1;
  goto code_r0x000140a39a87;
}

