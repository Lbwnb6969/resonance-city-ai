// VA 0x140905940, PDB extent 561 bytes
// country_core::resources::world_raster_defs::AllWorldRasterWrite::upload_to_staging
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/world_raster.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Removing unreachable block (ram,0x000140a78ce9) */
/* Matched PDB project procedure:
   country_core::resources::world_raster_defs::AllWorldRasterWrite::upload_to_staging
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/world_raster.rs
   Extent: 561 */

longlong * pdb_140905940(undefined8 *param_1,undefined8 param_2)

{
  byte *pbVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  undefined8 uVar5;
  code *pcVar6;
  char cVar7;
  uint uVar8;
  undefined8 *puVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  ulonglong uVar13;
  longlong *plVar14;
  ulonglong uVar15;
  byte *pbVar16;
  byte *pbVar17;
  undefined *puVar18;
  undefined *puVar19;
  undefined *puVar20;
  byte *pbVar21;
  bool bVar22;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined4 uStack_268;
  undefined4 uStack_264;
  undefined4 uStack_260;
  undefined4 uStack_25c;
  longlong lStack_258;
  byte *pbStack_250;
  byte *pbStack_248;
  longlong lStack_68;
  undefined8 uStack_60;
  longlong *plStack_58;
  byte *pbStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  *(undefined4 *)param_1[2] = *(undefined4 *)((longlong)param_1 + 0x1c);
  uVar5 = *param_1;
  uStack_40 = 0x140905968;
  puVar9 = (undefined8 *)pdb_140bf45b0(param_2,&UNK_14331c878);
  if (puVar9 != (undefined8 *)0x0) {
    uStack_40 = 0x14090597b;
    lVar10 = (**(code **)(puVar9[1] + 0x18))(*puVar9);
    if (lVar10 != 0) {
      uStack_40 = 0x140905996;
      pdb_140a78ae0(uVar5,0,*(undefined8 *)(lVar10 + 8),*(undefined8 *)(lVar10 + 0x10));
      *(undefined4 *)param_1[6] = *(undefined4 *)((longlong)param_1 + 0x3c);
      uVar5 = param_1[4];
      uStack_40 = 0x1409059b2;
      puVar9 = (undefined8 *)pdb_140bf45b0(param_2,&UNK_14331c9a8);
      if (puVar9 != (undefined8 *)0x0) {
        uStack_40 = 0x1409059c5;
        lVar10 = (**(code **)(puVar9[1] + 0x18))(*puVar9);
        if (lVar10 != 0) {
          uStack_40 = 0x1409059e0;
          pdb_140a78ae0(uVar5,0,*(undefined8 *)(lVar10 + 8),*(undefined8 *)(lVar10 + 0x10));
          *(undefined4 *)param_1[10] = *(undefined4 *)((longlong)param_1 + 0x5c);
          uVar5 = param_1[8];
          uStack_40 = 0x1409059fc;
          puVar9 = (undefined8 *)pdb_140bf45b0(param_2,&UNK_14331c8b0);
          if (puVar9 != (undefined8 *)0x0) {
            uStack_40 = 0x140905a0f;
            lVar10 = (**(code **)(puVar9[1] + 0x18))(*puVar9);
            if (lVar10 != 0) {
              uStack_40 = 0x140905a2a;
              pdb_140a78ae0(uVar5,0,*(undefined8 *)(lVar10 + 8),*(undefined8 *)(lVar10 + 0x10));
              *(undefined4 *)param_1[0xe] = *(undefined4 *)((longlong)param_1 + 0x7c);
              uVar5 = param_1[0xc];
              uStack_40 = 0x140905a46;
              puVar9 = (undefined8 *)pdb_140bf45b0(param_2,&UNK_14331c858);
              if (puVar9 != (undefined8 *)0x0) {
                uStack_40 = 0x140905a59;
                lVar10 = (**(code **)(puVar9[1] + 0x18))(*puVar9);
                if (lVar10 != 0) {
                  uStack_40 = 0x140905a74;
                  pdb_140a78ae0(uVar5,0,*(undefined8 *)(lVar10 + 8),*(undefined8 *)(lVar10 + 0x10));
                  *(undefined4 *)param_1[0x12] = *(undefined4 *)((longlong)param_1 + 0x9c);
                  uVar5 = param_1[0x10];
                  uStack_40 = 0x140905a99;
                  puVar9 = (undefined8 *)pdb_140bf45b0(param_2,&UNK_14331c900);
                  if (puVar9 != (undefined8 *)0x0) {
                    uStack_40 = 0x140905aac;
                    lVar10 = (**(code **)(puVar9[1] + 0x18))(*puVar9);
                    if (lVar10 != 0) {
                      uStack_40 = 0x140905ac7;
                      pdb_140a78ae0(uVar5,0,*(undefined8 *)(lVar10 + 8),
                                    *(undefined8 *)(lVar10 + 0x10));
                      *(undefined4 *)param_1[0x16] = *(undefined4 *)((longlong)param_1 + 0xbc);
                      uVar5 = param_1[0x14];
                      uStack_40 = 0x140905aec;
                      puVar9 = (undefined8 *)pdb_140bf45b0(param_2,&UNK_14331ca50);
                      if (puVar9 != (undefined8 *)0x0) {
                        uStack_40 = 0x140905afb;
                        lVar10 = (**(code **)(puVar9[1] + 0x18))(*puVar9);
                        if (lVar10 != 0) {
                          uStack_40 = 0x140905b12;
                          pdb_140a78ae0(uVar5,0,*(undefined8 *)(lVar10 + 8),
                                        *(undefined8 *)(lVar10 + 0x10));
                          *(undefined4 *)param_1[0x1a] = *(undefined4 *)((longlong)param_1 + 0xdc);
                          lVar10 = param_1[0x18];
                          uStack_40 = 0x140905b37;
                          puVar9 = (undefined8 *)pdb_140bf45b0(param_2);
                          if (puVar9 != (undefined8 *)0x0) {
                            uStack_40 = 0x140905b46;
                            lVar11 = (**(code **)(puVar9[1] + 0x18))(*puVar9);
                            if (lVar11 != 0) {
                              pbVar16 = *(byte **)(lVar11 + 8);
                              pbVar21 = *(byte **)(lVar11 + 0x10);
                              uStack_48 = 0xfffffffffffffffe;
                              lVar11 = 0;
                              if (*(char *)(lVar10 + 0x299) != '\0') {
                                pub_142e32780(pbVar16,0,pbVar21);
                                *(undefined1 *)(lVar10 + 0x299) = 0;
                              }
                              *(undefined1 *)(lVar10 + 0x298) = 0;
                              cVar7 = pdb_140e94b40();
                              if (cVar7 == '\0') {
                                lStack_68 = 0;
                              }
                              else {
                                puVar19 = &UNK_1430423bf;
                                pbVar17 = (byte *)0x82;
                                uVar15 = 0x82;
                                lVar12 = pdb_140a7a9e0(&UNK_1430423bf);
                                if (lVar12 == 1) {
                                  if (0x82 < uVar15) {
LAB_140a78eb7:
                                    pdb_142dc8070(&UNK_1430423bf,0x82,0);
LAB_140a78ed7:
                                    pdb_142dc8070(&UNK_1430423bf,0x82);
                                    pcVar6 = (code *)swi(3);
                                    plVar14 = (longlong *)(*pcVar6)();
                                    return plVar14;
                                  }
                                  puVar19 = &UNK_1430423bf;
                                  uVar13 = pdb_140a7a9e0(&UNK_1430423bf);
                                  if ((uVar13 & 1) != 0) {
                                    if (0x82 < uVar15 + 2) goto LAB_140a78ed7;
                                    pbVar17 = (byte *)(0x80 - uVar15);
                                    puVar19 = &UNK_1430423c1 + uVar15;
                                  }
                                }
                                puVar18 = &UNK_1430420e1;
                                puVar20 = &UNK_1430420b0;
                                do {
                                  bVar2 = puVar18[-1];
                                  uVar8 = (uint)(char)bVar2;
                                  pbStack_50 = pbVar21;
                                  if ((char)bVar2 < '\0') {
                                    bVar3 = puVar18[-2];
                                    if ((char)bVar3 < -0x40) {
                                      bVar4 = puVar18[-3];
                                      if ((char)bVar4 < -0x40) {
                                        pbVar1 = puVar18 + -4;
                                        puVar18 = puVar18 + -4;
                                        uVar8 = bVar4 & 0x3f | (*pbVar1 & 7) << 6;
                                      }
                                      else {
                                        puVar18 = puVar18 + -3;
                                        uVar8 = bVar4 & 0xf;
                                      }
                                      uVar8 = bVar3 & 0x3f | uVar8 << 6;
                                    }
                                    else {
                                      puVar18 = puVar18 + -2;
                                      uVar8 = bVar3 & 0x1f;
                                    }
                                    uVar8 = (uint)(bVar2 & 0x3f) | uVar8 << 6;
                                    if (uVar8 != 0x5c) goto LAB_140a78c34;
LAB_140a78c4d:
                                    puVar20 = puVar18 + -0x1430420af;
                                    if ((undefined *)0x31 < puVar20) {
                                      pdb_142dc8070(&UNK_1430420b0,0x31,puVar20,0x31,&UNK_1430425b0)
                                      ;
                                      goto LAB_140a78eb7;
                                    }
                                    lVar12 = 0x31 - (longlong)puVar20;
                                    puVar20 = puVar18 + 1;
                                    goto LAB_140a78c70;
                                  }
                                  puVar18 = puVar18 + -1;
                                  if (uVar8 == 0x5c) goto LAB_140a78c4d;
LAB_140a78c34:
                                  if (uVar8 == 0x2f) goto LAB_140a78c4d;
                                } while (puVar18 != &UNK_1430420b0);
                                lVar12 = 0x31;
LAB_140a78c70:
                                plVar14 = (longlong *)pdb_140e97000();
                                if (((char)plVar14[0xd] != '\x01') &&
                                   (plVar14 = (longlong *)pdb_142d8ec20(plVar14,0),
                                   plVar14 == (longlong *)0x0)) goto LAB_140a78e63;
                                if (*plVar14 != 0) goto LAB_140a78e33;
                                *plVar14 = -1;
                                plStack_58 = plVar14;
                                uStack_60 = pdb_140e94f10(plVar14 + 1,puVar19,pbVar17,puVar20,lVar12
                                                          ,1,0);
                                *plStack_58 = *plStack_58 + 1;
                                lStack_68 = 1;
                                pbVar21 = pbStack_50;
                              }
                              uStack_270 = *(undefined8 *)(lVar10 + 0x10);
                              uStack_278 = *(undefined8 *)(lVar10 + 8);
                              uStack_268 = *(undefined4 *)(lVar10 + 0x50);
                              uStack_264 = *(undefined4 *)(lVar10 + 0x54);
                              uStack_260 = *(undefined4 *)(lVar10 + 0x58);
                              uStack_25c = *(undefined4 *)(lVar10 + 0x5c);
                              lVar11 = lVar10 + 0x98;
                              lStack_258 = lVar10 + 0x30;
                              pbStack_250 = pbVar16;
                              pbStack_248 = pbVar21;
                              pdb_140a84210(lVar11,&uStack_278);
                              if (*(longlong *)(lVar10 + 0x60) < 0) {
                                pbVar17 = *(byte **)(lVar10 + 0x68);
                                pbVar16 = pbVar17 + 0x10;
                                LOCK();
                                bVar22 = pbVar17[0x10] == 0;
                                if (bVar22) {
                                  pbVar17[0x10] = 1;
                                }
                                UNLOCK();
                                if (!bVar22) goto LAB_140a78e70;
                                goto LAB_140a78d80;
                              }
                              pbVar17 = (byte *)(lVar10 + 0x60);
                              pub_142e32760(&uStack_278,lVar11,0x200);
                              plVar14 = (longlong *)pdb_1409c5460(pbVar17,&uStack_278);
                              do {
                                pbVar16 = (byte *)&uStack_278;
                                *(undefined1 *)(lVar10 + 0x29a) = 1;
                                if (lStack_68 == 0) {
                                  return plVar14;
                                }
                                plVar14 = (longlong *)pdb_140e97000();
                                if ((char)plVar14[0xd] != '\x01') goto LAB_140a78e3f;
                                do {
                                  if (*plVar14 == 0) {
                                    *plVar14 = -1;
                                    pbStack_50 = (byte *)plVar14;
                                    pdb_140e95370(plVar14 + 1,uStack_60);
                                    *(longlong *)pbStack_50 = *(longlong *)pbStack_50 + 1;
                                    return (longlong *)pbStack_50;
                                  }
LAB_140a78e33:
                                  plVar14 = (longlong *)pdb_142dc8090(&UNK_143326a50);
LAB_140a78e3f:
                                  plVar14 = (longlong *)pdb_142d8ec20(plVar14,0);
                                } while (plVar14 != (longlong *)0x0);
LAB_140a78e63:
                                pdb_142dc7890(&UNK_143326860);
LAB_140a78e70:
                                pdb_142dbd1a0(pbVar16);
LAB_140a78d80:
                                pdb_140e9a150(pbVar16);
                                pbStack_50 = pbVar16;
                                pub_142e32760(&uStack_278,lVar11,0x200);
                                pdb_1409c5460(pbVar17 + 0x18);
                                pbVar17 = pbStack_50;
                                pdb_140e9a350();
                                plVar14 = (longlong *)0x1;
                                LOCK();
                                bVar2 = *pbVar17;
                                if (bVar2 == 1) {
                                  *pbVar17 = 0;
                                }
                                else {
                                  plVar14 = (longlong *)(ulonglong)bVar2;
                                }
                                UNLOCK();
                                if (bVar2 != 1) {
                                  plVar14 = (longlong *)pdb_142dbcef0(pbVar17);
                                }
                              } while( true );
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  uStack_40 = 0x140905b70;
  pdb_142dc8150(&UNK_14301eac8);
}

