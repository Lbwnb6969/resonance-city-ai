// VA 0x141bfc800, PDB extent 567 bytes
// serde_core::ser::Serializer::collect_seq<serde_json::value::ser::Serializer,ref$<alloc::vec::Vec<tuple$<country_core::resources::walls::WallId,country_core::resources::walls::inner_wall_state::WallState>,alloc::alloc::Global> > >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/lib.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   serde_core::ser::Serializer::collect_seq<serde_json::value::ser::Serializer,ref$<alloc::vec::Vec<tuple$<country_core::resources::walls::WallId,country_core::resources::walls::inner_wall_state::WallState>,alloc::alloc::Global>
   > >
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/lib.rs
   Extent: 567 */

undefined1 * pdb_141bfc800(undefined1 *param_1,longlong param_2)

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
  byte *pbStack_90;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined7 uStack_78;
  undefined1 uStack_71;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  longlong lStack_58;
  undefined8 uStack_48;
  
  uStack_48 = 0xfffffffffffffffe;
  lVar6 = *(longlong *)(param_2 + 8);
  lVar5 = *(longlong *)(param_2 + 0x10);
  pdb_140ddc8f0(&uStack_88,1,lVar5);
  if (SBORROW8(0,CONCAT44(uStack_84,uStack_88))) {
    *(ulonglong *)(param_1 + 8) = CONCAT44(uStack_7c,uStack_80);
    *param_1 = 6;
  }
  else {
    lStack_58 = CONCAT17(uStack_71,uStack_78);
    uStack_68 = uStack_88;
    uStack_64 = uStack_84;
    uStack_60 = uStack_80;
    uStack_5c = uStack_7c;
    if (lVar5 != 0) {
      lVar5 = lVar5 * 0x78 + lVar6;
      do {
        uStack_88 = (undefined4)lVar6;
        uStack_84 = (undefined4)((ulonglong)lVar6 >> 0x20);
        pdb_141504600(&uStack_b0,&uStack_88);
        lVar3 = lStack_58;
        if ((char)uStack_b0 == '\x06') {
          *(ulonglong *)(param_1 + 8) = CONCAT44(uStack_a4,uStack_a8);
          *param_1 = 6;
          pbStack_90 = (byte *)CONCAT44(uStack_5c,uStack_60);
          pdb_14098ae50(pbStack_90,lStack_58);
          if (CONCAT44(uStack_64,uStack_68) == 0) {
            return param_1;
          }
          pub_1406abac0(pbStack_90,CONCAT44(uStack_64,uStack_68) << 5,8);
          return param_1;
        }
        if (lStack_58 == CONCAT44(uStack_64,uStack_68)) {
          pdb_142db0ce0(&uStack_68);
        }
        lVar6 = lVar6 + 0x78;
        lVar4 = lVar3 * 0x20;
        puVar2 = (undefined8 *)(CONCAT44(uStack_5c,uStack_60) + 0x10 + lVar4);
        *puVar2 = uStack_a0;
        puVar2[1] = uStack_98;
        puVar1 = (undefined4 *)(CONCAT44(uStack_5c,uStack_60) + lVar4);
        *puVar1 = uStack_b0;
        puVar1[1] = uStack_ac;
        puVar1[2] = uStack_a8;
        puVar1[3] = uStack_a4;
        lStack_58 = lVar3 + 1;
      } while (lVar6 != lVar5);
    }
    uStack_84._3_1_ = (undefined1)uStack_68;
    uStack_80 = (undefined4)(CONCAT44(uStack_64,uStack_68) >> 8);
    uStack_7c._3_1_ = (undefined1)uStack_60;
    uStack_78 = (undefined7)(CONCAT44(uStack_5c,uStack_60) >> 8);
    *param_1 = 4;
    *(ulonglong *)(param_1 + 1) = CONCAT44(uStack_84,uStack_88);
    *(ulonglong *)(param_1 + 9) =
         CONCAT44(CONCAT13(uStack_7c._3_1_,(int3)((uint)uStack_64 >> 8)),uStack_80);
    *(ulonglong *)(param_1 + 0x10) = CONCAT71(uStack_78,uStack_7c._3_1_);
    *(longlong *)(param_1 + 0x18) = lStack_58;
  }
  return param_1;
}

