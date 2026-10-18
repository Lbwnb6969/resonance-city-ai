// VA 0x1424c3220, PDB extent 1383 bytes
// country_core::resources::walls::decorator_storage::Decorators::tracked_clone_from<tuple$<> >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/walls/decorator_storage.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::resources::walls::decorator_storage::Decorators::tracked_clone_from<tuple$<> >
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/walls/decorator_storage.rs
   Extent: 1383 */

void pdb_1424c3220(longlong param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  ulonglong uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  longlong lVar8;
  undefined1 (*pauVar9) [16];
  uint uVar10;
  ulonglong uVar11;
  undefined8 uVar12;
  undefined1 (*pauVar13) [16];
  undefined1 (*pauVar14) [16];
  longlong lVar15;
  longlong lVar16;
  bool bVar17;
  undefined1 auVar18 [16];
  undefined1 auStack_140 [96];
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined2 uStack_88;
  undefined1 uStack_86;
  undefined8 *puStack_80;
  undefined8 *puStack_78;
  undefined4 uStack_6c;
  longlong lStack_68;
  ulonglong uStack_60;
  undefined1 (*pauStack_58) [16];
  undefined1 uStack_49;
  undefined8 uStack_48;
  
  uStack_48 = 0xfffffffffffffffe;
  lVar16 = param_1 + 0x60;
  lVar15 = *(longlong *)(param_1 + 0x48);
  puStack_78 = param_2;
  if ((*(longlong *)(param_1 + 0x18) == 0 && *(longlong *)(param_1 + 0x78) == 0) && lVar15 == 0) {
    pdb_1414097b0(lVar16,param_2 + 0xc);
    uVar12 = param_2[0x11];
    *(undefined8 *)(param_1 + 0x80) = param_2[0x10];
    *(undefined8 *)(param_1 + 0x88) = uVar12;
    pdb_1414097b0(param_1,param_2);
    uVar12 = param_2[5];
    *(undefined8 *)(param_1 + 0x20) = param_2[4];
    *(undefined8 *)(param_1 + 0x28) = uVar12;
    pdb_141409a10(param_1 + 0x30,param_2 + 6);
    uVar12 = param_2[0xb];
    *(undefined8 *)(param_1 + 0x50) = param_2[10];
    *(undefined8 *)(param_1 + 0x58) = uVar12;
  }
  else {
    if (*(longlong *)(param_1 + 0x78) != 0) {
      uVar4 = *(ulonglong *)(param_1 + 0x68);
      if (uVar4 == 0) {
        uVar11 = 0;
      }
      else {
        pub_142e32780(*(undefined8 *)(param_1 + 0x60),0xff,uVar4 + 0x11);
        uVar11 = (uVar4 + 1 & 0xfffffffffffffff8) - (uVar4 + 1 >> 3);
        if (uVar4 < 8) {
          uVar11 = uVar4;
        }
        lVar15 = *(longlong *)(param_1 + 0x48);
      }
      *(undefined8 *)(param_1 + 0x78) = 0;
      *(ulonglong *)(param_1 + 0x70) = uVar11;
    }
    puStack_80 = (undefined8 *)(param_1 + 0x30);
    pauVar13 = *(undefined1 (**) [16])(param_1 + 0x30);
    auVar18 = *pauVar13;
    if (lVar15 == 0) {
      lVar15 = 0;
    }
    else {
      uVar10 = ~(uint)(ushort)((ushort)(SUB161(auVar18 >> 7,0) & 1) |
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
      pauVar14 = pauVar13 + 1;
      do {
        if ((short)uVar10 == 0) {
          do {
            auVar18 = *pauVar14;
            pauVar13 = pauVar13 + -0x68;
            pauVar14 = pauVar14 + 1;
            uVar10 = (ushort)((ushort)(SUB161(auVar18 >> 7,0) & 1) |
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
          } while (uVar10 == 0);
        }
        uVar6 = 0;
        for (uVar7 = uVar10; (uVar7 & 1) == 0; uVar7 = uVar7 >> 1 | 0x80000000) {
          uVar6 = uVar6 + 1;
        }
        uVar10 = uVar10 - 1 & uVar10;
        pdb_1403b0de0(param_1,*(undefined4 *)((longlong)pauVar13 + (ulonglong)uVar6 * -0x68 + -0x68)
                     );
        lVar15 = lVar15 + -1;
      } while (lVar15 != 0);
      pauVar13 = *(undefined1 (**) [16])(param_1 + 0x30);
      lVar15 = *(longlong *)(param_1 + 0x48);
      auVar18 = *pauVar13;
    }
    uVar12 = _UNK_143307bb8;
    uStack_60 = *(ulonglong *)(param_1 + 0x38);
    pauVar14 = pauVar13 + 1;
    puStack_80[2] = _DAT_143307bb0;
    puStack_80[3] = uVar12;
    uVar12 = _UNK_143307ba8;
    *puStack_80 = _DAT_143307ba0;
    puStack_80[1] = uVar12;
    uVar10 = ~(uint)(ushort)((ushort)(SUB161(auVar18 >> 7,0) & 1) |
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
    lStack_68 = param_1;
    pauStack_58 = pauVar13;
    while (pauVar9 = pauStack_58, uVar4 = uStack_60, bVar17 = lVar15 != 0, lVar15 = lVar15 + -1,
          bVar17) {
      if ((short)uVar10 == 0) {
        do {
          auVar18 = *pauVar14;
          pauVar13 = pauVar13 + -0x68;
          pauVar14 = pauVar14 + 1;
          uVar10 = (ushort)((ushort)(SUB161(auVar18 >> 7,0) & 1) |
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
        } while (uVar10 == 0);
      }
      uVar6 = 0;
      for (uVar7 = uVar10; (uVar7 & 1) == 0; uVar7 = uVar7 >> 1 | 0x80000000) {
        uVar6 = uVar6 + 1;
      }
      if (*(longlong *)((longlong)pauVar13 + (ulonglong)uVar6 * -0x68 + -0x60) == 8) break;
      uVar10 = uVar10 - 1 & uVar10;
      pdb_14007ee60(&uStack_49,
                    *(undefined4 *)((longlong)pauVar13 + (ulonglong)uVar6 * -0x68 + -0x68));
    }
    if (uStack_60 == 0) {
      uVar11 = 0;
    }
    else {
      pub_142e32780(pauStack_58,0xff,uStack_60 + 0x11);
      uVar11 = (uVar4 + 1 & 0xfffffffffffffff8) - (uVar4 + 1 >> 3);
      if (uVar4 < 8) {
        uVar11 = uVar4;
      }
    }
    lVar8 = lStack_68;
    *(undefined1 (**) [16])(lStack_68 + 0x30) = pauVar9;
    *(ulonglong *)(lStack_68 + 0x38) = uVar4;
    *(ulonglong *)(lStack_68 + 0x40) = uVar11;
    *(undefined8 *)(lStack_68 + 0x48) = 0;
    lVar15 = param_2[3];
    if (lVar15 != 0) {
      pauVar14 = (undefined1 (*) [16])*param_2;
      auVar18 = *pauVar14;
      uVar10 = ~(uint)(ushort)((ushort)(SUB161(auVar18 >> 7,0) & 1) |
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
      pauVar13 = pauVar14 + 1;
      do {
        if ((short)uVar10 == 0) {
          do {
            auVar18 = *pauVar13;
            pauVar14 = pauVar14 + -4;
            pauVar13 = pauVar13 + 1;
            uVar10 = (ushort)((ushort)(SUB161(auVar18 >> 7,0) & 1) |
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
          } while (uVar10 == 0);
        }
        iVar5 = 0;
        for (uVar6 = uVar10; (uVar6 & 1) == 0; uVar6 = uVar6 >> 1 | 0x80000000) {
          iVar5 = iVar5 + 1;
        }
        uVar10 = uVar10 - 1 & uVar10;
        pdb_1403b0de0(lVar8,*(undefined4 *)
                             ((longlong)pauVar14 + (-4 - (ulonglong)(uint)(iVar5 << 2))));
        lVar15 = lVar15 + -1;
      } while (lVar15 != 0);
    }
    lVar15 = param_2[9];
    uStack_60 = lVar16;
    if (lVar15 != 0) {
      pauVar14 = (undefined1 (*) [16])puStack_78[6];
      auVar18 = *pauVar14;
      uVar10 = ~(uint)(ushort)((ushort)(SUB161(auVar18 >> 7,0) & 1) |
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
      pauVar13 = pauVar14 + 1;
      pauStack_58 = (undefined1 (*) [16])(lStack_68 + 0x20);
      do {
        if ((short)uVar10 == 0) {
          do {
            auVar18 = *pauVar13;
            pauVar14 = pauVar14 + -0x68;
            pauVar13 = pauVar13 + 1;
            uVar10 = (ushort)((ushort)(SUB161(auVar18 >> 7,0) & 1) |
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
          } while (uVar10 == 0);
        }
        uVar6 = 0;
        for (uVar7 = uVar10; (uVar7 & 1) == 0; uVar7 = uVar7 >> 1 | 0x80000000) {
          uVar6 = uVar6 + 1;
        }
        uVar10 = uVar10 - 1 & uVar10;
        lVar16 = (ulonglong)uVar6 * -0x68;
        uVar3 = *(undefined4 *)((longlong)pauVar14 + lVar16 + -0x68);
        uStack_b0 = *(undefined8 *)((longlong)pauVar14 + lVar16 + -0x30);
        puVar1 = (undefined8 *)((longlong)pauVar14 + lVar16 + -0x50);
        uStack_d0 = *puVar1;
        uStack_c8 = puVar1[1];
        puVar1 = (undefined8 *)((longlong)pauVar14 + lVar16 + -0x40);
        uStack_c0 = *puVar1;
        uStack_b8 = puVar1[1];
        uStack_88 = *(undefined2 *)((longlong)pauVar14 + lVar16 + -8);
        uStack_86 = *(undefined1 *)((longlong)pauVar14 + lVar16 + -6);
        uStack_90 = *(undefined8 *)((longlong)pauVar14 + lVar16 + -0x10);
        puVar1 = (undefined8 *)((longlong)pauVar14 + lVar16 + -0x60);
        uStack_e0 = *puVar1;
        uStack_d8 = puVar1[1];
        puVar2 = (undefined4 *)((longlong)pauVar14 + lVar16 + -0x28);
        uStack_a8 = *puVar2;
        uStack_a4 = puVar2[1];
        uStack_a0 = puVar2[2];
        uStack_9c = puVar2[3];
        uStack_98 = *(undefined8 *)((longlong)pauVar14 + lVar16 + -0x18);
        uStack_6c = uVar3;
        pdb_141407a20(auStack_140,puStack_80,uVar3,&uStack_e0);
        uVar12 = pdb_1400aede0(pauStack_58,&uStack_6c);
        pdb_140ca8930(lStack_68,uVar12,&uStack_6c);
        pdb_1403b0de0(uStack_60,uVar3);
        lVar15 = lVar15 + -1;
      } while (lVar15 != 0);
    }
  }
  lVar16 = puStack_78[9];
  if (lVar16 != 0) {
    pauVar14 = (undefined1 (*) [16])puStack_78[6];
    auVar18 = *pauVar14;
    uVar10 = ~(uint)(ushort)((ushort)(SUB161(auVar18 >> 7,0) & 1) |
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
    pauVar13 = pauVar14 + 1;
    do {
      if ((short)uVar10 == 0) {
        do {
          auVar18 = *pauVar13;
          pauVar14 = pauVar14 + -0x68;
          pauVar13 = pauVar13 + 1;
          uVar10 = (ushort)((ushort)(SUB161(auVar18 >> 7,0) & 1) |
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
        } while (uVar10 == 0);
      }
      uVar6 = 0;
      for (uVar7 = uVar10; (uVar7 & 1) == 0; uVar7 = uVar7 >> 1 | 0x80000000) {
        uVar6 = uVar6 + 1;
      }
      uVar10 = uVar10 - 1 & uVar10;
      pdb_14007ee60(&uStack_49,
                    *(undefined4 *)((longlong)pauVar14 + (ulonglong)uVar6 * -0x68 + -0x68));
      lVar16 = lVar16 + -1;
    } while (lVar16 != 0);
  }
  return;
}

