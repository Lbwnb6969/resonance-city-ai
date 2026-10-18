// VA 0x140bf2780, PDB extent 1790 bytes
// country_core::resources::mouse_terrain_raycast::mouse_terrain_raycast
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/mouse_terrain_raycast.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::resources::mouse_terrain_raycast::mouse_terrain_raycast
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/mouse_terrain_raycast.rs
   Extent: 1790 */

void pdb_140bf2780(longlong *param_1,longlong *param_2,longlong *param_3,longlong *param_4,
                  undefined8 *param_5,undefined8 *param_6,longlong *param_7)

{
  byte *pbVar1;
  byte *pbVar2;
  byte bVar3;
  byte bVar4;
  int *piVar5;
  int *piVar6;
  code *pcVar7;
  uint uVar8;
  int iVar9;
  longlong lVar10;
  ulonglong uVar11;
  undefined *puVar12;
  longlong *plVar13;
  ulonglong uVar14;
  char cVar15;
  longlong *plVar16;
  longlong *plVar17;
  undefined8 *unaff_R12;
  undefined *unaff_R13;
  longlong *plVar18;
  longlong *plVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  uint uVar26;
  float fVar28;
  undefined1 auVar27 [16];
  float fVar29;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_90;
  float fStack_88;
  int iStack_84;
  undefined4 uStack_80;
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  longlong *plStack_70;
  longlong *plStack_68;
  undefined8 uStack_60;
  
  uStack_60 = 0xfffffffffffffffe;
  uVar8 = pdb_140e94b40();
  plVar16 = (longlong *)(ulonglong)uVar8;
  plStack_68 = param_4;
  if ((char)uVar8 == '\0') {
    uStack_b0 = 0;
    plVar18 = param_2;
    plVar19 = param_3;
    goto LAB_140bf297e;
  }
  unaff_R12 = (undefined8 *)&UNK_1430664fe;
  plVar18 = (longlong *)0x45;
  uVar14 = 0x45;
  lVar10 = pdb_140bf4190(&UNK_1430664fe);
  if (lVar10 == 1) {
    if (uVar14 < 0x46) {
      unaff_R12 = (undefined8 *)&UNK_1430664fe;
      uVar11 = pdb_140bf4190(&UNK_1430664fe);
      if ((uVar11 & 1) != 0) {
        if (0x45 < uVar14 + 2) goto LAB_140bf2d31;
        plVar18 = (longlong *)(0x43 - uVar14);
        unaff_R12 = (undefined8 *)(&UNK_143066500 + uVar14);
      }
      goto LAB_140bf282a;
    }
  }
  else {
LAB_140bf282a:
    puVar12 = &UNK_1430660ca;
    unaff_R13 = &UNK_143066090;
    while( true ) {
      pbVar1 = puVar12 + -1;
      uVar8 = (uint)(char)*pbVar1;
      plStack_70 = plVar18;
      if ((int)uVar8 < 0) break;
      puVar12 = puVar12 + -1;
      if (uVar8 == 0x5c) goto LAB_140bf28e1;
LAB_140bf28b9:
      if (uVar8 == 0x2f) goto LAB_140bf28e1;
      if (puVar12 == &UNK_143066090) {
        plVar17 = (longlong *)0x3a;
LAB_140bf2910:
        plVar13 = (longlong *)pdb_140e97000();
        plVar19 = param_1;
        if ((char)plVar13[0xd] != '\x01') goto LAB_140bf2ca5;
        do {
          param_1 = plVar19;
          plVar18 = plStack_70;
          plVar19 = param_1;
          if (*plVar13 == 0) {
            *plVar13 = -1;
            plStack_70 = plVar13;
            unaff_R13 = (undefined *)
                        pdb_140e94f10(plVar13 + 1,unaff_R12,plVar18,unaff_R13,plVar17,1,0);
            *plStack_70 = *plStack_70 + 1;
            uStack_b0 = 1;
            plVar16 = (longlong *)((ulonglong)plVar16 & 0xffffffff);
            param_4 = param_2;
            plVar18 = param_2;
            plVar19 = param_3;
            puStack_a8 = unaff_R13;
LAB_140bf297e:
            cVar15 = (char)plVar16;
            plVar17 = plVar16;
            param_2 = param_4;
            if (*(int *)*param_5 == 0) {
              unaff_R12 = (undefined8 *)*param_6;
              uStack_b8 = unaff_R12[2];
              uStack_c8 = *(undefined4 *)unaff_R12;
              uStack_c4 = *(undefined4 *)((longlong)unaff_R12 + 4);
              uStack_c0 = *(undefined4 *)(unaff_R12 + 1);
              uStack_bc = *(undefined4 *)((longlong)unaff_R12 + 0xc);
              piVar5 = (int *)*plStack_68;
              if (*piVar5 == 1) {
                *(undefined4 *)plVar18[2] = *(undefined4 *)((longlong)plVar18 + 0x1c);
                piVar6 = (int *)*plVar18;
                fVar20 = ((float)piVar5[1] - *(float *)((longlong)unaff_R12 + 4)) /
                         *(float *)(unaff_R12 + 2);
                fVar21 = fVar20 * (float)*(undefined8 *)((longlong)unaff_R12 + 0xc) +
                         (float)*unaff_R12;
                fVar22 = fVar20 * (float)((ulonglong)*(undefined8 *)((longlong)unaff_R12 + 0xc) >>
                                         0x20) + (float)((ulonglong)*unaff_R12 >> 0x20);
                fVar20 = fVar20 * *(float *)((longlong)unaff_R12 + 0x14) + *(float *)(unaff_R12 + 1)
                ;
                if (*piVar6 == 1) {
                  fVar23 = *(float *)(*param_7 + 0x58);
                  fVar25 = fVar21 - (float)*(undefined8 *)(piVar6 + 1);
                  fVar28 = fVar22 - (float)((ulonglong)*(undefined8 *)(piVar6 + 1) >> 0x20);
                  fVar24 = fVar20 - (float)piVar6[3];
                  *(ulonglong *)(piVar6 + 4) = CONCAT44(fVar28,fVar25);
                  piVar6[6] = (int)fVar24;
                  if (fVar23 != 0.0) {
                    piVar6[7] = (int)(SQRT(fVar24 * fVar24 + fVar28 * fVar28 + fVar25 * fVar25) /
                                     fVar23);
                  }
                }
                *piVar6 = 1;
                *(ulonglong *)(piVar6 + 1) = CONCAT44(fVar22,fVar21);
                piVar6[3] = (int)fVar20;
                fStack_78 = (float)piVar6[3];
                uStack_80 = (undefined4)*(undefined8 *)(piVar6 + 1);
                fStack_7c = (float)((ulonglong)*(undefined8 *)(piVar6 + 1) >> 0x20);
                iStack_84 = 1;
                pdb_140bf2e80(param_1,unaff_R12,&iStack_84);
                if (cVar15 == '\0') {
                  return;
                }
                plVar13 = (longlong *)pdb_140e97000();
                param_2 = param_7;
                if ((char)plVar13[0xd] != '\x01') goto LAB_140bf2cd9;
                goto LAB_140bf2af9;
              }
              plStack_68 = (longlong *)CONCAT71(plStack_68._1_7_,cVar15);
              pdb_1419c14e0(&iStack_84,*plVar19,&uStack_c8,_DAT_142e36f3c);
              iVar9 = 0;
              cVar15 = (char)plStack_68;
              plVar17 = (longlong *)((ulonglong)plStack_68 & 0xff);
              if (iStack_84 == 1) {
                fVar20 = *(float *)(unaff_R12 + 1);
                fVar24 = (float)*unaff_R12;
                fVar25 = (float)((ulonglong)*unaff_R12 >> 0x20);
                fVar21 = (0.0 - fVar25) / *(float *)(unaff_R12 + 2);
                fVar22 = fVar21 * (float)*(undefined8 *)((longlong)unaff_R12 + 0xc) + fVar24;
                fVar23 = fVar21 * (float)((ulonglong)*(undefined8 *)((longlong)unaff_R12 + 0xc) >>
                                         0x20) + fVar25;
                fVar21 = fVar21 * *(float *)((longlong)unaff_R12 + 0x14) + fVar20;
                fVar28 = fVar24 - fVar22;
                fVar29 = fVar25 - fVar23;
                fVar25 = (fVar24 - fStack_7c) * (fVar24 - fStack_7c) +
                         (fVar25 - fStack_78) * (fVar25 - fStack_78);
                fVar24 = fVar20 - fVar21;
                auVar27._0_4_ = fVar24 * fVar24 + fVar28 * fVar28 + fVar29 * fVar29;
                auVar27._4_4_ = (fVar20 - fStack_74) * (fVar20 - fStack_74) + fVar25;
                auVar27._8_4_ = fVar25 + 0.0;
                auVar27._12_4_ = 0;
                auVar27 = sqrtps(auVar27,auVar27);
                uVar8 = (uint)(auVar27._0_4_ < auVar27._4_4_);
                uVar26 = (int)(uVar8 << 0x1f) >> 0x1f;
                uVar8 = (int)(uVar8 << 0x1f) >> 0x1f;
                if (auVar27._4_4_ <= auVar27._0_4_) {
                  fVar21 = fStack_74;
                }
                uVar14 = CONCAT44((uint)fVar23 & uVar8,(uint)fVar22 & uVar26) |
                         CONCAT44(~uVar8 & (uint)fStack_78,~uVar26 & (uint)fStack_7c);
                *(undefined4 *)plVar18[2] = *(undefined4 *)((longlong)plVar18 + 0x1c);
                piVar5 = (int *)*plVar18;
                if (*piVar5 == 1) {
                  fVar20 = *(float *)(*param_7 + 0x58);
                  fVar23 = (float)uVar14 - (float)*(undefined8 *)(piVar5 + 1);
                  fVar24 = (float)(uVar14 >> 0x20) -
                           (float)((ulonglong)*(undefined8 *)(piVar5 + 1) >> 0x20);
                  fVar22 = fVar21 - (float)piVar5[3];
                  *(ulonglong *)(piVar5 + 4) = CONCAT44(fVar24,fVar23);
                  piVar5[6] = (int)fVar22;
                  if (fVar20 != 0.0) {
                    piVar5[7] = (int)(SQRT(fVar22 * fVar22 + fVar24 * fVar24 + fVar23 * fVar23) /
                                     fVar20);
                  }
                }
                *piVar5 = 1;
                *(ulonglong *)(piVar5 + 1) = uVar14;
                piVar5[3] = (int)fVar21;
                fStack_88 = (float)piVar5[3];
                uStack_90 = *(undefined8 *)(piVar5 + 1);
                iVar9 = 1;
              }
              uStack_80 = (undefined4)uStack_90;
              fStack_7c = (float)((ulonglong)uStack_90 >> 0x20);
              fStack_78 = fStack_88;
              iStack_84 = iVar9;
              pdb_140bf2e80(param_1,unaff_R12,&iStack_84);
              param_2 = param_7;
            }
            if (cVar15 == '\0') {
              return;
            }
            plVar13 = (longlong *)pdb_140e97000();
            if (((char)plVar13[0xd] != '\x01') &&
               (plVar13 = (longlong *)pdb_142d8ec20(plVar13,0), plVar13 == (longlong *)0x0))
            goto LAB_140bf2ccd;
            param_3 = plVar18;
            plVar16 = param_1;
            if (*plVar13 == 0) {
              *plVar13 = -1;
              plStack_68 = plVar13;
              pdb_140e95370(plVar13 + 1,unaff_R13);
LAB_140bf29c7:
              *plStack_68 = *plStack_68 + 1;
              return;
            }
          }
          while( true ) {
            plVar13 = (longlong *)pdb_142dc8090(&UNK_143326a50);
LAB_140bf2ca5:
            plVar13 = (longlong *)pdb_142d8ec20(plVar13,0);
            plVar18 = param_3;
            param_1 = plVar16;
            if (plVar13 != (longlong *)0x0) break;
LAB_140bf2ccd:
            do {
              plVar13 = (longlong *)pdb_142dc7890(&UNK_143326860);
LAB_140bf2cd9:
              plVar13 = (longlong *)pdb_142d8ec20(plVar13,0);
            } while (plVar13 == (longlong *)0x0);
LAB_140bf2af9:
            param_3 = plVar18;
            plVar16 = param_1;
            if (*plVar13 == 0) {
              *plVar13 = -1;
              plStack_68 = plVar13;
              pdb_140e95370(plVar13 + 1,unaff_R13);
              goto LAB_140bf29c7;
            }
          }
        } while( true );
      }
    }
    bVar3 = puVar12[-2];
    if ((char)bVar3 < -0x40) {
      bVar4 = puVar12[-3];
      if ((char)bVar4 < -0x40) {
        pbVar2 = puVar12 + -4;
        puVar12 = puVar12 + -4;
        uVar8 = bVar4 & 0x3f | (*pbVar2 & 7) << 6;
      }
      else {
        puVar12 = puVar12 + -3;
        uVar8 = bVar4 & 0xf;
      }
      uVar8 = bVar3 & 0x3f | uVar8 << 6;
    }
    else {
      puVar12 = puVar12 + -2;
      uVar8 = bVar3 & 0x1f;
    }
    uVar8 = (uint)(*pbVar1 & 0x3f) | uVar8 << 6;
    if (uVar8 != 0x5c) goto LAB_140bf28b9;
LAB_140bf28e1:
    if (puVar12 + -0x14306608f < (undefined *)0x3b) {
      plVar17 = (longlong *)(0x39 - (longlong)(puVar12 + -0x143066090));
      unaff_R13 = puVar12 + 1;
      goto LAB_140bf2910;
    }
    pdb_142dc8070(&UNK_143066090,0x3a,puVar12 + -0x14306608f,0x3a,&UNK_1430665a8);
  }
  pdb_142dc8070(&UNK_1430664fe,0x45,0);
LAB_140bf2d31:
  pdb_142dc8070(&UNK_1430664fe,0x45);
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}

