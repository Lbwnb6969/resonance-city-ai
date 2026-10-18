// VA 0x1417ce930, PDB extent 3678 bytes
// country_core::asset_libraries::color_library::ColorLibrarySsbo::deserialize_from
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/asset_libraries/color_library.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Removing unreachable block (ram,0x000140f3c374) */
/* Matched PDB project procedure:
   country_core::asset_libraries::color_library::ColorLibrarySsbo::deserialize_from
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/asset_libraries/color_library.rs
   Extent: 3678 */

void pdb_1417ce930(ulonglong *param_1,longlong *param_2)

{
  ulonglong *puVar1;
  ulonglong *puVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  byte *arg0;
  ulonglong uVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  byte bVar10;
  byte bVar11;
  byte bVar12;
  byte bVar13;
  byte bVar14;
  byte bVar15;
  byte bVar16;
  byte bVar17;
  byte bVar18;
  byte bVar19;
  byte bVar20;
  byte bVar21;
  byte bVar22;
  byte bVar23;
  byte bVar24;
  byte bVar25;
  byte bVar26;
  byte bVar27;
  byte bVar28;
  byte bVar29;
  byte bVar30;
  byte bVar31;
  byte bVar32;
  byte bVar33;
  byte bVar34;
  byte bVar35;
  byte bVar36;
  byte bVar37;
  byte bVar38;
  byte bVar39;
  byte bVar40;
  byte bVar41;
  byte bVar42;
  byte bVar43;
  byte bVar44;
  byte bVar45;
  byte bVar46;
  byte bVar47;
  byte bVar48;
  byte bVar49;
  byte bVar50;
  byte bVar51;
  byte bVar52;
  byte bVar53;
  byte bVar54;
  byte bVar55;
  byte bVar56;
  byte bVar57;
  byte bVar58;
  byte bVar59;
  byte bVar60;
  byte bVar61;
  byte bVar62;
  byte bVar63;
  byte bVar64;
  byte bVar65;
  byte bVar66;
  byte bVar67;
  byte bVar68;
  byte bVar69;
  byte bVar70;
  char cVar71;
  char cVar72;
  char cVar73;
  byte bVar74;
  char cVar75;
  char cVar76;
  char cVar77;
  undefined8 uVar78;
  ulonglong uVar79;
  ulonglong *puVar80;
  undefined1 auVar81 [16];
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  undefined1 auVar84 [16];
  undefined1 auVar85 [16];
  undefined1 auVar86 [16];
  ulonglong *puStack_108;
  code *pcStack_100;
  ulonglong *puStack_f8;
  ulonglong *puStack_f0;
  longlong lStack_e8;
  ulonglong *puStack_e0;
  ulonglong uStack_d8;
  byte *pbStack_d0;
  ulonglong uStack_c8;
  ulonglong uStack_c0;
  ulonglong uStack_b8;
  undefined8 uStack_b0;
  
  cVar77 = UNK_143337f67;
  cVar76 = UNK_143337f66;
  cVar75 = UNK_143337f65;
  bVar74 = DAT_143337f64;
  cVar73 = UNK_143337f63;
  cVar72 = UNK_143337f62;
  cVar71 = UNK_143337f61;
  bVar70 = DAT_143337f60;
  bVar69 = UNK_143337f5f;
  bVar68 = UNK_143337f5e;
  bVar67 = UNK_143337f5d;
  bVar66 = UNK_143337f5c;
  bVar65 = UNK_143337f5b;
  bVar64 = UNK_143337f5a;
  bVar63 = UNK_143337f59;
  bVar62 = UNK_143337f58;
  bVar61 = UNK_143337f57;
  bVar60 = UNK_143337f56;
  bVar59 = UNK_143337f55;
  bVar58 = UNK_143337f54;
  bVar57 = UNK_143337f53;
  bVar56 = UNK_143337f52;
  bVar55 = UNK_143337f51;
  bVar54 = DAT_143337f50;
  bVar53 = UNK_143337f4f;
  bVar52 = UNK_143337f4e;
  bVar51 = UNK_143337f4d;
  bVar50 = UNK_143337f4c;
  bVar49 = UNK_143337f4b;
  bVar48 = UNK_143337f4a;
  bVar47 = UNK_143337f49;
  bVar46 = UNK_143337f48;
  bVar45 = UNK_143337f47;
  bVar44 = UNK_143337f46;
  bVar43 = UNK_143337f45;
  bVar42 = UNK_143337f44;
  bVar41 = UNK_143337f43;
  bVar40 = UNK_143337f42;
  bVar39 = UNK_143337f41;
  bVar38 = DAT_143337f40;
  bVar37 = UNK_143337f3f;
  bVar36 = UNK_143337f3e;
  bVar35 = UNK_143337f3d;
  bVar34 = UNK_143337f3c;
  bVar33 = UNK_143337f3b;
  bVar32 = UNK_143337f3a;
  bVar31 = UNK_143337f39;
  bVar30 = UNK_143337f38;
  bVar29 = UNK_143337f37;
  bVar28 = UNK_143337f36;
  bVar27 = UNK_143337f35;
  bVar26 = UNK_143337f34;
  bVar25 = UNK_143337f33;
  bVar24 = UNK_143337f32;
  bVar23 = UNK_143337f31;
  bVar22 = DAT_143337f30;
  bVar21 = UNK_143337f2f;
  bVar20 = UNK_143337f2e;
  bVar19 = UNK_143337f2d;
  bVar18 = UNK_143337f2c;
  bVar17 = UNK_143337f2b;
  bVar16 = UNK_143337f2a;
  bVar15 = UNK_143337f29;
  bVar14 = UNK_143337f28;
  bVar13 = UNK_143337f27;
  bVar12 = UNK_143337f26;
  bVar11 = UNK_143337f25;
  bVar10 = UNK_143337f24;
  bVar9 = UNK_143337f23;
  bVar8 = UNK_143337f22;
  bVar7 = UNK_143337f21;
  bVar6 = DAT_143337f20;
  uStack_b0 = 0xfffffffffffffffe;
  lStack_e8 = *param_2;
  puVar80 = (ulonglong *)param_2[1];
  puVar1 = puVar80 + param_2[2] * 5;
  puVar2 = puVar80;
  puStack_f8 = puVar80;
  puStack_f0 = puVar80;
  puStack_e0 = puVar1;
  if (param_2[2] * 0x28 != 0) {
    do {
      puVar80 = puVar2 + 5;
      uVar79 = *puVar2;
      uVar3 = puVar2[3];
      uVar4 = puVar2[4];
      arg0 = (byte *)puVar2[1];
      uVar5 = puVar2[2];
      if (SBORROW8(0,uVar79)) break;
      uStack_b8._0_4_ = (undefined4)uVar4;
      uStack_d8 = uVar79;
      pbStack_d0 = arg0;
      uStack_c8 = uVar5;
      uStack_c0 = uVar3;
      uStack_b8 = uVar4;
      switch(uVar5) {
      case 4:
        if (*(int *)arg0 != 0x68746170) goto LAB_1417cf6b1;
        param_1[0x28] = uVar3;
        *(undefined4 *)(param_1 + 0x29) = (undefined4)uStack_b8;
        *(undefined4 *)((longlong)param_1 + 0x14c) = 0x3f800000;
        break;
      default:
LAB_1417cf6b1:
        puStack_108 = &uStack_d8;
        pcStack_100 = pdb_140001020;
        puStack_f0 = puVar80;
                    /* WARNING: Subroutine does not return */
        pdb_142dc83d0(&UNK_143337f73,&puStack_108,&UNK_143337ff8);
      case 6:
        if (*(short *)(arg0 + 4) == 0x315f && *(int *)arg0 == 0x6c6c6177) {
          param_1[0x38] = uVar3;
          *(undefined4 *)(param_1 + 0x39) = (undefined4)uStack_b8;
          *(undefined4 *)((longlong)param_1 + 0x1cc) = 0x3f800000;
        }
        else {
          if (*(short *)(arg0 + 4) != 0x325f || *(int *)arg0 != 0x6c6c6177) goto LAB_1417cf6b1;
          param_1[0x3a] = uVar3;
          *(undefined4 *)(param_1 + 0x3b) = (undefined4)uStack_b8;
          *(undefined4 *)((longlong)param_1 + 0x1dc) = 0x3f800000;
        }
        break;
      case 7:
        if (*(int *)(arg0 + 3) == 0x315f7373 && *(int *)arg0 == 0x73617267) {
          param_1[0x24] = uVar3;
          *(undefined4 *)(param_1 + 0x25) = (undefined4)uStack_b8;
          *(undefined4 *)((longlong)param_1 + 300) = 0x3f800000;
        }
        else {
          if (*(int *)(arg0 + 3) != 0x325f7373 || *(int *)arg0 != 0x73617267) goto LAB_1417cf6b1;
          param_1[0x26] = uVar3;
          *(undefined4 *)(param_1 + 0x27) = (undefined4)uStack_b8;
          *(undefined4 *)((longlong)param_1 + 0x13c) = 0x3f800000;
        }
        break;
      case 8:
        if (*(longlong *)arg0 != 0x657361625f796b73) goto LAB_1417cf6b1;
        param_1[0x2a] = uVar3;
        *(undefined4 *)(param_1 + 0x2b) = (undefined4)uStack_b8;
        *(undefined4 *)((longlong)param_1 + 0x15c) = 0x3f800000;
        break;
      case 9:
        if (arg0[8] == 0x31 && *(longlong *)arg0 == 0x5f6e696172726574) {
          param_1[0x32] = uVar3;
          *(undefined4 *)(param_1 + 0x33) = (undefined4)uStack_b8;
          *(undefined4 *)((longlong)param_1 + 0x19c) = 0x3f800000;
        }
        else if (arg0[8] == 0x32 && *(longlong *)arg0 == 0x5f6e696172726574) {
          param_1[0x34] = uVar3;
          *(undefined4 *)(param_1 + 0x35) = (undefined4)uStack_b8;
          *(undefined4 *)((longlong)param_1 + 0x1ac) = 0x3f800000;
        }
        else {
          if (arg0[8] != 0x73 || *(longlong *)arg0 != 0x736f6d5f6c6c6177) goto LAB_1417cf6b1;
          param_1[0x3c] = uVar3;
          *(undefined4 *)(param_1 + 0x3d) = (undefined4)uStack_b8;
          *(undefined4 *)((longlong)param_1 + 0x1ec) = 0x3f800000;
        }
        break;
      case 10:
        if (*(short *)(arg0 + 8) == 0x6863 && *(longlong *)arg0 == 0x6e6172625f797669) {
          param_1[0x40] = uVar3;
          *(undefined4 *)(param_1 + 0x41) = (undefined4)uStack_b8;
          *(undefined4 *)((longlong)param_1 + 0x20c) = 0x3f800000;
        }
        else if (*(short *)(arg0 + 8) == 0x315f && *(longlong *)arg0 == 0x6661656c5f797669) {
          param_1[0x42] = uVar3;
          *(undefined4 *)(param_1 + 0x43) = (undefined4)uStack_b8;
          *(undefined4 *)((longlong)param_1 + 0x21c) = 0x3f800000;
        }
        else if (*(short *)(arg0 + 8) == 0x325f && *(longlong *)arg0 == 0x6661656c5f797669) {
          param_1[0x44] = uVar3;
          *(undefined4 *)(param_1 + 0x45) = (undefined4)uStack_b8;
          *(undefined4 *)((longlong)param_1 + 0x22c) = 0x3f800000;
        }
        else {
          if (*(short *)(arg0 + 8) != 0x746e || *(longlong *)arg0 != 0x69745f746867696e)
          goto LAB_1417cf6b1;
          param_1[0x48] = uVar3;
          *(undefined4 *)(param_1 + 0x49) = (undefined4)uStack_b8;
          *(undefined4 *)((longlong)param_1 + 0x24c) = 0x3f800000;
        }
        break;
      case 0xb:
        if (*(longlong *)(arg0 + 3) == 0x7961645f776f6c5f && *(longlong *)arg0 == 0x5f776f6c5f796b73
           ) {
          param_1[10] = uVar3;
          *(undefined4 *)(param_1 + 0xb) = (undefined4)uStack_b8;
          *(undefined4 *)((longlong)param_1 + 0x5c) = 0x3f800000;
        }
        else if (*(longlong *)(arg0 + 3) == 0x6e6f7a69726f685f &&
                 *(longlong *)arg0 == 0x69726f685f796b73) {
          param_1[0x2c] = uVar3;
          *(undefined4 *)(param_1 + 0x2d) = (undefined4)uStack_b8;
          *(undefined4 *)((longlong)param_1 + 0x16c) = 0x3f800000;
        }
        else {
          if (*(longlong *)(arg0 + 3) != 0x736b636972625f6c ||
              *(longlong *)arg0 != 0x6972625f6c6c6177) goto LAB_1417cf6b1;
          param_1[0x3e] = uVar3;
          *(undefined4 *)(param_1 + 0x3f) = (undefined4)uStack_b8;
          *(undefined4 *)((longlong)param_1 + 0x1fc) = 0x3f800000;
        }
        break;
      case 0xc:
        if (*(int *)(arg0 + 8) == 0x315f726f && *(longlong *)arg0 == 0x6c6f635f706d6574) {
          *param_1 = uVar3;
          *(undefined4 *)(param_1 + 1) = (undefined4)uStack_b8;
          *(undefined4 *)((longlong)param_1 + 0xc) = 0x3f800000;
        }
        else if (*(int *)(arg0 + 8) == 0x325f726f && *(longlong *)arg0 == 0x6c6f635f706d6574) {
          param_1[2] = uVar3;
          *(undefined4 *)(param_1 + 3) = (undefined4)uStack_b8;
          *(undefined4 *)((longlong)param_1 + 0x1c) = 0x3f800000;
        }
        else if (*(int *)(arg0 + 8) == 0x335f726f && *(longlong *)arg0 == 0x6c6f635f706d6574) {
          param_1[4] = uVar3;
          *(undefined4 *)(param_1 + 5) = (undefined4)uStack_b8;
          *(undefined4 *)((longlong)param_1 + 0x2c) = 0x3f800000;
        }
        else if (*(int *)(arg0 + 8) == 0x315f726f && *(longlong *)arg0 == 0x6c6f635f666f6f72) {
          param_1[6] = uVar3;
          *(undefined4 *)(param_1 + 7) = (undefined4)uStack_b8;
          *(undefined4 *)((longlong)param_1 + 0x3c) = 0x3f800000;
        }
        else if (*(int *)(arg0 + 8) == 0x325f726f && *(longlong *)arg0 == 0x6c6f635f666f6f72) {
          param_1[8] = uVar3;
          *(undefined4 *)(param_1 + 9) = (undefined4)uStack_b8;
          *(undefined4 *)((longlong)param_1 + 0x4c) = 0x3f800000;
        }
        else if (*(int *)(arg0 + 8) == 0x7961645f && *(longlong *)arg0 == 0x686769685f796b73) {
          param_1[0xc] = uVar3;
          *(undefined4 *)(param_1 + 0xd) = (undefined4)uStack_b8;
          *(undefined4 *)((longlong)param_1 + 0x6c) = 0x3f800000;
        }
        else if (*(int *)(arg0 + 8) == 0x7961645f && *(longlong *)arg0 == 0x746e69745f6e7573) {
          param_1[0xe] = uVar3;
          *(undefined4 *)(param_1 + 0xf) = (undefined4)uStack_b8;
          *(undefined4 *)((longlong)param_1 + 0x7c) = 0x3f800000;
        }
        else if (*(int *)(arg0 + 8) == 0x6b737564 && *(longlong *)arg0 == 0x5f776f6c5f796b73) {
          param_1[0x10] = uVar3;
          *(undefined4 *)(param_1 + 0x11) = (undefined4)uStack_b8;
          *(undefined4 *)((longlong)param_1 + 0x8c) = 0x3f800000;
        }
        else if (*(int *)(arg0 + 8) == 0x315f7364 && *(longlong *)arg0 == 0x756f6c635f796b73) {
          param_1[0x2e] = uVar3;
          *(undefined4 *)(param_1 + 0x2f) = (undefined4)uStack_b8;
          *(undefined4 *)((longlong)param_1 + 0x17c) = 0x3f800000;
        }
        else {
          if (*(int *)(arg0 + 8) != 0x325f7364 || *(longlong *)arg0 != 0x756f6c635f796b73)
          goto LAB_1417cf6b1;
          param_1[0x30] = uVar3;
          *(undefined4 *)(param_1 + 0x31) = (undefined4)uStack_b8;
          *(undefined4 *)((longlong)param_1 + 0x18c) = 0x3f800000;
        }
        break;
      case 0xd:
        if (*(longlong *)(arg0 + 5) == 0x6b7375645f686769 && *(longlong *)arg0 == 0x686769685f796b73
           ) {
          param_1[0x12] = uVar3;
          *(undefined4 *)(param_1 + 0x13) = (undefined4)uStack_b8;
          *(undefined4 *)((longlong)param_1 + 0x9c) = 0x3f800000;
        }
        else if (*(longlong *)(arg0 + 5) == 0x6b7375645f746e69 &&
                 *(longlong *)arg0 == 0x746e69745f6e7573) {
          param_1[0x14] = uVar3;
          *(undefined4 *)(param_1 + 0x15) = (undefined4)uStack_b8;
          *(undefined4 *)((longlong)param_1 + 0xac) = 0x3f800000;
        }
        else if (*(longlong *)(arg0 + 5) == 0x315f726f6c6f635f &&
                 *(longlong *)arg0 == 0x6f635f65636e6566) {
          param_1[0x18] = uVar3;
          *(undefined4 *)(param_1 + 0x19) = (undefined4)uStack_b8;
          *(undefined4 *)((longlong)param_1 + 0xcc) = 0x3f800000;
        }
        else {
          if (*(longlong *)(arg0 + 5) != 0x325f726f6c6f635f ||
              *(longlong *)arg0 != 0x6f635f65636e6566) goto LAB_1417cf6b1;
          param_1[0x1a] = uVar3;
          *(undefined4 *)(param_1 + 0x1b) = (undefined4)uStack_b8;
          *(undefined4 *)((longlong)param_1 + 0xdc) = 0x3f800000;
        }
        break;
      case 0xe:
        if (*(longlong *)(arg0 + 6) == 0x315f726f6c6f635f && *(longlong *)arg0 == 0x635f7265776f6c66
           ) {
          param_1[0x1c] = uVar3;
          *(undefined4 *)(param_1 + 0x1d) = (undefined4)uStack_b8;
          *(undefined4 *)((longlong)param_1 + 0xec) = 0x3f800000;
        }
        else if (*(longlong *)(arg0 + 6) == 0x325f726f6c6f635f &&
                 *(longlong *)arg0 == 0x635f7265776f6c66) {
          param_1[0x1e] = uVar3;
          *(undefined4 *)(param_1 + 0x1f) = (undefined4)uStack_b8;
          *(undefined4 *)((longlong)param_1 + 0xfc) = 0x3f800000;
        }
        else if (*(longlong *)(arg0 + 6) == 0x315f726f6c6f635f &&
                 *(longlong *)arg0 == 0x635f79706f6e6163) {
          param_1[0x20] = uVar3;
          *(undefined4 *)(param_1 + 0x21) = (undefined4)uStack_b8;
          *(undefined4 *)((longlong)param_1 + 0x10c) = 0x3f800000;
        }
        else {
          if (*(longlong *)(arg0 + 6) != 0x325f726f6c6f635f ||
              *(longlong *)arg0 != 0x635f79706f6e6163) goto LAB_1417cf6b1;
          param_1[0x22] = uVar3;
          *(undefined4 *)(param_1 + 0x23) = (undefined4)uStack_b8;
          *(undefined4 *)((longlong)param_1 + 0x11c) = 0x3f800000;
        }
        break;
      case 0x11:
        auVar82[0] = -(*arg0 == bVar6);
        auVar82[1] = -(arg0[1] == bVar7);
        auVar82[2] = -(arg0[2] == bVar8);
        auVar82[3] = -(arg0[3] == bVar9);
        auVar82[4] = -(arg0[4] == bVar10);
        auVar82[5] = -(arg0[5] == bVar11);
        auVar82[6] = -(arg0[6] == bVar12);
        auVar82[7] = -(arg0[7] == bVar13);
        auVar82[8] = -(arg0[8] == bVar14);
        auVar82[9] = -(arg0[9] == bVar15);
        auVar82[10] = -(arg0[10] == bVar16);
        auVar82[0xb] = -(arg0[0xb] == bVar17);
        auVar82[0xc] = -(arg0[0xc] == bVar18);
        auVar82[0xd] = -(arg0[0xd] == bVar19);
        auVar82[0xe] = -(arg0[0xe] == bVar20);
        auVar82[0xf] = -(arg0[0xf] == bVar21);
        auVar85[0] = -(arg0[0x10] == bVar70);
        auVar85[1] = -(cVar71 == '\0');
        auVar85[2] = -(cVar72 == '\0');
        auVar85[3] = -(cVar73 == '\0');
        auVar85[4] = 0xff;
        auVar85[5] = 0xff;
        auVar85[6] = 0xff;
        auVar85[7] = 0xff;
        auVar85[8] = 0xff;
        auVar85[9] = 0xff;
        auVar85[10] = 0xff;
        auVar85[0xb] = 0xff;
        auVar85[0xc] = 0xff;
        auVar85[0xd] = 0xff;
        auVar85[0xe] = 0xff;
        auVar85[0xf] = 0xff;
        auVar85 = auVar85 & auVar82;
        if ((ushort)((ushort)(SUB161(auVar85 >> 7,0) & 1) |
                     (ushort)(SUB161(auVar85 >> 0xf,0) & 1) << 1 |
                     (ushort)(SUB161(auVar85 >> 0x17,0) & 1) << 2 |
                     (ushort)(SUB161(auVar85 >> 0x1f,0) & 1) << 3 |
                     (ushort)(SUB161(auVar85 >> 0x27,0) & 1) << 4 |
                     (ushort)(SUB161(auVar85 >> 0x2f,0) & 1) << 5 |
                     (ushort)(SUB161(auVar85 >> 0x37,0) & 1) << 6 |
                     (ushort)(SUB161(auVar85 >> 0x3f,0) & 1) << 7 |
                     (ushort)(SUB161(auVar85 >> 0x47,0) & 1) << 8 |
                     (ushort)(SUB161(auVar85 >> 0x4f,0) & 1) << 9 |
                     (ushort)(SUB161(auVar85 >> 0x57,0) & 1) << 10 |
                     (ushort)(SUB161(auVar85 >> 0x5f,0) & 1) << 0xb |
                     (ushort)(SUB161(auVar85 >> 0x67,0) & 1) << 0xc |
                     (ushort)(SUB161(auVar85 >> 0x6f,0) & 1) << 0xd |
                     (ushort)(SUB161(auVar85 >> 0x77,0) & 1) << 0xe |
                    (ushort)(byte)(auVar85[0xf] >> 7) << 0xf) == 0xffff) {
          param_1[0x36] = uVar3;
          *(undefined4 *)(param_1 + 0x37) = (undefined4)uStack_b8;
          *(undefined4 *)((longlong)param_1 + 0x1bc) = 0x3f800000;
        }
        else {
          auVar83[0] = -(*arg0 == bVar22);
          auVar83[1] = -(arg0[1] == bVar23);
          auVar83[2] = -(arg0[2] == bVar24);
          auVar83[3] = -(arg0[3] == bVar25);
          auVar83[4] = -(arg0[4] == bVar26);
          auVar83[5] = -(arg0[5] == bVar27);
          auVar83[6] = -(arg0[6] == bVar28);
          auVar83[7] = -(arg0[7] == bVar29);
          auVar83[8] = -(arg0[8] == bVar30);
          auVar83[9] = -(arg0[9] == bVar31);
          auVar83[10] = -(arg0[10] == bVar32);
          auVar83[0xb] = -(arg0[0xb] == bVar33);
          auVar83[0xc] = -(arg0[0xc] == bVar34);
          auVar83[0xd] = -(arg0[0xd] == bVar35);
          auVar83[0xe] = -(arg0[0xe] == bVar36);
          auVar83[0xf] = -(arg0[0xf] == bVar37);
          auVar86[0] = -(arg0[0x10] == bVar74);
          auVar86[1] = -(cVar75 == '\0');
          auVar86[2] = -(cVar76 == '\0');
          auVar86[3] = -(cVar77 == '\0');
          auVar86[4] = 0xff;
          auVar86[5] = 0xff;
          auVar86[6] = 0xff;
          auVar86[7] = 0xff;
          auVar86[8] = 0xff;
          auVar86[9] = 0xff;
          auVar86[10] = 0xff;
          auVar86[0xb] = 0xff;
          auVar86[0xc] = 0xff;
          auVar86[0xd] = 0xff;
          auVar86[0xe] = 0xff;
          auVar86[0xf] = 0xff;
          auVar86 = auVar86 & auVar83;
          if ((ushort)((ushort)(SUB161(auVar86 >> 7,0) & 1) |
                       (ushort)(SUB161(auVar86 >> 0xf,0) & 1) << 1 |
                       (ushort)(SUB161(auVar86 >> 0x17,0) & 1) << 2 |
                       (ushort)(SUB161(auVar86 >> 0x1f,0) & 1) << 3 |
                       (ushort)(SUB161(auVar86 >> 0x27,0) & 1) << 4 |
                       (ushort)(SUB161(auVar86 >> 0x2f,0) & 1) << 5 |
                       (ushort)(SUB161(auVar86 >> 0x37,0) & 1) << 6 |
                       (ushort)(SUB161(auVar86 >> 0x3f,0) & 1) << 7 |
                       (ushort)(SUB161(auVar86 >> 0x47,0) & 1) << 8 |
                       (ushort)(SUB161(auVar86 >> 0x4f,0) & 1) << 9 |
                       (ushort)(SUB161(auVar86 >> 0x57,0) & 1) << 10 |
                       (ushort)(SUB161(auVar86 >> 0x5f,0) & 1) << 0xb |
                       (ushort)(SUB161(auVar86 >> 0x67,0) & 1) << 0xc |
                       (ushort)(SUB161(auVar86 >> 0x6f,0) & 1) << 0xd |
                       (ushort)(SUB161(auVar86 >> 0x77,0) & 1) << 0xe |
                      (ushort)(byte)(auVar86[0xf] >> 7) << 0xf) != 0xffff) goto LAB_1417cf6b1;
          param_1[0x46] = uVar3;
          *(undefined4 *)(param_1 + 0x47) = (undefined4)uStack_b8;
          *(undefined4 *)((longlong)param_1 + 0x23c) = 0x3f800000;
        }
        break;
      case 0x13:
        auVar81[0] = -(*arg0 == bVar54);
        auVar81[1] = -(arg0[1] == bVar55);
        auVar81[2] = -(arg0[2] == bVar56);
        auVar81[3] = -(arg0[3] == bVar57);
        auVar81[4] = -(arg0[4] == bVar58);
        auVar81[5] = -(arg0[5] == bVar59);
        auVar81[6] = -(arg0[6] == bVar60);
        auVar81[7] = -(arg0[7] == bVar61);
        auVar81[8] = -(arg0[8] == bVar62);
        auVar81[9] = -(arg0[9] == bVar63);
        auVar81[10] = -(arg0[10] == bVar64);
        auVar81[0xb] = -(arg0[0xb] == bVar65);
        auVar81[0xc] = -(arg0[0xc] == bVar66);
        auVar81[0xd] = -(arg0[0xd] == bVar67);
        auVar81[0xe] = -(arg0[0xe] == bVar68);
        auVar81[0xf] = -(arg0[0xf] == bVar69);
        auVar84[0] = -(arg0[3] == bVar38);
        auVar84[1] = -(arg0[4] == bVar39);
        auVar84[2] = -(arg0[5] == bVar40);
        auVar84[3] = -(arg0[6] == bVar41);
        auVar84[4] = -(arg0[7] == bVar42);
        auVar84[5] = -(arg0[8] == bVar43);
        auVar84[6] = -(arg0[9] == bVar44);
        auVar84[7] = -(arg0[10] == bVar45);
        auVar84[8] = -(arg0[0xb] == bVar46);
        auVar84[9] = -(arg0[0xc] == bVar47);
        auVar84[10] = -(arg0[0xd] == bVar48);
        auVar84[0xb] = -(arg0[0xe] == bVar49);
        auVar84[0xc] = -(arg0[0xf] == bVar50);
        auVar84[0xd] = -(arg0[0x10] == bVar51);
        auVar84[0xe] = -(arg0[0x11] == bVar52);
        auVar84[0xf] = -(arg0[0x12] == bVar53);
        auVar84 = auVar84 & auVar81;
        if ((ushort)((ushort)(SUB161(auVar84 >> 7,0) & 1) |
                     (ushort)(SUB161(auVar84 >> 0xf,0) & 1) << 1 |
                     (ushort)(SUB161(auVar84 >> 0x17,0) & 1) << 2 |
                     (ushort)(SUB161(auVar84 >> 0x1f,0) & 1) << 3 |
                     (ushort)(SUB161(auVar84 >> 0x27,0) & 1) << 4 |
                     (ushort)(SUB161(auVar84 >> 0x2f,0) & 1) << 5 |
                     (ushort)(SUB161(auVar84 >> 0x37,0) & 1) << 6 |
                     (ushort)(SUB161(auVar84 >> 0x3f,0) & 1) << 7 |
                     (ushort)(SUB161(auVar84 >> 0x47,0) & 1) << 8 |
                     (ushort)(SUB161(auVar84 >> 0x4f,0) & 1) << 9 |
                     (ushort)(SUB161(auVar84 >> 0x57,0) & 1) << 10 |
                     (ushort)(SUB161(auVar84 >> 0x5f,0) & 1) << 0xb |
                     (ushort)(SUB161(auVar84 >> 0x67,0) & 1) << 0xc |
                     (ushort)(SUB161(auVar84 >> 0x6f,0) & 1) << 0xd |
                     (ushort)(SUB161(auVar84 >> 0x77,0) & 1) << 0xe |
                    (ushort)(byte)(auVar84[0xf] >> 7) << 0xf) != 0xffff) goto LAB_1417cf6b1;
        param_1[0x16] = uVar3;
        *(undefined4 *)(param_1 + 0x17) = (undefined4)uStack_b8;
        *(undefined4 *)((longlong)param_1 + 0xbc) = 0x3f800000;
      }
      if (uVar79 != 0) {
        pub_1406abac0(arg0,uVar79,1);
      }
      puVar2 = puVar80;
    } while (puVar80 != puVar1);
  }
  puStack_f0 = puVar80;
  if (puVar1 != puVar80) {
    uVar79 = (ulonglong)((longlong)puVar1 - (longlong)puVar80) / 0x28;
    puVar80 = puVar80 + 1;
    do {
      if (puVar80[-1] != 0) {
        pub_1406abac0((byte *)*puVar80,puVar80[-1],1);
      }
      puVar80 = puVar80 + 5;
      uVar79 = uVar79 - 1;
    } while (uVar79 != 0);
  }
  puVar1 = puStack_f8;
  if (lStack_e8 == 0) {
    return;
  }
  uVar78 = GetProcessHeap(puStack_f8,lStack_e8 * 0x28);
                    /* WARNING: Could not recover jumptable at 0x000140f3c38c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  HeapFree(uVar78,0,puVar1);
  return;
}

