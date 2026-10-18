// VA 0x141bfbc40, PDB extent 531 bytes
// serde_core::ser::Serializer::collect_seq<serde_json::value::ser::Serializer,ref$<alloc::vec::Vec<utils::curve::curve_u::CurveU<utils::curve::CurveCoordSemantic2D>,alloc::alloc::Global> > >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/lib.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   serde_core::ser::Serializer::collect_seq<serde_json::value::ser::Serializer,ref$<alloc::vec::Vec<utils::curve::curve_u::CurveU<utils::curve::CurveCoordSemantic2D>,alloc::alloc::Global>
   > >
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/lib.rs
   Extent: 531 */

undefined1 * pdb_141bfbc40(undefined1 *param_1,longlong param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong lVar5;
  undefined4 *puVar6;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined7 uStack_70;
  undefined1 uStack_69;
  byte *pbStack_60;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  longlong lStack_48;
  undefined8 uStack_40;
  
  uStack_40 = 0xfffffffffffffffe;
  puVar6 = *(undefined4 **)(param_2 + 8);
  lVar4 = *(longlong *)(param_2 + 0x10);
  pdb_140ddc8f0(&uStack_80,1,lVar4);
  if (SBORROW8(0,CONCAT44(uStack_7c,uStack_80))) {
    *(ulonglong *)(param_1 + 8) = CONCAT44(uStack_74,uStack_78);
    *param_1 = 6;
  }
  else {
    lStack_48 = CONCAT17(uStack_69,uStack_70);
    uStack_58 = uStack_80;
    uStack_54 = uStack_7c;
    uStack_50 = uStack_78;
    uStack_4c = uStack_74;
    if (lVar4 != 0) {
      puVar1 = puVar6 + lVar4;
      do {
        pdb_140de0b10(&uStack_a0,*puVar6);
        lVar4 = lStack_48;
        if ((char)uStack_a0 == '\x06') {
          *(ulonglong *)(param_1 + 8) = CONCAT44(uStack_94,uStack_98);
          *param_1 = 6;
          pbStack_60 = (byte *)CONCAT44(uStack_4c,uStack_50);
          pdb_14098ae50(pbStack_60,lStack_48);
          if (CONCAT44(uStack_54,uStack_58) == 0) {
            return param_1;
          }
          pub_1406abac0(pbStack_60,CONCAT44(uStack_54,uStack_58) << 5,8);
          return param_1;
        }
        if (lStack_48 == CONCAT44(uStack_54,uStack_58)) {
          pdb_142db0ce0(&uStack_58);
        }
        puVar6 = puVar6 + 1;
        lVar5 = lVar4 * 0x20;
        puVar3 = (undefined8 *)(CONCAT44(uStack_4c,uStack_50) + 0x10 + lVar5);
        *puVar3 = uStack_90;
        puVar3[1] = uStack_88;
        puVar2 = (undefined4 *)(CONCAT44(uStack_4c,uStack_50) + lVar5);
        *puVar2 = uStack_a0;
        puVar2[1] = uStack_9c;
        puVar2[2] = uStack_98;
        puVar2[3] = uStack_94;
        lStack_48 = lVar4 + 1;
      } while (puVar6 != puVar1);
    }
    uStack_7c._3_1_ = (undefined1)uStack_58;
    uStack_78 = (undefined4)(CONCAT44(uStack_54,uStack_58) >> 8);
    uStack_74._3_1_ = (undefined1)uStack_50;
    uStack_70 = (undefined7)(CONCAT44(uStack_4c,uStack_50) >> 8);
    *param_1 = 4;
    *(ulonglong *)(param_1 + 1) = CONCAT44(uStack_7c,uStack_80);
    *(ulonglong *)(param_1 + 9) =
         CONCAT44(CONCAT13(uStack_74._3_1_,(int3)((uint)uStack_54 >> 8)),uStack_78);
    *(ulonglong *)(param_1 + 0x10) = CONCAT71(uStack_70,uStack_74._3_1_);
    *(longlong *)(param_1 + 0x18) = lStack_48;
  }
  return param_1;
}

