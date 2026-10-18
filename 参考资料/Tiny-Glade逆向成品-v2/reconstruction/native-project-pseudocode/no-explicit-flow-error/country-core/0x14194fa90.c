// VA 0x14194fa90, PDB extent 617 bytes
// country_core::resources::history::stairs_history_edit::_::impl$0::serialize<ref_mut$<serde_json::ser::Serializer<ref_mut$<alloc::vec::Vec<u8,alloc::alloc::Global> >,serde_json::ser::CompactFormatter> > >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/history/stairs_history_edit.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::resources::history::stairs_history_edit::_::impl$0::serialize<ref_mut$<serde_json::ser::Serializer<ref_mut$<alloc::vec::Vec<u8,alloc::alloc::Global>
   >,serde_json::ser::CompactFormatter> > >
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/history/stairs_history_edit.rs
   Extent: 617 */

longlong pdb_14194fa90(int *param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined2 uStack_30;
  longlong *plStack_28;
  
  if (*param_1 == 1) {
    plVar1 = (longlong *)*param_2;
    lVar3 = plVar1[2];
    if (*plVar1 == lVar3) {
      pdb_142d7f1b0(plVar1,lVar3,1,1,1);
      lVar3 = plVar1[2];
    }
    *(undefined1 *)(plVar1[1] + lVar3) = 0x7b;
    plVar1[2] = lVar3 + 1;
    puVar4 = &UNK_14335ad73;
    uVar5 = 0x10;
  }
  else {
    plVar1 = (longlong *)*param_2;
    lVar3 = plVar1[2];
    if (*plVar1 == lVar3) {
      pdb_142d7f1b0(plVar1,lVar3,1,1,1);
      lVar3 = plVar1[2];
    }
    *(undefined1 *)(plVar1[1] + lVar3) = 0x7b;
    plVar1[2] = lVar3 + 1;
    puVar4 = &UNK_14335ad61;
    uVar5 = 0xe;
  }
  lVar3 = pdb_14054e5c0(param_2,param_2 + 1,puVar4,uVar5);
  if (lVar3 == 0) {
    plVar1 = (longlong *)*param_2;
    lVar3 = plVar1[2];
    if (*plVar1 == lVar3) {
      pdb_142d7f1b0(plVar1,lVar3,1,1,1);
      lVar3 = plVar1[2];
    }
    *(undefined1 *)(plVar1[1] + lVar3) = 0x3a;
    plVar1[2] = lVar3 + 1;
    plVar1 = (longlong *)*param_2;
    lVar3 = plVar1[2];
    if (*plVar1 == lVar3) {
      pdb_142d7f1b0(plVar1,lVar3,1,1,1);
      lVar3 = plVar1[2];
    }
    *(undefined1 *)(plVar1[1] + lVar3) = 0x7b;
    plVar1[2] = lVar3 + 1;
    uStack_30 = 0x100;
    plStack_28 = param_2;
    lVar3 = pdb_141b7d7e0(&uStack_30,&UNK_14335ad6f,4,param_1 + 1);
    plVar1 = plStack_28;
    if (lVar3 == 0) {
      if ((char)uStack_30 == '\x01') {
                    /* WARNING: Subroutine does not return */
        pdb_142dc83b0(&UNK_14335b0f8,0x28,&UNK_14335b180);
      }
      if (uStack_30._1_1_ != '\0') {
        plVar2 = (longlong *)*plStack_28;
        lVar3 = plVar2[2];
        if (*plVar2 == lVar3) {
          pdb_142d7f1b0(plVar2,lVar3,1,1,1);
          lVar3 = plVar2[2];
        }
        *(undefined1 *)(plVar2[1] + lVar3) = 0x7d;
        plVar2[2] = lVar3 + 1;
      }
      plVar1 = (longlong *)*plVar1;
      lVar3 = plVar1[2];
      if (*plVar1 == lVar3) {
        pdb_142d7f1b0(plVar1,lVar3,1,1,1);
        lVar3 = plVar1[2];
      }
      *(undefined1 *)(plVar1[1] + lVar3) = 0x7d;
      plVar1[2] = lVar3 + 1;
      lVar3 = 0;
    }
  }
  else {
    lVar3 = pdb_142db8fb0(lVar3);
  }
  return lVar3;
}

