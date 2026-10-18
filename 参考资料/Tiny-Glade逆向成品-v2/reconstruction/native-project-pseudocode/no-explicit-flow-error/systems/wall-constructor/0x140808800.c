// VA 0x140808800, PDB extent 21667 bytes
// system_wall_constructor::construct_walls::construct_walls
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/wall-constructor/src/construct_walls.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: system_wall_constructor::construct_walls::construct_walls
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/wall-constructor/src/construct_walls.rs
   Extent: 21667 */

void pdb_140808800(undefined8 *param_1,undefined8 param_2,undefined1 (*param_3) [16],
                  longlong *param_4,undefined8 *param_5,undefined1 (*param_6) [16],
                  undefined1 (**param_7) [16],longlong *param_8,undefined8 *param_9,
                  undefined8 *param_10,undefined8 param_11,undefined8 param_12,longlong *param_13,
                  undefined8 *param_14,undefined8 *param_15,undefined8 *param_16)

{
  float *pfVar1;
  char *pcVar2;
  float *pfVar3;
  byte bVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  code *pcVar11;
  uint uVar12;
  float fVar13;
  undefined1 (*pauVar14) [16];
  float fVar15;
  float fVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  char cVar26;
  undefined1 uVar27;
  byte bVar28;
  uint uVar29;
  undefined4 uVar30;
  longlong lVar31;
  ulonglong uVar32;
  undefined1 (*pauVar33) [16];
  longlong lVar34;
  undefined1 (***pppauVar35) [16];
  undefined4 *puVar36;
  float *pfVar37;
  char *pcVar38;
  ulonglong uVar39;
  undefined8 *puVar40;
  byte *pbVar41;
  longlong *plVar42;
  undefined1 (***pppauVar43) [16];
  longlong lVar44;
  uint uVar45;
  int *piVar46;
  longlong lVar47;
  ulonglong uVar48;
  undefined1 (*pauVar49) [16];
  undefined1 (*pauVar50) [16];
  undefined1 (***pppauVar51) [16];
  undefined1 (*pauVar52) [16];
  undefined *puVar53;
  undefined *puVar54;
  ulonglong uVar55;
  ushort uVar56;
  int iVar57;
  ulonglong uVar58;
  longlong lVar59;
  longlong lVar60;
  ulonglong *puVar61;
  undefined1 (**ppauVar62) [16];
  undefined1 (*pauVar63) [16];
  undefined1 (*pauVar64) [16];
  undefined8 uVar65;
  bool bVar66;
  byte bVar67;
  float fVar68;
  float fVar69;
  float extraout_XMM0_Da;
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  undefined4 uVar84;
  undefined4 uVar85;
  undefined4 uVar86;
  undefined4 uVar87;
  float fVar88;
  undefined1 (***in_stack_fffffffffffff918) [16];
  undefined1 (**in_stack_fffffffffffff948) [16];
  undefined8 uStack_668;
  undefined8 uStack_660;
  undefined8 uStack_658;
  undefined8 uStack_650;
  undefined8 uStack_648;
  undefined8 uStack_640;
  undefined8 uStack_638;
  undefined8 uStack_630;
  longlong *aplStack_628 [2];
  undefined8 uStack_618;
  undefined8 uStack_610;
  undefined1 (**ppauStack_608) [16];
  undefined1 (**ppauStack_600) [16];
  longlong lStack_5f8;
  undefined8 uStack_5f0;
  undefined8 uStack_5e8;
  undefined1 (**ppauStack_5e0) [16];
  undefined4 *puStack_5d8;
  undefined8 uStack_5d0;
  undefined4 *puStack_5c8;
  undefined4 *puStack_5c0;
  undefined4 *puStack_5b8;
  undefined4 *puStack_5b0;
  longlong lStack_5a8;
  longlong lStack_5a0;
  longlong lStack_598;
  undefined1 (**ppauStack_590) [16];
  undefined1 (*pauStack_588) [16];
  undefined4 *puStack_580;
  longlong lStack_578;
  longlong lStack_570;
  longlong lStack_568;
  longlong lStack_560;
  undefined4 *puStack_558;
  undefined8 uStack_550;
  undefined8 uStack_548;
  longlong lStack_540;
  longlong *plStack_538;
  longlong lStack_530;
  undefined1 (*pauStack_528) [16];
  undefined1 (*pauStack_520) [16];
  undefined1 (*pauStack_518) [16];
  undefined1 (*pauStack_510) [16];
  undefined1 (*pauStack_508) [16];
  undefined1 (*pauStack_500) [16];
  undefined1 (*pauStack_4f8) [16];
  undefined1 (*pauStack_4f0) [16];
  undefined1 (*pauStack_4e8) [16];
  undefined1 (*pauStack_4e0) [16];
  undefined1 (*pauStack_4d8) [16];
  undefined1 (*pauStack_4d0) [16];
  undefined1 uStack_4c8;
  undefined7 uStack_4c7;
  undefined1 (*pauStack_4c0) [16];
  undefined1 (*pauStack_4b8) [16];
  undefined1 (*pauStack_4b0) [16];
  undefined1 (*pauStack_4a8) [16];
  undefined1 (*pauStack_4a0) [16];
  undefined1 (*pauStack_498) [16];
  ulonglong uStack_490;
  undefined1 (*pauStack_488) [16];
  undefined1 (*pauStack_480) [16];
  undefined1 (*pauStack_478) [16];
  undefined1 (*pauStack_470) [16];
  undefined1 (*pauStack_468) [16];
  undefined1 (*pauStack_460) [16];
  undefined8 uStack_458;
  undefined8 uStack_450;
  undefined1 (*pauStack_438) [16];
  undefined1 (*pauStack_430) [16];
  undefined1 (*pauStack_428) [16];
  undefined1 (*pauStack_420) [16];
  undefined1 (*pauStack_418) [16];
  undefined1 (*pauStack_410) [16];
  longlong lStack_408;
  byte *pbStack_400;
  undefined8 uStack_3f8;
  undefined8 uStack_3f0;
  undefined8 uStack_3e8;
  undefined8 uStack_3e0;
  longlong lStack_3d8;
  undefined1 (*pauStack_3d0) [16];
  undefined1 (*pauStack_3c8) [16];
  undefined1 (*pauStack_3c0) [16];
  undefined4 *puStack_3b8;
  longlong lStack_3b0;
  undefined1 (*pauStack_3a8) [16];
  undefined1 (*pauStack_3a0) [16];
  undefined1 (*pauStack_398) [16];
  undefined1 (*pauStack_390) [16];
  undefined1 (*pauStack_388) [16];
  undefined1 (*pauStack_380) [16];
  undefined1 (*pauStack_378) [16];
  undefined1 (*pauStack_370) [16];
  undefined1 (*pauStack_368) [16];
  undefined1 (*pauStack_360) [16];
  undefined1 (*pauStack_358) [16];
  undefined1 (*pauStack_350) [16];
  undefined8 uStack_348;
  undefined4 uStack_33c;
  undefined4 uStack_338;
  undefined4 uStack_334;
  undefined4 uStack_330;
  undefined4 uStack_32c;
  undefined4 uStack_328;
  undefined4 uStack_324;
  undefined1 (*pauStack_320) [16];
  undefined1 (*pauStack_318) [16];
  undefined1 (*pauStack_310) [16];
  longlong lStack_308;
  longlong lStack_300;
  longlong lStack_2f8;
  longlong lStack_2f0;
  ulonglong uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  ulonglong uStack_2d0;
  ulonglong uStack_2c8;
  undefined8 uStack_2c0;
  longlong *plStack_2b8;
  undefined4 uStack_2ac;
  undefined4 uStack_2a8;
  undefined4 uStack_2a4;
  longlong lStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined1 (*pauStack_280) [16];
  undefined1 (*pauStack_278) [16];
  undefined1 (*pauStack_270) [16];
  undefined1 (*pauStack_268) [16];
  undefined1 (*pauStack_260) [16];
  undefined1 (*pauStack_258) [16];
  undefined1 (*pauStack_250) [16];
  undefined1 (*pauStack_248) [16];
  undefined1 (*pauStack_240) [16];
  undefined1 (*pauStack_238) [16];
  undefined1 (*pauStack_230) [16];
  undefined1 (*pauStack_228) [16];
  undefined1 (*pauStack_220) [16];
  undefined1 (*pauStack_218) [16];
  undefined1 (*pauStack_210) [16];
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined1 (**ppauStack_1f0) [16];
  undefined1 (*pauStack_1e8) [16];
  undefined1 (*pauStack_1e0) [16];
  undefined1 (*pauStack_1d8) [16];
  longlong *plStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined1 (*pauStack_1b8) [16];
  undefined4 uStack_1a8;
  undefined4 uStack_1a4;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  undefined1 (***pppauStack_198) [16];
  undefined4 uStack_18c;
  undefined1 (*pauStack_188) [16];
  undefined8 uStack_180;
  undefined8 uStack_178;
  float *pfStack_170;
  undefined1 (*pauStack_168) [16];
  longlong *plStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined1 (*pauStack_148) [16];
  undefined1 (*pauStack_140) [16];
  undefined1 uStack_132;
  byte bStack_131;
  undefined1 (*pauStack_130) [16];
  undefined1 (*pauStack_128) [16];
  undefined1 (*pauStack_120) [16];
  undefined1 (*pauStack_118) [16];
  undefined1 uStack_109;
  undefined1 (*pauStack_108) [16];
  undefined1 (*pauStack_100) [16];
  undefined1 uStack_f6;
  undefined1 uStack_f5;
  undefined1 uStack_f4;
  undefined1 uStack_f3;
  undefined1 uStack_f2;
  undefined1 uStack_f1;
  undefined8 uStack_f0;
  
  uStack_f0 = 0xfffffffffffffffe;
  aplStack_628[0] = (longlong *)*param_1;
  aplStack_628[1] = (longlong *)param_1[1];
  uStack_618 = param_1[2];
  uStack_610 = param_1[3];
  uStack_1c8 = param_1[4];
  pauVar49 = (undefined1 (*) [16])param_1[8];
  ppauVar62 = (undefined1 (**) [16])param_1[9];
  uVar39 = param_1[0xb];
  plStack_1d0 = (longlong *)param_1[0xf];
  lStack_308 = param_13[4];
  puStack_5c8 = (undefined4 *)param_13[6];
  uStack_338 = *(undefined4 *)((longlong)param_13 + 0x3c);
  uStack_668 = param_16[4];
  uStack_660 = param_16[5];
  uStack_658 = param_16[6];
  uStack_650 = param_16[7];
  uStack_648 = param_16[8];
  uStack_640 = param_16[9];
  uStack_638 = param_16[10];
  uStack_630 = param_16[0xb];
  uStack_2e0 = *param_16;
  lStack_2f8 = param_13[8];
  puStack_5b8 = (undefined4 *)param_13[10];
  uStack_330 = *(undefined4 *)((longlong)param_13 + 0x5c);
  lStack_300 = param_13[0xc];
  puStack_5c0 = (undefined4 *)param_13[0xe];
  uStack_334 = *(undefined4 *)((longlong)param_13 + 0x7c);
  lStack_2a0 = param_13[0x10];
  puStack_5d8 = (undefined4 *)param_13[0x12];
  uStack_33c = *(undefined4 *)((longlong)param_13 + 0x9c);
  lStack_2f0 = param_13[0x14];
  puStack_558 = (undefined4 *)param_13[0x16];
  uStack_324 = *(undefined4 *)((longlong)param_13 + 0xbc);
  uStack_5d0 = param_2;
  uStack_2e8 = uVar39;
  plStack_160 = param_4;
  pauStack_118 = param_3;
  uVar29 = pdb_140e94b40();
  pauVar52 = (undefined1 (*) [16])(ulonglong)uVar29;
  bVar28 = 0;
  if ((char)uVar29 == '\0') goto LAB_140808b38;
  uVar48 = 0x39;
  lVar31 = pdb_14080de80(0x39);
  pauVar63 = (undefined1 (*) [16])&UNK_143007c5b;
  if (lVar31 == 1) {
    if (0x39 < uVar39) {
      pdb_142dc8070(&UNK_143007c5b,0x39,0,uVar39,&UNK_143007d10);
LAB_14080c101:
      pauStack_100 = (undefined1 (*) [16])0x0;
      pauStack_108 = (undefined1 (*) [16])0x4;
      uStack_f1 = 1;
                    /* WARNING: Subroutine does not return */
      pdb_142dc8150(&UNK_143007af8);
    }
    uVar32 = pdb_14080de80(uVar39);
    if ((uVar32 & 1) != 0) {
      if (0x39 < uVar39 + 2) {
        pdb_142dc8070(&UNK_143007c5b,0x39,uVar39 + 2,0x39,&UNK_143007d28);
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
      uVar48 = 0x37 - uVar39;
      pauVar63 = (undefined1 (*) [16])(&UNK_143007c5d + uVar39);
    }
  }
  puVar53 = &UNK_143007aae;
  pauVar64 = (undefined1 (*) [16])&UNK_143007a78;
  do {
    bVar28 = puVar53[-1];
    uVar29 = (uint)(char)bVar28;
    if ((char)bVar28 < '\0') {
      bVar67 = puVar53[-2];
      if ((char)bVar67 < -0x40) {
        bVar4 = puVar53[-3];
        if ((char)bVar4 < -0x40) {
          pbVar41 = puVar53 + -4;
          puVar53 = puVar53 + -4;
          uVar29 = bVar4 & 0x3f | (*pbVar41 & 7) << 6;
        }
        else {
          puVar53 = puVar53 + -3;
          uVar29 = bVar4 & 0xf;
        }
        uVar29 = bVar67 & 0x3f | uVar29 << 6;
      }
      else {
        puVar53 = puVar53 + -2;
        uVar29 = bVar67 & 0x1f;
      }
      uVar29 = (uint)(bVar28 & 0x3f) | uVar29 << 6;
      if (uVar29 != 0x5c) goto LAB_140808aa4;
LAB_140808ab5:
      puVar54 = puVar53 + -0x143007a77;
      if ((undefined *)0x36 < puVar54) {
        pdb_142dc8070(&UNK_143007a78,0x36,puVar54,0x36,&UNK_143007cf0);
LAB_14080bfd9:
        uStack_f6 = 1;
                    /* WARNING: Subroutine does not return */
        pdb_142dc8150(&UNK_143007b10);
      }
      pauVar50 = (undefined1 (*) [16])(0x36 - (longlong)puVar54);
      pauVar64 = (undefined1 (*) [16])(puVar53 + 1);
      goto LAB_140808ad7;
    }
    puVar53 = puVar53 + -1;
    if (uVar29 == 0x5c) goto LAB_140808ab5;
LAB_140808aa4:
    if (uVar29 == 0x2f) goto LAB_140808ab5;
  } while (puVar53 != &UNK_143007a78);
  pauVar50 = (undefined1 (*) [16])0x36;
LAB_140808ad7:
  pauVar33 = (undefined1 (*) [16])pdb_140e97000();
  if (pauVar33[6][8] != '\x01') goto LAB_14080bd4d;
LAB_140808ae6:
  bVar28 = (byte)pauVar52;
  if (*(longlong *)*pauVar33 == 0) {
    *(undefined8 *)*pauVar33 = 0xffffffffffffffff;
    in_stack_fffffffffffff918 = (undefined1 (***) [16])0x0;
    pauStack_168 = pauVar33;
    uStack_2d8 = pdb_140e94f10(*pauVar33 + 8,pauVar63,uVar48,pauVar64,pauVar50,1,0);
    *(longlong *)*pauStack_168 = *(longlong *)*pauStack_168 + 1;
LAB_140808b38:
    uStack_298 = (undefined1 (*) [16])*param_9;
    lVar31 = param_9[1];
    uVar39 = *(ulonglong *)uStack_298;
    uVar32 = 0;
    uVar48 = uVar39 - *(ulonglong *)(lVar31 + 0x18);
    if (uVar39 < *(ulonglong *)(lVar31 + 0x18)) {
      uVar48 = uVar32;
    }
    uVar55 = uVar39 - *(ulonglong *)(lVar31 + 0x38);
    if (uVar39 < *(ulonglong *)(lVar31 + 0x38)) {
      uVar55 = uVar32;
    }
    uStack_290 = (code *)(uVar48 * 0x10 + *(longlong *)(lVar31 + 8));
    uVar39 = *(ulonglong *)(lVar31 + 0x10) - uVar48;
    if (*(ulonglong *)(lVar31 + 0x10) < uVar48) {
      uStack_290 = (code *)0x8;
      uVar39 = uVar32;
    }
    pauStack_280 = (undefined1 (*) [16])(uVar55 * 0x10 + *(longlong *)(lVar31 + 0x28));
    uVar48 = *(ulonglong *)(lVar31 + 0x30) - uVar55;
    if (*(ulonglong *)(lVar31 + 0x30) < uVar55) {
      pauStack_280 = (undefined1 (*) [16])0x8;
      uVar48 = uVar32;
    }
    pauStack_270 = (undefined1 (*) [16])(uVar48 + uVar39);
    *(longlong *)uStack_298 = *(longlong *)(lVar31 + 0x40) - (longlong)pauStack_270;
    uStack_288 = (undefined1 (*) [16])(uVar39 * 0x10 + (longlong)uStack_290);
    pauStack_278 = pauStack_280 + uVar48;
    ppauStack_590 = ppauVar62;
    pauStack_588 = pauVar49;
    bStack_131 = bVar28;
    pdb_140fc81a0(&pauStack_1e8,&uStack_298);
    puVar61 = (ulonglong *)*param_10;
    lVar31 = param_10[1];
    uVar39 = *puVar61;
    uVar32 = 0;
    uVar48 = uVar39 - *(ulonglong *)(lVar31 + 0x18);
    if (uVar39 < *(ulonglong *)(lVar31 + 0x18)) {
      uVar48 = uVar32;
    }
    uVar55 = uVar39 - *(ulonglong *)(lVar31 + 0x38);
    if (uVar39 < *(ulonglong *)(lVar31 + 0x38)) {
      uVar55 = uVar32;
    }
    pauVar49 = (undefined1 (*) [16])(uVar48 * 0x10 + *(longlong *)(lVar31 + 8));
    uVar39 = *(ulonglong *)(lVar31 + 0x10);
    uVar58 = uVar39 - uVar48;
    if (uVar39 < uVar48) {
      uVar58 = uVar32;
    }
    if (uVar39 < uVar48) {
      pauVar49 = (undefined1 (*) [16])0x8;
    }
    pauVar52 = (undefined1 (*) [16])(uVar55 * 0x10 + *(longlong *)(lVar31 + 0x28));
    uVar39 = *(ulonglong *)(lVar31 + 0x30) - uVar55;
    if (*(ulonglong *)(lVar31 + 0x30) < uVar55) {
      pauVar52 = (undefined1 (*) [16])0x8;
      uVar39 = uVar32;
    }
    *puVar61 = (*(longlong *)(lVar31 + 0x40) - uVar39) - uVar58;
    pauStack_168 = pauVar49 + uVar58;
    pauVar63 = pauVar52 + uVar39;
    pauVar64 = pauVar52;
    pauVar50 = pauVar49;
LAB_140808cab:
    if (pauVar50 == (undefined1 (*) [16])0x0) {
      if (pauVar64 == (undefined1 (*) [16])0x0) goto LAB_140808d75;
LAB_140808cb9:
      if (pauVar64 == pauVar63) goto LAB_140808d75;
      pauVar52 = pauVar64 + 1;
      pauVar50 = pauVar64;
      pauVar64 = pauVar52;
      pauVar33 = (undefined1 (*) [16])0x0;
LAB_140808cf3:
      *puVar61 = *puVar61 + 1;
      uVar65 = *(undefined8 *)(*pauVar50 + 8);
      uStack_f5 = 1;
      lVar31 = pdb_140b54f80(aplStack_628[0],uVar65,&UNK_143309360);
      pauVar14 = pauStack_1d8;
      pauVar50 = pauVar33;
      if (lVar31 != 0) {
        if (pauStack_1d8 == pauStack_1e8) {
          uStack_f5 = 1;
          pdb_142d7f1b0(&pauStack_1e8,pauStack_1d8,1,8,8);
        }
        *(undefined8 *)(*pauStack_1e0 + (longlong)pauVar14 * 8) = uVar65;
        pauStack_1d8 = (undefined1 (*) [16])(*pauVar14 + 1);
        pauVar64 = pauVar52;
        pauVar50 = pauVar49;
      }
      goto LAB_140808cab;
    }
    if (pauVar50 != pauStack_168) {
      pauVar49 = pauVar50 + 1;
      pauVar33 = pauVar49;
      goto LAB_140808cf3;
    }
    pauVar49 = (undefined1 (*) [16])0x0;
    if (pauVar64 != (undefined1 (*) [16])0x0) goto LAB_140808cb9;
LAB_140808d75:
    uStack_2a8 = *(undefined4 *)((longlong)plStack_160 + 0x1c);
    puStack_3b8 = (undefined4 *)plStack_160[2];
    *puStack_3b8 = uStack_2a8;
    plStack_160 = (longlong *)*plStack_160;
    pauVar50 = (undefined1 (*) [16])*plStack_160;
    lVar31 = plStack_160[3];
    auVar70 = *pauVar50;
    pauVar49 = pauVar50 + 1;
    uVar29 = ~(uint)(ushort)((ushort)(SUB161(auVar70 >> 7,0) & 1) |
                             (ushort)(SUB161(auVar70 >> 0xf,0) & 1) << 1 |
                             (ushort)(SUB161(auVar70 >> 0x17,0) & 1) << 2 |
                             (ushort)(SUB161(auVar70 >> 0x1f,0) & 1) << 3 |
                             (ushort)(SUB161(auVar70 >> 0x27,0) & 1) << 4 |
                             (ushort)(SUB161(auVar70 >> 0x2f,0) & 1) << 5 |
                             (ushort)(SUB161(auVar70 >> 0x37,0) & 1) << 6 |
                             (ushort)(SUB161(auVar70 >> 0x3f,0) & 1) << 7 |
                             (ushort)(SUB161(auVar70 >> 0x47,0) & 1) << 8 |
                             (ushort)(SUB161(auVar70 >> 0x4f,0) & 1) << 9 |
                             (ushort)(SUB161(auVar70 >> 0x57,0) & 1) << 10 |
                             (ushort)(SUB161(auVar70 >> 0x5f,0) & 1) << 0xb |
                             (ushort)(SUB161(auVar70 >> 0x67,0) & 1) << 0xc |
                             (ushort)(SUB161(auVar70 >> 0x6f,0) & 1) << 0xd |
                             (ushort)(SUB161(auVar70 >> 0x77,0) & 1) << 0xe |
                            (ushort)(byte)(auVar70[0xf] >> 7) << 0xf);
    while (lVar31 != 0) {
      if ((short)uVar29 == 0) {
        do {
          auVar70 = *pauVar49;
          pauVar50 = pauVar50 + -0x68;
          pauVar49 = pauVar49 + 1;
          uVar29 = (ushort)((ushort)(SUB161(auVar70 >> 7,0) & 1) |
                            (ushort)(SUB161(auVar70 >> 0xf,0) & 1) << 1 |
                            (ushort)(SUB161(auVar70 >> 0x17,0) & 1) << 2 |
                            (ushort)(SUB161(auVar70 >> 0x1f,0) & 1) << 3 |
                            (ushort)(SUB161(auVar70 >> 0x27,0) & 1) << 4 |
                            (ushort)(SUB161(auVar70 >> 0x2f,0) & 1) << 5 |
                            (ushort)(SUB161(auVar70 >> 0x37,0) & 1) << 6 |
                            (ushort)(SUB161(auVar70 >> 0x3f,0) & 1) << 7 |
                            (ushort)(SUB161(auVar70 >> 0x47,0) & 1) << 8 |
                            (ushort)(SUB161(auVar70 >> 0x4f,0) & 1) << 9 |
                            (ushort)(SUB161(auVar70 >> 0x57,0) & 1) << 10 |
                            (ushort)(SUB161(auVar70 >> 0x5f,0) & 1) << 0xb |
                            (ushort)(SUB161(auVar70 >> 0x67,0) & 1) << 0xc |
                            (ushort)(SUB161(auVar70 >> 0x6f,0) & 1) << 0xd |
                            (ushort)(SUB161(auVar70 >> 0x77,0) & 1) << 0xe |
                           (ushort)(byte)(auVar70[0xf] >> 7) << 0xf) ^ 0xffff;
        } while (uVar29 == 0);
      }
      uVar45 = 0;
      for (uVar12 = uVar29; (uVar12 & 1) == 0; uVar12 = uVar12 >> 1 | 0x80000000) {
        uVar45 = uVar45 + 1;
      }
      pauVar52 = (undefined1 (*) [16])((ulonglong)uVar45 * -0x68);
      pauVar63 = *(undefined1 (**) [16])(pauVar50[-7] + (ulonglong)uVar45 * -0x68 + 8);
      uStack_f5 = 1;
      lVar34 = pdb_140b54f80(aplStack_628[0],pauVar63,&UNK_143007b28);
      uVar29 = uVar29 - 1 & uVar29;
      lVar31 = lVar31 + -1;
      if (lVar34 != 0) {
        uStack_f5 = 1;
        cVar26 = pdb_140c2b060((undefined *)((longlong)pauVar50 + (longlong)pauVar52) + -0x60,
                               *(undefined4 *)(lVar34 + 0x290),*(int *)(lVar34 + 600) != 2);
        pauVar64 = pauStack_1d8;
        if (cVar26 != '\0') {
          if (pauStack_1d8 == pauStack_1e8) {
            uStack_f5 = 1;
            pdb_142d7e8a0(&pauStack_1e8);
          }
          *(undefined1 (**) [16])(*pauStack_1e0 + (longlong)pauVar64 * 8) = pauVar63;
          pauVar52 = (undefined1 (*) [16])(*pauVar64 + 1);
          pauStack_1d8 = pauVar52;
        }
      }
    }
    *(undefined4 *)param_5[2] = *(undefined4 *)((longlong)param_5 + 0x1c);
    uStack_550 = *param_5;
    uStack_298 = (undefined1 (*) [16])aplStack_628;
    uStack_290 = (code *)param_6;
    uStack_288 = (undefined1 (*) [16])&pauStack_1e8;
    uStack_f5 = 1;
    pdb_1414092a0(uStack_550,&uStack_298);
    pauVar64 = pauStack_1d8;
    if ((undefined1 (*) [16])0x1 < pauStack_1d8) {
      if (pauStack_1d8 < (undefined1 (*) [16])0x15) {
        puVar61 = (ulonglong *)(*pauStack_1e0 + 8);
        lVar31 = 8;
        do {
          uVar48 = puVar61[-1];
          uVar39 = *puVar61;
          lVar34 = lVar31;
          if (uVar39 < uVar48) {
            do {
              lVar59 = lVar34;
              *(ulonglong *)(*pauStack_1e0 + lVar59) = uVar48;
              pauVar64 = pauStack_1e0;
              if (lVar59 == 8) goto LAB_14080bd01;
              uVar48 = *(ulonglong *)(pauStack_1e0[-1] + lVar59);
              lVar34 = lVar59 + -8;
            } while (uVar39 < uVar48);
            pauVar64 = (undefined1 (*) [16])(pauStack_1e0[-1] + lVar59 + 8);
LAB_14080bd01:
            *(ulonglong *)*pauVar64 = uVar39;
          }
          puVar61 = puVar61 + 1;
          lVar31 = lVar31 + 8;
        } while (puVar61 != (ulonglong *)(*pauStack_1e0 + (longlong)pauStack_1d8 * 8));
      }
      else {
        uStack_f5 = 1;
        pdb_140a91360();
      }
      pauVar64 = pauStack_1d8;
      if ((undefined1 (*) [16])0x1 < pauStack_1d8) {
        puVar53 = (undefined *)0x0;
        do {
          if (*(longlong *)(*pauStack_1e0 + (longlong)puVar53 * 8 + 8) ==
              *(longlong *)(*pauStack_1e0 + (longlong)puVar53 * 8)) {
            pauVar33 = (undefined1 (*) [16])(puVar53 + 2);
            pauVar64 = (undefined1 (*) [16])(puVar53 + 1);
            if (pauVar33 < pauStack_1d8) {
              if (((int)pauStack_1d8 - (int)puVar53 & 1U) != 0) {
                if (*(longlong *)(pauStack_1e0[1] + (longlong)puVar53 * 8) !=
                    *(longlong *)(*pauStack_1e0 + (longlong)puVar53 * 8)) {
                  *(longlong *)(*pauStack_1e0 + (longlong)puVar53 * 8 + 8) =
                       *(longlong *)(pauStack_1e0[1] + (longlong)puVar53 * 8);
                  pauVar64 = (undefined1 (*) [16])(puVar53 + 2);
                }
                pauVar33 = (undefined1 (*) [16])(puVar53 + 3);
              }
              pauVar50 = pauStack_1e0;
              if (pauStack_1d8[-1] + 0xd != puVar53) goto LAB_14080c0ac;
            }
            break;
          }
          puVar53 = puVar53 + 1;
        } while (pauStack_1d8[-1] + 0xf != puVar53);
      }
    }
    goto LAB_140808f1a;
  }
  goto LAB_14080bd41;
code_r0x00014080915c:
  iVar57 = (uint)uVar32 - 1;
  uVar56 = (ushort)iVar57 & (ushort)uVar32;
  uVar32 = (ulonglong)CONCAT22((short)((uint)iVar57 >> 0x10),uVar56);
  if (uVar56 == 0) goto LAB_140809170;
  goto LAB_14080913d;
LAB_14080a008:
  if (plStack_160[2] == 0) {
    uStack_150 = 0;
    uStack_158 = 4;
    uStack_f4 = 0;
    pdb_142da66e0(plStack_160,1,plStack_2b8,CONCAT71((int7)(uVar39 >> 8),1));
  }
  uStack_150 = 0;
  uStack_158 = 4;
  uStack_f4 = 0;
  pdb_140c2abf0(&uStack_290);
  uStack_298 = pauVar49;
  pauVar63 = (undefined1 (*) [16])*plStack_160;
  uVar39 = plStack_160[1];
  uVar32 = uVar48 & uVar39;
  auVar70 = *(undefined1 (*) [16])(*pauVar63 + uVar32);
  uVar56 = (ushort)(SUB161(auVar70 >> 7,0) & 1) | (ushort)(SUB161(auVar70 >> 0xf,0) & 1) << 1 |
           (ushort)(SUB161(auVar70 >> 0x17,0) & 1) << 2 |
           (ushort)(SUB161(auVar70 >> 0x1f,0) & 1) << 3 |
           (ushort)(SUB161(auVar70 >> 0x27,0) & 1) << 4 |
           (ushort)(SUB161(auVar70 >> 0x2f,0) & 1) << 5 |
           (ushort)(SUB161(auVar70 >> 0x37,0) & 1) << 6 |
           (ushort)(SUB161(auVar70 >> 0x3f,0) & 1) << 7 |
           (ushort)(SUB161(auVar70 >> 0x47,0) & 1) << 8 |
           (ushort)(SUB161(auVar70 >> 0x4f,0) & 1) << 9 |
           (ushort)(SUB161(auVar70 >> 0x57,0) & 1) << 10 |
           (ushort)(SUB161(auVar70 >> 0x5f,0) & 1) << 0xb |
           (ushort)(SUB161(auVar70 >> 0x67,0) & 1) << 0xc |
           (ushort)(SUB161(auVar70 >> 0x6f,0) & 1) << 0xd |
           (ushort)(SUB161(auVar70 >> 0x77,0) & 1) << 0xe | (ushort)(byte)(auVar70[0xf] >> 7) << 0xf
  ;
  uVar29 = (uint)uVar56;
  if (uVar56 == 0) {
    lVar34 = 0x10;
    do {
      uVar32 = uVar32 + lVar34 & uVar39;
      auVar70 = *(undefined1 (*) [16])(*pauVar63 + uVar32);
      lVar34 = lVar34 + 0x10;
      uVar29 = (uint)(ushort)((ushort)(SUB161(auVar70 >> 7,0) & 1) |
                              (ushort)(SUB161(auVar70 >> 0xf,0) & 1) << 1 |
                              (ushort)(SUB161(auVar70 >> 0x17,0) & 1) << 2 |
                              (ushort)(SUB161(auVar70 >> 0x1f,0) & 1) << 3 |
                              (ushort)(SUB161(auVar70 >> 0x27,0) & 1) << 4 |
                              (ushort)(SUB161(auVar70 >> 0x2f,0) & 1) << 5 |
                              (ushort)(SUB161(auVar70 >> 0x37,0) & 1) << 6 |
                              (ushort)(SUB161(auVar70 >> 0x3f,0) & 1) << 7 |
                              (ushort)(SUB161(auVar70 >> 0x47,0) & 1) << 8 |
                              (ushort)(SUB161(auVar70 >> 0x4f,0) & 1) << 9 |
                              (ushort)(SUB161(auVar70 >> 0x57,0) & 1) << 10 |
                              (ushort)(SUB161(auVar70 >> 0x5f,0) & 1) << 0xb |
                              (ushort)(SUB161(auVar70 >> 0x67,0) & 1) << 0xc |
                              (ushort)(SUB161(auVar70 >> 0x6f,0) & 1) << 0xd |
                              (ushort)(SUB161(auVar70 >> 0x77,0) & 1) << 0xe |
                             (ushort)(byte)(auVar70[0xf] >> 7) << 0xf);
    } while (uVar29 == 0);
  }
  uVar45 = 0;
  for (; (uVar29 & 1) == 0; uVar29 = uVar29 >> 1 | 0x80000000) {
    uVar45 = uVar45 + 1;
  }
  uVar32 = uVar45 + uVar32 & uVar39;
  bVar67 = (*pauVar63)[uVar32];
  if (-1 < (char)bVar67) {
    auVar70 = *pauVar63;
    uVar29 = 0;
    for (uVar45 = (uint)(ushort)((ushort)(SUB161(auVar70 >> 7,0) & 1) |
                                 (ushort)(SUB161(auVar70 >> 0xf,0) & 1) << 1 |
                                 (ushort)(SUB161(auVar70 >> 0x17,0) & 1) << 2 |
                                 (ushort)(SUB161(auVar70 >> 0x1f,0) & 1) << 3 |
                                 (ushort)(SUB161(auVar70 >> 0x27,0) & 1) << 4 |
                                 (ushort)(SUB161(auVar70 >> 0x2f,0) & 1) << 5 |
                                 (ushort)(SUB161(auVar70 >> 0x37,0) & 1) << 6 |
                                 (ushort)(SUB161(auVar70 >> 0x3f,0) & 1) << 7 |
                                 (ushort)(SUB161(auVar70 >> 0x47,0) & 1) << 8 |
                                 (ushort)(SUB161(auVar70 >> 0x4f,0) & 1) << 9 |
                                 (ushort)(SUB161(auVar70 >> 0x57,0) & 1) << 10 |
                                 (ushort)(SUB161(auVar70 >> 0x5f,0) & 1) << 0xb |
                                 (ushort)(SUB161(auVar70 >> 0x67,0) & 1) << 0xc |
                                 (ushort)(SUB161(auVar70 >> 0x6f,0) & 1) << 0xd |
                                 (ushort)(SUB161(auVar70 >> 0x77,0) & 1) << 0xe |
                                (ushort)(byte)(auVar70[0xf] >> 7) << 0xf); (uVar45 & 1) == 0;
        uVar45 = uVar45 >> 1 | 0x80000000) {
      uVar29 = uVar29 + 1;
    }
    uVar32 = (ulonglong)uVar29;
    bVar67 = (*pauVar63)[uVar32];
  }
  bVar28 = bVar28 >> 1;
  (*pauVar63)[uVar32] = bVar28;
  pauVar63[1][uVar32 - 0x10 & uVar39] = bVar28;
  lVar59 = uVar32 * -0x68;
  lVar34 = (longlong)pauVar63 + lVar59;
  *(undefined1 (**) [16])((longlong)pauVar63 + lVar59 + -8) = pauStack_238;
  puVar40 = (undefined8 *)((longlong)pauVar63 + lVar59 + -0x18);
  *puVar40 = pauStack_248;
  puVar40[1] = pauStack_240;
  puVar40 = (undefined8 *)((longlong)pauVar63 + lVar59 + -0x28);
  *puVar40 = pauStack_258;
  puVar40[1] = pauStack_250;
  puVar40 = (undefined8 *)((longlong)pauVar63 + lVar59 + -0x38);
  *puVar40 = pauStack_268;
  puVar40[1] = pauStack_260;
  puVar40 = (undefined8 *)((longlong)pauVar63 + lVar59 + -0x48);
  *puVar40 = pauStack_278;
  puVar40[1] = pauStack_270;
  puVar40 = (undefined8 *)((longlong)pauVar63 + lVar59 + -0x58);
  *puVar40 = uStack_288;
  puVar40[1] = pauStack_280;
  puVar40 = (undefined8 *)((longlong)pauVar63 + lVar59 + -0x68);
  *puVar40 = pauVar49;
  puVar40[1] = uStack_290;
  auVar78._8_4_ = uVar17;
  auVar78._0_8_ = (ulonglong)bVar67 & 0xffffffffffffff01;
  auVar78._12_4_ = uVar18;
  plStack_160[2] = plStack_160[2] - ((ulonglong)bVar67 & 0xffffffffffffff01);
  plStack_160[3] = plStack_160[3] - auVar78._8_8_;
LAB_14080a127:
  uStack_150 = 0;
  uStack_158 = 4;
  uStack_f4 = 0;
  pdb_140c2acc0(&uStack_298,lVar34 + -0x60);
  pauStack_358 = pauStack_248;
  pauStack_350 = pauStack_240;
  pauStack_368 = pauStack_258;
  pauStack_360 = pauStack_250;
  pauStack_378 = pauStack_268;
  pauStack_370 = pauStack_260;
  pauStack_388 = pauStack_278;
  pauStack_380 = pauStack_270;
  pauStack_398 = uStack_288;
  pauStack_390 = pauStack_280;
  pauStack_3a8 = uStack_298;
  pauStack_3a0 = (undefined1 (*) [16])uStack_290;
  uStack_150 = 0;
  uStack_158 = 4;
  uStack_f4 = 1;
  in_stack_fffffffffffff918 = (undefined1 (***) [16])pdb_140c2ab90(&pauStack_3a8);
  uStack_298 = (undefined1 (*) [16])CONCAT44(uStack_1a4,uStack_1a8);
  uStack_290 = (code *)CONCAT44(uStack_19c,uStack_1a0);
  uStack_288._0_5_ = CONCAT14((char)pauStack_1b8,uStack_2a4);
  uStack_150 = 0;
  uStack_158 = 4;
  uStack_f4 = 1;
  pauVar49 = pauStack_188;
  pdb_1414299b0(lVar31 + -0x2a8,pauStack_188,pppauStack_198,pfStack_170,uStack_2c8,&ppauStack_1f0,
                in_stack_fffffffffffff918,(ulonglong)pauStack_140 & 0xff,&uStack_298,uStack_2c0);
  uStack_150 = 0;
  uStack_158 = 4;
  uStack_f4 = 1;
  pdb_140c2b060(&pauStack_3a8,*(undefined4 *)(lVar31 + -0x18),*(int *)(lVar31 + -0x50) != 2);
  uStack_150 = 0;
  uStack_158 = 4;
  uStack_f4 = 1;
  pauStack_118 = (undefined1 (*) [16])pdb_140c2abc0(&pauStack_3a8);
  uStack_18c = (undefined4)CONCAT71((int7)((ulonglong)pauStack_118 >> 8),1);
  goto LAB_14080a332;
LAB_140809ddb:
  if (plStack_160[2] == 0) {
    uStack_150 = 0;
    uStack_158 = 4;
    uStack_f4 = 0;
    pdb_142da66e0(plStack_160,1,plStack_2b8,CONCAT71((int7)(uVar39 >> 8),1));
  }
  uStack_150 = 0;
  uStack_158 = 4;
  uStack_f4 = 0;
  pdb_140c2abf0(&uStack_290);
  uStack_298 = pauVar63;
  pauVar64 = (undefined1 (*) [16])*plStack_160;
  uVar39 = plStack_160[1];
  uVar32 = uVar48 & uVar39;
  auVar70 = *(undefined1 (*) [16])(*pauVar64 + uVar32);
  uVar56 = (ushort)(SUB161(auVar70 >> 7,0) & 1) | (ushort)(SUB161(auVar70 >> 0xf,0) & 1) << 1 |
           (ushort)(SUB161(auVar70 >> 0x17,0) & 1) << 2 |
           (ushort)(SUB161(auVar70 >> 0x1f,0) & 1) << 3 |
           (ushort)(SUB161(auVar70 >> 0x27,0) & 1) << 4 |
           (ushort)(SUB161(auVar70 >> 0x2f,0) & 1) << 5 |
           (ushort)(SUB161(auVar70 >> 0x37,0) & 1) << 6 |
           (ushort)(SUB161(auVar70 >> 0x3f,0) & 1) << 7 |
           (ushort)(SUB161(auVar70 >> 0x47,0) & 1) << 8 |
           (ushort)(SUB161(auVar70 >> 0x4f,0) & 1) << 9 |
           (ushort)(SUB161(auVar70 >> 0x57,0) & 1) << 10 |
           (ushort)(SUB161(auVar70 >> 0x5f,0) & 1) << 0xb |
           (ushort)(SUB161(auVar70 >> 0x67,0) & 1) << 0xc |
           (ushort)(SUB161(auVar70 >> 0x6f,0) & 1) << 0xd |
           (ushort)(SUB161(auVar70 >> 0x77,0) & 1) << 0xe | (ushort)(byte)(auVar70[0xf] >> 7) << 0xf
  ;
  uVar29 = (uint)uVar56;
  if (uVar56 == 0) {
    lVar34 = 0x10;
    do {
      uVar32 = uVar32 + lVar34 & uVar39;
      auVar70 = *(undefined1 (*) [16])(*pauVar64 + uVar32);
      lVar34 = lVar34 + 0x10;
      uVar29 = (uint)(ushort)((ushort)(SUB161(auVar70 >> 7,0) & 1) |
                              (ushort)(SUB161(auVar70 >> 0xf,0) & 1) << 1 |
                              (ushort)(SUB161(auVar70 >> 0x17,0) & 1) << 2 |
                              (ushort)(SUB161(auVar70 >> 0x1f,0) & 1) << 3 |
                              (ushort)(SUB161(auVar70 >> 0x27,0) & 1) << 4 |
                              (ushort)(SUB161(auVar70 >> 0x2f,0) & 1) << 5 |
                              (ushort)(SUB161(auVar70 >> 0x37,0) & 1) << 6 |
                              (ushort)(SUB161(auVar70 >> 0x3f,0) & 1) << 7 |
                              (ushort)(SUB161(auVar70 >> 0x47,0) & 1) << 8 |
                              (ushort)(SUB161(auVar70 >> 0x4f,0) & 1) << 9 |
                              (ushort)(SUB161(auVar70 >> 0x57,0) & 1) << 10 |
                              (ushort)(SUB161(auVar70 >> 0x5f,0) & 1) << 0xb |
                              (ushort)(SUB161(auVar70 >> 0x67,0) & 1) << 0xc |
                              (ushort)(SUB161(auVar70 >> 0x6f,0) & 1) << 0xd |
                              (ushort)(SUB161(auVar70 >> 0x77,0) & 1) << 0xe |
                             (ushort)(byte)(auVar70[0xf] >> 7) << 0xf);
    } while (uVar29 == 0);
  }
  uVar45 = 0;
  for (; (uVar29 & 1) == 0; uVar29 = uVar29 >> 1 | 0x80000000) {
    uVar45 = uVar45 + 1;
  }
  uVar32 = uVar45 + uVar32 & uVar39;
  bVar67 = (*pauVar64)[uVar32];
  if (-1 < (char)bVar67) {
    auVar70 = *pauVar64;
    uVar29 = 0;
    for (uVar45 = (uint)(ushort)((ushort)(SUB161(auVar70 >> 7,0) & 1) |
                                 (ushort)(SUB161(auVar70 >> 0xf,0) & 1) << 1 |
                                 (ushort)(SUB161(auVar70 >> 0x17,0) & 1) << 2 |
                                 (ushort)(SUB161(auVar70 >> 0x1f,0) & 1) << 3 |
                                 (ushort)(SUB161(auVar70 >> 0x27,0) & 1) << 4 |
                                 (ushort)(SUB161(auVar70 >> 0x2f,0) & 1) << 5 |
                                 (ushort)(SUB161(auVar70 >> 0x37,0) & 1) << 6 |
                                 (ushort)(SUB161(auVar70 >> 0x3f,0) & 1) << 7 |
                                 (ushort)(SUB161(auVar70 >> 0x47,0) & 1) << 8 |
                                 (ushort)(SUB161(auVar70 >> 0x4f,0) & 1) << 9 |
                                 (ushort)(SUB161(auVar70 >> 0x57,0) & 1) << 10 |
                                 (ushort)(SUB161(auVar70 >> 0x5f,0) & 1) << 0xb |
                                 (ushort)(SUB161(auVar70 >> 0x67,0) & 1) << 0xc |
                                 (ushort)(SUB161(auVar70 >> 0x6f,0) & 1) << 0xd |
                                 (ushort)(SUB161(auVar70 >> 0x77,0) & 1) << 0xe |
                                (ushort)(byte)(auVar70[0xf] >> 7) << 0xf); (uVar45 & 1) == 0;
        uVar45 = uVar45 >> 1 | 0x80000000) {
      uVar29 = uVar29 + 1;
    }
    uVar32 = (ulonglong)uVar29;
    bVar67 = (*pauVar64)[uVar32];
  }
  bVar28 = bVar28 >> 1;
  (*pauVar64)[uVar32] = bVar28;
  pauVar64[1][uVar32 - 0x10 & uVar39] = bVar28;
  lVar59 = uVar32 * -0x68;
  lVar34 = (longlong)pauVar64 + lVar59;
  pauVar49 = (undefined1 (*) [16])((ulonglong)bVar67 & 0xffffffffffffff01);
  *(undefined1 (**) [16])((longlong)pauVar64 + lVar59 + -8) = pauStack_238;
  puVar40 = (undefined8 *)((longlong)pauVar64 + lVar59 + -0x18);
  *puVar40 = pauStack_248;
  puVar40[1] = pauStack_240;
  puVar40 = (undefined8 *)((longlong)pauVar64 + lVar59 + -0x28);
  *puVar40 = pauStack_258;
  puVar40[1] = pauStack_250;
  puVar40 = (undefined8 *)((longlong)pauVar64 + lVar59 + -0x38);
  *puVar40 = pauStack_268;
  puVar40[1] = pauStack_260;
  puVar40 = (undefined8 *)((longlong)pauVar64 + lVar59 + -0x48);
  *puVar40 = pauStack_278;
  puVar40[1] = pauStack_270;
  puVar40 = (undefined8 *)((longlong)pauVar64 + lVar59 + -0x58);
  *puVar40 = uStack_288;
  puVar40[1] = pauStack_280;
  puVar40 = (undefined8 *)((longlong)pauVar64 + lVar59 + -0x68);
  *puVar40 = pauVar63;
  puVar40[1] = uStack_290;
  auVar76._8_4_ = uVar17;
  auVar76._0_8_ = pauVar49;
  auVar76._12_4_ = uVar18;
  plStack_160[2] = plStack_160[2] - (longlong)pauVar49;
  plStack_160[3] = plStack_160[3] - auVar76._8_8_;
LAB_140809eff:
  uStack_150 = 0;
  uStack_158 = 4;
  uStack_f4 = 0;
  pauStack_118 = (undefined1 (*) [16])pdb_140c2abc0(lVar34 + -0x60);
  uStack_18c = 0;
LAB_14080a332:
  pppauVar51 = (undefined1 (***) [16])(uVar48 >> 0x39);
  pauStack_460 = (undefined1 (*) [16])0x0;
  uStack_458 = 4;
  uStack_450 = 0;
  pauStack_100 = (undefined1 (*) [16])0x0;
  pauStack_108 = (undefined1 (*) [16])0x4;
  uStack_f1 = 1;
  cVar26 = pdb_1408ff990(pcVar38);
  if (cVar26 == '\0') {
    pauStack_100 = (undefined1 (*) [16])0x0;
    pauStack_108 = (undefined1 (*) [16])0x4;
    uStack_f1 = 1;
    bVar28 = pdb_1408ff980(lVar31 + -9);
    if ((pauStack_148 != (undefined1 (*) [16])0x0 & bVar28) != 0) goto LAB_14080a3c6;
  }
  else if (pauStack_148 != (undefined1 (*) [16])0x0) {
LAB_14080a3c6:
    pauStack_100 = (undefined1 (*) [16])0x0;
    pauStack_108 = (undefined1 (*) [16])0x4;
    uStack_f1 = 1;
    pauStack_4c0 = (undefined1 (*) [16])pdb_140c47770(&uStack_668);
    pauStack_100 = (undefined1 (*) [16])0x0;
    pauStack_108 = (undefined1 (*) [16])0x4;
    uStack_f1 = 1;
    pauStack_4b8 = pauVar49;
    puVar40 = (undefined8 *)pdb_1413e4400(uStack_1c8,&UNK_1433056b0);
    if (puVar40 == (undefined8 *)0x0) goto LAB_14080c101;
    pauStack_100 = (undefined1 (*) [16])0x0;
    pauStack_108 = (undefined1 (*) [16])0x4;
    uStack_f1 = 1;
    lVar34 = (**(code **)(puVar40[1] + 0x18))(*puVar40);
    if (lVar34 == 0) goto LAB_14080c101;
    pauVar49 = *(undefined1 (**) [16])(lVar31 + -0x128);
    if (pauVar49 == (undefined1 (*) [16])0x0) {
      pauStack_100 = (undefined1 (*) [16])0x0;
      pauStack_108 = (undefined1 (*) [16])0x4;
      uStack_f1 = 1;
                    /* WARNING: Subroutine does not return */
      pdb_142dc8150(&UNK_143305b70);
    }
    LOCK();
    bVar66 = pauVar49[1][8] == '\0';
    if (bVar66) {
      pauVar49[1][8] = '\x01';
    }
    UNLOCK();
    if (!bVar66) {
      pauStack_100 = (undefined1 (*) [16])0x0;
      pauStack_108 = (undefined1 (*) [16])0x4;
      uStack_f1 = 1;
      pdb_142dbd1a0(pauVar49[1] + 8);
    }
    pauStack_100 = (undefined1 (*) [16])0x0;
    pauStack_108 = (undefined1 (*) [16])0x4;
    uStack_f1 = 1;
    pdb_140e9a150(pauVar49[1] + 8);
    if ((*(longlong *)pauVar49[1] == 0) ||
       (piVar46 = (int *)(*(longlong *)(*pauVar49 + 8) + *(longlong *)pauVar49[1] * 4 + -4),
       piVar46 == (int *)0x0)) {
      pauVar63 = *(undefined1 (**) [16])(lVar34 + 0x10);
      if (pauVar63 == (undefined1 (*) [16])0x0) {
        pauStack_100 = (undefined1 (*) [16])0x0;
        pauStack_108 = (undefined1 (*) [16])0x4;
        uStack_f1 = 1;
                    /* WARNING: Subroutine does not return */
        pdb_142dc8150(&UNK_143305b88);
      }
      iVar57 = (int)pauVar63 + -1;
    }
    else {
      iVar57 = *piVar46;
      pauVar63 = *(undefined1 (**) [16])(lVar34 + 0x10);
    }
    uStack_298 = *(undefined1 (**) [16])(lVar34 + 8);
    uStack_288 = *(undefined1 (**) [16])(lVar34 + 0x18);
    pauStack_280 = *(undefined1 (**) [16])(lVar34 + 0x20);
    pauStack_270 = *(undefined1 (**) [16])(lVar34 + 0x28);
    pauStack_268 = *(undefined1 (**) [16])(lVar34 + 0x30);
    pauStack_260 = (undefined1 (*) [16])(lVar34 + 0x78);
    pauStack_258 = (undefined1 (*) [16])(lVar34 + 0x58);
    pauStack_250 = *(undefined1 (**) [16])(lVar34 + 0x38);
    pauStack_248 = *(undefined1 (**) [16])(lVar34 + 0x40);
    pauStack_240 = (undefined1 (*) [16])CONCAT44(pauStack_240._4_4_,iVar57);
    uStack_290 = (code *)pauVar63;
    pauStack_278 = pauVar49;
    pdb_1413f7bd0(&uStack_298);
    pppauVar51 = (undefined1 (***) [16])(pauStack_278[1] + 8);
    pauStack_100 = (undefined1 (*) [16])0x0;
    pauStack_108 = (undefined1 (*) [16])0x4;
    uStack_f1 = 1;
    pdb_140e9a350();
    LOCK();
    cVar26 = *(char *)pppauVar51;
    if (cVar26 == '\x01') {
      *(char *)pppauVar51 = '\0';
    }
    UNLOCK();
    if (cVar26 != '\x01') {
      pauStack_100 = (undefined1 (*) [16])0x0;
      pauStack_108 = (undefined1 (*) [16])0x4;
      uStack_f1 = 1;
      pdb_142dbcef0(pppauVar51,0);
    }
    pauStack_100 = (undefined1 (*) [16])0x0;
    pauStack_108 = (undefined1 (*) [16])0x4;
    uStack_f1 = 1;
    cVar26 = pdb_1408ff990(pcVar38);
    if (cVar26 != '\0') {
      pauStack_100 = (undefined1 (*) [16])0x0;
      pauStack_108 = (undefined1 (*) [16])0x4;
      uStack_f1 = 1;
      in_stack_fffffffffffff948 = &pauStack_460;
      pdb_14142e7b0(lVar31 + -0x2a8,pauStack_130,uStack_2e0,&pauStack_4c0,uStack_1c8,
                    *(undefined8 *)(lVar31 + -0x1b0),*(undefined8 *)(lVar31 + -0x1a8),pauStack_188,
                    pppauStack_198,uStack_2c0,pauStack_148,pauStack_118,in_stack_fffffffffffff948);
    }
    in_stack_fffffffffffff918 = *(undefined1 (****) [16])(lVar31 + -0x1b0);
    pauStack_100 = (undefined1 (*) [16])0x0;
    pauStack_108 = (undefined1 (*) [16])0x4;
    uStack_f1 = 1;
    pdb_141436b60(lVar31 + -0x2a8,pauStack_130,uStack_2e0,&pauStack_4c0,uStack_2e8,uStack_1c8,
                  in_stack_fffffffffffff918,*(undefined8 *)(lVar31 + -0x1a8),pauStack_148,
                  pauStack_118);
    pauStack_100 = (undefined1 (*) [16])0x0;
    pauStack_108 = (undefined1 (*) [16])0x4;
    uStack_f1 = 1;
    cVar26 = pdb_140b77b60(pauStack_148);
    if (cVar26 != '\0') {
      pauStack_100 = (undefined1 (*) [16])0x0;
      pauStack_108 = (undefined1 (*) [16])0x4;
      uStack_f1 = 1;
      pdb_14142d650(lVar31 + -0x2a8,pauStack_130,uStack_1c8,uStack_2c0,pauStack_148);
    }
  }
  pauStack_100 = (undefined1 (*) [16])0x0;
  pauStack_108 = (undefined1 (*) [16])0x4;
  uStack_f1 = 1;
  cVar26 = pdb_140901380(lVar31 + -9);
  if ((cVar26 != '\0') && (*pcVar38 == '\x01')) {
    in_stack_fffffffffffff918 = *(undefined1 (****) [16])(lVar31 + -0x1a8);
    pauStack_100 = (undefined1 (*) [16])0x0;
    pauStack_108 = (undefined1 (*) [16])0x4;
    uStack_f1 = 1;
    pdb_1414382e0(lVar31 + -0x2a8,&ppauStack_1f0,&pauStack_528,pauStack_188,pppauStack_198,
                  *(undefined8 *)(lVar31 + -0x1b0),in_stack_fffffffffffff918,pauStack_118);
  }
  pauStack_100 = (undefined1 (*) [16])0x0;
  pauStack_108 = (undefined1 (*) [16])0x4;
  uStack_f1 = 1;
  cVar26 = pdb_1408ff990(pcVar38);
  if (cVar26 == '\0') {
    if (pauStack_148 == (undefined1 (*) [16])0x0) {
      pppauVar51 = (undefined1 (***) [16])0x0;
    }
    else {
      pauStack_100 = (undefined1 (*) [16])0x0;
      pauStack_108 = (undefined1 (*) [16])0x4;
      uStack_f1 = 1;
      uVar29 = pdb_140b77b50();
      pppauVar51 = (undefined1 (***) [16])(ulonglong)uVar29;
    }
    pauStack_100 = (undefined1 (*) [16])0x0;
    pauStack_108 = (undefined1 (*) [16])0x4;
    uStack_f1 = 1;
    cVar26 = pdb_1408ff980(lVar31 + -9);
    uVar84 = (undefined4)((ulonglong)in_stack_fffffffffffff918 >> 0x20);
    if (((cVar26 != '\0') && (*(uint *)(lVar31 + -0x50) < 2)) && (0.0 < *(float *)(lVar31 + -0x14)))
    {
      pauStack_100 = (undefined1 (*) [16])0x0;
      pauStack_108 = (undefined1 (*) [16])0x4;
      uStack_f1 = 1;
      fVar68 = (float)pdb_14092ff30(lVar31 + -0x2a8,pppauVar51);
      pauStack_100 = (undefined1 (*) [16])0x0;
      pauStack_108 = (undefined1 (*) [16])0x4;
      uStack_f1 = 1;
      in_stack_fffffffffffff918 = (undefined1 (***) [16])CONCAT44(uVar84,fVar68 + _DAT_142e37ad4);
      pdb_14142c100(lVar31 + -0x2a8,pauStack_188,pppauStack_198,*(undefined8 *)(lVar31 + -0x1b0),
                    *(undefined8 *)(lVar31 + -0x1a8),&ppauStack_1f0,in_stack_fffffffffffff918,
                    pauStack_118);
    }
  }
  if (((byte)pauStack_140 | 2) == 3) {
    pauStack_100 = (undefined1 (*) [16])0x0;
    pauStack_108 = (undefined1 (*) [16])0x4;
    uStack_f1 = 1;
    pdb_141439f00(lVar31 + -0x2a8,&ppauStack_1f0,uStack_1c8,uStack_2e8,uStack_2c0,pauStack_118);
  }
  pauStack_100 = (undefined1 (*) [16])0x0;
  pauStack_108 = (undefined1 (*) [16])0x4;
  uStack_f1 = 1;
  cVar26 = pdb_1408ff980(lVar31 + -9);
  uVar84 = (undefined4)((ulonglong)in_stack_fffffffffffff948 >> 0x20);
  if (cVar26 == '\0') {
    pauStack_100 = (undefined1 (*) [16])0x0;
    pauStack_108 = (undefined1 (*) [16])0x4;
    uStack_f1 = 1;
    uVar29 = pdb_1409012c0(*(undefined4 *)(lVar31 + -0x34));
    pppauVar51 = (undefined1 (***) [16])(ulonglong)uVar29;
    uVar65 = *(undefined8 *)(lVar31 + -0x1b0);
    uVar10 = *(undefined8 *)(lVar31 + -0x1a8);
    fVar68 = 0.0;
    if ((char)pauStack_1b8 == '\x02') {
      pauStack_100 = (undefined1 (*) [16])0x0;
      pauStack_108 = (undefined1 (*) [16])0x4;
      uStack_f1 = 1;
      cVar26 = pdb_140901380(lVar31 + -0xb);
      fVar68 = fVar24;
      if (cVar26 != '\0') {
        fVar69 = (*(float *)(lVar31 + -0x18) + fVar25) / _DAT_142e3c634;
        fVar68 = 0.0;
        if (0.0 <= fVar69) {
          fVar68 = fVar69;
        }
        fVar69 = fVar15;
        if (fVar68 <= fVar15) {
          fVar69 = fVar68;
        }
        fVar68 = (_DAT_142e3788c - (fVar69 + fVar69)) * fVar69 * fVar69;
      }
    }
    uVar85 = *(undefined4 *)(lVar31 + -0x30);
    uStack_298 = (undefined1 (*) [16])CONCAT44(uStack_1a4,uStack_1a8);
    uStack_290 = (code *)CONCAT44(uStack_19c,uStack_1a0);
    uStack_288._0_5_ = CONCAT14((char)pauStack_1b8,uStack_2a4);
    pauStack_100 = (undefined1 (*) [16])0x0;
    pauStack_108 = (undefined1 (*) [16])0x4;
    uStack_f1 = 1;
    pcVar38 = (char *)pdb_14092fa10(lVar31 + -0x2a8);
    uVar86 = 0;
    if ((pcVar38 != (char *)0x0) && (uVar86 = 0, *pcVar38 == '\0')) {
      pauStack_100 = (undefined1 (*) [16])0x0;
      pauStack_108 = (undefined1 (*) [16])0x4;
      uStack_f1 = 1;
      fVar69 = (float)pdb_140de8220();
      fVar88 = 0.0;
      if (0.0 <= fVar69) {
        fVar88 = fVar69;
      }
      fVar69 = fVar15;
      if (fVar88 <= fVar15) {
        fVar69 = fVar88;
      }
      fVar88 = (fVar15 - fVar69) * _DAT_143007994;
      uVar86 = 1;
    }
    pauStack_100 = (undefined1 (*) [16])0x0;
    pauStack_108 = (undefined1 (*) [16])0x4;
    uStack_f1 = 1;
    pcVar38 = (char *)pdb_14092fa10();
    uVar87 = 0;
    fVar69 = extraout_XMM0_Da;
    if ((pcVar38 != (char *)0x0) && (uVar87 = 0, *pcVar38 == '\0')) {
      pauStack_100 = (undefined1 (*) [16])0x0;
      pauStack_108 = (undefined1 (*) [16])0x4;
      uStack_f1 = 1;
      fVar69 = (float)pdb_140de8220();
      fVar13 = 0.0;
      if (0.0 <= fVar69) {
        fVar13 = fVar69;
      }
      fVar69 = fVar15;
      if (fVar13 <= fVar15) {
        fVar69 = fVar13;
      }
      fVar69 = (fVar15 - fVar69) * _DAT_143007998 + fVar69;
      uVar87 = 1;
    }
    pauStack_100 = (undefined1 (*) [16])0x0;
    pauStack_108 = (undefined1 (*) [16])0x4;
    uStack_f1 = 1;
    in_stack_fffffffffffff948 = (undefined1 (**) [16])CONCAT44(uVar84,fVar68);
    in_stack_fffffffffffff918 = pppauStack_198;
    pdb_141446690(&lStack_408,&pauStack_528,uVar29,pfStack_170,uStack_2c8,pauStack_188,
                  pppauStack_198,uVar65,uVar10,(ulonglong)pauStack_140 & 0xff,lStack_530,
                  pauStack_118,in_stack_fffffffffffff948,&ppauStack_1f0,uVar85,&uStack_298,uVar86,
                  fVar88,uVar87,fVar69,*(undefined4 *)(lVar31 + -0x20),0);
  }
  pauStack_100 = (undefined1 (*) [16])0x0;
  pauStack_108 = (undefined1 (*) [16])0x4;
  uStack_f1 = 1;
  cVar26 = pdb_1408ff980(lVar31 + -9);
  if (cVar26 == '\0') {
    pauStack_140 = (undefined1 (*) [16])0x4;
    pauStack_118 = (undefined1 (*) [16])0x0;
    pauVar63 = (undefined1 (*) [16])0x0;
    pauVar50 = (undefined1 (*) [16])0x0;
  }
  else {
    if (plStack_1d0[3] == 0) {
LAB_14080ae43:
      lVar34 = 0;
    }
    else {
      uVar39 = pdb_1400af0a0(plStack_538,&pauStack_130);
      bVar28 = (byte)(uVar39 >> 0x39);
      auVar70 = ZEXT216(CONCAT11(bVar28,bVar28));
      auVar70 = pshuflw(auVar70,auVar70,0);
      lVar34 = 0;
      while( true ) {
        uVar39 = uVar39 & plStack_1d0[1];
        pcVar38 = (char *)(*plStack_1d0 + uVar39);
        auVar83[0] = -(*pcVar38 == auVar70[0]);
        auVar83[1] = -(pcVar38[1] == auVar70[1]);
        auVar83[2] = -(pcVar38[2] == auVar70[2]);
        auVar83[3] = -(pcVar38[3] == auVar70[3]);
        auVar83[4] = -(pcVar38[4] == auVar70[4]);
        auVar83[5] = -(pcVar38[5] == auVar70[5]);
        auVar83[6] = -(pcVar38[6] == auVar70[6]);
        auVar83[7] = -(pcVar38[7] == auVar70[7]);
        auVar83[8] = -(pcVar38[8] == auVar70[0]);
        auVar83[9] = -(pcVar38[9] == auVar70[1]);
        auVar83[10] = -(pcVar38[10] == auVar70[2]);
        auVar83[0xb] = -(pcVar38[0xb] == auVar70[3]);
        auVar83[0xc] = -(pcVar38[0xc] == auVar70[4]);
        auVar83[0xd] = -(pcVar38[0xd] == auVar70[5]);
        auVar83[0xe] = -(pcVar38[0xe] == auVar70[6]);
        auVar83[0xf] = -(pcVar38[0xf] == auVar70[7]);
        uVar56 = (ushort)(SUB161(auVar83 >> 7,0) & 1) | (ushort)(SUB161(auVar83 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar83 >> 0x17,0) & 1) << 2 |
                 (ushort)(SUB161(auVar83 >> 0x1f,0) & 1) << 3 |
                 (ushort)(SUB161(auVar83 >> 0x27,0) & 1) << 4 |
                 (ushort)(SUB161(auVar83 >> 0x2f,0) & 1) << 5 |
                 (ushort)(SUB161(auVar83 >> 0x37,0) & 1) << 6 |
                 (ushort)(SUB161(auVar83 >> 0x3f,0) & 1) << 7 |
                 (ushort)(SUB161(auVar83 >> 0x47,0) & 1) << 8 |
                 (ushort)(SUB161(auVar83 >> 0x4f,0) & 1) << 9 |
                 (ushort)(SUB161(auVar83 >> 0x57,0) & 1) << 10 |
                 (ushort)(SUB161(auVar83 >> 0x5f,0) & 1) << 0xb |
                 (ushort)(SUB161(auVar83 >> 0x67,0) & 1) << 0xc |
                 (ushort)(SUB161(auVar83 >> 0x6f,0) & 1) << 0xd |
                 (ushort)(SUB161(auVar83 >> 0x77,0) & 1) << 0xe | (ushort)(auVar83[0xf] >> 7) << 0xf
        ;
        uVar29 = (uint)uVar56;
        if (uVar56 != 0) break;
LAB_14080adf2:
        auVar79[0] = -(*pcVar38 == -1);
        auVar79[1] = -(pcVar38[1] == -1);
        auVar79[2] = -(pcVar38[2] == -1);
        auVar79[3] = -(pcVar38[3] == -1);
        auVar79[4] = -(pcVar38[4] == -1);
        auVar79[5] = -(pcVar38[5] == -1);
        auVar79[6] = -(pcVar38[6] == -1);
        auVar79[7] = -(pcVar38[7] == -1);
        auVar79[8] = -(pcVar38[8] == -1);
        auVar79[9] = -(pcVar38[9] == -1);
        auVar79[10] = -(pcVar38[10] == -1);
        auVar79[0xb] = -(pcVar38[0xb] == -1);
        auVar79[0xc] = -(pcVar38[0xc] == -1);
        auVar79[0xd] = -(pcVar38[0xd] == -1);
        auVar79[0xe] = -(pcVar38[0xe] == -1);
        auVar79[0xf] = -(pcVar38[0xf] == -1);
        if ((((((((((((((((SUB161(auVar79 >> 7,0) & 1) != 0 || (SUB161(auVar79 >> 0xf,0) & 1) != 0)
                        || (SUB161(auVar79 >> 0x17,0) & 1) != 0) ||
                       (SUB161(auVar79 >> 0x1f,0) & 1) != 0) || (SUB161(auVar79 >> 0x27,0) & 1) != 0
                      ) || (SUB161(auVar79 >> 0x2f,0) & 1) != 0) ||
                    (SUB161(auVar79 >> 0x37,0) & 1) != 0) || (SUB161(auVar79 >> 0x3f,0) & 1) != 0)
                  || (SUB161(auVar79 >> 0x47,0) & 1) != 0) || (SUB161(auVar79 >> 0x4f,0) & 1) != 0)
                || (SUB161(auVar79 >> 0x57,0) & 1) != 0) || (SUB161(auVar79 >> 0x5f,0) & 1) != 0) ||
              (SUB161(auVar79 >> 0x67,0) & 1) != 0) || (SUB161(auVar79 >> 0x6f,0) & 1) != 0) ||
            (SUB161(auVar79 >> 0x77,0) & 1) != 0) || auVar79[0xf] < '\0') goto LAB_14080ae43;
        uVar39 = uVar39 + lVar34 + 0x10;
        lVar34 = lVar34 + 0x10;
      }
      while( true ) {
        uVar45 = 0;
        for (uVar12 = uVar29; (uVar12 & 1) == 0; uVar12 = uVar12 >> 1 | 0x80000000) {
          uVar45 = uVar45 + 1;
        }
        uVar48 = uVar45 + uVar39 & plStack_1d0[1];
        pppauVar51 = (undefined1 (***) [16])(uVar48 * 0x20);
        lVar59 = *plStack_1d0 + uVar48 * -0x20;
        if (pauStack_130 == *(undefined1 (**) [16])(lVar59 + -0x20)) break;
        uVar56 = (ushort)(uVar29 - 1) & (ushort)uVar29;
        uVar29 = CONCAT22((short)(uVar29 - 1 >> 0x10),uVar56);
        if (uVar56 == 0) goto LAB_14080adf2;
      }
      lVar34 = *(longlong *)(lVar59 + -0x10);
      pppauVar51 = *(undefined1 (****) [16])(lVar59 + -8);
    }
    if (lVar34 == 0) {
      lVar34 = 8;
      pppauVar51 = (undefined1 (***) [16])0x0;
    }
    pauStack_100 = (undefined1 (*) [16])0x0;
    pauStack_108 = (undefined1 (*) [16])0x4;
    uStack_f1 = 1;
    uVar65 = pdb_140a69d30(uStack_550,pauStack_130);
    if ((((byte)uStack_1c0 & (byte)uStack_490) == 1) && (*(uint *)(lVar31 + -0x50) < 2)) {
      pauStack_100 = (undefined1 (*) [16])0x0;
      pauStack_108 = (undefined1 (*) [16])0x4;
      uStack_f1 = 1;
      pdb_14092f8d0(&uStack_298,lVar31 + -0x2a8);
      if ((int)uStack_298 == 0) goto LAB_14080aef8;
      pauStack_4b8 = pauStack_488;
      pauStack_4b0 = pauStack_480;
      pauStack_4c0 = (undefined1 (*) [16])0x1;
    }
    else {
LAB_14080aef8:
      pauStack_4c0 = (undefined1 (*) [16])0x0;
    }
    ppauStack_5e0 = &pauStack_420;
    pauStack_478 = (undefined1 (*) [16])&pauStack_438;
    ppauStack_608 = &pauStack_460;
    pauStack_100 = (undefined1 (*) [16])0x0;
    pauStack_108 = (undefined1 (*) [16])0x4;
    uStack_f1 = 1;
    in_stack_fffffffffffff948 = &pauStack_478;
    pdb_14144a4c0(&uStack_298,pauStack_130,lVar31 + -0x2a8,pauStack_118,uVar65,lVar34,pppauVar51,
                  uStack_2e8,uStack_548,pauStack_148,&pauStack_4c0,&ppauStack_5e0,
                  in_stack_fffffffffffff948,&ppauStack_608);
    pauVar49 = pauStack_280;
    pauVar63 = uStack_288;
    pauStack_140 = (undefined1 (*) [16])uStack_290;
    pauStack_118 = uStack_298;
    if (pauStack_148 == (undefined1 (*) [16])0x0) {
      uVar39 = 0;
      in_stack_fffffffffffff918 = pppauVar51;
    }
    else {
      pauStack_100 = uStack_298;
      pauStack_108 = (undefined1 (*) [16])uStack_290;
      uStack_f1 = 1;
      uVar29 = pdb_140b77b50();
      uVar39 = (ulonglong)uVar29;
      in_stack_fffffffffffff918 = pppauVar51;
    }
    pauStack_100 = pauStack_118;
    pauStack_108 = pauStack_140;
    uStack_f1 = 1;
    cVar26 = pdb_1408ff980(lVar31 + -9);
    pauVar50 = (undefined1 (*) [16])0x1;
    pauStack_1b8 = pauVar49;
    if (((cVar26 != '\0') && (*(uint *)(lVar31 + -0x50) < 2)) && (0.0 < *(float *)(lVar31 + -0x14)))
    {
      pauStack_100 = pauStack_118;
      pauStack_108 = pauStack_140;
      uStack_f1 = 1;
      pdb_14092ff30(lVar31 + -0x2a8,uVar39);
      pauStack_100 = pauStack_118;
      pauStack_108 = pauStack_140;
      uStack_f1 = 1;
      pauVar49 = (undefined1 (*) [16])pdb_140947f90(pauStack_130);
      pauStack_100 = pauStack_118;
      pauStack_108 = pauStack_140;
      uStack_f1 = 1;
      lVar34 = pdb_140c41030(uStack_2e0,pauVar49,uVar39);
      if (lVar34 != 0) {
        pauStack_100 = pauStack_118;
        pauStack_108 = pauStack_140;
        uStack_f1 = 1;
        uStack_298 = (undefined1 (*) [16])pdb_140c47770(&uStack_668);
        pauStack_100 = pauStack_118;
        pauStack_108 = pauStack_140;
        uStack_f1 = 1;
        in_stack_fffffffffffff918 = &ppauStack_1f0;
        uStack_290 = (code *)pauVar49;
        pdb_1414542c0(pauStack_130,*(undefined4 *)(lVar31 + -0x34),lStack_3b0);
      }
    }
  }
  pauVar33 = pauStack_130;
  uVar10 = uStack_450;
  pauStack_148 = pauStack_460;
  uStack_1c0 = uStack_458;
  *puStack_558 = uStack_324;
  lVar31 = *(longlong *)(lStack_2f0 + 0x30);
  uVar65 = *(undefined8 *)(lStack_2f0 + 0x40);
  if (lVar31 == *(longlong *)(lStack_2f0 + 0x20)) {
    pdb_142d7ede0(lStack_540);
  }
  pauVar64 = pauStack_118;
  pppauVar51 = pppauStack_198;
  pauVar49 = pauStack_1b8;
  lVar34 = lStack_3b0;
  lVar59 = *(longlong *)(lStack_2f0 + 0x28);
  *(undefined1 (**) [16])(lVar59 + lVar31 * 0x28) = pauStack_148;
  *(undefined8 *)(lVar59 + 8 + lVar31 * 0x28) = uStack_1c0;
  *(undefined8 *)(lVar59 + 0x10 + lVar31 * 0x28) = uVar10;
  *(undefined1 (**) [16])(lVar59 + 0x18 + lVar31 * 0x28) = pauVar33;
  *(undefined8 *)(lVar59 + 0x20 + lVar31 * 0x28) = uVar65;
  *(longlong *)(lStack_2f0 + 0x30) = lVar31 + 1;
  *(longlong *)(lStack_2f0 + 0x40) = *(longlong *)(lStack_2f0 + 0x40) + 1;
  uVar87 = _UNK_142e36f4c;
  uVar86 = _UNK_142e36f48;
  uVar85 = _UNK_142e36f44;
  uVar84 = _DAT_142e36f40;
  if ((char)uStack_18c != '\0') {
    if (pauStack_3a8 == (undefined1 (*) [16])0x0) {
      pauVar33 = pauStack_388;
      pauVar14 = pauStack_380;
      if (pauStack_3a0 != (undefined1 (*) [16])0x0) {
        pub_1406abac0((byte *)pauStack_398,(longlong)pauStack_3a0 * 0x14,4);
        pauVar33 = pauStack_388;
        pauVar14 = pauStack_380;
      }
    }
    else {
      pauVar33 = pauStack_380;
      pauVar14 = pauStack_378;
      if (pauStack_3a0 != (undefined1 (*) [16])0x0) {
        pub_1406abac0((byte *)pauStack_398,(longlong)pauStack_3a0 * 0x14,4);
        pauVar33 = pauStack_380;
        pauVar14 = pauStack_378;
      }
    }
    if (pauVar33 != (undefined1 (*) [16])0x0) {
      pub_1406abac0((byte *)pauVar14,(longlong)pauVar33 * 0x14,4);
    }
  }
  if (pauStack_528 != (undefined1 (*) [16])0x0) {
    pub_1406abac0((byte *)pauStack_520,(longlong)pauStack_528 << 3,4);
  }
  if (pauStack_510 != (undefined1 (*) [16])0x0) {
    pub_1406abac0((byte *)pauStack_508,(longlong)pauStack_510 << 2,4);
  }
  if (uStack_2d0 != 0) {
    pub_1406abac0((byte *)pfStack_170,uStack_2d0 << 2,4);
  }
  pauVar33 = pauStack_140;
  if (pppauVar51 != (undefined1 (***) [16])0x0) {
    pub_1406abac0((byte *)pauStack_188,(longlong)pppauVar51 << 2,4);
    pauVar33 = pauStack_140;
  }
LAB_14080b3c7:
  pauStack_278 = pauStack_410;
  uStack_288 = pauStack_420;
  pauStack_280 = pauStack_418;
  pauStack_260 = pauStack_428;
  pauStack_270 = pauStack_438;
  pauStack_268 = pauStack_430;
  *puStack_5d8 = uStack_33c;
  pauStack_238 = *(undefined1 (**) [16])(lStack_2a0 + 0x40);
  pauStack_240 = pauStack_130;
  lVar31 = *(longlong *)(lStack_2a0 + 0x30);
  uStack_298 = pauVar50;
  uStack_290 = (code *)pauVar49;
  pauStack_258 = pauVar64;
  pauStack_250 = pauVar33;
  pauStack_248 = pauVar63;
  pauStack_118 = pauVar64;
  if (lVar31 == *(longlong *)(lStack_2a0 + 0x20)) {
    pauStack_140 = pauVar33;
    pdb_142d8d8d0(lStack_598);
    pauVar33 = pauStack_140;
  }
  pauVar63 = pauStack_118;
  lVar59 = *(longlong *)(lStack_2a0 + 0x28);
  lVar44 = lVar31 * 0x68;
  *(undefined1 (**) [16])(lVar59 + 0x60 + lVar44) = pauStack_238;
  puVar40 = (undefined8 *)(lVar59 + 0x50 + lVar44);
  *puVar40 = pauStack_248;
  puVar40[1] = pauStack_240;
  puVar40 = (undefined8 *)(lVar59 + 0x40 + lVar44);
  *puVar40 = pauStack_258;
  puVar40[1] = pauStack_250;
  puVar40 = (undefined8 *)(lVar59 + 0x30 + lVar44);
  *puVar40 = pauStack_268;
  puVar40[1] = pauStack_260;
  puVar40 = (undefined8 *)(lVar59 + 0x20 + lVar44);
  *puVar40 = pauStack_278;
  puVar40[1] = pauStack_270;
  puVar40 = (undefined8 *)(lVar59 + 0x10 + lVar44);
  *puVar40 = uStack_288;
  puVar40[1] = pauStack_280;
  *(undefined8 *)(lVar59 + lVar44) = uStack_298;
  ((undefined8 *)(lVar59 + lVar44))[1] = uStack_290;
  *(longlong *)(lStack_2a0 + 0x30) = lVar31 + 1;
  *(longlong *)(lStack_2a0 + 0x40) = *(longlong *)(lStack_2a0 + 0x40) + 1;
  ppauStack_608 = param_7;
  ppauStack_600 = &pauStack_130;
  uStack_5f0 = uStack_5d0;
  uStack_5e8 = param_11;
  uStack_f2 = 0;
  uStack_f3 = 1;
  lStack_5f8 = lVar34;
  pauStack_128 = pauVar33;
  pauStack_120 = pauStack_118;
  uVar39 = pdb_140b55260(uStack_3e0,pauStack_130);
  pauVar64 = pauStack_118;
  if ((uVar39 & 0xffffffff) == 0) {
    pauStack_528 = (undefined1 (*) [16])0x0;
    pauStack_520 = (undefined1 (*) [16])0x4;
    pauStack_518 = (undefined1 (*) [16])0x0;
    pauStack_510 = (undefined1 (*) [16])0x0;
    pauStack_508 = (undefined1 (*) [16])0x4;
    pauStack_500 = (undefined1 (*) [16])0x0;
    pauStack_4f8 = (undefined1 (*) [16])0x0;
    pauStack_4f0 = (undefined1 (*) [16])0x4;
    pauStack_4e8 = (undefined1 (*) [16])0x0;
    pauStack_4e0 = (undefined1 (*) [16])0x0;
    pauStack_4d8 = (undefined1 (*) [16])0x4;
    pauStack_4d0 = (undefined1 (*) [16])0x0;
    uStack_4c8 = 0;
    uStack_f6 = 1;
    pauStack_140 = pauVar33;
    pdb_140a0dff0(&pauStack_528,lVar34);
    pauVar64 = pauStack_3c8;
    uStack_f6 = 1;
    pdb_14080dcb0(&ppauStack_608,&pauStack_528);
    uStack_f6 = 1;
    puVar40 = (undefined8 *)pdb_1413e4400(uStack_1c8,&UNK_1433056c0);
    if (puVar40 == (undefined8 *)0x0) goto LAB_14080bfd9;
    uStack_f6 = 1;
    pauVar50 = (undefined1 (*) [16])(**(code **)(puVar40[1] + 0x18))(*puVar40);
    if (pauVar50 == (undefined1 (*) [16])0x0) goto LAB_14080bfd9;
    uStack_348 = CONCAT71(uStack_4c7,uStack_4c8);
    pauStack_358 = pauStack_4d8;
    pauStack_350 = pauStack_4d0;
    pauStack_368 = pauStack_4e8;
    pauStack_360 = pauStack_4e0;
    pauStack_378 = pauStack_4f8;
    pauStack_370 = pauStack_4f0;
    pauStack_388 = pauStack_508;
    pauStack_380 = pauStack_500;
    pauStack_398 = pauStack_518;
    pauStack_390 = pauStack_510;
    pauStack_3a8 = pauStack_528;
    pauStack_3a0 = pauStack_520;
    pauStack_468 = pauStack_310;
    pauStack_478 = pauStack_320;
    pauStack_470 = pauStack_318;
    pdb_14007ee60();
    pbVar41 = pub_1406abab0(0x20,8);
    if (pbVar41 == (byte *)0x0) goto LAB_14080bd6c;
    pbVar41[0] = 0;
    pbVar41[1] = 0;
    pbVar41[2] = 0;
    pbVar41[3] = 0;
    pbVar41[4] = 0;
    pbVar41[5] = 0;
    pbVar41[6] = 0;
    pbVar41[7] = 0;
    pbVar41[8] = 4;
    pbVar41[9] = 0;
    pbVar41[10] = 0;
    pbVar41[0xb] = 0;
    pbVar41[0xc] = 0;
    pbVar41[0xd] = 0;
    pbVar41[0xe] = 0;
    pbVar41[0xf] = 0;
    pbVar41[0x10] = 0;
    pbVar41[0x11] = 0;
    pbVar41[0x12] = 0;
    pbVar41[0x13] = 0;
    pbVar41[0x14] = 0;
    pbVar41[0x15] = 0;
    pbVar41[0x16] = 0;
    pbVar41[0x17] = 0;
    pbVar41[0x18] = 0;
    lVar31 = *(longlong *)(pauVar50[4] + 8);
    do {
      lVar34 = *(longlong *)(lVar31 + 8);
      while (lVar34 != -1) {
        if (lVar34 < 0) {
          uStack_298 = (undefined1 (*) [16])&UNK_143308338;
          uStack_290 = pdb_1402ed400;
          uStack_109 = 1;
                    /* WARNING: Subroutine does not return */
          pdb_142dc83d0(&UNK_143308348,&uStack_298,&UNK_1433083d0);
        }
        LOCK();
        lVar59 = *(longlong *)(lVar31 + 8);
        bVar66 = lVar34 == lVar59;
        if (bVar66) {
          *(longlong *)(lVar31 + 8) = lVar34 + 1;
          lVar59 = lVar34;
        }
        UNLOCK();
        lVar34 = lVar59;
        if (bVar66) {
          uStack_132 = 1;
          pdb_14094c710(&pauStack_4c0,pauStack_130,&pauStack_478,lVar31,pbVar41);
          uStack_208 = uStack_348;
          pauStack_218 = pauStack_358;
          pauStack_210 = pauStack_350;
          pauStack_228 = pauStack_368;
          pauStack_220 = pauStack_360;
          pauStack_238 = pauStack_378;
          pauStack_230 = pauStack_370;
          pauStack_248 = pauStack_388;
          pauStack_240 = pauStack_380;
          pauStack_258 = pauStack_398;
          pauStack_250 = pauStack_390;
          pauStack_268 = pauStack_3a8;
          pauStack_260 = pauStack_3a0;
          uStack_298 = pauStack_4c0;
          uStack_290 = (code *)pauStack_4b8;
          uStack_288 = pauStack_4b0;
          pauStack_280 = pauStack_4a8;
          pauStack_278 = pauStack_4a0;
          pauStack_270 = pauStack_498;
          uStack_132 = 0;
          pdb_141416870(&pauStack_460,param_12,&uStack_298,&UNK_143007a60);
          *puStack_580 = uStack_328;
          uStack_f6 = 0;
          pdb_141409100(uStack_3e0,pauStack_130,pauStack_460);
          goto LAB_14080ba05;
        }
      }
    } while( true );
  }
  uVar32 = uVar39 & 0xffffffff ^ 0xffffffff;
  uVar48 = 1;
  if (((*(ulonglong *)(lStack_5a8 + 0x10) <= uVar32) ||
      (piVar46 = (int *)(uVar32 * 0x18 + *(longlong *)(lStack_5a8 + 8)),
      piVar46[4] != (int)(uVar39 >> 0x20))) || (*piVar46 == 0)) {
LAB_14080be86:
    pauStack_3a8 = (undefined1 (*) [16])((longlong)pauVar52 << 0x20 | uVar48);
    uStack_298 = (undefined1 (*) [16])&pauStack_130;
    uStack_290 = pdb_140c04ef0;
    uStack_288 = (undefined1 (*) [16])&pauStack_3a8;
    pauStack_280 = (undefined1 (*) [16])pdb_14080e2a0;
    pauStack_120 = pauStack_118;
    uStack_f2 = 0;
    uStack_f3 = 1;
    pauStack_3a0 = (undefined1 (*) [16])uVar39;
    pauStack_128 = pauVar33;
                    /* WARNING: Subroutine does not return */
    pdb_142dc83d0(&UNK_143007b40,&uStack_298,&UNK_143007b98);
  }
  pauVar52 = *(undefined1 (**) [16])(piVar46 + 2);
  if ((*(ulonglong *)(lStack_5a0 + 0x38) <= ((ulonglong)pauVar52 & 0xffffffff)) ||
     ((*(ulonglong *)(*(longlong *)(lStack_5a0 + 0x28) + ((ulonglong)pauVar52 >> 6 & 0x3ffffff) * 8)
       >> ((ulonglong)pauVar52 & 0x3f) & 1) == 0)) {
    uVar48 = 0;
    goto LAB_14080be86;
  }
  lVar31 = *(longlong *)
            (*(longlong *)(lStack_5a8 + 0x1a0) + 0x18 + ((ulonglong)pauVar52 >> 0x20) * 0x48);
  lVar59 = *(longlong *)
            (*(longlong *)(lStack_5a8 + 0x1a0) + 0x38 + ((ulonglong)pauVar52 >> 0x20) * 0x48);
  lVar47 = ~*(ulonglong *)(lVar59 + *(longlong *)(lStack_5a0 + 0x110) * 8) * 0x30;
  lVar60 = ~*(ulonglong *)(lVar59 + *(longlong *)(lStack_5a0 + 0x118) * 8) * 0x30;
  uVar39 = (ulonglong)(uint)~piVar46[1];
  lVar59 = *(longlong *)(lVar31 + 0x10 + lVar47);
  pauVar63 = *(undefined1 (**) [16])(lVar31 + 0x28 + lVar60);
  lVar44 = *(longlong *)(lVar31 + 0x20 + lVar47);
  pauVar50 = (undefined1 (*) [16])(uVar39 * 0x68 + *(longlong *)(lVar31 + 0x10 + lVar60));
  *(undefined4 *)(*(longlong *)(lVar31 + 0x28 + lVar47) + uVar39 * 4) = uStack_2ac;
  uStack_288 = pauStack_310;
  uStack_298 = pauStack_320;
  uStack_290 = (code *)pauStack_318;
  pauStack_120 = pauStack_118;
  uStack_f2 = 0;
  uStack_f3 = 0;
  pauStack_128 = pauVar33;
  pdb_14094c740(uVar39 * 0x30 + lVar59,&uStack_298);
  *(undefined4 *)(*pauVar63 + uVar39 * 4) = uStack_2ac;
  pauStack_120 = pauVar64;
  uStack_f2 = 0;
  uStack_f3 = 0;
  pauStack_128 = pauVar33;
  pdb_140a0dff0(pauVar50,lVar34);
  pauStack_120 = pauVar64;
  uStack_f2 = 0;
  uStack_f3 = 0;
  pauStack_128 = pauVar33;
  pdb_14080dcb0(&ppauStack_608,pauVar50);
  pauVar52 = (undefined1 (*) [16])(uVar39 * 4 + lVar44 >> 0x20);
  pauVar49 = pauVar64;
  pauVar64 = pauStack_3c8;
LAB_14080ba05:
  pauVar33 = pauStack_168;
  if (pauStack_168 == pauVar64) goto LAB_14080bbaf;
  goto LAB_1408090cc;
LAB_14080c0ac:
  do {
    if (*(longlong *)(*pauStack_1e0 + (longlong)pauVar33 * 8) ==
        *(longlong *)(pauStack_1e0[-1] + (longlong)pauVar64 * 8 + 8)) {
      lVar31 = *(longlong *)(*pauStack_1e0 + (longlong)pauVar33 * 8 + 8);
      if (lVar31 != *(longlong *)(pauStack_1e0[-1] + (longlong)pauVar64 * 8 + 8)) {
LAB_14080c0d8:
        *(longlong *)(*pauStack_1e0 + (longlong)pauVar64 * 8) = lVar31;
        pauVar64 = (undefined1 (*) [16])(*pauVar64 + 1);
      }
    }
    else {
      *(longlong *)(*pauStack_1e0 + (longlong)pauVar64 * 8) =
           *(longlong *)(*pauStack_1e0 + (longlong)pauVar33 * 8);
      puVar53 = *pauVar64;
      pauVar64 = (undefined1 (*) [16])(puVar53 + 1);
      lVar31 = *(longlong *)(*pauStack_1e0 + (longlong)pauVar33 * 8 + 8);
      if (lVar31 != *(longlong *)(*pauStack_1e0 + (longlong)puVar53 * 8)) goto LAB_14080c0d8;
    }
    pauVar33 = (undefined1 (*) [16])(*pauVar33 + 2);
  } while (pauStack_1d8 != pauVar33);
LAB_140808f1a:
  pauStack_1d8 = pauVar64;
  fVar25 = _DAT_143007988;
  fVar24 = _DAT_143007984;
  fVar23 = _DAT_143007980;
  fVar22 = _UNK_14300797c;
  fVar21 = _UNK_143007978;
  fVar20 = _UNK_143007974;
  fVar19 = _DAT_143007970;
  uVar18 = _UNK_142e47bfc;
  uVar17 = _UNK_142e47bf8;
  fVar16 = _DAT_142e36f50;
  fVar15 = _DAT_142e36f28;
  lStack_408 = 0;
  pbStack_400 = (byte *)0x4;
  uStack_3f8 = 0;
  pauStack_3d0 = pauStack_1e8;
  pauVar64 = (undefined1 (*) [16])(*pauStack_1e0 + (longlong)pauStack_1d8 * 8);
  uStack_2c0 = *param_14;
  uStack_548 = *param_15;
  uStack_3e0 = *(undefined8 *)*pauStack_118;
  puStack_580 = *(undefined4 **)pauStack_118[1];
  lStack_5a0 = *param_8;
  lStack_5a8 = param_8[1];
  uStack_2ac = *(undefined4 *)((longlong)param_8 + 0x14);
  uStack_328 = *(undefined4 *)(pauStack_118[1] + 0xc);
  uStack_32c = *(undefined4 *)((longlong)param_13 + 0x1c);
  lStack_3d8 = *param_13;
  puStack_5b0 = (undefined4 *)param_13[2];
  plStack_538 = plStack_1d0 + 4;
  lStack_578 = lStack_300 + 0x20;
  lStack_568 = lStack_3d8 + 0x20;
  lStack_570 = lStack_308 + 0x20;
  lStack_560 = lStack_2f8 + 0x20;
  plStack_2b8 = plStack_160 + 4;
  lStack_540 = lStack_2f0 + 0x20;
  lStack_598 = lStack_2a0 + 0x20;
  pauVar33 = pauStack_1e0;
  uVar84 = _DAT_142e36f40;
  uVar85 = _UNK_142e36f44;
  uVar86 = _UNK_142e36f48;
  uVar87 = _UNK_142e36f4c;
  pauStack_3c8 = pauVar64;
  pauStack_3c0 = pauStack_1e0;
  if (pauStack_1e0 != pauVar64) {
LAB_1408090cc:
    plVar42 = aplStack_628[0];
    pauVar63 = *(undefined1 (**) [16])*pauVar33;
    pauStack_130 = pauVar63;
    if (aplStack_628[0][3] == 0) {
LAB_14080bb73:
                    /* WARNING: Subroutine does not return */
      pdb_142dc8150(&UNK_143007ab0);
    }
    pauStack_168 = (undefined1 (*) [16])(*pauVar33 + 8);
    uVar48 = pdb_1400af0a0(aplStack_628[0] + 4,&pauStack_130);
    lVar31 = *plVar42;
    uVar39 = plVar42[1];
    bVar28 = (byte)(uVar48 >> 0x39);
    auVar70 = ZEXT216(CONCAT11(bVar28,bVar28));
    auVar70 = pshuflw(auVar70,auVar70,0);
    lVar34 = 0;
    while( true ) {
      uVar48 = uVar48 & uVar39;
      auVar74 = *(undefined1 (*) [16])(lVar31 + uVar48);
      auVar80[0] = -(auVar74[0] == auVar70[0]);
      auVar80[1] = -(auVar74[1] == auVar70[1]);
      auVar80[2] = -(auVar74[2] == auVar70[2]);
      auVar80[3] = -(auVar74[3] == auVar70[3]);
      auVar80[4] = -(auVar74[4] == auVar70[4]);
      auVar80[5] = -(auVar74[5] == auVar70[5]);
      auVar80[6] = -(auVar74[6] == auVar70[6]);
      auVar80[7] = -(auVar74[7] == auVar70[7]);
      auVar80[8] = -(auVar74[8] == auVar70[0]);
      auVar80[9] = -(auVar74[9] == auVar70[1]);
      auVar80[10] = -(auVar74[10] == auVar70[2]);
      auVar80[0xb] = -(auVar74[0xb] == auVar70[3]);
      auVar80[0xc] = -(auVar74[0xc] == auVar70[4]);
      auVar80[0xd] = -(auVar74[0xd] == auVar70[5]);
      auVar80[0xe] = -(auVar74[0xe] == auVar70[6]);
      auVar80[0xf] = -(auVar74[0xf] == auVar70[7]);
      uVar56 = (ushort)(SUB161(auVar80 >> 7,0) & 1) | (ushort)(SUB161(auVar80 >> 0xf,0) & 1) << 1 |
               (ushort)(SUB161(auVar80 >> 0x17,0) & 1) << 2 |
               (ushort)(SUB161(auVar80 >> 0x1f,0) & 1) << 3 |
               (ushort)(SUB161(auVar80 >> 0x27,0) & 1) << 4 |
               (ushort)(SUB161(auVar80 >> 0x2f,0) & 1) << 5 |
               (ushort)(SUB161(auVar80 >> 0x37,0) & 1) << 6 |
               (ushort)(SUB161(auVar80 >> 0x3f,0) & 1) << 7 |
               (ushort)(SUB161(auVar80 >> 0x47,0) & 1) << 8 |
               (ushort)(SUB161(auVar80 >> 0x4f,0) & 1) << 9 |
               (ushort)(SUB161(auVar80 >> 0x57,0) & 1) << 10 |
               (ushort)(SUB161(auVar80 >> 0x5f,0) & 1) << 0xb |
               (ushort)(SUB161(auVar80 >> 0x67,0) & 1) << 0xc |
               (ushort)(SUB161(auVar80 >> 0x6f,0) & 1) << 0xd |
               (ushort)(SUB161(auVar80 >> 0x77,0) & 1) << 0xe | (ushort)(auVar80[0xf] >> 7) << 0xf;
      uVar32 = (ulonglong)uVar56;
      if (uVar56 != 0) break;
LAB_140809170:
      auVar72[0] = -(auVar74[0] == -1);
      auVar72[1] = -(auVar74[1] == -1);
      auVar72[2] = -(auVar74[2] == -1);
      auVar72[3] = -(auVar74[3] == -1);
      auVar72[4] = -(auVar74[4] == -1);
      auVar72[5] = -(auVar74[5] == -1);
      auVar72[6] = -(auVar74[6] == -1);
      auVar72[7] = -(auVar74[7] == -1);
      auVar72[8] = -(auVar74[8] == -1);
      auVar72[9] = -(auVar74[9] == -1);
      auVar72[10] = -(auVar74[10] == -1);
      auVar72[0xb] = -(auVar74[0xb] == -1);
      auVar72[0xc] = -(auVar74[0xc] == -1);
      auVar72[0xd] = -(auVar74[0xd] == -1);
      auVar72[0xe] = -(auVar74[0xe] == -1);
      auVar72[0xf] = -(auVar74[0xf] == -1);
      if ((((((((((((((((SUB161(auVar72 >> 7,0) & 1) != 0 || (SUB161(auVar72 >> 0xf,0) & 1) != 0) ||
                      (SUB161(auVar72 >> 0x17,0) & 1) != 0) || (SUB161(auVar72 >> 0x1f,0) & 1) != 0)
                    || (SUB161(auVar72 >> 0x27,0) & 1) != 0) || (SUB161(auVar72 >> 0x2f,0) & 1) != 0
                   ) || (SUB161(auVar72 >> 0x37,0) & 1) != 0) ||
                 (SUB161(auVar72 >> 0x3f,0) & 1) != 0) || (SUB161(auVar72 >> 0x47,0) & 1) != 0) ||
               (SUB161(auVar72 >> 0x4f,0) & 1) != 0) || (SUB161(auVar72 >> 0x57,0) & 1) != 0) ||
             (SUB161(auVar72 >> 0x5f,0) & 1) != 0) || (SUB161(auVar72 >> 0x67,0) & 1) != 0) ||
           (SUB161(auVar72 >> 0x6f,0) & 1) != 0) || (SUB161(auVar72 >> 0x77,0) & 1) != 0) ||
          auVar72[0xf] < '\0') goto LAB_14080bb73;
      uVar48 = uVar48 + lVar34 + 0x10;
      lVar34 = lVar34 + 0x10;
    }
LAB_14080913d:
    uVar29 = 0;
    for (uVar45 = (uint)uVar32; (uVar45 & 1) == 0; uVar45 = uVar45 >> 1 | 0x80000000) {
      uVar29 = uVar29 + 1;
    }
    lVar59 = (uVar29 + uVar48 & uVar39) * -0x2b0;
    if (pauVar63 != *(undefined1 (**) [16])(lVar31 + -0x2b0 + lVar59)) goto code_r0x00014080915c;
    lVar31 = lVar31 + lVar59;
    pauStack_320 = (undefined1 (*) [16])0x0;
    pauStack_318 = (undefined1 (*) [16])0x4;
    pauStack_310 = (undefined1 (*) [16])0x0;
    pauStack_420 = (undefined1 (*) [16])0x0;
    pauStack_418 = (undefined1 (*) [16])0x4;
    pauStack_410 = (undefined1 (*) [16])0x0;
    pauStack_438 = (undefined1 (*) [16])0x0;
    pauStack_430 = (undefined1 (*) [16])0x4;
    pauStack_428 = (undefined1 (*) [16])0x0;
    pauStack_120 = (undefined1 (*) [16])0x0;
    pauStack_128 = (undefined1 (*) [16])0x4;
    uStack_f2 = 1;
    uStack_f3 = 1;
    ppauStack_1f0 = &pauStack_320;
    cVar26 = pdb_1408ff980(lVar31 + -9);
    pauVar63 = pauStack_130;
    if (cVar26 == '\0') {
      *puStack_5c0 = uStack_334;
      lVar34 = *(longlong *)(lStack_300 + 0x30);
      uVar65 = *(undefined8 *)(lStack_300 + 0x40);
      if (lVar34 == *(longlong *)(lStack_300 + 0x20)) {
        pauStack_120 = (undefined1 (*) [16])0x0;
        pauStack_128 = (undefined1 (*) [16])0x4;
        uStack_f2 = 1;
        uStack_f3 = 1;
        pdb_142d7e980(lStack_578);
      }
      pauVar64 = pauStack_130;
      lVar59 = *(longlong *)(lStack_300 + 0x28);
      *(undefined8 *)(lVar59 + lVar34 * 0x10) = uVar65;
      *(undefined1 (**) [16])(lVar59 + 8 + lVar34 * 0x10) = pauVar63;
      *(longlong *)(lStack_300 + 0x30) = lVar34 + 1;
      *(longlong *)(lStack_300 + 0x40) = *(longlong *)(lStack_300 + 0x40) + 1;
      *puStack_5b0 = uStack_32c;
      lVar34 = *(longlong *)(lStack_3d8 + 0x30);
      uVar65 = *(undefined8 *)(lStack_3d8 + 0x40);
      lVar59 = lStack_3d8;
      if (lVar34 == *(longlong *)(lStack_3d8 + 0x20)) {
        pauStack_120 = (undefined1 (*) [16])0x0;
        pauStack_128 = (undefined1 (*) [16])0x4;
        uStack_f2 = 1;
        uStack_f3 = 1;
        pdb_142d7e980(lStack_568);
        lVar59 = lStack_3d8;
      }
    }
    else {
      *puStack_5c8 = uStack_338;
      lVar34 = *(longlong *)(lStack_308 + 0x30);
      uVar65 = *(undefined8 *)(lStack_308 + 0x40);
      if (lVar34 == *(longlong *)(lStack_308 + 0x20)) {
        pauStack_120 = (undefined1 (*) [16])0x0;
        pauStack_128 = (undefined1 (*) [16])0x4;
        uStack_f2 = 1;
        uStack_f3 = 1;
        pdb_142d7e980(lStack_570);
      }
      pauVar64 = pauStack_130;
      lVar59 = *(longlong *)(lStack_308 + 0x28);
      *(undefined8 *)(lVar59 + lVar34 * 0x10) = uVar65;
      *(undefined1 (**) [16])(lVar59 + 8 + lVar34 * 0x10) = pauVar63;
      *(longlong *)(lStack_308 + 0x30) = lVar34 + 1;
      *(longlong *)(lStack_308 + 0x40) = *(longlong *)(lStack_308 + 0x40) + 1;
      *puStack_5b8 = uStack_330;
      lVar34 = *(longlong *)(lStack_2f8 + 0x30);
      uVar65 = *(undefined8 *)(lStack_2f8 + 0x40);
      lVar59 = lStack_2f8;
      if (lVar34 == *(longlong *)(lStack_2f8 + 0x20)) {
        pauStack_120 = (undefined1 (*) [16])0x0;
        pauStack_128 = (undefined1 (*) [16])0x4;
        uStack_f2 = 1;
        uStack_f3 = 1;
        pdb_142d7e980(lStack_560);
        lVar59 = lStack_2f8;
      }
    }
    lVar44 = *(longlong *)(lVar59 + 0x28);
    *(undefined8 *)(lVar44 + lVar34 * 0x10) = uVar65;
    *(undefined1 (**) [16])(lVar44 + 8 + lVar34 * 0x10) = pauVar64;
    *(longlong *)(lVar59 + 0x30) = lVar34 + 1;
    *(longlong *)(lVar59 + 0x40) = *(longlong *)(lVar59 + 0x40) + 1;
    lVar34 = lVar31 + -0x2a8;
    if (*(char *)(lVar31 + -8) != '\0') {
      pauVar64 = (undefined1 (*) [16])0x0;
      pauVar63 = (undefined1 (*) [16])0x0;
      pauVar50 = (undefined1 (*) [16])0x0;
      pauVar33 = (undefined1 (*) [16])0x4;
      goto LAB_14080b3c7;
    }
    pauStack_120 = (undefined1 (*) [16])0x0;
    pauStack_128 = (undefined1 (*) [16])0x4;
    uStack_f2 = 1;
    uStack_f3 = 1;
    uVar39 = pdb_140b54b40(aplStack_628[0],pauStack_130);
    if ((uVar39 & 0xffffffff) == 0) {
      pauStack_120 = (undefined1 (*) [16])0x0;
      pauStack_128 = (undefined1 (*) [16])0x4;
      uStack_f2 = 1;
      uStack_f3 = 1;
      uVar30 = pdb_140901380(lVar31 + -0xb);
      uVar30 = CONCAT31((int3)((uint)uVar30 >> 8),(char)uVar30 * '\x02');
      uStack_490 = 0;
      pauVar49 = (undefined1 (*) [16])0x0;
      uStack_1c0 = 0;
    }
    else {
      pauVar49 = (undefined1 (*) [16])(uVar39 & 0xffffffff ^ 0xffffffff);
      uVar30 = 1;
      if (ppauStack_590[2] <= pauVar49) {
LAB_14080bf16:
        uStack_298 = (undefined1 (*) [16])CONCAT44((int)uVar32,uVar30);
        pauStack_120 = (undefined1 (*) [16])0x0;
        pauStack_128 = (undefined1 (*) [16])0x4;
        uStack_f2 = 1;
        uStack_f3 = 1;
        uStack_290 = (code *)uVar39;
                    /* WARNING: Subroutine does not return */
        pdb_142dc8170(&UNK_143007c30,0x2b,&uStack_298,&UNK_143007c10,&UNK_143007ac8);
      }
      piVar46 = (int *)((longlong)pauVar49 * 0x18 + (longlong)ppauStack_590[1]);
      uVar32 = uVar39 >> 0x20;
      if ((piVar46[4] != (int)(uVar39 >> 0x20)) || (*piVar46 == 0)) goto LAB_14080bf16;
      uVar32 = *(ulonglong *)(piVar46 + 2);
      uVar30 = 0;
      if ((*(ulonglong *)(pauStack_588[3] + 8) <= (uVar32 & 0xffffffff)) ||
         ((*(ulonglong *)(*(longlong *)(pauStack_588[2] + 8) + (uVar32 >> 6 & 0x3ffffff) * 8) >>
           (uVar32 & 0x3f) & 1) == 0)) goto LAB_14080bf16;
      uVar32 = uVar32 >> 0x20;
      pauVar49 = ppauStack_590[0x34];
      if ((*(ulonglong *)pauStack_588[0x11] <
           *(ulonglong *)((longlong)pauVar49 + uVar32 * 0x48 + 0x40)) &&
         (uVar39 = *(ulonglong *)
                    (*(longlong *)((longlong)pauVar49 + uVar32 * 0x48 + 0x38) +
                    *(ulonglong *)pauStack_588[0x11] * 8), uVar39 != 0)) {
        lVar34 = *(longlong *)
                  (*(longlong *)((longlong)pauVar49 + uVar32 * 0x48 + 0x18) + 0x10 + ~uVar39 * 0x30)
        ;
      }
      else {
        lVar34 = 0;
      }
      pauVar49 = (undefined1 (*) [16])((ulonglong)(uint)~piVar46[1] * 0x58 + lVar34);
      pauStack_120 = (undefined1 (*) [16])0x0;
      pauStack_128 = (undefined1 (*) [16])0x4;
      uStack_f2 = 1;
      uStack_f3 = 1;
      uStack_1c0 = pdb_140b77b60(pauVar49);
      pauStack_120 = (undefined1 (*) [16])0x0;
      pauStack_128 = (undefined1 (*) [16])0x4;
      uStack_f2 = 1;
      uStack_f3 = 1;
      cVar26 = pdb_140b77990(pauVar49);
      if (cVar26 == '\0') {
        pauStack_120 = (undefined1 (*) [16])0x0;
        pauStack_128 = (undefined1 (*) [16])0x4;
        uStack_f2 = 1;
        uStack_f3 = 1;
        cVar26 = pdb_140901380(pauVar49[3] + 0xd);
        if (cVar26 == '\0') goto LAB_140809613;
        pauStack_120 = (undefined1 (*) [16])0x0;
        pauStack_128 = (undefined1 (*) [16])0x4;
        uStack_f2 = 1;
        uStack_f3 = 1;
        uVar30 = pdb_1408ff990(lVar31 + -5);
        uVar30 = CONCAT31((int3)((uint)uVar30 >> 8),(char)uVar30 * '\x02' + '\x01');
      }
      else {
LAB_140809613:
        uVar30 = 0;
      }
      pauStack_120 = (undefined1 (*) [16])0x0;
      pauStack_128 = (undefined1 (*) [16])0x4;
      uStack_f2 = 1;
      uStack_f3 = 1;
      pdb_140b77190(&uStack_490,pauVar49);
    }
    pauStack_120 = (undefined1 (*) [16])0x0;
    pauStack_128 = (undefined1 (*) [16])0x4;
    uStack_f2 = 1;
    uStack_f3 = 1;
    lVar34 = pdb_140315970(&pauStack_130);
    pauStack_140 = (undefined1 (*) [16])CONCAT44(pauStack_140._4_4_,uVar30);
    lStack_530 = lVar34 * 0x4b28021 + *(longlong *)(lVar31 + -0x260);
    pppauVar51 = *(undefined1 (****) [16])(lVar31 + -0x210);
    pppauStack_198 = pppauVar51;
    pauStack_148 = pauVar49;
    if (pppauVar51 == (undefined1 (***) [16])0x0) {
      pauStack_188 = (undefined1 (*) [16])0x4;
      goto LAB_1408098b7;
    }
    lVar34 = *(longlong *)(lVar31 + -0x218);
    pdb_14007ee60();
    pauStack_188 = (undefined1 (*) [16])pub_1406abab0((longlong)pppauVar51 * 4,4);
    if (pauStack_188 == (undefined1 (*) [16])0x0) {
      pauStack_120 = (undefined1 (*) [16])0x0;
      pauStack_128 = (undefined1 (*) [16])0x4;
      uStack_f2 = 1;
      uStack_f3 = 1;
      pdb_142dc7e2a(4,(longlong)pppauVar51 * 4);
      goto LAB_14080c12b;
    }
    if (pppauVar51 < (undefined1 (***) [16])0x9) {
      pppauVar35 = (undefined1 (***) [16])0x0;
    }
    else if (pauStack_188 < (undefined1 (*) [16])(lVar34 + (longlong)pppauVar51 * 0xc + -4) &&
             (undefined1 *)(lVar34 + 4U) < *pauStack_188 + (longlong)pppauVar51 * 4) {
      pppauVar35 = (undefined1 (***) [16])0x0;
    }
    else {
      uVar39 = (ulonglong)((uint)pppauVar51 & 7);
      if (((ulonglong)pppauVar51 & 7) == 0) {
        uVar39 = 8;
      }
      pppauVar35 = (undefined1 (***) [16])((longlong)pppauVar51 - uVar39);
      puVar36 = (undefined4 *)(lVar34 + 0x58);
      pppauVar43 = (undefined1 (***) [16])0x0;
      do {
        uVar30 = puVar36[-0xf];
        uVar5 = puVar36[-0xc];
        uVar6 = *puVar36;
        uVar7 = puVar36[-3];
        uVar8 = puVar36[-6];
        uVar9 = puVar36[-9];
        *(ulonglong *)(*pauStack_188 + (longlong)pppauVar43 * 4) =
             CONCAT44(puVar36[-0x12],puVar36[-0x15]);
        *(ulonglong *)((longlong)(*pauStack_188 + (longlong)pppauVar43 * 4) + 8) =
             CONCAT44(uVar5,uVar30);
        *(ulonglong *)(pauStack_188[1] + (longlong)pppauVar43 * 4) = CONCAT44(uVar8,uVar9);
        *(ulonglong *)((longlong)(pauStack_188[1] + (longlong)pppauVar43 * 4) + 8) =
             CONCAT44(uVar6,uVar7);
        pppauVar43 = pppauVar43 + 1;
        puVar36 = puVar36 + 0x18;
      } while (pppauVar35 != pppauVar43);
    }
    uVar29 = (uint)pppauVar51 - (int)pppauVar35 & 3;
    pppauVar43 = pppauVar35;
    if (uVar29 != 0) {
      lVar59 = 0;
      do {
        *(undefined4 *)(*pauStack_188 + (longlong)pppauVar43 * 4) =
             *(undefined4 *)(lVar34 + (longlong)pppauVar35 * 0xc + 4 + lVar59 * 4);
        pppauVar43 = (undefined1 (***) [16])((longlong)pppauVar43 + 1);
        lVar59 = lVar59 + 3;
      } while ((ulonglong)uVar29 * 3 != lVar59);
    }
    if ((ulonglong)((longlong)pppauVar35 - (longlong)pppauVar51) < 0xfffffffffffffffd) {
      puVar36 = (undefined4 *)(lVar34 + (longlong)pppauVar43 * 0xc + 0x28);
      do {
        *(undefined4 *)(*pauStack_188 + (longlong)pppauVar43 * 4) = puVar36[-9];
        *(undefined4 *)(*pauStack_188 + (longlong)pppauVar43 * 4 + 4) = puVar36[-6];
        *(undefined4 *)(*pauStack_188 + (longlong)pppauVar43 * 4 + 8) = puVar36[-3];
        *(undefined4 *)(*pauStack_188 + (longlong)pppauVar43 * 4 + 0xc) = *puVar36;
        pppauVar43 = (undefined1 (***) [16])((longlong)pppauVar43 + 4);
        puVar36 = puVar36 + 0xc;
      } while (pppauVar51 != pppauVar43);
    }
LAB_1408098b7:
    uVar48 = *(ulonglong *)(lVar31 + -0x1c0);
    uVar39 = uVar48 * 4;
    if (0x7ffffffffffffffc < uVar39 || uVar48 >> 0x3e != 0) {
      uVar65 = 0;
LAB_14080bb88:
      uStack_3e8 = 0;
      uStack_3f0 = 4;
      pdb_142dc7e2a(uVar65,uVar39);
LAB_14080c12b:
                    /* WARNING: Does not return */
      pcVar11 = (code *)invalidInstructionException();
      (*pcVar11)();
    }
    uVar10 = *(undefined8 *)(lVar31 + -0x1c8);
    lStack_3b0 = lVar31 + -0x2a8;
    if (uVar39 == 0) {
      pfStack_170 = (float *)0x4;
      uStack_2d0 = 0;
      uVar32 = uStack_2d0;
    }
    else {
      pdb_14007ee60();
      uVar65 = 4;
      pfStack_170 = (float *)pub_1406abab0(uVar39,4);
      uVar32 = uVar48;
      if (pfStack_170 == (float *)0x0) goto LAB_14080bb88;
    }
    uStack_2d0 = uVar32;
    uStack_2c8 = uVar48;
    if (uVar48 != 0) {
      pub_142e32760(pfStack_170,uVar10);
    }
    if (pauStack_148 != (undefined1 (*) [16])0x0) {
      uStack_1f8 = 0;
      uStack_200 = 4;
      cVar26 = pdb_140b77b50(pauStack_148);
      if (cVar26 != '\0') {
        uStack_1f8 = 0;
        uStack_200 = 4;
        cVar26 = pdb_140901380(pauStack_148[3] + 0xd);
        if ((cVar26 == '\0') && (uStack_2c8 != 0)) {
          pfVar37 = pfStack_170;
          if (0x1b < uVar39 - 4) {
            uVar39 = (uVar39 - 4 >> 2) + 1;
            uVar32 = uVar39 & 0xfffffffffffffff8;
            pfVar37 = pfStack_170 + uVar32;
            uVar55 = 0;
            do {
              pfVar1 = pfStack_170 + uVar55;
              pfVar3 = pfStack_170 + uVar55 + 4;
              auVar71._0_4_ = *pfVar1 + fVar19;
              auVar71._4_4_ = pfVar1[1] + fVar20;
              auVar71._8_4_ = pfVar1[2] + fVar21;
              auVar71._12_4_ = pfVar1[3] + fVar22;
              auVar73._0_4_ = *pfVar3 + fVar19;
              auVar73._4_4_ = pfVar3[1] + fVar20;
              auVar73._8_4_ = pfVar3[2] + fVar21;
              auVar73._12_4_ = pfVar3[3] + fVar22;
              auVar70._4_4_ = uVar85;
              auVar70._0_4_ = uVar84;
              auVar70._8_4_ = uVar86;
              auVar70._12_4_ = uVar87;
              auVar70 = maxps(auVar71,auVar70);
              auVar74._4_4_ = uVar85;
              auVar74._0_4_ = uVar84;
              auVar74._8_4_ = uVar86;
              auVar74._12_4_ = uVar87;
              auVar74 = maxps(auVar73,auVar74);
              *(undefined1 (*) [16])(pfStack_170 + uVar55) = auVar70;
              *(undefined1 (*) [16])(pfStack_170 + uVar55 + 4) = auVar74;
              uVar55 = uVar55 + 8;
            } while (uVar32 != uVar55);
            if (uVar39 == uVar32) goto LAB_140809a49;
          }
          do {
            fVar88 = *pfVar37 + fVar23;
            if (*pfVar37 + fVar23 <= fVar16) {
              fVar88 = fVar16;
            }
            *pfVar37 = fVar88;
            pfVar37 = pfVar37 + 1;
          } while (pfVar37 != pfStack_170 + uVar48);
        }
      }
    }
LAB_140809a49:
    uStack_1f8 = 0;
    uStack_200 = 4;
    pdb_14017ede0(&pauStack_4c0);
    pauStack_398 = pauStack_4b0;
    pauStack_3a8 = pauStack_4c0;
    pauStack_3a0 = pauStack_4b8;
    uStack_1f8 = 0;
    uStack_200 = 4;
    pdb_140080c90(&uStack_298,&pauStack_3a8);
    if (SBORROW8(0,(longlong)uStack_298)) {
      pauStack_3a8 = (undefined1 (*) [16])uStack_290;
      pauStack_3a0 = uStack_288;
      uStack_1f8 = 0;
      uStack_200 = 4;
                    /* WARNING: Subroutine does not return */
      pdb_142dc8170(&UNK_143306430,0x2b,&pauStack_3a8,&UNK_143306410,&UNK_143306a30);
    }
    pauStack_4f8 = pauStack_268;
    pauStack_508 = pauStack_278;
    pauStack_500 = pauStack_270;
    pauStack_518 = uStack_288;
    pauStack_510 = pauStack_280;
    pauStack_528 = uStack_298;
    pauStack_520 = (undefined1 (*) [16])uStack_290;
    pauStack_1b8 = (undefined1 (*) [16])CONCAT71(pauStack_1b8._1_7_,2);
    if ((char)uStack_1c0 != '\0') {
      uStack_178 = 0;
      uStack_180 = 4;
      uStack_1a8 = pdb_140930390(lVar31 + -0x2a8);
      uStack_178 = 0;
      uStack_180 = 4;
      uVar27 = pdb_140c33110(lVar31 + -9,*(undefined1 *)(lVar31 + -5));
      pauStack_1b8 = (undefined1 (*) [16])CONCAT71(pauStack_1b8._1_7_,uVar27);
      uStack_178 = 0;
      uStack_180 = 4;
      uVar65 = pdb_14092f900(lVar31 + -0x2a8);
      uStack_178 = 0;
      uStack_180 = 4;
      uVar65 = pdb_140a84d90(uVar65);
      pauVar63 = pauStack_480;
      pauVar49 = pauStack_488;
      if ((uStack_490 & 1) == 0) {
        uStack_178 = 0;
        uStack_180 = 4;
                    /* WARNING: Subroutine does not return */
        pdb_142dc8150(&UNK_143007ae0);
      }
      uStack_178 = 0;
      uStack_180 = 4;
      uStack_1a4 = pdb_140df0700(uVar65,pauStack_488);
      uStack_178 = 0;
      uStack_180 = 4;
      uStack_1a0 = pdb_140df0700(uVar65,*pauVar49 + 1);
      uStack_178 = 0;
      uStack_180 = 4;
      uStack_19c = pdb_140df0700(uVar65,pauVar63);
      uStack_178 = 0;
      uStack_180 = 4;
      uStack_2a4 = pdb_140df0700(uVar65,*pauVar63 + 1);
    }
    fVar88 = 0.0;
    pcVar38 = (char *)(lVar31 + -5);
    uStack_150 = 0;
    uStack_158 = 4;
    uStack_f4 = 0;
    cVar26 = pdb_1408ff990();
    if (cVar26 == '\0') {
      uStack_150 = 0;
      uStack_158 = 4;
      uStack_f4 = 0;
      cVar26 = pdb_1408ff980(lVar31 + -9);
      pauVar49 = pauStack_130;
      if (cVar26 != '\0') goto LAB_140809ced;
      *puStack_3b8 = uStack_2a8;
      uStack_298 = pauStack_130;
      uVar48 = pdb_1400af0a0(plStack_2b8,&uStack_298);
      lVar34 = *plStack_160;
      bVar28 = (byte)(uVar48 >> 0x38);
      bVar67 = bVar28 >> 1;
      auVar70 = ZEXT216(CONCAT11(bVar67,bVar67));
      auVar70 = pshuflw(auVar70,auVar70,0);
      lVar59 = 0;
      uVar39 = uVar48;
      do {
        uVar39 = uVar39 & plStack_160[1];
        pcVar2 = (char *)(lVar34 + uVar39);
        auVar82[0] = -(*pcVar2 == auVar70[0]);
        auVar82[1] = -(pcVar2[1] == auVar70[1]);
        auVar82[2] = -(pcVar2[2] == auVar70[2]);
        auVar82[3] = -(pcVar2[3] == auVar70[3]);
        auVar82[4] = -(pcVar2[4] == auVar70[4]);
        auVar82[5] = -(pcVar2[5] == auVar70[5]);
        auVar82[6] = -(pcVar2[6] == auVar70[6]);
        auVar82[7] = -(pcVar2[7] == auVar70[7]);
        auVar82[8] = -(pcVar2[8] == auVar70[0]);
        auVar82[9] = -(pcVar2[9] == auVar70[1]);
        auVar82[10] = -(pcVar2[10] == auVar70[2]);
        auVar82[0xb] = -(pcVar2[0xb] == auVar70[3]);
        auVar82[0xc] = -(pcVar2[0xc] == auVar70[4]);
        auVar82[0xd] = -(pcVar2[0xd] == auVar70[5]);
        auVar82[0xe] = -(pcVar2[0xe] == auVar70[6]);
        auVar82[0xf] = -(pcVar2[0xf] == auVar70[7]);
        uVar56 = (ushort)(SUB161(auVar82 >> 7,0) & 1) | (ushort)(SUB161(auVar82 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar82 >> 0x17,0) & 1) << 2 |
                 (ushort)(SUB161(auVar82 >> 0x1f,0) & 1) << 3 |
                 (ushort)(SUB161(auVar82 >> 0x27,0) & 1) << 4 |
                 (ushort)(SUB161(auVar82 >> 0x2f,0) & 1) << 5 |
                 (ushort)(SUB161(auVar82 >> 0x37,0) & 1) << 6 |
                 (ushort)(SUB161(auVar82 >> 0x3f,0) & 1) << 7 |
                 (ushort)(SUB161(auVar82 >> 0x47,0) & 1) << 8 |
                 (ushort)(SUB161(auVar82 >> 0x4f,0) & 1) << 9 |
                 (ushort)(SUB161(auVar82 >> 0x57,0) & 1) << 10 |
                 (ushort)(SUB161(auVar82 >> 0x5f,0) & 1) << 0xb |
                 (ushort)(SUB161(auVar82 >> 0x67,0) & 1) << 0xc |
                 (ushort)(SUB161(auVar82 >> 0x6f,0) & 1) << 0xd |
                 (ushort)(SUB161(auVar82 >> 0x77,0) & 1) << 0xe | (ushort)(auVar82[0xf] >> 7) << 0xf
        ;
        uVar29 = (uint)uVar56;
        if (uVar56 != 0) {
          while( true ) {
            uVar45 = 0;
            for (uVar12 = uVar29; (uVar12 & 1) == 0; uVar12 = uVar12 >> 1 | 0x80000000) {
              uVar45 = uVar45 + 1;
            }
            lVar44 = (uVar45 + uVar39 & plStack_160[1]) * -0x68;
            if (*(undefined1 (**) [16])(lVar34 + -0x68 + lVar44) == pauVar49) break;
            uVar56 = (ushort)(uVar29 - 1) & (ushort)uVar29;
            uVar29 = CONCAT22((short)(uVar29 - 1 >> 0x10),uVar56);
            if (uVar56 == 0) goto LAB_140809fe4;
          }
          lVar34 = lVar34 + lVar44;
          goto LAB_14080a127;
        }
LAB_140809fe4:
        auVar77[0] = -(*pcVar2 == -1);
        auVar77[1] = -(pcVar2[1] == -1);
        auVar77[2] = -(pcVar2[2] == -1);
        auVar77[3] = -(pcVar2[3] == -1);
        auVar77[4] = -(pcVar2[4] == -1);
        auVar77[5] = -(pcVar2[5] == -1);
        auVar77[6] = -(pcVar2[6] == -1);
        auVar77[7] = -(pcVar2[7] == -1);
        auVar77[8] = -(pcVar2[8] == -1);
        auVar77[9] = -(pcVar2[9] == -1);
        auVar77[10] = -(pcVar2[10] == -1);
        auVar77[0xb] = -(pcVar2[0xb] == -1);
        auVar77[0xc] = -(pcVar2[0xc] == -1);
        auVar77[0xd] = -(pcVar2[0xd] == -1);
        auVar77[0xe] = -(pcVar2[0xe] == -1);
        auVar77[0xf] = -(pcVar2[0xf] == -1);
        if ((((((((((((((((SUB161(auVar77 >> 7,0) & 1) != 0 || (SUB161(auVar77 >> 0xf,0) & 1) != 0)
                        || (SUB161(auVar77 >> 0x17,0) & 1) != 0) ||
                       (SUB161(auVar77 >> 0x1f,0) & 1) != 0) || (SUB161(auVar77 >> 0x27,0) & 1) != 0
                      ) || (SUB161(auVar77 >> 0x2f,0) & 1) != 0) ||
                    (SUB161(auVar77 >> 0x37,0) & 1) != 0) || (SUB161(auVar77 >> 0x3f,0) & 1) != 0)
                  || (SUB161(auVar77 >> 0x47,0) & 1) != 0) || (SUB161(auVar77 >> 0x4f,0) & 1) != 0)
                || (SUB161(auVar77 >> 0x57,0) & 1) != 0) || (SUB161(auVar77 >> 0x5f,0) & 1) != 0) ||
              (SUB161(auVar77 >> 0x67,0) & 1) != 0) || (SUB161(auVar77 >> 0x6f,0) & 1) != 0) ||
            (SUB161(auVar77 >> 0x77,0) & 1) != 0) || auVar77[0xf] < '\0') goto LAB_14080a008;
        uVar39 = uVar39 + lVar59 + 0x10;
        lVar59 = lVar59 + 0x10;
      } while( true );
    }
LAB_140809ced:
    pauVar63 = pauStack_130;
    *puStack_3b8 = uStack_2a8;
    uStack_298 = pauStack_130;
    uVar48 = pdb_1400af0a0(plStack_2b8,&uStack_298);
    lVar34 = *plStack_160;
    pauVar49 = (undefined1 (*) [16])plStack_160[1];
    bVar28 = (byte)(uVar48 >> 0x38);
    bVar67 = bVar28 >> 1;
    auVar70 = ZEXT216(CONCAT11(bVar67,bVar67));
    auVar70 = pshuflw(auVar70,auVar70,0);
    lVar59 = 0;
    uVar39 = uVar48;
    do {
      uVar39 = uVar39 & (ulonglong)pauVar49;
      pcVar2 = (char *)(lVar34 + uVar39);
      auVar81[0] = -(*pcVar2 == auVar70[0]);
      auVar81[1] = -(pcVar2[1] == auVar70[1]);
      auVar81[2] = -(pcVar2[2] == auVar70[2]);
      auVar81[3] = -(pcVar2[3] == auVar70[3]);
      auVar81[4] = -(pcVar2[4] == auVar70[4]);
      auVar81[5] = -(pcVar2[5] == auVar70[5]);
      auVar81[6] = -(pcVar2[6] == auVar70[6]);
      auVar81[7] = -(pcVar2[7] == auVar70[7]);
      auVar81[8] = -(pcVar2[8] == auVar70[0]);
      auVar81[9] = -(pcVar2[9] == auVar70[1]);
      auVar81[10] = -(pcVar2[10] == auVar70[2]);
      auVar81[0xb] = -(pcVar2[0xb] == auVar70[3]);
      auVar81[0xc] = -(pcVar2[0xc] == auVar70[4]);
      auVar81[0xd] = -(pcVar2[0xd] == auVar70[5]);
      auVar81[0xe] = -(pcVar2[0xe] == auVar70[6]);
      auVar81[0xf] = -(pcVar2[0xf] == auVar70[7]);
      uVar56 = (ushort)(SUB161(auVar81 >> 7,0) & 1) | (ushort)(SUB161(auVar81 >> 0xf,0) & 1) << 1 |
               (ushort)(SUB161(auVar81 >> 0x17,0) & 1) << 2 |
               (ushort)(SUB161(auVar81 >> 0x1f,0) & 1) << 3 |
               (ushort)(SUB161(auVar81 >> 0x27,0) & 1) << 4 |
               (ushort)(SUB161(auVar81 >> 0x2f,0) & 1) << 5 |
               (ushort)(SUB161(auVar81 >> 0x37,0) & 1) << 6 |
               (ushort)(SUB161(auVar81 >> 0x3f,0) & 1) << 7 |
               (ushort)(SUB161(auVar81 >> 0x47,0) & 1) << 8 |
               (ushort)(SUB161(auVar81 >> 0x4f,0) & 1) << 9 |
               (ushort)(SUB161(auVar81 >> 0x57,0) & 1) << 10 |
               (ushort)(SUB161(auVar81 >> 0x5f,0) & 1) << 0xb |
               (ushort)(SUB161(auVar81 >> 0x67,0) & 1) << 0xc |
               (ushort)(SUB161(auVar81 >> 0x6f,0) & 1) << 0xd |
               (ushort)(SUB161(auVar81 >> 0x77,0) & 1) << 0xe | (ushort)(auVar81[0xf] >> 7) << 0xf;
      uVar29 = (uint)uVar56;
      if (uVar56 != 0) {
        while( true ) {
          uVar45 = 0;
          for (uVar12 = uVar29; (uVar12 & 1) == 0; uVar12 = uVar12 >> 1 | 0x80000000) {
            uVar45 = uVar45 + 1;
          }
          lVar44 = (uVar45 + uVar39 & (ulonglong)pauVar49) * -0x68;
          if (*(undefined1 (**) [16])(lVar34 + -0x68 + lVar44) == pauVar63) break;
          uVar56 = (ushort)(uVar29 - 1) & (ushort)uVar29;
          uVar29 = CONCAT22((short)(uVar29 - 1 >> 0x10),uVar56);
          if (uVar56 == 0) goto LAB_140809d8b;
        }
        lVar34 = lVar34 + lVar44;
        goto LAB_140809eff;
      }
LAB_140809d8b:
      auVar75[0] = -(*pcVar2 == -1);
      auVar75[1] = -(pcVar2[1] == -1);
      auVar75[2] = -(pcVar2[2] == -1);
      auVar75[3] = -(pcVar2[3] == -1);
      auVar75[4] = -(pcVar2[4] == -1);
      auVar75[5] = -(pcVar2[5] == -1);
      auVar75[6] = -(pcVar2[6] == -1);
      auVar75[7] = -(pcVar2[7] == -1);
      auVar75[8] = -(pcVar2[8] == -1);
      auVar75[9] = -(pcVar2[9] == -1);
      auVar75[10] = -(pcVar2[10] == -1);
      auVar75[0xb] = -(pcVar2[0xb] == -1);
      auVar75[0xc] = -(pcVar2[0xc] == -1);
      auVar75[0xd] = -(pcVar2[0xd] == -1);
      auVar75[0xe] = -(pcVar2[0xe] == -1);
      auVar75[0xf] = -(pcVar2[0xf] == -1);
      if ((((((((((((((((SUB161(auVar75 >> 7,0) & 1) != 0 || (SUB161(auVar75 >> 0xf,0) & 1) != 0) ||
                      (SUB161(auVar75 >> 0x17,0) & 1) != 0) || (SUB161(auVar75 >> 0x1f,0) & 1) != 0)
                    || (SUB161(auVar75 >> 0x27,0) & 1) != 0) || (SUB161(auVar75 >> 0x2f,0) & 1) != 0
                   ) || (SUB161(auVar75 >> 0x37,0) & 1) != 0) ||
                 (SUB161(auVar75 >> 0x3f,0) & 1) != 0) || (SUB161(auVar75 >> 0x47,0) & 1) != 0) ||
               (SUB161(auVar75 >> 0x4f,0) & 1) != 0) || (SUB161(auVar75 >> 0x57,0) & 1) != 0) ||
             (SUB161(auVar75 >> 0x5f,0) & 1) != 0) || (SUB161(auVar75 >> 0x67,0) & 1) != 0) ||
           (SUB161(auVar75 >> 0x6f,0) & 1) != 0) || (SUB161(auVar75 >> 0x77,0) & 1) != 0) ||
          auVar75[0xf] < '\0') goto LAB_140809ddb;
      uVar39 = uVar39 + lVar59 + 0x10;
      lVar59 = lVar59 + 0x10;
    } while( true );
  }
LAB_14080bbaf:
  ppauVar62 = &pauStack_320;
  if (pauStack_3d0 != (undefined1 (*) [16])0x0) {
    pub_1406abac0((byte *)pauStack_3c0,(longlong)pauStack_3d0 << 3,8);
  }
  bVar28 = bStack_131;
  uVar48 = (ulonglong)bStack_131;
  if (lStack_408 != 0) {
    pub_1406abac0(pbStack_400,lStack_408 << 4,4);
  }
  if (bVar28 != 0) {
    plVar42 = (longlong *)pdb_140e97000();
    if (((char)plVar42[0xd] != '\x01') &&
       (plVar42 = (longlong *)pdb_142dd9610(plVar42,0), plVar42 == (longlong *)0x0))
    goto LAB_14080bd60;
    if (*plVar42 != 0) {
LAB_14080bd41:
      pauVar33 = (undefined1 (*) [16])pdb_142dc8090(&UNK_1433079b0);
LAB_14080bd4d:
      pauVar33 = (undefined1 (*) [16])pdb_142dd9610(pauVar33,0);
      if (pauVar33 == (undefined1 (*) [16])0x0) {
LAB_14080bd60:
        pdb_142dc7890(&UNK_143307940);
LAB_14080bd6c:
        uStack_109 = 1;
                    /* WARNING: Subroutine does not return */
        pdb_142dc7e11(8,0x20);
      }
      goto LAB_140808ae6;
    }
    *plVar42 = -1;
    pauStack_168 = (undefined1 (*) [16])plVar42;
    pdb_140e95370(plVar42 + 1);
    *(longlong *)pauStack_168 = *(longlong *)pauStack_168 + 1;
  }
  return;
}

