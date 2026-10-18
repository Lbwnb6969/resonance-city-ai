// VA 0x140a783e0, PDB extent 512 bytes
// country_core::resources::history::auto_clutter_edit::_::impl$0::serialize<ref_mut$<serde_json::ser::Serializer<ref_mut$<alloc::vec::Vec<u8,alloc::alloc::Global> >,serde_json::ser::CompactFormatter> > >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/history/auto_clutter_edit.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::resources::history::auto_clutter_edit::_::impl$0::serialize<ref_mut$<serde_json::ser::Serializer<ref_mut$<alloc::vec::Vec<u8,alloc::alloc::Global>
   >,serde_json::ser::CompactFormatter> > >
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/history/auto_clutter_edit.rs
   Extent: 512 */

byte * pdb_140a783e0(undefined8 param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  byte *pbVar4;
  undefined8 uVar5;
  undefined8 uStack_30;
  longlong *plStack_28;
  
  plVar1 = (longlong *)*param_2;
  lVar3 = plVar1[2];
  if (*plVar1 == lVar3) {
    pdb_142d7f1b0(plVar1,lVar3,1,1,1);
    lVar3 = plVar1[2];
  }
  *(undefined1 *)(plVar1[1] + lVar3) = 0x7b;
  plVar1[2] = lVar3 + 1;
  lVar3 = pdb_14054e5c0(param_2,param_2 + 1,&UNK_143042097,6);
  if (lVar3 == 0) {
    lVar3 = plVar1[2];
    if (*plVar1 == lVar3) {
      pdb_142d7f1b0(plVar1,lVar3,1,1,1);
      lVar3 = plVar1[2];
    }
    *(undefined1 *)(plVar1[1] + lVar3) = 0x3a;
    lVar3 = lVar3 + 1;
    plVar1[2] = lVar3;
    if (*plVar1 == lVar3) {
      pdb_142d7f1b0(plVar1,lVar3,1,1,1);
      lVar3 = plVar1[2];
    }
    *(undefined1 *)(plVar1[1] + lVar3) = 0x7b;
    plVar1[2] = lVar3 + 1;
    uStack_30 = CONCAT62(uStack_30._2_6_,0x100);
    plStack_28 = param_2;
    pbVar4 = (byte *)pdb_141b83c70(&uStack_30,&UNK_14304209d,2,param_1);
    plVar1 = plStack_28;
    if (pbVar4 == (byte *)0x0) {
      if ((char)uStack_30 == '\x01') {
                    /* WARNING: Subroutine does not return */
        pdb_142dc83b0(&UNK_143042600,0x28,&UNK_143042690);
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
      pbVar4 = (byte *)0x0;
    }
    return pbVar4;
  }
  uVar5 = 1;
  uStack_30 = lVar3;
  pdb_14007ee60();
  pbVar4 = pub_1406abab0(0x28,8);
  if (pbVar4 != (byte *)0x0) {
    pbVar4[0x20] = 0;
    pbVar4[0x21] = 0;
    pbVar4[0x22] = 0;
    pbVar4[0x23] = 0;
    pbVar4[0x24] = 0;
    pbVar4[0x25] = 0;
    pbVar4[0x26] = 0;
    pbVar4[0x27] = 0;
    *(longlong **)(pbVar4 + 0x10) = plStack_28;
    pbVar4[0x18] = 0;
    pbVar4[0x19] = 0;
    pbVar4[0x1a] = 0;
    pbVar4[0x1b] = 0;
    pbVar4[0x1c] = 0;
    pbVar4[0x1d] = 0;
    pbVar4[0x1e] = 0;
    pbVar4[0x1f] = 0;
    *(undefined8 *)pbVar4 = uVar5;
    *(longlong *)(pbVar4 + 8) = uStack_30;
    return pbVar4;
  }
                    /* WARNING: Subroutine does not return */
  pdb_142dc7e11(8,0x28);
}

