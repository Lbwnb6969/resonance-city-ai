// VA 0x140a4db50, PDB extent 2698 bytes
// country_core::systems::wall::shapes::rectangle::create_rectangle::get_building_and_roof_colors
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/wall/shapes/rectangle/create_rectangle.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::systems::wall::shapes::rectangle::create_rectangle::get_building_and_roof_colors
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/wall/shapes/rectangle/create_rectangle.rs
   Extent: 2698 */

undefined4 *
pdb_140a4db50(undefined4 *param_1,longlong param_2,longlong param_3,longlong *param_4,
             longlong *param_5,longlong *param_6,longlong *param_7,longlong *param_8,
             longlong *param_9,longlong param_10,byte param_11)

{
  char *pcVar1;
  uint uVar2;
  uint uVar3;
  byte bVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  int *piVar7;
  undefined4 uVar8;
  longlong lVar9;
  uint uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  byte bVar13;
  longlong lVar14;
  ushort uVar15;
  longlong lVar16;
  longlong lVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  longlong *plVar20;
  undefined4 uVar21;
  char cVar22;
  char cVar23;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined4 uStack_98;
  longlong lStack_90;
  longlong lStack_88;
  undefined4 uStack_7c;
  longlong *plStack_78;
  undefined4 uStack_6c;
  longlong lStack_68;
  ulonglong uStack_60;
  longlong *plStack_58;
  longlong lStack_50;
  longlong lStack_48;
  
  uStack_7c = *(undefined4 *)(param_10 + 0x2c);
  uStack_98 = *(undefined4 *)(param_10 + 0x38);
  cVar23 = *(char *)(param_10 + 0x5f);
  uVar21 = *(undefined4 *)(param_10 + 0x30);
  uStack_6c = *(undefined4 *)(param_10 + 0x34);
  uVar11 = *(undefined4 *)(param_10 + 0x40);
  bVar13 = *(byte *)(param_10 + 0x1d);
  uVar18 = *(undefined4 *)(param_10 + 0x20);
  uVar19 = *(undefined4 *)(param_10 + 0x24);
  cVar22 = (char)*(undefined4 *)(param_10 + 0x1c);
  if (cVar22 == '\x03') {
    cVar22 = '\0';
  }
  if ((param_2 == 1) && (param_8[3] != 0)) {
    plStack_78 = param_8 + 4;
    lStack_90 = param_3;
    lStack_88 = param_3;
    plStack_58 = param_4;
    uVar5 = pdb_1400af0a0(plStack_78,&lStack_90);
    lVar14 = *param_8;
    uStack_60 = param_8[1];
    bVar4 = (byte)(uVar5 >> 0x39);
    auVar24 = ZEXT216(CONCAT11(bVar4,bVar4));
    auVar24 = pshuflw(auVar24,auVar24,0);
    lVar9 = 0;
    while( true ) {
      uVar5 = uVar5 & uStack_60;
      auVar34 = *(undefined1 (*) [16])(lVar14 + uVar5);
      auVar33[0] = -(auVar34[0] == auVar24[0]);
      auVar33[1] = -(auVar34[1] == auVar24[1]);
      auVar33[2] = -(auVar34[2] == auVar24[2]);
      auVar33[3] = -(auVar34[3] == auVar24[3]);
      auVar33[4] = -(auVar34[4] == auVar24[4]);
      auVar33[5] = -(auVar34[5] == auVar24[5]);
      auVar33[6] = -(auVar34[6] == auVar24[6]);
      auVar33[7] = -(auVar34[7] == auVar24[7]);
      auVar33[8] = -(auVar34[8] == auVar24[0]);
      auVar33[9] = -(auVar34[9] == auVar24[1]);
      auVar33[10] = -(auVar34[10] == auVar24[2]);
      auVar33[0xb] = -(auVar34[0xb] == auVar24[3]);
      auVar33[0xc] = -(auVar34[0xc] == auVar24[4]);
      auVar33[0xd] = -(auVar34[0xd] == auVar24[5]);
      auVar33[0xe] = -(auVar34[0xe] == auVar24[6]);
      auVar33[0xf] = -(auVar34[0xf] == auVar24[7]);
      uVar15 = (ushort)(SUB161(auVar33 >> 7,0) & 1) | (ushort)(SUB161(auVar33 >> 0xf,0) & 1) << 1 |
               (ushort)(SUB161(auVar33 >> 0x17,0) & 1) << 2 |
               (ushort)(SUB161(auVar33 >> 0x1f,0) & 1) << 3 |
               (ushort)(SUB161(auVar33 >> 0x27,0) & 1) << 4 |
               (ushort)(SUB161(auVar33 >> 0x2f,0) & 1) << 5 |
               (ushort)(SUB161(auVar33 >> 0x37,0) & 1) << 6 |
               (ushort)(SUB161(auVar33 >> 0x3f,0) & 1) << 7 |
               (ushort)(SUB161(auVar33 >> 0x47,0) & 1) << 8 |
               (ushort)(SUB161(auVar33 >> 0x4f,0) & 1) << 9 |
               (ushort)(SUB161(auVar33 >> 0x57,0) & 1) << 10 |
               (ushort)(SUB161(auVar33 >> 0x5f,0) & 1) << 0xb |
               (ushort)(SUB161(auVar33 >> 0x67,0) & 1) << 0xc |
               (ushort)(SUB161(auVar33 >> 0x6f,0) & 1) << 0xd |
               (ushort)(SUB161(auVar33 >> 0x77,0) & 1) << 0xe | (ushort)(auVar33[0xf] >> 7) << 0xf;
      uVar10 = (uint)uVar15;
      while (uVar15 != 0) {
        uVar2 = 0;
        for (uVar3 = uVar10; (uVar3 & 1) == 0; uVar3 = uVar3 >> 1 | 0x80000000) {
          uVar2 = uVar2 + 1;
        }
        lVar16 = (uVar2 + uVar5 & uStack_60) * -0x2b0;
        if (lStack_88 == *(longlong *)(lVar14 + -0x2b0 + lVar16)) {
          lVar16 = lVar16 + lVar14;
          if ((*(ulonglong *)(lVar16 + -0x298) < 2) || (*(float *)(lVar16 + -0x278) <= 0.0)) {
                    /* WARNING: Subroutine does not return */
            pdb_142dc83b0(&UNK_143059e50,0x32,&UNK_14303cde8);
          }
          if (1 < *(uint *)(lVar16 + -0x50)) goto LAB_140a4ddeb;
          lStack_90 = lStack_88;
          lStack_48 = param_8[9];
          if (lStack_48 == 0) goto LAB_140a4de66;
          uVar5 = pdb_1400af0a0(param_8 + 10,&lStack_90);
          bVar4 = (byte)(uVar5 >> 0x39);
          auVar24 = ZEXT216(CONCAT11(bVar4,bVar4));
          auVar24 = pshuflw(auVar24,auVar24,0);
          lVar9 = 0;
          goto LAB_140a4dd6b;
        }
        uVar15 = (ushort)(uVar10 - 1) & (ushort)uVar10;
        uVar10 = CONCAT22((short)(uVar10 - 1 >> 0x10),uVar15);
      }
      auVar25[0] = -(auVar34[0] == -1);
      auVar25[1] = -(auVar34[1] == -1);
      auVar25[2] = -(auVar34[2] == -1);
      auVar25[3] = -(auVar34[3] == -1);
      auVar25[4] = -(auVar34[4] == -1);
      auVar25[5] = -(auVar34[5] == -1);
      auVar25[6] = -(auVar34[6] == -1);
      auVar25[7] = -(auVar34[7] == -1);
      auVar25[8] = -(auVar34[8] == -1);
      auVar25[9] = -(auVar34[9] == -1);
      auVar25[10] = -(auVar34[10] == -1);
      auVar25[0xb] = -(auVar34[0xb] == -1);
      auVar25[0xc] = -(auVar34[0xc] == -1);
      auVar25[0xd] = -(auVar34[0xd] == -1);
      auVar25[0xe] = -(auVar34[0xe] == -1);
      auVar25[0xf] = -(auVar34[0xf] == -1);
      if ((((((((((((((((SUB161(auVar25 >> 7,0) & 1) != 0 || (SUB161(auVar25 >> 0xf,0) & 1) != 0) ||
                      (SUB161(auVar25 >> 0x17,0) & 1) != 0) || (SUB161(auVar25 >> 0x1f,0) & 1) != 0)
                    || (SUB161(auVar25 >> 0x27,0) & 1) != 0) || (SUB161(auVar25 >> 0x2f,0) & 1) != 0
                   ) || (SUB161(auVar25 >> 0x37,0) & 1) != 0) ||
                 (SUB161(auVar25 >> 0x3f,0) & 1) != 0) || (SUB161(auVar25 >> 0x47,0) & 1) != 0) ||
               (SUB161(auVar25 >> 0x4f,0) & 1) != 0) || (SUB161(auVar25 >> 0x57,0) & 1) != 0) ||
             (SUB161(auVar25 >> 0x5f,0) & 1) != 0) || (SUB161(auVar25 >> 0x67,0) & 1) != 0) ||
           (SUB161(auVar25 >> 0x6f,0) & 1) != 0) || (SUB161(auVar25 >> 0x77,0) & 1) != 0) ||
          auVar25[0xf] < '\0') break;
      uVar5 = uVar5 + lVar9 + 0x10;
      lVar9 = lVar9 + 0x10;
    }
  }
  goto LAB_140a4ddeb;
LAB_140a4dd6b:
  uVar5 = uVar5 & param_8[7];
  pcVar1 = (char *)(param_8[6] + uVar5);
  auVar34[0] = -(*pcVar1 == auVar24[0]);
  auVar34[1] = -(pcVar1[1] == auVar24[1]);
  auVar34[2] = -(pcVar1[2] == auVar24[2]);
  auVar34[3] = -(pcVar1[3] == auVar24[3]);
  auVar34[4] = -(pcVar1[4] == auVar24[4]);
  auVar34[5] = -(pcVar1[5] == auVar24[5]);
  auVar34[6] = -(pcVar1[6] == auVar24[6]);
  auVar34[7] = -(pcVar1[7] == auVar24[7]);
  auVar34[8] = -(pcVar1[8] == auVar24[0]);
  auVar34[9] = -(pcVar1[9] == auVar24[1]);
  auVar34[10] = -(pcVar1[10] == auVar24[2]);
  auVar34[0xb] = -(pcVar1[0xb] == auVar24[3]);
  auVar34[0xc] = -(pcVar1[0xc] == auVar24[4]);
  auVar34[0xd] = -(pcVar1[0xd] == auVar24[5]);
  auVar34[0xe] = -(pcVar1[0xe] == auVar24[6]);
  auVar34[0xf] = -(pcVar1[0xf] == auVar24[7]);
  uVar15 = (ushort)(SUB161(auVar34 >> 7,0) & 1) | (ushort)(SUB161(auVar34 >> 0xf,0) & 1) << 1 |
           (ushort)(SUB161(auVar34 >> 0x17,0) & 1) << 2 |
           (ushort)(SUB161(auVar34 >> 0x1f,0) & 1) << 3 |
           (ushort)(SUB161(auVar34 >> 0x27,0) & 1) << 4 |
           (ushort)(SUB161(auVar34 >> 0x2f,0) & 1) << 5 |
           (ushort)(SUB161(auVar34 >> 0x37,0) & 1) << 6 |
           (ushort)(SUB161(auVar34 >> 0x3f,0) & 1) << 7 |
           (ushort)(SUB161(auVar34 >> 0x47,0) & 1) << 8 |
           (ushort)(SUB161(auVar34 >> 0x4f,0) & 1) << 9 |
           (ushort)(SUB161(auVar34 >> 0x57,0) & 1) << 10 |
           (ushort)(SUB161(auVar34 >> 0x5f,0) & 1) << 0xb |
           (ushort)(SUB161(auVar34 >> 0x67,0) & 1) << 0xc |
           (ushort)(SUB161(auVar34 >> 0x6f,0) & 1) << 0xd |
           (ushort)(SUB161(auVar34 >> 0x77,0) & 1) << 0xe | (ushort)(auVar34[0xf] >> 7) << 0xf;
  uVar10 = (uint)uVar15;
  while (uVar15 != 0) {
    uVar2 = 0;
    for (uVar3 = uVar10; (uVar3 & 1) == 0; uVar3 = uVar3 >> 1 | 0x80000000) {
      uVar2 = uVar2 + 1;
    }
    lVar16 = param_8[6] + (uVar2 + uVar5 & param_8[7]) * -0x10;
    if (lStack_88 == *(longlong *)(lVar16 + -0x10)) {
      uVar5 = *(ulonglong *)(lVar16 + -8);
      lStack_50 = *param_9;
      lStack_68 = param_9[1];
      uVar6 = uVar5 & 0xffffffff;
      if ((((uVar6 != 0) && (uVar6 = uVar6 ^ 0xffffffff, uVar6 < *(ulonglong *)(lStack_68 + 0x10)))
          && (piVar7 = (int *)(uVar6 * 0x18 + *(longlong *)(lStack_68 + 8)),
             piVar7[4] == (int)(uVar5 >> 0x20))) &&
         (((*piVar7 != 0 &&
           (uVar5 = *(ulonglong *)(piVar7 + 2),
           (uVar5 & 0xffffffff) < *(ulonglong *)(lStack_50 + 0x38))) &&
          ((*(ulonglong *)(*(longlong *)(lStack_50 + 0x28) + (uVar5 >> 6 & 0x3ffffff) * 8) >>
            (uVar5 & 0x3f) & 1) != 0)))) {
        uStack_98 = *(undefined4 *)
                     (*(longlong *)
                       (*(longlong *)
                         (*(longlong *)(lStack_68 + 0x1a0) + 0x18 + (uVar5 >> 0x20) * 0x48) + 0x10 +
                       ~*(ulonglong *)
                         (*(longlong *)
                           (*(longlong *)(lStack_68 + 0x1a0) + 0x38 + (uVar5 >> 0x20) * 0x48) +
                         *(longlong *)(lStack_50 + 0x110) * 8) * 0x30) + 0x50 +
                     (ulonglong)(uint)~piVar7[1] * 0x58);
      }
      goto LAB_140a4de84;
    }
    uVar15 = (ushort)(uVar10 - 1) & (ushort)uVar10;
    uVar10 = CONCAT22((short)(uVar10 - 1 >> 0x10),uVar15);
  }
  auVar26[0] = -(*pcVar1 == -1);
  auVar26[1] = -(pcVar1[1] == -1);
  auVar26[2] = -(pcVar1[2] == -1);
  auVar26[3] = -(pcVar1[3] == -1);
  auVar26[4] = -(pcVar1[4] == -1);
  auVar26[5] = -(pcVar1[5] == -1);
  auVar26[6] = -(pcVar1[6] == -1);
  auVar26[7] = -(pcVar1[7] == -1);
  auVar26[8] = -(pcVar1[8] == -1);
  auVar26[9] = -(pcVar1[9] == -1);
  auVar26[10] = -(pcVar1[10] == -1);
  auVar26[0xb] = -(pcVar1[0xb] == -1);
  auVar26[0xc] = -(pcVar1[0xc] == -1);
  auVar26[0xd] = -(pcVar1[0xd] == -1);
  auVar26[0xe] = -(pcVar1[0xe] == -1);
  auVar26[0xf] = -(pcVar1[0xf] == -1);
  if ((((((((((((((((SUB161(auVar26 >> 7,0) & 1) != 0 || (SUB161(auVar26 >> 0xf,0) & 1) != 0) ||
                  (SUB161(auVar26 >> 0x17,0) & 1) != 0) || (SUB161(auVar26 >> 0x1f,0) & 1) != 0) ||
                (SUB161(auVar26 >> 0x27,0) & 1) != 0) || (SUB161(auVar26 >> 0x2f,0) & 1) != 0) ||
              (SUB161(auVar26 >> 0x37,0) & 1) != 0) || (SUB161(auVar26 >> 0x3f,0) & 1) != 0) ||
            (SUB161(auVar26 >> 0x47,0) & 1) != 0) || (SUB161(auVar26 >> 0x4f,0) & 1) != 0) ||
          (SUB161(auVar26 >> 0x57,0) & 1) != 0) || (SUB161(auVar26 >> 0x5f,0) & 1) != 0) ||
        (SUB161(auVar26 >> 0x67,0) & 1) != 0) || (SUB161(auVar26 >> 0x6f,0) & 1) != 0) ||
      (SUB161(auVar26 >> 0x77,0) & 1) != 0) || auVar26[0xf] < '\0') {
LAB_140a4de66:
    lStack_50 = *param_9;
    lStack_68 = param_9[1];
LAB_140a4de84:
    lStack_90 = lStack_88;
    uVar5 = pdb_1400af0a0(plStack_78,&lStack_90);
    lVar9 = lStack_88;
    bVar4 = (byte)(uVar5 >> 0x39);
    auVar24 = ZEXT216(CONCAT11(bVar4,bVar4));
    auVar24 = pshuflw(auVar24,auVar24,0);
    lVar16 = 0;
    do {
      uVar5 = uVar5 & uStack_60;
      auVar34 = *(undefined1 (*) [16])(lVar14 + uVar5);
      auVar35[0] = -(auVar34[0] == auVar24[0]);
      auVar35[1] = -(auVar34[1] == auVar24[1]);
      auVar35[2] = -(auVar34[2] == auVar24[2]);
      auVar35[3] = -(auVar34[3] == auVar24[3]);
      auVar35[4] = -(auVar34[4] == auVar24[4]);
      auVar35[5] = -(auVar34[5] == auVar24[5]);
      auVar35[6] = -(auVar34[6] == auVar24[6]);
      auVar35[7] = -(auVar34[7] == auVar24[7]);
      auVar35[8] = -(auVar34[8] == auVar24[0]);
      auVar35[9] = -(auVar34[9] == auVar24[1]);
      auVar35[10] = -(auVar34[10] == auVar24[2]);
      auVar35[0xb] = -(auVar34[0xb] == auVar24[3]);
      auVar35[0xc] = -(auVar34[0xc] == auVar24[4]);
      auVar35[0xd] = -(auVar34[0xd] == auVar24[5]);
      auVar35[0xe] = -(auVar34[0xe] == auVar24[6]);
      auVar35[0xf] = -(auVar34[0xf] == auVar24[7]);
      uVar15 = (ushort)(SUB161(auVar35 >> 7,0) & 1) | (ushort)(SUB161(auVar35 >> 0xf,0) & 1) << 1 |
               (ushort)(SUB161(auVar35 >> 0x17,0) & 1) << 2 |
               (ushort)(SUB161(auVar35 >> 0x1f,0) & 1) << 3 |
               (ushort)(SUB161(auVar35 >> 0x27,0) & 1) << 4 |
               (ushort)(SUB161(auVar35 >> 0x2f,0) & 1) << 5 |
               (ushort)(SUB161(auVar35 >> 0x37,0) & 1) << 6 |
               (ushort)(SUB161(auVar35 >> 0x3f,0) & 1) << 7 |
               (ushort)(SUB161(auVar35 >> 0x47,0) & 1) << 8 |
               (ushort)(SUB161(auVar35 >> 0x4f,0) & 1) << 9 |
               (ushort)(SUB161(auVar35 >> 0x57,0) & 1) << 10 |
               (ushort)(SUB161(auVar35 >> 0x5f,0) & 1) << 0xb |
               (ushort)(SUB161(auVar35 >> 0x67,0) & 1) << 0xc |
               (ushort)(SUB161(auVar35 >> 0x6f,0) & 1) << 0xd |
               (ushort)(SUB161(auVar35 >> 0x77,0) & 1) << 0xe | (ushort)(auVar35[0xf] >> 7) << 0xf;
      uVar10 = (uint)uVar15;
      while (uVar15 != 0) {
        uVar2 = 0;
        for (uVar3 = uVar10; (uVar3 & 1) == 0; uVar3 = uVar3 >> 1 | 0x80000000) {
          uVar2 = uVar2 + 1;
        }
        lVar17 = (uVar2 + uVar5 & uStack_60) * -0x2b0;
        if (lStack_88 == *(longlong *)(lVar14 + -0x2b0 + lVar17)) {
          lVar14 = lVar14 + lVar17;
          if ((*(ulonglong *)(lVar14 + -0x298) < 2) || (*(float *)(lVar14 + -0x278) <= 0.0)) {
                    /* WARNING: Subroutine does not return */
            pdb_142dc83b0(&UNK_143059e50,0x32,&UNK_14303ce00);
          }
          if (*(byte *)(lVar14 + -9) != param_11) goto LAB_140a4ddeb;
          lStack_90 = lStack_88;
          plStack_78 = (longlong *)lVar14;
          if (plStack_58[3] == 0) goto LAB_140a4e137;
          uVar5 = pdb_1400af0a0(plStack_58 + 4,&lStack_90);
          bVar4 = (byte)(uVar5 >> 0x39);
          auVar24 = ZEXT216(CONCAT11(bVar4,bVar4));
          auVar24 = pshuflw(auVar24,auVar24,0);
          lVar14 = 0;
          goto LAB_140a4dfdf;
        }
        uVar15 = (ushort)(uVar10 - 1) & (ushort)uVar10;
        uVar10 = CONCAT22((short)(uVar10 - 1 >> 0x10),uVar15);
      }
      auVar27[0] = -(auVar34[0] == -1);
      auVar27[1] = -(auVar34[1] == -1);
      auVar27[2] = -(auVar34[2] == -1);
      auVar27[3] = -(auVar34[3] == -1);
      auVar27[4] = -(auVar34[4] == -1);
      auVar27[5] = -(auVar34[5] == -1);
      auVar27[6] = -(auVar34[6] == -1);
      auVar27[7] = -(auVar34[7] == -1);
      auVar27[8] = -(auVar34[8] == -1);
      auVar27[9] = -(auVar34[9] == -1);
      auVar27[10] = -(auVar34[10] == -1);
      auVar27[0xb] = -(auVar34[0xb] == -1);
      auVar27[0xc] = -(auVar34[0xc] == -1);
      auVar27[0xd] = -(auVar34[0xd] == -1);
      auVar27[0xe] = -(auVar34[0xe] == -1);
      auVar27[0xf] = -(auVar34[0xf] == -1);
      if ((((((((((((((((SUB161(auVar27 >> 7,0) & 1) != 0 || (SUB161(auVar27 >> 0xf,0) & 1) != 0) ||
                      (SUB161(auVar27 >> 0x17,0) & 1) != 0) || (SUB161(auVar27 >> 0x1f,0) & 1) != 0)
                    || (SUB161(auVar27 >> 0x27,0) & 1) != 0) || (SUB161(auVar27 >> 0x2f,0) & 1) != 0
                   ) || (SUB161(auVar27 >> 0x37,0) & 1) != 0) ||
                 (SUB161(auVar27 >> 0x3f,0) & 1) != 0) || (SUB161(auVar27 >> 0x47,0) & 1) != 0) ||
               (SUB161(auVar27 >> 0x4f,0) & 1) != 0) || (SUB161(auVar27 >> 0x57,0) & 1) != 0) ||
             (SUB161(auVar27 >> 0x5f,0) & 1) != 0) || (SUB161(auVar27 >> 0x67,0) & 1) != 0) ||
           (SUB161(auVar27 >> 0x6f,0) & 1) != 0) || (SUB161(auVar27 >> 0x77,0) & 1) != 0) ||
          auVar27[0xf] < '\0') {
                    /* WARNING: Subroutine does not return */
        pdb_142dc8150(&UNK_14303ce18);
      }
      uVar5 = uVar5 + lVar16 + 0x10;
      lVar16 = lVar16 + 0x10;
    } while( true );
  }
  uVar5 = uVar5 + lVar9 + 0x10;
  lVar9 = lVar9 + 0x10;
  goto LAB_140a4dd6b;
LAB_140a4dfdf:
  uVar5 = uVar5 & plStack_58[1];
  pcVar1 = (char *)(*plStack_58 + uVar5);
  auVar36[0] = -(*pcVar1 == auVar24[0]);
  auVar36[1] = -(pcVar1[1] == auVar24[1]);
  auVar36[2] = -(pcVar1[2] == auVar24[2]);
  auVar36[3] = -(pcVar1[3] == auVar24[3]);
  auVar36[4] = -(pcVar1[4] == auVar24[4]);
  auVar36[5] = -(pcVar1[5] == auVar24[5]);
  auVar36[6] = -(pcVar1[6] == auVar24[6]);
  auVar36[7] = -(pcVar1[7] == auVar24[7]);
  auVar36[8] = -(pcVar1[8] == auVar24[0]);
  auVar36[9] = -(pcVar1[9] == auVar24[1]);
  auVar36[10] = -(pcVar1[10] == auVar24[2]);
  auVar36[0xb] = -(pcVar1[0xb] == auVar24[3]);
  auVar36[0xc] = -(pcVar1[0xc] == auVar24[4]);
  auVar36[0xd] = -(pcVar1[0xd] == auVar24[5]);
  auVar36[0xe] = -(pcVar1[0xe] == auVar24[6]);
  auVar36[0xf] = -(pcVar1[0xf] == auVar24[7]);
  uVar15 = (ushort)(SUB161(auVar36 >> 7,0) & 1) | (ushort)(SUB161(auVar36 >> 0xf,0) & 1) << 1 |
           (ushort)(SUB161(auVar36 >> 0x17,0) & 1) << 2 |
           (ushort)(SUB161(auVar36 >> 0x1f,0) & 1) << 3 |
           (ushort)(SUB161(auVar36 >> 0x27,0) & 1) << 4 |
           (ushort)(SUB161(auVar36 >> 0x2f,0) & 1) << 5 |
           (ushort)(SUB161(auVar36 >> 0x37,0) & 1) << 6 |
           (ushort)(SUB161(auVar36 >> 0x3f,0) & 1) << 7 |
           (ushort)(SUB161(auVar36 >> 0x47,0) & 1) << 8 |
           (ushort)(SUB161(auVar36 >> 0x4f,0) & 1) << 9 |
           (ushort)(SUB161(auVar36 >> 0x57,0) & 1) << 10 |
           (ushort)(SUB161(auVar36 >> 0x5f,0) & 1) << 0xb |
           (ushort)(SUB161(auVar36 >> 0x67,0) & 1) << 0xc |
           (ushort)(SUB161(auVar36 >> 0x6f,0) & 1) << 0xd |
           (ushort)(SUB161(auVar36 >> 0x77,0) & 1) << 0xe | (ushort)(auVar36[0xf] >> 7) << 0xf;
  uVar10 = (uint)uVar15;
  while (uVar15 != 0) {
    uVar2 = 0;
    for (uVar3 = uVar10; (uVar3 & 1) == 0; uVar3 = uVar3 >> 1 | 0x80000000) {
      uVar2 = uVar2 + 1;
    }
    lVar16 = *plStack_58 + (uVar2 + uVar5 & plStack_58[1]) * -0x10;
    if (lVar9 == *(longlong *)(lVar16 + -0x10)) {
      plVar20 = (longlong *)(lVar16 + -8);
      goto LAB_140a4e14e;
    }
    uVar15 = (ushort)(uVar10 - 1) & (ushort)uVar10;
    uVar10 = CONCAT22((short)(uVar10 - 1 >> 0x10),uVar15);
  }
  auVar28[0] = -(*pcVar1 == -1);
  auVar28[1] = -(pcVar1[1] == -1);
  auVar28[2] = -(pcVar1[2] == -1);
  auVar28[3] = -(pcVar1[3] == -1);
  auVar28[4] = -(pcVar1[4] == -1);
  auVar28[5] = -(pcVar1[5] == -1);
  auVar28[6] = -(pcVar1[6] == -1);
  auVar28[7] = -(pcVar1[7] == -1);
  auVar28[8] = -(pcVar1[8] == -1);
  auVar28[9] = -(pcVar1[9] == -1);
  auVar28[10] = -(pcVar1[10] == -1);
  auVar28[0xb] = -(pcVar1[0xb] == -1);
  auVar28[0xc] = -(pcVar1[0xc] == -1);
  auVar28[0xd] = -(pcVar1[0xd] == -1);
  auVar28[0xe] = -(pcVar1[0xe] == -1);
  auVar28[0xf] = -(pcVar1[0xf] == -1);
  if ((((((((((((((((SUB161(auVar28 >> 7,0) & 1) != 0 || (SUB161(auVar28 >> 0xf,0) & 1) != 0) ||
                  (SUB161(auVar28 >> 0x17,0) & 1) != 0) || (SUB161(auVar28 >> 0x1f,0) & 1) != 0) ||
                (SUB161(auVar28 >> 0x27,0) & 1) != 0) || (SUB161(auVar28 >> 0x2f,0) & 1) != 0) ||
              (SUB161(auVar28 >> 0x37,0) & 1) != 0) || (SUB161(auVar28 >> 0x3f,0) & 1) != 0) ||
            (SUB161(auVar28 >> 0x47,0) & 1) != 0) || (SUB161(auVar28 >> 0x4f,0) & 1) != 0) ||
          (SUB161(auVar28 >> 0x57,0) & 1) != 0) || (SUB161(auVar28 >> 0x5f,0) & 1) != 0) ||
        (SUB161(auVar28 >> 0x67,0) & 1) != 0) || (SUB161(auVar28 >> 0x6f,0) & 1) != 0) ||
      (SUB161(auVar28 >> 0x77,0) & 1) != 0) || auVar28[0xf] < '\0') goto LAB_140a4e137;
  uVar5 = uVar5 + lVar14 + 0x10;
  lVar14 = lVar14 + 0x10;
  goto LAB_140a4dfdf;
LAB_140a4e137:
  plVar20 = plStack_58 + 6;
LAB_140a4e14e:
  uStack_7c = (undefined4)*plVar20;
  lStack_90 = lVar9;
  if (param_5[3] != 0) {
    uVar5 = pdb_1400af0a0(param_5 + 4,&lStack_90);
    bVar4 = (byte)(uVar5 >> 0x39);
    auVar24 = ZEXT216(CONCAT11(bVar4,bVar4));
    auVar24 = pshuflw(auVar24,auVar24,0);
    lVar14 = 0;
    while( true ) {
      uVar5 = uVar5 & param_5[1];
      pcVar1 = (char *)(*param_5 + uVar5);
      auVar37[0] = -(*pcVar1 == auVar24[0]);
      auVar37[1] = -(pcVar1[1] == auVar24[1]);
      auVar37[2] = -(pcVar1[2] == auVar24[2]);
      auVar37[3] = -(pcVar1[3] == auVar24[3]);
      auVar37[4] = -(pcVar1[4] == auVar24[4]);
      auVar37[5] = -(pcVar1[5] == auVar24[5]);
      auVar37[6] = -(pcVar1[6] == auVar24[6]);
      auVar37[7] = -(pcVar1[7] == auVar24[7]);
      auVar37[8] = -(pcVar1[8] == auVar24[0]);
      auVar37[9] = -(pcVar1[9] == auVar24[1]);
      auVar37[10] = -(pcVar1[10] == auVar24[2]);
      auVar37[0xb] = -(pcVar1[0xb] == auVar24[3]);
      auVar37[0xc] = -(pcVar1[0xc] == auVar24[4]);
      auVar37[0xd] = -(pcVar1[0xd] == auVar24[5]);
      auVar37[0xe] = -(pcVar1[0xe] == auVar24[6]);
      auVar37[0xf] = -(pcVar1[0xf] == auVar24[7]);
      uVar15 = (ushort)(SUB161(auVar37 >> 7,0) & 1) | (ushort)(SUB161(auVar37 >> 0xf,0) & 1) << 1 |
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
               (ushort)(SUB161(auVar37 >> 0x77,0) & 1) << 0xe | (ushort)(auVar37[0xf] >> 7) << 0xf;
      uVar10 = (uint)uVar15;
      while (uVar15 != 0) {
        uVar2 = 0;
        for (uVar3 = uVar10; (uVar3 & 1) == 0; uVar3 = uVar3 >> 1 | 0x80000000) {
          uVar2 = uVar2 + 1;
        }
        lVar16 = *param_5 + (uVar2 + uVar5 & param_5[1]) * -0x10;
        if (lVar9 == *(longlong *)(lVar16 + -0x10)) {
          param_5 = (longlong *)(lVar16 + -8);
          goto LAB_140a4e21a;
        }
        uVar15 = (ushort)(uVar10 - 1) & (ushort)uVar10;
        uVar10 = CONCAT22((short)(uVar10 - 1 >> 0x10),uVar15);
      }
      auVar29[0] = -(*pcVar1 == -1);
      auVar29[1] = -(pcVar1[1] == -1);
      auVar29[2] = -(pcVar1[2] == -1);
      auVar29[3] = -(pcVar1[3] == -1);
      auVar29[4] = -(pcVar1[4] == -1);
      auVar29[5] = -(pcVar1[5] == -1);
      auVar29[6] = -(pcVar1[6] == -1);
      auVar29[7] = -(pcVar1[7] == -1);
      auVar29[8] = -(pcVar1[8] == -1);
      auVar29[9] = -(pcVar1[9] == -1);
      auVar29[10] = -(pcVar1[10] == -1);
      auVar29[0xb] = -(pcVar1[0xb] == -1);
      auVar29[0xc] = -(pcVar1[0xc] == -1);
      auVar29[0xd] = -(pcVar1[0xd] == -1);
      auVar29[0xe] = -(pcVar1[0xe] == -1);
      auVar29[0xf] = -(pcVar1[0xf] == -1);
      if ((((((((((((((((SUB161(auVar29 >> 7,0) & 1) != 0 || (SUB161(auVar29 >> 0xf,0) & 1) != 0) ||
                      (SUB161(auVar29 >> 0x17,0) & 1) != 0) || (SUB161(auVar29 >> 0x1f,0) & 1) != 0)
                    || (SUB161(auVar29 >> 0x27,0) & 1) != 0) || (SUB161(auVar29 >> 0x2f,0) & 1) != 0
                   ) || (SUB161(auVar29 >> 0x37,0) & 1) != 0) ||
                 (SUB161(auVar29 >> 0x3f,0) & 1) != 0) || (SUB161(auVar29 >> 0x47,0) & 1) != 0) ||
               (SUB161(auVar29 >> 0x4f,0) & 1) != 0) || (SUB161(auVar29 >> 0x57,0) & 1) != 0) ||
             (SUB161(auVar29 >> 0x5f,0) & 1) != 0) || (SUB161(auVar29 >> 0x67,0) & 1) != 0) ||
           (SUB161(auVar29 >> 0x6f,0) & 1) != 0) || (SUB161(auVar29 >> 0x77,0) & 1) != 0) ||
          auVar29[0xf] < '\0') break;
      uVar5 = uVar5 + lVar14 + 0x10;
      lVar14 = lVar14 + 0x10;
    }
  }
  param_5 = param_5 + 6;
LAB_140a4e21a:
  uVar21 = (undefined4)*param_5;
  lStack_90 = lVar9;
  if (param_6[3] != 0) {
    uVar5 = pdb_1400af0a0(param_6 + 4,&lStack_90);
    bVar4 = (byte)(uVar5 >> 0x39);
    auVar24 = ZEXT216(CONCAT11(bVar4,bVar4));
    auVar24 = pshuflw(auVar24,auVar24,0);
    lVar14 = 0;
    while( true ) {
      uVar5 = uVar5 & param_6[1];
      pcVar1 = (char *)(*param_6 + uVar5);
      auVar38[0] = -(*pcVar1 == auVar24[0]);
      auVar38[1] = -(pcVar1[1] == auVar24[1]);
      auVar38[2] = -(pcVar1[2] == auVar24[2]);
      auVar38[3] = -(pcVar1[3] == auVar24[3]);
      auVar38[4] = -(pcVar1[4] == auVar24[4]);
      auVar38[5] = -(pcVar1[5] == auVar24[5]);
      auVar38[6] = -(pcVar1[6] == auVar24[6]);
      auVar38[7] = -(pcVar1[7] == auVar24[7]);
      auVar38[8] = -(pcVar1[8] == auVar24[0]);
      auVar38[9] = -(pcVar1[9] == auVar24[1]);
      auVar38[10] = -(pcVar1[10] == auVar24[2]);
      auVar38[0xb] = -(pcVar1[0xb] == auVar24[3]);
      auVar38[0xc] = -(pcVar1[0xc] == auVar24[4]);
      auVar38[0xd] = -(pcVar1[0xd] == auVar24[5]);
      auVar38[0xe] = -(pcVar1[0xe] == auVar24[6]);
      auVar38[0xf] = -(pcVar1[0xf] == auVar24[7]);
      uVar15 = (ushort)(SUB161(auVar38 >> 7,0) & 1) | (ushort)(SUB161(auVar38 >> 0xf,0) & 1) << 1 |
               (ushort)(SUB161(auVar38 >> 0x17,0) & 1) << 2 |
               (ushort)(SUB161(auVar38 >> 0x1f,0) & 1) << 3 |
               (ushort)(SUB161(auVar38 >> 0x27,0) & 1) << 4 |
               (ushort)(SUB161(auVar38 >> 0x2f,0) & 1) << 5 |
               (ushort)(SUB161(auVar38 >> 0x37,0) & 1) << 6 |
               (ushort)(SUB161(auVar38 >> 0x3f,0) & 1) << 7 |
               (ushort)(SUB161(auVar38 >> 0x47,0) & 1) << 8 |
               (ushort)(SUB161(auVar38 >> 0x4f,0) & 1) << 9 |
               (ushort)(SUB161(auVar38 >> 0x57,0) & 1) << 10 |
               (ushort)(SUB161(auVar38 >> 0x5f,0) & 1) << 0xb |
               (ushort)(SUB161(auVar38 >> 0x67,0) & 1) << 0xc |
               (ushort)(SUB161(auVar38 >> 0x6f,0) & 1) << 0xd |
               (ushort)(SUB161(auVar38 >> 0x77,0) & 1) << 0xe | (ushort)(auVar38[0xf] >> 7) << 0xf;
      uVar10 = (uint)uVar15;
      while (uVar15 != 0) {
        uVar2 = 0;
        for (uVar3 = uVar10; (uVar3 & 1) == 0; uVar3 = uVar3 >> 1 | 0x80000000) {
          uVar2 = uVar2 + 1;
        }
        lVar16 = *param_6 + (uVar2 + uVar5 & param_6[1]) * -0x10;
        if (lVar9 == *(longlong *)(lVar16 + -0x10)) {
          param_6 = (longlong *)(lVar16 + -8);
          goto LAB_140a4e2f1;
        }
        uVar15 = (ushort)(uVar10 - 1) & (ushort)uVar10;
        uVar10 = CONCAT22((short)(uVar10 - 1 >> 0x10),uVar15);
      }
      auVar30[0] = -(*pcVar1 == -1);
      auVar30[1] = -(pcVar1[1] == -1);
      auVar30[2] = -(pcVar1[2] == -1);
      auVar30[3] = -(pcVar1[3] == -1);
      auVar30[4] = -(pcVar1[4] == -1);
      auVar30[5] = -(pcVar1[5] == -1);
      auVar30[6] = -(pcVar1[6] == -1);
      auVar30[7] = -(pcVar1[7] == -1);
      auVar30[8] = -(pcVar1[8] == -1);
      auVar30[9] = -(pcVar1[9] == -1);
      auVar30[10] = -(pcVar1[10] == -1);
      auVar30[0xb] = -(pcVar1[0xb] == -1);
      auVar30[0xc] = -(pcVar1[0xc] == -1);
      auVar30[0xd] = -(pcVar1[0xd] == -1);
      auVar30[0xe] = -(pcVar1[0xe] == -1);
      auVar30[0xf] = -(pcVar1[0xf] == -1);
      if ((((((((((((((((SUB161(auVar30 >> 7,0) & 1) != 0 || (SUB161(auVar30 >> 0xf,0) & 1) != 0) ||
                      (SUB161(auVar30 >> 0x17,0) & 1) != 0) || (SUB161(auVar30 >> 0x1f,0) & 1) != 0)
                    || (SUB161(auVar30 >> 0x27,0) & 1) != 0) || (SUB161(auVar30 >> 0x2f,0) & 1) != 0
                   ) || (SUB161(auVar30 >> 0x37,0) & 1) != 0) ||
                 (SUB161(auVar30 >> 0x3f,0) & 1) != 0) || (SUB161(auVar30 >> 0x47,0) & 1) != 0) ||
               (SUB161(auVar30 >> 0x4f,0) & 1) != 0) || (SUB161(auVar30 >> 0x57,0) & 1) != 0) ||
             (SUB161(auVar30 >> 0x5f,0) & 1) != 0) || (SUB161(auVar30 >> 0x67,0) & 1) != 0) ||
           (SUB161(auVar30 >> 0x6f,0) & 1) != 0) || (SUB161(auVar30 >> 0x77,0) & 1) != 0) ||
          auVar30[0xf] < '\0') break;
      uVar5 = uVar5 + lVar14 + 0x10;
      lVar14 = lVar14 + 0x10;
    }
  }
  param_6 = param_6 + 6;
LAB_140a4e2f1:
  uStack_6c = (undefined4)*param_6;
  lStack_90 = lVar9;
  if (param_7[3] != 0) {
    uVar5 = pdb_1400af0a0(param_7 + 4,&lStack_90);
    bVar4 = (byte)(uVar5 >> 0x39);
    auVar24 = ZEXT216(CONCAT11(bVar4,bVar4));
    auVar24 = pshuflw(auVar24,auVar24,0);
    lVar14 = 0;
    while( true ) {
      uVar5 = uVar5 & param_7[1];
      pcVar1 = (char *)(*param_7 + uVar5);
      auVar39[0] = -(*pcVar1 == auVar24[0]);
      auVar39[1] = -(pcVar1[1] == auVar24[1]);
      auVar39[2] = -(pcVar1[2] == auVar24[2]);
      auVar39[3] = -(pcVar1[3] == auVar24[3]);
      auVar39[4] = -(pcVar1[4] == auVar24[4]);
      auVar39[5] = -(pcVar1[5] == auVar24[5]);
      auVar39[6] = -(pcVar1[6] == auVar24[6]);
      auVar39[7] = -(pcVar1[7] == auVar24[7]);
      auVar39[8] = -(pcVar1[8] == auVar24[0]);
      auVar39[9] = -(pcVar1[9] == auVar24[1]);
      auVar39[10] = -(pcVar1[10] == auVar24[2]);
      auVar39[0xb] = -(pcVar1[0xb] == auVar24[3]);
      auVar39[0xc] = -(pcVar1[0xc] == auVar24[4]);
      auVar39[0xd] = -(pcVar1[0xd] == auVar24[5]);
      auVar39[0xe] = -(pcVar1[0xe] == auVar24[6]);
      auVar39[0xf] = -(pcVar1[0xf] == auVar24[7]);
      uVar15 = (ushort)(SUB161(auVar39 >> 7,0) & 1) | (ushort)(SUB161(auVar39 >> 0xf,0) & 1) << 1 |
               (ushort)(SUB161(auVar39 >> 0x17,0) & 1) << 2 |
               (ushort)(SUB161(auVar39 >> 0x1f,0) & 1) << 3 |
               (ushort)(SUB161(auVar39 >> 0x27,0) & 1) << 4 |
               (ushort)(SUB161(auVar39 >> 0x2f,0) & 1) << 5 |
               (ushort)(SUB161(auVar39 >> 0x37,0) & 1) << 6 |
               (ushort)(SUB161(auVar39 >> 0x3f,0) & 1) << 7 |
               (ushort)(SUB161(auVar39 >> 0x47,0) & 1) << 8 |
               (ushort)(SUB161(auVar39 >> 0x4f,0) & 1) << 9 |
               (ushort)(SUB161(auVar39 >> 0x57,0) & 1) << 10 |
               (ushort)(SUB161(auVar39 >> 0x5f,0) & 1) << 0xb |
               (ushort)(SUB161(auVar39 >> 0x67,0) & 1) << 0xc |
               (ushort)(SUB161(auVar39 >> 0x6f,0) & 1) << 0xd |
               (ushort)(SUB161(auVar39 >> 0x77,0) & 1) << 0xe | (ushort)(auVar39[0xf] >> 7) << 0xf;
      uVar10 = (uint)uVar15;
      while (uVar15 != 0) {
        uVar2 = 0;
        for (uVar3 = uVar10; (uVar3 & 1) == 0; uVar3 = uVar3 >> 1 | 0x80000000) {
          uVar2 = uVar2 + 1;
        }
        lVar16 = *param_7 + (uVar2 + uVar5 & param_7[1]) * -0x10;
        if (lVar9 == *(longlong *)(lVar16 + -0x10)) {
          param_7 = (longlong *)(lVar16 + -8);
          goto LAB_140a4e3c7;
        }
        uVar15 = (ushort)(uVar10 - 1) & (ushort)uVar10;
        uVar10 = CONCAT22((short)(uVar10 - 1 >> 0x10),uVar15);
      }
      auVar31[0] = -(*pcVar1 == -1);
      auVar31[1] = -(pcVar1[1] == -1);
      auVar31[2] = -(pcVar1[2] == -1);
      auVar31[3] = -(pcVar1[3] == -1);
      auVar31[4] = -(pcVar1[4] == -1);
      auVar31[5] = -(pcVar1[5] == -1);
      auVar31[6] = -(pcVar1[6] == -1);
      auVar31[7] = -(pcVar1[7] == -1);
      auVar31[8] = -(pcVar1[8] == -1);
      auVar31[9] = -(pcVar1[9] == -1);
      auVar31[10] = -(pcVar1[10] == -1);
      auVar31[0xb] = -(pcVar1[0xb] == -1);
      auVar31[0xc] = -(pcVar1[0xc] == -1);
      auVar31[0xd] = -(pcVar1[0xd] == -1);
      auVar31[0xe] = -(pcVar1[0xe] == -1);
      auVar31[0xf] = -(pcVar1[0xf] == -1);
      if ((((((((((((((((SUB161(auVar31 >> 7,0) & 1) != 0 || (SUB161(auVar31 >> 0xf,0) & 1) != 0) ||
                      (SUB161(auVar31 >> 0x17,0) & 1) != 0) || (SUB161(auVar31 >> 0x1f,0) & 1) != 0)
                    || (SUB161(auVar31 >> 0x27,0) & 1) != 0) || (SUB161(auVar31 >> 0x2f,0) & 1) != 0
                   ) || (SUB161(auVar31 >> 0x37,0) & 1) != 0) ||
                 (SUB161(auVar31 >> 0x3f,0) & 1) != 0) || (SUB161(auVar31 >> 0x47,0) & 1) != 0) ||
               (SUB161(auVar31 >> 0x4f,0) & 1) != 0) || (SUB161(auVar31 >> 0x57,0) & 1) != 0) ||
             (SUB161(auVar31 >> 0x5f,0) & 1) != 0) || (SUB161(auVar31 >> 0x67,0) & 1) != 0) ||
           (SUB161(auVar31 >> 0x6f,0) & 1) != 0) || (SUB161(auVar31 >> 0x77,0) & 1) != 0) ||
          auVar31[0xf] < '\0') break;
      uVar5 = uVar5 + lVar14 + 0x10;
      lVar14 = lVar14 + 0x10;
    }
  }
  param_7 = param_7 + 6;
LAB_140a4e3c7:
  uVar11 = (undefined4)*param_7;
  param_11 = *(byte *)((longlong)plStack_78 + -9);
  cVar23 = *(char *)((longlong)plStack_78 + -5);
  lStack_90 = lStack_88;
  if (lStack_48 != 0) {
    uVar5 = pdb_1400af0a0(param_8 + 10,&lStack_90);
    bVar4 = (byte)(uVar5 >> 0x39);
    auVar24 = ZEXT216(CONCAT11(bVar4,bVar4));
    auVar24 = pshuflw(auVar24,auVar24,0);
    lVar14 = 0;
    while( true ) {
      uVar5 = uVar5 & param_8[7];
      pcVar1 = (char *)(param_8[6] + uVar5);
      auVar40[0] = -(*pcVar1 == auVar24[0]);
      auVar40[1] = -(pcVar1[1] == auVar24[1]);
      auVar40[2] = -(pcVar1[2] == auVar24[2]);
      auVar40[3] = -(pcVar1[3] == auVar24[3]);
      auVar40[4] = -(pcVar1[4] == auVar24[4]);
      auVar40[5] = -(pcVar1[5] == auVar24[5]);
      auVar40[6] = -(pcVar1[6] == auVar24[6]);
      auVar40[7] = -(pcVar1[7] == auVar24[7]);
      auVar40[8] = -(pcVar1[8] == auVar24[0]);
      auVar40[9] = -(pcVar1[9] == auVar24[1]);
      auVar40[10] = -(pcVar1[10] == auVar24[2]);
      auVar40[0xb] = -(pcVar1[0xb] == auVar24[3]);
      auVar40[0xc] = -(pcVar1[0xc] == auVar24[4]);
      auVar40[0xd] = -(pcVar1[0xd] == auVar24[5]);
      auVar40[0xe] = -(pcVar1[0xe] == auVar24[6]);
      auVar40[0xf] = -(pcVar1[0xf] == auVar24[7]);
      uVar15 = (ushort)(SUB161(auVar40 >> 7,0) & 1) | (ushort)(SUB161(auVar40 >> 0xf,0) & 1) << 1 |
               (ushort)(SUB161(auVar40 >> 0x17,0) & 1) << 2 |
               (ushort)(SUB161(auVar40 >> 0x1f,0) & 1) << 3 |
               (ushort)(SUB161(auVar40 >> 0x27,0) & 1) << 4 |
               (ushort)(SUB161(auVar40 >> 0x2f,0) & 1) << 5 |
               (ushort)(SUB161(auVar40 >> 0x37,0) & 1) << 6 |
               (ushort)(SUB161(auVar40 >> 0x3f,0) & 1) << 7 |
               (ushort)(SUB161(auVar40 >> 0x47,0) & 1) << 8 |
               (ushort)(SUB161(auVar40 >> 0x4f,0) & 1) << 9 |
               (ushort)(SUB161(auVar40 >> 0x57,0) & 1) << 10 |
               (ushort)(SUB161(auVar40 >> 0x5f,0) & 1) << 0xb |
               (ushort)(SUB161(auVar40 >> 0x67,0) & 1) << 0xc |
               (ushort)(SUB161(auVar40 >> 0x6f,0) & 1) << 0xd |
               (ushort)(SUB161(auVar40 >> 0x77,0) & 1) << 0xe | (ushort)(auVar40[0xf] >> 7) << 0xf;
      uVar10 = (uint)uVar15;
      while (uVar15 != 0) {
        uVar2 = 0;
        for (uVar3 = uVar10; (uVar3 & 1) == 0; uVar3 = uVar3 >> 1 | 0x80000000) {
          uVar2 = uVar2 + 1;
        }
        lVar9 = param_8[6] + (uVar2 + uVar5 & param_8[7]) * -0x10;
        if (lStack_88 == *(longlong *)(lVar9 + -0x10)) {
          uVar5 = *(ulonglong *)(lVar9 + -8);
          uVar6 = uVar5 & 0xffffffff;
          if (((((uVar6 != 0) &&
                (uVar6 = uVar6 ^ 0xffffffff, uVar6 < *(ulonglong *)(lStack_68 + 0x10))) &&
               (piVar7 = (int *)(uVar6 * 0x18 + *(longlong *)(lStack_68 + 8)),
               piVar7[4] == (int)(uVar5 >> 0x20))) &&
              ((*piVar7 != 0 &&
               (uVar5 = *(ulonglong *)(piVar7 + 2),
               (uVar5 & 0xffffffff) < *(ulonglong *)(lStack_50 + 0x38))))) &&
             ((*(ulonglong *)(*(longlong *)(lStack_50 + 0x28) + (uVar5 >> 6 & 0x3ffffff) * 8) >>
               (uVar5 & 0x3f) & 1) != 0)) {
            lVar14 = *(longlong *)
                      (*(longlong *)
                        (*(longlong *)(lStack_68 + 0x1a0) + 0x18 + (uVar5 >> 0x20) * 0x48) + 0x10 +
                      ~*(ulonglong *)
                        (*(longlong *)
                          (*(longlong *)(lStack_68 + 0x1a0) + 0x38 + (uVar5 >> 0x20) * 0x48) +
                        *(longlong *)(lStack_50 + 0x110) * 8) * 0x30);
            lVar9 = (ulonglong)(uint)~piVar7[1] * 0x58;
            cVar22 = *(char *)(lVar14 + 0x40 + lVar9);
            bVar13 = *(byte *)(lVar14 + 0x41 + lVar9);
            uVar18 = *(undefined4 *)(lVar14 + 0x44 + lVar9);
            uVar19 = *(undefined4 *)(lVar14 + 0x48 + lVar9);
          }
          goto LAB_140a4ddeb;
        }
        uVar15 = (ushort)(uVar10 - 1) & (ushort)uVar10;
        uVar10 = CONCAT22((short)(uVar10 - 1 >> 0x10),uVar15);
      }
      auVar32[0] = -(*pcVar1 == -1);
      auVar32[1] = -(pcVar1[1] == -1);
      auVar32[2] = -(pcVar1[2] == -1);
      auVar32[3] = -(pcVar1[3] == -1);
      auVar32[4] = -(pcVar1[4] == -1);
      auVar32[5] = -(pcVar1[5] == -1);
      auVar32[6] = -(pcVar1[6] == -1);
      auVar32[7] = -(pcVar1[7] == -1);
      auVar32[8] = -(pcVar1[8] == -1);
      auVar32[9] = -(pcVar1[9] == -1);
      auVar32[10] = -(pcVar1[10] == -1);
      auVar32[0xb] = -(pcVar1[0xb] == -1);
      auVar32[0xc] = -(pcVar1[0xc] == -1);
      auVar32[0xd] = -(pcVar1[0xd] == -1);
      auVar32[0xe] = -(pcVar1[0xe] == -1);
      auVar32[0xf] = -(pcVar1[0xf] == -1);
      if ((((((((((((((((SUB161(auVar32 >> 7,0) & 1) != 0 || (SUB161(auVar32 >> 0xf,0) & 1) != 0) ||
                      (SUB161(auVar32 >> 0x17,0) & 1) != 0) || (SUB161(auVar32 >> 0x1f,0) & 1) != 0)
                    || (SUB161(auVar32 >> 0x27,0) & 1) != 0) || (SUB161(auVar32 >> 0x2f,0) & 1) != 0
                   ) || (SUB161(auVar32 >> 0x37,0) & 1) != 0) ||
                 (SUB161(auVar32 >> 0x3f,0) & 1) != 0) || (SUB161(auVar32 >> 0x47,0) & 1) != 0) ||
               (SUB161(auVar32 >> 0x4f,0) & 1) != 0) || (SUB161(auVar32 >> 0x57,0) & 1) != 0) ||
             (SUB161(auVar32 >> 0x5f,0) & 1) != 0) || (SUB161(auVar32 >> 0x67,0) & 1) != 0) ||
           (SUB161(auVar32 >> 0x6f,0) & 1) != 0) || (SUB161(auVar32 >> 0x77,0) & 1) != 0) ||
          auVar32[0xf] < '\0') break;
      uVar5 = uVar5 + lVar14 + 0x10;
      lVar14 = lVar14 + 0x10;
    }
  }
LAB_140a4ddeb:
  uVar12 = 0;
  uVar8 = uStack_7c;
  if (cVar22 == '\0') {
    bVar4 = cVar23 == '\x02' | param_11;
    if (bVar4 != 0) {
      uVar8 = uVar11;
    }
  }
  else {
    bVar4 = 0;
    if (cVar22 != '\x01') {
      bVar4 = bVar13;
      uVar12 = uVar19;
      uVar8 = uVar18;
    }
  }
  *param_1 = uStack_7c;
  param_1[1] = uStack_98;
  *(char *)(param_1 + 8) = cVar23;
  *(byte *)((longlong)param_1 + 0x21) = param_11;
  param_1[2] = uVar21;
  param_1[3] = uStack_6c;
  param_1[4] = uVar11;
  *(undefined1 *)(param_1 + 5) = 2;
  *(byte *)((longlong)param_1 + 0x15) = bVar4;
  param_1[6] = uVar8;
  param_1[7] = uVar12;
  return param_1;
}

