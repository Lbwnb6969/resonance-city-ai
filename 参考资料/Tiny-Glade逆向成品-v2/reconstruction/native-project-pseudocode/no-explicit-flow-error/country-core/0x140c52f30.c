// VA 0x140c52f30, PDB extent 1866 bytes
// country_core::render::nani::mesh_atlas::MeshAtlas::compact
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/render/nani/mesh_atlas.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: country_core::render::nani::mesh_atlas::MeshAtlas::compact
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/render/nani/mesh_atlas.rs
   Extent: 1866 */

void pdb_140c52f30(ulonglong param_1)

{
  byte *pbVar1;
  undefined1 auVar2 [16];
  uint uVar3;
  int iVar4;
  ulonglong uVar5;
  code *pcVar6;
  ushort uVar7;
  int iVar8;
  uint uVar9;
  byte *pbVar10;
  ulonglong uVar11;
  longlong lVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  uint *puVar15;
  uint *unaff_RBX;
  uint *puVar16;
  longlong lVar17;
  ulonglong uVar18;
  longlong lVar19;
  uint uVar20;
  undefined1 (*pauVar21) [16];
  undefined1 (*pauVar22) [16];
  ulonglong unaff_R14;
  longlong *unaff_R15;
  undefined8 uVar23;
  longlong lStack_100;
  byte *pbStack_f8;
  longlong lStack_f0;
  longlong lStack_e8;
  uint *puStack_e0;
  ulonglong uStack_d8;
  undefined1 (*pauStack_d0) [16];
  undefined1 (*pauStack_c8) [16];
  longlong *plStack_c0;
  uint *puStack_b8;
  byte *pbStack_b0;
  byte *pbStack_a8;
  longlong lStack_a0;
  byte *pbStack_98;
  undefined1 auStack_90 [16];
  longlong lStack_80;
  byte *pbStack_78;
  longlong lStack_70;
  ulonglong uStack_68;
  ulonglong uStack_60;
  byte *pbStack_58;
  undefined1 uStack_4b;
  undefined1 uStack_4a;
  undefined1 uStack_49;
  undefined8 uStack_48;
  
  uStack_48 = 0xfffffffffffffffe;
  if (*(longlong *)(param_1 + 0x50) == 0) {
    return;
  }
  pauVar22 = *(undefined1 (**) [16])(param_1 + 0x38);
  auVar2 = *pauVar22;
  uVar7 = (ushort)(SUB161(auVar2 >> 7,0) & 1) | (ushort)(SUB161(auVar2 >> 0xf,0) & 1) << 1 |
          (ushort)(SUB161(auVar2 >> 0x17,0) & 1) << 2 | (ushort)(SUB161(auVar2 >> 0x1f,0) & 1) << 3
          | (ushort)(SUB161(auVar2 >> 0x27,0) & 1) << 4 |
          (ushort)(SUB161(auVar2 >> 0x2f,0) & 1) << 5 | (ushort)(SUB161(auVar2 >> 0x37,0) & 1) << 6
          | (ushort)(SUB161(auVar2 >> 0x3f,0) & 1) << 7 |
          (ushort)(SUB161(auVar2 >> 0x47,0) & 1) << 8 | (ushort)(SUB161(auVar2 >> 0x4f,0) & 1) << 9
          | (ushort)(SUB161(auVar2 >> 0x57,0) & 1) << 10 |
          (ushort)(SUB161(auVar2 >> 0x5f,0) & 1) << 0xb |
          (ushort)(SUB161(auVar2 >> 0x67,0) & 1) << 0xc |
          (ushort)(SUB161(auVar2 >> 0x6f,0) & 1) << 0xd |
          (ushort)(SUB161(auVar2 >> 0x77,0) & 1) << 0xe | (ushort)(byte)(auVar2[0xf] >> 7) << 0xf;
  pauVar21 = pauVar22;
  while (uVar9 = uVar7 ^ 0xffff, uVar9 == 0) {
    pauVar21 = pauVar21 + 1;
    auVar2 = *pauVar21;
    pauVar22 = pauVar22 + -0x38;
    uVar7 = (ushort)(SUB161(auVar2 >> 7,0) & 1) | (ushort)(SUB161(auVar2 >> 0xf,0) & 1) << 1 |
            (ushort)(SUB161(auVar2 >> 0x17,0) & 1) << 2 |
            (ushort)(SUB161(auVar2 >> 0x1f,0) & 1) << 3 |
            (ushort)(SUB161(auVar2 >> 0x27,0) & 1) << 4 |
            (ushort)(SUB161(auVar2 >> 0x2f,0) & 1) << 5 |
            (ushort)(SUB161(auVar2 >> 0x37,0) & 1) << 6 |
            (ushort)(SUB161(auVar2 >> 0x3f,0) & 1) << 7 |
            (ushort)(SUB161(auVar2 >> 0x47,0) & 1) << 8 |
            (ushort)(SUB161(auVar2 >> 0x4f,0) & 1) << 9 |
            (ushort)(SUB161(auVar2 >> 0x57,0) & 1) << 10 |
            (ushort)(SUB161(auVar2 >> 0x5f,0) & 1) << 0xb |
            (ushort)(SUB161(auVar2 >> 0x67,0) & 1) << 0xc |
            (ushort)(SUB161(auVar2 >> 0x6f,0) & 1) << 0xd |
            (ushort)(SUB161(auVar2 >> 0x77,0) & 1) << 0xe | (ushort)(byte)(auVar2[0xf] >> 7) << 0xf;
  }
  uVar20 = 0;
  for (; (uVar9 & 1) == 0; uVar9 = uVar9 >> 1 | 0x80000000) {
    uVar20 = uVar20 + 1;
  }
  uVar14 = *(ulonglong *)((longlong)pauVar22 + (ulonglong)uVar20 * -0x38 + -8);
  if (uVar14 == 0) {
    return;
  }
  uVar13 = uVar14 * 4;
  uStack_60 = param_1;
  pdb_14007ee60();
  uStack_68 = uVar13;
  pbVar10 = pub_1406abae0(uVar13,4);
  if (pbVar10 == (byte *)0x0) {
    pdb_142dc7e2a(4,uStack_68);
  }
  else {
    uVar13 = *(ulonglong *)(uStack_60 + 0x10);
    lVar17 = *(longlong *)(uStack_60 + 200);
    pbStack_58 = pbVar10;
    if (lVar17 != 0) {
      pauVar21 = *(undefined1 (**) [16])(uStack_60 + 0xb0);
      auVar2 = *pauVar21;
      uVar9 = ~(uint)(ushort)((ushort)(SUB161(auVar2 >> 7,0) & 1) |
                              (ushort)(SUB161(auVar2 >> 0xf,0) & 1) << 1 |
                              (ushort)(SUB161(auVar2 >> 0x17,0) & 1) << 2 |
                              (ushort)(SUB161(auVar2 >> 0x1f,0) & 1) << 3 |
                              (ushort)(SUB161(auVar2 >> 0x27,0) & 1) << 4 |
                              (ushort)(SUB161(auVar2 >> 0x2f,0) & 1) << 5 |
                              (ushort)(SUB161(auVar2 >> 0x37,0) & 1) << 6 |
                              (ushort)(SUB161(auVar2 >> 0x3f,0) & 1) << 7 |
                              (ushort)(SUB161(auVar2 >> 0x47,0) & 1) << 8 |
                              (ushort)(SUB161(auVar2 >> 0x4f,0) & 1) << 9 |
                              (ushort)(SUB161(auVar2 >> 0x57,0) & 1) << 10 |
                              (ushort)(SUB161(auVar2 >> 0x5f,0) & 1) << 0xb |
                              (ushort)(SUB161(auVar2 >> 0x67,0) & 1) << 0xc |
                              (ushort)(SUB161(auVar2 >> 0x6f,0) & 1) << 0xd |
                              (ushort)(SUB161(auVar2 >> 0x77,0) & 1) << 0xe |
                             (ushort)(byte)(auVar2[0xf] >> 7) << 0xf);
      pauVar22 = pauVar21 + 1;
      uVar5 = *(ulonglong *)(uStack_60 + 0x90);
      unaff_R14 = *(ulonglong *)(uStack_60 + 8);
      lVar19 = *(longlong *)(uStack_60 + 0x88);
      do {
        if ((short)uVar9 == 0) {
          do {
            auVar2 = *pauVar22;
            pauVar21 = pauVar21 + -0x10;
            pauVar22 = pauVar22 + 1;
            uVar9 = (ushort)((ushort)(SUB161(auVar2 >> 7,0) & 1) |
                             (ushort)(SUB161(auVar2 >> 0xf,0) & 1) << 1 |
                             (ushort)(SUB161(auVar2 >> 0x17,0) & 1) << 2 |
                             (ushort)(SUB161(auVar2 >> 0x1f,0) & 1) << 3 |
                             (ushort)(SUB161(auVar2 >> 0x27,0) & 1) << 4 |
                             (ushort)(SUB161(auVar2 >> 0x2f,0) & 1) << 5 |
                             (ushort)(SUB161(auVar2 >> 0x37,0) & 1) << 6 |
                             (ushort)(SUB161(auVar2 >> 0x3f,0) & 1) << 7 |
                             (ushort)(SUB161(auVar2 >> 0x47,0) & 1) << 8 |
                             (ushort)(SUB161(auVar2 >> 0x4f,0) & 1) << 9 |
                             (ushort)(SUB161(auVar2 >> 0x57,0) & 1) << 10 |
                             (ushort)(SUB161(auVar2 >> 0x5f,0) & 1) << 0xb |
                             (ushort)(SUB161(auVar2 >> 0x67,0) & 1) << 0xc |
                             (ushort)(SUB161(auVar2 >> 0x6f,0) & 1) << 0xd |
                             (ushort)(SUB161(auVar2 >> 0x77,0) & 1) << 0xe |
                            (ushort)(byte)(auVar2[0xf] >> 7) << 0xf) ^ 0xffff;
          } while (uVar9 == 0);
        }
        iVar8 = 0;
        for (uVar20 = uVar9; (uVar20 & 1) == 0; uVar20 = uVar20 >> 1 | 0x80000000) {
          iVar8 = iVar8 + 1;
        }
        uVar11 = (ulonglong)*(uint *)((longlong)pauVar21 + (-8 - (ulonglong)(uint)(iVar8 << 4)));
        if (uVar5 <= uVar11) {
                    /* WARNING: Subroutine does not return */
          pdb_142dc81f2(uVar11,uVar5,&UNK_14306e750);
        }
        uVar20 = *(uint *)(lVar19 + uVar11 * 0x10);
        uVar3 = *(uint *)(lVar19 + 4 + uVar11 * 0x10);
        uVar11 = (ulonglong)(uVar3 + uVar20);
        if ((CARRY4(uVar3,uVar20)) || (uVar13 < uVar11)) {
          pdb_142dc8420((ulonglong)uVar20,uVar11,uVar13,&UNK_14306e768);
          goto LAB_140c53489;
        }
        if (uVar3 != 0) {
          lVar12 = (ulonglong)uVar20 << 2;
          do {
            uVar18 = (ulonglong)*(uint *)(unaff_R14 + lVar12);
            if (uVar14 <= uVar18) {
                    /* WARNING: Subroutine does not return */
              pdb_142dc81f2(uVar18,uVar14,&UNK_14306e780);
            }
            pbVar1 = pbVar10 + uVar18 * 4;
            pbVar1[0] = 1;
            pbVar1[1] = 0;
            pbVar1[2] = 0;
            pbVar1[3] = 0;
            lVar12 = lVar12 + 4;
          } while (uVar11 << 2 != lVar12);
        }
        uVar9 = uVar9 - 1 & uVar9;
        lVar17 = lVar17 + -1;
      } while (lVar17 != 0);
    }
    if (uVar13 == 0x1fffffffffffffff) {
      uVar23 = 0;
LAB_140c53139:
      pdb_142dc7e2a(uVar23,unaff_R14);
LAB_140c53489:
                    /* WARNING: Does not return */
      pcVar6 = (code *)invalidInstructionException();
      (*pcVar6)();
    }
    unaff_R14 = (uVar13 + 1) * 4;
    pdb_14007ee60();
    uVar23 = 4;
    pbStack_78 = pub_1406abab0(unaff_R14,4);
    if (pbStack_78 == (byte *)0x0) goto LAB_140c53139;
    pbStack_78[0] = 0;
    pbStack_78[1] = 0;
    pbStack_78[2] = 0;
    pbStack_78[3] = 0;
    lStack_70 = 1;
    puVar16 = *(uint **)(uStack_60 + 8);
    puVar15 = puVar16 + *(longlong *)(uStack_60 + 0x10);
    unaff_R15 = &lStack_80;
    lStack_80 = uVar13 + 1;
    for (; lVar17 = lStack_70, puVar16 != puVar15; puVar16 = puVar16 + 1) {
      if ((lStack_70 == 0) || (pbStack_78 + lStack_70 * 4 + -4 == (byte *)0x0)) {
                    /* WARNING: Subroutine does not return */
        pdb_142dc8150(&UNK_14306e720);
      }
      uVar13 = (ulonglong)*puVar16;
      if (uVar14 <= uVar13) {
                    /* WARNING: Subroutine does not return */
        pdb_142dc81f2(uVar13,uVar14,&UNK_14306e738);
      }
      iVar8 = *(int *)(pbVar10 + uVar13 * 4);
      iVar4 = *(int *)(pbStack_78 + lStack_70 * 4 + -4);
      if (lStack_70 == lStack_80) {
        pdb_142db0990(unaff_R15);
        pbVar10 = pbStack_58;
      }
      *(int *)(pbStack_78 + lVar17 * 4) = iVar8 + iVar4;
      lStack_70 = lVar17 + 1;
    }
    pauStack_d0 = *(undefined1 (**) [16])(uStack_60 + 0xb0);
    plStack_c0 = (longlong *)(*pauStack_d0 + *(longlong *)(uStack_60 + 0xb8) + 1);
    auVar2 = *pauStack_d0;
    pbStack_b0 = *(byte **)(uStack_60 + 200);
    pauStack_c8 = pauStack_d0 + 1;
    puStack_b8 = (uint *)CONCAT62(puStack_b8._2_6_,
                                  ~((ushort)(SUB161(auVar2 >> 7,0) & 1) |
                                    (ushort)(SUB161(auVar2 >> 0xf,0) & 1) << 1 |
                                    (ushort)(SUB161(auVar2 >> 0x17,0) & 1) << 2 |
                                    (ushort)(SUB161(auVar2 >> 0x1f,0) & 1) << 3 |
                                    (ushort)(SUB161(auVar2 >> 0x27,0) & 1) << 4 |
                                    (ushort)(SUB161(auVar2 >> 0x2f,0) & 1) << 5 |
                                    (ushort)(SUB161(auVar2 >> 0x37,0) & 1) << 6 |
                                    (ushort)(SUB161(auVar2 >> 0x3f,0) & 1) << 7 |
                                    (ushort)(SUB161(auVar2 >> 0x47,0) & 1) << 8 |
                                    (ushort)(SUB161(auVar2 >> 0x4f,0) & 1) << 9 |
                                    (ushort)(SUB161(auVar2 >> 0x57,0) & 1) << 10 |
                                    (ushort)(SUB161(auVar2 >> 0x5f,0) & 1) << 0xb |
                                    (ushort)(SUB161(auVar2 >> 0x67,0) & 1) << 0xc |
                                    (ushort)(SUB161(auVar2 >> 0x6f,0) & 1) << 0xd |
                                    (ushort)(SUB161(auVar2 >> 0x77,0) & 1) << 0xe |
                                   (ushort)(byte)(auVar2[0xf] >> 7) << 0xf));
    pdb_141604970(&lStack_e8,&pauStack_d0);
    unaff_RBX = puStack_e0;
    uVar13 = uStack_60;
    unaff_R14 = uStack_d8;
    if (uStack_d8 < 2) goto LAB_140c53272;
    if (uStack_d8 < 0x15) {
      puVar15 = puStack_e0 + 1;
      lVar17 = 4;
      do {
        uVar20 = puVar15[-1];
        uVar9 = *puVar15;
        lVar19 = lVar17;
        if (uVar9 < uVar20) {
          do {
            *(uint *)((longlong)puStack_e0 + lVar19) = uVar20;
            puVar16 = puStack_e0;
            if (lVar19 == 4) goto LAB_140c53415;
            uVar20 = *(uint *)((longlong)puStack_e0 + lVar19 + -8);
            lVar19 = lVar19 + -4;
          } while (uVar9 < uVar20);
          puVar16 = (uint *)(lVar19 + (longlong)puStack_e0);
LAB_140c53415:
          *puVar16 = uVar9;
        }
        puVar15 = puVar15 + 1;
        lVar17 = lVar17 + 4;
      } while (puVar15 != puStack_e0 + uStack_d8);
      goto LAB_140c53272;
    }
  }
  uStack_49 = 1;
  pdb_140a914d0(unaff_RBX,unaff_R14,&uStack_4b);
LAB_140c53272:
  puVar15 = unaff_RBX + unaff_R14;
  puStack_b8 = (uint *)(uVar13 + 0x80);
  uStack_49 = 1;
  pauStack_c8 = (undefined1 (*) [16])puVar15;
  plStack_c0 = unaff_R15;
  pdb_1415f1de0(&lStack_100,&pauStack_d0);
  uStack_4a = 1;
  pdb_140a97000(uVar13,pbStack_58,uVar14);
  pbStack_98 = pbStack_f8 + lStack_f0 * 4;
  auStack_90 = (undefined1  [16])0x0;
  plStack_c0 = (longlong *)lStack_e8;
  pbStack_b0 = pbStack_f8;
  lStack_a0 = lStack_100;
  puStack_b8 = puVar15;
  if (unaff_R14 != 0) {
    lVar17 = 0;
    pbVar10 = pbStack_f8;
    puVar15 = unaff_RBX;
    do {
      pauStack_c8 = (undefined1 (*) [16])(puVar15 + 1);
      if (-lVar17 == lStack_f0 * 4) break;
      uVar14 = (ulonglong)*puVar15;
      pbStack_a8 = pbVar10 + 4;
      if (*(ulonglong *)(uVar13 + 0x90) <= uVar14) {
                    /* WARNING: Subroutine does not return */
        pdb_142dc81f2(uVar14,*(ulonglong *)(uVar13 + 0x90),&UNK_14306e708);
      }
      *(undefined4 *)(*(longlong *)(uVar13 + 0x88) + uVar14 * 0x10) = *(undefined4 *)pbVar10;
      lVar17 = lVar17 + -4;
      pbVar10 = pbStack_a8;
      puVar15 = (uint *)pauStack_c8;
    } while (-lVar17 != unaff_R14 * 4);
  }
  if (lStack_e8 != 0) {
    pub_1406abac0((byte *)unaff_RBX,lStack_e8 << 2,4);
  }
  pbVar10 = pbStack_58;
  if (lStack_100 != 0) {
    pub_1406abac0(pbStack_f8,lStack_100 << 2,4);
  }
  if (lStack_80 != 0) {
    pub_1406abac0(pbStack_78,lStack_80 << 2,4);
  }
  pub_1406abac0(pbVar10,uStack_68,4);
  return;
}

