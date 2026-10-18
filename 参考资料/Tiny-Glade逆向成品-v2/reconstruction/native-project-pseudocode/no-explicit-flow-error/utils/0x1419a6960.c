// VA 0x1419a6960, PDB extent 300 bytes
// utils::curve::_::impl$0::serialize<glam::f32::vec3::Vec3,utils::curve::CurveCoordSemantic2D,serde_json::value::ser::Serializer>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/utils/src/curve/mod.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   utils::curve::_::impl$0::serialize<glam::f32::vec3::Vec3,utils::curve::CurveCoordSemantic2D,serde_json::value::ser::Serializer>
   Source attribution: /home/h3/code/pouncelight/country-slice-private/crates/utils/src/curve/mod.rs
   Extent: 300 */

undefined1 * pdb_1419a6960(undefined1 *param_1,longlong param_2)

{
  longlong lVar1;
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
  undefined8 uStack_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined8 uStack_40;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined8 uStack_30;
  undefined1 uStack_21;
  undefined8 uStack_20;
  
  uStack_20 = 0xfffffffffffffffe;
  uStack_58 = 0x8000000000000000;
  uStack_40 = 0;
  uStack_30 = 0;
  uStack_21 = 1;
  lVar1 = pdb_141c052e0(&uStack_58,&UNK_14335e231,6,param_2);
  if (lVar1 == 0) {
    uStack_21 = 1;
    lVar1 = pdb_141c031a0(&uStack_58,&UNK_14335e237,8,param_2 + 0x18);
    if (lVar1 == 0) {
      uStack_21 = 1;
      lVar1 = pdb_141c06050(&uStack_58,&UNK_14335e23f,6,param_2 + 0x30);
      if (lVar1 == 0) {
        uStack_68 = uStack_38;
        uStack_64 = uStack_34;
        uStack_60 = (undefined4)uStack_30;
        uStack_5c = uStack_30._4_4_;
        uStack_78 = uStack_48;
        uStack_74 = uStack_44;
        uStack_70 = (undefined4)uStack_40;
        uStack_6c = uStack_40._4_4_;
        uStack_88 = (undefined4)uStack_58;
        uStack_84 = uStack_58._4_4_;
        uStack_80 = uStack_50;
        uStack_7c = uStack_4c;
        uStack_21 = 0;
        pdb_140ddcdc0(param_1,&uStack_88);
        return param_1;
      }
    }
  }
  *(longlong *)(param_1 + 8) = lVar1;
  *param_1 = 6;
  pdb_1419a5f50(&uStack_58);
  return param_1;
}

