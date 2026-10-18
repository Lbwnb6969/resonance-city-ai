// VA 0x140920a30, PDB extent 6063 bytes
// country_core::systems::brush_preview::brush_preview
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/brush_preview.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: country_core::systems::brush_preview::brush_preview
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/brush_preview.rs
   Extent: 6063 */

void pdb_140920a30(longlong *param_1,undefined8 *param_2,undefined8 *param_3,longlong param_4,
                  longlong *param_5,undefined8 *param_6,undefined8 *param_7,undefined8 *param_8)

{
  byte *pbVar1;
  undefined4 *puVar2;
  byte bVar3;
  byte bVar4;
  undefined4 uVar5;
  ulonglong *puVar6;
  longlong *plVar7;
  longlong *plVar8;
  char *pcVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  char cVar13;
  bool bVar14;
  longlong lVar15;
  ulonglong uVar16;
  undefined *puVar17;
  longlong *plVar18;
  byte *pbVar19;
  char *pcVar20;
  uint uVar21;
  uint uVar22;
  float *pfVar23;
  code *pcVar24;
  longlong *plVar25;
  byte *pbVar26;
  longlong lVar27;
  longlong lVar28;
  ulonglong uVar29;
  int iVar30;
  uint *unaff_RBX;
  uint *puVar31;
  uint *puVar32;
  longlong *plVar33;
  undefined8 uVar34;
  longlong *plVar35;
  longlong *plVar36;
  uint *puVar37;
  longlong *plVar38;
  bool bVar39;
  float fVar40;
  undefined4 uVar41;
  float fVar42;
  undefined4 uVar43;
  float fVar44;
  undefined4 uVar45;
  float fVar46;
  float unaff_XMM10_Da;
  float fVar47;
  longlong lStack_1e8;
  undefined4 *puStack_1e0;
  undefined4 *puStack_1d8;
  undefined8 uStack_1c8;
  float fStack_1c0;
  undefined4 uStack_1bc;
  undefined8 uStack_1ac;
  undefined4 uStack_1a4;
  undefined8 uStack_198;
  undefined4 uStack_190;
  undefined8 uStack_188;
  undefined4 uStack_180;
  float *pfStack_170;
  float *pfStack_168;
  undefined8 *puStack_160;
  undefined8 *puStack_158;
  longlong *plStack_150;
  undefined8 *puStack_148;
  float *pfStack_140;
  int *piStack_138;
  longlong lStack_130;
  undefined8 uStack_128;
  undefined4 uStack_120;
  undefined8 uStack_118;
  longlong *plStack_110;
  undefined8 *puStack_108;
  longlong *plStack_100;
  byte *pbStack_f8;
  undefined8 uStack_f0;
  
  uStack_f0 = 0xfffffffffffffffe;
  pbVar19 = (byte *)*param_8;
  pfStack_140 = (float *)param_8[4];
  puStack_108 = param_3;
  cVar13 = pdb_140e94b40();
  pbStack_f8 = (byte *)CONCAT71(pbStack_f8._1_7_,cVar13);
  plStack_100 = (longlong *)param_4;
  if (cVar13 == '\0') {
    bVar14 = false;
    goto LAB_140920c8a;
  }
  puVar37 = (uint *)&UNK_1430216d0;
  puVar32 = (uint *)0x33;
  uVar29 = 0x33;
  lVar15 = pdb_1409279b0(&UNK_1430216d0);
  if (lVar15 != 1) goto LAB_140920b45;
  if (uVar29 < 0x34) {
    puVar37 = (uint *)&UNK_1430216d0;
    uVar16 = pdb_1409279b0(&UNK_1430216d0);
    if ((uVar16 & 1) == 0) {
LAB_140920b45:
      puVar17 = &UNK_143020ff0;
      plVar38 = (longlong *)&UNK_143020fc0;
      do {
        pbVar26 = puVar17 + -1;
        uVar21 = (uint)(char)*pbVar26;
        if ((int)uVar21 < 0) {
          bVar3 = puVar17[-2];
          if ((char)bVar3 < -0x40) {
            bVar4 = puVar17[-3];
            if ((char)bVar4 < -0x40) {
              pbVar1 = puVar17 + -4;
              puVar17 = puVar17 + -4;
              uVar21 = bVar4 & 0x3f | (*pbVar1 & 7) << 6;
            }
            else {
              puVar17 = puVar17 + -3;
              uVar21 = bVar4 & 0xf;
            }
            uVar21 = bVar3 & 0x3f | uVar21 << 6;
          }
          else {
            puVar17 = puVar17 + -2;
            uVar21 = bVar3 & 0x1f;
          }
          uVar21 = (uint)(*pbVar26 & 0x3f) | uVar21 << 6;
          if (uVar21 != 0x5c) goto LAB_140920bd9;
LAB_140920bf5:
          if ((undefined *)0x30 < puVar17 + -0x143020fbf) goto LAB_140921e10;
          unaff_RBX = (uint *)(0x2f - (longlong)(puVar17 + -0x143020fc0));
          plVar38 = (longlong *)(puVar17 + 1);
          goto LAB_140920c18;
        }
        puVar17 = puVar17 + -1;
        if (uVar21 == 0x5c) goto LAB_140920bf5;
LAB_140920bd9:
        if (uVar21 == 0x2f) goto LAB_140920bf5;
      } while (puVar17 != &UNK_143020fc0);
      unaff_RBX = (uint *)0x30;
LAB_140920c18:
      plVar18 = (longlong *)pdb_140e97000();
      if ((char)plVar18[0xd] != '\x01') goto LAB_140921dc7;
LAB_140920c27:
      if (*plVar18 == 0) {
        *plVar18 = -1;
        plStack_110 = plVar18;
        lStack_1e8 = pdb_140e94f10(plVar18 + 1,puVar37,puVar32,plVar38,unaff_RBX,1,0);
        *plStack_110 = *plStack_110 + 1;
        bVar14 = true;
        lStack_130 = lStack_1e8;
LAB_140920c8a:
        if (*(char *)(*param_5 + 0xca) != '\0') {
          pcVar24 = (code *)*param_1;
          puVar37 = *(uint **)((longlong)pcVar24 + 0xf8);
          plVar38 = *(longlong **)((longlong)plStack_100 + 8);
          if (plVar38 == (longlong *)0x0) {
            plVar38 = *(longlong **)((longlong)plStack_100 + 0x10);
          }
          plStack_110 = (longlong *)param_1[1];
          puVar32 = puVar37 + *(longlong *)((longlong)pcVar24 + 0x100);
          plStack_100 = (longlong *)CONCAT71(plStack_100._1_7_,*(char *)((longlong)pcVar24 + 0x108))
          ;
          puStack_108 = (undefined8 *)0x8;
          param_2 = (undefined8 *)0x0;
          pbVar19 = (byte *)0x0;
          pfStack_140 = (float *)0x8;
          pfVar23 = (float *)pcVar24;
          pfStack_170 = (float *)pcVar24;
          if (*(char *)((longlong)pcVar24 + 0x108) != '\0') goto LAB_140920db0;
          do {
            if ((int)param_2 == (int)pbVar19) {
              pfVar23 = (float *)pcVar24;
              if (puVar37 == puVar32) goto LAB_140920f5f;
              while( true ) {
                pfVar23 = (float *)((ulonglong)*puVar37 * 0xa0);
                pbVar19 = *(byte **)(plStack_110[0x20] + 0x58 + (longlong)pfVar23);
                if (pbVar19 != (byte *)0x0) break;
                puVar37 = puVar37 + 1;
                if (puVar37 == puVar32) goto LAB_140920f5f;
              }
              pcVar24 = *(code **)(pfStack_170 + 0x46);
              puVar37 = puVar37 + 1;
              puStack_108 = *(undefined8 **)((longlong)pfVar23 + plStack_110[0x20] + 0x50);
              param_2 = (undefined8 *)0x0;
            }
            unaff_RBX = (uint *)puStack_108[(longlong)param_2 * 2];
            iVar30 = (int)unaff_RBX;
            pfVar23 = (float *)pcVar24;
            while( true ) {
              if (iVar30 == 0) goto LAB_140920f5f;
              lVar15 = plVar38[2];
              if ((ulonglong)(*plVar38 - lVar15) < 0x18) {
                pdb_142d7f1b0(plVar38,lVar15,0x18,1,1);
              }
              param_2 = (undefined8 *)(ulonglong)((int)param_2 + 1);
              lVar27 = plVar38[1];
              *(code **)(lVar27 + lVar15) = pdb_14160bfd0;
              *(uint **)(lVar27 + 8 + lVar15) = unaff_RBX;
              pcVar24 = pdb_14160dde0;
              *(code **)(lVar27 + 0x10 + lVar15) = pdb_14160dde0;
              param_1 = (longlong *)(lVar15 + 0x18);
              plVar38[2] = (longlong)param_1;
              pfVar23 = (float *)pcVar24;
              if ((char)plStack_100 == '\0') break;
LAB_140920db0:
              if ((int)param_2 == (int)pbVar19) {
                if (puVar37 == puVar32) goto LAB_140920f5f;
                while( true ) {
                  uVar29 = (ulonglong)*puVar37;
                  pfVar23 = (float *)(uVar29 * 9);
                  pbVar19 = *(byte **)(plStack_110[0x34] + 0x10 + uVar29 * 0x48);
                  if (pbVar19 != (byte *)0x0) break;
                  puVar37 = puVar37 + 1;
                  if (puVar37 == puVar32) goto LAB_140920f5f;
                }
                pfStack_140 = *(float **)(plStack_110[0x34] + uVar29 * 0x48 + 8);
                puVar37 = puVar37 + 1;
                param_2 = (undefined8 *)0x0;
              }
              unaff_RBX = *(uint **)(pfStack_140 + (longlong)param_2 * 2);
              iVar30 = (int)unaff_RBX;
              pfVar23 = pfStack_140;
            }
          } while( true );
        }
        puVar6 = (ulonglong *)*param_2;
        lVar15 = param_2[1];
        uVar29 = *puVar6;
        plVar38 = (longlong *)0x0;
        plVar18 = (longlong *)(uVar29 - *(ulonglong *)(lVar15 + 0x18));
        if (uVar29 < *(ulonglong *)(lVar15 + 0x18)) {
          plVar18 = plVar38;
        }
        plVar25 = (longlong *)(uVar29 - *(ulonglong *)(lVar15 + 0x38));
        if (uVar29 < *(ulonglong *)(lVar15 + 0x38)) {
          plVar25 = plVar38;
        }
        plVar7 = *(longlong **)(lVar15 + 0x10);
        plVar8 = *(longlong **)(lVar15 + 0x30);
        bVar39 = plVar8 < plVar25;
        plVar35 = (longlong *)((longlong)plVar8 - (longlong)plVar25);
        plVar36 = plVar35;
        if (bVar39) {
          plVar36 = plVar38;
        }
        puVar37 = (uint *)(ulonglong)(bVar39 || plVar35 == (longlong *)0x0);
        plVar33 = (longlong *)((longlong)plVar7 - (longlong)plVar18);
        if (plVar18 > plVar7) {
          plVar33 = plVar38;
        }
        uVar29 = *(ulonglong *)(lVar15 + 0x40);
        param_2 = *(undefined8 **)(lVar15 + 8);
        lVar15 = *(longlong *)(lVar15 + 0x28);
        *puVar6 = (uVar29 - (longlong)plVar36) - (longlong)plVar33;
        pfStack_170 = (float *)pbVar19;
        if (plVar18 <= plVar7 &&
            (longlong *)((longlong)plVar7 - (longlong)plVar18) != (longlong *)0x0 ||
            !bVar39 && plVar35 != (longlong *)0x0) {
          lVar15 = lVar15 + (longlong)plVar25 * 0x20;
          param_2 = param_2 + (longlong)plVar18 * 4;
          if (plVar7 < plVar18) {
            param_2 = (undefined8 *)0x8;
          }
          plVar35 = param_2 + (longlong)plVar33 * 4 + -4;
          if (plVar7 <= plVar18) {
            plVar35 = plVar38;
          }
          uStack_118 = (undefined8 *)0x8;
          if (plVar8 < plVar25) {
            lVar15 = 8;
          }
          plStack_110 = (longlong *)(lVar15 + -0x20 + (longlong)plVar36 * 0x20);
          if (plVar8 <= plVar25) {
            plStack_110 = plVar35;
          }
          *puVar6 = uVar29;
          pfStack_168 = (float *)*param_1;
          puVar32 = *(uint **)((longlong)pfStack_168 + 0xf8);
          plVar18 = *(longlong **)((longlong)plStack_100 + 8);
          pcVar9 = (char *)*puStack_108;
          if (plVar18 == (longlong *)0x0) {
            plVar18 = *(longlong **)((longlong)plStack_100 + 0x10);
          }
          lStack_130 = param_1[1];
          uVar5 = *(undefined4 *)((longlong)param_1 + 0x14);
          puVar37 = puVar32 + *(longlong *)((longlong)pfStack_168 + 0x100);
          puStack_160 = (undefined8 *)((longlong)plStack_110 + 0xc);
          pbStack_f8 = (byte *)0x0;
          puStack_148 = (undefined8 *)0x8;
          piStack_138 = (int *)0x0;
          plStack_100 = (longlong *)0x0;
          param_2 = (undefined8 *)0x0;
          puStack_108 = (undefined8 *)
                        CONCAT71(puStack_108._1_7_,*(char *)((longlong)pfStack_168 + 0x108));
          plVar25 = plStack_110;
          plStack_150 = param_1;
          cVar13 = *(char *)((longlong)pfStack_168 + 0x108);
LAB_1409210ad:
          if (cVar13 == '\0') {
            puVar2 = puStack_1d8;
            if ((int)param_2 == (int)plVar38) {
              if (puVar32 == puVar37) goto LAB_140920f04;
              puVar31 = puVar32;
              while( true ) {
                plVar38 = *(longlong **)
                           (*(longlong *)(lStack_130 + 0x100) + 0x58 + (ulonglong)*puVar31 * 0xa0);
                if (plVar38 != (longlong *)0x0) break;
                puVar31 = puVar31 + 1;
                if (puVar31 == puVar37) goto LAB_140920f04;
              }
              lVar27 = *(longlong *)(lStack_130 + 0x100) + (ulonglong)*puVar31 * 0xa0;
              lVar15 = *(longlong *)(lStack_130 + 0x1a0) +
                       (ulonglong)*(uint *)(lVar27 + 0x94) * 0x48;
              cVar13 = (char)puStack_108;
              if ((*(ulonglong *)((longlong)pfStack_168 + 0x110) <
                   *(ulonglong *)
                    (*(longlong *)(lStack_130 + 0x1a0) + 0x40 +
                    (ulonglong)*(uint *)(lVar27 + 0x94) * 0x48)) &&
                 (uVar29 = *(ulonglong *)
                            (*(longlong *)(lVar15 + 0x38) +
                            *(ulonglong *)((longlong)pfStack_168 + 0x110) * 8), uVar29 != 0)) {
                pbStack_f8 = *(byte **)(*(longlong *)(lVar15 + 0x18) + 0x10 + ~uVar29 * 0x30);
                uVar29 = *(ulonglong *)((longlong)pfStack_168 + 0x118);
                if (uVar29 < *(ulonglong *)(lVar27 + 0x88)) {
LAB_1409213a2:
                  puVar32 = puVar31 + 1;
                  if (*(longlong *)(*(longlong *)(lVar27 + 0x80) + uVar29 * 8) != 0) {
                    lVar28 = ~*(ulonglong *)(*(longlong *)(lVar15 + 0x38) + uVar29 * 8) * 0x30;
                    piStack_138 = *(int **)(*(longlong *)(lVar15 + 0x18) + 0x10 + lVar28);
                    puStack_158 = *(undefined8 **)(*(longlong *)(lVar15 + 0x18) + 0x28 + lVar28);
                    uStack_118 = *(undefined8 **)(lVar27 + 0x50);
                    uVar34 = *uStack_118;
                    uVar29 = (ulonglong)~*(uint *)(uStack_118 + 1);
                    pbVar19 = pbStack_f8 + uVar29;
                    param_2 = (undefined8 *)0x0;
                    goto LAB_14092140b;
                  }
                }
              }
              else {
                pbStack_f8 = (byte *)0x0;
                uVar29 = *(ulonglong *)((longlong)pfStack_168 + 0x118);
                if (uVar29 < *(ulonglong *)(lVar27 + 0x88)) goto LAB_1409213a2;
              }
              puVar32 = puVar31 + 1;
              uStack_118 = *(undefined8 **)(lVar27 + 0x50);
              uVar34 = *uStack_118;
              pbVar19 = pbStack_f8 + ~*(uint *)(uStack_118 + 1);
              plStack_100 = (longlong *)0x0;
              param_2 = (undefined8 *)0x0;
              lVar15 = 0;
              iVar30 = (int)uVar34;
            }
            else {
              uVar34 = uStack_118[(longlong)param_2 * 2];
              uVar29 = (ulonglong)~*(uint *)(uStack_118 + (longlong)param_2 * 2 + 1);
              pbVar19 = pbStack_f8 + uVar29;
              if ((char)plStack_100 != '\x01') {
                plStack_100 = (longlong *)0x0;
                lVar15 = 0;
                iVar30 = (int)uVar34;
                goto joined_r0x0001409211f2;
              }
LAB_14092140b:
              lVar15 = uVar29 * 0x30 + (longlong)piStack_138;
              puStack_1d8 = (undefined4 *)((longlong)puStack_158 + uVar29 * 4);
              plStack_100 = (longlong *)CONCAT71((int7)((ulonglong)puStack_158 >> 8),1);
              iVar30 = (int)uVar34;
              puVar2 = puStack_1d8;
            }
          }
          else if ((int)param_2 == (int)plVar38) {
            if (puVar32 == puVar37) goto LAB_140920f04;
            puVar31 = puVar32;
            while( true ) {
              plVar38 = *(longlong **)
                         (*(longlong *)(lStack_130 + 0x1a0) + 0x10 + (ulonglong)*puVar31 * 0x48);
              if (plVar38 != (longlong *)0x0) break;
              puVar31 = puVar31 + 1;
              if (puVar31 == puVar37) goto LAB_140920f04;
            }
            lVar15 = *(longlong *)(lStack_130 + 0x1a0) + (ulonglong)*puVar31 * 0x48;
            if ((*(ulonglong *)((longlong)pfStack_168 + 0x110) < *(ulonglong *)(lVar15 + 0x40)) &&
               (uVar29 = *(ulonglong *)
                          (*(longlong *)(lVar15 + 0x38) +
                          *(ulonglong *)((longlong)pfStack_168 + 0x110) * 8), uVar29 != 0)) {
              pbVar19 = *(byte **)(*(longlong *)(lVar15 + 0x18) + 0x10 + ~uVar29 * 0x30);
              uVar29 = *(ulonglong *)((longlong)pfStack_168 + 0x118);
            }
            else {
              pbStack_f8 = (byte *)0x0;
              uVar29 = *(ulonglong *)((longlong)pfStack_168 + 0x118);
              pbVar19 = pbStack_f8;
            }
            pbStack_f8 = pbVar19;
            if (uVar29 < *(ulonglong *)(lVar15 + 0x40)) {
              puVar32 = puVar31 + 1;
              uVar29 = *(ulonglong *)(*(longlong *)(lVar15 + 0x38) + uVar29 * 8);
              if (uVar29 != 0) {
                puStack_148 = *(undefined8 **)(lVar15 + 8);
                lVar27 = ~uVar29 * 0x30;
                piStack_138 = *(int **)(*(longlong *)(lVar15 + 0x18) + 0x10 + lVar27);
                puStack_158 = *(undefined8 **)(*(longlong *)(lVar15 + 0x18) + 0x28 + lVar27);
                uVar34 = *puStack_148;
                param_2 = (undefined8 *)0x0;
                goto LAB_14092134d;
              }
            }
            puVar32 = puVar31 + 1;
            puStack_148 = *(undefined8 **)(lVar15 + 8);
            uVar34 = *puStack_148;
            plStack_100 = (longlong *)0x0;
            param_2 = (undefined8 *)0x0;
            lVar15 = 0;
            iVar30 = (int)uVar34;
            puVar2 = puStack_1e0;
          }
          else {
            uVar34 = puStack_148[(longlong)param_2];
            pbVar19 = pbStack_f8 + (longlong)param_2;
            if ((char)plStack_100 == '\x01') {
LAB_14092134d:
              lVar15 = (longlong)param_2 * 0x30 + (longlong)piStack_138;
              puStack_1e0 = (undefined4 *)((longlong)puStack_158 + (longlong)param_2 * 4);
              plStack_100 = (longlong *)CONCAT71((int7)((ulonglong)puStack_158 >> 8),1);
              iVar30 = (int)uVar34;
              puVar2 = puStack_1e0;
            }
            else {
              plStack_100 = (longlong *)0x0;
              lVar15 = 0;
              iVar30 = (int)uVar34;
              puVar2 = puStack_1e0;
            }
          }
joined_r0x0001409211f2:
          if (iVar30 == 0) goto LAB_140920f04;
          param_2 = (undefined8 *)(ulonglong)((int)param_2 + 1);
          if (*pbVar19 != (char)plVar25[3]) {
            lVar15 = plVar18[2];
            if ((ulonglong)(*plVar18 - lVar15) < 0x18) {
              pdb_142d7f1b0(plVar18,lVar15,0x18,1,1);
            }
            lVar27 = plVar18[1];
            *(code **)(lVar27 + lVar15) = pdb_14160bfd0;
            *(undefined8 *)(lVar27 + 8 + lVar15) = uVar34;
            *(code **)(lVar27 + 0x10 + lVar15) = pdb_14160dde0;
            lVar15 = lVar15 + 0x18;
            goto LAB_140921686;
          }
          if ((char)plVar25[1] == '\0') goto LAB_14092153d;
          if (lVar15 == 0) {
            uStack_120 = *(undefined4 *)(puStack_160 + 1);
            uStack_128 = *puStack_160;
            pdb_140df4940(&uStack_1c8);
            uVar45 = uStack_1bc;
            fVar44 = fStack_1c0;
            uStack_180 = uStack_120;
            uStack_188 = uStack_128;
            uVar41 = (undefined4)uStack_1c8;
            uVar43 = uStack_1c8._4_4_;
            uStack_198 = uStack_1ac;
            uStack_190 = uStack_1a4;
            lVar15 = plVar18[2];
            if ((ulonglong)(*plVar18 - lVar15) < 0x58) {
              pdb_142d7f1b0(plVar18,lVar15,0x58,1,1);
            }
            goto LAB_140921640;
          }
          fStack_1c0 = *(float *)(puStack_160 + 1);
          uStack_1c8 = *puStack_160;
          *puVar2 = uVar5;
          *(float *)(lVar15 + 0x18) = fStack_1c0;
          *(undefined8 *)(lVar15 + 0x10) = uStack_1c8;
          goto LAB_1409210ad;
        }
LAB_140920f04:
        fVar12 = _DAT_143020e90;
        uVar41 = _DAT_142e37988;
        fVar11 = _DAT_142e3788c;
        uVar5 = _DAT_142e37830;
        fVar10 = _DAT_142e36f50;
        fVar44 = _DAT_142e36f28;
        pfStack_168 = (float *)*param_7;
        plVar38 = (longlong *)0x0;
        uVar21 = uStack_118._4_4_;
        if (*(char *)pfStack_140 == '\x01') {
          uStack_118 = (undefined8 *)((ulonglong)uStack_118._4_4_ << 0x20);
          uVar22 = *(byte *)pfStack_170 - 2;
          if (uVar22 < 0xd) {
            switch((uint)*(byte *)pfStack_170) {
            case 2:
            case 3:
              unaff_XMM10_Da = *pfStack_168;
              break;
            default:
              goto LAB_140921728;
            case 0xb:
              unaff_XMM10_Da = pfStack_168[1];
              break;
            case 0xd:
              unaff_XMM10_Da = pfStack_168[2];
              break;
            case 0xe:
              unaff_XMM10_Da = pfStack_168[2] * _DAT_142f95160;
            }
            uStack_118 = (undefined8 *)
                         CONCAT44(uVar21,(int)CONCAT71((int7)((ulonglong)
                                                              (&UNK_143021884 +
                                                              *(int *)(&UNK_143021884 +
                                                                      (ulonglong)uVar22 * 4)) >> 8),
                                                       1));
          }
        }
        else {
          uStack_118 = (undefined8 *)((ulonglong)uStack_118._4_4_ << 0x20);
        }
LAB_140921728:
        puStack_108 = (undefined8 *)*param_1;
        pfStack_140 = (float *)param_1[1];
        plStack_110 = (longlong *)
                      CONCAT44(plStack_110._4_4_,*(undefined4 *)((longlong)param_1 + 0x14));
        puVar32 = (uint *)puStack_108[0x1f];
        unaff_RBX = puVar32 + puStack_108[0x20];
        plStack_100 = (longlong *)CONCAT71(plStack_100._1_7_,*(undefined1 *)(puStack_108 + 0x21));
        pfStack_170 = (float *)*param_6;
        fVar47 = unaff_XMM10_Da * _DAT_142e36f50;
        fVar46 = _DAT_142e36f50;
        if (_DAT_142e36f50 <= fVar47) {
          fVar46 = fVar47;
        }
        unaff_XMM10_Da = unaff_XMM10_Da / _DAT_143020e90;
        fVar42 = _DAT_142e36f28;
        if (fVar46 <= _DAT_142e36f28) {
          fVar42 = fVar46;
        }
        plStack_150 = (longlong *)0x8;
        piStack_138 = (int *)0x8;
        pbStack_f8 = (byte *)0x0;
        lStack_130 = 0;
        param_1 = (longlong *)0x0;
        pbVar19 = (byte *)0x0;
LAB_1409217f1:
        if ((char)plStack_100 == '\0') {
          if ((int)pbVar19 == (int)plVar38) {
            if (puVar32 == unaff_RBX) goto LAB_140921d0e;
            while( true ) {
              plVar38 = *(longlong **)
                         (*(longlong *)(pfStack_140 + 0x40) + 0x58 + (ulonglong)*puVar32 * 0xa0);
              if (plVar38 != (longlong *)0x0) break;
              puVar32 = puVar32 + 1;
              if (puVar32 == unaff_RBX) goto LAB_140921d0e;
            }
            lVar27 = *(longlong *)(pfStack_140 + 0x40) + (ulonglong)*puVar32 * 0xa0;
            lVar15 = *(longlong *)(pfStack_140 + 0x68) + (ulonglong)*(uint *)(lVar27 + 0x94) * 0x48;
            if (((ulonglong)puStack_108[0x22] <
                 *(ulonglong *)
                  (*(longlong *)(pfStack_140 + 0x68) + 0x40 +
                  (ulonglong)*(uint *)(lVar27 + 0x94) * 0x48)) &&
               (uVar29 = *(ulonglong *)(*(longlong *)(lVar15 + 0x38) + puStack_108[0x22] * 8),
               uVar29 != 0)) {
              pbStack_f8 = *(byte **)(*(longlong *)(lVar15 + 0x18) + 0x10 + ~uVar29 * 0x30);
            }
            else {
              pbStack_f8 = (byte *)0x0;
            }
            puVar32 = puVar32 + 1;
            uVar29 = puStack_108[0x23];
            if ((*(ulonglong *)(lVar27 + 0x88) <= uVar29) ||
               (*(longlong *)(*(longlong *)(lVar27 + 0x80) + uVar29 * 8) == 0)) {
              piStack_138 = *(int **)(lVar27 + 0x50);
              iVar30 = *piStack_138;
              pbVar26 = pbStack_f8 + (uint)~piStack_138[2];
              pbVar19 = (byte *)0x0;
LAB_140921b3d:
              param_1 = (longlong *)0x0;
              puVar37 = (uint *)0x0;
              param_2 = puStack_158;
              goto LAB_140921b44;
            }
            lVar28 = ~*(ulonglong *)(*(longlong *)(lVar15 + 0x38) + uVar29 * 8) * 0x30;
            lStack_130 = *(longlong *)(*(longlong *)(lVar15 + 0x18) + 0x10 + lVar28);
            puStack_148 = *(undefined8 **)(*(longlong *)(lVar15 + 0x18) + 0x28 + lVar28);
            piStack_138 = *(int **)(lVar27 + 0x50);
            iVar30 = *piStack_138;
            uVar29 = (ulonglong)(uint)~piStack_138[2];
            pbVar26 = pbStack_f8 + uVar29;
            pbVar19 = (byte *)0x0;
          }
          else {
            iVar30 = piStack_138[(longlong)pbVar19 * 4];
            uVar29 = (ulonglong)(uint)~piStack_138[(longlong)pbVar19 * 4 + 2];
            pbVar26 = pbStack_f8 + uVar29;
            if ((char)param_1 != '\x01') goto LAB_140921b3d;
          }
          puVar37 = (uint *)(uVar29 * 0x30 + lStack_130);
          param_2 = (undefined8 *)((longlong)puStack_148 + uVar29 * 4);
          param_1 = (longlong *)0x1;
          puStack_158 = param_2;
        }
        else {
          if ((int)pbVar19 == (int)plVar38) {
            if (puVar32 == unaff_RBX) goto LAB_140921d0e;
            while( true ) {
              plVar38 = *(longlong **)
                         (*(longlong *)(pfStack_140 + 0x68) + 0x10 + (ulonglong)*puVar32 * 0x48);
              if (plVar38 != (longlong *)0x0) break;
              puVar32 = puVar32 + 1;
              if (puVar32 == unaff_RBX) goto LAB_140921d0e;
            }
            lVar15 = *(longlong *)(pfStack_140 + 0x68) + (ulonglong)*puVar32 * 0x48;
            if (((ulonglong)puStack_108[0x22] < *(ulonglong *)(lVar15 + 0x40)) &&
               (uVar29 = *(ulonglong *)(*(longlong *)(lVar15 + 0x38) + puStack_108[0x22] * 8),
               uVar29 != 0)) {
              pbStack_f8 = *(byte **)(*(longlong *)(lVar15 + 0x18) + 0x10 + ~uVar29 * 0x30);
            }
            else {
              pbStack_f8 = (byte *)0x0;
            }
            puVar32 = puVar32 + 1;
            pbVar26 = pbStack_f8;
            if ((*(ulonglong *)(lVar15 + 0x40) <= (ulonglong)puStack_108[0x23]) ||
               (uVar29 = *(ulonglong *)(*(longlong *)(lVar15 + 0x38) + puStack_108[0x23] * 8),
               uVar29 == 0)) {
              plStack_150 = *(longlong **)(lVar15 + 8);
              iVar30 = *(int *)plStack_150;
              pbVar19 = (byte *)0x0;
LAB_140921b16:
              param_1 = (longlong *)0x0;
              puVar37 = (uint *)0x0;
              param_2 = puStack_160;
              goto LAB_140921b44;
            }
            plStack_150 = *(longlong **)(lVar15 + 8);
            lVar27 = ~uVar29 * 0x30;
            lStack_130 = *(longlong *)(*(longlong *)(lVar15 + 0x18) + 0x10 + lVar27);
            puStack_148 = *(undefined8 **)(*(longlong *)(lVar15 + 0x18) + 0x28 + lVar27);
            iVar30 = *(int *)plStack_150;
            pbVar19 = (byte *)0x0;
          }
          else {
            iVar30 = *(int *)((longlong)plStack_150 + (longlong)pbVar19 * 2 * 4);
            pbVar26 = pbStack_f8 + (longlong)pbVar19;
            if ((char)param_1 != '\x01') goto LAB_140921b16;
          }
          puVar37 = (uint *)((longlong)pbVar19 * 0x30 + lStack_130);
          puStack_160 = (undefined8 *)((longlong)puStack_148 + (longlong)pbVar19 * 4);
          param_1 = (longlong *)0x1;
          param_2 = puStack_160;
        }
LAB_140921b44:
        if (iVar30 == 0) goto LAB_140921d0e;
        pbVar19 = (byte *)(ulonglong)((int)pbVar19 + 1);
        if (puVar37 != (uint *)0x0) {
          if (6 < *pbVar26 - 4) {
            uStack_1c8 = 0x3f8000003f800000;
            fStack_1c0 = 1.0;
            goto LAB_140921cf0;
          }
          fVar46 = *pfStack_170;
          switch((uint)*pbVar26) {
          case 4:
            fStack_1c0 = pfStack_168[1] * fVar10;
            goto code_r0x000140921c21;
          case 5:
            fStack_1c0 = pfStack_168[2] * fVar10 * _DAT_142f95160;
            goto code_r0x000140921c21;
          case 6:
            fVar40 = fVar10;
            if (fVar10 <= fVar46) {
              fVar40 = fVar46;
            }
            fVar46 = fVar46 * fVar12 * fVar10;
            uStack_128 = CONCAT44(fVar46,fVar46);
            fVar46 = fVar44;
            if (fVar40 <= fVar44) {
              fVar46 = fVar40;
            }
            pdb_140df4540(&uStack_1c8,&uStack_128,fVar46);
            break;
          default:
            fStack_1c0 = unaff_XMM10_Da;
            if ((char)uStack_118 == '\0') {
              fStack_1c0 = fVar46;
            }
code_r0x000140921c21:
            uStack_1c8 = CONCAT44(fStack_1c0,fStack_1c0);
            break;
          case 9:
            if ((char)uStack_118 == '\0') {
              fVar40 = (float)pdb_140de8220(uVar41,uVar5,fVar46);
              fVar40 = (fVar40 * fVar11 + fVar44) * fVar10;
              uStack_128 = CONCAT44(fVar40,fVar40);
              fVar40 = fVar10;
              if (fVar10 <= fVar46) {
                fVar40 = fVar46;
              }
              fVar46 = fVar44;
              if (fVar40 <= fVar44) {
                fVar46 = fVar40;
              }
              pdb_140df4540(&uStack_1c8,&uStack_128,fVar46);
            }
            else {
              uStack_128 = CONCAT44(fVar47,fVar47);
              pdb_140df4540(&uStack_1c8,&uStack_128,fVar42);
            }
            break;
          case 10:
            fStack_1c0 = fVar46 * fVar11 * fVar10;
            uStack_1c8 = CONCAT44(fStack_1c0,fStack_1c0);
          }
LAB_140921cf0:
          *(undefined4 *)param_2 = plStack_110._0_4_;
          puVar37[9] = (uint)fStack_1c0;
          *(undefined8 *)(puVar37 + 7) = uStack_1c8;
        }
        goto LAB_1409217f1;
      }
      goto LAB_140921dbb;
    }
    if (uVar29 + 2 < 0x34) {
      puVar32 = (uint *)(0x31 - uVar29);
      puVar37 = (uint *)(&UNK_1430216d2 + uVar29);
      goto LAB_140920b45;
    }
    goto LAB_140921e53;
  }
  goto LAB_140921e33;
LAB_140920f5f:
  if ((char)pbStack_f8 == '\0') {
    return;
  }
  plVar18 = (longlong *)pdb_140e97000(pfVar23);
  if (((char)plVar18[0xd] != '\x01') &&
     (plVar18 = (longlong *)pdb_142d8ec20(plVar18,0), plVar18 == (longlong *)0x0))
  goto LAB_140921e04;
  if (*plVar18 == 0) {
    *plVar18 = -1;
    plStack_100 = plVar18;
    pdb_140e95370(plVar18 + 1,lStack_130);
    goto LAB_140921d4a;
  }
  goto LAB_140921dbb;
LAB_14092153d:
  if (lVar15 == 0) {
    pcVar20 = "";
    if (*pcVar9 != '\0') {
      pcVar20 = pcVar9 + 4;
    }
    uStack_120 = *(undefined4 *)(pcVar20 + 8);
    uStack_128 = *(undefined8 *)pcVar20;
    pdb_140df4940(&uStack_1c8);
    uVar45 = uStack_1bc;
    fVar44 = fStack_1c0;
    uStack_180 = uStack_120;
    uStack_188 = uStack_128;
    uVar41 = (undefined4)uStack_1c8;
    uVar43 = uStack_1c8._4_4_;
    uStack_198 = uStack_1ac;
    uStack_190 = uStack_1a4;
    lVar15 = plVar18[2];
    if ((ulonglong)(*plVar18 - lVar15) < 0x58) {
      pdb_142d7f1b0(plVar18,lVar15,0x58,1,1);
    }
LAB_140921640:
    lVar27 = plVar18[1];
    *(code **)(lVar27 + lVar15) = pdb_14160b100;
    puVar2 = (undefined4 *)(lVar27 + 8 + lVar15);
    *puVar2 = uVar41;
    puVar2[1] = uVar43;
    puVar2[2] = fVar44;
    puVar2[3] = uVar45;
    *(undefined8 *)(lVar27 + 0x18 + lVar15) = uStack_188;
    *(undefined4 *)(lVar27 + 0x20 + lVar15) = uStack_180;
    *(undefined8 *)(lVar27 + 0x24 + lVar15) = uStack_198;
    *(undefined4 *)(lVar27 + 0x2c + lVar15) = uStack_190;
    *(undefined1 *)(lVar27 + 0x38 + lVar15) = 0;
    *(undefined8 *)(lVar27 + 0x48 + lVar15) = uVar34;
    lVar15 = lVar15 + 0x58;
LAB_140921686:
    plVar18[2] = lVar15;
    param_1 = plStack_150;
    plVar25 = plStack_110;
    cVar13 = (char)puStack_108;
  }
  goto LAB_1409210ad;
LAB_140921d0e:
  if (!bVar14) {
    return;
  }
  plVar18 = (longlong *)pdb_140e97000();
  if (((char)plVar18[0xd] != '\x01') &&
     (plVar18 = (longlong *)pdb_142d8ec20(plVar18,0), plVar18 == (longlong *)0x0))
  goto LAB_140921e04;
  if (*plVar18 == 0) {
    *plVar18 = -1;
    plStack_100 = plVar18;
    pdb_140e95370(plVar18 + 1,lStack_1e8);
LAB_140921d4a:
    *plStack_100 = *plStack_100 + 1;
    return;
  }
LAB_140921dbb:
  plVar18 = (longlong *)pdb_142dc8090(&UNK_143326a50);
LAB_140921dc7:
  plVar18 = (longlong *)pdb_142d8ec20(plVar18,0);
  if (plVar18 == (longlong *)0x0) goto LAB_140921e04;
  goto LAB_140920c27;
LAB_140921e04:
  pdb_142dc7890(&UNK_143326860);
LAB_140921e10:
  pdb_142dc8070(&UNK_143020fc0,0x30);
LAB_140921e33:
  pdb_142dc8070(&UNK_1430216d0,0x33,0);
LAB_140921e53:
  pdb_142dc8070(&UNK_1430216d0,0x33);
  pcVar24 = (code *)swi(3);
  (*pcVar24)();
  return;
}

