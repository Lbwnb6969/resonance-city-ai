// VA 0x142710de0, PDB extent 887 bytes
// serde_core::ser::Serializer::collect_seq<serde_json::value::ser::Serializer,ref$<alloc::vec::Vec<asset::foliage::PackedGrass2CardPointPosition,alloc::alloc::Global> > >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/asset/src/lib.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   serde_core::ser::Serializer::collect_seq<serde_json::value::ser::Serializer,ref$<alloc::vec::Vec<asset::foliage::PackedGrass2CardPointPosition,alloc::alloc::Global>
   > >
   Source attribution: /home/h3/code/pouncelight/country-slice-private/crates/asset/src/lib.rs
   Extent: 887 */

undefined1 * pdb_142710de0(undefined1 *param_1,longlong param_2)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  longlong lVar4;
  byte *pbVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uStack_108;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined8 uStack_f0;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined8 uStack_e0;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  longlong lStack_80;
  longlong lStack_78;
  byte *pbStack_70;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  longlong lStack_58;
  undefined1 uStack_49;
  undefined8 uStack_48;
  
  uStack_48 = 0xfffffffffffffffe;
  lVar7 = *(longlong *)(param_2 + 8);
  lVar6 = *(longlong *)(param_2 + 0x10);
  pdb_140ddc8f0(&uStack_b8,1,lVar6);
  if (SBORROW8(0,CONCAT44(uStack_b4,uStack_b8))) {
    *(ulonglong *)(param_1 + 8) = CONCAT44(uStack_ac,uStack_b0);
    *param_1 = 6;
  }
  else {
    lStack_58 = CONCAT44(uStack_a4,uStack_a8);
    uStack_68 = uStack_b8;
    uStack_64 = uStack_b4;
    uStack_60 = uStack_b0;
    uStack_5c = uStack_ac;
    if (lVar6 != 0) {
      lVar6 = lVar6 << 2;
      do {
        uStack_108 = 0x8000000000000000;
        uStack_f0 = 0;
        uStack_e0 = 0;
        uStack_49 = 1;
        lVar3 = pdb_142713830(&uStack_108,&UNK_1435895d5,8,lVar7);
        if (lVar3 != 0) {
          pdb_1427040f0(&uStack_108);
LAB_142710f69:
          *(longlong *)(param_1 + 8) = lVar3;
          *param_1 = 6;
          pbStack_70 = (byte *)CONCAT44(uStack_5c,uStack_60);
          lStack_80 = lStack_58;
          lStack_78 = 0;
          pbVar5 = pbStack_70;
          while (lStack_80 != lStack_78) {
            lStack_78 = lStack_78 + 1;
            pdb_141df59d0(pbVar5);
            pbVar5 = pbVar5 + 0x20;
          }
          if (CONCAT44(uStack_64,uStack_68) == 0) {
            return param_1;
          }
          pub_1406abac0(pbStack_70,CONCAT44(uStack_64,uStack_68) << 5,8);
          return param_1;
        }
        uStack_98 = uStack_e8;
        uStack_94 = uStack_e4;
        uStack_90 = (undefined4)uStack_e0;
        uStack_8c = uStack_e0._4_4_;
        uStack_a8 = uStack_f8;
        uStack_a4 = uStack_f4;
        uStack_a0 = (undefined4)uStack_f0;
        uStack_9c = uStack_f0._4_4_;
        uStack_b8 = (undefined4)uStack_108;
        uStack_b4 = uStack_108._4_4_;
        uStack_b0 = uStack_100;
        uStack_ac = uStack_fc;
        uStack_49 = 0;
        pdb_140ddcdc0(&uStack_d8,&uStack_b8);
        lVar3 = lStack_58;
        if ((char)uStack_d8 == '\x06') {
          lVar3 = CONCAT44(uStack_cc,uStack_d0);
          goto LAB_142710f69;
        }
        if (lStack_58 == CONCAT44(uStack_64,uStack_68)) {
          pdb_142db0ce0(&uStack_68);
        }
        lVar7 = lVar7 + 4;
        lVar4 = lVar3 * 0x20;
        puVar2 = (undefined8 *)(CONCAT44(uStack_5c,uStack_60) + 0x10 + lVar4);
        *puVar2 = uStack_c8;
        puVar2[1] = uStack_c0;
        puVar1 = (undefined4 *)(CONCAT44(uStack_5c,uStack_60) + lVar4);
        *puVar1 = uStack_d8;
        puVar1[1] = uStack_d4;
        puVar1[2] = uStack_d0;
        puVar1[3] = uStack_cc;
        lStack_58 = lVar3 + 1;
        lVar6 = lVar6 + -4;
      } while (lVar6 != 0);
    }
    uStack_b4._3_1_ = (undefined1)uStack_68;
    uStack_b0 = (undefined4)(CONCAT44(uStack_64,uStack_68) >> 8);
    uStack_ac._3_1_ = (undefined1)uStack_60;
    uStack_a8 = (undefined4)(CONCAT44(uStack_5c,uStack_60) >> 8);
    uStack_a4._0_3_ = (undefined3)((uint)uStack_5c >> 8);
    *param_1 = 4;
    *(ulonglong *)(param_1 + 1) = CONCAT44(uStack_b4,uStack_b8);
    *(ulonglong *)(param_1 + 9) =
         CONCAT44(CONCAT13(uStack_ac._3_1_,(int3)((uint)uStack_64 >> 8)),uStack_b0);
    *(ulonglong *)(param_1 + 0x10) =
         CONCAT35((undefined3)uStack_a4,CONCAT41(uStack_a8,uStack_ac._3_1_));
    *(longlong *)(param_1 + 0x18) = lStack_58;
  }
  return param_1;
}

