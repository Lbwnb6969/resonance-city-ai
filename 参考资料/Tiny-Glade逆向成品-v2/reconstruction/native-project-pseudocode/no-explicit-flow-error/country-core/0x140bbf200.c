// VA 0x140bbf200, PDB extent 785 bytes
// country_core::resources::history::decorator_edit::_::impl$0::deserialize::impl$0::visit_str<serde_json::error::Error>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/history/decorator_edit.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::resources::history::decorator_edit::_::impl$0::deserialize::impl$0::visit_str<serde_json::error::Error>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/history/decorator_edit.rs
   Extent: 785 */

void pdb_140bbf200(undefined1 *param_1,longlong *param_2,undefined8 param_3)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  
  switch(param_3) {
  case 2:
    if ((short)*param_2 == 0x7974) {
      param_1[1] = 1;
      *param_1 = 0;
      return;
    }
    break;
  case 3:
    if (*(char *)((longlong)param_2 + 2) == 't' && (short)*param_2 == 0x7364) {
      param_1[1] = 0;
      *param_1 = 0;
      return;
    }
    if (*(char *)((longlong)param_2 + 2) == 'v' && (short)*param_2 == 0x6c63) {
      param_1[1] = 5;
      *param_1 = 0;
      return;
    }
    break;
  case 4:
    if ((int)*param_2 == 0x6b6e6172) {
      param_1[1] = 2;
      *param_1 = 0;
      return;
    }
    if ((int)*param_2 == 0x64656573) {
      param_1[1] = 4;
      *param_1 = 0;
      return;
    }
    break;
  case 7:
    if (*(int *)((longlong)param_2 + 3) == 0x676e696c && (int)*param_2 == 0x6c696172) {
      param_1[1] = 0xe;
      *param_1 = 0;
      return;
    }
    break;
  case 8:
    if (*param_2 == 0x64695f726f6c6f63) {
      param_1[1] = 3;
      *param_1 = 0;
      return;
    }
    if (*param_2 == 0x74657366666f5f68) {
code_r0x000140bbf4c9:
      param_1[1] = 6;
      *param_1 = 0;
      return;
    }
    break;
  case 9:
    if ((char)param_2[1] == 'd' && *param_2 == 0x65666f6f725f7369) {
      param_1[1] = 0xf;
      *param_1 = 0;
      return;
    }
    break;
  case 0xb:
    if (*(longlong *)((longlong)param_2 + 3) == 0x68746469775f7269 && *param_2 == 0x69775f7269617473
       ) {
      param_1[1] = 0xb;
      *param_1 = 0;
      return;
    }
    if (*(longlong *)((longlong)param_2 + 3) == 0x726f6c6f635f6369 && *param_2 == 0x6f635f636967616d
       ) {
      param_1[1] = 0x11;
      *param_1 = 0;
      return;
    }
    break;
  case 0xc:
    if ((int)param_2[1] == 0x726f6c6f && *param_2 == 0x635f72656464616c) {
      param_1[1] = 0xc;
      *param_1 = 0;
      return;
    }
    break;
  case 0xd:
    if (*(longlong *)((longlong)param_2 + 5) == 0x656b6f6d735f7965 && *param_2 == 0x5f79656e6d696863
       ) {
      param_1[1] = 10;
      *param_1 = 0;
      return;
    }
    if (*(longlong *)((longlong)param_2 + 5) == 0x64695f726f6c6f63 && *param_2 == 0x6c6f635f646f6f77
       ) {
      param_1[1] = 0xd;
      *param_1 = 0;
      return;
    }
    break;
  case 0xe:
    if (*(longlong *)((longlong)param_2 + 6) == 0x6c6169726574616d && *param_2 == 0x616d5f7269617473
       ) {
      param_1[1] = 0x12;
      *param_1 = 0;
      return;
    }
    break;
  case 0xf:
    if (*(longlong *)((longlong)param_2 + 7) == 0x7374726f70707573 && *param_2 == 0x735f737269617473
       ) {
      param_1[1] = 0x10;
      *param_1 = 0;
      return;
    }
    break;
  case 0x10:
    auVar3[0] = -((char)*param_2 == UNK_1430621d0);
    auVar3[1] = -(*(char *)((longlong)param_2 + 1) == UNK_1430621d1);
    auVar3[2] = -(*(char *)((longlong)param_2 + 2) == UNK_1430621d2);
    auVar3[3] = -(*(char *)((longlong)param_2 + 3) == UNK_1430621d3);
    auVar3[4] = -(*(char *)((longlong)param_2 + 4) == UNK_1430621d4);
    auVar3[5] = -(*(char *)((longlong)param_2 + 5) == UNK_1430621d5);
    auVar3[6] = -(*(char *)((longlong)param_2 + 6) == UNK_1430621d6);
    auVar3[7] = -(*(char *)((longlong)param_2 + 7) == UNK_1430621d7);
    auVar3[8] = -((char)param_2[1] == UNK_1430621d8);
    auVar3[9] = -(*(char *)((longlong)param_2 + 9) == UNK_1430621d9);
    auVar3[10] = -(*(char *)((longlong)param_2 + 10) == UNK_1430621da);
    auVar3[0xb] = -(*(char *)((longlong)param_2 + 0xb) == UNK_1430621db);
    auVar3[0xc] = -(*(char *)((longlong)param_2 + 0xc) == UNK_1430621dc);
    auVar3[0xd] = -(*(char *)((longlong)param_2 + 0xd) == UNK_1430621dd);
    auVar3[0xe] = -(*(char *)((longlong)param_2 + 0xe) == UNK_1430621de);
    auVar3[0xf] = -(*(char *)((longlong)param_2 + 0xf) == UNK_1430621df);
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
        == 0xffff) goto code_r0x000140bbf4c9;
    auVar4[0] = -((char)*param_2 == UNK_1430621e0);
    auVar4[1] = -(*(char *)((longlong)param_2 + 1) == UNK_1430621e1);
    auVar4[2] = -(*(char *)((longlong)param_2 + 2) == UNK_1430621e2);
    auVar4[3] = -(*(char *)((longlong)param_2 + 3) == UNK_1430621e3);
    auVar4[4] = -(*(char *)((longlong)param_2 + 4) == UNK_1430621e4);
    auVar4[5] = -(*(char *)((longlong)param_2 + 5) == UNK_1430621e5);
    auVar4[6] = -(*(char *)((longlong)param_2 + 6) == UNK_1430621e6);
    auVar4[7] = -(*(char *)((longlong)param_2 + 7) == UNK_1430621e7);
    auVar4[8] = -((char)param_2[1] == UNK_1430621e8);
    auVar4[9] = -(*(char *)((longlong)param_2 + 9) == UNK_1430621e9);
    auVar4[10] = -(*(char *)((longlong)param_2 + 10) == UNK_1430621ea);
    auVar4[0xb] = -(*(char *)((longlong)param_2 + 0xb) == UNK_1430621eb);
    auVar4[0xc] = -(*(char *)((longlong)param_2 + 0xc) == UNK_1430621ec);
    auVar4[0xd] = -(*(char *)((longlong)param_2 + 0xd) == UNK_1430621ed);
    auVar4[0xe] = -(*(char *)((longlong)param_2 + 0xe) == UNK_1430621ee);
    auVar4[0xf] = -(*(char *)((longlong)param_2 + 0xf) == UNK_1430621ef);
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
                 (ushort)(SUB161(auVar4 >> 0x77,0) & 1) << 0xe | (ushort)(auVar4[0xf] >> 7) << 0xf)
        == 0xffff) {
      param_1[1] = 7;
      *param_1 = 0;
      return;
    }
    break;
  case 0x12:
    auVar1[0] = -((char)*param_2 == UNK_1430621a0);
    auVar1[1] = -(*(char *)((longlong)param_2 + 1) == UNK_1430621a1);
    auVar1[2] = -(*(char *)((longlong)param_2 + 2) == UNK_1430621a2);
    auVar1[3] = -(*(char *)((longlong)param_2 + 3) == UNK_1430621a3);
    auVar1[4] = -(*(char *)((longlong)param_2 + 4) == UNK_1430621a4);
    auVar1[5] = -(*(char *)((longlong)param_2 + 5) == UNK_1430621a5);
    auVar1[6] = -(*(char *)((longlong)param_2 + 6) == UNK_1430621a6);
    auVar1[7] = -(*(char *)((longlong)param_2 + 7) == UNK_1430621a7);
    auVar1[8] = -((char)param_2[1] == UNK_1430621a8);
    auVar1[9] = -(*(char *)((longlong)param_2 + 9) == UNK_1430621a9);
    auVar1[10] = -(*(char *)((longlong)param_2 + 10) == UNK_1430621aa);
    auVar1[0xb] = -(*(char *)((longlong)param_2 + 0xb) == UNK_1430621ab);
    auVar1[0xc] = -(*(char *)((longlong)param_2 + 0xc) == UNK_1430621ac);
    auVar1[0xd] = -(*(char *)((longlong)param_2 + 0xd) == UNK_1430621ad);
    auVar1[0xe] = -(*(char *)((longlong)param_2 + 0xe) == UNK_1430621ae);
    auVar1[0xf] = -(*(char *)((longlong)param_2 + 0xf) == UNK_1430621af);
    auVar5[0] = -((char)(short)param_2[2] == UNK_1430621b0);
    auVar5[1] = -((char)((ushort)(short)param_2[2] >> 8) == UNK_1430621b1);
    auVar5[2] = -(UNK_1430621b2 == '\0');
    auVar5[3] = -(UNK_1430621b3 == '\0');
    auVar5[4] = -(UNK_1430621b4 == '\0');
    auVar5[5] = -(UNK_1430621b5 == '\0');
    auVar5[6] = -(UNK_1430621b6 == '\0');
    auVar5[7] = -(UNK_1430621b7 == '\0');
    auVar5[8] = -(UNK_1430621b8 == '\0');
    auVar5[9] = -(UNK_1430621b9 == '\0');
    auVar5[10] = -(UNK_1430621ba == '\0');
    auVar5[0xb] = -(UNK_1430621bb == '\0');
    auVar5[0xc] = -(UNK_1430621bc == '\0');
    auVar5[0xd] = -(UNK_1430621bd == '\0');
    auVar5[0xe] = -(UNK_1430621be == '\0');
    auVar5[0xf] = -(UNK_1430621bf == '\0');
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
      param_1[1] = 8;
      *param_1 = 0;
      return;
    }
    auVar2[0] = -((char)*param_2 == UNK_1430621c0);
    auVar2[1] = -(*(char *)((longlong)param_2 + 1) == UNK_1430621c1);
    auVar2[2] = -(*(char *)((longlong)param_2 + 2) == UNK_1430621c2);
    auVar2[3] = -(*(char *)((longlong)param_2 + 3) == UNK_1430621c3);
    auVar2[4] = -(*(char *)((longlong)param_2 + 4) == UNK_1430621c4);
    auVar2[5] = -(*(char *)((longlong)param_2 + 5) == UNK_1430621c5);
    auVar2[6] = -(*(char *)((longlong)param_2 + 6) == UNK_1430621c6);
    auVar2[7] = -(*(char *)((longlong)param_2 + 7) == UNK_1430621c7);
    auVar2[8] = -((char)param_2[1] == UNK_1430621c8);
    auVar2[9] = -(*(char *)((longlong)param_2 + 9) == UNK_1430621c9);
    auVar2[10] = -(*(char *)((longlong)param_2 + 10) == UNK_1430621ca);
    auVar2[0xb] = -(*(char *)((longlong)param_2 + 0xb) == UNK_1430621cb);
    auVar2[0xc] = -(*(char *)((longlong)param_2 + 0xc) == UNK_1430621cc);
    auVar2[0xd] = -(*(char *)((longlong)param_2 + 0xd) == UNK_1430621cd);
    auVar2[0xe] = -(*(char *)((longlong)param_2 + 0xe) == UNK_1430621ce);
    auVar2[0xf] = -(*(char *)((longlong)param_2 + 0xf) == UNK_1430621cf);
    auVar6[0] = -((char)(short)param_2[2] == UNK_14304c950);
    auVar6[1] = -((char)((ushort)(short)param_2[2] >> 8) == UNK_14304c951);
    auVar6[2] = -(UNK_14304c952 == '\0');
    auVar6[3] = -(UNK_14304c953 == '\0');
    auVar6[4] = -(UNK_14304c954 == '\0');
    auVar6[5] = -(UNK_14304c955 == '\0');
    auVar6[6] = -(UNK_14304c956 == '\0');
    auVar6[7] = -(UNK_14304c957 == '\0');
    auVar6[8] = -(UNK_14304c958 == '\0');
    auVar6[9] = -(UNK_14304c959 == '\0');
    auVar6[10] = -(UNK_14304c95a == '\0');
    auVar6[0xb] = -(UNK_14304c95b == '\0');
    auVar6[0xc] = -(UNK_14304c95c == '\0');
    auVar6[0xd] = -(UNK_14304c95d == '\0');
    auVar6[0xe] = -(UNK_14304c95e == '\0');
    auVar6[0xf] = -(UNK_14304c95f == '\0');
    auVar6 = auVar6 & auVar2;
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
      param_1[1] = 9;
      *param_1 = 0;
      return;
    }
  }
  param_1[1] = 0x13;
  *param_1 = 0;
  return;
}

