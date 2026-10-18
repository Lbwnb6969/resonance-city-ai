// VA 0x14014e580, PDB extent 358 bytes
// country_core::systems::main_camera::_::impl$0::deserialize::impl$0::visit_str<enum2$<ron::error::Error> >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/main_camera.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::systems::main_camera::_::impl$0::deserialize::impl$0::visit_str<enum2$<ron::error::Error>
   >
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/main_camera.rs
   Extent: 358 */

undefined2 * pdb_14014e580(undefined2 *param_1,longlong *param_2,longlong param_3)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  
  if (param_3 == 0x13) {
    auVar3[0] = -(*(char *)((longlong)param_2 + 3) == DAT_142e49a40);
    auVar3[1] = -(*(char *)((longlong)param_2 + 4) == UNK_142e49a41);
    auVar3[2] = -(*(char *)((longlong)param_2 + 5) == UNK_142e49a42);
    auVar3[3] = -(*(char *)((longlong)param_2 + 6) == UNK_142e49a43);
    auVar3[4] = -(*(char *)((longlong)param_2 + 7) == UNK_142e49a44);
    auVar3[5] = -((char)param_2[1] == UNK_142e49a45);
    auVar3[6] = -(*(char *)((longlong)param_2 + 9) == UNK_142e49a46);
    auVar3[7] = -(*(char *)((longlong)param_2 + 10) == UNK_142e49a47);
    auVar3[8] = -(*(char *)((longlong)param_2 + 0xb) == UNK_142e49a48);
    auVar3[9] = -(*(char *)((longlong)param_2 + 0xc) == UNK_142e49a49);
    auVar3[10] = -(*(char *)((longlong)param_2 + 0xd) == UNK_142e49a4a);
    auVar3[0xb] = -(*(char *)((longlong)param_2 + 0xe) == UNK_142e49a4b);
    auVar3[0xc] = -(*(char *)((longlong)param_2 + 0xf) == UNK_142e49a4c);
    auVar3[0xd] = -((char)param_2[2] == UNK_142e49a4d);
    auVar3[0xe] = -(*(char *)((longlong)param_2 + 0x11) == UNK_142e49a4e);
    auVar3[0xf] = -(*(char *)((longlong)param_2 + 0x12) == UNK_142e49a4f);
    auVar1[0] = -((char)*param_2 == DAT_142e49a50);
    auVar1[1] = -(*(char *)((longlong)param_2 + 1) == UNK_142e49a51);
    auVar1[2] = -(*(char *)((longlong)param_2 + 2) == UNK_142e49a52);
    auVar1[3] = -(*(char *)((longlong)param_2 + 3) == UNK_142e49a53);
    auVar1[4] = -(*(char *)((longlong)param_2 + 4) == UNK_142e49a54);
    auVar1[5] = -(*(char *)((longlong)param_2 + 5) == UNK_142e49a55);
    auVar1[6] = -(*(char *)((longlong)param_2 + 6) == UNK_142e49a56);
    auVar1[7] = -(*(char *)((longlong)param_2 + 7) == UNK_142e49a57);
    auVar1[8] = -((char)param_2[1] == UNK_142e49a58);
    auVar1[9] = -(*(char *)((longlong)param_2 + 9) == UNK_142e49a59);
    auVar1[10] = -(*(char *)((longlong)param_2 + 10) == UNK_142e49a5a);
    auVar1[0xb] = -(*(char *)((longlong)param_2 + 0xb) == UNK_142e49a5b);
    auVar1[0xc] = -(*(char *)((longlong)param_2 + 0xc) == UNK_142e49a5c);
    auVar1[0xd] = -(*(char *)((longlong)param_2 + 0xd) == UNK_142e49a5d);
    auVar1[0xe] = -(*(char *)((longlong)param_2 + 0xe) == UNK_142e49a5e);
    auVar1[0xf] = -(*(char *)((longlong)param_2 + 0xf) == UNK_142e49a5f);
    auVar1 = auVar1 & auVar3;
    if ((ushort)((ushort)(SUB161(auVar1 >> 7,0) & 1) | (ushort)(SUB161(auVar1 >> 0xf,0) & 1) << 1 |
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
                (ushort)(byte)(auVar1[0xf] >> 7) << 0xf) == 0xffff) {
      *param_1 = 0x132;
      return param_1;
    }
    auVar4[0] = -(*(char *)((longlong)param_2 + 3) == DAT_142e49a60);
    auVar4[1] = -(*(char *)((longlong)param_2 + 4) == UNK_142e49a61);
    auVar4[2] = -(*(char *)((longlong)param_2 + 5) == UNK_142e49a62);
    auVar4[3] = -(*(char *)((longlong)param_2 + 6) == UNK_142e49a63);
    auVar4[4] = -(*(char *)((longlong)param_2 + 7) == UNK_142e49a64);
    auVar4[5] = -((char)param_2[1] == UNK_142e49a65);
    auVar4[6] = -(*(char *)((longlong)param_2 + 9) == UNK_142e49a66);
    auVar4[7] = -(*(char *)((longlong)param_2 + 10) == UNK_142e49a67);
    auVar4[8] = -(*(char *)((longlong)param_2 + 0xb) == UNK_142e49a68);
    auVar4[9] = -(*(char *)((longlong)param_2 + 0xc) == UNK_142e49a69);
    auVar4[10] = -(*(char *)((longlong)param_2 + 0xd) == UNK_142e49a6a);
    auVar4[0xb] = -(*(char *)((longlong)param_2 + 0xe) == UNK_142e49a6b);
    auVar4[0xc] = -(*(char *)((longlong)param_2 + 0xf) == UNK_142e49a6c);
    auVar4[0xd] = -((char)param_2[2] == UNK_142e49a6d);
    auVar4[0xe] = -(*(char *)((longlong)param_2 + 0x11) == UNK_142e49a6e);
    auVar4[0xf] = -(*(char *)((longlong)param_2 + 0x12) == UNK_142e49a6f);
    auVar2[0] = -((char)*param_2 == DAT_142e49a70);
    auVar2[1] = -(*(char *)((longlong)param_2 + 1) == UNK_142e49a71);
    auVar2[2] = -(*(char *)((longlong)param_2 + 2) == UNK_142e49a72);
    auVar2[3] = -(*(char *)((longlong)param_2 + 3) == UNK_142e49a73);
    auVar2[4] = -(*(char *)((longlong)param_2 + 4) == UNK_142e49a74);
    auVar2[5] = -(*(char *)((longlong)param_2 + 5) == UNK_142e49a75);
    auVar2[6] = -(*(char *)((longlong)param_2 + 6) == UNK_142e49a76);
    auVar2[7] = -(*(char *)((longlong)param_2 + 7) == UNK_142e49a77);
    auVar2[8] = -((char)param_2[1] == UNK_142e49a78);
    auVar2[9] = -(*(char *)((longlong)param_2 + 9) == UNK_142e49a79);
    auVar2[10] = -(*(char *)((longlong)param_2 + 10) == UNK_142e49a7a);
    auVar2[0xb] = -(*(char *)((longlong)param_2 + 0xb) == UNK_142e49a7b);
    auVar2[0xc] = -(*(char *)((longlong)param_2 + 0xc) == UNK_142e49a7c);
    auVar2[0xd] = -(*(char *)((longlong)param_2 + 0xd) == UNK_142e49a7d);
    auVar2[0xe] = -(*(char *)((longlong)param_2 + 0xe) == UNK_142e49a7e);
    auVar2[0xf] = -(*(char *)((longlong)param_2 + 0xf) == UNK_142e49a7f);
    auVar2 = auVar2 & auVar4;
    if ((ushort)((ushort)(SUB161(auVar2 >> 7,0) & 1) | (ushort)(SUB161(auVar2 >> 0xf,0) & 1) << 1 |
                 (ushort)(SUB161(auVar2 >> 0x17,0) & 1) << 2 |
                 (ushort)(SUB161(auVar2 >> 0x1f,0) & 1) << 3 |
                 (ushort)(SUB161(auVar2 >> 0x27,0) & 1) << 4 |
                 (ushort)(SUB161(auVar2 >> 0x2f,0) & 1) << 5 |
                 (ushort)(SUB161(auVar2 >> 0x37,0) & 1) << 6 |
                 (ushort)(SUB161(auVar2 >> 0x3f,0) & 1) << 7 |
                 (ushort)(SUB161(auVar2 >> 0x47,0) & 1) << 8 |
                 (ushort)(SUB161(auVar2 >> 0x4f,0) & 1) << 9 |
                 (ushort)(SUB161(auVar2 >> 0x57,0) & 1) << 10 |
                 (ushort)(SUB161(auVar2 >> 0x5f,0) & 1) << 0xb |
                 (ushort)(SUB161(auVar2 >> 0x67,0) & 1) << 0xc |
                 (ushort)(SUB161(auVar2 >> 0x6f,0) & 1) << 0xd |
                 (ushort)(SUB161(auVar2 >> 0x77,0) & 1) << 0xe |
                (ushort)(byte)(auVar2[0xf] >> 7) << 0xf) == 0xffff) {
      *param_1 = 0x332;
      return param_1;
    }
  }
  else if (param_3 == 0xd) {
    if (*(longlong *)((longlong)param_2 + 5) == 0x6e69617272655472 && *param_2 == 0x6554726f73727543
       ) {
      *param_1 = 0x432;
      return param_1;
    }
    if (*(longlong *)((longlong)param_2 + 5) == 0x6e69617272655472 && *param_2 == 0x65547265746e6543
       ) {
      *param_1 = 0x532;
      return param_1;
    }
  }
  else if (param_3 == 0xb) {
    if (*(longlong *)((longlong)param_2 + 3) == 0x6874706544726f73 && *param_2 == 0x6544726f73727543
       ) {
      *param_1 = 0x32;
      return param_1;
    }
    if (*(longlong *)((longlong)param_2 + 3) == 0x6874706544726574 && *param_2 == 0x65447265746e6543
       ) {
      *param_1 = 0x232;
      return param_1;
    }
  }
  pdb_142db7e70();
  return param_1;
}

