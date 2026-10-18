// VA 0x140b407b0, PDB extent 217 bytes
// country_core::resources::glade_border::GladeBorder::is_curve2_inside
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/glade_border.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::resources::glade_border::GladeBorder::is_curve2_inside
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/glade_border.rs
   Extent: 217 */

ulonglong pdb_140b407b0(int *param_1,longlong param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  char cVar3;
  longlong lVar4;
  ulonglong unaff_RDI;
  longlong lVar5;
  bool bVar6;
  
  if (*(longlong *)(param_2 + 0x10) == 0) {
    unaff_RDI = CONCAT71((int7)(unaff_RDI >> 8),1);
  }
  else {
    puVar2 = *(undefined4 **)(param_2 + 8);
    lVar4 = *(longlong *)(param_2 + 0x10) * 8;
    piVar1 = param_1 + 1;
    if (*param_1 == 1) {
      cVar3 = pdb_140df1700(piVar1);
      if (cVar3 != '\0') {
        lVar5 = 0;
        do {
          bVar6 = lVar4 + -8 == lVar5;
          unaff_RDI = CONCAT71((int7)(unaff_RDI >> 8),bVar6);
          if (bVar6) break;
          cVar3 = pdb_140df1700(piVar1,*(undefined4 *)((longlong)puVar2 + lVar5 + 8),
                                *(undefined4 *)((longlong)puVar2 + lVar5 + 0xc));
          lVar5 = lVar5 + 8;
        } while (cVar3 != '\0');
        goto LAB_140b4087b;
      }
    }
    else {
      cVar3 = pdb_140def450(piVar1,*puVar2,puVar2[1]);
      if (cVar3 != '\0') {
        lVar5 = 0;
        do {
          bVar6 = lVar4 + -8 == lVar5;
          unaff_RDI = CONCAT71((int7)(unaff_RDI >> 8),bVar6);
          if (bVar6) break;
          cVar3 = pdb_140def450(piVar1,*(undefined4 *)((longlong)puVar2 + lVar5 + 8),
                                *(undefined4 *)((longlong)puVar2 + lVar5 + 0xc));
          lVar5 = lVar5 + 8;
        } while (cVar3 != '\0');
        goto LAB_140b4087b;
      }
    }
    unaff_RDI = 0;
  }
LAB_140b4087b:
  return unaff_RDI & 0xffffffff;
}

