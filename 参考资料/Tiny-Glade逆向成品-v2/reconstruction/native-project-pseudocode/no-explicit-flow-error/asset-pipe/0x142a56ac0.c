// VA 0x142a56ac0, PDB extent 1332 bytes
// ddsfile::header::Header::read<ref_mut$<ref_mut$<std::io::cursor::Cursor<ref$<slice2$<u8> > > > > >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/asset-pipe/src/lib.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   ddsfile::header::Header::read<ref_mut$<ref_mut$<std::io::cursor::Cursor<ref$<slice2$<u8> > > > >
   >
   Source attribution: /home/h3/code/pouncelight/country-slice-private/crates/asset-pipe/src/lib.rs
   Extent: 1332 */

uint * pdb_142a56ac0(uint *param_1,longlong *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  ulonglong uVar14;
  longlong lVar15;
  code *pcVar16;
  undefined8 uVar17;
  longlong *plVar18;
  byte *pbVar19;
  uint *puVar20;
  ulonglong uVar21;
  ulonglong uVar22;
  longlong *aplStack_110 [6];
  uint uStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  uint uStack_bc;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  
  plVar18 = (longlong *)*param_2;
  uVar21 = plVar18[1];
  uVar14 = plVar18[2];
  uVar22 = uVar14;
  if (uVar21 < uVar14) {
    uVar22 = uVar21;
  }
  if (3 < uVar21 - uVar22) {
    iVar2 = *(int *)(*plVar18 + uVar22);
    plVar18[2] = uVar14 + 4;
    aplStack_110[0] = param_2;
    if (iVar2 != 0x7c) {
      pdb_14007ee60();
      pbVar19 = pub_1406abab0(0x12,1);
      uVar17 = _UNK_1436250c0;
      if (pbVar19 != (byte *)0x0) {
        *(undefined8 *)pbVar19 = _DAT_1436250b8;
        *(undefined8 *)(pbVar19 + 8) = uVar17;
        pbVar19[0x10] = 0x7a;
        pbVar19[0x11] = 0x65;
        param_1[2] = 4;
        param_1[3] = 0;
        param_1[4] = 0x12;
        param_1[5] = 0;
        *(byte **)(param_1 + 6) = pbVar19;
        param_1[8] = 0x12;
        param_1[9] = 0;
        *param_1 = 2;
        return param_1;
      }
      pdb_142dc7e2a(1,0x12);
      pcVar16 = (code *)swi(3);
      puVar20 = (uint *)(*pcVar16)();
      return puVar20;
    }
    plVar18 = (longlong *)*param_2;
    uVar21 = plVar18[1];
    uVar14 = plVar18[2];
    uVar22 = uVar14;
    if (uVar21 < uVar14) {
      uVar22 = uVar21;
    }
    if (3 < uVar21 - uVar22) {
      uVar3 = *(uint *)(*plVar18 + uVar22);
      plVar18[2] = uVar14 + 4;
      plVar18 = (longlong *)*param_2;
      uVar21 = plVar18[1];
      uVar14 = plVar18[2];
      uVar22 = uVar14;
      if (uVar21 < uVar14) {
        uVar22 = uVar21;
      }
      if (3 < uVar21 - uVar22) {
        uVar4 = *(uint *)(*plVar18 + uVar22);
        plVar18[2] = uVar14 + 4;
        plVar18 = (longlong *)*param_2;
        uVar21 = plVar18[1];
        uVar14 = plVar18[2];
        uVar22 = uVar14;
        if (uVar21 < uVar14) {
          uVar22 = uVar21;
        }
        if (3 < uVar21 - uVar22) {
          uVar5 = *(uint *)(*plVar18 + uVar22);
          plVar18[2] = uVar14 + 4;
          plVar18 = (longlong *)*param_2;
          uVar21 = plVar18[1];
          uVar14 = plVar18[2];
          uVar22 = uVar14;
          if (uVar21 < uVar14) {
            uVar22 = uVar21;
          }
          if (3 < uVar21 - uVar22) {
            uVar6 = *(uint *)(*plVar18 + uVar22);
            plVar18[2] = uVar14 + 4;
            plVar18 = (longlong *)*param_2;
            uVar21 = plVar18[1];
            uVar14 = plVar18[2];
            uVar22 = uVar14;
            if (uVar21 < uVar14) {
              uVar22 = uVar21;
            }
            if (3 < uVar21 - uVar22) {
              uVar7 = *(uint *)(*plVar18 + uVar22);
              plVar18[2] = uVar14 + 4;
              plVar18 = (longlong *)*param_2;
              uVar21 = plVar18[1];
              uVar14 = plVar18[2];
              uVar22 = uVar14;
              if (uVar21 < uVar14) {
                uVar22 = uVar21;
              }
              if (3 < uVar21 - uVar22) {
                uVar8 = *(uint *)(*plVar18 + uVar22);
                plVar18[2] = uVar14 + 4;
                param_2 = (longlong *)*param_2;
                uVar21 = param_2[1];
                uVar14 = param_2[2];
                uVar22 = uVar14;
                if (uVar21 < uVar14) {
                  uVar22 = uVar21;
                }
                if (uVar21 - uVar22 < 0x2c) {
                  param_2[2] = uVar21;
                }
                else {
                  lVar15 = *param_2;
                  puVar1 = (undefined4 *)(lVar15 + uVar22);
                  uStack_a8 = *puVar1;
                  uStack_a4 = puVar1[1];
                  uStack_a0 = puVar1[2];
                  uStack_9c = puVar1[3];
                  puVar1 = (undefined4 *)(lVar15 + 0x10 + uVar22);
                  uStack_98 = *puVar1;
                  uStack_94 = puVar1[1];
                  uStack_90 = puVar1[2];
                  uStack_8c = puVar1[3];
                  lVar15 = lVar15 + 0x1c + uVar22;
                  uStack_88 = *(undefined4 *)(lVar15 + 4);
                  uStack_84 = *(undefined4 *)(lVar15 + 8);
                  uStack_80 = *(undefined4 *)(lVar15 + 0xc);
                  param_2[2] = uVar14 + 0x2c;
                  pdb_142baccd0(&uStack_e0,aplStack_110);
                  if (uStack_e0 == 2) {
                    *(ulonglong *)(param_1 + 6) = CONCAT44(uStack_c4,uStack_c8);
                    *(ulonglong *)(param_1 + 8) = CONCAT44(uStack_bc,uStack_c0);
                    *(ulonglong *)(param_1 + 2) = CONCAT44(uStack_d4,uStack_d8);
                    *(ulonglong *)(param_1 + 4) = CONCAT44(uStack_cc,uStack_d0);
                    *param_1 = 2;
                    return param_1;
                  }
                  plVar18 = (longlong *)*aplStack_110[0];
                  uVar21 = plVar18[1];
                  uVar14 = plVar18[2];
                  uVar22 = uVar14;
                  if (uVar21 < uVar14) {
                    uVar22 = uVar21;
                  }
                  if (uVar21 - uVar22 < 4) {
                    plVar18[2] = uVar21;
                  }
                  else {
                    uVar9 = *(uint *)(*plVar18 + uVar22);
                    plVar18[2] = uVar14 + 4;
                    plVar18 = (longlong *)*aplStack_110[0];
                    uVar21 = plVar18[1];
                    uVar14 = plVar18[2];
                    uVar22 = uVar14;
                    if (uVar21 < uVar14) {
                      uVar22 = uVar21;
                    }
                    if (uVar21 - uVar22 < 4) {
                      plVar18[2] = uVar21;
                    }
                    else {
                      uVar10 = *(uint *)(*plVar18 + uVar22);
                      plVar18[2] = uVar14 + 4;
                      plVar18 = (longlong *)*aplStack_110[0];
                      uVar21 = plVar18[1];
                      uVar14 = plVar18[2];
                      uVar22 = uVar14;
                      if (uVar21 < uVar14) {
                        uVar22 = uVar21;
                      }
                      if (uVar21 - uVar22 < 4) {
                        plVar18[2] = uVar21;
                      }
                      else {
                        uVar11 = *(uint *)(*plVar18 + uVar22);
                        plVar18[2] = uVar14 + 4;
                        plVar18 = (longlong *)*aplStack_110[0];
                        uVar21 = plVar18[1];
                        uVar14 = plVar18[2];
                        uVar22 = uVar14;
                        if (uVar21 < uVar14) {
                          uVar22 = uVar21;
                        }
                        if (uVar21 - uVar22 < 4) {
                          plVar18[2] = uVar21;
                        }
                        else {
                          uVar12 = *(uint *)(*plVar18 + uVar22);
                          plVar18[2] = uVar14 + 4;
                          aplStack_110[0] = (longlong *)*aplStack_110[0];
                          uVar21 = aplStack_110[0][1];
                          uVar14 = aplStack_110[0][2];
                          uVar22 = uVar14;
                          if (uVar21 < uVar14) {
                            uVar22 = uVar21;
                          }
                          if (3 < uVar21 - uVar22) {
                            uVar13 = *(uint *)(*aplStack_110[0] + uVar22);
                            aplStack_110[0][2] = uVar14 + 4;
                            *(ulonglong *)(param_1 + 0x21) = CONCAT44(uStack_88,uStack_8c);
                            *(ulonglong *)(param_1 + 0x23) = CONCAT44(uStack_80,uStack_84);
                            *(ulonglong *)(param_1 + 0x1e) = CONCAT44(uStack_94,uStack_98);
                            *(ulonglong *)(param_1 + 0x20) = CONCAT44(uStack_8c,uStack_90);
                            *(ulonglong *)(param_1 + 0x1a) = CONCAT44(uStack_a4,uStack_a8);
                            *(ulonglong *)(param_1 + 0x1c) = CONCAT44(uStack_9c,uStack_a0);
                            param_1[0x11] = uStack_bc;
                            *(ulonglong *)(param_1 + 9) = CONCAT44(uStack_d8,uStack_dc);
                            *(ulonglong *)(param_1 + 0xb) = CONCAT44(uStack_d0,uStack_d4);
                            *(ulonglong *)(param_1 + 0xd) = CONCAT44(uStack_c8,uStack_cc);
                            *(ulonglong *)(param_1 + 0xf) = CONCAT44(uStack_c0,uStack_c4);
                            *(undefined8 *)(param_1 + 0x12) = uStack_b8;
                            *(undefined8 *)(param_1 + 0x14) = uStack_b0;
                            *param_1 = uVar3 >> 3 & 1;
                            param_1[1] = uVar6;
                            param_1[2] = uVar3 >> 0x13 & 1;
                            param_1[3] = uVar6;
                            param_1[4] = uVar3 >> 0x17 & 1;
                            param_1[5] = uVar7;
                            param_1[6] = uVar3 >> 0x11 & 1;
                            param_1[7] = uVar8;
                            param_1[8] = uStack_e0;
                            param_1[0x16] = 0x7c;
                            param_1[0x17] = uVar3 & 0x8a100f;
                            param_1[0x18] = uVar4;
                            param_1[0x19] = uVar5;
                            param_1[0x25] = uVar9 & 0x401008;
                            param_1[0x26] = uVar10 & 0x20fe00;
                            param_1[0x27] = uVar11;
                            param_1[0x28] = uVar12;
                            param_1[0x29] = uVar13;
                            return param_1;
                          }
                          aplStack_110[0][2] = uVar21;
                        }
                      }
                    }
                  }
                }
                goto LAB_142a56afd;
              }
            }
          }
        }
      }
    }
  }
  plVar18[2] = uVar21;
LAB_142a56afd:
  param_1[2] = 1;
  param_1[3] = 0;
  *(undefined **)(param_1 + 4) = &UNK_1436250a0;
  *param_1 = 2;
  return param_1;
}

