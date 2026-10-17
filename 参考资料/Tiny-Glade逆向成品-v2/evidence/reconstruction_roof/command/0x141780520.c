// Matched PDB: core::ops::function::FnOnce::call_once<country_core::systems::render_loop::compute_passes::roof_tiles_gravity::roof_tiles_gravity_compute::closure$1::closure_env$0,tuple$<rhapsody::rg::node_builder::compute_pass_builder::ComputeDispatchApi> >
// VA 0x141780520, PDB extent 379 bytes
// Ghidra pseudocode; types and unresolved calls are not original source.

/* Matched PDB:
   core::ops::function::FnOnce::call_once<country_core::systems::render_loop::compute_passes::roof_tiles_gravity::roof_tiles_gravity_compute::closure$1::closure_env$0,tuple$<rhapsody::rg::node_builder::compute_pass_builder::ComputeDispatchApi>
   >
   Extent: 379 bytes. No whole-program auto-analysis. */

void pdb_141780520(longlong *param_1,longlong *param_2,ulonglong *param_3)

{
  undefined8 *puVar1;
  longlong lVar2;
  int iVar3;
  ulonglong uVar4;
  longlong lVar5;
  longlong lVar6;
  code *pcVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined4 uStack_60;
  longlong lStack_58;
  undefined8 *puStack_50;
  undefined8 uStack_48;
  
  uStack_48 = 0xfffffffffffffffe;
  lStack_58 = *param_1;
  puVar9 = (undefined8 *)param_1[1];
  puVar1 = (undefined8 *)((longlong)puVar9 + param_1[2] * 0x14);
  uVar4 = *param_3;
  lVar5 = *param_2;
  lVar6 = param_2[1];
  lVar2 = (uVar4 & 0xffffffffffffffc0) + (ulonglong)(((uint)uVar4 & 0x3f) << 6);
  puStack_50 = puVar9;
  do {
    if (puVar9 == puVar1) {
      if (lStack_58 != 0) {
        func_0x0001406abac0(puStack_50,lStack_58 * 0x14,4);
      }
      return;
    }
    uStack_70 = *puVar9;
    uStack_60 = *(undefined4 *)(puVar9 + 2);
    uStack_68 = puVar9[1];
    iVar3 = *(int *)(lVar2 + 0x140);
    uVar8 = 0x1f;
    if (iVar3 != 0) {
      if (iVar3 != 1) {
        pdb_142dc83b0(&UNK_1433335a8,0xf,&UNK_143333b50);
                    /* WARNING: Does not return */
        pcVar7 = (code *)invalidInstructionException();
        (*pcVar7)();
      }
      uVar8 = 0x20;
    }
    puVar9 = (undefined8 *)((longlong)puVar9 + 0x14);
    (**(code **)(lVar6 + 0x428))
              (*(undefined8 *)(lVar5 + 0x50),*(undefined8 *)(lVar2 + 0x130),uVar8,0,0x14,&uStack_70)
    ;
    pdb_1417a5fa0(lVar5,lVar6,uVar4);
  } while( true );
}

