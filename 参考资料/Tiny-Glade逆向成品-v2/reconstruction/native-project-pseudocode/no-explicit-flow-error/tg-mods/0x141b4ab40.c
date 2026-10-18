// VA 0x141b4ab40, PDB extent 260 bytes
// tg_mods::identity::ModId::owner_matches
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tg-mods/src/identity.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: tg_mods::identity::ModId::owner_matches
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/tg-mods/src/identity.rs
   Extent: 260 */

bool pdb_141b4ab40(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  int iVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  bool bVar8;
  ulonglong uStack_40;
  byte *pbStack_38;
  ulonglong uStack_30;
  
  lVar1 = *(longlong *)(param_1 + 8);
  uVar2 = *(ulonglong *)(param_1 + 0x10);
  uVar7 = 0;
  while( true ) {
    uVar6 = lVar1 + uVar7;
    if (uVar2 - uVar7 < 0x10) {
      uVar5 = 0;
      if (uVar2 == uVar7) {
        return false;
      }
      while (*(char *)(uVar6 + uVar5) != '-') {
        uVar5 = uVar5 + 1;
        if (uVar2 - uVar7 == uVar5) {
          return false;
        }
      }
    }
    else {
      lVar4 = pdb_140f69320(0x2d);
      uVar5 = uVar6;
      if (lVar4 != 1) {
        return false;
      }
    }
    uVar6 = uVar5 + uVar7;
    if ((uVar6 < uVar2) && (*(char *)(lVar1 + uVar6) == '-')) break;
    uVar7 = uVar7 + uVar5 + 1;
    if (uVar2 < uVar7) {
      return false;
    }
  }
  pdb_141b4aa80(&uStack_40,param_2);
  if (uVar6 == uStack_30) {
    iVar3 = pub_142e32750(lVar1,pbStack_38,uVar6);
    bVar8 = iVar3 == 0;
  }
  else {
    bVar8 = false;
  }
  if (uStack_40 != 0) {
    pub_1406abac0(pbStack_38,uStack_40,1);
    return bVar8;
  }
  return bVar8;
}

