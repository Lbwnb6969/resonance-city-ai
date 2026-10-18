// VA 0x142565b10, PDB extent 222 bytes
// motomoto::impl$9::next
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/motomoto/src/lib.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: motomoto::impl$9::next
   Source attribution: /home/h3/code/pouncelight/country-slice-private/crates/motomoto/src/lib.rs
   Extent: 222 */

undefined8 * pdb_142565b10(undefined8 *param_1,longlong *param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  longlong lVar4;
  code *pcVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  
  uVar2 = param_2[1];
  uVar3 = param_2[2];
  uVar1 = uVar3 + 0x10;
  if (uVar2 <= uVar1) {
    uVar7 = 0;
    goto LAB_142565b75;
  }
  uVar10 = uVar3;
  if (uVar2 < uVar3) {
    uVar10 = uVar2;
  }
  if (uVar2 - uVar10 < 8) {
LAB_142565b55:
    param_2[2] = uVar2;
    puVar6 = &UNK_143624d48;
LAB_142565b60:
    param_1[1] = 0;
    param_1[2] = puVar6;
  }
  else {
    uVar9 = uVar3 + 8;
    if (uVar2 < uVar3 + 8) {
      uVar9 = uVar2;
    }
    if (uVar2 - uVar9 < 8) goto LAB_142565b55;
    lVar4 = *param_2;
    uVar7 = *(undefined8 *)(lVar4 + uVar10);
    uVar3 = *(ulonglong *)(lVar4 + uVar9);
    param_2[2] = uVar1;
    uVar10 = uVar3 + uVar1;
    if ((longlong)uVar3 < 0 != CARRY8(uVar3,uVar1)) {
      puVar6 = &UNK_143624d98;
      goto LAB_142565b60;
    }
    param_2[2] = uVar10;
    if (uVar2 < uVar10) {
      puVar6 = (undefined *)0x2500000003;
      goto LAB_142565b60;
    }
    if (uVar10 < uVar1) {
      pdb_142dc8420(uVar1,uVar10,uVar2,&UNK_1435163b0);
      pcVar5 = (code *)swi(3);
      puVar8 = (undefined8 *)(*pcVar5)();
      return puVar8;
    }
    param_1[1] = lVar4 + uVar1;
    param_1[2] = uVar3;
    param_1[3] = uVar7;
  }
  uVar7 = 1;
LAB_142565b75:
  *param_1 = uVar7;
  return param_1;
}

