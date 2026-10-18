// VA 0x140a90200, PDB extent 2422 bytes
// country_core::systems::backend::grow_grass::platform::grow_grass
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/backend/grow_grass.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: country_core::systems::backend::grow_grass::platform::grow_grass
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/backend/grow_grass.rs
   Extent: 2422 */

void pdb_140a90200(longlong *param_1,float *param_2,longlong *param_3)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  longlong lVar8;
  undefined8 uVar9;
  code *pcVar10;
  short sVar11;
  short sVar12;
  short sVar13;
  short sVar14;
  short sVar15;
  short sVar16;
  short sVar17;
  short sVar18;
  short sVar19;
  short sVar20;
  short sVar21;
  short sVar22;
  short sVar23;
  short sVar24;
  short sVar25;
  short sVar26;
  short sVar27;
  short sVar28;
  short sVar29;
  short sVar30;
  short sVar31;
  short sVar32;
  short sVar33;
  short sVar34;
  short sVar35;
  short sVar36;
  short sVar37;
  short sVar38;
  short sVar39;
  short sVar40;
  short sVar41;
  short sVar42;
  undefined1 auVar43 [15];
  undefined1 auVar44 [15];
  undefined1 auVar45 [15];
  undefined1 auVar46 [15];
  undefined1 auVar47 [15];
  undefined1 auVar48 [15];
  undefined1 auVar49 [15];
  undefined1 auVar50 [15];
  undefined1 auVar51 [15];
  undefined1 auVar52 [15];
  undefined1 auVar53 [15];
  undefined1 auVar54 [15];
  undefined1 auVar55 [15];
  undefined1 auVar56 [15];
  undefined1 auVar57 [16];
  undefined1 auVar58 [12];
  undefined1 auVar59 [15];
  undefined1 auVar60 [15];
  undefined1 auVar61 [15];
  undefined1 auVar62 [15];
  undefined1 auVar63 [15];
  undefined1 auVar64 [15];
  uint uVar65;
  int iVar66;
  undefined1 *puVar67;
  ulonglong *puVar68;
  longlong lVar69;
  ulonglong uVar70;
  byte *pbVar71;
  ulonglong uVar72;
  ulonglong uVar73;
  bool bVar74;
  float fVar75;
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  ulonglong uStack_1a8;
  ulonglong *puStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  ulonglong uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  ulonglong uStack_148;
  byte bStack_140;
  undefined7 uStack_13f;
  undefined1 auStack_138 [16];
  undefined1 auStack_128 [16];
  undefined1 auStack_118 [16];
  undefined8 uStack_108;
  ulonglong uStack_100;
  longlong *plStack_f8;
  ulonglong uStack_f0;
  byte *pbStack_e8;
  longlong lStack_e0;
  uint uStack_d8;
  undefined4 uStack_d4;
  ulonglong *puStack_d0;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined1 uStack_b8;
  undefined7 uStack_b7;
  undefined8 uStack_b0;
  ulonglong uStack_a8;
  ulonglong uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  ulonglong uStack_78;
  undefined8 uStack_70;
  float *pfStack_68;
  ulonglong uStack_60;
  ulonglong *puStack_58;
  byte bStack_4e;
  byte bStack_4d;
  byte bStack_4c;
  byte bStack_4b;
  byte bStack_4a;
  byte bStack_49;
  undefined8 uStack_48;
  
  uStack_48 = 0xfffffffffffffffe;
  if (*(char *)(param_2 + 1) != '\0') {
    return;
  }
  fVar75 = *(float *)(*param_3 + 0x58) + *param_2;
  *param_2 = fVar75;
  if (fVar75 <= _DAT_1430448d8) {
    return;
  }
  uStack_d8 = 0xd45254d;
  uStack_d4 = 0xfdb1ae3b;
  plStack_f8 = param_1;
  pfStack_68 = param_2;
  puVar67 = (undefined1 *)pdb_1408fdba0(&UNK_143038035,0xfdb1ae3b0d45254d);
  bStack_49 = puVar67[7];
  bStack_4a = puVar67[6];
  bStack_4b = puVar67[5];
  bStack_4c = puVar67[4];
  bStack_4d = puVar67[3];
  bStack_4e = puVar67[2];
  puStack_58 = (ulonglong *)CONCAT71(puStack_58._1_7_,*puVar67);
  uStack_60 = CONCAT71(uStack_60._1_7_,puVar67[1]);
  bVar1 = puVar67[0xb];
  bVar2 = puVar67[10];
  bVar3 = puVar67[8];
  bVar4 = puVar67[9];
  bVar5 = puVar67[0xe];
  bVar6 = puVar67[0xc];
  bVar7 = puVar67[0xd];
  pdb_14007ee60();
  puVar68 = (ulonglong *)pub_1406abab0(0xf,1);
  if (puVar68 == (ulonglong *)0x0) {
    pdb_142dc7e2a(1,0xf);
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  *puVar68 = ((ulonglong)puStack_58 & 0xff |
             (uStack_60 & 0xff) << 8 |
             (ulonglong)bStack_4e << 0x10 |
             (ulonglong)bStack_4d << 0x18 |
             (ulonglong)bStack_4c << 0x20 |
             (ulonglong)bStack_4b << 0x28 |
             (ulonglong)bStack_4a << 0x30 | (ulonglong)bStack_49 << 0x38) ^ 0x66789500ee05fddf;
  *(uint *)(puVar68 + 1) =
       ((uint)bVar3 | (uint)bVar4 << 8 | (uint)bVar2 << 0x10 | (uint)bVar1 << 0x18) ^ 0xefcd42ec;
  *(byte *)((longlong)puVar68 + 0xc) = bVar6 ^ 0xa4;
  *(byte *)((longlong)puVar68 + 0xd) = bVar7 ^ 0xc5;
  *(byte *)((longlong)puVar68 + 0xe) = bVar5 ^ 0x8c;
  uStack_150 = 0;
  uStack_148 = 0;
  uStack_160 = 0;
  uStack_158 = 0;
  uStack_170 = 0;
  uStack_168 = 0;
  uStack_180 = 0;
  uStack_178 = 0;
  bStack_140 = 0;
  uStack_1a8 = _DAT_143044fa8;
  puStack_1a0 = _UNK_143044fb0;
  uStack_198 = _DAT_143044fb8;
  uStack_190 = _UNK_143044fc0;
  uStack_188 = 0;
  uStack_d8 = 0;
  puStack_d0 = (ulonglong *)0x0;
  uStack_c8 = 7;
  uStack_c4 = 0;
  uStack_bc = 0;
  uStack_b8 = 0;
  uStack_c0 = 1;
  puStack_58 = puVar68;
  lVar69 = pdb_140f4a2a0(&uStack_d8,puVar68,0xf);
  uStack_d8 = (uint)lVar69;
  uStack_d4 = (undefined4)((ulonglong)lVar69 >> 0x20);
  puStack_d0 = puVar68;
  if (lVar69 == 1) {
    pdb_1404b38e0(&puStack_d0);
LAB_140a904a6:
    pub_1406abac0((byte *)puStack_58,0xf,1);
  }
  else {
    auStack_138._0_8_ = puVar68;
    puVar68 = &uStack_1a8;
    uVar65 = pdb_140c911f0(auStack_138);
    uStack_d8 = uVar65 & 1;
    uStack_d4 = 0;
    puStack_d0 = puVar68;
    if ((uVar65 & 1) != 0) {
      pdb_1404b38e0(&puStack_d0);
      CloseHandle(auStack_138._0_8_);
      goto LAB_140a904a6;
    }
    CloseHandle(auStack_138._0_8_);
    bVar1 = bStack_140;
    uStack_70 = CONCAT71(uStack_13f,bStack_140);
    uStack_78 = uStack_148;
    uStack_b8 = (undefined1)uStack_188;
    uStack_b7 = (undefined7)(uStack_188 >> 8);
    uStack_b0 = uStack_180;
    uStack_88 = uStack_158;
    uStack_80 = uStack_150;
    uStack_98 = uStack_168;
    uStack_90 = uStack_160;
    uStack_a8 = uStack_178;
    uStack_a0 = uStack_170;
    uStack_c8 = (undefined4)uStack_198;
    uStack_c4 = (undefined4)((ulonglong)uStack_198 >> 0x20);
    uStack_c0 = (undefined4)uStack_190;
    uStack_bc = (undefined4)((ulonglong)uStack_190 >> 0x20);
    uStack_d8 = (uint)uStack_1a8;
    uStack_d4 = (undefined4)(uStack_1a8 >> 0x20);
    puStack_d0 = puStack_1a0;
    uVar72 = (ulonglong)bStack_140;
    uVar70 = uStack_188 << 9;
    uVar70 = (uStack_188 & 0x7fffffffffffff) >> 0x2f | (uVar70 & 0xff000000000000) >> 0x28 |
             (uVar70 & 0xff0000000000) >> 0x18 | (uVar70 & 0xff00000000) >> 8 |
             (uVar70 & 0xff000000) << 8 | (uVar70 & 0xff0000) << 0x18 |
             (((uint)bStack_140 * 8 | uVar70) & 0xff00) << 0x28 |
             (ulonglong)((uint)bStack_140 * 8) << 0x38;
    *(undefined1 *)((longlong)&uStack_b0 + uVar72) = 0x80;
    if ((bStack_140 == 0x3f) ||
       (pub_142e32780((longlong)&uStack_b0 + uVar72 + 1,0,uVar72 ^ 0x3f), (bVar1 ^ 0x38) < 8)) {
      pdb_141c17860(&uStack_d8,&uStack_b0,1);
      auStack_118 = (undefined1  [16])0x0;
      auStack_128 = (undefined1  [16])0x0;
      auStack_138 = (undefined1  [16])0x0;
      uStack_108 = 0;
      uStack_100 = uVar70;
      pdb_141c17860(&uStack_d8,auStack_138,1);
    }
    else {
      uStack_78 = uVar70;
      pdb_141c17860(&uStack_d8,&uStack_b0,1);
    }
    auVar76._8_8_ = puStack_d0;
    auVar76._0_8_ = CONCAT44(uStack_d4,uStack_d8);
    auVar58._8_4_ = uStack_c0;
    auVar58._0_8_ = CONCAT44(uStack_c4,uStack_c8);
    auVar57._12_4_ = uStack_bc;
    auVar57._0_12_ = auVar58;
    auVar79[1] = 0;
    auVar79[0] = (byte)puStack_d0;
    auVar79[2] = (char)((ulonglong)puStack_d0 >> 8);
    auVar79[3] = 0;
    auVar79[4] = (char)((ulonglong)puStack_d0 >> 0x10);
    auVar79[5] = 0;
    auVar79[6] = (char)((ulonglong)puStack_d0 >> 0x18);
    auVar79[7] = 0;
    auVar79[8] = (char)((ulonglong)puStack_d0 >> 0x20);
    auVar79[9] = 0;
    auVar79[10] = (char)((ulonglong)puStack_d0 >> 0x28);
    auVar79[0xb] = 0;
    auVar79[0xc] = (char)((ulonglong)puStack_d0 >> 0x30);
    auVar79[0xd] = 0;
    auVar79[0xe] = (char)((ulonglong)puStack_d0 >> 0x38);
    auVar79[0xf] = 0;
    auVar78 = pshuflw(auVar79,auVar79,0x1b);
    auVar79 = pshufhw(auVar78,auVar78,0x1b);
    auVar43[0xd] = 0;
    auVar43._0_13_ = auVar76._0_13_;
    auVar43[0xe] = (char)((uint)uStack_d4 >> 0x18);
    auVar45[0xc] = (char)((uint)uStack_d4 >> 0x10);
    auVar45._0_12_ = auVar76._0_12_;
    auVar45._13_2_ = auVar43._13_2_;
    auVar47[0xb] = 0;
    auVar47._0_11_ = auVar76._0_11_;
    auVar47._12_3_ = auVar45._12_3_;
    auVar49[10] = (char)((uint)uStack_d4 >> 8);
    auVar49._0_10_ = auVar76._0_10_;
    auVar49._11_4_ = auVar47._11_4_;
    auVar51[9] = 0;
    auVar51._0_9_ = auVar76._0_9_;
    auVar51._10_5_ = auVar49._10_5_;
    auVar53[8] = (char)uStack_d4;
    auVar53._0_8_ = CONCAT44(uStack_d4,uStack_d8);
    auVar53._9_6_ = auVar51._9_6_;
    auVar59._7_8_ = 0;
    auVar59._0_7_ = auVar53._8_7_;
    auVar61._1_8_ = SUB158(auVar59 << 0x40,7);
    auVar61[0] = (char)(uStack_d8 >> 0x18);
    auVar61._9_6_ = 0;
    auVar62._1_10_ = SUB1510(auVar61 << 0x30,5);
    auVar62[0] = (char)(uStack_d8 >> 0x10);
    auVar62._11_4_ = 0;
    auVar55[2] = (char)(uStack_d8 >> 8);
    auVar55._0_2_ = (ushort)uStack_d8;
    auVar55._3_12_ = SUB1512(auVar62 << 0x20,3);
    auVar78._0_2_ = (ushort)uStack_d8 & 0xff;
    auVar78._2_13_ = auVar55._2_13_;
    auVar78[0xf] = 0;
    auVar76 = pshuflw(auVar78,auVar78,0x1b);
    auVar78 = pshufhw(auVar76,auVar76,0x1b);
    sVar11 = auVar78._0_2_;
    sVar13 = auVar78._2_2_;
    sVar15 = auVar78._4_2_;
    sVar17 = auVar78._6_2_;
    sVar19 = auVar78._8_2_;
    sVar21 = auVar78._10_2_;
    sVar23 = auVar78._12_2_;
    sVar25 = auVar78._14_2_;
    sVar27 = auVar79._0_2_;
    sVar29 = auVar79._2_2_;
    sVar31 = auVar79._4_2_;
    sVar33 = auVar79._6_2_;
    sVar35 = auVar79._8_2_;
    sVar37 = auVar79._10_2_;
    sVar39 = auVar79._12_2_;
    sVar41 = auVar79._14_2_;
    auVar80[1] = 0;
    auVar80[0] = (byte)uStack_c0;
    auVar80[2] = (char)((uint)uStack_c0 >> 8);
    auVar80[3] = 0;
    auVar80[4] = (char)((uint)uStack_c0 >> 0x10);
    auVar80[5] = 0;
    auVar80[6] = (char)((uint)uStack_c0 >> 0x18);
    auVar80[7] = 0;
    auVar80[8] = (char)uStack_bc;
    auVar80[9] = 0;
    auVar80[10] = (char)((uint)uStack_bc >> 8);
    auVar80[0xb] = 0;
    auVar80[0xc] = (char)((uint)uStack_bc >> 0x10);
    auVar80[0xd] = 0;
    auVar80[0xe] = (char)((uint)uStack_bc >> 0x18);
    auVar80[0xf] = 0;
    auVar76 = pshuflw(auVar80,auVar80,0x1b);
    auVar80 = pshufhw(auVar76,auVar76,0x1b);
    auVar44[0xd] = 0;
    auVar44._0_13_ = auVar57._0_13_;
    auVar44[0xe] = (char)((uint)uStack_c4 >> 0x18);
    auVar46[0xc] = (char)((uint)uStack_c4 >> 0x10);
    auVar46._0_12_ = auVar58;
    auVar46._13_2_ = auVar44._13_2_;
    auVar48[0xb] = 0;
    auVar48._0_11_ = auVar58._0_11_;
    auVar48._12_3_ = auVar46._12_3_;
    auVar50[10] = (char)((uint)uStack_c4 >> 8);
    auVar50._0_10_ = auVar58._0_10_;
    auVar50._11_4_ = auVar48._11_4_;
    auVar52[9] = 0;
    auVar52._0_9_ = auVar58._0_9_;
    auVar52._10_5_ = auVar50._10_5_;
    auVar54[8] = (char)uStack_c4;
    auVar54._0_8_ = CONCAT44(uStack_c4,uStack_c8);
    auVar54._9_6_ = auVar52._9_6_;
    auVar60._7_8_ = 0;
    auVar60._0_7_ = auVar54._8_7_;
    auVar63._1_8_ = SUB158(auVar60 << 0x40,7);
    auVar63[0] = (char)((uint)uStack_c8 >> 0x18);
    auVar63._9_6_ = 0;
    auVar64._1_10_ = SUB1510(auVar63 << 0x30,5);
    auVar64[0] = (char)((uint)uStack_c8 >> 0x10);
    auVar64._11_4_ = 0;
    auVar56[2] = (char)((uint)uStack_c8 >> 8);
    auVar56._0_2_ = (ushort)uStack_c8;
    auVar56._3_12_ = SUB1512(auVar64 << 0x20,3);
    auVar77._0_2_ = (ushort)uStack_c8 & 0xff;
    auVar77._2_13_ = auVar56._2_13_;
    auVar77[0xf] = 0;
    auVar76 = pshuflw((undefined1  [16])0x0,auVar77,0x1b);
    auVar76 = pshufhw(auVar76,auVar76,0x1b);
    sVar12 = auVar76._0_2_;
    sVar14 = auVar76._2_2_;
    sVar16 = auVar76._4_2_;
    sVar18 = auVar76._6_2_;
    sVar20 = auVar76._8_2_;
    sVar22 = auVar76._10_2_;
    sVar24 = auVar76._12_2_;
    sVar26 = auVar76._14_2_;
    sVar28 = auVar80._0_2_;
    sVar30 = auVar80._2_2_;
    sVar32 = auVar80._4_2_;
    sVar34 = auVar80._6_2_;
    sVar36 = auVar80._8_2_;
    sVar38 = auVar80._10_2_;
    sVar40 = auVar80._12_2_;
    sVar42 = auVar80._14_2_;
    auStack_138[1] = (0 < sVar13) * (sVar13 < 0x100) * auVar78[2] - (0xff < sVar13);
    auStack_138[0] = (0 < sVar11) * (sVar11 < 0x100) * auVar78[0] - (0xff < sVar11);
    auStack_138[2] = (0 < sVar15) * (sVar15 < 0x100) * auVar78[4] - (0xff < sVar15);
    auStack_138[3] = (0 < sVar17) * (sVar17 < 0x100) * auVar78[6] - (0xff < sVar17);
    auStack_138[4] = (0 < sVar19) * (sVar19 < 0x100) * auVar78[8] - (0xff < sVar19);
    auStack_138[5] = (0 < sVar21) * (sVar21 < 0x100) * auVar78[10] - (0xff < sVar21);
    auStack_138[6] = (0 < sVar23) * (sVar23 < 0x100) * auVar78[0xc] - (0xff < sVar23);
    auStack_138[7] = (0 < sVar25) * (sVar25 < 0x100) * auVar78[0xe] - (0xff < sVar25);
    auStack_138[8] = (0 < sVar27) * (sVar27 < 0x100) * auVar79[0] - (0xff < sVar27);
    auStack_138[9] = (0 < sVar29) * (sVar29 < 0x100) * auVar79[2] - (0xff < sVar29);
    auStack_138[10] = (0 < sVar31) * (sVar31 < 0x100) * auVar79[4] - (0xff < sVar31);
    auStack_138[0xb] = (0 < sVar33) * (sVar33 < 0x100) * auVar79[6] - (0xff < sVar33);
    auStack_138[0xc] = (0 < sVar35) * (sVar35 < 0x100) * auVar79[8] - (0xff < sVar35);
    auStack_138[0xd] = (0 < sVar37) * (sVar37 < 0x100) * auVar79[10] - (0xff < sVar37);
    auStack_138[0xe] = (0 < sVar39) * (sVar39 < 0x100) * auVar79[0xc] - (0xff < sVar39);
    auStack_138[0xf] = (0 < sVar41) * (sVar41 < 0x100) * auVar79[0xe] - (0xff < sVar41);
    auStack_128[1] = (0 < sVar14) * (sVar14 < 0x100) * auVar76[2] - (0xff < sVar14);
    auStack_128[0] = (0 < sVar12) * (sVar12 < 0x100) * auVar76[0] - (0xff < sVar12);
    auStack_128[2] = (0 < sVar16) * (sVar16 < 0x100) * auVar76[4] - (0xff < sVar16);
    auStack_128[3] = (0 < sVar18) * (sVar18 < 0x100) * auVar76[6] - (0xff < sVar18);
    auStack_128[4] = (0 < sVar20) * (sVar20 < 0x100) * auVar76[8] - (0xff < sVar20);
    auStack_128[5] = (0 < sVar22) * (sVar22 < 0x100) * auVar76[10] - (0xff < sVar22);
    auStack_128[6] = (0 < sVar24) * (sVar24 < 0x100) * auVar76[0xc] - (0xff < sVar24);
    auStack_128[7] = (0 < sVar26) * (sVar26 < 0x100) * auVar76[0xe] - (0xff < sVar26);
    auStack_128[8] = (0 < sVar28) * (sVar28 < 0x100) * auVar80[0] - (0xff < sVar28);
    auStack_128[9] = (0 < sVar30) * (sVar30 < 0x100) * auVar80[2] - (0xff < sVar30);
    auStack_128[10] = (0 < sVar32) * (sVar32 < 0x100) * auVar80[4] - (0xff < sVar32);
    auStack_128[0xb] = (0 < sVar34) * (sVar34 < 0x100) * auVar80[6] - (0xff < sVar34);
    auStack_128[0xc] = (0 < sVar36) * (sVar36 < 0x100) * auVar80[8] - (0xff < sVar36);
    auStack_128[0xd] = (0 < sVar38) * (sVar38 < 0x100) * auVar80[10] - (0xff < sVar38);
    auStack_128[0xe] = (0 < sVar40) * (sVar40 < 0x100) * auVar80[0xc] - (0xff < sVar40);
    auStack_128[0xf] = (0 < sVar42) * (sVar42 < 0x100) * auVar80[0xe] - (0xff < sVar42);
    pdb_141c1aae0(&uStack_f0,auStack_138,0x20);
    uStack_d8 = 0x64ea005b;
    uStack_d4 = 0x301f35b4;
    pbVar71 = (byte *)pdb_1408fdbc0(&UNK_143037faa,0x301f35b464ea005b);
    uStack_60 = ((ulonglong)pbVar71[1] << 8 |
                 (ulonglong)pbVar71[2] << 0x10 |
                 (ulonglong)pbVar71[3] << 0x18 |
                 (ulonglong)pbVar71[4] << 0x20 |
                 (ulonglong)pbVar71[5] << 0x28 |
                 (ulonglong)pbVar71[6] << 0x30 | (ulonglong)pbVar71[7] << 0x38 | (ulonglong)*pbVar71
                ) ^ 0x46d6abe57d16d0c2;
    puStack_d0 = (ulonglong *)
                 (((ulonglong)pbVar71[9] << 8 |
                   (ulonglong)pbVar71[10] << 0x10 |
                   (ulonglong)pbVar71[0xb] << 0x18 |
                   (ulonglong)pbVar71[0xc] << 0x20 |
                   (ulonglong)pbVar71[0xd] << 0x28 |
                   (ulonglong)pbVar71[0xe] << 0x30 | (ulonglong)pbVar71[0xf] << 0x38 |
                  (ulonglong)pbVar71[8]) ^ 0x6aeeb742e6e20430);
    uVar72 = ((ulonglong)pbVar71[0x11] << 8 |
              (ulonglong)pbVar71[0x12] << 0x10 |
              (ulonglong)pbVar71[0x13] << 0x18 |
              (ulonglong)pbVar71[0x14] << 0x20 |
              (ulonglong)pbVar71[0x15] << 0x28 |
              (ulonglong)pbVar71[0x16] << 0x30 | (ulonglong)pbVar71[0x17] << 0x38 |
             (ulonglong)pbVar71[0x10]) ^ 0xd30f64de3cd38161;
    uVar70 = ((ulonglong)pbVar71[0x19] << 8 |
              (ulonglong)pbVar71[0x1a] << 0x10 |
              (ulonglong)pbVar71[0x1b] << 0x18 |
              (ulonglong)pbVar71[0x1c] << 0x20 |
              (ulonglong)pbVar71[0x1d] << 0x28 |
              (ulonglong)pbVar71[0x1e] << 0x30 | (ulonglong)pbVar71[0x1f] << 0x38 |
             (ulonglong)pbVar71[0x18]) ^ 0x7011530ccd03d994;
    uVar73 = ((ulonglong)pbVar71[0x21] << 8 |
              (ulonglong)pbVar71[0x22] << 0x10 |
              (ulonglong)pbVar71[0x23] << 0x18 |
              (ulonglong)pbVar71[0x24] << 0x20 |
              (ulonglong)pbVar71[0x25] << 0x28 |
              (ulonglong)pbVar71[0x26] << 0x30 | (ulonglong)pbVar71[0x27] << 0x38 |
             (ulonglong)pbVar71[0x20]) ^ 0x9c41e008146f38b4;
    uStack_b0 = ((ulonglong)pbVar71[0x29] << 8 |
                 (ulonglong)pbVar71[0x2a] << 0x10 |
                 (ulonglong)pbVar71[0x2b] << 0x18 |
                 (ulonglong)pbVar71[0x2c] << 0x20 |
                 (ulonglong)pbVar71[0x2d] << 0x28 |
                 (ulonglong)pbVar71[0x2e] << 0x30 | (ulonglong)pbVar71[0x2f] << 0x38 |
                (ulonglong)pbVar71[0x28]) ^ 0xa082c071a856b528;
    uStack_a8 = ((ulonglong)pbVar71[0x31] << 8 |
                 (ulonglong)pbVar71[0x32] << 0x10 |
                 (ulonglong)pbVar71[0x33] << 0x18 |
                 (ulonglong)pbVar71[0x34] << 0x20 |
                 (ulonglong)pbVar71[0x35] << 0x28 |
                 (ulonglong)pbVar71[0x36] << 0x30 | (ulonglong)pbVar71[0x37] << 0x38 |
                (ulonglong)pbVar71[0x30]) ^ 0x42fa0155e91f1ad7;
    uStack_a0 = ((ulonglong)pbVar71[0x39] << 8 |
                 (ulonglong)pbVar71[0x3a] << 0x10 |
                 (ulonglong)pbVar71[0x3b] << 0x18 |
                 (ulonglong)pbVar71[0x3c] << 0x20 |
                 (ulonglong)pbVar71[0x3d] << 0x28 |
                 (ulonglong)pbVar71[0x3e] << 0x30 | (ulonglong)pbVar71[0x3f] << 0x38 |
                (ulonglong)pbVar71[0x38]) ^ 0x4adb514658c4a79d;
    uStack_d8 = (uint)uStack_60;
    uStack_d4 = (undefined4)(uStack_60 >> 0x20);
    uStack_c8 = (undefined4)uVar72;
    uStack_c4 = (undefined4)(uVar72 >> 0x20);
    uStack_c0 = (undefined4)uVar70;
    uStack_bc = (undefined4)(uVar70 >> 0x20);
    uStack_b8 = (undefined1)uVar73;
    uStack_b7 = (undefined7)(uVar73 >> 8);
    bVar74 = true;
    if (lStack_e0 == 0x40) {
      iVar66 = pub_142e32750(pbStack_e8,&uStack_d8,0x40);
      bVar74 = iVar66 != 0;
    }
    if (uStack_f0 != 0) {
      pub_1406abac0(pbStack_e8,uStack_f0,1);
    }
    pub_1406abac0((byte *)puStack_58,0xf,1);
    if (!bVar74) goto LAB_140a90506;
  }
  *(undefined4 *)plStack_f8[2] = *(undefined4 *)((longlong)plStack_f8 + 0x1c);
  lVar69 = *plStack_f8;
  lVar8 = *(longlong *)(lVar69 + 0x30);
  uVar9 = *(undefined8 *)(lVar69 + 0x40);
  if (lVar8 == *(longlong *)(lVar69 + 0x20)) {
    pdb_142d7e8a0(lVar69 + 0x20);
  }
  *(undefined8 *)(*(longlong *)(lVar69 + 0x28) + lVar8 * 8) = uVar9;
  *(longlong *)(lVar69 + 0x30) = lVar8 + 1;
  *(longlong *)(lVar69 + 0x40) = *(longlong *)(lVar69 + 0x40) + 1;
LAB_140a90506:
  *(undefined1 *)(pfStack_68 + 1) = 1;
  return;
}

