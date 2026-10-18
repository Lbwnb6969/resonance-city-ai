// VA 0x140143360, PDB extent 263 bytes
// country_core::render::render_config::_::impl$0::deserialize::impl$0::visit_str<enum2$<ron::error::Error> >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/render/render_config.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::render::render_config::_::impl$0::deserialize::impl$0::visit_str<enum2$<ron::error::Error>
   >
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/render/render_config.rs
   Extent: 263 */

undefined2 * pdb_140143360(undefined2 *param_1,longlong *param_2,undefined8 param_3)

{
  undefined1 auVar1 [16];
  
  switch(param_3) {
  case 7:
    if (*(int *)((longlong)param_2 + 3) == 0x7974696c && (int)*param_2 == 0x6c617551) {
      *param_1 = 0x332;
      return param_1;
    }
    break;
  case 8:
    if (*param_2 == 0x6465636e616c6142) {
      *param_1 = 0x232;
      return param_1;
    }
    break;
  case 0xb:
    if (*(longlong *)((longlong)param_2 + 3) == 0x65636e616d726f66 && *param_2 == 0x616d726f66726550
       ) {
      *param_1 = 0x132;
      return param_1;
    }
    break;
  case 0xc:
    if ((int)param_2[1] == 0x7974696c && *param_2 == 0x6175516172746c55) {
      *param_1 = 0x432;
      return param_1;
    }
    break;
  case 0x10:
    auVar1[0] = -((char)*param_2 == UNK_142e47b00);
    auVar1[1] = -(*(char *)((longlong)param_2 + 1) == UNK_142e47b01);
    auVar1[2] = -(*(char *)((longlong)param_2 + 2) == UNK_142e47b02);
    auVar1[3] = -(*(char *)((longlong)param_2 + 3) == UNK_142e47b03);
    auVar1[4] = -(*(char *)((longlong)param_2 + 4) == UNK_142e47b04);
    auVar1[5] = -(*(char *)((longlong)param_2 + 5) == UNK_142e47b05);
    auVar1[6] = -(*(char *)((longlong)param_2 + 6) == UNK_142e47b06);
    auVar1[7] = -(*(char *)((longlong)param_2 + 7) == UNK_142e47b07);
    auVar1[8] = -((char)param_2[1] == UNK_142e47b08);
    auVar1[9] = -(*(char *)((longlong)param_2 + 9) == UNK_142e47b09);
    auVar1[10] = -(*(char *)((longlong)param_2 + 10) == UNK_142e47b0a);
    auVar1[0xb] = -(*(char *)((longlong)param_2 + 0xb) == UNK_142e47b0b);
    auVar1[0xc] = -(*(char *)((longlong)param_2 + 0xc) == UNK_142e47b0c);
    auVar1[0xd] = -(*(char *)((longlong)param_2 + 0xd) == UNK_142e47b0d);
    auVar1[0xe] = -(*(char *)((longlong)param_2 + 0xe) == UNK_142e47b0e);
    auVar1[0xf] = -(*(char *)((longlong)param_2 + 0xf) == UNK_142e47b0f);
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
      *param_1 = 0x32;
      return param_1;
    }
  }
  pdb_142db7e70();
  return param_1;
}

