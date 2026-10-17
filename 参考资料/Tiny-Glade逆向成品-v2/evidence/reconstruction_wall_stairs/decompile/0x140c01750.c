// Matched PDB: country_core::resources::stairs::stairs_assembly_params::AlignKind::position_offset
// VA 0x140c01750, PDB extent 88 bytes
// Ghidra pseudocode; types and unresolved calls are not original source.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB: country_core::resources::stairs::stairs_assembly_params::AlignKind::position_offset
   Extent: 88 bytes. No whole-program auto-analysis. */

undefined8 pdb_140c01750(char *param_1,float param_2)

{
  undefined8 uVar1;
  
  if (*param_1 == '\0') {
    if ((param_1[1] != '\0') || (param_1[2] != '\0')) {
      return CONCAT44(param_2 * (float)((ulonglong)*(undefined8 *)(param_1 + 4) >> 0x20),
                      param_2 * (float)*(undefined8 *)(param_1 + 4));
    }
  }
  else if (*param_1 == '\x01') {
    uVar1 = *(undefined8 *)(param_1 + 4);
    if (param_1[1] != '\0') {
      uVar1 = CONCAT44((float)((ulonglong)uVar1 >> 0x20) +
                       (float)((ulonglong)*(undefined8 *)(param_1 + 0xc) >> 0x20),
                       (float)uVar1 + (float)*(undefined8 *)(param_1 + 0xc));
    }
    return CONCAT44(param_2 * _DAT_142e36f50 * (float)((ulonglong)uVar1 >> 0x20),
                    param_2 * _DAT_142e36f50 * (float)uVar1);
  }
  return 0;
}

