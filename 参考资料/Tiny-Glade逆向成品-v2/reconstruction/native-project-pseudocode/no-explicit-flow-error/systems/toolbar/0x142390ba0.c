// VA 0x142390ba0, PDB extent 207 bytes
// toolbar::resouces_and_components::taffy_utils::taffy_mut_style<toolbar::toolbar_systems::undo_redo_alignment::closure_env$6>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/resouces_and_components/taffy_utils.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   toolbar::resouces_and_components::taffy_utils::taffy_mut_style<toolbar::toolbar_systems::undo_redo_alignment::closure_env$6>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/resouces_and_components/taffy_utils.rs
   Extent: 207 */

void pdb_142390ba0(undefined8 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined *puVar1;
  int iStack_1b8;
  undefined4 uStack_1b4;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  undefined4 uStack_1a8;
  undefined4 uStack_1a4;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  int iStack_198;
  undefined4 uStack_194;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined4 uStack_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined1 auStack_178 [338];
  undefined1 uStack_26;
  
  pdb_1411bdcb0(&iStack_1b8,param_1,param_2,param_3);
  if (iStack_1b8 == 4) {
    pdb_14238fa10(auStack_178,CONCAT44(uStack_1ac,uStack_1b0));
    uStack_26 = 4;
    pdb_1411be200(&iStack_1b8,param_1,param_2,param_3,auStack_178);
    if (iStack_1b8 == 4) {
      return;
    }
    uStack_188 = uStack_1a8;
    uStack_184 = uStack_1a4;
    uStack_180 = uStack_1a0;
    uStack_17c = uStack_19c;
    iStack_198 = iStack_1b8;
    uStack_194 = uStack_1b4;
    uStack_190 = uStack_1b0;
    uStack_18c = uStack_1ac;
    puVar1 = &UNK_1434e0000;
  }
  else {
    uStack_188 = uStack_1a8;
    uStack_184 = uStack_1a4;
    uStack_180 = uStack_1a0;
    uStack_17c = uStack_19c;
    iStack_198 = iStack_1b8;
    uStack_194 = uStack_1b4;
    uStack_190 = uStack_1b0;
    uStack_18c = uStack_1ac;
    puVar1 = &UNK_1434dffe8;
  }
                    /* WARNING: Subroutine does not return */
  pdb_142dc8170(&UNK_1434dfe58,0x2b,&iStack_198,&UNK_1434dfe38,puVar1);
}

