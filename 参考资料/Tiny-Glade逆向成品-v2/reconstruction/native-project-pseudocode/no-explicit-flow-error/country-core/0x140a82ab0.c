// VA 0x140a82ab0, PDB extent 194 bytes
// country_core::startup::clearing::_::impl$0::deserialize::impl$0::visit_str<serde_json::error::Error>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/startup/clearing.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::startup::clearing::_::impl$0::deserialize::impl$0::visit_str<serde_json::error::Error>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/startup/clearing.rs
   Extent: 194 */

void pdb_140a82ab0(undefined1 *param_1,longlong *param_2,undefined8 param_3)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  
  switch(param_3) {
  case 6:
    if (*(short *)((longlong)param_2 + 4) == 0x6261 && (int)*param_2 == 0x66657270) {
      param_1[1] = 0;
      *param_1 = 0;
      return;
    }
    break;
  case 10:
    if ((short)param_2[1] == 0x7374 && *param_2 == 0x6e656d6563616c70) {
      param_1[1] = 1;
      *param_1 = 0;
      return;
    }
    break;
  case 0x10:
    auVar1[0] = -((char)*param_2 == UNK_143042710);
    auVar1[1] = -(*(char *)((longlong)param_2 + 1) == UNK_143042711);
    auVar1[2] = -(*(char *)((longlong)param_2 + 2) == UNK_143042712);
    auVar1[3] = -(*(char *)((longlong)param_2 + 3) == UNK_143042713);
    auVar1[4] = -(*(char *)((longlong)param_2 + 4) == UNK_143042714);
    auVar1[5] = -(*(char *)((longlong)param_2 + 5) == UNK_143042715);
    auVar1[6] = -(*(char *)((longlong)param_2 + 6) == UNK_143042716);
    auVar1[7] = -(*(char *)((longlong)param_2 + 7) == UNK_143042717);
    auVar1[8] = -((char)param_2[1] == UNK_143042718);
    auVar1[9] = -(*(char *)((longlong)param_2 + 9) == UNK_143042719);
    auVar1[10] = -(*(char *)((longlong)param_2 + 10) == UNK_14304271a);
    auVar1[0xb] = -(*(char *)((longlong)param_2 + 0xb) == UNK_14304271b);
    auVar1[0xc] = -(*(char *)((longlong)param_2 + 0xc) == UNK_14304271c);
    auVar1[0xd] = -(*(char *)((longlong)param_2 + 0xd) == UNK_14304271d);
    auVar1[0xe] = -(*(char *)((longlong)param_2 + 0xe) == UNK_14304271e);
    auVar1[0xf] = -(*(char *)((longlong)param_2 + 0xf) == UNK_14304271f);
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
  case 0x19:
    auVar3[0] = -(*(char *)((longlong)param_2 + 9) == UNK_1430426f0);
    auVar3[1] = -(*(char *)((longlong)param_2 + 10) == UNK_1430426f1);
    auVar3[2] = -(*(char *)((longlong)param_2 + 0xb) == UNK_1430426f2);
    auVar3[3] = -(*(char *)((longlong)param_2 + 0xc) == UNK_1430426f3);
    auVar3[4] = -(*(char *)((longlong)param_2 + 0xd) == UNK_1430426f4);
    auVar3[5] = -(*(char *)((longlong)param_2 + 0xe) == UNK_1430426f5);
    auVar3[6] = -(*(char *)((longlong)param_2 + 0xf) == UNK_1430426f6);
    auVar3[7] = -((char)param_2[2] == UNK_1430426f7);
    auVar3[8] = -(*(char *)((longlong)param_2 + 0x11) == UNK_1430426f8);
    auVar3[9] = -(*(char *)((longlong)param_2 + 0x12) == UNK_1430426f9);
    auVar3[10] = -(*(char *)((longlong)param_2 + 0x13) == UNK_1430426fa);
    auVar3[0xb] = -(*(char *)((longlong)param_2 + 0x14) == UNK_1430426fb);
    auVar3[0xc] = -(*(char *)((longlong)param_2 + 0x15) == UNK_1430426fc);
    auVar3[0xd] = -(*(char *)((longlong)param_2 + 0x16) == UNK_1430426fd);
    auVar3[0xe] = -(*(char *)((longlong)param_2 + 0x17) == UNK_1430426fe);
    auVar3[0xf] = -((char)param_2[3] == UNK_1430426ff);
    auVar2[0] = -((char)*param_2 == UNK_143042700);
    auVar2[1] = -(*(char *)((longlong)param_2 + 1) == UNK_143042701);
    auVar2[2] = -(*(char *)((longlong)param_2 + 2) == UNK_143042702);
    auVar2[3] = -(*(char *)((longlong)param_2 + 3) == UNK_143042703);
    auVar2[4] = -(*(char *)((longlong)param_2 + 4) == UNK_143042704);
    auVar2[5] = -(*(char *)((longlong)param_2 + 5) == UNK_143042705);
    auVar2[6] = -(*(char *)((longlong)param_2 + 6) == UNK_143042706);
    auVar2[7] = -(*(char *)((longlong)param_2 + 7) == UNK_143042707);
    auVar2[8] = -((char)param_2[1] == UNK_143042708);
    auVar2[9] = -(*(char *)((longlong)param_2 + 9) == UNK_143042709);
    auVar2[10] = -(*(char *)((longlong)param_2 + 10) == UNK_14304270a);
    auVar2[0xb] = -(*(char *)((longlong)param_2 + 0xb) == UNK_14304270b);
    auVar2[0xc] = -(*(char *)((longlong)param_2 + 0xc) == UNK_14304270c);
    auVar2[0xd] = -(*(char *)((longlong)param_2 + 0xd) == UNK_14304270d);
    auVar2[0xe] = -(*(char *)((longlong)param_2 + 0xe) == UNK_14304270e);
    auVar2[0xf] = -(*(char *)((longlong)param_2 + 0xf) == UNK_14304270f);
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
      param_1[1] = 3;
      *param_1 = 0;
      return;
    }
  }
  param_1[1] = 4;
  *param_1 = 0;
  return;
}

