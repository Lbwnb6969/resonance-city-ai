// VA 0x141bfde70, PDB extent 484 bytes
// serde_core::ser::Serializer::collect_seq<serde_json::value::ser::Serializer,ref$<alloc::vec::Vec<ref$<str$>,alloc::alloc::Global> > >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/lib.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   serde_core::ser::Serializer::collect_seq<serde_json::value::ser::Serializer,ref$<alloc::vec::Vec<ref$<str$>,alloc::alloc::Global>
   > >
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/lib.rs
   Extent: 484 */

undefined1 * pdb_141bfde70(undefined1 *param_1,longlong param_2)

{
  longlong lVar1;
  ulonglong arg0;
  undefined8 uVar2;
  code *pcVar3;
  longlong lVar4;
  byte *pbVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
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
  puVar7 = *(undefined8 **)(param_2 + 8);
  lVar1 = *(longlong *)(param_2 + 0x10);
  pdb_140ddc8f0(&uStack_68,1,lVar1);
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
    if (lVar1 != 0) {
      puVar8 = puVar7 + lVar1 * 2;
      do {
        arg0 = puVar7[1];
        if ((longlong)arg0 < 0) {
          uVar9 = 0;
LAB_141bfdfcc:
          pdb_142dc7e2a(uVar9,arg0);
                    /* WARNING: Does not return */
          pcVar3 = (code *)invalidInstructionException();
          (*pcVar3)();
        }
        if (arg0 == 0) {
          pbVar5 = (byte *)0x1;
        }
        else {
          uVar2 = *puVar7;
          pdb_14007ee60();
          uVar9 = 1;
          pbVar5 = pub_1406abab0(arg0,1);
          if (pbVar5 == (byte *)0x0) goto LAB_141bfdfcc;
          pub_142e32760(pbVar5,uVar2,arg0);
        }
        lVar1 = lStack_78;
        uStack_68 = CONCAT31(uStack_68._1_3_,3);
        uStack_60 = (undefined4)arg0;
        uStack_5c = (undefined4)(arg0 >> 0x20);
        uStack_58 = SUB87(pbVar5,0);
        uStack_51 = (undefined1)((ulonglong)pbVar5 >> 0x38);
        uStack_50 = (undefined7)arg0;
        uStack_49 = (undefined1)(arg0 >> 0x38);
        if (lStack_78 == CONCAT44(uStack_84,uStack_88)) {
          pdb_142db0ce0(&uStack_88);
        }
        lVar4 = CONCAT44(uStack_7c,uStack_80);
        lVar6 = lVar1 * 0x20;
        *(undefined1 *)(lVar4 + lVar6) = 3;
        *(ulonglong *)(lVar4 + 8 + lVar6) = arg0;
        *(byte **)(lVar4 + 0x10 + lVar6) = pbVar5;
        *(ulonglong *)(lVar4 + 0x18 + lVar6) = arg0;
        lStack_78 = lVar1 + 1;
        puVar7 = puVar7 + 2;
      } while (puVar7 != puVar8);
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

