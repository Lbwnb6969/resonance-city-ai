// VA 0x141527850, PDB extent 592 bytes
// country_core::asset_libraries::ssbo_library::AssetSsboLibrary::read_rg_buffer<country_core::shader::grass2::inc::card_splat_common::Grass2ExemplarParams,rhapsody::rg::api::GraphApi>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/asset_libraries/ssbo_library.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::asset_libraries::ssbo_library::AssetSsboLibrary::read_rg_buffer<country_core::shader::grass2::inc::card_splat_common::Grass2ExemplarParams,rhapsody::rg::api::GraphApi>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/asset_libraries/ssbo_library.rs
   Extent: 592 */

void pdb_141527850(undefined8 param_1,undefined8 param_2)

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
  lVar1 = pdb_140bf45b0(param_2,&UNK_14331b8d8);
  if (lVar1 == 0) {
    pdb_142de7830();
    puStack_70 = &UNK_14331d027;
    uStack_68 = 0x4a;
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
                    /* WARNING: Could not recover jumptable at 0x0001415278d2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&UNK_14331e47c + *(int *)(&UNK_14331e47c + (ulonglong)*(uint *)(lVar1 + 0x28) * 4)))();
  return;
}

