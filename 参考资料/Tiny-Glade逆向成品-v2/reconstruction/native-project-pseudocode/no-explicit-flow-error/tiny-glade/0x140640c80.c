// VA 0x140640c80, PDB extent 353 bytes
// tiny_glade::crash_pickup::crash_payload::_::impl$0::serialize<ref_mut$<serde_json::ser::Serializer<ref_mut$<alloc::vec::Vec<u8,alloc::alloc::Global> >,serde_json::ser::CompactFormatter> > >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/crash_pickup/crash_payload.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   tiny_glade::crash_pickup::crash_payload::_::impl$0::serialize<ref_mut$<serde_json::ser::Serializer<ref_mut$<alloc::vec::Vec<u8,alloc::alloc::Global>
   >,serde_json::ser::CompactFormatter> > >
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/crash_pickup/crash_payload.rs
   Extent: 353 */

byte * pdb_140640c80(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  byte *pbVar4;
  longlong lVar5;
  undefined8 unaff_RBX;
  undefined8 uVar6;
  
  if (SBORROW8(0,*param_1)) {
    lVar3 = pdb_14054e5c0(param_2,param_2 + 1,&UNK_142f8b7b0,0x15);
    if (lVar3 == 0) {
      return (byte *)0x0;
    }
  }
  else {
    lVar5 = param_1[1];
    lVar1 = param_1[2];
    plVar2 = (longlong *)*param_2;
    lVar3 = plVar2[2];
    if (*plVar2 == lVar3) {
      pdb_142d7f1b0(plVar2,lVar3,1,1,1);
      lVar3 = plVar2[2];
    }
    *(undefined1 *)(plVar2[1] + lVar3) = 0x7b;
    plVar2[2] = lVar3 + 1;
    lVar3 = pdb_14054e5c0(param_2,param_2 + 1,&UNK_142f8b7c5,5);
    if (lVar3 == 0) {
      lVar3 = plVar2[2];
      if (*plVar2 == lVar3) {
        pdb_142d7f1b0(plVar2,lVar3,1,1,1);
        lVar3 = plVar2[2];
      }
      *(undefined1 *)(plVar2[1] + lVar3) = 0x3a;
      plVar2[2] = lVar3 + 1;
      lVar3 = pdb_14054e5c0(param_2,param_2 + 1,lVar5,lVar1);
      if (lVar3 == 0) {
        lVar5 = plVar2[2];
        if (*plVar2 == lVar5) {
          pdb_142d7f1b0(plVar2,lVar5,1,1,1);
          lVar5 = plVar2[2];
        }
        *(undefined1 *)(plVar2[1] + lVar5) = 0x7d;
        plVar2[2] = lVar5 + 1;
        return (byte *)0x0;
      }
    }
  }
  uVar6 = 1;
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
    *(undefined8 *)(pbVar4 + 0x10) = unaff_RBX;
    pbVar4[0x18] = 0;
    pbVar4[0x19] = 0;
    pbVar4[0x1a] = 0;
    pbVar4[0x1b] = 0;
    pbVar4[0x1c] = 0;
    pbVar4[0x1d] = 0;
    pbVar4[0x1e] = 0;
    pbVar4[0x1f] = 0;
    *(undefined8 *)pbVar4 = uVar6;
    *(longlong *)(pbVar4 + 8) = lVar3;
    return pbVar4;
  }
                    /* WARNING: Subroutine does not return */
  pdb_142dc7e11(8,0x28);
}

