// Matched PDB: rapier3d::pipeline::query_pipeline::impl$5::map_typed_part_at<parry3d::query::ray::ray_composite_shape::impl$4::visit::closure_env$0<rapier3d::pipeline::query_pipeline::QueryPipelineAsCompositeShape> >
// VA 0x141a07850, PDB extent 312 bytes
// Ghidra pseudocode; types and unresolved calls are not original source.

/* Matched PDB:
   rapier3d::pipeline::query_pipeline::impl$5::map_typed_part_at<parry3d::query::ray::ray_composite_shape::impl$4::visit::closure_env$0<rapier3d::pipeline::query_pipeline::QueryPipelineAsCompositeShape>
   >
   Extent: 312 bytes. No whole-program auto-analysis. */

void pdb_141a07850(longlong param_1,uint param_2,int param_3,undefined8 *param_4)

{
  ulonglong *puVar1;
  undefined8 uVar2;
  code *pcVar3;
  char cVar4;
  longlong lVar5;
  ulonglong uVar6;
  longlong lVar7;
  undefined4 extraout_XMM0_Da;
  undefined4 uVar8;
  
  if (*(ulonglong *)(*(longlong *)(param_1 + 0x10) + 0x10) <= (ulonglong)param_2) {
    return;
  }
  lVar7 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 8);
  lVar5 = (ulonglong)param_2 * 0xc0;
  if (*(int *)(lVar7 + lVar5) != 1) {
    return;
  }
  lVar7 = lVar7 + lVar5;
  if (*(int *)(lVar7 + 4) != param_3) {
    return;
  }
  cVar4 = pdb_141a08360(param_1 + 0x18,*(undefined8 *)(param_1 + 8),param_2,param_3,lVar7 + 0x10);
  if (cVar4 == '\0') {
    return;
  }
  uVar6 = (**(code **)(*(longlong *)(lVar7 + 0x28) + 0x30))
                    ((*(longlong *)(*(longlong *)(lVar7 + 0x28) + 0x10) - 1U & 0xfffffffffffffff0) +
                     *(longlong *)(lVar7 + 0x20) + 0x10,lVar7 + 0x44,*param_4,
                     *(undefined4 *)param_4[1],*(undefined1 *)param_4[2]);
  if ((uVar6 & 1) == 0) {
    return;
  }
  puVar1 = (ulonglong *)param_4[4];
  uVar6 = *puVar1;
  if (uVar6 < 4) {
    lVar7 = param_4[3];
    uVar2 = *(undefined8 *)param_4[5];
    lVar5 = uVar6 * 0x10;
    *(undefined4 *)(lVar7 + lVar5) = 1;
    *(undefined8 *)(lVar7 + 4 + lVar5) = uVar2;
    *(undefined4 *)(lVar7 + 0xc + lVar5) = extraout_XMM0_Da;
    uVar8 = extraout_XMM0_Da;
    if (*puVar1 < 4) {
      *(undefined1 *)(param_4[6] + *puVar1) = 1;
      if (*puVar1 < 4) {
        *(undefined4 *)(param_4[7] + *puVar1 * 4) = extraout_XMM0_Da;
        return;
      }
      goto LAB_141a07976;
    }
  }
  else {
    uVar8 = pdb_142dc81f2(uVar6,4,&UNK_143361e40);
  }
  uVar8 = pdb_142dc81f2(uVar8,4,&UNK_143361e58);
LAB_141a07976:
  pdb_142dc81f2(uVar8,4,&UNK_143361e70);
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}

