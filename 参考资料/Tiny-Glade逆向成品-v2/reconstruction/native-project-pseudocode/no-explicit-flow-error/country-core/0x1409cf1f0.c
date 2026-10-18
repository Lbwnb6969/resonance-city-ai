// VA 0x1409cf1f0, PDB extent 1388 bytes
// country_core::systems::collision::intersect_meshes::polyline::merge_segments_into_polylines::closure$0
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/collision/intersect_meshes.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::systems::collision::intersect_meshes::polyline::merge_segments_into_polylines::closure$0
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/collision/intersect_meshes.rs
   Extent: 1388 */

undefined4 pdb_1409cf1f0(longlong *param_1,float *param_2)

{
  char *pcVar1;
  uint uVar2;
  uint uVar3;
  float fVar4;
  int iVar5;
  ulonglong uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  longlong lVar12;
  uint uVar13;
  ushort uVar14;
  longlong lVar15;
  longlong *plVar16;
  int iVar17;
  int iVar18;
  byte bVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  float fVar28;
  undefined8 uStack_d8;
  int iStack_d0;
  int iStack_cc;
  int iStack_c8;
  int iStack_c4;
  longlong *plStack_c0;
  
  fVar28 = *param_2 * _DAT_14302c620;
  fVar20 = (float)pub_142e32b00();
  fVar21 = (float)pub_142e32b00();
  fVar22 = (float)pub_142e32b00();
  fVar4 = _DAT_142e382cc;
  iVar11 = (int)fVar20;
  if (_DAT_142e382cc < fVar20) {
    iVar11 = 0x7fffffff;
  }
  if (NAN(fVar20)) {
    iVar11 = 0;
  }
  iVar9 = (int)fVar21;
  if (_DAT_142e382cc < fVar21) {
    iVar9 = 0x7fffffff;
  }
  if (NAN(fVar21)) {
    iVar9 = 0;
  }
  iVar7 = 0x7fffffff;
  iVar10 = (int)fVar22;
  if (_DAT_142e382cc < fVar22) {
    iVar10 = iVar7;
  }
  if (NAN(fVar22)) {
    iVar10 = 0;
  }
  iStack_cc = iVar11;
  iStack_c8 = iVar9;
  iStack_c4 = iVar10;
  if (param_1[3] != 0) {
    uVar6 = pdb_1417c5210(param_1 + 4,&iStack_cc);
    bVar19 = (byte)(uVar6 >> 0x39);
    auVar23 = ZEXT216(CONCAT11(bVar19,bVar19));
    auVar23 = pshuflw(auVar23,auVar23,0);
    lVar12 = 0;
    do {
      uVar6 = uVar6 & param_1[1];
      pcVar1 = (char *)(*param_1 + uVar6);
      auVar27[0] = -(*pcVar1 == auVar23[0]);
      auVar27[1] = -(pcVar1[1] == auVar23[1]);
      auVar27[2] = -(pcVar1[2] == auVar23[2]);
      auVar27[3] = -(pcVar1[3] == auVar23[3]);
      auVar27[4] = -(pcVar1[4] == auVar23[4]);
      auVar27[5] = -(pcVar1[5] == auVar23[5]);
      auVar27[6] = -(pcVar1[6] == auVar23[6]);
      auVar27[7] = -(pcVar1[7] == auVar23[7]);
      auVar27[8] = -(pcVar1[8] == auVar23[0]);
      auVar27[9] = -(pcVar1[9] == auVar23[1]);
      auVar27[10] = -(pcVar1[10] == auVar23[2]);
      auVar27[0xb] = -(pcVar1[0xb] == auVar23[3]);
      auVar27[0xc] = -(pcVar1[0xc] == auVar23[4]);
      auVar27[0xd] = -(pcVar1[0xd] == auVar23[5]);
      auVar27[0xe] = -(pcVar1[0xe] == auVar23[6]);
      auVar27[0xf] = -(pcVar1[0xf] == auVar23[7]);
      uVar14 = (ushort)(SUB161(auVar27 >> 7,0) & 1) | (ushort)(SUB161(auVar27 >> 0xf,0) & 1) << 1 |
               (ushort)(SUB161(auVar27 >> 0x17,0) & 1) << 2 |
               (ushort)(SUB161(auVar27 >> 0x1f,0) & 1) << 3 |
               (ushort)(SUB161(auVar27 >> 0x27,0) & 1) << 4 |
               (ushort)(SUB161(auVar27 >> 0x2f,0) & 1) << 5 |
               (ushort)(SUB161(auVar27 >> 0x37,0) & 1) << 6 |
               (ushort)(SUB161(auVar27 >> 0x3f,0) & 1) << 7 |
               (ushort)(SUB161(auVar27 >> 0x47,0) & 1) << 8 |
               (ushort)(SUB161(auVar27 >> 0x4f,0) & 1) << 9 |
               (ushort)(SUB161(auVar27 >> 0x57,0) & 1) << 10 |
               (ushort)(SUB161(auVar27 >> 0x5f,0) & 1) << 0xb |
               (ushort)(SUB161(auVar27 >> 0x67,0) & 1) << 0xc |
               (ushort)(SUB161(auVar27 >> 0x6f,0) & 1) << 0xd |
               (ushort)(SUB161(auVar27 >> 0x77,0) & 1) << 0xe | (ushort)(auVar27[0xf] >> 7) << 0xf;
      uVar13 = (uint)uVar14;
      while (uVar14 != 0) {
        uVar2 = 0;
        for (uVar3 = uVar13; (uVar3 & 1) == 0; uVar3 = uVar3 >> 1 | 0x80000000) {
          uVar2 = uVar2 + 1;
        }
        lVar15 = *param_1 + (uVar2 + uVar6 & param_1[1]) * -0x10;
        if (((iVar11 == *(int *)(lVar15 + -0x10)) && (iVar9 == *(int *)(lVar15 + -0xc))) &&
           (iVar10 == *(int *)(lVar15 + -8))) {
LAB_1409cf70e:
          return *(undefined4 *)(lVar15 + -4);
        }
        uVar14 = (ushort)(uVar13 - 1) & (ushort)uVar13;
        uVar13 = CONCAT22((short)(uVar13 - 1 >> 0x10),uVar14);
      }
      auVar25[0] = -(*pcVar1 == -1);
      auVar25[1] = -(pcVar1[1] == -1);
      auVar25[2] = -(pcVar1[2] == -1);
      auVar25[3] = -(pcVar1[3] == -1);
      auVar25[4] = -(pcVar1[4] == -1);
      auVar25[5] = -(pcVar1[5] == -1);
      auVar25[6] = -(pcVar1[6] == -1);
      auVar25[7] = -(pcVar1[7] == -1);
      auVar25[8] = -(pcVar1[8] == -1);
      auVar25[9] = -(pcVar1[9] == -1);
      auVar25[10] = -(pcVar1[10] == -1);
      auVar25[0xb] = -(pcVar1[0xb] == -1);
      auVar25[0xc] = -(pcVar1[0xc] == -1);
      auVar25[0xd] = -(pcVar1[0xd] == -1);
      auVar25[0xe] = -(pcVar1[0xe] == -1);
      auVar25[0xf] = -(pcVar1[0xf] == -1);
      if ((((((((((((((((SUB161(auVar25 >> 7,0) & 1) != 0 || (SUB161(auVar25 >> 0xf,0) & 1) != 0) ||
                      (SUB161(auVar25 >> 0x17,0) & 1) != 0) || (SUB161(auVar25 >> 0x1f,0) & 1) != 0)
                    || (SUB161(auVar25 >> 0x27,0) & 1) != 0) || (SUB161(auVar25 >> 0x2f,0) & 1) != 0
                   ) || (SUB161(auVar25 >> 0x37,0) & 1) != 0) ||
                 (SUB161(auVar25 >> 0x3f,0) & 1) != 0) || (SUB161(auVar25 >> 0x47,0) & 1) != 0) ||
               (SUB161(auVar25 >> 0x4f,0) & 1) != 0) || (SUB161(auVar25 >> 0x57,0) & 1) != 0) ||
             (SUB161(auVar25 >> 0x5f,0) & 1) != 0) || (SUB161(auVar25 >> 0x67,0) & 1) != 0) ||
           (SUB161(auVar25 >> 0x6f,0) & 1) != 0) || (SUB161(auVar25 >> 0x77,0) & 1) != 0) ||
          auVar25[0xf] < '\0') break;
      uVar6 = uVar6 + lVar12 + 0x10;
      lVar12 = lVar12 + 0x10;
    } while( true );
  }
  fVar20 = (float)pub_142e32b00(fVar28 + _DAT_142e3784c);
  fVar21 = (float)pub_142e32b00();
  fVar22 = (float)pub_142e32b00();
  iVar11 = (int)fVar20;
  if (fVar4 < fVar20) {
    iVar11 = iVar7;
  }
  if (NAN(fVar20)) {
    iVar11 = 0;
  }
  iVar9 = (int)fVar21;
  if (fVar4 < fVar21) {
    iVar9 = iVar7;
  }
  if (NAN(fVar21)) {
    iVar9 = 0;
  }
  iVar10 = (int)fVar22;
  if (fVar4 < fVar22) {
    iVar10 = iVar7;
  }
  if (NAN(fVar22)) {
    iVar10 = 0;
  }
  fVar20 = (float)pub_142e32b00();
  fVar21 = (float)pub_142e32b00();
  fVar22 = (float)pub_142e32b00();
  iVar5 = 0x7fffffff;
  iVar7 = (int)fVar20;
  if (fVar4 < fVar20) {
    iVar7 = iVar5;
  }
  if (NAN(fVar20)) {
    iVar7 = 0;
  }
  iVar18 = (int)fVar21;
  if (fVar4 < fVar21) {
    iVar18 = iVar5;
  }
  if (NAN(fVar21)) {
    iVar18 = 0;
  }
  iVar17 = (int)fVar22;
  if (fVar4 < fVar22) {
    iVar17 = iVar5;
  }
  if (NAN(fVar22)) {
    iVar17 = 0;
  }
  if ((iVar10 != iVar17 || (iVar9 != iVar18 || iVar11 != iVar7)) && (iVar10 <= iVar17)) {
    if (iVar9 <= iVar18) {
      iVar5 = iVar9;
      if (iVar11 <= iVar7) {
        plVar16 = param_1 + 4;
        plStack_c0 = plVar16;
LAB_1409cf539:
        iVar5 = iVar11;
        iVar8 = iVar9;
        if (param_1[3] != 0) {
          lVar12 = 1;
          iVar5 = iVar9;
          do {
            iVar8 = iVar11;
            if (lVar12 == 0) {
              do {
                if (iVar7 <= iVar8) break;
                iVar8 = iVar8 + (uint)(iVar8 < iVar7);
              } while (iVar8 <= iVar7);
            }
            else {
              do {
                uStack_d8 = CONCAT44(iVar5,iVar8);
                if (param_1[3] != 0) {
                  iStack_d0 = iVar10;
                  uVar6 = pdb_1417c5210(plVar16,&uStack_d8);
                  bVar19 = (byte)(uVar6 >> 0x39);
                  auVar23 = ZEXT216(CONCAT11(bVar19,bVar19));
                  auVar23 = pshuflw(auVar23,auVar23,0);
                  lVar12 = 0;
                  while( true ) {
                    uVar6 = uVar6 & param_1[1];
                    pcVar1 = (char *)(*param_1 + uVar6);
                    auVar26[0] = -(*pcVar1 == auVar23[0]);
                    auVar26[1] = -(pcVar1[1] == auVar23[1]);
                    auVar26[2] = -(pcVar1[2] == auVar23[2]);
                    auVar26[3] = -(pcVar1[3] == auVar23[3]);
                    auVar26[4] = -(pcVar1[4] == auVar23[4]);
                    auVar26[5] = -(pcVar1[5] == auVar23[5]);
                    auVar26[6] = -(pcVar1[6] == auVar23[6]);
                    auVar26[7] = -(pcVar1[7] == auVar23[7]);
                    auVar26[8] = -(pcVar1[8] == auVar23[0]);
                    auVar26[9] = -(pcVar1[9] == auVar23[1]);
                    auVar26[10] = -(pcVar1[10] == auVar23[2]);
                    auVar26[0xb] = -(pcVar1[0xb] == auVar23[3]);
                    auVar26[0xc] = -(pcVar1[0xc] == auVar23[4]);
                    auVar26[0xd] = -(pcVar1[0xd] == auVar23[5]);
                    auVar26[0xe] = -(pcVar1[0xe] == auVar23[6]);
                    auVar26[0xf] = -(pcVar1[0xf] == auVar23[7]);
                    uVar14 = (ushort)(SUB161(auVar26 >> 7,0) & 1) |
                             (ushort)(SUB161(auVar26 >> 0xf,0) & 1) << 1 |
                             (ushort)(SUB161(auVar26 >> 0x17,0) & 1) << 2 |
                             (ushort)(SUB161(auVar26 >> 0x1f,0) & 1) << 3 |
                             (ushort)(SUB161(auVar26 >> 0x27,0) & 1) << 4 |
                             (ushort)(SUB161(auVar26 >> 0x2f,0) & 1) << 5 |
                             (ushort)(SUB161(auVar26 >> 0x37,0) & 1) << 6 |
                             (ushort)(SUB161(auVar26 >> 0x3f,0) & 1) << 7 |
                             (ushort)(SUB161(auVar26 >> 0x47,0) & 1) << 8 |
                             (ushort)(SUB161(auVar26 >> 0x4f,0) & 1) << 9 |
                             (ushort)(SUB161(auVar26 >> 0x57,0) & 1) << 10 |
                             (ushort)(SUB161(auVar26 >> 0x5f,0) & 1) << 0xb |
                             (ushort)(SUB161(auVar26 >> 0x67,0) & 1) << 0xc |
                             (ushort)(SUB161(auVar26 >> 0x6f,0) & 1) << 0xd |
                             (ushort)(SUB161(auVar26 >> 0x77,0) & 1) << 0xe |
                             (ushort)(auVar26[0xf] >> 7) << 0xf;
                    uVar13 = (uint)uVar14;
                    while (uVar14 != 0) {
                      uVar2 = 0;
                      for (uVar3 = uVar13; (uVar3 & 1) == 0; uVar3 = uVar3 >> 1 | 0x80000000) {
                        uVar2 = uVar2 + 1;
                      }
                      lVar15 = *param_1 + (uVar2 + uVar6 & param_1[1]) * -0x10;
                      if (((iVar8 == *(int *)(lVar15 + -0x10)) && (iVar5 == *(int *)(lVar15 + -0xc))
                          ) && (iVar10 == *(int *)(lVar15 + -8))) goto LAB_1409cf70e;
                      uVar14 = (ushort)(uVar13 - 1) & (ushort)uVar13;
                      uVar13 = CONCAT22((short)(uVar13 - 1 >> 0x10),uVar14);
                    }
                    auVar24[0] = -(*pcVar1 == -1);
                    auVar24[1] = -(pcVar1[1] == -1);
                    auVar24[2] = -(pcVar1[2] == -1);
                    auVar24[3] = -(pcVar1[3] == -1);
                    auVar24[4] = -(pcVar1[4] == -1);
                    auVar24[5] = -(pcVar1[5] == -1);
                    auVar24[6] = -(pcVar1[6] == -1);
                    auVar24[7] = -(pcVar1[7] == -1);
                    auVar24[8] = -(pcVar1[8] == -1);
                    auVar24[9] = -(pcVar1[9] == -1);
                    auVar24[10] = -(pcVar1[10] == -1);
                    auVar24[0xb] = -(pcVar1[0xb] == -1);
                    auVar24[0xc] = -(pcVar1[0xc] == -1);
                    auVar24[0xd] = -(pcVar1[0xd] == -1);
                    auVar24[0xe] = -(pcVar1[0xe] == -1);
                    auVar24[0xf] = -(pcVar1[0xf] == -1);
                    plVar16 = plStack_c0;
                    if ((((((((((((((((SUB161(auVar24 >> 7,0) & 1) != 0 ||
                                     (SUB161(auVar24 >> 0xf,0) & 1) != 0) ||
                                    (SUB161(auVar24 >> 0x17,0) & 1) != 0) ||
                                   (SUB161(auVar24 >> 0x1f,0) & 1) != 0) ||
                                  (SUB161(auVar24 >> 0x27,0) & 1) != 0) ||
                                 (SUB161(auVar24 >> 0x2f,0) & 1) != 0) ||
                                (SUB161(auVar24 >> 0x37,0) & 1) != 0) ||
                               (SUB161(auVar24 >> 0x3f,0) & 1) != 0) ||
                              (SUB161(auVar24 >> 0x47,0) & 1) != 0) ||
                             (SUB161(auVar24 >> 0x4f,0) & 1) != 0) ||
                            (SUB161(auVar24 >> 0x57,0) & 1) != 0) ||
                           (SUB161(auVar24 >> 0x5f,0) & 1) != 0) ||
                          (SUB161(auVar24 >> 0x67,0) & 1) != 0) ||
                         (SUB161(auVar24 >> 0x6f,0) & 1) != 0) ||
                        (SUB161(auVar24 >> 0x77,0) & 1) != 0) || auVar24[0xf] < '\0') break;
                    uVar6 = uVar6 + lVar12 + 0x10;
                    lVar12 = lVar12 + 0x10;
                  }
                }
              } while ((iVar8 < iVar7) && (iVar8 = iVar8 + (uint)(iVar8 < iVar7), iVar8 <= iVar7));
            }
            if ((iVar18 <= iVar5) || (iVar5 = iVar5 + (uint)(iVar5 < iVar18), iVar18 < iVar5))
            goto LAB_1409cf6ec;
            lVar12 = param_1[3];
          } while( true );
        }
LAB_1409cf6c0:
        do {
          if (iVar5 < iVar7) {
            iVar5 = iVar5 + (uint)(iVar5 < iVar7);
            if (iVar5 <= iVar7) goto LAB_1409cf6c0;
          }
          if ((iVar18 <= iVar8) ||
             (iVar8 = iVar8 + (uint)(iVar8 < iVar18), iVar5 = iVar11, iVar18 < iVar8))
          goto LAB_1409cf6ec;
        } while( true );
      }
LAB_1409cf4d0:
      do {
        if (iVar5 < iVar18) {
          iVar5 = iVar5 + (uint)(iVar5 < iVar18);
          if (iVar5 <= iVar18) goto LAB_1409cf4d0;
        }
        if ((iVar17 <= iVar10) ||
           (iVar10 = iVar10 + (uint)(iVar10 < iVar17), iVar5 = iVar9, iVar17 < iVar10))
        goto LAB_1409cf4f6;
      } while( true );
    }
    do {
      if (iVar17 <= iVar10) break;
      iVar10 = iVar10 + (uint)(iVar10 < iVar17);
    } while (iVar10 <= iVar17);
  }
LAB_1409cf4f6:
  lVar12 = param_1[3];
  iStack_d0 = iStack_c4;
  uStack_d8 = CONCAT44(iStack_c8,iStack_cc);
  pdb_1417b95a0(param_1,&uStack_d8,(int)lVar12);
  return (int)lVar12;
LAB_1409cf6ec:
  if ((iVar17 <= iVar10) || (iVar10 = iVar10 + (uint)(iVar10 < iVar17), iVar17 < iVar10))
  goto LAB_1409cf4f6;
  goto LAB_1409cf539;
}

