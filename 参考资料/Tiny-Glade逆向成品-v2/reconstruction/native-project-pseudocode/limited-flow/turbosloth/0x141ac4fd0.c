// VA 0x141ac4fd0, PDB extent 393 bytes
// turbosloth::asset::impl$27::drop
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/turbosloth/src/asset.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: turbosloth::asset::impl$27::drop
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/turbosloth/src/asset.rs
   Extent: 393 */

ulonglong pdb_141ac4fd0(longlong *param_1)

{
  uint *puVar1;
  byte bVar2;
  longlong lVar3;
  ulonglong *puVar4;
  byte bVar5;
  ulonglong in_RAX;
  ulonglong uVar6;
  uint uVar7;
  bool bVar8;
  
  if ((char)param_1[1] != '\x01') {
    return in_RAX;
  }
  lVar3 = *param_1;
  puVar1 = (uint *)(lVar3 + 0x30);
  LOCK();
  bVar8 = *(int *)(lVar3 + 0x30) == 0;
  if (bVar8) {
    *(int *)(lVar3 + 0x30) = 0x3fffffff;
  }
  UNLOCK();
  if (!bVar8) {
    pdb_142dc6e70(puVar1);
  }
  puVar4 = _DAT_143ca8f38;
  if ((*_DAT_143ca8f38 & 0x7fffffffffffffff) == 0) {
    bVar5 = 0;
    bVar2 = *(byte *)(lVar3 + 0x38);
  }
  else {
    bVar5 = pdb_142dc79e0();
    bVar5 = bVar5 ^ 1;
    bVar2 = *(byte *)(lVar3 + 0x38);
  }
  if (bVar2 == 0) {
    if (!SBORROW8(0,*(longlong *)(lVar3 + 0x58))) {
      pdb_140982880(lVar3 + 0x58);
    }
    uVar6 = 0x8000000000000000;
    *(undefined8 *)(lVar3 + 0x58) = 0x8000000000000000;
    if (((bVar5 == 0) && (uVar6 = 0, (*puVar4 & 0x7fffffffffffffff) != 0)) &&
       (uVar6 = pdb_142dc79e0(), (char)uVar6 == '\0')) {
      *(undefined1 *)(lVar3 + 0x38) = 1;
    }
    LOCK();
    uVar7 = *puVar1;
    *puVar1 = *puVar1 + 0xc0000001;
    UNLOCK();
    if (uVar7 + 0xc0000001 < 0x40000000) {
      return uVar6;
    }
    uVar6 = pdb_142dc6fa0(puVar1);
    return uVar6;
  }
  uVar6 = (ulonglong)bVar2;
  if (((bVar5 == 0) && (uVar6 = 0, (*puVar4 & 0x7fffffffffffffff) != 0)) &&
     (uVar6 = pdb_142dc79e0(), (char)uVar6 == '\0')) {
    *(undefined1 *)(lVar3 + 0x38) = 1;
  }
  LOCK();
  uVar7 = *puVar1;
  *puVar1 = *puVar1 + 0xc0000001;
  UNLOCK();
  uVar7 = uVar7 + 0xc0000001;
  if (uVar7 < 0x40000000) {
    return uVar6;
  }
  if ((uVar7 & 0x3fffffff) != 0) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc83b0(&UNK_14323e798,0x24,&UNK_14323e7c0);
  }
  uVar6 = (ulonglong)-uVar7;
  if (SBORROW4(0,uVar7)) {
    uVar6 = 0x80000000;
    LOCK();
    uVar7 = *puVar1;
    if (uVar7 == 0x80000000) {
      *puVar1 = 0;
    }
    else {
      uVar6 = (ulonglong)uVar7;
    }
    UNLOCK();
    if (uVar7 == 0x80000000) {
      LOCK();
      *(int *)(lVar3 + 0x34) = *(int *)(lVar3 + 0x34) + 1;
      UNLOCK();
                    /* WARNING: Could not recover jumptable at 0x000142dc6fd8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar6 = WakeByAddressSingle(lVar3 + 0x34);
      return uVar6;
    }
    uVar7 = (uint)uVar6;
  }
  if (uVar7 != 0x40000000) {
    if (uVar7 != 0xc0000000) {
      return uVar6;
    }
    uVar6 = 0xc0000000;
    LOCK();
    uVar7 = *puVar1;
    if (uVar7 == 0xc0000000) {
      *puVar1 = 0x40000000;
    }
    else {
      uVar6 = (ulonglong)uVar7;
    }
    UNLOCK();
    if (uVar7 != 0xc0000000) {
      return uVar6;
    }
    LOCK();
    *(int *)(lVar3 + 0x34) = *(int *)(lVar3 + 0x34) + 1;
    UNLOCK();
    WakeByAddressSingle(lVar3 + 0x34);
  }
  uVar6 = 0x40000000;
  LOCK();
  uVar7 = *puVar1;
  if (uVar7 == 0x40000000) {
    *puVar1 = 0;
  }
  else {
    uVar6 = (ulonglong)uVar7;
  }
  UNLOCK();
  if (uVar7 != 0x40000000) {
    return uVar6;
  }
                    /* WARNING: Could not recover jumptable at 0x000142dc702b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar6 = WakeByAddressAll();
  return uVar6;
}

