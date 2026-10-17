// Matched PDB: system_roof::visual::assemble_roof_tiles::assemble_roof_tiles::closure$1
// VA 0x142817e20, PDB extent 963 bytes
// Ghidra pseudocode; types and unresolved calls are not original source.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB: system_roof::visual::assemble_roof_tiles::assemble_roof_tiles::closure$1
   Extent: 963 bytes. No whole-program auto-analysis. */

void pdb_142817e20(void)

{
  undefined8 *puVar1;
  code *pcVar2;
  undefined8 uVar3;
  char **ppcVar4;
  char cVar5;
  char ***pppcStack_a8;
  undefined8 uStack_a0;
  longlong lStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  char **ppcStack_40;
  char ***pppcStack_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  longlong lStack_28;
  undefined1 uStack_1a;
  char cStack_19;
  undefined8 uStack_18;
  
  uStack_18 = 0xfffffffffffffffe;
  cVar5 = pdb_141f49fd0();
  if (cVar5 == '\0') {
    return;
  }
  if (_DAT_143caf110 != 0) {
    pppcStack_38 = (char ***)CONCAT71(pppcStack_38._1_7_,1);
    pppcStack_a8 = (char ***)&pppcStack_38;
    pdb_142dc7060(&DAT_143caf110,0,&pppcStack_a8,&UNK_14359d1e0,&UNK_14359d158);
  }
  pdb_1400f0d40(&pppcStack_a8,_DAT_143cb31c0);
  if ((int)pppcStack_a8 == 1) {
    pppcStack_38 = uStack_a0;
    uStack_30 = CONCAT31(uStack_30._1_3_,(char)lStack_98);
    pdb_142dc8170(&UNK_14359d170,0x13,&pppcStack_38,&UNK_14359d290,&UNK_14359d158);
  }
  else {
    ppcStack_40 = (char **)uStack_a0;
    cStack_19 = (char)lStack_98;
    pdb_14007ee60();
    uStack_a0 = (char ***)func_0x0001406abab0(0xf,1);
    if (uStack_a0 != (char ***)0x0) {
      *(undefined8 *)((longlong)uStack_a0 + 7) = 0x2928202168746170;
      *uStack_a0 = (char **)0x705f656c75646f6d;
      pppcStack_a8 = (char ***)0xf;
      lStack_98 = 0xf;
      pdb_142d7f1b0(&pppcStack_a8,0xf,0x17,1,1);
      uVar3 = _UNK_14359d18b;
      *(undefined8 *)((longlong)uStack_a0 + lStack_98) = _DAT_14359d183;
      ((undefined8 *)((longlong)uStack_a0 + lStack_98))[1] = uVar3;
      *(undefined8 *)((longlong)uStack_a0 + lStack_98 + 0xf) = 0x6e726157203a3a20;
      lStack_28 = lStack_98 + 0x17;
      pppcStack_38 = pppcStack_a8;
      uStack_30 = (undefined4)uStack_a0;
      uStack_2c = uStack_a0._4_4_;
      if ((ulonglong)((longlong)pppcStack_a8 - lStack_28) < 0x1a) {
        pdb_142d7f1b0(&pppcStack_38,lStack_28,0x1a,1,1);
      }
      uVar3 = _UNK_14359d1ac;
      puVar1 = (undefined8 *)(CONCAT44(uStack_2c,uStack_30) + 10 + lStack_28);
      *puVar1 = CONCAT26(_UNK_14359d1aa,_DAT_14359d1a4);
      puVar1[1] = uVar3;
      uVar3 = CONCAT62(_DAT_14359d1a4,_UNK_14359d1a2);
      puVar1 = (undefined8 *)(CONCAT44(uStack_2c,uStack_30) + lStack_28);
      *puVar1 = _DAT_14359d19a;
      puVar1[1] = uVar3;
      lStack_98 = lStack_28 + 0x1a;
      pppcStack_a8 = pppcStack_38;
      uStack_a0 = (char ***)CONCAT44(uStack_2c,uStack_30);
      lStack_28 = lStack_98;
      cVar5 = pdb_141f10610(ppcStack_40 + 1,&pppcStack_a8);
      if ((cVar5 == '\0') && (1 < *_DAT_143ca8e90)) {
        pppcStack_a8 = (char ***)0x0;
        uStack_a0 = (char ***)&UNK_14359d1b4;
        lStack_98 = 0x28;
        uStack_90 = 0;
        puStack_88 = &UNK_14359d120;
        uStack_80 = 0x35;
        uStack_78 = 2;
        puStack_70 = &UNK_14359d1b4;
        uStack_68 = 0x28;
        uStack_60 = 0x2e00000001;
        puStack_58 = &DAT_14359d19a;
        uStack_50 = 0x35;
        pdb_140f332f0(&uStack_1a,&pppcStack_a8);
      }
      ppcVar4 = ppcStack_40;
      if (((cStack_19 == '\0') && ((*_DAT_143ca8f38 & 0x7fffffffffffffff) != 0)) &&
         (cVar5 = pdb_142dc79e0(), cVar5 == '\0')) {
        *(char *)((longlong)ppcVar4 + 1) = '\x01';
      }
      LOCK();
      cVar5 = *(char *)ppcVar4;
      *(char *)ppcVar4 = '\0';
      UNLOCK();
      if (cVar5 != '\x02') {
        return;
      }
      pdb_142dc6ca0(ppcVar4);
      return;
    }
    pdb_142dc7e2a(1,0xf);
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)invalidInstructionException();
  (*pcVar2)();
}

