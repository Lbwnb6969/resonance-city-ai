// VA 0x14165b0e0, PDB extent 344 bytes
// serde_json::de::impl$7::deserialize_str<serde_json::read::StrRead,relative_path::relative_path_buf::impl$22::deserialize::Visitor>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/lib.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   serde_json::de::impl$7::deserialize_str<serde_json::read::StrRead,relative_path::relative_path_buf::impl$22::deserialize::Visitor>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/lib.rs
   Extent: 344 */

ulonglong * pdb_14165b0e0(ulonglong *param_1,longlong param_2)

{
  ulonglong uVar1;
  byte *pbVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  undefined1 uVar5;
  undefined1 uStack_41;
  longlong lStack_40;
  ulonglong uStack_38;
  ulonglong uStack_30;
  
  uVar1 = *(ulonglong *)(param_2 + 0x28);
  if (uVar1 < *(ulonglong *)(param_2 + 0x20)) {
    do {
      uVar1 = uVar1 + 1;
      uVar3 = (ulonglong)*(byte *)(*(longlong *)(param_2 + 0x18) + -1 + uVar1);
      if (0x22 < uVar3) {
LAB_14165b214:
        uVar4 = pdb_142de8b10(param_2,&uStack_41,&UNK_143323a00);
        uVar1 = pdb_142d86ed0(uVar4,param_2);
        goto LAB_14165b156;
      }
      if ((0x100002600U >> (uVar3 & 0x3f) & 1) == 0) {
        if (uVar3 != 0x22) goto LAB_14165b214;
        *(ulonglong *)(param_2 + 0x28) = uVar1;
        *(undefined8 *)(param_2 + 0x10) = 0;
        pdb_140de3310(&lStack_40,param_2 + 0x18,param_2);
        if (lStack_40 == 2) {
          param_1[1] = uStack_38;
          goto LAB_14165b193;
        }
        uVar5 = uStack_30 == 0;
        if (-1 < (longlong)uStack_30) goto LAB_14165b1bd;
        uVar4 = 0;
        uVar5 = true;
        goto LAB_14165b1b2;
      }
      *(ulonglong *)(param_2 + 0x28) = uVar1;
    } while (uVar1 != *(ulonglong *)(param_2 + 0x20));
  }
  lStack_40 = 5;
  uVar1 = pdb_142d84ef0(param_2,&lStack_40);
LAB_14165b156:
  param_1[1] = uVar1;
LAB_14165b193:
  *param_1 = 0x8000000000000000;
  return param_1;
LAB_14165b1b2:
  pdb_142dc7e2a(uVar4,uStack_30);
LAB_14165b1bd:
  if ((bool)uVar5) {
    pbVar2 = (byte *)0x1;
    uVar1 = 0;
    goto LAB_14165b1fa;
  }
  pdb_14007ee60();
  uVar4 = 1;
  pbVar2 = pub_1406abab0(uStack_30,1);
  uVar5 = pbVar2 == (byte *)0x0;
  if (!(bool)uVar5) {
    pub_142e32760(pbVar2,uStack_38,uStack_30);
    uVar1 = uStack_30;
LAB_14165b1fa:
    *param_1 = uVar1;
    param_1[1] = (ulonglong)pbVar2;
    param_1[2] = uStack_30;
    return param_1;
  }
  goto LAB_14165b1b2;
}

