// VA 0x14198b760, PDB extent 527 bytes
// country_core::resources::roofs::roof_shape::_::impl$0::serialize<ref_mut$<serde_json::ser::Serializer<ref_mut$<alloc::vec::Vec<u8,alloc::alloc::Global> >,serde_json::ser::CompactFormatter> > >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/roofs/roof_shape.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::resources::roofs::roof_shape::_::impl$0::serialize<ref_mut$<serde_json::ser::Serializer<ref_mut$<alloc::vec::Vec<u8,alloc::alloc::Global>
   >,serde_json::ser::CompactFormatter> > >
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/roofs/roof_shape.rs
   Extent: 527 */

byte * pdb_14198b760(char *param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  byte *pbVar3;
  undefined *puVar4;
  undefined8 uVar5;
  longlong lStack_30;
  longlong *plStack_28;
  
  if (*param_1 == '\0') {
    puVar4 = &UNK_14335c5bd;
    uVar5 = 8;
  }
  else {
    if (*param_1 != '\x01') {
      plVar1 = (longlong *)*param_2;
      lVar2 = plVar1[2];
      if (*plVar1 == lVar2) {
        pdb_142d7f1b0(plVar1,lVar2,1,1,1);
        lVar2 = plVar1[2];
      }
      *(undefined1 *)(plVar1[1] + lVar2) = 0x7b;
      plVar1[2] = lVar2 + 1;
      lVar2 = pdb_14054e5c0(param_2,param_2 + 1,&UNK_14335c5d6,8);
      if (lVar2 == 0) {
        lVar2 = plVar1[2];
        if (*plVar1 == lVar2) {
          pdb_142d7f1b0(plVar1,lVar2,1,1,1);
          lVar2 = plVar1[2];
        }
        *(undefined1 *)(plVar1[1] + lVar2) = 0x3a;
        lVar2 = lVar2 + 1;
        plVar1[2] = lVar2;
        if (*plVar1 == lVar2) {
          pdb_142d7f1b0(plVar1,lVar2,1,1,1);
          lVar2 = plVar1[2];
        }
        *(undefined1 *)(plVar1[1] + lVar2) = 0x7b;
        plVar1[2] = lVar2 + 1;
        lStack_30 = CONCAT62(lStack_30._2_6_,0x100);
        plStack_28 = param_2;
        pbVar3 = (byte *)pdb_141b7dc80(&lStack_30,&UNK_14335c51d,8,param_1 + 4);
        if (pbVar3 != (byte *)0x0) {
          return pbVar3;
        }
        if ((char)lStack_30 != '\x01') {
          pbVar3 = (byte *)pdb_141b7a220(&lStack_30,&UNK_14335c5de,8,param_1 + 1);
          if (pbVar3 != (byte *)0x0) {
            return pbVar3;
          }
          if ((char)lStack_30 != '\x01') {
            pbVar3 = (byte *)pdb_141b82300(&lStack_30,&UNK_14335c5e6,10,param_1 + 8);
            if (pbVar3 == (byte *)0x0) {
              pdb_14198fd70(&lStack_30);
              return (byte *)0x0;
            }
            return pbVar3;
          }
        }
                    /* WARNING: Subroutine does not return */
        pdb_142dc83b0(&UNK_14335ccd7,0x28,&UNK_14335ce98);
      }
      goto LAB_14198b8ca;
    }
    puVar4 = &DAT_14335c5c5;
    uVar5 = 0x11;
  }
  lVar2 = pdb_14054e5c0(param_2,param_2 + 1,puVar4,uVar5);
  if (lVar2 == 0) {
    return (byte *)0x0;
  }
LAB_14198b8ca:
  uVar5 = 1;
  lStack_30 = lVar2;
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
    *(longlong **)(pbVar3 + 0x10) = plStack_28;
    pbVar3[0x18] = 0;
    pbVar3[0x19] = 0;
    pbVar3[0x1a] = 0;
    pbVar3[0x1b] = 0;
    pbVar3[0x1c] = 0;
    pbVar3[0x1d] = 0;
    pbVar3[0x1e] = 0;
    pbVar3[0x1f] = 0;
    *(undefined8 *)pbVar3 = uVar5;
    *(longlong *)(pbVar3 + 8) = lStack_30;
    return pbVar3;
  }
                    /* WARNING: Subroutine does not return */
  pdb_142dc7e11(8,0x28);
}

