// VA 0x140c40cf0, PDB extent 827 bytes
// country_core::resources::walls::decorator_storage::DecoratorStorage::clear_modification_tracking
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/walls/decorator_storage.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::resources::walls::decorator_storage::DecoratorStorage::clear_modification_tracking
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/walls/decorator_storage.rs
   Extent: 827 */

void pdb_140c40cf0(undefined8 *param_1)

{
  undefined1 auVar1 [16];
  longlong lVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  ulonglong uVar9;
  undefined1 (*pauVar10) [16];
  ulonglong uVar11;
  undefined8 *puVar12;
  longlong lVar13;
  undefined8 *puVar14;
  undefined1 (*pauVar15) [16];
  undefined1 (*pauVar16) [16];
  uint uVar17;
  longlong lStack_50;
  
  if (*(char *)(param_1 + 0x36) != '\0') {
                    /* WARNING: Subroutine does not return */
    pdb_142dc83b0(&UNK_14306c3c9,0x21,&UNK_14306d048);
  }
  pauVar15 = (undefined1 (*) [16])*param_1;
  lStack_50 = param_1[3];
  auVar1 = *pauVar15;
  puVar12 = param_1 + 0x12;
  if (param_1[0x12] == 0) {
    puVar12 = (undefined8 *)0x0;
  }
  puVar8 = param_1 + 0x24;
  if (param_1[0x24] == 0) {
    puVar8 = (undefined8 *)0x0;
  }
  pauVar10 = pauVar15 + 1;
  uVar17 = ~(uint)(ushort)((ushort)(SUB161(auVar1 >> 7,0) & 1) |
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
  lVar13 = 1;
  do {
    puVar14 = puVar12;
    if (lVar13 == 2) {
LAB_140c40db3:
      if (puVar8 == (undefined8 *)0x0) {
        lVar13 = param_1[9];
        if (lVar13 != 0) {
          pauVar10 = (undefined1 (*) [16])param_1[6];
          auVar1 = *pauVar10;
          pauVar15 = pauVar10 + 1;
          uVar17 = ~(uint)(ushort)((ushort)(SUB161(auVar1 >> 7,0) & 1) |
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
          pauVar16 = pauVar10;
          do {
            if ((short)uVar17 == 0) {
              do {
                auVar1 = *pauVar15;
                pauVar16 = pauVar16 + -0x40;
                pauVar15 = pauVar15 + 1;
                uVar17 = (ushort)((ushort)(SUB161(auVar1 >> 7,0) & 1) |
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
              } while (uVar17 == 0);
            }
            iVar3 = 0;
            for (uVar5 = uVar17; (uVar5 & 1) == 0; uVar5 = uVar5 >> 1 | 0x80000000) {
              iVar3 = iVar3 + 1;
            }
            lVar2 = *(longlong *)((longlong)pauVar16 + (-0x28 - (ulonglong)(uint)(iVar3 << 6)));
            if (lVar2 != 0) {
              uVar11 = lVar2 * 4 + 0x13U & 0xfffffffffffffff0;
              uVar9 = lVar2 + uVar11 + 0x11;
              if (uVar9 != 0) {
                pub_1406abac0((byte *)(*(longlong *)
                                        ((longlong)pauVar16 +
                                        (-0x30 - (ulonglong)(uint)(iVar3 << 6))) - uVar11),uVar9,
                              0x10);
              }
            }
            uVar17 = uVar17 - 1 & uVar17;
            lVar13 = lVar13 + -1;
          } while (lVar13 != 0);
          uVar9 = param_1[7];
          if (uVar9 == 0) {
            uVar11 = 0;
          }
          else {
            pub_142e32780(pauVar10,0xff,uVar9 + 0x11);
            uVar11 = (uVar9 + 1 & 0xfffffffffffffff8) - (uVar9 + 1 >> 3);
            if (uVar9 < 8) {
              uVar11 = uVar9;
            }
          }
          param_1[9] = 0;
          param_1[8] = uVar11;
        }
        return;
      }
      lVar13 = 2;
      lVar2 = puVar8[0xf];
      puVar7 = (undefined8 *)0x0;
      puVar6 = puVar8;
    }
    else {
      puVar7 = puVar8;
      if (pauVar15 == (undefined1 (*) [16])0x0) {
LAB_140c40e6a:
        lVar13 = 1;
        pauVar15 = (undefined1 (*) [16])0x0;
        puVar14 = (undefined8 *)0x0;
        if (puVar12 == (undefined8 *)0x0) goto LAB_140c40db3;
        pauVar15 = (undefined1 (*) [16])0x0;
        lVar2 = puVar12[0xf];
        puVar14 = (undefined8 *)0x0;
        puVar6 = puVar12;
      }
      else {
        if (lStack_50 == 0) {
          lStack_50 = 0;
          goto LAB_140c40e6a;
        }
        if ((short)uVar17 == 0) {
          do {
            auVar1 = *pauVar10;
            pauVar15 = pauVar15 + -0x98;
            pauVar10 = pauVar10 + 1;
            uVar17 = (ushort)((ushort)(SUB161(auVar1 >> 7,0) & 1) |
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
          } while (uVar17 == 0);
        }
        uVar5 = 0;
        for (uVar4 = uVar17; (uVar4 & 1) == 0; uVar4 = uVar4 >> 1 | 0x80000000) {
          uVar5 = uVar5 + 1;
        }
        uVar17 = uVar17 - 1 & uVar17;
        lStack_50 = lStack_50 + -1;
        lVar13 = 1;
        lVar2 = *(longlong *)((longlong)pauVar15 + (ulonglong)uVar5 * -0x98 + -0x18);
        puVar6 = (undefined8 *)((longlong)pauVar15 + (ulonglong)uVar5 * -0x98 + -0x90);
      }
    }
    puVar8 = puVar7;
    puVar12 = puVar14;
    if (lVar2 != 0) {
      uVar9 = puVar6[0xd];
      if (uVar9 == 0) {
        uVar11 = 0;
      }
      else {
        pub_142e32780(puVar6[0xc],0xff,uVar9 + 0x11);
        uVar11 = (uVar9 + 1 & 0xfffffffffffffff8) - (uVar9 + 1 >> 3);
        if (uVar9 < 8) {
          uVar11 = uVar9;
        }
      }
      puVar6[0xf] = 0;
      puVar6[0xe] = uVar11;
    }
    if (puVar6[3] != 0) {
      uVar9 = puVar6[1];
      if (uVar9 == 0) {
        uVar11 = 0;
      }
      else {
        pub_142e32780(*puVar6,0xff,uVar9 + 0x11);
        uVar11 = (uVar9 + 1 & 0xfffffffffffffff8) - (uVar9 + 1 >> 3);
        if (uVar9 < 8) {
          uVar11 = uVar9;
        }
      }
      puVar6[3] = 0;
      puVar6[2] = uVar11;
    }
  } while( true );
}

