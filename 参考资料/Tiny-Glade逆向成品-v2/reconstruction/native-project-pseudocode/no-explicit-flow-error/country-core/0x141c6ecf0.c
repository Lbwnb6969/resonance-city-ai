// VA 0x141c6ecf0, PDB extent 253 bytes
// country_core::input::input_stream::_::impl$0::deserialize::impl$0::visit_str<serde_json::error::Error>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/input/input_stream.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::input::input_stream::_::impl$0::deserialize::impl$0::visit_str<serde_json::error::Error>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/input/input_stream.rs
   Extent: 253 */

void pdb_141c6ecf0(undefined1 *param_1,char *param_2,undefined8 param_3)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  
  switch(param_3) {
  case 0x11:
    auVar1[0] = -(*param_2 == UNK_1433a2da0);
    auVar1[1] = -(param_2[1] == UNK_1433a2da1);
    auVar1[2] = -(param_2[2] == UNK_1433a2da2);
    auVar1[3] = -(param_2[3] == UNK_1433a2da3);
    auVar1[4] = -(param_2[4] == UNK_1433a2da4);
    auVar1[5] = -(param_2[5] == UNK_1433a2da5);
    auVar1[6] = -(param_2[6] == UNK_1433a2da6);
    auVar1[7] = -(param_2[7] == UNK_1433a2da7);
    auVar1[8] = -(param_2[8] == UNK_1433a2da8);
    auVar1[9] = -(param_2[9] == UNK_1433a2da9);
    auVar1[10] = -(param_2[10] == UNK_1433a2daa);
    auVar1[0xb] = -(param_2[0xb] == UNK_1433a2dab);
    auVar1[0xc] = -(param_2[0xc] == UNK_1433a2dac);
    auVar1[0xd] = -(param_2[0xd] == UNK_1433a2dad);
    auVar1[0xe] = -(param_2[0xe] == UNK_1433a2dae);
    auVar1[0xf] = -(param_2[0xf] == UNK_1433a2daf);
    auVar5[0] = -(param_2[0x10] == DAT_142e505d0);
    auVar5[1] = -(UNK_142e505d1 == '\0');
    auVar5[2] = -(UNK_142e505d2 == '\0');
    auVar5[3] = -(UNK_142e505d3 == '\0');
    auVar5[4] = -(UNK_142e505d4 == '\0');
    auVar5[5] = -(UNK_142e505d5 == '\0');
    auVar5[6] = -(UNK_142e505d6 == '\0');
    auVar5[7] = -(UNK_142e505d7 == '\0');
    auVar5[8] = -(UNK_142e505d8 == '\0');
    auVar5[9] = -(UNK_142e505d9 == '\0');
    auVar5[10] = -(UNK_142e505da == '\0');
    auVar5[0xb] = -(UNK_142e505db == '\0');
    auVar5[0xc] = -(UNK_142e505dc == '\0');
    auVar5[0xd] = -(UNK_142e505dd == '\0');
    auVar5[0xe] = -(UNK_142e505de == '\0');
    auVar5[0xf] = -(UNK_142e505df == '\0');
    auVar5 = auVar5 & auVar1;
    if ((ushort)((ushort)(SUB161(auVar5 >> 7,0) & 1) | (ushort)(SUB161(auVar5 >> 0xf,0) & 1) << 1 |
                 (ushort)(SUB161(auVar5 >> 0x17,0) & 1) << 2 |
                 (ushort)(SUB161(auVar5 >> 0x1f,0) & 1) << 3 |
                 (ushort)(SUB161(auVar5 >> 0x27,0) & 1) << 4 |
                 (ushort)(SUB161(auVar5 >> 0x2f,0) & 1) << 5 |
                 (ushort)(SUB161(auVar5 >> 0x37,0) & 1) << 6 |
                 (ushort)(SUB161(auVar5 >> 0x3f,0) & 1) << 7 |
                 (ushort)(SUB161(auVar5 >> 0x47,0) & 1) << 8 |
                 (ushort)(SUB161(auVar5 >> 0x4f,0) & 1) << 9 |
                 (ushort)(SUB161(auVar5 >> 0x57,0) & 1) << 10 |
                 (ushort)(SUB161(auVar5 >> 0x5f,0) & 1) << 0xb |
                 (ushort)(SUB161(auVar5 >> 0x67,0) & 1) << 0xc |
                 (ushort)(SUB161(auVar5 >> 0x6f,0) & 1) << 0xd |
                 (ushort)(SUB161(auVar5 >> 0x77,0) & 1) << 0xe |
                (ushort)(byte)(auVar5[0xf] >> 7) << 0xf) == 0xffff) {
      param_1[1] = 0;
      *param_1 = 0;
      return;
    }
    break;
  case 0x12:
    auVar3[0] = -(*param_2 == UNK_1433a2d70);
    auVar3[1] = -(param_2[1] == UNK_1433a2d71);
    auVar3[2] = -(param_2[2] == UNK_1433a2d72);
    auVar3[3] = -(param_2[3] == UNK_1433a2d73);
    auVar3[4] = -(param_2[4] == UNK_1433a2d74);
    auVar3[5] = -(param_2[5] == UNK_1433a2d75);
    auVar3[6] = -(param_2[6] == UNK_1433a2d76);
    auVar3[7] = -(param_2[7] == UNK_1433a2d77);
    auVar3[8] = -(param_2[8] == UNK_1433a2d78);
    auVar3[9] = -(param_2[9] == UNK_1433a2d79);
    auVar3[10] = -(param_2[10] == UNK_1433a2d7a);
    auVar3[0xb] = -(param_2[0xb] == UNK_1433a2d7b);
    auVar3[0xc] = -(param_2[0xc] == UNK_1433a2d7c);
    auVar3[0xd] = -(param_2[0xd] == UNK_1433a2d7d);
    auVar3[0xe] = -(param_2[0xe] == UNK_1433a2d7e);
    auVar3[0xf] = -(param_2[0xf] == UNK_1433a2d7f);
    auVar7[0] = -((char)*(undefined2 *)(param_2 + 0x10) == UNK_142f45ad0);
    auVar7[1] = -((char)((ushort)*(undefined2 *)(param_2 + 0x10) >> 8) == UNK_142f45ad1);
    auVar7[2] = -(UNK_142f45ad2 == '\0');
    auVar7[3] = -(UNK_142f45ad3 == '\0');
    auVar7[4] = -(UNK_142f45ad4 == '\0');
    auVar7[5] = -(UNK_142f45ad5 == '\0');
    auVar7[6] = -(UNK_142f45ad6 == '\0');
    auVar7[7] = -(UNK_142f45ad7 == '\0');
    auVar7[8] = -(UNK_142f45ad8 == '\0');
    auVar7[9] = -(UNK_142f45ad9 == '\0');
    auVar7[10] = -(UNK_142f45ada == '\0');
    auVar7[0xb] = -(UNK_142f45adb == '\0');
    auVar7[0xc] = -(UNK_142f45adc == '\0');
    auVar7[0xd] = -(UNK_142f45add == '\0');
    auVar7[0xe] = -(UNK_142f45ade == '\0');
    auVar7[0xf] = -(UNK_142f45adf == '\0');
    auVar7 = auVar7 & auVar3;
    if ((ushort)((ushort)(SUB161(auVar7 >> 7,0) & 1) | (ushort)(SUB161(auVar7 >> 0xf,0) & 1) << 1 |
                 (ushort)(SUB161(auVar7 >> 0x17,0) & 1) << 2 |
                 (ushort)(SUB161(auVar7 >> 0x1f,0) & 1) << 3 |
                 (ushort)(SUB161(auVar7 >> 0x27,0) & 1) << 4 |
                 (ushort)(SUB161(auVar7 >> 0x2f,0) & 1) << 5 |
                 (ushort)(SUB161(auVar7 >> 0x37,0) & 1) << 6 |
                 (ushort)(SUB161(auVar7 >> 0x3f,0) & 1) << 7 |
                 (ushort)(SUB161(auVar7 >> 0x47,0) & 1) << 8 |
                 (ushort)(SUB161(auVar7 >> 0x4f,0) & 1) << 9 |
                 (ushort)(SUB161(auVar7 >> 0x57,0) & 1) << 10 |
                 (ushort)(SUB161(auVar7 >> 0x5f,0) & 1) << 0xb |
                 (ushort)(SUB161(auVar7 >> 0x67,0) & 1) << 0xc |
                 (ushort)(SUB161(auVar7 >> 0x6f,0) & 1) << 0xd |
                 (ushort)(SUB161(auVar7 >> 0x77,0) & 1) << 0xe |
                (ushort)(byte)(auVar7[0xf] >> 7) << 0xf) == 0xffff) {
      param_1[1] = 2;
      *param_1 = 0;
      return;
    }
    break;
  case 0x15:
    auVar6[0] = -(param_2[5] == UNK_1433a2d50);
    auVar6[1] = -(param_2[6] == UNK_1433a2d51);
    auVar6[2] = -(param_2[7] == UNK_1433a2d52);
    auVar6[3] = -(param_2[8] == UNK_1433a2d53);
    auVar6[4] = -(param_2[9] == UNK_1433a2d54);
    auVar6[5] = -(param_2[10] == UNK_1433a2d55);
    auVar6[6] = -(param_2[0xb] == UNK_1433a2d56);
    auVar6[7] = -(param_2[0xc] == UNK_1433a2d57);
    auVar6[8] = -(param_2[0xd] == UNK_1433a2d58);
    auVar6[9] = -(param_2[0xe] == UNK_1433a2d59);
    auVar6[10] = -(param_2[0xf] == UNK_1433a2d5a);
    auVar6[0xb] = -(param_2[0x10] == UNK_1433a2d5b);
    auVar6[0xc] = -(param_2[0x11] == UNK_1433a2d5c);
    auVar6[0xd] = -(param_2[0x12] == UNK_1433a2d5d);
    auVar6[0xe] = -(param_2[0x13] == UNK_1433a2d5e);
    auVar6[0xf] = -(param_2[0x14] == UNK_1433a2d5f);
    auVar2[0] = -(*param_2 == UNK_1433a2d60);
    auVar2[1] = -(param_2[1] == UNK_1433a2d61);
    auVar2[2] = -(param_2[2] == UNK_1433a2d62);
    auVar2[3] = -(param_2[3] == UNK_1433a2d63);
    auVar2[4] = -(param_2[4] == UNK_1433a2d64);
    auVar2[5] = -(param_2[5] == UNK_1433a2d65);
    auVar2[6] = -(param_2[6] == UNK_1433a2d66);
    auVar2[7] = -(param_2[7] == UNK_1433a2d67);
    auVar2[8] = -(param_2[8] == UNK_1433a2d68);
    auVar2[9] = -(param_2[9] == UNK_1433a2d69);
    auVar2[10] = -(param_2[10] == UNK_1433a2d6a);
    auVar2[0xb] = -(param_2[0xb] == UNK_1433a2d6b);
    auVar2[0xc] = -(param_2[0xc] == UNK_1433a2d6c);
    auVar2[0xd] = -(param_2[0xd] == UNK_1433a2d6d);
    auVar2[0xe] = -(param_2[0xe] == UNK_1433a2d6e);
    auVar2[0xf] = -(param_2[0xf] == UNK_1433a2d6f);
    auVar2 = auVar2 & auVar6;
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
    break;
  case 0x1a:
    auVar8[0] = -(param_2[10] == UNK_1433a2d80);
    auVar8[1] = -(param_2[0xb] == UNK_1433a2d81);
    auVar8[2] = -(param_2[0xc] == UNK_1433a2d82);
    auVar8[3] = -(param_2[0xd] == UNK_1433a2d83);
    auVar8[4] = -(param_2[0xe] == UNK_1433a2d84);
    auVar8[5] = -(param_2[0xf] == UNK_1433a2d85);
    auVar8[6] = -(param_2[0x10] == UNK_1433a2d86);
    auVar8[7] = -(param_2[0x11] == UNK_1433a2d87);
    auVar8[8] = -(param_2[0x12] == UNK_1433a2d88);
    auVar8[9] = -(param_2[0x13] == UNK_1433a2d89);
    auVar8[10] = -(param_2[0x14] == UNK_1433a2d8a);
    auVar8[0xb] = -(param_2[0x15] == UNK_1433a2d8b);
    auVar8[0xc] = -(param_2[0x16] == UNK_1433a2d8c);
    auVar8[0xd] = -(param_2[0x17] == UNK_1433a2d8d);
    auVar8[0xe] = -(param_2[0x18] == UNK_1433a2d8e);
    auVar8[0xf] = -(param_2[0x19] == UNK_1433a2d8f);
    auVar4[0] = -(*param_2 == UNK_1433a2d90);
    auVar4[1] = -(param_2[1] == UNK_1433a2d91);
    auVar4[2] = -(param_2[2] == UNK_1433a2d92);
    auVar4[3] = -(param_2[3] == UNK_1433a2d93);
    auVar4[4] = -(param_2[4] == UNK_1433a2d94);
    auVar4[5] = -(param_2[5] == UNK_1433a2d95);
    auVar4[6] = -(param_2[6] == UNK_1433a2d96);
    auVar4[7] = -(param_2[7] == UNK_1433a2d97);
    auVar4[8] = -(param_2[8] == UNK_1433a2d98);
    auVar4[9] = -(param_2[9] == UNK_1433a2d99);
    auVar4[10] = -(param_2[10] == UNK_1433a2d9a);
    auVar4[0xb] = -(param_2[0xb] == UNK_1433a2d9b);
    auVar4[0xc] = -(param_2[0xc] == UNK_1433a2d9c);
    auVar4[0xd] = -(param_2[0xd] == UNK_1433a2d9d);
    auVar4[0xe] = -(param_2[0xe] == UNK_1433a2d9e);
    auVar4[0xf] = -(param_2[0xf] == UNK_1433a2d9f);
    auVar4 = auVar4 & auVar8;
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
                (ushort)(byte)(auVar4[0xf] >> 7) << 0xf) == 0xffff) {
      param_1[1] = 1;
      *param_1 = 0;
      return;
    }
  }
  param_1[1] = 4;
  *param_1 = 0;
  return;
}

