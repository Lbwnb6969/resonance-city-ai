// Matched PDB: asset::texture::blob::impl$29::resolve
// VA 0x1417f04c0, PDB extent 85 bytes
// Ghidra pseudocode; types and unresolved calls are not original source.

/* Matched PDB: asset::texture::blob::impl$29::resolve
   Extent: 85 bytes. No whole-program auto-analysis. */

void pdb_1417f04c0(longlong param_1,ulonglong param_2,undefined8 *param_3,longlong param_4)

{
  code *pcVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined1 uVar5;
  
  *param_3 = *(undefined8 *)(param_1 + 0x18);
  *(undefined4 *)(param_3 + 1) = *(undefined4 *)(param_1 + 0x20);
  *(undefined4 *)((longlong)param_3 + 0xc) = *(undefined4 *)(param_1 + 0x24);
  *(short *)(param_3 + 2) = (short)(param_2 >> 0x20);
  uVar4 = *(undefined8 *)(param_1 + 0x10);
  uVar3 = (undefined4)uVar4;
  lVar2 = (param_2 & 0xffffffff) - (param_4 + 0x14U);
  uVar5 = lVar2 < 0;
  if (param_4 + 0x14U <= (param_2 & 0xffffffff)) goto LAB_1417f04f8;
  if (!(bool)uVar5) {
    do {
      lVar2 = pdb_142e03660();
LAB_1417f04f8:
      uVar3 = (undefined4)uVar4;
    } while ((bool)uVar5);
  }
  if ((int)lVar2 == lVar2) {
    *(int *)((longlong)param_3 + 0x14) = (int)lVar2;
    *(undefined4 *)(param_3 + 3) = uVar3;
    return;
  }
  pdb_142e03620();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

