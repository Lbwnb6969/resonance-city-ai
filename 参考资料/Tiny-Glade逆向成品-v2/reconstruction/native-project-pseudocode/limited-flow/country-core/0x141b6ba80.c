// VA 0x141b6ba80, PDB extent 5698 bytes
// country_core::systems::mode_manager::_::impl$0::serialize<ref_mut$<serde_json::ser::Serializer<ref_mut$<alloc::vec::Vec<u8,alloc::alloc::Global> >,serde_json::ser::PrettyFormatter> > >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/mode_manager.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x000141b6f87b) overlaps instruction at (ram,0x000141b6f879)
    */
/* WARNING: Removing unreachable block (ram,0x000141b6e8ae) */
/* WARNING: Removing unreachable block (ram,0x000141b6e8b0) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::systems::mode_manager::_::impl$0::serialize<ref_mut$<serde_json::ser::Serializer<ref_mut$<alloc::vec::Vec<u8,alloc::alloc::Global>
   >,serde_json::ser::PrettyFormatter> > >
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/mode_manager.rs
   Extent: 5698 */

float * pdb_141b6ba80(float *UNRECOVERED_JUMPTABLE,float *param_2,float *param_3,code *param_4)

{
  uint *puVar1;
  int *piVar2;
  ulonglong uVar3;
  byte *pbVar4;
  ulonglong uVar5;
  undefined1 auVar6 [16];
  undefined3 uVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  undefined8 *puVar12;
  undefined1 *puVar13;
  undefined1 *puVar14;
  undefined1 *puVar15;
  undefined1 *puVar16;
  undefined1 *puVar17;
  undefined1 *puVar18;
  undefined1 *puVar19;
  code cVar20;
  byte bVar21;
  char cVar22;
  int iVar23;
  code cVar29;
  undefined8 uVar24;
  ulonglong uVar25;
  float *pfVar26;
  char *pcVar27;
  uint7 uVar30;
  float *extraout_RAX;
  float *extraout_RAX_00;
  undefined7 uVar31;
  float *pfVar28;
  byte bVar32;
  byte bVar33;
  float fVar35;
  float *pfVar37;
  undefined2 uVar38;
  float *arg1;
  float *pfVar39;
  byte bVar40;
  char cVar43;
  float *unaff_RBX;
  ulonglong uVar41;
  longlong lVar42;
  byte *pbVar44;
  undefined1 *puVar45;
  undefined8 *puVar46;
  undefined1 *puVar47;
  undefined1 *puVar48;
  ulonglong *puVar49;
  undefined8 *puVar50;
  undefined1 *puVar51;
  undefined8 *puVar52;
  undefined8 *puVar53;
  undefined8 *puVar54;
  undefined8 *puVar55;
  float *pfVar56;
  undefined8 *puVar57;
  undefined1 *puVar58;
  longlong *plVar59;
  undefined1 *puVar60;
  longlong *plVar61;
  undefined8 *puVar62;
  float *unaff_RBP;
  float *pfVar63;
  undefined8 unaff_RSI;
  float *unaff_RDI;
  longlong *plVar64;
  float *pfVar65;
  code *pcVar66;
  undefined *puVar67;
  uint uVar68;
  ulonglong in_R10;
  float *in_R11;
  longlong unaff_R12;
  float *unaff_R13;
  byte bVar69;
  longlong unaff_R14;
  longlong lVar70;
  undefined8 *unaff_R15;
  longlong in_FS_OFFSET;
  longlong unaff_GS_OFFSET;
  bool bVar71;
  bool bVar72;
  bool bVar73;
  bool bVar74;
  bool bVar75;
  float10 in_ST0;
  float fVar76;
  float fVar77;
  undefined1 in_XMM0 [16];
  undefined8 extraout_XMM0_Qb;
  undefined8 extraout_XMM0_Qb_00;
  undefined8 extraout_XMM0_Qb_01;
  undefined8 extraout_XMM0_Qb_02;
  undefined8 extraout_XMM0_Qb_03;
  undefined8 extraout_XMM0_Qb_04;
  undefined8 extraout_XMM0_Qb_05;
  undefined8 extraout_XMM0_Qb_06;
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  undefined1 auVar82 [16];
  undefined8 extraout_XMM0_Qb_07;
  char in_XMM1_Ba;
  undefined1 uVar83;
  char in_XMM1_Bb;
  char cVar84;
  undefined1 uVar85;
  char in_XMM1_Bc;
  char cVar86;
  undefined1 uVar87;
  char in_XMM1_Bd;
  char cVar88;
  undefined1 uVar89;
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
  undefined4 unaff_XMM9_Db;
  undefined4 unaff_XMM9_Dc;
  undefined4 unaff_XMM9_Dd;
  float unaff_XMM10_Da;
  float unaff_XMM10_Db;
  undefined4 unaff_XMM10_Dc;
  undefined4 unaff_XMM10_Dd;
  undefined1 unaff_XMM11 [16];
  float unaff_XMM12_Da;
  undefined4 unaff_XMM12_Db;
  undefined4 unaff_XMM12_Dc;
  undefined4 unaff_XMM12_Dd;
  undefined4 unaff_XMM13_Da;
  undefined4 unaff_XMM13_Db;
  undefined4 unaff_XMM13_Dc;
  undefined4 unaff_XMM13_Dd;
  undefined4 unaff_XMM14_Da;
  undefined4 unaff_XMM14_Db;
  undefined4 unaff_XMM14_Dc;
  undefined4 unaff_XMM14_Dd;
  undefined4 unaff_XMM15_Da;
  undefined4 unaff_XMM15_Db;
  undefined4 unaff_XMM15_Dc;
  undefined4 unaff_XMM15_Dd;
  byte abStack_3bbb [57];
  undefined1 auStack_3b82 [14930];
  undefined1 *puStack_130;
  ulonglong uStack_d8;
  undefined1 auStack_c8 [8];
  undefined1 auStack_c0 [24];
  undefined *puStack_a8;
  undefined2 uStack_9c;
  undefined2 uStack_9a;
  byte bStack_98;
  undefined2 uStack_97;
  undefined1 uStack_95;
  undefined1 uStack_94;
  float *pfStack_90;
  undefined1 auStack_88 [24];
  char cStack_70;
  undefined4 uStack_6f;
  undefined3 uStack_6b;
  undefined *apuStack_60 [2];
  byte bStack_50;
  undefined4 uStack_4f;
  undefined3 uStack_4b;
  float *pfStack_48;
  uint uVar34;
  undefined1 *puVar36;
  
  uVar7 = uStack_6b;
  cVar22 = cRam840f484afe000002;
  fVar76 = unaff_XMM11._0_4_;
  puVar52 = (undefined8 *)auStack_c8;
  puVar58 = auStack_c8;
  puVar48 = auStack_c8;
  pbVar44 = auStack_c8;
  puVar45 = auStack_c8;
  puVar46 = (undefined8 *)auStack_c8;
  pfVar56 = (float *)auStack_c8;
  puVar47 = auStack_c8;
  puVar36 = auStack_c8;
  arg1 = (float *)&UNK_1433980c8;
  uVar25 = (ulonglong)*(int *)(&UNK_1433980c8 + (ulonglong)(byte)*(code *)UNRECOVERED_JUMPTABLE * 4)
  ;
  bVar71 = 0xfffffffebcc67f37 < uVar25;
  pfVar26 = (float *)(&UNK_1433980c8 + uVar25);
  bVar72 = pfVar26 == (float *)0x0;
  bVar21 = (byte)pfVar26;
  bVar33 = (byte)((ulonglong)pfVar26 >> 8);
  uVar68 = (uint)pfVar26;
  uVar31 = (undefined7)((ulonglong)pfVar26 >> 8);
  uVar34 = (uint)UNRECOVERED_JUMPTABLE;
  bVar32 = (byte)UNRECOVERED_JUMPTABLE;
  bVar69 = (byte)unaff_R14;
  bVar40 = (byte)unaff_RBX;
  cVar84 = (char)((uint)unaff_XMM9_Da >> 8);
  cVar86 = (char)((uint)unaff_XMM9_Da >> 0x10);
  cVar88 = (char)((uint)unaff_XMM9_Da >> 0x18);
  uStack_6b = (undefined3)((uint)_uStack_94 >> 8);
  pfVar28 = pfVar26;
  pfVar37 = UNRECOVERED_JUMPTABLE;
  pfVar39 = arg1;
  plVar64 = (longlong *)auStack_c8;
  plVar59 = (longlong *)auStack_c8;
  puVar8 = auStack_c8;
  puVar9 = auStack_c8;
  puVar10 = auStack_c8;
  puVar11 = auStack_c8;
  puVar50 = (undefined8 *)auStack_c8;
  puVar12 = (undefined8 *)auStack_c8;
  puVar53 = (undefined8 *)auStack_c8;
  puVar13 = auStack_c8;
  puVar14 = auStack_c8;
  puVar15 = auStack_c8;
  puVar60 = auStack_c8;
  puVar51 = auStack_c8;
  puVar16 = auStack_c8;
  puVar17 = auStack_c8;
  puVar18 = auStack_c8;
  puVar19 = auStack_c8;
  pfVar65 = unaff_RDI;
  pfVar63 = unaff_RBP;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(code *)UNRECOVERED_JUMPTABLE) {
  case (code)0x0:
    plVar64 = *(longlong **)param_2;
    uVar25 = *(ulonglong *)(param_2 + 6) + 1;
    *(ulonglong *)(param_2 + 6) = uVar25;
    *(code *)(param_2 + 8) = (code)0x0;
    lVar42 = plVar64[2];
    if (*plVar64 == lVar42) {
      puStack_a8 = (undefined *)0x1;
      pdb_142d7f1b0(plVar64,lVar42,1,1);
      lVar42 = plVar64[2];
    }
    *(undefined1 *)(plVar64[1] + lVar42) = 0x7b;
    lVar42 = lVar42 + 1;
    plVar64[2] = lVar42;
    if (*plVar64 == lVar42) {
      puStack_a8 = (undefined *)0x1;
      pdb_142d7f1b0(plVar64,lVar42,1,1);
      lVar42 = plVar64[2];
    }
    unaff_RDI = param_2 + 2;
    *(undefined1 *)(plVar64[1] + lVar42) = 10;
    lVar42 = lVar42 + 1;
    plVar64[2] = lVar42;
    if (uVar25 != 0) {
      uVar41 = *(ulonglong *)(param_2 + 2);
      uVar3 = *(ulonglong *)(param_2 + 4);
      do {
        if ((ulonglong)(*plVar64 - lVar42) < uVar3) {
          puStack_a8 = (undefined *)0x1;
          pdb_142d7f1b0(plVar64,lVar42,uVar3,1);
          lVar42 = plVar64[2];
code_r0x000141b6c3c0:
          pub_142e32760(plVar64[1] + lVar42,uVar41,uVar3);
        }
        else if (uVar3 != 0) goto code_r0x000141b6c3c0;
        lVar42 = lVar42 + uVar3;
        plVar64[2] = lVar42;
        uVar25 = uVar25 - 1;
      } while (uVar25 != 0);
    }
    param_3 = (float *)&UNK_143397a80;
    unaff_R13 = UNRECOVERED_JUMPTABLE;
    goto code_r0x000141b6c3f7;
  case (code)0x1:
    cVar20 = *(code *)((longlong)UNRECOVERED_JUMPTABLE + 1);
    plVar64 = *(longlong **)param_2;
    uVar25 = *(ulonglong *)(param_2 + 6) + 1;
    *(ulonglong *)(param_2 + 6) = uVar25;
    *(code *)(param_2 + 8) = (code)0x0;
    lVar42 = plVar64[2];
    uStack_6b = uVar7;
    if (*plVar64 == lVar42) {
      puStack_a8 = (undefined *)0x1;
      pdb_142d7f1b0(plVar64,lVar42,1,1);
      lVar42 = plVar64[2];
    }
    *(undefined1 *)(plVar64[1] + lVar42) = 0x7b;
    lVar42 = lVar42 + 1;
    plVar64[2] = lVar42;
    if (*plVar64 == lVar42) {
      puStack_a8 = (undefined *)0x1;
      pdb_142d7f1b0(plVar64,lVar42,1,1);
      lVar42 = plVar64[2];
    }
    *(undefined1 *)(plVar64[1] + lVar42) = 10;
    lVar42 = lVar42 + 1;
    plVar64[2] = lVar42;
    if (uVar25 != 0) {
      uVar41 = *(ulonglong *)(param_2 + 2);
      uVar3 = *(ulonglong *)(param_2 + 4);
      do {
        if ((ulonglong)(*plVar64 - lVar42) < uVar3) {
          puStack_a8 = (undefined *)0x1;
          pdb_142d7f1b0(plVar64,lVar42,uVar3,1);
          lVar42 = plVar64[2];
code_r0x000141b6c6e0:
          pub_142e32760(plVar64[1] + lVar42,uVar41,uVar3);
        }
        else if (uVar3 != 0) goto code_r0x000141b6c6e0;
        lVar42 = lVar42 + uVar3;
        plVar64[2] = lVar42;
        uVar25 = uVar25 - 1;
      } while (uVar25 != 0);
    }
    lVar42 = pdb_14054e5c0(param_2,param_2 + 2,&UNK_143397a87,4);
    if (lVar42 == 0) {
      plVar64 = *(longlong **)param_2;
      lVar42 = plVar64[2];
      if ((ulonglong)(*plVar64 - lVar42) < 2) {
        puStack_a8 = (undefined *)0x1;
        pdb_142d7f1b0(plVar64,lVar42,2,1);
        lVar42 = plVar64[2];
      }
      *(undefined2 *)(plVar64[1] + lVar42) = 0x203a;
      plVar64[2] = lVar42 + 2;
      if (cVar20 == (code)0x0) {
        puVar67 = &UNK_143397c28;
        uVar24 = 8;
      }
      else if (cVar20 == (code)0x1) {
        puVar67 = &UNK_143397c30;
        uVar24 = 6;
      }
      else {
        puVar67 = &UNK_143397c36;
        uVar24 = 9;
      }
      lVar42 = pdb_14054e5c0(param_2,param_2 + 2,puVar67,uVar24);
      if (lVar42 == 0) {
        *(code *)(param_2 + 8) = (code)0x1;
        plVar64 = *(longlong **)param_2;
        uVar25 = *(ulonglong *)(param_2 + 6) - 1;
        *(ulonglong *)(param_2 + 6) = uVar25;
        lVar42 = plVar64[2];
        if (*plVar64 == lVar42) {
          puStack_a8 = (undefined *)0x1;
          pdb_142d7f1b0(plVar64,lVar42,1,1);
          lVar42 = plVar64[2];
        }
        *(undefined1 *)(plVar64[1] + lVar42) = 10;
        lVar42 = lVar42 + 1;
        plVar64[2] = lVar42;
        if (uVar25 != 0) {
          uVar41 = *(ulonglong *)(param_2 + 2);
          uVar3 = *(ulonglong *)(param_2 + 4);
          do {
            if ((ulonglong)(*plVar64 - lVar42) < uVar3) {
              puStack_a8 = (undefined *)0x1;
              pdb_142d7f1b0(plVar64,lVar42,uVar3,1);
              lVar42 = plVar64[2];
code_r0x000141b6ca30:
              pub_142e32760(plVar64[1] + lVar42,uVar41,uVar3);
            }
            else if (uVar3 != 0) goto code_r0x000141b6ca30;
            lVar42 = lVar42 + uVar3;
            plVar64[2] = lVar42;
            uVar25 = uVar25 - 1;
          } while (uVar25 != 0);
        }
        goto code_r0x000141b6cc20;
      }
    }
    goto code_r0x000141b6ca64;
  case (code)0x2:
    puVar67 = &UNK_143397a8b;
    goto code_r0x000141b6bc37;
  case (code)0x3:
    uVar25 = *(ulonglong *)(UNRECOVERED_JUMPTABLE + 2);
    plVar64 = *(longlong **)param_2;
    uVar41 = *(ulonglong *)(param_2 + 6) + 1;
    *(ulonglong *)(param_2 + 6) = uVar41;
    *(code *)(param_2 + 8) = (code)0x0;
    lVar42 = plVar64[2];
    uStack_6b = uVar7;
    if (*plVar64 == lVar42) {
      puStack_a8 = (undefined *)0x1;
      pdb_142d7f1b0(plVar64,lVar42,1,1);
      lVar42 = plVar64[2];
    }
    *(undefined1 *)(plVar64[1] + lVar42) = 0x7b;
    lVar42 = lVar42 + 1;
    plVar64[2] = lVar42;
    if (*plVar64 == lVar42) {
      puStack_a8 = (undefined *)0x1;
      pdb_142d7f1b0(plVar64,lVar42,1,1);
      lVar42 = plVar64[2];
    }
    *(undefined1 *)(plVar64[1] + lVar42) = 10;
    lVar42 = lVar42 + 1;
    plVar64[2] = lVar42;
    if (uVar41 != 0) {
      uVar3 = *(ulonglong *)(param_2 + 2);
      uVar5 = *(ulonglong *)(param_2 + 4);
      do {
        if ((ulonglong)(*plVar64 - lVar42) < uVar5) {
          puStack_a8 = (undefined *)0x1;
          pdb_142d7f1b0(plVar64,lVar42,uVar5,1);
          lVar42 = plVar64[2];
code_r0x000141b6c1c0:
          pub_142e32760(plVar64[1] + lVar42,uVar3,uVar5);
        }
        else if (uVar5 != 0) goto code_r0x000141b6c1c0;
        lVar42 = lVar42 + uVar5;
        plVar64[2] = lVar42;
        uVar41 = uVar41 - 1;
      } while (uVar41 != 0);
    }
    lVar42 = pdb_14054e5c0(param_2,param_2 + 2,&UNK_143397a8f,0xb);
    if (lVar42 != 0) goto code_r0x000141b6ca64;
    plVar64 = *(longlong **)param_2;
    lVar42 = plVar64[2];
    if ((ulonglong)(*plVar64 - lVar42) < 2) {
      puStack_a8 = (undefined *)0x1;
      pdb_142d7f1b0(plVar64,lVar42,2,1);
      lVar42 = plVar64[2];
    }
    *(undefined2 *)(plVar64[1] + lVar42) = 0x203a;
    plVar64[2] = lVar42 + 2;
    lVar42 = 0x14;
    uVar41 = uVar25;
    if (9999 < uVar25) {
      do {
        uVar25 = uVar41 / 10000;
        iVar23 = (int)uVar41 + (int)uVar25 * -10000;
        uVar68 = (uint)(iVar23 * 0x147b) >> 0x13;
        *(undefined2 *)((longlong)&uStack_9c + lVar42) =
             *(undefined2 *)(&UNK_143397e60 + (ulonglong)uVar68 * 2);
        *(undefined2 *)((longlong)&uStack_9a + lVar42) =
             *(undefined2 *)(&UNK_143397e60 + (ulonglong)(iVar23 + uVar68 * -100 & 0xffff) * 2);
        lVar42 = lVar42 + -4;
        bVar72 = 99999999 < uVar41;
        uVar41 = uVar25;
      } while (bVar72);
    }
    if (99 < uVar25) {
      iVar23 = (int)uVar25;
      uVar68 = ((uint)(uVar25 >> 2) & 0xffff) * 0x147b >> 0x11;
      uVar25 = (ulonglong)uVar68;
      *(undefined2 *)((longlong)&uStack_9a + lVar42) =
           *(undefined2 *)(&UNK_143397e60 + (ulonglong)(iVar23 + uVar68 * -100 & 0xffff) * 2);
      lVar42 = lVar42 + -2;
    }
    plVar64 = *(longlong **)param_2;
    if (uVar25 < 10) {
      *(byte *)((longlong)&uStack_9a + lVar42 + 1) = (byte)uVar25 | 0x30;
      lVar42 = lVar42 + -1;
    }
    else {
      *(undefined2 *)((longlong)&uStack_9a + lVar42) = *(undefined2 *)(&UNK_143397e60 + uVar25 * 2);
      lVar42 = lVar42 + -2;
    }
    uVar25 = 0x14 - lVar42;
    lVar70 = plVar64[2];
    if ((ulonglong)(*plVar64 - lVar70) < uVar25) {
      puStack_a8 = (undefined *)0x1;
      pdb_142d7f1b0(plVar64,lVar70,uVar25,1);
      lVar70 = plVar64[2];
code_r0x000141b6c339:
      pub_142e32760(plVar64[1] + lVar70,&bStack_98 + lVar42,uVar25);
    }
    else if (lVar42 != 0x14) goto code_r0x000141b6c339;
    plVar64[2] = lVar70 + uVar25;
    *(code *)(param_2 + 8) = (code)0x1;
    plVar64 = *(longlong **)param_2;
    uVar25 = *(ulonglong *)(param_2 + 6) - 1;
    *(ulonglong *)(param_2 + 6) = uVar25;
    lVar42 = plVar64[2];
    if (*plVar64 == lVar42) {
      puStack_a8 = (undefined *)0x1;
      pdb_142d7f1b0(plVar64,lVar42,1,1);
      lVar42 = plVar64[2];
    }
    *(undefined1 *)(plVar64[1] + lVar42) = 10;
    lVar42 = lVar42 + 1;
    plVar64[2] = lVar42;
    if (uVar25 != 0) {
      uVar41 = *(ulonglong *)(param_2 + 2);
      uVar3 = *(ulonglong *)(param_2 + 4);
      do {
        if ((ulonglong)(*plVar64 - lVar42) < uVar3) {
          puStack_a8 = (undefined *)0x1;
          pdb_142d7f1b0(plVar64,lVar42,uVar3,1);
          lVar42 = plVar64[2];
code_r0x000141b6c970:
          pub_142e32760(plVar64[1] + lVar42,uVar41,uVar3);
        }
        else if (uVar3 != 0) goto code_r0x000141b6c970;
        lVar42 = lVar42 + uVar3;
        plVar64[2] = lVar42;
        uVar25 = uVar25 - 1;
      } while (uVar25 != 0);
    }
    goto code_r0x000141b6cc20;
  case (code)0x4:
    unaff_RBP = (float *)(ulonglong)(byte)*(code *)((longlong)UNRECOVERED_JUMPTABLE + 1);
    plVar64 = *(longlong **)param_2;
    uVar25 = *(ulonglong *)(param_2 + 6) + 1;
    *(ulonglong *)(param_2 + 6) = uVar25;
    *(code *)(param_2 + 8) = (code)0x0;
    lVar42 = plVar64[2];
    if (*plVar64 == lVar42) {
      puStack_a8 = (undefined *)0x1;
      pdb_142d7f1b0(plVar64,lVar42,1,1);
      lVar42 = plVar64[2];
    }
    *(undefined1 *)(plVar64[1] + lVar42) = 0x7b;
    lVar42 = lVar42 + 1;
    plVar64[2] = lVar42;
    if (*plVar64 == lVar42) {
      puStack_a8 = (undefined *)0x1;
      pdb_142d7f1b0(plVar64,lVar42,1,1);
      lVar42 = plVar64[2];
    }
    *(undefined1 *)(plVar64[1] + lVar42) = 10;
    lVar42 = lVar42 + 1;
    plVar64[2] = lVar42;
    if (uVar25 != 0) {
      uVar41 = *(ulonglong *)(param_2 + 2);
      uVar3 = *(ulonglong *)(param_2 + 4);
      do {
        if ((ulonglong)(*plVar64 - lVar42) < uVar3) {
          puStack_a8 = (undefined *)0x1;
          pdb_142d7f1b0(plVar64,lVar42,uVar3,1);
          lVar42 = plVar64[2];
code_r0x000141b6c060:
          pub_142e32760(plVar64[1] + lVar42,uVar41,uVar3);
        }
        else if (uVar3 != 0) goto code_r0x000141b6c060;
        lVar42 = lVar42 + uVar3;
        plVar64[2] = lVar42;
        uVar25 = uVar25 - 1;
      } while (uVar25 != 0);
    }
    lVar42 = pdb_14054e5c0(param_2,param_2 + 2,&UNK_143397a9a,6);
    if (lVar42 != 0) goto code_r0x000141b6ca64;
    goto code_r0x000141b6c0b1;
  case (code)0x5:
    lVar42 = pdb_14054e5c0(param_2,param_2 + 2,&UNK_143397aa0,7);
    break;
  case (code)0x6:
    plVar64 = *(longlong **)param_2;
    uVar25 = *(ulonglong *)(param_2 + 6) + 1;
    *(ulonglong *)(param_2 + 6) = uVar25;
    *(code *)(param_2 + 8) = (code)0x0;
    lVar42 = plVar64[2];
    uStack_6b = uVar7;
    if (*plVar64 == lVar42) {
      puStack_a8 = (undefined *)0x1;
      pdb_142d7f1b0(plVar64,lVar42,1,1);
      lVar42 = plVar64[2];
    }
    *(undefined1 *)(plVar64[1] + lVar42) = 0x7b;
    lVar42 = lVar42 + 1;
    plVar64[2] = lVar42;
    if (*plVar64 == lVar42) {
      puStack_a8 = (undefined *)0x1;
      pdb_142d7f1b0(plVar64,lVar42,1,1);
      lVar42 = plVar64[2];
    }
    *(undefined1 *)(plVar64[1] + lVar42) = 10;
    lVar42 = lVar42 + 1;
    plVar64[2] = lVar42;
    if (uVar25 != 0) {
      uVar41 = *(ulonglong *)(param_2 + 2);
      uVar3 = *(ulonglong *)(param_2 + 4);
      do {
        if ((ulonglong)(*plVar64 - lVar42) < uVar3) {
          puStack_a8 = (undefined *)0x1;
          pdb_142d7f1b0(plVar64,lVar42,uVar3,1);
          lVar42 = plVar64[2];
code_r0x000141b6c810:
          pub_142e32760(plVar64[1] + lVar42,uVar41,uVar3);
        }
        else if (uVar3 != 0) goto code_r0x000141b6c810;
        lVar42 = lVar42 + uVar3;
        plVar64[2] = lVar42;
        uVar25 = uVar25 - 1;
      } while (uVar25 != 0);
    }
    lVar42 = pdb_14054e5c0(param_2,param_2 + 2,&UNK_143397aa7,9);
    if (lVar42 != 0) goto code_r0x000141b6ca64;
    plVar64 = *(longlong **)param_2;
    lVar42 = plVar64[2];
    if ((ulonglong)(*plVar64 - lVar42) < 2) {
      puStack_a8 = (undefined *)0x1;
      pdb_142d7f1b0(plVar64,lVar42,2,1);
      lVar42 = plVar64[2];
    }
    *(undefined2 *)(plVar64[1] + lVar42) = 0x203a;
    plVar64[2] = lVar42 + 2;
    pfVar28 = (float *)pdb_1417bf6d0(UNRECOVERED_JUMPTABLE + 2,param_2);
    if (pfVar28 != (float *)0x0) {
      return pfVar28;
    }
    *(code *)(param_2 + 8) = (code)0x1;
    plVar64 = *(longlong **)param_2;
    uVar25 = *(ulonglong *)(param_2 + 6) - 1;
    *(ulonglong *)(param_2 + 6) = uVar25;
    lVar42 = plVar64[2];
    if (*plVar64 == lVar42) {
      puStack_a8 = (undefined *)0x1;
      pdb_142d7f1b0(plVar64,lVar42,1,1);
      lVar42 = plVar64[2];
    }
    *(undefined1 *)(plVar64[1] + lVar42) = 10;
    lVar42 = lVar42 + 1;
    plVar64[2] = lVar42;
    if (uVar25 != 0) {
      uVar41 = *(ulonglong *)(param_2 + 2);
      uVar3 = *(ulonglong *)(param_2 + 4);
      do {
        if ((ulonglong)(*plVar64 - lVar42) < uVar3) {
          puStack_a8 = (undefined *)0x1;
          pdb_142d7f1b0(plVar64,lVar42,uVar3,1);
          lVar42 = plVar64[2];
code_r0x000141b6caa0:
          pub_142e32760(plVar64[1] + lVar42,uVar41,uVar3);
        }
        else if (uVar3 != 0) goto code_r0x000141b6caa0;
        lVar42 = lVar42 + uVar3;
        plVar64[2] = lVar42;
        uVar25 = uVar25 - 1;
      } while (uVar25 != 0);
    }
    goto code_r0x000141b6cc20;
  case (code)0x7:
    puVar67 = &UNK_143397ab0;
    goto code_r0x000141b6bcd4;
  case (code)0x8:
    lVar42 = pdb_14054e5c0(param_2,param_2 + 2,&UNK_143397ab5,0xb);
    break;
  case (code)0x9:
    puVar67 = &UNK_143397ac0;
    goto code_r0x000141b6bdaf;
  case (code)0xa:
    puStack_a8 = (undefined *)0x0;
    pdb_141b6a090(&bStack_98,param_2,&UNK_143397ac6,8);
    if (bStack_98 != 2) {
      uStack_4f = CONCAT13(uStack_94,CONCAT12(uStack_95,uStack_97));
      uStack_4b = (undefined3)((uint)_uStack_94 >> 8);
      bStack_50 = bStack_98;
      pfStack_48 = pfStack_90;
      pdb_141b6f580(&bStack_50);
      return (float *)0x0;
    }
    return pfStack_90;
  case (code)0xb:
    puVar67 = &UNK_143397ace;
code_r0x000141b6bcd4:
    lVar42 = pdb_14054e5c0(param_2,param_2 + 2,puVar67,5);
    break;
  case (code)0xc:
    puVar67 = &UNK_143397ad3;
code_r0x000141b6bc37:
    lVar42 = pdb_14054e5c0(param_2,param_2 + 2,puVar67,4);
    break;
  case (code)0xd:
    puVar67 = &UNK_143397ad7;
    goto code_r0x000141b6bdaf;
  case (code)0xe:
    cVar20 = *(code *)((longlong)UNRECOVERED_JUMPTABLE + 1);
    plVar64 = *(longlong **)param_2;
    uVar25 = *(ulonglong *)(param_2 + 6) + 1;
    *(ulonglong *)(param_2 + 6) = uVar25;
    *(code *)(param_2 + 8) = (code)0x0;
    lVar42 = plVar64[2];
    uStack_6b = uVar7;
    if (*plVar64 == lVar42) {
      puStack_a8 = (undefined *)0x1;
      pdb_142d7f1b0(plVar64,lVar42,1,1);
      lVar42 = plVar64[2];
    }
    *(undefined1 *)(plVar64[1] + lVar42) = 0x7b;
    lVar42 = lVar42 + 1;
    plVar64[2] = lVar42;
    if (*plVar64 == lVar42) {
      puStack_a8 = (undefined *)0x1;
      pdb_142d7f1b0(plVar64,lVar42,1,1);
      lVar42 = plVar64[2];
    }
    *(undefined1 *)(plVar64[1] + lVar42) = 10;
    lVar42 = lVar42 + 1;
    plVar64[2] = lVar42;
    if (uVar25 != 0) {
      uVar41 = *(ulonglong *)(param_2 + 2);
      uVar3 = *(ulonglong *)(param_2 + 4);
      do {
        if ((ulonglong)(*plVar64 - lVar42) < uVar3) {
          puStack_a8 = (undefined *)0x1;
          pdb_142d7f1b0(plVar64,lVar42,uVar3,1);
          lVar42 = plVar64[2];
code_r0x000141b6bee0:
          pub_142e32760(plVar64[1] + lVar42,uVar41,uVar3);
        }
        else if (uVar3 != 0) goto code_r0x000141b6bee0;
        lVar42 = lVar42 + uVar3;
        plVar64[2] = lVar42;
        uVar25 = uVar25 - 1;
      } while (uVar25 != 0);
    }
    lVar42 = pdb_14054e5c0(param_2,param_2 + 2,&UNK_143397add,10);
    if (lVar42 != 0) goto code_r0x000141b6ca64;
    plVar64 = *(longlong **)param_2;
    lVar42 = plVar64[2];
    if ((ulonglong)(*plVar64 - lVar42) < 2) {
      puStack_a8 = (undefined *)0x1;
      pdb_142d7f1b0(plVar64,lVar42,2,1);
      lVar42 = plVar64[2];
    }
    *(undefined2 *)(plVar64[1] + lVar42) = 0x203a;
    plVar64[2] = lVar42 + 2;
    plVar64 = *(longlong **)param_2;
    if ((byte)cVar20 < 100) {
      uVar25 = 2;
      if ((byte)cVar20 < 10) goto code_r0x000141b6bf99;
      uStack_97 = *(undefined2 *)(&UNK_143397e60 + (ulonglong)(byte)cVar20 * 2);
      uVar25 = 1;
    }
    else {
      cVar29 = SUB41((uint)(byte)cVar20 + ((uint)(byte)cVar20 + (uint)(byte)cVar20 * 4) * 8 >> 0xc,0
                    );
      uStack_97 = *(undefined2 *)
                   (&UNK_143397e60 + (ulonglong)(byte)((char)cVar20 + (char)cVar29 * -100) * 2);
      uVar25 = 0;
      cVar20 = cVar29;
code_r0x000141b6bf99:
      (&bStack_98)[uVar25] = (byte)cVar20 | 0x30;
    }
    uVar41 = uVar25 ^ 3;
    lVar42 = plVar64[2];
    if ((ulonglong)(*plVar64 - lVar42) < uVar41) {
      puStack_a8 = (undefined *)0x1;
      pdb_142d7f1b0(plVar64,lVar42,uVar41,1);
      lVar42 = plVar64[2];
    }
    pub_142e32760(plVar64[1] + lVar42,&bStack_98 + uVar25,uVar41);
    plVar64[2] = lVar42 + uVar41;
    *(code *)(param_2 + 8) = (code)0x1;
    plVar64 = *(longlong **)param_2;
    uVar25 = *(ulonglong *)(param_2 + 6) - 1;
    *(ulonglong *)(param_2 + 6) = uVar25;
    lVar42 = plVar64[2];
    if (*plVar64 == lVar42) {
      puStack_a8 = (undefined *)0x1;
      pdb_142d7f1b0(plVar64,lVar42,1,1);
      lVar42 = plVar64[2];
    }
    *(undefined1 *)(plVar64[1] + lVar42) = 10;
    lVar42 = lVar42 + 1;
    plVar64[2] = lVar42;
    if (uVar25 != 0) {
      uVar41 = *(ulonglong *)(param_2 + 2);
      uVar3 = *(ulonglong *)(param_2 + 4);
      do {
        if ((ulonglong)(*plVar64 - lVar42) < uVar3) {
          puStack_a8 = (undefined *)0x1;
          pdb_142d7f1b0(plVar64,lVar42,uVar3,1);
          lVar42 = plVar64[2];
code_r0x000141b6c910:
          pub_142e32760(plVar64[1] + lVar42,uVar41,uVar3);
        }
        else if (uVar3 != 0) goto code_r0x000141b6c910;
        lVar42 = lVar42 + uVar3;
        plVar64[2] = lVar42;
        uVar25 = uVar25 - 1;
      } while (uVar25 != 0);
    }
    goto code_r0x000141b6cc20;
  case (code)0xf:
    puVar67 = &UNK_143397ae7;
code_r0x000141b6bdaf:
    lVar42 = pdb_14054e5c0(param_2,param_2 + 2,puVar67,6);
    break;
  case (code)0x10:
    lVar42 = pdb_14054e5c0(param_2,param_2 + 2,&UNK_143397aed,9);
    break;
  case (code)0x11:
    lVar42 = pdb_14054e5c0(param_2,param_2 + 2,&UNK_143397af6,0xc);
    break;
  case (code)0x12:
    cRam00000000c6ffbf48 = (cRam00000000c6ffbf48 - bVar33) - bVar71;
    *(byte *)unaff_RDI = (byte)*(code *)unaff_RDI >> 5 | (char)*(code *)unaff_RDI << 3;
    *(byte *)pfVar26 = (char)*(code *)pfVar26 + bVar21;
code_r0x000141b6c0b1:
    unaff_RBX = *(float **)param_2;
    arg1 = *(float **)(unaff_RBX + 4);
    bVar71 = *(float **)unaff_RBX == arg1;
    bVar72 = (longlong)*(float **)unaff_RBX - (longlong)arg1 == 1;
code_r0x000141b6c0c2:
    if (bVar71 || bVar72) {
      puStack_a8 = (undefined *)0x1;
      pdb_142d7f1b0(unaff_RBX,arg1,2,1);
      arg1 = *(float **)(unaff_RBX + 4);
    }
    *(undefined2 *)(*(ulonglong *)(unaff_RBX + 2) + (longlong)arg1) = 0x203a;
code_r0x000141b6c0d2:
    *(code **)(unaff_RBX + 4) = (code *)((longlong)arg1 + 2);
code_r0x000141b6c0da:
    pfVar26 = (float *)((ulonglong)unaff_RBP & 0xffffffff);
    UNRECOVERED_JUMPTABLE = (float *)&UNK_143398110;
code_r0x000141b6c0e3:
                    /* WARNING: Could not recover jumptable at 0x000141b6c0ea. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pfVar28 = (float *)(*(code *)((longlong)(int)UNRECOVERED_JUMPTABLE[(longlong)pfVar26] +
                                 (longlong)UNRECOVERED_JUMPTABLE))();
    return pfVar28;
  case (code)0x13:
    goto code_r0x000141b6c0da;
  case (code)0x14:
    goto code_r0x000141b6c0c2;
  case (code)0x15:
    *(code *)((longlong)param_2 + -0x39) =
         (code)((byte)*(code *)((longlong)param_2 + -0x39) | bVar33);
    goto code_r0x000141b6c0d2;
  case (code)0x16:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (code)0x17:
    goto code_r0x000141b6c0e3;
  case (code)0x18:
    *(uint *)((longlong)UNRECOVERED_JUMPTABLE + -0x47) =
         *(int *)((longlong)UNRECOVERED_JUMPTABLE + -0x47) + uVar68;
    uVar68 = uVar68 + (int)*pfVar26;
    *(char *)(ulonglong)uVar68 = *(char *)(ulonglong)uVar68 + (char)uVar68;
    uStack_6b = uVar7;
    lVar42 = pdb_14054e5c0(param_2);
    if (lVar42 == 0) {
      *(code *)(param_2 + 8) = (code)0x1;
      plVar64 = *(longlong **)param_2;
      uVar25 = *(ulonglong *)(param_2 + 6) - 1;
      *(ulonglong *)(param_2 + 6) = uVar25;
      lVar42 = plVar64[2];
      if (*plVar64 == lVar42) {
        puStack_a8 = (undefined *)0x1;
        pdb_142d7f1b0(plVar64,lVar42,1,1);
        lVar42 = plVar64[2];
      }
      *(undefined1 *)(plVar64[1] + lVar42) = 10;
      lVar42 = lVar42 + 1;
      plVar64[2] = lVar42;
      if (uVar25 != 0) {
        uVar41 = *(ulonglong *)(param_2 + 2);
        uVar3 = *(ulonglong *)(param_2 + 4);
        do {
          if ((ulonglong)(*plVar64 - lVar42) < uVar3) {
            puStack_a8 = (undefined *)0x1;
            pdb_142d7f1b0(plVar64,lVar42,uVar3,1);
            lVar42 = plVar64[2];
code_r0x000141b6c9d0:
            pub_142e32760(plVar64[1] + lVar42,uVar41,uVar3);
          }
          else if (uVar3 != 0) goto code_r0x000141b6c9d0;
          lVar42 = lVar42 + uVar3;
          plVar64[2] = lVar42;
          uVar25 = uVar25 - 1;
        } while (uVar25 != 0);
      }
      goto code_r0x000141b6cc20;
    }
    goto code_r0x000141b6ca64;
  case (code)0x19:
    pfVar28 = param_3;
    if (UNRECOVERED_JUMPTABLE != (float *)0x1) goto code_r0x000141b6c43d;
code_r0x000141b6c3f7:
    pfVar28 = unaff_R13;
    lVar42 = pdb_14054e5c0(param_2,unaff_RDI,param_3,7);
    if (lVar42 == 0) {
      plVar64 = *(longlong **)param_2;
      lVar42 = plVar64[2];
      if ((ulonglong)(*plVar64 - lVar42) < 2) {
        puStack_a8 = (undefined *)0x1;
        pdb_142d7f1b0(plVar64,lVar42,2,1);
        lVar42 = plVar64[2];
      }
      *(undefined2 *)(plVar64[1] + lVar42) = 0x203a;
      plVar64[2] = lVar42 + 2;
code_r0x000141b6c43d:
                    /* WARNING: Could not recover jumptable at 0x000141b6c44f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      pfVar28 = (float *)(*(code *)(&UNK_14339812c +
                                   *(int *)(&UNK_14339812c + (ulonglong)(uint)pfVar28[2] * 4)))();
      return pfVar28;
    }
    goto code_r0x000141b6ca64;
  case (code)0x1a:
    uStack_6b = uVar7;
    goto code_r0x000141b6c4b9;
  case (code)0x1b:
    if (bVar21 == 2) {
      return pfStack_90;
    }
    UNRECOVERED_JUMPTABLE = (float *)(ulonglong)CONCAT13(uStack_94,CONCAT12(uStack_95,uStack_97));
    goto code_r0x000141b6c497;
  case (code)0x1c:
    pfVar26 = (float *)(ulonglong)(bVar21 & 0x31);
code_r0x000141b6c497:
    uStack_6f = SUB84(UNRECOVERED_JUMPTABLE,0);
    cStack_70 = (char)pfVar26;
    if (cStack_70 == '\x01') {
code_r0x000141b6d0a9:
                    /* WARNING: Subroutine does not return */
      pdb_142dc83b0(&UNK_143397a40,0x28,&UNK_143397ff8);
    }
