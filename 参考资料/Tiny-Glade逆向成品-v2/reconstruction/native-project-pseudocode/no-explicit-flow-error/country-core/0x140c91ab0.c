// VA 0x140c91ab0, PDB extent 5 bytes
// tokio::runtime::task::id::impl$0::fmt
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/clutter_packs.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: tokio::runtime::task::id::impl$0::fmt
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/clutter_packs.rs
   Extent: 5 */

void pdb_140c91ab0(ulonglong *param_1,undefined8 param_2)

{
  ulonglong uVar1;
  bool bVar2;
  uint uVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  int iVar7;
  undefined4 uStack_38;
  undefined1 auStack_34 [20];
  
  uVar1 = *param_1;
  lVar4 = 0x14;
  uVar5 = uVar1;
  uVar6 = uVar1;
  if (999 < uVar1) {
    do {
      uVar6 = uVar5 / 10000;
      iVar7 = (int)uVar5 + (int)uVar6 * -10000;
      uVar3 = (uint)(iVar7 * 0x147b) >> 0x13;
      *(uint *)(auStack_34 + lVar4 + -4) =
           CONCAT22(*(undefined2 *)(&UNK_143244c42 + (ulonglong)(iVar7 + uVar3 * -100 & 0xffff) * 2)
                    ,*(undefined2 *)(&UNK_143244c42 + (ulonglong)uVar3 * 2));
      lVar4 = lVar4 + -4;
      bVar2 = 9999999 < uVar5;
      uVar5 = uVar6;
    } while (bVar2);
  }
  if (9 < uVar6) {
    iVar7 = (int)uVar6;
    uVar3 = ((uint)(uVar6 >> 2) & 0xffff) * 0x147b >> 0x11;
    uVar6 = (ulonglong)uVar3;
    *(undefined2 *)(auStack_34 + lVar4 + -2) =
         *(undefined2 *)(&UNK_143244c42 + (ulonglong)(iVar7 + uVar3 * -100 & 0xffff) * 2);
    lVar4 = lVar4 + -2;
  }
  if ((uVar1 == 0) || (uVar6 != 0)) {
    auStack_34[lVar4 + -1] = (&UNK_143244c43)[(ulonglong)((uint)uVar6 & 0xf) * 2];
    lVar4 = lVar4 + -1;
  }
  pdb_140f656e0(param_2,1,1,0,auStack_34 + lVar4,0x14 - lVar4);
  return;
}

