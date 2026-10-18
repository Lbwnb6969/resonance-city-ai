// VA 0x140c9c960, PDB extent 783 bytes
// glam::features::impl_serde::f32::impl$14::serialize<serde_json::value::ser::Serializer>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/lib.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   glam::features::impl_serde::f32::impl$14::serialize<serde_json::value::ser::Serializer>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/lib.rs
   Extent: 783 */

undefined1 * pdb_140c9c960(undefined1 *param_1,undefined4 *param_2)

{
  longlong lVar1;
  longlong lVar2;
  byte *pbVar3;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  longlong lStack_50;
  byte *pbStack_48;
  longlong lStack_40;
  undefined8 uStack_38;
  
  uStack_38 = 0xfffffffffffffffe;
  pdb_140ddca20(&uStack_98,&UNK_143077410,4,3);
  lVar1 = CONCAT44(uStack_94,uStack_98);
  pbVar3 = (byte *)CONCAT44(uStack_8c,uStack_90);
  if (SBORROW8(0,lVar1)) {
    *(byte **)(param_1 + 8) = pbVar3;
    *param_1 = 6;
  }
  else {
    lVar2 = CONCAT44(uStack_84,uStack_88);
    lStack_50 = lVar1;
    pbStack_48 = pbVar3;
    lStack_40 = lVar2;
    pdb_140de0b10(&uStack_70,*param_2);
    if ((char)uStack_70 != '\x06') {
      uStack_88 = uStack_60;
      uStack_84 = uStack_5c;
      uStack_80 = uStack_58;
      uStack_7c = uStack_54;
      uStack_98 = uStack_70;
      uStack_94 = uStack_6c;
      uStack_90 = uStack_68;
      uStack_8c = uStack_64;
      if (lVar2 == lVar1) {
        pdb_142db0ce0(&lStack_50);
        pbVar3 = pbStack_48;
      }
      *(ulonglong *)(pbVar3 + lVar2 * 0x20 + 0x10) = CONCAT44(uStack_5c,uStack_60);
      *(ulonglong *)(pbVar3 + lVar2 * 0x20 + 0x10 + 8) = CONCAT44(uStack_54,uStack_58);
      pbVar3 = pbVar3 + lVar2 * 0x20;
      *(undefined4 *)pbVar3 = uStack_70;
      *(undefined4 *)(pbVar3 + 4) = uStack_6c;
      *(undefined4 *)(pbVar3 + 8) = uStack_68;
      *(undefined4 *)(pbVar3 + 0xc) = uStack_64;
      lStack_40 = lVar2 + 1;
      pdb_140de0b10(&uStack_70,param_2[1]);
      lVar1 = lStack_40;
      if ((char)uStack_70 != '\x06') {
        uStack_88 = uStack_60;
        uStack_84 = uStack_5c;
        uStack_80 = uStack_58;
        uStack_7c = uStack_54;
        uStack_98 = uStack_70;
        uStack_94 = uStack_6c;
        uStack_90 = uStack_68;
        uStack_8c = uStack_64;
        if (lStack_40 == lStack_50) {
          pdb_142db0ce0(&lStack_50);
        }
        lVar2 = lVar1 * 0x20;
        *(ulonglong *)(pbStack_48 + lVar2 + 0x10) = CONCAT44(uStack_5c,uStack_60);
        *(ulonglong *)(pbStack_48 + lVar2 + 0x10 + 8) = CONCAT44(uStack_54,uStack_58);
        pbVar3 = pbStack_48 + lVar2;
        *(undefined4 *)pbVar3 = uStack_70;
        *(undefined4 *)(pbVar3 + 4) = uStack_6c;
        *(undefined4 *)(pbVar3 + 8) = uStack_68;
        *(undefined4 *)(pbVar3 + 0xc) = uStack_64;
        lStack_40 = lVar1 + 1;
        pdb_140de0b10(&uStack_70,param_2[2]);
        lVar1 = lStack_40;
        if ((char)uStack_70 != '\x06') {
          uStack_88 = uStack_60;
          uStack_84 = uStack_5c;
          uStack_80 = uStack_58;
          uStack_7c = uStack_54;
          uStack_98 = uStack_70;
          uStack_94 = uStack_6c;
          uStack_90 = uStack_68;
          uStack_8c = uStack_64;
          if (lStack_40 == lStack_50) {
            pdb_142db0ce0(&lStack_50);
          }
          lVar2 = lVar1 * 0x20;
          *(ulonglong *)(pbStack_48 + lVar2 + 0x10) = CONCAT44(uStack_5c,uStack_60);
          *(ulonglong *)(pbStack_48 + lVar2 + 0x10 + 8) = CONCAT44(uStack_54,uStack_58);
          *(ulonglong *)(pbStack_48 + lVar2) = CONCAT44(uStack_6c,uStack_70);
          *(ulonglong *)(pbStack_48 + lVar2 + 8) = CONCAT44(uStack_64,uStack_68);
          uStack_94._3_1_ = (undefined1)lStack_50;
          uStack_90 = (undefined4)((ulonglong)lStack_50 >> 8);
          uStack_8c._0_3_ = (undefined3)((ulonglong)lStack_50 >> 0x28);
          uStack_8c._3_1_ = SUB81(pbStack_48,0);
          *param_1 = 4;
          *(ulonglong *)(param_1 + 1) = CONCAT44(uStack_94,uStack_98);
          *(ulonglong *)(param_1 + 9) = CONCAT44(uStack_8c,uStack_90);
          *(byte **)(param_1 + 0x10) = pbStack_48;
          *(longlong *)(param_1 + 0x18) = lVar1 + 1;
          return param_1;
        }
      }
    }
    *(ulonglong *)(param_1 + 8) = CONCAT44(uStack_64,uStack_68);
    *param_1 = 6;
    pdb_14098ae50(pbStack_48,lStack_40);
    if (lStack_50 != 0) {
      pub_1406abac0(pbStack_48,lStack_50 << 5,8);
    }
  }
  return param_1;
}

