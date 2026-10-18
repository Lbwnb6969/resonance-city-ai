// VA 0x14030e850, PDB extent 392 bytes
// concurrent_queue::bounded::Bounded::push_or_else<async_task::task::FallibleTask<enum2$<core::result::Result<tuple$<rhapsody::rg::compiled::impl$3::record_batch::RecordedNodeRange,alloc::vec::Vec<rhapsody::rg::executor::NodePgoDuration,alloc::alloc::Global> >,alloc::boxed::Box<dyn$<core::any::Any,core::marker::Send>,alloc::alloc::Global> > >,tuple$<> >,concurrent_queue::bounded::impl$0::push::closure_env$0<async_task::task::FallibleTask<enum2$<core::result::Result<tuple$<rhapsody::rg::compiled::impl$3::record_batch::RecordedNodeRange,alloc::vec::Vec<rhapsody::rg::executor::NodePgoDuration,alloc::alloc::Global> >,alloc::boxed::Box<dyn$<core::any::Any,core::marker::Send>,alloc::alloc::Global> > >,tuple$<> > > >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/main.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   concurrent_queue::bounded::Bounded::push_or_else<async_task::task::FallibleTask<enum2$<core::result::Result<tuple$<rhapsody::rg::compiled::impl$3::record_batch::RecordedNodeRange,alloc::vec::Vec<rhapsody::rg::executor::NodePgoDuration,alloc::alloc::Global>
   >,alloc::boxed::Box<dyn$<core::any::Any,core::marker::Send>,alloc::alloc::Global> > >,tuple$<>
   >,concurrent_queue::bounded::impl$0::push::closure_env$0<async_task::task::FallibleTask<enum2$<core::result::Result<tuple$<rhapsody::rg::compiled::impl$3::record_batch::RecordedNodeRange,alloc::vec::Vec<rhapsody::rg::executor::NodePgoDuration,alloc::alloc::Global>
   >,alloc::boxed::Box<dyn$<core::any::Any,core::marker::Send>,alloc::alloc::Global> > >,tuple$<> >
   > >
   Source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/main.rs
   Extent: 392 */

undefined8 pdb_14030e850(longlong param_1,longlong param_2,longlong *param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong *plVar5;
  ulonglong uVar6;
  bool bVar7;
  
  uVar1 = *(ulonglong *)(param_1 + 0x108);
  uVar4 = uVar1 & *(ulonglong *)(param_1 + 0x80);
  uVar2 = *(ulonglong *)(param_1 + 0x80);
  while( true ) {
    if (uVar4 != 0) {
      return 1;
    }
    uVar4 = uVar1 - 1 & uVar2;
    uVar1 = *(ulonglong *)(param_1 + 0x118);
    if (uVar4 + 1 < uVar1) {
      uVar6 = uVar2 + 1;
    }
    else {
      uVar6 = (-*(longlong *)(param_1 + 0x100) & uVar2) + *(longlong *)(param_1 + 0x100);
    }
    if (uVar1 <= uVar4) break;
    uVar1 = *(ulonglong *)(*(longlong *)(param_1 + 0x110) + uVar4 * 0x10);
    if (uVar2 == uVar1) {
      LOCK();
      uVar3 = *(ulonglong *)(param_1 + 0x80);
      bVar7 = uVar2 == uVar3;
      if (bVar7) {
        *(ulonglong *)(param_1 + 0x80) = uVar6;
        uVar3 = uVar2;
      }
      UNLOCK();
      if (bVar7) {
        plVar5 = (longlong *)(*(longlong *)(param_1 + 0x110) + uVar4 * 0x10);
        plVar5[1] = param_2;
        *plVar5 = uVar2 + 1;
        return 2;
      }
      uVar1 = *(ulonglong *)(param_1 + 0x108);
      uVar4 = uVar1 & uVar3;
      uVar2 = uVar3;
    }
    else {
      if (uVar1 + *(longlong *)(param_1 + 0x100) == uVar2 + 1) {
        LOCK();
        UNLOCK();
        if (*param_3 + param_3[0x20] == uVar2) {
          return 0;
        }
      }
      else {
        pdb_140f502e0();
      }
      uVar1 = *(ulonglong *)(param_1 + 0x108);
      uVar4 = uVar1 & *(ulonglong *)(param_1 + 0x80);
      uVar2 = *(ulonglong *)(param_1 + 0x80);
    }
  }
                    /* WARNING: Subroutine does not return */
  pdb_142dc81f2(uVar4,uVar1,&UNK_142f3be58);
}

