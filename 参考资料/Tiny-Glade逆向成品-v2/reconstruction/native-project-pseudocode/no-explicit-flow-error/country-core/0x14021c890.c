// VA 0x14021c890, PDB extent 524 bytes
// country_core::resources::history::path_edit::_::impl$0::serialize<ref_mut$<serde_json::ser::Serializer<ref_mut$<alloc::vec::Vec<u8,alloc::alloc::Global> >,serde_json::ser::CompactFormatter> > >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/history/path_edit.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::resources::history::path_edit::_::impl$0::serialize<ref_mut$<serde_json::ser::Serializer<ref_mut$<alloc::vec::Vec<u8,alloc::alloc::Global>
   >,serde_json::ser::CompactFormatter> > >
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/history/path_edit.rs
   Extent: 524 */

longlong pdb_14021c890(undefined4 *param_1,longlong *param_2)

{
  longlong *plVar1;
  code *pcVar2;
  longlong lVar3;
  longlong lStack_68;
  byte *pbStack_60;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [4];
  undefined1 auStack_44 [4];
  undefined4 uStack_40;
  undefined4 uStack_3c;
  longlong *plStack_38;
  undefined8 uStack_30;
  undefined4 uStack_28;
  undefined1 uStack_24;
  undefined8 uStack_20;
  
  uStack_20 = 0xfffffffffffffffe;
  plStack_38 = *(longlong **)(param_1 + 2);
  uStack_30 = *(undefined8 *)(param_1 + 4);
  LOCK();
  lVar3 = *plStack_38;
  *plStack_38 = *plStack_38 + 1;
  UNLOCK();
  if (*plStack_38 == 0 || SCARRY8(lVar3,1) != *plStack_38 < 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  uStack_24 = *(undefined1 *)(param_1 + 7);
  uStack_28 = param_1[6];
  uStack_40 = *param_1;
  uStack_3c = param_1[1];
  pdb_140bd6830(&lStack_68,&uStack_40);
  plVar1 = (longlong *)*param_2;
  lVar3 = plVar1[2];
  if (*plVar1 == lVar3) {
    pdb_142d7f1b0(plVar1,lVar3,1,1,1);
    lVar3 = plVar1[2];
  }
  *(undefined1 *)(plVar1[1] + lVar3) = 0x7b;
  plVar1[2] = lVar3 + 1;
  uStack_40 = CONCAT22(uStack_40._2_2_,0x100);
  plStack_38 = param_2;
  lVar3 = pdb_140547fd0(&uStack_40,&UNK_142e60b79,6,&lStack_68);
  if (lVar3 != 0) goto LAB_14021c96f;
  if ((char)uStack_40 == '\0') {
    lVar3 = pdb_14053e0d0(&uStack_40,&UNK_142e60b7f,0xb,auStack_44);
    if (lVar3 != 0) goto LAB_14021c96f;
    if ((char)uStack_40 == '\0') {
      lVar3 = pdb_1405432b0(&uStack_40,&UNK_142e60b8a,10,auStack_48);
      if (lVar3 != 0) goto LAB_14021c96f;
      if ((char)uStack_40 == '\0') {
        lVar3 = pdb_14053dc50(&uStack_40,&UNK_142e60b94,10,auStack_50);
        if (((lVar3 == 0) && (lVar3 = 0, (uStack_40 & 1) == 0)) && (uStack_40._1_1_ != '\0')) {
          pdb_140172c20(*plStack_38,&UNK_142e60a89,1);
          lVar3 = 0;
        }
        goto LAB_14021c96f;
      }
    }
  }
  lVar3 = pdb_142db8610();
LAB_14021c96f:
  if (lStack_68 != 0) {
    pub_1406abac0(pbStack_60,lStack_68 * 0xc,4);
  }
  return lVar3;
}

