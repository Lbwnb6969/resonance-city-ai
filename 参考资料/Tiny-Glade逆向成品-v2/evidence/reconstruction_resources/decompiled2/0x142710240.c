// Matched PDB: serde_core::ser::Serializer::collect_seq<serde_json::value::ser::Serializer,ref$<alloc::vec::Vec<asset::foliage::Grass2Lod0PartAsset,alloc::alloc::Global> > >
// VA 0x142710240, PDB extent 691 bytes
// Ghidra pseudocode; types and unresolved calls are not original source.

/* Matched PDB:
   serde_core::ser::Serializer::collect_seq<serde_json::value::ser::Serializer,ref$<alloc::vec::Vec<asset::foliage::Grass2Lod0PartAsset,alloc::alloc::Global>
   > >
   Extent: 691 bytes. No whole-program auto-analysis. */

undefined1 * pdb_142710240(undefined1 *param_1,longlong param_2)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined7 uStack_80;
  undefined1 uStack_79;
  longlong lStack_70;
  longlong lStack_68;
  longlong lStack_60;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  longlong lStack_48;
  undefined8 uStack_40;
  
  uStack_40 = 0xfffffffffffffffe;
  lVar5 = *(longlong *)(param_2 + 8);
  lVar6 = *(longlong *)(param_2 + 0x10);
  pdb_140ddc8f0(&uStack_90,1,lVar6);
  if (SBORROW8(0,CONCAT44(uStack_8c,uStack_90))) {
    *(ulonglong *)(param_1 + 8) = CONCAT44(uStack_84,uStack_88);
    *param_1 = 6;
  }
  else {
    lStack_48 = CONCAT17(uStack_79,uStack_80);
    uStack_58 = uStack_90;
    uStack_54 = uStack_8c;
    uStack_50 = uStack_88;
    uStack_4c = uStack_84;
    if (lVar6 != 0) {
      lVar6 = lVar6 * 0x30 + lVar5;
      do {
        pdb_142704760(&uStack_b0,lVar5);
        lVar3 = lStack_48;
        if ((char)uStack_b0 == '\x06') {
          *(ulonglong *)(param_1 + 8) = CONCAT44(uStack_a4,uStack_a8);
          *param_1 = 6;
          lStack_60 = CONCAT44(uStack_4c,uStack_50);
          lStack_70 = lStack_48;
          lStack_68 = 0;
          lVar5 = lStack_60;
          while (lStack_70 != lStack_68) {
            lStack_68 = lStack_68 + 1;
            pdb_141df59d0(lVar5);
            lVar5 = lVar5 + 0x20;
          }
          if (CONCAT44(uStack_54,uStack_58) == 0) {
            return param_1;
          }
          func_0x0001406abac0(lStack_60,CONCAT44(uStack_54,uStack_58) << 5,8);
          return param_1;
        }
        if (lStack_48 == CONCAT44(uStack_54,uStack_58)) {
          pdb_142db0ce0(&uStack_58);
        }
        lVar5 = lVar5 + 0x30;
        lVar4 = lVar3 * 0x20;
        puVar2 = (undefined8 *)(CONCAT44(uStack_4c,uStack_50) + 0x10 + lVar4);
        *puVar2 = uStack_a0;
        puVar2[1] = uStack_98;
        puVar1 = (undefined4 *)(CONCAT44(uStack_4c,uStack_50) + lVar4);
        *puVar1 = uStack_b0;
        puVar1[1] = uStack_ac;
        puVar1[2] = uStack_a8;
        puVar1[3] = uStack_a4;
        lStack_48 = lVar3 + 1;
      } while (lVar5 != lVar6);
    }
    uStack_8c._3_1_ = (undefined1)uStack_58;
    uStack_88 = (undefined4)(CONCAT44(uStack_54,uStack_58) >> 8);
    uStack_84._3_1_ = (undefined1)uStack_50;
    uStack_80 = (undefined7)(CONCAT44(uStack_4c,uStack_50) >> 8);
    *param_1 = 4;
    *(ulonglong *)(param_1 + 1) = CONCAT44(uStack_8c,uStack_90);
    *(ulonglong *)(param_1 + 9) =
         CONCAT44(CONCAT13(uStack_84._3_1_,(int3)((uint)uStack_54 >> 8)),uStack_88);
    *(ulonglong *)(param_1 + 0x10) = CONCAT71(uStack_80,uStack_84._3_1_);
    *(longlong *)(param_1 + 0x18) = lStack_48;
  }
  return param_1;
}

