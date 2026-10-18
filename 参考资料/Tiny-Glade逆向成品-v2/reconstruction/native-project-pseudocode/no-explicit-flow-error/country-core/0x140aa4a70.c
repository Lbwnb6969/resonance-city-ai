// VA 0x140aa4a70, PDB extent 954 bytes
// country_core::startup::load_textures::impl$1::should_load
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/startup/load_textures.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: country_core::startup::load_textures::impl$1::should_load
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/startup/load_textures.rs
   Extent: 954 */

undefined8 pdb_140aa4a70(uint *param_1,ulonglong param_2)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  ushort uVar4;
  char cVar5;
  char cVar6;
  char cVar7;
  char cVar8;
  char cVar9;
  char cVar10;
  char cVar11;
  char cVar12;
  char cVar13;
  char cVar14;
  char cVar15;
  char cVar16;
  char cVar17;
  char cVar18;
  char cVar19;
  char cVar20;
  char cVar21;
  char cVar22;
  char cVar23;
  char cVar24;
  char cVar25;
  char cVar26;
  char cVar27;
  char cVar28;
  char cVar29;
  char cVar30;
  char cVar31;
  char cVar32;
  char cVar33;
  char cVar34;
  char cVar35;
  char cVar36;
  char cVar37;
  char cVar38;
  char cVar39;
  char cVar40;
  char cVar41;
  char cVar42;
  char cVar43;
  char cVar44;
  char cVar45;
  char cVar46;
  char cVar47;
  char cVar48;
  char cVar49;
  char cVar50;
  char cVar51;
  char cVar52;
  char cVar53;
  char cVar54;
  char cVar55;
  char cVar56;
  char cVar57;
  char cVar58;
  char cVar59;
  char cVar60;
  char cVar61;
  char cVar62;
  char cVar63;
  char cVar64;
  char cVar65;
  char cVar66;
  char cVar67;
  char cVar68;
  char cVar69;
  char cVar70;
  char cVar71;
  char cVar72;
  char cVar73;
  char cVar74;
  char cVar75;
  char cVar76;
  char cVar77;
  char cVar78;
  char cVar79;
  char cVar80;
  char cVar81;
  char cVar82;
  char cVar83;
  char cVar84;
  char cVar85;
  char cVar86;
  char cVar87;
  char cVar88;
  char cVar89;
  char cVar90;
  char cVar91;
  char cVar92;
  char cVar93;
  char cVar94;
  char cVar95;
  char cVar96;
  char cVar97;
  char cVar98;
  char cVar99;
  char cVar100;
  char cVar101;
  char cVar102;
  char cVar103;
  char cVar104;
  char cVar105;
  char cVar106;
  char cVar107;
  char cVar108;
  char cVar109;
  char cVar110;
  char cVar111;
  char cVar112;
  char cVar113;
  char cVar114;
  char cVar115;
  char cVar116;
  char cVar117;
  char cVar118;
  char cVar119;
  char cVar120;
  char cVar121;
  char cVar122;
  char cVar123;
  char cVar124;
  char cVar125;
  char cVar126;
  char cVar127;
  char cVar128;
  char cVar129;
  char cVar130;
  char cVar131;
  char cVar132;
  byte bVar133;
  ulonglong uVar134;
  ulonglong uVar135;
  uint uVar136;
  longlong lVar137;
  longlong lVar138;
  undefined1 auVar139 [16];
  undefined1 auVar140 [16];
  undefined1 auVar141 [16];
  undefined1 auVar142 [16];
  undefined1 auVar143 [16];
  undefined1 auVar144 [16];
  undefined1 auVar145 [16];
  undefined1 auVar146 [16];
  undefined1 auVar147 [16];
  undefined1 auVar148 [16];
  undefined1 auVar149 [16];
  undefined1 auVar150 [16];
  uint *puStack_d8;
  ulonglong uStack_d0;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  
  cVar131 = pdb_141b02fc0(param_1,param_2,&UNK_1430469ab,4);
  if ((cVar131 == '\0') &&
     (cVar132 = pdb_141b03f30(param_1,param_2,&UNK_1430469af,7), cVar130 = UNK_142e34c8f,
     cVar129 = UNK_142e34c8e, cVar128 = UNK_142e34c8d, cVar127 = UNK_142e34c8c,
     cVar126 = UNK_142e34c8b, cVar125 = UNK_142e34c8a, cVar124 = UNK_142e34c89,
     cVar123 = UNK_142e34c88, cVar122 = UNK_142e34c87, cVar121 = UNK_142e34c86,
     cVar120 = UNK_142e34c85, cVar119 = UNK_142e34c84, cVar118 = UNK_142e34c83,
     cVar117 = UNK_142e34c82, cVar116 = UNK_142e34c81, cVar115 = DAT_142e34c80,
     cVar114 = UNK_142e3460f, cVar113 = UNK_142e3460e, cVar112 = UNK_142e3460d,
     cVar111 = UNK_142e3460c, cVar110 = UNK_142e3460b, cVar109 = UNK_142e3460a,
     cVar108 = UNK_142e34609, cVar107 = UNK_142e34608, cVar106 = UNK_142e34607,
     cVar105 = UNK_142e34606, cVar104 = UNK_142e34605, cVar103 = UNK_142e34604,
     cVar102 = UNK_142e34603, cVar101 = UNK_142e34602, cVar100 = UNK_142e34601,
     cVar131 = DAT_142e34600, cVar132 == '\0')) {
    if (DAT_143cb2d0c != '\0') {
      return 1;
    }
    if (param_2 < 5) {
      if (param_2 != 4) {
        return 1;
      }
      uVar136 = *param_1;
      uVar136 = uVar136 >> 0x18 | (uVar136 & 0xff0000) >> 8 | (uVar136 & 0xff00) << 8 |
                uVar136 << 0x18;
      if (uVar136 < 0x64656d6f != 0x64656d6f < uVar136) {
        return 1;
      }
    }
    else if (param_2 < 0x13) {
      param_2 = param_2 + 1;
      while (*param_1 != 0x6f6d6564) {
        param_1 = (uint *)((longlong)param_1 + 1);
        param_2 = param_2 - 1;
        if (param_2 < 5) {
          return 1;
        }
      }
    }
    else {
      puStack_c8 = &UNK_1430469b7;
      uStack_c0 = 3;
      puStack_d8 = param_1;
      uStack_d0 = param_2;
      if (param_2 < 0x44) {
        lVar137 = 0;
        uVar134 = 0;
      }
      else {
        lVar138 = 0;
        do {
          pcVar1 = (char *)((longlong)param_1 + lVar138);
          pcVar2 = (char *)((longlong)param_1 + lVar138 + 3);
          pcVar3 = (char *)((longlong)param_1 + lVar138 + 0x10);
          cVar132 = *pcVar3;
          cVar5 = pcVar3[1];
          cVar6 = pcVar3[2];
          cVar7 = pcVar3[3];
          cVar8 = pcVar3[4];
          cVar9 = pcVar3[5];
          cVar10 = pcVar3[6];
          cVar11 = pcVar3[7];
          cVar12 = pcVar3[8];
          cVar13 = pcVar3[9];
          cVar14 = pcVar3[10];
          cVar15 = pcVar3[0xb];
          cVar16 = pcVar3[0xc];
          cVar17 = pcVar3[0xd];
          cVar18 = pcVar3[0xe];
          cVar19 = pcVar3[0xf];
          pcVar3 = (char *)((longlong)param_1 + lVar138 + 0x13);
          cVar20 = *pcVar3;
          cVar21 = pcVar3[1];
          cVar22 = pcVar3[2];
          cVar23 = pcVar3[3];
          cVar24 = pcVar3[4];
          cVar25 = pcVar3[5];
          cVar26 = pcVar3[6];
          cVar27 = pcVar3[7];
          cVar28 = pcVar3[8];
          cVar29 = pcVar3[9];
          cVar30 = pcVar3[10];
          cVar31 = pcVar3[0xb];
          cVar32 = pcVar3[0xc];
          cVar33 = pcVar3[0xd];
          cVar34 = pcVar3[0xe];
          cVar35 = pcVar3[0xf];
          auVar141[0] = -(*pcVar1 == cVar131);
          auVar141[1] = -(pcVar1[1] == cVar100);
          auVar141[2] = -(pcVar1[2] == cVar101);
          auVar141[3] = -(pcVar1[3] == cVar102);
          auVar141[4] = -(pcVar1[4] == cVar103);
          auVar141[5] = -(pcVar1[5] == cVar104);
          auVar141[6] = -(pcVar1[6] == cVar105);
          auVar141[7] = -(pcVar1[7] == cVar106);
          auVar141[8] = -(pcVar1[8] == cVar107);
          auVar141[9] = -(pcVar1[9] == cVar108);
          auVar141[10] = -(pcVar1[10] == cVar109);
          auVar141[0xb] = -(pcVar1[0xb] == cVar110);
          auVar141[0xc] = -(pcVar1[0xc] == cVar111);
          auVar141[0xd] = -(pcVar1[0xd] == cVar112);
          auVar141[0xe] = -(pcVar1[0xe] == cVar113);
          auVar141[0xf] = -(pcVar1[0xf] == cVar114);
          auVar144[0] = -(*pcVar2 == cVar115);
          auVar144[1] = -(pcVar2[1] == cVar116);
          auVar144[2] = -(pcVar2[2] == cVar117);
          auVar144[3] = -(pcVar2[3] == cVar118);
          auVar144[4] = -(pcVar2[4] == cVar119);
          auVar144[5] = -(pcVar2[5] == cVar120);
          auVar144[6] = -(pcVar2[6] == cVar121);
          auVar144[7] = -(pcVar2[7] == cVar122);
          auVar144[8] = -(pcVar2[8] == cVar123);
          auVar144[9] = -(pcVar2[9] == cVar124);
          auVar144[10] = -(pcVar2[10] == cVar125);
          auVar144[0xb] = -(pcVar2[0xb] == cVar126);
          auVar144[0xc] = -(pcVar2[0xc] == cVar127);
          auVar144[0xd] = -(pcVar2[0xd] == cVar128);
          auVar144[0xe] = -(pcVar2[0xe] == cVar129);
          auVar144[0xf] = -(pcVar2[0xf] == cVar130);
          auVar144 = auVar144 & auVar141;
          uVar4 = (ushort)(SUB161(auVar144 >> 7,0) & 1) |
                  (ushort)(SUB161(auVar144 >> 0xf,0) & 1) << 1 |
                  (ushort)(SUB161(auVar144 >> 0x17,0) & 1) << 2 |
                  (ushort)(SUB161(auVar144 >> 0x1f,0) & 1) << 3 |
                  (ushort)(SUB161(auVar144 >> 0x27,0) & 1) << 4 |
                  (ushort)(SUB161(auVar144 >> 0x2f,0) & 1) << 5 |
                  (ushort)(SUB161(auVar144 >> 0x37,0) & 1) << 6 |
                  (ushort)(SUB161(auVar144 >> 0x3f,0) & 1) << 7 |
                  (ushort)(SUB161(auVar144 >> 0x47,0) & 1) << 8 |
                  (ushort)(SUB161(auVar144 >> 0x4f,0) & 1) << 9 |
                  (ushort)(SUB161(auVar144 >> 0x57,0) & 1) << 10 |
                  (ushort)(SUB161(auVar144 >> 0x5f,0) & 1) << 0xb |
                  (ushort)(SUB161(auVar144 >> 0x67,0) & 1) << 0xc |
                  (ushort)(SUB161(auVar144 >> 0x6f,0) & 1) << 0xd |
                  (ushort)(SUB161(auVar144 >> 0x77,0) & 1) << 0xe |
                  (ushort)(byte)(auVar144[0xf] >> 7) << 0xf;
          pcVar1 = (char *)((longlong)param_1 + lVar138 + 0x20);
          cVar36 = *pcVar1;
          cVar37 = pcVar1[1];
          cVar38 = pcVar1[2];
          cVar39 = pcVar1[3];
          cVar40 = pcVar1[4];
          cVar41 = pcVar1[5];
          cVar42 = pcVar1[6];
          cVar43 = pcVar1[7];
          cVar44 = pcVar1[8];
          cVar45 = pcVar1[9];
          cVar46 = pcVar1[10];
          cVar47 = pcVar1[0xb];
          cVar48 = pcVar1[0xc];
          cVar49 = pcVar1[0xd];
          cVar50 = pcVar1[0xe];
          cVar51 = pcVar1[0xf];
          pcVar1 = (char *)((longlong)param_1 + lVar138 + 0x23);
          cVar52 = *pcVar1;
          cVar53 = pcVar1[1];
          cVar54 = pcVar1[2];
          cVar55 = pcVar1[3];
          cVar56 = pcVar1[4];
          cVar57 = pcVar1[5];
          cVar58 = pcVar1[6];
          cVar59 = pcVar1[7];
          cVar60 = pcVar1[8];
          cVar61 = pcVar1[9];
          cVar62 = pcVar1[10];
          cVar63 = pcVar1[0xb];
          cVar64 = pcVar1[0xc];
          cVar65 = pcVar1[0xd];
          cVar66 = pcVar1[0xe];
          cVar67 = pcVar1[0xf];
          pcVar1 = (char *)((longlong)param_1 + lVar138 + 0x30);
          cVar68 = *pcVar1;
          cVar69 = pcVar1[1];
          cVar70 = pcVar1[2];
          cVar71 = pcVar1[3];
          cVar72 = pcVar1[4];
          cVar73 = pcVar1[5];
          cVar74 = pcVar1[6];
          cVar75 = pcVar1[7];
          cVar76 = pcVar1[8];
          cVar77 = pcVar1[9];
          cVar78 = pcVar1[10];
          cVar79 = pcVar1[0xb];
          cVar80 = pcVar1[0xc];
          cVar81 = pcVar1[0xd];
          cVar82 = pcVar1[0xe];
          cVar83 = pcVar1[0xf];
          pcVar1 = (char *)((longlong)param_1 + lVar138 + 0x33);
          cVar84 = *pcVar1;
          cVar85 = pcVar1[1];
          cVar86 = pcVar1[2];
          cVar87 = pcVar1[3];
          cVar88 = pcVar1[4];
          cVar89 = pcVar1[5];
          cVar90 = pcVar1[6];
          cVar91 = pcVar1[7];
          cVar92 = pcVar1[8];
          cVar93 = pcVar1[9];
          cVar94 = pcVar1[10];
          cVar95 = pcVar1[0xb];
          cVar96 = pcVar1[0xc];
          cVar97 = pcVar1[0xd];
          cVar98 = pcVar1[0xe];
          cVar99 = pcVar1[0xf];
          if (uVar4 == 0) {
            uVar134 = 0;
          }
          else {
            uVar134 = pdb_142d89140(&puStack_d8,lVar138,uVar4,0);
            uVar134 = uVar134 & 0xffffffff;
          }
          auVar149[0] = -(cVar132 == cVar131);
          auVar149[1] = -(cVar5 == cVar100);
          auVar149[2] = -(cVar6 == cVar101);
          auVar149[3] = -(cVar7 == cVar102);
          auVar149[4] = -(cVar8 == cVar103);
          auVar149[5] = -(cVar9 == cVar104);
          auVar149[6] = -(cVar10 == cVar105);
          auVar149[7] = -(cVar11 == cVar106);
          auVar149[8] = -(cVar12 == cVar107);
          auVar149[9] = -(cVar13 == cVar108);
          auVar149[10] = -(cVar14 == cVar109);
          auVar149[0xb] = -(cVar15 == cVar110);
          auVar149[0xc] = -(cVar16 == cVar111);
          auVar149[0xd] = -(cVar17 == cVar112);
          auVar149[0xe] = -(cVar18 == cVar113);
          auVar149[0xf] = -(cVar19 == cVar114);
          auVar150[0] = -(cVar20 == cVar115);
          auVar150[1] = -(cVar21 == cVar116);
          auVar150[2] = -(cVar22 == cVar117);
          auVar150[3] = -(cVar23 == cVar118);
          auVar150[4] = -(cVar24 == cVar119);
          auVar150[5] = -(cVar25 == cVar120);
          auVar150[6] = -(cVar26 == cVar121);
          auVar150[7] = -(cVar27 == cVar122);
          auVar150[8] = -(cVar28 == cVar123);
          auVar150[9] = -(cVar29 == cVar124);
          auVar150[10] = -(cVar30 == cVar125);
          auVar150[0xb] = -(cVar31 == cVar126);
          auVar150[0xc] = -(cVar32 == cVar127);
          auVar150[0xd] = -(cVar33 == cVar128);
          auVar150[0xe] = -(cVar34 == cVar129);
          auVar150[0xf] = -(cVar35 == cVar130);
          auVar150 = auVar150 & auVar149;
          uVar4 = (ushort)(SUB161(auVar150 >> 7,0) & 1) |
                  (ushort)(SUB161(auVar150 >> 0xf,0) & 1) << 1 |
                  (ushort)(SUB161(auVar150 >> 0x17,0) & 1) << 2 |
                  (ushort)(SUB161(auVar150 >> 0x1f,0) & 1) << 3 |
                  (ushort)(SUB161(auVar150 >> 0x27,0) & 1) << 4 |
                  (ushort)(SUB161(auVar150 >> 0x2f,0) & 1) << 5 |
                  (ushort)(SUB161(auVar150 >> 0x37,0) & 1) << 6 |
                  (ushort)(SUB161(auVar150 >> 0x3f,0) & 1) << 7 |
                  (ushort)(SUB161(auVar150 >> 0x47,0) & 1) << 8 |
                  (ushort)(SUB161(auVar150 >> 0x4f,0) & 1) << 9 |
                  (ushort)(SUB161(auVar150 >> 0x57,0) & 1) << 10 |
                  (ushort)(SUB161(auVar150 >> 0x5f,0) & 1) << 0xb |
                  (ushort)(SUB161(auVar150 >> 0x67,0) & 1) << 0xc |
                  (ushort)(SUB161(auVar150 >> 0x6f,0) & 1) << 0xd |
                  (ushort)(SUB161(auVar150 >> 0x77,0) & 1) << 0xe |
                  (ushort)(byte)(auVar150[0xf] >> 7) << 0xf;
          if (uVar4 != 0) {
            uVar135 = pdb_142d89140(&puStack_d8,lVar138 + 0x10,uVar4,uVar134);
            uVar134 = CONCAT71((int7)((uVar135 & 0xffffffff) >> 8),
                               (byte)(uVar135 & 0xffffffff) | (byte)uVar134);
          }
          auVar147[0] = -(cVar36 == cVar131);
          auVar147[1] = -(cVar37 == cVar100);
          auVar147[2] = -(cVar38 == cVar101);
          auVar147[3] = -(cVar39 == cVar102);
          auVar147[4] = -(cVar40 == cVar103);
          auVar147[5] = -(cVar41 == cVar104);
          auVar147[6] = -(cVar42 == cVar105);
          auVar147[7] = -(cVar43 == cVar106);
          auVar147[8] = -(cVar44 == cVar107);
          auVar147[9] = -(cVar45 == cVar108);
          auVar147[10] = -(cVar46 == cVar109);
          auVar147[0xb] = -(cVar47 == cVar110);
          auVar147[0xc] = -(cVar48 == cVar111);
          auVar147[0xd] = -(cVar49 == cVar112);
          auVar147[0xe] = -(cVar50 == cVar113);
          auVar147[0xf] = -(cVar51 == cVar114);
          auVar148[0] = -(cVar52 == cVar115);
          auVar148[1] = -(cVar53 == cVar116);
          auVar148[2] = -(cVar54 == cVar117);
          auVar148[3] = -(cVar55 == cVar118);
          auVar148[4] = -(cVar56 == cVar119);
          auVar148[5] = -(cVar57 == cVar120);
          auVar148[6] = -(cVar58 == cVar121);
          auVar148[7] = -(cVar59 == cVar122);
          auVar148[8] = -(cVar60 == cVar123);
          auVar148[9] = -(cVar61 == cVar124);
          auVar148[10] = -(cVar62 == cVar125);
          auVar148[0xb] = -(cVar63 == cVar126);
          auVar148[0xc] = -(cVar64 == cVar127);
          auVar148[0xd] = -(cVar65 == cVar128);
          auVar148[0xe] = -(cVar66 == cVar129);
          auVar148[0xf] = -(cVar67 == cVar130);
          auVar148 = auVar148 & auVar147;
          uVar4 = (ushort)(SUB161(auVar148 >> 7,0) & 1) |
                  (ushort)(SUB161(auVar148 >> 0xf,0) & 1) << 1 |
                  (ushort)(SUB161(auVar148 >> 0x17,0) & 1) << 2 |
                  (ushort)(SUB161(auVar148 >> 0x1f,0) & 1) << 3 |
                  (ushort)(SUB161(auVar148 >> 0x27,0) & 1) << 4 |
                  (ushort)(SUB161(auVar148 >> 0x2f,0) & 1) << 5 |
                  (ushort)(SUB161(auVar148 >> 0x37,0) & 1) << 6 |
                  (ushort)(SUB161(auVar148 >> 0x3f,0) & 1) << 7 |
                  (ushort)(SUB161(auVar148 >> 0x47,0) & 1) << 8 |
                  (ushort)(SUB161(auVar148 >> 0x4f,0) & 1) << 9 |
                  (ushort)(SUB161(auVar148 >> 0x57,0) & 1) << 10 |
                  (ushort)(SUB161(auVar148 >> 0x5f,0) & 1) << 0xb |
                  (ushort)(SUB161(auVar148 >> 0x67,0) & 1) << 0xc |
                  (ushort)(SUB161(auVar148 >> 0x6f,0) & 1) << 0xd |
                  (ushort)(SUB161(auVar148 >> 0x77,0) & 1) << 0xe |
                  (ushort)(byte)(auVar148[0xf] >> 7) << 0xf;
          if (uVar4 != 0) {
            uVar135 = pdb_142d89140(&puStack_d8,lVar138 + 0x20,uVar4,uVar134);
            uVar134 = CONCAT71((int7)((uVar135 & 0xffffffff) >> 8),
                               (byte)(uVar135 & 0xffffffff) | (byte)uVar134);
          }
          auVar145[0] = -(cVar68 == cVar131);
          auVar145[1] = -(cVar69 == cVar100);
          auVar145[2] = -(cVar70 == cVar101);
          auVar145[3] = -(cVar71 == cVar102);
          auVar145[4] = -(cVar72 == cVar103);
          auVar145[5] = -(cVar73 == cVar104);
          auVar145[6] = -(cVar74 == cVar105);
          auVar145[7] = -(cVar75 == cVar106);
          auVar145[8] = -(cVar76 == cVar107);
          auVar145[9] = -(cVar77 == cVar108);
          auVar145[10] = -(cVar78 == cVar109);
          auVar145[0xb] = -(cVar79 == cVar110);
          auVar145[0xc] = -(cVar80 == cVar111);
          auVar145[0xd] = -(cVar81 == cVar112);
          auVar145[0xe] = -(cVar82 == cVar113);
          auVar145[0xf] = -(cVar83 == cVar114);
          auVar146[0] = -(cVar84 == cVar115);
          auVar146[1] = -(cVar85 == cVar116);
          auVar146[2] = -(cVar86 == cVar117);
          auVar146[3] = -(cVar87 == cVar118);
          auVar146[4] = -(cVar88 == cVar119);
          auVar146[5] = -(cVar89 == cVar120);
          auVar146[6] = -(cVar90 == cVar121);
          auVar146[7] = -(cVar91 == cVar122);
          auVar146[8] = -(cVar92 == cVar123);
          auVar146[9] = -(cVar93 == cVar124);
          auVar146[10] = -(cVar94 == cVar125);
          auVar146[0xb] = -(cVar95 == cVar126);
          auVar146[0xc] = -(cVar96 == cVar127);
          auVar146[0xd] = -(cVar97 == cVar128);
          auVar146[0xe] = -(cVar98 == cVar129);
          auVar146[0xf] = -(cVar99 == cVar130);
          auVar146 = auVar146 & auVar145;
          uVar4 = (ushort)(SUB161(auVar146 >> 7,0) & 1) |
                  (ushort)(SUB161(auVar146 >> 0xf,0) & 1) << 1 |
                  (ushort)(SUB161(auVar146 >> 0x17,0) & 1) << 2 |
                  (ushort)(SUB161(auVar146 >> 0x1f,0) & 1) << 3 |
                  (ushort)(SUB161(auVar146 >> 0x27,0) & 1) << 4 |
                  (ushort)(SUB161(auVar146 >> 0x2f,0) & 1) << 5 |
                  (ushort)(SUB161(auVar146 >> 0x37,0) & 1) << 6 |
                  (ushort)(SUB161(auVar146 >> 0x3f,0) & 1) << 7 |
                  (ushort)(SUB161(auVar146 >> 0x47,0) & 1) << 8 |
                  (ushort)(SUB161(auVar146 >> 0x4f,0) & 1) << 9 |
                  (ushort)(SUB161(auVar146 >> 0x57,0) & 1) << 10 |
                  (ushort)(SUB161(auVar146 >> 0x5f,0) & 1) << 0xb |
                  (ushort)(SUB161(auVar146 >> 0x67,0) & 1) << 0xc |
                  (ushort)(SUB161(auVar146 >> 0x6f,0) & 1) << 0xd |
                  (ushort)(SUB161(auVar146 >> 0x77,0) & 1) << 0xe |
                  (ushort)(byte)(auVar146[0xf] >> 7) << 0xf;
          if (uVar4 != 0) {
            uVar135 = pdb_142d89140(&puStack_d8,lVar138 + 0x30,uVar4,uVar134);
            uVar134 = CONCAT71((int7)((uVar135 & 0xffffffff) >> 8),
                               (byte)(uVar135 & 0xffffffff) | (byte)uVar134);
          }
          lVar137 = lVar138 + 0x40;
        } while ((lVar138 + 0x83U < param_2) &&
                (lVar137 = lVar138 + 0x40, lVar138 = lVar137, (char)uVar134 == '\0'));
      }
      cVar130 = UNK_142e34c8f;
      cVar129 = UNK_142e34c8e;
      cVar128 = UNK_142e34c8d;
      cVar127 = UNK_142e34c8c;
      cVar126 = UNK_142e34c8b;
      cVar125 = UNK_142e34c8a;
      cVar124 = UNK_142e34c89;
      cVar123 = UNK_142e34c88;
      cVar122 = UNK_142e34c87;
      cVar121 = UNK_142e34c86;
      cVar120 = UNK_142e34c85;
      cVar119 = UNK_142e34c84;
      cVar118 = UNK_142e34c83;
      cVar117 = UNK_142e34c82;
      cVar116 = UNK_142e34c81;
      cVar115 = DAT_142e34c80;
      cVar114 = UNK_142e3460f;
      cVar113 = UNK_142e3460e;
      cVar112 = UNK_142e3460d;
      cVar111 = UNK_142e3460c;
      cVar110 = UNK_142e3460b;
      cVar109 = UNK_142e3460a;
      cVar108 = UNK_142e34609;
      cVar107 = UNK_142e34608;
      cVar106 = UNK_142e34607;
      cVar105 = UNK_142e34606;
      cVar104 = UNK_142e34605;
      cVar103 = UNK_142e34604;
      cVar102 = UNK_142e34603;
      cVar101 = UNK_142e34602;
      cVar100 = UNK_142e34601;
      cVar131 = DAT_142e34600;
      if ((lVar137 + 0x13U < param_2) && ((char)uVar134 == '\0')) {
        do {
          pcVar1 = (char *)((longlong)param_1 + lVar137);
          auVar139[0] = -(*pcVar1 == cVar131);
          auVar139[1] = -(pcVar1[1] == cVar100);
          auVar139[2] = -(pcVar1[2] == cVar101);
          auVar139[3] = -(pcVar1[3] == cVar102);
          auVar139[4] = -(pcVar1[4] == cVar103);
          auVar139[5] = -(pcVar1[5] == cVar104);
          auVar139[6] = -(pcVar1[6] == cVar105);
          auVar139[7] = -(pcVar1[7] == cVar106);
          auVar139[8] = -(pcVar1[8] == cVar107);
          auVar139[9] = -(pcVar1[9] == cVar108);
          auVar139[10] = -(pcVar1[10] == cVar109);
          auVar139[0xb] = -(pcVar1[0xb] == cVar110);
          auVar139[0xc] = -(pcVar1[0xc] == cVar111);
          auVar139[0xd] = -(pcVar1[0xd] == cVar112);
          auVar139[0xe] = -(pcVar1[0xe] == cVar113);
          auVar139[0xf] = -(pcVar1[0xf] == cVar114);
          pcVar1 = (char *)((longlong)param_1 + lVar137 + 3);
          auVar142[0] = -(*pcVar1 == cVar115);
          auVar142[1] = -(pcVar1[1] == cVar116);
          auVar142[2] = -(pcVar1[2] == cVar117);
          auVar142[3] = -(pcVar1[3] == cVar118);
          auVar142[4] = -(pcVar1[4] == cVar119);
          auVar142[5] = -(pcVar1[5] == cVar120);
          auVar142[6] = -(pcVar1[6] == cVar121);
          auVar142[7] = -(pcVar1[7] == cVar122);
          auVar142[8] = -(pcVar1[8] == cVar123);
          auVar142[9] = -(pcVar1[9] == cVar124);
          auVar142[10] = -(pcVar1[10] == cVar125);
          auVar142[0xb] = -(pcVar1[0xb] == cVar126);
          auVar142[0xc] = -(pcVar1[0xc] == cVar127);
          auVar142[0xd] = -(pcVar1[0xd] == cVar128);
          auVar142[0xe] = -(pcVar1[0xe] == cVar129);
          auVar142[0xf] = -(pcVar1[0xf] == cVar130);
          auVar142 = auVar142 & auVar139;
          uVar4 = (ushort)(SUB161(auVar142 >> 7,0) & 1) |
                  (ushort)(SUB161(auVar142 >> 0xf,0) & 1) << 1 |
                  (ushort)(SUB161(auVar142 >> 0x17,0) & 1) << 2 |
                  (ushort)(SUB161(auVar142 >> 0x1f,0) & 1) << 3 |
                  (ushort)(SUB161(auVar142 >> 0x27,0) & 1) << 4 |
                  (ushort)(SUB161(auVar142 >> 0x2f,0) & 1) << 5 |
                  (ushort)(SUB161(auVar142 >> 0x37,0) & 1) << 6 |
                  (ushort)(SUB161(auVar142 >> 0x3f,0) & 1) << 7 |
                  (ushort)(SUB161(auVar142 >> 0x47,0) & 1) << 8 |
                  (ushort)(SUB161(auVar142 >> 0x4f,0) & 1) << 9 |
                  (ushort)(SUB161(auVar142 >> 0x57,0) & 1) << 10 |
                  (ushort)(SUB161(auVar142 >> 0x5f,0) & 1) << 0xb |
                  (ushort)(SUB161(auVar142 >> 0x67,0) & 1) << 0xc |
                  (ushort)(SUB161(auVar142 >> 0x6f,0) & 1) << 0xd |
                  (ushort)(SUB161(auVar142 >> 0x77,0) & 1) << 0xe |
                  (ushort)(byte)(auVar142[0xf] >> 7) << 0xf;
          if (uVar4 == 0) {
            uVar134 = 0;
          }
          else {
            uVar134 = pdb_142d89140(&puStack_d8,lVar137,uVar4,0);
            uVar134 = uVar134 & 0xffffffff;
          }
        } while ((lVar137 + 0x23U < param_2) && (lVar137 = lVar137 + 0x10, (char)uVar134 == '\0'));
      }
      pcVar1 = (char *)((longlong)param_1 + (param_2 - 0x13));
      pcVar2 = (char *)((longlong)param_1 + (param_2 - 0x10));
      auVar140[0] = -(*pcVar1 == DAT_142e34600);
      auVar140[1] = -(pcVar1[1] == UNK_142e34601);
      auVar140[2] = -(pcVar1[2] == UNK_142e34602);
      auVar140[3] = -(pcVar1[3] == UNK_142e34603);
      auVar140[4] = -(pcVar1[4] == UNK_142e34604);
      auVar140[5] = -(pcVar1[5] == UNK_142e34605);
      auVar140[6] = -(pcVar1[6] == UNK_142e34606);
      auVar140[7] = -(pcVar1[7] == UNK_142e34607);
      auVar140[8] = -(pcVar1[8] == UNK_142e34608);
      auVar140[9] = -(pcVar1[9] == UNK_142e34609);
      auVar140[10] = -(pcVar1[10] == UNK_142e3460a);
      auVar140[0xb] = -(pcVar1[0xb] == UNK_142e3460b);
      auVar140[0xc] = -(pcVar1[0xc] == UNK_142e3460c);
      auVar140[0xd] = -(pcVar1[0xd] == UNK_142e3460d);
      auVar140[0xe] = -(pcVar1[0xe] == UNK_142e3460e);
      auVar140[0xf] = -(pcVar1[0xf] == UNK_142e3460f);
      auVar143[0] = -(*pcVar2 == DAT_142e34c80);
      auVar143[1] = -(pcVar2[1] == UNK_142e34c81);
      auVar143[2] = -(pcVar2[2] == UNK_142e34c82);
      auVar143[3] = -(pcVar2[3] == UNK_142e34c83);
      auVar143[4] = -(pcVar2[4] == UNK_142e34c84);
      auVar143[5] = -(pcVar2[5] == UNK_142e34c85);
      auVar143[6] = -(pcVar2[6] == UNK_142e34c86);
      auVar143[7] = -(pcVar2[7] == UNK_142e34c87);
      auVar143[8] = -(pcVar2[8] == UNK_142e34c88);
      auVar143[9] = -(pcVar2[9] == UNK_142e34c89);
      auVar143[10] = -(pcVar2[10] == UNK_142e34c8a);
      auVar143[0xb] = -(pcVar2[0xb] == UNK_142e34c8b);
      auVar143[0xc] = -(pcVar2[0xc] == UNK_142e34c8c);
      auVar143[0xd] = -(pcVar2[0xd] == UNK_142e34c8d);
      auVar143[0xe] = -(pcVar2[0xe] == UNK_142e34c8e);
      auVar143[0xf] = -(pcVar2[0xf] == UNK_142e34c8f);
      auVar143 = auVar143 & auVar140;
      uVar4 = (ushort)(SUB161(auVar143 >> 7,0) & 1) | (ushort)(SUB161(auVar143 >> 0xf,0) & 1) << 1 |
              (ushort)(SUB161(auVar143 >> 0x17,0) & 1) << 2 |
              (ushort)(SUB161(auVar143 >> 0x1f,0) & 1) << 3 |
              (ushort)(SUB161(auVar143 >> 0x27,0) & 1) << 4 |
              (ushort)(SUB161(auVar143 >> 0x2f,0) & 1) << 5 |
              (ushort)(SUB161(auVar143 >> 0x37,0) & 1) << 6 |
              (ushort)(SUB161(auVar143 >> 0x3f,0) & 1) << 7 |
              (ushort)(SUB161(auVar143 >> 0x47,0) & 1) << 8 |
              (ushort)(SUB161(auVar143 >> 0x4f,0) & 1) << 9 |
              (ushort)(SUB161(auVar143 >> 0x57,0) & 1) << 10 |
              (ushort)(SUB161(auVar143 >> 0x5f,0) & 1) << 0xb |
              (ushort)(SUB161(auVar143 >> 0x67,0) & 1) << 0xc |
              (ushort)(SUB161(auVar143 >> 0x6f,0) & 1) << 0xd |
              (ushort)(SUB161(auVar143 >> 0x77,0) & 1) << 0xe |
              (ushort)(byte)(auVar143[0xf] >> 7) << 0xf;
      if (uVar4 == 0) {
        if ((uVar134 & 1) == 0) {
          return 1;
        }
      }
      else {
        bVar133 = pdb_142d89140(&puStack_d8,param_2 - 0x13,uVar4,uVar134);
        if (((bVar133 | (byte)uVar134) & 1) == 0) {
          return 1;
        }
      }
    }
  }
  return 0;
}

