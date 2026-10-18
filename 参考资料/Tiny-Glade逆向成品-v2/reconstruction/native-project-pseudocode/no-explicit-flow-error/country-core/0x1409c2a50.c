// VA 0x1409c2a50, PDB extent 208 bytes
// country_core::utils::dirty_tiles::impl$3::iter_dirty_tiles<country_core::systems::wall::wall_state::publish_public_wall_state::gather_lazy_update_sources::closure_env$1>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/utils/dirty_tiles.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::utils::dirty_tiles::impl$3::iter_dirty_tiles<country_core::systems::wall::wall_state::publish_public_wall_state::gather_lazy_update_sources::closure_env$1>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/utils/dirty_tiles.rs
   Extent: 208 */

void pdb_1409c2a50(undefined8 *param_1,undefined8 param_2)

{
  longlong *plVar1;
  ulonglong uVar2;
  ulonglong *puVar3;
  longlong lVar4;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  longlong lStack_48;
  longlong lStack_40;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  longlong lStack_28;
  undefined8 uStack_18;
  
  uStack_18 = 0xfffffffffffffffe;
  pdb_1409c6230(&uStack_58,*param_1);
  if (CONCAT44(uStack_54,uStack_58) != 0) {
    uStack_38 = uStack_58;
    uStack_34 = uStack_54;
    uStack_30 = uStack_50;
    uStack_2c = uStack_4c;
    lStack_28 = lStack_48;
    pdb_140a83260(CONCAT44(uStack_4c,uStack_50),param_2);
    puVar3 = (ulonglong *)CONCAT44(uStack_34,uStack_38);
    pdb_140e9a350(puVar3);
    pdb_140e9a350((ulonglong)puVar3 | 1);
    LOCK();
    uVar2 = *puVar3;
    *puVar3 = *puVar3 - 0x10;
    UNLOCK();
    if ((uVar2 & 0xfffffffffffffff2) == 0x12) {
      pdb_142dbbf50(puVar3);
    }
    lVar4 = lStack_28;
    lStack_28 = 0;
    lStack_40 = lVar4 + -0x10;
    LOCK();
    plVar1 = (longlong *)(lVar4 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      pdb_140c7ba10(&lStack_40);
    }
  }
  return;
}

