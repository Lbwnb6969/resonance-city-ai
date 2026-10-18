// VA 0x140806570, PDB extent 4774 bytes
// system_wall_constructor::construct_gates::systems::construct_gates
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/wall-constructor/src/construct_gates/systems.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: system_wall_constructor::construct_gates::systems::construct_gates
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/wall-constructor/src/construct_gates/systems.rs
   Extent: 4774 */

void pdb_140806570(undefined8 *param_1,undefined8 param_2,longlong *param_3,undefined8 *param_4,
                  undefined8 *param_5,undefined8 *param_6,longlong *param_7,undefined8 *param_8,
                  undefined8 *param_9,undefined8 *param_10,undefined8 *param_11,undefined8 *param_12
                  ,undefined8 *param_13,undefined8 *param_14)

{
  longlong lVar1;
  char *pcVar2;
  ulonglong *puVar3;
  float fVar4;
  ulonglong uVar5;
  char cVar6;
  uint uVar7;
  uint uVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [12];
  undefined8 *puVar25;
  longlong lVar26;
  longlong lVar27;
  longlong lVar28;
  ulonglong uVar29;
  int *piVar30;
  ulonglong uVar31;
  undefined8 uVar32;
  ulonglong uVar33;
  ulonglong uVar34;
  longlong lVar35;
  float *pfVar36;
  ulonglong uVar37;
  uint uVar38;
  byte *pbVar39;
  longlong lVar40;
  ushort uVar41;
  longlong lVar42;
  longlong lVar43;
  longlong *plVar44;
  bool bVar45;
  byte bVar46;
  int iVar47;
  float fVar48;
  byte bVar53;
  byte bVar55;
  byte bVar57;
  int iVar58;
  byte bVar59;
  byte bVar60;
  byte bVar62;
  byte bVar63;
  byte bVar64;
  byte bVar65;
  byte bVar66;
  byte bVar67;
  byte bVar68;
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar54 [15];
  byte bVar56;
  byte bVar61;
  byte bVar69;
  undefined1 auVar52 [16];
  float fVar70;
  longlong lVar71;
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  longlong lVar83;
  float fVar84;
  undefined1 auVar85 [16];
  undefined1 auVar86 [16];
  undefined4 uVar87;
  longlong lVar88;
  undefined4 uVar90;
  undefined1 auVar89 [16];
  float fVar91;
  undefined1 auVar92 [16];
  undefined1 auVar93 [16];
  undefined1 auVar94 [16];
  undefined1 auVar95 [16];
  undefined1 auVar96 [16];
  undefined1 auVar97 [16];
  int iVar98;
  float fVar99;
  undefined1 auVar100 [16];
  undefined1 auVar101 [16];
  undefined1 auVar102 [16];
  undefined1 auVar103 [16];
  float fVar104;
  float fVar106;
  undefined1 auVar105 [16];
  undefined1 auVar107 [16];
  undefined1 auVar108 [16];
  undefined1 auVar109 [16];
  undefined1 auVar110 [16];
  undefined1 auVar111 [16];
  undefined1 auVar112 [16];
  undefined1 auVar113 [16];
  undefined1 auVar114 [16];
  undefined1 auVar115 [16];
  float fVar116;
  undefined1 auVar117 [16];
  undefined1 auVar118 [16];
  undefined1 auVar119 [16];
  undefined1 auVar120 [16];
  undefined1 auVar121 [16];
  undefined1 auVar122 [16];
  undefined1 auVar123 [16];
  undefined1 auVar124 [16];
  float fVar129;
  undefined1 auVar130 [16];
  undefined1 auVar131 [16];
  undefined1 auVar132 [16];
  undefined1 auVar133 [16];
  undefined1 auVar134 [16];
  undefined1 auVar135 [16];
  undefined1 auVar136 [16];
  undefined1 auVar137 [16];
  undefined8 uStack_2d8;
  longlong lStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  longlong lStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  longlong lStack_2a0;
  longlong lStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  int iStack_280;
  undefined1 auStack_278 [16];
  longlong lStack_268;
  longlong lStack_260;
  longlong **pplStack_258;
  code *pcStack_250;
  longlong *plStack_248;
  longlong *plStack_240;
  undefined4 *puStack_238;
  longlong lStack_230;
  ulonglong *puStack_228;
  longlong lStack_220;
  longlong *plStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined4 *puStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  longlong lStack_1c0;
  ulonglong uStack_1b8;
  byte *pbStack_1b0;
  ulonglong uStack_1a8;
  undefined8 uStack_1a0;
  undefined *puStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined *puStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined *puStack_168;
  longlong ***ppplStack_160;
  longlong *plStack_150;
  longlong lStack_148;
  longlong lStack_140;
  longlong *plStack_138;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  longlong lStack_128;
  undefined8 *puStack_120;
  ulonglong uStack_118;
  byte *pbStack_110;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined1 uStack_f2;
  char acStack_f1 [57];
  longlong lVar79;
  longlong lVar80;
  longlong lVar81;
  longlong lVar82;
  int iVar125;
  longlong lVar126;
  longlong lVar127;
  longlong lVar128;
  
  acStack_f1[1] = -2;
  acStack_f1[2] = -1;
  acStack_f1[3] = -1;
  acStack_f1[4] = -1;
  acStack_f1[5] = -1;
  acStack_f1[6] = -1;
  acStack_f1[7] = -1;
  acStack_f1[8] = -1;
  uStack_210 = param_2;
  puStack_120 = param_4;
  puVar25 = (undefined8 *)pdb_1413e4400(*param_9,&UNK_1433056c0);
  if ((puVar25 == (undefined8 *)0x0) ||
     (lVar26 = (**(code **)(puVar25[1] + 0x18))(*puVar25), lVar26 == 0)) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc8150(&UNK_143007850);
  }
  acStack_f1[0] = '\0';
  puStack_228 = (ulonglong *)*param_1;
  lVar28 = param_1[1];
  uVar5 = *puStack_228;
  uVar31 = 0;
  uVar29 = uVar5 - *(ulonglong *)(lVar28 + 0x18);
  if (uVar5 < *(ulonglong *)(lVar28 + 0x18)) {
    uVar29 = uVar31;
  }
  uVar34 = uVar5 - *(ulonglong *)(lVar28 + 0x38);
  if (uVar5 < *(ulonglong *)(lVar28 + 0x38)) {
    uVar34 = uVar31;
  }
  lVar43 = uVar29 * 0x80 + *(longlong *)(lVar28 + 8);
  uVar5 = *(ulonglong *)(lVar28 + 0x10) - uVar29;
  if (*(ulonglong *)(lVar28 + 0x10) < uVar29) {
    lVar43 = 8;
    uVar5 = uVar31;
  }
  lVar27 = uVar34 * 0x80 + *(longlong *)(lVar28 + 0x28);
  uVar29 = *(ulonglong *)(lVar28 + 0x30) - uVar34;
  if (*(ulonglong *)(lVar28 + 0x30) < uVar34) {
    lVar27 = 8;
    uVar29 = uVar31;
  }
  *puStack_228 = (*(longlong *)(lVar28 + 0x40) - uVar29) - uVar5;
  lStack_220 = uVar29 * 0x80 + lVar27;
  plStack_150 = (longlong *)*param_7;
  uStack_130 = *(undefined4 *)((longlong)param_3 + 0x1c);
  plStack_138 = (longlong *)*param_3;
  puStack_238 = (undefined4 *)param_3[2];
  uStack_208 = *param_10;
  uStack_200 = *param_11;
  uStack_1f8 = *param_12;
  uStack_12c = *(undefined4 *)((longlong)param_5 + 0x1c);
  uStack_1f0 = *param_5;
  puStack_1e8 = (undefined4 *)param_5[2];
  uStack_1e0 = *param_6;
  uStack_1d8 = *param_8;
  uStack_1d0 = *param_14;
  uStack_1c8 = *param_13;
  lStack_230 = lVar26 + 0x58;
  auVar101._8_4_ = 0xffffffff;
  auVar101._0_8_ = 0xffffffffffffffff;
  auVar101._12_4_ = 0xffffffff;
  plStack_240 = plStack_150 + 4;
  plStack_218 = plStack_138 + 4;
  lVar28 = lVar27;
  lVar35 = lVar43;
  fVar99 = _DAT_142e36f50;
  fVar129 = _DAT_142e3787c;
  fVar116 = _DAT_142e36f28;
  if (lVar43 == 0) goto LAB_140806800;
