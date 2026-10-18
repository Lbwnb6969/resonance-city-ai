// VA 0x140ae8d60, PDB extent 8010 bytes
// country_core::systems::ui_clutter::ui_focus_decoclutter::ui_focus_decoclutter
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/ui_clutter/ui_focus_decoclutter.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::systems::ui_clutter::ui_focus_decoclutter::ui_focus_decoclutter
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/ui_clutter/ui_focus_decoclutter.rs
   Extent: 8010 */

void pdb_140ae8d60(undefined8 *param_1,undefined8 param_2,undefined8 param_3,longlong *param_4,
                  undefined8 *param_5,longlong *param_6,longlong *param_7,longlong *param_8,
                  undefined8 *param_9,undefined8 *param_10,undefined8 *param_11)

{
  float *pfVar1;
  float fVar2;
  undefined1 auVar3 [16];
  int iVar4;
  undefined4 uVar5;
  char *pcVar6;
  undefined4 *puVar7;
  code *pcVar8;
  uint uVar9;
  uint uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  byte *pbVar15;
  undefined8 uVar16;
  byte *pbVar17;
  byte *pbVar18;
  undefined7 uVar19;
  undefined7 uVar20;
  undefined1 uVar21;
  undefined1 uVar22;
  char cVar23;
  ulonglong uVar24;
  longlong lVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  byte *pbVar28;
  byte *pbVar29;
  byte **ppbVar30;
  byte **ppbVar31;
  uint uVar32;
  longlong lVar33;
  longlong lVar34;
  ushort uVar35;
  ulonglong uVar36;
  longlong lVar37;
  undefined8 uVar38;
  byte bVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  undefined1 auVar43 [16];
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  float fVar61;
  float fVar62;
  float fVar63;
  float fVar64;
  float fVar65;
  float fVar66;
  float fVar67;
  float fVar68;
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  float fStack_2f8;
  float fStack_2f4;
  float fStack_2f0;
  float fStack_2ec;
  float fStack_2e8;
  float fStack_2e4;
  float fStack_2e0;
  float fStack_2dc;
  float fStack_2d8;
  float fStack_2d4;
  float fStack_2d0;
  float fStack_2cc;
  float fStack_2c8;
  float fStack_2c4;
  float fStack_2c0;
  float fStack_2bc;
  float fStack_2b8;
  float fStack_2b4;
  float fStack_2b0;
  float fStack_2ac;
  undefined1 auStack_2a0 [16];
  float fStack_290;
  float fStack_28c;
  float fStack_288;
  float fStack_284;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  longlong lStack_268;
  ulonglong uStack_260;
  undefined8 uStack_258;
  float fStack_250;
  undefined8 uStack_248;
  float fStack_240;
  undefined8 uStack_238;
  undefined1 auStack_230 [24];
  byte *pbStack_218;
  byte *pbStack_210;
  int iStack_204;
  byte *pbStack_200;
  byte *pbStack_1f8;
  code *pcStack_1f0;
  ulonglong uStack_1e8;
  float fStack_1dc;
  undefined7 uStack_1d8;
  undefined1 uStack_1d1;
  float fStack_1d0;
  undefined4 uStack_1cc;
  byte bStack_1c8;
  undefined6 uStack_1c7;
  undefined1 uStack_1c1;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined1 uStack_1b0;
  undefined *puStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  float fStack_180;
  float fStack_17c;
  undefined8 uStack_178;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined8 uStack_168;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  float *pfStack_158;
  code *pcStack_150;
  byte **ppbStack_148;
  int iStack_140;
  float fStack_13c;
  undefined4 uStack_138;
  undefined1 uStack_120;
  undefined1 uStack_110;
  undefined8 uStack_10f;
  undefined7 uStack_107;
  undefined1 uStack_100;
  undefined7 uStack_ff;
  undefined2 uStack_f0;
  byte **ppbStack_e8;
  byte *pbStack_e0;
  undefined1 uStack_d4;
  undefined1 uStack_d3;
  undefined1 uStack_d2;
  undefined1 uStack_d1;
  undefined8 uStack_d0;
  
  uStack_d0 = 0xfffffffffffffffe;
  uVar38 = *param_9;
  uStack_318 = param_9[4];
  uStack_310 = param_9[5];
  uStack_308 = param_9[6];
  uStack_300 = param_9[7];
  uStack_338 = param_9[8];
  uStack_330 = param_9[9];
  uStack_328 = param_9[10];
  uStack_320 = param_9[0xb];
  uStack_358 = param_9[0xc];
  uStack_350 = param_9[0xd];
  uStack_348 = param_9[0xe];
  uStack_340 = param_9[0xf];
  pcVar6 = (char *)*param_1;
  if ((*pcVar6 != '\0') || (*(int *)(pcVar6 + 8) != 4)) {
    *(undefined4 *)param_11[2] = *(undefined4 *)((longlong)param_11 + 0x1c);
    *(undefined4 *)*param_11 = 0;
    return;
  }
  iVar4 = *(int *)(pcVar6 + 0xc);
  lVar25 = *param_6;
  if (*(longlong *)(lVar25 + 0x78) == 0) {
    return;
  }
  iStack_204 = iVar4;
  pbStack_e0 = (byte *)param_2;
  uStack_198._0_4_ = (float)iVar4;
  uVar24 = pdb_1400aede0(lVar25 + 0x80,&uStack_198);
  lVar37 = *(longlong *)(lVar25 + 0x60);
  bVar39 = (byte)(uVar24 >> 0x39);
  auVar43 = ZEXT216(CONCAT11(bVar39,bVar39));
  auVar43 = pshuflw(auVar43,auVar43,0);
  lVar33 = 0;
  do {
    uVar24 = uVar24 & *(ulonglong *)(lVar25 + 0x68);
    auVar3 = *(undefined1 (*) [16])(lVar37 + uVar24);
    auVar58[0] = -(auVar3[0] == auVar43[0]);
    auVar58[1] = -(auVar3[1] == auVar43[1]);
    auVar58[2] = -(auVar3[2] == auVar43[2]);
    auVar58[3] = -(auVar3[3] == auVar43[3]);
    auVar58[4] = -(auVar3[4] == auVar43[4]);
    auVar58[5] = -(auVar3[5] == auVar43[5]);
    auVar58[6] = -(auVar3[6] == auVar43[6]);
    auVar58[7] = -(auVar3[7] == auVar43[7]);
    auVar58[8] = -(auVar3[8] == auVar43[0]);
    auVar58[9] = -(auVar3[9] == auVar43[1]);
    auVar58[10] = -(auVar3[10] == auVar43[2]);
    auVar58[0xb] = -(auVar3[0xb] == auVar43[3]);
    auVar58[0xc] = -(auVar3[0xc] == auVar43[4]);
    auVar58[0xd] = -(auVar3[0xd] == auVar43[5]);
    auVar58[0xe] = -(auVar3[0xe] == auVar43[6]);
    auVar58[0xf] = -(auVar3[0xf] == auVar43[7]);
    uVar35 = (ushort)(SUB161(auVar58 >> 7,0) & 1) | (ushort)(SUB161(auVar58 >> 0xf,0) & 1) << 1 |
             (ushort)(SUB161(auVar58 >> 0x17,0) & 1) << 2 |
             (ushort)(SUB161(auVar58 >> 0x1f,0) & 1) << 3 |
             (ushort)(SUB161(auVar58 >> 0x27,0) & 1) << 4 |
             (ushort)(SUB161(auVar58 >> 0x2f,0) & 1) << 5 |
             (ushort)(SUB161(auVar58 >> 0x37,0) & 1) << 6 |
             (ushort)(SUB161(auVar58 >> 0x3f,0) & 1) << 7 |
             (ushort)(SUB161(auVar58 >> 0x47,0) & 1) << 8 |
             (ushort)(SUB161(auVar58 >> 0x4f,0) & 1) << 9 |
             (ushort)(SUB161(auVar58 >> 0x57,0) & 1) << 10 |
             (ushort)(SUB161(auVar58 >> 0x5f,0) & 1) << 0xb |
             (ushort)(SUB161(auVar58 >> 0x67,0) & 1) << 0xc |
             (ushort)(SUB161(auVar58 >> 0x6f,0) & 1) << 0xd |
             (ushort)(SUB161(auVar58 >> 0x77,0) & 1) << 0xe | (ushort)(auVar58[0xf] >> 7) << 0xf;
    uVar32 = (uint)uVar35;
    while (uVar35 != 0) {
      uVar9 = 0;
      for (uVar10 = uVar32; (uVar10 & 1) == 0; uVar10 = uVar10 >> 1 | 0x80000000) {
        uVar9 = uVar9 + 1;
      }
      uVar36 = uVar9 + uVar24 & *(ulonglong *)(lVar25 + 0x68);
      if (iVar4 == *(int *)(lVar37 + -0x18 + uVar36 * -0x18)) {
        lVar37 = lVar37 + uVar36 * -0x18;
        pbStack_218 = *(byte **)(lVar37 + -0x10);
        pbStack_210 = *(byte **)(lVar37 + -8);
        uStack_198._0_4_ = (float)iVar4;
        lVar25 = pdb_140c41030(lVar25);
        if (lVar25 == 0) {
          return;
        }
        if (*(longlong *)(lVar25 + 0x48) == 0) {
          return;
        }
        uVar24 = pdb_1400aede0(lVar25 + 0x50,&uStack_198);
        lVar37 = *(longlong *)(lVar25 + 0x30);
        bVar39 = (byte)(uVar24 >> 0x39);
        auVar43 = ZEXT216(CONCAT11(bVar39,bVar39));
        auVar43 = pshuflw(auVar43,auVar43,0);
        lVar33 = 0;
        goto LAB_140ae8fd2;
      }
      uVar35 = (ushort)(uVar32 - 1) & (ushort)uVar32;
      uVar32 = CONCAT22((short)(uVar32 - 1 >> 0x10),uVar35);
    }
    auVar55[0] = -(auVar3[0] == -1);
    auVar55[1] = -(auVar3[1] == -1);
    auVar55[2] = -(auVar3[2] == -1);
    auVar55[3] = -(auVar3[3] == -1);
    auVar55[4] = -(auVar3[4] == -1);
    auVar55[5] = -(auVar3[5] == -1);
    auVar55[6] = -(auVar3[6] == -1);
    auVar55[7] = -(auVar3[7] == -1);
    auVar55[8] = -(auVar3[8] == -1);
    auVar55[9] = -(auVar3[9] == -1);
    auVar55[10] = -(auVar3[10] == -1);
    auVar55[0xb] = -(auVar3[0xb] == -1);
    auVar55[0xc] = -(auVar3[0xc] == -1);
    auVar55[0xd] = -(auVar3[0xd] == -1);
    auVar55[0xe] = -(auVar3[0xe] == -1);
    auVar55[0xf] = -(auVar3[0xf] == -1);
    if ((((((((((((((((SUB161(auVar55 >> 7,0) & 1) != 0 || (SUB161(auVar55 >> 0xf,0) & 1) != 0) ||
                    (SUB161(auVar55 >> 0x17,0) & 1) != 0) || (SUB161(auVar55 >> 0x1f,0) & 1) != 0)
                  || (SUB161(auVar55 >> 0x27,0) & 1) != 0) || (SUB161(auVar55 >> 0x2f,0) & 1) != 0)
                || (SUB161(auVar55 >> 0x37,0) & 1) != 0) || (SUB161(auVar55 >> 0x3f,0) & 1) != 0) ||
              (SUB161(auVar55 >> 0x47,0) & 1) != 0) || (SUB161(auVar55 >> 0x4f,0) & 1) != 0) ||
            (SUB161(auVar55 >> 0x57,0) & 1) != 0) || (SUB161(auVar55 >> 0x5f,0) & 1) != 0) ||
          (SUB161(auVar55 >> 0x67,0) & 1) != 0) || (SUB161(auVar55 >> 0x6f,0) & 1) != 0) ||
        (SUB161(auVar55 >> 0x77,0) & 1) != 0) || auVar55[0xf] < '\0') {
      return;
    }
    uVar24 = uVar24 + lVar33 + 0x10;
    lVar33 = lVar33 + 0x10;
  } while( true );
LAB_140ae8fd2:
  uVar24 = uVar24 & *(ulonglong *)(lVar25 + 0x38);
  auVar3 = *(undefined1 (*) [16])(lVar37 + uVar24);
  auVar59[0] = -(auVar3[0] == auVar43[0]);
  auVar59[1] = -(auVar3[1] == auVar43[1]);
  auVar59[2] = -(auVar3[2] == auVar43[2]);
  auVar59[3] = -(auVar3[3] == auVar43[3]);
  auVar59[4] = -(auVar3[4] == auVar43[4]);
  auVar59[5] = -(auVar3[5] == auVar43[5]);
  auVar59[6] = -(auVar3[6] == auVar43[6]);
  auVar59[7] = -(auVar3[7] == auVar43[7]);
  auVar59[8] = -(auVar3[8] == auVar43[0]);
  auVar59[9] = -(auVar3[9] == auVar43[1]);
  auVar59[10] = -(auVar3[10] == auVar43[2]);
  auVar59[0xb] = -(auVar3[0xb] == auVar43[3]);
  auVar59[0xc] = -(auVar3[0xc] == auVar43[4]);
  auVar59[0xd] = -(auVar3[0xd] == auVar43[5]);
  auVar59[0xe] = -(auVar3[0xe] == auVar43[6]);
  auVar59[0xf] = -(auVar3[0xf] == auVar43[7]);
  uVar35 = (ushort)(SUB161(auVar59 >> 7,0) & 1) | (ushort)(SUB161(auVar59 >> 0xf,0) & 1) << 1 |
           (ushort)(SUB161(auVar59 >> 0x17,0) & 1) << 2 |
           (ushort)(SUB161(auVar59 >> 0x1f,0) & 1) << 3 |
           (ushort)(SUB161(auVar59 >> 0x27,0) & 1) << 4 |
           (ushort)(SUB161(auVar59 >> 0x2f,0) & 1) << 5 |
           (ushort)(SUB161(auVar59 >> 0x37,0) & 1) << 6 |
           (ushort)(SUB161(auVar59 >> 0x3f,0) & 1) << 7 |
           (ushort)(SUB161(auVar59 >> 0x47,0) & 1) << 8 |
           (ushort)(SUB161(auVar59 >> 0x4f,0) & 1) << 9 |
           (ushort)(SUB161(auVar59 >> 0x57,0) & 1) << 10 |
           (ushort)(SUB161(auVar59 >> 0x5f,0) & 1) << 0xb |
           (ushort)(SUB161(auVar59 >> 0x67,0) & 1) << 0xc |
           (ushort)(SUB161(auVar59 >> 0x6f,0) & 1) << 0xd |
           (ushort)(SUB161(auVar59 >> 0x77,0) & 1) << 0xe | (ushort)(auVar59[0xf] >> 7) << 0xf;
  uVar32 = (uint)uVar35;
  while (uVar35 != 0) {
    uVar9 = 0;
    for (uVar10 = uVar32; (uVar10 & 1) == 0; uVar10 = uVar10 >> 1 | 0x80000000) {
      uVar9 = uVar9 + 1;
    }
    lVar34 = (uVar9 + uVar24 & *(ulonglong *)(lVar25 + 0x38)) * -0x68;
    if (iVar4 == *(int *)(lVar37 + -0x68 + lVar34)) {
      ppbStack_e8 = (byte **)(lVar37 + lVar34);
      if (*(int *)((longlong)ppbStack_e8 - 0x60) != 6) {
        return;
      }
      uStack_280 = *(undefined8 *)((longlong)ppbStack_e8 - 0x58);
      pdb_140aeb480(auStack_2a0,uStack_280,uVar38);
      param_8 = (longlong *)*param_8;
      uStack_198 = (byte **)CONCAT44(uStack_198._4_4_,iVar4);
      if (param_8[3] == 0) {
        return;
      }
      uVar24 = pdb_1400aede0(param_8 + 4,&uStack_198);
      bVar39 = (byte)(uVar24 >> 0x39);
      auVar43 = ZEXT216(CONCAT11(bVar39,bVar39));
      auVar43 = pshuflw(auVar43,auVar43,0);
      lVar25 = 0;
      goto LAB_140ae90b4;
    }
    uVar35 = (ushort)(uVar32 - 1) & (ushort)uVar32;
    uVar32 = CONCAT22((short)(uVar32 - 1 >> 0x10),uVar35);
  }
  auVar56[0] = -(auVar3[0] == -1);
  auVar56[1] = -(auVar3[1] == -1);
  auVar56[2] = -(auVar3[2] == -1);
  auVar56[3] = -(auVar3[3] == -1);
  auVar56[4] = -(auVar3[4] == -1);
  auVar56[5] = -(auVar3[5] == -1);
  auVar56[6] = -(auVar3[6] == -1);
  auVar56[7] = -(auVar3[7] == -1);
  auVar56[8] = -(auVar3[8] == -1);
  auVar56[9] = -(auVar3[9] == -1);
  auVar56[10] = -(auVar3[10] == -1);
  auVar56[0xb] = -(auVar3[0xb] == -1);
  auVar56[0xc] = -(auVar3[0xc] == -1);
  auVar56[0xd] = -(auVar3[0xd] == -1);
  auVar56[0xe] = -(auVar3[0xe] == -1);
  auVar56[0xf] = -(auVar3[0xf] == -1);
  if ((((((((((((((((SUB161(auVar56 >> 7,0) & 1) != 0 || (SUB161(auVar56 >> 0xf,0) & 1) != 0) ||
                  (SUB161(auVar56 >> 0x17,0) & 1) != 0) || (SUB161(auVar56 >> 0x1f,0) & 1) != 0) ||
                (SUB161(auVar56 >> 0x27,0) & 1) != 0) || (SUB161(auVar56 >> 0x2f,0) & 1) != 0) ||
              (SUB161(auVar56 >> 0x37,0) & 1) != 0) || (SUB161(auVar56 >> 0x3f,0) & 1) != 0) ||
            (SUB161(auVar56 >> 0x47,0) & 1) != 0) || (SUB161(auVar56 >> 0x4f,0) & 1) != 0) ||
          (SUB161(auVar56 >> 0x57,0) & 1) != 0) || (SUB161(auVar56 >> 0x5f,0) & 1) != 0) ||
        (SUB161(auVar56 >> 0x67,0) & 1) != 0) || (SUB161(auVar56 >> 0x6f,0) & 1) != 0) ||
      (SUB161(auVar56 >> 0x77,0) & 1) != 0) || auVar56[0xf] < '\0') {
    return;
  }
  uVar24 = uVar24 + lVar33 + 0x10;
  lVar33 = lVar33 + 0x10;
  goto LAB_140ae8fd2;
LAB_140ae90b4:
  uVar24 = uVar24 & param_8[1];
  auVar3 = *(undefined1 (*) [16])(*param_8 + uVar24);
  auVar60[0] = -(auVar3[0] == auVar43[0]);
  auVar60[1] = -(auVar3[1] == auVar43[1]);
  auVar60[2] = -(auVar3[2] == auVar43[2]);
  auVar60[3] = -(auVar3[3] == auVar43[3]);
  auVar60[4] = -(auVar3[4] == auVar43[4]);
  auVar60[5] = -(auVar3[5] == auVar43[5]);
  auVar60[6] = -(auVar3[6] == auVar43[6]);
  auVar60[7] = -(auVar3[7] == auVar43[7]);
  auVar60[8] = -(auVar3[8] == auVar43[0]);
  auVar60[9] = -(auVar3[9] == auVar43[1]);
  auVar60[10] = -(auVar3[10] == auVar43[2]);
  auVar60[0xb] = -(auVar3[0xb] == auVar43[3]);
  auVar60[0xc] = -(auVar3[0xc] == auVar43[4]);
  auVar60[0xd] = -(auVar3[0xd] == auVar43[5]);
  auVar60[0xe] = -(auVar3[0xe] == auVar43[6]);
  auVar60[0xf] = -(auVar3[0xf] == auVar43[7]);
  uVar35 = (ushort)(SUB161(auVar60 >> 7,0) & 1) | (ushort)(SUB161(auVar60 >> 0xf,0) & 1) << 1 |
           (ushort)(SUB161(auVar60 >> 0x17,0) & 1) << 2 |
           (ushort)(SUB161(auVar60 >> 0x1f,0) & 1) << 3 |
           (ushort)(SUB161(auVar60 >> 0x27,0) & 1) << 4 |
           (ushort)(SUB161(auVar60 >> 0x2f,0) & 1) << 5 |
           (ushort)(SUB161(auVar60 >> 0x37,0) & 1) << 6 |
           (ushort)(SUB161(auVar60 >> 0x3f,0) & 1) << 7 |
           (ushort)(SUB161(auVar60 >> 0x47,0) & 1) << 8 |
           (ushort)(SUB161(auVar60 >> 0x4f,0) & 1) << 9 |
           (ushort)(SUB161(auVar60 >> 0x57,0) & 1) << 10 |
           (ushort)(SUB161(auVar60 >> 0x5f,0) & 1) << 0xb |
           (ushort)(SUB161(auVar60 >> 0x67,0) & 1) << 0xc |
           (ushort)(SUB161(auVar60 >> 0x6f,0) & 1) << 0xd |
           (ushort)(SUB161(auVar60 >> 0x77,0) & 1) << 0xe | (ushort)(auVar60[0xf] >> 7) << 0xf;
  uVar32 = (uint)uVar35;
  while (uVar35 != 0) {
    uVar9 = 0;
    for (uVar10 = uVar32; (uVar10 & 1) == 0; uVar10 = uVar10 >> 1 | 0x80000000) {
      uVar9 = uVar9 + 1;
    }
    lVar37 = *param_8 + (uVar9 + uVar24 & param_8[1]) * -0x40;
    if (iVar4 == *(int *)(lVar37 + -0x40)) {
      pfVar1 = (float *)(lVar37 + -0x30);
      fVar11 = *pfVar1;
      fVar12 = *(float *)(lVar37 + -0x2c);
      pbVar17 = *(byte **)pfVar1;
      pbVar15 = *(byte **)pfVar1;
      pbVar29 = *(byte **)pfVar1;
      pbVar28 = *(byte **)pfVar1;
      pfVar1 = (float *)(lVar37 + -0x28);
      fVar13 = *pfVar1;
      fVar14 = *(float *)(lVar37 + -0x24);
      pbVar18 = *(byte **)pfVar1;
      uVar16 = *(undefined8 *)pfVar1;
      uVar27 = *(undefined8 *)pfVar1;
      uVar38 = *(undefined8 *)pfVar1;
      uVar24 = *(ulonglong *)(lVar37 + -0x20);
      fVar66 = (float)uVar24;
      fVar67 = (float)(uVar24 >> 0x20);
      fVar2 = *(float *)(lVar37 + -0x18);
      fStack_2f8 = fVar11;
      fStack_2f4 = fVar12;
      fStack_2f0 = fVar13;
      fStack_2ec = fVar14;
      pdb_140aefb10(&uStack_198,&fStack_2f8,&UNK_14304fe38);
      fVar65 = _DAT_142e36f28;
      fVar54 = _DAT_142e36f28 /
               SQRT((float)uStack_190 * (float)uStack_190 + (float)uStack_198 * (float)uStack_198);
      pdb_140df3f70(auStack_2a0,(float)uStack_198 * fVar54,fVar54 * (float)uStack_190);
      uStack_198 = (byte **)uVar24;
      uStack_190._0_4_ = fVar2;
      pdb_140df43c0(auStack_2a0,&uStack_198);
      uStack_188._4_4_ = (float)auStack_2a0._0_8_;
      fStack_180 = SUB84(auStack_2a0._0_8_,4);
      fStack_17c = (float)auStack_2a0._8_8_;
      uStack_178._0_4_ = SUB84(auStack_2a0._8_8_,4);
      uStack_198 = (byte **)((ulonglong)uStack_198 & 0xffffffff00000000);
      uStack_188._0_4_ = 1.0;
      uStack_168._4_4_ = CONCAT31(uStack_168._5_3_,1);
      uStack_238 = *param_5;
      pcStack_1f0 = pdb_140aefd40;
      pbStack_1f8 = (byte *)&iStack_204;
      pdb_140905540(&uStack_1d8,&UNK_14304fe44,&pbStack_1f8);
      uVar26 = pdb_140900fd0();
      lVar25 = *param_4;
      if ((*(char *)(lVar25 + 0x18) == '\x02') && (*(char *)(lVar25 + 0x19) == '\x04')) {
        bStack_1c8 = _DAT_14301e000 <= *(float *)(lVar25 + 200);
      }
      else {
        bStack_1c8 = false;
      }
      uStack_1d8 = (undefined7)uStack_238;
      uStack_1d1 = (undefined1)((ulonglong)uStack_238 >> 0x38);
      fStack_1d0 = (float)uVar26;
      uStack_1cc = (undefined4)((ulonglong)uVar26 >> 0x20);
      pdb_140ab1d60(&uStack_198,&uStack_1d8);
      fVar54 = _DAT_142e36f50;
      fVar40 = fStack_290 * _DAT_142e36f50 + _DAT_142e37ae4 + _DAT_142e3787c;
      fVar41 = fVar40 * _DAT_142e377f0;
      uStack_198 = (byte **)CONCAT44(fVar41,_DAT_142e37820 ^ (uint)fVar40);
      uStack_190 = (code *)CONCAT44(uStack_190._4_4_,fVar41);
      fStack_2e8 = fVar11;
      fStack_2e4 = fVar12;
      fStack_2e0 = fVar13;
      fStack_2dc = fVar14;
      pdb_140aefb10(&uStack_1d8,&fStack_2e8,&uStack_198);
      fVar40 = (float)uStack_1d8 + fVar66;
      fVar41 = (float)(CONCAT17(uStack_1d1,uStack_1d8) >> 0x20) + fVar67;
      fVar68 = fStack_1d0 + fVar2;
      fStack_17c = 1.0;
      uStack_178._0_4_ = 1.0;
      uStack_178._4_4_ = 0x3f800000;
      uStack_198 = (byte **)pbVar28;
      uStack_190 = (code *)uVar38;
      uStack_188._0_4_ = fVar40;
      uStack_188._4_4_ = fVar41;
      fStack_180 = fVar68;
      pdb_140b3d590(auStack_230);
      uStack_1d8 = SUB87(&iStack_204,0);
      uVar19 = uStack_1d8;
      uStack_1d1 = (undefined1)((ulonglong)&iStack_204 >> 0x38);
      uVar21 = uStack_1d1;
      fStack_1d0 = 5.4684143;
      uStack_1cc = 1;
      uStack_d2 = 1;
      pdb_140905540(&uStack_198,&UNK_14304fe5a,&uStack_1d8);
      pbStack_1f8 = (byte *)uStack_198;
      pcStack_1f0 = uStack_190;
      uStack_1e8 = CONCAT44(uStack_188._4_4_,(float)uStack_188);
      uStack_1d1 = (undefined1)auStack_230._0_8_;
      fStack_1d0 = SUB84(auStack_230._0_8_,1);
      uStack_1cc._0_3_ = SUB83(auStack_230._0_8_,5);
      uStack_1cc._3_1_ = (undefined1)auStack_230._8_8_;
      bStack_1c8 = SUB81(auStack_230._8_8_,1);
      uStack_1c7 = SUB86(auStack_230._8_8_,2);
      uStack_1c1 = (undefined1)auStack_230._16_8_;
      uStack_1c0._0_7_ = SUB87(auStack_230._16_8_,1);
      uStack_10f = CONCAT17(uStack_1d1,uStack_1d8);
      uStack_107 = (undefined7)CONCAT44(uStack_1cc,fStack_1d0);
      uStack_ff = SUB87(auStack_230._8_8_,1);
      uStack_198 = (byte **)0x0;
      uStack_190 = (code *)0x8;
      uStack_188._0_4_ = 0.0;
      uStack_188._4_4_ = 0.0;
      fStack_180 = 1.4013e-45;
      uStack_178._0_4_ = 0.0;
      uStack_178._4_4_ = 0;
      uStack_168._0_4_ = 2;
      pcStack_150 = (code *)CONCAT44(pcStack_150._4_4_,3);
      uStack_138 = 8;
      uStack_120 = 0;
      uStack_110 = 2;
      uStack_f0 = 0x100;
      uStack_d2 = 0;
      ppbVar30 = &pbStack_1f8;
      uStack_100 = uStack_1cc._3_1_;
      lVar37 = pdb_1409008d0(lVar25,&pbStack_1f8,&uStack_198);
      cVar23 = *(char *)(lVar37 + 0x18);
      if (cVar23 == '\x02') {
        if ((*(byte ***)(lVar37 + 0x38) == ppbVar30) && (*(byte *)(lVar37 + 0x19) < 2)) {
          uStack_d2 = 0;
          pdb_141b74d60(param_3,iVar4,&UNK_14304feb8);
          cVar23 = *(char *)(lVar37 + 0x18);
          goto LAB_140ae94d0;
        }
LAB_140ae94d4:
        fVar42 = _DAT_142e3798c;
        if ((*(byte ***)(lVar37 + 0x38) == ppbVar30) && (*(int *)(lVar37 + 0x28) != 2)) {
          fVar42 = fVar54;
        }
      }
      else {
LAB_140ae94d0:
        fVar42 = _DAT_142e3798c;
        if (cVar23 != '\0') goto LAB_140ae94d4;
      }
      uStack_278 = CONCAT44(fVar41,fVar40);
      uStack_270 = CONCAT44(uStack_270._4_4_,fVar68);
      pbStack_1f8 = &UNK_14304fed0;
      pcStack_1f0 = (code *)0x16;
      uStack_198 = (byte **)&uStack_278;
      uStack_190 = pdb_140f33df0;
      uStack_188 = &fStack_2b8;
      fStack_180 = 7.7206726;
      fStack_17c = 1.4013e-45;
      uStack_170 = 0x402ed400;
      uStack_16c = 1;
      uStack_d2 = 0;
      fStack_2b8 = fVar42;
      uStack_178 = &pbStack_1f8;
      pdb_140905540(&uStack_1d8,&UNK_14304fee6,&uStack_198);
      uStack_260 = CONCAT17(uStack_1d1,uStack_1d8);
      pbStack_200 = (byte *)CONCAT44(uStack_1cc,fStack_1d0);
      uVar38 = CONCAT17(uStack_1c1,CONCAT61(uStack_1c7,bStack_1c8));
      uStack_198 = (byte **)&UNK_14304fed0;
      uStack_190 = (code *)0x16;
      uStack_188._0_4_ = fVar40;
      uStack_188._4_4_ = fVar41;
      fStack_180 = fVar68;
      fStack_17c = fVar42;
      uVar26 = pdb_140aefba0(&uStack_198);
      pdb_1409baea0(&uStack_1d8,pbStack_200,uVar38,uVar26,&UNK_14304ff00);
      uStack_168._0_4_ = (undefined4)uStack_1b8;
      uStack_168._4_4_ = (undefined4)((ulonglong)uStack_1b8 >> 0x20);
      uStack_178._0_4_ = (float)CONCAT61(uStack_1c7,bStack_1c8);
      uStack_178._4_4_ = (uint)(CONCAT17(uStack_1c1,CONCAT61(uStack_1c7,bStack_1c8)) >> 0x20);
      uStack_170 = (undefined4)(undefined7)uStack_1c0;
      uStack_16c = (undefined4)(CONCAT17(uStack_1c0._7_1_,(undefined7)uStack_1c0) >> 0x20);
      uStack_188._0_4_ = (float)uStack_1d8;
      uStack_188._4_4_ = (float)(CONCAT17(uStack_1d1,uStack_1d8) >> 0x20);
      fStack_180 = fStack_1d0;
      fStack_17c = (float)uStack_1cc;
      uStack_190 = (code *)((ulonglong)uStack_190 & 0xffffffffffffff00);
      uStack_198 = ppbVar30;
      pdb_141a88350(uStack_238,&uStack_198);
      lStack_268 = lVar25;
      if (uStack_260 != 0) {
        pub_1406abac0(pbStack_200,uStack_260,1);
      }
      fVar54 = _DAT_142e36f50;
      fVar40 = fStack_290 * _DAT_142e36f50 + _DAT_142e37ae4 + _DAT_142e3787c;
      fVar41 = fVar40 * 0.0;
      uStack_198 = (byte **)CONCAT44(fVar41,fVar40);
      uStack_190 = (code *)CONCAT44(uStack_190._4_4_,fVar41);
      fStack_2d8 = fVar11;
      fStack_2d4 = fVar12;
      fStack_2d0 = fVar13;
      fStack_2cc = fVar14;
      pdb_140aefb10(&uStack_1d8,&fStack_2d8,&uStack_198);
      fVar40 = (float)uStack_1d8 + fVar66;
      fVar41 = (float)(CONCAT17(uStack_1d1,uStack_1d8) >> 0x20) + fVar67;
      fVar68 = fStack_1d0 + fVar2;
      fStack_17c = 1.0;
      uStack_178._0_4_ = 1.0;
      uStack_178._4_4_ = 0x3f800000;
      uStack_198 = (byte **)pbVar29;
      uStack_190 = (code *)uVar27;
      uStack_188._0_4_ = fVar40;
      uStack_188._4_4_ = fVar41;
      fStack_180 = fVar68;
      pdb_140b3d590(auStack_230);
      fStack_1d0 = 5.4684143;
      uStack_1cc = 1;
      uStack_d1 = 1;
      uStack_1d8 = uVar19;
      uStack_1d1 = uVar21;
      pdb_140905540(&uStack_198,&UNK_14304ff30,&uStack_1d8);
      pbStack_1f8 = (byte *)uStack_198;
      pcStack_1f0 = uStack_190;
      uStack_1e8 = CONCAT44(uStack_188._4_4_,(float)uStack_188);
      uStack_1d1 = (undefined1)auStack_230._0_8_;
      fStack_1d0 = SUB84(auStack_230._0_8_,1);
      uStack_1cc._0_3_ = SUB83(auStack_230._0_8_,5);
      uStack_1cc._3_1_ = (undefined1)auStack_230._8_8_;
      bStack_1c8 = SUB81(auStack_230._8_8_,1);
      uStack_1c7 = SUB86(auStack_230._8_8_,2);
      uStack_1c1 = (undefined1)auStack_230._16_8_;
      uStack_1c0._0_7_ = SUB87(auStack_230._16_8_,1);
      uStack_10f = CONCAT17(uStack_1d1,uStack_1d8);
      uStack_107 = (undefined7)CONCAT44(uStack_1cc,fStack_1d0);
      uStack_ff = SUB87(auStack_230._8_8_,1);
      uStack_198 = (byte **)0x0;
      uStack_190 = (code *)0x8;
      uStack_188._0_4_ = 0.0;
      uStack_188._4_4_ = 0.0;
      fStack_180 = 1.4013e-45;
      uStack_178._0_4_ = 0.0;
      uStack_178._4_4_ = 0;
      uStack_168._0_4_ = 2;
      pcStack_150 = (code *)CONCAT44(pcStack_150._4_4_,3);
      uStack_138 = 3;
      uStack_120 = 0;
      uStack_110 = 2;
      uStack_f0 = 0x100;
      uStack_d1 = 0;
      ppbVar30 = &pbStack_1f8;
      uStack_100 = uStack_1cc._3_1_;
      lVar25 = pdb_1409008d0(lStack_268,&pbStack_1f8,&uStack_198);
      cVar23 = *(char *)(lVar25 + 0x18);
      if (cVar23 == '\x02') {
        if ((*(byte ***)(lVar25 + 0x38) == ppbVar30) && (*(char *)(lVar25 + 0x19) == '\x03')) {
          uStack_198 = (byte **)CONCAT71(uStack_198._1_7_,0x11);
          uStack_d1 = 0;
          pdb_1414af090(pbStack_e0,&uStack_198,&UNK_14304ff38);
          uVar5 = *(undefined4 *)((longlong)param_7 + 0x1c);
          puVar7 = (undefined4 *)param_7[2];
          *puVar7 = uVar5;
          pfVar1 = (float *)*param_7;
          *(undefined8 *)(pfVar1 + 4) = uStack_280;
          uStack_d1 = 0;
          pdb_140dee670(&uStack_198,*param_10);
          uStack_198._0_4_ = (float)((uint)(float)uStack_198 ^ _DAT_142e377a0);
          fVar44 = (float)(uStack_198._4_4_ ^ _UNK_142e377a4);
          fVar46 = (float)((uint)(float)uStack_190 ^ _UNK_142e377a8);
          fVar48 = (float)(uStack_190._4_4_ ^ _UNK_142e377ac);
          fVar61 = fVar48 * fVar11 * _DAT_142e377b0;
          fVar62 = fVar46 * fVar11 * _UNK_142e377b4;
          fVar63 = fVar44 * fVar11 * _UNK_142e377b8;
          fVar64 = (float)uStack_198 * fVar11 * _UNK_142e377bc;
          fVar50 = fVar46 * fVar12 * _DAT_142e377c0;
          fVar51 = fVar48 * fVar12 * _UNK_142e377c4;
          fVar52 = (float)uStack_198 * fVar12 * _UNK_142e377c8;
          fVar53 = fVar44 * fVar12 * _UNK_142e377cc;
          fVar42 = fVar44 * fVar13 * _DAT_142e377d0;
          fVar45 = (float)uStack_198 * fVar13 * _UNK_142e377d4;
          fVar47 = fVar48 * fVar13 * _UNK_142e377d8;
          fVar49 = fVar46 * fVar13 * _UNK_142e377dc;
          *puVar7 = uVar5;
          *pfVar1 = fVar42 + fVar50 + fVar61 + fVar14 * (float)uStack_198;
          pfVar1[1] = fVar45 + fVar51 + fVar62 + fVar14 * fVar44;
          pfVar1[2] = fVar47 + fVar52 + fVar63 + fVar14 * fVar46;
          pfVar1[3] = fVar49 + fVar53 + fVar64 + fVar14 * fVar48;
          uStack_198 = (byte **)0x29;
          uStack_178._4_4_ = uStack_178._4_4_ & 0xffffff00;
          uStack_d1 = 0;
          fStack_180 = fVar40;
          fStack_17c = fVar41;
          uStack_178._0_4_ = fVar68;
          pdb_1414af010(&uStack_358,&uStack_198,&UNK_14304ff50);
          cVar23 = *(char *)(lVar25 + 0x18);
          goto LAB_140ae99c6;
        }
LAB_140ae99ca:
        fVar42 = _DAT_142e3798c;
        if ((*(byte ***)(lVar25 + 0x38) == ppbVar30) && (*(int *)(lVar25 + 0x28) != 2)) {
          fVar42 = fVar54;
        }
      }
      else {
LAB_140ae99c6:
        fVar42 = _DAT_142e3798c;
        if (cVar23 != '\0') goto LAB_140ae99ca;
      }
      uStack_278 = CONCAT44(uStack_278._4_4_,fVar42);
      pbStack_1f8 = (byte *)CONCAT44(fVar41,fVar40);
      pcStack_1f0 = (code *)CONCAT44(pcStack_1f0._4_4_,fVar68);
      uStack_190 = pdb_140f33df0;
      uStack_188 = (float *)&uStack_278;
      fStack_180 = 7.7206726;
      fStack_17c = 1.4013e-45;
      uStack_d1 = 0;
      uStack_198 = &pbStack_1f8;
      pdb_140905540(&uStack_1d8,&UNK_14304ff68,&uStack_198);
      pbStack_200 = (byte *)CONCAT17(uStack_1d1,uStack_1d8);
      pbStack_e0 = (byte *)CONCAT44(uStack_1cc,fStack_1d0);
      uVar38 = CONCAT17(uStack_1c1,CONCAT61(uStack_1c7,bStack_1c8));
      uStack_198 = (byte **)CONCAT44(fVar41,fVar40);
      uStack_190 = (code *)CONCAT44(fVar42,fVar68);
      uVar27 = pdb_140ade8d0(&uStack_198);
      pdb_1409baea0(&uStack_1d8,pbStack_e0,uVar38,uVar27,&UNK_14304ff78);
      uStack_168._0_4_ = (undefined4)uStack_1b8;
      uStack_168._4_4_ = (undefined4)((ulonglong)uStack_1b8 >> 0x20);
      uStack_178._0_4_ = (float)CONCAT61(uStack_1c7,bStack_1c8);
      uStack_178._4_4_ = (uint)(CONCAT17(uStack_1c1,CONCAT61(uStack_1c7,bStack_1c8)) >> 0x20);
      uStack_170 = (undefined4)(undefined7)uStack_1c0;
      uStack_16c = (undefined4)(CONCAT17(uStack_1c0._7_1_,(undefined7)uStack_1c0) >> 0x20);
      uStack_188._0_4_ = (float)uStack_1d8;
      uStack_188._4_4_ = (float)(CONCAT17(uStack_1d1,uStack_1d8) >> 0x20);
      fStack_180 = fStack_1d0;
      fStack_17c = (float)uStack_1cc;
      uStack_190 = (code *)((ulonglong)uStack_190 & 0xffffffffffffff00);
      uStack_198 = ppbVar30;
      pdb_141a88350(uStack_238,&uStack_198);
      ppbVar30 = ppbStack_e8;
      if (pbStack_200 != (byte *)0x0) {
        pub_1406abac0(pbStack_e0,(ulonglong)pbStack_200,1);
      }
      uVar21 = uStack_1d1;
      uVar19 = uStack_1d8;
      uStack_1d1 = (undefined1)((ulonglong)&iStack_204 >> 0x38);
      uVar22 = uStack_1d1;
      uStack_1d8 = SUB87(&iStack_204,0);
      uVar20 = uStack_1d8;
      uStack_1d8 = uVar19;
      uStack_1d1 = uVar21;
      if (1 < *(byte *)((longlong)ppbVar30 - 0x2e)) {
        uStack_188._4_4_ = (fStack_284 - fStack_288) + _DAT_142e36f50;
        uStack_188._0_4_ = uStack_188._4_4_ * 0.0;
        fStack_250 = fVar2 + (float)uStack_188;
        uStack_188._0_4_ = (float)uStack_188 + fVar66;
        uStack_188._4_4_ = uStack_188._4_4_ + fVar67;
        uStack_258 = CONCAT44(uStack_188._4_4_,(float)uStack_188);
        fStack_17c = 1.0;
        uStack_178._0_4_ = 1.0;
        uStack_178._4_4_ = 0x3f800000;
        uStack_198 = (byte **)pbVar15;
        uStack_190 = (code *)uVar16;
        fStack_180 = fStack_250;
        pdb_140b3d590(auStack_230);
        fStack_1d0 = 5.4684143;
        uStack_1cc = 1;
        uStack_d3 = 1;
        uStack_1d8 = uVar20;
        uStack_1d1 = uVar22;
        pdb_140905540(&uStack_198,&UNK_14304ffa8,&uStack_1d8);
        pbStack_1f8 = (byte *)uStack_198;
        pcStack_1f0 = uStack_190;
        uStack_1e8 = CONCAT44(uStack_188._4_4_,(float)uStack_188);
        uStack_1d1 = (undefined1)auStack_230._0_8_;
        fStack_1d0 = SUB84(auStack_230._0_8_,1);
        uStack_1cc._0_3_ = SUB83(auStack_230._0_8_,5);
        uStack_1cc._3_1_ = (undefined1)auStack_230._8_8_;
        bStack_1c8 = SUB81(auStack_230._8_8_,1);
        uStack_1c7 = SUB86(auStack_230._8_8_,2);
        uStack_1c1 = (undefined1)auStack_230._16_8_;
        uStack_1c0._0_7_ = SUB87(auStack_230._16_8_,1);
        uStack_10f = CONCAT17(uStack_1d1,uStack_1d8);
        uStack_107 = (undefined7)CONCAT44(uStack_1cc,fStack_1d0);
        uStack_ff = SUB87(auStack_230._8_8_,1);
        uStack_198 = (byte **)0x0;
        uStack_190 = (code *)0x8;
        uStack_188._0_4_ = 0.0;
        uStack_188._4_4_ = 0.0;
        fStack_180 = 1.4013e-45;
        uStack_178._0_4_ = 0.0;
        uStack_178._4_4_ = 0;
        uStack_168._0_4_ = 2;
        pcStack_150 = (code *)CONCAT44(pcStack_150._4_4_,3);
        uStack_138 = 3;
        uStack_120 = 0;
        uStack_110 = 2;
        uStack_f0 = 0x100;
        uStack_d3 = 0;
        ppbVar31 = &pbStack_1f8;
        uStack_100 = uStack_1cc._3_1_;
        lVar25 = pdb_1409008d0(lStack_268,&pbStack_1f8,&uStack_198);
        if (*(char *)(lVar25 + 0x18) == '\0') {
LAB_140ae9e0b:
          fVar54 = _DAT_142e3c608;
        }
        else {
          if ((*(byte ***)(lVar25 + 0x38) == ppbVar31) && (*(int *)(lVar25 + 0x28) != 2)) {
            uStack_168._0_4_ = *(undefined4 *)(lVar25 + 0x54);
            uStack_170 = (undefined4)*(undefined8 *)(lVar25 + 0x4c);
            uStack_16c = (undefined4)((ulonglong)*(undefined8 *)(lVar25 + 0x4c) >> 0x20);
            fStack_13c = (fStack_284 - fStack_288) + _DAT_142e36f50;
            uStack_198 = *(byte ***)((longlong)ppbVar30 - 0x60);
            uStack_190 = *(code **)((longlong)ppbVar30 - 0x58);
            uStack_188._0_4_ = (float)CONCAT31(uStack_188._1_3_,4);
            fStack_180 = SUB84(pbStack_218,0);
            fStack_17c = (float)((ulonglong)pbStack_218 >> 0x20);
            uStack_178._0_4_ = SUB84(pbStack_210,0);
            uStack_178._4_4_ = (uint)((ulonglong)pbStack_210 >> 0x20);
            uStack_168._4_4_ = 0;
            uStack_160 = 0x3f800000;
            uStack_15c = 0;
            pfStack_158._0_4_ = 0;
            uStack_d3 = 0;
            uStack_188._4_4_ = (float)iVar4;
            ppbStack_148 = ppbVar31;
            iStack_140 = iVar4;
            pdb_141b75540(&uStack_338,&uStack_198,&UNK_14304ffb8);
            if (*(char *)(lVar25 + 0x18) == '\0') goto LAB_140ae9e0b;
          }
          fVar54 = _DAT_142e3c608;
          if ((*(byte ***)(lVar25 + 0x38) == ppbVar31) && (*(int *)(lVar25 + 0x28) != 2)) {
            fVar54 = _DAT_142e3787c;
          }
        }
        pbStack_1f8 = (byte *)CONCAT44(pbStack_1f8._4_4_,fVar54);
        uStack_190 = pdb_140aefd40;
        uStack_188 = (float *)&uStack_258;
        fStack_180 = 7.6012573;
        fStack_17c = 1.4013e-45;
        uStack_170 = 0x40f70fc0;
        uStack_16c = 1;
        uStack_d3 = 0;
        uStack_198 = (byte **)&iStack_204;
        uStack_178 = &pbStack_1f8;
        pdb_140905540(&uStack_1d8,&UNK_14304ffd0,&uStack_198);
        ppbStack_e8 = (byte **)CONCAT17(uStack_1d1,uStack_1d8);
        pbStack_e0 = (byte *)CONCAT44(uStack_1cc,fStack_1d0);
        uVar38 = CONCAT17(uStack_1c1,CONCAT61(uStack_1c7,bStack_1c8));
        uStack_198 = (byte **)uStack_258;
        uStack_190 = (code *)CONCAT44(fVar54,fStack_250);
        uVar27 = pdb_140ade8d0(&uStack_198);
        pdb_1409baea0(&uStack_1d8,pbStack_e0,uVar38,uVar27,&UNK_14304ffe0);
        uStack_168._0_4_ = (undefined4)uStack_1b8;
        uStack_168._4_4_ = (undefined4)((ulonglong)uStack_1b8 >> 0x20);
        uStack_178._0_4_ = (float)CONCAT61(uStack_1c7,bStack_1c8);
        uStack_178._4_4_ = (uint)(CONCAT17(uStack_1c1,CONCAT61(uStack_1c7,bStack_1c8)) >> 0x20);
        uStack_170 = (undefined4)(undefined7)uStack_1c0;
        uStack_16c = (undefined4)(CONCAT17(uStack_1c0._7_1_,(undefined7)uStack_1c0) >> 0x20);
        uStack_188._0_4_ = (float)uStack_1d8;
        uStack_188._4_4_ = (float)(CONCAT17(uStack_1d1,uStack_1d8) >> 0x20);
        fStack_180 = fStack_1d0;
        fStack_17c = (float)uStack_1cc;
        uStack_190 = (code *)((ulonglong)uStack_190 & 0xffffffffffffff00);
        uStack_198 = ppbVar31;
        pdb_141a88350(uStack_238,&uStack_198);
        if (ppbStack_e8 != (byte **)0x0) {
          pub_1406abac0(pbStack_e0,(ulonglong)ppbStack_e8,1);
        }
      }
      fVar54 = fStack_28c * _DAT_142e36f50 + _DAT_142e36f50;
      fVar40 = fVar54 * 0.0;
      uStack_198 = (byte **)CONCAT44(fVar40,fVar40);
      uStack_190 = (code *)CONCAT44(uStack_190._4_4_,fVar54);
      fStack_2c8 = fVar11;
      fStack_2c4 = fVar12;
      fStack_2c0 = fVar13;
      fStack_2bc = fVar14;
      pdb_140aefb10(&uStack_1d8,&fStack_2c8,&uStack_198);
      fStack_240 = fVar2 + fStack_1d0;
      uStack_188._0_4_ = (float)uStack_1d8 + fVar66;
      uStack_188._4_4_ = (float)(CONCAT17(uStack_1d1,uStack_1d8) >> 0x20) + fVar67;
      uStack_248 = CONCAT44(uStack_188._4_4_,(float)uStack_188);
      fStack_17c = 1.0;
      uStack_178._0_4_ = 1.0;
      uStack_178._4_4_ = 0x3f800000;
      fStack_2b8 = fVar11;
      fStack_2b4 = fVar12;
      fStack_2b0 = fVar13;
      fStack_2ac = fVar14;
      uStack_198 = (byte **)pbVar17;
      uStack_190 = (code *)pbVar18;
      fStack_180 = fStack_240;
      pdb_140b3d590(auStack_230);
      fStack_1d0 = 5.4684143;
      uStack_1cc = 1;
      uStack_d4 = 1;
      uStack_1d8 = uVar20;
      uStack_1d1 = uVar22;
      pdb_140905540(&uStack_198,&UNK_143050010,&uStack_1d8);
      pbStack_1f8 = (byte *)uStack_198;
      pcStack_1f0 = uStack_190;
      uStack_1e8 = CONCAT44(uStack_188._4_4_,(float)uStack_188);
      uStack_1d1 = (undefined1)auStack_230._0_8_;
      fStack_1d0 = SUB84(auStack_230._0_8_,1);
      uStack_1cc._0_3_ = SUB83(auStack_230._0_8_,5);
      uStack_1cc._3_1_ = (undefined1)auStack_230._8_8_;
      bStack_1c8 = SUB81(auStack_230._8_8_,1);
      uStack_1c7 = SUB86(auStack_230._8_8_,2);
      uStack_1c1 = (undefined1)auStack_230._16_8_;
      uStack_1c0._0_7_ = SUB87(auStack_230._16_8_,1);
      uStack_10f = CONCAT17(uStack_1d1,uStack_1d8);
      uStack_107 = (undefined7)CONCAT44(uStack_1cc,fStack_1d0);
      uStack_ff = SUB87(auStack_230._8_8_,1);
      uStack_198 = (byte **)0x0;
      uStack_190 = (code *)0x8;
      uStack_188._0_4_ = 0.0;
      uStack_188._4_4_ = 0.0;
      fStack_180 = 1.4013e-45;
      uStack_178._0_4_ = 0.0;
      uStack_178._4_4_ = 0;
      uStack_168._0_4_ = 2;
      pcStack_150 = (code *)CONCAT44(pcStack_150._4_4_,3);
      uStack_138 = 3;
      uStack_120 = 0;
      uStack_110 = 2;
      uStack_f0 = 0x100;
      uStack_d4 = 0;
      ppbVar30 = &pbStack_1f8;
      uStack_100 = uStack_1cc._3_1_;
      lVar25 = pdb_1409008d0(lStack_268,ppbVar30,&uStack_198);
      ppbStack_e8 = ppbVar30;
      if (*(char *)(lVar25 + 0x18) == '\x02') {
        if (*(byte ***)(lVar25 + 0x38) != ppbVar30) goto LAB_140aea26b;
        fVar65 = _DAT_142e37990;
        if (*(char *)(lVar25 + 0x19) == '\x02') goto LAB_140aea1b3;
LAB_140aea1bc:
        fStack_1dc = fVar65;
        if (*(int *)(lVar25 + 0x28) != 2) {
          uStack_168._0_4_ = *(undefined4 *)(lVar25 + 0x54);
          uStack_170 = (undefined4)*(undefined8 *)(lVar25 + 0x4c);
          uStack_16c = (undefined4)((ulonglong)*(undefined8 *)(lVar25 + 0x4c) >> 0x20);
          ppbStack_148 = (byte **)CONCAT44(ppbStack_148._4_4_,iVar4);
          uStack_190 = (code *)uStack_280;
          uStack_188._0_4_ = (float)CONCAT31(uStack_188._1_3_,4);
          fStack_180 = SUB84(pbStack_218,0);
          fStack_17c = (float)((ulonglong)pbStack_218 >> 0x20);
          uStack_178._0_4_ = SUB84(pbStack_210,0);
          uStack_178._4_4_ = (uint)((ulonglong)pbStack_210 >> 0x20);
          uStack_168._4_4_ = 0;
          uStack_160 = 0x3f800000;
          uStack_15c = 0;
          pfStack_158._0_4_ = 0;
          uStack_d4 = 0;
          uStack_198 = ppbVar30;
          uStack_188._4_4_ = (float)iVar4;
          pdb_141b74e90(&uStack_318,&uStack_198,&UNK_143050020);
        }
      }
      else {
        if ((*(char *)(lVar25 + 0x18) == '\x01') && (*(byte ***)(lVar25 + 0x38) == ppbVar30)) {
          fVar65 = _DAT_142e37990;
          if (*(char *)(lVar25 + 0x19) == '\0') {
LAB_140aea1b3:
            fVar65 = _DAT_142e36f28;
          }
          goto LAB_140aea1bc;
        }
LAB_140aea26b:
        fStack_1dc = 1.0;
      }
      bStack_1c8 = 0;
      uStack_1c0._0_7_ = 0x143050038;
      uStack_1c0._7_1_ = 0;
      uStack_1b8 = 10;
      uStack_1b0 = 1;
      puStack_1a8 = &UNK_143050042;
      uStack_1a0 = 0x12;
      lVar25 = 0;
      goto LAB_140aea2fa;
    }
    uVar35 = (ushort)(uVar32 - 1) & (ushort)uVar32;
    uVar32 = CONCAT22((short)(uVar32 - 1 >> 0x10),uVar35);
  }
  auVar57[0] = -(auVar3[0] == -1);
  auVar57[1] = -(auVar3[1] == -1);
  auVar57[2] = -(auVar3[2] == -1);
  auVar57[3] = -(auVar3[3] == -1);
  auVar57[4] = -(auVar3[4] == -1);
  auVar57[5] = -(auVar3[5] == -1);
  auVar57[6] = -(auVar3[6] == -1);
  auVar57[7] = -(auVar3[7] == -1);
  auVar57[8] = -(auVar3[8] == -1);
  auVar57[9] = -(auVar3[9] == -1);
  auVar57[10] = -(auVar3[10] == -1);
  auVar57[0xb] = -(auVar3[0xb] == -1);
  auVar57[0xc] = -(auVar3[0xc] == -1);
  auVar57[0xd] = -(auVar3[0xd] == -1);
  auVar57[0xe] = -(auVar3[0xe] == -1);
  auVar57[0xf] = -(auVar3[0xf] == -1);
  if ((((((((((((((((SUB161(auVar57 >> 7,0) & 1) != 0 || (SUB161(auVar57 >> 0xf,0) & 1) != 0) ||
                  (SUB161(auVar57 >> 0x17,0) & 1) != 0) || (SUB161(auVar57 >> 0x1f,0) & 1) != 0) ||
                (SUB161(auVar57 >> 0x27,0) & 1) != 0) || (SUB161(auVar57 >> 0x2f,0) & 1) != 0) ||
              (SUB161(auVar57 >> 0x37,0) & 1) != 0) || (SUB161(auVar57 >> 0x3f,0) & 1) != 0) ||
            (SUB161(auVar57 >> 0x47,0) & 1) != 0) || (SUB161(auVar57 >> 0x4f,0) & 1) != 0) ||
          (SUB161(auVar57 >> 0x57,0) & 1) != 0) || (SUB161(auVar57 >> 0x5f,0) & 1) != 0) ||
        (SUB161(auVar57 >> 0x67,0) & 1) != 0) || (SUB161(auVar57 >> 0x6f,0) & 1) != 0) ||
      (SUB161(auVar57 >> 0x77,0) & 1) != 0) || auVar57[0xf] < '\0') {
    return;
  }
  uVar24 = uVar24 + lVar25 + 0x10;
  lVar25 = lVar25 + 0x10;
  goto LAB_140ae90b4;
LAB_140aea2fa:
  uStack_168 = &fStack_1dc;
  uStack_188 = (float *)&uStack_248;
  bVar39 = (&bStack_1c8)[lVar25 * 0x18];
  if (bVar39 == 2) {
    return;
  }
  uVar38 = (&uStack_1c0)[lVar25 * 3];
  uVar27 = (&uStack_1b8)[lVar25 * 3];
  uStack_198 = (byte **)&iStack_204;
  uStack_190 = pdb_140aefd40;
  fStack_180 = 7.6012573;
  fStack_17c = 1.4013e-45;
  uStack_178 = (byte **)&uStack_278;
  uStack_170 = 0x402ed400;
  uStack_16c = 1;
  uStack_160 = 0x40f70fc0;
  uStack_15c = 1;
  pfStack_158 = &fStack_2b8;
  pcStack_150 = pdb_140f33730;
  uStack_d4 = 0;
  uStack_278 = uVar38;
  uStack_270 = uVar27;
  pdb_140f60760(&pbStack_1f8,&UNK_143050054,&uStack_198);
  uVar24 = uStack_1e8;
  pbStack_e0 = pbStack_1f8;
  pbStack_218 = (byte *)pcStack_1f0;
  uStack_190 = (code *)CONCAT44(uStack_190._4_4_,fStack_240);
  uStack_198 = (byte **)uStack_248;
  pdb_14007ee60();
  pbVar28 = pub_1406abab0(0x50,0x10);
  if (pbVar28 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc7e11(0x10,0x50);
  }
  lVar25 = lVar25 + 1;
  pbVar28[0] = 1;
  pbVar28[1] = 0;
  pbVar28[2] = 0;
  pbVar28[3] = 0;
  pbVar28[4] = 0;
  pbVar28[5] = 0;
  pbVar28[6] = 0;
  pbVar28[7] = 0;
  pbVar28[8] = 1;
  pbVar28[9] = 0;
  pbVar28[10] = 0;
  pbVar28[0xb] = 0;
  pbVar28[0xc] = 0;
  pbVar28[0xd] = 0;
  pbVar28[0xe] = 0;
  pbVar28[0xf] = 0;
  *(undefined8 *)(pbVar28 + 0x10) = uVar38;
  *(undefined8 *)(pbVar28 + 0x18) = uVar27;
  *(float *)(pbVar28 + 0x20) = fVar11;
  *(float *)(pbVar28 + 0x24) = fVar12;
  *(float *)(pbVar28 + 0x28) = fVar13;
  *(float *)(pbVar28 + 0x2c) = fVar14;
  *(float *)(pbVar28 + 0x30) = fVar65;
  *(byte ***)(pbVar28 + 0x34) = uStack_198;
  *(float *)(pbVar28 + 0x3c) = (float)uStack_190;
  pbVar28[0x40] = bVar39 & 1;
  uStack_190 = (code *)&UNK_143050068;
  uStack_198 = (byte **)pbVar28;
  if ((longlong)uVar24 < 0) {
    uVar38 = 0;
    pbStack_210 = pbVar28;
LAB_140aea55b:
    pdb_142dc7e2a(uVar38,uVar24);
                    /* WARNING: Does not return */
    pcVar8 = (code *)invalidInstructionException();
    (*pcVar8)();
  }
  if (uVar24 == 0) {
    pbVar29 = (byte *)0x1;
  }
  else {
    pbStack_210 = pbVar28;
    pdb_14007ee60();
    uVar38 = 1;
    pbVar29 = pub_1406abab0(uVar24,1);
    if (pbVar29 == (byte *)0x0) goto LAB_140aea55b;
    pub_142e32760(pbVar29,pbStack_218,uVar24);
    pbVar28 = pbStack_210;
  }
  uStack_198 = ppbStack_e8;
  uStack_190 = (code *)((ulonglong)uStack_190 & 0xffffffffffffff00);
  uStack_188._0_4_ = (float)uVar24;
  uStack_188._4_4_ = (float)(uVar24 >> 0x20);
  fStack_180 = SUB84(pbVar29,0);
  fStack_17c = (float)((ulonglong)pbVar29 >> 0x20);
  uStack_170 = SUB84(pbVar28,0);
  uStack_16c = (undefined4)((ulonglong)pbVar28 >> 0x20);
  uStack_168._0_4_ = 0x43050068;
  uStack_168._4_4_ = 1;
  uStack_178._0_4_ = (float)uStack_188;
  uStack_178._4_4_ = (uint)uStack_188._4_4_;
  pdb_141a88350(uStack_238,&uStack_198);
  if (pbStack_e0 != (byte *)0x0) {
    pub_1406abac0(pbStack_218,(ulonglong)pbStack_e0,1);
  }
  if (lVar25 == 2) {
    return;
  }
  goto LAB_140aea2fa;
}

