// VA 0x1417cd690, PDB extent 655 bytes
// glam::features::impl_serde::f32::impl$12::serialize<serde_json::value::ser::Serializer>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/lib.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   glam::features::impl_serde::f32::impl$12::serialize<serde_json::value::ser::Serializer>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/lib.rs
   Extent: 655 */

undefined1 * pdb_1417cd690(undefined1 *param_1,undefined4 *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  byte *pbVar4;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  longlong lStack_50;
  byte *pbStack_48;
  longlong lStack_40;
  undefined8 uStack_38;
  
  uStack_38 = 0xfffffffffffffffe;
  pdb_140ddca20(&uStack_78,&UNK_143337d38,4,2);
  lVar1 = CONCAT44(uStack_74,uStack_78);
  pbVar4 = (byte *)CONCAT44(uStack_6c,uStack_70);
  if (SBORROW8(0,lVar1)) {
    *(byte **)(param_1 + 8) = pbVar4;
    *param_1 = 6;
  }
  else {
    lVar3 = CONCAT44(uStack_64,uStack_68);
    lStack_50 = lVar1;
    pbStack_48 = pbVar4;
    lStack_40 = lVar3;
    pdb_140de0b10(&uStack_98,*param_2);
    if ((char)uStack_98 == '\x06') {
      uVar2 = CONCAT44(uStack_8c,uStack_90);
    }
    else {
      uStack_68 = uStack_88;
      uStack_64 = uStack_84;
      uStack_60 = uStack_80;
      uStack_5c = uStack_7c;
      uStack_78 = uStack_98;
      uStack_74 = uStack_94;
      uStack_70 = uStack_90;
      uStack_6c = uStack_8c;
      if (lVar3 == lVar1) {
        pdb_142db0ce0(&lStack_50);
        pbVar4 = pbStack_48;
      }
      *(ulonglong *)(pbVar4 + lVar3 * 0x20 + 0x10) = CONCAT44(uStack_84,uStack_88);
      *(ulonglong *)(pbVar4 + lVar3 * 0x20 + 0x10 + 8) = CONCAT44(uStack_7c,uStack_80);
      pbVar4 = pbVar4 + lVar3 * 0x20;
      *(undefined4 *)pbVar4 = uStack_98;
      *(undefined4 *)(pbVar4 + 4) = uStack_94;
      *(undefined4 *)(pbVar4 + 8) = uStack_90;
      *(undefined4 *)(pbVar4 + 0xc) = uStack_8c;
      lStack_40 = lVar3 + 1;
      pdb_140de0b10(&uStack_98,param_2[1]);
      lVar1 = lStack_40;
      if ((char)uStack_98 != '\x06') {
        uStack_68 = uStack_88;
        uStack_64 = uStack_84;
        uStack_60 = uStack_80;
        uStack_5c = uStack_7c;
        uStack_78 = uStack_98;
        uStack_74 = uStack_94;
        uStack_70 = uStack_90;
        uStack_6c = uStack_8c;
        if (lStack_40 == lStack_50) {
          pdb_142db0ce0(&lStack_50);
        }
        lVar3 = lVar1 * 0x20;
        *(ulonglong *)(pbStack_48 + lVar3 + 0x10) = CONCAT44(uStack_84,uStack_88);
        *(ulonglong *)(pbStack_48 + lVar3 + 0x10 + 8) = CONCAT44(uStack_7c,uStack_80);
        *(ulonglong *)(pbStack_48 + lVar3) = CONCAT44(uStack_94,uStack_98);
        *(ulonglong *)(pbStack_48 + lVar3 + 8) = CONCAT44(uStack_8c,uStack_90);
        uStack_74._3_1_ = (undefined1)lStack_50;
        uStack_70 = (undefined4)((ulonglong)lStack_50 >> 8);
        uStack_6c._0_3_ = (undefined3)((ulonglong)lStack_50 >> 0x28);
        uStack_6c._3_1_ = SUB81(pbStack_48,0);
        *param_1 = 4;
        *(ulonglong *)(param_1 + 1) = CONCAT44(uStack_74,uStack_78);
        *(ulonglong *)(param_1 + 9) = CONCAT44(uStack_6c,uStack_70);
        *(byte **)(param_1 + 0x10) = pbStack_48;
        *(longlong *)(param_1 + 0x18) = lVar1 + 1;
        return param_1;
      }
      uVar2 = CONCAT44(uStack_8c,uStack_90);
      lVar3 = lStack_40;
      pbVar4 = pbStack_48;
    }
    *(undefined8 *)(param_1 + 8) = uVar2;
    *param_1 = 6;
    pdb_14098ae50(pbVar4,lVar3);
    if (lStack_50 != 0) {
      pub_1406abac0(pbVar4,lStack_50 << 5,8);
    }
  }
  return param_1;
}

