// VA 0x140801390, PDB extent 3177 bytes
// system_wall_constructor::segmentation::calculate_wall_path_segmentation::calc_path_wall_segmentation
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/wall-constructor/src/segmentation/calculate_wall_path_segmentation.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   system_wall_constructor::segmentation::calculate_wall_path_segmentation::calc_path_wall_segmentation
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/wall-constructor/src/segmentation/calculate_wall_path_segmentation.rs
   Extent: 3177 */

undefined4 * pdb_140801390(undefined4 *param_1,ulonglong param_2)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  byte bVar9;
  byte bVar10;
  byte bVar11;
  int iVar12;
  float *pfVar13;
  float *pfVar14;
  code *pcVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  uint uVar19;
  longlong lVar20;
  ulonglong uVar21;
  longlong *plVar22;
  float *pfVar23;
  longlong *plVar24;
  int *piVar25;
  longlong *plVar26;
  undefined4 *puVar27;
  ulonglong uVar28;
  undefined8 *puVar29;
  undefined8 uVar30;
  byte *pbVar31;
  longlong lVar32;
  undefined *puVar33;
  float *pfVar34;
  longlong *plVar35;
  longlong *plVar36;
  byte *pbVar37;
  undefined8 *puVar38;
  undefined *puVar39;
  float fVar40;
  undefined4 uVar41;
  undefined4 uVar42;
  float fVar43;
  undefined4 uVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  undefined4 *in_stack_fffffffffffffe08;
  undefined auStack_1e0 [136];
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined4 uStack_140;
  float *pfStack_138;
  longlong *plStack_130;
  undefined8 uStack_128;
  undefined4 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined4 *puStack_f8;
  undefined8 uStack_f0;
  ulonglong uStack_e8;
  byte *pbStack_e0;
  undefined8 uStack_d4;
  undefined4 uStack_cc;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  longlong lStack_b8;
  ulonglong uStack_b0;
  float *pfStack_a8;
  ulonglong uStack_a0;
  ulonglong uStack_98;
  byte *pbStack_90;
  ulonglong uStack_88;
  longlong *plStack_80;
  char cStack_72;
  undefined1 uStack_71;
  undefined8 uStack_70;
  
  uStack_70 = 0xfffffffffffffffe;
  uVar28 = param_2;
  cStack_72 = pdb_140e94b40();
  puStack_f8 = param_1;
  if (cStack_72 == '\0') {
    uStack_118 = 0;
    goto LAB_14080156c;
  }
  puVar29 = (undefined8 *)0x64;
  lVar20 = pdb_140802420(100);
  puVar38 = (undefined8 *)&UNK_1430071d0;
  if (lVar20 == 1) {
    if (100 < uVar28) {
LAB_140801cd7:
      pdb_142dc8070(&UNK_1430071d0,100,0);
LAB_140801cf7:
      pdb_142dc8070(&UNK_1430071d0,100);
      pcVar15 = (code *)swi(3);
      puVar27 = (undefined4 *)(*pcVar15)();
      return puVar27;
    }
    uVar21 = pdb_140802420(uVar28);
    if ((uVar21 & 1) != 0) {
      if (100 < uVar28 + 2) goto LAB_140801cf7;
      puVar29 = (undefined8 *)(0x62 - uVar28);
      puVar38 = (undefined8 *)(&UNK_1430071d2 + uVar28);
    }
  }
  puVar33 = &UNK_14300710c;
  puVar39 = &UNK_1430070b8;
  do {
    bVar9 = puVar33[-1];
    uVar19 = (uint)(char)bVar9;
    if ((char)bVar9 < '\0') {
      bVar10 = puVar33[-2];
      if ((char)bVar10 < -0x40) {
        bVar11 = puVar33[-3];
        if ((char)bVar11 < -0x40) {
          pbVar37 = puVar33 + -4;
          puVar33 = puVar33 + -4;
          uVar19 = bVar11 & 0x3f | (*pbVar37 & 7) << 6;
        }
        else {
          puVar33 = puVar33 + -3;
          uVar19 = bVar11 & 0xf;
        }
        uVar19 = bVar10 & 0x3f | uVar19 << 6;
      }
      else {
        puVar33 = puVar33 + -2;
        uVar19 = bVar10 & 0x1f;
      }
      uVar19 = (uint)(bVar9 & 0x3f) | uVar19 << 6;
      if (uVar19 != 0x5c) goto LAB_1408014c4;
LAB_1408014dc:
      puVar39 = puVar33 + -0x1430070b7;
      if ((undefined *)0x54 < puVar39) {
        pdb_142dc8070(&UNK_1430070b8,0x54,puVar39,0x54,&UNK_143007298);
        goto LAB_140801cd7;
      }
      in_stack_fffffffffffffe08 = (undefined4 *)(0x54 - (longlong)puVar39);
      puVar39 = puVar33 + 1;
      goto LAB_1408014fe;
    }
    puVar33 = puVar33 + -1;
    if (uVar19 == 0x5c) goto LAB_1408014dc;
LAB_1408014c4:
    if (uVar19 == 0x2f) goto LAB_1408014dc;
  } while (puVar33 != &UNK_1430070b8);
  in_stack_fffffffffffffe08 = (undefined4 *)0x54;
