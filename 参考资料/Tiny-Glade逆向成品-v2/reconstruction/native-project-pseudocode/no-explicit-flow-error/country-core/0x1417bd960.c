// VA 0x1417bd960, PDB extent 610 bytes
// country_core::systems::wall::valid_enclosure::_::impl$0::serialize<ref_mut$<serde_json::ser::Serializer<ref_mut$<alloc::vec::Vec<u8,alloc::alloc::Global> >,serde_json::ser::CompactFormatter> > >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/wall/valid_enclosure/mod.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::systems::wall::valid_enclosure::_::impl$0::serialize<ref_mut$<serde_json::ser::Serializer<ref_mut$<alloc::vec::Vec<u8,alloc::alloc::Global>
   >,serde_json::ser::CompactFormatter> > >
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/wall/valid_enclosure/mod.rs
   Extent: 610 */

byte * pdb_1417bd960(uint *param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  byte *pbVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uStack_30;
  longlong *plStack_28;
  
  iVar3 = 2;
  if (1 < *param_1) {
    iVar3 = *param_1 - 2;
  }
  if (iVar3 == 0) {
    puVar6 = &UNK_14333687a;
    uVar7 = 2;
  }
  else {
    if (iVar3 != 1) {
      plVar1 = (longlong *)*param_2;
      lVar4 = plVar1[2];
      if (*plVar1 == lVar4) {
        pdb_142d7f1b0(plVar1,lVar4,1,1,1);
        lVar4 = plVar1[2];
      }
      *(undefined1 *)(plVar1[1] + lVar4) = 0x7b;
      plVar1[2] = lVar4 + 1;
      lVar4 = pdb_14054e5c0(param_2,param_2 + 1,&UNK_14333687f,0xc);
      if (lVar4 != 0) {
        pbVar5 = (byte *)pdb_142db8fb0(lVar4);
        return pbVar5;
      }
      lVar4 = plVar1[2];
      if (*plVar1 == lVar4) {
        pdb_142d7f1b0(plVar1,lVar4,1,1,1);
        lVar4 = plVar1[2];
      }
      *(undefined1 *)(plVar1[1] + lVar4) = 0x3a;
      lVar4 = lVar4 + 1;
      plVar1[2] = lVar4;
      if (*plVar1 == lVar4) {
        pdb_142d7f1b0(plVar1,lVar4,1,1,1);
        lVar4 = plVar1[2];
      }
      *(undefined1 *)(plVar1[1] + lVar4) = 0x7b;
      plVar1[2] = lVar4 + 1;
      uStack_30 = CONCAT62(uStack_30._2_6_,0x100);
      plStack_28 = param_2;
      pbVar5 = (byte *)pdb_141b835f0(&uStack_30,&UNK_14333688b,6,param_1);
      plVar1 = plStack_28;
      if (pbVar5 == (byte *)0x0) {
        if ((char)uStack_30 != '\x01') {
          if (uStack_30._1_1_ != '\0') {
            plVar2 = (longlong *)*plStack_28;
            lVar4 = plVar2[2];
            if (*plVar2 == lVar4) {
              pdb_142d7f1b0(plVar2,lVar4,1,1,1);
              lVar4 = plVar2[2];
            }
            *(undefined1 *)(plVar2[1] + lVar4) = 0x7d;
            plVar2[2] = lVar4 + 1;
          }
          plVar1 = (longlong *)*plVar1;
          lVar4 = plVar1[2];
          if (*plVar1 == lVar4) {
            pdb_142d7f1b0(plVar1,lVar4,1,1,1);
            lVar4 = plVar1[2];
          }
          *(undefined1 *)(plVar1[1] + lVar4) = 0x7d;
          plVar1[2] = lVar4 + 1;
          return (byte *)0x0;
        }
                    /* WARNING: Subroutine does not return */
        pdb_142dc83b0(&UNK_143336f18,0x28,&UNK_143337548);
      }
      return pbVar5;
    }
    puVar6 = &UNK_14333687c;
    uVar7 = 3;
  }
  uStack_30 = pdb_14054e5c0(param_2,param_2 + 1,puVar6,uVar7);
  if (uStack_30 == 0) {
    return (byte *)0x0;
  }
  uVar7 = 1;
  pdb_14007ee60();
  pbVar5 = pub_1406abab0(0x28,8);
  if (pbVar5 != (byte *)0x0) {
    pbVar5[0x20] = 0;
    pbVar5[0x21] = 0;
    pbVar5[0x22] = 0;
    pbVar5[0x23] = 0;
    pbVar5[0x24] = 0;
    pbVar5[0x25] = 0;
    pbVar5[0x26] = 0;
    pbVar5[0x27] = 0;
    *(longlong **)(pbVar5 + 0x10) = plStack_28;
    pbVar5[0x18] = 0;
    pbVar5[0x19] = 0;
    pbVar5[0x1a] = 0;
    pbVar5[0x1b] = 0;
    pbVar5[0x1c] = 0;
    pbVar5[0x1d] = 0;
    pbVar5[0x1e] = 0;
    pbVar5[0x1f] = 0;
    *(undefined8 *)pbVar5 = uVar7;
    *(longlong *)(pbVar5 + 8) = uStack_30;
    return pbVar5;
  }
                    /* WARNING: Subroutine does not return */
  pdb_142dc7e11(8,0x28);
}

