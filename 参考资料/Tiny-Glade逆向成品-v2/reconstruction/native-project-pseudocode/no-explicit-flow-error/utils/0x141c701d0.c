// VA 0x141c701d0, PDB extent 311 bytes
// utils::curve::curve2_serialized_as_curve3::deserialize<enum2$<serde_json::value::Value> >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/utils/src/curve/mod.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   utils::curve::curve2_serialized_as_curve3::deserialize<enum2$<serde_json::value::Value> >
   Source attribution: /home/h3/code/pouncelight/country-slice-private/crates/utils/src/curve/mod.rs
   Extent: 311 */

longlong * pdb_141c701d0(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  byte *arg0;
  longlong lStack_98;
  byte *pbStack_90;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  longlong lStack_68;
  longlong lStack_60;
  byte *pbStack_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  longlong lStack_30;
  undefined8 uStack_28;
  
  uStack_28 = 0xfffffffffffffffe;
  pdb_141501ab0(&lStack_60,param_2,&UNK_14335e2c1,5,&UNK_14335e2c8,3);
  arg0 = pbStack_58;
  lVar1 = lStack_60;
  if (SBORROW8(0,lStack_60)) {
    param_1[1] = (longlong)pbStack_58;
    *param_1 = -0x8000000000000000;
  }
  else {
    lStack_68 = lStack_30;
    uStack_78 = uStack_40;
    uStack_74 = uStack_3c;
    uStack_70 = uStack_38;
    uStack_6c = uStack_34;
    uStack_88 = uStack_50;
    uStack_84 = uStack_4c;
    uStack_80 = uStack_48;
    uStack_7c = uStack_44;
    lStack_98 = lStack_60;
    pbStack_90 = pbStack_58;
    pdb_140082750(&lStack_60,&lStack_98);
    if (lVar1 != 0) {
      pub_1406abac0(arg0,lVar1 * 0xc,4);
    }
    if (CONCAT44(uStack_7c,uStack_80) != 0) {
      pub_1406abac0((byte *)CONCAT44(uStack_74,uStack_78),CONCAT44(uStack_7c,uStack_80) << 2,4);
    }
    param_1[6] = lStack_30;
    param_1[4] = CONCAT44(uStack_3c,uStack_40);
    param_1[5] = CONCAT44(uStack_34,uStack_38);
    param_1[2] = CONCAT44(uStack_4c,uStack_50);
    param_1[3] = CONCAT44(uStack_44,uStack_48);
    *param_1 = lStack_60;
    param_1[1] = (longlong)pbStack_58;
  }
  return param_1;
}

