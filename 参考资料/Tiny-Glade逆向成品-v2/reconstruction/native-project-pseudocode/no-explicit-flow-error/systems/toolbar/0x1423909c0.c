// VA 0x1423909c0, PDB extent 269 bytes
// toolbar::resouces_and_components::taffy_utils::taffy_mut_style<toolbar::resouces_and_components::taffy_layout::impl$1::perform_layout::closure_env$1>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/resouces_and_components/taffy_utils.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   toolbar::resouces_and_components::taffy_utils::taffy_mut_style<toolbar::resouces_and_components::taffy_layout::impl$1::perform_layout::closure_env$1>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/resouces_and_components/taffy_utils.rs
   Extent: 269 */

void pdb_1423909c0(undefined8 param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4,
                  undefined4 *param_5)

{
  undefined *puVar1;
  int iStack_1c8;
  undefined4 uStack_1c4;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  undefined4 uStack_1b8;
  undefined4 uStack_1b4;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  int iStack_1a8;
  undefined4 uStack_1a4;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  undefined4 uStack_198;
  undefined4 uStack_194;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined1 auStack_188 [216];
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  
  pdb_1411bdcb0(&iStack_1c8,param_1,param_2,param_3);
  if (iStack_1c8 == 4) {
    pdb_14238fa10(auStack_188,CONCAT44(uStack_1bc,uStack_1c0));
    uStack_ac = *param_4;
    uStack_a4 = *param_5;
    uStack_b0 = 0;
    uStack_a8 = 0;
    pdb_1411be200(&iStack_1c8,param_1,param_2,param_3,auStack_188);
    if (iStack_1c8 == 4) {
      return;
    }
    uStack_198 = uStack_1b8;
    uStack_194 = uStack_1b4;
    uStack_190 = uStack_1b0;
    uStack_18c = uStack_1ac;
    iStack_1a8 = iStack_1c8;
    uStack_1a4 = uStack_1c4;
    uStack_1a0 = uStack_1c0;
    uStack_19c = uStack_1bc;
    puVar1 = &UNK_1434e0000;
  }
  else {
    uStack_198 = uStack_1b8;
    uStack_194 = uStack_1b4;
    uStack_190 = uStack_1b0;
    uStack_18c = uStack_1ac;
    iStack_1a8 = iStack_1c8;
    uStack_1a4 = uStack_1c4;
    uStack_1a0 = uStack_1c0;
    uStack_19c = uStack_1bc;
    puVar1 = &UNK_1434dffe8;
  }
                    /* WARNING: Subroutine does not return */
  pdb_142dc8170(&UNK_1434dfe58,0x2b,&iStack_1a8,&UNK_1434dfe38,puVar1);
}

