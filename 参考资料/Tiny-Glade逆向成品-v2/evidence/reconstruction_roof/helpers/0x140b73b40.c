// Matched PDB: country_core::resources::roofs::roof_visual_shape::RoofBoundsDims::as_circle
// VA 0x140b73b40, PDB extent 49 bytes
// Ghidra pseudocode; types and unresolved calls are not original source.

/* Matched PDB: country_core::resources::roofs::roof_visual_shape::RoofBoundsDims::as_circle
   Extent: 49 bytes. No whole-program auto-analysis. */

ulonglong pdb_140b73b40(int *param_1)

{
  code *pcVar1;
  ulonglong uVar2;
  
  if (*param_1 != 1) {
    return (ulonglong)(uint)param_1[1];
  }
  pdb_142dc83b0(&UNK_14305b6be,0x28,&UNK_14305b9a0);
  pcVar1 = (code *)swi(3);
  uVar2 = (*pcVar1)();
  return uVar2;
}

