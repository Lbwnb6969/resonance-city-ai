// VA 0x141b30180, PDB extent 951 bytes
// country_core::resources::critters::sheep::_::impl$0::serialize<ref_mut$<serde_json::ser::Serializer<ref_mut$<alloc::vec::Vec<u8,alloc::alloc::Global> >,serde_json::ser::CompactFormatter> > >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/critters/sheep.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::resources::critters::sheep::_::impl$0::serialize<ref_mut$<serde_json::ser::Serializer<ref_mut$<alloc::vec::Vec<u8,alloc::alloc::Global>
   >,serde_json::ser::CompactFormatter> > >
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/critters/sheep.rs
   Extent: 951 */

longlong pdb_141b30180(char *param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  bool bVar4;
  undefined2 uStack_30;
  longlong *plStack_28;
  
  plStack_28 = param_2;
  if (*param_1 == '\x01') {
    plVar1 = (longlong *)*param_2;
    lVar3 = plVar1[2];
    if (*plVar1 == lVar3) {
      pdb_142d7f1b0(plVar1,lVar3,1,1,1);
      lVar3 = plVar1[2];
    }
    *(undefined1 *)(plVar1[1] + lVar3) = 0x7b;
    plVar1[2] = lVar3 + 1;
    lVar3 = pdb_14054e5c0(param_2,param_2 + 1,&UNK_14339355b,7);
    if (lVar3 == 0) {
      plVar1 = (longlong *)*param_2;
      lVar3 = plVar1[2];
      if (*plVar1 == lVar3) {
        pdb_142d7f1b0(plVar1,lVar3,1,1,1);
        lVar3 = plVar1[2];
      }
      *(undefined1 *)(plVar1[1] + lVar3) = 0x3a;
      plVar1[2] = lVar3 + 1;
      param_2 = (longlong *)*param_2;
      lVar3 = param_2[2];
      if (*param_2 == lVar3) {
        pdb_142d7f1b0(param_2,lVar3,1,1,1);
        lVar3 = param_2[2];
      }
      *(undefined1 *)(param_2[1] + lVar3) = 0x7b;
      param_2[2] = lVar3 + 1;
      uStack_30 = 0x100;
      lVar3 = pdb_141b82660(&uStack_30,&UNK_143393552,9,param_1 + 4);
      if (lVar3 != 0) {
        return lVar3;
      }
      if ((char)uStack_30 != '\x01') {
        lVar3 = pdb_141b82660(&uStack_30,&UNK_143393562,0x13,param_1 + 8);
        if (lVar3 != 0) {
          return lVar3;
        }
        if ((char)uStack_30 != '\x01') {
          lVar3 = pdb_141b85940(&uStack_30,&UNK_143393575,0x10,param_1 + 1);
          plVar1 = plStack_28;
          goto joined_r0x000141b30358;
        }
      }
                    /* WARNING: Subroutine does not return */
      pdb_142dc83b0(&UNK_1433932e0,0x28,&UNK_143393ad8);
    }
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
    lVar3 = pdb_14054e5c0(param_2,param_2 + 1,&UNK_14339354e,4);
    if (lVar3 == 0) {
      plVar1 = (longlong *)*param_2;
      lVar3 = plVar1[2];
      if (*plVar1 == lVar3) {
        pdb_142d7f1b0(plVar1,lVar3,1,1,1);
        lVar3 = plVar1[2];
      }
      *(undefined1 *)(plVar1[1] + lVar3) = 0x3a;
      plVar1[2] = lVar3 + 1;
      param_2 = (longlong *)*param_2;
      lVar3 = param_2[2];
      if (*param_2 == lVar3) {
        pdb_142d7f1b0(param_2,lVar3,1,1,1);
        lVar3 = param_2[2];
      }
      *(undefined1 *)(param_2[1] + lVar3) = 0x7b;
      param_2[2] = lVar3 + 1;
      uStack_30 = 0x100;
      lVar3 = pdb_141b82660(&uStack_30,&UNK_143393552,9,param_1 + 4);
      plVar1 = plStack_28;
joined_r0x000141b30358:
      if (lVar3 == 0) {
        plStack_28 = plVar1;
        if ((char)uStack_30 == '\x01') {
                    /* WARNING: Subroutine does not return */
          pdb_142dc83b0(&UNK_1433932e0,0x28,&UNK_143393af0);
        }
        uStack_30._1_1_ = (char)((ushort)uStack_30 >> 8);
        bVar4 = uStack_30._1_1_ != '\0';
        if (bVar4) {
          plVar2 = (longlong *)*plVar1;
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
      return lVar3;
    }
  }
  lVar3 = pdb_142db8fb0(lVar3);
  return lVar3;
}

