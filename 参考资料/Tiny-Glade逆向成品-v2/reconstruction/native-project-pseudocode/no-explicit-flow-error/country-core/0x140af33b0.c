// VA 0x140af33b0, PDB extent 336 bytes
// country_core::systems::ui_clutter::defered_autoclutter_history::history_record_auto_clutter
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/ui_clutter/defered_autoclutter_history.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::systems::ui_clutter::defered_autoclutter_history::history_record_auto_clutter
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/ui_clutter/defered_autoclutter_history.rs
   Extent: 336 */

void pdb_140af33b0(undefined8 *param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  ulonglong *puVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  undefined4 *puVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  byte *pbVar9;
  ulonglong uVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  undefined8 uStack_58;
  byte *pbStack_50;
  
  puVar2 = (ulonglong *)*param_2;
  lVar8 = param_2[1];
  uVar3 = *puVar2;
  uVar14 = 0;
  uVar10 = uVar3 - *(ulonglong *)(lVar8 + 0x18);
  if (uVar3 < *(ulonglong *)(lVar8 + 0x18)) {
    uVar10 = uVar14;
  }
  uVar15 = uVar3 - *(ulonglong *)(lVar8 + 0x38);
  if (uVar3 < *(ulonglong *)(lVar8 + 0x38)) {
    uVar15 = uVar14;
  }
  lVar7 = uVar10 * 0x10 + *(longlong *)(lVar8 + 8);
  uVar3 = *(ulonglong *)(lVar8 + 0x10) - uVar10;
  if (*(ulonglong *)(lVar8 + 0x10) < uVar10) {
    lVar7 = 8;
    uVar3 = uVar14;
  }
  lVar11 = uVar15 * 0x10 + *(longlong *)(lVar8 + 0x28);
  uVar10 = *(ulonglong *)(lVar8 + 0x30) - uVar15;
  if (*(ulonglong *)(lVar8 + 0x30) < uVar15) {
    lVar11 = 8;
    uVar10 = uVar14;
  }
  *puVar2 = (*(longlong *)(lVar8 + 0x40) - uVar10) - uVar3;
  lVar13 = uVar10 * 0x10 + lVar11;
  uVar1 = *(undefined4 *)((longlong)param_1 + 0x1c);
  uVar4 = *param_1;
  puVar5 = (undefined4 *)param_1[2];
  lVar8 = lVar7;
  if (lVar7 == 0) goto LAB_140af3460;
  do {
    if (lVar8 == uVar3 * 0x10 + lVar7) goto LAB_140af3460;
    lVar12 = lVar8 + 0x10;
    while( true ) {
      *puVar2 = *puVar2 + 1;
      *puVar5 = uVar1;
      uVar6 = *(undefined8 *)(lVar8 + 8);
      pdb_14007ee60();
      pbVar9 = pub_1406abab0(0x18,8);
      if (pbVar9 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
        pdb_142dc7e11(8,0x18);
      }
      pbVar9[0] = 1;
      pbVar9[1] = 0;
      pbVar9[2] = 0;
      pbVar9[3] = 0;
      pbVar9[4] = 0;
      pbVar9[5] = 0;
      pbVar9[6] = 0;
      pbVar9[7] = 0;
      pbVar9[8] = 1;
      pbVar9[9] = 0;
      pbVar9[10] = 0;
      pbVar9[0xb] = 0;
      pbVar9[0xc] = 0;
      pbVar9[0xd] = 0;
      pbVar9[0xe] = 0;
      pbVar9[0xf] = 0;
      *(undefined8 *)(pbVar9 + 0x10) = uVar6;
      uStack_58 = 0xd;
      pbStack_50 = pbVar9;
      pdb_140ae5180(uVar4,&uStack_58,&UNK_143050ad8);
      lVar8 = lVar12;
      if (lVar12 != 0) break;
LAB_140af3460:
      lVar8 = lVar11;
      if ((lVar8 == 0) || (lVar8 == lVar13)) {
        return;
      }
      lVar11 = lVar8 + 0x10;
      lVar12 = 0;
    }
  } while( true );
}

