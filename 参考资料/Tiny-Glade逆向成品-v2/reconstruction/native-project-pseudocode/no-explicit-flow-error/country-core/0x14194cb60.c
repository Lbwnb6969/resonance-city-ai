// VA 0x14194cb60, PDB extent 1403 bytes
// country_core::resources::history::terrain_edit::_::impl$0::serialize<ref_mut$<serde_json::ser::Serializer<ref_mut$<alloc::vec::Vec<u8,alloc::alloc::Global> >,serde_json::ser::CompactFormatter> > >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/history/terrain_edit.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::resources::history::terrain_edit::_::impl$0::serialize<ref_mut$<serde_json::ser::Serializer<ref_mut$<alloc::vec::Vec<u8,alloc::alloc::Global>
   >,serde_json::ser::CompactFormatter> > >
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/history/terrain_edit.rs
   Extent: 1403 */

byte * pdb_14194cb60(ulonglong *param_1,longlong *param_2)

{
  longlong *plVar1;
  ulonglong uVar2;
  longlong lVar3;
  byte *pbVar4;
  longlong *plVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uStack_30;
  longlong *plStack_28;
  
  uVar2 = 2;
  if ((longlong)*param_1 < 0) {
    uVar2 = *param_1 ^ 0x8000000000000000;
  }
  plVar5 = param_2 + 1;
  if (uVar2 == 0) {
    plVar1 = (longlong *)*param_2;
    lVar3 = plVar1[2];
    if (*plVar1 == lVar3) {
      pdb_142d7f1b0(plVar1,lVar3,1,1,1);
      lVar3 = plVar1[2];
    }
    *(undefined1 *)(plVar1[1] + lVar3) = 0x7b;
    plVar1[2] = lVar3 + 1;
    lVar3 = pdb_14054e5c0(param_2,plVar5,&UNK_14335a73b,0x10);
    if (lVar3 != 0) goto LAB_14194cf53;
    plVar5 = (longlong *)*param_2;
    lVar3 = plVar5[2];
    if (*plVar5 == lVar3) {
      pdb_142d7f1b0(plVar5,lVar3,1,1,1);
      lVar3 = plVar5[2];
    }
    *(undefined1 *)(plVar5[1] + lVar3) = 0x3a;
    plVar5[2] = lVar3 + 1;
    plVar5 = (longlong *)*param_2;
    lVar3 = plVar5[2];
    if (*plVar5 == lVar3) {
      pdb_142d7f1b0(plVar5,lVar3,1,1,1);
      lVar3 = plVar5[2];
    }
    *(undefined1 *)(plVar5[1] + lVar3) = 0x7b;
    plVar5[2] = lVar3 + 1;
    uStack_30 = CONCAT62(uStack_30._2_6_,0x100);
    plStack_28 = param_2;
    pbVar4 = (byte *)pdb_141b7dc80(&uStack_30,&UNK_14335a7b4,5,param_1 + 4);
    if (pbVar4 != (byte *)0x0) {
      return pbVar4;
    }
    if ((char)uStack_30 != '\0') {
LAB_14194ceb6:
      pbVar4 = (byte *)pdb_142db8610();
      return pbVar4;
    }
    pbVar4 = (byte *)pdb_141b7be90(&uStack_30,&UNK_14335a7b9,10,param_1 + 1);
    if (pbVar4 != (byte *)0x0) {
      return pbVar4;
    }
    if ((char)uStack_30 != '\0') goto LAB_14194ceb6;
    param_1 = (ulonglong *)((longlong)param_1 + 0x24);
    puVar6 = &UNK_14335a7c3;
    uVar7 = 9;
  }
  else {
    if (uVar2 != 1) {
      plVar1 = (longlong *)*param_2;
      lVar3 = plVar1[2];
      if (*plVar1 == lVar3) {
        pdb_142d7f1b0(plVar1,lVar3,1,1,1);
        lVar3 = plVar1[2];
      }
      *(undefined1 *)(plVar1[1] + lVar3) = 0x7b;
      plVar1[2] = lVar3 + 1;
      lVar3 = pdb_14054e5c0(param_2,plVar5,&UNK_14335a75c,0x11);
      if (lVar3 != 0) goto LAB_14194cf53;
      plVar5 = (longlong *)*param_2;
      lVar3 = plVar5[2];
      if (*plVar5 == lVar3) {
        pdb_142d7f1b0(plVar5,lVar3,1,1,1);
        lVar3 = plVar5[2];
      }
      *(undefined1 *)(plVar5[1] + lVar3) = 0x3a;
      plVar5[2] = lVar3 + 1;
      plVar5 = (longlong *)*param_2;
      lVar3 = plVar5[2];
      if (*plVar5 == lVar3) {
        pdb_142d7f1b0(plVar5,lVar3,1,1,1);
        lVar3 = plVar5[2];
      }
      *(undefined1 *)(plVar5[1] + lVar3) = 0x7b;
      plVar5[2] = lVar3 + 1;
      uStack_30 = CONCAT62(uStack_30._2_6_,0x100);
      plStack_28 = param_2;
      pbVar4 = (byte *)pdb_141b7dc80(&uStack_30,&UNK_14335a7cc,2,param_1 + 4);
      if (pbVar4 != (byte *)0x0) {
        return pbVar4;
      }
      if ((char)uStack_30 != '\0') goto LAB_14194ceb6;
      pbVar4 = (byte *)pdb_141b7be90(&uStack_30,&UNK_14335a884,0x13,param_1);
      if (pbVar4 != (byte *)0x0) {
        return pbVar4;
      }
      if ((char)uStack_30 != '\0') goto LAB_14194ceb6;
      pbVar4 = (byte *)pdb_141b86df0(&uStack_30,&UNK_14335a897,8,param_1 + 3);
      goto LAB_14194cf0a;
    }
    plVar1 = (longlong *)*param_2;
    lVar3 = plVar1[2];
    if (*plVar1 == lVar3) {
      pdb_142d7f1b0(plVar1,lVar3,1,1,1);
      lVar3 = plVar1[2];
    }
    *(undefined1 *)(plVar1[1] + lVar3) = 0x7b;
    plVar1[2] = lVar3 + 1;
    lVar3 = pdb_14054e5c0(param_2,plVar5,&UNK_14335a74b,0x11);
    if (lVar3 != 0) {
LAB_14194cf53:
      uVar7 = 1;
      uStack_30 = lVar3;
      pdb_14007ee60();
      pbVar4 = pub_1406abab0(0x28,8);
      if (pbVar4 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
        pdb_142dc7e11(8,0x28);
      }
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
      *(undefined8 *)pbVar4 = uVar7;
      *(ulonglong *)(pbVar4 + 8) = uStack_30;
      return pbVar4;
    }
    plVar5 = (longlong *)*param_2;
    lVar3 = plVar5[2];
    if (*plVar5 == lVar3) {
      pdb_142d7f1b0(plVar5,lVar3,1,1,1);
      lVar3 = plVar5[2];
    }
    *(undefined1 *)(plVar5[1] + lVar3) = 0x3a;
    plVar5[2] = lVar3 + 1;
    plVar5 = (longlong *)*param_2;
    lVar3 = plVar5[2];
    if (*plVar5 == lVar3) {
      pdb_142d7f1b0(plVar5,lVar3,1,1,1);
      lVar3 = plVar5[2];
    }
    *(undefined1 *)(plVar5[1] + lVar3) = 0x7b;
    plVar5[2] = lVar3 + 1;
    uStack_30 = CONCAT62(uStack_30._2_6_,0x100);
    plStack_28 = param_2;
    pbVar4 = (byte *)pdb_141b7dc80(&uStack_30,&UNK_14335a7b4,5,param_1 + 1);
    if (pbVar4 != (byte *)0x0) {
      return pbVar4;
    }
    if ((char)uStack_30 != '\0') goto LAB_14194ceb6;
    pbVar4 = (byte *)pdb_141b82660(&uStack_30,&UNK_14335a83d,0xe,(longlong)param_1 + 0xc);
    if (pbVar4 != (byte *)0x0) {
      return pbVar4;
    }
    if ((char)uStack_30 != '\0') goto LAB_14194ceb6;
    pbVar4 = (byte *)pdb_141b82660(&uStack_30,&UNK_14335a84b,0xd,param_1 + 2);
    if (pbVar4 != (byte *)0x0) {
      return pbVar4;
    }
    if ((char)uStack_30 != '\0') goto LAB_14194ceb6;
    pbVar4 = (byte *)pdb_141b82660(&uStack_30,&UNK_14335a858,0xc,(longlong)param_1 + 0x14);
    if (pbVar4 != (byte *)0x0) {
      return pbVar4;
    }
    if ((char)uStack_30 != '\0') goto LAB_14194ceb6;
    param_1 = param_1 + 3;
    puVar6 = &UNK_14335a864;
    uVar7 = 0xb;
  }
  pbVar4 = (byte *)pdb_141b82660(&uStack_30,puVar6,uVar7,param_1);
LAB_14194cf0a:
  if (pbVar4 != (byte *)0x0) {
    return pbVar4;
  }
  if (((uStack_30 & 1) == 0) && (uStack_30._1_1_ != '\0')) {
    pdb_140172c20(*plStack_28,&UNK_14335a45f,1);
  }
  pdb_140172c20(*param_2,&UNK_14335a45f,1);
  return (byte *)0x0;
}

