// VA 0x140726e80, PDB extent 256 bytes
// toolbar::mei::widgets::FrameView::draw
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/mei/widgets.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: toolbar::mei::widgets::FrameView::draw
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/mei/widgets.rs
   Extent: 256 */

undefined8 * pdb_140726e80(undefined8 *param_1,undefined8 *param_2,longlong *param_3)

{
  byte *arg0;
  ulonglong arg1;
  undefined8 uVar1;
  longlong *plVar2;
  byte *pbVar3;
  longlong lVar4;
  
  plVar2 = (longlong *)pdb_14116e700(param_2);
  arg0 = (byte *)plVar2[1];
  lVar4 = plVar2[2];
  if (lVar4 != 0) {
    pbVar3 = arg0 + 8;
    do {
      arg1 = *(ulonglong *)(pbVar3 + -8);
      if ((-1 < (longlong)arg1) && (arg1 != 0)) {
        pub_1406abac0(*(byte **)pbVar3,arg1,1);
      }
      pbVar3 = pbVar3 + 0x20;
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
  }
  if (*plVar2 != 0) {
    pub_1406abac0(arg0,*plVar2 << 5,8);
  }
  plVar2[2] = param_3[2];
  lVar4 = param_3[1];
  *plVar2 = *param_3;
  plVar2[1] = lVar4;
  param_1[2] = param_2[2];
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  return param_1;
}

