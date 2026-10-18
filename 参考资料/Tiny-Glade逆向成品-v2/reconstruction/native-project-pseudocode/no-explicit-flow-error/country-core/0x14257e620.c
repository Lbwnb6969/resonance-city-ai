// VA 0x14257e620, PDB extent 4114 bytes
// country_core::render::nani::systems::nani_update_preplaced_flower
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/render/nani/systems.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: country_core::render::nani::systems::nani_update_preplaced_flower
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/render/nani/systems.rs
   Extent: 4114 */

longlong *
pdb_14257e620(longlong *param_1,longlong *param_2,undefined8 *param_3,longlong *param_4,
             longlong *param_5)

{
  byte *pbVar1;
  uint *puVar2;
  longlong lVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  code *pcVar7;
  undefined1 auVar8 [16];
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined1 auVar14 [16];
  undefined4 uVar15;
  char cVar16;
  uint uVar17;
  longlong lVar18;
  ulonglong uVar19;
  longlong *plVar20;
  undefined8 *puVar21;
  longlong lVar22;
  uint uVar23;
  uint uVar24;
  ulonglong uVar25;
  uint *puVar26;
  longlong lVar27;
  float *pfVar28;
  undefined *puVar29;
  undefined8 *puVar30;
  longlong *plVar31;
  undefined *puVar32;
  int iVar33;
  bool bVar34;
  int iVar35;
  int iVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  undefined8 uVar40;
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined4 uStack_220;
  undefined4 uStack_21c;
  undefined4 uStack_218;
  float fStack_214;
  float fStack_210;
  float fStack_20c;
  undefined4 uStack_208;
  undefined4 uStack_204;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  longlong lStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  float fStack_188;
  float fStack_184;
  float fStack_180;
  float fStack_17c;
  float fStack_178;
  float fStack_174;
  float fStack_170;
  float fStack_16c;
  undefined8 uStack_168;
  undefined8 uStack_160;
  longlong lStack_150;
  undefined8 uStack_148;
  ulonglong uStack_140;
  undefined8 uStack_138;
  longlong lStack_130;
  longlong *plStack_128;
  undefined8 uStack_120;
  float fStack_118;
  longlong lStack_110;
  longlong *plStack_108;
  longlong lStack_100;
  longlong *plStack_f8;
  undefined8 uStack_f0;
  
  uStack_f0 = 0xfffffffffffffffe;
  plVar31 = param_2;
  cVar16 = pdb_140e94b40();
  if (cVar16 == '\0') {
    lStack_150 = 0;
  }
  else {
    plVar31 = (longlong *)&UNK_14351c790;
    lVar27 = 0x41;
    uVar25 = 0x41;
    lVar18 = pdb_142585200(&UNK_14351c790);
    if (lVar18 == 1) {
      if (0x41 < uVar25) {
LAB_14257f274:
        pdb_142dc8070(&UNK_14351c790,0x41,0);
LAB_14257f294:
        pdb_142dc8070(&UNK_14351c790,0x41);
        pcVar7 = (code *)swi(3);
        plVar31 = (longlong *)(*pcVar7)();
        return plVar31;
      }
      plVar31 = (longlong *)&UNK_14351c790;
      uVar19 = pdb_142585200(&UNK_14351c790);
      if ((uVar19 & 1) != 0) {
        if (0x41 < uVar25 + 2) goto LAB_14257f294;
        lVar27 = 0x3f - uVar25;
        plVar31 = (longlong *)(&UNK_14351c792 + uVar25);
      }
    }
    puVar29 = &UNK_14351bdcd;
    puVar32 = &UNK_14351bd9f;
    do {
      bVar4 = puVar29[-1];
      uVar17 = (uint)(char)bVar4;
      plStack_108 = param_1;
      if ((char)bVar4 < '\0') {
        bVar5 = puVar29[-2];
        if ((char)bVar5 < -0x40) {
          bVar6 = puVar29[-3];
          if ((char)bVar6 < -0x40) {
            pbVar1 = puVar29 + -4;
            puVar29 = puVar29 + -4;
            uVar17 = bVar6 & 0x3f | (*pbVar1 & 7) << 6;
          }
          else {
            puVar29 = puVar29 + -3;
            uVar17 = bVar6 & 0xf;
          }
          uVar17 = bVar5 & 0x3f | uVar17 << 6;
        }
        else {
          puVar29 = puVar29 + -2;
          uVar17 = bVar5 & 0x1f;
        }
        uVar17 = (uint)(bVar4 & 0x3f) | uVar17 << 6;
        if (uVar17 != 0x5c) goto LAB_14257e7a4;
LAB_14257e7c0:
        puVar32 = puVar29 + -0x14351bd9e;
        if ((undefined *)0x2e < puVar32) {
          pdb_142dc8070(&UNK_14351bd9f,0x2e,puVar32,0x2e,&UNK_14351c9b8);
          goto LAB_14257f274;
        }
        lVar18 = 0x2e - (longlong)puVar32;
        puVar32 = puVar29 + 1;
        goto LAB_14257e7e6;
      }
      puVar29 = puVar29 + -1;
      if (uVar17 == 0x5c) goto LAB_14257e7c0;
LAB_14257e7a4:
      if (uVar17 == 0x2f) goto LAB_14257e7c0;
    } while (puVar29 != &UNK_14351bd9f);
    lVar18 = 0x2e;
LAB_14257e7e6:
    plVar20 = (longlong *)pdb_140e97000();
    if (((char)plVar20[0xd] != '\x01') &&
       (plVar20 = (longlong *)pdb_142d8ec20(plVar20,0), plVar20 == (longlong *)0x0))
    goto LAB_14257f21f;
    if (*plVar20 != 0) goto LAB_14257f1da;
    *plVar20 = -1;
    plStack_f8 = plVar20;
    uStack_148 = pdb_140e94f10(plVar20 + 1,plVar31,lVar27,puVar32,lVar18,1,0);
    *plStack_f8 = *plStack_f8 + 1;
    lStack_150 = 1;
    param_1 = plStack_108;
  }
  uVar40 = CONCAT71((int7)((ulonglong)plVar31 >> 8),0xd);
  plStack_128 = (longlong *)pdb_1409d2d80(*param_2);
  uStack_138 = uVar40;
  puVar21 = (undefined8 *)pdb_140bf45b0(*param_3,&UNK_14331ca70);
  if ((puVar21 == (undefined8 *)0x0) ||
     (lVar18 = (**(code **)(puVar21[1] + 0x18))(*puVar21), auVar14 = _DAT_142e61200,
     fVar13 = _UNK_142e36f6c, fVar12 = _UNK_142e36f68, fVar11 = _UNK_142e36f64,
     fVar10 = _DAT_142e36f60, fVar9 = _DAT_142e36f28, lVar18 == 0)) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc8150(&UNK_14351c0f8);
  }
  lStack_1a0 = *(longlong *)(lVar18 + 8);
  uStack_140 = *(ulonglong *)(lVar18 + 0x10);
  lVar18 = *param_5;
  puVar21 = (undefined8 *)(lVar18 + 0x20);
  puVar30 = (undefined8 *)(lVar18 + 0x28);
  if (*(char *)(lVar18 + 0x298) == '\0') {
    puVar30 = (undefined8 *)(lVar18 + 0x10);
    puVar21 = (undefined8 *)(lVar18 + 8);
  }
  uStack_1b8 = *puVar30;
  uStack_1c0 = *puVar21;
  lVar18 = *param_4;
  lVar27 = param_4[4];
  puVar21 = (undefined8 *)(lVar18 + 0x20);
  puVar30 = (undefined8 *)(lVar18 + 0x28);
  if (*(char *)(lVar18 + 0x298) == '\0') {
    puVar30 = (undefined8 *)(lVar18 + 0x10);
    puVar21 = (undefined8 *)(lVar18 + 8);
  }
  uStack_1f8 = *puVar30;
  uStack_200 = *puVar21;
  puVar21 = (undefined8 *)(lVar27 + 0x20);
  puVar30 = (undefined8 *)(lVar27 + 0x28);
  if (*(char *)(lVar27 + 0x298) == '\0') {
    puVar30 = (undefined8 *)(lVar27 + 0x10);
    puVar21 = (undefined8 *)(lVar27 + 8);
  }
  uStack_1e8 = *puVar30;
  uStack_1f0 = *puVar21;
  lVar18 = param_4[8];
  puVar21 = (undefined8 *)(lVar18 + 0x20);
  puVar30 = (undefined8 *)(lVar18 + 0x28);
  if (*(char *)(lVar18 + 0x298) == '\0') {
    puVar30 = (undefined8 *)(lVar18 + 0x10);
    puVar21 = (undefined8 *)(lVar18 + 8);
  }
  uStack_1d8 = *puVar30;
  uStack_1e0 = *puVar21;
  lVar18 = param_4[0xc];
  puVar21 = (undefined8 *)(lVar18 + 0x20);
  puVar30 = (undefined8 *)(lVar18 + 0x28);
  if (*(char *)(lVar18 + 0x298) == '\0') {
    puVar30 = (undefined8 *)(lVar18 + 0x10);
    puVar21 = (undefined8 *)(lVar18 + 8);
  }
  uStack_1c8 = *puVar30;
  uStack_1d0 = *puVar21;
  lStack_110 = *param_1;
  lVar18 = param_1[1];
  puVar26 = *(uint **)(lStack_110 + 0xf8);
  puVar2 = puVar26 + *(longlong *)(lStack_110 + 0x100);
  plStack_108 = (longlong *)CONCAT71(plStack_108._1_7_,*(undefined1 *)(lStack_110 + 0x108));
  lStack_130 = 8;
  plStack_f8 = (longlong *)0x0;
  lStack_100 = 0;
  lVar27 = 0;
  uVar25 = 0;
