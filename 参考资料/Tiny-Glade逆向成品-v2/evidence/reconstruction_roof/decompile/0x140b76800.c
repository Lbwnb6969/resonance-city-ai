// Matched PDB: country_core::resources::roofs::roof_shape::FlatRoofStyle::resolved_appearance
// VA 0x140b76800, PDB extent 73 bytes
// Ghidra pseudocode; types and unresolved calls are not original source.

/* Matched PDB: country_core::resources::roofs::roof_shape::FlatRoofStyle::resolved_appearance
   Extent: 73 bytes. No whole-program auto-analysis. */

void pdb_140b76800(undefined4 *param_1,char *param_2,char *param_3,undefined4 param_4,
                  undefined4 param_5)

{
  undefined4 uVar1;
  char cVar2;
  
  uVar1 = 0;
  if (*param_2 != '\0') {
    cVar2 = '\0';
    if (*param_2 != '\x01') {
      cVar2 = param_2[1];
      param_4 = *(undefined4 *)(param_2 + 4);
      uVar1 = *(undefined4 *)(param_2 + 8);
    }
    *(char *)(param_1 + 1) = cVar2;
    *param_1 = param_4;
    param_1[2] = uVar1;
    return;
  }
  if (*param_3 != '\0') {
    param_4 = param_5;
  }
  *(char *)(param_1 + 1) = *param_3;
  *param_1 = param_4;
  param_1[2] = 0;
  return;
}

