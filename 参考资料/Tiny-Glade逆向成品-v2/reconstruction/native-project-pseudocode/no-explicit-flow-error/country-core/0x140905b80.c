// VA 0x140905b80, PDB extent 1555 bytes
// country_core::resources::world_raster_defs::AllWorldRasterWrite::would_write_succeed
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/world_raster.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::resources::world_raster_defs::AllWorldRasterWrite::would_write_succeed
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/world_raster.rs
   Extent: 1555 */

undefined8 pdb_140905b80(longlong *param_1,longlong *param_2,longlong param_3)

{
  longlong lVar1;
  char *pcVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined *puVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  longlong lStack_60;
  longlong lStack_58;
  longlong *plStack_50;
  code *pcStack_48;
  longlong *plStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  code *pcStack_28;
  undefined1 auStack_20 [24];
  
  if (param_3 == 0) {
    return 0;
  }
  if ((param_2[1] == 10) &&
     ((short)((longlong *)*param_2)[1] == 0x7265 && *(longlong *)*param_2 == 0x7473615268746150)) {
    if (!SBORROW8(0,param_2[2])) {
      lVar1 = *param_1;
      plVar4 = (longlong *)(lVar1 + 0x10);
      if (*(char *)(lVar1 + 0x298) != '\0') {
        plVar4 = (longlong *)(lVar1 + 0x28);
      }
      if (*plVar4 == param_2[4]) goto LAB_140905bed;
      puStack_30 = &UNK_14301eae0;
      lStack_60 = *plVar4;
      lStack_58 = param_2[4];
LAB_140906157:
      plStack_40 = &lStack_58;
      plStack_50 = &lStack_60;
      pcStack_38 = pdb_140f72a40;
      pcStack_48 = pdb_140f72a40;
      pcStack_28 = pdb_1402ed420;
      puVar5 = &UNK_14301eaf0;
      goto LAB_14090616f;
    }
LAB_140905bed:
    if (param_3 == 1) {
      return 0;
    }
    plStack_40 = param_2 + 5;
    if (param_2[6] == 0x12) {
      pcVar2 = (char *)*plStack_40;
      auVar6[0] = -(*pcVar2 == DAT_14301e9c0);
      auVar6[1] = -(pcVar2[1] == UNK_14301e9c1);
      auVar6[2] = -(pcVar2[2] == UNK_14301e9c2);
      auVar6[3] = -(pcVar2[3] == UNK_14301e9c3);
      auVar6[4] = -(pcVar2[4] == UNK_14301e9c4);
      auVar6[5] = -(pcVar2[5] == UNK_14301e9c5);
      auVar6[6] = -(pcVar2[6] == UNK_14301e9c6);
      auVar6[7] = -(pcVar2[7] == UNK_14301e9c7);
      auVar6[8] = -(pcVar2[8] == UNK_14301e9c8);
      auVar6[9] = -(pcVar2[9] == UNK_14301e9c9);
      auVar6[10] = -(pcVar2[10] == UNK_14301e9ca);
      auVar6[0xb] = -(pcVar2[0xb] == UNK_14301e9cb);
      auVar6[0xc] = -(pcVar2[0xc] == UNK_14301e9cc);
      auVar6[0xd] = -(pcVar2[0xd] == UNK_14301e9cd);
      auVar6[0xe] = -(pcVar2[0xe] == UNK_14301e9ce);
      auVar6[0xf] = -(pcVar2[0xf] == UNK_14301e9cf);
      auVar10[0] = -((char)*(undefined2 *)(pcVar2 + 0x10) == DAT_14301e9d0);
      auVar10[1] = -((char)((ushort)*(undefined2 *)(pcVar2 + 0x10) >> 8) == UNK_14301e9d1);
      auVar10[2] = -(UNK_14301e9d2 == '\0');
      auVar10[3] = -(UNK_14301e9d3 == '\0');
      auVar10[4] = -(UNK_14301e9d4 == '\0');
      auVar10[5] = -(UNK_14301e9d5 == '\0');
      auVar10[6] = -(UNK_14301e9d6 == '\0');
      auVar10[7] = -(UNK_14301e9d7 == '\0');
      auVar10[8] = -(UNK_14301e9d8 == '\0');
      auVar10[9] = -(UNK_14301e9d9 == '\0');
      auVar10[10] = -(UNK_14301e9da == '\0');
      auVar10[0xb] = -(UNK_14301e9db == '\0');
      auVar10[0xc] = -(UNK_14301e9dc == '\0');
      auVar10[0xd] = -(UNK_14301e9dd == '\0');
      auVar10[0xe] = -(UNK_14301e9de == '\0');
      auVar10[0xf] = -(UNK_14301e9df == '\0');
      auVar10 = auVar10 & auVar6;
      if ((ushort)((ushort)(SUB161(auVar10 >> 7,0) & 1) |
                   (ushort)(SUB161(auVar10 >> 0xf,0) & 1) << 1 |
                   (ushort)(SUB161(auVar10 >> 0x17,0) & 1) << 2 |
                   (ushort)(SUB161(auVar10 >> 0x1f,0) & 1) << 3 |
                   (ushort)(SUB161(auVar10 >> 0x27,0) & 1) << 4 |
                   (ushort)(SUB161(auVar10 >> 0x2f,0) & 1) << 5 |
                   (ushort)(SUB161(auVar10 >> 0x37,0) & 1) << 6 |
                   (ushort)(SUB161(auVar10 >> 0x3f,0) & 1) << 7 |
                   (ushort)(SUB161(auVar10 >> 0x47,0) & 1) << 8 |
                   (ushort)(SUB161(auVar10 >> 0x4f,0) & 1) << 9 |
                   (ushort)(SUB161(auVar10 >> 0x57,0) & 1) << 10 |
                   (ushort)(SUB161(auVar10 >> 0x5f,0) & 1) << 0xb |
                   (ushort)(SUB161(auVar10 >> 0x67,0) & 1) << 0xc |
                   (ushort)(SUB161(auVar10 >> 0x6f,0) & 1) << 0xd |
                   (ushort)(SUB161(auVar10 >> 0x77,0) & 1) << 0xe |
                  (ushort)(byte)(auVar10[0xf] >> 7) << 0xf) == 0xffff) {
        if (param_2[7] != -0x8000000000000000) {
          lVar1 = param_1[4];
          plVar4 = (longlong *)(lVar1 + 0x10);
          if (*(char *)(lVar1 + 0x298) != '\0') {
            plVar4 = (longlong *)(lVar1 + 0x28);
          }
          if (*plVar4 != param_2[9]) {
            puStack_30 = &UNK_14301eb30;
            lStack_60 = *plVar4;
            lStack_58 = param_2[9];
            goto LAB_140906157;
          }
        }
        if (param_3 == 2) {
          return 0;
        }
        plStack_40 = param_2 + 10;
        if (param_2[0xb] == 0x12) {
          pcVar2 = (char *)*plStack_40;
          auVar7[0] = -(*pcVar2 == DAT_14301e9e0);
          auVar7[1] = -(pcVar2[1] == UNK_14301e9e1);
          auVar7[2] = -(pcVar2[2] == UNK_14301e9e2);
          auVar7[3] = -(pcVar2[3] == UNK_14301e9e3);
          auVar7[4] = -(pcVar2[4] == UNK_14301e9e4);
          auVar7[5] = -(pcVar2[5] == UNK_14301e9e5);
          auVar7[6] = -(pcVar2[6] == UNK_14301e9e6);
          auVar7[7] = -(pcVar2[7] == UNK_14301e9e7);
          auVar7[8] = -(pcVar2[8] == UNK_14301e9e8);
          auVar7[9] = -(pcVar2[9] == UNK_14301e9e9);
          auVar7[10] = -(pcVar2[10] == UNK_14301e9ea);
          auVar7[0xb] = -(pcVar2[0xb] == UNK_14301e9eb);
          auVar7[0xc] = -(pcVar2[0xc] == UNK_14301e9ec);
          auVar7[0xd] = -(pcVar2[0xd] == UNK_14301e9ed);
          auVar7[0xe] = -(pcVar2[0xe] == UNK_14301e9ee);
          auVar7[0xf] = -(pcVar2[0xf] == UNK_14301e9ef);
          auVar11[0] = -((char)*(undefined2 *)(pcVar2 + 0x10) == DAT_14301e9d0);
          auVar11[1] = -((char)((ushort)*(undefined2 *)(pcVar2 + 0x10) >> 8) == UNK_14301e9d1);
          auVar11[2] = -(UNK_14301e9d2 == '\0');
          auVar11[3] = -(UNK_14301e9d3 == '\0');
          auVar11[4] = -(UNK_14301e9d4 == '\0');
          auVar11[5] = -(UNK_14301e9d5 == '\0');
          auVar11[6] = -(UNK_14301e9d6 == '\0');
          auVar11[7] = -(UNK_14301e9d7 == '\0');
          auVar11[8] = -(UNK_14301e9d8 == '\0');
          auVar11[9] = -(UNK_14301e9d9 == '\0');
          auVar11[10] = -(UNK_14301e9da == '\0');
          auVar11[0xb] = -(UNK_14301e9db == '\0');
          auVar11[0xc] = -(UNK_14301e9dc == '\0');
          auVar11[0xd] = -(UNK_14301e9dd == '\0');
          auVar11[0xe] = -(UNK_14301e9de == '\0');
          auVar11[0xf] = -(UNK_14301e9df == '\0');
          auVar11 = auVar11 & auVar7;
          if ((ushort)((ushort)(SUB161(auVar11 >> 7,0) & 1) |
                       (ushort)(SUB161(auVar11 >> 0xf,0) & 1) << 1 |
                       (ushort)(SUB161(auVar11 >> 0x17,0) & 1) << 2 |
                       (ushort)(SUB161(auVar11 >> 0x1f,0) & 1) << 3 |
                       (ushort)(SUB161(auVar11 >> 0x27,0) & 1) << 4 |
                       (ushort)(SUB161(auVar11 >> 0x2f,0) & 1) << 5 |
                       (ushort)(SUB161(auVar11 >> 0x37,0) & 1) << 6 |
                       (ushort)(SUB161(auVar11 >> 0x3f,0) & 1) << 7 |
                       (ushort)(SUB161(auVar11 >> 0x47,0) & 1) << 8 |
                       (ushort)(SUB161(auVar11 >> 0x4f,0) & 1) << 9 |
                       (ushort)(SUB161(auVar11 >> 0x57,0) & 1) << 10 |
                       (ushort)(SUB161(auVar11 >> 0x5f,0) & 1) << 0xb |
                       (ushort)(SUB161(auVar11 >> 0x67,0) & 1) << 0xc |
                       (ushort)(SUB161(auVar11 >> 0x6f,0) & 1) << 0xd |
                       (ushort)(SUB161(auVar11 >> 0x77,0) & 1) << 0xe |
                      (ushort)(byte)(auVar11[0xf] >> 7) << 0xf) == 0xffff) {
            if (param_2[0xc] != -0x8000000000000000) {
              lVar1 = param_1[8];
              plVar4 = (longlong *)(lVar1 + 0x10);
              if (*(char *)(lVar1 + 0x298) != '\0') {
                plVar4 = (longlong *)(lVar1 + 0x28);
              }
              if (*plVar4 != param_2[0xe]) {
                puStack_30 = &UNK_14301eb40;
                lStack_60 = *plVar4;
                lStack_58 = param_2[0xe];
                goto LAB_140906157;
              }
            }
            if (param_3 == 3) {
              return 0;
            }
            plStack_40 = param_2 + 0xf;
            if (param_2[0x10] == 0x12) {
              pcVar2 = (char *)*plStack_40;
              auVar8[0] = -(*pcVar2 == DAT_14301e9f0);
              auVar8[1] = -(pcVar2[1] == UNK_14301e9f1);
              auVar8[2] = -(pcVar2[2] == UNK_14301e9f2);
              auVar8[3] = -(pcVar2[3] == UNK_14301e9f3);
              auVar8[4] = -(pcVar2[4] == UNK_14301e9f4);
              auVar8[5] = -(pcVar2[5] == UNK_14301e9f5);
              auVar8[6] = -(pcVar2[6] == UNK_14301e9f6);
              auVar8[7] = -(pcVar2[7] == UNK_14301e9f7);
              auVar8[8] = -(pcVar2[8] == UNK_14301e9f8);
              auVar8[9] = -(pcVar2[9] == UNK_14301e9f9);
              auVar8[10] = -(pcVar2[10] == UNK_14301e9fa);
              auVar8[0xb] = -(pcVar2[0xb] == UNK_14301e9fb);
              auVar8[0xc] = -(pcVar2[0xc] == UNK_14301e9fc);
              auVar8[0xd] = -(pcVar2[0xd] == UNK_14301e9fd);
              auVar8[0xe] = -(pcVar2[0xe] == UNK_14301e9fe);
              auVar8[0xf] = -(pcVar2[0xf] == UNK_14301e9ff);
              auVar12[0] = -((char)*(undefined2 *)(pcVar2 + 0x10) == DAT_14301e9d0);
              auVar12[1] = -((char)((ushort)*(undefined2 *)(pcVar2 + 0x10) >> 8) == UNK_14301e9d1);
              auVar12[2] = -(UNK_14301e9d2 == '\0');
              auVar12[3] = -(UNK_14301e9d3 == '\0');
              auVar12[4] = -(UNK_14301e9d4 == '\0');
              auVar12[5] = -(UNK_14301e9d5 == '\0');
              auVar12[6] = -(UNK_14301e9d6 == '\0');
              auVar12[7] = -(UNK_14301e9d7 == '\0');
              auVar12[8] = -(UNK_14301e9d8 == '\0');
              auVar12[9] = -(UNK_14301e9d9 == '\0');
              auVar12[10] = -(UNK_14301e9da == '\0');
              auVar12[0xb] = -(UNK_14301e9db == '\0');
              auVar12[0xc] = -(UNK_14301e9dc == '\0');
              auVar12[0xd] = -(UNK_14301e9dd == '\0');
              auVar12[0xe] = -(UNK_14301e9de == '\0');
              auVar12[0xf] = -(UNK_14301e9df == '\0');
              auVar12 = auVar12 & auVar8;
              if ((ushort)((ushort)(SUB161(auVar12 >> 7,0) & 1) |
                           (ushort)(SUB161(auVar12 >> 0xf,0) & 1) << 1 |
                           (ushort)(SUB161(auVar12 >> 0x17,0) & 1) << 2 |
                           (ushort)(SUB161(auVar12 >> 0x1f,0) & 1) << 3 |
                           (ushort)(SUB161(auVar12 >> 0x27,0) & 1) << 4 |
                           (ushort)(SUB161(auVar12 >> 0x2f,0) & 1) << 5 |
                           (ushort)(SUB161(auVar12 >> 0x37,0) & 1) << 6 |
                           (ushort)(SUB161(auVar12 >> 0x3f,0) & 1) << 7 |
                           (ushort)(SUB161(auVar12 >> 0x47,0) & 1) << 8 |
                           (ushort)(SUB161(auVar12 >> 0x4f,0) & 1) << 9 |
                           (ushort)(SUB161(auVar12 >> 0x57,0) & 1) << 10 |
                           (ushort)(SUB161(auVar12 >> 0x5f,0) & 1) << 0xb |
                           (ushort)(SUB161(auVar12 >> 0x67,0) & 1) << 0xc |
                           (ushort)(SUB161(auVar12 >> 0x6f,0) & 1) << 0xd |
                           (ushort)(SUB161(auVar12 >> 0x77,0) & 1) << 0xe |
                          (ushort)(byte)(auVar12[0xf] >> 7) << 0xf) == 0xffff) {
                if (param_2[0x11] != -0x8000000000000000) {
                  lVar1 = param_1[0xc];
                  plVar4 = (longlong *)(lVar1 + 0x10);
                  if (*(char *)(lVar1 + 0x298) != '\0') {
                    plVar4 = (longlong *)(lVar1 + 0x28);
                  }
                  if (*plVar4 != param_2[0x13]) {
                    puStack_30 = &UNK_14301eb50;
                    lStack_60 = *plVar4;
                    lStack_58 = param_2[0x13];
                    goto LAB_140906157;
                  }
                }
                if (param_3 == 4) {
                  return 0;
                }
                plStack_40 = param_2 + 0x14;
                if ((param_2[0x15] == 0xb) &&
                   (*(longlong *)(*plStack_40 + 3) == 0x7265747361527265 &&
                    *(longlong *)*plStack_40 == 0x7361527265746157)) {
                  if (param_2[0x16] != -0x8000000000000000) {
                    lVar1 = param_1[0x10];
                    plVar4 = (longlong *)(lVar1 + 0x10);
                    if (*(char *)(lVar1 + 0x298) != '\0') {
                      plVar4 = (longlong *)(lVar1 + 0x28);
                    }
                    if (*plVar4 != param_2[0x18]) {
                      puStack_30 = &UNK_14301eb60;
                      lStack_60 = *plVar4;
                      lStack_58 = param_2[0x18];
                      goto LAB_140906157;
                    }
                  }
                  if (param_3 == 5) {
                    return 0;
                  }
                  plStack_40 = param_2 + 0x19;
                  if ((param_2[0x1a] == 0xc) &&
                     ((int)((longlong *)*plStack_40)[1] == 0x72657473 &&
                      *(longlong *)*plStack_40 == 0x61526e6564726147)) {
                    if (param_2[0x1b] != -0x8000000000000000) {
                      lVar1 = param_1[0x14];
                      plVar4 = (longlong *)(lVar1 + 0x10);
                      if (*(char *)(lVar1 + 0x298) != '\0') {
                        plVar4 = (longlong *)(lVar1 + 0x28);
                      }
                      if (*plVar4 != param_2[0x1d]) {
                        puStack_30 = &UNK_14301eb70;
                        lStack_60 = *plVar4;
                        lStack_58 = param_2[0x1d];
                        goto LAB_140906157;
                      }
                    }
                    if (param_3 == 6) {
                      return 0;
                    }
                    plStack_40 = param_2 + 0x1e;
                    if (param_2[0x1f] == 0x13) {
                      pcVar2 = (char *)*plStack_40;
                      auVar13[0] = -(pcVar2[3] == DAT_14301ea00);
                      auVar13[1] = -(pcVar2[4] == UNK_14301ea01);
                      auVar13[2] = -(pcVar2[5] == UNK_14301ea02);
                      auVar13[3] = -(pcVar2[6] == UNK_14301ea03);
                      auVar13[4] = -(pcVar2[7] == UNK_14301ea04);
                      auVar13[5] = -(pcVar2[8] == UNK_14301ea05);
                      auVar13[6] = -(pcVar2[9] == UNK_14301ea06);
                      auVar13[7] = -(pcVar2[10] == UNK_14301ea07);
                      auVar13[8] = -(pcVar2[0xb] == UNK_14301ea08);
                      auVar13[9] = -(pcVar2[0xc] == UNK_14301ea09);
                      auVar13[10] = -(pcVar2[0xd] == UNK_14301ea0a);
                      auVar13[0xb] = -(pcVar2[0xe] == UNK_14301ea0b);
                      auVar13[0xc] = -(pcVar2[0xf] == UNK_14301ea0c);
                      auVar13[0xd] = -(pcVar2[0x10] == UNK_14301ea0d);
                      auVar13[0xe] = -(pcVar2[0x11] == UNK_14301ea0e);
                      auVar13[0xf] = -(pcVar2[0x12] == UNK_14301ea0f);
                      auVar9[0] = -(*pcVar2 == DAT_14301ea10);
                      auVar9[1] = -(pcVar2[1] == UNK_14301ea11);
                      auVar9[2] = -(pcVar2[2] == UNK_14301ea12);
                      auVar9[3] = -(pcVar2[3] == UNK_14301ea13);
                      auVar9[4] = -(pcVar2[4] == UNK_14301ea14);
                      auVar9[5] = -(pcVar2[5] == UNK_14301ea15);
                      auVar9[6] = -(pcVar2[6] == UNK_14301ea16);
                      auVar9[7] = -(pcVar2[7] == UNK_14301ea17);
                      auVar9[8] = -(pcVar2[8] == UNK_14301ea18);
                      auVar9[9] = -(pcVar2[9] == UNK_14301ea19);
                      auVar9[10] = -(pcVar2[10] == UNK_14301ea1a);
                      auVar9[0xb] = -(pcVar2[0xb] == UNK_14301ea1b);
                      auVar9[0xc] = -(pcVar2[0xc] == UNK_14301ea1c);
                      auVar9[0xd] = -(pcVar2[0xd] == UNK_14301ea1d);
                      auVar9[0xe] = -(pcVar2[0xe] == UNK_14301ea1e);
                      auVar9[0xf] = -(pcVar2[0xf] == UNK_14301ea1f);
                      auVar9 = auVar9 & auVar13;
                      if ((ushort)((ushort)(SUB161(auVar9 >> 7,0) & 1) |
                                   (ushort)(SUB161(auVar9 >> 0xf,0) & 1) << 1 |
                                   (ushort)(SUB161(auVar9 >> 0x17,0) & 1) << 2 |
                                   (ushort)(SUB161(auVar9 >> 0x1f,0) & 1) << 3 |
                                   (ushort)(SUB161(auVar9 >> 0x27,0) & 1) << 4 |
                                   (ushort)(SUB161(auVar9 >> 0x2f,0) & 1) << 5 |
                                   (ushort)(SUB161(auVar9 >> 0x37,0) & 1) << 6 |
                                   (ushort)(SUB161(auVar9 >> 0x3f,0) & 1) << 7 |
                                   (ushort)(SUB161(auVar9 >> 0x47,0) & 1) << 8 |
                                   (ushort)(SUB161(auVar9 >> 0x4f,0) & 1) << 9 |
                                   (ushort)(SUB161(auVar9 >> 0x57,0) & 1) << 10 |
                                   (ushort)(SUB161(auVar9 >> 0x5f,0) & 1) << 0xb |
                                   (ushort)(SUB161(auVar9 >> 0x67,0) & 1) << 0xc |
                                   (ushort)(SUB161(auVar9 >> 0x6f,0) & 1) << 0xd |
                                   (ushort)(SUB161(auVar9 >> 0x77,0) & 1) << 0xe |
                                  (ushort)(byte)(auVar9[0xf] >> 7) << 0xf) == 0xffff) {
                        if (param_2[0x20] == -0x8000000000000000) {
                          return 0;
                        }
                        lVar1 = param_1[0x18];
                        plVar4 = (longlong *)(lVar1 + 0x10);
                        if (*(char *)(lVar1 + 0x298) != '\0') {
                          plVar4 = (longlong *)(lVar1 + 0x28);
                        }
                        if (*plVar4 == param_2[0x22]) {
                          return 0;
                        }
                        puStack_30 = &UNK_14301eb80;
                        lStack_60 = *plVar4;
                        lStack_58 = param_2[0x22];
                        goto LAB_140906157;
                      }
                    }
                    plStack_50 = (longlong *)&UNK_14301eb80;
                  }
                  else {
                    plStack_50 = (longlong *)&UNK_14301eb70;
                  }
                }
                else {
                  plStack_50 = (longlong *)&UNK_14301eb60;
                }
                goto LAB_1409060b9;
              }
            }
            plStack_50 = (longlong *)&UNK_14301eb50;
            goto LAB_1409060b9;
          }
        }
        plStack_50 = (longlong *)&UNK_14301eb40;
        goto LAB_1409060b9;
      }
    }
    plStack_50 = (longlong *)&UNK_14301eb30;
    pcStack_48 = pdb_1402ed420;
    pcStack_38 = pdb_1402ed420;
    puVar5 = &UNK_14301eb90;
  }
  else {
    plStack_50 = (longlong *)&UNK_14301eae0;
    plStack_40 = param_2;
LAB_1409060b9:
    pcStack_48 = pdb_1402ed420;
    pcStack_38 = pdb_1402ed420;
    puVar5 = &UNK_14301eb90;
  }
LAB_14090616f:
  pdb_140905540(auStack_20,puVar5,&plStack_50);
  uVar3 = pdb_142de92b0(auStack_20);
  return uVar3;
}

