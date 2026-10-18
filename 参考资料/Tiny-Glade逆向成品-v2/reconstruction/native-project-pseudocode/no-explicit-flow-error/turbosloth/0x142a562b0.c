// VA 0x142a562b0, PDB extent 539 bytes
// concurrent_queue::bounded::Bounded::push_or_else<enum2$<core::result::Result<alloc::sync::Arc<dyn$<core::any::Any,core::marker::Send,core::marker::Sync>,alloc::alloc::Global>,turbosloth::asset::AssetBuildError> >,concurrent_queue::bounded::impl$0::push::closure_env$0<enum2$<core::result::Result<alloc::sync::Arc<dyn$<core::any::Any,core::marker::Send,core::marker::Sync>,alloc::alloc::Global>,turbosloth::asset::AssetBuildError> > > >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/turbosloth/src/lib.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   concurrent_queue::bounded::Bounded::push_or_else<enum2$<core::result::Result<alloc::sync::Arc<dyn$<core::any::Any,core::marker::Send,core::marker::Sync>,alloc::alloc::Global>,turbosloth::asset::AssetBuildError>
   >,concurrent_queue::bounded::impl$0::push::closure_env$0<enum2$<core::result::Result<alloc::sync::Arc<dyn$<core::any::Any,core::marker::Send,core::marker::Sync>,alloc::alloc::Global>,turbosloth::asset::AssetBuildError>
   > > >
   Source attribution: /home/h3/code/pouncelight/country-slice-private/crates/turbosloth/src/lib.rs
   Extent: 539 */

undefined8 *
pdb_142a562b0(undefined8 *param_1,longlong param_2,undefined8 *param_3,longlong *param_4)

{
  undefined8 *puVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  undefined8 uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  bool bVar11;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  
  uVar2 = *(ulonglong *)(param_2 + 0x108);
  uVar9 = uVar2 & *(ulonglong *)(param_2 + 0x80);
  uVar6 = *(ulonglong *)(param_2 + 0x80);
joined_r0x000142a562ef:
  do {
    if (uVar9 != 0) {
      uVar8 = *param_3;
      uVar3 = param_3[1];
      uVar4 = param_3[3];
      param_1[3] = param_3[2];
      param_1[4] = uVar4;
      param_1[1] = uVar8;
      param_1[2] = uVar3;
      uVar8 = 1;
LAB_142a56475:
      *param_1 = uVar8;
      return param_1;
    }
    uVar9 = uVar2 - 1 & uVar6;
    uVar2 = *(ulonglong *)(param_2 + 0x118);
    if (uVar9 + 1 < uVar2) {
      uVar10 = uVar6 + 1;
    }
    else {
      uVar10 = (-*(longlong *)(param_2 + 0x100) & uVar6) + *(longlong *)(param_2 + 0x100);
    }
    if (uVar2 <= uVar9) {
                    /* WARNING: Subroutine does not return */
      pdb_142dc81f2(uVar9,uVar2,&UNK_143624fd0);
    }
    uVar2 = *(ulonglong *)(*(longlong *)(param_2 + 0x110) + 0x20 + uVar9 * 0x28);
    if (uVar6 != uVar2) {
      if (uVar2 + *(longlong *)(param_2 + 0x100) == uVar6 + 1) {
        LOCK();
        UNLOCK();
        uVar8 = *param_3;
        uVar3 = param_3[1];
        uVar4 = param_3[2];
        uVar5 = param_3[3];
        if (*param_4 + param_4[0x20] == uVar6) {
          param_1[3] = uVar4;
          param_1[4] = uVar5;
          param_1[1] = uVar8;
          param_1[2] = uVar3;
          uVar8 = 0;
          goto LAB_142a56475;
        }
        uStack_48 = (undefined4)uVar4;
        uStack_44 = (undefined4)((ulonglong)uVar4 >> 0x20);
        uStack_40 = (undefined4)uVar5;
        uStack_3c = (undefined4)((ulonglong)uVar5 >> 0x20);
        *(undefined4 *)(param_3 + 2) = uStack_48;
        *(undefined4 *)((longlong)param_3 + 0x14) = uStack_44;
        *(undefined4 *)(param_3 + 3) = uStack_40;
        *(undefined4 *)((longlong)param_3 + 0x1c) = uStack_3c;
        *param_3 = uVar8;
        param_3[1] = uVar3;
      }
      else {
        pdb_140f502e0();
      }
      uVar2 = *(ulonglong *)(param_2 + 0x108);
      uVar9 = uVar2 & *(ulonglong *)(param_2 + 0x80);
      uVar6 = *(ulonglong *)(param_2 + 0x80);
      goto joined_r0x000142a562ef;
    }
    LOCK();
    uVar7 = *(ulonglong *)(param_2 + 0x80);
    bVar11 = uVar6 == uVar7;
    if (bVar11) {
      *(ulonglong *)(param_2 + 0x80) = uVar10;
      uVar7 = uVar6;
    }
    UNLOCK();
    if (bVar11) {
      puVar1 = (undefined8 *)(*(longlong *)(param_2 + 0x110) + uVar9 * 0x28);
      uVar8 = *param_3;
      uVar3 = param_3[1];
      uVar4 = param_3[3];
      puVar1[2] = param_3[2];
      puVar1[3] = uVar4;
      *puVar1 = uVar8;
      puVar1[1] = uVar3;
      puVar1[4] = uVar6 + 1;
      uVar8 = 2;
      goto LAB_142a56475;
    }
    uVar2 = *(ulonglong *)(param_2 + 0x108);
    uVar9 = uVar2 & uVar7;
    uVar6 = uVar7;
  } while( true );
}

