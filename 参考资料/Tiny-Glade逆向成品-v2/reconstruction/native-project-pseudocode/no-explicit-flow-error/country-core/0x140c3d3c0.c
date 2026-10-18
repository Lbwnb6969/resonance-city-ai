// VA 0x140c3d3c0, PDB extent 1395 bytes
// country_core::resources::walls::decorator_storage::DecoratorStorage::remove_storage
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/walls/decorator_storage.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::resources::walls::decorator_storage::DecoratorStorage::remove_storage
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/walls/decorator_storage.rs
   Extent: 1395 */

void pdb_140c3d3c0(longlong param_1,longlong param_2,undefined1 (*param_3) [16])

{
  undefined1 auVar1 [16];
  undefined1 (*pauVar2) [16];
  ushort uVar3;
  uint uVar4;
  undefined8 *puVar5;
  undefined1 (*pauVar6) [16];
  ulonglong uVar7;
  undefined8 uVar8;
  ulonglong uVar9;
  undefined1 (*pauVar10) [16];
  undefined1 (*pauVar11) [16];
  uint uVar12;
  byte bVar13;
  uint uVar14;
  byte bVar15;
  undefined1 (*in_R11) [16];
  longlong lVar16;
  bool bVar17;
  undefined1 (*pauStack_1b8) [16];
  undefined8 *puStack_1b0;
  undefined1 (*pauStack_1a8) [16];
  undefined1 (*pauStack_1a0) [16];
  longlong lStack_198;
  undefined8 uStack_190;
  undefined1 (*pauStack_188) [16];
  longlong lStack_180;
  undefined8 uStack_178;
  longlong lStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  longlong lStack_158;
  undefined1 (*pauStack_150) [16];
  undefined8 *puStack_148;
  undefined1 (*pauStack_140) [16];
  undefined1 (*pauStack_138) [16];
  longlong lStack_130;
  ushort uStack_128;
  undefined6 uStack_126;
  undefined1 (*pauStack_120) [16];
  longlong lStack_118;
  undefined8 uStack_110;
  longlong lStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  longlong lStack_f0;
  longlong lStack_e8;
  undefined1 (*pauStack_c0) [16];
  undefined1 (*pauStack_b8) [16];
  longlong lStack_b0;
  undefined8 uStack_a8;
  longlong lStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  longlong lStack_88;
  undefined8 uStack_80;
  undefined1 (*pauStack_70) [16];
  undefined4 uStack_68;
  undefined1 uStack_61;
  undefined8 uStack_60;
  
  uStack_60 = 0xfffffffffffffffe;
  if (*(char *)(param_1 + 0x1b0) != '\0') {
                    /* WARNING: Subroutine does not return */
    pdb_142dc83b0(&UNK_14306c3c9,0x21,&UNK_14306cc80);
  }
  if (param_2 == 0) {
    pauStack_1b8 = param_3;
    uVar8 = pdb_1400af0a0(param_1 + 0x20,&pauStack_1b8);
    pdb_140caa0c0(&lStack_158,param_1,uVar8,&pauStack_1b8);
    if (pauStack_150 == (undefined1 (*) [16])0x0) {
      return;
    }
    uStack_190 = CONCAT62(uStack_126,uStack_128);
    pauVar10 = pauStack_150;
    pauVar11 = pauStack_138;
    puVar5 = puStack_148;
    pauVar6 = pauStack_140;
    lStack_198 = lStack_130;
    pauStack_188 = pauStack_120;
    lStack_180 = lStack_118;
    uStack_178 = uStack_110;
    lStack_170 = lStack_108;
    uStack_168 = uStack_100;
    uStack_160 = uStack_f8;
  }
  else if (param_2 == 1) {
    pauVar10 = *(undefined1 (**) [16])(param_1 + 0x90);
    puVar5 = *(undefined8 **)(param_1 + 0x98);
    pauVar6 = *(undefined1 (**) [16])(param_1 + 0xa0);
    pauVar11 = *(undefined1 (**) [16])(param_1 + 0xa8);
    lStack_198 = *(longlong *)(param_1 + 0xb0);
    uStack_190 = *(undefined8 *)(param_1 + 0xb8);
    pauStack_188 = *(undefined1 (**) [16])(param_1 + 0xc0);
    lStack_180 = *(longlong *)(param_1 + 200);
    uStack_178 = *(undefined8 *)(param_1 + 0xd0);
    lStack_170 = *(longlong *)(param_1 + 0xd8);
    uStack_168 = *(undefined8 *)(param_1 + 0xe0);
    uStack_160 = *(undefined8 *)(param_1 + 0xe8);
    lStack_f0 = *(longlong *)(param_1 + 0xf0);
    lStack_e8 = *(longlong *)(param_1 + 0xf8);
    *(undefined8 *)(param_1 + 0x90) = 0;
  }
  else {
    pauVar10 = *(undefined1 (**) [16])(param_1 + 0x120);
    lStack_198 = *(longlong *)(param_1 + 0x140);
    uStack_190 = *(undefined8 *)(param_1 + 0x148);
    pauStack_188 = *(undefined1 (**) [16])(param_1 + 0x150);
    lStack_180 = *(longlong *)(param_1 + 0x158);
    uStack_178 = *(undefined8 *)(param_1 + 0x160);
    lStack_170 = *(longlong *)(param_1 + 0x168);
    uStack_168 = *(undefined8 *)(param_1 + 0x170);
    uStack_160 = *(undefined8 *)(param_1 + 0x178);
    lStack_f0 = *(longlong *)(param_1 + 0x180);
    lStack_e8 = *(longlong *)(param_1 + 0x188);
    *(undefined8 *)(param_1 + 0x120) = 0;
    pauVar11 = *(undefined1 (**) [16])(param_1 + 0x138);
    puVar5 = *(undefined8 **)(param_1 + 0x128);
    pauVar6 = *(undefined1 (**) [16])(param_1 + 0x130);
  }
  if (pauVar10 != (undefined1 (*) [16])0x0) {
    pauStack_1b8 = pauVar10;
    puStack_1b0 = puVar5;
    pauStack_1a8 = pauVar6;
    pauStack_1a0 = pauVar11;
    pauStack_b8 = pauStack_188;
    lStack_b0 = lStack_180;
    uStack_a8 = uStack_178;
    lStack_a0 = lStack_170;
    uStack_98 = uStack_168;
    uStack_90 = uStack_160;
    lStack_88 = lStack_198;
    uStack_80 = uStack_190;
    if (lStack_e8 != 0) {
      uVar7 = lStack_e8 * 4 + 0x13U & 0xfffffffffffffff0;
      uVar9 = lStack_e8 + uVar7 + 0x11;
      if (uVar9 != 0) {
        pub_1406abac0((byte *)(lStack_f0 - uVar7),uVar9,0x10);
      }
    }
    uStack_61 = 1;
    pdb_1417a88b0(&lStack_158,param_1 + 0x30,param_2,param_3);
    if (lStack_158 == 3) {
      pauStack_70 = pauStack_150 + -3;
      auVar1 = *pauVar10;
      if (puVar5 == (undefined8 *)0x0) {
        lStack_158 = 0;
        puStack_148 = (undefined8 *)0x3;
      }
      else {
        uVar7 = (longlong)puVar5 * 4 + 0x13U & 0xfffffffffffffff0;
        in_R11 = (undefined1 (*) [16])((longlong)puVar5 + uVar7 + 0x11);
        puStack_148 = (undefined8 *)((longlong)pauVar10 - uVar7);
        lStack_158 = 0x10;
      }
      pauStack_138 = pauVar10 + 1;
      uStack_128 = ~((ushort)(SUB161(auVar1 >> 7,0) & 1) |
                     (ushort)(SUB161(auVar1 >> 0xf,0) & 1) << 1 |
                     (ushort)(SUB161(auVar1 >> 0x17,0) & 1) << 2 |
                     (ushort)(SUB161(auVar1 >> 0x1f,0) & 1) << 3 |
                     (ushort)(SUB161(auVar1 >> 0x27,0) & 1) << 4 |
                     (ushort)(SUB161(auVar1 >> 0x2f,0) & 1) << 5 |
                     (ushort)(SUB161(auVar1 >> 0x37,0) & 1) << 6 |
                     (ushort)(SUB161(auVar1 >> 0x3f,0) & 1) << 7 |
                     (ushort)(SUB161(auVar1 >> 0x47,0) & 1) << 8 |
                     (ushort)(SUB161(auVar1 >> 0x4f,0) & 1) << 9 |
                     (ushort)(SUB161(auVar1 >> 0x57,0) & 1) << 10 |
                     (ushort)(SUB161(auVar1 >> 0x5f,0) & 1) << 0xb |
                     (ushort)(SUB161(auVar1 >> 0x67,0) & 1) << 0xc |
                     (ushort)(SUB161(auVar1 >> 0x6f,0) & 1) << 0xd |
                     (ushort)(SUB161(auVar1 >> 0x77,0) & 1) << 0xe |
                    (ushort)(byte)(auVar1[0xf] >> 7) << 0xf);
      lStack_130 = (longlong)puVar5 + (longlong)pauVar10 + 1;
      uStack_61 = 0;
      pauStack_150 = in_R11;
      pauStack_140 = pauVar10;
      pauStack_120 = pauVar11;
      pdb_1417a6310(pauStack_70,&lStack_158);
    }
    else {
      pauVar2 = (undefined1 (*) [16])*puStack_148;
      uVar7 = puStack_148[1];
      uVar9 = uVar7 & (ulonglong)pauStack_140;
      auVar1 = *(undefined1 (*) [16])(*pauVar2 + uVar9);
      uVar3 = (ushort)(SUB161(auVar1 >> 7,0) & 1) | (ushort)(SUB161(auVar1 >> 0xf,0) & 1) << 1 |
              (ushort)(SUB161(auVar1 >> 0x17,0) & 1) << 2 |
              (ushort)(SUB161(auVar1 >> 0x1f,0) & 1) << 3 |
              (ushort)(SUB161(auVar1 >> 0x27,0) & 1) << 4 |
              (ushort)(SUB161(auVar1 >> 0x2f,0) & 1) << 5 |
              (ushort)(SUB161(auVar1 >> 0x37,0) & 1) << 6 |
              (ushort)(SUB161(auVar1 >> 0x3f,0) & 1) << 7 |
              (ushort)(SUB161(auVar1 >> 0x47,0) & 1) << 8 |
              (ushort)(SUB161(auVar1 >> 0x4f,0) & 1) << 9 |
              (ushort)(SUB161(auVar1 >> 0x57,0) & 1) << 10 |
              (ushort)(SUB161(auVar1 >> 0x5f,0) & 1) << 0xb |
              (ushort)(SUB161(auVar1 >> 0x67,0) & 1) << 0xc |
              (ushort)(SUB161(auVar1 >> 0x6f,0) & 1) << 0xd |
              (ushort)(SUB161(auVar1 >> 0x77,0) & 1) << 0xe |
              (ushort)(byte)(auVar1[0xf] >> 7) << 0xf;
      uVar12 = (uint)uVar3;
      if (uVar3 == 0) {
        lVar16 = 0x10;
        do {
          uVar9 = uVar9 + lVar16 & uVar7;
          auVar1 = *(undefined1 (*) [16])(*pauVar2 + uVar9);
          lVar16 = lVar16 + 0x10;
          uVar12 = (uint)(ushort)((ushort)(SUB161(auVar1 >> 7,0) & 1) |
                                  (ushort)(SUB161(auVar1 >> 0xf,0) & 1) << 1 |
                                  (ushort)(SUB161(auVar1 >> 0x17,0) & 1) << 2 |
                                  (ushort)(SUB161(auVar1 >> 0x1f,0) & 1) << 3 |
                                  (ushort)(SUB161(auVar1 >> 0x27,0) & 1) << 4 |
                                  (ushort)(SUB161(auVar1 >> 0x2f,0) & 1) << 5 |
                                  (ushort)(SUB161(auVar1 >> 0x37,0) & 1) << 6 |
                                  (ushort)(SUB161(auVar1 >> 0x3f,0) & 1) << 7 |
                                  (ushort)(SUB161(auVar1 >> 0x47,0) & 1) << 8 |
                                  (ushort)(SUB161(auVar1 >> 0x4f,0) & 1) << 9 |
                                  (ushort)(SUB161(auVar1 >> 0x57,0) & 1) << 10 |
                                  (ushort)(SUB161(auVar1 >> 0x5f,0) & 1) << 0xb |
                                  (ushort)(SUB161(auVar1 >> 0x67,0) & 1) << 0xc |
                                  (ushort)(SUB161(auVar1 >> 0x6f,0) & 1) << 0xd |
                                  (ushort)(SUB161(auVar1 >> 0x77,0) & 1) << 0xe |
                                 (ushort)(byte)(auVar1[0xf] >> 7) << 0xf);
        } while (uVar12 == 0);
      }
      uVar14 = 0;
      for (; (uVar12 & 1) == 0; uVar12 = uVar12 >> 1 | 0x80000000) {
        uVar14 = uVar14 + 1;
      }
      uVar9 = uVar14 + uVar9 & uVar7;
      bVar15 = (*pauVar2)[uVar9];
      if (-1 < (char)bVar15) {
        auVar1 = *pauVar2;
        uVar12 = 0;
        for (uVar14 = (uint)(ushort)((ushort)(SUB161(auVar1 >> 7,0) & 1) |
                                     (ushort)(SUB161(auVar1 >> 0xf,0) & 1) << 1 |
                                     (ushort)(SUB161(auVar1 >> 0x17,0) & 1) << 2 |
                                     (ushort)(SUB161(auVar1 >> 0x1f,0) & 1) << 3 |
                                     (ushort)(SUB161(auVar1 >> 0x27,0) & 1) << 4 |
                                     (ushort)(SUB161(auVar1 >> 0x2f,0) & 1) << 5 |
                                     (ushort)(SUB161(auVar1 >> 0x37,0) & 1) << 6 |
                                     (ushort)(SUB161(auVar1 >> 0x3f,0) & 1) << 7 |
                                     (ushort)(SUB161(auVar1 >> 0x47,0) & 1) << 8 |
                                     (ushort)(SUB161(auVar1 >> 0x4f,0) & 1) << 9 |
                                     (ushort)(SUB161(auVar1 >> 0x57,0) & 1) << 10 |
                                     (ushort)(SUB161(auVar1 >> 0x5f,0) & 1) << 0xb |
                                     (ushort)(SUB161(auVar1 >> 0x67,0) & 1) << 0xc |
                                     (ushort)(SUB161(auVar1 >> 0x6f,0) & 1) << 0xd |
                                     (ushort)(SUB161(auVar1 >> 0x77,0) & 1) << 0xe |
                                    (ushort)(byte)(auVar1[0xf] >> 7) << 0xf); (uVar14 & 1) == 0;
            uVar14 = uVar14 >> 1 | 0x80000000) {
          uVar12 = uVar12 + 1;
        }
        uVar9 = (ulonglong)uVar12;
        bVar15 = (*pauVar2)[uVar9];
      }
      bVar13 = (byte)((ulonglong)pauStack_140 >> 0x39);
      (*pauVar2)[uVar9] = bVar13;
      pauVar2[1][uVar9 - 0x10 & uVar7] = bVar13;
      puStack_148[2] = puStack_148[2] - (ulonglong)(bVar15 & 1);
      *(longlong *)pauVar2[uVar9 * -4 + -4] = lStack_158;
      *(undefined1 (**) [16])(pauVar2[uVar9 * -4 + -4] + 8) = pauStack_150;
      pauStack_70 = pauVar2 + uVar9 * -4 + -3;
      *(undefined1 (**) [16])pauVar2[uVar9 * -4 + -3] = pauVar10;
      *(undefined8 **)(pauVar2[uVar9 * -4 + -3] + 8) = puVar5;
      *(undefined1 (**) [16])pauVar2[uVar9 * -4 + -2] = pauVar6;
      *(undefined1 (**) [16])(pauVar2[uVar9 * -4 + -2] + 8) = pauVar11;
      *(longlong *)pauVar2[uVar9 * -4 + -1] = lStack_88;
      *(undefined8 *)(pauVar2[uVar9 * -4 + -1] + 8) = uStack_80;
      puStack_148[3] = puStack_148[3] + 1;
    }
    auVar1 = *pauStack_188;
    pauVar10 = pauStack_188 + 1;
    uVar12 = ~(uint)(ushort)((ushort)(SUB161(auVar1 >> 7,0) & 1) |
                             (ushort)(SUB161(auVar1 >> 0xf,0) & 1) << 1 |
                             (ushort)(SUB161(auVar1 >> 0x17,0) & 1) << 2 |
                             (ushort)(SUB161(auVar1 >> 0x1f,0) & 1) << 3 |
                             (ushort)(SUB161(auVar1 >> 0x27,0) & 1) << 4 |
                             (ushort)(SUB161(auVar1 >> 0x2f,0) & 1) << 5 |
                             (ushort)(SUB161(auVar1 >> 0x37,0) & 1) << 6 |
                             (ushort)(SUB161(auVar1 >> 0x3f,0) & 1) << 7 |
                             (ushort)(SUB161(auVar1 >> 0x47,0) & 1) << 8 |
                             (ushort)(SUB161(auVar1 >> 0x4f,0) & 1) << 9 |
                             (ushort)(SUB161(auVar1 >> 0x57,0) & 1) << 10 |
                             (ushort)(SUB161(auVar1 >> 0x5f,0) & 1) << 0xb |
                             (ushort)(SUB161(auVar1 >> 0x67,0) & 1) << 0xc |
                             (ushort)(SUB161(auVar1 >> 0x6f,0) & 1) << 0xd |
                             (ushort)(SUB161(auVar1 >> 0x77,0) & 1) << 0xe |
                            (ushort)(byte)(auVar1[0xf] >> 7) << 0xf);
    pauStack_c0 = pauStack_188;
    pauVar11 = pauStack_188;
    lVar16 = lStack_170;
    while (bVar17 = lVar16 != 0, lVar16 = lVar16 + -1, bVar17) {
      if ((short)uVar12 == 0) {
        do {
          auVar1 = *pauVar10;
          pauVar11 = pauVar11 + -0x68;
          pauVar10 = pauVar10 + 1;
          uVar12 = (ushort)((ushort)(SUB161(auVar1 >> 7,0) & 1) |
                            (ushort)(SUB161(auVar1 >> 0xf,0) & 1) << 1 |
                            (ushort)(SUB161(auVar1 >> 0x17,0) & 1) << 2 |
                            (ushort)(SUB161(auVar1 >> 0x1f,0) & 1) << 3 |
                            (ushort)(SUB161(auVar1 >> 0x27,0) & 1) << 4 |
                            (ushort)(SUB161(auVar1 >> 0x2f,0) & 1) << 5 |
                            (ushort)(SUB161(auVar1 >> 0x37,0) & 1) << 6 |
                            (ushort)(SUB161(auVar1 >> 0x3f,0) & 1) << 7 |
                            (ushort)(SUB161(auVar1 >> 0x47,0) & 1) << 8 |
                            (ushort)(SUB161(auVar1 >> 0x4f,0) & 1) << 9 |
                            (ushort)(SUB161(auVar1 >> 0x57,0) & 1) << 10 |
                            (ushort)(SUB161(auVar1 >> 0x5f,0) & 1) << 0xb |
                            (ushort)(SUB161(auVar1 >> 0x67,0) & 1) << 0xc |
                            (ushort)(SUB161(auVar1 >> 0x6f,0) & 1) << 0xd |
                            (ushort)(SUB161(auVar1 >> 0x77,0) & 1) << 0xe |
                           (ushort)(byte)(auVar1[0xf] >> 7) << 0xf) ^ 0xffff;
        } while (uVar12 == 0);
      }
      uVar14 = 0;
      for (uVar4 = uVar12; (uVar4 & 1) == 0; uVar4 = uVar4 >> 1 | 0x80000000) {
        uVar14 = uVar14 + 1;
      }
      uStack_68 = *(undefined4 *)((longlong)pauVar11 + (ulonglong)uVar14 * -0x68 + -0x68);
      uStack_61 = 0;
      pdb_1403b0de0(pauStack_70);
      uVar8 = pdb_1400aede0(param_1 + 0x80,&uStack_68);
      uStack_61 = 0;
      pdb_140cabcd0(&lStack_158,param_1 + 0x60,uVar8,&uStack_68);
      uVar12 = uVar12 - 1 & uVar12;
      if ((int)pauStack_150 == 3) {
        uStack_61 = 0;
                    /* WARNING: Subroutine does not return */
        pdb_142dc83b0(&UNK_14306cc20,0x47,&UNK_14306cc68);
      }
    }
    if (lStack_180 != 0) {
      uVar7 = lStack_180 * 0x68 + 0x77U & 0xfffffffffffffff0;
      uVar9 = lStack_180 + uVar7 + 0x11;
      if (uVar9 != 0) {
        pub_1406abac0((byte *)((longlong)pauStack_c0 - uVar7),uVar9,0x10);
      }
    }
  }
  return;
}

