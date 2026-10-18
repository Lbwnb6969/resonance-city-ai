// VA 0x140c00170, PDB extent 1527 bytes
// country_core::systems::backend::vao_update::build_missing_vaos
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/backend/vao_update.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: country_core::systems::backend::vao_update::build_missing_vaos
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/backend/vao_update.rs
   Extent: 1527 */

void pdb_140c00170(longlong *param_1,longlong *param_2,undefined8 *param_3,undefined8 *param_4,
                  undefined8 *param_5,longlong param_6)

{
  uint *puVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong *plVar5;
  char *pcVar6;
  longlong lVar7;
  longlong lVar8;
  ulonglong uVar9;
  undefined8 *puVar10;
  ulonglong uVar11;
  uint *puVar12;
  char cVar13;
  int iVar14;
  longlong lVar15;
  longlong lVar16;
  longlong lVar17;
  longlong *plStack_138;
  code *pcStack_130;
  longlong lStack_128;
  undefined8 uStack_120;
  undefined4 *puStack_118;
  longlong *plStack_110;
  undefined8 uStack_108;
  longlong *plStack_100;
  undefined8 uStack_f8;
  undefined *puStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined *puStack_a8;
  undefined8 **ppuStack_a0;
  longlong lStack_98;
  longlong lStack_90;
  undefined4 uStack_88;
  undefined4 uStack_84;
  longlong lStack_80;
  longlong lStack_78;
  longlong lStack_70;
  longlong lStack_68;
  longlong lStack_60;
  longlong lStack_58;
  uint uStack_50;
  undefined1 uStack_4a;
  char cStack_49;
  undefined8 uStack_48;
  
  uStack_48 = 0xfffffffffffffffe;
  lVar8 = *param_1;
  puVar12 = *(uint **)(lVar8 + 0xf8);
  lStack_78 = *param_2;
  plStack_100 = *(longlong **)(param_6 + 8);
  if (plStack_100 == (longlong *)0x0) {
    plStack_100 = *(longlong **)(param_6 + 0x10);
  }
  lVar15 = param_1[1];
  puVar1 = puVar12 + *(longlong *)(lVar8 + 0x100);
  cStack_49 = *(char *)(lVar8 + 0x108);
  uStack_88 = *(undefined4 *)((longlong)param_5 + 0x1c);
  uStack_120 = *param_5;
  puStack_118 = (undefined4 *)param_5[2];
  plStack_110 = (longlong *)*param_4;
  uStack_108 = *param_3;
  lStack_128 = lStack_78 + 0x20;
  lVar17 = 0;
  lStack_98 = 8;
  lStack_90 = 8;
  lStack_60 = 0;
  lStack_58 = 0;
  uVar9 = 0;
  cVar13 = cStack_49;
  lStack_70 = lVar15;
  do {
    if (cVar13 == '\0') {
      if ((int)uVar9 == (int)lVar17) {
        do {
          if (puVar12 == puVar1) {
            return;
          }
          uVar2 = *puVar12;
          puVar12 = puVar12 + 1;
          lVar17 = *(longlong *)(*(longlong *)(lVar15 + 0x100) + 0x58 + (ulonglong)uVar2 * 0xa0);
        } while (lVar17 == 0);
        lVar7 = *(longlong *)(lVar15 + 0x100) + (ulonglong)uVar2 * 0xa0;
        uVar9 = (ulonglong)*(uint *)(lVar7 + 0x94);
        lVar16 = *(longlong *)(lVar15 + 0x1a0) + uVar9 * 0x48;
        uVar9 = *(ulonglong *)(*(longlong *)(lVar15 + 0x1a0) + 0x40 + uVar9 * 0x48);
        if ((*(ulonglong *)(lVar8 + 0x110) < uVar9) &&
           (uVar11 = *(ulonglong *)
                      (*(longlong *)(lVar16 + 0x38) + *(ulonglong *)(lVar8 + 0x110) * 8),
           uVar11 != 0)) {
          lStack_60 = *(longlong *)(*(longlong *)(lVar16 + 0x18) + 0x10 + ~uVar11 * 0x30);
          uVar11 = *(ulonglong *)(lVar8 + 0x118);
          if (uVar9 <= uVar11) goto LAB_140c003e1;
LAB_140c003a3:
          uVar9 = *(ulonglong *)(*(longlong *)(lVar16 + 0x38) + uVar11 * 8);
          if (uVar9 == 0) goto LAB_140c003e1;
          lStack_58 = *(longlong *)(*(longlong *)(lVar16 + 0x18) + 0x10 + ~uVar9 * 0x30);
        }
        else {
          lStack_60 = 0;
          uVar11 = *(ulonglong *)(lVar8 + 0x118);
          if (uVar11 < uVar9) goto LAB_140c003a3;
LAB_140c003e1:
          lStack_58 = 0;
        }
        lStack_90 = *(longlong *)(lVar7 + 0x50);
        uVar9 = 0;
      }
      iVar14 = (int)uVar9;
      puVar10 = (undefined8 *)(lStack_90 + uVar9 * 0x10);
      uVar9 = (ulonglong)~*(uint *)(lStack_90 + 8 + uVar9 * 0x10);
    }
    else {
      if ((int)uVar9 == (int)lVar17) {
        do {
          if (puVar12 == puVar1) {
            return;
          }
          uVar2 = *puVar12;
          puVar12 = puVar12 + 1;
          lVar17 = *(longlong *)(*(longlong *)(lVar15 + 0x1a0) + 0x10 + (ulonglong)uVar2 * 0x48);
        } while (lVar17 == 0);
        lVar16 = *(longlong *)(lVar15 + 0x1a0) + (ulonglong)uVar2 * 0x48;
        uVar9 = *(ulonglong *)(lVar16 + 0x40);
        if ((*(ulonglong *)(lVar8 + 0x110) < uVar9) &&
           (uVar11 = *(ulonglong *)
                      (*(longlong *)(lVar16 + 0x38) + *(ulonglong *)(lVar8 + 0x110) * 8),
           uVar11 != 0)) {
          lStack_60 = *(longlong *)(*(longlong *)(lVar16 + 0x18) + 0x10 + ~uVar11 * 0x30);
          uVar11 = *(ulonglong *)(lVar8 + 0x118);
          if (uVar9 <= uVar11) goto LAB_140c003c6;
LAB_140c00371:
          uVar9 = *(ulonglong *)(*(longlong *)(lVar16 + 0x38) + uVar11 * 8);
          if (uVar9 == 0) goto LAB_140c003c6;
          lStack_58 = *(longlong *)(*(longlong *)(lVar16 + 0x18) + 0x10 + ~uVar9 * 0x30);
        }
        else {
          lStack_60 = 0;
          uVar11 = *(ulonglong *)(lVar8 + 0x118);
          if (uVar11 < uVar9) goto LAB_140c00371;
LAB_140c003c6:
          lStack_58 = 0;
        }
        lStack_98 = *(longlong *)(lVar16 + 8);
        uVar9 = 0;
      }
      iVar14 = (int)uVar9;
      puVar10 = (undefined8 *)(lStack_98 + uVar9 * 8);
    }
    pcVar6 = (char *)(uVar9 * 0x10 + lStack_60);
    lVar16 = uVar9 * 0x38 + lStack_58;
    uVar3 = *puVar10;
    if ((int)uVar3 == 0) {
      return;
    }
    uStack_50 = iVar14 + 1;
    uVar9 = (ulonglong)uStack_50;
    if (*pcVar6 == '\0') {
      uVar4 = *(undefined8 *)(pcVar6 + 8);
      uStack_f8 = uVar4;
      pdb_140a2b260(lStack_78,uVar4);
      lVar7 = pdb_140bf4880(lStack_128,&uStack_f8);
      lVar15 = lStack_70;
      if ((lVar7 == 0) || (*(longlong *)(lVar7 + 0x10) != 0)) {
        *puStack_118 = uStack_88;
        lVar7 = *plStack_110 + 0x10;
        uStack_84 = *(undefined4 *)(lVar16 + 0x34);
        lStack_68 = lVar8;
        lVar8 = pdb_140e72a60(lVar16 + 8);
        uVar9 = pdb_140a4f9c0(uStack_120,lVar7,lStack_78,uVar4,uStack_108,uStack_84,
                              *(undefined4 *)(*(longlong *)(lVar8 + 0x18) + 0xe8),
                              *(undefined4 *)(*(longlong *)(lVar8 + 0x18) + 0xf0));
        lVar8 = lStack_68;
        lVar15 = lStack_70;
        plVar5 = plStack_100;
        if ((uVar9 & 1) == 0) {
          lVar8 = plStack_100[2];
          if ((ulonglong)(*plStack_100 - lVar8) < 0x20) {
            pdb_142d7f1b0(plStack_100,lVar8,0x20,1,1);
          }
          lVar15 = plVar5[1];
          *(code **)(lVar15 + lVar8) = pdb_14160c8d0;
          *(undefined8 *)(lVar15 + 8 + lVar8) = uVar3;
          *(longlong *)(lVar15 + 0x10 + lVar8) = lVar7;
          *(undefined1 *)(lVar15 + 0x18 + lVar8) = 0;
          plVar5[2] = lVar8 + 0x20;
          lVar15 = lStack_70;
          lVar8 = lStack_68;
        }
        else {
          lStack_80 = lVar7;
          if (1 < *_DAT_143ca8e90) {
            plStack_138 = &lStack_80;
            pcStack_130 = pdb_140f36c30;
            uStack_f8 = 0;
            puStack_f0 = &UNK_143067dda;
            uStack_e8 = 0x2a;
            uStack_e0 = 0;
            puStack_d8 = &UNK_143067d75;
            uStack_d0 = 0x35;
            uStack_c8 = 2;
            puStack_c0 = &UNK_143067dda;
            uStack_b8 = 0x2a;
            uStack_b0 = 0x2c00000001;
            puStack_a8 = &UNK_143067e1d;
            ppuStack_a0 = &plStack_138;
            pdb_140f332f0(&uStack_4a,&uStack_f8);
          }
          pdb_140f36c40(&lStack_80);
        }
        uVar9 = (ulonglong)uStack_50;
        cVar13 = cStack_49;
      }
      else {
        uVar9 = (ulonglong)uStack_50;
        cVar13 = cStack_49;
        if (4 < *_DAT_143ca8e90) {
          uStack_f8 = 0;
          puStack_f0 = &UNK_143067dda;
          uStack_e8 = 0x2a;
          uStack_e0 = 0;
          puStack_d8 = &UNK_143067d75;
          uStack_d0 = 0x35;
          uStack_c8 = 5;
          puStack_c0 = &UNK_143067dda;
          uStack_b8 = 0x2a;
          uStack_b0 = 0x1f00000001;
          puStack_a8 = &UNK_143067e34;
          ppuStack_a0 = (longlong **)0x41;
          pdb_140f332f0(&uStack_4a,&uStack_f8);
          uVar9 = (ulonglong)uStack_50;
          cVar13 = cStack_49;
        }
      }
    }
  } while( true );
}

