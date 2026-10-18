// VA 0x140b81310, PDB extent 22866 bytes
// country_core::systems::save::save_game::save_game
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/save/save_game.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: country_core::systems::save::save_game::save_game
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/save/save_game.rs
   Extent: 22866 */

void pdb_140b81310(undefined8 *param_1,byte *param_2,undefined8 *param_3,byte *param_4,
                  undefined8 *param_5,undefined8 *param_6)

{
  float fVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  byte bVar5;
  byte bVar6;
  ushort uVar7;
  undefined2 uVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  byte *pbVar12;
  undefined8 uVar13;
  longlong lVar14;
  code *pcVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  int iVar24;
  int iVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  char cVar30;
  byte bVar31;
  uint uVar32;
  int iVar33;
  longlong lVar34;
  ulonglong uVar35;
  longlong *plVar36;
  ulonglong uVar37;
  byte *pbVar38;
  float *pfVar39;
  uint *puVar40;
  byte bVar41;
  longlong lVar42;
  byte *pbVar43;
  undefined4 uVar44;
  float fVar45;
  byte *pbVar46;
  undefined8 *puVar47;
  undefined8 uVar48;
  undefined8 uVar49;
  ulonglong uVar50;
  byte *pbVar51;
  undefined *puVar52;
  undefined *puVar53;
  byte *pbVar54;
  float fVar55;
  byte *pbVar56;
  ulonglong uVar57;
  byte *pbVar58;
  byte *pbVar59;
  undefined4 *puVar60;
  bool bVar61;
  bool bVar62;
  bool bVar63;
  bool bVar64;
  bool bVar65;
  bool bVar66;
  bool bVar67;
  bool bVar68;
  float fVar69;
  float fVar70;
  byte *in_stack_fffffffffffffa58;
  int iStack_530;
  int iStack_52c;
  int iStack_528;
  int iStack_524;
  undefined8 uStack_520;
  undefined8 *puStack_518;
  undefined8 uStack_510;
  undefined8 uStack_508;
  int iStack_500;
  int iStack_4fc;
  undefined8 uStack_4f8;
  undefined8 uStack_4f0;
  undefined8 uStack_4e8;
  undefined8 uStack_4e0;
  undefined8 uStack_4d8;
  undefined8 uStack_4d0;
  undefined1 auStack_4c8 [16];
  undefined *puStack_4b8;
  undefined8 uStack_4b0;
  longlong lStack_4a8;
  undefined8 uStack_4a0;
  longlong lStack_498;
  undefined4 *puStack_490;
  int *piStack_488;
  undefined8 uStack_480;
  byte *pbStack_478;
  longlong lStack_470;
  longlong lStack_468;
  byte *pbStack_460;
  longlong lStack_458;
  undefined8 uStack_450;
  undefined8 uStack_448;
  undefined8 uStack_440;
  undefined8 uStack_438;
  undefined8 uStack_430;
  undefined8 uStack_428;
  float fStack_420;
  float fStack_41c;
  float fStack_418;
  float fStack_414;
  float fStack_410;
  float fStack_40c;
  float fStack_408;
  float fStack_404;
  float fStack_400;
  undefined7 uStack_3f8;
  int iStack_3f1;
  undefined4 uStack_3ec;
  float fStack_3e8;
  float fStack_3e4;
  uint uStack_3e0;
  float fStack_3dc;
  undefined8 uStack_3d8;
  undefined8 uStack_3d0;
  undefined8 uStack_3c8;
  undefined8 uStack_3c0;
  undefined *puStack_3b8;
  undefined8 uStack_3b0;
  undefined8 uStack_3a8;
  int iStack_3a0;
  undefined4 uStack_39c;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined *puStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined *puStack_2c8;
  byte *pbStack_2c0;
  undefined1 uStack_2b8;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  int iStack_1d0;
  int iStack_1cc;
  int iStack_1c8;
  int iStack_1c4;
  byte *pbStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  int iStack_198;
  int iStack_194;
  undefined4 uStack_190;
  int iStack_18c;
  byte *pbStack_188;
  undefined4 *puStack_180;
  byte *pbStack_178;
  byte *pbStack_170;
  byte *pbStack_168;
  ulonglong uStack_160;
  byte *pbStack_158;
  byte *pbStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  int iStack_134;
  byte *pbStack_130;
  byte *pbStack_128;
  byte *pbStack_120;
  undefined1 uStack_111;
  byte *pbStack_110;
  byte *pbStack_108;
  undefined1 uStack_fa;
  undefined1 uStack_f9;
  byte *pbStack_f8;
  undefined8 uStack_f0;
  
  uStack_f0 = 0xfffffffffffffffe;
  pbVar43 = (byte *)*param_1;
  pbStack_158 = (byte *)param_1[2];
  pbStack_150 = (byte *)CONCAT44(pbStack_150._4_4_,*(undefined4 *)((longlong)param_1 + 0x1c));
  uStack_160 = param_1[4];
  pbStack_f8 = (byte *)param_1[8];
  puVar60 = (undefined4 *)param_1[10];
  uVar44 = *(undefined4 *)((longlong)param_1 + 0x5c);
  lVar34 = param_1[0xc];
  pbVar12 = (byte *)param_1[0x45];
  lStack_470 = param_1[0x10];
  iVar16 = *(int *)(param_1 + 0x43);
  iVar17 = *(int *)((longlong)param_1 + 0x21c);
  iVar18 = *(int *)(param_1 + 0x44);
  iVar19 = *(int *)((longlong)param_1 + 0x224);
  lStack_468 = param_1[0x11];
  pbStack_128 = (byte *)param_1[0x13];
  pbStack_120 = (byte *)param_1[0x17];
  pbVar51 = (byte *)param_1[0x1b];
  uStack_450 = param_1[0x1f];
  uStack_448 = param_1[0x23];
  pbStack_460 = (byte *)param_1[0x27];
  puStack_490 = (undefined4 *)param_1[0x29];
  uStack_3ec = *(undefined4 *)((longlong)param_1 + 0x154);
  puStack_4b8 = (undefined *)param_1[0x2b];
  uStack_4f8 = param_1[0x2f];
  uStack_4e8 = param_1[0x33];
  uStack_430 = param_1[0x37];
  uStack_4d8 = param_1[0x3b];
  auStack_4c8._0_8_ = param_1[0x3f];
  pbStack_108 = (byte *)param_1[0x46];
  uStack_508 = param_1[0x4a];
  uStack_428 = *(undefined8 *)(param_2 + 0xe0);
  pbVar59 = *(byte **)(param_2 + 0x100);
  uStack_148 = *(longlong *)(param_2 + 0x120);
  uStack_140 = *(longlong *)(param_2 + 0x140);
  uStack_440 = *(undefined8 *)(param_2 + 0x160);
  uStack_438 = *(undefined8 *)(param_2 + 0x180);
  pbStack_130 = *(byte **)(param_2 + 0x1a0);
  lStack_498 = *(longlong *)(param_2 + 0x1a8);
  pbStack_168 = *(byte **)(param_2 + 0x1c8);
  piStack_488 = *(int **)(param_2 + 0x1d8);
  iStack_134 = *(int *)(param_2 + 0x1e4);
  pbVar58 = param_2;
  puStack_518 = param_3;
  pbStack_178 = param_4;
  cVar30 = pdb_140e94b40();
  lStack_458 = lVar34;
  if (cVar30 == '\0') {
    lStack_4a8 = 0;
    pbVar58 = pbVar43;
    pbVar43 = pbVar59;
    goto LAB_140b81719;
  }
  pbStack_170 = (byte *)CONCAT44(pbStack_170._4_4_,uVar44);
  pbStack_110 = (byte *)0x31;
  lVar34 = pdb_140b87ae0(0x31);
  pbVar46 = &UNK_14305d5e7;
  if (lVar34 == 1) {
    if ((byte *)0x31 < pbVar58) {
LAB_140b84b98:
      pdb_142dc8070(&UNK_14305d5e7,0x31,0);
LAB_140b84bb8:
      pdb_142dc8070(&UNK_14305d5e7,0x31);
      pcVar15 = (code *)swi(3);
      (*pcVar15)();
      return;
    }
    uVar35 = pdb_140b87ae0(pbVar58);
    if ((uVar35 & 1) != 0) {
      if ((byte *)0x31 < pbVar58 + 2) goto LAB_140b84bb8;
      pbStack_110 = (byte *)(0x2f - (longlong)pbVar58);
      pbVar46 = pbVar58 + 0x14305d5e9;
    }
  }
  puVar52 = &UNK_14305cf79;
  pbVar58 = &UNK_14305cf48;
  do {
    bVar41 = puVar52[-1];
    uVar32 = (uint)(char)bVar41;
    puStack_180 = puVar60;
    if ((char)bVar41 < '\0') {
      bVar31 = puVar52[-2];
      if ((char)bVar31 < -0x40) {
        bVar5 = puVar52[-3];
        if ((char)bVar5 < -0x40) {
          pbVar56 = puVar52 + -4;
          puVar52 = puVar52 + -4;
          uVar32 = bVar5 & 0x3f | (*pbVar56 & 7) << 6;
        }
        else {
          puVar52 = puVar52 + -3;
          uVar32 = bVar5 & 0xf;
        }
        uVar32 = bVar31 & 0x3f | uVar32 << 6;
      }
      else {
        puVar52 = puVar52 + -2;
        uVar32 = bVar31 & 0x1f;
      }
      uVar32 = (uint)(bVar41 & 0x3f) | uVar32 << 6;
      if (uVar32 != 0x5c) goto LAB_140b81664;
LAB_140b8167c:
      puVar53 = puVar52 + -0x14305cf47;
      if ((undefined *)0x31 < puVar53) {
        pdb_142dc8070(&UNK_14305cf48,0x31,puVar53,0x31,&UNK_14305d680);
        goto LAB_140b84b98;
      }
      in_stack_fffffffffffffa58 = (byte *)(0x31 - (longlong)puVar53);
      pbVar58 = puVar52 + 1;
      goto LAB_140b8169e;
    }
    puVar52 = puVar52 + -1;
    if (uVar32 == 0x5c) goto LAB_140b8167c;
LAB_140b81664:
    if (uVar32 == 0x2f) goto LAB_140b8167c;
  } while (puVar52 != &UNK_14305cf48);
  in_stack_fffffffffffffa58 = (byte *)0x31;
LAB_140b8169e:
  plVar36 = (longlong *)pdb_140e97000();
  if ((char)plVar36[0xd] != '\x01') goto LAB_140b8441a;
LAB_140b816ad:
  pbVar56 = pbStack_110;
  if (*plVar36 == 0) {
    *plVar36 = -1;
    pbStack_110 = (byte *)plVar36;
    uStack_4a0 = pdb_140e94f10(plVar36 + 1,pbVar46,pbVar56,pbVar58,in_stack_fffffffffffffa58,1,0);
    *(longlong *)pbStack_110 = *(longlong *)pbStack_110 + 1;
    lStack_4a8 = 1;
    pbVar58 = pbVar43;
    pbVar43 = pbVar59;
    puVar60 = puStack_180;
    uVar44 = pbStack_170._0_4_;
LAB_140b81719:
    *puVar60 = uVar44;
    *(float *)(pbStack_f8 + 0x198) = *(float *)(pbVar43 + 0x28) + *(float *)(pbStack_f8 + 0x198);
    pbVar59 = pbStack_f8 + 0x178;
    LOCK();
    bVar64 = pbStack_f8[0x178] == 0;
    if (bVar64) {
      pbStack_f8[0x178] = 1;
    }
    UNLOCK();
    if (!bVar64) {
      pdb_142dbd1a0(pbVar59,pbStack_f8,1000000000);
    }
    pdb_140e9a150(pbVar59);
    pbStack_110 = pbVar59;
    if (*(longlong *)(pbStack_f8 + 0x180) == 0) {
      pdb_141a9d120(&iStack_530,*(undefined8 *)(pbStack_f8 + 0x188));
    }
    else if ((int)*(longlong *)(pbStack_f8 + 0x180) == 1) {
      pdb_141a97f30(&iStack_530);
    }
    else {
      pdb_141c16370(&iStack_530);
    }
    pbVar46 = pbStack_f8;
    pbVar59 = pbStack_110;
    uVar44 = (undefined4)((ulonglong)in_stack_fffffffffffffa58 >> 0x20);
    if (SBORROW8(0,CONCAT44(iStack_52c,iStack_530))) {
      pdb_140e9a350();
      LOCK();
      bVar41 = *pbVar59;
      if (bVar41 == 1) {
        *pbVar59 = 0;
      }
      UNLOCK();
      if (bVar41 != 1) {
        pdb_142dbcef0(pbVar59,0);
      }
    }
    else {
      pbVar59 = pbStack_f8 + 0x10;
      pbVar56 = *(byte **)(pbStack_f8 + 0x18);
      lVar34 = *(longlong *)(pbStack_f8 + 0x20);
      pbStack_170 = pbVar43;
      if (lVar34 != 0) {
        pbVar43 = pbVar56 + 0x30;
        do {
          if (*(ulonglong *)(pbVar43 + -0x30) != 0) {
            pub_1406abac0(*(byte **)(pbVar43 + -0x28),*(ulonglong *)(pbVar43 + -0x30),1);
          }
          if (*(ulonglong *)(pbVar43 + -8) != 0) {
            pub_1406abac0(*(byte **)pbVar43,*(ulonglong *)(pbVar43 + -8),1);
          }
          uVar44 = (undefined4)((ulonglong)in_stack_fffffffffffffa58 >> 0x20);
          pbVar43 = pbVar43 + 0x40;
          lVar34 = lVar34 + -1;
        } while (lVar34 != 0);
      }
      lVar34 = *(longlong *)pbVar59;
      if (lVar34 != 0) {
        pub_1406abac0(pbVar56,lVar34 << 6,8);
      }
      pbVar56 = pbStack_110;
      *(undefined8 *)(pbVar46 + 0x20) = uStack_520;
      *(int *)pbVar59 = iStack_530;
      *(int *)(pbVar46 + 0x14) = iStack_52c;
      *(int *)(pbVar46 + 0x18) = iStack_528;
      *(int *)(pbVar46 + 0x1c) = iStack_524;
      pdb_140e9a350();
      pbVar43 = pbStack_170;
      LOCK();
      bVar41 = *pbVar56;
      if (bVar41 == 1) {
        *pbVar56 = 0;
      }
      UNLOCK();
      if (bVar41 != 1) {
        pdb_142dbcef0(pbVar56,0);
      }
    }
    if ((*(longlong *)(pbVar58 + 0x58) != *(longlong *)(pbVar58 + 0x10)) ||
       (*(longlong *)(pbVar58 + 0x58) != *(longlong *)(pbStack_f8 + 0x170))) {
      pdb_140f3c9d0();
      lVar34 = *(longlong *)(pbVar58 + 8);
      uStack_310 = (byte *)(lVar34 + *(longlong *)(pbVar58 + 0x10) * 0x28);
      uStack_308 = *(byte **)(pbVar58 + 0x58);
      uStack_318._0_4_ = (int)lVar34;
      uStack_318._4_4_ = (int)((ulonglong)lVar34 >> 0x20);
      pdb_1415ea5b0(&fStack_420,&uStack_318);
      puStack_2f8 = *(undefined **)(pbVar58 + 0x58);
      uStack_300 = CONCAT44(fStack_40c,fStack_410);
      uStack_310._0_4_ = fStack_420;
      uStack_310._4_4_ = fStack_41c;
      uStack_308 = (byte *)CONCAT44(fStack_414,fStack_418);
      uStack_318._0_4_ = 5;
      uStack_318._4_4_ = 0;
      pdb_141a55160(&uStack_3d8,pbStack_f8,&uStack_318);
      if ((int)uStack_3d8 != 0xb) {
        uStack_2e8 = uStack_3a8;
        uStack_2e0 = (undefined *)CONCAT44(uStack_39c,iStack_3a0);
        puStack_2f8 = puStack_3b8;
        uStack_2f0 = uStack_3b0;
        uStack_308 = uStack_3c8;
        uStack_300 = uStack_3c0;
        uStack_318 = uStack_3d8;
        uStack_310 = uStack_3d0;
                    /* WARNING: Subroutine does not return */
        pdb_142dc8170(&UNK_14305d3a8,0x2b,&uStack_318,&UNK_14305d3d8,&UNK_14305cf80);
      }
      pbStack_f8[0x198] = 0;
      pbStack_f8[0x199] = 0;
      pbStack_f8[0x19a] = 0;
      pbStack_f8[0x19b] = 0;
      uVar49 = *(undefined8 *)(pbVar58 + 0x10);
      *(undefined4 *)pbStack_158 = pbStack_150._0_4_;
      *(undefined8 *)(pbVar58 + 0x58) = uVar49;
      *(undefined8 *)(pbStack_f8 + 0x170) = *(undefined8 *)(pbVar58 + 0x10);
    }
    pdb_140a34930(&fStack_420,pbStack_128);
    uVar49 = *(undefined8 *)pbVar51;
    fVar70 = (float)((ulonglong)uVar49 >> 0x20);
    fVar1 = *(float *)(pbVar51 + 8);
    puStack_180 = (undefined4 *)CONCAT71(puStack_180._1_7_,pbVar51[0x14]);
    fVar2 = *(float *)(pbVar51 + 0x10);
    pbStack_170 = (byte *)CONCAT71(pbStack_170._1_7_,pbVar51[0x15]);
    uVar13 = *param_6;
    lVar34 = param_6[1];
    pdb_1415237e0(&puStack_3b8,lVar34,uVar13,*(undefined4 *)(param_6 + 2),
                  CONCAT44(uVar44,*(undefined4 *)((longlong)param_6 + 0x14)));
    uStack_3c8 = (byte *)(lVar34 + 0xf8);
    uStack_3d8._0_4_ = (int)lVar34;
    uStack_3d8._4_4_ = (int)((ulonglong)lVar34 >> 0x20);
    pbVar46 = (byte *)(lVar34 + 0x198);
    uStack_3c0 = uVar13;
    uStack_3d0 = pbVar46;
    pub_142e32760(&uStack_318,&uStack_3d8,0xc0);
    pdb_1415f2420(&iStack_198,&uStack_318);
    pbVar51 = pbStack_108;
    pbVar59 = pbStack_188;
    pbStack_110 = (byte *)CONCAT44(iStack_194,iStack_198);
    pbStack_128 = (byte *)CONCAT44(iStack_18c,uStack_190);
    lVar34 = *(longlong *)(uStack_140 + 0x20);
    if (*(longlong *)(uStack_140 + 0x18) == 0) {
      bVar41 = 0;
      lVar42 = *(longlong *)pbStack_130;
      *(longlong *)pbStack_130 = lVar34;
      if (((lVar34 == lVar42) && (*(longlong *)(uStack_148 + 0x10) == 0)) &&
         (bVar41 = 0, SBORROW8(0,*(longlong *)(pbVar58 + 0x30)))) {
        bVar41 = *pbStack_168 ^ 1;
      }
    }
    else {
      *(longlong *)pbStack_130 = lVar34;
      bVar41 = 0;
    }
    if (_DAT_142f3e554 < *(float *)(pbStack_f8 + 0x198) ||
        _DAT_142f3e554 == *(float *)(pbStack_f8 + 0x198)) {
LAB_140b81be3:
      uStack_148 = CONCAT44(uStack_148._4_4_,2);
      uStack_140 = CONCAT44(uStack_140._4_4_,(int)CONCAT71((int7)((ulonglong)pbStack_f8 >> 8),1));
    }
    else {
      if (*(float *)(pbVar43 + 0x28) < 0.0) {
                    /* WARNING: Subroutine does not return */
        pdb_142dc83b0(&UNK_143391ed0,0x32,&UNK_143391f40);
      }
      fVar69 = *(float *)(pbVar43 + 0x28) + *(float *)(pbStack_f8 + 0x194);
      *(float *)(pbStack_f8 + 0x194) = fVar69;
      if (bVar41 == 0) goto LAB_140b81be3;
      uStack_148 = CONCAT44(uStack_148._4_4_,2);
      uStack_140 = CONCAT44(uStack_140._4_4_,(int)CONCAT71((int7)((ulonglong)pbVar43 >> 8),1));
      fVar45 = 0.0;
      if (0.0 <= fVar69) {
        fVar45 = fVar69;
      }
      fVar69 = _DAT_142f57bc8;
      if (fVar45 <= _DAT_142f57bc8) {
        fVar69 = fVar45;
      }
      *(float *)(pbStack_f8 + 0x194) = fVar69;
      if (_DAT_142e36f28 <= fVar69) {
        pbVar46 = (byte *)(ulonglong)*(uint *)(pbStack_f8 + 400);
        puVar52 = &UNK_143391ecc;
        while( true ) {
          fVar45 = SUB84(pbVar46,0);
          fVar69 = fVar69 + _DAT_142e36f34;
          if ((float)((int)((ulonglong)pbVar46 / 0x1c20) * 0x1c20) == fVar45) break;
          if ((float)((int)((ulonglong)pbVar46 / 0xe10) * 0xe10) == fVar45) {
            fVar55 = 5.04467e-42;
            puVar52 = &UNK_143391ec8;
            goto LAB_140b83207;
          }
          if ((float)((int)((ulonglong)pbVar46 / 600) * 600) == fVar45) {
            fVar55 = 8.40779e-43;
            puVar52 = &UNK_143391ec4;
            goto LAB_140b83207;
          }
          if ((float)((int)((ulonglong)pbVar46 / 300) * 300) == fVar45) {
            fVar55 = 4.2039e-43;
            puVar52 = &UNK_143391ec0;
            goto LAB_140b83207;
          }
          pbVar46 = (byte *)(ulonglong)((int)fVar45 + 1U);
          if (fVar69 < _DAT_142e36f28) goto code_r0x000140b81bcc;
        }
        fVar55 = 1.00893e-41;
LAB_140b83207:
        *(float *)(pbStack_f8 + 0x194) = fVar69;
        *(uint *)(pbStack_f8 + 400) = (int)fVar45 + 1;
        if ((uint)fVar45 < (uint)fVar55) goto LAB_140b8322e;
        pbVar43 = pbVar46;
        fStack_3dc = (float)((int)fVar45 - (int)fVar55);
        if (puVar52 + -0x143391ec0 < (undefined *)0x10) {
          do {
            fStack_3dc = (float)((int)pbVar43 - (int)fVar55);
            puVar53 = puVar52 + -0x143391ec0;
            do {
              if (puVar53 == (undefined *)0xc) goto LAB_140b8329e;
              fVar69 = fStack_3dc;
              if (*(uint *)(&UNK_143391ec4 + (longlong)puVar53) != 0) {
                fVar69 = (float)((uint)fStack_3dc % *(uint *)(&UNK_143391ec4 + (longlong)puVar53));
              }
              puVar53 = puVar53 + 4;
            } while (fVar69 != 0.0);
            pbVar43 = (byte *)(ulonglong)(uint)fStack_3dc;
          } while ((uint)fVar55 <= (uint)fStack_3dc);
LAB_140b8322e:
          uStack_140 = (ulonglong)uStack_140._4_4_ << 0x20;
          uStack_148 = (ulonglong)uStack_148._4_4_ << 0x20;
          fStack_3dc = (float)((int)fVar45 - (int)fVar55);
        }
        else {
LAB_140b8329e:
          uStack_148 = CONCAT44(uStack_148._4_4_,1);
          uStack_140 = (ulonglong)uStack_140._4_4_ << 0x20;
        }
      }
    }
    goto LAB_140b81bf5;
  }
  goto LAB_140b8440e;
code_r0x000140b81bcc:
  *(float *)(pbStack_f8 + 0x194) = fVar69;
  *(uint *)(pbStack_f8 + 400) = (int)fVar45 + 1U;
LAB_140b81bf5:
  lVar34 = puStack_518[1];
  uVar35 = *(ulonglong *)*puStack_518;
  uVar37 = 0;
  uVar50 = uVar35 - *(ulonglong *)(lVar34 + 0x18);
  if (uVar35 < *(ulonglong *)(lVar34 + 0x18)) {
    uVar50 = uVar37;
  }
  uVar57 = uVar35 - *(ulonglong *)(lVar34 + 0x38);
  if (uVar35 < *(ulonglong *)(lVar34 + 0x38)) {
    uVar57 = uVar37;
  }
  bVar64 = uVar57 <= *(ulonglong *)(lVar34 + 0x30);
  uVar57 = *(ulonglong *)(lVar34 + 0x30) - uVar57;
  bVar65 = uVar57 != 0;
  if (!bVar64) {
    uVar57 = uVar37;
  }
  bVar61 = uVar50 <= *(ulonglong *)(lVar34 + 0x10);
  uVar50 = *(ulonglong *)(lVar34 + 0x10) - uVar50;
  bVar66 = uVar50 != 0;
  if (!bVar61) {
    uVar50 = uVar37;
  }
  uVar35 = uVar50 + uVar57;
  if (bVar61 && bVar66 || bVar64 && bVar65) {
    uVar35 = uVar37;
  }
  *(ulonglong *)*puStack_518 = *(longlong *)(lVar34 + 0x40) - uVar35;
  lVar34 = *(longlong *)(pbStack_178 + 8);
  uVar35 = **(ulonglong **)pbStack_178;
  uVar50 = uVar35 - *(ulonglong *)(lVar34 + 0x18);
  if (uVar35 < *(ulonglong *)(lVar34 + 0x18)) {
    uVar50 = uVar37;
  }
  uVar57 = uVar35 - *(ulonglong *)(lVar34 + 0x38);
  if (uVar35 < *(ulonglong *)(lVar34 + 0x38)) {
    uVar57 = uVar37;
  }
  bVar62 = uVar57 <= *(ulonglong *)(lVar34 + 0x30);
  uVar57 = *(ulonglong *)(lVar34 + 0x30) - uVar57;
  bVar67 = uVar57 != 0;
  if (!bVar62) {
    uVar57 = uVar37;
  }
  bVar63 = uVar50 <= *(ulonglong *)(lVar34 + 0x10);
  uVar50 = *(ulonglong *)(lVar34 + 0x10) - uVar50;
  bVar68 = uVar50 != 0;
  if (!bVar63) {
    uVar50 = uVar37;
  }
  uVar35 = uVar50 + uVar57;
  if (bVar63 && bVar68 || bVar62 && bVar67) {
    uVar35 = uVar37;
  }
  **(ulonglong **)pbStack_178 = *(longlong *)(lVar34 + 0x40) - uVar35;
  if (((bVar63 && bVar68 || bVar62 && bVar67) || (bVar61 && bVar66 || bVar64 && bVar65)) &&
     (*pbStack_168 != 0)) {
    *piStack_488 = iStack_134;
    pbStack_168[1] = 1;
    bVar31 = 1;
  }
  else {
    bVar31 = pbStack_168[1];
  }
  if ((bVar31 & bVar41) == 1) {
    *piStack_488 = iStack_134;
    pbStack_168[1] = 0;
    pbStack_130 = (byte *)CONCAT71(pbStack_130._1_7_,1);
  }
  else {
    pbStack_130 = (byte *)CONCAT71(pbStack_130._1_7_,
                                   ((bVar63 && bVar68 || bVar62 && bVar67) ||
                                   (bVar61 && bVar66 || bVar64 && bVar65)) & (bVar31 ^ 1));
  }
  if ((char)uStack_140 != '\0') {
    bVar41 = (byte)pbStack_130 & bVar41;
  }
  if (bVar41 != 0) {
    pdb_140f3c9d0();
    *(undefined4 *)pbStack_158 = pbStack_150._0_4_;
    puStack_2f8 = *(undefined **)(lStack_470 + 0xf8);
    uStack_2f0 = puStack_2f8 + *(longlong *)(lStack_470 + 0x100) * 4;
    uStack_2b8 = *(undefined1 *)(lStack_470 + 0x108);
    uStack_2d0 = 0;
    puStack_2c8 = (undefined *)0x0;
    pbStack_2c0 = (byte *)0x0;
    uStack_308 = (byte *)(lStack_468 + 0xf8);
    uStack_318._0_4_ = (int)lStack_468;
    uStack_318._4_4_ = (int)((ulonglong)lStack_468 >> 0x20);
    uStack_310 = (byte *)(lStack_468 + 0x198);
    uStack_300 = lStack_470;
    uStack_2e8 = 8;
    uStack_2e0 = (undefined *)0x0;
    uStack_2d8 = 8;
    fVar69 = SUB84(&uStack_318,0);
    pdb_1415f65c0(&uStack_3d8);
    pbVar43 = uStack_3c8;
    pbStack_168 = (byte *)CONCAT44(uStack_3d8._4_4_,(int)uStack_3d8);
    pbStack_158 = uStack_3d0;
    uStack_f9 = 0;
    iStack_198 = iVar16;
    iStack_194 = iVar17;
    uStack_190 = iVar18;
    iStack_18c = iVar19;
    pbStack_188 = pbVar12;
    plVar36 = (longlong *)pdb_140ae30f0(pbVar58);
    uStack_318._0_4_ = (int)plVar36;
    uStack_318._4_4_ = (int)((ulonglong)plVar36 >> 0x20);
    if (plVar36 == (longlong *)0x0) {
      if (3 < *_DAT_143ca8e90) {
        uStack_318._0_4_ = 0;
        uStack_318._4_4_ = 0;
        uStack_310._0_4_ = 133.80835;
        uStack_310._4_4_ = 1.4013e-45;
        uStack_308 = (byte *)0x26;
        uStack_300 = 0;
        puStack_2f8 = &UNK_14305cdc0;
        uStack_2f0 = (undefined *)0x31;
        uStack_2e8 = 4;
        uStack_2e0 = &UNK_14305cef0;
        uStack_2d8 = 0x26;
        uStack_2d0 = 0x35800000001;
        puStack_2c8 = &UNK_14305ced7;
        pbStack_2c0 = (byte *)0x33;
        uStack_f9 = 0;
        pdb_140f332f0(&uStack_111,&uStack_318);
      }
      uStack_318._0_4_ = (int)pbStack_168;
      uStack_318._4_4_ = (int)((ulonglong)pbStack_168 >> 0x20);
      uStack_310._0_4_ = SUB84(pbStack_158,0);
      uStack_310._4_4_ = (float)((ulonglong)pbStack_158 >> 0x20);
      uStack_308 = pbVar43;
      uStack_300 = lStack_458;
      puStack_2f8 = puStack_4b8;
      pub_142e32760(&uStack_2f0,param_2,0xe0);
      uStack_210 = uStack_4f8;
      uStack_208 = uStack_4e8;
      uStack_200 = uStack_430;
      uStack_1f8 = uStack_4d8;
      uStack_1f0 = auStack_4c8._0_8_;
      uStack_1e8 = uStack_450;
      uStack_1e0 = uStack_448;
      uStack_1d8 = uStack_428;
      iStack_1d0 = iStack_198;
      iStack_1cc = iStack_194;
      iStack_1c8 = uStack_190;
      iStack_1c4 = iStack_18c;
      pbStack_1c0 = pbStack_188;
      uStack_1b8 = uStack_508;
      uStack_1b0 = uStack_440;
      uStack_1a8 = uStack_438;
      uStack_f9 = 1;
      pbVar43 = (byte *)pdb_141bf4da0(&uStack_318);
      pdb_14007ee60();
      pbStack_150 = pub_1406abab0(0x18,8);
      pbStack_178 = pbVar43;
      if (pbStack_150 == (byte *)0x0) goto LAB_140b847f2;
      pbStack_150[0] = 1;
      pbStack_150[1] = 0;
      pbStack_150[2] = 0;
      pbStack_150[3] = 0;
      pbStack_150[4] = 0;
      pbStack_150[5] = 0;
      pbStack_150[6] = 0;
      pbStack_150[7] = 0;
      pbStack_150[8] = 1;
      pbStack_150[9] = 0;
      pbStack_150[10] = 0;
      pbStack_150[0xb] = 0;
      pbStack_150[0xc] = 0;
      pbStack_150[0xd] = 0;
      pbStack_150[0xe] = 0;
      pbStack_150[0xf] = 0;
      pbStack_150[0x10] = 0;
      pbStack_150[0x11] = 0;
      pbStack_150[0x12] = 0;
      pbStack_150[0x13] = 0;
      pbStack_150[0x14] = 0;
      pbStack_150[0x15] = 0;
      pbStack_150[0x16] = 0;
      pbStack_150[0x17] = 0;
      uStack_3f8 = SUB87(pbStack_150,0);
      iStack_3f1._0_1_ = (undefined1)((ulonglong)pbStack_150 >> 0x38);
      LOCK();
      lVar34 = *(longlong *)pbStack_150;
      *(longlong *)pbStack_150 = *(longlong *)pbStack_150 + 1;
      UNLOCK();
      if (*(longlong *)pbStack_150 == 0 || SCARRY8(lVar34,1) != *(longlong *)pbStack_150 < 0)
      goto LAB_140b84ad4;
      uStack_310._0_4_ = SUB84(pbVar43,0);
      uStack_310._4_4_ = (float)((ulonglong)pbVar43 >> 0x20);
      uStack_318._0_4_ = 9;
      uStack_318._4_4_ = 0;
      uStack_fa = 1;
      uStack_308 = pbStack_150;
      pdb_141a55160(&uStack_3d8,pbStack_f8);
      if ((int)uStack_3d8 != 0xb) {
        uStack_2e8 = uStack_3a8;
        uStack_2e0 = (undefined *)CONCAT44(uStack_39c,iStack_3a0);
        puStack_2f8 = puStack_3b8;
        uStack_2f0 = uStack_3b0;
        uStack_308 = uStack_3c8;
        uStack_300 = uStack_3c0;
        uStack_318._0_4_ = (int)uStack_3d8;
        uStack_318._4_4_ = uStack_3d8._4_4_;
        uStack_310 = uStack_3d0;
                    /* WARNING: Subroutine does not return */
        pdb_142dc8170(&UNK_14305d3a8,0x2b,&uStack_318,&UNK_14305d3d8,&UNK_14305cf18);
      }
      uStack_fa = 0;
      pdb_140ae4150(pbVar58,pbStack_150);
    }
    else {
      LOCK();
      *plVar36 = *plVar36 + -1;
      UNLOCK();
      uStack_310._0_4_ = fVar69;
      if (*plVar36 == 0) {
        uStack_f9 = 0;
        pdb_140315620(&uStack_318);
      }
      if (pbStack_168 != (byte *)0x0) {
        pub_1406abac0(pbStack_158,(longlong)pbStack_168 * 0x58,8);
      }
    }
  }
  pbVar56 = pbStack_f8;
  pbVar43 = *(byte **)(pbVar58 + 0x60);
  param_2 = pbStack_f8 + 0x28;
  pbStack_168 = pbVar46;
  if (SBORROW8(0,*(longlong *)(pbStack_f8 + 0x28))) {
    uVar7 = *(ushort *)(pbStack_120 + 0x28);
    pbStack_158 = (byte *)CONCAT44(pbStack_158._4_4_,*(int *)pbStack_120);
    uVar13 = *(undefined8 *)(pbStack_120 + 4);
    uVar26 = *(undefined8 *)(pbStack_120 + 0xc);
    uVar27 = *(undefined8 *)(pbStack_120 + 0x14);
    uVar28 = *(undefined8 *)(pbStack_120 + 0x1c);
    iVar33 = *(int *)(pbStack_120 + 0x24);
    pbVar38 = (byte *)-(longlong)pbStack_110;
    pbVar56 = pbStack_110;
    pbStack_150 = pbVar43;
    pbVar46 = uStack_3d0;
    if (SBORROW8(0,(longlong)pbStack_110)) {
      pbStack_120 = (byte *)0x8000000000000000;
    }
    else {
      uVar35 = (longlong)pbVar59 * 0x28;
      if ((byte *)0x333333333333333 < pbVar59) {
        uVar48 = 0;
LAB_140b82644:
        pdb_142dc7e2a(uVar48,uVar35);
        goto LAB_140b84ad4;
      }
      if (uVar35 == 0) {
        pbVar38 = (byte *)0x4;
        pbStack_120 = (byte *)0x0;
      }
      else {
        pbVar56 = (byte *)(ulonglong)uVar7;
        pdb_14007ee60();
        uVar48 = 4;
        pbVar38 = pub_1406abab0(uVar35,4);
        if (pbVar38 == (byte *)0x0) goto LAB_140b82644;
        if (pbVar59 == (byte *)0x0) {
          pbStack_120 = (byte *)0x0;
          pbVar46 = uStack_3d0;
        }
        else {
          uVar50 = 0;
          pbVar43 = pbVar59;
          pbVar54 = pbStack_128;
          do {
            pbStack_120 = pbVar59;
            pbVar46 = (byte *)CONCAT44(uStack_3d0._4_4_,(float)uStack_3d0);
            if (uVar35 == uVar50) break;
            if (*(int *)pbVar54 == 1) {
              uStack_310._0_4_ = *(float *)(pbStack_128 + uVar50 + 0xc);
              uStack_318._0_4_ = (int)*(undefined8 *)(pbStack_128 + uVar50 + 4);
              uStack_318._4_4_ = (int)((ulonglong)*(undefined8 *)(pbStack_128 + uVar50 + 4) >> 0x20)
              ;
            }
            pbVar43 = pbVar43 + -1;
            uStack_3d0._0_4_ = (float)uStack_310;
            uStack_3d8._0_4_ = (int)uStack_318;
            uStack_3d8._4_4_ = uStack_318._4_4_;
            *(uint *)(pbVar38 + uVar50) = (uint)(*(int *)pbVar54 == 1);
            *(float *)(pbVar38 + uVar50 + 0xc) = (float)uStack_310;
            *(ulonglong *)(pbVar38 + uVar50 + 4) = CONCAT44(uStack_318._4_4_,(int)uStack_318);
            *(undefined8 *)(pbVar38 + uVar50 + 0x10) = *(undefined8 *)(pbVar54 + 0x10);
            *(int *)(pbVar38 + uVar50 + 0x18) = *(int *)(pbVar54 + 0x18);
            *(undefined8 *)(pbVar38 + uVar50 + 0x1c) = *(undefined8 *)(pbVar54 + 0x1c);
            pbVar46 = pbVar54 + 0x24;
            pbVar54 = pbVar54 + 0x28;
            *(int *)(pbVar38 + uVar50 + 0x24) = *(int *)pbVar46;
            uVar50 = uVar50 + 0x28;
            pbVar46 = (byte *)CONCAT44(uStack_3d0._4_4_,(float)uStack_310);
          } while (pbVar43 != (byte *)0x0);
        }
      }
    }
    lStack_458 = CONCAT44(lStack_458._4_4_,*(int *)pbVar51);
    lStack_468 = CONCAT44(lStack_468._4_4_,*(int *)(pbVar51 + 4));
    lStack_470 = CONCAT71(lStack_470._1_7_,pbVar51[0x1c]);
    if (pbVar51[0x1c] != 3) {
      uStack_310._0_3_ = (undefined3)((uint)*(int *)(pbVar51 + 0x24) >> 8);
      uStack_318._0_4_ = (int)*(undefined8 *)(pbVar51 + 0x1d);
      uStack_318._4_4_ = (int)((ulonglong)*(undefined8 *)(pbVar51 + 0x1d) >> 0x20);
    }
    puStack_518 = *(undefined8 **)(pbVar51 + 0x28);
    uStack_510 = *(undefined8 *)(pbVar51 + 0x30);
    uVar9 = *(uint *)(pbVar51 + 0x38);
    pbVar59 = (byte *)(ulonglong)uVar9;
    bVar41 = pbVar51[0x60];
    pbVar43 = (byte *)CONCAT71((int7)((ulonglong)pbVar56 >> 8),bVar41);
    iStack_134 = *(int *)(pbVar51 + 0x3c);
    piStack_488 = *(int **)(pbVar51 + 0x40);
    uStack_480 = *(undefined8 *)(pbVar51 + 0x48);
    puVar52 = *(undefined **)(pbVar51 + 0x50);
    uVar32 = *(uint *)(pbVar51 + 0x5c);
    iVar3 = *(int *)(pbVar51 + 0x58);
    uStack_448 = CONCAT71(uStack_448._1_7_,pbVar51[0x18]);
    uStack_450 = CONCAT71(uStack_450._1_7_,pbVar51[0x19]);
    uStack_508 = *(undefined8 *)(pbVar51 + 8);
    iStack_500 = *(int *)(pbVar51 + 0x10);
    iStack_4fc = *(int *)(pbVar51 + 0x14);
    uStack_190 = CONCAT13(uStack_190._3_1_,SUB43((float)uStack_310,0));
    iStack_198 = (int)uStack_318;
    iStack_194 = uStack_318._4_4_;
    pbStack_178 = pbVar38;
    uStack_3d0 = pbVar46;
    pdb_1415e5900(&uStack_318,uStack_160);
    uVar35 = *(ulonglong *)(pbVar58 + 0x28);
    in_stack_fffffffffffffa58 = (byte *)(uVar35 << 4);
    if ((byte *)0x7ffffffffffffff8 < in_stack_fffffffffffffa58 || uVar35 >> 0x3c != 0) {
      pbVar51 = (byte *)0x0;
LAB_140b822ce:
      pdb_142dc7e2a(pbVar51,in_stack_fffffffffffffa58);
      goto LAB_140b84ad4;
    }
    uStack_4b0 = 0;
    uStack_4d8 = *(undefined8 *)(pbVar58 + 0x68);
    uStack_440 = CONCAT62(uStack_440._2_6_,uVar7);
    uStack_438 = CONCAT44(uStack_438._4_4_,iVar33);
    uStack_430 = CONCAT71(uStack_430._1_7_,bVar41);
    uStack_4d0 = 0;
    auStack_4c8 = ZEXT416(uVar32);
    uStack_428 = CONCAT44(uStack_428._4_4_,iVar3);
    uStack_4f8 = uVar27;
    uStack_4f0 = uVar28;
    uStack_4e8 = uVar13;
    uStack_4e0 = uVar26;
    puStack_4b8 = puVar52;
    fStack_3e8 = fVar2;
    fStack_3e4 = fVar1;
    uStack_3e0 = uVar9;
    uStack_160 = uVar35;
    if (in_stack_fffffffffffffa58 == (byte *)0x0) {
      pbStack_478 = (byte *)0x8;
    }
    else {
      puVar47 = *(undefined8 **)(pbVar58 + 0x20);
      pdb_14007ee60();
      pbVar51 = (byte *)0x8;
      pbVar46 = pub_1406abab0((ulonglong)in_stack_fffffffffffffa58,8);
      if (pbVar46 == (byte *)0x0) goto LAB_140b822ce;
      pbStack_478 = pbVar46;
      if (uStack_160 != 0) {
        pbVar56 = (byte *)0x0;
        uVar35 = uStack_160;
        do {
          if (in_stack_fffffffffffffa58 == pbVar56) break;
          plVar36 = (longlong *)*puVar47;
          uVar44 = *(undefined4 *)(puVar47 + 1);
          LOCK();
          lVar34 = *plVar36;
          *plVar36 = *plVar36 + 1;
          UNLOCK();
          if (*plVar36 == 0 || SCARRY8(lVar34,1) != *plVar36 < 0) goto LAB_140b84ad4;
          uVar35 = uVar35 - 1;
          puVar47 = puVar47 + 2;
          *(longlong **)(pbVar46 + (longlong)pbVar56) = plVar36;
          *(undefined4 *)(pbVar46 + 8 + (longlong)pbVar56) = uVar44;
          pbVar56 = pbVar56 + 0x10;
        } while (uVar35 != 0);
      }
    }
    uStack_3f8 = (undefined7)CONCAT44(iStack_194,iStack_198);
    iStack_3f1._0_1_ = (undefined1)((uint)iStack_194 >> 0x18);
    iStack_3f1 = CONCAT31((int3)uStack_190,(undefined1)iStack_3f1);
    uStack_3d8._0_4_ = (int)uStack_318;
    uStack_3d8._4_4_ = uStack_318._4_4_;
    uStack_3d0._0_4_ = (float)uStack_310;
    uStack_3d0._4_4_ = uStack_310._4_4_;
    uStack_3c8 = uStack_308;
    pbStack_108 = param_2;
    if (!SBORROW8(0,*(longlong *)param_2)) {
      pdb_14099b1f0(param_2);
    }
    *(byte **)(pbStack_108 + 0x10) = uStack_3c8;
    *(ulonglong *)pbStack_108 = CONCAT44(uStack_3d8._4_4_,(int)uStack_3d8);
    *(byte **)(pbStack_108 + 8) = uStack_3d0;
    *(ulonglong *)(pbStack_f8 + 0x40) = uStack_160;
    *(byte **)(pbStack_f8 + 0x48) = pbStack_478;
    *(ulonglong *)(pbStack_f8 + 0x50) = uStack_160;
    *(byte **)(pbStack_f8 + 0x58) = pbStack_120;
    *(byte **)(pbStack_f8 + 0x60) = pbStack_178;
    *(byte **)(pbStack_f8 + 0x68) = pbStack_120;
    *(float *)(pbStack_f8 + 0x70) = fStack_3e8;
    pbStack_f8[0x74] = (byte)pbStack_170;
    *(undefined8 *)(pbStack_f8 + 0x78) = uVar49;
    *(float *)(pbStack_f8 + 0x80) = fStack_3e4;
    pbStack_f8[0x84] = (byte)puStack_180;
    *(byte **)(pbStack_f8 + 0x88) = pbStack_150;
    *(int *)(pbStack_f8 + 0x90) = (int)lStack_458;
    *(int *)(pbStack_f8 + 0x94) = (int)lStack_468;
    *(undefined8 *)(pbStack_f8 + 0x98) = uStack_508;
    *(ulonglong *)(pbStack_f8 + 0xa0) = CONCAT44(iStack_4fc,iStack_500);
    pbStack_f8[0xa8] = (byte)uStack_448;
    pbStack_f8[0xa9] = (byte)uStack_450;
    pbStack_f8[0xac] = (byte)lStack_470;
    *(int *)(pbStack_f8 + 0xb4) = iStack_3f1;
    *(ulonglong *)(pbStack_f8 + 0xad) = CONCAT17((undefined1)iStack_3f1,uStack_3f8);
    *(undefined8 **)(pbStack_f8 + 0xb8) = puStack_518;
    *(undefined8 *)(pbStack_f8 + 0xc0) = uStack_510;
    *(uint *)(pbStack_f8 + 200) = uStack_3e0;
    *(int *)(pbStack_f8 + 0xcc) = iStack_134;
    *(int **)(pbStack_f8 + 0xd0) = piStack_488;
    *(undefined8 *)(pbStack_f8 + 0xd8) = uStack_480;
    *(undefined **)(pbStack_f8 + 0xe0) = puStack_4b8;
    *(int *)(pbStack_f8 + 0xe8) = (int)uStack_428;
    *(undefined4 *)(pbStack_f8 + 0xec) = auStack_4c8._0_4_;
    pbStack_f8[0xf0] = (byte)uStack_430;
    *(int *)(pbStack_f8 + 0xf4) = (int)pbStack_158;
    *(undefined8 *)(pbStack_f8 + 0xf8) = uStack_4e8;
    *(undefined8 *)(pbStack_f8 + 0x100) = uStack_4e0;
    *(undefined8 *)(pbStack_f8 + 0x108) = uStack_4f8;
    *(undefined8 *)(pbStack_f8 + 0x110) = uStack_4f0;
    *(int *)(pbStack_f8 + 0x118) = (int)uStack_438;
    *(undefined2 *)(pbStack_f8 + 0x11c) = (undefined2)uStack_440;
    *(ulonglong *)(pbStack_f8 + 0x120) = CONCAT44(fStack_41c,fStack_420);
    *(ulonglong *)(pbStack_f8 + 0x128) = CONCAT44(fStack_414,fStack_418);
    *(float *)(pbStack_f8 + 0x130) = fStack_410;
    *(float *)(pbStack_f8 + 0x134) = fStack_40c;
    *(float *)(pbStack_f8 + 0x138) = fStack_408;
    *(float *)(pbStack_f8 + 0x13c) = fStack_404;
    *(float *)(pbStack_f8 + 0x140) = fStack_400;
    *(int *)(pbStack_f8 + 0x144) = (int)uStack_4d8;
    *(int *)(pbStack_f8 + 0x148) = uStack_4d8._4_4_;
  }
  else {
    if (*(byte **)(pbStack_f8 + 0x88) != pbVar43) {
      *(byte **)(pbStack_f8 + 0x88) = pbVar43;
      pdb_14007ee60();
      pbVar46 = pub_1406abab0(8,8);
      if (pbVar46 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
        pdb_142dc7e11(8,8);
      }
      *(byte **)pbVar46 = pbVar43;
      uStack_300 = CONCAT71(uStack_300._1_7_,1);
      uStack_310._0_4_ = SUB84(pbVar46,0);
      uStack_310._4_4_ = (float)((ulonglong)pbVar46 >> 0x20);
      uStack_308 = &UNK_14305cf98;
      uStack_318._0_4_ = 6;
      uStack_318._4_4_ = 0;
      pdb_141a55160(&uStack_3d8,pbVar56);
      if ((int)uStack_3d8 != 0xb) {
        uStack_2e8 = uStack_3a8;
        uStack_2e0 = (undefined *)CONCAT44(uStack_39c,iStack_3a0);
        puStack_2f8 = puStack_3b8;
        uStack_2f0 = uStack_3b0;
        uStack_308 = uStack_3c8;
        uStack_300 = uStack_3c0;
        uStack_318._0_4_ = (int)uStack_3d8;
        uStack_318._4_4_ = uStack_3d8._4_4_;
        uStack_310 = uStack_3d0;
                    /* WARNING: Subroutine does not return */
        pdb_142dc8170(&UNK_14305d3a8,0x2b,&uStack_318,&UNK_14305d3d8,&UNK_14305cfb8);
      }
      pbStack_f8[0x198] = 0;
      pbStack_f8[0x199] = 0;
      pbStack_f8[0x19a] = 0;
      pbStack_f8[0x19b] = 0;
    }
    fVar69 = *(float *)(pbStack_f8 + 0x120);
    if (((((fVar69 != fStack_420) || (NAN(fVar69) || NAN(fStack_420))) ||
         ((*(float *)(pbStack_f8 + 0x124) != fStack_41c ||
          ((((NAN(*(float *)(pbStack_f8 + 0x124)) || NAN(fStack_41c) ||
             (*(float *)(pbStack_f8 + 0x134) != fStack_40c)) ||
            (NAN(*(float *)(pbStack_f8 + 0x134)) || NAN(fStack_40c))) ||
           ((*(float *)(pbStack_f8 + 0x138) != fStack_408 ||
            (NAN(*(float *)(pbStack_f8 + 0x138)) || NAN(fStack_408))))))))) ||
        ((*(float *)(pbStack_f8 + 0x13c) != fStack_404 ||
         ((NAN(*(float *)(pbStack_f8 + 0x13c)) || NAN(fStack_404) ||
          (*(float *)(pbStack_f8 + 0x140) != fStack_400)))))) ||
       (((NAN(*(float *)(pbStack_f8 + 0x140)) || NAN(fStack_400) ||
         (((*(float *)(pbStack_f8 + 0x128) != fStack_418 ||
           (NAN(*(float *)(pbStack_f8 + 0x128)) || NAN(fStack_418))) ||
          (*(float *)(pbStack_f8 + 300) != fStack_414)))) ||
        (NAN(*(float *)(pbStack_f8 + 300)) || NAN(fStack_414))))) {
LAB_140b8243b:
      *(float *)(pbStack_f8 + 0x140) = fStack_400;
      *(float *)(pbStack_f8 + 0x130) = fStack_410;
      *(float *)(pbStack_f8 + 0x134) = fStack_40c;
      *(float *)(pbStack_f8 + 0x138) = fStack_408;
      *(float *)(pbStack_f8 + 0x13c) = fStack_404;
      *(float *)(pbStack_f8 + 0x120) = fStack_420;
      *(float *)(pbStack_f8 + 0x124) = fStack_41c;
      *(float *)(pbStack_f8 + 0x128) = fStack_418;
      *(float *)(pbStack_f8 + 300) = fStack_414;
      pdb_14007ee60();
      pfVar39 = (float *)pub_1406abab0(0x24,4);
      if (pfVar39 == (float *)0x0) {
                    /* WARNING: Subroutine does not return */
        pdb_142dc7e11(4,0x24);
      }
      pfVar39[8] = fStack_400;
      pfVar39[4] = fStack_410;
      pfVar39[5] = fStack_40c;
      pfVar39[6] = fStack_408;
      pfVar39[7] = fStack_404;
      *pfVar39 = fStack_420;
      pfVar39[1] = fStack_41c;
      pfVar39[2] = fStack_418;
      pfVar39[3] = fStack_414;
      uStack_300 = CONCAT71(uStack_300._1_7_,3);
      uStack_310._0_4_ = SUB84(pfVar39,0);
      uStack_310._4_4_ = (float)((ulonglong)pfVar39 >> 0x20);
      uStack_308 = &UNK_14305cfd0;
      uStack_318._0_4_ = 6;
      uStack_318._4_4_ = 0;
      pdb_141a55160(&uStack_3d8,pbStack_f8);
      if ((int)uStack_3d8 != 0xb) {
        uStack_2e8 = uStack_3a8;
        uStack_2e0 = (undefined *)CONCAT44(uStack_39c,iStack_3a0);
        puStack_2f8 = puStack_3b8;
        uStack_2f0 = uStack_3b0;
        uStack_308 = uStack_3c8;
        uStack_300 = uStack_3c0;
        uStack_318._0_4_ = (int)uStack_3d8;
        uStack_318._4_4_ = uStack_3d8._4_4_;
        uStack_310 = uStack_3d0;
                    /* WARNING: Subroutine does not return */
        pdb_142dc8170(&UNK_14305d3a8,0x2b,&uStack_318,&UNK_14305d3d8,&UNK_14305cff0);
      }
    }
    else if ((*(float *)(pbStack_f8 + 0x130) != fStack_410) ||
            (NAN(*(float *)(pbStack_f8 + 0x130)) || NAN(fStack_410))) goto LAB_140b8243b;
    pbVar43 = pbStack_f8;
    fVar69 = *(float *)(pbStack_120 + 0xc);
    if ((*(float *)(pbStack_f8 + 0x100) != fVar69) ||
       (NAN(*(float *)(pbStack_f8 + 0x100)) || NAN(fVar69))) {
      fVar45 = *(float *)(pbStack_120 + 0x10);
LAB_140b8274d:
      uVar8 = *(undefined2 *)(pbStack_120 + 0x28);
      iVar33 = *(int *)(pbStack_120 + 0x24);
      uVar13 = *(undefined8 *)(pbStack_120 + 4);
      uVar26 = *(undefined8 *)(pbStack_120 + 0x14);
      uVar27 = *(undefined8 *)(pbStack_120 + 0x1c);
      *(int *)(pbStack_f8 + 0xf4) = *(int *)pbStack_120;
      *(undefined8 *)(pbStack_f8 + 0xf8) = uVar13;
      *(float *)(pbStack_f8 + 0x100) = fVar69;
      *(float *)(pbStack_f8 + 0x104) = fVar45;
      *(undefined8 *)(pbStack_f8 + 0x108) = uVar26;
      *(undefined8 *)(pbStack_f8 + 0x110) = uVar27;
      *(int *)(pbStack_f8 + 0x118) = iVar33;
      *(undefined2 *)(pbStack_f8 + 0x11c) = uVar8;
      uVar8 = *(undefined2 *)(pbStack_120 + 0x28);
      iVar3 = *(int *)pbStack_120;
      uVar13 = *(undefined8 *)(pbStack_120 + 4);
      uVar26 = *(undefined8 *)(pbStack_120 + 0xc);
      uVar27 = *(undefined8 *)(pbStack_120 + 0x14);
      uVar28 = *(undefined8 *)(pbStack_120 + 0x1c);
      iVar33 = *(int *)(pbStack_120 + 0x24);
      pdb_14007ee60();
      pbVar51 = pub_1406abab0(0x2c,4);
      if (pbVar51 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
        pdb_142dc7e11(4,0x2c);
      }
      *(int *)pbVar51 = iVar3;
      *(undefined8 *)(pbVar51 + 4) = uVar13;
      *(undefined8 *)(pbVar51 + 0xc) = uVar26;
      *(undefined8 *)(pbVar51 + 0x14) = uVar27;
      *(undefined8 *)(pbVar51 + 0x1c) = uVar28;
      *(int *)(pbVar51 + 0x24) = iVar33;
      *(undefined2 *)(pbVar51 + 0x28) = uVar8;
      uStack_300 = CONCAT71(uStack_300._1_7_,4);
      uStack_310._0_4_ = SUB84(pbVar51,0);
      uStack_310._4_4_ = (float)((ulonglong)pbVar51 >> 0x20);
      uStack_308 = &UNK_14305d008;
      uStack_318._0_4_ = 6;
      uStack_318._4_4_ = 0;
      pdb_141a55160(&uStack_3d8,pbVar43);
      pbVar51 = pbStack_108;
      if ((int)uStack_3d8 != 0xb) {
        uStack_2e8 = uStack_3a8;
        uStack_2e0 = (undefined *)CONCAT44(uStack_39c,iStack_3a0);
        puStack_2f8 = puStack_3b8;
        uStack_2f0 = uStack_3b0;
        uStack_308 = uStack_3c8;
        uStack_300 = uStack_3c0;
        uStack_318._0_4_ = (int)uStack_3d8;
        uStack_318._4_4_ = uStack_3d8._4_4_;
        uStack_310 = uStack_3d0;
                    /* WARNING: Subroutine does not return */
        pdb_142dc8170(&UNK_14305d3a8,0x2b,&uStack_318,&UNK_14305d3d8,&UNK_14305d028);
      }
    }
    else {
      fVar45 = *(float *)(pbStack_120 + 0x10);
      if (((((*(float *)(pbStack_f8 + 0x104) != fVar45) ||
            (NAN(*(float *)(pbStack_f8 + 0x104)) || NAN(fVar45))) ||
           (*(short *)(pbStack_f8 + 0x11c) != *(short *)(pbStack_120 + 0x28))) ||
          (((*(float *)(pbStack_f8 + 0x108) != *(float *)(pbStack_120 + 0x14) ||
            (NAN(*(float *)(pbStack_f8 + 0x108)) || NAN(*(float *)(pbStack_120 + 0x14)))) ||
           ((*(float *)(pbStack_f8 + 0x10c) != *(float *)(pbStack_120 + 0x18) ||
            ((NAN(*(float *)(pbStack_f8 + 0x10c)) || NAN(*(float *)(pbStack_120 + 0x18)) ||
             (*(float *)(pbStack_f8 + 0x110) != *(float *)(pbStack_120 + 0x1c))))))))) ||
         ((NAN(*(float *)(pbStack_f8 + 0x110)) || NAN(*(float *)(pbStack_120 + 0x1c)) ||
          (((((((*(float *)(pbStack_f8 + 0x114) != *(float *)(pbStack_120 + 0x20) ||
                (NAN(*(float *)(pbStack_f8 + 0x114)) || NAN(*(float *)(pbStack_120 + 0x20)))) ||
               (*(float *)(pbStack_f8 + 0x118) != *(float *)(pbStack_120 + 0x24))) ||
              ((NAN(*(float *)(pbStack_f8 + 0x118)) || NAN(*(float *)(pbStack_120 + 0x24)) ||
               (*(float *)(pbStack_f8 + 0xfc) != *(float *)(pbStack_120 + 8))))) ||
             (NAN(*(float *)(pbStack_f8 + 0xfc)) || NAN(*(float *)(pbStack_120 + 8)))) ||
            (*(int *)(pbStack_f8 + 0xf4) != *(int *)pbStack_120)) ||
           ((*(int *)(pbStack_f8 + 0xf4) != 0 &&
            ((*(float *)(pbStack_f8 + 0xf8) != *(float *)(pbStack_120 + 4) ||
             (NAN(*(float *)(pbStack_f8 + 0xf8)) || NAN(*(float *)(pbStack_120 + 4))))))))))))
      goto LAB_140b8274d;
    }
    pbVar43 = pbStack_f8;
    bVar41 = (byte)puStack_180;
    if ((((*(float *)(pbStack_f8 + 0x78) != (float)uVar49) ||
         (NAN(*(float *)(pbStack_f8 + 0x78)) || NAN((float)uVar49))) ||
        (*(float *)(pbStack_f8 + 0x7c) != fVar70)) ||
       (((NAN(*(float *)(pbStack_f8 + 0x7c)) || NAN(fVar70) ||
         (*(float *)(pbStack_f8 + 0x80) != fVar1)) ||
        ((NAN(*(float *)(pbStack_f8 + 0x80)) || NAN(fVar1) ||
         (pbStack_f8[0x84] != (byte)puStack_180)))))) {
      *(undefined8 *)(pbStack_f8 + 0x78) = uVar49;
      *(float *)(pbStack_f8 + 0x80) = fVar1;
      pbStack_f8[0x84] = (byte)puStack_180;
      pdb_14007ee60();
      pbVar46 = pub_1406abab0(0x10,4);
      if (pbVar46 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
        pdb_142dc7e11(4,0x10);
      }
      *(undefined8 *)pbVar46 = uVar49;
      *(float *)(pbVar46 + 8) = fVar1;
      pbVar46[0xc] = bVar41;
      uStack_300 = CONCAT71(uStack_300._1_7_,5);
      uStack_310._0_4_ = SUB84(pbVar46,0);
      uStack_310._4_4_ = (float)((ulonglong)pbVar46 >> 0x20);
      uStack_308 = &UNK_14305d040;
      uStack_318._0_4_ = 6;
      uStack_318._4_4_ = 0;
      pdb_141a55160(&uStack_3d8,pbVar43);
      if ((int)uStack_3d8 != 0xb) {
        uStack_2e8 = uStack_3a8;
        uStack_2e0 = (undefined *)CONCAT44(uStack_39c,iStack_3a0);
        puStack_2f8 = puStack_3b8;
        uStack_2f0 = uStack_3b0;
        uStack_308 = uStack_3c8;
        uStack_300 = uStack_3c0;
        uStack_318._0_4_ = (int)uStack_3d8;
        uStack_318._4_4_ = uStack_3d8._4_4_;
        uStack_310 = uStack_3d0;
                    /* WARNING: Subroutine does not return */
        pdb_142dc8170(&UNK_14305d3a8,0x2b,&uStack_318,&UNK_14305d3d8,&UNK_14305d060);
      }
    }
    pbVar43 = pbStack_f8;
    bVar41 = (byte)pbStack_170;
    if (((*(float *)(pbStack_f8 + 0x70) != fVar2) ||
        (NAN(*(float *)(pbStack_f8 + 0x70)) || NAN(fVar2))) ||
       (pbStack_f8[0x74] != (byte)pbStack_170)) {
      *(float *)(pbStack_f8 + 0x70) = fVar2;
      pbStack_f8[0x74] = (byte)pbStack_170;
      pdb_14007ee60();
      pfVar39 = (float *)pub_1406abab0(8,4);
      if (pfVar39 == (float *)0x0) {
                    /* WARNING: Subroutine does not return */
        pdb_142dc7e11(4,8);
      }
      *pfVar39 = fVar2;
      *(byte *)(pfVar39 + 1) = bVar41;
      uStack_300 = CONCAT71(uStack_300._1_7_,6);
      uStack_310._0_4_ = SUB84(pfVar39,0);
      uStack_310._4_4_ = (float)((ulonglong)pfVar39 >> 0x20);
      uStack_308 = &UNK_14305d078;
      uStack_318._0_4_ = 6;
      uStack_318._4_4_ = 0;
      pdb_141a55160(&uStack_3d8,pbVar43);
      if ((int)uStack_3d8 != 0xb) {
        uStack_2e8 = uStack_3a8;
        uStack_2e0 = (undefined *)CONCAT44(uStack_39c,iStack_3a0);
        puStack_2f8 = puStack_3b8;
        uStack_2f0 = uStack_3b0;
        uStack_308 = uStack_3c8;
        uStack_300 = uStack_3c0;
        uStack_318._0_4_ = (int)uStack_3d8;
        uStack_318._4_4_ = uStack_3d8._4_4_;
        uStack_310 = uStack_3d0;
                    /* WARNING: Subroutine does not return */
        pdb_142dc8170(&UNK_14305d3a8,0x2b,&uStack_318,&UNK_14305d3d8,&UNK_14305d098);
      }
    }
    pbVar43 = pbStack_110;
    if ((SBORROW8(0,(longlong)pbStack_110)) || (SBORROW8(0,*(longlong *)(pbStack_f8 + 0x58)))) {
      if (*(longlong *)(pbStack_f8 + 0x58) != -0x8000000000000000 ||
          pbStack_110 != (byte *)0x8000000000000000) {
LAB_140b82a2b:
        if (!SBORROW8(0,(longlong)pbStack_110)) goto LAB_140b82a45;
        pbVar46 = pbStack_f8;
        pbVar56 = (byte *)0x8000000000000000;
        goto LAB_140b8305a;
      }
    }
    else if (*(byte **)(pbStack_f8 + 0x68) == pbVar59) {
      if (pbVar59 != (byte *)0x0) {
        lVar34 = *(longlong *)(pbStack_f8 + 0x60);
        lVar42 = 0x24;
        pbVar46 = pbVar59;
        do {
          fVar1 = *(float *)(lVar34 + -8 + lVar42);
          if (((((fVar1 != *(float *)(pbStack_128 + lVar42 + -8)) ||
                (NAN(fVar1) || NAN(*(float *)(pbStack_128 + lVar42 + -8)))) ||
               (fVar1 = *(float *)(lVar34 + -4 + lVar42),
               fVar1 != *(float *)(pbStack_128 + lVar42 + -4))) ||
              ((NAN(fVar1) || NAN(*(float *)(pbStack_128 + lVar42 + -4)) ||
               (*(float *)(lVar34 + lVar42) != *(float *)(pbStack_128 + lVar42))))) ||
             (NAN(*(float *)(lVar34 + lVar42)) || NAN(*(float *)(pbStack_128 + lVar42))))
          goto LAB_140b82a2b;
          if (*(int *)(lVar34 + -0x24 + lVar42) == 1) {
            if (((pbStack_128[lVar42 + -0x24] == 0) ||
                (fVar1 = *(float *)(lVar34 + -0x20 + lVar42),
                fVar1 != *(float *)(pbStack_128 + lVar42 + -0x20))) ||
               ((NAN(fVar1) || NAN(*(float *)(pbStack_128 + lVar42 + -0x20)) ||
                ((fVar1 = *(float *)(lVar34 + -0x1c + lVar42),
                 fVar1 != *(float *)(pbStack_128 + lVar42 + -0x1c) ||
                 (NAN(fVar1) || NAN(*(float *)(pbStack_128 + lVar42 + -0x1c))))))))
            goto LAB_140b82a2b;
            fVar1 = *(float *)(lVar34 + -0x18 + lVar42);
            if ((fVar1 != *(float *)(pbStack_128 + lVar42 + -0x18)) ||
               (NAN(fVar1) || NAN(*(float *)(pbStack_128 + lVar42 + -0x18)))) goto LAB_140b82a2b;
          }
          else if (pbStack_128[lVar42 + -0x24] != 0) goto LAB_140b82a2b;
          bVar41 = *(byte *)(lVar34 + -0x14 + lVar42);
          if (bVar41 != pbStack_128[lVar42 + -0x14]) goto LAB_140b82a2b;
          if (bVar41 == 0) {
            fVar1 = *(float *)(lVar34 + -0x10 + lVar42);
            if ((fVar1 != *(float *)(pbStack_128 + lVar42 + -0x10)) ||
               (NAN(fVar1) || NAN(*(float *)(pbStack_128 + lVar42 + -0x10)))) goto LAB_140b82a2b;
          }
          else {
            fVar1 = *(float *)(lVar34 + -0x10 + lVar42);
            if ((fVar1 != *(float *)(pbStack_128 + lVar42 + -0x10)) ||
               ((((NAN(fVar1) || NAN(*(float *)(pbStack_128 + lVar42 + -0x10)) ||
                  (fVar1 = *(float *)(lVar34 + -0xc + lVar42),
                  fVar1 != *(float *)(pbStack_128 + lVar42 + -0xc))) ||
                 (NAN(fVar1) || NAN(*(float *)(pbStack_128 + lVar42 + -0xc)))) ||
                (*(byte *)(lVar34 + -0x13 + lVar42) != pbStack_128[lVar42 + -0x13]))))
            goto LAB_140b82a2b;
          }
          lVar42 = lVar42 + 0x28;
          pbVar46 = pbVar46 + -1;
        } while (pbVar46 != (byte *)0x0);
      }
    }
    else {
LAB_140b82a45:
      uVar35 = (longlong)pbVar59 * 0x28;
      if ((byte *)0x333333333333333 < pbVar59) {
        uVar49 = 0;
LAB_140b82a67:
        pdb_142dc7e2a(uVar49,uVar35);
        goto LAB_140b84ad4;
      }
      if (uVar35 == 0) {
        pbVar46 = (byte *)0x4;
      }
      else {
        pdb_14007ee60();
        uVar49 = 4;
        pbVar46 = pub_1406abab0(uVar35,4);
        if (pbVar46 == (byte *)0x0) goto LAB_140b82a67;
        if (pbVar59 != (byte *)0x0) {
          uVar50 = 0;
          pbVar51 = pbVar59;
          pbVar56 = pbStack_128;
          do {
            if (uVar35 == uVar50) break;
            if (*(int *)pbVar56 == 1) {
              uStack_310._0_4_ = *(float *)(pbStack_128 + uVar50 + 0xc);
              uStack_318._0_4_ = (int)*(undefined8 *)(pbStack_128 + uVar50 + 4);
              uStack_318._4_4_ = (int)((ulonglong)*(undefined8 *)(pbStack_128 + uVar50 + 4) >> 0x20)
              ;
            }
            pbVar51 = pbVar51 + -1;
            uStack_3d0._0_4_ = (float)uStack_310;
            uStack_3d8._0_4_ = (int)uStack_318;
            uStack_3d8._4_4_ = uStack_318._4_4_;
            *(uint *)(pbVar46 + uVar50) = (uint)(*(int *)pbVar56 == 1);
            *(float *)(pbVar46 + uVar50 + 0xc) = (float)uStack_310;
            *(ulonglong *)(pbVar46 + uVar50 + 4) = CONCAT44(uStack_318._4_4_,(int)uStack_318);
            *(undefined8 *)(pbVar46 + uVar50 + 0x10) = *(undefined8 *)(pbVar56 + 0x10);
            *(int *)(pbVar46 + uVar50 + 0x18) = *(int *)(pbVar56 + 0x18);
            *(undefined8 *)(pbVar46 + uVar50 + 0x1c) = *(undefined8 *)(pbVar56 + 0x1c);
            pbVar38 = pbVar56 + 0x24;
            pbVar56 = pbVar56 + 0x28;
            *(int *)(pbVar46 + uVar50 + 0x24) = *(int *)pbVar38;
            uVar50 = uVar50 + 0x28;
          } while (pbVar51 != (byte *)0x0);
          pbVar56 = pbVar59;
          goto LAB_140b8305a;
        }
      }
      pbVar56 = (byte *)0x0;
LAB_140b8305a:
      pbVar38 = pbStack_f8;
      lVar34 = *(longlong *)(pbStack_f8 + 0x58);
      if ((!SBORROW8(0,lVar34)) && (lVar34 != 0)) {
        pub_1406abac0(*(byte **)(pbStack_f8 + 0x60),lVar34 * 0x28,4);
      }
      pbVar51 = pbStack_108;
      *(byte **)(pbVar38 + 0x58) = pbVar56;
      *(byte **)(pbVar38 + 0x60) = pbVar46;
      *(byte **)(pbVar38 + 0x68) = pbVar56;
      if (SBORROW8(0,(longlong)pbVar43)) {
        pbVar59 = (byte *)0x8000000000000000;
        pbVar38 = uStack_3d0;
      }
      else {
        uVar35 = (longlong)pbVar59 * 0x28;
        if ((byte *)0x333333333333333 < pbVar59) {
          uVar49 = 0;
LAB_140b830cd:
          pdb_142dc7e2a(uVar49,uVar35);
          goto LAB_140b84ad4;
        }
        if (uVar35 == 0) {
          pbVar43 = (byte *)0x4;
        }
        else {
          pdb_14007ee60();
          uVar49 = 4;
          pbVar43 = pub_1406abab0(uVar35,4);
          if (pbVar43 == (byte *)0x0) goto LAB_140b830cd;
          if (pbVar59 != (byte *)0x0) {
            uVar50 = 0;
            pbVar46 = pbVar59;
            pbVar56 = pbStack_128;
            do {
              pbVar38 = (byte *)CONCAT44(uStack_3d0._4_4_,(float)uStack_3d0);
              if (uVar35 == uVar50) break;
              if (*(int *)pbVar56 == 1) {
                uStack_310._0_4_ = *(float *)(pbStack_128 + uVar50 + 0xc);
                uStack_318._0_4_ = (int)*(undefined8 *)(pbStack_128 + uVar50 + 4);
                uStack_318._4_4_ =
                     (int)((ulonglong)*(undefined8 *)(pbStack_128 + uVar50 + 4) >> 0x20);
              }
              pbVar46 = pbVar46 + -1;
              uStack_3d0._0_4_ = (float)uStack_310;
              uStack_3d8._0_4_ = (int)uStack_318;
              uStack_3d8._4_4_ = uStack_318._4_4_;
              *(uint *)(pbVar43 + uVar50) = (uint)(*(int *)pbVar56 == 1);
              *(float *)(pbVar43 + uVar50 + 0xc) = (float)uStack_310;
              *(ulonglong *)(pbVar43 + uVar50 + 4) = CONCAT44(uStack_318._4_4_,(int)uStack_318);
              *(undefined8 *)(pbVar43 + uVar50 + 0x10) = *(undefined8 *)(pbVar56 + 0x10);
              *(int *)(pbVar43 + uVar50 + 0x18) = *(int *)(pbVar56 + 0x18);
              *(undefined8 *)(pbVar43 + uVar50 + 0x1c) = *(undefined8 *)(pbVar56 + 0x1c);
              pbVar38 = pbVar56 + 0x24;
              pbVar56 = pbVar56 + 0x28;
              *(int *)(pbVar43 + uVar50 + 0x24) = *(int *)pbVar38;
              uVar50 = uVar50 + 0x28;
              pbVar38 = (byte *)CONCAT44(uStack_3d0._4_4_,(float)uStack_310);
            } while (pbVar46 != (byte *)0x0);
            goto LAB_140b832c0;
          }
        }
        pbVar59 = (byte *)0x0;
        pbVar38 = uStack_3d0;
      }
LAB_140b832c0:
      uStack_3d0 = pbVar38;
      pdb_14007ee60();
      pbVar46 = pub_1406abab0(0x18,8);
      if (pbVar46 == (byte *)0x0) {
        pbStack_120 = pbVar59;
        pbStack_f8 = pbVar43;
                    /* WARNING: Subroutine does not return */
        pdb_142dc7e11(8,0x18);
      }
      *(byte **)pbVar46 = pbVar59;
      *(byte **)(pbVar46 + 8) = pbVar43;
      *(byte **)(pbVar46 + 0x10) = pbVar59;
      uStack_300 = CONCAT71(uStack_300._1_7_,7);
      uStack_310._0_4_ = SUB84(pbVar46,0);
      uStack_310._4_4_ = (float)((ulonglong)pbVar46 >> 0x20);
      uStack_308 = &UNK_14305d0b0;
      uStack_318._0_4_ = 6;
      uStack_318._4_4_ = 0;
      pdb_141a55160(&uStack_3d8,pbStack_f8);
      if ((int)uStack_3d8 != 0xb) {
        uStack_2e8 = uStack_3a8;
        uStack_2e0 = (undefined *)CONCAT44(uStack_39c,iStack_3a0);
        puStack_2f8 = puStack_3b8;
        uStack_2f0 = uStack_3b0;
        uStack_308 = uStack_3c8;
        uStack_300 = uStack_3c0;
        uStack_318._0_4_ = (int)uStack_3d8;
        uStack_318._4_4_ = uStack_3d8._4_4_;
        uStack_310 = uStack_3d0;
                    /* WARNING: Subroutine does not return */
        pdb_142dc8170(&UNK_14305d3a8,0x2b,&uStack_318,&UNK_14305d3d8,&UNK_14305d0d0);
      }
    }
    fVar1 = *(float *)(pbVar51 + 0x58);
    pbVar56 = pbVar51;
    pbVar46 = uStack_3d0;
    if ((*(float *)(pbStack_f8 + 0xe8) != fVar1) ||
       (NAN(*(float *)(pbStack_f8 + 0xe8)) || NAN(fVar1))) {
      uVar32 = *(uint *)(pbVar51 + 0x28);
LAB_140b834b5:
      uStack_3d0._4_4_ = (float)((ulonglong)pbVar46 >> 0x20);
      iVar4 = *(int *)(pbVar56 + 0x2c);
      iVar11 = *(int *)(pbVar56 + 0x30);
      iVar20 = *(int *)(pbVar56 + 0x34);
      iVar21 = *(int *)(pbVar56 + 0x38);
      bVar41 = pbVar56[0x60];
      iVar33 = *(int *)(pbVar56 + 0x3c);
      iVar22 = *(int *)(pbVar56 + 0x40);
      iVar23 = *(int *)(pbVar56 + 0x44);
      iVar24 = *(int *)(pbVar56 + 0x48);
      iVar25 = *(int *)(pbVar56 + 0x4c);
      iVar10 = *(int *)(pbVar56 + 4);
      uVar49 = *(undefined8 *)(pbVar56 + 0x50);
      iVar3 = *(int *)(pbVar56 + 0x5c);
      bVar31 = pbVar56[0x1c];
      if (bVar31 != 3) {
        uStack_310._0_3_ = (undefined3)((uint)*(int *)(pbVar56 + 0x24) >> 8);
        uStack_318._0_4_ = (int)*(undefined8 *)(pbVar56 + 0x1d);
        uStack_318._4_4_ = (int)((ulonglong)*(undefined8 *)(pbVar56 + 0x1d) >> 0x20);
      }
      uVar8 = *(undefined2 *)(pbVar56 + 0x18);
      uStack_3d0._3_1_ = (undefined1)((ulonglong)pbVar46 >> 0x18);
      uVar13 = *(undefined8 *)(pbVar56 + 8);
      uVar26 = *(undefined8 *)(pbVar56 + 0x10);
      *(int *)(pbStack_f8 + 0x90) = *(int *)pbVar56;
      *(int *)(pbStack_f8 + 0x94) = iVar10;
      *(undefined8 *)(pbStack_f8 + 0x98) = uVar13;
      *(undefined8 *)(pbStack_f8 + 0xa0) = uVar26;
      *(undefined2 *)(pbStack_f8 + 0xa8) = uVar8;
      pbStack_f8[0xac] = bVar31;
      *(ulonglong *)(pbStack_f8 + 0xad) = CONCAT44(uStack_318._4_4_,(int)uStack_318);
      *(int *)(pbStack_f8 + 0xb4) = CONCAT31((undefined3)uStack_310,uStack_318._7_1_);
      *(uint *)(pbStack_f8 + 0xb8) = uVar32;
      *(int *)(pbStack_f8 + 0xbc) = iVar4;
      *(int *)(pbStack_f8 + 0xc0) = iVar11;
      *(int *)(pbStack_f8 + 0xc4) = iVar20;
      *(int *)(pbStack_f8 + 200) = iVar21;
      *(int *)(pbStack_f8 + 0xcc) = iVar33;
      *(int *)(pbStack_f8 + 0xd0) = iVar22;
      *(int *)(pbStack_f8 + 0xd4) = iVar23;
      *(int *)(pbStack_f8 + 0xd8) = iVar24;
      *(int *)(pbStack_f8 + 0xdc) = iVar25;
      *(undefined8 *)(pbStack_f8 + 0xe0) = uVar49;
      *(float *)(pbStack_f8 + 0xe8) = fVar1;
      *(int *)(pbStack_f8 + 0xec) = iVar3;
      pbStack_f8[0xf0] = bVar41;
      iVar33 = *(int *)pbVar56;
      uVar32 = *(uint *)(pbVar56 + 4);
      pbVar43 = (byte *)(ulonglong)uVar32;
      bVar41 = pbVar56[0x1c];
      in_stack_fffffffffffffa58 = (byte *)(ulonglong)bVar41;
      if (bVar41 != 3) {
        uStack_310._0_3_ = (undefined3)((uint)*(int *)(pbVar56 + 0x24) >> 8);
        uStack_318._0_4_ = (int)*(undefined8 *)(pbVar56 + 0x1d);
        uStack_318._4_4_ = (int)((ulonglong)*(undefined8 *)(pbVar56 + 0x1d) >> 0x20);
      }
      uVar13 = *(undefined8 *)(pbVar56 + 0x28);
      uVar26 = *(undefined8 *)(pbVar56 + 0x30);
      iVar11 = *(int *)(pbVar56 + 0x38);
      bVar31 = pbVar56[0x60];
      iVar3 = *(int *)(pbVar56 + 0x3c);
      uVar27 = *(undefined8 *)(pbVar56 + 0x40);
      uVar28 = *(undefined8 *)(pbVar56 + 0x48);
      uVar49 = *(undefined8 *)(pbVar56 + 0x50);
      iVar10 = *(int *)(pbVar56 + 0x5c);
      iVar4 = *(int *)(pbVar56 + 0x58);
      bVar5 = pbVar56[0x18];
      bVar6 = pbVar56[0x19];
      pbVar59 = (byte *)(ulonglong)bVar6;
      uVar48 = *(undefined8 *)(pbVar56 + 8);
      uVar29 = *(undefined8 *)(pbVar56 + 0x10);
      uStack_3d0._0_4_ = (float)CONCAT13(uStack_3d0._3_1_,SUB43((float)uStack_310,0));
      uStack_3d8._0_4_ = (int)uStack_318;
      uStack_3d8._4_4_ = uStack_318._4_4_;
      pbStack_120 = pbVar58;
      pbStack_108 = param_2;
      pdb_14007ee60();
      pbVar51 = pub_1406abab0(100,4);
      if (pbVar51 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
        pdb_142dc7e11(4,100);
      }
      *(int *)pbVar51 = iVar33;
      *(uint *)(pbVar51 + 4) = uVar32;
      *(undefined8 *)(pbVar51 + 8) = uVar48;
      *(undefined8 *)(pbVar51 + 0x10) = uVar29;
      pbVar51[0x18] = bVar5;
      pbVar51[0x19] = bVar6;
      pbVar51[0x1c] = bVar41;
      *(ulonglong *)(pbVar51 + 0x1d) = CONCAT44(uStack_3d8._4_4_,(int)uStack_3d8);
      *(uint *)(pbVar51 + 0x24) = CONCAT31((undefined3)uStack_3d0,uStack_3d8._7_1_);
      *(undefined8 *)(pbVar51 + 0x28) = uVar13;
      *(undefined8 *)(pbVar51 + 0x30) = uVar26;
      *(int *)(pbVar51 + 0x38) = iVar11;
      *(int *)(pbVar51 + 0x3c) = iVar3;
      *(undefined8 *)(pbVar51 + 0x40) = uVar27;
      *(undefined8 *)(pbVar51 + 0x48) = uVar28;
      *(undefined8 *)(pbVar51 + 0x50) = uVar49;
      *(int *)(pbVar51 + 0x58) = iVar4;
      *(int *)(pbVar51 + 0x5c) = iVar10;
      pbVar51[0x60] = bVar31;
      uStack_300 = CONCAT71(uStack_300._1_7_,8);
      uStack_310._0_4_ = SUB84(pbVar51,0);
      uStack_310._4_4_ = (float)((ulonglong)pbVar51 >> 0x20);
      uStack_308 = &UNK_14305d0e8;
      uStack_318._0_4_ = 6;
      uStack_318._4_4_ = 0;
      pdb_141a55160(&uStack_3d8,pbStack_f8);
      pbVar58 = pbStack_120;
      param_2 = pbStack_108;
      if ((int)uStack_3d8 != 0xb) {
        uStack_2e8 = uStack_3a8;
        uStack_2e0 = (undefined *)CONCAT44(uStack_39c,iStack_3a0);
        puStack_2f8 = puStack_3b8;
        uStack_2f0 = uStack_3b0;
        uStack_308 = uStack_3c8;
        uStack_300 = uStack_3c0;
        uStack_318._0_4_ = (int)uStack_3d8;
        uStack_318._4_4_ = uStack_3d8._4_4_;
        uStack_310._0_4_ = (float)uStack_3d0;
        uStack_310._4_4_ = uStack_3d0._4_4_;
                    /* WARNING: Subroutine does not return */
        pdb_142dc8170(&UNK_14305d3a8,0x2b,&uStack_318,&UNK_14305d3d8,&UNK_14305d108);
      }
    }
    else {
      uVar9 = *(uint *)(pbStack_f8 + 0xb8);
      in_stack_fffffffffffffa58 = (byte *)(ulonglong)uVar9;
      uVar32 = *(uint *)(pbVar51 + 0x28);
      if ((((uVar9 != *(uint *)(pbVar51 + 0x28)) ||
           (uVar32 = uVar9, *(int *)(pbStack_f8 + 0xbc) != *(int *)(pbVar51 + 0x2c))) ||
          (*(int *)(pbStack_f8 + 0xc0) != *(int *)(pbVar51 + 0x30))) ||
         ((((((*(int *)(pbStack_f8 + 0xc4) != *(int *)(pbVar51 + 0x34) ||
              (*(int *)(pbStack_f8 + 200) != *(int *)(pbVar51 + 0x38))) ||
             ((pbStack_f8[0xef] != pbVar51[0x5f] ||
              ((pbVar51[0x60] != pbStack_f8[0xf0] ||
               (*(float *)(pbStack_f8 + 0xcc) != *(float *)(pbVar51 + 0x3c))))))) ||
            (NAN(*(float *)(pbStack_f8 + 0xcc)) || NAN(*(float *)(pbVar51 + 0x3c)))) ||
           (((pbStack_f8[0xec] != pbVar51[0x5c] || (pbStack_f8[0xed] != pbVar51[0x5d])) ||
            (*(int *)(pbStack_f8 + 0xd0) != *(int *)(pbVar51 + 0x40))))) ||
          (((*(int *)(pbStack_f8 + 0xd4) != *(int *)(pbVar51 + 0x44) ||
            (*(int *)(pbStack_f8 + 0xd8) != *(int *)(pbVar51 + 0x48))) ||
           ((pbVar56 = pbStack_108, *(int *)(pbStack_f8 + 0xdc) != *(int *)(pbVar51 + 0x4c) ||
            (*(int *)(pbStack_f8 + 0xe0) != *(int *)(pbStack_108 + 0x50))))))))) goto LAB_140b834b5;
      if (*(int *)(pbStack_f8 + 0x90) != 1) {
        if ((*pbStack_108 & 1) == 0) goto LAB_140b84ade;
        goto LAB_140b834b5;
      }
      if ((*pbStack_108 & *(int *)(pbStack_f8 + 0x94) == *(int *)(pbStack_108 + 4)) == 0)
      goto LAB_140b834b5;
LAB_140b84ade:
      if ((*(int *)(pbStack_f8 + 0xe4) != *(int *)(pbStack_108 + 0x54)) ||
         (pbStack_f8[0xee] != pbStack_108[0x5e])) goto LAB_140b834b5;
      cVar30 = pdb_140b87f00(pbStack_f8 + 0xac,pbStack_108 + 0x1c);
      pbVar56 = pbStack_108;
      pbVar46 = uStack_3d0;
      if (cVar30 == '\0') goto LAB_140b834b5;
      cVar30 = pdb_140b80bb0(pbStack_f8 + 0x98,pbStack_108 + 8);
      pbVar46 = uStack_3d0;
      if (cVar30 == '\0') goto LAB_140b834b5;
    }
    lVar34 = *(longlong *)(pbStack_f8 + 0x38);
    if (lVar34 == *(longlong *)(uStack_160 + 0x10)) {
      if (lVar34 != 0) {
        lVar42 = 0;
        do {
          lVar14 = lVar42 * 0x18;
          pbVar51 = *(byte **)(*(longlong *)(pbStack_f8 + 0x30) + 0x10 + lVar14);
          if (pbVar51 != *(byte **)(*(longlong *)(uStack_160 + 8) + 0x10 + lVar14))
          goto LAB_140b83794;
          if (pbVar51 != (byte *)0x0) {
            in_stack_fffffffffffffa58 = (byte *)0x0;
            do {
              if (*(longlong *)
                   (*(longlong *)(*(longlong *)(pbStack_f8 + 0x30) + lVar14 + 8) +
                   (longlong)in_stack_fffffffffffffa58 * 8) !=
                  *(longlong *)
                   (*(longlong *)(lVar14 + *(longlong *)(uStack_160 + 8) + 8) +
                   (longlong)in_stack_fffffffffffffa58 * 8)) goto LAB_140b83794;
              in_stack_fffffffffffffa58 = in_stack_fffffffffffffa58 + 1;
            } while (pbVar51 != in_stack_fffffffffffffa58);
          }
          lVar42 = lVar42 + 1;
        } while (lVar42 != lVar34);
      }
    }
    else {
LAB_140b83794:
      pdb_1415e5900(&uStack_318,uStack_160);
      in_stack_fffffffffffffa58 = *(byte **)(pbStack_f8 + 0x30);
      lVar34 = *(longlong *)(pbStack_f8 + 0x38);
      if (lVar34 != 0) {
        pbVar51 = in_stack_fffffffffffffa58 + 8;
        do {
          if (*(longlong *)(pbVar51 + -8) != 0) {
            pub_1406abac0(*(byte **)pbVar51,*(longlong *)(pbVar51 + -8) << 3,8);
          }
          pbVar51 = pbVar51 + 0x18;
          lVar34 = lVar34 + -1;
        } while (lVar34 != 0);
      }
      if (*(longlong *)param_2 != 0) {
        pub_1406abac0(in_stack_fffffffffffffa58,*(longlong *)param_2 * 0x18,8);
      }
      *(byte **)(param_2 + 0x10) = uStack_308;
      *(int *)param_2 = (int)uStack_318;
      *(int *)(param_2 + 4) = uStack_318._4_4_;
      *(float *)(param_2 + 8) = (float)uStack_310;
      *(float *)(param_2 + 0xc) = uStack_310._4_4_;
      pdb_1415e5900(&uStack_318,uStack_160);
      pdb_14007ee60();
      pbVar51 = pub_1406abab0(0x18,8);
      if (pbVar51 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
        pdb_142dc7e11(8,0x18);
      }
      *(byte **)(pbVar51 + 0x10) = uStack_308;
      *(int *)pbVar51 = (int)uStack_318;
      *(int *)(pbVar51 + 4) = uStack_318._4_4_;
      *(float *)(pbVar51 + 8) = (float)uStack_310;
      *(float *)(pbVar51 + 0xc) = uStack_310._4_4_;
      uStack_300 = CONCAT71(uStack_300._1_7_,9);
      uStack_310._0_4_ = SUB84(pbVar51,0);
      uStack_310._4_4_ = (float)((ulonglong)pbVar51 >> 0x20);
      uStack_308 = &UNK_14305d120;
      uStack_318._0_4_ = 6;
      uStack_318._4_4_ = 0;
      pdb_141a55160(&uStack_3d8,pbStack_f8,&uStack_318);
      if ((int)uStack_3d8 != 0xb) {
        uStack_2e8 = uStack_3a8;
        uStack_2e0 = (undefined *)CONCAT44(uStack_39c,iStack_3a0);
        puStack_2f8 = puStack_3b8;
        uStack_2f0 = uStack_3b0;
        uStack_308 = uStack_3c8;
        uStack_300 = uStack_3c0;
        uStack_318._0_4_ = (int)uStack_3d8;
        uStack_318._4_4_ = uStack_3d8._4_4_;
        uStack_310 = uStack_3d0;
                    /* WARNING: Subroutine does not return */
        pdb_142dc8170(&UNK_14305d3a8,0x2b,&uStack_318,&UNK_14305d3d8,&UNK_14305d140);
      }
      pbStack_f8[0x198] = 0;
      pbStack_f8[0x199] = 0;
      pbStack_f8[0x19a] = 0;
      pbStack_f8[0x19b] = 0;
    }
    pbVar51 = *(byte **)(pbStack_f8 + 0x50);
    puVar47 = *(undefined8 **)(pbVar58 + 0x20);
    param_2 = *(byte **)(pbVar58 + 0x28);
    if (pbVar51 == param_2) {
      if (pbVar51 != (byte *)0x0) {
        lVar34 = 8;
        do {
          if (*(int *)(*(longlong *)(pbStack_f8 + 0x48) + lVar34) !=
              *(int *)((longlong)puVar47 + lVar34)) goto LAB_140b83955;
          lVar42 = *(longlong *)(*(longlong *)(pbStack_f8 + 0x48) + -8 + lVar34);
          lVar14 = *(longlong *)((longlong)puVar47 + lVar34 + -8);
          uVar35 = *(ulonglong *)(lVar42 + 0x10);
          if (lVar42 == lVar14) {
            if (uVar35 < 2) goto LAB_140b83955;
          }
          else {
            uVar50 = *(ulonglong *)(lVar14 + 0x10);
            if (((uVar35 < 2) || (uVar50 < 2)) || (uVar35 != uVar50)) goto LAB_140b83955;
          }
          lVar34 = lVar34 + 0x10;
          pbVar51 = pbVar51 + -1;
        } while (pbVar51 != (byte *)0x0);
      }
    }
    else {
LAB_140b83955:
      uVar35 = (longlong)param_2 << 4;
      pbVar43 = (byte *)0x7ffffffffffffff8;
      if (0x7ffffffffffffff8 < uVar35 || (ulonglong)param_2 >> 0x3c != 0) {
        uVar49 = 0;
LAB_140b8397c:
        pdb_142dc7e2a(uVar49,uVar35);
        goto LAB_140b84ad4;
      }
      pbStack_108 = param_2;
      if (uVar35 == 0) {
        pbStack_120 = (byte *)0x8;
      }
      else {
        pdb_14007ee60();
        uVar49 = 8;
        pbVar51 = pub_1406abab0(uVar35,8);
        if (pbVar51 == (byte *)0x0) goto LAB_140b8397c;
        pbStack_120 = pbVar51;
        if (param_2 != (byte *)0x0) {
          uVar50 = 0;
          pbVar46 = param_2;
          do {
            if (uVar35 == uVar50) break;
            plVar36 = (longlong *)*puVar47;
            uVar44 = *(undefined4 *)(puVar47 + 1);
            LOCK();
            lVar34 = *plVar36;
            *plVar36 = *plVar36 + 1;
            UNLOCK();
            if (*plVar36 == 0 || SCARRY8(lVar34,1) != *plVar36 < 0) goto LAB_140b84ad4;
            pbVar46 = pbVar46 + -1;
            puVar47 = puVar47 + 2;
            *(longlong **)(pbVar51 + uVar50) = plVar36;
            *(undefined4 *)(pbVar51 + uVar50 + 8) = uVar44;
            uVar50 = uVar50 + 0x10;
          } while (pbVar46 != (byte *)0x0);
        }
      }
      pdb_1404d24f0(pbStack_f8 + 0x40);
      *(byte **)(pbStack_f8 + 0x40) = pbStack_108;
      *(byte **)(pbStack_f8 + 0x48) = pbStack_120;
      *(byte **)(pbStack_f8 + 0x50) = pbStack_108;
      uVar35 = *(ulonglong *)(pbVar58 + 0x28);
      in_stack_fffffffffffffa58 = (byte *)(uVar35 << 4);
      if ((byte *)0x7ffffffffffffff8 < in_stack_fffffffffffffa58 || uVar35 >> 0x3c != 0) {
        uVar49 = 0;
LAB_140b83a61:
        pdb_142dc7e2a(uVar49,in_stack_fffffffffffffa58);
LAB_140b84ad4:
                    /* WARNING: Does not return */
        pcVar15 = (code *)invalidInstructionException();
        (*pcVar15)();
      }
      if (in_stack_fffffffffffffa58 == (byte *)0x0) {
        pbVar51 = (byte *)0x8;
      }
      else {
        pbVar43 = *(byte **)(pbVar58 + 0x20);
        pdb_14007ee60();
        uVar49 = 8;
        pbVar51 = pub_1406abab0((ulonglong)in_stack_fffffffffffffa58,8);
        if (pbVar51 == (byte *)0x0) goto LAB_140b83a61;
        if (uVar35 != 0) {
          pbVar46 = (byte *)0x0;
          uVar50 = uVar35;
          do {
            if (in_stack_fffffffffffffa58 == pbVar46) break;
            plVar36 = *(longlong **)pbVar43;
            iVar33 = *(int *)(pbVar43 + 8);
            LOCK();
            lVar34 = *plVar36;
            *plVar36 = *plVar36 + 1;
            UNLOCK();
            if (*plVar36 == 0 || SCARRY8(lVar34,1) != *plVar36 < 0) goto LAB_140b84ad4;
            uVar50 = uVar50 - 1;
            pbVar43 = pbVar43 + 0x10;
            *(longlong **)(pbVar51 + (longlong)pbVar46) = plVar36;
            *(int *)(pbVar51 + 8 + (longlong)pbVar46) = iVar33;
            pbVar46 = pbVar46 + 0x10;
          } while (uVar50 != 0);
        }
      }
      uStack_318._0_4_ = (int)uVar35;
      uStack_318._4_4_ = (int)(uVar35 >> 0x20);
      uStack_310._0_4_ = SUB84(pbVar51,0);
      uStack_310._4_4_ = (float)((ulonglong)pbVar51 >> 0x20);
      uStack_308 = (byte *)uVar35;
      pdb_14007ee60();
      pbVar51 = pub_1406abab0(0x18,8);
      if (pbVar51 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
        pdb_142dc7e11(8,0x18);
      }
      *(byte **)(pbVar51 + 0x10) = uStack_308;
      *(int *)pbVar51 = (int)uStack_318;
      *(int *)(pbVar51 + 4) = uStack_318._4_4_;
      *(float *)(pbVar51 + 8) = (float)uStack_310;
      *(float *)(pbVar51 + 0xc) = uStack_310._4_4_;
      uStack_300 = CONCAT71(uStack_300._1_7_,0xc);
      uStack_310._0_4_ = SUB84(pbVar51,0);
      uStack_310._4_4_ = (float)((ulonglong)pbVar51 >> 0x20);
      uStack_308 = &UNK_14305d158;
      uStack_318._0_4_ = 6;
      uStack_318._4_4_ = 0;
      pdb_141a55160(&uStack_3d8,pbStack_f8,&uStack_318);
      if ((int)uStack_3d8 != 0xb) {
        uStack_2e8 = uStack_3a8;
        uStack_2e0 = (undefined *)CONCAT44(uStack_39c,iStack_3a0);
        puStack_2f8 = puStack_3b8;
        uStack_2f0 = uStack_3b0;
        uStack_308 = uStack_3c8;
        uStack_300 = uStack_3c0;
        uStack_318._0_4_ = (int)uStack_3d8;
        uStack_318._4_4_ = uStack_3d8._4_4_;
        uStack_310 = uStack_3d0;
                    /* WARNING: Subroutine does not return */
        pdb_142dc8170(&UNK_14305d3a8,0x2b,&uStack_318,&UNK_14305d3d8,&UNK_14305d178);
      }
    }
    pbVar51 = pbStack_f8;
    if (*(int *)(pbStack_f8 + 0x144) != *(int *)(pbVar58 + 0x68)) {
      *(int *)(pbStack_f8 + 0x144) = *(int *)(pbVar58 + 0x68);
      uVar32 = *(uint *)(pbVar58 + 0x68);
      in_stack_fffffffffffffa58 = (byte *)(ulonglong)uVar32;
      pdb_14007ee60();
      puVar40 = (uint *)pub_1406abab0(4,4);
      if (puVar40 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
        pdb_142dc7e11(4,4);
      }
      *puVar40 = uVar32;
      uStack_300 = CONCAT71(uStack_300._1_7_,10);
      uStack_310._0_4_ = SUB84(puVar40,0);
      uStack_310._4_4_ = (float)((ulonglong)puVar40 >> 0x20);
      uStack_308 = &UNK_14305d190;
      uStack_318._0_4_ = 6;
      uStack_318._4_4_ = 0;
      pdb_141a55160(&uStack_3d8,pbVar51,&uStack_318);
      if ((int)uStack_3d8 != 0xb) {
        uStack_2e8 = uStack_3a8;
        uStack_2e0 = (undefined *)CONCAT44(uStack_39c,iStack_3a0);
        puStack_2f8 = puStack_3b8;
        uStack_2f0 = uStack_3b0;
        uStack_308 = uStack_3c8;
        uStack_300 = uStack_3c0;
        uStack_318._0_4_ = (int)uStack_3d8;
        uStack_318._4_4_ = uStack_3d8._4_4_;
        uStack_310 = uStack_3d0;
                    /* WARNING: Subroutine does not return */
        pdb_142dc8170(&UNK_14305d3a8,0x2b,&uStack_318,&UNK_14305d3d8,&UNK_14305d1b0);
      }
      pbStack_f8[0x198] = 0;
      pbStack_f8[0x199] = 0;
      pbStack_f8[0x19a] = 0;
      pbStack_f8[0x19b] = 0;
    }
    pbVar51 = pbStack_f8;
    if (*(int *)(pbStack_f8 + 0x148) != *(int *)(pbVar58 + 0x6c)) {
      *(int *)(pbStack_f8 + 0x148) = *(int *)(pbVar58 + 0x6c);
      uVar32 = *(uint *)(pbVar58 + 0x6c);
      in_stack_fffffffffffffa58 = (byte *)(ulonglong)uVar32;
      pdb_14007ee60();
      puVar40 = (uint *)pub_1406abab0(4,4);
      if (puVar40 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
        pdb_142dc7e11(4,4);
      }
      *puVar40 = uVar32;
      uStack_300 = CONCAT71(uStack_300._1_7_,0xb);
      uStack_310._0_4_ = SUB84(puVar40,0);
      uStack_310._4_4_ = (float)((ulonglong)puVar40 >> 0x20);
      uStack_308 = &UNK_14305d190;
      uStack_318._0_4_ = 6;
      uStack_318._4_4_ = 0;
      pdb_141a55160(&uStack_3d8,pbVar51,&uStack_318);
      if ((int)uStack_3d8 != 0xb) {
        uStack_2e8 = uStack_3a8;
        uStack_2e0 = (undefined *)CONCAT44(uStack_39c,iStack_3a0);
        puStack_2f8 = puStack_3b8;
        uStack_2f0 = uStack_3b0;
        uStack_308 = uStack_3c8;
        uStack_300 = uStack_3c0;
        uStack_318._0_4_ = (int)uStack_3d8;
        uStack_318._4_4_ = uStack_3d8._4_4_;
        uStack_310 = uStack_3d0;
                    /* WARNING: Subroutine does not return */
        pdb_142dc8170(&UNK_14305d3a8,0x2b,&uStack_318,&UNK_14305d3d8,&UNK_14305d1c8);
      }
      pbStack_f8[0x198] = 0;
      pbStack_f8[0x199] = 0;
      pbStack_f8[0x19a] = 0;
      pbStack_f8[0x19b] = 0;
    }
  }
  if ((char)uStack_140 == '\0') {
    uStack_310._0_4_ = (float)uStack_148;
    uStack_310._4_4_ = fStack_3dc;
    uStack_308 = (byte *)CONCAT44(uStack_308._4_4_,(int)pbStack_168);
    uStack_318._0_4_ = 7;
    uStack_318._4_4_ = 0;
    pdb_141a55160(&uStack_3d8,pbStack_f8,&uStack_318);
    if ((int)uStack_3d8 != 0xb) {
      uStack_2e8 = uStack_3a8;
      uStack_2e0 = (undefined *)CONCAT44(uStack_39c,iStack_3a0);
      puStack_2f8 = puStack_3b8;
      uStack_2f0 = uStack_3b0;
      uStack_308 = uStack_3c8;
      uStack_300 = uStack_3c0;
      uStack_318._0_4_ = (int)uStack_3d8;
      uStack_318._4_4_ = uStack_3d8._4_4_;
      uStack_310 = uStack_3d0;
                    /* WARNING: Subroutine does not return */
      pdb_142dc8170(&UNK_14305d3a8,0x2b,&uStack_318,&UNK_14305d3d8,&UNK_14305d1e0);
    }
  }
  if ((byte)pbStack_130 == '\0') goto joined_r0x000140b84142;
  lVar42 = (ulonglong)*(byte *)(lStack_498 + 0xc0) * 0x40;
  lVar34 = lStack_498 + lVar42;
  cVar30 = *(char *)(lStack_498 + 0x28 + lVar42);
  if ((((cVar30 != *(char *)(lStack_498 + 0x28)) ||
       (*(float *)(lVar34 + 0x18) != *(float *)(lStack_498 + 0x18))) ||
      ((NAN(*(float *)(lVar34 + 0x18)) || NAN(*(float *)(lStack_498 + 0x18)) ||
       ((*(float *)(lVar34 + 0x1c) != *(float *)(lStack_498 + 0x1c) ||
        (NAN(*(float *)(lVar34 + 0x1c)) || NAN(*(float *)(lStack_498 + 0x1c)))))))) ||
     ((*(float *)(lVar34 + 0x20) != *(float *)(lStack_498 + 0x20) ||
      ((((NAN(*(float *)(lVar34 + 0x20)) || NAN(*(float *)(lStack_498 + 0x20)) ||
         (*(float *)(lVar34 + 0x24) != *(float *)(lStack_498 + 0x24))) ||
        (NAN(*(float *)(lVar34 + 0x24)) || NAN(*(float *)(lStack_498 + 0x24)))) ||
       (*(longlong *)(lVar34 + 0x10) != *(longlong *)(lStack_498 + 0x10))))))) {
LAB_140b83dbb:
    pdb_140f60be0(&uStack_3d8,lVar34);
    uVar49 = uStack_3b0;
    pbVar43 = pbStack_460;
    uStack_3b0 = (undefined *)CONCAT71(uStack_3b0._1_7_,cVar30);
    uStack_3c0 = *(undefined8 *)(lVar34 + 0x18);
    puStack_3b8 = *(undefined **)(lVar34 + 0x20);
    uStack_3a8 = *(undefined8 *)(lVar34 + 0x30);
    iStack_3a0 = *(int *)(lVar34 + 0x38);
    uStack_2e0 = (undefined *)CONCAT44(uStack_2e0._4_4_,iStack_3a0);
    bVar41 = *(byte *)(lVar34 + 0x3c);
    bVar31 = *(byte *)(lVar34 + 0x3d);
    uStack_2f0 = uStack_3b0;
    puVar52 = uStack_2f0;
    uStack_2f0._4_4_ = (undefined4)((ulonglong)uVar49 >> 0x20);
    uStack_3b0 = (undefined *)CONCAT44(uStack_2f0._4_4_,(undefined4)uStack_3b0);
    *puStack_490 = uStack_3ec;
    pbVar51 = pbStack_460 + 0x30;
    uVar35 = *(ulonglong *)(pbStack_460 + 0x30);
    puStack_2f8 = puStack_3b8;
    uStack_2f0 = puVar52;
    uStack_2e8 = uStack_3a8;
    if ((!SBORROW8(0,uVar35)) && (uVar35 != 0)) {
      pub_1406abac0(*(byte **)(pbStack_460 + 0x38),uVar35,1);
    }
    *(int *)(pbVar43 + 0x5c) = uStack_3b0._4_4_;
    *(undefined8 *)(pbVar43 + 0x60) = uStack_3a8;
    *(int *)(pbVar43 + 0x68) = iStack_3a0;
    *(undefined **)(pbVar43 + 0x50) = puStack_3b8;
    *(undefined **)(pbVar43 + 0x58) = uStack_3b0;
    *(int *)(pbVar43 + 0x40) = (int)uStack_3c8;
    *(int *)(pbVar43 + 0x44) = uStack_3c8._4_4_;
    *(int *)(pbVar43 + 0x48) = (int)uStack_3c0;
    *(int *)(pbVar43 + 0x4c) = uStack_3c0._4_4_;
    *(ulonglong *)pbVar51 = CONCAT44(uStack_3d8._4_4_,(int)uStack_3d8);
    *(byte **)(pbVar43 + 0x38) = uStack_3d0;
    pbVar43[0x6c] = bVar41;
    pbVar43[0x6d] = bVar31;
  }
  else {
    iVar33 = pub_142e32750(*(undefined8 *)(lVar34 + 8),*(undefined8 *)(lStack_498 + 8));
    pbVar43 = pbStack_460;
    if ((((iVar33 != 0) || (*(float *)(lVar34 + 0x30) != *(float *)(lStack_498 + 0x30))) ||
        (((NAN(*(float *)(lVar34 + 0x30)) || NAN(*(float *)(lStack_498 + 0x30)) ||
          ((*(float *)(lVar34 + 0x34) != *(float *)(lStack_498 + 0x34) ||
           (NAN(*(float *)(lVar34 + 0x34)) || NAN(*(float *)(lStack_498 + 0x34)))))) ||
         (*(float *)(lVar34 + 0x38) != *(float *)(lStack_498 + 0x38))))) ||
       (((NAN(*(float *)(lVar34 + 0x38)) || NAN(*(float *)(lStack_498 + 0x38)) ||
         (*(char *)(lVar34 + 0x3c) != *(char *)(lStack_498 + 0x3c))) ||
        (*(char *)(lVar34 + 0x3d) != *(char *)(lStack_498 + 0x3d))))) goto LAB_140b83dbb;
    *puStack_490 = uStack_3ec;
    uVar35 = *(ulonglong *)(pbStack_460 + 0x30);
    if ((!SBORROW8(0,uVar35)) && (uVar35 != 0)) {
      pub_1406abac0(*(byte **)(pbStack_460 + 0x38),uVar35,1);
    }
    pbVar43[0x30] = 0;
    pbVar43[0x31] = 0;
    pbVar43[0x32] = 0;
    pbVar43[0x33] = 0;
    pbVar43[0x34] = 0;
    pbVar43[0x35] = 0;
    pbVar43[0x36] = 0;
    pbVar43[0x37] = 0x80;
  }
  iStack_198 = *(int *)(pbVar43 + 0xa0);
  iStack_194 = *(int *)(pbVar43 + 0xa4);
  uStack_190 = *(int *)(pbVar43 + 0xa8);
  iStack_18c = *(int *)(pbVar43 + 0xac);
  in_stack_fffffffffffffa58 = (byte *)&iStack_198;
  pdb_140a937d0(&uStack_318,in_stack_fffffffffffffa58);
  pbStack_130 = (byte *)CONCAT44(uStack_310._4_4_,(float)uStack_310);
  pdb_140f3e9e0(&uStack_3d8,pbStack_130,uStack_308,&UNK_1430450d2,9);
  pbVar51 = (byte *)&uStack_3d8;
  lVar34 = pdb_14191dfa0(pbVar51,pbStack_460);
  if (CONCAT44(uStack_318._4_4_,(int)uStack_318) != 0) {
    pub_1406abac0(pbStack_130,CONCAT44(uStack_318._4_4_,(int)uStack_318),1);
  }
  if (lVar34 != 0) {
    iStack_198 = (int)lVar34;
    iStack_194 = (int)((ulonglong)lVar34 >> 0x20);
    if (*_DAT_143ca8e90 != 0) {
      uStack_3d0._0_4_ = 7.606949;
      uStack_3d0._4_4_ = 1.4013e-45;
      uStack_318._0_4_ = 0;
      uStack_318._4_4_ = 0;
      uStack_310._0_4_ = 133.80835;
      uStack_310._4_4_ = 1.4013e-45;
      uStack_308 = (byte *)0x26;
      uStack_300 = 0;
      puStack_2f8 = &UNK_14305cdc0;
      uStack_2f0 = (undefined *)0x31;
      uStack_2e8 = 1;
      uStack_2e0 = &UNK_14305cef0;
      uStack_2d8 = 0x26;
      uStack_2d0 = 0x18900000001;
      puStack_2c8 = &UNK_14305d1f8;
      pbStack_2c0 = pbVar51;
      uStack_3d8 = in_stack_fffffffffffffa58;
      pdb_140f332f0(&uStack_111,&uStack_318);
    }
    pdb_140f36c40(&iStack_198);
  }
  lVar34 = pdb_140b80de0(pbStack_f8);
  if (lVar34 == 0) {
    pdb_140a937d0(&uStack_318,pbStack_460 + 0xa0);
    pbStack_f8 = (byte *)CONCAT44(uStack_318._4_4_,(int)uStack_318);
    pbStack_130 = (byte *)CONCAT44(uStack_310._4_4_,(float)uStack_310);
    uStack_3d8._0_4_ = (undefined4)uStack_308;
    uStack_3d8._4_4_ = uStack_308._4_4_;
    uStack_3d0._0_4_ = (float)(undefined4)uStack_300;
    uStack_3d0._4_4_ = (float)uStack_300._4_4_;
    *(undefined4 *)param_5[2] = *(undefined4 *)((longlong)param_5 + 0x1c);
    in_stack_fffffffffffffa58 = (byte *)*param_5;
    lVar34 = *(longlong *)(in_stack_fffffffffffffa58 + 0x30);
    uVar49 = *(undefined8 *)(in_stack_fffffffffffffa58 + 0x40);
    if (lVar34 == *(longlong *)(in_stack_fffffffffffffa58 + 0x20)) {
      pdb_142d7ede0(in_stack_fffffffffffffa58 + 0x20);
    }
    lVar42 = *(longlong *)(in_stack_fffffffffffffa58 + 0x28);
    *(byte **)(lVar42 + lVar34 * 0x28) = pbStack_f8;
    *(byte **)(lVar42 + 8 + lVar34 * 0x28) = pbStack_130;
    plVar36 = (longlong *)(lVar42 + 0x10 + lVar34 * 0x28);
    *plVar36 = (longlong)uStack_3d8;
    plVar36[1] = (longlong)uStack_3d0;
    *(undefined8 *)(lVar42 + 0x20 + lVar34 * 0x28) = uVar49;
    pbVar51 = (byte *)(lVar34 + 1);
    *(byte **)(in_stack_fffffffffffffa58 + 0x30) = pbVar51;
    *(longlong *)(in_stack_fffffffffffffa58 + 0x40) =
         *(longlong *)(in_stack_fffffffffffffa58 + 0x40) + 1;
  }
  else {
    iStack_198 = (int)lVar34;
    iStack_194 = (int)((ulonglong)lVar34 >> 0x20);
    if (*_DAT_143ca8e90 != 0) {
      uStack_3d0._0_4_ = 7.606949;
      uStack_3d0._4_4_ = 1.4013e-45;
      uStack_318._0_4_ = 0;
      uStack_318._4_4_ = 0;
      uStack_310._0_4_ = 133.80835;
      uStack_310._4_4_ = 1.4013e-45;
      uStack_308 = (byte *)0x26;
      uStack_300 = 0;
      puStack_2f8 = &UNK_14305cdc0;
      uStack_2f0 = (undefined *)0x31;
      uStack_2e8 = 1;
      uStack_2e0 = &UNK_14305cef0;
      uStack_2d8 = 0x26;
      uStack_2d0 = 0x19500000001;
      puStack_2c8 = &UNK_14305d218;
      pbStack_2c0 = pbVar51;
      uStack_3d8 = in_stack_fffffffffffffa58;
      pdb_140f332f0(&uStack_111,&uStack_318);
    }
    pdb_140f36c40(&iStack_198);
  }
joined_r0x000140b84142:
  pbVar46 = pbStack_110;
  if (((ulonglong)pbStack_110 & 0x7fffffffffffffff) != 0) {
    pbVar46 = (byte *)((longlong)pbStack_110 * 8);
    pub_1406abac0(pbStack_128,(longlong)pbStack_110 * 0x28,4);
  }
  if (lStack_4a8 != 0) {
    plVar36 = (longlong *)pdb_140e97000();
    if ((char)plVar36[0xd] != '\x01') {
      plVar36 = (longlong *)pdb_142d8ec20(plVar36,0);
      if (plVar36 == (longlong *)0x0) goto LAB_140b847e5;
    }
    if (*plVar36 != 0) {
LAB_140b8440e:
      plVar36 = (longlong *)pdb_142dc8090(&UNK_143326a50);
LAB_140b8441a:
      plVar36 = (longlong *)pdb_142d8ec20(plVar36,0);
      if (plVar36 == (longlong *)0x0) {
LAB_140b847e5:
        pdb_142dc7890(&UNK_143326860);
LAB_140b847f2:
                    /* WARNING: Subroutine does not return */
        pdb_142dc7e11(8,0x18);
      }
      goto LAB_140b816ad;
    }
    *plVar36 = -1;
    pbStack_f8 = (byte *)plVar36;
    pdb_140e95370(plVar36 + 1,uStack_4a0);
    *(longlong *)pbStack_f8 = *(longlong *)pbStack_f8 + 1;
  }
  return;
}

