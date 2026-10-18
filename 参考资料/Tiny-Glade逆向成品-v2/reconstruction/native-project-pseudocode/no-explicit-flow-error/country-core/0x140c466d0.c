// VA 0x140c466d0, PDB extent 172 bytes
// country_core::resources::stairs::structural_graph::StairsStructuralGraph::add_edge_by_collider
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/stairs/structural_graph.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::resources::stairs::structural_graph::StairsStructuralGraph::add_edge_by_collider
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/stairs/structural_graph.rs
   Extent: 172 */

void pdb_140c466d0(longlong param_1,uint *param_2,uint *param_3)

{
  bool bVar1;
  char cVar2;
  undefined1 *puVar3;
  undefined8 uStack_30;
  uint uStack_28;
  undefined8 uStack_24;
  uint uStack_1c;
  
  cVar2 = pdb_140a62890();
  if (cVar2 != '\0') {
    return;
  }
  if ((byte)param_2[2] == (byte)param_3[2]) {
    bVar1 = *param_2 <= *param_3;
    if (*param_2 == *param_3) {
      bVar1 = param_2[1] <= param_3[1];
    }
    if (!bVar1) {
LAB_140c46712:
      uStack_28 = param_3[2];
      uStack_30 = *(undefined8 *)param_3;
      uStack_1c = param_2[2];
      uStack_24 = *(undefined8 *)param_2;
      goto LAB_140c4674b;
    }
  }
  else if ((byte)param_3[2] < (byte)param_2[2]) goto LAB_140c46712;
  uStack_28 = param_2[2];
  uStack_30 = *(undefined8 *)param_2;
  uStack_1c = param_3[2];
  uStack_24 = *(undefined8 *)param_3;
LAB_140c4674b:
  puVar3 = (undefined1 *)pdb_140937090(param_1 + 0x48,&uStack_30);
  if (puVar3 != (undefined1 *)0x0) {
    *puVar3 = 0;
    return;
  }
                    /* WARNING: Subroutine does not return */
  pdb_142dc8150(&UNK_14306da58);
}

