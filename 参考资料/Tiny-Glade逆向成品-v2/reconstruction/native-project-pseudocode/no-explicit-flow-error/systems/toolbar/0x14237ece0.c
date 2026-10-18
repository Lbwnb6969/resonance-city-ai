// VA 0x14237ece0, PDB extent 181 bytes
// toolbar::text::flush_text_render
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/text.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: toolbar::text::flush_text_render
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/text.rs
   Extent: 181 */

void pdb_14237ece0(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lStack_38;
  undefined8 *puStack_30;
  longlong lStack_28;
  
  uVar1 = *param_3;
  puVar2 = (undefined8 *)pdb_142993290(uVar1,&UNK_1434d77a8);
  if (puVar2 != (undefined8 *)0x0) {
    lVar3 = (**(code **)(puVar2[1] + 0x18))(*puVar2);
    if (lVar3 != 0) {
      puVar2 = (undefined8 *)pdb_142993290(uVar1,&UNK_1434d77a0);
      if (puVar2 != (undefined8 *)0x0) {
        lVar4 = (**(code **)(puVar2[1] + 0x18))(*puVar2);
        if (lVar4 != 0) {
          *(undefined4 *)param_1[2] = *(undefined4 *)((longlong)param_1 + 0x1c);
          uVar1 = *param_1;
          uVar5 = pdb_140a92040(*param_2);
          lStack_38 = lVar3;
          puStack_30 = param_2;
          lStack_28 = lVar4;
          pdb_14119b910(uVar1,uVar5,&lStack_38);
          return;
        }
      }
                    /* WARNING: Subroutine does not return */
      pdb_142dc8150(&UNK_1434dda20);
    }
  }
                    /* WARNING: Subroutine does not return */
  pdb_142dc8150(&UNK_1434dda08);
}

