// VA 0x14198a630, PDB extent 2548 bytes
// country_core::systems::paths::record_path_history::record_path_history
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/paths/record_path_history.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::systems::paths::record_path_history::record_path_history
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/paths/record_path_history.rs
   Extent: 2548 */

void pdb_14198a630(longlong *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
                  undefined8 *param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  ulonglong *puVar4;
  longlong lVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  longlong lVar8;
  longlong lVar9;
  byte *pbVar10;
  byte *pbVar11;
  byte *pbVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined4 uStack_88;
  undefined4 uStack_84;
  byte *pbStack_80;
  undefined4 uStack_74;
  undefined8 uStack_70;
  
  uStack_70 = 0xfffffffffffffffe;
  puVar4 = (ulonglong *)*param_2;
  lVar5 = param_2[1];
  uVar6 = *puVar4;
  uVar15 = 0;
  uVar13 = uVar6 - *(ulonglong *)(lVar5 + 0x18);
  if (uVar6 < *(ulonglong *)(lVar5 + 0x18)) {
    uVar13 = uVar15;
  }
  uVar14 = uVar6 - *(ulonglong *)(lVar5 + 0x38);
  if (uVar6 < *(ulonglong *)(lVar5 + 0x38)) {
    uVar14 = uVar15;
  }
  uVar6 = *(ulonglong *)(lVar5 + 0x30);
  uVar16 = uVar6 - uVar14;
  if (uVar6 < uVar14) {
    uVar16 = uVar15;
  }
  uVar7 = *(ulonglong *)(lVar5 + 0x10);
  uVar17 = uVar7 - uVar13;
  if (uVar7 < uVar13) {
    uVar17 = uVar15;
  }
  uVar15 = *(ulonglong *)(lVar5 + 0x40);
  *puVar4 = uVar15 - (uVar17 + uVar16);
  if (uVar7 >= uVar13 && uVar7 - uVar13 != 0 || uVar6 >= uVar14 && uVar6 - uVar14 != 0) {
    *puVar4 = uVar15;
    lVar5 = *param_1;
    uStack_74 = *(undefined4 *)(lVar5 + 0x68);
    uVar1 = *(undefined4 *)(lVar5 + 0x6c);
    *(undefined4 *)param_1[2] = *(undefined4 *)((longlong)param_1 + 0x1c);
    lVar8 = *(longlong *)(lVar5 + 0x48);
    pbVar12 = *(byte **)(lVar5 + 0x50);
    lVar9 = *(longlong *)(lVar5 + 0x58);
    uVar2 = *(undefined4 *)(lVar5 + 0x60);
    pbStack_80 = (byte *)CONCAT71(pbStack_80._1_7_,*(undefined1 *)(lVar5 + 100));
    *(undefined8 *)(lVar5 + 0x48) = 0;
    *(undefined8 *)(lVar5 + 0x50) = 4;
    *(undefined8 *)(lVar5 + 0x58) = 0;
    *(undefined4 *)(lVar5 + 0x60) = 0;
    *(undefined1 *)(lVar5 + 100) = 0;
    *(undefined4 *)param_1[6] = *(undefined4 *)((longlong)param_1 + 0x3c);
    lVar5 = param_1[4];
    uVar6 = lVar9 * 0xc;
    uVar13 = uVar6;
    pbVar10 = (byte *)pdb_140f606e0(4);
    pbVar11 = pbVar10;
    if (uVar13 != 0) {
      pdb_14007ee60();
      pbVar11 = pub_1406abab0(uVar13,(ulonglong)pbVar10);
    }
    if (pbVar11 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
      pdb_142dc7e11(pbVar10,uVar13);
    }
    pbVar11[0] = 1;
    pbVar11[1] = 0;
    pbVar11[2] = 0;
    pbVar11[3] = 0;
    pbVar11[4] = 0;
    pbVar11[5] = 0;
    pbVar11[6] = 0;
    pbVar11[7] = 0;
    pbVar11[8] = 1;
    pbVar11[9] = 0;
    pbVar11[10] = 0;
    pbVar11[0xb] = 0;
    pbVar11[0xc] = 0;
    pbVar11[0xd] = 0;
    pbVar11[0xe] = 0;
    pbVar11[0xf] = 0;
    pub_142e32760(pbVar11 + 0x10,pbVar12,uVar6);
    if (lVar8 != 0) {
      pub_1406abac0(pbVar12,lVar8 * 0xc,4);
    }
    uStack_b0 = 1;
    uStack_a8 = (byte *)0x1;
    uStack_a0 = uStack_74;
    uStack_84 = CONCAT31(uStack_84._1_3_,pbStack_80._0_1_);
    uStack_9c = uVar1;
    uStack_98 = pbVar11;
    uStack_90 = lVar9;
    uStack_88 = uVar2;
    pdb_14007ee60();
    pbVar12 = pub_1406abab0(0x30,8);
    if (pbVar12 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
      pdb_142dc7e11(8,0x30);
    }
    *(undefined4 *)(pbVar12 + 0x20) = (undefined4)uStack_90;
    *(undefined4 *)(pbVar12 + 0x24) = uStack_90._4_4_;
    *(undefined4 *)(pbVar12 + 0x28) = uStack_88;
    *(undefined4 *)(pbVar12 + 0x2c) = uStack_84;
    *(undefined4 *)(pbVar12 + 0x10) = uStack_a0;
    *(undefined4 *)(pbVar12 + 0x14) = uStack_9c;
    *(undefined4 *)(pbVar12 + 0x18) = (undefined4)uStack_98;
    *(undefined4 *)(pbVar12 + 0x1c) = uStack_98._4_4_;
    *(undefined4 *)pbVar12 = (undefined4)uStack_b0;
    *(undefined4 *)(pbVar12 + 4) = uStack_b0._4_4_;
    *(undefined4 *)(pbVar12 + 8) = (undefined4)uStack_a8;
    *(undefined4 *)(pbVar12 + 0xc) = uStack_a8._4_4_;
    uStack_b0 = 1;
    uStack_a8 = pbVar12;
    pdb_140ae5180(lVar5,&uStack_b0);
  }
  puVar4 = (ulonglong *)*param_3;
  lVar5 = param_3[1];
  uVar6 = *puVar4;
  uVar15 = 0;
  uVar13 = uVar6 - *(ulonglong *)(lVar5 + 0x18);
  if (uVar6 < *(ulonglong *)(lVar5 + 0x18)) {
    uVar13 = uVar15;
  }
  uVar14 = uVar6 - *(ulonglong *)(lVar5 + 0x38);
  if (uVar6 < *(ulonglong *)(lVar5 + 0x38)) {
    uVar14 = uVar15;
  }
  uVar6 = *(ulonglong *)(lVar5 + 0x30);
  uVar16 = uVar6 - uVar14;
  if (uVar6 < uVar14) {
    uVar16 = uVar15;
  }
  uVar7 = *(ulonglong *)(lVar5 + 0x10);
  uVar17 = uVar7 - uVar13;
  if (uVar7 < uVar13) {
    uVar17 = uVar15;
  }
  uVar15 = *(ulonglong *)(lVar5 + 0x40);
  *puVar4 = uVar15 - (uVar17 + uVar16);
  if (uVar7 >= uVar13 && uVar7 - uVar13 != 0 || uVar6 >= uVar14 && uVar6 - uVar14 != 0) {
    *puVar4 = uVar15;
    lVar5 = *param_1;
    uStack_74 = *(undefined4 *)(lVar5 + 0x4d8);
    uVar1 = *(undefined4 *)(lVar5 + 0x4dc);
    *(undefined4 *)param_1[2] = *(undefined4 *)((longlong)param_1 + 0x1c);
    lVar8 = *(longlong *)(lVar5 + 0x4b8);
    pbVar12 = *(byte **)(lVar5 + 0x4c0);
    lVar9 = *(longlong *)(lVar5 + 0x4c8);
    uVar2 = *(undefined4 *)(lVar5 + 0x4d0);
    pbStack_80 = (byte *)CONCAT71(pbStack_80._1_7_,*(undefined1 *)(lVar5 + 0x4d4));
    *(undefined8 *)(lVar5 + 0x4b8) = 0;
    *(undefined8 *)(lVar5 + 0x4c0) = 4;
    *(undefined8 *)(lVar5 + 0x4c8) = 0;
    *(undefined4 *)(lVar5 + 0x4d0) = 0;
    *(undefined1 *)(lVar5 + 0x4d4) = 0;
    *(undefined4 *)param_1[6] = *(undefined4 *)((longlong)param_1 + 0x3c);
    lVar5 = param_1[4];
    uVar6 = lVar9 * 0xc;
    uVar13 = uVar6;
    pbVar10 = (byte *)pdb_140f606e0(4);
    pbVar11 = pbVar10;
    if (uVar13 != 0) {
      pdb_14007ee60();
      pbVar11 = pub_1406abab0(uVar13,(ulonglong)pbVar10);
    }
    if (pbVar11 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
      pdb_142dc7e11(pbVar10,uVar13);
    }
    pbVar11[0] = 1;
    pbVar11[1] = 0;
    pbVar11[2] = 0;
    pbVar11[3] = 0;
    pbVar11[4] = 0;
    pbVar11[5] = 0;
    pbVar11[6] = 0;
    pbVar11[7] = 0;
    pbVar11[8] = 1;
    pbVar11[9] = 0;
    pbVar11[10] = 0;
    pbVar11[0xb] = 0;
    pbVar11[0xc] = 0;
    pbVar11[0xd] = 0;
    pbVar11[0xe] = 0;
    pbVar11[0xf] = 0;
    pub_142e32760(pbVar11 + 0x10,pbVar12,uVar6);
    if (lVar8 != 0) {
      pub_1406abac0(pbVar12,lVar8 * 0xc,4);
    }
    uStack_b0 = 1;
    uStack_a8 = (byte *)0x1;
    uStack_a0 = uStack_74;
    uStack_84 = CONCAT31(uStack_84._1_3_,pbStack_80._0_1_);
    uStack_9c = uVar1;
    uStack_98 = pbVar11;
    uStack_90 = lVar9;
    uStack_88 = uVar2;
    pdb_14007ee60();
    pbVar12 = pub_1406abab0(0x30,8);
    if (pbVar12 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
      pdb_142dc7e11(8,0x30);
    }
    *(undefined4 *)(pbVar12 + 0x20) = (undefined4)uStack_90;
    *(undefined4 *)(pbVar12 + 0x24) = uStack_90._4_4_;
    *(undefined4 *)(pbVar12 + 0x28) = uStack_88;
    *(undefined4 *)(pbVar12 + 0x2c) = uStack_84;
    *(undefined4 *)(pbVar12 + 0x10) = uStack_a0;
    *(undefined4 *)(pbVar12 + 0x14) = uStack_9c;
    *(undefined4 *)(pbVar12 + 0x18) = (undefined4)uStack_98;
    *(undefined4 *)(pbVar12 + 0x1c) = uStack_98._4_4_;
    *(undefined4 *)pbVar12 = (undefined4)uStack_b0;
    *(undefined4 *)(pbVar12 + 4) = uStack_b0._4_4_;
    *(undefined4 *)(pbVar12 + 8) = (undefined4)uStack_a8;
    *(undefined4 *)(pbVar12 + 0xc) = uStack_a8._4_4_;
    uStack_b0 = 2;
    uStack_a8 = pbVar12;
    pdb_140ae5180(lVar5,&uStack_b0);
  }
  puVar4 = (ulonglong *)*param_4;
  lVar5 = param_4[1];
  uVar6 = *puVar4;
  uVar15 = 0;
  uVar13 = uVar6 - *(ulonglong *)(lVar5 + 0x18);
  if (uVar6 < *(ulonglong *)(lVar5 + 0x18)) {
    uVar13 = uVar15;
  }
  uVar14 = uVar6 - *(ulonglong *)(lVar5 + 0x38);
  if (uVar6 < *(ulonglong *)(lVar5 + 0x38)) {
    uVar14 = uVar15;
  }
  uVar6 = *(ulonglong *)(lVar5 + 0x30);
  uVar16 = uVar6 - uVar14;
  if (uVar6 < uVar14) {
    uVar16 = uVar15;
  }
  uVar7 = *(ulonglong *)(lVar5 + 0x10);
  uVar17 = uVar7 - uVar13;
  if (uVar7 < uVar13) {
    uVar17 = uVar15;
  }
  uVar15 = *(ulonglong *)(lVar5 + 0x40);
  *puVar4 = uVar15 - (uVar17 + uVar16);
  if (uVar7 >= uVar13 && uVar7 - uVar13 != 0 || uVar6 >= uVar14 && uVar6 - uVar14 != 0) {
    *puVar4 = uVar15;
    lVar5 = *param_1;
    uVar3 = *(undefined4 *)(lVar5 + 0x948);
    uVar1 = *(undefined4 *)(lVar5 + 0x94c);
    *(undefined4 *)param_1[2] = *(undefined4 *)((longlong)param_1 + 0x1c);
    lVar8 = *(longlong *)(lVar5 + 0x928);
    pbVar12 = *(byte **)(lVar5 + 0x930);
    lVar9 = *(longlong *)(lVar5 + 0x938);
    uVar2 = *(undefined4 *)(lVar5 + 0x940);
    uStack_74 = CONCAT31(uStack_74._1_3_,*(undefined1 *)(lVar5 + 0x944));
    *(undefined8 *)(lVar5 + 0x928) = 0;
    *(undefined8 *)(lVar5 + 0x930) = 4;
    *(undefined8 *)(lVar5 + 0x938) = 0;
    *(undefined4 *)(lVar5 + 0x940) = 0;
    *(undefined1 *)(lVar5 + 0x944) = 0;
    *(undefined4 *)param_1[6] = *(undefined4 *)((longlong)param_1 + 0x3c);
    lVar5 = param_1[4];
    uVar6 = lVar9 * 0xc;
    uVar13 = uVar6;
    pbVar10 = (byte *)pdb_140f606e0(4);
    pbVar11 = pbVar10;
    if (uVar13 != 0) {
      pdb_14007ee60();
      pbVar11 = pub_1406abab0(uVar13,(ulonglong)pbVar10);
    }
    if (pbVar11 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
      pdb_142dc7e11(pbVar10,uVar13);
    }
    pbVar11[0] = 1;
    pbVar11[1] = 0;
    pbVar11[2] = 0;
    pbVar11[3] = 0;
    pbVar11[4] = 0;
    pbVar11[5] = 0;
    pbVar11[6] = 0;
    pbVar11[7] = 0;
    pbVar11[8] = 1;
    pbVar11[9] = 0;
    pbVar11[10] = 0;
    pbVar11[0xb] = 0;
    pbVar11[0xc] = 0;
    pbVar11[0xd] = 0;
    pbVar11[0xe] = 0;
    pbVar11[0xf] = 0;
    pbStack_80 = pbVar11;
    pub_142e32760(pbVar11 + 0x10,pbVar12,uVar6);
    if (lVar8 != 0) {
      pub_1406abac0(pbVar12,lVar8 * 0xc,4);
    }
    uStack_b0 = 1;
    uStack_a8 = (byte *)0x1;
    uStack_98 = pbStack_80;
    uStack_84 = CONCAT31(uStack_84._1_3_,(undefined1)uStack_74);
    uStack_a0 = uVar3;
    uStack_9c = uVar1;
    uStack_90 = lVar9;
    uStack_88 = uVar2;
    pdb_14007ee60();
    pbVar12 = pub_1406abab0(0x30,8);
    if (pbVar12 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
      pdb_142dc7e11(8,0x30);
    }
    *(undefined4 *)(pbVar12 + 0x20) = (undefined4)uStack_90;
    *(undefined4 *)(pbVar12 + 0x24) = uStack_90._4_4_;
    *(undefined4 *)(pbVar12 + 0x28) = uStack_88;
    *(undefined4 *)(pbVar12 + 0x2c) = uStack_84;
    *(undefined4 *)(pbVar12 + 0x10) = uStack_a0;
    *(undefined4 *)(pbVar12 + 0x14) = uStack_9c;
    *(undefined4 *)(pbVar12 + 0x18) = (undefined4)uStack_98;
    *(undefined4 *)(pbVar12 + 0x1c) = uStack_98._4_4_;
    *(undefined4 *)pbVar12 = (undefined4)uStack_b0;
    *(undefined4 *)(pbVar12 + 4) = uStack_b0._4_4_;
    *(undefined4 *)(pbVar12 + 8) = (undefined4)uStack_a8;
    *(undefined4 *)(pbVar12 + 0xc) = uStack_a8._4_4_;
    uStack_b0 = 3;
    uStack_a8 = pbVar12;
    pdb_140ae5180(lVar5,&uStack_b0);
  }
  puVar4 = (ulonglong *)*param_5;
  lVar5 = param_5[1];
  uVar6 = *puVar4;
  uVar15 = 0;
  uVar13 = uVar6 - *(ulonglong *)(lVar5 + 0x18);
  if (uVar6 < *(ulonglong *)(lVar5 + 0x18)) {
    uVar13 = uVar15;
  }
  uVar14 = uVar6 - *(ulonglong *)(lVar5 + 0x38);
  if (uVar6 < *(ulonglong *)(lVar5 + 0x38)) {
    uVar14 = uVar15;
  }
  uVar6 = *(ulonglong *)(lVar5 + 0x30);
  uVar16 = uVar6 - uVar14;
  if (uVar6 < uVar14) {
    uVar16 = uVar15;
  }
  uVar7 = *(ulonglong *)(lVar5 + 0x10);
  uVar17 = uVar7 - uVar13;
  if (uVar7 < uVar13) {
    uVar17 = uVar15;
  }
  uVar15 = *(ulonglong *)(lVar5 + 0x40);
  *puVar4 = uVar15 - (uVar17 + uVar16);
  if (uVar7 >= uVar13 && uVar7 - uVar13 != 0 || uVar6 >= uVar14 && uVar6 - uVar14 != 0) {
    *puVar4 = uVar15;
    lVar5 = *param_1;
    uVar3 = *(undefined4 *)(lVar5 + 0xdb8);
    uVar1 = *(undefined4 *)(lVar5 + 0xdbc);
    *(undefined4 *)param_1[2] = *(undefined4 *)((longlong)param_1 + 0x1c);
    lVar8 = *(longlong *)(lVar5 + 0xd98);
    pbVar12 = *(byte **)(lVar5 + 0xda0);
    lVar9 = *(longlong *)(lVar5 + 0xda8);
    uVar2 = *(undefined4 *)(lVar5 + 0xdb0);
    uStack_74 = CONCAT31(uStack_74._1_3_,*(undefined1 *)(lVar5 + 0xdb4));
    *(undefined8 *)(lVar5 + 0xd98) = 0;
    *(undefined8 *)(lVar5 + 0xda0) = 4;
    *(undefined8 *)(lVar5 + 0xda8) = 0;
    *(undefined4 *)(lVar5 + 0xdb0) = 0;
    *(undefined1 *)(lVar5 + 0xdb4) = 0;
    *(undefined4 *)param_1[6] = *(undefined4 *)((longlong)param_1 + 0x3c);
    lVar5 = param_1[4];
    uVar6 = lVar9 * 0xc;
    uVar13 = uVar6;
    pbVar10 = (byte *)pdb_140f606e0(4);
    pbVar11 = pbVar10;
    if (uVar13 != 0) {
      pdb_14007ee60();
      pbVar11 = pub_1406abab0(uVar13,(ulonglong)pbVar10);
    }
    if (pbVar11 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
      pdb_142dc7e11(pbVar10,uVar13);
    }
    pbVar11[0] = 1;
    pbVar11[1] = 0;
    pbVar11[2] = 0;
    pbVar11[3] = 0;
    pbVar11[4] = 0;
    pbVar11[5] = 0;
    pbVar11[6] = 0;
    pbVar11[7] = 0;
    pbVar11[8] = 1;
    pbVar11[9] = 0;
    pbVar11[10] = 0;
    pbVar11[0xb] = 0;
    pbVar11[0xc] = 0;
    pbVar11[0xd] = 0;
    pbVar11[0xe] = 0;
    pbVar11[0xf] = 0;
    pbStack_80 = pbVar11;
    pub_142e32760(pbVar11 + 0x10,pbVar12,uVar6);
    if (lVar8 != 0) {
      pub_1406abac0(pbVar12,lVar8 * 0xc,4);
    }
    uStack_b0 = 1;
    uStack_a8 = (byte *)0x1;
    uStack_98 = pbStack_80;
    uStack_84 = CONCAT31(uStack_84._1_3_,(undefined1)uStack_74);
    uStack_a0 = uVar3;
    uStack_9c = uVar1;
    uStack_90 = lVar9;
    uStack_88 = uVar2;
    pdb_14007ee60();
    pbVar12 = pub_1406abab0(0x30,8);
    if (pbVar12 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
      pdb_142dc7e11(8,0x30);
    }
    *(undefined4 *)(pbVar12 + 0x20) = (undefined4)uStack_90;
    *(undefined4 *)(pbVar12 + 0x24) = uStack_90._4_4_;
    *(undefined4 *)(pbVar12 + 0x28) = uStack_88;
    *(undefined4 *)(pbVar12 + 0x2c) = uStack_84;
    *(undefined4 *)(pbVar12 + 0x10) = uStack_a0;
    *(undefined4 *)(pbVar12 + 0x14) = uStack_9c;
    *(undefined4 *)(pbVar12 + 0x18) = (undefined4)uStack_98;
    *(undefined4 *)(pbVar12 + 0x1c) = uStack_98._4_4_;
    *(undefined4 *)pbVar12 = (undefined4)uStack_b0;
    *(undefined4 *)(pbVar12 + 4) = uStack_b0._4_4_;
    *(undefined4 *)(pbVar12 + 8) = (undefined4)uStack_a8;
    *(undefined4 *)(pbVar12 + 0xc) = uStack_a8._4_4_;
    uStack_b0 = 4;
    uStack_a8 = pbVar12;
    pdb_140ae5180(lVar5,&uStack_b0,&UNK_143035080);
  }
  return;
}

