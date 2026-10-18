// VA 0x141adb950, PDB extent 726 bytes
// country_core::resources::walls::inner_wall_state::_::impl$0::deserialize::impl$0::visit_str<serde_json::error::Error>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/walls/inner_wall_state.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::resources::walls::inner_wall_state::_::impl$0::deserialize::impl$0::visit_str<serde_json::error::Error>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/walls/inner_wall_state.rs
   Extent: 726 */

void pdb_141adb950(undefined1 *param_1,longlong *param_2,undefined8 param_3)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  
  switch(param_3) {
  case 5:
    if (*(char *)((longlong)param_2 + 4) == 'e' && (int)*param_2 == 0x76727563) {
      param_1[1] = 0;
      *param_1 = 0;
      return;
    }
    if (*(char *)((longlong)param_2 + 4) == 'e' && (int)*param_2 == 0x6c797473) {
      param_1[1] = 6;
      *param_1 = 0;
      return;
    }
    break;
  case 6:
    if (*(short *)((longlong)param_2 + 4) == 0x7468 && (int)*param_2 == 0x67696568) {
      param_1[1] = 1;
      *param_1 = 0;
      return;
    }
    break;
  case 7:
    if (*(int *)((longlong)param_2 + 3) == 0x79745f68 && (int)*param_2 == 0x68637261) {
      param_1[1] = 5;
      *param_1 = 0;
      return;
    }
    break;
  case 8:
    if (*param_2 == 0x6c6169726574616d) {
      param_1[1] = 7;
      *param_1 = 0;
      return;
    }
    break;
  case 9:
    if ((char)param_2[1] == 'n' && *param_2 == 0x6f69746176656c65) {
      param_1[1] = 3;
      *param_1 = 0;
      return;
    }
    break;
  case 10:
    if ((short)param_2[1] == 0x7374 && *param_2 == 0x72696b735f736168) {
      param_1[1] = 6;
      *param_1 = 0;
      return;
    }
    break;
  case 0xb:
    if (*(longlong *)((longlong)param_2 + 3) == 0x6465736f6c636e65 && *param_2 == 0x6f6c636e655f7369
       ) {
code_r0x000141adbbf0:
      param_1[1] = 2;
      *param_1 = 0;
      return;
    }
    if (*(longlong *)((longlong)param_2 + 3) == 0x7468676965685f68 && *param_2 == 0x6965685f68637261
       ) {
      param_1[1] = 4;
      *param_1 = 0;
      return;
    }
    if (*(longlong *)((longlong)param_2 + 3) == 0x79745f646e616865 && *param_2 == 0x646e616865657266
       ) {
      param_1[1] = 10;
      *param_1 = 0;
      return;
    }
    break;
  case 0xc:
    if ((int)param_2[1] == 0x79745f65 && *param_2 == 0x7275746375727473) {
      param_1[1] = 8;
      *param_1 = 0;
      return;
    }
    if ((int)param_2[1] == 0x6c656570 && *param_2 == 0x5f72657473616c70) {
      param_1[1] = 0xb;
      *param_1 = 0;
      return;
    }
    if ((int)param_2[1] == 0x74756f79 && *param_2 == 0x616c5f6472616f62) {
      param_1[1] = 0xc;
      *param_1 = 0;
      return;
    }
    break;
  case 0xf:
    if (*(longlong *)((longlong)param_2 + 7) == 0x6e6f69737265765f && *param_2 == 0x5f72657474756c63
       ) {
      param_1[1] = 9;
      *param_1 = 0;
      return;
    }
    break;
  case 0x10:
    auVar3[0] = -((char)*param_2 == UNK_14335a400);
    auVar3[1] = -(*(char *)((longlong)param_2 + 1) == UNK_14335a401);
    auVar3[2] = -(*(char *)((longlong)param_2 + 2) == UNK_14335a402);
    auVar3[3] = -(*(char *)((longlong)param_2 + 3) == UNK_14335a403);
    auVar3[4] = -(*(char *)((longlong)param_2 + 4) == UNK_14335a404);
    auVar3[5] = -(*(char *)((longlong)param_2 + 5) == UNK_14335a405);
    auVar3[6] = -(*(char *)((longlong)param_2 + 6) == UNK_14335a406);
    auVar3[7] = -(*(char *)((longlong)param_2 + 7) == UNK_14335a407);
    auVar3[8] = -((char)param_2[1] == UNK_14335a408);
    auVar3[9] = -(*(char *)((longlong)param_2 + 9) == UNK_14335a409);
    auVar3[10] = -(*(char *)((longlong)param_2 + 10) == UNK_14335a40a);
    auVar3[0xb] = -(*(char *)((longlong)param_2 + 0xb) == UNK_14335a40b);
    auVar3[0xc] = -(*(char *)((longlong)param_2 + 0xc) == UNK_14335a40c);
    auVar3[0xd] = -(*(char *)((longlong)param_2 + 0xd) == UNK_14335a40d);
    auVar3[0xe] = -(*(char *)((longlong)param_2 + 0xe) == UNK_14335a40e);
    auVar3[0xf] = -(*(char *)((longlong)param_2 + 0xf) == UNK_14335a40f);
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
                 (ushort)(SUB161(auVar3 >> 0x77,0) & 1) << 0xe | (ushort)(auVar3[0xf] >> 7) << 0xf)
        == 0xffff) {
      param_1[1] = 0xd;
      *param_1 = 0;
      return;
    }
    break;
  case 0x12:
    auVar1[0] = -((char)*param_2 == UNK_1433883b0);
    auVar1[1] = -(*(char *)((longlong)param_2 + 1) == UNK_1433883b1);
    auVar1[2] = -(*(char *)((longlong)param_2 + 2) == UNK_1433883b2);
    auVar1[3] = -(*(char *)((longlong)param_2 + 3) == UNK_1433883b3);
    auVar1[4] = -(*(char *)((longlong)param_2 + 4) == UNK_1433883b4);
    auVar1[5] = -(*(char *)((longlong)param_2 + 5) == UNK_1433883b5);
    auVar1[6] = -(*(char *)((longlong)param_2 + 6) == UNK_1433883b6);
    auVar1[7] = -(*(char *)((longlong)param_2 + 7) == UNK_1433883b7);
    auVar1[8] = -((char)param_2[1] == UNK_1433883b8);
    auVar1[9] = -(*(char *)((longlong)param_2 + 9) == UNK_1433883b9);
    auVar1[10] = -(*(char *)((longlong)param_2 + 10) == UNK_1433883ba);
    auVar1[0xb] = -(*(char *)((longlong)param_2 + 0xb) == UNK_1433883bb);
    auVar1[0xc] = -(*(char *)((longlong)param_2 + 0xc) == UNK_1433883bc);
    auVar1[0xd] = -(*(char *)((longlong)param_2 + 0xd) == UNK_1433883bd);
    auVar1[0xe] = -(*(char *)((longlong)param_2 + 0xe) == UNK_1433883be);
    auVar1[0xf] = -(*(char *)((longlong)param_2 + 0xf) == UNK_1433883bf);
    auVar4[0] = -((char)(short)param_2[2] == UNK_1433883c0);
    auVar4[1] = -((char)((ushort)(short)param_2[2] >> 8) == UNK_1433883c1);
    auVar4[2] = -(UNK_1433883c2 == '\0');
    auVar4[3] = -(UNK_1433883c3 == '\0');
    auVar4[4] = -(UNK_1433883c4 == '\0');
    auVar4[5] = -(UNK_1433883c5 == '\0');
    auVar4[6] = -(UNK_1433883c6 == '\0');
    auVar4[7] = -(UNK_1433883c7 == '\0');
    auVar4[8] = -(UNK_1433883c8 == '\0');
    auVar4[9] = -(UNK_1433883c9 == '\0');
    auVar4[10] = -(UNK_1433883ca == '\0');
    auVar4[0xb] = -(UNK_1433883cb == '\0');
    auVar4[0xc] = -(UNK_1433883cc == '\0');
    auVar4[0xd] = -(UNK_1433883cd == '\0');
    auVar4[0xe] = -(UNK_1433883ce == '\0');
    auVar4[0xf] = -(UNK_1433883cf == '\0');
    auVar4 = auVar4 & auVar1;
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
                (ushort)(byte)(auVar4[0xf] >> 7) << 0xf) == 0xffff) goto code_r0x000141adbbf0;
    break;
  case 0x17:
    auVar5[0] = -(*(char *)((longlong)param_2 + 7) == UNK_1433883a0);
    auVar5[1] = -((char)param_2[1] == UNK_1433883a1);
    auVar5[2] = -(*(char *)((longlong)param_2 + 9) == UNK_1433883a2);
    auVar5[3] = -(*(char *)((longlong)param_2 + 10) == UNK_1433883a3);
    auVar5[4] = -(*(char *)((longlong)param_2 + 0xb) == UNK_1433883a4);
    auVar5[5] = -(*(char *)((longlong)param_2 + 0xc) == UNK_1433883a5);
    auVar5[6] = -(*(char *)((longlong)param_2 + 0xd) == UNK_1433883a6);
    auVar5[7] = -(*(char *)((longlong)param_2 + 0xe) == UNK_1433883a7);
    auVar5[8] = -(*(char *)((longlong)param_2 + 0xf) == UNK_1433883a8);
    auVar5[9] = -((char)param_2[2] == UNK_1433883a9);
    auVar5[10] = -(*(char *)((longlong)param_2 + 0x11) == UNK_1433883aa);
    auVar5[0xb] = -(*(char *)((longlong)param_2 + 0x12) == UNK_1433883ab);
    auVar5[0xc] = -(*(char *)((longlong)param_2 + 0x13) == UNK_1433883ac);
    auVar5[0xd] = -(*(char *)((longlong)param_2 + 0x14) == UNK_1433883ad);
    auVar5[0xe] = -(*(char *)((longlong)param_2 + 0x15) == UNK_1433883ae);
    auVar5[0xf] = -(*(char *)((longlong)param_2 + 0x16) == UNK_1433883af);
    auVar2[0] = -((char)*param_2 == UNK_143062230);
    auVar2[1] = -(*(char *)((longlong)param_2 + 1) == UNK_143062231);
    auVar2[2] = -(*(char *)((longlong)param_2 + 2) == UNK_143062232);
    auVar2[3] = -(*(char *)((longlong)param_2 + 3) == UNK_143062233);
    auVar2[4] = -(*(char *)((longlong)param_2 + 4) == UNK_143062234);
    auVar2[5] = -(*(char *)((longlong)param_2 + 5) == UNK_143062235);
    auVar2[6] = -(*(char *)((longlong)param_2 + 6) == UNK_143062236);
    auVar2[7] = -(*(char *)((longlong)param_2 + 7) == UNK_143062237);
    auVar2[8] = -((char)param_2[1] == UNK_143062238);
    auVar2[9] = -(*(char *)((longlong)param_2 + 9) == UNK_143062239);
    auVar2[10] = -(*(char *)((longlong)param_2 + 10) == UNK_14306223a);
    auVar2[0xb] = -(*(char *)((longlong)param_2 + 0xb) == UNK_14306223b);
    auVar2[0xc] = -(*(char *)((longlong)param_2 + 0xc) == UNK_14306223c);
    auVar2[0xd] = -(*(char *)((longlong)param_2 + 0xd) == UNK_14306223d);
    auVar2[0xe] = -(*(char *)((longlong)param_2 + 0xe) == UNK_14306223e);
    auVar2[0xf] = -(*(char *)((longlong)param_2 + 0xf) == UNK_14306223f);
    auVar2 = auVar2 & auVar5;
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
      param_1[1] = 0xe;
      *param_1 = 0;
      return;
    }
  }
  param_1[1] = 0xf;
  *param_1 = 0;
  return;
}

