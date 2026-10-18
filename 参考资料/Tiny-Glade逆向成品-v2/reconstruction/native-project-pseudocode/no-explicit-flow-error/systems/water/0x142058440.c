// VA 0x142058440, PDB extent 2397 bytes
// system_water::water_audio_grid::update_water_audio_grid
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/water/src/water_audio_grid.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: system_water::water_audio_grid::update_water_audio_grid
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/water/src/water_audio_grid.rs
   Extent: 2397 */

void pdb_142058440(longlong *param_1,undefined8 *param_2,undefined8 param_3,undefined8 *param_4,
                  longlong *param_5)

{
  byte *pbVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  longlong lVar5;
  code *pcVar6;
  undefined1 auVar7 [12];
  float fVar8;
  undefined4 uVar9;
  float fVar10;
  float fVar11;
  char cVar12;
  uint uVar13;
  longlong lVar14;
  ulonglong uVar15;
  longlong *plVar16;
  undefined8 *puVar17;
  longlong *plVar18;
  ulonglong uVar19;
  undefined *puVar20;
  undefined8 *unaff_R12;
  undefined8 *puVar21;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  float fVar26;
  float fVar27;
  short sVar28;
  short sVar30;
  undefined1 auVar29 [16];
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  float fStack_160;
  undefined8 uStack_15c;
  float fStack_154;
  longlong lStack_140;
  undefined1 auStack_138 [8];
  float fStack_130;
  undefined8 uStack_128;
  longlong *plStack_120;
  undefined8 uStack_118;
  float fStack_110;
  longlong *plStack_108;
  longlong *plStack_100;
  char cStack_f1;
  undefined8 uStack_f0;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined8 extraout_XMM0_Qb;
  
  uStack_f0 = 0xfffffffffffffffe;
  puVar21 = param_2;
  plStack_100 = (longlong *)param_3;
  cStack_f1 = pdb_140e94b40();
  if (cStack_f1 == '\0') {
    uStack_128 = 0;
    plVar18 = plStack_108;
    if (*_DAT_143ca4500 == '\0') goto LAB_14205869e;
    return;
  }
  uVar19 = 0x37;
  lVar14 = pdb_142058dd0(0x37);
  unaff_R12 = (undefined8 *)&UNK_143449900;
  if (lVar14 == 1) {
    if (puVar21 < (undefined8 *)0x38) {
      uVar15 = pdb_142058dd0(puVar21);
      if ((uVar15 & 1) != 0) {
        if ((undefined *)0x37 < (undefined *)((longlong)puVar21 + 2)) goto LAB_142058a11;
        uVar19 = 0x35 - (longlong)puVar21;
        unaff_R12 = (undefined8 *)((longlong)puVar21 + 0x143449902);
      }
      goto LAB_14205851b;
    }
  }
  else {
LAB_14205851b:
    puVar20 = &UNK_14344989c;
    puVar21 = (undefined8 *)&UNK_143449870;
    do {
      bVar2 = puVar20[-1];
      uVar13 = (uint)(char)bVar2;
      if ((char)bVar2 < '\0') {
        bVar3 = puVar20[-2];
        if ((char)bVar3 < -0x40) {
          bVar4 = puVar20[-3];
          if ((char)bVar4 < -0x40) {
            pbVar1 = puVar20 + -4;
            puVar20 = puVar20 + -4;
            uVar13 = bVar4 & 0x3f | (*pbVar1 & 7) << 6;
          }
          else {
            puVar20 = puVar20 + -3;
            uVar13 = bVar4 & 0xf;
          }
          uVar13 = bVar3 & 0x3f | uVar13 << 6;
        }
        else {
          puVar20 = puVar20 + -2;
          uVar13 = bVar3 & 0x1f;
        }
        uVar13 = (uint)(bVar2 & 0x3f) | uVar13 << 6;
        if (uVar13 != 0x5c) goto LAB_1420585a4;
LAB_1420585d2:
        if ((undefined *)0x2c < puVar20 + -0x14344986f) goto LAB_1420589ce;
        plVar18 = (longlong *)(0x2c - (longlong)(puVar20 + -0x14344986f));
        puVar21 = (undefined8 *)(puVar20 + 1);
        goto LAB_1420585f4;
      }
      puVar20 = puVar20 + -1;
      if (uVar13 == 0x5c) goto LAB_1420585d2;
LAB_1420585a4:
      if (uVar13 == 0x2f) goto LAB_1420585d2;
    } while (puVar20 != &UNK_143449870);
    plVar18 = (longlong *)0x2c;
LAB_1420585f4:
    plVar16 = (longlong *)pdb_140e97000();
    if ((char)plVar16[0xd] != '\x01') goto LAB_142058981;
    do {
      if (*plVar16 == 0) {
        *plVar16 = -1;
        plStack_108 = plVar16;
        plVar18 = (longlong *)pdb_140e94f10(plVar16 + 1,unaff_R12,uVar19,puVar21,plVar18,1,0);
        *plStack_108 = *plStack_108 + 1;
        uStack_128 = 1;
        plStack_120 = plVar18;
        if (*_DAT_143ca4500 == '\x01') {
          plVar16 = (longlong *)pdb_140e97000();
          if (((char)plVar16[0xd] != '\x01') &&
             (plVar16 = (longlong *)pdb_142e2a5b0(plVar16,0), plVar16 == (longlong *)0x0)) break;
          if (*plVar16 == 0) {
            *plVar16 = -1;
            plStack_100 = plVar16;
            pdb_140e95370(plVar16 + 1,plVar18);
LAB_142058915:
            *plStack_100 = *plStack_100 + 1;
            return;
          }
        }
        else {
LAB_14205869e:
          plStack_108 = plVar18;
          lVar14 = pdb_1406d0830(*param_2);
          puVar21 = (undefined8 *)(lVar14 + 0x20);
          puVar17 = (undefined8 *)(lVar14 + 0x28);
          if (*(char *)(lVar14 + 0x298) == '\0') {
            puVar17 = (undefined8 *)(lVar14 + 0x10);
            puVar21 = (undefined8 *)(lVar14 + 8);
          }
          uStack_170 = *puVar17;
          uStack_178 = *puVar21;
          lVar5 = *param_1;
          lVar14 = lVar5 + 1;
          *param_1 = lVar14;
          auVar22._0_8_ = pdb_140a34500(auStack_138,*param_4);
          fVar11 = fStack_130;
          auVar22._8_8_ = extraout_XMM0_Qb;
          uVar15 = lVar5 + lVar14 * 10 + 1;
          auVar29._8_8_ = 0;
          auVar29._0_8_ =
               (ulonglong)(uint)((int)uVar15 * 2) & 0xffffffff0000ffff |
               ((uVar15 & 0xffff) >> 2) << 0x10;
          sVar28 = SUB162(auVar29 & _DAT_1434497b0,0) + _DAT_1434497c0;
          sVar30 = SUB162(auVar29 & _DAT_1434497b0,2) + _UNK_1434497c2;
          auVar25._0_12_ = auVar22._0_12_;
          auVar25._12_2_ = (short)((ulonglong)auVar22._0_8_ >> 0x30);
          auVar25._14_2_ = _UNK_1434497c6;
          auVar24._12_4_ = auVar25._12_4_;
          auVar24._0_10_ = auVar22._0_10_;
          auVar24._10_2_ = _UNK_1434497c4;
          auVar23._10_6_ = auVar24._10_6_;
          auVar23._8_2_ = (short)((ulonglong)auVar22._0_8_ >> 0x20);
          auVar23._0_8_ = auVar22._0_8_;
          auVar7._4_8_ = auVar23._8_8_;
          auVar7._2_2_ = sVar30;
          auVar7._0_2_ = (short)((ulonglong)auVar22._0_8_ >> 0x10);
          fVar31 = (float)(int)sVar28 * _DAT_14305f110 * _DAT_1434497d0;
          fVar32 = (float)(auVar7._0_4_ >> 0x10) * _UNK_14305f114 * _UNK_1434497d4;
          *(undefined4 *)param_5[2] = *(undefined4 *)((longlong)param_5 + 0x1c);
          fVar10 = _DAT_1434497e0;
          uVar9 = _DAT_143006a28;
          fVar8 = _DAT_142e36f50;
          puVar17 = *(undefined8 **)(*param_5 + 8);
          puVar21 = puVar17 + *(longlong *)(*param_5 + 0x10) * 3;
          fVar33 = auStack_138._0_4_;
          fVar34 = auStack_138._4_4_;
          uVar19 = 1L << ((byte)uVar15 & 0x3f);
          bVar2 = (byte)uVar15 & 0x3f;
          plVar18 = (longlong *)(-2L << bVar2 | 0xfffffffffffffffeU >> 0x40 - bVar2);
          param_4 = &uStack_118;
          param_1 = &lStack_140;
          while (param_2 = puVar17, param_2 != puVar21) {
            fVar26 = (float)*param_2 + fVar31;
            fVar27 = (float)((ulonglong)*param_2 >> 0x20) + fVar32;
            lStack_140 = CONCAT44(fVar27,fVar26);
            pdb_140df4520(param_4);
            puVar17 = param_2 + 3;
            fVar36 = fVar33 - (float)uStack_118;
            fVar37 = fVar34 - (float)((ulonglong)uStack_118 >> 0x20);
            fVar35 = fVar11 - fStack_110;
            unaff_R12 = param_2;
            if ((fVar10 <= fVar35 * fVar35 + fVar37 * fVar37 + fVar36 * fVar36) ||
               (fVar26 = (float)pdb_140a7d8d0(&uStack_178,fVar26,fVar27,uVar9,0x43020000),
               fVar26 <= fVar8)) {
              uVar15 = param_2[1];
LAB_1420588b5:
              param_2[1] = uVar15 & (ulonglong)plVar18;
              if ((uVar15 & uVar19) != 0) {
                *(uint *)(param_2 + 2) =
                     CONCAT22((short)((ulonglong)param_2[2] >> 0x10) - sVar30,
                              (short)param_2[2] - sVar28);
              }
            }
            else {
              fStack_160 = fStack_110;
              uStack_168 = uStack_118;
              uStack_15c = CONCAT44(fVar37,fVar36);
              fStack_154 = fVar35;
              cVar12 = pdb_1409ed310(plStack_100,&uStack_168,_DAT_142e36f28,0x32a3);
              uVar15 = param_2[1];
              if (cVar12 != '\0') goto LAB_1420588b5;
              param_2[1] = uVar15 | uVar19;
              if ((uVar15 & uVar19) == 0) {
                *(uint *)(param_2 + 2) =
                     CONCAT22((short)((ulonglong)param_2[2] >> 0x10) + sVar30,
                              (short)param_2[2] + sVar28);
              }
            }
          }
          if (cStack_f1 == '\0') {
            return;
          }
          plVar16 = (longlong *)pdb_140e97000();
          if (((char)plVar16[0xd] != '\x01') &&
             (plVar16 = (longlong *)pdb_142e2a5b0(plVar16,0), plVar16 == (longlong *)0x0)) break;
          if (*plVar16 == 0) {
            *plVar16 = -1;
            plStack_100 = plVar16;
            pdb_140e95370(plVar16 + 1,plStack_108);
            goto LAB_142058915;
          }
        }
      }
      plVar16 = (longlong *)pdb_142dc8090(&UNK_1435a9730);
LAB_142058981:
      plVar16 = (longlong *)pdb_142e2a5b0(plVar16,0);
    } while (plVar16 != (longlong *)0x0);
    pdb_142dc7890(&UNK_1435a96c0);
LAB_1420589ce:
    pdb_142dc8070(&UNK_143449870,0x2c);
  }
  pdb_142dc8070(&UNK_143449900,0x37,0);
LAB_142058a11:
  pdb_142dc8070(&UNK_143449900,0x37);
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}

