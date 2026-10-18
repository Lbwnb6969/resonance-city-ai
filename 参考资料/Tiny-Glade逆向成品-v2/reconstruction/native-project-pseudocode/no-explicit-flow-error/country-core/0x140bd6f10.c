// VA 0x140bd6f10, PDB extent 3424 bytes
// country_core::startup::install_mod_clutter::install_mod_clutter
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/startup/install_mod_clutter.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: country_core::startup::install_mod_clutter::install_mod_clutter
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/startup/install_mod_clutter.rs
   Extent: 3424 */

void pdb_140bd6f10(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
                  undefined8 *param_5,longlong *param_6,undefined8 *param_7,undefined8 *param_8,
                  undefined8 *param_9,undefined8 *param_10,undefined8 *param_11,undefined8 *param_12
                  ,longlong *param_13,undefined8 *param_14,longlong *param_15)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  undefined4 *puVar4;
  undefined8 *puVar5;
  undefined4 uVar6;
  longlong *plVar7;
  char cVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong extraout_RAX;
  longlong *plVar11;
  code *pcVar12;
  undefined8 **arg1;
  ulonglong uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  longlong lVar16;
  longlong lVar17;
  longlong lVar18;
  longlong lVar19;
  longlong lVar20;
  longlong lStack_1a8;
  undefined4 *puStack_1a0;
  undefined8 *puStack_198;
  undefined1 auStack_190 [16];
  longlong lStack_180;
  undefined8 *puStack_178;
  undefined4 uStack_16c;
  undefined4 *puStack_168;
  undefined4 *puStack_160;
  undefined8 uStack_158;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  undefined4 uStack_144;
  longlong lStack_140;
  undefined4 uStack_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined8 *puStack_128;
  longlong *plStack_120;
  undefined8 *puStack_118;
  longlong lStack_110;
  undefined *puStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined *puStack_f0;
  code *pcStack_e8;
  code *pcStack_e0;
  undefined *puStack_d8;
  undefined8 *puStack_d0;
  longlong lStack_b8;
  byte *pbStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  longlong lStack_70;
  undefined4 uStack_68;
  undefined4 uStack_64;
  code *pcStack_60;
  longlong *plStack_58;
  undefined1 uStack_4c;
  undefined1 uStack_4b;
  undefined1 uStack_4a;
  undefined1 uStack_49;
  undefined8 uStack_48;
  
  uStack_48 = 0xfffffffffffffffe;
  if (DAT_143cb2d0c != '\0') {
    return;
  }
  lVar19 = param_2[1];
  uVar10 = *(ulonglong *)*param_2;
  uVar15 = 0;
  uVar13 = uVar10 - *(ulonglong *)(lVar19 + 0x18);
  if (uVar10 < *(ulonglong *)(lVar19 + 0x18)) {
    uVar13 = uVar15;
  }
  uVar9 = uVar10 - *(ulonglong *)(lVar19 + 0x38);
  if (uVar10 < *(ulonglong *)(lVar19 + 0x38)) {
    uVar9 = uVar15;
  }
  uVar10 = *(ulonglong *)(lVar19 + 0x10) - uVar13;
  if (*(ulonglong *)(lVar19 + 0x10) < uVar13) {
    uVar10 = uVar15;
  }
  uVar13 = *(ulonglong *)(lVar19 + 0x30) - uVar9;
  if (*(ulonglong *)(lVar19 + 0x30) < uVar9) {
    uVar13 = uVar15;
  }
  *(ulonglong *)*param_2 = *(ulonglong *)(lVar19 + 0x40);
  uStack_16c = *(undefined4 *)((longlong)param_1 + 0x1c);
  puStack_1a0 = (undefined4 *)param_1[2];
  *puStack_1a0 = uStack_16c;
  plStack_58 = (longlong *)*param_1;
  *(byte *)(plStack_58 + 4) = *(byte *)(plStack_58 + 4) | uVar13 + uVar10 != 0;
  puVar1 = (ulonglong *)*param_14;
  lVar19 = param_14[1];
  uVar10 = *puVar1;
  uVar13 = uVar10 - *(ulonglong *)(lVar19 + 0x18);
  if (uVar10 < *(ulonglong *)(lVar19 + 0x18)) {
    uVar13 = uVar15;
  }
  uVar9 = uVar10 - *(ulonglong *)(lVar19 + 0x38);
  if (uVar10 < *(ulonglong *)(lVar19 + 0x38)) {
    uVar9 = uVar15;
  }
  lVar18 = uVar13 * 0x20 + *(longlong *)(lVar19 + 8);
  uVar10 = *(ulonglong *)(lVar19 + 0x10);
  uVar14 = uVar10 - uVar13;
  if (uVar10 < uVar13) {
    uVar14 = uVar15;
  }
  uVar2 = *(ulonglong *)(lVar19 + 0x30);
  if (uVar10 < uVar13) {
    lVar18 = 8;
  }
  lVar16 = uVar9 * 0x20 + *(longlong *)(lVar19 + 0x28);
  if (uVar2 < uVar9) {
    lVar16 = 8;
  }
  pbStack_b0 = (byte *)0x0;
  uVar10 = uVar2 - uVar9;
  if (uVar2 < uVar9) {
    uVar10 = uVar15;
  }
  *puVar1 = (*(longlong *)(lVar19 + 0x40) - uVar10) - uVar14;
  lStack_b8 = uVar10 * 0x20 + lVar16;
  uStack_64 = *(undefined4 *)((longlong)param_7 + 0x1c);
  pcStack_60 = (code *)*param_7;
  puStack_160 = (undefined4 *)param_7[2];
  uStack_68 = *(undefined4 *)((longlong)param_12 + 0x1c);
  lStack_70 = *param_12;
  puStack_168 = (undefined4 *)param_12[2];
  lVar19 = lVar18;
  puStack_198 = param_3;
  puStack_178 = param_4;
  do {
    plVar7 = plStack_58;
    uVar6 = uStack_16c;
    puVar5 = puStack_198;
    puVar4 = puStack_1a0;
    if ((lVar19 == 0) || (lVar19 == uVar14 * 0x20 + lVar18)) {
      if ((lVar16 == 0) || (lVar16 == lStack_b8)) {
        if (((ulonglong)pbStack_b0 & 1) != 0) {
          puStack_128 = (undefined8 *)*puStack_198;
          *(undefined4 *)puStack_178[2] = *(undefined4 *)((longlong)puStack_178 + 0x1c);
          plStack_120 = (longlong *)*puStack_178;
          *(undefined4 *)param_5[2] = *(undefined4 *)((longlong)param_5 + 0x1c);
          puStack_118 = (undefined8 *)*param_5;
          *(undefined4 *)param_6[2] = *(undefined4 *)((longlong)param_6 + 0x1c);
          lStack_110 = *param_6;
          *puStack_160 = uStack_64;
          *(undefined4 *)param_8[2] = *(undefined4 *)((longlong)param_8 + 0x1c);
          uStack_100 = *param_8;
          *(undefined4 *)param_9[2] = *(undefined4 *)((longlong)param_9 + 0x1c);
          uStack_f8 = *param_9;
          *(undefined4 *)param_10[2] = *(undefined4 *)((longlong)param_10 + 0x1c);
          puStack_f0 = (undefined *)*param_10;
          *(undefined4 *)param_11[2] = *(undefined4 *)((longlong)param_11 + 0x1c);
          pcStack_e8 = (code *)*param_11;
          *puStack_168 = uStack_68;
          puStack_108 = pcStack_60;
          pcStack_e0 = (code *)lStack_70;
          pdb_141b054e0(&puStack_128,CONCAT71((int7)((ulonglong)puStack_118 >> 8),1));
          *(undefined4 *)param_13[2] = *(undefined4 *)((longlong)param_13 + 0x1c);
          lVar19 = *param_13;
          lVar18 = *(longlong *)(lVar19 + 0x30);
          uVar3 = *(undefined8 *)(lVar19 + 0x40);
          if (lVar18 == *(longlong *)(lVar19 + 0x20)) {
            pdb_142d7e8a0(lVar19 + 0x20);
          }
          *(undefined8 *)(*(longlong *)(lVar19 + 0x28) + lVar18 * 8) = uVar3;
          *(longlong *)(lVar19 + 0x30) = lVar18 + 1;
          *(longlong *)(lVar19 + 0x40) = *(longlong *)(lVar19 + 0x40) + 1;
        }
        *puVar4 = uVar6;
        uStack_158 = *plVar7;
        *plVar7 = -0x8000000000000000;
        if (!SBORROW8(0,uStack_158)) {
          uStack_150 = (undefined4)plVar7[1];
          uStack_14c = *(undefined4 *)((longlong)plVar7 + 0xc);
          uStack_148 = (undefined4)plVar7[2];
          uStack_144 = *(undefined4 *)((longlong)plVar7 + 0x14);
          lStack_140 = plVar7[3];
          puStack_128 = (undefined8 *)*puVar5;
          *(undefined4 *)puStack_178[2] = *(undefined4 *)((longlong)puStack_178 + 0x1c);
          plStack_120 = (longlong *)*puStack_178;
          *(undefined4 *)param_5[2] = *(undefined4 *)((longlong)param_5 + 0x1c);
          puStack_118 = (undefined8 *)*param_5;
          *(undefined4 *)param_6[2] = *(undefined4 *)((longlong)param_6 + 0x1c);
          lStack_110 = *param_6;
          *puStack_160 = uStack_64;
          *(undefined4 *)param_8[2] = *(undefined4 *)((longlong)param_8 + 0x1c);
          uStack_100 = *param_8;
          *(undefined4 *)param_9[2] = *(undefined4 *)((longlong)param_9 + 0x1c);
          uStack_f8 = *param_9;
          *(undefined4 *)param_10[2] = *(undefined4 *)((longlong)param_10 + 0x1c);
          puStack_f0 = (undefined *)*param_10;
          *(undefined4 *)param_11[2] = *(undefined4 *)((longlong)param_11 + 0x1c);
          pcStack_e8 = (code *)*param_11;
          *puStack_168 = uStack_68;
          puStack_108 = pcStack_60;
          pcStack_e0 = (code *)lStack_70;
          uStack_4b = 1;
          cVar8 = pdb_141b05c30(&uStack_158,&UNK_143064e97,3,&puStack_128);
          if (cVar8 != '\0') {
            if (cVar8 == '\x01') {
              *(undefined4 *)param_13[2] = *(undefined4 *)((longlong)param_13 + 0x1c);
              lVar19 = *param_13;
              lVar18 = *(longlong *)(lVar19 + 0x30);
              uVar3 = *(undefined8 *)(lVar19 + 0x40);
              if (lVar18 == *(longlong *)(lVar19 + 0x20)) {
                uStack_4b = 1;
                pdb_142d7e8a0(lVar19 + 0x20);
              }
              *(undefined8 *)(*(longlong *)(lVar19 + 0x28) + lVar18 * 8) = uVar3;
              *(longlong *)(lVar19 + 0x30) = lVar18 + 1;
              *(longlong *)(lVar19 + 0x40) = *(longlong *)(lVar19 + 0x40) + 1;
            }
            pdb_14099abd0(&uStack_158);
            return;
          }
          uStack_98 = (undefined8 *)CONCAT44(uStack_144,uStack_148);
          pcStack_90 = (code *)lStack_140;
          uStack_a8 = (longlong *)uStack_158;
          uStack_a0 = (code *)CONCAT44(uStack_14c,uStack_150);
          *puVar4 = uVar6;
          if (!SBORROW8(0,*plVar7)) {
            pdb_14099abd0(plStack_58);
          }
          plStack_58[2] = (longlong)uStack_98;
          plStack_58[3] = (longlong)pcStack_90;
          *plStack_58 = (longlong)uStack_a8;
          plStack_58[1] = (longlong)uStack_a0;
          return;
        }
        if ((char)plVar7[4] == '\0') {
          return;
        }
        *puVar4 = uVar6;
        *(undefined1 *)(plVar7 + 4) = 0;
        pdb_140d8ead0(&uStack_a8);
        pcVar12 = uStack_a0;
        lStack_70 = (longlong)uStack_98;
        pcStack_e0 = uStack_a0 + (longlong)uStack_98 * 0xb0;
        puStack_128 = (undefined8 *)0x0;
        puStack_108 = (undefined *)0x0;
        pcStack_e8 = uStack_a0;
        arg1 = &puStack_128;
        pdb_1416017a0(auStack_190);
        lStack_b8 = 0;
        pcStack_60 = pcVar12;
        while (lStack_70 != lStack_b8) {
          lStack_b8 = lStack_b8 + 1;
          pdb_1404b3c90(pcVar12);
          pcVar12 = pcVar12 + 0xb0;
        }
        if (uStack_a8 != (longlong *)0x0) {
          arg1 = (undefined8 **)((longlong)uStack_a8 * 0xb0);
          pub_1406abac0((byte *)pcStack_60,(ulonglong)arg1,8);
        }
        lVar19 = *param_15;
        uStack_49 = 1;
        plVar11 = (longlong *)pdb_140f3bda0();
        if ((char)plVar11[2] == '\x01') {
          uStack_88 = *plVar11;
          arg1 = (undefined8 **)plVar11[1];
        }
        else {
          uStack_49 = 1;
          uStack_88 = pdb_140f4fd10();
          *plVar11 = uStack_88;
          plVar11[1] = (longlong)arg1;
          *(undefined1 *)(plVar11 + 2) = 1;
        }
        *plVar11 = uStack_88 + 1;
        if (lVar19 == 0) {
          param_15 = (longlong *)0x0;
        }
        uStack_98 = (undefined8 *)_DAT_143064e50;
        pcStack_90 = (code *)_UNK_143064e58;
        uStack_a8._0_4_ = _DAT_143064e40;
        uStack_a8._4_4_ = _UNK_143064e44;
        uStack_a0._0_4_ = _UNK_143064e48;
        uStack_a0._4_4_ = _UNK_143064e4c;
        puStack_128 = (undefined8 *)0x1;
        puStack_118 = (undefined8 *)0x2;
        pcStack_e8 = (code *)0x2;
        plStack_120 = param_15;
        uStack_80 = arg1;
        pdb_1417a7bc0(&uStack_a8,&puStack_128);
        uStack_158 = CONCAT44(uStack_a8._4_4_,(undefined4)uStack_a8);
        uStack_150 = (undefined4)uStack_a0;
        uStack_14c = uStack_a0._4_4_;
        uStack_148 = (undefined4)uStack_98;
        uStack_144 = uStack_98._4_4_;
        lStack_140 = (longlong)pcStack_90;
        uStack_138 = (undefined4)uStack_88;
        uStack_134 = uStack_88._4_4_;
        uStack_130 = (undefined4)uStack_80;
        uStack_12c = uStack_80._4_4_;
        puStack_128 = param_8;
        puStack_118 = param_11;
        uStack_4a = 1;
        plStack_120 = &uStack_158;
        pdb_1415e1910(auStack_190,&puStack_128);
        if (lStack_180 != 0) {
          if (2 < *_DAT_143ca8e90) {
            lStack_1a8 = lStack_180;
            uStack_a8 = &lStack_1a8;
            uStack_a0 = pdb_140f72a40;
            puStack_128 = (undefined8 *)0x0;
            plStack_120 = (longlong *)&UNK_143064ecb;
            puStack_118 = (undefined8 *)0x2a;
            lStack_110 = 0;
            puStack_108 = &UNK_143064e60;
            uStack_100 = 0x36;
            uStack_f8 = 3;
            puStack_f0 = &UNK_143064ecb;
            pcStack_e8 = (code *)0x2a;
            pcStack_e0 = (code *)0xc400000001;
            puStack_d8 = &UNK_143064e9a;
            uStack_4a = 1;
            puStack_d0 = &uStack_a8;
            pdb_140f332f0(&uStack_4c,&puStack_128);
          }
          uStack_98 = (undefined8 *)lStack_180;
          plVar11 = *(longlong **)*puVar5;
          LOCK();
          lVar19 = *plVar11;
          *plVar11 = *plVar11 + 1;
          UNLOCK();
          if (*plVar11 != 0 && SCARRY8(lVar19,1) == *plVar11 < 0) {
            uStack_4a = 0;
            pdb_141b06360(&puStack_128,&uStack_a8);
            uStack_a8 = puStack_128;
            uStack_a0 = (code *)plStack_120;
            uStack_98 = puStack_118;
            pcStack_90 = (code *)lStack_110;
            *puVar4 = uVar6;
            if (!SBORROW8(0,*plVar7)) {
              pdb_14099abd0(plStack_58);
            }
            plStack_58[2] = (longlong)uStack_98;
            plStack_58[3] = (longlong)pcStack_90;
            *plStack_58 = (longlong)uStack_a8;
            plStack_58[1] = (longlong)uStack_a0;
            lVar19 = CONCAT44(uStack_14c,uStack_150);
            if (lVar19 == 0) {
              return;
            }
            uVar10 = lVar19 * 8 + 0x17U & 0xfffffffffffffff0;
            uVar13 = lVar19 + uVar10 + 0x11;
            if (uVar13 == 0) {
              return;
            }
            pub_1406abac0((byte *)(uStack_158 - uVar10),uVar13,0x10);
            return;
          }
                    /* WARNING: Does not return */
          pcVar12 = (code *)invalidInstructionException();
          (*pcVar12)();
        }
        lVar19 = CONCAT44(uStack_14c,uStack_150);
        if (lVar19 != 0) {
          uVar10 = lVar19 * 8 + 0x17U & 0xfffffffffffffff0;
          uVar13 = lVar19 + uVar10 + 0x11;
          if (uVar13 != 0) {
            pub_1406abac0((byte *)(uStack_158 - uVar10),uVar13,0x10);
          }
        }
        pdb_140967580(auStack_190);
        return;
      }
      lVar17 = lVar16 + 0x20;
      lVar20 = 0;
    }
    else {
      lVar20 = lVar19 + 0x20;
      lVar17 = lVar16;
      lVar16 = lVar19;
    }
    *puVar1 = *puVar1 + 1;
    uVar3 = *param_8;
    pdb_140c264a0(&uStack_158,uVar3,lVar16);
    lVar19 = lVar20;
    if (CONCAT44(uStack_144,uStack_148) == 0) {
      lVar16 = lVar17;
      if (uStack_158 != 0) {
        pub_1406abac0((byte *)CONCAT44(uStack_14c,uStack_150),uStack_158 << 3,8);
      }
    }
    else {
      pbStack_b0 = (byte *)CONCAT44(uStack_14c,uStack_150);
      *(undefined4 *)param_8[2] = *(undefined4 *)((longlong)param_8 + 0x1c);
      *puStack_160 = uStack_64;
      *puStack_168 = uStack_68;
      pdb_141b05a50(pbStack_b0,CONCAT44(uStack_144,uStack_148),uVar3,pcStack_60,lStack_70);
      uVar10 = *_DAT_143ca8e90;
      if (2 < uVar10) {
        uStack_a8 = (longlong *)auStack_190;
        uStack_a0 = pdb_140f72a40;
        pcStack_90 = pdb_141351190;
        puStack_128 = (undefined8 *)0x0;
        plStack_120 = (longlong *)&UNK_143064ecb;
        puStack_118 = (undefined8 *)0x2a;
        lStack_110 = 0;
        puStack_108 = &UNK_143064e60;
        uStack_100 = 0x36;
        uStack_f8 = 3;
        puStack_f0 = &UNK_143064ecb;
        pcStack_e8 = (code *)0x2a;
        pcStack_e0 = (code *)0x6d00000001;
        puStack_d8 = &UNK_143064ef5;
        puStack_d0 = &uStack_a8;
        uStack_98 = (undefined8 *)lVar16;
        uVar10 = pdb_140f332f0(&uStack_4c,&puStack_128);
      }
      if (uStack_158 != 0) {
        pub_1406abac0(pbStack_b0,uStack_158 << 3,8);
        uVar10 = extraout_RAX;
      }
      pbStack_b0 = (byte *)CONCAT71((int7)(uVar10 >> 8),1);
      lVar16 = lVar17;
    }
  } while( true );
}

