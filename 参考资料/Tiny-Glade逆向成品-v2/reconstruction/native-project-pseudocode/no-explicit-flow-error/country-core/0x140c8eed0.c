// VA 0x140c8eed0, PDB extent 1080 bytes
// country_core::resources::walls::decorator_storage::Decorators::tracked_clone_from<tuple$<> >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/walls/decorator_storage.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::resources::walls::decorator_storage::Decorators::tracked_clone_from<tuple$<> >
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/walls/decorator_storage.rs
   Extent: 1080 */

void pdb_140c8eed0(longlong param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  undefined1 auVar3 [16];
  undefined4 uVar4;
  ulonglong uVar5;
  ushort uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  longlong lVar11;
  longlong lVar12;
  undefined8 uVar13;
  undefined1 (*pauVar14) [16];
  ulonglong uVar15;
  undefined1 (*pauVar16) [16];
  ulonglong uVar17;
  undefined1 (*pauVar18) [16];
  undefined4 uStack_10c;
  undefined8 *puStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined2 uStack_a8;
  undefined1 uStack_a6;
  undefined1 auStack_a0 [96];
  
  uVar17 = *(ulonglong *)(param_1 + 0x48);
  uVar15 = *(ulonglong *)(param_1 + 0x18) | *(ulonglong *)(param_1 + 0x78) | uVar17;
  puStack_108 = param_2;
  if (uVar15 == 0) {
    pdb_140ca3010(param_1 + 0x60,param_2 + 0xc);
    uVar13 = param_2[0x11];
    *(undefined8 *)(param_1 + 0x80) = param_2[0x10];
    *(undefined8 *)(param_1 + 0x88) = uVar13;
    pdb_140ca3010(param_1,param_2);
    uVar13 = param_2[5];
    *(undefined8 *)(param_1 + 0x20) = param_2[4];
    *(undefined8 *)(param_1 + 0x28) = uVar13;
    pdb_140ca34c0(param_1 + 0x30,param_2 + 6);
    uVar13 = param_2[0xb];
    *(undefined8 *)(param_1 + 0x50) = param_2[10];
    *(undefined8 *)(param_1 + 0x58) = uVar13;
    goto LAB_140c8f2b1;
  }
  if (*(ulonglong *)(param_1 + 0x78) != 0) {
    uVar5 = *(ulonglong *)(param_1 + 0x68);
    if (uVar5 == 0) {
      uVar15 = 0;
    }
    else {
      pub_142e32780(*(undefined8 *)(param_1 + 0x60),CONCAT71((int7)(uVar15 >> 8),0xff),uVar5 + 0x11)
      ;
      uVar15 = (uVar5 + 1 & 0xfffffffffffffff8) - (uVar5 + 1 >> 3);
      if (uVar5 < 8) {
        uVar15 = uVar5;
      }
      uVar17 = *(ulonglong *)(param_1 + 0x48);
    }
    *(undefined8 *)(param_1 + 0x78) = 0;
    *(ulonglong *)(param_1 + 0x70) = uVar15;
  }
  pauVar18 = *(undefined1 (**) [16])(param_1 + 0x30);
  if (uVar17 == 0) {
    uVar17 = *(ulonglong *)(param_1 + 0x38);
    *(undefined8 *)(param_1 + 0x40) = _DAT_143077fd0;
    uVar13 = _UNK_143077fc8;
    *(undefined8 *)(param_1 + 0x30) = _DAT_143077fc0;
    *(undefined8 *)(param_1 + 0x38) = uVar13;
    if (uVar17 == 0) goto LAB_140c8f100;
LAB_140c8f0b5:
    pub_142e32780(pauVar18,0xff,uVar17 + 0x11);
    uVar15 = (uVar17 + 1 & 0xfffffffffffffff8) - (uVar17 + 1 >> 3);
    if (uVar17 < 8) {
      uVar15 = uVar17;
    }
  }
  else {
    auVar3 = *pauVar18;
    uVar10 = ~(uint)(ushort)((ushort)(SUB161(auVar3 >> 7,0) & 1) |
                             (ushort)(SUB161(auVar3 >> 0xf,0) & 1) << 1 |
                             (ushort)(SUB161(auVar3 >> 0x17,0) & 1) << 2 |
                             (ushort)(SUB161(auVar3 >> 0x1f,0) & 1) << 3 |
                             (ushort)(SUB161(auVar3 >> 0x27,0) & 1) << 4 |
                             (ushort)(SUB161(auVar3 >> 0x2f,0) & 1) << 5 |
                             (ushort)(SUB161(auVar3 >> 0x37,0) & 1) << 6 |
                             (ushort)(SUB161(auVar3 >> 0x3f,0) & 1) << 7 |
                             (ushort)(SUB161(auVar3 >> 0x47,0) & 1) << 8 |
                             (ushort)(SUB161(auVar3 >> 0x4f,0) & 1) << 9 |
                             (ushort)(SUB161(auVar3 >> 0x57,0) & 1) << 10 |
                             (ushort)(SUB161(auVar3 >> 0x5f,0) & 1) << 0xb |
                             (ushort)(SUB161(auVar3 >> 0x67,0) & 1) << 0xc |
                             (ushort)(SUB161(auVar3 >> 0x6f,0) & 1) << 0xd |
                             (ushort)(SUB161(auVar3 >> 0x77,0) & 1) << 0xe |
                            (ushort)(byte)(auVar3[0xf] >> 7) << 0xf);
    pauVar14 = pauVar18 + 1;
    do {
      if ((short)uVar10 == 0) {
        do {
          auVar3 = *pauVar14;
          pauVar18 = pauVar18 + -0x68;
          pauVar14 = pauVar14 + 1;
          uVar10 = (ushort)((ushort)(SUB161(auVar3 >> 7,0) & 1) |
                            (ushort)(SUB161(auVar3 >> 0xf,0) & 1) << 1 |
                            (ushort)(SUB161(auVar3 >> 0x17,0) & 1) << 2 |
                            (ushort)(SUB161(auVar3 >> 0x1f,0) & 1) << 3 |
                            (ushort)(SUB161(auVar3 >> 0x27,0) & 1) << 4 |
                            (ushort)(SUB161(auVar3 >> 0x2f,0) & 1) << 5 |
                            (ushort)(SUB161(auVar3 >> 0x37,0) & 1) << 6 |
                            (ushort)(SUB161(auVar3 >> 0x3f,0) & 1) << 7 |
                            (ushort)(SUB161(auVar3 >> 0x47,0) & 1) << 8 |
                            (ushort)(SUB161(auVar3 >> 0x4f,0) & 1) << 9 |
                            (ushort)(SUB161(auVar3 >> 0x57,0) & 1) << 10 |
                            (ushort)(SUB161(auVar3 >> 0x5f,0) & 1) << 0xb |
                            (ushort)(SUB161(auVar3 >> 0x67,0) & 1) << 0xc |
                            (ushort)(SUB161(auVar3 >> 0x6f,0) & 1) << 0xd |
                            (ushort)(SUB161(auVar3 >> 0x77,0) & 1) << 0xe |
                           (ushort)(byte)(auVar3[0xf] >> 7) << 0xf) ^ 0xffff;
        } while (uVar10 == 0);
      }
      uVar7 = 0;
      for (uVar9 = uVar10; (uVar9 & 1) == 0; uVar9 = uVar9 >> 1 | 0x80000000) {
        uVar7 = uVar7 + 1;
      }
      uVar10 = uVar10 - 1 & uVar10;
      pdb_1403b0de0(param_1,*(undefined4 *)((longlong)pauVar18 + (ulonglong)uVar7 * -0x68 + -0x68));
      uVar13 = _UNK_143077fd8;
      uVar17 = uVar17 - 1;
    } while (uVar17 != 0);
    pauVar18 = *(undefined1 (**) [16])(param_1 + 0x30);
    uVar17 = *(ulonglong *)(param_1 + 0x38);
    auVar3 = *pauVar18;
    lVar11 = *(longlong *)(param_1 + 0x48);
    *(undefined8 *)(param_1 + 0x40) = _DAT_143077fd0;
    *(undefined8 *)(param_1 + 0x48) = uVar13;
    uVar13 = _UNK_143077fc8;
    *(undefined8 *)(param_1 + 0x30) = _DAT_143077fc0;
    *(undefined8 *)(param_1 + 0x38) = uVar13;
    if (lVar11 != 0) {
      uVar10 = ~(uint)(ushort)((ushort)(SUB161(auVar3 >> 7,0) & 1) |
                               (ushort)(SUB161(auVar3 >> 0xf,0) & 1) << 1 |
                               (ushort)(SUB161(auVar3 >> 0x17,0) & 1) << 2 |
                               (ushort)(SUB161(auVar3 >> 0x1f,0) & 1) << 3 |
                               (ushort)(SUB161(auVar3 >> 0x27,0) & 1) << 4 |
                               (ushort)(SUB161(auVar3 >> 0x2f,0) & 1) << 5 |
                               (ushort)(SUB161(auVar3 >> 0x37,0) & 1) << 6 |
                               (ushort)(SUB161(auVar3 >> 0x3f,0) & 1) << 7 |
                               (ushort)(SUB161(auVar3 >> 0x47,0) & 1) << 8 |
                               (ushort)(SUB161(auVar3 >> 0x4f,0) & 1) << 9 |
                               (ushort)(SUB161(auVar3 >> 0x57,0) & 1) << 10 |
                               (ushort)(SUB161(auVar3 >> 0x5f,0) & 1) << 0xb |
                               (ushort)(SUB161(auVar3 >> 0x67,0) & 1) << 0xc |
                               (ushort)(SUB161(auVar3 >> 0x6f,0) & 1) << 0xd |
                               (ushort)(SUB161(auVar3 >> 0x77,0) & 1) << 0xe |
                              (ushort)(byte)(auVar3[0xf] >> 7) << 0xf);
      pauVar14 = pauVar18 + 1;
      pauVar16 = pauVar18;
      do {
        if ((short)uVar10 == 0) {
          do {
            auVar3 = *pauVar14;
            pauVar16 = pauVar16 + -0x68;
            pauVar14 = pauVar14 + 1;
            uVar10 = (ushort)((ushort)(SUB161(auVar3 >> 7,0) & 1) |
                              (ushort)(SUB161(auVar3 >> 0xf,0) & 1) << 1 |
                              (ushort)(SUB161(auVar3 >> 0x17,0) & 1) << 2 |
                              (ushort)(SUB161(auVar3 >> 0x1f,0) & 1) << 3 |
                              (ushort)(SUB161(auVar3 >> 0x27,0) & 1) << 4 |
                              (ushort)(SUB161(auVar3 >> 0x2f,0) & 1) << 5 |
                              (ushort)(SUB161(auVar3 >> 0x37,0) & 1) << 6 |
                              (ushort)(SUB161(auVar3 >> 0x3f,0) & 1) << 7 |
                              (ushort)(SUB161(auVar3 >> 0x47,0) & 1) << 8 |
                              (ushort)(SUB161(auVar3 >> 0x4f,0) & 1) << 9 |
                              (ushort)(SUB161(auVar3 >> 0x57,0) & 1) << 10 |
                              (ushort)(SUB161(auVar3 >> 0x5f,0) & 1) << 0xb |
                              (ushort)(SUB161(auVar3 >> 0x67,0) & 1) << 0xc |
                              (ushort)(SUB161(auVar3 >> 0x6f,0) & 1) << 0xd |
                              (ushort)(SUB161(auVar3 >> 0x77,0) & 1) << 0xe |
                             (ushort)(byte)(auVar3[0xf] >> 7) << 0xf) ^ 0xffff;
          } while (uVar10 == 0);
        }
        uVar7 = 0;
        for (uVar9 = uVar10; (uVar9 & 1) == 0; uVar9 = uVar9 >> 1 | 0x80000000) {
          uVar7 = uVar7 + 1;
        }
        if (*(longlong *)((longlong)pauVar16 + (ulonglong)uVar7 * -0x68 + -0x60) == 8) break;
        uVar10 = uVar10 - 1 & uVar10;
        lVar11 = lVar11 + -1;
      } while (lVar11 != 0);
    }
    if (uVar17 != 0) goto LAB_140c8f0b5;
LAB_140c8f100:
    uVar15 = 0;
  }
  *(undefined1 (**) [16])(param_1 + 0x30) = pauVar18;
  *(ulonglong *)(param_1 + 0x38) = uVar17;
  *(ulonglong *)(param_1 + 0x40) = uVar15;
  *(undefined8 *)(param_1 + 0x48) = 0;
  lVar11 = param_2[3];
  if (lVar11 != 0) {
    pauVar14 = (undefined1 (*) [16])*param_2;
    auVar3 = *pauVar14;
    uVar10 = ~(uint)(ushort)((ushort)(SUB161(auVar3 >> 7,0) & 1) |
                             (ushort)(SUB161(auVar3 >> 0xf,0) & 1) << 1 |
                             (ushort)(SUB161(auVar3 >> 0x17,0) & 1) << 2 |
                             (ushort)(SUB161(auVar3 >> 0x1f,0) & 1) << 3 |
                             (ushort)(SUB161(auVar3 >> 0x27,0) & 1) << 4 |
                             (ushort)(SUB161(auVar3 >> 0x2f,0) & 1) << 5 |
                             (ushort)(SUB161(auVar3 >> 0x37,0) & 1) << 6 |
                             (ushort)(SUB161(auVar3 >> 0x3f,0) & 1) << 7 |
                             (ushort)(SUB161(auVar3 >> 0x47,0) & 1) << 8 |
                             (ushort)(SUB161(auVar3 >> 0x4f,0) & 1) << 9 |
                             (ushort)(SUB161(auVar3 >> 0x57,0) & 1) << 10 |
                             (ushort)(SUB161(auVar3 >> 0x5f,0) & 1) << 0xb |
                             (ushort)(SUB161(auVar3 >> 0x67,0) & 1) << 0xc |
                             (ushort)(SUB161(auVar3 >> 0x6f,0) & 1) << 0xd |
                             (ushort)(SUB161(auVar3 >> 0x77,0) & 1) << 0xe |
                            (ushort)(byte)(auVar3[0xf] >> 7) << 0xf);
    pauVar18 = pauVar14 + 1;
    do {
      if ((short)uVar10 == 0) {
        do {
          auVar3 = *pauVar18;
          pauVar14 = pauVar14 + -4;
          pauVar18 = pauVar18 + 1;
          uVar10 = (ushort)((ushort)(SUB161(auVar3 >> 7,0) & 1) |
                            (ushort)(SUB161(auVar3 >> 0xf,0) & 1) << 1 |
                            (ushort)(SUB161(auVar3 >> 0x17,0) & 1) << 2 |
                            (ushort)(SUB161(auVar3 >> 0x1f,0) & 1) << 3 |
                            (ushort)(SUB161(auVar3 >> 0x27,0) & 1) << 4 |
                            (ushort)(SUB161(auVar3 >> 0x2f,0) & 1) << 5 |
                            (ushort)(SUB161(auVar3 >> 0x37,0) & 1) << 6 |
                            (ushort)(SUB161(auVar3 >> 0x3f,0) & 1) << 7 |
                            (ushort)(SUB161(auVar3 >> 0x47,0) & 1) << 8 |
                            (ushort)(SUB161(auVar3 >> 0x4f,0) & 1) << 9 |
                            (ushort)(SUB161(auVar3 >> 0x57,0) & 1) << 10 |
                            (ushort)(SUB161(auVar3 >> 0x5f,0) & 1) << 0xb |
                            (ushort)(SUB161(auVar3 >> 0x67,0) & 1) << 0xc |
                            (ushort)(SUB161(auVar3 >> 0x6f,0) & 1) << 0xd |
                            (ushort)(SUB161(auVar3 >> 0x77,0) & 1) << 0xe |
                           (ushort)(byte)(auVar3[0xf] >> 7) << 0xf) ^ 0xffff;
        } while (uVar10 == 0);
      }
      iVar8 = 0;
      for (uVar7 = uVar10; (uVar7 & 1) == 0; uVar7 = uVar7 >> 1 | 0x80000000) {
        iVar8 = iVar8 + 1;
      }
      uVar10 = uVar10 - 1 & uVar10;
      pdb_1403b0de0(param_1,*(undefined4 *)
                             ((longlong)pauVar14 + (-4 - (ulonglong)(uint)(iVar8 << 2))));
      lVar11 = lVar11 + -1;
    } while (lVar11 != 0);
  }
  lVar11 = param_2[9];
  if (lVar11 != 0) {
    pauVar14 = (undefined1 (*) [16])puStack_108[6];
    auVar3 = *pauVar14;
    uVar10 = ~(uint)(ushort)((ushort)(SUB161(auVar3 >> 7,0) & 1) |
                             (ushort)(SUB161(auVar3 >> 0xf,0) & 1) << 1 |
                             (ushort)(SUB161(auVar3 >> 0x17,0) & 1) << 2 |
                             (ushort)(SUB161(auVar3 >> 0x1f,0) & 1) << 3 |
                             (ushort)(SUB161(auVar3 >> 0x27,0) & 1) << 4 |
                             (ushort)(SUB161(auVar3 >> 0x2f,0) & 1) << 5 |
                             (ushort)(SUB161(auVar3 >> 0x37,0) & 1) << 6 |
                             (ushort)(SUB161(auVar3 >> 0x3f,0) & 1) << 7 |
                             (ushort)(SUB161(auVar3 >> 0x47,0) & 1) << 8 |
                             (ushort)(SUB161(auVar3 >> 0x4f,0) & 1) << 9 |
                             (ushort)(SUB161(auVar3 >> 0x57,0) & 1) << 10 |
                             (ushort)(SUB161(auVar3 >> 0x5f,0) & 1) << 0xb |
                             (ushort)(SUB161(auVar3 >> 0x67,0) & 1) << 0xc |
                             (ushort)(SUB161(auVar3 >> 0x6f,0) & 1) << 0xd |
                             (ushort)(SUB161(auVar3 >> 0x77,0) & 1) << 0xe |
                            (ushort)(byte)(auVar3[0xf] >> 7) << 0xf);
    pauVar18 = pauVar14 + 1;
    do {
      if ((short)uVar10 == 0) {
        do {
          auVar3 = *pauVar18;
          pauVar14 = pauVar14 + -0x68;
          pauVar18 = pauVar18 + 1;
          uVar10 = (ushort)((ushort)(SUB161(auVar3 >> 7,0) & 1) |
                            (ushort)(SUB161(auVar3 >> 0xf,0) & 1) << 1 |
                            (ushort)(SUB161(auVar3 >> 0x17,0) & 1) << 2 |
                            (ushort)(SUB161(auVar3 >> 0x1f,0) & 1) << 3 |
                            (ushort)(SUB161(auVar3 >> 0x27,0) & 1) << 4 |
                            (ushort)(SUB161(auVar3 >> 0x2f,0) & 1) << 5 |
                            (ushort)(SUB161(auVar3 >> 0x37,0) & 1) << 6 |
                            (ushort)(SUB161(auVar3 >> 0x3f,0) & 1) << 7 |
                            (ushort)(SUB161(auVar3 >> 0x47,0) & 1) << 8 |
                            (ushort)(SUB161(auVar3 >> 0x4f,0) & 1) << 9 |
                            (ushort)(SUB161(auVar3 >> 0x57,0) & 1) << 10 |
                            (ushort)(SUB161(auVar3 >> 0x5f,0) & 1) << 0xb |
                            (ushort)(SUB161(auVar3 >> 0x67,0) & 1) << 0xc |
                            (ushort)(SUB161(auVar3 >> 0x6f,0) & 1) << 0xd |
                            (ushort)(SUB161(auVar3 >> 0x77,0) & 1) << 0xe |
                           (ushort)(byte)(auVar3[0xf] >> 7) << 0xf) ^ 0xffff;
        } while (uVar10 == 0);
      }
      uVar7 = 0;
      for (uVar9 = uVar10; (uVar9 & 1) == 0; uVar9 = uVar9 >> 1 | 0x80000000) {
        uVar7 = uVar7 + 1;
      }
      uVar10 = uVar10 - 1 & uVar10;
      lVar12 = (ulonglong)uVar7 * -0x68;
      uVar4 = *(undefined4 *)((longlong)pauVar14 + lVar12 + -0x68);
      uStack_d0 = *(undefined8 *)((longlong)pauVar14 + lVar12 + -0x30);
      puVar1 = (undefined8 *)((longlong)pauVar14 + lVar12 + -0x50);
      uStack_f0 = *puVar1;
      uStack_e8 = puVar1[1];
      puVar1 = (undefined8 *)((longlong)pauVar14 + lVar12 + -0x40);
      uStack_e0 = *puVar1;
      uStack_d8 = puVar1[1];
      uStack_a8 = *(undefined2 *)((longlong)pauVar14 + lVar12 + -8);
      uStack_a6 = *(undefined1 *)((longlong)pauVar14 + lVar12 + -6);
      uStack_b0 = *(undefined8 *)((longlong)pauVar14 + lVar12 + -0x10);
      puVar1 = (undefined8 *)((longlong)pauVar14 + lVar12 + -0x60);
      uStack_100 = *puVar1;
      uStack_f8 = puVar1[1];
      puVar2 = (undefined4 *)((longlong)pauVar14 + lVar12 + -0x28);
      uStack_c8 = *puVar2;
      uStack_c4 = puVar2[1];
      uStack_c0 = puVar2[2];
      uStack_bc = puVar2[3];
      uStack_b8 = *(undefined8 *)((longlong)pauVar14 + lVar12 + -0x18);
      uStack_10c = uVar4;
      pdb_141407a20(auStack_a0,param_1 + 0x30,uVar4,&uStack_100);
      uVar13 = pdb_1400aede0(param_1 + 0x20,&uStack_10c);
      pdb_140ca8930(param_1,uVar13,&uStack_10c);
      pdb_1403b0de0(param_1 + 0x60,uVar4);
      lVar11 = lVar11 + -1;
    } while (lVar11 != 0);
  }
LAB_140c8f2b1:
  if (puStack_108[9] != 0) {
    pauVar18 = (undefined1 (*) [16])puStack_108[6];
    auVar3 = *pauVar18;
    uVar6 = (ushort)(SUB161(auVar3 >> 7,0) & 1) | (ushort)(SUB161(auVar3 >> 0xf,0) & 1) << 1 |
            (ushort)(SUB161(auVar3 >> 0x17,0) & 1) << 2 |
            (ushort)(SUB161(auVar3 >> 0x1f,0) & 1) << 3 |
            (ushort)(SUB161(auVar3 >> 0x27,0) & 1) << 4 |
            (ushort)(SUB161(auVar3 >> 0x2f,0) & 1) << 5 |
            (ushort)(SUB161(auVar3 >> 0x37,0) & 1) << 6 |
            (ushort)(SUB161(auVar3 >> 0x3f,0) & 1) << 7 |
            (ushort)(SUB161(auVar3 >> 0x47,0) & 1) << 8 |
            (ushort)(SUB161(auVar3 >> 0x4f,0) & 1) << 9 |
            (ushort)(SUB161(auVar3 >> 0x57,0) & 1) << 10 |
            (ushort)(SUB161(auVar3 >> 0x5f,0) & 1) << 0xb |
            (ushort)(SUB161(auVar3 >> 0x67,0) & 1) << 0xc |
            (ushort)(SUB161(auVar3 >> 0x6f,0) & 1) << 0xd |
            (ushort)(SUB161(auVar3 >> 0x77,0) & 1) << 0xe | (ushort)(byte)(auVar3[0xf] >> 7) << 0xf;
    while (uVar6 == 0xffff) {
      pauVar18 = pauVar18 + 1;
      auVar3 = *pauVar18;
      uVar6 = (ushort)(SUB161(auVar3 >> 7,0) & 1) | (ushort)(SUB161(auVar3 >> 0xf,0) & 1) << 1 |
              (ushort)(SUB161(auVar3 >> 0x17,0) & 1) << 2 |
              (ushort)(SUB161(auVar3 >> 0x1f,0) & 1) << 3 |
              (ushort)(SUB161(auVar3 >> 0x27,0) & 1) << 4 |
              (ushort)(SUB161(auVar3 >> 0x2f,0) & 1) << 5 |
              (ushort)(SUB161(auVar3 >> 0x37,0) & 1) << 6 |
              (ushort)(SUB161(auVar3 >> 0x3f,0) & 1) << 7 |
              (ushort)(SUB161(auVar3 >> 0x47,0) & 1) << 8 |
              (ushort)(SUB161(auVar3 >> 0x4f,0) & 1) << 9 |
              (ushort)(SUB161(auVar3 >> 0x57,0) & 1) << 10 |
              (ushort)(SUB161(auVar3 >> 0x5f,0) & 1) << 0xb |
              (ushort)(SUB161(auVar3 >> 0x67,0) & 1) << 0xc |
              (ushort)(SUB161(auVar3 >> 0x6f,0) & 1) << 0xd |
              (ushort)(SUB161(auVar3 >> 0x77,0) & 1) << 0xe |
              (ushort)(byte)(auVar3[0xf] >> 7) << 0xf;
    }
  }
  return;
}

