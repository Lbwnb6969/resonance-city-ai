// VA 0x1409d3960, PDB extent 1604 bytes
// country_core::render::nani::gpu_world::GpuWorld::new
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/render/nani/gpu_world.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: country_core::render::nani::gpu_world::GpuWorld::new
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/render/nani/gpu_world.rs
   Extent: 1604 */

void pdb_1409d3960(void)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 auStackX_8 [4];
  
  lVar2 = pdb_142d7c6d0();
  lVar2 = -lVar2;
  *(undefined8 *)(&stack0x00001420 + lVar2) = 0xfffffffffffffffe;
  *(undefined8 *)(&stack0x000000b0 + lVar2) = 0;
  *(undefined8 *)(&stack0x000000b8 + lVar2) = 0;
  *(undefined8 *)(&stack0x000000a0 + lVar2) = 0;
  *(undefined8 *)(&stack0x000000a8 + lVar2) = 0;
  *(undefined8 *)(&stack0x00000090 + lVar2) = 0;
  *(undefined8 *)(&stack0x00000098 + lVar2) = 0;
  *(undefined8 *)(&stack0x00000080 + lVar2) = 0;
  *(undefined8 *)(&stack0x00000088 + lVar2) = 0;
  *(undefined8 *)(&stack0x00000070 + lVar2) = 0;
  *(undefined8 *)(&stack0x00000078 + lVar2) = 0;
  *(undefined8 *)(&stack0x00000060 + lVar2) = 0;
  *(undefined8 *)(&stack0x00000068 + lVar2) = 0;
  *(undefined8 *)(&stack0x00000050 + lVar2) = 0;
  *(undefined8 *)(&stack0x00000058 + lVar2) = 0;
  *(undefined8 *)(&stack0x00000040 + lVar2) = 0;
  *(undefined8 *)(&stack0x00000048 + lVar2) = 0;
  *(undefined8 *)(&stack0x00000030 + lVar2) = 0;
  *(undefined8 *)(&stack0x00000038 + lVar2) = 0;
  *(undefined8 *)((longlong)auStackX_8 + lVar2 + 0x18) = 0;
  *(undefined8 *)(&stack0x00000028 + lVar2) = 0;
  *(undefined8 *)((longlong)auStackX_8 + lVar2 + 8) = 0;
  *(undefined8 *)((longlong)auStackX_8 + lVar2 + 0x10) = 0;
  puVar1 = (undefined8 *)((longlong)auStackX_8 + lVar2 + -8);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined8 *)(&stack0xfffffffffffffff0 + lVar2) = 0;
  *(undefined8 *)(&stack0xfffffffffffffff8 + lVar2) = 0;
  *(undefined8 *)(&stack0xffffffffffffffe0 + lVar2) = 0;
  *(undefined8 *)(&stack0xffffffffffffffe8 + lVar2) = 0;
  *(undefined8 *)(&stack0x000000c0 + lVar2) = 0;
                    /* WARNING: Could not recover jumptable at 0x0001409d39f1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&UNK_14302dd0c + _UNK_14302dd0c))(&UNK_14302dd0c,0x800,&UNK_14302dd0c + _UNK_14302dd0c)
  ;
  return;
}

