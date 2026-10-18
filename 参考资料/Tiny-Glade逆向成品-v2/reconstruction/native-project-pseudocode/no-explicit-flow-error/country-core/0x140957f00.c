// VA 0x140957f00, PDB extent 308 bytes
// country_core::render::nani::gpu_world::GpuWorld::create_instances_no_data<country_core::render::nani::systems::nani_maintain_instances::closure_env$1>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/render/nani/gpu_world.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::render::nani::gpu_world::GpuWorld::create_instances_no_data<country_core::render::nani::systems::nani_maintain_instances::closure_env$1>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/render/nani/gpu_world.rs
   Extent: 308 */

void pdb_140957f00(longlong param_1,byte param_2,undefined8 param_3,longlong param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  undefined8 unaff_RBX;
  
  uVar5 = (ulonglong)param_2;
  uVar2 = *(undefined8 *)(param_1 + 0x1258 + (ulonglong)((uint)param_2 * 8));
  plVar3 = (longlong *)pdb_1409d2d80(param_1,uVar5);
  uVar4 = pdb_1409d12c0(uVar5,param_2,*(longlong *)(param_1 + 0x28) + 0x10,uVar2,
                        *(undefined8 *)(&UNK_143026e60 + (uint)param_2 * 8),param_3,param_4,
                        &stack0x00000028,&UNK_143026238,&UNK_143026260);
  pdb_140e9a350(plVar3);
  pdb_140e9a350();
  LOCK();
  lVar1 = *plVar3;
  if (lVar1 == 8) {
    *plVar3 = 0;
  }
  UNLOCK();
  if (lVar1 != 8) {
    pdb_142dbca40(plVar3,0);
  }
  pdb_1409d2e70(param_1,CONCAT71((int7)((ulonglong)unaff_RBX >> 8),param_2) & 0xffffffff,uVar2,uVar4
               );
  *(longlong *)(param_1 + 0x1340) = *(longlong *)(param_1 + 0x1340) + param_4;
  return;
}