LAB_1408067d2:
  lVar28 = lVar27;
  if (lVar35 == uVar5 * 0x80 + lVar43) goto LAB_140806800;
  lStack_140 = lVar35 + 0x80;
  lVar28 = lVar35;
  lStack_148 = lVar27;
LAB_140806835:
  *puStack_228 = *puStack_228 + 1;
  plVar44 = (longlong *)(lVar28 + 0x68);
  plStack_248 = plVar44;
  if (plStack_150[3] != 0) {
    uVar29 = pdb_1400af0a0(plStack_240,plVar44);
    lVar27 = *plStack_150;
    bVar46 = (byte)(uVar29 >> 0x39);
    auVar49 = ZEXT216(CONCAT11(bVar46,bVar46));
    auVar49 = pshuflw(auVar49,auVar49,0);
    lVar35 = 0;
    do {
      uVar29 = uVar29 & plStack_150[1];
      auVar132 = *(undefined1 (*) [16])(lVar27 + uVar29);
      auVar102[0] = -(auVar132[0] == auVar49[0]);
      auVar102[1] = -(auVar132[1] == auVar49[1]);
      auVar102[2] = -(auVar132[2] == auVar49[2]);
      auVar102[3] = -(auVar132[3] == auVar49[3]);
      auVar102[4] = -(auVar132[4] == auVar49[4]);
      auVar102[5] = -(auVar132[5] == auVar49[5]);
      auVar102[6] = -(auVar132[6] == auVar49[6]);
      auVar102[7] = -(auVar132[7] == auVar49[7]);
      auVar102[8] = -(auVar132[8] == auVar49[0]);
      auVar102[9] = -(auVar132[9] == auVar49[1]);
      auVar102[10] = -(auVar132[10] == auVar49[2]);
      auVar102[0xb] = -(auVar132[0xb] == auVar49[3]);
      auVar102[0xc] = -(auVar132[0xc] == auVar49[4]);
      auVar102[0xd] = -(auVar132[0xd] == auVar49[5]);
      auVar102[0xe] = -(auVar132[0xe] == auVar49[6]);
      auVar102[0xf] = -(auVar132[0xf] == auVar49[7]);
      uVar41 = (ushort)(SUB161(auVar102 >> 7,0) & 1) | (ushort)(SUB161(auVar102 >> 0xf,0) & 1) << 1
               | (ushort)(SUB161(auVar102 >> 0x17,0) & 1) << 2 |
               (ushort)(SUB161(auVar102 >> 0x1f,0) & 1) << 3 |
               (ushort)(SUB161(auVar102 >> 0x27,0) & 1) << 4 |
               (ushort)(SUB161(auVar102 >> 0x2f,0) & 1) << 5 |
               (ushort)(SUB161(auVar102 >> 0x37,0) & 1) << 6 |
               (ushort)(SUB161(auVar102 >> 0x3f,0) & 1) << 7 |
               (ushort)(SUB161(auVar102 >> 0x47,0) & 1) << 8 |
               (ushort)(SUB161(auVar102 >> 0x4f,0) & 1) << 9 |
               (ushort)(SUB161(auVar102 >> 0x57,0) & 1) << 10 |
               (ushort)(SUB161(auVar102 >> 0x5f,0) & 1) << 0xb |
               (ushort)(SUB161(auVar102 >> 0x67,0) & 1) << 0xc |
               (ushort)(SUB161(auVar102 >> 0x6f,0) & 1) << 0xd |
               (ushort)(SUB161(auVar102 >> 0x77,0) & 1) << 0xe | (ushort)(auVar102[0xf] >> 7) << 0xf
      ;
      uVar38 = (uint)uVar41;
      if (uVar41 != 0) {
        do {
          uVar7 = 0;
          for (uVar8 = uVar38; (uVar8 & 1) == 0; uVar8 = uVar8 >> 1 | 0x80000000) {
            uVar7 = uVar7 + 1;
          }
          lVar42 = (uVar7 + uVar29 & plStack_150[1]) * -0x2b0;
          if (*plVar44 == *(longlong *)(lVar27 + -0x2b0 + lVar42)) {
            lVar27 = lVar27 + lVar42;
            lVar42 = *(longlong *)(lVar27 + -0x188);
            if (lVar42 == 0) {
                    /* WARNING: Subroutine does not return */
              pdb_142dc8150(&UNK_143305b70);
            }
            lVar40 = lVar42 + 0x18;
            LOCK();
            bVar45 = *(char *)(lVar42 + 0x18) == '\0';
            if (bVar45) {
              *(char *)(lVar42 + 0x18) = '\x01';
            }
            UNLOCK();
            if (bVar45) {
              pdb_140e9a150(lVar40);
              lVar35 = *(longlong *)(lVar42 + 0x10);
              if (lVar35 == 0) goto LAB_140806960;
LAB_140806921:
              piVar30 = (int *)(*(longlong *)(lVar42 + 8) + lVar35 * 4 + -4);
              if (piVar30 == (int *)0x0) goto LAB_140806960;
              iStack_280 = *piVar30;
              lVar35 = *(longlong *)(lVar26 + 0x10);
            }
            else {
              pdb_142dbd1a0(lVar40,CONCAT71((int7)((ulonglong)lVar35 >> 8),1),1000000000);
              pdb_140e9a150(lVar40);
              lVar35 = *(longlong *)(lVar42 + 0x10);
              if (lVar35 != 0) goto LAB_140806921;
LAB_140806960:
              lVar35 = *(longlong *)(lVar26 + 0x10);
              if (lVar35 == 0) {
                    /* WARNING: Subroutine does not return */
                pdb_142dc8150(&UNK_143305b88);
              }
              iStack_280 = (int)lVar35 + -1;
            }
            uStack_2d8 = *(undefined8 *)(lVar26 + 8);
            uStack_2c8 = *(undefined8 *)(lVar26 + 0x18);
            uStack_2c0 = *(undefined8 *)(lVar26 + 0x20);
            uStack_2b0 = *(undefined8 *)(lVar26 + 0x28);
            uStack_2a8 = *(undefined8 *)(lVar26 + 0x30);
            uStack_290 = *(undefined8 *)(lVar26 + 0x38);
            uStack_288 = *(undefined8 *)(lVar26 + 0x40);
            lStack_2a0 = lVar26 + 0x78;
            lStack_298 = lStack_230;
            *puStack_238 = uStack_130;
            lStack_2d0 = lVar35;
            lStack_2b8 = lVar42;
            if (plStack_138[3] == 0) goto LAB_140806a80;
            uVar29 = pdb_1400af0a0(plStack_218,plVar44);
            bVar46 = (byte)(uVar29 >> 0x39);
            auVar49 = ZEXT216(CONCAT11(bVar46,bVar46));
            auVar49 = pshuflw(auVar49,auVar49,0);
            lVar35 = 0;
            goto LAB_140806a1a;
          }
          uVar41 = (ushort)(uVar38 - 1) & (ushort)uVar38;
          uVar38 = CONCAT22((short)(uVar38 - 1 >> 0x10),uVar41);
        } while (uVar41 != 0);
      }
      auVar72[0] = -(auVar132[0] == auVar101[0]);
      auVar72[1] = -(auVar132[1] == auVar101[1]);
      auVar72[2] = -(auVar132[2] == auVar101[2]);
      auVar72[3] = -(auVar132[3] == auVar101[3]);
      auVar72[4] = -(auVar132[4] == auVar101[4]);
      auVar72[5] = -(auVar132[5] == auVar101[5]);
      auVar72[6] = -(auVar132[6] == auVar101[6]);
      auVar72[7] = -(auVar132[7] == auVar101[7]);
      auVar72[8] = -(auVar132[8] == auVar101[8]);
      auVar72[9] = -(auVar132[9] == auVar101[9]);
      auVar72[10] = -(auVar132[10] == auVar101[10]);
      auVar72[0xb] = -(auVar132[0xb] == auVar101[0xb]);
      auVar72[0xc] = -(auVar132[0xc] == auVar101[0xc]);
      auVar72[0xd] = -(auVar132[0xd] == auVar101[0xd]);
      auVar72[0xe] = -(auVar132[0xe] == auVar101[0xe]);
      auVar72[0xf] = -(auVar132[0xf] == auVar101[0xf]);
      if ((((((((((((((((SUB161(auVar72 >> 7,0) & 1) != 0 || (SUB161(auVar72 >> 0xf,0) & 1) != 0) ||
                      (SUB161(auVar72 >> 0x17,0) & 1) != 0) || (SUB161(auVar72 >> 0x1f,0) & 1) != 0)
                    || (SUB161(auVar72 >> 0x27,0) & 1) != 0) || (SUB161(auVar72 >> 0x2f,0) & 1) != 0
                   ) || (SUB161(auVar72 >> 0x37,0) & 1) != 0) ||
                 (SUB161(auVar72 >> 0x3f,0) & 1) != 0) || (SUB161(auVar72 >> 0x47,0) & 1) != 0) ||
               (SUB161(auVar72 >> 0x4f,0) & 1) != 0) || (SUB161(auVar72 >> 0x57,0) & 1) != 0) ||
             (SUB161(auVar72 >> 0x5f,0) & 1) != 0) || (SUB161(auVar72 >> 0x67,0) & 1) != 0) ||
           (SUB161(auVar72 >> 0x6f,0) & 1) != 0) || (SUB161(auVar72 >> 0x77,0) & 1) != 0) ||
          auVar72[0xf] < '\0') break;
      uVar29 = uVar29 + lVar35 + 0x10;
      lVar35 = lVar35 + 0x10;
    } while( true );
  }
                    /* WARNING: Subroutine does not return */
  pdb_142dc8150(&UNK_1430078c0);
