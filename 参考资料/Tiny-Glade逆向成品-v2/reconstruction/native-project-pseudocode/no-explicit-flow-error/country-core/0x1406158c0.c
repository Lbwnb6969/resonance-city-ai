// VA 0x1406158c0, PDB extent 198 bytes
// country_core::resources::session::_::impl$0::deserialize::impl$0::visit_str<serde_json::error::Error>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/session.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::resources::session::_::impl$0::deserialize::impl$0::visit_str<serde_json::error::Error>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/session.rs
   Extent: 198 */

void pdb_1406158c0(undefined1 *param_1,longlong *param_2,undefined8 param_3)

{
  undefined1 auVar1 [16];
  
  switch(param_3) {
  case 5:
    if (*(char *)((longlong)param_2 + 4) == 'e' && (int)*param_2 == 0x64616c67) {
      param_1[1] = 0;
      *param_1 = 0;
      return;
    }
    if (*(char *)((longlong)param_2 + 4) == 'e' && (int)*param_2 == 0x67616d69) {
      param_1[1] = 2;
      *param_1 = 0;
      return;
    }
    break;
  case 8:
    if (*param_2 == 0x73726f746174756d) {
      param_1[1] = 1;
      *param_1 = 0;
      return;
    }
    break;
  case 0xd:
    if (*(longlong *)((longlong)param_2 + 5) == 0x6e696769726f5f74 && *param_2 == 0x6f5f74726f706d69
       ) {
      param_1[1] = 4;
      *param_1 = 0;
      return;
    }
    break;
  case 0x10:
    auVar1[0] = -((char)*param_2 == UNK_142f87e00);
    auVar1[1] = -(*(char *)((longlong)param_2 + 1) == UNK_142f87e01);
    auVar1[2] = -(*(char *)((longlong)param_2 + 2) == UNK_142f87e02);
    auVar1[3] = -(*(char *)((longlong)param_2 + 3) == UNK_142f87e03);
    auVar1[4] = -(*(char *)((longlong)param_2 + 4) == UNK_142f87e04);
    auVar1[5] = -(*(char *)((longlong)param_2 + 5) == UNK_142f87e05);
    auVar1[6] = -(*(char *)((longlong)param_2 + 6) == UNK_142f87e06);
    auVar1[7] = -(*(char *)((longlong)param_2 + 7) == UNK_142f87e07);
    auVar1[8] = -((char)param_2[1] == UNK_142f87e08);
    auVar1[9] = -(*(char *)((longlong)param_2 + 9) == UNK_142f87e09);
    auVar1[10] = -(*(char *)((longlong)param_2 + 10) == UNK_142f87e0a);
    auVar1[0xb] = -(*(char *)((longlong)param_2 + 0xb) == UNK_142f87e0b);
    auVar1[0xc] = -(*(char *)((longlong)param_2 + 0xc) == UNK_142f87e0c);
    auVar1[0xd] = -(*(char *)((longlong)param_2 + 0xd) == UNK_142f87e0d);
    auVar1[0xe] = -(*(char *)((longlong)param_2 + 0xe) == UNK_142f87e0e);
    auVar1[0xf] = -(*(char *)((longlong)param_2 + 0xf) == UNK_142f87e0f);
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
                 (ushort)(SUB161(auVar1 >> 0x77,0) & 1) << 0xe | (ushort)(auVar1[0xf] >> 7) << 0xf)
        == 0xffff) {
      param_1[1] = 3;
      *param_1 = 0;
      return;
    }
  }
  param_1[1] = 5;
  *param_1 = 0;
  return;
}

