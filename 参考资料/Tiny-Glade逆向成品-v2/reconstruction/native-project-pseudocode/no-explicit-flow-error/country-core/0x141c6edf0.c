// VA 0x141c6edf0, PDB extent 893 bytes
// country_core::resources::toolbar::_::impl$0::deserialize::impl$0::visit_str<serde_json::error::Error>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/toolbar.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::resources::toolbar::_::impl$0::deserialize::impl$0::visit_str<serde_json::error::Error>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/toolbar.rs
   Extent: 893 */

void pdb_141c6edf0(undefined1 *param_1,longlong *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  
  switch(param_3) {
  case 4:
    if ((int)*param_2 == 0x68746150) {
      param_1[1] = 1;
    }
    else {
      if ((int)*param_2 != 0x65657254) goto LAB_141c6f0fd;
      param_1[1] = 5;
    }
    break;
  case 5:
    if (*(char *)((longlong)param_2 + 4) != 'r' || (int)*param_2 != 0x65746157) goto LAB_141c6f0fd;
    param_1[1] = 8;
    break;
  case 6:
    if (*(short *)((longlong)param_2 + 4) == 0x7265 && (int)*param_2 == 0x73617245) {
      param_1[1] = 4;
    }
    else {
      if (*(short *)((longlong)param_2 + 4) != 0x6e65 || (int)*param_2 != 0x64726147)
      goto LAB_141c6f0fd;
      param_1[1] = 9;
    }
    break;
  case 7:
    if (*(int *)((longlong)param_2 + 3) == 0x6e696172 && (int)*param_2 == 0x72726554) {
      param_1[1] = 6;
    }
    else {
      if (*(int *)((longlong)param_2 + 3) != 0x676e6974 || (int)*param_2 != 0x74696445)
      goto LAB_141c6f0fd;
      param_1[1] = 7;
    }
    break;
  case 8:
    if (*param_2 != 0x676e69646c697542) goto LAB_141c6f0fd;
    param_1[1] = 0;
    break;
  case 9:
    if ((char)param_2[1] == 'e' && *param_2 == 0x646f6d6f746f6850) {
      param_1[1] = 10;
    }
    else {
      if ((char)param_2[1] != 'y' || *param_2 != 0x6144664f656d6954) goto LAB_141c6f0fd;
      param_1[1] = 0xb;
    }
    break;
  case 10:
    if ((short)param_2[1] != 0x7372 || *param_2 != 0x6f7461726f636544) goto LAB_141c6f0fd;
    param_1[1] = 2;
    break;
  default:
LAB_141c6f0fd:
    uVar1 = pdb_142d8f140(param_2,param_3,&UNK_1433a3728,0x16);
    *(undefined8 *)(param_1 + 8) = uVar1;
    *param_1 = 1;
    return;
  case 0xc:
    if ((int)param_2[1] == 0x766f4665 && *param_2 == 0x646f6d6f746f6850) {
      param_1[1] = 0xe;
    }
    else {
      if ((int)param_2[1] != 0x666f4465 || *param_2 != 0x646f6d6f746f6850) goto LAB_141c6f0fd;
      param_1[1] = 0x10;
    }
    break;
  case 0xd:
    if (*(longlong *)((longlong)param_2 + 5) == 0x6e6f6974617a696d && *param_2 == 0x7a696d6f74737543
       ) {
      param_1[1] = 3;
    }
    else if (*(longlong *)((longlong)param_2 + 5) == 0x7374754c65646f6d &&
             *param_2 == 0x646f6d6f746f6850) {
      param_1[1] = 0x13;
    }
    else {
      if (*(longlong *)((longlong)param_2 + 5) != 0x6b63614265646f6d ||
          *param_2 != 0x646f6d6f746f6850) goto LAB_141c6f0fd;
      param_1[1] = 0x15;
    }
    break;
  case 0xe:
    if (*(longlong *)((longlong)param_2 + 6) != 0x7375636f4665646f || *param_2 != 0x646f6d6f746f6850
       ) goto LAB_141c6f0fd;
    param_1[1] = 0xf;
    break;
  case 0xf:
    if (*(longlong *)((longlong)param_2 + 7) == 0x7265646c6f466564 && *param_2 == 0x646f6d6f746f6850
       ) {
      param_1[1] = 0xc;
    }
    else {
      if (*(longlong *)((longlong)param_2 + 7) != 0x6172656d61436564 ||
          *param_2 != 0x646f6d6f746f6850) goto LAB_141c6f0fd;
      param_1[1] = 0xd;
    }
    break;
  case 0x10:
    auVar3[0] = -((char)*param_2 == UNK_1433a2dd0);
    auVar3[1] = -(*(char *)((longlong)param_2 + 1) == UNK_1433a2dd1);
    auVar3[2] = -(*(char *)((longlong)param_2 + 2) == UNK_1433a2dd2);
    auVar3[3] = -(*(char *)((longlong)param_2 + 3) == UNK_1433a2dd3);
    auVar3[4] = -(*(char *)((longlong)param_2 + 4) == UNK_1433a2dd4);
    auVar3[5] = -(*(char *)((longlong)param_2 + 5) == UNK_1433a2dd5);
    auVar3[6] = -(*(char *)((longlong)param_2 + 6) == UNK_1433a2dd6);
    auVar3[7] = -(*(char *)((longlong)param_2 + 7) == UNK_1433a2dd7);
    auVar3[8] = -((char)param_2[1] == UNK_1433a2dd8);
    auVar3[9] = -(*(char *)((longlong)param_2 + 9) == UNK_1433a2dd9);
    auVar3[10] = -(*(char *)((longlong)param_2 + 10) == UNK_1433a2dda);
    auVar3[0xb] = -(*(char *)((longlong)param_2 + 0xb) == UNK_1433a2ddb);
    auVar3[0xc] = -(*(char *)((longlong)param_2 + 0xc) == UNK_1433a2ddc);
    auVar3[0xd] = -(*(char *)((longlong)param_2 + 0xd) == UNK_1433a2ddd);
    auVar3[0xe] = -(*(char *)((longlong)param_2 + 0xe) == UNK_1433a2dde);
    auVar3[0xf] = -(*(char *)((longlong)param_2 + 0xf) == UNK_1433a2ddf);
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
      param_1[1] = 0x11;
    }
    else {
      auVar4[0] = -((char)*param_2 == UNK_1433a2de0);
      auVar4[1] = -(*(char *)((longlong)param_2 + 1) == UNK_1433a2de1);
      auVar4[2] = -(*(char *)((longlong)param_2 + 2) == UNK_1433a2de2);
      auVar4[3] = -(*(char *)((longlong)param_2 + 3) == UNK_1433a2de3);
      auVar4[4] = -(*(char *)((longlong)param_2 + 4) == UNK_1433a2de4);
      auVar4[5] = -(*(char *)((longlong)param_2 + 5) == UNK_1433a2de5);
      auVar4[6] = -(*(char *)((longlong)param_2 + 6) == UNK_1433a2de6);
      auVar4[7] = -(*(char *)((longlong)param_2 + 7) == UNK_1433a2de7);
      auVar4[8] = -((char)param_2[1] == UNK_1433a2de8);
      auVar4[9] = -(*(char *)((longlong)param_2 + 9) == UNK_1433a2de9);
      auVar4[10] = -(*(char *)((longlong)param_2 + 10) == UNK_1433a2dea);
      auVar4[0xb] = -(*(char *)((longlong)param_2 + 0xb) == UNK_1433a2deb);
      auVar4[0xc] = -(*(char *)((longlong)param_2 + 0xc) == UNK_1433a2dec);
      auVar4[0xd] = -(*(char *)((longlong)param_2 + 0xd) == UNK_1433a2ded);
      auVar4[0xe] = -(*(char *)((longlong)param_2 + 0xe) == UNK_1433a2dee);
      auVar4[0xf] = -(*(char *)((longlong)param_2 + 0xf) == UNK_1433a2def);
      if ((ushort)((ushort)(SUB161(auVar4 >> 7,0) & 1) | (ushort)(SUB161(auVar4 >> 0xf,0) & 1) << 1
                   | (ushort)(SUB161(auVar4 >> 0x17,0) & 1) << 2 |
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
                   (ushort)(SUB161(auVar4 >> 0x77,0) & 1) << 0xe | (ushort)(auVar4[0xf] >> 7) << 0xf
                  ) != 0xffff) goto LAB_141c6f0fd;
      param_1[1] = 0x12;
    }
    break;
  case 0x11:
    auVar2[0] = -((char)*param_2 == UNK_1433a2db0);
    auVar2[1] = -(*(char *)((longlong)param_2 + 1) == UNK_1433a2db1);
    auVar2[2] = -(*(char *)((longlong)param_2 + 2) == UNK_1433a2db2);
    auVar2[3] = -(*(char *)((longlong)param_2 + 3) == UNK_1433a2db3);
    auVar2[4] = -(*(char *)((longlong)param_2 + 4) == UNK_1433a2db4);
    auVar2[5] = -(*(char *)((longlong)param_2 + 5) == UNK_1433a2db5);
    auVar2[6] = -(*(char *)((longlong)param_2 + 6) == UNK_1433a2db6);
    auVar2[7] = -(*(char *)((longlong)param_2 + 7) == UNK_1433a2db7);
    auVar2[8] = -((char)param_2[1] == UNK_1433a2db8);
    auVar2[9] = -(*(char *)((longlong)param_2 + 9) == UNK_1433a2db9);
    auVar2[10] = -(*(char *)((longlong)param_2 + 10) == UNK_1433a2dba);
    auVar2[0xb] = -(*(char *)((longlong)param_2 + 0xb) == UNK_1433a2dbb);
    auVar2[0xc] = -(*(char *)((longlong)param_2 + 0xc) == UNK_1433a2dbc);
    auVar2[0xd] = -(*(char *)((longlong)param_2 + 0xd) == UNK_1433a2dbd);
    auVar2[0xe] = -(*(char *)((longlong)param_2 + 0xe) == UNK_1433a2dbe);
    auVar2[0xf] = -(*(char *)((longlong)param_2 + 0xf) == UNK_1433a2dbf);
    auVar5[0] = -((char)param_2[2] == UNK_1433a2dc0);
    auVar5[1] = -(UNK_1433a2dc1 == '\0');
    auVar5[2] = -(UNK_1433a2dc2 == '\0');
    auVar5[3] = -(UNK_1433a2dc3 == '\0');
    auVar5[4] = -(UNK_1433a2dc4 == '\0');
    auVar5[5] = -(UNK_1433a2dc5 == '\0');
    auVar5[6] = -(UNK_1433a2dc6 == '\0');
    auVar5[7] = -(UNK_1433a2dc7 == '\0');
    auVar5[8] = -(UNK_1433a2dc8 == '\0');
    auVar5[9] = -(UNK_1433a2dc9 == '\0');
    auVar5[10] = -(UNK_1433a2dca == '\0');
    auVar5[0xb] = -(UNK_1433a2dcb == '\0');
    auVar5[0xc] = -(UNK_1433a2dcc == '\0');
    auVar5[0xd] = -(UNK_1433a2dcd == '\0');
    auVar5[0xe] = -(UNK_1433a2dce == '\0');
    auVar5[0xf] = -(UNK_1433a2dcf == '\0');
    auVar5 = auVar5 & auVar2;
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
                (ushort)(byte)(auVar5[0xf] >> 7) << 0xf) != 0xffff) goto LAB_141c6f0fd;
    param_1[1] = 0x14;
  }
  *param_1 = 0;
  return;
}

