// Matched PDB: utils::random_splits
// VA 0x140de8290, PDB extent 296 bytes
// Ghidra pseudocode; types and unresolved calls are not original source.

/* Matched PDB: utils::random_splits
   Extent: 296 bytes. No whole-program auto-analysis. */

ulonglong *
pdb_140de8290(ulonglong *param_1,ulonglong param_2,undefined4 param_3,undefined8 param_4,
             undefined8 param_5)

{
  ulonglong uVar1;
  code *pcVar2;
  ulonglong *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  ulonglong uStack_68;
  ulonglong uStack_60;
  ulonglong uStack_58;
  undefined8 uStack_50;
  
  uStack_50 = 0xfffffffffffffffe;
  if (1 < param_2) {
    uVar1 = param_2 * 4;
    uVar4 = param_4;
    uVar6 = param_3;
    if (uVar1 < 0x7ffffffffffffffd && param_2 >> 0x3e == 0) goto LAB_140de82f1;
    uVar5 = 0;
    do {
      pdb_142dc7e2a(uVar5,uVar1);
      uVar4 = param_4;
      uVar6 = param_3;
LAB_140de82f1:
      param_4 = uVar4;
      param_3 = uVar6;
      pdb_14007ee60();
      uVar5 = 4;
      uStack_60 = func_0x0001406abab0(uVar1,4);
    } while (uStack_60 == 0);
    uStack_58 = 0;
    uStack_68 = param_2;
    pdb_140de8bb0(param_2,uVar6,uVar4,&uStack_68);
    param_1[2] = uStack_58;
    *param_1 = uStack_68;
    param_1[1] = uStack_60;
    return param_1;
  }
  pdb_142dc83b0(&UNK_1431feca4,0x1d,param_5);
  pcVar2 = (code *)swi(3);
  puVar3 = (ulonglong *)(*pcVar2)();
  return puVar3;
}

