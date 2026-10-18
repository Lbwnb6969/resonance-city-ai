// VA 0x140a4f9c0, PDB extent 1098 bytes
// country_core::asset_libraries::vao_library::AssetVAOLibrary::add
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/asset_libraries/vao_library.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: country_core::asset_libraries::vao_library::AssetVAOLibrary::add
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/asset_libraries/vao_library.rs
   Extent: 1098 */

undefined8
pdb_140a4f9c0(longlong param_1,undefined8 param_2,longlong param_3,longlong param_4,longlong param_5
             ,uint param_6,undefined8 param_7,undefined8 param_8)

{
  char *pcVar1;
  undefined8 *puVar2;
  char cVar3;
  undefined1 (*pauVar4) [16];
  uint uVar5;
  undefined8 uVar6;
  uint uVar7;
  ulonglong uVar8;
  longlong *plVar9;
  longlong lVar10;
  byte bVar11;
  ulonglong uVar12;
  longlong lVar13;
  uint uVar14;
  uint uVar15;
  ushort uVar16;
  longlong lVar17;
  longlong lVar18;
  byte bVar19;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  longlong lStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  longlong lStack_70;
  longlong lStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uVar7 = param_6;
  lStack_98 = param_4;
  uVar8 = pdb_1400af0a0(param_1 + 0x50);
  lVar18 = *(longlong *)(param_1 + 0x30);
  bVar11 = (byte)(uVar8 >> 0x38);
  bVar19 = bVar11 >> 1;
  auVar20 = ZEXT216(CONCAT11(bVar19,bVar19));
  auVar20 = pshuflw(auVar20,auVar20,0);
  lVar10 = 0;
  uVar12 = uVar8;
  do {
    uVar12 = uVar12 & *(ulonglong *)(param_1 + 0x38);
    pcVar1 = (char *)(lVar18 + uVar12);
    auVar23[0] = -(*pcVar1 == auVar20[0]);
    auVar23[1] = -(pcVar1[1] == auVar20[1]);
    auVar23[2] = -(pcVar1[2] == auVar20[2]);
    auVar23[3] = -(pcVar1[3] == auVar20[3]);
    auVar23[4] = -(pcVar1[4] == auVar20[4]);
    auVar23[5] = -(pcVar1[5] == auVar20[5]);
    auVar23[6] = -(pcVar1[6] == auVar20[6]);
    auVar23[7] = -(pcVar1[7] == auVar20[7]);
    auVar23[8] = -(pcVar1[8] == auVar20[0]);
    auVar23[9] = -(pcVar1[9] == auVar20[1]);
    auVar23[10] = -(pcVar1[10] == auVar20[2]);
    auVar23[0xb] = -(pcVar1[0xb] == auVar20[3]);
    auVar23[0xc] = -(pcVar1[0xc] == auVar20[4]);
    auVar23[0xd] = -(pcVar1[0xd] == auVar20[5]);
    auVar23[0xe] = -(pcVar1[0xe] == auVar20[6]);
    auVar23[0xf] = -(pcVar1[0xf] == auVar20[7]);
    uVar16 = (ushort)(SUB161(auVar23 >> 7,0) & 1) | (ushort)(SUB161(auVar23 >> 0xf,0) & 1) << 1 |
             (ushort)(SUB161(auVar23 >> 0x17,0) & 1) << 2 |
             (ushort)(SUB161(auVar23 >> 0x1f,0) & 1) << 3 |
             (ushort)(SUB161(auVar23 >> 0x27,0) & 1) << 4 |
             (ushort)(SUB161(auVar23 >> 0x2f,0) & 1) << 5 |
             (ushort)(SUB161(auVar23 >> 0x37,0) & 1) << 6 |
             (ushort)(SUB161(auVar23 >> 0x3f,0) & 1) << 7 |
             (ushort)(SUB161(auVar23 >> 0x47,0) & 1) << 8 |
             (ushort)(SUB161(auVar23 >> 0x4f,0) & 1) << 9 |
             (ushort)(SUB161(auVar23 >> 0x57,0) & 1) << 10 |
             (ushort)(SUB161(auVar23 >> 0x5f,0) & 1) << 0xb |
             (ushort)(SUB161(auVar23 >> 0x67,0) & 1) << 0xc |
             (ushort)(SUB161(auVar23 >> 0x6f,0) & 1) << 0xd |
             (ushort)(SUB161(auVar23 >> 0x77,0) & 1) << 0xe | (ushort)(auVar23[0xf] >> 7) << 0xf;
    uVar14 = (uint)uVar16;
    while (uVar16 != 0) {
      uVar15 = 0;
      for (uVar5 = uVar14; (uVar5 & 1) == 0; uVar5 = uVar5 >> 1 | 0x80000000) {
        uVar15 = uVar15 + 1;
      }
      lVar17 = (uVar15 + uVar12 & *(ulonglong *)(param_1 + 0x38)) * -0x38;
      if (*(longlong *)(lVar18 + -0x38 + lVar17) == param_4) {
        lVar18 = lVar18 + lVar17;
        lVar10 = *(longlong *)(lVar18 + -0x18);
        goto joined_r0x000140a4fa94;
      }
      uVar16 = (ushort)(uVar14 - 1) & (ushort)uVar14;
      uVar14 = CONCAT22((short)(uVar14 - 1 >> 0x10),uVar16);
    }
    auVar21[0] = -(*pcVar1 == -1);
    auVar21[1] = -(pcVar1[1] == -1);
    auVar21[2] = -(pcVar1[2] == -1);
    auVar21[3] = -(pcVar1[3] == -1);
    auVar21[4] = -(pcVar1[4] == -1);
    auVar21[5] = -(pcVar1[5] == -1);
    auVar21[6] = -(pcVar1[6] == -1);
    auVar21[7] = -(pcVar1[7] == -1);
    auVar21[8] = -(pcVar1[8] == -1);
    auVar21[9] = -(pcVar1[9] == -1);
    auVar21[10] = -(pcVar1[10] == -1);
    auVar21[0xb] = -(pcVar1[0xb] == -1);
    auVar21[0xc] = -(pcVar1[0xc] == -1);
    auVar21[0xd] = -(pcVar1[0xd] == -1);
    auVar21[0xe] = -(pcVar1[0xe] == -1);
    auVar21[0xf] = -(pcVar1[0xf] == -1);
    uVar16 = (ushort)(SUB161(auVar21 >> 7,0) & 1) | (ushort)(SUB161(auVar21 >> 0xf,0) & 1) << 1 |
             (ushort)(SUB161(auVar21 >> 0x17,0) & 1) << 2 |
             (ushort)(SUB161(auVar21 >> 0x1f,0) & 1) << 3 |
             (ushort)(SUB161(auVar21 >> 0x27,0) & 1) << 4 |
             (ushort)(SUB161(auVar21 >> 0x2f,0) & 1) << 5 |
             (ushort)(SUB161(auVar21 >> 0x37,0) & 1) << 6 |
             (ushort)(SUB161(auVar21 >> 0x3f,0) & 1) << 7 |
             (ushort)(SUB161(auVar21 >> 0x47,0) & 1) << 8 |
             (ushort)(SUB161(auVar21 >> 0x4f,0) & 1) << 9 |
             (ushort)(SUB161(auVar21 >> 0x57,0) & 1) << 10 |
             (ushort)(SUB161(auVar21 >> 0x5f,0) & 1) << 0xb |
             (ushort)(SUB161(auVar21 >> 0x67,0) & 1) << 0xc |
             (ushort)(SUB161(auVar21 >> 0x6f,0) & 1) << 0xd |
             (ushort)(SUB161(auVar21 >> 0x77,0) & 1) << 0xe | (ushort)(auVar21[0xf] >> 7) << 0xf;
    if (uVar16 != 0) {
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar10 = 1;
        pdb_142dabf50(param_1 + 0x30,1,param_1 + 0x50,CONCAT71((uint7)(byte)(uVar16 >> 8),1));
        plVar9 = (longlong *)pdb_140f3bda0();
        cVar3 = (char)plVar9[2];
      }
      else {
        plVar9 = (longlong *)pdb_140f3bda0();
        cVar3 = (char)plVar9[2];
      }
      if (cVar3 == '\x01') {
        lVar17 = *plVar9;
        lVar10 = plVar9[1];
      }
      else {
        lVar17 = pdb_140f4fd10();
        plVar9[1] = lVar10;
        *(undefined1 *)(plVar9 + 2) = 1;
      }
      *plVar9 = lVar17 + 1;
      pauVar4 = *(undefined1 (**) [16])(param_1 + 0x30);
      uVar12 = *(ulonglong *)(param_1 + 0x38);
      uVar8 = uVar8 & uVar12;
      auVar20 = *(undefined1 (*) [16])(*pauVar4 + uVar8);
      uVar16 = (ushort)(SUB161(auVar20 >> 7,0) & 1) | (ushort)(SUB161(auVar20 >> 0xf,0) & 1) << 1 |
               (ushort)(SUB161(auVar20 >> 0x17,0) & 1) << 2 |
               (ushort)(SUB161(auVar20 >> 0x1f,0) & 1) << 3 |
               (ushort)(SUB161(auVar20 >> 0x27,0) & 1) << 4 |
               (ushort)(SUB161(auVar20 >> 0x2f,0) & 1) << 5 |
               (ushort)(SUB161(auVar20 >> 0x37,0) & 1) << 6 |
               (ushort)(SUB161(auVar20 >> 0x3f,0) & 1) << 7 |
               (ushort)(SUB161(auVar20 >> 0x47,0) & 1) << 8 |
               (ushort)(SUB161(auVar20 >> 0x4f,0) & 1) << 9 |
               (ushort)(SUB161(auVar20 >> 0x57,0) & 1) << 10 |
               (ushort)(SUB161(auVar20 >> 0x5f,0) & 1) << 0xb |
               (ushort)(SUB161(auVar20 >> 0x67,0) & 1) << 0xc |
               (ushort)(SUB161(auVar20 >> 0x6f,0) & 1) << 0xd |
               (ushort)(SUB161(auVar20 >> 0x77,0) & 1) << 0xe |
               (ushort)(byte)(auVar20[0xf] >> 7) << 0xf;
      uVar14 = (uint)uVar16;
      if (uVar16 == 0) {
        lVar18 = 0x10;
        do {
          uVar8 = uVar8 + lVar18 & uVar12;
          auVar20 = *(undefined1 (*) [16])(*pauVar4 + uVar8);
          lVar18 = lVar18 + 0x10;
          uVar14 = (uint)(ushort)((ushort)(SUB161(auVar20 >> 7,0) & 1) |
                                  (ushort)(SUB161(auVar20 >> 0xf,0) & 1) << 1 |
                                  (ushort)(SUB161(auVar20 >> 0x17,0) & 1) << 2 |
                                  (ushort)(SUB161(auVar20 >> 0x1f,0) & 1) << 3 |
                                  (ushort)(SUB161(auVar20 >> 0x27,0) & 1) << 4 |
                                  (ushort)(SUB161(auVar20 >> 0x2f,0) & 1) << 5 |
                                  (ushort)(SUB161(auVar20 >> 0x37,0) & 1) << 6 |
                                  (ushort)(SUB161(auVar20 >> 0x3f,0) & 1) << 7 |
                                  (ushort)(SUB161(auVar20 >> 0x47,0) & 1) << 8 |
                                  (ushort)(SUB161(auVar20 >> 0x4f,0) & 1) << 9 |
                                  (ushort)(SUB161(auVar20 >> 0x57,0) & 1) << 10 |
                                  (ushort)(SUB161(auVar20 >> 0x5f,0) & 1) << 0xb |
                                  (ushort)(SUB161(auVar20 >> 0x67,0) & 1) << 0xc |
                                  (ushort)(SUB161(auVar20 >> 0x6f,0) & 1) << 0xd |
                                  (ushort)(SUB161(auVar20 >> 0x77,0) & 1) << 0xe |
                                 (ushort)(byte)(auVar20[0xf] >> 7) << 0xf);
        } while (uVar14 == 0);
      }
      uVar15 = 0;
      for (; (uVar14 & 1) == 0; uVar14 = uVar14 >> 1 | 0x80000000) {
        uVar15 = uVar15 + 1;
      }
      uVar8 = uVar15 + uVar8 & uVar12;
      bVar19 = (*pauVar4)[uVar8];
      if (-1 < (char)bVar19) {
        auVar20 = *pauVar4;
        uVar14 = 0;
        for (uVar15 = (uint)(ushort)((ushort)(SUB161(auVar20 >> 7,0) & 1) |
                                     (ushort)(SUB161(auVar20 >> 0xf,0) & 1) << 1 |
                                     (ushort)(SUB161(auVar20 >> 0x17,0) & 1) << 2 |
                                     (ushort)(SUB161(auVar20 >> 0x1f,0) & 1) << 3 |
                                     (ushort)(SUB161(auVar20 >> 0x27,0) & 1) << 4 |
                                     (ushort)(SUB161(auVar20 >> 0x2f,0) & 1) << 5 |
                                     (ushort)(SUB161(auVar20 >> 0x37,0) & 1) << 6 |
                                     (ushort)(SUB161(auVar20 >> 0x3f,0) & 1) << 7 |
                                     (ushort)(SUB161(auVar20 >> 0x47,0) & 1) << 8 |
                                     (ushort)(SUB161(auVar20 >> 0x4f,0) & 1) << 9 |
                                     (ushort)(SUB161(auVar20 >> 0x57,0) & 1) << 10 |
                                     (ushort)(SUB161(auVar20 >> 0x5f,0) & 1) << 0xb |
                                     (ushort)(SUB161(auVar20 >> 0x67,0) & 1) << 0xc |
                                     (ushort)(SUB161(auVar20 >> 0x6f,0) & 1) << 0xd |
                                     (ushort)(SUB161(auVar20 >> 0x77,0) & 1) << 0xe |
                                    (ushort)(byte)(auVar20[0xf] >> 7) << 0xf); (uVar15 & 1) == 0;
            uVar15 = uVar15 >> 1 | 0x80000000) {
          uVar14 = uVar14 + 1;
        }
        uVar8 = (ulonglong)uVar14;
        bVar19 = (*pauVar4)[uVar8];
      }
      bVar11 = bVar11 >> 1;
      (*pauVar4)[uVar8] = bVar11;
      pauVar4[1][uVar8 - 0x10 & uVar12] = bVar11;
      lVar13 = uVar8 * -0x38;
      lVar18 = (longlong)pauVar4 + lVar13;
      *(longlong *)((longlong)pauVar4 + lVar13 + -0x38) = param_4;
      uVar6 = _UNK_14303de78;
      puVar2 = (undefined8 *)((longlong)pauVar4 + lVar13 + -0x30);
      *puVar2 = _DAT_14303de70;
      puVar2[1] = uVar6;
      uVar6 = _UNK_14303de88;
      puVar2 = (undefined8 *)((longlong)pauVar4 + lVar13 + -0x20);
      *puVar2 = _DAT_14303de80;
      puVar2[1] = uVar6;
      *(longlong *)((longlong)pauVar4 + lVar13 + -0x10) = lVar17;
      *(longlong *)((longlong)pauVar4 + lVar13 + -8) = lVar10;
      lVar10 = *(longlong *)(param_1 + 0x48) - _UNK_142e47bf8;
      *(ulonglong *)(param_1 + 0x40) =
           *(longlong *)(param_1 + 0x40) - ((ulonglong)bVar19 & 0xffffffffffffff01);
      *(longlong *)(param_1 + 0x48) = lVar10;
      lVar10 = *(longlong *)(lVar18 + -0x18);
joined_r0x000140a4fa94:
      if (lVar10 != 0) {
        uVar12 = pdb_1400aede0(lVar18 + -0x10,&param_6);
        bVar11 = (byte)(uVar12 >> 0x39);
        auVar20 = ZEXT216(CONCAT11(bVar11,bVar11));
        auVar20 = pshuflw(auVar20,auVar20,0);
        lVar10 = 0;
        while( true ) {
          uVar12 = uVar12 & *(ulonglong *)(lVar18 + -0x28);
          pcVar1 = (char *)(*(longlong *)(lVar18 + -0x30) + uVar12);
          auVar24[0] = -(*pcVar1 == auVar20[0]);
          auVar24[1] = -(pcVar1[1] == auVar20[1]);
          auVar24[2] = -(pcVar1[2] == auVar20[2]);
          auVar24[3] = -(pcVar1[3] == auVar20[3]);
          auVar24[4] = -(pcVar1[4] == auVar20[4]);
          auVar24[5] = -(pcVar1[5] == auVar20[5]);
          auVar24[6] = -(pcVar1[6] == auVar20[6]);
          auVar24[7] = -(pcVar1[7] == auVar20[7]);
          auVar24[8] = -(pcVar1[8] == auVar20[0]);
          auVar24[9] = -(pcVar1[9] == auVar20[1]);
          auVar24[10] = -(pcVar1[10] == auVar20[2]);
          auVar24[0xb] = -(pcVar1[0xb] == auVar20[3]);
          auVar24[0xc] = -(pcVar1[0xc] == auVar20[4]);
          auVar24[0xd] = -(pcVar1[0xd] == auVar20[5]);
          auVar24[0xe] = -(pcVar1[0xe] == auVar20[6]);
          auVar24[0xf] = -(pcVar1[0xf] == auVar20[7]);
          uVar16 = (ushort)(SUB161(auVar24 >> 7,0) & 1) |
                   (ushort)(SUB161(auVar24 >> 0xf,0) & 1) << 1 |
                   (ushort)(SUB161(auVar24 >> 0x17,0) & 1) << 2 |
                   (ushort)(SUB161(auVar24 >> 0x1f,0) & 1) << 3 |
                   (ushort)(SUB161(auVar24 >> 0x27,0) & 1) << 4 |
                   (ushort)(SUB161(auVar24 >> 0x2f,0) & 1) << 5 |
                   (ushort)(SUB161(auVar24 >> 0x37,0) & 1) << 6 |
                   (ushort)(SUB161(auVar24 >> 0x3f,0) & 1) << 7 |
                   (ushort)(SUB161(auVar24 >> 0x47,0) & 1) << 8 |
                   (ushort)(SUB161(auVar24 >> 0x4f,0) & 1) << 9 |
                   (ushort)(SUB161(auVar24 >> 0x57,0) & 1) << 10 |
                   (ushort)(SUB161(auVar24 >> 0x5f,0) & 1) << 0xb |
                   (ushort)(SUB161(auVar24 >> 0x67,0) & 1) << 0xc |
                   (ushort)(SUB161(auVar24 >> 0x6f,0) & 1) << 0xd |
                   (ushort)(SUB161(auVar24 >> 0x77,0) & 1) << 0xe |
                   (ushort)(auVar24[0xf] >> 7) << 0xf;
          uVar14 = (uint)uVar16;
          while (uVar16 != 0) {
            uVar15 = 0;
            for (uVar5 = uVar14; (uVar5 & 1) == 0; uVar5 = uVar5 >> 1 | 0x80000000) {
              uVar15 = uVar15 + 1;
            }
            if (uVar7 == *(uint *)(*(longlong *)(lVar18 + -0x30) +
                                   (uVar15 + uVar12 & *(ulonglong *)(lVar18 + -0x28)) * -0x10 +
                                  -0x10)) {
              return 0;
            }
            uVar16 = (ushort)(uVar14 - 1) & (ushort)uVar14;
            uVar14 = CONCAT22((short)(uVar14 - 1 >> 0x10),uVar16);
          }
          auVar22[0] = -(*pcVar1 == -1);
          auVar22[1] = -(pcVar1[1] == -1);
          auVar22[2] = -(pcVar1[2] == -1);
          auVar22[3] = -(pcVar1[3] == -1);
          auVar22[4] = -(pcVar1[4] == -1);
          auVar22[5] = -(pcVar1[5] == -1);
          auVar22[6] = -(pcVar1[6] == -1);
          auVar22[7] = -(pcVar1[7] == -1);
          auVar22[8] = -(pcVar1[8] == -1);
          auVar22[9] = -(pcVar1[9] == -1);
          auVar22[10] = -(pcVar1[10] == -1);
          auVar22[0xb] = -(pcVar1[0xb] == -1);
          auVar22[0xc] = -(pcVar1[0xc] == -1);
          auVar22[0xd] = -(pcVar1[0xd] == -1);
          auVar22[0xe] = -(pcVar1[0xe] == -1);
          auVar22[0xf] = -(pcVar1[0xf] == -1);
          if ((((((((((((((((SUB161(auVar22 >> 7,0) & 1) != 0 || (SUB161(auVar22 >> 0xf,0) & 1) != 0
                           ) || (SUB161(auVar22 >> 0x17,0) & 1) != 0) ||
                         (SUB161(auVar22 >> 0x1f,0) & 1) != 0) ||
                        (SUB161(auVar22 >> 0x27,0) & 1) != 0) ||
                       (SUB161(auVar22 >> 0x2f,0) & 1) != 0) || (SUB161(auVar22 >> 0x37,0) & 1) != 0
                      ) || (SUB161(auVar22 >> 0x3f,0) & 1) != 0) ||
                    (SUB161(auVar22 >> 0x47,0) & 1) != 0) || (SUB161(auVar22 >> 0x4f,0) & 1) != 0)
                  || (SUB161(auVar22 >> 0x57,0) & 1) != 0) || (SUB161(auVar22 >> 0x5f,0) & 1) != 0)
                || (SUB161(auVar22 >> 0x67,0) & 1) != 0) || (SUB161(auVar22 >> 0x6f,0) & 1) != 0) ||
              (SUB161(auVar22 >> 0x77,0) & 1) != 0) || auVar22[0xf] < '\0') break;
          uVar12 = uVar12 + lVar10 + 0x10;
          lVar10 = lVar10 + 0x10;
        }
      }
      lVar10 = _DAT_143cb3070;
      LOCK();
      _DAT_143cb3070 = _DAT_143cb3070 + 1;
      UNLOCK();
      uVar12 = (ulonglong)uVar7;
      if (*(ulonglong *)(param_5 + 0x10) <= uVar12) {
                    /* WARNING: Subroutine does not return */
        pdb_142dc81f2(uVar12,*(ulonglong *)(param_5 + 0x10),&UNK_14303e5a0);
      }
      lVar17 = *(longlong *)(param_5 + 8);
      lStack_70 = param_4;
      pdb_140a2b260(param_3,param_4);
      lVar13 = pdb_140bf4880(param_3 + 0x20,&lStack_70);
      if (lVar13 == 0) {
        pdb_142de9270(&UNK_14303d434,0x20);
      }
      else if (*(longlong *)(lVar13 + 0x10) == 0) {
        pdb_142de9270(&UNK_14303d425,0xf);
      }
      else {
        pdb_140b90bc0(&lStack_98,param_2,lVar13,uVar12 * 0x18 + lVar17,param_7,param_8);
        if (!SBORROW8(0,lStack_98)) {
          uStack_48 = uStack_78;
          uStack_58 = uStack_88;
          uStack_50 = uStack_80;
          lStack_68 = lStack_98;
          uStack_60 = uStack_90;
          pdb_1417b2d80(&lStack_98,param_1,lVar10,&lStack_68);
          if (!SBORROW8(0,lStack_98)) {
            pdb_140989a40(&lStack_98);
          }
          pdb_1417b9a70(lVar18 + -0x30,uVar7,lVar10);
          return 0;
        }
      }
      return 1;
    }
    uVar12 = uVar12 + lVar10 + 0x10;
    lVar10 = lVar10 + 0x10;
  } while( true );
}