LAB_1408014fe:
  plVar22 = (longlong *)pdb_140e97000();
  if ((char)plVar22[0xd] != '\x01') goto LAB_140801c6a;
  do {
    if (*plVar22 == 0) {
      *plVar22 = -1;
      plStack_80 = plVar22;
      uStack_110 = pdb_140e94f10(plVar22 + 1,puVar38,puVar29,puVar39,in_stack_fffffffffffffe08,1,0);
      *plStack_80 = *plStack_80 + 1;
      uStack_118 = 1;
      uStack_f0 = uStack_110;
LAB_14080156c:
      plVar22 = *(longlong **)(param_2 + 0xd0);
      plVar24 = *(longlong **)(param_2 + 0x98);
      if (plVar22 < *(longlong **)(param_2 + 0x98)) {
        plVar24 = plVar22;
      }
      uVar28 = (longlong)plVar24 * 0xc;
      if ((longlong *)0xaaaaaaaaaaaaaaa < plVar24) {
        uVar30 = 0;
LAB_1408015a5:
        pdb_142dc7e2a(uVar30,uVar28);
                    /* WARNING: Does not return */
        pcVar15 = (code *)invalidInstructionException();
        (*pcVar15)();
      }
      pfVar13 = *(float **)(param_2 + 200);
      plStack_80 = plVar24;
      if (plVar24 == (longlong *)0x0) {
        pfVar23 = (float *)0x4;
      }
      else {
        pfVar14 = *(float **)(param_2 + 0x90);
        pdb_14007ee60();
        uVar30 = 4;
        pfVar23 = (float *)pub_1406abab0(uVar28,4);
        if (pfVar23 == (float *)0x0) goto LAB_1408015a5;
        if (plStack_80 < (longlong *)0x8) {
          plVar26 = (longlong *)0x0;
        }
        else {
          plVar26 = (longlong *)0x0;
          if ((pfVar13 + (longlong)plStack_80 <= pfVar23 ||
               pfVar23 + (longlong)plVar24 * 3 <= pfVar13) &&
             (pfVar14 + (longlong)plVar24 * 3 <= pfVar23 ||
              pfVar23 + (longlong)plVar24 * 3 <= pfVar14)) {
            plVar26 = (longlong *)((ulonglong)plStack_80 & 0xffffffffffffffc);
            lVar20 = 0;
            pfVar34 = pfVar13;
            do {
              fVar16 = *pfVar34;
              fVar17 = pfVar34[2];
              fVar18 = pfVar34[3];
              fVar50 = pfVar14[lVar20 + 9];
              fVar40 = pfVar14[lVar20 + 6];
              fVar43 = pfVar14[lVar20];
              fVar45 = pfVar14[lVar20 + 1];
              fVar2 = pfVar14[lVar20 + 2];
              fVar3 = pfVar14[lVar20 + 3];
              fVar4 = pfVar14[lVar20 + 10];
              fVar5 = pfVar14[lVar20 + 7];
              fVar6 = pfVar14[lVar20 + 0xb];
              fVar7 = pfVar14[lVar20 + 8];
              fVar8 = pfVar14[lVar20 + 5];
              fVar46 = fVar16 * 0.0;
              fVar47 = pfVar34[1] * 0.0;
              fVar48 = fVar17 * 0.0;
              fVar49 = fVar18 * 0.0;
              pfVar1 = pfVar23 + lVar20 + 4;
              *pfVar1 = pfVar14[lVar20 + 4] + pfVar34[1];
              pfVar1[1] = fVar8 + fVar47;
              pfVar1[2] = fVar48 + fVar40;
              pfVar1[3] = fVar5 + fVar17;
              pfVar1 = pfVar23 + lVar20;
              *pfVar1 = fVar46 + fVar43;
              pfVar1[1] = fVar45 + fVar16;
              pfVar1[2] = fVar2 + fVar46;
              pfVar1[3] = fVar47 + fVar3;
              pfVar1 = pfVar23 + lVar20 + 8;
              *pfVar1 = fVar7 + fVar48;
              pfVar1[1] = fVar49 + fVar50;
              pfVar1[2] = fVar4 + fVar18;
              pfVar1[3] = fVar6 + fVar49;
              lVar20 = lVar20 + 0xc;
              pfVar34 = pfVar34 + 4;
            } while ((longlong)plVar26 * 3 != lVar20);
            if (plStack_80 == plVar26) goto LAB_1408016da;
          }
        }
        plVar24 = plVar26;
        if (((ulonglong)plStack_80 & 1) != 0) {
          fVar40 = pfVar13[(longlong)plVar26] * _DAT_142e378e0;
          fVar50 = pfVar14[(longlong)plVar26 * 3 + 2];
          *(ulonglong *)(pfVar23 + (longlong)plVar26 * 3) =
               CONCAT44((float)((ulonglong)*(undefined8 *)(pfVar14 + (longlong)plVar26 * 3) >> 0x20)
                        + pfVar13[(longlong)plVar26] * _UNK_142e378e4,
                        (float)*(undefined8 *)(pfVar14 + (longlong)plVar26 * 3) + fVar40);
          pfVar23[(longlong)plVar26 * 3 + 2] = fVar40 + fVar50;
          plVar24 = (longlong *)((ulonglong)plVar26 | 1);
        }
        fVar40 = _UNK_142e378e4;
        fVar50 = _DAT_142e378e0;
        if (plStack_80 != (longlong *)((ulonglong)plVar26 | 1)) {
          lVar20 = (longlong)plVar24 * 0xc + 0x14;
          do {
            uVar30 = *(undefined8 *)((longlong)pfVar14 + lVar20 + -0x14);
            fVar45 = pfVar13[(longlong)plVar24] * fVar50;
            fVar43 = *(float *)((longlong)pfVar14 + lVar20 + -0xc);
            *(ulonglong *)((longlong)pfVar23 + lVar20 + -0x14) =
                 CONCAT44((float)((ulonglong)uVar30 >> 0x20) + pfVar13[(longlong)plVar24] * fVar40,
                          (float)uVar30 + fVar45);
            *(float *)((longlong)pfVar23 + lVar20 + -0xc) = fVar45 + fVar43;
            uVar30 = *(undefined8 *)((longlong)pfVar14 + lVar20 + -8);
            lVar32 = (longlong)plVar24 + 1;
            plVar24 = (longlong *)((longlong)plVar24 + 2);
            fVar45 = pfVar13[lVar32] * fVar50;
            fVar43 = *(float *)((longlong)pfVar14 + lVar20);
            *(ulonglong *)((longlong)pfVar23 + lVar20 + -8) =
                 CONCAT44((float)((ulonglong)uVar30 >> 0x20) + pfVar13[lVar32] * fVar40,
                          (float)uVar30 + fVar45);
            *(float *)((longlong)pfVar23 + lVar20) = fVar45 + fVar43;
            lVar20 = lVar20 + 0x18;
          } while (plStack_80 != plVar24);
        }
      }
LAB_1408016da:
      uStack_c8 = 0;
      uStack_c0 = 8;
      lStack_b8 = 0;
      fVar50 = _DAT_142e37adc;
      uStack_e8 = uVar28;
      pfStack_a8 = pfVar23;
      if (*(uint *)(param_2 + 600) < 2) {
        piVar25 = (int *)pdb_14092f900(param_2);
        iVar12 = *piVar25;
        uVar41 = pdb_140a85220(piVar25);
        uVar42 = _DAT_142f895fc;
        uVar44 = _DAT_142e37ad8;
        if (iVar12 == 0) {
          uVar42 = _DAT_142e37878;
          uVar44 = _DAT_143006dc4;
        }
        fVar40 = (float)pdb_140de8220(uVar42,uVar44,uVar41);
        fVar50 = 0.0;
        if (0.0 <= fVar40) {
          fVar50 = fVar40;
        }
        fVar40 = _DAT_142e36f28;
        if (fVar50 <= _DAT_142e36f28) {
          fVar40 = fVar50;
        }
        fVar50 = fVar40 * _DAT_142e37adc + (_DAT_142e36f28 - fVar40) + (_DAT_142e36f28 - fVar40);
      }
      uStack_98 = 0;
      pbStack_90 = (byte *)0x4;
      uStack_88 = 0;
      uStack_b0 = param_2;
      if (plVar22 == (longlong *)0x0) {
        uVar28 = 0;
      }
      else {
        uVar21 = 0;
        plVar24 = (longlong *)0x0;
        do {
          while (plVar26 = plVar24, pfVar13[(longlong)plVar24] <= 0.0) {
            do {
              plVar24 = (longlong *)((longlong)plVar26 + 1);
              if (plVar22 <= plVar24) goto LAB_1408019d7;
              lVar20 = (longlong)plVar26 + 1;
              plVar26 = plVar24;
            } while (pfVar13[lVar20] <= 0.0);
            if (plVar22 <= plVar24) goto LAB_1408019d7;
          }
          plVar26 = (longlong *)((longlong)plVar24 + 1);
          if ((longlong *)((longlong)plVar24 + 1) < plVar22) {
            plVar26 = plVar22;
          }
          plVar35 = plVar24;
          do {
            plVar36 = plVar26;
            if ((longlong *)((longlong)plVar26 + -1) == plVar35) break;
            lVar20 = (longlong)plVar35 + 1;
            plVar36 = (longlong *)((longlong)plVar35 + 1);
            plVar35 = plVar36;
          } while (0.0 < pfVar13[lVar20]);
          lVar20 = (longlong)plVar24 + ((ulonglong)(plVar24 == (longlong *)0x0) - 1);
          lVar32 = (longlong)plVar36 + (ulonglong)(plVar36 < plVar22);
          if (1 < (ulonglong)(lVar32 - lVar20)) {
            if (uVar21 == uStack_98) {
              uStack_71 = 1;
              pdb_142d8d7f0(&uStack_98);
            }
            *(int *)(pbStack_90 + uVar21 * 8) = (int)lVar20;
            *(int *)(pbStack_90 + uVar21 * 8 + 4) = (int)lVar32;
            uVar21 = uVar21 + 1;
            uStack_88 = uVar21;
          }
          plVar24 = plVar36;
          param_2 = uStack_b0;
        } while (plVar36 < plVar22);
LAB_1408019d7:
        uVar28 = uVar21;
        if (((*(int *)(param_2 + 600) != 2) && (1 < uVar21)) && (*(int *)pbStack_90 == 0)) {
          if (pbStack_90 + uVar21 * 8 == (byte *)0x8) goto LAB_140801c9e;
          if (*(int *)(pbStack_90 + uVar21 * 8 + -4) == (int)plVar22) {
            uVar28 = uVar21 - 1;
            *(int *)pbStack_90 =
                 (*(int *)(pbStack_90 + uVar21 * 8 + -8) - *(int *)(param_2 + 0x98)) + 1;
            uStack_88 = uVar28;
          }
        }
      }
      fVar40 = _DAT_142e3788c;
      uStack_a0 = uStack_98;
      pbVar31 = pbStack_90 + uVar28 * 8;
      puVar29 = &uStack_148;
      puVar38 = &uStack_d4;
      puVar39 = auStack_1e0;
      pbStack_e0 = pbStack_90;
      for (pbVar37 = pbStack_90; uVar42 = (undefined4)((ulonglong)in_stack_fffffffffffffe08 >> 0x20)
          , pbVar37 != pbVar31; pbVar37 = pbVar37 + 8) {
        if (*(int *)(param_2 + 600) == 2) {
          pdb_1413f84e0(puVar38);
        }
        else {
          pdb_1413f85a0(puVar38,*(int *)pbVar37,*(int *)(pbVar37 + 4),*(int *)(param_2 + 0x98) + -1)
          ;
        }
        uStack_140 = uStack_cc;
        uStack_148 = uStack_d4;
        uStack_158 = *(undefined8 *)(param_2 + 0x90);
        uStack_150 = *(undefined8 *)(param_2 + 0x98);
        pfStack_138 = pfStack_a8;
        plStack_130 = plStack_80;
        uStack_120 = uStack_cc;
        uStack_128 = uStack_d4;
        fVar43 = fVar40;
        if (*(char *)(param_2 + 0x2a0) == '\0') {
          fVar43 = fVar50;
        }
        in_stack_fffffffffffffe08 = (undefined4 *)CONCAT44(uVar42,fVar43);
        pdb_1407fff70(puVar39,puVar38,&uStack_158,&pfStack_138,in_stack_fffffffffffffe08);
        lVar20 = lStack_b8;
        if (lStack_b8 == uStack_c8) {
          pdb_142d8d9b0(&uStack_c8);
        }
        pub_142e32760(lVar20 * 0x88 + uStack_c0,puVar39,0x88);
        lStack_b8 = lVar20 + 1;
        param_2 = uStack_b0;
      }
      if (uStack_a0 != 0) {
        pub_1406abac0(pbStack_e0,uStack_a0 << 3,4);
      }
      in_stack_fffffffffffffe08 = puStack_f8;
      *(longlong *)(puStack_f8 + 4) = lStack_b8;
      *puStack_f8 = (undefined4)uStack_c8;
      puStack_f8[1] = uStack_c8._4_4_;
      puStack_f8[2] = (undefined4)uStack_c0;
      puStack_f8[3] = uStack_c0._4_4_;
      if (plStack_80 != (longlong *)0x0) {
        pub_1406abac0((byte *)pfStack_a8,uStack_e8,4);
      }
      if (cStack_72 == '\0') {
        return in_stack_fffffffffffffe08;
      }
      plVar22 = (longlong *)pdb_140e97000();
      if (((char)plVar22[0xd] != '\x01') &&
         (plVar22 = (longlong *)pdb_142dd9610(plVar22,0), plVar22 == (longlong *)0x0)) break;
      if (*plVar22 == 0) {
        *plVar22 = -1;
        plStack_80 = plVar22;
        pdb_140e95370(plVar22 + 1,uStack_f0);
        *plStack_80 = *plStack_80 + 1;
        return in_stack_fffffffffffffe08;
      }
    }
    plVar22 = (longlong *)pdb_142dc8090(&UNK_1433079b0);
LAB_140801c6a:
    plVar22 = (longlong *)pdb_142dd9610(plVar22,0);
  } while (plVar22 != (longlong *)0x0);
  pdb_142dc7890(&UNK_143307940);
LAB_140801c9e:
  uStack_71 = 1;
                    /* WARNING: Subroutine does not return */
  pdb_142dc8150(&UNK_143007110);
}

