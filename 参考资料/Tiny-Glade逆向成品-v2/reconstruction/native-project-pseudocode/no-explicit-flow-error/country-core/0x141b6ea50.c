// VA 0x141b6ea50, PDB extent 393 bytes
// country_core::systems::camera_rig::_::impl$0::deserialize::impl$0::visit_str<serde_json::error::Error>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/camera_rig.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::systems::camera_rig::_::impl$0::deserialize::impl$0::visit_str<serde_json::error::Error>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/camera_rig.rs
   Extent: 393 */

void pdb_141b6ea50(undefined1 *param_1,longlong *param_2,undefined8 param_3)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  
  switch(param_3) {
  case 3:
    if (*(char *)((longlong)param_2 + 2) == 'w' && (short)*param_2 == 0x6179) {
      param_1[1] = 0;
      *param_1 = 0;
      return;
    }
    break;
  case 5:
    if (*(char *)((longlong)param_2 + 4) == 'h' && (int)*param_2 == 0x63746970) {
      param_1[1] = 1;
      *param_1 = 0;
      return;
    }
    break;
  case 8:
    if (*param_2 == 0x6e6f697469736f70) {
      param_1[1] = 2;
      *param_1 = 0;
      return;
    }
    break;
  case 9:
    if ((char)param_2[1] == 'e' && *param_2 == 0x686361635f776179) {
      param_1[1] = 0;
      *param_1 = 0;
      return;
    }
    break;
  case 10:
    if ((short)param_2[1] == 0x7465 && *param_2 == 0x7366666f5f776179) {
      param_1[1] = 5;
      *param_1 = 0;
      return;
    }
    break;
  case 0xb:
    if (*(longlong *)((longlong)param_2 + 3) == 0x65686361635f6863 && *param_2 == 0x61635f6863746970
       ) {
      param_1[1] = 1;
      *param_1 = 0;
      return;
    }
    break;
  case 0xc:
    if ((int)param_2[1] == 0x74657366 && *param_2 == 0x666f5f6863746970) {
      param_1[1] = 4;
      *param_1 = 0;
      return;
    }
    break;
  case 0xe:
    if (*(longlong *)((longlong)param_2 + 6) == 0x65686361635f6e6f && *param_2 == 0x6e6f697469736f70
       ) {
      param_1[1] = 2;
      *param_1 = 0;
      return;
    }
    break;
  case 0x15:
    auVar2[0] = -(*(char *)((longlong)param_2 + 5) == UNK_142f87e10);
    auVar2[1] = -(*(char *)((longlong)param_2 + 6) == UNK_142f87e11);
    auVar2[2] = -(*(char *)((longlong)param_2 + 7) == UNK_142f87e12);
    auVar2[3] = -((char)param_2[1] == UNK_142f87e13);
    auVar2[4] = -(*(char *)((longlong)param_2 + 9) == UNK_142f87e14);
    auVar2[5] = -(*(char *)((longlong)param_2 + 10) == UNK_142f87e15);
    auVar2[6] = -(*(char *)((longlong)param_2 + 0xb) == UNK_142f87e16);
    auVar2[7] = -(*(char *)((longlong)param_2 + 0xc) == UNK_142f87e17);
    auVar2[8] = -(*(char *)((longlong)param_2 + 0xd) == UNK_142f87e18);
    auVar2[9] = -(*(char *)((longlong)param_2 + 0xe) == UNK_142f87e19);
    auVar2[10] = -(*(char *)((longlong)param_2 + 0xf) == UNK_142f87e1a);
    auVar2[0xb] = -((char)param_2[2] == UNK_142f87e1b);
    auVar2[0xc] = -(*(char *)((longlong)param_2 + 0x11) == UNK_142f87e1c);
    auVar2[0xd] = -(*(char *)((longlong)param_2 + 0x12) == UNK_142f87e1d);
    auVar2[0xe] = -(*(char *)((longlong)param_2 + 0x13) == UNK_142f87e1e);
    auVar2[0xf] = -(*(char *)((longlong)param_2 + 0x14) == UNK_142f87e1f);
    auVar1[0] = -((char)*param_2 == UNK_142f87e20);
    auVar1[1] = -(*(char *)((longlong)param_2 + 1) == UNK_142f87e21);
    auVar1[2] = -(*(char *)((longlong)param_2 + 2) == UNK_142f87e22);
    auVar1[3] = -(*(char *)((longlong)param_2 + 3) == UNK_142f87e23);
    auVar1[4] = -(*(char *)((longlong)param_2 + 4) == UNK_142f87e24);
    auVar1[5] = -(*(char *)((longlong)param_2 + 5) == UNK_142f87e25);
    auVar1[6] = -(*(char *)((longlong)param_2 + 6) == UNK_142f87e26);
    auVar1[7] = -(*(char *)((longlong)param_2 + 7) == UNK_142f87e27);
    auVar1[8] = -((char)param_2[1] == UNK_142f87e28);
    auVar1[9] = -(*(char *)((longlong)param_2 + 9) == UNK_142f87e29);
    auVar1[10] = -(*(char *)((longlong)param_2 + 10) == UNK_142f87e2a);
    auVar1[0xb] = -(*(char *)((longlong)param_2 + 0xb) == UNK_142f87e2b);
    auVar1[0xc] = -(*(char *)((longlong)param_2 + 0xc) == UNK_142f87e2c);
    auVar1[0xd] = -(*(char *)((longlong)param_2 + 0xd) == UNK_142f87e2d);
    auVar1[0xe] = -(*(char *)((longlong)param_2 + 0xe) == UNK_142f87e2e);
    auVar1[0xf] = -(*(char *)((longlong)param_2 + 0xf) == UNK_142f87e2f);
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
      param_1[1] = 3;
      *param_1 = 0;
      return;
    }
  }
  param_1[1] = 6;
  *param_1 = 0;
  return;
}

