// VA 0x141b2acf0, PDB extent 705 bytes
// country_core::resources::history::path_edit::_::impl$0::serialize<ref_mut$<serde_json::ser::Serializer<ref_mut$<alloc::vec::Vec<u8,alloc::alloc::Global> >,serde_json::ser::CompactFormatter> > >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/history/path_edit.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::resources::history::path_edit::_::impl$0::serialize<ref_mut$<serde_json::ser::Serializer<ref_mut$<alloc::vec::Vec<u8,alloc::alloc::Global>
   >,serde_json::ser::CompactFormatter> > >
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/history/path_edit.rs
   Extent: 705 */

longlong pdb_141b2acf0(undefined4 *param_1,longlong *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined1 uVar3;
  undefined4 uVar4;
  longlong *plVar5;
  code *pcVar6;
  longlong lVar7;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined8 uStack_b0;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 uStack_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined1 auStack_84 [12];
  longlong *plStack_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  longlong *plStack_68;
  longlong lStack_60;
  undefined4 uStack_58;
  undefined1 uStack_54;
  undefined8 uStack_50;
  
  uStack_50 = 0xfffffffffffffffe;
  plStack_78 = *(longlong **)(param_1 + 2);
  lStack_60 = *(longlong *)(param_1 + 4);
  LOCK();
  lVar7 = *plStack_78;
  *plStack_78 = *plStack_78 + 1;
  UNLOCK();
  if (*plStack_78 == 0 || SCARRY8(lVar7,1) != *plStack_78 < 0) {
                    /* WARNING: Does not return */
    pcVar6 = (code *)invalidInstructionException();
    (*pcVar6)();
  }
  uVar3 = *(undefined1 *)(param_1 + 7);
  uVar1 = param_1[6];
  uVar4 = *param_1;
  uVar2 = param_1[1];
  uStack_70 = uVar4;
  uStack_6c = uVar2;
  plStack_68 = plStack_78;
  uStack_58 = uVar1;
  uStack_54 = uVar3;
  pdb_1415f79d0(&uStack_c0,plStack_78 + 2,(longlong)plStack_78 + lStack_60 * 0xc + 0x10);
  uStack_98 = uStack_b0;
  uStack_a8 = uStack_c0;
  uStack_a4 = uStack_bc;
  uStack_a0 = uStack_b8;
  uStack_9c = uStack_b4;
  LOCK();
  *plStack_78 = *plStack_78 + -1;
  UNLOCK();
  uStack_90 = uVar4;
  uStack_8c = uVar2;
  uStack_88 = uVar1;
  auStack_84[0] = uVar3;
  if (*plStack_78 == 0) {
    pdb_140c79ee0(&plStack_68);
  }
  plVar5 = (longlong *)*param_2;
  lVar7 = plVar5[2];
  if (*plVar5 == lVar7) {
    pdb_142d7f1b0(plVar5,lVar7,1,1,1);
    lVar7 = plVar5[2];
  }
  *(undefined1 *)(plVar5[1] + lVar7) = 0x7b;
  plVar5[2] = lVar7 + 1;
  uStack_70 = CONCAT22(uStack_70._2_2_,0x100);
  plStack_68 = param_2;
  lVar7 = pdb_141b7be90(&uStack_70,&UNK_14339297c,6,&uStack_a8);
  if (lVar7 != 0) goto LAB_141b2ae17;
  if ((char)uStack_70 == '\0') {
    lVar7 = pdb_141b85940(&uStack_70,&UNK_143392982,0xb,auStack_84);
    if (lVar7 != 0) goto LAB_141b2ae17;
    if ((char)uStack_70 == '\0') {
      lVar7 = pdb_141b82660(&uStack_70,&UNK_14339298d,10,&uStack_88);
      if (lVar7 != 0) goto LAB_141b2ae17;
      if ((char)uStack_70 == '\0') {
        lVar7 = pdb_141b7e370(&uStack_70,&UNK_143392997,10,&uStack_90);
        if (((lVar7 == 0) && (lVar7 = 0, (uStack_70 & 1) == 0)) && (uStack_70._1_1_ != '\0')) {
          pdb_140172c20(*plStack_68,&UNK_143391d68,1);
          lVar7 = 0;
        }
        goto LAB_141b2ae17;
      }
    }
  }
  lVar7 = pdb_142db8610();
LAB_141b2ae17:
  if (CONCAT44(uStack_a4,uStack_a8) != 0) {
    pub_1406abac0((byte *)CONCAT44(uStack_9c,uStack_a0),CONCAT44(uStack_a4,uStack_a8) * 0xc,4);
  }
  return lVar7;
}

