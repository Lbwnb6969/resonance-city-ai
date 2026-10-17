// Matched PDB: parry3d::shape::shared_shape::SharedShape::cuboid
// VA 0x141b3b160, PDB extent 130 bytes
// Ghidra pseudocode; types and unresolved calls are not original source.

/* Matched PDB: parry3d::shape::shared_shape::SharedShape::cuboid
   Extent: 130 bytes. No whole-program auto-analysis. */

void pdb_141b3b160(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  code *pcVar1;
  undefined8 *puVar2;
  
  pdb_14007ee60();
  puVar2 = (undefined8 *)func_0x0001406abab0(0x20,8);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = 1;
    puVar2[1] = 1;
    *(undefined4 *)(puVar2 + 2) = param_1;
    *(undefined4 *)((longlong)puVar2 + 0x14) = param_2;
    *(undefined4 *)(puVar2 + 3) = param_3;
    return;
  }
  pdb_142dc7e11(8,0x20);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