LAB_14257ea24:
  param_2 = plStack_128;
  if ((char)plStack_108 == '\0') {
    if ((int)uVar25 == (int)lVar27) {
      do {
        if (puVar26 == puVar2) goto LAB_14257f0fd;
        uVar17 = *puVar26;
        puVar26 = puVar26 + 1;
        lVar27 = *(longlong *)(*(longlong *)(lVar18 + 0x100) + 0x58 + (ulonglong)uVar17 * 0xa0);
      } while (lVar27 == 0);
      lVar22 = *(longlong *)(lVar18 + 0x100) + (ulonglong)uVar17 * 0xa0;
      uVar25 = (ulonglong)*(uint *)(lVar22 + 0x94);
      lVar3 = *(longlong *)(lVar18 + 0x1a0) + uVar25 * 0x48;
      uVar25 = *(ulonglong *)(*(longlong *)(lVar18 + 0x1a0) + 0x40 + uVar25 * 0x48);
      if ((*(ulonglong *)(lStack_110 + 0x110) < uVar25) &&
         (uVar19 = *(ulonglong *)
                    (*(longlong *)(lVar3 + 0x38) + *(ulonglong *)(lStack_110 + 0x110) * 8),
         uVar19 != 0)) {
        plStack_f8 = *(longlong **)(*(longlong *)(lVar3 + 0x18) + 0x10 + ~uVar19 * 0x30);
        uVar19 = *(ulonglong *)(lStack_110 + 0x118);
        if (uVar25 <= uVar19) goto LAB_14257ec1f;
LAB_14257ebe2:
        uVar25 = *(ulonglong *)(*(longlong *)(lVar3 + 0x38) + uVar19 * 8);
        if (uVar25 == 0) goto LAB_14257ec1f;
        lStack_100 = *(longlong *)(*(longlong *)(lVar3 + 0x18) + 0x10 + ~uVar25 * 0x30);
      }
      else {
        plStack_f8 = (longlong *)0x0;
        uVar19 = *(ulonglong *)(lStack_110 + 0x118);
        if (uVar19 < uVar25) goto LAB_14257ebe2;
LAB_14257ec1f:
        lStack_100 = 0;
      }
      lStack_130 = *(longlong *)(lVar22 + 0x50);
      uVar25 = 0;
    }
    iVar33 = (int)uVar25;
    uVar25 = (ulonglong)~*(uint *)(lStack_130 + 8 + uVar25 * 0x10);
  }
  else {
    if ((int)uVar25 == (int)lVar27) {
      do {
        if (puVar26 == puVar2) goto LAB_14257f0fd;
        uVar17 = *puVar26;
        puVar26 = puVar26 + 1;
        lVar27 = *(longlong *)(*(longlong *)(lVar18 + 0x1a0) + 0x10 + (ulonglong)uVar17 * 0x48);
      } while (lVar27 == 0);
      lVar3 = *(longlong *)(lVar18 + 0x1a0) + (ulonglong)uVar17 * 0x48;
      uVar25 = *(ulonglong *)(lVar3 + 0x40);
      if ((*(ulonglong *)(lStack_110 + 0x110) < uVar25) &&
         (uVar19 = *(ulonglong *)
                    (*(longlong *)(lVar3 + 0x38) + *(ulonglong *)(lStack_110 + 0x110) * 8),
         uVar19 != 0)) {
        plStack_f8 = *(longlong **)(*(longlong *)(lVar3 + 0x18) + 0x10 + ~uVar19 * 0x30);
        uVar19 = *(ulonglong *)(lStack_110 + 0x118);
        if (uVar25 <= uVar19) goto LAB_14257ec0c;
LAB_14257eb9a:
        uVar25 = *(ulonglong *)(*(longlong *)(lVar3 + 0x38) + uVar19 * 8);
        if (uVar25 == 0) goto LAB_14257ec0c;
        lStack_100 = *(longlong *)(*(longlong *)(lVar3 + 0x18) + 0x10 + ~uVar25 * 0x30);
      }
      else {
        plStack_f8 = (longlong *)0x0;
        uVar19 = *(ulonglong *)(lStack_110 + 0x118);
        if (uVar19 < uVar25) goto LAB_14257eb9a;
LAB_14257ec0c:
        lStack_100 = 0;
      }
      uVar25 = 0;
    }
    iVar33 = (int)uVar25;
  }
  lVar3 = (longlong)plStack_f8 + uVar25 * 0xc;
  pfVar28 = (float *)(uVar25 * 0x30 + lStack_100);
  uStack_120 = *(undefined8 *)(pfVar28 + 4);
  fVar45 = pfVar28[6];
  uVar15 = (undefined4)uStack_120;
  auVar41._4_4_ = (undefined4)uStack_120;
  auVar41._0_4_ = fVar45;
  auVar41._8_8_ = 0;
  auVar41 = divps(auVar41,auVar14);
  auVar42._0_4_ = auVar41._0_4_ + fVar10;
  auVar42._4_4_ = auVar41._4_4_ + fVar11;
  auVar42._8_4_ = auVar41._8_4_ + fVar12;
  auVar42._12_4_ = auVar41._12_4_ + fVar13;
  auVar41 = maxps(auVar42,ZEXT816(0));
  fVar44 = auVar41._4_4_ * _DAT_142e61210;
  uVar17 = (uint)(longlong)fVar44;
  if (fVar44 < 0.0) {
    uVar17 = 0;
  }
  auVar43._4_12_ = auVar41._4_12_;
  auVar43._0_4_ = auVar41._0_4_ * _DAT_142e61210;
  uVar40 = auVar43._0_8_;
  if (_DAT_142e46a48 < fVar44) {
    uVar17 = 0xffffffff;
  }
  uVar23 = (uint)(longlong)auVar43._0_4_;
  if (auVar43._0_4_ < 0.0) {
    uVar23 = 0;
  }
  iVar35 = -(uint)(auVar41._0_4_ < _DAT_142e37950);
  iVar36 = -(uint)(auVar41._4_4_ < _UNK_142e37954);
  if (_DAT_142e46a48 < auVar43._0_4_) {
    uVar23 = 0xffffffff;
  }
  if (0x1fe < uVar17) {
    uVar17 = 0x1ff;
  }
  auVar8._4_4_ = iVar35;
  auVar8._0_4_ = iVar35;
  auVar8._8_4_ = iVar36;
  auVar8._12_4_ = iVar36;
  uVar24 = movmskpd(0,auVar8);
  if ((uVar24 & 2) == 0) {
    uVar17 = 0x1ff;
  }
  if (0x1fe < uVar23) {
    uVar23 = 0x1ff;
  }
  uVar23 = uVar23 << 9;
  if ((uVar24 & 1) == 0) {
    uVar23 = 0x3fe00;
  }
  uVar19 = (ulonglong)((uVar23 | uVar17) >> 5);
  fStack_118 = fVar45;
  if (uVar19 < uStack_140) {
    uVar25 = (ulonglong)(iVar33 + 1);
    if (((*(uint *)(lStack_1a0 + uVar19 * 4) >> (uVar17 & 0x1f) & 1) != 0) ||
       (fVar44 = (float)pdb_140a7d8d0(&uStack_1c0,(undefined4)uStack_120,fVar45,_DAT_143006a28,
                                      0x43020000), _DAT_142e37848 < fVar44)) {
LAB_14257ee40:
      pdb_140df4940(&uStack_198);
      fVar52 = (float)uStack_190 + (float)uStack_190;
      fVar39 = uStack_198._4_4_ + uStack_198._4_4_;
      fVar53 = fVar52 * uStack_198._4_4_;
      fVar50 = (float)uStack_198 * ((float)uStack_198 + (float)uStack_198);
      fVar46 = ((float)uStack_198 + (float)uStack_198) * uStack_190._4_4_;
      fVar38 = fVar52 * (float)uStack_198 - fVar39 * uStack_190._4_4_;
      fVar47 = fVar46 + fVar53;
      fStack_16c = fVar9 - (fVar50 + uStack_198._4_4_ * fVar39);
      fVar45 = fStack_17c * (fVar9 - (uStack_198._4_4_ * fVar39 + (float)uStack_190 * fVar52));
      fVar44 = fStack_17c * (fVar39 * (float)uStack_198 + uStack_190._4_4_ * fVar52);
      fVar37 = fStack_17c * fVar38;
      fVar38 = fStack_17c * fVar38;
      fStack_188 = fStack_178 * (fVar39 * (float)uStack_198 - uStack_190._4_4_ * fVar52);
      fStack_184 = fStack_178 * (fVar9 - ((float)uStack_190 * fVar52 + fVar50));
      fStack_180 = fStack_178 * fVar47;
      fStack_17c = fStack_178 * fVar47;
      fStack_178 = fStack_174 * (fVar39 * uStack_190._4_4_ + fVar52 * (float)uStack_198);
      fStack_170 = fStack_174 * fStack_16c;
      fStack_16c = fStack_174 * fStack_16c;
      uStack_198 = CONCAT44(fVar44,fVar45);
      uStack_190 = CONCAT44(fVar38,fVar37);
      uStack_168 = _DAT_14351bc50;
      uStack_160 = _UNK_14351bc58;
      fStack_174 = fStack_174 * (fVar53 - fVar46);
      pdb_140e07fe0(&uStack_230,&uStack_198);
      uStack_198 = uStack_230;
      uStack_190 = uStack_228;
      fStack_188 = (float)uStack_220;
      fStack_184 = (float)uStack_21c;
      fStack_180 = (float)uStack_218;
      fStack_17c = fStack_214;
      fStack_178 = fStack_210;
      fStack_174 = fStack_20c;
      fStack_170 = (float)uStack_208;
      fStack_16c = (float)uStack_204;
      pdb_140952a70(uStack_138,lVar3,&uStack_120,0,&uStack_198,&UNK_14351c128);
    }
    else {
      fVar44 = (float)pdb_140a7d8d0(&uStack_200,uVar15,fVar45,_DAT_143006a28,0x43020000);
      fVar37 = (float)pdb_140a7d8d0(&uStack_1f0,uVar15,fVar45,_DAT_143006a28,0x43020000);
      fVar38 = (float)pdb_140a7d8d0(&uStack_1e0,uVar15,fVar45,_DAT_143006a28,0x43020000);
      fVar39 = (float)pdb_140a7d8d0(&uStack_1d0,uVar15,fVar45,_DAT_143006a28,0x43020000);
      fVar39 = fVar44 + fVar37 + fVar38 + fVar39;
      fVar45 = 0.0;
      if (0.0 <= fVar39) {
        fVar45 = fVar39;
      }
      fVar44 = fVar9;
      if (fVar45 <= fVar9) {
        fVar44 = fVar45;
      }
      if (_DAT_142e3b1d8 < fVar44) goto LAB_14257ee40;
      fVar37 = pfVar28[7];
      fVar47 = pfVar28[8];
      fVar50 = pfVar28[9];
      fVar38 = *pfVar28;
      fVar39 = pfVar28[1];
      fVar46 = pfVar28[3];
      uStack_168 = *(undefined8 *)(pfVar28 + 4);
      fVar45 = pfVar28[2];
      fVar55 = fVar45 + fVar45;
      fVar52 = fVar39 + fVar39;
      fVar51 = fVar38 * (fVar38 + fVar38);
      fVar53 = (fVar38 + fVar38) * fVar46;
      fVar54 = fVar55 * fVar38 - fVar52 * fVar46;
      fVar48 = fVar53 + fVar55 * fVar39;
      fVar49 = fVar9 - (fVar51 + fVar39 * fVar52);
      fVar44 = pfVar28[7];
      fStack_17c = (float)*(undefined8 *)(pfVar28 + 8);
      fStack_16c = (float)((ulonglong)*(undefined8 *)(pfVar28 + 8) >> 0x20);
      fStack_188 = fStack_17c * (fVar52 * fVar38 - fVar46 * fVar55);
      fStack_184 = fStack_17c * (fVar9 - (fVar45 * fVar55 + fVar51));
      fStack_180 = fStack_17c * fVar48;
      fStack_17c = fStack_17c * fVar48;
      fStack_178 = fStack_16c * (fVar52 * fVar46 + fVar55 * fVar38);
      fStack_174 = fStack_16c * (fVar55 * fVar39 - fVar53);
      fStack_170 = fStack_16c * fVar49;
      fStack_16c = fStack_16c * fVar49;
      uStack_198 = CONCAT44(fVar44 * (fVar52 * fVar38 + fVar46 * fVar55),
                            fVar44 * (fVar9 - (fVar39 * fVar52 + fVar45 * fVar55)));
      uStack_190 = CONCAT44(fVar44 * fVar54,fVar44 * fVar54);
      uStack_160 = CONCAT44(pfVar28[6],pfVar28[6]);
      pdb_140e07fe0(&uStack_230,&uStack_198);
      fVar45 = (float)((uint)fVar47 & _DAT_142e377e0);
      if ((float)((uint)fVar47 & _DAT_142e377e0) <= (float)((uint)fVar50 & _UNK_142e377e4)) {
        fVar45 = (float)((uint)fVar50 & _UNK_142e377e4);
      }
      fVar44 = (float)((uint)fVar37 & _DAT_142e377e0);
      if ((float)((uint)fVar37 & _DAT_142e377e0) <= fVar45) {
        fVar44 = fVar45;
      }
      uStack_198 = uStack_230;
      uStack_190 = uStack_228;
      fStack_188 = (float)uStack_220;
      fStack_184 = (float)uStack_21c;
      fStack_180 = (float)uStack_218;
      fStack_17c = fStack_214;
      fStack_178 = fStack_210;
      fStack_174 = fStack_20c;
      fStack_170 = (float)uStack_208;
      fStack_16c = (float)uStack_204;
      pdb_140952a70(uStack_138,lVar3,&uStack_120,fVar44,&uStack_198,&UNK_14351c110);
    }
    goto LAB_14257ea24;
  }
  goto LAB_14257f22c;