code_r0x000141b6c4b9:
    pfVar28 = (float *)pdb_141b86bf0(&cStack_70,&UNK_143397c8c,0xc,unaff_R13 + 3);
    if (pfVar28 != (float *)0x0) {
      return pfVar28;
    }
code_r0x000141b6c4e0:
    pdb_141b6f580(&cStack_70);
code_r0x000141b6cb8f:
    *(code *)(param_2 + 8) = (code)0x1;
    plVar64 = *(longlong **)param_2;
    uVar25 = *(ulonglong *)(param_2 + 6) - 1;
    *(ulonglong *)(param_2 + 6) = uVar25;
    lVar42 = plVar64[2];
    if (*plVar64 == lVar42) {
      puStack_a8 = (undefined *)0x1;
      pdb_142d7f1b0(plVar64,lVar42,1,1);
      lVar42 = plVar64[2];
    }
    *(undefined1 *)(plVar64[1] + lVar42) = 10;
    lVar42 = lVar42 + 1;
    plVar64[2] = lVar42;
    if (uVar25 != 0) {
      uVar41 = *(ulonglong *)(param_2 + 2);
      uVar3 = *(ulonglong *)(param_2 + 4);
      do {
        if ((ulonglong)(*plVar64 - lVar42) < uVar3) {
          puStack_a8 = (undefined *)0x1;
          pdb_142d7f1b0(plVar64,lVar42,uVar3,1);
          lVar42 = plVar64[2];
code_r0x000141b6cbf0:
          pub_142e32760(plVar64[1] + lVar42,uVar41,uVar3);
        }
        else if (uVar3 != 0) goto code_r0x000141b6cbf0;
        lVar42 = lVar42 + uVar3;
        plVar64[2] = lVar42;
        uVar25 = uVar25 - 1;
      } while (uVar25 != 0);
    }
code_r0x000141b6cc20:
    if (*plVar64 == lVar42) {
      puStack_a8 = (undefined *)0x1;
      pdb_142d7f1b0(plVar64,lVar42,1,1);
      lVar42 = plVar64[2];
    }
    *(undefined1 *)(plVar64[1] + lVar42) = 0x7d;
    plVar64[2] = lVar42 + 1;
    return (float *)0x0;
  case (code)0x1d:
    pcVar66 = (code *)swi(1);
    pfVar28 = (float *)(*pcVar66)();
    return pfVar28;
  case (code)0x1e:
    *(byte *)pfVar26 = (char)*(code *)pfVar26 + bVar21;
    uStack_6b = uVar7;
    goto code_r0x000141b6c4e0;
  case (code)0x1f:
    if (bVar21 == 2) {
      return pfStack_90;
    }
    apuStack_60[0] =
         (undefined *)
         CONCAT71(CONCAT34(uStack_6b,CONCAT13(uStack_94,CONCAT12(uStack_95,uStack_97))),bVar21);
    uStack_6b = uVar7;
    if (bVar21 == 1) goto code_r0x000141b6d0a9;
    pfVar28 = (float *)pdb_141b86bf0(apuStack_60,&UNK_143397c8c,0xc,unaff_R13 + 3);
    if (pfVar28 != (float *)0x0) {
      return pfVar28;
    }
    pdb_141b6f580(apuStack_60);
    goto code_r0x000141b6cb8f;
  case (code)0x20:
  case (code)0x21:
  case (code)0x23:
  case (code)0x24:
  case (code)0x26:
  case (code)0x2e:
    *(byte *)pfVar26 = (char)*(code *)pfVar26 + bVar21;
    (&UNK_143398053)[uVar25] = (&UNK_143398053)[uVar25] + bVar32;
    uVar25 = (ulonglong)pfVar26 & 0xffffffffffffff28;
    pfVar56 = (float *)auStack_c8;
    goto code_r0x000141b6d313;
  case (code)0x22:
    puStack_130 = &stack0xffffffffffffff30;
    puVar49 = (ulonglong *)&stack0xffffffffffffff30;
    pfVar63 = (float *)&stack0xffffffffffffff30;
    cVar22 = '\v';
    do {
      unaff_RBP = unaff_RBP + -2;
      puVar49 = puVar49 + -1;
      *puVar49 = *(ulonglong *)unaff_RBP;
      cVar22 = cVar22 + -1;
    } while ('\0' < cVar22);
    pbVar44 = abStack_3bbb + 0x18;
    pfVar26 = (float *)(ulonglong)_UNK_1433980e0;
code_r0x000141b6d0e8:
    param_3 = (float *)CONCAT44(_UNK_1433980e4,_UNK_1433980e0);
    pfVar26 = (float *)((longlong)pfVar26 + 1);
    uVar25 = -(longlong)UNRECOVERED_JUMPTABLE;
    pfVar56 = (float *)pbVar44;
    goto code_r0x000141b6d0f2;
  case (code)0x25:
    goto code_r0x000141b6d19b;
  case (code)0x27:
    pfVar65 = (float *)((longlong)unaff_RDI + 1);
    cVar20 = (code)in(0x80c8);
    *(code *)unaff_RDI = cVar20;
  case (code)0x36:
code_r0x000141b6d192:
    arg1 = (float *)&UNK_143396cc8;
    pfVar26 = (float *)((ulonglong)pfVar26 & 0xffffffffffffff20);
    puVar36 = auStack_c8;
code_r0x000141b6d180:
    *(float **)(arg1 + 10) = pfVar26;
    *(undefined8 *)(puVar36 + -8) = 0x141b6d191;
    in_XMM0._0_8_ = pdb_141653f70(puVar36 + 0x20);
    in_XMM0._8_8_ = extraout_XMM0_Qb_00;
    unaff_RBP = (float *)(ulonglong)(byte)puVar36[0x20];
    pfVar28 = *(float **)(puVar36 + 0x28);
    unaff_RBX = arg1;
    puVar16 = puVar36;
    unaff_RDI = pfVar65;
