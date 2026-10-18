// VA 0x141b2f690, PDB extent 2426 bytes
// country_core::resources::history::roof_edit::_::impl$0::serialize<ref_mut$<serde_json::ser::Serializer<ref_mut$<alloc::vec::Vec<u8,alloc::alloc::Global> >,serde_json::ser::CompactFormatter> > >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/history/roof_edit.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x000141b3132e) overlaps instruction at (ram,0x000141b3132b)
    */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::resources::history::roof_edit::_::impl$0::serialize<ref_mut$<serde_json::ser::Serializer<ref_mut$<alloc::vec::Vec<u8,alloc::alloc::Global>
   >,serde_json::ser::CompactFormatter> > >
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/history/roof_edit.rs
   Extent: 2426 */

byte * pdb_141b2f690(byte *param_1,ulonglong *param_2,ulonglong param_3)

{
  int iVar1;
  longlong *plVar2;
  undefined8 uVar3;
  undefined1 auVar4 [16];
  byte bVar5;
  undefined8 uVar6;
  byte *pbVar7;
  undefined7 uVar10;
  char *pcVar8;
  byte *pbVar9;
  uint uVar11;
  longlong lVar12;
  undefined *puVar13;
  byte **ppbVar14;
  longlong lVar15;
  longlong unaff_RBP;
  longlong lVar16;
  code *UNRECOVERED_JUMPTABLE;
  ulonglong uVar17;
  longlong unaff_GS_OFFSET;
  bool bVar18;
  char in_XMM0_Ba;
  char in_XMM0_Bb;
  char in_XMM0_Bc;
  char in_XMM0_Bd;
  char in_XMM0_Be;
  undefined1 extraout_XMM0_Be;
  undefined1 extraout_XMM0_Be_00;
  undefined1 extraout_XMM0_Be_01;
  undefined1 extraout_XMM0_Be_02;
  undefined1 extraout_XMM0_Be_03;
  undefined1 uVar19;
  char in_XMM0_Bf;
  undefined1 extraout_XMM0_Bf;
  undefined1 extraout_XMM0_Bf_00;
  undefined1 extraout_XMM0_Bf_01;
  undefined1 extraout_XMM0_Bf_02;
  undefined1 extraout_XMM0_Bf_03;
  undefined1 uVar20;
  char in_XMM0_Bg;
  undefined1 extraout_XMM0_Bg;
  undefined1 extraout_XMM0_Bg_00;
  undefined1 extraout_XMM0_Bg_01;
  undefined1 extraout_XMM0_Bg_02;
  undefined1 extraout_XMM0_Bg_03;
  undefined1 uVar21;
  char in_XMM0_Bh;
  undefined1 extraout_XMM0_Bh;
  undefined1 extraout_XMM0_Bh_00;
  undefined1 extraout_XMM0_Bh_01;
  undefined1 extraout_XMM0_Bh_02;
  undefined1 extraout_XMM0_Bh_03;
  undefined1 uVar22;
  char in_XMM0_Bi;
  undefined1 extraout_XMM0_Bi;
  undefined1 extraout_XMM0_Bi_00;
  undefined1 extraout_XMM0_Bi_01;
  undefined1 extraout_XMM0_Bi_02;
  undefined1 extraout_XMM0_Bi_03;
  undefined1 uVar23;
  char in_XMM0_Bj;
  undefined1 extraout_XMM0_Bj;
  undefined1 extraout_XMM0_Bj_00;
  undefined1 extraout_XMM0_Bj_01;
  undefined1 extraout_XMM0_Bj_02;
  undefined1 extraout_XMM0_Bj_03;
  undefined1 uVar24;
  char in_XMM0_Bk;
  undefined1 extraout_XMM0_Bk;
  undefined1 extraout_XMM0_Bk_00;
  undefined1 extraout_XMM0_Bk_01;
  undefined1 extraout_XMM0_Bk_02;
  undefined1 extraout_XMM0_Bk_03;
  undefined1 uVar25;
  char in_XMM0_Bl;
  undefined1 extraout_XMM0_Bl;
  undefined1 extraout_XMM0_Bl_00;
  undefined1 extraout_XMM0_Bl_01;
  undefined1 extraout_XMM0_Bl_02;
  undefined1 extraout_XMM0_Bl_03;
  undefined1 uVar26;
  char in_XMM0_Bm;
  undefined1 extraout_XMM0_Bm;
  undefined1 extraout_XMM0_Bm_00;
  undefined1 extraout_XMM0_Bm_01;
  undefined1 extraout_XMM0_Bm_02;
  undefined1 extraout_XMM0_Bm_03;
  undefined1 uVar27;
  char in_XMM0_Bn;
  undefined1 extraout_XMM0_Bn;
  undefined1 extraout_XMM0_Bn_00;
  undefined1 extraout_XMM0_Bn_01;
  undefined1 extraout_XMM0_Bn_02;
  undefined1 extraout_XMM0_Bn_03;
  undefined1 uVar28;
  char in_XMM0_Bo;
  undefined1 extraout_XMM0_Bo;
  undefined1 extraout_XMM0_Bo_00;
  undefined1 extraout_XMM0_Bo_01;
  undefined1 extraout_XMM0_Bo_02;
  undefined1 extraout_XMM0_Bo_03;
  undefined1 uVar29;
  char in_XMM0_Bp;
  undefined1 extraout_XMM0_Bp;
  undefined1 extraout_XMM0_Bp_00;
  undefined1 extraout_XMM0_Bp_01;
  undefined1 extraout_XMM0_Bp_02;
  undefined1 extraout_XMM0_Bp_03;
  undefined1 uVar30;
  undefined1 auVar31 [16];
  ulonglong auStack_e8 [3];
  undefined8 uStack_d0;
  ulonglong uStack_c8;
  undefined8 uStack_c0;
  longlong lStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  byte *in_stack_ffffffffffffff60;
  longlong lStack_90;
  byte *pbStack_88;
  ulonglong *puStack_80;
  undefined8 uStack_78;
  byte *pbStack_60;
  ulonglong *puStack_58;
  byte *pbStack_50;
  ulonglong *puStack_48;
  byte *pbStack_40;
  ulonglong *puStack_38;
  byte *pbStack_30;
  ulonglong *puStack_28;
  
  puVar13 = &UNK_143393b08;
  iVar1 = *(int *)(&UNK_143393b08 + (ulonglong)*param_1 * 4);
  pbVar7 = (byte *)(&UNK_143393b08 + iVar1);
  bVar18 = pbVar7 == (byte *)0x0;
  bVar5 = (byte)pbVar7;
  uVar10 = (undefined7)((ulonglong)pbVar7 >> 8);
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*param_1) {
  case 0:
    plVar2 = (longlong *)*param_2;
    lVar15 = plVar2[2];
    if (*plVar2 == lVar15) {
      uStack_78 = 1;
      pdb_142d7f1b0(plVar2,lVar15,1,1);
      lVar15 = plVar2[2];
    }
    *(undefined1 *)(plVar2[1] + lVar15) = 0x7b;
    plVar2[2] = lVar15 + 1;
    pbVar7 = (byte *)pdb_14054e5c0(param_2,param_2 + 1,&UNK_143393400,10);
    uVar19 = extraout_XMM0_Be;
    uVar20 = extraout_XMM0_Bf;
    uVar21 = extraout_XMM0_Bg;
    uVar22 = extraout_XMM0_Bh;
    uVar23 = extraout_XMM0_Bi;
    uVar24 = extraout_XMM0_Bj;
    uVar25 = extraout_XMM0_Bk;
    uVar26 = extraout_XMM0_Bl;
    uVar27 = extraout_XMM0_Bm;
    uVar28 = extraout_XMM0_Bn;
    uVar29 = extraout_XMM0_Bo;
    uVar30 = extraout_XMM0_Bp;
    if (pbVar7 == (byte *)0x0) {
      plVar2 = (longlong *)*param_2;
      lVar15 = plVar2[2];
      if (*plVar2 == lVar15) {
        uStack_78 = 1;
        pdb_142d7f1b0(plVar2,lVar15,1,1);
        lVar15 = plVar2[2];
      }
      *(undefined1 *)(plVar2[1] + lVar15) = 0x3a;
      plVar2[2] = lVar15 + 1;
      plVar2 = (longlong *)*param_2;
      lVar15 = plVar2[2];
      if (*plVar2 == lVar15) {
        uStack_78 = 1;
        pdb_142d7f1b0(plVar2,lVar15,1,1);
        lVar15 = plVar2[2];
      }
      *(undefined1 *)(plVar2[1] + lVar15) = 0x7b;
      plVar2[2] = lVar15 + 1;
      pbStack_60 = (byte *)CONCAT62(pbStack_60._2_6_,0x100);
      puStack_58 = param_2;
      pbVar7 = (byte *)pdb_141b7a020(&pbStack_60,&UNK_14339340a,10,param_1 + 0x30);
      if (pbVar7 != (byte *)0x0) {
        return pbVar7;
      }
      if ((char)pbStack_60 != '\x01') {
        pbVar7 = (byte *)pdb_141b7fa10(&pbStack_60,&UNK_143393414,6,param_1 + 0x14);
        if (pbVar7 != (byte *)0x0) {
          return pbVar7;
        }
        if ((char)pbStack_60 != '\x01') {
          pbVar7 = (byte *)pdb_141b7dc80(&pbStack_60,&UNK_14339341a,8,param_1 + 4);
          if (pbVar7 != (byte *)0x0) {
            return pbVar7;
          }
          pbVar7 = (byte *)pdb_141b34940(&pbStack_60,param_1 + 8);
          if (pbVar7 != (byte *)0x0) {
            return pbVar7;
          }
          ppbVar14 = &pbStack_60;
          goto code_r0x000141b2fd69;
        }
      }
code_r0x000141b2fd8b:
                    /* WARNING: Subroutine does not return */
      pdb_142dc83b0(&UNK_1433932e0,0x28,&UNK_143393ad8);
    }
    break;
  case 1:
    plVar2 = (longlong *)*param_2;
    lVar15 = plVar2[2];
    if (*plVar2 == lVar15) {
      uStack_78 = 1;
      pdb_142d7f1b0(plVar2,lVar15,1,1);
      lVar15 = plVar2[2];
    }
    *(undefined1 *)(plVar2[1] + lVar15) = 0x7b;
    plVar2[2] = lVar15 + 1;
    pbVar7 = (byte *)pdb_14054e5c0(param_2,param_2 + 1,&UNK_143393431,10);
    uVar19 = extraout_XMM0_Be_03;
    uVar20 = extraout_XMM0_Bf_03;
    uVar21 = extraout_XMM0_Bg_03;
    uVar22 = extraout_XMM0_Bh_03;
    uVar23 = extraout_XMM0_Bi_03;
    uVar24 = extraout_XMM0_Bj_03;
    uVar25 = extraout_XMM0_Bk_03;
    uVar26 = extraout_XMM0_Bl_03;
    uVar27 = extraout_XMM0_Bm_03;
    uVar28 = extraout_XMM0_Bn_03;
    uVar29 = extraout_XMM0_Bo_03;
    uVar30 = extraout_XMM0_Bp_03;
    if (pbVar7 == (byte *)0x0) {
      plVar2 = (longlong *)*param_2;
      lVar15 = plVar2[2];
      if (*plVar2 == lVar15) {
        uStack_78 = 1;
        pdb_142d7f1b0(plVar2,lVar15,1,1);
        lVar15 = plVar2[2];
      }
      *(undefined1 *)(plVar2[1] + lVar15) = 0x3a;
      plVar2[2] = lVar15 + 1;
      plVar2 = (longlong *)*param_2;
      lVar15 = plVar2[2];
      if (*plVar2 == lVar15) {
        uStack_78 = 1;
        pdb_142d7f1b0(plVar2,lVar15,1,1);
        lVar15 = plVar2[2];
      }
      *(undefined1 *)(plVar2[1] + lVar15) = 0x7b;
      plVar2[2] = lVar15 + 1;
      pbStack_50._0_2_ = 0x100;
      puStack_48 = param_2;
      pbVar7 = (byte *)pdb_141b7a020(&pbStack_50,&UNK_14339340a,10,param_1 + 0x30);
      if (pbVar7 != (byte *)0x0) {
        return pbVar7;
      }
      if ((char)pbStack_50 != '\x01') {
        pbVar7 = (byte *)pdb_141b7fa10(&pbStack_50,&UNK_143393414,6,param_1 + 0x14);
        if (pbVar7 != (byte *)0x0) {
          return pbVar7;
        }
        if ((char)pbStack_50 != '\x01') {
          pbVar7 = (byte *)pdb_141b7dc80(&pbStack_50,&UNK_14339341a,8,param_1 + 4);
          if (pbVar7 != (byte *)0x0) {
            return pbVar7;
          }
          pbVar7 = (byte *)pdb_141b34940(&pbStack_50,param_1 + 8);
          if (pbVar7 != (byte *)0x0) {
            return pbVar7;
          }
          ppbVar14 = &pbStack_50;
          goto code_r0x000141b2fd69;
        }
      }
      goto code_r0x000141b2fd8b;
    }
    break;
  case 2:
    plVar2 = (longlong *)*param_2;
    lVar15 = plVar2[2];
    if (*plVar2 == lVar15) {
      uStack_78 = 1;
      pdb_142d7f1b0(plVar2,lVar15,1,1);
      lVar15 = plVar2[2];
    }
    *(undefined1 *)(plVar2[1] + lVar15) = 0x7b;
    plVar2[2] = lVar15 + 1;
    pbVar7 = (byte *)pdb_14054e5c0(param_2,param_2 + 1,&UNK_14339343b,10);
    uVar19 = extraout_XMM0_Be_01;
    uVar20 = extraout_XMM0_Bf_01;
    uVar21 = extraout_XMM0_Bg_01;
    uVar22 = extraout_XMM0_Bh_01;
    uVar23 = extraout_XMM0_Bi_01;
    uVar24 = extraout_XMM0_Bj_01;
    uVar25 = extraout_XMM0_Bk_01;
    uVar26 = extraout_XMM0_Bl_01;
    uVar27 = extraout_XMM0_Bm_01;
    uVar28 = extraout_XMM0_Bn_01;
    uVar29 = extraout_XMM0_Bo_01;
    uVar30 = extraout_XMM0_Bp_01;
    if (pbVar7 == (byte *)0x0) {
      plVar2 = (longlong *)*param_2;
      lVar15 = plVar2[2];
      if (*plVar2 == lVar15) {
        uStack_78 = 1;
        pdb_142d7f1b0(plVar2,lVar15,1,1);
        lVar15 = plVar2[2];
      }
      *(undefined1 *)(plVar2[1] + lVar15) = 0x3a;
      plVar2[2] = lVar15 + 1;
      plVar2 = (longlong *)*param_2;
      lVar15 = plVar2[2];
      if (*plVar2 == lVar15) {
        uStack_78 = 1;
        pdb_142d7f1b0(plVar2,lVar15,1,1);
        lVar15 = plVar2[2];
      }
      *(undefined1 *)(plVar2[1] + lVar15) = 0x7b;
      plVar2[2] = lVar15 + 1;
      pbVar7 = (byte *)pdb_141b7a020(&stack0xffffffffffffff90,&UNK_14339340a,10,param_1 + 0x28);
      if (pbVar7 != (byte *)0x0) {
        return pbVar7;
      }
      pbVar7 = (byte *)pdb_141b82660(&stack0xffffffffffffff90,&UNK_143393445,0xb,param_1 + 4);
      if (pbVar7 != (byte *)0x0) {
        return pbVar7;
      }
      pbVar7 = (byte *)pdb_141b82660(&stack0xffffffffffffff90,&UNK_143393450,0xc,param_1 + 8);
      if (pbVar7 != (byte *)0x0) {
        return pbVar7;
      }
      pbVar7 = (byte *)pdb_141b348e0(&stack0xffffffffffffff90,&UNK_14339345c,0xf,param_1 + 0x30);
      if (pbVar7 != (byte *)0x0) {
        return pbVar7;
      }
      pbVar7 = (byte *)pdb_141b34910(&stack0xffffffffffffff90,&UNK_14339346b,10,param_1 + 0xc);
      if (pbVar7 != (byte *)0x0) {
        return pbVar7;
      }
      pbVar7 = (byte *)pdb_141b34910(&stack0xffffffffffffff90,&UNK_143393475,9,param_1 + 0x10);
      if (pbVar7 != (byte *)0x0) {
        return pbVar7;
      }
      pbVar7 = (byte *)pdb_141b34910(&stack0xffffffffffffff90,&UNK_14339347e,10,param_1 + 0x14);
      if (pbVar7 != (byte *)0x0) {
        return pbVar7;
      }
      pbVar7 = (byte *)pdb_141b34910(&stack0xffffffffffffff90,&UNK_143393488,0xb,param_1 + 0x18);
      if (pbVar7 != (byte *)0x0) {
        return pbVar7;
      }
      pbVar7 = (byte *)pdb_141b348e0(&stack0xffffffffffffff90,&UNK_143393493,0xe,param_1 + 0x38);
      if (pbVar7 != (byte *)0x0) {
        return pbVar7;
      }
      pbVar7 = (byte *)pdb_141b34910(&stack0xffffffffffffff90,&UNK_1433934a1,9,param_1 + 0x1c);
      if (pbVar7 != (byte *)0x0) {
        return pbVar7;
      }
      pbVar7 = (byte *)pdb_141b34910(&stack0xffffffffffffff90,&UNK_1433934aa,8,param_1 + 0x20);
      if (pbVar7 != (byte *)0x0) {
        return pbVar7;
      }
      ppbVar14 = (byte **)&stack0xffffffffffffff90;
code_r0x000141b2fd69:
      pdb_141b34980(ppbVar14);
      return (byte *)0x0;
    }
    break;
  case 3:
    plVar2 = (longlong *)*param_2;
    lVar15 = plVar2[2];
    if (*plVar2 == lVar15) {
      uStack_78 = 1;
      pdb_142d7f1b0(plVar2,lVar15,1,1);
      lVar15 = plVar2[2];
    }
    *(undefined1 *)(plVar2[1] + lVar15) = 0x7b;
    plVar2[2] = lVar15 + 1;
    pbVar7 = (byte *)pdb_14054e5c0(param_2,param_2 + 1,&UNK_1433934b2,0x12);
    uVar19 = extraout_XMM0_Be_02;
    uVar20 = extraout_XMM0_Bf_02;
    uVar21 = extraout_XMM0_Bg_02;
    uVar22 = extraout_XMM0_Bh_02;
    uVar23 = extraout_XMM0_Bi_02;
    uVar24 = extraout_XMM0_Bj_02;
    uVar25 = extraout_XMM0_Bk_02;
    uVar26 = extraout_XMM0_Bl_02;
    uVar27 = extraout_XMM0_Bm_02;
    uVar28 = extraout_XMM0_Bn_02;
    uVar29 = extraout_XMM0_Bo_02;
    uVar30 = extraout_XMM0_Bp_02;
    if (pbVar7 == (byte *)0x0) {
      plVar2 = (longlong *)*param_2;
      lVar15 = plVar2[2];
      if (*plVar2 == lVar15) {
        uStack_78 = 1;
        pdb_142d7f1b0(plVar2,lVar15,1,1);
        lVar15 = plVar2[2];
      }
      *(undefined1 *)(plVar2[1] + lVar15) = 0x3a;
      plVar2[2] = lVar15 + 1;
      plVar2 = (longlong *)*param_2;
      lVar15 = plVar2[2];
      if (*plVar2 == lVar15) {
        uStack_78 = 1;
        pdb_142d7f1b0(plVar2,lVar15,1,1);
        lVar15 = plVar2[2];
      }
      *(undefined1 *)(plVar2[1] + lVar15) = 0x7b;
      plVar2[2] = lVar15 + 1;
      pbStack_40._0_2_ = 0x100;
      puStack_38 = param_2;
      pbVar7 = (byte *)pdb_141b7a020(&pbStack_40,&UNK_14339340a,10,param_1 + 8);
      if (pbVar7 != (byte *)0x0) {
        return pbVar7;
      }
      if ((char)pbStack_40 != '\x01') {
        pbVar7 = (byte *)pdb_141b834d0(&pbStack_40,&UNK_1433934c4,4,param_1 + 1);
        if (pbVar7 != (byte *)0x0) {
          return pbVar7;
        }
        if ((char)pbStack_40 != '\x01') {
          pbVar7 = (byte *)pdb_141b834d0(&pbStack_40,&UNK_1433934c8,2,param_1 + 2);
          if (pbVar7 != (byte *)0x0) {
            return pbVar7;
          }
          ppbVar14 = &pbStack_40;
          goto code_r0x000141b2fd69;
        }
      }
      goto code_r0x000141b2fd8b;
    }
    break;
  case 4:
    plVar2 = (longlong *)*param_2;
    lVar15 = plVar2[2];
    if (*plVar2 == lVar15) {
      uStack_78 = 1;
      pdb_142d7f1b0(plVar2,lVar15,1,1);
      lVar15 = plVar2[2];
    }
    *(undefined1 *)(plVar2[1] + lVar15) = 0x7b;
    plVar2[2] = lVar15 + 1;
    pbVar7 = (byte *)pdb_14054e5c0(param_2,param_2 + 1,&UNK_1433934ca,0x16);
    uVar19 = extraout_XMM0_Be_00;
    uVar20 = extraout_XMM0_Bf_00;
    uVar21 = extraout_XMM0_Bg_00;
    uVar22 = extraout_XMM0_Bh_00;
    uVar23 = extraout_XMM0_Bi_00;
    uVar24 = extraout_XMM0_Bj_00;
    uVar25 = extraout_XMM0_Bk_00;
    uVar26 = extraout_XMM0_Bl_00;
    uVar27 = extraout_XMM0_Bm_00;
    uVar28 = extraout_XMM0_Bn_00;
    uVar29 = extraout_XMM0_Bo_00;
    uVar30 = extraout_XMM0_Bp_00;
    if (pbVar7 == (byte *)0x0) {
      plVar2 = (longlong *)*param_2;
      lVar15 = plVar2[2];
      if (*plVar2 == lVar15) {
        uStack_78 = 1;
        pdb_142d7f1b0(plVar2,lVar15,1,1);
        lVar15 = plVar2[2];
      }
      *(undefined1 *)(plVar2[1] + lVar15) = 0x3a;
      plVar2[2] = lVar15 + 1;
      plVar2 = (longlong *)*param_2;
      lVar15 = plVar2[2];
      if (*plVar2 == lVar15) {
        uStack_78 = 1;
        pdb_142d7f1b0(plVar2,lVar15,1,1);
        lVar15 = plVar2[2];
      }
      *(undefined1 *)(plVar2[1] + lVar15) = 0x7b;
      plVar2[2] = lVar15 + 1;
      pbStack_30 = (byte *)CONCAT62(pbStack_30._2_6_,0x100);
      puStack_28 = param_2;
      pbVar7 = (byte *)pdb_141b7a020(&pbStack_30,&UNK_14339340a,10,param_1 + 8);
      if (pbVar7 != (byte *)0x0) {
        return pbVar7;
      }
      if ((char)pbStack_30 != '\x01') {
        pbVar7 = (byte *)pdb_141b7e990(&pbStack_30,&UNK_1433934e0,6,param_1 + 1);
        if (pbVar7 != (byte *)0x0) {
          return pbVar7;
        }
        if ((char)pbStack_30 != '\x01') {
          pbVar7 = (byte *)pdb_141b7e990(&pbStack_30,&UNK_1433934e6,5,param_1 + 2);
          if (pbVar7 != (byte *)0x0) {
            return pbVar7;
          }
          ppbVar14 = &pbStack_30;
          goto code_r0x000141b2fd69;
        }
      }
      goto code_r0x000141b2fd8b;
    }
    break;
  case 5:
                    /* WARNING: Could not emulate address calculation at 0x000141b30dc3 */
                    /* WARNING: Treating indirect jump as call */
    pbVar7 = (byte *)(*(code *)(&UNK_143393b1c +
                               *(int *)(&UNK_143393b1c + (ulonglong)((uint)pbVar7 & 0xffffff28) * 4)
                               ))();
    return pbVar7;
  case 6:
    *pbVar7 = *pbVar7 + bVar5;
    (&UNK_143393a91)[iVar1] = (&UNK_143393a91)[iVar1] + '\b';
    UNRECOVERED_JUMPTABLE = (code *)swi(1);
    pbVar7 = (byte *)(*UNRECOVERED_JUMPTABLE)();
    return pbVar7;
  case 7:
    *pbVar7 = *pbVar7 + bVar5;
    (&UNK_143393a91)[iVar1] = (&UNK_143393a91)[iVar1] + '\b';
    UNRECOVERED_JUMPTABLE = (code *)swi(1);
    pbVar7 = (byte *)(*UNRECOVERED_JUMPTABLE)();
    return pbVar7;
  case 8:
    *pbVar7 = *pbVar7 + bVar5;
    (&UNK_143393a91)[iVar1] = (&UNK_143393a91)[iVar1] + '\b';
    UNRECOVERED_JUMPTABLE = (code *)swi(1);
    pbVar7 = (byte *)(*UNRECOVERED_JUMPTABLE)();
    return pbVar7;
  case 9:
    *pbVar7 = *pbVar7 + bVar5;
    (&UNK_143393a91)[iVar1] = (&UNK_143393a91)[iVar1] + '\b';
    UNRECOVERED_JUMPTABLE = (code *)swi(1);
    pbVar7 = (byte *)(*UNRECOVERED_JUMPTABLE)();
    return pbVar7;
  case 10:
    return pbVar7;
  case 0xb:
    (&UNK_143393b09)[iVar1] = 2;
    *pbVar7 = 0;
    return pbVar7;
  case 0xc:
    *(int *)(param_1 + 99) = *(int *)(param_1 + 99) + 0x43393b08;
                    /* WARNING: Could not recover jumptable at 0x000141b30e9f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pbVar7 = (byte *)(*(code *)(&UNK_143393b08 + param_3))
                               (&UNK_143393b08,param_2,&UNK_143393b08 + param_3);
    return pbVar7;
  case 0xd:
    UNK_143393b08 = UNK_143393b08 + '\b';
    return pbVar7;
  case 0xe:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0xf:
    *(char **)(param_1 + 8) = &UNK_143393b08;
    *param_1 = 1;
    return param_1;
  case 0x10:
code_r0x000141b3109f:
    if (bVar18) {
      (&UNK_143393b09)[iVar1] = 10;
      *pbVar7 = 0;
      return pbVar7;
    }
    goto LAB_141b3121d;
  case 0x11:
    goto code_r0x000141b31112;
  case 0x12:
    bVar5 = bVar5 | *(byte *)((longlong)param_2 + 0x143393abf);
    pbVar7 = (byte *)CONCAT71(uVar10,bVar5);
    UNK_143393a89 = UNK_143393a89 | 8;
    LOCK();
    pcVar8 = (char *)(unaff_GS_OFFSET + (int)pbVar7);
    *pcVar8 = *pcVar8 + bVar5;
    UNLOCK();
code_r0x000141b31189:
    if (param_3 == 0 && puVar13 == (undefined *)0x0) {
      pbVar7[1] = 4;
      *pbVar7 = 0;
      return pbVar7;
    }
    if ((short)param_2[1] == 0x7468 && *param_2 == 0x676965685f77656e) {
      pbVar7[1] = 6;
      *pbVar7 = 0;
      return pbVar7;
    }
    goto LAB_141b3121d;
  case 0x13:
code_r0x000141b311c5:
    if (*(longlong *)((longlong)param_2 + 3) == 0x7468676965685f76 && puVar13 == (undefined *)0x0) {
      (&UNK_143393b09)[iVar1] = 1;
      *pbVar7 = 0;
      return pbVar7;
    }
    puVar13 = (undefined *)(*param_2 ^ 0x666f72705f77656e);
  case 0x14:
    if (*(longlong *)((longlong)param_2 + 3) == 0x656c69666f72705f &&
        puVar13 == (undefined *)*param_2) {
      (&UNK_143393b09)[iVar1] = 7;
      *pbVar7 = 0;
      return pbVar7;
    }
    goto LAB_141b3121d;
  case 0x15:
    switch(param_3) {
    case 0:
      bVar18 = *param_2 == 0x657661655f77656e;
      goto code_r0x000141b3109f;
    case 1:
      puVar13 = (undefined *)0x7661655f76657270;
      goto code_r0x000141b310e5;
    case 2:
      if ((short)param_2[1] == 0x7865 && *param_2 == 0x646e695f6c6c6177) {
        (&UNK_143393b09)[iVar1] = 0;
        *pbVar7 = 0;
        return pbVar7;
      }
      puVar13 = (undefined *)(*param_2 ^ 0x6469725f76657270);
      param_3 = (ulonglong)(ushort)param_2[1] ^ 0x6567;
      goto code_r0x000141b31189;
    case 3:
      puVar13 = (undefined *)(*param_2 ^ 0x6965685f76657270);
      goto code_r0x000141b311c5;
    case 4:
      if ((uint)param_2[1] == 0x656c6966 && *param_2 == 0x6f72705f76657270) {
        (&UNK_143393b09)[iVar1] = 2;
        *pbVar7 = 0;
        return pbVar7;
      }
      break;
    case 6:
      if (*(longlong *)((longlong)param_2 + 6) == 0x74657366666f5f70 &&
          *param_2 == 0x5f7069745f77656e) {
        (&UNK_143393b09)[iVar1] = 8;
        *pbVar7 = 0;
        return pbVar7;
      }
      break;
    case 7:
      if (*(longlong *)((longlong)param_2 + 7) == 0x74657366666f5f70 &&
          *param_2 == 0x7069745f76657270) {
        (&UNK_143393b09)[iVar1] = 3;
        *pbVar7 = 0;
        return pbVar7;
      }
    }
    goto LAB_141b3121d;
  case 0x16:
code_r0x000141b310e5:
    if ((char)param_2[1] == 'e' && puVar13 == (undefined *)*param_2) {
code_r0x000141b31226:
      (&UNK_143393b09)[iVar1] = 5;
      *pbVar7 = 0;
      return pbVar7;
    }
    bVar18 = (char)param_2[1] == 'e' && *param_2 == 0x676469725f77656e;
    goto code_r0x000141b31112;
  case 0x17:
    goto code_r0x000141b31226;
  default:
    (&UNK_143393b09)[iVar1] = 8;
    *pbVar7 = 0;
    return pbVar7;
  case 0x19:
    uVar11 = (uint)*param_2 | 0x43393b08;
    uVar17 = (ulonglong)uVar11;
    pcVar8 = (char *)((ulonglong)param_2 & 0xffffffff);
    *pcVar8 = *pcVar8 + (char)pcVar8;
    pcVar8[-0x73] = pcVar8[-0x73] + (char)uVar11;
    UNRECOVERED_JUMPTABLE = (code *)((longlong)*(int *)(uVar17 + param_3 * 4) + uVar17);
                    /* WARNING: Could not recover jumptable at 0x000141b3127f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pbVar7 = (byte *)(*UNRECOVERED_JUMPTABLE)
                               (uVar17,(ulonglong)pbVar7 & 0xffffffff,UNRECOVERED_JUMPTABLE);
    return pbVar7;
  case 0x1b:
    *pbVar7 = *pbVar7 + bVar5;
    return pbVar7;
  case 0x20:
    if (*(short *)((longlong)param_2 + 4) == 0x736d && (uint)*param_2 == 0x61726170) {
code_r0x000141b3133c:
      (&UNK_143393b09)[iVar1] = 1;
      *pbVar7 = 0;
      return pbVar7;
    }
    goto LAB_141b31333;
  case 0x22:
    if ((short)param_2[1] == 0x7865 && (uint)*param_2 == 0x43393b08) {
      (&UNK_143393b09)[iVar1] = 0;
      *pbVar7 = 0;
      return pbVar7;
    }
    goto LAB_141b31333;
  case 0x23:
    out(*(undefined4 *)param_1,(short)param_2);
    out(*(undefined4 *)(param_1 + 4),(short)param_2);
    if (*(longlong *)((longlong)param_2 + 7) == 0x656c7974735f666f &&
        (undefined *)*param_2 == &UNK_143393b08) {
      (&UNK_143393b09)[iVar1] = 3;
      *pbVar7 = 0;
      return pbVar7;
    }
    goto LAB_141b31333;
  case 0x24:
  case 0x26:
  case 0x28:
  case 0x2a:
  case 0x2b:
    goto code_r0x000141b3138b;
  case 0x25:
    *(int *)pbVar7 = *(int *)pbVar7 + 1;
    cRam00000002867275c1 = cRam00000002867275c1 + (char)((ulonglong)param_2 >> 8);
    pbVar7 = (byte *)CONCAT71(uVar10,bVar5 + 0x88);
    *pbVar7 = *pbVar7 + bVar5 + 0x88;
    goto LAB_141b31333;
  case 0x27:
    auVar31[0] = -((char)param_2[2] == UNK_143388380);
    auVar31[1] = -(UNK_143388381 == '\0');
    auVar31[2] = -(UNK_143388382 == '\0');
    auVar31[3] = -(UNK_143388383 == '\0');
    auVar31[4] = -(UNK_143388384 == '\0');
    auVar31[5] = -(UNK_143388385 == '\0');
    auVar31[6] = -(UNK_143388386 == '\0');
    auVar31[7] = -(UNK_143388387 == '\0');
    auVar31[8] = -(UNK_143388388 == '\0');
    auVar31[9] = -(UNK_143388389 == '\0');
    auVar31[10] = -(UNK_14338838a == '\0');
    auVar31[0xb] = -(UNK_14338838b == '\0');
    auVar31[0xc] = -(UNK_14338838c == '\0');
    auVar31[0xd] = -(UNK_14338838d == '\0');
    auVar31[0xe] = -(UNK_14338838e == '\0');
    auVar31[0xf] = -(UNK_14338838f == '\0');
    auVar4[1] = -(in_XMM0_Bb == UNK_143392e71);
    auVar4[0] = -(in_XMM0_Ba == UNK_143392e70);
    auVar4[2] = -(in_XMM0_Bc == UNK_143392e72);
    auVar4[3] = -(in_XMM0_Bd == UNK_143392e73);
    auVar4[4] = -(in_XMM0_Be == UNK_143392e74);
    auVar4[5] = -(in_XMM0_Bf == UNK_143392e75);
    auVar4[6] = -(in_XMM0_Bg == UNK_143392e76);
    auVar4[7] = -(in_XMM0_Bh == UNK_143392e77);
    auVar4[8] = -(in_XMM0_Bi == UNK_143392e78);
    auVar4[9] = -(in_XMM0_Bj == UNK_143392e79);
    auVar4[10] = -(in_XMM0_Bk == UNK_143392e7a);
    auVar4[0xb] = -(in_XMM0_Bl == UNK_143392e7b);
    auVar4[0xc] = -(in_XMM0_Bm == UNK_143392e7c);
    auVar4[0xd] = -(in_XMM0_Bn == UNK_143392e7d);
    auVar4[0xe] = -(in_XMM0_Bo == UNK_143392e7e);
    auVar4[0xf] = -(in_XMM0_Bp == UNK_143392e7f);
    auVar31 = auVar31 & auVar4;
    if ((ushort)((ushort)(SUB161(auVar31 >> 7,0) & 1) | (ushort)(SUB161(auVar31 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar31 >> 0x17,0) & 1) << 2 |
                 (ushort)(SUB161(auVar31 >> 0x1f,0) & 1) << 3 |
                 (ushort)(SUB161(auVar31 >> 0x27,0) & 1) << 4 |
                 (ushort)(SUB161(auVar31 >> 0x2f,0) & 1) << 5 |
                 (ushort)(SUB161(auVar31 >> 0x37,0) & 1) << 6 |
                 (ushort)(SUB161(auVar31 >> 0x3f,0) & 1) << 7 |
                 (ushort)(SUB161(auVar31 >> 0x47,0) & 1) << 8 |
                 (ushort)(SUB161(auVar31 >> 0x4f,0) & 1) << 9 |
                 (ushort)(SUB161(auVar31 >> 0x57,0) & 1) << 10 |
                 (ushort)(SUB161(auVar31 >> 0x5f,0) & 1) << 0xb |
                 (ushort)(SUB161(auVar31 >> 0x67,0) & 1) << 0xc |
                 (ushort)(SUB161(auVar31 >> 0x6f,0) & 1) << 0xd |
                 (ushort)(SUB161(auVar31 >> 0x77,0) & 1) << 0xe |
                (ushort)(byte)(auVar31[0xf] >> 7) << 0xf) == 0xffff) goto code_r0x000141b3133c;
LAB_141b31333:
    pbVar7[1] = 4;
    *pbVar7 = 0;
    return pbVar7;
  case 0x29:
    UNRECOVERED_JUMPTABLE = (code *)swi(3);
    pbVar7 = (byte *)(*UNRECOVERED_JUMPTABLE)();
    return pbVar7;
  case 0x2c:
    _UNK_143393b09 = _UNK_143393b09 | 0xe0ff41c8;
    if (*(short *)((longlong)param_2 + 4) != 0x736d || (uint)*param_2 != 0x61726170) {
      (&UNK_143393b09)[iVar1] = 4;
      *pbVar7 = 0;
      return pbVar7;
    }
    goto code_r0x000141b3138b;
  case 0x2d:
  case 0x2e:
  case 0x2f:
  case 0x33:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x30:
    UNRECOVERED_JUMPTABLE = (code *)swi(3);
    pbVar7 = (byte *)(*UNRECOVERED_JUMPTABLE)();
    return pbVar7;
  case 0x31:
                    /* WARNING: Could not recover jumptable at 0x000140f679ae. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pbVar7 = (byte *)(**(code **)(_UNK_143393b10 + 0x18))
                               (CONCAT35(_UNK_143393b0d,CONCAT41(_UNK_143393b09,UNK_143393b08)),
                                param_2,param_3,*(code **)(_UNK_143393b10 + 0x18));
    return pbVar7;
  case 0x32:
    pbStack_60 = param_1;
    if (pbVar7 < (byte *)0x7) {
      pbVar9 = &UNK_143393bbc + *(int *)(&UNK_143393bbc + (longlong)pbVar7 * 4);
      switch(pbVar7) {
      case (byte *)0x3:
        lVar15 = *(longlong *)(param_3 + 0x10);
        if (lVar15 != 0) {
          lVar12 = *(longlong *)(param_3 + 0x18);
          uVar17 = 1;
code_r0x0001406abac0:
          lVar16 = lVar12;
          if (0x10 < uVar17) {
            lVar16 = *(longlong *)(lVar12 + -8);
          }
          uVar6 = GetProcessHeap(lVar12,lVar15);
                    /* WARNING: Could not recover jumptable at 0x000140f3c38c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          pbVar7 = (byte *)HeapFree(uVar6,0,lVar16);
          return pbVar7;
        }
        break;
      case (byte *)0x4:
        uVar6 = *(undefined8 *)(param_3 + 0x18);
        uVar3 = *(undefined8 *)(param_3 + 0x20);
        *(undefined8 *)(unaff_RBP + -0x10) = uVar6;
        *(ulonglong *)(unaff_RBP + -0x18) = param_3;
        pdb_14098ae50(uVar6,uVar3);
        pbVar9 = *(byte **)(unaff_RBP + -0x18);
        if (*(longlong *)(pbVar9 + 0x10) != 0) {
          lVar15 = *(longlong *)(pbVar9 + 0x10) << 5;
          uVar17 = 8;
          lVar12 = *(longlong *)(unaff_RBP + -0x10);
          goto code_r0x0001406abac0;
        }
        break;
      case (byte *)0x5:
        goto code_r0x000141b31590;
      }
      return pbVar9;
    }
code_r0x000141b31590:
    uStack_78 = 0xfffffffffffffffe;
    lVar15 = *(longlong *)(param_3 + 0x10);
    if (lVar15 == 0) {
      uStack_a8 = 0;
    }
    else {
      uStack_d0 = *(undefined8 *)(param_3 + 0x18);
      uStack_a8 = *(undefined8 *)(param_3 + 0x20);
      auStack_e8[1] = 0;
      uStack_c0 = 0;
      auStack_e8[2] = lVar15;
      lStack_b8 = lVar15;
      uStack_b0 = uStack_d0;
    }
    auStack_e8[0] = (ulonglong)(lVar15 != 0);
    uStack_c8 = auStack_e8[0];
    pdb_14192c4b0(&stack0xffffffffffffff60,auStack_e8);
    if (in_stack_ffffffffffffff60 != (byte *)0x0) {
      do {
        pbStack_88 = in_stack_ffffffffffffff60 + lStack_90 * 0x20;
        puStack_80 = auStack_e8;
        if (*(ulonglong *)(in_stack_ffffffffffffff60 + lStack_90 * 0x18 + 0x168) != 0) {
          pub_1406abac0(*(byte **)(in_stack_ffffffffffffff60 + lStack_90 * 0x18 + 0x170),
                        *(ulonglong *)(in_stack_ffffffffffffff60 + lStack_90 * 0x18 + 0x168),1);
        }
        pdb_140966d70(&pbStack_88);
        pdb_14192c4b0(&stack0xffffffffffffff60,auStack_e8);
      } while (in_stack_ffffffffffffff60 != (byte *)0x0);
    }
    return in_stack_ffffffffffffff60;
  }
  puStack_38 = (ulonglong *)0x1;
  uVar11 = CONCAT13(uVar30,CONCAT12(uVar29,CONCAT11(uVar28,uVar27))) ^
           CONCAT13(uVar30,CONCAT12(uVar29,CONCAT11(uVar28,uVar27)));
  pbStack_60 = &UNK_142db8fda;
  pbStack_30 = pbVar7;
  pdb_14007ee60();
  pbStack_60 = &UNK_142db8fe9;
  pbVar7 = pub_1406abab0(0x28,8);
  if (pbVar7 != (byte *)0x0) {
    *(ulonglong *)(pbVar7 + 0x20) =
         CONCAT17((char)(uVar11 >> 0x18),
                  CONCAT16((char)(uVar11 >> 0x10),
                           CONCAT15((char)(uVar11 >> 8),
                                    CONCAT14((char)uVar11,
                                             CONCAT13(uVar26,CONCAT12(uVar25,CONCAT11(uVar24,uVar23)
                                                                     )) ^
                                             CONCAT13(uVar26,CONCAT12(uVar25,CONCAT11(uVar24,uVar23)
                                                                     ))))));
    *(ulonglong **)(pbVar7 + 0x10) = puStack_28;
    *(ulonglong *)(pbVar7 + 0x18) =
         (ulonglong)
         (CONCAT13(uVar22,CONCAT12(uVar21,CONCAT11(uVar20,uVar19))) ^
         CONCAT13(uVar22,CONCAT12(uVar21,CONCAT11(uVar20,uVar19)))) << 0x20;
    *(ulonglong **)pbVar7 = puStack_38;
    *(byte **)(pbVar7 + 8) = pbStack_30;
    return pbVar7;
  }
                    /* WARNING: Subroutine does not return */
  pbStack_60 = &UNK_142db901a;
  pdb_142dc7e11(8,0x28);
code_r0x000141b3138b:
  (&UNK_143393b09)[iVar1] = 1;
  *pbVar7 = 0;
  return pbVar7;
code_r0x000141b31112:
  if (bVar18) {
    (&UNK_143393b09)[iVar1] = 9;
    *pbVar7 = 0;
    return pbVar7;
  }
LAB_141b3121d:
  pbVar7[1] = 0xb;
  *pbVar7 = 0;
  return pbVar7;
}

