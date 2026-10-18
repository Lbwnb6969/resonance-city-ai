// VA 0x14177fb10, PDB extent 383 bytes
// country_core::systems::render_loop::compute_passes::gpu_generate_draw_lists::generate_wall_draw_lists::closure$2::closure$0::closure$0
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/render_loop/compute_passes/gpu_generate_draw_lists.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::systems::render_loop::compute_passes::gpu_generate_draw_lists::generate_wall_draw_lists::closure$2::closure$0::closure$0
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/render_loop/compute_passes/gpu_generate_draw_lists.rs
   Extent: 383 */

void pdb_14177fb10(longlong *param_1,ulonglong *param_2,int *param_3,undefined4 param_4,uint param_5
                  ,uint param_6)

{
  int iVar1;
  code *pcVar2;
  byte *arg0;
  ulonglong uVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  
  iVar1 = *param_3;
  pdb_14007ee60();
  arg0 = pub_1406abae0(0xc,1);
  if (arg0 == (byte *)0x0) {
    pdb_142dc7e2a(1,0xc);
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  *(undefined4 *)arg0 = param_4;
  *(uint *)(arg0 + 4) = param_6 | param_5;
  *(int *)(arg0 + 8) = iVar1;
  uVar3 = *param_2 & 0xffffffffffffffc0;
  uVar4 = (ulonglong)(((uint)*param_2 & 0x3f) << 6);
  iVar1 = *(int *)(uVar3 + 0x140 + uVar4);
  uVar5 = 0x1f;
  if (iVar1 != 0) {
    if (iVar1 != 1) {
                    /* WARNING: Subroutine does not return */
      pdb_142dc83b0(&UNK_1433335a8,0xf,&UNK_143333b38);
    }
    uVar5 = 0x20;
  }
  (**(code **)(param_1[1] + 0x428))
            (*(undefined8 *)(*param_1 + 0x50),*(undefined8 *)(uVar3 + 0x130 + uVar4),uVar5,0,0xc,
             arg0);
  pub_1406abac0(arg0,0xc,1);
  pdb_1417a5fa0(*param_1,param_1[1],*param_2,param_5);
  *param_3 = *param_3 + (((param_5 >> 5) + 1) - (uint)((param_5 & 0x1f) == 0));
  return;
}

