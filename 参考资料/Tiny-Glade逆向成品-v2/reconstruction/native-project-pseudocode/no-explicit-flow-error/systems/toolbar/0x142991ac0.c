// VA 0x142991ac0, PDB extent 2511 bytes
// toolbar::menu::mod_row::mod_row<toolbar::menu::mods_mine_tab::list_slot::closure$1::closure_env$3>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/menu/mod_row.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   toolbar::menu::mod_row::mod_row<toolbar::menu::mods_mine_tab::list_slot::closure$1::closure_env$3>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/menu/mod_row.rs
   Extent: 2511 */

void pdb_142991ac0(longlong param_1,byte *param_2,undefined8 param_3,undefined8 param_4,
                  ulonglong *param_5,undefined8 *param_6)

{
  byte *pbVar1;
  char *pcVar2;
  byte *pbVar3;
  undefined8 *puVar4;
  uint uVar5;
  uint uVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
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
  undefined8 uVar22;
  ulonglong uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  ulonglong uVar26;
  byte *pbVar27;
  longlong lVar28;
  byte *pbVar29;
  longlong lVar30;
  uint uVar31;
  ushort uVar32;
  longlong lVar33;
  longlong lVar34;
  undefined1 uVar35;
  byte bVar36;
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auStack_1b0 [8];
  byte *pbStack_1a8;
  byte *pbStack_198;
  undefined8 uStack_190;
  byte *pbStack_188;
  byte *pbStack_180;
  undefined8 uStack_178;
  byte *pbStack_168;
  byte *pbStack_160;
  undefined8 uStack_158;
  byte *pbStack_c0;
  byte *pbStack_b8;
  byte *pbStack_b0;
  undefined8 uStack_a8;
  byte *pbStack_98;
  byte *pbStack_90;
  byte *pbStack_88;
  undefined1 uStack_80;
  undefined8 uStack_70;
  
  uVar25 = _UNK_14329c338;
  pbVar27 = _DAT_14329c330;
  uStack_70 = 0xfffffffffffffffe;
  pbVar29 = *(byte **)(param_1 + 8);
  pbStack_160 = _DAT_14329c330;
  uStack_158 = _UNK_14329c338;
  pbStack_168 = param_2;
  pbStack_160 = (byte *)pdb_1400affa0(&pbStack_168);
  pbStack_168 = pbVar29;
  uVar22 = pdb_1400b0130(&pbStack_168);
  pdb_14072caa0(&pbStack_98,param_1,uVar22);
  pdb_141174160(&pbStack_168,&pbStack_98,&UNK_1436096f9,0x12,0);
  pdb_141186520(auStack_1b0,&pbStack_168,&UNK_14360970b,7);
  pbVar29 = pbStack_1a8;
  pbStack_168 = (byte *)0x0;
  pbStack_160 = pbVar27;
  uStack_158 = uVar25;
  pbStack_160 = (byte *)pdb_1400affa0(&pbStack_168);
  pbStack_168 = pbVar29;
  uVar22 = pdb_1400b0130(&pbStack_168);
  pdb_14072caa0(&pbStack_168,auStack_1b0,uVar22);
  pbVar29 = pbStack_168;
  if (*(longlong *)(pbStack_168 + 0x1c8) != 0) {
    uVar23 = pdb_1400af0a0(pbStack_168 + 0x1d0,&pbStack_160);
    lVar28 = *(longlong *)(pbVar29 + 0x1b0);
    uVar26 = *(ulonglong *)(pbVar29 + 0x1b8);
    bVar36 = (byte)(uVar23 >> 0x39);
    auVar37 = ZEXT216(CONCAT11(bVar36,bVar36));
    auVar37 = pshuflw(auVar37,auVar37,0);
    lVar30 = 0;
    while( true ) {
      uVar23 = uVar23 & uVar26;
      auVar44 = *(undefined1 (*) [16])(lVar28 + uVar23);
      auVar43[0] = -(auVar44[0] == auVar37[0]);
      auVar43[1] = -(auVar44[1] == auVar37[1]);
      auVar43[2] = -(auVar44[2] == auVar37[2]);
      auVar43[3] = -(auVar44[3] == auVar37[3]);
      auVar43[4] = -(auVar44[4] == auVar37[4]);
      auVar43[5] = -(auVar44[5] == auVar37[5]);
      auVar43[6] = -(auVar44[6] == auVar37[6]);
      auVar43[7] = -(auVar44[7] == auVar37[7]);
      auVar43[8] = -(auVar44[8] == auVar37[0]);
      auVar43[9] = -(auVar44[9] == auVar37[1]);
      auVar43[10] = -(auVar44[10] == auVar37[2]);
      auVar43[0xb] = -(auVar44[0xb] == auVar37[3]);
      auVar43[0xc] = -(auVar44[0xc] == auVar37[4]);
      auVar43[0xd] = -(auVar44[0xd] == auVar37[5]);
      auVar43[0xe] = -(auVar44[0xe] == auVar37[6]);
      auVar43[0xf] = -(auVar44[0xf] == auVar37[7]);
      uVar32 = (ushort)(SUB161(auVar43 >> 7,0) & 1) | (ushort)(SUB161(auVar43 >> 0xf,0) & 1) << 1 |
               (ushort)(SUB161(auVar43 >> 0x17,0) & 1) << 2 |
               (ushort)(SUB161(auVar43 >> 0x1f,0) & 1) << 3 |
               (ushort)(SUB161(auVar43 >> 0x27,0) & 1) << 4 |
               (ushort)(SUB161(auVar43 >> 0x2f,0) & 1) << 5 |
               (ushort)(SUB161(auVar43 >> 0x37,0) & 1) << 6 |
               (ushort)(SUB161(auVar43 >> 0x3f,0) & 1) << 7 |
               (ushort)(SUB161(auVar43 >> 0x47,0) & 1) << 8 |
               (ushort)(SUB161(auVar43 >> 0x4f,0) & 1) << 9 |
               (ushort)(SUB161(auVar43 >> 0x57,0) & 1) << 10 |
               (ushort)(SUB161(auVar43 >> 0x5f,0) & 1) << 0xb |
               (ushort)(SUB161(auVar43 >> 0x67,0) & 1) << 0xc |
               (ushort)(SUB161(auVar43 >> 0x6f,0) & 1) << 0xd |
               (ushort)(SUB161(auVar43 >> 0x77,0) & 1) << 0xe | (ushort)(auVar43[0xf] >> 7) << 0xf;
      uVar31 = (uint)uVar32;
      while (uVar32 != 0) {
        uVar5 = 0;
        for (uVar6 = uVar31; (uVar6 & 1) == 0; uVar6 = uVar6 >> 1 | 0x80000000) {
          uVar5 = uVar5 + 1;
        }
        lVar33 = (uVar5 + uVar23 & uVar26) * -0xd8;
        if (pbStack_160 == *(byte **)(lVar28 + -0xd8 + lVar33)) {
          lVar28 = lVar28 + lVar33;
          *(undefined1 (*) [16])(lVar28 + -0x88) = (undefined1  [16])0x0;
          *(undefined1 (*) [16])(lVar28 + -0x98) = (undefined1  [16])0x0;
          *(undefined1 (*) [16])(lVar28 + -0xa8) = (undefined1  [16])0x0;
          *(undefined1 (*) [16])(lVar28 + -0xb8) = (undefined1  [16])0x0;
          *(undefined8 *)(lVar28 + -0x78) = 0x400000100000000;
          uStack_178 = uStack_158;
          pbStack_188 = pbStack_168;
          pbStack_180 = pbStack_160;
          pdb_140737280(&pbStack_98,param_3,param_4);
          pbVar1 = pbStack_88;
          pbStack_c0 = pbStack_90;
          pbStack_198 = pbStack_90;
          uStack_190 = pbStack_88;
          pbStack_168 = (byte *)pdb_140bbbcb0(&pbStack_198);
          uVar22 = _UNK_14329c268;
          pbVar29 = _DAT_14329c260;
          pbStack_160 = _DAT_14329c260;
          uStack_158 = _UNK_14329c268;
          pbStack_160 = (byte *)pdb_1400affa0(&pbStack_168);
          pbStack_168 = pbStack_180;
          uVar24 = pdb_1400b0130(&pbStack_168);
          pdb_14072caa0(&pbStack_168,&pbStack_188,uVar24);
          uVar24 = pdb_14116ee90(&pbStack_168,0);
          pdb_14119b6b0(uVar24,pbStack_c0,pbVar1);
          uStack_a8 = uStack_158;
          pbStack_b8 = pbStack_168;
          pbStack_b0 = pbStack_160;
          uVar24 = pdb_14116e180(&pbStack_b8);
          pdb_14119b2b0(uVar24,_DAT_1434da1b0);
          uStack_158 = uStack_a8;
          pbStack_168 = pbStack_b8;
          pbStack_160 = pbStack_b0;
          uVar24 = pdb_14116e180(&pbStack_168);
          pdb_140cb5df0(uVar24);
          pbVar1 = pbStack_168;
          pbStack_b8 = pbStack_168;
          pbStack_b0 = pbStack_160;
          uStack_a8 = uStack_158;
          if (*(longlong *)(pbStack_168 + 0x1c8) == 0) goto LAB_142992096;
          uVar23 = pdb_1400af0a0(pbStack_168 + 0x1d0,&pbStack_b0);
          lVar28 = *(longlong *)(pbVar1 + 0x1b0);
          uVar26 = *(ulonglong *)(pbVar1 + 0x1b8);
          bVar36 = (byte)(uVar23 >> 0x39);
          auVar37 = ZEXT216(CONCAT11(bVar36,bVar36));
          auVar37 = pshuflw(auVar37,auVar37,0);
          lVar30 = 0;
          goto LAB_142991e54;
        }
        uVar32 = (ushort)(uVar31 - 1) & (ushort)uVar31;
        uVar31 = CONCAT22((short)(uVar31 - 1 >> 0x10),uVar32);
      }
      auVar38[0] = -(auVar44[0] == -1);
      auVar38[1] = -(auVar44[1] == -1);
      auVar38[2] = -(auVar44[2] == -1);
      auVar38[3] = -(auVar44[3] == -1);
      auVar38[4] = -(auVar44[4] == -1);
      auVar38[5] = -(auVar44[5] == -1);
      auVar38[6] = -(auVar44[6] == -1);
      auVar38[7] = -(auVar44[7] == -1);
      auVar38[8] = -(auVar44[8] == -1);
      auVar38[9] = -(auVar44[9] == -1);
      auVar38[10] = -(auVar44[10] == -1);
      auVar38[0xb] = -(auVar44[0xb] == -1);
      auVar38[0xc] = -(auVar44[0xc] == -1);
      auVar38[0xd] = -(auVar44[0xd] == -1);
      auVar38[0xe] = -(auVar44[0xe] == -1);
      auVar38[0xf] = -(auVar44[0xf] == -1);
      if ((((((((((((((((SUB161(auVar38 >> 7,0) & 1) != 0 || (SUB161(auVar38 >> 0xf,0) & 1) != 0) ||
                      (SUB161(auVar38 >> 0x17,0) & 1) != 0) || (SUB161(auVar38 >> 0x1f,0) & 1) != 0)
                    || (SUB161(auVar38 >> 0x27,0) & 1) != 0) || (SUB161(auVar38 >> 0x2f,0) & 1) != 0
                   ) || (SUB161(auVar38 >> 0x37,0) & 1) != 0) ||
                 (SUB161(auVar38 >> 0x3f,0) & 1) != 0) || (SUB161(auVar38 >> 0x47,0) & 1) != 0) ||
               (SUB161(auVar38 >> 0x4f,0) & 1) != 0) || (SUB161(auVar38 >> 0x57,0) & 1) != 0) ||
             (SUB161(auVar38 >> 0x5f,0) & 1) != 0) || (SUB161(auVar38 >> 0x67,0) & 1) != 0) ||
           (SUB161(auVar38 >> 0x6f,0) & 1) != 0) || (SUB161(auVar38 >> 0x77,0) & 1) != 0) ||
          auVar38[0xf] < '\0') break;
      uVar23 = uVar23 + lVar30 + 0x10;
      lVar30 = lVar30 + 0x10;
    }
  }
LAB_1429921bd:
                    /* WARNING: Subroutine does not return */
  pdb_142dc8150(&UNK_142fa6b30);
LAB_142991e54:
  uVar23 = uVar23 & uVar26;
  pcVar2 = (char *)(lVar28 + uVar23);
  auVar44[0] = -(*pcVar2 == auVar37[0]);
  auVar44[1] = -(pcVar2[1] == auVar37[1]);
  auVar44[2] = -(pcVar2[2] == auVar37[2]);
  auVar44[3] = -(pcVar2[3] == auVar37[3]);
  auVar44[4] = -(pcVar2[4] == auVar37[4]);
  auVar44[5] = -(pcVar2[5] == auVar37[5]);
  auVar44[6] = -(pcVar2[6] == auVar37[6]);
  auVar44[7] = -(pcVar2[7] == auVar37[7]);
  auVar44[8] = -(pcVar2[8] == auVar37[0]);
  auVar44[9] = -(pcVar2[9] == auVar37[1]);
  auVar44[10] = -(pcVar2[10] == auVar37[2]);
  auVar44[0xb] = -(pcVar2[0xb] == auVar37[3]);
  auVar44[0xc] = -(pcVar2[0xc] == auVar37[4]);
  auVar44[0xd] = -(pcVar2[0xd] == auVar37[5]);
  auVar44[0xe] = -(pcVar2[0xe] == auVar37[6]);
  auVar44[0xf] = -(pcVar2[0xf] == auVar37[7]);
  uVar32 = (ushort)(SUB161(auVar44 >> 7,0) & 1) | (ushort)(SUB161(auVar44 >> 0xf,0) & 1) << 1 |
           (ushort)(SUB161(auVar44 >> 0x17,0) & 1) << 2 |
           (ushort)(SUB161(auVar44 >> 0x1f,0) & 1) << 3 |
           (ushort)(SUB161(auVar44 >> 0x27,0) & 1) << 4 |
           (ushort)(SUB161(auVar44 >> 0x2f,0) & 1) << 5 |
           (ushort)(SUB161(auVar44 >> 0x37,0) & 1) << 6 |
           (ushort)(SUB161(auVar44 >> 0x3f,0) & 1) << 7 |
           (ushort)(SUB161(auVar44 >> 0x47,0) & 1) << 8 |
           (ushort)(SUB161(auVar44 >> 0x4f,0) & 1) << 9 |
           (ushort)(SUB161(auVar44 >> 0x57,0) & 1) << 10 |
           (ushort)(SUB161(auVar44 >> 0x5f,0) & 1) << 0xb |
           (ushort)(SUB161(auVar44 >> 0x67,0) & 1) << 0xc |
           (ushort)(SUB161(auVar44 >> 0x6f,0) & 1) << 0xd |
           (ushort)(SUB161(auVar44 >> 0x77,0) & 1) << 0xe | (ushort)(auVar44[0xf] >> 7) << 0xf;
  uVar31 = (uint)uVar32;
  while (uVar32 != 0) {
    uVar5 = 0;
    for (uVar6 = uVar31; (uVar6 & 1) == 0; uVar6 = uVar6 >> 1 | 0x80000000) {
      uVar5 = uVar5 + 1;
    }
    lVar33 = (uVar5 + uVar23 & uVar26) * -0xd8;
    if (pbStack_b0 == *(byte **)(lVar28 + -0xd8 + lVar33)) {
      pbVar1 = (byte *)(lVar28 + lVar33 + -5);
      *pbVar1 = *pbVar1 | 2;
      if (pbStack_98 != (byte *)0x0) {
        pub_1406abac0(pbStack_c0,(ulonglong)pbStack_98,1);
      }
      pbVar1 = (byte *)*param_5;
      if (pbVar1 == (byte *)0x0) goto LAB_1429920ac;
      pbVar3 = (byte *)param_5[1];
      uVar26 = param_5[2];
      pbStack_b8 = pbVar1;
      pbStack_b0 = pbVar3;
      pbStack_168 = (byte *)pdb_140bbbcb0(&pbStack_b8);
      pbStack_160 = pbVar29;
      uStack_158 = uVar22;
      pbStack_160 = (byte *)pdb_1400affa0(&pbStack_168);
      pbStack_168 = pbStack_180;
      uVar22 = pdb_1400b0130(&pbStack_168);
      pdb_14072caa0(&pbStack_168,&pbStack_188,uVar22);
      uVar22 = pdb_14116ee90(&pbStack_168,0);
      pdb_14119b6b0(uVar22,pbVar1,pbVar3);
      pbStack_88 = (byte *)uStack_158;
      pbStack_98 = pbStack_168;
      pbStack_90 = pbStack_160;
      uVar22 = pdb_14116e180(&pbStack_98);
      pdb_14119b2b0(uVar22);
      uStack_158 = pbStack_88;
      pbStack_168 = pbStack_98;
      pbStack_160 = pbStack_90;
      lVar28 = pdb_14116e180(&pbStack_168);
      pbVar29 = pbStack_168;
      *(int *)(lVar28 + 600) = (int)uVar26;
      pbStack_98 = pbStack_168;
      pbStack_90 = pbStack_160;
      pbStack_88 = (byte *)uStack_158;
      if (*(longlong *)(pbStack_168 + 0x1c8) == 0) goto LAB_14299235c;
      uVar23 = pdb_1400af0a0(pbStack_168 + 0x1d0,&pbStack_90);
      lVar28 = *(longlong *)(pbVar29 + 0x1b0);
      uVar26 = *(ulonglong *)(pbVar29 + 0x1b8);
      bVar36 = (byte)(uVar23 >> 0x39);
      auVar37 = ZEXT216(CONCAT11(bVar36,bVar36));
      auVar37 = pshuflw(auVar37,auVar37,0);
      lVar30 = 0;
      goto LAB_142992031;
    }
    uVar32 = (ushort)(uVar31 - 1) & (ushort)uVar31;
    uVar31 = CONCAT22((short)(uVar31 - 1 >> 0x10),uVar32);
  }
  auVar39[0] = -(*pcVar2 == -1);
  auVar39[1] = -(pcVar2[1] == -1);
  auVar39[2] = -(pcVar2[2] == -1);
  auVar39[3] = -(pcVar2[3] == -1);
  auVar39[4] = -(pcVar2[4] == -1);
  auVar39[5] = -(pcVar2[5] == -1);
  auVar39[6] = -(pcVar2[6] == -1);
  auVar39[7] = -(pcVar2[7] == -1);
  auVar39[8] = -(pcVar2[8] == -1);
  auVar39[9] = -(pcVar2[9] == -1);
  auVar39[10] = -(pcVar2[10] == -1);
  auVar39[0xb] = -(pcVar2[0xb] == -1);
  auVar39[0xc] = -(pcVar2[0xc] == -1);
  auVar39[0xd] = -(pcVar2[0xd] == -1);
  auVar39[0xe] = -(pcVar2[0xe] == -1);
  auVar39[0xf] = -(pcVar2[0xf] == -1);
  if ((((((((((((((((SUB161(auVar39 >> 7,0) & 1) != 0 || (SUB161(auVar39 >> 0xf,0) & 1) != 0) ||
                  (SUB161(auVar39 >> 0x17,0) & 1) != 0) || (SUB161(auVar39 >> 0x1f,0) & 1) != 0) ||
                (SUB161(auVar39 >> 0x27,0) & 1) != 0) || (SUB161(auVar39 >> 0x2f,0) & 1) != 0) ||
              (SUB161(auVar39 >> 0x37,0) & 1) != 0) || (SUB161(auVar39 >> 0x3f,0) & 1) != 0) ||
            (SUB161(auVar39 >> 0x47,0) & 1) != 0) || (SUB161(auVar39 >> 0x4f,0) & 1) != 0) ||
          (SUB161(auVar39 >> 0x57,0) & 1) != 0) || (SUB161(auVar39 >> 0x5f,0) & 1) != 0) ||
        (SUB161(auVar39 >> 0x67,0) & 1) != 0) || (SUB161(auVar39 >> 0x6f,0) & 1) != 0) ||
      (SUB161(auVar39 >> 0x77,0) & 1) != 0) || auVar39[0xf] < '\0') {
LAB_142992096:
                    /* WARNING: Subroutine does not return */
    pdb_142dc8150(&UNK_142fa6b48);
  }
  uVar23 = uVar23 + lVar30 + 0x10;
  lVar30 = lVar30 + 0x10;
  goto LAB_142991e54;
LAB_142992031:
  uVar23 = uVar23 & uVar26;
  pcVar2 = (char *)(lVar28 + uVar23);
  auVar45[0] = -(*pcVar2 == auVar37[0]);
  auVar45[1] = -(pcVar2[1] == auVar37[1]);
  auVar45[2] = -(pcVar2[2] == auVar37[2]);
  auVar45[3] = -(pcVar2[3] == auVar37[3]);
  auVar45[4] = -(pcVar2[4] == auVar37[4]);
  auVar45[5] = -(pcVar2[5] == auVar37[5]);
  auVar45[6] = -(pcVar2[6] == auVar37[6]);
  auVar45[7] = -(pcVar2[7] == auVar37[7]);
  auVar45[8] = -(pcVar2[8] == auVar37[0]);
  auVar45[9] = -(pcVar2[9] == auVar37[1]);
  auVar45[10] = -(pcVar2[10] == auVar37[2]);
  auVar45[0xb] = -(pcVar2[0xb] == auVar37[3]);
  auVar45[0xc] = -(pcVar2[0xc] == auVar37[4]);
  auVar45[0xd] = -(pcVar2[0xd] == auVar37[5]);
  auVar45[0xe] = -(pcVar2[0xe] == auVar37[6]);
  auVar45[0xf] = -(pcVar2[0xf] == auVar37[7]);
  uVar32 = (ushort)(SUB161(auVar45 >> 7,0) & 1) | (ushort)(SUB161(auVar45 >> 0xf,0) & 1) << 1 |
           (ushort)(SUB161(auVar45 >> 0x17,0) & 1) << 2 |
           (ushort)(SUB161(auVar45 >> 0x1f,0) & 1) << 3 |
           (ushort)(SUB161(auVar45 >> 0x27,0) & 1) << 4 |
           (ushort)(SUB161(auVar45 >> 0x2f,0) & 1) << 5 |
           (ushort)(SUB161(auVar45 >> 0x37,0) & 1) << 6 |
           (ushort)(SUB161(auVar45 >> 0x3f,0) & 1) << 7 |
           (ushort)(SUB161(auVar45 >> 0x47,0) & 1) << 8 |
           (ushort)(SUB161(auVar45 >> 0x4f,0) & 1) << 9 |
           (ushort)(SUB161(auVar45 >> 0x57,0) & 1) << 10 |
           (ushort)(SUB161(auVar45 >> 0x5f,0) & 1) << 0xb |
           (ushort)(SUB161(auVar45 >> 0x67,0) & 1) << 0xc |
           (ushort)(SUB161(auVar45 >> 0x6f,0) & 1) << 0xd |
           (ushort)(SUB161(auVar45 >> 0x77,0) & 1) << 0xe | (ushort)(auVar45[0xf] >> 7) << 0xf;
  uVar31 = (uint)uVar32;
  while (uVar32 != 0) {
    uVar5 = 0;
    for (uVar6 = uVar31; (uVar6 & 1) == 0; uVar6 = uVar6 >> 1 | 0x80000000) {
      uVar5 = uVar5 + 1;
    }
    lVar33 = (uVar5 + uVar23 & uVar26) * -0xd8;
    if (pbStack_90 == *(byte **)(lVar28 + -0xd8 + lVar33)) {
      pbVar29 = (byte *)(lVar28 + lVar33 + -5);
      *pbVar29 = *pbVar29 | 2;
LAB_1429920ac:
      pbStack_98 = &UNK_143609712;
      pbStack_90 = (byte *)0x7;
      pbStack_168 = (byte *)pdb_140bbbcb0(&pbStack_98);
      pbStack_160 = pbVar27;
      uStack_158 = uVar25;
      pbStack_160 = (byte *)pdb_1400affa0(&pbStack_168);
      pbStack_168 = pbStack_1a8;
      uVar25 = pdb_1400b0130(&pbStack_168);
      pdb_14072caa0(&pbStack_168,auStack_1b0,uVar25);
      pbVar29 = pbStack_168;
      if (*(longlong *)(pbStack_168 + 0x1c8) == 0) goto LAB_1429921bd;
      uVar23 = pdb_1400af0a0(pbStack_168 + 0x1d0,&pbStack_160);
      lVar28 = *(longlong *)(pbVar29 + 0x1b0);
      uVar26 = *(ulonglong *)(pbVar29 + 0x1b8);
      bVar36 = (byte)(uVar23 >> 0x39);
      auVar37 = ZEXT216(CONCAT11(bVar36,bVar36));
      auVar37 = pshuflw(auVar37,auVar37,0);
      lVar30 = 0;
      do {
        uVar23 = uVar23 & uVar26;
        auVar44 = *(undefined1 (*) [16])(lVar28 + uVar23);
        auVar46[0] = -(auVar44[0] == auVar37[0]);
        auVar46[1] = -(auVar44[1] == auVar37[1]);
        auVar46[2] = -(auVar44[2] == auVar37[2]);
        auVar46[3] = -(auVar44[3] == auVar37[3]);
        auVar46[4] = -(auVar44[4] == auVar37[4]);
        auVar46[5] = -(auVar44[5] == auVar37[5]);
        auVar46[6] = -(auVar44[6] == auVar37[6]);
        auVar46[7] = -(auVar44[7] == auVar37[7]);
        auVar46[8] = -(auVar44[8] == auVar37[0]);
        auVar46[9] = -(auVar44[9] == auVar37[1]);
        auVar46[10] = -(auVar44[10] == auVar37[2]);
        auVar46[0xb] = -(auVar44[0xb] == auVar37[3]);
        auVar46[0xc] = -(auVar44[0xc] == auVar37[4]);
        auVar46[0xd] = -(auVar44[0xd] == auVar37[5]);
        auVar46[0xe] = -(auVar44[0xe] == auVar37[6]);
        auVar46[0xf] = -(auVar44[0xf] == auVar37[7]);
        uVar32 = (ushort)(SUB161(auVar46 >> 7,0) & 1) | (ushort)(SUB161(auVar46 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar46 >> 0x17,0) & 1) << 2 |
                 (ushort)(SUB161(auVar46 >> 0x1f,0) & 1) << 3 |
                 (ushort)(SUB161(auVar46 >> 0x27,0) & 1) << 4 |
                 (ushort)(SUB161(auVar46 >> 0x2f,0) & 1) << 5 |
                 (ushort)(SUB161(auVar46 >> 0x37,0) & 1) << 6 |
                 (ushort)(SUB161(auVar46 >> 0x3f,0) & 1) << 7 |
                 (ushort)(SUB161(auVar46 >> 0x47,0) & 1) << 8 |
                 (ushort)(SUB161(auVar46 >> 0x4f,0) & 1) << 9 |
                 (ushort)(SUB161(auVar46 >> 0x57,0) & 1) << 10 |
                 (ushort)(SUB161(auVar46 >> 0x5f,0) & 1) << 0xb |
                 (ushort)(SUB161(auVar46 >> 0x67,0) & 1) << 0xc |
                 (ushort)(SUB161(auVar46 >> 0x6f,0) & 1) << 0xd |
                 (ushort)(SUB161(auVar46 >> 0x77,0) & 1) << 0xe | (ushort)(auVar46[0xf] >> 7) << 0xf
        ;
        uVar31 = (uint)uVar32;
        while (uVar32 != 0) {
          uVar5 = 0;
          for (uVar6 = uVar31; (uVar6 & 1) == 0; uVar6 = uVar6 >> 1 | 0x80000000) {
            uVar5 = uVar5 + 1;
          }
          lVar33 = (uVar5 + uVar23 & uVar26) * -0xd8;
          if (pbStack_160 == *(byte **)(lVar28 + -0xd8 + lVar33)) {
            lVar28 = lVar28 + lVar33;
            *(undefined1 (*) [16])(lVar28 + -0x88) = (undefined1  [16])0x0;
            *(undefined1 (*) [16])(lVar28 + -0x98) = (undefined1  [16])0x0;
            *(undefined1 (*) [16])(lVar28 + -0xa8) = (undefined1  [16])0x0;
            *(undefined1 (*) [16])(lVar28 + -0xb8) = (undefined1  [16])0x0;
            *(undefined8 *)(lVar28 + -0x78) = 0x403000100000000;
            uStack_a8 = uStack_158;
            pbStack_b8 = pbStack_168;
            pbStack_b0 = pbStack_160;
            puVar4 = (undefined8 *)*param_6;
            uVar25 = param_6[1];
            lVar28 = param_6[2];
            uVar24 = 0xe;
            uVar22 = pdb_140dc6290(&UNK_1436096d6,0xe);
            pdb_1407339e0(&pbStack_168,&pbStack_b8,uVar22,uVar24);
            uVar22 = pdb_14116dd60(&pbStack_168);
            pdb_14119b2b0(uVar22);
            pbVar29 = pbStack_168;
            pbStack_98 = pbStack_168;
            pbStack_90 = pbStack_160;
            pbStack_88 = (byte *)uStack_158;
            uVar35 = true;
            if (*(longlong *)(pbStack_168 + 0x1c8) == 0) {
LAB_142992368:
              pdb_142dc8110(&UNK_142fa60f8,0x16,&UNK_142fa6ad0);
LAB_142992380:
              if ((bool)uVar35) {
                pbVar27 = (byte *)0x1;
LAB_1429923bb:
                uStack_80 = *(undefined1 *)(lVar28 + 0x18);
                uVar22 = *puVar4;
                pbStack_98 = pbVar29;
                pbStack_90 = pbVar27;
                pbStack_88 = pbVar29;
                pdb_140ad6f30(uVar25,&pbStack_98);
                pbStack_168 = (byte *)0x2;
                pdb_140a003a0(uVar22,&pbStack_168);
                return;
              }
              uVar24 = *(undefined8 *)(lVar28 + 8);
              pdb_14007ee60();
              uVar22 = 1;
              pbVar27 = pub_1406abab0((ulonglong)pbVar29,1);
              if (pbVar27 != (byte *)0x0) {
                pub_142e32760(pbVar27,uVar24,pbVar29);
                goto LAB_1429923bb;
              }
            }
            else {
              uVar26 = pdb_1400af0a0(pbStack_168 + 0x1d0,&pbStack_90);
              lVar30 = *(longlong *)(pbVar29 + 0x1b0);
              bVar36 = (byte)(uVar26 >> 0x39);
              auVar37 = ZEXT216(CONCAT11(bVar36,bVar36));
              auVar37 = pshuflw(auVar37,auVar37,0);
              lVar33 = 0;
              while( true ) {
                uVar26 = uVar26 & *(ulonglong *)(pbVar29 + 0x1b8);
                pcVar2 = (char *)(lVar30 + uVar26);
                auVar47[0] = -(*pcVar2 == auVar37[0]);
                auVar47[1] = -(pcVar2[1] == auVar37[1]);
                auVar47[2] = -(pcVar2[2] == auVar37[2]);
                auVar47[3] = -(pcVar2[3] == auVar37[3]);
                auVar47[4] = -(pcVar2[4] == auVar37[4]);
                auVar47[5] = -(pcVar2[5] == auVar37[5]);
                auVar47[6] = -(pcVar2[6] == auVar37[6]);
                auVar47[7] = -(pcVar2[7] == auVar37[7]);
                auVar47[8] = -(pcVar2[8] == auVar37[0]);
                auVar47[9] = -(pcVar2[9] == auVar37[1]);
                auVar47[10] = -(pcVar2[10] == auVar37[2]);
                auVar47[0xb] = -(pcVar2[0xb] == auVar37[3]);
                auVar47[0xc] = -(pcVar2[0xc] == auVar37[4]);
                auVar47[0xd] = -(pcVar2[0xd] == auVar37[5]);
                auVar47[0xe] = -(pcVar2[0xe] == auVar37[6]);
                auVar47[0xf] = -(pcVar2[0xf] == auVar37[7]);
                uVar32 = (ushort)(SUB161(auVar47 >> 7,0) & 1) |
                         (ushort)(SUB161(auVar47 >> 0xf,0) & 1) << 1 |
                         (ushort)(SUB161(auVar47 >> 0x17,0) & 1) << 2 |
                         (ushort)(SUB161(auVar47 >> 0x1f,0) & 1) << 3 |
                         (ushort)(SUB161(auVar47 >> 0x27,0) & 1) << 4 |
                         (ushort)(SUB161(auVar47 >> 0x2f,0) & 1) << 5 |
                         (ushort)(SUB161(auVar47 >> 0x37,0) & 1) << 6 |
                         (ushort)(SUB161(auVar47 >> 0x3f,0) & 1) << 7 |
                         (ushort)(SUB161(auVar47 >> 0x47,0) & 1) << 8 |
                         (ushort)(SUB161(auVar47 >> 0x4f,0) & 1) << 9 |
                         (ushort)(SUB161(auVar47 >> 0x57,0) & 1) << 10 |
                         (ushort)(SUB161(auVar47 >> 0x5f,0) & 1) << 0xb |
                         (ushort)(SUB161(auVar47 >> 0x67,0) & 1) << 0xc |
                         (ushort)(SUB161(auVar47 >> 0x6f,0) & 1) << 0xd |
                         (ushort)(SUB161(auVar47 >> 0x77,0) & 1) << 0xe |
                         (ushort)(auVar47[0xf] >> 7) << 0xf;
                uVar31 = (uint)uVar32;
                if (uVar32 != 0) break;
LAB_14299231d:
                auVar42[0] = -(*pcVar2 == -1);
                auVar42[1] = -(pcVar2[1] == -1);
                auVar42[2] = -(pcVar2[2] == -1);
                auVar42[3] = -(pcVar2[3] == -1);
                auVar42[4] = -(pcVar2[4] == -1);
                auVar42[5] = -(pcVar2[5] == -1);
                auVar42[6] = -(pcVar2[6] == -1);
                auVar42[7] = -(pcVar2[7] == -1);
                auVar42[8] = -(pcVar2[8] == -1);
                auVar42[9] = -(pcVar2[9] == -1);
                auVar42[10] = -(pcVar2[10] == -1);
                auVar42[0xb] = -(pcVar2[0xb] == -1);
                auVar42[0xc] = -(pcVar2[0xc] == -1);
                auVar42[0xd] = -(pcVar2[0xd] == -1);
                auVar42[0xe] = -(pcVar2[0xe] == -1);
                auVar42[0xf] = -(pcVar2[0xf] == -1);
                bVar20 = (SUB161(auVar42 >> 7,0) & 1) == 0;
                bVar21 = (SUB161(auVar42 >> 0xf,0) & 1) == 0;
                bVar19 = (SUB161(auVar42 >> 0x17,0) & 1) == 0;
                bVar18 = (SUB161(auVar42 >> 0x1f,0) & 1) == 0;
                bVar17 = (SUB161(auVar42 >> 0x27,0) & 1) == 0;
                bVar16 = (SUB161(auVar42 >> 0x2f,0) & 1) == 0;
                bVar15 = (SUB161(auVar42 >> 0x37,0) & 1) == 0;
                bVar14 = (SUB161(auVar42 >> 0x3f,0) & 1) == 0;
                bVar13 = (SUB161(auVar42 >> 0x47,0) & 1) == 0;
                bVar12 = (SUB161(auVar42 >> 0x4f,0) & 1) == 0;
                bVar11 = (SUB161(auVar42 >> 0x57,0) & 1) == 0;
                bVar10 = (SUB161(auVar42 >> 0x5f,0) & 1) == 0;
                bVar9 = (SUB161(auVar42 >> 0x67,0) & 1) == 0;
                bVar8 = (SUB161(auVar42 >> 0x6f,0) & 1) == 0;
                bVar7 = (SUB161(auVar42 >> 0x77,0) & 1) == 0;
                uVar35 = ((((((((((((((bVar20 && bVar21) && bVar19) && bVar18) && bVar17) && bVar16)
                                 && bVar15) && bVar14) && bVar13) && bVar12) && bVar11) && bVar10)
                           && bVar9) && bVar8) && bVar7) && -1 < auVar42[0xf];
                if (((((((((((((((!bVar20 || !bVar21) || !bVar19) || !bVar18) || !bVar17) || !bVar16
                             ) || !bVar15) || !bVar14) || !bVar13) || !bVar12) || !bVar11) ||
                       !bVar10) || !bVar9) || !bVar8) || !bVar7) || -1 >= auVar42[0xf])
                goto LAB_142992368;
                uVar26 = uVar26 + lVar33 + 0x10;
                lVar33 = lVar33 + 0x10;
              }
              while( true ) {
                uVar5 = 0;
                for (uVar6 = uVar31; (uVar6 & 1) == 0; uVar6 = uVar6 >> 1 | 0x80000000) {
                  uVar5 = uVar5 + 1;
                }
                lVar34 = (uVar5 + uVar26 & *(ulonglong *)(pbVar29 + 0x1b8)) * -0xd8;
                if (pbStack_90 == *(byte **)(lVar30 + -0xd8 + lVar34)) break;
                uVar32 = (ushort)(uVar31 - 1) & (ushort)uVar31;
                uVar31 = CONCAT22((short)(uVar31 - 1 >> 0x10),uVar32);
                if (uVar32 == 0) goto LAB_14299231d;
              }
              if ((*(byte *)(lVar30 + lVar34 + -6) & 0x30) == 0) {
                return;
              }
              pbVar29 = *(byte **)(lVar28 + 0x10);
              uVar35 = pbVar29 == (byte *)0x0;
              if (-1 < (longlong)pbVar29) goto LAB_142992380;
              uVar22 = 0;
            }
            pdb_142dc7e2a(uVar22,pbVar29);
            goto LAB_14299235c;
          }
          uVar32 = (ushort)(uVar31 - 1) & (ushort)uVar31;
          uVar31 = CONCAT22((short)(uVar31 - 1 >> 0x10),uVar32);
        }
        auVar41[0] = -(auVar44[0] == -1);
        auVar41[1] = -(auVar44[1] == -1);
        auVar41[2] = -(auVar44[2] == -1);
        auVar41[3] = -(auVar44[3] == -1);
        auVar41[4] = -(auVar44[4] == -1);
        auVar41[5] = -(auVar44[5] == -1);
        auVar41[6] = -(auVar44[6] == -1);
        auVar41[7] = -(auVar44[7] == -1);
        auVar41[8] = -(auVar44[8] == -1);
        auVar41[9] = -(auVar44[9] == -1);
        auVar41[10] = -(auVar44[10] == -1);
        auVar41[0xb] = -(auVar44[0xb] == -1);
        auVar41[0xc] = -(auVar44[0xc] == -1);
        auVar41[0xd] = -(auVar44[0xd] == -1);
        auVar41[0xe] = -(auVar44[0xe] == -1);
        auVar41[0xf] = -(auVar44[0xf] == -1);
        if ((((((((((((((((SUB161(auVar41 >> 7,0) & 1) != 0 || (SUB161(auVar41 >> 0xf,0) & 1) != 0)
                        || (SUB161(auVar41 >> 0x17,0) & 1) != 0) ||
                       (SUB161(auVar41 >> 0x1f,0) & 1) != 0) || (SUB161(auVar41 >> 0x27,0) & 1) != 0
                      ) || (SUB161(auVar41 >> 0x2f,0) & 1) != 0) ||
                    (SUB161(auVar41 >> 0x37,0) & 1) != 0) || (SUB161(auVar41 >> 0x3f,0) & 1) != 0)
                  || (SUB161(auVar41 >> 0x47,0) & 1) != 0) || (SUB161(auVar41 >> 0x4f,0) & 1) != 0)
                || (SUB161(auVar41 >> 0x57,0) & 1) != 0) || (SUB161(auVar41 >> 0x5f,0) & 1) != 0) ||
              (SUB161(auVar41 >> 0x67,0) & 1) != 0) || (SUB161(auVar41 >> 0x6f,0) & 1) != 0) ||
            (SUB161(auVar41 >> 0x77,0) & 1) != 0) || auVar41[0xf] < '\0') goto LAB_1429921bd;
        uVar23 = uVar23 + lVar30 + 0x10;
        lVar30 = lVar30 + 0x10;
      } while( true );
    }
    uVar32 = (ushort)(uVar31 - 1) & (ushort)uVar31;
    uVar31 = CONCAT22((short)(uVar31 - 1 >> 0x10),uVar32);
  }
  auVar40[0] = -(*pcVar2 == -1);
  auVar40[1] = -(pcVar2[1] == -1);
  auVar40[2] = -(pcVar2[2] == -1);
  auVar40[3] = -(pcVar2[3] == -1);
  auVar40[4] = -(pcVar2[4] == -1);
  auVar40[5] = -(pcVar2[5] == -1);
  auVar40[6] = -(pcVar2[6] == -1);
  auVar40[7] = -(pcVar2[7] == -1);
  auVar40[8] = -(pcVar2[8] == -1);
  auVar40[9] = -(pcVar2[9] == -1);
  auVar40[10] = -(pcVar2[10] == -1);
  auVar40[0xb] = -(pcVar2[0xb] == -1);
  auVar40[0xc] = -(pcVar2[0xc] == -1);
  auVar40[0xd] = -(pcVar2[0xd] == -1);
  auVar40[0xe] = -(pcVar2[0xe] == -1);
  auVar40[0xf] = -(pcVar2[0xf] == -1);
  if ((((((((((((((((SUB161(auVar40 >> 7,0) & 1) != 0 || (SUB161(auVar40 >> 0xf,0) & 1) != 0) ||
                  (SUB161(auVar40 >> 0x17,0) & 1) != 0) || (SUB161(auVar40 >> 0x1f,0) & 1) != 0) ||
                (SUB161(auVar40 >> 0x27,0) & 1) != 0) || (SUB161(auVar40 >> 0x2f,0) & 1) != 0) ||
              (SUB161(auVar40 >> 0x37,0) & 1) != 0) || (SUB161(auVar40 >> 0x3f,0) & 1) != 0) ||
            (SUB161(auVar40 >> 0x47,0) & 1) != 0) || (SUB161(auVar40 >> 0x4f,0) & 1) != 0) ||
          (SUB161(auVar40 >> 0x57,0) & 1) != 0) || (SUB161(auVar40 >> 0x5f,0) & 1) != 0) ||
        (SUB161(auVar40 >> 0x67,0) & 1) != 0) || (SUB161(auVar40 >> 0x6f,0) & 1) != 0) ||
      (SUB161(auVar40 >> 0x77,0) & 1) != 0) || auVar40[0xf] < '\0') {
LAB_14299235c:
                    /* WARNING: Subroutine does not return */
    pdb_142dc8150(&UNK_142fa6b48);
  }
  uVar23 = uVar23 + lVar30 + 0x10;
  lVar30 = lVar30 + 0x10;
  goto LAB_142992031;
}

