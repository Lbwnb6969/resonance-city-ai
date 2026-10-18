// VA 0x141523e80, PDB extent 592 bytes
// country_core::asset_libraries::ssbo_library::AssetSsboLibrary::read_rg_buffer<country_core::systems::render_loop::compute_passes::grass2::Grass2CardPointPlantOffsetSsbo,rhapsody::rg::api::GraphApi>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/asset_libraries/ssbo_library.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::asset_libraries::ssbo_library::AssetSsboLibrary::read_rg_buffer<country_core::systems::render_loop::compute_passes::grass2::Grass2CardPointPlantOffsetSsbo,rhapsody::rg::api::GraphApi>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/asset_libraries/ssbo_library.rs
   Extent: 592 */

void pdb_141523e80(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  bool bVar3;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined **ppuStack_58;
  code *pcStack_50;
  undefined8 uStack_40;
  
  uStack_40 = 0xfffffffffffffffe;
  lVar1 = pdb_140bf45b0(param_2,&UNK_14331b818);
  if (lVar1 == 0) {
    pdb_142de6e70();
    puStack_70 = &UNK_14331cebb;
    uStack_68 = 0x5a;
    ppuStack_58 = &puStack_70;
    pcStack_50 = pdb_1402ed420;
                    /* WARNING: Subroutine does not return */
    pdb_142dc83d0(&UNK_14331b388,&ppuStack_58,&UNK_14331b3a0);
  }
  uVar2 = lVar1 + 0x20;
  LOCK();
  bVar3 = *(longlong *)(lVar1 + 0x20) == 0;
  if (bVar3) {
    *(longlong *)(lVar1 + 0x20) = 8;
  }
  UNLOCK();
  if (!bVar3) {
    pdb_142dbc1f0(uVar2);
  }
  pdb_140e9a150(uVar2);
  pdb_140e9a150(uVar2 | 1);
                    /* WARNING: Could not recover jumptable at 0x000141523f02. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&UNK_14331e2ec + *(int *)(&UNK_14331e2ec + (ulonglong)*(uint *)(lVar1 + 0x28) * 4)))();
  return;
}

