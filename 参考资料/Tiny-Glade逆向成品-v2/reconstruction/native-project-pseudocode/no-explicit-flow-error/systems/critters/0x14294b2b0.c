// VA 0x14294b2b0, PDB extent 10371 bytes
// system_critters::duck::plan_duck_trajectories
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/critters/src/duck.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: system_critters::duck::plan_duck_trajectories
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/critters/src/duck.rs
   Extent: 10371 */

void pdb_14294b2b0(byte **param_1,byte **param_2,byte *param_3,byte **param_4,undefined8 *param_5,
                  undefined8 *param_6,byte **param_7,undefined8 param_8,undefined8 param_9,
                  undefined8 *param_10)

{
  uint *puVar1;
  undefined8 uVar2;
  byte bVar3;
  byte bVar4;
  longlong lVar5;
  float *pfVar6;
  byte *pbVar7;
  byte **ppbVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  float fVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  undefined8 uVar22;
  char cVar23;
  uint uVar24;
  longlong lVar25;
  ulonglong uVar26;
  longlong *plVar27;
  byte *pbVar28;
  int *piVar29;
  byte *pbVar30;
  byte **ppbVar31;
  ulonglong *puVar32;
  byte bVar33;
  uint *puVar34;
  undefined8 *puVar35;
  undefined4 *puVar36;
  ulonglong uVar37;
  float fVar38;
  longlong lVar39;
  undefined4 *puVar40;
  byte **unaff_RDI;
  undefined *puVar41;
  undefined *puVar42;
  byte *pbVar43;
  longlong lVar44;
  longlong lVar45;
  byte **unaff_R12;
  code *pcVar46;
  byte **unaff_R15;
  undefined4 uVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  float fVar56;
  undefined4 uStack_678;
  undefined4 uStack_674;
  undefined4 uStack_670;
  undefined4 uStack_66c;
  undefined4 uStack_658;
  undefined4 uStack_654;
  undefined4 uStack_650;
  undefined4 uStack_64c;
  undefined8 uStack_648;
  float fStack_640;
  float fStack_63c;
  float fStack_638;
  float fStack_634;
  byte *pbStack_548;
  byte *pbStack_540;
  byte *pbStack_538;
  byte *pbStack_4b8;
  longlong lStack_4b0;
  byte *pbStack_4a8;
  float fStack_45c;
  float fStack_448;
  float fStack_444;
  undefined8 uStack_440;
  undefined8 uStack_438;
  undefined8 uStack_430;
  float fStack_428;
  undefined4 uStack_424;
  undefined4 uStack_420;
  undefined4 uStack_41c;
  int iStack_418;
  longlong lStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined4 uStack_320;
  undefined8 uStack_31c;
  undefined4 uStack_314;
  undefined8 uStack_308;
  undefined4 uStack_300;
  undefined4 uStack_2fc;
  undefined4 uStack_2f8;
  undefined4 uStack_2f4;
  undefined1 auStack_2f0 [16];
  undefined4 uStack_2e0;
  undefined4 uStack_2dc;
  undefined4 uStack_2d8;
  undefined4 uStack_2d4;
  byte **ppbStack_2d0;
  undefined4 uStack_2c8;
  undefined8 uStack_2b8;
  undefined4 uStack_2b0;
  undefined4 uStack_2ac;
  undefined4 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined4 uStack_290;
  undefined1 uStack_28c;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined4 uStack_270;
  undefined8 uStack_26c;
  undefined4 uStack_264;
  longlong lStack_258;
  undefined8 uStack_250;
  byte **ppbStack_248;
  byte **ppbStack_240;
  byte **ppbStack_238;
  byte *pbStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  ulonglong uStack_218;
  ulonglong uStack_210;
  ulonglong uStack_208;
  ulonglong uStack_200;
  ulonglong uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  ulonglong uStack_1e0;
  ulonglong uStack_1d8;
  ulonglong uStack_1d0;
  ulonglong uStack_1c8;
  ulonglong uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a4;
  undefined8 uStack_198;
  byte **ppbStack_190;
  undefined8 uStack_188;
  byte *pbStack_180;
  byte **ppbStack_178;
  undefined8 uStack_170;
  float fStack_168;
  byte **ppbStack_160;
  byte *pbStack_158;
  undefined8 uStack_150;
  byte *pbStack_148;
  longlong lStack_140;
  byte **ppbStack_138;
  byte **ppbStack_130;
  byte **ppbStack_128;
  undefined4 uStack_11c;
  byte **ppbStack_118;
  byte **ppbStack_110;
  byte **ppbStack_108;
  byte *pbStack_100;
  char cStack_f2;
  undefined1 uStack_f1;
  undefined8 uStack_f0;
  
  uStack_f0 = 0xfffffffffffffffe;
  if (*_DAT_143ca4500 != '\0') {
    return;
  }
  ppbStack_118 = param_4;
  cStack_f2 = pdb_140e94b40();
  if (cStack_f2 == '\0') goto LAB_14294b538;
  unaff_R15 = (byte **)&UNK_143600cd0;
  pcVar46 = (code *)0x2d;
  uVar37 = 0x2d;
  lVar25 = pdb_14294fbb0(&UNK_143600cd0);
  if (lVar25 == 1) {
    if (0x2d < uVar37) {
LAB_14294cc81:
      pdb_142dc8070(&UNK_143600cd0,0x2d,0);
LAB_14294cca2:
                    /* WARNING: Subroutine does not return */
      pdb_142dc8150(&UNK_143600ac8);
    }
    unaff_R15 = (byte **)&UNK_143600cd0;
    uVar26 = pdb_14294fbb0(&UNK_143600cd0);
    if ((uVar26 & 1) != 0) {
      if (0x2d < uVar37 + 2) {
        pdb_142dc8070(&UNK_143600cd0,0x2d,uVar37 + 2,0x2d,&UNK_143600dd0);
        pcVar46 = (code *)swi(3);
        (*pcVar46)();
        return;
      }
      pcVar46 = (code *)(0x2b - uVar37);
      unaff_R15 = (byte **)(&UNK_143600cd2 + uVar37);
    }
  }
  puVar41 = &UNK_143600a6b;
  unaff_R12 = (byte **)&UNK_143600a48;
  do {
    bVar33 = puVar41[-1];
    uVar24 = (uint)(char)bVar33;
    if ((char)bVar33 < '\0') {
      bVar3 = puVar41[-2];
      if ((char)bVar3 < -0x40) {
        bVar4 = puVar41[-3];
        if ((char)bVar4 < -0x40) {
          pbVar28 = puVar41 + -4;
          puVar41 = puVar41 + -4;
          uVar24 = bVar4 & 0x3f | (*pbVar28 & 7) << 6;
        }
        else {
          puVar41 = puVar41 + -3;
          uVar24 = bVar4 & 0xf;
        }
        uVar24 = bVar3 & 0x3f | uVar24 << 6;
      }
      else {
        puVar41 = puVar41 + -2;
        uVar24 = bVar3 & 0x1f;
      }
      uVar24 = (uint)(bVar33 & 0x3f) | uVar24 << 6;
      if (uVar24 != 0x5c) goto LAB_14294b4a4;
LAB_14294b4b5:
      puVar42 = puVar41 + -0x143600a47;
      if ((undefined *)0x23 < puVar42) {
        pdb_142dc8070(&UNK_143600a48,0x23,puVar42,0x23,&UNK_143600d98);
        goto LAB_14294cc81;
      }
      unaff_RDI = (byte **)(0x23 - (longlong)puVar42);
      unaff_R12 = (byte **)(puVar41 + 1);
      goto LAB_14294b4d7;
    }
    puVar41 = puVar41 + -1;
    if (uVar24 == 0x5c) goto LAB_14294b4b5;
LAB_14294b4a4:
    if (uVar24 == 0x2f) goto LAB_14294b4b5;
  } while (puVar41 != &UNK_143600a48);
  unaff_RDI = (byte **)0x23;
LAB_14294b4d7:
  plVar27 = (longlong *)pdb_140e97000();
  if ((char)plVar27[0xd] != '\x01') goto LAB_14294cbe2;
  do {
    if (*plVar27 == 0) {
      *plVar27 = -1;
      ppbStack_110 = (byte **)plVar27;
      uStack_150 = pdb_140e94f10(plVar27 + 1,unaff_R15,pcVar46,unaff_R12,unaff_RDI,1,0);
      *ppbStack_110 = (byte *)((longlong)*ppbStack_110 + 1);
LAB_14294b538:
      *(undefined4 *)param_6[2] = *(undefined4 *)((longlong)param_6 + 0x1c);
      ppbStack_108 = (byte **)*param_6;
      ppbStack_110 = *(byte ***)param_3;
      cVar23 = pdb_140a31b60();
      if (cVar23 != '\0') {
        fStack_448 = 4.34403e-44;
        cVar23 = pdb_14229b8c0(*param_1 + 0x20,&fStack_448);
        if (cVar23 != '\0') {
          pdb_140a8e090(&uStack_170,*param_2);
          pdb_14007ee60();
          pbVar28 = pub_1406abab0(0xc,4);
          unaff_RDI = ppbStack_108;
          fVar38 = fStack_168;
          if (pbVar28 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
            pdb_142dc7e11(4,0xc);
          }
          *(float *)(pbVar28 + 8) = fStack_168;
          *(undefined8 *)pbVar28 = uStack_170;
          fVar50 = _DAT_142e36f34;
          pbStack_548 = (byte *)0x1;
          fVar51 = (float)uStack_170;
          uVar37 = (ulonglong)uStack_170 >> 0x20;
          unaff_R12 = &pbStack_548;
          pbStack_538 = (byte *)0x1;
          pbStack_540 = pbVar28;
          while (pbStack_100 = pbStack_538, pbStack_538 < (byte *)0x3) {
            auVar9._8_8_ = 0;
            auVar9._0_8_ = *unaff_RDI;
            pbVar28 = SUB168(auVar9 * ZEXT816(0x4385df649fccf645),0);
            pbVar43 = (byte *)((longlong)unaff_RDI[1] * 0x4385df649fccf645 +
                              SUB168(auVar9 * ZEXT816(0x4385df649fccf645),8) +
                              (longlong)*unaff_RDI * 0x2360ed051fc65da4);
            unaff_RDI[1] = pbVar43;
            uVar26 = (ulonglong)pbVar43 ^ (ulonglong)pbVar28;
            bVar33 = (byte)((ulonglong)pbVar43 >> 0x3a);
            *unaff_RDI = pbVar28;
            fVar48 = (float)(((uint)(uVar26 >> bVar33) | (uint)(uVar26 << 0x40 - bVar33)) >> 9 |
                            0x3f800000) + fVar50;
            uVar47 = pdb_140de8230((float)(longlong)pbStack_538);
            uStack_648 = (byte *)CONCAT44(fVar48,uVar47);
            pdb_140df4520(&fStack_448,&uStack_648);
            fVar18 = fStack_444;
            fVar48 = fStack_448;
            pbVar28 = pbStack_538;
            fVar53 = (float)uStack_440 + fVar38;
            if (pbStack_538 == pbStack_548) {
              pdb_142db7820(unaff_R12);
            }
            *(ulonglong *)(pbStack_540 + (longlong)pbVar28 * 0xc) =
                 CONCAT44(fVar18 + (float)uVar37,fVar48 + fVar51);
            *(float *)(pbStack_540 + (longlong)pbVar28 * 0xc + 8) = fVar53;
            pbStack_538 = pbVar28 + 1;
          }
          uStack_430 = (byte **)(pbStack_540 + (longlong)pbStack_538 * 0xc);
          fStack_448 = SUB84(pbStack_540,0);
          fStack_444 = (float)((ulonglong)pbStack_540 >> 0x20);
          uStack_438 = (byte **)pbStack_548;
          uStack_440._0_4_ = fStack_448;
          uStack_440._4_4_ = fStack_444;
          pdb_142298d50(&uStack_648,&fStack_448);
          auVar10._8_8_ = 0;
          auVar10._0_8_ = *unaff_RDI;
          pbVar28 = SUB168(auVar10 * ZEXT816(0x4385df649fccf645),0);
          pbVar43 = (byte *)((longlong)unaff_RDI[1] * 0x4385df649fccf645 +
                            SUB168(auVar10 * ZEXT816(0x4385df649fccf645),8) +
                            (longlong)*unaff_RDI * 0x2360ed051fc65da4);
          *unaff_RDI = pbVar28;
          unaff_RDI[1] = pbVar43;
          uVar37 = (ulonglong)pbVar43 ^ (ulonglong)pbVar28;
          bVar33 = (byte)((ulonglong)pbVar43 >> 0x3a);
          fVar38 = _DAT_142e36f28;
          uVar47 = pdb_140de9510((float)(((uint)(uVar37 >> bVar33) | (uint)(uVar37 << 0x40 - bVar33)
                                         ) >> 9 | 0x3f800000) + _DAT_142e36f34);
          uStack_438 = (byte **)CONCAT44(fStack_634,fStack_638);
          fStack_448 = SUB84(uStack_648,0);
          fStack_444 = (float)((ulonglong)uStack_648 >> 0x20);
          uStack_440._0_4_ = fStack_640;
          uStack_440._4_4_ = fStack_63c;
          uStack_430 = (byte **)CONCAT44(fVar38,uVar47);
          fStack_428 = 0.0;
          uStack_420 = 0;
          param_3 = unaff_RDI[4];
          if (param_3 == unaff_RDI[2]) {
            pdb_142d7e7c0(unaff_RDI + 2);
          }
          pbVar43 = unaff_RDI[3];
          lVar25 = (longlong)param_3 * 0x30;
          auVar16._4_4_ = uStack_424;
          auVar16._0_4_ = fStack_428;
          auVar16._8_4_ = uStack_420;
          auVar16._12_4_ = uStack_41c;
          *(undefined1 (*) [16])(pbVar43 + lVar25 + 0x20) = auVar16;
          pbVar28 = pbVar43 + lVar25 + 0x10;
          *(undefined4 *)pbVar28 = (undefined4)uStack_438;
          *(undefined4 *)(pbVar28 + 4) = uStack_438._4_4_;
          *(float *)(pbVar28 + 8) = (float)uStack_430;
          *(float *)(pbVar28 + 0xc) = uStack_430._4_4_;
          *(ulonglong *)(pbVar43 + lVar25) = CONCAT44(fStack_444,fStack_448);
          *(byte ***)(pbVar43 + lVar25 + 8) = uStack_440;
          param_3 = param_3 + 1;
          unaff_RDI[4] = param_3;
          unaff_R15 = (byte **)&uStack_648;
        }
      }
      cVar23 = pdb_140a31b60();
      if (cVar23 == '\0') {
        ppbStack_128 = (byte **)*param_7;
        param_1 = ppbStack_108;
      }
      else {
        fStack_448 = 5.46506e-44;
        cVar23 = pdb_14229b8c0(*param_1 + 0x20,&fStack_448);
        ppbStack_128 = (byte **)*param_7;
        param_1 = ppbStack_108;
        if (cVar23 != '\0') {
          pbStack_100 = param_7[1];
          puVar34 = (uint *)ppbStack_128[0x1f];
          puVar1 = puVar34 + (longlong)ppbStack_128[0x20];
          ppbStack_160 = ppbStack_108 + 2;
          ppbStack_138 = (byte **)ppbStack_108[3];
          lStack_140 = (longlong)ppbStack_108[4] * 0x30;
          lVar25 = 0;
          lVar44 = 8;
          uVar24 = 0;
          lVar39 = 0;
          unaff_R12 = (byte **)0x0;
          unaff_R15 = (byte **)0x8;
          do {
            if (*(char *)(ppbStack_128 + 0x21) == '\0') {
              if (uVar24 == (uint)lVar25) {
                if (puVar34 == puVar1) break;
                param_3 = *(byte **)(pbStack_100 + 0x100);
                while( true ) {
                  uVar37 = (ulonglong)*puVar34;
                  lVar25 = *(longlong *)(param_3 + (uVar37 * 0x14 + 0xb) * 8);
                  if (lVar25 != 0) break;
                  puVar34 = puVar34 + 1;
                  unaff_R15 = ppbStack_128;
                  if (puVar34 == puVar1) goto LAB_14294bb55;
                }
                uVar26 = (ulonglong)*(uint *)(param_3 + uVar37 * 0xa0 + 0x94);
                lVar45 = *(longlong *)(pbStack_100 + 0x1a0);
                lVar39 = lVar45 + uVar26 * 0x48;
                lVar5 = *(longlong *)(lVar45 + 0x38 + uVar26 * 0x48);
                if (ppbStack_128[0x22] < *(byte **)(lVar45 + 0x40 + uVar26 * 0x48)) {
                  uVar26 = *(ulonglong *)(lVar5 + (longlong)ppbStack_128[0x22] * 8);
                  lVar39 = *(longlong *)(lVar39 + 0x18);
                  if (uVar26 == 0) goto LAB_14294ba67;
                  unaff_R12 = *(byte ***)(lVar39 + 0x10 + ~uVar26 * 0x30);
                }
                else {
                  lVar39 = *(longlong *)(lVar39 + 0x18);
LAB_14294ba67:
                  unaff_R12 = (byte **)0x0;
                }
                puVar34 = puVar34 + 1;
                lVar39 = *(longlong *)
                          (lVar39 + 0x10 +
                          ~*(ulonglong *)(lVar5 + (longlong)ppbStack_128[0x24] * 8) * 0x30);
                unaff_R15 = *(byte ***)(param_3 + (uVar37 * 0x14 + 10) * 8);
                uVar24 = 0;
                uVar37 = 0;
              }
              else {
                uVar37 = (ulonglong)uVar24;
              }
              ppbVar31 = unaff_R15 + uVar37 * 2;
              uVar37 = (ulonglong)~*(uint *)(unaff_R15 + uVar37 * 2 + 1);
            }
            else {
              if (uVar24 == (uint)lVar25) {
                if (puVar34 == puVar1) break;
                while( true ) {
                  lVar25 = *(longlong *)
                            (*(longlong *)(pbStack_100 + 0x1a0) + 0x10 + (ulonglong)*puVar34 * 0x48)
                  ;
                  if (lVar25 != 0) break;
                  puVar34 = puVar34 + 1;
                  unaff_RDI = ppbStack_128;
                  if (puVar34 == puVar1) goto LAB_14294bb55;
                }
                lVar44 = *(longlong *)(pbStack_100 + 0x1a0) + (ulonglong)*puVar34 * 0x48;
                if (ppbStack_128[0x22] < *(byte **)(lVar44 + 0x40)) {
                  uVar37 = *(ulonglong *)
                            (*(longlong *)(lVar44 + 0x38) + (longlong)ppbStack_128[0x22] * 8);
                  lVar39 = *(longlong *)(lVar44 + 0x18);
                  if (uVar37 == 0) goto LAB_14294ba32;
                  unaff_R12 = *(byte ***)(lVar39 + 0x10 + ~uVar37 * 0x30);
                }
                else {
                  lVar39 = *(longlong *)(lVar44 + 0x18);
LAB_14294ba32:
                  unaff_R12 = (byte **)0x0;
                }
                puVar34 = puVar34 + 1;
                lVar39 = *(longlong *)
                          (lVar39 + 0x10 +
                          ~*(ulonglong *)
                            (*(longlong *)(lVar44 + 0x38) + (longlong)ppbStack_128[0x24] * 8) * 0x30
                          );
                lVar44 = *(longlong *)(lVar44 + 8);
                uVar24 = 0;
              }
              uVar37 = (ulonglong)uVar24;
              ppbVar31 = (byte **)(lVar44 + uVar37 * 8);
            }
            unaff_RDI = unaff_R12 + uVar37 * 6;
            param_3 = *ppbVar31;
            fVar38 = SUB84(param_3,0);
            if (fVar38 == 0.0) break;
            uVar24 = uVar24 + 1;
            if ((*(char *)(uVar37 + lVar39) == '\x02') &&
               (ppbVar31 = ppbStack_138, lVar45 = lStack_140,
               *(float *)(unaff_RDI + 3) * *(float *)(unaff_RDI + 3) +
               *(float *)(unaff_RDI + 2) * *(float *)(unaff_RDI + 2) <= _DAT_1436008a4)) {
              do {
                if (lVar45 == 0) {
                  ppbStack_130 = unaff_R15;
                  pdb_14007ee60();
                  unaff_R15 = (byte **)pub_1406abab0(0x20,8);
                  if (unaff_R15 == (byte **)0x0) goto LAB_14294cc33;
                  pdb_14007ee60();
                  puVar32 = (ulonglong *)pub_1406abab0(0xc,4);
                  param_1 = ppbStack_108;
                  if (puVar32 == (ulonglong *)0x0) {
                    ppbStack_110 = unaff_R15;
                    /* WARNING: Subroutine does not return */
                    pdb_142dc7e11(4,0xc);
                  }
                  pbVar28 = unaff_RDI[2];
                  *(undefined4 *)(puVar32 + 1) = *(undefined4 *)(unaff_RDI + 3);
                  *puVar32 = (ulonglong)pbVar28;
                  *unaff_R15 = (byte *)0x1;
                  unaff_R15[1] = (byte *)puVar32;
                  unaff_R15[2] = (byte *)0x1;
                  *(undefined1 *)(unaff_R15 + 3) = 0;
                  uStack_648 = (byte *)0x1;
                  fStack_640 = SUB84(unaff_R15,0);
                  fStack_63c = (float)((ulonglong)unaff_R15 >> 0x20);
                  fStack_638 = 1.4013e-45;
                  fStack_634 = 0.0;
                  auVar14._8_8_ = 0;
                  auVar14._0_8_ = *ppbStack_108;
                  pbVar28 = SUB168(auVar14 * ZEXT816(0x4385df649fccf645),0);
                  pbVar43 = (byte *)((longlong)ppbStack_108[1] * 0x4385df649fccf645 +
                                    SUB168(auVar14 * ZEXT816(0x4385df649fccf645),8) +
                                    (longlong)*ppbStack_108 * 0x2360ed051fc65da4);
                  *ppbStack_108 = pbVar28;
                  ppbStack_108[1] = pbVar43;
                  uVar37 = (ulonglong)pbVar43 ^ (ulonglong)pbVar28;
                  bVar33 = (byte)((ulonglong)pbVar43 >> 0x3a);
                  fVar50 = _DAT_142e36f28;
                  uVar47 = pdb_140de9510((float)(((uint)(uVar37 >> bVar33) |
                                                 (uint)(uVar37 << 0x40 - bVar33)) >> 9 | 0x3f800000)
                                         + _DAT_142e36f34);
                  uStack_438 = (byte **)CONCAT44(fStack_634,fStack_638);
                  fStack_448 = SUB84(uStack_648,0);
                  fStack_444 = (float)((ulonglong)uStack_648 >> 0x20);
                  uStack_440._0_4_ = fStack_640;
                  uStack_440._4_4_ = fStack_63c;
                  uStack_430 = (byte **)CONCAT44(fVar50,uVar47);
                  uStack_424 = (undefined4)((ulonglong)param_3 >> 0x20);
                  uStack_420 = 0;
                  param_3 = param_1[4];
                  fStack_428 = fVar38;
                  if (param_3 == param_1[2]) {
                    pdb_142d7e7c0(ppbStack_160);
                  }
                  pbVar43 = param_1[3];
                  lVar25 = (longlong)param_3 * 0x30;
                  auVar15._4_4_ = fStack_444;
                  auVar15._0_4_ = fStack_448;
                  auVar15._8_4_ = (float)uStack_440;
                  auVar15._12_4_ = uStack_440._4_4_;
                  auVar17._4_4_ = uStack_424;
                  auVar17._0_4_ = fStack_428;
                  auVar17._8_4_ = uStack_420;
                  auVar17._12_4_ = uStack_41c;
                  *(undefined1 (*) [16])(pbVar43 + lVar25 + 0x20) = auVar17;
                  pbVar28 = pbVar43 + lVar25 + 0x10;
                  *(undefined4 *)pbVar28 = (undefined4)uStack_438;
                  *(undefined4 *)(pbVar28 + 4) = uStack_438._4_4_;
                  *(float *)(pbVar28 + 8) = (float)uStack_430;
                  *(float *)(pbVar28 + 0xc) = uStack_430._4_4_;
                  *(undefined1 (*) [16])(pbVar43 + lVar25) = auVar15;
                  param_3 = param_3 + 1;
                  param_1[4] = param_3;
                  unaff_RDI = unaff_RDI + 2;
                  goto LAB_14294bb55;
                }
                ppbVar8 = ppbVar31 + 4;
                ppbVar31 = ppbVar31 + 6;
                lVar45 = lVar45 + -0x30;
              } while ((param_3 != *ppbVar8) || (((ulonglong)*ppbVar8 & 0xffffffff) == 0));
            }
          } while( true );
        }
      }
LAB_14294bb55:
      fVar18 = _DAT_1436008a8;
      fVar48 = _DAT_142e37ad4;
      fVar51 = _UNK_142e36f64;
      fVar50 = _DAT_142e36f60;
      fVar38 = _DAT_142e36f28;
      ppbStack_178 = param_1 + 2;
      ppbStack_130 = (byte **)param_1[3];
      ppbStack_190 = ppbStack_130 + (longlong)param_1[4] * 6;
      pbStack_158 = param_7[1];
      uStack_11c = *(undefined4 *)((longlong)param_7 + 0x14);
      uStack_188 = *param_5;
      pbStack_180 = *ppbStack_118;
      ppbStack_160 = (byte **)*param_10;
      pcVar46 = (code *)param_7;
LAB_14294bc10:
      param_2 = ppbStack_130;
      if (ppbStack_130 != ppbStack_190) {
        ppbVar31 = ppbStack_130 + 4;
        ppbStack_130 = ppbStack_130 + 6;
        pcVar46 = pdb_14294fb10;
        if (*(int *)ppbVar31 == 0) {
          pcVar46 = pdb_14294fb60;
        }
        uVar47 = 0x14;
        if (*(int *)ppbVar31 == 0) {
          uVar47 = 1;
        }
        ppbStack_118 = (byte **)CONCAT44(ppbStack_118._4_4_,uVar47);
        pbStack_100 = (byte *)((ulonglong)pbStack_100 & 0xffffffff00000000);
LAB_14294bc79:
        do {
          if ((uint)ppbStack_118 <= (uint)pbStack_100) goto LAB_14294bc10;
          pbStack_100 = (byte *)CONCAT44(pbStack_100._4_4_,(uint)pbStack_100 + 1);
          unaff_RDI = (byte **)param_2[1];
          pbVar28 = param_2[2];
          unaff_R15 = unaff_RDI + (longlong)pbVar28 * 4;
          param_1 = (byte **)CONCAT71((int7)((ulonglong)param_1 >> 8),1);
          param_3 = (byte *)0x0;
          for (; unaff_RDI != unaff_R15; unaff_RDI = unaff_RDI + 4) {
            if (*(char *)(unaff_RDI + 3) == '\0') {
              pbVar43 = unaff_RDI[2];
              if (pbVar43 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
                pdb_142dc81f2(0,0,&UNK_143600ae0);
              }
              pfVar6 = (float *)unaff_RDI[1];
              if (pbVar43 == (byte *)0x1) {
                fStack_448 = *pfVar6 + SUB84(param_2[3],0) * fVar50;
                fStack_444 = pfVar6[2] + (float)((ulonglong)param_2[3] >> 0x20) * fVar51;
                (*pcVar46)();
                pdb_140df4540(&uStack_1a4,&fStack_448);
                pbVar43 = unaff_RDI[2];
                if (pbVar43 == *unaff_RDI) {
                  pdb_142db7820(unaff_RDI);
                  puVar35 = &uStack_1a4;
                }
                else {
                  puVar35 = &uStack_1a4;
                }
              }
              else {
                fVar53 = ((float)param_3 / (float)(longlong)pbVar28) * fVar48 + fVar18;
                fVar49 = fVar38 - fVar53;
                fVar56 = pfVar6[(longlong)pbVar43 * 3 + -6] * fVar49 +
                         (float)((ulonglong)*(undefined8 *)(pfVar6 + (longlong)pbVar43 * 3 + -4) >>
                                0x20) * fVar53;
                fVar53 = pfVar6[(longlong)pbVar43 * 3 + -1] * fVar53 +
                         (float)*(undefined8 *)(pfVar6 + (longlong)pbVar43 * 3 + -4) * fVar49;
                uStack_198 = CONCAT44(fVar53,fVar56);
                if (unaff_RDI[2] == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
                  pdb_142dc81f2(0,0,&UNK_143600af8);
                }
                fVar56 = *(float *)unaff_RDI[1] - fVar56;
                fVar53 = *(float *)((longlong)unaff_RDI[1] + 8) - fVar53;
                (*pcVar46)(SQRT(fVar53 * fVar53 + fVar56 * fVar56));
                pdb_140df4540(&uStack_1b0,&uStack_198);
                pbVar43 = unaff_RDI[2];
                if (pbVar43 == *unaff_RDI) {
                  pdb_142db7820(unaff_RDI);
                  puVar35 = &uStack_1b0;
                }
                else {
                  puVar35 = &uStack_1b0;
                }
              }
              pbVar30 = unaff_RDI[1];
              *(undefined4 *)(pbVar30 + (longlong)pbVar43 * 0xc + 8) = *(undefined4 *)(puVar35 + 1);
              *(undefined8 *)(pbVar30 + (longlong)pbVar43 * 0xc) = *puVar35;
              ppbVar31 = (byte **)(pbVar43 + 1);
              unaff_RDI[2] = (byte *)ppbVar31;
              unaff_R12 = (byte **)(pbVar43 + -1);
              if (ppbVar31 <= unaff_R12) {
                    /* WARNING: Subroutine does not return */
                pdb_142dc81f2(unaff_R12,ppbVar31,&UNK_143600b10);
              }
              pbVar7 = unaff_RDI[1];
              fVar53 = *(float *)(pbVar7 + (longlong)unaff_R12 * 0xc + 8);
              pbVar30 = *(byte **)(pbVar7 + (longlong)unaff_R12 * 0xc);
              fVar49 = (float)((ulonglong)pbVar30 >> 0x20);
              uVar2 = *(undefined8 *)(pbVar7 + (longlong)pbVar43 * 0xc);
              fVar56 = *(float *)(pbVar7 + (longlong)pbVar43 * 0xc + 8);
              *(int *)(param_2 + 5) = *(int *)(param_2 + 5) + 1;
              if (ppbStack_110 != (byte **)0x0) {
                fVar54 = (float)uVar2 - SUB84(pbVar30,0);
                fVar55 = (float)((ulonglong)uVar2 >> 0x20) - fVar49;
                fVar56 = fVar56 - fVar53;
                uStack_648 = pbVar30;
                fStack_640 = fVar53;
                fStack_63c = fVar54;
                fStack_638 = fVar55;
                fStack_634 = fVar56;
                pdb_1409edc30(&fStack_448,ppbStack_110,&uStack_648);
                if (iStack_418 != 2) {
                  fVar49 = fVar49 - uStack_430._4_4_;
                  fVar52 = SUB84(pbVar30,0) - (float)uStack_430;
                  if ((fVar53 - fStack_428) * (fVar53 - fStack_428) +
                      fVar49 * fVar49 + fVar52 * fVar52 <=
                      fVar56 * fVar56 + fVar55 * fVar55 + fVar54 * fVar54) {
                    auVar11._8_8_ = 0;
                    auVar11._0_8_ = *ppbStack_108;
                    pbVar28 = SUB168(auVar11 * ZEXT816(0x4385df649fccf645),0);
                    pbVar43 = (byte *)((longlong)ppbStack_108[1] * 0x4385df649fccf645 +
                                      SUB168(auVar11 * ZEXT816(0x4385df649fccf645),8) +
                                      (longlong)*ppbStack_108 * 0x2360ed051fc65da4);
                    *ppbStack_108 = pbVar28;
                    ppbStack_108[1] = pbVar43;
                    uVar37 = (ulonglong)pbVar43 ^ (ulonglong)pbVar28;
                    bVar33 = (byte)((ulonglong)pbVar43 >> 0x3a);
                    fVar53 = fVar38;
                    uVar47 = pdb_140de9510((float)(((uint)(uVar37 >> bVar33) |
                                                   (uint)(uVar37 << 0x40 - bVar33)) >> 9 |
                                                  0x3f800000) + _DAT_142e36f34);
                    *(undefined4 *)(param_2 + 3) = uVar47;
                    *(float *)((longlong)param_2 + 0x1c) = fVar53;
                    if (param_2[2] != (byte *)0x0) {
                      pbVar28 = param_2[1];
                      lVar25 = (longlong)param_2[2] * 0x20;
                      uVar37 = lVar25 - 0x20;
                      pbVar43 = pbVar28;
                      if ((~(uint)uVar37 & 0x60) != 0) {
                        lVar44 = -(ulonglong)(((uint)(uVar37 >> 5) & 0x7ffffff) + 1 & 3);
                        do {
                          if (*(longlong *)(pbVar43 + 0x10) != 0) {
                            pbVar43[0x10] = 1;
                            pbVar43[0x11] = 0;
                            pbVar43[0x12] = 0;
                            pbVar43[0x13] = 0;
                            pbVar43[0x14] = 0;
                            pbVar43[0x15] = 0;
                            pbVar43[0x16] = 0;
                            pbVar43[0x17] = 0;
                          }
                          pbVar43[0x18] = 0;
                          pbVar43 = pbVar43 + 0x20;
                          lVar44 = lVar44 + 1;
                        } while (lVar44 != 0);
                      }
                      if (0x5f < uVar37) {
                        do {
                          if (*(longlong *)(pbVar43 + 0x10) != 0) {
                            pbVar43[0x10] = 1;
                            pbVar43[0x11] = 0;
                            pbVar43[0x12] = 0;
                            pbVar43[0x13] = 0;
                            pbVar43[0x14] = 0;
                            pbVar43[0x15] = 0;
                            pbVar43[0x16] = 0;
                            pbVar43[0x17] = 0;
                          }
                          pbVar43[0x18] = 0;
                          if (*(longlong *)(pbVar43 + 0x30) != 0) {
                            pbVar43[0x30] = 1;
                            pbVar43[0x31] = 0;
                            pbVar43[0x32] = 0;
                            pbVar43[0x33] = 0;
                            pbVar43[0x34] = 0;
                            pbVar43[0x35] = 0;
                            pbVar43[0x36] = 0;
                            pbVar43[0x37] = 0;
                          }
                          pbVar43[0x38] = 0;
                          if (*(longlong *)(pbVar43 + 0x50) != 0) {
                            pbVar43[0x50] = 1;
                            pbVar43[0x51] = 0;
                            pbVar43[0x52] = 0;
                            pbVar43[0x53] = 0;
                            pbVar43[0x54] = 0;
                            pbVar43[0x55] = 0;
                            pbVar43[0x56] = 0;
                            pbVar43[0x57] = 0;
                          }
                          pbVar43[0x58] = 0;
                          if (*(longlong *)(pbVar43 + 0x70) != 0) {
                            pbVar43[0x70] = 1;
                            pbVar43[0x71] = 0;
                            pbVar43[0x72] = 0;
                            pbVar43[0x73] = 0;
                            pbVar43[0x74] = 0;
                            pbVar43[0x75] = 0;
                            pbVar43[0x76] = 0;
                            pbVar43[0x77] = 0;
                          }
                          pbVar43[0x78] = 0;
                          pbVar43 = pbVar43 + 0x80;
                        } while (pbVar43 != pbVar28 + lVar25);
                      }
                    }
                    goto LAB_14294bc79;
                  }
                }
              }
              if ((byte *)0x1 < unaff_RDI[2]) {
                pbVar43 = unaff_RDI[1] + (longlong)unaff_RDI[2] * 0xc;
                if (pbVar43 == (byte *)0xc) {
                    /* WARNING: Subroutine does not return */
                  pdb_142dc8150(&UNK_143600b28);
                }
                if (_DAT_1436008a4 <
                    *(float *)(pbVar43 + -4) * *(float *)(pbVar43 + -4) +
                    *(float *)(pbVar43 + -0xc) * *(float *)(pbVar43 + -0xc)) {
                  *(undefined1 *)(unaff_RDI + 3) = 1;
                }
              }
            }
            param_3 = param_3 + 1;
            param_1 = (byte **)CONCAT71((int7)((ulonglong)param_1 >> 8),
                                        (byte)param_1 & *(byte *)(unaff_RDI + 3));
          }
        } while ((byte)param_1 == 0);
        if (*(int *)(param_2 + 4) == 0) {
          lStack_140 = pdb_140a2c590(uStack_188,&UNK_143600a6b,4);
          pdb_140a596f0(&uStack_220,pbStack_180,&UNK_143600a6f,0x23,&UNK_143600a98);
          ppbVar31 = (byte **)param_2[1];
          pbStack_230 = param_2[2];
          param_2[2] = (byte *)0x0;
          fVar53 = _DAT_142e36f34;
          param_1 = (byte **)((longlong)pbStack_230 * 0x20);
          ppbStack_240 = ppbVar31 + (longlong)pbStack_230 * 4;
          ppbStack_238 = param_2;
          uStack_228 = 0;
          pcVar46 = (code *)(ppbVar31 + 5);
          ppbStack_138 = ppbStack_240;
          while (param_1 = param_1 + -4, ppbVar31 != ppbStack_138) {
            unaff_R12 = ppbVar31 + 4;
            ppbVar8 = (byte **)*ppbVar31;
            ppbStack_248 = unaff_R12;
            if (SBORROW8(0,(longlong)ppbVar8)) {
              if (ppbStack_138 != unaff_R12) {
                uVar37 = (ulonglong)param_1 >> 5;
                pcVar46 = (code *)((longlong)pcVar46 + (longlong)param_2[1]);
                param_3 = (byte *)-(longlong)param_2[1];
                do {
                  if (*(longlong *)((longlong)((longlong)pcVar46 + -8) + (longlong)param_3) != 0) {
                    pub_1406abac0(*(byte **)((longlong)pcVar46 + (longlong)param_3),
                                  *(longlong *)
                                   ((longlong)((longlong)pcVar46 + -8) + (longlong)param_3) * 0xc,4)
                    ;
                  }
                  pcVar46 = (code *)((longlong)pcVar46 + 0x20);
                  uVar37 = uVar37 - 1;
                  param_1 = (byte **)0x0;
                } while (uVar37 != 0);
              }
              break;
            }
            pbStack_100 = ppbVar31[1];
            pbVar28 = ppbVar31[2];
            auVar12._8_8_ = 0;
            auVar12._0_8_ = *ppbStack_108;
            pbVar43 = SUB168(auVar12 * ZEXT816(0x4385df649fccf645),0);
            pbVar30 = (byte *)((longlong)ppbStack_108[1] * 0x4385df649fccf645 +
                              SUB168(auVar12 * ZEXT816(0x4385df649fccf645),8) +
                              (longlong)*ppbStack_108 * 0x2360ed051fc65da4);
            *ppbStack_108 = pbVar43;
            ppbStack_108[1] = pbVar30;
            uVar37 = (ulonglong)pbVar30 ^ (ulonglong)pbVar43;
            bVar33 = (byte)((ulonglong)pbVar30 >> 0x3a);
            ppbStack_118 = ppbVar8;
            pdb_1411630d0(&pbStack_548,ppbStack_160,
                          (float)(((uint)(uVar37 >> bVar33) | (uint)(uVar37 << 0x40 - bVar33)) >> 9
                                 | 0x3f800000) + fVar53);
            pbStack_4a8 = (byte *)0x0;
            if (pbStack_4b8 < pbVar28) {
              uStack_f1 = 1;
              pdb_142d7f1b0(&pbStack_4b8,0,pbVar28,4,0xc);
LAB_14294c53b:
              pbVar43 = pbStack_4a8;
              lVar25 = lStack_4b0;
              pub_142e32760(lStack_4b0 + (longlong)pbStack_4a8 * 0xc,pbStack_100,
                            (longlong)pbVar28 * 0xc);
            }
            else {
              if (pbVar28 != (byte *)0x0) goto LAB_14294c53b;
              pbVar43 = (byte *)0x0;
              lVar25 = lStack_4b0;
            }
            pbStack_4a8 = pbVar28 + (longlong)pbVar43;
            uVar37 = (ulonglong)pbStack_4a8 >> 1;
            if (uVar37 != 0) {
              puVar36 = (undefined4 *)(lVar25 + (longlong)pbStack_4a8 * 0xc + -4);
              puVar40 = (undefined4 *)(lVar25 + 8);
              do {
                uVar2 = *(undefined8 *)(puVar40 + -2);
                *(undefined8 *)(puVar40 + -2) = *(undefined8 *)(puVar36 + -2);
                *(undefined8 *)(puVar36 + -2) = uVar2;
                uVar47 = *puVar40;
                *puVar40 = *puVar36;
                *puVar36 = uVar47;
                puVar40 = puVar40 + 3;
                puVar36 = puVar36 + -3;
                uVar37 = uVar37 - 1;
              } while (uVar37 != 0);
            }
            auVar13._8_8_ = 0;
            auVar13._0_8_ = *ppbStack_108;
            pbVar28 = SUB168(auVar13 * ZEXT816(0x4385df649fccf645),0);
            pbVar43 = (byte *)((longlong)ppbStack_108[1] * 0x4385df649fccf645 +
                              SUB168(auVar13 * ZEXT816(0x4385df649fccf645),8) +
                              (longlong)*ppbStack_108 * 0x2360ed051fc65da4);
            ppbStack_108[1] = pbVar43;
            uVar37 = (ulonglong)pbVar43 ^ (ulonglong)pbVar28;
            bVar33 = (byte)((ulonglong)pbVar43 >> 0x3a);
            *ppbStack_108 = pbVar28;
            fStack_45c = ((float)(((uint)(uVar37 >> bVar33) | (uint)(uVar37 << 0x40 - bVar33)) >> 9
                                 | 0x3f800000) + fVar53) * _DAT_142e37ae0;
            pub_142e32760(&uStack_648,&pbStack_548,0x100);
            pdb_1408fd560(&lStack_258,lStack_140);
            LOCK();
            piVar29 = (int *)((uStack_218 & 0xffffffffffffffc0) + 0x10 +
                             (ulonglong)((uint)uStack_218 & 0x3f) * 4);
            *piVar29 = *piVar29 + 1;
            UNLOCK();
            if (uStack_210 != 0) {
              LOCK();
              piVar29 = (int *)((uStack_210 & 0xffffffffffffffc0) + 0x10 +
                               (ulonglong)((uint)uStack_210 & 0x3f) * 4);
              *piVar29 = *piVar29 + 1;
              UNLOCK();
            }
            if (uStack_208 != 0) {
              LOCK();
              piVar29 = (int *)((uStack_208 & 0xffffffffffffffc0) + 0x10 +
                               (ulonglong)((uint)uStack_208 & 0x3f) * 4);
              *piVar29 = *piVar29 + 1;
              UNLOCK();
            }
            if (uStack_200 != 0) {
              LOCK();
              piVar29 = (int *)((uStack_200 & 0xffffffffffffffc0) + 0x10 +
                               (ulonglong)((uint)uStack_200 & 0x3f) * 4);
              *piVar29 = *piVar29 + 1;
              UNLOCK();
            }
            if (uStack_1f8 != 0) {
              LOCK();
              piVar29 = (int *)((uStack_1f8 & 0xfffffffffffffffc) + 0x10 +
                               (ulonglong)((uint)uStack_1f8 & 3) * 4);
              *piVar29 = *piVar29 + 1;
              UNLOCK();
            }
            uStack_1e8 = uStack_220;
            uStack_1e0 = uStack_218;
            uStack_1d8 = uStack_210;
            uStack_1d0 = uStack_208;
            uStack_1c8 = uStack_200;
            uStack_1c0 = uStack_1f8;
            uStack_1b8 = uStack_1f0;
            unaff_RDI = (byte **)pdb_14007fac0();
            uVar22 = uStack_1b8;
            uVar21 = uStack_1c0;
            uVar20 = uStack_1c8;
            uVar19 = uStack_1d0;
            uVar26 = uStack_1d8;
            uVar37 = uStack_1e0;
            uVar2 = uStack_1e8;
            param_3 = (byte *)&lStack_348;
            lStack_348 = lStack_258;
            uStack_340 = uStack_250;
            uStack_320 = 0;
            uStack_328 = 0;
            uStack_270 = 0;
            uStack_278 = 0;
            unaff_R15 = (byte **)&fStack_448;
            pub_142e32760(unaff_R15,&pbStack_548,0x100);
            uStack_28c = 0;
            uStack_338 = _DAT_142e4e650;
            uStack_330 = _UNK_142e4e658;
            uStack_31c = 0x3f8000003f800000;
            uStack_314 = 0x3f800000;
            uStack_678 = (undefined4)uVar37;
            uStack_674 = (undefined4)(uVar37 >> 0x20);
            uStack_670 = (undefined4)uVar26;
            uStack_66c = (undefined4)(uVar26 >> 0x20);
            auStack_2f0._8_8_ = uVar20;
            auStack_2f0._0_8_ = uVar19;
            uStack_658 = (undefined4)uVar21;
            uStack_654 = (undefined4)(uVar21 >> 0x20);
            uStack_650 = (undefined4)uVar22;
            uStack_64c = (undefined4)((ulonglong)uVar22 >> 0x20);
            uStack_2e0 = uStack_658;
            uStack_2dc = uStack_654;
            uStack_2d8 = uStack_650;
            uStack_2d4 = uStack_64c;
            uStack_300 = uStack_678;
            uStack_2fc = uStack_674;
            uStack_2f8 = uStack_670;
            uStack_2f4 = uStack_66c;
            uStack_308 = uVar2;
            uStack_2a8 = 3;
            uStack_2c8 = 0;
            uStack_2b0 = 0;
            uStack_2b8 = 0;
            uStack_2ac = 0x3ecccccd;
            uStack_2a0 = 0;
            uStack_298 = 0;
            uStack_290 = 0x3f800000;
            uStack_288 = _DAT_142e4e650;
            uStack_280 = _UNK_142e4e658;
            uStack_26c = 0x3f8000003f800000;
            uStack_264 = 0x3f800000;
            uStack_f1 = 0;
            ppbStack_2d0 = unaff_RDI;
            pdb_14296c2c0(&uStack_648,param_9,unaff_R15,&UNK_143600ab0);
            if (ppbStack_118 != (byte **)0x0) {
              pub_1406abac0(pbStack_100,(longlong)ppbStack_118 * 0xc,4);
            }
            pcVar46 = (code *)((longlong)pcVar46 + 0x20);
            ppbVar31 = unaff_R12;
          }
          pdb_142256f70(&uStack_220);
        }
        else {
          uVar37 = (ulonglong)~(uint)param_2[4];
          if ((((uVar37 < *(ulonglong *)(pbStack_158 + 0x10)) &&
               (piVar29 = (int *)(uVar37 * 0x18 + *(longlong *)(pbStack_158 + 8)),
               piVar29[4] == (int)((ulonglong)param_2[4] >> 0x20))) && (*piVar29 != 0)) &&
             ((uVar37 = *(ulonglong *)(piVar29 + 2), (byte *)(uVar37 & 0xffffffff) < ppbStack_128[7]
              && ((*(ulonglong *)(ppbStack_128[5] + (uVar37 >> 6 & 0x3ffffff) * 8) >>
                   (uVar37 & 0x3f) & 1) != 0)))) {
            lVar25 = *(longlong *)
                      (*(longlong *)(pbStack_158 + 0x1a0) + 0x18 + (uVar37 >> 0x20) * 0x48);
            lVar44 = *(longlong *)
                      (*(longlong *)(pbStack_158 + 0x1a0) + 0x38 + (uVar37 >> 0x20) * 0x48);
            lVar45 = ~*(ulonglong *)(lVar44 + (longlong)ppbStack_128[0x23] * 8) * 0x30;
            lVar39 = *(longlong *)(lVar25 + 0x10 + lVar45);
            ppbStack_118 = *(byte ***)(lVar25 + 0x28 + lVar45);
            lVar44 = ~*(ulonglong *)(lVar44 + (longlong)ppbStack_128[0x24] * 8) * 0x30;
            ppbStack_138 = *(byte ***)(lVar25 + 0x10 + lVar44);
            lStack_140 = *(longlong *)(lVar25 + 0x28 + lVar44);
            param_3 = (byte *)(ulonglong)(uint)~piVar29[1];
            *(undefined4 *)((longlong)ppbStack_118 + (longlong)param_3 * 4) = uStack_11c;
            pcVar46 = (code *)param_2[1];
            param_1 = (byte **)param_2[2];
            param_2[2] = (byte *)0x0;
            unaff_R15 = (byte **)((longlong)param_1 * 0x20);
            ppbVar31 = (byte **)((longlong)pcVar46 + (longlong)param_1 * 4 * 8);
            fStack_428 = 0.0;
            uStack_424 = 0;
            fStack_448 = SUB84(pcVar46,0);
            fStack_444 = (float)((ulonglong)pcVar46 >> 0x20);
            uStack_438 = param_2;
            uStack_430 = param_1;
            uStack_440 = ppbVar31;
            if (param_1 == (byte **)0x0) goto LAB_14294cca2;
            uStack_440 = ppbVar31 + -4;
            pbVar28 = ppbVar31[-4];
            if (SBORROW8(0,(longlong)pbVar28)) goto LAB_14294cca2;
            unaff_R12 = (byte **)(lVar39 + (longlong)param_3 * 0x100);
            pbStack_100 = ppbVar31[-3];
            pbVar43 = ppbVar31[-2];
            unaff_R12[0x14] = (byte *)0x0;
            pbStack_148 = pbVar28;
            if (unaff_R12[0x12] < pbVar43) {
              pdb_142d7f1b0(lVar39 + (longlong)param_3 * 0x100 + 0x90,0,pbVar43,4,0xc);
              pbVar28 = unaff_R12[0x14];
LAB_14294c2ac:
              pbVar30 = pbVar28;
              pub_142e32760(unaff_R12[0x13] + (longlong)pbVar30 * 0xc,pbStack_100,
                            (longlong)pbVar43 * 0xc);
            }
            else {
              pbVar30 = (byte *)0x0;
              pbVar28 = (byte *)0x0;
              if (pbVar43 != (byte *)0x0) goto LAB_14294c2ac;
            }
            unaff_R12[0x14] = pbVar30 + (longlong)pbVar43;
            if (pbStack_148 != (byte *)0x0) {
              pub_1406abac0(pbStack_100,(longlong)pbStack_148 * 0xc,4);
            }
            unaff_RDI = ppbStack_118;
            if (param_1 != (byte **)0x1) {
              uVar37 = (ulonglong)(unaff_R15 + -4) >> 5;
              pcVar46 = (code *)((longlong)pcVar46 + 8);
              do {
                if (*(byte **)((longlong)pcVar46 + -8) != (byte *)0x0) {
                  pub_1406abac0(*(byte **)pcVar46,(longlong)*(byte **)((longlong)pcVar46 + -8) * 0xc
                                ,4);
                }
                pcVar46 = (code *)((longlong)pcVar46 + 0x20);
                uVar37 = uVar37 - 1;
                unaff_R15 = (byte **)0x0;
              } while (uVar37 != 0);
            }
            *(undefined4 *)((longlong)unaff_RDI + (longlong)param_3 * 4) = uStack_11c;
            uVar37 = (ulonglong)unaff_R12[0x14] >> 1;
            if (uVar37 != 0) {
              pbVar43 = unaff_R12[0x13] + (longlong)unaff_R12[0x14] * 0xc + -4;
              pbVar28 = unaff_R12[0x13] + 8;
              do {
                uVar2 = *(undefined8 *)(pbVar28 + -8);
                *(undefined8 *)(pbVar28 + -8) = *(undefined8 *)(pbVar43 + -8);
                *(undefined8 *)(pbVar43 + -8) = uVar2;
                uVar47 = *(undefined4 *)pbVar28;
                *(undefined4 *)pbVar28 = *(undefined4 *)pbVar43;
                *(undefined4 *)pbVar43 = uVar47;
                pbVar28 = pbVar28 + 0xc;
                pbVar43 = pbVar43 + -0xc;
                uVar37 = uVar37 - 1;
              } while (uVar37 != 0);
            }
            *(undefined4 *)((longlong)unaff_RDI + (longlong)param_3 * 4) = uStack_11c;
            *(undefined4 *)((longlong)unaff_R12 + 0xec) = 0x3f800000;
            *(undefined4 *)(lStack_140 + (longlong)param_3 * 4) = uStack_11c;
            *(byte *)((longlong)ppbStack_138 + (longlong)param_3) = 3;
          }
        }
        goto LAB_14294bc10;
      }
      pdb_142298b80(ppbStack_178);
      if (cStack_f2 == '\0') {
        return;
      }
      plVar27 = (longlong *)pdb_140e97000();
      if ((char)plVar27[0xd] != '\x01') {
        plVar27 = (longlong *)pdb_142e2d6a0(plVar27,0);
        if (plVar27 == (longlong *)0x0) break;
      }
      if (*plVar27 == 0) {
        *plVar27 = -1;
        ppbStack_110 = (byte **)plVar27;
        pdb_140e95370(plVar27 + 1);
        *ppbStack_110 = (byte *)((longlong)*ppbStack_110 + 1);
        return;
      }
    }
    plVar27 = (longlong *)pdb_142dc8090(&UNK_1436007f8);
LAB_14294cbe2:
    plVar27 = (longlong *)pdb_142e2d6a0(plVar27,0);
  } while (plVar27 != (longlong *)0x0);
  pdb_142dc7890(&UNK_143600788);
LAB_14294cc33:
                    /* WARNING: Subroutine does not return */
  pdb_142dc7e11(8,0x20);
}

