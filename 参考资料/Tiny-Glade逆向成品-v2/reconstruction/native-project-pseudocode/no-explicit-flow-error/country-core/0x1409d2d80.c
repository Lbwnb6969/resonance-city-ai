// VA 0x1409d2d80, PDB extent 240 bytes
// country_core::render::nani::gpu_world::GpuWorld::owned_subset_mut
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/render/nani/gpu_world.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: country_core::render::nani::gpu_world::GpuWorld::owned_subset_mut
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/render/nani/gpu_world.rs
   Extent: 240 */

ulonglong pdb_1409d2d80(longlong param_1,byte param_2)

{
  longlong *plVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  bool bVar5;
  byte *pbStack_38;
  code *pcStack_30;
  ulonglong uStack_28;
  byte abStack_19 [9];
  
  abStack_19[1] = 0xfe;
  abStack_19[2] = 0xff;
  abStack_19[3] = 0xff;
  abStack_19[4] = 0xff;
  abStack_19[5] = 0xff;
  abStack_19[6] = 0xff;
  abStack_19[7] = 0xff;
  abStack_19[8] = 0xff;
  uVar3 = (ulonglong)((uint)param_2 * 0xa0);
  uVar4 = param_1 + uVar3 + 0x38;
  plVar1 = (longlong *)(param_1 + 0x38 + uVar3);
  LOCK();
  bVar5 = *plVar1 == 0;
  if (bVar5) {
    *plVar1 = 8;
  }
  UNLOCK();
  abStack_19[0] = param_2;
  if (!bVar5) {
    pdb_142dbc1f0(uVar4,uVar3,1000000000);
  }
  pdb_140e9a150(uVar4);
  pdb_140e9a150(uVar4 | 1);
  lVar2 = *(longlong *)(param_1 + uVar3 + 0x40);
  uStack_28 = uVar4;
  if (lVar2 == -0x7fffffffffffffff) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc8150(&UNK_14302d690);
  }
  if (SBORROW8(0,lVar2)) {
    pbStack_38 = abStack_19;
    pcStack_30 = pdb_1409d4a30;
                    /* WARNING: Subroutine does not return */
    pdb_142dc83d0(&UNK_14302d6a8,&pbStack_38,&UNK_14302d6c0);
  }
  return uVar4;
}

