// VA 0x141f43450, PDB extent 390 bytes
// system_roof::ui_edit_roof_ridge_dir::record_switch_roof_ridge_history
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/roof/src/ui_edit_roof_ridge_dir.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   system_roof::ui_edit_roof_ridge_dir::record_switch_roof_ridge_history
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/roof/src/ui_edit_roof_ridge_dir.rs
   Extent: 390 */

void pdb_141f43450(undefined8 *param_1,undefined8 *param_2)

{
  longlong lVar1;
  byte bVar2;
  byte bVar3;
  undefined4 uVar4;
  ulonglong *puVar5;
  longlong lVar6;
  ulonglong uVar7;
  undefined8 uVar8;
  undefined4 *puVar9;
  undefined8 uVar10;
  longlong lVar11;
  byte *pbVar12;
  ulonglong uVar13;
  longlong lVar14;
  longlong lVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  undefined8 uStack_58;
  byte *pbStack_50;
  
  puVar5 = (ulonglong *)*param_1;
  lVar6 = param_1[1];
  uVar7 = *puVar5;
  uVar16 = 0;
  uVar13 = uVar7 - *(ulonglong *)(lVar6 + 0x18);
  if (uVar7 < *(ulonglong *)(lVar6 + 0x18)) {
    uVar13 = uVar16;
  }
  uVar17 = uVar7 - *(ulonglong *)(lVar6 + 0x38);
  if (uVar7 < *(ulonglong *)(lVar6 + 0x38)) {
    uVar17 = uVar16;
  }
  lVar11 = uVar13 * 0x18 + *(longlong *)(lVar6 + 8);
  uVar7 = *(ulonglong *)(lVar6 + 0x10) - uVar13;
  if (*(ulonglong *)(lVar6 + 0x10) < uVar13) {
    lVar11 = 8;
    uVar7 = uVar16;
  }
  lVar14 = uVar17 * 0x18 + *(longlong *)(lVar6 + 0x28);
  uVar13 = *(ulonglong *)(lVar6 + 0x30) - uVar17;
  if (*(ulonglong *)(lVar6 + 0x30) < uVar17) {
    lVar14 = 8;
    uVar13 = uVar16;
  }
  *puVar5 = (*(longlong *)(lVar6 + 0x40) - uVar13) - uVar7;
  lVar6 = lVar11 + uVar7 * 0x18;
  lVar1 = lVar14 + uVar13 * 0x18;
  uVar4 = *(undefined4 *)((longlong)param_2 + 0x1c);
  uVar8 = *param_2;
  puVar9 = (undefined4 *)param_2[2];
  if (lVar11 == 0) goto LAB_141f43510;
  do {
    if (lVar11 == lVar6) goto LAB_141f43510;
    lVar15 = lVar11 + 0x18;
    while( true ) {
      *puVar5 = *puVar5 + 1;
      uVar10 = *(undefined8 *)(lVar11 + 8);
      bVar2 = *(byte *)(lVar11 + 0x10);
      bVar3 = *(byte *)(lVar11 + 0x11);
      *puVar9 = uVar4;
      pdb_14007ee60();
      pbVar12 = pub_1406abab0(0x50,8);
      if (pbVar12 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
        pdb_142dc7e11(8,0x50);
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
      pbVar12[0x10] = 3;
      pbVar12[0x11] = bVar2;
      pbVar12[0x12] = bVar3;
      *(undefined8 *)(pbVar12 + 0x18) = uVar10;
      uStack_58 = 8;
      pbStack_50 = pbVar12;
      pdb_140ae5180(uVar8,&uStack_58,&UNK_14342ef18);
      lVar11 = lVar15;
      if (lVar15 != 0) break;
LAB_141f43510:
      lVar11 = lVar14;
      if ((lVar11 == 0) || (lVar11 == lVar1)) {
        return;
      }
      lVar14 = lVar11 + 0x18;
      lVar15 = 0;
    }
  } while( true );
}

