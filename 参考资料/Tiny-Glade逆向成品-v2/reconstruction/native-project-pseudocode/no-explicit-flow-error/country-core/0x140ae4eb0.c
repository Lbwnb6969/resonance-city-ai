// VA 0x140ae4eb0, PDB extent 340 bytes
// country_core::resources::history::History::finish_potential_mutation
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/history/mod.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::resources::history::History::finish_potential_mutation
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/history/mod.rs
   Extent: 340 */

void pdb_140ae4eb0(longlong param_1,char param_2)

{
  longlong lVar1;
  longlong *plVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined1 uStack_50;
  longlong lStack_48;
  undefined8 *puStack_40;
  longlong lStack_38;
  undefined1 uStack_29;
  undefined8 uStack_28;
  
  uStack_28 = 0xfffffffffffffffe;
  uStack_29 = 0;
  if (param_2 != '\0') {
    puVar5 = *(undefined8 **)(param_1 + 0x20);
    lVar1 = *(longlong *)(param_1 + 0x28);
    *(undefined8 *)(param_1 + 0x28) = 0;
    puStack_40 = puVar5;
    lStack_38 = lVar1;
    if (lVar1 != 0) {
      lVar4 = 1;
      do {
        plVar2 = (longlong *)*puVar5;
        LOCK();
        *plVar2 = *plVar2 + -1;
        UNLOCK();
        lStack_48 = lVar4;
        if (*plVar2 == 0) {
          pdb_140315620(puVar5);
        }
        lVar4 = lStack_48 + 1;
        puVar5 = puVar5 + 2;
      } while (lStack_48 != lVar1);
    }
    uStack_60 = 0;
    uStack_58 = 0xffffffffffffffff;
    uStack_50 = 0;
    uVar3 = pdb_1416f96d0(&UNK_14304fab0,&uStack_60);
    *(undefined8 *)(param_1 + 0x60) = uVar3;
  }
  return;
}

