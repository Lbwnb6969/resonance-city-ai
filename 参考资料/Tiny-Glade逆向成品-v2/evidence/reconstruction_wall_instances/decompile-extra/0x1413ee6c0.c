// Matched PDB: alloc::vec::spec_from_iter::impl$0::from_iter<system_wall_constructor::construct_wooden_walls::construct_wall_boards::WallSample,core::iter::adapters::map::Map<core::iter::adapters::zip::Zip<core::slice::iter::Iter<glam::f32::vec3::Vec3>,core::slice::iter::Iter<f32> >,system_wall_constructor::construct_wooden_walls::construct_wall_boards::impl$2::new::closure_env$0> >
// VA 0x1413ee6c0, PDB extent 350 bytes
// Ghidra pseudocode; types and unresolved calls are not original source.

/* Matched PDB:
   alloc::vec::spec_from_iter::impl$0::from_iter<system_wall_constructor::construct_wooden_walls::construct_wall_boards::WallSample,core::iter::adapters::map::Map<core::iter::adapters::zip::Zip<core::slice::iter::Iter<glam::f32::vec3::Vec3>,core::slice::iter::Iter<f32>
   >,system_wall_constructor::construct_wooden_walls::construct_wall_boards::impl$2::new::closure_env$0>
   >
   Extent: 350 bytes. No whole-program auto-analysis. */

ulonglong * pdb_1413ee6c0(ulonglong *param_1,undefined4 *param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined4 *puVar3;
  ulonglong *puVar4;
  ulonglong uVar5;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  longlong lStack_98;
  longlong lStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  ulonglong *puStack_78;
  undefined8 uStack_70;
  ulonglong uStack_68;
  ulonglong uStack_60;
  ulonglong uStack_58;
  ulonglong auStack_50 [2];
  
  auStack_50[1] = 0xfffffffffffffffe;
  lVar1 = *(longlong *)(param_2 + 8);
  lVar2 = *(longlong *)(param_2 + 10);
  uVar5 = lVar2 - lVar1;
  puVar3 = (undefined4 *)(uVar5 * 0x14);
  if (uVar5 < 0x666666666666667) goto LAB_1413ee719;
  puVar4 = (ulonglong *)0x0;
  while( true ) {
    param_1 = puVar4;
    param_2 = puVar3;
    pdb_142dc7e2a();
LAB_1413ee719:
    if (puVar3 == (undefined4 *)0x0) break;
    pdb_14007ee60();
    uStack_68 = func_0x0001406abab0(puVar3,4);
    puVar4 = (ulonglong *)0x4;
    if (uStack_68 != 0) {
LAB_1413ee74d:
      puStack_78 = auStack_50;
      auStack_50[0] = 0;
      uStack_88 = *(undefined8 *)(param_2 + 0xc);
      uStack_80 = *(undefined8 *)(param_2 + 0xe);
      uStack_b8 = *param_2;
      uStack_b4 = param_2[1];
      uStack_b0 = param_2[2];
      uStack_ac = param_2[3];
      uStack_a8 = param_2[4];
      uStack_a4 = param_2[5];
      uStack_a0 = param_2[6];
      uStack_9c = param_2[7];
      uStack_70 = 0;
      lStack_98 = lVar1;
      lStack_90 = lVar2;
      uStack_60 = uVar5;
      uStack_58 = uStack_68;
      pdb_141420320(&uStack_b8,&puStack_78);
      param_1[2] = auStack_50[0];
      *param_1 = uStack_60;
      param_1[1] = uStack_58;
      return param_1;
    }
  }
  uStack_68 = 4;
  uVar5 = 0;
  goto LAB_1413ee74d;
}

