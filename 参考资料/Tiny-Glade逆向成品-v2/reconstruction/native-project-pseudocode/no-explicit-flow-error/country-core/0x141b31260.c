// VA 0x141b31260, PDB extent 229 bytes
// country_core::resources::history::roof_edit::_::impl$0::deserialize::impl$2::visit_enum::impl$0::visit_str<serde_json::error::Error>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/history/roof_edit.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::resources::history::roof_edit::_::impl$0::deserialize::impl$2::visit_enum::impl$0::visit_str<serde_json::error::Error>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/history/roof_edit.rs
   Extent: 229 */

void pdb_141b31260(undefined1 *param_1,longlong *param_2,undefined8 param_3)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  
  switch(param_3) {
  case 6:
    if (*(short *)((longlong)param_2 + 4) == 0x736d && (int)*param_2 == 0x61726170) {
code_r0x000141b3133c:
      param_1[1] = 1;
      *param_1 = 0;
      return;
    }
    break;
  case 8:
    if (*param_2 == 0x64695f726f6c6f63) {
      param_1[1] = 2;
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
  case 0xf:
    if (*(longlong *)((longlong)param_2 + 7) == 0x656c7974735f666f && *param_2 == 0x6f6f725f74616c66
       ) {
      param_1[1] = 3;
      *param_1 = 0;
      return;
    }
    break;
  case 0x11:
    auVar1[0] = -((char)*param_2 == UNK_143392e70);
    auVar1[1] = -(*(char *)((longlong)param_2 + 1) == UNK_143392e71);
    auVar1[2] = -(*(char *)((longlong)param_2 + 2) == UNK_143392e72);
    auVar1[3] = -(*(char *)((longlong)param_2 + 3) == UNK_143392e73);
    auVar1[4] = -(*(char *)((longlong)param_2 + 4) == UNK_143392e74);
    auVar1[5] = -(*(char *)((longlong)param_2 + 5) == UNK_143392e75);
    auVar1[6] = -(*(char *)((longlong)param_2 + 6) == UNK_143392e76);
    auVar1[7] = -(*(char *)((longlong)param_2 + 7) == UNK_143392e77);
    auVar1[8] = -((char)param_2[1] == UNK_143392e78);
    auVar1[9] = -(*(char *)((longlong)param_2 + 9) == UNK_143392e79);
    auVar1[10] = -(*(char *)((longlong)param_2 + 10) == UNK_143392e7a);
    auVar1[0xb] = -(*(char *)((longlong)param_2 + 0xb) == UNK_143392e7b);
    auVar1[0xc] = -(*(char *)((longlong)param_2 + 0xc) == UNK_143392e7c);
    auVar1[0xd] = -(*(char *)((longlong)param_2 + 0xd) == UNK_143392e7d);
    auVar1[0xe] = -(*(char *)((longlong)param_2 + 0xe) == UNK_143392e7e);
    auVar1[0xf] = -(*(char *)((longlong)param_2 + 0xf) == UNK_143392e7f);
    auVar2[0] = -((char)param_2[2] == UNK_143388380);
    auVar2[1] = -(UNK_143388381 == '\0');
    auVar2[2] = -(UNK_143388382 == '\0');
    auVar2[3] = -(UNK_143388383 == '\0');
    auVar2[4] = -(UNK_143388384 == '\0');
    auVar2[5] = -(UNK_143388385 == '\0');
    auVar2[6] = -(UNK_143388386 == '\0');
    auVar2[7] = -(UNK_143388387 == '\0');
    auVar2[8] = -(UNK_143388388 == '\0');
    auVar2[9] = -(UNK_143388389 == '\0');
    auVar2[10] = -(UNK_14338838a == '\0');
    auVar2[0xb] = -(UNK_14338838b == '\0');
    auVar2[0xc] = -(UNK_14338838c == '\0');
    auVar2[0xd] = -(UNK_14338838d == '\0');
    auVar2[0xe] = -(UNK_14338838e == '\0');
    auVar2[0xf] = -(UNK_14338838f == '\0');
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
                (ushort)(byte)(auVar2[0xf] >> 7) << 0xf) == 0xffff) goto code_r0x000141b3133c;
  }
  param_1[1] = 4;
  *param_1 = 0;
  return;
}

