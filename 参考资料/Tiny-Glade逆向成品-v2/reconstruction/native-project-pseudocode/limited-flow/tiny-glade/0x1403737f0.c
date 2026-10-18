// VA 0x1403737f0, PDB extent 345 bytes
// tiny_glade::gui::settings::detect_konami_code
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/gui/settings.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: tiny_glade::gui::settings::detect_konami_code
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/gui/settings.rs
   Extent: 345 */

void pdb_1403737f0(longlong *param_1,ulonglong *param_2)

{
  undefined1 auVar1 [16];
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  undefined1 (*pauVar5) [16];
  uint uVar6;
  ulonglong uVar7;
  undefined1 (*pauVar8) [16];
  undefined4 uStack_9c;
  ushort auStack_98 [64];
  
  auStack_98[4] = 0x53;
  auStack_98[5] = 0;
  auStack_98[10] = 0x50;
  auStack_98[0xb] = 0;
  auStack_98[0x10] = 0x50;
  auStack_98[0x11] = 0;
  auStack_98[0x16] = 0x51;
  auStack_98[0x17] = 0;
  auStack_98[0x1c] = 0x52;
  auStack_98[0x1d] = 0;
  auStack_98[0x22] = 0x51;
  auStack_98[0x23] = 0;
  auStack_98[0x28] = 0x52;
  auStack_98[0x29] = 0;
  auStack_98[0x2e] = 0x15;
  auStack_98[0x2f] = 0;
  auStack_98[0x34] = 0x14;
  auStack_98[0x35] = 0;
  auStack_98[0x3a] = 0x3a;
  auStack_98[0x3b] = 0;
  lVar4 = *(longlong *)(*param_1 + 0x38);
  if (lVar4 != 0) {
    uVar7 = *param_2;
    pauVar5 = *(undefined1 (**) [16])(*param_1 + 0x20);
    auVar1 = *pauVar5;
    uVar6 = ~(uint)(ushort)((ushort)(SUB161(auVar1 >> 7,0) & 1) |
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
    pauVar8 = pauVar5 + 1;
    do {
      if ((short)uVar6 == 0) {
        do {
          auVar1 = *pauVar8;
          pauVar5 = pauVar5 + -0xc;
          pauVar8 = pauVar8 + 1;
          uVar6 = (ushort)((ushort)(SUB161(auVar1 >> 7,0) & 1) |
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
        } while (uVar6 == 0);
      }
      if (uVar7 < 0xb) {
        uVar2 = 0;
        for (uVar3 = uVar6; (uVar3 & 1) == 0; uVar3 = uVar3 >> 1 | 0x80000000) {
          uVar2 = uVar2 + 1;
        }
        if (*(int *)(auStack_98 + uVar7 * 6 + -2) ==
            *(int *)((longlong)pauVar5 + (ulonglong)uVar2 * -0xc + -0xc)) {
          if (*(int *)(auStack_98 + uVar7 * 6 + -2) != 0) {
            uVar7 = uVar7 + 1;
            *param_2 = uVar7;
            if (uVar7 == 0xb) {
              DAT_143cb2ba0 = 1;
              uVar7 = 0xb;
            }
            goto LAB_14037388a;
          }
          if (auStack_98[uVar7 * 6] == *(ushort *)((longlong)pauVar5 + (ulonglong)uVar2 * -0xc + -8)
             ) {
                    /* WARNING: Could not recover jumptable at 0x00014037391e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*(code *)(&UNK_142f4560c +
                      *(int *)(&UNK_142f4560c + (ulonglong)auStack_98[uVar7 * 6] * 4)))();
            return;
          }
        }
        *param_2 = 0;
        uVar7 = 0;
      }
LAB_14037388a:
      uVar6 = uVar6 - 1 & uVar6;
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
  }
  return;
}

