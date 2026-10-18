// VA 0x140a82320, PDB extent 739 bytes
// country_core::systems::garden::record_plant_paint_history::record_plant_paint_history
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/garden/record_plant_paint_history.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::systems::garden::record_plant_paint_history::record_plant_paint_history
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/garden/record_plant_paint_history.rs
   Extent: 739 */

void pdb_140a82320(undefined8 *param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  byte bVar2;
  byte bVar3;
  ulonglong *puVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  byte *pbVar12;
  undefined4 *puVar13;
  longlong lVar14;
  longlong lVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  longlong lVar18;
  undefined8 uVar19;
  undefined4 uVar20;
  undefined8 uStack_b8;
  byte *pbStack_b0;
  undefined8 uStack_a0;
  undefined4 *puStack_98;
  longlong lStack_90;
  longlong lStack_88;
  undefined8 uStack_80;
  undefined4 uStack_74;
  ulonglong uStack_70;
  byte *pbStack_68;
  undefined8 uStack_60;
  
  uStack_60 = 0xfffffffffffffffe;
  puVar4 = (ulonglong *)*param_2;
  lVar10 = param_2[1];
  uVar5 = *puVar4;
  uVar16 = 0;
  uVar8 = uVar5 - *(ulonglong *)(lVar10 + 0x18);
  if (uVar5 < *(ulonglong *)(lVar10 + 0x18)) {
    uVar8 = uVar16;
  }
  uVar17 = uVar5 - *(ulonglong *)(lVar10 + 0x38);
  if (uVar5 < *(ulonglong *)(lVar10 + 0x38)) {
    uVar17 = uVar16;
  }
  lVar14 = uVar8 * 0x28 + *(longlong *)(lVar10 + 8);
  uVar5 = *(ulonglong *)(lVar10 + 0x10) - uVar8;
  if (*(ulonglong *)(lVar10 + 0x10) < uVar8) {
    lVar14 = 8;
    uVar5 = uVar16;
  }
  lVar9 = uVar17 * 0x28 + *(longlong *)(lVar10 + 0x28);
  uVar8 = *(ulonglong *)(lVar10 + 0x30) - uVar17;
  if (*(ulonglong *)(lVar10 + 0x30) < uVar17) {
    lVar9 = 8;
    uVar8 = uVar16;
  }
  *puVar4 = (*(longlong *)(lVar10 + 0x40) - uVar8) - uVar5;
  uVar20 = *(undefined4 *)((longlong)param_1 + 0x1c);
  uStack_a0 = *param_1;
  lVar10 = lVar9;
  lVar11 = lVar9;
  puVar13 = (undefined4 *)param_1[2];
  lVar15 = lVar14;
  if (lVar14 == 0) goto LAB_140a823f0;
LAB_140a823e0:
  lVar11 = lVar10;
  if (lVar15 == lVar14 + uVar5 * 0x28) goto LAB_140a823f0;
  lVar18 = lVar15 + 0x28;
  lVar11 = lVar15;
  do {
    *puVar4 = *puVar4 + 1;
    *puVar13 = uVar20;
    uVar17 = *(ulonglong *)(lVar11 + 0x10);
    uVar16 = uVar17 * 8;
    if (0x7ffffffffffffffc < uVar16 || uVar17 >> 0x3d != 0) {
      uVar19 = 0;
LAB_140a82572:
      pdb_142dc7e2a(uVar19,uVar16);
      return;
    }
    puStack_98 = puVar13;
    lStack_90 = lVar10;
    lStack_88 = lVar18;
    if (uVar16 == 0) {
      pbStack_68 = (byte *)0x4;
      uStack_70 = 0;
      uVar6 = *(undefined8 *)(lVar11 + 8);
      uVar7 = uStack_70;
    }
    else {
      uStack_80 = *(undefined8 *)(lVar11 + 8);
      uStack_74 = uVar20;
      pdb_14007ee60();
      uVar19 = 4;
      pbStack_68 = pub_1406abab0(uVar16,4);
      uVar6 = uStack_80;
      uVar20 = uStack_74;
      uVar7 = uVar17;
      if (pbStack_68 == (byte *)0x0) goto LAB_140a82572;
    }
    uStack_70 = uVar7;
    if (uVar17 != 0) {
      pub_142e32760(pbStack_68,uVar6,uVar16);
    }
    uVar1 = *(undefined4 *)(lVar11 + 0x18);
    bVar2 = *(byte *)(lVar11 + 0x1d);
    bVar3 = *(byte *)(lVar11 + 0x1c);
    pdb_14007ee60();
    pbVar12 = pub_1406abab0(0x30,8);
    if (pbVar12 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
      pdb_142dc7e11(8,0x30);
    }
    pbVar12[0] = 1;
    pbVar12[1] = 0;
    pbVar12[2] = 0;
    pbVar12[3] = 0;
    pbVar12[4] = 0;
    pbVar12[5] = 0;
    pbVar12[6] = 0;
    pbVar12[7] = 0;
    pbVar12[8] = 1;
    pbVar12[9] = 0;
    pbVar12[10] = 0;
    pbVar12[0xb] = 0;
    pbVar12[0xc] = 0;
    pbVar12[0xd] = 0;
    pbVar12[0xe] = 0;
    pbVar12[0xf] = 0;
    *(ulonglong *)(pbVar12 + 0x10) = uStack_70;
    *(byte **)(pbVar12 + 0x18) = pbStack_68;
    *(ulonglong *)(pbVar12 + 0x20) = uVar17;
    *(undefined4 *)(pbVar12 + 0x28) = uVar1;
    pbVar12[0x2c] = bVar3;
    pbVar12[0x2d] = bVar2;
    uStack_b8 = 0xf;
    pbStack_b0 = pbVar12;
    pdb_140ae5180(uStack_a0,&uStack_b8,&UNK_143042b10);
    lVar10 = lStack_90;
    lVar11 = lStack_90;
    puVar13 = puStack_98;
    lVar15 = lStack_88;
    if (lStack_88 != 0) goto LAB_140a823e0;
LAB_140a823f0:
    if (lVar11 == 0) {
      return;
    }
    if (lVar11 == lVar9 + uVar8 * 0x28) {
      return;
    }
    lVar10 = lVar11 + 0x28;
    lVar18 = 0;
  } while( true );
}

