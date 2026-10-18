// VA 0x140a69ba0, PDB extent 388 bytes
// country_core::resources::walls::window_cuts::WindowCutRecords::clear_for_next_frame
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/walls/window_cuts.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::resources::walls::window_cuts::WindowCutRecords::clear_for_next_frame
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/walls/window_cuts.rs
   Extent: 388 */

void pdb_140a69ba0(undefined8 *param_1)

{
  undefined1 auVar1 [16];
  undefined8 uVar2;
  uint uVar3;
  uint uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  ulonglong uVar9;
  undefined1 (*pauVar10) [16];
  longlong lVar11;
  undefined1 (*pauVar12) [16];
  uint uVar13;
  
  lVar11 = param_1[3];
  if (lVar11 != 0) {
    pauVar12 = (undefined1 (*) [16])*param_1;
    auVar1 = *pauVar12;
    uVar13 = ~(uint)(ushort)((ushort)(SUB161(auVar1 >> 7,0) & 1) |
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
    pauVar10 = pauVar12 + 1;
    do {
      if ((short)uVar13 == 0) {
        do {
          auVar1 = *pauVar10;
          pauVar12 = pauVar12 + -0x60;
          pauVar10 = pauVar10 + 1;
          uVar13 = (ushort)((ushort)(SUB161(auVar1 >> 7,0) & 1) |
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
        } while (uVar13 == 0);
      }
      uVar3 = 0;
      for (uVar4 = uVar13; (uVar4 & 1) == 0; uVar4 = uVar4 >> 1 | 0x80000000) {
        uVar3 = uVar3 + 1;
      }
      uVar9 = (ulonglong)uVar3;
      if (pauVar12[uVar9 * -6 + -6][8] == '\0') {
        *(undefined8 *)pauVar12[uVar9 * -6 + -4] = 0;
        *(undefined8 *)(pauVar12[uVar9 * -6 + -3] + 8) = 0;
        *(undefined8 *)pauVar12[uVar9 * -6 + -2] = 0;
        *(undefined8 *)(pauVar12[uVar9 * -6 + -2] + 8) = 0;
        *(undefined8 *)pauVar12[uVar9 * -6 + -1] = 0;
        *(undefined8 *)(pauVar12[uVar9 * -6 + -1] + 8) = 0;
      }
      else {
        uVar2 = *(undefined8 *)pauVar12[uVar9 * -6 + -4];
        auVar1 = pauVar12[uVar9 * -6 + -5];
        *(undefined8 *)pauVar12[uVar9 * -6 + -5] = 0;
        *(undefined8 *)(pauVar12[uVar9 * -6 + -5] + 8) = 4;
        *(undefined8 *)pauVar12[uVar9 * -6 + -4] = 0;
        uVar5 = *(undefined8 *)(pauVar12[uVar9 * -6 + -4] + 8);
        uVar6 = *(undefined8 *)pauVar12[uVar9 * -6 + -3];
        *(undefined8 *)(pauVar12[uVar9 * -6 + -4] + 8) = 0;
        *(undefined8 *)pauVar12[uVar9 * -6 + -3] = 4;
        *(undefined8 *)(pauVar12[uVar9 * -6 + -3] + 8) = 0;
        uVar7 = *(undefined8 *)pauVar12[uVar9 * -6 + -2];
        uVar8 = *(undefined8 *)(pauVar12[uVar9 * -6 + -2] + 8);
        if (*(longlong *)pauVar12[uVar9 * -6 + -5] != 0) {
          pub_1406abac0(*(byte **)(pauVar12[uVar9 * -6 + -5] + 8),
                        *(longlong *)pauVar12[uVar9 * -6 + -5] * 0x30,4);
        }
        *(undefined8 *)(pauVar12[uVar9 * -6 + -6] + 8) = 0;
        *(undefined8 *)pauVar12[uVar9 * -6 + -5] = uVar5;
        *(undefined8 *)(pauVar12[uVar9 * -6 + -5] + 8) = uVar6;
        *(undefined8 *)pauVar12[uVar9 * -6 + -4] = 0;
        *(undefined8 *)(pauVar12[uVar9 * -6 + -3] + 8) = uVar2;
        *(undefined1 (*) [16])(pauVar12[uVar9 * -6 + -4] + 8) = auVar1;
        *(undefined8 *)pauVar12[uVar9 * -6 + -2] = 0;
        *(undefined8 *)(pauVar12[uVar9 * -6 + -2] + 8) = 0;
        *(undefined8 *)pauVar12[uVar9 * -6 + -1] = uVar7;
        *(undefined8 *)(pauVar12[uVar9 * -6 + -1] + 8) = uVar8;
      }
      uVar13 = uVar13 - 1 & uVar13;
      lVar11 = lVar11 + -1;
    } while (lVar11 != 0);
  }
  return;
}

