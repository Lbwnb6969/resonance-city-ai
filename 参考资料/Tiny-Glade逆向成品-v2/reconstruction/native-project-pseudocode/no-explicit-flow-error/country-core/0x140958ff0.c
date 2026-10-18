// VA 0x140958ff0, PDB extent 1390 bytes
// country_core::render::nani::gpu_world::_::impl$0::deserialize::impl$0::visit_str<enum2$<ron::error::Error> >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/render/nani/gpu_world.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::render::nani::gpu_world::_::impl$0::deserialize::impl$0::visit_str<enum2$<ron::error::Error>
   >
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/render/nani/gpu_world.rs
   Extent: 1390 */

undefined2 * pdb_140958ff0(undefined2 *param_1,longlong *param_2,undefined8 param_3)

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
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  
  switch(param_3) {
  case 4:
    if ((int)*param_2 == 0x68737542) {
      *param_1 = 0xa32;
      return param_1;
    }
    if ((int)*param_2 == 0x6e657257) {
      *param_1 = 0xe32;
      return param_1;
    }
    if ((int)*param_2 == 0x72656255) {
      *param_1 = 0x1432;
      return param_1;
    }
    break;
  case 5:
    if (*(char *)((longlong)param_2 + 4) == 't' && (int)*param_2 == 0x6e616c50) {
      *param_1 = 0x832;
      return param_1;
    }
    if (*(char *)((longlong)param_2 + 4) == 'h' && (int)*param_2 == 0x746f6c43) {
      *param_1 = 0x1132;
      return param_1;
    }
    if (*(char *)((longlong)param_2 + 4) == 'e' && (int)*param_2 == 0x6b6f6d53) {
      *param_1 = 0x1232;
      return param_1;
    }
    break;
  case 6:
    if (*(short *)((longlong)param_2 + 4) == 0x7970 && (int)*param_2 == 0x6f6e6143) {
      *param_1 = 0x32;
      return param_1;
    }
    if (*(short *)((longlong)param_2 + 4) == 0x7265 && (int)*param_2 == 0x776f6c46) {
      *param_1 = 0x932;
      return param_1;
    }
    break;
  case 7:
    if (*(int *)((longlong)param_2 + 3) == 0x72657473 && (int)*param_2 == 0x73616c50) {
      *param_1 = 0x1032;
      return param_1;
    }
    break;
  case 8:
    if (*param_2 == 0x656c6954666f6f52) {
      *param_1 = 0x632;
      return param_1;
    }
    break;
  case 9:
    if ((char)param_2[1] == 'k' && *param_2 == 0x6e75725465657254) {
      *param_1 = 0x132;
      return param_1;
    }
    if ((char)param_2[1] == 'r' && *param_2 == 0x6f6f6c46666f6f52) {
      *param_1 = 0x732;
      return param_1;
    }
    if ((char)param_2[1] == 'e' && *param_2 == 0x706f527269617453) {
      *param_1 = 0x1b32;
      return param_1;
    }
    break;
  case 10:
    if ((short)param_2[1] == 0x3064 && *param_2 == 0x6f4c327373617247) {
      *param_1 = 0x1c32;
      return param_1;
    }
    break;
  case 0xb:
    if (*(longlong *)((longlong)param_2 + 3) == 0x6b6e616c506e6564 && *param_2 == 0x6c506e65646f6f57
       ) {
      *param_1 = 0xb32;
      return param_1;
    }
    if (*(longlong *)((longlong)param_2 + 3) == 0x726f6f44796e6f63 && *param_2 == 0x44796e6f636c6142
       ) {
      *param_1 = 0x1332;
      return param_1;
    }
    if (*(longlong *)((longlong)param_2 + 3) == 0x726f6f6c46737269 && *param_2 == 0x6c46737269617453
       ) {
      *param_1 = 0x1832;
      return param_1;
    }
    break;
  case 0xc:
    if ((int)param_2[1] == 0x65766973 && *param_2 == 0x73696d4572656255) {
      *param_1 = 0x1532;
      return param_1;
    }
    if ((int)param_2[1] == 0x796c6e4f && *param_2 == 0x797469636f6c6556) {
      *param_1 = 0x1732;
      return param_1;
    }
    break;
  case 0xf:
    if (*(longlong *)((longlong)param_2 + 7) == 0x7265776f6c466465 && *param_2 == 0x6563616c70657250
       ) {
      *param_1 = 0xd32;
      return param_1;
    }
    if (*(longlong *)((longlong)param_2 + 7) == 0x6576697373696d45 && *param_2 == 0x456e7265746e614c
       ) {
      *param_1 = 0xf32;
      return param_1;
    }
    if (*(longlong *)((longlong)param_2 + 7) == 0x656d617246686372 && *param_2 == 0x72416e65646f6f57
       ) {
      *param_1 = 0x1a32;
      return param_1;
    }
    break;
  case 0x10:
    auVar5[0] = -((char)*param_2 == UNK_143025400);
    auVar5[1] = -(*(char *)((longlong)param_2 + 1) == UNK_143025401);
    auVar5[2] = -(*(char *)((longlong)param_2 + 2) == UNK_143025402);
    auVar5[3] = -(*(char *)((longlong)param_2 + 3) == UNK_143025403);
    auVar5[4] = -(*(char *)((longlong)param_2 + 4) == UNK_143025404);
    auVar5[5] = -(*(char *)((longlong)param_2 + 5) == UNK_143025405);
    auVar5[6] = -(*(char *)((longlong)param_2 + 6) == UNK_143025406);
    auVar5[7] = -(*(char *)((longlong)param_2 + 7) == UNK_143025407);
    auVar5[8] = -((char)param_2[1] == UNK_143025408);
    auVar5[9] = -(*(char *)((longlong)param_2 + 9) == UNK_143025409);
    auVar5[10] = -(*(char *)((longlong)param_2 + 10) == UNK_14302540a);
    auVar5[0xb] = -(*(char *)((longlong)param_2 + 0xb) == UNK_14302540b);
    auVar5[0xc] = -(*(char *)((longlong)param_2 + 0xc) == UNK_14302540c);
    auVar5[0xd] = -(*(char *)((longlong)param_2 + 0xd) == UNK_14302540d);
    auVar5[0xe] = -(*(char *)((longlong)param_2 + 0xe) == UNK_14302540e);
    auVar5[0xf] = -(*(char *)((longlong)param_2 + 0xf) == UNK_14302540f);
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
                 (ushort)(SUB161(auVar5 >> 0x77,0) & 1) << 0xe | (ushort)(auVar5[0xf] >> 7) << 0xf)
        == 0xffff) {
      *param_1 = 0xc32;
      return param_1;
    }
    auVar6[0] = -((char)*param_2 == UNK_143025410);
    auVar6[1] = -(*(char *)((longlong)param_2 + 1) == UNK_143025411);
    auVar6[2] = -(*(char *)((longlong)param_2 + 2) == UNK_143025412);
    auVar6[3] = -(*(char *)((longlong)param_2 + 3) == UNK_143025413);
    auVar6[4] = -(*(char *)((longlong)param_2 + 4) == UNK_143025414);
    auVar6[5] = -(*(char *)((longlong)param_2 + 5) == UNK_143025415);
    auVar6[6] = -(*(char *)((longlong)param_2 + 6) == UNK_143025416);
    auVar6[7] = -(*(char *)((longlong)param_2 + 7) == UNK_143025417);
    auVar6[8] = -((char)param_2[1] == UNK_143025418);
    auVar6[9] = -(*(char *)((longlong)param_2 + 9) == UNK_143025419);
    auVar6[10] = -(*(char *)((longlong)param_2 + 10) == UNK_14302541a);
    auVar6[0xb] = -(*(char *)((longlong)param_2 + 0xb) == UNK_14302541b);
    auVar6[0xc] = -(*(char *)((longlong)param_2 + 0xc) == UNK_14302541c);
    auVar6[0xd] = -(*(char *)((longlong)param_2 + 0xd) == UNK_14302541d);
    auVar6[0xe] = -(*(char *)((longlong)param_2 + 0xe) == UNK_14302541e);
    auVar6[0xf] = -(*(char *)((longlong)param_2 + 0xf) == UNK_14302541f);
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
      *param_1 = 0x1632;
      return param_1;
    }
    break;
  case 0x12:
    auVar1[0] = -((char)*param_2 == UNK_143025420);
    auVar1[1] = -(*(char *)((longlong)param_2 + 1) == UNK_143025421);
    auVar1[2] = -(*(char *)((longlong)param_2 + 2) == UNK_143025422);
    auVar1[3] = -(*(char *)((longlong)param_2 + 3) == UNK_143025423);
    auVar1[4] = -(*(char *)((longlong)param_2 + 4) == UNK_143025424);
    auVar1[5] = -(*(char *)((longlong)param_2 + 5) == UNK_143025425);
    auVar1[6] = -(*(char *)((longlong)param_2 + 6) == UNK_143025426);
    auVar1[7] = -(*(char *)((longlong)param_2 + 7) == UNK_143025427);
    auVar1[8] = -((char)param_2[1] == UNK_143025428);
    auVar1[9] = -(*(char *)((longlong)param_2 + 9) == UNK_143025429);
    auVar1[10] = -(*(char *)((longlong)param_2 + 10) == UNK_14302542a);
    auVar1[0xb] = -(*(char *)((longlong)param_2 + 0xb) == UNK_14302542b);
    auVar1[0xc] = -(*(char *)((longlong)param_2 + 0xc) == UNK_14302542c);
    auVar1[0xd] = -(*(char *)((longlong)param_2 + 0xd) == UNK_14302542d);
    auVar1[0xe] = -(*(char *)((longlong)param_2 + 0xe) == UNK_14302542e);
    auVar1[0xf] = -(*(char *)((longlong)param_2 + 0xf) == UNK_14302542f);
    auVar7[0] = -((char)(short)param_2[2] == UNK_143025430);
    auVar7[1] = -((char)((ushort)(short)param_2[2] >> 8) == UNK_143025431);
    auVar7[2] = -(UNK_143025432 == '\0');
    auVar7[3] = -(UNK_143025433 == '\0');
    auVar7[4] = -(UNK_143025434 == '\0');
    auVar7[5] = -(UNK_143025435 == '\0');
    auVar7[6] = -(UNK_143025436 == '\0');
    auVar7[7] = -(UNK_143025437 == '\0');
    auVar7[8] = -(UNK_143025438 == '\0');
    auVar7[9] = -(UNK_143025439 == '\0');
    auVar7[10] = -(UNK_14302543a == '\0');
    auVar7[0xb] = -(UNK_14302543b == '\0');
    auVar7[0xc] = -(UNK_14302543c == '\0');
    auVar7[0xd] = -(UNK_14302543d == '\0');
    auVar7[0xe] = -(UNK_14302543e == '\0');
    auVar7[0xf] = -(UNK_14302543f == '\0');
    auVar7 = auVar7 & auVar1;
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
      *param_1 = 0x532;
      return param_1;
    }
    break;
  case 0x16:
    auVar8[0] = -(*(char *)((longlong)param_2 + 6) == UNK_143025460);
    auVar8[1] = -(*(char *)((longlong)param_2 + 7) == UNK_143025461);
    auVar8[2] = -((char)param_2[1] == UNK_143025462);
    auVar8[3] = -(*(char *)((longlong)param_2 + 9) == UNK_143025463);
    auVar8[4] = -(*(char *)((longlong)param_2 + 10) == UNK_143025464);
    auVar8[5] = -(*(char *)((longlong)param_2 + 0xb) == UNK_143025465);
    auVar8[6] = -(*(char *)((longlong)param_2 + 0xc) == UNK_143025466);
    auVar8[7] = -(*(char *)((longlong)param_2 + 0xd) == UNK_143025467);
    auVar8[8] = -(*(char *)((longlong)param_2 + 0xe) == UNK_143025468);
    auVar8[9] = -(*(char *)((longlong)param_2 + 0xf) == UNK_143025469);
    auVar8[10] = -((char)param_2[2] == UNK_14302546a);
    auVar8[0xb] = -(*(char *)((longlong)param_2 + 0x11) == UNK_14302546b);
    auVar8[0xc] = -(*(char *)((longlong)param_2 + 0x12) == UNK_14302546c);
    auVar8[0xd] = -(*(char *)((longlong)param_2 + 0x13) == UNK_14302546d);
    auVar8[0xe] = -(*(char *)((longlong)param_2 + 0x14) == UNK_14302546e);
    auVar8[0xf] = -(*(char *)((longlong)param_2 + 0x15) == UNK_14302546f);
    auVar2[0] = -((char)*param_2 == UNK_143025450);
    auVar2[1] = -(*(char *)((longlong)param_2 + 1) == UNK_143025451);
    auVar2[2] = -(*(char *)((longlong)param_2 + 2) == UNK_143025452);
    auVar2[3] = -(*(char *)((longlong)param_2 + 3) == UNK_143025453);
    auVar2[4] = -(*(char *)((longlong)param_2 + 4) == UNK_143025454);
    auVar2[5] = -(*(char *)((longlong)param_2 + 5) == UNK_143025455);
    auVar2[6] = -(*(char *)((longlong)param_2 + 6) == UNK_143025456);
    auVar2[7] = -(*(char *)((longlong)param_2 + 7) == UNK_143025457);
    auVar2[8] = -((char)param_2[1] == UNK_143025458);
    auVar2[9] = -(*(char *)((longlong)param_2 + 9) == UNK_143025459);
    auVar2[10] = -(*(char *)((longlong)param_2 + 10) == UNK_14302545a);
    auVar2[0xb] = -(*(char *)((longlong)param_2 + 0xb) == UNK_14302545b);
    auVar2[0xc] = -(*(char *)((longlong)param_2 + 0xc) == UNK_14302545c);
    auVar2[0xd] = -(*(char *)((longlong)param_2 + 0xd) == UNK_14302545d);
    auVar2[0xe] = -(*(char *)((longlong)param_2 + 0xe) == UNK_14302545e);
    auVar2[0xf] = -(*(char *)((longlong)param_2 + 0xf) == UNK_14302545f);
    auVar2 = auVar2 & auVar8;
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
      *param_1 = 0x232;
      return param_1;
    }
    auVar12[0] = -(*(char *)((longlong)param_2 + 6) == UNK_143025470);
    auVar12[1] = -(*(char *)((longlong)param_2 + 7) == UNK_143025471);
    auVar12[2] = -((char)param_2[1] == UNK_143025472);
    auVar12[3] = -(*(char *)((longlong)param_2 + 9) == UNK_143025473);
    auVar12[4] = -(*(char *)((longlong)param_2 + 10) == UNK_143025474);
    auVar12[5] = -(*(char *)((longlong)param_2 + 0xb) == UNK_143025475);
    auVar12[6] = -(*(char *)((longlong)param_2 + 0xc) == UNK_143025476);
    auVar12[7] = -(*(char *)((longlong)param_2 + 0xd) == UNK_143025477);
    auVar12[8] = -(*(char *)((longlong)param_2 + 0xe) == UNK_143025478);
    auVar12[9] = -(*(char *)((longlong)param_2 + 0xf) == UNK_143025479);
    auVar12[10] = -((char)param_2[2] == UNK_14302547a);
    auVar12[0xb] = -(*(char *)((longlong)param_2 + 0x11) == UNK_14302547b);
    auVar12[0xc] = -(*(char *)((longlong)param_2 + 0x12) == UNK_14302547c);
    auVar12[0xd] = -(*(char *)((longlong)param_2 + 0x13) == UNK_14302547d);
    auVar12[0xe] = -(*(char *)((longlong)param_2 + 0x14) == UNK_14302547e);
    auVar12[0xf] = -(*(char *)((longlong)param_2 + 0x15) == UNK_14302547f);
    auVar9[0] = -((char)*param_2 == 'S');
    auVar9[1] = -(*(char *)((longlong)param_2 + 1) == 'o');
    auVar9[2] = -(*(char *)((longlong)param_2 + 2) == 'l');
    auVar9[3] = -(*(char *)((longlong)param_2 + 3) == 'i');
    auVar9[4] = -(*(char *)((longlong)param_2 + 4) == 'd');
    auVar9[5] = -(*(char *)((longlong)param_2 + 5) == 'V');
    auVar9[6] = -(*(char *)((longlong)param_2 + 6) == 'e');
    auVar9[7] = -(*(char *)((longlong)param_2 + 7) == 'r');
    auVar9[8] = -((char)param_2[1] == 't');
    auVar9[9] = -(*(char *)((longlong)param_2 + 9) == 'e');
    auVar9[10] = -(*(char *)((longlong)param_2 + 10) == 'x');
    auVar9[0xb] = -(*(char *)((longlong)param_2 + 0xb) == 'C');
    auVar9[0xc] = -(*(char *)((longlong)param_2 + 0xc) == 'o');
    auVar9[0xd] = -(*(char *)((longlong)param_2 + 0xd) == 'l');
    auVar9[0xe] = -(*(char *)((longlong)param_2 + 0xe) == 'o');
    auVar9[0xf] = -(*(char *)((longlong)param_2 + 0xf) == 'r');
    auVar12 = auVar12 & auVar9;
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
      *param_1 = 0x432;
      return param_1;
    }
    auVar10[0] = -(*(char *)((longlong)param_2 + 6) == UNK_143025480);
    auVar10[1] = -(*(char *)((longlong)param_2 + 7) == UNK_143025481);
    auVar10[2] = -((char)param_2[1] == UNK_143025482);
    auVar10[3] = -(*(char *)((longlong)param_2 + 9) == UNK_143025483);
    auVar10[4] = -(*(char *)((longlong)param_2 + 10) == UNK_143025484);
    auVar10[5] = -(*(char *)((longlong)param_2 + 0xb) == UNK_143025485);
    auVar10[6] = -(*(char *)((longlong)param_2 + 0xc) == UNK_143025486);
    auVar10[7] = -(*(char *)((longlong)param_2 + 0xd) == UNK_143025487);
    auVar10[8] = -(*(char *)((longlong)param_2 + 0xe) == UNK_143025488);
    auVar10[9] = -(*(char *)((longlong)param_2 + 0xf) == UNK_143025489);
    auVar10[10] = -((char)param_2[2] == UNK_14302548a);
    auVar10[0xb] = -(*(char *)((longlong)param_2 + 0x11) == UNK_14302548b);
    auVar10[0xc] = -(*(char *)((longlong)param_2 + 0x12) == UNK_14302548c);
    auVar10[0xd] = -(*(char *)((longlong)param_2 + 0x13) == UNK_14302548d);
    auVar10[0xe] = -(*(char *)((longlong)param_2 + 0x14) == UNK_14302548e);
    auVar10[0xf] = -(*(char *)((longlong)param_2 + 0x15) == UNK_14302548f);
    auVar3[0] = -((char)*param_2 == UNK_143025490);
    auVar3[1] = -(*(char *)((longlong)param_2 + 1) == UNK_143025491);
    auVar3[2] = -(*(char *)((longlong)param_2 + 2) == UNK_143025492);
    auVar3[3] = -(*(char *)((longlong)param_2 + 3) == UNK_143025493);
    auVar3[4] = -(*(char *)((longlong)param_2 + 4) == UNK_143025494);
    auVar3[5] = -(*(char *)((longlong)param_2 + 5) == UNK_143025495);
    auVar3[6] = -(*(char *)((longlong)param_2 + 6) == UNK_143025496);
    auVar3[7] = -(*(char *)((longlong)param_2 + 7) == UNK_143025497);
    auVar3[8] = -((char)param_2[1] == UNK_143025498);
    auVar3[9] = -(*(char *)((longlong)param_2 + 9) == UNK_143025499);
    auVar3[10] = -(*(char *)((longlong)param_2 + 10) == UNK_14302549a);
    auVar3[0xb] = -(*(char *)((longlong)param_2 + 0xb) == UNK_14302549b);
    auVar3[0xc] = -(*(char *)((longlong)param_2 + 0xc) == UNK_14302549c);
    auVar3[0xd] = -(*(char *)((longlong)param_2 + 0xd) == UNK_14302549d);
    auVar3[0xe] = -(*(char *)((longlong)param_2 + 0xe) == UNK_14302549e);
    auVar3[0xf] = -(*(char *)((longlong)param_2 + 0xf) == UNK_14302549f);
    auVar3 = auVar3 & auVar10;
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
      *param_1 = 0x1932;
      return param_1;
    }
    break;
  case 0x1b:
    auVar11[0] = -(*(char *)((longlong)param_2 + 0xb) == UNK_143025440);
    auVar11[1] = -(*(char *)((longlong)param_2 + 0xc) == UNK_143025441);
    auVar11[2] = -(*(char *)((longlong)param_2 + 0xd) == UNK_143025442);
    auVar11[3] = -(*(char *)((longlong)param_2 + 0xe) == UNK_143025443);
    auVar11[4] = -(*(char *)((longlong)param_2 + 0xf) == UNK_143025444);
    auVar11[5] = -((char)param_2[2] == UNK_143025445);
    auVar11[6] = -(*(char *)((longlong)param_2 + 0x11) == UNK_143025446);
    auVar11[7] = -(*(char *)((longlong)param_2 + 0x12) == UNK_143025447);
    auVar11[8] = -(*(char *)((longlong)param_2 + 0x13) == UNK_143025448);
    auVar11[9] = -(*(char *)((longlong)param_2 + 0x14) == UNK_143025449);
    auVar11[10] = -(*(char *)((longlong)param_2 + 0x15) == UNK_14302544a);
    auVar11[0xb] = -(*(char *)((longlong)param_2 + 0x16) == UNK_14302544b);
    auVar11[0xc] = -(*(char *)((longlong)param_2 + 0x17) == UNK_14302544c);
    auVar11[0xd] = -((char)param_2[3] == UNK_14302544d);
    auVar11[0xe] = -(*(char *)((longlong)param_2 + 0x19) == UNK_14302544e);
    auVar11[0xf] = -(*(char *)((longlong)param_2 + 0x1a) == UNK_14302544f);
    auVar4[0] = -((char)*param_2 == UNK_143025450);
    auVar4[1] = -(*(char *)((longlong)param_2 + 1) == UNK_143025451);
    auVar4[2] = -(*(char *)((longlong)param_2 + 2) == UNK_143025452);
    auVar4[3] = -(*(char *)((longlong)param_2 + 3) == UNK_143025453);
    auVar4[4] = -(*(char *)((longlong)param_2 + 4) == UNK_143025454);
    auVar4[5] = -(*(char *)((longlong)param_2 + 5) == UNK_143025455);
    auVar4[6] = -(*(char *)((longlong)param_2 + 6) == UNK_143025456);
    auVar4[7] = -(*(char *)((longlong)param_2 + 7) == UNK_143025457);
    auVar4[8] = -((char)param_2[1] == UNK_143025458);
    auVar4[9] = -(*(char *)((longlong)param_2 + 9) == UNK_143025459);
    auVar4[10] = -(*(char *)((longlong)param_2 + 10) == UNK_14302545a);
    auVar4[0xb] = -(*(char *)((longlong)param_2 + 0xb) == UNK_14302545b);
    auVar4[0xc] = -(*(char *)((longlong)param_2 + 0xc) == UNK_14302545c);
    auVar4[0xd] = -(*(char *)((longlong)param_2 + 0xd) == UNK_14302545d);
    auVar4[0xe] = -(*(char *)((longlong)param_2 + 0xe) == UNK_14302545e);
    auVar4[0xf] = -(*(char *)((longlong)param_2 + 0xf) == UNK_14302545f);
    auVar4 = auVar4 & auVar11;
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
      *param_1 = 0x332;
      return param_1;
    }
  }
  pdb_142db7e70();
  return param_1;
}

