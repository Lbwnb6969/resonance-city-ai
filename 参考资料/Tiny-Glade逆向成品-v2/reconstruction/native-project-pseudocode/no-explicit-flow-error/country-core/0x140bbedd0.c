// VA 0x140bbedd0, PDB extent 254 bytes
// country_core::resources::history::tree_edit::_::impl$0::deserialize::impl$0::visit_str<serde_json::error::Error>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/history/tree_edit.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::resources::history::tree_edit::_::impl$0::deserialize::impl$0::visit_str<serde_json::error::Error>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/history/tree_edit.rs
   Extent: 254 */

void pdb_140bbedd0(undefined1 *param_1,longlong *param_2,undefined8 param_3)

{
  undefined1 auVar1 [16];
  
  switch(param_3) {
  case 2:
    if ((short)*param_2 == 0x6469) {
      param_1[1] = 3;
      *param_1 = 0;
      return;
    }
    break;
  case 5:
    if (*(char *)((longlong)param_2 + 4) == 'e' && (int)*param_2 == 0x6c616373) {
      param_1[1] = 1;
      *param_1 = 0;
      return;
    }
    break;
  case 8:
    if (*param_2 == 0x6e6f697469736f70) {
      param_1[1] = 0;
      *param_1 = 0;
      return;
    }
    if (*param_2 == 0x6e6f697461746f72) {
      param_1[1] = 2;
      *param_1 = 0;
      return;
    }
    break;
  case 0xb:
    if (*(longlong *)((longlong)param_2 + 3) == 0x656d616e5f626166 && *param_2 == 0x6e5f626166657270
       ) {
      param_1[1] = 4;
      *param_1 = 0;
      return;
    }
    break;
  case 0xc:
    if ((int)param_2[1] == 0x64656361 && *param_2 == 0x6c706572705f7369) {
      param_1[1] = 5;
      *param_1 = 0;
      return;
    }
    break;
  case 0x10:
    auVar1[0] = -((char)*param_2 == UNK_143042720);
    auVar1[1] = -(*(char *)((longlong)param_2 + 1) == UNK_143042721);
    auVar1[2] = -(*(char *)((longlong)param_2 + 2) == UNK_143042722);
    auVar1[3] = -(*(char *)((longlong)param_2 + 3) == UNK_143042723);
    auVar1[4] = -(*(char *)((longlong)param_2 + 4) == UNK_143042724);
    auVar1[5] = -(*(char *)((longlong)param_2 + 5) == UNK_143042725);
    auVar1[6] = -(*(char *)((longlong)param_2 + 6) == UNK_143042726);
    auVar1[7] = -(*(char *)((longlong)param_2 + 7) == UNK_143042727);
    auVar1[8] = -((char)param_2[1] == UNK_143042728);
    auVar1[9] = -(*(char *)((longlong)param_2 + 9) == UNK_143042729);
    auVar1[10] = -(*(char *)((longlong)param_2 + 10) == UNK_14304272a);
    auVar1[0xb] = -(*(char *)((longlong)param_2 + 0xb) == UNK_14304272b);
    auVar1[0xc] = -(*(char *)((longlong)param_2 + 0xc) == UNK_14304272c);
    auVar1[0xd] = -(*(char *)((longlong)param_2 + 0xd) == UNK_14304272d);
    auVar1[0xe] = -(*(char *)((longlong)param_2 + 0xe) == UNK_14304272e);
    auVar1[0xf] = -(*(char *)((longlong)param_2 + 0xf) == UNK_14304272f);
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
      param_1[1] = 2;
      *param_1 = 0;
      return;
    }
  }
  param_1[1] = 6;
  *param_1 = 0;
  return;
}

