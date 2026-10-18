// VA 0x142711420, PDB extent 695 bytes
// serde_core::ser::Serializer::collect_seq<serde_json::value::ser::Serializer,ref$<alloc::vec::Vec<array$<f32,2>,alloc::alloc::Global> > >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/asset/src/lib.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   serde_core::ser::Serializer::collect_seq<serde_json::value::ser::Serializer,ref$<alloc::vec::Vec<array$<f32,2>,alloc::alloc::Global>
   > >
   Source attribution: /home/h3/code/pouncelight/country-slice-private/crates/asset/src/lib.rs
   Extent: 695 */

undefined1 * pdb_142711420(undefined1 *param_1,longlong param_2)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  byte *pbVar6;
  longlong lVar7;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  longlong lStack_a0;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined7 uStack_88;
  undefined1 uStack_81;
  longlong lStack_78;
  byte *pbStack_70;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  longlong lStack_58;
  undefined8 uStack_48;
  
  uStack_48 = 0xfffffffffffffffe;
  lVar7 = *(longlong *)(param_2 + 8);
  lVar3 = *(longlong *)(param_2 + 0x10);
  pdb_140ddc8f0(&uStack_98,1,lVar3);
  if (SBORROW8(0,CONCAT44(uStack_94,uStack_98))) {
    *(ulonglong *)(param_1 + 8) = CONCAT44(uStack_8c,uStack_90);
    *param_1 = 6;
  }
  else {
    lStack_58 = CONCAT17(uStack_81,uStack_88);
    uStack_68 = uStack_98;
    uStack_64 = uStack_94;
    uStack_60 = uStack_90;
    uStack_5c = uStack_8c;
    if (lVar3 != 0) {
      lVar3 = lVar7 + lVar3 * 8;
      do {
        uStack_98 = (undefined4)lVar7;
        uStack_94 = (undefined4)((ulonglong)lVar7 >> 0x20);
        pdb_142af2420(&uStack_c0,&uStack_98);
        lVar4 = lStack_58;
        if ((char)uStack_c0 == '\x06') {
          *(ulonglong *)(param_1 + 8) = CONCAT44(uStack_b4,uStack_b8);
          *param_1 = 6;
          pbStack_70 = (byte *)CONCAT44(uStack_5c,uStack_60);
          lStack_a0 = lStack_58;
          lStack_78 = 0;
          pbVar6 = pbStack_70;
          while (lStack_a0 != lStack_78) {
            lStack_78 = lStack_78 + 1;
            pdb_141df59d0(pbVar6);
            pbVar6 = pbVar6 + 0x20;
          }
          if (CONCAT44(uStack_64,uStack_68) == 0) {
            return param_1;
          }
          pub_1406abac0(pbStack_70,CONCAT44(uStack_64,uStack_68) << 5,8);
          return param_1;
        }
        if (lStack_58 == CONCAT44(uStack_64,uStack_68)) {
          pdb_142db0ce0(&uStack_68);
        }
        lVar7 = lVar7 + 8;
        lVar5 = lVar4 * 0x20;
        puVar2 = (undefined8 *)(CONCAT44(uStack_5c,uStack_60) + 0x10 + lVar5);
        *puVar2 = uStack_b0;
        puVar2[1] = uStack_a8;
        puVar1 = (undefined4 *)(CONCAT44(uStack_5c,uStack_60) + lVar5);
        *puVar1 = uStack_c0;
        puVar1[1] = uStack_bc;
        puVar1[2] = uStack_b8;
        puVar1[3] = uStack_b4;
        lStack_58 = lVar4 + 1;
      } while (lVar7 != lVar3);
    }
    uStack_94._3_1_ = (undefined1)uStack_68;
    uStack_90 = (undefined4)(CONCAT44(uStack_64,uStack_68) >> 8);
    uStack_8c._3_1_ = (undefined1)uStack_60;
    uStack_88 = (undefined7)(CONCAT44(uStack_5c,uStack_60) >> 8);
    *param_1 = 4;
    *(ulonglong *)(param_1 + 1) = CONCAT44(uStack_94,uStack_98);
    *(ulonglong *)(param_1 + 9) =
         CONCAT44(CONCAT13(uStack_8c._3_1_,(int3)((uint)uStack_64 >> 8)),uStack_90);
    *(ulonglong *)(param_1 + 0x10) = CONCAT71(uStack_88,uStack_8c._3_1_);
    *(longlong *)(param_1 + 0x18) = lStack_58;
  }
  return param_1;
}

