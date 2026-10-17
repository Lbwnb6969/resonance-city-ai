// Matched PDB: country_core::resources::roofs::roof_shape::FlatRoofStyle::is_wooden
// VA 0x140b76850, PDB extent 24 bytes
// Ghidra pseudocode; types and unresolved calls are not original source.

/* Matched PDB: country_core::resources::roofs::roof_shape::FlatRoofStyle::is_wooden
   Extent: 24 bytes. No whole-program auto-analysis. */

char pdb_140b76850(char *param_1,char *param_2)

{
  if (*param_1 == '\0') {
    return *param_2;
  }
  if (*param_1 == '\x01') {
    return '\0';
  }
  return param_1[1];
}

