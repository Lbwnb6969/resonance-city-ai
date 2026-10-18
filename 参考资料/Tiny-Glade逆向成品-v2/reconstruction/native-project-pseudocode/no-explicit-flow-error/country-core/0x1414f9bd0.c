// VA 0x1414f9bd0, PDB extent 1399 bytes
// country_core::resources::walls::decorator_storage::Decorators::tracked_clone_from<country_core::resources::walls::decorator_storage::DecoMoveToStorage>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/walls/decorator_storage.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::resources::walls::decorator_storage::Decorators::tracked_clone_from<country_core::resources::walls::decorator_storage::DecoMoveToStorage>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/walls/decorator_storage.rs
   Extent: 1399 */

void pdb_1414f9bd0(longlong param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  ulonglong uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  undefined1 (*pauVar8) [16];
  uint uVar9;
  ulonglong uVar10;
  undefined8 uVar11;
  undefined1 (*pauVar12) [16];
  undefined1 (*pauVar13) [16];
  longlong lVar14;
  longlong lVar15;
  bool bVar16;
  undefined1 auVar17 [16];
  undefined1 auStack_148 [96];
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
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
  undefined8 uStack_80;
  undefined8 *puStack_78;
  undefined8 *puStack_70;
  undefined4 uStack_64;
  undefined1 (*pauStack_60) [16];
  longlong lStack_58;
  ulonglong uStack_50;
  undefined8 uStack_48;
  
  uStack_48 = 0xfffffffffffffffe;
  lVar14 = param_1 + 0x60;
  lVar15 = *(longlong *)(param_1 + 0x48);
  uStack_80 = param_3;
  puStack_70 = param_2;
  if ((*(longlong *)(param_1 + 0x18) == 0 && *(longlong *)(param_1 + 0x78) == 0) && lVar15 == 0) {
    pdb_1414ac2c0(lVar14,param_2 + 0xc);
    uVar11 = param_2[0x11];
    *(undefined8 *)(param_1 + 0x80) = param_2[0x10];
    *(undefined8 *)(param_1 + 0x88) = uVar11;
    pdb_1414ac2c0(param_1,param_2);
    uVar11 = param_2[5];
    *(undefined8 *)(param_1 + 0x20) = param_2[4];
    *(undefined8 *)(param_1 + 0x28) = uVar11;
    pdb_1414ac520(param_1 + 0x30,param_2 + 6);
    uVar11 = param_2[0xb];
    *(undefined8 *)(param_1 + 0x50) = param_2[10];
    *(undefined8 *)(param_1 + 0x58) = uVar11;
  }
  else {
    if (*(longlong *)(param_1 + 0x78) != 0) {
      uVar4 = *(ulonglong *)(param_1 + 0x68);
      if (uVar4 == 0) {
        uVar10 = 0;
      }
      else {
        pub_142e32780(*(undefined8 *)(param_1 + 0x60),0xff,uVar4 + 0x11);
        uVar10 = (uVar4 + 1 & 0xfffffffffffffff8) - (uVar4 + 1 >> 3);
        if (uVar4 < 8) {
          uVar10 = uVar4;
        }
        lVar15 = *(longlong *)(param_1 + 0x48);
      }
      *(undefined8 *)(param_1 + 0x78) = 0;
      *(ulonglong *)(param_1 + 0x70) = uVar10;
    }
    puStack_78 = (undefined8 *)(param_1 + 0x30);
    pauVar12 = *(undefined1 (**) [16])(param_1 + 0x30);
    auVar17 = *pauVar12;
    lStack_88 = lVar14;
    if (lVar15 == 0) {
      lVar14 = 0;
    }
    else {
      uVar9 = ~(uint)(ushort)((ushort)(SUB161(auVar17 >> 7,0) & 1) |
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
      pauVar13 = pauVar12 + 1;
      do {
        if ((short)uVar9 == 0) {
          do {
            auVar17 = *pauVar13;
            pauVar12 = pauVar12 + -0x68;
            pauVar13 = pauVar13 + 1;
            uVar9 = (ushort)((ushort)(SUB161(auVar17 >> 7,0) & 1) |
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
          } while (uVar9 == 0);
        }
        uVar6 = 0;
        for (uVar7 = uVar9; (uVar7 & 1) == 0; uVar7 = uVar7 >> 1 | 0x80000000) {
          uVar6 = uVar6 + 1;
        }
        uVar9 = uVar9 - 1 & uVar9;
        pdb_1403b0de0(param_1,*(undefined4 *)((longlong)pauVar12 + (ulonglong)uVar6 * -0x68 + -0x68)
                     );
        lVar15 = lVar15 + -1;
      } while (lVar15 != 0);
      pauVar12 = *(undefined1 (**) [16])(param_1 + 0x30);
      lVar14 = *(longlong *)(param_1 + 0x48);
      auVar17 = *pauVar12;
    }
    uVar11 = _UNK_143310fd8;
    uStack_50 = *(ulonglong *)(param_1 + 0x38);
    pauVar13 = pauVar12 + 1;
    puStack_78[2] = _DAT_143310fd0;
    puStack_78[3] = uVar11;
    uVar11 = _UNK_143310fc8;
    *puStack_78 = _DAT_143310fc0;
    puStack_78[1] = uVar11;
    uVar9 = ~(uint)(ushort)((ushort)(SUB161(auVar17 >> 7,0) & 1) |
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
    pauStack_60 = pauVar12;
    lStack_58 = param_1;
    while (uVar4 = uStack_50, pauVar8 = pauStack_60, bVar16 = lVar14 != 0, lVar14 = lVar14 + -1,
          bVar16) {
      if ((short)uVar9 == 0) {
        do {
          auVar17 = *pauVar13;
          pauVar12 = pauVar12 + -0x68;
          pauVar13 = pauVar13 + 1;
          uVar9 = (ushort)((ushort)(SUB161(auVar17 >> 7,0) & 1) |
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
        } while (uVar9 == 0);
      }
      uVar6 = 0;
      for (uVar7 = uVar9; (uVar7 & 1) == 0; uVar7 = uVar7 >> 1 | 0x80000000) {
        uVar6 = uVar6 + 1;
      }
      if (*(longlong *)((longlong)pauVar12 + (ulonglong)uVar6 * -0x68 + -0x60) == 8) break;
      uVar9 = uVar9 - 1 & uVar9;
      pdb_140c44410(param_3,*(undefined4 *)((longlong)pauVar12 + (ulonglong)uVar6 * -0x68 + -0x68),
                    &UNK_143317e58);
    }
    if (uStack_50 == 0) {
      uVar10 = 0;
    }
    else {
      pub_142e32780(pauStack_60,0xff,uStack_50 + 0x11);
      uVar10 = (uVar4 + 1 & 0xfffffffffffffff8) - (uVar4 + 1 >> 3);
      if (uVar4 < 8) {
        uVar10 = uVar4;
      }
    }
    lVar15 = lStack_58;
    *(undefined1 (**) [16])(lStack_58 + 0x30) = pauVar8;
    *(ulonglong *)(lStack_58 + 0x38) = uVar4;
    *(ulonglong *)(lStack_58 + 0x40) = uVar10;
    *(undefined8 *)(lStack_58 + 0x48) = 0;
    lVar14 = param_2[3];
    if (lVar14 != 0) {
      pauVar13 = (undefined1 (*) [16])*param_2;
      auVar17 = *pauVar13;
      uVar9 = ~(uint)(ushort)((ushort)(SUB161(auVar17 >> 7,0) & 1) |
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
      pauVar12 = pauVar13 + 1;
      do {
        if ((short)uVar9 == 0) {
          do {
            auVar17 = *pauVar12;
            pauVar13 = pauVar13 + -4;
            pauVar12 = pauVar12 + 1;
            uVar9 = (ushort)((ushort)(SUB161(auVar17 >> 7,0) & 1) |
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
          } while (uVar9 == 0);
        }
        iVar5 = 0;
        for (uVar6 = uVar9; (uVar6 & 1) == 0; uVar6 = uVar6 >> 1 | 0x80000000) {
          iVar5 = iVar5 + 1;
        }
        uVar9 = uVar9 - 1 & uVar9;
        pdb_1403b0de0(lVar15,*(undefined4 *)
                              ((longlong)pauVar13 + (-4 - (ulonglong)(uint)(iVar5 << 2))));
        lVar14 = lVar14 + -1;
      } while (lVar14 != 0);
    }
    lVar14 = param_2[9];
    if (lVar14 != 0) {
      pauVar13 = (undefined1 (*) [16])puStack_70[6];
      auVar17 = *pauVar13;
      uVar9 = ~(uint)(ushort)((ushort)(SUB161(auVar17 >> 7,0) & 1) |
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
      pauVar12 = pauVar13 + 1;
      uStack_50 = lStack_58 + 0x20;
      do {
        if ((short)uVar9 == 0) {
          do {
            auVar17 = *pauVar12;
            pauVar13 = pauVar13 + -0x68;
            pauVar12 = pauVar12 + 1;
            uVar9 = (ushort)((ushort)(SUB161(auVar17 >> 7,0) & 1) |
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
          } while (uVar9 == 0);
        }
        uVar6 = 0;
        for (uVar7 = uVar9; (uVar7 & 1) == 0; uVar7 = uVar7 >> 1 | 0x80000000) {
          uVar6 = uVar6 + 1;
        }
        uVar9 = uVar9 - 1 & uVar9;
        lVar15 = (ulonglong)uVar6 * -0x68;
        uVar3 = *(undefined4 *)((longlong)pauVar13 + lVar15 + -0x68);
        uStack_b8 = *(undefined8 *)((longlong)pauVar13 + lVar15 + -0x30);
        puVar1 = (undefined8 *)((longlong)pauVar13 + lVar15 + -0x50);
        uStack_d8 = *puVar1;
        uStack_d0 = puVar1[1];
        puVar1 = (undefined8 *)((longlong)pauVar13 + lVar15 + -0x40);
        uStack_c8 = *puVar1;
        uStack_c0 = puVar1[1];
        uStack_90 = *(undefined2 *)((longlong)pauVar13 + lVar15 + -8);
        uStack_8e = *(undefined1 *)((longlong)pauVar13 + lVar15 + -6);
        uStack_98 = *(undefined8 *)((longlong)pauVar13 + lVar15 + -0x10);
        puVar1 = (undefined8 *)((longlong)pauVar13 + lVar15 + -0x60);
        uStack_e8 = *puVar1;
        uStack_e0 = puVar1[1];
        puVar2 = (undefined4 *)((longlong)pauVar13 + lVar15 + -0x28);
        uStack_b0 = *puVar2;
        uStack_ac = puVar2[1];
        uStack_a8 = puVar2[2];
        uStack_a4 = puVar2[3];
        uStack_a0 = *(undefined8 *)((longlong)pauVar13 + lVar15 + -0x18);
        uStack_64 = uVar3;
        pdb_141407a20(auStack_148,puStack_78,uVar3,&uStack_e8);
        uVar11 = pdb_1400aede0(uStack_50,&uStack_64);
        pdb_140ca8930(lStack_58,uVar11,&uStack_64);
        pdb_1403b0de0(lStack_88,uVar3);
        lVar14 = lVar14 + -1;
      } while (lVar14 != 0);
    }
  }
  uVar11 = uStack_80;
  lVar14 = puStack_70[9];
  if (lVar14 != 0) {
    pauVar13 = (undefined1 (*) [16])puStack_70[6];
    auVar17 = *pauVar13;
    uVar9 = ~(uint)(ushort)((ushort)(SUB161(auVar17 >> 7,0) & 1) |
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
    pauVar12 = pauVar13 + 1;
    do {
      if ((short)uVar9 == 0) {
        do {
          auVar17 = *pauVar12;
          pauVar13 = pauVar13 + -0x68;
          pauVar12 = pauVar12 + 1;
          uVar9 = (ushort)((ushort)(SUB161(auVar17 >> 7,0) & 1) |
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
        } while (uVar9 == 0);
      }
      uVar6 = 0;
      for (uVar7 = uVar9; (uVar7 & 1) == 0; uVar7 = uVar7 >> 1 | 0x80000000) {
        uVar6 = uVar6 + 1;
      }
      uVar9 = uVar9 - 1 & uVar9;
      pdb_140c44380(uVar11,*(undefined4 *)((longlong)pauVar13 + (ulonglong)uVar6 * -0x68 + -0x68),
                    &UNK_143317e70);
      lVar14 = lVar14 + -1;
    } while (lVar14 != 0);
  }
  return;
}

