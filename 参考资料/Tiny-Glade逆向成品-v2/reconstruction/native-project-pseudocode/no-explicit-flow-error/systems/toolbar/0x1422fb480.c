// VA 0x1422fb480, PDB extent 5338 bytes
// toolbar::mei::widgets::ScrollingListView::with_items_undecorated<toolbar::decoclutter_picker::decoclutter_picker_menu::closure_env$5>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/mei/widgets.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   toolbar::mei::widgets::ScrollingListView::with_items_undecorated<toolbar::decoclutter_picker::decoclutter_picker_menu::closure_env$5>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/mei/widgets.rs
   Extent: 5338 */

longlong pdb_1422fb480(longlong *param_1,longlong *param_2)

{
  char *pcVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  char cVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  float fVar8;
  undefined8 uVar9;
  char cVar10;
  char cVar11;
  char cVar12;
  char cVar13;
  char cVar14;
  char cVar15;
  char cVar16;
  char cVar17;
  char cVar18;
  char cVar19;
  char cVar20;
  char cVar21;
  char cVar22;
  char cVar23;
  char cVar24;
  char cVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined1 uVar28;
  byte bVar29;
  longlong lVar30;
  longlong lVar31;
  ulonglong uVar32;
  int *piVar33;
  undefined8 uVar34;
  ulonglong uVar35;
  byte *pbVar36;
  ulonglong uVar37;
  longlong *plVar38;
  undefined4 uVar39;
  longlong lVar40;
  undefined8 uVar41;
  ushort uVar42;
  longlong lVar43;
  undefined8 unaff_R12;
  ulonglong uVar44;
  undefined8 unaff_R13;
  ulonglong uVar45;
  ulonglong uVar46;
  uint uVar47;
  float fVar48;
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  float fVar51;
  float fVar52;
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  float fVar61;
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  float fVar78;
  undefined1 unaff_XMM8_Ba;
  char cVar79;
  undefined1 unaff_XMM8_Bb;
  undefined1 uVar80;
  char cVar81;
  undefined1 unaff_XMM8_Bc;
  undefined1 uVar82;
  char cVar83;
  undefined1 unaff_XMM8_Bd;
  undefined1 uVar84;
  char cVar85;
  ulonglong uStack_278;
  byte *pbStack_270;
  longlong lStack_268;
  undefined8 *puStack_258;
  longlong lStack_250;
  longlong *plStack_248;
  char *pcStack_240;
  undefined8 uStack_238;
  undefined8 *puStack_230;
  undefined8 *puStack_228;
  longlong lStack_220;
  undefined8 *puStack_218;
  longlong *plStack_210;
  undefined8 *puStack_208;
  longlong *plStack_200;
  undefined8 uStack_1f8;
  longlong lStack_1f0;
  longlong lStack_1e8;
  ulonglong uStack_1e0;
  undefined8 uStack_1d8;
  undefined4 *puStack_1c8;
  longlong *plStack_1c0;
  longlong *plStack_1b8;
  float fStack_1b0;
  undefined4 uStack_1ac;
  byte *pbStack_1a8;
  longlong lStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  float *pfStack_188;
  code *pcStack_180;
  undefined8 uStack_178;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined8 uStack_168;
  undefined4 uStack_12c;
  undefined8 uStack_128;
  undefined4 uStack_120;
  longlong *plStack_118;
  longlong lStack_110;
  byte *pbStack_108;
  longlong alStack_100 [2];
  ulonglong uStack_f0;
  ulonglong uStack_e8;
  byte *pbStack_e0;
  longlong lStack_d8;
  ulonglong uStack_c8;
  byte *pbStack_c0;
  longlong lStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_50;
  
  uStack_b0 = 0xfffffffffffffffe;
  lVar30 = pdb_14116e5a0();
  fVar52 = _DAT_142fa5b20;
  fVar78 = _DAT_142e37878;
  fVar48 = *(float *)(lVar30 + 0x28) + _DAT_142e37878;
  fVar51 = (float)*(ulonglong *)(lVar30 + 0x20) * fVar48 + _DAT_142fa5b20;
  fVar61 = (float)(CONCAT13(unaff_XMM8_Bd,
                            CONCAT12(unaff_XMM8_Bc,CONCAT11(unaff_XMM8_Bb,unaff_XMM8_Ba))) ^
                  CONCAT13(unaff_XMM8_Bd,
                           CONCAT12(unaff_XMM8_Bc,CONCAT11(unaff_XMM8_Bb,unaff_XMM8_Ba))));
  if (fVar51 <= fVar61) {
    fVar51 = fVar61;
  }
  fVar51 = fVar51 - (fVar48 * (float)*(ulonglong *)(lVar30 + 0x18) + _DAT_142fa5b20);
  fVar48 = 0.0;
  if (0.0 <= *(float *)(lVar30 + 0x30)) {
    fVar48 = *(float *)(lVar30 + 0x30);
  }
  if (fVar51 <= fVar61) {
    fVar51 = fVar61;
  }
  if (fVar48 <= fVar51) {
    fVar51 = fVar48;
  }
  *(float *)(lVar30 + 0x30) = fVar51;
  pdb_140de9710(lVar30 + 0x2c);
  uVar47 = -(uint)((float)((uint)(*(float *)(lVar30 + 0x2c) - *(float *)(lVar30 + 0x30)) &
                          _DAT_142e377e0) < _DAT_142e3b1d8);
  uVar32 = *(ulonglong *)(lVar30 + 0x20);
  fVar48 = (float)(~uVar47 & (uint)*(float *)(lVar30 + 0x2c) |
                  (uint)*(float *)(lVar30 + 0x30) & uVar47);
  fVar78 = fVar78 + *(float *)(lVar30 + 0x28);
  fVar51 = (float)uVar32 * fVar78 + fVar52;
  if (fVar51 <= fVar61) {
    fVar51 = fVar61;
  }
  fVar52 = (float)*(ulonglong *)(lVar30 + 0x18) * fVar78 + fVar52;
  fVar51 = fVar51 - fVar52;
  if (fVar51 <= fVar61) {
    fVar51 = fVar61;
  }
  fVar8 = 0.0;
  if (0.0 <= fVar48) {
    fVar8 = fVar48;
  }
  if (fVar8 <= fVar51) {
    fVar51 = fVar8;
  }
  *(float *)(lVar30 + 0x2c) = fVar51;
  fVar48 = fVar51 / fVar78;
  if (fVar51 / fVar78 <= fVar61) {
    fVar48 = fVar61;
  }
  uVar44 = (longlong)(fVar48 - _DAT_142e36f2c) & (longlong)fVar48 >> 0x3f | (longlong)fVar48;
  if (fVar48 < fVar61) {
    uVar44 = 0;
  }
  if (_DAT_142e36f30 < fVar48) {
    uVar44 = 0xffffffffffffffff;
  }
  uVar44 = (uVar44 - 1) + (ulonglong)(uVar44 == 0);
  fVar52 = (fVar52 + fVar51) / fVar78;
  uVar45 = (longlong)(fVar52 - _DAT_142e36f2c) & (longlong)fVar52 >> 0x3f | (longlong)fVar52;
  if (fVar52 < fVar61) {
    uVar45 = 0;
  }
  if (_DAT_142e36f30 < fVar52) {
    uVar45 = 0xffffffffffffffff;
  }
  uVar46 = uVar45 + 2;
  if (uVar32 < uVar45 + 2) {
    uVar46 = uVar32;
  }
  if ((longlong)uVar44 < 0) {
    fVar61 = (float)uVar44;
    uVar28 = SUB41(fVar61,0);
    uVar80 = (undefined1)((uint)fVar61 >> 8);
    uVar82 = (undefined1)((uint)fVar61 >> 0x10);
    uVar84 = (undefined1)((uint)fVar61 >> 0x18);
  }
  else {
    fVar61 = (float)(longlong)uVar44;
    uVar28 = SUB41(fVar61,0);
    uVar80 = (undefined1)((uint)fVar61 >> 8);
    uVar82 = (undefined1)((uint)fVar61 >> 0x10);
    uVar84 = (undefined1)((uint)fVar61 >> 0x18);
  }
  lVar31 = pdb_141172a70(param_1);
  lVar30 = *param_1;
  if (*(longlong *)(lVar30 + 0x1c8) != 0) {
    uVar3 = *(undefined4 *)(lVar31 + 0x28);
    plVar38 = param_1 + 1;
    uVar32 = pdb_1400af0a0(lVar30 + 0x1d0,plVar38);
    lVar31 = *(longlong *)(lVar30 + 0x1b0);
    bVar29 = (byte)(uVar32 >> 0x39);
    auVar49 = ZEXT216(CONCAT11(bVar29,bVar29));
    auVar49 = pshuflw(auVar49,auVar49,0);
    lVar40 = 0;
    while( true ) {
      uVar32 = uVar32 & *(ulonglong *)(lVar30 + 0x1b8);
      auVar67 = *(undefined1 (*) [16])(lVar31 + uVar32);
      auVar75[0] = -(auVar67[0] == auVar49[0]);
      auVar75[1] = -(auVar67[1] == auVar49[1]);
      auVar75[2] = -(auVar67[2] == auVar49[2]);
      auVar75[3] = -(auVar67[3] == auVar49[3]);
      auVar75[4] = -(auVar67[4] == auVar49[4]);
      auVar75[5] = -(auVar67[5] == auVar49[5]);
      auVar75[6] = -(auVar67[6] == auVar49[6]);
      auVar75[7] = -(auVar67[7] == auVar49[7]);
      auVar75[8] = -(auVar67[8] == auVar49[0]);
      auVar75[9] = -(auVar67[9] == auVar49[1]);
      auVar75[10] = -(auVar67[10] == auVar49[2]);
      auVar75[0xb] = -(auVar67[0xb] == auVar49[3]);
      auVar75[0xc] = -(auVar67[0xc] == auVar49[4]);
      auVar75[0xd] = -(auVar67[0xd] == auVar49[5]);
      auVar75[0xe] = -(auVar67[0xe] == auVar49[6]);
      auVar75[0xf] = -(auVar67[0xf] == auVar49[7]);
      uVar42 = (ushort)(SUB161(auVar75 >> 7,0) & 1) | (ushort)(SUB161(auVar75 >> 0xf,0) & 1) << 1 |
               (ushort)(SUB161(auVar75 >> 0x17,0) & 1) << 2 |
               (ushort)(SUB161(auVar75 >> 0x1f,0) & 1) << 3 |
               (ushort)(SUB161(auVar75 >> 0x27,0) & 1) << 4 |
               (ushort)(SUB161(auVar75 >> 0x2f,0) & 1) << 5 |
               (ushort)(SUB161(auVar75 >> 0x37,0) & 1) << 6 |
               (ushort)(SUB161(auVar75 >> 0x3f,0) & 1) << 7 |
               (ushort)(SUB161(auVar75 >> 0x47,0) & 1) << 8 |
               (ushort)(SUB161(auVar75 >> 0x4f,0) & 1) << 9 |
               (ushort)(SUB161(auVar75 >> 0x57,0) & 1) << 10 |
               (ushort)(SUB161(auVar75 >> 0x5f,0) & 1) << 0xb |
               (ushort)(SUB161(auVar75 >> 0x67,0) & 1) << 0xc |
               (ushort)(SUB161(auVar75 >> 0x6f,0) & 1) << 0xd |
               (ushort)(SUB161(auVar75 >> 0x77,0) & 1) << 0xe | (ushort)(auVar75[0xf] >> 7) << 0xf;
      uVar47 = (uint)uVar42;
      while (uVar42 != 0) {
        uVar5 = 0;
        for (uVar6 = uVar47; (uVar6 & 1) == 0; uVar6 = uVar6 >> 1 | 0x80000000) {
          uVar5 = uVar5 + 1;
        }
        lVar43 = (uVar5 + uVar32 & *(ulonglong *)(lVar30 + 0x1b8)) * -0xd8;
        if (param_1[1] == *(longlong *)(lVar31 + -0xd8 + lVar43)) {
          lVar31 = lVar31 + lVar43;
          *(undefined4 *)(lVar31 + -0x7c) = 0;
          *(float *)(lVar31 + -0x78) =
               fVar78 * (float)CONCAT13(uVar84,CONCAT12(uVar82,CONCAT11(uVar80,uVar28))) - fVar51;
          piVar33 = (int *)pdb_141172a70(param_1);
          if (*piVar33 == 1) {
            lVar30 = *param_1;
            if (*(longlong *)(lVar30 + 0x1c8) == 0) goto LAB_1422fc6a5;
            uVar32 = *(ulonglong *)(piVar33 + 2);
            uVar45 = pdb_1400af0a0(lVar30 + 0x1d0,plVar38);
            lVar31 = *(longlong *)(lVar30 + 0x1b0);
            bVar29 = (byte)(uVar45 >> 0x39);
            auVar49 = ZEXT216(CONCAT11(bVar29,bVar29));
            auVar49 = pshuflw(auVar49,auVar49,0);
            lVar40 = 0;
            goto LAB_1422fb865;
          }
          lVar30 = *param_1;
          if (*(longlong *)(lVar30 + 0x1c8) == 0) goto LAB_1422fc6a5;
          uVar32 = pdb_1400af0a0(lVar30 + 0x1d0,plVar38);
          lVar31 = *(longlong *)(lVar30 + 0x1b0);
          bVar29 = (byte)(uVar32 >> 0x39);
          auVar49 = ZEXT216(CONCAT11(bVar29,bVar29));
          auVar49 = pshuflw(auVar49,auVar49,0);
          lVar40 = 0;
          goto LAB_1422fb920;
        }
        uVar42 = (ushort)(uVar47 - 1) & (ushort)uVar47;
        uVar47 = CONCAT22((short)(uVar47 - 1 >> 0x10),uVar42);
      }
      auVar63[0] = -(auVar67[0] == -1);
      auVar63[1] = -(auVar67[1] == -1);
      auVar63[2] = -(auVar67[2] == -1);
      auVar63[3] = -(auVar67[3] == -1);
      auVar63[4] = -(auVar67[4] == -1);
      auVar63[5] = -(auVar67[5] == -1);
      auVar63[6] = -(auVar67[6] == -1);
      auVar63[7] = -(auVar67[7] == -1);
      auVar63[8] = -(auVar67[8] == -1);
      auVar63[9] = -(auVar67[9] == -1);
      auVar63[10] = -(auVar67[10] == -1);
      auVar63[0xb] = -(auVar67[0xb] == -1);
      auVar63[0xc] = -(auVar67[0xc] == -1);
      auVar63[0xd] = -(auVar67[0xd] == -1);
      auVar63[0xe] = -(auVar67[0xe] == -1);
      auVar63[0xf] = -(auVar67[0xf] == -1);
      if ((((((((((((((((SUB161(auVar63 >> 7,0) & 1) != 0 || (SUB161(auVar63 >> 0xf,0) & 1) != 0) ||
                      (SUB161(auVar63 >> 0x17,0) & 1) != 0) || (SUB161(auVar63 >> 0x1f,0) & 1) != 0)
                    || (SUB161(auVar63 >> 0x27,0) & 1) != 0) || (SUB161(auVar63 >> 0x2f,0) & 1) != 0
                   ) || (SUB161(auVar63 >> 0x37,0) & 1) != 0) ||
                 (SUB161(auVar63 >> 0x3f,0) & 1) != 0) || (SUB161(auVar63 >> 0x47,0) & 1) != 0) ||
               (SUB161(auVar63 >> 0x4f,0) & 1) != 0) || (SUB161(auVar63 >> 0x57,0) & 1) != 0) ||
             (SUB161(auVar63 >> 0x5f,0) & 1) != 0) || (SUB161(auVar63 >> 0x67,0) & 1) != 0) ||
           (SUB161(auVar63 >> 0x6f,0) & 1) != 0) || (SUB161(auVar63 >> 0x77,0) & 1) != 0) ||
          auVar63[0xf] < '\0') break;
      uVar32 = uVar32 + lVar40 + 0x10;
      lVar40 = lVar40 + 0x10;
    }
  }
LAB_1422fc6a5:
                    /* WARNING: Subroutine does not return */
  pdb_142dc8150(&UNK_142fa6b48);
LAB_1422fb920:
  uVar32 = uVar32 & *(ulonglong *)(lVar30 + 0x1b8);
  auVar67 = *(undefined1 (*) [16])(lVar31 + uVar32);
  auVar77[0] = -(auVar67[0] == auVar49[0]);
  auVar77[1] = -(auVar67[1] == auVar49[1]);
  auVar77[2] = -(auVar67[2] == auVar49[2]);
  auVar77[3] = -(auVar67[3] == auVar49[3]);
  auVar77[4] = -(auVar67[4] == auVar49[4]);
  auVar77[5] = -(auVar67[5] == auVar49[5]);
  auVar77[6] = -(auVar67[6] == auVar49[6]);
  auVar77[7] = -(auVar67[7] == auVar49[7]);
  auVar77[8] = -(auVar67[8] == auVar49[0]);
  auVar77[9] = -(auVar67[9] == auVar49[1]);
  auVar77[10] = -(auVar67[10] == auVar49[2]);
  auVar77[0xb] = -(auVar67[0xb] == auVar49[3]);
  auVar77[0xc] = -(auVar67[0xc] == auVar49[4]);
  auVar77[0xd] = -(auVar67[0xd] == auVar49[5]);
  auVar77[0xe] = -(auVar67[0xe] == auVar49[6]);
  auVar77[0xf] = -(auVar67[0xf] == auVar49[7]);
  uVar42 = (ushort)(SUB161(auVar77 >> 7,0) & 1) | (ushort)(SUB161(auVar77 >> 0xf,0) & 1) << 1 |
           (ushort)(SUB161(auVar77 >> 0x17,0) & 1) << 2 |
           (ushort)(SUB161(auVar77 >> 0x1f,0) & 1) << 3 |
           (ushort)(SUB161(auVar77 >> 0x27,0) & 1) << 4 |
           (ushort)(SUB161(auVar77 >> 0x2f,0) & 1) << 5 |
           (ushort)(SUB161(auVar77 >> 0x37,0) & 1) << 6 |
           (ushort)(SUB161(auVar77 >> 0x3f,0) & 1) << 7 |
           (ushort)(SUB161(auVar77 >> 0x47,0) & 1) << 8 |
           (ushort)(SUB161(auVar77 >> 0x4f,0) & 1) << 9 |
           (ushort)(SUB161(auVar77 >> 0x57,0) & 1) << 10 |
           (ushort)(SUB161(auVar77 >> 0x5f,0) & 1) << 0xb |
           (ushort)(SUB161(auVar77 >> 0x67,0) & 1) << 0xc |
           (ushort)(SUB161(auVar77 >> 0x6f,0) & 1) << 0xd |
           (ushort)(SUB161(auVar77 >> 0x77,0) & 1) << 0xe | (ushort)(auVar77[0xf] >> 7) << 0xf;
  uVar47 = (uint)uVar42;
  while (uVar42 != 0) {
    uVar5 = 0;
    for (uVar6 = uVar47; (uVar6 & 1) == 0; uVar6 = uVar6 >> 1 | 0x80000000) {
      uVar5 = uVar5 + 1;
    }
    lVar43 = (uVar5 + uVar32 & *(ulonglong *)(lVar30 + 0x1b8)) * -0xd8;
    if (*plVar38 == *(longlong *)(lVar31 + -0xd8 + lVar43)) {
      pbVar36 = (byte *)(lVar31 + lVar43 + -5);
      *pbVar36 = *pbVar36 & 0x5f;
      if (uVar46 <= uVar44) goto code_r0x00014116e5a0;
      goto LAB_1422fb9b0;
    }
    uVar42 = (ushort)(uVar47 - 1) & (ushort)uVar47;
    uVar47 = CONCAT22((short)(uVar47 - 1 >> 0x10),uVar42);
  }
  auVar65[0] = -(auVar67[0] == -1);
  auVar65[1] = -(auVar67[1] == -1);
  auVar65[2] = -(auVar67[2] == -1);
  auVar65[3] = -(auVar67[3] == -1);
  auVar65[4] = -(auVar67[4] == -1);
  auVar65[5] = -(auVar67[5] == -1);
  auVar65[6] = -(auVar67[6] == -1);
  auVar65[7] = -(auVar67[7] == -1);
  auVar65[8] = -(auVar67[8] == -1);
  auVar65[9] = -(auVar67[9] == -1);
  auVar65[10] = -(auVar67[10] == -1);
  auVar65[0xb] = -(auVar67[0xb] == -1);
  auVar65[0xc] = -(auVar67[0xc] == -1);
  auVar65[0xd] = -(auVar67[0xd] == -1);
  auVar65[0xe] = -(auVar67[0xe] == -1);
  auVar65[0xf] = -(auVar67[0xf] == -1);
  if ((((((((((((((((SUB161(auVar65 >> 7,0) & 1) != 0 || (SUB161(auVar65 >> 0xf,0) & 1) != 0) ||
                  (SUB161(auVar65 >> 0x17,0) & 1) != 0) || (SUB161(auVar65 >> 0x1f,0) & 1) != 0) ||
                (SUB161(auVar65 >> 0x27,0) & 1) != 0) || (SUB161(auVar65 >> 0x2f,0) & 1) != 0) ||
              (SUB161(auVar65 >> 0x37,0) & 1) != 0) || (SUB161(auVar65 >> 0x3f,0) & 1) != 0) ||
            (SUB161(auVar65 >> 0x47,0) & 1) != 0) || (SUB161(auVar65 >> 0x4f,0) & 1) != 0) ||
          (SUB161(auVar65 >> 0x57,0) & 1) != 0) || (SUB161(auVar65 >> 0x5f,0) & 1) != 0) ||
        (SUB161(auVar65 >> 0x67,0) & 1) != 0) || (SUB161(auVar65 >> 0x6f,0) & 1) != 0) ||
      (SUB161(auVar65 >> 0x77,0) & 1) != 0) || auVar65[0xf] < '\0') goto LAB_1422fc6a5;
  uVar32 = uVar32 + lVar40 + 0x10;
  lVar40 = lVar40 + 0x10;
  goto LAB_1422fb920;
LAB_1422fbcea:
  uVar35 = uVar35 & uVar45;
  pcVar1 = (char *)(lVar30 + uVar35);
  auVar67[0] = -(*pcVar1 == auVar49[0]);
  auVar67[1] = -(pcVar1[1] == auVar49[1]);
  auVar67[2] = -(pcVar1[2] == auVar49[2]);
  auVar67[3] = -(pcVar1[3] == auVar49[3]);
  auVar67[4] = -(pcVar1[4] == auVar49[4]);
  auVar67[5] = -(pcVar1[5] == auVar49[5]);
  auVar67[6] = -(pcVar1[6] == auVar49[6]);
  auVar67[7] = -(pcVar1[7] == auVar49[7]);
  auVar67[8] = -(pcVar1[8] == auVar49[0]);
  auVar67[9] = -(pcVar1[9] == auVar49[1]);
  auVar67[10] = -(pcVar1[10] == auVar49[2]);
  auVar67[0xb] = -(pcVar1[0xb] == auVar49[3]);
  auVar67[0xc] = -(pcVar1[0xc] == auVar49[4]);
  auVar67[0xd] = -(pcVar1[0xd] == auVar49[5]);
  auVar67[0xe] = -(pcVar1[0xe] == auVar49[6]);
  auVar67[0xf] = -(pcVar1[0xf] == auVar49[7]);
  uVar42 = (ushort)(SUB161(auVar67 >> 7,0) & 1) | (ushort)(SUB161(auVar67 >> 0xf,0) & 1) << 1 |
           (ushort)(SUB161(auVar67 >> 0x17,0) & 1) << 2 |
           (ushort)(SUB161(auVar67 >> 0x1f,0) & 1) << 3 |
           (ushort)(SUB161(auVar67 >> 0x27,0) & 1) << 4 |
           (ushort)(SUB161(auVar67 >> 0x2f,0) & 1) << 5 |
           (ushort)(SUB161(auVar67 >> 0x37,0) & 1) << 6 |
           (ushort)(SUB161(auVar67 >> 0x3f,0) & 1) << 7 |
           (ushort)(SUB161(auVar67 >> 0x47,0) & 1) << 8 |
           (ushort)(SUB161(auVar67 >> 0x4f,0) & 1) << 9 |
           (ushort)(SUB161(auVar67 >> 0x57,0) & 1) << 10 |
           (ushort)(SUB161(auVar67 >> 0x5f,0) & 1) << 0xb |
           (ushort)(SUB161(auVar67 >> 0x67,0) & 1) << 0xc |
           (ushort)(SUB161(auVar67 >> 0x6f,0) & 1) << 0xd |
           (ushort)(SUB161(auVar67 >> 0x77,0) & 1) << 0xe | (ushort)(auVar67[0xf] >> 7) << 0xf;
  uVar47 = (uint)uVar42;
  while (uVar42 != 0) {
    uVar5 = 0;
    for (uVar6 = uVar47; (uVar6 & 1) == 0; uVar6 = uVar6 >> 1 | 0x80000000) {
      uVar5 = uVar5 + 1;
    }
    lVar40 = (uVar5 + uVar35 & uVar45) * -0xd8;
    if (pbStack_e0 == *(byte **)(lVar30 + -0xd8 + lVar40)) {
      lVar30 = lVar30 + lVar40;
      *(undefined8 *)(lVar30 + -0xa8) = 0;
      *(undefined8 *)(lVar30 + -0xa0) = 0;
      *(undefined8 *)(lVar30 + -0xb8) = 0;
      *(undefined8 *)(lVar30 + -0xb0) = 0;
      *(undefined8 *)(lVar30 + -0x98) = 0x41c0000000000000;
      *(undefined8 *)(lVar30 + -0x90) = 0;
      *(undefined8 *)(lVar30 + -0x88) = 0;
      *(undefined8 *)(lVar30 + -0x82) = 0;
      *(undefined8 *)(lVar30 + -0x7a) = 0;
      *(undefined2 *)(lVar30 + -0x72) = 0x101;
      lStack_268 = lStack_d8;
      uStack_278 = uStack_e8;
      pbStack_270 = pbStack_e0;
      plStack_1b8 = *(longlong **)(lStack_250 + 8) + *(longlong *)(lStack_250 + 0x10);
      uVar45 = uVar44 * 4;
      pbStack_c0 = (byte *)0x4;
      plVar38 = *(longlong **)(lStack_250 + 8);
      goto LAB_1422fbdcb;
    }
    uVar42 = (ushort)(uVar47 - 1) & (ushort)uVar47;
    uVar47 = CONCAT22((short)(uVar47 - 1 >> 0x10),uVar42);
  }
  auVar54[0] = -(*pcVar1 == cVar79);
  auVar54[1] = -(pcVar1[1] == cVar81);
  auVar54[2] = -(pcVar1[2] == cVar83);
  auVar54[3] = -(pcVar1[3] == cVar85);
  auVar54[4] = -(pcVar1[4] == -1);
  auVar54[5] = -(pcVar1[5] == -1);
  auVar54[6] = -(pcVar1[6] == -1);
  auVar54[7] = -(pcVar1[7] == -1);
  auVar54[8] = -(pcVar1[8] == -1);
  auVar54[9] = -(pcVar1[9] == -1);
  auVar54[10] = -(pcVar1[10] == -1);
  auVar54[0xb] = -(pcVar1[0xb] == -1);
  auVar54[0xc] = -(pcVar1[0xc] == -1);
  auVar54[0xd] = -(pcVar1[0xd] == -1);
  auVar54[0xe] = -(pcVar1[0xe] == -1);
  auVar54[0xf] = -(pcVar1[0xf] == -1);
  if ((((((((((((((((SUB161(auVar54 >> 7,0) & 1) != 0 || (SUB161(auVar54 >> 0xf,0) & 1) != 0) ||
                  (SUB161(auVar54 >> 0x17,0) & 1) != 0) || (SUB161(auVar54 >> 0x1f,0) & 1) != 0) ||
                (SUB161(auVar54 >> 0x27,0) & 1) != 0) || (SUB161(auVar54 >> 0x2f,0) & 1) != 0) ||
              (SUB161(auVar54 >> 0x37,0) & 1) != 0) || (SUB161(auVar54 >> 0x3f,0) & 1) != 0) ||
            (SUB161(auVar54 >> 0x47,0) & 1) != 0) || (SUB161(auVar54 >> 0x4f,0) & 1) != 0) ||
          (SUB161(auVar54 >> 0x57,0) & 1) != 0) || (SUB161(auVar54 >> 0x5f,0) & 1) != 0) ||
        (SUB161(auVar54 >> 0x67,0) & 1) != 0) || (SUB161(auVar54 >> 0x6f,0) & 1) != 0) ||
      (SUB161(auVar54 >> 0x77,0) & 1) != 0) || auVar54[0xf] < '\0') goto LAB_1422fc70a;
  uVar35 = uVar35 + lVar31 + 0x10;
  lVar31 = lVar31 + 0x10;
  goto LAB_1422fbcea;
LAB_1422fbdcb:
  if (uVar45 == 0) {
    if (plVar38 == plStack_1b8) goto LAB_1422fc627;
  }
  else {
    if ((ulonglong)((longlong)plStack_1b8 - (longlong)plVar38) >> 3 <= uVar45) goto LAB_1422fc627;
    plVar38 = plVar38 + uVar45;
  }
  lStack_b8 = *plVar38;
  plStack_1c0 = plVar38;
  pdb_140c26890(&uStack_198,*puStack_258);
  if ((int)uStack_198 != 3) {
    pdb_1411743c0(&fStack_1b0,&uStack_278,CONCAT44(uStack_16c,uStack_170),uStack_168,
                  CONCAT44(uStack_16c,uStack_170),uStack_168);
    uVar45 = CONCAT44(uStack_1ac,fStack_1b0);
    uStack_190 = (code *)pbStack_1a8;
    pfStack_188 = (float *)lStack_1a0;
    uStack_198 = (ulonglong *)uVar45;
    if (*(longlong *)(uVar45 + 0x1c8) != 0) {
      pbVar36 = pbStack_c0 + -1;
      plStack_1c0 = plStack_1c0 + 1;
      uVar37 = pdb_1400af0a0(uVar45 + 0x1d0,&uStack_190);
      uVar35 = (ulonglong)uStack_198;
      lVar30 = *(longlong *)(uVar45 + 0x1b0);
      bVar29 = (byte)(uVar37 >> 0x39);
      auVar49 = ZEXT216(CONCAT11(bVar29,bVar29));
      auVar49 = pshuflw(auVar49,auVar49,0);
      lVar31 = 0;
      while( true ) {
        uVar37 = uVar37 & *(ulonglong *)(uVar45 + 0x1b8);
        auVar67 = *(undefined1 (*) [16])(lVar30 + uVar37);
        auVar68[0] = -(auVar67[0] == auVar49[0]);
        auVar68[1] = -(auVar67[1] == auVar49[1]);
        auVar68[2] = -(auVar67[2] == auVar49[2]);
        auVar68[3] = -(auVar67[3] == auVar49[3]);
        auVar68[4] = -(auVar67[4] == auVar49[4]);
        auVar68[5] = -(auVar67[5] == auVar49[5]);
        auVar68[6] = -(auVar67[6] == auVar49[6]);
        auVar68[7] = -(auVar67[7] == auVar49[7]);
        auVar68[8] = -(auVar67[8] == auVar49[0]);
        auVar68[9] = -(auVar67[9] == auVar49[1]);
        auVar68[10] = -(auVar67[10] == auVar49[2]);
        auVar68[0xb] = -(auVar67[0xb] == auVar49[3]);
        auVar68[0xc] = -(auVar67[0xc] == auVar49[4]);
        auVar68[0xd] = -(auVar67[0xd] == auVar49[5]);
        auVar68[0xe] = -(auVar67[0xe] == auVar49[6]);
        auVar68[0xf] = -(auVar67[0xf] == auVar49[7]);
        uVar42 = (ushort)(SUB161(auVar68 >> 7,0) & 1) | (ushort)(SUB161(auVar68 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar68 >> 0x17,0) & 1) << 2 |
                 (ushort)(SUB161(auVar68 >> 0x1f,0) & 1) << 3 |
                 (ushort)(SUB161(auVar68 >> 0x27,0) & 1) << 4 |
                 (ushort)(SUB161(auVar68 >> 0x2f,0) & 1) << 5 |
                 (ushort)(SUB161(auVar68 >> 0x37,0) & 1) << 6 |
                 (ushort)(SUB161(auVar68 >> 0x3f,0) & 1) << 7 |
                 (ushort)(SUB161(auVar68 >> 0x47,0) & 1) << 8 |
                 (ushort)(SUB161(auVar68 >> 0x4f,0) & 1) << 9 |
                 (ushort)(SUB161(auVar68 >> 0x57,0) & 1) << 10 |
                 (ushort)(SUB161(auVar68 >> 0x5f,0) & 1) << 0xb |
                 (ushort)(SUB161(auVar68 >> 0x67,0) & 1) << 0xc |
                 (ushort)(SUB161(auVar68 >> 0x6f,0) & 1) << 0xd |
                 (ushort)(SUB161(auVar68 >> 0x77,0) & 1) << 0xe | (ushort)(auVar68[0xf] >> 7) << 0xf
        ;
        uVar47 = (uint)uVar42;
        while (uVar42 != 0) {
          uVar5 = 0;
          for (uVar6 = uVar47; (uVar6 & 1) == 0; uVar6 = uVar6 >> 1 | 0x80000000) {
            uVar5 = uVar5 + 1;
          }
          lVar40 = (uVar5 + uVar37 & *(ulonglong *)(uVar45 + 0x1b8)) * -0xd8;
          if (uStack_190 == (code *)*(byte **)(lVar30 + -0xd8 + lVar40)) {
            lVar30 = lVar30 + lVar40;
            *(undefined8 *)(lVar30 + -0x9c) = 0;
            *(undefined8 *)(lVar30 + -0x94) = 0;
            *(undefined8 *)(lVar30 + -0xa8) = 0;
            *(undefined8 *)(lVar30 + -0xa0) = 0;
            *(undefined8 *)(lVar30 + -0xb8) = 0;
            *(undefined8 *)(lVar30 + -0xb0) = 0;
            *(undefined8 *)(lVar30 + -0x8c) = 0x43040000;
            *(undefined4 *)(lVar30 + -0x84) = 0x42d33334;
            *(undefined8 *)(lVar30 + -0x80) = 0;
            *(undefined8 *)(lVar30 + -0x7a) = 0;
            *(undefined2 *)(lVar30 + -0x72) = 0x102;
            lStack_d8 = (longlong)pfStack_188;
            uStack_e8 = (ulonglong)uStack_198;
            pbStack_e0 = (byte *)uStack_190;
            if (*(longlong *)((longlong)uStack_198 + 0x1c8) == 0) goto LAB_1422fc722;
            uVar37 = pdb_1400af0a0((longlong)uStack_198 + 0x1d0,&pbStack_e0);
            lVar30 = *(longlong *)(uVar35 + 0x1b0);
            uVar45 = *(ulonglong *)(uVar35 + 0x1b8);
            bVar29 = (byte)(uVar37 >> 0x39);
            auVar49 = ZEXT216(CONCAT11(bVar29,bVar29));
            auVar49 = pshuflw(auVar49,auVar49,0);
            lVar31 = 0;
            goto LAB_1422fbfd8;
          }
          uVar42 = (ushort)(uVar47 - 1) & (ushort)uVar47;
          uVar47 = CONCAT22((short)(uVar47 - 1 >> 0x10),uVar42);
        }
        auVar55[0] = -(auVar67[0] == cVar79);
        auVar55[1] = -(auVar67[1] == cVar81);
        auVar55[2] = -(auVar67[2] == cVar83);
        auVar55[3] = -(auVar67[3] == cVar85);
        auVar55[4] = -(auVar67[4] == -1);
        auVar55[5] = -(auVar67[5] == -1);
        auVar55[6] = -(auVar67[6] == -1);
        auVar55[7] = -(auVar67[7] == -1);
        auVar55[8] = -(auVar67[8] == -1);
        auVar55[9] = -(auVar67[9] == -1);
        auVar55[10] = -(auVar67[10] == -1);
        auVar55[0xb] = -(auVar67[0xb] == -1);
        auVar55[0xc] = -(auVar67[0xc] == -1);
        auVar55[0xd] = -(auVar67[0xd] == -1);
        auVar55[0xe] = -(auVar67[0xe] == -1);
        auVar55[0xf] = -(auVar67[0xf] == -1);
        if ((((((((((((((((SUB161(auVar55 >> 7,0) & 1) != 0 || (SUB161(auVar55 >> 0xf,0) & 1) != 0)
                        || (SUB161(auVar55 >> 0x17,0) & 1) != 0) ||
                       (SUB161(auVar55 >> 0x1f,0) & 1) != 0) || (SUB161(auVar55 >> 0x27,0) & 1) != 0
                      ) || (SUB161(auVar55 >> 0x2f,0) & 1) != 0) ||
                    (SUB161(auVar55 >> 0x37,0) & 1) != 0) || (SUB161(auVar55 >> 0x3f,0) & 1) != 0)
                  || (SUB161(auVar55 >> 0x47,0) & 1) != 0) || (SUB161(auVar55 >> 0x4f,0) & 1) != 0)
                || (SUB161(auVar55 >> 0x57,0) & 1) != 0) || (SUB161(auVar55 >> 0x5f,0) & 1) != 0) ||
              (SUB161(auVar55 >> 0x67,0) & 1) != 0) || (SUB161(auVar55 >> 0x6f,0) & 1) != 0) ||
            (SUB161(auVar55 >> 0x77,0) & 1) != 0) || auVar55[0xf] < '\0') break;
        uVar37 = uVar37 + lVar31 + 0x10;
        lVar31 = lVar31 + 0x10;
      }
    }
LAB_1422fc70a:
                    /* WARNING: Subroutine does not return */
    pdb_142dc8150(&UNK_142fa6b30);
  }
  goto LAB_1422fc752;
LAB_1422fbfd8:
  uVar37 = uVar37 & uVar45;
  auVar67 = *(undefined1 (*) [16])(lVar30 + uVar37);
  auVar69[0] = -(auVar67[0] == auVar49[0]);
  auVar69[1] = -(auVar67[1] == auVar49[1]);
  auVar69[2] = -(auVar67[2] == auVar49[2]);
  auVar69[3] = -(auVar67[3] == auVar49[3]);
  auVar69[4] = -(auVar67[4] == auVar49[4]);
  auVar69[5] = -(auVar67[5] == auVar49[5]);
  auVar69[6] = -(auVar67[6] == auVar49[6]);
  auVar69[7] = -(auVar67[7] == auVar49[7]);
  auVar69[8] = -(auVar67[8] == auVar49[0]);
  auVar69[9] = -(auVar67[9] == auVar49[1]);
  auVar69[10] = -(auVar67[10] == auVar49[2]);
  auVar69[0xb] = -(auVar67[0xb] == auVar49[3]);
  auVar69[0xc] = -(auVar67[0xc] == auVar49[4]);
  auVar69[0xd] = -(auVar67[0xd] == auVar49[5]);
  auVar69[0xe] = -(auVar67[0xe] == auVar49[6]);
  auVar69[0xf] = -(auVar67[0xf] == auVar49[7]);
  uVar42 = (ushort)(SUB161(auVar69 >> 7,0) & 1) | (ushort)(SUB161(auVar69 >> 0xf,0) & 1) << 1 |
           (ushort)(SUB161(auVar69 >> 0x17,0) & 1) << 2 |
           (ushort)(SUB161(auVar69 >> 0x1f,0) & 1) << 3 |
           (ushort)(SUB161(auVar69 >> 0x27,0) & 1) << 4 |
           (ushort)(SUB161(auVar69 >> 0x2f,0) & 1) << 5 |
           (ushort)(SUB161(auVar69 >> 0x37,0) & 1) << 6 |
           (ushort)(SUB161(auVar69 >> 0x3f,0) & 1) << 7 |
           (ushort)(SUB161(auVar69 >> 0x47,0) & 1) << 8 |
           (ushort)(SUB161(auVar69 >> 0x4f,0) & 1) << 9 |
           (ushort)(SUB161(auVar69 >> 0x57,0) & 1) << 10 |
           (ushort)(SUB161(auVar69 >> 0x5f,0) & 1) << 0xb |
           (ushort)(SUB161(auVar69 >> 0x67,0) & 1) << 0xc |
           (ushort)(SUB161(auVar69 >> 0x6f,0) & 1) << 0xd |
           (ushort)(SUB161(auVar69 >> 0x77,0) & 1) << 0xe | (ushort)(auVar69[0xf] >> 7) << 0xf;
  uVar47 = (uint)uVar42;
  while (uVar42 != 0) {
    uVar5 = 0;
    for (uVar6 = uVar47; (uVar6 & 1) == 0; uVar6 = uVar6 >> 1 | 0x80000000) {
      uVar5 = uVar5 + 1;
    }
    lVar40 = (uVar5 + uVar37 & uVar45) * -0xd8;
    if (pbStack_e0 == *(byte **)(lVar30 + -0xd8 + lVar40)) {
      lVar30 = lVar30 + lVar40;
      pbStack_c0 = pbVar36;
      if (*(longlong *)(lVar30 + -0x38) != 0) {
        lVar31 = (**(code **)(*(longlong *)(lVar30 + -0x30) + 0x28))();
        (**(code **)(lVar30 + 0x18))(&uStack_198,lVar31);
        lVar30 = lStack_b8;
        auVar50[0] = -((char)uStack_198 == cVar10);
        auVar50[1] = -(uStack_198._1_1_ == cVar11);
        auVar50[2] = -(uStack_198._2_1_ == cVar12);
        auVar50[3] = -(uStack_198._3_1_ == cVar13);
        auVar50[4] = -(uStack_198._4_1_ == cVar14);
        auVar50[5] = -(uStack_198._5_1_ == cVar15);
        auVar50[6] = -(uStack_198._6_1_ == cVar16);
        auVar50[7] = -(uStack_198._7_1_ == cVar17);
        auVar50[8] = -((char)uStack_190 == cVar18);
        auVar50[9] = -(uStack_190._1_1_ == cVar19);
        auVar50[10] = -(uStack_190._2_1_ == cVar20);
        auVar50[0xb] = -(uStack_190._3_1_ == cVar21);
        auVar50[0xc] = -(uStack_190._4_1_ == cVar22);
        auVar50[0xd] = -(uStack_190._5_1_ == cVar23);
        auVar50[0xe] = -(uStack_190._6_1_ == cVar24);
        auVar50[0xf] = -(uStack_190._7_1_ == cVar25);
        if ((ushort)((ushort)(SUB161(auVar50 >> 7,0) & 1) |
                     (ushort)(SUB161(auVar50 >> 0xf,0) & 1) << 1 |
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
                     (ushort)(SUB161(auVar50 >> 0x77,0) & 1) << 0xe |
                    (ushort)(auVar50[0xf] >> 7) << 0xf) == 0xffff) {
          *(undefined4 *)(lVar31 + 0x40) = 0x3f800000;
          pfStack_188 = (float *)lStack_d8;
          uStack_198 = (ulonglong *)uStack_e8;
          uStack_190 = (code *)pbStack_e0;
          pdb_1407250e0(&pbStack_108,&uStack_198,lStack_b8 == *plStack_118);
          pbVar36 = pbStack_108;
          if (*plStack_248 != lVar30) goto LAB_1422fc1b7;
          if (*(longlong *)(pbStack_108 + 0x1c8) == 0) goto LAB_1422fc6a5;
          cVar4 = *pcStack_240;
          uVar35 = pdb_1400af0a0(pbStack_108 + 0x1d0,alStack_100);
          lVar30 = *(longlong *)(pbVar36 + 0x1b0);
          uVar45 = *(ulonglong *)(pbVar36 + 0x1b8);
          bVar29 = (byte)(uVar35 >> 0x39);
          auVar49 = ZEXT216(CONCAT11(bVar29,bVar29));
          auVar49 = pshuflw(auVar49,auVar49,0);
          lVar31 = 0;
          goto LAB_1422fc145;
        }
        pdb_142dc8110(&UNK_14329c4d8,8,&UNK_14329c528);
      }
                    /* WARNING: Subroutine does not return */
      pdb_142dc83d0(&UNK_14329c470,0x97,&UNK_14329c5e0);
    }
    uVar42 = (ushort)(uVar47 - 1) & (ushort)uVar47;
    uVar47 = CONCAT22((short)(uVar47 - 1 >> 0x10),uVar42);
  }
  auVar56[0] = -(auVar67[0] == cVar79);
  auVar56[1] = -(auVar67[1] == cVar81);
  auVar56[2] = -(auVar67[2] == cVar83);
  auVar56[3] = -(auVar67[3] == cVar85);
  auVar56[4] = -(auVar67[4] == -1);
  auVar56[5] = -(auVar67[5] == -1);
  auVar56[6] = -(auVar67[6] == -1);
  auVar56[7] = -(auVar67[7] == -1);
  auVar56[8] = -(auVar67[8] == -1);
  auVar56[9] = -(auVar67[9] == -1);
  auVar56[10] = -(auVar67[10] == -1);
  auVar56[0xb] = -(auVar67[0xb] == -1);
  auVar56[0xc] = -(auVar67[0xc] == -1);
  auVar56[0xd] = -(auVar67[0xd] == -1);
  auVar56[0xe] = -(auVar67[0xe] == -1);
  auVar56[0xf] = -(auVar67[0xf] == -1);
  if ((((((((((((((((SUB161(auVar56 >> 7,0) & 1) != 0 || (SUB161(auVar56 >> 0xf,0) & 1) != 0) ||
                  (SUB161(auVar56 >> 0x17,0) & 1) != 0) || (SUB161(auVar56 >> 0x1f,0) & 1) != 0) ||
                (SUB161(auVar56 >> 0x27,0) & 1) != 0) || (SUB161(auVar56 >> 0x2f,0) & 1) != 0) ||
              (SUB161(auVar56 >> 0x37,0) & 1) != 0) || (SUB161(auVar56 >> 0x3f,0) & 1) != 0) ||
            (SUB161(auVar56 >> 0x47,0) & 1) != 0) || (SUB161(auVar56 >> 0x4f,0) & 1) != 0) ||
          (SUB161(auVar56 >> 0x57,0) & 1) != 0) || (SUB161(auVar56 >> 0x5f,0) & 1) != 0) ||
        (SUB161(auVar56 >> 0x67,0) & 1) != 0) || (SUB161(auVar56 >> 0x6f,0) & 1) != 0) ||
      (SUB161(auVar56 >> 0x77,0) & 1) != 0) || auVar56[0xf] < '\0') goto LAB_1422fc722;
  uVar37 = uVar37 + lVar31 + 0x10;
  lVar31 = lVar31 + 0x10;
  goto LAB_1422fbfd8;
LAB_1422fc145:
  uVar35 = uVar35 & uVar45;
  pcVar1 = (char *)(lVar30 + uVar35);
  auVar70[0] = -(*pcVar1 == auVar49[0]);
  auVar70[1] = -(pcVar1[1] == auVar49[1]);
  auVar70[2] = -(pcVar1[2] == auVar49[2]);
  auVar70[3] = -(pcVar1[3] == auVar49[3]);
  auVar70[4] = -(pcVar1[4] == auVar49[4]);
  auVar70[5] = -(pcVar1[5] == auVar49[5]);
  auVar70[6] = -(pcVar1[6] == auVar49[6]);
  auVar70[7] = -(pcVar1[7] == auVar49[7]);
  auVar70[8] = -(pcVar1[8] == auVar49[0]);
  auVar70[9] = -(pcVar1[9] == auVar49[1]);
  auVar70[10] = -(pcVar1[10] == auVar49[2]);
  auVar70[0xb] = -(pcVar1[0xb] == auVar49[3]);
  auVar70[0xc] = -(pcVar1[0xc] == auVar49[4]);
  auVar70[0xd] = -(pcVar1[0xd] == auVar49[5]);
  auVar70[0xe] = -(pcVar1[0xe] == auVar49[6]);
  auVar70[0xf] = -(pcVar1[0xf] == auVar49[7]);
  uVar42 = (ushort)(SUB161(auVar70 >> 7,0) & 1) | (ushort)(SUB161(auVar70 >> 0xf,0) & 1) << 1 |
           (ushort)(SUB161(auVar70 >> 0x17,0) & 1) << 2 |
           (ushort)(SUB161(auVar70 >> 0x1f,0) & 1) << 3 |
           (ushort)(SUB161(auVar70 >> 0x27,0) & 1) << 4 |
           (ushort)(SUB161(auVar70 >> 0x2f,0) & 1) << 5 |
           (ushort)(SUB161(auVar70 >> 0x37,0) & 1) << 6 |
           (ushort)(SUB161(auVar70 >> 0x3f,0) & 1) << 7 |
           (ushort)(SUB161(auVar70 >> 0x47,0) & 1) << 8 |
           (ushort)(SUB161(auVar70 >> 0x4f,0) & 1) << 9 |
           (ushort)(SUB161(auVar70 >> 0x57,0) & 1) << 10 |
           (ushort)(SUB161(auVar70 >> 0x5f,0) & 1) << 0xb |
           (ushort)(SUB161(auVar70 >> 0x67,0) & 1) << 0xc |
           (ushort)(SUB161(auVar70 >> 0x6f,0) & 1) << 0xd |
           (ushort)(SUB161(auVar70 >> 0x77,0) & 1) << 0xe | (ushort)(auVar70[0xf] >> 7) << 0xf;
  uVar47 = (uint)uVar42;
joined_r0x0001422fc15d:
  if (uVar42 == 0) goto LAB_1422fc18b;
  uVar5 = 0;
  for (uVar6 = uVar47; (uVar6 & 1) == 0; uVar6 = uVar6 >> 1 | 0x80000000) {
    uVar5 = uVar5 + 1;
  }
  lVar40 = (uVar5 + uVar35 & uVar45) * -0xd8;
  if (alStack_100[0] != *(longlong *)(lVar30 + -0xd8 + lVar40)) goto code_r0x0001422fc17e;
  pbVar36 = (byte *)(lVar30 + lVar40 + -5);
  *pbVar36 = *pbVar36 | cVar4 * '\x04' + 4U;
LAB_1422fc1b7:
  pbVar36 = pbStack_108;
  if (*(longlong *)(pbStack_108 + 0x1c8) == 0) goto LAB_1422fc73a;
  uVar45 = pdb_1400af0a0(pbStack_108 + 0x1d0,alStack_100);
  lVar30 = *(longlong *)(pbVar36 + 0x1b0);
  bVar29 = (byte)(uVar45 >> 0x39);
  auVar49 = ZEXT216(CONCAT11(bVar29,bVar29));
  auVar49 = pshuflw(auVar49,auVar49,0);
  lVar31 = 0;
  while( true ) {
    uVar45 = uVar45 & *(ulonglong *)(pbVar36 + 0x1b8);
    auVar67 = *(undefined1 (*) [16])(lVar30 + uVar45);
    auVar71[0] = -(auVar67[0] == auVar49[0]);
    auVar71[1] = -(auVar67[1] == auVar49[1]);
    auVar71[2] = -(auVar67[2] == auVar49[2]);
    auVar71[3] = -(auVar67[3] == auVar49[3]);
    auVar71[4] = -(auVar67[4] == auVar49[4]);
    auVar71[5] = -(auVar67[5] == auVar49[5]);
    auVar71[6] = -(auVar67[6] == auVar49[6]);
    auVar71[7] = -(auVar67[7] == auVar49[7]);
    auVar71[8] = -(auVar67[8] == auVar49[0]);
    auVar71[9] = -(auVar67[9] == auVar49[1]);
    auVar71[10] = -(auVar67[10] == auVar49[2]);
    auVar71[0xb] = -(auVar67[0xb] == auVar49[3]);
    auVar71[0xc] = -(auVar67[0xc] == auVar49[4]);
    auVar71[0xd] = -(auVar67[0xd] == auVar49[5]);
    auVar71[0xe] = -(auVar67[0xe] == auVar49[6]);
    auVar71[0xf] = -(auVar67[0xf] == auVar49[7]);
    uVar42 = (ushort)(SUB161(auVar71 >> 7,0) & 1) | (ushort)(SUB161(auVar71 >> 0xf,0) & 1) << 1 |
             (ushort)(SUB161(auVar71 >> 0x17,0) & 1) << 2 |
             (ushort)(SUB161(auVar71 >> 0x1f,0) & 1) << 3 |
             (ushort)(SUB161(auVar71 >> 0x27,0) & 1) << 4 |
             (ushort)(SUB161(auVar71 >> 0x2f,0) & 1) << 5 |
             (ushort)(SUB161(auVar71 >> 0x37,0) & 1) << 6 |
             (ushort)(SUB161(auVar71 >> 0x3f,0) & 1) << 7 |
             (ushort)(SUB161(auVar71 >> 0x47,0) & 1) << 8 |
             (ushort)(SUB161(auVar71 >> 0x4f,0) & 1) << 9 |
             (ushort)(SUB161(auVar71 >> 0x57,0) & 1) << 10 |
             (ushort)(SUB161(auVar71 >> 0x5f,0) & 1) << 0xb |
             (ushort)(SUB161(auVar71 >> 0x67,0) & 1) << 0xc |
             (ushort)(SUB161(auVar71 >> 0x6f,0) & 1) << 0xd |
             (ushort)(SUB161(auVar71 >> 0x77,0) & 1) << 0xe | (ushort)(auVar71[0xf] >> 7) << 0xf;
    uVar47 = (uint)uVar42;
    if (uVar42 != 0) break;
LAB_1422fc25e:
    auVar58[0] = -(auVar67[0] == cVar79);
    auVar58[1] = -(auVar67[1] == cVar81);
    auVar58[2] = -(auVar67[2] == cVar83);
    auVar58[3] = -(auVar67[3] == cVar85);
    auVar58[4] = -(auVar67[4] == -1);
    auVar58[5] = -(auVar67[5] == -1);
    auVar58[6] = -(auVar67[6] == -1);
    auVar58[7] = -(auVar67[7] == -1);
    auVar58[8] = -(auVar67[8] == -1);
    auVar58[9] = -(auVar67[9] == -1);
    auVar58[10] = -(auVar67[10] == -1);
    auVar58[0xb] = -(auVar67[0xb] == -1);
    auVar58[0xc] = -(auVar67[0xc] == -1);
    auVar58[0xd] = -(auVar67[0xd] == -1);
    auVar58[0xe] = -(auVar67[0xe] == -1);
    auVar58[0xf] = -(auVar67[0xf] == -1);
    if ((((((((((((((((SUB161(auVar58 >> 7,0) & 1) != 0 || (SUB161(auVar58 >> 0xf,0) & 1) != 0) ||
                    (SUB161(auVar58 >> 0x17,0) & 1) != 0) || (SUB161(auVar58 >> 0x1f,0) & 1) != 0)
                  || (SUB161(auVar58 >> 0x27,0) & 1) != 0) || (SUB161(auVar58 >> 0x2f,0) & 1) != 0)
                || (SUB161(auVar58 >> 0x37,0) & 1) != 0) || (SUB161(auVar58 >> 0x3f,0) & 1) != 0) ||
              (SUB161(auVar58 >> 0x47,0) & 1) != 0) || (SUB161(auVar58 >> 0x4f,0) & 1) != 0) ||
            (SUB161(auVar58 >> 0x57,0) & 1) != 0) || (SUB161(auVar58 >> 0x5f,0) & 1) != 0) ||
          (SUB161(auVar58 >> 0x67,0) & 1) != 0) || (SUB161(auVar58 >> 0x6f,0) & 1) != 0) ||
        (SUB161(auVar58 >> 0x77,0) & 1) != 0) || auVar58[0xf] < '\0') goto LAB_1422fc73a;
    uVar45 = uVar45 + lVar31 + 0x10;
    lVar31 = lVar31 + 0x10;
  }
  while( true ) {
    uVar5 = 0;
    for (uVar6 = uVar47; (uVar6 & 1) == 0; uVar6 = uVar6 >> 1 | 0x80000000) {
      uVar5 = uVar5 + 1;
    }
    lVar40 = (uVar5 + uVar45 & *(ulonglong *)(pbVar36 + 0x1b8)) * -0xd8;
    if (alStack_100[0] == *(longlong *)(lVar30 + -0xd8 + lVar40)) break;
    uVar42 = (ushort)(uVar47 - 1) & (ushort)uVar47;
    uVar47 = CONCAT22((short)(uVar47 - 1 >> 0x10),uVar42);
    if (uVar42 == 0) goto LAB_1422fc25e;
  }
  if ((*(byte *)(lVar30 + lVar40 + -6) & 1) != 0) {
    if (*(longlong *)(pbVar36 + 0x1c8) != 0) {
      lStack_110 = alStack_100[0];
      uVar45 = pdb_1400af0a0(pbVar36 + 0x1d0,alStack_100);
      lVar30 = *(longlong *)(pbVar36 + 0x1b0);
      bVar29 = (byte)(uVar45 >> 0x39);
      auVar49 = ZEXT216(CONCAT11(bVar29,bVar29));
      auVar49 = pshuflw(auVar49,auVar49,0);
      lVar31 = 0;
      while( true ) {
        uVar45 = uVar45 & *(ulonglong *)(pbVar36 + 0x1b8);
        auVar67 = *(undefined1 (*) [16])(lVar30 + uVar45);
        auVar72[0] = -(auVar67[0] == auVar49[0]);
        auVar72[1] = -(auVar67[1] == auVar49[1]);
        auVar72[2] = -(auVar67[2] == auVar49[2]);
        auVar72[3] = -(auVar67[3] == auVar49[3]);
        auVar72[4] = -(auVar67[4] == auVar49[4]);
        auVar72[5] = -(auVar67[5] == auVar49[5]);
        auVar72[6] = -(auVar67[6] == auVar49[6]);
        auVar72[7] = -(auVar67[7] == auVar49[7]);
        auVar72[8] = -(auVar67[8] == auVar49[0]);
        auVar72[9] = -(auVar67[9] == auVar49[1]);
        auVar72[10] = -(auVar67[10] == auVar49[2]);
        auVar72[0xb] = -(auVar67[0xb] == auVar49[3]);
        auVar72[0xc] = -(auVar67[0xc] == auVar49[4]);
        auVar72[0xd] = -(auVar67[0xd] == auVar49[5]);
        auVar72[0xe] = -(auVar67[0xe] == auVar49[6]);
        auVar72[0xf] = -(auVar67[0xf] == auVar49[7]);
        uVar42 = (ushort)(SUB161(auVar72 >> 7,0) & 1) | (ushort)(SUB161(auVar72 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar72 >> 0x17,0) & 1) << 2 |
                 (ushort)(SUB161(auVar72 >> 0x1f,0) & 1) << 3 |
                 (ushort)(SUB161(auVar72 >> 0x27,0) & 1) << 4 |
                 (ushort)(SUB161(auVar72 >> 0x2f,0) & 1) << 5 |
                 (ushort)(SUB161(auVar72 >> 0x37,0) & 1) << 6 |
                 (ushort)(SUB161(auVar72 >> 0x3f,0) & 1) << 7 |
                 (ushort)(SUB161(auVar72 >> 0x47,0) & 1) << 8 |
                 (ushort)(SUB161(auVar72 >> 0x4f,0) & 1) << 9 |
                 (ushort)(SUB161(auVar72 >> 0x57,0) & 1) << 10 |
                 (ushort)(SUB161(auVar72 >> 0x5f,0) & 1) << 0xb |
                 (ushort)(SUB161(auVar72 >> 0x67,0) & 1) << 0xc |
                 (ushort)(SUB161(auVar72 >> 0x6f,0) & 1) << 0xd |
                 (ushort)(SUB161(auVar72 >> 0x77,0) & 1) << 0xe | (ushort)(auVar72[0xf] >> 7) << 0xf
        ;
        uVar47 = (uint)uVar42;
        while (uVar42 != 0) {
          uVar5 = 0;
          for (uVar6 = uVar47; (uVar6 & 1) == 0; uVar6 = uVar6 >> 1 | 0x80000000) {
            uVar5 = uVar5 + 1;
          }
          lVar40 = (uVar5 + uVar45 & *(ulonglong *)(pbVar36 + 0x1b8)) * -0xd8;
          if (lStack_110 == *(longlong *)(lVar30 + -0xd8 + lVar40)) {
            plVar38 = (longlong *)
                      param_2[(ulonglong)((*(byte *)(lVar30 + lVar40 + -6) & 0x40) == 0) + 5];
            *plVar38 = lStack_b8;
            plVar38[1] = lStack_110;
            pbVar36 = pbStack_108;
            goto LAB_1422fc371;
          }
          uVar42 = (ushort)(uVar47 - 1) & (ushort)uVar47;
          uVar47 = CONCAT22((short)(uVar47 - 1 >> 0x10),uVar42);
        }
        auVar59[0] = -(auVar67[0] == cVar79);
        auVar59[1] = -(auVar67[1] == cVar81);
        auVar59[2] = -(auVar67[2] == cVar83);
        auVar59[3] = -(auVar67[3] == cVar85);
        auVar59[4] = -(auVar67[4] == -1);
        auVar59[5] = -(auVar67[5] == -1);
        auVar59[6] = -(auVar67[6] == -1);
        auVar59[7] = -(auVar67[7] == -1);
        auVar59[8] = -(auVar67[8] == -1);
        auVar59[9] = -(auVar67[9] == -1);
        auVar59[10] = -(auVar67[10] == -1);
        auVar59[0xb] = -(auVar67[0xb] == -1);
        auVar59[0xc] = -(auVar67[0xc] == -1);
        auVar59[0xd] = -(auVar67[0xd] == -1);
        auVar59[0xe] = -(auVar67[0xe] == -1);
        auVar59[0xf] = -(auVar67[0xf] == -1);
        if ((((((((((((((((SUB161(auVar59 >> 7,0) & 1) != 0 || (SUB161(auVar59 >> 0xf,0) & 1) != 0)
                        || (SUB161(auVar59 >> 0x17,0) & 1) != 0) ||
                       (SUB161(auVar59 >> 0x1f,0) & 1) != 0) || (SUB161(auVar59 >> 0x27,0) & 1) != 0
                      ) || (SUB161(auVar59 >> 0x2f,0) & 1) != 0) ||
                    (SUB161(auVar59 >> 0x37,0) & 1) != 0) || (SUB161(auVar59 >> 0x3f,0) & 1) != 0)
                  || (SUB161(auVar59 >> 0x47,0) & 1) != 0) || (SUB161(auVar59 >> 0x4f,0) & 1) != 0)
                || (SUB161(auVar59 >> 0x57,0) & 1) != 0) || (SUB161(auVar59 >> 0x5f,0) & 1) != 0) ||
              (SUB161(auVar59 >> 0x67,0) & 1) != 0) || (SUB161(auVar59 >> 0x6f,0) & 1) != 0) ||
            (SUB161(auVar59 >> 0x77,0) & 1) != 0) || auVar59[0xf] < '\0') break;
        uVar45 = uVar45 + lVar31 + 0x10;
        lVar31 = lVar31 + 0x10;
      }
    }
    goto LAB_1422fc73a;
  }
LAB_1422fc371:
  if (*(longlong *)(pbVar36 + 0x1c8) == 0) goto LAB_1422fc73a;
  uVar45 = pdb_1400af0a0(pbVar36 + 0x1d0,alStack_100);
  lVar30 = *(longlong *)(pbVar36 + 0x1b0);
  bVar29 = (byte)(uVar45 >> 0x39);
  auVar49 = ZEXT216(CONCAT11(bVar29,bVar29));
  auVar49 = pshuflw(auVar49,auVar49,0);
  lVar31 = 0;
  while( true ) {
    uVar45 = uVar45 & *(ulonglong *)(pbVar36 + 0x1b8);
    auVar67 = *(undefined1 (*) [16])(lVar30 + uVar45);
    auVar73[0] = -(auVar67[0] == auVar49[0]);
    auVar73[1] = -(auVar67[1] == auVar49[1]);
    auVar73[2] = -(auVar67[2] == auVar49[2]);
    auVar73[3] = -(auVar67[3] == auVar49[3]);
    auVar73[4] = -(auVar67[4] == auVar49[4]);
    auVar73[5] = -(auVar67[5] == auVar49[5]);
    auVar73[6] = -(auVar67[6] == auVar49[6]);
    auVar73[7] = -(auVar67[7] == auVar49[7]);
    auVar73[8] = -(auVar67[8] == auVar49[0]);
    auVar73[9] = -(auVar67[9] == auVar49[1]);
    auVar73[10] = -(auVar67[10] == auVar49[2]);
    auVar73[0xb] = -(auVar67[0xb] == auVar49[3]);
    auVar73[0xc] = -(auVar67[0xc] == auVar49[4]);
    auVar73[0xd] = -(auVar67[0xd] == auVar49[5]);
    auVar73[0xe] = -(auVar67[0xe] == auVar49[6]);
    auVar73[0xf] = -(auVar67[0xf] == auVar49[7]);
    uVar42 = (ushort)(SUB161(auVar73 >> 7,0) & 1) | (ushort)(SUB161(auVar73 >> 0xf,0) & 1) << 1 |
             (ushort)(SUB161(auVar73 >> 0x17,0) & 1) << 2 |
             (ushort)(SUB161(auVar73 >> 0x1f,0) & 1) << 3 |
             (ushort)(SUB161(auVar73 >> 0x27,0) & 1) << 4 |
             (ushort)(SUB161(auVar73 >> 0x2f,0) & 1) << 5 |
             (ushort)(SUB161(auVar73 >> 0x37,0) & 1) << 6 |
             (ushort)(SUB161(auVar73 >> 0x3f,0) & 1) << 7 |
             (ushort)(SUB161(auVar73 >> 0x47,0) & 1) << 8 |
             (ushort)(SUB161(auVar73 >> 0x4f,0) & 1) << 9 |
             (ushort)(SUB161(auVar73 >> 0x57,0) & 1) << 10 |
             (ushort)(SUB161(auVar73 >> 0x5f,0) & 1) << 0xb |
             (ushort)(SUB161(auVar73 >> 0x67,0) & 1) << 0xc |
             (ushort)(SUB161(auVar73 >> 0x6f,0) & 1) << 0xd |
             (ushort)(SUB161(auVar73 >> 0x77,0) & 1) << 0xe | (ushort)(auVar73[0xf] >> 7) << 0xf;
    uVar47 = (uint)uVar42;
    if (uVar42 != 0) break;
LAB_1422fc40a:
    auVar60[0] = -(auVar67[0] == cVar79);
    auVar60[1] = -(auVar67[1] == cVar81);
    auVar60[2] = -(auVar67[2] == cVar83);
    auVar60[3] = -(auVar67[3] == cVar85);
    auVar60[4] = -(auVar67[4] == -1);
    auVar60[5] = -(auVar67[5] == -1);
    auVar60[6] = -(auVar67[6] == -1);
    auVar60[7] = -(auVar67[7] == -1);
    auVar60[8] = -(auVar67[8] == -1);
    auVar60[9] = -(auVar67[9] == -1);
    auVar60[10] = -(auVar67[10] == -1);
    auVar60[0xb] = -(auVar67[0xb] == -1);
    auVar60[0xc] = -(auVar67[0xc] == -1);
    auVar60[0xd] = -(auVar67[0xd] == -1);
    auVar60[0xe] = -(auVar67[0xe] == -1);
    auVar60[0xf] = -(auVar67[0xf] == -1);
    if ((((((((((((((((SUB161(auVar60 >> 7,0) & 1) != 0 || (SUB161(auVar60 >> 0xf,0) & 1) != 0) ||
                    (SUB161(auVar60 >> 0x17,0) & 1) != 0) || (SUB161(auVar60 >> 0x1f,0) & 1) != 0)
                  || (SUB161(auVar60 >> 0x27,0) & 1) != 0) || (SUB161(auVar60 >> 0x2f,0) & 1) != 0)
                || (SUB161(auVar60 >> 0x37,0) & 1) != 0) || (SUB161(auVar60 >> 0x3f,0) & 1) != 0) ||
              (SUB161(auVar60 >> 0x47,0) & 1) != 0) || (SUB161(auVar60 >> 0x4f,0) & 1) != 0) ||
            (SUB161(auVar60 >> 0x57,0) & 1) != 0) || (SUB161(auVar60 >> 0x5f,0) & 1) != 0) ||
          (SUB161(auVar60 >> 0x67,0) & 1) != 0) || (SUB161(auVar60 >> 0x6f,0) & 1) != 0) ||
        (SUB161(auVar60 >> 0x77,0) & 1) != 0) || auVar60[0xf] < '\0') goto LAB_1422fc73a;
    uVar45 = uVar45 + lVar31 + 0x10;
    lVar31 = lVar31 + 0x10;
  }
  while( true ) {
    uVar5 = 0;
    for (uVar6 = uVar47; (uVar6 & 1) == 0; uVar6 = uVar6 >> 1 | 0x80000000) {
      uVar5 = uVar5 + 1;
    }
    lVar40 = (uVar5 + uVar45 & *(ulonglong *)(pbVar36 + 0x1b8)) * -0xd8;
    if (alStack_100[0] == *(longlong *)(lVar30 + -0xd8 + lVar40)) break;
    uVar42 = (ushort)(uVar47 - 1) & (ushort)uVar47;
    uVar47 = CONCAT22((short)(uVar47 - 1 >> 0x10),uVar42);
    if (uVar42 == 0) goto LAB_1422fc40a;
  }
  if ((*(byte *)(lVar30 + lVar40 + -6) & 0x30) != 0) {
    if (lStack_b8 != *plStack_118) {
      *(undefined4 *)puStack_228[2] = *(undefined4 *)((longlong)puStack_228 + 0x1c);
      uVar28 = pdb_140ae5010(*puStack_228,lStack_220);
      pdb_140c45b00(&uStack_198,*puStack_218,*puStack_1c8);
      lStack_110 = CONCAT71(lStack_110._1_7_,uVar28);
      if (((ulonglong)uStack_198 & 1) == 0) {
        uStack_128 = 0;
        uStack_120 = 0;
      }
      else {
        uStack_120 = uStack_170;
        uStack_128 = uStack_178;
      }
      uVar39 = *puStack_1c8;
      uVar34 = *puStack_208;
      uVar9 = puStack_208[1];
      lVar30 = *plStack_118;
      *(undefined4 *)plStack_210[2] = *(undefined4 *)((longlong)plStack_210 + 0x1c);
      lVar31 = *plStack_210;
      lVar40 = *(longlong *)(lVar31 + 0x30);
      uVar41 = *(undefined8 *)(lVar31 + 0x40);
      if (lVar40 == *(longlong *)(lVar31 + 0x20)) {
        uStack_1f8 = *(undefined8 *)(lVar31 + 0x40);
        lStack_1f0 = lVar30;
        uStack_12c = uVar39;
        pdb_142d7eec0(lVar31 + 0x20);
        uVar41 = uStack_1f8;
        lVar30 = lStack_1f0;
        uVar39 = uStack_12c;
      }
      lVar43 = *(longlong *)(lVar31 + 0x28);
      puVar2 = (undefined8 *)(lVar43 + lVar40 * 0x48);
      *puVar2 = uVar34;
      puVar2[1] = uVar9;
      *(undefined8 *)(lVar43 + 0x10 + lVar40 * 0x48) = 6;
      *(longlong *)(lVar43 + 0x18 + lVar40 * 0x48) = lVar30;
      *(undefined8 *)(lVar43 + 0x20 + lVar40 * 0x48) = 6;
      *(longlong *)(lVar43 + 0x28 + lVar40 * 0x48) = lStack_b8;
      *(undefined4 *)(lVar43 + 0x30 + lVar40 * 0x48) = uVar39;
      *(undefined8 *)(lVar43 + 0x34 + lVar40 * 0x48) = uStack_128;
      *(undefined4 *)(lVar43 + 0x3c + lVar40 * 0x48) = uStack_120;
      *(undefined8 *)(lVar43 + 0x40 + lVar40 * 0x48) = uVar41;
      *(longlong *)(lVar31 + 0x30) = lVar40 + 1;
      *(longlong *)(lVar31 + 0x40) = *(longlong *)(lVar31 + 0x40) + 1;
      if ((char)lStack_110 != '\0') {
        *(undefined4 *)plStack_200[2] = *(undefined4 *)((longlong)plStack_200 + 0x1c);
        lVar30 = *plStack_200;
        lVar31 = *(longlong *)(lVar30 + 0x30);
        lVar40 = *(longlong *)(lVar30 + 0x40);
        if (lVar31 == *(longlong *)(lVar30 + 0x20)) {
          lStack_b8 = *(longlong *)(lVar30 + 0x40);
          pdb_142d7e8a0(lVar30 + 0x20);
          lVar40 = lStack_b8;
        }
        *(longlong *)(*(longlong *)(lVar30 + 0x28) + lVar31 * 8) = lVar40;
        *(longlong *)(lVar30 + 0x30) = lVar31 + 1;
        *(longlong *)(lVar30 + 0x40) = *(longlong *)(lVar30 + 0x40) + 1;
      }
    }
    *(undefined4 *)puStack_230[2] = *(undefined4 *)((longlong)puStack_230 + 0x1c);
    *(undefined4 *)*puStack_230 = 0;
  }
  uVar45 = 0;
  plVar38 = plStack_1c0;
  if (pbStack_c0 == (byte *)0x0) goto LAB_1422fc627;
  goto LAB_1422fbdcb;
LAB_1422fc18b:
  auVar57[0] = -(*pcVar1 == cVar79);
  auVar57[1] = -(pcVar1[1] == cVar81);
  auVar57[2] = -(pcVar1[2] == cVar83);
  auVar57[3] = -(pcVar1[3] == cVar85);
  auVar57[4] = -(pcVar1[4] == -1);
  auVar57[5] = -(pcVar1[5] == -1);
  auVar57[6] = -(pcVar1[6] == -1);
  auVar57[7] = -(pcVar1[7] == -1);
  auVar57[8] = -(pcVar1[8] == -1);
  auVar57[9] = -(pcVar1[9] == -1);
  auVar57[10] = -(pcVar1[10] == -1);
  auVar57[0xb] = -(pcVar1[0xb] == -1);
  auVar57[0xc] = -(pcVar1[0xc] == -1);
  auVar57[0xd] = -(pcVar1[0xd] == -1);
  auVar57[0xe] = -(pcVar1[0xe] == -1);
  auVar57[0xf] = -(pcVar1[0xf] == -1);
  if ((((((((((((((((SUB161(auVar57 >> 7,0) & 1) != 0 || (SUB161(auVar57 >> 0xf,0) & 1) != 0) ||
                  (SUB161(auVar57 >> 0x17,0) & 1) != 0) || (SUB161(auVar57 >> 0x1f,0) & 1) != 0) ||
                (SUB161(auVar57 >> 0x27,0) & 1) != 0) || (SUB161(auVar57 >> 0x2f,0) & 1) != 0) ||
              (SUB161(auVar57 >> 0x37,0) & 1) != 0) || (SUB161(auVar57 >> 0x3f,0) & 1) != 0) ||
            (SUB161(auVar57 >> 0x47,0) & 1) != 0) || (SUB161(auVar57 >> 0x4f,0) & 1) != 0) ||
          (SUB161(auVar57 >> 0x57,0) & 1) != 0) || (SUB161(auVar57 >> 0x5f,0) & 1) != 0) ||
        (SUB161(auVar57 >> 0x67,0) & 1) != 0) || (SUB161(auVar57 >> 0x6f,0) & 1) != 0) ||
      (SUB161(auVar57 >> 0x77,0) & 1) != 0) || auVar57[0xf] < '\0') goto LAB_1422fc6a5;
  uVar35 = uVar35 + lVar31 + 0x10;
  lVar31 = lVar31 + 0x10;
  goto LAB_1422fc145;
code_r0x0001422fc17e:
  uVar42 = (ushort)(uVar47 - 1) & (ushort)uVar47;
  uVar47 = CONCAT22((short)(uVar47 - 1 >> 0x10),uVar42);
  goto joined_r0x0001422fc15d;
LAB_1422fc627:
  uStack_198 = (ulonglong *)lStack_1e8;
  bVar29 = pdb_141172f20(lStack_1e8,uStack_1e0,&uStack_198);
  if (bVar29 != 0) {
    uStack_f0 = uVar44;
  }
  bVar29 = (byte)uStack_238 | bVar29;
  uVar34 = CONCAT71((int7)((ulonglong)uStack_238 >> 8),bVar29);
  uVar44 = uVar32;
  if (uVar32 == uVar46) {
    lVar30 = pdb_14116e5a0(param_1);
    if ((bVar29 & *(byte *)(lVar30 + 0x3a) & 1) != 0) {
      if ((longlong)uStack_f0 < 0) {
LAB_1422fc76a:
        fStack_1b0 = (float)uStack_f0;
      }
      else {
        fStack_1b0 = (float)(longlong)uStack_f0;
      }
      fVar61 = _DAT_142e37878 + *(float *)(lVar30 + 0x28);
      fStack_1b0 = fStack_1b0 * fVar61;
      fVar61 = (*(float *)(lVar30 + 0x28) + fStack_1b0) -
               (fVar61 * (float)*(ulonglong *)(lVar30 + 0x18) + _DAT_142fa5b20);
      if (fVar61 <= 0.0) {
        fVar61 = 0.0;
      }
      if (fStack_1b0 < fVar61) {
        uStack_e8 = CONCAT44(uStack_e8._4_4_,fVar61);
        uStack_198 = &uStack_e8;
        uStack_190 = pdb_140f705d0;
        pfStack_188 = &fStack_1b0;
        pcStack_180 = pdb_140f705d0;
                    /* WARNING: Subroutine does not return */
        pdb_142dc83d0(&UNK_142fa5c78,&uStack_198,&UNK_142fa5d18);
      }
      if (fVar61 <= *(float *)(lVar30 + 0x30)) {
        fVar61 = *(float *)(lVar30 + 0x30);
      }
      if (fVar61 <= fStack_1b0) {
        fStack_1b0 = fVar61;
      }
      *(float *)(lVar30 + 0x30) = fStack_1b0;
    }
    return lVar30;
  }
  goto LAB_1422fba4a;
LAB_1422fc722:
  pdb_142dc8110(&UNK_14329c448,0xb,&UNK_14329c510);
LAB_1422fc73a:
  pdb_142dc8110(&UNK_142fa60f8,0x16,&UNK_142fa6ad0);
LAB_1422fc752:
  lVar30 = pdb_142dc8110(&UNK_1434d6c6e,0x1e,&UNK_1434d6cc0);
  goto LAB_1422fc76a;
LAB_1422fb8af:
  auVar64[0] = -(auVar67[0] == -1);
  auVar64[1] = -(auVar67[1] == -1);
  auVar64[2] = -(auVar67[2] == -1);
  auVar64[3] = -(auVar67[3] == -1);
  auVar64[4] = -(auVar67[4] == -1);
  auVar64[5] = -(auVar67[5] == -1);
  auVar64[6] = -(auVar67[6] == -1);
  auVar64[7] = -(auVar67[7] == -1);
  auVar64[8] = -(auVar67[8] == -1);
  auVar64[9] = -(auVar67[9] == -1);
  auVar64[10] = -(auVar67[10] == -1);
  auVar64[0xb] = -(auVar67[0xb] == -1);
  auVar64[0xc] = -(auVar67[0xc] == -1);
  auVar64[0xd] = -(auVar67[0xd] == -1);
  auVar64[0xe] = -(auVar67[0xe] == -1);
  auVar64[0xf] = -(auVar67[0xf] == -1);
  if ((((((((((((((((SUB161(auVar64 >> 7,0) & 1) != 0 || (SUB161(auVar64 >> 0xf,0) & 1) != 0) ||
                  (SUB161(auVar64 >> 0x17,0) & 1) != 0) || (SUB161(auVar64 >> 0x1f,0) & 1) != 0) ||
                (SUB161(auVar64 >> 0x27,0) & 1) != 0) || (SUB161(auVar64 >> 0x2f,0) & 1) != 0) ||
              (SUB161(auVar64 >> 0x37,0) & 1) != 0) || (SUB161(auVar64 >> 0x3f,0) & 1) != 0) ||
            (SUB161(auVar64 >> 0x47,0) & 1) != 0) || (SUB161(auVar64 >> 0x4f,0) & 1) != 0) ||
          (SUB161(auVar64 >> 0x57,0) & 1) != 0) || (SUB161(auVar64 >> 0x5f,0) & 1) != 0) ||
        (SUB161(auVar64 >> 0x67,0) & 1) != 0) || (SUB161(auVar64 >> 0x6f,0) & 1) != 0) ||
      (SUB161(auVar64 >> 0x77,0) & 1) != 0) || auVar64[0xf] < '\0') goto LAB_1422fc6a5;
  uVar45 = uVar45 + lVar40 + 0x10;
  lVar40 = lVar40 + 0x10;
LAB_1422fb865:
  uVar45 = uVar45 & *(ulonglong *)(lVar30 + 0x1b8);
  auVar67 = *(undefined1 (*) [16])(lVar31 + uVar45);
  auVar76[0] = -(auVar67[0] == auVar49[0]);
  auVar76[1] = -(auVar67[1] == auVar49[1]);
  auVar76[2] = -(auVar67[2] == auVar49[2]);
  auVar76[3] = -(auVar67[3] == auVar49[3]);
  auVar76[4] = -(auVar67[4] == auVar49[4]);
  auVar76[5] = -(auVar67[5] == auVar49[5]);
  auVar76[6] = -(auVar67[6] == auVar49[6]);
  auVar76[7] = -(auVar67[7] == auVar49[7]);
  auVar76[8] = -(auVar67[8] == auVar49[0]);
  auVar76[9] = -(auVar67[9] == auVar49[1]);
  auVar76[10] = -(auVar67[10] == auVar49[2]);
  auVar76[0xb] = -(auVar67[0xb] == auVar49[3]);
  auVar76[0xc] = -(auVar67[0xc] == auVar49[4]);
  auVar76[0xd] = -(auVar67[0xd] == auVar49[5]);
  auVar76[0xe] = -(auVar67[0xe] == auVar49[6]);
  auVar76[0xf] = -(auVar67[0xf] == auVar49[7]);
  uVar42 = (ushort)(SUB161(auVar76 >> 7,0) & 1) | (ushort)(SUB161(auVar76 >> 0xf,0) & 1) << 1 |
           (ushort)(SUB161(auVar76 >> 0x17,0) & 1) << 2 |
           (ushort)(SUB161(auVar76 >> 0x1f,0) & 1) << 3 |
           (ushort)(SUB161(auVar76 >> 0x27,0) & 1) << 4 |
           (ushort)(SUB161(auVar76 >> 0x2f,0) & 1) << 5 |
           (ushort)(SUB161(auVar76 >> 0x37,0) & 1) << 6 |
           (ushort)(SUB161(auVar76 >> 0x3f,0) & 1) << 7 |
           (ushort)(SUB161(auVar76 >> 0x47,0) & 1) << 8 |
           (ushort)(SUB161(auVar76 >> 0x4f,0) & 1) << 9 |
           (ushort)(SUB161(auVar76 >> 0x57,0) & 1) << 10 |
           (ushort)(SUB161(auVar76 >> 0x5f,0) & 1) << 0xb |
           (ushort)(SUB161(auVar76 >> 0x67,0) & 1) << 0xc |
           (ushort)(SUB161(auVar76 >> 0x6f,0) & 1) << 0xd |
           (ushort)(SUB161(auVar76 >> 0x77,0) & 1) << 0xe | (ushort)(auVar76[0xf] >> 7) << 0xf;
  uVar47 = (uint)uVar42;
  while( true ) {
    if (uVar42 == 0) goto LAB_1422fb8af;
    uVar5 = 0;
    for (uVar6 = uVar47; (uVar6 & 1) == 0; uVar6 = uVar6 >> 1 | 0x80000000) {
      uVar5 = uVar5 + 1;
    }
    lVar43 = (uVar5 + uVar45 & *(ulonglong *)(lVar30 + 0x1b8)) * -0xd8;
    if (*plVar38 == *(longlong *)(lVar31 + -0xd8 + lVar43)) break;
    uVar42 = (ushort)(uVar47 - 1) & (ushort)uVar47;
    uVar47 = CONCAT22((short)(uVar47 - 1 >> 0x10),uVar42);
  }
  lVar31 = lVar31 + lVar43;
  bVar29 = *(byte *)(lVar31 + -5);
  *(byte *)(lVar31 + -5) = bVar29 | 0xe0;
  if ((uVar32 < uVar44) || (uVar46 <= uVar32)) {
    *(byte *)(lVar31 + -5) = bVar29 | 0xe4;
  }
  if (uVar44 < uVar46) goto LAB_1422fb9b0;
code_r0x00014116e5a0:
  lVar30 = *param_1;
  if (*(longlong *)(lVar30 + 0x1c8) != 0) {
    uStack_50 = 0x14116e5ca;
    uVar32 = pdb_1400af0a0(lVar30 + 0x1d0,param_1 + 1);
    lVar31 = *(longlong *)(lVar30 + 0x1b0);
    bVar29 = (byte)(uVar32 >> 0x39);
    auVar49 = ZEXT216(CONCAT11(bVar29,bVar29));
    auVar49 = pshuflw(auVar49,auVar49,0);
    lVar40 = 0;
    while( true ) {
      uVar32 = uVar32 & *(ulonglong *)(lVar30 + 0x1b8);
      auVar67 = *(undefined1 (*) [16])(lVar31 + uVar32);
      auVar74[0] = -(auVar67[0] == auVar49[0]);
      auVar74[1] = -(auVar67[1] == auVar49[1]);
      auVar74[2] = -(auVar67[2] == auVar49[2]);
      auVar74[3] = -(auVar67[3] == auVar49[3]);
      auVar74[4] = -(auVar67[4] == auVar49[4]);
      auVar74[5] = -(auVar67[5] == auVar49[5]);
      auVar74[6] = -(auVar67[6] == auVar49[6]);
      auVar74[7] = -(auVar67[7] == auVar49[7]);
      auVar74[8] = -(auVar67[8] == auVar49[0]);
      auVar74[9] = -(auVar67[9] == auVar49[1]);
      auVar74[10] = -(auVar67[10] == auVar49[2]);
      auVar74[0xb] = -(auVar67[0xb] == auVar49[3]);
      auVar74[0xc] = -(auVar67[0xc] == auVar49[4]);
      auVar74[0xd] = -(auVar67[0xd] == auVar49[5]);
      auVar74[0xe] = -(auVar67[0xe] == auVar49[6]);
      auVar74[0xf] = -(auVar67[0xf] == auVar49[7]);
      uVar42 = (ushort)(SUB161(auVar74 >> 7,0) & 1) | (ushort)(SUB161(auVar74 >> 0xf,0) & 1) << 1 |
               (ushort)(SUB161(auVar74 >> 0x17,0) & 1) << 2 |
               (ushort)(SUB161(auVar74 >> 0x1f,0) & 1) << 3 |
               (ushort)(SUB161(auVar74 >> 0x27,0) & 1) << 4 |
               (ushort)(SUB161(auVar74 >> 0x2f,0) & 1) << 5 |
               (ushort)(SUB161(auVar74 >> 0x37,0) & 1) << 6 |
               (ushort)(SUB161(auVar74 >> 0x3f,0) & 1) << 7 |
               (ushort)(SUB161(auVar74 >> 0x47,0) & 1) << 8 |
               (ushort)(SUB161(auVar74 >> 0x4f,0) & 1) << 9 |
               (ushort)(SUB161(auVar74 >> 0x57,0) & 1) << 10 |
               (ushort)(SUB161(auVar74 >> 0x5f,0) & 1) << 0xb |
               (ushort)(SUB161(auVar74 >> 0x67,0) & 1) << 0xc |
               (ushort)(SUB161(auVar74 >> 0x6f,0) & 1) << 0xd |
               (ushort)(SUB161(auVar74 >> 0x77,0) & 1) << 0xe | (ushort)(auVar74[0xf] >> 7) << 0xf;
      uVar47 = (uint)uVar42;
      while (uVar42 != 0) {
        uVar5 = 0;
        for (uVar6 = uVar47; (uVar6 & 1) == 0; uVar6 = uVar6 >> 1 | 0x80000000) {
          uVar5 = uVar5 + 1;
        }
        lVar43 = (uVar5 + uVar32 & *(ulonglong *)(lVar30 + 0x1b8)) * -0xd8;
        if (param_1[1] == *(longlong *)(lVar31 + -0xd8 + lVar43)) {
          lVar31 = lVar31 + lVar43;
          if (*(longlong *)(lVar31 + -0x38) == 0) goto LAB_14116e6e2;
          uStack_50 = 0x14116e67e;
          lVar30 = (**(code **)(*(longlong *)(lVar31 + -0x30) + 0x28))();
          uStack_50 = 0x14116e68f;
          (**(code **)(lVar31 + 0x18))(&stack0xffffffffffffffd8,lVar30);
          auVar49[0] = -((char)unaff_R12 == DAT_14329bc50);
          auVar49[1] = -((char)((ulonglong)unaff_R12 >> 8) == UNK_14329bc51);
          auVar49[2] = -((char)((ulonglong)unaff_R12 >> 0x10) == UNK_14329bc52);
          auVar49[3] = -((char)((ulonglong)unaff_R12 >> 0x18) == UNK_14329bc53);
          auVar49[4] = -((char)((ulonglong)unaff_R12 >> 0x20) == UNK_14329bc54);
          auVar49[5] = -((char)((ulonglong)unaff_R12 >> 0x28) == UNK_14329bc55);
          auVar49[6] = -((char)((ulonglong)unaff_R12 >> 0x30) == UNK_14329bc56);
          auVar49[7] = -((char)((ulonglong)unaff_R12 >> 0x38) == UNK_14329bc57);
          auVar49[8] = -((char)unaff_R13 == UNK_14329bc58);
          auVar49[9] = -((char)((ulonglong)unaff_R13 >> 8) == UNK_14329bc59);
          auVar49[10] = -((char)((ulonglong)unaff_R13 >> 0x10) == UNK_14329bc5a);
          auVar49[0xb] = -((char)((ulonglong)unaff_R13 >> 0x18) == UNK_14329bc5b);
          auVar49[0xc] = -((char)((ulonglong)unaff_R13 >> 0x20) == UNK_14329bc5c);
          auVar49[0xd] = -((char)((ulonglong)unaff_R13 >> 0x28) == UNK_14329bc5d);
          auVar49[0xe] = -((char)((ulonglong)unaff_R13 >> 0x30) == UNK_14329bc5e);
          auVar49[0xf] = -((char)((ulonglong)unaff_R13 >> 0x38) == UNK_14329bc5f);
          if ((ushort)((ushort)(SUB161(auVar49 >> 7,0) & 1) |
                       (ushort)(SUB161(auVar49 >> 0xf,0) & 1) << 1 |
                       (ushort)(SUB161(auVar49 >> 0x17,0) & 1) << 2 |
                       (ushort)(SUB161(auVar49 >> 0x1f,0) & 1) << 3 |
                       (ushort)(SUB161(auVar49 >> 0x27,0) & 1) << 4 |
                       (ushort)(SUB161(auVar49 >> 0x2f,0) & 1) << 5 |
                       (ushort)(SUB161(auVar49 >> 0x37,0) & 1) << 6 |
                       (ushort)(SUB161(auVar49 >> 0x3f,0) & 1) << 7 |
                       (ushort)(SUB161(auVar49 >> 0x47,0) & 1) << 8 |
                       (ushort)(SUB161(auVar49 >> 0x4f,0) & 1) << 9 |
                       (ushort)(SUB161(auVar49 >> 0x57,0) & 1) << 10 |
                       (ushort)(SUB161(auVar49 >> 0x5f,0) & 1) << 0xb |
                       (ushort)(SUB161(auVar49 >> 0x67,0) & 1) << 0xc |
                       (ushort)(SUB161(auVar49 >> 0x6f,0) & 1) << 0xd |
                       (ushort)(SUB161(auVar49 >> 0x77,0) & 1) << 0xe |
                      (ushort)(auVar49[0xf] >> 7) << 0xf) == 0xffff) {
            return lVar30;
          }
          goto LAB_14116e6ca;
        }
        uVar42 = (ushort)(uVar47 - 1) & (ushort)uVar47;
        uVar47 = CONCAT22((short)(uVar47 - 1 >> 0x10),uVar42);
      }
      auVar62[0] = -(auVar67[0] == -1);
      auVar62[1] = -(auVar67[1] == -1);
      auVar62[2] = -(auVar67[2] == -1);
      auVar62[3] = -(auVar67[3] == -1);
      auVar62[4] = -(auVar67[4] == -1);
      auVar62[5] = -(auVar67[5] == -1);
      auVar62[6] = -(auVar67[6] == -1);
      auVar62[7] = -(auVar67[7] == -1);
      auVar62[8] = -(auVar67[8] == -1);
      auVar62[9] = -(auVar67[9] == -1);
      auVar62[10] = -(auVar67[10] == -1);
      auVar62[0xb] = -(auVar67[0xb] == -1);
      auVar62[0xc] = -(auVar67[0xc] == -1);
      auVar62[0xd] = -(auVar67[0xd] == -1);
      auVar62[0xe] = -(auVar67[0xe] == -1);
      auVar62[0xf] = -(auVar67[0xf] == -1);
      if ((((((((((((((((SUB161(auVar62 >> 7,0) & 1) != 0 || (SUB161(auVar62 >> 0xf,0) & 1) != 0) ||
                      (SUB161(auVar62 >> 0x17,0) & 1) != 0) || (SUB161(auVar62 >> 0x1f,0) & 1) != 0)
                    || (SUB161(auVar62 >> 0x27,0) & 1) != 0) || (SUB161(auVar62 >> 0x2f,0) & 1) != 0
                   ) || (SUB161(auVar62 >> 0x37,0) & 1) != 0) ||
                 (SUB161(auVar62 >> 0x3f,0) & 1) != 0) || (SUB161(auVar62 >> 0x47,0) & 1) != 0) ||
               (SUB161(auVar62 >> 0x4f,0) & 1) != 0) || (SUB161(auVar62 >> 0x57,0) & 1) != 0) ||
             (SUB161(auVar62 >> 0x5f,0) & 1) != 0) || (SUB161(auVar62 >> 0x67,0) & 1) != 0) ||
           (SUB161(auVar62 >> 0x6f,0) & 1) != 0) || (SUB161(auVar62 >> 0x77,0) & 1) != 0) ||
          auVar62[0xf] < '\0') break;
      uVar32 = uVar32 + lVar40 + 0x10;
      lVar40 = lVar40 + 0x10;
    }
  }
  uStack_50 = 0x14116e6ca;
  pdb_142dc8110(&UNK_14329c448,0xb,&UNK_14329c510);
LAB_14116e6ca:
  uStack_50 = 0x14116e6e2;
  pdb_142dc8110(&UNK_14329c4d8,8,&UNK_14329c528);
LAB_14116e6e2:
                    /* WARNING: Subroutine does not return */
  uStack_50 = 0x14116e6fa;
  pdb_142dc83d0(&UNK_14329c470,0x97,&UNK_14329c5e0);
LAB_1422fb9b0:
  uVar27 = _UNK_14329c2b8;
  uVar26 = _DAT_14329c2b0;
  cVar25 = UNK_142f3b30f;
  cVar24 = UNK_142f3b30e;
  cVar23 = UNK_142f3b30d;
  cVar22 = UNK_142f3b30c;
  cVar21 = UNK_142f3b30b;
  cVar20 = UNK_142f3b30a;
  cVar19 = UNK_142f3b309;
  cVar18 = UNK_142f3b308;
  cVar17 = UNK_142f3b307;
  cVar16 = UNK_142f3b306;
  cVar15 = UNK_142f3b305;
  cVar14 = UNK_142f3b304;
  cVar13 = UNK_142f3b303;
  cVar12 = UNK_142f3b302;
  cVar11 = UNK_142f3b301;
  cVar10 = DAT_142f3b300;
  lStack_250 = *param_2;
  puStack_258 = (undefined8 *)param_2[1];
  plStack_118 = (longlong *)param_2[2];
  plStack_248 = (longlong *)param_2[3];
  pcStack_240 = (char *)param_2[4];
  puStack_228 = (undefined8 *)param_2[7];
  lStack_220 = param_2[8];
  puStack_218 = (undefined8 *)param_2[9];
  puStack_1c8 = (undefined4 *)param_2[10];
  plStack_210 = (longlong *)param_2[0xb];
  puStack_208 = (undefined8 *)param_2[0xc];
  plStack_200 = (longlong *)param_2[0xd];
  iVar7 = -(uint)(CONCAT13(uVar84,CONCAT12(uVar82,CONCAT11(uVar80,uVar28))) ==
                 CONCAT13(uVar84,CONCAT12(uVar82,CONCAT11(uVar80,uVar28))));
  cVar79 = (char)iVar7;
  cVar81 = (char)((uint)iVar7 >> 8);
  cVar83 = (char)((uint)iVar7 >> 0x10);
  cVar85 = (char)((uint)iVar7 >> 0x18);
  puStack_230 = (undefined8 *)param_2[0xe];
  uVar34 = 0;
LAB_1422fba4a:
  uStack_190 = (code *)uVar26;
  pfStack_188 = (float *)uVar27;
  uStack_238 = uVar34;
  uStack_198 = (ulonglong *)uVar44;
  uStack_190 = (code *)pdb_1400affa0(&uStack_198);
  uStack_198 = (ulonglong *)param_1[1];
  uVar34 = pdb_1400b0130(&uStack_198);
  pdb_14072caa0(&uStack_198,param_1,uVar34);
  pdb_14116f0d0(&uStack_198,0);
  lVar30 = (longlong)uStack_198;
  uStack_1d8 = pfStack_188;
  lStack_1e8 = (longlong)uStack_198;
  uStack_1e0 = (ulonglong)uStack_190;
  if (*(longlong *)((longlong)uStack_198 + 0x1c8) != 0) {
    uVar32 = uVar44 + 1;
    uVar35 = pdb_1400af0a0((longlong)uStack_198 + 0x1d0,&uStack_190);
    lVar31 = *(longlong *)(lVar30 + 0x1b0);
    uVar45 = *(ulonglong *)(lVar30 + 0x1b8);
    bVar29 = (byte)(uVar35 >> 0x39);
    auVar49 = ZEXT216(CONCAT11(bVar29,bVar29));
    auVar49 = pshuflw(auVar49,auVar49,0);
    lVar30 = 0;
    while( true ) {
      uVar35 = uVar35 & uVar45;
      auVar67 = *(undefined1 (*) [16])(lVar31 + uVar35);
      auVar66[0] = -(auVar67[0] == auVar49[0]);
      auVar66[1] = -(auVar67[1] == auVar49[1]);
      auVar66[2] = -(auVar67[2] == auVar49[2]);
      auVar66[3] = -(auVar67[3] == auVar49[3]);
      auVar66[4] = -(auVar67[4] == auVar49[4]);
      auVar66[5] = -(auVar67[5] == auVar49[5]);
      auVar66[6] = -(auVar67[6] == auVar49[6]);
      auVar66[7] = -(auVar67[7] == auVar49[7]);
      auVar66[8] = -(auVar67[8] == auVar49[0]);
      auVar66[9] = -(auVar67[9] == auVar49[1]);
      auVar66[10] = -(auVar67[10] == auVar49[2]);
      auVar66[0xb] = -(auVar67[0xb] == auVar49[3]);
      auVar66[0xc] = -(auVar67[0xc] == auVar49[4]);
      auVar66[0xd] = -(auVar67[0xd] == auVar49[5]);
      auVar66[0xe] = -(auVar67[0xe] == auVar49[6]);
      auVar66[0xf] = -(auVar67[0xf] == auVar49[7]);
      uVar42 = (ushort)(SUB161(auVar66 >> 7,0) & 1) | (ushort)(SUB161(auVar66 >> 0xf,0) & 1) << 1 |
               (ushort)(SUB161(auVar66 >> 0x17,0) & 1) << 2 |
               (ushort)(SUB161(auVar66 >> 0x1f,0) & 1) << 3 |
               (ushort)(SUB161(auVar66 >> 0x27,0) & 1) << 4 |
               (ushort)(SUB161(auVar66 >> 0x2f,0) & 1) << 5 |
               (ushort)(SUB161(auVar66 >> 0x37,0) & 1) << 6 |
               (ushort)(SUB161(auVar66 >> 0x3f,0) & 1) << 7 |
               (ushort)(SUB161(auVar66 >> 0x47,0) & 1) << 8 |
               (ushort)(SUB161(auVar66 >> 0x4f,0) & 1) << 9 |
               (ushort)(SUB161(auVar66 >> 0x57,0) & 1) << 10 |
               (ushort)(SUB161(auVar66 >> 0x5f,0) & 1) << 0xb |
               (ushort)(SUB161(auVar66 >> 0x67,0) & 1) << 0xc |
               (ushort)(SUB161(auVar66 >> 0x6f,0) & 1) << 0xd |
               (ushort)(SUB161(auVar66 >> 0x77,0) & 1) << 0xe | (ushort)(auVar66[0xf] >> 7) << 0xf;
      uVar47 = (uint)uVar42;
      while (uVar42 != 0) {
        uVar5 = 0;
        for (uVar6 = uVar47; (uVar6 & 1) == 0; uVar6 = uVar6 >> 1 | 0x80000000) {
          uVar5 = uVar5 + 1;
        }
        lVar40 = (uVar5 + uVar35 & uVar45) * -0xd8;
        if (uStack_190 == (code *)*(ulonglong *)(lVar31 + -0xd8 + lVar40)) {
          lVar31 = lVar31 + lVar40;
          *(undefined4 *)(lVar31 + -0x88) = 0;
          *(undefined4 *)(lVar31 + -0x84) = uVar3;
          uStack_1d8 = pfStack_188;
          lStack_1e8 = (longlong)uStack_198;
          uStack_1e0 = (ulonglong)uStack_190;
          uStack_190 = pdb_140f72a40;
          uStack_198 = &uStack_c8;
          uStack_c8 = uVar44;
          pdb_140f60760(&fStack_1b0,&UNK_1434d6c68,&uStack_198);
          uVar45 = uStack_1e0;
          pbStack_c0 = pbStack_1a8;
          pbStack_108 = pbStack_1a8;
          alStack_100[0] = lStack_1a0;
          uStack_198 = (ulonglong *)pdb_140bbbcb0(&pbStack_108);
          uStack_190 = (code *)_DAT_1432a86e8;
          pfStack_188 = (float *)_UNK_1432a86f0;
          pbVar36 = (byte *)pdb_1400affa0(&uStack_198);
          if (CONCAT44(uStack_1ac,fStack_1b0) != 0) {
            pub_1406abac0(pbStack_c0,CONCAT44(uStack_1ac,fStack_1b0),1);
          }
          uStack_198 = (ulonglong *)uVar45;
          uStack_190 = (code *)pbVar36;
          uVar34 = pdb_1400b0130(&uStack_198);
          pdb_14072caa0(&uStack_e8,&lStack_1e8,uVar34);
          uVar45 = uStack_e8;
          if (*(longlong *)(uStack_e8 + 0x1c8) == 0) goto LAB_1422fc70a;
          uVar35 = pdb_1400af0a0(uStack_e8 + 0x1d0,&pbStack_e0);
          lVar30 = *(longlong *)(uVar45 + 0x1b0);
          uVar45 = *(ulonglong *)(uVar45 + 0x1b8);
          bVar29 = (byte)(uVar35 >> 0x39);
          auVar49 = ZEXT216(CONCAT11(bVar29,bVar29));
          auVar49 = pshuflw(auVar49,auVar49,0);
          lVar31 = 0;
          goto LAB_1422fbcea;
        }
        uVar42 = (ushort)(uVar47 - 1) & (ushort)uVar47;
        uVar47 = CONCAT22((short)(uVar47 - 1 >> 0x10),uVar42);
      }
      auVar53[0] = -(auVar67[0] == cVar79);
      auVar53[1] = -(auVar67[1] == cVar81);
      auVar53[2] = -(auVar67[2] == cVar83);
      auVar53[3] = -(auVar67[3] == cVar85);
      auVar53[4] = -(auVar67[4] == -1);
      auVar53[5] = -(auVar67[5] == -1);
      auVar53[6] = -(auVar67[6] == -1);
      auVar53[7] = -(auVar67[7] == -1);
      auVar53[8] = -(auVar67[8] == -1);
      auVar53[9] = -(auVar67[9] == -1);
      auVar53[10] = -(auVar67[10] == -1);
      auVar53[0xb] = -(auVar67[0xb] == -1);
      auVar53[0xc] = -(auVar67[0xc] == -1);
      auVar53[0xd] = -(auVar67[0xd] == -1);
      auVar53[0xe] = -(auVar67[0xe] == -1);
      auVar53[0xf] = -(auVar67[0xf] == -1);
      if ((((((((((((((((SUB161(auVar53 >> 7,0) & 1) != 0 || (SUB161(auVar53 >> 0xf,0) & 1) != 0) ||
                      (SUB161(auVar53 >> 0x17,0) & 1) != 0) || (SUB161(auVar53 >> 0x1f,0) & 1) != 0)
                    || (SUB161(auVar53 >> 0x27,0) & 1) != 0) || (SUB161(auVar53 >> 0x2f,0) & 1) != 0
                   ) || (SUB161(auVar53 >> 0x37,0) & 1) != 0) ||
                 (SUB161(auVar53 >> 0x3f,0) & 1) != 0) || (SUB161(auVar53 >> 0x47,0) & 1) != 0) ||
               (SUB161(auVar53 >> 0x4f,0) & 1) != 0) || (SUB161(auVar53 >> 0x57,0) & 1) != 0) ||
             (SUB161(auVar53 >> 0x5f,0) & 1) != 0) || (SUB161(auVar53 >> 0x67,0) & 1) != 0) ||
           (SUB161(auVar53 >> 0x6f,0) & 1) != 0) || (SUB161(auVar53 >> 0x77,0) & 1) != 0) ||
          auVar53[0xf] < '\0') break;
      uVar35 = uVar35 + lVar30 + 0x10;
      lVar30 = lVar30 + 0x10;
    }
  }
                    /* WARNING: Subroutine does not return */
  pdb_142dc8150(&UNK_14329c430);
}

