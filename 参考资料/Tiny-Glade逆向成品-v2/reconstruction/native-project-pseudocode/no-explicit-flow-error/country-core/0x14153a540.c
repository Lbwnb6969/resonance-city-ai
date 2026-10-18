// VA 0x14153a540, PDB extent 308 bytes
// country_core::asset_libraries::ssbo_library::AssetSsboLibrary::finish_write_rg_buffer<country_core::systems::render_loop::compute_passes::leaf_particles::ParticleEmitterSsbo,rhapsody::rg::api::GraphApi>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/asset_libraries/ssbo_library.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::asset_libraries::ssbo_library::AssetSsboLibrary::finish_write_rg_buffer<country_core::systems::render_loop::compute_passes::leaf_particles::ParticleEmitterSsbo,rhapsody::rg::api::GraphApi>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/asset_libraries/ssbo_library.rs
   Extent: 308 */

longlong pdb_14153a540(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  bool bVar5;
  undefined4 uStack_44;
  undefined1 uStack_40;
  undefined8 uStack_3c;
  undefined4 uStack_34;
  ulonglong uStack_30;
  undefined8 uStack_28;
  
  uStack_28 = 0xfffffffffffffffe;
  lVar2 = pdb_140bf45b0(param_1,&UNK_14331a520);
  if (lVar2 == 0) {
    pdb_142de7cb0();
    pcVar1 = (code *)swi(3);
    lVar2 = (*pcVar1)();
    return lVar2;
  }
  uVar4 = lVar2 + 0x20;
  LOCK();
  bVar5 = *(longlong *)(lVar2 + 0x20) == 0;
  if (bVar5) {
    *(longlong *)(lVar2 + 0x20) = 8;
  }
  UNLOCK();
  if (!bVar5) {
    pdb_142dbc1f0(uVar4);
  }
  pdb_140e9a150(uVar4);
  uStack_30 = uVar4;
  pdb_140e9a150(uVar4 | 1);
  if (*(int *)(lVar2 + 0x28) != 2) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc83b0(&UNK_14331b8e0,0x28,&UNK_14331b920);
  }
  uStack_34 = *(undefined4 *)(lVar2 + 0x3c);
  uStack_44 = *(undefined4 *)(lVar2 + 0x2c);
  uStack_40 = *(undefined1 *)(lVar2 + 0x30);
  uStack_3c = *(undefined8 *)(lVar2 + 0x34);
  pdb_140e1e2e0(&uStack_44,param_2,0x23);
  uVar4 = uStack_30;
  *(undefined4 *)(lVar2 + 0x28) = 0;
  pdb_140e9a350(uStack_30);
  pdb_140e9a350();
  LOCK();
  lVar3 = *(longlong *)(lVar2 + 0x20);
  bVar5 = lVar3 == 8;
  if (bVar5) {
    *(longlong *)(lVar2 + 0x20) = 0;
    lVar3 = 8;
  }
  UNLOCK();
  if (!bVar5) {
    lVar3 = pdb_142dbca40(uVar4,0);
  }
  return lVar3;
}

