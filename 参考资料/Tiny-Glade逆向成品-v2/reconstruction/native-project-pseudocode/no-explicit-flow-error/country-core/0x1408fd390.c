// VA 0x1408fd390, PDB extent 433 bytes
// country_core::startup::load_shaders::impl$2::should_load
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/startup/load_shaders.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Type propagation algorithm not settling */
/* Matched PDB project procedure: country_core::startup::load_shaders::impl$2::should_load
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/startup/load_shaders.rs
   Extent: 433 */

bool pdb_1408fd390(char *param_1,ulonglong param_2)

{
  ushort uVar1;
  int iVar2;
  bool bVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  
  if ((0x11 < param_2) &&
     (auVar4[0] = -(*param_1 == DAT_14301d4c0), auVar4[1] = -(param_1[1] == UNK_14301d4c1),
     auVar4[2] = -(param_1[2] == UNK_14301d4c2), auVar4[3] = -(param_1[3] == UNK_14301d4c3),
     auVar4[4] = -(param_1[4] == UNK_14301d4c4), auVar4[5] = -(param_1[5] == UNK_14301d4c5),
     auVar4[6] = -(param_1[6] == UNK_14301d4c6), auVar4[7] = -(param_1[7] == UNK_14301d4c7),
     auVar4[8] = -(param_1[8] == UNK_14301d4c8), auVar4[9] = -(param_1[9] == UNK_14301d4c9),
     auVar4[10] = -(param_1[10] == UNK_14301d4ca), auVar4[0xb] = -(param_1[0xb] == UNK_14301d4cb),
     auVar4[0xc] = -(param_1[0xc] == UNK_14301d4cc), auVar4[0xd] = -(param_1[0xd] == UNK_14301d4cd),
     auVar4[0xe] = -(param_1[0xe] == UNK_14301d4ce), auVar4[0xf] = -(param_1[0xf] == UNK_14301d4cf),
     auVar10[0] = -((char)*(undefined2 *)(param_1 + 0x10) == DAT_14301d4d0),
     auVar10[1] = -((char)((ushort)*(undefined2 *)(param_1 + 0x10) >> 8) == UNK_14301d4d1),
     auVar10[2] = -(UNK_14301d4d2 == '\0'), auVar10[3] = -(UNK_14301d4d3 == '\0'),
     auVar10[4] = -(UNK_14301d4d4 == '\0'), auVar10[5] = -(UNK_14301d4d5 == '\0'),
     auVar10[6] = -(UNK_14301d4d6 == '\0'), auVar10[7] = -(UNK_14301d4d7 == '\0'),
     auVar10[8] = -(UNK_14301d4d8 == '\0'), auVar10[9] = -(UNK_14301d4d9 == '\0'),
     auVar10[10] = -(UNK_14301d4da == '\0'), auVar10[0xb] = -(UNK_14301d4db == '\0'),
     auVar10[0xc] = -(UNK_14301d4dc == '\0'), auVar10[0xd] = -(UNK_14301d4dd == '\0'),
     auVar10[0xe] = -(UNK_14301d4de == '\0'), auVar10[0xf] = -(UNK_14301d4df == '\0'),
     auVar10 = auVar10 & auVar4,
     (ushort)((ushort)(SUB161(auVar10 >> 7,0) & 1) | (ushort)(SUB161(auVar10 >> 0xf,0) & 1) << 1 |
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
             (ushort)(byte)(auVar10[0xf] >> 7) << 0xf) == 0xffff)) {
    return false;
  }
  bVar3 = false;
  switch(param_2) {
  case 0x11:
    auVar5[0] = -(*param_1 == UNK_14301d500);
    auVar5[1] = -(param_1[1] == UNK_14301d501);
    auVar5[2] = -(param_1[2] == UNK_14301d502);
    auVar5[3] = -(param_1[3] == UNK_14301d503);
    auVar5[4] = -(param_1[4] == UNK_14301d504);
    auVar5[5] = -(param_1[5] == UNK_14301d505);
    auVar5[6] = -(param_1[6] == UNK_14301d506);
    auVar5[7] = -(param_1[7] == UNK_14301d507);
    auVar5[8] = -(param_1[8] == UNK_14301d508);
    auVar5[9] = -(param_1[9] == UNK_14301d509);
    auVar5[10] = -(param_1[10] == UNK_14301d50a);
    auVar5[0xb] = -(param_1[0xb] == UNK_14301d50b);
    auVar5[0xc] = -(param_1[0xc] == UNK_14301d50c);
    auVar5[0xd] = -(param_1[0xd] == UNK_14301d50d);
    auVar5[0xe] = -(param_1[0xe] == UNK_14301d50e);
    auVar5[0xf] = -(param_1[0xf] == UNK_14301d50f);
    auVar11[0] = -(param_1[0x10] == UNK_142e49990);
    auVar11[1] = -(UNK_142e49991 == '\0');
    auVar11[2] = -(UNK_142e49992 == '\0');
    auVar11[3] = -(UNK_142e49993 == '\0');
    auVar11[4] = -(UNK_142e49994 == '\0');
    auVar11[5] = -(UNK_142e49995 == '\0');
    auVar11[6] = -(UNK_142e49996 == '\0');
    auVar11[7] = -(UNK_142e49997 == '\0');
    auVar11[8] = -(UNK_142e49998 == '\0');
    auVar11[9] = -(UNK_142e49999 == '\0');
    auVar11[10] = -(UNK_142e4999a == '\0');
    auVar11[0xb] = -(UNK_142e4999b == '\0');
    auVar11[0xc] = -(UNK_142e4999c == '\0');
    auVar11[0xd] = -(UNK_142e4999d == '\0');
    auVar11[0xe] = -(UNK_142e4999e == '\0');
    auVar11[0xf] = -(UNK_142e4999f == '\0');
    auVar11 = auVar11 & auVar5;
    uVar1 = (ushort)(SUB161(auVar11 >> 7,0) & 1) | (ushort)(SUB161(auVar11 >> 0xf,0) & 1) << 1 |
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
            (ushort)(byte)(auVar11[0xf] >> 7) << 0xf;
    goto joined_r0x0001408fd51b;
  case 0x17:
    auVar12[0] = -(param_1[7] == UNK_14301d4e0);
    auVar12[1] = -(param_1[8] == UNK_14301d4e1);
    auVar12[2] = -(param_1[9] == UNK_14301d4e2);
    auVar12[3] = -(param_1[10] == UNK_14301d4e3);
    auVar12[4] = -(param_1[0xb] == UNK_14301d4e4);
    auVar12[5] = -(param_1[0xc] == UNK_14301d4e5);
    auVar12[6] = -(param_1[0xd] == UNK_14301d4e6);
    auVar12[7] = -(param_1[0xe] == UNK_14301d4e7);
    auVar12[8] = -(param_1[0xf] == UNK_14301d4e8);
    auVar12[9] = -(param_1[0x10] == UNK_14301d4e9);
    auVar12[10] = -(param_1[0x11] == UNK_14301d4ea);
    auVar12[0xb] = -(param_1[0x12] == UNK_14301d4eb);
    auVar12[0xc] = -(param_1[0x13] == UNK_14301d4ec);
    auVar12[0xd] = -(param_1[0x14] == UNK_14301d4ed);
    auVar12[0xe] = -(param_1[0x15] == UNK_14301d4ee);
    auVar12[0xf] = -(param_1[0x16] == UNK_14301d4ef);
    auVar6[0] = -(*param_1 == UNK_14301d4f0);
    auVar6[1] = -(param_1[1] == UNK_14301d4f1);
    auVar6[2] = -(param_1[2] == UNK_14301d4f2);
    auVar6[3] = -(param_1[3] == UNK_14301d4f3);
    auVar6[4] = -(param_1[4] == UNK_14301d4f4);
    auVar6[5] = -(param_1[5] == UNK_14301d4f5);
    auVar6[6] = -(param_1[6] == UNK_14301d4f6);
    auVar6[7] = -(param_1[7] == UNK_14301d4f7);
    auVar6[8] = -(param_1[8] == UNK_14301d4f8);
    auVar6[9] = -(param_1[9] == UNK_14301d4f9);
    auVar6[10] = -(param_1[10] == UNK_14301d4fa);
    auVar6[0xb] = -(param_1[0xb] == UNK_14301d4fb);
    auVar6[0xc] = -(param_1[0xc] == UNK_14301d4fc);
    auVar6[0xd] = -(param_1[0xd] == UNK_14301d4fd);
    auVar6[0xe] = -(param_1[0xe] == UNK_14301d4fe);
    auVar6[0xf] = -(param_1[0xf] == UNK_14301d4ff);
    auVar6 = auVar6 & auVar12;
    bVar3 = (ushort)((ushort)(SUB161(auVar6 >> 7,0) & 1) |
                     (ushort)(SUB161(auVar6 >> 0xf,0) & 1) << 1 |
                     (ushort)(SUB161(auVar6 >> 0x17,0) & 1) << 2 |
                     (ushort)(SUB161(auVar6 >> 0x1f,0) & 1) << 3 |
                     (ushort)(SUB161(auVar6 >> 0x27,0) & 1) << 4 |
                     (ushort)(SUB161(auVar6 >> 0x2f,0) & 1) << 5 |
                     (ushort)(SUB161(auVar6 >> 0x37,0) & 1) << 6 |
                     (ushort)(SUB161(auVar6 >> 0x3f,0) & 1) << 7 |
                     (ushort)(SUB161(auVar6 >> 0x47,0) & 1) << 8 |
                     (ushort)(SUB161(auVar6 >> 0x4f,0) & 1) << 9 |
                     (ushort)(SUB161(auVar6 >> 0x57,0) & 1) << 10 |
                     (ushort)(SUB161(auVar6 >> 0x5f,0) & 1) << 0xb |
                     (ushort)(SUB161(auVar6 >> 0x67,0) & 1) << 0xc |
                     (ushort)(SUB161(auVar6 >> 0x6f,0) & 1) << 0xd |
                     (ushort)(SUB161(auVar6 >> 0x77,0) & 1) << 0xe |
                    (ushort)(byte)(auVar6[0xf] >> 7) << 0xf) == 0xffff;
    break;
  case 0x1b:
    auVar13[0] = -(param_1[0xb] == UNK_14301d530);
    auVar13[1] = -(param_1[0xc] == UNK_14301d531);
    auVar13[2] = -(param_1[0xd] == UNK_14301d532);
    auVar13[3] = -(param_1[0xe] == UNK_14301d533);
    auVar13[4] = -(param_1[0xf] == UNK_14301d534);
    auVar13[5] = -(param_1[0x10] == UNK_14301d535);
    auVar13[6] = -(param_1[0x11] == UNK_14301d536);
    auVar13[7] = -(param_1[0x12] == UNK_14301d537);
    auVar13[8] = -(param_1[0x13] == UNK_14301d538);
    auVar13[9] = -(param_1[0x14] == UNK_14301d539);
    auVar13[10] = -(param_1[0x15] == UNK_14301d53a);
    auVar13[0xb] = -(param_1[0x16] == UNK_14301d53b);
    auVar13[0xc] = -(param_1[0x17] == UNK_14301d53c);
    auVar13[0xd] = -(param_1[0x18] == UNK_14301d53d);
    auVar13[0xe] = -(param_1[0x19] == UNK_14301d53e);
    auVar13[0xf] = -(param_1[0x1a] == UNK_14301d53f);
    auVar7[0] = -(*param_1 == UNK_14301d540);
    auVar7[1] = -(param_1[1] == UNK_14301d541);
    auVar7[2] = -(param_1[2] == UNK_14301d542);
    auVar7[3] = -(param_1[3] == UNK_14301d543);
    auVar7[4] = -(param_1[4] == UNK_14301d544);
    auVar7[5] = -(param_1[5] == UNK_14301d545);
    auVar7[6] = -(param_1[6] == UNK_14301d546);
    auVar7[7] = -(param_1[7] == UNK_14301d547);
    auVar7[8] = -(param_1[8] == UNK_14301d548);
    auVar7[9] = -(param_1[9] == UNK_14301d549);
    auVar7[10] = -(param_1[10] == UNK_14301d54a);
    auVar7[0xb] = -(param_1[0xb] == UNK_14301d54b);
    auVar7[0xc] = -(param_1[0xc] == UNK_14301d54c);
    auVar7[0xd] = -(param_1[0xd] == UNK_14301d54d);
    auVar7[0xe] = -(param_1[0xe] == UNK_14301d54e);
    auVar7[0xf] = -(param_1[0xf] == UNK_14301d54f);
    auVar7 = auVar7 & auVar13;
    bVar3 = true;
    if (((ushort)((ushort)(SUB161(auVar7 >> 7,0) & 1) | (ushort)(SUB161(auVar7 >> 0xf,0) & 1) << 1 |
                  (ushort)(SUB161(auVar7 >> 0x17,0) & 1) << 2 |
                  (ushort)(SUB161(auVar7 >> 0x1f,0) & 1) << 3 |
                  (ushort)(SUB161(auVar7 >> 0x27,0) & 1) << 4 |
                  (ushort)(SUB161(auVar7 >> 0x2f,0) & 1) << 5 |
                  (ushort)(SUB161(auVar7 >> 0x37,0) & 1) << 6 |
                  (ushort)(SUB161(auVar7 >> 0x3f,0) & 1) << 7 |
                  (ushort)(SUB161(auVar7 >> 0x47,0) & 1) << 8 |
                  (ushort)(SUB161(auVar7 >> 0x4f,0) & 1) << 9 |
                  (ushort)(SUB161(auVar7 >> 0x57,0) & 1) << 10 |
                  (ushort)(SUB161(auVar7 >> 0x5f,0) & 1) << 0xb |
                  (ushort)(SUB161(auVar7 >> 0x67,0) & 1) << 0xc |
                  (ushort)(SUB161(auVar7 >> 0x6f,0) & 1) << 0xd |
                  (ushort)(SUB161(auVar7 >> 0x77,0) & 1) << 0xe |
                 (ushort)(byte)(auVar7[0xf] >> 7) << 0xf) != 0xffff) &&
       (auVar14[0] = -(param_1[0xb] == UNK_14301d550), auVar14[1] = -(param_1[0xc] == UNK_14301d551)
       , auVar14[2] = -(param_1[0xd] == UNK_14301d552),
       auVar14[3] = -(param_1[0xe] == UNK_14301d553), auVar14[4] = -(param_1[0xf] == UNK_14301d554),
       auVar14[5] = -(param_1[0x10] == UNK_14301d555),
       auVar14[6] = -(param_1[0x11] == UNK_14301d556),
       auVar14[7] = -(param_1[0x12] == UNK_14301d557),
       auVar14[8] = -(param_1[0x13] == UNK_14301d558),
       auVar14[9] = -(param_1[0x14] == UNK_14301d559),
       auVar14[10] = -(param_1[0x15] == UNK_14301d55a),
       auVar14[0xb] = -(param_1[0x16] == UNK_14301d55b),
       auVar14[0xc] = -(param_1[0x17] == UNK_14301d55c),
       auVar14[0xd] = -(param_1[0x18] == UNK_14301d55d),
       auVar14[0xe] = -(param_1[0x19] == UNK_14301d55e),
       auVar14[0xf] = -(param_1[0x1a] == UNK_14301d55f), auVar8[0] = -(*param_1 == UNK_14301d560),
       auVar8[1] = -(param_1[1] == UNK_14301d561), auVar8[2] = -(param_1[2] == UNK_14301d562),
       auVar8[3] = -(param_1[3] == UNK_14301d563), auVar8[4] = -(param_1[4] == UNK_14301d564),
       auVar8[5] = -(param_1[5] == UNK_14301d565), auVar8[6] = -(param_1[6] == UNK_14301d566),
       auVar8[7] = -(param_1[7] == UNK_14301d567), auVar8[8] = -(param_1[8] == UNK_14301d568),
       auVar8[9] = -(param_1[9] == UNK_14301d569), auVar8[10] = -(param_1[10] == UNK_14301d56a),
       auVar8[0xb] = -(param_1[0xb] == UNK_14301d56b),
       auVar8[0xc] = -(param_1[0xc] == UNK_14301d56c),
       auVar8[0xd] = -(param_1[0xd] == UNK_14301d56d),
       auVar8[0xe] = -(param_1[0xe] == UNK_14301d56e),
       auVar8[0xf] = -(param_1[0xf] == UNK_14301d56f), auVar8 = auVar8 & auVar14,
       (ushort)((ushort)(SUB161(auVar8 >> 7,0) & 1) | (ushort)(SUB161(auVar8 >> 0xf,0) & 1) << 1 |
                (ushort)(SUB161(auVar8 >> 0x17,0) & 1) << 2 |
                (ushort)(SUB161(auVar8 >> 0x1f,0) & 1) << 3 |
                (ushort)(SUB161(auVar8 >> 0x27,0) & 1) << 4 |
                (ushort)(SUB161(auVar8 >> 0x2f,0) & 1) << 5 |
                (ushort)(SUB161(auVar8 >> 0x37,0) & 1) << 6 |
                (ushort)(SUB161(auVar8 >> 0x3f,0) & 1) << 7 |
                (ushort)(SUB161(auVar8 >> 0x47,0) & 1) << 8 |
                (ushort)(SUB161(auVar8 >> 0x4f,0) & 1) << 9 |
                (ushort)(SUB161(auVar8 >> 0x57,0) & 1) << 10 |
                (ushort)(SUB161(auVar8 >> 0x5f,0) & 1) << 0xb |
                (ushort)(SUB161(auVar8 >> 0x67,0) & 1) << 0xc |
                (ushort)(SUB161(auVar8 >> 0x6f,0) & 1) << 0xd |
                (ushort)(SUB161(auVar8 >> 0x77,0) & 1) << 0xe |
               (ushort)(byte)(auVar8[0xf] >> 7) << 0xf) != 0xffff)) {
      return false;
    }
    break;
  case 0x1c:
    auVar15[0] = -(param_1[0xc] == UNK_14301d510);
    auVar15[1] = -(param_1[0xd] == UNK_14301d511);
    auVar15[2] = -(param_1[0xe] == UNK_14301d512);
    auVar15[3] = -(param_1[0xf] == UNK_14301d513);
    auVar15[4] = -(param_1[0x10] == UNK_14301d514);
    auVar15[5] = -(param_1[0x11] == UNK_14301d515);
    auVar15[6] = -(param_1[0x12] == UNK_14301d516);
    auVar15[7] = -(param_1[0x13] == UNK_14301d517);
    auVar15[8] = -(param_1[0x14] == UNK_14301d518);
    auVar15[9] = -(param_1[0x15] == UNK_14301d519);
    auVar15[10] = -(param_1[0x16] == UNK_14301d51a);
    auVar15[0xb] = -(param_1[0x17] == UNK_14301d51b);
    auVar15[0xc] = -(param_1[0x18] == UNK_14301d51c);
    auVar15[0xd] = -(param_1[0x19] == UNK_14301d51d);
    auVar15[0xe] = -(param_1[0x1a] == UNK_14301d51e);
    auVar15[0xf] = -(param_1[0x1b] == UNK_14301d51f);
    auVar9[0] = -(*param_1 == UNK_14301d520);
    auVar9[1] = -(param_1[1] == UNK_14301d521);
    auVar9[2] = -(param_1[2] == UNK_14301d522);
    auVar9[3] = -(param_1[3] == UNK_14301d523);
    auVar9[4] = -(param_1[4] == UNK_14301d524);
    auVar9[5] = -(param_1[5] == UNK_14301d525);
    auVar9[6] = -(param_1[6] == UNK_14301d526);
    auVar9[7] = -(param_1[7] == UNK_14301d527);
    auVar9[8] = -(param_1[8] == UNK_14301d528);
    auVar9[9] = -(param_1[9] == UNK_14301d529);
    auVar9[10] = -(param_1[10] == UNK_14301d52a);
    auVar9[0xb] = -(param_1[0xb] == UNK_14301d52b);
    auVar9[0xc] = -(param_1[0xc] == UNK_14301d52c);
    auVar9[0xd] = -(param_1[0xd] == UNK_14301d52d);
    auVar9[0xe] = -(param_1[0xe] == UNK_14301d52e);
    auVar9[0xf] = -(param_1[0xf] == UNK_14301d52f);
    auVar9 = auVar9 & auVar15;
    uVar1 = (ushort)(SUB161(auVar9 >> 7,0) & 1) | (ushort)(SUB161(auVar9 >> 0xf,0) & 1) << 1 |
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
            (ushort)(SUB161(auVar9 >> 0x77,0) & 1) << 0xe | (ushort)(byte)(auVar9[0xf] >> 7) << 0xf;
joined_r0x0001408fd51b:
    if (uVar1 == 0xffff) {
      return true;
    }
    return false;
  case 0x23:
    iVar2 = pub_142e32750(param_1,&UNK_14301db76,0x23);
    goto joined_r0x0001408fd431;
  case 0x24:
    iVar2 = pub_142e32750(param_1,&UNK_14301db28,0x24);
    goto joined_r0x0001408fd431;
  case 0x26:
    iVar2 = pub_142e32750(param_1,&UNK_14301db99,0x26);
    bVar3 = iVar2 == 0;
    break;
  case 0x2a:
    iVar2 = pub_142e32750(param_1,&UNK_14301db4c,0x2a);
joined_r0x0001408fd431:
    if (iVar2 == 0) {
      return true;
    }
    return false;
  }
  return bVar3;
}

