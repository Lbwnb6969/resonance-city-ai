// VA 0x14165af90, PDB extent 332 bytes
// serde_json::de::impl$7::deserialize_str<serde_json::read::SliceRead,serde_json::raw::BoxedFromString>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/lib.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   serde_json::de::impl$7::deserialize_str<serde_json::read::SliceRead,serde_json::raw::BoxedFromString>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/lib.rs
   Extent: 332 */

undefined8 * pdb_14165af90(undefined8 *param_1,longlong param_2)

{
  ulonglong uVar1;
  undefined8 uVar2;
  byte *pbVar3;
  ulonglong uVar4;
  undefined1 uVar5;
  undefined1 uStack_41;
  undefined8 uStack_40;
  undefined8 uStack_38;
  ulonglong uStack_30;
  
  uVar1 = *(ulonglong *)(param_2 + 0x28);
  if (uVar1 < *(ulonglong *)(param_2 + 0x20)) {
    do {
      uVar1 = uVar1 + 1;
      uVar4 = (ulonglong)*(byte *)(*(longlong *)(param_2 + 0x18) + -1 + uVar1);
      if (0x22 < uVar4) {
LAB_14165b0b8:
        uVar2 = pdb_142de8e20(param_2,&uStack_41,&UNK_1433238e0);
        uVar2 = pdb_142d86ed0(uVar2,param_2);
        goto LAB_14165b006;
      }
      if ((0x100002600U >> (uVar4 & 0x3f) & 1) == 0) {
        if (uVar4 != 0x22) goto LAB_14165b0b8;
        *(ulonglong *)(param_2 + 0x28) = uVar1;
        *(undefined8 *)(param_2 + 0x10) = 0;
        pdb_140de3740(&uStack_40,param_2 + 0x18,param_2);
        if ((int)uStack_40 == 2) {
          param_1[1] = uStack_38;
          *param_1 = 0;
          return param_1;
        }
        uVar5 = uStack_30 == 0;
        if (-1 < (longlong)uStack_30) goto LAB_14165b06a;
        uVar2 = 0;
        uVar5 = true;
        goto LAB_14165b05f;
      }
      *(ulonglong *)(param_2 + 0x28) = uVar1;
    } while (uVar1 != *(ulonglong *)(param_2 + 0x20));
  }
  uStack_40 = 5;
  uVar2 = pdb_142d84ef0(param_2,&uStack_40);
LAB_14165b006:
  param_1[1] = uVar2;
  *param_1 = 0;
  return param_1;
LAB_14165b05f:
  pdb_142dc7e2a(uVar2,uStack_30);
LAB_14165b06a:
  if ((bool)uVar5) {
    pbVar3 = (byte *)0x1;
    goto LAB_14165b0a2;
  }
  pdb_14007ee60();
  uVar2 = 1;
  pbVar3 = pub_1406abab0(uStack_30,1);
  uVar5 = pbVar3 == (byte *)0x0;
  if (!(bool)uVar5) {
    pub_142e32760(pbVar3,uStack_38,uStack_30);
LAB_14165b0a2:
    *param_1 = pbVar3;
    param_1[1] = uStack_30;
    return param_1;
  }
  goto LAB_14165b05f;
}

