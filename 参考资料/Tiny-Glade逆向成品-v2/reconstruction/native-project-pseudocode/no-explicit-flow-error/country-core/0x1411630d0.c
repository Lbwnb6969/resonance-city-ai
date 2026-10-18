// VA 0x1411630d0, PDB extent 1904 bytes
// country_core::resources::critters::Duck::new
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/critters.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: country_core::resources::critters::Duck::new
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/critters.rs
   Extent: 1904 */

longlong * pdb_1411630d0(longlong *param_1,longlong *param_2,undefined4 param_3)

{
  longlong lVar1;
  code *pcVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  byte *pbVar11;
  byte *pbVar12;
  longlong lStack_138;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  longlong lStack_128;
  byte *pbStack_120;
  longlong lStack_118;
  undefined4 uStack_110;
  undefined1 uStack_10c;
  undefined2 uStack_10b;
  undefined1 uStack_109;
  longlong lStack_108;
  undefined8 uStack_100;
  longlong lStack_f8;
  byte *pbStack_f0;
  longlong lStack_e8;
  undefined4 uStack_e0;
  undefined1 uStack_dc;
  undefined2 uStack_db;
  undefined1 uStack_d9;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined4 uStack_c0;
  longlong lStack_b8;
  longlong lStack_b0;
  longlong lStack_a8;
  byte *pbStack_a0;
  longlong lStack_98;
  undefined1 uStack_90;
  undefined4 uStack_8f;
  undefined2 uStack_8b;
  undefined1 uStack_89;
  longlong lStack_80;
  undefined4 uStack_78;
  undefined4 uStack_74;
  longlong lStack_70;
  byte *pbStack_68;
  longlong lStack_60;
  undefined4 uStack_58;
  undefined1 uStack_54;
  undefined2 uStack_53;
  undefined1 uStack_51;
  longlong lStack_50;
  undefined1 uStack_41;
  undefined8 uStack_40;
  
  uStack_40 = 0xfffffffffffffffe;
  lVar1 = *param_2;
  if (lVar1 == 0) {
    pdb_14007ee60();
    pbVar11 = pub_1406abab0(0x16,1);
    uVar5 = _UNK_14329b142;
    uVar4 = _UNK_14329b13e;
    uVar3 = _UNK_14329b13a;
    if (pbVar11 != (byte *)0x0) {
      *(undefined4 *)pbVar11 = _DAT_14329b136;
      *(undefined4 *)(pbVar11 + 4) = uVar3;
      *(undefined4 *)(pbVar11 + 8) = uVar4;
      *(undefined4 *)(pbVar11 + 0xc) = uVar5;
      pbVar11[0xe] = 0x6b;
      pbVar11[0xf] = 0x73;
      pbVar11[0x10] = 0x2f;
      pbVar11[0x11] = 0x51;
      pbVar11[0x12] = 0x75;
      pbVar11[0x13] = 0x61;
      pbVar11[0x14] = 99;
      pbVar11[0x15] = 0x6b;
      lStack_80 = 0;
      lStack_70 = 0x16;
      lStack_60 = 0x16;
      uStack_58 = CONCAT31(uStack_58._1_3_,2);
      pbStack_68 = pbVar11;
      goto LAB_1411631cd;
    }
    pdb_142dc7e2a(1,0x16);
  }
  else {
    pdb_140a8b180(&lStack_80,lVar1 + 0x10,&DAT_14329b136,0x16);
    if ((int)lStack_80 == 2) {
                    /* WARNING: Subroutine does not return */
      pdb_142dc8170(&UNK_14329b530,0x2b,&lStack_b8,&UNK_14329b510,&UNK_14329b150);
    }
LAB_1411631cd:
    uStack_130 = uStack_78;
    uStack_12c = uStack_74;
    lStack_118 = lStack_60;
    uStack_110 = uStack_58;
    uStack_10c = uStack_54;
    uStack_10b = uStack_53;
    uStack_109 = uStack_51;
    lStack_128 = lStack_70;
    pbStack_120 = pbStack_68;
    lStack_138 = lStack_80;
    uStack_41 = 1;
    pdb_140a8e730(&lStack_138,&UNK_14329b168,5,param_3);
    uVar4 = uStack_110;
    lVar10 = lStack_118;
    pbVar11 = pbStack_120;
    lVar9 = lStack_128;
    lVar8 = lStack_138;
    uVar3 = CONCAT13(uStack_109,CONCAT21(uStack_10b,uStack_10c));
    if (lVar1 != 0) {
      pdb_140a8b180(&lStack_80,lVar1 + 0x10,&DAT_14329b16d,0x18);
      if ((int)lStack_80 == 2) {
                    /* WARNING: Subroutine does not return */
        pdb_142dc8170(&UNK_14329b530,0x2b,&lStack_b8,&UNK_14329b510,&UNK_14329b188);
      }
      lStack_e8 = lStack_60;
      uStack_e0 = uStack_58;
      uStack_dc = uStack_54;
      uStack_db = uStack_53;
      uStack_d9 = uStack_51;
      lStack_f8 = lStack_70;
      pbStack_f0 = pbStack_68;
      lStack_108 = lStack_80;
      uStack_100 = CONCAT44(uStack_74,uStack_78);
      pdb_140a8b180(&lStack_80,lVar1 + 0x10,&DAT_14329b1a0,0x15);
      if ((int)lStack_80 == 2) {
                    /* WARNING: Subroutine does not return */
        pdb_142dc8170(&UNK_14329b530,0x2b,&puStack_d8,&UNK_14329b510,&UNK_14329b1b8);
      }
LAB_14116344f:
      lStack_b0 = CONCAT44(uStack_74,uStack_78);
      lStack_98 = lStack_60;
      uStack_90 = (undefined1)uStack_58;
      uStack_8f = CONCAT13(uStack_54,uStack_58._1_3_);
      uStack_8b = uStack_53;
      uStack_89 = uStack_51;
      lStack_a8 = lStack_70;
      pbStack_a0 = pbStack_68;
      lStack_b8 = lStack_80;
      uStack_c8 = 3;
      uStack_c0 = 0x32;
      puStack_d8 = &UNK_14329b1d0;
      uStack_d0 = 0x15;
      pdb_140a87c40(&lStack_80,param_2,&puStack_d8);
      if (!SBORROW8(0,lStack_80)) {
        param_1[0x1b] = lStack_50;
        param_1[0x19] = lStack_60;
        param_1[0x1a] = CONCAT17(uStack_51,CONCAT25(uStack_53,CONCAT14(uStack_54,uStack_58)));
        param_1[0x17] = lStack_70;
        param_1[0x18] = (longlong)pbStack_68;
        param_1[0x15] = lStack_80;
        param_1[0x16] = CONCAT44(uStack_74,uStack_78);
        param_1[0x12] = 0;
        param_1[0x13] = 4;
        param_1[0x14] = 0;
        *(undefined4 *)((longlong)param_1 + 0xec) = 0;
        *(undefined1 *)(param_1 + 0x1c) = 0;
        *(undefined4 *)((longlong)param_1 + 0xe4) = 0;
        param_1[4] = lVar10;
        param_1[5] = CONCAT44(uVar3,uVar4);
        param_1[2] = lVar9;
        param_1[3] = (longlong)pbVar11;
        *param_1 = lVar8;
        param_1[1] = CONCAT44(uStack_12c,uStack_130);
        param_1[6] = lStack_108;
        param_1[7] = uStack_100;
        param_1[8] = lStack_f8;
        param_1[9] = (longlong)pbStack_f0;
        param_1[10] = lStack_e8;
        param_1[0xb] = CONCAT17(uStack_d9,CONCAT25(uStack_db,CONCAT14(uStack_dc,uStack_e0)));
        param_1[0xe] = lStack_a8;
        param_1[0xf] = (longlong)pbStack_a0;
        param_1[0xc] = lStack_b8;
        param_1[0xd] = lStack_b0;
        param_1[0x10] = lStack_98;
        param_1[0x11] = CONCAT17(uStack_89,CONCAT25(uStack_8b,CONCAT41(uStack_8f,uStack_90)));
        param_1[0x1e] = 0;
        *(undefined8 *)((longlong)param_1 + 0xf5) = 0;
        return param_1;
      }
                    /* WARNING: Subroutine does not return */
      pdb_142dc8170(&UNK_14329b530,0x2b,&puStack_d8,&UNK_14329b510,&UNK_14329b1e8);
    }
    pdb_14007ee60();
    pbVar12 = pub_1406abab0(0x18,1);
    uVar7 = _UNK_14329b179;
    uVar6 = _UNK_14329b175;
    uVar5 = _UNK_14329b171;
    if (pbVar12 != (byte *)0x0) {
      *(undefined4 *)pbVar12 = _DAT_14329b16d;
      *(undefined4 *)(pbVar12 + 4) = uVar5;
      *(undefined4 *)(pbVar12 + 8) = uVar6;
      *(undefined4 *)(pbVar12 + 0xc) = uVar7;
      pbVar12[0x10] = 0x2f;
      pbVar12[0x11] = 0x54;
      pbVar12[0x12] = 0x61;
      pbVar12[0x13] = 0x6b;
      pbVar12[0x14] = 0x65;
      pbVar12[0x15] = 0x4f;
      pbVar12[0x16] = 0x66;
      pbVar12[0x17] = 0x66;
      lStack_80 = 0;
      lStack_70 = 0x18;
      lStack_60 = 0x18;
      uStack_58 = CONCAT31(uStack_58._1_3_,2);
      lStack_108 = 0;
      uStack_100 = CONCAT44(uStack_74,uStack_78);
      lStack_f8 = 0x18;
      lStack_e8 = 0x18;
      uStack_e0 = CONCAT31(uStack_58._1_3_,2);
      uStack_dc = uStack_54;
      uStack_db = uStack_53;
      uStack_d9 = uStack_51;
      pbStack_f0 = pbVar12;
      pbStack_68 = pbVar12;
      pdb_14007ee60();
      pbVar12 = pub_1406abab0(0x15,1);
      uVar7 = _UNK_14329b1ac;
      uVar6 = _UNK_14329b1a8;
      uVar5 = _UNK_14329b1a4;
      if (pbVar12 != (byte *)0x0) {
        *(undefined4 *)pbVar12 = _DAT_14329b1a0;
        *(undefined4 *)(pbVar12 + 4) = uVar5;
        *(undefined4 *)(pbVar12 + 8) = uVar6;
        *(undefined4 *)(pbVar12 + 0xc) = uVar7;
        pbVar12[0xd] = 99;
        pbVar12[0xe] = 0x6b;
        pbVar12[0xf] = 0x73;
        pbVar12[0x10] = 0x2f;
        pbVar12[0x11] = 0x4c;
        pbVar12[0x12] = 0x61;
        pbVar12[0x13] = 0x6e;
        pbVar12[0x14] = 100;
        lStack_80 = 0;
        lStack_70 = 0x15;
        lStack_60 = 0x15;
        uStack_58 = CONCAT31(uStack_58._1_3_,2);
        pbStack_68 = pbVar12;
        goto LAB_14116344f;
      }
      pdb_142dc7e2a(1,0x15);
      goto LAB_141163695;
    }
  }
  pdb_142dc7e2a(1,0x18);
LAB_141163695:
                    /* WARNING: Does not return */
  pcVar2 = (code *)invalidInstructionException();
  (*pcVar2)();
}

