// VA 0x141643400, PDB extent 2598 bytes
// tg_mods::overlay::read_json_config<ref$<std::path::Path> >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tg-mods/src/overlay.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x000141643b15) overlaps instruction at (ram,0x000141643b13)
    */
/* Matched PDB project procedure: tg_mods::overlay::read_json_config<ref$<std::path::Path> >
   Source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tg-mods/src/overlay.rs
   Extent: 2598 */

int * pdb_141643400(int *param_1,undefined8 param_2,undefined8 param_3)

{
  ushort *puVar1;
  byte bVar2;
  ushort uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined8 uVar11;
  char cVar12;
  int iVar13;
  byte *pbVar14;
  byte *pbVar15;
  longlong lVar16;
  ulonglong uVar17;
  undefined *puVar18;
  byte *pbVar19;
  undefined8 *puVar20;
  ulonglong uVar21;
  byte *pbVar22;
  longlong lVar23;
  longlong *plVar24;
  longlong *plVar26;
  longlong *plVar27;
  longlong lVar28;
  byte *pbVar29;
  byte *pbVar30;
  byte bVar31;
  longlong lVar32;
  byte *pbVar33;
  longlong lVar34;
  bool bVar35;
  longlong alStack_198 [7];
  undefined1 auStack_160 [8];
  undefined8 uStack_158;
  undefined8 uStack_150;
  char cStack_130;
  undefined4 uStack_12f;
  undefined3 uStack_12b;
  undefined8 uStack_128;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  int *piStack_100;
  undefined8 uStack_f8;
  byte *pbStack_f0;
  byte *pbStack_e8;
  longlong lStack_e0;
  uint uStack_d4;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 uStack_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  byte *pbStack_a0;
  ulonglong uStack_98;
  char cStack_88;
  undefined7 uStack_87;
  byte *pbStack_80;
  byte *pbStack_78;
  longlong lStack_70;
  byte *pbStack_60;
  ulonglong uStack_58;
  undefined8 uStack_48;
  byte bVar3;
  longlong *plVar25;
  
  plVar26 = alStack_198;
  plVar27 = (longlong *)&uStack_118;
  uStack_48 = 0xfffffffffffffffe;
  pdb_140d929f0(auStack_160);
  uStack_d0 = uStack_158;
  pdb_140f55d10(&cStack_88,uStack_158,uStack_150);
  pdb_141706360(&uStack_c0,&cStack_88,auStack_160);
  uStack_98 = CONCAT44(uStack_bc,uStack_c0);
  if (SBORROW8(0,uStack_98)) {
    *(undefined8 *)(param_1 + 2) = uStack_b8;
    *(undefined1 *)param_1 = 6;
    goto LAB_1416434e1;
  }
  uStack_c8 = uStack_b8;
  pdb_14164f410(&cStack_88,uStack_b8,CONCAT44(uStack_ac,uStack_b0));
  pdb_141707040(&uStack_c0,&cStack_88,auStack_160);
  if ((char)uStack_c0 == '\x06') {
    *(undefined8 *)(param_1 + 2) = uStack_b8;
    *(undefined1 *)param_1 = 6;
    uVar21 = uStack_98;
    plVar26 = alStack_198;
  }
  else {
    uStack_12f = CONCAT13((undefined1)uStack_bc,uStack_c0._1_3_);
    uStack_12b = (undefined3)((uint)uStack_bc >> 8);
    uStack_120 = uStack_b0;
    uStack_11c = uStack_ac;
    uStack_118 = uStack_a8;
    uStack_114 = uStack_a4;
    cStack_130 = (char)uStack_c0;
    uStack_128 = uStack_b8;
    cVar12 = pdb_140d8af50(uStack_d0,uStack_150);
    plVar26 = alStack_198;
    if (cVar12 != '\0') {
      pdb_140f55d10(&cStack_88,param_2,param_3);
      uStack_58 = CONCAT71(uStack_87,cStack_88);
      if (SBORROW8(0,uStack_58)) {
        pdb_1404b38e0(&pbStack_80);
        plVar26 = alStack_198;
      }
      else {
        pbStack_a0 = pbStack_80;
        pbVar30 = pbStack_78;
        pdb_14164f410(&cStack_88);
        if (cStack_88 == '\x06') {
          uStack_f8 = CONCAT71(uStack_f8._1_7_,6);
          pbStack_60 = pbStack_80;
          if (*(longlong *)pbStack_80 == 1) {
            pdb_1404b38e0(pbStack_80 + 8);
          }
          else if ((*(longlong *)pbStack_80 == 0) && (*(ulonglong *)(pbStack_80 + 0x10) != 0)) {
            pub_1406abac0(*(byte **)(pbStack_80 + 8),*(ulonglong *)(pbStack_80 + 0x10),1);
          }
          pbVar30 = (byte *)0x8;
          pub_1406abac0(pbStack_60,0x28,8);
        }
        else {
          uStack_f8 = CONCAT71(uStack_87,cStack_88);
          pbStack_e8 = pbStack_78;
          lStack_e0 = lStack_70;
          pbStack_f0 = pbStack_80;
        }
        if (uStack_58 != 0) {
          pbVar30 = (byte *)0x1;
          pub_1406abac0(pbStack_a0,uStack_58,1);
        }
        plVar26 = alStack_198;
        if ((byte)uStack_f8 != 6) {
          uStack_d4 = (uint)(byte)uStack_f8;
          plVar26 = alStack_198;
          if (((byte)uStack_f8 == 5) && (plVar26 = alStack_198, cStack_130 == '\x05')) {
            bVar35 = pbStack_f0 != (byte *)0x0;
            lVar32 = 0;
            if (bVar35) {
              lVar32 = lStack_e0;
            }
            piStack_100 = param_1;
            pbVar33 = (byte *)0x0;
            pbVar15 = pbStack_f0;
            pbVar29 = pbStack_e8;
            plVar26 = alStack_198;
            while (lVar32 != 0) {
              if (!bVar35) {
                    /* WARNING: Subroutine does not return */
                plVar26[-1] = 0x141643b92;
                pdb_142dc8150(&UNK_143359188);
              }
              if (pbVar33 == (byte *)0x0) {
                pbVar33 = pbVar15;
                if (pbVar29 != (byte *)0x0) {
                  pbVar14 = pbVar29;
                  if (((ulonglong)pbVar29 & 7) != 0) {
                    uVar21 = 0;
                    do {
                      pbVar15 = *(byte **)(pbVar15 + 0x278);
                      uVar21 = uVar21 + 1;
                    } while (((ulonglong)pbVar29 & 7) != uVar21);
                    pbVar14 = pbVar29 + -uVar21;
                  }
                  pbVar33 = pbVar15;
                  if ((byte *)0x7 < pbVar29) {
                    do {
                      pbVar15 = *(byte **)(*(longlong *)
                                            (*(longlong *)
                                              (*(longlong *)
                                                (*(longlong *)
                                                  (*(longlong *)
                                                    (*(longlong *)
                                                      (*(longlong *)(pbVar15 + 0x278) + 0x278) +
                                                    0x278) + 0x278) + 0x278) + 0x278) + 0x278) +
                                          0x278);
                      pbVar14 = pbVar14 + -8;
                      pbVar33 = pbVar15;
                    } while (pbVar14 != (byte *)0x0);
                  }
                }
                pbVar29 = (byte *)0x0;
                pbVar15 = (byte *)0x0;
                if (*(short *)(pbVar33 + 0x272) == 0) goto LAB_141643780;
              }
              else if ((byte *)(ulonglong)*(ushort *)(pbVar33 + 0x272) <= pbVar29) {
LAB_141643780:
                do {
                  pbVar14 = *(byte **)(pbVar33 + 0x160);
                  if (pbVar14 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
                    plVar26[-1] = 0x141643b83;
                    pdb_142dc8150(&UNK_143359c48);
                  }
                  pbVar15 = pbVar15 + 1;
                  puVar1 = (ushort *)(pbVar33 + 0x270);
                  pbVar29 = (byte *)(ulonglong)*puVar1;
                  pbVar33 = pbVar14;
                } while (*(ushort *)(pbVar14 + 0x272) <= *puVar1);
              }
              pbVar14 = pbVar33;
              if (pbVar15 == (byte *)0x0) {
                plVar27[0x11] = (longlong)(pbVar29 + 1);
              }
              else {
                pbVar19 = pbVar33 + (longlong)pbVar29 * 8 + 0x280;
                pbVar22 = pbVar15;
                if ((byte *)((ulonglong)pbVar15 & 7) != (byte *)0x0) {
                  pbVar30 = (byte *)0x0;
                  do {
                    pbVar14 = *(byte **)pbVar19;
                    pbVar19 = pbVar14 + 0x278;
                    pbVar30 = pbVar30 + 1;
                  } while ((byte *)((ulonglong)pbVar15 & 7) != pbVar30);
                  pbVar22 = pbVar15 + -(longlong)pbVar30;
                }
                if ((byte *)0x7 < pbVar15) {
                  do {
                    pbVar14 = *(byte **)(*(longlong *)
                                          (*(longlong *)
                                            (*(longlong *)
                                              (*(longlong *)
                                                (*(longlong *)
                                                  (*(longlong *)(*(longlong *)pbVar19 + 0x278) +
                                                  0x278) + 0x278) + 0x278) + 0x278) + 0x278) + 0x278
                                        );
                    pbVar19 = pbVar14 + 0x278;
                    pbVar22 = pbVar22 + -8;
                  } while (pbVar22 != (byte *)0x0);
                }
                plVar27[0x11] = 0;
              }
              lVar32 = lVar32 + -1;
              plVar27[2] = lVar32;
              plVar27[-4] = (longlong)pbVar29;
              plVar27[1] = (longlong)(pbVar33 + (longlong)pbVar29 * 0x18 + 0x168);
              lVar16 = plVar27[-2];
              if (lVar16 != 0) {
                plVar27[0x17] = plVar27[-1];
                plVar27[0x18] = *(undefined8 *)(plVar27[1] + 8);
                pbVar29 = *(byte **)(plVar27[1] + 0x10);
                do {
                  plVar27[0xf] = lVar16;
                  uVar4 = *(ushort *)(lVar16 + 0x272);
                  plVar27[-5] = (ulonglong)uVar4;
                  lVar23 = (ulonglong)((uint)uVar4 * 8) * 3;
                  lVar34 = -1;
                  lVar16 = lVar16 + 0x168;
                  do {
                    if (lVar23 == 0) {
                      lVar34 = plVar27[-5];
                      goto LAB_141643924;
                    }
                    pbVar15 = *(byte **)(lVar16 + 0x10);
                    pbVar30 = pbVar15;
                    if (pbVar29 < pbVar15) {
                      pbVar30 = pbVar29;
                    }
                    uVar5 = plVar27[0x18];
                    plVar26[-1] = 0x1416438e7;
                    iVar13 = pub_142e32750(uVar5);
                    lVar28 = (longlong)pbVar29 - (longlong)pbVar15;
                    if (iVar13 != 0) {
                      lVar28 = (longlong)iVar13;
                    }
                    lVar34 = lVar34 + 1;
                    lVar23 = lVar23 + -0x18;
                    lVar16 = lVar16 + 0x18;
                  } while ((char)((0 < lVar28) - (lVar28 < 0)) == '\x01');
                  if (0 < lVar28 == lVar28 < 0) {
                    param_1 = (int *)plVar27[3];
                    lVar32 = plVar27[2];
                    pbVar29 = (byte *)plVar27[0x11];
                    goto joined_r0x0001416436a4;
                  }
LAB_141643924:
                  if (plVar27[0x17] == 0) break;
                  plVar27[0x17] = plVar27[0x17] + -1;
                  lVar16 = *(longlong *)(plVar27[0xf] + 0x278 + lVar34 * 8);
                } while( true );
              }
              bVar31 = (byte)lVar32;
              uVar21 = plVar27[1];
              plVar26[-1] = 0x141643956;
              pdb_140f60be0(plVar27 + -0xc);
              param_1 = (int *)plVar27[3];
              pbVar29 = (byte *)plVar27[0x11];
              pbVar33 = pbVar33 + plVar27[-4] * 0x20;
              uVar17 = (ulonglong)*(int *)(&UNK_1433213c8 + (ulonglong)*pbVar33 * 4);
              puVar18 = &UNK_1433213c8 + uVar17;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
              switch(*pbVar33) {
              case 0:
                *(undefined1 *)(plVar27 + 0x12) = 0;
                break;
              case 1:
              case 2:
                uVar7 = *(undefined4 *)pbVar33;
                uVar8 = *(undefined4 *)(pbVar33 + 4);
                uVar9 = *(undefined4 *)(pbVar33 + 8);
                uVar10 = *(undefined4 *)(pbVar33 + 0xc);
                uVar5 = *(undefined8 *)(pbVar33 + 0x18);
                plVar27[0x14] = *(undefined8 *)(pbVar33 + 0x10);
                plVar27[0x15] = uVar5;
                *(undefined4 *)(plVar27 + 0x12) = uVar7;
                *(undefined4 *)((longlong)plVar27 + 0x94) = uVar8;
                *(undefined4 *)(plVar27 + 0x13) = uVar9;
                *(undefined4 *)((longlong)plVar27 + 0x9c) = uVar10;
                break;
              case 3:
                *(undefined1 *)((longlong)plVar27 + 0xcf) = 1;
                plVar26[-1] = 0x1416439f9;
                pdb_140f60be0(plVar27 + 0x13,pbVar33 + 8);
                *(undefined1 *)(plVar27 + 0x12) = 3;
                break;
              case 4:
                *(undefined1 *)((longlong)plVar27 + 0xcf) = 1;
                plVar26[-1] = 0x1416439cc;
                pdb_1415e5d30(plVar27 + 0x13,pbVar33 + 8);
                *(undefined1 *)(plVar27 + 0x12) = 4;
                break;
              case 5:
                if (*(longlong *)(pbVar33 + 0x18) == 0) {
                  plVar27[0x13] = 0;
                  plVar27[0x15] = 0;
                }
                else {
                  lVar32 = *(longlong *)(pbVar33 + 8);
                  if (lVar32 == 0) {
                    *(undefined1 *)((longlong)plVar27 + 0xcf) = 1;
                    /* WARNING: Subroutine does not return */
                    plVar26[-1] = 0x141643b74;
                    pdb_142dc8150(&UNK_143359d48);
                  }
                  uVar5 = *(undefined8 *)(pbVar33 + 0x10);
                  *(undefined1 *)((longlong)plVar27 + 0xcf) = 1;
                  plVar26[-1] = 0x141643a31;
                  pdb_14192d190(plVar27 + 0x13,lVar32,uVar5);
                }
                *(undefined1 *)(plVar27 + 0x12) = 5;
                break;
              default:
code_r0x000141643ac8:
                pbVar15 = (byte *)plVar27[0x18];
                goto code_r0x000141643acf;
              case 9:
                pbVar30 = (byte *)*plVar26;
                plVar26 = plVar26 + 1;
                goto code_r0x000141643a75;
              case 10:
                plVar24 = plVar26 + -1;
                plVar25 = plVar26 + -1;
                plVar26[-1] = (longlong)plVar27;
                cVar12 = '\a';
                do {
                  plVar27 = plVar27 + -1;
                  plVar24 = plVar24 + -1;
                  *plVar24 = *plVar27;
                  cVar12 = cVar12 + -1;
                } while ('\0' < cVar12);
                plVar26[-9] = (longlong)(plVar26 + -1);
                uVar21 = (ulonglong)*(uint *)(plVar26 + 0xb);
                plVar26 = (longlong *)((longlong)plVar26 + -0xe147);
                plVar27 = plVar25;
                goto code_r0x000141643a8f;
              case 0xb:
                goto code_r0x000141643abe;
              case 0xd:
              case 0xe:
              case 0xf:
              case 0x13:
                puVar20 = (undefined8 *)(ulonglong)((int)plVar27 + 0x60);
                goto code_r0x000141643ada;
              case 0x10:
                goto code_r0x000141643afb;
              case 0x11:
                bVar2 = *pbVar29;
                bVar3 = *pbVar29;
                *pbVar29 = bVar3 + bVar31 + (0xfffffffebccdec37 < uVar17);
                *param_1 = *param_1 + (int)puVar18 +
                           (uint)(CARRY1(bVar2,bVar31) ||
                                 CARRY1(bVar3 + bVar31,0xfffffffebccdec37 < uVar17));
                goto LAB_141643b0b;
              case 0x12:
                goto code_r0x000141643b21;
              case 0x14:
              case 0x15:
                    /* WARNING: Bad instruction - Truncating control flow here */
                halt_baddata();
              }
              *(undefined1 *)((longlong)plVar27 + 0xcf) = 0;
              pbVar30 = (byte *)(plVar27 + -0xc);
              plVar26[-1] = 0x141643a70;
              pdb_14192b260(plVar27 + 0xb,plVar27 + -2,pbVar30,plVar27 + 0x12);
              puVar18 = (undefined *)(ulonglong)*(byte *)(plVar27 + 0xb);
code_r0x000141643a75:
              switch(puVar18) {
              case (undefined *)0x0:
              case (undefined *)0x1:
              case (undefined *)0x2:
              case (undefined *)0x6:
                break;
              case (undefined *)0x3:
                uVar21 = plVar27[0xc];
code_r0x000141643a8f:
                if (uVar21 != 0) {
                  pbVar15 = (byte *)plVar27[0xd];
                  pbVar30 = (byte *)0x1;
code_r0x000141643acf:
                  *(undefined8 *)((longlong)plVar26 + -8) = 0x141643ad4;
                  pub_1406abac0(pbVar15,uVar21,(ulonglong)pbVar30);
                }
                break;
              case (undefined *)0x4:
                uVar5 = plVar27[0xd];
                uVar6 = plVar27[0xe];
                plVar27[0x18] = uVar5;
                plVar26[-1] = 0x141643ab4;
                pdb_14098ae50(uVar5,uVar6);
                uVar21 = plVar27[0xc];
                if (uVar21 != 0) {
code_r0x000141643abe:
                  uVar21 = uVar21 << 5;
                  pbVar30 = (byte *)0x8;
                  goto code_r0x000141643ac8;
                }
                break;
              default:
                puVar20 = plVar27 + 0xc;
code_r0x000141643ada:
                plVar26[-1] = 0x141643adf;
                pdb_1409a45e0(puVar20);
              }
              lVar32 = plVar27[2];
joined_r0x0001416436a4:
              bVar35 = true;
              pbVar15 = (byte *)0x0;
              pbVar33 = pbVar14;
            }
          }
          if (*(uint *)((longlong)plVar27 + 0x44) < 7) {
            puVar18 = (undefined *)(ulonglong)*(uint *)((longlong)plVar27 + 0x44);
code_r0x000141643afb:
            switch(&UNK_1433213fc + *(int *)(&UNK_1433213fc + (longlong)puVar18 * 4)) {
            case (undefined *)0x141643b2f:
              uVar21 = plVar27[5];
              if (uVar21 != 0) {
                pbVar30 = (byte *)plVar27[6];
                plVar26[-1] = 0x141643b47;
                pub_1406abac0(pbVar30,uVar21,1);
              }
              break;
            case (undefined *)0x141643b49:
              plVar26[-1] = 0x141643b52;
              pdb_14098c050(plVar27 + 5);
              break;
            case (undefined *)0x141643b55:
              goto LAB_141643b55;
            }
          }
          else {
LAB_141643b55:
            *(undefined8 *)((longlong)plVar26 + -8) = 0x141643b5e;
            pdb_1409a45e0(plVar27 + 5);
          }
        }
      }
    }
LAB_141643b0b:
    uVar5 = plVar27[-3];
    uVar6 = plVar27[-2];
    uVar11 = *plVar27;
    *(longlong *)(param_1 + 4) = plVar27[-1];
    *(undefined8 *)(param_1 + 6) = uVar11;
    *(undefined8 *)param_1 = uVar5;
    *(undefined8 *)(param_1 + 2) = uVar6;
    uVar21 = plVar27[0x10];
code_r0x000141643b21:
  }
  if (uVar21 != 0) {
    pbVar30 = (byte *)plVar27[10];
    *(undefined8 *)((longlong)plVar26 + -8) = 0x1416434e1;
    pub_1406abac0(pbVar30,uVar21,1);
  }
LAB_1416434e1:
  uVar21 = plVar27[-9];
  if (uVar21 != 0) {
    pbVar30 = (byte *)plVar27[9];
    *(undefined8 *)((longlong)plVar26 + -8) = 0x1416434f9;
    pub_1406abac0(pbVar30,uVar21,1);
  }
  return param_1;
}

