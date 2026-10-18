// VA 0x141af22c0, PDB extent 574 bytes
// concurrent_queue::unbounded::Unbounded::pop<enum2$<core::result::Result<alloc::sync::Arc<turbosloth::asset::FileAsset,alloc::alloc::Global>,turbosloth::asset::AssetBuildError> > >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/lib.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   concurrent_queue::unbounded::Unbounded::pop<enum2$<core::result::Result<alloc::sync::Arc<turbosloth::asset::FileAsset,alloc::alloc::Global>,turbosloth::asset::AssetBuildError>
   > >
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/lib.rs
   Extent: 574 */

undefined1 * pdb_141af22c0(undefined1 *param_1,ulonglong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  longlong lVar11;
  byte *arg0;
  ulonglong uVar12;
  uint uVar13;
  bool bVar14;
  
  arg0 = (byte *)param_2[1];
  uVar9 = *param_2;
LAB_141af22fc:
  uVar13 = (uint)(uVar9 >> 1) & 0x1f;
  uVar10 = (ulonglong)uVar13;
  if (uVar10 == 0x1f) {
LAB_141af22f0:
    pdb_140f502e0();
    uVar9 = *param_2;
    arg0 = (byte *)param_2[1];
    goto LAB_141af22fc;
  }
  uVar12 = uVar9 + 2;
  if ((uVar9 & 1) == 0) {
    LOCK();
    UNLOCK();
    uVar8 = param_2[0x10];
    if (uVar9 >> 1 == uVar8 >> 1) {
      if ((uVar8 & 1) == 0) {
        param_1[1] = 0;
      }
      else {
        param_1[1] = 1;
      }
      uVar7 = 1;
      goto LAB_141af24eb;
    }
    uVar12 = uVar12 | 0x3f < (uVar8 ^ uVar9);
  }
  if (arg0 == (byte *)0x0) goto LAB_141af22f0;
  LOCK();
  uVar8 = *param_2;
  bVar14 = uVar9 == uVar8;
  if (bVar14) {
    *param_2 = uVar12;
    uVar8 = uVar9;
  }
  UNLOCK();
  if (!bVar14) {
    arg0 = (byte *)param_2[1];
    uVar9 = uVar8;
    goto LAB_141af22fc;
  }
  lVar11 = uVar10 + 1;
  if (lVar11 == 0x1f) {
    plVar1 = *(longlong **)arg0;
    while (plVar1 == (longlong *)0x0) {
      pdb_140f502e0();
      plVar1 = *(longlong **)arg0;
    }
    lVar2 = *plVar1;
    param_2[1] = (ulonglong)plVar1;
    *param_2 = (uVar12 & 0xfffffffffffffffe) + (ulonglong)(lVar2 != 0) + 2;
  }
  uVar9 = *(ulonglong *)(arg0 + uVar10 * 0x28 + 0x28);
  while ((uVar9 & 1) == 0) {
    pdb_140f502e0();
    uVar9 = *(ulonglong *)(arg0 + uVar10 * 0x28 + 0x28);
  }
  uVar3 = *(undefined8 *)(arg0 + uVar10 * 0x28 + 8);
  uVar4 = *(undefined8 *)(arg0 + uVar10 * 0x28 + 0x10);
  uVar5 = *(undefined8 *)(arg0 + uVar10 * 0x28 + 0x18);
  uVar6 = *(undefined8 *)(arg0 + uVar10 * 0x28 + 0x20);
  if ((int)lVar11 == 0x1f) {
    lVar11 = 0;
    do {
      if ((*(ulonglong *)(arg0 + lVar11 * 0x28 + 0x28) & 2) == 0) {
        uVar9 = *(ulonglong *)(arg0 + lVar11 * 0x28 + 0x28);
        do {
          LOCK();
          uVar10 = *(ulonglong *)(arg0 + lVar11 * 0x28 + 0x28);
          bVar14 = uVar9 == uVar10;
          if (bVar14) {
            *(ulonglong *)(arg0 + lVar11 * 0x28 + 0x28) = uVar9 | 4;
            uVar10 = uVar9;
          }
          UNLOCK();
          uVar9 = uVar10;
        } while (!bVar14);
        if ((uVar10 & 2) == 0) goto LAB_141af248c;
      }
      if ((*(ulonglong *)(arg0 + lVar11 * 0x28 + 0x50) & 2) == 0) {
        uVar9 = *(ulonglong *)(arg0 + lVar11 * 0x28 + 0x50);
        do {
          LOCK();
          uVar10 = *(ulonglong *)(arg0 + lVar11 * 0x28 + 0x50);
          bVar14 = uVar9 == uVar10;
          if (bVar14) {
            *(ulonglong *)(arg0 + lVar11 * 0x28 + 0x50) = uVar9 | 4;
            uVar10 = uVar9;
          }
          UNLOCK();
          uVar9 = uVar10;
        } while (!bVar14);
        if ((uVar10 & 2) == 0) goto LAB_141af248c;
      }
      lVar11 = lVar11 + 2;
    } while (lVar11 != 0x1e);
  }
  else {
    uVar9 = *(ulonglong *)(arg0 + uVar10 * 0x28 + 0x28);
    do {
      LOCK();
      uVar12 = *(ulonglong *)(arg0 + uVar10 * 0x28 + 0x28);
      bVar14 = uVar9 == uVar12;
      if (bVar14) {
        *(ulonglong *)(arg0 + uVar10 * 0x28 + 0x28) = uVar9 | 2;
        uVar12 = uVar9;
      }
      UNLOCK();
      uVar9 = uVar12;
    } while (!bVar14);
    if ((uVar12 & 4) == 0) goto LAB_141af248c;
    if (uVar13 < 0x1d) {
      do {
        if ((*(ulonglong *)(arg0 + lVar11 * 0x28 + 0x28) & 2) == 0) {
          uVar9 = *(ulonglong *)(arg0 + lVar11 * 0x28 + 0x28);
          do {
            LOCK();
            uVar10 = *(ulonglong *)(arg0 + lVar11 * 0x28 + 0x28);
            bVar14 = uVar9 == uVar10;
            if (bVar14) {
              *(ulonglong *)(arg0 + lVar11 * 0x28 + 0x28) = uVar9 | 4;
              uVar10 = uVar9;
            }
            UNLOCK();
            uVar9 = uVar10;
          } while (!bVar14);
          if ((uVar10 & 2) == 0) goto LAB_141af248c;
        }
        lVar11 = lVar11 + 1;
      } while (lVar11 != 0x1e);
    }
  }
  pub_1406abac0(arg0,0x4e0,8);
LAB_141af248c:
  *(undefined8 *)(param_1 + 0x18) = uVar5;
  *(undefined8 *)(param_1 + 0x20) = uVar6;
  *(undefined8 *)(param_1 + 8) = uVar3;
  *(undefined8 *)(param_1 + 0x10) = uVar4;
  uVar7 = 0;
LAB_141af24eb:
  *param_1 = uVar7;
  return param_1;
}

