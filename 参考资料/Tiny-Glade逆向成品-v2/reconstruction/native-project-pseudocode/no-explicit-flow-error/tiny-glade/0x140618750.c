// VA 0x140618750, PDB extent 136 bytes
// tiny_glade::panic_reporter::sentry_reporter::panic_info_to_message
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/panic_reporter/sentry_reporter.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: tiny_glade::panic_reporter::sentry_reporter::panic_info_to_message
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/panic_reporter/sentry_reporter.rs
   Extent: 136 */

undefined * pdb_140618750(longlong *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  char cStack_28;
  char cStack_27;
  char cStack_26;
  char cStack_25;
  char cStack_24;
  char cStack_23;
  char cStack_22;
  char cStack_21;
  char cStack_20;
  char cStack_1f;
  char cStack_1e;
  char cStack_1d;
  char cStack_1c;
  char cStack_1b;
  char cStack_1a;
  char cStack_19;
  
  puVar2 = (undefined8 *)*param_1;
  lVar1 = param_1[1];
  (**(code **)(lVar1 + 0x18))(&cStack_28,puVar2);
  auVar3[0] = -(cStack_28 == DAT_142f47b50);
  auVar3[1] = -(cStack_27 == UNK_142f47b51);
  auVar3[2] = -(cStack_26 == UNK_142f47b52);
  auVar3[3] = -(cStack_25 == UNK_142f47b53);
  auVar3[4] = -(cStack_24 == UNK_142f47b54);
  auVar3[5] = -(cStack_23 == UNK_142f47b55);
  auVar3[6] = -(cStack_22 == UNK_142f47b56);
  auVar3[7] = -(cStack_21 == UNK_142f47b57);
  auVar3[8] = -(cStack_20 == UNK_142f47b58);
  auVar3[9] = -(cStack_1f == UNK_142f47b59);
  auVar3[10] = -(cStack_1e == UNK_142f47b5a);
  auVar3[0xb] = -(cStack_1d == UNK_142f47b5b);
  auVar3[0xc] = -(cStack_1c == UNK_142f47b5c);
  auVar3[0xd] = -(cStack_1b == UNK_142f47b5d);
  auVar3[0xe] = -(cStack_1a == UNK_142f47b5e);
  auVar3[0xf] = -(cStack_19 == UNK_142f47b5f);
  if ((ushort)((ushort)(SUB161(auVar3 >> 7,0) & 1) | (ushort)(SUB161(auVar3 >> 0xf,0) & 1) << 1 |
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
               (ushort)(SUB161(auVar3 >> 0x77,0) & 1) << 0xe | (ushort)(auVar3[0xf] >> 7) << 0xf) !=
      0xffff) {
    (**(code **)(lVar1 + 0x18))(&cStack_28,puVar2);
    auVar4[0] = -(cStack_28 == DAT_142e696b0);
    auVar4[1] = -(cStack_27 == UNK_142e696b1);
    auVar4[2] = -(cStack_26 == UNK_142e696b2);
    auVar4[3] = -(cStack_25 == UNK_142e696b3);
    auVar4[4] = -(cStack_24 == UNK_142e696b4);
    auVar4[5] = -(cStack_23 == UNK_142e696b5);
    auVar4[6] = -(cStack_22 == UNK_142e696b6);
    auVar4[7] = -(cStack_21 == UNK_142e696b7);
    auVar4[8] = -(cStack_20 == UNK_142e696b8);
    auVar4[9] = -(cStack_1f == UNK_142e696b9);
    auVar4[10] = -(cStack_1e == UNK_142e696ba);
    auVar4[0xb] = -(cStack_1d == UNK_142e696bb);
    auVar4[0xc] = -(cStack_1c == UNK_142e696bc);
    auVar4[0xd] = -(cStack_1b == UNK_142e696bd);
    auVar4[0xe] = -(cStack_1a == UNK_142e696be);
    auVar4[0xf] = -(cStack_19 == UNK_142e696bf);
    if ((ushort)((ushort)(SUB161(auVar4 >> 7,0) & 1) | (ushort)(SUB161(auVar4 >> 0xf,0) & 1) << 1 |
                 (ushort)(SUB161(auVar4 >> 0x17,0) & 1) << 2 |
                 (ushort)(SUB161(auVar4 >> 0x1f,0) & 1) << 3 |
                 (ushort)(SUB161(auVar4 >> 0x27,0) & 1) << 4 |
                 (ushort)(SUB161(auVar4 >> 0x2f,0) & 1) << 5 |
                 (ushort)(SUB161(auVar4 >> 0x37,0) & 1) << 6 |
                 (ushort)(SUB161(auVar4 >> 0x3f,0) & 1) << 7 |
                 (ushort)(SUB161(auVar4 >> 0x47,0) & 1) << 8 |
                 (ushort)(SUB161(auVar4 >> 0x4f,0) & 1) << 9 |
                 (ushort)(SUB161(auVar4 >> 0x57,0) & 1) << 10 |
                 (ushort)(SUB161(auVar4 >> 0x5f,0) & 1) << 0xb |
                 (ushort)(SUB161(auVar4 >> 0x67,0) & 1) << 0xc |
                 (ushort)(SUB161(auVar4 >> 0x6f,0) & 1) << 0xd |
                 (ushort)(SUB161(auVar4 >> 0x77,0) & 1) << 0xe | (ushort)(auVar4[0xf] >> 7) << 0xf)
        != 0xffff) {
      return &UNK_142f88870;
    }
    puVar2 = puVar2 + 1;
  }
  return (undefined *)*puVar2;
}

