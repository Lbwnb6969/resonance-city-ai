// VA 0x140143470, PDB extent 338 bytes
// country_core::render::render_config::_::impl$0::deserialize::impl$0::visit_str<enum2$<ron::error::Error> >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/render/render_config.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::render::render_config::_::impl$0::deserialize::impl$0::visit_str<enum2$<ron::error::Error>
   >
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/render/render_config.rs
   Extent: 338 */

void pdb_140143470(undefined1 *param_1,char *param_2,undefined8 param_3)

{
  undefined4 uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  
  switch(param_3) {
  case 0x10:
    auVar2[0] = -(*param_2 == UNK_142e47b70);
    auVar2[1] = -(param_2[1] == UNK_142e47b71);
    auVar2[2] = -(param_2[2] == UNK_142e47b72);
    auVar2[3] = -(param_2[3] == UNK_142e47b73);
    auVar2[4] = -(param_2[4] == UNK_142e47b74);
    auVar2[5] = -(param_2[5] == UNK_142e47b75);
    auVar2[6] = -(param_2[6] == UNK_142e47b76);
    auVar2[7] = -(param_2[7] == UNK_142e47b77);
    auVar2[8] = -(param_2[8] == UNK_142e47b78);
    auVar2[9] = -(param_2[9] == UNK_142e47b79);
    auVar2[10] = -(param_2[10] == UNK_142e47b7a);
    auVar2[0xb] = -(param_2[0xb] == UNK_142e47b7b);
    auVar2[0xc] = -(param_2[0xc] == UNK_142e47b7c);
    auVar2[0xd] = -(param_2[0xd] == UNK_142e47b7d);
    auVar2[0xe] = -(param_2[0xe] == UNK_142e47b7e);
    auVar2[0xf] = -(param_2[0xf] == UNK_142e47b7f);
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
                 (ushort)(SUB161(auVar2 >> 0x77,0) & 1) << 0xe | (ushort)(auVar2[0xf] >> 7) << 0xf)
        == 0xffff) {
      param_1[1] = 1;
      *param_1 = 0x32;
      return;
    }
    break;
  case 0x13:
    auVar9[0] = -(param_2[3] == UNK_142e47b80);
    auVar9[1] = -(param_2[4] == UNK_142e47b81);
    auVar9[2] = -(param_2[5] == UNK_142e47b82);
    auVar9[3] = -(param_2[6] == UNK_142e47b83);
    auVar9[4] = -(param_2[7] == UNK_142e47b84);
    auVar9[5] = -(param_2[8] == UNK_142e47b85);
    auVar9[6] = -(param_2[9] == UNK_142e47b86);
    auVar9[7] = -(param_2[10] == UNK_142e47b87);
    auVar9[8] = -(param_2[0xb] == UNK_142e47b88);
    auVar9[9] = -(param_2[0xc] == UNK_142e47b89);
    auVar9[10] = -(param_2[0xd] == UNK_142e47b8a);
    auVar9[0xb] = -(param_2[0xe] == UNK_142e47b8b);
    auVar9[0xc] = -(param_2[0xf] == UNK_142e47b8c);
    auVar9[0xd] = -(param_2[0x10] == UNK_142e47b8d);
    auVar9[0xe] = -(param_2[0x11] == UNK_142e47b8e);
    auVar9[0xf] = -(param_2[0x12] == UNK_142e47b8f);
    auVar4[0] = -(*param_2 == UNK_142e47b90);
    auVar4[1] = -(param_2[1] == UNK_142e47b91);
    auVar4[2] = -(param_2[2] == UNK_142e47b92);
    auVar4[3] = -(param_2[3] == UNK_142e47b93);
    auVar4[4] = -(param_2[4] == UNK_142e47b94);
    auVar4[5] = -(param_2[5] == UNK_142e47b95);
    auVar4[6] = -(param_2[6] == UNK_142e47b96);
    auVar4[7] = -(param_2[7] == UNK_142e47b97);
    auVar4[8] = -(param_2[8] == UNK_142e47b98);
    auVar4[9] = -(param_2[9] == UNK_142e47b99);
    auVar4[10] = -(param_2[10] == UNK_142e47b9a);
    auVar4[0xb] = -(param_2[0xb] == UNK_142e47b9b);
    auVar4[0xc] = -(param_2[0xc] == UNK_142e47b9c);
    auVar4[0xd] = -(param_2[0xd] == UNK_142e47b9d);
    auVar4[0xe] = -(param_2[0xe] == UNK_142e47b9e);
    auVar4[0xf] = -(param_2[0xf] == UNK_142e47b9f);
    auVar4 = auVar4 & auVar9;
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
      param_1[1] = 0;
      *param_1 = 0x32;
      return;
    }
    auVar10[0] = -(param_2[3] == UNK_142e47ba0);
    auVar10[1] = -(param_2[4] == UNK_142e47ba1);
    auVar10[2] = -(param_2[5] == UNK_142e47ba2);
    auVar10[3] = -(param_2[6] == UNK_142e47ba3);
    auVar10[4] = -(param_2[7] == UNK_142e47ba4);
    auVar10[5] = -(param_2[8] == UNK_142e47ba5);
    auVar10[6] = -(param_2[9] == UNK_142e47ba6);
    auVar10[7] = -(param_2[10] == UNK_142e47ba7);
    auVar10[8] = -(param_2[0xb] == UNK_142e47ba8);
    auVar10[9] = -(param_2[0xc] == UNK_142e47ba9);
    auVar10[10] = -(param_2[0xd] == UNK_142e47baa);
    auVar10[0xb] = -(param_2[0xe] == UNK_142e47bab);
    auVar10[0xc] = -(param_2[0xf] == UNK_142e47bac);
    auVar10[0xd] = -(param_2[0x10] == UNK_142e47bad);
    auVar10[0xe] = -(param_2[0x11] == UNK_142e47bae);
    auVar10[0xf] = -(param_2[0x12] == UNK_142e47baf);
    auVar5[0] = -(*param_2 == UNK_142e47bb0);
    auVar5[1] = -(param_2[1] == UNK_142e47bb1);
    auVar5[2] = -(param_2[2] == UNK_142e47bb2);
    auVar5[3] = -(param_2[3] == UNK_142e47bb3);
    auVar5[4] = -(param_2[4] == UNK_142e47bb4);
    auVar5[5] = -(param_2[5] == UNK_142e47bb5);
    auVar5[6] = -(param_2[6] == UNK_142e47bb6);
    auVar5[7] = -(param_2[7] == UNK_142e47bb7);
    auVar5[8] = -(param_2[8] == UNK_142e47bb8);
    auVar5[9] = -(param_2[9] == UNK_142e47bb9);
    auVar5[10] = -(param_2[10] == UNK_142e47bba);
    auVar5[0xb] = -(param_2[0xb] == UNK_142e47bbb);
    auVar5[0xc] = -(param_2[0xc] == UNK_142e47bbc);
    auVar5[0xd] = -(param_2[0xd] == UNK_142e47bbd);
    auVar5[0xe] = -(param_2[0xe] == UNK_142e47bbe);
    auVar5[0xf] = -(param_2[0xf] == UNK_142e47bbf);
    auVar5 = auVar5 & auVar10;
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
      param_1[1] = 3;
      *param_1 = 0x32;
      return;
    }
    break;
  case 0x14:
    uVar1 = *(undefined4 *)(param_2 + 0x10);
    auVar8[0] = -((char)uVar1 == UNK_142e47b50);
    auVar8[1] = -((char)((uint)uVar1 >> 8) == UNK_142e47b51);
    auVar8[2] = -((char)((uint)uVar1 >> 0x10) == UNK_142e47b52);
    auVar8[3] = -((char)((uint)uVar1 >> 0x18) == UNK_142e47b53);
    auVar8[4] = -(UNK_142e47b54 == '\0');
    auVar8[5] = -(UNK_142e47b55 == '\0');
    auVar8[6] = -(UNK_142e47b56 == '\0');
    auVar8[7] = -(UNK_142e47b57 == '\0');
    auVar8[8] = -(UNK_142e47b58 == '\0');
    auVar8[9] = -(UNK_142e47b59 == '\0');
    auVar8[10] = -(UNK_142e47b5a == '\0');
    auVar8[0xb] = -(UNK_142e47b5b == '\0');
    auVar8[0xc] = -(UNK_142e47b5c == '\0');
    auVar8[0xd] = -(UNK_142e47b5d == '\0');
    auVar8[0xe] = -(UNK_142e47b5e == '\0');
    auVar8[0xf] = -(UNK_142e47b5f == '\0');
    auVar3[0] = -(*param_2 == UNK_142e47b60);
    auVar3[1] = -(param_2[1] == UNK_142e47b61);
    auVar3[2] = -(param_2[2] == UNK_142e47b62);
    auVar3[3] = -(param_2[3] == UNK_142e47b63);
    auVar3[4] = -(param_2[4] == UNK_142e47b64);
    auVar3[5] = -(param_2[5] == UNK_142e47b65);
    auVar3[6] = -(param_2[6] == UNK_142e47b66);
    auVar3[7] = -(param_2[7] == UNK_142e47b67);
    auVar3[8] = -(param_2[8] == UNK_142e47b68);
    auVar3[9] = -(param_2[9] == UNK_142e47b69);
    auVar3[10] = -(param_2[10] == UNK_142e47b6a);
    auVar3[0xb] = -(param_2[0xb] == UNK_142e47b6b);
    auVar3[0xc] = -(param_2[0xc] == UNK_142e47b6c);
    auVar3[0xd] = -(param_2[0xd] == UNK_142e47b6d);
    auVar3[0xe] = -(param_2[0xe] == UNK_142e47b6e);
    auVar3[0xf] = -(param_2[0xf] == UNK_142e47b6f);
    auVar3 = auVar3 & auVar8;
    if ((ushort)((ushort)(SUB161(auVar3 >> 7,0) & 1) | (ushort)(SUB161(auVar3 >> 0xf,0) & 1) << 1 |
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
                (ushort)(byte)(auVar3[0xf] >> 7) << 0xf) == 0xffff) {
      param_1[1] = 2;
      *param_1 = 0x32;
      return;
    }
    break;
  case 0x16:
    auVar11[0] = -(param_2[6] == UNK_142e47b30);
    auVar11[1] = -(param_2[7] == UNK_142e47b31);
    auVar11[2] = -(param_2[8] == UNK_142e47b32);
    auVar11[3] = -(param_2[9] == UNK_142e47b33);
    auVar11[4] = -(param_2[10] == UNK_142e47b34);
    auVar11[5] = -(param_2[0xb] == UNK_142e47b35);
    auVar11[6] = -(param_2[0xc] == UNK_142e47b36);
    auVar11[7] = -(param_2[0xd] == UNK_142e47b37);
    auVar11[8] = -(param_2[0xe] == UNK_142e47b38);
    auVar11[9] = -(param_2[0xf] == UNK_142e47b39);
    auVar11[10] = -(param_2[0x10] == UNK_142e47b3a);
    auVar11[0xb] = -(param_2[0x11] == UNK_142e47b3b);
    auVar11[0xc] = -(param_2[0x12] == UNK_142e47b3c);
    auVar11[0xd] = -(param_2[0x13] == UNK_142e47b3d);
    auVar11[0xe] = -(param_2[0x14] == UNK_142e47b3e);
    auVar11[0xf] = -(param_2[0x15] == UNK_142e47b3f);
    auVar6[0] = -(*param_2 == UNK_142e47b40);
    auVar6[1] = -(param_2[1] == UNK_142e47b41);
    auVar6[2] = -(param_2[2] == UNK_142e47b42);
    auVar6[3] = -(param_2[3] == UNK_142e47b43);
    auVar6[4] = -(param_2[4] == UNK_142e47b44);
    auVar6[5] = -(param_2[5] == UNK_142e47b45);
    auVar6[6] = -(param_2[6] == UNK_142e47b46);
    auVar6[7] = -(param_2[7] == UNK_142e47b47);
    auVar6[8] = -(param_2[8] == UNK_142e47b48);
    auVar6[9] = -(param_2[9] == UNK_142e47b49);
    auVar6[10] = -(param_2[10] == UNK_142e47b4a);
    auVar6[0xb] = -(param_2[0xb] == UNK_142e47b4b);
    auVar6[0xc] = -(param_2[0xc] == UNK_142e47b4c);
    auVar6[0xd] = -(param_2[0xd] == UNK_142e47b4d);
    auVar6[0xe] = -(param_2[0xe] == UNK_142e47b4e);
    auVar6[0xf] = -(param_2[0xf] == UNK_142e47b4f);
    auVar6 = auVar6 & auVar11;
    if ((ushort)((ushort)(SUB161(auVar6 >> 7,0) & 1) | (ushort)(SUB161(auVar6 >> 0xf,0) & 1) << 1 |
                 (ushort)(SUB161(auVar6 >> 0x17,0) & 1) << 2 |
                 (ushort)(SUB161(auVar6 >> 0x1f,0) & 1) << 3 |
                 (ushort)(SUB161(auVar6 >> 0x27,0) & 1) << 4 |
                 (ushort)(SUB161(auVar6 >> 0x2f,0) & 1) << 5 |
                 (ushort)(SUB161(auVar6 >> 0x37,0) & 1) << 6 |
                 (ushort)(SUB161(auVar6 >> 0x3f,0) & 1) << 7 |
                 (ushort)(SUB161(auVar6 >> 0x47,0) & 1) << 8 |
                 (ushort)(SUB161(auVar6 >> 0x4f,0) & 1) << 9 |
                 (ushort)(SUB161(auVar6 >> 0x57,0) & 1) << 10 |
                 (ushort)(SUB161(auVar6 >> 0x5f,0) & 1) << 0xb |
                 (ushort)(SUB161(auVar6 >> 0x67,0) & 1) << 0xc |
                 (ushort)(SUB161(auVar6 >> 0x6f,0) & 1) << 0xd |
                 (ushort)(SUB161(auVar6 >> 0x77,0) & 1) << 0xe |
                (ushort)(byte)(auVar6[0xf] >> 7) << 0xf) == 0xffff) {
      param_1[1] = 4;
      *param_1 = 0x32;
      return;
    }
    break;
  case 0x1b:
    auVar12[0] = -(param_2[0xb] == UNK_142e47b10);
    auVar12[1] = -(param_2[0xc] == UNK_142e47b11);
    auVar12[2] = -(param_2[0xd] == UNK_142e47b12);
    auVar12[3] = -(param_2[0xe] == UNK_142e47b13);
    auVar12[4] = -(param_2[0xf] == UNK_142e47b14);
    auVar12[5] = -(param_2[0x10] == UNK_142e47b15);
    auVar12[6] = -(param_2[0x11] == UNK_142e47b16);
    auVar12[7] = -(param_2[0x12] == UNK_142e47b17);
    auVar12[8] = -(param_2[0x13] == UNK_142e47b18);
    auVar12[9] = -(param_2[0x14] == UNK_142e47b19);
    auVar12[10] = -(param_2[0x15] == UNK_142e47b1a);
    auVar12[0xb] = -(param_2[0x16] == UNK_142e47b1b);
    auVar12[0xc] = -(param_2[0x17] == UNK_142e47b1c);
    auVar12[0xd] = -(param_2[0x18] == UNK_142e47b1d);
    auVar12[0xe] = -(param_2[0x19] == UNK_142e47b1e);
    auVar12[0xf] = -(param_2[0x1a] == UNK_142e47b1f);
    auVar7[0] = -(*param_2 == UNK_142e47b20);
    auVar7[1] = -(param_2[1] == UNK_142e47b21);
    auVar7[2] = -(param_2[2] == UNK_142e47b22);
    auVar7[3] = -(param_2[3] == UNK_142e47b23);
    auVar7[4] = -(param_2[4] == UNK_142e47b24);
    auVar7[5] = -(param_2[5] == UNK_142e47b25);
    auVar7[6] = -(param_2[6] == UNK_142e47b26);
    auVar7[7] = -(param_2[7] == UNK_142e47b27);
    auVar7[8] = -(param_2[8] == UNK_142e47b28);
    auVar7[9] = -(param_2[9] == UNK_142e47b29);
    auVar7[10] = -(param_2[10] == UNK_142e47b2a);
    auVar7[0xb] = -(param_2[0xb] == UNK_142e47b2b);
    auVar7[0xc] = -(param_2[0xc] == UNK_142e47b2c);
    auVar7[0xd] = -(param_2[0xd] == UNK_142e47b2d);
    auVar7[0xe] = -(param_2[0xe] == UNK_142e47b2e);
    auVar7[0xf] = -(param_2[0xf] == UNK_142e47b2f);
    auVar7 = auVar7 & auVar12;
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
      param_1[1] = 5;
      *param_1 = 0x32;
      return;
    }
  }
  param_1[1] = 6;
  *param_1 = 0x32;
  return;
}

