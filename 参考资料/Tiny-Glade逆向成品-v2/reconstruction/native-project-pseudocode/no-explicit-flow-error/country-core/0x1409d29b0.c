// VA 0x1409d29b0, PDB extent 192 bytes
// country_core::render::nani::gpu_world::GpuWorld::get_subset
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/render/nani/gpu_world.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: country_core::render::nani::gpu_world::GpuWorld::get_subset
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/render/nani/gpu_world.rs
   Extent: 192 */

ulonglong * pdb_1409d29b0(longlong param_1,uint param_2,undefined8 param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong *puVar4;
  
  uVar3 = (ulonglong)((param_2 & 0xff) * 0xa0);
  lVar1 = param_1 + uVar3;
  puVar4 = (ulonglong *)(lVar1 + 0x38);
  uVar3 = *(ulonglong *)(param_1 + 0x38 + uVar3);
  if (uVar3 < 0xfffffffffffffff0 && (char)(((uint)uVar3 & 8) >> 3) == '\0') {
    LOCK();
    uVar2 = *puVar4;
    if (uVar3 == uVar2) {
      *puVar4 = uVar3 + 0x10;
    }
    UNLOCK();
    if (uVar3 == uVar2) goto LAB_1409d2a0a;
  }
  pdb_142dbb5f0(puVar4,0,param_3,1000000000);
LAB_1409d2a0a:
  pdb_140e9a150(puVar4);
  pdb_140e9a150((ulonglong)puVar4 | 1);
  if (*(longlong *)(lVar1 + 0x40) == -0x7fffffffffffffff) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc8150(&UNK_14302d660);
  }
  return puVar4;
}

