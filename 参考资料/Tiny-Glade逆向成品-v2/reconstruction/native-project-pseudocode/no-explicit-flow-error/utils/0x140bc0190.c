// VA 0x140bc0190, PDB extent 326 bytes
// utils::geometry::circle::_::impl$0::serialize<serde_json::value::ser::Serializer>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/utils/src/geometry/circle.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   utils::geometry::circle::_::impl$0::serialize<serde_json::value::ser::Serializer>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/utils/src/geometry/circle.rs
   Extent: 326 */

undefined1 * pdb_140bc0190(undefined1 *param_1,longlong param_2)

{
  float fVar1;
  longlong lVar2;
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
  undefined8 uStack_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined8 uStack_50;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined8 uStack_40;
  undefined1 uStack_31;
  undefined8 uStack_30;
  
  uStack_30 = 0xfffffffffffffffe;
  fVar1 = *(float *)(param_2 + 0xc);
  uStack_68 = 0x8000000000000000;
  uStack_50 = 0;
  uStack_40 = 0;
  uStack_31 = 1;
  lVar2 = pdb_141c06d70(&uStack_68,&UNK_143062ea8,6,param_2);
  if (lVar2 == 0) {
    uStack_31 = 1;
    lVar2 = pdb_141c06050(&uStack_68,&UNK_143062eae,6,param_2 + 8);
    if (lVar2 == 0) {
      if ((fVar1 != 0.0) || (NAN(fVar1))) {
        uStack_31 = 1;
        lVar2 = pdb_141c02670(&uStack_68,&UNK_143062dfd,8,param_2 + 0xc);
        if (lVar2 != 0) goto LAB_140bc021e;
      }
      uStack_78 = uStack_48;
      uStack_74 = uStack_44;
      uStack_70 = (undefined4)uStack_40;
      uStack_6c = uStack_40._4_4_;
      uStack_88 = uStack_58;
      uStack_84 = uStack_54;
      uStack_80 = (undefined4)uStack_50;
      uStack_7c = uStack_50._4_4_;
      uStack_98 = (undefined4)uStack_68;
      uStack_94 = uStack_68._4_4_;
      uStack_90 = uStack_60;
      uStack_8c = uStack_5c;
      uStack_31 = 0;
      pdb_140ddcdc0(param_1,&uStack_98);
      return param_1;
    }
  }
LAB_140bc021e:
  *(longlong *)(param_1 + 8) = lVar2;
  *param_1 = 6;
  pdb_140bc0010(&uStack_68);
  return param_1;
}