LAB_140806a1a:
  uVar29 = uVar29 & plStack_138[1];
  pcVar2 = (char *)(*plStack_138 + uVar29);
  auVar132[0] = -(*pcVar2 == auVar49[0]);
  auVar132[1] = -(pcVar2[1] == auVar49[1]);
  auVar132[2] = -(pcVar2[2] == auVar49[2]);
  auVar132[3] = -(pcVar2[3] == auVar49[3]);
  auVar132[4] = -(pcVar2[4] == auVar49[4]);
  auVar132[5] = -(pcVar2[5] == auVar49[5]);
  auVar132[6] = -(pcVar2[6] == auVar49[6]);
  auVar132[7] = -(pcVar2[7] == auVar49[7]);
  auVar132[8] = -(pcVar2[8] == auVar49[0]);
  auVar132[9] = -(pcVar2[9] == auVar49[1]);
  auVar132[10] = -(pcVar2[10] == auVar49[2]);
  auVar132[0xb] = -(pcVar2[0xb] == auVar49[3]);
  auVar132[0xc] = -(pcVar2[0xc] == auVar49[4]);
  auVar132[0xd] = -(pcVar2[0xd] == auVar49[5]);
  auVar132[0xe] = -(pcVar2[0xe] == auVar49[6]);
  auVar132[0xf] = -(pcVar2[0xf] == auVar49[7]);
  uVar41 = (ushort)(SUB161(auVar132 >> 7,0) & 1) | (ushort)(SUB161(auVar132 >> 0xf,0) & 1) << 1 |
           (ushort)(SUB161(auVar132 >> 0x17,0) & 1) << 2 |
           (ushort)(SUB161(auVar132 >> 0x1f,0) & 1) << 3 |
           (ushort)(SUB161(auVar132 >> 0x27,0) & 1) << 4 |
           (ushort)(SUB161(auVar132 >> 0x2f,0) & 1) << 5 |
           (ushort)(SUB161(auVar132 >> 0x37,0) & 1) << 6 |
           (ushort)(SUB161(auVar132 >> 0x3f,0) & 1) << 7 |
           (ushort)(SUB161(auVar132 >> 0x47,0) & 1) << 8 |
           (ushort)(SUB161(auVar132 >> 0x4f,0) & 1) << 9 |
           (ushort)(SUB161(auVar132 >> 0x57,0) & 1) << 10 |
           (ushort)(SUB161(auVar132 >> 0x5f,0) & 1) << 0xb |
           (ushort)(SUB161(auVar132 >> 0x67,0) & 1) << 0xc |
           (ushort)(SUB161(auVar132 >> 0x6f,0) & 1) << 0xd |
           (ushort)(SUB161(auVar132 >> 0x77,0) & 1) << 0xe | (ushort)(auVar132[0xf] >> 7) << 0xf;
  uVar38 = (uint)uVar41;
  if (uVar41 != 0) {
LAB_140806a34:
    uVar7 = 0;
    for (uVar8 = uVar38; (uVar8 & 1) == 0; uVar8 = uVar8 >> 1 | 0x80000000) {
      uVar7 = uVar7 + 1;
    }
    lVar42 = *plStack_138 + (uVar7 + uVar29 & plStack_138[1]) * -0x20;
    if (*plVar44 != *(longlong *)(lVar42 + -0x20)) goto code_r0x000140806a53;
    pbVar39 = *(byte **)(lVar28 + 0x20);
    uVar29 = *(ulonglong *)(lVar28 + 0x28);
    if (uVar29 == 0) {
      auVar49 = (undefined1  [16])0x0;
      goto LAB_140806c10;
    }
    if (uVar29 == 1) {
      auVar49 = (undefined1  [16])0x0;
      uVar31 = 0;
      goto LAB_140806bec;
    }
    pfVar36 = (float *)(pbVar39 + 0x10);
    auVar49 = (undefined1  [16])0x0;
    uVar31 = 0;
    do {
      auVar136._0_4_ = ~-(uint)(pfVar36[-3] < 0.0) & (uint)auVar49._0_4_;
      auVar136._4_4_ = 0;
      auVar136._8_4_ = auVar49._8_4_;
      auVar136._12_4_ = auVar49._12_4_;
      auVar136 = auVar136 | ZEXT416((uint)(auVar49._0_4_ + fVar116) & -(uint)(pfVar36[-3] < 0.0));
      auVar49._0_4_ = ~-(uint)(*pfVar36 < 0.0) & (uint)auVar136._0_4_;
      auVar49._4_4_ = 0;
      auVar49._8_4_ = auVar136._8_4_;
      auVar49._12_4_ = auVar136._12_4_;
      auVar49 = ZEXT416(-(uint)(*pfVar36 < 0.0) & (uint)(auVar136._0_4_ + fVar116)) | auVar49;
      uVar31 = uVar31 + 2;
      pfVar36 = pfVar36 + 6;
    } while ((uVar29 & 0xfffffffffffffffe) != uVar31);
    if ((uVar29 & 1) != 0) {
LAB_140806bec:
      auVar115._0_4_ = ~-(uint)(*(float *)(pbVar39 + uVar31 * 0xc + 4) < 0.0) & (uint)auVar49._0_4_;
      auVar115._4_4_ = 0;
      auVar115._8_4_ = auVar49._8_4_;
      auVar115._12_4_ = auVar49._12_4_;
      auVar49 = auVar115 |
                ZEXT416((uint)(auVar49._0_4_ + fVar116) &
                        -(uint)(*(float *)(pbVar39 + uVar31 * 0xc + 4) < 0.0));
    }
LAB_140806c10:
    if (auVar49._0_4_ / (float)(longlong)uVar29 <= fVar99) {
      uVar32 = pdb_140a92040(uStack_208);
      *puStack_1e8 = uStack_12c;
      pdb_141423b80(&uStack_1b8,uVar32,uStack_200,uStack_1f8,lVar27 + -0x2a8,lVar28,uStack_1f0,
                    uStack_1e0,uStack_1d8,puStack_120,&uStack_2d8,acStack_f1,uStack_210,uStack_1d0,
                    *(undefined8 *)(lVar28 + 0x68),*(undefined4 *)(lVar27 + -0x1c),
                    *(undefined8 *)(lVar28 + 0x70),uStack_1c8);
      uVar29 = uStack_1a8;
      lVar28 = *(longlong *)(lVar42 + -8);
      if ((ulonglong)(*(longlong *)(lVar42 + -0x18) - lVar28) < uStack_1a8) {
        pbStack_110 = pbStack_1b0;
        uStack_118 = uStack_1b8;
        pdb_142d7f1b0(lVar42 + -0x18,lVar28,uStack_1a8,8,8);
        lVar28 = *(longlong *)(lVar42 + -8);
        pbVar39 = pbStack_110;
        uVar31 = uStack_118;
LAB_140806d6c:
        pub_142e32760(lVar28 * 8 + *(longlong *)(lVar42 + -0x10),pbVar39,uVar29 * 8);
      }
      else {
        pbVar39 = pbStack_1b0;
        uVar31 = uStack_1b8;
        if (uStack_1a8 != 0) goto LAB_140806d6c;
      }
      *(ulonglong *)(lVar42 + -8) = lVar28 + uVar29;
      if (uVar31 != 0) {
        pub_1406abac0(pbVar39,uVar31 << 3,8);
      }
    }
    else {
      uVar31 = *(ulonglong *)(lVar28 + 0x10);
      if (uVar29 <= *(ulonglong *)(lVar28 + 0x10)) {
        uVar31 = uVar29;
      }
      if (uVar31 != 0) {
        lStack_1c0 = *(longlong *)(lVar28 + 8);
        lVar28 = uVar29 - 1;
        iVar47 = (int)lVar28;
        iVar58 = (int)((ulonglong)lVar28 >> 0x20);
        fVar91 = 0.0;
        uVar34 = 0;
        auVar49 = (undefined1  [16])0x0;
        uStack_118 = uVar29;
        pbStack_110 = pbVar39;
        while( true ) {
          uVar33 = uVar34 + 1;
          if (uVar34 + 1 < uVar31) {
            uVar33 = uVar31;
          }
          uVar33 = uVar33 - uVar34;
          auVar137 = auVar49;
          if (uVar33 < 0x110) break;
          lStack_128 = CONCAT44(lStack_128._4_4_,fVar91);
          uVar37 = uVar33 & 0xfffffffffffffff0;
          auVar50._8_4_ = (int)uVar37;
          auVar50._0_8_ = uVar37;
          auVar50._12_4_ = (int)(uVar37 >> 0x20);
          lVar88 = auVar49._0_8_;
          lStack_268 = uVar37 + lVar88;
          lStack_260 = auVar50._8_8_ + auVar49._8_8_;
          uVar87 = auVar49._0_4_;
          uVar90 = auVar49._4_4_;
          auVar9._8_4_ = uVar87;
          auVar9._0_8_ = lVar88;
          auVar9._12_4_ = uVar90;
          auVar86._0_8_ = lVar88 + _DAT_143007780;
          auVar86._8_8_ = auVar9._8_8_ + _UNK_143007788;
          auVar10._8_4_ = uVar87;
          auVar10._0_8_ = lVar88;
          auVar10._12_4_ = uVar90;
          auVar89._0_8_ = lVar88 + _DAT_143007790;
          auVar89._8_8_ = auVar10._8_8_ + _UNK_143007798;
          auVar11._8_4_ = uVar87;
          auVar11._0_8_ = lVar88;
          auVar11._12_4_ = uVar90;
          auVar51._0_8_ = lVar88 + _DAT_1430077a0;
          auVar51._8_8_ = auVar11._8_8_ + _UNK_1430077a8;
          auVar12._8_4_ = uVar87;
          auVar12._0_8_ = lVar88;
          auVar12._12_4_ = uVar90;
          auVar85._0_8_ = lVar88 + _DAT_1430077b0;
          auVar85._8_8_ = auVar12._8_8_ + _UNK_1430077b8;
          auVar13._8_4_ = uVar87;
          auVar13._0_8_ = lVar88;
          auVar13._12_4_ = uVar90;
          auVar92._0_8_ = lVar88 + _DAT_1430077c0;
          auVar92._8_8_ = auVar13._8_8_ + _UNK_1430077c8;
          auVar14._8_4_ = uVar87;
          auVar14._0_8_ = lVar88;
          auVar14._12_4_ = uVar90;
          auVar105._0_8_ = lVar88 + _DAT_1430077d0;
          auVar105._8_8_ = auVar14._8_8_ + _UNK_1430077d8;
          auVar15._8_4_ = uVar87;
          auVar15._0_8_ = lVar88;
          auVar15._12_4_ = uVar90;
          auVar107._0_8_ = lVar88 + _DAT_1430077e0;
          auVar107._8_8_ = auVar15._8_8_ + _UNK_1430077e8;
          lVar27 = lVar88 + _DAT_142e4ff80;
          lVar35 = lVar88 + _UNK_142e4ff88;
          lVar40 = 0;
          do {
            iVar98 = (int)((ulonglong)lVar35 >> 0x20);
            auVar74._0_4_ = -(uint)(auVar85._0_4_ == 0);
            lVar79 = auVar85._8_8_;
            auVar74._4_4_ = -(uint)(auVar85._4_4_ == 0);
            auVar74._8_4_ = -(uint)(auVar85._8_4_ == 0);
            auVar74._12_4_ = -(uint)(auVar85._12_4_ == 0);
            auVar100._4_4_ = auVar74._0_4_;
            auVar100._0_4_ = auVar74._4_4_;
            auVar100._8_4_ = auVar74._12_4_;
            auVar100._12_4_ = auVar74._8_4_;
            auVar75._0_4_ = -(uint)(auVar51._0_4_ == 0);
            lVar80 = auVar51._8_8_;
            auVar75._4_4_ = -(uint)(auVar51._4_4_ == 0);
            auVar75._8_4_ = -(uint)(auVar51._8_4_ == 0);
            auVar75._12_4_ = -(uint)(auVar51._12_4_ == 0);
            auVar130._4_4_ = auVar75._0_4_;
            auVar130._0_4_ = auVar75._4_4_;
            auVar130._8_4_ = auVar75._12_4_;
            auVar130._12_4_ = auVar75._8_4_;
            auVar101 = packssdw(auVar100 & auVar74,auVar130 & auVar75);
            auVar16._8_4_ = 0xffffffff;
            auVar16._0_8_ = 0xffffffffffffffff;
            auVar16._12_4_ = 0xffffffff;
            auVar76._0_4_ = -(uint)(auVar89._0_4_ == 0);
            lVar81 = auVar89._8_8_;
            auVar76._4_4_ = -(uint)(auVar89._4_4_ == 0);
            auVar76._8_4_ = -(uint)(auVar89._8_4_ == 0);
            auVar76._12_4_ = -(uint)(auVar89._12_4_ == 0);
            auVar131._4_4_ = auVar76._0_4_;
            auVar131._0_4_ = auVar76._4_4_;
            auVar131._8_4_ = auVar76._12_4_;
            auVar131._12_4_ = auVar76._8_4_;
            auVar77._0_4_ = -(uint)(auVar86._0_4_ == 0);
            lVar82 = auVar86._8_8_;
            auVar77._4_4_ = -(uint)(auVar86._4_4_ == 0);
            auVar77._8_4_ = -(uint)(auVar86._8_4_ == 0);
            auVar77._12_4_ = -(uint)(auVar86._12_4_ == 0);
            auVar117._4_4_ = auVar77._0_4_;
            auVar117._0_4_ = auVar77._4_4_;
            auVar117._8_4_ = auVar77._12_4_;
            auVar117._12_4_ = auVar77._8_4_;
            auVar132 = packssdw(auVar131 & auVar76,auVar117 & auVar77);
            auVar17._8_4_ = 0xffffffff;
            auVar17._0_8_ = 0xffffffffffffffff;
            auVar17._12_4_ = 0xffffffff;
            auVar102 = packssdw(auVar101 ^ auVar16,auVar132 ^ auVar17);
            auVar118._0_4_ = -(uint)((int)lVar27 == 0);
            iVar125 = (int)((ulonglong)lVar27 >> 0x20);
            auVar118._4_4_ = -(uint)(iVar125 == 0);
            auVar118._8_4_ = -(uint)((int)lVar35 == 0);
            auVar118._12_4_ = -(uint)(iVar98 == 0);
            auVar78._4_4_ = auVar118._0_4_;
            auVar78._0_4_ = auVar118._4_4_;
            auVar78._8_4_ = auVar118._12_4_;
            auVar78._12_4_ = auVar118._8_4_;
            auVar119._0_4_ = -(uint)(auVar107._0_4_ == 0);
            lVar126 = auVar107._8_8_;
            auVar119._4_4_ = -(uint)(auVar107._4_4_ == 0);
            auVar119._8_4_ = -(uint)(auVar107._8_4_ == 0);
            auVar119._12_4_ = -(uint)(auVar107._12_4_ == 0);
            auVar133._4_4_ = auVar119._0_4_;
            auVar133._0_4_ = auVar119._4_4_;
            auVar133._8_4_ = auVar119._12_4_;
            auVar133._12_4_ = auVar119._8_4_;
            auVar101 = packssdw(auVar78 & auVar118,auVar133 & auVar119);
            auVar18._8_4_ = 0xffffffff;
            auVar18._0_8_ = 0xffffffffffffffff;
            auVar18._12_4_ = 0xffffffff;
            auVar120._0_4_ = -(uint)(auVar105._0_4_ == 0);
            lVar127 = auVar105._8_8_;
            auVar120._4_4_ = -(uint)(auVar105._4_4_ == 0);
            auVar120._8_4_ = -(uint)(auVar105._8_4_ == 0);
            auVar120._12_4_ = -(uint)(auVar105._12_4_ == 0);
            auVar134._4_4_ = auVar120._0_4_;
            auVar134._0_4_ = auVar120._4_4_;
            auVar134._8_4_ = auVar120._12_4_;
            auVar134._12_4_ = auVar120._8_4_;
            auVar121._0_4_ = -(uint)(auVar92._0_4_ == 0);
            lVar128 = auVar92._8_8_;
            auVar121._4_4_ = -(uint)(auVar92._4_4_ == 0);
            auVar121._8_4_ = -(uint)(auVar92._8_4_ == 0);
            auVar121._12_4_ = -(uint)(auVar92._12_4_ == 0);
            auVar108._4_4_ = auVar121._0_4_;
            auVar108._0_4_ = auVar121._4_4_;
            auVar108._8_4_ = auVar121._12_4_;
            auVar108._12_4_ = auVar121._8_4_;
            auVar132 = packssdw(auVar134 & auVar120,auVar108 & auVar121);
            auVar19._8_4_ = 0xffffffff;
            auVar19._0_8_ = 0xffffffffffffffff;
            auVar19._12_4_ = 0xffffffff;
            auVar132 = packssdw(auVar101 ^ auVar18,auVar132 ^ auVar19);
            auVar109._0_4_ = -(uint)(auVar85._0_4_ == iVar47);
            auVar109._4_4_ = -(uint)(auVar85._4_4_ == iVar58);
            auVar109._8_4_ = -(uint)(auVar85._8_4_ == iVar47);
            auVar109._12_4_ = -(uint)(auVar85._12_4_ == iVar58);
            auVar135._4_4_ = auVar109._0_4_;
            auVar135._0_4_ = auVar109._4_4_;
            auVar135._8_4_ = auVar109._12_4_;
            auVar135._12_4_ = auVar109._8_4_;
            auVar110._0_4_ = -(uint)(auVar51._0_4_ == iVar47);
            auVar110._4_4_ = -(uint)(auVar51._4_4_ == iVar58);
            auVar110._8_4_ = -(uint)(auVar51._8_4_ == iVar47);
            auVar110._12_4_ = -(uint)(auVar51._12_4_ == iVar58);
            auVar122._4_4_ = auVar110._0_4_;
            auVar122._0_4_ = auVar110._4_4_;
            auVar122._8_4_ = auVar110._12_4_;
            auVar122._12_4_ = auVar110._8_4_;
            auVar136 = packssdw(auVar135 & auVar109,auVar122 & auVar110);
            auVar20._8_4_ = 0xffffffff;
            auVar20._0_8_ = 0xffffffffffffffff;
            auVar20._12_4_ = 0xffffffff;
            auVar111._0_4_ = -(uint)(auVar89._0_4_ == iVar47);
            auVar111._4_4_ = -(uint)(auVar89._4_4_ == iVar58);
            auVar111._8_4_ = -(uint)(auVar89._8_4_ == iVar47);
            auVar111._12_4_ = -(uint)(auVar89._12_4_ == iVar58);
            auVar123._4_4_ = auVar111._0_4_;
            auVar123._0_4_ = auVar111._4_4_;
            auVar123._8_4_ = auVar111._12_4_;
            auVar123._12_4_ = auVar111._8_4_;
            auVar112._0_4_ = -(uint)(auVar86._0_4_ == iVar47);
            auVar112._4_4_ = -(uint)(auVar86._4_4_ == iVar58);
            auVar112._8_4_ = -(uint)(auVar86._8_4_ == iVar47);
            auVar112._12_4_ = -(uint)(auVar86._12_4_ == iVar58);
            auVar93._4_4_ = auVar112._0_4_;
            auVar93._0_4_ = auVar112._4_4_;
            auVar93._8_4_ = auVar112._12_4_;
            auVar93._12_4_ = auVar112._8_4_;
            auVar101 = packssdw(auVar123 & auVar111,auVar93 & auVar112);
            auVar21._8_4_ = 0xffffffff;
            auVar21._0_8_ = 0xffffffffffffffff;
            auVar21._12_4_ = 0xffffffff;
            auVar137 = packssdw(auVar136 ^ auVar20,auVar101 ^ auVar21);
            auVar94._0_4_ = -(uint)((int)lVar27 == iVar47);
            auVar94._4_4_ = -(uint)(iVar125 == iVar58);
            auVar94._8_4_ = -(uint)((int)lVar35 == iVar47);
            auVar94._12_4_ = -(uint)(iVar98 == iVar58);
            auVar103._4_4_ = auVar94._0_4_;
            auVar103._0_4_ = auVar94._4_4_;
            auVar103._8_4_ = auVar94._12_4_;
            auVar103._12_4_ = auVar94._8_4_;
            auVar95._0_4_ = -(uint)(auVar107._0_4_ == iVar47);
            auVar95._4_4_ = -(uint)(auVar107._4_4_ == iVar58);
            auVar95._8_4_ = -(uint)(auVar107._8_4_ == iVar47);
            auVar95._12_4_ = -(uint)(auVar107._12_4_ == iVar58);
            auVar113._4_4_ = auVar95._0_4_;
            auVar113._0_4_ = auVar95._4_4_;
            auVar113._8_4_ = auVar95._12_4_;
            auVar113._12_4_ = auVar95._8_4_;
            auVar136 = packssdw(auVar103 & auVar94,auVar113 & auVar95);
            auVar96._0_4_ = -(uint)(auVar105._0_4_ == iVar47);
            auVar96._4_4_ = -(uint)(auVar105._4_4_ == iVar58);
            auVar96._8_4_ = -(uint)(auVar105._8_4_ == iVar47);
            auVar96._12_4_ = -(uint)(auVar105._12_4_ == iVar58);
            auVar114._4_4_ = auVar96._0_4_;
            auVar114._0_4_ = auVar96._4_4_;
            auVar114._8_4_ = auVar96._12_4_;
            auVar114._12_4_ = auVar96._8_4_;
            auVar97._0_4_ = -(uint)(auVar92._0_4_ == iVar47);
            auVar97._4_4_ = -(uint)(auVar92._4_4_ == iVar58);
            auVar97._8_4_ = -(uint)(auVar92._8_4_ == iVar47);
            auVar97._12_4_ = -(uint)(auVar92._12_4_ == iVar58);
            auVar124._4_4_ = auVar97._0_4_;
            auVar124._0_4_ = auVar97._4_4_;
            auVar124._8_4_ = auVar97._12_4_;
            auVar124._12_4_ = auVar97._8_4_;
            auVar115 = packssdw(auVar114 & auVar96,auVar124 & auVar97);
            auVar22._8_4_ = 0xffffffff;
            auVar22._0_8_ = 0xffffffffffffffff;
            auVar22._12_4_ = 0xffffffff;
            auVar101._8_4_ = 0xffffffff;
            auVar101._0_8_ = 0xffffffffffffffff;
            auVar101._12_4_ = 0xffffffff;
            auVar23._8_4_ = 0xffffffff;
            auVar23._0_8_ = 0xffffffffffffffff;
            auVar23._12_4_ = 0xffffffff;
            auVar136 = packssdw(auVar136 ^ auVar22,auVar115 ^ auVar23);
            auVar132 = packsswb(auVar136 & auVar132,auVar137 & auVar102);
            bVar46 = SUB161(auVar132 >> 7,0) & 1;
            bVar53 = SUB161(auVar132 >> 0xf,0) & 1;
            bVar55 = SUB161(auVar132 >> 0x17,0) & 1;
            bVar56 = SUB161(auVar132 >> 0x1f,0) & 1;
            bVar57 = SUB161(auVar132 >> 0x27,0) & 1;
            bVar59 = SUB161(auVar132 >> 0x2f,0) & 1;
            bVar60 = SUB161(auVar132 >> 0x37,0) & 1;
            cVar6 = SUB161(auVar132 >> 0x3f,0) << 7;
            bVar61 = SUB161(auVar132 >> 0x47,0) & 1;
            bVar62 = SUB161(auVar132 >> 0x4f,0) & 1;
            bVar63 = SUB161(auVar132 >> 0x57,0) & 1;
            bVar64 = SUB161(auVar132 >> 0x5f,0) & 1;
            bVar65 = SUB161(auVar132 >> 0x67,0) & 1;
            bVar66 = SUB161(auVar132 >> 0x6f,0) & 1;
            bVar67 = SUB161(auVar132 >> 0x77,0) & 1;
            lVar1 = lVar40 + -0x10;
            if (((((((((((((((bVar46 != 0 || bVar53 != 0) || bVar55 != 0) || bVar56 != 0) ||
                          bVar57 != 0) || bVar59 != 0) || bVar60 != 0) || cVar6 != '\0') ||
                      bVar61 != 0) || bVar62 != 0) || bVar63 != 0) || bVar64 != 0) || bVar65 != 0)
                 || bVar66 != 0) || bVar67 != 0) || auVar132[0xf] < '\0') break;
            lVar71 = (longlong)DAT_1430077f0;
            lVar27 = lVar27 + lVar71;
            lVar83 = DAT_1430077f0._8_8_;
            lVar35 = lVar35 + lVar83;
            auVar107._0_8_ = auVar107._0_8_ + lVar71;
            auVar107._8_8_ = lVar126 + lVar83;
            auVar105._0_8_ = auVar105._0_8_ + lVar71;
            auVar105._8_8_ = lVar127 + lVar83;
            auVar92._0_8_ = auVar92._0_8_ + lVar71;
            auVar92._8_8_ = lVar128 + lVar83;
            auVar85._0_8_ = auVar85._0_8_ + lVar71;
            auVar85._8_8_ = lVar79 + lVar83;
            auVar51._0_8_ = auVar51._0_8_ + lVar71;
            auVar51._8_8_ = lVar80 + lVar83;
            auVar89._0_8_ = auVar89._0_8_ + lVar71;
            auVar89._8_8_ = lVar81 + lVar83;
            auVar86._0_8_ = auVar86._0_8_ + lVar71;
            auVar86._8_8_ = lVar82 + lVar83;
            bVar45 = 0x10 - uVar37 != lVar40;
            lVar40 = lVar1;
          } while (bVar45);
          pbVar39 = pbStack_110;
          uVar29 = uStack_118;
          fVar99 = _DAT_142e36f50;
          fVar129 = _DAT_142e3787c;
          auStack_278 = auVar49;
          fVar116 = _DAT_142e36f28;
          if (((((((((((((((bVar46 == 0 && bVar53 == 0) && bVar55 == 0) && bVar56 == 0) &&
                        bVar57 == 0) && bVar59 == 0) && bVar60 == 0) && cVar6 == '\0') &&
                    bVar61 == 0) && bVar62 == 0) && bVar63 == 0) && bVar64 == 0) && bVar65 == 0) &&
               bVar66 == 0) && bVar67 == 0) && -1 < auVar132[0xf]) {
            auVar137._8_8_ = lStack_260;
            auVar137._0_8_ = lStack_268;
            if (uVar33 == uVar37) goto LAB_140806db0;
            break;
          }
          auVar132 = psllw(auVar132,7);
          auVar54 = SUB1615((undefined1  [16])0x0,1);
          bVar46 = -(auVar132[0] < '\0') & DAT_142f97e80;
          bVar53 = -(auVar132[1] < '\0') & UNK_142f97e81;
          bVar55 = -(auVar132[2] < '\0') & UNK_142f97e82;
          bVar56 = -(auVar132[3] < '\0') & UNK_142f97e83;
          bVar57 = -(auVar132[4] < '\0') & UNK_142f97e84;
          bVar59 = -(auVar132[5] < '\0') & UNK_142f97e85;
          bVar60 = -(auVar132[6] < '\0') & UNK_142f97e86;
          bVar61 = -(auVar132[7] < '\0') & UNK_142f97e87;
          bVar62 = -(auVar132[8] < '\0') & UNK_142f97e88;
          bVar63 = -(auVar132[9] < auVar54[8]) & UNK_142f97e89;
          bVar64 = -(auVar132[10] < auVar54[9]) & UNK_142f97e8a;
          bVar65 = -(auVar132[0xb] < auVar54[10]) & UNK_142f97e8b;
          bVar66 = -(auVar132[0xc] < auVar54[0xb]) & UNK_142f97e8c;
          bVar67 = -(auVar132[0xd] < auVar54[0xc]) & UNK_142f97e8d;
          bVar68 = -(auVar132[0xe] < auVar54[0xd]) & UNK_142f97e8e;
          bVar69 = -(auVar132[0xf] < auVar54[0xe]) & UNK_142f97e8f;
          uStack_108 = CONCAT13(bVar56,CONCAT12(bVar55,CONCAT11(bVar53,bVar46)));
          uStack_104 = CONCAT13(bVar61,CONCAT12(bVar60,CONCAT11(bVar59,bVar57)));
          uStack_100 = CONCAT13(bVar65,CONCAT12(bVar64,CONCAT11(bVar63,bVar62)));
          uStack_fc = CONCAT13(bVar69,CONCAT12(bVar68,CONCAT11(bVar67,bVar66)));
          uVar38 = (uint)bVar53;
          if (bVar53 < bVar46) {
            uVar38 = uStack_108;
          }
          if ((byte)uVar38 <= bVar55) {
            uVar38 = (uint)bVar55;
          }
          if ((byte)uVar38 <= bVar56) {
            uVar38 = (uint)bVar56;
          }
          if ((byte)uVar38 <= bVar57) {
            uVar38 = uStack_104;
          }
          if ((byte)uVar38 <= bVar59) {
            uVar38 = (uint)bVar59;
          }
          if ((byte)uVar38 <= bVar60) {
            uVar38 = (uint)bVar60;
          }
          if ((byte)uVar38 <= bVar61) {
            uVar38 = (uint)bVar61;
          }
          if ((byte)uVar38 <= bVar62) {
            uVar38 = uStack_100;
          }
          if ((byte)uVar38 <= bVar63) {
            uVar38 = (uint)bVar63;
          }
          if ((byte)uVar38 <= bVar64) {
            uVar38 = (uint)bVar64;
          }
          if ((byte)uVar38 <= bVar65) {
            uVar38 = (uint)bVar65;
          }
          if ((byte)uVar38 <= bVar66) {
            uVar38 = uStack_fc;
          }
          bVar46 = (byte)uVar38;
          if ((byte)uVar38 <= bVar67) {
            bVar46 = bVar67;
          }
          if (bVar46 <= bVar68) {
            bVar46 = bVar68;
          }
          if (bVar46 <= bVar69) {
            bVar46 = bVar69;
          }
          lVar27 = ((uVar34 + (byte)(0x10 - bVar46)) - lVar1) + -0x10;
          lVar35 = ((ulonglong)(byte)(0x10 - bVar46) - lVar1) + -0xf;
          auVar52._8_4_ = (int)lVar35;
          auVar52._0_8_ = lVar35;
          auVar52._12_4_ = (int)((ulonglong)lVar35 >> 0x20);
          auVar137._0_8_ = lVar88 + lVar35;
          auVar137._8_8_ = auVar49._8_8_ + auVar52._8_8_;
LAB_140807299:
          uVar34 = auVar137._0_8_;
          if (uVar29 <= uVar34) {
                    /* WARNING: Subroutine does not return */
            pdb_142dc81f2(uVar34,uVar29,&UNK_143007910);
          }
          uVar33 = *(ulonglong *)(pbVar39 + lVar27 * 0xc);
          fVar4 = *(float *)(pbVar39 + lVar27 * 0xc + 8);
          fVar70 = (float)uVar33 - *(float *)(pbVar39 + uVar34 * 0xc);
          fVar84 = fVar4 - *(float *)(pbVar39 + uVar34 * 0xc + 8);
          fVar48 = SQRT(fVar84 * fVar84 + fVar70 * fVar70);
          fVar91 = fVar91 + fVar48;
          if (fVar99 < fVar91) {
            fVar91 = *(float *)(lStack_1c0 + lVar27 * 4);
            fVar104 = (float)uVar33 + _DAT_143007800;
            fVar106 = (float)(uVar33 >> 0x20) + _UNK_143007804;
            fVar48 = fVar116 / fVar48;
            auVar24._4_8_ = uVar33 >> 0x20;
            auVar24._0_4_ = fVar70 * fVar48;
            lStack_128 = lVar28;
            pdb_140de88f0(&uStack_1b8,auVar24._0_8_,fVar84 * fVar48);
            pbVar39 = pbStack_1b0;
            uVar29 = uStack_1b8;
            pdb_14007ee60();
            uVar32 = pdb_140ed5970(*puStack_120);
            plVar44 = (longlong *)puStack_120[1];
            if (plVar44 == (longlong *)0x0) {
              plVar44 = (longlong *)puStack_120[2];
            }
            lVar28 = plVar44[2];
            if ((ulonglong)(*plVar44 - lVar28) < 0x68) {
              pdb_142d7f1b0(plVar44,lVar28,0x68,1,1);
            }
            lVar27 = plVar44[1];
            *(code **)(lVar27 + lVar28) = pdb_1414143a0;
            puVar3 = (ulonglong *)(lVar27 + 8 + lVar28);
            *puVar3 = uVar29;
            puVar3[1] = (ulonglong)pbVar39;
            *(ulonglong *)(lVar27 + 0x18 + lVar28) = CONCAT44(fVar106,fVar104);
            *(float *)(lVar27 + 0x20 + lVar28) = fVar4;
            *(undefined4 *)(lVar27 + 0x24 + lVar28) = 0x3f800000;
            *(float *)(lVar27 + 0x28 + lVar28) = fVar91 + fVar129;
            *(undefined4 *)(lVar27 + 0x2c + lVar28) = 0x3f800000;
            *(undefined4 *)(lVar27 + 0x38 + lVar28) = 0;
            *(undefined8 *)(lVar27 + 0x40 + lVar28) = 0x7e4dd4fe71bf7165;
            *(undefined1 *)(lVar27 + 0x48 + lVar28) = 0x14;
            *(undefined8 *)(lVar27 + 0x58 + lVar28) = uVar32;
            plVar44[2] = lVar28 + 0x68;
            lVar28 = *(longlong *)(lVar42 + -8);
            if (lVar28 == *(longlong *)(lVar42 + -0x18)) {
              pdb_142db0920(lVar42 + -0x18);
            }
            *(undefined8 *)(*(longlong *)(lVar42 + -0x10) + lVar28 * 8) = uVar32;
            *(longlong *)(lVar42 + -8) = lVar28 + 1;
            fVar91 = 0.0;
            pbVar39 = pbStack_110;
            uVar29 = uStack_118;
            lVar28 = lStack_128;
          }
          uVar34 = auVar137._8_8_;
          auVar49 = auVar137;
          if (uVar31 <= uVar34) goto LAB_140806db0;
        }
        do {
          lVar27 = auVar137._8_8_;
          lVar35 = auVar137._0_8_;
          auVar137._0_8_ = lVar35 - auVar101._0_8_;
          auVar137._8_8_ = lVar27 - auVar101._8_8_;
          if ((lVar35 != 0) && (lVar35 != lVar28)) goto LAB_140807299;
          if (uVar31 <= lVar27 + 1U) break;
        } while( true );
      }
    }
    goto LAB_140806db0;
  }
