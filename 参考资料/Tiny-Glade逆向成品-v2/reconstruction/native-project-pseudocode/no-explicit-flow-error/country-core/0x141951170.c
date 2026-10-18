// VA 0x141951170, PDB extent 191 bytes
// country_core::resources::history::wall_compound_edit::_::impl$0::deserialize::impl$2::visit_enum::impl$9::visit_str<serde_json::error::Error>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/history/wall_compound_edit.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::resources::history::wall_compound_edit::_::impl$0::deserialize::impl$2::visit_enum::impl$9::visit_str<serde_json::error::Error>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/history/wall_compound_edit.rs
   Extent: 191 */

void pdb_141951170(undefined1 *param_1,longlong *param_2,undefined8 param_3)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  
  switch(param_3) {
  case 5:
    if (*(char *)((longlong)param_2 + 4) == 'r' && (int)*param_2 == 0x65746661) {
      param_1[1] = 2;
      *param_1 = 0;
      return;
    }
    break;
  case 6:
    if (*(short *)((longlong)param_2 + 4) == 0x6572 && (int)*param_2 == 0x6f666562) {
      param_1[1] = 1;
      *param_1 = 0;
      return;
    }
    break;
  case 10:
    if ((short)param_2[1] == 0x7865 && *param_2 == 0x646e695f6c6c6177) {
      param_1[1] = 0;
      *param_1 = 0;
      return;
    }
    break;
  case 0x12:
    auVar1[0] = -((char)*param_2 == UNK_14335a3f0);
    auVar1[1] = -(*(char *)((longlong)param_2 + 1) == UNK_14335a3f1);
    auVar1[2] = -(*(char *)((longlong)param_2 + 2) == UNK_14335a3f2);
    auVar1[3] = -(*(char *)((longlong)param_2 + 3) == UNK_14335a3f3);
    auVar1[4] = -(*(char *)((longlong)param_2 + 4) == UNK_14335a3f4);
    auVar1[5] = -(*(char *)((longlong)param_2 + 5) == UNK_14335a3f5);
    auVar1[6] = -(*(char *)((longlong)param_2 + 6) == UNK_14335a3f6);
    auVar1[7] = -(*(char *)((longlong)param_2 + 7) == UNK_14335a3f7);
    auVar1[8] = -((char)param_2[1] == UNK_14335a3f8);
    auVar1[9] = -(*(char *)((longlong)param_2 + 9) == UNK_14335a3f9);
    auVar1[10] = -(*(char *)((longlong)param_2 + 10) == UNK_14335a3fa);
    auVar1[0xb] = -(*(char *)((longlong)param_2 + 0xb) == UNK_14335a3fb);
    auVar1[0xc] = -(*(char *)((longlong)param_2 + 0xc) == UNK_14335a3fc);
    auVar1[0xd] = -(*(char *)((longlong)param_2 + 0xd) == UNK_14335a3fd);
    auVar1[0xe] = -(*(char *)((longlong)param_2 + 0xe) == UNK_14335a3fe);
    auVar1[0xf] = -(*(char *)((longlong)param_2 + 0xf) == UNK_14335a3ff);
    auVar2[0] = -((char)(short)param_2[2] == UNK_1430621b0);
    auVar2[1] = -((char)((ushort)(short)param_2[2] >> 8) == UNK_1430621b1);
    auVar2[2] = -(UNK_1430621b2 == '\0');
    auVar2[3] = -(UNK_1430621b3 == '\0');
    auVar2[4] = -(UNK_1430621b4 == '\0');
    auVar2[5] = -(UNK_1430621b5 == '\0');
    auVar2[6] = -(UNK_1430621b6 == '\0');
    auVar2[7] = -(UNK_1430621b7 == '\0');
    auVar2[8] = -(UNK_1430621b8 == '\0');
    auVar2[9] = -(UNK_1430621b9 == '\0');
    auVar2[10] = -(UNK_1430621ba == '\0');
    auVar2[0xb] = -(UNK_1430621bb == '\0');
    auVar2[0xc] = -(UNK_1430621bc == '\0');
    auVar2[0xd] = -(UNK_1430621bd == '\0');
    auVar2[0xe] = -(UNK_1430621be == '\0');
    auVar2[0xf] = -(UNK_1430621bf == '\0');
    auVar2 = auVar2 & auVar1;
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
      param_1[1] = 3;
      *param_1 = 0;
      return;
    }
  }
  param_1[1] = 4;
  *param_1 = 0;
  return;
}

