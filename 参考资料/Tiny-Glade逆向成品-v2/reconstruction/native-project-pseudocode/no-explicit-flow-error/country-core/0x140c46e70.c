// VA 0x140c46e70, PDB extent 224 bytes
// country_core::resources::stairs::structural_graph::StairsStructuralGraph::upsert_support_source_collider
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/stairs/structural_graph.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::resources::stairs::structural_graph::StairsStructuralGraph::upsert_support_source_collider
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/stairs/structural_graph.rs
   Extent: 224 */

void pdb_140c46e70(longlong param_1,longlong *param_2)

{
  ulonglong uVar1;
  undefined8 uVar2;
  longlong lStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  longlong lStack_40;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined1 auStack_30 [8];
  char cStack_28;
  longlong lStack_20;
  undefined4 uStack_18;
  
  uStack_50 = CONCAT44(uStack_50._4_4_,(int)param_2[1]);
  lStack_58 = *param_2;
  uStack_18 = (undefined4)param_2[1];
  lStack_20 = *param_2;
  uVar2 = pdb_14148b1b0(param_1 + 0x38,&lStack_20);
  pdb_1417c9910(&lStack_40,param_1,uVar2,&lStack_58);
  uVar1 = CONCAT44(uStack_34,uStack_38);
  if (cStack_28 == '\x11') {
    if (*(ulonglong *)(lStack_40 + 0x10) <= uVar1) {
                    /* WARNING: Subroutine does not return */
      pdb_142dc81f2(uVar1,*(ulonglong *)(lStack_40 + 0x10),&UNK_143337a68);
    }
  }
  else {
    lStack_58 = 0;
    uStack_50 = 4;
    uStack_48 = 0;
    pdb_1417c7b10(lStack_40,uVar1,auStack_30,&lStack_58);
  }
  uStack_38 = (undefined4)param_2[1];
  lStack_40 = *param_2;
  pdb_1414b4250(param_1 + 0xf0,&lStack_40,0);
  pdb_1414b4b30(param_1 + 0x150,param_2);
  return;
}

