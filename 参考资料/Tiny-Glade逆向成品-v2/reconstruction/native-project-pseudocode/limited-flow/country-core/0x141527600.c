// VA 0x141527600, PDB extent 592 bytes
// country_core::asset_libraries::ssbo_library::AssetSsboLibrary::read_rg_buffer<country_core::systems::render_loop::compute_passes::grass2::Grass2ActiveInstanceSsbo,rhapsody::rg::api::GraphApi>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/asset_libraries/ssbo_library.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::asset_libraries::ssbo_library::AssetSsboLibrary::read_rg_buffer<country_core::systems::render_loop::compute_passes::grass2::Grass2ActiveInstanceSsbo,rhapsody::rg::api::GraphApi>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/asset_libraries/ssbo_library.rs
   Extent: 592 */

void pdb_141527600(undefined8 param_1,undefined8 param_2)

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
  lVar1 = pdb_140bf45b0(param_2,&UNK_14331ca38);
  if (lVar1 == 0) {
    pdb_142de8070();
    puStack_70 = &UNK_14331e107;
    uStack_68 = 0x54;
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
                    /* WARNING: Could not recover jumptable at 0x000141527682. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&UNK_14331e46c + *(int *)(&UNK_14331e46c + (ulonglong)*(uint *)(lVar1 + 0x28) * 4)))();
  return;
}

