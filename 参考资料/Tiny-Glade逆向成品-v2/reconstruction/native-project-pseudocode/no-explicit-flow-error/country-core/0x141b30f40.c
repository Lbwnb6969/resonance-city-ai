// VA 0x141b30f40, PDB extent 300 bytes
// country_core::resources::history::roof_edit::_::impl$0::deserialize::impl$0::visit_str<serde_json::error::Error>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/history/roof_edit.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::resources::history::roof_edit::_::impl$0::deserialize::impl$0::visit_str<serde_json::error::Error>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/history/roof_edit.rs
   Extent: 300 */

void pdb_141b30f40(undefined1 *param_1,longlong *param_2,longlong param_3)

{
  undefined8 uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  
  if (param_3 == 10) {
    if ((short)param_2[1] == 0x666f && *param_2 == 0x6f52657461657243) {
      param_1[1] = 0;
    }
    else if ((short)param_2[1] == 0x666f && *param_2 == 0x6f526574656c6544) {
      param_1[1] = 1;
    }
    else {
      if ((short)param_2[1] != 0x7469 || *param_2 != 0x64456c6175736956) goto LAB_141b3103a;
      param_1[1] = 2;
    }
  }
  else if (param_3 == 0x12) {
    auVar2[0] = -((char)*param_2 == DAT_143392e50);
    auVar2[1] = -(*(char *)((longlong)param_2 + 1) == UNK_143392e51);
    auVar2[2] = -(*(char *)((longlong)param_2 + 2) == UNK_143392e52);
    auVar2[3] = -(*(char *)((longlong)param_2 + 3) == UNK_143392e53);
    auVar2[4] = -(*(char *)((longlong)param_2 + 4) == UNK_143392e54);
    auVar2[5] = -(*(char *)((longlong)param_2 + 5) == UNK_143392e55);
    auVar2[6] = -(*(char *)((longlong)param_2 + 6) == UNK_143392e56);
    auVar2[7] = -(*(char *)((longlong)param_2 + 7) == UNK_143392e57);
    auVar2[8] = -((char)param_2[1] == UNK_143392e58);
    auVar2[9] = -(*(char *)((longlong)param_2 + 9) == UNK_143392e59);
    auVar2[10] = -(*(char *)((longlong)param_2 + 10) == UNK_143392e5a);
    auVar2[0xb] = -(*(char *)((longlong)param_2 + 0xb) == UNK_143392e5b);
    auVar2[0xc] = -(*(char *)((longlong)param_2 + 0xc) == UNK_143392e5c);
    auVar2[0xd] = -(*(char *)((longlong)param_2 + 0xd) == UNK_143392e5d);
    auVar2[0xe] = -(*(char *)((longlong)param_2 + 0xe) == UNK_143392e5e);
    auVar2[0xf] = -(*(char *)((longlong)param_2 + 0xf) == UNK_143392e5f);
    auVar4[0] = -((char)(short)param_2[2] == DAT_143392e60);
    auVar4[1] = -((char)((ushort)(short)param_2[2] >> 8) == UNK_143392e61);
    auVar4[2] = -(UNK_143392e62 == '\0');
    auVar4[3] = -(UNK_143392e63 == '\0');
    auVar4[4] = -(UNK_143392e64 == '\0');
    auVar4[5] = -(UNK_143392e65 == '\0');
    auVar4[6] = -(UNK_143392e66 == '\0');
    auVar4[7] = -(UNK_143392e67 == '\0');
    auVar4[8] = -(UNK_143392e68 == '\0');
    auVar4[9] = -(UNK_143392e69 == '\0');
    auVar4[10] = -(UNK_143392e6a == '\0');
    auVar4[0xb] = -(UNK_143392e6b == '\0');
    auVar4[0xc] = -(UNK_143392e6c == '\0');
    auVar4[0xd] = -(UNK_143392e6d == '\0');
    auVar4[0xe] = -(UNK_143392e6e == '\0');
    auVar4[0xf] = -(UNK_143392e6f == '\0');
    auVar4 = auVar4 & auVar2;
    if ((ushort)((ushort)(SUB161(auVar4 >> 7,0) & 1) | (ushort)(SUB161(auVar4 >> 0xf,0) & 1) << 1 |
                 (ushort)(SUB161(auVar4 >> 0x17,0) & 1) << 2 |
                 (ushort)(SUB161(auVar4 >> 0x1f,0) & 1) << 3 |
                 (ushort)(SUB161(auVar4 >> 0x27,0) & 1) << 4 |
                 (ushort)(SUB161(auVar4 >> 0x2f,0) & 1) << 5 |
                 (ushort)(SUB161(auVar4 >> 0x37,0) & 1) << 6 |
                 (ushort)(SUB161(auVar4 >> 0x3f,0) & 1) << 7 |
                 (ushort)(SUB161(auVar4 >> 0x47,0) & 1) << 8 |
                 (ushort)(SUB161(auVar4 >> 0x4f,0) & 1) << 9 |
                 (ushort)(SUB161(auVar4 >> 0x57,0) & 1) << 10 |
                 (ushort)(SUB161(auVar4 >> 0x5f,0) & 1) << 0xb |
                 (ushort)(SUB161(auVar4 >> 0x67,0) & 1) << 0xc |
                 (ushort)(SUB161(auVar4 >> 0x6f,0) & 1) << 0xd |
                 (ushort)(SUB161(auVar4 >> 0x77,0) & 1) << 0xe |
                (ushort)(byte)(auVar4[0xf] >> 7) << 0xf) != 0xffff) {
LAB_141b3103a:
      uVar1 = pdb_142d8f140(param_2,param_3,&UNK_1433934f0,5);
      *(undefined8 *)(param_1 + 8) = uVar1;
      *param_1 = 1;
      return;
    }
    param_1[1] = 3;
  }
  else {
    if ((param_3 != 0x16) ||
       (auVar5[0] = -(*(char *)((longlong)param_2 + 6) == DAT_143392e30),
       auVar5[1] = -(*(char *)((longlong)param_2 + 7) == UNK_143392e31),
       auVar5[2] = -((char)param_2[1] == UNK_143392e32),
       auVar5[3] = -(*(char *)((longlong)param_2 + 9) == UNK_143392e33),
       auVar5[4] = -(*(char *)((longlong)param_2 + 10) == UNK_143392e34),
       auVar5[5] = -(*(char *)((longlong)param_2 + 0xb) == UNK_143392e35),
       auVar5[6] = -(*(char *)((longlong)param_2 + 0xc) == UNK_143392e36),
       auVar5[7] = -(*(char *)((longlong)param_2 + 0xd) == UNK_143392e37),
       auVar5[8] = -(*(char *)((longlong)param_2 + 0xe) == UNK_143392e38),
       auVar5[9] = -(*(char *)((longlong)param_2 + 0xf) == UNK_143392e39),
       auVar5[10] = -((char)param_2[2] == UNK_143392e3a),
       auVar5[0xb] = -(*(char *)((longlong)param_2 + 0x11) == UNK_143392e3b),
       auVar5[0xc] = -(*(char *)((longlong)param_2 + 0x12) == UNK_143392e3c),
       auVar5[0xd] = -(*(char *)((longlong)param_2 + 0x13) == UNK_143392e3d),
       auVar5[0xe] = -(*(char *)((longlong)param_2 + 0x14) == UNK_143392e3e),
       auVar5[0xf] = -(*(char *)((longlong)param_2 + 0x15) == UNK_143392e3f),
       auVar3[0] = -((char)*param_2 == DAT_143392e40),
       auVar3[1] = -(*(char *)((longlong)param_2 + 1) == UNK_143392e41),
       auVar3[2] = -(*(char *)((longlong)param_2 + 2) == UNK_143392e42),
       auVar3[3] = -(*(char *)((longlong)param_2 + 3) == UNK_143392e43),
       auVar3[4] = -(*(char *)((longlong)param_2 + 4) == UNK_143392e44),
       auVar3[5] = -(*(char *)((longlong)param_2 + 5) == UNK_143392e45),
       auVar3[6] = -(*(char *)((longlong)param_2 + 6) == UNK_143392e46),
       auVar3[7] = -(*(char *)((longlong)param_2 + 7) == UNK_143392e47),
       auVar3[8] = -((char)param_2[1] == UNK_143392e48),
       auVar3[9] = -(*(char *)((longlong)param_2 + 9) == UNK_143392e49),
       auVar3[10] = -(*(char *)((longlong)param_2 + 10) == UNK_143392e4a),
       auVar3[0xb] = -(*(char *)((longlong)param_2 + 0xb) == UNK_143392e4b),
       auVar3[0xc] = -(*(char *)((longlong)param_2 + 0xc) == UNK_143392e4c),
       auVar3[0xd] = -(*(char *)((longlong)param_2 + 0xd) == UNK_143392e4d),
       auVar3[0xe] = -(*(char *)((longlong)param_2 + 0xe) == UNK_143392e4e),
       auVar3[0xf] = -(*(char *)((longlong)param_2 + 0xf) == UNK_143392e4f),
       auVar3 = auVar3 & auVar5,
       (ushort)((ushort)(SUB161(auVar3 >> 7,0) & 1) | (ushort)(SUB161(auVar3 >> 0xf,0) & 1) << 1 |
                (ushort)(SUB161(auVar3 >> 0x17,0) & 1) << 2 |
                (ushort)(SUB161(auVar3 >> 0x1f,0) & 1) << 3 |
                (ushort)(SUB161(auVar3 >> 0x27,0) & 1) << 4 |
                (ushort)(SUB161(auVar3 >> 0x2f,0) & 1) << 5 |
                (ushort)(SUB161(auVar3 >> 0x37,0) & 1) << 6 |
                (ushort)(SUB161(auVar3 >> 0x3f,0) & 1) << 7 |
                (ushort)(SUB161(auVar3 >> 0x47,0) & 1) << 8 |
                (ushort)(SUB161(auVar3 >> 0x4f,0) & 1) << 9 |
                (ushort)(SUB161(auVar3 >> 0x57,0) & 1) << 10 |
                (ushort)(SUB161(auVar3 >> 0x5f,0) & 1) << 0xb |
                (ushort)(SUB161(auVar3 >> 0x67,0) & 1) << 0xc |
                (ushort)(SUB161(auVar3 >> 0x6f,0) & 1) << 0xd |
                (ushort)(SUB161(auVar3 >> 0x77,0) & 1) << 0xe |
               (ushort)(byte)(auVar3[0xf] >> 7) << 0xf) != 0xffff)) goto LAB_141b3103a;
    param_1[1] = 4;
  }
  *param_1 = 0;
  return;
}

