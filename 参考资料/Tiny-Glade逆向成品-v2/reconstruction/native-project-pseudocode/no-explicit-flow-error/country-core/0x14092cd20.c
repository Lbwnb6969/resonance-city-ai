// VA 0x14092cd20, PDB extent 493 bytes
// country_core::systems::save::required_clutter::glade_uses_external_clutter
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/save/required_clutter.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::systems::save::required_clutter::glade_uses_external_clutter
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/save/required_clutter.rs
   Extent: 493 */

undefined8 pdb_14092cd20(undefined8 *param_1)

{
  undefined1 auVar1 [16];
  ulonglong *puVar2;
  uint uVar3;
  uint uVar4;
  undefined8 *puVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined1 (*pauVar9) [16];
  longlong unaff_RBX;
  longlong lVar10;
  undefined1 (*pauVar11) [16];
  longlong lVar12;
  undefined1 (*pauVar13) [16];
  uint uVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  undefined1 (*unaff_R14) [16];
  uint unaff_R15D;
  
  pauVar13 = (undefined1 (*) [16])*param_1;
  lVar12 = param_1[3];
  auVar1 = *pauVar13;
  pauVar9 = pauVar13 + 1;
  puVar15 = param_1 + 0x12;
  if (param_1[0x12] == 0) {
    puVar15 = (undefined8 *)0x0;
  }
  uVar14 = ~(uint)(ushort)((ushort)(SUB161(auVar1 >> 7,0) & 1) |
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
  puVar8 = param_1 + 0x24;
  if (param_1[0x24] == 0) {
    puVar8 = (undefined8 *)0x0;
  }
  lVar10 = 1;
  pauVar11 = (undefined1 (*) [16])0x0;
  do {
    if (pauVar11 != (undefined1 (*) [16])0x0) {
      for (; unaff_RBX != 0; unaff_RBX = unaff_RBX + -1) {
        if ((short)unaff_R15D == 0) {
          do {
            auVar1 = *unaff_R14;
            pauVar11 = pauVar11 + -0x68;
            unaff_R14 = unaff_R14 + 1;
            unaff_R15D = (ushort)((ushort)(SUB161(auVar1 >> 7,0) & 1) |
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
          } while (unaff_R15D == 0);
        }
        uVar3 = 0;
        for (uVar4 = unaff_R15D; (uVar4 & 1) == 0; uVar4 = uVar4 >> 1 | 0x80000000) {
          uVar3 = uVar3 + 1;
        }
        if (*(int *)((longlong)pauVar11 + (ulonglong)uVar3 * -0x68 + -0x60) == 6) {
          lVar6 = (ulonglong)uVar3 * -0x68 + (longlong)pauVar11;
          puVar2 = *(ulonglong **)(lVar6 + -0x58);
          uVar7 = CONCAT71((int7)((ulonglong)lVar6 >> 8),1);
          if (puVar2[-1] < 8) {
            return uVar7;
          }
          uVar17 = *puVar2;
          uVar18 = _DAT_14306af3d >> 0x38 | (_DAT_14306af3d & 0xff000000000000) >> 0x28 |
                   (_DAT_14306af3d & 0xff0000000000) >> 0x18 | (_DAT_14306af3d & 0xff00000000) >> 8
                   | (_DAT_14306af3d & 0xff000000) << 8 | (_DAT_14306af3d & 0xff0000) << 0x18 |
                   (_DAT_14306af3d & 0xff00) << 0x28 | _DAT_14306af3d << 0x38;
          uVar17 = uVar17 >> 0x38 | (uVar17 & 0xff000000000000) >> 0x28 |
                   (uVar17 & 0xff0000000000) >> 0x18 | (uVar17 & 0xff00000000) >> 8 |
                   (uVar17 & 0xff000000) << 8 | (uVar17 & 0xff0000) << 0x18 |
                   (uVar17 & 0xff00) << 0x28 | uVar17 << 0x38;
          if (uVar17 < uVar18 != uVar18 < uVar17) {
            return uVar7;
          }
        }
        unaff_R15D = unaff_R15D - 1 & unaff_R15D;
      }
    }
    puVar16 = puVar15;
    if (lVar10 == 2) {
LAB_14092cde5:
      if (puVar8 == (undefined8 *)0x0) {
        return 0;
      }
      lVar10 = 2;
      puVar5 = (undefined8 *)0x0;
      puVar15 = puVar16;
    }
    else {
      puVar5 = puVar8;
      if (pauVar13 == (undefined1 (*) [16])0x0) {
LAB_14092ced5:
        lVar10 = 1;
        pauVar13 = (undefined1 (*) [16])0x0;
        puVar16 = (undefined8 *)0x0;
        if (puVar15 == (undefined8 *)0x0) goto LAB_14092cde5;
        pauVar13 = (undefined1 (*) [16])0x0;
        puVar8 = puVar15;
        puVar15 = (undefined8 *)0x0;
      }
      else {
        if (lVar12 == 0) {
          lVar12 = 0;
          goto LAB_14092ced5;
        }
        if ((short)uVar14 == 0) {
          do {
            auVar1 = *pauVar9;
            pauVar13 = pauVar13 + -0x98;
            pauVar9 = pauVar9 + 1;
            uVar14 = (ushort)((ushort)(SUB161(auVar1 >> 7,0) & 1) |
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
          } while (uVar14 == 0);
        }
        uVar3 = 0;
        for (uVar4 = uVar14; (uVar4 & 1) == 0; uVar4 = uVar4 >> 1 | 0x80000000) {
          uVar3 = uVar3 + 1;
        }
        uVar14 = uVar14 - 1 & uVar14;
        lVar12 = lVar12 + -1;
        lVar10 = 1;
        puVar8 = (undefined8 *)((longlong)pauVar13 + (ulonglong)uVar3 * -0x98 + -0x90);
      }
    }
    pauVar11 = (undefined1 (*) [16])puVar8[6];
    unaff_RBX = puVar8[9];
    auVar1 = *pauVar11;
    unaff_R14 = pauVar11 + 1;
    unaff_R15D = ~(uint)(ushort)((ushort)(SUB161(auVar1 >> 7,0) & 1) |
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
    puVar8 = puVar5;
  } while( true );
}

