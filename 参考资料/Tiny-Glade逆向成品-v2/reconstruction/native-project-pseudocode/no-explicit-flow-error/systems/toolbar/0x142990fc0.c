// VA 0x142990fc0, PDB extent 2805 bytes
// toolbar::menu::mod_row::mod_row<toolbar::menu::mods_workshop_tab::list_slot::closure$3::closure_env$2>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/menu/mod_row.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   toolbar::menu::mod_row::mod_row<toolbar::menu::mods_workshop_tab::list_slot::closure$3::closure_env$2>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/menu/mod_row.rs
   Extent: 2805 */

void pdb_142990fc0(longlong param_1,byte ****param_2,undefined8 param_3,undefined8 param_4,
                  longlong *param_5,undefined8 *param_6)

{
  byte *pbVar1;
  char *pcVar2;
  byte ****ppppbVar3;
  byte ****ppppbVar4;
  byte ****ppppbVar5;
  byte *****pppppbVar6;
  byte ****ppppbVar7;
  longlong *plVar8;
  byte *****pppppbVar9;
  longlong lVar10;
  code *pcVar11;
  uint uVar12;
  uint uVar13;
  undefined8 uVar14;
  ulonglong uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  longlong lVar18;
  undefined8 uVar19;
  byte ***pppbVar20;
  longlong lVar21;
  uint uVar22;
  ushort uVar23;
  ulonglong uVar24;
  byte bVar25;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auStack_120 [8];
  byte ****ppppbStack_118;
  byte ****ppppbStack_108;
  byte ****ppppbStack_100;
  undefined8 uStack_f8;
  byte ****ppppbStack_e8;
  byte ****ppppbStack_e0;
  undefined8 uStack_d8;
  byte *****pppppbStack_c8;
  byte ***pppbStack_c0;
  undefined8 uStack_b8;
  byte ****ppppbStack_b0;
  byte *****pppppbStack_a8;
  byte ****ppppbStack_a0;
  undefined8 uStack_98;
  byte ****ppppbStack_88;
  byte ****ppppbStack_80;
  undefined8 uStack_78;
  undefined8 uStack_60;
  
  uVar19 = _UNK_14329c338;
  ppppbVar7 = _DAT_14329c330;
  uStack_60 = 0xfffffffffffffffe;
  ppppbVar3 = *(byte *****)(param_1 + 8);
  ppppbStack_80 = _DAT_14329c330;
  uStack_78 = _UNK_14329c338;
  ppppbStack_88 = param_2;
  ppppbStack_80 = (byte ****)pdb_1400affa0(&ppppbStack_88);
  ppppbStack_88 = ppppbVar3;
  uVar14 = pdb_1400b0130(&ppppbStack_88);
  pdb_14072caa0(&pppppbStack_a8,param_1,uVar14);
  pdb_141174160(&ppppbStack_88,&pppppbStack_a8,&UNK_1436096f9,0x12,0);
  pdb_141186520(auStack_120,&ppppbStack_88,&UNK_14360970b,7);
  ppppbVar3 = ppppbStack_118;
  ppppbStack_88 = (byte ****)0x0;
  ppppbStack_80 = ppppbVar7;
  uStack_78 = uVar19;
  ppppbStack_80 = (byte ****)pdb_1400affa0(&ppppbStack_88);
  ppppbStack_88 = ppppbVar3;
  uVar14 = pdb_1400b0130(&ppppbStack_88);
  pdb_14072caa0(&ppppbStack_88,auStack_120,uVar14);
  ppppbVar3 = ppppbStack_88;
  if ((byte ****)ppppbStack_88[0x39] != (byte ****)0x0) {
    uVar15 = pdb_1400af0a0(ppppbStack_88 + 0x3a,&ppppbStack_80);
    ppppbVar4 = (byte ****)ppppbVar3[0x36];
    ppppbVar3 = (byte ****)ppppbVar3[0x37];
    bVar25 = (byte)(uVar15 >> 0x39);
    auVar26 = ZEXT216(CONCAT11(bVar25,bVar25));
    auVar26 = pshuflw(auVar26,auVar26,0);
    lVar21 = 0;
    while( true ) {
      uVar15 = uVar15 & (ulonglong)ppppbVar3;
      auVar34 = *(undefined1 (*) [16])((longlong)ppppbVar4 + uVar15);
      auVar33[0] = -(auVar34[0] == auVar26[0]);
      auVar33[1] = -(auVar34[1] == auVar26[1]);
      auVar33[2] = -(auVar34[2] == auVar26[2]);
      auVar33[3] = -(auVar34[3] == auVar26[3]);
      auVar33[4] = -(auVar34[4] == auVar26[4]);
      auVar33[5] = -(auVar34[5] == auVar26[5]);
      auVar33[6] = -(auVar34[6] == auVar26[6]);
      auVar33[7] = -(auVar34[7] == auVar26[7]);
      auVar33[8] = -(auVar34[8] == auVar26[0]);
      auVar33[9] = -(auVar34[9] == auVar26[1]);
      auVar33[10] = -(auVar34[10] == auVar26[2]);
      auVar33[0xb] = -(auVar34[0xb] == auVar26[3]);
      auVar33[0xc] = -(auVar34[0xc] == auVar26[4]);
      auVar33[0xd] = -(auVar34[0xd] == auVar26[5]);
      auVar33[0xe] = -(auVar34[0xe] == auVar26[6]);
      auVar33[0xf] = -(auVar34[0xf] == auVar26[7]);
      uVar23 = (ushort)(SUB161(auVar33 >> 7,0) & 1) | (ushort)(SUB161(auVar33 >> 0xf,0) & 1) << 1 |
               (ushort)(SUB161(auVar33 >> 0x17,0) & 1) << 2 |
               (ushort)(SUB161(auVar33 >> 0x1f,0) & 1) << 3 |
               (ushort)(SUB161(auVar33 >> 0x27,0) & 1) << 4 |
               (ushort)(SUB161(auVar33 >> 0x2f,0) & 1) << 5 |
               (ushort)(SUB161(auVar33 >> 0x37,0) & 1) << 6 |
               (ushort)(SUB161(auVar33 >> 0x3f,0) & 1) << 7 |
               (ushort)(SUB161(auVar33 >> 0x47,0) & 1) << 8 |
               (ushort)(SUB161(auVar33 >> 0x4f,0) & 1) << 9 |
               (ushort)(SUB161(auVar33 >> 0x57,0) & 1) << 10 |
               (ushort)(SUB161(auVar33 >> 0x5f,0) & 1) << 0xb |
               (ushort)(SUB161(auVar33 >> 0x67,0) & 1) << 0xc |
               (ushort)(SUB161(auVar33 >> 0x6f,0) & 1) << 0xd |
               (ushort)(SUB161(auVar33 >> 0x77,0) & 1) << 0xe | (ushort)(auVar33[0xf] >> 7) << 0xf;
      uVar22 = (uint)uVar23;
      while (uVar23 != 0) {
        uVar12 = 0;
        for (uVar13 = uVar22; (uVar13 & 1) == 0; uVar13 = uVar13 >> 1 | 0x80000000) {
          uVar12 = uVar12 + 1;
        }
        uVar24 = uVar12 + uVar15 & (ulonglong)ppppbVar3;
        if (ppppbStack_80 == (byte ****)ppppbVar4[uVar24 * -0x1b + -0x1b]) {
          *(undefined1 (*) [16])(ppppbVar4 + uVar24 * -0x1b + -0x11) = (undefined1  [16])0x0;
          *(undefined1 (*) [16])(ppppbVar4 + uVar24 * -0x1b + -0x13) = (undefined1  [16])0x0;
          *(undefined1 (*) [16])(ppppbVar4 + uVar24 * -0x1b + -0x15) = (undefined1  [16])0x0;
          *(undefined1 (*) [16])(ppppbVar4 + uVar24 * -0x1b + -0x17) = (undefined1  [16])0x0;
          ppppbVar4[uVar24 * -0x1b + -0xf] = (byte ***)0x400000100000000;
          uStack_f8 = uStack_78;
          ppppbStack_108 = ppppbStack_88;
          ppppbStack_100 = ppppbStack_80;
          pdb_140737280(&pppppbStack_a8,param_3,param_4);
          uVar17 = uStack_98;
          ppppbStack_b0 = ppppbStack_a0;
          ppppbStack_e8 = ppppbStack_a0;
          ppppbStack_e0 = (byte ****)uStack_98;
          ppppbStack_88 = (byte ****)pdb_140bbbcb0(&ppppbStack_e8);
          uVar14 = _UNK_14329c268;
          ppppbVar3 = _DAT_14329c260;
          ppppbStack_80 = _DAT_14329c260;
          uStack_78 = _UNK_14329c268;
          ppppbStack_80 = (byte ****)pdb_1400affa0(&ppppbStack_88);
          ppppbStack_88 = ppppbStack_100;
          uVar16 = pdb_1400b0130(&ppppbStack_88);
          pdb_14072caa0(&ppppbStack_88,&ppppbStack_108,uVar16);
          uVar16 = pdb_14116ee90(&ppppbStack_88,0);
          pdb_14119b6b0(uVar16,ppppbStack_b0,uVar17);
          uStack_b8 = uStack_78;
          pppppbStack_c8 = (byte *****)ppppbStack_88;
          pppbStack_c0 = (byte ***)ppppbStack_80;
          uVar17 = pdb_14116e180(&pppppbStack_c8);
          pdb_14119b2b0(uVar17,_DAT_1434da1b0);
          uStack_78 = uStack_b8;
          ppppbStack_88 = (byte ****)pppppbStack_c8;
          ppppbStack_80 = (byte ****)pppbStack_c0;
          uVar17 = pdb_14116e180(&ppppbStack_88);
          pdb_140cb5df0(uVar17);
          ppppbVar4 = ppppbStack_88;
          pppppbStack_c8 = (byte *****)ppppbStack_88;
          pppbStack_c0 = (byte ***)ppppbStack_80;
          uStack_b8 = uStack_78;
          if ((byte ****)ppppbStack_88[0x39] == (byte ****)0x0) goto LAB_142991528;
          uVar15 = pdb_1400af0a0(ppppbStack_88 + 0x3a,&pppbStack_c0);
          ppppbVar5 = (byte ****)ppppbVar4[0x36];
          ppppbVar4 = (byte ****)ppppbVar4[0x37];
          bVar25 = (byte)(uVar15 >> 0x39);
          auVar26 = ZEXT216(CONCAT11(bVar25,bVar25));
          auVar26 = pshuflw(auVar26,auVar26,0);
          lVar21 = 0;
          goto LAB_142991319;
        }
        uVar23 = (ushort)(uVar22 - 1) & (ushort)uVar22;
        uVar22 = CONCAT22((short)(uVar22 - 1 >> 0x10),uVar23);
      }
      auVar27[0] = -(auVar34[0] == -1);
      auVar27[1] = -(auVar34[1] == -1);
      auVar27[2] = -(auVar34[2] == -1);
      auVar27[3] = -(auVar34[3] == -1);
      auVar27[4] = -(auVar34[4] == -1);
      auVar27[5] = -(auVar34[5] == -1);
      auVar27[6] = -(auVar34[6] == -1);
      auVar27[7] = -(auVar34[7] == -1);
      auVar27[8] = -(auVar34[8] == -1);
      auVar27[9] = -(auVar34[9] == -1);
      auVar27[10] = -(auVar34[10] == -1);
      auVar27[0xb] = -(auVar34[0xb] == -1);
      auVar27[0xc] = -(auVar34[0xc] == -1);
      auVar27[0xd] = -(auVar34[0xd] == -1);
      auVar27[0xe] = -(auVar34[0xe] == -1);
      auVar27[0xf] = -(auVar34[0xf] == -1);
      if ((((((((((((((((SUB161(auVar27 >> 7,0) & 1) != 0 || (SUB161(auVar27 >> 0xf,0) & 1) != 0) ||
                      (SUB161(auVar27 >> 0x17,0) & 1) != 0) || (SUB161(auVar27 >> 0x1f,0) & 1) != 0)
                    || (SUB161(auVar27 >> 0x27,0) & 1) != 0) || (SUB161(auVar27 >> 0x2f,0) & 1) != 0
                   ) || (SUB161(auVar27 >> 0x37,0) & 1) != 0) ||
                 (SUB161(auVar27 >> 0x3f,0) & 1) != 0) || (SUB161(auVar27 >> 0x47,0) & 1) != 0) ||
               (SUB161(auVar27 >> 0x4f,0) & 1) != 0) || (SUB161(auVar27 >> 0x57,0) & 1) != 0) ||
             (SUB161(auVar27 >> 0x5f,0) & 1) != 0) || (SUB161(auVar27 >> 0x67,0) & 1) != 0) ||
           (SUB161(auVar27 >> 0x6f,0) & 1) != 0) || (SUB161(auVar27 >> 0x77,0) & 1) != 0) ||
          auVar27[0xf] < '\0') break;
      uVar15 = uVar15 + lVar21 + 0x10;
      lVar21 = lVar21 + 0x10;
    }
  }
LAB_142991649:
                    /* WARNING: Subroutine does not return */
  pdb_142dc8150(&UNK_142fa6b30);
LAB_142991319:
  uVar15 = uVar15 & (ulonglong)ppppbVar4;
  pcVar2 = (char *)((longlong)ppppbVar5 + uVar15);
  auVar34[0] = -(*pcVar2 == auVar26[0]);
  auVar34[1] = -(pcVar2[1] == auVar26[1]);
  auVar34[2] = -(pcVar2[2] == auVar26[2]);
  auVar34[3] = -(pcVar2[3] == auVar26[3]);
  auVar34[4] = -(pcVar2[4] == auVar26[4]);
  auVar34[5] = -(pcVar2[5] == auVar26[5]);
  auVar34[6] = -(pcVar2[6] == auVar26[6]);
  auVar34[7] = -(pcVar2[7] == auVar26[7]);
  auVar34[8] = -(pcVar2[8] == auVar26[0]);
  auVar34[9] = -(pcVar2[9] == auVar26[1]);
  auVar34[10] = -(pcVar2[10] == auVar26[2]);
  auVar34[0xb] = -(pcVar2[0xb] == auVar26[3]);
  auVar34[0xc] = -(pcVar2[0xc] == auVar26[4]);
  auVar34[0xd] = -(pcVar2[0xd] == auVar26[5]);
  auVar34[0xe] = -(pcVar2[0xe] == auVar26[6]);
  auVar34[0xf] = -(pcVar2[0xf] == auVar26[7]);
  uVar23 = (ushort)(SUB161(auVar34 >> 7,0) & 1) | (ushort)(SUB161(auVar34 >> 0xf,0) & 1) << 1 |
           (ushort)(SUB161(auVar34 >> 0x17,0) & 1) << 2 |
           (ushort)(SUB161(auVar34 >> 0x1f,0) & 1) << 3 |
           (ushort)(SUB161(auVar34 >> 0x27,0) & 1) << 4 |
           (ushort)(SUB161(auVar34 >> 0x2f,0) & 1) << 5 |
           (ushort)(SUB161(auVar34 >> 0x37,0) & 1) << 6 |
           (ushort)(SUB161(auVar34 >> 0x3f,0) & 1) << 7 |
           (ushort)(SUB161(auVar34 >> 0x47,0) & 1) << 8 |
           (ushort)(SUB161(auVar34 >> 0x4f,0) & 1) << 9 |
           (ushort)(SUB161(auVar34 >> 0x57,0) & 1) << 10 |
           (ushort)(SUB161(auVar34 >> 0x5f,0) & 1) << 0xb |
           (ushort)(SUB161(auVar34 >> 0x67,0) & 1) << 0xc |
           (ushort)(SUB161(auVar34 >> 0x6f,0) & 1) << 0xd |
           (ushort)(SUB161(auVar34 >> 0x77,0) & 1) << 0xe | (ushort)(auVar34[0xf] >> 7) << 0xf;
  uVar22 = (uint)uVar23;
  while (uVar23 != 0) {
    uVar12 = 0;
    for (uVar13 = uVar22; (uVar13 & 1) == 0; uVar13 = uVar13 >> 1 | 0x80000000) {
      uVar12 = uVar12 + 1;
    }
    uVar24 = uVar12 + uVar15 & (ulonglong)ppppbVar4;
    if (pppbStack_c0 == ppppbVar5[uVar24 * -0x1b + -0x1b]) {
      pbVar1 = (byte *)((longlong)ppppbVar5 + uVar24 * -0xd8 + -5);
      *pbVar1 = *pbVar1 | 2;
      if (pppppbStack_a8 != (byte *****)0x0) {
        pub_1406abac0((byte *)ppppbStack_b0,(ulonglong)pppppbStack_a8,1);
      }
      pppppbVar6 = (byte *****)*param_5;
      if (pppppbVar6 == (byte *****)0x0) goto LAB_142991541;
      ppppbVar4 = (byte ****)param_5[1];
      lVar21 = param_5[2];
      pppppbStack_c8 = pppppbVar6;
      pppbStack_c0 = (byte ***)ppppbVar4;
      ppppbStack_88 = (byte ****)pdb_140bbbcb0(&pppppbStack_c8);
      ppppbStack_80 = ppppbVar3;
      uStack_78 = uVar14;
      ppppbStack_80 = (byte ****)pdb_1400affa0(&ppppbStack_88);
      ppppbStack_88 = ppppbStack_100;
      uVar14 = pdb_1400b0130(&ppppbStack_88);
      pdb_14072caa0(&ppppbStack_88,&ppppbStack_108,uVar14);
      uVar14 = pdb_14116ee90(&ppppbStack_88,0);
      pdb_14119b6b0(uVar14,pppppbVar6,ppppbVar4);
      uStack_98 = uStack_78;
      pppppbStack_a8 = (byte *****)ppppbStack_88;
      ppppbStack_a0 = ppppbStack_80;
      uVar14 = pdb_14116e180(&pppppbStack_a8);
      pdb_14119b2b0(uVar14);
      uStack_78 = uStack_98;
      ppppbStack_88 = (byte ****)pppppbStack_a8;
      ppppbStack_80 = ppppbStack_a0;
      lVar18 = pdb_14116e180(&ppppbStack_88);
      ppppbVar3 = ppppbStack_88;
      *(int *)(lVar18 + 600) = (int)lVar21;
      pppppbStack_a8 = (byte *****)ppppbStack_88;
      ppppbStack_a0 = ppppbStack_80;
      uStack_98 = uStack_78;
      if ((byte ****)ppppbStack_88[0x39] == (byte ****)0x0) goto LAB_14299194a;
      uVar15 = pdb_1400af0a0(ppppbStack_88 + 0x3a,&ppppbStack_a0);
      ppppbVar4 = (byte ****)ppppbVar3[0x36];
      ppppbVar3 = (byte ****)ppppbVar3[0x37];
      bVar25 = (byte)(uVar15 >> 0x39);
      auVar26 = ZEXT216(CONCAT11(bVar25,bVar25));
      auVar26 = pshuflw(auVar26,auVar26,0);
      lVar21 = 0;
      goto LAB_1429914c3;
    }
    uVar23 = (ushort)(uVar22 - 1) & (ushort)uVar22;
    uVar22 = CONCAT22((short)(uVar22 - 1 >> 0x10),uVar23);
  }
  auVar28[0] = -(*pcVar2 == -1);
  auVar28[1] = -(pcVar2[1] == -1);
  auVar28[2] = -(pcVar2[2] == -1);
  auVar28[3] = -(pcVar2[3] == -1);
  auVar28[4] = -(pcVar2[4] == -1);
  auVar28[5] = -(pcVar2[5] == -1);
  auVar28[6] = -(pcVar2[6] == -1);
  auVar28[7] = -(pcVar2[7] == -1);
  auVar28[8] = -(pcVar2[8] == -1);
  auVar28[9] = -(pcVar2[9] == -1);
  auVar28[10] = -(pcVar2[10] == -1);
  auVar28[0xb] = -(pcVar2[0xb] == -1);
  auVar28[0xc] = -(pcVar2[0xc] == -1);
  auVar28[0xd] = -(pcVar2[0xd] == -1);
  auVar28[0xe] = -(pcVar2[0xe] == -1);
  auVar28[0xf] = -(pcVar2[0xf] == -1);
  if ((((((((((((((((SUB161(auVar28 >> 7,0) & 1) != 0 || (SUB161(auVar28 >> 0xf,0) & 1) != 0) ||
                  (SUB161(auVar28 >> 0x17,0) & 1) != 0) || (SUB161(auVar28 >> 0x1f,0) & 1) != 0) ||
                (SUB161(auVar28 >> 0x27,0) & 1) != 0) || (SUB161(auVar28 >> 0x2f,0) & 1) != 0) ||
              (SUB161(auVar28 >> 0x37,0) & 1) != 0) || (SUB161(auVar28 >> 0x3f,0) & 1) != 0) ||
            (SUB161(auVar28 >> 0x47,0) & 1) != 0) || (SUB161(auVar28 >> 0x4f,0) & 1) != 0) ||
          (SUB161(auVar28 >> 0x57,0) & 1) != 0) || (SUB161(auVar28 >> 0x5f,0) & 1) != 0) ||
        (SUB161(auVar28 >> 0x67,0) & 1) != 0) || (SUB161(auVar28 >> 0x6f,0) & 1) != 0) ||
      (SUB161(auVar28 >> 0x77,0) & 1) != 0) || auVar28[0xf] < '\0') {
LAB_142991528:
                    /* WARNING: Subroutine does not return */
    pdb_142dc8150(&UNK_142fa6b48);
  }
  uVar15 = uVar15 + lVar21 + 0x10;
  lVar21 = lVar21 + 0x10;
  goto LAB_142991319;
LAB_1429914c3:
  uVar15 = uVar15 & (ulonglong)ppppbVar3;
  pcVar2 = (char *)((longlong)ppppbVar4 + uVar15);
  auVar35[0] = -(*pcVar2 == auVar26[0]);
  auVar35[1] = -(pcVar2[1] == auVar26[1]);
  auVar35[2] = -(pcVar2[2] == auVar26[2]);
  auVar35[3] = -(pcVar2[3] == auVar26[3]);
  auVar35[4] = -(pcVar2[4] == auVar26[4]);
  auVar35[5] = -(pcVar2[5] == auVar26[5]);
  auVar35[6] = -(pcVar2[6] == auVar26[6]);
  auVar35[7] = -(pcVar2[7] == auVar26[7]);
  auVar35[8] = -(pcVar2[8] == auVar26[0]);
  auVar35[9] = -(pcVar2[9] == auVar26[1]);
  auVar35[10] = -(pcVar2[10] == auVar26[2]);
  auVar35[0xb] = -(pcVar2[0xb] == auVar26[3]);
  auVar35[0xc] = -(pcVar2[0xc] == auVar26[4]);
  auVar35[0xd] = -(pcVar2[0xd] == auVar26[5]);
  auVar35[0xe] = -(pcVar2[0xe] == auVar26[6]);
  auVar35[0xf] = -(pcVar2[0xf] == auVar26[7]);
  uVar23 = (ushort)(SUB161(auVar35 >> 7,0) & 1) | (ushort)(SUB161(auVar35 >> 0xf,0) & 1) << 1 |
           (ushort)(SUB161(auVar35 >> 0x17,0) & 1) << 2 |
           (ushort)(SUB161(auVar35 >> 0x1f,0) & 1) << 3 |
           (ushort)(SUB161(auVar35 >> 0x27,0) & 1) << 4 |
           (ushort)(SUB161(auVar35 >> 0x2f,0) & 1) << 5 |
           (ushort)(SUB161(auVar35 >> 0x37,0) & 1) << 6 |
           (ushort)(SUB161(auVar35 >> 0x3f,0) & 1) << 7 |
           (ushort)(SUB161(auVar35 >> 0x47,0) & 1) << 8 |
           (ushort)(SUB161(auVar35 >> 0x4f,0) & 1) << 9 |
           (ushort)(SUB161(auVar35 >> 0x57,0) & 1) << 10 |
           (ushort)(SUB161(auVar35 >> 0x5f,0) & 1) << 0xb |
           (ushort)(SUB161(auVar35 >> 0x67,0) & 1) << 0xc |
           (ushort)(SUB161(auVar35 >> 0x6f,0) & 1) << 0xd |
           (ushort)(SUB161(auVar35 >> 0x77,0) & 1) << 0xe | (ushort)(auVar35[0xf] >> 7) << 0xf;
  uVar22 = (uint)uVar23;
  while (uVar23 != 0) {
    uVar12 = 0;
    for (uVar13 = uVar22; (uVar13 & 1) == 0; uVar13 = uVar13 >> 1 | 0x80000000) {
      uVar12 = uVar12 + 1;
    }
    uVar24 = uVar12 + uVar15 & (ulonglong)ppppbVar3;
    if (ppppbStack_a0 == (byte ****)ppppbVar4[uVar24 * -0x1b + -0x1b]) {
      pbVar1 = (byte *)((longlong)ppppbVar4 + uVar24 * -0xd8 + -5);
      *pbVar1 = *pbVar1 | 2;
LAB_142991541:
      pppppbStack_a8 = (byte *****)&UNK_143609712;
      ppppbStack_a0 = (byte ****)0x7;
      ppppbStack_88 = (byte ****)pdb_140bbbcb0(&pppppbStack_a8);
      ppppbStack_80 = ppppbVar7;
      uStack_78 = uVar19;
      ppppbStack_80 = (byte ****)pdb_1400affa0(&ppppbStack_88);
      ppppbStack_88 = ppppbStack_118;
      uVar19 = pdb_1400b0130(&ppppbStack_88);
      pdb_14072caa0(&ppppbStack_88,auStack_120,uVar19);
      ppppbVar3 = ppppbStack_88;
      if ((byte ****)ppppbStack_88[0x39] != (byte ****)0x0) {
        uVar15 = pdb_1400af0a0(ppppbStack_88 + 0x3a,&ppppbStack_80);
        ppppbVar7 = (byte ****)ppppbVar3[0x36];
        ppppbVar3 = (byte ****)ppppbVar3[0x37];
        bVar25 = (byte)(uVar15 >> 0x39);
        auVar26 = ZEXT216(CONCAT11(bVar25,bVar25));
        auVar26 = pshuflw(auVar26,auVar26,0);
        lVar21 = 0;
        while( true ) {
          uVar15 = uVar15 & (ulonglong)ppppbVar3;
          auVar34 = *(undefined1 (*) [16])((longlong)ppppbVar7 + uVar15);
          auVar36[0] = -(auVar34[0] == auVar26[0]);
          auVar36[1] = -(auVar34[1] == auVar26[1]);
          auVar36[2] = -(auVar34[2] == auVar26[2]);
          auVar36[3] = -(auVar34[3] == auVar26[3]);
          auVar36[4] = -(auVar34[4] == auVar26[4]);
          auVar36[5] = -(auVar34[5] == auVar26[5]);
          auVar36[6] = -(auVar34[6] == auVar26[6]);
          auVar36[7] = -(auVar34[7] == auVar26[7]);
          auVar36[8] = -(auVar34[8] == auVar26[0]);
          auVar36[9] = -(auVar34[9] == auVar26[1]);
          auVar36[10] = -(auVar34[10] == auVar26[2]);
          auVar36[0xb] = -(auVar34[0xb] == auVar26[3]);
          auVar36[0xc] = -(auVar34[0xc] == auVar26[4]);
          auVar36[0xd] = -(auVar34[0xd] == auVar26[5]);
          auVar36[0xe] = -(auVar34[0xe] == auVar26[6]);
          auVar36[0xf] = -(auVar34[0xf] == auVar26[7]);
          uVar23 = (ushort)(SUB161(auVar36 >> 7,0) & 1) |
                   (ushort)(SUB161(auVar36 >> 0xf,0) & 1) << 1 |
                   (ushort)(SUB161(auVar36 >> 0x17,0) & 1) << 2 |
                   (ushort)(SUB161(auVar36 >> 0x1f,0) & 1) << 3 |
                   (ushort)(SUB161(auVar36 >> 0x27,0) & 1) << 4 |
                   (ushort)(SUB161(auVar36 >> 0x2f,0) & 1) << 5 |
                   (ushort)(SUB161(auVar36 >> 0x37,0) & 1) << 6 |
                   (ushort)(SUB161(auVar36 >> 0x3f,0) & 1) << 7 |
                   (ushort)(SUB161(auVar36 >> 0x47,0) & 1) << 8 |
                   (ushort)(SUB161(auVar36 >> 0x4f,0) & 1) << 9 |
                   (ushort)(SUB161(auVar36 >> 0x57,0) & 1) << 10 |
                   (ushort)(SUB161(auVar36 >> 0x5f,0) & 1) << 0xb |
                   (ushort)(SUB161(auVar36 >> 0x67,0) & 1) << 0xc |
                   (ushort)(SUB161(auVar36 >> 0x6f,0) & 1) << 0xd |
                   (ushort)(SUB161(auVar36 >> 0x77,0) & 1) << 0xe |
                   (ushort)(auVar36[0xf] >> 7) << 0xf;
          uVar22 = (uint)uVar23;
          while (uVar23 != 0) {
            uVar12 = 0;
            for (uVar13 = uVar22; (uVar13 & 1) == 0; uVar13 = uVar13 >> 1 | 0x80000000) {
              uVar12 = uVar12 + 1;
            }
            uVar24 = uVar12 + uVar15 & (ulonglong)ppppbVar3;
            if (ppppbStack_80 == (byte ****)ppppbVar7[uVar24 * -0x1b + -0x1b]) {
              *(undefined1 (*) [16])(ppppbVar7 + uVar24 * -0x1b + -0x11) = (undefined1  [16])0x0;
              *(undefined1 (*) [16])(ppppbVar7 + uVar24 * -0x1b + -0x13) = (undefined1  [16])0x0;
              *(undefined1 (*) [16])(ppppbVar7 + uVar24 * -0x1b + -0x15) = (undefined1  [16])0x0;
              *(undefined1 (*) [16])(ppppbVar7 + uVar24 * -0x1b + -0x17) = (undefined1  [16])0x0;
              ppppbVar7[uVar24 * -0x1b + -0xf] = (byte ***)0x403000100000000;
              uStack_d8 = uStack_78;
              ppppbStack_e8 = ppppbStack_88;
              ppppbStack_e0 = ppppbStack_80;
              uVar19 = *param_6;
              lVar21 = param_6[1];
              plVar8 = (longlong *)param_6[2];
              pppbVar20 = (byte ***)0x16;
              pppppbStack_c8 = (byte *****)pdb_140dc6290(&UNK_143609668);
              ppppbStack_a0 = (byte ****)pdb_1402ed400;
              pppbStack_c0 = pppbVar20;
              pppppbStack_a8 = (byte *****)&pppppbStack_c8;
              pdb_140f60760(&ppppbStack_88,&UNK_14360967e,&pppppbStack_a8);
              ppppbStack_b0 = ppppbStack_80;
              pdb_1407339e0(&pppppbStack_a8,&ppppbStack_e8);
              uVar14 = pdb_14116dd60(&pppppbStack_a8);
              pdb_14119b2b0(uVar14);
              pppppbVar6 = pppppbStack_a8;
              pppppbStack_c8 = pppppbStack_a8;
              pppbStack_c0 = (byte ***)ppppbStack_a0;
              uStack_b8 = uStack_98;
              if ((byte *****)pppppbStack_a8[0x39] != (byte *****)0x0) {
                uVar15 = pdb_1400af0a0(pppppbStack_a8 + 0x3a,&pppbStack_c0);
                pppppbVar9 = (byte *****)pppppbVar6[0x36];
                pppppbVar6 = (byte *****)pppppbVar6[0x37];
                bVar25 = (byte)(uVar15 >> 0x39);
                auVar26 = ZEXT216(CONCAT11(bVar25,bVar25));
                auVar26 = pshuflw(auVar26,auVar26,0);
                lVar18 = 0;
                while( true ) {
                  uVar15 = uVar15 & (ulonglong)pppppbVar6;
                  pcVar2 = (char *)((longlong)pppppbVar9 + uVar15);
                  auVar37[0] = -(*pcVar2 == auVar26[0]);
                  auVar37[1] = -(pcVar2[1] == auVar26[1]);
                  auVar37[2] = -(pcVar2[2] == auVar26[2]);
                  auVar37[3] = -(pcVar2[3] == auVar26[3]);
                  auVar37[4] = -(pcVar2[4] == auVar26[4]);
                  auVar37[5] = -(pcVar2[5] == auVar26[5]);
                  auVar37[6] = -(pcVar2[6] == auVar26[6]);
                  auVar37[7] = -(pcVar2[7] == auVar26[7]);
                  auVar37[8] = -(pcVar2[8] == auVar26[0]);
                  auVar37[9] = -(pcVar2[9] == auVar26[1]);
                  auVar37[10] = -(pcVar2[10] == auVar26[2]);
                  auVar37[0xb] = -(pcVar2[0xb] == auVar26[3]);
                  auVar37[0xc] = -(pcVar2[0xc] == auVar26[4]);
                  auVar37[0xd] = -(pcVar2[0xd] == auVar26[5]);
                  auVar37[0xe] = -(pcVar2[0xe] == auVar26[6]);
                  auVar37[0xf] = -(pcVar2[0xf] == auVar26[7]);
                  uVar23 = (ushort)(SUB161(auVar37 >> 7,0) & 1) |
                           (ushort)(SUB161(auVar37 >> 0xf,0) & 1) << 1 |
                           (ushort)(SUB161(auVar37 >> 0x17,0) & 1) << 2 |
                           (ushort)(SUB161(auVar37 >> 0x1f,0) & 1) << 3 |
                           (ushort)(SUB161(auVar37 >> 0x27,0) & 1) << 4 |
                           (ushort)(SUB161(auVar37 >> 0x2f,0) & 1) << 5 |
                           (ushort)(SUB161(auVar37 >> 0x37,0) & 1) << 6 |
                           (ushort)(SUB161(auVar37 >> 0x3f,0) & 1) << 7 |
                           (ushort)(SUB161(auVar37 >> 0x47,0) & 1) << 8 |
                           (ushort)(SUB161(auVar37 >> 0x4f,0) & 1) << 9 |
                           (ushort)(SUB161(auVar37 >> 0x57,0) & 1) << 10 |
                           (ushort)(SUB161(auVar37 >> 0x5f,0) & 1) << 0xb |
                           (ushort)(SUB161(auVar37 >> 0x67,0) & 1) << 0xc |
                           (ushort)(SUB161(auVar37 >> 0x6f,0) & 1) << 0xd |
                           (ushort)(SUB161(auVar37 >> 0x77,0) & 1) << 0xe |
                           (ushort)(auVar37[0xf] >> 7) << 0xf;
                  uVar22 = (uint)uVar23;
                  while (uVar23 != 0) {
                    uVar12 = 0;
                    for (uVar13 = uVar22; (uVar13 & 1) == 0; uVar13 = uVar13 >> 1 | 0x80000000) {
                      uVar12 = uVar12 + 1;
                    }
                    uVar24 = uVar12 + uVar15 & (ulonglong)pppppbVar6;
                    if ((byte ****)pppbStack_c0 == pppppbVar9[uVar24 * -0x1b + -0x1b]) {
                      bVar25 = *(byte *)((longlong)pppppbVar9 + uVar24 * -0xd8 + -6);
                      if ((byte *****)ppppbStack_88 != (byte *****)0x0) {
                        pub_1406abac0((byte *)ppppbStack_b0,(ulonglong)ppppbStack_88,1);
                      }
                      if ((bVar25 & 0x30) != 0) {
                        pppppbStack_a8 = (byte *****)(lVar21 + 0x18);
                        ppppbStack_a0 = (byte ****)pdb_140c91ab0;
                        pdb_140f60760(&ppppbStack_88,&UNK_143609685,&pppppbStack_a8);
                        pdb_1422d1a80(uVar19,&ppppbStack_88);
                      }
                      uVar14 = 0x15;
                      uVar19 = pdb_140dc6290(&UNK_1436096e4,0x15);
                      pdb_1407339e0(&ppppbStack_88,&ppppbStack_e8,uVar19,uVar14);
                      uVar19 = pdb_14116dd60(&ppppbStack_88);
                      pdb_14119b2b0(uVar19);
                      ppppbVar3 = ppppbStack_88;
                      pppppbStack_a8 = (byte *****)ppppbStack_88;
                      ppppbStack_a0 = ppppbStack_80;
                      uStack_98 = uStack_78;
                      if ((byte ****)ppppbStack_88[0x39] != (byte ****)0x0) {
                        uVar15 = pdb_1400af0a0(ppppbStack_88 + 0x3a,&ppppbStack_a0);
                        ppppbVar7 = (byte ****)ppppbVar3[0x36];
                        ppppbVar3 = (byte ****)ppppbVar3[0x37];
                        bVar25 = (byte)(uVar15 >> 0x39);
                        auVar26 = ZEXT216(CONCAT11(bVar25,bVar25));
                        auVar26 = pshuflw(auVar26,auVar26,0);
                        lVar18 = 0;
                        while( true ) {
                          uVar15 = uVar15 & (ulonglong)ppppbVar3;
                          auVar34 = *(undefined1 (*) [16])((longlong)ppppbVar7 + uVar15);
                          auVar38[0] = -(auVar34[0] == auVar26[0]);
                          auVar38[1] = -(auVar34[1] == auVar26[1]);
                          auVar38[2] = -(auVar34[2] == auVar26[2]);
                          auVar38[3] = -(auVar34[3] == auVar26[3]);
                          auVar38[4] = -(auVar34[4] == auVar26[4]);
                          auVar38[5] = -(auVar34[5] == auVar26[5]);
                          auVar38[6] = -(auVar34[6] == auVar26[6]);
                          auVar38[7] = -(auVar34[7] == auVar26[7]);
                          auVar38[8] = -(auVar34[8] == auVar26[0]);
                          auVar38[9] = -(auVar34[9] == auVar26[1]);
                          auVar38[10] = -(auVar34[10] == auVar26[2]);
                          auVar38[0xb] = -(auVar34[0xb] == auVar26[3]);
                          auVar38[0xc] = -(auVar34[0xc] == auVar26[4]);
                          auVar38[0xd] = -(auVar34[0xd] == auVar26[5]);
                          auVar38[0xe] = -(auVar34[0xe] == auVar26[6]);
                          auVar38[0xf] = -(auVar34[0xf] == auVar26[7]);
                          uVar23 = (ushort)(SUB161(auVar38 >> 7,0) & 1) |
                                   (ushort)(SUB161(auVar38 >> 0xf,0) & 1) << 1 |
                                   (ushort)(SUB161(auVar38 >> 0x17,0) & 1) << 2 |
                                   (ushort)(SUB161(auVar38 >> 0x1f,0) & 1) << 3 |
                                   (ushort)(SUB161(auVar38 >> 0x27,0) & 1) << 4 |
                                   (ushort)(SUB161(auVar38 >> 0x2f,0) & 1) << 5 |
                                   (ushort)(SUB161(auVar38 >> 0x37,0) & 1) << 6 |
                                   (ushort)(SUB161(auVar38 >> 0x3f,0) & 1) << 7 |
                                   (ushort)(SUB161(auVar38 >> 0x47,0) & 1) << 8 |
                                   (ushort)(SUB161(auVar38 >> 0x4f,0) & 1) << 9 |
                                   (ushort)(SUB161(auVar38 >> 0x57,0) & 1) << 10 |
                                   (ushort)(SUB161(auVar38 >> 0x5f,0) & 1) << 0xb |
                                   (ushort)(SUB161(auVar38 >> 0x67,0) & 1) << 0xc |
                                   (ushort)(SUB161(auVar38 >> 0x6f,0) & 1) << 0xd |
                                   (ushort)(SUB161(auVar38 >> 0x77,0) & 1) << 0xe |
                                   (ushort)(auVar38[0xf] >> 7) << 0xf;
                          uVar22 = (uint)uVar23;
                          while (uVar23 != 0) {
                            uVar12 = 0;
                            for (uVar13 = uVar22; (uVar13 & 1) == 0;
                                uVar13 = uVar13 >> 1 | 0x80000000) {
                              uVar12 = uVar12 + 1;
                            }
                            uVar24 = uVar12 + uVar15 & (ulonglong)ppppbVar3;
                            if (ppppbStack_a0 == (byte ****)ppppbVar7[uVar24 * -0x1b + -0x1b]) {
                              if ((*(byte *)((longlong)ppppbVar7 + uVar24 * -0xd8 + -6) & 0x30) != 0
                                 ) {
                                uVar19 = *(undefined8 *)(lVar21 + 0x18);
                                *(undefined4 *)plVar8[2] = *(undefined4 *)((longlong)plVar8 + 0x1c);
                                lVar21 = *plVar8;
                                lVar18 = *(longlong *)(lVar21 + 0x30);
                                uVar14 = *(undefined8 *)(lVar21 + 0x40);
                                if (lVar18 == *(longlong *)(lVar21 + 0x20)) {
                                  pdb_142d7e980(lVar21 + 0x20);
                                }
                                lVar10 = *(longlong *)(lVar21 + 0x28);
                                *(undefined8 *)(lVar10 + lVar18 * 0x10) = uVar14;
                                *(undefined8 *)(lVar10 + 8 + lVar18 * 0x10) = uVar19;
                                *(longlong *)(lVar21 + 0x30) = lVar18 + 1;
                                *(longlong *)(lVar21 + 0x40) = *(longlong *)(lVar21 + 0x40) + 1;
                              }
                              return;
                            }
                            uVar23 = (ushort)(uVar22 - 1) & (ushort)uVar22;
                            uVar22 = CONCAT22((short)(uVar22 - 1 >> 0x10),uVar23);
                          }
                          auVar32[0] = -(auVar34[0] == -1);
                          auVar32[1] = -(auVar34[1] == -1);
                          auVar32[2] = -(auVar34[2] == -1);
                          auVar32[3] = -(auVar34[3] == -1);
                          auVar32[4] = -(auVar34[4] == -1);
                          auVar32[5] = -(auVar34[5] == -1);
                          auVar32[6] = -(auVar34[6] == -1);
                          auVar32[7] = -(auVar34[7] == -1);
                          auVar32[8] = -(auVar34[8] == -1);
                          auVar32[9] = -(auVar34[9] == -1);
                          auVar32[10] = -(auVar34[10] == -1);
                          auVar32[0xb] = -(auVar34[0xb] == -1);
                          auVar32[0xc] = -(auVar34[0xc] == -1);
                          auVar32[0xd] = -(auVar34[0xd] == -1);
                          auVar32[0xe] = -(auVar34[0xe] == -1);
                          auVar32[0xf] = -(auVar34[0xf] == -1);
                          if ((((((((((((((((SUB161(auVar32 >> 7,0) & 1) != 0 ||
                                           (SUB161(auVar32 >> 0xf,0) & 1) != 0) ||
                                          (SUB161(auVar32 >> 0x17,0) & 1) != 0) ||
                                         (SUB161(auVar32 >> 0x1f,0) & 1) != 0) ||
                                        (SUB161(auVar32 >> 0x27,0) & 1) != 0) ||
                                       (SUB161(auVar32 >> 0x2f,0) & 1) != 0) ||
                                      (SUB161(auVar32 >> 0x37,0) & 1) != 0) ||
                                     (SUB161(auVar32 >> 0x3f,0) & 1) != 0) ||
                                    (SUB161(auVar32 >> 0x47,0) & 1) != 0) ||
                                   (SUB161(auVar32 >> 0x4f,0) & 1) != 0) ||
                                  (SUB161(auVar32 >> 0x57,0) & 1) != 0) ||
                                 (SUB161(auVar32 >> 0x5f,0) & 1) != 0) ||
                                (SUB161(auVar32 >> 0x67,0) & 1) != 0) ||
                               (SUB161(auVar32 >> 0x6f,0) & 1) != 0) ||
                              (SUB161(auVar32 >> 0x77,0) & 1) != 0) || auVar32[0xf] < '\0') break;
                          uVar15 = uVar15 + lVar18 + 0x10;
                          lVar18 = lVar18 + 0x10;
                        }
                      }
                      pdb_142dc8110(&UNK_142fa60f8,0x16,&UNK_142fa6ad0);
                      pcVar11 = (code *)swi(3);
                      (*pcVar11)();
                      return;
                    }
                    uVar23 = (ushort)(uVar22 - 1) & (ushort)uVar22;
                    uVar22 = CONCAT22((short)(uVar22 - 1 >> 0x10),uVar23);
                  }
                  auVar31[0] = -(*pcVar2 == -1);
                  auVar31[1] = -(pcVar2[1] == -1);
                  auVar31[2] = -(pcVar2[2] == -1);
                  auVar31[3] = -(pcVar2[3] == -1);
                  auVar31[4] = -(pcVar2[4] == -1);
                  auVar31[5] = -(pcVar2[5] == -1);
                  auVar31[6] = -(pcVar2[6] == -1);
                  auVar31[7] = -(pcVar2[7] == -1);
                  auVar31[8] = -(pcVar2[8] == -1);
                  auVar31[9] = -(pcVar2[9] == -1);
                  auVar31[10] = -(pcVar2[10] == -1);
                  auVar31[0xb] = -(pcVar2[0xb] == -1);
                  auVar31[0xc] = -(pcVar2[0xc] == -1);
                  auVar31[0xd] = -(pcVar2[0xd] == -1);
                  auVar31[0xe] = -(pcVar2[0xe] == -1);
                  auVar31[0xf] = -(pcVar2[0xf] == -1);
                  if ((((((((((((((((SUB161(auVar31 >> 7,0) & 1) != 0 ||
                                   (SUB161(auVar31 >> 0xf,0) & 1) != 0) ||
                                  (SUB161(auVar31 >> 0x17,0) & 1) != 0) ||
                                 (SUB161(auVar31 >> 0x1f,0) & 1) != 0) ||
                                (SUB161(auVar31 >> 0x27,0) & 1) != 0) ||
                               (SUB161(auVar31 >> 0x2f,0) & 1) != 0) ||
                              (SUB161(auVar31 >> 0x37,0) & 1) != 0) ||
                             (SUB161(auVar31 >> 0x3f,0) & 1) != 0) ||
                            (SUB161(auVar31 >> 0x47,0) & 1) != 0) ||
                           (SUB161(auVar31 >> 0x4f,0) & 1) != 0) ||
                          (SUB161(auVar31 >> 0x57,0) & 1) != 0) ||
                         (SUB161(auVar31 >> 0x5f,0) & 1) != 0) ||
                        (SUB161(auVar31 >> 0x67,0) & 1) != 0) ||
                       (SUB161(auVar31 >> 0x6f,0) & 1) != 0) || (SUB161(auVar31 >> 0x77,0) & 1) != 0
                      ) || auVar31[0xf] < '\0') break;
                  uVar15 = uVar15 + lVar18 + 0x10;
                  lVar18 = lVar18 + 0x10;
                }
              }
              pdb_142dc8110(&UNK_142fa60f8,0x16,&UNK_142fa6ad0);
                    /* WARNING: Does not return */
              pcVar11 = (code *)invalidInstructionException();
              (*pcVar11)();
            }
            uVar23 = (ushort)(uVar22 - 1) & (ushort)uVar22;
            uVar22 = CONCAT22((short)(uVar22 - 1 >> 0x10),uVar23);
          }
          auVar30[0] = -(auVar34[0] == -1);
          auVar30[1] = -(auVar34[1] == -1);
          auVar30[2] = -(auVar34[2] == -1);
          auVar30[3] = -(auVar34[3] == -1);
          auVar30[4] = -(auVar34[4] == -1);
          auVar30[5] = -(auVar34[5] == -1);
          auVar30[6] = -(auVar34[6] == -1);
          auVar30[7] = -(auVar34[7] == -1);
          auVar30[8] = -(auVar34[8] == -1);
          auVar30[9] = -(auVar34[9] == -1);
          auVar30[10] = -(auVar34[10] == -1);
          auVar30[0xb] = -(auVar34[0xb] == -1);
          auVar30[0xc] = -(auVar34[0xc] == -1);
          auVar30[0xd] = -(auVar34[0xd] == -1);
          auVar30[0xe] = -(auVar34[0xe] == -1);
          auVar30[0xf] = -(auVar34[0xf] == -1);
          if ((((((((((((((((SUB161(auVar30 >> 7,0) & 1) != 0 || (SUB161(auVar30 >> 0xf,0) & 1) != 0
                           ) || (SUB161(auVar30 >> 0x17,0) & 1) != 0) ||
                         (SUB161(auVar30 >> 0x1f,0) & 1) != 0) ||
                        (SUB161(auVar30 >> 0x27,0) & 1) != 0) ||
                       (SUB161(auVar30 >> 0x2f,0) & 1) != 0) || (SUB161(auVar30 >> 0x37,0) & 1) != 0
                      ) || (SUB161(auVar30 >> 0x3f,0) & 1) != 0) ||
                    (SUB161(auVar30 >> 0x47,0) & 1) != 0) || (SUB161(auVar30 >> 0x4f,0) & 1) != 0)
                  || (SUB161(auVar30 >> 0x57,0) & 1) != 0) || (SUB161(auVar30 >> 0x5f,0) & 1) != 0)
                || (SUB161(auVar30 >> 0x67,0) & 1) != 0) || (SUB161(auVar30 >> 0x6f,0) & 1) != 0) ||
              (SUB161(auVar30 >> 0x77,0) & 1) != 0) || auVar30[0xf] < '\0') break;
          uVar15 = uVar15 + lVar21 + 0x10;
          lVar21 = lVar21 + 0x10;
        }
      }
      goto LAB_142991649;
    }
    uVar23 = (ushort)(uVar22 - 1) & (ushort)uVar22;
    uVar22 = CONCAT22((short)(uVar22 - 1 >> 0x10),uVar23);
  }
  auVar29[0] = -(*pcVar2 == -1);
  auVar29[1] = -(pcVar2[1] == -1);
  auVar29[2] = -(pcVar2[2] == -1);
  auVar29[3] = -(pcVar2[3] == -1);
  auVar29[4] = -(pcVar2[4] == -1);
  auVar29[5] = -(pcVar2[5] == -1);
  auVar29[6] = -(pcVar2[6] == -1);
  auVar29[7] = -(pcVar2[7] == -1);
  auVar29[8] = -(pcVar2[8] == -1);
  auVar29[9] = -(pcVar2[9] == -1);
  auVar29[10] = -(pcVar2[10] == -1);
  auVar29[0xb] = -(pcVar2[0xb] == -1);
  auVar29[0xc] = -(pcVar2[0xc] == -1);
  auVar29[0xd] = -(pcVar2[0xd] == -1);
  auVar29[0xe] = -(pcVar2[0xe] == -1);
  auVar29[0xf] = -(pcVar2[0xf] == -1);
  if ((((((((((((((((SUB161(auVar29 >> 7,0) & 1) != 0 || (SUB161(auVar29 >> 0xf,0) & 1) != 0) ||
                  (SUB161(auVar29 >> 0x17,0) & 1) != 0) || (SUB161(auVar29 >> 0x1f,0) & 1) != 0) ||
                (SUB161(auVar29 >> 0x27,0) & 1) != 0) || (SUB161(auVar29 >> 0x2f,0) & 1) != 0) ||
              (SUB161(auVar29 >> 0x37,0) & 1) != 0) || (SUB161(auVar29 >> 0x3f,0) & 1) != 0) ||
            (SUB161(auVar29 >> 0x47,0) & 1) != 0) || (SUB161(auVar29 >> 0x4f,0) & 1) != 0) ||
          (SUB161(auVar29 >> 0x57,0) & 1) != 0) || (SUB161(auVar29 >> 0x5f,0) & 1) != 0) ||
        (SUB161(auVar29 >> 0x67,0) & 1) != 0) || (SUB161(auVar29 >> 0x6f,0) & 1) != 0) ||
      (SUB161(auVar29 >> 0x77,0) & 1) != 0) || auVar29[0xf] < '\0') {
LAB_14299194a:
                    /* WARNING: Subroutine does not return */
    pdb_142dc8150(&UNK_142fa6b48);
  }
  uVar15 = uVar15 + lVar21 + 0x10;
  lVar21 = lVar21 + 0x10;
  goto LAB_1429914c3;
}

