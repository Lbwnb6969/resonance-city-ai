// VA 0x140a58020, PDB extent 612 bytes
// country_core::resources::render::mesh_atlas_library::MeshAtlasLibrary::clear_world_subset_atlas
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/render/mesh_atlas_library.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::resources::render::mesh_atlas_library::MeshAtlasLibrary::clear_world_subset_atlas
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/render/mesh_atlas_library.rs
   Extent: 612 */

void pdb_140a58020(longlong *param_1,char param_2)

{
  undefined1 auVar1 [16];
  int iVar2;
  uint uVar3;
  ulonglong uVar4;
  longlong lVar5;
  undefined1 (*pauVar6) [16];
  longlong lVar7;
  undefined1 (*pauVar8) [16];
  ulonglong uVar9;
  ulonglong uVar10;
  ushort uVar11;
  uint uVar12;
  longlong lVar13;
  uint uVar14;
  ulonglong uVar15;
  byte bVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  char cStack_31;
  
  if (param_1[3] != 0) {
    cStack_31 = param_2;
    uVar4 = pdb_1417c4b30(param_1 + 4,&cStack_31);
    lVar5 = *param_1;
    bVar16 = (byte)(uVar4 >> 0x39);
    auVar17 = ZEXT216(CONCAT11(bVar16,bVar16));
    auVar17 = pshuflw(auVar17,auVar17,0);
    lVar7 = 0;
    while( true ) {
      uVar4 = uVar4 & param_1[1];
      auVar1 = *(undefined1 (*) [16])(lVar5 + uVar4);
      auVar19[0] = -(auVar1[0] == auVar17[0]);
      auVar19[1] = -(auVar1[1] == auVar17[1]);
      auVar19[2] = -(auVar1[2] == auVar17[2]);
      auVar19[3] = -(auVar1[3] == auVar17[3]);
      auVar19[4] = -(auVar1[4] == auVar17[4]);
      auVar19[5] = -(auVar1[5] == auVar17[5]);
      auVar19[6] = -(auVar1[6] == auVar17[6]);
      auVar19[7] = -(auVar1[7] == auVar17[7]);
      auVar19[8] = -(auVar1[8] == auVar17[0]);
      auVar19[9] = -(auVar1[9] == auVar17[1]);
      auVar19[10] = -(auVar1[10] == auVar17[2]);
      auVar19[0xb] = -(auVar1[0xb] == auVar17[3]);
      auVar19[0xc] = -(auVar1[0xc] == auVar17[4]);
      auVar19[0xd] = -(auVar1[0xd] == auVar17[5]);
      auVar19[0xe] = -(auVar1[0xe] == auVar17[6]);
      auVar19[0xf] = -(auVar1[0xf] == auVar17[7]);
      uVar11 = (ushort)(SUB161(auVar19 >> 7,0) & 1) | (ushort)(SUB161(auVar19 >> 0xf,0) & 1) << 1 |
               (ushort)(SUB161(auVar19 >> 0x17,0) & 1) << 2 |
               (ushort)(SUB161(auVar19 >> 0x1f,0) & 1) << 3 |
               (ushort)(SUB161(auVar19 >> 0x27,0) & 1) << 4 |
               (ushort)(SUB161(auVar19 >> 0x2f,0) & 1) << 5 |
               (ushort)(SUB161(auVar19 >> 0x37,0) & 1) << 6 |
               (ushort)(SUB161(auVar19 >> 0x3f,0) & 1) << 7 |
               (ushort)(SUB161(auVar19 >> 0x47,0) & 1) << 8 |
               (ushort)(SUB161(auVar19 >> 0x4f,0) & 1) << 9 |
               (ushort)(SUB161(auVar19 >> 0x57,0) & 1) << 10 |
               (ushort)(SUB161(auVar19 >> 0x5f,0) & 1) << 0xb |
               (ushort)(SUB161(auVar19 >> 0x67,0) & 1) << 0xc |
               (ushort)(SUB161(auVar19 >> 0x6f,0) & 1) << 0xd |
               (ushort)(SUB161(auVar19 >> 0x77,0) & 1) << 0xe | (ushort)(auVar19[0xf] >> 7) << 0xf;
      uVar12 = (uint)uVar11;
      while (uVar11 != 0) {
        uVar14 = 0;
        for (uVar3 = uVar12; (uVar3 & 1) == 0; uVar3 = uVar3 >> 1 | 0x80000000) {
          uVar14 = uVar14 + 1;
        }
        lVar13 = (uVar14 + uVar4 & param_1[1]) * -0xf0;
        if (param_2 == *(char *)(lVar5 + -0xf0 + lVar13)) {
          lVar5 = lVar5 + lVar13;
          pdb_140cac440(lVar5 + -0xa0);
          *(undefined8 *)(lVar5 + -200) = 0;
          if (*(longlong *)(lVar5 + -0x10) != 0) {
            uVar4 = *(ulonglong *)(lVar5 + -0x20);
            if (uVar4 == 0) {
              uVar10 = 0;
            }
            else {
              pub_142e32780(*(undefined8 *)(lVar5 + -0x28),0xff,uVar4 + 0x11);
              uVar10 = (uVar4 + 1 & 0xfffffffffffffff8) - (uVar4 + 1 >> 3);
              if (uVar4 < 8) {
                uVar10 = uVar4;
              }
            }
            *(undefined8 *)(lVar5 + -0x10) = 0;
            *(ulonglong *)(lVar5 + -0x18) = uVar10;
          }
          *(undefined8 *)(lVar5 + -0x48) = 0;
          *(undefined8 *)(lVar5 + -0x30) = 0;
          *(undefined1 *)(lVar5 + -8) = 0;
          goto LAB_140a58156;
        }
        uVar11 = (ushort)(uVar12 - 1) & (ushort)uVar12;
        uVar12 = CONCAT22((short)(uVar12 - 1 >> 0x10),uVar11);
      }
      auVar18[0] = -(auVar1[0] == -1);
      auVar18[1] = -(auVar1[1] == -1);
      auVar18[2] = -(auVar1[2] == -1);
      auVar18[3] = -(auVar1[3] == -1);
      auVar18[4] = -(auVar1[4] == -1);
      auVar18[5] = -(auVar1[5] == -1);
      auVar18[6] = -(auVar1[6] == -1);
      auVar18[7] = -(auVar1[7] == -1);
      auVar18[8] = -(auVar1[8] == -1);
      auVar18[9] = -(auVar1[9] == -1);
      auVar18[10] = -(auVar1[10] == -1);
      auVar18[0xb] = -(auVar1[0xb] == -1);
      auVar18[0xc] = -(auVar1[0xc] == -1);
      auVar18[0xd] = -(auVar1[0xd] == -1);
      auVar18[0xe] = -(auVar1[0xe] == -1);
      auVar18[0xf] = -(auVar1[0xf] == -1);
      if ((((((((((((((((SUB161(auVar18 >> 7,0) & 1) != 0 || (SUB161(auVar18 >> 0xf,0) & 1) != 0) ||
                      (SUB161(auVar18 >> 0x17,0) & 1) != 0) || (SUB161(auVar18 >> 0x1f,0) & 1) != 0)
                    || (SUB161(auVar18 >> 0x27,0) & 1) != 0) || (SUB161(auVar18 >> 0x2f,0) & 1) != 0
                   ) || (SUB161(auVar18 >> 0x37,0) & 1) != 0) ||
                 (SUB161(auVar18 >> 0x3f,0) & 1) != 0) || (SUB161(auVar18 >> 0x47,0) & 1) != 0) ||
               (SUB161(auVar18 >> 0x4f,0) & 1) != 0) || (SUB161(auVar18 >> 0x57,0) & 1) != 0) ||
             (SUB161(auVar18 >> 0x5f,0) & 1) != 0) || (SUB161(auVar18 >> 0x67,0) & 1) != 0) ||
           (SUB161(auVar18 >> 0x6f,0) & 1) != 0) || (SUB161(auVar18 >> 0x77,0) & 1) != 0) ||
          auVar18[0xf] < '\0') break;
      uVar4 = uVar4 + lVar7 + 0x10;
      lVar7 = lVar7 + 0x10;
    }
  }
LAB_140a58156:
  lVar5 = param_1[9];
  if (lVar5 != 0) {
    pauVar6 = (undefined1 (*) [16])param_1[6];
    auVar17 = *pauVar6;
    uVar12 = ~(uint)(ushort)((ushort)(SUB161(auVar17 >> 7,0) & 1) |
                             (ushort)(SUB161(auVar17 >> 0xf,0) & 1) << 1 |
                             (ushort)(SUB161(auVar17 >> 0x17,0) & 1) << 2 |
                             (ushort)(SUB161(auVar17 >> 0x1f,0) & 1) << 3 |
                             (ushort)(SUB161(auVar17 >> 0x27,0) & 1) << 4 |
                             (ushort)(SUB161(auVar17 >> 0x2f,0) & 1) << 5 |
                             (ushort)(SUB161(auVar17 >> 0x37,0) & 1) << 6 |
                             (ushort)(SUB161(auVar17 >> 0x3f,0) & 1) << 7 |
                             (ushort)(SUB161(auVar17 >> 0x47,0) & 1) << 8 |
                             (ushort)(SUB161(auVar17 >> 0x4f,0) & 1) << 9 |
                             (ushort)(SUB161(auVar17 >> 0x57,0) & 1) << 10 |
                             (ushort)(SUB161(auVar17 >> 0x5f,0) & 1) << 0xb |
                             (ushort)(SUB161(auVar17 >> 0x67,0) & 1) << 0xc |
                             (ushort)(SUB161(auVar17 >> 0x6f,0) & 1) << 0xd |
                             (ushort)(SUB161(auVar17 >> 0x77,0) & 1) << 0xe |
                            (ushort)(byte)(auVar17[0xf] >> 7) << 0xf);
    pauVar8 = pauVar6 + 1;
    do {
      if ((short)uVar12 == 0) {
        do {
          auVar17 = *pauVar8;
          pauVar6 = pauVar6 + -0x20;
          pauVar8 = pauVar8 + 1;
          uVar12 = (ushort)((ushort)(SUB161(auVar17 >> 7,0) & 1) |
                            (ushort)(SUB161(auVar17 >> 0xf,0) & 1) << 1 |
                            (ushort)(SUB161(auVar17 >> 0x17,0) & 1) << 2 |
                            (ushort)(SUB161(auVar17 >> 0x1f,0) & 1) << 3 |
                            (ushort)(SUB161(auVar17 >> 0x27,0) & 1) << 4 |
                            (ushort)(SUB161(auVar17 >> 0x2f,0) & 1) << 5 |
                            (ushort)(SUB161(auVar17 >> 0x37,0) & 1) << 6 |
                            (ushort)(SUB161(auVar17 >> 0x3f,0) & 1) << 7 |
                            (ushort)(SUB161(auVar17 >> 0x47,0) & 1) << 8 |
                            (ushort)(SUB161(auVar17 >> 0x4f,0) & 1) << 9 |
                            (ushort)(SUB161(auVar17 >> 0x57,0) & 1) << 10 |
                            (ushort)(SUB161(auVar17 >> 0x5f,0) & 1) << 0xb |
                            (ushort)(SUB161(auVar17 >> 0x67,0) & 1) << 0xc |
                            (ushort)(SUB161(auVar17 >> 0x6f,0) & 1) << 0xd |
                            (ushort)(SUB161(auVar17 >> 0x77,0) & 1) << 0xe |
                           (ushort)(byte)(auVar17[0xf] >> 7) << 0xf) ^ 0xffff;
        } while (uVar12 == 0);
      }
      iVar2 = 0;
      for (uVar14 = uVar12; (uVar14 & 1) == 0; uVar14 = uVar14 >> 1 | 0x80000000) {
        iVar2 = iVar2 + 1;
      }
      uVar14 = iVar2 << 5;
      uVar4 = *(ulonglong *)((longlong)pauVar6 + (-8 - (ulonglong)uVar14));
      if (uVar4 != 0) {
        lVar7 = *(longlong *)((longlong)pauVar6 + (-0x10 - (ulonglong)uVar14));
        uVar10 = 0;
LAB_140a581e0:
        if (*(char *)(lVar7 + 4 + uVar10 * 8) != param_2) goto code_r0x000140a581e7;
        uVar9 = uVar10 + 1;
        uVar15 = uVar10;
        if (uVar9 < uVar4) {
          if (((int)uVar4 + (int)uVar10 & 1U) == 0) {
            if (*(char *)(lVar7 + 0xc + uVar10 * 8) != param_2) {
              *(undefined8 *)(lVar7 + uVar10 * 8) = *(undefined8 *)(lVar7 + 8 + uVar10 * 8);
              uVar15 = uVar10 + 1;
            }
            uVar9 = uVar10 + 2;
          }
          if (uVar4 - 2 != uVar10) {
            do {
              if (*(char *)(lVar7 + 4 + uVar9 * 8) != param_2) {
                *(undefined8 *)(lVar7 + uVar15 * 8) = *(undefined8 *)(lVar7 + uVar9 * 8);
                uVar15 = uVar15 + 1;
              }
              if (*(char *)(lVar7 + 0xc + uVar9 * 8) != param_2) {
                *(undefined8 *)(lVar7 + uVar15 * 8) = *(undefined8 *)(lVar7 + 8 + uVar9 * 8);
                uVar15 = uVar15 + 1;
              }
              uVar9 = uVar9 + 2;
            } while (uVar4 != uVar9);
          }
        }
        *(ulonglong *)((longlong)pauVar6 + (-8 - (ulonglong)uVar14)) = uVar15;
      }
LAB_140a58180:
      uVar12 = uVar12 - 1 & uVar12;
      lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
  }
  return;
code_r0x000140a581e7:
  uVar10 = uVar10 + 1;
  if (uVar4 == uVar10) goto LAB_140a58180;
  goto LAB_140a581e0;
}

