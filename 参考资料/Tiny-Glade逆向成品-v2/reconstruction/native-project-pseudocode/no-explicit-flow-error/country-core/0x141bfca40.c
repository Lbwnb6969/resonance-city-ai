// VA 0x141bfca40, PDB extent 500 bytes
// serde_core::ser::Serializer::collect_seq<serde_json::value::ser::Serializer,ref$<alloc::vec::Vec<tg_mods::identity::RecordedModEntry,alloc::alloc::Global> > >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/lib.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   serde_core::ser::Serializer::collect_seq<serde_json::value::ser::Serializer,ref$<alloc::vec::Vec<tg_mods::identity::RecordedModEntry,alloc::alloc::Global>
   > >
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/lib.rs
   Extent: 500 */

undefined1 * pdb_141bfca40(undefined1 *param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong arg0;
  undefined8 uVar3;
  code *pcVar4;
  longlong lVar5;
  longlong lVar6;
  byte *pbVar7;
  longlong lVar8;
  longlong lVar9;
  undefined8 uVar10;
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
  undefined7 uStack_50;
  undefined1 uStack_49;
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
    lStack_78 = CONCAT17(uStack_51,uStack_58);
    uStack_88 = uStack_68;
    uStack_84 = uStack_64;
    uStack_80 = uStack_60;
    uStack_7c = uStack_5c;
    if (lVar2 != 0) {
      lVar9 = 0;
      do {
        arg0 = *(ulonglong *)(lVar1 + 0x10 + lVar9);
        if ((longlong)arg0 < 0) {
          uVar10 = 0;
LAB_141bfcbb0:
          pdb_142dc7e2a(uVar10,arg0);
                    /* WARNING: Does not return */
          pcVar4 = (code *)invalidInstructionException();
          (*pcVar4)();
        }
        if (arg0 == 0) {
          pbVar7 = (byte *)0x1;
        }
        else {
          uVar3 = *(undefined8 *)(lVar1 + 8 + lVar9);
          pdb_14007ee60();
          uVar10 = 1;
          pbVar7 = pub_1406abab0(arg0,1);
          if (pbVar7 == (byte *)0x0) goto LAB_141bfcbb0;
          pub_142e32760(pbVar7,uVar3,arg0);
        }
        lVar6 = lStack_78;
        uStack_68 = CONCAT31(uStack_68._1_3_,3);
        uStack_60 = (undefined4)arg0;
        uStack_5c = (undefined4)(arg0 >> 0x20);
        uStack_58 = SUB87(pbVar7,0);
        uStack_51 = (undefined1)((ulonglong)pbVar7 >> 0x38);
        uStack_50 = (undefined7)arg0;
        uStack_49 = (undefined1)(arg0 >> 0x38);
        if (lStack_78 == CONCAT44(uStack_84,uStack_88)) {
          pdb_142db0ce0(&uStack_88);
        }
        lVar5 = CONCAT44(uStack_7c,uStack_80);
        lVar8 = lVar6 * 0x20;
        *(undefined1 *)(lVar5 + lVar8) = 3;
        *(ulonglong *)(lVar5 + 8 + lVar8) = arg0;
        *(byte **)(lVar5 + 0x10 + lVar8) = pbVar7;
        *(ulonglong *)(lVar5 + 0x18 + lVar8) = arg0;
        lStack_78 = lVar6 + 1;
        lVar9 = lVar9 + 0x18;
      } while (lVar2 * 0x18 != lVar9);
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

