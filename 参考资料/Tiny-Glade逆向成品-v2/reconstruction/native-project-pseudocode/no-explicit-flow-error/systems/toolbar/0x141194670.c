// VA 0x141194670, PDB extent 3023 bytes
// toolbar::menu::missing_mods::ui::closure$0
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/menu/missing_mods.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: toolbar::menu::missing_mods::ui::closure$0
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/menu/missing_mods.rs
   Extent: 3023 */

void pdb_141194670(longlong param_1,longlong param_2)

{
  byte *pbVar1;
  code *pcVar2;
  uint uVar3;
  uint uVar4;
  byte **ppbVar5;
  byte *pbVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  byte *pbVar11;
  undefined8 uVar12;
  byte ***pppbVar13;
  longlong lVar14;
  uint uVar15;
  ushort uVar16;
  longlong lVar17;
  undefined8 uVar18;
  undefined1 uVar19;
  byte bVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  ulonglong uStack_110;
  byte *pbStack_108;
  byte *pbStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  byte *pbStack_e8;
  byte *pbStack_e0;
  byte ***pppbStack_d8;
  byte *pbStack_d0;
  byte *pbStack_c8;
  byte ***pppbStack_b8;
  code *pcStack_b0;
  byte **ppbStack_a8;
  code *pcStack_a0;
  undefined8 uStack_98;
  byte **ppbStack_88;
  code *pcStack_80;
  undefined8 *puStack_78;
  code *pcStack_70;
  undefined8 uStack_60;
  
  uStack_60 = 0xfffffffffffffffe;
  pbVar11 = (byte *)0x16;
  pbVar6 = (byte *)pdb_140dc6290(&UNK_14329f405);
  pbStack_d0 = pbVar6;
  pbStack_c8 = pbVar11;
  ppbStack_88 = (byte **)pdb_140bbbcb0(&pbStack_d0);
  uVar10 = _UNK_14329c268;
  pcVar2 = _DAT_14329c260;
  pcStack_80 = _DAT_14329c260;
  puStack_78 = (undefined8 *)_UNK_14329c268;
  pcStack_80 = (code *)pdb_1400affa0(&ppbStack_88);
  ppbStack_88 = *(byte ***)(param_2 + 8);
  uVar7 = pdb_1400b0130(&ppbStack_88);
  pdb_14072caa0(&ppbStack_88,param_2,uVar7);
  uVar7 = pdb_14116ee90(&ppbStack_88,0);
  pdb_14119b6b0(uVar7,pbVar6,pbVar11);
  uStack_98 = puStack_78;
  ppbStack_a8 = ppbStack_88;
  pcStack_a0 = pcStack_80;
  uVar7 = pdb_14116e180(&ppbStack_a8);
  pdb_14119b2b0(uVar7);
  puStack_78 = (undefined8 *)uStack_98;
  ppbStack_88 = ppbStack_a8;
  pcStack_80 = pcStack_a0;
  uVar7 = pdb_14116e180(&ppbStack_88);
  pdb_140cb5c70(uVar7,700);
  ppbVar5 = ppbStack_88;
  ppbStack_a8 = ppbStack_88;
  pcStack_a0 = pcStack_80;
  uStack_98 = puStack_78;
  if (ppbStack_88[0x39] != (byte *)0x0) {
    uVar8 = pdb_1400af0a0(ppbStack_88 + 0x3a,&pcStack_a0);
    pbVar6 = ppbVar5[0x36];
    pbVar11 = ppbVar5[0x37];
    bVar20 = (byte)(uVar8 >> 0x39);
    auVar21 = ZEXT216(CONCAT11(bVar20,bVar20));
    auVar21 = pshuflw(auVar21,auVar21,0);
    lVar14 = 0;
    while( true ) {
      uVar8 = uVar8 & (ulonglong)pbVar11;
      auVar27 = *(undefined1 (*) [16])(pbVar6 + uVar8);
      auVar26[0] = -(auVar27[0] == auVar21[0]);
      auVar26[1] = -(auVar27[1] == auVar21[1]);
      auVar26[2] = -(auVar27[2] == auVar21[2]);
      auVar26[3] = -(auVar27[3] == auVar21[3]);
      auVar26[4] = -(auVar27[4] == auVar21[4]);
      auVar26[5] = -(auVar27[5] == auVar21[5]);
      auVar26[6] = -(auVar27[6] == auVar21[6]);
      auVar26[7] = -(auVar27[7] == auVar21[7]);
      auVar26[8] = -(auVar27[8] == auVar21[0]);
      auVar26[9] = -(auVar27[9] == auVar21[1]);
      auVar26[10] = -(auVar27[10] == auVar21[2]);
      auVar26[0xb] = -(auVar27[0xb] == auVar21[3]);
      auVar26[0xc] = -(auVar27[0xc] == auVar21[4]);
      auVar26[0xd] = -(auVar27[0xd] == auVar21[5]);
      auVar26[0xe] = -(auVar27[0xe] == auVar21[6]);
      auVar26[0xf] = -(auVar27[0xf] == auVar21[7]);
      uVar16 = (ushort)(SUB161(auVar26 >> 7,0) & 1) | (ushort)(SUB161(auVar26 >> 0xf,0) & 1) << 1 |
               (ushort)(SUB161(auVar26 >> 0x17,0) & 1) << 2 |
               (ushort)(SUB161(auVar26 >> 0x1f,0) & 1) << 3 |
               (ushort)(SUB161(auVar26 >> 0x27,0) & 1) << 4 |
               (ushort)(SUB161(auVar26 >> 0x2f,0) & 1) << 5 |
               (ushort)(SUB161(auVar26 >> 0x37,0) & 1) << 6 |
               (ushort)(SUB161(auVar26 >> 0x3f,0) & 1) << 7 |
               (ushort)(SUB161(auVar26 >> 0x47,0) & 1) << 8 |
               (ushort)(SUB161(auVar26 >> 0x4f,0) & 1) << 9 |
               (ushort)(SUB161(auVar26 >> 0x57,0) & 1) << 10 |
               (ushort)(SUB161(auVar26 >> 0x5f,0) & 1) << 0xb |
               (ushort)(SUB161(auVar26 >> 0x67,0) & 1) << 0xc |
               (ushort)(SUB161(auVar26 >> 0x6f,0) & 1) << 0xd |
               (ushort)(SUB161(auVar26 >> 0x77,0) & 1) << 0xe | (ushort)(auVar26[0xf] >> 7) << 0xf;
      uVar15 = (uint)uVar16;
      while (uVar16 != 0) {
        uVar3 = 0;
        for (uVar4 = uVar15; (uVar4 & 1) == 0; uVar4 = uVar4 >> 1 | 0x80000000) {
          uVar3 = uVar3 + 1;
        }
        lVar17 = (uVar3 + uVar8 & (ulonglong)pbVar11) * -0xd8;
        if (pcStack_a0 == *(code **)(pbVar6 + lVar17 + -0xd8)) {
          pbVar6[lVar17 + -5] = pbVar6[lVar17 + -5] | 2;
          if (*(longlong *)(param_1 + 0x30) == 0) goto LAB_141194c7c;
          uVar12 = 0x1a;
          uVar7 = pdb_140dc6290(&UNK_14329f41b,0x1a);
          pppbVar13 = &ppbStack_88;
          uVar9 = pdb_140f67ab0(*(undefined8 *)(param_1 + 0x80),pppbVar13,0x14);
          uVar19 = pppbVar13 == (byte ***)0x0;
          if (-1 < (longlong)pppbVar13) goto LAB_141194894;
          uVar18 = 0;
          uVar19 = true;
          goto LAB_141194889;
        }
        uVar16 = (ushort)(uVar15 - 1) & (ushort)uVar15;
        uVar15 = CONCAT22((short)(uVar15 - 1 >> 0x10),uVar16);
      }
      auVar22[0] = -(auVar27[0] == -1);
      auVar22[1] = -(auVar27[1] == -1);
      auVar22[2] = -(auVar27[2] == -1);
      auVar22[3] = -(auVar27[3] == -1);
      auVar22[4] = -(auVar27[4] == -1);
      auVar22[5] = -(auVar27[5] == -1);
      auVar22[6] = -(auVar27[6] == -1);
      auVar22[7] = -(auVar27[7] == -1);
      auVar22[8] = -(auVar27[8] == -1);
      auVar22[9] = -(auVar27[9] == -1);
      auVar22[10] = -(auVar27[10] == -1);
      auVar22[0xb] = -(auVar27[0xb] == -1);
      auVar22[0xc] = -(auVar27[0xc] == -1);
      auVar22[0xd] = -(auVar27[0xd] == -1);
      auVar22[0xe] = -(auVar27[0xe] == -1);
      auVar22[0xf] = -(auVar27[0xf] == -1);
      if ((((((((((((((((SUB161(auVar22 >> 7,0) & 1) != 0 || (SUB161(auVar22 >> 0xf,0) & 1) != 0) ||
                      (SUB161(auVar22 >> 0x17,0) & 1) != 0) || (SUB161(auVar22 >> 0x1f,0) & 1) != 0)
                    || (SUB161(auVar22 >> 0x27,0) & 1) != 0) || (SUB161(auVar22 >> 0x2f,0) & 1) != 0
                   ) || (SUB161(auVar22 >> 0x37,0) & 1) != 0) ||
                 (SUB161(auVar22 >> 0x3f,0) & 1) != 0) || (SUB161(auVar22 >> 0x47,0) & 1) != 0) ||
               (SUB161(auVar22 >> 0x4f,0) & 1) != 0) || (SUB161(auVar22 >> 0x57,0) & 1) != 0) ||
             (SUB161(auVar22 >> 0x5f,0) & 1) != 0) || (SUB161(auVar22 >> 0x67,0) & 1) != 0) ||
           (SUB161(auVar22 >> 0x6f,0) & 1) != 0) || (SUB161(auVar22 >> 0x77,0) & 1) != 0) ||
          auVar22[0xf] < '\0') break;
      uVar8 = uVar8 + lVar14 + 0x10;
      lVar14 = lVar14 + 0x10;
    }
  }
LAB_141195063:
                    /* WARNING: Subroutine does not return */
  pdb_142dc8150(&UNK_142fa6b48);
  while( true ) {
    pdb_14007ee60();
    uVar18 = 1;
    pbStack_e8 = pub_1406abab0((ulonglong)pppbVar13,1);
    uVar19 = pbStack_e8 == (byte *)0x0;
    if (!(bool)uVar19) break;
LAB_141194889:
    uVar9 = pdb_142dc7e2a(uVar18,pppbVar13);
LAB_141194894:
    if ((bool)uVar19) {
      pbStack_e8 = (byte *)0x1;
      goto LAB_1411948d1;
    }
  }
  pub_142e32760(pbStack_e8,uVar9,pppbVar13);
LAB_1411948d1:
  pppbStack_b8 = pppbVar13;
  pdb_141185a10(&ppbStack_a8,uVar7,uVar12,&UNK_14329f1c2,7,pbStack_e8,pppbVar13);
  uVar7 = uStack_98;
  pcStack_b0 = pcStack_a0;
  uVar9 = pdb_140a27750(param_1);
  pppbVar13 = &ppbStack_88;
  uVar9 = pdb_140f67ab0(uVar9,pppbVar13,0x14);
  if ((longlong)pppbVar13 < 0) {
    uVar12 = 0;
LAB_141194936:
    pdb_142dc7e2a(uVar12,pppbVar13);
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  if (pppbVar13 == (byte ***)0x0) {
    pbStack_e0 = (byte *)0x1;
  }
  else {
    pdb_14007ee60();
    uVar12 = 1;
    pbStack_e0 = pub_1406abab0((ulonglong)pppbVar13,1);
    if (pbStack_e0 == (byte *)0x0) goto LAB_141194936;
    pub_142e32760(pbStack_e0,uVar9,pppbVar13);
  }
  pppbStack_d8 = pppbVar13;
  pdb_141185a10(&pbStack_d0,pcStack_b0,uVar7,&UNK_14329f435,7,pbStack_e0,pppbVar13);
  uVar7 = 0x20;
  uStack_f8 = pdb_140dc6290(&UNK_14329f43c);
  pcStack_80 = pdb_140001020;
  puStack_78 = &uStack_f8;
  pcStack_70 = pdb_1402ed400;
  uStack_f0 = uVar7;
  ppbStack_88 = &pbStack_d0;
  pdb_140f60760(&uStack_110,&UNK_14329f45c,&ppbStack_88);
  if (pbStack_d0 != (byte *)0x0) {
    pub_1406abac0(pbStack_c8,(ulonglong)pbStack_d0,1);
  }
  pppbVar13 = pppbStack_b8;
  if (pppbStack_d8 != (byte ***)0x0) {
    pub_1406abac0(pbStack_e0,(ulonglong)pppbStack_d8,1);
  }
  if (ppbStack_a8 != (byte **)0x0) {
    pub_1406abac0((byte *)pcStack_b0,(ulonglong)ppbStack_a8,1);
  }
  if (pppbVar13 != (byte ***)0x0) {
    pub_1406abac0(pbStack_e8,(ulonglong)pppbVar13,1);
  }
  pppbStack_b8 = (byte ***)uStack_110;
  pcStack_b0 = (code *)pbStack_108;
  pbStack_d0 = pbStack_108;
  pbStack_c8 = pbStack_100;
  ppbStack_88 = (byte **)pdb_140bbbcb0(&pbStack_d0);
  pcStack_80 = pcVar2;
  puStack_78 = (undefined8 *)uVar10;
  pcStack_80 = (code *)pdb_1400affa0(&ppbStack_88);
  ppbStack_88 = *(byte ***)(param_2 + 8);
  uVar7 = pdb_1400b0130(&ppbStack_88);
  pdb_14072caa0(&ppbStack_88,param_2,uVar7);
  uVar7 = pdb_14116ee90(&ppbStack_88,0);
  pdb_14119b6b0(uVar7,pcStack_b0,pbStack_100);
  uStack_98 = puStack_78;
  ppbStack_a8 = ppbStack_88;
  pcStack_a0 = pcStack_80;
  uVar7 = pdb_14116e180(&ppbStack_a8);
  pdb_14119b2b0(uVar7,_DAT_14329e25c);
  puStack_78 = (undefined8 *)uStack_98;
  ppbStack_88 = ppbStack_a8;
  pcStack_80 = pcStack_a0;
  lVar14 = pdb_14116e180(&ppbStack_88);
  *(undefined4 *)(lVar14 + 600) = 0xffffffa0;
  uStack_98 = puStack_78;
  ppbStack_a8 = ppbStack_88;
  pcStack_a0 = pcStack_80;
  uVar7 = pdb_14116e180(&ppbStack_a8);
  pdb_140cb68f0(uVar7,2);
  puStack_78 = (undefined8 *)uStack_98;
  ppbStack_88 = ppbStack_a8;
  pcStack_80 = pcStack_a0;
  uVar7 = pdb_14116e180(&ppbStack_88);
  pdb_140cb5df0(uVar7);
  ppbVar5 = ppbStack_88;
  ppbStack_a8 = ppbStack_88;
  pcStack_a0 = pcStack_80;
  uStack_98 = puStack_78;
  if (ppbStack_88[0x39] == (byte *)0x0) {
LAB_14119508e:
                    /* WARNING: Subroutine does not return */
    pdb_142dc8150(&UNK_142fa6b48);
  }
  uVar8 = pdb_1400af0a0(ppbStack_88 + 0x3a,&pcStack_a0);
  pbVar6 = ppbVar5[0x36];
  pbVar11 = ppbVar5[0x37];
  bVar20 = (byte)(uVar8 >> 0x39);
  auVar21 = ZEXT216(CONCAT11(bVar20,bVar20));
  auVar21 = pshuflw(auVar21,auVar21,0);
  lVar14 = 0;
LAB_141194bf8:
  uVar8 = uVar8 & (ulonglong)pbVar11;
  pbVar1 = pbVar6 + uVar8;
  auVar27[0] = -(*pbVar1 == auVar21[0]);
  auVar27[1] = -(pbVar1[1] == auVar21[1]);
  auVar27[2] = -(pbVar1[2] == auVar21[2]);
  auVar27[3] = -(pbVar1[3] == auVar21[3]);
  auVar27[4] = -(pbVar1[4] == auVar21[4]);
  auVar27[5] = -(pbVar1[5] == auVar21[5]);
  auVar27[6] = -(pbVar1[6] == auVar21[6]);
  auVar27[7] = -(pbVar1[7] == auVar21[7]);
  auVar27[8] = -(pbVar1[8] == auVar21[0]);
  auVar27[9] = -(pbVar1[9] == auVar21[1]);
  auVar27[10] = -(pbVar1[10] == auVar21[2]);
  auVar27[0xb] = -(pbVar1[0xb] == auVar21[3]);
  auVar27[0xc] = -(pbVar1[0xc] == auVar21[4]);
  auVar27[0xd] = -(pbVar1[0xd] == auVar21[5]);
  auVar27[0xe] = -(pbVar1[0xe] == auVar21[6]);
  auVar27[0xf] = -(pbVar1[0xf] == auVar21[7]);
  uVar16 = (ushort)(SUB161(auVar27 >> 7,0) & 1) | (ushort)(SUB161(auVar27 >> 0xf,0) & 1) << 1 |
           (ushort)(SUB161(auVar27 >> 0x17,0) & 1) << 2 |
           (ushort)(SUB161(auVar27 >> 0x1f,0) & 1) << 3 |
           (ushort)(SUB161(auVar27 >> 0x27,0) & 1) << 4 |
           (ushort)(SUB161(auVar27 >> 0x2f,0) & 1) << 5 |
           (ushort)(SUB161(auVar27 >> 0x37,0) & 1) << 6 |
           (ushort)(SUB161(auVar27 >> 0x3f,0) & 1) << 7 |
           (ushort)(SUB161(auVar27 >> 0x47,0) & 1) << 8 |
           (ushort)(SUB161(auVar27 >> 0x4f,0) & 1) << 9 |
           (ushort)(SUB161(auVar27 >> 0x57,0) & 1) << 10 |
           (ushort)(SUB161(auVar27 >> 0x5f,0) & 1) << 0xb |
           (ushort)(SUB161(auVar27 >> 0x67,0) & 1) << 0xc |
           (ushort)(SUB161(auVar27 >> 0x6f,0) & 1) << 0xd |
           (ushort)(SUB161(auVar27 >> 0x77,0) & 1) << 0xe | (ushort)(auVar27[0xf] >> 7) << 0xf;
  uVar15 = (uint)uVar16;
  while( true ) {
    if (uVar16 == 0) goto LAB_141194c3e;
    uVar3 = 0;
    for (uVar4 = uVar15; (uVar4 & 1) == 0; uVar4 = uVar4 >> 1 | 0x80000000) {
      uVar3 = uVar3 + 1;
    }
    lVar17 = (uVar3 + uVar8 & (ulonglong)pbVar11) * -0xd8;
    if (pcStack_a0 == *(code **)(pbVar6 + lVar17 + -0xd8)) break;
    uVar16 = (ushort)(uVar15 - 1) & (ushort)uVar15;
    uVar15 = CONCAT22((short)(uVar15 - 1 >> 0x10),uVar16);
  }
  pbVar6[lVar17 + -5] = pbVar6[lVar17 + -5] | 2;
  if (pppbStack_b8 != (byte ***)0x0) {
    pub_1406abac0((byte *)pcStack_b0,(ulonglong)pppbStack_b8,1);
  }
LAB_141194c7c:
  if (*(longlong *)(param_1 + 0x10) == 0) {
    return;
  }
  pbVar11 = (byte *)0x15;
  pbVar6 = (byte *)pdb_140dc6290(&UNK_14329f461);
  pbStack_d0 = pbVar6;
  pbStack_c8 = pbVar11;
  ppbStack_88 = (byte **)pdb_140bbbcb0(&pbStack_d0);
  pcStack_80 = pcVar2;
  puStack_78 = (undefined8 *)uVar10;
  pcStack_80 = (code *)pdb_1400affa0(&ppbStack_88);
  ppbStack_88 = *(byte ***)(param_2 + 8);
  uVar7 = pdb_1400b0130(&ppbStack_88);
  pdb_14072caa0(&ppbStack_88,param_2,uVar7);
  uVar7 = pdb_14116ee90(&ppbStack_88,0);
  pdb_14119b6b0(uVar7,pbVar6,pbVar11);
  uStack_98 = puStack_78;
  ppbStack_a8 = ppbStack_88;
  pcStack_a0 = pcStack_80;
  uVar7 = pdb_14116e180(&ppbStack_a8);
  pdb_14119b2b0(uVar7);
  puStack_78 = (undefined8 *)uStack_98;
  ppbStack_88 = ppbStack_a8;
  pcStack_80 = pcStack_a0;
  lVar14 = pdb_14116e180(&ppbStack_88);
  *(undefined4 *)(lVar14 + 600) = 0xffffffa0;
  ppbStack_a8 = ppbStack_88;
  pcStack_a0 = pcStack_80;
  uStack_98 = puStack_78;
  uVar7 = pdb_14116e180(&ppbStack_a8);
  pdb_140cb68f0(uVar7,2);
  puStack_78 = (undefined8 *)uStack_98;
  ppbStack_88 = ppbStack_a8;
  pcStack_80 = pcStack_a0;
  uVar7 = pdb_14116e180(&ppbStack_88);
  pdb_140cb5df0(uVar7);
  ppbVar5 = ppbStack_88;
  ppbStack_a8 = ppbStack_88;
  pcStack_a0 = pcStack_80;
  uStack_98 = puStack_78;
  if (ppbStack_88[0x39] != (byte *)0x0) {
    uVar8 = pdb_1400af0a0(ppbStack_88 + 0x3a,&pcStack_a0);
    pbVar6 = ppbVar5[0x36];
    pbVar11 = ppbVar5[0x37];
    bVar20 = (byte)(uVar8 >> 0x39);
    auVar21 = ZEXT216(CONCAT11(bVar20,bVar20));
    auVar21 = pshuflw(auVar21,auVar21,0);
    lVar14 = 0;
    do {
      uVar8 = uVar8 & (ulonglong)pbVar11;
      auVar27 = *(undefined1 (*) [16])(pbVar6 + uVar8);
      auVar28[0] = -(auVar27[0] == auVar21[0]);
      auVar28[1] = -(auVar27[1] == auVar21[1]);
      auVar28[2] = -(auVar27[2] == auVar21[2]);
      auVar28[3] = -(auVar27[3] == auVar21[3]);
      auVar28[4] = -(auVar27[4] == auVar21[4]);
      auVar28[5] = -(auVar27[5] == auVar21[5]);
      auVar28[6] = -(auVar27[6] == auVar21[6]);
      auVar28[7] = -(auVar27[7] == auVar21[7]);
      auVar28[8] = -(auVar27[8] == auVar21[0]);
      auVar28[9] = -(auVar27[9] == auVar21[1]);
      auVar28[10] = -(auVar27[10] == auVar21[2]);
      auVar28[0xb] = -(auVar27[0xb] == auVar21[3]);
      auVar28[0xc] = -(auVar27[0xc] == auVar21[4]);
      auVar28[0xd] = -(auVar27[0xd] == auVar21[5]);
      auVar28[0xe] = -(auVar27[0xe] == auVar21[6]);
      auVar28[0xf] = -(auVar27[0xf] == auVar21[7]);
      uVar16 = (ushort)(SUB161(auVar28 >> 7,0) & 1) | (ushort)(SUB161(auVar28 >> 0xf,0) & 1) << 1 |
               (ushort)(SUB161(auVar28 >> 0x17,0) & 1) << 2 |
               (ushort)(SUB161(auVar28 >> 0x1f,0) & 1) << 3 |
               (ushort)(SUB161(auVar28 >> 0x27,0) & 1) << 4 |
               (ushort)(SUB161(auVar28 >> 0x2f,0) & 1) << 5 |
               (ushort)(SUB161(auVar28 >> 0x37,0) & 1) << 6 |
               (ushort)(SUB161(auVar28 >> 0x3f,0) & 1) << 7 |
               (ushort)(SUB161(auVar28 >> 0x47,0) & 1) << 8 |
               (ushort)(SUB161(auVar28 >> 0x4f,0) & 1) << 9 |
               (ushort)(SUB161(auVar28 >> 0x57,0) & 1) << 10 |
               (ushort)(SUB161(auVar28 >> 0x5f,0) & 1) << 0xb |
               (ushort)(SUB161(auVar28 >> 0x67,0) & 1) << 0xc |
               (ushort)(SUB161(auVar28 >> 0x6f,0) & 1) << 0xd |
               (ushort)(SUB161(auVar28 >> 0x77,0) & 1) << 0xe | (ushort)(auVar28[0xf] >> 7) << 0xf;
      uVar15 = (uint)uVar16;
      while (uVar16 != 0) {
        uVar3 = 0;
        for (uVar4 = uVar15; (uVar4 & 1) == 0; uVar4 = uVar4 >> 1 | 0x80000000) {
          uVar3 = uVar3 + 1;
        }
        lVar17 = (uVar3 + uVar8 & (ulonglong)pbVar11) * -0xd8;
        if (pcStack_a0 == *(code **)(pbVar6 + lVar17 + -0xd8)) {
          pbVar6[lVar17 + -5] = pbVar6[lVar17 + -5] | 2;
          pbVar11 = (byte *)0x15;
          pbVar6 = (byte *)pdb_140dc6290(&UNK_14329f476);
          pbStack_d0 = pbVar6;
          pbStack_c8 = pbVar11;
          ppbStack_88 = (byte **)pdb_140bbbcb0(&pbStack_d0);
          pcStack_80 = pcVar2;
          puStack_78 = (undefined8 *)uVar10;
          pcStack_80 = (code *)pdb_1400affa0(&ppbStack_88);
          ppbStack_88 = *(byte ***)(param_2 + 8);
          uVar10 = pdb_1400b0130(&ppbStack_88);
          pdb_14072caa0(&ppbStack_88,param_2,uVar10);
          uVar10 = pdb_14116ee90(&ppbStack_88,0);
          pdb_14119b6b0(uVar10,pbVar6,pbVar11);
          uStack_98 = puStack_78;
          ppbStack_a8 = ppbStack_88;
          pcStack_a0 = pcStack_80;
          uVar10 = pdb_14116e180(&ppbStack_a8);
          pdb_14119b2b0(uVar10);
          puStack_78 = (undefined8 *)uStack_98;
          ppbStack_88 = ppbStack_a8;
          pcStack_80 = pcStack_a0;
          lVar14 = pdb_14116e180(&ppbStack_88);
          *(undefined4 *)(lVar14 + 600) = 0xffffffa0;
          ppbStack_a8 = ppbStack_88;
          pcStack_a0 = pcStack_80;
          uStack_98 = puStack_78;
          uVar10 = pdb_14116e180(&ppbStack_a8);
          pdb_140cb68f0(uVar10,2);
          puStack_78 = (undefined8 *)uStack_98;
          ppbStack_88 = ppbStack_a8;
          pcStack_80 = pcStack_a0;
          uVar10 = pdb_14116e180(&ppbStack_88);
          pdb_140cb5c70(uVar10,300);
          uStack_98 = puStack_78;
          ppbStack_a8 = ppbStack_88;
          pcStack_a0 = pcStack_80;
          uVar10 = pdb_14116e180(&ppbStack_a8);
          pdb_140cb5df0(uVar10);
          ppbVar5 = ppbStack_a8;
          ppbStack_88 = ppbStack_a8;
          pcStack_80 = pcStack_a0;
          puStack_78 = (undefined8 *)uStack_98;
          if (ppbStack_a8[0x39] != (byte *)0x0) {
            uVar8 = pdb_1400af0a0(ppbStack_a8 + 0x3a,&pcStack_80);
            pbVar6 = ppbVar5[0x36];
            pbVar11 = ppbVar5[0x37];
            bVar20 = (byte)(uVar8 >> 0x39);
            auVar21 = ZEXT216(CONCAT11(bVar20,bVar20));
            auVar21 = pshuflw(auVar21,auVar21,0);
            lVar14 = 0;
            while( true ) {
              uVar8 = uVar8 & (ulonglong)pbVar11;
              pbVar1 = pbVar6 + uVar8;
              auVar29[0] = -(*pbVar1 == auVar21[0]);
              auVar29[1] = -(pbVar1[1] == auVar21[1]);
              auVar29[2] = -(pbVar1[2] == auVar21[2]);
              auVar29[3] = -(pbVar1[3] == auVar21[3]);
              auVar29[4] = -(pbVar1[4] == auVar21[4]);
              auVar29[5] = -(pbVar1[5] == auVar21[5]);
              auVar29[6] = -(pbVar1[6] == auVar21[6]);
              auVar29[7] = -(pbVar1[7] == auVar21[7]);
              auVar29[8] = -(pbVar1[8] == auVar21[0]);
              auVar29[9] = -(pbVar1[9] == auVar21[1]);
              auVar29[10] = -(pbVar1[10] == auVar21[2]);
              auVar29[0xb] = -(pbVar1[0xb] == auVar21[3]);
              auVar29[0xc] = -(pbVar1[0xc] == auVar21[4]);
              auVar29[0xd] = -(pbVar1[0xd] == auVar21[5]);
              auVar29[0xe] = -(pbVar1[0xe] == auVar21[6]);
              auVar29[0xf] = -(pbVar1[0xf] == auVar21[7]);
              uVar16 = (ushort)(SUB161(auVar29 >> 7,0) & 1) |
                       (ushort)(SUB161(auVar29 >> 0xf,0) & 1) << 1 |
                       (ushort)(SUB161(auVar29 >> 0x17,0) & 1) << 2 |
                       (ushort)(SUB161(auVar29 >> 0x1f,0) & 1) << 3 |
                       (ushort)(SUB161(auVar29 >> 0x27,0) & 1) << 4 |
                       (ushort)(SUB161(auVar29 >> 0x2f,0) & 1) << 5 |
                       (ushort)(SUB161(auVar29 >> 0x37,0) & 1) << 6 |
                       (ushort)(SUB161(auVar29 >> 0x3f,0) & 1) << 7 |
                       (ushort)(SUB161(auVar29 >> 0x47,0) & 1) << 8 |
                       (ushort)(SUB161(auVar29 >> 0x4f,0) & 1) << 9 |
                       (ushort)(SUB161(auVar29 >> 0x57,0) & 1) << 10 |
                       (ushort)(SUB161(auVar29 >> 0x5f,0) & 1) << 0xb |
                       (ushort)(SUB161(auVar29 >> 0x67,0) & 1) << 0xc |
                       (ushort)(SUB161(auVar29 >> 0x6f,0) & 1) << 0xd |
                       (ushort)(SUB161(auVar29 >> 0x77,0) & 1) << 0xe |
                       (ushort)(auVar29[0xf] >> 7) << 0xf;
              uVar15 = (uint)uVar16;
              while (uVar16 != 0) {
                uVar3 = 0;
                for (uVar4 = uVar15; (uVar4 & 1) == 0; uVar4 = uVar4 >> 1 | 0x80000000) {
                  uVar3 = uVar3 + 1;
                }
                lVar17 = (uVar3 + uVar8 & (ulonglong)pbVar11) * -0xd8;
                if (pcStack_80 == *(code **)(pbVar6 + lVar17 + -0xd8)) {
                  pbVar6[lVar17 + -5] = pbVar6[lVar17 + -5] | 2;
                  return;
                }
                uVar16 = (ushort)(uVar15 - 1) & (ushort)uVar15;
                uVar15 = CONCAT22((short)(uVar15 - 1 >> 0x10),uVar16);
              }
              auVar25[0] = -(*pbVar1 == 0xff);
              auVar25[1] = -(pbVar1[1] == 0xff);
              auVar25[2] = -(pbVar1[2] == 0xff);
              auVar25[3] = -(pbVar1[3] == 0xff);
              auVar25[4] = -(pbVar1[4] == 0xff);
              auVar25[5] = -(pbVar1[5] == 0xff);
              auVar25[6] = -(pbVar1[6] == 0xff);
              auVar25[7] = -(pbVar1[7] == 0xff);
              auVar25[8] = -(pbVar1[8] == 0xff);
              auVar25[9] = -(pbVar1[9] == 0xff);
              auVar25[10] = -(pbVar1[10] == 0xff);
              auVar25[0xb] = -(pbVar1[0xb] == 0xff);
              auVar25[0xc] = -(pbVar1[0xc] == 0xff);
              auVar25[0xd] = -(pbVar1[0xd] == 0xff);
              auVar25[0xe] = -(pbVar1[0xe] == 0xff);
              auVar25[0xf] = -(pbVar1[0xf] == 0xff);
              if ((((((((((((((((SUB161(auVar25 >> 7,0) & 1) != 0 ||
                               (SUB161(auVar25 >> 0xf,0) & 1) != 0) ||
                              (SUB161(auVar25 >> 0x17,0) & 1) != 0) ||
                             (SUB161(auVar25 >> 0x1f,0) & 1) != 0) ||
                            (SUB161(auVar25 >> 0x27,0) & 1) != 0) ||
                           (SUB161(auVar25 >> 0x2f,0) & 1) != 0) ||
                          (SUB161(auVar25 >> 0x37,0) & 1) != 0) ||
                         (SUB161(auVar25 >> 0x3f,0) & 1) != 0) ||
                        (SUB161(auVar25 >> 0x47,0) & 1) != 0) ||
                       (SUB161(auVar25 >> 0x4f,0) & 1) != 0) || (SUB161(auVar25 >> 0x57,0) & 1) != 0
                      ) || (SUB161(auVar25 >> 0x5f,0) & 1) != 0) ||
                    (SUB161(auVar25 >> 0x67,0) & 1) != 0) || (SUB161(auVar25 >> 0x6f,0) & 1) != 0)
                  || (SUB161(auVar25 >> 0x77,0) & 1) != 0) || auVar25[0xf] < '\0') break;
              uVar8 = uVar8 + lVar14 + 0x10;
              lVar14 = lVar14 + 0x10;
            }
          }
          goto LAB_141195063;
        }
        uVar16 = (ushort)(uVar15 - 1) & (ushort)uVar15;
        uVar15 = CONCAT22((short)(uVar15 - 1 >> 0x10),uVar16);
      }
      auVar24[0] = -(auVar27[0] == -1);
      auVar24[1] = -(auVar27[1] == -1);
      auVar24[2] = -(auVar27[2] == -1);
      auVar24[3] = -(auVar27[3] == -1);
      auVar24[4] = -(auVar27[4] == -1);
      auVar24[5] = -(auVar27[5] == -1);
      auVar24[6] = -(auVar27[6] == -1);
      auVar24[7] = -(auVar27[7] == -1);
      auVar24[8] = -(auVar27[8] == -1);
      auVar24[9] = -(auVar27[9] == -1);
      auVar24[10] = -(auVar27[10] == -1);
      auVar24[0xb] = -(auVar27[0xb] == -1);
      auVar24[0xc] = -(auVar27[0xc] == -1);
      auVar24[0xd] = -(auVar27[0xd] == -1);
      auVar24[0xe] = -(auVar27[0xe] == -1);
      auVar24[0xf] = -(auVar27[0xf] == -1);
      if ((((((((((((((((SUB161(auVar24 >> 7,0) & 1) != 0 || (SUB161(auVar24 >> 0xf,0) & 1) != 0) ||
                      (SUB161(auVar24 >> 0x17,0) & 1) != 0) || (SUB161(auVar24 >> 0x1f,0) & 1) != 0)
                    || (SUB161(auVar24 >> 0x27,0) & 1) != 0) || (SUB161(auVar24 >> 0x2f,0) & 1) != 0
                   ) || (SUB161(auVar24 >> 0x37,0) & 1) != 0) ||
                 (SUB161(auVar24 >> 0x3f,0) & 1) != 0) || (SUB161(auVar24 >> 0x47,0) & 1) != 0) ||
               (SUB161(auVar24 >> 0x4f,0) & 1) != 0) || (SUB161(auVar24 >> 0x57,0) & 1) != 0) ||
             (SUB161(auVar24 >> 0x5f,0) & 1) != 0) || (SUB161(auVar24 >> 0x67,0) & 1) != 0) ||
           (SUB161(auVar24 >> 0x6f,0) & 1) != 0) || (SUB161(auVar24 >> 0x77,0) & 1) != 0) ||
          auVar24[0xf] < '\0') break;
      uVar8 = uVar8 + lVar14 + 0x10;
      lVar14 = lVar14 + 0x10;
    } while( true );
  }
  goto LAB_141195063;
LAB_141194c3e:
  auVar23[0] = -(*pbVar1 == 0xff);
  auVar23[1] = -(pbVar1[1] == 0xff);
  auVar23[2] = -(pbVar1[2] == 0xff);
  auVar23[3] = -(pbVar1[3] == 0xff);
  auVar23[4] = -(pbVar1[4] == 0xff);
  auVar23[5] = -(pbVar1[5] == 0xff);
  auVar23[6] = -(pbVar1[6] == 0xff);
  auVar23[7] = -(pbVar1[7] == 0xff);
  auVar23[8] = -(pbVar1[8] == 0xff);
  auVar23[9] = -(pbVar1[9] == 0xff);
  auVar23[10] = -(pbVar1[10] == 0xff);
  auVar23[0xb] = -(pbVar1[0xb] == 0xff);
  auVar23[0xc] = -(pbVar1[0xc] == 0xff);
  auVar23[0xd] = -(pbVar1[0xd] == 0xff);
  auVar23[0xe] = -(pbVar1[0xe] == 0xff);
  auVar23[0xf] = -(pbVar1[0xf] == 0xff);
  if ((((((((((((((((SUB161(auVar23 >> 7,0) & 1) != 0 || (SUB161(auVar23 >> 0xf,0) & 1) != 0) ||
                  (SUB161(auVar23 >> 0x17,0) & 1) != 0) || (SUB161(auVar23 >> 0x1f,0) & 1) != 0) ||
                (SUB161(auVar23 >> 0x27,0) & 1) != 0) || (SUB161(auVar23 >> 0x2f,0) & 1) != 0) ||
              (SUB161(auVar23 >> 0x37,0) & 1) != 0) || (SUB161(auVar23 >> 0x3f,0) & 1) != 0) ||
            (SUB161(auVar23 >> 0x47,0) & 1) != 0) || (SUB161(auVar23 >> 0x4f,0) & 1) != 0) ||
          (SUB161(auVar23 >> 0x57,0) & 1) != 0) || (SUB161(auVar23 >> 0x5f,0) & 1) != 0) ||
        (SUB161(auVar23 >> 0x67,0) & 1) != 0) || (SUB161(auVar23 >> 0x6f,0) & 1) != 0) ||
      (SUB161(auVar23 >> 0x77,0) & 1) != 0) || auVar23[0xf] < '\0') goto LAB_14119508e;
  uVar8 = uVar8 + lVar14 + 0x10;
  lVar14 = lVar14 + 0x10;
  goto LAB_141194bf8;
}

