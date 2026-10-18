// VA 0x140641fa0, PDB extent 257 bytes
// country_core::resources::grading_lut::_::impl$0::deserialize::impl$0::visit_str<serde_json::error::Error>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/grading_lut.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::resources::grading_lut::_::impl$0::deserialize::impl$0::visit_str<serde_json::error::Error>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/grading_lut.rs
   Extent: 257 */

void pdb_140641fa0(undefined1 *param_1,longlong *param_2,undefined8 param_3)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  
  switch(param_3) {
  case 8:
    if (*param_2 == 0x74666968735f7665) {
      param_1[1] = 3;
      *param_1 = 0;
      return;
    }
    if (*param_2 == 0x74736172746e6f63) {
      param_1[1] = 4;
      *param_1 = 0;
      return;
    }
    break;
  case 10:
    if ((short)param_2[1] == 0x6e6f && *param_2 == 0x6974617275746173) {
      param_1[1] = 5;
      *param_1 = 0;
      return;
    }
    break;
  case 0xc:
    if ((int)param_2[1] == 0x726f6c6f && *param_2 == 0x635f737361707962) {
      param_1[1] = 0;
      *param_1 = 0;
      return;
    }
    break;
  case 0x10:
    auVar1[0] = -((char)*param_2 == UNK_142f8b5e0);
    auVar1[1] = -(*(char *)((longlong)param_2 + 1) == UNK_142f8b5e1);
    auVar1[2] = -(*(char *)((longlong)param_2 + 2) == UNK_142f8b5e2);
    auVar1[3] = -(*(char *)((longlong)param_2 + 3) == UNK_142f8b5e3);
    auVar1[4] = -(*(char *)((longlong)param_2 + 4) == UNK_142f8b5e4);
    auVar1[5] = -(*(char *)((longlong)param_2 + 5) == UNK_142f8b5e5);
    auVar1[6] = -(*(char *)((longlong)param_2 + 6) == UNK_142f8b5e6);
    auVar1[7] = -(*(char *)((longlong)param_2 + 7) == UNK_142f8b5e7);
    auVar1[8] = -((char)param_2[1] == UNK_142f8b5e8);
    auVar1[9] = -(*(char *)((longlong)param_2 + 9) == UNK_142f8b5e9);
    auVar1[10] = -(*(char *)((longlong)param_2 + 10) == UNK_142f8b5ea);
    auVar1[0xb] = -(*(char *)((longlong)param_2 + 0xb) == UNK_142f8b5eb);
    auVar1[0xc] = -(*(char *)((longlong)param_2 + 0xc) == UNK_142f8b5ec);
    auVar1[0xd] = -(*(char *)((longlong)param_2 + 0xd) == UNK_142f8b5ed);
    auVar1[0xe] = -(*(char *)((longlong)param_2 + 0xe) == UNK_142f8b5ee);
    auVar1[0xf] = -(*(char *)((longlong)param_2 + 0xf) == UNK_142f8b5ef);
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
    break;
  case 0x13:
    auVar3[0] = -(*(char *)((longlong)param_2 + 3) == UNK_142f8b5f0);
    auVar3[1] = -(*(char *)((longlong)param_2 + 4) == UNK_142f8b5f1);
    auVar3[2] = -(*(char *)((longlong)param_2 + 5) == UNK_142f8b5f2);
    auVar3[3] = -(*(char *)((longlong)param_2 + 6) == UNK_142f8b5f3);
    auVar3[4] = -(*(char *)((longlong)param_2 + 7) == UNK_142f8b5f4);
    auVar3[5] = -((char)param_2[1] == UNK_142f8b5f5);
    auVar3[6] = -(*(char *)((longlong)param_2 + 9) == UNK_142f8b5f6);
    auVar3[7] = -(*(char *)((longlong)param_2 + 10) == UNK_142f8b5f7);
    auVar3[8] = -(*(char *)((longlong)param_2 + 0xb) == UNK_142f8b5f8);
    auVar3[9] = -(*(char *)((longlong)param_2 + 0xc) == UNK_142f8b5f9);
    auVar3[10] = -(*(char *)((longlong)param_2 + 0xd) == UNK_142f8b5fa);
    auVar3[0xb] = -(*(char *)((longlong)param_2 + 0xe) == UNK_142f8b5fb);
    auVar3[0xc] = -(*(char *)((longlong)param_2 + 0xf) == UNK_142f8b5fc);
    auVar3[0xd] = -((char)param_2[2] == UNK_142f8b5fd);
    auVar3[0xe] = -(*(char *)((longlong)param_2 + 0x11) == UNK_142f8b5fe);
    auVar3[0xf] = -(*(char *)((longlong)param_2 + 0x12) == UNK_142f8b5ff);
    auVar2[0] = -((char)*param_2 == UNK_142f8b600);
    auVar2[1] = -(*(char *)((longlong)param_2 + 1) == UNK_142f8b601);
    auVar2[2] = -(*(char *)((longlong)param_2 + 2) == UNK_142f8b602);
    auVar2[3] = -(*(char *)((longlong)param_2 + 3) == UNK_142f8b603);
    auVar2[4] = -(*(char *)((longlong)param_2 + 4) == UNK_142f8b604);
    auVar2[5] = -(*(char *)((longlong)param_2 + 5) == UNK_142f8b605);
    auVar2[6] = -(*(char *)((longlong)param_2 + 6) == UNK_142f8b606);
    auVar2[7] = -(*(char *)((longlong)param_2 + 7) == UNK_142f8b607);
    auVar2[8] = -((char)param_2[1] == UNK_142f8b608);
    auVar2[9] = -(*(char *)((longlong)param_2 + 9) == UNK_142f8b609);
    auVar2[10] = -(*(char *)((longlong)param_2 + 10) == UNK_142f8b60a);
    auVar2[0xb] = -(*(char *)((longlong)param_2 + 0xb) == UNK_142f8b60b);
    auVar2[0xc] = -(*(char *)((longlong)param_2 + 0xc) == UNK_142f8b60c);
    auVar2[0xd] = -(*(char *)((longlong)param_2 + 0xd) == UNK_142f8b60d);
    auVar2[0xe] = -(*(char *)((longlong)param_2 + 0xe) == UNK_142f8b60e);
    auVar2[0xf] = -(*(char *)((longlong)param_2 + 0xf) == UNK_142f8b60f);
    auVar2 = auVar2 & auVar3;
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
      param_1[1] = 1;
      *param_1 = 0;
      return;
    }
  }
  param_1[1] = 6;
  *param_1 = 0;
  return;
}

