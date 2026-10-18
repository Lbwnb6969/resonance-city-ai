// VA 0x142992490, PDB extent 3580 bytes
// toolbar::menu::mod_row::mod_row<toolbar::menu::mods_mine_tab::list_slot::closure$1::closure_env$1>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/menu/mod_row.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   toolbar::menu::mod_row::mod_row<toolbar::menu::mods_mine_tab::list_slot::closure$1::closure_env$1>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/menu/mod_row.rs
   Extent: 3580 */

void pdb_142992490(longlong param_1,byte ******param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 *param_5,undefined8 *param_6)

{
  byte *pbVar1;
  char *pcVar2;
  undefined4 uVar3;
  byte ******ppppppbVar4;
  byte ******ppppppbVar5;
  undefined8 *puVar6;
  code *pcVar7;
  uint uVar8;
  uint uVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  bool bVar13;
  bool bVar14;
  bool bVar15;
  bool bVar16;
  bool bVar17;
  bool bVar18;
  bool bVar19;
  bool bVar20;
  bool bVar21;
  bool bVar22;
  bool bVar23;
  bool bVar24;
  undefined8 uVar25;
  ulonglong uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  byte *******pppppppbVar29;
  byte ******ppppppbVar30;
  byte *******pppppppbVar31;
  byte *******pppppppbVar32;
  longlong lVar33;
  longlong lVar34;
  uint uVar35;
  ushort uVar36;
  ulonglong uVar37;
  ulonglong uVar38;
  byte ******ppppppbVar39;
  undefined1 uVar40;
  byte bVar41;
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auStack_1c8 [8];
  byte *******pppppppbStack_1c0;
  byte ******ppppppbStack_1b0;
  byte *******pppppppbStack_1a8;
  byte *******pppppppbStack_1a0;
  undefined8 uStack_198;
  byte *******pppppppbStack_188;
  byte *******pppppppbStack_180;
  undefined8 uStack_178;
  byte *******pppppppbStack_168;
  byte *******pppppppbStack_160;
  byte *******pppppppbStack_158;
  byte *******pppppppbStack_c0;
  byte *******pppppppbStack_b8;
  byte *******pppppppbStack_b0;
  byte *******pppppppbStack_a8;
  byte *******pppppppbStack_98;
  byte *******pppppppbStack_90;
  byte *******pppppppbStack_88;
  undefined1 uStack_80;
  undefined8 uStack_70;
  
  uVar27 = _UNK_14329c338;
  ppppppbVar30 = _DAT_14329c330;
  uStack_70 = 0xfffffffffffffffe;
  ppppppbVar39 = *(byte *******)(param_1 + 8);
  pppppppbStack_160 = (byte *******)_DAT_14329c330;
  pppppppbStack_158 = (byte *******)_UNK_14329c338;
  pppppppbStack_168 = (byte *******)param_2;
  pppppppbStack_160 = (byte *******)pdb_1400affa0(&pppppppbStack_168);
  pppppppbStack_168 = (byte *******)ppppppbVar39;
  uVar25 = pdb_1400b0130(&pppppppbStack_168);
  pdb_14072caa0(&pppppppbStack_98,param_1,uVar25);
  pdb_141174160(&pppppppbStack_168,&pppppppbStack_98,&UNK_1436096f9,0x12,0);
  pdb_141186520(auStack_1c8,&pppppppbStack_168,&UNK_14360970b,7);
  pppppppbVar32 = pppppppbStack_1c0;
  pppppppbStack_168 = (byte *******)0x0;
  pppppppbStack_160 = (byte *******)ppppppbVar30;
  pppppppbStack_158 = (byte *******)uVar27;
  pppppppbStack_160 = (byte *******)pdb_1400affa0(&pppppppbStack_168);
  pppppppbStack_168 = pppppppbVar32;
  uVar25 = pdb_1400b0130(&pppppppbStack_168);
  pdb_14072caa0(&pppppppbStack_168,auStack_1c8,uVar25);
  pppppppbVar32 = pppppppbStack_168;
  if (pppppppbStack_168[0x39] != (byte ******)0x0) {
    uVar26 = pdb_1400af0a0(pppppppbStack_168 + 0x3a,&pppppppbStack_160);
    ppppppbVar39 = pppppppbVar32[0x36];
    ppppppbVar4 = pppppppbVar32[0x37];
    bVar41 = (byte)(uVar26 >> 0x39);
    auVar42 = ZEXT216(CONCAT11(bVar41,bVar41));
    auVar42 = pshuflw(auVar42,auVar42,0);
    lVar33 = 0;
    while( true ) {
      uVar26 = uVar26 & (ulonglong)ppppppbVar4;
      auVar51 = *(undefined1 (*) [16])((longlong)ppppppbVar39 + uVar26);
      auVar50[0] = -(auVar51[0] == auVar42[0]);
      auVar50[1] = -(auVar51[1] == auVar42[1]);
      auVar50[2] = -(auVar51[2] == auVar42[2]);
      auVar50[3] = -(auVar51[3] == auVar42[3]);
      auVar50[4] = -(auVar51[4] == auVar42[4]);
      auVar50[5] = -(auVar51[5] == auVar42[5]);
      auVar50[6] = -(auVar51[6] == auVar42[6]);
      auVar50[7] = -(auVar51[7] == auVar42[7]);
      auVar50[8] = -(auVar51[8] == auVar42[0]);
      auVar50[9] = -(auVar51[9] == auVar42[1]);
      auVar50[10] = -(auVar51[10] == auVar42[2]);
      auVar50[0xb] = -(auVar51[0xb] == auVar42[3]);
      auVar50[0xc] = -(auVar51[0xc] == auVar42[4]);
      auVar50[0xd] = -(auVar51[0xd] == auVar42[5]);
      auVar50[0xe] = -(auVar51[0xe] == auVar42[6]);
      auVar50[0xf] = -(auVar51[0xf] == auVar42[7]);
      uVar36 = (ushort)(SUB161(auVar50 >> 7,0) & 1) | (ushort)(SUB161(auVar50 >> 0xf,0) & 1) << 1 |
               (ushort)(SUB161(auVar50 >> 0x17,0) & 1) << 2 |
               (ushort)(SUB161(auVar50 >> 0x1f,0) & 1) << 3 |
               (ushort)(SUB161(auVar50 >> 0x27,0) & 1) << 4 |
               (ushort)(SUB161(auVar50 >> 0x2f,0) & 1) << 5 |
               (ushort)(SUB161(auVar50 >> 0x37,0) & 1) << 6 |
               (ushort)(SUB161(auVar50 >> 0x3f,0) & 1) << 7 |
               (ushort)(SUB161(auVar50 >> 0x47,0) & 1) << 8 |
               (ushort)(SUB161(auVar50 >> 0x4f,0) & 1) << 9 |
               (ushort)(SUB161(auVar50 >> 0x57,0) & 1) << 10 |
               (ushort)(SUB161(auVar50 >> 0x5f,0) & 1) << 0xb |
               (ushort)(SUB161(auVar50 >> 0x67,0) & 1) << 0xc |
               (ushort)(SUB161(auVar50 >> 0x6f,0) & 1) << 0xd |
               (ushort)(SUB161(auVar50 >> 0x77,0) & 1) << 0xe | (ushort)(auVar50[0xf] >> 7) << 0xf;
      uVar35 = (uint)uVar36;
      while (uVar36 != 0) {
        uVar8 = 0;
        for (uVar9 = uVar35; (uVar9 & 1) == 0; uVar9 = uVar9 >> 1 | 0x80000000) {
          uVar8 = uVar8 + 1;
        }
        uVar37 = uVar8 + uVar26 & (ulonglong)ppppppbVar4;
        if (pppppppbStack_160 == (byte *******)ppppppbVar39[uVar37 * -0x1b + -0x1b]) {
          *(undefined1 (*) [16])(ppppppbVar39 + uVar37 * -0x1b + -0x11) = (undefined1  [16])0x0;
          *(undefined1 (*) [16])(ppppppbVar39 + uVar37 * -0x1b + -0x13) = (undefined1  [16])0x0;
          *(undefined1 (*) [16])(ppppppbVar39 + uVar37 * -0x1b + -0x15) = (undefined1  [16])0x0;
          *(undefined1 (*) [16])(ppppppbVar39 + uVar37 * -0x1b + -0x17) = (undefined1  [16])0x0;
          ppppppbVar39[uVar37 * -0x1b + -0xf] = (byte *****)0x400000100000000;
          uStack_198 = pppppppbStack_158;
          pppppppbStack_1a8 = pppppppbStack_168;
          pppppppbStack_1a0 = pppppppbStack_160;
          pdb_140737280(&pppppppbStack_98,param_3,param_4);
          pppppppbVar29 = pppppppbStack_88;
          pppppppbStack_c0 = pppppppbStack_90;
          pppppppbStack_188 = pppppppbStack_90;
          pppppppbStack_180 = pppppppbStack_88;
          pppppppbStack_168 = (byte *******)pdb_140bbbcb0(&pppppppbStack_188);
          pppppppbVar32 = _UNK_14329c268;
          ppppppbVar39 = _DAT_14329c260;
          pppppppbStack_160 = (byte *******)_DAT_14329c260;
          pppppppbStack_158 = _UNK_14329c268;
          pppppppbStack_160 = (byte *******)pdb_1400affa0(&pppppppbStack_168);
          pppppppbStack_168 = pppppppbStack_1a0;
          uVar25 = pdb_1400b0130(&pppppppbStack_168);
          pdb_14072caa0(&pppppppbStack_168,&pppppppbStack_1a8,uVar25);
          uVar25 = pdb_14116ee90(&pppppppbStack_168,0);
          pdb_14119b6b0(uVar25,pppppppbStack_c0,pppppppbVar29);
          pppppppbStack_a8 = pppppppbStack_158;
          pppppppbStack_b8 = pppppppbStack_168;
          pppppppbStack_b0 = pppppppbStack_160;
          uVar25 = pdb_14116e180(&pppppppbStack_b8);
          pdb_14119b2b0(uVar25,_DAT_1434da1b0);
          pppppppbStack_158 = pppppppbStack_a8;
          pppppppbStack_168 = pppppppbStack_b8;
          pppppppbStack_160 = pppppppbStack_b0;
          uVar25 = pdb_14116e180(&pppppppbStack_168);
          pdb_140cb5df0(uVar25);
          pppppppbVar29 = pppppppbStack_168;
          pppppppbStack_b8 = pppppppbStack_168;
          pppppppbStack_b0 = pppppppbStack_160;
          pppppppbStack_a8 = pppppppbStack_158;
          if (pppppppbStack_168[0x39] == (byte ******)0x0) goto LAB_142992a66;
          uVar26 = pdb_1400af0a0(pppppppbStack_168 + 0x3a,&pppppppbStack_b0);
          ppppppbVar4 = pppppppbVar29[0x36];
          ppppppbVar5 = pppppppbVar29[0x37];
          bVar41 = (byte)(uVar26 >> 0x39);
          auVar42 = ZEXT216(CONCAT11(bVar41,bVar41));
          auVar42 = pshuflw(auVar42,auVar42,0);
          lVar33 = 0;
          goto LAB_142992827;
        }
        uVar36 = (ushort)(uVar35 - 1) & (ushort)uVar35;
        uVar35 = CONCAT22((short)(uVar35 - 1 >> 0x10),uVar36);
      }
      auVar43[0] = -(auVar51[0] == -1);
      auVar43[1] = -(auVar51[1] == -1);
      auVar43[2] = -(auVar51[2] == -1);
      auVar43[3] = -(auVar51[3] == -1);
      auVar43[4] = -(auVar51[4] == -1);
      auVar43[5] = -(auVar51[5] == -1);
      auVar43[6] = -(auVar51[6] == -1);
      auVar43[7] = -(auVar51[7] == -1);
      auVar43[8] = -(auVar51[8] == -1);
      auVar43[9] = -(auVar51[9] == -1);
      auVar43[10] = -(auVar51[10] == -1);
      auVar43[0xb] = -(auVar51[0xb] == -1);
      auVar43[0xc] = -(auVar51[0xc] == -1);
      auVar43[0xd] = -(auVar51[0xd] == -1);
      auVar43[0xe] = -(auVar51[0xe] == -1);
      auVar43[0xf] = -(auVar51[0xf] == -1);
      if ((((((((((((((((SUB161(auVar43 >> 7,0) & 1) != 0 || (SUB161(auVar43 >> 0xf,0) & 1) != 0) ||
                      (SUB161(auVar43 >> 0x17,0) & 1) != 0) || (SUB161(auVar43 >> 0x1f,0) & 1) != 0)
                    || (SUB161(auVar43 >> 0x27,0) & 1) != 0) || (SUB161(auVar43 >> 0x2f,0) & 1) != 0
                   ) || (SUB161(auVar43 >> 0x37,0) & 1) != 0) ||
                 (SUB161(auVar43 >> 0x3f,0) & 1) != 0) || (SUB161(auVar43 >> 0x47,0) & 1) != 0) ||
               (SUB161(auVar43 >> 0x4f,0) & 1) != 0) || (SUB161(auVar43 >> 0x57,0) & 1) != 0) ||
             (SUB161(auVar43 >> 0x5f,0) & 1) != 0) || (SUB161(auVar43 >> 0x67,0) & 1) != 0) ||
           (SUB161(auVar43 >> 0x6f,0) & 1) != 0) || (SUB161(auVar43 >> 0x77,0) & 1) != 0) ||
          auVar43[0xf] < '\0') break;
      uVar26 = uVar26 + lVar33 + 0x10;
      lVar33 = lVar33 + 0x10;
    }
  }
LAB_142992b90:
                    /* WARNING: Subroutine does not return */
  pdb_142dc8150(&UNK_142fa6b30);
LAB_142992827:
  uVar26 = uVar26 & (ulonglong)ppppppbVar5;
  pcVar2 = (char *)((longlong)ppppppbVar4 + uVar26);
  auVar51[0] = -(*pcVar2 == auVar42[0]);
  auVar51[1] = -(pcVar2[1] == auVar42[1]);
  auVar51[2] = -(pcVar2[2] == auVar42[2]);
  auVar51[3] = -(pcVar2[3] == auVar42[3]);
  auVar51[4] = -(pcVar2[4] == auVar42[4]);
  auVar51[5] = -(pcVar2[5] == auVar42[5]);
  auVar51[6] = -(pcVar2[6] == auVar42[6]);
  auVar51[7] = -(pcVar2[7] == auVar42[7]);
  auVar51[8] = -(pcVar2[8] == auVar42[0]);
  auVar51[9] = -(pcVar2[9] == auVar42[1]);
  auVar51[10] = -(pcVar2[10] == auVar42[2]);
  auVar51[0xb] = -(pcVar2[0xb] == auVar42[3]);
  auVar51[0xc] = -(pcVar2[0xc] == auVar42[4]);
  auVar51[0xd] = -(pcVar2[0xd] == auVar42[5]);
  auVar51[0xe] = -(pcVar2[0xe] == auVar42[6]);
  auVar51[0xf] = -(pcVar2[0xf] == auVar42[7]);
  uVar36 = (ushort)(SUB161(auVar51 >> 7,0) & 1) | (ushort)(SUB161(auVar51 >> 0xf,0) & 1) << 1 |
           (ushort)(SUB161(auVar51 >> 0x17,0) & 1) << 2 |
           (ushort)(SUB161(auVar51 >> 0x1f,0) & 1) << 3 |
           (ushort)(SUB161(auVar51 >> 0x27,0) & 1) << 4 |
           (ushort)(SUB161(auVar51 >> 0x2f,0) & 1) << 5 |
           (ushort)(SUB161(auVar51 >> 0x37,0) & 1) << 6 |
           (ushort)(SUB161(auVar51 >> 0x3f,0) & 1) << 7 |
           (ushort)(SUB161(auVar51 >> 0x47,0) & 1) << 8 |
           (ushort)(SUB161(auVar51 >> 0x4f,0) & 1) << 9 |
           (ushort)(SUB161(auVar51 >> 0x57,0) & 1) << 10 |
           (ushort)(SUB161(auVar51 >> 0x5f,0) & 1) << 0xb |
           (ushort)(SUB161(auVar51 >> 0x67,0) & 1) << 0xc |
           (ushort)(SUB161(auVar51 >> 0x6f,0) & 1) << 0xd |
           (ushort)(SUB161(auVar51 >> 0x77,0) & 1) << 0xe | (ushort)(auVar51[0xf] >> 7) << 0xf;
  uVar35 = (uint)uVar36;
  while (uVar36 != 0) {
    uVar8 = 0;
    for (uVar9 = uVar35; (uVar9 & 1) == 0; uVar9 = uVar9 >> 1 | 0x80000000) {
      uVar8 = uVar8 + 1;
    }
    uVar37 = uVar8 + uVar26 & (ulonglong)ppppppbVar5;
    if (pppppppbStack_b0 == (byte *******)ppppppbVar4[uVar37 * -0x1b + -0x1b]) {
      pbVar1 = (byte *)((longlong)ppppppbVar4 + uVar37 * -0xd8 + -5);
      *pbVar1 = *pbVar1 | 2;
      if (pppppppbStack_98 != (byte *******)0x0) {
        pub_1406abac0((byte *)pppppppbStack_c0,(ulonglong)pppppppbStack_98,1);
      }
      pppppppbVar29 = (byte *******)*param_5;
      if (pppppppbVar29 == (byte *******)0x0) goto LAB_142992a7f;
      pppppppbVar31 = (byte *******)param_5[1];
      uVar3 = *(undefined4 *)(param_5 + 2);
      pppppppbStack_b8 = pppppppbVar29;
      pppppppbStack_b0 = pppppppbVar31;
      pppppppbStack_168 = (byte *******)pdb_140bbbcb0(&pppppppbStack_b8);
      pppppppbStack_160 = (byte *******)ppppppbVar39;
      pppppppbStack_158 = pppppppbVar32;
      pppppppbStack_160 = (byte *******)pdb_1400affa0(&pppppppbStack_168);
      pppppppbStack_168 = pppppppbStack_1a0;
      uVar25 = pdb_1400b0130(&pppppppbStack_168);
      pdb_14072caa0(&pppppppbStack_168,&pppppppbStack_1a8,uVar25);
      uVar25 = pdb_14116ee90(&pppppppbStack_168,0);
      pdb_14119b6b0(uVar25,pppppppbVar29,pppppppbVar31);
      pppppppbStack_88 = pppppppbStack_158;
      pppppppbStack_98 = pppppppbStack_168;
      pppppppbStack_90 = pppppppbStack_160;
      uVar25 = pdb_14116e180(&pppppppbStack_98);
      pdb_14119b2b0(uVar25);
      pppppppbStack_158 = pppppppbStack_88;
      pppppppbStack_168 = pppppppbStack_98;
      pppppppbStack_160 = pppppppbStack_90;
      lVar33 = pdb_14116e180(&pppppppbStack_168);
      pppppppbVar29 = pppppppbStack_168;
      *(undefined4 *)(lVar33 + 600) = uVar3;
      pppppppbStack_98 = pppppppbStack_168;
      pppppppbStack_90 = pppppppbStack_160;
      pppppppbStack_88 = pppppppbStack_158;
      if (pppppppbStack_168[0x39] == (byte ******)0x0) goto LAB_1429930b6;
      uVar26 = pdb_1400af0a0(pppppppbStack_168 + 0x3a,&pppppppbStack_90);
      ppppppbVar4 = pppppppbVar29[0x36];
      ppppppbVar5 = pppppppbVar29[0x37];
      bVar41 = (byte)(uVar26 >> 0x39);
      auVar42 = ZEXT216(CONCAT11(bVar41,bVar41));
      auVar42 = pshuflw(auVar42,auVar42,0);
      lVar33 = 0;
      goto LAB_142992a01;
    }
    uVar36 = (ushort)(uVar35 - 1) & (ushort)uVar35;
    uVar35 = CONCAT22((short)(uVar35 - 1 >> 0x10),uVar36);
  }
  auVar44[0] = -(*pcVar2 == -1);
  auVar44[1] = -(pcVar2[1] == -1);
  auVar44[2] = -(pcVar2[2] == -1);
  auVar44[3] = -(pcVar2[3] == -1);
  auVar44[4] = -(pcVar2[4] == -1);
  auVar44[5] = -(pcVar2[5] == -1);
  auVar44[6] = -(pcVar2[6] == -1);
  auVar44[7] = -(pcVar2[7] == -1);
  auVar44[8] = -(pcVar2[8] == -1);
  auVar44[9] = -(pcVar2[9] == -1);
  auVar44[10] = -(pcVar2[10] == -1);
  auVar44[0xb] = -(pcVar2[0xb] == -1);
  auVar44[0xc] = -(pcVar2[0xc] == -1);
  auVar44[0xd] = -(pcVar2[0xd] == -1);
  auVar44[0xe] = -(pcVar2[0xe] == -1);
  auVar44[0xf] = -(pcVar2[0xf] == -1);
  if ((((((((((((((((SUB161(auVar44 >> 7,0) & 1) != 0 || (SUB161(auVar44 >> 0xf,0) & 1) != 0) ||
                  (SUB161(auVar44 >> 0x17,0) & 1) != 0) || (SUB161(auVar44 >> 0x1f,0) & 1) != 0) ||
                (SUB161(auVar44 >> 0x27,0) & 1) != 0) || (SUB161(auVar44 >> 0x2f,0) & 1) != 0) ||
              (SUB161(auVar44 >> 0x37,0) & 1) != 0) || (SUB161(auVar44 >> 0x3f,0) & 1) != 0) ||
            (SUB161(auVar44 >> 0x47,0) & 1) != 0) || (SUB161(auVar44 >> 0x4f,0) & 1) != 0) ||
          (SUB161(auVar44 >> 0x57,0) & 1) != 0) || (SUB161(auVar44 >> 0x5f,0) & 1) != 0) ||
        (SUB161(auVar44 >> 0x67,0) & 1) != 0) || (SUB161(auVar44 >> 0x6f,0) & 1) != 0) ||
      (SUB161(auVar44 >> 0x77,0) & 1) != 0) || auVar44[0xf] < '\0') {
LAB_142992a66:
                    /* WARNING: Subroutine does not return */
    pdb_142dc8150(&UNK_142fa6b48);
  }
  uVar26 = uVar26 + lVar33 + 0x10;
  lVar33 = lVar33 + 0x10;
  goto LAB_142992827;
LAB_142992a01:
  uVar26 = uVar26 & (ulonglong)ppppppbVar5;
  pcVar2 = (char *)((longlong)ppppppbVar4 + uVar26);
  auVar52[0] = -(*pcVar2 == auVar42[0]);
  auVar52[1] = -(pcVar2[1] == auVar42[1]);
  auVar52[2] = -(pcVar2[2] == auVar42[2]);
  auVar52[3] = -(pcVar2[3] == auVar42[3]);
  auVar52[4] = -(pcVar2[4] == auVar42[4]);
  auVar52[5] = -(pcVar2[5] == auVar42[5]);
  auVar52[6] = -(pcVar2[6] == auVar42[6]);
  auVar52[7] = -(pcVar2[7] == auVar42[7]);
  auVar52[8] = -(pcVar2[8] == auVar42[0]);
  auVar52[9] = -(pcVar2[9] == auVar42[1]);
  auVar52[10] = -(pcVar2[10] == auVar42[2]);
  auVar52[0xb] = -(pcVar2[0xb] == auVar42[3]);
  auVar52[0xc] = -(pcVar2[0xc] == auVar42[4]);
  auVar52[0xd] = -(pcVar2[0xd] == auVar42[5]);
  auVar52[0xe] = -(pcVar2[0xe] == auVar42[6]);
  auVar52[0xf] = -(pcVar2[0xf] == auVar42[7]);
  uVar36 = (ushort)(SUB161(auVar52 >> 7,0) & 1) | (ushort)(SUB161(auVar52 >> 0xf,0) & 1) << 1 |
           (ushort)(SUB161(auVar52 >> 0x17,0) & 1) << 2 |
           (ushort)(SUB161(auVar52 >> 0x1f,0) & 1) << 3 |
           (ushort)(SUB161(auVar52 >> 0x27,0) & 1) << 4 |
           (ushort)(SUB161(auVar52 >> 0x2f,0) & 1) << 5 |
           (ushort)(SUB161(auVar52 >> 0x37,0) & 1) << 6 |
           (ushort)(SUB161(auVar52 >> 0x3f,0) & 1) << 7 |
           (ushort)(SUB161(auVar52 >> 0x47,0) & 1) << 8 |
           (ushort)(SUB161(auVar52 >> 0x4f,0) & 1) << 9 |
           (ushort)(SUB161(auVar52 >> 0x57,0) & 1) << 10 |
           (ushort)(SUB161(auVar52 >> 0x5f,0) & 1) << 0xb |
           (ushort)(SUB161(auVar52 >> 0x67,0) & 1) << 0xc |
           (ushort)(SUB161(auVar52 >> 0x6f,0) & 1) << 0xd |
           (ushort)(SUB161(auVar52 >> 0x77,0) & 1) << 0xe | (ushort)(auVar52[0xf] >> 7) << 0xf;
  uVar35 = (uint)uVar36;
  while( true ) {
    if (uVar36 == 0) goto LAB_142992a47;
    uVar8 = 0;
    for (uVar9 = uVar35; (uVar9 & 1) == 0; uVar9 = uVar9 >> 1 | 0x80000000) {
      uVar8 = uVar8 + 1;
    }
    uVar37 = uVar8 + uVar26 & (ulonglong)ppppppbVar5;
    if (pppppppbStack_90 == (byte *******)ppppppbVar4[uVar37 * -0x1b + -0x1b]) break;
    uVar36 = (ushort)(uVar35 - 1) & (ushort)uVar35;
    uVar35 = CONCAT22((short)(uVar35 - 1 >> 0x10),uVar36);
  }
  pbVar1 = (byte *)((longlong)ppppppbVar4 + uVar37 * -0xd8 + -5);
  *pbVar1 = *pbVar1 | 2;
LAB_142992a7f:
  pppppppbStack_98 = (byte *******)&UNK_143609712;
  pppppppbStack_90 = (byte *******)0x7;
  pppppppbStack_168 = (byte *******)pdb_140bbbcb0(&pppppppbStack_98);
  pppppppbStack_160 = (byte *******)ppppppbVar30;
  pppppppbStack_158 = (byte *******)uVar27;
  pppppppbStack_160 = (byte *******)pdb_1400affa0(&pppppppbStack_168);
  pppppppbStack_168 = pppppppbStack_1c0;
  uVar27 = pdb_1400b0130(&pppppppbStack_168);
  pdb_14072caa0(&pppppppbStack_168,auStack_1c8,uVar27);
  pppppppbVar29 = pppppppbStack_168;
  if (pppppppbStack_168[0x39] == (byte ******)0x0) goto LAB_142992b90;
  uVar26 = pdb_1400af0a0(pppppppbStack_168 + 0x3a,&pppppppbStack_160);
  ppppppbVar30 = pppppppbVar29[0x36];
  ppppppbVar4 = pppppppbVar29[0x37];
  bVar41 = (byte)(uVar26 >> 0x39);
  auVar42 = ZEXT216(CONCAT11(bVar41,bVar41));
  auVar42 = pshuflw(auVar42,auVar42,0);
  lVar33 = 0;
  do {
    uVar26 = uVar26 & (ulonglong)ppppppbVar4;
    auVar51 = *(undefined1 (*) [16])((longlong)ppppppbVar30 + uVar26);
    auVar53[0] = -(auVar51[0] == auVar42[0]);
    auVar53[1] = -(auVar51[1] == auVar42[1]);
    auVar53[2] = -(auVar51[2] == auVar42[2]);
    auVar53[3] = -(auVar51[3] == auVar42[3]);
    auVar53[4] = -(auVar51[4] == auVar42[4]);
    auVar53[5] = -(auVar51[5] == auVar42[5]);
    auVar53[6] = -(auVar51[6] == auVar42[6]);
    auVar53[7] = -(auVar51[7] == auVar42[7]);
    auVar53[8] = -(auVar51[8] == auVar42[0]);
    auVar53[9] = -(auVar51[9] == auVar42[1]);
    auVar53[10] = -(auVar51[10] == auVar42[2]);
    auVar53[0xb] = -(auVar51[0xb] == auVar42[3]);
    auVar53[0xc] = -(auVar51[0xc] == auVar42[4]);
    auVar53[0xd] = -(auVar51[0xd] == auVar42[5]);
    auVar53[0xe] = -(auVar51[0xe] == auVar42[6]);
    auVar53[0xf] = -(auVar51[0xf] == auVar42[7]);
    uVar36 = (ushort)(SUB161(auVar53 >> 7,0) & 1) | (ushort)(SUB161(auVar53 >> 0xf,0) & 1) << 1 |
             (ushort)(SUB161(auVar53 >> 0x17,0) & 1) << 2 |
             (ushort)(SUB161(auVar53 >> 0x1f,0) & 1) << 3 |
             (ushort)(SUB161(auVar53 >> 0x27,0) & 1) << 4 |
             (ushort)(SUB161(auVar53 >> 0x2f,0) & 1) << 5 |
             (ushort)(SUB161(auVar53 >> 0x37,0) & 1) << 6 |
             (ushort)(SUB161(auVar53 >> 0x3f,0) & 1) << 7 |
             (ushort)(SUB161(auVar53 >> 0x47,0) & 1) << 8 |
             (ushort)(SUB161(auVar53 >> 0x4f,0) & 1) << 9 |
             (ushort)(SUB161(auVar53 >> 0x57,0) & 1) << 10 |
             (ushort)(SUB161(auVar53 >> 0x5f,0) & 1) << 0xb |
             (ushort)(SUB161(auVar53 >> 0x67,0) & 1) << 0xc |
             (ushort)(SUB161(auVar53 >> 0x6f,0) & 1) << 0xd |
             (ushort)(SUB161(auVar53 >> 0x77,0) & 1) << 0xe | (ushort)(auVar53[0xf] >> 7) << 0xf;
    uVar35 = (uint)uVar36;
    while (uVar36 != 0) {
      uVar8 = 0;
      for (uVar9 = uVar35; (uVar9 & 1) == 0; uVar9 = uVar9 >> 1 | 0x80000000) {
        uVar8 = uVar8 + 1;
      }
      uVar37 = uVar8 + uVar26 & (ulonglong)ppppppbVar4;
      uVar38 = uVar37 * -0xd8;
      if (pppppppbStack_160 == (byte *******)ppppppbVar30[uVar37 * -0x1b + -0x1b]) {
        *(undefined1 (*) [16])(ppppppbVar30 + uVar37 * -0x1b + -0x11) = (undefined1  [16])0x0;
        *(undefined1 (*) [16])(ppppppbVar30 + uVar37 * -0x1b + -0x13) = (undefined1  [16])0x0;
        *(undefined1 (*) [16])(ppppppbVar30 + uVar37 * -0x1b + -0x15) = (undefined1  [16])0x0;
        *(undefined1 (*) [16])(ppppppbVar30 + uVar37 * -0x1b + -0x17) = (undefined1  [16])0x0;
        ppppppbVar30[uVar37 * -0x1b + -0xf] = (byte *****)0x403000100000000;
        uStack_178 = pppppppbStack_158;
        pppppppbStack_188 = pppppppbStack_168;
        pppppppbStack_180 = pppppppbStack_160;
        lVar33 = param_6[2];
        puVar6 = (undefined8 *)param_6[3];
        uVar27 = param_6[4];
        if (*(int *)*param_6 != 1) goto LAB_142992dd8;
        uVar25 = param_6[1];
        ppppppbStack_1b0 = *(byte *******)((int *)*param_6 + 2);
        ppppppbVar30 = (byte ******)0x16;
        pppppppbStack_b8 = (byte *******)pdb_140dc6290(&UNK_143609668);
        pppppppbStack_90 = (byte *******)pdb_1402ed400;
        pppppppbStack_b0 = (byte *******)ppppppbVar30;
        pppppppbStack_98 = (byte *******)&pppppppbStack_b8;
        pdb_140f60760(&pppppppbStack_168,&UNK_14360967e,&pppppppbStack_98);
        pppppppbStack_c0 = pppppppbStack_160;
        pdb_1407339e0(&pppppppbStack_98,&pppppppbStack_188);
        uVar28 = pdb_14116dd60(&pppppppbStack_98);
        pdb_14119b2b0(uVar28);
        pppppppbVar29 = pppppppbStack_98;
        pppppppbStack_b8 = pppppppbStack_98;
        pppppppbStack_b0 = pppppppbStack_90;
        pppppppbStack_a8 = pppppppbStack_88;
        if (pppppppbStack_98[0x39] == (byte ******)0x0) {
LAB_1429930f3:
          pdb_142dc8110(&UNK_142fa60f8,0x16,&UNK_142fa6ad0);
                    /* WARNING: Does not return */
          pcVar7 = (code *)invalidInstructionException();
          (*pcVar7)();
        }
        uVar26 = pdb_1400af0a0(pppppppbStack_98 + 0x3a,&pppppppbStack_b0);
        ppppppbVar30 = pppppppbVar29[0x36];
        ppppppbVar4 = pppppppbVar29[0x37];
        bVar41 = (byte)(uVar26 >> 0x39);
        auVar42 = ZEXT216(CONCAT11(bVar41,bVar41));
        auVar42 = pshuflw(auVar42,auVar42,0);
        lVar34 = 0;
        do {
          uVar26 = uVar26 & (ulonglong)ppppppbVar4;
          pcVar2 = (char *)((longlong)ppppppbVar30 + uVar26);
          auVar54[0] = -(*pcVar2 == auVar42[0]);
          auVar54[1] = -(pcVar2[1] == auVar42[1]);
          auVar54[2] = -(pcVar2[2] == auVar42[2]);
          auVar54[3] = -(pcVar2[3] == auVar42[3]);
          auVar54[4] = -(pcVar2[4] == auVar42[4]);
          auVar54[5] = -(pcVar2[5] == auVar42[5]);
          auVar54[6] = -(pcVar2[6] == auVar42[6]);
          auVar54[7] = -(pcVar2[7] == auVar42[7]);
          auVar54[8] = -(pcVar2[8] == auVar42[0]);
          auVar54[9] = -(pcVar2[9] == auVar42[1]);
          auVar54[10] = -(pcVar2[10] == auVar42[2]);
          auVar54[0xb] = -(pcVar2[0xb] == auVar42[3]);
          auVar54[0xc] = -(pcVar2[0xc] == auVar42[4]);
          auVar54[0xd] = -(pcVar2[0xd] == auVar42[5]);
          auVar54[0xe] = -(pcVar2[0xe] == auVar42[6]);
          auVar54[0xf] = -(pcVar2[0xf] == auVar42[7]);
          uVar36 = (ushort)(SUB161(auVar54 >> 7,0) & 1) |
                   (ushort)(SUB161(auVar54 >> 0xf,0) & 1) << 1 |
                   (ushort)(SUB161(auVar54 >> 0x17,0) & 1) << 2 |
                   (ushort)(SUB161(auVar54 >> 0x1f,0) & 1) << 3 |
                   (ushort)(SUB161(auVar54 >> 0x27,0) & 1) << 4 |
                   (ushort)(SUB161(auVar54 >> 0x2f,0) & 1) << 5 |
                   (ushort)(SUB161(auVar54 >> 0x37,0) & 1) << 6 |
                   (ushort)(SUB161(auVar54 >> 0x3f,0) & 1) << 7 |
                   (ushort)(SUB161(auVar54 >> 0x47,0) & 1) << 8 |
                   (ushort)(SUB161(auVar54 >> 0x4f,0) & 1) << 9 |
                   (ushort)(SUB161(auVar54 >> 0x57,0) & 1) << 10 |
                   (ushort)(SUB161(auVar54 >> 0x5f,0) & 1) << 0xb |
                   (ushort)(SUB161(auVar54 >> 0x67,0) & 1) << 0xc |
                   (ushort)(SUB161(auVar54 >> 0x6f,0) & 1) << 0xd |
                   (ushort)(SUB161(auVar54 >> 0x77,0) & 1) << 0xe |
                   (ushort)(auVar54[0xf] >> 7) << 0xf;
          uVar35 = (uint)uVar36;
          while (uVar36 != 0) {
            uVar8 = 0;
            for (uVar9 = uVar35; (uVar9 & 1) == 0; uVar9 = uVar9 >> 1 | 0x80000000) {
              uVar8 = uVar8 + 1;
            }
            uVar37 = uVar8 + uVar26 & (ulonglong)ppppppbVar4;
            uVar38 = uVar37 * -0xd8;
            if (pppppppbStack_b0 == (byte *******)ppppppbVar30[uVar37 * -0x1b + -0x1b]) {
              bVar41 = *(byte *)((longlong)ppppppbVar30 + (uVar38 - 6));
              if (pppppppbStack_168 != (byte *******)0x0) {
                pub_1406abac0((byte *)pppppppbStack_c0,(ulonglong)pppppppbStack_168,1);
              }
              if ((bVar41 & 0x30) != 0) {
                pppppppbStack_98 = &ppppppbStack_1b0;
                pppppppbStack_90 = (byte *******)pdb_140c91ab0;
                pdb_140f60760(&pppppppbStack_168,&UNK_143609685,&pppppppbStack_98);
                pdb_1422d1a80(uVar25,&pppppppbStack_168);
              }
LAB_142992dd8:
              if (*(char *)(lVar33 + 0x70) == '\0') {
                pppppppbVar31 = (byte *******)0x17;
                pppppppbVar29 = (byte *******)pdb_140dc6290(&UNK_1436096bf);
                pppppppbStack_b8 = pppppppbVar29;
                pppppppbStack_b0 = pppppppbVar31;
                pppppppbStack_168 = (byte *******)pdb_140bbbcb0(&pppppppbStack_b8);
                pppppppbStack_160 = (byte *******)ppppppbVar39;
                pppppppbStack_158 = pppppppbVar32;
                pppppppbStack_160 = (byte *******)pdb_1400affa0(&pppppppbStack_168);
                pppppppbStack_168 = pppppppbStack_180;
                uVar27 = pdb_1400b0130(&pppppppbStack_168);
                pdb_14072caa0(&pppppppbStack_168,&pppppppbStack_188,uVar27);
                uVar27 = pdb_14116ee90(&pppppppbStack_168,0);
                pdb_14119b6b0(uVar27,pppppppbVar29,pppppppbVar31);
                pppppppbStack_88 = pppppppbStack_158;
                pppppppbStack_98 = pppppppbStack_168;
                pppppppbStack_90 = pppppppbStack_160;
                uVar27 = pdb_14116e180(&pppppppbStack_98);
                pdb_14119b2b0(uVar27);
                pppppppbStack_158 = pppppppbStack_88;
                pppppppbStack_168 = pppppppbStack_98;
                pppppppbStack_160 = pppppppbStack_90;
                lVar33 = pdb_14116e180(&pppppppbStack_168);
                pppppppbVar32 = pppppppbStack_168;
                *(undefined4 *)(lVar33 + 600) = 0xffffffa0;
                pppppppbStack_98 = pppppppbStack_168;
                pppppppbStack_90 = pppppppbStack_160;
                pppppppbStack_88 = pppppppbStack_158;
                if (pppppppbStack_168[0x39] == (byte ******)0x0) goto LAB_1429930b6;
                uVar26 = pdb_1400af0a0(pppppppbStack_168 + 0x3a,&pppppppbStack_90);
                ppppppbVar39 = pppppppbVar32[0x36];
                ppppppbVar30 = pppppppbVar32[0x37];
                bVar41 = (byte)(uVar26 >> 0x39);
                auVar42 = ZEXT216(CONCAT11(bVar41,bVar41));
                auVar42 = pshuflw(auVar42,auVar42,0);
                lVar33 = 0;
                do {
                  uVar26 = uVar26 & (ulonglong)ppppppbVar30;
                  pcVar2 = (char *)((longlong)ppppppbVar39 + uVar26);
                  auVar56[0] = -(*pcVar2 == auVar42[0]);
                  auVar56[1] = -(pcVar2[1] == auVar42[1]);
                  auVar56[2] = -(pcVar2[2] == auVar42[2]);
                  auVar56[3] = -(pcVar2[3] == auVar42[3]);
                  auVar56[4] = -(pcVar2[4] == auVar42[4]);
                  auVar56[5] = -(pcVar2[5] == auVar42[5]);
                  auVar56[6] = -(pcVar2[6] == auVar42[6]);
                  auVar56[7] = -(pcVar2[7] == auVar42[7]);
                  auVar56[8] = -(pcVar2[8] == auVar42[0]);
                  auVar56[9] = -(pcVar2[9] == auVar42[1]);
                  auVar56[10] = -(pcVar2[10] == auVar42[2]);
                  auVar56[0xb] = -(pcVar2[0xb] == auVar42[3]);
                  auVar56[0xc] = -(pcVar2[0xc] == auVar42[4]);
                  auVar56[0xd] = -(pcVar2[0xd] == auVar42[5]);
                  auVar56[0xe] = -(pcVar2[0xe] == auVar42[6]);
                  auVar56[0xf] = -(pcVar2[0xf] == auVar42[7]);
                  uVar36 = (ushort)(SUB161(auVar56 >> 7,0) & 1) |
                           (ushort)(SUB161(auVar56 >> 0xf,0) & 1) << 1 |
                           (ushort)(SUB161(auVar56 >> 0x17,0) & 1) << 2 |
                           (ushort)(SUB161(auVar56 >> 0x1f,0) & 1) << 3 |
                           (ushort)(SUB161(auVar56 >> 0x27,0) & 1) << 4 |
                           (ushort)(SUB161(auVar56 >> 0x2f,0) & 1) << 5 |
                           (ushort)(SUB161(auVar56 >> 0x37,0) & 1) << 6 |
                           (ushort)(SUB161(auVar56 >> 0x3f,0) & 1) << 7 |
                           (ushort)(SUB161(auVar56 >> 0x47,0) & 1) << 8 |
                           (ushort)(SUB161(auVar56 >> 0x4f,0) & 1) << 9 |
                           (ushort)(SUB161(auVar56 >> 0x57,0) & 1) << 10 |
                           (ushort)(SUB161(auVar56 >> 0x5f,0) & 1) << 0xb |
                           (ushort)(SUB161(auVar56 >> 0x67,0) & 1) << 0xc |
                           (ushort)(SUB161(auVar56 >> 0x6f,0) & 1) << 0xd |
                           (ushort)(SUB161(auVar56 >> 0x77,0) & 1) << 0xe |
                           (ushort)(auVar56[0xf] >> 7) << 0xf;
                  uVar35 = (uint)uVar36;
                  while (uVar36 != 0) {
                    uVar8 = 0;
                    for (uVar9 = uVar35; (uVar9 & 1) == 0; uVar9 = uVar9 >> 1 | 0x80000000) {
                      uVar8 = uVar8 + 1;
                    }
                    uVar37 = uVar8 + uVar26 & (ulonglong)ppppppbVar30;
                    uVar38 = uVar37 * -0xd8;
                    if (pppppppbStack_90 == (byte *******)ppppppbVar39[uVar37 * -0x1b + -0x1b])
                    goto LAB_1429930e7;
                    uVar36 = (ushort)(uVar35 - 1) & (ushort)uVar35;
                    uVar35 = CONCAT22((short)(uVar35 - 1 >> 0x10),uVar36);
                  }
                  auVar49[0] = -(*pcVar2 == -1);
                  auVar49[1] = -(pcVar2[1] == -1);
                  auVar49[2] = -(pcVar2[2] == -1);
                  auVar49[3] = -(pcVar2[3] == -1);
                  auVar49[4] = -(pcVar2[4] == -1);
                  auVar49[5] = -(pcVar2[5] == -1);
                  auVar49[6] = -(pcVar2[6] == -1);
                  auVar49[7] = -(pcVar2[7] == -1);
                  auVar49[8] = -(pcVar2[8] == -1);
                  auVar49[9] = -(pcVar2[9] == -1);
                  auVar49[10] = -(pcVar2[10] == -1);
                  auVar49[0xb] = -(pcVar2[0xb] == -1);
                  auVar49[0xc] = -(pcVar2[0xc] == -1);
                  auVar49[0xd] = -(pcVar2[0xd] == -1);
                  auVar49[0xe] = -(pcVar2[0xe] == -1);
                  auVar49[0xf] = -(pcVar2[0xf] == -1);
                  if ((((((((((((((((SUB161(auVar49 >> 7,0) & 1) != 0 ||
                                   (SUB161(auVar49 >> 0xf,0) & 1) != 0) ||
                                  (SUB161(auVar49 >> 0x17,0) & 1) != 0) ||
                                 (SUB161(auVar49 >> 0x1f,0) & 1) != 0) ||
                                (SUB161(auVar49 >> 0x27,0) & 1) != 0) ||
                               (SUB161(auVar49 >> 0x2f,0) & 1) != 0) ||
                              (SUB161(auVar49 >> 0x37,0) & 1) != 0) ||
                             (SUB161(auVar49 >> 0x3f,0) & 1) != 0) ||
                            (SUB161(auVar49 >> 0x47,0) & 1) != 0) ||
                           (SUB161(auVar49 >> 0x4f,0) & 1) != 0) ||
                          (SUB161(auVar49 >> 0x57,0) & 1) != 0) ||
                         (SUB161(auVar49 >> 0x5f,0) & 1) != 0) ||
                        (SUB161(auVar49 >> 0x67,0) & 1) != 0) ||
                       (SUB161(auVar49 >> 0x6f,0) & 1) != 0) || (SUB161(auVar49 >> 0x77,0) & 1) != 0
                      ) || auVar49[0xf] < '\0') goto LAB_1429930b6;
                  uVar26 = uVar26 + lVar33 + 0x10;
                  lVar33 = lVar33 + 0x10;
                } while( true );
              }
              uVar28 = 0xe;
              uVar25 = pdb_140dc6290(&UNK_1436096d6,0xe);
              pdb_1407339e0(&pppppppbStack_168,&pppppppbStack_188,uVar25,uVar28);
              uVar25 = pdb_14116dd60(&pppppppbStack_168);
              pdb_14119b2b0(uVar25);
              pppppppbVar32 = pppppppbStack_168;
              pppppppbStack_98 = pppppppbStack_168;
              pppppppbStack_90 = pppppppbStack_160;
              pppppppbStack_88 = pppppppbStack_158;
              uVar40 = true;
              if (pppppppbStack_168[0x39] == (byte ******)0x0) {
LAB_14299310e:
                pdb_142dc8110(&UNK_142fa60f8,0x16,&UNK_142fa6ad0);
LAB_142993126:
                if ((bool)uVar40) {
                  ppppppbVar30 = (byte ******)0x1;
LAB_142993162:
                  uStack_80 = *(undefined1 *)(lVar33 + 0x40);
                  uVar25 = *puVar6;
                  pppppppbStack_98 = pppppppbVar32;
                  pppppppbStack_90 = (byte *******)ppppppbVar30;
                  pppppppbStack_88 = pppppppbVar32;
                  pdb_140ad6f30(uVar27,&pppppppbStack_98);
                  pppppppbStack_168 = (byte *******)0x2;
                  pdb_140a003a0(uVar25,&pppppppbStack_168);
                  return;
                }
                uVar25 = *(undefined8 *)(lVar33 + 0x30);
                pdb_14007ee60();
                ppppppbVar39 = (byte ******)0x1;
                ppppppbVar30 = (byte ******)pub_1406abab0((ulonglong)pppppppbVar32,1);
                if (ppppppbVar30 != (byte ******)0x0) {
                  pub_142e32760(ppppppbVar30,uVar25,pppppppbVar32);
                  goto LAB_142993162;
                }
              }
              else {
                uVar26 = pdb_1400af0a0(pppppppbStack_168 + 0x3a,&pppppppbStack_90);
                ppppppbVar39 = pppppppbVar32[0x36];
                bVar41 = (byte)(uVar26 >> 0x39);
                auVar42 = ZEXT216(CONCAT11(bVar41,bVar41));
                auVar42 = pshuflw(auVar42,auVar42,0);
                lVar34 = 0;
                while( true ) {
                  uVar26 = uVar26 & (ulonglong)pppppppbVar32[0x37];
                  pcVar2 = (char *)((longlong)ppppppbVar39 + uVar26);
                  auVar55[0] = -(*pcVar2 == auVar42[0]);
                  auVar55[1] = -(pcVar2[1] == auVar42[1]);
                  auVar55[2] = -(pcVar2[2] == auVar42[2]);
                  auVar55[3] = -(pcVar2[3] == auVar42[3]);
                  auVar55[4] = -(pcVar2[4] == auVar42[4]);
                  auVar55[5] = -(pcVar2[5] == auVar42[5]);
                  auVar55[6] = -(pcVar2[6] == auVar42[6]);
                  auVar55[7] = -(pcVar2[7] == auVar42[7]);
                  auVar55[8] = -(pcVar2[8] == auVar42[0]);
                  auVar55[9] = -(pcVar2[9] == auVar42[1]);
                  auVar55[10] = -(pcVar2[10] == auVar42[2]);
                  auVar55[0xb] = -(pcVar2[0xb] == auVar42[3]);
                  auVar55[0xc] = -(pcVar2[0xc] == auVar42[4]);
                  auVar55[0xd] = -(pcVar2[0xd] == auVar42[5]);
                  auVar55[0xe] = -(pcVar2[0xe] == auVar42[6]);
                  auVar55[0xf] = -(pcVar2[0xf] == auVar42[7]);
                  uVar36 = (ushort)(SUB161(auVar55 >> 7,0) & 1) |
                           (ushort)(SUB161(auVar55 >> 0xf,0) & 1) << 1 |
                           (ushort)(SUB161(auVar55 >> 0x17,0) & 1) << 2 |
                           (ushort)(SUB161(auVar55 >> 0x1f,0) & 1) << 3 |
                           (ushort)(SUB161(auVar55 >> 0x27,0) & 1) << 4 |
                           (ushort)(SUB161(auVar55 >> 0x2f,0) & 1) << 5 |
                           (ushort)(SUB161(auVar55 >> 0x37,0) & 1) << 6 |
                           (ushort)(SUB161(auVar55 >> 0x3f,0) & 1) << 7 |
                           (ushort)(SUB161(auVar55 >> 0x47,0) & 1) << 8 |
                           (ushort)(SUB161(auVar55 >> 0x4f,0) & 1) << 9 |
                           (ushort)(SUB161(auVar55 >> 0x57,0) & 1) << 10 |
                           (ushort)(SUB161(auVar55 >> 0x5f,0) & 1) << 0xb |
                           (ushort)(SUB161(auVar55 >> 0x67,0) & 1) << 0xc |
                           (ushort)(SUB161(auVar55 >> 0x6f,0) & 1) << 0xd |
                           (ushort)(SUB161(auVar55 >> 0x77,0) & 1) << 0xe |
                           (ushort)(auVar55[0xf] >> 7) << 0xf;
                  uVar35 = (uint)uVar36;
                  if (uVar36 != 0) break;
LAB_142992ee3:
                  auVar48[0] = -(*pcVar2 == -1);
                  auVar48[1] = -(pcVar2[1] == -1);
                  auVar48[2] = -(pcVar2[2] == -1);
                  auVar48[3] = -(pcVar2[3] == -1);
                  auVar48[4] = -(pcVar2[4] == -1);
                  auVar48[5] = -(pcVar2[5] == -1);
                  auVar48[6] = -(pcVar2[6] == -1);
                  auVar48[7] = -(pcVar2[7] == -1);
                  auVar48[8] = -(pcVar2[8] == -1);
                  auVar48[9] = -(pcVar2[9] == -1);
                  auVar48[10] = -(pcVar2[10] == -1);
                  auVar48[0xb] = -(pcVar2[0xb] == -1);
                  auVar48[0xc] = -(pcVar2[0xc] == -1);
                  auVar48[0xd] = -(pcVar2[0xd] == -1);
                  auVar48[0xe] = -(pcVar2[0xe] == -1);
                  auVar48[0xf] = -(pcVar2[0xf] == -1);
                  bVar23 = (SUB161(auVar48 >> 7,0) & 1) == 0;
                  bVar24 = (SUB161(auVar48 >> 0xf,0) & 1) == 0;
                  bVar22 = (SUB161(auVar48 >> 0x17,0) & 1) == 0;
                  bVar21 = (SUB161(auVar48 >> 0x1f,0) & 1) == 0;
                  bVar20 = (SUB161(auVar48 >> 0x27,0) & 1) == 0;
                  bVar19 = (SUB161(auVar48 >> 0x2f,0) & 1) == 0;
                  bVar18 = (SUB161(auVar48 >> 0x37,0) & 1) == 0;
                  bVar17 = (SUB161(auVar48 >> 0x3f,0) & 1) == 0;
                  bVar16 = (SUB161(auVar48 >> 0x47,0) & 1) == 0;
                  bVar15 = (SUB161(auVar48 >> 0x4f,0) & 1) == 0;
                  bVar14 = (SUB161(auVar48 >> 0x57,0) & 1) == 0;
                  bVar13 = (SUB161(auVar48 >> 0x5f,0) & 1) == 0;
                  bVar12 = (SUB161(auVar48 >> 0x67,0) & 1) == 0;
                  bVar11 = (SUB161(auVar48 >> 0x6f,0) & 1) == 0;
                  bVar10 = (SUB161(auVar48 >> 0x77,0) & 1) == 0;
                  uVar40 = ((((((((((((((bVar23 && bVar24) && bVar22) && bVar21) && bVar20) &&
                                    bVar19) && bVar18) && bVar17) && bVar16) && bVar15) && bVar14)
                              && bVar13) && bVar12) && bVar11) && bVar10) && -1 < auVar48[0xf];
                  if (((((((((((((((!bVar23 || !bVar24) || !bVar22) || !bVar21) || !bVar20) ||
                               !bVar19) || !bVar18) || !bVar17) || !bVar16) || !bVar15) || !bVar14)
                         || !bVar13) || !bVar12) || !bVar11) || !bVar10) || -1 >= auVar48[0xf])
                  goto LAB_14299310e;
                  uVar26 = uVar26 + lVar34 + 0x10;
                  lVar34 = lVar34 + 0x10;
                }
                while( true ) {
                  uVar8 = 0;
                  for (uVar9 = uVar35; (uVar9 & 1) == 0; uVar9 = uVar9 >> 1 | 0x80000000) {
                    uVar8 = uVar8 + 1;
                  }
                  uVar37 = uVar8 + uVar26 & (ulonglong)pppppppbVar32[0x37];
                  uVar38 = uVar37 * -0xd8;
                  if (pppppppbStack_90 == (byte *******)ppppppbVar39[uVar37 * -0x1b + -0x1b]) break;
                  uVar36 = (ushort)(uVar35 - 1) & (ushort)uVar35;
                  uVar35 = CONCAT22((short)(uVar35 - 1 >> 0x10),uVar36);
                  uVar38 = (ulonglong)uVar35;
                  if (uVar36 == 0) goto LAB_142992ee3;
                }
                if ((*(byte *)((longlong)ppppppbVar39 + (uVar38 - 6)) & 0x30) == 0) {
                  return;
                }
                pppppppbVar32 = *(byte ********)(lVar33 + 0x38);
                uVar40 = pppppppbVar32 == (byte *******)0x0;
                if (-1 < (longlong)pppppppbVar32) goto LAB_142993126;
                ppppppbVar39 = (byte ******)0x0;
              }
              pdb_142dc7e2a(ppppppbVar39,pppppppbVar32);
LAB_1429930e7:
              pbVar1 = (byte *)((longlong)ppppppbVar39 + (uVar38 - 5));
              *pbVar1 = *pbVar1 | 2;
              return;
            }
            uVar36 = (ushort)(uVar35 - 1) & (ushort)uVar35;
            uVar35 = CONCAT22((short)(uVar35 - 1 >> 0x10),uVar36);
          }
          auVar47[0] = -(*pcVar2 == -1);
          auVar47[1] = -(pcVar2[1] == -1);
          auVar47[2] = -(pcVar2[2] == -1);
          auVar47[3] = -(pcVar2[3] == -1);
          auVar47[4] = -(pcVar2[4] == -1);
          auVar47[5] = -(pcVar2[5] == -1);
          auVar47[6] = -(pcVar2[6] == -1);
          auVar47[7] = -(pcVar2[7] == -1);
          auVar47[8] = -(pcVar2[8] == -1);
          auVar47[9] = -(pcVar2[9] == -1);
          auVar47[10] = -(pcVar2[10] == -1);
          auVar47[0xb] = -(pcVar2[0xb] == -1);
          auVar47[0xc] = -(pcVar2[0xc] == -1);
          auVar47[0xd] = -(pcVar2[0xd] == -1);
          auVar47[0xe] = -(pcVar2[0xe] == -1);
          auVar47[0xf] = -(pcVar2[0xf] == -1);
          if ((((((((((((((((SUB161(auVar47 >> 7,0) & 1) != 0 || (SUB161(auVar47 >> 0xf,0) & 1) != 0
                           ) || (SUB161(auVar47 >> 0x17,0) & 1) != 0) ||
                         (SUB161(auVar47 >> 0x1f,0) & 1) != 0) ||
                        (SUB161(auVar47 >> 0x27,0) & 1) != 0) ||
                       (SUB161(auVar47 >> 0x2f,0) & 1) != 0) || (SUB161(auVar47 >> 0x37,0) & 1) != 0
                      ) || (SUB161(auVar47 >> 0x3f,0) & 1) != 0) ||
                    (SUB161(auVar47 >> 0x47,0) & 1) != 0) || (SUB161(auVar47 >> 0x4f,0) & 1) != 0)
                  || (SUB161(auVar47 >> 0x57,0) & 1) != 0) || (SUB161(auVar47 >> 0x5f,0) & 1) != 0)
                || (SUB161(auVar47 >> 0x67,0) & 1) != 0) || (SUB161(auVar47 >> 0x6f,0) & 1) != 0) ||
              (SUB161(auVar47 >> 0x77,0) & 1) != 0) || auVar47[0xf] < '\0') goto LAB_1429930f3;
          uVar26 = uVar26 + lVar34 + 0x10;
          lVar34 = lVar34 + 0x10;
        } while( true );
      }
      uVar36 = (ushort)(uVar35 - 1) & (ushort)uVar35;
      uVar35 = CONCAT22((short)(uVar35 - 1 >> 0x10),uVar36);
    }
    auVar46[0] = -(auVar51[0] == -1);
    auVar46[1] = -(auVar51[1] == -1);
    auVar46[2] = -(auVar51[2] == -1);
    auVar46[3] = -(auVar51[3] == -1);
    auVar46[4] = -(auVar51[4] == -1);
    auVar46[5] = -(auVar51[5] == -1);
    auVar46[6] = -(auVar51[6] == -1);
    auVar46[7] = -(auVar51[7] == -1);
    auVar46[8] = -(auVar51[8] == -1);
    auVar46[9] = -(auVar51[9] == -1);
    auVar46[10] = -(auVar51[10] == -1);
    auVar46[0xb] = -(auVar51[0xb] == -1);
    auVar46[0xc] = -(auVar51[0xc] == -1);
    auVar46[0xd] = -(auVar51[0xd] == -1);
    auVar46[0xe] = -(auVar51[0xe] == -1);
    auVar46[0xf] = -(auVar51[0xf] == -1);
    if ((((((((((((((((SUB161(auVar46 >> 7,0) & 1) != 0 || (SUB161(auVar46 >> 0xf,0) & 1) != 0) ||
                    (SUB161(auVar46 >> 0x17,0) & 1) != 0) || (SUB161(auVar46 >> 0x1f,0) & 1) != 0)
                  || (SUB161(auVar46 >> 0x27,0) & 1) != 0) || (SUB161(auVar46 >> 0x2f,0) & 1) != 0)
                || (SUB161(auVar46 >> 0x37,0) & 1) != 0) || (SUB161(auVar46 >> 0x3f,0) & 1) != 0) ||
              (SUB161(auVar46 >> 0x47,0) & 1) != 0) || (SUB161(auVar46 >> 0x4f,0) & 1) != 0) ||
            (SUB161(auVar46 >> 0x57,0) & 1) != 0) || (SUB161(auVar46 >> 0x5f,0) & 1) != 0) ||
          (SUB161(auVar46 >> 0x67,0) & 1) != 0) || (SUB161(auVar46 >> 0x6f,0) & 1) != 0) ||
        (SUB161(auVar46 >> 0x77,0) & 1) != 0) || auVar46[0xf] < '\0') goto LAB_142992b90;
    uVar26 = uVar26 + lVar33 + 0x10;
    lVar33 = lVar33 + 0x10;
  } while( true );
LAB_142992a47:
  auVar45[0] = -(*pcVar2 == -1);
  auVar45[1] = -(pcVar2[1] == -1);
  auVar45[2] = -(pcVar2[2] == -1);
  auVar45[3] = -(pcVar2[3] == -1);
  auVar45[4] = -(pcVar2[4] == -1);
  auVar45[5] = -(pcVar2[5] == -1);
  auVar45[6] = -(pcVar2[6] == -1);
  auVar45[7] = -(pcVar2[7] == -1);
  auVar45[8] = -(pcVar2[8] == -1);
  auVar45[9] = -(pcVar2[9] == -1);
  auVar45[10] = -(pcVar2[10] == -1);
  auVar45[0xb] = -(pcVar2[0xb] == -1);
  auVar45[0xc] = -(pcVar2[0xc] == -1);
  auVar45[0xd] = -(pcVar2[0xd] == -1);
  auVar45[0xe] = -(pcVar2[0xe] == -1);
  auVar45[0xf] = -(pcVar2[0xf] == -1);
  if ((((((((((((((((SUB161(auVar45 >> 7,0) & 1) != 0 || (SUB161(auVar45 >> 0xf,0) & 1) != 0) ||
                  (SUB161(auVar45 >> 0x17,0) & 1) != 0) || (SUB161(auVar45 >> 0x1f,0) & 1) != 0) ||
                (SUB161(auVar45 >> 0x27,0) & 1) != 0) || (SUB161(auVar45 >> 0x2f,0) & 1) != 0) ||
              (SUB161(auVar45 >> 0x37,0) & 1) != 0) || (SUB161(auVar45 >> 0x3f,0) & 1) != 0) ||
            (SUB161(auVar45 >> 0x47,0) & 1) != 0) || (SUB161(auVar45 >> 0x4f,0) & 1) != 0) ||
          (SUB161(auVar45 >> 0x57,0) & 1) != 0) || (SUB161(auVar45 >> 0x5f,0) & 1) != 0) ||
        (SUB161(auVar45 >> 0x67,0) & 1) != 0) || (SUB161(auVar45 >> 0x6f,0) & 1) != 0) ||
      (SUB161(auVar45 >> 0x77,0) & 1) != 0) || auVar45[0xf] < '\0') {
LAB_1429930b6:
                    /* WARNING: Subroutine does not return */
    pdb_142dc8150(&UNK_142fa6b48);
  }
  uVar26 = uVar26 + lVar33 + 0x10;
  lVar33 = lVar33 + 0x10;
  goto LAB_142992a01;
}

