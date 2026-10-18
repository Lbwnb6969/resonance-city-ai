// VA 0x14021d5e0, PDB extent 1125 bytes
// country_core::resources::history::tree_edit::_::impl$0::serialize<ref_mut$<serde_json::ser::Serializer<ref_mut$<alloc::vec::Vec<u8,alloc::alloc::Global> >,serde_json::ser::CompactFormatter> > >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/history/tree_edit.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::resources::history::tree_edit::_::impl$0::serialize<ref_mut$<serde_json::ser::Serializer<ref_mut$<alloc::vec::Vec<u8,alloc::alloc::Global>
   >,serde_json::ser::CompactFormatter> > >
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/history/tree_edit.rs
   Extent: 1125 */

byte * pdb_14021d5e0(int *param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  byte *pbVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined2 uStack_40;
  longlong *plStack_38;
  longlong lStack_30;
  longlong *plStack_28;
  
  if (*param_1 == 0) {
    plVar1 = (longlong *)*param_2;
    lVar3 = plVar1[2];
    if (*plVar1 == lVar3) {
      pdb_142d7f1b0(plVar1,lVar3,1,1,1);
      lVar3 = plVar1[2];
    }
    *(undefined1 *)(plVar1[1] + lVar3) = 0x7b;
    plVar1[2] = lVar3 + 1;
    puVar5 = &UNK_142e60cb9;
    uVar6 = 5;
  }
  else {
    if (*param_1 == 1) {
      plVar1 = (longlong *)*param_2;
      lVar3 = plVar1[2];
      if (*plVar1 == lVar3) {
        pdb_142d7f1b0(plVar1,lVar3,1,1,1);
        lVar3 = plVar1[2];
      }
      *(undefined1 *)(plVar1[1] + lVar3) = 0x7b;
      plVar1[2] = lVar3 + 1;
      lVar3 = pdb_14054e5c0(param_2,param_2 + 1,&UNK_142e60cc7,4);
      if (lVar3 != 0) {
        plStack_38 = (longlong *)0x1;
        lStack_30 = lVar3;
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
          *(longlong **)pbVar4 = plStack_38;
          *(longlong *)(pbVar4 + 8) = lStack_30;
          return pbVar4;
        }
                    /* WARNING: Subroutine does not return */
        pdb_142dc7e11(8,0x28);
      }
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
      lStack_30 = CONCAT62(lStack_30._2_6_,0x100);
      plStack_28 = param_2;
      pbVar4 = (byte *)pdb_140547dd0(&lStack_30,&UNK_142e60cbe,5,param_1 + 8);
      if (pbVar4 != (byte *)0x0) {
        return pbVar4;
      }
      if ((char)lStack_30 != '\x01') {
        pbVar4 = (byte *)pdb_140548740(&lStack_30,&UNK_142e60aa2,4,param_1 + 1);
        if (pbVar4 != (byte *)0x0) {
          return pbVar4;
        }
        if ((char)lStack_30 != '\x01') {
          pbVar4 = (byte *)pdb_140548740(&lStack_30,&UNK_142e60aa6,2,param_1 + 4);
          if (pbVar4 == (byte *)0x0) {
            pdb_14021dc90(&lStack_30);
            return (byte *)0x0;
          }
          return pbVar4;
        }
      }
      goto LAB_14021d8df;
    }
    plVar1 = (longlong *)*param_2;
    lVar3 = plVar1[2];
    if (*plVar1 == lVar3) {
      pdb_142d7f1b0(plVar1,lVar3,1,1,1);
      lVar3 = plVar1[2];
    }
    *(undefined1 *)(plVar1[1] + lVar3) = 0x7b;
    plVar1[2] = lVar3 + 1;
    puVar5 = &UNK_142e60ccb;
    uVar6 = 6;
  }
  lVar3 = pdb_14054e5c0(param_2,param_2 + 1,puVar5,uVar6);
  if (lVar3 != 0) {
    pbVar4 = (byte *)pdb_142db8fb0(lVar3);
    return pbVar4;
  }
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
  uStack_40 = 0x100;
  plStack_38 = param_2;
  pbVar4 = (byte *)pdb_140547dd0(&uStack_40,&UNK_142e60cbe,5,param_1 + 2);
  if (pbVar4 != (byte *)0x0) {
    return pbVar4;
  }
  if ((char)uStack_40 != '\x01') {
    pbVar4 = (byte *)pdb_14053f140(&uStack_40,&UNK_142e60cc3,4,param_1 + 4);
    plVar1 = plStack_38;
    if (pbVar4 != (byte *)0x0) {
      return pbVar4;
    }
    if ((char)uStack_40 != '\x01') {
      if (uStack_40._1_1_ != '\0') {
        plVar2 = (longlong *)*plStack_38;
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
      return (byte *)0x0;
    }
                    /* WARNING: Subroutine does not return */
    pdb_142dc83b0(&UNK_142e60cfc,0x28,&UNK_142e60d88);
  }
LAB_14021d8df:
                    /* WARNING: Subroutine does not return */
  pdb_142dc83b0(&UNK_142e60cfc,0x28,&UNK_142e60d70);
}

