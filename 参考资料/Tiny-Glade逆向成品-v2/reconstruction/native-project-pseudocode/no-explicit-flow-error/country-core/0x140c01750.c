// VA 0x140c01750, PDB extent 88 bytes
// country_core::resources::stairs::stairs_assembly_params::AlignKind::position_offset
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/stairs/stairs_assembly_params.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::resources::stairs::stairs_assembly_params::AlignKind::position_offset
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/stairs/stairs_assembly_params.rs
   Extent: 88 */

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

