// VA 0x1417be190, PDB extent 518 bytes
// country_core::systems::wall::valid_enclosure::_::impl$0::serialize<ref_mut$<serde_json::ser::Serializer<ref_mut$<alloc::vec::Vec<u8,alloc::alloc::Global> >,serde_json::ser::CompactFormatter> > >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/wall/valid_enclosure/mod.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::systems::wall::valid_enclosure::_::impl$0::serialize<ref_mut$<serde_json::ser::Serializer<ref_mut$<alloc::vec::Vec<u8,alloc::alloc::Global>
   >,serde_json::ser::CompactFormatter> > >
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/wall/valid_enclosure/mod.rs
   Extent: 518 */

byte * pdb_1417be190(int *param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  byte *pbVar3;
  undefined8 in_stack_ffffffffffffffd8;
  
  if (*param_1 == 1) {
    plVar1 = (longlong *)*param_2;
    lVar2 = plVar1[2];
    if (*plVar1 == lVar2) {
      in_stack_ffffffffffffffd8 = 1;
      pdb_142d7f1b0(plVar1,lVar2,1,1);
      lVar2 = plVar1[2];
    }
    *(undefined1 *)(plVar1[1] + lVar2) = 0x7b;
    plVar1[2] = lVar2 + 1;
    lVar2 = pdb_14054e5c0(param_2,param_2 + 1,&UNK_143336936,9);
    if (lVar2 != 0) {
LAB_1417be2b5:
      pdb_14007ee60();
      pbVar3 = pub_1406abab0(0x28,8);
      if (pbVar3 != (byte *)0x0) {
        pbVar3[0x20] = 0;
        pbVar3[0x21] = 0;
        pbVar3[0x22] = 0;
        pbVar3[0x23] = 0;
        pbVar3[0x24] = 0;
        pbVar3[0x25] = 0;
        pbVar3[0x26] = 0;
        pbVar3[0x27] = 0;
        *(undefined8 *)(pbVar3 + 0x10) = in_stack_ffffffffffffffd8;
        pbVar3[0x18] = 0;
        pbVar3[0x19] = 0;
        pbVar3[0x1a] = 0;
        pbVar3[0x1b] = 0;
        pbVar3[0x1c] = 0;
        pbVar3[0x1d] = 0;
        pbVar3[0x1e] = 0;
        pbVar3[0x1f] = 0;
        pbVar3[0] = 1;
        pbVar3[1] = 0;
        pbVar3[2] = 0;
        pbVar3[3] = 0;
        pbVar3[4] = 0;
        pbVar3[5] = 0;
        pbVar3[6] = 0;
        pbVar3[7] = 0;
        *(longlong *)(pbVar3 + 8) = lVar2;
        return pbVar3;
      }
                    /* WARNING: Subroutine does not return */
      pdb_142dc7e11(8,0x28);
    }
    plVar1 = (longlong *)*param_2;
    lVar2 = plVar1[2];
    if (*plVar1 == lVar2) {
      pdb_142d7f1b0(plVar1,lVar2,1,1,1);
      lVar2 = plVar1[2];
    }
    *(undefined1 *)(plVar1[1] + lVar2) = 0x3a;
    plVar1[2] = lVar2 + 1;
    pbVar3 = (byte *)pdb_141adc4e0(param_1 + 1,param_2);
  }
  else {
    plVar1 = (longlong *)*param_2;
    lVar2 = plVar1[2];
    if (*plVar1 == lVar2) {
      in_stack_ffffffffffffffd8 = 1;
      pdb_142d7f1b0(plVar1,lVar2,1,1);
      lVar2 = plVar1[2];
    }
    *(undefined1 *)(plVar1[1] + lVar2) = 0x7b;
    plVar1[2] = lVar2 + 1;
    lVar2 = pdb_14054e5c0(param_2,param_2 + 1,&UNK_143336930,6);
    if (lVar2 != 0) goto LAB_1417be2b5;
    plVar1 = (longlong *)*param_2;
    lVar2 = plVar1[2];
    if (*plVar1 == lVar2) {
      pdb_142d7f1b0(plVar1,lVar2,1,1,1);
      lVar2 = plVar1[2];
    }
    *(undefined1 *)(plVar1[1] + lVar2) = 0x3a;
    plVar1[2] = lVar2 + 1;
    pbVar3 = (byte *)pdb_140bc02e0(param_1 + 1,param_2);
  }
  if (pbVar3 == (byte *)0x0) {
    param_2 = (longlong *)*param_2;
    lVar2 = param_2[2];
    if (*param_2 == lVar2) {
      pdb_142d7f1b0(param_2,lVar2,1,1,1);
      lVar2 = param_2[2];
    }
    *(undefined1 *)(param_2[1] + lVar2) = 0x7d;
    param_2[2] = lVar2 + 1;
    pbVar3 = (byte *)0x0;
  }
  return pbVar3;
}

