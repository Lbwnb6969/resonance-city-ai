// VA 0x140bb5fd0, PDB extent 2324 bytes
// country_core::systems::wall::calc_wall_bend::calc_wall_bend
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/wall/calc_wall_bend.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: country_core::systems::wall::calc_wall_bend::calc_wall_bend
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/wall/calc_wall_bend.rs
   Extent: 2324 */

void pdb_140bb5fd0(longlong *param_1,undefined8 *param_2,ulonglong *param_3)

{
  byte *pbVar1;
  byte *pbVar2;
  char *pcVar3;
  byte bVar4;
  ulonglong *puVar5;
  longlong *plVar6;
  uint uVar7;
  uint uVar8;
  float fVar9;
  char cVar10;
  longlong lVar11;
  ulonglong uVar12;
  undefined *puVar13;
  longlong *plVar14;
  undefined8 uVar15;
  uint uVar16;
  longlong *plVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  ulonglong unaff_RBX;
  longlong *plVar21;
  longlong *plVar22;
  longlong *plVar23;
  longlong *plVar24;
  longlong *plVar25;
  ushort uVar26;
  longlong lVar27;
  longlong lVar28;
  undefined *puVar29;
  undefined *puVar30;
  bool bVar31;
  bool bVar32;
  byte bVar33;
  undefined1 auVar34 [16];
  float fVar35;
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  float fVar38;
  float fVar39;
  ulonglong uStack_a8;
  byte *pbStack_a0;
  ulonglong uStack_98;
  longlong *plStack_90;
  longlong *plStack_88;
  undefined8 uStack_80;
  
  uStack_80 = 0xfffffffffffffffe;
  cVar10 = pdb_140e94b40();
  plStack_88 = (longlong *)CONCAT71(plStack_88._1_7_,cVar10);
  if (cVar10 == '\0') goto LAB_140bb61aa;
  puVar30 = &UNK_143061e4b;
  plVar22 = (longlong *)0x3b;
  uVar19 = 0x3b;
  lVar11 = pdb_140bb9660(&UNK_143061e4b);
  if (lVar11 == 1) {
    if (0x3b < uVar19) {
LAB_140bb66c9:
      pdb_142dc8070(&UNK_143061e4b,0x3b,0);
LAB_140bb66e9:
      pdb_142dc8070(&UNK_143061e4b,0x3b);
LAB_140bb670d:
                    /* WARNING: Subroutine does not return */
      pdb_142dc81f2(unaff_RBX,unaff_RBX,&UNK_143061788);
    }
    puVar30 = &UNK_143061e4b;
    uVar12 = pdb_140bb9660(&UNK_143061e4b);
    if ((uVar12 & 1) != 0) {
      if (0x3b < uVar19 + 2) goto LAB_140bb66e9;
      plVar22 = (longlong *)(0x39 - uVar19);
      puVar30 = &UNK_143061e4d + uVar19;
    }
  }
  puVar13 = &UNK_143061785;
  puVar29 = &UNK_14306174f;
  do {
    pbVar1 = puVar13 + -1;
    uVar16 = (uint)(char)*pbVar1;
    if ((int)uVar16 < 0) {
      bVar33 = puVar13[-2];
      if ((char)bVar33 < -0x40) {
        bVar4 = puVar13[-3];
        if ((char)bVar4 < -0x40) {
          pbVar2 = puVar13 + -4;
          puVar13 = puVar13 + -4;
          uVar16 = bVar4 & 0x3f | (*pbVar2 & 7) << 6;
        }
        else {
          puVar13 = puVar13 + -3;
          uVar16 = bVar4 & 0xf;
        }
        uVar16 = bVar33 & 0x3f | uVar16 << 6;
      }
      else {
        puVar13 = puVar13 + -2;
        uVar16 = bVar33 & 0x1f;
      }
      uVar16 = (uint)(*pbVar1 & 0x3f) | uVar16 << 6;
      if (uVar16 != 0x5c) goto LAB_140bb6109;
LAB_140bb6125:
      if (puVar13 + -0x14306174e < (undefined *)0x37) {
        uVar19 = 0x35 - (longlong)(puVar13 + -0x14306174f);
        puVar29 = puVar13 + 1;
        goto LAB_140bb6148;
      }
      pdb_142dc8070(&UNK_14306174f,0x36,puVar13 + -0x14306174e,0x36,&UNK_143061f68);
      goto LAB_140bb66c9;
    }
    puVar13 = puVar13 + -1;
    if (uVar16 == 0x5c) goto LAB_140bb6125;
LAB_140bb6109:
    if (uVar16 == 0x2f) goto LAB_140bb6125;
  } while (puVar13 != &UNK_14306174f);
  uVar19 = 0x36;
LAB_140bb6148:
  plVar14 = (longlong *)pdb_140e97000();
  if ((char)plVar14[0xd] != '\x01') goto LAB_140bb662a;
  do {
    if (*plVar14 == 0) {
      *plVar14 = -1;
      plStack_90 = plVar14;
      uVar15 = pdb_140e94f10(plVar14 + 1,puVar30,plVar22,puVar29,uVar19,1,0);
      *plStack_90 = *plStack_90 + 1;
      plStack_90 = (longlong *)uVar15;
LAB_140bb61aa:
      puVar5 = (ulonglong *)*param_1;
      lVar11 = param_1[1];
      uVar19 = *puVar5;
      plVar21 = (longlong *)0x0;
      plVar14 = (longlong *)(uVar19 - *(ulonglong *)(lVar11 + 0x18));
      if (uVar19 < *(ulonglong *)(lVar11 + 0x18)) {
        plVar14 = plVar21;
      }
      plVar17 = (longlong *)(uVar19 - *(ulonglong *)(lVar11 + 0x38));
      if (uVar19 < *(ulonglong *)(lVar11 + 0x38)) {
        plVar17 = plVar21;
      }
      lVar27 = *(longlong *)(lVar11 + 8);
      plVar6 = *(longlong **)(lVar11 + 0x30);
      bVar31 = plVar6 < plVar17;
      plVar24 = (longlong *)((longlong)plVar6 - (longlong)plVar17);
      plVar25 = plVar24;
      if (bVar31) {
        plVar25 = plVar21;
      }
      param_1 = *(longlong **)(lVar11 + 0x10);
      puVar30 = (undefined *)(ulonglong)(bVar31 || plVar24 == (longlong *)0x0);
      bVar32 = param_1 < plVar14;
      plVar23 = (longlong *)((longlong)param_1 - (longlong)plVar14);
      plVar22 = plVar23;
      if (bVar32) {
        plVar22 = plVar21;
      }
      uVar19 = *(ulonglong *)(lVar11 + 0x28);
      uVar12 = *(ulonglong *)(lVar11 + 0x40);
      puVar29 = (undefined *)(ulonglong)(bVar32 || plVar23 == (longlong *)0x0);
      *puVar5 = (uVar12 - (longlong)plVar25) - (longlong)plVar22;
      if (!bVar32 && plVar23 != (longlong *)0x0 || !bVar31 && plVar24 != (longlong *)0x0) {
        lVar11 = uVar19 + (longlong)plVar17 * 0x10;
        lVar27 = lVar27 + (longlong)plVar14 * 0x10;
        if (param_1 < plVar14) {
          lVar27 = 8;
        }
        lVar28 = 0;
        if (plVar14 < param_1) {
          lVar28 = lVar27 + -0x10 + (longlong)plVar22 * 0x10;
        }
        if (plVar6 < plVar17) {
          lVar11 = 8;
        }
        lVar11 = lVar11 + -0x10 + (longlong)plVar25 * 0x10;
        if (plVar6 <= plVar17) {
          lVar11 = lVar28;
        }
        *puVar5 = uVar12;
        plVar22 = (longlong *)*param_2;
        uVar19 = *(ulonglong *)(lVar11 + 8);
        uStack_a8 = uVar19;
        if (plVar22[3] != 0) {
          uVar12 = pdb_1400af0a0(plVar22 + 4,&uStack_a8);
          fVar9 = _DAT_142e36f28;
          lVar11 = *plVar22;
          bVar33 = (byte)(uVar12 >> 0x39);
          auVar34 = ZEXT216(CONCAT11(bVar33,bVar33));
          auVar34 = pshuflw(auVar34,auVar34,0);
          lVar27 = 0;
          do {
            uVar12 = uVar12 & plVar22[1];
            pcVar3 = (char *)(lVar11 + uVar12);
            auVar37[0] = -(*pcVar3 == auVar34[0]);
            auVar37[1] = -(pcVar3[1] == auVar34[1]);
            auVar37[2] = -(pcVar3[2] == auVar34[2]);
            auVar37[3] = -(pcVar3[3] == auVar34[3]);
            auVar37[4] = -(pcVar3[4] == auVar34[4]);
            auVar37[5] = -(pcVar3[5] == auVar34[5]);
            auVar37[6] = -(pcVar3[6] == auVar34[6]);
            auVar37[7] = -(pcVar3[7] == auVar34[7]);
            auVar37[8] = -(pcVar3[8] == auVar34[0]);
            auVar37[9] = -(pcVar3[9] == auVar34[1]);
            auVar37[10] = -(pcVar3[10] == auVar34[2]);
            auVar37[0xb] = -(pcVar3[0xb] == auVar34[3]);
            auVar37[0xc] = -(pcVar3[0xc] == auVar34[4]);
            auVar37[0xd] = -(pcVar3[0xd] == auVar34[5]);
            auVar37[0xe] = -(pcVar3[0xe] == auVar34[6]);
            auVar37[0xf] = -(pcVar3[0xf] == auVar34[7]);
            uVar26 = (ushort)(SUB161(auVar37 >> 7,0) & 1) |
                     (ushort)(SUB161(auVar37 >> 0xf,0) & 1) << 1 |
                     (ushort)(SUB161(auVar37 >> 0x17,0) & 1) << 2 |
                     (ushort)(SUB161(auVar37 >> 0x1f,0) & 1) << 3 |
                     (ushort)(SUB161(auVar37 >> 0x27,0) & 1) << 4 |
                     (ushort)(SUB161(auVar37 >> 0x2f,0) & 1) << 5 |
                     (ushort)(SUB161(auVar37 >> 0x37,0) & 1) << 6 |
                     (ushort)(SUB161(auVar37 >> 0x3f,0) & 1) << 7 |
                     (ushort)(SUB161(auVar37 >> 0x47,0) & 1) << 8 |
                     (ushort)(SUB161(auVar37 >> 0x4f,0) & 1) << 9 |
                     (ushort)(SUB161(auVar37 >> 0x57,0) & 1) << 10 |
                     (ushort)(SUB161(auVar37 >> 0x5f,0) & 1) << 0xb |
                     (ushort)(SUB161(auVar37 >> 0x67,0) & 1) << 0xc |
                     (ushort)(SUB161(auVar37 >> 0x6f,0) & 1) << 0xd |
                     (ushort)(SUB161(auVar37 >> 0x77,0) & 1) << 0xe |
                     (ushort)(auVar37[0xf] >> 7) << 0xf;
            uVar16 = (uint)uVar26;
            if (uVar26 != 0) {
LAB_140bb62c3:
              uVar7 = 0;
              for (uVar8 = uVar16; (uVar8 & 1) == 0; uVar8 = uVar8 >> 1 | 0x80000000) {
                uVar7 = uVar7 + 1;
              }
              lVar28 = (uVar7 + uVar12 & plVar22[1]) * -0x2b0;
              if (uVar19 != *(ulonglong *)(lVar11 + -0x2b0 + lVar28)) goto code_r0x000140bb62e2;
              lVar11 = lVar11 + lVar28;
              if ((1 < *(ulonglong *)(lVar11 + -0x298)) && (0.0 < *(float *)(lVar11 + -0x278))) {
                param_1 = *(longlong **)(lVar11 + -0x260);
                fVar38 = 0.0;
                if ((longlong *)0x5 < param_1) {
                  lVar11 = *(longlong *)(lVar11 + -0x268);
                  uStack_a8 = 0;
                  pbStack_a0 = (byte *)0x4;
                  uVar19 = 0xfffffffffffffffe;
                  puVar29 = (undefined *)0x3;
                  uVar12 = 0xffffffffffffffff;
                  unaff_RBX = 0;
                  for (puVar30 = (undefined *)0x0; uStack_98 = unaff_RBX, puVar30 < (undefined *)0x4
                      ; puVar30 = puVar30 + 1) {
                    lVar27 = ~(ulonglong)puVar30 + (longlong)param_1;
                    if (!CARRY8(~(ulonglong)puVar30,(ulonglong)param_1)) {
                    /* WARNING: Subroutine does not return */
                      pdb_142dc81f2(lVar27,param_1,&UNK_1430617b8);
                    }
                    plVar22 = (longlong *)(lVar27 - 1);
                    if (param_1 <= plVar22) {
                    /* WARNING: Subroutine does not return */
                      pdb_142dc81f2(plVar22,param_1,&UNK_1430617d0);
                    }
                    fVar38 = *(float *)(lVar11 + lVar27 * 0xc) -
                             *(float *)(lVar11 + (longlong)plVar22 * 0xc);
                    fVar39 = *(float *)(lVar11 + 8 + lVar27 * 0xc) -
                             *(float *)(lVar11 + 8 + (longlong)plVar22 * 0xc);
                    if (unaff_RBX == uStack_a8) {
                      pdb_142db07d0(&uStack_a8);
                    }
                    fVar35 = fVar9 / SQRT(fVar39 * fVar39 + fVar38 * fVar38);
                    *(float *)(pbStack_a0 + unaff_RBX * 8) = fVar38 * fVar35;
                    *(float *)(pbStack_a0 + unaff_RBX * 8 + 4) = fVar35 * fVar39;
                    unaff_RBX = unaff_RBX + 1;
                    uVar19 = uVar19 + 1;
                    puVar29 = (undefined *)(ulonglong)(byte)((char)puVar29 + 1);
                    uVar12 = uVar12 + 1;
                  }
                  if (unaff_RBX - 1 != 0) {
                    uVar20 = unaff_RBX;
                    if (uVar19 < unaff_RBX) {
                      uVar20 = uVar19;
                    }
                    uVar18 = (unaff_RBX - 1) + (ulonglong)(unaff_RBX == 0);
                    if (uVar18 <= uVar20) {
                      uVar20 = uVar18;
                    }
                    if (unaff_RBX == uVar20) goto LAB_140bb670d;
                    if (uVar18 <= uVar19) {
                    /* WARNING: Subroutine does not return */
                      pdb_142dc81f2(uVar18 + 1,unaff_RBX,&UNK_1430617a0);
                    }
                    if (2 < uVar19) {
                      uVar19 = 0;
                      do {
                        uVar19 = uVar19 + 4;
                      } while ((uVar12 & 0xfffffffffffffffc) != uVar19);
                      if ((unaff_RBX - 1 & 3) == 0) goto code_r0x000140bb654f;
                    }
                    uVar19 = 0;
                    do {
                      uVar19 = uVar19 + 1;
                    } while (((uint)puVar29 & 3) != uVar19);
                  }
code_r0x000140bb654f:
                  fVar38 = (float)pub_142e32940();
                  if (uStack_a8 != 0) {
                    pub_1406abac0(pbStack_a0,uStack_a8 << 3,4);
                  }
                  if (_DAT_142e36f28 <= fVar38) {
                    fVar38 = _DAT_142e36f28;
                  }
                }
                *(undefined4 *)param_3[2] = *(undefined4 *)((longlong)param_3 + 0x1c);
                uVar19 = *param_3;
                lVar11 = *(longlong *)(uVar19 + 0x30);
                uVar15 = *(undefined8 *)(uVar19 + 0x40);
                if (lVar11 == *(longlong *)(uVar19 + 0x20)) {
                  pdb_142d7e980(uVar19 + 0x20);
                }
                lVar27 = *(longlong *)(uVar19 + 0x28);
                *(undefined8 *)(lVar27 + lVar11 * 0x10) = uVar15;
                *(float *)(lVar27 + 8 + lVar11 * 0x10) = fVar38;
                plVar22 = (longlong *)(lVar11 + 1);
                *(longlong **)(uVar19 + 0x30) = plVar22;
                *(longlong *)(uVar19 + 0x40) = *(longlong *)(uVar19 + 0x40) + 1;
                break;
              }
              goto LAB_140bb665b;
            }
LAB_140bb62ef:
            auVar36[0] = -(*pcVar3 == -1);
            auVar36[1] = -(pcVar3[1] == -1);
            auVar36[2] = -(pcVar3[2] == -1);
            auVar36[3] = -(pcVar3[3] == -1);
            auVar36[4] = -(pcVar3[4] == -1);
            auVar36[5] = -(pcVar3[5] == -1);
            auVar36[6] = -(pcVar3[6] == -1);
            auVar36[7] = -(pcVar3[7] == -1);
            auVar36[8] = -(pcVar3[8] == -1);
            auVar36[9] = -(pcVar3[9] == -1);
            auVar36[10] = -(pcVar3[10] == -1);
            auVar36[0xb] = -(pcVar3[0xb] == -1);
            auVar36[0xc] = -(pcVar3[0xc] == -1);
            auVar36[0xd] = -(pcVar3[0xd] == -1);
            auVar36[0xe] = -(pcVar3[0xe] == -1);
            auVar36[0xf] = -(pcVar3[0xf] == -1);
            if ((((((((((((((((SUB161(auVar36 >> 7,0) & 1) != 0 ||
                             (SUB161(auVar36 >> 0xf,0) & 1) != 0) ||
                            (SUB161(auVar36 >> 0x17,0) & 1) != 0) ||
                           (SUB161(auVar36 >> 0x1f,0) & 1) != 0) ||
                          (SUB161(auVar36 >> 0x27,0) & 1) != 0) ||
                         (SUB161(auVar36 >> 0x2f,0) & 1) != 0) ||
                        (SUB161(auVar36 >> 0x37,0) & 1) != 0) ||
                       (SUB161(auVar36 >> 0x3f,0) & 1) != 0) || (SUB161(auVar36 >> 0x47,0) & 1) != 0
                      ) || (SUB161(auVar36 >> 0x4f,0) & 1) != 0) ||
                    (SUB161(auVar36 >> 0x57,0) & 1) != 0) || (SUB161(auVar36 >> 0x5f,0) & 1) != 0)
                  || (SUB161(auVar36 >> 0x67,0) & 1) != 0) || (SUB161(auVar36 >> 0x6f,0) & 1) != 0)
                || (SUB161(auVar36 >> 0x77,0) & 1) != 0) || auVar36[0xf] < '\0') break;
            uVar12 = uVar12 + lVar27 + 0x10;
            lVar27 = lVar27 + 0x10;
          } while( true );
        }
      }
      if ((char)plStack_88 == '\0') {
        return;
      }
      plVar14 = (longlong *)pdb_140e97000();
      if (((char)plVar14[0xd] != '\x01') &&
         (plVar14 = (longlong *)pdb_142d8ec20(plVar14,0), plVar14 == (longlong *)0x0)) break;
      if (*plVar14 == 0) {
        *plVar14 = -1;
        plStack_88 = plVar14;
        pdb_140e95370(plVar14 + 1,plStack_90);
        *plStack_88 = *plStack_88 + 1;
        return;
      }
    }
    plVar14 = (longlong *)pdb_142dc8090(&UNK_143326a50);
LAB_140bb662a:
    plVar14 = (longlong *)pdb_142d8ec20(plVar14,0);
  } while (plVar14 != (longlong *)0x0);
  pdb_142dc7890(&UNK_143326860);
LAB_140bb665b:
                    /* WARNING: Subroutine does not return */
  pdb_142dc83b0(&UNK_143059e50,0x32,&UNK_1430617e8);
code_r0x000140bb62e2:
  uVar26 = (ushort)(uVar16 - 1) & (ushort)uVar16;
  uVar16 = CONCAT22((short)(uVar16 - 1 >> 0x10),uVar26);
  if (uVar26 == 0) goto LAB_140bb62ef;
  goto LAB_140bb62c3;
}