LAB_140806a60:
  auVar73[0] = -(*pcVar2 == auVar101[0]);
  auVar73[1] = -(pcVar2[1] == auVar101[1]);
  auVar73[2] = -(pcVar2[2] == auVar101[2]);
  auVar73[3] = -(pcVar2[3] == auVar101[3]);
  auVar73[4] = -(pcVar2[4] == auVar101[4]);
  auVar73[5] = -(pcVar2[5] == auVar101[5]);
  auVar73[6] = -(pcVar2[6] == auVar101[6]);
  auVar73[7] = -(pcVar2[7] == auVar101[7]);
  auVar73[8] = -(pcVar2[8] == auVar101[8]);
  auVar73[9] = -(pcVar2[9] == auVar101[9]);
  auVar73[10] = -(pcVar2[10] == auVar101[10]);
  auVar73[0xb] = -(pcVar2[0xb] == auVar101[0xb]);
  auVar73[0xc] = -(pcVar2[0xc] == auVar101[0xc]);
  auVar73[0xd] = -(pcVar2[0xd] == auVar101[0xd]);
  auVar73[0xe] = -(pcVar2[0xe] == auVar101[0xe]);
  auVar73[0xf] = -(pcVar2[0xf] == auVar101[0xf]);
  if ((((((((((((((((SUB161(auVar73 >> 7,0) & 1) != 0 || (SUB161(auVar73 >> 0xf,0) & 1) != 0) ||
                  (SUB161(auVar73 >> 0x17,0) & 1) != 0) || (SUB161(auVar73 >> 0x1f,0) & 1) != 0) ||
                (SUB161(auVar73 >> 0x27,0) & 1) != 0) || (SUB161(auVar73 >> 0x2f,0) & 1) != 0) ||
              (SUB161(auVar73 >> 0x37,0) & 1) != 0) || (SUB161(auVar73 >> 0x3f,0) & 1) != 0) ||
            (SUB161(auVar73 >> 0x47,0) & 1) != 0) || (SUB161(auVar73 >> 0x4f,0) & 1) != 0) ||
          (SUB161(auVar73 >> 0x57,0) & 1) != 0) || (SUB161(auVar73 >> 0x5f,0) & 1) != 0) ||
        (SUB161(auVar73 >> 0x67,0) & 1) != 0) || (SUB161(auVar73 >> 0x6f,0) & 1) != 0) ||
      (SUB161(auVar73 >> 0x77,0) & 1) != 0) || auVar73[0xf] < '\0') goto LAB_140806a80;
  uVar29 = uVar29 + lVar35 + 0x10;
  lVar35 = lVar35 + 0x10;
  goto LAB_140806a1a;
