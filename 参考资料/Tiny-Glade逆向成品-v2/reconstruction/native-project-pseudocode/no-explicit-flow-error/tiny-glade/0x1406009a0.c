// VA 0x1406009a0, PDB extent 574 bytes
// concurrent_queue::unbounded::Unbounded::pop<async_task::task::FallibleTask<enum2$<core::result::Result<alloc::vec::Vec<enum2$<core::option::Option<rhapsody::raw::texture::Texture> >,alloc::alloc::Global>,alloc::boxed::Box<dyn$<core::any::Any,core::marker::Send>,alloc::alloc::Global> > >,tuple$<> > >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/main.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   concurrent_queue::unbounded::Unbounded::pop<async_task::task::FallibleTask<enum2$<core::result::Result<alloc::vec::Vec<enum2$<core::option::Option<rhapsody::raw::texture::Texture>
   >,alloc::alloc::Global>,alloc::boxed::Box<dyn$<core::any::Any,core::marker::Send>,alloc::alloc::Global>
   > >,tuple$<> > >
   Source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/main.rs
   Extent: 574 */

undefined1 * pdb_1406009a0(undefined1 *param_1,ulonglong *param_2)

{
  byte *pbVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong lVar6;
  byte *arg0;
  longlong lVar7;
  ulonglong uVar8;
  uint uVar9;
  bool bVar10;
  
  arg0 = (byte *)param_2[1];
  uVar5 = *param_2;
LAB_1406009dc:
  uVar9 = (uint)(uVar5 >> 1) & 0x1f;
  if ((ulonglong)uVar9 == 0x1f) {
LAB_1406009d0:
    pdb_140f502e0();
    uVar5 = *param_2;
    arg0 = (byte *)param_2[1];
    goto LAB_1406009dc;
  }
  uVar8 = uVar5 + 2;
  if ((uVar5 & 1) == 0) {
    LOCK();
    UNLOCK();
    uVar4 = param_2[0x10];
    if (uVar5 >> 1 == uVar4 >> 1) {
      if ((uVar4 & 1) == 0) {
        param_1[1] = 0;
      }
      else {
        param_1[1] = 1;
      }
      uVar3 = 1;
      goto LAB_140600bcb;
    }
    uVar8 = uVar8 | 0x3f < (uVar4 ^ uVar5);
  }
  if (arg0 == (byte *)0x0) goto LAB_1406009d0;
  LOCK();
  uVar4 = *param_2;
  bVar10 = uVar5 == uVar4;
  if (bVar10) {
    *param_2 = uVar8;
    uVar4 = uVar5;
  }
  UNLOCK();
  if (!bVar10) {
    arg0 = (byte *)param_2[1];
    uVar5 = uVar4;
    goto LAB_1406009dc;
  }
  lVar6 = (ulonglong)uVar9 + 1;
  if (lVar6 == 0x1f) {
    uVar5 = *(ulonglong *)(arg0 + 0x1f0);
    while (uVar5 == 0) {
      pdb_140f502e0();
      uVar5 = *(ulonglong *)(arg0 + 0x1f0);
    }
    lVar7 = *(longlong *)(uVar5 + 0x1f0);
    param_2[1] = uVar5;
    *param_2 = (uVar8 & 0xfffffffffffffffe) + (ulonglong)(lVar7 != 0) + 2;
  }
  pbVar1 = arg0 + (uVar9 << 4);
  uVar5 = *(ulonglong *)(arg0 + (ulonglong)(uVar9 << 4) + 8);
  while ((uVar5 & 1) == 0) {
    pdb_140f502e0();
    uVar5 = *(ulonglong *)(pbVar1 + 8);
  }
  uVar2 = *(undefined8 *)pbVar1;
  if ((int)lVar6 == 0x1f) {
    lVar6 = 0;
    do {
      lVar7 = lVar6 * 0x10;
      if ((*(ulonglong *)(arg0 + lVar7 + 8) & 2) == 0) {
        uVar5 = *(ulonglong *)(arg0 + lVar7 + 8);
        do {
          LOCK();
          uVar8 = *(ulonglong *)(arg0 + lVar7 + 8);
          bVar10 = uVar5 == uVar8;
          if (bVar10) {
            *(ulonglong *)(arg0 + lVar7 + 8) = uVar5 | 4;
            uVar8 = uVar5;
          }
          UNLOCK();
          uVar5 = uVar8;
        } while (!bVar10);
        if ((uVar8 & 2) == 0) goto LAB_140600b7d;
      }
      if ((*(ulonglong *)(arg0 + lVar7 + 0x18) & 2) == 0) {
        uVar5 = *(ulonglong *)(arg0 + lVar7 + 0x18);
        do {
          LOCK();
          uVar8 = *(ulonglong *)(arg0 + lVar7 + 0x18);
          bVar10 = uVar5 == uVar8;
          if (bVar10) {
            *(ulonglong *)(arg0 + lVar7 + 0x18) = uVar5 | 4;
            uVar8 = uVar5;
          }
          UNLOCK();
          uVar5 = uVar8;
        } while (!bVar10);
        if ((uVar8 & 2) == 0) goto LAB_140600b7d;
      }
      lVar6 = lVar6 + 2;
    } while (lVar6 != 0x1e);
  }
  else {
    uVar5 = *(ulonglong *)(pbVar1 + 8);
    do {
      LOCK();
      uVar8 = *(ulonglong *)(pbVar1 + 8);
      bVar10 = uVar5 == uVar8;
      if (bVar10) {
        *(ulonglong *)(pbVar1 + 8) = uVar5 | 2;
        uVar8 = uVar5;
      }
      UNLOCK();
      uVar5 = uVar8;
    } while (!bVar10);
    if ((uVar8 & 4) == 0) goto LAB_140600b7d;
    if (uVar9 < 0x1d) {
      do {
        lVar7 = lVar6 * 0x10;
        if ((*(ulonglong *)(arg0 + lVar7 + 8) & 2) == 0) {
          uVar5 = *(ulonglong *)(arg0 + lVar7 + 8);
          do {
            LOCK();
            uVar8 = *(ulonglong *)(arg0 + lVar7 + 8);
            bVar10 = uVar5 == uVar8;
            if (bVar10) {
              *(ulonglong *)(arg0 + lVar7 + 8) = uVar5 | 4;
              uVar8 = uVar5;
            }
            UNLOCK();
            uVar5 = uVar8;
          } while (!bVar10);
          if ((uVar8 & 2) == 0) goto LAB_140600b7d;
        }
        lVar6 = lVar6 + 1;
      } while (lVar6 != 0x1e);
    }
  }
  pub_1406abac0(arg0,0x1f8,8);
LAB_140600b7d:
  *(undefined8 *)(param_1 + 8) = uVar2;
  uVar3 = 0;
LAB_140600bcb:
  *param_1 = uVar3;
  return param_1;
}

