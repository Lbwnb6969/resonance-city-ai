// VA 0x14177fdf0, PDB extent 327 bytes
// country_core::systems::render_loop::compute_passes::gpu_generate_draw_lists::generate_wall_draw_lists_shadow::closure$0::closure$0::closure$0
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/render_loop/compute_passes/gpu_generate_draw_lists.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::systems::render_loop::compute_passes::gpu_generate_draw_lists::generate_wall_draw_lists_shadow::closure$0::closure$0::closure$0
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/render_loop/compute_passes/gpu_generate_draw_lists.rs
   Extent: 327 */

void pdb_14177fdf0(longlong *param_1,ulonglong *param_2,undefined4 param_3,uint param_4)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  code *pcVar4;
  short sVar5;
  byte *arg0;
  ulonglong uVar6;
  undefined8 unaff_RBX;
  uint uVar7;
  undefined8 unaff_RBP;
  undefined8 unaff_RSI;
  undefined8 unaff_RDI;
  undefined8 uVar8;
  ulonglong uVar9;
  uint uVar10;
  undefined8 unaff_R14;
  undefined8 unaff_R15;
  undefined8 uVar11;
  
  uVar11 = 0xfffffffffffffffe;
  pdb_14007ee60();
  arg0 = pub_1406abae0(8,1);
  if (arg0 == (byte *)0x0) {
    pdb_142dc7e2a(1,8);
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  *(undefined4 *)arg0 = param_3;
  *(uint *)(arg0 + 4) = param_4;
  uVar6 = *param_2 & 0xffffffffffffffc0;
  uVar9 = (ulonglong)(((uint)*param_2 & 0x3f) << 6);
  iVar1 = *(int *)(uVar6 + 0x140 + uVar9);
  uVar8 = 0x1f;
  if (iVar1 != 0) {
    if (iVar1 != 1) {
                    /* WARNING: Subroutine does not return */
      pdb_142dc83b0(&UNK_1433335a8,0xf,&UNK_143333b38);
    }
    uVar8 = 0x20;
  }
  (**(code **)(param_1[1] + 0x428))
            (*(undefined8 *)(*param_1 + 0x50),*(undefined8 *)(uVar6 + 0x130 + uVar9),uVar8,0,8,arg0)
  ;
  pub_1406abac0(arg0,8,1);
  lVar2 = *param_1;
  lVar3 = param_1[1];
  uVar9 = *param_2 & 0xffffffffffffffc0;
  uVar6 = (ulonglong)(((uint)*param_2 & 0x3f) << 6);
  uVar10 = *(uint *)(uVar9 + 0x148 + uVar6);
  uVar7 = uVar10 & 0xffff;
  if (uVar7 == 0) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc84f0(&UNK_143333610);
  }
  uVar10 = uVar10 >> 0x10;
  if (uVar10 == 0) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc84f0(&UNK_143333628);
  }
  sVar5 = (short)*(undefined4 *)(uVar9 + 0x14c + uVar6);
  if (sVar5 != 0) {
    if (*(char *)(lVar3 + 0xb98) == '\x01') {
      pdb_140e64b70(lVar3,*(undefined8 *)(lVar2 + 0x50),uVar9,param_4,uVar11,unaff_RBX,unaff_RBP,
                    unaff_RDI,unaff_RSI,unaff_R14,unaff_R15);
    }
                    /* WARNING: Could not recover jumptable at 0x0001417a6065. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar3 + 0x378))
              (*(undefined8 *)(lVar2 + 0x50),(param_4 / uVar7 + 1) - (uint)(param_4 % uVar7 == 0),
               (uVar10 != 1) + (uVar10 == 1),(sVar5 != 1) + (sVar5 == 1));
    return;
  }
                    /* WARNING: Subroutine does not return */
  pdb_142dc84f0(&UNK_143333640);
}

