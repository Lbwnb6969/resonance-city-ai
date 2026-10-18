// VA 0x1409cb310, PDB extent 2352 bytes
// country_core::systems::wall::shapes::rectangle::ui_modes::edit_dims::UiRectangleDimsEdit::widget
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/wall/shapes/rectangle/ui_modes/edit_dims.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::systems::wall::shapes::rectangle::ui_modes::edit_dims::UiRectangleDimsEdit::widget
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/wall/shapes/rectangle/ui_modes/edit_dims.rs
   Extent: 2352 */

void pdb_1409cb310(undefined8 *param_1,undefined8 param_2,longlong *param_3,longlong *param_4,
                  longlong *param_5,byte param_6)

{
  longlong *plVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  undefined1 auVar5 [16];
  longlong lVar6;
  ulonglong uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  undefined4 uVar13;
  longlong lVar14;
  ulonglong uVar15;
  longlong lVar16;
  int *piVar17;
  ushort uVar18;
  longlong lVar19;
  byte bVar20;
  float extraout_XMM0_Da;
  float extraout_XMM0_Da_00;
  float fVar21;
  float fVar22;
  undefined1 auVar23 [16];
  float fVar24;
  float fVar25;
  float fVar28;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  float fVar29;
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  float fVar32;
  float fStack_188;
  float fStack_184;
  float fStack_180;
  undefined4 uStack_17c;
  undefined8 uStack_178;
  undefined1 uStack_170;
  undefined7 uStack_16f;
  undefined1 uStack_168;
  undefined4 uStack_167;
  undefined2 uStack_163;
  undefined1 uStack_161;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined8 uStack_148;
  undefined8 uStack_140;
  ulonglong uStack_138;
  float fStack_130;
  undefined2 uStack_12c;
  undefined2 uStack_12a;
  undefined4 uStack_128;
  undefined4 uStack_124;
  int iStack_118;
  int iStack_100;
  int iStack_e8;
  undefined1 uStack_d0;
  undefined1 uStack_c0;
  undefined8 uStack_bf;
  undefined4 uStack_b7;
  undefined2 uStack_b3;
  undefined1 uStack_b1;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  byte bStack_a0;
  undefined1 uStack_9f;
  undefined8 uStack_98;
  undefined8 auStack_90 [10];
  
  plVar1 = param_1 + 6;
  if (*(char *)(param_1 + 0xb) != '\x01') {
    if (param_4[3] != 0) {
      lVar6 = *param_5;
      lVar16 = param_5[1];
      uVar11 = pdb_1400af0a0(param_4 + 4,plVar1);
      bVar20 = (byte)(uVar11 >> 0x39);
      auVar23 = ZEXT216(CONCAT11(bVar20,bVar20));
      auVar23 = pshuflw(auVar23,auVar23,0);
      lVar14 = 0;
      while( true ) {
        uVar11 = uVar11 & param_4[1];
        auVar5 = *(undefined1 (*) [16])(*param_4 + uVar11);
        auVar31[0] = -(auVar5[0] == auVar23[0]);
        auVar31[1] = -(auVar5[1] == auVar23[1]);
        auVar31[2] = -(auVar5[2] == auVar23[2]);
        auVar31[3] = -(auVar5[3] == auVar23[3]);
        auVar31[4] = -(auVar5[4] == auVar23[4]);
        auVar31[5] = -(auVar5[5] == auVar23[5]);
        auVar31[6] = -(auVar5[6] == auVar23[6]);
        auVar31[7] = -(auVar5[7] == auVar23[7]);
        auVar31[8] = -(auVar5[8] == auVar23[0]);
        auVar31[9] = -(auVar5[9] == auVar23[1]);
        auVar31[10] = -(auVar5[10] == auVar23[2]);
        auVar31[0xb] = -(auVar5[0xb] == auVar23[3]);
        auVar31[0xc] = -(auVar5[0xc] == auVar23[4]);
        auVar31[0xd] = -(auVar5[0xd] == auVar23[5]);
        auVar31[0xe] = -(auVar5[0xe] == auVar23[6]);
        auVar31[0xf] = -(auVar5[0xf] == auVar23[7]);
        uVar18 = (ushort)(SUB161(auVar31 >> 7,0) & 1) | (ushort)(SUB161(auVar31 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar31 >> 0x17,0) & 1) << 2 |
                 (ushort)(SUB161(auVar31 >> 0x1f,0) & 1) << 3 |
                 (ushort)(SUB161(auVar31 >> 0x27,0) & 1) << 4 |
                 (ushort)(SUB161(auVar31 >> 0x2f,0) & 1) << 5 |
                 (ushort)(SUB161(auVar31 >> 0x37,0) & 1) << 6 |
                 (ushort)(SUB161(auVar31 >> 0x3f,0) & 1) << 7 |
                 (ushort)(SUB161(auVar31 >> 0x47,0) & 1) << 8 |
                 (ushort)(SUB161(auVar31 >> 0x4f,0) & 1) << 9 |
                 (ushort)(SUB161(auVar31 >> 0x57,0) & 1) << 10 |
                 (ushort)(SUB161(auVar31 >> 0x5f,0) & 1) << 0xb |
                 (ushort)(SUB161(auVar31 >> 0x67,0) & 1) << 0xc |
                 (ushort)(SUB161(auVar31 >> 0x6f,0) & 1) << 0xd |
                 (ushort)(SUB161(auVar31 >> 0x77,0) & 1) << 0xe | (ushort)(auVar31[0xf] >> 7) << 0xf
        ;
        uVar10 = (uint)uVar18;
        while (uVar18 != 0) {
          uVar8 = 0;
          for (uVar9 = uVar10; (uVar9 & 1) == 0; uVar9 = uVar9 >> 1 | 0x80000000) {
            uVar8 = uVar8 + 1;
          }
          lVar19 = *param_4 + (uVar8 + uVar11 & param_4[1]) * -0x10;
          if (*plVar1 == *(longlong *)(lVar19 + -0x10)) {
            uStack_140 = *(code **)(lVar19 + -8);
            uVar11 = (ulonglong)~(uint)uStack_140;
            uVar13 = 1;
            if (uVar11 < *(ulonglong *)(lVar16 + 0x10)) {
              piVar17 = (int *)(uVar11 * 0x18 + *(longlong *)(lVar16 + 8));
              uVar11 = (ulonglong)uStack_140 >> 0x20;
              if ((piVar17[4] == (int)((ulonglong)uStack_140 >> 0x20)) && (*piVar17 != 0)) {
                uVar11 = *(ulonglong *)(piVar17 + 2);
                uVar13 = 0;
                if (((uVar11 & 0xffffffff) < *(ulonglong *)(lVar6 + 0x38)) &&
                   ((*(ulonglong *)(*(longlong *)(lVar6 + 0x28) + (uVar11 >> 6 & 0x3ffffff) * 8) >>
                     (uVar11 & 0x3f) & 1) != 0)) {
                  uVar10 = piVar17[1];
                  lVar6 = *(longlong *)
                           (*(longlong *)
                             (*(longlong *)(lVar16 + 0x1a0) + 0x18 + (uVar11 >> 0x20) * 0x48) + 0x10
                           + ~*(ulonglong *)
                               (*(longlong *)
                                 (*(longlong *)(lVar16 + 0x1a0) + 0x38 + (uVar11 >> 0x20) * 0x48) +
                               *(longlong *)(lVar6 + 0x110) * 8) * 0x30);
                  if (*(longlong *)(lVar6 + 0x10 + (ulonglong)~uVar10 * 0x68) == 0)
                  goto LAB_1409cba0a;
                  lVar16 = param_1[10];
                  fVar24 = (float)pdb_140df0700(param_1 + 7,lVar16);
                  fStack_188 = (float)pdb_140df0700(param_1 + 7,lVar16 + 1);
                  if ((fVar24 < 0.0) || (_DAT_142e36f28 < fVar24)) {
                    uStack_148 = &fStack_188;
                    uStack_140 = pdb_140f70fc0;
                    fStack_188 = fVar24;
                    /* WARNING: Subroutine does not return */
                    pdb_142dc83d0(&UNK_14335ec38,&uStack_148,&UNK_14302c748);
                  }
                  if ((fStack_188 < 0.0) || (_DAT_142e36f28 < fStack_188)) {
                    uStack_148 = &fStack_188;
                    uStack_140 = pdb_140f70fc0;
                    /* WARNING: Subroutine does not return */
                    pdb_142dc83d0(&UNK_14335ec38,&uStack_148,&UNK_14302c760);
                  }
                  uStack_148 = (float *)CONCAT44(fVar24,1);
                  uStack_140 = (code *)CONCAT44(1,fStack_188);
                  uStack_138 = (ulonglong)_DAT_14302c608;
                  fStack_130 = -0.5;
                  uStack_12c = 1;
                  pdb_140a0dec0(&uStack_168,lVar6 + (ulonglong)~uVar10 * 0x68,&uStack_148);
                  uStack_170 = 2;
                  goto LAB_1409cba0f;
                }
              }
            }
            uStack_148 = (float *)CONCAT44((int)uVar11,uVar13);
                    /* WARNING: Subroutine does not return */
            pdb_142dc8170(&UNK_14302cea0,0x2b,&uStack_148,&UNK_14302ce80,&UNK_14302c730);
          }
          uVar18 = (ushort)(uVar10 - 1) & (ushort)uVar10;
          uVar10 = CONCAT22((short)(uVar10 - 1 >> 0x10),uVar18);
        }
        auVar27[0] = -(auVar5[0] == -1);
        auVar27[1] = -(auVar5[1] == -1);
        auVar27[2] = -(auVar5[2] == -1);
        auVar27[3] = -(auVar5[3] == -1);
        auVar27[4] = -(auVar5[4] == -1);
        auVar27[5] = -(auVar5[5] == -1);
        auVar27[6] = -(auVar5[6] == -1);
        auVar27[7] = -(auVar5[7] == -1);
        auVar27[8] = -(auVar5[8] == -1);
        auVar27[9] = -(auVar5[9] == -1);
        auVar27[10] = -(auVar5[10] == -1);
        auVar27[0xb] = -(auVar5[0xb] == -1);
        auVar27[0xc] = -(auVar5[0xc] == -1);
        auVar27[0xd] = -(auVar5[0xd] == -1);
        auVar27[0xe] = -(auVar5[0xe] == -1);
        auVar27[0xf] = -(auVar5[0xf] == -1);
        if ((((((((((((((((SUB161(auVar27 >> 7,0) & 1) != 0 || (SUB161(auVar27 >> 0xf,0) & 1) != 0)
                        || (SUB161(auVar27 >> 0x17,0) & 1) != 0) ||
                       (SUB161(auVar27 >> 0x1f,0) & 1) != 0) || (SUB161(auVar27 >> 0x27,0) & 1) != 0
                      ) || (SUB161(auVar27 >> 0x2f,0) & 1) != 0) ||
                    (SUB161(auVar27 >> 0x37,0) & 1) != 0) || (SUB161(auVar27 >> 0x3f,0) & 1) != 0)
                  || (SUB161(auVar27 >> 0x47,0) & 1) != 0) || (SUB161(auVar27 >> 0x4f,0) & 1) != 0)
                || (SUB161(auVar27 >> 0x57,0) & 1) != 0) || (SUB161(auVar27 >> 0x5f,0) & 1) != 0) ||
              (SUB161(auVar27 >> 0x67,0) & 1) != 0) || (SUB161(auVar27 >> 0x6f,0) & 1) != 0) ||
            (SUB161(auVar27 >> 0x77,0) & 1) != 0) || auVar27[0xf] < '\0') break;
        uVar11 = uVar11 + lVar14 + 0x10;
        lVar14 = lVar14 + 0x10;
      }
    }
    pdb_142dc8110(&UNK_14302c6b0,0x16,&UNK_14302c718);
LAB_1409cba0a:
    uStack_170 = 7;
LAB_1409cba0f:
    bStack_a0 = 1;
LAB_1409cba11:
    param_6 = param_6 ^ 1;
    iStack_100 = (uint)param_6 + (uint)param_6 * 2;
    uStack_148 = (float *)0x0;
    uStack_140 = (code *)0x8;
    uStack_138 = 0;
    fStack_130 = (float)(uint)param_6;
    iStack_118 = (int)fStack_130 + (uint)param_6;
    uStack_128 = 0;
    uStack_124 = 0;
    uStack_d0 = 0;
    uStack_bf = CONCAT17(uStack_168,uStack_16f);
    uStack_c0 = uStack_170;
    uStack_b7 = uStack_167;
    uStack_b3 = uStack_163;
    uStack_b1 = uStack_161;
    uStack_b0 = uStack_160;
    uStack_a8 = uStack_158;
    uStack_9f = 1;
    iStack_e8 = iStack_100;
    pdb_140900430(param_2,param_1,&uStack_148);
    return;
  }
  lVar6 = *plVar1;
  uStack_148 = (float *)lVar6;
  if (param_3[3] != 0) {
    uVar11 = pdb_1400af0a0(param_3 + 4,&uStack_148);
    lVar16 = *param_3;
    bVar20 = (byte)(uVar11 >> 0x39);
    auVar23 = ZEXT216(CONCAT11(bVar20,bVar20));
    auVar23 = pshuflw(auVar23,auVar23,0);
    lVar14 = 0;
    while( true ) {
      uVar11 = uVar11 & param_3[1];
      auVar5 = *(undefined1 (*) [16])(lVar16 + uVar11);
      auVar30[0] = -(auVar5[0] == auVar23[0]);
      auVar30[1] = -(auVar5[1] == auVar23[1]);
      auVar30[2] = -(auVar5[2] == auVar23[2]);
      auVar30[3] = -(auVar5[3] == auVar23[3]);
      auVar30[4] = -(auVar5[4] == auVar23[4]);
      auVar30[5] = -(auVar5[5] == auVar23[5]);
      auVar30[6] = -(auVar5[6] == auVar23[6]);
      auVar30[7] = -(auVar5[7] == auVar23[7]);
      auVar30[8] = -(auVar5[8] == auVar23[0]);
      auVar30[9] = -(auVar5[9] == auVar23[1]);
      auVar30[10] = -(auVar5[10] == auVar23[2]);
      auVar30[0xb] = -(auVar5[0xb] == auVar23[3]);
      auVar30[0xc] = -(auVar5[0xc] == auVar23[4]);
      auVar30[0xd] = -(auVar5[0xd] == auVar23[5]);
      auVar30[0xe] = -(auVar5[0xe] == auVar23[6]);
      auVar30[0xf] = -(auVar5[0xf] == auVar23[7]);
      uVar18 = (ushort)(SUB161(auVar30 >> 7,0) & 1) | (ushort)(SUB161(auVar30 >> 0xf,0) & 1) << 1 |
               (ushort)(SUB161(auVar30 >> 0x17,0) & 1) << 2 |
               (ushort)(SUB161(auVar30 >> 0x1f,0) & 1) << 3 |
               (ushort)(SUB161(auVar30 >> 0x27,0) & 1) << 4 |
               (ushort)(SUB161(auVar30 >> 0x2f,0) & 1) << 5 |
               (ushort)(SUB161(auVar30 >> 0x37,0) & 1) << 6 |
               (ushort)(SUB161(auVar30 >> 0x3f,0) & 1) << 7 |
               (ushort)(SUB161(auVar30 >> 0x47,0) & 1) << 8 |
               (ushort)(SUB161(auVar30 >> 0x4f,0) & 1) << 9 |
               (ushort)(SUB161(auVar30 >> 0x57,0) & 1) << 10 |
               (ushort)(SUB161(auVar30 >> 0x5f,0) & 1) << 0xb |
               (ushort)(SUB161(auVar30 >> 0x67,0) & 1) << 0xc |
               (ushort)(SUB161(auVar30 >> 0x6f,0) & 1) << 0xd |
               (ushort)(SUB161(auVar30 >> 0x77,0) & 1) << 0xe | (ushort)(auVar30[0xf] >> 7) << 0xf;
      uVar10 = (uint)uVar18;
      while (uVar18 != 0) {
        uVar8 = 0;
        for (uVar9 = uVar10; (uVar9 & 1) == 0; uVar9 = uVar9 >> 1 | 0x80000000) {
          uVar8 = uVar8 + 1;
        }
        lVar19 = (uVar8 + uVar11 & param_3[1]) * -0x2b0;
        if (lVar6 == *(longlong *)(lVar16 + -0x2b0 + lVar19)) {
          lVar16 = lVar16 + lVar19;
          if ((*(ulonglong *)(lVar16 + -0x298) < 2) ||
             (uVar13 = 0, *(float *)(lVar16 + -0x278) <= 0.0)) {
                    /* WARNING: Subroutine does not return */
            pdb_142dc83b0(&UNK_143059e50,0x32,&UNK_14302c778);
          }
          puVar2 = param_1 + 7;
          lVar6 = param_1[10];
          uStack_98 = param_2;
          uStack_150 = pdb_140df1760(puVar2,lVar6);
          uVar11 = *(ulonglong *)(lVar16 + -0x1c0);
          uStack_14c = uVar13;
          pdb_140df3e10(puVar2,lVar6);
          uVar10 = pdb_1419aab30(lVar16 + -0x220);
          uVar15 = (ulonglong)uVar10;
          pdb_140df3e10(puVar2,lVar6 + 1);
          uVar10 = pdb_1419aab30(lVar16 + -0x220);
          fVar24 = _DAT_142e36f50;
          uVar7 = *(ulonglong *)(lVar16 + -0x210);
          if (uVar7 <= uVar15) {
                    /* WARNING: Subroutine does not return */
            pdb_142dc81f2(uVar15,uVar7,&UNK_14335e4e0);
          }
          uVar3 = uVar15 + 1;
          if (uVar7 <= uVar3) {
                    /* WARNING: Subroutine does not return */
            pdb_142dc81f2(uVar3,uVar7,&UNK_14335e4f8);
          }
          uVar12 = (ulonglong)uVar10;
          if (uVar7 <= uVar12) {
                    /* WARNING: Subroutine does not return */
            pdb_142dc81f2(uVar12,uVar7,&UNK_14335e4e0);
          }
          uVar4 = uVar12 + 1;
          if (uVar7 <= uVar4) {
                    /* WARNING: Subroutine does not return */
            pdb_142dc81f2(uVar4,uVar7,&UNK_14335e4f8);
          }
          if (uVar11 <= uVar15) {
                    /* WARNING: Subroutine does not return */
            pdb_142dc81f2(uVar15,uVar11,&UNK_14302c7a8);
          }
          if (uVar11 <= uVar3) {
                    /* WARNING: Subroutine does not return */
            pdb_142dc81f2(uVar3,uVar11,&UNK_14302c7a8);
          }
          if (uVar11 <= uVar12) {
                    /* WARNING: Subroutine does not return */
            pdb_142dc81f2(uVar12,uVar11,&UNK_14302c7c0);
          }
          if (uVar11 <= uVar4) {
                    /* WARNING: Subroutine does not return */
            pdb_142dc81f2(uVar4,uVar11,&UNK_14302c7c0);
          }
          lVar16 = *(longlong *)(lVar16 + -0x218);
          fVar29 = *(float *)(lVar16 + 4 + uVar3 * 0xc) * extraout_XMM0_Da +
                   (_DAT_142e36f28 - extraout_XMM0_Da) * *(float *)(lVar16 + 4 + uVar15 * 0xc);
          fVar25 = *(float *)(lVar16 + 4 + uVar4 * 0xc) * extraout_XMM0_Da_00 +
                   (_DAT_142e36f28 - extraout_XMM0_Da_00) * *(float *)(lVar16 + 4 + uVar12 * 0xc);
          fVar28 = fVar25;
          if (fVar25 <= fVar29) {
            fVar28 = fVar29;
          }
          fVar28 = (float)(~-(uint)NAN(fVar29) & (uint)fVar28 | -(uint)NAN(fVar29) & (uint)fVar25);
          fVar21 = (float)pdb_140df3e10(param_1 + 7,lVar6);
          fVar32 = fVar28;
          fVar22 = (float)pdb_140df3e10(param_1 + 7,lVar6 + 1);
          fVar29 = _UNK_142e36f64;
          fVar25 = _DAT_142e36f60;
          auStack_90[0] =
               CONCAT44(fVar32 * _UNK_142e36f64 + fVar28 * _UNK_142e36f64,
                        fVar22 * _DAT_142e36f60 + fVar21 * _DAT_142e36f60);
          pdb_140df4540(&fStack_188,auStack_90);
          pdb_140df4520(&uStack_148,&uStack_150);
          fVar21 = fStack_188 + SUB84(uStack_148,0) * _DAT_14302c610 * fVar25;
          fVar22 = fStack_184 + (float)((ulonglong)uStack_148 >> 0x20) * _UNK_14302c614 * fVar29;
          fVar32 = (float)uStack_140 * _DAT_14302c60c * fVar24 + fStack_180;
          pdb_140df4520(&fStack_188,&uStack_150);
          pdb_140de8fd0(&uStack_148,&fStack_188);
          param_1[1] = 0;
          *param_1 = 1;
          *(float *)(param_1 + 2) = (float)uStack_148;
          *(float *)((longlong)param_1 + 0x14) = uStack_148._4_4_;
          *(float *)(param_1 + 3) = (float)uStack_140;
          *(float *)((longlong)param_1 + 0x1c) = uStack_140._4_4_;
          param_1[4] = CONCAT44(fVar22,fVar21);
          *(float *)(param_1 + 5) = fVar32;
          fVar28 = (float)uStack_140 * (float)uStack_140;
          fVar25 = uStack_140._4_4_ * uStack_140._4_4_;
          fVar29 = uStack_148._4_4_ * uStack_148._4_4_ + (float)uStack_148 * (float)uStack_148;
          fVar24 = _UNK_142e378f8 * (float)uStack_140 +
                   _UNK_142e378f4 * uStack_148._4_4_ + _DAT_142e378f0 * (float)uStack_148;
          fVar24 = fVar24 + fVar24;
          uStack_140._4_4_ = uStack_140._4_4_ + uStack_140._4_4_;
          fStack_130 = uStack_140._4_4_ * ((float)uStack_148 * 0.0 - uStack_148._4_4_ * 0.0) +
                       fVar24 * (float)uStack_140 + (fVar25 - (fVar29 + fVar28)) * _UNK_142e378f8 +
                       fVar32;
          uStack_138 = CONCAT44(fVar22 + uStack_140._4_4_ *
                                         ((float)uStack_140 * 0.0 -
                                         (float)uStack_148 * _DAT_142e36f28) +
                                         fVar24 * uStack_148._4_4_ +
                                         (fVar25 - (fVar29 + fVar28)) * _UNK_142e378f4,
                                fVar21 + uStack_140._4_4_ *
                                         (uStack_148._4_4_ * _DAT_142e36f28 -
                                         (float)uStack_140 * 0.0) +
                                         fVar24 * (float)uStack_148 +
                                         (fVar25 - (fVar29 + fVar28)) * _DAT_142e378f0);
          uStack_12c = 0;
          uStack_12a = 0x3f80;
          uStack_128 = 0x3f800000;
          uStack_124 = 0x3f800000;
          pdb_140b3d590(&fStack_188,_DAT_142e36f28);
          uStack_160 = CONCAT44(uStack_17c,fStack_180);
          uStack_168 = SUB41(fStack_188,0);
          uStack_167 = (undefined4)(CONCAT44(fStack_184,fStack_188) >> 8);
          uStack_163 = (undefined2)((uint)fStack_184 >> 8);
          uStack_161 = (undefined1)((uint)fStack_184 >> 0x18);
          uStack_158 = uStack_178;
          uStack_170 = 2;
          bStack_a0 = *(byte *)(param_1 + 0xb) ^ 1;
          param_2 = uStack_98;
          goto LAB_1409cba11;
        }
        uVar18 = (ushort)(uVar10 - 1) & (ushort)uVar10;
        uVar10 = CONCAT22((short)(uVar10 - 1 >> 0x10),uVar18);
      }
      auVar26[0] = -(auVar5[0] == -1);
      auVar26[1] = -(auVar5[1] == -1);
      auVar26[2] = -(auVar5[2] == -1);
      auVar26[3] = -(auVar5[3] == -1);
      auVar26[4] = -(auVar5[4] == -1);
      auVar26[5] = -(auVar5[5] == -1);
      auVar26[6] = -(auVar5[6] == -1);
      auVar26[7] = -(auVar5[7] == -1);
      auVar26[8] = -(auVar5[8] == -1);
      auVar26[9] = -(auVar5[9] == -1);
      auVar26[10] = -(auVar5[10] == -1);
      auVar26[0xb] = -(auVar5[0xb] == -1);
      auVar26[0xc] = -(auVar5[0xc] == -1);
      auVar26[0xd] = -(auVar5[0xd] == -1);
      auVar26[0xe] = -(auVar5[0xe] == -1);
      auVar26[0xf] = -(auVar5[0xf] == -1);
      if ((((((((((((((((SUB161(auVar26 >> 7,0) & 1) != 0 || (SUB161(auVar26 >> 0xf,0) & 1) != 0) ||
                      (SUB161(auVar26 >> 0x17,0) & 1) != 0) || (SUB161(auVar26 >> 0x1f,0) & 1) != 0)
                    || (SUB161(auVar26 >> 0x27,0) & 1) != 0) || (SUB161(auVar26 >> 0x2f,0) & 1) != 0
                   ) || (SUB161(auVar26 >> 0x37,0) & 1) != 0) ||
                 (SUB161(auVar26 >> 0x3f,0) & 1) != 0) || (SUB161(auVar26 >> 0x47,0) & 1) != 0) ||
               (SUB161(auVar26 >> 0x4f,0) & 1) != 0) || (SUB161(auVar26 >> 0x57,0) & 1) != 0) ||
             (SUB161(auVar26 >> 0x5f,0) & 1) != 0) || (SUB161(auVar26 >> 0x67,0) & 1) != 0) ||
           (SUB161(auVar26 >> 0x6f,0) & 1) != 0) || (SUB161(auVar26 >> 0x77,0) & 1) != 0) ||
          auVar26[0xf] < '\0') break;
      uVar11 = uVar11 + lVar14 + 0x10;
      lVar14 = lVar14 + 0x10;
    }
  }
                    /* WARNING: Subroutine does not return */
  pdb_142dc8150(&UNK_14302c790);
}

