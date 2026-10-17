// Matched PDB: rhapsody::raw::device::GraphicsDevice::init_texture_data
// VA 0x140e66100, PDB extent 982 bytes
// Ghidra pseudocode; types and unresolved calls are not original source.

/* Matched PDB: rhapsody::raw::device::GraphicsDevice::init_texture_data
   Extent: 982 bytes. No whole-program auto-analysis. */

void pdb_140e66100(undefined8 param_1,undefined8 param_2,longlong *param_3,undefined8 param_4,
                  longlong param_5)

{
  code *pcVar1;
  undefined1 uStack_41;
  undefined8 uStack_40;
  
  uStack_40 = 0xfffffffffffffffe;
  if ((*(byte *)(param_5 + 0x38) & 4) != 0) {
                    /* WARNING: Could not recover jumptable at 0x000140e66169. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&UNK_14321b850 + *(int *)(&UNK_14321b850 + *param_3 * 4)))
              (&UNK_14321b850 + *(int *)(&UNK_14321b850 + *param_3 * 4));
    return;
  }
  pdb_142dc83b0(&UNK_14321acc8,0x4a,&UNK_14321ad18);
  pdb_142dc83b0(&UNK_14321a500,0x28,&UNK_14321ac48);
  pdb_142dc8170(&UNK_1432182f8,0x2b,&uStack_41,&UNK_1432182d8,&UNK_14321acb0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

