// VA 0x140142e70, PDB extent 1262 bytes
// country_core::render::render_config::_::impl$0::deserialize::impl$0::visit_str<enum2$<ron::error::Error> >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/render/render_config.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::render::render_config::_::impl$0::deserialize::impl$0::visit_str<enum2$<ron::error::Error>
   >
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/render/render_config.rs
   Extent: 1262 */

void pdb_140142e70(undefined1 *param_1,longlong *param_2,undefined8 param_3)

{
  int iVar1;
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
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  
  switch(param_3) {
  case 7:
    if (*(int *)((longlong)param_2 + 3) == 0x6e6f6973 && (int)*param_2 == 0x73726576) {
      param_1[1] = 0;
      *param_1 = 0x32;
      return;
    }
    if (*(int *)((longlong)param_2 + 3) == 0x79616c70 && (int)*param_2 == 0x70736964) {
      param_1[1] = 1;
      *param_1 = 0x32;
      return;
    }
    if (*(int *)((longlong)param_2 + 3) == 0x6e657072 && (int)*param_2 == 0x72616873) {
      param_1[1] = 0xb;
      *param_1 = 0x32;
      return;
    }
    break;
  case 9:
    if ((char)param_2[1] == 't' && *param_2 == 0x696d696c5f737066) {
      param_1[1] = 10;
      *param_1 = 0x32;
      return;
    }
    break;
  case 10:
    if ((short)param_2[1] == 0x656c && *param_2 == 0x62616e655f666f64) {
      param_1[1] = 6;
      *param_1 = 0x32;
      return;
    }
    break;
  case 0xb:
    if (*(longlong *)((longlong)param_2 + 3) == 0x74666968735f616d && *param_2 == 0x68735f616d6d6167
       ) {
      param_1[1] = 0xd;
      *param_1 = 0x32;
      return;
    }
    if (*(longlong *)((longlong)param_2 + 3) == 0x73646e756f72616b && *param_2 == 0x756f72616b726f77
       ) {
      param_1[1] = 0x17;
      *param_1 = 0x32;
      return;
    }
    break;
  case 0xc:
    if ((int)param_2[1] == 0x656c6261 && *param_2 == 0x6e655f636e797376) {
      param_1[1] = 4;
      *param_1 = 0x32;
      return;
    }
    break;
  case 0xd:
    if (*(longlong *)((longlong)param_2 + 5) == 0x676e696c706d6173 && *param_2 == 0x6d61737265707573
       ) {
code_r0x000140143135:
      param_1[1] = 8;
      *param_1 = 0x32;
      return;
    }
    if (*(longlong *)((longlong)param_2 + 5) == 0x6874616d72657466 && *param_2 == 0x657466615f657375
       ) {
      param_1[1] = 0x11;
      *param_1 = 0x32;
      return;
    }
    break;
  case 0xe:
    if (*(longlong *)((longlong)param_2 + 6) == 0x65646f6d5f676e69 && *param_2 == 0x6e696c6163737075
       ) goto code_r0x000140143135;
    break;
  case 0x10:
    auVar10[0] = -((char)*param_2 == UNK_142e47a40);
    auVar10[1] = -(*(char *)((longlong)param_2 + 1) == UNK_142e47a41);
    auVar10[2] = -(*(char *)((longlong)param_2 + 2) == UNK_142e47a42);
    auVar10[3] = -(*(char *)((longlong)param_2 + 3) == UNK_142e47a43);
    auVar10[4] = -(*(char *)((longlong)param_2 + 4) == UNK_142e47a44);
    auVar10[5] = -(*(char *)((longlong)param_2 + 5) == UNK_142e47a45);
    auVar10[6] = -(*(char *)((longlong)param_2 + 6) == UNK_142e47a46);
    auVar10[7] = -(*(char *)((longlong)param_2 + 7) == UNK_142e47a47);
    auVar10[8] = -((char)param_2[1] == UNK_142e47a48);
    auVar10[9] = -(*(char *)((longlong)param_2 + 9) == UNK_142e47a49);
    auVar10[10] = -(*(char *)((longlong)param_2 + 10) == UNK_142e47a4a);
    auVar10[0xb] = -(*(char *)((longlong)param_2 + 0xb) == UNK_142e47a4b);
    auVar10[0xc] = -(*(char *)((longlong)param_2 + 0xc) == UNK_142e47a4c);
    auVar10[0xd] = -(*(char *)((longlong)param_2 + 0xd) == UNK_142e47a4d);
    auVar10[0xe] = -(*(char *)((longlong)param_2 + 0xe) == UNK_142e47a4e);
    auVar10[0xf] = -(*(char *)((longlong)param_2 + 0xf) == UNK_142e47a4f);
    if ((ushort)((ushort)(SUB161(auVar10 >> 7,0) & 1) | (ushort)(SUB161(auVar10 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar10 >> 0x17,0) & 1) << 2 |
                 (ushort)(SUB161(auVar10 >> 0x1f,0) & 1) << 3 |
                 (ushort)(SUB161(auVar10 >> 0x27,0) & 1) << 4 |
                 (ushort)(SUB161(auVar10 >> 0x2f,0) & 1) << 5 |
                 (ushort)(SUB161(auVar10 >> 0x37,0) & 1) << 6 |
                 (ushort)(SUB161(auVar10 >> 0x3f,0) & 1) << 7 |
                 (ushort)(SUB161(auVar10 >> 0x47,0) & 1) << 8 |
                 (ushort)(SUB161(auVar10 >> 0x4f,0) & 1) << 9 |
                 (ushort)(SUB161(auVar10 >> 0x57,0) & 1) << 10 |
                 (ushort)(SUB161(auVar10 >> 0x5f,0) & 1) << 0xb |
                 (ushort)(SUB161(auVar10 >> 0x67,0) & 1) << 0xc |
                 (ushort)(SUB161(auVar10 >> 0x6f,0) & 1) << 0xd |
                 (ushort)(SUB161(auVar10 >> 0x77,0) & 1) << 0xe | (ushort)(auVar10[0xf] >> 7) << 0xf
                ) == 0xffff) {
code_r0x0001401432fb:
      param_1[1] = 2;
      *param_1 = 0x32;
      return;
    }
    auVar11[0] = -((char)*param_2 == UNK_142e47ac0);
    auVar11[1] = -(*(char *)((longlong)param_2 + 1) == UNK_142e47ac1);
    auVar11[2] = -(*(char *)((longlong)param_2 + 2) == UNK_142e47ac2);
    auVar11[3] = -(*(char *)((longlong)param_2 + 3) == UNK_142e47ac3);
    auVar11[4] = -(*(char *)((longlong)param_2 + 4) == UNK_142e47ac4);
    auVar11[5] = -(*(char *)((longlong)param_2 + 5) == UNK_142e47ac5);
    auVar11[6] = -(*(char *)((longlong)param_2 + 6) == UNK_142e47ac6);
    auVar11[7] = -(*(char *)((longlong)param_2 + 7) == UNK_142e47ac7);
    auVar11[8] = -((char)param_2[1] == UNK_142e47ac8);
    auVar11[9] = -(*(char *)((longlong)param_2 + 9) == UNK_142e47ac9);
    auVar11[10] = -(*(char *)((longlong)param_2 + 10) == UNK_142e47aca);
    auVar11[0xb] = -(*(char *)((longlong)param_2 + 0xb) == UNK_142e47acb);
    auVar11[0xc] = -(*(char *)((longlong)param_2 + 0xc) == UNK_142e47acc);
    auVar11[0xd] = -(*(char *)((longlong)param_2 + 0xd) == UNK_142e47acd);
    auVar11[0xe] = -(*(char *)((longlong)param_2 + 0xe) == UNK_142e47ace);
    auVar11[0xf] = -(*(char *)((longlong)param_2 + 0xf) == UNK_142e47acf);
    if ((ushort)((ushort)(SUB161(auVar11 >> 7,0) & 1) | (ushort)(SUB161(auVar11 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar11 >> 0x17,0) & 1) << 2 |
                 (ushort)(SUB161(auVar11 >> 0x1f,0) & 1) << 3 |
                 (ushort)(SUB161(auVar11 >> 0x27,0) & 1) << 4 |
                 (ushort)(SUB161(auVar11 >> 0x2f,0) & 1) << 5 |
                 (ushort)(SUB161(auVar11 >> 0x37,0) & 1) << 6 |
                 (ushort)(SUB161(auVar11 >> 0x3f,0) & 1) << 7 |
                 (ushort)(SUB161(auVar11 >> 0x47,0) & 1) << 8 |
                 (ushort)(SUB161(auVar11 >> 0x4f,0) & 1) << 9 |
                 (ushort)(SUB161(auVar11 >> 0x57,0) & 1) << 10 |
                 (ushort)(SUB161(auVar11 >> 0x5f,0) & 1) << 0xb |
                 (ushort)(SUB161(auVar11 >> 0x67,0) & 1) << 0xc |
                 (ushort)(SUB161(auVar11 >> 0x6f,0) & 1) << 0xd |
                 (ushort)(SUB161(auVar11 >> 0x77,0) & 1) << 0xe | (ushort)(auVar11[0xf] >> 7) << 0xf
                ) == 0xffff) {
      param_1[1] = 9;
      *param_1 = 0x32;
      return;
    }
    auVar12[0] = -((char)*param_2 == UNK_142e47ad0);
    auVar12[1] = -(*(char *)((longlong)param_2 + 1) == UNK_142e47ad1);
    auVar12[2] = -(*(char *)((longlong)param_2 + 2) == UNK_142e47ad2);
    auVar12[3] = -(*(char *)((longlong)param_2 + 3) == UNK_142e47ad3);
    auVar12[4] = -(*(char *)((longlong)param_2 + 4) == UNK_142e47ad4);
    auVar12[5] = -(*(char *)((longlong)param_2 + 5) == UNK_142e47ad5);
    auVar12[6] = -(*(char *)((longlong)param_2 + 6) == UNK_142e47ad6);
    auVar12[7] = -(*(char *)((longlong)param_2 + 7) == UNK_142e47ad7);
    auVar12[8] = -((char)param_2[1] == UNK_142e47ad8);
    auVar12[9] = -(*(char *)((longlong)param_2 + 9) == UNK_142e47ad9);
    auVar12[10] = -(*(char *)((longlong)param_2 + 10) == UNK_142e47ada);
    auVar12[0xb] = -(*(char *)((longlong)param_2 + 0xb) == UNK_142e47adb);
    auVar12[0xc] = -(*(char *)((longlong)param_2 + 0xc) == UNK_142e47adc);
    auVar12[0xd] = -(*(char *)((longlong)param_2 + 0xd) == UNK_142e47add);
    auVar12[0xe] = -(*(char *)((longlong)param_2 + 0xe) == UNK_142e47ade);
    auVar12[0xf] = -(*(char *)((longlong)param_2 + 0xf) == UNK_142e47adf);
    if ((ushort)((ushort)(SUB161(auVar12 >> 7,0) & 1) | (ushort)(SUB161(auVar12 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar12 >> 0x17,0) & 1) << 2 |
                 (ushort)(SUB161(auVar12 >> 0x1f,0) & 1) << 3 |
                 (ushort)(SUB161(auVar12 >> 0x27,0) & 1) << 4 |
                 (ushort)(SUB161(auVar12 >> 0x2f,0) & 1) << 5 |
                 (ushort)(SUB161(auVar12 >> 0x37,0) & 1) << 6 |
                 (ushort)(SUB161(auVar12 >> 0x3f,0) & 1) << 7 |
                 (ushort)(SUB161(auVar12 >> 0x47,0) & 1) << 8 |
                 (ushort)(SUB161(auVar12 >> 0x4f,0) & 1) << 9 |
                 (ushort)(SUB161(auVar12 >> 0x57,0) & 1) << 10 |
                 (ushort)(SUB161(auVar12 >> 0x5f,0) & 1) << 0xb |
                 (ushort)(SUB161(auVar12 >> 0x67,0) & 1) << 0xc |
                 (ushort)(SUB161(auVar12 >> 0x6f,0) & 1) << 0xd |
                 (ushort)(SUB161(auVar12 >> 0x77,0) & 1) << 0xe | (ushort)(auVar12[0xf] >> 7) << 0xf
                ) == 0xffff) {
      param_1[1] = 0xc;
      *param_1 = 0x32;
      return;
    }
    auVar13[0] = -((char)*param_2 == UNK_142e47ae0);
    auVar13[1] = -(*(char *)((longlong)param_2 + 1) == UNK_142e47ae1);
    auVar13[2] = -(*(char *)((longlong)param_2 + 2) == UNK_142e47ae2);
    auVar13[3] = -(*(char *)((longlong)param_2 + 3) == UNK_142e47ae3);
    auVar13[4] = -(*(char *)((longlong)param_2 + 4) == UNK_142e47ae4);
    auVar13[5] = -(*(char *)((longlong)param_2 + 5) == UNK_142e47ae5);
    auVar13[6] = -(*(char *)((longlong)param_2 + 6) == UNK_142e47ae6);
    auVar13[7] = -(*(char *)((longlong)param_2 + 7) == UNK_142e47ae7);
    auVar13[8] = -((char)param_2[1] == UNK_142e47ae8);
    auVar13[9] = -(*(char *)((longlong)param_2 + 9) == UNK_142e47ae9);
    auVar13[10] = -(*(char *)((longlong)param_2 + 10) == UNK_142e47aea);
    auVar13[0xb] = -(*(char *)((longlong)param_2 + 0xb) == UNK_142e47aeb);
    auVar13[0xc] = -(*(char *)((longlong)param_2 + 0xc) == UNK_142e47aec);
    auVar13[0xd] = -(*(char *)((longlong)param_2 + 0xd) == UNK_142e47aed);
    auVar13[0xe] = -(*(char *)((longlong)param_2 + 0xe) == UNK_142e47aee);
    auVar13[0xf] = -(*(char *)((longlong)param_2 + 0xf) == UNK_142e47aef);
    if ((ushort)((ushort)(SUB161(auVar13 >> 7,0) & 1) | (ushort)(SUB161(auVar13 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar13 >> 0x17,0) & 1) << 2 |
                 (ushort)(SUB161(auVar13 >> 0x1f,0) & 1) << 3 |
                 (ushort)(SUB161(auVar13 >> 0x27,0) & 1) << 4 |
                 (ushort)(SUB161(auVar13 >> 0x2f,0) & 1) << 5 |
                 (ushort)(SUB161(auVar13 >> 0x37,0) & 1) << 6 |
                 (ushort)(SUB161(auVar13 >> 0x3f,0) & 1) << 7 |
                 (ushort)(SUB161(auVar13 >> 0x47,0) & 1) << 8 |
                 (ushort)(SUB161(auVar13 >> 0x4f,0) & 1) << 9 |
                 (ushort)(SUB161(auVar13 >> 0x57,0) & 1) << 10 |
                 (ushort)(SUB161(auVar13 >> 0x5f,0) & 1) << 0xb |
                 (ushort)(SUB161(auVar13 >> 0x67,0) & 1) << 0xc |
                 (ushort)(SUB161(auVar13 >> 0x6f,0) & 1) << 0xd |
                 (ushort)(SUB161(auVar13 >> 0x77,0) & 1) << 0xe | (ushort)(auVar13[0xf] >> 7) << 0xf
                ) == 0xffff) {
      param_1[1] = 0x14;
      *param_1 = 0x32;
      return;
    }
    break;
  case 0x12:
    auVar17[0] = -((char)*param_2 == UNK_142e47960);
    auVar17[1] = -(*(char *)((longlong)param_2 + 1) == UNK_142e47961);
    auVar17[2] = -(*(char *)((longlong)param_2 + 2) == UNK_142e47962);
    auVar17[3] = -(*(char *)((longlong)param_2 + 3) == UNK_142e47963);
    auVar17[4] = -(*(char *)((longlong)param_2 + 4) == UNK_142e47964);
    auVar17[5] = -(*(char *)((longlong)param_2 + 5) == UNK_142e47965);
    auVar17[6] = -(*(char *)((longlong)param_2 + 6) == UNK_142e47966);
    auVar17[7] = -(*(char *)((longlong)param_2 + 7) == UNK_142e47967);
    auVar17[8] = -((char)param_2[1] == UNK_142e47968);
    auVar17[9] = -(*(char *)((longlong)param_2 + 9) == UNK_142e47969);
    auVar17[10] = -(*(char *)((longlong)param_2 + 10) == UNK_142e4796a);
    auVar17[0xb] = -(*(char *)((longlong)param_2 + 0xb) == UNK_142e4796b);
    auVar17[0xc] = -(*(char *)((longlong)param_2 + 0xc) == UNK_142e4796c);
    auVar17[0xd] = -(*(char *)((longlong)param_2 + 0xd) == UNK_142e4796d);
    auVar17[0xe] = -(*(char *)((longlong)param_2 + 0xe) == UNK_142e4796e);
    auVar17[0xf] = -(*(char *)((longlong)param_2 + 0xf) == UNK_142e4796f);
    auVar29[0] = -((char)(short)param_2[2] == UNK_142e47970);
    auVar29[1] = -((char)((ushort)(short)param_2[2] >> 8) == UNK_142e47971);
    auVar29[2] = -(UNK_142e47972 == '\0');
    auVar29[3] = -(UNK_142e47973 == '\0');
    auVar29[4] = -(UNK_142e47974 == '\0');
    auVar29[5] = -(UNK_142e47975 == '\0');
    auVar29[6] = -(UNK_142e47976 == '\0');
    auVar29[7] = -(UNK_142e47977 == '\0');
    auVar29[8] = -(UNK_142e47978 == '\0');
    auVar29[9] = -(UNK_142e47979 == '\0');
    auVar29[10] = -(UNK_142e4797a == '\0');
    auVar29[0xb] = -(UNK_142e4797b == '\0');
    auVar29[0xc] = -(UNK_142e4797c == '\0');
    auVar29[0xd] = -(UNK_142e4797d == '\0');
    auVar29[0xe] = -(UNK_142e4797e == '\0');
    auVar29[0xf] = -(UNK_142e4797f == '\0');
    auVar29 = auVar29 & auVar17;
    if ((ushort)((ushort)(SUB161(auVar29 >> 7,0) & 1) | (ushort)(SUB161(auVar29 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar29 >> 0x17,0) & 1) << 2 |
                 (ushort)(SUB161(auVar29 >> 0x1f,0) & 1) << 3 |
                 (ushort)(SUB161(auVar29 >> 0x27,0) & 1) << 4 |
                 (ushort)(SUB161(auVar29 >> 0x2f,0) & 1) << 5 |
                 (ushort)(SUB161(auVar29 >> 0x37,0) & 1) << 6 |
                 (ushort)(SUB161(auVar29 >> 0x3f,0) & 1) << 7 |
                 (ushort)(SUB161(auVar29 >> 0x47,0) & 1) << 8 |
                 (ushort)(SUB161(auVar29 >> 0x4f,0) & 1) << 9 |
                 (ushort)(SUB161(auVar29 >> 0x57,0) & 1) << 10 |
                 (ushort)(SUB161(auVar29 >> 0x5f,0) & 1) << 0xb |
                 (ushort)(SUB161(auVar29 >> 0x67,0) & 1) << 0xc |
                 (ushort)(SUB161(auVar29 >> 0x6f,0) & 1) << 0xd |
                 (ushort)(SUB161(auVar29 >> 0x77,0) & 1) << 0xe |
                (ushort)(byte)(auVar29[0xf] >> 7) << 0xf) == 0xffff) {
      param_1[1] = 0x15;
      *param_1 = 0x32;
      return;
    }
    break;
  case 0x13:
    auVar27[0] = -(*(char *)((longlong)param_2 + 3) == UNK_142e479a0);
    auVar27[1] = -(*(char *)((longlong)param_2 + 4) == UNK_142e479a1);
    auVar27[2] = -(*(char *)((longlong)param_2 + 5) == UNK_142e479a2);
    auVar27[3] = -(*(char *)((longlong)param_2 + 6) == UNK_142e479a3);
    auVar27[4] = -(*(char *)((longlong)param_2 + 7) == UNK_142e479a4);
    auVar27[5] = -((char)param_2[1] == UNK_142e479a5);
    auVar27[6] = -(*(char *)((longlong)param_2 + 9) == UNK_142e479a6);
    auVar27[7] = -(*(char *)((longlong)param_2 + 10) == UNK_142e479a7);
    auVar27[8] = -(*(char *)((longlong)param_2 + 0xb) == UNK_142e479a8);
    auVar27[9] = -(*(char *)((longlong)param_2 + 0xc) == UNK_142e479a9);
    auVar27[10] = -(*(char *)((longlong)param_2 + 0xd) == UNK_142e479aa);
    auVar27[0xb] = -(*(char *)((longlong)param_2 + 0xe) == UNK_142e479ab);
    auVar27[0xc] = -(*(char *)((longlong)param_2 + 0xf) == UNK_142e479ac);
    auVar27[0xd] = -((char)param_2[2] == UNK_142e479ad);
    auVar27[0xe] = -(*(char *)((longlong)param_2 + 0x11) == UNK_142e479ae);
    auVar27[0xf] = -(*(char *)((longlong)param_2 + 0x12) == UNK_142e479af);
    auVar15[0] = -((char)*param_2 == UNK_142e479b0);
    auVar15[1] = -(*(char *)((longlong)param_2 + 1) == UNK_142e479b1);
    auVar15[2] = -(*(char *)((longlong)param_2 + 2) == UNK_142e479b2);
    auVar15[3] = -(*(char *)((longlong)param_2 + 3) == UNK_142e479b3);
    auVar15[4] = -(*(char *)((longlong)param_2 + 4) == UNK_142e479b4);
    auVar15[5] = -(*(char *)((longlong)param_2 + 5) == UNK_142e479b5);
    auVar15[6] = -(*(char *)((longlong)param_2 + 6) == UNK_142e479b6);
    auVar15[7] = -(*(char *)((longlong)param_2 + 7) == UNK_142e479b7);
    auVar15[8] = -((char)param_2[1] == UNK_142e479b8);
    auVar15[9] = -(*(char *)((longlong)param_2 + 9) == UNK_142e479b9);
    auVar15[10] = -(*(char *)((longlong)param_2 + 10) == UNK_142e479ba);
    auVar15[0xb] = -(*(char *)((longlong)param_2 + 0xb) == UNK_142e479bb);
    auVar15[0xc] = -(*(char *)((longlong)param_2 + 0xc) == UNK_142e479bc);
    auVar15[0xd] = -(*(char *)((longlong)param_2 + 0xd) == UNK_142e479bd);
    auVar15[0xe] = -(*(char *)((longlong)param_2 + 0xe) == UNK_142e479be);
    auVar15[0xf] = -(*(char *)((longlong)param_2 + 0xf) == UNK_142e479bf);
    auVar15 = auVar15 & auVar27;
    if ((ushort)((ushort)(SUB161(auVar15 >> 7,0) & 1) | (ushort)(SUB161(auVar15 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar15 >> 0x17,0) & 1) << 2 |
                 (ushort)(SUB161(auVar15 >> 0x1f,0) & 1) << 3 |
                 (ushort)(SUB161(auVar15 >> 0x27,0) & 1) << 4 |
                 (ushort)(SUB161(auVar15 >> 0x2f,0) & 1) << 5 |
                 (ushort)(SUB161(auVar15 >> 0x37,0) & 1) << 6 |
                 (ushort)(SUB161(auVar15 >> 0x3f,0) & 1) << 7 |
                 (ushort)(SUB161(auVar15 >> 0x47,0) & 1) << 8 |
                 (ushort)(SUB161(auVar15 >> 0x4f,0) & 1) << 9 |
                 (ushort)(SUB161(auVar15 >> 0x57,0) & 1) << 10 |
                 (ushort)(SUB161(auVar15 >> 0x5f,0) & 1) << 0xb |
                 (ushort)(SUB161(auVar15 >> 0x67,0) & 1) << 0xc |
                 (ushort)(SUB161(auVar15 >> 0x6f,0) & 1) << 0xd |
                 (ushort)(SUB161(auVar15 >> 0x77,0) & 1) << 0xe |
                (ushort)(byte)(auVar15[0xf] >> 7) << 0xf) == 0xffff) {
      param_1[1] = 0x10;
      *param_1 = 0x32;
      return;
    }
    auVar28[0] = -(*(char *)((longlong)param_2 + 3) == UNK_142e479c0);
    auVar28[1] = -(*(char *)((longlong)param_2 + 4) == UNK_142e479c1);
    auVar28[2] = -(*(char *)((longlong)param_2 + 5) == UNK_142e479c2);
    auVar28[3] = -(*(char *)((longlong)param_2 + 6) == UNK_142e479c3);
    auVar28[4] = -(*(char *)((longlong)param_2 + 7) == UNK_142e479c4);
    auVar28[5] = -((char)param_2[1] == UNK_142e479c5);
    auVar28[6] = -(*(char *)((longlong)param_2 + 9) == UNK_142e479c6);
    auVar28[7] = -(*(char *)((longlong)param_2 + 10) == UNK_142e479c7);
    auVar28[8] = -(*(char *)((longlong)param_2 + 0xb) == UNK_142e479c8);
    auVar28[9] = -(*(char *)((longlong)param_2 + 0xc) == UNK_142e479c9);
    auVar28[10] = -(*(char *)((longlong)param_2 + 0xd) == UNK_142e479ca);
    auVar28[0xb] = -(*(char *)((longlong)param_2 + 0xe) == UNK_142e479cb);
    auVar28[0xc] = -(*(char *)((longlong)param_2 + 0xf) == UNK_142e479cc);
    auVar28[0xd] = -((char)param_2[2] == UNK_142e479cd);
    auVar28[0xe] = -(*(char *)((longlong)param_2 + 0x11) == UNK_142e479ce);
    auVar28[0xf] = -(*(char *)((longlong)param_2 + 0x12) == UNK_142e479cf);
    auVar16[0] = -((char)*param_2 == UNK_142e479d0);
    auVar16[1] = -(*(char *)((longlong)param_2 + 1) == UNK_142e479d1);
    auVar16[2] = -(*(char *)((longlong)param_2 + 2) == UNK_142e479d2);
    auVar16[3] = -(*(char *)((longlong)param_2 + 3) == UNK_142e479d3);
    auVar16[4] = -(*(char *)((longlong)param_2 + 4) == UNK_142e479d4);
    auVar16[5] = -(*(char *)((longlong)param_2 + 5) == UNK_142e479d5);
    auVar16[6] = -(*(char *)((longlong)param_2 + 6) == UNK_142e479d6);
    auVar16[7] = -(*(char *)((longlong)param_2 + 7) == UNK_142e479d7);
    auVar16[8] = -((char)param_2[1] == UNK_142e479d8);
    auVar16[9] = -(*(char *)((longlong)param_2 + 9) == UNK_142e479d9);
    auVar16[10] = -(*(char *)((longlong)param_2 + 10) == UNK_142e479da);
    auVar16[0xb] = -(*(char *)((longlong)param_2 + 0xb) == UNK_142e479db);
    auVar16[0xc] = -(*(char *)((longlong)param_2 + 0xc) == UNK_142e479dc);
    auVar16[0xd] = -(*(char *)((longlong)param_2 + 0xd) == UNK_142e479dd);
    auVar16[0xe] = -(*(char *)((longlong)param_2 + 0xe) == UNK_142e479de);
    auVar16[0xf] = -(*(char *)((longlong)param_2 + 0xf) == UNK_142e479df);
    auVar16 = auVar16 & auVar28;
    if ((ushort)((ushort)(SUB161(auVar16 >> 7,0) & 1) | (ushort)(SUB161(auVar16 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar16 >> 0x17,0) & 1) << 2 |
                 (ushort)(SUB161(auVar16 >> 0x1f,0) & 1) << 3 |
                 (ushort)(SUB161(auVar16 >> 0x27,0) & 1) << 4 |
                 (ushort)(SUB161(auVar16 >> 0x2f,0) & 1) << 5 |
                 (ushort)(SUB161(auVar16 >> 0x37,0) & 1) << 6 |
                 (ushort)(SUB161(auVar16 >> 0x3f,0) & 1) << 7 |
                 (ushort)(SUB161(auVar16 >> 0x47,0) & 1) << 8 |
                 (ushort)(SUB161(auVar16 >> 0x4f,0) & 1) << 9 |
                 (ushort)(SUB161(auVar16 >> 0x57,0) & 1) << 10 |
                 (ushort)(SUB161(auVar16 >> 0x5f,0) & 1) << 0xb |
                 (ushort)(SUB161(auVar16 >> 0x67,0) & 1) << 0xc |
                 (ushort)(SUB161(auVar16 >> 0x6f,0) & 1) << 0xd |
                 (ushort)(SUB161(auVar16 >> 0x77,0) & 1) << 0xe |
                (ushort)(byte)(auVar16[0xf] >> 7) << 0xf) == 0xffff) {
      param_1[1] = 0x13;
      *param_1 = 0x32;
      return;
    }
    break;
  case 0x14:
    iVar1 = (int)param_2[2];
    auVar19[0] = -((char)iVar1 == UNK_142e47a00);
    auVar19[1] = -((char)((uint)iVar1 >> 8) == UNK_142e47a01);
    auVar19[2] = -((char)((uint)iVar1 >> 0x10) == UNK_142e47a02);
    auVar19[3] = -((char)((uint)iVar1 >> 0x18) == UNK_142e47a03);
    auVar19[4] = -(UNK_142e47a04 == '\0');
    auVar19[5] = -(UNK_142e47a05 == '\0');
    auVar19[6] = -(UNK_142e47a06 == '\0');
    auVar19[7] = -(UNK_142e47a07 == '\0');
    auVar19[8] = -(UNK_142e47a08 == '\0');
    auVar19[9] = -(UNK_142e47a09 == '\0');
    auVar19[10] = -(UNK_142e47a0a == '\0');
    auVar19[0xb] = -(UNK_142e47a0b == '\0');
    auVar19[0xc] = -(UNK_142e47a0c == '\0');
    auVar19[0xd] = -(UNK_142e47a0d == '\0');
    auVar19[0xe] = -(UNK_142e47a0e == '\0');
    auVar19[0xf] = -(UNK_142e47a0f == '\0');
    auVar3[0] = -((char)*param_2 == UNK_142e47a10);
    auVar3[1] = -(*(char *)((longlong)param_2 + 1) == UNK_142e47a11);
    auVar3[2] = -(*(char *)((longlong)param_2 + 2) == UNK_142e47a12);
    auVar3[3] = -(*(char *)((longlong)param_2 + 3) == UNK_142e47a13);
    auVar3[4] = -(*(char *)((longlong)param_2 + 4) == UNK_142e47a14);
    auVar3[5] = -(*(char *)((longlong)param_2 + 5) == UNK_142e47a15);
    auVar3[6] = -(*(char *)((longlong)param_2 + 6) == UNK_142e47a16);
    auVar3[7] = -(*(char *)((longlong)param_2 + 7) == UNK_142e47a17);
    auVar3[8] = -((char)param_2[1] == UNK_142e47a18);
    auVar3[9] = -(*(char *)((longlong)param_2 + 9) == UNK_142e47a19);
    auVar3[10] = -(*(char *)((longlong)param_2 + 10) == UNK_142e47a1a);
    auVar3[0xb] = -(*(char *)((longlong)param_2 + 0xb) == UNK_142e47a1b);
    auVar3[0xc] = -(*(char *)((longlong)param_2 + 0xc) == UNK_142e47a1c);
    auVar3[0xd] = -(*(char *)((longlong)param_2 + 0xd) == UNK_142e47a1d);
    auVar3[0xe] = -(*(char *)((longlong)param_2 + 0xe) == UNK_142e47a1e);
    auVar3[0xf] = -(*(char *)((longlong)param_2 + 0xf) == UNK_142e47a1f);
    auVar3 = auVar3 & auVar19;
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
      param_1[1] = 7;
      *param_1 = 0x32;
      return;
    }
    iVar1 = (int)param_2[2];
    auVar20[0] = -((char)iVar1 == UNK_142e47a20);
    auVar20[1] = -((char)((uint)iVar1 >> 8) == UNK_142e47a21);
    auVar20[2] = -((char)((uint)iVar1 >> 0x10) == UNK_142e47a22);
    auVar20[3] = -((char)((uint)iVar1 >> 0x18) == UNK_142e47a23);
    auVar20[4] = -(UNK_142e47a24 == '\0');
    auVar20[5] = -(UNK_142e47a25 == '\0');
    auVar20[6] = -(UNK_142e47a26 == '\0');
    auVar20[7] = -(UNK_142e47a27 == '\0');
    auVar20[8] = -(UNK_142e47a28 == '\0');
    auVar20[9] = -(UNK_142e47a29 == '\0');
    auVar20[10] = -(UNK_142e47a2a == '\0');
    auVar20[0xb] = -(UNK_142e47a2b == '\0');
    auVar20[0xc] = -(UNK_142e47a2c == '\0');
    auVar20[0xd] = -(UNK_142e47a2d == '\0');
    auVar20[0xe] = -(UNK_142e47a2e == '\0');
    auVar20[0xf] = -(UNK_142e47a2f == '\0');
    auVar4[0] = -((char)*param_2 == UNK_142e47a30);
    auVar4[1] = -(*(char *)((longlong)param_2 + 1) == UNK_142e47a31);
    auVar4[2] = -(*(char *)((longlong)param_2 + 2) == UNK_142e47a32);
    auVar4[3] = -(*(char *)((longlong)param_2 + 3) == UNK_142e47a33);
    auVar4[4] = -(*(char *)((longlong)param_2 + 4) == UNK_142e47a34);
    auVar4[5] = -(*(char *)((longlong)param_2 + 5) == UNK_142e47a35);
    auVar4[6] = -(*(char *)((longlong)param_2 + 6) == UNK_142e47a36);
    auVar4[7] = -(*(char *)((longlong)param_2 + 7) == UNK_142e47a37);
    auVar4[8] = -((char)param_2[1] == UNK_142e47a38);
    auVar4[9] = -(*(char *)((longlong)param_2 + 9) == UNK_142e47a39);
    auVar4[10] = -(*(char *)((longlong)param_2 + 10) == UNK_142e47a3a);
    auVar4[0xb] = -(*(char *)((longlong)param_2 + 0xb) == UNK_142e47a3b);
    auVar4[0xc] = -(*(char *)((longlong)param_2 + 0xc) == UNK_142e47a3c);
    auVar4[0xd] = -(*(char *)((longlong)param_2 + 0xd) == UNK_142e47a3d);
    auVar4[0xe] = -(*(char *)((longlong)param_2 + 0xe) == UNK_142e47a3e);
    auVar4[0xf] = -(*(char *)((longlong)param_2 + 0xf) == UNK_142e47a3f);
    auVar4 = auVar4 & auVar20;
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
      param_1[1] = 0xf;
      *param_1 = 0x32;
      return;
    }
    break;
  case 0x16:
    auVar22[0] = -(*(char *)((longlong)param_2 + 6) == UNK_142e47a40);
    auVar22[1] = -(*(char *)((longlong)param_2 + 7) == UNK_142e47a41);
    auVar22[2] = -((char)param_2[1] == UNK_142e47a42);
    auVar22[3] = -(*(char *)((longlong)param_2 + 9) == UNK_142e47a43);
    auVar22[4] = -(*(char *)((longlong)param_2 + 10) == UNK_142e47a44);
    auVar22[5] = -(*(char *)((longlong)param_2 + 0xb) == UNK_142e47a45);
    auVar22[6] = -(*(char *)((longlong)param_2 + 0xc) == UNK_142e47a46);
    auVar22[7] = -(*(char *)((longlong)param_2 + 0xd) == UNK_142e47a47);
    auVar22[8] = -(*(char *)((longlong)param_2 + 0xe) == UNK_142e47a48);
    auVar22[9] = -(*(char *)((longlong)param_2 + 0xf) == UNK_142e47a49);
    auVar22[10] = -((char)param_2[2] == UNK_142e47a4a);
    auVar22[0xb] = -(*(char *)((longlong)param_2 + 0x11) == UNK_142e47a4b);
    auVar22[0xc] = -(*(char *)((longlong)param_2 + 0x12) == UNK_142e47a4c);
    auVar22[0xd] = -(*(char *)((longlong)param_2 + 0x13) == UNK_142e47a4d);
    auVar22[0xe] = -(*(char *)((longlong)param_2 + 0x14) == UNK_142e47a4e);
    auVar22[0xf] = -(*(char *)((longlong)param_2 + 0x15) == UNK_142e47a4f);
    auVar6[0] = -((char)*param_2 == UNK_142e47a50);
    auVar6[1] = -(*(char *)((longlong)param_2 + 1) == UNK_142e47a51);
    auVar6[2] = -(*(char *)((longlong)param_2 + 2) == UNK_142e47a52);
    auVar6[3] = -(*(char *)((longlong)param_2 + 3) == UNK_142e47a53);
    auVar6[4] = -(*(char *)((longlong)param_2 + 4) == UNK_142e47a54);
    auVar6[5] = -(*(char *)((longlong)param_2 + 5) == UNK_142e47a55);
    auVar6[6] = -(*(char *)((longlong)param_2 + 6) == UNK_142e47a56);
    auVar6[7] = -(*(char *)((longlong)param_2 + 7) == UNK_142e47a57);
    auVar6[8] = -((char)param_2[1] == UNK_142e47a58);
    auVar6[9] = -(*(char *)((longlong)param_2 + 9) == UNK_142e47a59);
    auVar6[10] = -(*(char *)((longlong)param_2 + 10) == UNK_142e47a5a);
    auVar6[0xb] = -(*(char *)((longlong)param_2 + 0xb) == UNK_142e47a5b);
    auVar6[0xc] = -(*(char *)((longlong)param_2 + 0xc) == UNK_142e47a5c);
    auVar6[0xd] = -(*(char *)((longlong)param_2 + 0xd) == UNK_142e47a5d);
    auVar6[0xe] = -(*(char *)((longlong)param_2 + 0xe) == UNK_142e47a5e);
    auVar6[0xf] = -(*(char *)((longlong)param_2 + 0xf) == UNK_142e47a5f);
    auVar6 = auVar6 & auVar22;
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
      param_1[1] = 3;
      *param_1 = 0x32;
      return;
    }
    auVar23[0] = -(*(char *)((longlong)param_2 + 6) == UNK_142e47a60);
    auVar23[1] = -(*(char *)((longlong)param_2 + 7) == UNK_142e47a61);
    auVar23[2] = -((char)param_2[1] == UNK_142e47a62);
    auVar23[3] = -(*(char *)((longlong)param_2 + 9) == UNK_142e47a63);
    auVar23[4] = -(*(char *)((longlong)param_2 + 10) == UNK_142e47a64);
    auVar23[5] = -(*(char *)((longlong)param_2 + 0xb) == UNK_142e47a65);
    auVar23[6] = -(*(char *)((longlong)param_2 + 0xc) == UNK_142e47a66);
    auVar23[7] = -(*(char *)((longlong)param_2 + 0xd) == UNK_142e47a67);
    auVar23[8] = -(*(char *)((longlong)param_2 + 0xe) == UNK_142e47a68);
    auVar23[9] = -(*(char *)((longlong)param_2 + 0xf) == UNK_142e47a69);
    auVar23[10] = -((char)param_2[2] == UNK_142e47a6a);
    auVar23[0xb] = -(*(char *)((longlong)param_2 + 0x11) == UNK_142e47a6b);
    auVar23[0xc] = -(*(char *)((longlong)param_2 + 0x12) == UNK_142e47a6c);
    auVar23[0xd] = -(*(char *)((longlong)param_2 + 0x13) == UNK_142e47a6d);
    auVar23[0xe] = -(*(char *)((longlong)param_2 + 0x14) == UNK_142e47a6e);
    auVar23[0xf] = -(*(char *)((longlong)param_2 + 0x15) == UNK_142e47a6f);
    auVar7[0] = -((char)*param_2 == UNK_142e47a70);
    auVar7[1] = -(*(char *)((longlong)param_2 + 1) == UNK_142e47a71);
    auVar7[2] = -(*(char *)((longlong)param_2 + 2) == UNK_142e47a72);
    auVar7[3] = -(*(char *)((longlong)param_2 + 3) == UNK_142e47a73);
    auVar7[4] = -(*(char *)((longlong)param_2 + 4) == UNK_142e47a74);
    auVar7[5] = -(*(char *)((longlong)param_2 + 5) == UNK_142e47a75);
    auVar7[6] = -(*(char *)((longlong)param_2 + 6) == UNK_142e47a76);
    auVar7[7] = -(*(char *)((longlong)param_2 + 7) == UNK_142e47a77);
    auVar7[8] = -((char)param_2[1] == UNK_142e47a78);
    auVar7[9] = -(*(char *)((longlong)param_2 + 9) == UNK_142e47a79);
    auVar7[10] = -(*(char *)((longlong)param_2 + 10) == UNK_142e47a7a);
    auVar7[0xb] = -(*(char *)((longlong)param_2 + 0xb) == UNK_142e47a7b);
    auVar7[0xc] = -(*(char *)((longlong)param_2 + 0xc) == UNK_142e47a7c);
    auVar7[0xd] = -(*(char *)((longlong)param_2 + 0xd) == UNK_142e47a7d);
    auVar7[0xe] = -(*(char *)((longlong)param_2 + 0xe) == UNK_142e47a7e);
    auVar7[0xf] = -(*(char *)((longlong)param_2 + 0xf) == UNK_142e47a7f);
    auVar7 = auVar7 & auVar23;
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
    auVar24[0] = -(*(char *)((longlong)param_2 + 6) == UNK_142e47a80);
    auVar24[1] = -(*(char *)((longlong)param_2 + 7) == UNK_142e47a81);
    auVar24[2] = -((char)param_2[1] == UNK_142e47a82);
    auVar24[3] = -(*(char *)((longlong)param_2 + 9) == UNK_142e47a83);
    auVar24[4] = -(*(char *)((longlong)param_2 + 10) == UNK_142e47a84);
    auVar24[5] = -(*(char *)((longlong)param_2 + 0xb) == UNK_142e47a85);
    auVar24[6] = -(*(char *)((longlong)param_2 + 0xc) == UNK_142e47a86);
    auVar24[7] = -(*(char *)((longlong)param_2 + 0xd) == UNK_142e47a87);
    auVar24[8] = -(*(char *)((longlong)param_2 + 0xe) == UNK_142e47a88);
    auVar24[9] = -(*(char *)((longlong)param_2 + 0xf) == UNK_142e47a89);
    auVar24[10] = -((char)param_2[2] == UNK_142e47a8a);
    auVar24[0xb] = -(*(char *)((longlong)param_2 + 0x11) == UNK_142e47a8b);
    auVar24[0xc] = -(*(char *)((longlong)param_2 + 0x12) == UNK_142e47a8c);
    auVar24[0xd] = -(*(char *)((longlong)param_2 + 0x13) == UNK_142e47a8d);
    auVar24[0xe] = -(*(char *)((longlong)param_2 + 0x14) == UNK_142e47a8e);
    auVar24[0xf] = -(*(char *)((longlong)param_2 + 0x15) == UNK_142e47a8f);
    auVar8[0] = -((char)*param_2 == UNK_142e47a90);
    auVar8[1] = -(*(char *)((longlong)param_2 + 1) == UNK_142e47a91);
    auVar8[2] = -(*(char *)((longlong)param_2 + 2) == UNK_142e47a92);
    auVar8[3] = -(*(char *)((longlong)param_2 + 3) == UNK_142e47a93);
    auVar8[4] = -(*(char *)((longlong)param_2 + 4) == UNK_142e47a94);
    auVar8[5] = -(*(char *)((longlong)param_2 + 5) == UNK_142e47a95);
    auVar8[6] = -(*(char *)((longlong)param_2 + 6) == UNK_142e47a96);
    auVar8[7] = -(*(char *)((longlong)param_2 + 7) == UNK_142e47a97);
    auVar8[8] = -((char)param_2[1] == UNK_142e47a98);
    auVar8[9] = -(*(char *)((longlong)param_2 + 9) == UNK_142e47a99);
    auVar8[10] = -(*(char *)((longlong)param_2 + 10) == UNK_142e47a9a);
    auVar8[0xb] = -(*(char *)((longlong)param_2 + 0xb) == UNK_142e47a9b);
    auVar8[0xc] = -(*(char *)((longlong)param_2 + 0xc) == UNK_142e47a9c);
    auVar8[0xd] = -(*(char *)((longlong)param_2 + 0xd) == UNK_142e47a9d);
    auVar8[0xe] = -(*(char *)((longlong)param_2 + 0xe) == UNK_142e47a9e);
    auVar8[0xf] = -(*(char *)((longlong)param_2 + 0xf) == UNK_142e47a9f);
    auVar8 = auVar8 & auVar24;
    if (((ushort)((ushort)(SUB161(auVar8 >> 7,0) & 1) | (ushort)(SUB161(auVar8 >> 0xf,0) & 1) << 1 |
                  (ushort)(SUB161(auVar8 >> 0x17,0) & 1) << 2 |
                  (ushort)(SUB161(auVar8 >> 0x1f,0) & 1) << 3 |
                  (ushort)(SUB161(auVar8 >> 0x27,0) & 1) << 4 |
                  (ushort)(SUB161(auVar8 >> 0x2f,0) & 1) << 5 |
                  (ushort)(SUB161(auVar8 >> 0x37,0) & 1) << 6 |
                  (ushort)(SUB161(auVar8 >> 0x3f,0) & 1) << 7 |
                  (ushort)(SUB161(auVar8 >> 0x47,0) & 1) << 8 |
                  (ushort)(SUB161(auVar8 >> 0x4f,0) & 1) << 9 |
                  (ushort)(SUB161(auVar8 >> 0x57,0) & 1) << 10 |
                  (ushort)(SUB161(auVar8 >> 0x5f,0) & 1) << 0xb |
                  (ushort)(SUB161(auVar8 >> 0x67,0) & 1) << 0xc |
                  (ushort)(SUB161(auVar8 >> 0x6f,0) & 1) << 0xd |
                  (ushort)(SUB161(auVar8 >> 0x77,0) & 1) << 0xe |
                 (ushort)(byte)(auVar8[0xf] >> 7) << 0xf) == 0xffff) ||
       (auVar25[0] = -(*(char *)((longlong)param_2 + 6) == UNK_142e47aa0),
       auVar25[1] = -(*(char *)((longlong)param_2 + 7) == UNK_142e47aa1),
       auVar25[2] = -((char)param_2[1] == UNK_142e47aa2),
       auVar25[3] = -(*(char *)((longlong)param_2 + 9) == UNK_142e47aa3),
       auVar25[4] = -(*(char *)((longlong)param_2 + 10) == UNK_142e47aa4),
       auVar25[5] = -(*(char *)((longlong)param_2 + 0xb) == UNK_142e47aa5),
       auVar25[6] = -(*(char *)((longlong)param_2 + 0xc) == UNK_142e47aa6),
       auVar25[7] = -(*(char *)((longlong)param_2 + 0xd) == UNK_142e47aa7),
       auVar25[8] = -(*(char *)((longlong)param_2 + 0xe) == UNK_142e47aa8),
       auVar25[9] = -(*(char *)((longlong)param_2 + 0xf) == UNK_142e47aa9),
       auVar25[10] = -((char)param_2[2] == UNK_142e47aaa),
       auVar25[0xb] = -(*(char *)((longlong)param_2 + 0x11) == UNK_142e47aab),
       auVar25[0xc] = -(*(char *)((longlong)param_2 + 0x12) == UNK_142e47aac),
       auVar25[0xd] = -(*(char *)((longlong)param_2 + 0x13) == UNK_142e47aad),
       auVar25[0xe] = -(*(char *)((longlong)param_2 + 0x14) == UNK_142e47aae),
       auVar25[0xf] = -(*(char *)((longlong)param_2 + 0x15) == UNK_142e47aaf),
       auVar9[0] = -((char)*param_2 == UNK_142e47ab0),
       auVar9[1] = -(*(char *)((longlong)param_2 + 1) == UNK_142e47ab1),
       auVar9[2] = -(*(char *)((longlong)param_2 + 2) == UNK_142e47ab2),
       auVar9[3] = -(*(char *)((longlong)param_2 + 3) == UNK_142e47ab3),
       auVar9[4] = -(*(char *)((longlong)param_2 + 4) == UNK_142e47ab4),
       auVar9[5] = -(*(char *)((longlong)param_2 + 5) == UNK_142e47ab5),
       auVar9[6] = -(*(char *)((longlong)param_2 + 6) == UNK_142e47ab6),
       auVar9[7] = -(*(char *)((longlong)param_2 + 7) == UNK_142e47ab7),
       auVar9[8] = -((char)param_2[1] == UNK_142e47ab8),
       auVar9[9] = -(*(char *)((longlong)param_2 + 9) == UNK_142e47ab9),
       auVar9[10] = -(*(char *)((longlong)param_2 + 10) == UNK_142e47aba),
       auVar9[0xb] = -(*(char *)((longlong)param_2 + 0xb) == UNK_142e47abb),
       auVar9[0xc] = -(*(char *)((longlong)param_2 + 0xc) == UNK_142e47abc),
       auVar9[0xd] = -(*(char *)((longlong)param_2 + 0xd) == UNK_142e47abd),
       auVar9[0xe] = -(*(char *)((longlong)param_2 + 0xe) == UNK_142e47abe),
       auVar9[0xf] = -(*(char *)((longlong)param_2 + 0xf) == UNK_142e47abf),
       auVar9 = auVar9 & auVar25,
       (ushort)((ushort)(SUB161(auVar9 >> 7,0) & 1) | (ushort)(SUB161(auVar9 >> 0xf,0) & 1) << 1 |
                (ushort)(SUB161(auVar9 >> 0x17,0) & 1) << 2 |
                (ushort)(SUB161(auVar9 >> 0x1f,0) & 1) << 3 |
                (ushort)(SUB161(auVar9 >> 0x27,0) & 1) << 4 |
                (ushort)(SUB161(auVar9 >> 0x2f,0) & 1) << 5 |
                (ushort)(SUB161(auVar9 >> 0x37,0) & 1) << 6 |
                (ushort)(SUB161(auVar9 >> 0x3f,0) & 1) << 7 |
                (ushort)(SUB161(auVar9 >> 0x47,0) & 1) << 8 |
                (ushort)(SUB161(auVar9 >> 0x4f,0) & 1) << 9 |
                (ushort)(SUB161(auVar9 >> 0x57,0) & 1) << 10 |
                (ushort)(SUB161(auVar9 >> 0x5f,0) & 1) << 0xb |
                (ushort)(SUB161(auVar9 >> 0x67,0) & 1) << 0xc |
                (ushort)(SUB161(auVar9 >> 0x6f,0) & 1) << 0xd |
                (ushort)(SUB161(auVar9 >> 0x77,0) & 1) << 0xe |
               (ushort)(byte)(auVar9[0xf] >> 7) << 0xf) == 0xffff)) {
      param_1[1] = 0x16;
      *param_1 = 0x32;
      return;
    }
    break;
  case 0x17:
    auVar21[0] = -(*(char *)((longlong)param_2 + 7) == UNK_142e47a40);
    auVar21[1] = -((char)param_2[1] == UNK_142e47a41);
    auVar21[2] = -(*(char *)((longlong)param_2 + 9) == UNK_142e47a42);
    auVar21[3] = -(*(char *)((longlong)param_2 + 10) == UNK_142e47a43);
    auVar21[4] = -(*(char *)((longlong)param_2 + 0xb) == UNK_142e47a44);
    auVar21[5] = -(*(char *)((longlong)param_2 + 0xc) == UNK_142e47a45);
    auVar21[6] = -(*(char *)((longlong)param_2 + 0xd) == UNK_142e47a46);
    auVar21[7] = -(*(char *)((longlong)param_2 + 0xe) == UNK_142e47a47);
    auVar21[8] = -(*(char *)((longlong)param_2 + 0xf) == UNK_142e47a48);
    auVar21[9] = -((char)param_2[2] == UNK_142e47a49);
    auVar21[10] = -(*(char *)((longlong)param_2 + 0x11) == UNK_142e47a4a);
    auVar21[0xb] = -(*(char *)((longlong)param_2 + 0x12) == UNK_142e47a4b);
    auVar21[0xc] = -(*(char *)((longlong)param_2 + 0x13) == UNK_142e47a4c);
    auVar21[0xd] = -(*(char *)((longlong)param_2 + 0x14) == UNK_142e47a4d);
    auVar21[0xe] = -(*(char *)((longlong)param_2 + 0x15) == UNK_142e47a4e);
    auVar21[0xf] = -(*(char *)((longlong)param_2 + 0x16) == UNK_142e47a4f);
    auVar5[0] = -((char)*param_2 == UNK_142e47af0);
    auVar5[1] = -(*(char *)((longlong)param_2 + 1) == UNK_142e47af1);
    auVar5[2] = -(*(char *)((longlong)param_2 + 2) == UNK_142e47af2);
    auVar5[3] = -(*(char *)((longlong)param_2 + 3) == UNK_142e47af3);
    auVar5[4] = -(*(char *)((longlong)param_2 + 4) == UNK_142e47af4);
    auVar5[5] = -(*(char *)((longlong)param_2 + 5) == UNK_142e47af5);
    auVar5[6] = -(*(char *)((longlong)param_2 + 6) == UNK_142e47af6);
    auVar5[7] = -(*(char *)((longlong)param_2 + 7) == UNK_142e47af7);
    auVar5[8] = -((char)param_2[1] == UNK_142e47af8);
    auVar5[9] = -(*(char *)((longlong)param_2 + 9) == UNK_142e47af9);
    auVar5[10] = -(*(char *)((longlong)param_2 + 10) == UNK_142e47afa);
    auVar5[0xb] = -(*(char *)((longlong)param_2 + 0xb) == UNK_142e47afb);
    auVar5[0xc] = -(*(char *)((longlong)param_2 + 0xc) == UNK_142e47afc);
    auVar5[0xd] = -(*(char *)((longlong)param_2 + 0xd) == UNK_142e47afd);
    auVar5[0xe] = -(*(char *)((longlong)param_2 + 0xe) == UNK_142e47afe);
    auVar5[0xf] = -(*(char *)((longlong)param_2 + 0xf) == UNK_142e47aff);
    auVar5 = auVar5 & auVar21;
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
                (ushort)(byte)(auVar5[0xf] >> 7) << 0xf) == 0xffff) goto code_r0x0001401432fb;
    break;
  case 0x19:
    auVar18[0] = -(*(char *)((longlong)param_2 + 9) == UNK_142e47980);
    auVar18[1] = -(*(char *)((longlong)param_2 + 10) == UNK_142e47981);
    auVar18[2] = -(*(char *)((longlong)param_2 + 0xb) == UNK_142e47982);
    auVar18[3] = -(*(char *)((longlong)param_2 + 0xc) == UNK_142e47983);
    auVar18[4] = -(*(char *)((longlong)param_2 + 0xd) == UNK_142e47984);
    auVar18[5] = -(*(char *)((longlong)param_2 + 0xe) == UNK_142e47985);
    auVar18[6] = -(*(char *)((longlong)param_2 + 0xf) == UNK_142e47986);
    auVar18[7] = -((char)param_2[2] == UNK_142e47987);
    auVar18[8] = -(*(char *)((longlong)param_2 + 0x11) == UNK_142e47988);
    auVar18[9] = -(*(char *)((longlong)param_2 + 0x12) == UNK_142e47989);
    auVar18[10] = -(*(char *)((longlong)param_2 + 0x13) == UNK_142e4798a);
    auVar18[0xb] = -(*(char *)((longlong)param_2 + 0x14) == UNK_142e4798b);
    auVar18[0xc] = -(*(char *)((longlong)param_2 + 0x15) == UNK_142e4798c);
    auVar18[0xd] = -(*(char *)((longlong)param_2 + 0x16) == UNK_142e4798d);
    auVar18[0xe] = -(*(char *)((longlong)param_2 + 0x17) == UNK_142e4798e);
    auVar18[0xf] = -((char)param_2[3] == UNK_142e4798f);
    auVar2[0] = -((char)*param_2 == UNK_142e47990);
    auVar2[1] = -(*(char *)((longlong)param_2 + 1) == UNK_142e47991);
    auVar2[2] = -(*(char *)((longlong)param_2 + 2) == UNK_142e47992);
    auVar2[3] = -(*(char *)((longlong)param_2 + 3) == UNK_142e47993);
    auVar2[4] = -(*(char *)((longlong)param_2 + 4) == UNK_142e47994);
    auVar2[5] = -(*(char *)((longlong)param_2 + 5) == UNK_142e47995);
    auVar2[6] = -(*(char *)((longlong)param_2 + 6) == UNK_142e47996);
    auVar2[7] = -(*(char *)((longlong)param_2 + 7) == UNK_142e47997);
    auVar2[8] = -((char)param_2[1] == UNK_142e47998);
    auVar2[9] = -(*(char *)((longlong)param_2 + 9) == UNK_142e47999);
    auVar2[10] = -(*(char *)((longlong)param_2 + 10) == UNK_142e4799a);
    auVar2[0xb] = -(*(char *)((longlong)param_2 + 0xb) == UNK_142e4799b);
    auVar2[0xc] = -(*(char *)((longlong)param_2 + 0xc) == UNK_142e4799c);
    auVar2[0xd] = -(*(char *)((longlong)param_2 + 0xd) == UNK_142e4799d);
    auVar2[0xe] = -(*(char *)((longlong)param_2 + 0xe) == UNK_142e4799e);
    auVar2[0xf] = -(*(char *)((longlong)param_2 + 0xf) == UNK_142e4799f);
    auVar2 = auVar2 & auVar18;
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
      param_1[1] = 0x12;
      *param_1 = 0x32;
      return;
    }
    break;
  case 0x1b:
    auVar26[0] = -(*(char *)((longlong)param_2 + 0xb) == UNK_142e479e0);
    auVar26[1] = -(*(char *)((longlong)param_2 + 0xc) == UNK_142e479e1);
    auVar26[2] = -(*(char *)((longlong)param_2 + 0xd) == UNK_142e479e2);
    auVar26[3] = -(*(char *)((longlong)param_2 + 0xe) == UNK_142e479e3);
    auVar26[4] = -(*(char *)((longlong)param_2 + 0xf) == UNK_142e479e4);
    auVar26[5] = -((char)param_2[2] == UNK_142e479e5);
    auVar26[6] = -(*(char *)((longlong)param_2 + 0x11) == UNK_142e479e6);
    auVar26[7] = -(*(char *)((longlong)param_2 + 0x12) == UNK_142e479e7);
    auVar26[8] = -(*(char *)((longlong)param_2 + 0x13) == UNK_142e479e8);
    auVar26[9] = -(*(char *)((longlong)param_2 + 0x14) == UNK_142e479e9);
    auVar26[10] = -(*(char *)((longlong)param_2 + 0x15) == UNK_142e479ea);
    auVar26[0xb] = -(*(char *)((longlong)param_2 + 0x16) == UNK_142e479eb);
    auVar26[0xc] = -(*(char *)((longlong)param_2 + 0x17) == UNK_142e479ec);
    auVar26[0xd] = -((char)param_2[3] == UNK_142e479ed);
    auVar26[0xe] = -(*(char *)((longlong)param_2 + 0x19) == UNK_142e479ee);
    auVar26[0xf] = -(*(char *)((longlong)param_2 + 0x1a) == UNK_142e479ef);
    auVar14[0] = -((char)*param_2 == UNK_142e479f0);
    auVar14[1] = -(*(char *)((longlong)param_2 + 1) == UNK_142e479f1);
    auVar14[2] = -(*(char *)((longlong)param_2 + 2) == UNK_142e479f2);
    auVar14[3] = -(*(char *)((longlong)param_2 + 3) == UNK_142e479f3);
    auVar14[4] = -(*(char *)((longlong)param_2 + 4) == UNK_142e479f4);
    auVar14[5] = -(*(char *)((longlong)param_2 + 5) == UNK_142e479f5);
    auVar14[6] = -(*(char *)((longlong)param_2 + 6) == UNK_142e479f6);
    auVar14[7] = -(*(char *)((longlong)param_2 + 7) == UNK_142e479f7);
    auVar14[8] = -((char)param_2[1] == UNK_142e479f8);
    auVar14[9] = -(*(char *)((longlong)param_2 + 9) == UNK_142e479f9);
    auVar14[10] = -(*(char *)((longlong)param_2 + 10) == UNK_142e479fa);
    auVar14[0xb] = -(*(char *)((longlong)param_2 + 0xb) == UNK_142e479fb);
    auVar14[0xc] = -(*(char *)((longlong)param_2 + 0xc) == UNK_142e479fc);
    auVar14[0xd] = -(*(char *)((longlong)param_2 + 0xd) == UNK_142e479fd);
    auVar14[0xe] = -(*(char *)((longlong)param_2 + 0xe) == UNK_142e479fe);
    auVar14[0xf] = -(*(char *)((longlong)param_2 + 0xf) == UNK_142e479ff);
    auVar14 = auVar14 & auVar26;
    if ((ushort)((ushort)(SUB161(auVar14 >> 7,0) & 1) | (ushort)(SUB161(auVar14 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar14 >> 0x17,0) & 1) << 2 |
                 (ushort)(SUB161(auVar14 >> 0x1f,0) & 1) << 3 |
                 (ushort)(SUB161(auVar14 >> 0x27,0) & 1) << 4 |
                 (ushort)(SUB161(auVar14 >> 0x2f,0) & 1) << 5 |
                 (ushort)(SUB161(auVar14 >> 0x37,0) & 1) << 6 |
                 (ushort)(SUB161(auVar14 >> 0x3f,0) & 1) << 7 |
                 (ushort)(SUB161(auVar14 >> 0x47,0) & 1) << 8 |
                 (ushort)(SUB161(auVar14 >> 0x4f,0) & 1) << 9 |
                 (ushort)(SUB161(auVar14 >> 0x57,0) & 1) << 10 |
                 (ushort)(SUB161(auVar14 >> 0x5f,0) & 1) << 0xb |
                 (ushort)(SUB161(auVar14 >> 0x67,0) & 1) << 0xc |
                 (ushort)(SUB161(auVar14 >> 0x6f,0) & 1) << 0xd |
                 (ushort)(SUB161(auVar14 >> 0x77,0) & 1) << 0xe |
                (ushort)(byte)(auVar14[0xf] >> 7) << 0xf) == 0xffff) {
      param_1[1] = 0xe;
      *param_1 = 0x32;
      return;
    }
  }
  param_1[1] = 0x18;
  *param_1 = 0x32;
  return;
}

