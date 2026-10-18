// VA 0x14040ec00, PDB extent 354 bytes
// serde_json::de::impl$7::deserialize_str<serde_json::read::SliceRead,uuid::external::serde_support::impl$6::deserialize::UuidVisitor>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/main.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   serde_json::de::impl$7::deserialize_str<serde_json::read::SliceRead,uuid::external::serde_support::impl$6::deserialize::UuidVisitor>
   Source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/main.rs
   Extent: 354 */

undefined1 * pdb_14040ec00(undefined1 *param_1,longlong param_2)

{
  undefined1 uVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  undefined1 uStack_81;
  int iStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined8 *puStack_60;
  code *pcStack_58;
  int aiStack_50 [2];
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  uVar2 = *(ulonglong *)(param_2 + 0x28);
  if (uVar2 < *(ulonglong *)(param_2 + 0x20)) {
    do {
      uVar2 = uVar2 + 1;
      uVar4 = (ulonglong)*(byte *)(*(longlong *)(param_2 + 0x18) + -1 + uVar2);
      if (0x22 < uVar4) {
LAB_14040ed4c:
        uVar3 = pdb_142d85290(param_2,&uStack_81,&UNK_142f571b0);
LAB_14040ed39:
        uVar3 = pdb_142d86ed0(uVar3,param_2);
        *(undefined8 *)(param_1 + 8) = uVar3;
        uVar1 = 1;
LAB_14040ecec:
        *param_1 = uVar1;
        return param_1;
      }
      if ((0x100002600U >> (uVar4 & 0x3f) & 1) == 0) {
        if (uVar4 != 0x22) goto LAB_14040ed4c;
        *(ulonglong *)(param_2 + 0x28) = uVar2;
        *(undefined8 *)(param_2 + 0x10) = 0;
        pdb_140de3740(aiStack_50,param_2 + 0x18,param_2);
        if (aiStack_50[0] == 2) {
          *(undefined8 *)(param_1 + 8) = uStack_48;
          *param_1 = 1;
          return param_1;
        }
        pdb_140eacff0(&iStack_80,uStack_48,uStack_40);
        if (iStack_80 == 8) {
          *(uint *)(param_1 + 4) = CONCAT31((undefined3)uStack_78,uStack_7c._3_1_);
          *(undefined4 *)(param_1 + 1) = uStack_7c;
          *(ulonglong *)(param_1 + 8) =
               CONCAT35((undefined3)uStack_70,CONCAT41(uStack_74,uStack_78._3_1_));
          param_1[0x10] = uStack_70._3_1_;
          uVar1 = 0;
          goto LAB_14040ecec;
        }
        uStack_28 = uStack_70;
        uStack_24 = uStack_6c;
        uStack_20 = uStack_68;
        uStack_1c = uStack_64;
        uStack_30 = uStack_78;
        uStack_2c = uStack_74;
        puStack_60 = &uStack_38;
        pcStack_58 = pdb_140ead050;
        uVar3 = pdb_142d872f0(&UNK_142e66714,&puStack_60);
        goto LAB_14040ed39;
      }
      *(ulonglong *)(param_2 + 0x28) = uVar2;
    } while (uVar2 != *(ulonglong *)(param_2 + 0x20));
  }
  uStack_38 = 5;
  uVar3 = pdb_142d84ef0(param_2,&uStack_38);
  *(undefined8 *)(param_1 + 8) = uVar3;
  *param_1 = 1;
  return param_1;
}

