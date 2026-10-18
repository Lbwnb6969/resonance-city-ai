// VA 0x141cc08b0, PDB extent 679 bytes
// utils::impl$4::assign_auto_resize<tg_text::AtlasAllocUsage>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/utils/src/lib.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: utils::impl$4::assign_auto_resize<tg_text::AtlasAllocUsage>
   Source attribution: /home/h3/code/pouncelight/country-slice-private/crates/utils/src/lib.rs
   Extent: 679 */

void pdb_141cc08b0(ulonglong *param_1,ulonglong param_2,undefined4 param_3,undefined2 param_4)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  undefined4 *puVar4;
  ulonglong uVar5;
  
  uVar3 = param_1[2];
  if (param_2 < uVar3 == uVar3 < param_2) {
    if (uVar3 == *param_1) {
      pdb_142d8d7f0();
    }
    uVar2 = param_1[1];
    *(undefined4 *)(uVar2 + uVar3 * 8) = param_3;
    *(undefined2 *)(uVar2 + 4 + uVar3 * 8) = param_4;
    param_1[2] = uVar3 + 1;
    return;
  }
  if ((char)((param_2 < uVar3) - (uVar3 < param_2)) == '\x01') {
    if (param_2 < uVar3) {
      uVar3 = param_1[1];
      *(undefined4 *)(uVar3 + param_2 * 8) = param_3;
      *(undefined2 *)(uVar3 + 4 + param_2 * 8) = param_4;
      return;
    }
                    /* WARNING: Subroutine does not return */
    pdb_142dc81f2(param_2,uVar3,&UNK_1433ace98);
  }
  uVar1 = (param_2 - uVar3) + 1;
  uVar2 = *param_1;
  if (uVar2 - uVar3 < uVar1) {
    pdb_142d7f1b0(param_1,uVar3,uVar1,4,8);
    uVar2 = *param_1;
    uVar3 = param_1[2];
    uVar1 = param_2 - uVar3;
    if (uVar3 <= param_2 && uVar1 != 0) goto LAB_141cc09d1;
LAB_141cc0944:
    param_1[2] = param_2;
    if (param_2 != uVar2) goto LAB_141cc096a;
  }
  else {
    uVar1 = param_2 - uVar3;
    if (param_2 < uVar3 || uVar1 == 0) goto LAB_141cc0944;
LAB_141cc09d1:
    if (uVar2 - uVar3 < uVar1) {
      pdb_142d7f1b0(param_1,uVar3,uVar1,4,8);
      puVar4 = (undefined4 *)(param_1[2] * 8 + param_1[1]);
      uVar2 = param_1[2];
    }
    else {
      puVar4 = (undefined4 *)(uVar3 * 8 + param_1[1]);
      uVar2 = uVar3;
    }
    if (1 < uVar1) {
      uVar5 = (ulonglong)((uint)(param_2 + ~uVar3) & 7);
      if (uVar1 - 2 < 7) goto LAB_141cc0ab0;
      uVar3 = param_2 + ~uVar3 & 0xfffffffffffffff8;
      do {
        *puVar4 = 0;
        *(undefined2 *)(puVar4 + 1) = 0;
        puVar4[2] = 0;
        *(undefined2 *)(puVar4 + 3) = 0;
        puVar4[4] = 0;
        *(undefined2 *)(puVar4 + 5) = 0;
        puVar4[6] = 0;
        *(undefined2 *)(puVar4 + 7) = 0;
        puVar4[8] = 0;
        *(undefined2 *)(puVar4 + 9) = 0;
        puVar4[10] = 0;
        *(undefined2 *)(puVar4 + 0xb) = 0;
        puVar4[0xc] = 0;
        *(undefined2 *)(puVar4 + 0xd) = 0;
        puVar4[0xe] = 0;
        *(undefined2 *)(puVar4 + 0xf) = 0;
        puVar4 = puVar4 + 0x10;
        uVar3 = uVar3 - 8;
      } while (uVar3 != 0);
      for (; uVar5 != 0; uVar5 = uVar5 - 1) {
LAB_141cc0ab0:
        *puVar4 = 0;
        *(undefined2 *)(puVar4 + 1) = 0;
        puVar4 = puVar4 + 2;
      }
      uVar2 = (uVar2 + uVar1) - 1;
    }
    *puVar4 = 0;
    *(undefined2 *)(puVar4 + 1) = 0;
    param_2 = uVar2 + 1;
    param_1[2] = param_2;
    if (param_2 != *param_1) goto LAB_141cc096a;
  }
  pdb_142d8d7f0();
LAB_141cc096a:
  uVar3 = param_1[1];
  *(undefined4 *)(uVar3 + param_2 * 8) = param_3;
  *(undefined2 *)(uVar3 + 4 + param_2 * 8) = param_4;
  param_1[2] = param_2 + 1;
  return;
}

