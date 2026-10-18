// VA 0x140c644f0, PDB extent 8397 bytes
// country_core::systems::ui_focus_mode_shape_height::ui_focus_mode_shape_height
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/ui_focus_mode_shape_height.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::systems::ui_focus_mode_shape_height::ui_focus_mode_shape_height
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/ui_focus_mode_shape_height.rs
   Extent: 8397 */

void pdb_140c644f0(undefined8 *param_1,longlong *param_2,undefined8 *param_3,undefined8 *param_4,
                  longlong *param_5,longlong *param_6,longlong *param_7,longlong *param_8,
                  longlong *param_9,undefined8 *param_10,longlong *param_11,int *param_12)

{
  float fVar1;
  float fVar2;
  char *pcVar3;
  longlong lVar4;
  longlong lVar5;
  code *pcVar6;
  uint uVar7;
  uint uVar8;
  float fVar9;
  byte **ppbVar10;
  ulonglong uVar11;
  bool bVar12;
  ulonglong uVar13;
  float *pfVar14;
  undefined8 uVar15;
  byte *pbVar16;
  byte *pbVar17;
  byte *pbVar18;
  longlong lVar19;
  byte **ppbVar20;
  uint uVar21;
  ushort uVar22;
  longlong lVar23;
  float fVar24;
  longlong lVar25;
  byte bVar26;
  undefined1 auVar27 [16];
  float fVar28;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar42;
  float fVar43;
  undefined1 auVar41 [16];
  float fVar44;
  float fVar45;
  float fVar47;
  float fVar48;
  undefined1 auVar46 [16];
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  float fVar56;
  undefined4 uVar57;
  float fVar58;
  float fVar59;
  float fVar60;
  float fVar61;
  byte *pbStack_248;
  code *pcStack_240;
  byte *pbStack_234;
  int iStack_22c;
  longlong lStack_228;
  longlong lStack_220;
  undefined8 uStack_218;
  byte *pbStack_210;
  float fStack_208;
  float fStack_204;
  float fStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  ulonglong uStack_1e8;
  code *pcStack_1e0;
  ulonglong uStack_1d8;
  byte *pbStack_1d0;
  undefined8 uStack_1c8;
  undefined4 uStack_1b8;
  undefined2 uStack_1b4;
  undefined4 uStack_1b0;
  undefined4 uStack_198;
  undefined1 uStack_180;
  undefined1 uStack_170;
  undefined4 uStack_16c;
  undefined8 uStack_168;
  float fStack_160;
  undefined2 uStack_150;
  byte *pbStack_148;
  float fStack_13c;
  longlong lStack_138;
  float *pfStack_130;
  byte *pbStack_128;
  byte *pbStack_120;
  byte *pbStack_118;
  float *pfStack_110;
  ulonglong uStack_108;
  undefined1 uStack_f1;
  undefined8 uStack_f0;
  
  uStack_f0 = 0xfffffffffffffffe;
  pcVar3 = (char *)*param_1;
  if ((*pcVar3 != '\0') || (1 < *(int *)(pcVar3 + 8) - 1U)) {
    *param_12 = 0;
    return;
  }
  lVar4 = *(longlong *)(pcVar3 + 0x10);
  param_2 = (longlong *)*param_2;
  uStack_1f8 = (byte **)lVar4;
  lStack_138 = lVar4;
  if (param_2[3] == 0) {
LAB_140c647a2:
                    /* WARNING: Subroutine does not return */
    pdb_142dc8150(&UNK_143070940);
  }
  uVar13 = pdb_1400af0a0(param_2 + 4,&uStack_1f8);
  lVar25 = *param_2;
  bVar26 = (byte)(uVar13 >> 0x39);
  auVar27 = ZEXT216(CONCAT11(bVar26,bVar26));
  auVar27 = pshuflw(auVar27,auVar27,0);
  lVar19 = 0;
  do {
    uVar13 = uVar13 & param_2[1];
    auVar29 = *(undefined1 (*) [16])(lVar25 + uVar13);
    auVar46[0] = -(auVar29[0] == auVar27[0]);
    auVar46[1] = -(auVar29[1] == auVar27[1]);
    auVar46[2] = -(auVar29[2] == auVar27[2]);
    auVar46[3] = -(auVar29[3] == auVar27[3]);
    auVar46[4] = -(auVar29[4] == auVar27[4]);
    auVar46[5] = -(auVar29[5] == auVar27[5]);
    auVar46[6] = -(auVar29[6] == auVar27[6]);
    auVar46[7] = -(auVar29[7] == auVar27[7]);
    auVar46[8] = -(auVar29[8] == auVar27[0]);
    auVar46[9] = -(auVar29[9] == auVar27[1]);
    auVar46[10] = -(auVar29[10] == auVar27[2]);
    auVar46[0xb] = -(auVar29[0xb] == auVar27[3]);
    auVar46[0xc] = -(auVar29[0xc] == auVar27[4]);
    auVar46[0xd] = -(auVar29[0xd] == auVar27[5]);
    auVar46[0xe] = -(auVar29[0xe] == auVar27[6]);
    auVar46[0xf] = -(auVar29[0xf] == auVar27[7]);
    uVar22 = (ushort)(SUB161(auVar46 >> 7,0) & 1) | (ushort)(SUB161(auVar46 >> 0xf,0) & 1) << 1 |
             (ushort)(SUB161(auVar46 >> 0x17,0) & 1) << 2 |
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
             (ushort)(SUB161(auVar46 >> 0x77,0) & 1) << 0xe | (ushort)(auVar46[0xf] >> 7) << 0xf;
    uVar21 = (uint)uVar22;
    while (uVar22 != 0) {
      uVar7 = 0;
      for (uVar8 = uVar21; (uVar8 & 1) == 0; uVar8 = uVar8 >> 1 | 0x80000000) {
        uVar7 = uVar7 + 1;
      }
      lVar23 = (uVar7 + uVar13 & param_2[1]) * -0x2b0;
      if (lVar4 == *(longlong *)(lVar25 + -0x2b0 + lVar23)) {
        lVar25 = lVar25 + lVar23;
        if ((*(ulonglong *)(lVar25 + -0x298) < 2) || (*(float *)(lVar25 + -0x278) <= 0.0)) {
                    /* WARNING: Subroutine does not return */
          pdb_142dc83b0(&UNK_143059e50,0x32,&UNK_143070928);
        }
        if (1 < *(uint *)(lVar25 + -0x50)) {
          return;
        }
        uVar15 = *param_4;
        pdb_140e09030(&uStack_1f8,uVar15);
        pbStack_118 = (byte *)CONCAT44((float)uStack_1f0,(int)uStack_1f8);
        pdb_140df4540(&uStack_1f8,&pbStack_118,0);
        fVar24 = (float)uStack_1f0;
        fVar39 = SUB84(uStack_1f8,0);
        fVar40 = (float)((ulonglong)uStack_1f8 >> 0x20);
        uStack_218 = uVar15;
        pdb_140c66770(&pbStack_234,lVar25 + -0x2a8,*param_3,uVar15);
        if (*param_12 == 0) {
          param_12[3] = iStack_22c;
        }
        else {
          uStack_1f0 = (code *)CONCAT44(uStack_1f0._4_4_,param_12[3]);
          uStack_1f8 = *(byte ***)(param_12 + 1);
          pdb_140de9a40(&pbStack_118,&uStack_1f8,&pbStack_234,*(undefined4 *)(*param_11 + 0x28),
                        0x41a00000);
          param_12[3] = (int)pfStack_110;
          pbStack_234 = pbStack_118;
        }
        *(byte **)(param_12 + 1) = pbStack_234;
        *param_12 = 1;
        fVar1 = (float)param_12[1];
        fVar36 = (float)param_12[2];
        fVar2 = (float)param_12[3];
        uStack_1f8 = (byte **)CONCAT44(fVar2,fVar1);
        if (*(char *)(lVar25 + -0x1a0) == '\0') {
          pdb_142d8e040();
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        pdb_140df4540(&fStack_208,&uStack_1f8);
        pdb_14007ee60();
        pfVar14 = (float *)pub_1406abab0(0x18,4);
        if (pfVar14 == (float *)0x0) {
                    /* WARNING: Subroutine does not return */
          pdb_142dc7e11(4,0x18);
        }
        *pfVar14 = fVar1;
        pfVar14[1] = fVar36;
        pfVar14[2] = fVar2;
        *(ulonglong *)(pfVar14 + 3) = CONCAT44(fStack_204,fStack_208);
        pfVar14[5] = fStack_200;
        uStack_1f8 = (byte **)0x2;
        uStack_1e8 = 2;
        pcStack_1e0 = (code *)0x8000000000000000;
        uStack_1c8 = (undefined *)((ulonglong)uStack_1c8._4_4_ << 0x20);
        uStack_1b8 = 0x40800000;
        uStack_1b4 = 1;
        pbVar18 = (byte *)*param_10;
        pcStack_240 = pdb_140c04ef0;
        uStack_f1 = 1;
        pbStack_248 = (byte *)&lStack_138;
        uStack_1f0 = (code *)pfVar14;
        pdb_140f60760(&pbStack_118,&UNK_143070958,&pbStack_248);
        pbStack_120 = pbStack_118;
        pbStack_128 = (byte *)pfStack_110;
        pbStack_118 = (byte *)pfStack_110;
        pfStack_110 = (float *)uStack_108;
        uVar15 = pdb_140bbbcb0(&pbStack_118);
        if (pbStack_120 != (byte *)0x0) {
          pub_1406abac0(pbStack_128,(ulonglong)pbStack_120,1);
        }
        pbStack_120 = (byte *)*param_5;
        if ((pbStack_120[0x18] == 2) && (pbStack_120[0x19] == 4)) {
          bVar12 = _DAT_14301e000 <= *(float *)(pbStack_120 + 200);
        }
        else {
          bVar12 = false;
        }
        uStack_108 = CONCAT71(uStack_108._1_7_,bVar12);
        uStack_f1 = 0;
        pbStack_118 = pbVar18;
        pfStack_110 = (float *)uVar15;
        pdb_140ab32d0(&uStack_1f8,&pbStack_118);
        fVar9 = _DAT_142e36f28;
        fVar56 = _DAT_142e36f28 / SQRT(fVar40 * fVar40 + fVar39 * fVar39 + fVar24 * fVar24);
        fVar54 = fVar56 * fVar39 * _DAT_143065e90;
        fVar55 = fVar56 * fVar40 * _UNK_143065e94;
        fVar56 = fVar56 * fVar24 * _DAT_142e37838;
        pfStack_110 = (float *)pdb_140c04ef0;
        pbStack_118 = (byte *)&lStack_138;
        pdb_140f60760(&uStack_1f8,&UNK_14307096d,&pbStack_118);
        pbStack_118 = (byte *)uStack_1f8;
        pfStack_110 = (float *)uStack_1f0;
        uStack_108 = uStack_1e8;
        fStack_160 = fStack_200;
        uStack_168 = CONCAT44(fStack_204,fStack_208);
        uStack_1f8 = (byte **)0x0;
        uStack_1f0 = (code *)0x8;
        uStack_1e8 = 0;
        pcStack_1e0 = (code *)CONCAT44(pcStack_1e0._4_4_,1);
        uStack_1d8 = 1;
        uStack_1c8 = (undefined *)CONCAT44(uStack_1c8._4_4_,2);
        uStack_1b0 = 3;
        uStack_198 = 3;
        uStack_180 = 0;
        uStack_170 = 0;
        uStack_16c = 0x3f000000;
        uStack_150 = 0x100;
        ppbVar20 = &pbStack_118;
        lVar19 = pdb_1409008d0(pbStack_120,ppbVar20,&uStack_1f8);
        fVar40 = fStack_200;
        fVar39 = fStack_204;
        fVar24 = fStack_208;
        uVar57 = _DAT_142e3c658;
        lStack_220 = lVar4;
        fStack_13c = fVar36;
        if (*(char *)(lVar19 + 0x18) != '\0') {
          if ((*(byte ***)(lVar19 + 0x38) == ppbVar20) && (*(int *)(lVar19 + 0x28) != 2)) {
            fVar36 = *(float *)(lVar25 + -0x20);
            if (_DAT_142e3783c < fVar36) {
              pdb_140e09030(&uStack_1f8,uStack_218);
              auVar27._0_4_ = (float)(_DAT_142e37820 ^ (uint)(float)uStack_1f0);
              auVar27._4_4_ = _UNK_142e37824;
              auVar27._8_4_ = _UNK_142e37828;
              auVar27._12_4_ = _UNK_142e3782c;
              fVar36 = fVar9 / SQRT((float)uStack_1f8 * (float)uStack_1f8 +
                                    (float)uStack_1f0 * (float)uStack_1f0);
              auVar29._4_12_ = auVar27._4_12_;
              auVar29._0_4_ = auVar27._0_4_ * fVar36;
              pdb_140de88f0(&uStack_1f8,auVar29._0_8_,fVar36 * (float)uStack_1f8);
              fVar36 = (float)uStack_1f8;
              fVar38 = uStack_1f8._4_4_;
              fVar61 = (float)uStack_1f0;
              fVar44 = uStack_1f0._4_4_;
              uStack_1e8 = *param_11 + 0x2c;
              uStack_1f0 = pdb_140c6b520;
              pcStack_1e0 = pdb_140001000;
              uStack_1f8 = (byte **)&lStack_138;
              pdb_140f60760(&pbStack_118,&UNK_14307097c,&uStack_1f8);
              uVar13 = uStack_108;
              pbStack_128 = pbStack_118;
              pfStack_130 = pfStack_110;
              pdb_14007ee60();
              pbStack_148 = pub_1406abab0(0x30,0x10);
              if (pbStack_148 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
                pdb_142dc7e11(0x10,0x30);
              }
              fVar28 = fVar55 * _DAT_142f95160;
              fVar37 = fVar44 * _DAT_143070220;
              fVar42 = fVar44 * _UNK_143070224;
              fVar43 = fVar44 * _UNK_143070228;
              fVar44 = fVar44 * _UNK_14307022c;
              fVar45 = fVar36 * _DAT_143070230 * _DAT_142e377b0;
              fVar47 = fVar36 * _UNK_143070234 * _UNK_142e377b4;
              fVar48 = fVar36 * _UNK_143070238 * _UNK_142e377b8;
              fVar49 = fVar36 * _UNK_14307023c * _UNK_142e377bc;
              fVar50 = fVar38 * _DAT_143070240 * _DAT_142e377c0;
              fVar51 = fVar38 * _UNK_143070244 * _UNK_142e377c4;
              fVar52 = fVar38 * _UNK_143070248 * _UNK_142e377c8;
              fVar53 = fVar38 * _UNK_14307024c * _UNK_142e377cc;
              fVar58 = fVar61 * _DAT_143028db0 * _DAT_142e377d0;
              fVar59 = fVar61 * _UNK_143028db4 * _UNK_142e377d4;
              fVar60 = fVar61 * _UNK_143028db8 * _UNK_142e377d8;
              fVar61 = fVar61 * _UNK_143028dbc * _UNK_142e377dc;
              fVar38 = fVar56 * _DAT_142f95160;
              fVar36 = _DAT_142f95160 * fVar54;
              pbStack_148[0] = 1;
              pbStack_148[1] = 0;
              pbStack_148[2] = 0;
              pbStack_148[3] = 0;
              pbStack_148[4] = 0;
              pbStack_148[5] = 0;
              pbStack_148[6] = 0;
              pbStack_148[7] = 0;
              pbStack_148[8] = 1;
              pbStack_148[9] = 0;
              pbStack_148[10] = 0;
              pbStack_148[0xb] = 0;
              pbStack_148[0xc] = 0;
              pbStack_148[0xd] = 0;
              pbStack_148[0xe] = 0;
              pbStack_148[0xf] = 0;
              *(float *)(pbStack_148 + 0x10) = fVar58 + fVar50 + fVar45 + fVar37;
              *(float *)(pbStack_148 + 0x14) = fVar59 + fVar51 + fVar47 + fVar42;
              *(float *)(pbStack_148 + 0x18) = fVar60 + fVar52 + fVar48 + fVar43;
              *(float *)(pbStack_148 + 0x1c) = fVar61 + fVar53 + fVar49 + fVar44;
              *(ulonglong *)(pbStack_148 + 0x20) =
                   CONCAT44(_UNK_143070254 + fVar28 + fVar39,fVar24 + fVar36);
              *(float *)(pbStack_148 + 0x28) = fVar38 + fVar40;
              uStack_1f0 = (code *)&UNK_143070998;
              uStack_1f8 = (byte **)pbStack_148;
              if ((longlong)uVar13 < 0) {
                uVar15 = 0;
LAB_140c64c7b:
                pdb_142dc7e2a(uVar15,uVar13);
                goto LAB_140c65968;
              }
              pbStack_210 = pbVar18;
              if (uVar13 == 0) {
                pbVar16 = (byte *)0x1;
              }
              else {
                pdb_14007ee60();
                uVar15 = 1;
                pbVar16 = pub_1406abab0(uVar13,1);
                if (pbVar16 == (byte *)0x0) goto LAB_140c64c7b;
                pub_142e32760(pbVar16,pfStack_130,uVar13);
              }
              pbVar18 = pbStack_210;
              uStack_1f0 = (code *)((ulonglong)uStack_1f0 & 0xffffffffffffff00);
              uStack_1e8 = uVar13;
              uStack_1d8 = uVar13;
              pbStack_1d0 = pbStack_148;
              uStack_1c8 = &UNK_143070998;
              uStack_1f8 = ppbVar20;
              pcStack_1e0 = (code *)pbVar16;
              pdb_141a88350(pbStack_210,&uStack_1f8);
              if (pbStack_128 != (byte *)0x0) {
                pub_1406abac0((byte *)pfStack_130,(ulonglong)pbStack_128,1);
              }
              fVar36 = *(float *)(lVar25 + -0x20);
            }
            fVar40 = fStack_200;
            fVar39 = fStack_204;
            fVar24 = fStack_208;
            if (fVar36 < _DAT_143008730) {
              pdb_140e09030(&uStack_1f8,uStack_218);
              auVar30._0_4_ = (float)(_DAT_142e37820 ^ (uint)(float)uStack_1f0);
              auVar30._4_4_ = _UNK_142e37824;
              auVar30._8_4_ = _UNK_142e37828;
              auVar30._12_4_ = _UNK_142e3782c;
              fVar36 = fVar9 / SQRT((float)uStack_1f8 * (float)uStack_1f8 +
                                    (float)uStack_1f0 * (float)uStack_1f0);
              auVar31._4_12_ = auVar30._4_12_;
              auVar31._0_4_ = auVar30._0_4_ * fVar36;
              pdb_140de88f0(&uStack_1f8,auVar31._0_8_,fVar36 * (float)uStack_1f8);
              uVar13 = (ulonglong)uStack_1f0;
              ppbVar10 = uStack_1f8;
              uStack_1e8 = *param_11 + 0x2c;
              uStack_1f0 = pdb_140c6b520;
              pcStack_1e0 = pdb_140001000;
              uStack_1f8 = (byte **)&lStack_138;
              pdb_140f60760(&pbStack_118,&UNK_1430709c8,&uStack_1f8);
              uVar11 = uStack_108;
              pbStack_128 = pbStack_118;
              pfStack_130 = pfStack_110;
              pdb_14007ee60();
              pbVar16 = pub_1406abab0(0x30,0x10);
              if (pbVar16 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
                pdb_142dc7e11(0x10,0x30);
              }
              fVar36 = _DAT_142f95160 * fVar56;
              pbVar16[0] = 1;
              pbVar16[1] = 0;
              pbVar16[2] = 0;
              pbVar16[3] = 0;
              pbVar16[4] = 0;
              pbVar16[5] = 0;
              pbVar16[6] = 0;
              pbVar16[7] = 0;
              pbVar16[8] = 1;
              pbVar16[9] = 0;
              pbVar16[10] = 0;
              pbVar16[0xb] = 0;
              pbVar16[0xc] = 0;
              pbVar16[0xd] = 0;
              pbVar16[0xe] = 0;
              pbVar16[0xf] = 0;
              *(byte ***)(pbVar16 + 0x10) = ppbVar10;
              *(ulonglong *)(pbVar16 + 0x18) = uVar13;
              *(ulonglong *)(pbVar16 + 0x20) =
                   CONCAT44(_UNK_143015124 * fVar55 + fVar39 + _UNK_143070264,
                            _DAT_143015120 * fVar54 + fVar24 + _DAT_143070260);
              *(float *)(pbVar16 + 0x28) = fVar36 + fVar40 + 0.0;
              uStack_1f0 = (code *)&UNK_1430709e0;
              uStack_1f8 = (byte **)pbVar16;
              pbStack_148 = pbVar16;
              if ((longlong)uVar11 < 0) {
                uVar15 = 0;
LAB_140c64e89:
                pdb_142dc7e2a(uVar15,uVar11);
                goto LAB_140c65968;
              }
              if (uVar11 == 0) {
                pbVar16 = (byte *)0x1;
              }
              else {
                pdb_14007ee60();
                pbVar16 = pub_1406abab0(uVar11,1);
                uVar15 = 1;
                if (pbVar16 == (byte *)0x0) goto LAB_140c64e89;
                pub_142e32760(pbVar16,pfStack_130,uVar11);
              }
              uStack_1f0 = (code *)((ulonglong)uStack_1f0 & 0xffffffffffffff00);
              uStack_1e8 = uVar11;
              uStack_1d8 = uVar11;
              pbStack_1d0 = pbStack_148;
              uStack_1c8 = &UNK_1430709e0;
              uStack_1f8 = ppbVar20;
              pcStack_1e0 = (code *)pbVar16;
              pdb_141a88350(pbVar18,&uStack_1f8);
              if (pbStack_128 != (byte *)0x0) {
                pub_1406abac0((byte *)pfStack_130,(ulonglong)pbStack_128,1);
              }
            }
          }
          if ((*(char *)(lVar19 + 0x18) != '\0') && (*(byte ***)(lVar19 + 0x38) == ppbVar20)) {
            uVar57 = *(undefined4 *)(&UNK_143070270 + (ulonglong)(*(int *)(lVar19 + 0x28) == 2) * 4)
            ;
          }
        }
        uStack_1f8 = (byte **)&lStack_138;
        lStack_228 = *param_11 + 0x2c;
        uStack_1f0 = pdb_140c6b520;
        pcStack_1e0 = pdb_140001000;
        uStack_1e8 = lStack_228;
        pdb_140f60760(&pbStack_118,&UNK_143070a10,&uStack_1f8);
        uVar13 = uStack_108;
        pbVar16 = pbStack_118;
        pfStack_130 = pfStack_110;
        pdb_14007ee60();
        pbVar17 = pub_1406abab0(0x20,8);
        pbStack_128 = pbVar16;
        if (pbVar17 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
          pdb_142dc7e11(8,0x20);
        }
        pbVar17[0] = 1;
        pbVar17[1] = 0;
        pbVar17[2] = 0;
        pbVar17[3] = 0;
        pbVar17[4] = 0;
        pbVar17[5] = 0;
        pbVar17[6] = 0;
        pbVar17[7] = 0;
        pbVar17[8] = 1;
        pbVar17[9] = 0;
        pbVar17[10] = 0;
        pbVar17[0xb] = 0;
        pbVar17[0xc] = 0;
        pbVar17[0xd] = 0;
        pbVar17[0xe] = 0;
        pbVar17[0xf] = 0;
        *(ulonglong *)(pbVar17 + 0x10) = CONCAT44(fStack_204,fStack_208);
        *(float *)(pbVar17 + 0x18) = fStack_200;
        *(undefined4 *)(pbVar17 + 0x1c) = uVar57;
        uStack_1f0 = (code *)&UNK_143070a28;
        uStack_1f8 = (byte **)pbVar17;
        pbStack_148 = pbVar17;
        if ((longlong)uVar13 < 0) {
          uVar15 = 0;
LAB_140c6502a:
          pdb_142dc7e2a(uVar15,uVar13);
          goto LAB_140c65968;
        }
        pbStack_210 = pbVar18;
        if (uVar13 == 0) {
          pbVar18 = (byte *)0x1;
        }
        else {
          pdb_14007ee60();
          uVar15 = 1;
          pbVar18 = pub_1406abab0(uVar13,1);
          if (pbVar18 == (byte *)0x0) goto LAB_140c6502a;
          pub_142e32760(pbVar18,pfStack_130,uVar13);
        }
        uStack_1f0 = (code *)((ulonglong)uStack_1f0 & 0xffffffffffffff00);
        uStack_1e8 = uVar13;
        uStack_1d8 = uVar13;
        pbStack_1d0 = pbStack_148;
        uStack_1c8 = &UNK_143070a28;
        uStack_1f8 = ppbVar20;
        pcStack_1e0 = (code *)pbVar18;
        pdb_141a88350(pbStack_210,&uStack_1f8);
        fVar24 = fStack_13c;
        if (pbStack_128 != (byte *)0x0) {
          pub_1406abac0((byte *)pfStack_130,(ulonglong)pbStack_128,1);
        }
        lVar4 = lStack_220;
        if ((*(char *)(lVar19 + 0x18) == '\x02') && (*(byte ***)(lVar19 + 0x38) == ppbVar20)) {
          bVar26 = *(byte *)(lVar19 + 0x19);
          if (bVar26 < 2) {
            *(undefined4 *)param_6[2] = *(undefined4 *)((longlong)param_6 + 0x1c);
            lVar19 = *param_6;
            lVar23 = *(longlong *)(lVar19 + 0x30);
            uVar15 = *(undefined8 *)(lVar19 + 0x40);
            if (lVar23 == *(longlong *)(lVar19 + 0x20)) {
              pdb_142d7e980(lVar19 + 0x20);
            }
            lVar4 = *(longlong *)(lVar19 + 0x28);
            *(undefined8 *)(lVar4 + lVar23 * 0x10) = uVar15;
            *(longlong *)(lVar4 + 8 + lVar23 * 0x10) = lStack_220;
          }
          else {
            if (bVar26 == 2) goto LAB_140c6521a;
            if (bVar26 == 3) {
              *(undefined4 *)param_7[2] = *(undefined4 *)((longlong)param_7 + 0x1c);
              lVar19 = *param_7;
              lVar23 = *(longlong *)(lVar19 + 0x30);
              uVar15 = *(undefined8 *)(lVar19 + 0x40);
              if (lVar23 == *(longlong *)(lVar19 + 0x20)) {
                pdb_142d7e980(lVar19 + 0x20);
              }
              lVar5 = *(longlong *)(lVar19 + 0x28);
              *(undefined8 *)(lVar5 + lVar23 * 0x10) = uVar15;
              *(longlong *)(lVar5 + 8 + lVar23 * 0x10) = lVar4;
              *(longlong *)(lVar19 + 0x30) = lVar23 + 1;
              *(longlong *)(lVar19 + 0x40) = *(longlong *)(lVar19 + 0x40) + 1;
              *(undefined4 *)param_8[2] = *(undefined4 *)((longlong)param_8 + 0x1c);
              lVar19 = *param_8;
              lVar23 = *(longlong *)(lVar19 + 0x30);
              uVar15 = *(undefined8 *)(lVar19 + 0x40);
              if (lVar23 == *(longlong *)(lVar19 + 0x20)) {
                pdb_142d7e8a0(lVar19 + 0x20);
              }
              *(undefined8 *)(*(longlong *)(lVar19 + 0x28) + lVar23 * 8) = uVar15;
            }
            else {
              *(undefined4 *)param_7[2] = *(undefined4 *)((longlong)param_7 + 0x1c);
              lVar19 = *param_7;
              lVar23 = *(longlong *)(lVar19 + 0x30);
              uVar15 = *(undefined8 *)(lVar19 + 0x40);
              if (lVar23 == *(longlong *)(lVar19 + 0x20)) {
                pdb_142d7e980(lVar19 + 0x20);
              }
              lVar5 = *(longlong *)(lVar19 + 0x28);
              *(undefined8 *)(lVar5 + lVar23 * 0x10) = uVar15;
              *(longlong *)(lVar5 + 8 + lVar23 * 0x10) = lVar4;
            }
          }
          *(longlong *)(lVar19 + 0x30) = lVar23 + 1;
          *(longlong *)(lVar19 + 0x40) = *(longlong *)(lVar19 + 0x40) + 1;
        }
LAB_140c6521a:
        uStack_1f0 = pdb_140c04ef0;
        ppbVar20 = &pbStack_118;
        uStack_1f8 = (byte **)&lStack_138;
        pdb_140f60760(ppbVar20,&UNK_143070a58,&uStack_1f8);
        uStack_1f8 = (byte **)0x0;
        uStack_1f0 = (code *)0x8;
        uStack_1e8 = 0;
        pcStack_1e0 = (code *)CONCAT44(pcStack_1e0._4_4_,1);
        uStack_1d8 = 1;
        uStack_1c8 = (undefined *)CONCAT44(uStack_1c8._4_4_,2);
        uStack_1b0 = 3;
        uStack_198 = 3;
        uStack_180 = 0;
        uStack_170 = 0;
        uStack_16c = 0x3f000000;
        uStack_168 = CONCAT44(fVar24,fVar1);
        uStack_150 = 0x100;
        fStack_160 = fVar2;
        pbVar18 = (byte *)pdb_1409008d0(pbStack_120,ppbVar20,&uStack_1f8);
        uVar57 = _DAT_142e3c658;
        if (pbVar18[0x18] != 0) {
          if ((*(byte ***)(pbVar18 + 0x38) == ppbVar20) && (*(int *)(pbVar18 + 0x28) != 2)) {
            fVar39 = *(float *)(lVar25 + -0x24);
            if (0.0 < fVar39) {
              pbStack_120 = pbVar18;
              pdb_140e09030(&uStack_1f8,uStack_218);
              auVar32._0_4_ = (float)(_DAT_142e37820 ^ (uint)(float)uStack_1f0);
              auVar32._4_4_ = _UNK_142e37824;
              auVar32._8_4_ = _UNK_142e37828;
              auVar32._12_4_ = _UNK_142e3782c;
              fVar39 = fVar9 / SQRT((float)uStack_1f8 * (float)uStack_1f8 +
                                    (float)uStack_1f0 * (float)uStack_1f0);
              auVar33._4_12_ = auVar32._4_12_;
              auVar33._0_4_ = auVar32._0_4_ * fVar39;
              pdb_140de88f0(&uStack_1f8,auVar33._0_8_,fVar39 * (float)uStack_1f8);
              fVar39 = (float)uStack_1f8;
              fVar40 = uStack_1f8._4_4_;
              fVar36 = (float)uStack_1f0;
              fVar38 = uStack_1f0._4_4_;
              uStack_1f0 = pdb_140c6b520;
              uStack_1e8 = lStack_228;
              pcStack_1e0 = pdb_140001000;
              uStack_1f8 = (byte **)&lStack_138;
              pdb_140f60760(&pbStack_118,&UNK_143070a6a,&uStack_1f8);
              uVar13 = uStack_108;
              pfVar14 = pfStack_110;
              pdb_14007ee60();
              pbVar18 = pub_1406abab0(0x30,0x10);
              if (pbVar18 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
                pdb_142dc7e11(0x10,0x30);
              }
              fVar61 = fVar55 * _DAT_142f95160;
              fVar44 = fVar38 * _DAT_143070220;
              fVar28 = fVar38 * _UNK_143070224;
              fVar37 = fVar38 * _UNK_143070228;
              fVar38 = fVar38 * _UNK_14307022c;
              fVar42 = fVar39 * _DAT_143070230 * _DAT_142e377b0;
              fVar43 = fVar39 * _UNK_143070234 * _UNK_142e377b4;
              fVar45 = fVar39 * _UNK_143070238 * _UNK_142e377b8;
              fVar47 = fVar39 * _UNK_14307023c * _UNK_142e377bc;
              fVar48 = fVar40 * _DAT_143070240 * _DAT_142e377c0;
              fVar49 = fVar40 * _UNK_143070244 * _UNK_142e377c4;
              fVar50 = fVar40 * _UNK_143070248 * _UNK_142e377c8;
              fVar51 = fVar40 * _UNK_14307024c * _UNK_142e377cc;
              fVar52 = fVar36 * _DAT_143028db0 * _DAT_142e377d0;
              fVar53 = fVar36 * _UNK_143028db4 * _UNK_142e377d4;
              fVar58 = fVar36 * _UNK_143028db8 * _UNK_142e377d8;
              fVar36 = fVar36 * _UNK_143028dbc * _UNK_142e377dc;
              fVar40 = fVar56 * _DAT_142f95160;
              fVar39 = _DAT_142f95160 * fVar54;
              pbVar18[0] = 1;
              pbVar18[1] = 0;
              pbVar18[2] = 0;
              pbVar18[3] = 0;
              pbVar18[4] = 0;
              pbVar18[5] = 0;
              pbVar18[6] = 0;
              pbVar18[7] = 0;
              pbVar18[8] = 1;
              pbVar18[9] = 0;
              pbVar18[10] = 0;
              pbVar18[0xb] = 0;
              pbVar18[0xc] = 0;
              pbVar18[0xd] = 0;
              pbVar18[0xe] = 0;
              pbVar18[0xf] = 0;
              *(float *)(pbVar18 + 0x10) = fVar52 + fVar48 + fVar42 + fVar44;
              *(float *)(pbVar18 + 0x14) = fVar53 + fVar49 + fVar43 + fVar28;
              *(float *)(pbVar18 + 0x18) = fVar58 + fVar50 + fVar45 + fVar37;
              *(float *)(pbVar18 + 0x1c) = fVar36 + fVar51 + fVar47 + fVar38;
              *(ulonglong *)(pbVar18 + 0x20) =
                   CONCAT44(_UNK_143070254 + fVar24 + fVar61,fVar1 + fVar39);
              *(float *)(pbVar18 + 0x28) = fVar40 + fVar2;
              uStack_1f0 = (code *)&UNK_143070a88;
              uStack_1f8 = (byte **)pbVar18;
              if ((longlong)uVar13 < 0) {
                uVar15 = 0;
                pbStack_128 = pbVar18;
LAB_140c65490:
                pdb_142dc7e2a(uVar15,uVar13);
                goto LAB_140c65968;
              }
              if (uVar13 == 0) {
                pbVar16 = (byte *)0x1;
              }
              else {
                pbStack_128 = pbVar18;
                pdb_14007ee60();
                uVar15 = 1;
                pbVar16 = pub_1406abab0(uVar13,1);
                if (pbVar16 == (byte *)0x0) goto LAB_140c65490;
                pub_142e32760(pbVar16,pfVar14,uVar13);
                pbVar18 = pbStack_128;
              }
              uStack_1f0 = (code *)((ulonglong)uStack_1f0 & 0xffffffffffffff00);
              uStack_1e8 = uVar13;
              uStack_1d8 = uVar13;
              uStack_1c8 = &UNK_143070a88;
              uStack_1f8 = ppbVar20;
              pcStack_1e0 = (code *)pbVar16;
              pbStack_1d0 = pbVar18;
              pdb_141a88350(pbStack_210,&uStack_1f8);
              fVar24 = fStack_13c;
              if (pbStack_118 != (byte *)0x0) {
                pub_1406abac0((byte *)pfVar14,(ulonglong)pbStack_118,1);
              }
              fVar39 = *(float *)(lVar25 + -0x24);
              pbVar18 = pbStack_120;
            }
            if (fVar39 < _DAT_142f3e554) {
              pbStack_120 = pbVar18;
              pdb_140e09030(&uStack_1f8,uStack_218);
              auVar34._0_4_ = (float)(_DAT_142e37820 ^ (uint)(float)uStack_1f0);
              auVar34._4_4_ = _UNK_142e37824;
              auVar34._8_4_ = _UNK_142e37828;
              auVar34._12_4_ = _UNK_142e3782c;
              auVar35._4_12_ = auVar34._4_12_;
              auVar35._0_4_ =
                   auVar34._0_4_ *
                   (fVar9 / SQRT((float)uStack_1f8 * (float)uStack_1f8 +
                                 (float)uStack_1f0 * (float)uStack_1f0));
              pdb_140de88f0(&uStack_1f8,auVar35._0_8_);
              uVar13 = (ulonglong)uStack_1f0;
              ppbVar10 = uStack_1f8;
              uStack_1f0 = pdb_140c6b520;
              uStack_1e8 = lStack_228;
              pcStack_1e0 = pdb_140001000;
              uStack_1f8 = (byte **)&lStack_138;
              pdb_140f60760(&pbStack_118,&UNK_143070ab8,&uStack_1f8);
              uVar11 = uStack_108;
              pfVar14 = pfStack_110;
              pdb_14007ee60();
              pbVar18 = pub_1406abab0(0x30,0x10);
              if (pbVar18 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
                pdb_142dc7e11(0x10,0x30);
              }
              fVar56 = fVar56 * _DAT_142f95160;
              fVar54 = fVar54 * _DAT_143015120;
              fVar55 = fVar55 * _UNK_143015124;
              pbVar18[0] = 1;
              pbVar18[1] = 0;
              pbVar18[2] = 0;
              pbVar18[3] = 0;
              pbVar18[4] = 0;
              pbVar18[5] = 0;
              pbVar18[6] = 0;
              pbVar18[7] = 0;
              pbVar18[8] = 1;
              pbVar18[9] = 0;
              pbVar18[10] = 0;
              pbVar18[0xb] = 0;
              pbVar18[0xc] = 0;
              pbVar18[0xd] = 0;
              pbVar18[0xe] = 0;
              pbVar18[0xf] = 0;
              *(byte ***)(pbVar18 + 0x10) = ppbVar10;
              *(ulonglong *)(pbVar18 + 0x18) = uVar13;
              *(ulonglong *)(pbVar18 + 0x20) =
                   CONCAT44(fStack_13c + fVar55 + _UNK_143070264,fVar1 + fVar54 + _DAT_143070260);
              *(float *)(pbVar18 + 0x28) = fVar56 + fVar2 + 0.0;
              uStack_1f0 = (code *)&UNK_143070ad8;
              uStack_1f8 = (byte **)pbVar18;
              if ((longlong)uVar11 < 0) {
                uVar15 = 0;
LAB_140c6567c:
                pbStack_120 = pbVar18;
                pdb_142dc7e2a(uVar15,uVar11);
                goto LAB_140c65968;
              }
              if (uVar11 == 0) {
                pbVar16 = (byte *)0x1;
              }
              else {
                pdb_14007ee60();
                uVar15 = 1;
                pbVar16 = pub_1406abab0(uVar11,1);
                if (pbVar16 == (byte *)0x0) goto LAB_140c6567c;
                pub_142e32760(pbVar16,pfVar14,uVar11);
              }
              uStack_1f0 = (code *)((ulonglong)uStack_1f0 & 0xffffffffffffff00);
              uStack_1e8 = uVar11;
              uStack_1d8 = uVar11;
              uStack_1c8 = &UNK_143070ad8;
              uStack_1f8 = ppbVar20;
              pcStack_1e0 = (code *)pbVar16;
              pbStack_1d0 = pbVar18;
              pdb_141a88350(pbStack_210,&uStack_1f8);
              pbVar18 = pbStack_120;
              fVar24 = fStack_13c;
              if (pbStack_118 != (byte *)0x0) {
                pub_1406abac0((byte *)pfVar14,(ulonglong)pbStack_118,1);
                pbVar18 = pbStack_120;
                fVar24 = fStack_13c;
              }
            }
          }
          if ((pbVar18[0x18] != 0) && (*(byte ***)(pbVar18 + 0x38) == ppbVar20)) {
            uVar57 = *(undefined4 *)
                      (&UNK_143070270 + (ulonglong)(*(int *)(pbVar18 + 0x28) == 2) * 4);
          }
        }
        uStack_1f8 = (byte **)&lStack_138;
        uStack_1f0 = pdb_140c6b520;
        uStack_1e8 = lStack_228;
        pcStack_1e0 = pdb_140001000;
        pdb_140f60760(&pbStack_118,&UNK_143070b08,&uStack_1f8);
        uVar13 = uStack_108;
        pfVar14 = pfStack_110;
        pdb_14007ee60();
        pbVar18 = pub_1406abab0(0x20,8);
        lVar4 = lStack_220;
        if (pbVar18 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
          pdb_142dc7e11(8,0x20);
        }
        pbVar18[0] = 1;
        pbVar18[1] = 0;
        pbVar18[2] = 0;
        pbVar18[3] = 0;
        pbVar18[4] = 0;
        pbVar18[5] = 0;
        pbVar18[6] = 0;
        pbVar18[7] = 0;
        pbVar18[8] = 1;
        pbVar18[9] = 0;
        pbVar18[10] = 0;
        pbVar18[0xb] = 0;
        pbVar18[0xc] = 0;
        pbVar18[0xd] = 0;
        pbVar18[0xe] = 0;
        pbVar18[0xf] = 0;
        *(float *)(pbVar18 + 0x10) = fVar1;
        *(float *)(pbVar18 + 0x14) = fVar24;
        *(float *)(pbVar18 + 0x18) = fVar2;
        *(undefined4 *)(pbVar18 + 0x1c) = uVar57;
        uStack_1f0 = (code *)&UNK_143070b20;
        uStack_1f8 = (byte **)pbVar18;
        if ((longlong)uVar13 < 0) {
          uVar15 = 0;
          pbStack_120 = pbVar18;
        }
        else {
          if (uVar13 == 0) {
            pbVar16 = (byte *)0x1;
LAB_140c65843:
            uStack_1f0 = (code *)((ulonglong)uStack_1f0 & 0xffffffffffffff00);
            uStack_1e8 = uVar13;
            uStack_1d8 = uVar13;
            uStack_1c8 = &UNK_143070b20;
            uStack_1f8 = ppbVar20;
            pcStack_1e0 = (code *)pbVar16;
            pbStack_1d0 = pbVar18;
            pdb_141a88350(pbStack_210,&uStack_1f8);
            if (pbStack_118 != (byte *)0x0) {
              pub_1406abac0((byte *)pfVar14,(ulonglong)pbStack_118,1);
            }
            *(undefined4 *)param_9[2] = *(undefined4 *)((longlong)param_9 + 0x1c);
            lVar25 = *param_9;
            lVar19 = *(longlong *)(lVar25 + 0x30);
            uVar15 = *(undefined8 *)(lVar25 + 0x40);
            if (lVar19 == *(longlong *)(lVar25 + 0x20)) {
              pdb_142d7e830(lVar25 + 0x20);
            }
            lVar23 = *(longlong *)(lVar25 + 0x28);
            *(byte ***)(lVar23 + lVar19 * 0x18) = ppbVar20;
            *(longlong *)(lVar23 + 8 + lVar19 * 0x18) = lVar4;
            *(undefined8 *)(lVar23 + 0x10 + lVar19 * 0x18) = uVar15;
            *(longlong *)(lVar25 + 0x30) = lVar19 + 1;
            *(longlong *)(lVar25 + 0x40) = *(longlong *)(lVar25 + 0x40) + 1;
            return;
          }
          pbStack_120 = pbVar18;
          pdb_14007ee60();
          uVar15 = 1;
          pbVar16 = pub_1406abab0(uVar13,1);
          if (pbVar16 != (byte *)0x0) {
            pub_142e32760(pbVar16,pfVar14,uVar13);
            pbVar18 = pbStack_120;
            goto LAB_140c65843;
          }
        }
        pdb_142dc7e2a(uVar15,uVar13);
LAB_140c65968:
                    /* WARNING: Does not return */
        pcVar6 = (code *)invalidInstructionException();
        (*pcVar6)();
      }
      uVar22 = (ushort)(uVar21 - 1) & (ushort)uVar21;
      uVar21 = CONCAT22((short)(uVar21 - 1 >> 0x10),uVar22);
    }
    auVar41[0] = -(auVar29[0] == -1);
    auVar41[1] = -(auVar29[1] == -1);
    auVar41[2] = -(auVar29[2] == -1);
    auVar41[3] = -(auVar29[3] == -1);
    auVar41[4] = -(auVar29[4] == -1);
    auVar41[5] = -(auVar29[5] == -1);
    auVar41[6] = -(auVar29[6] == -1);
    auVar41[7] = -(auVar29[7] == -1);
    auVar41[8] = -(auVar29[8] == -1);
    auVar41[9] = -(auVar29[9] == -1);
    auVar41[10] = -(auVar29[10] == -1);
    auVar41[0xb] = -(auVar29[0xb] == -1);
    auVar41[0xc] = -(auVar29[0xc] == -1);
    auVar41[0xd] = -(auVar29[0xd] == -1);
    auVar41[0xe] = -(auVar29[0xe] == -1);
    auVar41[0xf] = -(auVar29[0xf] == -1);
    if ((((((((((((((((SUB161(auVar41 >> 7,0) & 1) != 0 || (SUB161(auVar41 >> 0xf,0) & 1) != 0) ||
                    (SUB161(auVar41 >> 0x17,0) & 1) != 0) || (SUB161(auVar41 >> 0x1f,0) & 1) != 0)
                  || (SUB161(auVar41 >> 0x27,0) & 1) != 0) || (SUB161(auVar41 >> 0x2f,0) & 1) != 0)
                || (SUB161(auVar41 >> 0x37,0) & 1) != 0) || (SUB161(auVar41 >> 0x3f,0) & 1) != 0) ||
              (SUB161(auVar41 >> 0x47,0) & 1) != 0) || (SUB161(auVar41 >> 0x4f,0) & 1) != 0) ||
            (SUB161(auVar41 >> 0x57,0) & 1) != 0) || (SUB161(auVar41 >> 0x5f,0) & 1) != 0) ||
          (SUB161(auVar41 >> 0x67,0) & 1) != 0) || (SUB161(auVar41 >> 0x6f,0) & 1) != 0) ||
        (SUB161(auVar41 >> 0x77,0) & 1) != 0) || auVar41[0xf] < '\0') goto LAB_140c647a2;
    uVar13 = uVar13 + lVar19 + 0x10;
    lVar19 = lVar19 + 0x10;
  } while( true );
}

