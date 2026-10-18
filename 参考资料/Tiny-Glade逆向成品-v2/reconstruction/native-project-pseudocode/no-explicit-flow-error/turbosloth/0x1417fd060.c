// VA 0x1417fd060, PDB extent 622 bytes
// turbosloth::store::_::impl$0::serialize<ref_mut$<bincode::ser::Serializer<ref_mut$<alloc::vec::Vec<u8,alloc::alloc::Global> >,bincode::config::WithOtherLimit<bincode::config::WithOtherTrailing<bincode::config::WithOtherIntEncoding<bincode::config::DefaultOptions,bincode::config::int::FixintEncoding>,bincode::config::trailing::AllowTrailing>,bincode::config::limit::Infinite> > > >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/turbosloth/src/store.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   turbosloth::store::_::impl$0::serialize<ref_mut$<bincode::ser::Serializer<ref_mut$<alloc::vec::Vec<u8,alloc::alloc::Global>
   >,bincode::config::WithOtherLimit<bincode::config::WithOtherTrailing<bincode::config::WithOtherIntEncoding<bincode::config::DefaultOptions,bincode::config::int::FixintEncoding>,bincode::config::trailing::AllowTrailing>,bincode::config::limit::Infinite>
   > > >
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/turbosloth/src/store.rs
   Extent: 622 */

longlong pdb_1417fd060(longlong param_1,longlong *param_2)

{
  undefined1 uVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 unaff_RBX;
  undefined8 unaff_RSI;
  undefined8 unaff_RDI;
  undefined8 unaff_R12;
  longlong lVar9;
  undefined8 unaff_R14;
  longlong lVar10;
  undefined8 unaff_R15;
  
  uVar4 = *(undefined8 *)(param_1 + 0x28);
  uVar5 = *(ulonglong *)(param_1 + 0x30);
  plVar6 = (longlong *)*param_2;
  lVar10 = plVar6[2];
  if ((ulonglong)(*plVar6 - lVar10) < 8) {
    pdb_142d7f1b0(plVar6,lVar10,8,1,1);
    lVar10 = plVar6[2];
  }
  *(ulonglong *)(plVar6[1] + lVar10) = uVar5;
  lVar10 = lVar10 + 8;
  plVar6[2] = lVar10;
  lVar7 = *plVar6;
  if ((ulonglong)(lVar7 - lVar10) < uVar5) {
    pdb_142d7f1b0(plVar6,lVar10,uVar5,1,1);
    lVar10 = plVar6[2];
LAB_1417fd0ba:
    pub_142e32760(plVar6[1] + lVar10,uVar4,uVar5);
    lVar7 = *plVar6;
  }
  else if (uVar5 != 0) goto LAB_1417fd0ba;
  lVar10 = lVar10 + uVar5;
  plVar6[2] = lVar10;
  uVar4 = *(undefined8 *)(param_1 + 0x98);
  if ((ulonglong)(lVar7 - lVar10) < 8) {
    pdb_142d7f1b0(plVar6,lVar10,8,1,1);
    lVar10 = plVar6[2];
  }
  *(undefined8 *)(plVar6[1] + lVar10) = uVar4;
  lVar10 = lVar10 + 8;
  plVar6[2] = lVar10;
  uVar1 = *(undefined1 *)(param_1 + 0xa0);
  if (*plVar6 == lVar10) {
    pdb_142d7f1b0(plVar6,lVar10,1,1,1);
    lVar10 = plVar6[2];
  }
  *(undefined1 *)(plVar6[1] + lVar10) = uVar1;
  lVar10 = lVar10 + 1;
  plVar6[2] = lVar10;
  uVar4 = *(undefined8 *)(param_1 + 0x40);
  uVar5 = *(ulonglong *)(param_1 + 0x48);
  if ((ulonglong)(*plVar6 - lVar10) < 8) {
    pdb_142d7f1b0(plVar6,lVar10,8,1,1);
    lVar10 = plVar6[2];
  }
  *(ulonglong *)(plVar6[1] + lVar10) = uVar5;
  lVar10 = lVar10 + 8;
  plVar6[2] = lVar10;
  if ((ulonglong)(*plVar6 - lVar10) < uVar5) {
    pdb_142d7f1b0(plVar6,lVar10,uVar5,1,1);
    lVar10 = plVar6[2];
  }
  else if (uVar5 == 0) goto LAB_1417fd161;
  pub_142e32760(plVar6[1] + lVar10,uVar4,uVar5);
LAB_1417fd161:
  plVar6[2] = lVar10 + uVar5;
  lVar10 = pdb_141807620(param_2,param_1);
  if (((lVar10 == 0) && (lVar10 = pdb_1417c38d0(param_2,param_1 + 0x50), lVar10 == 0)) &&
     (lVar10 = pdb_1417c3820(param_2,param_1 + 0x68), lVar10 == 0)) {
    lVar10 = *(longlong *)(param_1 + 0x88);
    lVar7 = *(longlong *)(param_1 + 0x90);
    param_2 = (longlong *)*param_2;
    lVar8 = param_2[2];
    if ((ulonglong)(*param_2 - lVar8) < 8) {
      pdb_142d7f1b0(param_2,lVar8,8,1,1,unaff_RBX,unaff_RDI,unaff_RSI,unaff_R12,unaff_R14,unaff_R15)
      ;
      lVar8 = param_2[2];
    }
    *(longlong *)(param_2[1] + lVar8) = lVar7;
    lVar8 = lVar8 + 8;
    param_2[2] = lVar8;
    if (lVar7 != 0) {
      lVar9 = 0;
      do {
        uVar4 = *(undefined8 *)(lVar10 + lVar9);
        uVar2 = *(undefined8 *)(lVar10 + 8 + lVar9);
        if ((ulonglong)(*param_2 - lVar8) < 0x10) {
          pdb_142d7f1b0(param_2,lVar8,0x10,1,1,unaff_RBX,unaff_RDI,unaff_RSI,unaff_R12,unaff_R14,
                        unaff_R15);
          lVar8 = param_2[2];
        }
        lVar3 = param_2[1];
        *(undefined8 *)(lVar3 + 8 + lVar8) = uVar2;
        *(undefined8 *)(lVar3 + lVar8) = uVar4;
        lVar8 = lVar8 + 0x10;
        param_2[2] = lVar8;
        lVar9 = lVar9 + 0x10;
      } while (lVar7 << 4 != lVar9);
    }
    return 0;
  }
  return lVar10;
}

