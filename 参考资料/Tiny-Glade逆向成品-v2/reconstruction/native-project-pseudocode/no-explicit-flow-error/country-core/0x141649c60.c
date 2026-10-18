// VA 0x141649c60, PDB extent 482 bytes
// country_core::startup::load_textures::_::impl$0::deserialize::impl$0::visit_str<serde_json::error::Error>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/startup/load_textures.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::startup::load_textures::_::impl$0::deserialize::impl$0::visit_str<serde_json::error::Error>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/startup/load_textures.rs
   Extent: 482 */

void pdb_141649c60(undefined1 *param_1,longlong *param_2,undefined8 param_3)

{
  int iVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  
  switch(param_3) {
  case 7:
    if (*(int *)((longlong)param_2 + 3) == 0x31726577 && (int)*param_2 == 0x776f6c66) {
      param_1[1] = 5;
      *param_1 = 0;
      return;
    }
    break;
  case 0xb:
    if (*(longlong *)((longlong)param_2 + 3) == 0x68637461705f7373 && *param_2 == 0x61705f7373617267
       ) {
      param_1[1] = 4;
      *param_1 = 0;
      return;
    }
    break;
  case 0xc:
    if ((int)param_2[1] == 0x726f6c6f && *param_2 == 0x635f79706f6e6163) {
      param_1[1] = 7;
      *param_1 = 0;
      return;
    }
    break;
  case 0xe:
    if (*(longlong *)((longlong)param_2 + 6) == 0x726f6c6f635f6661 && *param_2 == 0x6661656c5f797669
       ) {
      param_1[1] = 0;
      *param_1 = 0;
      return;
    }
    if (*(longlong *)((longlong)param_2 + 6) == 0x7265776f6c665f64 && *param_2 == 0x5f646170796c696c
       ) {
      param_1[1] = 6;
      *param_1 = 0;
      return;
    }
    break;
  case 0xf:
    if (*(longlong *)((longlong)param_2 + 7) == 0x657275747865745f && *param_2 == 0x5f6e696172726574
       ) {
      param_1[1] = 3;
      *param_1 = 0;
      return;
    }
    break;
  case 0x10:
    auVar2[0] = -((char)*param_2 == UNK_143321440);
    auVar2[1] = -(*(char *)((longlong)param_2 + 1) == UNK_143321441);
    auVar2[2] = -(*(char *)((longlong)param_2 + 2) == UNK_143321442);
    auVar2[3] = -(*(char *)((longlong)param_2 + 3) == UNK_143321443);
    auVar2[4] = -(*(char *)((longlong)param_2 + 4) == UNK_143321444);
    auVar2[5] = -(*(char *)((longlong)param_2 + 5) == UNK_143321445);
    auVar2[6] = -(*(char *)((longlong)param_2 + 6) == UNK_143321446);
    auVar2[7] = -(*(char *)((longlong)param_2 + 7) == UNK_143321447);
    auVar2[8] = -((char)param_2[1] == UNK_143321448);
    auVar2[9] = -(*(char *)((longlong)param_2 + 9) == UNK_143321449);
    auVar2[10] = -(*(char *)((longlong)param_2 + 10) == UNK_14332144a);
    auVar2[0xb] = -(*(char *)((longlong)param_2 + 0xb) == UNK_14332144b);
    auVar2[0xc] = -(*(char *)((longlong)param_2 + 0xc) == UNK_14332144c);
    auVar2[0xd] = -(*(char *)((longlong)param_2 + 0xd) == UNK_14332144d);
    auVar2[0xe] = -(*(char *)((longlong)param_2 + 0xe) == UNK_14332144e);
    auVar2[0xf] = -(*(char *)((longlong)param_2 + 0xf) == UNK_14332144f);
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
      param_1[1] = 8;
      *param_1 = 0;
      return;
    }
    break;
  case 0x14:
    iVar1 = (int)param_2[2];
    auVar6[0] = -((char)iVar1 == UNK_143321450);
    auVar6[1] = -((char)((uint)iVar1 >> 8) == UNK_143321451);
    auVar6[2] = -((char)((uint)iVar1 >> 0x10) == UNK_143321452);
    auVar6[3] = -((char)((uint)iVar1 >> 0x18) == UNK_143321453);
    auVar6[4] = -(UNK_143321454 == '\0');
    auVar6[5] = -(UNK_143321455 == '\0');
    auVar6[6] = -(UNK_143321456 == '\0');
    auVar6[7] = -(UNK_143321457 == '\0');
    auVar6[8] = -(UNK_143321458 == '\0');
    auVar6[9] = -(UNK_143321459 == '\0');
    auVar6[10] = -(UNK_14332145a == '\0');
    auVar6[0xb] = -(UNK_14332145b == '\0');
    auVar6[0xc] = -(UNK_14332145c == '\0');
    auVar6[0xd] = -(UNK_14332145d == '\0');
    auVar6[0xe] = -(UNK_14332145e == '\0');
    auVar6[0xf] = -(UNK_14332145f == '\0');
    auVar3[0] = -((char)*param_2 == UNK_143321460);
    auVar3[1] = -(*(char *)((longlong)param_2 + 1) == UNK_143321461);
    auVar3[2] = -(*(char *)((longlong)param_2 + 2) == UNK_143321462);
    auVar3[3] = -(*(char *)((longlong)param_2 + 3) == UNK_143321463);
    auVar3[4] = -(*(char *)((longlong)param_2 + 4) == UNK_143321464);
    auVar3[5] = -(*(char *)((longlong)param_2 + 5) == UNK_143321465);
    auVar3[6] = -(*(char *)((longlong)param_2 + 6) == UNK_143321466);
    auVar3[7] = -(*(char *)((longlong)param_2 + 7) == UNK_143321467);
    auVar3[8] = -((char)param_2[1] == UNK_143321468);
    auVar3[9] = -(*(char *)((longlong)param_2 + 9) == UNK_143321469);
    auVar3[10] = -(*(char *)((longlong)param_2 + 10) == UNK_14332146a);
    auVar3[0xb] = -(*(char *)((longlong)param_2 + 0xb) == UNK_14332146b);
    auVar3[0xc] = -(*(char *)((longlong)param_2 + 0xc) == UNK_14332146c);
    auVar3[0xd] = -(*(char *)((longlong)param_2 + 0xd) == UNK_14332146d);
    auVar3[0xe] = -(*(char *)((longlong)param_2 + 0xe) == UNK_14332146e);
    auVar3[0xf] = -(*(char *)((longlong)param_2 + 0xf) == UNK_14332146f);
    auVar3 = auVar3 & auVar6;
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
      param_1[1] = 1;
      *param_1 = 0;
      return;
    }
    iVar1 = (int)param_2[2];
    auVar7[0] = -((char)iVar1 == UNK_143321470);
    auVar7[1] = -((char)((uint)iVar1 >> 8) == UNK_143321471);
    auVar7[2] = -((char)((uint)iVar1 >> 0x10) == UNK_143321472);
    auVar7[3] = -((char)((uint)iVar1 >> 0x18) == UNK_143321473);
    auVar7[4] = -(UNK_143321474 == '\0');
    auVar7[5] = -(UNK_143321475 == '\0');
    auVar7[6] = -(UNK_143321476 == '\0');
    auVar7[7] = -(UNK_143321477 == '\0');
    auVar7[8] = -(UNK_143321478 == '\0');
    auVar7[9] = -(UNK_143321479 == '\0');
    auVar7[10] = -(UNK_14332147a == '\0');
    auVar7[0xb] = -(UNK_14332147b == '\0');
    auVar7[0xc] = -(UNK_14332147c == '\0');
    auVar7[0xd] = -(UNK_14332147d == '\0');
    auVar7[0xe] = -(UNK_14332147e == '\0');
    auVar7[0xf] = -(UNK_14332147f == '\0');
    auVar4[0] = -((char)*param_2 == UNK_143321480);
    auVar4[1] = -(*(char *)((longlong)param_2 + 1) == UNK_143321481);
    auVar4[2] = -(*(char *)((longlong)param_2 + 2) == UNK_143321482);
    auVar4[3] = -(*(char *)((longlong)param_2 + 3) == UNK_143321483);
    auVar4[4] = -(*(char *)((longlong)param_2 + 4) == UNK_143321484);
    auVar4[5] = -(*(char *)((longlong)param_2 + 5) == UNK_143321485);
    auVar4[6] = -(*(char *)((longlong)param_2 + 6) == UNK_143321486);
    auVar4[7] = -(*(char *)((longlong)param_2 + 7) == UNK_143321487);
    auVar4[8] = -((char)param_2[1] == UNK_143321488);
    auVar4[9] = -(*(char *)((longlong)param_2 + 9) == UNK_143321489);
    auVar4[10] = -(*(char *)((longlong)param_2 + 10) == UNK_14332148a);
    auVar4[0xb] = -(*(char *)((longlong)param_2 + 0xb) == UNK_14332148b);
    auVar4[0xc] = -(*(char *)((longlong)param_2 + 0xc) == UNK_14332148c);
    auVar4[0xd] = -(*(char *)((longlong)param_2 + 0xd) == UNK_14332148d);
    auVar4[0xe] = -(*(char *)((longlong)param_2 + 0xe) == UNK_14332148e);
    auVar4[0xf] = -(*(char *)((longlong)param_2 + 0xf) == UNK_14332148f);
    auVar4 = auVar4 & auVar7;
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
      param_1[1] = 2;
      *param_1 = 0;
      return;
    }
    break;
  case 0x17:
    auVar8[0] = -(*(char *)((longlong)param_2 + 7) == UNK_143321420);
    auVar8[1] = -((char)param_2[1] == UNK_143321421);
    auVar8[2] = -(*(char *)((longlong)param_2 + 9) == UNK_143321422);
    auVar8[3] = -(*(char *)((longlong)param_2 + 10) == UNK_143321423);
    auVar8[4] = -(*(char *)((longlong)param_2 + 0xb) == UNK_143321424);
    auVar8[5] = -(*(char *)((longlong)param_2 + 0xc) == UNK_143321425);
    auVar8[6] = -(*(char *)((longlong)param_2 + 0xd) == UNK_143321426);
    auVar8[7] = -(*(char *)((longlong)param_2 + 0xe) == UNK_143321427);
    auVar8[8] = -(*(char *)((longlong)param_2 + 0xf) == UNK_143321428);
    auVar8[9] = -((char)param_2[2] == UNK_143321429);
    auVar8[10] = -(*(char *)((longlong)param_2 + 0x11) == UNK_14332142a);
    auVar8[0xb] = -(*(char *)((longlong)param_2 + 0x12) == UNK_14332142b);
    auVar8[0xc] = -(*(char *)((longlong)param_2 + 0x13) == UNK_14332142c);
    auVar8[0xd] = -(*(char *)((longlong)param_2 + 0x14) == UNK_14332142d);
    auVar8[0xe] = -(*(char *)((longlong)param_2 + 0x15) == UNK_14332142e);
    auVar8[0xf] = -(*(char *)((longlong)param_2 + 0x16) == UNK_14332142f);
    auVar5[0] = -((char)*param_2 == UNK_143321430);
    auVar5[1] = -(*(char *)((longlong)param_2 + 1) == UNK_143321431);
    auVar5[2] = -(*(char *)((longlong)param_2 + 2) == UNK_143321432);
    auVar5[3] = -(*(char *)((longlong)param_2 + 3) == UNK_143321433);
    auVar5[4] = -(*(char *)((longlong)param_2 + 4) == UNK_143321434);
    auVar5[5] = -(*(char *)((longlong)param_2 + 5) == UNK_143321435);
    auVar5[6] = -(*(char *)((longlong)param_2 + 6) == UNK_143321436);
    auVar5[7] = -(*(char *)((longlong)param_2 + 7) == UNK_143321437);
    auVar5[8] = -((char)param_2[1] == UNK_143321438);
    auVar5[9] = -(*(char *)((longlong)param_2 + 9) == UNK_143321439);
    auVar5[10] = -(*(char *)((longlong)param_2 + 10) == UNK_14332143a);
    auVar5[0xb] = -(*(char *)((longlong)param_2 + 0xb) == UNK_14332143b);
    auVar5[0xc] = -(*(char *)((longlong)param_2 + 0xc) == UNK_14332143c);
    auVar5[0xd] = -(*(char *)((longlong)param_2 + 0xd) == UNK_14332143d);
    auVar5[0xe] = -(*(char *)((longlong)param_2 + 0xe) == UNK_14332143e);
    auVar5[0xf] = -(*(char *)((longlong)param_2 + 0xf) == UNK_14332143f);
    auVar5 = auVar5 & auVar8;
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
      param_1[1] = 9;
      *param_1 = 0;
      return;
    }
  }
  param_1[1] = 10;
  *param_1 = 0;
  return;
}

