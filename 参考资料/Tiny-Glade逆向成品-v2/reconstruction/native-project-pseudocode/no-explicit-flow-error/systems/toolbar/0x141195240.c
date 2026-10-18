// VA 0x141195240, PDB extent 1282 bytes
// toolbar::menu::missing_mods::ui::closure$4
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/menu/missing_mods.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: toolbar::menu::missing_mods::ui::closure$4
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/menu/missing_mods.rs
   Extent: 1282 */

void pdb_141195240(longlong param_1,undefined8 *param_2,longlong param_3)

{
  char *pcVar1;
  byte *pbVar2;
  byte *pbVar3;
  byte *pbVar4;
  uint uVar5;
  uint uVar6;
  byte **ppbVar7;
  longlong lVar8;
  longlong lVar9;
  ulonglong uVar10;
  undefined8 uVar11;
  code *pcVar12;
  undefined8 uVar13;
  uint uVar14;
  ushort uVar15;
  undefined1 uVar16;
  byte bVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  ulonglong uStack_b8;
  byte *pbStack_b0;
  ulonglong uStack_a8;
  byte *pbStack_a0;
  ulonglong uStack_98;
  byte *pbStack_90;
  byte **ppbStack_88;
  code *pcStack_80;
  byte ***pppbStack_78;
  byte **ppbStack_68;
  code *pcStack_60;
  byte ***pppbStack_58;
  code *pcStack_50;
  undefined8 uStack_40;
  
  uStack_40 = 0xfffffffffffffffe;
  if (*(longlong *)(param_1 + 0x60) == 0) {
LAB_141195578:
    uVar13 = 2;
    uVar11 = pdb_140dc6290(&UNK_14329f0b4,2);
    pdb_1407339e0(&ppbStack_68,param_3,uVar11,uVar13);
    lVar9 = pdb_14116dd60(&ppbStack_68);
    *(undefined1 *)(lVar9 + 0x25d) = 0x14;
    ppbStack_88 = ppbStack_68;
    pcStack_80 = pcStack_60;
    pppbStack_78 = pppbStack_58;
    uVar11 = pdb_14116dd60(&ppbStack_88);
    pdb_14119b2b0(uVar11);
    ppbVar7 = ppbStack_88;
    ppbStack_68 = ppbStack_88;
    pcStack_60 = pcStack_80;
    pppbStack_58 = pppbStack_78;
    if (ppbStack_88[0x39] != (byte *)0x0) {
      uVar10 = pdb_1400af0a0(ppbStack_88 + 0x3a,&pcStack_60);
      pbVar3 = ppbVar7[0x36];
      pbVar4 = ppbVar7[0x37];
      bVar17 = (byte)(uVar10 >> 0x39);
      auVar18 = ZEXT216(CONCAT11(bVar17,bVar17));
      auVar18 = pshuflw(auVar18,auVar18,0);
      lVar9 = 0;
      while( true ) {
        uVar10 = uVar10 & (ulonglong)pbVar4;
        pbVar2 = pbVar3 + uVar10;
        auVar22[0] = -(*pbVar2 == auVar18[0]);
        auVar22[1] = -(pbVar2[1] == auVar18[1]);
        auVar22[2] = -(pbVar2[2] == auVar18[2]);
        auVar22[3] = -(pbVar2[3] == auVar18[3]);
        auVar22[4] = -(pbVar2[4] == auVar18[4]);
        auVar22[5] = -(pbVar2[5] == auVar18[5]);
        auVar22[6] = -(pbVar2[6] == auVar18[6]);
        auVar22[7] = -(pbVar2[7] == auVar18[7]);
        auVar22[8] = -(pbVar2[8] == auVar18[0]);
        auVar22[9] = -(pbVar2[9] == auVar18[1]);
        auVar22[10] = -(pbVar2[10] == auVar18[2]);
        auVar22[0xb] = -(pbVar2[0xb] == auVar18[3]);
        auVar22[0xc] = -(pbVar2[0xc] == auVar18[4]);
        auVar22[0xd] = -(pbVar2[0xd] == auVar18[5]);
        auVar22[0xe] = -(pbVar2[0xe] == auVar18[6]);
        auVar22[0xf] = -(pbVar2[0xf] == auVar18[7]);
        uVar15 = (ushort)(SUB161(auVar22 >> 7,0) & 1) | (ushort)(SUB161(auVar22 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar22 >> 0x17,0) & 1) << 2 |
                 (ushort)(SUB161(auVar22 >> 0x1f,0) & 1) << 3 |
                 (ushort)(SUB161(auVar22 >> 0x27,0) & 1) << 4 |
                 (ushort)(SUB161(auVar22 >> 0x2f,0) & 1) << 5 |
                 (ushort)(SUB161(auVar22 >> 0x37,0) & 1) << 6 |
                 (ushort)(SUB161(auVar22 >> 0x3f,0) & 1) << 7 |
                 (ushort)(SUB161(auVar22 >> 0x47,0) & 1) << 8 |
                 (ushort)(SUB161(auVar22 >> 0x4f,0) & 1) << 9 |
                 (ushort)(SUB161(auVar22 >> 0x57,0) & 1) << 10 |
                 (ushort)(SUB161(auVar22 >> 0x5f,0) & 1) << 0xb |
                 (ushort)(SUB161(auVar22 >> 0x67,0) & 1) << 0xc |
                 (ushort)(SUB161(auVar22 >> 0x6f,0) & 1) << 0xd |
                 (ushort)(SUB161(auVar22 >> 0x77,0) & 1) << 0xe | (ushort)(auVar22[0xf] >> 7) << 0xf
        ;
        uVar14 = (uint)uVar15;
        while (uVar15 != 0) {
          uVar5 = 0;
          for (uVar6 = uVar14; (uVar6 & 1) == 0; uVar6 = uVar6 >> 1 | 0x80000000) {
            uVar5 = uVar5 + 1;
          }
          lVar8 = (uVar5 + uVar10 & (ulonglong)pbVar4) * -0xd8;
          if (pcStack_60 == *(code **)(pbVar3 + lVar8 + -0xd8)) {
            if ((pbVar3[lVar8 + -6] & 0x30) != 0) {
              *(undefined4 *)param_2[2] = *(undefined4 *)((longlong)param_2 + 0x1c);
              *(undefined4 *)*param_2 = 1;
            }
            return;
          }
          uVar15 = (ushort)(uVar14 - 1) & (ushort)uVar14;
          uVar14 = CONCAT22((short)(uVar14 - 1 >> 0x10),uVar15);
        }
        auVar20[0] = -(*pbVar2 == 0xff);
        auVar20[1] = -(pbVar2[1] == 0xff);
        auVar20[2] = -(pbVar2[2] == 0xff);
        auVar20[3] = -(pbVar2[3] == 0xff);
        auVar20[4] = -(pbVar2[4] == 0xff);
        auVar20[5] = -(pbVar2[5] == 0xff);
        auVar20[6] = -(pbVar2[6] == 0xff);
        auVar20[7] = -(pbVar2[7] == 0xff);
        auVar20[8] = -(pbVar2[8] == 0xff);
        auVar20[9] = -(pbVar2[9] == 0xff);
        auVar20[10] = -(pbVar2[10] == 0xff);
        auVar20[0xb] = -(pbVar2[0xb] == 0xff);
        auVar20[0xc] = -(pbVar2[0xc] == 0xff);
        auVar20[0xd] = -(pbVar2[0xd] == 0xff);
        auVar20[0xe] = -(pbVar2[0xe] == 0xff);
        auVar20[0xf] = -(pbVar2[0xf] == 0xff);
        if ((((((((((((((((SUB161(auVar20 >> 7,0) & 1) != 0 || (SUB161(auVar20 >> 0xf,0) & 1) != 0)
                        || (SUB161(auVar20 >> 0x17,0) & 1) != 0) ||
                       (SUB161(auVar20 >> 0x1f,0) & 1) != 0) || (SUB161(auVar20 >> 0x27,0) & 1) != 0
                      ) || (SUB161(auVar20 >> 0x2f,0) & 1) != 0) ||
                    (SUB161(auVar20 >> 0x37,0) & 1) != 0) || (SUB161(auVar20 >> 0x3f,0) & 1) != 0)
                  || (SUB161(auVar20 >> 0x47,0) & 1) != 0) || (SUB161(auVar20 >> 0x4f,0) & 1) != 0)
                || (SUB161(auVar20 >> 0x57,0) & 1) != 0) || (SUB161(auVar20 >> 0x5f,0) & 1) != 0) ||
              (SUB161(auVar20 >> 0x67,0) & 1) != 0) || (SUB161(auVar20 >> 0x6f,0) & 1) != 0) ||
            (SUB161(auVar20 >> 0x77,0) & 1) != 0) || auVar20[0xf] < '\0') break;
        uVar10 = uVar10 + lVar9 + 0x10;
        lVar9 = lVar9 + 0x10;
      }
    }
    pdb_142dc8110(&UNK_142fa60f8,0x16,&UNK_142fa6ad0);
    goto LAB_1411956f1;
  }
  lVar9 = *(longlong *)(param_1 + 8);
  lVar8 = *(longlong *)(param_1 + 0x10) * 0x58;
  do {
    if (lVar8 == 0) {
      uVar10 = 0x1b;
      uVar11 = pdb_140dc6290(&UNK_14329f48b);
      uVar16 = uVar10 == 0;
      if (-1 < (longlong)uVar10) goto LAB_141195329;
      uVar13 = 0;
      uVar16 = true;
      goto LAB_14119531e;
    }
    lVar8 = lVar8 + -0x58;
    pcVar1 = (char *)(lVar9 + 0x50);
    lVar9 = lVar9 + 0x58;
  } while (*pcVar1 == '\0');
  uVar11 = 0x1b;
  pbStack_a0 = (byte *)pdb_140dc6290(&UNK_14329f48b);
  pcVar12 = (code *)0x25;
  uStack_98 = uVar11;
  ppbStack_88 = (byte **)pdb_140dc6290(&UNK_14329f4a6);
  ppbStack_68 = &pbStack_a0;
  pcStack_60 = pdb_1402ed400;
  pppbStack_58 = &ppbStack_88;
  pcStack_50 = pdb_1402ed400;
  pcStack_80 = pcVar12;
  pdb_140f60760(&uStack_b8,&UNK_14329f4cb,&ppbStack_68);
  goto LAB_141195370;
  while( true ) {
    pdb_14007ee60();
    uVar13 = 1;
    pbStack_b0 = pub_1406abab0(uVar10,1);
    uVar16 = pbStack_b0 == (byte *)0x0;
    if (!(bool)uVar16) break;
LAB_14119531e:
    uVar11 = pdb_142dc7e2a(uVar13,uVar10);
LAB_141195329:
    uStack_b8 = uVar10;
    uStack_a8 = uVar10;
    if ((bool)uVar16) {
      pbStack_b0 = (byte *)0x1;
      goto LAB_141195370;
    }
  }
  pub_142e32760(pbStack_b0,uVar11,uVar10);
LAB_141195370:
  uVar10 = uStack_a8;
  pbStack_a0 = pbStack_b0;
  uStack_98 = uStack_a8;
  pbStack_90 = pbStack_b0;
  ppbStack_68 = (byte **)pdb_140bbbcb0(&pbStack_a0);
  pcStack_60 = _DAT_14329c260;
  pppbStack_58 = _UNK_14329c268;
  pcStack_60 = (code *)pdb_1400affa0(&ppbStack_68);
  ppbStack_68 = *(byte ***)(param_3 + 8);
  uVar11 = pdb_1400b0130(&ppbStack_68);
  pdb_14072caa0(&ppbStack_68,param_3,uVar11);
  uVar11 = pdb_14116ee90(&ppbStack_68,0);
  pdb_14119b6b0(uVar11,pbStack_90,uVar10);
  pppbStack_78 = pppbStack_58;
  ppbStack_88 = ppbStack_68;
  pcStack_80 = pcStack_60;
  uVar11 = pdb_14116e180(&ppbStack_88);
  pdb_14119b2b0(uVar11,_DAT_14329e25c);
  pppbStack_58 = pppbStack_78;
  ppbStack_68 = ppbStack_88;
  pcStack_60 = pcStack_80;
  lVar9 = pdb_14116e180(&ppbStack_68);
  *(undefined4 *)(lVar9 + 600) = 0xffffffa0;
  pppbStack_78 = pppbStack_58;
  ppbStack_88 = ppbStack_68;
  pcStack_80 = pcStack_60;
  uVar11 = pdb_14116e180(&ppbStack_88);
  pdb_140cb68f0(uVar11,2);
  pppbStack_58 = pppbStack_78;
  ppbStack_68 = ppbStack_88;
  pcStack_60 = pcStack_80;
  uVar11 = pdb_14116e180(&ppbStack_68);
  pdb_140cb5df0(uVar11);
  ppbVar7 = ppbStack_68;
  ppbStack_88 = ppbStack_68;
  pcStack_80 = pcStack_60;
  pppbStack_78 = pppbStack_58;
  if (ppbStack_68[0x39] != (byte *)0x0) {
    uVar10 = pdb_1400af0a0(ppbStack_68 + 0x3a,&pcStack_80);
    pbVar3 = ppbVar7[0x36];
    pbVar4 = ppbVar7[0x37];
    bVar17 = (byte)(uVar10 >> 0x39);
    auVar18 = ZEXT216(CONCAT11(bVar17,bVar17));
    auVar18 = pshuflw(auVar18,auVar18,0);
    lVar9 = 0;
    while( true ) {
      uVar10 = uVar10 & (ulonglong)pbVar4;
      pbVar2 = pbVar3 + uVar10;
      auVar21[0] = -(*pbVar2 == auVar18[0]);
      auVar21[1] = -(pbVar2[1] == auVar18[1]);
      auVar21[2] = -(pbVar2[2] == auVar18[2]);
      auVar21[3] = -(pbVar2[3] == auVar18[3]);
      auVar21[4] = -(pbVar2[4] == auVar18[4]);
      auVar21[5] = -(pbVar2[5] == auVar18[5]);
      auVar21[6] = -(pbVar2[6] == auVar18[6]);
      auVar21[7] = -(pbVar2[7] == auVar18[7]);
      auVar21[8] = -(pbVar2[8] == auVar18[0]);
      auVar21[9] = -(pbVar2[9] == auVar18[1]);
      auVar21[10] = -(pbVar2[10] == auVar18[2]);
      auVar21[0xb] = -(pbVar2[0xb] == auVar18[3]);
      auVar21[0xc] = -(pbVar2[0xc] == auVar18[4]);
      auVar21[0xd] = -(pbVar2[0xd] == auVar18[5]);
      auVar21[0xe] = -(pbVar2[0xe] == auVar18[6]);
      auVar21[0xf] = -(pbVar2[0xf] == auVar18[7]);
      uVar15 = (ushort)(SUB161(auVar21 >> 7,0) & 1) | (ushort)(SUB161(auVar21 >> 0xf,0) & 1) << 1 |
               (ushort)(SUB161(auVar21 >> 0x17,0) & 1) << 2 |
               (ushort)(SUB161(auVar21 >> 0x1f,0) & 1) << 3 |
               (ushort)(SUB161(auVar21 >> 0x27,0) & 1) << 4 |
               (ushort)(SUB161(auVar21 >> 0x2f,0) & 1) << 5 |
               (ushort)(SUB161(auVar21 >> 0x37,0) & 1) << 6 |
               (ushort)(SUB161(auVar21 >> 0x3f,0) & 1) << 7 |
               (ushort)(SUB161(auVar21 >> 0x47,0) & 1) << 8 |
               (ushort)(SUB161(auVar21 >> 0x4f,0) & 1) << 9 |
               (ushort)(SUB161(auVar21 >> 0x57,0) & 1) << 10 |
               (ushort)(SUB161(auVar21 >> 0x5f,0) & 1) << 0xb |
               (ushort)(SUB161(auVar21 >> 0x67,0) & 1) << 0xc |
               (ushort)(SUB161(auVar21 >> 0x6f,0) & 1) << 0xd |
               (ushort)(SUB161(auVar21 >> 0x77,0) & 1) << 0xe | (ushort)(auVar21[0xf] >> 7) << 0xf;
      uVar14 = (uint)uVar15;
      while (uVar15 != 0) {
        uVar5 = 0;
        for (uVar6 = uVar14; (uVar6 & 1) == 0; uVar6 = uVar6 >> 1 | 0x80000000) {
          uVar5 = uVar5 + 1;
        }
        lVar8 = (uVar5 + uVar10 & (ulonglong)pbVar4) * -0xd8;
        if (pcStack_80 == *(code **)(pbVar3 + lVar8 + -0xd8)) {
          pbVar3[lVar8 + -5] = pbVar3[lVar8 + -5] | 2;
          if (uStack_b8 != 0) {
            pub_1406abac0(pbStack_90,uStack_b8,1);
          }
          goto LAB_141195578;
        }
        uVar15 = (ushort)(uVar14 - 1) & (ushort)uVar14;
        uVar14 = CONCAT22((short)(uVar14 - 1 >> 0x10),uVar15);
      }
      auVar19[0] = -(*pbVar2 == 0xff);
      auVar19[1] = -(pbVar2[1] == 0xff);
      auVar19[2] = -(pbVar2[2] == 0xff);
      auVar19[3] = -(pbVar2[3] == 0xff);
      auVar19[4] = -(pbVar2[4] == 0xff);
      auVar19[5] = -(pbVar2[5] == 0xff);
      auVar19[6] = -(pbVar2[6] == 0xff);
      auVar19[7] = -(pbVar2[7] == 0xff);
      auVar19[8] = -(pbVar2[8] == 0xff);
      auVar19[9] = -(pbVar2[9] == 0xff);
      auVar19[10] = -(pbVar2[10] == 0xff);
      auVar19[0xb] = -(pbVar2[0xb] == 0xff);
      auVar19[0xc] = -(pbVar2[0xc] == 0xff);
      auVar19[0xd] = -(pbVar2[0xd] == 0xff);
      auVar19[0xe] = -(pbVar2[0xe] == 0xff);
      auVar19[0xf] = -(pbVar2[0xf] == 0xff);
      if ((((((((((((((((SUB161(auVar19 >> 7,0) & 1) != 0 || (SUB161(auVar19 >> 0xf,0) & 1) != 0) ||
                      (SUB161(auVar19 >> 0x17,0) & 1) != 0) || (SUB161(auVar19 >> 0x1f,0) & 1) != 0)
                    || (SUB161(auVar19 >> 0x27,0) & 1) != 0) || (SUB161(auVar19 >> 0x2f,0) & 1) != 0
                   ) || (SUB161(auVar19 >> 0x37,0) & 1) != 0) ||
                 (SUB161(auVar19 >> 0x3f,0) & 1) != 0) || (SUB161(auVar19 >> 0x47,0) & 1) != 0) ||
               (SUB161(auVar19 >> 0x4f,0) & 1) != 0) || (SUB161(auVar19 >> 0x57,0) & 1) != 0) ||
             (SUB161(auVar19 >> 0x5f,0) & 1) != 0) || (SUB161(auVar19 >> 0x67,0) & 1) != 0) ||
           (SUB161(auVar19 >> 0x6f,0) & 1) != 0) || (SUB161(auVar19 >> 0x77,0) & 1) != 0) ||
          auVar19[0xf] < '\0') break;
      uVar10 = uVar10 + lVar9 + 0x10;
      lVar9 = lVar9 + 0x10;
    }
  }
LAB_1411956f1:
                    /* WARNING: Subroutine does not return */
  pdb_142dc8150(&UNK_142fa6b48);
}

