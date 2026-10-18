// VA 0x1418296a0, PDB extent 1598 bytes
// country_core::game_key_bindings::_::impl$0::deserialize::impl$0::visit_str<enum2$<ron::error::Error> >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/game_key_bindings.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::game_key_bindings::_::impl$0::deserialize::impl$0::visit_str<enum2$<ron::error::Error>
   >
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/game_key_bindings.rs
   Extent: 1598 */

void pdb_1418296a0(undefined1 *param_1,longlong *param_2,undefined8 param_3)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  
  switch(param_3) {
  case 4:
    if ((int)*param_2 == 0x68746170) {
      param_1[1] = 0xd;
      *param_1 = 0x32;
      return;
    }
    if ((int)*param_2 == 0x65657274) {
      param_1[1] = 0x13;
      *param_1 = 0x32;
      return;
    }
    if ((int)*param_2 == 0x6f646e75) {
      param_1[1] = 0x17;
      *param_1 = 0x32;
      return;
    }
    if ((int)*param_2 == 0x6f646572) {
      param_1[1] = 0x18;
      *param_1 = 0x32;
      return;
    }
    break;
  case 5:
    if (*(char *)((longlong)param_2 + 4) == 'r' && (int)*param_2 == 0x65746177) {
      param_1[1] = 0x14;
      *param_1 = 0x32;
      return;
    }
    if (*(char *)((longlong)param_2 + 4) == 'p' && (int)*param_2 == 0x755f6975) {
      param_1[1] = 0x25;
      *param_1 = 0x32;
      return;
    }
    break;
  case 6:
    if (*(short *)((longlong)param_2 + 4) == 0x7265 && (int)*param_2 == 0x73617265) {
      param_1[1] = 0x10;
      *param_1 = 0x32;
      return;
    }
    if (*(short *)((longlong)param_2 + 4) == 0x6e65 && (int)*param_2 == 0x64726167) {
      param_1[1] = 0x12;
      *param_1 = 0x32;
      return;
    }
    if (*(short *)((longlong)param_2 + 4) == 0x6574 && (int)*param_2 == 0x656c6564) {
      param_1[1] = 0x19;
      *param_1 = 0x32;
      return;
    }
    break;
  case 7:
    if (*(int *)((longlong)param_2 + 3) == 0x70755f65 && (int)*param_2 == 0x65766f6d) {
      param_1[1] = 4;
      *param_1 = 0x32;
      return;
    }
    if (*(int *)((longlong)param_2 + 3) == 0x6e695f6d && (int)*param_2 == 0x6d6f6f7a) {
      param_1[1] = 10;
      *param_1 = 0x32;
      return;
    }
    if (*(int *)((longlong)param_2 + 3) == 0x6e696172 && (int)*param_2 == 0x72726574) {
      param_1[1] = 0x11;
      *param_1 = 0x32;
      return;
    }
    if (*(int *)((longlong)param_2 + 3) == 0x7466656c && (int)*param_2 == 0x6c5f6975) {
      param_1[1] = 0x22;
      *param_1 = 0x32;
      return;
    }
    if (*(int *)((longlong)param_2 + 3) == 0x6e776f64 && (int)*param_2 == 0x645f6975) {
      param_1[1] = 0x24;
      *param_1 = 0x32;
      return;
    }
    break;
  case 8:
    if (*param_2 == 0x74756f5f6d6f6f7a) {
      param_1[1] = 0xb;
      *param_1 = 0x32;
      return;
    }
    if (*param_2 == 0x676e69646c697562) {
      param_1[1] = 0xc;
      *param_1 = 0x32;
      return;
    }
    if (*param_2 == 0x6b63616264656566) {
      param_1[1] = 0x1e;
      *param_1 = 0x32;
      return;
    }
    if (*param_2 == 0x74686769725f6975) {
      param_1[1] = 0x23;
      *param_1 = 0x32;
      return;
    }
    break;
  case 9:
    if ((char)param_2[1] == 'k' && *param_2 == 0x6361625f65766f6d) {
      param_1[1] = 1;
      *param_1 = 0x32;
      return;
    }
    if ((char)param_2[1] == 't' && *param_2 == 0x66656c5f65766f6d) {
      param_1[1] = 2;
      *param_1 = 0x32;
      return;
    }
    if ((char)param_2[1] == 'n' && *param_2 == 0x776f645f65766f6d) {
      param_1[1] = 5;
      *param_1 = 0x32;
      return;
    }
    if ((char)param_2[1] == 'e' && *param_2 == 0x7a696d6f74737563) {
      param_1[1] = 0xf;
      *param_1 = 0x32;
      return;
    }
    if ((char)param_2[1] == 'e' && *param_2 == 0x646f6d6f746f6870) {
      param_1[1] = 0x15;
      *param_1 = 0x32;
      return;
    }
    if ((char)param_2[1] == 'l' && *param_2 == 0x65636e61635f6975) {
      param_1[1] = 0x20;
      *param_1 = 0x32;
      return;
    }
    break;
  case 10:
    if ((short)param_2[1] == 0x7468 && *param_2 == 0x6769725f65766f6d) {
      param_1[1] = 3;
      *param_1 = 0x32;
      return;
    }
    if ((short)param_2[1] == 0x7372 && *param_2 == 0x6f7461726f636564) {
      param_1[1] = 0xe;
      *param_1 = 0x32;
      return;
    }
    if ((short)param_2[1] == 0x7469 && *param_2 == 0x64655f7375636f66) {
      param_1[1] = 0x1a;
      *param_1 = 0x32;
      return;
    }
    if ((short)param_2[1] == 0x746f && *param_2 == 0x68736e6565726373) {
      param_1[1] = 0x1d;
      *param_1 = 0x32;
      return;
    }
    if ((short)param_2[1] == 0x6d72 && *param_2 == 0x69666e6f635f6975) {
      param_1[1] = 0x21;
      *param_1 = 0x32;
      return;
    }
    break;
  case 0xb:
    if (*(longlong *)((longlong)param_2 + 3) == 0x7466656c5f657461 && *param_2 == 0x6c5f657461746f72
       ) {
      param_1[1] = 6;
      *param_1 = 0x32;
      return;
    }
    if (*(longlong *)((longlong)param_2 + 3) == 0x7961645f666f5f65 && *param_2 == 0x5f666f5f656d6974
       ) {
      param_1[1] = 0x16;
      *param_1 = 0x32;
      return;
    }
    if (*(longlong *)((longlong)param_2 + 3) == 0x766572705f626174 && *param_2 == 0x705f6261745f6975
       ) {
      param_1[1] = 0x26;
      *param_1 = 0x32;
      return;
    }
    if (*(longlong *)((longlong)param_2 + 3) == 0x7478656e5f626174 && *param_2 == 0x6e5f6261745f6975
       ) {
      param_1[1] = 0x27;
      *param_1 = 0x32;
      return;
    }
    break;
  case 0xc:
    if ((int)param_2[1] == 0x64726177 && *param_2 == 0x726f665f65766f6d) {
      param_1[1] = 0;
      *param_1 = 0x32;
      return;
    }
    if ((int)param_2[1] == 0x74686769 && *param_2 == 0x725f657461746f72) {
      param_1[1] = 7;
      *param_1 = 0x32;
      return;
    }
    break;
  case 0xf:
    if (*(longlong *)((longlong)param_2 + 7) == 0x65646f6d5f6e6170 && *param_2 == 0x705f6172656d6163
       ) {
      param_1[1] = 9;
      *param_1 = 0x32;
      return;
    }
    break;
  case 0x10:
    auVar2[0] = -((char)*param_2 == UNK_142e505e0);
    auVar2[1] = -(*(char *)((longlong)param_2 + 1) == UNK_142e505e1);
    auVar2[2] = -(*(char *)((longlong)param_2 + 2) == UNK_142e505e2);
    auVar2[3] = -(*(char *)((longlong)param_2 + 3) == UNK_142e505e3);
    auVar2[4] = -(*(char *)((longlong)param_2 + 4) == UNK_142e505e4);
    auVar2[5] = -(*(char *)((longlong)param_2 + 5) == UNK_142e505e5);
    auVar2[6] = -(*(char *)((longlong)param_2 + 6) == UNK_142e505e6);
    auVar2[7] = -(*(char *)((longlong)param_2 + 7) == UNK_142e505e7);
    auVar2[8] = -((char)param_2[1] == UNK_142e505e8);
    auVar2[9] = -(*(char *)((longlong)param_2 + 9) == UNK_142e505e9);
    auVar2[10] = -(*(char *)((longlong)param_2 + 10) == UNK_142e505ea);
    auVar2[0xb] = -(*(char *)((longlong)param_2 + 0xb) == UNK_142e505eb);
    auVar2[0xc] = -(*(char *)((longlong)param_2 + 0xc) == UNK_142e505ec);
    auVar2[0xd] = -(*(char *)((longlong)param_2 + 0xd) == UNK_142e505ed);
    auVar2[0xe] = -(*(char *)((longlong)param_2 + 0xe) == UNK_142e505ee);
    auVar2[0xf] = -(*(char *)((longlong)param_2 + 0xf) == UNK_142e505ef);
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
      param_1[1] = 0x1b;
      *param_1 = 0x32;
      return;
    }
    break;
  case 0x11:
    auVar5[0] = -((char)*param_2 == UNK_142e505c0);
    auVar5[1] = -(*(char *)((longlong)param_2 + 1) == UNK_142e505c1);
    auVar5[2] = -(*(char *)((longlong)param_2 + 2) == UNK_142e505c2);
    auVar5[3] = -(*(char *)((longlong)param_2 + 3) == UNK_142e505c3);
    auVar5[4] = -(*(char *)((longlong)param_2 + 4) == UNK_142e505c4);
    auVar5[5] = -(*(char *)((longlong)param_2 + 5) == UNK_142e505c5);
    auVar5[6] = -(*(char *)((longlong)param_2 + 6) == UNK_142e505c6);
    auVar5[7] = -(*(char *)((longlong)param_2 + 7) == UNK_142e505c7);
    auVar5[8] = -((char)param_2[1] == UNK_142e505c8);
    auVar5[9] = -(*(char *)((longlong)param_2 + 9) == UNK_142e505c9);
    auVar5[10] = -(*(char *)((longlong)param_2 + 10) == UNK_142e505ca);
    auVar5[0xb] = -(*(char *)((longlong)param_2 + 0xb) == UNK_142e505cb);
    auVar5[0xc] = -(*(char *)((longlong)param_2 + 0xc) == UNK_142e505cc);
    auVar5[0xd] = -(*(char *)((longlong)param_2 + 0xd) == UNK_142e505cd);
    auVar5[0xe] = -(*(char *)((longlong)param_2 + 0xe) == UNK_142e505ce);
    auVar5[0xf] = -(*(char *)((longlong)param_2 + 0xf) == UNK_142e505cf);
    auVar9[0] = -((char)param_2[2] == DAT_142e505d0);
    auVar9[1] = -(UNK_142e505d1 == '\0');
    auVar9[2] = -(UNK_142e505d2 == '\0');
    auVar9[3] = -(UNK_142e505d3 == '\0');
    auVar9[4] = -(UNK_142e505d4 == '\0');
    auVar9[5] = -(UNK_142e505d5 == '\0');
    auVar9[6] = -(UNK_142e505d6 == '\0');
    auVar9[7] = -(UNK_142e505d7 == '\0');
    auVar9[8] = -(UNK_142e505d8 == '\0');
    auVar9[9] = -(UNK_142e505d9 == '\0');
    auVar9[10] = -(UNK_142e505da == '\0');
    auVar9[0xb] = -(UNK_142e505db == '\0');
    auVar9[0xc] = -(UNK_142e505dc == '\0');
    auVar9[0xd] = -(UNK_142e505dd == '\0');
    auVar9[0xe] = -(UNK_142e505de == '\0');
    auVar9[0xf] = -(UNK_142e505df == '\0');
    auVar9 = auVar9 & auVar5;
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
      param_1[1] = 0x1f;
      *param_1 = 0x32;
      return;
    }
    break;
  case 0x12:
    auVar3[0] = -((char)*param_2 == UNK_142e50600);
    auVar3[1] = -(*(char *)((longlong)param_2 + 1) == UNK_142e50601);
    auVar3[2] = -(*(char *)((longlong)param_2 + 2) == UNK_142e50602);
    auVar3[3] = -(*(char *)((longlong)param_2 + 3) == UNK_142e50603);
    auVar3[4] = -(*(char *)((longlong)param_2 + 4) == UNK_142e50604);
    auVar3[5] = -(*(char *)((longlong)param_2 + 5) == UNK_142e50605);
    auVar3[6] = -(*(char *)((longlong)param_2 + 6) == UNK_142e50606);
    auVar3[7] = -(*(char *)((longlong)param_2 + 7) == UNK_142e50607);
    auVar3[8] = -((char)param_2[1] == UNK_142e50608);
    auVar3[9] = -(*(char *)((longlong)param_2 + 9) == UNK_142e50609);
    auVar3[10] = -(*(char *)((longlong)param_2 + 10) == UNK_142e5060a);
    auVar3[0xb] = -(*(char *)((longlong)param_2 + 0xb) == UNK_142e5060b);
    auVar3[0xc] = -(*(char *)((longlong)param_2 + 0xc) == UNK_142e5060c);
    auVar3[0xd] = -(*(char *)((longlong)param_2 + 0xd) == UNK_142e5060d);
    auVar3[0xe] = -(*(char *)((longlong)param_2 + 0xe) == UNK_142e5060e);
    auVar3[0xf] = -(*(char *)((longlong)param_2 + 0xf) == UNK_142e5060f);
    auVar7[0] = -((char)(short)param_2[2] == UNK_142e50610);
    auVar7[1] = -((char)((ushort)(short)param_2[2] >> 8) == UNK_142e50611);
    auVar7[2] = -(UNK_142e50612 == '\0');
    auVar7[3] = -(UNK_142e50613 == '\0');
    auVar7[4] = -(UNK_142e50614 == '\0');
    auVar7[5] = -(UNK_142e50615 == '\0');
    auVar7[6] = -(UNK_142e50616 == '\0');
    auVar7[7] = -(UNK_142e50617 == '\0');
    auVar7[8] = -(UNK_142e50618 == '\0');
    auVar7[9] = -(UNK_142e50619 == '\0');
    auVar7[10] = -(UNK_142e5061a == '\0');
    auVar7[0xb] = -(UNK_142e5061b == '\0');
    auVar7[0xc] = -(UNK_142e5061c == '\0');
    auVar7[0xd] = -(UNK_142e5061d == '\0');
    auVar7[0xe] = -(UNK_142e5061e == '\0');
    auVar7[0xf] = -(UNK_142e5061f == '\0');
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
      param_1[1] = 8;
      *param_1 = 0x32;
      return;
    }
    auVar4[0] = -((char)*param_2 == DAT_142e50620);
    auVar4[1] = -(*(char *)((longlong)param_2 + 1) == UNK_142e50621);
    auVar4[2] = -(*(char *)((longlong)param_2 + 2) == UNK_142e50622);
    auVar4[3] = -(*(char *)((longlong)param_2 + 3) == UNK_142e50623);
    auVar4[4] = -(*(char *)((longlong)param_2 + 4) == UNK_142e50624);
    auVar4[5] = -(*(char *)((longlong)param_2 + 5) == UNK_142e50625);
    auVar4[6] = -(*(char *)((longlong)param_2 + 6) == UNK_142e50626);
    auVar4[7] = -(*(char *)((longlong)param_2 + 7) == UNK_142e50627);
    auVar4[8] = -((char)param_2[1] == UNK_142e50628);
    auVar4[9] = -(*(char *)((longlong)param_2 + 9) == UNK_142e50629);
    auVar4[10] = -(*(char *)((longlong)param_2 + 10) == UNK_142e5062a);
    auVar4[0xb] = -(*(char *)((longlong)param_2 + 0xb) == UNK_142e5062b);
    auVar4[0xc] = -(*(char *)((longlong)param_2 + 0xc) == UNK_142e5062c);
    auVar4[0xd] = -(*(char *)((longlong)param_2 + 0xd) == UNK_142e5062d);
    auVar4[0xe] = -(*(char *)((longlong)param_2 + 0xe) == UNK_142e5062e);
    auVar4[0xf] = -(*(char *)((longlong)param_2 + 0xf) == UNK_142e5062f);
    auVar8[0] = -((char)(short)param_2[2] == UNK_142e50630);
    auVar8[1] = -((char)((ushort)(short)param_2[2] >> 8) == UNK_142e50631);
    auVar8[2] = -(UNK_142e50632 == '\0');
    auVar8[3] = -(UNK_142e50633 == '\0');
    auVar8[4] = -(UNK_142e50634 == '\0');
    auVar8[5] = -(UNK_142e50635 == '\0');
    auVar8[6] = -(UNK_142e50636 == '\0');
    auVar8[7] = -(UNK_142e50637 == '\0');
    auVar8[8] = -(UNK_142e50638 == '\0');
    auVar8[9] = -(UNK_142e50639 == '\0');
    auVar8[10] = -(UNK_142e5063a == '\0');
    auVar8[0xb] = -(UNK_142e5063b == '\0');
    auVar8[0xc] = -(UNK_142e5063c == '\0');
    auVar8[0xd] = -(UNK_142e5063d == '\0');
    auVar8[0xe] = -(UNK_142e5063e == '\0');
    auVar8[0xf] = -(UNK_142e5063f == '\0');
    auVar8 = auVar8 & auVar4;
    if ((ushort)((ushort)(SUB161(auVar8 >> 7,0) & 1) | (ushort)(SUB161(auVar8 >> 0xf,0) & 1) << 1 |
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
                (ushort)(byte)(auVar8[0xf] >> 7) << 0xf) == 0xffff) {
      param_1[1] = 0x1c;
      *param_1 = 0x32;
      return;
    }
    break;
  case 0x13:
    auVar6[0] = -(*(char *)((longlong)param_2 + 3) == UNK_142e505a0);
    auVar6[1] = -(*(char *)((longlong)param_2 + 4) == UNK_142e505a1);
    auVar6[2] = -(*(char *)((longlong)param_2 + 5) == UNK_142e505a2);
    auVar6[3] = -(*(char *)((longlong)param_2 + 6) == UNK_142e505a3);
    auVar6[4] = -(*(char *)((longlong)param_2 + 7) == UNK_142e505a4);
    auVar6[5] = -((char)param_2[1] == UNK_142e505a5);
    auVar6[6] = -(*(char *)((longlong)param_2 + 9) == UNK_142e505a6);
    auVar6[7] = -(*(char *)((longlong)param_2 + 10) == UNK_142e505a7);
    auVar6[8] = -(*(char *)((longlong)param_2 + 0xb) == UNK_142e505a8);
    auVar6[9] = -(*(char *)((longlong)param_2 + 0xc) == UNK_142e505a9);
    auVar6[10] = -(*(char *)((longlong)param_2 + 0xd) == UNK_142e505aa);
    auVar6[0xb] = -(*(char *)((longlong)param_2 + 0xe) == UNK_142e505ab);
    auVar6[0xc] = -(*(char *)((longlong)param_2 + 0xf) == UNK_142e505ac);
    auVar6[0xd] = -((char)param_2[2] == UNK_142e505ad);
    auVar6[0xe] = -(*(char *)((longlong)param_2 + 0x11) == UNK_142e505ae);
    auVar6[0xf] = -(*(char *)((longlong)param_2 + 0x12) == UNK_142e505af);
    auVar1[0] = -((char)*param_2 == UNK_142e505b0);
    auVar1[1] = -(*(char *)((longlong)param_2 + 1) == UNK_142e505b1);
    auVar1[2] = -(*(char *)((longlong)param_2 + 2) == UNK_142e505b2);
    auVar1[3] = -(*(char *)((longlong)param_2 + 3) == UNK_142e505b3);
    auVar1[4] = -(*(char *)((longlong)param_2 + 4) == UNK_142e505b4);
    auVar1[5] = -(*(char *)((longlong)param_2 + 5) == UNK_142e505b5);
    auVar1[6] = -(*(char *)((longlong)param_2 + 6) == UNK_142e505b6);
    auVar1[7] = -(*(char *)((longlong)param_2 + 7) == UNK_142e505b7);
    auVar1[8] = -((char)param_2[1] == UNK_142e505b8);
    auVar1[9] = -(*(char *)((longlong)param_2 + 9) == UNK_142e505b9);
    auVar1[10] = -(*(char *)((longlong)param_2 + 10) == UNK_142e505ba);
    auVar1[0xb] = -(*(char *)((longlong)param_2 + 0xb) == UNK_142e505bb);
    auVar1[0xc] = -(*(char *)((longlong)param_2 + 0xc) == UNK_142e505bc);
    auVar1[0xd] = -(*(char *)((longlong)param_2 + 0xd) == UNK_142e505bd);
    auVar1[0xe] = -(*(char *)((longlong)param_2 + 0xe) == UNK_142e505be);
    auVar1[0xf] = -(*(char *)((longlong)param_2 + 0xf) == UNK_142e505bf);
    auVar1 = auVar1 & auVar6;
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
      param_1[1] = 0x28;
      *param_1 = 0x32;
      return;
    }
  }
  param_1[1] = 0x29;
  *param_1 = 0x32;
  return;
}

