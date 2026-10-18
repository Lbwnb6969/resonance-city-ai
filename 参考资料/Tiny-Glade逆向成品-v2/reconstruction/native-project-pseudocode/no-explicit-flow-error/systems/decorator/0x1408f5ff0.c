// VA 0x1408f5ff0, PDB extent 188 bytes
// system_decorator::blueprint::instantiate_blueprints::closure$1
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/decorator/src/blueprint.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: system_decorator::blueprint::instantiate_blueprints::closure$1
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/decorator/src/blueprint.rs
   Extent: 188 */

void pdb_1408f5ff0(void)

{
  undefined1 uStack_61;
  undefined8 uStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined *puStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  undefined *puStack_10;
  undefined8 uStack_8;
  
  if (*_DAT_143ca8e90 != 0) {
    uStack_60 = 0;
    puStack_58 = &UNK_14301cfc8;
    uStack_50 = 0x1b;
    uStack_48 = 0;
    puStack_40 = &UNK_14301cdb0;
    uStack_38 = 0x29;
    uStack_30 = 1;
    puStack_28 = &UNK_14301cfc8;
    uStack_20 = 0x1b;
    uStack_18 = 0x39300000001;
    puStack_10 = &UNK_14301d090;
    uStack_8 = 0x97;
    pdb_140f332f0(&uStack_61,&uStack_60);
  }
                    /* WARNING: Subroutine does not return */
  pdb_142dc83b0(&UNK_14301cfe3,0xe,&UNK_14301d0e0);
}