LAB_14257f0fd:
  pdb_140e9a350(plStack_128);
  pdb_140e9a350();
  LOCK();
  plVar31 = (longlong *)*param_2;
  bVar34 = plVar31 == (longlong *)0x8;
  if (bVar34) {
    *param_2 = 0;
    plVar31 = (longlong *)0x8;
  }
  UNLOCK();
  if (!bVar34) goto LAB_14257f1e7;
  while( true ) {
    if (lStack_150 == 0) {
      return plVar31;
    }
    plVar31 = (longlong *)pdb_140e97000();
    if (((char)plVar31[0xd] != '\x01') &&
       (plVar31 = (longlong *)pdb_142d8ec20(plVar31,0), plVar31 == (longlong *)0x0)) break;
    if (*plVar31 == 0) {
      *plVar31 = -1;
      plStack_108 = plVar31;
      pdb_140e95370(plVar31 + 1,uStack_148);
      *plStack_108 = *plStack_108 + 1;
      return plStack_108;
    }
LAB_14257f1da:
    pdb_142dc8090(&UNK_143326a50);
LAB_14257f1e7:
    plVar31 = (longlong *)pdb_142dbca40(param_2);
  }
LAB_14257f21f:
  uVar40 = pdb_142dc7890(&UNK_143326860);
LAB_14257f22c:
                    /* WARNING: Subroutine does not return */
  pdb_142dc81f2(uVar40,uStack_140,&UNK_143360e88);
}

