// VA 0x141b6d450, PDB extent 449 bytes
// country_core::systems::mode_manager::_::impl$0::deserialize<ref_mut$<serde_json::de::Deserializer<serde_json::read::StrRead> > >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/mode_manager.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Instruction at (ram,0x000141b6f83d) overlaps instruction at (ram,0x000141b6f83a)
    */
/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x000141b6e8dc) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::systems::mode_manager::_::impl$0::deserialize<ref_mut$<serde_json::de::Deserializer<serde_json::read::StrRead>
   > >
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/mode_manager.rs
   Extent: 449 */

float * pdb_141b6d450(float *param_1,float *param_2)

{
  uint *puVar1;
  ulonglong uVar2;
  longlong lVar3;
  byte *pbVar4;
  char cVar5;
  undefined1 auVar6 [16];
  byte bVar7;
  code cVar8;
  int iVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  float *UNRECOVERED_JUMPTABLE_00;
  longlong lVar12;
  char *pcVar13;
  float *extraout_RAX;
  float *extraout_RAX_00;
  undefined1 (*pauVar14) [16];
  int *piVar15;
  undefined7 uVar18;
  undefined *puVar16;
  float *pfVar17;
  byte bVar19;
  char cVar20;
  uint uVar21;
  float *UNRECOVERED_JUMPTABLE;
  float *pfVar22;
  float *pfVar23;
  undefined1 *puVar24;
  undefined2 uVar25;
  undefined6 uVar28;
  float *pfVar26;
  float *pfVar27;
  float *unaff_RBX;
  ulonglong *puVar29;
  longlong *plVar30;
  longlong *plVar31;
  longlong *plVar32;
  longlong *plVar33;
  longlong *plVar34;
  longlong *plVar35;
  float *pfVar36;
  undefined1 **ppuVar37;
  longlong *plVar38;
  undefined1 **ppuVar39;
  longlong *plVar40;
  longlong *plVar41;
  longlong *plVar42;
  longlong *plVar43;
  longlong *plVar44;
  longlong *plVar45;
  longlong *plVar46;
  longlong *plVar47;
  longlong *plVar48;
  longlong *plVar49;
  longlong *plVar50;
  longlong *plVar51;
  longlong *plVar52;
  longlong *plVar53;
  longlong *plVar54;
  float *unaff_RBP;
  float *pfVar55;
  code *pcVar56;
  undefined1 (*pauVar57) [16];
  code *pcVar58;
  ulonglong in_R10;
  undefined1 (*in_R11) [16];
  longlong unaff_R12;
  longlong unaff_R13;
  undefined8 unaff_R14;
  undefined8 *unaff_R15;
  longlong unaff_GS_OFFSET;
  bool bVar59;
  bool bVar60;
  bool bVar61;
  unkbyte10 in_ST0;
  float fVar62;
  float fVar63;
  undefined1 auVar64 [16];
  undefined8 extraout_XMM0_Qb_00;
  undefined8 extraout_XMM0_Qb_01;
  undefined8 extraout_XMM0_Qb_02;
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar75 [12];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  undefined8 extraout_XMM0_Qb_03;
  undefined1 auVar74 [16];
  undefined8 extraout_XMM0_Qb_04;
  char in_XMM1_Ba;
  undefined1 uVar76;
  char in_XMM1_Bb;
  undefined1 uVar77;
  char in_XMM1_Bc;
  undefined1 uVar78;
  char in_XMM1_Bd;
  undefined1 uVar79;
  char in_XMM1_Be;
  char in_XMM1_Bf;
  char in_XMM1_Bg;
  char in_XMM1_Bh;
  char in_XMM1_Bi;
  char in_XMM1_Bj;
  char in_XMM1_Bk;
  char in_XMM1_Bl;
  char in_XMM1_Bm;
  char in_XMM1_Bn;
  char in_XMM1_Bo;
  char in_XMM1_Bp;
  float in_XMM4_Da;
  float unaff_XMM6_Da;
  undefined4 unaff_XMM6_Db;
  undefined4 unaff_XMM6_Dc;
  undefined4 unaff_XMM6_Dd;
  float unaff_XMM7_Da;
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
  undefined4 unaff_XMM10_Da;
  undefined4 unaff_XMM10_Db;
  undefined4 unaff_XMM10_Dc;
  undefined4 unaff_XMM10_Dd;
  undefined1 unaff_XMM11 [16];
  float unaff_XMM12_Da;
  float unaff_XMM12_Db;
  undefined4 unaff_XMM12_Dc;
  float unaff_XMM12_Dd;
  undefined1 auStack_e19f [49213];
  undefined1 auStack_2162 [8378];
  undefined *puStack_a8;
  undefined1 *apuStack_a0 [4];
  undefined1 auStack_80 [8];
  undefined *puStack_78;
  longlong lStack_70;
  undefined1 *puStack_68;
  longlong lStack_58;
  undefined1 auStack_50 [8];
  float *pfStack_48;
  ulonglong uStack_38;
  undefined8 uStack_30;
  ulonglong uStack_28;
  undefined8 extraout_XMM0_Qb;
  
  plVar30 = &lStack_58;
  plVar34 = &lStack_58;
  plVar42 = &lStack_58;
  plVar32 = &lStack_58;
  plVar33 = &lStack_58;
  plVar38 = &lStack_58;
  ppuVar37 = (undefined1 **)&lStack_58;
  plVar40 = &lStack_58;
  plVar46 = &lStack_58;
  plVar41 = &lStack_58;
  plVar43 = &lStack_58;
  plVar49 = &lStack_58;
  plVar52 = &lStack_58;
  plVar45 = &lStack_58;
  plVar51 = &lStack_58;
  plVar54 = &lStack_58;
  plVar35 = &lStack_58;
  plVar48 = &lStack_58;
  plVar53 = &lStack_58;
  pfVar36 = (float *)&lStack_58;
  pfVar17 = (float *)&lStack_58;
  if (*(ulonglong *)(param_2 + 8) <= *(ulonglong *)(param_2 + 10)) {
LAB_141b6d4a2:
    uStack_38 = 5;
LAB_141b6d4ab:
    uVar11 = pdb_142d84ef0(param_2,&uStack_38);
    *(ulonglong *)(param_1 + 2) = uVar11;
    *(code *)param_1 = (code)0x1;
    return param_1;
  }
  pauVar57 = *(undefined1 (**) [16])(param_2 + 6);
  pcVar56 = (code *)0x100002600;
  uVar11 = *(ulonglong *)(param_2 + 10);
LAB_141b6d47c:
  uVar10 = uVar11 + 1;
  pcVar58 = (code *)(ulonglong)(byte)(*pauVar57)[uVar11];
  if (pcVar58 < (code *)0x23) {
    if ((0x100002600U >> ((ulonglong)pcVar58 & 0x3f) & 1) != 0) goto code_r0x000141b6d48e;
    if (pcVar58 != (code *)0x22) goto LAB_141b6d4f5;
    auVar64._0_8_ = pdb_1416573f0(&uStack_38);
    auVar64._8_8_ = extraout_XMM0_Qb;
    UNRECOVERED_JUMPTABLE = (float *)&UNK_1433981e0;
    uVar11 = (ulonglong)*(int *)(&UNK_1433981e0 + (uStack_38 & 0xff) * 4);
    bVar59 = 0xfffffffebcc67e1f < uVar11;
    UNRECOVERED_JUMPTABLE_00 = (float *)(&UNK_1433981e0 + uVar11);
    bVar61 = UNRECOVERED_JUMPTABLE_00 == (float *)0x0;
    bVar60 = (POPCOUNT((ulonglong)UNRECOVERED_JUMPTABLE_00 & 0xff) & 1U) == 0;
    bVar7 = (byte)UNRECOVERED_JUMPTABLE_00;
    uVar21 = (uint)UNRECOVERED_JUMPTABLE_00;
    uVar18 = (undefined7)((ulonglong)UNRECOVERED_JUMPTABLE_00 >> 8);
    uVar76 = SUB81(param_2,0);
    bVar19 = (byte)((ulonglong)param_2 >> 8);
    uVar28 = (undefined6)((ulonglong)param_2 >> 0x10);
    pfVar23 = UNRECOVERED_JUMPTABLE;
    pfVar26 = param_2;
    pfVar27 = param_2;
    plVar50 = &lStack_58;
    plVar47 = &lStack_58;
    plVar44 = &lStack_58;
    ppuVar39 = (undefined1 **)&lStack_58;
    pfVar22 = (float *)&lStack_58;
    plVar31 = &lStack_58;
    pfVar55 = unaff_RBP;
    auVar65 = auVar64;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(uStack_38 & 0xff) {
    case 0:
      *(code *)((longlong)param_1 + 1) = (code)0x0;
      goto code_r0x000141b6d5da;
    case 1:
      *(code *)((longlong)param_1 + 1) = (code)0x1;
      goto code_r0x000141b6d5da;
    case 2:
      *(code *)((longlong)param_1 + 1) = (code)0x2;
      goto code_r0x000141b6d5da;
    case 3:
      *(float **)(param_1 + 2) = uStack_30;
      *(code *)param_1 = (code)0x1;
      return param_1;
    case 4:
    case 5:
    case 6:
      goto code_r0x000141b6d527;
    case 7:
      pcVar56 = (code *)0x1300;
      UNRECOVERED_JUMPTABLE_00 = (float *)((ulonglong)UNRECOVERED_JUMPTABLE_00 & 0xffffffff);
      goto code_r0x000141b6d53a;
    case 8:
      pdb_141657680(CONCAT71(0x1433981,-0x20 - (&UNK_14339816d)[uVar11]));
      UNRECOVERED_JUMPTABLE_00 = (float *)((ulonglong)uStack_30 & 0xff);
      goto code_r0x000141b6d6a4;
    case 9:
    case 10:
    case 0xe:
      fsin(in_ST0);
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0xb:
      goto code_r0x000141b6d6fb;
    case 0xc:
    case 0xd:
      pauVar57[3][9] = pauVar57[3][9] + ' ';
      uRam0000000100002600 =
           CONCAT31(uRam0000000100002600._1_3_,
                    (byte)uRam0000000100002600 >> 1 | (byte)uRam0000000100002600 << 7);
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0xf:
      uRam0000000100002600 = uVar21;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0x10:
      *(byte *)UNRECOVERED_JUMPTABLE_00 = (char)*(code *)UNRECOVERED_JUMPTABLE_00 + bVar7;
      if ((int)pcVar58 == 0x7b) {
        pfVar17 = param_2 + 0x12;
        *(byte *)pfVar17 = (char)*(code *)pfVar17 - 1;
        if (*(code *)pfVar17 != (code)0x0) goto code_r0x000141b6d6d2;
        uStack_30 = (float *)0x18;
      }
      else {
        uStack_30 = (float *)0xa;
      }
      uVar11 = pdb_142d84ef0(param_2,&uStack_30);
      goto LAB_141b6d8b6;
    case 0x11:
      goto code_r0x000141b6d70c;
    case 0x12:
      (&UNK_143398169)[uVar11] = (&UNK_143398169)[uVar11] + -0x20;
      piVar15 = (int *)((ulonglong)(uVar21 >> 1) - 0x7b);
      *piVar15 = *piVar15 + -1;
      uRam0000000100002600 =
           CONCAT31(uRam0000000100002600._1_3_,
                    (byte)uRam0000000100002600 >> 4 | (byte)uRam0000000100002600 << 4);
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0x13:
      uVar11 = (ulonglong)UNRECOVERED_JUMPTABLE_00 & 0xffffffffffffff28;
      goto code_r0x000141b6d6e8;
    case 0x14:
      *(int *)((longlong)unaff_RBP + -0x26) = *(int *)((longlong)unaff_RBP + -0x26) + (int)param_1;
      goto code_r0x000141b6d884;
    case 0x15:
      goto code_r0x000141b6d7df;
    case 0x16:
      pfVar26 = (float *)(ulonglong)(uint)-(int)param_2;
      goto code_r0x000141b6d7a6;
    case 0x17:
      goto code_r0x000141b6d6fa;
    case 0x18:
      goto code_r0x000141b6d93c;
    case 0x19:
      UNRECOVERED_JUMPTABLE = (float *)(ulonglong)((int)param_2 + uVar21);
      uRam4c284189482f73cf = uVar21;
      goto code_r0x000141b6da3e;
    case 0x1a:
      *(char *)(unaff_RBX + 0xc) = (char)*(code *)(unaff_RBX + 0xc) << 1;
      goto code_r0x000141b6da1a;
    case 0x1b:
      (&UNK_1433981df)[uVar11] = ((&UNK_1433981df)[uVar11] + ' ') - bVar59;
      pbVar4 = &UNK_1433981d7 + uVar11;
      *pbVar4 = *pbVar4 >> 2 | *pbVar4 << 6;
      goto code_r0x000141b6da24;
    case 0x1c:
      goto code_r0x000141b6da11;
    case 0x1d:
      *(char *)(unaff_R13 + 0x50ce6078c) = *(char *)(unaff_R13 + 0x50ce6078c) + ' ';
      cVar20 = UNK_1433981df + -0x20;
      *(undefined4 *)(&UNK_1433981df + uVar11) = *(undefined4 *)(&UNK_1433981df + uVar11);
      pfVar23 = (float *)CONCAT71(0x1433981,cVar20);
      goto code_r0x000141b6da44;
    case 0x1e:
      goto code_r0x000141b6da3e;
    case 0x1f:
      pfVar26 = (float *)CONCAT62(uVar28,CONCAT11(0x4c,uVar76));
      param_2 = UNRECOVERED_JUMPTABLE;
      goto code_r0x000141b6da2a;
    case 0x20:
    case 0x21:
    case 0x22:
    case 0x23:
    case 0x24:
    case 0x25:
    case 0x26:
      *(int *)(&UNK_143398169 + uVar11) = *(int *)(&UNK_143398169 + uVar11) + 0x433981e0;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0x27:
      *UNRECOVERED_JUMPTABLE_00 = (float)((int)*UNRECOVERED_JUMPTABLE_00 + uVar21);
      UNK_143398163 = UNK_143398163 + -0x20;
      pfVar27 = (float *)CONCAT62(uVar28,CONCAT11(bVar19 & (byte)*(code *)(unaff_RBP + 10),uVar76));
      goto code_r0x000141b6d97d;
    case 0x28:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0x29:
    case 0x2a:
    case 0x2c:
      (&UNK_143398199)[uVar11] = (&UNK_143398199)[uVar11] + -0x20;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0x2b:
      pcVar56 = (code *)0x867303c0;
      goto code_r0x000141b6e844;
    case 0x2d:
      return UNRECOVERED_JUMPTABLE_00;
    case 0x2e:
      pcVar56 = (code *)swi(3);
      pfVar17 = (float *)(*pcVar56)();
      return pfVar17;
    case 0x2f:
      *unaff_RBX = (float)((int)*unaff_RBX + 0x433981e0);
      goto LAB_141b6e809;
    case 0x30:
      goto code_r0x000141b6e8b6;
    case 0x31:
      pfVar36 = (float *)&lStack_58;
      goto LAB_141b6e912;
    case 0x32:
      pfVar36 = (float *)&lStack_58;
      goto LAB_141b6e912;
    case 0x33:
      (&UNK_143398163)[uVar11] = (&UNK_143398163)[uVar11] | 0xe0;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0x34:
      goto code_r0x000141b6e958;
    case 0x35:
      goto code_r0x000141b6e8f6;
    case 0x36:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    default:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0x38:
      _UNK_1433981e0 = _UNK_1433981e0 + uVar21;
      goto code_r0x000141b6ea0e;
    case 0x3b:
      goto code_r0x000141b6e9bc;
    case 0x3c:
      return (float *)CONCAT71(uVar18,bVar7 + (char)*(code *)((longlong)unaff_RBX + 0x96677f2));
    case 0x3d:
      UNRECOVERED_JUMPTABLE = (float *)CONCAT71(0x1433981,(byte)uRam0000000100002600 | 0xe0);
      goto code_r0x000141b6eaa4;
    case 0x3e:
      goto code_r0x000141b6e9d8;
    case 0x3f:
      (&UNK_143398169)[uVar11] = (&UNK_143398169)[uVar11] + -0x20;
      pfVar26 = UNRECOVERED_JUMPTABLE;
      pfVar17 = (float *)&lStack_58;
      goto code_r0x000141b6ea27;
    case 0x41:
      pcVar56 = (code *)swi(3);
      pfVar17 = (float *)(*pcVar56)();
      return pfVar17;
    case 0x48:
      goto code_r0x000141b6eac6;
    case 0x49:
      *(byte *)UNRECOVERED_JUMPTABLE_00 = (char)*(code *)UNRECOVERED_JUMPTABLE_00 + bVar7;
      return UNRECOVERED_JUMPTABLE_00;
    case 0x4a:
      *(byte *)UNRECOVERED_JUMPTABLE_00 = (char)*(code *)UNRECOVERED_JUMPTABLE_00 + bVar7;
      uStack_30 = UNRECOVERED_JUMPTABLE_00;
      goto code_r0x000141b6eb71;
    case 0x4b:
      goto code_r0x000141b6eb3b;
    case 0x4c:
      if (!bVar59 && !bVar61) {
        *(int *)((longlong)param_1 + 0xf) = *(int *)((longlong)param_1 + 0xf) << 0x17;
        puVar29 = (ulonglong *)&stack0xffffffffffffffa0;
        cVar20 = '\x1e';
        do {
          unaff_RBP = unaff_RBP + -2;
          puVar29 = puVar29 + -1;
          *puVar29 = *(ulonglong *)unaff_RBP;
          cVar20 = cVar20 + -1;
        } while ('\0' < cVar20);
        *UNRECOVERED_JUMPTABLE_00 = (float)((int)*UNRECOVERED_JUMPTABLE_00 + 1);
        cRam0000000286730371 = cRam0000000286730371 + bVar19;
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      *(undefined8 *)((ulonglong)_UNK_143398243 - 8) = 0xf0a3348;
      pfVar26 = (float *)CONCAT62(uVar28,CONCAT11(0x52,uVar76));
      param_2 = UNRECOVERED_JUMPTABLE;
      goto code_r0x000141b6eb65;
    case 0x4d:
      *(byte *)UNRECOVERED_JUMPTABLE_00 = (char)*(code *)UNRECOVERED_JUMPTABLE_00 + bVar7;
      goto code_r0x000141b6eaf3;
    case 0x4e:
      in_XMM1_Ba = -(in_XMM1_Ba == UNK_142f87e10);
      in_XMM1_Bb = -(in_XMM1_Bb == UNK_142f87e11);
      in_XMM1_Bc = -(in_XMM1_Bc == UNK_142f87e12);
      in_XMM1_Bd = -(in_XMM1_Bd == UNK_142f87e13);
      in_XMM1_Be = -(in_XMM1_Be == UNK_142f87e14);
      in_XMM1_Bf = -(in_XMM1_Bf == UNK_142f87e15);
      in_XMM1_Bg = -(in_XMM1_Bg == UNK_142f87e16);
      in_XMM1_Bh = -(in_XMM1_Bh == UNK_142f87e17);
      in_XMM1_Bi = -(in_XMM1_Bi == UNK_142f87e18);
      in_XMM1_Bj = -(in_XMM1_Bj == UNK_142f87e19);
      in_XMM1_Bk = -(in_XMM1_Bk == UNK_142f87e1a);
      in_XMM1_Bl = -(in_XMM1_Bl == UNK_142f87e1b);
      in_XMM1_Bm = -(in_XMM1_Bm == UNK_142f87e1c);
      in_XMM1_Bn = -(in_XMM1_Bn == UNK_142f87e1d);
      in_XMM1_Bo = -(in_XMM1_Bo == UNK_142f87e1e);
      in_XMM1_Bp = -(in_XMM1_Bp == UNK_142f87e1f);
      auVar65[0] = -((char)auVar64._0_8_ == UNK_142f87e20);
      auVar65[1] = -((char)((ulonglong)auVar64._0_8_ >> 8) == UNK_142f87e21);
      auVar65[2] = -((char)((ulonglong)auVar64._0_8_ >> 0x10) == UNK_142f87e22);
      auVar65[3] = -((char)((ulonglong)auVar64._0_8_ >> 0x18) == UNK_142f87e23);
      auVar65[4] = -((char)((ulonglong)auVar64._0_8_ >> 0x20) == UNK_142f87e24);
      auVar65[5] = -((char)((ulonglong)auVar64._0_8_ >> 0x28) == UNK_142f87e25);
      auVar65[6] = -((char)((ulonglong)auVar64._0_8_ >> 0x30) == UNK_142f87e26);
      auVar65[7] = -((char)((ulonglong)auVar64._0_8_ >> 0x38) == UNK_142f87e27);
      auVar65[8] = -((char)extraout_XMM0_Qb == UNK_142f87e28);
      auVar65[9] = -((char)((ulonglong)extraout_XMM0_Qb >> 8) == UNK_142f87e29);
      auVar65[10] = -((char)((ulonglong)extraout_XMM0_Qb >> 0x10) == UNK_142f87e2a);
      auVar65[0xb] = -((char)((ulonglong)extraout_XMM0_Qb >> 0x18) == UNK_142f87e2b);
      auVar65[0xc] = -((char)((ulonglong)extraout_XMM0_Qb >> 0x20) == UNK_142f87e2c);
      auVar65[0xd] = -((char)((ulonglong)extraout_XMM0_Qb >> 0x28) == UNK_142f87e2d);
      auVar65[0xe] = -((char)((ulonglong)extraout_XMM0_Qb >> 0x30) == UNK_142f87e2e);
      auVar65[0xf] = -((char)((ulonglong)extraout_XMM0_Qb >> 0x38) == UNK_142f87e2f);
      goto code_r0x000141b6ebb7;
    case 0x4f:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0x50:
    case 0x51:
    case 0x52:
    case 0x56:
      pcVar56 = (code *)swi(3);
      pfVar17 = (float *)(*pcVar56)();
      return pfVar17;
    case 0x53:
      UNK_143398198 = UNK_143398198 ^ bVar7;
      pcVar13 = (char *)CONCAT71(uVar18,bVar7 + (char)*(code *)UNRECOVERED_JUMPTABLE_00);
      *pcVar13 = *pcVar13 + bVar7 + (char)*(code *)UNRECOVERED_JUMPTABLE_00;
      pfVar17 = (float *)pdb_140f66090(pcVar13);
      return pfVar17;
    case 0x54:
      pcVar56 = (code *)swi(3);
      pfVar17 = (float *)(*pcVar56)();
      return pfVar17;
    case 0x55:
      goto code_r0x000141b6ee7a;
    case 0x57:
      goto code_r0x000141b6ef32;
    case 0x58:
      uStack_30 = UNRECOVERED_JUMPTABLE_00;
      goto code_r0x000141b6f00c;
    case 0x59:
    case 0x5c:
    case 0x5e:
    case 0x5f:
    case 0x60:
    case 0x61:
    case 0x62:
    case 99:
    case 100:
      goto code_r0x000141b6efe2;
    case 0x5a:
      (&UNK_143398165)[uVar11] = (&UNK_143398165)[uVar11] + -0x20 + bVar59;
      (&UNK_143398228)[(longlong)((longlong)unaff_RBX + uVar11)] =
           (&UNK_143398228)[(longlong)((longlong)unaff_RBX + uVar11)];
      goto code_r0x000141b6ef96;
    case 0x5b:
      goto code_r0x000141b6f02e;
    case 0x5d:
      goto code_r0x000141b6f04b;
    case 0x65:
      goto code_r0x0001409a45e0;
    case 0x66:
    case 0x67:
      goto code_r0x000141b6ef0d;
    case 0x68:
      *(byte *)UNRECOVERED_JUMPTABLE_00 = (char)*(code *)UNRECOVERED_JUMPTABLE_00 + bVar7;
      *(byte *)UNRECOVERED_JUMPTABLE_00 = (char)*(code *)UNRECOVERED_JUMPTABLE_00 + bVar7;
      goto DAT_141b6efd0;
    case 0x69:
    case 0x6a:
    case 0x6b:
      goto code_r0x000141b6ef47;
    case 0x6c:
      param_1[4] = 1.36318e-41;
      plVar46 = &lStack_58;
      goto code_r0x000141b6f6ab;
    case 0x6d:
      *(code *)((longlong)unaff_RBX + 0x5f) =
           (code)((char)*(code *)((longlong)unaff_RBX + 0x5f) - (char)unaff_RBX);
      return UNRECOVERED_JUMPTABLE_00;
    case 0x6e:
      piVar15 = (int *)(&UNK_14339816b + uVar11);
      iVar9 = *piVar15;
      *piVar15 = *piVar15 + 0x433981e0;
      if (*piVar15 != 0 && SCARRY4(iVar9,0x433981e0) == *piVar15 < 0) goto code_r0x000141b6f6ab;
      UNRECOVERED_JUMPTABLE_00 = (float *)(ulonglong)(uint)param_1[2];
      goto code_r0x000141b6f6ff;
    case 0x6f:
      goto code_r0x000141b6f6fa;
    case 0x70:
      goto code_r0x000141b6f6d4;
    case 0x71:
      piVar15 = (int *)((ulonglong)UNRECOVERED_JUMPTABLE_00 & 0xffffffffffffff20);
      *piVar15 = *piVar15 + (int)piVar15;
      *(char *)piVar15 = (char)*piVar15 + (char)piVar15;
      goto code_r0x000141b6f725;
    case 0x72:
      goto code_r0x000141b6f7cd;
    case 0x73:
      goto code_r0x000141b6f944;
    case 0x74:
      plVar50 = (longlong *)auStack_50;
      goto code_r0x000141b6f897;
    case 0x75:
      auVar65._0_4_ = (float)auVar64._0_8_ * unaff_XMM8_Da;
      auVar65._4_4_ = (float)((ulonglong)auVar64._0_8_ >> 0x20) * unaff_XMM8_Db;
      auVar65._8_4_ = (float)extraout_XMM0_Qb * unaff_XMM8_Dc;
      auVar65._12_4_ = (float)((ulonglong)extraout_XMM0_Qb >> 0x20) * unaff_XMM8_Dd;
      plVar50 = &lStack_58;
      unaff_XMM8_Dc = unaff_XMM9_Da;
      goto code_r0x000141b6f8e1;
    case 0x76:
      plVar50 = &lStack_58;
      goto code_r0x000141b6f81d;
    case 0x77:
      plVar50 = &lStack_58;
      goto code_r0x000141b6f9ed;
    case 0x78:
      UNK_143398199 = UNK_143398199 + bVar7;
      *UNRECOVERED_JUMPTABLE_00 = (float)((int)*UNRECOVERED_JUMPTABLE_00 + uVar21);
      *(byte *)UNRECOVERED_JUMPTABLE_00 = (char)*(code *)UNRECOVERED_JUMPTABLE_00 + bVar7;
      param_2 = param_1;
      goto code_r0x000141b6f77e;
    case 0x79:
      goto code_r0x000141b6f993;
    case 0x7a:
      plVar50 = &lStack_58;
      goto code_r0x000141b6f81d;
    case 0x7b:
      param_2 = (float *)((ulonglong)param_1 & 0xffffffff);
      goto code_r0x000141b6f77e;
    case 0x7c:
      goto code_r0x000141b6f81d;
    case 0x7d:
      *(int *)(&UNK_143398243 + uVar11) = *(int *)(&UNK_143398243 + uVar11) + 0x433981e0;
      puVar16 = (undefined *)((ulonglong)UNRECOVERED_JUMPTABLE_00 | 0xb8);
      goto code_r0x000141b6f990;
    }
  }
LAB_141b6d4f5:
  if ((*pauVar57)[uVar11] != 0x7b) {
    uStack_38 = 10;
    goto LAB_141b6d4ab;
  }
  pfVar55 = param_2 + 0x12;
  *(byte *)pfVar55 = (char)*(code *)pfVar55 - 1;
  if (*(code *)pfVar55 == (code)0x0) {
    uStack_38 = 0x18;
    goto LAB_141b6d4ab;
  }
  *(ulonglong *)(param_2 + 10) = uVar10;
  auVar65._0_8_ = pdb_141653c20(&uStack_38);
  auVar65._8_8_ = extraout_XMM0_Qb_00;
  UNRECOVERED_JUMPTABLE = (float *)(uStack_38 & 0xff);
  UNRECOVERED_JUMPTABLE_00 = uStack_30;
  unaff_RBX = param_2;
  pfVar55 = UNRECOVERED_JUMPTABLE;
code_r0x000141b6d527:
  pfVar26 = (float *)&UNK_1433981f0;
  uVar11 = (ulonglong)*(int *)(&UNK_1433981f0 + (longlong)UNRECOVERED_JUMPTABLE * 4);
  bVar59 = 0xfffffffebcc67e0f < uVar11;
  bVar61 = SCARRY8(uVar11,0x1433981f0);
  param_2 = (float *)(&UNK_1433981f0 + uVar11);
  bVar60 = param_2 == (float *)0x0;
  bVar7 = (byte)UNRECOVERED_JUMPTABLE_00;
  iVar9 = (int)UNRECOVERED_JUMPTABLE_00;
  uVar18 = (undefined7)((ulonglong)UNRECOVERED_JUMPTABLE_00 >> 8);
  bVar19 = (byte)param_2;
  cVar20 = (char)((ulonglong)param_2 >> 8);
  pfVar22 = param_2;
  pfVar23 = param_2;
  pfVar27 = pfVar26;
  plVar50 = &lStack_58;
  ppuVar37 = (undefined1 **)&lStack_58;
  plVar46 = &lStack_58;
  plVar40 = &lStack_58;
  auVar72 = auVar65;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(UNRECOVERED_JUMPTABLE) {
  case (float *)0x0:
  case (float *)0x1:
  case (float *)0x2:
code_r0x000141b6d53a:
    UNRECOVERED_JUMPTABLE_00 = (float *)pdb_141654940(UNRECOVERED_JUMPTABLE_00);
    if (UNRECOVERED_JUMPTABLE_00 != (float *)0x0) {
code_r0x000141b6d544:
      *(float **)(param_1 + 2) = UNRECOVERED_JUMPTABLE_00;
      *(code *)param_1 = (code)0x1;
      *(byte *)(unaff_RBX + 0x12) = (char)*(code *)(unaff_RBX + 0x12) + 1;
      return param_1;
    }
    *(byte *)(unaff_RBX + 0x12) = (char)*(code *)(unaff_RBX + 0x12) + 1;
    *(code *)((longlong)param_1 + 1) = SUB81(pfVar55,0);
    uVar11 = *(ulonglong *)(unaff_RBX + 10);
    if (*(ulonglong *)(unaff_RBX + 8) <= uVar11) goto code_r0x000141b6d59a;
    goto code_r0x000141b6d574;
  case (float *)0x3:
    goto code_r0x000141b6d544;
  case (float *)0x4:
code_r0x000141b6d6a4:
                    /* WARNING: Could not recover jumptable at 0x000141b6d6b2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pfVar17 = (float *)(*(code *)(&UNK_143398200 +
                                 *(int *)(&UNK_143398200 + (longlong)UNRECOVERED_JUMPTABLE_00 * 4)))
                                 ();
    return pfVar17;
  case (float *)0x5:
  case (float *)0x6:
  case (float *)0xa:
code_r0x000141b6d847:
    param_1[1] = uStack_30._4_4_;
    fVar62 = 8.40779e-45;
    break;
  case (float *)0x7:
    goto code_r0x000141b6d70b;
  case (float *)0x8:
  case (float *)0x9:
    uVar21 = iVar9 + (int)*UNRECOVERED_JUMPTABLE_00;
    *(char *)(ulonglong)uVar21 = *(char *)(ulonglong)uVar21 + (char)uVar21;
    goto code_r0x000141b6d88d;
  case (float *)0xb:
    *(int *)((longlong)UNRECOVERED_JUMPTABLE_00 + -0x7b) =
         *(int *)((longlong)UNRECOVERED_JUMPTABLE_00 + -0x7b) + -1;
    *(code *)((longlong)pfVar55 + 0x2d) = (code)0x0;
code_r0x000141b6d70b:
    *UNRECOVERED_JUMPTABLE_00 = (float)((int)*UNRECOVERED_JUMPTABLE_00 + iVar9);
    *(code *)((longlong)UNRECOVERED_JUMPTABLE_00 + -0x75) =
         *(code *)((longlong)UNRECOVERED_JUMPTABLE_00 + -0x75);
    uVar11 = (ulonglong)UNRECOVERED_JUMPTABLE_00 & 0xffffffffffffff30;
    goto LAB_141b6d8b6;
  case (float *)0xc:
    cVar8 = *(code *)UNRECOVERED_JUMPTABLE_00;
    lVar12 = CONCAT71(uVar18,bVar7 + (char)cVar8);
    pcVar13 = (char *)(lVar12 + -0x77);
    *pcVar13 = *pcVar13 + bVar19;
    pcVar13 = (char *)(lVar12 + -0x73);
    *pcVar13 = *pcVar13 - bVar19;
    UNRECOVERED_JUMPTABLE_00 = (float *)(CONCAT71(uVar18,bVar7 + (char)cVar8) & 0xffffffffffffff28);
code_r0x000141b6d6d2:
    *(float **)(pfVar26 + 10) = UNRECOVERED_JUMPTABLE_00;
    pdb_141653790(&uStack_30);
    uVar11 = (ulonglong)uStack_30 & 0xff;
    goto code_r0x000141b6d6e8;
  case (float *)0xd:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (float *)0xe:
    *(byte *)UNRECOVERED_JUMPTABLE_00 = (char)*(code *)UNRECOVERED_JUMPTABLE_00 + bVar7;
    goto code_r0x000141b6d737;
  case (float *)0xf:
    uVar11 = CONCAT71(uVar18,bVar7 + 0x81);
code_r0x000141b6d6e8:
    UNRECOVERED_JUMPTABLE_00 = (float *)(&UNK_143398220 + *(int *)(&UNK_143398220 + uVar11 * 4));
code_r0x000141b6d6fb:
                    /* WARNING: Could not recover jumptable at 0x000141b6d6fb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pfVar17 = (float *)(*(code *)UNRECOVERED_JUMPTABLE_00)();
    return pfVar17;
  case (float *)0x10:
    *UNRECOVERED_JUMPTABLE_00 = (float)((int)*UNRECOVERED_JUMPTABLE_00 + iVar9);
    *(code *)((longlong)UNRECOVERED_JUMPTABLE_00 + -0x77) =
         (code)((char)*(code *)((longlong)UNRECOVERED_JUMPTABLE_00 + -0x77) + bVar19);
    *(byte *)UNRECOVERED_JUMPTABLE_00 = (char)*(code *)UNRECOVERED_JUMPTABLE_00 + bVar7;
    pdb_14164eb50(&uStack_30);
    bVar59 = (int)uStack_30 == 1;
code_r0x000141b6d7f3:
    if (!bVar59) goto code_r0x000141b6d847;
    *(ulonglong *)(param_1 + 2) = uStack_28;
    fVar62 = 9.80909e-45;
    break;
  case (float *)0x11:
    if (-0x1433981f1 < (longlong)uVar11) {
      *(byte *)param_2 = (char)*(code *)param_2 - bVar7;
      bVar59 = *(code *)param_2 == (code)0x0;
      goto code_r0x000141b6d7f3;
    }
    pdb_141654a60(param_1);
    fVar62 = *param_1;
    *(byte *)(unaff_RBX + 0x12) = (char)*(code *)(unaff_RBX + 0x12) + 1;
    if (fVar62 == 9.80909e-45) {
      return param_1;
    }
    goto code_r0x000141b6d78b;
  case (float *)0x12:
    UNRECOVERED_JUMPTABLE = (float *)(ulonglong)(iVar9 + 0x433981f0);
    plVar32 = &lStack_58;
    iRam4c284189481973cf = iVar9;
    goto code_r0x000141b6d7b8;
  case (float *)0x13:
    goto code_r0x000141b6d70a;
  case (float *)0x14:
    goto code_r0x000141b6d94c;
  case (float *)0x15:
    UNRECOVERED_JUMPTABLE_00 = (float *)(ulonglong)(iVar9 + 1);
    goto code_r0x000141b6da44;
  case (float *)0x16:
    pcVar56 = (code *)CONCAT71(0x1000026,(char)unaff_R15);
    goto code_r0x000141b6da2a;
  case (float *)0x17:
    bRam0000000100002635 = bRam0000000100002635 & 0x81;
    UNRECOVERED_JUMPTABLE = param_2;
    param_2 = pfVar26;
    goto code_r0x000141b6da30;
  case (float *)0x18:
    goto code_r0x000141b6da21;
  case (float *)0x19:
    goto code_r0x000141b6da48;
  case (float *)0x1a:
    *(byte *)unaff_RBX = (byte)*(code *)unaff_RBX & bVar7;
    *(byte *)UNRECOVERED_JUMPTABLE_00 = (char)*(code *)UNRECOVERED_JUMPTABLE_00 + bVar7;
    *(code *)((longlong)UNRECOVERED_JUMPTABLE_00 + -0x73) =
         (code)((char)*(code *)((longlong)UNRECOVERED_JUMPTABLE_00 + -0x73) + bVar19);
    plVar35 = (longlong *)&stack0xffffffffffffffa0;
    goto code_r0x000141b6da53;
  case (float *)0x1b:
    return UNRECOVERED_JUMPTABLE_00;
  case (float *)0x1c:
  case (float *)0x1d:
  case (float *)0x1e:
  case (float *)0x1f:
  case (float *)0x20:
  case (float *)0x21:
  case (float *)0x22:
    goto LAB_141b6d977;
  case (float *)0x23:
    pcVar56 = (code *)0x100002601;
    iVar9 = CONCAT13(uRam0000000100002604,uRam0000000100002600._1_3_) + -1;
    uRam0000000100002600._1_3_ = (undefined3)iVar9;
    uRam0000000100002604 = (undefined1)((uint)iVar9 >> 0x18);
    pfVar27 = (float *)&UNK_1433944f0;
    goto code_r0x000141b6d97d;
  case (float *)0x24:
    unaff_RBX[(longlong)pfVar55 * 2] = (float)((int)unaff_RBX[(longlong)pfVar55 * 2] + iVar9);
    *(code *)((longlong)UNRECOVERED_JUMPTABLE_00 + 1) = (code)0x3;
    goto LAB_141b6e809;
  case (float *)0x25:
  case (float *)0x26:
  case (float *)0x28:
    (&UNK_143398173)[uVar11] = (&UNK_143398173)[uVar11] | bVar19;
    pcVar56 = (code *)swi(1);
    pfVar17 = (float *)(*pcVar56)();
    return pfVar17;
  case (float *)0x27:
    bVar60 = _UNK_1433981f0 == 0x6c6c6157;
    goto code_r0x000141b6e858;
  case (float *)0x29:
    UNRECOVERED_JUMPTABLE_00 = (float *)((ulonglong)param_1 & 0xffffffff);
    *(float **)(param_1 + 2) = param_2;
    param_2 = (float *)0x1;
    goto LAB_141b6e80b;
  case (float *)0x2a:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (float *)0x2b:
    auVar65._0_8_ = rdtsc();
    UNRECOVERED_JUMPTABLE_00 =
         (float *)CONCAT44((int)((ulonglong)UNRECOVERED_JUMPTABLE_00 >> 0x20),(int)auVar65._0_8_);
    goto LAB_141b6e80b;
  case (float *)0x2c:
    goto code_r0x000141b6e8c6;
  case (float *)0x2d:
    bVar60 = false;
    UNRECOVERED_JUMPTABLE_00 = (float *)CONCAT71(uVar18,bVar7 | (&UNK_1433981a9)[uVar11]);
    UNRECOVERED_JUMPTABLE = param_2;
    goto code_r0x000141b6e8eb;
  case (float *)0x2e:
    *(byte *)(uVar11 + 0x18b4209f1) = *(byte *)(uVar11 + 0x18b4209f1) | 0x81;
    UNRECOVERED_JUMPTABLE = param_2;
    goto code_r0x000141b6e936;
  case (float *)0x2f:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (float *)0x30:
    goto code_r0x000141b6e966;
  case (float *)0x31:
    *param_2 = (float)((int)*param_2 + iVar9);
    goto code_r0x000141b6e908;
  case (float *)0x32:
    pfVar17 = (float *)&stack0xffffffffffffffa0;
    if (bVar59) {
      return UNRECOVERED_JUMPTABLE_00;
    }
    goto code_r0x000141b6e9ad;
  case (float *)0x33:
  case (float *)0x35:
  case (float *)0x36:
  case (float *)0x3c:
  case (float *)0x3e:
  case (float *)0x3f:
  case (float *)0x40:
  case (float *)0x41:
  case (float *)0x42:
  case (float *)0x43:
    param_1 = (float *)(ulonglong)(uint)((int)unaff_RBX[0x1a] * 0x48666f5f);
    goto code_r0x000141b6eb07;
  case (float *)0x34:
    *(code *)((longlong)param_1 + -0x3d) =
         (code)((byte)*(code *)((longlong)param_1 + -0x3d) & (byte)unaff_RBX);
    goto code_r0x000141b6ea27;
  case (float *)0x37:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (float *)0x38:
    goto code_r0x000141b6ea8d;
  case (float *)0x39:
    UNRECOVERED_JUMPTABLE = (float *)(CONCAT44(_UNK_1433981f4,_UNK_1433981f0) ^ 0x61635f6863746970);
    pauVar57 = (undefined1 (*) [16])
               (CONCAT17(UNK_1433981fa,
                         CONCAT16(UNK_1433981f9,
                                  CONCAT15(UNK_1433981f8,CONCAT41(_UNK_1433981f4,UNK_1433981f3)))) ^
               0x65686361635f6863);
code_r0x000141b6eac6:
    uStack_30 = UNRECOVERED_JUMPTABLE_00;
    if (pauVar57 == *(undefined1 (**) [16])((longlong)pfVar26 + unaff_GS_OFFSET + 3) &&
        UNRECOVERED_JUMPTABLE == (float *)0x0) {
      param_2 = (float *)0x1;
      goto code_r0x000141b6ead6;
    }
    goto LAB_141b6ebc7;
  case (float *)0x3a:
    goto code_r0x000141b6e9e8;
  case (float *)0x3b:
    UNRECOVERED_JUMPTABLE_00 = (float *)CONCAT71(uVar18,bVar7 & (byte)*(code *)param_2);
    pfVar26 = param_2;
    pfVar17 = (float *)&lStack_58;
    goto code_r0x000141b6ea27;
  case (float *)0x3d:
    *(short *)UNRECOVERED_JUMPTABLE_00 =
         *(short *)UNRECOVERED_JUMPTABLE_00 + (short)UNRECOVERED_JUMPTABLE_00;
    *(code *)((longlong)UNRECOVERED_JUMPTABLE_00 + -0x73) =
         (code)((char)*(code *)((longlong)UNRECOVERED_JUMPTABLE_00 + -0x73) + bVar19);
    goto code_r0x000141b6ea68;
  case (float *)0x44:
code_r0x000141b6ead6:
    *(code *)((longlong)UNRECOVERED_JUMPTABLE_00 + 1) = SUB81(param_2,0);
    uStack_30 = UNRECOVERED_JUMPTABLE_00;
    goto code_r0x000141b6ead9;
  case (float *)0x45:
    goto code_r0x000141b6eae8;
  case (float *)0x46:
    uStack_30 = UNRECOVERED_JUMPTABLE_00;
    if (CONCAT11(UNK_1433981f9,UNK_1433981f8) != 0x7465 ||
        param_2 != (float *)CONCAT44(_UNK_1433981f4,_UNK_1433981f0)) goto LAB_141b6ebc7;
    goto code_r0x000141b6eb95;
  case (float *)0x47:
    if ((POPCOUNT((ulonglong)param_2 & 0xff) & 1U) != 0) {
      if (bVar61) goto code_r0x000141b6eb69;
      goto code_r0x000141b6eb00;
    }
    param_2 = (float *)(CONCAT44(_UNK_1433981f4,_UNK_1433981f0) ^ 0x686361635f776179);
    pfVar26 = (float *)((ulonglong)UNK_1433981f8 ^ 0x65 | (ulonglong)param_2);
    goto code_r0x000141b6eb65;
  case (float *)0x48:
code_r0x000141b6eb69:
    pfVar26 = (float *)((ulonglong)param_2 | 0x1433981f0);
    goto code_r0x000141b6eb65;
  case (float *)0x49:
    goto code_r0x000141b6eb01;
  case (float *)0x4a:
code_r0x000141b6ebb7:
    auVar6[1] = in_XMM1_Bb;
    auVar6[0] = in_XMM1_Ba;
    auVar6[2] = in_XMM1_Bc;
    auVar6[3] = in_XMM1_Bd;
    auVar6[4] = in_XMM1_Be;
    auVar6[5] = in_XMM1_Bf;
    auVar6[6] = in_XMM1_Bg;
    auVar6[7] = in_XMM1_Bh;
    auVar6[8] = in_XMM1_Bi;
    auVar6[9] = in_XMM1_Bj;
    auVar6[10] = in_XMM1_Bk;
    auVar6[0xb] = in_XMM1_Bl;
    auVar6[0xc] = in_XMM1_Bm;
    auVar6[0xd] = in_XMM1_Bn;
    auVar6[0xe] = in_XMM1_Bo;
    auVar6[0xf] = in_XMM1_Bp;
    auVar65 = auVar65 & auVar6;
    goto code_r0x000141b6ebbb;
  case (float *)0x4b:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (float *)0x4c:
  case (float *)0x4d:
  case (float *)0x4e:
  case (float *)0x52:
code_r0x000141b6ee7a:
  case (float *)0x51:
    UNRECOVERED_JUMPTABLE = param_2;
    goto pdb_140f679a0;
  case (float *)0x4f:
    return UNRECOVERED_JUMPTABLE_00;
  case (float *)0x50:
    pcVar56 = (code *)swi(3);
    pfVar17 = (float *)(*pcVar56)(CONCAT71((int7)((ulonglong)param_2 >> 8),bVar19 + cVar20));
    return pfVar17;
  case (float *)0x53:
    UNRECOVERED_JUMPTABLE_00 =
         (float *)(ulonglong)(uint)(int)(short)CONCAT71(uVar18,(bVar7 - cVar20) - bVar59);
    ppuVar37 = (undefined1 **)&stack0xffffffffffffffa0;
    do {
    } while (param_2 == (float *)0x0);
    goto code_r0x000141b6ef49;
  case (float *)0x54:
    goto code_r0x000141b6f01a;
  case (float *)0x55:
  case (float *)0x58:
  case (float *)0x5a:
  case (float *)0x5b:
  case (float *)0x5c:
  case (float *)0x5d:
  case (float *)0x5e:
  case (float *)0x5f:
  case (float *)0x60:
    *(byte *)UNRECOVERED_JUMPTABLE_00 = (char)*(code *)UNRECOVERED_JUMPTABLE_00 + bVar7;
    *(code *)((longlong)UNRECOVERED_JUMPTABLE_00 + -0x75) =
         (code)((char)*(code *)((longlong)UNRECOVERED_JUMPTABLE_00 + -0x75) + bVar19);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (float *)0x56:
    goto code_r0x000141b6ef9c;
  case (float *)0x57:
    UNRECOVERED_JUMPTABLE = param_2;
    plVar44 = &lStack_58;
    goto code_r0x000141b6f02e;
  case (float *)0x59:
    pcVar13 = &UNK_1433981b1 + uVar11;
    *pcVar13 = *pcVar13 + bVar19;
    UNRECOVERED_JUMPTABLE = (float *)(&UNK_1433981ef + uVar11);
    if (UNRECOVERED_JUMPTABLE != (float *)0x0 && *pcVar13 != '\0') {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    pauVar57 = (undefined1 (*) [16])((longlong)pauVar57 * 3);
    goto code_r0x000141b6f064;
  case (float *)0x61:
    goto DAT_141b6efd0;
  case (float *)0x62:
  case (float *)0x63:
    if (bVar60) {
      return UNRECOVERED_JUMPTABLE_00;
    }
    UNRECOVERED_JUMPTABLE = *(float **)(pauVar57[1] + 8);
    pauVar57 = (undefined1 (*) [16])0x1;
    plVar38 = (longlong *)&stack0xfffffffffffffff0;
code_r0x000141b6ef32:
    goto code_r0x0001406abac0;
  case (float *)0x64:
    goto code_r0x000141b6efda;
  case (float *)0x65:
  case (float *)0x66:
  case (float *)0x67:
    goto code_r0x000141b6ef57;
  case (float *)0x68:
    *(byte *)UNRECOVERED_JUMPTABLE_00 = (char)*(code *)UNRECOVERED_JUMPTABLE_00 + bVar7;
    (&UNK_1433981a9)[uVar11] = (&UNK_1433981a9)[uVar11] + bVar7;
    *UNRECOVERED_JUMPTABLE_00 = (float)((int)*UNRECOVERED_JUMPTABLE_00 + iVar9);
    *(byte *)UNRECOVERED_JUMPTABLE_00 = (char)*(code *)UNRECOVERED_JUMPTABLE_00 + bVar7;
    plVar47 = &lStack_58;
    goto code_r0x000141b6f6d4;
  case (float *)0x69:
    goto code_r0x000141b6f718;
  case (float *)0x6a:
    UNRECOVERED_JUMPTABLE_00 = (float *)((ulonglong)&lStack_58 & 0xffffffff);
    *(char *)UNRECOVERED_JUMPTABLE_00 =
         (char)*(code *)UNRECOVERED_JUMPTABLE_00 + (char)UNRECOVERED_JUMPTABLE_00;
    UNRECOVERED_JUMPTABLE = param_2;
code_r0x000141b6f6fa:
    *(code *)((longlong)UNRECOVERED_JUMPTABLE_00 + -0x75) =
         (code)((char)*(code *)((longlong)UNRECOVERED_JUMPTABLE_00 + -0x75) +
               (char)UNRECOVERED_JUMPTABLE);
    param_1 = (float *)CONCAT71((int7)((ulonglong)param_1 >> 8),(byte)param_1 | (byte)pauVar57);
    cVar20 = (char)UNRECOVERED_JUMPTABLE_00;
    UNRECOVERED_JUMPTABLE_00 =
         (float *)CONCAT71((int7)((ulonglong)UNRECOVERED_JUMPTABLE_00 >> 8),cVar20 + '8');
    if (-0x39 < cVar20) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    pcVar56 = (code *)0x2601;
    goto code_r0x000141b6f6ff;
  case (float *)0x6b:
    goto code_r0x000141b6f70a;
  case (float *)0x6c:
    puStack_68 = &stack0xffffffffffffffa0;
    plVar46 = (longlong *)auStack_2162;
    goto code_r0x000141b6f6e8;
  case (float *)0x6d:
    *(byte *)UNRECOVERED_JUMPTABLE_00 = (char)*(code *)UNRECOVERED_JUMPTABLE_00 + bVar7;
    goto code_r0x000141b6f734;
  case (float *)0x6e:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (float *)0x6f:
    goto code_r0x000141b6f954;
  case (float *)0x70:
    goto code_r0x000141b6f8a3;
  case (float *)0x71:
    goto code_r0x000141b6f8ed;
  case (float *)0x72:
    goto code_r0x000141b6f84d;
  case (float *)0x73:
    plVar50 = (longlong *)auStack_50;
    if (lStack_58 == 1 || !bVar60) {
      plVar50 = (longlong *)auStack_50;
    }
    goto code_r0x000141b6f9ed;
  case (float *)0x74:
    *(byte *)param_2 = (byte)*(code *)param_2 & bVar7;
    goto code_r0x000141b6f77e;
  case (float *)0x75:
    auVar72._0_4_ = auVar65._0_4_ * unaff_XMM7_Da;
    auVar72._4_4_ = 0;
    auVar72._8_4_ = auVar65._8_4_ * unaff_XMM7_Dc;
    auVar72._12_4_ = auVar65._12_4_ * unaff_XMM7_Dd;
  default:
    auVar71._4_4_ = unaff_XMM9_Db;
    auVar71._0_4_ = unaff_XMM9_Da;
    auVar71._8_4_ = unaff_XMM9_Dc;
    auVar71._12_4_ = unaff_XMM9_Dd;
    auVar73._4_12_ = auVar71._4_12_;
    fVar62 = unaff_XMM9_Da * unaff_XMM7_Da +
             (float)CONCAT13(in_XMM1_Bd,CONCAT12(in_XMM1_Bc,CONCAT11(in_XMM1_Bb,in_XMM1_Ba))) *
             auVar72._0_4_;
    auVar73._0_4_ = fVar62 + fVar62;
    auVar65._0_8_ = pub_142e32980(auVar73._0_8_);
    auVar65._8_8_ = extraout_XMM0_Qb_03;
    plVar53 = &lStack_58;
    goto code_r0x000141b6f9c6;
  case (float *)0x76:
    UNRECOVERED_JUMPTABLE = param_2;
    plVar50 = (longlong *)&stack0xffffffffffffffa0;
    goto code_r0x000141b6f81d;
  case (float *)0x77:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (float *)0x78:
    goto code_r0x000141b6f82d;
  }
  *param_1 = fVar62;
  *(byte *)(unaff_RBX + 0x12) = (char)*(code *)(unaff_RBX + 0x12) + 1;
  if (fVar62 == 9.80909e-45) {
    return param_1;
  }
code_r0x000141b6d78b:
  uVar11 = *(ulonglong *)(unaff_RBX + 8);
  uVar10 = *(ulonglong *)(unaff_RBX + 10);
  UNRECOVERED_JUMPTABLE = unaff_RBX;
  plVar32 = &lStack_58;
  plVar33 = &lStack_58;
  if (uVar11 <= uVar10) goto code_r0x000141b6d884;
  goto code_r0x000141b6d79c;
code_r0x000141b6d48e:
  *(ulonglong *)(param_2 + 10) = uVar10;
  uVar11 = uVar10;
  if (uVar10 == *(ulonglong *)(param_2 + 8)) goto LAB_141b6d4a2;
  goto LAB_141b6d47c;
code_r0x000141b6d94c:
  param_2 = pfVar26;
  UNRECOVERED_JUMPTABLE = pfVar22;
  pfVar27 = param_2;
  if (pcVar58 == (code *)0x1) goto LAB_141b6d952;
  pcVar58 = (code *)(ulonglong)(byte)(pauVar57[-1] + 0xf)[(longlong)UNRECOVERED_JUMPTABLE_00];
  if ((code *)0x22 < pcVar58) goto LAB_141b6d9a5;
  bVar59 = (0x100002600U >> ((ulonglong)pcVar58 & 0x3f) & 1) != 0;
code_r0x000141b6d93c:
  pfVar27 = param_2;
  if (!bVar59) goto LAB_141b6d977;
  *(float **)(param_2 + 10) = UNRECOVERED_JUMPTABLE_00;
  pcVar58 = (code *)((longlong)UNRECOVERED_JUMPTABLE_00 + 1) + (longlong)UNRECOVERED_JUMPTABLE;
  UNRECOVERED_JUMPTABLE_00 = (float *)((longlong)UNRECOVERED_JUMPTABLE_00 + 1);
  pfVar22 = UNRECOVERED_JUMPTABLE;
  pfVar26 = param_2;
  goto code_r0x000141b6d94c;
LAB_141b6d952:
  uStack_38 = 5;
  goto LAB_141b6d95b;
code_r0x000141b6fa13:
  auVar74._4_12_ = auVar65._4_12_;
  auVar74._0_4_ =
       ((float)auVar65._0_8_ -
       (float)CONCAT13(in_XMM1_Bd,CONCAT12(in_XMM1_Bc,CONCAT11(in_XMM1_Bb,in_XMM1_Ba))) * in_XMM4_Da
       ) * _DAT_142e37890;
  auVar65._0_8_ = auVar74._0_8_;
  plVar50 = plVar54;
code_r0x000141b6fa22:
  *(undefined **)((longlong)plVar50 + -8) = &UNK_141b6fa3a;
  auVar65._0_8_ = pub_142e32980(auVar65._0_8_);
  unaff_XMM11._8_4_ = (int)extraout_XMM0_Qb_04;
  unaff_XMM11._0_8_ = auVar65._0_8_;
  unaff_XMM11._12_4_ = (int)((ulonglong)extraout_XMM0_Qb_04 >> 0x20);
  goto code_r0x000141b6fa43;
code_r0x000141b6d574:
  uVar11 = uVar11 + 1;
  bVar7 = *(byte *)((*(ulonglong *)(unaff_RBX + 6) - 1) + uVar11);
  if ((0x20 < (ulonglong)bVar7) || (((ulonglong)pcVar56 >> ((ulonglong)bVar7 & 0x3f) & 1) == 0)) {
    if (bVar7 == 0x7d) {
      *(ulonglong *)(unaff_RBX + 10) = uVar11;
code_r0x000141b6d5da:
      cVar8 = (code)0x0;
      goto code_r0x000141b6d5dc;
    }
    uStack_38 = 10;
    goto code_r0x000141b6d5a3;
  }
  *(ulonglong *)(unaff_RBX + 10) = uVar11;
  if (uVar11 == *(ulonglong *)(unaff_RBX + 8)) {
code_r0x000141b6d59a:
    uStack_38 = 3;
code_r0x000141b6d5a3:
    uVar11 = pdb_142d855a0(unaff_RBX,&uStack_38);
    *(ulonglong *)(param_1 + 2) = uVar11;
    cVar8 = (code)0x1;
code_r0x000141b6d5dc:
    *(code *)param_1 = cVar8;
    return param_1;
  }
  goto code_r0x000141b6d574;
code_r0x000141b6d6fa:
  apuStack_a0[0] = &stack0xffffffffffffffa0;
  puVar29 = (ulonglong *)&stack0xffffffffffffffa0;
  cVar20 = '\a';
  do {
    unaff_RBP = unaff_RBP + -2;
    puVar29 = puVar29 + -1;
    *puVar29 = *(ulonglong *)unaff_RBP;
    cVar20 = cVar20 + -1;
  } while ('\0' < cVar20);
  plVar30 = (longlong *)auStack_e19f;
  UNRECOVERED_JUMPTABLE_00 = (float *)pdb_141654940((ulonglong)param_2 & 0xffffffff);
  if (UNRECOVERED_JUMPTABLE_00 != (float *)0x0) {
code_r0x000141b6d737:
    *(float **)(param_1 + 2) = UNRECOVERED_JUMPTABLE_00;
    *param_1 = 9.80909e-45;
    *(byte *)(unaff_RBX + 0x12) = (char)*(code *)(unaff_RBX + 0x12) + 1;
    return param_1;
  }
code_r0x000141b6d70a:
  UNRECOVERED_JUMPTABLE_00 = (float *)0x0;
  plVar31 = plVar30;
code_r0x000141b6d70c:
  *param_1 = SUB84(UNRECOVERED_JUMPTABLE_00,0);
  *(byte *)(unaff_RBX + 0x12) = (char)*(code *)(unaff_RBX + 0x12) + 1;
  uVar11 = *(ulonglong *)(unaff_RBX + 8);
  uVar10 = *(ulonglong *)(unaff_RBX + 10);
  UNRECOVERED_JUMPTABLE = unaff_RBX;
  plVar32 = plVar31;
  plVar33 = plVar31;
  if (uVar10 < uVar11) {
code_r0x000141b6d79c:
    pauVar57 = *(undefined1 (**) [16])(UNRECOVERED_JUMPTABLE + 6);
    UNRECOVERED_JUMPTABLE_00 = (float *)(uVar10 + 1);
    pfVar26 = (float *)-uVar11;
code_r0x000141b6d7a6:
    while( true ) {
      bVar7 = (pauVar57[-1] + 0xf)[(longlong)UNRECOVERED_JUMPTABLE_00];
      if ((0x20 < (ulonglong)bVar7) || ((0x100002600U >> ((ulonglong)bVar7 & 0x3f) & 1) == 0))
      break;
code_r0x000141b6d7b8:
      *(float **)(UNRECOVERED_JUMPTABLE + 10) = UNRECOVERED_JUMPTABLE_00;
      pcVar56 = (code *)((longlong)UNRECOVERED_JUMPTABLE_00 + (longlong)pfVar26);
      UNRECOVERED_JUMPTABLE_00 = (float *)((longlong)UNRECOVERED_JUMPTABLE_00 + 1);
      plVar33 = plVar32;
      if (pcVar56 == (code *)0x0) goto code_r0x000141b6d884;
    }
    if (bVar7 == 0x7d) {
      *(float **)(UNRECOVERED_JUMPTABLE + 10) = UNRECOVERED_JUMPTABLE_00;
code_r0x000141b6d7df:
      return param_1;
    }
    *(undefined8 *)((longlong)plVar32 + 0x28) = 10;
    param_2 = UNRECOVERED_JUMPTABLE;
    plVar34 = plVar32;
  }
  else {
code_r0x000141b6d884:
    *(undefined8 *)((longlong)plVar33 + 0x28) = 3;
    param_2 = UNRECOVERED_JUMPTABLE;
    plVar34 = plVar33;
  }
code_r0x000141b6d88d:
  *(undefined8 *)((longlong)plVar34 + -8) = 0x141b6d897;
  uVar11 = pdb_142d855a0(param_2,(undefined1 *)((longlong)plVar34 + 0x28));
LAB_141b6d8b6:
  *(ulonglong *)(param_1 + 2) = uVar11;
  *param_1 = 9.80909e-45;
  return param_1;
code_r0x000141b6f9ed:
  UNRECOVERED_JUMPTABLE = param_1;
code_r0x000141b6fbe6:
  fVar62 = unaff_XMM11._0_4_;
  *(undefined **)((longlong)plVar50 + -8) = &UNK_141b6fbef;
  fVar63 = (float)pub_142e32980();
  param_1 = UNRECOVERED_JUMPTABLE;
code_r0x000141b6fbef:
  *param_1 = fVar62;
  param_1[1] = unaff_XMM6_Da;
  param_1[2] = fVar63;
  return param_1;
LAB_141b6d977:
  if (pcVar58 != (code *)0x22) {
LAB_141b6d9a5:
    if ((int)pcVar58 != 0x7b) {
      uStack_38 = 10;
LAB_141b6d95b:
      uVar11 = pdb_142d84ef0(pfVar27,&uStack_38);
      *(ulonglong *)(param_1 + 2) = uVar11;
      *(code *)param_1 = (code)0x1;
      return param_1;
    }
    pfVar17 = pfVar27 + 0x12;
    *(byte *)pfVar17 = (char)*(code *)pfVar17 - 1;
    pfVar23 = pfVar27;
    if (*(code *)pfVar17 == (code)0x0) {
      uStack_38 = 0x18;
      goto LAB_141b6d95b;
    }
    goto code_r0x000141b6d9b8;
  }
code_r0x000141b6d97d:
  auVar65._0_8_ = pdb_141657790(&uStack_38);
  auVar65._8_8_ = extraout_XMM0_Qb_01;
  UNRECOVERED_JUMPTABLE = (float *)&UNK_143398240;
  lVar12 = (longlong)*(int *)(&UNK_143398240 + (uStack_38 & 0xff) * 4);
  bVar61 = SCARRY8(lVar12,0x143398240);
  UNRECOVERED_JUMPTABLE_00 = (float *)(&UNK_143398240 + lVar12);
  bVar59 = (longlong)UNRECOVERED_JUMPTABLE_00 < 0;
  bVar60 = UNRECOVERED_JUMPTABLE_00 == (float *)0x0;
  uVar25 = SUB82(pfVar27,0);
  bVar7 = (byte)UNRECOVERED_JUMPTABLE_00;
  param_2 = UNRECOVERED_JUMPTABLE;
  pfVar26 = pfVar27;
  plVar50 = &lStack_58;
  plVar46 = &lStack_58;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(uStack_38 & 0xff) {
  case 0:
    *(code *)((longlong)param_1 + 1) = (code)0x0;
    break;
  case 1:
    *(code *)((longlong)param_1 + 1) = (code)0x1;
    break;
  case 2:
    *(code *)((longlong)param_1 + 1) = (code)0x2;
    break;
  case 3:
    *(code *)((longlong)param_1 + 1) = (code)0x3;
    break;
  case 4:
    *(code *)((longlong)param_1 + 1) = (code)0x4;
    break;
  case 5:
    *(code *)((longlong)param_1 + 1) = (code)0x5;
    break;
  case 6:
    *(code *)((longlong)param_1 + 1) = (code)0x6;
    break;
  case 7:
    *(float **)(param_1 + 2) = uStack_30;
    *(code *)param_1 = (code)0x1;
    return param_1;
  case 8:
  case 9:
  case 10:
  case 0xb:
  case 0xc:
  case 0xd:
  case 0xe:
    pcVar56 = pcVar56 + 1;
    *(int *)pcVar56 = *(int *)pcVar56 + -1;
    pfVar23 = (float *)CONCAT62((int6)((ulonglong)pfVar27 >> 0x10),CONCAT11(0x6c,(char)pfVar27));
    UNRECOVERED_JUMPTABLE_00 = (float *)((ulonglong)UNRECOVERED_JUMPTABLE_00 & 0xffffffffffffff20);
    goto code_r0x000141b6d9b8;
  case 0xf:
    pfVar23 = pfVar27;
code_r0x000141b6d9b8:
    *(float **)(pfVar23 + 10) = UNRECOVERED_JUMPTABLE_00;
    auVar65._0_8_ = pdb_141653ab0(&uStack_38);
    auVar65._8_8_ = extraout_XMM0_Qb_02;
    pfVar55 = (float *)(uStack_38 & 0xff);
    pfVar26 = (float *)&UNK_143398260;
    uVar11 = (ulonglong)*(int *)(&UNK_143398260 + (longlong)pfVar55 * 4);
    bVar59 = 0xfffffffebcc67d9f < uVar11;
    UNRECOVERED_JUMPTABLE = (float *)(&UNK_143398260 + uVar11);
    bVar61 = UNRECOVERED_JUMPTABLE == (float *)0x0;
    iVar9 = (int)UNRECOVERED_JUMPTABLE;
    cVar20 = (char)uStack_30;
    uVar21 = (uint)uStack_30;
    UNRECOVERED_JUMPTABLE_00 = uStack_30;
    param_2 = UNRECOVERED_JUMPTABLE;
    pfVar27 = pfVar26;
    plVar52 = &lStack_58;
    fVar62 = unaff_XMM11._0_4_;
    unaff_RBX = pfVar23;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(pfVar55) {
    case (float *)0x0:
    case (float *)0x1:
    case (float *)0x2:
    case (float *)0x3:
    case (float *)0x4:
    case (float *)0x5:
    case (float *)0x6:
      uStack_30 = (float *)pdb_141654940(uStack_30);
      if (uStack_30 != (float *)0x0) goto code_r0x000141b6d9f4;
      *(byte *)(pfVar23 + 0x12) = (char)*(code *)(pfVar23 + 0x12) + 1;
      *(code *)((longlong)param_1 + 1) = uStack_38._0_1_;
      param_2 = *(float **)(pfVar23 + 8);
code_r0x000141b6da11:
      UNRECOVERED_JUMPTABLE_00 = *(float **)(unaff_RBX + 10);
      UNRECOVERED_JUMPTABLE = pfVar23;
      if (UNRECOVERED_JUMPTABLE_00 < param_2) {
code_r0x000141b6da1a:
        pauVar57 = *(undefined1 (**) [16])(UNRECOVERED_JUMPTABLE + 6);
        UNRECOVERED_JUMPTABLE_00 = (float *)((longlong)UNRECOVERED_JUMPTABLE_00 + 1);
        pfVar22 = UNRECOVERED_JUMPTABLE;
        pfVar26 = param_2;
code_r0x000141b6da21:
        UNRECOVERED_JUMPTABLE = pfVar22;
        pfVar26 = (float *)-(longlong)pfVar26;
code_r0x000141b6da24:
        do {
          param_2 = UNRECOVERED_JUMPTABLE;
          pcVar58 = (code *)(ulonglong)
                            (byte)(pauVar57[-1] + 0xf)[(longlong)UNRECOVERED_JUMPTABLE_00];
code_r0x000141b6da2a:
          UNRECOVERED_JUMPTABLE = param_2;
          param_2 = pfVar26;
          if ((code *)0x20 < pcVar58) {
code_r0x000141b6da65:
            if ((int)pcVar58 != 0x7d) {
              uStack_38 = 10;
              param_2 = UNRECOVERED_JUMPTABLE;
              goto code_r0x000141b6da53;
            }
            *(float **)(UNRECOVERED_JUMPTABLE + 10) = UNRECOVERED_JUMPTABLE_00;
            goto code_r0x000141b6daa2;
          }
code_r0x000141b6da30:
          if (((ulonglong)pcVar56 >> ((ulonglong)pcVar58 & 0x3f) & 1) == 0)
          goto code_r0x000141b6da65;
          *(float **)(UNRECOVERED_JUMPTABLE + 10) = UNRECOVERED_JUMPTABLE_00;
          pcVar58 = (code *)((longlong)UNRECOVERED_JUMPTABLE_00 + (longlong)param_2);
code_r0x000141b6da3e:
          pcVar58 = pcVar58 + 1;
          UNRECOVERED_JUMPTABLE_00 = (float *)((longlong)UNRECOVERED_JUMPTABLE_00 + 1);
          pfVar23 = UNRECOVERED_JUMPTABLE;
          pfVar26 = param_2;
code_r0x000141b6da44:
          bVar60 = pcVar58 == (code *)0x1;
code_r0x000141b6da48:
          UNRECOVERED_JUMPTABLE = pfVar23;
        } while (!bVar60);
      }
      uStack_38 = 3;
      param_2 = pfVar23;
      plVar35 = &lStack_58;
code_r0x000141b6da53:
      *(undefined8 *)((longlong)plVar35 + -8) = 0x141b6da5d;
      uVar11 = pdb_142d855a0(param_2,(undefined1 *)((longlong)plVar35 + 0x20));
      *(ulonglong *)(param_1 + 2) = uVar11;
      cVar8 = (code)0x1;
      goto code_r0x000141b6daa4;
    case (float *)0x7:
code_r0x000141b6d9f4:
      *(float **)(param_1 + 2) = uStack_30;
      *(code *)param_1 = (code)0x1;
      *(byte *)(pfVar23 + 0x12) = (char)*(code *)(pfVar23 + 0x12) + 1;
      return param_1;
    case (float *)0x8:
      UNRECOVERED_JUMPTABLE_00 = (float *)((ulonglong)UNRECOVERED_JUMPTABLE & 0xffffffff);
      if (pauVar57[-1] + 0xc < (undefined1 *)0x8) {
        pcVar56 = (code *)(&UNK_143398280 +
                          *(int *)(&UNK_143398280 + (longlong)(pauVar57[-1] + 0xc) * 4));
code_r0x000141b6e844:
        pfVar17 = (float *)(*pcVar56)(pcVar56);
        return pfVar17;
      }
      break;
    case (float *)0x9:
    case (float *)0xa:
    case (float *)0xc:
      UNRECOVERED_JUMPTABLE_00 = (float *)(ulonglong)(uVar21 + *(int *)(&UNK_143398269 + uVar11));
      bVar61 = uVar21 + *(int *)(&UNK_143398269 + uVar11) == 0;
      pfVar22 = pfVar55 + 2;
code_r0x000141b6e8f6:
      pfVar36 = pfVar22;
      if (bVar61) {
        *(code *)((longlong)UNRECOVERED_JUMPTABLE_00 + 1) = (code)0x6;
code_r0x000141b6e908:
        *(code *)UNRECOVERED_JUMPTABLE_00 = (code)0x0;
        return UNRECOVERED_JUMPTABLE_00;
      }
      break;
    case (float *)0xb:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case (float *)0xd:
      bVar60 = pcVar56[0x61] == (code)0x60;
      cVar8 = (code)in(0x8260);
      *pcVar56 = cVar8;
      cVar8 = (code)in(0x8260);
      pcVar56[1] = cVar8;
code_r0x000141b6e858:
      if (bVar60) {
        *(code *)((longlong)UNRECOVERED_JUMPTABLE_00 + 1) = (code)0x1;
        goto code_r0x000141b6e908;
      }
      pfVar36 = (float *)&lStack_58;
      if (*pfVar26 == 2.8267477e+23) {
        *(code *)((longlong)UNRECOVERED_JUMPTABLE_00 + 1) = (code)0x2;
        goto code_r0x000141b6e908;
      }
      break;
    case (float *)0xe:
      cVar8 = (code)in(0x8260);
      *pcVar56 = cVar8;
      UNRECOVERED_JUMPTABLE = (float *)0x0;
      if (!bVar61) {
code_r0x000141b6e916:
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
code_r0x000141b6e8a2:
      param_2 = pfVar27;
      bVar61 = *(longlong *)((longlong)param_2 + 3) == 0x72657474756c436f &&
               UNRECOVERED_JUMPTABLE == *(float **)param_2;
code_r0x000141b6e8b6:
      pfVar26 = param_2;
      pfVar36 = (float *)&lStack_58;
      if (bVar61) {
        *(code *)((longlong)UNRECOVERED_JUMPTABLE_00 + 1) = (code)0x4;
        goto code_r0x000141b6e908;
      }
      break;
    case (float *)0xf:
      cVar8 = (code)in(0x8260);
      *pcVar56 = cVar8;
      bVar60 = true;
      if (bVar59) {
code_r0x000141b6e8eb:
        if (bVar60) {
          pcVar56 = (code *)swi(3);
          pfVar17 = (float *)(*pcVar56)();
          return pfVar17;
        }
        bVar61 = (int)UNRECOVERED_JUMPTABLE == 0;
        pfVar22 = (float *)&lStack_58;
        goto code_r0x000141b6e8f6;
      }
      UNRECOVERED_JUMPTABLE = (float *)0x0;
      if (!bVar61) {
code_r0x000141b6e8c6:
        out(*param_1,(short)pfVar26);
        uVar21 = *(int *)((longlong)UNRECOVERED_JUMPTABLE_00 + 0x33) * -0x48f0bbf6;
        pbVar4 = (byte *)((ulonglong)uVar21 - 0x7f);
        *pbVar4 = *pbVar4 | (byte)uVar21;
code_r0x000141b6e8d2:
        pcVar56 = (code *)swi(1);
        pfVar17 = (float *)(*pcVar56)();
        return pfVar17;
      }
code_r0x000141b6e87e:
      pfVar36 = (float *)&lStack_58;
      if (*(code *)(pfVar26 + 2) == (code)0x70 && SUB84(UNRECOVERED_JUMPTABLE,0) == *pfVar26) {
        *(code *)((longlong)UNRECOVERED_JUMPTABLE_00 + 1) = (code)0x3;
        goto code_r0x000141b6e908;
      }
      break;
    case (float *)0x10:
      goto code_r0x000141b6e936;
    case (float *)0x11:
code_r0x000141b6e958:
      param_2 = (float *)(pauVar57[-1] + 0xd);
      pfVar17 = (float *)&lStack_58;
      if (param_2 < (float *)0x6) {
code_r0x000141b6e966:
                    /* WARNING: Could not recover jumptable at 0x000141b6e974. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        pfVar17 = (float *)(*(code *)(&UNK_1433982a0 +
                                     *(int *)(&UNK_1433982a0 + (longlong)param_2 * 4)))
                                     (&UNK_1433982a0 +
                                      *(int *)(&UNK_1433982a0 + (longlong)param_2 * 4));
        return pfVar17;
      }
      goto code_r0x000141b6ea27;
    case (float *)0x12:
      bVar60 = (&UNK_1433982c5)[(longlong)param_1 * 2] == '`';
      pfVar17 = (float *)&lStack_58;
code_r0x000141b6e9ad:
      if (bVar60) {
        *(code *)((longlong)UNRECOVERED_JUMPTABLE_00 + 1) = (code)0x6;
        goto code_r0x000141b6ea0e;
      }
      goto code_r0x000141b6ea27;
    case (float *)0x13:
      pfVar17 = pfVar55 + 2;
      goto code_r0x000141b6e98c;
    case (float *)0x14:
code_r0x000141b6e9d8:
      pfVar17 = (float *)&lStack_58;
      if ((int)pcVar58 == 0 && (int)UNRECOVERED_JUMPTABLE == 0x6e65) {
        *(code *)((longlong)UNRECOVERED_JUMPTABLE_00 + 1) = (code)0x5;
        goto code_r0x000141b6ea0e;
      }
      goto code_r0x000141b6ea27;
    case (float *)0x15:
      bVar61 = UNK_143398262 == 'l' && _UNK_143398260 == 0x6c41;
      pfVar17 = (float *)&lStack_58;
code_r0x000141b6e98c:
      if (bVar61) {
        *(code *)((longlong)UNRECOVERED_JUMPTABLE_00 + 1) = (code)0x0;
code_r0x000141b6ea0e:
        *(code *)UNRECOVERED_JUMPTABLE_00 = (code)0x0;
        return UNRECOVERED_JUMPTABLE_00;
      }
      goto code_r0x000141b6ea27;
    case (float *)0x16:
      UNRECOVERED_JUMPTABLE_00 = (float *)(ulonglong)(uVar21 + 0x1829301 + (uint)bVar59);
      pfVar17 = (float *)&lStack_58;
code_r0x000141b6ea27:
      puVar1 = (uint *)((longlong)pfVar26 * 5 + -0x3e);
      *puVar1 = *puVar1 >> 1 | (uint)((*puVar1 & 1) != 0) << 0x1f;
      *(undefined8 *)((longlong)pfVar17 + -8) = 0x141b6ea36;
      UNRECOVERED_JUMPTABLE = (float *)pdb_142d8f140();
      param_1 = UNRECOVERED_JUMPTABLE_00;
code_r0x000141b6ea3c:
      *(float **)(param_1 + 2) = UNRECOVERED_JUMPTABLE;
      *(code *)UNRECOVERED_JUMPTABLE_00 = (code)0x1;
      return UNRECOVERED_JUMPTABLE_00;
    default:
code_r0x000141b6eb6f:
      UNRECOVERED_JUMPTABLE = (float *)0x0;
    case (float *)0x2d:
code_r0x000141b6eb71:
      *(code *)((longlong)uStack_30 + 1) = SUB81(UNRECOVERED_JUMPTABLE,0);
      *(code *)uStack_30 = (code)0x0;
      return uStack_30;
    case (float *)0x18:
      if (bVar61) {
        param_2 = (float *)0x0;
code_r0x000141b6ea8d:
        *(code *)((longlong)UNRECOVERED_JUMPTABLE_00 + 1) = SUB81(param_2,0);
        *(code *)UNRECOVERED_JUMPTABLE_00 = (code)0x0;
        return UNRECOVERED_JUMPTABLE_00;
      }
      goto LAB_141b6ebc7;
    case (float *)0x1b:
      goto code_r0x000141b6ea3c;
    case (float *)0x1c:
      param_2 = (float *)0x63746970;
code_r0x000141b6eb07:
      param_2 = (float *)(ulonglong)((uint)param_2 ^ (uint)*pfVar26);
code_r0x000141b6eb01:
      out(*param_1,(short)pfVar26);
      uStack_30 = UNRECOVERED_JUMPTABLE_00;
      if (pfVar26[2] == 7.2715853e+31 && param_2 == *(float **)pfVar26) goto code_r0x000141b6eb1c;
      goto LAB_141b6ebc7;
    case (float *)0x1d:
      *(char *)uStack_30 = (char)*(code *)uStack_30 + cVar20;
code_r0x000141b6eb1c:
      *(code *)((longlong)uStack_30 + 1) = (code)0x4;
      *(code *)uStack_30 = (code)0x0;
      return uStack_30;
    case (float *)0x1e:
      if (uVar21 < 0x13) {
        param_2 = (float *)&UNK_1433982b8;
code_r0x000141b6ea68:
                    /* WARNING: Could not recover jumptable at 0x000141b6ea6f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        pfVar17 = (float *)(*(code *)((longlong)param_2 + (longlong)(int)param_2[(longlong)pauVar57]
                                     ))(param_2,pfVar26,
                                        (code *)((longlong)param_2 +
                                                (longlong)(int)param_2[(longlong)pauVar57]));
        return pfVar17;
      }
      goto LAB_141b6ebc7;
    case (float *)0x1f:
code_r0x000141b6eaa4:
      *UNRECOVERED_JUMPTABLE_00 =
           (float)((int)*UNRECOVERED_JUMPTABLE_00 + (int)UNRECOVERED_JUMPTABLE_00);
      *(code *)((longlong)UNRECOVERED_JUMPTABLE + 0x1488802) =
           (code)((char)*(code *)((longlong)UNRECOVERED_JUMPTABLE + 0x1488802) +
                 (char)((ulonglong)pfVar27 >> 8));
      *(code *)UNRECOVERED_JUMPTABLE_00 = (code)0x0;
      return UNRECOVERED_JUMPTABLE_00;
    case (float *)0x21:
      puVar29 = (ulonglong *)&stack0xffffffffffffffa0;
      cVar5 = '\x12';
      do {
        pfVar55 = pfVar55 + -2;
        puVar29 = puVar29 + -1;
        *puVar29 = *(ulonglong *)pfVar55;
        cVar5 = cVar5 + -1;
      } while ('\0' < cVar5);
      *(char *)uStack_30 = (char)*(code *)uStack_30 + cVar20;
      *(char *)(uVar11 + 0x144820a61) = *(char *)(uVar11 + 0x144820a61) + -0x7e;
code_r0x000141b6ead9:
      *(code *)uStack_30 = (code)0x0;
      return uStack_30;
    case (float *)0x28:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case (float *)0x29:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case (float *)0x2a:
      *(int *)(&UNK_1433982c3 + uVar11) = *(int *)(&UNK_1433982c3 + uVar11) + iVar9;
                    /* WARNING: Could not recover jumptable at 0x000141b6ebfa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      pfVar17 = (float *)(*(code *)(pauVar57 + 0x14339826))
                                   (UNRECOVERED_JUMPTABLE,pauVar57 + 0x14339826);
      return pfVar17;
    case (float *)0x2b:
code_r0x000141b6ebbb:
      uStack_30 = UNRECOVERED_JUMPTABLE_00;
      if ((ushort)((ushort)(SUB161(auVar65 >> 7,0) & 1) |
                   (ushort)(SUB161(auVar65 >> 0xf,0) & 1) << 1 |
                   (ushort)(SUB161(auVar65 >> 0x17,0) & 1) << 2 |
                   (ushort)(SUB161(auVar65 >> 0x1f,0) & 1) << 3 |
                   (ushort)(SUB161(auVar65 >> 0x27,0) & 1) << 4 |
                   (ushort)(SUB161(auVar65 >> 0x2f,0) & 1) << 5 |
                   (ushort)(SUB161(auVar65 >> 0x37,0) & 1) << 6 |
                   (ushort)(SUB161(auVar65 >> 0x3f,0) & 1) << 7 |
                   (ushort)(SUB161(auVar65 >> 0x47,0) & 1) << 8 |
                   (ushort)(SUB161(auVar65 >> 0x4f,0) & 1) << 9 |
                   (ushort)(SUB161(auVar65 >> 0x57,0) & 1) << 10 |
                   (ushort)(SUB161(auVar65 >> 0x5f,0) & 1) << 0xb |
                   (ushort)(SUB161(auVar65 >> 0x67,0) & 1) << 0xc |
                   (ushort)(SUB161(auVar65 >> 0x6f,0) & 1) << 0xd |
                   (ushort)(SUB161(auVar65 >> 0x77,0) & 1) << 0xe |
                  (ushort)(byte)(auVar65[0xf] >> 7) << 0xf) == 0xffff) {
        UNRECOVERED_JUMPTABLE = (float *)0x3;
code_r0x000141b6ebd2:
        *(code *)((longlong)UNRECOVERED_JUMPTABLE_00 + 1) = SUB81(UNRECOVERED_JUMPTABLE,0);
        *(code *)UNRECOVERED_JUMPTABLE_00 = (code)0x0;
        return UNRECOVERED_JUMPTABLE_00;
      }
LAB_141b6ebc7:
      *(code *)((longlong)uStack_30 + 1) = (code)0x6;
      *(code *)uStack_30 = (code)0x0;
      return uStack_30;
    case (float *)0x2c:
      pcVar56 = (code *)swi(3);
      pfVar17 = (float *)(*pcVar56)();
      return pfVar17;
    case (float *)0x2e:
      UNRECOVERED_JUMPTABLE_00 = (float *)((ulonglong)uStack_30 & 0xffffffffffffff30);
      uStack_30 = (float *)&stack0xffffffffffffffe8;
      uStack_38 = 0xc;
code_r0x000141b6ec51:
      pfVar17 = (float *)pdb_140f66e50(UNRECOVERED_JUMPTABLE_00);
      return pfVar17;
    case (float *)0x2f:
      pfVar17 = (float *)pdb_140f66090((ulonglong)uStack_30 & 0xffffffffffffff20,&UNK_143397c74,4,
                                       &stack0xffffffffffffffe8);
      return pfVar17;
    case (float *)0x30:
    case (float *)0x31:
    case (float *)0x32:
    case (float *)0x36:
      *uStack_30 = (float)((int)*uStack_30 + uVar21);
      *(char *)uStack_30 = (char)*(code *)uStack_30 + cVar20;
      *(char *)uStack_30 = (char)*(code *)uStack_30 + cVar20;
    case (float *)0x35:
      *(char *)(uStack_30 + 0x1d704e52) = (char)*(code *)(uStack_30 + 0x1d704e52) + cVar20;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case (float *)0x33:
      pcVar56[1] = *(code *)((longlong)param_1 + 1);
      puVar29 = (ulonglong *)(&UNK_143398218 + uVar11);
      uVar11 = *puVar29;
      *puVar29 = (ulonglong)(*pauVar57 + *puVar29);
      cVar20 = cVar20 + (char)*(code *)uStack_30 + CARRY8(uVar11,(ulonglong)pauVar57);
      pcVar13 = (char *)CONCAT71((int7)((ulonglong)uStack_30 >> 8),cVar20);
      *pcVar13 = *pcVar13 + cVar20;
pdb_140f679a0:
                    /* WARNING: Could not recover jumptable at 0x000140f679ae. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      pfVar17 = (float *)(**(code **)(*(ulonglong *)(UNRECOVERED_JUMPTABLE + 2) + 0x18))
                                   (*(ulonglong *)UNRECOVERED_JUMPTABLE);
      return pfVar17;
    case (float *)0x34:
      pcVar56 = (code *)swi(3);
      pfVar17 = (float *)(*pcVar56)();
      return pfVar17;
    case (float *)0x37:
      cVar8 = *(code *)uStack_30;
      *(byte *)uStack_30 = (char)cVar8 << 3 | (byte)(CONCAT11(bVar59,cVar8) >> 6);
      bVar59 = ((byte)cVar8 & 0x20) != 0;
      UNRECOVERED_JUMPTABLE = (float *)((ulonglong)uStack_30 & 0xffffffff);
      ppuVar39 = (undefined1 **)&lStack_58;
code_r0x0001409a45e0:
      pcVar13 = (char *)((longlong)UNRECOVERED_JUMPTABLE * 5 + -0x3f);
      *pcVar13 = *pcVar13 + (char)UNRECOVERED_JUMPTABLE + bVar59;
      *(undefined8 *)((longlong)ppuVar39 + 0x40) = *(undefined8 *)((longlong)ppuVar39 + 0x40);
      *(float **)((longlong)ppuVar39 + 0x38) = param_1;
      *(code **)((longlong)ppuVar39 + 0x30) = pcVar56;
      *(float **)((longlong)ppuVar39 + 0x28) = unaff_RBX;
      *(undefined8 *)((longlong)ppuVar39 + 0x20) = 0xfffffffffffffffe;
      uVar11 = *(ulonglong *)UNRECOVERED_JUMPTABLE;
      if (uVar11 == 0) {
        uVar10 = 0;
      }
      else {
        uVar2 = *(ulonglong *)(UNRECOVERED_JUMPTABLE + 2);
        uVar10 = *(ulonglong *)(UNRECOVERED_JUMPTABLE + 4);
        *(undefined8 *)((longlong)ppuVar39 + -0x48) = 0;
        *(ulonglong *)((longlong)ppuVar39 + -0x40) = uVar11;
        *(ulonglong *)((longlong)ppuVar39 + -0x38) = uVar2;
        *(undefined8 *)((longlong)ppuVar39 + -0x28) = 0;
        *(ulonglong *)((longlong)ppuVar39 + -0x20) = uVar11;
        *(ulonglong *)((longlong)ppuVar39 + -0x18) = uVar2;
      }
      uVar11 = (ulonglong)(uVar11 != 0);
      *(ulonglong *)((longlong)ppuVar39 + -0x50) = uVar11;
      *(ulonglong *)((longlong)ppuVar39 + -0x30) = uVar11;
      *(ulonglong *)((longlong)ppuVar39 + -0x10) = uVar10;
      puVar24 = (undefined1 *)((longlong)ppuVar39 + -0x50);
      *(undefined8 *)((longlong)ppuVar39 + -0x78) = 0x1409a4652;
      pdb_14192c4b0((undefined1 *)((longlong)ppuVar39 + -8),puVar24);
      lVar12 = *(longlong *)((longlong)ppuVar39 + -8);
      if (lVar12 != 0) {
        do {
          lVar3 = *(longlong *)((longlong)ppuVar39 + 8);
          *(undefined1 **)((longlong)ppuVar39 + 0x18) = puVar24;
          *(longlong *)((longlong)ppuVar39 + 0x10) = lVar3 * 0x20 + lVar12;
          uVar11 = *(ulonglong *)(lVar12 + 0x168 + lVar3 * 0x18);
          if (uVar11 != 0) {
            pbVar4 = *(byte **)(lVar12 + lVar3 * 0x18 + 0x170);
            *(undefined8 *)((longlong)ppuVar39 + -0x78) = 0x1409a46ad;
            pub_1406abac0(pbVar4,uVar11,1);
          }
          *(undefined8 *)((longlong)ppuVar39 + -0x78) = 0x1409a46b6;
          pdb_140966d70((longlong *)((longlong)ppuVar39 + 0x10));
          *(undefined8 *)((longlong)ppuVar39 + -0x78) = 0x1409a46c2;
          pdb_14192c4b0((undefined1 *)((longlong)ppuVar39 + -8),puVar24);
          lVar12 = *(longlong *)((longlong)ppuVar39 + -8);
        } while (lVar12 != 0);
      }
      return (float *)0x0;
    case (float *)0x38:
      goto code_r0x000141b6f072;
    case (float *)0x39:
    case (float *)0x3c:
    case (float *)0x3e:
    case (float *)0x3f:
    case (float *)0x40:
    case (float *)0x41:
    case (float *)0x42:
    case (float *)0x43:
    case (float *)0x44:
code_r0x000141b6f064:
      in_R10 = (ulonglong)(byte)*(code *)UNRECOVERED_JUMPTABLE;
      pfVar27 = pfVar26;
      if (0xe < in_R10) goto code_r0x000141b6f13e;
code_r0x000141b6f072:
      pcVar58 = *(code **)(UNRECOVERED_JUMPTABLE + 2);
      cVar8 = *(code *)((longlong)UNRECOVERED_JUMPTABLE + 1);
      switch(&UNK_14339833c + *(int *)(&UNK_14339833c + in_R10 * 4)) {
      case (undefined *)0x141b6f08e:
code_r0x000141b6f08e:
        in_R11 = (undefined1 (*) [16])0x0;
        param_1 = (float *)(ulonglong)((int)pcVar58 - 1);
        pcVar56 = (code *)&UNK_143398378;
        do {
          if (((*in_R11)[(longlong)pfVar27] == '\0') &&
             (*(int *)((longlong)(pfVar27 + 2) + (longlong)in_R11) == (int)pcVar58))
          goto code_r0x000141b6f0cb;
code_r0x000141b6f0b0:
          in_R11 = (undefined1 (*) [16])(in_R11[1] + 8);
code_r0x000141b6f0b4:
        } while (pauVar57 != in_R11);
        break;
      case (undefined *)0x141b6f0e8:
        pauVar14 = (undefined1 (*) [16])0x0;
        do {
          if (((*pauVar14)[(longlong)pfVar27] == '\x03') &&
             (*(code **)((longlong)(pfVar27 + 2) + (longlong)pauVar14) == pcVar58)) {
            return (float *)0x1;
          }
          pauVar14 = (undefined1 (*) [16])(pauVar14[1] + 8);
        } while (pauVar57 != pauVar14);
        break;
      case (undefined *)0x141b6f10f:
        pauVar14 = (undefined1 (*) [16])0x0;
        do {
          if (((*pauVar14)[(longlong)pfVar27] == '\x0e') &&
             (((code *)((longlong)pfVar27 + 1))[(longlong)pauVar14] == cVar8)) {
            return (float *)0x1;
          }
          pauVar14 = (undefined1 (*) [16])(pauVar14[1] + 8);
        } while (pauVar57 != pauVar14);
        break;
      case (undefined *)0x141b6f13e:
code_r0x000141b6f13e:
        puVar24 = (undefined1 *)0x0;
        do {
          if (puVar24[(longlong)pfVar27] == (char)in_R10) {
            return (float *)0x1;
          }
          bVar59 = pauVar57[-2] + 8 != puVar24;
          puVar24 = puVar24 + 0x18;
        } while (bVar59);
        return (float *)0x0;
      case (undefined *)0x141b6f166:
        pauVar14 = (undefined1 (*) [16])0x0;
        do {
          if (((*pauVar14)[(longlong)pfVar27] == '\x01') &&
             (((code *)((longlong)pfVar27 + 1))[(longlong)pauVar14] == cVar8)) {
            return (float *)0x1;
          }
          pauVar14 = (undefined1 (*) [16])(pauVar14[1] + 8);
        } while (pauVar57 != pauVar14);
        break;
      case (undefined *)0x141b6f18a:
        pauVar14 = (undefined1 (*) [16])0x0;
        do {
          if (((*pauVar14)[(longlong)pfVar27] == '\x04') &&
             (((code *)((longlong)pfVar27 + 1))[(longlong)pauVar14] == cVar8)) {
            return (float *)0x1;
          }
          pauVar14 = (undefined1 (*) [16])(pauVar14[1] + 8);
        } while (pauVar57 != pauVar14);
        break;
      case (undefined *)0x141b6f1a7:
        if (pcVar58 == (code *)0x6) {
          pauVar14 = (undefined1 (*) [16])0x0;
          while ((((*pauVar14)[(longlong)pfVar27] != '\x06' ||
                  (*(int *)((longlong)(pfVar27 + 2) + (longlong)pauVar14) != 6)) ||
                 (*(ulonglong *)(*pauVar14 + (longlong)(pfVar27 + 4)) !=
                  *(ulonglong *)(UNRECOVERED_JUMPTABLE + 4)))) {
            pauVar14 = (undefined1 (*) [16])(pauVar14[1] + 8);
            if (pauVar57 == pauVar14) {
              return (float *)0x0;
            }
          }
          return (float *)0x1;
        }
        pauVar14 = (undefined1 (*) [16])0x0;
        while (((*pauVar14)[(longlong)pfVar27] != '\x06' ||
               (*(code **)((longlong)(pfVar27 + 2) + (longlong)pauVar14) != pcVar58))) {
          pauVar14 = (undefined1 (*) [16])(pauVar14[1] + 8);
          if (pauVar57 == pauVar14) {
            return (float *)0x0;
          }
        }
        return (float *)0x1;
      }
      return (float *)0x0;
    case (float *)0x3a:
code_r0x000141b6f00c:
      *(char *)uStack_30 = (char)*(code *)uStack_30 + (char)uStack_30;
      UNRECOVERED_JUMPTABLE_00 = uStack_30;
      pfVar27 = pfVar26;
      goto code_r0x000141b6f00e;
    case (float *)0x3b:
      *(char *)uStack_30 = (char)*(code *)uStack_30 + cVar20;
      goto code_r0x000141b6f0b0;
    case (float *)0x3d:
code_r0x000141b6f0cb:
      if (5 < (uint)param_1) {
        return (float *)0x1;
      }
                    /* WARNING: Could not recover jumptable at 0x000141b6f0dd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      pfVar17 = (float *)(*(pcVar56 + *(int *)(pcVar56 + (longlong)param_1 * 4)))();
      return pfVar17;
    case (float *)0x45:
      goto code_r0x000141b6f033;
    case (float *)0x46:
    case (float *)0x47:
code_r0x000141b6ef8d:
      if (pfVar26 == (float *)0x0) {
        return uStack_30;
      }
code_r0x000141b6ef92:
code_r0x000141b6ef96:
      pauVar57 = (undefined1 (*) [16])0x8;
code_r0x000141b6ef9c:
      UNRECOVERED_JUMPTABLE = *(float **)(pfVar55 + -4);
      plVar38 = (longlong *)&stack0xfffffffffffffff0;
code_r0x0001406abac0:
      *(float **)((longlong)plVar38 + -8) = unaff_RBP;
      *(float **)((longlong)plVar38 + -0x10) = param_1;
      if ((undefined1 (*) [16])0x10 < pauVar57) {
        UNRECOVERED_JUMPTABLE = *(float **)(UNRECOVERED_JUMPTABLE + -2);
      }
      *(undefined **)((longlong)plVar38 + -0x40) = &UNK_140f3c37e;
      auVar65._0_8_ = GetProcessHeap();
                    /* WARNING: Could not recover jumptable at 0x000140f3c38c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      pfVar17 = (float *)HeapFree(auVar65._0_8_,0,UNRECOVERED_JUMPTABLE);
      return pfVar17;
    case (float *)0x48:
      *(code *)((longlong)pfVar55 + -0x3d) =
           (code)((byte)*(code *)((longlong)pfVar55 + -0x3d) & (byte)pfVar23);
      pcVar56 = (code *)swi(3);
      pfVar17 = (float *)(*pcVar56)();
      return pfVar17;
    case (float *)0x49:
    case (float *)0x4a:
    case (float *)0x4b:
DAT_141b6efd0:
      plVar40 = (longlong *)auStack_80;
      pfStack_48 = pfVar26;
code_r0x000141b6efda:
      pfVar55 = pfVar26 + 0x10;
      UNRECOVERED_JUMPTABLE_00 = *(float **)(pfVar26 + 10);
code_r0x000141b6efe2:
      uVar11 = *(ulonglong *)(UNRECOVERED_JUMPTABLE_00 + 4);
      plVar41 = plVar40;
      if (uVar11 != 0) {
code_r0x000141b6efeb:
        pbVar4 = *(byte **)(pfVar55 + -4);
        *(undefined **)((longlong)plVar41 + -8) = &UNK_141b6effe;
        pub_1406abac0(pbVar4,uVar11 << 5,8);
        UNRECOVERED_JUMPTABLE_00 = extraout_RAX;
      }
      return UNRECOVERED_JUMPTABLE_00;
    case (float *)0x4c:
      pcVar56 = (code *)0x67304c00;
      pcVar58 = (code *)((longlong)uStack_30 + -0x75);
      bVar61 = SCARRY4(*(int *)pcVar58,iVar9);
      *(int *)pcVar58 = *(int *)pcVar58 + iVar9;
      bVar59 = *(int *)pcVar58 < 0;
      bVar60 = *(int *)pcVar58 == 0;
code_r0x000141b6f747:
      if (bVar60 || bVar61 != bVar59) {
        *(code *)((longlong)pfVar26 + 0x28ba01) = SUB81(UNRECOVERED_JUMPTABLE_00,0);
        *(char *)UNRECOVERED_JUMPTABLE_00 =
             (char)*(code *)UNRECOVERED_JUMPTABLE_00 + (char)SUB81(UNRECOVERED_JUMPTABLE_00,0);
                    /* WARNING: Subroutine does not return */
        pdb_142dc83b0();
      }
code_r0x000141b6f64b:
      pcVar56[*(ulonglong *)(param_1 + 2)] = (code)0x7d;
      *(code **)(param_1 + 4) = pcVar56 + 1;
      *(undefined1 *)(unaff_R15 + 4) = 1;
      param_1 = (float *)*unaff_R15;
      unaff_R12 = unaff_R15[3] + -1;
      unaff_R15[3] = unaff_R12;
      pcVar56 = *(code **)(param_1 + 4);
      if (*(code **)param_1 == pcVar56) {
        uStack_38 = 1;
        param_2 = param_1;
        goto code_r0x000141b6f77e;
      }
      goto code_r0x000141b6f67a;
    case (float *)0x4d:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case (float *)0x4e:
      uStack_38 = CONCAT44(uStack_38._4_4_,1);
      param_2 = param_1;
code_r0x000141b6f77e:
      pdb_142d7f1b0(param_2,pcVar56);
      pcVar56 = *(code **)(param_1 + 4);
code_r0x000141b6f67a:
      pcVar56[*(ulonglong *)(param_1 + 2)] = (code)0xa;
      pcVar56 = pcVar56 + 1;
      *(code **)(param_1 + 4) = pcVar56;
      plVar46 = &lStack_58;
      if (unaff_R12 != 0) {
        unaff_RBX = (float *)unaff_R15[2];
        if (unaff_RBX == (float *)0x0) {
          *(code **)(param_1 + 4) = pcVar56;
          plVar46 = &lStack_58;
        }
        else {
          unaff_R14 = unaff_R15[1];
          plVar46 = &lStack_58;
          do {
            if ((float *)(*(ulonglong *)param_1 - (longlong)pcVar56) < unaff_RBX) {
              *(undefined8 *)((longlong)plVar46 + 0x20) = 1;
              plVar47 = plVar46;
code_r0x000141b6f6d4:
              *(undefined **)((longlong)plVar47 + -8) = &UNK_141b6f6e8;
              pdb_142d7f1b0(param_1,pcVar56,unaff_RBX,1);
              plVar46 = plVar47;
code_r0x000141b6f6e8:
              pcVar56 = *(code **)(param_1 + 4);
            }
code_r0x000141b6f6ab:
            uVar11 = *(ulonglong *)(param_1 + 2);
            *(undefined **)((longlong)plVar46 + -8) = &UNK_141b6f6bd;
            pub_142e32760(pcVar56 + uVar11,unaff_R14,unaff_RBX);
            pcVar56 = pcVar56 + (longlong)unaff_RBX;
            *(code **)(param_1 + 4) = pcVar56;
            unaff_R12 = unaff_R12 + -1;
          } while (unaff_R12 != 0);
        }
      }
      plVar48 = plVar46;
      if (*(code **)param_1 == pcVar56) {
code_r0x000141b6f78f:
        *(undefined8 *)((longlong)plVar48 + 0x20) = 1;
        *(undefined **)((longlong)plVar48 + -8) = &UNK_141b6f7af;
        pdb_142d7f1b0(param_1,pcVar56,1,1);
        pcVar56 = *(code **)(param_1 + 4);
      }
      UNRECOVERED_JUMPTABLE_00 = *(float **)(param_1 + 2);
code_r0x000141b6f6ff:
      pcVar56[(longlong)UNRECOVERED_JUMPTABLE_00] = (code)0x7d;
      *(code **)(param_1 + 4) = pcVar56 + 1;
code_r0x000141b6f70a:
      return UNRECOVERED_JUMPTABLE_00;
    case (float *)0x4f:
      *(code *)((longlong)uStack_30 + -0x77) =
           (code)((char)*(code *)((longlong)uStack_30 + -0x77) + (char)UNRECOVERED_JUMPTABLE);
      pcVar56 = (code *)swi(1);
      pfVar17 = (float *)(*pcVar56)();
      return pfVar17;
    case (float *)0x50:
      pcVar56 = (code *)((longlong)pfVar55 + (longlong)UNRECOVERED_JUMPTABLE * 4 + 5);
      *(int *)pcVar56 = *(int *)pcVar56 + iVar9;
code_r0x000141b6f75a:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case (float *)0x51:
      goto code_r0x000141b6f78f;
    case (float *)0x52:
code_r0x000141b6f84d:
      UNRECOVERED_JUMPTABLE = param_2;
      unaff_XMM7_Da = UNRECOVERED_JUMPTABLE_00[2];
      unaff_XMM7_Db = UNRECOVERED_JUMPTABLE_00[3];
      unaff_XMM7_Dc = UNRECOVERED_JUMPTABLE_00[4];
      unaff_XMM7_Dd = UNRECOVERED_JUMPTABLE_00[5];
      plVar50 = &lStack_58;
      goto code_r0x000141b6f81d;
    case (float *)0x53:
      goto code_r0x000141b6f9c6;
    case (float *)0x54:
      goto code_r0x000141b6f913;
    case (float *)0x55:
code_r0x000141b6f954:
      plVar50 = &lStack_58;
      goto code_r0x000141b6fb77;
    case (float *)0x56:
      goto code_r0x000141b6f8bd;
    case (float *)0x57:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case (float *)0x58:
      in(0x8260);
      plVar50 = (longlong *)&stack0xffffffffffffffa0;
      goto code_r0x000141b6f81d;
    case (float *)0x59:
      goto code_r0x000141b6fa13;
    case (float *)0x5a:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case (float *)0x5b:
      (pcVar56 + 0x29)[(longlong)UNRECOVERED_JUMPTABLE] =
           (code)((char)(pcVar56 + 0x29)[(longlong)UNRECOVERED_JUMPTABLE] + cVar20);
      cVar20 = cRam24ac290f44000000;
      uVar18 = (undefined7)(CONCAT62((int6)((ulonglong)uStack_30 >> 0x10),0x2400) >> 8);
      pcVar13 = (char *)CONCAT71(uVar18,cRam24ac290f44000000);
      *pcVar13 = *pcVar13 + cRam24ac290f44000000;
      (pcVar56 + 0x29)[(longlong)UNRECOVERED_JUMPTABLE] =
           (code)((char)(pcVar56 + 0x29)[(longlong)UNRECOVERED_JUMPTABLE] + cVar20);
      *pcVar56 = *(code *)param_1;
      pcVar13 = (char *)(CONCAT71(uVar18,cVar20) & 0xffffffffffffff80);
      *pcVar13 = *pcVar13 + (char)pcVar13;
      (pcVar56 + 0x2a)[(longlong)UNRECOVERED_JUMPTABLE] =
           (code)((char)(pcVar56 + 0x2a)[(longlong)UNRECOVERED_JUMPTABLE] + (char)pcVar13);
      plVar50 = (longlong *)puRam000000000000b024;
code_r0x000141b6f81d:
      *(undefined1 (*) [16])((longlong)plVar50 + 0x70) = unaff_XMM11;
      *(undefined4 *)((longlong)plVar50 + 0x60) = unaff_XMM10_Da;
      *(undefined4 *)((longlong)plVar50 + 100) = unaff_XMM10_Db;
      *(undefined4 *)((longlong)plVar50 + 0x68) = unaff_XMM10_Dc;
      *(undefined4 *)((longlong)plVar50 + 0x6c) = unaff_XMM10_Dd;
      *(float *)((longlong)plVar50 + 0x50) = unaff_XMM9_Da;
      *(float *)((longlong)plVar50 + 0x54) = unaff_XMM9_Db;
      *(float *)((longlong)plVar50 + 0x58) = unaff_XMM9_Dc;
      *(float *)((longlong)plVar50 + 0x5c) = unaff_XMM9_Dd;
      *(float *)((longlong)plVar50 + 0x40) = unaff_XMM8_Da;
      *(float *)((longlong)plVar50 + 0x44) = unaff_XMM8_Db;
      *(float *)((longlong)plVar50 + 0x48) = unaff_XMM8_Dc;
      *(float *)((longlong)plVar50 + 0x4c) = unaff_XMM8_Dd;
      *(float *)((longlong)plVar50 + 0x30) = unaff_XMM7_Da;
      *(float *)((longlong)plVar50 + 0x34) = unaff_XMM7_Db;
      *(float *)((longlong)plVar50 + 0x38) = unaff_XMM7_Dc;
      *(float *)((longlong)plVar50 + 0x3c) = unaff_XMM7_Dd;
      *(float *)((longlong)plVar50 + 0x20) = unaff_XMM6_Da;
      *(undefined4 *)((longlong)plVar50 + 0x24) = unaff_XMM6_Db;
      *(undefined4 *)((longlong)plVar50 + 0x28) = unaff_XMM6_Dc;
      *(undefined4 *)((longlong)plVar50 + 0x2c) = unaff_XMM6_Dd;
      auVar64 = *pauVar57;
      unaff_XMM12_Da = auVar64._0_4_;
      unaff_XMM8_Da = auVar64._4_4_;
      unaff_XMM12_Dc = auVar64._8_4_;
      unaff_XMM8_Dc = auVar64._12_4_;
      unaff_XMM7_Da = *(float *)(*pauVar57 + 8);
      pcVar56 = (code *)((ulonglong)pfVar26 & 0xff);
      plVar53 = plVar50;
      plVar51 = plVar50;
      plVar49 = plVar50;
      param_1 = UNRECOVERED_JUMPTABLE;
      unaff_XMM8_Db = unaff_XMM8_Da;
      unaff_XMM8_Dd = unaff_XMM8_Dc;
      unaff_XMM9_Da = unaff_XMM8_Dc;
      unaff_XMM9_Db = unaff_XMM8_Dc;
      unaff_XMM9_Dc = unaff_XMM8_Dc;
      unaff_XMM9_Dd = unaff_XMM8_Dc;
      unaff_XMM12_Db = unaff_XMM8_Da;
      unaff_XMM12_Dd = unaff_XMM8_Dc;
      plVar52 = plVar50;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
      switch(pcVar56) {
      case (code *)0x0:
code_r0x000141b6f871:
        auVar66._4_4_ = unaff_XMM12_Db;
        auVar66._0_4_ = unaff_XMM12_Da;
        auVar66._8_4_ = unaff_XMM12_Dc;
        auVar66._12_4_ = unaff_XMM12_Dd;
        auVar65._4_12_ = auVar66._4_12_;
        auVar65._0_4_ = unaff_XMM12_Da * unaff_XMM7_Da;
        in_XMM1_Ba = SUB41(unaff_XMM9_Da,0);
        in_XMM1_Bb = (char)((uint)unaff_XMM9_Da >> 8);
        in_XMM1_Bc = (char)((uint)unaff_XMM9_Da >> 0x10);
        in_XMM1_Bd = (char)((uint)unaff_XMM9_Da >> 0x18);
        plVar46 = plVar49;
code_r0x000141b6f87d:
        plVar50 = plVar46;
        fVar62 = (float)CONCAT13(in_XMM1_Bd,CONCAT12(in_XMM1_Bc,CONCAT11(in_XMM1_Bb,in_XMM1_Ba))) *
                 unaff_XMM8_Da;
        uVar76 = SUB41(fVar62,0);
        uVar77 = (undefined1)((uint)fVar62 >> 8);
        uVar78 = (undefined1)((uint)fVar62 >> 0x10);
        uVar79 = (undefined1)((uint)fVar62 >> 0x18);
        goto code_r0x000141b6f8e9;
      case (code *)0x1:
code_r0x000141b6f8bd:
        fVar62 = unaff_XMM8_Da * unaff_XMM7_Da;
        uVar76 = SUB41(fVar62,0);
        uVar77 = (undefined1)((uint)fVar62 >> 8);
        uVar78 = (undefined1)((uint)fVar62 >> 0x10);
        uVar79 = (undefined1)((uint)fVar62 >> 0x18);
        auVar70._4_4_ = unaff_XMM9_Db;
        auVar70._0_4_ = unaff_XMM9_Da;
        auVar70._8_4_ = unaff_XMM9_Dc;
        auVar70._12_4_ = unaff_XMM9_Dd;
        auVar75 = auVar70._4_12_;
        fVar62 = unaff_XMM9_Da * unaff_XMM12_Da;
        plVar52 = plVar51;
        goto code_r0x000141b6f8ce;
      case (code *)0x2:
code_r0x000141b6f897:
        auVar68._4_4_ = unaff_XMM8_Db;
        auVar68._0_4_ = unaff_XMM8_Da;
        auVar68._8_4_ = unaff_XMM8_Dc;
        auVar68._12_4_ = unaff_XMM8_Dd;
        auVar65._4_12_ = auVar68._4_12_;
        auVar65._0_4_ = unaff_XMM8_Da * unaff_XMM7_Da;
        in_XMM1_Ba = SUB41(unaff_XMM9_Da,0);
        in_XMM1_Bb = (char)((uint)unaff_XMM9_Da >> 8);
        in_XMM1_Bc = (char)((uint)unaff_XMM9_Da >> 0x10);
        in_XMM1_Bd = (char)((uint)unaff_XMM9_Da >> 0x18);
        plVar46 = plVar50;
code_r0x000141b6f8a3:
        plVar50 = plVar46;
        fVar62 = (float)CONCAT13(in_XMM1_Bd,CONCAT12(in_XMM1_Bc,CONCAT11(in_XMM1_Bb,in_XMM1_Ba))) *
                 unaff_XMM12_Da;
        uVar76 = SUB41(fVar62,0);
        uVar77 = (undefined1)((uint)fVar62 >> 8);
        uVar78 = (undefined1)((uint)fVar62 >> 0x10);
        uVar79 = (undefined1)((uint)fVar62 >> 0x18);
        goto code_r0x000141b6f8e9;
      case (code *)0x3:
        fVar62 = unaff_XMM12_Da * unaff_XMM8_Da;
        uVar76 = SUB41(fVar62,0);
        uVar77 = (undefined1)((uint)fVar62 >> 8);
        uVar78 = (undefined1)((uint)fVar62 >> 0x10);
        uVar79 = (undefined1)((uint)fVar62 >> 0x18);
        auVar69._4_4_ = unaff_XMM8_Dc;
        auVar69._0_4_ = unaff_XMM8_Dc;
        auVar69._8_4_ = unaff_XMM8_Dc;
        auVar69._12_4_ = unaff_XMM8_Dc;
        auVar75 = auVar69._4_12_;
        fVar62 = unaff_XMM8_Dc * unaff_XMM7_Da;
        goto code_r0x000141b6f8ce;
      case (code *)0x4:
        fVar62 = unaff_XMM12_Da * unaff_XMM7_Da;
        uVar76 = SUB41(fVar62,0);
        uVar77 = (undefined1)((uint)fVar62 >> 8);
        uVar78 = (undefined1)((uint)fVar62 >> 0x10);
        uVar79 = (undefined1)((uint)fVar62 >> 0x18);
        auVar67._4_4_ = unaff_XMM8_Dc;
        auVar67._0_4_ = unaff_XMM8_Dc;
        auVar67._8_4_ = unaff_XMM8_Dc;
        auVar67._12_4_ = unaff_XMM8_Dc;
        auVar75 = auVar67._4_12_;
        fVar62 = unaff_XMM8_Dc * unaff_XMM8_Da;
code_r0x000141b6f8ce:
        fVar62 = fVar62 + (float)CONCAT13(uVar79,CONCAT12(uVar78,CONCAT11(uVar77,uVar76)));
        auVar65._0_4_ = fVar62 + fVar62;
        auVar65._4_12_ = auVar75;
        goto code_r0x000141b6f8f5;
      case (code *)0x5:
        auVar65._4_12_ = auVar64._4_12_;
        auVar65._0_4_ = unaff_XMM12_Da * unaff_XMM8_Da;
code_r0x000141b6f8e1:
        fVar62 = unaff_XMM8_Dc * unaff_XMM7_Da;
        uVar76 = SUB41(fVar62,0);
        uVar77 = (undefined1)((uint)fVar62 >> 8);
        uVar78 = (undefined1)((uint)fVar62 >> 0x10);
        uVar79 = (undefined1)((uint)fVar62 >> 0x18);
code_r0x000141b6f8e9:
        auVar65._0_4_ =
             auVar65._0_4_ - (float)CONCAT13(uVar79,CONCAT12(uVar78,CONCAT11(uVar77,uVar76)));
code_r0x000141b6f8ed:
        auVar65._0_4_ = auVar65._0_4_ * _DAT_142e37890;
        plVar52 = plVar50;
code_r0x000141b6f8f5:
        uVar76 = SUB41(_DAT_142e36f34,0);
        uVar77 = (undefined1)((uint)_DAT_142e36f34 >> 8);
        uVar78 = (undefined1)((uint)_DAT_142e36f34 >> 0x10);
        uVar79 = (undefined1)((uint)_DAT_142e36f34 >> 0x18);
        if (_DAT_142e36f34 <= auVar65._0_4_) {
          uVar76 = auVar65[0];
          uVar77 = auVar65[1];
          uVar78 = auVar65[2];
          uVar79 = auVar65[3];
        }
        fVar62 = _DAT_142e36f28;
        if ((float)CONCAT13(uVar79,CONCAT12(uVar78,CONCAT11(uVar77,uVar76))) <= _DAT_142e36f28) {
          fVar62 = (float)CONCAT13(uVar79,CONCAT12(uVar78,CONCAT11(uVar77,uVar76)));
        }
code_r0x000141b6f913:
        *(undefined **)((longlong)plVar52 + -8) = &UNK_141b6f918;
        pub_142e32960();
        if ((float)(_DAT_142e377e0 & (uint)fVar62) <= _DAT_143058d40) {
code_r0x000141b6f965:
          puVar16 = &UNK_1433983a8;
          UNRECOVERED_JUMPTABLE =
               (float *)(longlong)*(int *)(&UNK_1433983a8 + (longlong)pcVar56 * 4);
code_r0x000141b6f990:
          UNRECOVERED_JUMPTABLE = (float *)((longlong)UNRECOVERED_JUMPTABLE + (longlong)puVar16);
code_r0x000141b6f993:
                    /* WARNING: Could not recover jumptable at 0x000141b6f993. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          pfVar17 = (float *)(*(code *)UNRECOVERED_JUMPTABLE)(UNRECOVERED_JUMPTABLE);
          return pfVar17;
        }
code_r0x000141b6f944:
                    /* WARNING: Could not recover jumptable at 0x000141b6f952. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        pfVar17 = (float *)(*(code *)(&UNK_1433983c0 +
                                     *(int *)(&UNK_1433983c0 + (longlong)pcVar56 * 4)))
                                     (&UNK_1433983c0 +
                                      *(int *)(&UNK_1433983c0 + (longlong)pcVar56 * 4));
        return pfVar17;
      case (code *)0x6:
        goto code_r0x000141b6f965;
      case (code *)0x7:
        break;
      case (code *)0x8:
code_r0x000141b6fa43:
        UNRECOVERED_JUMPTABLE = param_1;
        break;
      case (code *)0x9:
        break;
      case (code *)0xa:
        goto code_r0x000141b6f9ed;
      case (code *)0xb:
        *(int *)(&UNK_14339839f + *(int *)(&UNK_143398390 + (longlong)pcVar56 * 4)) =
             *(int *)(&UNK_14339839f + *(int *)(&UNK_143398390 + (longlong)pcVar56 * 4)) +
             0x43398390;
code_r0x000141b6fb77:
        *(undefined **)((longlong)plVar50 + -8) = &UNK_141b6fb80;
        fVar62 = (float)pub_142e32980();
        fVar62 = unaff_XMM11._0_4_ * fVar62;
        fVar63 = 0.0;
        goto code_r0x000141b6fbef;
      case (code *)0xc:
        *(longlong **)((longlong)plVar50 + -8) = plVar50;
        return (float *)&UNK_143398390;
      case (code *)0xd:
        break;
      case (code *)0xe:
code_r0x000141b6f9c6:
        plVar50 = plVar53;
        unaff_XMM11 = auVar65;
        goto code_r0x000141b6f9ed;
      case (code *)0xf:
        *(int *)((longlong)UNRECOVERED_JUMPTABLE + 0x36) =
             *(int *)((longlong)UNRECOVERED_JUMPTABLE + 0x36) + (int)UNRECOVERED_JUMPTABLE;
        goto code_r0x000141b6f944;
      case (code *)0x10:
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      case (code *)0x11:
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      goto code_r0x000141b6fbe6;
    case (float *)0x5c:
code_r0x000141b6f89d:
      *(undefined4 *)(lStack_58 + 0xf) = 0x41f3c928;
      in_XMM4_Da = (float)CONCAT13(in_XMM1_Bd,CONCAT12(in_XMM1_Bc,CONCAT11(in_XMM1_Bb,in_XMM1_Ba)))
                   * in_XMM4_Da;
      in_XMM1_Ba = SUB41(in_XMM4_Da,0);
      in_XMM1_Bb = (char)((uint)in_XMM4_Da >> 8);
      in_XMM1_Bc = (char)((uint)in_XMM4_Da >> 0x10);
      in_XMM1_Bd = (char)((uint)in_XMM4_Da >> 0x18);
      plVar46 = (longlong *)auStack_50;
      goto code_r0x000141b6f8a3;
    case (float *)0x5d:
      plVar54 = (longlong *)auStack_50;
      *(undefined4 *)(lStack_58 + 0xf) = 0x41f3c928;
      goto code_r0x000141b6fa13;
    }
LAB_141b6e912:
    *(undefined8 *)((longlong)pfVar36 + -8) = 0x141b6e930;
    UNRECOVERED_JUMPTABLE = (float *)pdb_142d8f140(pfVar26,pauVar57,&UNK_143397cb0,7);
    param_1 = UNRECOVERED_JUMPTABLE_00;
code_r0x000141b6e936:
    *(float **)(param_1 + 2) = UNRECOVERED_JUMPTABLE;
    *(code *)UNRECOVERED_JUMPTABLE_00 = (code)0x1;
    return UNRECOVERED_JUMPTABLE_00;
  case 0x10:
    *(int *)pcVar56 = *(int *)pcVar56 + 0x43398240;
LAB_141b6e809:
    param_2 = (float *)0x0;
LAB_141b6e80b:
    *(code *)UNRECOVERED_JUMPTABLE_00 = SUB81(param_2,0);
    return UNRECOVERED_JUMPTABLE_00;
  case 0x11:
  case 0x12:
  case 0x14:
    goto code_r0x000141b6e8d2;
  case 0x13:
    goto code_r0x000141b6e8a2;
  case 0x15:
    *(byte *)UNRECOVERED_JUMPTABLE_00 = (char)*(code *)UNRECOVERED_JUMPTABLE_00 + bVar7;
    *(code *)((longlong)pfVar55 + 0x50ce6090d) =
         (code)((char)*(code *)((longlong)pfVar55 + 0x50ce6090d) + 0x40);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x16:
    goto code_r0x000141b6e87e;
  case 0x17:
    goto code_r0x000141b6e858;
  case 0x18:
    goto code_r0x000141b6e916;
  case 0x19:
    bRam000000018b420a41 = bRam000000018b420a41 | (byte)unaff_R14;
    goto code_r0x000141b6e936;
  case 0x1a:
    bVar61 = ((uint)pcVar58 | 0x43398240) == 0;
    pfVar17 = (float *)&lStack_58;
    goto code_r0x000141b6e98c;
  case 0x1b:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x1c:
    pfVar26 = UNRECOVERED_JUMPTABLE;
    pfVar17 = (float *)&lStack_58;
    if (bVar60) {
      cVar8 = (code)in(uVar25);
      *pcVar56 = cVar8;
      bVar60 = true;
      pfVar26 = pfVar27;
code_r0x000141b6e9bc:
      out(*param_1,(short)pfVar26);
      pfVar17 = (float *)&lStack_58;
      if ((!bVar60) && (pfVar17 = (float *)&lStack_58, *(float **)pfVar26 == UNRECOVERED_JUMPTABLE))
      {
        *(code *)((longlong)UNRECOVERED_JUMPTABLE_00 + 1) = (code)0x3;
        goto code_r0x000141b6ea0e;
      }
    }
    goto code_r0x000141b6ea27;
  case 0x1d:
    UNRECOVERED_JUMPTABLE_00 = (float *)0x43398240;
    goto code_r0x000141b6e958;
  case 0x1e:
    param_2 = (float *)0x43398240;
code_r0x000141b6e9e8:
    UNRECOVERED_JUMPTABLE_00 = (float *)(ulonglong)((uint)UNRECOVERED_JUMPTABLE_00 & 0x746157b9);
    pfVar17 = (float *)&lStack_58;
    if (*(code *)(pfVar26 + 1) == (code)0x72 &&
        (int)param_2 == *(int *)((longlong)pfVar26 + unaff_GS_OFFSET)) {
      *(code *)((longlong)UNRECOVERED_JUMPTABLE_00 + 1) = (code)0x4;
      goto code_r0x000141b6ea0e;
    }
    goto code_r0x000141b6ea27;
  default:
    *(byte *)UNRECOVERED_JUMPTABLE_00 = (char)*(code *)UNRECOVERED_JUMPTABLE_00 + bVar7;
    return UNRECOVERED_JUMPTABLE_00;
  case 0x20:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x23:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x24:
    param_2 = (float *)(ulonglong)((uint)*pfVar27 ^ 0x63746970);
    pfVar26 = (float *)(ulonglong)(byte)*(code *)(pfVar27 + 1);
code_r0x000141b6eae8:
    uStack_30 = UNRECOVERED_JUMPTABLE_00;
    if ((int)pfVar26 == 0x68 && (int)param_2 == 0) {
code_r0x000141b6eaf3:
      *(code *)((longlong)UNRECOVERED_JUMPTABLE_00 + 1) = (code)0x1;
      *(code *)UNRECOVERED_JUMPTABLE_00 = (code)0x0;
      return UNRECOVERED_JUMPTABLE_00;
    }
    goto LAB_141b6ebc7;
  case 0x25:
code_r0x000141b6eb00:
    if (!bVar60) goto code_r0x000141b6eb07;
code_r0x000141b6eb65:
    *(code *)((longlong)UNRECOVERED_JUMPTABLE_00 + -0x7d) =
         (code)((byte)*(code *)((longlong)UNRECOVERED_JUMPTABLE_00 + -0x7d) | (byte)param_2);
    uStack_30 = UNRECOVERED_JUMPTABLE_00;
    if (pfVar26 != (float *)0x0 || param_2 != (float *)0x0) goto LAB_141b6ebc7;
    goto code_r0x000141b6eb6f;
  case 0x26:
    puVar1 = (uint *)(&UNK_1433981c9 + lVar12);
    *puVar1 = *puVar1 >> 0x10 | *puVar1 << 0x10;
    goto code_r0x000141b6ea3c;
  case 0x27:
    return UNRECOVERED_JUMPTABLE_00;
  case 0x29:
    *(byte *)UNRECOVERED_JUMPTABLE_00 = (char)*(code *)UNRECOVERED_JUMPTABLE_00 + bVar7;
    goto code_r0x000141b6eaa4;
  case 0x30:
    if (bVar60) {
      UNRECOVERED_JUMPTABLE_00 = (float *)0xc6014888;
      goto code_r0x000141b6eb9b;
    }
    out(*param_1,uVar25);
    out(*(code *)(param_1 + 1),uVar25);
    UNRECOVERED_JUMPTABLE = (float *)(*(ulonglong *)pfVar27 ^ 0x69736f70);
    pauVar57 = (undefined1 (*) [16])0x65686361635f6e6f;
code_r0x000141b6eb3b:
    uStack_30 = UNRECOVERED_JUMPTABLE_00;
    if (((ulonglong)pauVar57 | 0x60c) == *(ulonglong *)((longlong)pfVar27 + 6) &&
        UNRECOVERED_JUMPTABLE == (float *)0x0) {
      *(code *)((longlong)UNRECOVERED_JUMPTABLE_00 + 1) = (code)0x2;
      goto code_r0x000141b6eb51;
    }
    goto LAB_141b6ebc7;
  case 0x31:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x32:
    goto code_r0x000141b6ebd2;
  case 0x33:
code_r0x000141b6eb9b:
    *(char *)UNRECOVERED_JUMPTABLE_00 =
         (char)*(code *)UNRECOVERED_JUMPTABLE_00 + (char)UNRECOVERED_JUMPTABLE_00;
code_r0x000141b6eb95:
    *(code *)((longlong)UNRECOVERED_JUMPTABLE_00 + 1) = (code)0x5;
    *(code *)UNRECOVERED_JUMPTABLE_00 = (code)0x0;
    return UNRECOVERED_JUMPTABLE_00;
  case 0x34:
    goto code_r0x000141b6ebbb;
  case 0x35:
code_r0x000141b6eb51:
    *(code *)UNRECOVERED_JUMPTABLE_00 = (code)0x0;
    return UNRECOVERED_JUMPTABLE_00;
  case 0x36:
    *(byte *)UNRECOVERED_JUMPTABLE_00 = (char)*(code *)UNRECOVERED_JUMPTABLE_00 + bVar7;
    UNRECOVERED_JUMPTABLE = UNRECOVERED_JUMPTABLE_00;
    goto pdb_140f679a0;
  case 0x37:
    goto code_r0x000141b6ec51;
  case 0x38:
  case 0x39:
  case 0x3a:
  case 0x3e:
    pcVar56 = (code *)swi(3);
    pfVar17 = (float *)(*pcVar56)();
    return pfVar17;
  case 0x3b:
    pcVar58 = pcVar58 + -0x48;
    uVar11 = *(ulonglong *)pcVar58;
    *(undefined1 **)pcVar58 = *pauVar57 + *(ulonglong *)pcVar58;
    cVar20 = (char)((ulonglong)pfVar27 & 0xffffffff) + CARRY8(uVar11,(ulonglong)pauVar57);
    pcVar13 = (char *)CONCAT71((int7)(((ulonglong)pfVar27 & 0xffffffff) >> 8),cVar20);
    *pcVar13 = *pcVar13 + cVar20;
    goto pdb_140f679a0;
  case 0x3c:
    pcVar56 = (code *)swi(3);
    pfVar17 = (float *)(*pcVar56)();
    return pfVar17;
  case 0x3d:
    pfVar55 = (float *)&stack0xffffffffffffffa0;
    ppuVar37 = apuStack_a0;
    puStack_68 = (undefined1 *)0xfffffffffffffffe;
    lStack_70 = CONCAT17(UNK_143398247,
                         CONCAT43(_UNK_143398243,CONCAT21(_UNK_143398241,UNK_143398240)));
    if (lStack_70 != -0x7fffffffffffffff) {
      puStack_78 = &UNK_143398240;
      puStack_a8 = &UNK_141b6ef48;
      UNRECOVERED_JUMPTABLE_00 = (float *)pdb_1409a45e0(&UNK_143398258);
code_r0x000141b6ef49:
      param_2 = *(float **)(pfVar55 + -4);
code_r0x000141b6ef47:
      *(byte *)(UNRECOVERED_JUMPTABLE_00 + -0x3ea9d2e) =
           (char)*(code *)(UNRECOVERED_JUMPTABLE_00 + -0x3ea9d2e) + 1;
      bVar59 = param_2 != (float *)0x0;
      bVar61 = SBORROW8(0,(longlong)param_2);
      UNRECOVERED_JUMPTABLE_00 = *(float **)(pfVar55 + -6);
code_r0x000141b6ef57:
      if (bVar61) {
        return UNRECOVERED_JUMPTABLE_00;
      }
      if (!bVar59) {
        return UNRECOVERED_JUMPTABLE_00;
      }
      UNRECOVERED_JUMPTABLE = *(float **)(UNRECOVERED_JUMPTABLE_00 + 2);
      pauVar57 = (undefined1 (*) [16])0x1;
      unaff_RBP = *(float **)((longlong)ppuVar37 + 0x40);
      plVar38 = (longlong *)((longlong)ppuVar37 + 0x48);
      goto code_r0x0001406abac0;
    }
    UNRECOVERED_JUMPTABLE_00 = (float *)(ulonglong)UNK_143398248;
    if (UNRECOVERED_JUMPTABLE_00 < (float *)0x7) {
      UNRECOVERED_JUMPTABLE = (float *)&UNK_143398320;
code_r0x000141b6ef0d:
                    /* WARNING: Could not emulate address calculation at 0x000141b6ef0d */
                    /* WARNING: Treating indirect jump as call */
      pfVar17 = (float *)(*(code *)((longlong)UNRECOVERED_JUMPTABLE +
                                   (longlong)
                                   (int)UNRECOVERED_JUMPTABLE[(longlong)UNRECOVERED_JUMPTABLE_00]))
                                   ();
      return pfVar17;
    }
    bVar59 = false;
    UNRECOVERED_JUMPTABLE = (float *)&UNK_143398250;
    ppuVar39 = apuStack_a0;
    goto code_r0x0001409a45e0;
  case 0x3f:
    goto code_r0x000141b6ef92;
  case 0x40:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x41:
  case 0x44:
  case 0x46:
  case 0x47:
  case 0x48:
  case 0x49:
  case 0x4a:
  case 0x4b:
  case 0x4c:
    if ((POPCOUNT((ulonglong)UNRECOVERED_JUMPTABLE_00 & 0xff) & 1U) != 0) {
      return UNRECOVERED_JUMPTABLE_00;
    }
    goto code_r0x000141b6f00e;
  case 0x42:
    uVar11 = (ulonglong)(uint)((int)pfVar27 << 5);
    goto code_r0x000141b6efeb;
  case 0x43:
    goto code_r0x000141b6f08e;
  case 0x45:
    goto code_r0x000141b6f0b4;
  case 0x4d:
    UNRECOVERED_JUMPTABLE_00 = (float *)((ulonglong)UNRECOVERED_JUMPTABLE_00 & 0xffffffffffffff10);
code_r0x000141b6f00e:
    *(char *)UNRECOVERED_JUMPTABLE_00 =
         (char)*(code *)UNRECOVERED_JUMPTABLE_00 + (char)UNRECOVERED_JUMPTABLE_00;
    plVar42 = (longlong *)auStack_80;
    pfStack_48 = pfVar27;
code_r0x000141b6f01a:
    pfVar55 = pfVar27 + 0x10;
    UNRECOVERED_JUMPTABLE_00 = (float *)(*(ulonglong *)(pfVar27 + 0xc) * 2);
    plVar43 = plVar42;
code_r0x000141b6f02a:
    bVar59 = false;
    bVar60 = UNRECOVERED_JUMPTABLE_00 != (float *)0x0;
    UNRECOVERED_JUMPTABLE_00 = (float *)0x0;
    if (bVar60) {
      UNRECOVERED_JUMPTABLE_00 = *(float **)(pfVar55 + -6);
      plVar45 = plVar43;
code_r0x000141b6f033:
      UNRECOVERED_JUMPTABLE = *(float **)(UNRECOVERED_JUMPTABLE_00 + 2);
      plVar44 = plVar45;
code_r0x000141b6f02e:
      *(code *)((longlong)UNRECOVERED_JUMPTABLE_00 + -0x75) =
           (code)(((char)*(code *)((longlong)UNRECOVERED_JUMPTABLE_00 + -0x75) -
                  (char)UNRECOVERED_JUMPTABLE) - bVar59);
      *(undefined **)((longlong)plVar44 + -8) = &UNK_141b6f037;
      func_0x000149ff7b7f();
      uVar11 = *(ulonglong *)(pfVar55 + -4);
      *(undefined **)((longlong)plVar44 + -8) = &UNK_141b6f046;
      pub_1406abac0((byte *)UNRECOVERED_JUMPTABLE,uVar11,1);
      UNRECOVERED_JUMPTABLE_00 = extraout_RAX_00;
    }
code_r0x000141b6f04b:
    return UNRECOVERED_JUMPTABLE_00;
  case 0x4e:
  case 0x4f:
    uVar11 = *(ulonglong *)(pauVar57[1] + 8);
    auVar65._0_8_ = *(undefined8 *)pauVar57[2];
    *(ulonglong *)(pfVar55 + -4) = uVar11;
    *(undefined1 (**) [16])(pfVar55 + -6) = pauVar57;
    pdb_14098ae50(uVar11,auVar65._0_8_);
    uStack_30 = *(float **)(pfVar55 + -6);
    pfVar26 = *(float **)(uStack_30 + 4);
    goto code_r0x000141b6ef8d;
  case 0x50:
    goto code_r0x000141b6f02a;
  case 0x51:
  case 0x52:
  case 0x53:
    return UNRECOVERED_JUMPTABLE_00;
  case 0x54:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x55:
    *(byte *)UNRECOVERED_JUMPTABLE_00 = (char)*(code *)UNRECOVERED_JUMPTABLE_00 + bVar7;
    param_2 = param_1;
    goto code_r0x000141b6f77e;
  case 0x56:
    goto code_r0x000141b6f747;
  case 0x57:
    goto code_r0x000141b6f75a;
  case 0x58:
    goto code_r0x000141b6f734;
  case 0x59:
    if (!bVar60 && -0x143398241 < lVar12) goto code_r0x000141b6f67a;
    *UNRECOVERED_JUMPTABLE_00 =
         (float)((int)*UNRECOVERED_JUMPTABLE_00 + (int)UNRECOVERED_JUMPTABLE_00);
    *(byte *)UNRECOVERED_JUMPTABLE_00 = (char)*(code *)UNRECOVERED_JUMPTABLE_00 + bVar7;
    plVar48 = &lStack_58;
    goto code_r0x000141b6f78f;
  case 0x5a:
code_r0x000141b6f82d:
    UNRECOVERED_JUMPTABLE = param_2;
    plVar50 = &lStack_58;
    goto code_r0x000141b6f81d;
  case 0x5b:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x5c:
    goto code_r0x000141b6f8f5;
  case 0x5d:
    goto code_r0x000141b6f944;
  case 0x5e:
    goto code_r0x000141b6f89d;
  case 0x5f:
    goto code_r0x000141b6fa22;
  case 0x60:
    UNK_143398240 = UNK_143398240 & bVar7;
code_r0x000141b6f7cd:
    pdb_142d7f1b0(param_1,pcVar56);
    pcVar56 = *(code **)(param_1 + 4);
  case 99:
    pcVar56[*(ulonglong *)(param_1 + 2)] = (code)0xa;
    pcVar56 = pcVar56 + 1;
    *(code **)(param_1 + 4) = pcVar56;
    if (unaff_R12 == 0) {
code_r0x000141b6f642:
      if (*(code **)param_1 == pcVar56) {
code_r0x000141b6f725:
        uStack_38 = 1;
code_r0x000141b6f734:
        pdb_142d7f1b0(param_1,pcVar56);
        pcVar56 = *(code **)(param_1 + 4);
      }
    }
    else {
      uVar11 = unaff_R15[2];
      if (uVar11 != 0) {
        auVar65._0_8_ = unaff_R15[1];
        do {
          if (*(ulonglong *)param_1 - (longlong)pcVar56 < uVar11) {
            uStack_38 = 1;
            pdb_142d7f1b0(param_1,pcVar56,uVar11,1);
            pcVar56 = *(code **)(param_1 + 4);
          }
          pub_142e32760(pcVar56 + *(ulonglong *)(param_1 + 2),auVar65._0_8_,uVar11);
          pcVar56 = pcVar56 + uVar11;
          *(code **)(param_1 + 4) = pcVar56;
          unaff_R12 = unaff_R12 + -1;
        } while (unaff_R12 != 0);
        goto code_r0x000141b6f642;
      }
code_r0x000141b6f718:
      *(code **)(param_1 + 4) = pcVar56;
      if (*(code **)param_1 == pcVar56) goto code_r0x000141b6f725;
    }
    goto code_r0x000141b6f64b;
  case 0x61:
    *UNRECOVERED_JUMPTABLE_00 =
         (float)((int)*UNRECOVERED_JUMPTABLE_00 + (int)UNRECOVERED_JUMPTABLE_00);
    *pcVar56 = (code)((char)*pcVar56 + 0x40);
    plVar50 = (longlong *)&stack0xffffffffffffffa0;
    goto code_r0x000141b6fb77;
  case 0x62:
    goto code_r0x000141b6f871;
  case 100:
    goto code_r0x000141b6f87d;
  case 0x65:
    out(uVar25,(char)lStack_58);
    plVar50 = (longlong *)auStack_50;
    goto code_r0x000141b6f9ed;
  }
code_r0x000141b6daa2:
  cVar8 = (code)0x0;
code_r0x000141b6daa4:
  *(code *)param_1 = cVar8;
  return param_1;
}

