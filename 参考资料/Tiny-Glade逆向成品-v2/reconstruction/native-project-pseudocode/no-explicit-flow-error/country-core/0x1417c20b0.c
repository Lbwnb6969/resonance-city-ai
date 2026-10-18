// VA 0x1417c20b0, PDB extent 310 bytes
// country_core::systems::wall::valid_enclosure::_::impl$0::deserialize::impl$2::visit_enum<serde::private::de::content::EnumRefDeserializer<serde_json::error::Error> >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/wall/valid_enclosure/mod.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::systems::wall::valid_enclosure::_::impl$0::deserialize::impl$2::visit_enum<serde::private::de::content::EnumRefDeserializer<serde_json::error::Error>
   >
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/wall/valid_enclosure/mod.rs
   Extent: 310 */

undefined4 * pdb_1417c20b0(undefined4 *param_1)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  int *piVar4;
  int iStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined8 uStack_2c;
  undefined1 auStack_20 [24];
  
  pdb_141b4cbd0(&iStack_40);
  lVar1 = CONCAT44(uStack_34,uStack_38);
  if ((char)iStack_40 == '\0') {
    if (lVar1 == 0) {
      iStack_40 = CONCAT31(iStack_40._1_3_,0xd);
      piVar4 = &iStack_40;
      goto LAB_1417c21da;
    }
    pdb_141b550d0(&iStack_40,lVar1,&UNK_143062f08,8,&UNK_143062f10,3);
    if (iStack_40 != 1) {
      *(ulonglong *)(param_1 + 2) = CONCAT44(uStack_38,uStack_3c);
      *(ulonglong *)(param_1 + 4) = CONCAT44(uStack_30,uStack_34);
      param_1[1] = 0;
      goto LAB_1417c219b;
    }
  }
  else {
    if ((char)iStack_40 == '\x02') {
      *(longlong *)(param_1 + 2) = lVar1;
      *param_1 = 1;
      return param_1;
    }
    if (lVar1 == 0) {
      auStack_20[0] = 0xd;
      piVar4 = (int *)auStack_20;
LAB_1417c21da:
      uVar3 = pdb_142db90e0(piVar4,&UNK_143396a68,&UNK_1433966f8);
      uStack_38 = (undefined4)uVar3;
      uStack_34 = (undefined4)((ulonglong)uVar3 >> 0x20);
    }
    else {
      pdb_141b55c40(&iStack_40,lVar1,&UNK_143389232,0xb,&UNK_143389240,5);
      if (iStack_40 != 1) {
        *(undefined8 *)(param_1 + 6) = uStack_2c;
        *(ulonglong *)(param_1 + 2) = CONCAT44(uStack_38,uStack_3c);
        *(ulonglong *)(param_1 + 4) = CONCAT44(uStack_30,uStack_34);
        param_1[1] = 1;
LAB_1417c219b:
        uVar2 = 0;
        goto LAB_1417c219d;
      }
    }
  }
  *(ulonglong *)(param_1 + 2) = CONCAT44(uStack_34,uStack_38);
  uVar2 = 1;
LAB_1417c219d:
  *param_1 = uVar2;
  return param_1;
}