code_r0x000141b6d19b:
    pfVar56 = (float *)puVar16;
    arg1 = (float *)&UNK_143398194;
    uVar25 = (ulonglong)*(int *)(&UNK_143398194 + ((ulonglong)unaff_RBP & 0xff) * 4);
    bVar75 = 0xfffffffebcc67e6b < uVar25;
    UNRECOVERED_JUMPTABLE = (float *)(&UNK_143398194 + uVar25);
    bVar72 = UNRECOVERED_JUMPTABLE == (float *)0x0;
    bVar71 = (POPCOUNT((ulonglong)UNRECOVERED_JUMPTABLE & 0xff) & 1U) == 0;
    bVar21 = (byte)UNRECOVERED_JUMPTABLE;
    uVar34 = (uint)UNRECOVERED_JUMPTABLE;
    cVar22 = (char)pfVar28;
    uVar68 = (uint)pfVar28;
    cVar43 = (char)((ulonglong)unaff_RBX >> 8);
    pfVar37 = UNRECOVERED_JUMPTABLE;
    pfVar39 = arg1;
    puVar52 = (undefined8 *)pfVar56;
    puVar17 = (undefined1 *)pfVar56;
    pfVar65 = unaff_RDI;
    auVar78 = in_XMM0;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch((ulonglong)unaff_RBP & 0xff) {
    case 0:
      *(undefined8 *)((longlong)pfVar56 + -8) = 0x141b6d2ab;
      pfVar28 = (float *)pdb_141b6d620((undefined1 *)((longlong)pfVar56 + 0x38),pfVar28);
code_r0x000141b6d2aa:
      pfVar65 = unaff_RBX + 0x1ce091f;
      *(char *)pfVar65 = (char)*(code *)pfVar65 + (char)pfVar28;
      if (*(code *)pfVar65 == (code)0x0) {
        uVar25 = *(ulonglong *)((longlong)pfVar56 + 0x40);
        goto code_r0x000141b6d313;
      }
      *(undefined8 *)((longlong)pfVar56 + 0x27) = *(undefined8 *)((longlong)pfVar56 + 0x38);
      *(undefined8 *)((longlong)pfVar56 + 0x2f) = *(undefined8 *)((longlong)pfVar56 + 0x40);
      *(ulonglong *)(param_2 + 4) = *(ulonglong *)((longlong)pfVar56 + 0x2f);
      uVar24 = *(undefined8 *)((longlong)pfVar56 + 0x28);
      *(undefined8 *)((longlong)param_2 + 1) = *(undefined8 *)((longlong)pfVar56 + 0x20);
      *(undefined8 *)((longlong)param_2 + 9) = uVar24;
      cVar20 = (code)0x0;
      break;
    case 1:
      *(undefined8 *)((longlong)pfVar56 + -8) = 0x141b6d2ca;
      pdb_141b6d450((undefined1 *)((longlong)pfVar56 + 0x20),pfVar28);
      if (*(char *)((longlong)pfVar56 + 0x20) == '\x01') goto code_r0x000141b6d30e;
      *(code *)((longlong)param_2 + 1) = *(code *)((longlong)pfVar56 + 0x21);
      cVar20 = (code)0x1;
      break;
    default:
      UNRECOVERED_JUMPTABLE = pfVar28;
      puVar18 = (undefined1 *)pfVar56;
code_r0x000141b6d1b2:
      pfVar56 = (float *)puVar18;
      *(undefined8 *)((longlong)pfVar56 + -8) = 0x141b6d1b7;
      pfVar28 = (float *)pdb_141654940(UNRECOVERED_JUMPTABLE);
      if (pfVar28 != (float *)0x0) goto code_r0x000141b6d1bc;
      *(code *)param_2 = SUB81(unaff_RBP,0);
      *(byte *)(unaff_RBX + 0x12) = (char)*(code *)(unaff_RBX + 0x12) + 1;
      goto code_r0x000141b6d329;
    case 3:
      *(undefined8 *)((longlong)pfVar56 + -8) = 0x141b6d266;
      uVar25 = pdb_14165b3b0(pfVar28);
      cVar20 = (code)0x3;
      if ((uVar25 & 1) != 0) {
        cVar20 = (code)0x12;
      }
      *(float **)(param_2 + 2) = arg1;
      break;
    case 4:
      puVar36 = (undefined1 *)((longlong)pfVar56 + 0x20);
code_r0x000141b6d283:
      *(undefined8 *)((longlong)pfVar56 + -8) = 0x141b6d28b;
      pdb_141b6d900(puVar36,pfVar28);
      if (*(char *)((longlong)pfVar56 + 0x20) == '\x01') {
code_r0x000141b6d30e:
        uVar25 = *(ulonglong *)((longlong)pfVar56 + 0x28);
code_r0x000141b6d313:
        *(ulonglong *)(param_2 + 2) = uVar25;
        cVar20 = (code)0x12;
      }
      else {
        cVar20 = *(code *)((longlong)pfVar56 + 0x21);
code_r0x000141b6d297:
        *(code *)((longlong)param_2 + 1) = cVar20;
        cVar20 = (code)0x4;
      }
      break;
    case 6:
      UNRECOVERED_JUMPTABLE = (float *)((longlong)pfVar56 + 0x20);
code_r0x000141b6d238:
      *(undefined8 *)((longlong)pfVar56 + -8) = 0x141b6d240;
      pdb_1417c0430(UNRECOVERED_JUMPTABLE,pfVar28);
      pfVar28 = *(float **)((longlong)pfVar56 + 0x20);
      UNRECOVERED_JUMPTABLE = *(float **)((longlong)pfVar56 + 0x28);
      pfVar65 = unaff_RDI;
      if (pfVar28 == (float *)0x8) {
code_r0x000141b6d254:
        cVar20 = (code)0x12;
        pfVar28 = UNRECOVERED_JUMPTABLE;
        unaff_RDI = pfVar65;
      }
      else {
        *(float **)(param_2 + 4) = UNRECOVERED_JUMPTABLE;
        cVar20 = (code)0x6;
      }
      *(float **)(param_2 + 2) = pfVar28;
      *(code *)param_2 = cVar20;
      *(byte *)(unaff_RBX + 0x12) = (char)*(code *)(unaff_RBX + 0x12) + 1;
      if (cVar20 == (code)0x12) {
        return param_2;
      }
      goto code_r0x000141b6d329;
    case 10:
      *(undefined8 *)((longlong)pfVar56 + -8) = 0x141b6d2f1;
      pdb_141656200(param_2,pfVar28,8,0);
      cVar20 = *(code *)param_2;
      goto code_r0x000141b6d31b;
    case 0xe:
      *(undefined8 *)((longlong)pfVar56 + -8) = 0x141b6d303;
      pdb_141656e40((undefined1 *)((longlong)pfVar56 + 0x20),pfVar28);
      if (*(char *)((longlong)pfVar56 + 0x20) == '\x01') goto code_r0x000141b6d30e;
      *(code *)((longlong)param_2 + 1) = *(code *)((longlong)pfVar56 + 0x21);
      cVar20 = (code)0xe;
      break;
    case 0x12:
code_r0x000141b6d1bc:
      *(float **)(param_2 + 2) = pfVar28;
      *(code *)param_2 = (code)0x12;
      *(byte *)(unaff_RBX + 0x12) = (char)*(code *)(unaff_RBX + 0x12) + 1;
      return param_2;
    case 0x13:
      while (UNRECOVERED_JUMPTABLE = param_2, pfVar56 = (float *)puVar52,
            param_2 = UNRECOVERED_JUMPTABLE, !bVar72) {
LAB_141b6d47c:
        param_4 = (code *)(ulonglong)(byte)((code *)((longlong)param_3 + -1))[(longlong)pfVar28];
        unaff_RDI = pfVar65;
        if ((code *)0x22 < param_4) {
LAB_141b6d4f5:
          if (((code *)((longlong)param_3 + -1))[(longlong)pfVar28] != (code)0x7b) {
            *(undefined8 *)((longlong)pfVar56 + 0x20) = 10;
            goto LAB_141b6d4ab;
          }
          pfVar65 = arg1 + 0x12;
          *(byte *)pfVar65 = (char)*(code *)pfVar65 - 1;
          if (*(code *)pfVar65 == (code)0x0) {
            *(undefined8 *)((longlong)pfVar56 + 0x20) = 0x18;
            goto LAB_141b6d4ab;
          }
          *(float **)(arg1 + 10) = pfVar28;
          *(undefined8 *)((longlong)pfVar56 + -8) = 0x141b6d519;
          in_XMM0._0_8_ = pdb_141653c20((undefined1 *)((longlong)pfVar56 + 0x20));
          in_XMM0._8_8_ = extraout_XMM0_Qb_02;
          UNRECOVERED_JUMPTABLE = (float *)(ulonglong)*(byte *)((longlong)pfVar56 + 0x20);
          pfVar28 = *(float **)((longlong)pfVar56 + 0x28);
          unaff_RBX = arg1;
          unaff_RBP = UNRECOVERED_JUMPTABLE;
          goto code_r0x000141b6d527;
        }
        UNRECOVERED_JUMPTABLE = pfVar37;
        if (((ulonglong)pfVar65 >> ((ulonglong)param_4 & 0x3f) & 1) == 0) {
          if (param_4 != (code *)0x22) goto LAB_141b6d4f5;
          goto code_r0x000141b6d4cd;
        }
code_r0x000141b6d48e:
        *(float **)(arg1 + 10) = pfVar28;
        param_4 = (code *)((longlong)UNRECOVERED_JUMPTABLE + (longlong)pfVar28) + 1;
        pfVar28 = (float *)((longlong)pfVar28 + 1);
code_r0x000141b6d49c:
        pfVar37 = UNRECOVERED_JUMPTABLE;
        puVar52 = (undefined8 *)pfVar56;
        bVar72 = param_4 == (code *)0x1;
      }
LAB_141b6d4a2:
      *(undefined8 *)((longlong)puVar52 + 0x20) = 5;
      pfVar56 = (float *)puVar52;
      param_2 = UNRECOVERED_JUMPTABLE;
LAB_141b6d4ab:
      *(undefined8 *)((longlong)pfVar56 + -8) = 0x141b6d4bb;
      uVar25 = pdb_142d84ef0(arg1,(undefined1 *)((longlong)pfVar56 + 0x20));
      *(ulonglong *)(param_2 + 2) = uVar25;
      *(code *)param_2 = (code)0x1;
      return param_2;
    case 0x14:
      goto code_r0x000141b6d58a;
    case 0x15:
      UNRECOVERED_JUMPTABLE = (float *)(ulonglong)*(byte *)((longlong)pfVar28 * 2 + -1);
      goto code_r0x000141b6d574;
    case 0x16:
      bVar72 = uVar34 < 0x20;
      bVar71 = uVar34 == 0x20;
      goto code_r0x000141b6d57e;
    case 0x17:
    case 0x18:
    case 0x19:
      *(code *)((longlong)pfVar28 + -0x73) =
           (code)((byte)*(code *)((longlong)pfVar28 + -0x73) & bVar21);
      goto code_r0x000141b6d4cd;
    case 0x1a:
code_r0x000141b6d4cd:
      *(undefined8 *)((longlong)pfVar56 + -8) = 0x141b6d4d7;
      in_XMM0._0_8_ = pdb_1416573f0((undefined1 *)((longlong)pfVar56 + 0x20));
      in_XMM0._8_8_ = extraout_XMM0_Qb_01;
      UNRECOVERED_JUMPTABLE = (float *)&UNK_1433981e0;
      uVar25 = (ulonglong)
               *(int *)(&UNK_1433981e0 + (ulonglong)*(byte *)((longlong)pfVar56 + 0x20) * 4);
      bVar75 = 0xfffffffebcc67e1f < uVar25;
      pfVar28 = (float *)(&UNK_1433981e0 + uVar25);
      bVar72 = pfVar28 == (float *)0x0;
      bVar71 = (POPCOUNT((ulonglong)pfVar28 & 0xff) & 1U) == 0;
      bVar21 = (byte)pfVar28;
      fVar77 = SUB84(pfVar28,0);
      pfVar26 = pfVar28;
      pfVar39 = arg1;
      puVar36 = (undefined1 *)pfVar56;
      puVar52 = (undefined8 *)pfVar56;
      pfVar65 = unaff_RDI;
      auVar78 = in_XMM0;
      pfVar37 = UNRECOVERED_JUMPTABLE;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
      switch(*(byte *)((longlong)pfVar56 + 0x20)) {
      case 0:
        *(code *)((longlong)param_2 + 1) = (code)0x0;
        break;
      case 1:
        *(code *)((longlong)param_2 + 1) = (code)0x1;
        break;
      case 2:
        *(code *)((longlong)param_2 + 1) = (code)0x2;
        break;
      case 3:
        *(ulonglong *)(param_2 + 2) = *(ulonglong *)((longlong)pfVar56 + 0x28);
        *(code *)param_2 = (code)0x1;
        return param_2;
      case 4:
      case 5:
      case 6:
code_r0x000141b6d527:
        pfVar39 = (float *)&UNK_1433981f0;
        uVar25 = (ulonglong)*(int *)(&UNK_1433981f0 + (longlong)UNRECOVERED_JUMPTABLE * 4);
        bVar71 = 0xfffffffebcc67e0f < uVar25;
        bVar75 = SCARRY8(uVar25,0x1433981f0);
        UNRECOVERED_JUMPTABLE = (float *)(&UNK_1433981f0 + uVar25);
        bVar72 = UNRECOVERED_JUMPTABLE == (float *)0x0;
        bVar21 = (byte)pfVar28;
        uVar31 = (undefined7)((ulonglong)pfVar28 >> 8);
        uVar68 = (uint)pfVar28;
        cVar22 = (char)UNRECOVERED_JUMPTABLE;
        arg1 = UNRECOVERED_JUMPTABLE;
        pfVar65 = unaff_RDI;
        auVar78 = in_XMM0;
        pfVar37 = UNRECOVERED_JUMPTABLE;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
        switch(UNRECOVERED_JUMPTABLE) {
        case (float *)0x10eb6f7df:
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        case (float *)0x141b6d537:
          UNRECOVERED_JUMPTABLE = unaff_RBX;
          goto code_r0x000141b6d53a;
        case (float *)0x141b6d544:
          goto code_r0x000141b6d544;
        case (float *)0x141b6d6a4:
          goto code_r0x000141b6d6a4;
        case (float *)0x141b6d6cd:
          lVar42 = CONCAT71(uVar31,bVar21 + (char)*(code *)pfVar28);
          pcVar27 = (char *)(lVar42 + -0x77);
          *pcVar27 = *pcVar27 + cVar22;
          pcVar27 = (char *)(lVar42 + -0x73);
          *pcVar27 = *pcVar27 - cVar22;
          goto code_r0x000141b6d6db;
        case (float *)0x141b6d6f6:
code_r0x000141b6d6db:
          *(undefined8 *)((longlong)pfVar56 + -8) = 0x141b6d6e3;
          auVar78._0_8_ = pdb_141653790(UNRECOVERED_JUMPTABLE);
          auVar78._8_8_ = extraout_XMM0_Qb_04;
          arg1 = *(float **)((longlong)pfVar56 + 0x30);
          UNRECOVERED_JUMPTABLE = (float *)&UNK_143398220;
          bVar75 = 0xfffffffebcc67ddf <
                   (ulonglong)
                   (longlong)
                   *(int *)(&UNK_143398220 + (ulonglong)*(byte *)((longlong)pfVar56 + 0x28) * 4);
          pfVar28 = (float *)(&UNK_143398220 +
                             *(int *)(&UNK_143398220 +
                                     (ulonglong)*(byte *)((longlong)pfVar56 + 0x28) * 4));
          bVar72 = pfVar28 == (float *)0x0;
          bVar71 = (POPCOUNT((ulonglong)pfVar28 & 0xff) & 1U) == 0;
          unaff_RBX = pfVar39;
          pfVar65 = unaff_RDI;
code_r0x000141b6d6fb:
          fVar35 = SUB84(UNRECOVERED_JUMPTABLE,0);
          bVar21 = (byte)pfVar28;
          fVar77 = SUB84(pfVar28,0);
          iVar23 = (int)param_3;
          pfVar37 = UNRECOVERED_JUMPTABLE;
          pfVar39 = arg1;
          unaff_RDI = pfVar65;
          in_XMM0 = auVar78;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
          switch(pfVar28) {
          case (float *)0x141b6d6fd:
code_r0x000141b6d6fd:
            *(undefined8 *)((longlong)pfVar56 + -8) = 0x141b6d705;
            pfVar28 = (float *)pdb_141654940(arg1);
            bVar72 = pfVar28 == (float *)0x0;
code_r0x000141b6d708:
            arg1 = pfVar28;
            unaff_RDI = pfVar65;
            if (!bVar72) goto code_r0x000141b6d73a;
code_r0x000141b6d70a:
            pfVar28 = (float *)0x0;
code_r0x000141b6d70c:
            fVar76 = SUB84(pfVar28,0);
            UNRECOVERED_JUMPTABLE = unaff_RBX;
            pfVar65 = unaff_RDI;
code_r0x000141b6d86b:
            *param_2 = fVar76;
            *(byte *)(UNRECOVERED_JUMPTABLE + 0x12) =
                 (char)*(code *)(UNRECOVERED_JUMPTABLE + 0x12) + 1;
            arg1 = *(float **)(UNRECOVERED_JUMPTABLE + 8);
            pfVar28 = *(float **)(UNRECOVERED_JUMPTABLE + 10);
            if (pfVar28 < arg1) goto code_r0x000141b6d79c;
            goto code_r0x000141b6d884;
          case (float *)0x141b6d726:
            *(undefined8 *)((longlong)pfVar56 + -8) = 0x141b6d72e;
            arg1 = (float *)pdb_141654940(arg1);
            if (arg1 == (float *)0x0) {
              fVar76 = 4.2039e-45;
              UNRECOVERED_JUMPTABLE = unaff_RBX;
              goto code_r0x000141b6d86b;
            }
          case (float *)0x141b6d73a:
code_r0x000141b6d73a:
            *(float **)(param_2 + 2) = arg1;
            *param_2 = 9.80909e-45;
            *(byte *)(unaff_RBX + 0x12) = (char)*(code *)(unaff_RBX + 0x12) + 1;
code_r0x000141b6d747:
            return param_2;
          case (float *)0x141b6d74c:
            *(undefined8 *)((longlong)pfVar56 + -8) = 0x141b6d754;
            uVar25 = pdb_14165b3b0(arg1);
            bVar72 = (uVar25 & 1) == 0;
            UNRECOVERED_JUMPTABLE = (float *)0x7;
            pfVar28 = (float *)0x1;
code_r0x000141b6d760:
            if (!bVar72) {
              pfVar28 = UNRECOVERED_JUMPTABLE;
            }
            pfVar28 = (float *)((ulonglong)pfVar28 & 0xffffffff);
            goto code_r0x000141b6d776;
          case (float *)0x141b6d765:
code_r0x000141b6d765:
            *(undefined8 *)((longlong)pfVar56 + -8) = 0x141b6d76d;
            uVar68 = pdb_14165b3b0(arg1);
            pfVar28 = (float *)(ulonglong)((uVar68 & 1) * 5 + 2);
code_r0x000141b6d776:
            *(float **)(param_2 + 2) = arg1;
code_r0x000141b6d77a:
            *param_2 = SUB84(pfVar28,0);
code_r0x000141b6d77c:
            *(byte *)(unaff_RBX + 0x12) = (char)*(code *)(unaff_RBX + 0x12) + 1;
            fVar76 = SUB84(pfVar28,0);
            UNRECOVERED_JUMPTABLE = unaff_RBX;
joined_r0x000141b6d83f:
            if (fVar76 == 9.80909e-45) {
              return param_2;
            }
            arg1 = *(float **)(UNRECOVERED_JUMPTABLE + 8);
            pfVar28 = *(float **)(UNRECOVERED_JUMPTABLE + 10);
            pfVar65 = unaff_RDI;
code_r0x000141b6d793:
            if (pfVar28 < arg1) {
code_r0x000141b6d79c:
              param_3 = *(float **)(UNRECOVERED_JUMPTABLE + 6);
code_r0x000141b6d7a0:
              pfVar28 = (float *)((longlong)pfVar28 + 1);
              pfVar39 = (float *)-(longlong)arg1;
              pfVar37 = UNRECOVERED_JUMPTABLE;
              unaff_RDI = pfVar65;
code_r0x000141b6d7a6:
              do {
                cVar20 = ((code *)((longlong)param_3 + -1))[(longlong)pfVar28];
                if ((0x20 < (ulonglong)(byte)cVar20) ||
                   (((ulonglong)unaff_RDI >> ((ulonglong)(byte)cVar20 & 0x3f) & 1) == 0)) {
                  if (cVar20 == (code)0x7d) {
                    *(float **)(pfVar37 + 10) = pfVar28;
                    return param_2;
                  }
                  *(undefined8 *)((longlong)pfVar56 + 0x28) = 10;
                  UNRECOVERED_JUMPTABLE = pfVar37;
                  goto code_r0x000141b6d8f0;
                }
code_r0x000141b6d7b8:
                *(float **)(pfVar37 + 10) = pfVar28;
                pcVar66 = (code *)((longlong)pfVar39 + (longlong)pfVar28);
                pfVar28 = (float *)((longlong)pfVar28 + 1);
                UNRECOVERED_JUMPTABLE = pfVar37;
              } while (pcVar66 != (code *)0x0);
            }
code_r0x000141b6d884:
            *(undefined8 *)((longlong)pfVar56 + 0x28) = 3;
code_r0x000141b6d88d:
            *(undefined8 *)((longlong)pfVar56 + -8) = 0x141b6d897;
            uVar25 = pdb_142d855a0(UNRECOVERED_JUMPTABLE,(undefined1 *)((longlong)pfVar56 + 0x28));
            goto LAB_141b6d8b6;
          case (float *)0x141b6d7e4:
code_r0x000141b6d7e4:
            UNRECOVERED_JUMPTABLE = (float *)((longlong)pfVar56 + 0x28);
code_r0x000141b6d7e9:
            *(undefined8 *)((longlong)pfVar56 + -8) = 0x141b6d7ee;
            pdb_14164eb50(UNRECOVERED_JUMPTABLE);
            bVar72 = *(int *)((longlong)pfVar56 + 0x28) == 1;
code_r0x000141b6d7f3:
            if (bVar72) {
              *(ulonglong *)(param_2 + 2) = *(ulonglong *)((longlong)pfVar56 + 0x30);
              pfVar28 = (float *)0x7;
            }
            else {
code_r0x000141b6d847:
              param_2[1] = *(float *)((longlong)pfVar56 + 0x2c);
              pfVar28 = (float *)0x6;
            }
            goto code_r0x000141b6d77a;
          case (float *)0x141b6d808:
code_r0x000141b6d815:
            *(undefined8 *)((longlong)pfVar56 + -8) = 0x141b6d81d;
            pdb_141654a60(param_2);
            goto code_r0x000141b6d834;
          case (float *)0x141b6d81f:
code_r0x000141b6d81f:
            *(undefined8 *)((longlong)pfVar56 + -8) = 0x141b6d834;
            pdb_141655660(param_2);
code_r0x000141b6d834:
            fVar76 = *param_2;
            *(byte *)(unaff_RBX + 0x12) = (char)*(code *)(unaff_RBX + 0x12) + 1;
            UNRECOVERED_JUMPTABLE = unaff_RBX;
            goto joined_r0x000141b6d83f;
          case (float *)0x141b6d97c:
            *(code *)((longlong)pfVar28 + -0x73) =
                 (code)((char)*(code *)((longlong)pfVar28 + -0x73) - (byte)UNRECOVERED_JUMPTABLE);
code_r0x000141b6d97f:
code_r0x000141b6d97d:
            *(undefined8 *)((longlong)pfVar56 + -8) = 0x141b6d987;
            in_XMM0._0_8_ = pdb_141657790((undefined1 *)((longlong)pfVar56 + 0x20));
            in_XMM0._8_8_ = extraout_XMM0_Qb_05;
            UNRECOVERED_JUMPTABLE = arg1;
code_r0x000141b6d987:
            uVar25 = (ulonglong)*(byte *)((longlong)pfVar56 + 0x20);
            arg1 = UNRECOVERED_JUMPTABLE;
code_r0x000141b6d98c:
            UNRECOVERED_JUMPTABLE = (float *)&UNK_143398240;
            bVar74 = SCARRY8((longlong)*(int *)(&UNK_143398240 + uVar25 * 4),0x143398240);
            pfVar28 = (float *)(&UNK_143398240 + *(int *)(&UNK_143398240 + uVar25 * 4));
            bVar73 = (longlong)pfVar28 < 0;
            bVar72 = pfVar28 == (float *)0x0;
            bVar71 = (POPCOUNT((ulonglong)pfVar28 & 0xff) & 1U) == 0;
            unaff_RDI = pfVar65;
            auVar78 = in_XMM0;
code_r0x000141b6d99a:
            bVar21 = (byte)pfVar28;
            pfVar37 = UNRECOVERED_JUMPTABLE;
            pfVar39 = arg1;
            pfVar65 = unaff_RDI;
            in_XMM0 = auVar78;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
            switch(pfVar28) {
            case (float *)0x141b6d99c:
              *(code *)((longlong)param_2 + 1) = (code)0x0;
code_r0x000141b6d9a0:
              break;
            case (float *)0x141b6d9c7:
              goto code_r0x000141b6d9c7;
            case (float *)0x141b6d9d4:
              UNRECOVERED_JUMPTABLE = (float *)((ulonglong)UNRECOVERED_JUMPTABLE >> 8 & 0xff);
              goto code_r0x000141b6d9d7;
            case (float *)0x141b6da71:
              *(code *)((longlong)param_2 + 1) = (code)0x4;
              break;
            case (float *)0x141b6da77:
              goto code_r0x000141b6da77;
            case (float *)0x141b6da7d:
              goto code_r0x000141b6da7d;
            case (float *)0x141b6da83:
              *(ulonglong *)(param_2 + 2) = *(ulonglong *)((longlong)pfVar56 + 0x28);
              *(code *)param_2 = (code)0x1;
              return param_2;
            case (float *)0x141b6da92:
              *(code *)((longlong)param_2 + 1) = (code)0x1;
              break;
            case (float *)0x141b6da98:
              *(code *)((longlong)param_2 + 1) = (code)0x5;
              break;
            case (float *)0x141b6da9e:
              *(code *)((longlong)param_2 + 1) = (code)0x6;
              break;
            case (float *)0x141b6e806:
              *unaff_RDI = (float)((int)*unaff_RDI + (int)UNRECOVERED_JUMPTABLE);
              goto LAB_141b6e809;
            case (float *)0x141b6e833:
              *(byte *)pfVar28 = (char)*(code *)pfVar28 + bVar21;
              pcVar66 = (code *)((longlong)unaff_RBP + (longlong)UNRECOVERED_JUMPTABLE * 4 + 0xd);
              *pcVar66 = (code)((char)*pcVar66 + (char)UNRECOVERED_JUMPTABLE);
                    /* WARNING: Bad instruction - Truncating control flow here */
              halt_baddata();
            case (float *)0x141b6e858:
              goto code_r0x000141b6e858;
            case (float *)0x141b6e87e:
              goto code_r0x000141b6e87e;
            case (float *)0x141b6e8a2:
              goto code_r0x000141b6e8a2;
            case (float *)0x141b6e8d2:
              goto code_r0x000141b6e8d2;
            case (float *)0x141b6e916:
              goto code_r0x000141b6e916;
            case (float *)0x141b6e938:
              *(code *)((longlong)UNRECOVERED_JUMPTABLE + 0x48088801) =
                   (code)((byte)*(code *)((longlong)UNRECOVERED_JUMPTABLE + 0x48088801) | bVar69);
              goto code_r0x000141b6e936;
            case (float *)0x141b6e956:
              pfVar28 = (float *)((ulonglong)UNRECOVERED_JUMPTABLE & 0xffffffff);
              goto code_r0x000141b6e958;
            case (float *)0x141b6e96b:
                    /* WARNING: Bad instruction - Truncating control flow here */
              halt_baddata();
            case (float *)0x141b6e989:
              bVar72 = (int)param_4 == 0 && (int)UNRECOVERED_JUMPTABLE == 0;
              goto code_r0x000141b6e98c;
            case (float *)0x141b6e9b8:
              if (bVar72) {
code_r0x000141b6e9bb:
                cVar20 = (code)in((short)arg1);
                *(code *)unaff_RDI = cVar20;
                pfVar26 = pfVar28;
                UNRECOVERED_JUMPTABLE = pfVar37;
                puVar52 = (undefined8 *)pfVar56;
code_r0x000141b6e9bc:
                out(*param_2,(short)arg1);
                pfVar28 = pfVar26;
                pfVar56 = (float *)puVar52;
                if (!bVar71) {
code_r0x000141b6e9c0:
                  pfVar28 = pfVar26;
                  pfVar39 = arg1;
                  pfVar56 = (float *)puVar52;
                  if (*(float **)arg1 == UNRECOVERED_JUMPTABLE) {
                    *(code *)((longlong)pfVar26 + 1) = (code)0x3;
                    goto code_r0x000141b6ea0e;
                  }
                  goto LAB_141b6ea18;
                }
                goto code_r0x000141b6ea25;
              }
code_r0x000141b6ea27:
              puVar1 = (uint *)((longlong)UNRECOVERED_JUMPTABLE * 5 + -0x3e);
              *puVar1 = *puVar1 >> 1 | (uint)((*puVar1 & 1) != 0) << 0x1f;
              goto code_r0x000141b6ea2e;
            case (float *)0x141b6e9fa:
code_r0x000141b6e9fa:
              bVar72 = (int)pfVar37 == 0;
              goto code_r0x000141b6e9fc;
            case (float *)0x141b6ea1c:
                    /* WARNING: Bad instruction - Truncating control flow here */
              halt_baddata();
            case (float *)0x141b6ea38:
              pcVar66 = (code *)((longlong)pfVar28 + -0x77);
              *(uint *)pcVar66 = *(uint *)pcVar66 >> 0x10 | *(uint *)pcVar66 << 0x10;
              goto code_r0x000141b6ea3c;
            case (float *)0x141b6ea65:
              goto code_r0x000141b6ea65;
            case (float *)0x141b6ea84:
              return pfVar28;
            case (float *)0x141b6eaad:
              *(byte *)pfVar28 = (char)*(code *)pfVar28 + bVar21;
              return pfVar28;
            case (float *)0x141b6eadd:
              UNRECOVERED_JUMPTABLE = (float *)0x63746970;
              goto code_r0x000141b6eae2;
            case (float *)0x141b6eb00:
code_r0x000141b6eb00:
              arg1 = pfVar39;
              if (!bVar72) goto code_r0x000141b6eb02;
code_r0x000141b6eb65:
              *(code *)((longlong)pfVar28 + -0x7d) =
                   (code)((byte)*(code *)((longlong)pfVar28 + -0x7d) | (byte)UNRECOVERED_JUMPTABLE);
              if (pfVar39 != (float *)0x0 || UNRECOVERED_JUMPTABLE != (float *)0x0)
              goto LAB_141b6ebc7;
              goto code_r0x000141b6eb6f;
            case (float *)0x141b6eb26:
code_r0x000141b6eb26:
              UNRECOVERED_JUMPTABLE = (float *)0x69736f70;
              if (bVar72) {
                pfVar28 = (float *)(ulonglong)((int)pfVar28 + 0xc6014888);
                goto code_r0x000141b6eb9b;
              }
              out(*param_2,(short)arg1);
              out(*(code *)(param_2 + 1),(short)arg1);
              goto code_r0x000141b6eb2f;
            case (float *)0x141b6eb38:
                    /* WARNING: Bad instruction - Truncating control flow here */
              halt_baddata();
            case (float *)0x141b6eb4f:
              *(byte *)pfVar28 = (char)*(code *)pfVar28 + bVar21;
            case (float *)0x141b6eb51:
              goto code_r0x000141b6eb51;
            case (float *)0x141b6eb9b:
              goto code_r0x000141b6eb9b;
            case (float *)0x141b6ebb9:
              goto code_r0x000141b6ebbb;
            case (float *)0x141b6ebd2:
              goto code_r0x000141b6ebd2;
            case (float *)0x141b6ec07:
              *(byte *)pfVar28 = (char)*(code *)pfVar28 + bVar21;
              UNRECOVERED_JUMPTABLE = pfVar28;
              goto pdb_140f679a0;
            case (float *)0x141b6ec51:
              goto code_r0x000141b6ec51;
            case (float *)0x141b6ee36:
              param_4 = param_4 + -0x48;
              uVar25 = *(ulonglong *)param_4;
              *(code **)param_4 = (code *)(*(ulonglong *)param_4 + (longlong)param_3);
              cVar22 = (char)((ulonglong)arg1 & 0xffffffff) + CARRY8(uVar25,(ulonglong)param_3);
              pcVar27 = (char *)CONCAT71((int7)(((ulonglong)arg1 & 0xffffffff) >> 8),cVar22);
              *pcVar27 = *pcVar27 + cVar22;
              goto pdb_140f679a0;
            case (float *)0x141b6ee8f:
              pcVar66 = (code *)swi(3);
              pfVar28 = (float *)(*pcVar66)();
              return pfVar28;
            case (float *)0x141b6eeca:
code_r0x000141b6eeca:
              pcVar66 = (code *)swi(3);
              pfVar28 = (float *)(*pcVar66)();
              return pfVar28;
            case (float *)0x141b6eed0:
pdb_141b6eed0:
              *(float **)((longlong)pfVar56 + -8) = unaff_RBP;
              *(undefined8 *)((longlong)pfVar56 + -0x10) = 0xfffffffffffffffe;
              pfVar26 = (float *)0x8000000000000001;
              pfVar37 = *(float **)UNRECOVERED_JUMPTABLE;
              puVar15 = (undefined1 *)((longlong)pfVar56 + -0x48);
              unaff_RBP = (float *)((longlong)pfVar56 + -8);
              param_3 = UNRECOVERED_JUMPTABLE;
code_r0x000141b6eef2:
              pfVar56 = (float *)puVar15;
              UNRECOVERED_JUMPTABLE = pfVar37;
              pfVar65 = unaff_RDI;
              if (UNRECOVERED_JUMPTABLE == pfVar26) {
code_r0x000141b6eef7:
                pfVar28 = (float *)(ulonglong)(byte)*(code *)(param_3 + 2);
                if (pfVar28 < (float *)0x7) {
                  UNRECOVERED_JUMPTABLE = (float *)&UNK_143398320;
code_r0x000141b6ef0d:
                  pfVar28 = (float *)((longlong)(int)UNRECOVERED_JUMPTABLE[(longlong)pfVar28] +
                                     (longlong)UNRECOVERED_JUMPTABLE);
                  puVar13 = (undefined1 *)pfVar56;
                  switch(pfVar28) {
                  case (float *)0x141b6ef16:
code_r0x000141b6ef16:
                    pfVar56 = (float *)puVar13;
                    bVar72 = *(ulonglong *)(param_3 + 4) == 0;
code_r0x000141b6ef1d:
                    if (bVar72) {
                      return pfVar28;
                    }
                    pfVar37 = *(float **)(param_3 + 6);
                    param_3 = (float *)0x1;
code_r0x000141b6ef2d:
                    unaff_RBP = *(float **)((longlong)pfVar56 + 0x40);
                    pfVar56 = (float *)((longlong)pfVar56 + 0x48);
                    UNRECOVERED_JUMPTABLE = pfVar37;
code_r0x000141b6ef32:
                    goto code_r0x0001406abac0;
                  case (float *)0x141b6ef6f:
                    goto code_r0x000141b6ef6f;
                  case (float *)0x141b6efaa:
                    goto code_r0x000141b6efaa;
                  }
                }
                UNRECOVERED_JUMPTABLE = param_3 + 4;
                goto code_r0x0001409a45e0;
              }
code_r0x000141b6ef37:
              *(float **)(unaff_RBP + -4) = UNRECOVERED_JUMPTABLE;
              *(float **)(unaff_RBP + -6) = param_3;
              *(undefined **)((longlong)pfVar56 + -8) = &UNK_141b6ef48;
              pdb_1409a45e0(param_3 + 6);
code_r0x000141b6ef49:
              arg1 = *(float **)(unaff_RBP + -4);
              goto code_r0x000141b6ef4d;
            case (float *)0x141b6ef6d:
code_r0x000141b6ef6f:
              uVar25 = *(ulonglong *)(param_3 + 6);
              uVar41 = *(ulonglong *)(param_3 + 8);
              *(ulonglong *)(unaff_RBP + -4) = uVar25;
              *(float **)(unaff_RBP + -6) = param_3;
              *(undefined **)((longlong)pfVar56 + -8) = &UNK_141b6ef84;
              pdb_14098ae50(uVar25,uVar41);
              pfVar28 = *(float **)(unaff_RBP + -6);
code_r0x000141b6ef89:
              arg1 = *(float **)(pfVar28 + 4);
              goto code_r0x000141b6ef8d;
            case (float *)0x141b6ef92:
              goto code_r0x000141b6ef92;
            case (float *)0x141b6efa7:
              return pfVar28;
            case (float *)0x141b6efec:
code_r0x000141b6efec:
              arg1 = (float *)(ulonglong)(uint)((int)arg1 << 5);
              goto code_r0x000141b6efef;
            case (float *)0x141b6f013:
              goto code_r0x000141b6f015;
            case (float *)0x141b6f02a:
              goto code_r0x000141b6f02a;
            case (float *)0x141b6f042:
              if (!bVar71) {
                return pfVar28;
              }
              goto code_r0x000141b6f00e;
            case (float *)0x141b6f06a:
code_r0x000141b6f06b:
                    /* WARNING: Bad instruction - Truncating control flow here */
              halt_baddata();
            case (float *)0x141b6f08e:
              goto code_r0x000141b6f08e;
            case (float *)0x141b6f0ab:
              goto code_r0x000141b6f0b4;
            case (float *)0x141b6f721:
                    /* WARNING: Bad instruction - Truncating control flow here */
              halt_baddata();
            case (float *)0x141b6f734:
              goto code_r0x000141b6f734;
            case (float *)0x141b6f747:
              goto code_r0x000141b6f747;
            case (float *)0x141b6f75a:
              goto code_r0x000141b6f75a;
            case (float *)0x141b6f76d:
              goto code_r0x000141b6f76d;
            case (float *)0x141b6f788:
code_r0x000141b6f788:
              if (!bVar72 && bVar74 == bVar73) goto code_r0x000141b6f67a;
              *pfVar28 = (float)((int)*pfVar28 + (int)pfVar28);
code_r0x000141b6f79c:
              *(char *)pfVar28 = (char)*(code *)pfVar28 + (char)pfVar28;
              goto code_r0x000141b6f78f;
            case (float *)0x141b6f7d4:
              *(byte *)UNRECOVERED_JUMPTABLE = (byte)*(code *)UNRECOVERED_JUMPTABLE & bVar21;
              goto code_r0x000141b6f7cd;
            case (float *)0x141b6f7dc:
              goto code_r0x000141b6f7dc;
            case (float *)0x141b6f82d:
code_r0x000141b6f82d:
              arg1 = pfVar39;
              unaff_XMM10_Da = unaff_XMM8_Dc;
              unaff_XMM10_Db = unaff_XMM8_Dd;
              goto code_r0x000141b6f82f;
            case (float *)0x141b6f876:
              in_XMM0._0_4_ = auVar78._0_4_ * unaff_XMM7_Da;
              in_XMM0._4_4_ = auVar78._4_4_ * unaff_XMM7_Db;
              in_XMM0._8_4_ = auVar78._8_4_ * unaff_XMM7_Dc;
              in_XMM0._12_4_ = auVar78._12_4_ * unaff_XMM7_Dd;
              goto code_r0x000141b6f875;
            case (float *)0x141b6f87d:
              goto code_r0x000141b6f87d;
            case (float *)0x141b6f89d:
              goto code_r0x000141b6f89d;
            case (float *)0x141b6f8f3:
code_r0x000141b6f8f3:
              goto code_r0x000141b6f8f5;
            case (float *)0x141b6f93d:
              goto code_r0x000141b6f93f;
            case (float *)0x141b6f9a4:
                    /* WARNING: Bad instruction - Truncating control flow here */
              halt_baddata();
            case (float *)0x141b6f9eb:
              uVar24 = *(undefined8 *)pfVar56;
              pfVar56 = (float *)((longlong)pfVar56 + 8);
              out((short)arg1,(char)uVar24);
              auVar78 = unaff_XMM11;
              goto code_r0x000141b6f9ed;
            case (float *)0x141b6f9f3:
              *pfVar28 = (float)((int)*pfVar28 + (int)pfVar28);
              *(char *)unaff_RDI = (char)*(code *)unaff_RDI + (char)UNRECOVERED_JUMPTABLE;
              puVar62 = (undefined8 *)((longlong)pfVar56 + -8);
              pfVar56 = (float *)((longlong)pfVar56 + -8);
              *puVar62 = unaff_RDI;
              goto code_r0x000141b6fb77;
            case (float *)0x141b6fa22:
              goto code_r0x000141b6fa22;
            }
            goto code_r0x000141b6daa2;
          case (float *)0x141b6d9a7:
            if (bVar71) {
              *pfVar28 = (float)((int)*pfVar28 + (int)fVar77);
                    /* WARNING: Bad instruction - Truncating control flow here */
              halt_baddata();
            }
            arg1[10] = fVar77;
            goto code_r0x000141b6d9b8;
          case (float *)0x141b6d9b4:
            *(byte *)UNRECOVERED_JUMPTABLE = (byte)*(code *)UNRECOVERED_JUMPTABLE | bVar21;
            *(byte *)pfVar28 = (char)*(code *)pfVar28 + bVar21;
            goto code_r0x000141b6d9b8;
          case (float *)0x141b6da51:
            *(byte *)pfVar28 = (char)*(code *)pfVar28 + bVar21;
            break;
          case (float *)0x141b6da57:
            bVar21 = bVar21 & (byte)((ulonglong)UNRECOVERED_JUMPTABLE >> 8);
            pfVar28 = (float *)CONCAT71((int7)((ulonglong)pfVar28 >> 8),bVar21);
            if ((POPCOUNT(bVar21) & 1U) != 0) goto code_r0x000141b6da7d;
            *(int *)((longlong)pfVar28 + -0x77) = *(int *)((longlong)pfVar28 + -0x77) + (int)fVar35;
            *(code *)((longlong)pfVar28 + 0x413feb01) =
                 (code)((byte)*(code *)((longlong)pfVar28 + 0x413feb01) | bVar69);
code_r0x000141b6da65:
            if ((int)param_4 == 0x7d) {
              *(float **)(UNRECOVERED_JUMPTABLE + 10) = pfVar28;
              goto code_r0x000141b6daa2;
            }
            *(undefined8 *)((longlong)pfVar56 + 0x20) = 10;
            break;
          case (float *)0x141b6da5d:
            goto code_r0x000141b6da5d;
          case (float *)0x141b6da63:
            goto code_r0x000141b6da63;
          case (float *)0x141b6da72:
            unaff_RBX[(longlong)unaff_R13 * 2] =
                 (float)((int)unaff_RBX[(longlong)unaff_R13 * 2] + iVar23);
          case (float *)0x141b6da78:
            *arg1 = (float)((int)*arg1 + iVar23);
code_r0x000141b6da77:
            *(code *)((longlong)param_2 + 1) = (code)0x2;
code_r0x000141b6daa2:
            cVar20 = (code)0x0;
            goto code_r0x000141b6daa4;
          case (float *)0x141b6da7e:
            *unaff_RBX = (float)((int)*unaff_RBX + iVar23);
code_r0x000141b6da7d:
            *(code *)((longlong)param_2 + 1) = (code)0x3;
            goto code_r0x000141b6daa2;
          case (float *)0x141b6e7e6:
            param_2[2] = fVar35;
code_r0x000141b6e7de:
            *(int *)((longlong)pfVar28 + -0x77) =
                 *(int *)((longlong)pfVar28 + -0x77) + (int)UNRECOVERED_JUMPTABLE;
            pcVar66 = (code *)((longlong)pfVar28 + -0x77);
            *(uint *)pcVar66 = *(uint *)pcVar66 >> 0x10 | *(uint *)pcVar66 << 0x10;
            *(float **)(param_2 + 2) = UNRECOVERED_JUMPTABLE;
            UNRECOVERED_JUMPTABLE = (float *)0x1;
            goto LAB_141b6e80b;
          case (float *)0x141b6e813:
            goto code_r0x000141b6e813;
          case (float *)0x141b6e838:
            pfVar28 = (float *)(ulonglong)((uint)fVar77 | 0x1829a43);
            goto code_r0x000141b6e83d;
          case (float *)0x141b6e85e:
            goto code_r0x000141b6e85e;
          case (float *)0x141b6e882:
code_r0x000141b6e882:
            *(code *)((longlong)UNRECOVERED_JUMPTABLE + -0x7d) =
                 (code)((byte)*(code *)((longlong)UNRECOVERED_JUMPTABLE + -0x7d) |
                       (byte)UNRECOVERED_JUMPTABLE);
            pcVar66 = (code *)swi(1);
            pfVar28 = (float *)(*pcVar66)();
            return pfVar28;
          case (float *)0x141b6e8b2:
            bVar72 = (int)fVar35 + *(int *)((longlong)UNRECOVERED_JUMPTABLE + 9) == 0;
            pfVar56 = unaff_RBP + 2;
            goto code_r0x000141b6e8b6;
          case (float *)0x141b6e8f6:
            goto code_r0x000141b6e8f6;
          case (float *)0x141b6e918:
            *(int *)((longlong)UNRECOVERED_JUMPTABLE + -0x47) =
                 *(int *)((longlong)UNRECOVERED_JUMPTABLE + -0x47) + (int)fVar77;
code_r0x000141b6e91b:
                    /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
          case (float *)0x141b6e936:
            goto code_r0x000141b6e936;
          case (float *)0x141b6e94b:
            pcVar66 = (code *)swi(3);
            pfVar28 = (float *)(*pcVar66)();
            return pfVar28;
          case (float *)0x141b6e969:
code_r0x000141b6e969:
            goto code_r0x000141b6e971;
          case (float *)0x141b6e998:
            if (*arg1 == 1.1430647e+27) {
              *(code *)((longlong)pfVar28 + 1) = (code)0x1;
code_r0x000141b6ea08:
              goto code_r0x000141b6ea0e;
            }
            if (*arg1 == 4.61621e+24) {
              *(code *)((longlong)pfVar28 + 1) = (code)0x2;
              goto code_r0x000141b6ea0e;
            }
            bVar72 = *arg1 == 6.772068e+22;
            puVar51 = (undefined1 *)pfVar56;
code_r0x000141b6e9ae:
            pfVar39 = arg1;
            pfVar56 = (float *)puVar51;
            goto joined_r0x000141b6e9ae;
          case (float *)0x141b6e9da:
            out(*(code *)param_2,(short)arg1);
code_r0x000141b6e9dc:
            uVar68 = (uint)param_4;
            *(char *)pfVar28 = (char)*(code *)pfVar28 + (char)pfVar28;
            goto code_r0x000141b6e9de;
          case (float *)0x141b6e9fc:
code_r0x000141b6e9fc:
            if (bVar72) {
              *(code *)((longlong)pfVar28 + 1) = (code)0x4;
              goto code_r0x000141b6ea0e;
            }
          case (float *)0x141b6ea18:
            goto LAB_141b6ea18;
          case (float *)0x141b6ea45:
            return pfVar28;
          case (float *)0x141b6ea64:
            *(float **)((longlong)pfVar56 + -8) = pfVar28;
code_r0x000141b6ea65:
                    /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
          case (float *)0x141b6ea8d:
            goto code_r0x000141b6ea8d;
          case (float *)0x141b6eabd:
code_r0x000141b6eabd:
            uVar25 = *(ulonglong *)((longlong)pfVar39 + 3) ^ 0x65686361635f6863;
code_r0x000141b6eacb:
            if (uVar25 == 0 && UNRECOVERED_JUMPTABLE == (float *)0x0) {
              UNRECOVERED_JUMPTABLE = (float *)0x1;
code_r0x000141b6ead6:
              *(code *)((longlong)pfVar28 + 1) = SUB81(UNRECOVERED_JUMPTABLE,0);
              goto code_r0x000141b6ead9;
            }
            goto LAB_141b6ebc7;
          case (float *)0x141b6eae0:
            if (bVar72) {
                    /* WARNING: Bad instruction - Truncating control flow here */
              halt_baddata();
            }
code_r0x000141b6eae2:
            UNRECOVERED_JUMPTABLE = (float *)(ulonglong)((uint)UNRECOVERED_JUMPTABLE ^ (uint)*arg1);
            pfVar39 = (float *)(ulonglong)(byte)*(code *)(arg1 + 1);
code_r0x000141b6eae8:
            if ((int)pfVar39 == 0x68 && (int)UNRECOVERED_JUMPTABLE == 0) {
code_r0x000141b6eaf3:
              *(code *)((longlong)pfVar28 + 1) = (code)0x1;
code_r0x000141b6eaf8:
              *(code *)pfVar28 = (code)0x0;
              return pfVar28;
            }
            goto LAB_141b6ebc7;
          case (float *)0x141b6eb06:
            UNRECOVERED_JUMPTABLE = (float *)((ulonglong)UNRECOVERED_JUMPTABLE ^ *(ulonglong *)arg1)
            ;
            goto code_r0x000141b6eb09;
          case (float *)0x141b6eb18:
            *pfVar65 = fVar77;
            *(byte *)pfVar28 = (char)*(code *)pfVar28 + bVar21;
            *(char *)(UNRECOVERED_JUMPTABLE + 0x522201) =
                 (char)*(code *)(UNRECOVERED_JUMPTABLE + 0x522201) + (char)((ulonglong)arg1 >> 8);
            goto code_r0x000141b6eb21;
          case (float *)0x141b6eb2f:
code_r0x000141b6eb2f:
            UNRECOVERED_JUMPTABLE = (float *)((ulonglong)UNRECOVERED_JUMPTABLE ^ *(ulonglong *)arg1)
            ;
            param_3 = (float *)0x65686361635f6e6f;
            goto code_r0x000141b6eb43;
          case (float *)0x141b6eb31:
            UNRECOVERED_JUMPTABLE =
                 (float *)CONCAT71((int7)((ulonglong)UNRECOVERED_JUMPTABLE >> 8),
                                   (byte)UNRECOVERED_JUMPTABLE |
                                   (byte)*(code *)(UNRECOVERED_JUMPTABLE + -0x12));
            *(undefined8 *)((ulonglong)*(uint *)((longlong)UNRECOVERED_JUMPTABLE + 99) - 8) =
                 0xffffffffc8814965;
            pfVar28 = (float *)((ulonglong)pfVar28 | 6);
            *(char *)pfVar28 = (char)*(code *)pfVar28 + (char)pfVar28;
code_r0x000141b6eb43:
            if (param_3 == *(float **)((longlong)arg1 + 6) && UNRECOVERED_JUMPTABLE == (float *)0x0)
            {
              *(code *)((longlong)pfVar28 + 1) = (code)0x2;
code_r0x000141b6eb51:
              *(code *)pfVar28 = (code)0x0;
              return pfVar28;
            }
            goto LAB_141b6ebc7;
          case (float *)0x141b6eb7b:
                    /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
          case (float *)0x141b6eb99:
code_r0x000141b6eb9b:
            *(char *)pfVar28 = (char)*(code *)pfVar28 + (char)pfVar28;
            return pfVar28;
          case (float *)0x141b6ebb2:
            pfVar28 = (float *)(ulonglong)((int)fVar77 + 0x1419269);
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
            auVar78 = auVar78 & auVar6;
            goto code_r0x000141b6ebbb;
          case (float *)0x141b6ebe7:
            UNRECOVERED_JUMPTABLE = *(float **)UNRECOVERED_JUMPTABLE;
            param_3 = (float *)&UNK_143398304;
            arg1 = (float *)(longlong)
                            *(int *)(&UNK_143398304 + (ulonglong)(uint)*UNRECOVERED_JUMPTABLE * 4);
            goto code_r0x000141b6ebf7;
          case (float *)0x141b6ec31:
            pfVar28 = (float *)((ulonglong)pfVar28 & 0xffffffffffffff28);
            goto code_r0x000141b6ec2a;
          case (float *)0x141b6ee16:
                    /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
          case (float *)0x141b6ee6f:
            pcVar66 = (code *)swi(3);
            pfVar28 = (float *)(*pcVar66)();
            return pfVar28;
          case (float *)0x141b6eeaa:
            pcVar66 = (code *)swi(3);
            pfVar28 = (float *)(*pcVar66)();
            return pfVar28;
          case (float *)0x141b6eeb0:
            UNRECOVERED_JUMPTABLE = arg1;
            goto pdb_140f679a0;
          case (float *)0x141b6ef4d:
code_r0x000141b6ef4d:
            bVar71 = arg1 != (float *)0x0;
            bVar75 = SBORROW8(0,(longlong)arg1);
            pfVar28 = *(float **)(unaff_RBP + -6);
code_r0x000141b6ef57:
            if (bVar75) {
              return pfVar28;
            }
            if (!bVar71) {
              return pfVar28;
            }
code_r0x000141b6ef5b:
            UNRECOVERED_JUMPTABLE = *(float **)(pfVar28 + 2);
            param_3 = (float *)0x1;
            unaff_RBP = *(float **)((longlong)pfVar56 + 0x40);
            pfVar56 = (float *)((longlong)pfVar56 + 0x48);
            goto code_r0x0001406abac0;
          case (float *)0x141b6ef72:
code_r0x000141b6ef72:
            *(code *)((longlong)UNRECOVERED_JUMPTABLE + -0x75) =
                 (code)(((char)*(code *)((longlong)UNRECOVERED_JUMPTABLE + -0x75) -
                        (byte)UNRECOVERED_JUMPTABLE) - bVar75);
            *(float **)((longlong)pfVar56 + -8) = pfVar28;
            *(code *)((longlong)pfVar28 + -0x77) =
                 (code)((byte)*(code *)((longlong)pfVar28 + -0x77) & (byte)UNRECOVERED_JUMPTABLE);
                    /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
          case (float *)0x141b6ef87:
            *(undefined **)((longlong)pfVar56 + -8) = &UNK_141b6ef8d;
            pfVar28 = (float *)func_0x000152077ad5();
            goto code_r0x000141b6ef8d;
          case (float *)0x141b6efcc:
code_r0x000141b6efcc:
            *(char *)pfVar28 = (char)*(code *)pfVar28 + (char)pfVar28;
            *(char *)pfVar28 = (char)*(code *)pfVar28 + (char)pfVar28;
            goto DAT_141b6efd0;
          case (float *)0x141b6eff3:
            *(byte *)pfVar28 = (char)*(code *)pfVar28 + bVar21;
            goto code_r0x000141b6efef;
          case (float *)0x141b6f00a:
code_r0x000141b6f00a:
            goto code_r0x000141b6f00c;
          case (float *)0x141b6f022:
            goto code_r0x000141b6f022;
          case (float *)0x141b6f04a:
            goto code_r0x000141b6f04a;
          case (float *)0x141b6f06e:
            pcVar66 = (code *)swi(3);
            pfVar28 = (float *)(*pcVar66)();
            return pfVar28;
          case (float *)0x141b6f08b:
            out(0x4d,bVar21);
            arg1 = (float *)((ulonglong)UNRECOVERED_JUMPTABLE & 0xffffffff);
code_r0x000141b6f08e:
            in_R11 = (float *)0x0;
            param_2 = (float *)(ulonglong)((int)param_4 - 1);
            pfVar65 = (float *)&UNK_143398378;
            goto code_r0x000141b6f0bd;
          case (float *)0x141b6f701:
code_r0x000141b6f704:
            pcVar66 = (code *)(ulonglong)((int)pfVar65 + 1);
            goto code_r0x000141b6f706;
          case (float *)0x141b6f714:
            return pfVar28;
          case (float *)0x141b6f727:
code_r0x000141b6f727:
            pfVar28 = (float *)((ulonglong)pfVar28 & 0xffffffffffffff20);
            *pfVar28 = (float)((int)*pfVar28 + (int)pfVar28);
code_r0x000141b6f72c:
            *(char *)pfVar28 = (char)*(code *)pfVar28 + (char)pfVar28;
            puVar10 = (undefined1 *)pfVar56;
code_r0x000141b6f725:
            pfVar56 = (float *)puVar10;
            *(undefined8 *)((longlong)pfVar56 + 0x20) = 1;
code_r0x000141b6f734:
            unaff_RDI = pfVar65;
          case (float *)0x141b6f73a:
code_r0x000141b6f73a:
            *(undefined **)((longlong)pfVar56 + -8) = &UNK_141b6f745;
            pdb_142d7f1b0(param_2,unaff_RDI);
            unaff_RDI = *(float **)(param_2 + 4);
            goto code_r0x000141b6f64b;
          case (float *)0x141b6f74d:
            *(int *)((longlong)pfVar28 + -0x73) = *(int *)((longlong)pfVar28 + -0x73) + -1;
            goto code_r0x000141b6f761;
          case (float *)0x141b6f768:
            pfVar28 = (float *)((ulonglong)pfVar28 & 0xffffffffffffff20);
            *pfVar28 = (float)((int)*pfVar28 + (int)pfVar28);
code_r0x000141b6f76d:
            *(char *)pfVar28 = (char)*(code *)pfVar28 + (char)pfVar28;
            plVar59 = (longlong *)pfVar56;
            goto code_r0x000141b6f77b;
          case (float *)0x141b6f7b4:
                    /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
          case (float *)0x141b6f7bc:
            *(byte *)UNRECOVERED_JUMPTABLE = (byte)*(code *)UNRECOVERED_JUMPTABLE & bVar21;
            *(byte *)pfVar28 = (char)*(code *)pfVar28 + bVar21;
            *(byte *)(UNRECOVERED_JUMPTABLE + -0x12) =
                 (char)*(code *)(UNRECOVERED_JUMPTABLE + -0x12) + bVar21;
            *pfVar28 = (float)((int)*pfVar28 + (int)fVar77);
            puVar60 = (undefined1 *)pfVar56;
code_r0x000141b6f7c5:
            *(char *)pfVar28 = (char)*(code *)pfVar28 + (char)pfVar28;
            pfVar56 = (float *)puVar60;
code_r0x000141b6f7cd:
            *(undefined **)((longlong)pfVar56 + -8) = &UNK_141b6f7d8;
            pdb_142d7f1b0(param_2,unaff_RDI);
            unaff_RDI = *(float **)(param_2 + 4);
code_r0x000141b6f7dc:
            puVar58 = (undefined1 *)pfVar56;
code_r0x000141b6f5ca:
            *(code *)(*(ulonglong *)(param_2 + 2) + (longlong)unaff_RDI) = (code)0xa;
            unaff_RDI = (float *)((longlong)unaff_RDI + 1);
            *(float **)(param_2 + 4) = unaff_RDI;
            pfVar56 = (float *)puVar58;
            if (unaff_R12 == 0) {
code_r0x000141b6f642:
              puVar10 = (undefined1 *)pfVar56;
              pfVar65 = unaff_RDI;
              if (*(float **)param_2 == unaff_RDI) goto code_r0x000141b6f725;
            }
            else {
              unaff_RBX = (float *)unaff_R15[2];
              puVar9 = puVar58;
code_r0x000141b6f5e2:
              pfVar56 = (float *)puVar9;
              if (unaff_RBX != (float *)0x0) {
                unaff_R14 = unaff_R15[1];
                pfVar65 = unaff_RDI;
code_r0x000141b6f5f0:
                do {
                  if ((float *)(*(ulonglong *)param_2 - (longlong)pfVar65) < unaff_RBX) {
                    *(undefined8 *)((longlong)pfVar56 + 0x20) = 1;
                    *(undefined **)((longlong)pfVar56 + -8) = &UNK_141b6f638;
                    pdb_142d7f1b0(param_2,pfVar65,unaff_RBX,1);
                    pfVar65 = *(float **)(param_2 + 4);
code_r0x000141b6f63c:
                  }
                  uVar25 = *(ulonglong *)(param_2 + 2);
                  *(undefined **)((longlong)pfVar56 + -8) = &UNK_141b6f60d;
                  pub_142e32760((code *)(uVar25 + (longlong)pfVar65),unaff_R14,unaff_RBX);
                  unaff_RDI = (float *)((longlong)pfVar65 + (longlong)unaff_RBX);
                  puVar14 = (undefined1 *)pfVar56;
code_r0x000141b6f610:
                  pfVar56 = (float *)puVar14;
                  *(float **)(param_2 + 4) = unaff_RDI;
                  unaff_R12 = unaff_R12 + -1;
                  pfVar65 = unaff_RDI;
                } while (unaff_R12 != 0);
                goto code_r0x000141b6f642;
              }
              *(float **)(param_2 + 4) = unaff_RDI;
code_r0x000141b6f71c:
              puVar10 = (undefined1 *)pfVar56;
              pfVar65 = unaff_RDI;
              if (*(float **)param_2 == unaff_RDI) goto code_r0x000141b6f725;
            }
            goto code_r0x000141b6f64b;
          case (float *)0x141b6f80d:
            *(int *)((longlong)pfVar56 + 0x90) = *(int *)((longlong)pfVar56 + 0x90) - (int)unaff_RBP
            ;
            goto code_r0x000141b6f814;
          case (float *)0x141b6f856:
            unaff_XMM10_Da = unaff_XMM8_Dc;
            unaff_XMM10_Db = unaff_XMM8_Dd;
            goto code_r0x000141b6f82f;
          case (float *)0x141b6f85d:
code_r0x000141b6f85d:
            if (pfVar37 == (float *)0x1) {
              arg1 = (float *)((ulonglong)arg1 & 0xff);
              unaff_XMM10_Da = unaff_XMM8_Dc;
              unaff_XMM10_Db = unaff_XMM8_Dd;
              goto code_r0x000141b6f82f;
            }
            unaff_RDI = (float *)(ulonglong)(uint)((int)pfVar65 >> 1);
            in_XMM0._4_4_ = (float)unaff_XMM12_Db;
            in_XMM0._0_4_ = unaff_XMM12_Da;
            in_XMM0._8_4_ = (float)unaff_XMM12_Dc;
            in_XMM0._12_4_ = (float)unaff_XMM12_Dd;
code_r0x000141b6f875:
            auVar78._4_12_ = in_XMM0._4_12_;
            auVar78._0_4_ = in_XMM0._0_4_ * unaff_XMM7_Da;
            pfVar65 = unaff_RDI;
            in_XMM1_Ba = SUB41(unaff_XMM9_Da,0);
            in_XMM1_Bb = cVar84;
            in_XMM1_Bc = cVar86;
            in_XMM1_Bd = cVar88;
          case (float *)0x141b6f87d:
            goto code_r0x000141b6f87d;
          case (float *)0x141b6f8d3:
code_r0x000141b6f8d3:
            auVar81._0_4_ = in_XMM0._0_4_ + in_XMM0._0_4_;
            auVar81._4_4_ = in_XMM0._4_4_ + in_XMM0._4_4_;
            auVar81._8_4_ = in_XMM0._8_4_ + in_XMM0._8_4_;
            auVar81._12_4_ = in_XMM0._12_4_ + in_XMM0._12_4_;
            goto code_r0x000141b6f8ce;
          case (float *)0x141b6f91d:
            goto code_r0x000141b6f913;
          case (float *)0x141b6f984:
code_r0x000141b6f98b:
            *(int *)((longlong)pfVar28 + 99) =
                 *(int *)((longlong)pfVar28 + 99) + (int)UNRECOVERED_JUMPTABLE;
            goto code_r0x000141b6f965;
          case (float *)0x141b6f9cb:
            auVar78 = unaff_XMM11;
            goto code_r0x000141b6f9ed;
          case (float *)0x141b6f9d3:
code_r0x000141b6f9d3:
            auVar78 = unaff_XMM11;
            goto code_r0x000141b6f9ed;
          case (float *)0x141b6fa02:
            *pfVar28 = (float)((int)*pfVar28 + (int)fVar77);
            *(code *)((longlong)UNRECOVERED_JUMPTABLE + 0xf) =
                 (code)((char)*(code *)((longlong)UNRECOVERED_JUMPTABLE + 0xf) + bVar21);
            goto code_r0x000141b6fa22;
          }
          goto code_r0x000141b6da58;
        case (float *)0x141b6d701:
          *(int *)((longlong)pfVar28 + -0x7b) = *(int *)((longlong)pfVar28 + -0x7b) + -1;
          *(code *)((longlong)unaff_RBP + 0x2d) = (code)0x0;
          goto code_r0x000141b6d70b;
        case (float *)0x141b6d70a:
          goto code_r0x000141b6d70a;
        case (float *)0x141b6d70b:
          goto code_r0x000141b6d70b;
        case (float *)0x141b6d71c:
          goto code_r0x000141b6d71c;
        case (float *)0x141b6d735:
          *(byte *)pfVar28 = (char)*(code *)pfVar28 + bVar21;
          arg1 = pfVar28;
          goto code_r0x000141b6d73a;
        case (float *)0x141b6d7b4:
          pfVar37 = (float *)(ulonglong)(uVar68 + 0x433981f0);
          uRam4c284189481973cf = uVar68;
          goto code_r0x000141b6d7b8;
        case (float *)0x141b6d7d8:
          *pfVar28 = (float)((int)*pfVar28 + uVar68);
          *(code *)((longlong)pfVar28 + -0x77) =
               (code)((char)*(code *)((longlong)pfVar28 + -0x77) + cVar22);
          *(byte *)pfVar28 = (char)*(code *)pfVar28 + bVar21;
          goto code_r0x000141b6d7e4;
        case (float *)0x141b6d7ef:
          if (-0x1433981f1 < (longlong)uVar25) {
            *(byte *)UNRECOVERED_JUMPTABLE = (char)*(code *)UNRECOVERED_JUMPTABLE - bVar21;
            bVar72 = *(code *)UNRECOVERED_JUMPTABLE == (code)0x0;
            goto code_r0x000141b6d7f3;
          }
          goto code_r0x000141b6d815;
        case (float *)0x141b6d848:
          goto code_r0x000141b6d847;
        case (float *)0x141b6d889:
          uVar68 = uVar68 + (int)*pfVar28;
          *(char *)(ulonglong)uVar68 = *(char *)(ulonglong)uVar68 + (char)uVar68;
          goto code_r0x000141b6d88d;
        case (float *)0x141b6d94c:
          for (; arg1 = pfVar39, pfVar65 = unaff_RDI, param_4 != (code *)0x1; param_4 = param_4 + 1)
          {
LAB_141b6d92c:
            param_4 = (code *)(ulonglong)(byte)((code *)((longlong)param_3 + -1))[(longlong)pfVar28]
            ;
            if ((code *)0x22 < param_4) goto LAB_141b6d9a5;
            bVar75 = ((ulonglong)pfVar65 >> ((ulonglong)param_4 & 0x3f) & 1) != 0;
            unaff_RDI = pfVar65;
code_r0x000141b6d93c:
            pfVar39 = arg1;
            pfVar65 = unaff_RDI;
            if (!bVar75) goto LAB_141b6d977;
            *(float **)(arg1 + 10) = pfVar28;
            param_4 = (code *)((longlong)UNRECOVERED_JUMPTABLE + (longlong)pfVar28);
            pfVar28 = (float *)((longlong)pfVar28 + 1);
          }
LAB_141b6d952:
          *(undefined8 *)((longlong)pfVar56 + 0x20) = 5;
          UNRECOVERED_JUMPTABLE = pfVar39;
          goto LAB_141b6d95b;
        case (float *)0x141b6d977:
LAB_141b6d977:
          arg1 = pfVar39;
          if (param_4 == (code *)0x22) goto code_r0x000141b6d97d;
LAB_141b6d9a5:
          uVar68 = (uint)param_4;
code_r0x000141b6d9a9:
          UNRECOVERED_JUMPTABLE = arg1;
          if (uVar68 != 0x7b) {
            *(undefined8 *)((longlong)pfVar56 + 0x20) = 10;
            goto LAB_141b6d95b;
          }
          pfVar37 = arg1 + 0x12;
          *(byte *)pfVar37 = (char)*(code *)pfVar37 - 1;
          unaff_RDI = pfVar65;
          if (*(code *)pfVar37 == (code)0x0) {
            *(undefined8 *)((longlong)pfVar56 + 0x20) = 0x18;
            goto LAB_141b6d95b;
          }
          goto code_r0x000141b6d9b8;
        case (float *)0x141b6d984:
code_r0x000141b6d985:
          pfVar65 = (float *)((longlong)unaff_RDI + 1);
          *pfVar65 = (float)((int)*pfVar65 - 1);
          arg1 = (float *)CONCAT62((int6)((ulonglong)pfVar39 >> 0x10),CONCAT11(0x44,(char)pfVar39));
          uVar25 = (ulonglong)pfVar28 & 0xffffffffffffff20;
          goto code_r0x000141b6d98c;
        case (float *)0x141b6da21:
          goto code_r0x000141b6da21;
        case (float *)0x141b6da27:
          unaff_RDI = (float *)CONCAT71((int7)((ulonglong)unaff_RDI >> 8),
                                        (char)unaff_RDI + (char)unaff_R15);
          goto code_r0x000141b6da2a;
        case (float *)0x141b6da2d:
          *(code *)((longlong)unaff_RDI + 0x35) =
               (code)((byte)*(code *)((longlong)unaff_RDI + 0x35) & 0x81);
          goto code_r0x000141b6da30;
        case (float *)0x141b6da33:
          return pfVar28;
        case (float *)0x141b6da42:
          pfVar28 = (float *)(ulonglong)(uVar68 + 1);
          goto code_r0x000141b6da44;
        case (float *)0x141b6da48:
          goto code_r0x000141b6da48;
        case (float *)0x141b6da4e:
          *(byte *)unaff_RBX = (byte)*(code *)unaff_RBX & bVar21;
          *(byte *)pfVar28 = (char)*(code *)pfVar28 + bVar21;
          goto code_r0x000141b6da52;
        case (float *)0x141b6e7b6:
          unaff_RBX[(longlong)unaff_RBP * 2] =
               (float)((int)unaff_RBX[(longlong)unaff_RBP * 2] + uVar68);
          *(code *)((longlong)pfVar28 + 1) = (code)0x3;
          goto LAB_141b6e809;
        case (float *)0x141b6e7e3:
          pfVar28 = (float *)((ulonglong)param_2 & 0xffffffff);
          goto code_r0x000141b6e7de;
        case (float *)0x141b6e808:
          uVar24 = rdtsc();
          pfVar28 = (float *)CONCAT44((int)((ulonglong)pfVar28 >> 0x20),(int)uVar24);
          goto LAB_141b6e80b;
        case (float *)0x141b6e82e:
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        case (float *)0x141b6e852:
          bVar72 = _UNK_1433981f0 == 0x6c6c6157;
          goto code_r0x000141b6e858;
        case (float *)0x141b6e882:
          goto code_r0x000141b6e882;
        case (float *)0x141b6e8c6:
          goto code_r0x000141b6e8c6;
        case (float *)0x141b6e8e8:
          bVar71 = false;
          pfVar28 = (float *)CONCAT71(uVar31,bVar21 | (&UNK_1433981a9)[uVar25]);
          goto code_r0x000141b6e8eb;
        case (float *)0x141b6e906:
          *UNRECOVERED_JUMPTABLE = (float)((int)*UNRECOVERED_JUMPTABLE + uVar68);
          goto code_r0x000141b6e908;
        case (float *)0x141b6e91b:
          goto code_r0x000141b6e91b;
        case (float *)0x141b6e939:
          *(byte *)(uVar25 + 0x18b4209f1) = *(byte *)(uVar25 + 0x18b4209f1) | 0x81;
          goto code_r0x000141b6e936;
        case (float *)0x141b6e968:
          goto code_r0x000141b6e96d;
        case (float *)0x141b6e9aa:
          *(float **)((longlong)pfVar56 + -8) = pfVar56;
          pfVar56 = (float *)((longlong)pfVar56 + -8);
          if (bVar71) {
            return pfVar28;
          }
          goto joined_r0x000141b6e9ae;
        case (float *)0x141b6e9cc:
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        case (float *)0x141b6e9e8:
          pfVar28 = (float *)(ulonglong)(uVar68 & 0x746157b9);
          bVar72 = UNK_1433981f4 == 'r' &&
                   (int)UNRECOVERED_JUMPTABLE == *(int *)(&UNK_1433981f0 + unaff_GS_OFFSET);
          goto code_r0x000141b6e9fc;
        case (float *)0x141b6ea15:
          *(code *)((longlong)param_2 + -0x3d) =
               (code)((byte)*(code *)((longlong)param_2 + -0x3d) & (byte)unaff_RBX);
          goto LAB_141b6ea18;
        case (float *)0x141b6ea34:
          goto code_r0x000141b6ea31;
        case (float *)0x141b6ea5d:
          *(short *)pfVar28 = *(short *)pfVar28 + (short)pfVar28;
          *(code *)((longlong)pfVar28 + -0x73) =
               (code)((char)*(code *)((longlong)pfVar28 + -0x73) + cVar22);
          goto code_r0x000141b6ea68;
        case (float *)0x141b6ea8d:
          goto code_r0x000141b6ea8d;
        case (float *)0x141b6eab0:
          UNRECOVERED_JUMPTABLE =
               (float *)(CONCAT44(_UNK_1433981f4,_UNK_1433981f0) ^ 0x61635f6863746970);
          goto code_r0x000141b6eabd;
        case (float *)0x141b6ead6:
          goto code_r0x000141b6ead6;
        case (float *)0x141b6eae8:
          goto code_r0x000141b6eae8;
        case (float *)0x141b6eaff:
          goto code_r0x000141b6eb07;
        case (float *)0x141b6eb01:
          out(*param_2,0x81f0);
          UNRECOVERED_JUMPTABLE =
               (float *)((ulonglong)UNRECOVERED_JUMPTABLE ^ CONCAT44(_UNK_1433981f4,_UNK_1433981f0))
          ;
          goto code_r0x000141b6eb09;
        case (float *)0x141b6eb4b:
          if ((POPCOUNT((ulonglong)UNRECOVERED_JUMPTABLE & 0xff) & 1U) == 0) {
            UNRECOVERED_JUMPTABLE =
                 (float *)(CONCAT44(_UNK_1433981f4,_UNK_1433981f0) ^ 0x686361635f776179);
            pfVar39 = (float *)((ulonglong)UNK_1433981f8 ^ 0x65 | (ulonglong)UNRECOVERED_JUMPTABLE);
            goto code_r0x000141b6eb65;
          }
          if (bVar75) goto code_r0x000141b6eb69;
          goto code_r0x000141b6eb00;
        case (float *)0x141b6eb69:
code_r0x000141b6eb69:
          pfVar39 = (float *)((ulonglong)UNRECOVERED_JUMPTABLE | 0x1433981f0);
          goto code_r0x000141b6eb65;
        case (float *)0x141b6eb82:
          uVar25 = (ulonglong)UNRECOVERED_JUMPTABLE ^ CONCAT44(_UNK_1433981f4,_UNK_1433981f0);
          goto code_r0x000141b6eb85;
        case (float *)0x141b6ebb7:
          goto code_r0x000141b6ebb7;
        case (float *)0x141b6ec01:
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        case (float *)0x141b6ede6:
          goto code_r0x000141b6ede6;
        case (float *)0x141b6ee3f:
          pcVar66 = (code *)swi(3);
          pfVar28 = (float *)(*pcVar66)(CONCAT71((int7)((ulonglong)UNRECOVERED_JUMPTABLE >> 8),
                                                 cVar22 + (char)((ulonglong)UNRECOVERED_JUMPTABLE >>
                                                                8)));
          return pfVar28;
        case (float *)0x141b6ee7a:
          goto code_r0x000141b6ee7a;
        case (float *)0x141b6ee80:
          goto code_r0x000141b6ee80;
        case (float *)0x141b6ef1d:
          goto code_r0x000141b6ef1d;
        case (float *)0x141b6ef42:
          puVar55 = (undefined8 *)((longlong)pfVar56 + -8);
          pfVar56 = (float *)((longlong)pfVar56 + -8);
          *puVar55 = param_2;
          do {
          } while (UNRECOVERED_JUMPTABLE == (float *)0x0);
          goto code_r0x000141b6ef49;
        case (float *)0x141b6ef57:
          goto code_r0x000141b6ef57;
        case (float *)0x141b6ef9c:
          goto code_r0x000141b6ef9c;
        case (float *)0x141b6efc3:
          arg1 = pfVar39;
          goto DAT_141b6efd0;
        case (float *)0x141b6efda:
          goto code_r0x000141b6efda;
        case (float *)0x141b6eff2:
          *(byte *)pfVar28 = (char)*(code *)pfVar28 + bVar21;
          *(code *)((longlong)pfVar28 + -0x75) =
               (code)((char)*(code *)((longlong)pfVar28 + -0x75) + cVar22);
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        case (float *)0x141b6f01a:
          goto code_r0x000141b6f01a;
        case (float *)0x141b6f03e:
          goto code_r0x000141b6f037;
        case (float *)0x141b6f05b:
          pcVar27 = &UNK_1433981b1 + uVar25;
          *pcVar27 = *pcVar27 + cVar22;
          UNRECOVERED_JUMPTABLE = (float *)(&UNK_1433981ef + uVar25);
          if (UNRECOVERED_JUMPTABLE != (float *)0x0 && *pcVar27 != '\0') {
                    /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
          }
          param_3 = (float *)((longlong)param_3 * 3);
          goto code_r0x000141b6f064;
        case (float *)0x141b6f6d1:
          *(byte *)pfVar28 = (char)*(code *)pfVar28 + bVar21;
          (&UNK_1433981a9)[uVar25] = (&UNK_1433981a9)[uVar25] + bVar21;
          *pfVar28 = (float)((int)*pfVar28 + uVar68);
          *(byte *)pfVar28 = (char)*(code *)pfVar28 + bVar21;
          goto code_r0x000141b6f6d4;
        case (float *)0x141b6f6e4:
code_r0x000141b6f6e4:
          *(float **)((longlong)pfVar56 + -8) = unaff_RBP;
          *(undefined1 **)((longlong)pfVar56 + -0x10) = (undefined1 *)((longlong)pfVar56 + -8);
          pfVar56 = (float *)((longlong)pfVar56 + -0x210a);
          goto code_r0x000141b6f6d4;
        case (float *)0x141b6f6f7:
          pfVar28 = (float *)((ulonglong)pfVar56 & 0xffffffff);
          *(char *)pfVar28 = (char)*(code *)pfVar28 + (char)pfVar28;
          goto code_r0x000141b6f6fa;
        case (float *)0x141b6f70a:
          goto code_r0x000141b6f70a;
        case (float *)0x141b6f71d:
          goto code_r0x000141b6f71c;
        case (float *)0x141b6f738:
          *(byte *)pfVar28 = (char)*(code *)pfVar28 + bVar21;
          goto code_r0x000141b6f73a;
        case (float *)0x141b6f784:
          *(byte *)UNRECOVERED_JUMPTABLE = (byte)*(code *)UNRECOVERED_JUMPTABLE & bVar21;
          goto code_r0x000141b6f786;
        case (float *)0x141b6f78c:
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        case (float *)0x141b6f826:
          puVar36 = (undefined1 *)((longlong)pfVar56 + -8);
          *(float **)((longlong)pfVar56 + -8) = pfVar56;
          goto code_r0x000141b6f823;
        case (float *)0x141b6f82d:
          goto code_r0x000141b6f82d;
        case (float *)0x141b6f84d:
          goto code_r0x000141b6f84d;
        case (float *)0x141b6f8a3:
          goto code_r0x000141b6f8a3;
        case (float *)0x141b6f8ed:
          goto code_r0x000141b6f8ed;
        case (float *)0x141b6f954:
          goto code_r0x000141b6fb77;
        case (float *)0x141b6f99b:
          break;
        case (float *)0x141b6f9a3:
          break;
        case (float *)0x141b6f9d2:
          pfVar56 = (float *)((longlong)pfVar56 + 8);
          goto code_r0x000141b6f9d3;
        }
        goto code_r0x000141b6f9ae;
      case 7:
        uVar68 = (int)unaff_RDI >> 1;
        unaff_RDI = (float *)(ulonglong)uVar68;
        UNRECOVERED_JUMPTABLE = (float *)&UNK_1433981df;
        if (uVar68 == 0) goto code_r0x000141b6d580;
        pfVar28 = (float *)((ulonglong)pfVar28 & 0xffffffff);
        UNRECOVERED_JUMPTABLE = unaff_RBX;
code_r0x000141b6d53a:
        *(undefined8 *)((longlong)pfVar56 + -8) = 0x141b6d53f;
        pfVar28 = (float *)pdb_141654940(pfVar28);
        unaff_RBX = UNRECOVERED_JUMPTABLE;
        if (pfVar28 != (float *)0x0) {
code_r0x000141b6d544:
          *(float **)(param_2 + 2) = pfVar28;
          *(code *)param_2 = (code)0x1;
          *(byte *)(unaff_RBX + 0x12) = (char)*(code *)(unaff_RBX + 0x12) + 1;
          return param_2;
        }
        *(byte *)(UNRECOVERED_JUMPTABLE + 0x12) = (char)*(code *)(UNRECOVERED_JUMPTABLE + 0x12) + 1;
        *(code *)((longlong)param_2 + 1) = SUB81(unaff_RBP,0);
        puVar48 = (undefined1 *)pfVar56;
        if (*(ulonglong *)(UNRECOVERED_JUMPTABLE + 10) < *(ulonglong *)(UNRECOVERED_JUMPTABLE + 8))
        {
          param_3 = *(float **)(UNRECOVERED_JUMPTABLE + 6);
          pfVar28 = (float *)(*(ulonglong *)(UNRECOVERED_JUMPTABLE + 10) + 1);
          arg1 = (float *)-*(ulonglong *)(UNRECOVERED_JUMPTABLE + 8);
code_r0x000141b6d574:
          do {
            param_4 = (code *)(ulonglong)(byte)((code *)((longlong)param_3 + -1))[(longlong)pfVar28]
            ;
            bVar72 = param_4 < (code *)0x20;
            bVar71 = param_4 == (code *)0x20;
code_r0x000141b6d57e:
            iVar23 = (int)param_4;
            puVar48 = (undefined1 *)pfVar56;
            if (!bVar72 && !bVar71) {
code_r0x000141b6d5b5:
              if (iVar23 != 0x7d) {
                *(undefined8 *)(puVar48 + 0x20) = 10;
                goto code_r0x000141b6d5a3;
              }
              *(float **)(UNRECOVERED_JUMPTABLE + 10) = pfVar28;
              goto code_r0x000141b6d5da;
            }
code_r0x000141b6d580:
            iVar23 = (int)param_4;
            puVar48 = (undefined1 *)pfVar56;
            if (((ulonglong)unaff_RDI >> ((ulonglong)param_4 & 0x3f) & 1) == 0)
            goto code_r0x000141b6d5b5;
            *(float **)(UNRECOVERED_JUMPTABLE + 10) = pfVar28;
code_r0x000141b6d58a:
            pcVar66 = (code *)((longlong)arg1 + (longlong)pfVar28);
            pfVar28 = (float *)((longlong)pfVar28 + 1);
            puVar48 = (undefined1 *)pfVar56;
          } while (pcVar66 != (code *)0x0);
        }
        *(undefined8 *)(puVar48 + 0x20) = 3;
code_r0x000141b6d5a3:
        *(undefined8 *)(puVar48 + -8) = 0x141b6d5ad;
        uVar25 = pdb_142d855a0(UNRECOVERED_JUMPTABLE,puVar48 + 0x20);
        *(ulonglong *)(param_2 + 2) = uVar25;
        cVar20 = (code)0x1;
        goto code_r0x000141b6d5dc;
      case 8:
        UNRECOVERED_JUMPTABLE = (float *)CONCAT71(0x1433981,-0x20 - (&UNK_14339816d)[uVar25]);
code_r0x000141b6d69a:
        *(undefined8 *)((longlong)pfVar56 + -8) = 0x141b6d69f;
        in_XMM0._0_8_ = pdb_141657680(UNRECOVERED_JUMPTABLE);
        in_XMM0._8_8_ = extraout_XMM0_Qb_03;
        pfVar28 = (float *)(ulonglong)*(byte *)((longlong)pfVar56 + 0x28);
        pfVar39 = arg1;
code_r0x000141b6d6a4:
        pfVar28 = (float *)(longlong)*(int *)(&UNK_143398200 + (longlong)pfVar28 * 4);
        pfVar37 = (float *)&UNK_143398200;
        arg1 = pfVar39;
        pfVar65 = unaff_RDI;
code_r0x000141b6d6af:
        UNRECOVERED_JUMPTABLE = arg1;
        bVar75 = CARRY8((ulonglong)pfVar28,(ulonglong)pfVar37);
        bVar73 = SCARRY8((longlong)pfVar28,(longlong)pfVar37);
        pfVar28 = (float *)((longlong)pfVar28 + (longlong)pfVar37);
        bVar72 = pfVar28 == (float *)0x0;
        bVar71 = (POPCOUNT((ulonglong)pfVar28 & 0xff) & 1U) == 0;
        bVar21 = (byte)pfVar28;
        fVar77 = SUB84(pfVar28,0);
        uVar38 = SUB82(UNRECOVERED_JUMPTABLE,0);
        pfVar39 = pfVar37;
        arg1 = UNRECOVERED_JUMPTABLE;
        unaff_RDI = pfVar65;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
        switch(pfVar28) {
        case (float *)0x5c0f45f3:
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        case (float *)0x141b6d6b4:
          *param_2 = 0.0;
          return param_2;
        case (float *)0x141b6d6dd:
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        case (float *)0x141b6d706:
          bVar72 = fVar77 == 0.0;
          goto code_r0x000141b6d708;
        case (float *)0x141b6d711:
          goto code_r0x000141b6d711;
        case (float *)0x141b6d71a:
code_r0x000141b6d71c:
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        case (float *)0x141b6d71b:
          *param_2 = 4.2039e-45;
          return param_2;
        case (float *)0x141b6d72c:
          unaff_RDI = (float *)((longlong)pfVar65 + 1);
          goto code_r0x000141b6d72d;
        case (float *)0x141b6d745:
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        case (float *)0x141b6d7c4:
          pfVar28 = (float *)(ulonglong)((int)fVar77 + 1);
          pfVar39 = UNRECOVERED_JUMPTABLE;
          goto code_r0x000141b6d7b8;
        case (float *)0x141b6d7e8:
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        case (float *)0x141b6d7ff:
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        case (float *)0x141b6d858:
          *(undefined1 *)((longlong)pfVar56 + 0x28) = 0xd;
          break;
        case (float *)0x141b6d899:
          *(undefined1 *)((longlong)pfVar56 + 0x28) = 0xd;
          break;
        case (float *)0x141b6d95c:
LAB_141b6d95b:
          *(undefined8 *)((longlong)pfVar56 + -8) = 0x141b6d96b;
          uVar25 = pdb_142d84ef0(UNRECOVERED_JUMPTABLE,(undefined1 *)((longlong)pfVar56 + 0x20));
          *(ulonglong *)(param_2 + 2) = uVar25;
          *(code *)param_2 = (code)0x1;
          return param_2;
        case (float *)0x141b6d987:
          goto code_r0x000141b6d987;
        case (float *)0x141b6d994:
          uVar25 = (ulonglong)(uint)pfVar37[(longlong)pfVar28];
          goto code_r0x000141b6d98c;
        case (float *)0x141b6da31:
          pfVar39 = UNRECOVERED_JUMPTABLE;
          goto code_r0x000141b6da30;
        case (float *)0x141b6da37:
          pfVar37[10] = fVar77;
          do {
            UNRECOVERED_JUMPTABLE = pfVar37;
            *(float **)(UNRECOVERED_JUMPTABLE + 10) = pfVar28;
            param_4 = (code *)((longlong)arg1 + (longlong)pfVar28);
            unaff_RDI = pfVar65;
code_r0x000141b6da3e:
            param_4 = param_4 + 1;
            pfVar28 = (float *)((longlong)pfVar28 + 1);
            pfVar39 = arg1;
code_r0x000141b6da44:
            bVar72 = param_4 == (code *)0x1;
code_r0x000141b6da48:
            if (bVar72) goto code_r0x000141b6da4a;
code_r0x000141b6da24:
            param_4 = (code *)(ulonglong)(byte)((code *)((longlong)param_3 + -1))[(longlong)pfVar28]
            ;
code_r0x000141b6da2a:
            pfVar37 = UNRECOVERED_JUMPTABLE;
            if ((code *)0x20 < param_4) break;
code_r0x000141b6da30:
            UNRECOVERED_JUMPTABLE = pfVar37;
            arg1 = pfVar39;
            pfVar65 = unaff_RDI;
          } while (((ulonglong)unaff_RDI >> ((ulonglong)param_4 & 0x3f) & 1) != 0);
          goto code_r0x000141b6da65;
        case (float *)0x141b6da3d:
code_r0x000141b6da3d:
          pfVar39 = arg1;
          UNRECOVERED_JUMPTABLE =
               (float *)CONCAT71((int7)((ulonglong)pfVar37 >> 8),
                                 (char)pfVar37 + (char)*(code *)((longlong)pfVar37 + -1));
          *(undefined4 *)((longlong)pfVar28 + -1) = *(undefined4 *)((longlong)pfVar28 + -1);
          goto code_r0x000141b6da44;
        case (float *)0x141b6da43:
          pcVar66 = (code *)((longlong)pfVar37 + -0x7d);
          *pcVar66 = (code)((byte)*pcVar66 >> 1 | (char)*pcVar66 << 7);
          *(int *)((longlong)unaff_RBP + -0x26) =
               *(int *)((longlong)unaff_RBP + -0x26) + (int)param_2;
          goto code_r0x000141b6da4a;
        case (float *)0x141b6da52:
code_r0x000141b6da52:
          *(code *)((longlong)pfVar28 + -0x73) =
               (code)((char)*(code *)((longlong)pfVar28 + -0x73) + (char)pfVar37);
          *(float **)((longlong)pfVar56 + -8) = pfVar56;
          pfVar56 = (float *)((longlong)pfVar56 + -8);
        case (float *)0x141b6da58:
          goto code_r0x000141b6da58;
        case (float *)0x141b6da5e:
          param_2[2] = fVar77;
          goto code_r0x000141b6da5d;
        case (float *)0x141b6e7c6:
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        case (float *)0x141b6e7f3:
LAB_141b6e7f3:
          *(code *)((longlong)pfVar28 + 1) = (code)0xd;
          goto LAB_141b6e809;
        case (float *)0x141b6e818:
          goto code_r0x000141b6e818;
        case (float *)0x141b6e83e:
          uVar25 = (ulonglong)*(uint *)((longlong)pfVar37 * 5);
          goto code_r0x000141b6e841;
        case (float *)0x141b6e862:
          out(*param_2,uVar38);
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        case (float *)0x141b6e892:
          goto code_r0x000141b6e892;
        case (float *)0x141b6e8d6:
          pcVar66 = (code *)((longlong)pfVar37 + 9);
          *pcVar66 = (code)((char)*pcVar66 + (char)pfVar37);
          bVar72 = *pcVar66 == (code)0x0;
          pfVar56 = unaff_RBP + 2;
          pfVar39 = UNRECOVERED_JUMPTABLE;
          goto code_r0x000141b6e8da;
        case (float *)0x141b6e8f8:
          goto code_r0x000141b6e8f8;
        case (float *)0x141b6e916:
          goto code_r0x000141b6e916;
        case (float *)0x141b6e92b:
          goto code_r0x000141b6e92b;
        case (float *)0x141b6e949:
          pcVar66 = (code *)swi(3);
          pfVar28 = (float *)(*pcVar66)();
          return pfVar28;
        case (float *)0x141b6e978:
          ((code *)((longlong)pfVar65 + -0x4a))[(longlong)pfVar37] =
               (code)((char)((code *)((longlong)pfVar65 + -0x4a))[(longlong)pfVar37] +
                     (bVar21 | (byte)*(code *)((longlong)pfVar37 + 0x6c41f1)));
          pcVar66 = (code *)swi(1);
          pfVar28 = (float *)(*pcVar66)();
          return pfVar28;
        case (float *)0x141b6e9ba:
          unaff_RDI = (float *)((longlong)pfVar65 + 1);
          cVar20 = (code)in(uVar38);
          *(code *)pfVar65 = cVar20;
          goto code_r0x000141b6e9bb;
        case (float *)0x141b6e9dc:
          goto code_r0x000141b6e9dc;
        case (float *)0x141b6e9f8:
          pfVar39 = UNRECOVERED_JUMPTABLE;
          if (bVar75) {
                    /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
          }
          goto code_r0x000141b6e9fa;
        case (float *)0x141b6ea25:
          goto code_r0x000141b6ea25;
        case (float *)0x141b6ea44:
          goto code_r0x000141b6ea44;
        case (float *)0x141b6ea6d:
          UNRECOVERED_JUMPTABLE = pfVar37;
          goto code_r0x000141b6ea68;
        case (float *)0x141b6ea9d:
          out(*(code *)param_2,uVar38);
          if (*(float **)UNRECOVERED_JUMPTABLE != pfVar37) goto LAB_141b6ebc7;
code_r0x000141b6eaa7:
          UNRECOVERED_JUMPTABLE = (float *)CONCAT71((int7)((ulonglong)pfVar37 >> 8),2);
          *(code *)((longlong)pfVar28 + 1) = (code)0x2;
          goto code_r0x000141b6eaa4;
        case (float *)0x141b6eac0:
code_r0x000141b6eac0:
          *(undefined8 *)((longlong)pfVar56 + -8) = 0x6361635f;
          puVar54 = (undefined8 *)((longlong)pfVar56 + -0x10);
          pfVar56 = (float *)((longlong)pfVar56 + -0x10);
          *puVar54 = 0x42334c65;
          UNRECOVERED_JUMPTABLE =
               (float *)(ulonglong)(uint)((int)pfVar37 + *(int *)((longlong)pfVar37 + 9));
          goto code_r0x000141b6eacd;
        case (float *)0x141b6eae6:
          *(float **)((longlong)pfVar56 + -8) = UNRECOVERED_JUMPTABLE;
          *(undefined8 *)((longlong)pfVar56 + -0x10) = 0xffffffff850fca09;
code_r0x000141b6eaef:
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        case (float *)0x141b6eaf8:
          goto code_r0x000141b6eaf8;
        case (float *)0x141b6eb0f:
code_r0x000141b6eb0f:
          if (!bVar75) {
            return pfVar28;
          }
          if (bVar72) {
            halt_baddata();
          }
          goto code_r0x000141b6eb14;
        case (float *)0x141b6eb11:
          if (bVar72) {
                    /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
          }
code_r0x000141b6eb14:
          UNRECOVERED_JUMPTABLE = pfVar37;
          uVar68 = (uint)arg1 | (uint)UNRECOVERED_JUMPTABLE;
          goto code_r0x000141b6eb13;
        case (float *)0x141b6eb5b:
          goto code_r0x000141b6eb5b;
        case (float *)0x141b6eb79:
          out(*param_2,uVar38);
          if (!bVar75) {
            *(byte *)pfVar28 = (char)*(code *)pfVar28 + bVar21;
            goto LAB_141b6ebc7;
          }
          uVar25 = (ulonglong)((uint)*UNRECOVERED_JUMPTABLE ^ 0x5f776179);
          pfVar39 = UNRECOVERED_JUMPTABLE;
code_r0x000141b6eb85:
          if (*(short *)(pfVar39 + 2) == 0x7465 && uVar25 == 0) {
            *(code *)((longlong)pfVar28 + 1) = (code)0x5;
            *(code *)pfVar28 = (code)0x0;
            return pfVar28;
          }
          goto LAB_141b6ebc7;
        case (float *)0x141b6eb92:
          return pfVar28;
        case (float *)0x141b6ebc7:
          goto LAB_141b6ebc7;
        case (float *)0x141b6ec11:
          pcVar66 = (code *)((longlong)pfVar28 +
                            (ulonglong)*(uint *)((longlong)unaff_RBP + -0x7cb700c1) * 2);
          *(uint *)pcVar66 = *(uint *)pcVar66 << 9 | *(uint *)pcVar66 >> 0x17;
          pfVar28 = (float *)((ulonglong)pfVar28 & 0xffffffffffffff40);
          *(undefined **)((longlong)pfVar56 + 0x30) = &UNK_143397f50;
          goto code_r0x000141b6ec2a;
        case (float *)0x141b6edf6:
          pcVar66 = (code *)((longlong)unaff_RBP + -0x47befeb2);
          cVar20 = *pcVar66;
          cVar29 = SUB81((ulonglong)pfVar28 >> 8,0);
          bVar33 = (char)*pcVar66 - (char)cVar29;
          *pcVar66 = (code)(bVar33 - bVar75);
          *pfVar28 = (float)(((int)*pfVar28 - (int)fVar77) -
                            (uint)((byte)cVar20 < (byte)cVar29 || bVar33 < bVar75));
          *(byte *)pfVar28 = (char)*(code *)pfVar28 + bVar21;
code_r0x000141b6edf5:
          UNRECOVERED_JUMPTABLE = pfVar37;
          goto pdb_140f679a0;
        case (float *)0x141b6ee4f:
          pcVar66 = (code *)swi(3);
          pfVar28 = (float *)(*pcVar66)();
          return pfVar28;
        case (float *)0x141b6ee8a:
          pcVar66 = (code *)swi(3);
          pfVar28 = (float *)(*pcVar66)();
          return pfVar28;
        case (float *)0x141b6ee90:
code_r0x000141b6ee9a:
          goto pdb_140f679a0;
        case (float *)0x141b6ef2d:
          goto code_r0x000141b6ef2d;
        case (float *)0x141b6ef52:
          *(undefined **)((longlong)pfVar56 + -8) = &UNK_141b6ef5b;
          pfVar28 = (float *)func_0x0001912a40cb();
          goto code_r0x000141b6ef5b;
        case (float *)0x141b6ef67:
code_r0x000141b6ef67:
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        case (float *)0x141b6efac:
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        case (float *)0x141b6efd3:
          goto DAT_141b6efd0;
        case (float *)0x141b6efea:
          goto code_r0x000141b6efec;
        case (float *)0x141b6f002:
          *(code *)((longlong)unaff_RBP + -0x3d) =
               (code)((byte)*(code *)((longlong)unaff_RBP + -0x3d) & (byte)unaff_RBX);
          goto DAT_141b6f010;
        case (float *)0x141b6f02a:
          goto code_r0x000141b6f02a;
        case (float *)0x141b6f04e:
          pcVar66 = (code *)swi(3);
          pfVar28 = (float *)(*pcVar66)();
          return pfVar28;
        case (float *)0x141b6f06b:
          goto code_r0x000141b6f06b;
        case (float *)0x141b6f6e1:
          goto code_r0x000141b6f6d4;
        case (float *)0x141b6f6f4:
          if (bVar72) goto code_r0x000141b6f78f;
          goto code_r0x000141b6f6fb;
        case (float *)0x141b6f707:
          param_2[4] = SUB84(pfVar65,0);
          return pfVar28;
        case (float *)0x141b6f71a:
          if (!bVar72 && bVar73 == (longlong)pfVar28 < 0) goto code_r0x000141b6f71c;
          goto code_r0x000141b6f72c;
        case (float *)0x141b6f72d:
          *(byte *)(pfVar37 + -0x12) = (char)*(code *)(pfVar37 + -0x12) + bVar21;
code_r0x000141b6f730:
          *pfVar28 = (float)((int)*pfVar28 + (int)pfVar28);
          *(char *)pfVar28 = (char)*(code *)pfVar28 + (char)pfVar28;
          goto code_r0x000141b6f734;
        case (float *)0x141b6f748:
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        case (float *)0x141b6f794:
          *pfVar28 = (float)((int)*pfVar28 + (int)fVar77);
          *(byte *)pfVar28 = (char)*(code *)pfVar28 + bVar21;
          goto code_r0x000141b6f78f;
        case (float *)0x141b6f79c:
          goto code_r0x000141b6f79c;
        case (float *)0x141b6f7ed:
          pcVar66 = (code *)swi(3);
          pfVar28 = (float *)(*pcVar66)();
          return pfVar28;
        case (float *)0x141b6f836:
          *(int *)((longlong)pfVar56 + 0x30) =
               *(int *)((longlong)pfVar56 + 0x30) - (int)SUB84(pfVar65,0);
          unaff_XMM10_Da = unaff_XMM8_Dc;
          unaff_XMM10_Db = unaff_XMM8_Dd;
          goto code_r0x000141b6f82f;
        case (float *)0x141b6f83d:
          goto code_r0x000141b6f83d;
        case (float *)0x141b6f85d:
          goto code_r0x000141b6f85d;
        case (float *)0x141b6f8b3:
code_r0x000141b6f8b3:
          auVar80._4_4_ = unaff_XMM9_Db;
          auVar80._0_4_ = unaff_XMM9_Da;
          auVar80._8_4_ = unaff_XMM9_Dc;
          auVar80._12_4_ = unaff_XMM9_Dd;
          auVar81._4_12_ = auVar80._4_12_;
          auVar81._0_4_ = unaff_XMM9_Da * unaff_XMM7_Da;
          unaff_RDI = pfVar65;
          goto code_r0x000141b6f8ce;
        case (float *)0x141b6f8fd:
          goto code_r0x000141b6f8fd;
        case (float *)0x141b6f964:
          *(code *)((longlong)unaff_RBP + 0xf) =
               (code)((char)*(code *)((longlong)unaff_RBP + 0xf) + bVar21);
          goto code_r0x000141b6f965;
        case (float *)0x141b6f9ab:
code_r0x000141b6f9ae:
          *(undefined **)((longlong)pfVar56 + -8) = &UNK_141b6f9c6;
          auVar78._0_8_ = pub_142e32980();
          auVar78._8_8_ = extraout_XMM0_Qb_07;
          goto code_r0x000141b6f9ed;
        case (float *)0x141b6f9b3:
          goto code_r0x000141b6f9ae;
        }
code_r0x000141b6d8ac:
        *(undefined8 *)((longlong)pfVar56 + -8) = 0x141b6d8b6;
        uVar25 = pdb_142db90e0((undefined1 *)((longlong)pfVar56 + 0x28));
LAB_141b6d8b6:
        *(ulonglong *)(param_2 + 2) = uVar25;
        *param_2 = 9.80909e-45;
        return param_2;
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
        *(code *)((longlong)param_3 + 0x39) =
             (code)((char)*(code *)((longlong)param_3 + 0x39) + 0x20);
        *(byte *)unaff_RDI = (byte)*(code *)unaff_RDI >> 1 | (char)*(code *)unaff_RDI << 7;
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      case 0xf:
        *unaff_RDI = fVar77;
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      case 0x10:
        *(byte *)pfVar28 = (char)*(code *)pfVar28 + bVar21;
LAB_141b6d6bf:
        if ((int)param_4 == 0x7b) {
code_r0x000141b6d6c9:
          pfVar65 = arg1 + 0x12;
          *(byte *)pfVar65 = (char)*(code *)pfVar65 - 1;
          if (*(code *)pfVar65 != (code)0x0) {
            *(float **)(arg1 + 10) = pfVar28;
            UNRECOVERED_JUMPTABLE = (float *)((longlong)pfVar56 + 0x28);
            pfVar39 = arg1;
            goto code_r0x000141b6d6db;
          }
LAB_141b6d8d9:
          *(undefined8 *)((longlong)pfVar56 + 0x28) = 0x18;
        }
        else {
          *(undefined8 *)((longlong)pfVar56 + 0x28) = 10;
        }
LAB_141b6d67a:
        *(undefined8 *)((longlong)pfVar56 + -8) = 0x141b6d68a;
        uVar25 = pdb_142d84ef0(arg1,(undefined1 *)((longlong)pfVar56 + 0x28));
        goto LAB_141b6d8b6;
      case 0x11:
        goto code_r0x000141b6d70c;
      case 0x12:
        (&UNK_143398169)[uVar25] = (&UNK_143398169)[uVar25] + -0x20;
        pfVar28 = (float *)(ulonglong)((uint)fVar77 >> 1);
code_r0x000141b6d72d:
        *(int *)((longlong)pfVar28 + -0x7b) = *(int *)((longlong)pfVar28 + -0x7b) + -1;
code_r0x000141b6d730:
        *(byte *)unaff_RDI = (byte)*(code *)unaff_RDI >> 4 | (char)*(code *)unaff_RDI << 4;
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      case 0x13:
        goto code_r0x000141b6d6db;
      case 0x14:
        *(int *)((longlong)unaff_RBP + -0x26) = *(int *)((longlong)unaff_RBP + -0x26) + (int)param_2
        ;
        goto code_r0x000141b6d884;
      case 0x15:
        return param_2;
      case 0x16:
        pfVar39 = (float *)(ulonglong)(uint)-(int)arg1;
        goto code_r0x000141b6d7a6;
      case 0x17:
        puVar49 = (ulonglong *)((longlong)pfVar56 + -8);
        *(float **)((longlong)pfVar56 + -8) = unaff_RBP;
        cVar22 = '\a';
        do {
          unaff_RBP = unaff_RBP + -2;
          puVar49 = puVar49 + -1;
          *puVar49 = *(ulonglong *)unaff_RBP;
          cVar22 = cVar22 + -1;
        } while ('\0' < cVar22);
        *(undefined1 **)((longlong)pfVar56 + -0x48) = (undefined1 *)((longlong)pfVar56 + -8);
        pfVar56 = (float *)((longlong)pfVar56 + -0xe147);
        goto code_r0x000141b6d6fd;
      case 0x18:
        goto code_r0x000141b6d93c;
      case 0x19:
        UNRECOVERED_JUMPTABLE = (float *)(ulonglong)(uint)((int)arg1 + (int)fVar77);
        fRam4c284189482f73cf = fVar77;
        goto code_r0x000141b6da3e;
      case 0x1a:
        *(char *)(unaff_RBX + 0xc) = (char)*(code *)(unaff_RBX + 0xc) << 1;
        goto code_r0x000141b6da1a;
      case 0x1b:
        (&UNK_1433981df)[uVar25] = ((&UNK_1433981df)[uVar25] + ' ') - bVar75;
        pbVar4 = &UNK_1433981d7 + uVar25;
        *pbVar4 = *pbVar4 >> 2 | *pbVar4 << 6;
        goto code_r0x000141b6da24;
      case 0x1c:
        goto code_r0x000141b6da11;
      case 0x1d:
        *(byte *)(unaff_R13 + 0x1433981e3) = (char)*(code *)(unaff_R13 + 0x1433981e3) + 0x20;
        goto code_r0x000141b6da3d;
      case 0x1e:
        goto code_r0x000141b6da3e;
      case 0x1f:
        pfVar39 = (float *)CONCAT62((int6)((ulonglong)arg1 >> 0x10),CONCAT11(0x4c,(char)arg1));
        goto code_r0x000141b6da2a;
      case 0x20:
      case 0x21:
      case 0x22:
      case 0x23:
      case 0x24:
      case 0x25:
      case 0x26:
        *(int *)(&UNK_143398169 + uVar25) = *(int *)(&UNK_143398169 + uVar25) + 0x433981e0;
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      case 0x27:
        *pfVar28 = (float)((int)*pfVar28 + (int)fVar77);
        UNK_143398163 = UNK_143398163 + -0x20;
code_r0x000141b6d979:
        arg1 = (float *)CONCAT62((int6)((ulonglong)arg1 >> 0x10),
                                 CONCAT11((byte)((ulonglong)arg1 >> 8) &
                                          (byte)*(code *)(unaff_RBP + 10),(char)arg1));
        goto code_r0x000141b6d97d;
      case 0x28:
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      case 0x29:
      case 0x2a:
      case 0x2c:
        (&UNK_143398199)[uVar25] = (&UNK_143398199)[uVar25] + -0x20;
        *(float **)((longlong)pfVar56 + -8) = unaff_RDI;
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      case 0x2b:
        UNRECOVERED_JUMPTABLE = (float *)0x867303c0;
        goto code_r0x000141b6e840;
      case 0x2d:
        return pfVar28;
      case 0x2e:
code_r0x000141b6e81e:
        pcVar66 = (code *)swi(3);
        pfVar28 = (float *)(*pcVar66)();
        return pfVar28;
      case 0x2f:
        *unaff_RBX = (float)((int)*unaff_RBX + 0x433981e0);
        goto LAB_141b6e809;
      case 0x30:
        goto code_r0x000141b6e8b6;
      case 0x31:
        bVar72 = false;
code_r0x000141b6e8da:
        param_2 = pfVar28;
        if (!bVar72) goto code_r0x000141b6e92b;
        *(code *)((longlong)pfVar28 + 1) = (code)0x5;
        goto code_r0x000141b6e908;
      case 0x32:
        pfVar39 = UNRECOVERED_JUMPTABLE;
        param_2 = (float *)((ulonglong)pfVar28 & 0xffffffff);
        goto code_r0x000141b6e92b;
      case 0x33:
        (&UNK_143398163)[uVar25] = (&UNK_143398163)[uVar25] | 0xe0;
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      case 0x34:
        goto code_r0x000141b6e958;
      case 0x35:
        goto code_r0x000141b6e8f6;
      case 0x36:
        *(float **)((longlong)pfVar56 + -8) = unaff_RDI;
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      default:
        goto code_r0x000141b6eaef;
      case 0x38:
code_r0x000141b6ea05:
        *UNRECOVERED_JUMPTABLE = (float)((int)*UNRECOVERED_JUMPTABLE + (int)pfVar28);
        goto code_r0x000141b6ea08;
      case 0x3b:
        goto code_r0x000141b6e9bc;
      case 0x3c:
        *(float **)((longlong)pfVar56 + -8) = arg1;
code_r0x000141b6ea7a:
        *(char *)unaff_RDI = (char)*(code *)unaff_RDI + (char)UNRECOVERED_JUMPTABLE;
        return (float *)CONCAT71((int7)((ulonglong)pfVar28 >> 8),
                                 (char)pfVar28 + (char)*(code *)((longlong)unaff_RBX + 0x96677f2));
      case 0x3d:
        UNRECOVERED_JUMPTABLE = (float *)CONCAT71(0x1433981,(byte)*(code *)unaff_RDI | 0xe0);
        goto code_r0x000141b6eaa4;
      case 0x3e:
        goto code_r0x000141b6e9d8;
      case 0x3f:
        (&UNK_143398169)[uVar25] = (&UNK_143398169)[uVar25] + -0x20;
        goto code_r0x000141b6ea27;
      case 0x41:
        pcVar66 = (code *)swi(3);
        pfVar28 = (float *)(*pcVar66)();
        return pfVar28;
      case 0x48:
        uVar25 = (ulonglong)param_3 ^ *(ulonglong *)((longlong)arg1 + unaff_GS_OFFSET + 3);
        goto code_r0x000141b6eacb;
      case 0x49:
code_r0x000141b6eada:
        *(char *)pfVar28 = (char)*(code *)pfVar28 + (char)pfVar28;
        goto code_r0x000141b6ead9;
      case 0x4a:
        *(byte *)pfVar28 = (char)*(code *)pfVar28 + bVar21;
        return pfVar28;
      case 0x4b:
        param_3 = (float *)((ulonglong)param_3 | 0x60c);
        goto code_r0x000141b6eb43;
      case 0x4c:
code_r0x000141b6eb59:
        pfVar37 = UNRECOVERED_JUMPTABLE;
        if (!bVar75 && !bVar72) {
          *(int *)((longlong)param_2 + 0xf) = *(int *)((longlong)param_2 + 0xf) << 0x17;
          puVar49 = (ulonglong *)((longlong)pfVar56 + -8);
          *(float **)((longlong)pfVar56 + -8) = unaff_RBP;
          cVar22 = '\x1e';
          do {
            unaff_RBP = unaff_RBP + -2;
            puVar49 = puVar49 + -1;
            *puVar49 = *(ulonglong *)unaff_RBP;
            cVar22 = cVar22 + -1;
          } while ('\0' < cVar22);
          *(undefined1 **)((longlong)pfVar56 + -0x100) = (undefined1 *)((longlong)pfVar56 + -8);
          *pfVar28 = (float)((int)*pfVar28 + 1);
          pcVar27 = (char *)((longlong)UNRECOVERED_JUMPTABLE * 2 + -0x4f);
          *pcVar27 = *pcVar27 + (char)((ulonglong)arg1 >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
code_r0x000141b6eb5b:
        UNRECOVERED_JUMPTABLE = pfVar37;
        *(undefined8 *)((ulonglong)*(uint *)((longlong)UNRECOVERED_JUMPTABLE + 99) - 8) = 0xf0a3348;
        pfVar39 = (float *)CONCAT62((int6)((ulonglong)arg1 >> 0x10),CONCAT11(0x52,(char)arg1));
        goto code_r0x000141b6eb65;
      case 0x4d:
        *(byte *)pfVar28 = (char)*(code *)pfVar28 + bVar21;
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
        auVar78[0] = -((char)in_XMM0._0_8_ == UNK_142f87e20);
        auVar78[1] = -((char)((ulonglong)in_XMM0._0_8_ >> 8) == UNK_142f87e21);
        auVar78[2] = -((char)((ulonglong)in_XMM0._0_8_ >> 0x10) == UNK_142f87e22);
        auVar78[3] = -((char)((ulonglong)in_XMM0._0_8_ >> 0x18) == UNK_142f87e23);
        auVar78[4] = -((char)((ulonglong)in_XMM0._0_8_ >> 0x20) == UNK_142f87e24);
        auVar78[5] = -((char)((ulonglong)in_XMM0._0_8_ >> 0x28) == UNK_142f87e25);
        auVar78[6] = -((char)((ulonglong)in_XMM0._0_8_ >> 0x30) == UNK_142f87e26);
        auVar78[7] = -((char)((ulonglong)in_XMM0._0_8_ >> 0x38) == UNK_142f87e27);
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
        pcVar66 = (code *)swi(3);
        pfVar28 = (float *)(*pcVar66)();
        return pfVar28;
      case 0x53:
        UNK_143398198 = UNK_143398198 ^ bVar21;
        cVar20 = *(code *)pfVar28;
        pfVar28 = (float *)CONCAT71((int7)((ulonglong)pfVar28 >> 8),bVar21 + (char)cVar20);
        *(byte *)pfVar28 = (char)*(code *)pfVar28 + bVar21 + (char)cVar20;
code_r0x000141b6edd2:
        *(undefined **)((longlong)pfVar56 + -8) = &UNK_141b6ede5;
        pfVar28 = (float *)pdb_140f66090(pfVar28);
code_r0x000141b6ede6:
        return pfVar28;
      case 0x54:
code_r0x000141b6ee2f:
        pcVar66 = (code *)swi(3);
        pfVar28 = (float *)(*pcVar66)();
        return pfVar28;
      case 0x55:
code_r0x000141b6ee7a:
        UNRECOVERED_JUMPTABLE = arg1;
code_r0x000141b6ee80:
        goto pdb_140f679a0;
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
        (&UNK_143398165)[uVar25] = (&UNK_143398165)[uVar25] + -0x20 + bVar75;
        (&UNK_143398228 + uVar25)[(longlong)unaff_RBX] =
             (&UNK_143398228 + uVar25)[(longlong)unaff_RBX];
        goto code_r0x000141b6ef96;
      case 0x5b:
        (&UNK_14339816b)[uVar25] = ((&UNK_14339816b)[uVar25] + ' ') - bVar75;
        *(undefined **)((longlong)pfVar56 + -8) = &UNK_141b6f037;
        func_0x000149ff7b7f();
        goto code_r0x000141b6f037;
      case 0x5d:
        goto code_r0x000141b6f04b;
      case 0x65:
code_r0x000141b6efb3:
        pcVar27 = (char *)((longlong)UNRECOVERED_JUMPTABLE * 5 + -0x3f);
        *pcVar27 = *pcVar27 + (char)UNRECOVERED_JUMPTABLE + bVar75;
        goto code_r0x0001409a45e0;
      case 0x66:
      case 0x67:
        goto code_r0x000141b6ef0d;
      case 0x68:
        goto code_r0x000141b6efcc;
      case 0x69:
      case 0x6a:
      case 0x6b:
        *(char *)(uVar25 + 0x1338f0d28) = *(char *)(uVar25 + 0x1338f0d28) + '\x01';
        goto code_r0x000141b6ef4d;
      case 0x6c:
code_r0x000141b6f6c1:
        param_2[4] = SUB84(unaff_RDI,0);
        puVar8 = (undefined1 *)pfVar56;
        goto code_r0x000141b6f6b5;
      case 0x6d:
        *(code *)((longlong)unaff_RBX + 0x5f) =
             (code)((char)*(code *)((longlong)unaff_RBX + 0x5f) - (char)unaff_RBX);
        return pfVar28;
      case 0x6e:
        piVar2 = (int *)(&UNK_14339816b + uVar25);
        iVar23 = *piVar2;
        *piVar2 = *piVar2 + 0x433981e0;
        if (*piVar2 != 0 && SCARRY4(iVar23,0x433981e0) == *piVar2 < 0) goto code_r0x000141b6f6ab;
        pfVar28 = (float *)(ulonglong)(uint)param_2[2];
        goto code_r0x000141b6f6ff;
      case 0x6f:
code_r0x000141b6f6fa:
        *(code *)((longlong)pfVar28 + -0x75) =
             (code)((char)*(code *)((longlong)pfVar28 + -0x75) + (char)UNRECOVERED_JUMPTABLE);
        param_2 = (float *)CONCAT71((int7)((ulonglong)param_2 >> 8),(byte)param_2 | (byte)param_3);
        pfVar65 = unaff_RDI;
code_r0x000141b6f700:
        cVar22 = (char)pfVar28;
        pfVar28 = (float *)CONCAT71((int7)((ulonglong)pfVar28 >> 8),cVar22 + '8');
        if (-0x39 < cVar22) {
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        goto code_r0x000141b6f704;
      case 0x70:
        goto code_r0x000141b6f6d4;
      case 0x71:
code_r0x000141b6f728:
        pfVar28 = (float *)((ulonglong)pfVar28 & 0xffffffffffffff20);
        goto code_r0x000141b6f727;
      case 0x72:
        goto code_r0x000141b6f7cd;
      case 0x73:
        goto code_r0x000141b6f944;
      case 0x74:
        pfVar56 = (float *)((longlong)pfVar56 + 8);
        auVar79._4_4_ = unaff_XMM8_Db;
        auVar79._0_4_ = unaff_XMM8_Da;
        auVar79._8_4_ = unaff_XMM8_Dc;
        auVar79._12_4_ = unaff_XMM8_Dd;
        auVar78._4_12_ = auVar79._4_12_;
        auVar78._0_4_ = unaff_XMM8_Da * unaff_XMM7_Da;
        in_XMM1_Ba = SUB41(unaff_XMM9_Da,0);
        in_XMM1_Bb = cVar84;
        in_XMM1_Bc = cVar86;
        in_XMM1_Bd = cVar88;
code_r0x000141b6f8a3:
        fVar76 = (float)CONCAT13(in_XMM1_Bd,CONCAT12(in_XMM1_Bc,CONCAT11(in_XMM1_Bb,in_XMM1_Ba))) *
                 unaff_XMM12_Da;
        uVar83 = SUB41(fVar76,0);
        uVar85 = (undefined1)((uint)fVar76 >> 8);
        uVar87 = (undefined1)((uint)fVar76 >> 0x10);
        uVar89 = (undefined1)((uint)fVar76 >> 0x18);
        goto code_r0x000141b6f8e9;
      case 0x75:
        auVar78._0_4_ = (float)in_XMM0._0_8_ * unaff_XMM8_Da;
        auVar78._4_4_ = (float)((ulonglong)in_XMM0._0_8_ >> 0x20) * unaff_XMM8_Db;
        auVar78._8_4_ = (float)extraout_XMM0_Qb_01 * unaff_XMM8_Dc;
        auVar78._12_4_ = (float)((ulonglong)extraout_XMM0_Qb_01 >> 0x20) * unaff_XMM8_Dd;
        fVar76 = unaff_XMM9_Da * unaff_XMM7_Da;
        uVar83 = SUB41(fVar76,0);
        uVar85 = (undefined1)((uint)fVar76 >> 8);
        uVar87 = (undefined1)((uint)fVar76 >> 0x10);
        uVar89 = (undefined1)((uint)fVar76 >> 0x18);
        goto code_r0x000141b6f8e9;
      case 0x76:
code_r0x000141b6f83d:
        unaff_XMM10_Da = unaff_XMM8_Dc;
        unaff_XMM10_Db = unaff_XMM8_Dd;
        goto code_r0x000141b6f82f;
      case 0x77:
        auVar78 = unaff_XMM11;
        goto code_r0x000141b6f9ed;
      case 0x78:
        UNK_143398199 = UNK_143398199 + bVar21;
        *pfVar28 = (float)((int)*pfVar28 + (int)fVar77);
        *(byte *)pfVar28 = (char)*(code *)pfVar28 + bVar21;
        plVar59 = (longlong *)pfVar56;
        goto code_r0x000141b6f77b;
      case 0x79:
        goto code_r0x000141b6f993;
      case 0x7a:
        *(int *)((longlong)pfVar56 + 0x80) = *(int *)((longlong)pfVar56 + 0x80) - (int)pfVar56;
        goto code_r0x000141b6f81d;
      case 0x7b:
        UNRECOVERED_JUMPTABLE = (float *)((ulonglong)param_2 & 0xffffffff);
        goto code_r0x000141b6f77e;
      case 0x7c:
        goto code_r0x000141b6f81d;
      case 0x7d:
        goto code_r0x000141b6f98b;
      }
code_r0x000141b6d5da:
      cVar20 = (code)0x0;
code_r0x000141b6d5dc:
      *(code *)param_2 = cVar20;
      return param_2;
    case 0x1b:
      *(char *)pfVar28 = (char)*(code *)pfVar28 + cVar22;
      *(code *)((longlong)unaff_RBP + 0xf) =
           (code)((char)*(code *)((longlong)unaff_RBP + 0xf) + cVar22);
      arg1 = (float *)&UNK_143394c94;
      unaff_RBX = (float *)CONCAT62((int6)((ulonglong)unaff_RBX >> 0x10),
                                    CONCAT11(cVar43 * '\x02',(char)unaff_RBX));
LAB_141b6d64b:
      do {
        param_4 = (code *)(ulonglong)(byte)((code *)((longlong)param_3 + -1))[(longlong)pfVar28];
        if ((code *)0x22 < param_4) goto LAB_141b6d6bf;
        if (((ulonglong)unaff_RDI >> ((ulonglong)param_4 & 0x3f) & 1) == 0) goto LAB_141b6d68f;
        *(float **)(arg1 + 10) = pfVar28;
        param_4 = (code *)((longlong)UNRECOVERED_JUMPTABLE + (longlong)pfVar28);
code_r0x000141b6d665:
        pfVar28 = (float *)((longlong)pfVar28 + 1);
      } while (param_4 != (code *)0x0);
    case 0x23:
      *(undefined8 *)((longlong)pfVar56 + 0x28) = 5;
      goto LAB_141b6d67a;
    case 0x1c:
    case 0x1d:
    case 0x21:
      unaff_RDI = (float *)((longlong)unaff_RDI + 1);
      pfVar28 = unaff_RBX + 0x4a091f;
      *pfVar28 = (float)((int)*pfVar28 + 1);
      bVar72 = *pfVar28 == 0.0;
      goto code_r0x000141b6d7f3;
    case 0x1e:
      goto code_r0x000141b6d6af;
    case 0x1f:
    case 0x20:
      goto code_r0x000141b6d81f;
    case 0x22:
      goto code_r0x000141b6d6a4;
    case 0x24:
      goto LAB_141b6d6bf;
    case 0x25:
      goto code_r0x000141b6d6db;
    case 0x26:
      goto code_r0x000141b6d69a;
    case 0x27:
      goto code_r0x000141b6d77c;
    case 0x28:
      goto code_r0x000141b6d793;
    case 0x29:
      *(char *)pfVar28 = (char)*(code *)pfVar28 + cVar22;
      pcVar66 = (code *)((longlong)pfVar28 + 1);
      *pcVar66 = (code)((char)*pcVar66 + cVar43);
      bVar72 = *pcVar66 == (code)0x0;
      goto code_r0x000141b6d760;
    case 0x2a:
      *(uint *)((longlong)pfVar28 + 1) = *(uint *)((longlong)pfVar28 + 1) | 0xc7e0ffc8;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0x2b:
code_r0x000141b6d8f0:
      goto code_r0x000141b6d88d;
    case 0x2c:
      pfVar37 = (float *)(&UNK_143398193 + uVar25);
      if ((float *)(&UNK_143398193 + uVar25) != (float *)0x0 && bVar72) goto code_r0x000141b6da30;
      goto code_r0x000141b6d9e7;
    case 0x2d:
      pfVar65 = (float *)((longlong)unaff_RDI + 1);
      cVar20 = (code)in(0x8194);
      *(code *)unaff_RDI = cVar20;
      goto code_r0x000141b6d9c7;
    case 0x2e:
      pfVar28 = (float *)((ulonglong)pfVar28 & 0xffffffffffffff28);
      goto code_r0x000141b6d9b8;
    case 0x2f:
      out(0x60,uVar68);
code_r0x000141b6d9c7:
      unaff_RDI = (float *)((longlong)pfVar65 + 1);
      *unaff_RDI = (float)((int)*unaff_RDI - 1);
      arg1 = (float *)CONCAT62((int6)((ulonglong)arg1 >> 0x10),CONCAT11(0x6c,(char)arg1));
      pfVar28 = (float *)((ulonglong)pfVar28 & 0xffffffffffffff20);
code_r0x000141b6d9b8:
      *(float **)(arg1 + 10) = pfVar28;
      *(undefined8 *)((longlong)pfVar56 + -8) = 0x141b6d9c9;
      auVar78._0_8_ = pdb_141653ab0((undefined1 *)((longlong)pfVar56 + 0x20));
      auVar78._8_8_ = extraout_XMM0_Qb_06;
      UNRECOVERED_JUMPTABLE = (float *)(ulonglong)*(byte *)((longlong)pfVar56 + 0x20);
      pfVar28 = *(float **)((longlong)pfVar56 + 0x28);
      unaff_RBX = arg1;
      unaff_RBP = UNRECOVERED_JUMPTABLE;
      pfVar65 = unaff_RDI;
code_r0x000141b6d9d7:
      arg1 = (float *)&UNK_143398260;
      uVar25 = (ulonglong)*(int *)(&UNK_143398260 + (longlong)UNRECOVERED_JUMPTABLE * 4);
      bVar75 = 0xfffffffebcc67d9f < uVar25;
      UNRECOVERED_JUMPTABLE = (float *)(&UNK_143398260 + uVar25);
      bVar72 = UNRECOVERED_JUMPTABLE == (float *)0x0;
      cVar22 = (char)pfVar28;
      uVar30 = (uint7)((ulonglong)pfVar28 >> 8);
      uVar68 = (uint)pfVar28;
      iVar23 = (int)UNRECOVERED_JUMPTABLE;
      pfVar39 = arg1;
      unaff_RDI = pfVar65;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
      switch(UNRECOVERED_JUMPTABLE) {
      case (float *)0x141b6d9e7:
code_r0x000141b6d9e7:
        *(undefined8 *)((longlong)pfVar56 + -8) = 0x141b6d9ef;
        pfVar28 = (float *)pdb_141654940(pfVar28);
        bVar72 = pfVar28 == (float *)0x0;
code_r0x000141b6d9f2:
        UNRECOVERED_JUMPTABLE = unaff_RBX;
        unaff_RBX = UNRECOVERED_JUMPTABLE;
        if (bVar72) {
          *(byte *)(UNRECOVERED_JUMPTABLE + 0x12) =
               (char)*(code *)(UNRECOVERED_JUMPTABLE + 0x12) + 1;
          *(code *)((longlong)param_2 + 1) = SUB81(unaff_RBP,0);
          arg1 = *(float **)(UNRECOVERED_JUMPTABLE + 8);
code_r0x000141b6da11:
          pfVar28 = *(float **)(unaff_RBX + 10);
          if (pfVar28 < arg1) {
code_r0x000141b6da1a:
            param_3 = *(float **)(UNRECOVERED_JUMPTABLE + 6);
            pfVar28 = (float *)((longlong)pfVar28 + 1);
            pfVar39 = arg1;
code_r0x000141b6da21:
            pfVar39 = (float *)-(longlong)pfVar39;
            goto code_r0x000141b6da24;
          }
code_r0x000141b6da4a:
          *(undefined8 *)((longlong)pfVar56 + 0x20) = 3;
code_r0x000141b6da58:
          *(undefined8 *)((longlong)pfVar56 + -8) = 0x141b6da5d;
          pfVar28 = (float *)pdb_142d855a0();
code_r0x000141b6da5d:
          *(float **)(param_2 + 2) = pfVar28;
          pfVar28 = (float *)0x1;
          goto code_r0x000141b6da63;
        }
      case (float *)0x141b6d9f4:
        *(float **)(param_2 + 2) = pfVar28;
        *(code *)param_2 = (code)0x1;
        *(byte *)(unaff_RBX + 0x12) = (char)*(code *)(unaff_RBX + 0x12) + 1;
        return param_2;
      case (float *)0x141b6e826:
code_r0x000141b6e826:
        pfVar28 = (float *)((ulonglong)UNRECOVERED_JUMPTABLE & 0xffffffff);
        UNRECOVERED_JUMPTABLE = param_3 + -1;
        param_2 = pfVar28;
        if (UNRECOVERED_JUMPTABLE < (float *)0x8) {
          param_4 = (code *)&UNK_143398280;
code_r0x000141b6e83d:
          uVar25 = (ulonglong)*(int *)(param_4 + (longlong)UNRECOVERED_JUMPTABLE * 4);
code_r0x000141b6e841:
          UNRECOVERED_JUMPTABLE = (float *)(param_4 + uVar25);
code_r0x000141b6e840:
          *(int *)((code *)((longlong)UNRECOVERED_JUMPTABLE + -0x37) + (longlong)pfVar28) =
               (int)UNRECOVERED_JUMPTABLE;
                    /* WARNING: Could not recover jumptable at 0x000141b6e844. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          pfVar28 = (float *)(*(code *)UNRECOVERED_JUMPTABLE)();
          return pfVar28;
        }
        break;
      case (float *)0x141b6e853:
        bVar72 = *(code *)((longlong)pfVar65 + 0x61) == (code)0x60;
        cVar20 = (code)in(0x8260);
        *(code *)pfVar65 = cVar20;
        cVar20 = (code)in(0x8260);
        *(code *)((longlong)pfVar65 + 1) = cVar20;
code_r0x000141b6e858:
        if (bVar72) {
          *(code *)((longlong)pfVar28 + 1) = (code)0x1;
        }
        else {
code_r0x000141b6e85e:
          param_2 = pfVar28;
          if (*pfVar39 != 2.8267477e+23) break;
code_r0x000141b6e86a:
          *(code *)((longlong)pfVar28 + 1) = (code)0x2;
        }
code_r0x000141b6e908:
        *(code *)pfVar28 = (code)0x0;
code_r0x000141b6e90c:
        return pfVar28;
      case (float *)0x141b6e878:
        cVar20 = (code)in(0x8260);
        *(code *)pfVar65 = cVar20;
        bVar71 = true;
        if (bVar75) {
code_r0x000141b6e8eb:
          puVar11 = (undefined1 *)pfVar56;
          if (bVar71) {
code_r0x000141b6e94e:
            pcVar66 = (code *)swi(3);
            pfVar28 = (float *)(*pcVar66)();
            return pfVar28;
          }
code_r0x000141b6e8ed:
          pfVar56 = (float *)puVar11;
          bVar72 = (int)UNRECOVERED_JUMPTABLE == 0;
          goto code_r0x000141b6e8f6;
        }
        UNRECOVERED_JUMPTABLE = (float *)0x0;
        if (!bVar72) {
code_r0x000141b6e8c6:
          out(*param_2,(short)pfVar39);
          UNRECOVERED_JUMPTABLE =
               (float *)(ulonglong)(uint)(*(int *)((longlong)pfVar28 + 0x33) * -0x48f0bbf6);
code_r0x000141b6e8ce:
          *(code *)((longlong)UNRECOVERED_JUMPTABLE + -0x7f) =
               (code)((byte)*(code *)((longlong)UNRECOVERED_JUMPTABLE + -0x7f) |
                     (byte)UNRECOVERED_JUMPTABLE);
code_r0x000141b6e8d2:
          pcVar66 = (code *)swi(1);
          pfVar28 = (float *)(*pcVar66)();
          return pfVar28;
        }
code_r0x000141b6e87e:
        uVar25 = (ulonglong)((uint)UNRECOVERED_JUMPTABLE ^ (uint)*arg1);
code_r0x000141b6e880:
        bVar72 = *(code *)(arg1 + 2) == (code)0x70 && uVar25 == 0;
        pfVar39 = arg1;
code_r0x000141b6e88c:
        param_2 = pfVar28;
        if (bVar72) {
code_r0x000141b6e892:
          *(code *)((longlong)pfVar28 + 1) = (code)0x3;
          goto code_r0x000141b6e908;
        }
        break;
      case (float *)0x141b6e89e:
        cVar20 = (code)in(0x8260);
        *(code *)pfVar65 = cVar20;
        UNRECOVERED_JUMPTABLE = (float *)0x0;
        if (!bVar72) {
code_r0x000141b6e916:
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
code_r0x000141b6e8a2:
        bVar72 = *(longlong *)((longlong)arg1 + 3) == 0x72657474756c436f &&
                 UNRECOVERED_JUMPTABLE == *(float **)arg1;
        pfVar39 = arg1;
code_r0x000141b6e8b6:
        param_2 = pfVar28;
        if (bVar72) {
          *(code *)((longlong)pfVar28 + 1) = (code)0x4;
          goto code_r0x000141b6e908;
        }
        break;
      case (float *)0x141b6e8c2:
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      case (float *)0x141b6e8f2:
        pfVar28 = (float *)(ulonglong)(uVar68 + *(int *)(&UNK_143398269 + uVar25));
        bVar72 = uVar68 + *(int *)(&UNK_143398269 + uVar25) == 0;
        pfVar56 = unaff_RBP + 2;
code_r0x000141b6e8f6:
        param_2 = pfVar28;
        if (bVar72) {
code_r0x000141b6e8f8:
          *(code *)((longlong)pfVar28 + 1) = (code)0x6;
          goto code_r0x000141b6e908;
        }
        break;
      case (float *)0x141b6e936:
        goto code_r0x000141b6e936;
      case (float *)0x141b6e958:
code_r0x000141b6e958:
        UNRECOVERED_JUMPTABLE = (float *)((longlong)param_3 + -3);
        if (UNRECOVERED_JUMPTABLE < (float *)0x6) {
          param_4 = (code *)&UNK_1433982a0;
code_r0x000141b6e96d:
          UNRECOVERED_JUMPTABLE =
               (float *)(longlong)*(int *)(param_4 + (longlong)UNRECOVERED_JUMPTABLE * 4);
code_r0x000141b6e971:
          UNRECOVERED_JUMPTABLE = (float *)((longlong)UNRECOVERED_JUMPTABLE + (longlong)param_4);
code_r0x000141b6e974:
                    /* WARNING: Could not recover jumptable at 0x000141b6e974. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          pfVar28 = (float *)(*(code *)UNRECOVERED_JUMPTABLE)(UNRECOVERED_JUMPTABLE);
          return pfVar28;
        }
        goto LAB_141b6ea18;
      case (float *)0x141b6e976:
        UNRECOVERED_JUMPTABLE = (float *)(ulonglong)(_UNK_143398260 ^ 0x6c41);
        param_4 = (code *)(ulonglong)(UNK_143398262 ^ 0x6c);
        plVar64 = (longlong *)pfVar56;
code_r0x000141b6e988:
        pfVar56 = (float *)plVar64;
        bVar72 = (short)param_4 == 0 && (short)UNRECOVERED_JUMPTABLE == 0;
code_r0x000141b6e98c:
        pfVar39 = arg1;
        if (bVar72) {
          *(code *)((longlong)pfVar28 + 1) = (code)0x0;
code_r0x000141b6ea0e:
          *(code *)pfVar28 = (code)0x0;
          return pfVar28;
        }
LAB_141b6ea18:
        arg1 = pfVar39;
code_r0x000141b6ea25:
        UNRECOVERED_JUMPTABLE = arg1;
code_r0x000141b6ea2e:
        param_2 = pfVar28;
code_r0x000141b6ea31:
        pfVar28 = param_2;
        *(undefined8 *)((longlong)pfVar56 + -8) = 0x141b6ea36;
        UNRECOVERED_JUMPTABLE = (float *)pdb_142d8f140(UNRECOVERED_JUMPTABLE);
        param_2 = pfVar28;
code_r0x000141b6ea3c:
        *(float **)(param_2 + 2) = UNRECOVERED_JUMPTABLE;
code_r0x000141b6ea40:
        *(code *)pfVar28 = (code)0x1;
code_r0x000141b6ea44:
        return pfVar28;
      case (float *)0x141b6e98b:
        pfVar56 = unaff_RBP + 2;
        goto code_r0x000141b6e98c;
      case (float *)0x141b6e9a9:
        bVar72 = (&UNK_1433982c5)[(longlong)param_2 * 2] == '`';
joined_r0x000141b6e9ae:
        if (bVar72) {
          *(code *)((longlong)pfVar28 + 1) = (code)0x6;
          goto code_r0x000141b6ea0e;
        }
        goto LAB_141b6ea18;
      case (float *)0x141b6e9d8:
code_r0x000141b6e9d8:
        uVar68 = (uint)param_4;
        pfVar37 = (float *)(ulonglong)((uint)UNRECOVERED_JUMPTABLE ^ 0x6e65);
code_r0x000141b6e9de:
        pfVar39 = arg1;
        if (uVar68 == 0 && (int)pfVar37 == 0) {
          *(code *)((longlong)pfVar28 + 1) = (code)0x5;
          goto code_r0x000141b6ea0e;
        }
        goto LAB_141b6ea18;
      case (float *)0x141b6ea1a:
        pfVar28 = (float *)(ulonglong)(uVar68 + 0x1829301 + (uint)bVar75);
        goto code_r0x000141b6ea25;
      case (float *)0x141b6ea3c:
        goto code_r0x000141b6ea3c;
      case (float *)0x141b6ea58:
        bVar72 = uVar68 < 0x12;
        bVar71 = uVar68 == 0x12;
code_r0x000141b6ea5b:
        if (bVar72 || bVar71) {
code_r0x000141b6ea61:
          UNRECOVERED_JUMPTABLE = (float *)&UNK_1433982b8;
code_r0x000141b6ea68:
                    /* WARNING: Could not recover jumptable at 0x000141b6ea6f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          pfVar28 = (float *)(*(code *)((longlong)(int)UNRECOVERED_JUMPTABLE[(longlong)param_3] +
                                       (longlong)UNRECOVERED_JUMPTABLE))();
          return pfVar28;
        }
        goto LAB_141b6ebc7;
      case (float *)0x141b6ea85:
        if (bVar72) {
          UNRECOVERED_JUMPTABLE = (float *)0x0;
code_r0x000141b6ea8d:
          *(code *)((longlong)pfVar28 + 1) = SUB81(UNRECOVERED_JUMPTABLE,0);
          *(code *)pfVar28 = (code)0x0;
          return pfVar28;
        }
        goto LAB_141b6ebc7;
      case (float *)0x141b6eaa4:
code_r0x000141b6eaa4:
        *pfVar28 = (float)((int)*pfVar28 + (int)pfVar28);
        *(code *)((longlong)UNRECOVERED_JUMPTABLE + 0x1488802) =
             (code)((char)*(code *)((longlong)UNRECOVERED_JUMPTABLE + 0x1488802) +
                   (char)((ulonglong)arg1 >> 8));
        *(code *)pfVar28 = (code)0x0;
        return pfVar28;
      case (float *)0x141b6eacd:
code_r0x000141b6eacd:
        puVar49 = (ulonglong *)((longlong)pfVar56 + -8);
        *(float **)((longlong)pfVar56 + -8) = unaff_RBP;
        cVar22 = '\x12';
        do {
          unaff_RBP = unaff_RBP + -2;
          puVar49 = puVar49 + -1;
          *puVar49 = *(ulonglong *)unaff_RBP;
          cVar22 = cVar22 + -1;
        } while ('\0' < cVar22);
        *(undefined1 **)((longlong)pfVar56 + -0xa0) = (undefined1 *)((longlong)pfVar56 + -8);
        *(char *)pfVar28 = (char)*(code *)pfVar28 + (char)pfVar28;
        *(code *)((longlong)UNRECOVERED_JUMPTABLE + 0x1488801) =
             (code)((char)*(code *)((longlong)UNRECOVERED_JUMPTABLE + 0x1488801) +
                   (char)((ulonglong)arg1 >> 8));
code_r0x000141b6ead9:
        *(code *)pfVar28 = (code)0x0;
        return pfVar28;
      case (float *)0x141b6eafd:
        UNRECOVERED_JUMPTABLE = (float *)0x63746970;
code_r0x000141b6eb02:
        *(undefined8 *)((longlong)pfVar56 + -8) = 0x48666f5f;
        pfVar39 = arg1;
code_r0x000141b6eb07:
        UNRECOVERED_JUMPTABLE = (float *)(ulonglong)((uint)UNRECOVERED_JUMPTABLE ^ (uint)*pfVar39);
code_r0x000141b6eb09:
        uVar68 = (uint)pfVar39[2] ^ 0x74657366;
code_r0x000141b6eb13:
        if (uVar68 == 0 && UNRECOVERED_JUMPTABLE == (float *)0x0) {
          *(code *)((longlong)pfVar28 + 1) = (code)0x4;
          goto code_r0x000141b6eb21;
        }
        goto LAB_141b6ebc7;
      case (float *)0x141b6eb20:
        *(char *)pfVar28 = (char)*(code *)pfVar28 + cVar22;
code_r0x000141b6eb21:
        *(code *)pfVar28 = (code)0x0;
        return pfVar28;
      case (float *)0x141b6eb46:
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      case (float *)0x141b6eb58:
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      case (float *)0x141b6eb6f:
code_r0x000141b6eb6f:
        UNRECOVERED_JUMPTABLE = (float *)0x0;
      case (float *)0x141b6eb71:
        *(code *)((longlong)pfVar28 + 1) = SUB81(UNRECOVERED_JUMPTABLE,0);
        *(code *)pfVar28 = (code)0x0;
        return pfVar28;
      case (float *)0x141b6ebbb:
code_r0x000141b6ebbb:
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
          UNRECOVERED_JUMPTABLE = (float *)0x3;
code_r0x000141b6ebd2:
          *(code *)((longlong)pfVar28 + 1) = SUB81(UNRECOVERED_JUMPTABLE,0);
          *(code *)pfVar28 = (code)0x0;
          return pfVar28;
        }
LAB_141b6ebc7:
        *(code *)((longlong)pfVar28 + 1) = (code)0x6;
        *(code *)pfVar28 = (code)0x0;
        return pfVar28;
      case (float *)0x141b6ebd9:
        pcVar66 = (code *)swi(3);
        pfVar28 = (float *)(*pcVar66)();
        return pfVar28;
      case (float *)0x141b6ebf2:
        *(int *)(&UNK_1433982c3 + uVar25) = *(int *)(&UNK_1433982c3 + uVar25) + iVar23;
code_r0x000141b6ebf7:
                    /* WARNING: Could not recover jumptable at 0x000141b6ebfa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        pfVar28 = (float *)(*(code *)((longlong)arg1 + (longlong)param_3))
                                     (UNRECOVERED_JUMPTABLE,
                                      (code *)((longlong)arg1 + (longlong)param_3));
        return pfVar28;
      case (float *)0x141b6ec27:
        pfVar28 = (float *)((ulonglong)pfVar28 & 0xffffffffffffff30);
code_r0x000141b6ec2a:
        *(undefined1 **)((longlong)pfVar56 + 0x28) = (undefined1 *)((longlong)pfVar56 + 0x40);
        *(undefined8 *)((longlong)pfVar56 + 0x20) = 0xc;
code_r0x000141b6ec51:
        *(undefined **)((longlong)pfVar56 + -8) = &UNK_141b6ec59;
        pfVar28 = (float *)pdb_140f66e50(pfVar28);
        return pfVar28;
      case (float *)0x141b6ec71:
        uVar25 = (ulonglong)pfVar28 & 0xffffffffffffff20;
        arg1 = (float *)&UNK_143397c74;
        param_4 = (code *)((longlong)pfVar56 + 0x40);
        param_3 = (float *)0x4;
code_r0x000141b6ecc0:
        *(undefined **)((longlong)pfVar56 + -8) = &UNK_141b6ecc5;
        pfVar28 = (float *)pdb_140f66090(uVar25,arg1,param_3,param_4);
        return pfVar28;
      case (float *)0x141b6ee56:
        *(code *)((longlong)pfVar65 + 1) = *(code *)((longlong)param_2 + 1);
        puVar49 = (ulonglong *)(&UNK_143398218 + uVar25);
        uVar25 = *puVar49;
        *puVar49 = (ulonglong)(*puVar49 + (longlong)param_3);
        cVar22 = cVar22 + (char)*(code *)pfVar28 + CARRY8(uVar25,(ulonglong)param_3);
        pcVar27 = (char *)CONCAT71(uVar30,cVar22);
        *pcVar27 = *pcVar27 + cVar22;
        goto pdb_140f679a0;
      case (float *)0x141b6eeaf:
code_r0x000141b6eeaf:
        pcVar66 = (code *)swi(3);
        pfVar28 = (float *)(*pcVar66)();
        return pfVar28;
      case (float *)0x141b6eeea:
        *pfVar28 = (float)((int)*pfVar28 + uVar68);
        *(char *)pfVar28 = (char)*(code *)pfVar28 + cVar22;
        *(char *)pfVar28 = (char)*(code *)pfVar28 + cVar22;
      case (float *)0x141b6eef0:
        *(char *)(pfVar28 + 0x1d704e52) = (char)*(code *)(pfVar28 + 0x1d704e52) + cVar22;
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      case (float *)0x141b6ef8d:
code_r0x000141b6ef8d:
        if (arg1 == (float *)0x0) {
code_r0x000141b6efaa:
          return pfVar28;
        }
code_r0x000141b6ef92:
code_r0x000141b6ef96:
        param_3 = (float *)0x8;
code_r0x000141b6ef9c:
        UNRECOVERED_JUMPTABLE = *(float **)(unaff_RBP + -4);
        unaff_RBP = *(float **)((longlong)pfVar56 + 0x40);
        pfVar56 = (float *)((longlong)pfVar56 + 0x48);
code_r0x0001406abac0:
        *(float **)((longlong)pfVar56 + -8) = unaff_RBP;
        *(float **)((longlong)pfVar56 + -0x10) = param_2;
        if ((float *)0x10 < param_3) {
          UNRECOVERED_JUMPTABLE = *(float **)(UNRECOVERED_JUMPTABLE + -2);
        }
        *(undefined **)((longlong)pfVar56 + -0x40) = &UNK_140f3c37e;
        uVar24 = GetProcessHeap();
                    /* WARNING: Could not recover jumptable at 0x000140f3c38c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        pfVar28 = (float *)HeapFree(uVar24,0,UNRECOVERED_JUMPTABLE);
        return pfVar28;
      case (float *)0x141b6efb2:
        *(byte *)pfVar28 =
             (char)*(code *)pfVar28 << 3 | (byte)(CONCAT11(bVar75,*(code *)pfVar28) >> 6);
        UNRECOVERED_JUMPTABLE = (float *)((ulonglong)pfVar28 & 0xffffffff);
code_r0x0001409a45e0:
        *(undefined8 *)((longlong)pfVar56 + 0x40) = *(undefined8 *)((longlong)pfVar56 + 0x40);
        *(float **)((longlong)pfVar56 + 0x38) = param_2;
        *(float **)((longlong)pfVar56 + 0x30) = pfVar65;
        *(float **)((longlong)pfVar56 + 0x28) = unaff_RBX;
        *(undefined8 *)((longlong)pfVar56 + 0x20) = 0xfffffffffffffffe;
        uVar25 = *(ulonglong *)UNRECOVERED_JUMPTABLE;
        if (uVar25 == 0) {
          uVar41 = 0;
        }
        else {
          uVar3 = *(ulonglong *)(UNRECOVERED_JUMPTABLE + 2);
          uVar41 = *(ulonglong *)(UNRECOVERED_JUMPTABLE + 4);
          *(undefined8 *)((longlong)pfVar56 + -0x48) = 0;
          *(ulonglong *)((longlong)pfVar56 + -0x40) = uVar25;
          *(ulonglong *)((longlong)pfVar56 + -0x38) = uVar3;
          *(undefined8 *)((longlong)pfVar56 + -0x28) = 0;
          *(ulonglong *)((longlong)pfVar56 + -0x20) = uVar25;
          *(ulonglong *)((longlong)pfVar56 + -0x18) = uVar3;
        }
        uVar25 = (ulonglong)(uVar25 != 0);
        *(ulonglong *)((longlong)pfVar56 + -0x50) = uVar25;
        *(ulonglong *)((longlong)pfVar56 + -0x30) = uVar25;
        *(ulonglong *)((longlong)pfVar56 + -0x10) = uVar41;
        puVar36 = (undefined1 *)((longlong)pfVar56 + -0x50);
        *(undefined8 *)((longlong)pfVar56 + -0x78) = 0x1409a4652;
        pdb_14192c4b0((undefined1 *)((longlong)pfVar56 + -8),puVar36);
        lVar42 = *(longlong *)((longlong)pfVar56 + -8);
        if (lVar42 != 0) {
          do {
            lVar70 = *(longlong *)((longlong)pfVar56 + 8);
            *(undefined1 **)((longlong)pfVar56 + 0x18) = puVar36;
            *(longlong *)((longlong)pfVar56 + 0x10) = lVar70 * 0x20 + lVar42;
            uVar25 = *(ulonglong *)(lVar42 + 0x168 + lVar70 * 0x18);
            if (uVar25 != 0) {
              pbVar4 = *(byte **)(lVar42 + lVar70 * 0x18 + 0x170);
              *(undefined8 *)((longlong)pfVar56 + -0x78) = 0x1409a46ad;
              pub_1406abac0(pbVar4,uVar25,1);
            }
            *(undefined8 *)((longlong)pfVar56 + -0x78) = 0x1409a46b6;
            pdb_140966d70((longlong *)((longlong)pfVar56 + 0x10));
            *(undefined8 *)((longlong)pfVar56 + -0x78) = 0x1409a46c2;
            pdb_14192c4b0((undefined1 *)((longlong)pfVar56 + -8),puVar36);
            lVar42 = *(longlong *)((longlong)pfVar56 + -8);
          } while (lVar42 != 0);
        }
        return (float *)0x0;
      case (float *)0x141b6efc7:
DAT_141b6efd0:
        *(float **)((longlong)pfVar56 + 0x10) = arg1;
        *(float **)((longlong)pfVar56 + -8) = unaff_RBP;
        pfVar56 = (float *)((longlong)pfVar56 + -0x28);
        pfVar39 = arg1;
code_r0x000141b6efda:
        unaff_RBP = pfVar39 + 0x10;
        pfVar28 = *(float **)(pfVar39 + 10);
code_r0x000141b6efe2:
        if (*(ulonglong *)(pfVar28 + 4) != 0) {
          arg1 = (float *)(*(ulonglong *)(pfVar28 + 4) << 5);
code_r0x000141b6efef:
          pbVar4 = *(byte **)(unaff_RBP + -4);
          *(undefined **)((longlong)pfVar56 + -8) = &UNK_141b6effe;
          pub_1406abac0(pbVar4,(ulonglong)arg1,8);
          pfVar28 = extraout_RAX;
        }
code_r0x000141b6efff:
        return pfVar28;
      case (float *)0x141b6f00c:
code_r0x000141b6f00c:
        *(char *)pfVar28 = (char)*(code *)pfVar28 + (char)pfVar28;
code_r0x000141b6f00e:
        *(char *)pfVar28 = (char)*(code *)pfVar28 + (char)pfVar28;
DAT_141b6f010:
        *(float **)((longlong)pfVar56 + 0x10) = arg1;
code_r0x000141b6f015:
        *(float **)((longlong)pfVar56 + -8) = unaff_RBP;
        pfVar56 = (float *)((longlong)pfVar56 + -0x28);
        pfVar39 = arg1;
code_r0x000141b6f01a:
        unaff_RBP = pfVar39 + 0x10;
        pfVar28 = *(float **)(pfVar39 + 0xc);
code_r0x000141b6f022:
        pfVar28 = (float *)((longlong)pfVar28 * 2);
code_r0x000141b6f02a:
        if (pfVar28 == (float *)0x0) {
          return (float *)0x0;
        }
        pfVar28 = *(float **)(unaff_RBP + -6);
      case (float *)0x141b6f033:
        UNRECOVERED_JUMPTABLE = *(float **)(pfVar28 + 2);
code_r0x000141b6f037:
        uVar25 = *(ulonglong *)(unaff_RBP + -4);
        *(undefined **)((longlong)pfVar56 + -8) = &UNK_141b6f046;
        pub_1406abac0((byte *)UNRECOVERED_JUMPTABLE,uVar25,1);
        pfVar28 = extraout_RAX_00;
code_r0x000141b6f04b:
        return pfVar28;
      case (float *)0x141b6f04a:
code_r0x000141b6f04a:
        *(code *)((longlong)unaff_RBP + -0x3d) =
             (code)((byte)*(code *)((longlong)unaff_RBP + -0x3d) & (byte)unaff_RBX);
        pcVar66 = (code *)swi(3);
        pfVar28 = (float *)(*pcVar66)();
        return pfVar28;
      case (float *)0x141b6f062:
        pfVar28 = (float *)((ulonglong)uVar30 << 8);
code_r0x000141b6f064:
        cVar20 = *(code *)UNRECOVERED_JUMPTABLE;
        in_R10 = (ulonglong)(byte)cVar20;
        if (0xe < in_R10) {
          pfVar65 = (float *)0x0;
          do {
            bVar72 = *(code *)((longlong)pfVar39 + (longlong)pfVar65) == cVar20;
            pfVar28 = (float *)CONCAT71((int7)((ulonglong)pfVar28 >> 8),bVar72);
            if (bVar72) {
              return pfVar28;
            }
            bVar72 = param_3 + -6 != pfVar65;
            pfVar65 = pfVar65 + 6;
          } while (bVar72);
          return pfVar28;
        }
code_r0x000141b6f072:
                    /* WARNING: Could not recover jumptable at 0x000141b6f08c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        pfVar28 = (float *)(*(code *)(&UNK_14339833c + *(int *)(&UNK_14339833c + in_R10 * 4)))
                                     (*(ulonglong *)(UNRECOVERED_JUMPTABLE + 4));
        return pfVar28;
      case (float *)0x141b6f08a:
        goto code_r0x000141b6f072;
      case (float *)0x141b6f0ae:
        *(char *)pfVar28 = (char)*(code *)pfVar28 + cVar22;
        do {
          in_R11 = in_R11 + 6;
code_r0x000141b6f0b4:
          pfVar65 = unaff_RDI;
          if (param_3 == in_R11) {
            return (float *)0x0;
          }
code_r0x000141b6f0bd:
          unaff_RDI = pfVar65;
        } while ((*(code *)((longlong)arg1 + (longlong)in_R11) != (code)0x0) ||
                (*(int *)((longlong)(arg1 + 2) + (longlong)in_R11) != (int)param_4));
      case (float *)0x141b6f0cb:
        if ((uint)param_2 < 6) {
                    /* WARNING: Could not recover jumptable at 0x000141b6f0dd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          pfVar28 = (float *)(*(code *)((longlong)(int)pfVar65[(longlong)param_2] +
                                       (longlong)pfVar65))();
          return pfVar28;
        }
        return (float *)CONCAT71((int7)((ulonglong)pfVar28 >> 8),1);
      case (float *)0x141b6f741:
        unaff_RDI = (float *)0x67304c00;
        pcVar66 = (code *)((longlong)pfVar28 + -0x75);
        bVar74 = SCARRY4(*(int *)pcVar66,iVar23);
        *(int *)pcVar66 = *(int *)pcVar66 + iVar23;
        bVar73 = *(int *)pcVar66 < 0;
        bVar72 = *(int *)pcVar66 == 0;
code_r0x000141b6f747:
        if (bVar72 || bVar74 != bVar73) {
          *(code *)((longlong)arg1 + 0x28ba01) = SUB81(pfVar28,0);
          *(char *)pfVar28 = (char)*(code *)pfVar28 + (char)SUB81(pfVar28,0);
code_r0x000141b6f761:
                    /* WARNING: Subroutine does not return */
          *(undefined **)((longlong)pfVar56 + -8) = &UNK_141b6f766;
          pdb_142dc83b0();
        }
code_r0x000141b6f64b:
        pfVar28 = *(float **)(param_2 + 2);
        pfVar65 = unaff_RDI;
code_r0x000141b6f64f:
        *(code *)((longlong)pfVar28 + (longlong)pfVar65) = (code)0x7d;
        *(code **)(param_2 + 4) = (code *)((longlong)pfVar65 + 1);
        *(undefined1 *)(unaff_R15 + 4) = 1;
code_r0x000141b6f65f:
        param_2 = (float *)*unaff_R15;
code_r0x000141b6f662:
        unaff_R12 = unaff_R15[3] + -1;
        unaff_R15[3] = unaff_R12;
        pfVar65 = *(float **)(param_2 + 4);
        if (*(float **)param_2 == pfVar65) {
          *(undefined8 *)((longlong)pfVar56 + 0x20) = 1;
          plVar59 = (longlong *)pfVar56;
          goto code_r0x000141b6f77b;
        }
        goto code_r0x000141b6f67a;
      case (float *)0x141b6f754:
        pcVar66 = (code *)((longlong)unaff_RBP + (longlong)UNRECOVERED_JUMPTABLE * 4 + 5);
        *(int *)pcVar66 = *(int *)pcVar66 + iVar23;
code_r0x000141b6f75a:
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      case (float *)0x141b6f767:
        *(undefined4 *)((longlong)pfVar56 + 0x20) = 1;
        plVar59 = (longlong *)pfVar56;
code_r0x000141b6f77b:
        UNRECOVERED_JUMPTABLE = param_2;
        pfVar56 = (float *)plVar59;
        param_2 = UNRECOVERED_JUMPTABLE;
code_r0x000141b6f77e:
        arg1 = pfVar65;
code_r0x000141b6f781:
        *(undefined **)((longlong)pfVar56 + -8) = &UNK_141b6f786;
        pdb_142d7f1b0(UNRECOVERED_JUMPTABLE,arg1);
code_r0x000141b6f786:
        pfVar65 = *(float **)(param_2 + 4);
code_r0x000141b6f67a:
        *(code *)(*(ulonglong *)(param_2 + 2) + (longlong)pfVar65) = (code)0xa;
        unaff_RDI = (float *)((longlong)pfVar65 + 1);
        *(float **)(param_2 + 4) = unaff_RDI;
        pfVar65 = unaff_RDI;
        if (unaff_R12 != 0) {
          unaff_RBX = (float *)unaff_R15[2];
code_r0x000141b6f692:
          if (unaff_RBX == (float *)0x0) {
            *(float **)(param_2 + 4) = unaff_RDI;
            pfVar65 = unaff_RDI;
          }
          else {
code_r0x000141b6f69b:
            do {
              if ((float *)(*(ulonglong *)param_2 - (longlong)unaff_RDI) < unaff_RBX) {
                *(undefined8 *)((longlong)pfVar56 + 0x20) = 1;
code_r0x000141b6f6d4:
                *(undefined **)((longlong)pfVar56 + -8) = &UNK_141b6f6e8;
                pdb_142d7f1b0(param_2,unaff_RDI,unaff_RBX,1);
                unaff_RDI = *(float **)(param_2 + 4);
              }
code_r0x000141b6f6ab:
              UNRECOVERED_JUMPTABLE = (float *)(*(ulonglong *)(param_2 + 2) + (longlong)unaff_RDI);
              puVar8 = (undefined1 *)pfVar56;
code_r0x000141b6f6b5:
              pfVar56 = (float *)puVar8;
              *(undefined **)((longlong)pfVar56 + -8) = &UNK_141b6f6bd;
              pub_142e32760(UNRECOVERED_JUMPTABLE);
              unaff_RDI = (float *)((longlong)unaff_RDI + (longlong)unaff_RBX);
              *(float **)(param_2 + 4) = unaff_RDI;
              unaff_R12 = unaff_R12 + -1;
              pfVar65 = unaff_RDI;
            } while (unaff_R12 != 0);
          }
        }
        if (*(float **)param_2 == pfVar65) {
code_r0x000141b6f78f:
          *(undefined8 *)((longlong)pfVar56 + 0x20) = 1;
          *(undefined **)((longlong)pfVar56 + -8) = &UNK_141b6f7af;
          pdb_142d7f1b0(param_2,pfVar65,1,1);
          pfVar65 = *(float **)(param_2 + 4);
        }
code_r0x000141b6f6fb:
        pfVar28 = *(float **)(param_2 + 2);
        unaff_RDI = pfVar65;
code_r0x000141b6f6ff:
        *(code *)((longlong)pfVar28 + (longlong)unaff_RDI) = (code)0x7d;
        pcVar66 = (code *)((longlong)unaff_RDI + 1);
code_r0x000141b6f706:
        *(code **)(param_2 + 4) = pcVar66;
code_r0x000141b6f70a:
        return pfVar28;
      case (float *)0x141b6f77a:
        *(code *)((longlong)pfVar28 + -0x77) =
             (code)((char)*(code *)((longlong)pfVar28 + -0x77) + (char)UNRECOVERED_JUMPTABLE);
        pcVar66 = (code *)swi(1);
        pfVar28 = (float *)(*pcVar66)();
        return pfVar28;
      case (float *)0x141b6f78d:
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      case (float *)0x141b6f7a8:
        goto code_r0x000141b6f78f;
      case (float *)0x141b6f7f4:
        in(0x8260);
        plVar61 = (longlong *)((longlong)pfVar56 + -8);
        pfVar56 = (float *)((longlong)pfVar56 + -8);
        *plVar61 = (longlong)unaff_RBP;
code_r0x000141b6f7f9:
        *(undefined4 *)((longlong)pfVar56 + 0xb0) = unaff_XMM15_Da;
        *(undefined4 *)((longlong)pfVar56 + 0xb4) = unaff_XMM15_Db;
        *(undefined4 *)((longlong)pfVar56 + 0xb8) = unaff_XMM15_Dc;
        *(undefined4 *)((longlong)pfVar56 + 0xbc) = unaff_XMM15_Dd;
code_r0x000141b6f802:
        *(undefined4 *)((longlong)pfVar56 + 0xa0) = unaff_XMM14_Da;
        *(undefined4 *)((longlong)pfVar56 + 0xa4) = unaff_XMM14_Db;
        *(undefined4 *)((longlong)pfVar56 + 0xa8) = unaff_XMM14_Dc;
        *(undefined4 *)((longlong)pfVar56 + 0xac) = unaff_XMM14_Dd;
        *(undefined4 *)((longlong)pfVar56 + 0x90) = unaff_XMM13_Da;
        *(undefined4 *)((longlong)pfVar56 + 0x94) = unaff_XMM13_Db;
        *(undefined4 *)((longlong)pfVar56 + 0x98) = unaff_XMM13_Dc;
        *(undefined4 *)((longlong)pfVar56 + 0x9c) = unaff_XMM13_Dd;
code_r0x000141b6f814:
        *(float *)((longlong)pfVar56 + 0x80) = unaff_XMM12_Da;
        *(undefined4 *)((longlong)pfVar56 + 0x84) = unaff_XMM12_Db;
        *(undefined4 *)((longlong)pfVar56 + 0x88) = unaff_XMM12_Dc;
        *(undefined4 *)((longlong)pfVar56 + 0x8c) = unaff_XMM12_Dd;
        puVar36 = (undefined1 *)pfVar56;
code_r0x000141b6f81d:
        *(undefined1 (*) [16])(puVar36 + 0x70) = unaff_XMM11;
        pfVar39 = arg1;
        goto code_r0x000141b6f823;
      case (float *)0x141b6f7fc:
        ((code *)((longlong)pfVar65 + 0x29))[(longlong)UNRECOVERED_JUMPTABLE] =
             (code)((char)((code *)((longlong)pfVar65 + 0x29))[(longlong)UNRECOVERED_JUMPTABLE] +
                   cVar22);
        cVar22 = cRam24ac290f44000000;
        uVar31 = (undefined7)(CONCAT62((int6)((ulonglong)pfVar28 >> 0x10),0x2400) >> 8);
        pcVar27 = (char *)CONCAT71(uVar31,cRam24ac290f44000000);
        *pcVar27 = *pcVar27 + cRam24ac290f44000000;
        ((code *)((longlong)pfVar65 + 0x29))[(longlong)UNRECOVERED_JUMPTABLE] =
             (code)((char)((code *)((longlong)pfVar65 + 0x29))[(longlong)UNRECOVERED_JUMPTABLE] +
                   cVar22);
        *(code *)pfVar65 = *(code *)param_2;
        pcVar27 = (char *)(CONCAT71(uVar31,cVar22) & 0xffffffffffffff80);
        *pcVar27 = *pcVar27 + (char)pcVar27;
        ((code *)((longlong)pfVar65 + 0x2a))[(longlong)UNRECOVERED_JUMPTABLE] =
             (code)((char)((code *)((longlong)pfVar65 + 0x2a))[(longlong)UNRECOVERED_JUMPTABLE] +
                   (char)pcVar27);
        puVar36 = puRam000000000000b024;
code_r0x000141b6f823:
        *(float *)(puVar36 + 0x60) = unaff_XMM10_Da;
        *(float *)(puVar36 + 100) = unaff_XMM10_Db;
        *(undefined4 *)(puVar36 + 0x68) = unaff_XMM10_Dc;
        *(undefined4 *)(puVar36 + 0x6c) = unaff_XMM10_Dd;
        *(float *)(puVar36 + 0x50) = unaff_XMM9_Da;
        *(undefined4 *)(puVar36 + 0x54) = unaff_XMM9_Db;
        *(undefined4 *)(puVar36 + 0x58) = unaff_XMM9_Dc;
        *(undefined4 *)(puVar36 + 0x5c) = unaff_XMM9_Dd;
        arg1 = pfVar39;
        pfVar56 = (float *)puVar36;
        unaff_XMM10_Da = unaff_XMM8_Dc;
        unaff_XMM10_Db = unaff_XMM8_Dd;
code_r0x000141b6f82f:
        *(float *)((longlong)pfVar56 + 0x40) = unaff_XMM8_Da;
        *(float *)((longlong)pfVar56 + 0x44) = unaff_XMM8_Db;
        *(float *)((longlong)pfVar56 + 0x48) = unaff_XMM10_Da;
        *(float *)((longlong)pfVar56 + 0x4c) = unaff_XMM10_Db;
        *(float *)((longlong)pfVar56 + 0x30) = unaff_XMM7_Da;
        *(float *)((longlong)pfVar56 + 0x34) = unaff_XMM7_Db;
        *(float *)((longlong)pfVar56 + 0x38) = unaff_XMM7_Dc;
        *(float *)((longlong)pfVar56 + 0x3c) = unaff_XMM7_Dd;
        *(float *)((longlong)pfVar56 + 0x20) = unaff_XMM6_Da;
        *(undefined4 *)((longlong)pfVar56 + 0x24) = unaff_XMM6_Db;
        *(undefined4 *)((longlong)pfVar56 + 0x28) = unaff_XMM6_Dc;
        *(undefined4 *)((longlong)pfVar56 + 0x2c) = unaff_XMM6_Dd;
                    /* WARNING: Could not recover jumptable at 0x000141b6f86f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        pfVar28 = (float *)(*(code *)(&UNK_143398390 +
                                     *(int *)(&UNK_143398390 + ((ulonglong)arg1 & 0xff) * 4)))
                                     (&UNK_143398390 +
                                      *(int *)(&UNK_143398390 + ((ulonglong)arg1 & 0xff) * 4));
        return pfVar28;
      case (float *)0x141b6f84d:
code_r0x000141b6f84d:
        unaff_XMM7_Da = pfVar28[2];
        unaff_XMM7_Db = pfVar28[3];
        unaff_XMM7_Dc = pfVar28[4];
        unaff_XMM7_Dd = pfVar28[5];
        arg1 = pfVar39;
        unaff_XMM10_Da = unaff_XMM8_Dc;
        unaff_XMM10_Db = unaff_XMM8_Dd;
        goto code_r0x000141b6f82f;
      case (float *)0x141b6f896:
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      case (float *)0x141b6f89d:
code_r0x000141b6f89d:
        lVar42 = *(longlong *)pfVar56;
        pfVar56 = (float *)((longlong)pfVar56 + 8);
        *(undefined4 *)(lVar42 + 0xf) = 0x41f3c928;
        fVar76 = (float)CONCAT13(in_XMM1_Bd,CONCAT12(in_XMM1_Bc,CONCAT11(in_XMM1_Bb,in_XMM1_Ba))) *
                 in_XMM4_Da;
        uVar83 = SUB41(fVar76,0);
        uVar85 = (undefined1)((uint)fVar76 >> 8);
        uVar87 = (undefined1)((uint)fVar76 >> 0x10);
        uVar89 = (undefined1)((uint)fVar76 >> 0x18);
code_r0x000141b6f8e9:
        in_XMM0._4_12_ = auVar78._4_12_;
        in_XMM0._0_4_ =
             auVar78._0_4_ - (float)CONCAT13(uVar89,CONCAT12(uVar87,CONCAT11(uVar85,uVar83)));
        unaff_RDI = pfVar65;
code_r0x000141b6f8ed:
        in_XMM0._0_4_ = in_XMM0._0_4_ * _DAT_142e37890;
        pfVar65 = unaff_RDI;
code_r0x000141b6f8f5:
        in_XMM1_Ba = (char)_DAT_142e36f34;
        in_XMM1_Bb = (char)((uint)_DAT_142e36f34 >> 8);
        in_XMM1_Bc = (char)((uint)_DAT_142e36f34 >> 0x10);
        in_XMM1_Bd = (char)((uint)_DAT_142e36f34 >> 0x18);
        unaff_RDI = pfVar65;
code_r0x000141b6f8fd:
        if ((float)CONCAT13(in_XMM1_Bd,CONCAT12(in_XMM1_Bc,CONCAT11(in_XMM1_Bb,in_XMM1_Ba))) <=
            in_XMM0._0_4_) {
          in_XMM1_Ba = in_XMM0[0];
          in_XMM1_Bb = in_XMM0[1];
          in_XMM1_Bc = in_XMM0[2];
          in_XMM1_Bd = in_XMM0[3];
        }
        pfVar65 = unaff_RDI;
        fVar76 = _DAT_142e36f28;
        if ((float)CONCAT13(in_XMM1_Bd,CONCAT12(in_XMM1_Bc,CONCAT11(in_XMM1_Bb,in_XMM1_Ba))) <=
            _DAT_142e36f28) {
          fVar76 = (float)CONCAT13(in_XMM1_Bd,CONCAT12(in_XMM1_Bc,CONCAT11(in_XMM1_Bb,in_XMM1_Ba)));
        }
code_r0x000141b6f913:
        *(undefined **)((longlong)pfVar56 + -8) = &UNK_141b6f918;
        pub_142e32960();
        unaff_RDI = pfVar65;
        if (_DAT_143058d40 < (float)(_DAT_142e377e0 & (uint)fVar76)) {
code_r0x000141b6f93f:
          unaff_RDI = pfVar65;
code_r0x000141b6f944:
                    /* WARNING: Could not recover jumptable at 0x000141b6f952. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          pfVar28 = (float *)(*(code *)(&UNK_1433983c0 +
                                       *(int *)(&UNK_1433983c0 + (longlong)unaff_RDI * 4)))
                                       (&UNK_1433983c0 +
                                        *(int *)(&UNK_1433983c0 + (longlong)unaff_RDI * 4));
          return pfVar28;
        }
code_r0x000141b6f965:
        UNRECOVERED_JUMPTABLE =
             (float *)(&UNK_1433983a8 + *(int *)(&UNK_1433983a8 + (longlong)unaff_RDI * 4));
code_r0x000141b6f993:
                    /* WARNING: Could not recover jumptable at 0x000141b6f993. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        pfVar28 = (float *)(*(code *)UNRECOVERED_JUMPTABLE)(UNRECOVERED_JUMPTABLE);
        return pfVar28;
      case (float *)0x141b6f8bd:
        fVar76 = unaff_XMM8_Da * unaff_XMM7_Da;
        in_XMM1_Ba = SUB41(fVar76,0);
        in_XMM1_Bb = (char)((uint)fVar76 >> 8);
        in_XMM1_Bc = (char)((uint)fVar76 >> 0x10);
        in_XMM1_Bd = (char)((uint)fVar76 >> 0x18);
        auVar82._4_4_ = unaff_XMM9_Db;
        auVar82._0_4_ = unaff_XMM9_Da;
        auVar82._8_4_ = unaff_XMM9_Dc;
        auVar82._12_4_ = unaff_XMM9_Dd;
        auVar81._4_12_ = auVar82._4_12_;
        auVar81._0_4_ = unaff_XMM9_Da * unaff_XMM12_Da;
code_r0x000141b6f8ce:
        in_XMM0._4_12_ = auVar81._4_12_;
        fVar76 = auVar81._0_4_ +
                 (float)CONCAT13(in_XMM1_Bd,CONCAT12(in_XMM1_Bc,CONCAT11(in_XMM1_Bb,in_XMM1_Ba)));
        in_XMM0._0_4_ = fVar76 + fVar76;
        pfVar65 = unaff_RDI;
        goto code_r0x000141b6f8f5;
      case (float *)0x141b6f913:
        goto code_r0x000141b6f913;
      case (float *)0x141b6f95d:
code_r0x000141b6fb77:
        *(undefined **)((longlong)pfVar56 + -8) = &UNK_141b6fb80;
        fVar77 = (float)pub_142e32980();
        fVar76 = fVar76 * fVar77;
        fVar77 = 0.0;
        goto code_r0x000141b6fbef;
      case (float *)0x141b6f9c4:
code_r0x000141b6f9ed:
        fVar76 = auVar78._0_4_;
        goto code_r0x000141b6fbe6;
      case (float *)0x141b6fa0b:
        lVar42 = *(longlong *)pfVar56;
        pfVar56 = (float *)((longlong)pfVar56 + 8);
        *(undefined4 *)(lVar42 + 0xf) = 0x41f3c928;
      case (float *)0x141b6fa13:
        goto code_r0x000141b6fa13;
      case (float *)0x141b6fa42:
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
code_r0x000141b6e92b:
      pfVar28 = param_2;
      *(undefined8 *)((longlong)pfVar56 + -8) = 0x141b6e930;
      UNRECOVERED_JUMPTABLE = (float *)pdb_142d8f140(pfVar39);
      param_2 = pfVar28;
code_r0x000141b6e936:
      *(float **)(param_2 + 2) = UNRECOVERED_JUMPTABLE;
      *(code *)pfVar28 = (code)0x1;
      return pfVar28;
    case 0x30:
      out(*param_2,0x8194);
      *(int *)((longlong)pfVar28 + -0x7b) = *(int *)((longlong)pfVar28 + -0x7b) + -1;
      ((code *)((longlong)unaff_RDI + 0x49))[(longlong)UNRECOVERED_JUMPTABLE] = (code)0x0;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0x31:
      goto code_r0x000141b6d9f2;
    case 0x32:
      goto code_r0x000141b6d9d7;
    case 0x33:
    case 0x34:
    case 0x35:
    case 0x36:
    case 0x37:
    case 0x38:
    case 0x39:
      *(code *)((longlong)pfVar28 + -1) =
           (code)(((char)*(code *)((longlong)pfVar28 + -1) - bVar21) - bVar75);
      pfVar26 = pfVar28;
code_r0x000141b6d91e:
      pcVar66 = (code *)((longlong)pfVar26 + -9);
      *pcVar66 = (code)((byte)*pcVar66 >> 1 | (char)*pcVar66 << 7);
code_r0x000141b6d922:
      pfVar28 = pfVar26;
      pfVar65 = (float *)0x100002600;
      goto LAB_141b6d92c;
    case 0x3a:
code_r0x000141b6d928:
      *pfVar28 = (float)((int)*pfVar28 + (int)pfVar28);
      *(char *)pfVar28 = (char)*(code *)pfVar28 + (char)pfVar28;
      goto LAB_141b6d92c;
    case 0x3b:
code_r0x000141b6e75a:
      pfVar56 = (float *)puVar17;
      arg1 = (float *)((ulonglong)UNRECOVERED_JUMPTABLE & 0xffffffff);
code_r0x000141b6e74c:
      *(undefined8 *)((longlong)pfVar56 + -8) = 0x141b6e767;
      iVar23 = pub_142e32750(arg1,&UNK_143397ae7);
      UNRECOVERED_JUMPTABLE = arg1;
      if (iVar23 != 0) {
LAB_141b6e77a:
        param_2 = pfVar28;
        if (param_3 == (float *)0xc) goto code_r0x000141b6e780;
        goto code_r0x000141b6e7da;
      }
      *(code *)((longlong)pfVar28 + 1) = (code)0xf;
      goto LAB_141b6e809;
    case 0x3c:
    case 0x3d:
    case 0x3f:
      goto code_r0x000141b6e826;
    case 0x3e:
      pfVar28 = (float *)(ulonglong)(uVar68 | 0x40c610eb);
      *unaff_RBX = (float)((int)*unaff_RBX + uVar34);
      goto LAB_141b6e809;
    case 0x40:
      pfVar65 = (float *)((longlong)unaff_RDI + 1);
      cVar20 = (code)in(0x8194);
      *(code *)unaff_RDI = cVar20;
code_r0x000141b6e786:
      UNRECOVERED_JUMPTABLE = arg1;
      cVar20 = (code)in((short)UNRECOVERED_JUMPTABLE);
      *(code *)pfVar65 = cVar20;
      if (!bVar72) {
        return pfVar28;
      }
code_r0x000141b6e780:
      param_2 = pfVar28;
      if (UNRECOVERED_JUMPTABLE[2] != 4.5448224e+30 ||
          *(ulonglong *)UNRECOVERED_JUMPTABLE != 0x756c43656e6f6c43) goto code_r0x000141b6e7da;
      *(code *)((longlong)pfVar28 + 1) = (code)0x11;
      goto LAB_141b6e809;
    case 0x41:
      param_2 = pfVar28;
code_r0x000141b6e7da:
      pfVar28 = param_2;
      *(undefined8 *)((longlong)pfVar56 + -8) = 0x141b6e7df;
      UNRECOVERED_JUMPTABLE = (float *)pdb_142d8f140(UNRECOVERED_JUMPTABLE);
      param_2 = pfVar28;
      goto code_r0x000141b6e7de;
    case 0x42:
      *(code *)((longlong)pfVar28 + 1) = (code)0x6;
LAB_141b6e809:
      UNRECOVERED_JUMPTABLE = (float *)0x0;
LAB_141b6e80b:
      *(code *)pfVar28 = SUB81(UNRECOVERED_JUMPTABLE,0);
code_r0x000141b6e811:
code_r0x000141b6e813:
code_r0x000141b6e818:
      return pfVar28;
    case 0x43:
      goto code_r0x000141b6e86a;
    case 0x44:
      goto code_r0x000141b6e88c;
    case 0x45:
      bVar72 = CARRY4(uRam0000000196700fcf,uVar68);
      uRam0000000196700fcf = uRam0000000196700fcf + uVar68;
      if (bVar72) goto code_r0x000141b6e958;
      bVar72 = CONCAT13(UNK_14339819a,CONCAT12(UNK_143398199,CONCAT11(UNK_143398198,UNK_143398197)))
               == 0x6e696172 && uVar34 == _UNK_143398194;
      goto code_r0x000141b6e8f6;
    case 0x46:
      if (bVar75) {
        halt_baddata();
      }
      goto code_r0x000141b6e8c6;
    case 0x47:
      goto code_r0x000141b6e90c;
    case 0x48:
code_r0x000141b6e8aa:
      param_2 = pfVar28;
      if (bVar72) {
        pfVar39 = (float *)0x43397cb0;
      }
      goto code_r0x000141b6e92b;
    case 0x49:
      goto code_r0x000141b6e94e;
    case 0x4a:
    case 0x4c:
    case 0x4d:
    case 0x53:
    case 0x55:
    case 0x56:
    case 0x57:
    case 0x58:
    case 0x59:
    case 0x5a:
code_r0x000141b6eaa3:
      *(byte *)UNRECOVERED_JUMPTABLE = (byte)*(code *)UNRECOVERED_JUMPTABLE & (byte)pfVar28;
    case 0x60:
      *(char *)pfVar28 = (char)*(code *)pfVar28 + (char)pfVar28;
      pfVar37 = UNRECOVERED_JUMPTABLE;
      goto code_r0x000141b6eaa7;
    case 0x4b:
      if (bVar72) goto code_r0x000141b6e9bb;
      goto code_r0x000141b6ea27;
    case 0x4e:
      *(uint *)(&UNK_14339815d + uVar25 + (longlong)pfVar28) = uVar34;
      goto code_r0x000141b6e974;
    case 0x4f:
      goto code_r0x000141b6ea31;
    case 0x50:
      pfVar28 = (float *)(ulonglong)(uVar68 - 3);
code_r0x000141b6ea57:
      bVar72 = param_3 < (float *)0x12;
      bVar71 = param_3 == (float *)0x12;
      goto code_r0x000141b6ea5b;
    case 0x51:
      goto code_r0x000141b6e98c;
    case 0x52:
      goto code_r0x000141b6e9d8;
    case 0x54:
      pfVar28 = (float *)(CONCAT71((int7)((ulonglong)pfVar28 >> 8),cVar22 + -0x15) | 0x81);
      goto code_r0x000141b6ea05;
    case 0x5b:
      goto code_r0x000141b6ea7a;
    case 0x5c:
      goto code_r0x000141b6ea8d;
    case 0x5d:
      goto code_r0x000141b6eb26;
    case 0x5e:
      goto code_r0x000141b6eaef;
    case 0x5f:
      uVar68 = 0x375cf2f2;
      goto code_r0x000141b6eb13;
    case 0x61:
      goto code_r0x000141b6eb5b;
    case 0x62:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 99:
    case 100:
    case 0x65:
    case 0x69:
      *(char *)pfVar28 = (char)*(code *)pfVar28 + cVar22;
code_r0x000141b6ee1a:
      goto pdb_140f679a0;
    case 0x66:
      if (UNRECOVERED_JUMPTABLE == (float *)0x0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
code_r0x000141b6ed97:
      UNRECOVERED_JUMPTABLE = pfVar28;
      goto pdb_140f679a0;
    case 0x67:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0x68:
      pcVar66 = (code *)swi(3);
      pfVar28 = (float *)(*pcVar66)();
      return pfVar28;
    case 0x6a:
      UNRECOVERED_JUMPTABLE = (float *)(ulonglong)(uint)*UNRECOVERED_JUMPTABLE;
      goto pdb_141b6eed0;
    case 0x6b:
      puVar57 = (undefined8 *)((longlong)pfVar56 + -8);
      pfVar56 = (float *)((longlong)pfVar56 + -8);
      *puVar57 = param_2;
      do {
      } while (UNRECOVERED_JUMPTABLE == (float *)0x0);
      goto DAT_141b6efd0;
    case 0x6c:
    case 0x6f:
    case 0x71:
    case 0x72:
    case 0x73:
    case 0x74:
    case 0x75:
    case 0x76:
    case 0x77:
      goto code_r0x000141b6ef96;
    case 0x6d:
      UNRECOVERED_JUMPTABLE = (float *)(ulonglong)(uVar68 + 0x18);
      goto code_r0x000141b6ef37;
    case 0x6e:
      goto code_r0x000141b6efe2;
    case 0x70:
      goto code_r0x000141b6efff;
    case 0x78:
      goto code_r0x000141b6ef67;
    case 0x79:
    case 0x7a:
      iRam00000001100680d3 = (int)in_ST0;
      pcVar66 = (code *)swi(3);
      pfVar28 = (float *)(*pcVar66)();
      return pfVar28;
    case 0x7b:
      *(undefined **)((longlong)pfVar56 + -8) = &UNK_141b6ef83;
      pfVar28 = (float *)func_0x00012375bc6b();
      *(byte *)(pfVar28 + -0x5ee9d2e) = (char)*(code *)(pfVar28 + -0x5ee9d2e) + 1;
      goto code_r0x000141b6ef89;
    case 0x7c:
    case 0x7d:
    case 0x7e:
      *(code *)((longlong)pfVar28 + -0x7d) =
           (code)((byte)*(code *)((longlong)pfVar28 + -0x7d) | bVar21);
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0x7f:
code_r0x000141b6f675:
      *(char *)pfVar28 = (char)*(code *)pfVar28 + (char)pfVar28;
      *(code *)((longlong)pfVar28 + -0x75) =
           (code)((char)*(code *)((longlong)pfVar28 + -0x75) + (char)UNRECOVERED_JUMPTABLE);
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0x80:
      goto code_r0x000141b6f6c1;
    case 0x81:
      goto code_r0x000141b6f69b;
    case 0x82:
      *(code *)((longlong)pfVar28 + 1) = (code)((byte)*(code *)((longlong)pfVar28 + 1) | bVar21);
      goto code_r0x000141b6f6ab;
    case 0x83:
      *(code *)((longlong)unaff_RBP + -0x7b) =
           (code)((char)*(code *)((longlong)unaff_RBP + -0x7b) + bVar21 + bVar75);
      in(0x74);
      unaff_RBX = *(float **)((longlong)unaff_R15 + in_FS_OFFSET + 0x10);
      goto code_r0x000141b6f692;
    case 0x84:
code_r0x000141b6f6dc:
      pcVar66 = (code *)swi(1);
      pfVar28 = (float *)(*pcVar66)();
      return pfVar28;
    case 0x85:
      goto code_r0x000141b6f781;
    case 0x86:
      goto code_r0x000141b6f8fd;
    case 0x87:
code_r0x000141b6f847:
      goto code_r0x000141b6f82f;
    case 0x88:
      auVar81._0_4_ = in_XMM0._0_4_ * unaff_XMM8_Da;
      auVar81._4_4_ = in_XMM0._4_4_ * unaff_XMM8_Db;
      auVar81._8_4_ = in_XMM0._8_4_ * unaff_XMM8_Dc;
      auVar81._12_4_ = in_XMM0._12_4_ * unaff_XMM8_Dd;
      goto code_r0x000141b6f8ce;
    case 0x89:
      *(float **)((longlong)pfVar56 + -8) = unaff_RDI;
      pfVar56 = (float *)((longlong)pfVar56 + -0xd0);
      goto code_r0x000141b6f7f9;
    case 0x8a:
      goto code_r0x000141b6f965;
    case 0x8b:
      goto code_r0x000141b6f728;
    case 0x8c:
      if (bVar72) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      goto code_r0x000141b6f8d3;
    case 0x8d:
      *(char *)pfVar28 = (char)*(code *)pfVar28 + cVar22;
      *(code *)((longlong)pfVar28 + -0x77) =
           (code)((char)*(code *)((longlong)pfVar28 + -0x77) + bVar21);
      pcVar66 = (code *)swi(1);
      pfVar28 = (float *)(*pcVar66)();
      return pfVar28;
    case 0x8e:
      goto code_r0x000141b6f730;
    case 0x8f:
      goto code_r0x000141b6f7cd;
    case 0x90:
      goto code_r0x000141b6f93f;
    }
    *(code *)param_2 = cVar20;
code_r0x000141b6d31b:
    *(byte *)(unaff_RBX + 0x12) = (char)*(code *)(unaff_RBX + 0x12) + 1;
    if (cVar20 != (code)0x12) {
code_r0x000141b6d329:
      uVar25 = *(ulonglong *)(unaff_RBX + 10);
      if (uVar25 < *(ulonglong *)(unaff_RBX + 8)) {
        do {
          uVar25 = uVar25 + 1;
          bVar21 = *(byte *)((*(ulonglong *)(unaff_RBX + 6) - 1) + uVar25);
          if ((0x20 < (ulonglong)bVar21) ||
             (((ulonglong)unaff_RDI >> ((ulonglong)bVar21 & 0x3f) & 1) == 0)) {
            if (bVar21 == 0x7d) {
              *(ulonglong *)(unaff_RBX + 10) = uVar25;
              return param_2;
            }
            *(undefined8 *)((longlong)pfVar56 + 0x20) = 10;
            goto code_r0x000141b6d36f;
          }
          *(ulonglong *)(unaff_RBX + 10) = uVar25;
        } while (uVar25 != *(ulonglong *)(unaff_RBX + 8));
      }
      *(undefined8 *)((longlong)pfVar56 + 0x20) = 3;
code_r0x000141b6d36f:
      *(undefined8 *)((longlong)pfVar56 + -8) = 0x141b6d379;
      uVar25 = pdb_142d855a0(unaff_RBX,(undefined1 *)((longlong)pfVar56 + 0x20));
LAB_141b6d3a8:
      *(ulonglong *)(param_2 + 2) = uVar25;
      *(code *)param_2 = (code)0x12;
    }
    return param_2;
  case (code)0x28:
    (&UNK_143398055)[uVar25] = (&UNK_143398055)[uVar25] - bVar32;
    goto code_r0x000141b6d186;
  case (code)0x29:
    goto code_r0x000141b6d181;
  case (code)0x2a:
    return param_2;
  case (code)0x2b:
    bVar75 = CARRY4(uVar68,uVar34);
    bVar74 = SCARRY4(uVar68,uVar34);
    uVar68 = uVar68 + uVar34;
    pfVar28 = (float *)(ulonglong)uVar68;
    bVar73 = (int)uVar68 < 0;
    bVar72 = uVar68 == 0;
    bVar71 = (POPCOUNT(uVar68 & 0xff) & 1U) == 0;
code_r0x000141b6d163:
    bVar21 = (byte)pfVar28;
    fVar77 = SUB84(pfVar28,0);
    uVar68 = (uint)UNRECOVERED_JUMPTABLE;
    bVar33 = (byte)UNRECOVERED_JUMPTABLE;
    bVar32 = (byte)((ulonglong)UNRECOVERED_JUMPTABLE >> 8);
    pfVar37 = UNRECOVERED_JUMPTABLE;
    pfVar39 = arg1;
    puVar50 = (undefined8 *)pfVar56;
    puVar46 = (undefined8 *)pfVar56;
    unaff_RDI = pfVar65;
    auVar78 = in_XMM0;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
    switch(pfVar28) {
    case (float *)0x141b6d163:
      goto code_r0x000141b6d163;
    case (float *)0x141b6d165:
      *(code *)param_2 = (code)0x2;
      return param_2;
    case (float *)0x141b6d170:
      goto code_r0x000141b6d170;
    case (float *)0x141b6d1d9:
      *(code *)param_2 = (code)0xd;
      return param_2;
    case (float *)0x141b6d1e1:
      *(code *)param_2 = (code)0xb;
      return param_2;
    case (float *)0x141b6d1e7:
      *(byte *)pfVar28 = (char)*(code *)pfVar28 + bVar21;
    case (float *)0x141b6d1e9:
      goto code_r0x000141b6d1e9;
    case (float *)0x141b6d1f3:
      goto code_r0x000141b6d1f3;
    case (float *)0x141b6d1fb:
      *(code *)param_2 = (code)0x9;
      return param_2;
    case (float *)0x141b6d203:
      *(code *)param_2 = (code)0x8;
      return param_2;
    case (float *)0x141b6d20b:
      *(code *)param_2 = (code)0x11;
      return param_2;
    case (float *)0x141b6d212:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case (float *)0x141b6d213:
      goto code_r0x000141b6d213;
    case (float *)0x141b6d21b:
      *(code *)param_2 = (code)0x5;
      return param_2;
    case (float *)0x141b6d223:
      *(code *)param_2 = (code)0xf;
      return param_2;
    case (float *)0x141b6d22b:
      *(code *)param_2 = (code)0xc;
      return param_2;
    case (float *)0x141b6d232:
      *(code *)((longlong)pfVar28 + -0x73) =
           (code)((char)*(code *)((longlong)pfVar28 + -0x73) + bVar33);
      pfVar28 = (float *)((ulonglong)pfVar28 & 0xffffffffffffff20);
      goto code_r0x000141b6d238;
    case (float *)0x141b6d252:
      *(byte *)pfVar28 = (char)*(code *)pfVar28 + bVar21;
      goto code_r0x000141b6d254;
    case (float *)0x141b6d271:
      *(byte *)pfVar65 = (char)*(code *)pfVar65 + bVar33;
      pcVar66 = (code *)((longlong)param_3 + -0x77);
      *(uint *)pcVar66 = *(uint *)pcVar66 >> 0x16 | *(uint *)pcVar66 << 10;
      bVar33 = bVar33 | bVar32;
      puVar36 = (undefined1 *)(ulonglong)bVar33;
      *(byte *)pfVar28 = (char)*(code *)pfVar28 + bVar21;
      *(code *)((longlong)pfVar28 + -0x73) =
           (code)((char)*(code *)((longlong)pfVar28 + -0x73) + bVar33);
      pfVar28 = (float *)((ulonglong)pfVar28 & 0xffffffffffffff20);
      goto code_r0x000141b6d283;
    case (float *)0x141b6d291:
      if (bVar74 != bVar73) {
        return pfVar28;
      }
      cVar20 = (code)(bVar21 & 0x21);
      goto code_r0x000141b6d297;
    case (float *)0x141b6d2aa:
      goto code_r0x000141b6d2aa;
    case (float *)0x141b6d38b:
      *(undefined1 *)((longlong)pfVar56 + 0x20) = 0xd;
      puVar67 = &UNK_143323630;
      break;
    case (float *)0x141b6d409:
      *(undefined1 *)((longlong)pfVar56 + 0x20) = 0xd;
      puVar67 = &UNK_143323610;
      break;
    case (float *)0x141b6d454:
      puVar52 = (undefined8 *)((longlong)pfVar56 + -0x38);
      pfVar56 = (float *)((longlong)pfVar56 + -0x38);
      if (*(ulonglong *)(arg1 + 10) < *(ulonglong *)(arg1 + 8)) {
        param_3 = *(float **)(arg1 + 6);
        pfVar28 = (float *)(*(ulonglong *)(arg1 + 10) + 1);
        pfVar37 = (float *)-*(ulonglong *)(arg1 + 8);
        pfVar65 = (float *)0x100002600;
        param_2 = UNRECOVERED_JUMPTABLE;
        goto LAB_141b6d47c;
      }
      goto LAB_141b6d4a2;
    case (float *)0x141b6d48f:
      arg1[10] = fVar77;
      goto code_r0x000141b6d48e;
    case (float *)0x141b6d49c:
      goto code_r0x000141b6d49c;
    case (float *)0x141b6d529:
      pfVar28 = (float *)(ulonglong)((int)fVar77 + 0x182acc2U + (uint)bVar75);
      goto code_r0x000141b6d527;
    case (float *)0x141b6d52f:
      UNRECOVERED_JUMPTABLE = (float *)(ulonglong)(uint)arg1[(longlong)UNRECOVERED_JUMPTABLE];
      goto code_r0x000141b6d527;
    case (float *)0x141b6d53e:
      *(int *)((longlong)pfVar28 + -0x7b) = *(int *)((longlong)pfVar28 + -0x7b) + -1;
      *(code *)((longlong)(pfVar65 + 0x12) + (longlong)UNRECOVERED_JUMPTABLE) = (code)0x0;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case (float *)0x141b6d5fc:
      *(byte *)pfVar28 = (byte)*(code *)pfVar28 & bVar40;
      *(byte *)pfVar28 = (char)*(code *)pfVar28 + bVar21;
      *pfVar65 = *param_2;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case (float *)0x141b6d625:
      in((short)arg1);
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case (float *)0x141b6d64e:
      unaff_RDI = (float *)CONCAT71((int7)((ulonglong)pfVar65 >> 8),(char)pfVar65 + (char)unaff_R15)
      ;
      goto LAB_141b6d64b;
    case (float *)0x141b6d659:
      fRam4c284289483273cf = fVar77;
    case (float *)0x141b6d662:
      UNRECOVERED_JUMPTABLE = (float *)(ulonglong)(uVar68 + (int)fVar77);
      goto code_r0x000141b6d665;
    case (float *)0x141b6d663:
      pfVar28 = (float *)((ulonglong)pfVar28 | 1);
      goto code_r0x000141b6d665;
    case (float *)0x141b6d674:
      goto LAB_141b6d67a;
    case (float *)0x141b6d68d:
      *(byte *)pfVar28 = (char)*(code *)pfVar28 + bVar21;
LAB_141b6d68f:
      if (param_4 == (code *)0x22) goto code_r0x000141b6d695;
      goto LAB_141b6d6bf;
    case (float *)0x141b6d70c:
      goto code_r0x000141b6d70c;
    case (float *)0x141b6d730:
      goto code_r0x000141b6d730;
    case (float *)0x141b6d747:
      goto code_r0x000141b6d747;
    case (float *)0x141b6d7a0:
      goto code_r0x000141b6d7a0;
    case (float *)0x141b6d7e1:
      *(byte *)pfVar28 = (char)*(code *)pfVar28 + bVar21;
      *(code *)((longlong)pfVar28 + -0x73) =
           (code)((char)*(code *)((longlong)pfVar28 + -0x73) + bVar33);
      goto code_r0x000141b6d7e9;
    case (float *)0x141b6d8a4:
      pcVar66 = (code *)((longlong)unaff_RBP + (longlong)UNRECOVERED_JUMPTABLE * 4 + 5);
      *(uint *)pcVar66 = *(int *)pcVar66 + uVar68;
      pfVar56 = *(float **)pfVar56;
      goto code_r0x000141b6d8ac;
    case (float *)0x141b6d8cf:
      *(byte *)arg1 = (char)*(code *)arg1 - bVar33;
      *(byte *)pfVar28 = (char)*(code *)pfVar28 + bVar21;
      bVar72 = CARRY1(bVar33,bVar32);
      pcVar27 = (char *)(ulonglong)uRam282444c748fffffd;
      goto code_r0x000141b6d8de;
    case (float *)0x141b6d8dc:
      bVar72 = false;
      pcVar27 = (char *)((ulonglong)pfVar28 & 0xffffffffffffff28);
code_r0x000141b6d8de:
      *pcVar27 = (*pcVar27 - (char)pcVar27) - bVar72;
      *pcVar27 = *pcVar27 + (char)pcVar27;
      goto LAB_141b6d8d9;
    case (float *)0x141b6d979:
      goto code_r0x000141b6d979;
    case (float *)0x141b6d97f:
      goto code_r0x000141b6d97f;
    case (float *)0x141b6d985:
      goto code_r0x000141b6d985;
    case (float *)0x141b6d98b:
      *(code *)((longlong)pfVar28 + -0x73) =
           (code)((byte)*(code *)((longlong)pfVar28 + -0x73) & bVar33);
      uVar25 = (ulonglong)((uint)fVar77 | 0x182a8ad);
      goto code_r0x000141b6d98c;
    case (float *)0x141b6d99a:
      goto code_r0x000141b6d99a;
    case (float *)0x141b6d9a0:
      goto code_r0x000141b6d9a0;
    case (float *)0x141b6d9a6:
      goto code_r0x000141b6d9a9;
    case (float *)0x141b6e70e:
      pfVar26 = unaff_RBX;
code_r0x000141b6e712:
      iVar23 = (int)pfVar28;
      pfVar28 = pfVar26;
      if (iVar23 != 0) goto LAB_141b6e71f;
      goto LAB_141b6e7f3;
    case (float *)0x141b6e73b:
      *(code *)((longlong)UNRECOVERED_JUMPTABLE + 9) =
           (code)((char)*(code *)((longlong)UNRECOVERED_JUMPTABLE + 9) + bVar33);
      pfVar56 = unaff_RBP + 2;
code_r0x000141b6e725:
      cVar22 = (char)pfVar65;
      if (*(short *)(arg1 + 2) != 0x746e || *(ulonglong *)arg1 != 0x696150746e616c50)
      goto LAB_141b6e747;
      *(code *)((longlong)pfVar28 + 1) = (code)0xe;
      goto LAB_141b6e809;
    case (float *)0x141b6e760:
      goto code_r0x000141b6e74c;
    case (float *)0x141b6e786:
      goto code_r0x000141b6e786;
    case (float *)0x141b6e7aa:
      *UNRECOVERED_JUMPTABLE = (float)((int)*UNRECOVERED_JUMPTABLE + uVar68);
      goto LAB_141b6e809;
    case (float *)0x141b6e7da:
      goto code_r0x000141b6e7da;
    case (float *)0x141b6e81e:
      goto code_r0x000141b6e81e;
    case (float *)0x141b6e840:
      goto code_r0x000141b6e840;
    case (float *)0x141b6e85e:
      goto code_r0x000141b6e85e;
    case (float *)0x141b6e873:
      uVar25 = *(ulonglong *)arg1 ^ 0x756f72476c6c6157;
      goto code_r0x000141b6e880;
    case (float *)0x141b6e891:
      *unaff_RBX = (float)((int)*unaff_RBX + (int)fVar77);
      goto code_r0x000141b6e892;
    case (float *)0x141b6e8c0:
      goto code_r0x000141b6e8c0;
    case (float *)0x141b6e902:
      goto code_r0x000141b6e908;
    case (float *)0x141b6e924:
      goto code_r0x000141b6e924;
    case (float *)0x141b6e940:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case (float *)0x141b6e96d:
      goto code_r0x000141b6e96d;
    case (float *)0x141b6e98c:
      goto code_r0x000141b6e98c;
    case (float *)0x141b6e9b5:
      pfVar26 = *(float **)pfVar56;
      puVar52 = (undefined8 *)((longlong)pfVar56 + 8);
      UNRECOVERED_JUMPTABLE = (float *)0x657a6f646c6c7542;
      goto code_r0x000141b6e9c0;
    case (float *)0x141b6e9e5:
      iRam0000000199700fd6 = iRam0000000199700fd6 + (int)fVar77;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case (float *)0x141b6ea08:
      goto code_r0x000141b6ea08;
    case (float *)0x141b6ea2e:
      goto code_r0x000141b6ea2e;
    case (float *)0x141b6ea40:
      goto code_r0x000141b6ea40;
    case (float *)0x141b6ea57:
      goto code_r0x000141b6ea57;
    case (float *)0x141b6ea59:
      puVar53 = (undefined8 *)pfVar56;
      goto code_r0x000141b6ea5a;
    case (float *)0x141b6eaa3:
      goto code_r0x000141b6eaa3;
    case (float *)0x141b6eac1:
      pfVar56 = (float *)(ulonglong)*(uint *)((longlong)UNRECOVERED_JUMPTABLE + 99);
      goto code_r0x000141b6eac0;
    case (float *)0x141b6eada:
      goto code_r0x000141b6eada;
    case (float *)0x141b6eb0f:
      goto code_r0x000141b6eb0f;
    case (float *)0x141b6eb59:
      goto code_r0x000141b6eb59;
    case (float *)0x141b6ed3e:
      pfVar28 = (float *)(ulonglong)((uint)fVar77 >> 0xc);
      if (((uint)fVar77 >> 0xb & 1) != 0) {
        pcVar66 = *(code **)(pfVar28 + 0x123120d2);
        *(undefined **)((longlong)pfVar56 + -8) = &UNK_141b6ed49;
        pfVar28 = (float *)(*pcVar66)();
        return pfVar28;
      }
      pcVar66 = (code *)((longlong)pfVar28 + -0x75);
      *pcVar66 = (code)((byte)*pcVar66 >> 1 | (char)*pcVar66 << 7);
      *pfVar65 = (float)((uint)*pfVar65 | uVar68);
    case (float *)0x141b6ed97:
      goto code_r0x000141b6ed97;
    case (float *)0x141b6edd2:
      goto code_r0x000141b6edd2;
    case (float *)0x141b6edd8:
      pfVar28 = (float *)0x12;
      goto code_r0x000141b6edd2;
    case (float *)0x141b6ee75:
      arg1 = UNRECOVERED_JUMPTABLE;
      goto code_r0x000141b6ee7a;
    case (float *)0x141b6ee9a:
      goto code_r0x000141b6ee9a;
    case (float *)0x141b6eeaf:
      goto code_r0x000141b6eeaf;
    case (float *)0x141b6eef4:
      unaff_RBP[0x10] = (float)((int)unaff_RBP[0x10] << 1);
      goto code_r0x000141b6eef7;
    case (float *)0x141b6ef1b:
      bVar72 = (int)arg1 == 0;
      goto code_r0x000141b6ef1d;
    case (float *)0x141b6ef32:
      goto code_r0x000141b6ef32;
    case (float *)0x141b6ef4a:
      arg1 = (float *)(ulonglong)(uint)unaff_RBP[-4];
      goto code_r0x000141b6ef4d;
    case (float *)0x141b6ef72:
      goto code_r0x000141b6ef72;
    case (float *)0x141b6ef96:
      goto code_r0x000141b6ef96;
    case (float *)0x141b6efb3:
      goto code_r0x000141b6efb3;
    case (float *)0x141b6f629:
      *(code *)((longlong)pfVar28 + -0x77) =
           (code)((char)*(code *)((longlong)pfVar28 + -0x77) + bVar33);
      pcVar66 = (code *)swi(1);
      pfVar28 = (float *)(*pcVar66)();
      return pfVar28;
    case (float *)0x141b6f63c:
      goto code_r0x000141b6f63c;
    case (float *)0x141b6f64f:
      goto code_r0x000141b6f64f;
    case (float *)0x141b6f662:
      goto code_r0x000141b6f662;
    case (float *)0x141b6f675:
      goto code_r0x000141b6f675;
    case (float *)0x141b6f690:
      *(code *)((longlong)pfVar28 + -0x7b) =
           (code)((char)*(code *)((longlong)pfVar28 + -0x7b) + bVar33 + bVar75);
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case (float *)0x141b6f6dc:
      goto code_r0x000141b6f6dc;
    case (float *)0x141b6f6e4:
      goto code_r0x000141b6f6e4;
    case (float *)0x141b6f735:
      goto code_r0x000141b6f73a;
    case (float *)0x141b6f77e:
      goto code_r0x000141b6f77e;
    case (float *)0x141b6f785:
      pcVar66 = (code *)((longlong)pfVar28 + -0x75);
      bVar74 = SCARRY4(*(int *)pcVar66,uVar68);
      *(uint *)pcVar66 = *(int *)pcVar66 + uVar68;
      bVar73 = *(int *)pcVar66 < 0;
      bVar72 = *(int *)pcVar66 == 0;
      goto code_r0x000141b6f788;
    case (float *)0x141b6f7a5:
      goto code_r0x000141b6f78f;
    case (float *)0x141b6f7fb:
      *(int *)((longlong)pfVar56 + 0xb0) = *(int *)((longlong)pfVar56 + 0xb0) - (int)pfVar65;
      goto code_r0x000141b6f802;
    case (float *)0x141b6f845:
      goto code_r0x000141b6f847;
    case (float *)0x141b6f8ac:
      puVar12 = (undefined8 *)pfVar56;
      goto code_r0x000141b6f8aa;
    case (float *)0x141b6f8f3:
      goto code_r0x000141b6f8f3;
    case (float *)0x141b6f8fb:
      goto code_r0x000141b6f8fd;
    case (float *)0x141b6f92a:
      *(longlong *)((longlong)param_2 + 0x36) = *(longlong *)((longlong)param_2 + 0x36) + unaff_R14;
      goto code_r0x000141b6f93f;
    }
code_r0x000141b6d397:
    *(undefined8 *)((longlong)pfVar56 + -8) = 0x141b6d3a8;
    uVar25 = pdb_142db90e0((undefined1 *)((longlong)pfVar56 + 0x20),puVar67,&UNK_143322608);
    goto LAB_141b6d3a8;
  case (code)0x2c:
    puVar16 = auStack_c8;
    goto code_r0x000141b6d19b;
  case (code)0x2d:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (code)0x2f:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (code)0x30:
    pcVar27 = (char *)CONCAT71(uVar31,cRam840f484afe000002);
    *unaff_RDI = *param_2;
    pfVar26 = (float *)CONCAT71(uVar31,cVar22 + *pcVar27);
    *(code *)((longlong)pfVar26 + -0x77) =
         (code)((char)*(code *)((longlong)pfVar26 + -0x77) + bVar32);
    *(code *)((longlong)pfVar26 + -0x73) =
         (code)((char)*(code *)((longlong)pfVar26 + -0x73) - bVar32);
    param_2 = param_2 + 1;
    pfVar65 = unaff_RDI + 1;
code_r0x000141b6d186:
    pfVar26 = (float *)((ulonglong)pfVar26 & 0xffffffffffffff20);
    goto code_r0x000141b6d180;
  case (code)0x31:
    pfVar26 = (float *)(ulonglong)(uVar68 >> (bVar32 & 0x1f));
    in_ST0 = (float10)*(longlong *)((longlong)unaff_RBP + -0x52);
    *unaff_RDI = (float)((int)*unaff_RDI - 1);
    goto code_r0x000141b6d192;
  case (code)0x32:
    goto code_r0x000141b6d169;
  case (code)0x33:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (code)0x34:
    *(byte *)pfVar26 = (char)*(code *)pfVar26 + bVar21;
code_r0x000141b6d1f3:
    *(code *)param_2 = (code)0x10;
    return param_2;
  default:
    if (pfVar26 < UNRECOVERED_JUMPTABLE) goto code_r0x000141b6d0e8;
    goto LAB_141b6d122;
  case (code)0x37:
    goto code_r0x000141b6d1b2;
  case (code)0x39:
    UNRECOVERED_JUMPTABLE =
         (float *)CONCAT62((int6)((ulonglong)UNRECOVERED_JUMPTABLE >> 0x10),
                           CONCAT11((char)((ulonglong)UNRECOVERED_JUMPTABLE >> 8) + bVar32,bVar32));
code_r0x000141b6d169:
    pfVar28 = (float *)CONCAT71(uVar31,bVar21 + (char)*(code *)pfVar26);
    pcVar66 = (code *)((longlong)UNRECOVERED_JUMPTABLE + -0x7d);
    *pcVar66 = (code)((char)*pcVar66 + bVar21 + (char)*(code *)pfVar26);
    bVar71 = (POPCOUNT(*pcVar66) & 1U) == 0;
code_r0x000141b6d170:
    pfVar26 = pfVar28;
    puVar47 = (undefined1 *)puVar46;
    pfVar65 = unaff_RDI;
    if (bVar71) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
code_r0x000141b6d181:
    arg1[10] = SUB84(pfVar26,0);
    puVar36 = puVar47;
    goto code_r0x000141b6d180;
  case (code)0x3d:
    *(byte *)pfVar26 = (char)*(code *)pfVar26 + bVar21;
code_r0x000141b6d213:
    *(code *)param_2 = (code)0x7;
    return param_2;
  case (code)0x41:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (code)0x45:
    uVar25 = (ulonglong)-uVar34;
    pfVar56 = (float *)auStack_c8;
code_r0x000141b6d0f2:
    pfVar65 = (float *)0x100002600;
    pfVar28 = pfVar26;
    do {
      pfVar26 = pfVar28;
      param_4 = (code *)(ulonglong)(byte)((code *)((longlong)param_3 + -1))[(longlong)pfVar26];
      if ((code *)0x22 < param_4) {
LAB_141b6d16d:
        if (((code *)((longlong)param_3 + -1))[(longlong)pfVar26] == (code)0x7b) {
          UNK_143398110 = UNK_143398110 + -1;
          puVar36 = (undefined1 *)pfVar56;
          if (UNK_143398110 != '\0') goto code_r0x000141b6d180;
          *(undefined8 *)((longlong)pfVar56 + 0x20) = 0x18;
        }
        else {
          *(undefined8 *)((longlong)pfVar56 + 0x20) = 10;
        }
        goto LAB_141b6d12b;
      }
      if ((0x100002600U >> ((ulonglong)param_4 & 0x3f) & 1) == 0) {
        if (param_4 != (code *)0x22) goto LAB_141b6d16d;
        *(undefined8 *)((longlong)pfVar56 + -8) = 0x141b6d150;
        in_XMM0._0_8_ = pdb_1416579b0((undefined1 *)((longlong)pfVar56 + 0x20));
        in_XMM0._8_8_ = extraout_XMM0_Qb;
        UNRECOVERED_JUMPTABLE = (float *)&UNK_143398148;
        uVar25 = (ulonglong)
                 *(int *)(&UNK_143398148 + (ulonglong)*(byte *)((longlong)pfVar56 + 0x20) * 4);
        bVar75 = 0xfffffffebcc67eb7 < uVar25;
        bVar74 = SCARRY8(uVar25,0x143398148);
        pfVar28 = (float *)(&UNK_143398148 + uVar25);
        bVar73 = (longlong)pfVar28 < 0;
        bVar72 = pfVar28 == (float *)0x0;
        bVar71 = (POPCOUNT((ulonglong)pfVar28 & 0xff) & 1U) == 0;
        unaff_RBP = pfVar63;
        goto code_r0x000141b6d163;
      }
      pfVar28 = (float *)((longlong)pfVar26 + 1);
      puVar45 = (undefined1 *)pfVar56;
      _UNK_1433980f0 = pfVar26;
    } while ((code *)(uVar25 + (longlong)pfVar26) != (code *)0x0);
LAB_141b6d122:
    *(undefined8 *)(puVar45 + 0x20) = 5;
    pfVar56 = (float *)puVar45;
LAB_141b6d12b:
    *(undefined8 *)((longlong)pfVar56 + -8) = 0x141b6d13b;
    uVar25 = pdb_142d84ef0(&UNK_1433980c8,(undefined1 *)((longlong)pfVar56 + 0x20));
    goto LAB_141b6d3a8;
  case (code)0x46:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (code)0x47:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (code)0x48:
    *(byte *)pfVar26 = (char)*(code *)pfVar26 + bVar21;
    pfVar56 = (float *)auStack_c8;
    goto LAB_141b6d4ab;
  case (code)0x49:
    (&UNK_143398051)[uVar25] = (&UNK_143398051)[uVar25] & bVar32;
    puVar1 = (uint *)(&UNK_143398051 + uVar25);
    *puVar1 = *puVar1 >> 1 | (uint)((*puVar1 & 1) != 0) << 0x1f;
    return pfVar26;
  case (code)0x4a:
  case (code)0x4b:
  case (code)0x4c:
    puVar67 = (undefined *)0x43323610;
    pfVar56 = (float *)auStack_c8;
    goto code_r0x000141b6d397;
  case (code)0x4d:
    pcVar27 = (char *)CONCAT71(uVar31,bVar21 | (byte)*(code *)pfVar26);
    *pcVar27 = *pcVar27 + (bVar21 | (byte)*(code *)pfVar26);
    pfVar56 = (float *)auStack_c8;
    goto LAB_141b6d12b;
  case (code)0x4e:
    *(code *)((longlong)unaff_RDI + 0x35) =
         (code)((byte)*(code *)((longlong)unaff_RDI + 0x35) & 0x80);
    pfVar56 = (float *)auStack_c8;
    goto code_r0x000141b6d580;
  case (code)0x4f:
  case (code)0x50:
  case (code)0x54:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (code)0x51:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (code)0x52:
  case (code)0x53:
    pfVar56 = (float *)auStack_c8;
    goto code_r0x000141b6d765;
  case (code)0x55:
    *UNRECOVERED_JUMPTABLE = (float)((int)*UNRECOVERED_JUMPTABLE + (int)param_2);
    *(undefined1 *)(uVar25 + 0x133c2c8ce) = *(undefined1 *)(uVar25 + 0x133c2c8ce);
    return pfVar26;
  case (code)0x56:
    puVar48 = &stack0xffffffffffffff30;
    goto code_r0x000141b6d5a3;
  case (code)0x57:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (code)0x58:
    *(byte *)pfVar26 = (char)*(code *)pfVar26 + bVar21;
    goto code_r0x000141b6d5a3;
  case (code)0x59:
    *(byte *)(uVar25 + 0x12e4008c9) = *(byte *)(uVar25 + 0x12e4008c9) | bVar69;
    *UNRECOVERED_JUMPTABLE = (float)((int)*UNRECOVERED_JUMPTABLE + (int)param_3);
    goto code_r0x000141b6d5da;
  case (code)0x5a:
    pfVar28 = (float *)(ulonglong)(uVar68 + uVar34);
    pfVar56 = (float *)auStack_c8;
    goto code_r0x000141b6d6af;
  case (code)0x5b:
    *(byte *)pfVar26 = (char)*(code *)pfVar26 + bVar21;
    pfVar56 = (float *)auStack_c8;
    goto code_r0x000141b6d6c9;
  case (code)0x5c:
    *(code *)((longlong)UNRECOVERED_JUMPTABLE + -0x7d) =
         (code)((char)*(code *)((longlong)UNRECOVERED_JUMPTABLE + -0x7d) + bVar32);
    arg1 = (float *)CONCAT62(0x14339,CONCAT11((byte)*(code *)((longlong)unaff_RBP + 0x2a) & 0x80,200
                                             ));
    pfVar56 = (float *)auStack_c8;
code_r0x000141b6d695:
    UNRECOVERED_JUMPTABLE = (float *)((longlong)pfVar56 + 0x28);
    goto code_r0x000141b6d69a;
  case (code)0x5d:
    return pfVar26;
  case (code)0x5e:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (code)0x5f:
    (&UNK_1433980c7)[uVar25] = ((&UNK_1433980c7)[uVar25] - bVar32) - bVar71;
    pfVar56 = (float *)auStack_c8;
    goto code_r0x000141b6d91e;
  case (code)0x60:
    pcVar66 = (code *)swi(3);
    pfVar28 = (float *)(*pcVar66)();
    return pfVar28;
  case (code)0x61:
    puVar19 = (undefined1 *)(ulonglong)((int)auStack_c8 - 0x38);
    param_2 = UNRECOVERED_JUMPTABLE;
  case (code)0x65:
    pfVar56 = (float *)puVar19;
    if (_UNK_1433980f0 < _UNK_1433980e8) {
      param_3 = (float *)CONCAT44(_UNK_1433980e4,_UNK_1433980e0);
      pfVar26 = (float *)((longlong)_UNK_1433980f0 + 1);
      UNRECOVERED_JUMPTABLE = (float *)-(longlong)_UNK_1433980e8;
      goto code_r0x000141b6d922;
    }
    goto LAB_141b6d952;
  case (code)0x62:
    pcVar66 = (code *)swi(3);
    pfVar28 = (float *)(*pcVar66)();
    return pfVar28;
  case (code)0x63:
    UNRECOVERED_JUMPTABLE = (float *)(ulonglong)-uVar34;
    pfVar56 = (float *)auStack_c8;
    goto code_r0x000141b6d922;
  case (code)0x64:
    *(byte *)pfVar26 = (char)*(code *)pfVar26 + bVar21;
    pfVar56 = (float *)auStack_c8;
    goto code_r0x000141b6d928;
  case (code)0x66:
  case (code)0x67:
  case (code)0x68:
  case (code)0x69:
  case (code)0x6a:
  case (code)0x6b:
  case (code)0x6c:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (code)0x6d:
    pfVar56 = (float *)auStack_c0;
    if ((POPCOUNT((uVar68 | 0xcc158d48) & 0xff) & 1U) != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    goto code_r0x000141b6d8ac;
  case (code)0x6e:
    if (_UNK_1433980c8 != uVar34) {
      if (bVar40 != 0) {
        uVar68 = pub_142e32750(&UNK_1433980c8,&UNK_143397ad3);
        UNRECOVERED_JUMPTABLE = (float *)(ulonglong)uVar68;
        goto code_r0x000141b6e6e0;
      }
      goto LAB_141b6e6ec;
    }
    (&UNK_1433980c9)[uVar25] = 10;
    goto LAB_141b6e809;
  case (code)0x6f:
  case (code)0x70:
  case (code)0x72:
    goto code_r0x000141b6e75a;
  case (code)0x71:
    out(*(code *)param_2,0x80c8);
    if (bVar72) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (code)0x73:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (code)0x74:
    return pfVar26;
  case (code)0x75:
code_r0x000141b6e6e0:
    puVar1 = (uint *)(&UNK_143398051 + uVar25);
    *puVar1 = *puVar1 >> 0x18 | *puVar1 << 8;
    if ((int)UNRECOVERED_JUMPTABLE == 0) {
      (&UNK_1433980c9)[uVar25] = 0xc;
      goto LAB_141b6e809;
    }
LAB_141b6e6ec:
    arg1 = (float *)&UNK_1433980c8;
    pfVar56 = (float *)auStack_c8;
    param_2 = param_3;
    if ((char)unaff_RDI != '\0') {
      pfVar28 = (float *)pub_142e32750(&UNK_1433980c8,&UNK_143397ad7);
      arg1 = (float *)&UNK_1433980c8;
      pfVar56 = (float *)auStack_c8;
      goto code_r0x000141b6e712;
    }
LAB_141b6e71f:
    cVar22 = (char)pfVar65;
    pfVar28 = pfVar26;
    param_3 = param_2;
    if (param_2 == (float *)0xa) goto code_r0x000141b6e725;
LAB_141b6e747:
    UNRECOVERED_JUMPTABLE = arg1;
    if (cVar22 != '\0') goto code_r0x000141b6e74c;
    goto LAB_141b6e77a;
  case (code)0x76:
    *UNRECOVERED_JUMPTABLE = (float)((int)*UNRECOVERED_JUMPTABLE + 0x433980c8);
    goto LAB_141b6e809;
  case (code)0x77:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (code)0x78:
    goto code_r0x000141b6e811;
  case (code)0x79:
    goto LAB_141b6e7f3;
  case (code)0x7a:
    goto code_r0x000141b6e840;
  case (code)0x7b:
    goto code_r0x000141b6e7de;
  case (code)0x7c:
    goto code_r0x000141b6e882;
  case (code)0x7d:
  case (code)0x7f:
  case (code)0x80:
  case (code)0x86:
  case (code)0x88:
  case (code)0x89:
  case (code)0x8a:
  case (code)0x8b:
  case (code)0x8c:
  case (code)0x8d:
    uVar68 = (uint)param_4 ^ 0x6e65;
    pfVar56 = (float *)auStack_c8;
    goto code_r0x000141b6e9de;
  case (code)0x7e:
    goto code_r0x000141b6e8ed;
  case (code)0x81:
    bVar72 = bVar32 == 0 && *(code *)((longlong)UNRECOVERED_JUMPTABLE + -0x47) == (code)0x0;
    out(*param_2,0x80c8);
    cVar20 = (code)in(0x80c8);
    *(code *)unaff_RDI = cVar20;
    pfVar56 = (float *)auStack_c8;
    goto code_r0x000141b6e8aa;
  case (code)0x82:
    pcVar66 = (code *)((longlong)unaff_RBP + (longlong)UNRECOVERED_JUMPTABLE * 4 + 0xd);
    *pcVar66 = (code)((char)*pcVar66 + bVar32);
    goto code_r0x000141b6e969;
  case (code)0x83:
    goto code_r0x000141b6e988;
  case (code)0x84:
code_r0x000141b6e8c0:
    *(float **)((longlong)puVar50 + -8) = unaff_RBX;
    if (bVar72) {
code_r0x000141b6e924:
      return pfVar28;
    }
    goto code_r0x000141b6e8ce;
  case (code)0x85:
    goto code_r0x000141b6e90c;
  case (code)0x87:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (code)0x8e:
    goto code_r0x000141b6e9ae;
  case (code)0x8f:
    goto code_r0x000141b6e9c0;
  case (code)0x90:
code_r0x000141b6ea5a:
    LOCK();
    *(int *)((longlong)param_2 + 1) = (int)puVar53;
    UNLOCK();
    *(char *)pfVar28 = (char)*(code *)pfVar28 + (char)pfVar28;
    goto code_r0x000141b6ea61;
  case (code)0x91:
    *(byte *)pfVar26 = (char)*(code *)pfVar26 + bVar21;
    pfVar56 = (float *)auStack_c8;
    goto code_r0x000141b6ea25;
  case (code)0x92:
    *(int *)(uVar25 + 0x107bcc8d0) = *(int *)(uVar25 + 0x107bcc8d0) + uVar34;
    *(code *)((longlong)param_2 + -0x3d) =
         (code)((byte)*(code *)((longlong)param_2 + -0x3d) & bVar40);
    pcVar66 = (code *)swi(3);
    pfVar28 = (float *)(*pcVar66)();
    return pfVar28;
  case (code)0x93:
    pcVar66 = (code *)swi(1);
    pfVar28 = (float *)(*pcVar66)();
    return pfVar28;
  case (code)0x94:
    *(byte *)pfVar26 = (char)*(code *)pfVar26 + bVar21;
    return pfVar26;
  case (code)0x95:
    goto code_r0x000141b6ead9;
  case (code)0x96:
  case (code)0x97:
  case (code)0x98:
  case (code)0x9c:
    pbVar4 = &UNK_143398053 + uVar25;
    *pbVar4 = *pbVar4 >> 1 | *pbVar4 << 7;
    *unaff_RDI = (float)((uint)*unaff_RDI | uVar34);
    UNRECOVERED_JUMPTABLE = pfVar26;
    goto pdb_140f679a0;
  case (code)0x99:
    uVar25 = (ulonglong)pfVar26 & 0xffffffff;
    pfVar56 = (float *)auStack_c8;
    goto code_r0x000141b6ecc0;
  case (code)0x9a:
    pcVar66 = (code *)((longlong)pfVar26 + (longlong)UNRECOVERED_JUMPTABLE * 2);
    *(uint *)pcVar66 = *(uint *)pcVar66 << 9 | *(uint *)pcVar66 >> 0x17;
    puStack_a8 = &UNK_143397f70;
    pfVar28 = (float *)pdb_140f66090((ulonglong)pfVar26 & 0xffffffffffffff40,&UNK_143397aa0,7,
                                     auStack_88);
    return pfVar28;
  case (code)0x9b:
    UNRECOVERED_JUMPTABLE = pfVar26;
    if (uVar34 == 0 && uVar68 == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    goto pdb_140f679a0;
  case (code)0x9d:
    goto code_r0x000141b6ee1a;
  case (code)0x9e:
    goto code_r0x000141b6eef2;
  case (code)0x9f:
  case (code)0xa2:
  case (code)0xa4:
  case (code)0xa5:
  case (code)0xa6:
  case (code)0xa7:
  case (code)0xa8:
  case (code)0xa9:
  case (code)0xaa:
    goto code_r0x000141b6eeca;
  case (code)0xa0:
    arg1 = UNRECOVERED_JUMPTABLE;
    goto code_r0x000141b6ee7a;
  case (code)0xa1:
    goto code_r0x000141b6ef16;
  case (code)0xa3:
    pfVar56 = (float *)auStack_c8;
    goto code_r0x000141b6ef37;
  case (code)0xab:
    goto pdb_140f679a0;
  case (code)0xac:
  case (code)0xad:
    goto code_r0x000141b6edf5;
  case (code)0xae:
    puVar1 = (uint *)(&UNK_143398055 + uVar25);
    *puVar1 = *puVar1 >> 1 | (uint)((*puVar1 & 1) != 0) << 0x1f;
pdb_140f679a0:
                    /* WARNING: Could not recover jumptable at 0x000140f679ae. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pfVar28 = (float *)(**(code **)(*(ulonglong *)(UNRECOVERED_JUMPTABLE + 2) + 0x18))
                                 (*(ulonglong *)UNRECOVERED_JUMPTABLE);
    return pfVar28;
  case (code)0xaf:
  case (code)0xb0:
  case (code)0xb1:
    goto code_r0x000141b6ee2f;
  case (code)0xb2:
    *(char *)(longlong)(int)(uVar34 - 1) = (*(char *)(longlong)(int)(uVar34 - 1) - bVar32) - bVar71;
    pcVar66 = (code *)swi(3);
    pfVar28 = (float *)(*pcVar66)();
    return pfVar28;
  case (code)0xb3:
    pfVar56 = (float *)auStack_c8;
    goto code_r0x000141b6f5f0;
  case (code)0xb4:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (code)0xb5:
    goto code_r0x000141b6f5e2;
  case (code)0xb6:
    pcVar27 = &UNK_143398053 + uVar25;
    cVar22 = *pcVar27;
    *pcVar27 = *pcVar27 + bVar32;
    if (*pcVar27 == '\0' || SCARRY1(cVar22,bVar32) != *pcVar27 < '\0') {
      halt_baddata();
    }
    if (*(float **)param_2 == unaff_RDI) {
      puStack_a8 = (undefined *)0x1;
      pfVar56 = (float *)auStack_c8;
      goto code_r0x000141b6f7cd;
    }
    goto code_r0x000141b6f5ca;
  case (code)0xb7:
    goto code_r0x000141b6f610;
  case (code)0xb8:
    goto code_r0x000141b6f6b5;
  case (code)0xb9:
    pfVar56 = (float *)auStack_c8;
    unaff_XMM10_Da = unaff_XMM8_Dc;
    unaff_XMM10_Db = unaff_XMM8_Dd;
    goto code_r0x000141b6f82f;
  case (code)0xba:
    goto code_r0x000141b6f77b;
  case (code)0xbb:
    goto code_r0x000141b6f7c5;
  case (code)0xbc:
    goto code_r0x000141b6f725;
  case (code)0xbd:
code_r0x000141b6f8aa:
    pfVar56 = (float *)puVar12;
    fVar76 = unaff_XMM12_Da * unaff_XMM8_Da;
    in_XMM1_Ba = SUB41(fVar76,0);
    in_XMM1_Bb = (char)((uint)fVar76 >> 8);
    in_XMM1_Bc = (char)((uint)fVar76 >> 0x10);
    in_XMM1_Bd = (char)((uint)fVar76 >> 0x18);
    goto code_r0x000141b6f8b3;
  case (code)0xbe:
    *param_4 = (code)((byte)*param_4 & (byte)param_3);
    pfVar56 = (float *)auStack_c8;
    goto code_r0x000141b6f65f;
  case (code)0xbf:
    pfVar56 = (float *)auStack_c8;
    auVar78 = in_XMM0;
    goto code_r0x000141b6f87d;
  case (code)0xc0:
    goto code_r0x000141b6f700;
  case (code)0xc1:
    *(char *)(longlong)(int)(uVar34 - 1) = (*(char *)(longlong)(int)(uVar34 - 1) - bVar32) - bVar71;
    pcVar66 = (code *)swi(3);
    pfVar28 = (float *)(*pcVar66)();
    return pfVar28;
  case (code)0xc2:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (code)0xc3:
    pfVar56 = (float *)auStack_c8;
    goto code_r0x000141b6f875;
  }
  if (lVar42 == 0) {
    return (float *)0x0;
  }
code_r0x000141b6ca64:
  apuStack_60[0] = &UNK_142db8fda;
  pdb_14007ee60();
  apuStack_60[0] = &UNK_142db8fe9;
  pfVar28 = (float *)pub_1406abab0(0x28,8);
  if (pfVar28 == (float *)0x0) {
                    /* WARNING: Subroutine does not return */
    apuStack_60[0] = &UNK_142db901a;
    pdb_142dc7e11(8,0x28);
  }
  pfVar28[8] = 0.0;
  pfVar28[9] = 0.0;
  *(undefined8 *)(pfVar28 + 4) = unaff_RSI;
  pfVar28[6] = 0.0;
  pfVar28[7] = 0.0;
  pfVar28[0] = 1.4013e-45;
  pfVar28[1] = 0.0;
  *(longlong *)(pfVar28 + 2) = lVar42;
  return pfVar28;
code_r0x000141b6d70b:
  *pfVar28 = (float)((int)*pfVar28 + uVar68);
  *(code *)((longlong)pfVar28 + -0x75) = *(code *)((longlong)pfVar28 + -0x75);
code_r0x000141b6d711:
  uVar25 = *(ulonglong *)((longlong)pfVar56 + 0x30);
  goto LAB_141b6d8b6;
code_r0x000141b6f87d:
  fVar76 = (float)CONCAT13(in_XMM1_Bd,CONCAT12(in_XMM1_Bc,CONCAT11(in_XMM1_Bb,in_XMM1_Ba))) *
           unaff_XMM8_Da;
  uVar83 = SUB41(fVar76,0);
  uVar85 = (undefined1)((uint)fVar76 >> 8);
  uVar87 = (undefined1)((uint)fVar76 >> 0x10);
  uVar89 = (undefined1)((uint)fVar76 >> 0x18);
  goto code_r0x000141b6f8e9;
code_r0x000141b6d1e9:
  uVar25 = *(ulonglong *)((longlong)pfVar56 + 0x28);
  goto LAB_141b6d3a8;
code_r0x000141b6da63:
  cVar20 = SUB81(pfVar28,0);
code_r0x000141b6daa4:
  *(code *)param_2 = cVar20;
  return param_2;
code_r0x000141b6fa13:
code_r0x000141b6fa22:
  *(undefined **)((longlong)pfVar56 + -8) = &UNK_141b6fa3a;
  fVar76 = (float)pub_142e32980();
code_r0x000141b6fbe6:
  *(undefined **)((longlong)pfVar56 + -8) = &UNK_141b6fbef;
  fVar77 = (float)pub_142e32980();
code_r0x000141b6fbef:
  *param_2 = fVar76;
  param_2[1] = unaff_XMM6_Da;
  param_2[2] = fVar77;
  return param_2;
}

