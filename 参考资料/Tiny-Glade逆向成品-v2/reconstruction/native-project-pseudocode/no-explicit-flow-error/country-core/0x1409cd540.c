// VA 0x1409cd540, PDB extent 7330 bytes
// country_core::systems::collision::intersect_meshes::polyline::merge_segments_into_polylines
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/collision/intersect_meshes.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::systems::collision::intersect_meshes::polyline::merge_segments_into_polylines
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/collision/intersect_meshes.rs
   Extent: 7330 */

void pdb_1409cd540(ulonglong *param_1,ulonglong param_2,longlong *param_3,ulonglong *param_4)

{
  byte *pbVar1;
  byte *pbVar2;
  undefined8 *puVar3;
  float fVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  byte bVar7;
  byte bVar8;
  uint uVar9;
  uint uVar10;
  undefined4 uVar11;
  undefined4 *puVar12;
  undefined8 uVar13;
  code *pcVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  ulonglong *puVar18;
  char cVar19;
  uint uVar20;
  longlong lVar21;
  ulonglong uVar22;
  undefined *puVar23;
  longlong *plVar24;
  ulonglong *puVar25;
  ulonglong *puVar26;
  ulonglong uVar27;
  ulonglong uVar28;
  uint uVar29;
  undefined4 *puVar30;
  ulonglong uVar31;
  ulonglong uVar32;
  ulonglong uVar33;
  undefined *puVar34;
  ulonglong *puVar35;
  ulonglong *puVar36;
  longlong lVar37;
  ulonglong uVar38;
  ulonglong uVar39;
  ulonglong uVar40;
  ulonglong uVar41;
  longlong lVar42;
  ulonglong unaff_R13;
  ulonglong uVar43;
  float fVar44;
  float fVar45;
  ulonglong *puStack_108;
  longlong lStack_e8;
  undefined8 uStack_e0;
  ulonglong *puStack_c0;
  
  cVar19 = pdb_140e94b40();
  if (cVar19 == '\0') {
    lStack_e8 = 0;
  }
  else {
    puVar36 = (ulonglong *)&UNK_14302cf0c;
    puVar35 = (ulonglong *)0x5b;
    uVar31 = 0x5b;
    lVar21 = pdb_1409d0880(&UNK_14302cf0c);
    if (lVar21 == 1) {
      if (0x5b < uVar31) {
LAB_1409cec28:
        pdb_142dc8070(&UNK_14302cf0c,0x5b,0);
LAB_1409cec48:
        pdb_142dc8070(&UNK_14302cf0c,0x5b);
        pcVar14 = (code *)swi(3);
        (*pcVar14)();
        return;
      }
      puVar36 = (ulonglong *)&UNK_14302cf0c;
      uVar22 = pdb_1409d0880(&UNK_14302cf0c);
      if ((uVar22 & 1) != 0) {
        if (0x5b < uVar31 + 2) goto LAB_1409cec48;
        puVar35 = (ulonglong *)(0x59 - uVar31);
        puVar36 = (ulonglong *)(uVar31 + 0x14302cf0e);
      }
    }
    puVar23 = &UNK_14302c97b;
    puVar34 = &UNK_14302c93e;
    do {
      pbVar1 = puVar23 + -1;
      uVar29 = (uint)(char)*pbVar1;
      if ((int)uVar29 < 0) {
        bVar7 = puVar23[-2];
        if ((char)bVar7 < -0x40) {
          bVar8 = puVar23[-3];
          if ((char)bVar8 < -0x40) {
            pbVar2 = puVar23 + -4;
            puVar23 = puVar23 + -4;
            uVar29 = bVar8 & 0x3f | (*pbVar2 & 7) << 6;
          }
          else {
            puVar23 = puVar23 + -3;
            uVar29 = bVar8 & 0xf;
          }
          uVar29 = bVar7 & 0x3f | uVar29 << 6;
        }
        else {
          puVar23 = puVar23 + -2;
          uVar29 = bVar7 & 0x1f;
        }
        uVar29 = (uint)(*pbVar1 & 0x3f) | uVar29 << 6;
        if (uVar29 != 0x5c) goto LAB_1409cd699;
LAB_1409cd6b6:
        if ((undefined *)0x3d < puVar23 + -0x14302c93d) {
          pdb_142dc8070(&UNK_14302c93e,0x3d,puVar23 + -0x14302c93d,0x3d,&UNK_14302cfd0);
          goto LAB_1409cec28;
        }
        lVar21 = 0x3c - (longlong)(puVar23 + -0x14302c93e);
        puVar34 = puVar23 + 1;
        goto LAB_1409cd6da;
      }
      puVar23 = puVar23 + -1;
      if (uVar29 == 0x5c) goto LAB_1409cd6b6;
LAB_1409cd699:
      if (uVar29 == 0x2f) goto LAB_1409cd6b6;
    } while (puVar23 != &UNK_14302c93e);
    lVar21 = 0x3d;
LAB_1409cd6da:
    plVar24 = (longlong *)pdb_140e97000();
    if (((char)plVar24[0xd] != '\x01') &&
       (plVar24 = (longlong *)pdb_142d8ec20(plVar24,0), plVar24 == (longlong *)0x0)) {
LAB_1409ce83e:
      pdb_142dc7890(&UNK_143326860);
LAB_1409ce84b:
                    /* WARNING: Subroutine does not return */
      pdb_142dc81f2(unaff_R13);
    }
    if (*plVar24 != 0) goto LAB_1409ce789;
    *plVar24 = -1;
    uStack_e0 = pdb_140e94f10(plVar24 + 1,puVar36,puVar35,puVar34,lVar21,1,0);
    *plVar24 = *plVar24 + 1;
    lStack_e8 = 1;
  }
  puVar36 = param_4 + 3;
  if (param_4[6] == 0) {
    puVar25 = (ulonglong *)param_4[5];
  }
  else {
    puVar35 = (ulonglong *)param_4[4];
    if (puVar35 == (ulonglong *)0x0) {
      puVar25 = (ulonglong *)0x0;
    }
    else {
      pub_142e32780(*puVar36,0xff,(longlong)puVar35 + 0x11);
      puVar25 = (ulonglong *)
                (((longlong)puVar35 + 1U & 0xfffffffffffffff8) - ((longlong)puVar35 + 1U >> 3));
      if (puVar35 < (ulonglong *)0x8) {
        puVar25 = puVar35;
      }
    }
    param_4[6] = 0;
    param_4[5] = (ulonglong)puVar25;
  }
  puVar35 = (ulonglong *)(param_2 * 2);
  puStack_108 = puVar36;
  if (puVar25 < puVar35) goto LAB_1409ce795;
  param_4[2] = 0;
  if (param_2 == 0) {
    puVar36 = (ulonglong *)0x0;
    goto LAB_1409cd81f;
  }
  if ((ulonglong *)*param_4 < puVar35) goto LAB_1409ce7d2;
  do {
    uVar31 = 0;
    puVar12 = (undefined4 *)param_4[1];
    puVar30 = puVar12;
    while( true ) {
      if (param_2 != 0) {
        pub_142e32780(puVar30,0xff,param_2 * 8 + -4);
        puVar30 = puVar12 + param_2 * 2 + (uVar31 - 1);
        uVar31 = (longlong)puVar35 + (uVar31 - 1);
      }
      *puVar30 = 0xffffffff;
      puVar36 = (ulonglong *)(uVar31 + 1);
LAB_1409cd81f:
      puStack_c0 = param_4 + 2;
      param_4[2] = (ulonglong)puVar36;
      fVar17 = _UNK_142e36f64;
      fVar16 = _DAT_142e36f60;
      fVar15 = _DAT_142e36f50;
      puVar25 = (ulonglong *)((longlong)param_1 + param_2 * 0x24);
      puVar18 = param_1;
      while (puVar26 = puVar18, puVar26 != puVar25) {
        uVar31 = puVar26[3];
        fVar44 = (float)uVar31;
        fVar45 = (float)(uVar31 >> 0x20);
        fVar4 = *(float *)(puVar26 + 4);
        uVar29 = pdb_1409cf1f0(puStack_108,puVar26);
        puVar35 = (ulonglong *)(ulonglong)uVar29;
        param_1 = (ulonglong *)((longlong)puVar26 + 0xc);
        uVar20 = pdb_1409cf1f0(puStack_108);
        puVar18 = (ulonglong *)((longlong)puVar26 + 0x24);
        puVar36 = puVar26;
        if (uVar29 != uVar20) {
          uVar27 = (ulonglong)uVar29;
          uVar22 = param_4[2];
          if (uVar22 <= uVar27) {
                    /* WARNING: Subroutine does not return */
            pdb_142dc81f2(uVar27,uVar22,&UNK_14302c980);
          }
          unaff_R13 = (ulonglong)uVar20;
          if (uVar22 <= unaff_R13) goto LAB_1409ce84b;
          uVar9 = *(uint *)(param_4[1] + uVar27 * 4);
          param_2 = (ulonglong)uVar9;
          uVar10 = *(uint *)(param_4[1] + unaff_R13 * 4);
          uVar22 = (ulonglong)uVar10;
          if (uVar9 == 0xffffffff) {
            if (uVar10 == 0xffffffff) {
              uVar9 = *(uint *)(param_3 + 2);
              param_2 = (ulonglong)uVar9;
              pdb_14007ee60();
              puVar36 = (ulonglong *)pub_1406abab0(0x30,4);
              if (puVar36 == (ulonglong *)0x0) {
                pdb_142dc7e2a(4,0x30);
                    /* WARNING: Does not return */
                pcVar14 = (code *)invalidInstructionException();
                (*pcVar14)();
              }
              *(int *)(puVar36 + 1) = (int)puVar26[1];
              *puVar36 = *puVar26;
              *(ulonglong *)((longlong)puVar36 + 0xc) = uVar31;
              *(float *)((longlong)puVar36 + 0x14) = fVar4;
              puVar36[3] = *param_1;
              *(undefined4 *)(puVar36 + 4) = *(undefined4 *)((longlong)puVar26 + 0x14);
              *(ulonglong *)((longlong)puVar36 + 0x24) = uVar31;
              *(float *)((longlong)puVar36 + 0x2c) = fVar4;
              lVar21 = param_3[2];
              if (lVar21 == *param_3) {
                pdb_142d7ede0();
              }
              lVar42 = param_3[1];
              *(undefined8 *)(lVar42 + lVar21 * 0x28) = 2;
              *(ulonglong **)(lVar42 + 8 + lVar21 * 0x28) = puVar36;
              *(undefined8 *)(lVar42 + 0x10 + lVar21 * 0x28) = 0;
              *(undefined8 *)(lVar42 + 0x18 + lVar21 * 0x28) = 2;
              *(uint *)(lVar42 + 0x20 + lVar21 * 0x28) = uVar29;
              *(uint *)(lVar42 + 0x24 + lVar21 * 0x28) = uVar20;
              puVar36 = (ulonglong *)(lVar21 + 1);
              param_3[2] = (longlong)puVar36;
              if (*puStack_c0 <= uVar27) {
                    /* WARNING: Subroutine does not return */
                pdb_142dc81f2(uVar27,*puStack_c0,&UNK_14302c9b0);
              }
              *(uint *)(param_4[1] + uVar27 * 4) = uVar9;
              if (param_4[2] <= unaff_R13) {
                    /* WARNING: Subroutine does not return */
                pdb_142dc81f2(unaff_R13,param_4[2],&UNK_14302c9c8);
              }
            }
            else {
              if ((ulonglong)param_3[2] <= uVar22) {
                    /* WARNING: Subroutine does not return */
                pdb_142dc81f2(uVar22,param_3[2],&UNK_14302c9e0);
              }
              param_1 = (ulonglong *)(param_3[1] + uVar22 * 0x28);
              if (*(uint *)(param_3[1] + 0x20 + uVar22 * 0x28) == uVar20) {
                if (param_1[3] == 0) {
                    /* WARNING: Subroutine does not return */
                  pdb_142dc8150(&UNK_14302ca48);
                }
                uVar22 = *param_1;
                uVar43 = param_1[1];
                if (param_1[2] < uVar22) {
                  uVar22 = 0;
                }
                lVar21 = param_1[2] - uVar22;
                uVar13 = *(undefined8 *)(uVar43 + 0xc + lVar21 * 0x18);
                *(ulonglong *)(uVar43 + 0xc + lVar21 * 0x18) =
                     CONCAT44(((float)((ulonglong)uVar13 >> 0x20) + fVar45) * fVar17,
                              ((float)uVar13 + fVar44) * fVar16);
                *(float *)(uVar43 + 0x14 + lVar21 * 0x18) =
                     (*(float *)(uVar43 + 0x14 + lVar21 * 0x18) + fVar4) * fVar15;
                uVar22 = *param_1;
                uVar43 = param_1[3];
                if (uVar43 == uVar22) {
                  pdb_1409296e0(param_1);
                  uVar22 = *param_1;
                  uVar43 = param_1[3];
                }
                uVar40 = param_1[1];
                uVar41 = param_1[2] - 1;
                uVar32 = uVar22 + uVar41;
                if (!CARRY8(uVar22,uVar41)) {
                  uVar32 = uVar41;
                }
                param_1[2] = uVar32;
                param_1[3] = uVar43 + 1;
                *(ulonglong *)(uVar40 + uVar32 * 0x18) = *puVar26;
                *(int *)(uVar40 + 8 + uVar32 * 0x18) = (int)puVar26[1];
                *(ulonglong *)(uVar40 + 0xc + uVar32 * 0x18) = uVar31;
                *(float *)(uVar40 + 0x14 + uVar32 * 0x18) = fVar4;
                uVar31 = (ulonglong)(uint)param_1[4];
                if (*puStack_c0 <= uVar31) {
                    /* WARNING: Subroutine does not return */
                  pdb_142dc81f2(uVar31,*puStack_c0,&UNK_14302ca60);
                }
                *(undefined4 *)(param_4[1] + uVar31 * 4) = 0xffffffff;
                *(uint *)(param_1 + 4) = uVar29;
              }
              else {
                if (*(uint *)((longlong)param_1 + 0x24) != uVar20) {
                    /* WARNING: Subroutine does not return */
                  pdb_142dc83d0(&UNK_14302c9f8,9,&UNK_14302ca00);
                }
                if (param_1[3] == 0) {
                    /* WARNING: Subroutine does not return */
                  pdb_142dc8150(&UNK_14302ca18);
                }
                uVar40 = (param_1[3] + param_1[2]) - 1;
                uVar22 = param_1[1];
                uVar43 = 0;
                if (*param_1 <= uVar40) {
                  uVar43 = *param_1;
                }
                lVar21 = uVar40 - uVar43;
                uVar13 = *(undefined8 *)(uVar22 + 0xc + lVar21 * 0x18);
                *(ulonglong *)(uVar22 + 0xc + lVar21 * 0x18) =
                     CONCAT44(((float)((ulonglong)uVar13 >> 0x20) + fVar45) * fVar17,
                              ((float)uVar13 + fVar44) * fVar16);
                *(float *)(uVar22 + 0x14 + lVar21 * 0x18) =
                     (*(float *)(uVar22 + 0x14 + lVar21 * 0x18) + fVar4) * fVar15;
                uVar22 = *param_1;
                uVar43 = param_1[3];
                if (uVar43 == uVar22) {
                  pdb_1409296e0(param_1);
                  uVar22 = *param_1;
                  uVar43 = param_1[3];
                }
                param_1[3] = uVar43 + 1;
                uVar40 = 0;
                if (uVar22 <= uVar43 + param_1[2]) {
                  uVar40 = uVar22;
                }
                lVar21 = (uVar43 + param_1[2]) - uVar40;
                uVar22 = param_1[1];
                *(int *)(uVar22 + 8 + lVar21 * 0x18) = (int)puVar26[1];
                *(ulonglong *)(uVar22 + lVar21 * 0x18) = *puVar26;
                *(ulonglong *)(uVar22 + 0xc + lVar21 * 0x18) = uVar31;
                *(float *)(uVar22 + 0x14 + lVar21 * 0x18) = fVar4;
                uVar31 = (ulonglong)*(uint *)((longlong)param_1 + 0x24);
                if (*puStack_c0 <= uVar31) {
                    /* WARNING: Subroutine does not return */
                  pdb_142dc81f2(uVar31,*puStack_c0,&UNK_14302ca30);
                }
                *(undefined4 *)(param_4[1] + uVar31 * 4) = 0xffffffff;
                *(uint *)((longlong)param_1 + 0x24) = uVar29;
              }
              if (*puStack_c0 <= uVar27) {
                    /* WARNING: Subroutine does not return */
                pdb_142dc81f2(uVar27,*puStack_c0,&UNK_14302ca78);
              }
              param_2 = (ulonglong)uVar10;
              unaff_R13 = uVar27;
            }
          }
          else {
            uVar43 = param_3[2];
            if (uVar10 == 0xffffffff) {
              if (uVar43 <= param_2) {
                    /* WARNING: Subroutine does not return */
                pdb_142dc81f2(param_2,uVar43,&UNK_14302ca90);
              }
              puVar36 = (ulonglong *)(param_3[1] + param_2 * 0x28);
              if (*(uint *)(param_3[1] + 0x20 + param_2 * 0x28) == uVar29) {
                if (puVar36[3] == 0) {
                    /* WARNING: Subroutine does not return */
                  pdb_142dc8150(&UNK_14302caf0);
                }
                uVar22 = puVar36[1];
                uVar27 = 0;
                if (*puVar36 <= puVar36[2]) {
                  uVar27 = *puVar36;
                }
                lVar21 = puVar36[2] - uVar27;
                uVar13 = *(undefined8 *)(uVar22 + 0xc + lVar21 * 0x18);
                *(ulonglong *)(uVar22 + 0xc + lVar21 * 0x18) =
                     CONCAT44(((float)((ulonglong)uVar13 >> 0x20) + fVar45) * fVar17,
                              ((float)uVar13 + fVar44) * fVar16);
                *(float *)(uVar22 + 0x14 + lVar21 * 0x18) =
                     (*(float *)(uVar22 + 0x14 + lVar21 * 0x18) + fVar4) * fVar15;
                uVar22 = *puVar36;
                uVar27 = puVar36[3];
                if (uVar27 == uVar22) {
                  pdb_1409296e0(puVar36);
                  uVar22 = *puVar36;
                  uVar27 = puVar36[3];
                }
                uVar43 = puVar36[1];
                uVar32 = puVar36[2] - 1;
                uVar40 = uVar22 + uVar32;
                if (!CARRY8(uVar22,uVar32)) {
                  uVar40 = uVar32;
                }
                puVar36[2] = uVar40;
                puVar36[3] = uVar27 + 1;
                *(ulonglong *)(uVar43 + uVar40 * 0x18) = *param_1;
                *(undefined4 *)(uVar43 + 8 + uVar40 * 0x18) =
                     *(undefined4 *)((longlong)puVar26 + 0x14);
                *(ulonglong *)(uVar43 + 0xc + uVar40 * 0x18) = uVar31;
                *(float *)(uVar43 + 0x14 + uVar40 * 0x18) = fVar4;
                uVar31 = (ulonglong)(uint)puVar36[4];
                if (*puStack_c0 <= uVar31) {
                    /* WARNING: Subroutine does not return */
                  pdb_142dc81f2(uVar31,*puStack_c0,&UNK_14302cb08);
                }
                *(undefined4 *)(param_4[1] + uVar31 * 4) = 0xffffffff;
                *(uint *)(puVar36 + 4) = uVar20;
              }
              else {
                if (*(uint *)((longlong)puVar36 + 0x24) != uVar29) {
                    /* WARNING: Subroutine does not return */
                  pdb_142dc83d0(&UNK_14302c9f8,9,&UNK_14302caa8);
                }
                if (puVar36[3] == 0) {
                    /* WARNING: Subroutine does not return */
                  pdb_142dc8150(&UNK_14302cac0);
                }
                uVar43 = (puVar36[3] + puVar36[2]) - 1;
                uVar22 = puVar36[1];
                uVar27 = 0;
                if (*puVar36 <= uVar43) {
                  uVar27 = *puVar36;
                }
                lVar21 = uVar43 - uVar27;
                uVar13 = *(undefined8 *)(uVar22 + 0xc + lVar21 * 0x18);
                *(ulonglong *)(uVar22 + 0xc + lVar21 * 0x18) =
                     CONCAT44(((float)((ulonglong)uVar13 >> 0x20) + fVar45) * fVar17,
                              ((float)uVar13 + fVar44) * fVar16);
                *(float *)(uVar22 + 0x14 + lVar21 * 0x18) =
                     (*(float *)(uVar22 + 0x14 + lVar21 * 0x18) + fVar4) * fVar15;
                uVar22 = *puVar36;
                uVar27 = puVar36[3];
                if (uVar27 == uVar22) {
                  pdb_1409296e0(puVar36);
                  uVar22 = *puVar36;
                  uVar27 = puVar36[3];
                }
                puVar36[3] = uVar27 + 1;
                uVar43 = 0;
                if (uVar22 <= uVar27 + puVar36[2]) {
                  uVar43 = uVar22;
                }
                lVar21 = (uVar27 + puVar36[2]) - uVar43;
                uVar22 = puVar36[1];
                *(undefined4 *)(uVar22 + 8 + lVar21 * 0x18) =
                     *(undefined4 *)((longlong)puVar26 + 0x14);
                *(ulonglong *)(uVar22 + lVar21 * 0x18) = *param_1;
                *(ulonglong *)(uVar22 + 0xc + lVar21 * 0x18) = uVar31;
                *(float *)(uVar22 + 0x14 + lVar21 * 0x18) = fVar4;
                uVar31 = (ulonglong)*(uint *)((longlong)puVar36 + 0x24);
                if (*puStack_c0 <= uVar31) {
                    /* WARNING: Subroutine does not return */
                  pdb_142dc81f2(uVar31,*puStack_c0,&UNK_14302cad8);
                }
                *(undefined4 *)(param_4[1] + uVar31 * 4) = 0xffffffff;
                *(uint *)((longlong)puVar36 + 0x24) = uVar20;
              }
              if (*puStack_c0 <= unaff_R13) {
                    /* WARNING: Subroutine does not return */
                pdb_142dc81f2(unaff_R13,*puStack_c0,&UNK_14302cb20);
              }
            }
            else if (uVar9 == uVar10) {
              if (uVar43 <= param_2) {
                    /* WARNING: Subroutine does not return */
                pdb_142dc81f2(param_2,uVar43,&UNK_14302cd00);
              }
              uVar31 = *(ulonglong *)(param_3[1] + 0x18 + param_2 * 0x28);
              if (uVar31 == 0) {
                    /* WARNING: Subroutine does not return */
                pdb_142dc8150(&UNK_14302cd18);
              }
              puVar35 = (ulonglong *)(param_3[1] + param_2 * 0x28);
              uVar22 = puVar35[2];
              uVar43 = *puVar35;
              puVar36 = (ulonglong *)0x0;
              uVar40 = uVar43;
              if (uVar22 < uVar43) {
                uVar40 = 0;
              }
              uVar32 = puVar35[1];
              lVar21 = uVar22 - uVar40;
              uVar11 = *(undefined4 *)(uVar32 + 8 + lVar21 * 0x18);
              uVar13 = *(undefined8 *)(uVar32 + lVar21 * 0x18);
              fVar4 = *(float *)(uVar32 + 0x14 + lVar21 * 0x18);
              uVar41 = (uVar31 + uVar22) - 1;
              uVar40 = uVar43;
              if (uVar41 < uVar43) {
                uVar40 = 0;
              }
              lVar42 = uVar41 - uVar40;
              uVar5 = *(undefined8 *)(uVar32 + 0xc + lVar21 * 0x18);
              uVar6 = *(undefined8 *)(uVar32 + 0xc + lVar42 * 0x18);
              fVar44 = *(float *)(uVar32 + 0x14 + lVar42 * 0x18);
              if (uVar31 == uVar43) {
                pdb_1409296e0(puVar35);
                uVar31 = puVar35[3];
                uVar43 = *puVar35;
                uVar32 = puVar35[1];
                uVar22 = puVar35[2];
              }
              puVar35[3] = uVar31 + 1;
              uVar40 = 0;
              if (uVar43 <= uVar22 + uVar31) {
                uVar40 = uVar43;
              }
              lVar21 = (uVar22 + uVar31) - uVar40;
              *(undefined4 *)(uVar32 + 8 + lVar21 * 0x18) = uVar11;
              *(undefined8 *)(uVar32 + lVar21 * 0x18) = uVar13;
              *(ulonglong *)(uVar32 + 0xc + lVar21 * 0x18) =
                   CONCAT44(((float)((ulonglong)uVar6 >> 0x20) + (float)((ulonglong)uVar5 >> 0x20))
                            * fVar17,((float)uVar6 + (float)uVar5) * fVar16);
              *(float *)(uVar32 + 0x14 + lVar21 * 0x18) = (fVar4 + fVar44) * fVar15;
              if (*puStack_c0 <= uVar27) {
                    /* WARNING: Subroutine does not return */
                pdb_142dc81f2(uVar27,*puStack_c0,&UNK_14302cd30);
              }
              *(undefined4 *)(param_4[1] + uVar27 * 4) = 0xffffffff;
              param_2 = 0xffffffff;
              if (param_4[2] <= unaff_R13) {
                    /* WARNING: Subroutine does not return */
                pdb_142dc81f2(unaff_R13,param_4[2],&UNK_14302cd48);
              }
            }
            else {
              if (uVar43 <= uVar22) {
                    /* WARNING: Subroutine does not return */
                pdb_142dc81f2(uVar22,uVar43,&UNK_14302cb38);
              }
              lVar21 = param_3[1];
              uVar31 = *(ulonglong *)(lVar21 + uVar22 * 0x28);
              pbVar1 = *(byte **)(lVar21 + 8 + uVar22 * 0x28);
              uVar43 = *(ulonglong *)(lVar21 + 0x10 + uVar22 * 0x28);
              lVar42 = *(longlong *)(lVar21 + 0x18 + uVar22 * 0x28);
              uVar9 = *(uint *)(lVar21 + 0x20 + uVar22 * 0x28);
              uVar40 = (ulonglong)uVar9;
              uVar10 = *(uint *)(lVar21 + 0x24 + uVar22 * 0x28);
              uVar32 = (ulonglong)uVar10;
              *(undefined8 *)(lVar21 + uVar22 * 0x28) = 0;
              *(undefined8 *)(lVar21 + 8 + uVar22 * 0x28) = 4;
              puVar3 = (undefined8 *)(lVar21 + 0x10 + uVar22 * 0x28);
              *puVar3 = 0;
              puVar3[1] = 0;
              *(undefined4 *)(lVar21 + 0x20 + uVar22 * 0x28) = 0xffffffff;
              *(undefined4 *)(lVar21 + 0x24 + uVar22 * 0x28) = 0xffffffff;
              if ((ulonglong)param_3[2] <= param_2) {
                    /* WARNING: Subroutine does not return */
                pdb_142dc81f2(param_2,param_3[2],&UNK_14302cb50);
              }
              if (*puStack_c0 <= uVar27) {
                    /* WARNING: Subroutine does not return */
                pdb_142dc81f2(uVar27,*puStack_c0,&UNK_14302cb68);
              }
              param_1 = (ulonglong *)(param_2 * 0x28 + param_3[1]);
              *(undefined4 *)(param_4[1] + uVar27 * 4) = 0xffffffff;
              if (param_4[2] <= unaff_R13) {
                    /* WARNING: Subroutine does not return */
                pdb_142dc81f2(unaff_R13,param_4[2],&UNK_14302cb80);
              }
              *(undefined4 *)(param_4[1] + unaff_R13 * 4) = 0xffffffff;
              if ((uint)param_1[4] == uVar29) {
                if (uVar9 == uVar20) {
                  if (param_1[3] == 0) {
                    /* WARNING: Subroutine does not return */
                    pdb_142dc8150(&UNK_14302ccb8);
                  }
                  if (lVar42 == 0) {
                    /* WARNING: Subroutine does not return */
                    pdb_142dc8150(&UNK_14302ccd0);
                  }
                  uVar22 = *param_1;
                  if (param_1[2] < uVar22) {
                    uVar22 = 0;
                  }
                  uVar27 = param_1[1];
                  lVar21 = param_1[2] - uVar22;
                  uVar22 = uVar31;
                  if (uVar43 < uVar31) {
                    uVar22 = 0;
                  }
                  lVar37 = uVar43 - uVar22;
                  uVar13 = *(undefined8 *)(uVar27 + 0xc + lVar21 * 0x18);
                  *(ulonglong *)(uVar27 + 0xc + lVar21 * 0x18) =
                       CONCAT44(((float)((ulonglong)uVar13 >> 0x20) + fVar45) * fVar17,
                                ((float)uVar13 + fVar44) * fVar16);
                  *(float *)(uVar27 + 0x14 + lVar21 * 0x18) =
                       (*(float *)(uVar27 + 0x14 + lVar21 * 0x18) + fVar4) * fVar15;
                  *(ulonglong *)(pbVar1 + lVar37 * 0x18 + 0xc) =
                       CONCAT44(((float)((ulonglong)*(undefined8 *)(pbVar1 + lVar37 * 0x18 + 0xc) >>
                                        0x20) + fVar45) * fVar17,
                                ((float)*(undefined8 *)(pbVar1 + lVar37 * 0x18 + 0xc) + fVar44) *
                                fVar16);
                  *(float *)(pbVar1 + lVar37 * 0x18 + 0x14) =
                       (fVar4 + *(float *)(pbVar1 + lVar37 * 0x18 + 0x14)) * fVar15;
                  do {
                    lVar42 = lVar42 + -1;
                    uVar22 = 0;
                    if (uVar31 <= uVar43 + 1) {
                      uVar22 = uVar31;
                    }
                    uVar13 = *(undefined8 *)(pbVar1 + uVar43 * 0x18 + 0x10);
                    uVar5 = *(undefined8 *)(pbVar1 + uVar43 * 0x18);
                    uVar6 = *(undefined8 *)(pbVar1 + uVar43 * 0x18 + 8);
                    uVar27 = *param_1;
                    uVar40 = param_1[3];
                    if (uVar40 == uVar27) {
                      pdb_1409296e0(param_1);
                      uVar27 = *param_1;
                      uVar40 = param_1[3];
                    }
                    puVar35 = (ulonglong *)-uVar22;
                    uVar43 = (longlong)puVar35 + uVar43 + 1;
                    uVar22 = param_1[1];
                    uVar38 = param_1[2] - 1;
                    uVar41 = uVar27 + uVar38;
                    if (!CARRY8(uVar27,uVar38)) {
                      uVar41 = uVar38;
                    }
                    param_1[2] = uVar41;
                    param_1[3] = uVar40 + 1;
                    puVar3 = (undefined8 *)(uVar22 + uVar41 * 0x18);
                    *puVar3 = uVar5;
                    puVar3[1] = uVar6;
                    *(undefined8 *)(uVar22 + 0x10 + uVar41 * 0x18) = uVar13;
                  } while (lVar42 != 0);
                  pub_1406abac0(pbVar1,uVar31 * 0x18,4);
                  *(uint *)(param_1 + 4) = uVar10;
                  uVar40 = uVar32;
                  if (*puStack_c0 <= uVar32) {
                    /* WARNING: Subroutine does not return */
                    pdb_142dc81f2(uVar32,*puStack_c0,&UNK_14302cce8);
                  }
                }
                else {
                  if (uVar10 != uVar20) {
                    /* WARNING: Subroutine does not return */
                    pdb_142dc83d0(&UNK_14302c9f8,9,&UNK_14302cc58);
                  }
                  if (param_1[3] == 0) {
                    /* WARNING: Subroutine does not return */
                    pdb_142dc8150(&UNK_14302cc70);
                  }
                  if (lVar42 == 0) {
                    /* WARNING: Subroutine does not return */
                    pdb_142dc8150(&UNK_14302cc88);
                  }
                  uVar22 = *param_1;
                  uVar27 = param_1[1];
                  if (param_1[2] < uVar22) {
                    uVar22 = 0;
                  }
                  lVar21 = param_1[2] - uVar22;
                  uVar32 = uVar43 + lVar42 + -1;
                  uVar22 = uVar31;
                  if (uVar32 < uVar31) {
                    uVar22 = 0;
                  }
                  lVar37 = uVar32 - uVar22;
                  uVar13 = *(undefined8 *)(uVar27 + 0xc + lVar21 * 0x18);
                  *(ulonglong *)(uVar27 + 0xc + lVar21 * 0x18) =
                       CONCAT44(((float)((ulonglong)uVar13 >> 0x20) + fVar45) * fVar17,
                                ((float)uVar13 + fVar44) * fVar16);
                  *(float *)(uVar27 + 0x14 + lVar21 * 0x18) =
                       (*(float *)(uVar27 + 0x14 + lVar21 * 0x18) + fVar4) * fVar15;
                  *(ulonglong *)(pbVar1 + lVar37 * 0x18 + 0xc) =
                       CONCAT44(((float)((ulonglong)*(undefined8 *)(pbVar1 + lVar37 * 0x18 + 0xc) >>
                                        0x20) + fVar45) * fVar17,
                                ((float)*(undefined8 *)(pbVar1 + lVar37 * 0x18 + 0xc) + fVar44) *
                                fVar16);
                  *(float *)(pbVar1 + lVar37 * 0x18 + 0x14) =
                       (fVar4 + *(float *)(pbVar1 + lVar37 * 0x18 + 0x14)) * fVar15;
                  puVar35 = (ulonglong *)(pbVar1 + (lVar42 + uVar43) * 0x18 + -0x18);
                  do {
                    lVar42 = lVar42 + -1;
                    uVar22 = 0;
                    if (uVar31 <= uVar43 + lVar42) {
                      uVar22 = uVar31;
                    }
                    puVar36 = puVar35 + uVar22 * -3;
                    uVar22 = puVar36[2];
                    uVar41 = *puVar36;
                    uVar38 = puVar36[1];
                    uVar27 = *param_1;
                    uVar32 = param_1[3];
                    if (uVar32 == uVar27) {
                      pdb_1409296e0(param_1);
                      uVar27 = *param_1;
                      uVar32 = param_1[3];
                    }
                    uVar33 = param_1[1];
                    uVar39 = param_1[2] - 1;
                    uVar28 = uVar27 + uVar39;
                    if (!CARRY8(uVar27,uVar39)) {
                      uVar28 = uVar39;
                    }
                    param_1[2] = uVar28;
                    param_1[3] = uVar32 + 1;
                    puVar36 = (ulonglong *)(uVar33 + uVar28 * 0x18);
                    *puVar36 = uVar41;
                    puVar36[1] = uVar38;
                    *(ulonglong *)(uVar33 + 0x10 + uVar28 * 0x18) = uVar22;
                    puVar35 = puVar35 + -3;
                  } while (lVar42 != 0);
                  pub_1406abac0(pbVar1,uVar31 * 0x18,4);
                  *(uint *)(param_1 + 4) = uVar9;
                  if (*puStack_c0 <= uVar40) {
                    /* WARNING: Subroutine does not return */
                    pdb_142dc81f2(uVar40,*puStack_c0,&UNK_14302cca0);
                  }
                }
              }
              else {
                if (*(uint *)((longlong)param_1 + 0x24) != uVar29) {
                    /* WARNING: Subroutine does not return */
                  pdb_142dc83d0(&UNK_14302c9f8,9,&UNK_14302cb98);
                }
                if (uVar9 == uVar20) {
                  if (param_1[3] == 0) {
                    /* WARNING: Subroutine does not return */
                    pdb_142dc8150(&UNK_14302cc10);
                  }
                  if (lVar42 == 0) {
                    /* WARNING: Subroutine does not return */
                    pdb_142dc8150(&UNK_14302cc28);
                  }
                  uVar22 = *param_1;
                  uVar27 = (param_1[3] + param_1[2]) - 1;
                  if (uVar27 < uVar22) {
                    uVar22 = 0;
                  }
                  uVar40 = param_1[1];
                  lVar21 = uVar27 - uVar22;
                  uVar22 = uVar31;
                  if (uVar43 < uVar31) {
                    uVar22 = 0;
                  }
                  lVar37 = uVar43 - uVar22;
                  uVar13 = *(undefined8 *)(uVar40 + 0xc + lVar21 * 0x18);
                  *(ulonglong *)(uVar40 + 0xc + lVar21 * 0x18) =
                       CONCAT44(((float)((ulonglong)uVar13 >> 0x20) + fVar45) * fVar17,
                                ((float)uVar13 + fVar44) * fVar16);
                  *(float *)(uVar40 + 0x14 + lVar21 * 0x18) =
                       (*(float *)(uVar40 + 0x14 + lVar21 * 0x18) + fVar4) * fVar15;
                  *(ulonglong *)(pbVar1 + lVar37 * 0x18 + 0xc) =
                       CONCAT44(((float)((ulonglong)*(undefined8 *)(pbVar1 + lVar37 * 0x18 + 0xc) >>
                                        0x20) + fVar45) * fVar17,
                                ((float)*(undefined8 *)(pbVar1 + lVar37 * 0x18 + 0xc) + fVar44) *
                                fVar16);
                  *(float *)(pbVar1 + lVar37 * 0x18 + 0x14) =
                       (fVar4 + *(float *)(pbVar1 + lVar37 * 0x18 + 0x14)) * fVar15;
                  do {
                    lVar42 = lVar42 + -1;
                    uVar22 = 0;
                    if (uVar31 <= uVar43 + 1) {
                      uVar22 = uVar31;
                    }
                    uVar13 = *(undefined8 *)(pbVar1 + uVar43 * 0x18 + 0x10);
                    uVar5 = *(undefined8 *)(pbVar1 + uVar43 * 0x18);
                    uVar6 = *(undefined8 *)(pbVar1 + uVar43 * 0x18 + 8);
                    uVar27 = *param_1;
                    uVar40 = param_1[3];
                    if (uVar40 == uVar27) {
                      pdb_1409296e0(param_1);
                      uVar27 = *param_1;
                      uVar40 = param_1[3];
                    }
                    puVar35 = (ulonglong *)-uVar22;
                    uVar43 = (longlong)puVar35 + uVar43 + 1;
                    param_1[3] = uVar40 + 1;
                    uVar22 = 0;
                    if (uVar27 <= uVar40 + param_1[2]) {
                      uVar22 = uVar27;
                    }
                    lVar21 = (uVar40 + param_1[2]) - uVar22;
                    uVar22 = param_1[1];
                    *(undefined8 *)(uVar22 + 0x10 + lVar21 * 0x18) = uVar13;
                    puVar3 = (undefined8 *)(uVar22 + lVar21 * 0x18);
                    *puVar3 = uVar5;
                    puVar3[1] = uVar6;
                  } while (lVar42 != 0);
                  pub_1406abac0(pbVar1,uVar31 * 0x18,4);
                  *(uint *)((longlong)param_1 + 0x24) = uVar10;
                  uVar40 = uVar32;
                  if (*puStack_c0 <= uVar32) {
                    /* WARNING: Subroutine does not return */
                    pdb_142dc81f2(uVar32,*puStack_c0,&UNK_14302cc40);
                  }
                }
                else {
                  if (uVar10 != uVar20) {
                    /* WARNING: Subroutine does not return */
                    pdb_142dc83d0(&UNK_14302c9f8,9,&UNK_14302cbb0);
                  }
                  if (param_1[3] == 0) {
                    /* WARNING: Subroutine does not return */
                    pdb_142dc8150(&UNK_14302cbc8);
                  }
                  if (lVar42 == 0) {
                    /* WARNING: Subroutine does not return */
                    pdb_142dc8150(&UNK_14302cbe0);
                  }
                  uVar22 = *param_1;
                  uVar27 = param_1[1];
                  uVar32 = (param_1[3] + param_1[2]) - 1;
                  if (uVar32 < uVar22) {
                    uVar22 = 0;
                  }
                  lVar21 = uVar32 - uVar22;
                  uVar32 = uVar43 + lVar42 + -1;
                  uVar22 = uVar31;
                  if (uVar32 < uVar31) {
                    uVar22 = 0;
                  }
                  lVar37 = uVar32 - uVar22;
                  uVar13 = *(undefined8 *)(uVar27 + 0xc + lVar21 * 0x18);
                  *(ulonglong *)(uVar27 + 0xc + lVar21 * 0x18) =
                       CONCAT44(((float)((ulonglong)uVar13 >> 0x20) + fVar45) * fVar17,
                                ((float)uVar13 + fVar44) * fVar16);
                  *(float *)(uVar27 + 0x14 + lVar21 * 0x18) =
                       (*(float *)(uVar27 + 0x14 + lVar21 * 0x18) + fVar4) * fVar15;
                  *(ulonglong *)(pbVar1 + lVar37 * 0x18 + 0xc) =
                       CONCAT44(((float)((ulonglong)*(undefined8 *)(pbVar1 + lVar37 * 0x18 + 0xc) >>
                                        0x20) + fVar45) * fVar17,
                                ((float)*(undefined8 *)(pbVar1 + lVar37 * 0x18 + 0xc) + fVar44) *
                                fVar16);
                  *(float *)(pbVar1 + lVar37 * 0x18 + 0x14) =
                       (fVar4 + *(float *)(pbVar1 + lVar37 * 0x18 + 0x14)) * fVar15;
                  puVar35 = (ulonglong *)(pbVar1 + (lVar42 + uVar43) * 0x18 + -0x18);
                  do {
                    lVar42 = lVar42 + -1;
                    uVar22 = 0;
                    if (uVar31 <= uVar43 + lVar42) {
                      uVar22 = uVar31;
                    }
                    puVar36 = puVar35 + uVar22 * -3;
                    uVar22 = puVar36[2];
                    uVar41 = *puVar36;
                    uVar38 = puVar36[1];
                    uVar27 = *param_1;
                    uVar32 = param_1[3];
                    if (uVar32 == uVar27) {
                      pdb_1409296e0(param_1);
                      uVar27 = *param_1;
                      uVar32 = param_1[3];
                    }
                    param_1[3] = uVar32 + 1;
                    uVar33 = 0;
                    if (uVar27 <= uVar32 + param_1[2]) {
                      uVar33 = uVar27;
                    }
                    lVar21 = (uVar32 + param_1[2]) - uVar33;
                    uVar27 = param_1[1];
                    *(ulonglong *)(uVar27 + 0x10 + lVar21 * 0x18) = uVar22;
                    puVar36 = (ulonglong *)(uVar27 + lVar21 * 0x18);
                    *puVar36 = uVar41;
                    puVar36[1] = uVar38;
                    puVar35 = puVar35 + -3;
                  } while (lVar42 != 0);
                  pub_1406abac0(pbVar1,uVar31 * 0x18,4);
                  *(uint *)((longlong)param_1 + 0x24) = uVar9;
                  if (*puStack_c0 <= uVar40) {
                    /* WARNING: Subroutine does not return */
                    pdb_142dc81f2(uVar40,*puStack_c0,&UNK_14302cbf8);
                  }
                }
              }
              puVar36 = (ulonglong *)0xffffffffffffffff;
              unaff_R13 = uVar40;
            }
          }
          *(int *)(param_4[1] + unaff_R13 * 4) = (int)param_2;
        }
      }
      if (lStack_e8 == 0) {
        return;
      }
      plVar24 = (longlong *)pdb_140e97000();
      if (((char)plVar24[0xd] != '\x01') &&
         (plVar24 = (longlong *)pdb_142d8ec20(plVar24,0), plVar24 == (longlong *)0x0))
      goto LAB_1409ce83e;
      if (*plVar24 == 0) {
        *plVar24 = -1;
        pdb_140e95370(plVar24 + 1,uStack_e0);
        *plVar24 = *plVar24 + 1;
        return;
      }
LAB_1409ce789:
      pdb_142dc8090(&UNK_143326a50);
LAB_1409ce795:
      pdb_142da6cc0(puVar36,puVar35,param_4 + 7,1);
      param_4[2] = 0;
      if (puVar35 <= (ulonglong *)*param_4) break;
LAB_1409ce7d2:
      puStack_c0 = param_4 + 2;
      pdb_142d7f1b0(param_4,0,puVar35,4,4);
      uVar31 = *puStack_c0;
      puVar12 = (undefined4 *)param_4[1];
      puVar30 = puVar12 + uVar31;
    }
  } while( true );
}

