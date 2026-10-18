// VA 0x140486500, PDB extent 1696 bytes
// tiny_glade::panic_reporter::panic_screenshot::dump_screenshot
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/panic_reporter/panic_screenshot.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: tiny_glade::panic_reporter::panic_screenshot::dump_screenshot
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/panic_reporter/panic_screenshot.rs
   Extent: 1696 */

undefined8 * pdb_140486500(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  ulonglong uVar1;
  uint uVar2;
  uint uVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  code *pcVar6;
  uint *puVar7;
  byte bVar8;
  byte bVar9;
  undefined8 uVar10;
  longlong lVar11;
  ulonglong uVar12;
  undefined8 uVar13;
  ulonglong uVar14;
  bool bVar15;
  uint *puStack_1a8;
  longlong lStack_1a0;
  undefined8 uStack_198;
  code *pcStack_190;
  undefined4 uStack_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined4 uStack_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined4 uStack_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  longlong lStack_f8;
  byte *pbStack_f0;
  longlong lStack_e8;
  undefined8 uStack_e0;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  uint *puStack_a8;
  undefined8 uStack_a0;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  byte *pbStack_60;
  uint uStack_54;
  uint uStack_50;
  undefined1 uStack_4a;
  undefined1 uStack_49;
  undefined8 uStack_48;
  
  uStack_48 = 0xfffffffffffffffe;
  pdb_140f3e9e0(&uStack_d8,param_2,param_3,&UNK_142f5da68,0x24);
  bVar9 = DAT_143cb2ba8;
  do {
    if ((bVar9 & 1) != 0) {
      uStack_49 = 1;
      uVar10 = pdb_142d877a0(&UNK_142f5dbab,0x1d);
      param_1[1] = uVar10;
      *param_1 = 0x8000000000000000;
      goto LAB_14048673c;
    }
    LOCK();
    bVar15 = bVar9 != DAT_143cb2ba8;
    bVar8 = bVar9 | 1;
    if (bVar15) {
      bVar8 = DAT_143cb2ba8;
      bVar9 = DAT_143cb2ba8;
    }
    DAT_143cb2ba8 = bVar8;
    UNLOCK();
  } while (bVar15);
  uStack_49 = 1;
  pdb_140e9a150(&DAT_143cb2ba8);
  uVar10 = uStack_c8;
  uVar12 = _DAT_143cb2bc0;
  puVar7 = _DAT_143cb2bb8;
  if (_DAT_143cb2bb0 == 0) {
    uVar10 = pdb_142d877a0(&UNK_142f5db8b,0x20);
    goto LAB_140486705;
  }
  if (_DAT_143cb2bc0 < 4) {
    pdb_142dc8420(0,4,_DAT_143cb2bc0,&UNK_142f5da90);
    goto LAB_140486a5a;
  }
  uVar2 = *_DAT_143cb2bb8;
  uStack_50 = uVar2;
  if (_DAT_143cb2bc0 < 8) {
    pdb_142dc8420(4,8,_DAT_143cb2bc0,&UNK_142f5daa8);
    goto LAB_140486a5a;
  }
  uVar3 = _DAT_143cb2bb8[1];
  uStack_54 = uVar3;
  if ((uVar2 == 0) || (uVar3 == 0)) {
    uStack_b8 = &uStack_50;
    uStack_b0 = pdb_140f71a50;
    puStack_a8 = &uStack_54;
    uStack_a0 = pdb_140f71a50;
    pdb_140f60760(&uStack_138,&UNK_142f5dac0,&uStack_b8);
    uStack_b8 = (uint *)CONCAT44(uStack_134,uStack_138);
    uStack_b0 = (code *)CONCAT44(uStack_12c,uStack_130);
    uVar10 = pdb_142d877e0(&uStack_b8);
  }
  else {
    uVar14 = CONCAT44(0,uVar3) * (ulonglong)uVar2;
    if (uVar14 < 0x38401) {
      uStack_e0 = CONCAT44(uStack_cc,uStack_d0);
      uVar13 = uStack_c8;
      lVar11 = pdb_140f3eaf0(uStack_e0,uStack_c8);
      if (lVar11 != 0) {
        uStack_b8 = (uint *)CONCAT71(uStack_b8._1_7_,1);
        lVar11 = pdb_140f46c40(&uStack_b8,lVar11,uVar13);
        if (lVar11 != 0) {
          uVar10 = pdb_142d88fc0(lVar11);
          goto LAB_140486705;
        }
      }
      uVar1 = uVar14 * 2 + 8;
      if (uVar12 < uVar1) {
        pdb_142dc8420(8,uVar1,uVar12,&UNK_142f5db08);
LAB_140486a5a:
                    /* WARNING: Does not return */
        pcVar6 = (code *)invalidInstructionException();
        (*pcVar6)();
      }
      uStack_b0 = (code *)(uVar14 * 2);
      uStack_b8 = puVar7 + 2;
      puStack_a8 = (uint *)0x4;
      pdb_140180740(&lStack_f8,&uStack_b8);
      auVar4._8_8_ = 0;
      auVar4._0_8_ = (ulonglong)uVar2 * 3;
      auVar5._8_8_ = 0;
      auVar5._0_8_ = CONCAT44(0,uVar3);
      uVar12 = SUB168(auVar4 * auVar5,0);
      pbStack_60 = pbStack_f0;
      if ((SUB168(auVar4 * auVar5,8) != 0) || ((ulonglong)(lStack_e8 * 6) < uVar12)) {
                    /* WARNING: Subroutine does not return */
        pdb_142dc8150(&UNK_142f5db20);
      }
      uVar13 = pdb_1406d0830();
      pdb_140d9dfe0(&uStack_178,uStack_e0,uVar10,uVar13,uVar12,uVar2,uVar3,0xf);
      if (CONCAT44(uStack_174,uStack_178) == -0x7ffffffffffffff6) {
        param_1[2] = uStack_c8;
        param_1[3] = uStack_c0;
        *(undefined4 *)param_1 = uStack_d8;
        *(undefined4 *)((longlong)param_1 + 4) = uStack_d4;
        *(undefined4 *)(param_1 + 1) = uStack_d0;
        *(undefined4 *)((longlong)param_1 + 0xc) = uStack_cc;
        if (lStack_f8 != 0) {
          pub_1406abac0(pbStack_60,lStack_f8 * 6,1);
        }
        uStack_49 = 0;
        pdb_140e9a350();
        LOCK();
        bVar15 = DAT_143cb2ba8 == 1;
        if (bVar15) {
          DAT_143cb2ba8 = 0;
        }
        UNLOCK();
        if (bVar15) {
          return param_1;
        }
        uStack_49 = 0;
        pdb_142dbcef0(&DAT_143cb2ba8,0);
        return param_1;
      }
      uStack_108 = uStack_148;
      uStack_104 = uStack_144;
      uStack_100 = uStack_140;
      uStack_fc = uStack_13c;
      uStack_118 = uStack_158;
      uStack_114 = uStack_154;
      uStack_110 = uStack_150;
      uStack_10c = uStack_14c;
      uStack_128 = uStack_168;
      uStack_124 = uStack_164;
      uStack_120 = uStack_160;
      uStack_11c = uStack_15c;
      uStack_138 = uStack_178;
      uStack_134 = uStack_174;
      uStack_130 = uStack_170;
      uStack_12c = uStack_16c;
      uStack_4a = 1;
      pdb_140f3f5b0(&uStack_b8);
      uStack_198 = puStack_a8;
      pcStack_190 = uStack_a0;
      puStack_1a8 = uStack_b8;
      lStack_1a0 = (longlong)uStack_b0;
      uStack_78 = uStack_148;
      uStack_74 = uStack_144;
      uStack_70 = uStack_140;
      uStack_6c = uStack_13c;
      uStack_88 = uStack_158;
      uStack_84 = uStack_154;
      uStack_80 = uStack_150;
      uStack_7c = uStack_14c;
      uStack_98 = uStack_168;
      uStack_94 = uStack_164;
      uStack_90 = uStack_160;
      uStack_8c = uStack_15c;
      uStack_a0 = (code *)CONCAT44(uStack_16c,uStack_170);
      uStack_b8 = (uint *)&UNK_142f5db38;
      uStack_b0 = (code *)0xc;
      uStack_4a = 0;
      uVar10 = pdb_142d87a60(&uStack_b8,&puStack_1a8);
      param_1[1] = uVar10;
      *param_1 = 0x8000000000000000;
      if (lStack_f8 != 0) {
        pub_1406abac0(pbStack_60,lStack_f8 * 6,1);
      }
      goto LAB_140486716;
    }
    uStack_b8 = &uStack_50;
    uStack_b0 = pdb_140f71a50;
    puStack_a8 = &uStack_54;
    uStack_a0 = pdb_140f71a50;
    pdb_140f60760(&uStack_138,&UNK_142f5db44,&uStack_b8);
    uStack_b8 = (uint *)CONCAT44(uStack_134,uStack_138);
    uStack_b0 = (code *)CONCAT44(uStack_12c,uStack_130);
    uVar10 = pdb_142d877e0(&uStack_b8);
  }
LAB_140486705:
  param_1[1] = uVar10;
  *param_1 = 0x8000000000000000;
LAB_140486716:
  uStack_49 = 1;
  pdb_140e9a350();
  LOCK();
  bVar15 = DAT_143cb2ba8 == 1;
  if (bVar15) {
    DAT_143cb2ba8 = 0;
  }
  UNLOCK();
  if (!bVar15) {
    uStack_49 = 1;
    pdb_142dbcef0(&DAT_143cb2ba8,0);
  }
LAB_14048673c:
  if (CONCAT44(uStack_d4,uStack_d8) != 0) {
    pub_1406abac0((byte *)CONCAT44(uStack_cc,uStack_d0),CONCAT44(uStack_d4,uStack_d8),1);
  }
  return param_1;
}

