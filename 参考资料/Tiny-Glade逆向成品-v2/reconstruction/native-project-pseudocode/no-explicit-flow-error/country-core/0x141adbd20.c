// VA 0x141adbd20, PDB extent 248 bytes
// country_core::resources::walls::wall_attachment::_::impl$0::deserialize::impl$0::visit_str<serde_json::error::Error>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/walls/wall_attachment.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::resources::walls::wall_attachment::_::impl$0::deserialize::impl$0::visit_str<serde_json::error::Error>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/walls/wall_attachment.rs
   Extent: 248 */

void pdb_141adbd20(undefined1 *param_1,longlong *param_2,undefined8 param_3)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  
  switch(param_3) {
  case 4:
    if ((int)*param_2 == 0x65646973) {
      param_1[1] = 5;
      *param_1 = 0;
      return;
    }
    break;
  case 6:
    if (*(short *)((longlong)param_2 + 4) == 0x7265 && (int)*param_2 == 0x6e726f63) {
      param_1[1] = 2;
      *param_1 = 0;
      return;
    }
    break;
  case 8:
    if (*param_2 == 0x6d726f6674616c70) {
      param_1[1] = 3;
      *param_1 = 0;
      return;
    }
    break;
  case 9:
    if ((char)param_2[1] == 's' && *param_2 == 0x775f726f68636e61) {
      param_1[1] = 1;
      *param_1 = 0;
      return;
    }
    break;
  case 0xe:
    if (*(longlong *)((longlong)param_2 + 6) == 0x726f6f645f6d6f74 && *param_2 == 0x6f74746f625f7369
       ) {
      param_1[1] = 4;
      *param_1 = 0;
      return;
    }
    break;
  case 0x16:
    auVar2[0] = -(*(char *)((longlong)param_2 + 6) == UNK_1433883d0);
    auVar2[1] = -(*(char *)((longlong)param_2 + 7) == UNK_1433883d1);
    auVar2[2] = -((char)param_2[1] == UNK_1433883d2);
    auVar2[3] = -(*(char *)((longlong)param_2 + 9) == UNK_1433883d3);
    auVar2[4] = -(*(char *)((longlong)param_2 + 10) == UNK_1433883d4);
    auVar2[5] = -(*(char *)((longlong)param_2 + 0xb) == UNK_1433883d5);
    auVar2[6] = -(*(char *)((longlong)param_2 + 0xc) == UNK_1433883d6);
    auVar2[7] = -(*(char *)((longlong)param_2 + 0xd) == UNK_1433883d7);
    auVar2[8] = -(*(char *)((longlong)param_2 + 0xe) == UNK_1433883d8);
    auVar2[9] = -(*(char *)((longlong)param_2 + 0xf) == UNK_1433883d9);
    auVar2[10] = -((char)param_2[2] == UNK_1433883da);
    auVar2[0xb] = -(*(char *)((longlong)param_2 + 0x11) == UNK_1433883db);
    auVar2[0xc] = -(*(char *)((longlong)param_2 + 0x12) == UNK_1433883dc);
    auVar2[0xd] = -(*(char *)((longlong)param_2 + 0x13) == UNK_1433883dd);
    auVar2[0xe] = -(*(char *)((longlong)param_2 + 0x14) == UNK_1433883de);
    auVar2[0xf] = -(*(char *)((longlong)param_2 + 0x15) == UNK_1433883df);
    auVar1[0] = -((char)*param_2 == UNK_1433883e0);
    auVar1[1] = -(*(char *)((longlong)param_2 + 1) == UNK_1433883e1);
    auVar1[2] = -(*(char *)((longlong)param_2 + 2) == UNK_1433883e2);
    auVar1[3] = -(*(char *)((longlong)param_2 + 3) == UNK_1433883e3);
    auVar1[4] = -(*(char *)((longlong)param_2 + 4) == UNK_1433883e4);
    auVar1[5] = -(*(char *)((longlong)param_2 + 5) == UNK_1433883e5);
    auVar1[6] = -(*(char *)((longlong)param_2 + 6) == UNK_1433883e6);
    auVar1[7] = -(*(char *)((longlong)param_2 + 7) == UNK_1433883e7);
    auVar1[8] = -((char)param_2[1] == UNK_1433883e8);
    auVar1[9] = -(*(char *)((longlong)param_2 + 9) == UNK_1433883e9);
    auVar1[10] = -(*(char *)((longlong)param_2 + 10) == UNK_1433883ea);
    auVar1[0xb] = -(*(char *)((longlong)param_2 + 0xb) == UNK_1433883eb);
    auVar1[0xc] = -(*(char *)((longlong)param_2 + 0xc) == UNK_1433883ec);
    auVar1[0xd] = -(*(char *)((longlong)param_2 + 0xd) == UNK_1433883ed);
    auVar1[0xe] = -(*(char *)((longlong)param_2 + 0xe) == UNK_1433883ee);
    auVar1[0xf] = -(*(char *)((longlong)param_2 + 0xf) == UNK_1433883ef);
    auVar1 = auVar1 & auVar2;
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
      param_1[1] = 0;
      *param_1 = 0;
      return;
    }
  }
  param_1[1] = 6;
  *param_1 = 0;
  return;
}

