// VA 0x1400ec920, PDB extent 2055 bytes
// tiny_glade::panic_reporter::crash_service::start
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/panic_reporter/crash_service.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: tiny_glade::panic_reporter::crash_service::start
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/panic_reporter/crash_service.rs
   Extent: 2055 */

void pdb_1400ec920(code *param_1,undefined8 param_2)

{
  code *pcVar1;
  longlong *plVar2;
  ulonglong *puVar3;
  char cVar4;
  bool bVar5;
  undefined8 *puStack_120;
  code *pcStack_118;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined8 uStack_100;
  undefined1 uStack_f8;
  byte *pbStack_f0;
  longlong *plStack_e8;
  code *pcStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_c8;
  byte *pbStack_c0;
  undefined8 uStack_b8;
  longlong *plStack_a8;
  code *pcStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  ulonglong uStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  undefined8 **ppuStack_50;
  longlong *plStack_48;
  code *pcStack_40;
  undefined8 uStack_38;
  undefined1 uStack_29;
  undefined8 uStack_28;
  
  uStack_28 = 0xfffffffffffffffe;
  plStack_a8 = (longlong *)0x1;
  pcStack_a0 = param_1;
  uStack_98 = param_2;
  if (_DAT_143ca3068 != 0) {
    pdb_142d847b8(0x143ca3058,&plStack_a8);
  }
  if ((char)plStack_a8 != '\0') {
    pcStack_118 = pcStack_a0;
    uStack_110 = (undefined4)uStack_98;
    uStack_10c = uStack_98._4_4_;
    puStack_120 = (undefined8 *)0x1;
    if (pcStack_a0 != (code *)0x0) {
      LOCK();
      *(longlong *)pcStack_a0 = *(longlong *)pcStack_a0 + -1;
      UNLOCK();
      if (*(longlong *)pcStack_a0 == 0) {
        pdb_140315650(&pcStack_118);
      }
      plVar2 = (longlong *)CONCAT44(uStack_10c,uStack_110);
      LOCK();
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (*plVar2 == 0) {
        pdb_140315590(&uStack_110);
      }
    }
  }
  LOCK();
  bVar5 = DAT_143ca3070 == '\0';
  if (bVar5) {
    DAT_143ca3070 = '\x01';
  }
  UNLOCK();
  if (!bVar5) {
    pdb_142dc6be0(&DAT_143ca3070);
  }
  puVar3 = _DAT_143ca8f38;
  if (((((*_DAT_143ca8f38 & 0x7fffffffffffffff) == 0) || (cVar4 = pdb_142dc79e0(), cVar4 != '\0'))
      && ((*puVar3 & 0x7fffffffffffffff) != 0)) && (cVar4 = pdb_142dc79e0(), cVar4 == '\0')) {
    DAT_143ca3071 = 1;
  }
  cVar4 = DAT_143ca3070;
  LOCK();
  DAT_143ca3070 = 0;
  UNLOCK();
  if (cVar4 == '\x02') {
    pdb_142dc6ca0(&DAT_143ca3070);
  }
  uStack_98 = 0x8000000000000000;
  plStack_a8 = (longlong *)0x0;
  uStack_80 = uStack_80 & 0xffffffffffffff00;
  pdb_14007ee60();
  pbStack_f0 = pub_1406abab0(0xe,1);
  if (pbStack_f0 == (byte *)0x0) {
    pdb_142dc7e2a(1,0xe);
LAB_1400eced9:
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  pbStack_f0[6] = 0x77;
  pbStack_f0[7] = 0x61;
  pbStack_f0[8] = 0x74;
  pbStack_f0[9] = 99;
  pbStack_f0[10] = 0x68;
  pbStack_f0[0xb] = 100;
  pbStack_f0[0xc] = 0x6f;
  pbStack_f0[0xd] = 0x67;
  pbStack_f0[0] = 99;
  pbStack_f0[1] = 0x72;
  pbStack_f0[2] = 0x61;
  pbStack_f0[3] = 0x73;
  pbStack_f0[4] = 0x68;
  pbStack_f0[5] = 0x20;
  pbStack_f0[6] = 0x77;
  pbStack_f0[7] = 0x61;
  uStack_c8 = (code **)0xe;
  uStack_b8 = 0xe;
  pbStack_c0 = pbStack_f0;
  pdb_140f3cec0(&puStack_120,&plStack_a8,&uStack_c8);
  uStack_b8 = uStack_100;
  uStack_c8 = (code **)CONCAT44(uStack_10c,uStack_110);
  pdb_14022e710(&plStack_a8,&uStack_c8,puStack_120,pcStack_118,uStack_f8,0);
  if (plStack_a8 == (longlong *)0x0) {
    uStack_c8 = &pcStack_40;
    pcStack_40 = pcStack_a0;
    plStack_48 = (longlong *)0x0;
    if (1 < *_DAT_143ca8e90) {
      pcStack_118 = pdb_140562de0;
      plStack_a8 = (longlong *)0x0;
      pcStack_a0 = (code *)&UNK_142e40dd1;
      uStack_98 = 0x29;
      uStack_90 = 0;
      puStack_88 = &UNK_142e40d71;
      uStack_80 = 0x35;
      uStack_78 = 2;
      puStack_70 = &UNK_142e40dd1;
      uStack_68 = 0x29;
      uStack_60 = 0x6300000001;
      puStack_58 = &UNK_142e40da7;
      puStack_120 = &uStack_c8;
      ppuStack_50 = &puStack_120;
      pdb_140f332f0(&uStack_29,&plStack_a8);
    }
  }
  else {
    uStack_38 = uStack_98;
    pcStack_40 = pcStack_a0;
    plStack_48 = plStack_a8;
  }
  uStack_d8 = uStack_38;
  plStack_e8 = plStack_48;
  pcStack_e0 = pcStack_40;
  uStack_98 = 0x8000000000000000;
  plStack_a8 = (longlong *)0x0;
  uStack_80 = uStack_80 & 0xffffffffffffff00;
  pdb_14007ee60();
  pbStack_f0 = pub_1406abab0(0xe,1);
  if (pbStack_f0 == (byte *)0x0) {
    pdb_142dc7e2a(1,0xe);
    goto LAB_1400eced9;
  }
  pbStack_f0[6] = 0x72;
  pbStack_f0[7] = 0x65;
  pbStack_f0[8] = 99;
  pbStack_f0[9] = 0x6f;
  pbStack_f0[10] = 0x76;
  pbStack_f0[0xb] = 0x65;
  pbStack_f0[0xc] = 0x72;
  pbStack_f0[0xd] = 0x79;
  pbStack_f0[0] = 99;
  pbStack_f0[1] = 0x72;
  pbStack_f0[2] = 0x61;
  pbStack_f0[3] = 0x73;
  pbStack_f0[4] = 0x68;
  pbStack_f0[5] = 0x20;
  pbStack_f0[6] = 0x72;
  pbStack_f0[7] = 0x65;
  uStack_c8 = (code **)0xe;
  uStack_b8 = 0xe;
  pbStack_c0 = pbStack_f0;
  pdb_140f3cec0(&puStack_120,&plStack_a8,&uStack_c8);
  uStack_b8 = uStack_100;
  uStack_c8 = (code **)CONCAT44(uStack_10c,uStack_110);
  pdb_14022b4c0(&plStack_a8,&uStack_c8,puStack_120,pcStack_118,uStack_f8,0);
  if (plStack_a8 == (longlong *)0x0) {
    uStack_c8 = &pcStack_40;
    pcStack_40 = pcStack_a0;
    plStack_48 = (longlong *)0x0;
    if (1 < *_DAT_143ca8e90) {
      pcStack_118 = pdb_140562de0;
      plStack_a8 = (longlong *)0x0;
      pcStack_a0 = (code *)&UNK_142e40dd1;
      uStack_98 = 0x29;
      uStack_90 = 0;
      puStack_88 = &UNK_142e40d71;
      uStack_80 = 0x35;
      uStack_78 = 2;
      puStack_70 = &UNK_142e40dd1;
      uStack_68 = 0x29;
      uStack_60 = 0x9300000001;
      puStack_58 = &UNK_142e40dfa;
      puStack_120 = &uStack_c8;
      ppuStack_50 = &puStack_120;
      pdb_140f332f0(&uStack_29,&plStack_a8);
    }
  }
  else {
    uStack_38 = uStack_98;
    pcStack_40 = pcStack_a0;
    plStack_48 = plStack_a8;
  }
  uStack_98 = uStack_38;
  plStack_a8 = plStack_48;
  pcStack_a0 = pcStack_40;
  if (plStack_e8 != (longlong *)0x0) {
    while (DAT_143cb2b0b == '\0') {
      pdb_140f502d0(0,1000000);
    }
  }
  if (plStack_a8 != (longlong *)0x0) {
    while (plVar2 = plStack_a8, DAT_143cb2b08 == '\0') {
      pdb_140f502d0(0,1000000);
    }
    if (plStack_a8 != (longlong *)0x0) {
      CloseHandle(uStack_98);
      LOCK();
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (*plVar2 == 0) {
        pdb_140f4a410(&plStack_a8);
      }
      LOCK();
      *(longlong *)pcStack_a0 = *(longlong *)pcStack_a0 + -1;
      UNLOCK();
      if (*(longlong *)pcStack_a0 == 0) {
        pdb_140f4a2d0(&pcStack_a0);
      }
      goto LAB_1400ecdfd;
    }
  }
  pdb_1404b38e0(&pcStack_a0);
LAB_1400ecdfd:
  plVar2 = plStack_e8;
  if (plStack_e8 == (longlong *)0x0) {
    pdb_1404b38e0(&pcStack_e0);
  }
  else {
    CloseHandle(uStack_d8);
    LOCK();
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (*plVar2 == 0) {
      pdb_140f4a410(&plStack_e8);
    }
    LOCK();
    *(longlong *)pcStack_e0 = *(longlong *)pcStack_e0 + -1;
    UNLOCK();
    if (*(longlong *)pcStack_e0 == 0) {
      pdb_140f4a2d0(&pcStack_e0);
    }
  }
  return;
}