code_r0x000140806a53:
  uVar41 = (ushort)(uVar38 - 1) & (ushort)uVar38;
  uVar38 = CONCAT22((short)(uVar38 - 1 >> 0x10),uVar41);
  if (uVar41 == 0) goto LAB_140806a60;
  goto LAB_140806a34;
LAB_140806a80:
  if (*_DAT_143ca8e90 != 0) {
    pplStack_258 = &plStack_248;
    pcStack_250 = pdb_141422e40;
    uStack_1b8 = 0;
    pbStack_1b0 = &UNK_14300788a;
    uStack_1a8 = 0x31;
    uStack_1a0 = 0;
    puStack_198 = &UNK_143007810;
    uStack_190 = 0x3e;
    uStack_188 = 1;
    puStack_180 = &UNK_14300788a;
    uStack_178 = 0x31;
    uStack_170 = 0xa300000001;
    puStack_168 = &UNK_1430078d8;
    ppplStack_160 = &pplStack_258;
    pdb_140f332f0(&uStack_f2,&uStack_1b8);
  }
LAB_140806db0:
  lVar27 = lStack_2b8;
  lVar28 = lStack_2b8 + 0x18;
  pdb_140e9a350();
  LOCK();
  bVar45 = *(char *)(lVar27 + 0x18) == '\x01';
  if (bVar45) {
    *(char *)(lVar27 + 0x18) = '\0';
  }
  UNLOCK();
  if (!bVar45) {
    pdb_142dbcef0(lVar28,0);
  }
  lVar27 = lStack_148;
  lVar28 = lStack_148;
  lVar35 = lStack_140;
  if (lStack_140 != 0) goto LAB_1408067d2;
LAB_140806800:
  if ((lVar28 == 0) || (lVar28 == lStack_220)) {
    if ((acStack_f1[0] != '\0') && (*_DAT_143ca8e90 != 0)) {
      uStack_1b8 = 0;
      pbStack_1b0 = &UNK_14300788a;
      uStack_1a8 = 0x31;
      uStack_1a0 = 0;
      puStack_198 = &UNK_143007810;
      uStack_190 = 0x3e;
      uStack_188 = 1;
      puStack_180 = &UNK_14300788a;
      uStack_178 = 0x31;
      uStack_170 = 0xa900000001;
      puStack_168 = &UNK_143007868;
      ppplStack_160 = (longlong ***)0x45;
      pdb_140f332f0(&uStack_f2,&uStack_1b8);
    }
    return;
  }
  lStack_148 = lVar28 + 0x80;
  lStack_140 = 0;
  goto LAB_140806835;
}

