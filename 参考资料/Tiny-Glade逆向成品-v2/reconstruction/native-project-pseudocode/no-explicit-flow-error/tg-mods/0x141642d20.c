// VA 0x141642d20, PDB extent 1306 bytes
// tg_mods::overlay::read_dir_files<ref$<str$> >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tg-mods/src/overlay.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: tg_mods::overlay::read_dir_files<ref$<str$> >
   Source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tg-mods/src/overlay.rs
   Extent: 1306 */

undefined8 * pdb_141642d20(undefined8 *param_1,longlong param_2,undefined8 param_3,longlong param_4)

{
  undefined1 auVar1 [16];
  ulonglong *puVar2;
  longlong *plVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  byte bVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  longlong lVar11;
  longlong lStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  longlong lStack_d8;
  ulonglong uStack_d0;
  undefined1 (*pauStack_c8) [16];
  longlong lStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  longlong lStack_a8;
  longlong lStack_a0;
  byte *pbStack_98;
  longlong *plStack_90;
  code *pcStack_88;
  ulonglong uStack_80;
  undefined1 (*pauStack_78) [16];
  undefined1 (*pauStack_70) [16];
  undefined1 *puStack_68;
  ushort uStack_60;
  undefined8 uStack_58;
  undefined1 uStack_4b;
  undefined1 uStack_4a;
  undefined1 uStack_49;
  undefined8 uStack_48;
  
  uStack_48 = 0xfffffffffffffffe;
  lVar5 = param_2;
  lStack_f0 = param_2;
  uStack_e8 = param_3;
  plVar3 = (longlong *)pdb_140f3bda0();
  if ((char)plVar3[2] == '\x01') {
    lStack_a8 = *plVar3;
    lVar5 = plVar3[1];
  }
  else {
    lStack_a8 = pdb_140f4fd10();
    *plVar3 = lStack_a8;
    plVar3[1] = lVar5;
    *(undefined1 *)(plVar3 + 2) = 1;
  }
  *plVar3 = lStack_a8 + 1;
  uStack_b8 = _DAT_143320920;
  uStack_b0 = _UNK_143320928;
  pauStack_c8 = _DAT_143320910;
  lStack_c0 = _UNK_143320918;
  uStack_49 = 1;
  uVar4 = param_3;
  lStack_a0 = lVar5;
  pdb_1414d2710(&pauStack_c8,param_2,param_3);
  uVar9 = *_DAT_143ca4938;
  bVar7 = 0xffffffffffffffef < uVar9 | (byte)(((uint)uVar9 & 8) >> 3);
  uVar8 = CONCAT71((int7)((ulonglong)uVar4 >> 8),bVar7);
  if (bVar7 == 0) {
    LOCK();
    uVar10 = *_DAT_143ca4938;
    if (uVar9 == uVar10) {
      *_DAT_143ca4938 = uVar9 + 0x10;
    }
    UNLOCK();
    if (uVar9 == uVar10) goto LAB_141642dea;
  }
  uStack_49 = 1;
  param_4 = 1000000000;
  pdb_142dbb5f0(_DAT_143ca4938,0);
LAB_141642dea:
  puVar2 = _DAT_143ca4938;
  uStack_49 = 1;
  pdb_140e9a150(_DAT_143ca4938);
  uStack_49 = 1;
  pdb_140e9a150((longlong)puVar2 + 1);
  if (!SBORROW8(0,puVar2[1])) {
    uStack_4a = 1;
    pdb_140f69110(&plStack_90,param_2,param_3);
    if ((char)plStack_90 != '\0') {
      plStack_90 = &lStack_f0;
      pcStack_88 = pdb_140117670;
      uStack_4a = 1;
      uVar4 = pdb_142de8720(&plStack_90);
      param_1[1] = uVar4;
      *param_1 = 0x8000000000000000;
      puVar2 = _DAT_143ca4938;
      uStack_49 = 1;
      pdb_140e9a350(_DAT_143ca4938);
      uStack_49 = 1;
      pdb_140e9a350((ulonglong)puVar2 | 1);
      LOCK();
      uVar9 = *puVar2;
      *puVar2 = *puVar2 - 0x10;
      UNLOCK();
      if ((uVar9 & 0xfffffffffffffff2) == 0x12) {
        uStack_49 = 1;
        pdb_142dbbf50(_DAT_143ca4938);
      }
      pdb_140ca7410(&pauStack_c8,&lStack_a8,0x38,0x10);
      return param_1;
    }
    uStack_4a = 1;
    uVar8 = uStack_80;
    pdb_140d8b0a0(&plStack_90,pcStack_88);
    if ((uStack_80 < 7) ||
       (*(int *)(pcStack_88 + 3) != 0x2f737465 || *(int *)pcStack_88 != 0x65737361)) {
      if (plStack_90 != (longlong *)0x0) {
        uVar8 = 1;
        pub_1406abac0((byte *)pcStack_88,(ulonglong)plStack_90,1);
      }
    }
    else {
      if (plStack_90 != (longlong *)0x0) {
        uVar8 = 1;
        pub_1406abac0((byte *)pcStack_88,(ulonglong)plStack_90,1);
      }
      uVar9 = puVar2[2];
      uVar10 = puVar2[3] * 0xb0 + uVar9;
      for (; uVar9 != uVar10; uVar9 = uVar9 + 0xb0) {
        uStack_4a = 1;
        param_4 = param_2;
        pdb_140f3e9e0(&plStack_90,*(undefined8 *)(uVar9 + 0x48),*(undefined8 *)(uVar9 + 0x50),
                      param_2,param_3);
        pbStack_98 = (byte *)pcStack_88;
        uVar8 = uStack_80;
        pdb_1414d2710(&pauStack_c8);
        if (plStack_90 != (longlong *)0x0) {
          uVar8 = 1;
          pub_1406abac0(pbStack_98,(ulonglong)plStack_90,1);
        }
      }
    }
  }
  auVar1 = *pauStack_c8;
  if (lStack_c0 == 0) {
    plStack_90 = (longlong *)0x0;
  }
  else {
    uVar9 = lStack_c0 * 0x38 + 0x47U & 0xfffffffffffffff0;
    uVar8 = lStack_c0 + uVar9 + 0x11;
    param_4 = (longlong)pauStack_c8 - uVar9;
    plStack_90 = (longlong *)0x10;
  }
  pauStack_70 = pauStack_c8 + 1;
  uStack_60 = ~((ushort)(SUB161(auVar1 >> 7,0) & 1) | (ushort)(SUB161(auVar1 >> 0xf,0) & 1) << 1 |
                (ushort)(SUB161(auVar1 >> 0x17,0) & 1) << 2 |
                (ushort)(SUB161(auVar1 >> 0x1f,0) & 1) << 3 |
                (ushort)(SUB161(auVar1 >> 0x27,0) & 1) << 4 |
                (ushort)(SUB161(auVar1 >> 0x2f,0) & 1) << 5 |
                (ushort)(SUB161(auVar1 >> 0x37,0) & 1) << 6 |
                (ushort)(SUB161(auVar1 >> 0x3f,0) & 1) << 7 |
                (ushort)(SUB161(auVar1 >> 0x47,0) & 1) << 8 |
                (ushort)(SUB161(auVar1 >> 0x4f,0) & 1) << 9 |
                (ushort)(SUB161(auVar1 >> 0x57,0) & 1) << 10 |
                (ushort)(SUB161(auVar1 >> 0x5f,0) & 1) << 0xb |
                (ushort)(SUB161(auVar1 >> 0x67,0) & 1) << 0xc |
                (ushort)(SUB161(auVar1 >> 0x6f,0) & 1) << 0xd |
                (ushort)(SUB161(auVar1 >> 0x77,0) & 1) << 0xe |
               (ushort)(byte)(auVar1[0xf] >> 7) << 0xf);
  puStack_68 = *pauStack_c8 + lStack_c0 + 1;
  pauStack_78 = pauStack_c8;
  uStack_58 = uStack_b0;
  uStack_4a = 0;
  pcStack_88 = (code *)uVar8;
  uStack_80 = param_4;
  pdb_1414992e0(&uStack_e0,&plStack_90);
  lVar5 = lStack_d8;
  if (1 < uStack_d0) {
    if (uStack_d0 < 0x15) {
      lVar11 = uStack_d0 * 0x38 + lStack_d8;
      lVar6 = lStack_d8 + 0x38;
      do {
        pdb_141510590(lVar5,lVar6);
        lVar6 = lVar6 + 0x38;
      } while (lVar6 != lVar11);
    }
    else {
      pdb_140c76640(lStack_d8,uStack_d0,&uStack_4b);
    }
  }
  param_1[2] = uStack_d0;
  *param_1 = uStack_e0;
  param_1[1] = lStack_d8;
  puVar2 = _DAT_143ca4938;
  uStack_49 = 0;
  pdb_140e9a350(_DAT_143ca4938);
  uStack_49 = 0;
  pdb_140e9a350((ulonglong)puVar2 | 1);
  LOCK();
  uVar9 = *puVar2;
  *puVar2 = *puVar2 - 0x10;
  UNLOCK();
  if ((uVar9 & 0xfffffffffffffff2) == 0x12) {
    uStack_49 = 0;
    pdb_142dbbf50(_DAT_143ca4938);
  }
  return param_1;
}

