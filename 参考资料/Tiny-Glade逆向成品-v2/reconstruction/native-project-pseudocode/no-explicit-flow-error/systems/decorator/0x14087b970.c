// VA 0x14087b970, PDB extent 1997 bytes
// system_decorator::load_decorators::load_decorators::closure$0
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/decorator/src/load_decorators.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: system_decorator::load_decorators::load_decorators::closure$0
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/decorator/src/load_decorators.rs
   Extent: 1997 */

void pdb_14087b970(ulonglong *param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  code *pcVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  longlong lVar9;
  byte *pbVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  longlong lVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  undefined8 uVar16;
  undefined1 auStack_1b8 [8];
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  undefined4 uStack_1a8;
  undefined4 uStack_1a4;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  undefined4 uStack_198;
  undefined4 uStack_194;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined4 uStack_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  ulonglong uStack_138;
  byte *pbStack_130;
  ulonglong uStack_128;
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
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined1 auStack_a0 [24];
  ulonglong uStack_88;
  byte *pbStack_80;
  ulonglong uStack_78;
  ulonglong uStack_70;
  ulonglong uStack_68;
  byte *pbStack_60;
  ulonglong uStack_58;
  undefined1 uStack_4d;
  undefined1 uStack_4c;
  undefined1 uStack_4b;
  undefined1 uStack_4a;
  undefined1 uStack_49;
  undefined8 uStack_48;
  
  uStack_48 = 0xfffffffffffffffe;
  lVar13 = param_2;
  pdb_140a96f90(auStack_a0);
  uStack_49 = 1;
  lVar9 = pdb_140a97600(param_2);
  uVar14 = lVar13 - lVar9;
  auVar4._8_8_ = 0;
  auVar4._0_8_ = uVar14;
  uVar11 = SUB168(auVar4 * ZEXT816(0xaaaaaaaaaaaaaaab),8);
  if (0x7ffffffffffffffc < uVar14) {
    uVar16 = 0;
LAB_14087b9e6:
    uStack_49 = 1;
    pdb_142dc7e2a(uVar16,uVar14);
    goto LAB_14087becd;
  }
  if (lVar13 == lVar9) {
    pbVar10 = (byte *)0x4;
    uStack_68 = 0;
  }
  else {
    pdb_14007ee60();
    uVar16 = 4;
    pbVar10 = pub_1406abab0(uVar14,4);
    if (pbVar10 == (byte *)0x0) goto LAB_14087b9e6;
    uStack_68 = uVar14 / 0xc;
    if (uVar14 - 0xc < 0xc) {
      uVar11 = 0;
    }
    else {
      lVar13 = 0x14;
      uVar11 = 0;
      do {
        uVar3 = *(undefined4 *)(lVar9 + -0xc + lVar13);
        *(undefined8 *)(pbVar10 + lVar13 + -0x14) = *(undefined8 *)(lVar9 + -0x14 + lVar13);
        *(undefined4 *)(pbVar10 + lVar13 + -0xc) = uVar3;
        uVar3 = *(undefined4 *)(lVar9 + lVar13);
        *(undefined8 *)(pbVar10 + lVar13 + -8) = *(undefined8 *)(lVar9 + -8 + lVar13);
        *(undefined4 *)(pbVar10 + lVar13) = uVar3;
        uVar11 = uVar11 + 2;
        lVar13 = lVar13 + 0x18;
      } while ((uStack_68 & 0xffffffffffffffe) != uVar11);
      if ((uStack_68 & 1) == 0) goto LAB_14087bad6;
    }
    uVar11 = uVar11 * 0xc;
    uVar3 = *(undefined4 *)(lVar9 + 8 + uVar11);
    *(undefined8 *)(pbVar10 + uVar11) = *(undefined8 *)(lVar9 + uVar11);
    *(undefined4 *)(pbVar10 + uVar11 + 8) = uVar3;
  }
LAB_14087bad6:
  uStack_4a = 1;
  pbStack_60 = pbVar10;
  uStack_58 = uStack_68;
  uVar14 = pdb_140a974f0(param_2);
  if (uVar14 == 0) {
    uStack_88 = 0x8000000000000000;
    uVar12 = uVar11;
  }
  else {
    uVar15 = uVar11 - uVar14;
    auVar5._8_8_ = 0;
    auVar5._0_8_ = uVar15;
    uVar12 = SUB168(auVar5 * ZEXT816(0xaaaaaaaaaaaaaaab),8);
    if (0x7ffffffffffffffc < uVar15) {
      uVar16 = 0;
LAB_14087bb1a:
      uStack_4a = 1;
      pdb_142dc7e2a(uVar16,uVar15);
      goto LAB_14087becd;
    }
    if (uVar11 == uVar14) {
      pbStack_80 = (byte *)0x4;
      uStack_88 = 0;
      uStack_78 = uStack_88;
    }
    else {
      pdb_14007ee60();
      uVar16 = 4;
      pbVar10 = pub_1406abab0(uVar15,4);
      if (pbVar10 == (byte *)0x0) goto LAB_14087bb1a;
      uStack_88 = uVar15 / 0xc;
      pbStack_80 = pbVar10;
      uStack_78 = uStack_88;
      if (uVar15 - 0xc < 0xc) {
        uVar12 = 0;
      }
      else {
        lVar13 = 0x14;
        uVar12 = 0;
        do {
          uVar3 = *(undefined4 *)((uVar14 - 0xc) + lVar13);
          *(undefined8 *)(pbVar10 + lVar13 + -0x14) = *(undefined8 *)((uVar14 - 0x14) + lVar13);
          *(undefined4 *)(pbVar10 + lVar13 + -0xc) = uVar3;
          uVar3 = *(undefined4 *)(uVar14 + lVar13);
          *(undefined8 *)(pbVar10 + lVar13 + -8) = *(undefined8 *)((uVar14 - 8) + lVar13);
          *(undefined4 *)(pbVar10 + lVar13) = uVar3;
          uVar12 = uVar12 + 2;
          lVar13 = lVar13 + 0x18;
        } while ((uStack_88 & 0xffffffffffffffe) != uVar12);
        if ((uStack_88 & 1) == 0) goto LAB_14087bc2b;
      }
      uVar12 = uVar12 * 0xc;
      uVar3 = *(undefined4 *)(uVar14 + 8 + uVar12);
      *(undefined8 *)(pbVar10 + uVar12) = *(undefined8 *)(uVar14 + uVar12);
      *(undefined4 *)(pbVar10 + uVar12 + 8) = uVar3;
    }
  }
LAB_14087bc2b:
  uStack_4b = 1;
  uVar11 = pdb_140a973f0();
  if (uVar11 == 0) {
    uStack_138 = 0x8000000000000000;
    goto LAB_14087bd8b;
  }
  uVar14 = uVar12 - uVar11;
  if (uVar14 < 0x7ffffffffffffffd) {
    if (uVar12 == uVar11) {
      pbStack_130 = (byte *)0x4;
      uStack_138 = 0;
      uStack_128 = uStack_138;
LAB_14087bd8b:
      uStack_4b = 0;
      pdb_1409f0070(auStack_1b8,auStack_a0,&uStack_68,&uStack_88,&uStack_138);
      uStack_4d = 1;
      pdb_140a96d60(&uStack_68,param_2);
      uStack_4c = 1;
      pdb_140a96ee0(&uStack_88,param_2);
      uStack_b8 = uStack_148;
      uStack_b0 = uStack_140;
      uStack_c8 = uStack_158;
      uStack_c0 = uStack_150;
      uStack_d8 = uStack_168;
      uStack_d0 = uStack_160;
      uStack_e8 = uStack_178;
      uStack_e0 = uStack_170;
      uStack_f8 = uStack_188;
      uStack_f4 = uStack_184;
      uStack_f0 = uStack_180;
      uStack_ec = uStack_17c;
      uStack_108 = uStack_198;
      uStack_104 = uStack_194;
      uStack_100 = uStack_190;
      uStack_fc = uStack_18c;
      uStack_118 = uStack_1a8;
      uStack_114 = uStack_1a4;
      uStack_110 = uStack_1a0;
      uStack_10c = uStack_19c;
      uStack_120 = uStack_1b0;
      uStack_11c = uStack_1ac;
      uStack_138 = 1;
      pbStack_130 = (byte *)0x1;
      pdb_14007ee60();
      pbVar10 = pub_1406abab0(0x90,0x10);
      if (pbVar10 != (byte *)0x0) {
        pub_142e32760(pbVar10,&uStack_138,0x90);
        param_1[2] = uStack_58;
        *param_1 = uStack_68;
        param_1[1] = (ulonglong)pbStack_60;
        param_1[6] = uStack_78;
        param_1[7] = uStack_70;
        param_1[4] = uStack_88;
        param_1[5] = (ulonglong)pbStack_80;
        param_1[3] = (ulonglong)pbVar10;
        return;
      }
                    /* WARNING: Subroutine does not return */
      pdb_142dc7e11(0x10,0x90);
    }
    pdb_14007ee60();
    uVar16 = 4;
    pbStack_130 = pub_1406abab0(uVar14,4);
    if (pbStack_130 != (byte *)0x0) {
      uStack_138 = uVar14 >> 3;
      uStack_128 = uStack_138;
      if ((longlong)pbStack_130 - uVar11 < 0x20 || uVar14 < 0x30) {
        uVar14 = 0;
      }
      else {
        uVar14 = uStack_138 & 0xffffffffffffffc;
        uVar12 = 0;
        do {
          puVar1 = (undefined8 *)(uVar11 + uVar12 * 8);
          uVar16 = puVar1[1];
          puVar2 = (undefined8 *)(uVar11 + 0x10 + uVar12 * 8);
          uVar7 = *puVar2;
          uVar8 = puVar2[1];
          *(undefined8 *)(pbStack_130 + uVar12 * 8) = *puVar1;
          *(undefined8 *)(pbStack_130 + uVar12 * 8 + 8) = uVar16;
          *(undefined8 *)(pbStack_130 + uVar12 * 8 + 0x10) = uVar7;
          *(undefined8 *)(pbStack_130 + uVar12 * 8 + 0x10 + 8) = uVar8;
          uVar12 = uVar12 + 4;
        } while (uVar14 != uVar12);
        if (uStack_138 == uVar14) goto LAB_14087bd8b;
      }
      uVar15 = uVar14;
      for (uVar12 = uStack_138 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
        *(undefined8 *)(pbStack_130 + uVar15 * 8) = *(undefined8 *)(uVar11 + uVar15 * 8);
        uVar15 = uVar15 + 1;
      }
      if (uVar14 - uStack_138 < 0xfffffffffffffffd) {
        do {
          *(undefined8 *)(pbStack_130 + uVar15 * 8) = *(undefined8 *)(uVar11 + uVar15 * 8);
          *(undefined8 *)(pbStack_130 + uVar15 * 8 + 8) = *(undefined8 *)(uVar11 + 8 + uVar15 * 8);
          *(undefined8 *)(pbStack_130 + uVar15 * 8 + 0x10) =
               *(undefined8 *)(uVar11 + 0x10 + uVar15 * 8);
          *(undefined8 *)(pbStack_130 + uVar15 * 8 + 0x18) =
               *(undefined8 *)(uVar11 + 0x18 + uVar15 * 8);
          uVar15 = uVar15 + 4;
        } while (uStack_138 != uVar15);
      }
      goto LAB_14087bd8b;
    }
  }
  else {
    uVar16 = 0;
  }
  uStack_4b = 1;
  pdb_142dc7e2a(uVar16,uVar14);
LAB_14087becd:
                    /* WARNING: Does not return */
  pcVar6 = (code *)invalidInstructionException();
  (*pcVar6)();
}

