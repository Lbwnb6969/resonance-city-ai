// Matched PDB: country_core::resources::stairs::stairs_assembly_params::AlignKind::outgoing_dir
// VA 0x140c016f0, PDB extent 91 bytes
// Ghidra pseudocode; types and unresolved calls are not original source.

/* Matched PDB: country_core::resources::stairs::stairs_assembly_params::AlignKind::outgoing_dir
   Extent: 91 bytes. No whole-program auto-analysis. */

ulonglong pdb_140c016f0(char *param_1)

{
  code *pcVar1;
  ulonglong uVar2;
  
  if (*param_1 == '\0') {
    return (ulonglong)*(uint *)(param_1 + 4);
  }
  if (*param_1 == '\x01') {
    return (ulonglong)*(uint *)(param_1 + 0xc);
  }
  pdb_142dc83d0(&UNK_143067fe2,0x57,&UNK_143068050);
  pcVar1 = (code *)swi(3);
  uVar2 = (*pcVar1)();
  return uVar2;
}

