// VA 0x140b531e0, PDB extent 6492 bytes
// country_core::systems::wall::shapes::circle::ui_rotate_circle::ui_rotate_circle
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/wall/shapes/circle/ui_rotate_circle.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::systems::wall::shapes::circle::ui_rotate_circle::ui_rotate_circle
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/wall/shapes/circle/ui_rotate_circle.rs
   Extent: 6492 */

void pdb_140b531e0(undefined8 *param_1,undefined8 *param_2,longlong *param_3,longlong param_4,
                  undefined8 *param_5,undefined8 *param_6,undefined8 *param_7,longlong *param_8,
                  undefined8 param_9,longlong *param_10,longlong *param_11,undefined8 param_12,
                  longlong *param_13,float *param_14,int *param_15,longlong *param_16)

{
  float *pfVar1;
  undefined4 uVar2;
  undefined1 uVar3;
  char *pcVar4;
  uint *puVar5;
  undefined8 *puVar6;
  undefined4 *puVar7;
  code *pcVar8;
  uint uVar9;
  uint uVar10;
  bool bVar11;
  undefined2 uVar12;
  undefined2 uVar13;
  ulonglong uVar14;
  float *pfVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  byte *pbVar18;
  longlong lVar19;
  longlong lVar20;
  longlong lVar21;
  ulonglong *puVar22;
  longlong lVar23;
  uint uVar24;
  ushort uVar25;
  longlong lVar26;
  longlong lVar27;
  byte bVar28;
  undefined4 uVar29;
  int iVar30;
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  float fVar33;
  float fVar34;
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  int iVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  undefined8 in_stack_fffffffffffffce0;
  undefined4 uVar50;
  longlong lStack_308;
  longlong lStack_300;
  undefined4 *puStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined4 *puStack_2e0;
  longlong lStack_2d8;
  undefined8 uStack_2d0;
  ulonglong uStack_2c8;
  undefined8 uStack_2c0;
  float fStack_2b0;
  float fStack_2ac;
  undefined4 uStack_2a8;
  float fStack_2a4;
  undefined2 uStack_2a0;
  undefined2 uStack_29e;
  undefined4 uStack_29c;
  undefined1 uStack_298;
  undefined1 uStack_297;
  undefined2 uStack_296;
  float fStack_294;
  undefined1 uStack_290;
  undefined1 uStack_28f;
  undefined2 uStack_28e;
  undefined4 uStack_28c;
  undefined8 uStack_288;
  code *pcStack_280;
  ulonglong uStack_278;
  undefined8 uStack_270;
  undefined4 uStack_268;
  undefined2 uStack_264;
  undefined4 uStack_260;
  undefined4 uStack_248;
  undefined1 uStack_230;
  undefined1 uStack_220;
  undefined8 uStack_21f;
  undefined4 uStack_217;
  undefined2 uStack_213;
  undefined1 uStack_211;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined2 uStack_200;
  float fStack_1a4;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  undefined8 uStack_198;
  float *pfStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined1 uStack_178;
  undefined7 uStack_177;
  undefined1 uStack_170;
  undefined4 uStack_16f;
  undefined2 uStack_16b;
  undefined1 uStack_169;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  ulonglong uStack_150;
  ulonglong uStack_148;
  float fStack_13c;
  undefined4 uStack_138;
  float fStack_134;
  float fStack_130;
  float fStack_12c;
  ulonglong uStack_128;
  longlong lStack_120;
  longlong lStack_118;
  ulonglong *puStack_110;
  longlong lStack_108;
  byte *pbStack_100;
  undefined1 uStack_f2;
  undefined1 uStack_f1;
  undefined8 uStack_f0;
  
  uVar50 = (undefined4)((ulonglong)in_stack_fffffffffffffce0 >> 0x20);
  uStack_f0 = 0xfffffffffffffffe;
  pcVar4 = (char *)*param_1;
  if ((*pcVar4 != '\0') || (1 < *(int *)(pcVar4 + 8) - 1U)) {
    *param_15 = 0;
    return;
  }
  uStack_2f0 = *(undefined8 *)(param_4 + 0x40);
  puStack_2e0 = *(undefined4 **)(param_4 + 0x50);
  uStack_19c = *(undefined4 *)(param_4 + 0x5c);
  uStack_2e8 = *(undefined8 *)(param_4 + 0x60);
  pbStack_100 = (byte *)*param_5;
  uStack_198 = param_5[4];
  puVar5 = (uint *)*param_6;
  puVar6 = (undefined8 *)param_6[4];
  pfStack_190 = (float *)param_6[8];
  lStack_300 = param_11[4];
  lStack_308 = *(longlong *)(pcVar4 + 0x10);
  param_3 = (longlong *)*param_3;
  uStack_2a8._0_2_ = (undefined2)lStack_308;
  uStack_2a8._2_2_ = (undefined2)((ulonglong)lStack_308 >> 0x10);
  fStack_2a4 = (float)((ulonglong)lStack_308 >> 0x20);
  puStack_2f8 = (undefined4 *)param_11[6];
  uStack_1a0 = *(undefined4 *)((longlong)param_11 + 0x3c);
  lStack_108 = lStack_308;
  if (param_3[3] != 0) {
    uVar14 = pdb_1400af0a0(param_3 + 4,&uStack_2a8);
    lVar23 = *param_3;
    bVar28 = (byte)(uVar14 >> 0x39);
    auVar31 = ZEXT216(CONCAT11(bVar28,bVar28));
    auVar31 = pshuflw(auVar31,auVar31,0);
    lVar21 = 0;
    while( true ) {
      uVar14 = uVar14 & param_3[1];
      auVar35 = *(undefined1 (*) [16])(lVar23 + uVar14);
      auVar38[0] = -(auVar35[0] == auVar31[0]);
      auVar38[1] = -(auVar35[1] == auVar31[1]);
      auVar38[2] = -(auVar35[2] == auVar31[2]);
      auVar38[3] = -(auVar35[3] == auVar31[3]);
      auVar38[4] = -(auVar35[4] == auVar31[4]);
      auVar38[5] = -(auVar35[5] == auVar31[5]);
      auVar38[6] = -(auVar35[6] == auVar31[6]);
      auVar38[7] = -(auVar35[7] == auVar31[7]);
      auVar38[8] = -(auVar35[8] == auVar31[0]);
      auVar38[9] = -(auVar35[9] == auVar31[1]);
      auVar38[10] = -(auVar35[10] == auVar31[2]);
      auVar38[0xb] = -(auVar35[0xb] == auVar31[3]);
      auVar38[0xc] = -(auVar35[0xc] == auVar31[4]);
      auVar38[0xd] = -(auVar35[0xd] == auVar31[5]);
      auVar38[0xe] = -(auVar35[0xe] == auVar31[6]);
      auVar38[0xf] = -(auVar35[0xf] == auVar31[7]);
      uVar25 = (ushort)(SUB161(auVar38 >> 7,0) & 1) | (ushort)(SUB161(auVar38 >> 0xf,0) & 1) << 1 |
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
               (ushort)(SUB161(auVar38 >> 0x77,0) & 1) << 0xe | (ushort)(auVar38[0xf] >> 7) << 0xf;
      uVar24 = (uint)uVar25;
      while (uVar25 != 0) {
        uVar9 = 0;
        for (uVar10 = uVar24; (uVar10 & 1) == 0; uVar10 = uVar10 >> 1 | 0x80000000) {
          uVar9 = uVar9 + 1;
        }
        lVar26 = (uVar9 + uVar14 & param_3[1]) * -0x2b0;
        if (lStack_108 == *(longlong *)(lVar23 + -0x2b0 + lVar26)) {
          lVar23 = lVar23 + lVar26;
          if ((*(ulonglong *)(lVar23 + -0x298) < 2) || (*(float *)(lVar23 + -0x278) <= 0.0)) {
                    /* WARNING: Subroutine does not return */
            pdb_142dc83b0(&UNK_143059e50,0x32,&UNK_143059d08);
          }
          if (*(int *)(lVar23 + -0x50) != 0) {
            return;
          }
          uStack_2c8 = *(ulonglong *)(lVar23 + -0x4c);
          uStack_2c0 = *(undefined8 *)(lVar23 + -0x44);
          uStack_188 = *(undefined8 *)(lVar23 + -0x4c);
          uStack_180 = *(undefined8 *)(lVar23 + -0x44);
          uStack_2a8._0_2_ = (undefined2)lStack_108;
          uStack_2a8._2_2_ = (undefined2)((ulonglong)lStack_108 >> 0x10);
          fStack_2a4 = (float)((ulonglong)lStack_108 >> 0x20);
          uVar14 = pdb_1400af0a0(param_3 + 4,&uStack_2a8);
          fVar43 = _DAT_142e36f28;
          lVar21 = *param_3;
          bVar28 = (byte)(uVar14 >> 0x39);
          auVar31 = ZEXT216(CONCAT11(bVar28,bVar28));
          auVar31 = pshuflw(auVar31,auVar31,0);
          lVar26 = 0;
          goto LAB_140b534b2;
        }
        uVar25 = (ushort)(uVar24 - 1) & (ushort)uVar24;
        uVar24 = CONCAT22((short)(uVar24 - 1 >> 0x10),uVar25);
      }
      auVar36[0] = -(auVar35[0] == -1);
      auVar36[1] = -(auVar35[1] == -1);
      auVar36[2] = -(auVar35[2] == -1);
      auVar36[3] = -(auVar35[3] == -1);
      auVar36[4] = -(auVar35[4] == -1);
      auVar36[5] = -(auVar35[5] == -1);
      auVar36[6] = -(auVar35[6] == -1);
      auVar36[7] = -(auVar35[7] == -1);
      auVar36[8] = -(auVar35[8] == -1);
      auVar36[9] = -(auVar35[9] == -1);
      auVar36[10] = -(auVar35[10] == -1);
      auVar36[0xb] = -(auVar35[0xb] == -1);
      auVar36[0xc] = -(auVar35[0xc] == -1);
      auVar36[0xd] = -(auVar35[0xd] == -1);
      auVar36[0xe] = -(auVar35[0xe] == -1);
      auVar36[0xf] = -(auVar35[0xf] == -1);
      if ((((((((((((((((SUB161(auVar36 >> 7,0) & 1) != 0 || (SUB161(auVar36 >> 0xf,0) & 1) != 0) ||
                      (SUB161(auVar36 >> 0x17,0) & 1) != 0) || (SUB161(auVar36 >> 0x1f,0) & 1) != 0)
                    || (SUB161(auVar36 >> 0x27,0) & 1) != 0) || (SUB161(auVar36 >> 0x2f,0) & 1) != 0
                   ) || (SUB161(auVar36 >> 0x37,0) & 1) != 0) ||
                 (SUB161(auVar36 >> 0x3f,0) & 1) != 0) || (SUB161(auVar36 >> 0x47,0) & 1) != 0) ||
               (SUB161(auVar36 >> 0x4f,0) & 1) != 0) || (SUB161(auVar36 >> 0x57,0) & 1) != 0) ||
             (SUB161(auVar36 >> 0x5f,0) & 1) != 0) || (SUB161(auVar36 >> 0x67,0) & 1) != 0) ||
           (SUB161(auVar36 >> 0x6f,0) & 1) != 0) || (SUB161(auVar36 >> 0x77,0) & 1) != 0) ||
          auVar36[0xf] < '\0') break;
      uVar14 = uVar14 + lVar21 + 0x10;
      lVar21 = lVar21 + 0x10;
    }
  }
                    /* WARNING: Subroutine does not return */
  pdb_142dc8150(&UNK_143059d20);
LAB_140b534b2:
  uVar14 = uVar14 & param_3[1];
  auVar35 = *(undefined1 (*) [16])(lVar21 + uVar14);
  auVar39[0] = -(auVar35[0] == auVar31[0]);
  auVar39[1] = -(auVar35[1] == auVar31[1]);
  auVar39[2] = -(auVar35[2] == auVar31[2]);
  auVar39[3] = -(auVar35[3] == auVar31[3]);
  auVar39[4] = -(auVar35[4] == auVar31[4]);
  auVar39[5] = -(auVar35[5] == auVar31[5]);
  auVar39[6] = -(auVar35[6] == auVar31[6]);
  auVar39[7] = -(auVar35[7] == auVar31[7]);
  auVar39[8] = -(auVar35[8] == auVar31[0]);
  auVar39[9] = -(auVar35[9] == auVar31[1]);
  auVar39[10] = -(auVar35[10] == auVar31[2]);
  auVar39[0xb] = -(auVar35[0xb] == auVar31[3]);
  auVar39[0xc] = -(auVar35[0xc] == auVar31[4]);
  auVar39[0xd] = -(auVar35[0xd] == auVar31[5]);
  auVar39[0xe] = -(auVar35[0xe] == auVar31[6]);
  auVar39[0xf] = -(auVar35[0xf] == auVar31[7]);
  uVar25 = (ushort)(SUB161(auVar39 >> 7,0) & 1) | (ushort)(SUB161(auVar39 >> 0xf,0) & 1) << 1 |
           (ushort)(SUB161(auVar39 >> 0x17,0) & 1) << 2 |
           (ushort)(SUB161(auVar39 >> 0x1f,0) & 1) << 3 |
           (ushort)(SUB161(auVar39 >> 0x27,0) & 1) << 4 |
           (ushort)(SUB161(auVar39 >> 0x2f,0) & 1) << 5 |
           (ushort)(SUB161(auVar39 >> 0x37,0) & 1) << 6 |
           (ushort)(SUB161(auVar39 >> 0x3f,0) & 1) << 7 |
           (ushort)(SUB161(auVar39 >> 0x47,0) & 1) << 8 |
           (ushort)(SUB161(auVar39 >> 0x4f,0) & 1) << 9 |
           (ushort)(SUB161(auVar39 >> 0x57,0) & 1) << 10 |
           (ushort)(SUB161(auVar39 >> 0x5f,0) & 1) << 0xb |
           (ushort)(SUB161(auVar39 >> 0x67,0) & 1) << 0xc |
           (ushort)(SUB161(auVar39 >> 0x6f,0) & 1) << 0xd |
           (ushort)(SUB161(auVar39 >> 0x77,0) & 1) << 0xe | (ushort)(auVar39[0xf] >> 7) << 0xf;
  uVar24 = (uint)uVar25;
  while (uVar25 != 0) {
    uVar9 = 0;
    for (uVar10 = uVar24; (uVar10 & 1) == 0; uVar10 = uVar10 >> 1 | 0x80000000) {
      uVar9 = uVar9 + 1;
    }
    lVar27 = (uVar9 + uVar14 & param_3[1]) * -0x2b0;
    if (lStack_108 == *(longlong *)(lVar21 + -0x2b0 + lVar27)) {
      lVar21 = lVar21 + lVar27;
      if ((*(ulonglong *)(lVar21 + -0x298) < 2) || (*(float *)(lVar21 + -0x278) <= 0.0)) {
                    /* WARNING: Subroutine does not return */
        pdb_142dc83b0(&UNK_143059e50,0x32,&UNK_143059d38);
      }
      if (*(longlong *)(lVar21 + -0x260) == 0) {
                    /* WARNING: Subroutine does not return */
        pdb_142dc81f2(0,0,&UNK_143059d68);
      }
      pfVar15 = *(float **)(lVar21 + -0x268);
      pfVar1 = pfVar15 + *(longlong *)(lVar21 + -0x260) * 3;
      puStack_110 = (ulonglong *)CONCAT44(puStack_110._4_4_,(float)*puVar5);
      fVar44 = pfVar15[2];
      lStack_2d8 = *puVar6;
      fVar42 = _DAT_1430595b0;
      fVar33 = *pfVar15;
      fVar46 = pfVar15[1];
      do {
        fVar40 = (float)*(undefined8 *)pfVar15;
        fVar41 = (float)((ulonglong)*(undefined8 *)pfVar15 >> 0x20);
        fVar34 = pfVar15[2];
        fVar47 = fVar34 * *(float *)(puVar6 + 0x14) +
                 fVar41 * *(float *)(puVar6 + 0x12) + fVar40 * *(float *)(puVar6 + 0x10) +
                 *(float *)(puVar6 + 0x16);
        fVar48 = fVar34 * *(float *)((longlong)puVar6 + 0xa4) +
                 fVar41 * *(float *)((longlong)puVar6 + 0x94) +
                 fVar40 * *(float *)((longlong)puVar6 + 0x84) + *(float *)((longlong)puVar6 + 0xb4);
        fVar49 = fVar34 * *(float *)(puVar6 + 0x15) +
                 fVar41 * *(float *)(puVar6 + 0x13) + fVar40 * *(float *)(puVar6 + 0x11) +
                 *(float *)(puVar6 + 0x17);
        uStack_2d0._4_4_ = (float)((ulonglong)puVar6[1] >> 0x20);
        fVar47 = (((fVar49 * *(float *)(puVar6 + 4) +
                    fVar48 * *(float *)(puVar6 + 2) + fVar47 * (float)lStack_2d8 +
                   *(float *)(puVar6 + 6)) /
                  (fVar49 * *(float *)((longlong)puVar6 + 0x2c) +
                   fVar48 * *(float *)((longlong)puVar6 + 0x1c) + fVar47 * uStack_2d0._4_4_ +
                  *(float *)((longlong)puVar6 + 0x3c))) * _DAT_142e36f50 + _DAT_142e36f50) *
                 (float)*puVar5;
        if (fVar42 <= fVar47) {
          fVar40 = fVar33;
          fVar41 = fVar46;
        }
        fVar44 = (float)(~-(uint)(fVar47 < fVar42) & (uint)fVar44 |
                        (uint)fVar34 & -(uint)(fVar47 < fVar42));
        if (fVar42 <= fVar47) {
          fVar47 = fVar42;
        }
        fVar42 = fVar47;
        pfVar15 = pfVar15 + 3;
        fVar33 = fVar40;
        fVar46 = fVar41;
      } while (pfVar15 != pfVar1);
      fVar34 = (float)uStack_188;
      fVar47 = (float)((ulonglong)uStack_188 >> 0x20);
      fVar48 = fVar40 - fVar34;
      fVar42 = fVar44 - fVar47;
      fVar49 = _DAT_142e36f28 / SQRT(fVar42 * fVar42 + fVar48 * fVar48);
      fVar48 = fVar48 * fVar49;
      fVar49 = fVar49 * fVar42;
      uStack_2d0 = puVar6[1];
      fStack_2b0 = fVar48;
      fStack_2ac = fVar49;
      pdb_140df4540(&uStack_2a8,&fStack_2b0);
      fVar33 = fStack_2a4;
      fVar42 = (float)CONCAT22(uStack_2a8._2_2_,(undefined2)uStack_2a8);
      fVar44 = fVar44 + (float)CONCAT22(uStack_29e,uStack_2a0);
      pdb_140de88f0(&uStack_2a8);
      fVar46 = fStack_2a4;
      uVar13 = uStack_2a8._2_2_;
      uVar12 = (undefined2)uStack_2a8;
      uStack_178 = SUB81(&lStack_308,0);
      uStack_177 = (undefined7)((ulonglong)&lStack_308 >> 8);
      uStack_170 = 0xf0;
      uStack_16f = 0x140c04e;
      uStack_16b = 0;
      uStack_169 = 0;
      pdb_140f60760(&uStack_2a8,&UNK_143059d80,&uStack_178);
      uStack_128 = CONCAT44(fStack_2a4,CONCAT22(uStack_2a8._2_2_,(undefined2)uStack_2a8));
      lStack_120 = CONCAT44(uStack_29c,CONCAT22(uStack_29e,uStack_2a0));
      lStack_118 = CONCAT44(fStack_294,CONCAT22(uStack_296,CONCAT11(uStack_297,uStack_298)));
      uStack_f2 = 1;
      fStack_130 = fVar48;
      fStack_12c = fVar49;
      pdb_140df4540(&uStack_2a8,&fStack_130);
      fVar40 = fVar40 + fVar42;
      fVar41 = fVar41 + fVar33;
      fVar42 = (float)CONCAT22(uStack_29e,uStack_2a0) * _DAT_142e37988 + fVar44;
      fVar33 = (float)CONCAT22(uStack_2a8._2_2_,(undefined2)uStack_2a8) * _DAT_143009bd0 + fVar40;
      fStack_294 = fStack_2a4 * _UNK_143009bd4 + fVar41;
      uStack_298 = SUB41(fVar33,0);
      uStack_297 = (undefined1)((uint)fVar33 >> 8);
      uStack_296 = (undefined2)((uint)fVar33 >> 0x10);
      uStack_290 = SUB41(fVar42,0);
      uStack_28f = (undefined1)((uint)fVar42 >> 8);
      uStack_28e = (undefined2)((uint)fVar42 >> 0x10);
      uStack_28c = (undefined4)_DAT_14306e078;
      uStack_288._0_4_ = (undefined4)((ulonglong)_DAT_14306e078 >> 0x20);
      uStack_288._4_4_ = _DAT_14306e080;
      uStack_f2 = 1;
      uStack_2a8._0_2_ = uVar12;
      uStack_2a8._2_2_ = uVar13;
      fStack_2a4 = fVar46;
      pdb_140b3d590(&uStack_170);
      uStack_178 = 2;
      uStack_210 = uStack_168;
      uStack_208 = uStack_160;
      uStack_220 = 2;
      uStack_21f = CONCAT17(uStack_170,uStack_177);
      uStack_217 = uStack_16f;
      uStack_213 = uStack_16b;
      uStack_211 = uStack_169;
      uStack_2a8._0_2_ = 0;
      uStack_2a8._2_2_ = 0;
      fStack_2a4 = 0.0;
      uStack_2a0 = 8;
      uStack_29e = 0;
      uStack_29c = 0.0;
      uStack_298 = 0;
      uStack_297 = 0;
      uStack_296 = 0;
      fStack_294 = 0.0;
      uStack_290 = 1;
      uStack_28f = 0;
      uStack_28e = 0;
      uStack_288._0_4_ = 1;
      uStack_288._4_4_ = 0;
      uStack_278 = CONCAT44(uStack_278._4_4_,2);
      uStack_260 = 3;
      uStack_248 = 3;
      uStack_230 = 0;
      uStack_200 = 0x100;
      uStack_f2 = 0;
      puVar22 = &uStack_128;
      lStack_2d8 = pdb_1409008d0(pbStack_100,puVar22,&uStack_2a8);
      lVar21 = lStack_108;
      uVar29 = uStack_19c;
      puVar7 = puStack_2e0;
      uVar16 = uStack_2e8;
      uVar17 = uStack_2f0;
      auVar31._4_4_ = fVar41;
      auVar31._0_4_ = fVar40;
      auVar31._8_8_ = 0;
      puStack_110 = puVar22;
      if ((*(char *)(lStack_2d8 + 0x18) == '\x02') &&
         (*(ulonglong **)(lStack_2d8 + 0x38) == puVar22)) {
        bVar28 = *(byte *)(lStack_2d8 + 0x19);
        if (bVar28 < 2) {
          pdb_14007ee60();
          pbVar18 = pub_1406abab0(8,8);
          lVar21 = lStack_108;
          lVar23 = lStack_300;
          if (pbVar18 == (byte *)0x0) {
LAB_140b544c3:
                    /* WARNING: Subroutine does not return */
            pdb_142dc7e11(8,8);
          }
          *(longlong *)pbVar18 = lStack_108;
          *(undefined4 *)param_8[2] = *(undefined4 *)((longlong)param_8 + 0x1c);
          lVar26 = *param_8;
          lVar27 = *(longlong *)(lVar26 + 0x30);
          uVar17 = *(undefined8 *)(lVar26 + 0x40);
          pbStack_100 = pbVar18;
          if (lVar27 == *(longlong *)(lVar26 + 0x20)) {
            pdb_142d7e6e0(lVar26 + 0x20);
          }
          lVar20 = *(longlong *)(lVar26 + 0x28);
          lVar19 = lVar27 * 0x20;
          *(undefined8 *)(lVar20 + lVar19) = 1;
          *(byte **)(lVar20 + 8 + lVar19) = pbStack_100;
          *(undefined8 *)(lVar20 + 0x10 + lVar19) = 1;
          *(undefined8 *)(lVar20 + 0x18 + lVar19) = uVar17;
          *(longlong *)(lVar26 + 0x30) = lVar27 + 1;
          *(longlong *)(lVar26 + 0x40) = *(longlong *)(lVar26 + 0x40) + 1;
          uStack_128 = 0;
          lStack_120 = 8;
          lStack_118 = 0;
          uStack_178 = (undefined1)uStack_2c8;
          uStack_177 = (undefined7)(uStack_2c8 >> 8);
          uStack_170 = (undefined1)uStack_2c0;
          uStack_16f = (undefined4)((ulonglong)uStack_2c0 >> 8);
          uStack_16b = (undefined2)((ulonglong)uStack_2c0 >> 0x28);
          uStack_169 = (undefined1)((ulonglong)uStack_2c0 >> 0x38);
          uStack_f1 = 1;
          pdb_141c40550((longlong)&uStack_16f + 3);
          fStack_294 = (float)CONCAT71(uStack_177,uStack_178);
          uStack_290 = (undefined1)((uint7)uStack_177 >> 0x18);
          uStack_28f = (undefined1)((uint7)uStack_177 >> 0x20);
          uStack_28e = (undefined2)((uint7)uStack_177 >> 0x28);
          uStack_28c = (undefined4)CONCAT41(uStack_16f,uStack_170);
          uStack_288._0_4_ =
               (undefined4)
               (CONCAT17(uStack_169,CONCAT25(uStack_16b,CONCAT41(uStack_16f,uStack_170))) >> 0x20);
          uStack_278 = uStack_2c8;
          uStack_270 = uStack_2c0;
          uStack_2a0 = (undefined2)lVar21;
          uStack_29e = (undefined2)((ulonglong)lVar21 >> 0x10);
          uStack_29c = (float)((ulonglong)lVar21 >> 0x20);
          uStack_298 = 0;
          uStack_297 = 0;
          uStack_296 = 0;
          pcStack_280 = (code *)(ulonglong)(uint)pcStack_280;
          uStack_2a8._0_2_ = 4;
          uStack_2a8._2_2_ = 0;
          fStack_2a4 = -0.0;
          uStack_f1 = 1;
          pdb_140a1aa80(&uStack_128,&uStack_2a8);
          *(undefined4 *)param_7[2] = *(undefined4 *)((longlong)param_7 + 0x1c);
          uVar17 = *param_7;
          uStack_178 = 0;
          uStack_177 = 0;
          uStack_170 = 8;
          uStack_16f = 0;
          uStack_16b = 0;
          uStack_169 = 0;
          uStack_168 = 0;
          lVar21 = lStack_120 + lStack_118 * 0x18;
          uStack_2a8._0_2_ = (undefined2)lStack_120;
          uStack_2a8._2_2_ = (undefined2)((ulonglong)lStack_120 >> 0x10);
          fStack_2a4 = (float)((ulonglong)lStack_120 >> 0x20);
          uStack_298 = (undefined1)uStack_128;
          uStack_297 = (undefined1)(uStack_128 >> 8);
          uStack_296 = (undefined2)(uStack_128 >> 0x10);
          fStack_294 = (float)(uStack_128 >> 0x20);
          uStack_290 = (undefined1)lVar21;
          uStack_28f = (undefined1)((ulonglong)lVar21 >> 8);
          uStack_28e = (undefined2)((ulonglong)lVar21 >> 0x10);
          uStack_28c = (undefined4)((ulonglong)lVar21 >> 0x20);
          lVar21 = lStack_120;
          uStack_2a0 = (undefined2)uStack_2a8;
          uStack_29e = uStack_2a8._2_2_;
          uStack_29c = fStack_2a4;
          uVar16 = pdb_140c69b60(&uStack_2a8);
          uStack_2a0 = (undefined2)uVar16;
          uStack_29e = (undefined2)((ulonglong)uVar16 >> 0x10);
          uStack_29c = (float)((ulonglong)uVar16 >> 0x20);
          uStack_298 = (undefined1)lVar21;
          uStack_297 = (undefined1)((ulonglong)lVar21 >> 8);
          uStack_296 = (undefined2)((ulonglong)lVar21 >> 0x10);
          fStack_294 = (float)((ulonglong)lVar21 >> 0x20);
          uStack_2a8._0_2_ = 7;
          uStack_2a8._2_2_ = 0;
          fStack_2a4 = 0.0;
          uStack_f1 = 0;
          pdb_140ae5180(uVar17,&uStack_2a8,&UNK_143059dd0);
          *(undefined4 *)param_11[2] = *(undefined4 *)((longlong)param_11 + 0x1c);
          lVar21 = *param_11;
          lVar26 = *(longlong *)(lVar21 + 0x30);
          uVar17 = *(undefined8 *)(lVar21 + 0x40);
          if (lVar26 == *(longlong *)(lVar21 + 0x20)) {
            uStack_f1 = 0;
            pdb_142d7e8a0(lVar21 + 0x20);
          }
          *(undefined8 *)(*(longlong *)(lVar21 + 0x28) + lVar26 * 8) = uVar17;
          *(longlong *)(lVar21 + 0x30) = lVar26 + 1;
          *(longlong *)(lVar21 + 0x40) = *(longlong *)(lVar21 + 0x40) + 1;
          *puStack_2f8 = uStack_1a0;
          lVar21 = *(longlong *)(lVar23 + 0x30);
          uVar17 = *(undefined8 *)(lVar23 + 0x40);
          if (lVar21 == *(longlong *)(lVar23 + 0x20)) {
            uStack_f1 = 0;
            pdb_142d7e8a0(lVar23 + 0x20);
          }
          *(undefined8 *)(*(longlong *)(lVar23 + 0x28) + lVar21 * 8) = uVar17;
          *(longlong *)(lVar23 + 0x30) = lVar21 + 1;
          *(longlong *)(lVar23 + 0x40) = *(longlong *)(lVar23 + 0x40) + 1;
          *(undefined1 *)(param_14 + 6) = 1;
          auVar31._8_8_ = 0;
          goto LAB_140b53cde;
        }
        if (bVar28 == 2) goto LAB_140b53cde;
        if (bVar28 == 3) {
          *puStack_2e0 = uStack_19c;
          uVar50 = 1;
          pdb_140aa2f60(uStack_2f0,0,lStack_108,uStack_2e8,param_4,&UNK_143059d91,0xd);
          *puVar7 = uVar29;
          pdb_140c419b0(uVar17,lVar21,uVar16);
          fVar44 = fVar44 - fVar47;
          fVar43 = (fVar41 - pfStack_190[1]) / pfStack_190[4];
          fVar42 = fVar43 * (float)*(undefined8 *)(pfStack_190 + 3) +
                   (float)*(undefined8 *)pfStack_190;
          fVar33 = fVar43 * (float)((ulonglong)*(undefined8 *)(pfStack_190 + 3) >> 0x20) +
                   (float)((ulonglong)*(undefined8 *)pfStack_190 >> 0x20);
          fVar43 = fVar43 * pfStack_190[5] + pfStack_190[2];
          auVar35._0_4_ = fVar43 - fVar47;
          auVar35._4_4_ = fVar41;
          auVar35._8_8_ = 0;
          pdb_140de8b00(CONCAT44(fVar33,fVar42 - fVar34));
          uVar29 = pdb_141c40430((longlong)&uStack_180 + 4);
          lStack_108 = CONCAT44(lStack_108._4_4_,uVar29);
          pdb_140de8b00();
          auVar31._8_8_ = 0;
          *param_14 = fVar44 - auVar35._0_4_;
          param_14[1] = auVar35._0_4_;
          param_14[2] = (float)lStack_108;
          *(ulonglong *)(param_14 + 3) = CONCAT44(fVar33,fVar42);
          param_14[5] = fVar43;
          *(undefined1 *)(param_14 + 6) = 0;
          fVar43 = _DAT_142e36f28;
          goto LAB_140b53cde;
        }
        fVar44 = param_14[4];
        fVar43 = (fVar44 - pfStack_190[1]) / pfStack_190[4];
        fVar33 = fVar43 * (float)*(undefined8 *)(pfStack_190 + 3) +
                 (float)*(undefined8 *)pfStack_190;
        fVar46 = fVar43 * (float)((ulonglong)*(undefined8 *)(pfStack_190 + 3) >> 0x20) +
                 (float)((ulonglong)*(undefined8 *)pfStack_190 >> 0x20);
        fVar42 = fVar43 * pfStack_190[5] + pfStack_190[2];
        fVar43 = fVar42 - fVar47;
        pdb_140de8b00(CONCAT44(fVar46,fVar33 - fVar34),fVar43);
        fVar43 = (float)pdb_141c402c0((param_14[2] - param_14[1]) + fVar43);
        fStack_1a4 = fVar43;
        if ((fVar43 != uStack_180._4_4_) || (NAN(fVar43) || NAN(uStack_180._4_4_))) {
          uVar3 = *(undefined1 *)(lVar23 + -9);
          pdb_140df4540(&uStack_2a0,&uStack_188);
          pdb_141c40480(&fStack_1a4);
          fVar41 = (float)pdb_140de8220();
          lVar21 = lStack_108;
          fVar40 = 0.0;
          if (0.0 <= fVar41) {
            fVar40 = fVar41;
          }
          fStack_294 = _DAT_142e36f28;
          if (fVar40 <= _DAT_142e36f28) {
            fStack_294 = fVar40;
          }
          uStack_290 = 2;
          uStack_2a8._0_2_ = (undefined2)lStack_108;
          uVar12 = (undefined2)uStack_2a8;
          uStack_2a8._2_2_ = (undefined2)((ulonglong)lStack_108 >> 0x10);
          uVar13 = uStack_2a8._2_2_;
          fStack_2a4 = (float)((ulonglong)lStack_108 >> 0x20);
          fVar40 = fStack_2a4;
          uStack_28f = uVar3;
          pdb_141b75070(param_12,&uStack_2a8,&UNK_143059da0);
          uStack_128 = uStack_2c8;
          lStack_120 = CONCAT44(fVar43,(int)uStack_2c0);
          uVar29 = *(undefined4 *)((longlong)param_2 + 0x1c);
          puVar7 = (undefined4 *)param_2[2];
          *puVar7 = uVar29;
          uVar17 = *param_2;
          pdb_140defcd0(&uStack_178,&uStack_128);
          uStack_278 = uStack_148;
          uStack_288._0_4_ = (undefined4)uStack_158;
          uStack_288._4_4_ = (undefined4)((ulonglong)uStack_158 >> 0x20);
          pcStack_280 = (code *)uStack_150;
          uStack_298 = (undefined1)uStack_168;
          uStack_297 = (undefined1)((ulonglong)uStack_168 >> 8);
          uStack_296 = (undefined2)((ulonglong)uStack_168 >> 0x10);
          fStack_294 = (float)((ulonglong)uStack_168 >> 0x20);
          uStack_290 = (undefined1)uStack_160;
          uStack_28f = (undefined1)((ulonglong)uStack_160 >> 8);
          uStack_28e = (undefined2)((ulonglong)uStack_160 >> 0x10);
          uStack_28c = (undefined4)((ulonglong)uStack_160 >> 0x20);
          uStack_2a8._0_2_ = (undefined2)CONCAT71(uStack_177,uStack_178);
          uStack_2a8._2_2_ = (undefined2)((uint7)uStack_177 >> 8);
          fStack_2a4 = (float)((uint7)uStack_177 >> 0x18);
          uStack_2a0 = (undefined2)CONCAT41(uStack_16f,uStack_170);
          uStack_29e = (undefined2)((uint)uStack_16f >> 8);
          uStack_29c = (float)(CONCAT17(uStack_169,
                                        CONCAT25(uStack_16b,CONCAT41(uStack_16f,uStack_170))) >>
                              0x20);
          pdb_14092e8e0(uVar17,lVar21,&uStack_2a8);
          *puVar7 = uVar29;
          fStack_2a4 = (float)uStack_128;
          uStack_2a0 = (undefined2)(uStack_128 >> 0x20);
          uStack_29e = (undefined2)(uStack_128 >> 0x30);
          uStack_29c = (float)lStack_120;
          uStack_298 = (undefined1)((ulonglong)lStack_120 >> 0x20);
          uStack_297 = (undefined1)((ulonglong)lStack_120 >> 0x28);
          uStack_296 = (undefined2)((ulonglong)lStack_120 >> 0x30);
          uStack_2a8._0_2_ = 0;
          uStack_2a8._2_2_ = 0;
          pdb_140b0e480(uVar17,lVar21,&uStack_2a8);
          uVar17 = pdb_140b54b40(param_3,lVar21);
          if ((int)uVar17 != 0) {
            uStack_298 = 2;
            uStack_2a8._0_2_ = (undefined2)uVar17;
            uStack_2a8._2_2_ = (undefined2)((ulonglong)uVar17 >> 0x10);
            fStack_2a4 = (float)((ulonglong)uVar17 >> 0x20);
            uStack_2a0 = uVar12;
            uStack_29e = uVar13;
            uStack_29c = fVar40;
            pdb_141b75330(param_9,&uStack_2a8,&UNK_143059db8);
          }
        }
        pdb_14007ee60();
        pbStack_100 = pub_1406abab0(0x18,4);
        if (pbStack_100 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
          pdb_142dc7e11(4,0x18);
        }
        pdb_140df4540(&uStack_2a8,&uStack_188);
        puVar22 = puStack_110;
        uVar17 = uStack_198;
        *(ulonglong *)pbStack_100 = CONCAT44(fVar46,fVar33);
        *(float *)(pbStack_100 + 8) = fVar42;
        *(uint *)(pbStack_100 + 0x14) = CONCAT22(uStack_29e,uStack_2a0);
        *(ulonglong *)(pbStack_100 + 0xc) =
             CONCAT44(fStack_2a4,CONCAT22(uStack_2a8._2_2_,(undefined2)uStack_2a8));
        uStack_278 = uStack_278 & 0xffffffff00000000;
        uStack_268 = 0x3f800000;
        uStack_2a8._0_2_ = 2;
        uStack_2a8._2_2_ = 0;
        fStack_2a4 = 0.0;
        uStack_2a0 = SUB82(pbStack_100,0);
        uStack_29e = (undefined2)((ulonglong)pbStack_100 >> 0x10);
        uStack_29c = (float)((ulonglong)pbStack_100 >> 0x20);
        uStack_298 = 2;
        uStack_297 = 0;
        uStack_296 = 0;
        fStack_294 = 0.0;
        uStack_290 = 0;
        uStack_28f = 0;
        uStack_28e = 0;
        uStack_28c = 0x80000000;
        uStack_264 = 1;
        pdb_140ab2da0(&uStack_2a8,uStack_198);
        pdb_14007ee60();
        pbVar18 = pub_1406abab0(8,8);
        if (pbVar18 == (byte *)0x0) goto LAB_140b544c3;
        *(longlong *)pbVar18 = lStack_108;
        *(undefined4 *)param_8[2] = *(undefined4 *)((longlong)param_8 + 0x1c);
        fVar43 = _DAT_142e36f28;
        lVar21 = *param_8;
        lVar26 = *(longlong *)(lVar21 + 0x30);
        uVar16 = *(undefined8 *)(lVar21 + 0x40);
        pbStack_100 = pbVar18;
        if (lVar26 == *(longlong *)(lVar21 + 0x20)) {
          pdb_142d7e6e0(lVar21 + 0x20);
        }
        lVar27 = *(longlong *)(lVar21 + 0x28);
        lVar20 = lVar26 * 0x20;
        *(undefined8 *)(lVar27 + lVar20) = 1;
        *(byte **)(lVar27 + 8 + lVar20) = pbStack_100;
        *(undefined8 *)(lVar27 + 0x10 + lVar20) = 1;
        *(undefined8 *)(lVar27 + 0x18 + lVar20) = uVar16;
        *(longlong *)(lVar21 + 0x30) = lVar26 + 1;
        *(longlong *)(lVar21 + 0x40) = *(longlong *)(lVar21 + 0x40) + 1;
        if (*(char *)(lVar23 + -0x1a0) == '\0') {
          pdb_142d8e040();
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        uVar29 = *(undefined4 *)(lVar23 + -0x24);
        uVar2 = *(undefined4 *)(lVar23 + -0x19c);
        uStack_2a8._2_2_ = (undefined2)uStack_188;
        fStack_2a4 = (float)((ulonglong)uStack_188 >> 0x10);
        uStack_2a0 = (undefined2)((ulonglong)uStack_188 >> 0x30);
        uStack_29e = (undefined2)uStack_180;
        uStack_29c = (float)((ulonglong)uStack_180 >> 0x10);
        uStack_298 = (undefined1)((ulonglong)uStack_180 >> 0x30);
        uStack_297 = (undefined1)((ulonglong)uStack_180 >> 0x38);
        *(undefined4 *)param_10[2] = *(undefined4 *)((longlong)param_10 + 0x1c);
        lVar23 = *param_10;
        lVar21 = *(longlong *)(lVar23 + 0x30);
        uVar16 = *(undefined8 *)(lVar23 + 0x40);
        if (lVar21 == *(longlong *)(lVar23 + 0x20)) {
          pdb_142d7ee50(lVar23 + 0x20);
        }
        lVar26 = *(longlong *)(lVar23 + 0x28);
        lVar27 = lVar21 * 0x40;
        *(undefined2 *)(lVar26 + lVar27) = 0x100;
        puVar6 = (undefined8 *)(lVar26 + 2 + lVar27);
        *puVar6 = CONCAT44(fStack_2a4,CONCAT22(uStack_2a8._2_2_,(undefined2)uStack_2a8));
        puVar6[1] = CONCAT44(uStack_29c,CONCAT22(uStack_29e,uStack_2a0));
        *(ushort *)(lVar26 + 0x12 + lVar27) = CONCAT11(uStack_297,uStack_298);
        *(undefined4 *)(lVar26 + 0x14 + lVar27) = uVar29;
        *(undefined4 *)(lVar26 + 0x18 + lVar27) = uVar2;
        *(undefined8 *)(lVar26 + 0x20 + lVar27) = 1;
        *(longlong *)(lVar26 + 0x28 + lVar27) = lStack_108;
        *(undefined8 *)(lVar26 + 0x38 + lVar27) = uVar16;
        *(longlong *)(lVar23 + 0x30) = lVar21 + 1;
        *(longlong *)(lVar23 + 0x40) = *(longlong *)(lVar23 + 0x40) + 1;
        pdb_140de8b00((pfStack_190[3] * ((fVar44 - pfStack_190[1]) / pfStack_190[4]) + *pfStack_190)
                      - fVar34);
        iVar30 = pdb_141c402c0();
        iVar45 = param_15[1];
        if (*param_15 == 0) goto LAB_140b53d7b;
      }
      else {
LAB_140b53cde:
        auVar32._4_12_ = auVar31._4_12_;
        auVar32._0_4_ = auVar31._0_4_ - fVar34;
        pdb_140de8b00(auVar32._0_8_);
        iVar30 = pdb_141c402c0();
        iVar45 = param_15[1];
        puVar22 = puStack_110;
        uVar17 = uStack_198;
        if ((char)*param_15 == '\0') {
LAB_140b53d7b:
          *param_15 = 1;
          param_15[1] = iVar30;
          bVar11 = false;
          goto LAB_140b53d89;
        }
        pub_142e32a20(*(float *)(*param_16 + 0x28) * _DAT_142fa5b20);
        uStack_2a8._0_2_ = (undefined2)iVar45;
        uStack_2a8._2_2_ = (undefined2)((uint)iVar45 >> 0x10);
        iVar30 = pdb_141c40300(&uStack_2a8);
        puVar22 = puStack_110;
        uVar17 = uStack_198;
      }
      *param_15 = 1;
      param_15[1] = iVar30;
      bVar11 = true;
LAB_140b53d89:
      uStack_2a8._0_2_ = (undefined2)iVar30;
      uStack_2a8._2_2_ = (undefined2)((uint)iVar30 >> 0x10);
      fVar44 = (float)pdb_141c40430(&uStack_2a8);
      fVar42 = (float)pdb_140de8b50();
      uStack_2a8 = ((float)uStack_180 + fVar43) * fVar42 + fVar34;
      fStack_2a4 = ((float)uStack_180 + fVar43) * fVar44 + fVar47;
      pdb_140df4540(&fStack_13c,&uStack_2a8);
      if ((bVar11) && (*(char *)(param_14 + 6) == '\x01')) {
        uStack_2a8._0_2_ = (undefined2)iVar45;
        uStack_2a8._2_2_ = (undefined2)((uint)iVar45 >> 0x10);
        fVar44 = (float)pdb_141c40480(&uStack_2a8);
        if (fVar44 <= _DAT_142e37848) {
          *(undefined4 *)param_13[2] = *(undefined4 *)((longlong)param_13 + 0x1c);
          lVar23 = *param_13;
          lVar21 = *(longlong *)(lVar23 + 0x30);
          uVar16 = *(undefined8 *)(lVar23 + 0x40);
          if (lVar21 == *(longlong *)(lVar23 + 0x20)) {
            pdb_142d7e6e0(lVar23 + 0x20);
          }
          lVar26 = *(longlong *)(lVar23 + 0x28);
          *(undefined4 *)(lVar26 + lVar21 * 0x20) = 0x29;
          *(undefined8 *)(lVar26 + 0x18 + lVar21 * 0x20) = uVar16;
          *(longlong *)(lVar23 + 0x30) = lVar21 + 1;
          *(longlong *)(lVar23 + 0x40) = *(longlong *)(lVar23 + 0x40) + 1;
          *(undefined1 *)(param_14 + 6) = 2;
        }
        else {
          fVar42 = (float)pdb_140de8220();
          fVar44 = 0.0;
          if (0.0 <= fVar42) {
            fVar44 = fVar42;
          }
          fVar42 = _DAT_142e36f28;
          if (fVar44 <= _DAT_142e36f28) {
            fVar42 = fVar44;
          }
          *(undefined4 *)param_13[2] = *(undefined4 *)((longlong)param_13 + 0x1c);
          lVar23 = *param_13;
          lVar21 = *(longlong *)(lVar23 + 0x30);
          uVar16 = *(undefined8 *)(lVar23 + 0x40);
          if (lVar21 == *(longlong *)(lVar23 + 0x20)) {
            pdb_142d7e6e0(lVar23 + 0x20);
          }
          lVar26 = *(longlong *)(lVar23 + 0x28);
          lVar27 = lVar21 * 0x20;
          *(undefined4 *)(lVar26 + lVar27) = 0x28;
          *(float *)(lVar26 + 4 + lVar27) = fVar42;
          *(ulonglong *)(lVar26 + 8 + lVar27) = CONCAT44(uStack_138,fStack_13c);
          *(float *)(lVar26 + 0x10 + lVar27) = fStack_134;
          *(undefined8 *)(lVar26 + 0x18 + lVar27) = uVar16;
          *(longlong *)(lVar23 + 0x30) = lVar21 + 1;
          *(longlong *)(lVar23 + 0x40) = *(longlong *)(lVar23 + 0x40) + 1;
        }
      }
      fVar34 = fStack_13c - fVar34;
      fVar47 = fStack_134 - fVar47;
      fVar44 = fVar43 / SQRT(fVar47 * fVar47 + fVar34 * fVar34);
      pdb_140de88f0(&uStack_128,CONCAT44(fVar47,fVar34 * fVar44),CONCAT44(fVar47,fVar47 * fVar44));
      fVar44 = _DAT_142e3c670;
      if (((*(char *)(lStack_2d8 + 0x18) != '\0') && (*(ulonglong **)(lStack_2d8 + 0x38) == puVar22)
          ) && (*(int *)(lStack_2d8 + 0x28) != 2)) {
        fVar44 = fVar43;
      }
      uStack_2a8._0_2_ = SUB82(&lStack_308,0);
      uStack_2a8._2_2_ = (undefined2)((ulonglong)&lStack_308 >> 0x10);
      fStack_2a4 = (float)((ulonglong)&lStack_308 >> 0x20);
      uStack_2a0 = 0x5410;
      uStack_29e = 0x40b5;
      uStack_29c = 1.4013e-45;
      uStack_298 = SUB81(&fStack_13c,0);
      uStack_297 = (undefined1)((ulonglong)&fStack_13c >> 8);
      uStack_296 = (undefined2)((ulonglong)&fStack_13c >> 0x10);
      fStack_294 = (float)((ulonglong)&fStack_13c >> 0x20);
      uStack_290 = 0x80;
      uStack_28f = 0x3d;
      uStack_28e = 0x40f3;
      uStack_28c = 1;
      uStack_288 = &fStack_130;
      pcStack_280 = pdb_140f70fc0;
      fStack_130 = fVar44;
      pdb_140f60760(&uStack_178,&UNK_143059de8,&uStack_2a8);
      puStack_110 = (ulonglong *)
                    CONCAT17(uStack_169,CONCAT25(uStack_16b,CONCAT41(uStack_16f,uStack_170)));
      uStack_2a0 = SUB42(fStack_134,0);
      uStack_29e = (undefined2)((uint)fStack_134 >> 0x10);
      uStack_2a8._0_2_ = SUB42(fStack_13c,0);
      uStack_2a8._2_2_ = (undefined2)((uint)fStack_13c >> 0x10);
      pdb_140c49e60(puVar22,puStack_110,uStack_168,&uStack_2a8,&uStack_128,CONCAT44(uVar50,fVar44),
                    uVar17);
      if (CONCAT71(uStack_177,uStack_178) == 0) {
        return;
      }
      pub_1406abac0((byte *)puStack_110,CONCAT71(uStack_177,uStack_178),1);
      return;
    }
    uVar25 = (ushort)(uVar24 - 1) & (ushort)uVar24;
    uVar24 = CONCAT22((short)(uVar24 - 1 >> 0x10),uVar25);
  }
  auVar37[0] = -(auVar35[0] == -1);
  auVar37[1] = -(auVar35[1] == -1);
  auVar37[2] = -(auVar35[2] == -1);
  auVar37[3] = -(auVar35[3] == -1);
  auVar37[4] = -(auVar35[4] == -1);
  auVar37[5] = -(auVar35[5] == -1);
  auVar37[6] = -(auVar35[6] == -1);
  auVar37[7] = -(auVar35[7] == -1);
  auVar37[8] = -(auVar35[8] == -1);
  auVar37[9] = -(auVar35[9] == -1);
  auVar37[10] = -(auVar35[10] == -1);
  auVar37[0xb] = -(auVar35[0xb] == -1);
  auVar37[0xc] = -(auVar35[0xc] == -1);
  auVar37[0xd] = -(auVar35[0xd] == -1);
  auVar37[0xe] = -(auVar35[0xe] == -1);
  auVar37[0xf] = -(auVar35[0xf] == -1);
  if ((((((((((((((((SUB161(auVar37 >> 7,0) & 1) != 0 || (SUB161(auVar37 >> 0xf,0) & 1) != 0) ||
                  (SUB161(auVar37 >> 0x17,0) & 1) != 0) || (SUB161(auVar37 >> 0x1f,0) & 1) != 0) ||
                (SUB161(auVar37 >> 0x27,0) & 1) != 0) || (SUB161(auVar37 >> 0x2f,0) & 1) != 0) ||
              (SUB161(auVar37 >> 0x37,0) & 1) != 0) || (SUB161(auVar37 >> 0x3f,0) & 1) != 0) ||
            (SUB161(auVar37 >> 0x47,0) & 1) != 0) || (SUB161(auVar37 >> 0x4f,0) & 1) != 0) ||
          (SUB161(auVar37 >> 0x57,0) & 1) != 0) || (SUB161(auVar37 >> 0x5f,0) & 1) != 0) ||
        (SUB161(auVar37 >> 0x67,0) & 1) != 0) || (SUB161(auVar37 >> 0x6f,0) & 1) != 0) ||
      (SUB161(auVar37 >> 0x77,0) & 1) != 0) || auVar37[0xf] < '\0') {
                    /* WARNING: Subroutine does not return */
    pdb_142dc8150(&UNK_143059d50);
  }
  uVar14 = uVar14 + lVar26 + 0x10;
  lVar26 = lVar26 + 0x10;
  goto LAB_140b534b2;
}

