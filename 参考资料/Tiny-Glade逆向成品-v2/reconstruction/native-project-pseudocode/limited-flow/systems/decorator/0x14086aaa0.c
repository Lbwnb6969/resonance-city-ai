// VA 0x14086aaa0, PDB extent 15854 bytes
// system_decorator::ui_systems::ui_place_decorator::ui_place_decorator
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/decorator/src/ui_systems/ui_place_decorator.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   system_decorator::ui_systems::ui_place_decorator::ui_place_decorator
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/decorator/src/ui_systems/ui_place_decorator.rs
   Extent: 15854 */

void pdb_14086aaa0(undefined8 *param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4,
                  undefined8 *param_5,longlong *param_6,longlong param_7,undefined8 param_8,
                  undefined8 *param_9)

{
  undefined1 auVar1 [16];
  undefined2 uVar2;
  undefined4 uVar3;
  float fVar4;
  char *pcVar5;
  undefined4 *puVar6;
  ulonglong uVar7;
  byte *pbVar8;
  code *pcVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  ulonglong uVar16;
  undefined1 uVar17;
  undefined1 uVar18;
  undefined1 uVar19;
  undefined1 uVar20;
  undefined1 uVar21;
  undefined1 uVar22;
  undefined1 uVar23;
  undefined1 uVar24;
  undefined1 uVar25;
  undefined1 uVar26;
  undefined1 uVar27;
  undefined1 uVar28;
  undefined1 uVar29;
  undefined1 uVar30;
  float fVar31;
  undefined1 uVar32;
  byte bVar33;
  char cVar34;
  undefined1 uVar35;
  uint uVar36;
  undefined4 uVar37;
  undefined4 uVar38;
  uint *puVar39;
  ulonglong uVar40;
  byte *pbVar41;
  longlong *plVar42;
  undefined8 *puVar43;
  undefined8 uVar44;
  longlong lVar45;
  uint *puVar46;
  ulonglong uVar47;
  byte *pbVar48;
  longlong lVar49;
  ulonglong uVar50;
  ulonglong *puVar51;
  uint uVar52;
  longlong lVar53;
  undefined1 (*pauVar54) [16];
  undefined1 (*pauVar55) [16];
  byte bVar56;
  uint *puVar57;
  ulonglong uVar58;
  uint uVar59;
  ushort uVar60;
  ulonglong uVar61;
  undefined1 uVar62;
  int iVar63;
  float fVar64;
  uint *puVar65;
  uint *puVar66;
  undefined8 uVar67;
  longlong lVar68;
  uint *puVar69;
  bool bVar70;
  float fVar71;
  float fVar72;
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined1 unaff_XMM11_Ba;
  undefined1 unaff_XMM11_Bb;
  undefined1 unaff_XMM11_Bc;
  undefined1 unaff_XMM11_Bd;
  undefined1 unaff_XMM11_Be;
  undefined1 unaff_XMM11_Bf;
  undefined1 unaff_XMM11_Bg;
  undefined1 unaff_XMM11_Bh;
  undefined1 unaff_XMM11_Bi;
  undefined1 unaff_XMM11_Bj;
  undefined1 unaff_XMM11_Bk;
  undefined1 unaff_XMM11_Bl;
  undefined1 unaff_XMM11_Bm;
  undefined1 unaff_XMM11_Bn;
  undefined1 unaff_XMM11_Bo;
  undefined1 unaff_XMM11_Bp;
  uint uVar76;
  float fVar77;
  undefined8 in_stack_fffffffffffff7c8;
  undefined8 auStack_7c0 [8];
  undefined1 auStack_780 [120];
  undefined8 uStack_708;
  undefined8 uStack_700;
  undefined8 uStack_6f8;
  undefined8 uStack_6f0;
  undefined8 uStack_6e8;
  undefined8 uStack_6e0;
  undefined8 uStack_6d8;
  undefined8 uStack_6d0;
  undefined1 auStack_6c0 [24];
  undefined8 uStack_6a8;
  undefined8 uStack_6a0;
  undefined1 auStack_698 [16];
  undefined8 uStack_688;
  undefined8 uStack_680;
  undefined8 uStack_678;
  undefined8 uStack_670;
  undefined8 uStack_668;
  undefined8 uStack_660;
  undefined8 uStack_658;
  undefined8 uStack_648;
  undefined8 uStack_640;
  undefined8 uStack_638;
  undefined8 uStack_630;
  undefined1 auStack_628 [16];
  undefined4 uStack_618;
  undefined4 uStack_614;
  undefined4 uStack_610;
  undefined4 uStack_60c;
  undefined8 uStack_608;
  undefined8 *puStack_600;
  ulonglong uStack_5f8;
  ulonglong uStack_5f0;
  byte *pbStack_5e8;
  undefined8 uStack_5e0;
  undefined1 auStack_5d8 [16];
  undefined1 uStack_5c8;
  undefined2 uStack_5c7;
  undefined1 uStack_5a9;
  undefined8 uStack_5a8;
  undefined1 uStack_5a0;
  undefined1 uStack_59f;
  char cStack_59e;
  char acStack_570 [12];
  undefined4 uStack_564;
  undefined4 *puStack_560;
  undefined8 uStack_558;
  undefined8 uStack_550;
  undefined8 uStack_548;
  undefined8 uStack_540;
  undefined8 uStack_538;
  undefined8 uStack_530;
  uint *puStack_508;
  undefined8 uStack_500;
  undefined4 *puStack_4f8;
  undefined8 uStack_4f0;
  undefined8 uStack_4e8;
  undefined8 uStack_4e0;
  undefined8 uStack_4d8;
  undefined8 uStack_4d0;
  undefined8 uStack_4c8;
  ulonglong uStack_4c0;
  longlong lStack_4b8;
  uint uStack_4b0;
  uint uStack_4ac;
  longlong lStack_4a8;
  undefined8 uStack_440;
  char *pcStack_438;
  undefined8 uStack_430;
  char *pcStack_428;
  undefined8 uStack_420;
  undefined8 uStack_408;
  undefined4 uStack_400;
  undefined8 uStack_3f8;
  ulonglong uStack_3f0;
  undefined4 uStack_3b4;
  undefined4 uStack_3b0;
  undefined4 uStack_3ac;
  uint *puStack_3a8;
  longlong lStack_3a0;
  undefined8 uStack_398;
  undefined8 uStack_390;
  longlong lStack_388;
  uint *puStack_380;
  longlong lStack_378;
  undefined8 uStack_350;
  undefined4 *puStack_348;
  ulonglong *puStack_340;
  undefined1 (*pauStack_338) [16];
  undefined4 *puStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined8 uStack_2f8;
  uint *puStack_2f0;
  longlong lStack_2e8;
  undefined8 uStack_2e0;
  undefined1 auStack_2d8 [8];
  undefined8 uStack_2d0;
  byte *pbStack_2c8;
  longlong lStack_2c0;
  byte *pbStack_2b8;
  longlong lStack_2b0;
  byte *pbStack_2a8;
  undefined8 uStack_270;
  undefined4 *puStack_268;
  undefined4 *puStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined4 *puStack_248;
  undefined8 uStack_240;
  uint *puStack_230;
  float fStack_228;
  undefined4 uStack_224;
  float fStack_220;
  undefined4 uStack_21c;
  undefined4 uStack_218;
  undefined4 uStack_214;
  undefined3 uStack_210;
  undefined4 uStack_20d;
  undefined1 uStack_209;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined1 auStack_1f0 [16];
  undefined8 uStack_1e0;
  longlong lStack_1d8;
  longlong lStack_1d0;
  ulonglong uStack_1c8;
  undefined4 uStack_1c0;
  uint uStack_1bc;
  undefined1 uStack_1b8;
  undefined1 uStack_1b7;
  undefined1 uStack_1b6;
  undefined1 uStack_1b4;
  uint *puStack_1b0;
  uint *puStack_1a8;
  undefined4 uStack_1a0;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  longlong lStack_178;
  uint *puStack_170;
  ulonglong *puStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  ulonglong *puStack_150;
  uint *puStack_148;
  longlong lStack_140;
  undefined4 uStack_138;
  undefined4 uStack_134;
  uint *puStack_130;
  undefined8 uStack_128;
  uint *puStack_120;
  uint *puStack_118;
  undefined4 *puStack_110;
  uint *puStack_108;
  uint *puStack_100;
  undefined1 uStack_f1;
  undefined8 uStack_f0;
  
  uVar37 = (undefined4)((ulonglong)in_stack_fffffffffffff7c8 >> 0x20);
  uStack_f0 = 0xfffffffffffffffe;
  uStack_128 = *param_1;
  puStack_260 = (undefined4 *)param_1[2];
  uStack_134 = *(undefined4 *)((longlong)param_1 + 0x1c);
  uStack_270 = param_1[4];
  puStack_268 = (undefined4 *)param_1[6];
  uStack_138 = *(undefined4 *)((longlong)param_1 + 0x3c);
  uStack_2f8 = param_1[8];
  uStack_4e8 = param_1[0xc];
  uStack_4e0 = param_1[0xd];
  uStack_4d8 = param_1[0xe];
  uStack_4d0 = param_1[0xf];
  uStack_708 = param_1[0x10];
  uStack_700 = param_1[0x11];
  uStack_6f8 = param_1[0x12];
  uStack_6f0 = param_1[0x13];
  uStack_6e8 = param_1[0x14];
  uStack_6e0 = param_1[0x15];
  uStack_6d8 = param_1[0x16];
  uStack_6d0 = param_1[0x17];
  uStack_648 = param_1[0x18];
  uStack_640 = param_1[0x19];
  uStack_638 = param_1[0x1a];
  uStack_630 = param_1[0x1b];
  auStack_628 = *(undefined1 (*) [16])(param_1 + 0x1c);
  uStack_618 = *(undefined4 *)(param_1 + 0x1e);
  uStack_614 = *(undefined4 *)((longlong)param_1 + 0xf4);
  uStack_610 = *(undefined4 *)(param_1 + 0x1f);
  uStack_60c = *(undefined4 *)((longlong)param_1 + 0xfc);
  uStack_558 = param_1[0x20];
  uStack_658 = param_3[6];
  uStack_550 = param_1[0x22];
  uStack_258 = param_1[0x38];
  uStack_250 = param_1[0x39];
  puStack_248 = (undefined4 *)param_1[0x3a];
  uStack_240 = param_1[0x3b];
  uStack_3ac = *(undefined4 *)((longlong)param_1 + 0x11c);
  lStack_2e8 = param_1[0x24];
  puStack_330 = (undefined4 *)param_1[0x26];
  uStack_17c = *(undefined4 *)((longlong)param_1 + 0x13c);
  puStack_168 = (ulonglong *)param_1[0x28];
  uStack_350 = param_1[0x2c];
  puStack_348 = (undefined4 *)param_1[0x2e];
  uStack_180 = *(undefined4 *)((longlong)param_1 + 0x17c);
  uStack_158 = param_1[0x30];
  uStack_538 = param_1[0x34];
  puVar51 = (ulonglong *)param_1[0x3c];
  lVar53 = param_1[0x3d];
  uStack_668 = param_3[4];
  uStack_660 = param_3[5];
  uStack_2e0 = *param_3;
  uStack_420 = param_3[7];
  uStack_530 = param_3[0xb];
  uStack_540 = param_3[0xf];
  uStack_398 = param_3[0x13];
  uStack_440 = param_3[0x17];
  pcVar5 = (char *)*param_4;
  uStack_430 = param_4[4];
  uStack_160 = param_4[8];
  uStack_548 = param_4[0xc];
  puVar43 = param_4 + 0x10;
  uStack_390 = param_2;
  pub_142e32760(auStack_7c0,puVar43,0xa0);
  uStack_320 = param_4[0x24];
  uStack_328 = param_4[0x28];
  uStack_688 = *(undefined8 *)(param_7 + 0x20);
  uStack_680 = *(undefined8 *)(param_7 + 0x28);
  uStack_678 = *(undefined8 *)(param_7 + 0x30);
  uStack_670 = *(undefined8 *)(param_7 + 0x38);
  puStack_508 = *(uint **)(param_7 + 0x40);
  uStack_500 = *(undefined8 *)(param_7 + 0x48);
  puStack_4f8 = *(undefined4 **)(param_7 + 0x50);
  uStack_4f0 = *(undefined8 *)(param_7 + 0x58);
  puStack_150 = *(ulonglong **)(param_7 + 0x60);
  lVar45 = *(longlong *)(param_7 + 0x68);
  puStack_340 = *(ulonglong **)(param_7 + 0x88);
  puStack_3a8 = *(uint **)(param_7 + 0x90);
  uStack_6a8 = *(undefined8 *)(param_7 + 0xb0);
  uStack_6a0 = *(undefined8 *)(param_7 + 0xb8);
  auStack_698 = *(undefined1 (*) [16])(param_7 + 0xc0);
  pcStack_438 = (char *)*param_9;
  lStack_3a0 = param_9[1];
  puStack_560 = (undefined4 *)param_9[3];
  uStack_3b0 = *(undefined4 *)((longlong)param_9 + 0x24);
  *(undefined4 *)param_5[2] = *(undefined4 *)((longlong)param_5 + 0x1c);
  puVar6 = (undefined4 *)*param_5;
  uStack_608 = pdb_140c47770(&uStack_708);
  if (*pcVar5 != '\x06') {
    uStack_21c = uStack_21c & 0xff000000;
    uStack_224 = 0;
    fStack_220 = 0.0;
    *puVar6 = 0;
    *(ulonglong *)(puVar6 + 1) = (ulonglong)(uint)fStack_228;
    *(undefined8 *)((longlong)puVar6 + 0xb) = 0;
  }
  uVar40 = *puVar51;
  puVar39 = (uint *)0x0;
  puVar66 = (uint *)(uVar40 - *(ulonglong *)(lVar53 + 0x18));
  if (uVar40 < *(ulonglong *)(lVar53 + 0x18)) {
    puVar66 = puVar39;
  }
  puVar46 = (uint *)(uVar40 - *(ulonglong *)(lVar53 + 0x38));
  if (uVar40 < *(ulonglong *)(lVar53 + 0x38)) {
    puVar46 = puVar39;
  }
  puVar69 = *(uint **)(lVar53 + 0x10);
  puStack_100 = *(uint **)(lVar53 + 0x30);
  puVar57 = (uint *)((longlong)puStack_100 - (longlong)puVar46);
  if (puStack_100 < puVar46) {
    puVar57 = puVar39;
  }
  puVar65 = (uint *)((longlong)puVar69 - (longlong)puVar66);
  if (puVar69 < puVar66) {
    puVar65 = puVar39;
  }
  uVar40 = *(ulonglong *)(lVar53 + 0x40);
  lVar68 = *(longlong *)(lVar53 + 8);
  lVar53 = *(longlong *)(lVar53 + 0x28);
  *puVar51 = (uVar40 - (longlong)puVar57) - (longlong)puVar65;
  if (puVar69 >= puVar66 && (uint *)((longlong)puVar69 - (longlong)puVar66) != (uint *)0x0 ||
      puStack_100 >= puVar46 && (uint *)((longlong)puStack_100 - (longlong)puVar46) != (uint *)0x0)
  {
    lVar53 = lVar53 + (longlong)puVar46 * 0x20;
    lVar68 = lVar68 + (longlong)puVar66 * 0x20;
    if (puVar69 < puVar66) {
      lVar68 = 8;
    }
    lVar49 = 0;
    if (puVar66 < puVar69) {
      lVar49 = lVar68 + -0x20 + (longlong)puVar65 * 0x20;
    }
    if (puStack_100 < puVar46) {
      lVar53 = 8;
    }
    lVar53 = lVar53 + -0x20 + (longlong)puVar57 * 0x20;
    if (puStack_100 <= puVar46) {
      lVar53 = lVar49;
    }
    *puVar51 = uVar40;
    uVar32 = *(undefined1 *)(lVar53 + 0x1a);
    uVar2 = *(undefined2 *)(lVar53 + 0x18);
    uVar38 = *(undefined4 *)(lVar53 + 0xc);
    uVar67 = *(undefined8 *)(lVar53 + 0x10);
    *puVar6 = *(undefined4 *)(lVar53 + 8);
    puVar6[1] = uVar38;
    *(undefined8 *)(puVar6 + 2) = uVar67;
    *(undefined2 *)(puVar6 + 4) = uVar2;
    *(undefined1 *)((longlong)puVar6 + 0x12) = uVar32;
  }
  uVar40 = *puStack_150;
  uVar58 = 0;
  uVar50 = uVar40 - *(ulonglong *)(lVar45 + 0x18);
  if (uVar40 < *(ulonglong *)(lVar45 + 0x18)) {
    uVar50 = uVar58;
  }
  uVar47 = uVar40 - *(ulonglong *)(lVar45 + 0x38);
  if (uVar40 < *(ulonglong *)(lVar45 + 0x38)) {
    uVar47 = uVar58;
  }
  puStack_108 = (uint *)(uVar50 * 0x58 + *(longlong *)(lVar45 + 8));
  uVar40 = *(ulonglong *)(lVar45 + 0x10);
  uVar16 = uVar40 - uVar50;
  if (uVar40 < uVar50) {
    puStack_108 = (uint *)0x8;
    uVar16 = uVar58;
  }
  uVar7 = *(ulonglong *)(lVar45 + 0x30);
  puStack_230 = (uint *)(uVar47 * 0x58 + *(longlong *)(lVar45 + 0x28));
  uVar61 = uVar7 - uVar47;
  if (uVar7 < uVar47) {
    puStack_230 = (uint *)0x8;
    uVar61 = uVar58;
  }
  uVar58 = (*(longlong *)(lVar45 + 0x40) - uVar61) - uVar16;
  *puStack_150 = uVar58;
  puStack_148 = (uint *)CONCAT44(puStack_148._4_4_,*(undefined4 *)((longlong)param_6 + 0x1c));
  lStack_140 = *param_6;
  puStack_130 = (uint *)param_6[2];
  puStack_600 = puVar43;
  pcStack_428 = pcVar5;
  puStack_110 = puVar6;
  if (uVar50 < uVar40) {
    puVar66 = puStack_108 + 0x16;
    puVar39 = puStack_230;
    puVar46 = puStack_108;
  }
  else {
    if (uVar7 <= uVar47) {
      bVar70 = false;
LAB_14086b082:
      lStack_388 = 0;
      puStack_380 = (uint *)0x8;
      lStack_378 = 0;
      uVar40 = *puStack_340;
      uVar58 = 0;
      uVar50 = uVar40 - *(ulonglong *)((longlong)puStack_3a8 + 0x18);
      if (uVar40 < *(ulonglong *)((longlong)puStack_3a8 + 0x18)) {
        uVar50 = uVar58;
      }
      uVar47 = uVar40 - *(ulonglong *)((longlong)puStack_3a8 + 0x38);
      if (uVar40 < *(ulonglong *)((longlong)puStack_3a8 + 0x38)) {
        uVar47 = uVar58;
      }
      puVar66 = (uint *)(uVar50 * 0x88 + *(longlong *)((longlong)puStack_3a8 + 8));
      uVar40 = *(ulonglong *)((longlong)puStack_3a8 + 0x10) - uVar50;
      if (*(ulonglong *)((longlong)puStack_3a8 + 0x10) < uVar50) {
        puVar66 = (uint *)0x8;
        uVar40 = uVar58;
      }
      puVar39 = (uint *)(uVar47 * 0x88 + *(longlong *)((longlong)puStack_3a8 + 0x28));
      uVar50 = *(ulonglong *)((longlong)puStack_3a8 + 0x30) - uVar47;
      if (*(ulonglong *)((longlong)puStack_3a8 + 0x30) < uVar47) {
        puVar39 = (uint *)0x8;
        uVar50 = uVar58;
      }
      *puStack_340 = (*(longlong *)((longlong)puStack_3a8 + 0x40) - uVar50) - uVar40;
      puVar46 = puVar66 + uVar40 * 0x22;
      puStack_3a8 = puVar39 + uVar50 * 0x22;
      puStack_2f0 = puVar46;
      do {
        fVar4 = _DAT_142f94714;
        uVar36 = _DAT_142e37820;
        if ((puVar66 == (uint *)0x0) || (puVar66 == puVar46)) {
          if ((puVar39 == (uint *)0x0) || (puVar39 == puStack_3a8)) {
            lStack_178 = lStack_388;
            puVar66 = puStack_380 + lStack_378 * 0xe;
            iVar63 = -(uint)(CONCAT13(unaff_XMM11_Bd,
                                      CONCAT12(unaff_XMM11_Bc,
                                               CONCAT11(unaff_XMM11_Bb,unaff_XMM11_Ba))) ==
                            CONCAT13(unaff_XMM11_Bd,
                                     CONCAT12(unaff_XMM11_Bc,CONCAT11(unaff_XMM11_Bb,unaff_XMM11_Ba)
                                             )));
            iVar13 = -(uint)(CONCAT13(unaff_XMM11_Bh,
                                      CONCAT12(unaff_XMM11_Bg,
                                               CONCAT11(unaff_XMM11_Bf,unaff_XMM11_Be))) ==
                            CONCAT13(unaff_XMM11_Bh,
                                     CONCAT12(unaff_XMM11_Bg,CONCAT11(unaff_XMM11_Bf,unaff_XMM11_Be)
                                             )));
            iVar14 = -(uint)(CONCAT13(unaff_XMM11_Bl,
                                      CONCAT12(unaff_XMM11_Bk,
                                               CONCAT11(unaff_XMM11_Bj,unaff_XMM11_Bi))) ==
                            CONCAT13(unaff_XMM11_Bl,
                                     CONCAT12(unaff_XMM11_Bk,CONCAT11(unaff_XMM11_Bj,unaff_XMM11_Bi)
                                             )));
            iVar15 = -(uint)(CONCAT13(unaff_XMM11_Bp,
                                      CONCAT12(unaff_XMM11_Bo,
                                               CONCAT11(unaff_XMM11_Bn,unaff_XMM11_Bm))) ==
                            CONCAT13(unaff_XMM11_Bp,
                                     CONCAT12(unaff_XMM11_Bo,CONCAT11(unaff_XMM11_Bn,unaff_XMM11_Bm)
                                             )));
            puStack_170 = puStack_380;
            for (puVar39 = puStack_380;
                (puVar39 != puVar66 &&
                (puStack_100 = *(uint **)(puVar39 + 10), puStack_100 != (uint *)0x8));
                puVar39 = puVar39 + 0xe) {
              puStack_120 = *(uint **)puVar39;
              uVar11 = puVar39[2];
              uVar52 = puVar39[3];
              uVar76 = puVar39[4];
              fVar72 = (float)puVar39[5];
              fVar77 = (float)puVar39[6];
              puStack_118 = (uint *)CONCAT44(puStack_118._4_4_,puVar39[7]);
              puStack_150 = (ulonglong *)CONCAT44(puStack_150._4_4_,puVar39[8]);
              puStack_108 = *(uint **)(puVar39 + 0xc);
              plVar42 = (longlong *)pdb_140c016e0(uStack_440);
              uVar40 = pdb_140c017b0(uVar11,uVar52);
              uStack_5f8 = uVar40;
              if (plVar42[3] != 0) {
                uVar50 = pdb_1400af0a0(plVar42 + 4,&uStack_5f8);
                lVar53 = *plVar42;
                bVar33 = (byte)(uVar50 >> 0x39);
                auVar73 = ZEXT216(CONCAT11(bVar33,bVar33));
                auVar73 = pshuflw(auVar73,auVar73,0);
                lVar45 = 0;
                do {
                  uVar50 = uVar50 & plVar42[1];
                  auVar1 = *(undefined1 (*) [16])(lVar53 + uVar50);
                  auVar75[0] = -(auVar1[0] == auVar73[0]);
                  auVar75[1] = -(auVar1[1] == auVar73[1]);
                  auVar75[2] = -(auVar1[2] == auVar73[2]);
                  auVar75[3] = -(auVar1[3] == auVar73[3]);
                  auVar75[4] = -(auVar1[4] == auVar73[4]);
                  auVar75[5] = -(auVar1[5] == auVar73[5]);
                  auVar75[6] = -(auVar1[6] == auVar73[6]);
                  auVar75[7] = -(auVar1[7] == auVar73[7]);
                  auVar75[8] = -(auVar1[8] == auVar73[0]);
                  auVar75[9] = -(auVar1[9] == auVar73[1]);
                  auVar75[10] = -(auVar1[10] == auVar73[2]);
                  auVar75[0xb] = -(auVar1[0xb] == auVar73[3]);
                  auVar75[0xc] = -(auVar1[0xc] == auVar73[4]);
                  auVar75[0xd] = -(auVar1[0xd] == auVar73[5]);
                  auVar75[0xe] = -(auVar1[0xe] == auVar73[6]);
                  auVar75[0xf] = -(auVar1[0xf] == auVar73[7]);
                  uVar60 = (ushort)(SUB161(auVar75 >> 7,0) & 1) |
                           (ushort)(SUB161(auVar75 >> 0xf,0) & 1) << 1 |
                           (ushort)(SUB161(auVar75 >> 0x17,0) & 1) << 2 |
                           (ushort)(SUB161(auVar75 >> 0x1f,0) & 1) << 3 |
                           (ushort)(SUB161(auVar75 >> 0x27,0) & 1) << 4 |
                           (ushort)(SUB161(auVar75 >> 0x2f,0) & 1) << 5 |
                           (ushort)(SUB161(auVar75 >> 0x37,0) & 1) << 6 |
                           (ushort)(SUB161(auVar75 >> 0x3f,0) & 1) << 7 |
                           (ushort)(SUB161(auVar75 >> 0x47,0) & 1) << 8 |
                           (ushort)(SUB161(auVar75 >> 0x4f,0) & 1) << 9 |
                           (ushort)(SUB161(auVar75 >> 0x57,0) & 1) << 10 |
                           (ushort)(SUB161(auVar75 >> 0x5f,0) & 1) << 0xb |
                           (ushort)(SUB161(auVar75 >> 0x67,0) & 1) << 0xc |
                           (ushort)(SUB161(auVar75 >> 0x6f,0) & 1) << 0xd |
                           (ushort)(SUB161(auVar75 >> 0x77,0) & 1) << 0xe |
                           (ushort)(auVar75[0xf] >> 7) << 0xf;
                  uVar59 = (uint)uVar60;
                  while (uVar60 != 0) {
                    uVar10 = 0;
                    for (uVar12 = uVar59; (uVar12 & 1) == 0; uVar12 = uVar12 >> 1 | 0x80000000) {
                      uVar10 = uVar10 + 1;
                    }
                    lVar68 = (uVar10 + uVar50 & plVar42[1]) * -0x98;
                    if (uVar40 == *(ulonglong *)(lVar53 + -0x98 + lVar68)) {
                      lVar53 = lVar53 + lVar68;
                      pbVar8 = *(byte **)(lVar53 + -0x80);
                      uVar40 = (longlong)pbVar8 * 0xc;
                      if ((byte *)0xaaaaaaaaaaaaaaa < pbVar8) {
                        uVar67 = 0;
LAB_14086bb2c:
                        pdb_142dc7e2a(uVar67,uVar40);
                    /* WARNING: Does not return */
                        pcVar9 = (code *)invalidInstructionException();
                        (*pcVar9)();
                      }
                      puVar51 = *(ulonglong **)(lVar53 + -0x88);
                      puStack_230 = puVar66;
                      if (uVar40 == 0) {
                        pbVar41 = (byte *)0x4;
                        pbVar48 = (byte *)0x0;
                      }
                      else {
                        puStack_340 = puVar51;
                        pdb_14007ee60();
                        uVar67 = 4;
                        pbVar41 = pub_1406abab0(uVar40,4);
                        pbVar48 = pbVar8;
                        puVar51 = puStack_340;
                        if (pbVar41 == (byte *)0x0) goto LAB_14086bb2c;
                      }
                      uStack_2d0 = pbVar41;
                      auStack_2d8 = (undefined1  [8])pbVar48;
                      pbStack_2c8 = (byte *)0x0;
                      if (pbVar8 != (byte *)0x0) {
                        pub_142e32760(pbVar41,puVar51,uVar40);
                        pbStack_2c8 = pbVar8;
                      }
                      pdb_140080930(&fStack_228,auStack_2d8,1);
                      lVar53 = CONCAT44(uStack_224,fStack_228);
                      puVar66 = puStack_230;
                      if (!SBORROW8(0,lVar53)) {
                        uStack_2d0._4_4_ = (float)uStack_21c;
                        uStack_2d0._0_4_ = fStack_220;
                        pbStack_2c8 = (byte *)CONCAT44(uStack_214,uStack_218);
                        lStack_2c0 = CONCAT17(uStack_209,CONCAT43(uStack_20d,uStack_210));
                        lStack_2b0 = uStack_200;
                        pbStack_2a8 = uStack_1f8;
                        pbStack_2b8 = uStack_208;
                        auStack_2d8 = (undefined1  [8])lVar53;
                        lVar45 = *(longlong *)puStack_120;
                        uVar59 = puStack_120[2];
                        fVar71 = (float)pdb_14148c970(auStack_2d8);
                        if (fVar71 <= fVar72) {
                          uVar37 = pdb_140a61520((ulonglong)puStack_118 & 0xffffffff);
                          uVar38 = pdb_140de8220();
                          uVar76 = uVar76 ^ uVar36;
                          fVar77 = fVar77 + fVar4;
                        }
                        else {
                          uVar52 = (uint)puStack_118;
                          uVar37 = pdb_140a61520(uVar11);
                          uVar38 = pdb_140de8220();
                        }
                        uVar32 = pdb_14008fbf0();
                        fStack_228 = 2.8026e-45;
                        uStack_224 = 0;
                        uStack_218 = 2;
                        uStack_214 = 0;
                        uStack_208 = (byte *)CONCAT44(uVar52,uVar37);
                        uStack_200 = CONCAT44(uVar38,uVar76);
                        uStack_1f8 = (byte *)CONCAT44(uStack_1f8._4_4_,fVar77);
                        auStack_1f0[10] = 4;
                        uStack_1e0 = (byte *)CONCAT71(uStack_1e0._1_7_,uVar32);
                        lStack_1d8 = 8;
                        uStack_1c8 = uStack_1c8 & 0xffffffff00000000;
                        uStack_1c0 = 0;
                        uStack_1b8 = 0;
                        uStack_1b6 = 0;
                        uStack_1b4 = 2;
                        puStack_1b0 = puStack_100;
                        puStack_1a8 = puStack_108;
                        uStack_1a0 = puStack_150._0_4_;
                        uStack_4ac = uStack_4ac & 0xffffff00;
                        *puStack_260 = uStack_134;
                        *puStack_268 = uStack_138;
                        *puStack_130 = (uint)puStack_148;
                        lStack_4b8 = lVar45;
                        uStack_4b0 = uVar59;
                        pdb_1414c40f0(&fStack_228,0,&lStack_4b8,uStack_128,uStack_270,lStack_140,
                                      &uStack_648,uStack_2f8);
                        if (lVar53 != 0) {
                          pub_1406abac0(uStack_2d0,lVar53 * 0xc,4);
                        }
                        puVar66 = puStack_230;
                        if (lStack_2c0 != 0) {
                          pub_1406abac0(pbStack_2b8,lStack_2c0 << 2,4);
                          puVar66 = puStack_230;
                        }
                      }
                      goto LAB_14086bb20;
                    }
                    uVar60 = (ushort)(uVar59 - 1) & (ushort)uVar59;
                    uVar59 = CONCAT22((short)(uVar59 - 1 >> 0x10),uVar60);
                  }
                  auVar74[0] = -(auVar1[0] == (char)iVar63);
                  auVar74[1] = -(auVar1[1] == (char)((uint)iVar63 >> 8));
                  auVar74[2] = -(auVar1[2] == (char)((uint)iVar63 >> 0x10));
                  auVar74[3] = -(auVar1[3] == (char)((uint)iVar63 >> 0x18));
                  auVar74[4] = -(auVar1[4] == (char)iVar13);
                  auVar74[5] = -(auVar1[5] == (char)((uint)iVar13 >> 8));
                  auVar74[6] = -(auVar1[6] == (char)((uint)iVar13 >> 0x10));
                  auVar74[7] = -(auVar1[7] == (char)((uint)iVar13 >> 0x18));
                  auVar74[8] = -(auVar1[8] == (char)iVar14);
                  auVar74[9] = -(auVar1[9] == (char)((uint)iVar14 >> 8));
                  auVar74[10] = -(auVar1[10] == (char)((uint)iVar14 >> 0x10));
                  auVar74[0xb] = -(auVar1[0xb] == (char)((uint)iVar14 >> 0x18));
                  auVar74[0xc] = -(auVar1[0xc] == (char)iVar15);
                  auVar74[0xd] = -(auVar1[0xd] == (char)((uint)iVar15 >> 8));
                  auVar74[0xe] = -(auVar1[0xe] == (char)((uint)iVar15 >> 0x10));
                  auVar74[0xf] = -(auVar1[0xf] == (char)((uint)iVar15 >> 0x18));
                  if ((((((((((((((((SUB161(auVar74 >> 7,0) & 1) != 0 ||
                                   (SUB161(auVar74 >> 0xf,0) & 1) != 0) ||
                                  (SUB161(auVar74 >> 0x17,0) & 1) != 0) ||
                                 (SUB161(auVar74 >> 0x1f,0) & 1) != 0) ||
                                (SUB161(auVar74 >> 0x27,0) & 1) != 0) ||
                               (SUB161(auVar74 >> 0x2f,0) & 1) != 0) ||
                              (SUB161(auVar74 >> 0x37,0) & 1) != 0) ||
                             (SUB161(auVar74 >> 0x3f,0) & 1) != 0) ||
                            (SUB161(auVar74 >> 0x47,0) & 1) != 0) ||
                           (SUB161(auVar74 >> 0x4f,0) & 1) != 0) ||
                          (SUB161(auVar74 >> 0x57,0) & 1) != 0) ||
                         (SUB161(auVar74 >> 0x5f,0) & 1) != 0) ||
                        (SUB161(auVar74 >> 0x67,0) & 1) != 0) ||
                       (SUB161(auVar74 >> 0x6f,0) & 1) != 0) || (SUB161(auVar74 >> 0x77,0) & 1) != 0
                      ) || auVar74[0xf] < '\0') break;
                  uVar50 = lVar45 + uVar50 + 0x10;
                  lVar45 = lVar45 + 0x10;
                } while( true );
              }
LAB_14086bb20:
            }
            if (lStack_178 != 0) {
              pub_1406abac0((byte *)puStack_170,lStack_178 * 0x38,8);
            }
            if (bVar70) {
              return;
            }
            auVar73[0] = -((char)*puStack_168 == DAT_14300d930);
            auVar73[1] = -(*(char *)((longlong)puStack_168 + 1) == UNK_14300d931);
            auVar73[2] = -(*(char *)((longlong)puStack_168 + 2) == UNK_14300d932);
            auVar73[3] = -(*(char *)((longlong)puStack_168 + 3) == UNK_14300d933);
            auVar73[4] = -(*(char *)((longlong)puStack_168 + 4) == UNK_14300d934);
            auVar73[5] = -(*(char *)((longlong)puStack_168 + 5) == UNK_14300d935);
            auVar73[6] = -(*(char *)((longlong)puStack_168 + 6) == UNK_14300d936);
            auVar73[7] = -(*(char *)((longlong)puStack_168 + 7) == UNK_14300d937);
            auVar73[8] = -((char)puStack_168[1] == UNK_14300d938);
            auVar73[9] = -(*(char *)((longlong)puStack_168 + 9) == UNK_14300d939);
            auVar73[10] = -(*(char *)((longlong)puStack_168 + 10) == UNK_14300d93a);
            auVar73[0xb] = -(*(char *)((longlong)puStack_168 + 0xb) == UNK_14300d93b);
            auVar73[0xc] = -(*(char *)((longlong)puStack_168 + 0xc) == UNK_14300d93c);
            auVar73[0xd] = -(*(char *)((longlong)puStack_168 + 0xd) == UNK_14300d93d);
            auVar73[0xe] = -(*(char *)((longlong)puStack_168 + 0xe) == UNK_14300d93e);
            auVar73[0xf] = -(*(char *)((longlong)puStack_168 + 0xf) == UNK_14300d93f);
            if ((ushort)((ushort)(SUB161(auVar73 >> 7,0) & 1) |
                         (ushort)(SUB161(auVar73 >> 0xf,0) & 1) << 1 |
                         (ushort)(SUB161(auVar73 >> 0x17,0) & 1) << 2 |
                         (ushort)(SUB161(auVar73 >> 0x1f,0) & 1) << 3 |
                         (ushort)(SUB161(auVar73 >> 0x27,0) & 1) << 4 |
                         (ushort)(SUB161(auVar73 >> 0x2f,0) & 1) << 5 |
                         (ushort)(SUB161(auVar73 >> 0x37,0) & 1) << 6 |
                         (ushort)(SUB161(auVar73 >> 0x3f,0) & 1) << 7 |
                         (ushort)(SUB161(auVar73 >> 0x47,0) & 1) << 8 |
                         (ushort)(SUB161(auVar73 >> 0x4f,0) & 1) << 9 |
                         (ushort)(SUB161(auVar73 >> 0x57,0) & 1) << 10 |
                         (ushort)(SUB161(auVar73 >> 0x5f,0) & 1) << 0xb |
                         (ushort)(SUB161(auVar73 >> 0x67,0) & 1) << 0xc |
                         (ushort)(SUB161(auVar73 >> 0x6f,0) & 1) << 0xd |
                         (ushort)(SUB161(auVar73 >> 0x77,0) & 1) << 0xe |
                        (ushort)(auVar73[0xf] >> 7) << 0xf) != 0xffff) {
              if (puStack_168[1] == 0 && (ulonglong)(1 < *puStack_168) <= -puStack_168[1]) {
                puStack_100 = (uint *)puStack_168[4];
                uVar40 = puStack_168[5];
                if (*(char *)(lStack_2e8 + 0x281) == '\0') {
                  *puStack_330 = uStack_17c;
                  *(undefined1 *)(lStack_2e8 + 0x282) = 1;
                  uVar50 = puStack_168[0xf];
                  *(char *)(puStack_110 + 4) = (char)uVar50;
                  if ((char)uVar50 != '\x01') {
                    return;
                  }
                }
                uVar50 = puStack_168[0xe];
                uStack_f1 = 0;
                uStack_4c8 = pdb_1406d0830(uStack_430);
                uStack_f1 = 0;
                uStack_4c0 = uVar50;
                cVar34 = pdb_1408ffaf0(&uStack_4c8);
                if (cVar34 == '\0') {
                  return;
                }
                uStack_f1 = 0;
                bVar33 = pdb_1408ffab0(&uStack_4c8);
                puStack_120 = (uint *)CONCAT71(puStack_120._1_7_,bVar33);
                puStack_150 = (ulonglong *)CONCAT71(puStack_150._1_7_,(char)puStack_168[0xf]);
                puStack_108 = (uint *)CONCAT71(puStack_108._1_7_,bVar33 < 2);
                if (bVar33 < 2) {
                  *puStack_130 = (uint)puStack_148;
                  *(undefined1 *)(lStack_140 + 0x48) = 1;
                  *puStack_330 = uStack_17c;
                  *(undefined1 *)(lStack_2e8 + 0x280) = 1;
                }
                uStack_f1 = 0;
                cVar34 = pdb_1408ffab0(&uStack_4c8);
                if ((cVar34 == '\x02') && (*pcStack_428 != '\x11')) {
                  *(undefined1 *)((longlong)puStack_110 + 0x12) = 0;
                }
                else {
                  if (*(char *)((longlong)puStack_110 + 0x12) == '\x01') {
                    return;
                  }
                  if (*(char *)(puStack_110 + 4) == '\x01') {
                    *puStack_330 = uStack_17c;
                    *(undefined1 *)(lStack_2e8 + 0x282) = 1;
                  }
                }
                *puStack_348 = uStack_180;
                uStack_f1 = 0;
                pdb_140901700(auStack_6c0,uStack_350,(byte)puStack_120 < 2);
                uStack_f1 = 0;
                uStack_3b4 = pdb_140901720(auStack_6c0);
                puStack_118 = (uint *)CONCAT44(puStack_118._4_4_,uStack_3b4);
                uStack_f1 = 0;
                uVar32 = pdb_14008fbf0();
                cVar34 = *_DAT_143ca4500;
                uStack_f1 = 0;
                uVar35 = pdb_14007fac0();
                uStack_f1 = 0;
                uStack_5e0 = pdb_14007fac0();
                cStack_59e = (cVar34 == '\0') * '\x05';
                pbStack_5e8 = (byte *)0x0;
                auStack_5d8 = (undefined1  [16])0x0;
                uStack_5c7 = 0x100;
                uStack_5f8 = (ulonglong)puStack_100;
                uStack_5a0 = 0;
                uStack_5a8 = 0;
                uStack_5a9 = 2;
                uStack_f1 = 0;
                uStack_5f0 = uVar40;
                uStack_5c8 = uVar35;
                uStack_59f = uVar32;
                pdb_140a34500(&fStack_228,auStack_7c0[0]);
                fVar4 = *(float *)(puStack_168 + 10);
                lStack_178 = CONCAT44(lStack_178._4_4_,*(float *)(puStack_168 + 9));
                fVar72 = fStack_228 - *(float *)(puStack_168 + 9);
                puStack_170 = (uint *)CONCAT44(puStack_170._4_4_,fVar4);
                uStack_408 = *(undefined8 *)((longlong)puStack_168 + 0x54);
                uStack_400 = *(undefined4 *)((longlong)puStack_168 + 0x5c);
                    /* WARNING: Could not recover jumptable at 0x00014086cb15. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                (*(code *)(&UNK_14300dec0 + *(int *)(&UNK_14300dec0 + (longlong)puStack_100 * 4)))
                          (&UNK_14300dec0 + *(int *)(&UNK_14300dec0 + (longlong)puStack_100 * 4),
                           fVar4,SQRT((fStack_220 - fVar4) * (fStack_220 - fVar4) + fVar72 * fVar72)
                          );
                return;
              }
              uStack_f1 = 0;
              cVar34 = pdb_140ae2d20(uStack_160);
              if (cVar34 != '\0') {
                uStack_f1 = 0;
                pdb_140a61500(&fStack_228,uStack_258);
                if (fStack_228 != 4.2039e-45) {
                  uStack_f1 = 0;
                  pdb_140c45a20(auStack_2d8,uStack_4e8,uStack_218);
                  if (auStack_2d8._0_4_ == 1) {
                    *puStack_110 = 1;
                    puStack_110[1] = (float)uStack_2d0;
                  }
                }
              }
              bVar70 = false;
              goto LAB_14086d4ad;
            }
            uVar40 = puStack_168[0xc];
            uStack_f1 = 0;
            uStack_3f8 = pdb_1406d0830(uStack_430);
            uStack_f1 = 0;
            uStack_3f0 = uVar40;
            bVar33 = pdb_1408ffab0(&uStack_3f8);
            uStack_f1 = 0;
            pdb_140a61500(&fStack_228,uStack_258);
            uVar37 = uStack_218;
            puVar51 = (ulonglong *)CONCAT44(uStack_224,fStack_228);
            if (puVar51 == (ulonglong *)0x3) {
LAB_14086c8a9:
              iVar63 = (int)puVar51;
              if (bVar33 < 2) {
                *puStack_248 = uStack_240._4_4_;
                uStack_f1 = 0;
                pdb_140a5f780(uStack_258);
                puVar66 = puStack_508;
                *puStack_4f8 = uStack_4f0._4_4_;
                lVar53 = *(longlong *)(puStack_508 + 0xc);
                uVar67 = *(undefined8 *)(puStack_508 + 0x10);
                if (lVar53 == *(longlong *)(puStack_508 + 8)) {
                  uStack_f1 = 0;
                  pdb_142d7e6e0(puStack_508 + 8);
                }
                lVar45 = *(longlong *)(puVar66 + 10);
                lVar68 = lVar53 * 0x20;
                *(undefined1 *)(lVar45 + lVar68) = 0;
                *(undefined4 *)(lVar45 + 8 + lVar68) = 0;
                *(undefined8 *)(lVar45 + 0x18 + lVar68) = uVar67;
                *(longlong *)(puVar66 + 0xc) = lVar53 + 1;
                *(longlong *)(puVar66 + 0x10) = *(longlong *)(puVar66 + 0x10) + 1;
              }
            }
            else {
              *puStack_248 = uStack_240._4_4_;
              uVar38 = (undefined4)puStack_168[0xd];
              uStack_f1 = 0;
              pdb_140a61170(uStack_258,uStack_218,uVar38);
              uStack_f1 = 0;
              puVar43 = (undefined8 *)pdb_140c40010(uStack_128,uVar38);
              if (puVar43 != (undefined8 *)0x0) {
                pbStack_2b8 = (byte *)puVar43[6];
                uVar67 = *(undefined8 *)*(undefined1 (*) [16])(puVar43 + 2);
                uVar44 = puVar43[3];
                _auStack_2d8 = *(undefined1 (*) [16])(puVar43 + 2);
                pbStack_2c8 = (byte *)puVar43[4];
                lStack_2c0 = puVar43[5];
                uStack_5f8 = *(ulonglong *)*(undefined1 (*) [16])(puVar43 + 7);
                uStack_5f0 = puVar43[8];
                auStack_1f0 = *(undefined1 (*) [16])(puVar43 + 7);
                pbStack_5e8 = (byte *)puVar43[9];
                lStack_1d8 = puVar43[10];
                uVar3 = *(undefined4 *)(puVar43 + 10);
                fStack_228 = (float)*puVar43;
                uStack_224 = (undefined4)((ulonglong)*puVar43 >> 0x20);
                fStack_220 = (float)puVar43[1];
                uStack_21c = (uint)((ulonglong)puVar43[1] >> 0x20);
                uStack_218 = (undefined4)uVar67;
                uStack_214 = (undefined4)((ulonglong)uVar67 >> 0x20);
                uStack_210 = (undefined3)uVar44;
                uStack_20d = (undefined4)((ulonglong)uVar44 >> 0x18);
                uStack_209 = (undefined1)((ulonglong)uVar44 >> 0x38);
                lStack_1d0 = CONCAT53(lStack_1d0._3_5_,*(undefined3 *)(puVar43 + 0xb));
                uStack_f1 = 0;
                uStack_208 = pbStack_2c8;
                uStack_200 = lStack_2c0;
                uStack_1f8 = pbStack_2b8;
                uStack_1e0 = pbStack_5e8;
                pdb_140a60320(&lStack_4b8,uStack_258,uVar37);
                uVar67 = uStack_128;
                puStack_118 = (uint *)CONCAT44(puStack_118._4_4_,uVar38);
                puStack_120 = (uint *)CONCAT71(puStack_120._1_7_,bVar33);
                puVar66 = (uint *)CONCAT44(uStack_4ac,uStack_4b0);
                puStack_148 = puVar66 + lStack_4a8;
                puStack_130 = puVar66;
                while (puStack_100 = puVar66, puVar66 != puStack_148) {
                  uVar40 = (ulonglong)*puVar66;
                  *puStack_268 = uStack_138;
                  uVar44 = pdb_140c3d2c0(uVar67,uVar40);
                  puVar66 = puStack_100 + 1;
                  pdb_1414d0170(uStack_270,uVar44,uVar40,uVar67,&uStack_648,&UNK_14300da80,0x11);
                }
                lStack_140 = lStack_4b8;
                puStack_150 = puVar51;
                if (lStack_4a8 != 0) {
                  lVar53 = 0;
                  do {
                    uVar37 = *(undefined4 *)((longlong)puStack_130 + lVar53);
                    *puStack_260 = uStack_134;
                    lVar45 = pdb_140c40a30(uStack_128,uVar37);
                    if (lVar45 != 0) {
                      *(undefined4 *)(lVar45 + 0x50) = uVar3;
                      lVar68 = pdb_140901490(auStack_1f0,&UNK_14300d990);
                      uVar37 = *(undefined4 *)(lVar68 + 0xc);
                      lVar45 = lVar45 + 0x38;
                      lVar68 = pdb_140901490(lVar45,&UNK_14300d9a8);
                      *(undefined4 *)(lVar68 + 0xc) = uVar37;
                      lVar68 = pdb_140901490(auStack_1f0,&UNK_14300d9c0);
                      uVar37 = *(undefined4 *)(lVar68 + 8);
                      lVar68 = pdb_140901490(lVar45,&UNK_14300d9d8);
                      *(undefined4 *)(lVar68 + 8) = uVar37;
                      lVar68 = pdb_140901490(auStack_1f0,&UNK_14300d9f0);
                      uVar32 = *(undefined1 *)(lVar68 + 0x14);
                      lVar68 = pdb_140901490(lVar45,&UNK_14300da08);
                      *(undefined1 *)(lVar68 + 0x14) = uVar32;
                      lVar68 = pdb_140901490(auStack_1f0,&UNK_14300da20);
                      uVar32 = *(undefined1 *)(lVar68 + 0x15);
                      lVar68 = pdb_140901490(lVar45,&UNK_14300da38);
                      *(undefined1 *)(lVar68 + 0x15) = uVar32;
                      lVar68 = pdb_140901490(auStack_1f0,&UNK_14300da50);
                      uVar32 = *(undefined1 *)(lVar68 + 0x16);
                      lVar45 = pdb_140901490(lVar45,&UNK_14300da68);
                      *(undefined1 *)(lVar45 + 0x16) = uVar32;
                    }
                    lVar53 = lVar53 + 4;
                  } while (lStack_4a8 << 2 != lVar53);
                }
                if (lStack_140 != 0) {
                  pub_1406abac0((byte *)puStack_130,lStack_140 << 2,4);
                }
                puVar51 = puStack_150;
                uVar38 = (uint)puStack_118;
                bVar33 = (byte)puStack_120;
              }
              iVar63 = (int)puVar51;
              if ((bVar33 < 2) || (*pcStack_438 == '\0')) {
                uStack_f1 = 0;
                lVar53 = pdb_140c40010(uStack_128,uVar38);
                if (lVar53 == 0) {
                  puVar43 = (undefined8 *)0x0;
                }
                else {
                  uStack_f1 = 0;
                  puVar43 = (undefined8 *)pdb_1409014e0(lVar53 + 0x38);
                }
                uStack_f1 = 0;
                pdb_140c45a20(acStack_570,uStack_4e8,uVar38);
                if ((puVar43 != (undefined8 *)0x0) && (acStack_570[0] != '\0')) {
                  uStack_f1 = 0;
                  cVar34 = pdb_1408ff980((longlong)puVar43 + 0x16);
                  bVar56 = 1 < bVar33 ^ 0xd;
                  if (cVar34 == '\0') {
                    bVar56 = 6 - (1 < bVar33);
                  }
                  uVar67 = *puVar43;
                  uStack_20d = uStack_564;
                  uStack_218._3_1_ = (undefined1)acStack_570._4_8_;
                  uStack_214 = SUB84(acStack_570._4_8_,1);
                  uStack_210 = SUB83(acStack_570._4_8_,5);
                  *puStack_560 = uStack_3b0;
                  lVar53 = *(longlong *)(lStack_3a0 + 0x30);
                  uVar44 = *(undefined8 *)(lStack_3a0 + 0x40);
                  if (lVar53 == *(longlong *)(lStack_3a0 + 0x20)) {
                    uStack_f1 = 0;
                    pdb_142d7f080(lStack_3a0 + 0x20);
                  }
                  lVar45 = *(longlong *)(lStack_3a0 + 0x28);
                  lVar68 = lVar53 * 0x38;
                  *(undefined8 *)(lVar45 + lVar68) = uVar44;
                  *(byte *)(lVar45 + 8 + lVar68) = bVar56;
                  puVar43 = (undefined8 *)(lVar45 + 9 + lVar68);
                  *puVar43 = CONCAT44(uStack_224,fStack_228);
                  puVar43[1] = CONCAT44(uStack_21c,fStack_220);
                  puVar43 = (undefined8 *)(lVar45 + 0x18 + lVar68);
                  *puVar43 = CONCAT35((undefined3)uStack_214,CONCAT41(uStack_218,uStack_21c._3_1_));
                  puVar43[1] = CONCAT44(uStack_20d,CONCAT31(uStack_210,uStack_214._3_1_));
                  *(ulonglong *)(lVar45 + 0x28 + lVar68) =
                       CONCAT44((int)uVar67,(int)((ulonglong)uVar67 >> 0x20));
                  *(undefined1 *)(lVar45 + 0x30 + lVar68) = 0;
                  *(longlong *)(lStack_3a0 + 0x30) = lVar53 + 1;
                  *(longlong *)(lStack_3a0 + 0x40) = *(longlong *)(lStack_3a0 + 0x40) + 1;
                }
                goto LAB_14086c8a9;
              }
            }
            bVar70 = iVar63 != 3;
LAB_14086d4ad:
            *pcStack_438 = bVar70;
            return;
          }
          puStack_120 = puVar39 + 0x22;
          puStack_118 = (uint *)0x0;
          puStack_100 = puVar39;
        }
        else {
          puStack_118 = puVar66 + 0x22;
          puStack_120 = puVar39;
          puStack_100 = puVar66;
        }
        *puStack_340 = *puStack_340 + 1;
        *puStack_130 = (uint)puStack_148;
        *(undefined1 *)(lStack_140 + 0x48) = 1;
        *puStack_348 = uStack_180;
        uStack_f1 = 1;
        pdb_140901700(&lStack_4b8,uStack_350,1);
        uStack_f1 = 1;
        uVar37 = pdb_140901720(&lStack_4b8);
        if (puStack_100[4] != 7) {
          uStack_f1 = 1;
                    /* WARNING: Subroutine does not return */
          pdb_142dc83b0(&UNK_14300dc90,0x13,&UNK_14300dca8);
        }
        pbVar8 = *(byte **)(puStack_100 + 6);
        lVar53 = *(longlong *)puStack_100;
        lVar45 = *(longlong *)(puStack_100 + 2);
        pbStack_2b8 = *(byte **)(puStack_100 + 0x10);
        _auStack_2d8 = *(undefined1 (*) [16])(puStack_100 + 8);
        pbStack_2c8 = *(byte **)(puStack_100 + 0xc);
        lStack_2c0 = *(longlong *)(puStack_100 + 0xe);
        uStack_f1 = 1;
        uStack_1b7 = pdb_14008fbf0();
        auVar73 = _auStack_2d8;
        uStack_1bc = puStack_100[0x1e];
        uStack_1c8 = *(ulonglong *)(puStack_100 + 0x16);
        lStack_1d8 = *(longlong *)(puStack_100 + 0x12);
        lStack_1d0 = *(longlong *)(puStack_100 + 0x14);
        uStack_1e0 = pbStack_2b8;
        auStack_1f0._8_8_ = lStack_2c0;
        auStack_1f0._0_8_ = pbStack_2c8;
        uStack_200 = (longlong)auStack_2d8;
        uStack_1f8 = uStack_2d0;
        fStack_220 = (float)lVar53;
        uStack_21c = (uint)((ulonglong)lVar53 >> 0x20);
        uStack_218 = (undefined4)lVar45;
        uStack_214 = (undefined4)((ulonglong)lVar45 >> 0x20);
        uStack_210 = 7;
        uStack_20d = 0;
        uStack_209 = 0;
        puStack_150 = (ulonglong *)(puStack_100 + 0x1b);
        uStack_1b8 = 1;
        fStack_228 = 4.2039e-45;
        uStack_224 = 0;
        uStack_2d0._0_4_ = (float)puStack_100[0x1d];
        auStack_2d8 = (undefined1  [8])*puStack_150;
        auVar1 = _auStack_2d8;
        uStack_2d0._5_3_ = auVar73._13_3_;
        _auStack_2d8 = auVar1._0_12_;
        uStack_2d0._4_1_ = 0;
        *puStack_260 = uStack_134;
        *puStack_268 = uStack_138;
        *puStack_130 = (uint)puStack_148;
        uStack_f1 = 1;
        uStack_208 = pbVar8;
        uStack_1c0 = uVar37;
        pdb_1414c40f0(&fStack_228,0,auStack_2d8,uStack_128,uStack_270,lStack_140,&uStack_648,
                      uStack_2f8);
        if ((char)puStack_100[0x18] != '\0') {
          *puStack_248 = uStack_240._4_4_;
          uStack_f1 = 1;
          pdb_140a5f780(uStack_258);
          *puStack_248 = uStack_240._4_4_;
          uVar36 = puStack_100[0x19];
          uStack_f1 = 1;
          pdb_140a61170(uStack_258,uVar36,uVar37);
          *puStack_248 = uStack_240._4_4_;
          uVar76 = puStack_100[0x1a];
          uStack_f1 = 1;
          pdb_140a61170(uStack_258,uVar37,uVar76);
          *puStack_248 = uStack_240._4_4_;
          uStack_f1 = 1;
          pdb_140a5f790(uStack_258,uVar36,uVar76);
          uStack_f1 = 1;
          lVar53 = pdb_140c41030(uStack_128,2);
          if (lVar53 != 0) {
            pbVar8 = *(byte **)(lVar53 + 0x50);
            lVar45 = *(longlong *)(lVar53 + 0x58);
            uStack_f1 = 1;
            pdb_1414ad4f0(&fStack_228,lVar53 + 0x30);
            pauVar55 = (undefined1 (*) [16])CONCAT44(uStack_224,fStack_228);
            pauStack_338 = pauVar55;
            uStack_208 = pbVar8;
            uStack_200 = lVar45;
            if (pauVar55 != (undefined1 (*) [16])0x0) {
              puStack_230 = (uint *)CONCAT44(puStack_230._4_4_,uVar37);
              lVar53 = CONCAT17(uStack_209,CONCAT43(uStack_20d,uStack_210));
              if (lVar53 != 0) {
                auVar73 = *pauVar55;
                uVar36 = ~(uint)(ushort)((ushort)(SUB161(auVar73 >> 7,0) & 1) |
                                         (ushort)(SUB161(auVar73 >> 0xf,0) & 1) << 1 |
                                         (ushort)(SUB161(auVar73 >> 0x17,0) & 1) << 2 |
                                         (ushort)(SUB161(auVar73 >> 0x1f,0) & 1) << 3 |
                                         (ushort)(SUB161(auVar73 >> 0x27,0) & 1) << 4 |
                                         (ushort)(SUB161(auVar73 >> 0x2f,0) & 1) << 5 |
                                         (ushort)(SUB161(auVar73 >> 0x37,0) & 1) << 6 |
                                         (ushort)(SUB161(auVar73 >> 0x3f,0) & 1) << 7 |
                                         (ushort)(SUB161(auVar73 >> 0x47,0) & 1) << 8 |
                                         (ushort)(SUB161(auVar73 >> 0x4f,0) & 1) << 9 |
                                         (ushort)(SUB161(auVar73 >> 0x57,0) & 1) << 10 |
                                         (ushort)(SUB161(auVar73 >> 0x5f,0) & 1) << 0xb |
                                         (ushort)(SUB161(auVar73 >> 0x67,0) & 1) << 0xc |
                                         (ushort)(SUB161(auVar73 >> 0x6f,0) & 1) << 0xd |
                                         (ushort)(SUB161(auVar73 >> 0x77,0) & 1) << 0xe |
                                        (ushort)(byte)(auVar73[0xf] >> 7) << 0xf);
                pauVar54 = pauVar55 + 1;
                puVar66 = puStack_100;
                do {
                  lVar45 = lStack_378;
                  if ((short)uVar36 == 0) {
                    do {
                      auVar73 = *pauVar54;
                      pauVar55 = pauVar55 + -0x68;
                      pauVar54 = pauVar54 + 1;
                      uVar36 = (ushort)((ushort)(SUB161(auVar73 >> 7,0) & 1) |
                                        (ushort)(SUB161(auVar73 >> 0xf,0) & 1) << 1 |
                                        (ushort)(SUB161(auVar73 >> 0x17,0) & 1) << 2 |
                                        (ushort)(SUB161(auVar73 >> 0x1f,0) & 1) << 3 |
                                        (ushort)(SUB161(auVar73 >> 0x27,0) & 1) << 4 |
                                        (ushort)(SUB161(auVar73 >> 0x2f,0) & 1) << 5 |
                                        (ushort)(SUB161(auVar73 >> 0x37,0) & 1) << 6 |
                                        (ushort)(SUB161(auVar73 >> 0x3f,0) & 1) << 7 |
                                        (ushort)(SUB161(auVar73 >> 0x47,0) & 1) << 8 |
                                        (ushort)(SUB161(auVar73 >> 0x4f,0) & 1) << 9 |
                                        (ushort)(SUB161(auVar73 >> 0x57,0) & 1) << 10 |
                                        (ushort)(SUB161(auVar73 >> 0x5f,0) & 1) << 0xb |
                                        (ushort)(SUB161(auVar73 >> 0x67,0) & 1) << 0xc |
                                        (ushort)(SUB161(auVar73 >> 0x6f,0) & 1) << 0xd |
                                        (ushort)(SUB161(auVar73 >> 0x77,0) & 1) << 0xe |
                                       (ushort)(byte)(auVar73[0xf] >> 7) << 0xf) ^ 0xffff;
                    } while (uVar36 == 0);
                  }
                  uVar76 = 0;
                  for (uVar11 = uVar36; (uVar11 & 1) == 0; uVar11 = uVar11 >> 1 | 0x80000000) {
                    uVar76 = uVar76 + 1;
                  }
                  lVar68 = (ulonglong)uVar76 * -0x68;
                  if (((*(char *)((longlong)pauVar55 + lVar68 + -0x2e) == '\x04') &&
                      (uVar76 = *(uint *)((longlong)pauVar55 + lVar68 + -0x50),
                      uVar76 == puVar66[0x19])) &&
                     (uVar11 = *(uint *)((longlong)pauVar55 + lVar68 + -0x4c),
                     uVar11 == puVar66[0x1a])) {
                    uVar67 = *(undefined8 *)((longlong)pauVar55 + lVar68 + -0x48);
                    uVar52 = *(uint *)((longlong)pauVar55 + lVar68 + -0x40);
                    puStack_108 = (uint *)CONCAT44(puStack_108._4_4_,
                                                   *(undefined4 *)
                                                    ((longlong)pauVar55 + lVar68 + -0x68));
                    lStack_178 = *(undefined8 *)((longlong)pauVar55 + lVar68 + -0x60);
                    puStack_170 = *(uint **)((longlong)pauVar55 + lVar68 + -0x58);
                    if (lStack_378 == lStack_388) {
                      pdb_142d7f080(&lStack_388);
                    }
                    *(ulonglong **)(puStack_380 + lVar45 * 0xe) = puStack_150;
                    puStack_380[lVar45 * 0xe + 2] = uVar76;
                    puStack_380[lVar45 * 0xe + 3] = uVar11;
                    *(undefined8 *)(puStack_380 + lVar45 * 0xe + 4) = uVar67;
                    puStack_380[lVar45 * 0xe + 6] = uVar52;
                    puStack_380[lVar45 * 0xe + 7] = (uint)puStack_230;
                    puStack_380[lVar45 * 0xe + 8] = (uint)puStack_108;
                    *(longlong *)(puStack_380 + lVar45 * 0xe + 10) = lStack_178;
                    *(uint **)(puStack_380 + lVar45 * 0xe + 0xc) = puStack_170;
                    lStack_378 = lVar45 + 1;
                    puVar66 = puStack_100;
                  }
                  uVar36 = uVar36 - 1 & uVar36;
                  lVar53 = lVar53 + -1;
                } while (lVar53 != 0);
              }
              puVar46 = puStack_2f0;
              lVar53 = CONCAT44(uStack_21c,fStack_220);
              if (lVar53 != 0) {
                uVar40 = lVar53 * 0x68 + 0x77U & 0xfffffffffffffff0;
                uVar50 = lVar53 + uVar40 + 0x11;
                if (uVar50 != 0) {
                  pub_1406abac0((byte *)((longlong)pauStack_338 - uVar40),uVar50,0x10);
                }
              }
            }
          }
        }
        bVar70 = true;
        puVar39 = puStack_120;
        puVar66 = puStack_118;
      } while( true );
    }
    puVar39 = puStack_230 + 0x16;
    puVar66 = (uint *)0x0;
    puVar46 = puStack_230;
  }
  *puStack_150 = uVar58 + 1;
  if (puVar46[4] == 0) {
    if ((char)puVar46[5] == '\0') {
      auStack_2d8._0_4_ = (float)*(undefined8 *)(puVar46 + 0x11) + _DAT_14300d920;
      auStack_2d8._4_4_ =
           (float)((ulonglong)*(undefined8 *)(puVar46 + 0x11) >> 0x20) + _UNK_14300d924;
      uStack_2d0._0_4_ = (float)puVar46[0x13] + _UNK_14300d928;
      uStack_2d0._4_4_ = _UNK_14300b15c + _UNK_14300d92c;
      pbStack_2c8 = _DAT_142fa5c30;
      pdb_1409ed340(&fStack_228,auStack_780,auStack_2d8,_DAT_142e36f3c,CONCAT44(uVar37,2));
      puStack_2f0 = *(uint **)(puVar46 + 8);
      if (uStack_1f8._4_4_ == 1) {
        if (fStack_228._0_1_ == '\x02') {
          puStack_2f0 = (uint *)CONCAT44(uStack_21c,fStack_220);
        }
        lVar53 = auStack_1f0._0_8_;
      }
      else {
        lVar53 = CONCAT17(UNK_142e36f67,
                          CONCAT16(UNK_142e36f66,
                                   CONCAT15(UNK_142e36f65,
                                            CONCAT14(UNK_142e36f64,
                                                     CONCAT13(UNK_142e36f63,
                                                              CONCAT12(UNK_142e36f62,
                                                                       CONCAT11(UNK_142e36f61,
                                                                                DAT_142e36f60)))))))
        ;
      }
    }
    else {
      puStack_2f0 = *(uint **)(puVar46 + 8);
      lVar53 = *(longlong *)(puVar46 + 6);
    }
    uVar32 = 2;
    puStack_100 = (uint *)0x0;
  }
  else {
    lVar53 = CONCAT44(puVar46[0x13],puVar46[0x11]);
    puStack_100 = (uint *)0x1;
    uVar32 = 3;
  }
  uVar36 = puVar46[0x10];
  *puStack_130 = (uint)puStack_148;
  *(undefined1 *)(lStack_140 + 0x48) = 1;
  *puStack_348 = uStack_180;
  pdb_140901700(auStack_2d8,uStack_350,1);
  uVar37 = pdb_140901720(auStack_2d8);
  if (*puVar46 == 6) {
    pauStack_338 = (undefined1 (*) [16])CONCAT44(pauStack_338._4_4_,uVar37);
    puStack_118 = (uint *)CONCAT71(puStack_118._1_7_,uVar32);
    lStack_178 = CONCAT44(lStack_178._4_4_,uStack_4f0._4_4_);
    puStack_170 = puStack_4f8;
    *puStack_4f8 = uStack_4f0._4_4_;
    lVar45 = *(longlong *)(puStack_508 + 0xc);
    uVar67 = *(undefined8 *)(puStack_508 + 0x10);
    puStack_120 = puStack_508;
    if (lVar45 == *(longlong *)(puStack_508 + 8)) {
      pdb_142d7e6e0(puStack_508 + 8);
    }
    puVar69 = puStack_108 + uVar16 * 0x16;
    puStack_230 = puStack_230 + uVar61 * 0x16;
    lVar68 = *(longlong *)(puStack_120 + 10);
    lVar49 = lVar45 * 0x20;
    *(undefined1 *)(lVar68 + lVar49) = 0;
    *(undefined4 *)(lVar68 + 8 + lVar49) = 4;
    uVar37 = pauStack_338._0_4_;
    *(undefined4 *)(lVar68 + 0xc + lVar49) = pauStack_338._0_4_;
    *(undefined8 *)(lVar68 + 0x18 + lVar49) = uVar67;
    *(longlong *)(puStack_120 + 0xc) = lVar45 + 1;
    *(longlong *)(puStack_120 + 0x10) = *(longlong *)(puStack_120 + 0x10) + 1;
    lVar45 = *(longlong *)puVar46;
    pbVar8 = *(byte **)(puVar46 + 2);
    uStack_1b7 = pdb_14008fbf0();
    fStack_220 = SUB84(puStack_100,0);
    uStack_21c = (uint)((ulonglong)puStack_100 >> 0x20);
    uStack_218 = SUB84(puStack_2f0,0);
    uStack_214 = (undefined4)((ulonglong)puStack_2f0 >> 0x20);
    uStack_210 = (undefined3)lVar45;
    uStack_20d = (undefined4)((ulonglong)lVar45 >> 0x18);
    uStack_209 = (undefined1)((ulonglong)lVar45 >> 0x38);
    uStack_1f8 = (byte *)CONCAT44(uStack_1f8._4_4_,uVar36);
    uStack_1e0._0_3_ = CONCAT12(puStack_118._0_1_,(undefined2)uStack_1e0);
    lStack_1d8 = *(longlong *)(puVar46 + 10);
    lStack_1d0 = *(longlong *)(puVar46 + 0xc);
    uStack_1c8 = *(ulonglong *)(puVar46 + 0xe);
    uStack_1c0 = uVar37;
    uStack_4b0 = puVar46[0x13];
    lStack_4b8 = *(longlong *)(puVar46 + 0x11);
    *puStack_260 = uStack_134;
    *puStack_268 = uStack_138;
    *puStack_130 = (uint)puStack_148;
    fVar31 = _UNK_14300d92c;
    fVar71 = _UNK_14300d928;
    fVar77 = _UNK_14300d924;
    fVar72 = _DAT_14300d920;
    fVar4 = _UNK_14300b15c;
    pbVar48 = _DAT_142fa5c30;
    uVar30 = UNK_142e36f6f;
    uVar29 = UNK_142e36f6e;
    uVar28 = UNK_142e36f6d;
    uVar27 = UNK_142e36f6c;
    uVar26 = UNK_142e36f6b;
    uVar25 = UNK_142e36f6a;
    uVar24 = UNK_142e36f69;
    uVar23 = UNK_142e36f68;
    uVar22 = UNK_142e36f67;
    uVar21 = UNK_142e36f66;
    uVar20 = UNK_142e36f65;
    uVar19 = UNK_142e36f64;
    uVar18 = UNK_142e36f63;
    uVar17 = UNK_142e36f62;
    uVar35 = UNK_142e36f61;
    uVar32 = DAT_142e36f60;
    uVar37 = _DAT_142e36f3c;
    uStack_208 = pbVar8;
    uStack_200 = lVar53;
    puStack_108 = puVar69;
    do {
      puVar46 = puStack_108;
      uStack_1b8 = 1;
      uStack_1bc = 0;
      uStack_224 = 0;
      fStack_228 = 4.2039e-45;
      uStack_4ac = uStack_4ac & 0xffffff00;
      pdb_1414c40f0(&fStack_228,0,&lStack_4b8,uStack_128,uStack_270,lStack_140,&uStack_648,
                    uStack_2f8);
      if ((puVar66 == (uint *)0x0) || (puVar66 == puVar46)) {
        bVar70 = true;
        if ((puVar39 == (uint *)0x0) || (puVar39 == puStack_230)) goto LAB_14086b082;
        puVar69 = puVar39 + 0x16;
        puVar46 = (uint *)0x0;
        *puStack_150 = *puStack_150 + 1;
        puVar57 = puVar39;
        if (puVar39[4] == 0) goto LAB_14086c243;
LAB_14086c1ed:
        uVar36 = puVar57[0x11];
        unaff_XMM11_Ba = (undefined1)uVar36;
        unaff_XMM11_Bb = (undefined1)(uVar36 >> 8);
        unaff_XMM11_Bc = (undefined1)(uVar36 >> 0x10);
        unaff_XMM11_Bd = (undefined1)(uVar36 >> 0x18);
        unaff_XMM11_Bl = 0;
        uVar36 = puVar57[0x13];
        unaff_XMM11_Bi = 0;
        unaff_XMM11_Bj = 0;
        unaff_XMM11_Bk = 0;
        unaff_XMM11_Bm = 0;
        unaff_XMM11_Bn = 0;
        unaff_XMM11_Bo = 0;
        unaff_XMM11_Bp = 0;
        unaff_XMM11_Be = (undefined1)uVar36;
        unaff_XMM11_Bf = (undefined1)(uVar36 >> 8);
        unaff_XMM11_Bg = (undefined1)(uVar36 >> 0x10);
        unaff_XMM11_Bh = (undefined1)(uVar36 >> 0x18);
        fVar64 = 1.4013e-45;
        uVar62 = 3;
        puVar66 = puVar46;
      }
      else {
        puVar46 = puVar66 + 0x16;
        *puStack_150 = *puStack_150 + 1;
        puVar57 = puVar66;
        puVar69 = puVar39;
        if (puVar66[4] != 0) goto LAB_14086c1ed;
LAB_14086c243:
        if ((char)puVar57[5] == '\0') {
          auStack_2d8._4_4_ = (float)((ulonglong)*(undefined8 *)(puVar57 + 0x11) >> 0x20) + fVar77;
          auStack_2d8._0_4_ = (float)*(undefined8 *)(puVar57 + 0x11) + fVar72;
          uStack_2d0._0_4_ = (float)puVar57[0x13] + fVar71;
          uStack_2d0._4_4_ = fVar4 + fVar31;
          pbStack_2c8 = pbVar48;
          pdb_1409ed340(&fStack_228,auStack_780,auStack_2d8,uVar37,2);
          puStack_118 = *(uint **)(puVar57 + 8);
          unaff_XMM11_Ba = uVar32;
          unaff_XMM11_Bb = uVar35;
          unaff_XMM11_Bc = uVar17;
          unaff_XMM11_Bd = uVar18;
          unaff_XMM11_Be = uVar19;
          unaff_XMM11_Bf = uVar20;
          unaff_XMM11_Bg = uVar21;
          unaff_XMM11_Bh = uVar22;
          unaff_XMM11_Bi = uVar23;
          unaff_XMM11_Bj = uVar24;
          unaff_XMM11_Bk = uVar25;
          unaff_XMM11_Bl = uVar26;
          unaff_XMM11_Bm = uVar27;
          unaff_XMM11_Bn = uVar28;
          unaff_XMM11_Bo = uVar29;
          unaff_XMM11_Bp = uVar30;
          if (uStack_1f8._4_4_ == 1) {
            if (fStack_228._0_1_ == '\x02') {
              puStack_118 = (uint *)CONCAT44(uStack_21c,fStack_220);
            }
            unaff_XMM11_Ba = auStack_1f0[0];
            unaff_XMM11_Bb = auStack_1f0[1];
            unaff_XMM11_Bc = auStack_1f0[2];
            unaff_XMM11_Bd = auStack_1f0[3];
            unaff_XMM11_Be = auStack_1f0[4];
            unaff_XMM11_Bf = auStack_1f0[5];
            unaff_XMM11_Bg = auStack_1f0[6];
            unaff_XMM11_Bh = auStack_1f0[7];
            unaff_XMM11_Bi = 0;
            unaff_XMM11_Bj = 0;
            unaff_XMM11_Bk = 0;
            unaff_XMM11_Bl = 0;
            unaff_XMM11_Bm = 0;
            unaff_XMM11_Bn = 0;
            unaff_XMM11_Bo = 0;
            unaff_XMM11_Bp = 0;
          }
        }
        else {
          puStack_118 = *(uint **)(puVar57 + 8);
          lVar53 = *(longlong *)(puVar57 + 6);
          unaff_XMM11_Ba = (char)lVar53;
          unaff_XMM11_Bb = (char)((ulonglong)lVar53 >> 8);
          unaff_XMM11_Bc = (char)((ulonglong)lVar53 >> 0x10);
          unaff_XMM11_Bd = (char)((ulonglong)lVar53 >> 0x18);
          unaff_XMM11_Be = (char)((ulonglong)lVar53 >> 0x20);
          unaff_XMM11_Bf = (char)((ulonglong)lVar53 >> 0x28);
          unaff_XMM11_Bg = (char)((ulonglong)lVar53 >> 0x30);
          unaff_XMM11_Bh = (char)((ulonglong)lVar53 >> 0x38);
          unaff_XMM11_Bi = 0;
          unaff_XMM11_Bj = 0;
          unaff_XMM11_Bk = 0;
          unaff_XMM11_Bl = 0;
          unaff_XMM11_Bm = 0;
          unaff_XMM11_Bn = 0;
          unaff_XMM11_Bo = 0;
          unaff_XMM11_Bp = 0;
        }
        uVar62 = 2;
        fVar64 = 0.0;
        puVar66 = puVar46;
      }
      uVar36 = puVar57[0x10];
      *puStack_130 = (uint)puStack_148;
      *(undefined1 *)(lStack_140 + 0x48) = 1;
      *puStack_348 = uStack_180;
      pdb_140901700(auStack_2d8,uStack_350,1);
      uVar38 = pdb_140901720(auStack_2d8);
      if (*puVar57 != 6) break;
      *puStack_170 = (undefined4)lStack_178;
      lVar53 = *(longlong *)(puStack_120 + 0xc);
      uVar67 = *(undefined8 *)(puStack_120 + 0x10);
      puStack_100 = puVar69;
      if (lVar53 == *(longlong *)(puStack_120 + 8)) {
        pdb_142d7e6e0(puStack_120 + 8);
      }
      lVar45 = *(longlong *)(puStack_120 + 10);
      lVar68 = lVar53 * 0x20;
      *(undefined1 *)(lVar45 + lVar68) = 0;
      *(undefined4 *)(lVar45 + 8 + lVar68) = 4;
      *(undefined4 *)(lVar45 + 0xc + lVar68) = uVar38;
      *(undefined8 *)(lVar45 + 0x18 + lVar68) = uVar67;
      *(longlong *)(puStack_120 + 0xc) = lVar53 + 1;
      *(longlong *)(puStack_120 + 0x10) = *(longlong *)(puStack_120 + 0x10) + 1;
      lVar53 = *(longlong *)puVar57;
      pbVar8 = *(byte **)(puVar57 + 2);
      uStack_1b7 = pdb_14008fbf0();
      uStack_21c = 0;
      uStack_218 = SUB84(puStack_118,0);
      uStack_214 = (undefined4)((ulonglong)puStack_118 >> 0x20);
      uStack_210 = (undefined3)lVar53;
      uStack_20d = (undefined4)((ulonglong)lVar53 >> 0x18);
      uStack_209 = (undefined1)((ulonglong)lVar53 >> 0x38);
      uStack_200 = CONCAT17(unaff_XMM11_Bh,
                            CONCAT16(unaff_XMM11_Bg,
                                     CONCAT15(unaff_XMM11_Bf,
                                              CONCAT14(unaff_XMM11_Be,
                                                       CONCAT13(unaff_XMM11_Bd,
                                                                CONCAT12(unaff_XMM11_Bc,
                                                                         CONCAT11(unaff_XMM11_Bb,
                                                                                  unaff_XMM11_Ba))))
                                             )));
      uStack_1f8 = (byte *)CONCAT44(uStack_1f8._4_4_,uVar36);
      uStack_1e0._0_3_ = CONCAT12(uVar62,(undefined2)uStack_1e0);
      lStack_1d8 = *(longlong *)(puVar57 + 10);
      lStack_1d0 = *(longlong *)(puVar57 + 0xc);
      uStack_1c8 = *(ulonglong *)(puVar57 + 0xe);
      uStack_4b0 = puVar57[0x13];
      lStack_4b8 = *(longlong *)(puVar57 + 0x11);
      *puStack_260 = uStack_134;
      *puStack_268 = uStack_138;
      *puStack_130 = (uint)puStack_148;
      puVar39 = puStack_100;
      fStack_220 = fVar64;
      uStack_208 = pbVar8;
      uStack_1c0 = uVar38;
    } while( true );
  }
                    /* WARNING: Subroutine does not return */
  pdb_142dc83b0(&UNK_14300dc90,0x13,&UNK_14300dcc0);
}

