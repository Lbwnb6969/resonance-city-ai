// VA 0x140b3e840, PDB extent 4745 bytes
// country_core::systems::wall::shapes::rectangle::ui_edit_rectangle_orientation::do_ui_edit_rectangle_rotate
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/wall/shapes/rectangle/ui_edit_rectangle_orientation.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::systems::wall::shapes::rectangle::ui_edit_rectangle_orientation::do_ui_edit_rectangle_rotate
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/wall/shapes/rectangle/ui_edit_rectangle_orientation.rs
   Extent: 4745 */

void pdb_140b3e840(int *param_1,int *param_2,longlong *param_3,longlong *param_4,longlong *param_5,
                  undefined8 *param_6,ulonglong *param_7,undefined8 *param_8,undefined8 *param_9)

{
  byte *pbVar1;
  byte *pbVar2;
  undefined8 *puVar3;
  byte bVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  longlong *plVar9;
  longlong *plVar10;
  int *piVar11;
  float *pfVar12;
  code *pcVar13;
  int *piVar14;
  char cVar15;
  longlong lVar16;
  ulonglong uVar17;
  undefined *puVar18;
  longlong *plVar19;
  undefined8 uVar20;
  longlong *plVar21;
  uint uVar22;
  longlong lVar23;
  ulonglong uVar24;
  ulonglong unaff_RBX;
  ulonglong uVar25;
  longlong *plVar26;
  ushort uVar27;
  longlong lVar28;
  longlong lVar29;
  longlong *plVar30;
  byte bVar31;
  longlong *plVar32;
  longlong *plVar33;
  longlong *plVar34;
  bool bVar35;
  bool bVar36;
  bool bVar37;
  uint uVar38;
  byte bVar39;
  uint uVar40;
  float fVar41;
  undefined1 auVar42 [16];
  float fVar43;
  undefined1 auVar44 [16];
  uint uVar45;
  float fVar46;
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  int iStack_1c4;
  float fStack_1c0;
  ulonglong uStack_1a8;
  longlong *plStack_1a0;
  undefined4 *puStack_198;
  undefined4 *puStack_190;
  undefined4 *puStack_188;
  longlong *plStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  longlong lStack_168;
  longlong lStack_160;
  longlong lStack_158;
  longlong lStack_148;
  undefined8 uStack_140;
  longlong lStack_138;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  undefined4 uStack_124;
  longlong lStack_120;
  ulonglong uStack_118;
  ulonglong uStack_110;
  int *piStack_108;
  longlong *plStack_100;
  undefined8 uStack_f8;
  undefined4 uStack_f0;
  float fStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  longlong *plStack_d0;
  int *piStack_c8;
  undefined8 uStack_c0;
  
  uStack_c0 = 0xfffffffffffffffe;
  uVar25 = *param_7;
  uStack_118 = param_7[4];
  puStack_190 = (undefined4 *)param_7[6];
  uStack_128 = *(undefined4 *)((longlong)param_7 + 0x3c);
  uStack_110 = param_7[8];
  puVar7 = (undefined4 *)param_7[10];
  uVar5 = *(undefined4 *)((longlong)param_7 + 0x5c);
  lStack_120 = param_8[4];
  puVar8 = (undefined4 *)param_8[6];
  uVar6 = *(undefined4 *)((longlong)param_8 + 0x3c);
  plStack_1a0 = param_4;
  piStack_108 = param_2;
  piStack_c8 = param_1;
  cVar15 = pdb_140e94b40();
  plStack_d0 = (longlong *)CONCAT71(plStack_d0._1_7_,cVar15);
  uStack_1a8 = uVar25;
  puStack_198 = puVar8;
  puStack_188 = puVar7;
  plStack_180 = param_3;
  uStack_12c = uVar6;
  uStack_124 = uVar5;
  if (cVar15 == '\0') goto LAB_140b3eac5;
  plVar32 = (longlong *)&UNK_143058a3a;
  uVar25 = 0x6a;
  uVar24 = 0x6a;
  lVar16 = pdb_140b413c0(&UNK_143058a3a);
  if (lVar16 == 1) {
    if (0x6a < uVar24) {
LAB_140b3f7b5:
      pdb_142dc8070(&UNK_143058a3a,0x6a,0);
LAB_140b3f7d5:
      pdb_142dc8070(&UNK_143058a3a,0x6a);
code_r0x000140b3f7f9:
                    /* WARNING: Subroutine does not return */
      pdb_142dc81f2(unaff_RBX,4,&UNK_1430585e8);
    }
    plVar32 = (longlong *)&UNK_143058a3a;
    uVar17 = pdb_140b413c0(&UNK_143058a3a);
    if ((uVar17 & 1) != 0) {
      if (0x6a < uVar24 + 2) goto LAB_140b3f7d5;
      uVar25 = 0x68 - uVar24;
      plVar32 = (longlong *)(&UNK_143058a3c + uVar24);
    }
  }
  puVar18 = &UNK_1430585b5;
  plVar26 = (longlong *)&UNK_14305855f;
  do {
    pbVar1 = puVar18 + -1;
    uVar22 = (uint)(char)*pbVar1;
    if ((int)uVar22 < 0) {
      bVar4 = puVar18[-2];
      if ((char)bVar4 < -0x40) {
        bVar39 = puVar18[-3];
        if ((char)bVar39 < -0x40) {
          pbVar2 = puVar18 + -4;
          puVar18 = puVar18 + -4;
          uVar22 = bVar39 & 0x3f | (*pbVar2 & 7) << 6;
        }
        else {
          puVar18 = puVar18 + -3;
          uVar22 = bVar39 & 0xf;
        }
        uVar22 = bVar4 & 0x3f | uVar22 << 6;
      }
      else {
        puVar18 = puVar18 + -2;
        uVar22 = bVar4 & 0x1f;
      }
      uVar22 = (uint)(*pbVar1 & 0x3f) | uVar22 << 6;
      if (uVar22 != 0x5c) goto LAB_140b3ea19;
LAB_140b3ea36:
      if ((undefined *)0x56 < puVar18 + -0x14305855e) {
        pdb_142dc8070(&UNK_14305855f,0x56,puVar18 + -0x14305855e,0x56,&UNK_143058c58);
        goto LAB_140b3f7b5;
      }
      plVar33 = (longlong *)(0x55 - (longlong)(puVar18 + -0x14305855f));
      plVar26 = (longlong *)(puVar18 + 1);
      goto LAB_140b3ea5a;
    }
    puVar18 = puVar18 + -1;
    if (uVar22 == 0x5c) goto LAB_140b3ea36;
LAB_140b3ea19:
    if (uVar22 == 0x2f) goto LAB_140b3ea36;
  } while (puVar18 != &UNK_14305855f);
  plVar33 = (longlong *)0x56;
LAB_140b3ea5a:
  plVar19 = (longlong *)pdb_140e97000();
  if ((char)plVar19[0xd] != '\x01') goto LAB_140b3f6ee;
LAB_140b3ea69:
  if (*plVar19 != 0) goto LAB_140b3f6e2;
  *plVar19 = -1;
  plStack_100 = plVar19;
  uVar20 = pdb_140e94f10(plVar19 + 1,plVar32,uVar25,plVar26,plVar33,1,0);
  *plStack_100 = *plStack_100 + 1;
  plStack_100 = (longlong *)uVar20;
LAB_140b3eac5:
  uVar25 = uStack_1a8;
  lVar16 = param_9[1];
  uVar24 = *(ulonglong *)*param_9;
  plVar32 = (longlong *)0x0;
  plVar19 = (longlong *)(uVar24 - *(ulonglong *)(lVar16 + 0x18));
  if (uVar24 < *(ulonglong *)(lVar16 + 0x18)) {
    plVar19 = plVar32;
  }
  plVar21 = (longlong *)(uVar24 - *(ulonglong *)(lVar16 + 0x38));
  if (uVar24 < *(ulonglong *)(lVar16 + 0x38)) {
    plVar21 = plVar32;
  }
  plVar9 = *(longlong **)(lVar16 + 0x10);
  plVar10 = *(longlong **)(lVar16 + 0x30);
  bVar35 = plVar10 < plVar21;
  bVar37 = (longlong *)((longlong)plVar10 - (longlong)plVar21) == (longlong *)0x0;
  plVar26 = (longlong *)((longlong)plVar10 - (longlong)plVar21);
  if (bVar35) {
    plVar26 = plVar32;
  }
  bVar36 = plVar9 < plVar19;
  plVar34 = (longlong *)((longlong)plVar9 - (longlong)plVar19);
  plVar33 = plVar34;
  if (bVar36) {
    plVar33 = plVar32;
  }
  lVar29 = *(longlong *)(lVar16 + 8);
  plVar30 = (longlong *)((longlong)plVar26 + (longlong)plVar33);
  if (!bVar36 && plVar34 != (longlong *)0x0 || !bVar35 && !bVar37) {
    plVar30 = plVar32;
  }
  lVar28 = *(longlong *)(lVar16 + 0x28);
  *(ulonglong *)*param_9 = *(longlong *)(lVar16 + 0x40) - (longlong)plVar30;
  uVar24 = (ulonglong)(bVar35 || bVar37);
  if (!bVar36 && plVar34 != (longlong *)0x0 || !bVar35 && !bVar37) {
    lVar28 = lVar28 + (longlong)plVar21 * 0x70;
    lVar16 = (longlong)plVar26 * 0x70;
    lVar29 = lVar29 + (longlong)plVar19 * 0x70;
    if (plVar9 < plVar19) {
      lVar29 = 8;
    }
    plVar26 = (longlong *)0x0;
    if (plVar19 < plVar9) {
      plVar26 = (longlong *)(lVar29 + -0x70 + (longlong)plVar33 * 0x70);
    }
    if (plVar10 < plVar21) {
      lVar28 = 8;
    }
    plVar19 = (longlong *)(lVar28 + -0x70 + lVar16);
    if (plVar10 <= plVar21) {
      plVar19 = plVar26;
    }
    uVar24 = (longlong)plVar33 * 0x70;
    if ((int)*plVar19 != 2) {
      bVar4 = *(byte *)(plVar19 + 0xc);
      plVar26 = (longlong *)plVar19[7];
      unaff_RBX = plVar19[0xb];
      fVar43 = *(float *)(plVar19 + 5);
      lStack_138 = plVar19[10];
      lStack_148 = plVar19[8];
      uStack_140 = plVar19[9];
      plVar33 = *(longlong **)piStack_c8;
      uStack_f8._0_4_ = SUB84(plVar26,0);
      uStack_f8._4_4_ = (float)((ulonglong)plVar26 >> 0x20);
      if (plVar33[3] != 0) {
        uVar24 = pdb_1400af0a0(plVar33 + 4,&uStack_f8);
        lVar16 = *plVar33;
        bVar39 = (byte)(uVar24 >> 0x39);
        auVar42 = ZEXT216(CONCAT11(bVar39,bVar39));
        auVar42 = pshuflw(auVar42,auVar42,0);
        lVar29 = 0;
        while( true ) {
          uVar24 = uVar24 & plVar33[1];
          auVar44 = *(undefined1 (*) [16])(lVar16 + uVar24);
          auVar48[0] = -(auVar44[0] == auVar42[0]);
          auVar48[1] = -(auVar44[1] == auVar42[1]);
          auVar48[2] = -(auVar44[2] == auVar42[2]);
          auVar48[3] = -(auVar44[3] == auVar42[3]);
          auVar48[4] = -(auVar44[4] == auVar42[4]);
          auVar48[5] = -(auVar44[5] == auVar42[5]);
          auVar48[6] = -(auVar44[6] == auVar42[6]);
          auVar48[7] = -(auVar44[7] == auVar42[7]);
          auVar48[8] = -(auVar44[8] == auVar42[0]);
          auVar48[9] = -(auVar44[9] == auVar42[1]);
          auVar48[10] = -(auVar44[10] == auVar42[2]);
          auVar48[0xb] = -(auVar44[0xb] == auVar42[3]);
          auVar48[0xc] = -(auVar44[0xc] == auVar42[4]);
          auVar48[0xd] = -(auVar44[0xd] == auVar42[5]);
          auVar48[0xe] = -(auVar44[0xe] == auVar42[6]);
          auVar48[0xf] = -(auVar44[0xf] == auVar42[7]);
          uVar27 = (ushort)(SUB161(auVar48 >> 7,0) & 1) |
                   (ushort)(SUB161(auVar48 >> 0xf,0) & 1) << 1 |
                   (ushort)(SUB161(auVar48 >> 0x17,0) & 1) << 2 |
                   (ushort)(SUB161(auVar48 >> 0x1f,0) & 1) << 3 |
                   (ushort)(SUB161(auVar48 >> 0x27,0) & 1) << 4 |
                   (ushort)(SUB161(auVar48 >> 0x2f,0) & 1) << 5 |
                   (ushort)(SUB161(auVar48 >> 0x37,0) & 1) << 6 |
                   (ushort)(SUB161(auVar48 >> 0x3f,0) & 1) << 7 |
                   (ushort)(SUB161(auVar48 >> 0x47,0) & 1) << 8 |
                   (ushort)(SUB161(auVar48 >> 0x4f,0) & 1) << 9 |
                   (ushort)(SUB161(auVar48 >> 0x57,0) & 1) << 10 |
                   (ushort)(SUB161(auVar48 >> 0x5f,0) & 1) << 0xb |
                   (ushort)(SUB161(auVar48 >> 0x67,0) & 1) << 0xc |
                   (ushort)(SUB161(auVar48 >> 0x6f,0) & 1) << 0xd |
                   (ushort)(SUB161(auVar48 >> 0x77,0) & 1) << 0xe |
                   (ushort)(auVar48[0xf] >> 7) << 0xf;
          uVar22 = (uint)uVar27;
          while (uVar27 != 0) {
            uVar38 = 0;
            for (uVar40 = uVar22; (uVar40 & 1) == 0; uVar40 = uVar40 >> 1 | 0x80000000) {
              uVar38 = uVar38 + 1;
            }
            lVar28 = (uVar38 + uVar24 & plVar33[1]) * -0x2b0;
            if (plVar26 == *(longlong **)(lVar16 + -0x2b0 + lVar28)) {
              lVar16 = lVar16 + lVar28;
              if ((*(ulonglong *)(lVar16 + -0x298) < 2) || (*(float *)(lVar16 + -0x278) <= 0.0))
              goto LAB_140b3f723;
              bVar31 = bVar4 - 2;
              plVar32 = (longlong *)(ulonglong)bVar31;
              bVar39 = 3;
              if (1 < bVar4) {
                bVar39 = bVar31;
              }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
              switch(bVar39) {
              case 0:
                goto code_r0x000140b3f69c;
              case 1:
                pfVar12 = (float *)*param_6;
                fVar50 = (fVar43 - pfVar12[1]) / pfVar12[4];
                fVar55 = pfVar12[3];
                fVar53 = pfVar12[5];
                fVar46 = *pfVar12;
                fVar52 = pfVar12[2];
                pdb_140df0010(&uStack_f8,&lStack_148);
                if (3 < unaff_RBX) goto code_r0x000140b3f7f9;
                fVar51 = (float)(&uStack_f8)[unaff_RBX] - (float)uStack_140;
                fVar54 = (fVar55 * fVar50 + fVar46) - (float)uStack_140;
                fVar46 = (float)((ulonglong)(&uStack_f8)[unaff_RBX] >> 0x20) - uStack_140._4_4_;
                fVar53 = (fVar50 * fVar53 + fVar52) - uStack_140._4_4_;
                auVar44._0_4_ = fVar46 * fVar46 + fVar51 * fVar51;
                auVar44._4_4_ = fVar53 * fVar53 + fVar54 * fVar54;
                auVar44._8_4_ =
                     (0.0 - uStack_140._4_4_) * (0.0 - uStack_140._4_4_) +
                     (0.0 - (float)lStack_138) * (0.0 - (float)lStack_138);
                auVar44._12_4_ =
                     (0.0 - uStack_140._4_4_) * (0.0 - uStack_140._4_4_) +
                     (0.0 - (float)lStack_138) * (0.0 - (float)lStack_138);
                auVar42 = sqrtps(auVar44,auVar44);
                auVar42 = divps(_DAT_142e37950,auVar42);
                fVar51 = fVar51 * auVar42._0_4_;
                fVar54 = fVar54 * auVar42._4_4_;
                fVar46 = auVar42._0_4_ * fVar46;
                fVar53 = auVar42._4_4_ * fVar53;
                fVar52 = (fVar54 * fVar51 + fVar53 * fVar46) /
                         SQRT((fVar53 * fVar53 + fVar54 * fVar54) *
                              (fVar46 * fVar46 + fVar51 * fVar51));
                fVar50 = (float)(_DAT_142e377e0 & (uint)fVar52);
                fVar55 = 0.0;
                if (0.0 <= _DAT_142e36f28 - fVar50) {
                  fVar55 = _DAT_142e36f28 - fVar50;
                }
                fVar50 = (((((((_DAT_143057f40 * fVar50 + _DAT_143057f44) * fVar50 + _DAT_143057f48)
                              * fVar50 + _DAT_143057f4c) * fVar50 + _DAT_143057f50) * fVar50 +
                           _DAT_143057f54) * fVar50 + _DAT_143057f58) * fVar50 + _DAT_143057f5c) *
                         SQRT(fVar55);
                fVar49 = _DAT_142f94714 - fVar50;
                uVar22 = -(uint)(fVar52 < 0.0);
                fVar55 = fVar53 * fVar51 - fVar46 * fVar54;
                uVar40 = _DAT_142e37820 & (uint)fVar55 | _DAT_142e3c640;
                uVar38 = -(uint)NAN(fVar55);
                uVar45 = _DAT_143009de0 & uVar38;
                uStack_f8._0_4_ = (undefined4)lStack_148;
                uStack_f8._4_4_ = (float)((ulonglong)lStack_148 >> 0x20);
                uStack_e4 = (undefined4)((ulonglong)lStack_138 >> 0x20);
                lStack_168 = lStack_148;
                lStack_160 = uStack_140;
                lStack_158 = lStack_138;
                **(int **)(piStack_108 + 4) = piStack_108[7];
                puVar7 = *(undefined4 **)piStack_108;
                *puVar7 = 1;
                puVar7[1] = fVar43;
                puVar7[2] = (float)(uVar45 | ~uVar38 & uVar40) *
                            (float)(uVar22 & (uint)fVar49 | ~uVar22 & (uint)fVar50);
                *(longlong **)(puVar7 + 4) = plVar26;
                *(ulonglong *)(puVar7 + 6) = unaff_RBX;
                *(longlong *)(puVar7 + 8) = lStack_148;
                *(longlong *)(puVar7 + 10) = uStack_140;
                *(longlong *)(puVar7 + 0xc) = lStack_138;
                *(longlong *)(puVar7 + 0xe) = lStack_148;
                *(longlong *)(puVar7 + 0x10) = uStack_140;
                *(longlong *)(puVar7 + 0x12) = lStack_138;
                uStack_f0 = (float)uStack_140;
                fStack_ec = uStack_140._4_4_;
                uStack_e8 = (float)lStack_138;
                goto code_r0x000140b3f69c;
              case 2:
                goto code_r0x000140b3ef83;
              case 3:
                *(undefined4 *)plStack_1a0[2] = *(undefined4 *)((longlong)plStack_1a0 + 0x1c);
                lVar29 = *plStack_1a0;
                lVar28 = *(longlong *)(lVar29 + 0x30);
                uVar20 = *(undefined8 *)(lVar29 + 0x40);
                if (lVar28 == *(longlong *)(lVar29 + 0x20)) {
                  pdb_142d7e8a0(lVar29 + 0x20);
                }
                *(undefined8 *)(*(longlong *)(lVar29 + 0x28) + lVar28 * 8) = uVar20;
                *(longlong *)(lVar29 + 0x30) = lVar28 + 1;
                *(longlong *)(lVar29 + 0x40) = *(longlong *)(lVar29 + 0x40) + 1;
                uVar5 = *(undefined4 *)(lVar16 + -0x24);
                *(undefined4 *)param_8[2] = *(undefined4 *)((longlong)param_8 + 0x1c);
                plVar26 = (longlong *)*param_8;
                lVar16 = plVar26[6];
                plVar33 = (longlong *)plVar26[8];
                if (lVar16 == plVar26[4]) {
                  pdb_142d7e7c0(plVar26 + 4);
                }
                lVar29 = plVar26[5];
                lVar28 = lVar16 * 0x30;
                *(undefined4 *)(lVar29 + lVar28) = 1;
                plVar19 = (longlong *)(lVar29 + 4 + lVar28);
                *plVar19 = lStack_148;
                *(float *)(plVar19 + 1) = (float)uStack_140;
                *(float *)((longlong)plVar19 + 0xc) = uStack_140._4_4_;
                *(longlong *)(lVar29 + 0x14 + lVar28) = lStack_138;
                uVar6 = _UNK_14303a934;
                puVar7 = (undefined4 *)(lVar29 + 0x1c + lVar28);
                *puVar7 = uVar5;
                puVar7[1] = uVar6;
                *(undefined1 *)(lVar29 + 0x24 + lVar28) = 1;
                *(longlong **)(lVar29 + 0x28 + lVar28) = plVar33;
                plVar26[6] = lVar16 + 1;
                plVar26[8] = plVar26[8] + 1;
                goto code_r0x000140b3f69c;
              default:
                    /* WARNING: Bad instruction - Truncating control flow here */
                halt_baddata();
              }
            }
            uVar27 = (ushort)(uVar22 - 1) & (ushort)uVar22;
            uVar22 = CONCAT22((short)(uVar22 - 1 >> 0x10),uVar27);
          }
          auVar47[0] = -(auVar44[0] == -1);
          auVar47[1] = -(auVar44[1] == -1);
          auVar47[2] = -(auVar44[2] == -1);
          auVar47[3] = -(auVar44[3] == -1);
          auVar47[4] = -(auVar44[4] == -1);
          auVar47[5] = -(auVar44[5] == -1);
          auVar47[6] = -(auVar44[6] == -1);
          auVar47[7] = -(auVar44[7] == -1);
          auVar47[8] = -(auVar44[8] == -1);
          auVar47[9] = -(auVar44[9] == -1);
          auVar47[10] = -(auVar44[10] == -1);
          auVar47[0xb] = -(auVar44[0xb] == -1);
          auVar47[0xc] = -(auVar44[0xc] == -1);
          auVar47[0xd] = -(auVar44[0xd] == -1);
          auVar47[0xe] = -(auVar44[0xe] == -1);
          auVar47[0xf] = -(auVar44[0xf] == -1);
          if ((((((((((((((((SUB161(auVar47 >> 7,0) & 1) != 0 || (SUB161(auVar47 >> 0xf,0) & 1) != 0
                           ) || (SUB161(auVar47 >> 0x17,0) & 1) != 0) ||
                         (SUB161(auVar47 >> 0x1f,0) & 1) != 0) ||
                        (SUB161(auVar47 >> 0x27,0) & 1) != 0) ||
                       (SUB161(auVar47 >> 0x2f,0) & 1) != 0) || (SUB161(auVar47 >> 0x37,0) & 1) != 0
                      ) || (SUB161(auVar47 >> 0x3f,0) & 1) != 0) ||
                    (SUB161(auVar47 >> 0x47,0) & 1) != 0) || (SUB161(auVar47 >> 0x4f,0) & 1) != 0)
                  || (SUB161(auVar47 >> 0x57,0) & 1) != 0) || (SUB161(auVar47 >> 0x5f,0) & 1) != 0)
                || (SUB161(auVar47 >> 0x67,0) & 1) != 0) || (SUB161(auVar47 >> 0x6f,0) & 1) != 0) ||
              (SUB161(auVar47 >> 0x77,0) & 1) != 0) || auVar47[0xf] < '\0') break;
          uVar24 = uVar24 + lVar29 + 0x10;
          lVar29 = lVar29 + 0x10;
        }
      }
                    /* WARNING: Subroutine does not return */
      pdb_142dc8150(&UNK_1430585d0);
    }
  }
  uVar25 = uVar24;
  if ((char)plStack_d0 == '\0') {
    return;
  }
  plVar19 = (longlong *)pdb_140e97000();
  if (((char)plVar19[0xd] == '\x01') ||
     (plVar19 = (longlong *)pdb_142d8ec20(plVar19,0), plVar19 != (longlong *)0x0)) {
    if (*plVar19 != 0) goto LAB_140b3f6e2;
    *plVar19 = -1;
    plStack_d0 = plVar19;
    pdb_140e95370(plVar19 + 1,plStack_100);
    goto code_r0x000140b3ebbd;
  }
  goto LAB_140b3f716;
code_r0x000140b3ef83:
  **(int **)(piStack_108 + 4) = piStack_108[7];
  piVar11 = *(int **)piStack_108;
  if (*piVar11 != 1) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc83b0(&UNK_143058618,0x28,&UNK_143058640);
  }
  pfVar12 = (float *)*param_6;
  fVar52 = ((float)piVar11[1] - pfVar12[1]) / pfVar12[4];
  fVar43 = pfVar12[3];
  fVar55 = pfVar12[5];
  fVar53 = *pfVar12;
  fVar46 = pfVar12[2];
  piStack_108 = piVar11 + 0xe;
  piStack_c8 = piVar11;
  pdb_140df0010(&uStack_f8);
  uVar24 = *(ulonglong *)(piStack_c8 + 6);
  if (3 < uVar24) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc81f2(uVar24,4,&UNK_143058600);
  }
  fVar50 = (float)(&uStack_f8)[uVar24] - (float)piStack_c8[0x10];
  fVar51 = (fVar43 * fVar52 + fVar53) - (float)piStack_c8[0x10];
  fVar53 = (float)((ulonglong)(&uStack_f8)[uVar24] >> 0x20) - (float)piStack_c8[0x11];
  fVar55 = (fVar52 * fVar55 + fVar46) - (float)piStack_c8[0x11];
  auVar42._0_4_ = fVar53 * fVar53 + fVar50 * fVar50;
  auVar42._4_4_ = fVar55 * fVar55 + fVar51 * fVar51;
  auVar42._8_8_ = 0;
  auVar42 = sqrtps(auVar42,auVar42);
  auVar42 = divps(_DAT_142e37950,auVar42);
  fVar50 = fVar50 * auVar42._0_4_;
  fVar51 = fVar51 * auVar42._4_4_;
  fVar53 = auVar42._0_4_ * fVar53;
  fVar55 = auVar42._4_4_ * fVar55;
  fVar54 = (float)*(undefined8 *)(piStack_c8 + 0xe);
  fVar49 = (float)((ulonglong)*(undefined8 *)(piStack_c8 + 0xe) >> 0x20);
  fVar46 = (fVar51 * fVar50 + fVar55 * fVar53) /
           SQRT((fVar55 * fVar55 + fVar51 * fVar51) * (fVar53 * fVar53 + fVar50 * fVar50));
  fVar52 = (float)(_DAT_142e377e0 & (uint)fVar46);
  fVar43 = 0.0;
  if (0.0 <= _DAT_142e36f28 - fVar52) {
    fVar43 = _DAT_142e36f28 - fVar52;
  }
  fVar52 = (((((((_DAT_143057f40 * fVar52 + _DAT_143057f44) * fVar52 + _DAT_143057f48) * fVar52 +
               _DAT_143057f4c) * fVar52 + _DAT_143057f50) * fVar52 + _DAT_143057f54) * fVar52 +
            _DAT_143057f58) * fVar52 + _DAT_143057f5c) * SQRT(fVar43);
  uVar22 = -(uint)(fVar46 < 0.0);
  fVar43 = fVar55 * fVar50 - fVar53 * fVar51;
  uVar38 = -(uint)NAN(fVar43);
  uStack_f8._4_4_ =
       (float)(_DAT_143009de0 & uVar38 | ~uVar38 & (_DAT_142e37820 & (uint)fVar43 | _DAT_142e3c640))
       * (float)(uVar22 & (uint)(_DAT_142f94714 - fVar52) | ~uVar22 & (uint)fVar52) -
       (float)piStack_c8[2];
  lStack_168 = 0;
  uStack_f8._0_4_ = 0;
  pdb_1419bdc40(&iStack_1c4,&lStack_168,&uStack_f8,*(undefined4 *)(*param_5 + 0x28));
  fVar43 = fStack_1c0;
  if (iStack_1c4 == 1) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc83b0(&UNK_143360b30,0xe,&UNK_143360b88);
  }
  fVar55 = (float)pub_142e32b30();
  fVar53 = (float)pub_142e329e0();
  uStack_178 = *(undefined8 *)(piStack_c8 + 10);
  uStack_170 = *(undefined8 *)(piStack_c8 + 0xc);
  fStack_ec = (float)*(undefined8 *)(piStack_c8 + 10);
  uStack_e8 = (float)((ulonglong)*(undefined8 *)(piStack_c8 + 10) >> 0x20);
  uStack_e4 = (undefined4)*(undefined8 *)(piStack_c8 + 0xc);
  uStack_e0 = (undefined4)((ulonglong)*(undefined8 *)(piStack_c8 + 0xc) >> 0x20);
  fVar46 = (float)((uint)fVar55 ^ _DAT_142e37820) * fVar49 + fVar53 * fVar54;
  fVar55 = fVar53 * fVar49 + fVar55 * fVar54;
  uStack_f8._0_4_ = 1;
  uStack_f8._4_4_ = fVar46;
  uStack_f0 = fVar55;
  cVar15 = pdb_140b404c0(uVar25,&uStack_f8);
  piVar14 = piStack_c8;
  piVar11 = piStack_c8 + 10;
  if (cVar15 == '\0') {
    *puStack_190 = uStack_128;
    lVar29 = *(longlong *)(uStack_118 + 0x30);
    uVar20 = *(undefined8 *)(uStack_118 + 0x40);
    if (lVar29 == *(longlong *)(uStack_118 + 0x20)) {
      pdb_142d7e8a0(uStack_118 + 0x20);
    }
    *(undefined8 *)(*(longlong *)(uStack_118 + 0x28) + lVar29 * 8) = uVar20;
    *(longlong *)(uStack_118 + 0x30) = lVar29 + 1;
    *(longlong *)(uStack_118 + 0x40) = *(longlong *)(uStack_118 + 0x40) + 1;
    *puStack_188 = uStack_124;
    lVar29 = *(longlong *)(uStack_110 + 0x30);
    uVar20 = *(undefined8 *)(uStack_110 + 0x40);
    if (lVar29 == *(longlong *)(uStack_110 + 0x20)) {
      pdb_142d7e8a0(uStack_110 + 0x20);
    }
    *(undefined8 *)(*(longlong *)(uStack_110 + 0x28) + lVar29 * 8) = uVar20;
    *(longlong *)(uStack_110 + 0x30) = lVar29 + 1;
    *(longlong *)(uStack_110 + 0x40) = *(longlong *)(uStack_110 + 0x40) + 1;
    fVar53 = _DAT_142e3b1d8;
    uVar22 = _DAT_142e37820;
    fVar51 = 0.0;
    fVar52 = fVar54;
    fVar50 = fVar49;
    do {
      fVar55 = fVar50;
      fVar46 = fVar52;
      if (fVar43 <= fVar51) break;
      fVar51 = fVar51 + fVar53;
      fVar50 = (float)pub_142e32b30();
      fVar41 = (float)pub_142e329e0();
      uVar20 = *(undefined8 *)piVar11;
      fStack_ec = (float)uVar20;
      uStack_e8 = (float)((ulonglong)uVar20 >> 0x20);
      uStack_e4 = (undefined4)*(undefined8 *)(piVar14 + 0xc);
      uStack_e0 = (undefined4)((ulonglong)*(undefined8 *)(piVar14 + 0xc) >> 0x20);
      fVar52 = (float)((uint)fVar50 ^ uVar22) * fVar49 + fVar41 * fVar54;
      fVar50 = fVar41 * fVar49 + fVar50 * fVar54;
      uStack_f8._0_4_ = 1;
      uStack_f8._4_4_ = fVar52;
      uStack_f0 = fVar50;
      cVar15 = pdb_140b404c0(uVar25,&uStack_f8);
    } while (cVar15 != '\0');
  }
  if (*(char *)(lVar16 + -0x1a0) == '\0') {
    pdb_142d8e040();
                    /* WARNING: Does not return */
    pcVar13 = (code *)invalidInstructionException();
    (*pcVar13)();
  }
  uVar5 = *(undefined4 *)(lVar16 + -0x24);
  uVar6 = *(undefined4 *)(lVar16 + -0x19c);
  uVar20 = *(undefined8 *)(piStack_c8 + 4);
  uStack_e8._3_1_ = (undefined1)lStack_138;
  uStack_e4 = (undefined4)((ulonglong)lStack_138 >> 8);
  uStack_e0._0_3_ = (undefined3)((ulonglong)lStack_138 >> 0x28);
  uStack_f8._3_1_ = (undefined1)lStack_148;
  uStack_f8._4_4_ = (float)((ulonglong)lStack_148 >> 8);
  uStack_f0._0_3_ = (undefined3)((ulonglong)lStack_148 >> 0x28);
  uStack_f0._3_1_ = (undefined1)uStack_140;
  fStack_ec = (float)((ulonglong)uStack_140 >> 8);
  uStack_e8._0_3_ = (undefined3)((ulonglong)uStack_140 >> 0x28);
  *puStack_198 = uStack_12c;
  lVar29 = *(longlong *)(lStack_120 + 0x30);
  plVar32 = *(longlong **)(lStack_120 + 0x40);
  if (lVar29 == *(longlong *)(lStack_120 + 0x20)) {
    pdb_142d7ee50(lStack_120 + 0x20);
  }
  lVar28 = *(longlong *)(lStack_120 + 0x28);
  lVar23 = lVar29 * 0x40;
  *(undefined1 *)(lVar28 + lVar23) = 1;
  puVar3 = (undefined8 *)(lVar28 + 1 + lVar23);
  *puVar3 = CONCAT44(uStack_f8._4_4_,(undefined4)uStack_f8);
  puVar3[1] = CONCAT44(fStack_ec,uStack_f0);
  puVar3 = (undefined8 *)(lVar28 + 0xc + lVar23);
  *puVar3 = CONCAT35((undefined3)uStack_e8,CONCAT41(fStack_ec,uStack_f0._3_1_));
  puVar3[1] = CONCAT35((undefined3)uStack_e0,CONCAT41(uStack_e4,uStack_e8._3_1_));
  *(undefined4 *)(lVar28 + 0x1c + lVar23) = uVar5;
  *(undefined4 *)(lVar28 + 0x20 + lVar23) = uVar6;
  *(undefined8 *)(lVar28 + 0x28 + lVar23) = 1;
  *(undefined8 *)(lVar28 + 0x30 + lVar23) = uVar20;
  *(longlong **)(lVar28 + 0x38 + lVar23) = plVar32;
  *(longlong *)(lStack_120 + 0x30) = lVar29 + 1;
  *(longlong *)(lStack_120 + 0x40) = *(longlong *)(lStack_120 + 0x40) + 1;
  uVar5 = *(undefined4 *)(lVar16 + -0x24);
  *(undefined4 *)param_8[2] = *(undefined4 *)((longlong)param_8 + 0x1c);
  plVar26 = (longlong *)*param_8;
  lVar16 = plVar26[6];
  plVar33 = (longlong *)plVar26[8];
  if (lVar16 == plVar26[4]) {
    pdb_142d7e7c0(plVar26 + 4);
  }
  lVar29 = plVar26[5];
  lVar28 = lVar16 * 0x30;
  *(undefined4 *)(lVar29 + lVar28) = 1;
  *(ulonglong *)(lVar29 + 4 + lVar28) = CONCAT44(fVar55,fVar46);
  puVar3 = (undefined8 *)(lVar29 + 0xc + lVar28);
  *puVar3 = uStack_178;
  *(undefined4 *)(puVar3 + 1) = (undefined4)uStack_170;
  *(undefined4 *)((longlong)puVar3 + 0xc) = uStack_170._4_4_;
  uVar6 = _UNK_14303a934;
  puVar7 = (undefined4 *)(lVar29 + 0x1c + lVar28);
  *puVar7 = uVar5;
  puVar7[1] = uVar6;
  *(undefined1 *)(lVar29 + 0x24 + lVar28) = 0;
  *(longlong **)(lVar29 + 0x28 + lVar28) = plVar33;
  plVar26[6] = lVar16 + 1;
  plVar26[8] = plVar26[8] + 1;
  fVar43 = fVar46 - (float)*(undefined8 *)piStack_108;
  fVar52 = fVar55 - (float)((ulonglong)*(undefined8 *)piStack_108 >> 0x20);
  fVar53 = 0.0;
  if (0.0 < fVar52 * fVar52 + fVar43 * fVar43) {
    fVar52 = (float)pdb_140df3e10(piStack_108,*(undefined8 *)(piStack_c8 + 6));
    *(ulonglong *)(piStack_c8 + 0xe) = CONCAT44(fVar55,fVar46);
    *(undefined8 *)(piStack_c8 + 0x10) = uStack_178;
    *(undefined8 *)(piStack_c8 + 0x12) = uStack_170;
    fVar43 = fVar53;
    fVar50 = (float)pdb_140df3e10(piStack_108,*(undefined8 *)(piStack_c8 + 6));
    plVar26 = *(longlong **)(piStack_c8 + 4);
    pdb_140df4540(&uStack_f8,piVar11,piStack_c8[1]);
    lStack_160 = CONCAT44(lStack_160._4_4_,uStack_f0);
    lStack_168 = CONCAT44(uStack_f8._4_4_,(undefined4)uStack_f8);
    *(undefined4 *)plStack_180[2] = *(undefined4 *)((longlong)plStack_180 + 0x1c);
    lVar16 = *plStack_180;
    lVar29 = *(longlong *)(lVar16 + 0x30);
    uVar20 = *(undefined8 *)(lVar16 + 0x40);
    if (lVar29 == *(longlong *)(lVar16 + 0x20)) {
      pdb_142d7ee50(lVar16 + 0x20);
    }
    lVar28 = *(longlong *)(lVar16 + 0x28);
    lVar23 = lVar29 * 0x40;
    *(undefined8 *)(lVar28 + lVar23) = uVar20;
    *(longlong **)(lVar28 + 8 + lVar23) = plVar26;
    *(ulonglong *)(lVar28 + 0x10 + lVar23) = CONCAT44(fVar55,fVar46);
    puVar7 = (undefined4 *)(lVar28 + 0x18 + lVar23);
    *puVar7 = (undefined4)uStack_178;
    puVar7[1] = uStack_178._4_4_;
    puVar7[2] = (undefined4)uStack_170;
    puVar7[3] = uStack_170._4_4_;
    *(longlong *)(lVar28 + 0x28 + lVar23) = lStack_168;
    *(undefined4 *)(lVar28 + 0x30 + lVar23) = (undefined4)lStack_160;
    *(float *)(lVar28 + 0x34 + lVar23) =
         SQRT((fVar43 - fVar53) * (fVar43 - fVar53) + (fVar50 - fVar52) * (fVar50 - fVar52));
    *(undefined1 *)(lVar28 + 0x38 + lVar23) = 1;
    plVar33 = (longlong *)(lVar29 + 1);
    *(longlong **)(lVar16 + 0x30) = plVar33;
    *(longlong *)(lVar16 + 0x40) = *(longlong *)(lVar16 + 0x40) + 1;
  }
code_r0x000140b3f69c:
  if ((char)plStack_d0 != '\0') {
    plVar19 = (longlong *)pdb_140e97000();
    if (((char)plVar19[0xd] != '\x01') &&
       (plVar19 = (longlong *)pdb_142d8ec20(plVar19,0), plVar19 == (longlong *)0x0))
    goto LAB_140b3f716;
    if (*plVar19 != 0) {
LAB_140b3f6e2:
      plVar19 = (longlong *)pdb_142dc8090(&UNK_143326a50);
LAB_140b3f6ee:
      plVar19 = (longlong *)pdb_142d8ec20(plVar19,0);
      if (plVar19 == (longlong *)0x0) {
LAB_140b3f716:
        pdb_142dc7890(&UNK_143326860);
LAB_140b3f723:
                    /* WARNING: Subroutine does not return */
        pdb_142dc83b0(&UNK_143059e50,0x32,&UNK_1430585b8);
      }
      goto LAB_140b3ea69;
    }
    *plVar19 = -1;
    plStack_d0 = plVar19;
    pdb_140e95370(plVar19 + 1,plStack_100);
code_r0x000140b3ebbd:
    *plStack_d0 = *plStack_d0 + 1;
  }
  return;
}

