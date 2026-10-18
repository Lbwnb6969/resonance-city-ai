// VA 0x142816720, PDB extent 963 bytes
// system_roof::visual::assemble_roof_tiles::assemble_roof_tiles::closure$1
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/roof/src/visual/assemble_roof_tiles.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   system_roof::visual::assemble_roof_tiles::assemble_roof_tiles::closure$1
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/roof/src/visual/assemble_roof_tiles.rs
   Extent: 963 */

void pdb_142816720(void)

{
  byte *pbVar1;
  undefined8 *puVar2;
  code *pcVar3;
  undefined8 uVar4;
  char *pcVar5;
  char cVar6;
  char **ppcStack_a8;
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
  char *pcStack_40;
  char *pcStack_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  longlong lStack_28;
  undefined1 uStack_1a;
  char cStack_19;
  undefined8 uStack_18;
  
  uStack_18 = 0xfffffffffffffffe;
  cVar6 = pdb_141f49fd0();
  if (cVar6 != '\0') {
    if (_DAT_143caf110 != 0) {
      pcStack_38 = (char *)CONCAT71(pcStack_38._1_7_,1);
      ppcStack_a8 = &pcStack_38;
      pdb_142dc7060(&DAT_143caf110,0,&ppcStack_a8,&UNK_14359cf28,&UNK_14359cea0);
    }
    pdb_1400f0d40(&ppcStack_a8,_DAT_143cb31c0);
    if ((int)ppcStack_a8 == 1) {
      pcStack_38 = (char *)uStack_a0;
      uStack_30 = CONCAT31(uStack_30._1_3_,(char)lStack_98);
                    /* WARNING: Subroutine does not return */
      pdb_142dc8170(&UNK_14359ceb8,0x13,&pcStack_38,&UNK_14359cfd8,&UNK_14359cea0);
    }
    pcStack_40 = (char *)uStack_a0;
    cStack_19 = (char)lStack_98;
    pdb_14007ee60();
    uStack_a0 = pub_1406abab0(0xf,1);
    if (uStack_a0 == (byte *)0x0) {
      pdb_142dc7e2a(1,0xf);
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    uStack_a0[7] = 0x70;
    uStack_a0[8] = 0x61;
    uStack_a0[9] = 0x74;
    uStack_a0[10] = 0x68;
    uStack_a0[0xb] = 0x21;
    uStack_a0[0xc] = 0x20;
    uStack_a0[0xd] = 0x28;
    uStack_a0[0xe] = 0x29;
    uStack_a0[0] = 0x6d;
    uStack_a0[1] = 0x6f;
    uStack_a0[2] = 100;
    uStack_a0[3] = 0x75;
    uStack_a0[4] = 0x6c;
    uStack_a0[5] = 0x65;
    uStack_a0[6] = 0x5f;
    uStack_a0[7] = 0x70;
    ppcStack_a8 = (char **)0xf;
    lStack_98 = 0xf;
    pdb_142d7f1b0(&ppcStack_a8,0xf,0x17,1,1);
    uVar4 = _UNK_14359ced3;
    *(undefined8 *)(uStack_a0 + lStack_98) = _DAT_14359cecb;
    *(undefined8 *)(uStack_a0 + lStack_98 + 8) = uVar4;
    pbVar1 = uStack_a0 + lStack_98 + 0xf;
    pbVar1[0] = 0x20;
    pbVar1[1] = 0x3a;
    pbVar1[2] = 0x3a;
    pbVar1[3] = 0x20;
    pbVar1[4] = 0x57;
    pbVar1[5] = 0x61;
    pbVar1[6] = 0x72;
    pbVar1[7] = 0x6e;
    lStack_28 = lStack_98 + 0x17;
    pcStack_38 = (char *)ppcStack_a8;
    uStack_30 = (undefined4)uStack_a0;
    uStack_2c = uStack_a0._4_4_;
    if ((ulonglong)((longlong)ppcStack_a8 - lStack_28) < 0x1a) {
      pdb_142d7f1b0(&pcStack_38,lStack_28,0x1a,1,1);
    }
    uVar4 = _UNK_14359cef4;
    puVar2 = (undefined8 *)(CONCAT44(uStack_2c,uStack_30) + 10 + lStack_28);
    *puVar2 = CONCAT26(_UNK_14359cef2,_DAT_14359ceec);
    puVar2[1] = uVar4;
    uVar4 = CONCAT62(_DAT_14359ceec,_UNK_14359ceea);
    puVar2 = (undefined8 *)(CONCAT44(uStack_2c,uStack_30) + lStack_28);
    *puVar2 = _DAT_14359cee2;
    puVar2[1] = uVar4;
    lStack_98 = lStack_28 + 0x1a;
    ppcStack_a8 = (char **)pcStack_38;
    uStack_a0 = (byte *)CONCAT44(uStack_2c,uStack_30);
    lStack_28 = lStack_98;
    cVar6 = pdb_141f10610(pcStack_40 + 8,&ppcStack_a8);
    if ((cVar6 == '\0') && (1 < *_DAT_143ca8e90)) {
      ppcStack_a8 = (char **)0x0;
      uStack_a0 = &UNK_14359cefc;
      lStack_98 = 0x28;
      uStack_90 = 0;
      puStack_88 = &UNK_14359ce68;
      uStack_80 = 0x35;
      uStack_78 = 2;
      puStack_70 = &UNK_14359cefc;
      uStack_68 = 0x28;
      uStack_60 = 0x2e00000001;
      puStack_58 = &DAT_14359cee2;
      uStack_50 = 0x35;
      pdb_140f332f0(&uStack_1a,&ppcStack_a8);
    }
    pcVar5 = pcStack_40;
    if ((cStack_19 == '\0') && ((*_DAT_143ca8f38 & 0x7fffffffffffffff) != 0)) {
      cVar6 = pdb_142dc79e0();
      if (cVar6 == '\0') {
        pcVar5[1] = '\x01';
      }
    }
    LOCK();
    cVar6 = *pcVar5;
    *pcVar5 = '\0';
    UNLOCK();
    if (cVar6 == '\x02') {
      pdb_142dc6ca0(pcVar5);
      return;
    }
  }
  return;
}

