// VA 0x141b6d0d0, PDB extent 881 bytes
// country_core::systems::mode_manager::_::impl$0::deserialize<ref_mut$<serde_json::de::Deserializer<serde_json::read::StrRead> > >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/mode_manager.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Instruction at (ram,0x000141b6f79a) overlaps instruction at (ram,0x000141b6f798)
    */
/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x000141b6e8ae) */
/* WARNING: Removing unreachable block (ram,0x000141b6e8b0) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::systems::mode_manager::_::impl$0::deserialize<ref_mut$<serde_json::de::Deserializer<serde_json::read::StrRead>
   > >
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/mode_manager.rs
   Extent: 881 */

float * pdb_141b6d0d0(float *param_1,float *param_2)

{
  uint *puVar1;
  code cVar2;
  uint uVar3;
  ulonglong uVar4;
  longlong lVar5;
  byte *pbVar6;
  char unaff_00084f00;
  undefined1 *unaff_0008ae00;
  undefined1 auVar7 [16];
  code cVar8;
  byte bVar9;
  char cVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  ulonglong uVar15;
  undefined8 uVar16;
  float *UNRECOVERED_JUMPTABLE_01;
  ulonglong uVar17;
  undefined7 uVar21;
  longlong lVar18;
  char *pcVar19;
  float *extraout_RAX;
  float *extraout_RAX_00;
  int *piVar20;
  uint uVar22;
  float fVar23;
  float *UNRECOVERED_JUMPTABLE;
  float *UNRECOVERED_JUMPTABLE_00;
  float *pfVar24;
  float *pfVar25;
  undefined *puVar26;
  float *unaff_RBX;
  float *pfVar27;
  undefined1 *puVar28;
  float **ppfVar29;
  float **ppfVar30;
  float **ppfVar31;
  float **ppfVar33;
  float **ppfVar34;
  float **ppfVar35;
  float **ppfVar36;
  float **ppfVar37;
  float **ppfVar38;
  float **ppfVar39;
  float **ppfVar40;
  float **ppfVar41;
  float **ppfVar42;
  float **ppfVar43;
  float **ppfVar44;
  float **ppfVar45;
  float **ppfVar46;
  float **ppfVar47;
  float **ppfVar48;
  ulonglong uVar49;
  float **ppfVar50;
  float **ppfVar51;
  float **ppfVar52;
  float **ppfVar53;
  float **ppfVar54;
  float **ppfVar55;
  float **ppfVar56;
  float **ppfVar57;
  float **ppfVar58;
  float **ppfVar59;
  float **ppfVar60;
  float **ppfVar61;
  float **ppfVar62;
  float **ppfVar63;
  float **ppfVar64;
  float **ppfVar65;
  float **ppfVar66;
  float **ppfVar67;
  float **ppfVar68;
  float *unaff_RBP;
  float *pfVar69;
  float *pfVar70;
  code *pcVar71;
  code *in_R10;
  longlong unaff_R12;
  longlong unaff_R13;
  longlong unaff_R14;
  undefined8 *unaff_R15;
  longlong in_FS_OFFSET;
  longlong unaff_GS_OFFSET;
  bool bVar72;
  bool bVar73;
  bool bVar74;
  bool bVar75;
  float10 in_ST0;
  float fVar76;
  float fVar77;
  undefined8 extraout_XMM0_Qb;
  undefined8 extraout_XMM0_Qb_00;
  undefined8 extraout_XMM0_Qb_01;
  undefined8 extraout_XMM0_Qb_02;
  undefined8 extraout_XMM0_Qb_03;
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  undefined1 auVar84 [16];
  undefined1 auVar85 [16];
  undefined1 auVar86 [16];
  undefined1 auVar87 [16];
  undefined1 auVar88 [16];
  undefined1 auVar89 [16];
  undefined8 extraout_XMM0_Qb_04;
  undefined1 auVar90 [16];
  undefined8 extraout_XMM0_Qb_05;
  char in_XMM1_Ba;
  undefined1 uVar91;
  char in_XMM1_Bb;
  undefined1 uVar92;
  char in_XMM1_Bc;
  undefined1 uVar93;
  char in_XMM1_Bd;
  undefined1 uVar94;
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
  float unaff_XMM6_Da;
  undefined4 unaff_XMM6_Db;
  undefined4 unaff_XMM6_Dc;
  undefined4 unaff_XMM6_Dd;
  float unaff_XMM7_Da;
  undefined4 unaff_XMM7_Db;
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
  float unaff_XMM10_Da;
  float unaff_XMM10_Db;
  float unaff_XMM10_Dc;
  float unaff_XMM10_Dd;
  undefined1 unaff_XMM11 [16];
  float unaff_XMM12_Da;
  float unaff_XMM12_Db;
  float unaff_XMM12_Dc;
  float unaff_XMM12_Dd;
  undefined4 unaff_XMM13_Da;
  undefined4 unaff_XMM13_Db;
  undefined4 unaff_XMM13_Dc;
  undefined4 unaff_XMM13_Dd;
  undefined4 unaff_XMM14_Da;
  undefined4 unaff_XMM14_Db;
  undefined4 unaff_XMM14_Dc;
  undefined4 unaff_XMM14_Dd;
  undefined1 auStack_138 [152];
  undefined1 auStack_a0 [32];
  byte abStack_80 [16];
  float *pfStack_68;
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [2];
  undefined5 uStack_46;
  undefined1 uStack_41;
  uint7 uStack_40;
  undefined1 uStack_39;
  undefined7 uStack_38;
  undefined1 auStack_30 [8];
  ulonglong uStack_28;
  uint uVar14;
  ulonglong *puVar32;
  
  fVar76 = unaff_XMM11._0_4_;
  ppfVar29 = &pfStack_68;
  ppfVar34 = &pfStack_68;
  ppfVar35 = &pfStack_68;
  ppfVar30 = &pfStack_68;
  ppfVar39 = &pfStack_68;
  ppfVar41 = &pfStack_68;
  ppfVar42 = &pfStack_68;
  ppfVar48 = &pfStack_68;
  ppfVar31 = &pfStack_68;
  ppfVar55 = &pfStack_68;
  ppfVar57 = &pfStack_68;
  ppfVar58 = &pfStack_68;
  ppfVar60 = &pfStack_68;
  ppfVar65 = &pfStack_68;
  ppfVar67 = &pfStack_68;
  ppfVar62 = &pfStack_68;
  ppfVar66 = &pfStack_68;
  ppfVar36 = &pfStack_68;
  ppfVar40 = &pfStack_68;
  ppfVar47 = &pfStack_68;
  ppfVar64 = &pfStack_68;
  ppfVar68 = &pfStack_68;
  ppfVar56 = &pfStack_68;
  UNRECOVERED_JUMPTABLE_01 = *(float **)(param_2 + 10);
  if (UNRECOVERED_JUMPTABLE_01 < *(float **)(param_2 + 8)) {
    pfVar70 = *(float **)(param_2 + 6);
    pfVar69 = (float *)0x100002600;
    do {
      UNRECOVERED_JUMPTABLE_01 = (float *)((longlong)UNRECOVERED_JUMPTABLE_01 + 1);
      pcVar71 = (code *)(ulonglong)
                        (byte)((code *)((longlong)pfVar70 + -1))[(longlong)UNRECOVERED_JUMPTABLE_01]
      ;
      pfVar24 = param_1;
      if ((code *)0x22 < pcVar71) {
LAB_141b6d16d:
        if (((code *)((longlong)pfVar70 + -1))[(longlong)UNRECOVERED_JUMPTABLE_01] == (code)0x7b) {
          UNRECOVERED_JUMPTABLE_00 = param_2 + 0x12;
          *(byte *)UNRECOVERED_JUMPTABLE_00 = (char)*(code *)UNRECOVERED_JUMPTABLE_00 - 1;
          UNRECOVERED_JUMPTABLE = param_2;
          if (*(code *)UNRECOVERED_JUMPTABLE_00 != (code)0x0) goto code_r0x000141b6d180;
          auStack_48[0] = (code)0x18;
        }
        else {
          auStack_48[0] = (code)0xa;
        }
        goto LAB_141b6d12b;
      }
      if ((0x100002600U >> ((ulonglong)pcVar71 & 0x3f) & 1) == 0) {
        if (pcVar71 != (code *)0x22) goto LAB_141b6d16d;
        auVar80._0_8_ = pdb_1416579b0(auStack_48);
        auVar80._8_8_ = extraout_XMM0_Qb;
        UNRECOVERED_JUMPTABLE = (float *)&UNK_143398148;
        uVar17 = (ulonglong)*(int *)(&UNK_143398148 + (ulonglong)(byte)auStack_48[0] * 4);
        bVar72 = 0xfffffffebcc67eb7 < uVar17;
        bVar75 = SCARRY8(uVar17,0x143398148);
        UNRECOVERED_JUMPTABLE_01 = (float *)(&UNK_143398148 + uVar17);
        bVar74 = (longlong)UNRECOVERED_JUMPTABLE_01 < 0;
        bVar73 = UNRECOVERED_JUMPTABLE_01 == (float *)0x0;
        goto code_r0x000141b6d163;
      }
      *(float **)(param_2 + 10) = UNRECOVERED_JUMPTABLE_01;
    } while (UNRECOVERED_JUMPTABLE_01 != *(float **)(param_2 + 8));
  }
  auStack_48[0] = (code)0x5;
LAB_141b6d12b:
  uStack_41 = 0;
  uStack_46 = 0;
  auStack_48[1] = (code)0x0;
  uVar17 = pdb_142d84ef0(param_2,auStack_48);
  goto LAB_141b6d3a8;
code_r0x000141b6da5d:
  *(float **)(param_1 + 2) = unaff_RBX;
  unaff_RBX = (float *)0x1;
code_r0x000141b6da63:
  cVar8 = SUB81(unaff_RBX,0);
  goto code_r0x000141b6daa4;
code_r0x000141b6d70b:
  *unaff_RBX = (float)((int)*unaff_RBX + uVar12);
  *(code *)((longlong)unaff_RBX + -0x75) = *(code *)((longlong)unaff_RBX + -0x75);
  uVar17 = (ulonglong)unaff_RBX & 0xffffffffffffff30;
  goto LAB_141b6d8b6;
code_r0x000141b6d1e9:
  uVar17 = CONCAT17(uStack_39,uStack_40);
  goto LAB_141b6d3a8;
code_r0x000141b6f022:
  uVar17 = (ulonglong)unaff_RBX & 0x7fffffffffffffff;
  unaff_RBX = (float *)0x0;
  if (uVar17 != 0) {
    UNRECOVERED_JUMPTABLE = *(float **)(*(ulonglong *)(unaff_RBP + -6) + 8);
code_r0x000141b6f037:
    uVar17 = *(ulonglong *)(unaff_RBP + -4);
    *(undefined **)((longlong)ppfVar56 + -8) = &UNK_141b6f046;
    pub_1406abac0((byte *)UNRECOVERED_JUMPTABLE,uVar17,1);
    unaff_RBX = extraout_RAX_00;
  }
code_r0x000141b6f04b:
  return unaff_RBX;
code_r0x000141b6f9ed:
  ppfVar65 = ppfVar31;
code_r0x000141b6fbe6:
  fVar76 = unaff_XMM11._0_4_;
  *(undefined **)((longlong)ppfVar65 + -8) = &UNK_141b6fbef;
  fVar77 = (float)pub_142e32980();
code_r0x000141b6fbef:
  *param_1 = fVar76;
  param_1[1] = unaff_XMM6_Da;
  param_1[2] = fVar77;
  return param_1;
code_r0x000141b6d163:
  bVar9 = (byte)UNRECOVERED_JUMPTABLE_01;
  fVar77 = SUB84(UNRECOVERED_JUMPTABLE_01,0);
  iVar11 = 0x43398148;
  UNRECOVERED_JUMPTABLE_00 = UNRECOVERED_JUMPTABLE;
  pfVar27 = unaff_RBX;
  ppfVar52 = &pfStack_68;
  ppfVar51 = &pfStack_68;
  ppfVar50 = &pfStack_68;
  ppfVar37 = &pfStack_68;
  ppfVar61 = &pfStack_68;
  ppfVar53 = &pfStack_68;
  ppfVar59 = &pfStack_68;
  ppfVar63 = &pfStack_68;
  ppfVar54 = &pfStack_68;
  ppfVar44 = &pfStack_68;
  ppfVar46 = &pfStack_68;
  ppfVar45 = &pfStack_68;
  ppfVar43 = &pfStack_68;
  ppfVar38 = &pfStack_68;
  ppfVar33 = &pfStack_68;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(auStack_48[0]) {
  case (code)0x0:
  case (code)0x1:
  case (code)0x3:
  case (code)0x4:
  case (code)0x6:
  case (code)0xe:
    puVar26 = &UNK_143323630;
    goto code_r0x000141b6d397;
  case (code)0x2:
    *(code *)param_1 = (code)0x2;
    break;
  case (code)0x5:
    *(code *)param_1 = (code)0x5;
    break;
  case (code)0x7:
    *(code *)param_1 = (code)0x7;
    break;
  case (code)0x8:
    *(code *)param_1 = (code)0x8;
    break;
  case (code)0x9:
    *(code *)param_1 = (code)0x9;
    break;
  case (code)0xa:
    puVar26 = &UNK_143323610;
code_r0x000141b6d397:
    auStack_48[0] = (code)0xd;
    uVar17 = pdb_142db90e0(auStack_48,puVar26,&UNK_143322608);
LAB_141b6d3a8:
    *(ulonglong *)(param_1 + 2) = uVar17;
    *(code *)param_1 = (code)0x12;
    break;
  case (code)0xb:
    *(code *)param_1 = (code)0xb;
    break;
  case (code)0xc:
    *(code *)param_1 = (code)0xc;
    break;
  case (code)0xd:
    *(code *)param_1 = (code)0xd;
    break;
  case (code)0xf:
    *(code *)param_1 = (code)0xf;
    break;
  case (code)0x10:
    *(code *)param_1 = (code)0x10;
    break;
  case (code)0x11:
    *(code *)param_1 = (code)0x11;
    break;
  case (code)0x12:
    goto code_r0x000141b6d1e9;
  case (code)0x13:
    *(byte *)UNRECOVERED_JUMPTABLE_01 = (char)*(code *)UNRECOVERED_JUMPTABLE_01 + bVar9;
code_r0x000141b6d254:
    cVar8 = (code)0x12;
    UNRECOVERED_JUMPTABLE_01 = UNRECOVERED_JUMPTABLE;
    goto code_r0x000141b6d3c1;
  case (code)0x14:
    fRam0000000100002600 =
         (float)CONCAT31(fRam0000000100002600._1_3_,fRam0000000100002600._0_1_ + 'H');
    pcVar71 = (code *)((longlong)pfVar70 + -0x77);
    *(uint *)pcVar71 = *(uint *)pcVar71 >> 0x16 | *(uint *)pcVar71 << 10;
    puVar26 = &UNK_1433981c9;
    *(byte *)UNRECOVERED_JUMPTABLE_01 = (char)*(code *)UNRECOVERED_JUMPTABLE_01 + bVar9;
    (&UNK_1433980d5)[uVar17] = (&UNK_1433980d5)[uVar17] + -0x37;
    UNRECOVERED_JUMPTABLE_01 = (float *)((ulonglong)UNRECOVERED_JUMPTABLE_01 & 0xffffffffffffff20);
    UNRECOVERED_JUMPTABLE = unaff_RBX;
code_r0x000141b6d283:
    pdb_141b6d900(puVar26,UNRECOVERED_JUMPTABLE_01);
    if (auStack_48[0] == (code)0x1) {
code_r0x000141b6d30e:
      uStack_28 = CONCAT17(uStack_39,uStack_40);
      goto code_r0x000141b6d313;
    }
    goto code_r0x000141b6d297;
  default:
    goto code_r0x000141b6d163;
  case (code)0x16:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (code)0x17:
    (&UNK_1433980d5)[uVar17] = (&UNK_1433980d5)[uVar17] + 'H';
    pfVar70 = (float *)((ulonglong)UNRECOVERED_JUMPTABLE_01 & 0xffffffffffffff20);
    UNRECOVERED_JUMPTABLE_01 = UNRECOVERED_JUMPTABLE;
code_r0x000141b6d238:
    pdb_1417c0430(UNRECOVERED_JUMPTABLE_01,pfVar70);
    UNRECOVERED_JUMPTABLE_01 =
         (float *)CONCAT17(uStack_41,CONCAT52(uStack_46,CONCAT11(auStack_48[1],auStack_48[0])));
    UNRECOVERED_JUMPTABLE = (float *)CONCAT17(uStack_39,uStack_40);
    if (UNRECOVERED_JUMPTABLE_01 == (float *)0x8) goto code_r0x000141b6d254;
    *(float **)(param_1 + 4) = UNRECOVERED_JUMPTABLE;
    cVar8 = (code)0x6;
code_r0x000141b6d3c1:
    *(float **)(param_1 + 2) = UNRECOVERED_JUMPTABLE_01;
    *(code *)param_1 = cVar8;
    *(byte *)(unaff_RBX + 0x12) = (char)*(code *)(unaff_RBX + 0x12) + 1;
    UNRECOVERED_JUMPTABLE = unaff_RBX;
joined_r0x000141b6d323:
    if (cVar8 == (code)0x12) {
      return param_1;
    }
code_r0x000141b6d329:
    uVar17 = *(ulonglong *)(UNRECOVERED_JUMPTABLE + 10);
    if (uVar17 < *(ulonglong *)(UNRECOVERED_JUMPTABLE + 8)) {
      do {
        uVar17 = uVar17 + 1;
        bVar9 = *(byte *)((*(ulonglong *)(UNRECOVERED_JUMPTABLE + 6) - 1) + uVar17);
        if ((0x20 < (ulonglong)bVar9) || ((0x100002600U >> ((ulonglong)bVar9 & 0x3f) & 1) == 0)) {
          if (bVar9 == 0x7d) {
            *(ulonglong *)(UNRECOVERED_JUMPTABLE + 10) = uVar17;
            return param_1;
          }
          auStack_48[0] = (code)0xa;
          goto code_r0x000141b6d36f;
        }
        *(ulonglong *)(UNRECOVERED_JUMPTABLE + 10) = uVar17;
      } while (uVar17 != *(ulonglong *)(UNRECOVERED_JUMPTABLE + 8));
    }
    auStack_48[0] = (code)0x3;
code_r0x000141b6d36f:
    uStack_41 = 0;
    uStack_46 = 0;
    auStack_48[1] = (code)0x0;
    uVar17 = pdb_142d855a0(UNRECOVERED_JUMPTABLE,auStack_48);
    goto LAB_141b6d3a8;
  case (code)0x19:
    *(byte *)UNRECOVERED_JUMPTABLE_01 = (char)*(code *)UNRECOVERED_JUMPTABLE_01 + bVar9;
    goto code_r0x000141b6d1e9;
  case (code)0x1d:
    if ((longlong)uVar17 < -0x143398148) {
      return UNRECOVERED_JUMPTABLE_01;
    }
    auStack_48[1] = (code)(bVar9 & 0x21);
    UNRECOVERED_JUMPTABLE = unaff_RBX;
code_r0x000141b6d297:
    *(code *)((longlong)param_1 + 1) = auStack_48[1];
    cVar8 = (code)0x4;
code_r0x000141b6d319:
    *(code *)param_1 = cVar8;
code_r0x000141b6d31b:
    *(byte *)(UNRECOVERED_JUMPTABLE + 0x12) = (char)*(code *)(UNRECOVERED_JUMPTABLE + 0x12) + 1;
    goto joined_r0x000141b6d323;
  case (code)0x21:
code_r0x000141b6d2aa:
    UNRECOVERED_JUMPTABLE = unaff_RBX;
    pfVar70 = UNRECOVERED_JUMPTABLE + 0x1ce091f;
    *(char *)pfVar70 = (char)*(code *)pfVar70 + (char)UNRECOVERED_JUMPTABLE_01;
    if (*(code *)pfVar70 != (code)0x0) {
      uStack_41 = auStack_30[0];
      uStack_40 = auStack_30._1_7_;
      uStack_39 = (undefined1)uStack_28;
      uStack_38 = (undefined7)(uStack_28 >> 8);
      *(ulonglong *)(param_1 + 4) = uStack_28;
      *(ulonglong *)((longlong)param_1 + 1) =
           CONCAT17(uStack_41,CONCAT52(uStack_46,CONCAT11(auStack_48[1],auStack_48[0])));
      *(ulonglong *)((longlong)param_1 + 9) = CONCAT17(uStack_39,uStack_40);
      cVar8 = (code)0x0;
      goto code_r0x000141b6d319;
    }
code_r0x000141b6d313:
    *(ulonglong *)(param_1 + 2) = uStack_28;
    cVar8 = (code)0x12;
    goto code_r0x000141b6d319;
  case (code)0x25:
    if ((POPCOUNT((ulonglong)UNRECOVERED_JUMPTABLE_01 & 0xff) & 1U) == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    param_2[10] = fVar77;
    UNRECOVERED_JUMPTABLE = param_2;
code_r0x000141b6d180:
    *(float **)(UNRECOVERED_JUMPTABLE + 10) = UNRECOVERED_JUMPTABLE_01;
    auVar80._0_8_ = pdb_141653f70(auStack_48);
    auVar80._8_8_ = extraout_XMM0_Qb_00;
    unaff_RBP = (float *)(ulonglong)(byte)auStack_48[0];
    unaff_RBX = (float *)CONCAT17(uStack_39,uStack_40);
    param_2 = (float *)&UNK_143398194;
    uVar17 = (ulonglong)*(int *)(&UNK_143398194 + (longlong)unaff_RBP * 4);
    bVar72 = 0xfffffffebcc67e6b < uVar17;
    UNRECOVERED_JUMPTABLE_00 = (float *)(&UNK_143398194 + uVar17);
    bVar73 = UNRECOVERED_JUMPTABLE_00 == (float *)0x0;
    bVar9 = (byte)UNRECOVERED_JUMPTABLE_00;
    uVar22 = (uint)UNRECOVERED_JUMPTABLE_00;
    cVar10 = (char)uStack_40;
    uVar12 = (uint)uStack_40;
    UNRECOVERED_JUMPTABLE_01 = unaff_RBX;
    pfVar27 = UNRECOVERED_JUMPTABLE;
    ppfVar54 = &pfStack_68;
    ppfVar56 = &pfStack_68;
    ppfVar31 = &pfStack_68;
    ppfVar42 = &pfStack_68;
    ppfVar34 = &pfStack_68;
    ppfVar55 = &pfStack_68;
    ppfVar60 = &pfStack_68;
    ppfVar29 = &pfStack_68;
    ppfVar64 = &pfStack_68;
    ppfVar46 = &pfStack_68;
    ppfVar30 = &pfStack_68;
    ppfVar63 = &pfStack_68;
    ppfVar48 = &pfStack_68;
    ppfVar65 = &pfStack_68;
    ppfVar67 = &pfStack_68;
    ppfVar39 = &pfStack_68;
    ppfVar35 = &pfStack_68;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(auStack_48[0]) {
    case (code)0x0:
      UNRECOVERED_JUMPTABLE_01 = (float *)pdb_141b6d620(auStack_30,unaff_RBX);
      unaff_RBX = UNRECOVERED_JUMPTABLE;
      goto code_r0x000141b6d2aa;
    case (code)0x1:
      pdb_141b6d450(auStack_48,unaff_RBX);
      if (auStack_48[0] != (code)0x1) {
        *(code *)((longlong)param_1 + 1) = auStack_48[1];
        cVar8 = (code)0x1;
        goto code_r0x000141b6d319;
      }
      goto code_r0x000141b6d30e;
    default:
      unaff_RBX = (float *)pdb_141654940(unaff_RBX);
      if (unaff_RBX != (float *)0x0) goto code_r0x000141b6d1bc;
      *(code *)param_1 = auStack_48[0];
      *(byte *)(UNRECOVERED_JUMPTABLE + 0x12) = (char)*(code *)(UNRECOVERED_JUMPTABLE + 0x12) + 1;
      goto code_r0x000141b6d329;
    case (code)0x3:
      uVar17 = pdb_14165b3b0(unaff_RBX);
      cVar8 = (code)0x3;
      if ((uVar17 & 1) != 0) {
        cVar8 = (code)0x12;
      }
      *(float **)(param_1 + 2) = param_2;
      goto code_r0x000141b6d319;
    case (code)0x4:
      puVar26 = auStack_48;
      goto code_r0x000141b6d283;
    case (code)0x6:
      UNRECOVERED_JUMPTABLE_01 = (float *)auStack_48;
      pfVar70 = unaff_RBX;
      unaff_RBX = UNRECOVERED_JUMPTABLE;
      goto code_r0x000141b6d238;
    case (code)0xa:
      pdb_141656200(param_1,unaff_RBX,8,0);
      cVar8 = *(code *)param_1;
      goto code_r0x000141b6d31b;
    case (code)0xe:
      pdb_141656e40(auStack_48,unaff_RBX);
      if (auStack_48[0] == (code)0x1) goto code_r0x000141b6d30e;
      *(code *)((longlong)param_1 + 1) = auStack_48[1];
      cVar8 = (code)0xe;
      goto code_r0x000141b6d319;
    case (code)0x12:
code_r0x000141b6d1bc:
      *(float **)(param_1 + 2) = unaff_RBX;
      *(code *)param_1 = (code)0x12;
      *(byte *)(UNRECOVERED_JUMPTABLE + 0x12) = (char)*(code *)(UNRECOVERED_JUMPTABLE + 0x12) + 1;
      return param_1;
    case (code)0x13:
      while (UNRECOVERED_JUMPTABLE = UNRECOVERED_JUMPTABLE_00, unaff_RBX = pfVar27,
            puVar28 = (undefined1 *)ppfVar29, !bVar73) {
LAB_141b6d47c:
        pcVar71 = (code *)(ulonglong)
                          (byte)((code *)((longlong)pfVar70 + -1))
                                [(longlong)UNRECOVERED_JUMPTABLE_01];
        if ((code *)0x22 < pcVar71) {
LAB_141b6d4f5:
          if (((code *)((longlong)pfVar70 + -1))[(longlong)UNRECOVERED_JUMPTABLE_01] != (code)0x7b)
          {
            *(undefined8 *)(puVar28 + 0x20) = 10;
            goto LAB_141b6d4ab;
          }
          pfVar69 = param_2 + 0x12;
          *(byte *)pfVar69 = (char)*(code *)pfVar69 - 1;
          if (*(code *)pfVar69 != (code)0x0) {
            *(float **)(param_2 + 10) = UNRECOVERED_JUMPTABLE_01;
            *(undefined8 *)(puVar28 + -8) = 0x141b6d519;
            auVar80._0_8_ = pdb_141653c20(puVar28 + 0x20);
            auVar80._8_8_ = extraout_XMM0_Qb_02;
            UNRECOVERED_JUMPTABLE = (float *)(ulonglong)(byte)puVar28[0x20];
            UNRECOVERED_JUMPTABLE_01 = *(float **)(puVar28 + 0x28);
            pfVar27 = param_2;
            ppfVar56 = (float **)puVar28;
            unaff_RBP = UNRECOVERED_JUMPTABLE;
            goto code_r0x000141b6d527;
          }
          *(undefined8 *)(puVar28 + 0x20) = 0x18;
          goto LAB_141b6d4ab;
        }
        ppfVar29 = (float **)puVar28;
        if ((0x100002600U >> ((ulonglong)pcVar71 & 0x3f) & 1) == 0) {
          pfVar27 = unaff_RBX;
          ppfVar55 = (float **)puVar28;
          if (pcVar71 != (code *)0x22) goto LAB_141b6d4f5;
          goto code_r0x000141b6d4cd;
        }
code_r0x000141b6d48e:
        *(float **)(param_2 + 10) = UNRECOVERED_JUMPTABLE_01;
        pcVar71 = (code *)((longlong)UNRECOVERED_JUMPTABLE + (longlong)UNRECOVERED_JUMPTABLE_01) + 1
        ;
        UNRECOVERED_JUMPTABLE_01 = (float *)((longlong)UNRECOVERED_JUMPTABLE_01 + 1);
        pfVar27 = unaff_RBX;
code_r0x000141b6d49c:
        UNRECOVERED_JUMPTABLE_00 = UNRECOVERED_JUMPTABLE;
        bVar73 = pcVar71 == (code *)0x1;
      }
      goto LAB_141b6d4a2;
    case (code)0x14:
      goto code_r0x000141b6d58a;
    case (code)0x15:
      UNRECOVERED_JUMPTABLE_00 = (float *)(ulonglong)*(byte *)((longlong)unaff_RBX * 2 + -1);
      ppfVar56 = &pfStack_68;
      goto code_r0x000141b6d574;
    case (code)0x16:
      bVar73 = uVar22 < 0x20;
      bVar72 = uVar22 == 0x20;
      ppfVar56 = &pfStack_68;
      goto code_r0x000141b6d57e;
    case (code)0x17:
    case (code)0x18:
    case (code)0x19:
      *(code *)((longlong)unaff_RBX + -0x73) =
           (code)((byte)*(code *)((longlong)unaff_RBX + -0x73) & bVar9);
      ppfVar55 = &pfStack_68;
      break;
    case (code)0x1a:
      ppfVar55 = &pfStack_68;
      break;
    case (code)0x1b:
      *(char *)unaff_RBX = (char)*(code *)unaff_RBX + cVar10;
      *(code *)((longlong)unaff_RBP + 0xf) =
           (code)((char)*(code *)((longlong)unaff_RBP + 0xf) + cVar10);
      param_2 = (float *)&UNK_143394c94;
      UNRECOVERED_JUMPTABLE = UNRECOVERED_JUMPTABLE_00;
      goto LAB_141b6d64b;
    case (code)0x1c:
    case (code)0x1d:
    case (code)0x21:
      pfVar69 = (float *)0x100002601;
      UNRECOVERED_JUMPTABLE = UNRECOVERED_JUMPTABLE + 0x4a091f;
      *UNRECOVERED_JUMPTABLE = (float)((int)*UNRECOVERED_JUMPTABLE + 1);
      bVar73 = *UNRECOVERED_JUMPTABLE == 0.0;
      ppfVar31 = &pfStack_68;
      goto code_r0x000141b6d7f3;
    case (code)0x1e:
      goto code_r0x000141b6d6af;
    case (code)0x1f:
    case (code)0x20:
      pfVar24 = (float *)((ulonglong)param_1 & 0xffffffff);
      ppfVar56 = &pfStack_68;
      goto code_r0x000141b6d82f;
    case (code)0x22:
      goto code_r0x000141b6d6a4;
    case (code)0x23:
      goto LAB_141b6d671;
    case (code)0x24:
      ppfVar30 = &pfStack_68;
      goto LAB_141b6d6bf;
    case (code)0x25:
      UNRECOVERED_JUMPTABLE = UNRECOVERED_JUMPTABLE_00;
      UNRECOVERED_JUMPTABLE_00 = param_2;
      ppfVar56 = &pfStack_68;
      goto code_r0x000141b6d6db;
    case (code)0x26:
      goto code_r0x000141b6d69a;
    case (code)0x27:
      goto code_r0x000141b6d77c;
    case (code)0x28:
      goto code_r0x000141b6d793;
    case (code)0x29:
      goto code_r0x000141b6d758;
    case (code)0x2a:
      *(uint *)((longlong)unaff_RBX + 1) = *(uint *)((longlong)unaff_RBX + 1) | 0xc7e0ffc8;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case (code)0x2b:
code_r0x000141b6d8f0:
      ppfVar56 = ppfVar64;
      UNRECOVERED_JUMPTABLE = UNRECOVERED_JUMPTABLE_00;
      goto code_r0x000141b6d88d;
    case (code)0x2c:
      pfVar25 = (float *)(&UNK_143398193 + uVar17);
      UNRECOVERED_JUMPTABLE_00 = param_2;
      ppfVar56 = &pfStack_68;
      if ((float *)(&UNK_143398193 + uVar17) != (float *)0x0 && bVar73) goto code_r0x000141b6da30;
      unaff_RBX = (float *)pdb_141654940((ulonglong)uStack_40 & 0xffffffff);
      bVar73 = unaff_RBX == (float *)0x0;
    case (code)0x31:
      if (!bVar73) {
        *(float **)(param_1 + 2) = unaff_RBX;
        *(code *)param_1 = (code)0x1;
        *(byte *)(UNRECOVERED_JUMPTABLE + 0x12) = (char)*(code *)(UNRECOVERED_JUMPTABLE + 0x12) + 1;
        return param_1;
      }
      *(byte *)(UNRECOVERED_JUMPTABLE + 0x12) = (char)*(code *)(UNRECOVERED_JUMPTABLE + 0x12) + 1;
      *(code *)((longlong)param_1 + 1) = auStack_48[0];
      param_2 = *(float **)(UNRECOVERED_JUMPTABLE + 8);
      goto code_r0x000141b6da11;
    case (code)0x2d:
      pfVar69 = (float *)0x100002601;
      uVar91 = in(0x8194);
      fRam0000000100002600 = (float)CONCAT31(fRam0000000100002600._1_3_,uVar91);
    case (code)0x2f:
      out(0x60,uVar12);
      *(int *)((longlong)pfVar69 + 1) = *(int *)((longlong)pfVar69 + 1) + -1;
      unaff_RBX = (float *)((ulonglong)unaff_RBX & 0xffffffffffffff20);
      UNRECOVERED_JUMPTABLE_00 = (float *)&UNK_143396c94;
      ppfVar31 = &pfStack_68;
      goto code_r0x000141b6d9b8;
    case (code)0x2e:
      unaff_RBX = (float *)((ulonglong)unaff_RBX & 0xffffffffffffff28);
      UNRECOVERED_JUMPTABLE_00 = param_2;
      ppfVar31 = &pfStack_68;
      goto code_r0x000141b6d9b8;
    case (code)0x30:
      out(*param_1,0x8194);
      *(int *)((longlong)unaff_RBX + -0x7b) = *(int *)((longlong)unaff_RBX + -0x7b) + -1;
      *(undefined1 *)(uVar17 + 0x24339a7dd) = 0;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case (code)0x32:
      goto code_r0x000141b6d9d7;
    case (code)0x33:
    case (code)0x34:
    case (code)0x35:
    case (code)0x36:
    case (code)0x37:
    case (code)0x38:
    case (code)0x39:
      *(code *)((longlong)unaff_RBX + -1) =
           (code)(((char)*(code *)((longlong)unaff_RBX + -1) - bVar9) - bVar72);
      pcVar71 = (code *)((longlong)unaff_RBX + -9);
      *pcVar71 = (code)((byte)*pcVar71 >> 1 | (char)*pcVar71 << 7);
      goto LAB_141b6d92c;
    case (code)0x3a:
      *unaff_RBX = (float)((int)*unaff_RBX + uVar12);
      *(char *)unaff_RBX = (char)*(code *)unaff_RBX + cVar10;
      ppfVar36 = &pfStack_68;
      goto LAB_141b6d92c;
    case (code)0x3b:
      UNRECOVERED_JUMPTABLE = (float *)((ulonglong)UNRECOVERED_JUMPTABLE_00 & 0xffffffff);
      UNRECOVERED_JUMPTABLE_00 = UNRECOVERED_JUMPTABLE;
      goto code_r0x000141b6e762;
    case (code)0x3c:
    case (code)0x3d:
    case (code)0x3f:
      unaff_RBX = (float *)((ulonglong)UNRECOVERED_JUMPTABLE_00 & 0xffffffff);
      UNRECOVERED_JUMPTABLE = pfVar70 + -1;
      ppfVar47 = &pfStack_68;
      ppfVar31 = &pfStack_68;
      if ((float *)0x7 < pfVar70 + -1) goto LAB_141b6e912;
      goto code_r0x000141b6e836;
    case (code)0x3e:
      unaff_RBX = (float *)(ulonglong)(uVar12 | 0x40c610eb);
      *UNRECOVERED_JUMPTABLE = (float)((int)*UNRECOVERED_JUMPTABLE + uVar22);
      goto LAB_141b6e809;
    case (code)0x40:
      pfVar69 = (float *)0x100002601;
      uVar91 = in(0x8194);
      fRam0000000100002600 = (float)CONCAT31(fRam0000000100002600._1_3_,uVar91);
      goto code_r0x000141b6e786;
    case (code)0x41:
      ppfVar43 = &pfStack_68;
      pfVar24 = unaff_RBX;
      goto code_r0x000141b6e7da;
    case (code)0x42:
      *(code *)((longlong)unaff_RBX + 1) = (code)0x6;
      goto LAB_141b6e809;
    case (code)0x43:
      goto code_r0x000141b6e86a;
    case (code)0x44:
      goto code_r0x000141b6e88c;
    case (code)0x45:
      bVar73 = CARRY4(uRam0000000196700fcf,uVar12);
      uRam0000000196700fcf = uRam0000000196700fcf + uVar12;
      ppfVar44 = &pfStack_68;
      if (bVar73) {
        UNRECOVERED_JUMPTABLE = (float *)(ulonglong)(uVar12 - 3);
        ppfVar55 = &pfStack_68;
        goto code_r0x000141b6e95c;
      }
      goto code_r0x000141b6e8e7;
    case (code)0x46:
      UNRECOVERED_JUMPTABLE_00 = param_2;
      if (bVar72) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      goto code_r0x000141b6e8c6;
    case (code)0x47:
      goto code_r0x000141b6e90c;
    case (code)0x48:
      if (bVar73) {
        param_2 = (float *)0x43397cb0;
        ppfVar47 = &pfStack_68;
      }
      goto LAB_141b6e912;
    case (code)0x49:
      pcVar71 = (code *)swi(3);
      UNRECOVERED_JUMPTABLE_01 = (float *)(*pcVar71)();
      return UNRECOVERED_JUMPTABLE_01;
    case (code)0x4a:
    case (code)0x4c:
    case (code)0x4d:
    case (code)0x53:
    case (code)0x55:
    case (code)0x56:
    case (code)0x57:
    case (code)0x58:
    case (code)0x59:
    case (code)0x5a:
      goto code_r0x000141b6eaa3;
    case (code)0x4b:
      UNRECOVERED_JUMPTABLE = UNRECOVERED_JUMPTABLE_00;
      ppfVar48 = &pfStack_68;
      if (!bVar73) goto code_r0x000141b6ea27;
      uVar91 = in(0x8194);
      fRam0000000100002600 = (float)CONCAT31(fRam0000000100002600._1_3_,uVar91);
      UNRECOVERED_JUMPTABLE_00 = (float *)0x0;
      bVar74 = true;
      pfStack_68 = unaff_RBX;
      ppfVar48 = &pfStack_68;
      goto code_r0x000141b6e9bc;
    case (code)0x4e:
      *(uint *)(&UNK_14339815d + uVar17 + (longlong)unaff_RBX) = uVar22;
      goto code_r0x000141b6e974;
    case (code)0x4f:
      goto code_r0x000141b6ea31;
    case (code)0x50:
      UNRECOVERED_JUMPTABLE_01 = (float *)(ulonglong)(uVar12 - 3);
      goto code_r0x000141b6ea57;
    case (code)0x51:
      goto code_r0x000141b6e98c;
    case (code)0x52:
      goto code_r0x000141b6e9d8;
    case (code)0x54:
      unaff_RBX = (float *)(CONCAT71((int7)((ulonglong)unaff_RBX >> 8),cVar10 + -0x15) | 0x81);
      goto code_r0x000141b6ea05;
    case (code)0x5b:
      goto code_r0x000141b6ea7a;
    case (code)0x5c:
      UNRECOVERED_JUMPTABLE = UNRECOVERED_JUMPTABLE_00;
      goto code_r0x000141b6ea8d;
    case (code)0x5d:
      UNRECOVERED_JUMPTABLE = (float *)0x69736f70;
      if (bVar73) goto code_r0x000141b6eb96;
      out(*param_1,0x8194);
      out(*(code *)(param_1 + 1),0x8194);
      goto code_r0x000141b6eb2f;
    case (code)0x5e:
      goto code_r0x000141b6eaef;
    case (code)0x5f:
      uVar12 = 0x375cf2f2;
      UNRECOVERED_JUMPTABLE = UNRECOVERED_JUMPTABLE_00;
      goto code_r0x000141b6eb13;
    case (code)0x60:
      goto code_r0x000141b6eaa5;
    case (code)0x61:
      goto code_r0x000141b6eb5b;
    case (code)0x62:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case (code)0x63:
    case (code)0x64:
    case (code)0x65:
    case (code)0x69:
      *(char *)unaff_RBX = (char)*(code *)unaff_RBX + cVar10;
      goto pdb_140f679a0;
    case (code)0x66:
      if (UNRECOVERED_JUMPTABLE_00 == (float *)0x0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      goto code_r0x000141b6ed97;
    case (code)0x67:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case (code)0x68:
      pcVar71 = (code *)swi(3);
      UNRECOVERED_JUMPTABLE_01 = (float *)(*pcVar71)();
      return UNRECOVERED_JUMPTABLE_01;
    case (code)0x6a:
      if ((ulonglong)(uint)*UNRECOVERED_JUMPTABLE_00 == 0x8000000000000001) {
        cVar8 = *(code *)(pfVar70 + 2);
        goto code_r0x000141b6eefc;
      }
      *(ulonglong *)(unaff_RBP + -4) = (ulonglong)(uint)*UNRECOVERED_JUMPTABLE_00;
      *(float **)(unaff_RBP + -6) = pfVar70;
      pfVar70 = pfVar70 + 6;
      goto code_r0x000141b6ef43;
    case (code)0x6b:
      ppfVar56 = (float **)&stack0xffffffffffffff90;
      do {
      } while (UNRECOVERED_JUMPTABLE_00 == (float *)0x0);
      goto DAT_141b6efd0;
    case (code)0x6c:
    case (code)0x6f:
    case (code)0x71:
    case (code)0x72:
    case (code)0x73:
    case (code)0x74:
    case (code)0x75:
    case (code)0x76:
    case (code)0x77:
      goto code_r0x000141b6ef96;
    case (code)0x6d:
      pfVar70 = (float *)(ulonglong)(uVar12 + 0x18);
code_r0x000141b6ef43:
      pdb_1409a45e0(pfVar70);
      ppfVar55 = &pfStack_68;
      goto code_r0x000141b6ef49;
    case (code)0x6e:
      goto code_r0x000141b6efe2;
    case (code)0x70:
      goto code_r0x000141b6efff;
    case (code)0x78:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case (code)0x79:
    case (code)0x7a:
      iRam00000001100680d3 = (int)in_ST0;
      pcVar71 = (code *)swi(3);
      UNRECOVERED_JUMPTABLE_01 = (float *)(*pcVar71)();
      return UNRECOVERED_JUMPTABLE_01;
    case (code)0x7b:
      goto code_r0x000141b6ef7e;
    case (code)0x7c:
    case (code)0x7d:
    case (code)0x7e:
      *(code *)((longlong)unaff_RBX + -0x7d) =
           (code)((byte)*(code *)((longlong)unaff_RBX + -0x7d) | bVar9);
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case (code)0x7f:
      goto code_r0x000141b6f675;
    case (code)0x80:
      goto code_r0x000141b6f6c1;
    case (code)0x81:
      goto code_r0x000141b6f69b;
    case (code)0x82:
      *(code *)((longlong)unaff_RBX + 1) = (code)((byte)*(code *)((longlong)unaff_RBX + 1) | bVar9);
      ppfVar60 = &pfStack_68;
      goto code_r0x000141b6f6ab;
    case (code)0x83:
      *(code *)((longlong)unaff_RBP + -0x7b) =
           (code)((char)*(code *)((longlong)unaff_RBP + -0x7b) + bVar9 + bVar72);
      in(0x74);
      UNRECOVERED_JUMPTABLE = *(float **)((longlong)unaff_R15 + in_FS_OFFSET + 0x10);
      ppfVar60 = &pfStack_68;
      goto code_r0x000141b6f692;
    case (code)0x84:
      goto code_r0x000141b6f6dc;
    case (code)0x85:
      goto code_r0x000141b6f781;
    case (code)0x86:
      goto code_r0x000141b6f8fd;
    case (code)0x87:
      goto code_r0x000141b6f847;
    case (code)0x88:
      auVar82._0_4_ = (float)auVar80._0_8_ * unaff_XMM8_Da;
      auVar82._4_4_ = (float)((ulonglong)auVar80._0_8_ >> 0x20) * unaff_XMM8_Db;
      auVar82._8_4_ = (float)extraout_XMM0_Qb_00 * unaff_XMM8_Dc;
      auVar82._12_4_ = (float)((ulonglong)extraout_XMM0_Qb_00 >> 0x20) * unaff_XMM8_Dd;
      ppfVar67 = &pfStack_68;
      goto code_r0x000141b6f8ce;
    case (code)0x89:
      ppfVar31 = (float **)auStack_138;
      UNRECOVERED_JUMPTABLE = UNRECOVERED_JUMPTABLE_00;
      UNRECOVERED_JUMPTABLE_00 = param_2;
      goto code_r0x000141b6f802;
    case (code)0x8a:
      goto code_r0x000141b6f965;
    case (code)0x8b:
      goto code_r0x000141b6f728;
    case (code)0x8c:
      if (bVar73) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      goto code_r0x000141b6f8d3;
    case (code)0x8d:
      *(char *)unaff_RBX = (char)*(code *)unaff_RBX + cVar10;
      *(code *)((longlong)unaff_RBX + -0x77) =
           (code)((char)*(code *)((longlong)unaff_RBX + -0x77) + bVar9);
      pcVar71 = (code *)swi(1);
      UNRECOVERED_JUMPTABLE_01 = (float *)(*pcVar71)();
      return UNRECOVERED_JUMPTABLE_01;
    case (code)0x8e:
      *unaff_RBX = (float)((int)*unaff_RBX + uVar12);
      *(char *)unaff_RBX = (char)*(code *)unaff_RBX + cVar10;
      goto code_r0x000141b6f725;
    case (code)0x8f:
      pfVar69 = (float *)0x2600;
      ppfVar56 = &pfStack_68;
      goto code_r0x000141b6f5ca;
    case (code)0x90:
      goto code_r0x000141b6f93f;
    }
code_r0x000141b6d4cd:
    pfVar69 = (float *)0x100002600;
    *(undefined8 *)((longlong)ppfVar55 + -8) = 0x141b6d4d7;
    auVar80._0_8_ = pdb_1416573f0((undefined1 *)((longlong)ppfVar55 + 0x20));
    auVar80._8_8_ = extraout_XMM0_Qb_01;
    UNRECOVERED_JUMPTABLE = (float *)&UNK_1433981e0;
    uVar17 = (ulonglong)
             *(int *)(&UNK_1433981e0 + (ulonglong)*(byte *)((longlong)ppfVar55 + 0x20) * 4);
    bVar72 = 0xfffffffebcc67e1f < uVar17;
    unaff_RBX = (float *)(&UNK_1433981e0 + uVar17);
    bVar73 = unaff_RBX == (float *)0x0;
    bVar74 = (POPCOUNT((ulonglong)unaff_RBX & 0xff) & 1U) == 0;
    bVar9 = (byte)unaff_RBX;
    uVar12 = (uint)unaff_RBX;
    UNRECOVERED_JUMPTABLE_01 = unaff_RBX;
    pfStack_68 = unaff_RBX;
    pfVar25 = UNRECOVERED_JUMPTABLE;
    UNRECOVERED_JUMPTABLE_00 = UNRECOVERED_JUMPTABLE;
    ppfVar56 = ppfVar55;
    ppfVar51 = ppfVar55;
    ppfVar53 = ppfVar55;
    ppfVar33 = ppfVar55;
    ppfVar40 = ppfVar55;
    puVar28 = (undefined1 *)ppfVar55;
    ppfVar44 = ppfVar55;
    ppfVar48 = ppfVar55;
    ppfVar39 = ppfVar55;
    ppfVar31 = ppfVar55;
    ppfVar65 = ppfVar55;
    ppfVar35 = ppfVar55;
    pfVar24 = param_1;
    ppfVar50 = ppfVar55;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(byte *)((longlong)ppfVar55 + 0x20)) {
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
      *(ulonglong *)(param_1 + 2) = *(ulonglong *)((longlong)ppfVar55 + 0x28);
      *(code *)param_1 = (code)0x1;
      return param_1;
    case 4:
    case 5:
    case 6:
      goto code_r0x000141b6d527;
    case 7:
      pfVar69 = (float *)0x1300;
      unaff_RBX = (float *)((ulonglong)unaff_RBX & 0xffffffff);
      UNRECOVERED_JUMPTABLE_00 = pfVar27;
      goto code_r0x000141b6d53a;
    case 8:
      UNRECOVERED_JUMPTABLE_00 = (float *)CONCAT71(0x1433981,-0x20 - (&UNK_14339816d)[uVar17]);
code_r0x000141b6d69a:
      *(undefined8 *)((longlong)ppfVar55 + -8) = 0x141b6d69f;
      pdb_141657680(UNRECOVERED_JUMPTABLE_00);
      unaff_RBX = (float *)(ulonglong)*(byte *)((longlong)ppfVar55 + 0x28);
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
      *(code *)((longlong)pfVar70 + 0x39) = (code)((char)*(code *)((longlong)pfVar70 + 0x39) + 0x20)
      ;
      fRam0000000100002600 =
           (float)CONCAT31(fRam0000000100002600._1_3_,
                           fRam0000000100002600._0_1_ >> 1 | fRam0000000100002600._0_1_ << 7);
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0xf:
      fRam0000000100002600 = (float)uVar12;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0x10:
      *(byte *)unaff_RBX = (char)*(code *)unaff_RBX + bVar9;
      ppfVar30 = ppfVar55;
LAB_141b6d6bf:
      if ((int)pcVar71 == 0x7b) {
        UNRECOVERED_JUMPTABLE_01 = param_2 + 0x12;
        *(byte *)UNRECOVERED_JUMPTABLE_01 = (char)*(code *)UNRECOVERED_JUMPTABLE_01 - 1;
        if (*(code *)UNRECOVERED_JUMPTABLE_01 != (code)0x0) {
          *(float **)(param_2 + 10) = unaff_RBX;
          UNRECOVERED_JUMPTABLE = (float *)((longlong)ppfVar30 + 0x28);
          UNRECOVERED_JUMPTABLE_00 = param_2;
          ppfVar56 = ppfVar30;
          goto code_r0x000141b6d6db;
        }
        *(undefined8 *)((longlong)ppfVar30 + 0x28) = 0x18;
      }
      else {
        *(undefined8 *)((longlong)ppfVar30 + 0x28) = 10;
      }
      goto LAB_141b6d67a;
    case 0x11:
      goto code_r0x000141b6d70c;
    case 0x12:
      (&UNK_143398169)[uVar17] = (&UNK_143398169)[uVar17] + -0x20;
      piVar20 = (int *)((ulonglong)(uVar12 >> 1) - 0x7b);
      *piVar20 = *piVar20 + -1;
code_r0x000141b6d730:
      fRam0000000100002600 =
           (float)CONCAT31(fRam0000000100002600._1_3_,
                           fRam0000000100002600._0_1_ >> 4 | fRam0000000100002600._0_1_ << 4);
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0x13:
      UNRECOVERED_JUMPTABLE_00 = param_2;
      goto code_r0x000141b6d6db;
    case 0x14:
      *(int *)((longlong)unaff_RBP + -0x26) = *(int *)((longlong)unaff_RBP + -0x26) + (int)param_1;
      goto code_r0x000141b6d884;
    case 0x15:
      return param_1;
    case 0x16:
      UNRECOVERED_JUMPTABLE_00 = (float *)(ulonglong)(uint)-(int)param_2;
      goto code_r0x000141b6d7a6;
    case 0x17:
      puVar32 = (ulonglong *)((longlong)ppfVar55 + -8);
      *(float **)((longlong)ppfVar55 + -8) = unaff_RBP;
      cVar10 = '\a';
      do {
        unaff_RBP = unaff_RBP + -2;
        puVar32 = puVar32 + -1;
        *puVar32 = *(ulonglong *)unaff_RBP;
        cVar10 = cVar10 + -1;
      } while ('\0' < cVar10);
      *(undefined1 **)((longlong)ppfVar55 + -0x48) = (undefined1 *)((longlong)ppfVar55 + -8);
      ppfVar31 = (float **)((longlong)ppfVar55 + -0xe147);
      goto code_r0x000141b6d6fd;
    case 0x18:
      goto code_r0x000141b6d93c;
    case 0x19:
      pfVar25 = (float *)(ulonglong)((int)param_2 + uVar12);
      uRam4c284189482f73cf = uVar12;
      goto code_r0x000141b6da3e;
    case 0x1a:
      *(char *)(pfVar27 + 0xc) = (char)*(code *)(pfVar27 + 0xc) << 1;
code_r0x000141b6da1a:
      pfVar70 = *(float **)(UNRECOVERED_JUMPTABLE + 6);
      unaff_RBX = (float *)((longlong)unaff_RBX + 1);
      UNRECOVERED_JUMPTABLE_00 = param_2;
      goto code_r0x000141b6da21;
    case 0x1b:
      (&UNK_1433981df)[uVar17] = ((&UNK_1433981df)[uVar17] + ' ') - bVar72;
      pbVar6 = &UNK_1433981d7 + uVar17;
      *pbVar6 = *pbVar6 >> 2 | *pbVar6 << 6;
      UNRECOVERED_JUMPTABLE_00 = param_2;
      goto code_r0x000141b6da24;
    case 0x1c:
code_r0x000141b6da11:
      unaff_RBX = *(float **)(pfVar27 + 10);
      ppfVar55 = ppfVar40;
      if (unaff_RBX < param_2) goto code_r0x000141b6da1a;
code_r0x000141b6da4a:
      *(undefined8 *)((longlong)ppfVar40 + 0x20) = 3;
      ppfVar31 = ppfVar40;
      goto code_r0x000141b6da53;
    case 0x1d:
      *(char *)(unaff_R13 + 0x50ce6078c) = *(char *)(unaff_R13 + 0x50ce6078c) + ' ';
      UNRECOVERED_JUMPTABLE = (float *)CONCAT71(0x1433981,UNK_1433981df + -0x20);
      *(undefined4 *)(&UNK_1433981df + uVar17) = *(undefined4 *)(&UNK_1433981df + uVar17);
      UNRECOVERED_JUMPTABLE_00 = param_2;
      goto code_r0x000141b6da44;
    case 0x1e:
      goto code_r0x000141b6da3e;
    case 0x1f:
      UNRECOVERED_JUMPTABLE_00 =
           (float *)CONCAT62((int6)((ulonglong)param_2 >> 0x10),CONCAT11(0x4c,(char)param_2));
      goto code_r0x000141b6da2a;
    case 0x20:
    case 0x21:
    case 0x22:
    case 0x23:
    case 0x24:
    case 0x25:
    case 0x26:
      *(int *)(&UNK_143398169 + uVar17) = *(int *)(&UNK_143398169 + uVar17) + 0x433981e0;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0x27:
      *unaff_RBX = (float)((int)*unaff_RBX + uVar12);
      UNK_143398163 = UNK_143398163 + -0x20;
      ppfVar37 = ppfVar55;
code_r0x000141b6d979:
      ppfVar38 = ppfVar37;
      goto code_r0x000141b6d97d;
    case 0x28:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0x29:
    case 0x2a:
    case 0x2c:
      (&UNK_143398199)[uVar17] = (&UNK_143398199)[uVar17] + -0x20;
      *(undefined8 *)((longlong)ppfVar55 + -8) = 0x100002600;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0x2b:
      bVar72 = false;
      bVar75 = true;
      UNRECOVERED_JUMPTABLE = (float *)0x867303c0;
      bVar74 = true;
      goto code_r0x000141b6e840;
    case 0x2d:
      return unaff_RBX;
    case 0x2e:
code_r0x000141b6e81e:
      pcVar71 = (code *)swi(3);
      UNRECOVERED_JUMPTABLE_01 = (float *)(*pcVar71)();
      return UNRECOVERED_JUMPTABLE_01;
    case 0x2f:
      *pfVar27 = (float)((int)*pfVar27 + 0x433981e0);
      goto LAB_141b6e809;
    case 0x30:
      goto code_r0x000141b6e8b6;
    case 0x31:
      goto code_r0x000141b6e8be;
    case 0x32:
      ppfVar47 = ppfVar55;
      goto LAB_141b6e912;
    case 0x33:
      (&UNK_143398163)[uVar17] = (&UNK_143398163)[uVar17] | 0xe0;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0x34:
      UNRECOVERED_JUMPTABLE = (float *)((longlong)pfVar70 + -3);
code_r0x000141b6e95c:
      ppfVar48 = ppfVar55;
      if (UNRECOVERED_JUMPTABLE < (float *)0x6) {
        pcVar71 = (code *)&UNK_1433982a0;
        goto code_r0x000141b6e96d;
      }
      goto LAB_141b6ea18;
    case 0x35:
      goto code_r0x000141b6e8f6;
    case 0x36:
      *(undefined8 *)((longlong)ppfVar55 + -8) = 0x100002600;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    default:
code_r0x000141b6eaef:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0x38:
code_r0x000141b6ea05:
      *UNRECOVERED_JUMPTABLE_00 = (float)((int)*UNRECOVERED_JUMPTABLE_00 + (int)unaff_RBX);
      UNRECOVERED_JUMPTABLE_01 = unaff_RBX;
      goto code_r0x000141b6ea08;
    case 0x3b:
code_r0x000141b6e9bc:
      UNRECOVERED_JUMPTABLE = param_2;
      out(*param_1,(short)UNRECOVERED_JUMPTABLE);
      UNRECOVERED_JUMPTABLE_01 = pfStack_68;
      if (!bVar74) {
code_r0x000141b6e9c0:
        UNRECOVERED_JUMPTABLE_01 = pfStack_68;
        param_2 = UNRECOVERED_JUMPTABLE;
        if (*(float **)UNRECOVERED_JUMPTABLE == UNRECOVERED_JUMPTABLE_00) {
          *(code *)((longlong)pfStack_68 + 1) = (code)0x3;
          goto code_r0x000141b6ea0e;
        }
        goto LAB_141b6ea18;
      }
      goto code_r0x000141b6ea2e;
    case 0x3c:
      *(float **)((longlong)ppfVar55 + -8) = param_2;
code_r0x000141b6ea7a:
      fRam0000000100002600 =
           (float)CONCAT31(fRam0000000100002600._1_3_,
                           fRam0000000100002600._0_1_ + (char)UNRECOVERED_JUMPTABLE_00);
      return (float *)CONCAT71((int7)((ulonglong)unaff_RBX >> 8),
                               (char)unaff_RBX + (char)*(code *)((longlong)pfVar27 + 0x96677f2));
    case 0x3d:
      bVar9 = fRam0000000100002600._0_1_ | 0xe0;
      *unaff_RBX = (float)((int)*unaff_RBX + uVar12);
      pcVar19 = (char *)(CONCAT71(0x1433981,bVar9) + 0x1488802);
      *pcVar19 = *pcVar19 + (char)((ulonglong)param_2 >> 8);
code_r0x000141b6eaac:
      *(code *)unaff_RBX = (code)0x0;
      return unaff_RBX;
    case 0x3e:
      goto code_r0x000141b6e9d8;
    case 0x3f:
      (&UNK_143398169)[uVar17] = (&UNK_143398169)[uVar17] + -0x20;
code_r0x000141b6ea27:
      puVar1 = (uint *)((longlong)UNRECOVERED_JUMPTABLE * 5 + -0x3e);
      *puVar1 = *puVar1 >> 1 | (uint)((*puVar1 & 1) != 0) << 0x1f;
      UNRECOVERED_JUMPTABLE_01 = unaff_RBX;
      goto code_r0x000141b6ea2e;
    case 0x41:
      pcVar71 = (code *)swi(3);
      UNRECOVERED_JUMPTABLE_01 = (float *)(*pcVar71)();
      return UNRECOVERED_JUMPTABLE_01;
    case 0x48:
      uVar17 = (ulonglong)pfVar70 ^ *(ulonglong *)((longlong)param_2 + unaff_GS_OFFSET + 3);
      goto code_r0x000141b6eacb;
    case 0x49:
code_r0x000141b6eada:
      *(char *)UNRECOVERED_JUMPTABLE_01 =
           (char)*(code *)UNRECOVERED_JUMPTABLE_01 + (char)UNRECOVERED_JUMPTABLE_01;
      goto code_r0x000141b6eacd;
    case 0x4a:
      *(byte *)unaff_RBX = (char)*(code *)unaff_RBX + bVar9;
      return unaff_RBX;
    case 0x4b:
      pfVar70 = (float *)((ulonglong)pfVar70 | 0x60c);
      goto code_r0x000141b6eb43;
    case 0x4c:
code_r0x000141b6eb59:
      UNRECOVERED_JUMPTABLE_00 = UNRECOVERED_JUMPTABLE;
      if (!bVar72 && !bVar73) {
        *(int *)((longlong)param_1 + 0xf) = *(int *)((longlong)param_1 + 0xf) << 0x17;
        puVar32 = (ulonglong *)((longlong)ppfVar51 + -8);
        *(float **)((longlong)ppfVar51 + -8) = unaff_RBP;
        cVar10 = '\x1e';
        do {
          unaff_RBP = unaff_RBP + -2;
          puVar32 = puVar32 + -1;
          *puVar32 = *(ulonglong *)unaff_RBP;
          cVar10 = cVar10 + -1;
        } while ('\0' < cVar10);
        *(undefined1 **)((longlong)ppfVar51 + -0x100) = (undefined1 *)((longlong)ppfVar51 + -8);
        *UNRECOVERED_JUMPTABLE_01 = (float)((int)*UNRECOVERED_JUMPTABLE_01 + 1);
        pcVar19 = (char *)((longlong)UNRECOVERED_JUMPTABLE * 2 + -0x4f);
        *pcVar19 = *pcVar19 + (char)((ulonglong)param_2 >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
code_r0x000141b6eb5b:
      UNRECOVERED_JUMPTABLE = UNRECOVERED_JUMPTABLE_00;
      *(undefined8 *)((ulonglong)*(uint *)((longlong)UNRECOVERED_JUMPTABLE + 99) - 8) = 0xf0a3348;
      UNRECOVERED_JUMPTABLE_00 =
           (float *)CONCAT62((int6)((ulonglong)param_2 >> 0x10),CONCAT11(0x52,(char)param_2));
      unaff_RBX = UNRECOVERED_JUMPTABLE_01;
      goto code_r0x000141b6eb65;
    case 0x4d:
      *(byte *)unaff_RBX = (char)*(code *)unaff_RBX + bVar9;
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
      auVar78[0] = -((char)auVar80._0_8_ == UNK_142f87e20);
      auVar78[1] = -((char)((ulonglong)auVar80._0_8_ >> 8) == UNK_142f87e21);
      auVar78[2] = -((char)((ulonglong)auVar80._0_8_ >> 0x10) == UNK_142f87e22);
      auVar78[3] = -((char)((ulonglong)auVar80._0_8_ >> 0x18) == UNK_142f87e23);
      auVar78[4] = -((char)((ulonglong)auVar80._0_8_ >> 0x20) == UNK_142f87e24);
      auVar78[5] = -((char)((ulonglong)auVar80._0_8_ >> 0x28) == UNK_142f87e25);
      auVar78[6] = -((char)((ulonglong)auVar80._0_8_ >> 0x30) == UNK_142f87e26);
      auVar78[7] = -((char)((ulonglong)auVar80._0_8_ >> 0x38) == UNK_142f87e27);
      auVar78[8] = -((char)extraout_XMM0_Qb_01 == UNK_142f87e28);
      auVar78[9] = -((char)((ulonglong)extraout_XMM0_Qb_01 >> 8) == UNK_142f87e29);
      auVar78[10] = -((char)((ulonglong)extraout_XMM0_Qb_01 >> 0x10) == UNK_142f87e2a);
      auVar78[0xb] = -((char)((ulonglong)extraout_XMM0_Qb_01 >> 0x18) == UNK_142f87e2b);
      auVar78[0xc] = -((char)((ulonglong)extraout_XMM0_Qb_01 >> 0x20) == UNK_142f87e2c);
      auVar78[0xd] = -((char)((ulonglong)extraout_XMM0_Qb_01 >> 0x28) == UNK_142f87e2d);
      auVar78[0xe] = -((char)((ulonglong)extraout_XMM0_Qb_01 >> 0x30) == UNK_142f87e2e);
      auVar78[0xf] = -((char)((ulonglong)extraout_XMM0_Qb_01 >> 0x38) == UNK_142f87e2f);
      goto code_r0x000141b6ebb7;
    case 0x4f:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0x50:
    case 0x51:
    case 0x52:
    case 0x56:
      pcVar71 = (code *)swi(3);
      UNRECOVERED_JUMPTABLE_01 = (float *)(*pcVar71)();
      return UNRECOVERED_JUMPTABLE_01;
    case 0x53:
      _UNK_143398197 = CONCAT11(UNK_143398198 ^ bVar9,UNK_143398197);
      UNRECOVERED_JUMPTABLE_01 =
           (float *)CONCAT71((int7)((ulonglong)unaff_RBX >> 8),bVar9 + (char)*(code *)unaff_RBX);
      *(byte *)UNRECOVERED_JUMPTABLE_01 =
           (char)*(code *)UNRECOVERED_JUMPTABLE_01 + bVar9 + (char)*(code *)unaff_RBX;
      ppfVar52 = ppfVar55;
code_r0x000141b6edd2:
      *(undefined **)((longlong)ppfVar52 + -8) = &UNK_141b6ede5;
      UNRECOVERED_JUMPTABLE_01 = (float *)pdb_140f66090(UNRECOVERED_JUMPTABLE_01);
      return UNRECOVERED_JUMPTABLE_01;
    case 0x54:
      pcVar71 = (code *)swi(3);
      UNRECOVERED_JUMPTABLE_01 = (float *)(*pcVar71)();
      return UNRECOVERED_JUMPTABLE_01;
    case 0x55:
      goto code_r0x000141b6ee7a;
    case 0x57:
      goto code_r0x000141b6ef32;
    case 0x58:
      goto code_r0x000141b6f00a;
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
      (&UNK_143398165)[uVar17] = (&UNK_143398165)[uVar17] + -0x20 + bVar72;
      (&UNK_143398228 + uVar17)[(longlong)pfVar27] = (&UNK_143398228 + uVar17)[(longlong)pfVar27];
      ppfVar54 = ppfVar55;
      goto code_r0x000141b6ef96;
    case 0x5b:
      (&UNK_14339816b)[uVar17] = ((&UNK_14339816b)[uVar17] + ' ') - bVar72;
      *(undefined **)((longlong)ppfVar55 + -8) = &UNK_141b6f037;
      func_0x000149ff7b7f();
      goto code_r0x000141b6f037;
    case 0x5d:
      goto code_r0x000141b6f04b;
    case 0x65:
code_r0x0001409a45e0:
      pcVar19 = (char *)((longlong)UNRECOVERED_JUMPTABLE * 5 + -0x3f);
      *pcVar19 = *pcVar19 + (char)UNRECOVERED_JUMPTABLE + bVar72;
      *(undefined8 *)((longlong)ppfVar55 + 0x40) = *(undefined8 *)((longlong)ppfVar55 + 0x40);
      *(float **)((longlong)ppfVar55 + 0x38) = param_1;
      *(undefined8 *)((longlong)ppfVar55 + 0x30) = 0x100002600;
      *(float **)((longlong)ppfVar55 + 0x28) = pfVar27;
      *(undefined8 *)((longlong)ppfVar55 + 0x20) = 0xfffffffffffffffe;
      uVar17 = *(ulonglong *)UNRECOVERED_JUMPTABLE;
      if (uVar17 == 0) {
        uVar15 = 0;
      }
      else {
        uVar4 = *(ulonglong *)(UNRECOVERED_JUMPTABLE + 2);
        uVar15 = *(ulonglong *)(UNRECOVERED_JUMPTABLE + 4);
        *(undefined8 *)((longlong)ppfVar55 + -0x48) = 0;
        *(ulonglong *)((longlong)ppfVar55 + -0x40) = uVar17;
        *(ulonglong *)((longlong)ppfVar55 + -0x38) = uVar4;
        *(undefined8 *)((longlong)ppfVar55 + -0x28) = 0;
        *(ulonglong *)((longlong)ppfVar55 + -0x20) = uVar17;
        *(ulonglong *)((longlong)ppfVar55 + -0x18) = uVar4;
      }
      uVar17 = (ulonglong)(uVar17 != 0);
      *(ulonglong *)((longlong)ppfVar55 + -0x50) = uVar17;
      *(ulonglong *)((longlong)ppfVar55 + -0x30) = uVar17;
      *(ulonglong *)((longlong)ppfVar55 + -0x10) = uVar15;
      puVar28 = (undefined1 *)((longlong)ppfVar55 + -0x50);
      *(undefined8 *)((longlong)ppfVar55 + -0x78) = 0x1409a4652;
      pdb_14192c4b0((undefined1 *)((longlong)ppfVar55 + -8),puVar28);
      lVar18 = *(longlong *)((longlong)ppfVar55 + -8);
      if (lVar18 != 0) {
        do {
          lVar5 = *(longlong *)((longlong)ppfVar55 + 8);
          *(undefined1 **)((longlong)ppfVar55 + 0x18) = puVar28;
          *(longlong *)((longlong)ppfVar55 + 0x10) = lVar5 * 0x20 + lVar18;
          uVar17 = *(ulonglong *)(lVar18 + 0x168 + lVar5 * 0x18);
          if (uVar17 != 0) {
            pbVar6 = *(byte **)(lVar18 + lVar5 * 0x18 + 0x170);
            *(undefined8 *)((longlong)ppfVar55 + -0x78) = 0x1409a46ad;
            pub_1406abac0(pbVar6,uVar17,1);
          }
          *(undefined8 *)((longlong)ppfVar55 + -0x78) = 0x1409a46b6;
          pdb_140966d70((longlong *)((longlong)ppfVar55 + 0x10));
          *(undefined8 *)((longlong)ppfVar55 + -0x78) = 0x1409a46c2;
          pdb_14192c4b0((undefined1 *)((longlong)ppfVar55 + -8),puVar28);
          lVar18 = *(longlong *)((longlong)ppfVar55 + -8);
        } while (lVar18 != 0);
      }
      return (float *)0x0;
    case 0x66:
    case 0x67:
code_r0x000141b6ef0d:
      unaff_RBX = (float *)((longlong)(int)UNRECOVERED_JUMPTABLE[(longlong)unaff_RBX] +
                           (longlong)UNRECOVERED_JUMPTABLE);
      ppfVar55 = ppfVar56;
      switch(unaff_RBX) {
      case (float *)0x141b6ef16:
        bVar73 = *(ulonglong *)(pfVar70 + 4) == 0;
        goto code_r0x000141b6ef1d;
      case (float *)0x141b6ef6f:
        uVar17 = *(ulonglong *)(pfVar70 + 6);
        uVar15 = *(ulonglong *)(pfVar70 + 8);
        *(ulonglong *)(unaff_RBP + -4) = uVar17;
        *(float **)(unaff_RBP + -6) = pfVar70;
        *(undefined **)((longlong)ppfVar56 + -8) = &UNK_141b6ef84;
        pdb_14098ae50(uVar17,uVar15);
        pfVar24 = param_1;
code_r0x000141b6ef7e:
        *(undefined **)((longlong)ppfVar56 + -8) = &UNK_141b6ef83;
        UNRECOVERED_JUMPTABLE_01 = (float *)func_0x00012375bc6b();
        *(char *)(UNRECOVERED_JUMPTABLE_01 + -0x5ee9d2e) =
             *(char *)(UNRECOVERED_JUMPTABLE_01 + -0x5ee9d2e) + '\x01';
        UNRECOVERED_JUMPTABLE_00 = *(float **)(UNRECOVERED_JUMPTABLE_01 + 4);
        ppfVar54 = ppfVar56;
        break;
      case (float *)0x141b6efaa:
        goto code_r0x000141b6efaa;
      case (float *)0x141b6efb0:
code_r0x000141b6efb0:
        bVar72 = (float *)0xffffffffffffffef < pfVar70;
        UNRECOVERED_JUMPTABLE = pfVar70 + 4;
        goto code_r0x0001409a45e0;
      }
      goto code_r0x000141b6ef8d;
    case 0x68:
      goto code_r0x000141b6efcc;
    case 0x69:
    case 0x6a:
    case 0x6b:
      *(char *)(uVar17 + 0x1338f0d28) = *(char *)(uVar17 + 0x1338f0d28) + '\x01';
      goto code_r0x000141b6ef4d;
    case 0x6c:
code_r0x000141b6f6c1:
      pfVar69 = (float *)0x100002600;
      param_1[4] = 1.36318e-41;
      UNRECOVERED_JUMPTABLE = pfVar27;
      ppfVar60 = ppfVar35;
      goto code_r0x000141b6f6ab;
    case 0x6d:
      *(code *)((longlong)pfVar27 + 0x5f) =
           (code)((char)*(code *)((longlong)pfVar27 + 0x5f) - (char)pfVar27);
      return unaff_RBX;
    case 0x6e:
      piVar20 = (int *)(&UNK_14339816b + uVar17);
      iVar11 = *piVar20;
      *piVar20 = *piVar20 + 0x433981e0;
      UNRECOVERED_JUMPTABLE = pfVar27;
      ppfVar60 = ppfVar55;
      if (*piVar20 != 0 && SCARRY4(iVar11,0x433981e0) == *piVar20 < 0) goto code_r0x000141b6f6ab;
      unaff_RBX = (float *)(ulonglong)(uint)param_1[2];
      goto code_r0x000141b6f6ff;
    case 0x6f:
      goto code_r0x000141b6f6fa;
    case 0x70:
      goto code_r0x000141b6f6d4;
    case 0x71:
code_r0x000141b6f728:
      pfVar69 = (float *)0x100002600;
      ppfVar62 = ppfVar39;
      goto code_r0x000141b6f72a;
    case 0x72:
      goto code_r0x000141b6f7cd;
    case 0x73:
      goto code_r0x000141b6f944;
    case 0x74:
      ppfVar65 = (float **)((longlong)ppfVar55 + 8);
      goto code_r0x000141b6f897;
    case 0x75:
      goto code_r0x000141b6f8d8;
    case 0x76:
    case 0x7c:
code_r0x000141b6f81d:
      UNRECOVERED_JUMPTABLE_00 = param_2;
      *(undefined1 (*) [16])(puVar28 + 0x70) = unaff_XMM11;
      *(float *)(puVar28 + 0x60) = unaff_XMM10_Da;
      *(float *)(puVar28 + 100) = unaff_XMM10_Db;
      *(float *)(puVar28 + 0x68) = unaff_XMM10_Dc;
      *(float *)(puVar28 + 0x6c) = unaff_XMM10_Dd;
      *(float *)(puVar28 + 0x50) = unaff_XMM9_Da;
      *(float *)(puVar28 + 0x54) = unaff_XMM9_Db;
      *(float *)(puVar28 + 0x58) = unaff_XMM9_Dc;
      *(float *)(puVar28 + 0x5c) = unaff_XMM9_Dd;
      *(float *)(puVar28 + 0x40) = unaff_XMM8_Da;
      *(float *)(puVar28 + 0x44) = unaff_XMM8_Db;
      *(float *)(puVar28 + 0x48) = unaff_XMM8_Dc;
      *(float *)(puVar28 + 0x4c) = unaff_XMM8_Dd;
      *(float *)(puVar28 + 0x30) = unaff_XMM7_Da;
      *(undefined4 *)(puVar28 + 0x34) = unaff_XMM7_Db;
      *(float *)(puVar28 + 0x38) = unaff_XMM7_Dc;
      *(float *)(puVar28 + 0x3c) = unaff_XMM7_Dd;
      *(float *)(puVar28 + 0x20) = unaff_XMM6_Da;
      *(undefined4 *)(puVar28 + 0x24) = unaff_XMM6_Db;
      *(undefined4 *)(puVar28 + 0x28) = unaff_XMM6_Dc;
      *(undefined4 *)(puVar28 + 0x2c) = unaff_XMM6_Dd;
      unaff_XMM10_Da = *pfVar70;
      unaff_XMM8_Da = pfVar70[1];
      unaff_XMM10_Dc = pfVar70[2];
      unaff_XMM8_Dc = pfVar70[3];
      ppfVar65 = (float **)puVar28;
      param_1 = UNRECOVERED_JUMPTABLE;
      unaff_XMM8_Db = unaff_XMM8_Da;
      unaff_XMM8_Dd = unaff_XMM8_Dc;
      unaff_XMM10_Db = unaff_XMM8_Da;
      unaff_XMM9_Da = unaff_XMM8_Dc;
code_r0x000141b6f84b:
      unaff_XMM7_Da = pfVar70[2];
      pfVar69 = (float *)((ulonglong)UNRECOVERED_JUMPTABLE_00 & 0xff);
      ppfVar31 = ppfVar65;
      ppfVar56 = ppfVar65;
      ppfVar55 = ppfVar65;
      pfVar24 = param_1;
      unaff_XMM12_Da = unaff_XMM10_Da;
      unaff_XMM12_Db = unaff_XMM10_Db;
      unaff_XMM12_Dc = unaff_XMM10_Dc;
      unaff_XMM12_Dd = unaff_XMM9_Da;
      ppfVar67 = ppfVar65;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
      switch(pfVar69) {
      case (float *)0x0:
code_r0x000141b6f871:
        auVar79._4_4_ = unaff_XMM12_Db;
        auVar79._0_4_ = unaff_XMM12_Da;
        auVar79._8_4_ = unaff_XMM12_Dc;
        auVar79._12_4_ = unaff_XMM12_Dd;
        auVar80._4_12_ = auVar79._4_12_;
        auVar80._0_4_ = unaff_XMM12_Da * unaff_XMM7_Da;
        in_XMM1_Ba = SUB41(unaff_XMM9_Da,0);
        in_XMM1_Bb = (char)((uint)unaff_XMM9_Da >> 8);
        in_XMM1_Bc = (char)((uint)unaff_XMM9_Da >> 0x10);
        in_XMM1_Bd = (char)((uint)unaff_XMM9_Da >> 0x18);
code_r0x000141b6f87d:
        fVar76 = (float)CONCAT13(in_XMM1_Bd,CONCAT12(in_XMM1_Bc,CONCAT11(in_XMM1_Bb,in_XMM1_Ba))) *
                 unaff_XMM8_Da;
        uVar91 = SUB41(fVar76,0);
        uVar92 = (undefined1)((uint)fVar76 >> 8);
        uVar93 = (undefined1)((uint)fVar76 >> 0x10);
        uVar94 = (undefined1)((uint)fVar76 >> 0x18);
        goto code_r0x000141b6f8e9;
      case (float *)0x1:
        fVar76 = unaff_XMM8_Da * unaff_XMM7_Da;
        in_XMM1_Ba = SUB41(fVar76,0);
        in_XMM1_Bb = (char)((uint)fVar76 >> 8);
        in_XMM1_Bc = (char)((uint)fVar76 >> 0x10);
        in_XMM1_Bd = (char)((uint)fVar76 >> 0x18);
        auVar85._4_4_ = unaff_XMM9_Da;
        auVar85._0_4_ = unaff_XMM9_Da;
        auVar85._8_4_ = unaff_XMM9_Da;
        auVar85._12_4_ = unaff_XMM9_Da;
        auVar82._4_12_ = auVar85._4_12_;
        auVar82._0_4_ = unaff_XMM9_Da * unaff_XMM10_Da;
        goto code_r0x000141b6f8ce;
      case (float *)0x2:
code_r0x000141b6f897:
        auVar83._4_4_ = unaff_XMM8_Db;
        auVar83._0_4_ = unaff_XMM8_Da;
        auVar83._8_4_ = unaff_XMM8_Dc;
        auVar83._12_4_ = unaff_XMM8_Dd;
        auVar80._4_12_ = auVar83._4_12_;
        auVar80._0_4_ = unaff_XMM8_Da * unaff_XMM7_Da;
        in_XMM1_Ba = SUB41(unaff_XMM9_Da,0);
        in_XMM1_Bb = (char)((uint)unaff_XMM9_Da >> 8);
        in_XMM1_Bc = (char)((uint)unaff_XMM9_Da >> 0x10);
        in_XMM1_Bd = (char)((uint)unaff_XMM9_Da >> 0x18);
        ppfVar31 = ppfVar65;
code_r0x000141b6f8a3:
        fVar76 = (float)CONCAT13(in_XMM1_Bd,CONCAT12(in_XMM1_Bc,CONCAT11(in_XMM1_Bb,in_XMM1_Ba))) *
                 unaff_XMM12_Da;
        uVar91 = SUB41(fVar76,0);
        uVar92 = (undefined1)((uint)fVar76 >> 8);
        uVar93 = (undefined1)((uint)fVar76 >> 0x10);
        uVar94 = (undefined1)((uint)fVar76 >> 0x18);
        goto code_r0x000141b6f8e9;
      case (float *)0x3:
        in_XMM1_Ba = SUB41(unaff_XMM10_Da,0);
        in_XMM1_Bb = (char)((uint)unaff_XMM10_Da >> 8);
        in_XMM1_Bc = (char)((uint)unaff_XMM10_Da >> 0x10);
        in_XMM1_Bd = (char)((uint)unaff_XMM10_Da >> 0x18);
        unaff_XMM9_Db = unaff_XMM9_Da;
        unaff_XMM9_Dc = unaff_XMM9_Da;
        unaff_XMM9_Dd = unaff_XMM9_Da;
code_r0x000141b6f8ae:
        fVar76 = (float)CONCAT13(in_XMM1_Bd,CONCAT12(in_XMM1_Bc,CONCAT11(in_XMM1_Bb,in_XMM1_Ba))) *
                 unaff_XMM8_Da;
        in_XMM1_Ba = SUB41(fVar76,0);
        in_XMM1_Bb = (char)((uint)fVar76 >> 8);
        in_XMM1_Bc = (char)((uint)fVar76 >> 0x10);
        in_XMM1_Bd = (char)((uint)fVar76 >> 0x18);
        auVar84._4_4_ = unaff_XMM9_Db;
        auVar84._0_4_ = unaff_XMM9_Da;
        auVar84._8_4_ = unaff_XMM9_Dc;
        auVar84._12_4_ = unaff_XMM9_Dd;
        auVar82._4_12_ = auVar84._4_12_;
        auVar82._0_4_ = unaff_XMM9_Da * unaff_XMM7_Da;
        ppfVar67 = ppfVar65;
        goto code_r0x000141b6f8ce;
      case (float *)0x4:
        fVar76 = unaff_XMM10_Da * unaff_XMM7_Da;
        in_XMM1_Ba = SUB41(fVar76,0);
        in_XMM1_Bb = (char)((uint)fVar76 >> 8);
        in_XMM1_Bc = (char)((uint)fVar76 >> 0x10);
        in_XMM1_Bd = (char)((uint)fVar76 >> 0x18);
        auVar81._4_4_ = unaff_XMM9_Da;
        auVar81._0_4_ = unaff_XMM9_Da;
        auVar81._8_4_ = unaff_XMM9_Da;
        auVar81._12_4_ = unaff_XMM9_Da;
        auVar82._4_12_ = auVar81._4_12_;
        auVar82._0_4_ = unaff_XMM9_Da * unaff_XMM8_Da;
code_r0x000141b6f8ce:
        auVar80._4_12_ = auVar82._4_12_;
        fVar76 = auVar82._0_4_ +
                 (float)CONCAT13(in_XMM1_Bd,CONCAT12(in_XMM1_Bc,CONCAT11(in_XMM1_Bb,in_XMM1_Ba)));
        auVar80._0_4_ = fVar76 + fVar76;
        goto code_r0x000141b6f8f5;
      case (float *)0x5:
code_r0x000141b6f8d8:
        auVar86._4_4_ = unaff_XMM12_Db;
        auVar86._0_4_ = unaff_XMM12_Da;
        auVar86._8_4_ = unaff_XMM12_Dc;
        auVar86._12_4_ = unaff_XMM12_Dd;
        auVar80._4_12_ = auVar86._4_12_;
        auVar80._0_4_ = unaff_XMM12_Da * unaff_XMM8_Da;
        fVar76 = unaff_XMM9_Da * unaff_XMM7_Da;
        uVar91 = SUB41(fVar76,0);
        uVar92 = (undefined1)((uint)fVar76 >> 8);
        uVar93 = (undefined1)((uint)fVar76 >> 0x10);
        uVar94 = (undefined1)((uint)fVar76 >> 0x18);
        ppfVar31 = ppfVar55;
code_r0x000141b6f8e9:
        auVar80._0_4_ =
             auVar80._0_4_ - (float)CONCAT13(uVar94,CONCAT12(uVar93,CONCAT11(uVar92,uVar91)));
        ppfVar67 = ppfVar31;
code_r0x000141b6f8ed:
        auVar80._0_4_ = auVar80._0_4_ * _DAT_142e37890;
code_r0x000141b6f8f5:
        in_XMM1_Ba = (char)_DAT_142e36f34;
        in_XMM1_Bb = (char)((uint)_DAT_142e36f34 >> 8);
        in_XMM1_Bc = (char)((uint)_DAT_142e36f34 >> 0x10);
        in_XMM1_Bd = (char)((uint)_DAT_142e36f34 >> 0x18);
        ppfVar68 = ppfVar67;
code_r0x000141b6f8fd:
        if ((float)CONCAT13(in_XMM1_Bd,CONCAT12(in_XMM1_Bc,CONCAT11(in_XMM1_Bb,in_XMM1_Ba))) <=
            auVar80._0_4_) {
          in_XMM1_Ba = auVar80[0];
          in_XMM1_Bb = auVar80[1];
          in_XMM1_Bc = auVar80[2];
          in_XMM1_Bd = auVar80[3];
        }
        ppfVar31 = ppfVar68;
        fVar76 = _DAT_142e36f28;
        if ((float)CONCAT13(in_XMM1_Bd,CONCAT12(in_XMM1_Bc,CONCAT11(in_XMM1_Bb,in_XMM1_Ba))) <=
            _DAT_142e36f28) {
          fVar76 = (float)CONCAT13(in_XMM1_Bd,CONCAT12(in_XMM1_Bc,CONCAT11(in_XMM1_Bb,in_XMM1_Ba)));
        }
code_r0x000141b6f90f:
        *(undefined **)((longlong)ppfVar31 + -8) = &UNK_141b6f918;
        pub_142e32960();
        if ((float)(_DAT_142e377e0 & (uint)fVar76) <= _DAT_143058d40) {
code_r0x000141b6f965:
          UNRECOVERED_JUMPTABLE =
               (float *)(&UNK_1433983a8 + *(int *)(&UNK_1433983a8 + (longlong)pfVar69 * 4));
code_r0x000141b6f993:
                    /* WARNING: Could not recover jumptable at 0x000141b6f993. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          UNRECOVERED_JUMPTABLE_01 =
               (float *)(*(code *)UNRECOVERED_JUMPTABLE)(UNRECOVERED_JUMPTABLE);
          return UNRECOVERED_JUMPTABLE_01;
        }
code_r0x000141b6f93f:
code_r0x000141b6f944:
                    /* WARNING: Could not recover jumptable at 0x000141b6f952. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        UNRECOVERED_JUMPTABLE_01 =
             (float *)(*(code *)(&UNK_1433983c0 + *(int *)(&UNK_1433983c0 + (longlong)pfVar69 * 4)))
                                (&UNK_1433983c0 + *(int *)(&UNK_1433983c0 + (longlong)pfVar69 * 4));
        return UNRECOVERED_JUMPTABLE_01;
      case (float *)0x6:
        goto code_r0x000141b6f965;
      case (float *)0x7:
        break;
      case (float *)0x8:
code_r0x000141b6fa43:
        ppfVar65 = ppfVar31;
        param_1 = pfVar24;
        break;
      case (float *)0x9:
        break;
      case (float *)0xa:
        goto code_r0x000141b6f9ed;
      case (float *)0xb:
        *(int *)(&UNK_14339839f + *(int *)(&UNK_143398390 + (longlong)pfVar69 * 4)) =
             *(int *)(&UNK_14339839f + *(int *)(&UNK_143398390 + (longlong)pfVar69 * 4)) +
             0x43398390;
code_r0x000141b6fb77:
        *(undefined **)((longlong)ppfVar56 + -8) = &UNK_141b6fb80;
        fVar77 = (float)pub_142e32980();
        fVar76 = fVar76 * fVar77;
        fVar77 = 0.0;
        goto code_r0x000141b6fbef;
      case (float *)0xc:
        *(float ***)((longlong)ppfVar65 + -8) = ppfVar65;
        return (float *)&UNK_143398390;
      case (float *)0xd:
        break;
      case (float *)0xe:
code_r0x000141b6f9c6:
        ppfVar31 = ppfVar56;
        unaff_XMM11 = auVar80;
        goto code_r0x000141b6f9ed;
      case (float *)0xf:
        *(int *)((longlong)param_1 + 0x36) = *(int *)((longlong)param_1 + 0x36) + (int)param_1;
        goto code_r0x000141b6f93f;
      case (float *)0x10:
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      case (float *)0x11:
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      goto code_r0x000141b6fbe6;
    case 0x77:
      goto code_r0x000141b6f9ed;
    case 0x78:
      cVar10 = UNK_143398199 + bVar9;
      _UNK_143398197 = CONCAT12(cVar10,_UNK_143398197);
      *unaff_RBX = (float)((int)*unaff_RBX + uVar12);
      *(byte *)unaff_RBX = (char)*(code *)unaff_RBX + bVar9;
      UNRECOVERED_JUMPTABLE = param_1;
      goto code_r0x000141b6f766;
    case 0x79:
      goto code_r0x000141b6f993;
    case 0x7a:
      *(int *)((longlong)ppfVar55 + 0x80) = *(int *)((longlong)ppfVar55 + 0x80) - (int)ppfVar55;
      goto code_r0x000141b6f81d;
    case 0x7b:
      UNRECOVERED_JUMPTABLE = (float *)((ulonglong)param_1 & 0xffffffff);
      ppfVar63 = ppfVar55;
      goto code_r0x000141b6f77e;
    case 0x7d:
      goto code_r0x000141b6f98b;
    }
code_r0x000141b6d5da:
    cVar8 = (code)0x0;
code_r0x000141b6d5dc:
    *(code *)param_1 = cVar8;
    return param_1;
  case (code)0x26:
    ppfVar29 = (float **)auStack_a0;
    puVar28 = auStack_a0;
    param_1 = (float *)&UNK_143398148;
    if (*(ulonglong *)(param_2 + 10) < *(ulonglong *)(param_2 + 8)) {
      pfVar70 = *(float **)(param_2 + 6);
      UNRECOVERED_JUMPTABLE_01 = (float *)(*(ulonglong *)(param_2 + 10) + 1);
      UNRECOVERED_JUMPTABLE = (float *)-*(ulonglong *)(param_2 + 8);
      goto LAB_141b6d47c;
    }
LAB_141b6d4a2:
    *(undefined8 *)((longlong)ppfVar29 + 0x20) = 5;
    puVar28 = (undefined1 *)ppfVar29;
LAB_141b6d4ab:
    *(undefined8 *)(puVar28 + -8) = 0x141b6d4bb;
    uVar17 = pdb_142d84ef0(param_2,puVar28 + 0x20);
    *(ulonglong *)(param_1 + 2) = uVar17;
    *(code *)param_1 = (code)0x1;
    return param_1;
  case (code)0x27:
    *(int *)(&UNK_1433980cd + uVar17) = *(int *)(&UNK_1433980cd + uVar17) + -1;
    uRam000000024339a790 = 0;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (code)0x28:
    UNRECOVERED_JUMPTABLE_01 = (float *)(ulonglong)((int)fVar77 + 0x182acc2U + (uint)bVar72);
    goto code_r0x000141b6d527;
  case (code)0x29:
    UNRECOVERED_JUMPTABLE = (float *)(ulonglong)(uint)param_2[0x143398148];
    ppfVar56 = &pfStack_68;
code_r0x000141b6d527:
    unaff_RBX = UNRECOVERED_JUMPTABLE_01;
    pfVar69 = (float *)0x100002600;
    UNRECOVERED_JUMPTABLE_00 = (float *)&UNK_1433981f0;
    uVar17 = (ulonglong)*(int *)(&UNK_1433981f0 + (longlong)UNRECOVERED_JUMPTABLE * 4);
    bVar72 = 0xfffffffebcc67e0f < uVar17;
    bVar74 = SCARRY8(uVar17,0x1433981f0);
    UNRECOVERED_JUMPTABLE = (float *)(&UNK_1433981f0 + uVar17);
    bVar73 = UNRECOVERED_JUMPTABLE == (float *)0x0;
    bVar9 = (byte)unaff_RBX;
    uVar12 = (uint)unaff_RBX;
    uVar21 = (undefined7)((ulonglong)unaff_RBX >> 8);
    cVar10 = (char)UNRECOVERED_JUMPTABLE;
    uVar22 = (uint)UNRECOVERED_JUMPTABLE;
    UNRECOVERED_JUMPTABLE_01 = unaff_RBX;
    param_2 = UNRECOVERED_JUMPTABLE;
    ppfVar61 = ppfVar56;
    ppfVar67 = ppfVar56;
    ppfVar31 = ppfVar56;
    ppfVar55 = ppfVar56;
    ppfVar40 = ppfVar56;
    ppfVar45 = ppfVar56;
    ppfVar39 = ppfVar56;
    ppfVar38 = ppfVar56;
    ppfVar50 = ppfVar56;
    ppfVar33 = ppfVar56;
    auVar88 = auVar80;
    auVar78 = auVar80;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
    switch(UNRECOVERED_JUMPTABLE) {
    case (float *)0x10eb6f7df:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case (float *)0x141b6d537:
      UNRECOVERED_JUMPTABLE_00 = pfVar27;
code_r0x000141b6d53a:
      *(undefined8 *)((longlong)ppfVar56 + -8) = 0x141b6d53f;
      unaff_RBX = (float *)pdb_141654940(unaff_RBX);
      pfVar27 = UNRECOVERED_JUMPTABLE_00;
      if (unaff_RBX != (float *)0x0) goto code_r0x000141b6d544;
      *(byte *)(UNRECOVERED_JUMPTABLE_00 + 0x12) =
           (char)*(code *)(UNRECOVERED_JUMPTABLE_00 + 0x12) + 1;
      *(code *)((longlong)param_1 + 1) = SUB81(unaff_RBP,0);
      if (*(ulonglong *)(UNRECOVERED_JUMPTABLE_00 + 10) <
          *(ulonglong *)(UNRECOVERED_JUMPTABLE_00 + 8)) {
        pfVar70 = *(float **)(UNRECOVERED_JUMPTABLE_00 + 6);
        unaff_RBX = (float *)(*(ulonglong *)(UNRECOVERED_JUMPTABLE_00 + 10) + 1);
        param_2 = (float *)-*(ulonglong *)(UNRECOVERED_JUMPTABLE_00 + 8);
code_r0x000141b6d574:
        do {
          pcVar71 = (code *)(ulonglong)(byte)((code *)((longlong)pfVar70 + -1))[(longlong)unaff_RBX]
          ;
          bVar73 = pcVar71 < (code *)0x20;
          bVar72 = pcVar71 == (code *)0x20;
code_r0x000141b6d57e:
          if ((!bVar73 && !bVar72) || (((ulonglong)pfVar69 >> ((ulonglong)pcVar71 & 0x3f) & 1) == 0)
             ) {
            if ((int)pcVar71 == 0x7d) {
              *(float **)(UNRECOVERED_JUMPTABLE_00 + 10) = unaff_RBX;
              goto code_r0x000141b6d5da;
            }
            *(undefined8 *)((longlong)ppfVar56 + 0x20) = 10;
            goto code_r0x000141b6d5a3;
          }
          *(float **)(UNRECOVERED_JUMPTABLE_00 + 10) = unaff_RBX;
          ppfVar67 = ppfVar56;
code_r0x000141b6d58a:
          ppfVar56 = ppfVar67;
          pcVar71 = (code *)((longlong)param_2 + (longlong)unaff_RBX);
          unaff_RBX = (float *)((longlong)unaff_RBX + 1);
        } while (pcVar71 != (code *)0x0);
      }
      *(undefined8 *)((longlong)ppfVar56 + 0x20) = 3;
code_r0x000141b6d5a3:
      *(undefined8 *)((longlong)ppfVar56 + -8) = 0x141b6d5ad;
      uVar17 = pdb_142d855a0(UNRECOVERED_JUMPTABLE_00,(undefined1 *)((longlong)ppfVar56 + 0x20));
      *(ulonglong *)(param_1 + 2) = uVar17;
      cVar8 = (code)0x1;
      goto code_r0x000141b6d5dc;
    case (float *)0x141b6d544:
code_r0x000141b6d544:
      *(float **)(param_1 + 2) = unaff_RBX;
      *(code *)param_1 = (code)0x1;
      *(byte *)(pfVar27 + 0x12) = (char)*(code *)(pfVar27 + 0x12) + 1;
      return param_1;
    case (float *)0x141b6d6a4:
code_r0x000141b6d6a4:
      UNRECOVERED_JUMPTABLE_00 = (float *)&UNK_143398200;
      unaff_RBX = (float *)(longlong)*(int *)(&UNK_143398200 + (longlong)unaff_RBX * 4);
code_r0x000141b6d6af:
                    /* WARNING: Could not recover jumptable at 0x000141b6d6b2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      UNRECOVERED_JUMPTABLE_01 =
           (float *)(*(code *)((longlong)unaff_RBX + (longlong)UNRECOVERED_JUMPTABLE_00))();
      return UNRECOVERED_JUMPTABLE_01;
    case (float *)0x141b6d6cd:
      lVar18 = CONCAT71(uVar21,bVar9 + (char)*(code *)unaff_RBX);
      pcVar19 = (char *)(lVar18 + -0x77);
      *pcVar19 = *pcVar19 + cVar10;
      pcVar19 = (char *)(lVar18 + -0x73);
      *pcVar19 = *pcVar19 - cVar10;
      goto code_r0x000141b6d6db;
    case (float *)0x141b6d6f6:
code_r0x000141b6d6db:
      *(undefined8 *)((longlong)ppfVar56 + -8) = 0x141b6d6e3;
      auVar80._0_8_ = pdb_141653790(UNRECOVERED_JUMPTABLE);
      auVar80._8_8_ = extraout_XMM0_Qb_03;
      UNRECOVERED_JUMPTABLE = (float *)&UNK_143398220;
      bVar72 = 0xfffffffebcc67ddf <
               (ulonglong)
               (longlong)
               *(int *)(&UNK_143398220 + (ulonglong)*(byte *)((longlong)ppfVar56 + 0x28) * 4);
      unaff_RBX = (float *)(&UNK_143398220 +
                           *(int *)(&UNK_143398220 +
                                   (ulonglong)*(byte *)((longlong)ppfVar56 + 0x28) * 4));
      bVar73 = unaff_RBX == (float *)0x0;
      bVar74 = (POPCOUNT((ulonglong)unaff_RBX & 0xff) & 1U) == 0;
      param_2 = *(float **)((longlong)ppfVar56 + 0x30);
      pfVar27 = UNRECOVERED_JUMPTABLE_00;
      ppfVar31 = ppfVar56;
      pfVar24 = param_1;
      break;
    case (float *)0x141b6d701:
      *(int *)((longlong)unaff_RBX + -0x7b) = *(int *)((longlong)unaff_RBX + -0x7b) + -1;
      *(code *)((longlong)unaff_RBP + 0x2d) = (code)0x0;
      goto code_r0x000141b6d70b;
    case (float *)0x141b6d70a:
      goto code_r0x000141b6d70a;
    case (float *)0x141b6d70b:
      goto code_r0x000141b6d70b;
    case (float *)0x141b6d71c:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case (float *)0x141b6d735:
      *(byte *)unaff_RBX = (char)*(code *)unaff_RBX + bVar9;
      UNRECOVERED_JUMPTABLE_00 = unaff_RBX;
      goto code_r0x000141b6d73a;
    case (float *)0x141b6d7b4:
      UNRECOVERED_JUMPTABLE = (float *)(ulonglong)(uVar12 + 0x433981f0);
      uRam4c284189481973cf = uVar12;
      goto code_r0x000141b6d7b8;
    case (float *)0x141b6d7d8:
      *unaff_RBX = (float)((int)*unaff_RBX + uVar12);
      *(code *)((longlong)unaff_RBX + -0x77) =
           (code)((char)*(code *)((longlong)unaff_RBX + -0x77) + cVar10);
      *(byte *)unaff_RBX = (char)*(code *)unaff_RBX + bVar9;
      ppfVar35 = ppfVar56;
      goto code_r0x000141b6d7e4;
    case (float *)0x141b6d7ef:
      if (-0x1433981f1 < (longlong)uVar17) {
        *(byte *)UNRECOVERED_JUMPTABLE = (char)*(code *)UNRECOVERED_JUMPTABLE - bVar9;
        bVar73 = *(code *)UNRECOVERED_JUMPTABLE == (code)0x0;
        goto code_r0x000141b6d7f3;
      }
      goto code_r0x000141b6d815;
    case (float *)0x141b6d848:
      goto code_r0x000141b6d847;
    case (float *)0x141b6d889:
      uVar12 = uVar12 + (int)*unaff_RBX;
      *(char *)(ulonglong)uVar12 = *(char *)(ulonglong)uVar12 + (char)uVar12;
      goto code_r0x000141b6d88d;
    case (float *)0x141b6d94c:
      for (; param_2 = UNRECOVERED_JUMPTABLE_00, UNRECOVERED_JUMPTABLE_00 = UNRECOVERED_JUMPTABLE,
          ppfVar36 = ppfVar39, pcVar71 != (code *)0x1; pcVar71 = pcVar71 + 1) {
LAB_141b6d92c:
        pcVar71 = (code *)(ulonglong)(byte)((code *)((longlong)pfVar70 + -1))[(longlong)unaff_RBX];
        UNRECOVERED_JUMPTABLE_01 = unaff_RBX;
        ppfVar39 = ppfVar36;
        if ((code *)0x22 < pcVar71) goto LAB_141b6d9a5;
        bVar72 = (0x100002600U >> ((ulonglong)pcVar71 & 0x3f) & 1) != 0;
        UNRECOVERED_JUMPTABLE = UNRECOVERED_JUMPTABLE_00;
code_r0x000141b6d93c:
        UNRECOVERED_JUMPTABLE_01 = unaff_RBX;
        UNRECOVERED_JUMPTABLE_00 = param_2;
        ppfVar38 = ppfVar39;
        if (!bVar72) goto LAB_141b6d977;
        *(float **)(param_2 + 10) = unaff_RBX;
        pcVar71 = (code *)((longlong)UNRECOVERED_JUMPTABLE + (longlong)unaff_RBX);
        unaff_RBX = (float *)((longlong)unaff_RBX + 1);
      }
      *(undefined8 *)((longlong)ppfVar39 + 0x20) = 5;
      goto LAB_141b6d95b;
    case (float *)0x141b6d977:
LAB_141b6d977:
      param_2 = UNRECOVERED_JUMPTABLE_00;
      ppfVar39 = ppfVar38;
      if (pcVar71 != (code *)0x22) {
LAB_141b6d9a5:
        iVar11 = (int)pcVar71;
code_r0x000141b6d9a9:
        if (iVar11 != 0x7b) {
          *(undefined8 *)((longlong)ppfVar39 + 0x20) = 10;
LAB_141b6d95b:
          *(undefined8 *)((longlong)ppfVar39 + -8) = 0x141b6d96b;
          uVar17 = pdb_142d84ef0(param_2,(undefined1 *)((longlong)ppfVar39 + 0x20));
          *(ulonglong *)(param_1 + 2) = uVar17;
          *(code *)param_1 = (code)0x1;
          return param_1;
        }
        pfVar70 = param_2 + 0x12;
        *(byte *)pfVar70 = (char)*(code *)pfVar70 - 1;
        unaff_RBX = UNRECOVERED_JUMPTABLE_01;
        UNRECOVERED_JUMPTABLE_00 = param_2;
        ppfVar31 = ppfVar39;
        if (*(code *)pfVar70 == (code)0x0) {
          *(undefined8 *)((longlong)ppfVar39 + 0x20) = 0x18;
          goto LAB_141b6d95b;
        }
        goto code_r0x000141b6d9b8;
      }
      goto code_r0x000141b6d97d;
    case (float *)0x141b6d984:
code_r0x000141b6d985:
      iVar11 = CONCAT13(uRam0000000100002604,fRam0000000100002600._1_3_) + -1;
      fRam0000000100002600._1_3_ = (undefined3)iVar11;
      uRam0000000100002604 = (undefined1)((uint)iVar11 >> 0x18);
      uVar17 = (ulonglong)UNRECOVERED_JUMPTABLE_01 & 0xffffffffffffff20;
      goto code_r0x000141b6d98c;
    case (float *)0x141b6da21:
code_r0x000141b6da21:
      pfVar69 = (float *)0x100002600;
      UNRECOVERED_JUMPTABLE_00 = (float *)-(longlong)UNRECOVERED_JUMPTABLE_00;
      goto code_r0x000141b6da24;
    case (float *)0x141b6da27:
      pfVar69 = (float *)CONCAT71(0x1000026,(char)unaff_R15);
      goto code_r0x000141b6da2a;
    case (float *)0x141b6da2d:
      bRam0000000100002635 = bRam0000000100002635 & 0x81;
      pfVar25 = UNRECOVERED_JUMPTABLE;
      goto code_r0x000141b6da30;
    case (float *)0x141b6da33:
      return unaff_RBX;
    case (float *)0x141b6da42:
      unaff_RBX = (float *)(ulonglong)(uVar12 + 1);
code_r0x000141b6da44:
      while( true ) {
        bVar73 = pcVar71 == (code *)0x1;
        ppfVar40 = ppfVar56;
code_r0x000141b6da48:
        ppfVar55 = ppfVar40;
        if (bVar73) goto code_r0x000141b6da4a;
code_r0x000141b6da24:
        pcVar71 = (code *)(ulonglong)(byte)((code *)((longlong)pfVar70 + -1))[(longlong)unaff_RBX];
        ppfVar56 = ppfVar55;
code_r0x000141b6da2a:
        pfVar25 = UNRECOVERED_JUMPTABLE;
        ppfVar31 = ppfVar56;
        pfVar24 = param_1;
        if ((code *)0x20 < pcVar71) break;
code_r0x000141b6da30:
        UNRECOVERED_JUMPTABLE = pfVar25;
        ppfVar31 = ppfVar56;
        pfVar24 = param_1;
        if (((ulonglong)pfVar69 >> ((ulonglong)pcVar71 & 0x3f) & 1) == 0) break;
        *(float **)(pfVar25 + 10) = unaff_RBX;
        pcVar71 = (code *)((longlong)UNRECOVERED_JUMPTABLE_00 + (longlong)unaff_RBX);
        param_2 = UNRECOVERED_JUMPTABLE_00;
        ppfVar55 = ppfVar56;
code_r0x000141b6da3e:
        pcVar71 = pcVar71 + 1;
        unaff_RBX = (float *)((longlong)unaff_RBX + 1);
        UNRECOVERED_JUMPTABLE = pfVar25;
        UNRECOVERED_JUMPTABLE_00 = param_2;
        ppfVar56 = ppfVar55;
      }
      goto code_r0x000141b6da65;
    case (float *)0x141b6da48:
      goto code_r0x000141b6da48;
    case (float *)0x141b6da4e:
      *(byte *)pfVar27 = (byte)*(code *)pfVar27 & bVar9;
      *(byte *)unaff_RBX = (char)*(code *)unaff_RBX + bVar9;
      *(code *)((longlong)unaff_RBX + -0x73) =
           (code)((char)*(code *)((longlong)unaff_RBX + -0x73) + cVar10);
      ppfVar31 = (float **)((longlong)ppfVar56 + -8);
      *(float ***)((longlong)ppfVar56 + -8) = ppfVar56;
      goto code_r0x000141b6da58;
    case (float *)0x141b6e7b6:
      pfVar27[(longlong)unaff_RBP * 2] = (float)((int)pfVar27[(longlong)unaff_RBP * 2] + uVar12);
      *(code *)((longlong)unaff_RBX + 1) = (code)0x3;
      goto LAB_141b6e809;
    case (float *)0x141b6e7e3:
      UNRECOVERED_JUMPTABLE_00 = UNRECOVERED_JUMPTABLE;
      ppfVar43 = ppfVar56;
      pfVar24 = param_1;
      goto code_r0x000141b6e7da;
    case (float *)0x141b6e808:
      uVar16 = rdtsc();
      unaff_RBX = (float *)CONCAT44((int)((ulonglong)unaff_RBX >> 0x20),(int)uVar16);
      goto LAB_141b6e80b;
    case (float *)0x141b6e82e:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case (float *)0x141b6e852:
      goto code_r0x000141b6e852;
    case (float *)0x141b6e882:
      goto code_r0x000141b6e882;
    case (float *)0x141b6e8c6:
code_r0x000141b6e8c6:
      out(*param_1,(short)UNRECOVERED_JUMPTABLE_00);
      UNRECOVERED_JUMPTABLE =
           (float *)(ulonglong)(uint)(*(int *)((longlong)unaff_RBX + 0x33) * -0x48f0bbf6);
code_r0x000141b6e8ce:
      *(code *)((longlong)UNRECOVERED_JUMPTABLE + -0x7f) =
           (code)((byte)*(code *)((longlong)UNRECOVERED_JUMPTABLE + -0x7f) |
                 (byte)UNRECOVERED_JUMPTABLE);
      pcVar71 = (code *)swi(1);
      UNRECOVERED_JUMPTABLE_01 = (float *)(*pcVar71)();
      return UNRECOVERED_JUMPTABLE_01;
    case (float *)0x141b6e8e8:
      unaff_RBX = (float *)CONCAT71(uVar21,bVar9 | (&UNK_1433981a9)[uVar17]);
      bVar73 = uVar22 == 0;
      param_2 = UNRECOVERED_JUMPTABLE_00;
      goto code_r0x000141b6e8f6;
    case (float *)0x141b6e906:
      *UNRECOVERED_JUMPTABLE = (float)((int)*UNRECOVERED_JUMPTABLE + uVar12);
      goto code_r0x000141b6e908;
    case (float *)0x141b6e91b:
      goto code_r0x000141b6e91b;
    case (float *)0x141b6e939:
      *(byte *)(uVar17 + 0x18b4209f1) = *(byte *)(uVar17 + 0x18b4209f1) | 0x81;
      return unaff_RBX;
    case (float *)0x141b6e968:
code_r0x000141b6e96d:
      UNRECOVERED_JUMPTABLE =
           (float *)(longlong)*(int *)(pcVar71 + (longlong)UNRECOVERED_JUMPTABLE * 4);
      goto code_r0x000141b6e971;
    case (float *)0x141b6e9aa:
      ppfVar48 = (float **)((longlong)ppfVar56 + -8);
      *(float ***)((longlong)ppfVar56 + -8) = ppfVar56;
      if (bVar72) {
        return unaff_RBX;
      }
      param_2 = UNRECOVERED_JUMPTABLE_00;
      if (!bVar73) goto LAB_141b6ea18;
      goto code_r0x000141b6e9b0;
    case (float *)0x141b6e9cc:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case (float *)0x141b6e9e8:
      unaff_RBX = (float *)(ulonglong)(uVar12 & 0x746157b9);
      bVar73 = UNK_1433981f4 == 'r' && uVar22 == *(uint *)(&UNK_1433981f0 + unaff_GS_OFFSET);
      goto code_r0x000141b6e9fc;
    case (float *)0x141b6ea15:
      *(code *)((longlong)param_1 + -0x3d) =
           (code)((byte)*(code *)((longlong)param_1 + -0x3d) & (byte)pfVar27);
      param_2 = UNRECOVERED_JUMPTABLE_00;
      ppfVar48 = ppfVar56;
      goto LAB_141b6ea18;
    case (float *)0x141b6ea34:
      UNRECOVERED_JUMPTABLE_00 = UNRECOVERED_JUMPTABLE;
      ppfVar30 = ppfVar56;
      goto code_r0x000141b6ea31;
    case (float *)0x141b6ea5d:
      *(short *)unaff_RBX = *(short *)unaff_RBX + (short)unaff_RBX;
      *(code *)((longlong)unaff_RBX + -0x73) =
           (code)((char)*(code *)((longlong)unaff_RBX + -0x73) + cVar10);
code_r0x000141b6ea68:
                    /* WARNING: Could not recover jumptable at 0x000141b6ea6f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      UNRECOVERED_JUMPTABLE_01 =
           (float *)(*(code *)((longlong)(int)UNRECOVERED_JUMPTABLE[(longlong)pfVar70] +
                              (longlong)UNRECOVERED_JUMPTABLE))();
      return UNRECOVERED_JUMPTABLE_01;
    case (float *)0x141b6ea8d:
      goto code_r0x000141b6ea8d;
    case (float *)0x141b6eab0:
      UNRECOVERED_JUMPTABLE =
           (float *)(CONCAT44(_UNK_1433981f4,_UNK_1433981f0) ^ 0x61635f6863746970);
      param_2 = UNRECOVERED_JUMPTABLE_00;
      goto code_r0x000141b6eabd;
    case (float *)0x141b6ead6:
      goto code_r0x000141b6ead6;
    case (float *)0x141b6eae8:
      goto code_r0x000141b6eae8;
    case (float *)0x141b6eaff:
code_r0x000141b6eb07:
      UNRECOVERED_JUMPTABLE = (float *)(ulonglong)(uVar22 ^ _UNK_1433981f0);
      goto code_r0x000141b6eb09;
    case (float *)0x141b6eb01:
      out(*param_1,0x81f0);
      UNRECOVERED_JUMPTABLE =
           (float *)((ulonglong)UNRECOVERED_JUMPTABLE ^ CONCAT44(_UNK_1433981f4,_UNK_1433981f0));
code_r0x000141b6eb09:
      uVar12 = (uint)UNRECOVERED_JUMPTABLE_00[2] ^ 0x74657366;
      UNRECOVERED_JUMPTABLE_01 = unaff_RBX;
code_r0x000141b6eb13:
      bVar73 = uVar12 == 0 && UNRECOVERED_JUMPTABLE == (float *)0x0;
code_r0x000141b6eb16:
      unaff_RBX = UNRECOVERED_JUMPTABLE_01;
      if (bVar73) {
        *(code *)((longlong)UNRECOVERED_JUMPTABLE_01 + 1) = (code)0x4;
code_r0x000141b6eb21:
        *(code *)unaff_RBX = (code)0x0;
        return unaff_RBX;
      }
      goto LAB_141b6ebc7;
    case (float *)0x141b6eb4b:
      if ((POPCOUNT((ulonglong)UNRECOVERED_JUMPTABLE & 0xff) & 1U) == 0) {
        UNRECOVERED_JUMPTABLE =
             (float *)(CONCAT44(_UNK_1433981f4,_UNK_1433981f0) ^ 0x686361635f776179);
        UNRECOVERED_JUMPTABLE_00 =
             (float *)((ulonglong)UNK_1433981f8 ^ 0x65 | (ulonglong)UNRECOVERED_JUMPTABLE);
      }
      else {
        if (bVar74) goto code_r0x000141b6eb69;
        if (!bVar73) {
          *(undefined8 *)((longlong)ppfVar56 + -8) = 0x48666f5f;
          goto code_r0x000141b6eb07;
        }
      }
      goto code_r0x000141b6eb65;
    case (float *)0x141b6eb69:
code_r0x000141b6eb69:
      UNRECOVERED_JUMPTABLE_00 = (float *)((ulonglong)UNRECOVERED_JUMPTABLE | 0x1433981f0);
code_r0x000141b6eb65:
      *(code *)((longlong)unaff_RBX + -0x7d) =
           (code)((byte)*(code *)((longlong)unaff_RBX + -0x7d) | (byte)UNRECOVERED_JUMPTABLE);
      if (UNRECOVERED_JUMPTABLE_00 == (float *)0x0 && UNRECOVERED_JUMPTABLE == (float *)0x0) {
        *(code *)((longlong)unaff_RBX + 1) = (code)0x0;
        *(code *)unaff_RBX = (code)0x0;
        return unaff_RBX;
      }
      goto LAB_141b6ebc7;
    case (float *)0x141b6eb82:
      if (_UNK_1433981f8 == 0x7465 &&
          UNRECOVERED_JUMPTABLE == (float *)CONCAT44(_UNK_1433981f4,_UNK_1433981f0)) {
        *(code *)((longlong)unaff_RBX + 1) = (code)0x5;
        *(code *)unaff_RBX = (code)0x0;
        return unaff_RBX;
      }
      goto LAB_141b6ebc7;
    case (float *)0x141b6ebb7:
      goto code_r0x000141b6ebb7;
    case (float *)0x141b6ec01:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case (float *)0x141b6ede6:
      return unaff_RBX;
    case (float *)0x141b6ee3f:
      pcVar71 = (code *)swi(3);
      UNRECOVERED_JUMPTABLE_01 =
           (float *)(*pcVar71)(CONCAT71((int7)((ulonglong)UNRECOVERED_JUMPTABLE >> 8),
                                        cVar10 + (char)((ulonglong)UNRECOVERED_JUMPTABLE >> 8)));
      return UNRECOVERED_JUMPTABLE_01;
    case (float *)0x141b6ee7a:
code_r0x000141b6ee7a:
      UNRECOVERED_JUMPTABLE = param_2;
    case (float *)0x141b6ee80:
      UNRECOVERED_JUMPTABLE_00 = UNRECOVERED_JUMPTABLE;
      goto pdb_140f679a0;
    case (float *)0x141b6ef1d:
code_r0x000141b6ef1d:
      if (bVar73) {
        return unaff_RBX;
      }
      UNRECOVERED_JUMPTABLE = *(float **)(pfVar70 + 6);
      pfVar70 = (float *)0x1;
      unaff_RBP = *(float **)((longlong)ppfVar56 + 0x40);
      ppfVar53 = (float **)((longlong)ppfVar56 + 0x48);
code_r0x000141b6ef32:
      goto code_r0x0001406abac0;
    case (float *)0x141b6ef42:
      ppfVar55 = (float **)((longlong)ppfVar56 + -8);
      *(float **)((longlong)ppfVar56 + -8) = param_1;
      do {
      } while (UNRECOVERED_JUMPTABLE == (float *)0x0);
code_r0x000141b6ef49:
      param_2 = *(float **)(unaff_RBP + -4);
      goto code_r0x000141b6ef4d;
    case (float *)0x141b6ef57:
      goto code_r0x000141b6ef57;
    case (float *)0x141b6ef9c:
      goto code_r0x000141b6ef9c;
    case (float *)0x141b6efc3:
      param_2 = UNRECOVERED_JUMPTABLE_00;
      goto DAT_141b6efd0;
    case (float *)0x141b6efda:
      goto code_r0x000141b6efda;
    case (float *)0x141b6eff2:
      *(byte *)unaff_RBX = (char)*(code *)unaff_RBX + bVar9;
      *(code *)((longlong)unaff_RBX + -0x75) =
           (code)((char)*(code *)((longlong)unaff_RBX + -0x75) + cVar10);
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case (float *)0x141b6f01a:
      goto code_r0x000141b6f01a;
    case (float *)0x141b6f03e:
      goto code_r0x000141b6f037;
    case (float *)0x141b6f05b:
      pcVar19 = &UNK_1433981b1 + uVar17;
      *pcVar19 = *pcVar19 + cVar10;
      if ((code *)(&UNK_1433981ef + uVar17) != (code *)0x0 && *pcVar19 != '\0') {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      pfVar70 = (float *)((longlong)pfVar70 * 3);
      cVar8 = (code)(&UNK_1433981ef)[uVar17];
      if (0xe < (byte)cVar8) {
code_r0x000141b6f13e:
        UNRECOVERED_JUMPTABLE_01 = (float *)0x0;
        do {
          unaff_RBX = (float *)CONCAT71((int7)((ulonglong)unaff_RBX >> 8),
                                        *(code *)(UNRECOVERED_JUMPTABLE_01 + 0x50ce607c) == cVar8);
          if (*(code *)(UNRECOVERED_JUMPTABLE_01 + 0x50ce607c) == cVar8) {
            return unaff_RBX;
          }
          bVar73 = pfVar70 + -6 != UNRECOVERED_JUMPTABLE_01;
          UNRECOVERED_JUMPTABLE_01 = UNRECOVERED_JUMPTABLE_01 + 6;
        } while (bVar73);
code_r0x000141b6f162:
        return unaff_RBX;
      }
      pcVar71 = *(code **)(&UNK_1433981f7 + uVar17);
      cVar2 = *(code *)UNRECOVERED_JUMPTABLE;
      unaff_RBX = (float *)0x0;
      UNRECOVERED_JUMPTABLE = *(float **)(&UNK_1433981ff + uVar17);
      switch(cVar8) {
      case (code)0x0:
        in_R10 = pcVar71;
        goto code_r0x000141b6f091;
      case (code)0x1:
        UNRECOVERED_JUMPTABLE_01 = (float *)0x0;
        while ((*(code *)(UNRECOVERED_JUMPTABLE_01 + 0x50ce607c) != (code)0x1 ||
               (*(code *)((longlong)UNRECOVERED_JUMPTABLE_01 + 0x1433981f1) != cVar2))) {
          UNRECOVERED_JUMPTABLE_01 = UNRECOVERED_JUMPTABLE_01 + 6;
          if (pfVar70 == UNRECOVERED_JUMPTABLE_01) {
            return (float *)0x0;
          }
        }
        break;
      default:
        goto code_r0x000141b6f13e;
      case (code)0x3:
        unaff_RBX = (float *)0x0;
        while ((*(code *)(unaff_RBX + 0x50ce607c) != (code)0x3 ||
               (*(code **)(unaff_RBX + 0x50ce607e) != pcVar71))) {
          unaff_RBX = unaff_RBX + 6;
          if (pfVar70 == unaff_RBX) {
            return (float *)0x0;
          }
        }
        break;
      case (code)0x4:
        UNRECOVERED_JUMPTABLE_01 = (float *)0x0;
        while ((*(code *)(UNRECOVERED_JUMPTABLE_01 + 0x50ce607c) != (code)0x4 ||
               (*(code *)((longlong)UNRECOVERED_JUMPTABLE_01 + 0x1433981f1) != cVar2))) {
          UNRECOVERED_JUMPTABLE_01 = UNRECOVERED_JUMPTABLE_01 + 6;
          if (pfVar70 == UNRECOVERED_JUMPTABLE_01) {
            return (float *)0x0;
          }
        }
        break;
      case (code)0x6:
        if (pcVar71 == (code *)0x6) {
          unaff_RBX = (float *)0x0;
          while (((*(code *)(unaff_RBX + 0x50ce607c) != (code)0x6 ||
                  (unaff_RBX[0x50ce607e] != 8.40779e-45)) ||
                 (*(float **)(unaff_RBX + 0x50ce6080) != UNRECOVERED_JUMPTABLE))) {
            unaff_RBX = unaff_RBX + 6;
            if (pfVar70 == unaff_RBX) {
              return (float *)0x0;
            }
          }
        }
        else {
          UNRECOVERED_JUMPTABLE_01 = (float *)0x0;
          while ((unaff_RBX = (float *)0x0,
                 *(code *)(UNRECOVERED_JUMPTABLE_01 + 0x50ce607c) != (code)0x6 ||
                 (*(code **)(UNRECOVERED_JUMPTABLE_01 + 0x50ce607e) != pcVar71))) {
            UNRECOVERED_JUMPTABLE_01 = UNRECOVERED_JUMPTABLE_01 + 6;
            if (pfVar70 == UNRECOVERED_JUMPTABLE_01) {
              return (float *)0x0;
            }
          }
        }
        break;
      case (code)0xe:
        UNRECOVERED_JUMPTABLE_01 = (float *)0x0;
        while ((*(code *)(UNRECOVERED_JUMPTABLE_01 + 0x50ce607c) != (code)0xe ||
               (*(code *)((longlong)UNRECOVERED_JUMPTABLE_01 + 0x1433981f1) != cVar2))) {
          UNRECOVERED_JUMPTABLE_01 = UNRECOVERED_JUMPTABLE_01 + 6;
          if (pfVar70 == UNRECOVERED_JUMPTABLE_01) {
            return (float *)0x0;
          }
        }
      }
      return (float *)CONCAT71((int7)((ulonglong)unaff_RBX >> 8),1);
    case (float *)0x141b6f6d1:
      *(byte *)unaff_RBX = (char)*(code *)unaff_RBX + bVar9;
      (&UNK_1433981a9)[uVar17] = (&UNK_1433981a9)[uVar17] + bVar9;
      *unaff_RBX = (float)((int)*unaff_RBX + uVar12);
      *(byte *)unaff_RBX = (char)*(code *)unaff_RBX + bVar9;
      goto code_r0x000141b6f6d4;
    case (float *)0x141b6f6e4:
code_r0x000141b6f6e4:
      pfVar69 = (float *)0x100002600;
      *(float **)((longlong)ppfVar61 + -8) = unaff_RBP;
      *(undefined1 **)((longlong)ppfVar61 + -0x10) = (undefined1 *)((longlong)ppfVar61 + -8);
      ppfVar56 = (float **)((longlong)ppfVar61 + -0x210a);
      goto code_r0x000141b6f6d4;
    case (float *)0x141b6f6f7:
      unaff_RBX = (float *)((ulonglong)ppfVar56 & 0xffffffff);
      *(char *)unaff_RBX = (char)*(code *)unaff_RBX + (char)unaff_RBX;
code_r0x000141b6f6fa:
      pfVar69 = (float *)0x100002600;
      *(code *)((longlong)unaff_RBX + -0x75) =
           (code)((char)*(code *)((longlong)unaff_RBX + -0x75) + (char)UNRECOVERED_JUMPTABLE);
      pfVar24 = (float *)CONCAT71((int7)((ulonglong)param_1 >> 8),(byte)param_1 | (byte)pfVar70);
      cVar10 = (char)unaff_RBX;
      unaff_RBX = (float *)CONCAT71((int7)((ulonglong)unaff_RBX >> 8),cVar10 + '8');
      if (-0x39 < cVar10) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      goto code_r0x000141b6f704;
    case (float *)0x141b6f70a:
      goto code_r0x000141b6f70a;
    case (float *)0x141b6f71d:
      goto code_r0x000141b6f718;
    case (float *)0x141b6f738:
      *(byte *)unaff_RBX = (char)*(code *)unaff_RBX + bVar9;
      goto code_r0x000141b6f73a;
    case (float *)0x141b6f784:
      *(byte *)UNRECOVERED_JUMPTABLE = (byte)*(code *)UNRECOVERED_JUMPTABLE & bVar9;
      ppfVar60 = ppfVar56;
      goto code_r0x000141b6f786;
    case (float *)0x141b6f78c:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case (float *)0x141b6f826:
      puVar28 = (undefined1 *)((longlong)ppfVar56 + -8);
      *(float ***)((longlong)ppfVar56 + -8) = ppfVar56;
      param_2 = UNRECOVERED_JUMPTABLE_00;
      goto code_r0x000141b6f81d;
    case (float *)0x141b6f82d:
      param_2 = UNRECOVERED_JUMPTABLE_00;
      puVar28 = (undefined1 *)ppfVar56;
      goto code_r0x000141b6f81d;
    case (float *)0x141b6f84d:
      ppfVar65 = ppfVar56;
      unaff_XMM9_Da = unaff_XMM10_Dd;
      goto code_r0x000141b6f84b;
    case (float *)0x141b6f8a3:
      goto code_r0x000141b6f8a3;
    case (float *)0x141b6f8ed:
      goto code_r0x000141b6f8ed;
    case (float *)0x141b6f954:
      goto code_r0x000141b6fb77;
    case (float *)0x141b6f9a3:
      auVar88._0_4_ = auVar80._0_4_ * unaff_XMM7_Da;
      auVar88._4_4_ = 0;
      auVar88._8_4_ = auVar80._8_4_ * unaff_XMM7_Dc;
      auVar88._12_4_ = auVar80._12_4_ * unaff_XMM7_Dd;
    case (float *)0x141b6f99b:
      auVar87._4_4_ = unaff_XMM9_Db;
      auVar87._0_4_ = unaff_XMM9_Da;
      auVar87._8_4_ = unaff_XMM9_Dc;
      auVar87._12_4_ = unaff_XMM9_Dd;
      auVar89._4_12_ = auVar87._4_12_;
      fVar76 = unaff_XMM9_Da * unaff_XMM7_Da +
               (float)CONCAT13(in_XMM1_Bd,CONCAT12(in_XMM1_Bc,CONCAT11(in_XMM1_Bb,in_XMM1_Ba))) *
               auVar88._0_4_;
      auVar89._0_4_ = fVar76 + fVar76;
      *(undefined **)((longlong)ppfVar56 + -8) = &UNK_141b6f9c6;
      auVar80._0_8_ = pub_142e32980(auVar89._0_8_);
      auVar80._8_8_ = extraout_XMM0_Qb_04;
      goto code_r0x000141b6f9c6;
    case (float *)0x141b6f9d2:
      ppfVar31 = (float **)((longlong)ppfVar56 + 8);
      goto code_r0x000141b6f9d3;
    }
code_r0x000141b6d6fb:
    UNRECOVERED_JUMPTABLE_00 = param_2;
    fVar23 = SUB84(UNRECOVERED_JUMPTABLE,0);
    bVar9 = (byte)unaff_RBX;
    fVar77 = SUB84(unaff_RBX,0);
    iVar11 = (int)pfVar70;
    UNRECOVERED_JUMPTABLE_01 = unaff_RBX;
    param_2 = UNRECOVERED_JUMPTABLE_00;
    ppfVar45 = ppfVar31;
    ppfVar56 = ppfVar31;
    ppfVar55 = ppfVar31;
    ppfVar48 = ppfVar31;
    ppfVar35 = ppfVar31;
    ppfVar66 = ppfVar31;
    param_1 = pfVar24;
    ppfVar65 = ppfVar31;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
    switch(unaff_RBX) {
    case (float *)0x141b6d6fd:
code_r0x000141b6d6fd:
      *(undefined8 *)((longlong)ppfVar31 + -8) = 0x141b6d705;
      UNRECOVERED_JUMPTABLE_00 = (float *)pdb_141654940(param_2);
      ppfVar33 = ppfVar31;
      if (UNRECOVERED_JUMPTABLE_00 != (float *)0x0) goto code_r0x000141b6d73a;
code_r0x000141b6d70a:
      UNRECOVERED_JUMPTABLE_01 = (float *)0x0;
code_r0x000141b6d70c:
      fVar76 = SUB84(UNRECOVERED_JUMPTABLE_01,0);
      UNRECOVERED_JUMPTABLE = pfVar27;
      ppfVar31 = ppfVar33;
code_r0x000141b6d86b:
      *param_1 = fVar76;
      *(byte *)(UNRECOVERED_JUMPTABLE + 0x12) = (char)*(code *)(UNRECOVERED_JUMPTABLE + 0x12) + 1;
      param_2 = *(float **)(UNRECOVERED_JUMPTABLE + 8);
      UNRECOVERED_JUMPTABLE_01 = *(float **)(UNRECOVERED_JUMPTABLE + 10);
      ppfVar34 = ppfVar31;
      ppfVar55 = ppfVar31;
      if (UNRECOVERED_JUMPTABLE_01 < param_2) goto code_r0x000141b6d79c;
      goto code_r0x000141b6d884;
    case (float *)0x141b6d726:
      *(undefined8 *)((longlong)ppfVar31 + -8) = 0x141b6d72e;
      UNRECOVERED_JUMPTABLE_00 = (float *)pdb_141654940(UNRECOVERED_JUMPTABLE_00);
      if (UNRECOVERED_JUMPTABLE_00 == (float *)0x0) {
        fVar76 = 4.2039e-45;
        UNRECOVERED_JUMPTABLE = pfVar27;
        goto code_r0x000141b6d86b;
      }
    case (float *)0x141b6d73a:
code_r0x000141b6d73a:
      *(float **)(param_1 + 2) = UNRECOVERED_JUMPTABLE_00;
      *param_1 = 9.80909e-45;
      *(byte *)(pfVar27 + 0x12) = (char)*(code *)(pfVar27 + 0x12) + 1;
code_r0x000141b6d747:
      return param_1;
    case (float *)0x141b6d74c:
      *(undefined8 *)((longlong)ppfVar31 + -8) = 0x141b6d754;
      pdb_14165b3b0(UNRECOVERED_JUMPTABLE_00);
      UNRECOVERED_JUMPTABLE_00 = (float *)0x7;
      unaff_RBX = (float *)0x1;
code_r0x000141b6d758:
      *(char *)unaff_RBX = (char)*(code *)unaff_RBX + (char)unaff_RBX;
      pcVar71 = (code *)((longlong)unaff_RBX + 1);
      *pcVar71 = (code)((char)*pcVar71 + (char)((ulonglong)pfVar27 >> 8));
      if (*pcVar71 != (code)0x0) {
        unaff_RBX = UNRECOVERED_JUMPTABLE_00;
      }
      unaff_RBX = (float *)((ulonglong)unaff_RBX & 0xffffffff);
      UNRECOVERED_JUMPTABLE_00 = param_2;
      param_1 = pfVar24;
      goto code_r0x000141b6d776;
    case (float *)0x141b6d765:
      *(undefined8 *)((longlong)ppfVar31 + -8) = 0x141b6d76d;
      uVar12 = pdb_14165b3b0(UNRECOVERED_JUMPTABLE_00);
      unaff_RBX = (float *)(ulonglong)((uVar12 & 1) * 5 + 2);
code_r0x000141b6d776:
      *(float **)(param_1 + 2) = UNRECOVERED_JUMPTABLE_00;
code_r0x000141b6d77a:
      *param_1 = SUB84(unaff_RBX,0);
      ppfVar42 = ppfVar31;
code_r0x000141b6d77c:
      *(byte *)(pfVar27 + 0x12) = (char)*(code *)(pfVar27 + 0x12) + 1;
      fVar76 = SUB84(unaff_RBX,0);
      ppfVar34 = ppfVar42;
joined_r0x000141b6d83f:
      if (fVar76 == 9.80909e-45) {
        return param_1;
      }
      param_2 = *(float **)(pfVar27 + 8);
      UNRECOVERED_JUMPTABLE_01 = *(float **)(pfVar27 + 10);
      UNRECOVERED_JUMPTABLE_00 = pfVar27;
code_r0x000141b6d793:
      UNRECOVERED_JUMPTABLE = UNRECOVERED_JUMPTABLE_00;
      ppfVar55 = ppfVar34;
      if (UNRECOVERED_JUMPTABLE_01 < param_2) {
code_r0x000141b6d79c:
        pfVar70 = *(float **)(UNRECOVERED_JUMPTABLE + 6);
code_r0x000141b6d7a0:
        unaff_RBX = (float *)((longlong)UNRECOVERED_JUMPTABLE_01 + 1);
        UNRECOVERED_JUMPTABLE_00 = (float *)-(longlong)param_2;
        ppfVar55 = ppfVar34;
code_r0x000141b6d7a6:
        do {
          cVar8 = ((code *)((longlong)pfVar70 + -1))[(longlong)unaff_RBX];
          if ((0x20 < (ulonglong)(byte)cVar8) ||
             (((ulonglong)pfVar69 >> ((ulonglong)(byte)cVar8 & 0x3f) & 1) == 0)) {
            if (cVar8 == (code)0x7d) {
              *(float **)(UNRECOVERED_JUMPTABLE + 10) = unaff_RBX;
              return param_1;
            }
            *(undefined8 *)((longlong)ppfVar55 + 0x28) = 10;
            UNRECOVERED_JUMPTABLE_00 = UNRECOVERED_JUMPTABLE;
            ppfVar64 = ppfVar55;
            goto code_r0x000141b6d8f0;
          }
code_r0x000141b6d7b8:
          *(float **)(UNRECOVERED_JUMPTABLE + 10) = unaff_RBX;
          pcVar71 = (code *)((longlong)UNRECOVERED_JUMPTABLE_00 + (longlong)unaff_RBX);
          unaff_RBX = (float *)((longlong)unaff_RBX + 1);
        } while (pcVar71 != (code *)0x0);
      }
code_r0x000141b6d884:
      *(undefined8 *)((longlong)ppfVar55 + 0x28) = 3;
      ppfVar56 = ppfVar55;
code_r0x000141b6d88d:
      *(undefined8 *)((longlong)ppfVar56 + -8) = 0x141b6d897;
      uVar17 = pdb_142d855a0(UNRECOVERED_JUMPTABLE,(undefined1 *)((longlong)ppfVar56 + 0x28));
      goto LAB_141b6d8b6;
    case (float *)0x141b6d7e4:
code_r0x000141b6d7e4:
      UNRECOVERED_JUMPTABLE = (float *)((longlong)ppfVar35 + 0x28);
code_r0x000141b6d7e9:
      *(undefined8 *)((longlong)ppfVar35 + -8) = 0x141b6d7ee;
      pdb_14164eb50(UNRECOVERED_JUMPTABLE);
      bVar73 = *(int *)((longlong)ppfVar35 + 0x28) == 1;
      ppfVar31 = ppfVar35;
code_r0x000141b6d7f3:
      if (bVar73) {
        *(ulonglong *)(param_1 + 2) = *(ulonglong *)((longlong)ppfVar31 + 0x30);
        unaff_RBX = (float *)0x7;
      }
      else {
code_r0x000141b6d847:
        param_1[1] = *(float *)((longlong)ppfVar31 + 0x2c);
        unaff_RBX = (float *)0x6;
      }
      goto code_r0x000141b6d77a;
    case (float *)0x141b6d808:
code_r0x000141b6d815:
      *(undefined8 *)((longlong)ppfVar56 + -8) = 0x141b6d81d;
      pdb_141654a60(param_1);
      goto code_r0x000141b6d834;
    case (float *)0x141b6d81f:
code_r0x000141b6d82f:
      *(undefined8 *)((longlong)ppfVar56 + -8) = 0x141b6d834;
      pdb_141655660(pfVar24);
code_r0x000141b6d834:
      fVar76 = *param_1;
      *(byte *)(pfVar27 + 0x12) = (char)*(code *)(pfVar27 + 0x12) + 1;
      ppfVar34 = ppfVar56;
      goto joined_r0x000141b6d83f;
    case (float *)0x141b6d97c:
      *(code *)((longlong)unaff_RBX + -0x73) =
           (code)((char)*(code *)((longlong)unaff_RBX + -0x73) - (byte)UNRECOVERED_JUMPTABLE);
      ppfVar38 = ppfVar31;
code_r0x000141b6d97f:
code_r0x000141b6d97d:
      *(undefined8 *)((longlong)ppfVar38 + -8) = 0x141b6d987;
      pdb_141657790((undefined1 *)((longlong)ppfVar38 + 0x20));
      uVar17 = (ulonglong)*(byte *)((longlong)ppfVar38 + 0x20);
code_r0x000141b6d98c:
      UNRECOVERED_JUMPTABLE = (float *)&UNK_143398240;
code_r0x000141b6d993:
      UNRECOVERED_JUMPTABLE_01 =
           (float *)((longlong)(int)UNRECOVERED_JUMPTABLE[uVar17] + (longlong)UNRECOVERED_JUMPTABLE)
      ;
code_r0x000141b6d99a:
                    /* WARNING: Could not recover jumptable at 0x000141b6d99a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      UNRECOVERED_JUMPTABLE_01 = (float *)(*(code *)UNRECOVERED_JUMPTABLE_01)();
      return UNRECOVERED_JUMPTABLE_01;
    case (float *)0x141b6d9a7:
      if (bVar74) {
        *unaff_RBX = (float)((int)*unaff_RBX + (int)fVar77);
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      UNRECOVERED_JUMPTABLE_00[10] = fVar77;
      goto code_r0x000141b6d9b8;
    case (float *)0x141b6d9b4:
      *(byte *)UNRECOVERED_JUMPTABLE = (byte)*(code *)UNRECOVERED_JUMPTABLE | bVar9;
      *(byte *)unaff_RBX = (char)*(code *)unaff_RBX + bVar9;
code_r0x000141b6d9b8:
      *(float **)(UNRECOVERED_JUMPTABLE_00 + 10) = unaff_RBX;
      *(undefined8 *)((longlong)ppfVar31 + -8) = 0x141b6d9c9;
      pdb_141653ab0((undefined1 *)((longlong)ppfVar31 + 0x20));
      UNRECOVERED_JUMPTABLE_00 = (float *)(ulonglong)*(byte *)((longlong)ppfVar31 + 0x20);
code_r0x000141b6d9d7:
                    /* WARNING: Could not recover jumptable at 0x000141b6d9e5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      UNRECOVERED_JUMPTABLE_01 =
           (float *)(*(code *)(&UNK_143398260 +
                              *(int *)(&UNK_143398260 + (longlong)UNRECOVERED_JUMPTABLE_00 * 4)))
                              (&UNK_143398260 +
                               *(int *)(&UNK_143398260 + (longlong)UNRECOVERED_JUMPTABLE_00 * 4));
      return UNRECOVERED_JUMPTABLE_01;
    case (float *)0x141b6da51:
      *(byte *)unaff_RBX = (char)*(code *)unaff_RBX + bVar9;
code_r0x000141b6da53:
      UNRECOVERED_JUMPTABLE_00 = (float *)((longlong)ppfVar31 + 0x20);
code_r0x000141b6da58:
      *(undefined8 *)((longlong)ppfVar31 + -8) = 0x141b6da5d;
      unaff_RBX = (float *)pdb_142d855a0(UNRECOVERED_JUMPTABLE,UNRECOVERED_JUMPTABLE_00);
      goto code_r0x000141b6da5d;
    case (float *)0x141b6da57:
      bVar9 = bVar9 & (byte)((ulonglong)UNRECOVERED_JUMPTABLE >> 8);
      unaff_RBX = (float *)CONCAT71((int7)((ulonglong)unaff_RBX >> 8),bVar9);
      if ((POPCOUNT(bVar9) & 1U) == 0) {
        *(int *)((longlong)unaff_RBX + -0x77) = *(int *)((longlong)unaff_RBX + -0x77) + (int)fVar23;
        *(code *)((longlong)unaff_RBX + 0x413feb01) =
             (code)((byte)*(code *)((longlong)unaff_RBX + 0x413feb01) | (byte)unaff_R14);
code_r0x000141b6da65:
        if ((int)pcVar71 != 0x7d) {
          *(undefined8 *)((longlong)ppfVar31 + 0x20) = 10;
          param_1 = pfVar24;
          goto code_r0x000141b6da53;
        }
        *(float **)(UNRECOVERED_JUMPTABLE + 10) = unaff_RBX;
      }
      else {
        *(code *)((longlong)pfVar24 + 1) = (code)0x3;
      }
      goto code_r0x000141b6daa2;
    case (float *)0x141b6da5d:
      goto code_r0x000141b6da5d;
    case (float *)0x141b6da63:
      goto code_r0x000141b6da63;
    case (float *)0x141b6da72:
      pfVar27[unaff_R13 * 2] = (float)((int)pfVar27[unaff_R13 * 2] + iVar11);
    case (float *)0x141b6da78:
      *UNRECOVERED_JUMPTABLE_00 = (float)((int)*UNRECOVERED_JUMPTABLE_00 + iVar11);
      goto code_r0x000141b6daa2;
    case (float *)0x141b6da7e:
      *pfVar27 = (float)((int)*pfVar27 + iVar11);
code_r0x000141b6daa2:
      cVar8 = (code)0x0;
      param_1 = pfVar24;
code_r0x000141b6daa4:
      *(code *)param_1 = cVar8;
      return param_1;
    case (float *)0x141b6e7e6:
      pfVar24[2] = fVar23;
      UNRECOVERED_JUMPTABLE_00 = UNRECOVERED_JUMPTABLE;
      ppfVar43 = ppfVar31;
      goto code_r0x000141b6e7da;
    case (float *)0x141b6e813:
      goto code_r0x000141b6e813;
    case (float *)0x141b6e838:
      unaff_RBX = (float *)(ulonglong)((uint)fVar77 | 0x1829a43);
code_r0x000141b6e836:
      uVar17 = (ulonglong)*(int *)(&UNK_143398280 + (longlong)UNRECOVERED_JUMPTABLE * 4);
      bVar72 = 0xfffffffebcc67d7f < uVar17;
      bVar75 = SCARRY8(uVar17,0x143398280);
      UNRECOVERED_JUMPTABLE = (float *)(&UNK_143398280 + uVar17);
      bVar74 = (longlong)UNRECOVERED_JUMPTABLE < 0;
      UNRECOVERED_JUMPTABLE_01 = unaff_RBX;
      ppfVar44 = ppfVar31;
code_r0x000141b6e840:
      *(int *)((code *)((longlong)UNRECOVERED_JUMPTABLE + -0x37) +
              (longlong)UNRECOVERED_JUMPTABLE_01) = (int)UNRECOVERED_JUMPTABLE;
      unaff_RBX = UNRECOVERED_JUMPTABLE_01;
      ppfVar46 = ppfVar44;
      ppfVar47 = ppfVar44;
      ppfVar55 = ppfVar44;
      switch(UNRECOVERED_JUMPTABLE) {
      case (float *)0x141b6e846:
        UNRECOVERED_JUMPTABLE_00 = param_2;
        ppfVar45 = ppfVar44;
        if (*param_2 == 7.0373527e+22) {
          *(code *)((longlong)UNRECOVERED_JUMPTABLE_01 + 1) = (code)0x0;
code_r0x000141b6e902:
          unaff_RBX = UNRECOVERED_JUMPTABLE_01;
        }
        else {
code_r0x000141b6e852:
          param_2 = UNRECOVERED_JUMPTABLE_00;
          if (*param_2 != 1.1430647e+27) goto code_r0x000141b6e85e;
          *(code *)((longlong)UNRECOVERED_JUMPTABLE_01 + 1) = (code)0x1;
          unaff_RBX = UNRECOVERED_JUMPTABLE_01;
        }
        break;
      case (float *)0x141b6e873:
code_r0x000141b6e873:
        bVar73 = *(code *)(param_2 + 2) == (code)0x70 && *(ulonglong *)param_2 == 0x756f72476c6c6157
        ;
code_r0x000141b6e88c:
        unaff_RBX = UNRECOVERED_JUMPTABLE_01;
        ppfVar47 = ppfVar46;
        if (!bVar73) goto LAB_141b6e912;
code_r0x000141b6e892:
        *(code *)((longlong)UNRECOVERED_JUMPTABLE_01 + 1) = (code)0x3;
        unaff_RBX = UNRECOVERED_JUMPTABLE_01;
        break;
      case (float *)0x141b6e898:
        bVar73 = *(longlong *)((longlong)param_2 + 3) == 0x72657474756c436f &&
                 *(ulonglong *)param_2 == 0x74756c436f636544;
        goto code_r0x000141b6e8b6;
      case (float *)0x141b6e8be:
code_r0x000141b6e8be:
        ppfVar47 = ppfVar55;
        if (*(short *)(param_2 + 2) != 0x746e || *(ulonglong *)param_2 != 0x696f507269617453)
        goto LAB_141b6e912;
        *(code *)((longlong)unaff_RBX + 1) = (code)0x5;
        break;
      case (float *)0x141b6e8e2:
        UNRECOVERED_JUMPTABLE_00 = (float *)0x72726554;
code_r0x000141b6e8e7:
        bVar73 = *(int *)((longlong)param_2 + 3) == 0x6e696172 &&
                 SUB84(UNRECOVERED_JUMPTABLE_00,0) == *param_2;
        ppfVar56 = ppfVar44;
        goto code_r0x000141b6e8f6;
      case (float *)0x141b6e912:
        goto LAB_141b6e912;
      case (float *)0x143398148:
        *(code **)((longlong)ppfVar44 + -8) = in_R10;
        do {
        } while (bVar75 == bVar74);
        *(code **)((longlong)ppfVar44 + -0x10) = in_R10;
        do {
        } while (bVar75 == bVar74);
        uVar12 = (uint)bVar72;
        uVar14 = (uint)UNRECOVERED_JUMPTABLE_01;
        uVar22 = uVar14 + 0xbc0182b0;
        bVar73 = SBORROW4(uVar14,0x43fe7d50) != SBORROW4(uVar22,uVar12);
        uVar13 = uVar22 - uVar12;
        *(float **)((longlong)ppfVar44 + -0x18) = param_2;
        do {
        } while (bVar73 == (int)uVar13 < 0);
        *(code **)((longlong)ppfVar44 + -0x20) = in_R10;
        do {
        } while (bVar73 == (int)uVar13 < 0);
        puVar1 = (uint *)((longlong)(ulonglong)uVar13 + 0x7d);
        bVar9 = (byte)UNRECOVERED_JUMPTABLE & 0x1f;
        uVar3 = *puVar1;
        *puVar1 = uVar3 << bVar9 |
                  (uint)(CONCAT14(uVar14 < 0x43fe7d50 || uVar22 < uVar12,uVar3) >> 0x21 - bVar9);
        pcVar71 = (code *)((longlong)pfVar27 + 0x52);
        cVar8 = *pcVar71;
        *pcVar71 = (code)((char)*pcVar71 + 1);
        do {
        } while (SCARRY1((char)cVar8,'\x01') == (char)*pcVar71 < '\0');
        return (float *)(ulonglong)uVar13;
      }
      break;
    case (float *)0x141b6e85e:
code_r0x000141b6e85e:
      unaff_RBX = UNRECOVERED_JUMPTABLE_01;
      ppfVar47 = ppfVar45;
      if (*param_2 != 2.8267477e+23) goto LAB_141b6e912;
code_r0x000141b6e86a:
      *(code *)((longlong)UNRECOVERED_JUMPTABLE_01 + 1) = (code)0x2;
      unaff_RBX = UNRECOVERED_JUMPTABLE_01;
      break;
    case (float *)0x141b6e882:
code_r0x000141b6e882:
      *(code *)((longlong)UNRECOVERED_JUMPTABLE + -0x7d) =
           (code)((byte)*(code *)((longlong)UNRECOVERED_JUMPTABLE + -0x7d) |
                 (byte)UNRECOVERED_JUMPTABLE);
      pcVar71 = (code *)swi(1);
      UNRECOVERED_JUMPTABLE_01 = (float *)(*pcVar71)();
      return UNRECOVERED_JUMPTABLE_01;
    case (float *)0x141b6e8b2:
      bVar73 = (int)fVar23 + *(int *)((longlong)UNRECOVERED_JUMPTABLE + 9) == 0;
      ppfVar44 = (float **)(unaff_RBP + 2);
code_r0x000141b6e8b6:
      ppfVar47 = ppfVar44;
      if (!bVar73) {
LAB_141b6e912:
        *(undefined8 *)((longlong)ppfVar47 + -8) = 0x141b6e930;
        UNRECOVERED_JUMPTABLE = (float *)pdb_142d8f140(param_2,pfVar70,&UNK_143397cb0,7);
        pfVar24 = unaff_RBX;
code_r0x000141b6e936:
        *(float **)(pfVar24 + 2) = UNRECOVERED_JUMPTABLE;
        *(code *)unaff_RBX = (code)0x1;
        return unaff_RBX;
      }
      *(code *)((longlong)unaff_RBX + 1) = (code)0x4;
      break;
    case (float *)0x141b6e8f6:
code_r0x000141b6e8f6:
      ppfVar47 = ppfVar56;
      if (!bVar73) goto LAB_141b6e912;
      *(code *)((longlong)unaff_RBX + 1) = (code)0x6;
      break;
    case (float *)0x141b6e918:
      *(int *)((longlong)UNRECOVERED_JUMPTABLE + -0x47) =
           *(int *)((longlong)UNRECOVERED_JUMPTABLE + -0x47) + (int)fVar77;
code_r0x000141b6e91b:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case (float *)0x141b6e936:
      goto code_r0x000141b6e936;
    case (float *)0x141b6e94b:
      pcVar71 = (code *)swi(3);
      UNRECOVERED_JUMPTABLE_01 = (float *)(*pcVar71)();
      return UNRECOVERED_JUMPTABLE_01;
    case (float *)0x141b6e969:
code_r0x000141b6e971:
      UNRECOVERED_JUMPTABLE_00 = (float *)((longlong)UNRECOVERED_JUMPTABLE + (longlong)pcVar71);
code_r0x000141b6e974:
                    /* WARNING: Could not recover jumptable at 0x000141b6e974. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      UNRECOVERED_JUMPTABLE_01 =
           (float *)(*(code *)UNRECOVERED_JUMPTABLE_00)(UNRECOVERED_JUMPTABLE_00);
      return UNRECOVERED_JUMPTABLE_01;
    case (float *)0x141b6e998:
      if (*UNRECOVERED_JUMPTABLE_00 == 1.1430647e+27) {
        *(code *)((longlong)unaff_RBX + 1) = (code)0x1;
code_r0x000141b6ea08:
code_r0x000141b6ea0e:
        *(code *)UNRECOVERED_JUMPTABLE_01 = (code)0x0;
        return UNRECOVERED_JUMPTABLE_01;
      }
      if (*UNRECOVERED_JUMPTABLE_00 == 4.61621e+24) {
        *(code *)((longlong)unaff_RBX + 1) = (code)0x2;
        goto code_r0x000141b6ea0e;
      }
      if (*UNRECOVERED_JUMPTABLE_00 == 6.772068e+22) {
code_r0x000141b6e9b0:
        *(code *)((longlong)UNRECOVERED_JUMPTABLE_01 + 1) = (code)0x6;
        goto code_r0x000141b6ea0e;
      }
    case (float *)0x141b6ea18:
LAB_141b6ea18:
      UNRECOVERED_JUMPTABLE = param_2;
code_r0x000141b6ea2e:
      UNRECOVERED_JUMPTABLE_00 = UNRECOVERED_JUMPTABLE;
      ppfVar30 = ppfVar48;
      param_1 = UNRECOVERED_JUMPTABLE_01;
code_r0x000141b6ea31:
      *(undefined8 *)((longlong)ppfVar30 + -8) = 0x141b6ea36;
      uVar17 = pdb_142d8f140(UNRECOVERED_JUMPTABLE_00);
      *(ulonglong *)(param_1 + 2) = uVar17;
      UNRECOVERED_JUMPTABLE_01 = param_1;
code_r0x000141b6ea40:
      *(code *)UNRECOVERED_JUMPTABLE_01 = (code)0x1;
      return UNRECOVERED_JUMPTABLE_01;
    case (float *)0x141b6e9da:
      out(*(code *)pfVar24,(short)UNRECOVERED_JUMPTABLE_00);
      *(byte *)unaff_RBX = (char)*(code *)unaff_RBX + bVar9;
      UNRECOVERED_JUMPTABLE_00 = UNRECOVERED_JUMPTABLE;
code_r0x000141b6e9d8:
      ppfVar48 = ppfVar65;
      if ((int)pcVar71 == 0 && (int)UNRECOVERED_JUMPTABLE_00 == 0x6e65) {
        *(code *)((longlong)UNRECOVERED_JUMPTABLE_01 + 1) = (code)0x5;
        goto code_r0x000141b6ea0e;
      }
      goto LAB_141b6ea18;
    case (float *)0x141b6e9fc:
code_r0x000141b6e9fc:
      UNRECOVERED_JUMPTABLE_01 = unaff_RBX;
      param_2 = UNRECOVERED_JUMPTABLE_00;
      ppfVar48 = ppfVar56;
      if (bVar73) {
        *(code *)((longlong)unaff_RBX + 1) = (code)0x4;
        goto code_r0x000141b6ea0e;
      }
      goto LAB_141b6ea18;
    case (float *)0x141b6ea45:
      goto code_r0x000141b6ea40;
    case (float *)0x141b6ea64:
      *(float **)((longlong)ppfVar31 + -8) = unaff_RBX;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case (float *)0x141b6ea8d:
code_r0x000141b6ea8d:
      *(code *)((longlong)unaff_RBX + 1) = SUB81(UNRECOVERED_JUMPTABLE,0);
      *(code *)unaff_RBX = (code)0x0;
      return unaff_RBX;
    case (float *)0x141b6eabd:
code_r0x000141b6eabd:
      uVar17 = *(ulonglong *)((longlong)param_2 + 3) ^ 0x65686361635f6863;
      ppfVar50 = ppfVar56;
code_r0x000141b6eacb:
      if (uVar17 == 0 && UNRECOVERED_JUMPTABLE == (float *)0x0) {
        UNRECOVERED_JUMPTABLE = (float *)CONCAT71((int7)((ulonglong)UNRECOVERED_JUMPTABLE >> 8),1);
        UNRECOVERED_JUMPTABLE_01 = unaff_RBX;
        UNRECOVERED_JUMPTABLE_00 = param_2;
code_r0x000141b6ead6:
        param_2 = UNRECOVERED_JUMPTABLE_00;
        *(code *)((longlong)UNRECOVERED_JUMPTABLE_01 + 1) = SUB81(UNRECOVERED_JUMPTABLE,0);
code_r0x000141b6eacd:
        *(undefined1 **)((longlong)ppfVar50 + (ulonglong)(byte)(unaff_00084f00 - 1) * -8 + -8) =
             unaff_0008ae00;
        *(char *)UNRECOVERED_JUMPTABLE_01 =
             (char)*(code *)UNRECOVERED_JUMPTABLE_01 + (char)UNRECOVERED_JUMPTABLE_01;
        *(code *)((longlong)UNRECOVERED_JUMPTABLE + 0x1488801) =
             (code)((char)*(code *)((longlong)UNRECOVERED_JUMPTABLE + 0x1488801) +
                   (char)((ulonglong)param_2 >> 8));
        *(code *)UNRECOVERED_JUMPTABLE_01 = (code)0x0;
        return UNRECOVERED_JUMPTABLE_01;
      }
      goto LAB_141b6ebc7;
    case (float *)0x141b6eae0:
      if (bVar73) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      UNRECOVERED_JUMPTABLE = (float *)(ulonglong)((uint)fVar23 ^ (uint)*UNRECOVERED_JUMPTABLE_00);
      UNRECOVERED_JUMPTABLE_00 = (float *)(ulonglong)(byte)*(code *)(UNRECOVERED_JUMPTABLE_00 + 1);
code_r0x000141b6eae8:
      if ((int)UNRECOVERED_JUMPTABLE_00 == 0x68 && (int)UNRECOVERED_JUMPTABLE == 0) {
code_r0x000141b6eaf3:
        *(code *)((longlong)unaff_RBX + 1) = (code)0x1;
        *(code *)unaff_RBX = (code)0x0;
        return unaff_RBX;
      }
      goto LAB_141b6ebc7;
    case (float *)0x141b6eb06:
      UNRECOVERED_JUMPTABLE =
           (float *)((ulonglong)UNRECOVERED_JUMPTABLE ^ *(ulonglong *)UNRECOVERED_JUMPTABLE_00);
      goto code_r0x000141b6eb09;
    case (float *)0x141b6eb18:
      *pfVar69 = fVar77;
      *(byte *)unaff_RBX = (char)*(code *)unaff_RBX + bVar9;
      *(char *)(UNRECOVERED_JUMPTABLE + 0x522201) =
           (char)*(code *)(UNRECOVERED_JUMPTABLE + 0x522201) +
           (char)((ulonglong)UNRECOVERED_JUMPTABLE_00 >> 8);
      goto code_r0x000141b6eb21;
    case (float *)0x141b6eb2f:
code_r0x000141b6eb2f:
      UNRECOVERED_JUMPTABLE = (float *)((ulonglong)UNRECOVERED_JUMPTABLE ^ *(ulonglong *)param_2);
      pfVar70 = (float *)0x65686361635f6e6f;
      goto code_r0x000141b6eb43;
    case (float *)0x141b6eb31:
      UNRECOVERED_JUMPTABLE =
           (float *)CONCAT71((int7)((ulonglong)UNRECOVERED_JUMPTABLE >> 8),
                             (byte)UNRECOVERED_JUMPTABLE |
                             (byte)*(code *)(UNRECOVERED_JUMPTABLE + -0x12));
      *(undefined8 *)((ulonglong)*(uint *)((longlong)UNRECOVERED_JUMPTABLE + 99) - 8) =
           0xffffffffc8814965;
      unaff_RBX = (float *)((ulonglong)unaff_RBX | 6);
      *(char *)unaff_RBX = (char)*(code *)unaff_RBX + (char)unaff_RBX;
code_r0x000141b6eb43:
      if (pfVar70 == *(float **)((longlong)param_2 + 6) && UNRECOVERED_JUMPTABLE == (float *)0x0) {
        *(code *)((longlong)unaff_RBX + 1) = (code)0x2;
        *(code *)unaff_RBX = (code)0x0;
        return unaff_RBX;
      }
LAB_141b6ebc7:
      *(code *)((longlong)unaff_RBX + 1) = (code)0x6;
      *(code *)unaff_RBX = (code)0x0;
      return unaff_RBX;
    case (float *)0x141b6eb7b:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case (float *)0x141b6eb99:
code_r0x000141b6eb96:
      uVar12 = (int)unaff_RBX + 0xc6014888;
      UNRECOVERED_JUMPTABLE_01 = (float *)(ulonglong)uVar12;
      *(char *)UNRECOVERED_JUMPTABLE_01 = *(char *)UNRECOVERED_JUMPTABLE_01 + (char)uVar12;
      return UNRECOVERED_JUMPTABLE_01;
    case (float *)0x141b6ebb2:
      unaff_RBX = (float *)(ulonglong)((int)fVar77 + 0x1419269);
      auVar78 = auVar80;
code_r0x000141b6ebb7:
      auVar7[1] = in_XMM1_Bb;
      auVar7[0] = in_XMM1_Ba;
      auVar7[2] = in_XMM1_Bc;
      auVar7[3] = in_XMM1_Bd;
      auVar7[4] = in_XMM1_Be;
      auVar7[5] = in_XMM1_Bf;
      auVar7[6] = in_XMM1_Bg;
      auVar7[7] = in_XMM1_Bh;
      auVar7[8] = in_XMM1_Bi;
      auVar7[9] = in_XMM1_Bj;
      auVar7[10] = in_XMM1_Bk;
      auVar7[0xb] = in_XMM1_Bl;
      auVar7[0xc] = in_XMM1_Bm;
      auVar7[0xd] = in_XMM1_Bn;
      auVar7[0xe] = in_XMM1_Bo;
      auVar7[0xf] = in_XMM1_Bp;
      auVar78 = auVar78 & auVar7;
      if ((ushort)((ushort)(SUB161(auVar78 >> 7,0) & 1) |
                   (ushort)(SUB161(auVar78 >> 0xf,0) & 1) << 1 |
                   (ushort)(SUB161(auVar78 >> 0x17,0) & 1) << 2 |
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
                   (ushort)(SUB161(auVar78 >> 0x77,0) & 1) << 0xe |
                  (ushort)(byte)(auVar78[0xf] >> 7) << 0xf) == 0xffff) {
        *(code *)((longlong)unaff_RBX + 1) = (code)0x3;
        *(code *)unaff_RBX = (code)0x0;
        return unaff_RBX;
      }
      goto LAB_141b6ebc7;
    case (float *)0x141b6ebe7:
                    /* WARNING: Could not recover jumptable at 0x000141b6ebfa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      UNRECOVERED_JUMPTABLE_01 =
           (float *)(*(code *)(&UNK_143398304 +
                              *(int *)(&UNK_143398304 +
                                      (ulonglong)**(uint **)UNRECOVERED_JUMPTABLE * 4)))
                              (*(uint **)UNRECOVERED_JUMPTABLE,
                               &UNK_143398304 +
                               *(int *)(&UNK_143398304 +
                                       (ulonglong)**(uint **)UNRECOVERED_JUMPTABLE * 4));
      return UNRECOVERED_JUMPTABLE_01;
    case (float *)0x141b6ec31:
      *(undefined8 *)((longlong)ppfVar31 + 0x20) = 0xc;
      *(undefined **)((longlong)ppfVar31 + -8) = &UNK_141b6ec59;
      UNRECOVERED_JUMPTABLE_01 =
           (float *)pdb_140f66e50((ulonglong)unaff_RBX & 0xffffffffffffff28,&UNK_143397c81,0xb,
                                  &UNK_143397c8c);
      return UNRECOVERED_JUMPTABLE_01;
    case (float *)0x141b6ee16:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case (float *)0x141b6ee6f:
      pcVar71 = (code *)swi(3);
      UNRECOVERED_JUMPTABLE_01 = (float *)(*pcVar71)();
      return UNRECOVERED_JUMPTABLE_01;
    case (float *)0x141b6eeaa:
      pcVar71 = (code *)swi(3);
      UNRECOVERED_JUMPTABLE_01 = (float *)(*pcVar71)();
      return UNRECOVERED_JUMPTABLE_01;
    case (float *)0x141b6eeb0:
pdb_140f679a0:
                    /* WARNING: Could not recover jumptable at 0x000140f679ae. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      UNRECOVERED_JUMPTABLE_01 =
           (float *)(**(code **)(*(ulonglong *)(UNRECOVERED_JUMPTABLE_00 + 2) + 0x18))
                              (*(ulonglong *)UNRECOVERED_JUMPTABLE_00);
      return UNRECOVERED_JUMPTABLE_01;
    case (float *)0x141b6ef4d:
code_r0x000141b6ef4d:
      bVar72 = param_2 != (float *)0x0;
      bVar74 = SBORROW8(0,(longlong)param_2);
      unaff_RBX = *(float **)(unaff_RBP + -6);
      ppfVar56 = ppfVar55;
code_r0x000141b6ef57:
      if ((bVar74) || (!bVar72)) {
code_r0x000141b6efaa:
        return unaff_RBX;
      }
      UNRECOVERED_JUMPTABLE = *(float **)(unaff_RBX + 2);
      pfVar70 = (float *)0x1;
      unaff_RBP = *(float **)((longlong)ppfVar56 + 0x40);
      ppfVar53 = (float **)((longlong)ppfVar56 + 0x48);
      goto code_r0x0001406abac0;
    case (float *)0x141b6ef72:
code_r0x000141b6ef72:
      *(code *)((longlong)UNRECOVERED_JUMPTABLE + -0x75) =
           (code)(((char)*(code *)((longlong)UNRECOVERED_JUMPTABLE + -0x75) -
                  (byte)UNRECOVERED_JUMPTABLE) - bVar72);
      *(float **)((longlong)ppfVar31 + -8) = UNRECOVERED_JUMPTABLE_01;
      *(code *)((longlong)UNRECOVERED_JUMPTABLE_01 + -0x77) =
           (code)((byte)*(code *)((longlong)UNRECOVERED_JUMPTABLE_01 + -0x77) &
                 (byte)UNRECOVERED_JUMPTABLE);
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case (float *)0x141b6ef87:
      *(undefined **)((longlong)ppfVar31 + -8) = &UNK_141b6ef8d;
      UNRECOVERED_JUMPTABLE_01 = (float *)func_0x000152077ad5();
      ppfVar54 = ppfVar31;
code_r0x000141b6ef8d:
      param_1 = pfVar24;
      if (UNRECOVERED_JUMPTABLE_00 == (float *)0x0) {
        return UNRECOVERED_JUMPTABLE_01;
      }
code_r0x000141b6ef96:
      pfVar70 = (float *)0x8;
      ppfVar56 = ppfVar54;
code_r0x000141b6ef9c:
      UNRECOVERED_JUMPTABLE = *(float **)(unaff_RBP + -4);
      unaff_RBP = *(float **)((longlong)ppfVar56 + 0x40);
      ppfVar53 = (float **)((longlong)ppfVar56 + 0x48);
code_r0x0001406abac0:
      *(float **)((longlong)ppfVar53 + -8) = unaff_RBP;
      *(float **)((longlong)ppfVar53 + -0x10) = param_1;
      if ((float *)0x10 < pfVar70) {
        UNRECOVERED_JUMPTABLE = *(float **)(UNRECOVERED_JUMPTABLE + -2);
      }
      *(undefined **)((longlong)ppfVar53 + -0x40) = &UNK_140f3c37e;
      uVar16 = GetProcessHeap();
                    /* WARNING: Could not recover jumptable at 0x000140f3c38c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      UNRECOVERED_JUMPTABLE_01 = (float *)HeapFree(uVar16,0,UNRECOVERED_JUMPTABLE);
      return UNRECOVERED_JUMPTABLE_01;
    case (float *)0x141b6efcc:
code_r0x000141b6efcc:
      *(char *)unaff_RBX = (char)*(code *)unaff_RBX + (char)unaff_RBX;
      *(char *)unaff_RBX = (char)*(code *)unaff_RBX + (char)unaff_RBX;
DAT_141b6efd0:
      *(float **)((longlong)ppfVar56 + 0x10) = param_2;
      *(float **)((longlong)ppfVar56 + -8) = unaff_RBP;
      ppfVar56 = (float **)((longlong)ppfVar56 + -0x28);
      UNRECOVERED_JUMPTABLE_00 = param_2;
code_r0x000141b6efda:
      unaff_RBP = UNRECOVERED_JUMPTABLE_00 + 0x10;
      unaff_RBX = *(float **)(UNRECOVERED_JUMPTABLE_00 + 10);
      ppfVar48 = ppfVar56;
code_r0x000141b6efe2:
      UNRECOVERED_JUMPTABLE_00 = *(float **)(unaff_RBX + 4);
      ppfVar31 = ppfVar48;
      if (UNRECOVERED_JUMPTABLE_00 == (float *)0x0) {
        return unaff_RBX;
      }
      goto code_r0x000141b6efeb;
    case (float *)0x141b6eff3:
      *(byte *)unaff_RBX = (char)*(code *)unaff_RBX + bVar9;
code_r0x000141b6efeb:
      pbVar6 = *(byte **)(unaff_RBP + -4);
      *(undefined **)((longlong)ppfVar31 + -8) = &UNK_141b6effe;
      pub_1406abac0(pbVar6,(longlong)UNRECOVERED_JUMPTABLE_00 << 5,8);
      unaff_RBX = extraout_RAX;
code_r0x000141b6efff:
      return unaff_RBX;
    case (float *)0x141b6f00a:
code_r0x000141b6f00a:
      *(char *)unaff_RBX = (char)*(code *)unaff_RBX + (char)unaff_RBX;
      *(char *)unaff_RBX = (char)*(code *)unaff_RBX + (char)unaff_RBX;
      *(float **)((longlong)ppfVar55 + 0x10) = param_2;
      *(float **)((longlong)ppfVar55 + -8) = unaff_RBP;
      ppfVar56 = (float **)((longlong)ppfVar55 + -0x28);
      UNRECOVERED_JUMPTABLE_00 = param_2;
code_r0x000141b6f01a:
      unaff_RBP = UNRECOVERED_JUMPTABLE_00 + 0x10;
      unaff_RBX = *(float **)(UNRECOVERED_JUMPTABLE_00 + 0xc);
    case (float *)0x141b6f022:
      goto code_r0x000141b6f022;
    case (float *)0x141b6f04a:
      *(code *)((longlong)unaff_RBP + -0x3d) =
           (code)((byte)*(code *)((longlong)unaff_RBP + -0x3d) & (byte)pfVar27);
      pcVar71 = (code *)swi(3);
      UNRECOVERED_JUMPTABLE_01 = (float *)(*pcVar71)();
      return UNRECOVERED_JUMPTABLE_01;
    case (float *)0x141b6f06e:
      pcVar71 = (code *)swi(3);
      UNRECOVERED_JUMPTABLE_01 = (float *)(*pcVar71)();
      return UNRECOVERED_JUMPTABLE_01;
    case (float *)0x141b6f08b:
      out(0x4d,bVar9);
      UNRECOVERED_JUMPTABLE_00 = (float *)((ulonglong)UNRECOVERED_JUMPTABLE & 0xffffffff);
code_r0x000141b6f091:
      UNRECOVERED_JUMPTABLE_01 = (float *)0x0;
      do {
        if ((*(code *)((longlong)UNRECOVERED_JUMPTABLE_00 + (longlong)UNRECOVERED_JUMPTABLE_01) ==
             (code)0x0) &&
           (*(int *)((longlong)(UNRECOVERED_JUMPTABLE_00 + 2) + (longlong)UNRECOVERED_JUMPTABLE_01)
            == (int)pcVar71)) {
          unaff_RBX = (float *)CONCAT71((int7)((ulonglong)unaff_RBX >> 8),1);
          switch((int)pcVar71) {
          case 1:
          case 2:
            if (*(float **)
                 ((longlong)(UNRECOVERED_JUMPTABLE_00 + 4) + (longlong)UNRECOVERED_JUMPTABLE_01) ==
                UNRECOVERED_JUMPTABLE) {
              return unaff_RBX;
            }
            break;
          default:
            goto code_r0x000141b6f162;
          case 4:
          case 5:
          case 6:
            if (*(int *)((longlong)(UNRECOVERED_JUMPTABLE_00 + 3) +
                        (longlong)UNRECOVERED_JUMPTABLE_01) == (int)((ulonglong)in_R10 >> 0x20)) {
              return unaff_RBX;
            }
          }
        }
        UNRECOVERED_JUMPTABLE_01 = UNRECOVERED_JUMPTABLE_01 + 6;
        if (pfVar70 == UNRECOVERED_JUMPTABLE_01) {
          return (float *)0x0;
        }
      } while( true );
    case (float *)0x141b6f701:
code_r0x000141b6f704:
      pfVar69 = (float *)(ulonglong)((int)pfVar69 + 1);
      param_1 = pfVar24;
      goto code_r0x000141b6f6ff;
    case (float *)0x141b6f714:
      return unaff_RBX;
    case (float *)0x141b6f727:
      ppfVar62 = ppfVar31;
code_r0x000141b6f72a:
      piVar20 = (int *)((ulonglong)unaff_RBX & 0xffffffffffffff20);
      *piVar20 = *piVar20 + (int)piVar20;
      *(char *)piVar20 = (char)*piVar20 + (char)piVar20;
code_r0x000141b6f725:
      *(undefined8 *)((longlong)ppfVar62 + 0x20) = 1;
      ppfVar56 = ppfVar62;
      param_1 = pfVar24;
    case (float *)0x141b6f73a:
code_r0x000141b6f73a:
      *(undefined **)((longlong)ppfVar56 + -8) = &UNK_141b6f745;
      pdb_142d7f1b0(param_1,pfVar69);
      pfVar69 = *(float **)(param_1 + 4);
      ppfVar58 = ppfVar56;
code_r0x000141b6f64b:
      UNRECOVERED_JUMPTABLE_01 = *(float **)(param_1 + 2);
code_r0x000141b6f64f:
      *(code *)((longlong)UNRECOVERED_JUMPTABLE_01 + (longlong)pfVar69) = (code)0x7d;
      *(code **)(param_1 + 4) = (code *)((longlong)pfVar69 + 1);
      *(undefined1 *)(unaff_R15 + 4) = 1;
      param_1 = (float *)*unaff_R15;
      ppfVar59 = ppfVar58;
code_r0x000141b6f662:
      unaff_R12 = unaff_R15[3] + -1;
      unaff_R15[3] = unaff_R12;
      pfVar69 = *(float **)(param_1 + 4);
      ppfVar60 = ppfVar59;
      ppfVar55 = ppfVar59;
      UNRECOVERED_JUMPTABLE = param_1;
      if (*(float **)param_1 == pfVar69) {
code_r0x000141b6f766:
        *(undefined8 *)((longlong)ppfVar55 + 0x20) = 1;
        ppfVar63 = ppfVar55;
        param_1 = UNRECOVERED_JUMPTABLE;
code_r0x000141b6f77e:
        param_2 = pfVar69;
        UNRECOVERED_JUMPTABLE_00 = UNRECOVERED_JUMPTABLE;
code_r0x000141b6f781:
        *(undefined **)((longlong)ppfVar63 + -8) = &UNK_141b6f786;
        pdb_142d7f1b0(UNRECOVERED_JUMPTABLE_00,param_2);
        ppfVar60 = ppfVar63;
code_r0x000141b6f786:
        pfVar69 = *(float **)(param_1 + 4);
      }
code_r0x000141b6f67a:
      *(code *)(*(ulonglong *)(param_1 + 2) + (longlong)pfVar69) = (code)0xa;
      pfVar69 = (float *)((longlong)pfVar69 + 1);
      *(float **)(param_1 + 4) = pfVar69;
      if (unaff_R12 != 0) {
        UNRECOVERED_JUMPTABLE = (float *)unaff_R15[2];
code_r0x000141b6f692:
        if (UNRECOVERED_JUMPTABLE == (float *)0x0) {
          *(float **)(param_1 + 4) = pfVar69;
        }
        else {
          unaff_R14 = unaff_R15[1];
code_r0x000141b6f69b:
          do {
            if ((float *)(*(ulonglong *)param_1 - (longlong)pfVar69) < UNRECOVERED_JUMPTABLE) {
              *(undefined8 *)((longlong)ppfVar60 + 0x20) = 1;
              pfVar27 = UNRECOVERED_JUMPTABLE;
              ppfVar56 = ppfVar60;
code_r0x000141b6f6d4:
              *(undefined **)((longlong)ppfVar56 + -8) = &UNK_141b6f6e8;
              pdb_142d7f1b0(param_1,pfVar69,pfVar27,1);
              pfVar69 = *(float **)(param_1 + 4);
              UNRECOVERED_JUMPTABLE = pfVar27;
              ppfVar60 = ppfVar56;
            }
code_r0x000141b6f6ab:
            uVar17 = *(ulonglong *)(param_1 + 2);
            *(undefined **)((longlong)ppfVar60 + -8) = &UNK_141b6f6bd;
            pub_142e32760((code *)(uVar17 + (longlong)pfVar69),unaff_R14,UNRECOVERED_JUMPTABLE);
            pfVar69 = (float *)((longlong)pfVar69 + (longlong)UNRECOVERED_JUMPTABLE);
            *(float **)(param_1 + 4) = pfVar69;
            unaff_R12 = unaff_R12 + -1;
          } while (unaff_R12 != 0);
        }
      }
      ppfVar64 = ppfVar60;
      if (*(float **)param_1 == pfVar69) {
code_r0x000141b6f78f:
        *(undefined8 *)((longlong)ppfVar64 + 0x20) = 1;
        *(undefined **)((longlong)ppfVar64 + -8) = &UNK_141b6f7af;
        pdb_142d7f1b0(param_1,pfVar69,1,1);
        pfVar69 = *(float **)(param_1 + 4);
      }
      unaff_RBX = *(float **)(param_1 + 2);
code_r0x000141b6f6ff:
      *(code *)((longlong)unaff_RBX + (longlong)pfVar69) = (code)0x7d;
      *(code **)(param_1 + 4) = (code *)((longlong)pfVar69 + 1);
code_r0x000141b6f70a:
      return unaff_RBX;
    case (float *)0x141b6f74d:
      *(int *)((longlong)unaff_RBX + -0x73) = *(int *)((longlong)unaff_RBX + -0x73) + -1;
                    /* WARNING: Subroutine does not return */
      *(undefined **)((longlong)ppfVar31 + -8) = &UNK_141b6f766;
      pdb_142dc83b0(UNRECOVERED_JUMPTABLE,0x28,&UNK_143398010);
    case (float *)0x141b6f768:
      piVar20 = (int *)((ulonglong)unaff_RBX & 0xffffffffffffff20);
      *piVar20 = *piVar20 + (int)piVar20;
      *(char *)piVar20 = (char)*piVar20 + (char)piVar20;
      UNRECOVERED_JUMPTABLE = pfVar24;
      goto code_r0x000141b6f766;
    case (float *)0x141b6f7b4:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case (float *)0x141b6f7bc:
      *(byte *)UNRECOVERED_JUMPTABLE = (byte)*(code *)UNRECOVERED_JUMPTABLE & bVar9;
      *(byte *)unaff_RBX = (char)*(code *)unaff_RBX + bVar9;
      *(byte *)(UNRECOVERED_JUMPTABLE + -0x12) =
           (char)*(code *)(UNRECOVERED_JUMPTABLE + -0x12) + bVar9;
      *unaff_RBX = (float)((int)*unaff_RBX + (int)fVar77);
      *(byte *)unaff_RBX = (char)*(code *)unaff_RBX + bVar9;
code_r0x000141b6f7cd:
      UNRECOVERED_JUMPTABLE_00 = param_1;
      ppfVar56 = ppfVar31;
      param_1 = UNRECOVERED_JUMPTABLE_00;
code_r0x000141b6f5ca:
      *(undefined **)((longlong)ppfVar56 + -8) = &UNK_141b6f7d8;
      pdb_142d7f1b0(UNRECOVERED_JUMPTABLE_00,pfVar69);
      uVar17 = *(ulonglong *)(param_1 + 4);
      *(undefined1 *)(*(ulonglong *)(param_1 + 2) + uVar17) = 10;
      pfVar69 = (float *)(uVar17 + 1);
      *(float **)(param_1 + 4) = pfVar69;
      ppfVar57 = ppfVar56;
      if (unaff_R12 == 0) {
code_r0x000141b6f642:
        ppfVar62 = ppfVar57;
        ppfVar58 = ppfVar57;
        pfVar24 = param_1;
        if (*(float **)param_1 == pfVar69) goto code_r0x000141b6f725;
      }
      else {
        unaff_RBX = (float *)unaff_R15[2];
        if (unaff_RBX != (float *)0x0) {
          unaff_R14 = unaff_R15[1];
          do {
            if ((float *)(*(ulonglong *)param_1 - (longlong)pfVar69) < unaff_RBX) {
              *(undefined8 *)((longlong)ppfVar57 + 0x20) = 1;
              *(undefined **)((longlong)ppfVar57 + -8) = &UNK_141b6f638;
              pdb_142d7f1b0(param_1,pfVar69,unaff_RBX,1);
              pfVar69 = *(float **)(param_1 + 4);
code_r0x000141b6f63c:
            }
            uVar17 = *(ulonglong *)(param_1 + 2);
            *(undefined **)((longlong)ppfVar57 + -8) = &UNK_141b6f60d;
            pub_142e32760((code *)(uVar17 + (longlong)pfVar69),unaff_R14,unaff_RBX);
            pfVar69 = (float *)((longlong)pfVar69 + (longlong)unaff_RBX);
            *(float **)(param_1 + 4) = pfVar69;
            unaff_R12 = unaff_R12 + -1;
          } while (unaff_R12 != 0);
          goto code_r0x000141b6f642;
        }
code_r0x000141b6f718:
        *(float **)(param_1 + 4) = pfVar69;
        ppfVar62 = ppfVar56;
        ppfVar58 = ppfVar56;
        pfVar24 = param_1;
        if (*(float **)param_1 == pfVar69) goto code_r0x000141b6f725;
      }
      goto code_r0x000141b6f64b;
    case (float *)0x141b6f80d:
      *(int *)((longlong)ppfVar31 + 0x90) = *(int *)((longlong)ppfVar31 + 0x90) - (int)unaff_RBP;
code_r0x000141b6f802:
      *(undefined4 *)((longlong)ppfVar31 + 0xa0) = unaff_XMM14_Da;
      *(undefined4 *)((longlong)ppfVar31 + 0xa4) = unaff_XMM14_Db;
      *(undefined4 *)((longlong)ppfVar31 + 0xa8) = unaff_XMM14_Dc;
      *(undefined4 *)((longlong)ppfVar31 + 0xac) = unaff_XMM14_Dd;
      *(undefined4 *)((longlong)ppfVar31 + 0x90) = unaff_XMM13_Da;
      *(undefined4 *)((longlong)ppfVar31 + 0x94) = unaff_XMM13_Db;
      *(undefined4 *)((longlong)ppfVar31 + 0x98) = unaff_XMM13_Dc;
      *(undefined4 *)((longlong)ppfVar31 + 0x9c) = unaff_XMM13_Dd;
      *(float *)((longlong)ppfVar31 + 0x80) = unaff_XMM12_Da;
      *(float *)((longlong)ppfVar31 + 0x84) = unaff_XMM12_Db;
      *(float *)((longlong)ppfVar31 + 0x88) = unaff_XMM12_Dc;
      *(float *)((longlong)ppfVar31 + 0x8c) = unaff_XMM12_Dd;
      param_2 = UNRECOVERED_JUMPTABLE_00;
      puVar28 = (undefined1 *)ppfVar31;
      goto code_r0x000141b6f81d;
    case (float *)0x141b6f856:
      unaff_XMM9_Da = unaff_XMM10_Dd;
      goto code_r0x000141b6f84b;
    case (float *)0x141b6f85d:
      if (UNRECOVERED_JUMPTABLE == (float *)0x1) {
        UNRECOVERED_JUMPTABLE_00 = (float *)((ulonglong)UNRECOVERED_JUMPTABLE_00 & 0xff);
        unaff_XMM9_Da = unaff_XMM10_Dd;
        goto code_r0x000141b6f84b;
      }
      pfVar69 = (float *)(ulonglong)(uint)((int)pfVar69 >> 1);
      goto code_r0x000141b6f871;
    case (float *)0x141b6f87d:
      goto code_r0x000141b6f87d;
    case (float *)0x141b6f8d3:
code_r0x000141b6f8d3:
      auVar82._0_4_ = auVar80._0_4_ + auVar80._0_4_;
      auVar82._4_4_ = auVar80._4_4_ + auVar80._4_4_;
      auVar82._8_4_ = auVar80._8_4_ + auVar80._8_4_;
      auVar82._12_4_ = auVar80._12_4_ + auVar80._12_4_;
      ppfVar67 = ppfVar66;
      goto code_r0x000141b6f8ce;
    case (float *)0x141b6f91d:
      goto code_r0x000141b6f90f;
    case (float *)0x141b6f984:
code_r0x000141b6f98b:
      *(int *)((longlong)unaff_RBX + 99) =
           *(int *)((longlong)unaff_RBX + 99) + (int)UNRECOVERED_JUMPTABLE;
      goto code_r0x000141b6f965;
    case (float *)0x141b6f9cb:
      goto code_r0x000141b6f9ed;
    case (float *)0x141b6f9d3:
code_r0x000141b6f9d3:
      goto code_r0x000141b6f9ed;
    case (float *)0x141b6fa02:
      *unaff_RBX = (float)((int)*unaff_RBX + (int)fVar77);
      *(code *)((longlong)UNRECOVERED_JUMPTABLE + 0xf) =
           (code)((char)*(code *)((longlong)UNRECOVERED_JUMPTABLE + 0xf) + bVar9);
      auVar90._4_12_ = auVar80._4_12_;
      auVar90._0_4_ =
           (auVar80._0_4_ * unaff_XMM7_Da - unaff_XMM9_Da * unaff_XMM12_Da) * _DAT_142e37890;
      *(undefined **)((longlong)ppfVar31 + -8) = &UNK_141b6fa3a;
      uVar16 = pub_142e32980(auVar90._0_8_);
      unaff_XMM11._8_4_ = (int)extraout_XMM0_Qb_05;
      unaff_XMM11._0_8_ = uVar16;
      unaff_XMM11._12_4_ = (int)((ulonglong)extraout_XMM0_Qb_05 >> 0x20);
      goto code_r0x000141b6fa43;
    }
code_r0x000141b6e908:
    *(code *)unaff_RBX = (code)0x0;
code_r0x000141b6e90c:
    return unaff_RBX;
  case (code)0x2a:
  case (code)0x2b:
  case (code)0x2c:
    param_2[10] = fVar77;
    ppfVar29 = &pfStack_68;
    goto code_r0x000141b6d48e;
  case (code)0x2d:
    goto code_r0x000141b6d49c;
  case (code)0x2e:
    *(byte *)UNRECOVERED_JUMPTABLE_01 = (byte)*(code *)UNRECOVERED_JUMPTABLE_01 & (byte)unaff_RBX;
    *(byte *)UNRECOVERED_JUMPTABLE_01 = (char)*(code *)UNRECOVERED_JUMPTABLE_01 + bVar9;
    fRam0000000100002600 = *param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (code)0x2f:
  case (code)0x30:
  case (code)0x34:
    goto code_r0x000141b6d7a0;
  case (code)0x31:
    UNRECOVERED_JUMPTABLE_01 = (float *)((ulonglong)UNRECOVERED_JUMPTABLE_01 | 1);
    goto code_r0x000141b6d665;
  case (code)0x32:
  case (code)0x33:
    *(byte *)UNRECOVERED_JUMPTABLE_01 = (char)*(code *)UNRECOVERED_JUMPTABLE_01 + bVar9;
    (&UNK_1433980d5)[uVar17] = (&UNK_1433980d5)[uVar17] + 'H';
    goto code_r0x000141b6d7e9;
  case (code)0x35:
    fRam4c284289483273cf = fVar77;
  case (code)0x3d:
    UNRECOVERED_JUMPTABLE = (float *)(ulonglong)((int)fVar77 + 0x43398148);
    goto code_r0x000141b6d665;
  case (code)0x36:
    in((short)param_2);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (code)0x37:
    ppfVar30 = &pfStack_68;
    goto LAB_141b6d67a;
  case (code)0x38:
    *(byte *)UNRECOVERED_JUMPTABLE_01 = (char)*(code *)UNRECOVERED_JUMPTABLE_01 + bVar9;
LAB_141b6d68f:
    unaff_RBX = UNRECOVERED_JUMPTABLE_01;
    ppfVar30 = &pfStack_68;
    if (pcVar71 != (code *)0x22) goto LAB_141b6d6bf;
    UNRECOVERED_JUMPTABLE_00 = (float *)&uStack_40;
    ppfVar55 = &pfStack_68;
    goto code_r0x000141b6d69a;
  case (code)0x39:
    pfVar69 = (float *)CONCAT71(0x1000026,(char)unaff_R15);
LAB_141b6d64b:
    do {
      pcVar71 = (code *)(ulonglong)
                        (byte)((code *)((longlong)pfVar70 + -1))[(longlong)UNRECOVERED_JUMPTABLE_01]
      ;
      unaff_RBX = UNRECOVERED_JUMPTABLE_01;
      ppfVar30 = &pfStack_68;
      if ((code *)0x22 < pcVar71) goto LAB_141b6d6bf;
      if (((ulonglong)pfVar69 >> ((ulonglong)pcVar71 & 0x3f) & 1) == 0) goto LAB_141b6d68f;
      *(float **)(param_2 + 10) = UNRECOVERED_JUMPTABLE_01;
      pcVar71 = (code *)((longlong)UNRECOVERED_JUMPTABLE + (longlong)UNRECOVERED_JUMPTABLE_01);
code_r0x000141b6d665:
      UNRECOVERED_JUMPTABLE_01 = (float *)((longlong)UNRECOVERED_JUMPTABLE_01 + 1);
    } while (pcVar71 != (code *)0x0);
LAB_141b6d671:
    uStack_40 = 5;
    uStack_39 = 0;
    ppfVar30 = &pfStack_68;
    goto LAB_141b6d67a;
  case (code)0x3a:
    goto code_r0x000141b6d730;
  case (code)0x3b:
    goto code_r0x000141b6d747;
  case (code)0x3c:
    goto code_r0x000141b6d70c;
  case (code)0x3e:
    *(int *)((longlong)unaff_RBP + 0x50ce60525) =
         *(int *)((longlong)unaff_RBP + 0x50ce60525) + 0x43398148;
    pfStack_68[-2] = 22.855816;
    pfStack_68[-1] = 1.4013e-45;
    uVar17 = pdb_142db90e0(pfStack_68 + 10);
    goto LAB_141b6d8b6;
  case (code)0x3f:
    goto code_r0x000141b6d99a;
  case (code)0x40:
    goto code_r0x000141b6d97f;
  case (code)0x41:
    goto code_r0x000141b6d985;
  case (code)0x42:
    goto code_r0x000141b6d979;
  case (code)0x43:
    goto code_r0x000141b6daa2;
  case (code)0x44:
    goto code_r0x000141b6d9a9;
  case (code)0x45:
    (&UNK_1433980d5)[uVar17] = (&UNK_1433980d5)[uVar17] & 0x48;
    uVar17 = (ulonglong)((uint)fVar77 | 0x182a8ad);
    goto code_r0x000141b6d993;
  case (code)0x46:
  case (code)0x47:
  case (code)0x48:
  case (code)0x49:
  case (code)0x4a:
  case (code)0x4b:
  case (code)0x4c:
    *(byte *)param_2 = (char)*(code *)param_2 + 0xb8;
    *(byte *)UNRECOVERED_JUMPTABLE_01 = (char)*(code *)UNRECOVERED_JUMPTABLE_01 + bVar9;
    pcVar19 = (char *)(ulonglong)uRam282444c748fffffd;
    goto code_r0x000141b6d8de;
  case (code)0x4d:
    pcVar19 = (char *)((ulonglong)UNRECOVERED_JUMPTABLE_01 & 0xffffffffffffff28);
code_r0x000141b6d8de:
    *pcVar19 = *pcVar19 - (char)pcVar19;
    *pcVar19 = *pcVar19 + (char)pcVar19;
LAB_141b6d67a:
    *(undefined8 *)((longlong)ppfVar30 + -8) = 0x141b6d68a;
    uVar17 = pdb_142d84ef0(param_2,(undefined1 *)((longlong)ppfVar30 + 0x28));
LAB_141b6d8b6:
    *(ulonglong *)(param_1 + 2) = uVar17;
    *param_1 = 9.80909e-45;
    return param_1;
  case (code)0x4e:
    if (fVar77 != 0.0) {
      UNRECOVERED_JUMPTABLE_00 = param_2;
      if (param_1 == (float *)0xa) {
        bVar73 = *(short *)(param_2 + 2) == 0x746e && *(ulonglong *)param_2 == 0x696150746e616c50;
        goto code_r0x000141b6e741;
      }
      goto LAB_141b6e77a;
    }
    *(code *)((longlong)unaff_RBX + 1) = (code)0xd;
    goto LAB_141b6e809;
  case (code)0x4f:
  case (code)0x50:
  case (code)0x52:
    goto code_r0x000141b6e7da;
  case (code)0x51:
    _UNK_143398148 = _UNK_143398148 + 0x43398148;
    unaff_RBX = UNRECOVERED_JUMPTABLE_01;
    goto LAB_141b6e809;
  case (code)0x53:
    cVar10 = UNK_143398151 + 'H';
    _UNK_143398151 = CONCAT31(_UNK_143398152,cVar10);
    bVar73 = cVar10 == '\0';
    ppfVar41 = (float **)(unaff_RBP + 2);
    unaff_RBX = UNRECOVERED_JUMPTABLE_01;
    param_1 = pfVar70;
code_r0x000141b6e741:
    UNRECOVERED_JUMPTABLE_00 = param_2;
    ppfVar42 = ppfVar41;
    if (!bVar73) goto LAB_141b6e77a;
    *(code *)((longlong)unaff_RBX + 1) = (code)0xe;
LAB_141b6e809:
    UNRECOVERED_JUMPTABLE = (float *)0x0;
    goto LAB_141b6e80b;
  case (code)0x54:
code_r0x000141b6e786:
    cVar8 = (code)in((short)param_2);
    *(code *)pfVar69 = cVar8;
    UNRECOVERED_JUMPTABLE_00 = param_2;
    ppfVar43 = &pfStack_68;
    if (!bVar73) {
      return UNRECOVERED_JUMPTABLE_01;
    }
code_r0x000141b6e780:
    pfVar24 = UNRECOVERED_JUMPTABLE_01;
    if (UNRECOVERED_JUMPTABLE_00[2] == 4.5448224e+30 &&
        *(ulonglong *)UNRECOVERED_JUMPTABLE_00 == 0x756c43656e6f6c43) {
      *(code *)((longlong)UNRECOVERED_JUMPTABLE_01 + 1) = (code)0x11;
      unaff_RBX = UNRECOVERED_JUMPTABLE_01;
      goto LAB_141b6e809;
    }
    goto code_r0x000141b6e7da;
  case (code)0x55:
    UNRECOVERED_JUMPTABLE_00 = unaff_RBX;
    pfVar70 = param_1;
    unaff_RBX = (float *)((ulonglong)UNRECOVERED_JUMPTABLE_01 & 0xffffffff);
code_r0x000141b6e762:
    iVar11 = pub_142e32750(UNRECOVERED_JUMPTABLE);
    ppfVar42 = &pfStack_68;
    param_1 = pfVar70;
    if (iVar11 == 0) {
      *(code *)((longlong)unaff_RBX + 1) = (code)0xf;
      goto LAB_141b6e809;
    }
LAB_141b6e77a:
    UNRECOVERED_JUMPTABLE_01 = unaff_RBX;
    ppfVar43 = ppfVar42;
    pfVar24 = unaff_RBX;
    if (param_1 == (float *)0xc) goto code_r0x000141b6e780;
code_r0x000141b6e7da:
    unaff_RBX = pfVar24;
    *(undefined8 *)((longlong)ppfVar43 + -8) = 0x141b6e7df;
    uVar17 = pdb_142d8f140(UNRECOVERED_JUMPTABLE_00);
    *(ulonglong *)(unaff_RBX + 2) = uVar17;
    UNRECOVERED_JUMPTABLE = (float *)0x1;
LAB_141b6e80b:
    *(code *)unaff_RBX = SUB81(UNRECOVERED_JUMPTABLE,0);
code_r0x000141b6e813:
    return unaff_RBX;
  case (code)0x56:
    goto code_r0x000141b6e81e;
  case (code)0x57:
    goto code_r0x000141b6e840;
  case (code)0x58:
    *unaff_RBX = (float)((int)*unaff_RBX + (int)fVar77);
    goto code_r0x000141b6e892;
  case (code)0x59:
    goto code_r0x000141b6e873;
  case (code)0x5a:
    if (bVar73) {
      return (float *)0x0;
    }
    goto code_r0x000141b6e8ce;
  case (code)0x5b:
    goto code_r0x000141b6e85e;
  case (code)0x5c:
    goto code_r0x000141b6e902;
  case (code)0x5d:
  case (code)0x5f:
  case (code)0x60:
  case (code)0x66:
  case (code)0x68:
  case (code)0x69:
  case (code)0x6a:
  case (code)0x6b:
  case (code)0x6c:
  case (code)0x6d:
code_r0x000141b6ea57:
    unaff_RBX = UNRECOVERED_JUMPTABLE_01;
    if ((float *)0x12 < pfVar70) goto LAB_141b6ebc7;
    goto code_r0x000141b6ea61;
  case (code)0x5e:
    goto code_r0x000141b6e96d;
  case (code)0x61:
    return UNRECOVERED_JUMPTABLE_01;
  case (code)0x62:
    iRam0000000199700fd6 = iRam0000000199700fd6 + (int)fVar77;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (code)0x63:
    goto code_r0x000141b6ea08;
  case (code)0x64:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (code)0x65:
code_r0x000141b6e98c:
    ppfVar48 = &pfStack_68;
    if (bVar73) {
      *(code *)((longlong)UNRECOVERED_JUMPTABLE_01 + 1) = (code)0x0;
      goto code_r0x000141b6ea0e;
    }
    goto LAB_141b6ea18;
  case (code)0x67:
    ppfVar48 = (float **)auStack_60;
    UNRECOVERED_JUMPTABLE_00 = (float *)0x657a6f646c6c7542;
    UNRECOVERED_JUMPTABLE = param_2;
    goto code_r0x000141b6e9c0;
  case (code)0x6e:
    goto code_r0x000141b6ea2e;
  case (code)0x6f:
    goto code_r0x000141b6ea40;
  case (code)0x70:
    goto code_r0x000141b6eada;
  case (code)0x71:
code_r0x000141b6eaa3:
    *(byte *)UNRECOVERED_JUMPTABLE_00 =
         (byte)*(code *)UNRECOVERED_JUMPTABLE_00 & (byte)UNRECOVERED_JUMPTABLE_01;
code_r0x000141b6eaa5:
    *(char *)UNRECOVERED_JUMPTABLE_01 =
         (char)*(code *)UNRECOVERED_JUMPTABLE_01 + (char)UNRECOVERED_JUMPTABLE_01;
    *(code *)((longlong)UNRECOVERED_JUMPTABLE_01 + 1) = (code)0x2;
    unaff_RBX = UNRECOVERED_JUMPTABLE_01;
    goto code_r0x000141b6eaac;
  case (code)0x72:
    uVar49 = (ulonglong)_UNK_1433981ab;
    *(undefined8 *)(uVar49 - 8) = 0x42334c65;
    UNRECOVERED_JUMPTABLE = (float *)(ulonglong)(_UNK_143398151 + 0x43398148);
    unaff_00084f00 = '\x13';
    ppfVar50 = (float **)(uVar49 - 0x10);
    unaff_0008ae00 = (undefined1 *)(uVar49 - 0x10);
    puVar32 = (ulonglong *)(uVar49 - 0x10);
    *(float **)(uVar49 - 0x10) = unaff_RBP;
    cVar10 = '\x12';
    do {
      unaff_RBP = unaff_RBP + -2;
      puVar32 = puVar32 + -1;
      *puVar32 = *(ulonglong *)unaff_RBP;
      cVar10 = cVar10 + -1;
    } while ('\0' < cVar10);
    goto code_r0x000141b6eacd;
  case (code)0x73:
    LOCK();
    *(int *)((longlong)param_1 + 1) = (int)&pfStack_68;
    UNLOCK();
    *(byte *)UNRECOVERED_JUMPTABLE_01 = (char)*(code *)UNRECOVERED_JUMPTABLE_01 + bVar9;
code_r0x000141b6ea61:
    UNRECOVERED_JUMPTABLE = (float *)&UNK_1433982b8;
    goto code_r0x000141b6ea68;
  case (code)0x74:
    if (!bVar72) {
      return UNRECOVERED_JUMPTABLE_01;
    }
    if (bVar73) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    bVar73 = ((uint)param_2 | 0x43398148) == 0;
    goto code_r0x000141b6eb16;
  case (code)0x75:
    goto code_r0x000141b6eb59;
  case (code)0x76:
  case (code)0x77:
  case (code)0x78:
  case (code)0x7c:
    goto code_r0x000141b6edd2;
  case (code)0x79:
    UNRECOVERED_JUMPTABLE_01 = (float *)(ulonglong)((uint)fVar77 >> 0xc);
    if (((uint)fVar77 >> 0xb & 1) != 0) {
      UNRECOVERED_JUMPTABLE_01 = (float *)(**(code **)(UNRECOVERED_JUMPTABLE_01 + 0x123120d2))();
      return UNRECOVERED_JUMPTABLE_01;
    }
    pcVar71 = (code *)((longlong)UNRECOVERED_JUMPTABLE_01 + -0x75);
    *pcVar71 = (code)((byte)*pcVar71 >> 1 | (char)*pcVar71 << 7);
    fRam0000000100002600 = (float)((uint)fRam0000000100002600 | 0x43398148);
  case (code)0x7a:
code_r0x000141b6ed97:
    UNRECOVERED_JUMPTABLE_00 = UNRECOVERED_JUMPTABLE_01;
    goto pdb_140f679a0;
  case (code)0x7b:
    UNRECOVERED_JUMPTABLE_01 = (float *)0x12;
    ppfVar52 = &pfStack_68;
    goto code_r0x000141b6edd2;
  case (code)0x7d:
    goto pdb_140f679a0;
  case (code)0x7e:
    goto code_r0x000141b6ef72;
  case (code)0x7f:
  case (code)0x82:
  case (code)0x84:
  case (code)0x85:
  case (code)0x86:
  case (code)0x87:
  case (code)0x88:
  case (code)0x89:
  case (code)0x8a:
    param_2 = (float *)(ulonglong)(uint)unaff_RBP[-4];
    ppfVar55 = &pfStack_68;
    goto code_r0x000141b6ef4d;
  case (code)0x80:
    unaff_RBP[0x10] = (float)((int)unaff_RBP[0x10] << 1);
    cVar8 = (code)(&UNK_143398150)[uVar17];
code_r0x000141b6eefc:
    unaff_RBX = (float *)(ulonglong)(byte)cVar8;
    ppfVar55 = &pfStack_68;
    if (unaff_RBX < (float *)0x7) {
      UNRECOVERED_JUMPTABLE = (float *)&UNK_143398320;
      ppfVar56 = &pfStack_68;
      goto code_r0x000141b6ef0d;
    }
    goto code_r0x000141b6efb0;
  case (code)0x81:
    goto code_r0x000141b6ef96;
  case (code)0x83:
    goto code_r0x0001409a45e0;
  case (code)0x8b:
    bVar73 = (uint)param_2 == 0;
    unaff_RBX = UNRECOVERED_JUMPTABLE_01;
    ppfVar56 = &pfStack_68;
    goto code_r0x000141b6ef1d;
  case (code)0x8c:
  case (code)0x8d:
    param_2 = UNRECOVERED_JUMPTABLE;
    goto code_r0x000141b6ee7a;
  case (code)0x8e:
    goto code_r0x000141b6ef32;
  case (code)0x8f:
  case (code)0x90:
  case (code)0x91:
    pcVar71 = (code *)swi(3);
    UNRECOVERED_JUMPTABLE_01 = (float *)(*pcVar71)();
    return UNRECOVERED_JUMPTABLE_01;
  case (code)0x92:
    (&UNK_1433980d1)[uVar17] = (&UNK_1433980d1)[uVar17] + 'H';
    pcVar71 = (code *)swi(1);
    UNRECOVERED_JUMPTABLE_01 = (float *)(*pcVar71)();
    return UNRECOVERED_JUMPTABLE_01;
  case (code)0x93:
code_r0x000141b6f675:
    *(char *)UNRECOVERED_JUMPTABLE_01 =
         (char)*(code *)UNRECOVERED_JUMPTABLE_01 + (char)UNRECOVERED_JUMPTABLE_01;
    *(code *)((longlong)UNRECOVERED_JUMPTABLE_01 + -0x75) =
         (code)((char)*(code *)((longlong)UNRECOVERED_JUMPTABLE_01 + -0x75) +
               (char)UNRECOVERED_JUMPTABLE_00);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (code)0x94:
    goto code_r0x000141b6f64f;
  case (code)0x95:
    goto code_r0x000141b6f662;
  case (code)0x96:
    goto code_r0x000141b6f63c;
  case (code)0x97:
    (&UNK_1433980cd)[uVar17] = (&UNK_1433980cd)[uVar17] + 'H' + bVar72;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (code)0x98:
    ppfVar56 = &pfStack_68;
    goto code_r0x000141b6f73a;
  case (code)0x99:
    goto code_r0x000141b6f8ae;
  case (code)0x9a:
    UNRECOVERED_JUMPTABLE_00 = param_2;
    ppfVar31 = &pfStack_68;
    goto code_r0x000141b6f802;
  case (code)0x9b:
code_r0x000141b6f847:
    UNRECOVERED_JUMPTABLE_00 = param_2;
    ppfVar65 = &pfStack_68;
    unaff_XMM8_Dc = unaff_XMM10_Da;
    unaff_XMM8_Dd = unaff_XMM10_Db;
    unaff_XMM9_Da = unaff_XMM10_Dd;
    goto code_r0x000141b6f84b;
  case (code)0x9c:
    goto code_r0x000141b6f78f;
  case (code)0x9d:
    *(longlong *)((longlong)param_1 + 0x36) = *(longlong *)((longlong)param_1 + 0x36) + unaff_R14;
    goto code_r0x000141b6f93f;
  case (code)0x9e:
code_r0x000141b6f6dc:
    pcVar71 = (code *)swi(1);
    UNRECOVERED_JUMPTABLE_01 = (float *)(*pcVar71)();
    return UNRECOVERED_JUMPTABLE_01;
  case (code)0x9f:
    ppfVar68 = &pfStack_68;
    goto code_r0x000141b6f8fd;
  case (code)0xa0:
    goto code_r0x000141b6f77e;
  case (code)0xa1:
    goto code_r0x000141b6f6e4;
  case (code)0xa2:
    piVar20 = (int *)(&UNK_1433980d3 + uVar17);
    iVar11 = *piVar20;
    *piVar20 = *piVar20 + 0x43398148;
    if (*piVar20 == 0 || SCARRY4(iVar11,0x43398148) != *piVar20 < 0) {
      *UNRECOVERED_JUMPTABLE_01 = (float)((int)*UNRECOVERED_JUMPTABLE_01 + (int)fVar77);
      *(byte *)UNRECOVERED_JUMPTABLE_01 = (char)*(code *)UNRECOVERED_JUMPTABLE_01 + bVar9;
      ppfVar64 = &pfStack_68;
      goto code_r0x000141b6f78f;
    }
    goto code_r0x000141b6f67a;
  case (code)0xa3:
    goto code_r0x000141b6f8f5;
  }
  return param_1;
}

