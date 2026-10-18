// VA 0x140b43c20, PDB extent 900 bytes
// country_core::systems::mode_manager::preview_wall_selection_group
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/mode_manager.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: country_core::systems::mode_manager::preview_wall_selection_group
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/mode_manager.rs
   Extent: 900 */

void pdb_140b43c20(longlong *param_1,ulonglong *param_2,undefined8 *param_3,longlong *param_4)

{
  byte *pbVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  longlong *plVar5;
  ulonglong uVar6;
  ulonglong *puVar7;
  longlong lVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  longlong lVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  longlong lVar15;
  byte *pbStack_c0;
  byte *pbStack_b8;
  ulonglong uStack_b0;
  byte *pbStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined4 uStack_88;
  undefined4 uStack_84;
  longlong *plStack_80;
  undefined8 uStack_78;
  ulonglong uStack_70;
  byte *pbStack_68;
  ulonglong uStack_60;
  ulonglong *puStack_58;
  longlong *plStack_50;
  undefined8 uStack_48;
  
  uStack_48 = 0xfffffffffffffffe;
  puVar7 = (ulonglong *)*param_3;
  lVar15 = param_3[1];
  uVar14 = *puVar7;
  uVar6 = 0;
  uVar9 = uVar14 - *(ulonglong *)(lVar15 + 0x18);
  if (uVar14 < *(ulonglong *)(lVar15 + 0x18)) {
    uVar9 = uVar6;
  }
  uVar10 = uVar14 - *(ulonglong *)(lVar15 + 0x38);
  if (uVar14 < *(ulonglong *)(lVar15 + 0x38)) {
    uVar10 = uVar6;
  }
  uVar14 = *(ulonglong *)(lVar15 + 0x10);
  uVar3 = *(ulonglong *)(lVar15 + 0x30);
  uVar11 = uVar3 - uVar10;
  if (uVar3 < uVar10) {
    uVar11 = uVar6;
  }
  uVar13 = uVar14 - uVar9;
  if (uVar14 < uVar9) {
    uVar13 = uVar6;
  }
  uVar6 = *(ulonglong *)(lVar15 + 0x40);
  lVar12 = *(longlong *)(lVar15 + 8);
  lVar15 = *(longlong *)(lVar15 + 0x28);
  *puVar7 = (uVar6 - uVar11) - uVar13;
  if (uVar14 >= uVar9 && uVar14 - uVar9 != 0 || uVar3 >= uVar10 && uVar3 - uVar10 != 0) {
    lVar15 = lVar15 + uVar10 * 0x10;
    lVar12 = lVar12 + uVar9 * 0x10;
    if (uVar14 < uVar9) {
      lVar12 = 8;
    }
    lVar8 = 0;
    if (uVar9 < uVar14) {
      lVar8 = lVar12 + -0x10 + uVar13 * 0x10;
    }
    if (uVar3 < uVar10) {
      lVar15 = 8;
    }
    lVar15 = lVar15 + -0x10 + uVar11 * 0x10;
    if (uVar3 <= uVar10) {
      lVar15 = lVar8;
    }
    *puVar7 = uVar6;
    lVar12 = *param_1;
    uVar14 = *(ulonglong *)(lVar15 + 8);
    if (uVar14 < *(ulonglong *)(lVar12 + 0x10)) {
      uVar6 = *param_2;
      uVar10 = *(ulonglong *)(uVar6 + 0x10);
      uVar9 = uVar10 * 8;
      puStack_58 = param_2;
      plStack_50 = param_4;
      if (uVar9 < 0x7ffffffffffffff9 && uVar10 >> 0x3d == 0) goto LAB_140b43d49;
      uVar14 = 0;
      do {
        uVar6 = uVar9;
        lVar12 = pdb_142dc7e2a();
LAB_140b43d49:
        lVar15 = uVar14 * 0x18 + *(longlong *)(lVar12 + 8);
        uVar4 = *(undefined8 *)(uVar6 + 8);
        if (uVar9 == 0) {
          pbStack_68 = (byte *)0x8;
          uStack_70 = 0;
          break;
        }
        pdb_14007ee60();
        uVar14 = 8;
        pbStack_68 = pub_1406abab0(uVar9,8);
        uStack_70 = uVar10;
      } while (pbStack_68 == (byte *)0x0);
      uStack_60 = 0;
      if (uVar10 != 0) {
        pub_142e32760(pbStack_68,uVar4,uVar9);
        uStack_60 = uVar10;
      }
      plVar5 = *(longlong **)(lVar15 + 8);
      puStack_58 = (ulonglong *)(plVar5 + *(longlong *)(lVar15 + 0x10));
      puVar7 = puStack_58;
LAB_140b43de3:
      plStack_80 = plVar5;
      if ((ulonglong *)plStack_80 != puVar7) {
        plVar5 = plStack_80 + 1;
        lVar15 = *plStack_80;
        uVar14 = 0;
        do {
          if (uVar9 == uVar14) {
            if (uVar10 == uStack_70) {
              pdb_142d7e8a0();
              puVar7 = puStack_58;
            }
            *(longlong *)(pbStack_68 + uVar10 * 8) = lVar15;
            uStack_60 = uVar10 + 1;
            uVar9 = uVar9 + 8;
            uVar10 = uStack_60;
            break;
          }
          pbVar1 = pbStack_68 + uVar14;
          uVar14 = uVar14 + 8;
        } while (*(longlong *)pbVar1 != lVar15);
        goto LAB_140b43de3;
      }
      pbStack_a8 = pbStack_68 + uVar10 * 8;
      pbStack_c0 = pbStack_68;
      pbStack_b8 = pbStack_68;
      uStack_b0 = uStack_70;
      pdb_1415e3b20(&uStack_a0,&pbStack_c0);
      uStack_84 = CONCAT31(uStack_84._1_3_,4);
      uStack_88 = 0x3f800000;
      *(undefined4 *)plStack_50[2] = *(undefined4 *)((longlong)plStack_50 + 0x1c);
      lVar15 = *plStack_50;
      lVar12 = *(longlong *)(lVar15 + 0x30);
      uVar4 = *(undefined8 *)(lVar15 + 0x40);
      plStack_50 = (longlong *)uStack_a0;
      uStack_78 = uStack_98;
      if (lVar12 == *(longlong *)(lVar15 + 0x20)) {
        pdb_142d7ede0(lVar15 + 0x20);
      }
      lVar8 = *(longlong *)(lVar15 + 0x28);
      *(longlong **)(lVar8 + lVar12 * 0x28) = plStack_50;
      *(undefined8 *)(lVar8 + 8 + lVar12 * 0x28) = uStack_78;
      puVar2 = (undefined8 *)(lVar8 + 0x10 + lVar12 * 0x28);
      *puVar2 = uStack_90;
      puVar2[1] = CONCAT44(uStack_84,uStack_88);
      *(undefined8 *)(lVar8 + 0x20 + lVar12 * 0x28) = uVar4;
      *(longlong *)(lVar15 + 0x30) = lVar12 + 1;
      *(longlong *)(lVar15 + 0x40) = *(longlong *)(lVar15 + 0x40) + 1;
    }
  }
  return;
}

