// VA 0x14215fc00, PDB extent 3303 bytes
// system_color::wall_color_slots::sync_wall_color_slots
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/color/src/wall_color_slots.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: system_color::wall_color_slots::sync_wall_color_slots
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/color/src/wall_color_slots.rs
   Extent: 3303 */

void pdb_14215fc00(byte *param_1,byte *param_2,undefined8 *param_3,undefined8 *param_4,
                  ulonglong *param_5)

{
  undefined1 auVar1 [16];
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined4 *puVar7;
  int iVar8;
  uint uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  longlong lVar12;
  undefined8 uVar13;
  ulonglong uVar14;
  uint uVar15;
  byte *pbVar16;
  longlong *plVar17;
  longlong lVar18;
  undefined1 (*pauVar19) [16];
  undefined *puVar20;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  longlong lStack_230;
  longlong lStack_228;
  longlong lStack_200;
  byte *pbStack_1f8;
  longlong *plStack_1f0;
  longlong lStack_1e8;
  byte *pbStack_1e0;
  longlong *plStack_1d8;
  longlong lStack_1d0;
  byte *pbStack_1c8;
  longlong *plStack_1c0;
  longlong lStack_1b8;
  byte *pbStack_1b0;
  longlong *plStack_1a8;
  longlong lStack_1a0;
  undefined1 (*pauStack_198) [16];
  longlong *plStack_190;
  ulonglong uStack_188;
  longlong lStack_180;
  byte *pbStack_178;
  longlong *plStack_170;
  ulonglong *puStack_168;
  code *pcStack_160;
  longlong *plStack_158;
  code *pcStack_150;
  undefined8 *puStack_148;
  byte *pbStack_140;
  byte *pbStack_138;
  code *pcStack_130;
  longlong *plStack_128;
  longlong *plStack_120;
  longlong *plStack_118;
  longlong *plStack_110;
  longlong *plStack_108;
  longlong *plStack_100;
  ulonglong uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  ulonglong uStack_d8;
  undefined *puStack_d0;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined1 auStack_a8 [16];
  ulonglong **ppuStack_98;
  undefined1 uStack_90;
  byte *pbStack_88;
  byte *pbStack_80;
  undefined1 uStack_71;
  byte *pbStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined1 (*pauStack_50) [16];
  undefined8 uStack_48;
  
  uStack_48 = 0xfffffffffffffffe;
  uVar13 = *param_4;
  uVar3 = param_4[4];
  uVar4 = param_4[8];
  uVar5 = param_4[0xc];
  pauStack_50 = (undefined1 (*) [16])param_4[0x10];
  uVar6 = *param_3;
  puStack_148 = param_3;
  pbStack_88 = param_2;
  pbStack_80 = param_1;
  uVar10 = pdb_1400cb3d0(uVar6);
  uVar11 = pdb_140a6a710(uVar6);
  if ((uVar11 < uVar10) || (pdb_140a0c9b0(uVar6), param_2 != (byte *)0x0)) {
    uStack_d8 = *param_5;
    uStack_f0 = (byte *)param_5[1];
    uStack_e8 = (undefined1 (*) [16])(uStack_f0 + 0x198);
    puStack_d0 = *(undefined **)(uStack_d8 + 0xf8);
    puStack_c8 = puStack_d0 + *(longlong *)(uStack_d8 + 0x100) * 4;
    uStack_90 = *(undefined1 *)(uStack_d8 + 0x108);
    auStack_a8 = (undefined1  [16])0x0;
    ppuStack_98 = (ulonglong **)0x0;
    uStack_e0 = uStack_f0 + 0xf8;
    uStack_c0 = 8;
    puStack_b8 = (undefined *)0x0;
    uStack_b0 = 8;
    uStack_58 = uVar6;
    pdb_1428d7260(&lStack_230,&uStack_f0);
    uStack_238 = pauStack_50;
    uStack_258 = uVar13;
    uStack_250 = uVar3;
    uStack_248 = uVar4;
    uStack_240 = uVar5;
    if (uVar11 < uVar10) {
      lVar12 = pdb_140a6a710(uStack_58);
      uVar11 = pdb_1400cb3d0(uStack_58);
      uVar10 = lVar12 + (ulonglong)(lVar12 == 0);
      do {
        uVar14 = uVar10;
        uVar10 = uVar14 * 2;
      } while (uVar14 < uVar11);
      uStack_188 = 0x20000;
      if (uVar14 < 0x20000) {
        uStack_188 = uVar14;
      }
      uStack_68 = *(undefined8 *)pbStack_80;
      **(undefined4 **)(pbStack_88 + 0x10) = *(undefined4 *)(pbStack_88 + 0x1c);
      uStack_60 = *(undefined8 *)pbStack_88;
      uStack_f8 = uStack_188;
      if (2 < *_DAT_143ca8e90) {
        lStack_180 = pdb_1400cb3d0(uStack_58);
        puStack_168 = &uStack_188;
        pcStack_160 = pdb_140f72a40;
        plStack_158 = &lStack_180;
        pcStack_150 = pdb_140f72a40;
        uStack_f0 = (byte *)0x0;
        uStack_e8 = (undefined1 (*) [16])&UNK_143464527;
        uStack_e0 = (byte *)0x1e;
        uStack_d8 = 0;
        puStack_d0 = &UNK_1434644c0;
        puStack_c8 = (undefined *)0x2c;
        uStack_c0 = 3;
        puStack_b8 = &UNK_143464527;
        uStack_b0 = 0x1e;
        auStack_a8._8_8_ = &UNK_1434644ed;
        auStack_a8._0_8_ = 0xb300000001;
        ppuStack_98 = &puStack_168;
        pdb_140f332f0(&uStack_71,&uStack_f0);
      }
      pdb_1410bd2e0(&lStack_1a0,uStack_f8);
      uVar10 = uStack_f8;
      pdb_1410bd2e0(&lStack_1b8,uStack_f8);
      pdb_1410bd2e0(&lStack_1d0,uVar10);
      pdb_1410bd2e0(&lStack_1e8,uVar10);
      pdb_1410bd570(&lStack_200,uVar10);
      pdb_1410bd2e0(&lStack_180,uVar10);
      pdb_1410bd430(&puStack_168,uVar10);
      pdb_140a6a820(&uStack_f0,uStack_58);
      uVar15 = (uint)(ushort)uStack_d8;
      pauStack_50 = pauStack_198;
      pbStack_88 = pbStack_1b0;
      plStack_128 = plStack_1a8;
      pbStack_80 = pbStack_1c8;
      plStack_120 = plStack_1c0;
      pbStack_70 = pbStack_1e0;
      plStack_118 = plStack_1d8;
      pbStack_140 = pbStack_1f8;
      plStack_110 = plStack_1f0;
      pbStack_138 = pbStack_178;
      plStack_108 = plStack_170;
      pcStack_130 = pcStack_160;
      plStack_100 = plStack_158;
      pbVar16 = uStack_f0;
      pauVar19 = uStack_e8;
      puVar20 = puStack_d0;
      while (puVar20 != (undefined *)0x0) {
        puVar20 = puVar20 + -1;
        if ((short)uVar15 == 0) {
          do {
            auVar1 = *pauVar19;
            pbVar16 = pbVar16 + -0x100;
            pauVar19 = pauVar19 + 1;
            uVar15 = (ushort)((ushort)(SUB161(auVar1 >> 7,0) & 1) |
                              (ushort)(SUB161(auVar1 >> 0xf,0) & 1) << 1 |
                              (ushort)(SUB161(auVar1 >> 0x17,0) & 1) << 2 |
                              (ushort)(SUB161(auVar1 >> 0x1f,0) & 1) << 3 |
                              (ushort)(SUB161(auVar1 >> 0x27,0) & 1) << 4 |
                              (ushort)(SUB161(auVar1 >> 0x2f,0) & 1) << 5 |
                              (ushort)(SUB161(auVar1 >> 0x37,0) & 1) << 6 |
                              (ushort)(SUB161(auVar1 >> 0x3f,0) & 1) << 7 |
                              (ushort)(SUB161(auVar1 >> 0x47,0) & 1) << 8 |
                              (ushort)(SUB161(auVar1 >> 0x4f,0) & 1) << 9 |
                              (ushort)(SUB161(auVar1 >> 0x57,0) & 1) << 10 |
                              (ushort)(SUB161(auVar1 >> 0x5f,0) & 1) << 0xb |
                              (ushort)(SUB161(auVar1 >> 0x67,0) & 1) << 0xc |
                              (ushort)(SUB161(auVar1 >> 0x6f,0) & 1) << 0xd |
                              (ushort)(SUB161(auVar1 >> 0x77,0) & 1) << 0xe |
                             (ushort)(byte)(auVar1[0xf] >> 7) << 0xf) ^ 0xffff;
          } while (uVar15 == 0);
        }
        iVar8 = 0;
        for (uVar9 = uVar15; (uVar9 & 1) == 0; uVar9 = uVar9 >> 1 | 0x80000000) {
          iVar8 = iVar8 + 1;
        }
        uVar13 = *(undefined8 *)(pbVar16 + (-0x10 - (ulonglong)(uint)(iVar8 << 4)));
        uVar9 = pdb_1409012c0(*(undefined4 *)(pbVar16 + (-8 - (ulonglong)(uint)(iVar8 << 4))));
        plVar17 = (longlong *)(ulonglong)uVar9;
        pdb_14215faa0(&uStack_f0,&uStack_258,uVar13);
        if (plStack_190 <= plVar17) {
                    /* WARNING: Subroutine does not return */
          pdb_142dc81f2(plVar17,plStack_190,&UNK_143464548);
        }
        *(undefined4 *)(*pauStack_50 + (longlong)plVar17 * 4) = uStack_f0._4_4_;
        if (plStack_128 <= plVar17) {
                    /* WARNING: Subroutine does not return */
          pdb_142dc81f2(plVar17,plStack_128,&UNK_143464560);
        }
        *(undefined4 *)(pbStack_88 + (longlong)plVar17 * 4) = (undefined4)uStack_e8;
        if (plStack_120 <= plVar17) {
                    /* WARNING: Subroutine does not return */
          pdb_142dc81f2(plVar17,plStack_120,&UNK_143464578);
        }
        *(undefined4 *)(pbStack_80 + (longlong)plVar17 * 4) = uStack_e8._4_4_;
        if (plStack_118 <= plVar17) {
                    /* WARNING: Subroutine does not return */
          pdb_142dc81f2(plVar17,plStack_118,&UNK_143464590);
        }
        *(undefined4 *)(pbStack_70 + (longlong)plVar17 * 4) = (undefined4)uStack_e0;
        if (plStack_110 <= plVar17) {
                    /* WARNING: Subroutine does not return */
          pdb_142dc81f2(plVar17,plStack_110,&UNK_1434645a8);
        }
        *(undefined4 *)(pbStack_140 + (longlong)plVar17 * 4) = uStack_e0._4_4_;
        if (plStack_108 <= plVar17) {
                    /* WARNING: Subroutine does not return */
          pdb_142dc81f2(plVar17,plStack_108,&UNK_1434645c0);
        }
        *(undefined4 *)(pbStack_138 + (longlong)plVar17 * 4) = (undefined4)uStack_d8;
        if (plStack_100 <= plVar17) {
                    /* WARNING: Subroutine does not return */
          pdb_142dc81f2(plVar17,plStack_100,&UNK_1434645d8);
        }
        uVar15 = uVar15 - 1 & uVar15;
        *(undefined4 *)(pcStack_130 + (longlong)plVar17 * 4) = (undefined4)uStack_f0;
      }
      uVar13 = pdb_140a92040(uStack_68);
      pdb_142162dd0(uStack_60,uVar13,pauStack_50,plStack_190);
      uVar13 = pdb_140a92040(uStack_68);
      pdb_142162990(uStack_60,uVar13,pbStack_88,plStack_128);
      uVar13 = pdb_140a92040(uStack_68);
      pdb_142162110(uStack_60,uVar13,pbStack_80,plStack_120);
      uVar13 = pdb_140a92040(uStack_68);
      pdb_142161450(uStack_60,uVar13,pbStack_70,plStack_118);
      uVar13 = pdb_140a92040(uStack_68);
      pdb_142162550(uStack_60,uVar13,pbStack_140,plStack_110);
      uVar13 = pdb_140a92040(uStack_68);
      pdb_142161890(uStack_60,uVar13,pbStack_138,plStack_108);
      uVar13 = pdb_140a92040(uStack_68);
      pdb_142161cd0(uStack_60,uVar13,pcStack_130,plStack_100);
      if (puStack_168 != (ulonglong *)0x0) {
        pub_1406abac0((byte *)pcStack_130,(longlong)puStack_168 << 2,4);
      }
      if (lStack_180 != 0) {
        pub_1406abac0(pbStack_138,lStack_180 << 2,4);
      }
      if (lStack_200 != 0) {
        pub_1406abac0(pbStack_140,lStack_200 << 2,4);
      }
      if (lStack_1e8 != 0) {
        pub_1406abac0(pbStack_70,lStack_1e8 << 2,4);
      }
      if (lStack_1d0 != 0) {
        pub_1406abac0(pbStack_80,lStack_1d0 << 2,4);
      }
      if (lStack_1b8 != 0) {
        pub_1406abac0(pbStack_88,lStack_1b8 << 2,4);
      }
      if (lStack_1a0 != 0) {
        pub_1406abac0((byte *)pauStack_50,lStack_1a0 << 2,4);
      }
      uVar2 = *(undefined4 *)((longlong)puStack_148 + 0x1c);
      puVar7 = (undefined4 *)puStack_148[2];
      *puVar7 = uVar2;
      pdb_140a6a750(&uStack_f0,uStack_58);
      if (uStack_f0 != (byte *)0x0) {
        pub_1406abac0((byte *)uStack_e8,(longlong)uStack_f0 << 3,8);
      }
      *puVar7 = uVar2;
      pdb_140a6a720(uStack_58,uStack_f8);
    }
    else {
      *(undefined4 *)puStack_148[2] = *(undefined4 *)((longlong)puStack_148 + 0x1c);
      pdb_140a6a750(&uStack_f0,uStack_58);
      pbStack_70 = uStack_f0;
      pauStack_50 = uStack_e8;
      if (uStack_e0 != (byte *)0x0) {
        lVar18 = (longlong)uStack_e0 << 3;
        uVar13 = *(undefined8 *)pbStack_80;
        uVar3 = *(undefined8 *)pbStack_88;
        lVar12 = 0;
        do {
          uVar10 = *(ulonglong *)(*pauStack_50 + lVar12);
          uVar11 = uVar10;
          uVar14 = pdb_140a6a860(uStack_58,uVar10);
          if ((uVar14 & 1) != 0) {
            uVar14 = uVar11 & 0xffffffff;
            pdb_14215faa0(&uStack_f0,&uStack_258,uVar10);
            pdb_1410bdf30(uVar13,uVar3,uVar14,uStack_f0._4_4_);
            pdb_1410bdd80(uVar13,uVar3,uVar11 & 0xffffffff,(ulonglong)uStack_e8 & 0xffffffff);
            pdb_1410bd870(uVar13,uVar3,uVar14,uStack_e8._4_4_);
            pdb_1410bdbd0(uVar13,uVar3,uVar11 & 0xffffffff,(ulonglong)uStack_e0 & 0xffffffff);
            pdb_1410bda20(uVar13,uVar3,uVar11 & 0xffffffff,uStack_e0._4_4_);
            pdb_1410bd6c0(uVar13,uVar3,uVar11 & 0xffffffff,uStack_d8 & 0xffffffff);
            pdb_1410be0e0(uVar13,uVar3,uVar14,(ulonglong)uStack_f0 & 0xffffffff);
          }
          lVar12 = lVar12 + 8;
        } while (lVar18 != lVar12);
      }
      if (pbStack_70 != (byte *)0x0) {
        pub_1406abac0((byte *)pauStack_50,(longlong)pbStack_70 << 3,8);
      }
    }
    if (lStack_228 != 0) {
      lVar12 = lStack_228 * 0x10 + 0x10;
      uVar10 = lStack_228 + lVar12 + 0x11;
      if (uVar10 != 0) {
        pub_1406abac0((byte *)(lStack_230 - lVar12),uVar10,0x10);
      }
    }
  }
  return;
}

