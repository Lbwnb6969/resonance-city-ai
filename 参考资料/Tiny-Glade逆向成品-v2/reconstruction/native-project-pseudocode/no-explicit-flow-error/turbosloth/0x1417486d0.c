// VA 0x1417486d0, PDB extent 175 bytes
// turbosloth::asset::impl$65::resolve
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/turbosloth/src/asset.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: turbosloth::asset::impl$65::resolve
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/turbosloth/src/asset.rs
   Extent: 175 */

void pdb_1417486d0(longlong param_1,int *param_2,uint *param_3,ulonglong param_4)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  code *pcVar4;
  longlong lVar5;
  uint uVar6;
  undefined1 uVar8;
  ulonglong uVar7;
  
  if (*(ulonglong *)(param_1 + 0x10) < 9) {
    uVar3 = *(undefined8 *)(param_1 + 8);
    param_3[0] = 0xffffffff;
    param_3[1] = 0xffffffff;
    pub_142e32760(param_3,uVar3);
    iVar1 = *param_2;
joined_r0x00014174873a:
    if (iVar1 == 1) {
      *(undefined1 *)(param_3 + 2) = 1;
      return;
    }
    uVar2 = param_2[1];
    *(undefined1 *)(param_3 + 2) = 0;
    uVar7 = *(ulonglong *)(param_1 + 0x20);
    uVar6 = (uint)uVar7;
    lVar5 = (ulonglong)uVar2 - (param_4 + 0xc);
    uVar8 = lVar5 < 0;
    if (param_4 + 0xc <= (ulonglong)uVar2) goto LAB_14174875f;
    if ((bool)uVar8) goto LAB_141748761;
  }
  else {
    uVar2 = param_2[2];
    uVar6 = (uint)*(ulonglong *)(param_1 + 0x10);
    uVar6 = (uVar6 & 0x3f) + (uVar6 & 0xffffffc0) * 4 + 0x80;
    uVar7 = (ulonglong)uVar6;
    *param_3 = uVar6;
    lVar5 = uVar2 - param_4;
    uVar8 = lVar5 < 0;
    if (uVar2 < param_4) {
      if ((bool)uVar8) {
LAB_141748733:
        param_3[1] = (uint)lVar5;
        iVar1 = *param_2;
        goto joined_r0x00014174873a;
      }
    }
    else if (!(bool)uVar8) goto LAB_141748733;
  }
  do {
    lVar5 = pdb_142e1e100();
LAB_14174875f:
    uVar6 = (uint)uVar7;
  } while ((bool)uVar8);
LAB_141748761:
  if ((int)(uint)lVar5 == lVar5) {
    param_3[3] = (uint)lVar5;
    param_3[4] = uVar6;
    return;
  }
  pdb_142e1e0c0();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}

