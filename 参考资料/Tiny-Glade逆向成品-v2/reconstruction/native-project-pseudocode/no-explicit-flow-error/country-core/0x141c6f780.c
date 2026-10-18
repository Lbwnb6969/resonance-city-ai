// VA 0x141c6f780, PDB extent 1949 bytes
// country_core::input::action_set::_::impl$0::deserialize::impl$0::visit_str<serde_json::error::Error>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/input/action_set.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::input::action_set::_::impl$0::deserialize::impl$0::visit_str<serde_json::error::Error>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/input/action_set.rs
   Extent: 1949 */

void pdb_141c6f780(undefined1 *param_1,longlong *param_2,undefined8 param_3)

{
  int iVar1;
  undefined1 uVar2;
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
  
  switch(param_3) {
  case 4:
    if ((int)*param_2 == 0x6f646e75) {
      uVar2 = 0x17;
      goto code_r0x000141c6fe9d;
    }
    if ((int)*param_2 == 0x6f646572) {
      uVar2 = 0x18;
      goto code_r0x000141c6fe9d;
    }
    break;
  case 5:
    if (*(char *)((longlong)param_2 + 4) == 'k' && (int)*param_2 == 0x63696c63) {
      uVar2 = 6;
      goto code_r0x000141c6fe9d;
    }
    if (*(char *)((longlong)param_2 + 4) == 'p' && (int)*param_2 == 0x755f6975) {
      uVar2 = 0x1f;
      goto code_r0x000141c6fe9d;
    }
    break;
  case 6:
    if (*(short *)((longlong)param_2 + 4) == 0x6574 && (int)*param_2 == 0x656c6564) {
      uVar2 = 0x19;
      goto code_r0x000141c6fe9d;
    }
    break;
  case 7:
    if (*(int *)((longlong)param_2 + 3) == 0x7466656c && (int)*param_2 == 0x6c5f6975) {
      uVar2 = 0x1c;
      goto code_r0x000141c6fe9d;
    }
    if (*(int *)((longlong)param_2 + 3) == 0x6e776f64 && (int)*param_2 == 0x645f6975) {
      uVar2 = 0x1e;
      goto code_r0x000141c6fe9d;
    }
    break;
  case 8:
    if (*param_2 == 0x74686769725f6975) {
      uVar2 = 0x1d;
      goto code_r0x000141c6fe9d;
    }
    break;
  case 9:
    if ((char)param_2[1] == 'h' && *param_2 == 0x7461705f6c6f6f74) {
      uVar2 = 0xb;
      goto code_r0x000141c6fe9d;
    }
    if ((char)param_2[1] == 'e' && *param_2 == 0x6572745f6c6f6f74) {
      uVar2 = 0x11;
      goto code_r0x000141c6fe9d;
    }
    if ((char)param_2[1] == 'e' && *param_2 == 0x646f6d6f746f6870) {
      uVar2 = 0x14;
      goto code_r0x000141c6fe9d;
    }
    if ((char)param_2[1] == 'l' && *param_2 == 0x65636e61635f6975) {
      uVar2 = 0x1a;
      goto code_r0x000141c6fe9d;
    }
    if ((char)param_2[1] == 'u' && *param_2 == 0x6e656d5f6e69616d) {
      uVar2 = 0x23;
      goto code_r0x000141c6fe9d;
    }
    if ((char)param_2[1] == 'n' && *param_2 == 0x776170735f797669) {
      uVar2 = 0x2c;
      goto code_r0x000141c6fe9d;
    }
    break;
  case 10:
    if ((short)param_2[1] == 0x6e61 && *param_2 == 0x705f6172656d6163) {
      uVar2 = 2;
      goto code_r0x000141c6fe9d;
    }
    if ((short)param_2[1] == 0x7265 && *param_2 == 0x7461775f6c6f6f74) {
      uVar2 = 0x12;
      goto code_r0x000141c6fe9d;
    }
    if ((short)param_2[1] == 0x6d72 && *param_2 == 0x69666e6f635f6975) {
      uVar2 = 0x1b;
      goto code_r0x000141c6fe9d;
    }
    if ((short)param_2[1] == 0x746f && *param_2 == 0x68736e6565726373) {
      uVar2 = 0x25;
      goto code_r0x000141c6fe9d;
    }
    break;
  case 0xb:
    if (*(longlong *)((longlong)param_2 + 3) == 0x6d6f6f7a5f617265 && *param_2 == 0x7a5f6172656d6163
       ) {
      uVar2 = 4;
      goto code_r0x000141c6fe9d;
    }
    if (*(longlong *)((longlong)param_2 + 3) == 0x6b63696c635f7468 && *param_2 == 0x6c635f7468676972
       ) {
      uVar2 = 7;
      goto code_r0x000141c6fe9d;
    }
    if (*(longlong *)((longlong)param_2 + 3) == 0x7265736172655f6c && *param_2 == 0x6172655f6c6f6f74
       ) {
      uVar2 = 0xf;
      goto code_r0x000141c6fe9d;
    }
    if (*(longlong *)((longlong)param_2 + 3) == 0x6e65647261675f6c && *param_2 == 0x7261675f6c6f6f74
       ) {
      uVar2 = 0x10;
      goto code_r0x000141c6fe9d;
    }
    if (*(longlong *)((longlong)param_2 + 3) == 0x7961645f666f5f65 && *param_2 == 0x5f666f5f656d6974
       ) {
      uVar2 = 0x15;
      goto code_r0x000141c6fe9d;
    }
    if (*(longlong *)((longlong)param_2 + 3) == 0x766572705f626174 && *param_2 == 0x705f6261745f6975
       ) {
      uVar2 = 0x20;
      goto code_r0x000141c6fe9d;
    }
    if (*(longlong *)((longlong)param_2 + 3) == 0x7478656e5f626174 && *param_2 == 0x6e5f6261745f6975
       ) {
      uVar2 = 0x21;
      goto code_r0x000141c6fe9d;
    }
    break;
  case 0xc:
    if ((int)param_2[1] == 0x6e696172 && *param_2 == 0x7265745f6c6f6f74) {
      uVar2 = 0xe;
      goto code_r0x000141c6fe9d;
    }
    if ((int)param_2[1] == 0x7361766e && *param_2 == 0x61635f7261656c63) {
      uVar2 = 0x22;
      goto code_r0x000141c6fe9d;
    }
    break;
  case 0xd:
    if (*(longlong *)((longlong)param_2 + 5) == 0x7468676965685f61 && *param_2 == 0x685f6172656d6163
       ) {
      uVar2 = 3;
      goto code_r0x000141c6fe9d;
    }
    if (*(longlong *)((longlong)param_2 + 5) == 0x657461746f725f61 && *param_2 == 0x725f6172656d6163
       ) {
      uVar2 = 5;
      goto code_r0x000141c6fe9d;
    }
    if (*(longlong *)((longlong)param_2 + 5) == 0x676e69646c697562 && *param_2 == 0x6975625f6c6f6f74
       ) {
      uVar2 = 10;
      goto code_r0x000141c6fe9d;
    }
    break;
  case 0xe:
    if (*(longlong *)((longlong)param_2 + 6) == 0x726f7461726f6365 && *param_2 == 0x6365645f6c6f6f74
       ) {
      uVar2 = 0xc;
      goto code_r0x000141c6fe9d;
    }
    if (*(longlong *)((longlong)param_2 + 6) == 0x657a696d6f747375 && *param_2 == 0x7375635f6c6f6f74
       ) {
      uVar2 = 0xd;
      goto code_r0x000141c6fe9d;
    }
    if (*(longlong *)((longlong)param_2 + 6) == 0x756e656d5f726570 && *param_2 == 0x65706f6c65766564
       ) {
      uVar2 = 0x24;
      goto code_r0x000141c6fe9d;
    }
    break;
  case 0xf:
    if (*(longlong *)((longlong)param_2 + 7) == 0x65646f6d5f6e6170 && *param_2 == 0x705f6172656d6163
       ) {
      uVar2 = 9;
      goto code_r0x000141c6fe9d;
    }
    if (*(longlong *)((longlong)param_2 + 7) == 0x676e697070616e73 && *param_2 == 0x735f656c67676f74
       ) {
      uVar2 = 0x2f;
      goto code_r0x000141c6fe9d;
    }
    break;
  case 0x10:
    auVar6[0] = -((char)*param_2 == UNK_1433a2f30);
    auVar6[1] = -(*(char *)((longlong)param_2 + 1) == UNK_1433a2f31);
    auVar6[2] = -(*(char *)((longlong)param_2 + 2) == UNK_1433a2f32);
    auVar6[3] = -(*(char *)((longlong)param_2 + 3) == UNK_1433a2f33);
    auVar6[4] = -(*(char *)((longlong)param_2 + 4) == UNK_1433a2f34);
    auVar6[5] = -(*(char *)((longlong)param_2 + 5) == UNK_1433a2f35);
    auVar6[6] = -(*(char *)((longlong)param_2 + 6) == UNK_1433a2f36);
    auVar6[7] = -(*(char *)((longlong)param_2 + 7) == UNK_1433a2f37);
    auVar6[8] = -((char)param_2[1] == UNK_1433a2f38);
    auVar6[9] = -(*(char *)((longlong)param_2 + 9) == UNK_1433a2f39);
    auVar6[10] = -(*(char *)((longlong)param_2 + 10) == UNK_1433a2f3a);
    auVar6[0xb] = -(*(char *)((longlong)param_2 + 0xb) == UNK_1433a2f3b);
    auVar6[0xc] = -(*(char *)((longlong)param_2 + 0xc) == UNK_1433a2f3c);
    auVar6[0xd] = -(*(char *)((longlong)param_2 + 0xd) == UNK_1433a2f3d);
    auVar6[0xe] = -(*(char *)((longlong)param_2 + 0xe) == UNK_1433a2f3e);
    auVar6[0xf] = -(*(char *)((longlong)param_2 + 0xf) == UNK_1433a2f3f);
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
                 (ushort)(SUB161(auVar6 >> 0x77,0) & 1) << 0xe | (ushort)(auVar6[0xf] >> 7) << 0xf)
        == 0xffff) {
      uVar2 = 0x16;
      goto code_r0x000141c6fe9d;
    }
    break;
  case 0x11:
    auVar4[0] = -((char)*param_2 == UNK_142e505c0);
    auVar4[1] = -(*(char *)((longlong)param_2 + 1) == UNK_142e505c1);
    auVar4[2] = -(*(char *)((longlong)param_2 + 2) == UNK_142e505c2);
    auVar4[3] = -(*(char *)((longlong)param_2 + 3) == UNK_142e505c3);
    auVar4[4] = -(*(char *)((longlong)param_2 + 4) == UNK_142e505c4);
    auVar4[5] = -(*(char *)((longlong)param_2 + 5) == UNK_142e505c5);
    auVar4[6] = -(*(char *)((longlong)param_2 + 6) == UNK_142e505c6);
    auVar4[7] = -(*(char *)((longlong)param_2 + 7) == UNK_142e505c7);
    auVar4[8] = -((char)param_2[1] == UNK_142e505c8);
    auVar4[9] = -(*(char *)((longlong)param_2 + 9) == UNK_142e505c9);
    auVar4[10] = -(*(char *)((longlong)param_2 + 10) == UNK_142e505ca);
    auVar4[0xb] = -(*(char *)((longlong)param_2 + 0xb) == UNK_142e505cb);
    auVar4[0xc] = -(*(char *)((longlong)param_2 + 0xc) == UNK_142e505cc);
    auVar4[0xd] = -(*(char *)((longlong)param_2 + 0xd) == UNK_142e505cd);
    auVar4[0xe] = -(*(char *)((longlong)param_2 + 0xe) == UNK_142e505ce);
    auVar4[0xf] = -(*(char *)((longlong)param_2 + 0xf) == UNK_142e505cf);
    auVar15[0] = -((char)param_2[2] == DAT_142e505d0);
    auVar15[1] = -(UNK_142e505d1 == '\0');
    auVar15[2] = -(UNK_142e505d2 == '\0');
    auVar15[3] = -(UNK_142e505d3 == '\0');
    auVar15[4] = -(UNK_142e505d4 == '\0');
    auVar15[5] = -(UNK_142e505d5 == '\0');
    auVar15[6] = -(UNK_142e505d6 == '\0');
    auVar15[7] = -(UNK_142e505d7 == '\0');
    auVar15[8] = -(UNK_142e505d8 == '\0');
    auVar15[9] = -(UNK_142e505d9 == '\0');
    auVar15[10] = -(UNK_142e505da == '\0');
    auVar15[0xb] = -(UNK_142e505db == '\0');
    auVar15[0xc] = -(UNK_142e505dc == '\0');
    auVar15[0xd] = -(UNK_142e505dd == '\0');
    auVar15[0xe] = -(UNK_142e505de == '\0');
    auVar15[0xf] = -(UNK_142e505df == '\0');
    auVar15 = auVar15 & auVar4;
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
      uVar2 = 0x28;
      goto code_r0x000141c6fe9d;
    }
    auVar5[0] = -((char)*param_2 == UNK_1433a2ee0);
    auVar5[1] = -(*(char *)((longlong)param_2 + 1) == UNK_1433a2ee1);
    auVar5[2] = -(*(char *)((longlong)param_2 + 2) == UNK_1433a2ee2);
    auVar5[3] = -(*(char *)((longlong)param_2 + 3) == UNK_1433a2ee3);
    auVar5[4] = -(*(char *)((longlong)param_2 + 4) == UNK_1433a2ee4);
    auVar5[5] = -(*(char *)((longlong)param_2 + 5) == UNK_1433a2ee5);
    auVar5[6] = -(*(char *)((longlong)param_2 + 6) == UNK_1433a2ee6);
    auVar5[7] = -(*(char *)((longlong)param_2 + 7) == UNK_1433a2ee7);
    auVar5[8] = -((char)param_2[1] == UNK_1433a2ee8);
    auVar5[9] = -(*(char *)((longlong)param_2 + 9) == UNK_1433a2ee9);
    auVar5[10] = -(*(char *)((longlong)param_2 + 10) == UNK_1433a2eea);
    auVar5[0xb] = -(*(char *)((longlong)param_2 + 0xb) == UNK_1433a2eeb);
    auVar5[0xc] = -(*(char *)((longlong)param_2 + 0xc) == UNK_1433a2eec);
    auVar5[0xd] = -(*(char *)((longlong)param_2 + 0xd) == UNK_1433a2eed);
    auVar5[0xe] = -(*(char *)((longlong)param_2 + 0xe) == UNK_1433a2eee);
    auVar5[0xf] = -(*(char *)((longlong)param_2 + 0xf) == UNK_1433a2eef);
    auVar16[0] = -((char)param_2[2] == DAT_142e505d0);
    auVar16[1] = -(UNK_142e505d1 == '\0');
    auVar16[2] = -(UNK_142e505d2 == '\0');
    auVar16[3] = -(UNK_142e505d3 == '\0');
    auVar16[4] = -(UNK_142e505d4 == '\0');
    auVar16[5] = -(UNK_142e505d5 == '\0');
    auVar16[6] = -(UNK_142e505d6 == '\0');
    auVar16[7] = -(UNK_142e505d7 == '\0');
    auVar16[8] = -(UNK_142e505d8 == '\0');
    auVar16[9] = -(UNK_142e505d9 == '\0');
    auVar16[10] = -(UNK_142e505da == '\0');
    auVar16[0xb] = -(UNK_142e505db == '\0');
    auVar16[0xc] = -(UNK_142e505dc == '\0');
    auVar16[0xd] = -(UNK_142e505dd == '\0');
    auVar16[0xe] = -(UNK_142e505de == '\0');
    auVar16[0xf] = -(UNK_142e505df == '\0');
    auVar16 = auVar16 & auVar5;
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
      uVar2 = 0x2b;
      goto code_r0x000141c6fe9d;
    }
    break;
  case 0x12:
    auVar7[0] = -((char)*param_2 == UNK_142e50600);
    auVar7[1] = -(*(char *)((longlong)param_2 + 1) == UNK_142e50601);
    auVar7[2] = -(*(char *)((longlong)param_2 + 2) == UNK_142e50602);
    auVar7[3] = -(*(char *)((longlong)param_2 + 3) == UNK_142e50603);
    auVar7[4] = -(*(char *)((longlong)param_2 + 4) == UNK_142e50604);
    auVar7[5] = -(*(char *)((longlong)param_2 + 5) == UNK_142e50605);
    auVar7[6] = -(*(char *)((longlong)param_2 + 6) == UNK_142e50606);
    auVar7[7] = -(*(char *)((longlong)param_2 + 7) == UNK_142e50607);
    auVar7[8] = -((char)param_2[1] == UNK_142e50608);
    auVar7[9] = -(*(char *)((longlong)param_2 + 9) == UNK_142e50609);
    auVar7[10] = -(*(char *)((longlong)param_2 + 10) == UNK_142e5060a);
    auVar7[0xb] = -(*(char *)((longlong)param_2 + 0xb) == UNK_142e5060b);
    auVar7[0xc] = -(*(char *)((longlong)param_2 + 0xc) == UNK_142e5060c);
    auVar7[0xd] = -(*(char *)((longlong)param_2 + 0xd) == UNK_142e5060d);
    auVar7[0xe] = -(*(char *)((longlong)param_2 + 0xe) == UNK_142e5060e);
    auVar7[0xf] = -(*(char *)((longlong)param_2 + 0xf) == UNK_142e5060f);
    auVar17[0] = -((char)(short)param_2[2] == UNK_142e50610);
    auVar17[1] = -((char)((ushort)(short)param_2[2] >> 8) == UNK_142e50611);
    auVar17[2] = -(UNK_142e50612 == '\0');
    auVar17[3] = -(UNK_142e50613 == '\0');
    auVar17[4] = -(UNK_142e50614 == '\0');
    auVar17[5] = -(UNK_142e50615 == '\0');
    auVar17[6] = -(UNK_142e50616 == '\0');
    auVar17[7] = -(UNK_142e50617 == '\0');
    auVar17[8] = -(UNK_142e50618 == '\0');
    auVar17[9] = -(UNK_142e50619 == '\0');
    auVar17[10] = -(UNK_142e5061a == '\0');
    auVar17[0xb] = -(UNK_142e5061b == '\0');
    auVar17[0xc] = -(UNK_142e5061c == '\0');
    auVar17[0xd] = -(UNK_142e5061d == '\0');
    auVar17[0xe] = -(UNK_142e5061e == '\0');
    auVar17[0xf] = -(UNK_142e5061f == '\0');
    auVar17 = auVar17 & auVar7;
    if ((ushort)((ushort)(SUB161(auVar17 >> 7,0) & 1) | (ushort)(SUB161(auVar17 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar17 >> 0x17,0) & 1) << 2 |
                 (ushort)(SUB161(auVar17 >> 0x1f,0) & 1) << 3 |
                 (ushort)(SUB161(auVar17 >> 0x27,0) & 1) << 4 |
                 (ushort)(SUB161(auVar17 >> 0x2f,0) & 1) << 5 |
                 (ushort)(SUB161(auVar17 >> 0x37,0) & 1) << 6 |
                 (ushort)(SUB161(auVar17 >> 0x3f,0) & 1) << 7 |
                 (ushort)(SUB161(auVar17 >> 0x47,0) & 1) << 8 |
                 (ushort)(SUB161(auVar17 >> 0x4f,0) & 1) << 9 |
                 (ushort)(SUB161(auVar17 >> 0x57,0) & 1) << 10 |
                 (ushort)(SUB161(auVar17 >> 0x5f,0) & 1) << 0xb |
                 (ushort)(SUB161(auVar17 >> 0x67,0) & 1) << 0xc |
                 (ushort)(SUB161(auVar17 >> 0x6f,0) & 1) << 0xd |
                 (ushort)(SUB161(auVar17 >> 0x77,0) & 1) << 0xe |
                (ushort)(byte)(auVar17[0xf] >> 7) << 0xf) == 0xffff) {
      uVar2 = 8;
      goto code_r0x000141c6fe9d;
    }
    auVar8[0] = -((char)*param_2 == DAT_142e50620);
    auVar8[1] = -(*(char *)((longlong)param_2 + 1) == UNK_142e50621);
    auVar8[2] = -(*(char *)((longlong)param_2 + 2) == UNK_142e50622);
    auVar8[3] = -(*(char *)((longlong)param_2 + 3) == UNK_142e50623);
    auVar8[4] = -(*(char *)((longlong)param_2 + 4) == UNK_142e50624);
    auVar8[5] = -(*(char *)((longlong)param_2 + 5) == UNK_142e50625);
    auVar8[6] = -(*(char *)((longlong)param_2 + 6) == UNK_142e50626);
    auVar8[7] = -(*(char *)((longlong)param_2 + 7) == UNK_142e50627);
    auVar8[8] = -((char)param_2[1] == UNK_142e50628);
    auVar8[9] = -(*(char *)((longlong)param_2 + 9) == UNK_142e50629);
    auVar8[10] = -(*(char *)((longlong)param_2 + 10) == UNK_142e5062a);
    auVar8[0xb] = -(*(char *)((longlong)param_2 + 0xb) == UNK_142e5062b);
    auVar8[0xc] = -(*(char *)((longlong)param_2 + 0xc) == UNK_142e5062c);
    auVar8[0xd] = -(*(char *)((longlong)param_2 + 0xd) == UNK_142e5062d);
    auVar8[0xe] = -(*(char *)((longlong)param_2 + 0xe) == UNK_142e5062e);
    auVar8[0xf] = -(*(char *)((longlong)param_2 + 0xf) == UNK_142e5062f);
    auVar18[0] = -((char)(short)param_2[2] == UNK_142e50630);
    auVar18[1] = -((char)((ushort)(short)param_2[2] >> 8) == UNK_142e50631);
    auVar18[2] = -(UNK_142e50632 == '\0');
    auVar18[3] = -(UNK_142e50633 == '\0');
    auVar18[4] = -(UNK_142e50634 == '\0');
    auVar18[5] = -(UNK_142e50635 == '\0');
    auVar18[6] = -(UNK_142e50636 == '\0');
    auVar18[7] = -(UNK_142e50637 == '\0');
    auVar18[8] = -(UNK_142e50638 == '\0');
    auVar18[9] = -(UNK_142e50639 == '\0');
    auVar18[10] = -(UNK_142e5063a == '\0');
    auVar18[0xb] = -(UNK_142e5063b == '\0');
    auVar18[0xc] = -(UNK_142e5063c == '\0');
    auVar18[0xd] = -(UNK_142e5063d == '\0');
    auVar18[0xe] = -(UNK_142e5063e == '\0');
    auVar18[0xf] = -(UNK_142e5063f == '\0');
    auVar18 = auVar18 & auVar8;
    if ((ushort)((ushort)(SUB161(auVar18 >> 7,0) & 1) | (ushort)(SUB161(auVar18 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar18 >> 0x17,0) & 1) << 2 |
                 (ushort)(SUB161(auVar18 >> 0x1f,0) & 1) << 3 |
                 (ushort)(SUB161(auVar18 >> 0x27,0) & 1) << 4 |
                 (ushort)(SUB161(auVar18 >> 0x2f,0) & 1) << 5 |
                 (ushort)(SUB161(auVar18 >> 0x37,0) & 1) << 6 |
                 (ushort)(SUB161(auVar18 >> 0x3f,0) & 1) << 7 |
                 (ushort)(SUB161(auVar18 >> 0x47,0) & 1) << 8 |
                 (ushort)(SUB161(auVar18 >> 0x4f,0) & 1) << 9 |
                 (ushort)(SUB161(auVar18 >> 0x57,0) & 1) << 10 |
                 (ushort)(SUB161(auVar18 >> 0x5f,0) & 1) << 0xb |
                 (ushort)(SUB161(auVar18 >> 0x67,0) & 1) << 0xc |
                 (ushort)(SUB161(auVar18 >> 0x6f,0) & 1) << 0xd |
                 (ushort)(SUB161(auVar18 >> 0x77,0) & 1) << 0xe |
                (ushort)(byte)(auVar18[0xf] >> 7) << 0xf) == 0xffff) {
      uVar2 = 0x13;
      goto code_r0x000141c6fe9d;
    }
    break;
  case 0x13:
    auVar19[0] = -(*(char *)((longlong)param_2 + 3) == UNK_1433a2ef0);
    auVar19[1] = -(*(char *)((longlong)param_2 + 4) == UNK_1433a2ef1);
    auVar19[2] = -(*(char *)((longlong)param_2 + 5) == UNK_1433a2ef2);
    auVar19[3] = -(*(char *)((longlong)param_2 + 6) == UNK_1433a2ef3);
    auVar19[4] = -(*(char *)((longlong)param_2 + 7) == UNK_1433a2ef4);
    auVar19[5] = -((char)param_2[1] == UNK_1433a2ef5);
    auVar19[6] = -(*(char *)((longlong)param_2 + 9) == UNK_1433a2ef6);
    auVar19[7] = -(*(char *)((longlong)param_2 + 10) == UNK_1433a2ef7);
    auVar19[8] = -(*(char *)((longlong)param_2 + 0xb) == UNK_1433a2ef8);
    auVar19[9] = -(*(char *)((longlong)param_2 + 0xc) == UNK_1433a2ef9);
    auVar19[10] = -(*(char *)((longlong)param_2 + 0xd) == UNK_1433a2efa);
    auVar19[0xb] = -(*(char *)((longlong)param_2 + 0xe) == UNK_1433a2efb);
    auVar19[0xc] = -(*(char *)((longlong)param_2 + 0xf) == UNK_1433a2efc);
    auVar19[0xd] = -((char)param_2[2] == UNK_1433a2efd);
    auVar19[0xe] = -(*(char *)((longlong)param_2 + 0x11) == UNK_1433a2efe);
    auVar19[0xf] = -(*(char *)((longlong)param_2 + 0x12) == UNK_1433a2eff);
    auVar9[0] = -((char)*param_2 == UNK_1433a2f00);
    auVar9[1] = -(*(char *)((longlong)param_2 + 1) == UNK_1433a2f01);
    auVar9[2] = -(*(char *)((longlong)param_2 + 2) == UNK_1433a2f02);
    auVar9[3] = -(*(char *)((longlong)param_2 + 3) == UNK_1433a2f03);
    auVar9[4] = -(*(char *)((longlong)param_2 + 4) == UNK_1433a2f04);
    auVar9[5] = -(*(char *)((longlong)param_2 + 5) == UNK_1433a2f05);
    auVar9[6] = -(*(char *)((longlong)param_2 + 6) == UNK_1433a2f06);
    auVar9[7] = -(*(char *)((longlong)param_2 + 7) == UNK_1433a2f07);
    auVar9[8] = -((char)param_2[1] == UNK_1433a2f08);
    auVar9[9] = -(*(char *)((longlong)param_2 + 9) == UNK_1433a2f09);
    auVar9[10] = -(*(char *)((longlong)param_2 + 10) == UNK_1433a2f0a);
    auVar9[0xb] = -(*(char *)((longlong)param_2 + 0xb) == UNK_1433a2f0b);
    auVar9[0xc] = -(*(char *)((longlong)param_2 + 0xc) == UNK_1433a2f0c);
    auVar9[0xd] = -(*(char *)((longlong)param_2 + 0xd) == UNK_1433a2f0d);
    auVar9[0xe] = -(*(char *)((longlong)param_2 + 0xe) == UNK_1433a2f0e);
    auVar9[0xf] = -(*(char *)((longlong)param_2 + 0xf) == UNK_1433a2f0f);
    auVar9 = auVar9 & auVar19;
    if ((ushort)((ushort)(SUB161(auVar9 >> 7,0) & 1) | (ushort)(SUB161(auVar9 >> 0xf,0) & 1) << 1 |
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
                (ushort)(byte)(auVar9[0xf] >> 7) << 0xf) == 0xffff) {
      uVar2 = 0x27;
      goto code_r0x000141c6fe9d;
    }
    iVar1 = pub_142e32750(param_2,&UNK_1433a31ba);
    if (iVar1 == 0) {
      uVar2 = 0x2d;
      goto code_r0x000141c6fe9d;
    }
    break;
  case 0x16:
    auVar22[0] = -(*(char *)((longlong)param_2 + 6) == UNK_1433a2ea0);
    auVar22[1] = -(*(char *)((longlong)param_2 + 7) == UNK_1433a2ea1);
    auVar22[2] = -((char)param_2[1] == UNK_1433a2ea2);
    auVar22[3] = -(*(char *)((longlong)param_2 + 9) == UNK_1433a2ea3);
    auVar22[4] = -(*(char *)((longlong)param_2 + 10) == UNK_1433a2ea4);
    auVar22[5] = -(*(char *)((longlong)param_2 + 0xb) == UNK_1433a2ea5);
    auVar22[6] = -(*(char *)((longlong)param_2 + 0xc) == UNK_1433a2ea6);
    auVar22[7] = -(*(char *)((longlong)param_2 + 0xd) == UNK_1433a2ea7);
    auVar22[8] = -(*(char *)((longlong)param_2 + 0xe) == UNK_1433a2ea8);
    auVar22[9] = -(*(char *)((longlong)param_2 + 0xf) == UNK_1433a2ea9);
    auVar22[10] = -((char)param_2[2] == UNK_1433a2eaa);
    auVar22[0xb] = -(*(char *)((longlong)param_2 + 0x11) == UNK_1433a2eab);
    auVar22[0xc] = -(*(char *)((longlong)param_2 + 0x12) == UNK_1433a2eac);
    auVar22[0xd] = -(*(char *)((longlong)param_2 + 0x13) == UNK_1433a2ead);
    auVar22[0xe] = -(*(char *)((longlong)param_2 + 0x14) == UNK_1433a2eae);
    auVar22[0xf] = -(*(char *)((longlong)param_2 + 0x15) == UNK_1433a2eaf);
    auVar12[0] = -((char)*param_2 == UNK_1433a2eb0);
    auVar12[1] = -(*(char *)((longlong)param_2 + 1) == UNK_1433a2eb1);
    auVar12[2] = -(*(char *)((longlong)param_2 + 2) == UNK_1433a2eb2);
    auVar12[3] = -(*(char *)((longlong)param_2 + 3) == UNK_1433a2eb3);
    auVar12[4] = -(*(char *)((longlong)param_2 + 4) == UNK_1433a2eb4);
    auVar12[5] = -(*(char *)((longlong)param_2 + 5) == UNK_1433a2eb5);
    auVar12[6] = -(*(char *)((longlong)param_2 + 6) == UNK_1433a2eb6);
    auVar12[7] = -(*(char *)((longlong)param_2 + 7) == UNK_1433a2eb7);
    auVar12[8] = -((char)param_2[1] == UNK_1433a2eb8);
    auVar12[9] = -(*(char *)((longlong)param_2 + 9) == UNK_1433a2eb9);
    auVar12[10] = -(*(char *)((longlong)param_2 + 10) == UNK_1433a2eba);
    auVar12[0xb] = -(*(char *)((longlong)param_2 + 0xb) == UNK_1433a2ebb);
    auVar12[0xc] = -(*(char *)((longlong)param_2 + 0xc) == UNK_1433a2ebc);
    auVar12[0xd] = -(*(char *)((longlong)param_2 + 0xd) == UNK_1433a2ebd);
    auVar12[0xe] = -(*(char *)((longlong)param_2 + 0xe) == UNK_1433a2ebe);
    auVar12[0xf] = -(*(char *)((longlong)param_2 + 0xf) == UNK_1433a2ebf);
    auVar12 = auVar12 & auVar22;
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
                 (ushort)(SUB161(auVar12 >> 0x77,0) & 1) << 0xe |
                (ushort)(byte)(auVar12[0xf] >> 7) << 0xf) == 0xffff) {
      uVar2 = 0x29;
      goto code_r0x000141c6fe9d;
    }
    auVar23[0] = -(*(char *)((longlong)param_2 + 6) == UNK_1433a2ec0);
    auVar23[1] = -(*(char *)((longlong)param_2 + 7) == UNK_1433a2ec1);
    auVar23[2] = -((char)param_2[1] == UNK_1433a2ec2);
    auVar23[3] = -(*(char *)((longlong)param_2 + 9) == UNK_1433a2ec3);
    auVar23[4] = -(*(char *)((longlong)param_2 + 10) == UNK_1433a2ec4);
    auVar23[5] = -(*(char *)((longlong)param_2 + 0xb) == UNK_1433a2ec5);
    auVar23[6] = -(*(char *)((longlong)param_2 + 0xc) == UNK_1433a2ec6);
    auVar23[7] = -(*(char *)((longlong)param_2 + 0xd) == UNK_1433a2ec7);
    auVar23[8] = -(*(char *)((longlong)param_2 + 0xe) == UNK_1433a2ec8);
    auVar23[9] = -(*(char *)((longlong)param_2 + 0xf) == UNK_1433a2ec9);
    auVar23[10] = -((char)param_2[2] == UNK_1433a2eca);
    auVar23[0xb] = -(*(char *)((longlong)param_2 + 0x11) == UNK_1433a2ecb);
    auVar23[0xc] = -(*(char *)((longlong)param_2 + 0x12) == UNK_1433a2ecc);
    auVar23[0xd] = -(*(char *)((longlong)param_2 + 0x13) == UNK_1433a2ecd);
    auVar23[0xe] = -(*(char *)((longlong)param_2 + 0x14) == UNK_1433a2ece);
    auVar23[0xf] = -(*(char *)((longlong)param_2 + 0x15) == UNK_1433a2ecf);
    auVar13[0] = -((char)*param_2 == UNK_1433a2ed0);
    auVar13[1] = -(*(char *)((longlong)param_2 + 1) == UNK_1433a2ed1);
    auVar13[2] = -(*(char *)((longlong)param_2 + 2) == UNK_1433a2ed2);
    auVar13[3] = -(*(char *)((longlong)param_2 + 3) == UNK_1433a2ed3);
    auVar13[4] = -(*(char *)((longlong)param_2 + 4) == UNK_1433a2ed4);
    auVar13[5] = -(*(char *)((longlong)param_2 + 5) == UNK_1433a2ed5);
    auVar13[6] = -(*(char *)((longlong)param_2 + 6) == UNK_1433a2ed6);
    auVar13[7] = -(*(char *)((longlong)param_2 + 7) == UNK_1433a2ed7);
    auVar13[8] = -((char)param_2[1] == UNK_1433a2ed8);
    auVar13[9] = -(*(char *)((longlong)param_2 + 9) == UNK_1433a2ed9);
    auVar13[10] = -(*(char *)((longlong)param_2 + 10) == UNK_1433a2eda);
    auVar13[0xb] = -(*(char *)((longlong)param_2 + 0xb) == UNK_1433a2edb);
    auVar13[0xc] = -(*(char *)((longlong)param_2 + 0xc) == UNK_1433a2edc);
    auVar13[0xd] = -(*(char *)((longlong)param_2 + 0xd) == UNK_1433a2edd);
    auVar13[0xe] = -(*(char *)((longlong)param_2 + 0xe) == UNK_1433a2ede);
    auVar13[0xf] = -(*(char *)((longlong)param_2 + 0xf) == UNK_1433a2edf);
    auVar13 = auVar13 & auVar23;
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
                 (ushort)(SUB161(auVar13 >> 0x77,0) & 1) << 0xe |
                (ushort)(byte)(auVar13[0xf] >> 7) << 0xf) == 0xffff) {
      uVar2 = 0x2a;
      goto code_r0x000141c6fe9d;
    }
    break;
  case 0x17:
    auVar20[0] = -(*(char *)((longlong)param_2 + 7) == UNK_1433a2f40);
    auVar20[1] = -((char)param_2[1] == UNK_1433a2f41);
    auVar20[2] = -(*(char *)((longlong)param_2 + 9) == UNK_1433a2f42);
    auVar20[3] = -(*(char *)((longlong)param_2 + 10) == UNK_1433a2f43);
    auVar20[4] = -(*(char *)((longlong)param_2 + 0xb) == UNK_1433a2f44);
    auVar20[5] = -(*(char *)((longlong)param_2 + 0xc) == UNK_1433a2f45);
    auVar20[6] = -(*(char *)((longlong)param_2 + 0xd) == UNK_1433a2f46);
    auVar20[7] = -(*(char *)((longlong)param_2 + 0xe) == UNK_1433a2f47);
    auVar20[8] = -(*(char *)((longlong)param_2 + 0xf) == UNK_1433a2f48);
    auVar20[9] = -((char)param_2[2] == UNK_1433a2f49);
    auVar20[10] = -(*(char *)((longlong)param_2 + 0x11) == UNK_1433a2f4a);
    auVar20[0xb] = -(*(char *)((longlong)param_2 + 0x12) == UNK_1433a2f4b);
    auVar20[0xc] = -(*(char *)((longlong)param_2 + 0x13) == UNK_1433a2f4c);
    auVar20[0xd] = -(*(char *)((longlong)param_2 + 0x14) == UNK_1433a2f4d);
    auVar20[0xe] = -(*(char *)((longlong)param_2 + 0x15) == UNK_1433a2f4e);
    auVar20[0xf] = -(*(char *)((longlong)param_2 + 0x16) == UNK_1433a2f4f);
    auVar10[0] = -((char)*param_2 == UNK_1433a2f50);
    auVar10[1] = -(*(char *)((longlong)param_2 + 1) == UNK_1433a2f51);
    auVar10[2] = -(*(char *)((longlong)param_2 + 2) == UNK_1433a2f52);
    auVar10[3] = -(*(char *)((longlong)param_2 + 3) == UNK_1433a2f53);
    auVar10[4] = -(*(char *)((longlong)param_2 + 4) == UNK_1433a2f54);
    auVar10[5] = -(*(char *)((longlong)param_2 + 5) == UNK_1433a2f55);
    auVar10[6] = -(*(char *)((longlong)param_2 + 6) == UNK_1433a2f56);
    auVar10[7] = -(*(char *)((longlong)param_2 + 7) == UNK_1433a2f57);
    auVar10[8] = -((char)param_2[1] == UNK_1433a2f58);
    auVar10[9] = -(*(char *)((longlong)param_2 + 9) == UNK_1433a2f59);
    auVar10[10] = -(*(char *)((longlong)param_2 + 10) == UNK_1433a2f5a);
    auVar10[0xb] = -(*(char *)((longlong)param_2 + 0xb) == UNK_1433a2f5b);
    auVar10[0xc] = -(*(char *)((longlong)param_2 + 0xc) == UNK_1433a2f5c);
    auVar10[0xd] = -(*(char *)((longlong)param_2 + 0xd) == UNK_1433a2f5d);
    auVar10[0xe] = -(*(char *)((longlong)param_2 + 0xe) == UNK_1433a2f5e);
    auVar10[0xf] = -(*(char *)((longlong)param_2 + 0xf) == UNK_1433a2f5f);
    auVar10 = auVar10 & auVar20;
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
                 (ushort)(SUB161(auVar10 >> 0x77,0) & 1) << 0xe |
                (ushort)(byte)(auVar10[0xf] >> 7) << 0xf) == 0xffff) {
      uVar2 = 0;
      goto code_r0x000141c6fe9d;
    }
    auVar21[0] = -(*(char *)((longlong)param_2 + 7) == UNK_1433a2f60);
    auVar21[1] = -((char)param_2[1] == UNK_1433a2f61);
    auVar21[2] = -(*(char *)((longlong)param_2 + 9) == UNK_1433a2f62);
    auVar21[3] = -(*(char *)((longlong)param_2 + 10) == UNK_1433a2f63);
    auVar21[4] = -(*(char *)((longlong)param_2 + 0xb) == UNK_1433a2f64);
    auVar21[5] = -(*(char *)((longlong)param_2 + 0xc) == UNK_1433a2f65);
    auVar21[6] = -(*(char *)((longlong)param_2 + 0xd) == UNK_1433a2f66);
    auVar21[7] = -(*(char *)((longlong)param_2 + 0xe) == UNK_1433a2f67);
    auVar21[8] = -(*(char *)((longlong)param_2 + 0xf) == UNK_1433a2f68);
    auVar21[9] = -((char)param_2[2] == UNK_1433a2f69);
    auVar21[10] = -(*(char *)((longlong)param_2 + 0x11) == UNK_1433a2f6a);
    auVar21[0xb] = -(*(char *)((longlong)param_2 + 0x12) == UNK_1433a2f6b);
    auVar21[0xc] = -(*(char *)((longlong)param_2 + 0x13) == UNK_1433a2f6c);
    auVar21[0xd] = -(*(char *)((longlong)param_2 + 0x14) == UNK_1433a2f6d);
    auVar21[0xe] = -(*(char *)((longlong)param_2 + 0x15) == UNK_1433a2f6e);
    auVar21[0xf] = -(*(char *)((longlong)param_2 + 0x16) == UNK_1433a2f6f);
    auVar11[0] = -((char)*param_2 == UNK_1433a2f70);
    auVar11[1] = -(*(char *)((longlong)param_2 + 1) == UNK_1433a2f71);
    auVar11[2] = -(*(char *)((longlong)param_2 + 2) == UNK_1433a2f72);
    auVar11[3] = -(*(char *)((longlong)param_2 + 3) == UNK_1433a2f73);
    auVar11[4] = -(*(char *)((longlong)param_2 + 4) == UNK_1433a2f74);
    auVar11[5] = -(*(char *)((longlong)param_2 + 5) == UNK_1433a2f75);
    auVar11[6] = -(*(char *)((longlong)param_2 + 6) == UNK_1433a2f76);
    auVar11[7] = -(*(char *)((longlong)param_2 + 7) == UNK_1433a2f77);
    auVar11[8] = -((char)param_2[1] == UNK_1433a2f78);
    auVar11[9] = -(*(char *)((longlong)param_2 + 9) == UNK_1433a2f79);
    auVar11[10] = -(*(char *)((longlong)param_2 + 10) == UNK_1433a2f7a);
    auVar11[0xb] = -(*(char *)((longlong)param_2 + 0xb) == UNK_1433a2f7b);
    auVar11[0xc] = -(*(char *)((longlong)param_2 + 0xc) == UNK_1433a2f7c);
    auVar11[0xd] = -(*(char *)((longlong)param_2 + 0xd) == UNK_1433a2f7d);
    auVar11[0xe] = -(*(char *)((longlong)param_2 + 0xe) == UNK_1433a2f7e);
    auVar11[0xf] = -(*(char *)((longlong)param_2 + 0xf) == UNK_1433a2f7f);
    auVar11 = auVar11 & auVar21;
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
                 (ushort)(SUB161(auVar11 >> 0x77,0) & 1) << 0xe |
                (ushort)(byte)(auVar11[0xf] >> 7) << 0xf) == 0xffff) {
      uVar2 = 0x2e;
      goto code_r0x000141c6fe9d;
    }
    break;
  case 0x1c:
    auVar14[0] = -(*(char *)((longlong)param_2 + 0xc) == UNK_1433a2f10);
    auVar14[1] = -(*(char *)((longlong)param_2 + 0xd) == UNK_1433a2f11);
    auVar14[2] = -(*(char *)((longlong)param_2 + 0xe) == UNK_1433a2f12);
    auVar14[3] = -(*(char *)((longlong)param_2 + 0xf) == UNK_1433a2f13);
    auVar14[4] = -((char)param_2[2] == UNK_1433a2f14);
    auVar14[5] = -(*(char *)((longlong)param_2 + 0x11) == UNK_1433a2f15);
    auVar14[6] = -(*(char *)((longlong)param_2 + 0x12) == UNK_1433a2f16);
    auVar14[7] = -(*(char *)((longlong)param_2 + 0x13) == UNK_1433a2f17);
    auVar14[8] = -(*(char *)((longlong)param_2 + 0x14) == UNK_1433a2f18);
    auVar14[9] = -(*(char *)((longlong)param_2 + 0x15) == UNK_1433a2f19);
    auVar14[10] = -(*(char *)((longlong)param_2 + 0x16) == UNK_1433a2f1a);
    auVar14[0xb] = -(*(char *)((longlong)param_2 + 0x17) == UNK_1433a2f1b);
    auVar14[0xc] = -((char)param_2[3] == UNK_1433a2f1c);
    auVar14[0xd] = -(*(char *)((longlong)param_2 + 0x19) == UNK_1433a2f1d);
    auVar14[0xe] = -(*(char *)((longlong)param_2 + 0x1a) == UNK_1433a2f1e);
    auVar14[0xf] = -(*(char *)((longlong)param_2 + 0x1b) == UNK_1433a2f1f);
    auVar3[0] = -((char)*param_2 == UNK_1433a2f20);
    auVar3[1] = -(*(char *)((longlong)param_2 + 1) == UNK_1433a2f21);
    auVar3[2] = -(*(char *)((longlong)param_2 + 2) == UNK_1433a2f22);
    auVar3[3] = -(*(char *)((longlong)param_2 + 3) == UNK_1433a2f23);
    auVar3[4] = -(*(char *)((longlong)param_2 + 4) == UNK_1433a2f24);
    auVar3[5] = -(*(char *)((longlong)param_2 + 5) == UNK_1433a2f25);
    auVar3[6] = -(*(char *)((longlong)param_2 + 6) == UNK_1433a2f26);
    auVar3[7] = -(*(char *)((longlong)param_2 + 7) == UNK_1433a2f27);
    auVar3[8] = -((char)param_2[1] == UNK_1433a2f28);
    auVar3[9] = -(*(char *)((longlong)param_2 + 9) == UNK_1433a2f29);
    auVar3[10] = -(*(char *)((longlong)param_2 + 10) == UNK_1433a2f2a);
    auVar3[0xb] = -(*(char *)((longlong)param_2 + 0xb) == UNK_1433a2f2b);
    auVar3[0xc] = -(*(char *)((longlong)param_2 + 0xc) == UNK_1433a2f2c);
    auVar3[0xd] = -(*(char *)((longlong)param_2 + 0xd) == UNK_1433a2f2d);
    auVar3[0xe] = -(*(char *)((longlong)param_2 + 0xe) == UNK_1433a2f2e);
    auVar3[0xf] = -(*(char *)((longlong)param_2 + 0xf) == UNK_1433a2f2f);
    auVar3 = auVar3 & auVar14;
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
      uVar2 = 0x26;
      goto code_r0x000141c6fe9d;
    }
    break;
  case 0x21:
    iVar1 = pub_142e32750(param_2,&UNK_1433a2f97,0x21);
    if (iVar1 == 0) {
      uVar2 = 1;
      goto code_r0x000141c6fe9d;
    }
  }
  uVar2 = 0x30;
code_r0x000141c6fe9d:
  param_1[1] = uVar2;
  *param_1 = 0;
  return;
}

