// VA 0x1403bcbb0, PDB extent 388 bytes
// serde_core::ser::Serializer::collect_seq<serde_json::value::ser::Serializer,ref$<alloc::vec::Vec<country_core::resources::walls::WallId,alloc::alloc::Global> > >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/main.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   serde_core::ser::Serializer::collect_seq<serde_json::value::ser::Serializer,ref$<alloc::vec::Vec<country_core::resources::walls::WallId,alloc::alloc::Global>
   > >
   Source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/main.rs
   Extent: 388 */

undefined1 * pdb_1403bcbb0(undefined1 *param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong lVar6;
  longlong lVar7;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  longlong lStack_78;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined7 uStack_58;
  undefined1 uStack_51;
  undefined8 uStack_48;
  
  uStack_48 = 0xfffffffffffffffe;
  lVar1 = *(longlong *)(param_2 + 8);
  lVar2 = *(longlong *)(param_2 + 0x10);
  pdb_140ddc8f0(&uStack_68,1,lVar2);
  if (SBORROW8(0,CONCAT44(uStack_64,uStack_68))) {
    *(ulonglong *)(param_1 + 8) = CONCAT44(uStack_5c,uStack_60);
    *param_1 = 6;
  }
  else {
    lVar7 = CONCAT17(uStack_51,uStack_58);
    uStack_88 = uStack_68;
    uStack_84 = uStack_64;
    uStack_80 = uStack_60;
    uStack_7c = uStack_5c;
    lStack_78 = lVar7;
    if (lVar2 != 0) {
      uVar5 = lVar7 << 5;
      lVar6 = 0;
      do {
        uVar3 = *(undefined8 *)(lVar1 + lVar6);
        uStack_68 = CONCAT31(uStack_68._1_3_,2);
        uStack_60 = 0;
        uStack_5c = 0;
        uStack_58 = (undefined7)uVar3;
        uStack_51 = (undefined1)((ulonglong)uVar3 >> 0x38);
        if (lVar7 == CONCAT44(uStack_84,uStack_88)) {
          lStack_78 = lVar7;
          pdb_142db0ce0(&uStack_88);
        }
        lVar4 = CONCAT44(uStack_7c,uStack_80) + (uVar5 | 0x10);
        *(undefined1 *)(lVar4 + -0x10 + lVar6 * 4) = 2;
        *(undefined8 *)(lVar4 + -8 + lVar6 * 4) = 0;
        *(undefined8 *)(lVar4 + lVar6 * 4) = uVar3;
        lVar7 = lVar7 + 1;
        lVar6 = lVar6 + 8;
        lStack_78 = lVar7;
      } while (lVar2 << 3 != lVar6);
    }
    uStack_64._3_1_ = (undefined1)uStack_88;
    uStack_60 = (undefined4)(CONCAT44(uStack_84,uStack_88) >> 8);
    uStack_5c._3_1_ = (undefined1)uStack_80;
    uStack_58 = (undefined7)(CONCAT44(uStack_7c,uStack_80) >> 8);
    *param_1 = 4;
    *(ulonglong *)(param_1 + 1) = CONCAT44(uStack_64,uStack_68);
    *(ulonglong *)(param_1 + 9) =
         CONCAT44(CONCAT13(uStack_5c._3_1_,(int3)((uint)uStack_84 >> 8)),uStack_60);
    *(ulonglong *)(param_1 + 0x10) = CONCAT71(uStack_58,uStack_5c._3_1_);
    *(longlong *)(param_1 + 0x18) = lStack_78;
  }
  return param_1;
}

