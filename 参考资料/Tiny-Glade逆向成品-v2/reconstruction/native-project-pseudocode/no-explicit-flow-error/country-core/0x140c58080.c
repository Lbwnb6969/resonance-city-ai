// VA 0x140c58080, PDB extent 254 bytes
// country_core::startup::load_prefabs::PrefabWatcher::watch_atlas
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/startup/load_prefabs.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: country_core::startup::load_prefabs::PrefabWatcher::watch_atlas
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/startup/load_prefabs.rs
   Extent: 254 */

void pdb_140c58080(int *param_1,ulonglong *param_2,undefined1 param_3)

{
  longlong lVar1;
  longlong *plVar2;
  code *pcVar3;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined8 uStack_40;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 uStack_28;
  ulonglong *puStack_18;
  undefined8 uStack_10;
  
  uStack_10 = 0xfffffffffffffffe;
  if (*param_1 != 3) {
    plVar2 = *(longlong **)(param_1 + 0xe);
    LOCK();
    lVar1 = *plVar2;
    *plVar2 = *plVar2 + 1;
    UNLOCK();
    if (*plVar2 == 0 || SCARRY8(lVar1,1) != *plVar2 < 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    puStack_18 = param_2;
    pdb_140c29560(&uStack_50,param_1,param_2,plVar2,param_3);
    param_2 = puStack_18;
    if (CONCAT44(uStack_4c,uStack_50) != -0x7ffffffffffffffc) {
      uStack_28 = uStack_40;
      uStack_38 = uStack_50;
      uStack_34 = uStack_4c;
      uStack_30 = uStack_48;
      uStack_2c = uStack_44;
                    /* WARNING: Subroutine does not return */
      pdb_142dc8170(&UNK_14306e978,0x1e,&uStack_38,&UNK_14306f550,&UNK_14306e998);
    }
  }
  if (*param_2 != 0) {
    pub_1406abac0((byte *)param_2[1],*param_2,1);
  }
  return;
}

