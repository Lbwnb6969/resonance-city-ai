// VA 0x142392c50, PDB extent 3773 bytes
// toolbar::toolbar_update::toolbar_button_size_and_padding_update
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/toolbar_update.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: toolbar::toolbar_update::toolbar_button_size_and_padding_update
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/toolbar_update.rs
   Extent: 3773 */

void pdb_142392c50(longlong *param_1,longlong *param_2,int *param_3,undefined8 *param_4,
                  longlong *param_5,undefined8 *param_6)

{
  byte *pbVar1;
  longlong lVar2;
  undefined4 uVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  uint uVar7;
  code *pcVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  char cVar12;
  uint uVar13;
  longlong lVar14;
  ulonglong uVar15;
  longlong *plVar16;
  uint *puVar17;
  undefined8 *puVar18;
  longlong lVar19;
  undefined8 *puVar20;
  uint *puVar21;
  undefined *puVar22;
  undefined *puVar23;
  longlong lVar24;
  uint *puVar25;
  uint *puVar26;
  int *piVar27;
  float fVar28;
  float fVar29;
  int iStack_368;
  undefined4 uStack_364;
  undefined4 uStack_360;
  undefined4 uStack_35c;
  undefined4 uStack_358;
  undefined4 uStack_354;
  undefined4 uStack_350;
  undefined4 uStack_34c;
  undefined4 uStack_2c0;
  float fStack_2bc;
  undefined4 uStack_2b8;
  float fStack_2b4;
  longlong lStack_208;
  undefined8 uStack_200;
  longlong lStack_1f8;
  undefined1 auStack_1f0 [8];
  undefined8 uStack_1e8;
  undefined1 uStack_1e0;
  int aiStack_1d8 [2];
  undefined4 *puStack_1d0;
  uint *puStack_1c8;
  longlong lStack_1c0;
  int aiStack_1b8 [2];
  longlong lStack_1b0;
  uint *puStack_1a8;
  longlong lStack_1a0;
  int iStack_198;
  undefined4 uStack_194;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined4 uStack_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  longlong lStack_168;
  longlong lStack_160;
  float *pfStack_158;
  longlong lStack_150;
  longlong lStack_148;
  undefined8 uStack_140;
  float fStack_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  longlong lStack_128;
  longlong lStack_120;
  int iStack_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  longlong lStack_f0;
  undefined8 *puStack_e8;
  uint *puStack_e0;
  undefined8 *puStack_d8;
  longlong *plStack_d0;
  undefined4 *puStack_c8;
  longlong *plStack_c0;
  uint *puStack_b8;
  undefined4 *puStack_b0;
  uint *puStack_a8;
  undefined8 uStack_a0;
  
  uStack_a0 = 0xfffffffffffffffe;
  puVar18 = param_2;
  cVar12 = pdb_140e94b40();
  if (cVar12 == '\0') {
    lStack_148 = 0;
    goto LAB_142392e57;
  }
  puVar25 = (uint *)0x3f;
  lVar14 = pdb_142392830(0x3f);
  puVar20 = (undefined8 *)&UNK_1434e01e8;
  if (lVar14 == 1) {
    if (puVar18 < (undefined8 *)0x40) {
      uVar15 = pdb_142392830(puVar18);
      if ((uVar15 & 1) != 0) {
        if (0x3f < (longlong)puVar18 + 2U) goto LAB_142393816;
        puVar25 = (uint *)(0x3d - (longlong)puVar18);
        puVar20 = (undefined8 *)((longlong)puVar18 + 0x1434e01ea);
      }
      goto LAB_142392d0c;
    }
  }
  else {
LAB_142392d0c:
    puVar22 = &UNK_1434e030c;
    puVar26 = (uint *)&UNK_1434e02e0;
    while( true ) {
      bVar4 = puVar22[-1];
      uVar13 = (uint)(char)bVar4;
      plStack_c0 = param_2;
      if ((char)bVar4 < '\0') break;
      puVar22 = puVar22 + -1;
      if (uVar13 == 0x5c) goto LAB_142392dc0;
LAB_142392da4:
      if (uVar13 == 0x2f) goto LAB_142392dc0;
      if (puVar22 == &UNK_1434e02e0) {
        piVar27 = (int *)0x2c;
LAB_142392de6:
        plVar16 = (longlong *)pdb_140e97000();
        if ((char)plVar16[0xd] != '\x01') goto LAB_14239379f;
        do {
          if (*plVar16 != 0) goto LAB_142393793;
          *plVar16 = -1;
          plStack_d0 = plVar16;
          uStack_140 = pdb_140e94f10(plVar16 + 1,puVar20,puVar25,puVar26,piVar27,1,0);
          *plStack_d0 = *plStack_d0 + 1;
          lStack_148 = 1;
          param_2 = plStack_c0;
LAB_142392e57:
          fVar11 = _DAT_142e3c670;
          fVar10 = _DAT_142e37878;
          fVar9 = _DAT_142e36f28;
          uStack_200 = 2;
          lStack_1f8 = *param_2;
          auStack_1f0[0] = 0;
          uStack_1e8 = *(undefined8 *)param_3;
          uStack_1e0 = 1;
          lStack_160 = *param_5;
          pfStack_158 = (float *)*param_6;
          lStack_120 = *param_1;
          lStack_128 = param_1[1];
          uStack_134 = *(undefined4 *)((longlong)param_1 + 0x14);
          plStack_c0 = (longlong *)
                       CONCAT44(plStack_c0._4_4_,*(undefined4 *)((longlong)param_4 + 0x1c));
          param_1 = (longlong *)*param_4;
          plStack_d0 = (longlong *)param_4[2];
          piVar27 = &iStack_368;
          lVar14 = 0;
          do {
            lStack_208 = lVar14 + 1;
            lStack_150 = lStack_208;
            lStack_168 = *(longlong *)(auStack_1f0 + lVar14 * 0x10 + -8);
            puStack_e8 = (undefined8 *)CONCAT71(puStack_e8._1_7_,auStack_1f0[lVar14 * 0x10]);
            uStack_130 = *(undefined4 *)(lStack_168 + 0x20);
            uStack_12c = *(undefined4 *)(lStack_168 + 0x24);
            uVar3 = *(undefined4 *)(lStack_168 + 0x28);
            fVar29 = *(float *)(lStack_160 + 0xe8) * fVar10 * *pfStack_158;
            puVar21 = *(uint **)(lStack_120 + 0xf8);
            puStack_e0 = puVar21 + *(longlong *)(lStack_120 + 0x100);
            lStack_f0 = CONCAT71(lStack_f0._1_7_,*(undefined1 *)(lStack_120 + 0x108));
            puStack_a8 = (uint *)0x0;
            puStack_d8 = (undefined8 *)0x8;
            puVar25 = (uint *)0x0;
            lVar14 = 0;
            puVar26 = (uint *)0x0;
            fStack_138 = fVar29;
LAB_142392fd3:
            while( true ) {
              if ((char)lStack_f0 == '\0') break;
              puVar17 = puVar26;
              if ((int)puVar26 == (int)lVar14) {
                if (puVar21 != puStack_e0) {
                  while( true ) {
                    lVar14 = *(longlong *)
                              (*(longlong *)(lStack_128 + 0x1a0) + 0x10 + (ulonglong)*puVar21 * 0x48
                              );
                    if (lVar14 != 0) break;
                    puVar21 = puVar21 + 1;
                    if (puVar21 == puStack_e0) goto LAB_142393310;
                  }
                  lVar2 = *(longlong *)(lStack_128 + 0x1a0) + (ulonglong)*puVar21 * 0x48;
                  lVar24 = ~*(ulonglong *)
                             (*(longlong *)(lVar2 + 0x38) + *(longlong *)(lStack_120 + 0x110) * 8) *
                           0x30;
                  puStack_b8 = *(uint **)(*(longlong *)(lVar2 + 0x18) + 0x10 + lVar24);
                  puStack_c8 = *(undefined4 **)(*(longlong *)(lVar2 + 0x18) + 0x28 + lVar24);
                  puVar21 = puVar21 + 1;
                  puStack_b0 = puStack_c8;
                  puStack_a8 = puStack_b8;
                  if ((*(ulonglong *)(lStack_120 + 0x118) < *(ulonglong *)(lVar2 + 0x40)) &&
                     (*(longlong *)
                       (*(longlong *)(lVar2 + 0x38) + *(ulonglong *)(lStack_120 + 0x118) * 8) != 0))
                  {
                    puVar26 = (uint *)0x0;
                    goto LAB_1423930f6;
                  }
                  puVar26 = (uint *)0x0;
                  goto LAB_1423932ab;
                }
                goto LAB_142393310;
              }
LAB_1423930c4:
              puStack_b8 = puStack_a8 + (longlong)puVar17 * 5;
              puStack_b0 = puStack_c8 + (longlong)puVar17;
              if (puVar25 != (uint *)0x0) goto LAB_1423930f6;
LAB_1423932ab:
              puVar26 = (uint *)(ulonglong)((int)puVar26 + 1);
              puVar25 = (uint *)0x0;
              if ((char)puStack_e8 == '\0') {
LAB_1423932be:
                fVar28 = (float)pdb_140dedcd0(&UNK_1434e030c,uVar3);
                *puStack_b0 = uStack_134;
                puStack_b8[4] = (uint)(((fVar9 - fVar28) * fVar11 + fVar28) * (float)puStack_b8[4]);
              }
            }
            if ((int)puVar26 != (int)lVar14) {
              puVar17 = (uint *)(ulonglong)
                                ~*(uint *)((longlong)puStack_d8 + 8 + (longlong)puVar26 * 0x10);
              goto LAB_1423930c4;
            }
            if (puVar21 != puStack_e0) {
              while( true ) {
                lVar14 = *(longlong *)
                          (*(longlong *)(lStack_128 + 0x100) + 0x58 + (ulonglong)*puVar21 * 0xa0);
                if (lVar14 != 0) break;
                puVar21 = puVar21 + 1;
                if (puVar21 == puStack_e0) goto LAB_142393310;
              }
              lVar24 = *(longlong *)(lStack_128 + 0x100) + (ulonglong)*puVar21 * 0xa0;
              lVar2 = *(longlong *)
                       (*(longlong *)(lStack_128 + 0x1a0) + 0x18 +
                       (ulonglong)*(uint *)(lVar24 + 0x94) * 0x48);
              lVar19 = ~*(ulonglong *)
                         (*(longlong *)
                           (*(longlong *)(lStack_128 + 0x1a0) + 0x38 +
                           (ulonglong)*(uint *)(lVar24 + 0x94) * 0x48) +
                         *(longlong *)(lStack_120 + 0x110) * 8) * 0x30;
              puStack_a8 = *(uint **)(lVar2 + 0x10 + lVar19);
              puStack_c8 = *(undefined4 **)(lVar2 + 0x28 + lVar19);
              puVar21 = puVar21 + 1;
              if ((*(ulonglong *)(lVar24 + 0x88) <= *(ulonglong *)(lStack_120 + 0x118)) ||
                 (*(longlong *)
                   (*(longlong *)(lVar24 + 0x80) + *(ulonglong *)(lStack_120 + 0x118) * 8) == 0)) {
                puStack_d8 = *(undefined8 **)(lVar24 + 0x50);
                puStack_b8 = puStack_a8 + (ulonglong)~*(uint *)((longlong)puStack_d8 + 8) * 5;
                puStack_b0 = puStack_c8 + ~*(uint *)((longlong)puStack_d8 + 8);
                puVar26 = (uint *)0x0;
                goto LAB_1423932ab;
              }
              puStack_d8 = *(undefined8 **)(lVar24 + 0x50);
              puStack_b8 = puStack_a8 + (ulonglong)~*(uint *)((longlong)puStack_d8 + 8) * 5;
              puStack_b0 = puStack_c8 + ~*(uint *)((longlong)puStack_d8 + 8);
              puVar26 = (uint *)0x0;
LAB_1423930f6:
              puVar26 = (uint *)(ulonglong)((int)puVar26 + 1);
              puVar25 = (uint *)0x1;
              if ((char)puStack_e8 != '\0') goto LAB_1423932be;
              goto LAB_142392fd3;
            }
LAB_142393310:
            *(undefined4 *)plStack_d0 = plStack_c0._0_4_;
            pdb_142390d40(param_1,uStack_130,uStack_12c,&fStack_138);
            param_4 = *(undefined8 **)(lStack_168 + 8) + *(longlong *)(lStack_168 + 0x10) * 4;
            puStack_d8 = param_4;
            puVar18 = *(undefined8 **)(lStack_168 + 8);
            while (puVar20 = puVar18, puVar20 != param_4) {
              puVar18 = puVar20 + 4;
              if ((*(int *)(puVar20 + 2) != 0) &&
                 (pdb_1411bdd60(aiStack_1d8,param_1,*(int *)(puVar20 + 2),
                                *(undefined4 *)((longlong)puVar20 + 0x14)), aiStack_1d8[0] == 4)) {
                puStack_e8 = puVar18;
                puStack_b0 = puStack_1d0;
                puVar26 = puStack_1c8 + lStack_1c0 * 2;
                puStack_e0 = puStack_1c8;
                puStack_b8 = puVar26;
                for (puVar25 = puStack_1c8; param_4 = puStack_d8, puVar18 = puStack_e8,
                    puVar25 != puVar26; puVar25 = puVar25 + 2) {
                  uVar13 = *puVar25;
                  uVar7 = puVar25[1];
                  *(undefined4 *)plStack_d0 = plStack_c0._0_4_;
                  pdb_1411bdcb0(&iStack_118,param_1,uVar13,uVar7);
                  if (iStack_118 != 4) {
                    uStack_358 = uStack_108;
                    uStack_354 = uStack_104;
                    uStack_350 = uStack_100;
                    uStack_34c = uStack_fc;
                    iStack_368 = iStack_118;
                    uStack_364 = uStack_114;
                    uStack_360 = uStack_110;
                    uStack_35c = uStack_10c;
                    /* WARNING: Subroutine does not return */
                    pdb_142dc8170(&UNK_1434dfe58,0x2b,&iStack_368,&UNK_1434dfe38,&UNK_1434dffe8);
                  }
                  pdb_14238fa10(piVar27,CONCAT44(uStack_10c,uStack_110));
                  uStack_2c0 = 0;
                  uStack_2b8 = 0;
                  fStack_2bc = fVar29;
                  fStack_2b4 = fVar29;
                  pdb_1411be200(&iStack_198,param_1,uVar13,uVar7,piVar27);
                  if (iStack_198 != 4) {
                    uStack_108 = uStack_188;
                    uStack_104 = uStack_184;
                    uStack_100 = uStack_180;
                    uStack_fc = uStack_17c;
                    iStack_118 = iStack_198;
                    uStack_114 = uStack_194;
                    uStack_110 = uStack_190;
                    uStack_10c = uStack_18c;
                    /* WARNING: Subroutine does not return */
                    pdb_142dc8170(&UNK_1434dfe58,0x2b,&iStack_118,&UNK_1434dfe38,&UNK_1434e0000);
                  }
                  pdb_1411bdd60(aiStack_1b8,param_1,uVar13,uVar7);
                  if (aiStack_1b8[0] == 4) {
                    lStack_f0 = lStack_1b0;
                    puVar21 = puStack_1a8 + lStack_1a0 * 2;
                    puStack_a8 = puStack_1a8;
                    puVar26 = puStack_b8;
                    for (puVar17 = puStack_1a8; puStack_b8 = puVar26, puVar17 != puVar21;
                        puVar17 = puVar17 + 2) {
                      uVar13 = *puVar17;
                      uVar7 = puVar17[1];
                      *(undefined4 *)plStack_d0 = plStack_c0._0_4_;
                      pdb_1411bdcb0(&iStack_118,param_1,uVar13,uVar7);
                      if (iStack_118 != 4) {
                        uStack_358 = uStack_108;
                        uStack_354 = uStack_104;
                        uStack_350 = uStack_100;
                        uStack_34c = uStack_fc;
                        iStack_368 = iStack_118;
                        uStack_364 = uStack_114;
                        uStack_360 = uStack_110;
                        uStack_35c = uStack_10c;
                    /* WARNING: Subroutine does not return */
                        pdb_142dc8170(&UNK_1434dfe58,0x2b,&iStack_368,&UNK_1434dfe38,&UNK_1434dffe8)
                        ;
                      }
                      pdb_14238fa10(piVar27,CONCAT44(uStack_10c,uStack_110));
                      uStack_2c0 = 0;
                      uStack_2b8 = 0;
                      fStack_2bc = fVar29;
                      fStack_2b4 = fVar29;
                      pdb_1411be200(&iStack_198,param_1,uVar13,uVar7,piVar27);
                      if (iStack_198 != 4) {
                        uStack_108 = uStack_188;
                        uStack_104 = uStack_184;
                        uStack_100 = uStack_180;
                        uStack_fc = uStack_17c;
                        iStack_118 = iStack_198;
                        uStack_114 = uStack_194;
                        uStack_110 = uStack_190;
                        uStack_10c = uStack_18c;
                    /* WARNING: Subroutine does not return */
                        pdb_142dc8170(&UNK_1434dfe58,0x2b,&iStack_118,&UNK_1434dfe38,&UNK_1434e0000)
                        ;
                      }
                      iStack_198 = 4;
                      puVar26 = puStack_b8;
                    }
                    if (lStack_f0 != 0) {
                      pub_1406abac0((byte *)puStack_a8,lStack_f0 << 3,4);
                    }
                  }
                }
                if (puStack_b0 != (undefined4 *)0x0) {
                  pub_1406abac0((byte *)puStack_e0,(longlong)puStack_b0 << 3,4);
                }
              }
            }
            lVar14 = lStack_150;
          } while (lStack_150 != 2);
          param_3 = aiStack_1b8;
          if (lStack_148 == 0) {
            return;
          }
          plVar16 = (longlong *)pdb_140e97000();
          if ((char)plVar16[0xd] != '\x01') goto LAB_1423937be;
          while( true ) {
            if (*plVar16 == 0) {
              *plVar16 = -1;
              plStack_c0 = plVar16;
              pdb_140e95370(plVar16 + 1,uStack_140);
              *plStack_c0 = *plStack_c0 + 1;
              return;
            }
LAB_142393793:
            plVar16 = (longlong *)pdb_142dc8090(&UNK_1432a7f58);
LAB_14239379f:
            plVar16 = (longlong *)pdb_142dcf3a0(plVar16,0);
            if (plVar16 != (longlong *)0x0) break;
            do {
              plVar16 = (longlong *)pdb_142dc7890(&UNK_1432a7ee8);
LAB_1423937be:
              plVar16 = (longlong *)pdb_142dcf3a0(plVar16,0);
            } while (plVar16 == (longlong *)0x0);
          }
        } while( true );
      }
    }
    bVar5 = puVar22[-2];
    if ((char)bVar5 < -0x40) {
      bVar6 = puVar22[-3];
      if ((char)bVar6 < -0x40) {
        pbVar1 = puVar22 + -4;
        puVar22 = puVar22 + -4;
        uVar13 = bVar6 & 0x3f | (*pbVar1 & 7) << 6;
      }
      else {
        puVar22 = puVar22 + -3;
        uVar13 = bVar6 & 0xf;
      }
      uVar13 = bVar5 & 0x3f | uVar13 << 6;
    }
    else {
      puVar22 = puVar22 + -2;
      uVar13 = bVar5 & 0x1f;
    }
    uVar13 = (uint)(bVar4 & 0x3f) | uVar13 << 6;
    if (uVar13 != 0x5c) goto LAB_142392da4;
LAB_142392dc0:
    puVar23 = puVar22 + -0x1434e02df;
    if (puVar23 < (undefined *)0x2d) {
      piVar27 = (int *)(0x2c - (longlong)puVar23);
      puVar26 = (uint *)(puVar22 + 1);
      goto LAB_142392de6;
    }
    pdb_142dc8070(&UNK_1434e02e0,0x2c,puVar23,0x2c,&UNK_1434e0290);
  }
  pdb_142dc8070(&UNK_1434e01e8,0x3f,0);
LAB_142393816:
  pdb_142dc8070(&UNK_1434e01e8,0x3f);
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}

