// VA 0x140c8f310, PDB extent 1618 bytes
// country_core::resources::walls::decorator_storage::Decorators::tracked_clone_from<country_core::resources::walls::decorator_storage::DecoMoveToStorage>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/walls/decorator_storage.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::resources::walls::decorator_storage::Decorators::tracked_clone_from<country_core::resources::walls::decorator_storage::DecoMoveToStorage>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/walls/decorator_storage.rs
   Extent: 1618 */

void pdb_140c8f310(longlong param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  undefined1 (*pauVar9) [16];
  ulonglong uVar10;
  undefined8 uVar11;
  longlong lVar12;
  ulonglong uVar13;
  undefined1 (*pauVar14) [16];
  undefined1 (*pauVar15) [16];
  longlong lVar16;
  uint uVar17;
  undefined1 auVar18 [16];
  undefined8 uStack_148;
  ulonglong uStack_140;
  uint *puStack_e8;
  code *pcStack_e0;
  undefined8 *puStack_d8;
  code *pcStack_d0;
  undefined8 *puStack_c8;
  code *pcStack_c0;
  undefined8 uStack_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined2 uStack_90;
  undefined1 uStack_8e;
  longlong lStack_88;
  undefined8 *puStack_80;
  ulonglong uStack_78;
  uint uStack_70;
  undefined4 uStack_6c;
  undefined8 *puStack_68;
  undefined8 *puStack_60;
  longlong lStack_58;
  undefined1 (*pauStack_50) [16];
  undefined8 uStack_48;
  
  uStack_48 = 0xfffffffffffffffe;
  lVar16 = param_1 + 0x60;
  lVar12 = *(longlong *)(param_1 + 0x48);
  puStack_68 = param_3;
  puStack_60 = param_2;
  if ((*(longlong *)(param_1 + 0x18) == 0 && *(longlong *)(param_1 + 0x78) == 0) && lVar12 == 0) {
    pdb_140ca3010(lVar16,param_2 + 0xc);
    uVar11 = param_2[0x11];
    *(undefined8 *)(param_1 + 0x80) = param_2[0x10];
    *(undefined8 *)(param_1 + 0x88) = uVar11;
    pdb_140ca3010(param_1,param_2);
    uVar11 = param_2[5];
    *(undefined8 *)(param_1 + 0x20) = param_2[4];
    *(undefined8 *)(param_1 + 0x28) = uVar11;
    pdb_140ca34c0(param_1 + 0x30,param_2 + 6);
    uVar11 = param_2[0xb];
    *(undefined8 *)(param_1 + 0x50) = param_2[10];
    *(undefined8 *)(param_1 + 0x58) = uVar11;
  }
  else {
    if (*(longlong *)(param_1 + 0x78) != 0) {
      uVar13 = *(ulonglong *)(param_1 + 0x68);
      if (uVar13 == 0) {
        uVar10 = 0;
      }
      else {
        pub_142e32780(*(undefined8 *)(param_1 + 0x60),0xff,uVar13 + 0x11);
        uVar10 = (uVar13 + 1 & 0xfffffffffffffff8) - (uVar13 + 1 >> 3);
        if (uVar13 < 8) {
          uVar10 = uVar13;
        }
        lVar12 = *(longlong *)(param_1 + 0x48);
      }
      *(undefined8 *)(param_1 + 0x78) = 0;
      *(ulonglong *)(param_1 + 0x70) = uVar10;
    }
    puStack_80 = (undefined8 *)(param_1 + 0x30);
    pauVar14 = *(undefined1 (**) [16])(param_1 + 0x30);
    auVar18 = *pauVar14;
    lStack_88 = lVar16;
    if (lVar12 == 0) {
      lVar16 = 0;
    }
    else {
      uVar17 = ~(uint)(ushort)((ushort)(SUB161(auVar18 >> 7,0) & 1) |
                               (ushort)(SUB161(auVar18 >> 0xf,0) & 1) << 1 |
                               (ushort)(SUB161(auVar18 >> 0x17,0) & 1) << 2 |
                               (ushort)(SUB161(auVar18 >> 0x1f,0) & 1) << 3 |
                               (ushort)(SUB161(auVar18 >> 0x27,0) & 1) << 4 |
                               (ushort)(SUB161(auVar18 >> 0x2f,0) & 1) << 5 |
                               (ushort)(SUB161(auVar18 >> 0x37,0) & 1) << 6 |
                               (ushort)(SUB161(auVar18 >> 0x3f,0) & 1) << 7 |
                               (ushort)(SUB161(auVar18 >> 0x47,0) & 1) << 8 |
                               (ushort)(SUB161(auVar18 >> 0x4f,0) & 1) << 9 |
                               (ushort)(SUB161(auVar18 >> 0x57,0) & 1) << 10 |
                               (ushort)(SUB161(auVar18 >> 0x5f,0) & 1) << 0xb |
                               (ushort)(SUB161(auVar18 >> 0x67,0) & 1) << 0xc |
                               (ushort)(SUB161(auVar18 >> 0x6f,0) & 1) << 0xd |
                               (ushort)(SUB161(auVar18 >> 0x77,0) & 1) << 0xe |
                              (ushort)(byte)(auVar18[0xf] >> 7) << 0xf);
      pauVar15 = pauVar14 + 1;
      do {
        if ((short)uVar17 == 0) {
          do {
            auVar18 = *pauVar15;
            pauVar14 = pauVar14 + -0x68;
            pauVar15 = pauVar15 + 1;
            uVar17 = (ushort)((ushort)(SUB161(auVar18 >> 7,0) & 1) |
                              (ushort)(SUB161(auVar18 >> 0xf,0) & 1) << 1 |
                              (ushort)(SUB161(auVar18 >> 0x17,0) & 1) << 2 |
                              (ushort)(SUB161(auVar18 >> 0x1f,0) & 1) << 3 |
                              (ushort)(SUB161(auVar18 >> 0x27,0) & 1) << 4 |
                              (ushort)(SUB161(auVar18 >> 0x2f,0) & 1) << 5 |
                              (ushort)(SUB161(auVar18 >> 0x37,0) & 1) << 6 |
                              (ushort)(SUB161(auVar18 >> 0x3f,0) & 1) << 7 |
                              (ushort)(SUB161(auVar18 >> 0x47,0) & 1) << 8 |
                              (ushort)(SUB161(auVar18 >> 0x4f,0) & 1) << 9 |
                              (ushort)(SUB161(auVar18 >> 0x57,0) & 1) << 10 |
                              (ushort)(SUB161(auVar18 >> 0x5f,0) & 1) << 0xb |
                              (ushort)(SUB161(auVar18 >> 0x67,0) & 1) << 0xc |
                              (ushort)(SUB161(auVar18 >> 0x6f,0) & 1) << 0xd |
                              (ushort)(SUB161(auVar18 >> 0x77,0) & 1) << 0xe |
                             (ushort)(byte)(auVar18[0xf] >> 7) << 0xf) ^ 0xffff;
          } while (uVar17 == 0);
        }
        uVar7 = 0;
        for (uVar8 = uVar17; (uVar8 & 1) == 0; uVar8 = uVar8 >> 1 | 0x80000000) {
          uVar7 = uVar7 + 1;
        }
        uVar17 = uVar17 - 1 & uVar17;
        pdb_1403b0de0(param_1,*(undefined4 *)((longlong)pauVar14 + (ulonglong)uVar7 * -0x68 + -0x68)
                     );
        lVar12 = lVar12 + -1;
      } while (lVar12 != 0);
      pauVar14 = *(undefined1 (**) [16])(param_1 + 0x30);
      lVar16 = *(longlong *)(param_1 + 0x48);
      auVar18 = *pauVar14;
    }
    uVar11 = _UNK_143077fd8;
    uVar13 = *(ulonglong *)(param_1 + 0x38);
    pauVar15 = pauVar14 + 1;
    puStack_80[2] = _DAT_143077fd0;
    puStack_80[3] = uVar11;
    uVar11 = _UNK_143077fc8;
    *puStack_80 = _DAT_143077fc0;
    puStack_80[1] = uVar11;
    uVar17 = ~(uint)(ushort)((ushort)(SUB161(auVar18 >> 7,0) & 1) |
                             (ushort)(SUB161(auVar18 >> 0xf,0) & 1) << 1 |
                             (ushort)(SUB161(auVar18 >> 0x17,0) & 1) << 2 |
                             (ushort)(SUB161(auVar18 >> 0x1f,0) & 1) << 3 |
                             (ushort)(SUB161(auVar18 >> 0x27,0) & 1) << 4 |
                             (ushort)(SUB161(auVar18 >> 0x2f,0) & 1) << 5 |
                             (ushort)(SUB161(auVar18 >> 0x37,0) & 1) << 6 |
                             (ushort)(SUB161(auVar18 >> 0x3f,0) & 1) << 7 |
                             (ushort)(SUB161(auVar18 >> 0x47,0) & 1) << 8 |
                             (ushort)(SUB161(auVar18 >> 0x4f,0) & 1) << 9 |
                             (ushort)(SUB161(auVar18 >> 0x57,0) & 1) << 10 |
                             (ushort)(SUB161(auVar18 >> 0x5f,0) & 1) << 0xb |
                             (ushort)(SUB161(auVar18 >> 0x67,0) & 1) << 0xc |
                             (ushort)(SUB161(auVar18 >> 0x6f,0) & 1) << 0xd |
                             (ushort)(SUB161(auVar18 >> 0x77,0) & 1) << 0xe |
                            (ushort)(byte)(auVar18[0xf] >> 7) << 0xf);
    pauVar9 = pauVar14;
    lStack_58 = param_1;
    while (uStack_78 = uVar13, pauStack_50 = pauVar9, lVar16 != 0) {
      lVar16 = lVar16 + -1;
      if ((short)uVar17 == 0) {
        do {
          auVar18 = *pauVar15;
          pauVar14 = pauVar14 + -0x68;
          pauVar15 = pauVar15 + 1;
          uVar17 = (ushort)((ushort)(SUB161(auVar18 >> 7,0) & 1) |
                            (ushort)(SUB161(auVar18 >> 0xf,0) & 1) << 1 |
                            (ushort)(SUB161(auVar18 >> 0x17,0) & 1) << 2 |
                            (ushort)(SUB161(auVar18 >> 0x1f,0) & 1) << 3 |
                            (ushort)(SUB161(auVar18 >> 0x27,0) & 1) << 4 |
                            (ushort)(SUB161(auVar18 >> 0x2f,0) & 1) << 5 |
                            (ushort)(SUB161(auVar18 >> 0x37,0) & 1) << 6 |
                            (ushort)(SUB161(auVar18 >> 0x3f,0) & 1) << 7 |
                            (ushort)(SUB161(auVar18 >> 0x47,0) & 1) << 8 |
                            (ushort)(SUB161(auVar18 >> 0x4f,0) & 1) << 9 |
                            (ushort)(SUB161(auVar18 >> 0x57,0) & 1) << 10 |
                            (ushort)(SUB161(auVar18 >> 0x5f,0) & 1) << 0xb |
                            (ushort)(SUB161(auVar18 >> 0x67,0) & 1) << 0xc |
                            (ushort)(SUB161(auVar18 >> 0x6f,0) & 1) << 0xd |
                            (ushort)(SUB161(auVar18 >> 0x77,0) & 1) << 0xe |
                           (ushort)(byte)(auVar18[0xf] >> 7) << 0xf) ^ 0xffff;
        } while (uVar17 == 0);
      }
      uVar7 = 0;
      for (uVar8 = uVar17; (uVar8 & 1) == 0; uVar8 = uVar8 >> 1 | 0x80000000) {
        uVar7 = uVar7 + 1;
      }
      if (*(longlong *)((longlong)pauVar14 + (ulonglong)uVar7 * -0x68 + -0x60) == 8) break;
      uVar13 = (ulonglong)uStack_148 >> 0x20;
      uStack_148 = CONCAT44((int)uVar13,
                            *(undefined4 *)((longlong)pauVar14 + (ulonglong)uVar7 * -0x68 + -0x68));
      lVar12 = puStack_68[2];
      uVar11 = pdb_1400aede0(lVar12 + 0x20,&uStack_148);
      pdb_140cabcd0(&puStack_e8,lVar12,uVar11,&uStack_148);
      if ((int)pcStack_e0 == 3) {
        pcStack_e0 = pdb_140c447f0;
        puStack_e8 = (uint *)&uStack_148;
                    /* WARNING: Subroutine does not return */
        pdb_142dc83d0(&UNK_14306d3c7,&puStack_e8,&UNK_1430763a8);
      }
      uVar17 = uVar17 - 1 & uVar17;
      uVar13 = uStack_78;
      pauVar9 = pauStack_50;
    }
    if (uVar13 == 0) {
      uVar10 = 0;
    }
    else {
      pub_142e32780(pauVar9,0xff,uVar13 + 0x11);
      uVar10 = (uVar13 + 1 & 0xfffffffffffffff8) - (uVar13 + 1 >> 3);
      if (uVar13 < 8) {
        uVar10 = uVar13;
      }
    }
    lVar12 = lStack_58;
    puVar1 = puStack_60;
    *(undefined1 (**) [16])(lStack_58 + 0x30) = pauVar9;
    *(ulonglong *)(lStack_58 + 0x38) = uVar13;
    *(ulonglong *)(lStack_58 + 0x40) = uVar10;
    *(undefined8 *)(lStack_58 + 0x48) = 0;
    lVar16 = puStack_60[3];
    if (lVar16 != 0) {
      pauVar15 = (undefined1 (*) [16])*puStack_60;
      auVar18 = *pauVar15;
      uVar17 = ~(uint)(ushort)((ushort)(SUB161(auVar18 >> 7,0) & 1) |
                               (ushort)(SUB161(auVar18 >> 0xf,0) & 1) << 1 |
                               (ushort)(SUB161(auVar18 >> 0x17,0) & 1) << 2 |
                               (ushort)(SUB161(auVar18 >> 0x1f,0) & 1) << 3 |
                               (ushort)(SUB161(auVar18 >> 0x27,0) & 1) << 4 |
                               (ushort)(SUB161(auVar18 >> 0x2f,0) & 1) << 5 |
                               (ushort)(SUB161(auVar18 >> 0x37,0) & 1) << 6 |
                               (ushort)(SUB161(auVar18 >> 0x3f,0) & 1) << 7 |
                               (ushort)(SUB161(auVar18 >> 0x47,0) & 1) << 8 |
                               (ushort)(SUB161(auVar18 >> 0x4f,0) & 1) << 9 |
                               (ushort)(SUB161(auVar18 >> 0x57,0) & 1) << 10 |
                               (ushort)(SUB161(auVar18 >> 0x5f,0) & 1) << 0xb |
                               (ushort)(SUB161(auVar18 >> 0x67,0) & 1) << 0xc |
                               (ushort)(SUB161(auVar18 >> 0x6f,0) & 1) << 0xd |
                               (ushort)(SUB161(auVar18 >> 0x77,0) & 1) << 0xe |
                              (ushort)(byte)(auVar18[0xf] >> 7) << 0xf);
      pauVar14 = pauVar15 + 1;
      do {
        if ((short)uVar17 == 0) {
          do {
            auVar18 = *pauVar14;
            pauVar15 = pauVar15 + -4;
            pauVar14 = pauVar14 + 1;
            uVar17 = (ushort)((ushort)(SUB161(auVar18 >> 7,0) & 1) |
                              (ushort)(SUB161(auVar18 >> 0xf,0) & 1) << 1 |
                              (ushort)(SUB161(auVar18 >> 0x17,0) & 1) << 2 |
                              (ushort)(SUB161(auVar18 >> 0x1f,0) & 1) << 3 |
                              (ushort)(SUB161(auVar18 >> 0x27,0) & 1) << 4 |
                              (ushort)(SUB161(auVar18 >> 0x2f,0) & 1) << 5 |
                              (ushort)(SUB161(auVar18 >> 0x37,0) & 1) << 6 |
                              (ushort)(SUB161(auVar18 >> 0x3f,0) & 1) << 7 |
                              (ushort)(SUB161(auVar18 >> 0x47,0) & 1) << 8 |
                              (ushort)(SUB161(auVar18 >> 0x4f,0) & 1) << 9 |
                              (ushort)(SUB161(auVar18 >> 0x57,0) & 1) << 10 |
                              (ushort)(SUB161(auVar18 >> 0x5f,0) & 1) << 0xb |
                              (ushort)(SUB161(auVar18 >> 0x67,0) & 1) << 0xc |
                              (ushort)(SUB161(auVar18 >> 0x6f,0) & 1) << 0xd |
                              (ushort)(SUB161(auVar18 >> 0x77,0) & 1) << 0xe |
                             (ushort)(byte)(auVar18[0xf] >> 7) << 0xf) ^ 0xffff;
          } while (uVar17 == 0);
        }
        iVar6 = 0;
        for (uVar7 = uVar17; (uVar7 & 1) == 0; uVar7 = uVar7 >> 1 | 0x80000000) {
          iVar6 = iVar6 + 1;
        }
        uVar17 = uVar17 - 1 & uVar17;
        pdb_1403b0de0(lVar12,*(undefined4 *)
                              ((longlong)pauVar15 + (-4 - (ulonglong)(uint)(iVar6 << 2))));
        lVar16 = lVar16 + -1;
      } while (lVar16 != 0);
    }
    lVar16 = puVar1[9];
    if (lVar16 != 0) {
      pauVar15 = (undefined1 (*) [16])puStack_60[6];
      auVar18 = *pauVar15;
      uVar17 = ~(uint)(ushort)((ushort)(SUB161(auVar18 >> 7,0) & 1) |
                               (ushort)(SUB161(auVar18 >> 0xf,0) & 1) << 1 |
                               (ushort)(SUB161(auVar18 >> 0x17,0) & 1) << 2 |
                               (ushort)(SUB161(auVar18 >> 0x1f,0) & 1) << 3 |
                               (ushort)(SUB161(auVar18 >> 0x27,0) & 1) << 4 |
                               (ushort)(SUB161(auVar18 >> 0x2f,0) & 1) << 5 |
                               (ushort)(SUB161(auVar18 >> 0x37,0) & 1) << 6 |
                               (ushort)(SUB161(auVar18 >> 0x3f,0) & 1) << 7 |
                               (ushort)(SUB161(auVar18 >> 0x47,0) & 1) << 8 |
                               (ushort)(SUB161(auVar18 >> 0x4f,0) & 1) << 9 |
                               (ushort)(SUB161(auVar18 >> 0x57,0) & 1) << 10 |
                               (ushort)(SUB161(auVar18 >> 0x5f,0) & 1) << 0xb |
                               (ushort)(SUB161(auVar18 >> 0x67,0) & 1) << 0xc |
                               (ushort)(SUB161(auVar18 >> 0x6f,0) & 1) << 0xd |
                               (ushort)(SUB161(auVar18 >> 0x77,0) & 1) << 0xe |
                              (ushort)(byte)(auVar18[0xf] >> 7) << 0xf);
      pauVar14 = pauVar15 + 1;
      pauStack_50 = (undefined1 (*) [16])(lStack_58 + 0x20);
      do {
        if ((short)uVar17 == 0) {
          do {
            auVar18 = *pauVar14;
            pauVar15 = pauVar15 + -0x68;
            pauVar14 = pauVar14 + 1;
            uVar17 = (ushort)((ushort)(SUB161(auVar18 >> 7,0) & 1) |
                              (ushort)(SUB161(auVar18 >> 0xf,0) & 1) << 1 |
                              (ushort)(SUB161(auVar18 >> 0x17,0) & 1) << 2 |
                              (ushort)(SUB161(auVar18 >> 0x1f,0) & 1) << 3 |
                              (ushort)(SUB161(auVar18 >> 0x27,0) & 1) << 4 |
                              (ushort)(SUB161(auVar18 >> 0x2f,0) & 1) << 5 |
                              (ushort)(SUB161(auVar18 >> 0x37,0) & 1) << 6 |
                              (ushort)(SUB161(auVar18 >> 0x3f,0) & 1) << 7 |
                              (ushort)(SUB161(auVar18 >> 0x47,0) & 1) << 8 |
                              (ushort)(SUB161(auVar18 >> 0x4f,0) & 1) << 9 |
                              (ushort)(SUB161(auVar18 >> 0x57,0) & 1) << 10 |
                              (ushort)(SUB161(auVar18 >> 0x5f,0) & 1) << 0xb |
                              (ushort)(SUB161(auVar18 >> 0x67,0) & 1) << 0xc |
                              (ushort)(SUB161(auVar18 >> 0x6f,0) & 1) << 0xd |
                              (ushort)(SUB161(auVar18 >> 0x77,0) & 1) << 0xe |
                             (ushort)(byte)(auVar18[0xf] >> 7) << 0xf) ^ 0xffff;
          } while (uVar17 == 0);
        }
        uVar7 = 0;
        for (uVar8 = uVar17; (uVar8 & 1) == 0; uVar8 = uVar8 >> 1 | 0x80000000) {
          uVar7 = uVar7 + 1;
        }
        uVar17 = uVar17 - 1 & uVar17;
        lVar12 = (ulonglong)uVar7 * -0x68;
        uVar3 = *(undefined4 *)((longlong)pauVar15 + lVar12 + -0x68);
        uStack_b8 = *(undefined8 *)((longlong)pauVar15 + lVar12 + -0x30);
        puVar1 = (undefined8 *)((longlong)pauVar15 + lVar12 + -0x50);
        puStack_d8 = (undefined8 *)*puVar1;
        pcStack_d0 = (code *)puVar1[1];
        puVar1 = (undefined8 *)((longlong)pauVar15 + lVar12 + -0x40);
        puStack_c8 = (undefined8 *)*puVar1;
        pcStack_c0 = (code *)puVar1[1];
        uStack_90 = *(undefined2 *)((longlong)pauVar15 + lVar12 + -8);
        uStack_8e = *(undefined1 *)((longlong)pauVar15 + lVar12 + -6);
        uStack_98 = *(undefined8 *)((longlong)pauVar15 + lVar12 + -0x10);
        puVar1 = (undefined8 *)((longlong)pauVar15 + lVar12 + -0x60);
        puStack_e8 = (uint *)*puVar1;
        pcStack_e0 = (code *)puVar1[1];
        puVar2 = (undefined4 *)((longlong)pauVar15 + lVar12 + -0x28);
        uStack_b0 = *puVar2;
        uStack_ac = puVar2[1];
        uStack_a8 = puVar2[2];
        uStack_a4 = puVar2[3];
        uStack_a0 = *(undefined8 *)((longlong)pauVar15 + lVar12 + -0x18);
        uStack_6c = uVar3;
        pdb_141407a20(&uStack_148,puStack_80,uVar3,&puStack_e8);
        uVar11 = pdb_1400aede0(pauStack_50,&uStack_6c);
        pdb_140ca8930(lStack_58,uVar11,&uStack_6c);
        pdb_1403b0de0(lStack_88,uVar3);
        lVar16 = lVar16 + -1;
      } while (lVar16 != 0);
    }
  }
  lVar16 = puStack_60[9];
  if (lVar16 != 0) {
    pauVar15 = (undefined1 (*) [16])puStack_60[6];
    auVar18 = *pauVar15;
    uVar17 = ~(uint)(ushort)((ushort)(SUB161(auVar18 >> 7,0) & 1) |
                             (ushort)(SUB161(auVar18 >> 0xf,0) & 1) << 1 |
                             (ushort)(SUB161(auVar18 >> 0x17,0) & 1) << 2 |
                             (ushort)(SUB161(auVar18 >> 0x1f,0) & 1) << 3 |
                             (ushort)(SUB161(auVar18 >> 0x27,0) & 1) << 4 |
                             (ushort)(SUB161(auVar18 >> 0x2f,0) & 1) << 5 |
                             (ushort)(SUB161(auVar18 >> 0x37,0) & 1) << 6 |
                             (ushort)(SUB161(auVar18 >> 0x3f,0) & 1) << 7 |
                             (ushort)(SUB161(auVar18 >> 0x47,0) & 1) << 8 |
                             (ushort)(SUB161(auVar18 >> 0x4f,0) & 1) << 9 |
                             (ushort)(SUB161(auVar18 >> 0x57,0) & 1) << 10 |
                             (ushort)(SUB161(auVar18 >> 0x5f,0) & 1) << 0xb |
                             (ushort)(SUB161(auVar18 >> 0x67,0) & 1) << 0xc |
                             (ushort)(SUB161(auVar18 >> 0x6f,0) & 1) << 0xd |
                             (ushort)(SUB161(auVar18 >> 0x77,0) & 1) << 0xe |
                            (ushort)(byte)(auVar18[0xf] >> 7) << 0xf);
    pauVar14 = pauVar15 + 1;
    uVar11 = puStack_68[2];
    uVar4 = *puStack_68;
    uVar5 = puStack_68[1];
    do {
      if ((short)uVar17 == 0) {
        do {
          auVar18 = *pauVar14;
          pauVar15 = pauVar15 + -0x68;
          pauVar14 = pauVar14 + 1;
          uVar17 = (ushort)((ushort)(SUB161(auVar18 >> 7,0) & 1) |
                            (ushort)(SUB161(auVar18 >> 0xf,0) & 1) << 1 |
                            (ushort)(SUB161(auVar18 >> 0x17,0) & 1) << 2 |
                            (ushort)(SUB161(auVar18 >> 0x1f,0) & 1) << 3 |
                            (ushort)(SUB161(auVar18 >> 0x27,0) & 1) << 4 |
                            (ushort)(SUB161(auVar18 >> 0x2f,0) & 1) << 5 |
                            (ushort)(SUB161(auVar18 >> 0x37,0) & 1) << 6 |
                            (ushort)(SUB161(auVar18 >> 0x3f,0) & 1) << 7 |
                            (ushort)(SUB161(auVar18 >> 0x47,0) & 1) << 8 |
                            (ushort)(SUB161(auVar18 >> 0x4f,0) & 1) << 9 |
                            (ushort)(SUB161(auVar18 >> 0x57,0) & 1) << 10 |
                            (ushort)(SUB161(auVar18 >> 0x5f,0) & 1) << 0xb |
                            (ushort)(SUB161(auVar18 >> 0x67,0) & 1) << 0xc |
                            (ushort)(SUB161(auVar18 >> 0x6f,0) & 1) << 0xd |
                            (ushort)(SUB161(auVar18 >> 0x77,0) & 1) << 0xe |
                           (ushort)(byte)(auVar18[0xf] >> 7) << 0xf) ^ 0xffff;
        } while (uVar17 == 0);
      }
      uVar7 = 0;
      for (uVar8 = uVar17; (uVar8 & 1) == 0; uVar8 = uVar8 >> 1 | 0x80000000) {
        uVar7 = uVar7 + 1;
      }
      uStack_70 = *(uint *)((longlong)pauVar15 + (ulonglong)uVar7 * -0x68 + -0x68);
      uVar13 = (ulonglong)uStack_70;
      lVar12 = pdb_1417b43a0(uVar11,uVar13,uVar4,uVar5);
      if (lVar12 != 3) {
        puStack_e8 = &uStack_70;
        pcStack_e0 = pdb_140c447f0;
        puStack_d8 = &uStack_148;
        pcStack_d0 = pdb_140c34b70;
        puStack_c8 = puStack_68;
        pcStack_c0 = pdb_140c34b70;
        uStack_148 = lVar12;
        uStack_140 = uVar13;
                    /* WARNING: Subroutine does not return */
        pdb_142dc83d0(&UNK_14306d398,&puStack_e8,&UNK_1430763c0);
      }
      uVar17 = uVar17 - 1 & uVar17;
      lVar16 = lVar16 + -1;
    } while (lVar16 != 0);
  }
  return;
}

