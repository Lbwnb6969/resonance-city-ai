// VA 0x141b26760, PDB extent 7672 bytes
// country_core::systems::audio::wall_audio_fmod::wall_audio_fmod
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/audio/wall_audio_fmod.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x000143392d86) overlaps instruction at (ram,0x000143392d85)
    */
/* WARNING: Removing unreachable block (ram,0x000141b2b2bf) */
/* WARNING: Removing unreachable block (ram,0x000143392d86) */
/* WARNING: Removing unreachable block (ram,0x000143392dae) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: country_core::systems::audio::wall_audio_fmod::wall_audio_fmod
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/audio/wall_audio_fmod.rs
   Extent: 7672 */

void pdb_141b26760(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
                  undefined8 *param_5,undefined8 param_6,undefined8 *param_7,undefined8 *param_8,
                  longlong *param_9)

{
  uint *puVar1;
  byte *pbVar2;
  byte bVar3;
  byte bVar4;
  ulonglong *puVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  code *pcVar8;
  undefined1 auVar9 [16];
  char cVar10;
  char cVar21;
  undefined8 uVar11;
  longlong lVar12;
  ulonglong uVar13;
  undefined *puVar14;
  longlong *plVar15;
  byte *pbVar16;
  undefined8 *puVar17;
  byte *pbVar18;
  char *pcVar19;
  byte *pbVar20;
  uint uVar22;
  byte *pbVar23;
  byte *pbVar24;
  ulonglong uVar25;
  ulonglong uVar26;
  undefined8 *puVar27;
  byte *pbVar28;
  ulonglong uVar29;
  byte *pbVar30;
  undefined8 *******pppppppuVar31;
  undefined4 *puVar32;
  byte *pbVar33;
  ulonglong uVar34;
  ulonglong uVar35;
  byte *pbVar36;
  undefined8 *puVar37;
  ulonglong uVar38;
  undefined8 *puVar39;
  longlong lVar40;
  undefined *puVar41;
  int *piVar42;
  bool bVar43;
  bool bVar44;
  ulonglong in_MM0;
  undefined4 uVar45;
  undefined4 uVar46;
  float fVar47;
  float fVar48;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  undefined8 extraout_XMM0_Qb;
  undefined8 extraout_XMM0_Qb_00;
  undefined8 extraout_XMM0_Qb_01;
  undefined8 extraout_XMM0_Qb_02;
  undefined8 extraout_XMM0_Qb_03;
  undefined8 extraout_XMM0_Qb_04;
  undefined8 extraout_XMM0_Qb_05;
  undefined8 extraout_XMM0_Qb_06;
  undefined8 extraout_XMM0_Qb_07;
  undefined8 extraout_XMM0_Qb_08;
  undefined8 extraout_XMM0_Qb_09;
  undefined8 extraout_XMM0_Qb_10;
  undefined8 extraout_XMM0_Qb_11;
  undefined8 extraout_XMM0_Qb_12;
  undefined8 extraout_XMM0_Qb_13;
  undefined8 extraout_XMM0_Qb_14;
  undefined8 extraout_XMM0_Qb_15;
  undefined8 extraout_XMM0_Qb_16;
  undefined8 extraout_XMM0_Qb_17;
  undefined8 extraout_XMM0_Qb_18;
  undefined8 extraout_XMM0_Qb_19;
  undefined8 extraout_XMM0_Qb_20;
  undefined8 extraout_XMM0_Qb_21;
  undefined8 extraout_XMM0_Qb_22;
  undefined8 extraout_XMM0_Qb_23;
  undefined8 extraout_XMM0_Qb_24;
  undefined8 extraout_XMM0_Qb_25;
  undefined8 extraout_XMM0_Qb_26;
  undefined8 extraout_XMM0_Qb_27;
  undefined8 extraout_XMM0_Qb_28;
  undefined8 extraout_XMM0_Qb_29;
  undefined8 extraout_XMM0_Qb_30;
  undefined8 extraout_XMM0_Qb_31;
  undefined8 extraout_XMM0_Qb_32;
  undefined1 auVar49 [16];
  float fVar50;
  undefined8 in_XMM1_Qa;
  undefined4 in_XMM1_Dc;
  undefined4 in_XMM1_Dd;
  ulonglong auStack_308 [4];
  ulonglong uStack_2e8;
  undefined8 uStack_2e0;
  longlong lStack_2d8;
  byte *pbStack_2d0;
  byte *pbStack_2c8;
  byte *pbStack_2c0;
  undefined1 auStack_2b8 [8];
  longlong lStack_2b0;
  byte *pbStack_2a8;
  ulonglong *puStack_2a0;
  undefined8 uStack_298;
  undefined8 *******pppppppuStack_290;
  byte *pbStack_288;
  byte *pbStack_280;
  byte *pbStack_278;
  undefined4 uStack_270;
  undefined4 uStack_26c;
  undefined4 uStack_268;
  undefined4 uStack_264;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined3 uStack_248;
  undefined5 uStack_245;
  undefined3 uStack_240;
  undefined5 uStack_23d;
  undefined4 uStack_238;
  undefined4 uStack_234;
  undefined4 uStack_230;
  undefined4 uStack_22c;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  uint uStack_20d;
  undefined8 uStack_208;
  undefined8 uStack_200;
  int iStack_1f8;
  undefined8 uStack_1e8;
  undefined4 uStack_1e0;
  undefined8 uStack_1d8;
  undefined4 uStack_1d0;
  undefined8 *puStack_1c8;
  undefined8 uStack_1c0;
  undefined8 *puStack_1b8;
  byte *pbStack_1b0;
  byte *pbStack_1a8;
  byte *pbStack_1a0;
  byte *pbStack_198;
  byte *pbStack_190;
  byte *pbStack_188;
  byte *pbStack_180;
  byte *pbStack_178;
  byte *pbStack_170;
  byte *pbStack_168;
  byte *pbStack_160;
  byte *pbStack_158;
  byte *pbStack_150;
  byte *pbStack_148;
  byte *pbStack_140;
  byte *pbStack_138;
  undefined8 uStack_130;
  undefined4 uStack_128;
  undefined1 auStack_120 [8];
  undefined8 uStack_118;
  undefined8 uStack_110;
  byte bStack_108;
  undefined8 uStack_107;
  undefined3 uStack_ff;
  undefined5 uStack_fc;
  undefined3 uStack_f7;
  undefined8 uStack_f4;
  undefined1 uStack_ec;
  ulonglong *puStack_e8;
  char cStack_d9;
  byte *pbStack_d8;
  undefined4 *puStack_d0;
  longlong *plStack_c8;
  undefined8 uStack_c0;
  
  uVar46 = (undefined4)((ulonglong)in_XMM1_Qa >> 0x20);
  fVar48 = (float)in_XMM1_Qa;
  puVar32 = (undefined4 *)auStack_2b8;
  pbVar33 = (byte *)&uStack_238;
  uStack_c0 = 0xfffffffffffffffe;
  pbStack_2c0 = (byte *)0x141b267d1;
  puStack_1b8 = param_4;
  cStack_d9 = pdb_140e94b40();
  auVar49._8_8_ = extraout_XMM0_Qb;
  auVar49._0_8_ = extraout_XMM0_Qa;
  if (cStack_d9 == '\0') {
    uStack_208 = 0;
  }
  else {
    puVar41 = &UNK_143392c2f;
    lVar40 = 0x3e;
    uVar29 = 0x3e;
    pbStack_2c0 = (byte *)0x141b267f9;
    lVar12 = pdb_141b2bba0(&UNK_143392c2f);
    if (lVar12 == 1) {
      if (0x3e < uVar29) {
LAB_141b28274:
        uStack_298 = &UNK_143392cf0;
        pbStack_2c0 = (byte *)0x141b28294;
        pdb_142dc8070(&UNK_143392c2f,0x3e,0);
LAB_141b28294:
        uStack_298 = &UNK_143392d08;
        pbStack_2c0 = (byte *)0x141b282b7;
        pdb_142dc8070(&UNK_143392c2f,0x3e);
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      puVar41 = &UNK_143392c2f;
      pbStack_2c0 = (byte *)0x141b2681e;
      uVar13 = pdb_141b2bba0(&UNK_143392c2f);
      if ((uVar13 & 1) != 0) {
        if (0x3e < uVar29 + 2) goto LAB_141b28294;
        lVar40 = 0x3c - uVar29;
        puVar41 = &UNK_143392c31 + uVar29;
      }
    }
    puVar14 = &UNK_143391fc9;
    do {
      pbVar16 = puVar14 + -1;
      uVar22 = (uint)(char)*pbVar16;
      if ((int)uVar22 < 0) {
        bVar3 = puVar14[-2];
        if ((char)bVar3 < -0x40) {
          bVar4 = puVar14[-3];
          if ((char)bVar4 < -0x40) {
            pbVar23 = puVar14 + -4;
            puVar14 = puVar14 + -4;
            uVar22 = bVar4 & 0x3f | (*pbVar23 & 7) << 6;
          }
          else {
            puVar14 = puVar14 + -3;
            uVar22 = bVar4 & 0xf;
          }
          uVar22 = bVar3 & 0x3f | uVar22 << 6;
        }
        else {
          puVar14 = puVar14 + -2;
          uVar22 = bVar3 & 0x1f;
        }
        uVar22 = (uint)(*pbVar16 & 0x3f) | uVar22 << 6;
        if (uVar22 != 0x5c) goto LAB_141b268d9;
LAB_141b268f6:
        if ((undefined *)0x38 < puVar14 + -0x143391f90) {
          uStack_298 = &UNK_143392cd0;
          pbStack_2c0 = (byte *)0x141b28274;
          pdb_142dc8070(&UNK_143391f91,0x38,puVar14 + -0x143391f90,0x38);
          goto LAB_141b28274;
        }
        lVar12 = 0x37 - (longlong)(puVar14 + -0x143391f91);
        goto LAB_141b2691a;
      }
      puVar14 = puVar14 + -1;
      if (uVar22 == 0x5c) goto LAB_141b268f6;
LAB_141b268d9:
      if (uVar22 == 0x2f) goto LAB_141b268f6;
    } while (puVar14 != &UNK_143391f91);
    lVar12 = 0x38;
LAB_141b2691a:
    pbStack_2c0 = (byte *)0x141b2691f;
    plVar15 = (longlong *)pdb_140e97000();
    if ((char)plVar15[0xd] != '\x01') {
      pbStack_2c0 = (byte *)0x141b28193;
      plVar15 = (longlong *)pdb_142d8ec20(plVar15,0);
      if (plVar15 == (longlong *)0x0) {
LAB_141b281b1:
        pbStack_2c0 = (byte *)0x141b281bd;
        pdb_142dc7890(&UNK_143326860);
LAB_141b281be:
                    /* WARNING: Subroutine does not return */
        pbStack_2c0 = (byte *)0x141b281cd;
        pdb_142dc81f2(param_3);
      }
    }
    if (*plVar15 != 0) {
LAB_141b28155:
      pbStack_2c0 = (byte *)0x141b28161;
      pdb_142dc8090(&UNK_143326a50);
LAB_141b28162:
                    /* WARNING: Subroutine does not return */
      pbStack_2c0 = (byte *)0x141b2816e;
      pdb_142dc81f2();
    }
    *plVar15 = -1;
    pbStack_288 = (byte *)0x0;
    pppppppuStack_290 = (undefined8 *******)0x1;
    pbStack_2c0 = (byte *)0x141b2696a;
    uStack_298 = (undefined *)lVar12;
    plStack_c8 = plVar15;
    uStack_1c0 = pdb_140e94f10(plVar15 + 1,puVar41,lVar40);
    auVar49._8_8_ = extraout_XMM0_Qb_00;
    auVar49._0_8_ = extraout_XMM0_Qa_00;
    *plStack_c8 = *plStack_c8 + 1;
    uStack_200 = uStack_1c0;
    uStack_208 = 1;
  }
  fVar50 = _DAT_142e36f28;
  if (*(char *)*param_1 != '\t') {
    fVar50 = *(float *)(*param_9 + 0x1c) / _DAT_142f3e554;
  }
  puVar5 = (ulonglong *)*param_3;
  lVar12 = param_3[1];
  uVar29 = *puVar5;
  puVar17 = (undefined8 *)0x0;
  puVar27 = (undefined8 *)(uVar29 - *(ulonglong *)(lVar12 + 0x18));
  if (uVar29 < *(ulonglong *)(lVar12 + 0x18)) {
    puVar27 = puVar17;
  }
  puVar37 = (undefined8 *)(uVar29 - *(ulonglong *)(lVar12 + 0x38));
  if (uVar29 < *(ulonglong *)(lVar12 + 0x38)) {
    puVar37 = puVar17;
  }
  pbVar16 = (byte *)((longlong)puVar27 * 0x28 + *(longlong *)(lVar12 + 8));
  puVar6 = *(undefined8 **)(lVar12 + 0x10);
  puVar39 = (undefined8 *)((longlong)puVar6 - (longlong)puVar27);
  if (puVar6 < puVar27) {
    puVar39 = puVar17;
  }
  pppppppuVar31 = (undefined8 *******)0x8;
  if (puVar6 < puVar27) {
    pbVar16 = (byte *)0x8;
  }
  pbVar23 = (byte *)((longlong)puVar37 * 0x28 + *(longlong *)(lVar12 + 0x28));
  puVar27 = (undefined8 *)((longlong)*(undefined8 **)(lVar12 + 0x30) - (longlong)puVar37);
  if (*(undefined8 **)(lVar12 + 0x30) < puVar37) {
    pbVar23 = (byte *)0x8;
    puVar27 = puVar17;
  }
  *puVar5 = (*(longlong *)(lVar12 + 0x40) - (longlong)puVar27) - (longlong)puVar39;
  pbStack_148 = pbVar16 + (longlong)puVar39 * 0x28;
  pbStack_140 = pbVar23 + (longlong)puVar27 * 0x28;
  plStack_c8 = (longlong *)CONCAT44(plStack_c8._4_4_,*(undefined4 *)((longlong)param_5 + 0x1c));
  pbVar36 = (byte *)*param_5;
  puStack_d0 = (undefined4 *)param_5[2];
  pbStack_160 = pbVar36 + 0x380;
  puStack_e8 = (ulonglong *)*param_2;
  pbStack_170 = pbVar36 + 0x2c0;
  pbStack_180 = pbVar36 + 0x300;
  pbStack_178 = pbVar36 + 0x340;
  pbStack_188 = pbVar36 + 0x280;
  pbStack_190 = pbVar36 + 0x240;
  pbStack_198 = pbVar36 + 0x200;
  pbStack_1a0 = pbVar36 + 0x1c0;
  pbStack_138 = pbVar36 + 0x140;
  pbStack_1a8 = pbVar36 + 0x180;
  pbStack_168 = pbVar36 + 0x100;
  pbStack_150 = pbVar36 + 0x80;
  pbStack_158 = pbVar36 + 0xc0;
  pbStack_d8 = pbVar36;
  pbVar30 = pbVar36 + 0x40;
  pbStack_1b0 = pbVar30;
LAB_141b26b86:
  if ((pbVar16 == (byte *)0x0) || (pbVar16 == pbStack_148)) {
    if ((pbVar23 == (byte *)0x0) || (pbVar23 == pbStack_140)) {
      puStack_e8 = (ulonglong *)*puStack_1b8;
      lVar12 = puStack_1b8[1];
      uVar29 = *puStack_e8;
      uVar25 = 0;
      uVar13 = uVar29 - *(ulonglong *)(lVar12 + 0x18);
      if (uVar29 < *(ulonglong *)(lVar12 + 0x18)) {
        uVar13 = uVar25;
      }
      uVar26 = uVar29 - *(ulonglong *)(lVar12 + 0x38);
      if (uVar29 < *(ulonglong *)(lVar12 + 0x38)) {
        uVar26 = uVar25;
      }
      pbStack_148 = (byte *)(uVar13 * 0x58 + *(longlong *)(lVar12 + 8));
      uVar29 = *(ulonglong *)(lVar12 + 0x10) - uVar13;
      if (*(ulonglong *)(lVar12 + 0x10) < uVar13) {
        pbStack_148 = (byte *)0x8;
        uVar29 = uVar25;
      }
      pbStack_140 = (byte *)(uVar26 * 0x58 + *(longlong *)(lVar12 + 0x28));
      uVar13 = *(ulonglong *)(lVar12 + 0x30) - uVar26;
      if (*(ulonglong *)(lVar12 + 0x30) < uVar26) {
        pbStack_140 = (byte *)0x8;
        uVar13 = uVar25;
      }
      *puStack_e8 = (*(longlong *)(lVar12 + 0x40) - uVar13) - uVar29;
      fVar48 = _DAT_142e36f28;
      puStack_1b8 = (undefined8 *)((longlong)pbStack_148 + uVar29 * 0xb * 8);
      puStack_1c8 = (undefined8 *)((longlong)pbStack_140 + uVar13 * 0xb * 8);
      goto LAB_141b277e0;
    }
    pbVar16 = (byte *)0x0;
    pbVar20 = pbVar23;
    pbVar23 = pbVar23 + 0x28;
  }
  else {
    pbVar20 = pbVar16;
    pbVar16 = pbVar16 + 0x28;
  }
  *puVar5 = *puVar5 + 1;
  uVar29 = (ulonglong)*(int *)(&UNK_143392d50 + (ulonglong)pbVar20[8] * 4);
  pbVar24 = &UNK_143392d50 + uVar29;
  cVar21 = (char)pbVar24;
  cVar10 = (char)pbVar20;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(pbVar20[8]) {
  case 0:
    pbVar24 = pbStack_d8;
    if (pbVar20[9] != 0) {
      pbVar24 = pbStack_1b0;
    }
    *puStack_d0 = plStack_c8._0_4_;
    uStack_128 = *(undefined4 *)(pbVar20 + 0x18);
    uStack_130 = *(undefined8 *)(pbVar20 + 0x10);
    pbVar36 = (byte *)(ulonglong)pbVar20[0x20];
    uStack_298 = (undefined *)CONCAT44(uStack_298._4_4_,fVar50);
    pbVar30 = (byte *)&uStack_130;
    pbStack_2c0 = (byte *)0x141b26c24;
    auVar49._0_8_ = pdb_14090caf0(pbVar24);
    auVar49._8_8_ = extraout_XMM0_Qb_02;
    goto LAB_141b26b86;
  case 1:
    pbVar30 = pbStack_150;
    if (pbVar20[9] != 0) {
      pbVar30 = pbStack_158;
    }
    *puStack_d0 = plStack_c8._0_4_;
    uStack_128 = *(undefined4 *)(pbVar20 + 0x18);
    uStack_130 = *(undefined8 *)(pbVar20 + 0x10);
    uStack_298 = (undefined *)((ulonglong)uStack_298._4_4_ << 0x20);
    pbStack_2c0 = (byte *)0x141b27135;
    pdb_14090caf0(pbVar30,&uStack_130,pbVar20[0x20],*(undefined4 *)(pbVar20 + 0x1c));
    uVar29 = *(ulonglong *)(pbVar30 + 0x28);
    if (*(ulonglong *)(pbVar30 + 0x10) <= uVar29) {
                    /* WARNING: Subroutine does not return */
      pbStack_2c0 = (byte *)0x141b28230;
      pdb_142dc81f2(uVar29,*(ulonglong *)(pbVar30 + 0x10),&UNK_143043a80);
    }
    lVar12 = *(longlong *)(pbVar30 + 8);
    uVar46 = 0;
    in_XMM1_Dc = 0;
    in_XMM1_Dd = 0;
    pbStack_2c0 = (byte *)0x141b27163;
    fVar48 = _DAT_143008730;
    uVar45 = pdb_140de8220();
    pbVar30 = &UNK_143391fdc;
    pbVar36 = (byte *)0xa;
    pbStack_2c0 = (byte *)0x141b27187;
    auVar49._0_8_ = pdb_140a8e730(lVar12 + uVar29 * 0x30,&UNK_143391fdc,10,uVar45);
    auVar49._8_8_ = extraout_XMM0_Qb_14;
    goto LAB_141b26b86;
  case 2:
    *puStack_d0 = plStack_c8._0_4_;
    uStack_128 = *(undefined4 *)(pbVar20 + 0x18);
    uStack_130 = *(undefined8 *)(pbVar20 + 0x10);
    uStack_298 = (undefined *)((ulonglong)uStack_298._4_4_ << 0x20);
    pbStack_2c0 = (byte *)0x141b26f08;
    pdb_14090caf0(pbStack_168,&uStack_130,pbVar20[0x20],*(undefined4 *)(pbVar20 + 0x1c));
    uVar29 = *(ulonglong *)(pbStack_d8 + 0x128);
    if (*(ulonglong *)(pbStack_d8 + 0x110) <= uVar29) {
                    /* WARNING: Subroutine does not return */
      pbStack_2c0 = (byte *)0x141b2821e;
      pdb_142dc81f2(uVar29,*(ulonglong *)(pbStack_d8 + 0x110),&UNK_143043a80);
    }
    lVar12 = *(longlong *)(pbStack_d8 + 0x108);
    pbStack_2c0 = (byte *)0x141b26f46;
    fVar47 = (float)pdb_140de8220();
    uVar46 = 0;
    in_XMM1_Dc = 0;
    in_XMM1_Dd = 0;
    fVar48 = 0.0;
    if (0.0 <= fVar47) {
      fVar48 = fVar47;
    }
    fVar47 = _DAT_142e36f28;
    if (fVar48 <= _DAT_142e36f28) {
      fVar47 = fVar48;
    }
    pbVar30 = &UNK_143391fd1;
    pbVar36 = (byte *)0xb;
    pbStack_2c0 = (byte *)0x141b26f7a;
    auVar49._0_8_ = pdb_140a8e730(lVar12 + uVar29 * 0x30,&UNK_143391fd1,0xb,fVar47);
    auVar49._8_8_ = extraout_XMM0_Qb_10;
    goto LAB_141b26b86;
  case 3:
    uStack_128 = *(undefined4 *)(pbVar20 + 0x18);
    uStack_130 = *(undefined8 *)(pbVar20 + 0x10);
    uStack_298 = (undefined *)CONCAT44(uStack_298._4_4_,*(undefined4 *)(pbVar20 + 0x1c));
    pbVar30 = &UNK_143391fe6;
    puVar17 = &uStack_130;
    pbVar36 = (byte *)0x16;
    pbStack_2c0 = (byte *)0x141b2700a;
    auVar49._0_8_ = pdb_140abbb70(puStack_e8);
    auVar49._8_8_ = extraout_XMM0_Qb_12;
    goto LAB_141b26b86;
  case 4:
    uStack_128 = *(undefined4 *)(pbVar20 + 0x18);
    uStack_130 = *(undefined8 *)(pbVar20 + 0x10);
    uStack_298 = (undefined *)CONCAT44(uStack_298._4_4_,*(undefined4 *)(pbVar20 + 0x1c));
    pbVar30 = &UNK_143391ffc;
    puVar17 = &uStack_130;
    pbVar36 = (byte *)0x15;
    pbStack_2c0 = (byte *)0x141b26d75;
    auVar49._0_8_ = pdb_140abbb70(puStack_e8);
    auVar49._8_8_ = extraout_XMM0_Qb_05;
    goto LAB_141b26b86;
  case 5:
    uStack_128 = *(undefined4 *)(pbVar20 + 0x18);
    uStack_130 = *(undefined8 *)(pbVar20 + 0x10);
    uStack_298 = (undefined *)CONCAT44(uStack_298._4_4_,*(undefined4 *)(pbVar20 + 0x1c));
    pbVar30 = &UNK_143392011;
    puVar17 = &uStack_130;
    pbVar36 = (byte *)0x19;
    pbStack_2c0 = (byte *)0x141b2725c;
    auVar49._0_8_ = pdb_140abbb70(puStack_e8);
    auVar49._8_8_ = extraout_XMM0_Qb_17;
    goto LAB_141b26b86;
  case 6:
    *puStack_d0 = plStack_c8._0_4_;
    uStack_128 = *(undefined4 *)(pbVar20 + 0x18);
    uStack_130 = *(undefined8 *)(pbVar20 + 0x10);
    pbVar36 = (byte *)(ulonglong)pbVar20[0x20];
    uStack_298 = (undefined *)CONCAT44(uStack_298._4_4_,fVar50);
    pbVar30 = (byte *)&uStack_130;
    pbStack_2c0 = (byte *)0x141b27339;
    auVar49._0_8_ = pdb_14090caf0(pbStack_1a8);
    auVar49._8_8_ = extraout_XMM0_Qb_20;
    goto LAB_141b26b86;
  case 7:
    *puStack_d0 = plStack_c8._0_4_;
    uStack_128 = *(undefined4 *)(pbVar20 + 0x18);
    uStack_130 = *(undefined8 *)(pbVar20 + 0x10);
    uStack_298 = (undefined *)CONCAT44(uStack_298._4_4_,fVar50);
    pbStack_2c0 = (byte *)0x141b2705b;
    pdb_14090caf0(pbStack_138,&uStack_130,pbVar20[0x20],*(undefined4 *)(pbVar20 + 0x1c));
    uVar29 = *(ulonglong *)(pbStack_d8 + 0x168);
    if (*(ulonglong *)(pbStack_d8 + 0x150) <= uVar29) {
                    /* WARNING: Subroutine does not return */
      pbStack_2c0 = (byte *)0x141b2820c;
      pdb_142dc81f2(uVar29,*(ulonglong *)(pbStack_d8 + 0x150),&UNK_143043a80);
    }
    lVar12 = *(longlong *)(pbStack_d8 + 0x148);
    pbStack_2c0 = (byte *)0x141b27099;
    fVar47 = (float)pdb_140de8220();
    uVar46 = 0;
    in_XMM1_Dc = 0;
    in_XMM1_Dd = 0;
    fVar48 = 0.0;
    if (0.0 <= fVar47) {
      fVar48 = fVar47;
    }
    fVar47 = _DAT_142e36f28;
    if (fVar48 <= _DAT_142e36f28) {
      fVar47 = fVar48;
    }
    pbVar30 = &UNK_143391fd1;
    pbVar36 = (byte *)0xb;
    pbStack_2c0 = (byte *)0x141b270cd;
    auVar49._0_8_ = pdb_140a8e730(lVar12 + uVar29 * 0x30,&UNK_143391fd1,0xb,fVar47);
    auVar49._8_8_ = extraout_XMM0_Qb_13;
    goto LAB_141b26b86;
  case 8:
    uStack_128 = *(undefined4 *)(pbVar20 + 0x18);
    uStack_130 = *(undefined8 *)(pbVar20 + 0x10);
    uStack_298 = (undefined *)CONCAT44(uStack_298._4_4_,*(undefined4 *)(pbVar20 + 0x1c));
    pbVar30 = &UNK_14339202a;
    puVar17 = &uStack_130;
    pbVar36 = (byte *)0x17;
    pbStack_2c0 = (byte *)0x141b2743b;
    auVar49._0_8_ = pdb_140abbb70(puStack_e8);
    auVar49._8_8_ = extraout_XMM0_Qb_22;
    goto LAB_141b26b86;
  case 9:
    uStack_128 = *(undefined4 *)(pbVar20 + 0x18);
    uStack_130 = *(undefined8 *)(pbVar20 + 0x10);
    uStack_298 = (undefined *)CONCAT44(uStack_298._4_4_,*(undefined4 *)(pbVar20 + 0x1c));
    pbVar30 = &UNK_143392041;
    puVar17 = &uStack_130;
    pbVar36 = (byte *)0x1a;
    pbStack_2c0 = (byte *)0x141b26dff;
    auVar49._0_8_ = pdb_140abbb70(puStack_e8);
    auVar49._8_8_ = extraout_XMM0_Qb_07;
    goto LAB_141b26b86;
  case 10:
    bVar3 = pbVar20[9];
    pppppppuVar31 = (undefined8 *******)(ulonglong)bVar3;
    *puStack_d0 = plStack_c8._0_4_;
    uStack_128 = *(undefined4 *)(pbVar20 + 0x18);
    uStack_130 = *(undefined8 *)(pbVar20 + 0x10);
    uStack_298 = (undefined *)CONCAT44(uStack_298._4_4_,fVar50);
    pbStack_2c0 = (byte *)0x141b273cd;
    pdb_14090caf0(pbStack_1a0,&uStack_130,pbVar20[0x20]);
    uVar29 = *(ulonglong *)(pbStack_d8 + 0x1e8);
    if (*(ulonglong *)(pbStack_d8 + 0x1d0) <= uVar29) {
                    /* WARNING: Subroutine does not return */
      pbStack_2c0 = (byte *)0x141b281fa;
      pdb_142dc81f2(uVar29,*(ulonglong *)(pbStack_d8 + 0x1d0),&UNK_143043a80);
    }
    fVar47 = _DAT_142e36f28;
    if (bVar3 == 0) {
      fVar47 = 0.0;
    }
    pbVar30 = &UNK_14339205b;
    pbVar36 = (byte *)0x9;
    pbStack_2c0 = (byte *)0x141b276c3;
    auVar49._0_8_ =
         pdb_140a8e730(uVar29 * 0x30 + *(longlong *)(pbStack_d8 + 0x1c8),&UNK_14339205b,9,fVar47);
    auVar49._8_8_ = extraout_XMM0_Qb_30;
    goto LAB_141b26b86;
  case 0xb:
    uStack_128 = *(undefined4 *)(pbVar20 + 0x18);
    uStack_130 = *(undefined8 *)(pbVar20 + 0x10);
    uStack_298 = (undefined *)CONCAT44(uStack_298._4_4_,*(undefined4 *)(pbVar20 + 0x1c));
    pbVar30 = &UNK_143392064;
    puVar17 = &uStack_130;
    pbVar36 = (byte *)0x16;
    pbStack_2c0 = (byte *)0x141b26d30;
    auVar49._0_8_ = pdb_140abbb70(puStack_e8);
    auVar49._8_8_ = extraout_XMM0_Qb_04;
    goto LAB_141b26b86;
  case 0xc:
    uStack_128 = *(undefined4 *)(pbVar20 + 0x18);
    uStack_130 = *(undefined8 *)(pbVar20 + 0x10);
    uStack_298 = (undefined *)CONCAT44(uStack_298._4_4_,*(undefined4 *)(pbVar20 + 0x1c));
    pbVar30 = &UNK_14339207a;
    puVar17 = &uStack_130;
    pbVar36 = (byte *)0x1a;
    pbStack_2c0 = (byte *)0x141b26dba;
    auVar49._0_8_ = pdb_140abbb70(puStack_e8);
    auVar49._8_8_ = extraout_XMM0_Qb_06;
    goto LAB_141b26b86;
  case 0xd:
    *puStack_d0 = plStack_c8._0_4_;
    uStack_128 = *(undefined4 *)(pbVar20 + 0x18);
    uStack_130 = *(undefined8 *)(pbVar20 + 0x10);
    pbVar36 = (byte *)(ulonglong)pbVar20[0x20];
    uStack_298 = (undefined *)CONCAT44(uStack_298._4_4_,fVar50);
    pbVar30 = (byte *)&uStack_130;
    pbStack_2c0 = (byte *)0x141b272ed;
    auVar49._0_8_ = pdb_14090caf0(pbStack_198);
    auVar49._8_8_ = extraout_XMM0_Qb_19;
    goto LAB_141b26b86;
  case 0xe:
    bVar3 = pbVar20[9];
    bVar4 = pbVar20[10];
    pppppppuVar31 = (undefined8 *******)(ulonglong)bVar4;
    *puStack_d0 = plStack_c8._0_4_;
    uStack_128 = *(undefined4 *)(pbVar20 + 0x18);
    uStack_130 = *(undefined8 *)(pbVar20 + 0x10);
    uStack_298 = (undefined *)CONCAT44(uStack_298._4_4_,fVar50);
    pbStack_2c0 = (byte *)0x141b26cbc;
    pdb_14090caf0(pbStack_190,&uStack_130,pbVar20[0x20],*(undefined4 *)(pbVar20 + 0x1c));
    uVar29 = *(ulonglong *)(pbStack_d8 + 0x268);
    if (*(ulonglong *)(pbStack_d8 + 0x250) <= uVar29) {
                    /* WARNING: Subroutine does not return */
      pbStack_2c0 = (byte *)0x141b281dc;
      pdb_142dc81f2(uVar29,*(ulonglong *)(pbStack_d8 + 0x250),&UNK_143043a80);
    }
    fVar47 = _DAT_142e36f28;
    if (bVar3 == 0) {
      fVar47 = _DAT_142e36f34;
    }
    pbStack_2c0 = (byte *)0x141b2766b;
    pdb_140a8e730(uVar29 * 0x30 + *(longlong *)(pbStack_d8 + 0x248),&UNK_143392094,0x13,fVar47);
    uVar29 = *(ulonglong *)(pbStack_d8 + 0x268);
    if (*(ulonglong *)(pbStack_d8 + 0x250) <= uVar29) {
                    /* WARNING: Subroutine does not return */
      pbStack_2c0 = (byte *)0x141b281eb;
      pdb_142dc81f2(uVar29,*(ulonglong *)(pbStack_d8 + 0x250),&UNK_143043a80);
    }
    fVar47 = _DAT_142e36f28;
    if (bVar4 != 0) {
      fVar47 = 0.0;
    }
    pbVar30 = &UNK_1433920a7;
    pbVar36 = (byte *)0xe;
    pbStack_2c0 = (byte *)0x141b276ff;
    auVar49._0_8_ =
         pdb_140a8e730(uVar29 * 0x30 + *(longlong *)(pbStack_d8 + 0x248),&UNK_1433920a7,0xe,fVar47);
    auVar49._8_8_ = extraout_XMM0_Qb_31;
    goto LAB_141b26b86;
  case 0xf:
    uStack_128 = *(undefined4 *)(pbVar20 + 0x18);
    uStack_130 = *(undefined8 *)(pbVar20 + 0x10);
    uStack_298 = (undefined *)CONCAT44(uStack_298._4_4_,*(undefined4 *)(pbVar20 + 0x1c));
    pbVar30 = &UNK_1433920b5;
    puVar17 = &uStack_130;
    pbVar36 = (byte *)0x1d;
    pbStack_2c0 = (byte *)0x141b26fc5;
    auVar49._0_8_ = pdb_140abbb70(puStack_e8);
    auVar49._8_8_ = extraout_XMM0_Qb_11;
    goto LAB_141b26b86;
  case 0x10:
    uStack_128 = *(undefined4 *)(pbVar20 + 0x18);
    uStack_130 = *(undefined8 *)(pbVar20 + 0x10);
    uStack_298 = (undefined *)CONCAT44(uStack_298._4_4_,*(undefined4 *)(pbVar20 + 0x1c));
    pbVar30 = &UNK_1433920d2;
    puVar17 = &uStack_130;
    pbVar36 = (byte *)0x1d;
    pbStack_2c0 = (byte *)0x141b26c69;
    auVar49._0_8_ = pdb_140abbb70(puStack_e8);
    auVar49._8_8_ = extraout_XMM0_Qb_03;
    goto LAB_141b26b86;
  case 0x11:
    uStack_128 = *(undefined4 *)(pbVar20 + 0x18);
    uStack_130 = *(undefined8 *)(pbVar20 + 0x10);
    uStack_298 = (undefined *)CONCAT44(uStack_298._4_4_,*(undefined4 *)(pbVar20 + 0x1c));
    pbVar30 = &UNK_1433920ef;
    puVar17 = &uStack_130;
    pbVar36 = (byte *)0x1c;
    pbStack_2c0 = (byte *)0x141b271d2;
    auVar49._0_8_ = pdb_140abbb70(puStack_e8);
    auVar49._8_8_ = extraout_XMM0_Qb_15;
    goto LAB_141b26b86;
  case 0x12:
    uStack_128 = *(undefined4 *)(pbVar20 + 0x18);
    uStack_130 = *(undefined8 *)(pbVar20 + 0x10);
    uStack_298 = (undefined *)CONCAT44(uStack_298._4_4_,*(undefined4 *)(pbVar20 + 0x1c));
    pbVar30 = &UNK_14339210b;
    puVar17 = &uStack_130;
    pbVar36 = (byte *)0x1b;
    pbStack_2c0 = (byte *)0x141b2737e;
    auVar49._0_8_ = pdb_140abbb70(puStack_e8);
    auVar49._8_8_ = extraout_XMM0_Qb_21;
    goto LAB_141b26b86;
  case 0x13:
    uStack_128 = *(undefined4 *)(pbVar20 + 0x18);
    uStack_130 = *(undefined8 *)(pbVar20 + 0x10);
    uStack_298 = (undefined *)CONCAT44(uStack_298._4_4_,*(undefined4 *)(pbVar20 + 0x1c));
    pbVar30 = &UNK_143392041;
    puVar17 = &uStack_130;
    pbVar36 = (byte *)0x1a;
    pbStack_2c0 = (byte *)0x141b27513;
    auVar49._0_8_ = pdb_140abbb70(puStack_e8);
    auVar49._8_8_ = extraout_XMM0_Qb_25;
    goto LAB_141b26b86;
  case 0x14:
    uStack_128 = *(undefined4 *)(pbVar20 + 0x18);
    uStack_130 = *(undefined8 *)(pbVar20 + 0x10);
    uStack_298 = (undefined *)CONCAT44(uStack_298._4_4_,*(undefined4 *)(pbVar20 + 0x1c));
    pbVar30 = &UNK_143392126;
    puVar17 = &uStack_130;
    pbVar36 = (byte *)0x20;
    pbStack_2c0 = (byte *)0x141b27217;
    auVar49._0_8_ = pdb_140abbb70(puStack_e8);
    auVar49._8_8_ = extraout_XMM0_Qb_16;
    goto LAB_141b26b86;
  case 0x15:
    uStack_128 = *(undefined4 *)(pbVar20 + 0x18);
    uStack_130 = *(undefined8 *)(pbVar20 + 0x10);
    uStack_298 = (undefined *)CONCAT44(uStack_298._4_4_,*(undefined4 *)(pbVar20 + 0x1c));
    pbVar30 = &UNK_143392146;
    puVar17 = &uStack_130;
    pbVar36 = (byte *)0x25;
    pbStack_2c0 = (byte *)0x141b272a1;
    auVar49._0_8_ = pdb_140abbb70(puStack_e8);
    auVar49._8_8_ = extraout_XMM0_Qb_18;
    goto LAB_141b26b86;
  case 0x16:
    uStack_128 = *(undefined4 *)(pbVar20 + 0x18);
    uStack_130 = *(undefined8 *)(pbVar20 + 0x10);
    uStack_298 = (undefined *)CONCAT44(uStack_298._4_4_,*(undefined4 *)(pbVar20 + 0x1c));
    pbVar30 = &UNK_14339216b;
    puVar17 = &uStack_130;
    pbVar36 = (byte *)0x15;
    pbStack_2c0 = (byte *)0x141b274ce;
    auVar49._0_8_ = pdb_140abbb70(puStack_e8);
    auVar49._8_8_ = extraout_XMM0_Qb_24;
    goto LAB_141b26b86;
  case 0x17:
    *puStack_d0 = plStack_c8._0_4_;
    uStack_128 = *(undefined4 *)(pbVar20 + 0x18);
    uStack_130 = *(undefined8 *)(pbVar20 + 0x10);
    pbVar36 = (byte *)(ulonglong)pbVar20[0x20];
    uStack_298 = (undefined *)CONCAT44(uStack_298._4_4_,fVar50);
    pbVar30 = (byte *)&uStack_130;
    pbStack_2c0 = (byte *)0x141b2755f;
    auVar49._0_8_ = pdb_14090caf0(pbStack_188);
    auVar49._8_8_ = extraout_XMM0_Qb_26;
    goto LAB_141b26b86;
  case 0x18:
    pbVar36 = (byte *)0x1f;
    if (pbVar20[9] != 0) {
      pbVar36 = (byte *)0x25;
    }
    pbVar30 = &UNK_143392180;
    if (pbVar20[9] != 0) {
      pbVar30 = &UNK_14339219f;
    }
    uStack_128 = *(undefined4 *)(pbVar20 + 0x18);
    uStack_130 = *(undefined8 *)(pbVar20 + 0x10);
    uStack_298 = (undefined *)CONCAT44(uStack_298._4_4_,*(undefined4 *)(pbVar20 + 0x1c));
    puVar17 = &uStack_130;
    pbStack_2c0 = (byte *)0x141b26eb5;
    auVar49._0_8_ = pdb_140abbb70(puStack_e8);
    auVar49._8_8_ = extraout_XMM0_Qb_09;
    goto LAB_141b26b86;
  case 0x19:
    pbVar24 = pbStack_180;
    if (pbVar20[9] != 0) {
      pbVar24 = pbStack_178;
    }
    *puStack_d0 = plStack_c8._0_4_;
    uStack_128 = *(undefined4 *)(pbVar20 + 0x18);
    uStack_130 = *(undefined8 *)(pbVar20 + 0x10);
    pbVar36 = (byte *)(ulonglong)pbVar20[0x20];
    uStack_298 = (undefined *)CONCAT44(uStack_298._4_4_,fVar50);
    pbVar30 = (byte *)&uStack_130;
    pbStack_2c0 = (byte *)0x141b26e58;
    auVar49._0_8_ = pdb_14090caf0(pbVar24);
    auVar49._8_8_ = extraout_XMM0_Qb_08;
    goto LAB_141b26b86;
  case 0x1a:
    uStack_128 = *(undefined4 *)(pbVar20 + 0x18);
    uStack_130 = *(undefined8 *)(pbVar20 + 0x10);
    uStack_298 = (undefined *)CONCAT44(uStack_298._4_4_,*(undefined4 *)(pbVar20 + 0x1c));
    pbVar30 = &UNK_1433921c4;
    puVar17 = &uStack_130;
    pbVar36 = (byte *)0x14;
    pbStack_2c0 = (byte *)0x141b27635;
    auVar49._0_8_ = pdb_140abbb70(puStack_e8);
    auVar49._8_8_ = extraout_XMM0_Qb_29;
    goto LAB_141b26b86;
  case 0x1b:
    uStack_128 = *(undefined4 *)(pbVar20 + 0x18);
    uStack_130 = *(undefined8 *)(pbVar20 + 0x10);
    uStack_298 = (undefined *)CONCAT44(uStack_298._4_4_,*(undefined4 *)(pbVar20 + 0x1c));
    pbVar30 = &UNK_1433921d8;
    puVar17 = &uStack_130;
    pbVar36 = (byte *)0x1a;
    pbStack_2c0 = (byte *)0x141b26b71;
    auVar49._0_8_ = pdb_140abbb70(puStack_e8);
    auVar49._8_8_ = extraout_XMM0_Qb_01;
    goto LAB_141b26b86;
  case 0x1c:
    uStack_128 = *(undefined4 *)(pbVar20 + 0x18);
    uStack_130 = *(undefined8 *)(pbVar20 + 0x10);
    uStack_298 = (undefined *)CONCAT44(uStack_298._4_4_,*(undefined4 *)(pbVar20 + 0x1c));
    pbVar30 = &UNK_1433921f2;
    puVar17 = &uStack_130;
    pbVar36 = (byte *)0x1a;
    pbStack_2c0 = (byte *)0x141b275a4;
    auVar49._0_8_ = pdb_140abbb70(puStack_e8);
    auVar49._8_8_ = extraout_XMM0_Qb_27;
    goto LAB_141b26b86;
  case 0x1d:
    *puStack_d0 = plStack_c8._0_4_;
    uStack_128 = *(undefined4 *)(pbVar20 + 0x18);
    uStack_130 = *(undefined8 *)(pbVar20 + 0x10);
    pbVar36 = (byte *)(ulonglong)pbVar20[0x20];
    uStack_298 = (undefined *)CONCAT44(uStack_298._4_4_,fVar50);
    pbVar30 = (byte *)&uStack_130;
    pbStack_2c0 = (byte *)0x141b275f0;
    auVar49._0_8_ = pdb_14090caf0(pbStack_170);
    auVar49._8_8_ = extraout_XMM0_Qb_28;
    goto LAB_141b26b86;
  case 0x1e:
    goto code_r0x000141b27441;
  case 0x1f:
    goto code_r0x000141b29a71;
  case 0x20:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x21:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x22:
    (&UNK_143392d5f)[uVar29] = ((&UNK_143392d5f)[uVar29] - cVar21) - (0xfffffffebcc6d2af < uVar29);
    uStack_20d = uStack_20d >> 0x10 | uStack_20d << 0x10;
    puVar1 = (uint *)(pbVar20 + -0x73);
    *puVar1 = *puVar1 >> 1 | (uint)((*puVar1 & 1) != 0) << 0x1f;
    uVar13 = (ulonglong)pbVar20 | 0x40;
    pbVar24 = (byte *)((longlong)pbVar24 * 8 + *(longlong *)(pbVar36 + 8));
    uVar29 = *(ulonglong *)(pbVar36 + 0x10);
    puVar39 = (undefined8 *)(uVar29 - uVar13);
    if (uVar29 < uVar13) {
      puVar39 = puVar17;
    }
    pbVar23 = (byte *)0x8;
    if (uVar29 < uVar13) {
      pbVar24 = (byte *)0x8;
    }
    goto code_r0x000141b29a71;
  case 0x23:
    *pbVar20 = *pbVar20 + cVar10;
    pbVar16[0x5e] = pbVar16[0x5e] + (char)pppppppuVar31;
    return;
  default:
    bVar44 = false;
    uVar29 = (ulonglong)
             CONCAT31((int3)((uint)*(undefined4 *)(pbVar20 + 0x33) >> 8),
                      (byte)*(undefined4 *)(pbVar20 + 0x33) |
                      *(byte *)((longlong)pppppppuVar31 - 0x7eb7f7ae));
    while (uVar29 != 0) {
      uVar29 = uVar29 - 1;
      out(*(undefined4 *)pbVar23,(short)pbVar30);
      pbVar23 = pbVar23 + 4;
    }
    bVar3 = in((short)pbVar30);
    *pbVar16 = bVar3;
    pbVar24 = (byte *)0x0;
    goto code_r0x000141b2b2e6;
  case 0x25:
    break;
  case 0x27:
    pbStack_2c0 = (byte *)0x141b2b24b;
    pcVar19 = (char *)(**(code **)(pbVar20 + 0x1f0fc7eb))();
    *pcVar19 = *pcVar19;
    *pcVar19 = *pcVar19 + (char)pcVar19;
    if (pbVar30[0x87] != 0) {
      auStack_308[2] = 0x141b2b27a;
      pbStack_2d0 = pbVar16;
      pbStack_2c8 = pbVar23;
      pbStack_2c0 = pbVar33;
      pbStack_2a8 = pbVar30;
      pdb_141b2ba00(pbVar30 + 0x50);
    }
    break;
  case 0x2b:
    pbVar20[-0x73] = pbVar20[-0x73] + cVar21;
    goto code_r0x000141b2b298;
  case 0x2e:
    if (0xfffffffebcc6d2af >= uVar29) goto code_r0x000141b2b333;
    out(*(undefined4 *)pbVar23,0);
    cVar21 = (char)((ulonglong)pbVar20 >> 8) + pbVar23[0x13];
    pbVar20 = (byte *)CONCAT62((int6)((ulonglong)pbVar20 >> 0x10),CONCAT11(cVar21,cVar10));
    if (cVar21 != '\0') {
      pbVar20 = (byte *)0x66014602;
    }
    if ((byte)((byte)(in_MM0 >> 7) & 1 | ((byte)(in_MM0 >> 0xf) & 1) << 1 |
               ((byte)(in_MM0 >> 0x17) & 1) << 2 | ((byte)(in_MM0 >> 0x1f) & 1) << 3 |
               ((byte)(in_MM0 >> 0x27) & 1) << 4 | ((byte)(in_MM0 >> 0x2f) & 1) << 5 |
               ((byte)(in_MM0 >> 0x37) & 1) << 6 | (byte)(in_MM0 >> 0x38) & 0x80) != 0xffff)
    goto LAB_141b2b366;
    goto code_r0x000141b2b334;
  case 0x2f:
  case 0x30:
  case 0x31:
  case 0x35:
    *pbVar20 = *pbVar20 + cVar10;
    pbVar20[0x75c13948] = pbVar20[0x75c13948] + cVar10;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x32:
    return;
  case 0x33:
    *pbVar20 = *pbVar20 + cVar10;
    pbVar20[-0x7d] = pbVar20[-0x7d] + cVar21;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x34:
    iStack_1f8 = iStack_1f8 << 1;
    bVar3 = pbVar20[8];
    pbVar24 = pbVar36;
    goto code_r0x000141b2ba2c;
  case 0x36:
  case 0x37:
    bVar44 = (int)(*(int *)pbVar23 + 0xbc760187U) < 0;
    do {
    } while (!bVar44);
    lVar12 = (longlong)*(int *)(&UNK_143392dc9 + uVar29) * -2;
    bVar43 = (int)lVar12 != lVar12;
    if ((POPCOUNT(*(int *)pbVar23 + 0xbc760187U & 0xff) & 1U) != 0) {
      (&UNK_143392d4e)[(longlong)pbVar16 * 2 + uVar29] = (char)lVar12;
      *pbVar16 = *pbVar16 + 1;
      do {
      } while (-1 < (char)*pbVar16);
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    do {
    } while (!bVar44);
    out(0x3f,(char)lVar12);
    do {
    } while (!bVar44);
    pcVar8 = (code *)swi(0x44);
    lVar12 = (*pcVar8)();
    do {
    } while (!bVar44);
    iRamacfe7942c0fe7945 = (int)lVar12;
    do {
    } while (!bVar44);
    if (!bVar43) {
      do {
      } while (!bVar44);
      do {
      } while (-1 < (char)((byte)lVar12 ^ 0x46));
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    do {
    } while (!bVar44);
    do {
    } while (-1 < (char)(*pbVar23 - *pbVar16));
    if (pbVar24 != (byte *)0x1) {
      pcVar19 = (char *)(lVar12 + -0x7b);
      *pcVar19 = *pcVar19 + '\x01';
      do {
      } while (-1 < *pcVar19);
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    do {
    } while (-1 < (int)(iRamacfe7942c0fe7945 + 0x5afe7948 + (uint)(*pbVar23 < *pbVar16)));
    pcVar8 = (code *)swi(1);
    (*pcVar8)();
    return;
  }
  return;
LAB_141b277e0:
  pbVar33 = pbStack_140;
  if ((pbStack_148 == (byte *)0x0) || (pbStack_148 == (byte *)puStack_1b8)) {
    if ((pbStack_140 == (byte *)0x0) || (pbStack_140 == (byte *)puStack_1c8)) {
      *puStack_d0 = plStack_c8._0_4_;
      if (pbStack_d8[0x38] == 0) {
        pbStack_2c0 = (byte *)0x141b27aa4;
        pdb_140a87f70();
      }
      else {
        pbStack_2c0 = (byte *)0x141b27a9c;
        pdb_140a87e10();
      }
      pbStack_d8[0x38] = 0;
      *puStack_d0 = plStack_c8._0_4_;
      if (pbStack_d8[0x78] == 0) {
        pbStack_2c0 = (byte *)0x141b27ae0;
        pdb_140a87f70(pbStack_1b0);
      }
      else {
        pbStack_2c0 = (byte *)0x141b27ad1;
        pdb_140a87e10(pbStack_1b0);
      }
      pbStack_d8[0x78] = 0;
      *puStack_d0 = plStack_c8._0_4_;
      if (pbStack_d8[0xb8] == 0) {
        pbStack_2c0 = (byte *)0x141b27b1f;
        pdb_140a87f70(pbStack_150);
      }
      else {
        pbStack_2c0 = (byte *)0x141b27b10;
        pdb_140a87e10(pbStack_150);
      }
      pbStack_d8[0xb8] = 0;
      *puStack_d0 = plStack_c8._0_4_;
      if (pbStack_d8[0xf8] == 0) {
        pbStack_2c0 = (byte *)0x141b27b61;
        pdb_140a87f70(pbStack_158);
      }
      else {
        pbStack_2c0 = (byte *)0x141b27b52;
        pdb_140a87e10(pbStack_158);
      }
      pbStack_d8[0xf8] = 0;
      *puStack_d0 = plStack_c8._0_4_;
      if (pbStack_d8[0x1b8] == 0) {
        pbStack_2c0 = (byte *)0x141b27ba3;
        pdb_140a87f70(pbStack_1a8);
      }
      else {
        pbStack_2c0 = (byte *)0x141b27b94;
        pdb_140a87e10(pbStack_1a8);
      }
      pbStack_d8[0x1b8] = 0;
      *puStack_d0 = plStack_c8._0_4_;
      if (pbStack_d8[0x1f8] == 0) {
        pbStack_2c0 = (byte *)0x141b27be5;
        pdb_140a87f70(pbStack_1a0);
      }
      else {
        pbStack_2c0 = (byte *)0x141b27bd6;
        pdb_140a87e10(pbStack_1a0);
      }
      pbStack_d8[0x1f8] = 0;
      *puStack_d0 = plStack_c8._0_4_;
      if (pbStack_d8[0x238] == 0) {
        pbStack_2c0 = (byte *)0x141b27c27;
        pdb_140a87f70(pbStack_198);
      }
      else {
        pbStack_2c0 = (byte *)0x141b27c18;
        pdb_140a87e10(pbStack_198);
      }
      pbStack_d8[0x238] = 0;
      *puStack_d0 = plStack_c8._0_4_;
      if (pbStack_d8[0x278] == 0) {
        pbStack_2c0 = (byte *)0x141b27c69;
        pdb_140a87f70(pbStack_190);
      }
      else {
        pbStack_2c0 = (byte *)0x141b27c5a;
        pdb_140a87e10(pbStack_190);
      }
      pbStack_d8[0x278] = 0;
      *puStack_d0 = plStack_c8._0_4_;
      if (pbStack_d8[0x2b8] == 0) {
        pbStack_2c0 = (byte *)0x141b27cab;
        pdb_140a87f70(pbStack_188);
      }
      else {
        pbStack_2c0 = (byte *)0x141b27c9c;
        pdb_140a87e10(pbStack_188);
      }
      pbStack_d8[0x2b8] = 0;
      *puStack_d0 = plStack_c8._0_4_;
      if (pbStack_d8[0x338] == 0) {
        pbStack_2c0 = (byte *)0x141b27ced;
        pdb_140a87f70(pbStack_180);
      }
      else {
        pbStack_2c0 = (byte *)0x141b27cde;
        pdb_140a87e10(pbStack_180);
      }
      pbStack_d8[0x338] = 0;
      *puStack_d0 = plStack_c8._0_4_;
      if (pbStack_d8[0x378] == 0) {
        pbStack_2c0 = (byte *)0x141b27d2f;
        pdb_140a87f70(pbStack_178);
      }
      else {
        pbStack_2c0 = (byte *)0x141b27d20;
        pdb_140a87e10(pbStack_178);
      }
      pbStack_d8[0x378] = 0;
      *puStack_d0 = plStack_c8._0_4_;
      if (pbStack_d8[0x2f8] == 0) {
        pbStack_2c0 = (byte *)0x141b27d71;
        pdb_140a87f70(pbStack_170);
      }
      else {
        pbStack_2c0 = (byte *)0x141b27d62;
        pdb_140a87e10(pbStack_170);
      }
      pbStack_d8[0x2f8] = 0;
      *puStack_d0 = plStack_c8._0_4_;
      if (pbStack_d8[0x138] == 0) {
        pbStack_2c0 = (byte *)0x141b27db3;
        pdb_140a87f70(pbStack_168);
      }
      else {
        pbStack_2c0 = (byte *)0x141b27da4;
        pdb_140a87e10(pbStack_168);
      }
      pbStack_d8[0x138] = 0;
      *puStack_d0 = plStack_c8._0_4_;
      if (pbStack_d8[0x178] == 0) {
        pbStack_2c0 = (byte *)0x141b27df5;
        pdb_140a87f70(pbStack_138);
      }
      else {
        pbStack_2c0 = (byte *)0x141b27de6;
        pdb_140a87e10(pbStack_138);
      }
      pbStack_d8[0x178] = 0;
      *puStack_d0 = plStack_c8._0_4_;
      if (pbStack_d8[0x3b8] == 0) {
        pbStack_2c0 = (byte *)0x141b27e37;
        pdb_140a87f70(pbStack_160);
      }
      else {
        pbStack_2c0 = (byte *)0x141b27e28;
        pdb_140a87e10(pbStack_160);
      }
      pbVar33 = pbStack_d8;
      pbStack_d8[0x3b8] = 0;
      pbStack_2c0 = (byte *)0x141b27e6b;
      fVar48 = (float)pub_142e32ad0();
      *puStack_d0 = plStack_c8._0_4_;
      *(float *)(pbVar33 + 0x3c0) = fVar48 * *(float *)(pbVar33 + 0x3c0);
      puVar5 = (ulonglong *)*param_7;
      lVar12 = param_7[1];
      uVar29 = *puVar5;
      uVar25 = 0;
      uVar13 = uVar29 - *(ulonglong *)(lVar12 + 0x18);
      if (uVar29 < *(ulonglong *)(lVar12 + 0x18)) {
        uVar13 = uVar25;
      }
      uVar26 = uVar29 - *(ulonglong *)(lVar12 + 0x38);
      if (uVar29 < *(ulonglong *)(lVar12 + 0x38)) {
        uVar26 = uVar25;
      }
      uVar29 = *(ulonglong *)(lVar12 + 0x10);
      uVar38 = *(ulonglong *)(lVar12 + 0x30);
      uVar35 = uVar38 - uVar26;
      if (uVar38 < uVar26) {
        uVar35 = uVar25;
      }
      uVar34 = uVar29 - uVar13;
      if (uVar29 < uVar13) {
        uVar34 = uVar25;
      }
      uVar25 = *(ulonglong *)(lVar12 + 0x40);
      lVar40 = *(longlong *)(lVar12 + 8);
      param_3 = *(undefined8 **)(lVar12 + 0x28);
      *puVar5 = (uVar25 - uVar35) - uVar34;
      if (uVar29 >= uVar13 && uVar29 - uVar13 != 0 || uVar38 >= uVar26 && uVar38 - uVar26 != 0) {
        param_3 = param_3 + uVar26 * 2;
        lVar40 = lVar40 + uVar13 * 0x10;
        if (uVar29 < uVar13) {
          lVar40 = 8;
        }
        puVar17 = (undefined8 *)0x0;
        if (uVar13 < uVar29) {
          puVar17 = (undefined8 *)(lVar40 + -0x10 + uVar34 * 0x10);
        }
        if (uVar38 < uVar26) {
          param_3 = (undefined8 *)0x8;
        }
        puVar27 = param_3 + uVar35 * 2 + -2;
        if (uVar38 <= uVar26) {
          puVar27 = puVar17;
        }
        *puVar5 = uVar25;
        fVar48 = *(float *)(puVar27 + 1);
        fVar50 = *(float *)(pbVar33 + 0x3c0);
        fVar47 = fVar48;
        if (fVar48 <= fVar50) {
          fVar47 = fVar50;
        }
        *puStack_d0 = plStack_c8._0_4_;
        *(uint *)(pbVar33 + 0x3c0) =
             ~-(uint)NAN(fVar50) & (uint)fVar47 | -(uint)NAN(fVar50) & (uint)fVar48;
      }
      puVar5 = (ulonglong *)*param_8;
      lVar12 = param_8[1];
      uVar29 = *puVar5;
      uVar25 = 0;
      uVar13 = uVar29 - *(ulonglong *)(lVar12 + 0x18);
      if (uVar29 < *(ulonglong *)(lVar12 + 0x18)) {
        uVar13 = uVar25;
      }
      uVar26 = uVar29 - *(ulonglong *)(lVar12 + 0x38);
      if (uVar29 < *(ulonglong *)(lVar12 + 0x38)) {
        uVar26 = uVar25;
      }
      uVar29 = *(ulonglong *)(lVar12 + 0x30);
      uVar38 = uVar29 - uVar26;
      if (uVar29 < uVar26) {
        uVar38 = uVar25;
      }
      uVar35 = *(ulonglong *)(lVar12 + 0x10);
      uVar34 = uVar35 - uVar13;
      if (uVar35 < uVar13) {
        uVar34 = uVar25;
      }
      uVar25 = *(ulonglong *)(lVar12 + 0x40);
      *puVar5 = uVar25 - (uVar34 + uVar38);
      if (uVar35 >= uVar13 && uVar35 - uVar13 != 0 || uVar29 >= uVar26 && uVar29 - uVar26 != 0) {
        *puVar5 = uVar25;
        *puStack_d0 = plStack_c8._0_4_;
        pbVar33[0x3c0] = 0;
        pbVar33[0x3c1] = 0;
        pbVar33[0x3c2] = 0;
        pbVar33[0x3c3] = 0;
      }
      uVar29 = *(ulonglong *)(pbVar33 + 0x28);
      if (*(ulonglong *)(pbVar33 + 0x10) <= uVar29) {
                    /* WARNING: Subroutine does not return */
        pbStack_2c0 = (byte *)0x141b2823f;
        pdb_142dc81f2(uVar29,*(ulonglong *)(pbVar33 + 0x10),&UNK_143043a80);
      }
      pbStack_2c0 = (byte *)0x141b28035;
      pdb_140a8e730(uVar29 * 0x30 + *(longlong *)(pbVar33 + 8),&UNK_143391fc9,8,
                    *(undefined4 *)(pbVar33 + 0x3c0));
      uVar29 = *(ulonglong *)(pbStack_d8 + 0x68);
      if (*(ulonglong *)(pbStack_d8 + 0x50) <= uVar29) {
                    /* WARNING: Subroutine does not return */
        pbStack_2c0 = (byte *)0x141b2824e;
        pdb_142dc81f2(uVar29,*(ulonglong *)(pbStack_d8 + 0x50),&UNK_143043a80);
      }
      pbStack_2c0 = (byte *)0x141b28074;
      pdb_140a8e730(uVar29 * 0x30 + *(longlong *)(pbStack_d8 + 0x48),&UNK_143391fc9,8,
                    *(undefined4 *)(pbStack_d8 + 0x3c0));
      if (cStack_d9 != '\0') {
        pbStack_2c0 = (byte *)0x141b28083;
        plVar15 = (longlong *)pdb_140e97000();
        if ((char)plVar15[0xd] != '\x01') {
          pbStack_2c0 = (byte *)0x141b281a8;
          plVar15 = (longlong *)pdb_142d8ec20(plVar15,0);
          if (plVar15 == (longlong *)0x0) goto LAB_141b281b1;
        }
        if (*plVar15 != 0) goto LAB_141b28155;
        *plVar15 = -1;
        pbStack_2c0 = (byte *)0x141b280b2;
        plStack_c8 = plVar15;
        pdb_140e95370(plVar15 + 1,uStack_1c0);
        *plStack_c8 = *plStack_c8 + 1;
      }
      return;
    }
    puVar17 = (undefined8 *)0x0;
    pbStack_140 = (byte *)((longlong)pbStack_140 + 0x58);
  }
  else {
    puVar17 = (undefined8 *)((longlong)pbStack_148 + 0x58);
    pbVar33 = pbStack_148;
  }
  *puStack_e8 = *puStack_e8 + 1;
  pbStack_148 = (byte *)puVar17;
  uStack_110 = *(undefined8 *)((longlong)pbVar33 + 0x18);
  auStack_120 = (undefined1  [8])*(undefined8 *)((longlong)pbVar33 + 8);
  uStack_118 = *(undefined8 *)((longlong)pbVar33 + 0x10);
  uStack_f4 = *(undefined8 *)((longlong)pbVar33 + 0x30);
  uStack_238._3_1_ = (undefined1)uStack_f4;
  uStack_234 = (undefined4)((ulonglong)uStack_f4 >> 8);
  uStack_230._0_3_ = (undefined3)((ulonglong)uStack_f4 >> 0x28);
  uStack_245 = (undefined5)*(undefined8 *)((longlong)pbVar33 + 0x20);
  uStack_240 = (undefined3)((ulonglong)*(undefined8 *)((longlong)pbVar33 + 0x20) >> 0x28);
  uStack_23d = (undefined5)*(undefined8 *)((longlong)pbVar33 + 0x28);
  uStack_238._0_3_ = (undefined3)((ulonglong)*(undefined8 *)((longlong)pbVar33 + 0x28) >> 0x28);
  uStack_f7 = (undefined3)uStack_238;
  uStack_107 = CONCAT53(uStack_245,uStack_248);
  uStack_ff = uStack_240;
  uStack_fc = uStack_23d;
  bStack_108 = 0;
  uStack_ec = 1;
  lVar12 = 0;
  while (lVar12 != 2) {
    lVar40 = lVar12 * 0x1c;
    if (*(uint *)(auStack_120 + lVar40) == 2) break;
    lVar12 = lVar12 + 1;
    if ((*(uint *)(auStack_120 + lVar40) & 1) != 0) {
      uStack_1d0 = *(undefined4 *)((longlong)&uStack_118 + lVar40 + 4);
      uStack_1d8 = *(undefined8 *)(auStack_120 + lVar40 + 4);
      pbVar16 = pbStack_158;
      if (((&bStack_108)[lVar40] & 1) == 0) {
        pbVar16 = pbStack_150;
      }
      *puStack_d0 = plStack_c8._0_4_;
      pbVar16[0x38] = 1;
      if (*(ulonglong *)(pbVar16 + 0x10) <= *(ulonglong *)(pbVar16 + 0x28)) goto LAB_141b28162;
      piVar42 = (int *)(*(ulonglong *)(pbVar16 + 0x28) * 0x30 + *(longlong *)(pbVar16 + 8));
      pbStack_2c0 = (byte *)0x141b27920;
      pdb_140a8e190(piVar42,&uStack_1d8);
      pbStack_2c0 = (byte *)0x141b27939;
      pdb_140a8e730(piVar42,&UNK_14301ef60,0xd,0);
      if (*piVar42 == 1) {
        pbStack_2c0 = (byte *)0x141b27954;
        pdb_141807fa0(&pbStack_280,piVar42 + 2);
        if (pbStack_280 != (byte *)0x8000000000000004) {
          uStack_218 = uStack_250;
          uStack_228 = uStack_260;
          uStack_220 = uStack_258;
          uStack_238 = uStack_270;
          uStack_234 = uStack_26c;
          uStack_230 = uStack_268;
          uStack_22c = uStack_264;
          uStack_248 = SUB83(pbStack_280,0);
          uStack_245 = (undefined5)((ulonglong)pbStack_280 >> 0x18);
          uStack_240 = SUB83(pbStack_278,0);
          uStack_23d = (undefined5)((ulonglong)pbStack_278 >> 0x18);
          uStack_298 = &UNK_143044350;
                    /* WARNING: Subroutine does not return */
          pbStack_2c0 = (byte *)0x141b2814f;
          pdb_142dc8170(&UNK_143044570,0x2b,&uStack_248,&UNK_143044530);
        }
      }
      uVar29 = *(ulonglong *)(pbVar16 + 0x28);
      if (*(ulonglong *)(pbVar16 + 0x10) <= uVar29) {
                    /* WARNING: Subroutine does not return */
        pbStack_2c0 = (byte *)0x141b28183;
        pdb_142dc81f2(uVar29,*(ulonglong *)(pbVar16 + 0x10),&UNK_143043a80);
      }
      lVar40 = *(longlong *)(pbVar16 + 8);
      pbStack_2c0 = (byte *)0x141b2798f;
      uVar46 = pdb_140de8220();
      pbStack_2c0 = (byte *)0x141b279af;
      pdb_140a8e730(lVar40 + uVar29 * 0x30,&UNK_143391fdc,10,uVar46);
    }
  }
  if (*(int *)((longlong)pbVar33 + 0x38) == 1) {
    uStack_1e0 = *(undefined4 *)((longlong)pbVar33 + 0x44);
    uStack_1e8 = *(undefined8 *)((longlong)pbVar33 + 0x3c);
    uVar46 = *(undefined4 *)((longlong)pbVar33 + 0x48);
    *puStack_d0 = plStack_c8._0_4_;
    uStack_298 = (undefined *)CONCAT44(uStack_298._4_4_,*(undefined4 *)((longlong)pbVar33 + 0x50));
    pbStack_2c0 = (byte *)0x141b27a10;
    pdb_14090caf0(pbStack_138,&uStack_1e8,0,uVar46);
    param_3 = *(undefined8 **)(pbStack_d8 + 0x168);
    if (*(undefined8 **)(pbStack_d8 + 0x150) <= param_3) goto LAB_141b281be;
    lVar12 = *(longlong *)(pbStack_d8 + 0x148);
    pbStack_2c0 = (byte *)0x141b27a45;
    fVar47 = (float)pdb_140de8220();
    fVar50 = 0.0;
    if (0.0 <= fVar47) {
      fVar50 = fVar47;
    }
    fVar47 = fVar48;
    if (fVar50 <= fVar48) {
      fVar47 = fVar50;
    }
    pbStack_2c0 = (byte *)0x141b27a75;
    pdb_140a8e730(lVar12 + (longlong)param_3 * 0x30,&UNK_143391fd1,0xb,fVar47);
  }
  goto LAB_141b277e0;
code_r0x000141b29a71:
  puVar27 = (undefined8 *)((longlong)*(undefined8 **)(pbVar36 + 0x30) - (longlong)puVar37);
  pbVar18 = (byte *)((longlong)puVar37 * 0x18 + *(longlong *)(pbVar36 + 0x28));
  if (*(undefined8 **)(pbVar36 + 0x30) < puVar37) {
    puVar27 = puVar17;
    pbVar18 = pbVar23;
  }
  *puVar5 = (*(longlong *)(pbVar36 + 0x40) - (longlong)puVar27) - (longlong)puVar39;
  pbVar2 = pbVar24 + (longlong)puVar39 * 0x18;
  pbVar33 = pbVar18 + (longlong)puVar27 * 0x18;
  pbVar23 = *(byte **)pbVar30;
  pbVar16 = &UNK_143392dcc;
  pppppppuVar31 = &pppppppuStack_290;
LAB_141b29aed:
  if ((pbVar24 == (byte *)0x0) || (pbVar24 == pbVar2)) {
    if ((pbVar18 == (byte *)0x0) || (pbVar18 == pbVar33)) {
      return;
    }
    pbVar20 = pbVar18 + 0x18;
    pbVar24 = (byte *)0x0;
    pbVar28 = pbVar18;
  }
  else {
    pbVar20 = pbVar18;
    pbVar28 = pbVar24;
    pbVar24 = pbVar24 + 0x18;
  }
  *puVar5 = *puVar5 + 1;
  pbVar30 = pbVar28 + 8;
  bVar44 = 0xfffffffebcc6d233 <
           (ulonglong)(longlong)*(int *)(&UNK_143392dcc + (ulonglong)pbVar28[0x14] * 4);
  pbVar36 = &UNK_143392dcc + *(int *)(&UNK_143392dcc + (ulonglong)pbVar28[0x14] * 4);
  pbVar18 = pbVar20;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(pbVar28[0x14]) {
  case 0:
    goto LAB_141b29aed;
  case 1:
    pbStack_288 = (byte *)CONCAT44(pbStack_288._4_4_,*(undefined4 *)(pbVar28 + 0x10));
    pppppppuStack_290 = *(undefined8 ********)pbVar30;
    uVar11 = 0x26;
    puVar41 = &UNK_143392550;
    break;
  case 2:
    pbStack_288 = (byte *)CONCAT44(pbStack_288._4_4_,*(undefined4 *)(pbVar28 + 0x10));
    pppppppuStack_290 = *(undefined8 ********)pbVar30;
    uVar11 = 0x23;
    puVar41 = &UNK_143392576;
    break;
  case 3:
    pbStack_288 = (byte *)CONCAT44(pbStack_288._4_4_,*(undefined4 *)(pbVar28 + 0x10));
    pppppppuStack_290 = *(undefined8 ********)pbVar30;
    uVar11 = 0x24;
    puVar41 = &UNK_143392599;
    break;
  case 4:
    goto code_r0x000141b2b292;
  default:
    auVar9._4_4_ = uVar46;
    auVar9._0_4_ = fVar48;
    auVar9._8_4_ = in_XMM1_Dc;
    auVar9._12_4_ = in_XMM1_Dd;
    auVar49 = auVar49 & auVar9;
    if ((ushort)((ushort)(SUB161(auVar49 >> 7,0) & 1) | (ushort)(SUB161(auVar49 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar49 >> 0x17,0) & 1) << 2 |
                 (ushort)(SUB161(auVar49 >> 0x1f,0) & 1) << 3 |
                 (ushort)(SUB161(auVar49 >> 0x27,0) & 1) << 4 |
                 (ushort)(SUB161(auVar49 >> 0x2f,0) & 1) << 5 |
                 (ushort)(SUB161(auVar49 >> 0x37,0) & 1) << 6 |
                 (ushort)(SUB161(auVar49 >> 0x3f,0) & 1) << 7 |
                 (ushort)(SUB161(auVar49 >> 0x47,0) & 1) << 8 |
                 (ushort)(SUB161(auVar49 >> 0x4f,0) & 1) << 9 |
                 (ushort)(SUB161(auVar49 >> 0x57,0) & 1) << 10 |
                 (ushort)(SUB161(auVar49 >> 0x5f,0) & 1) << 0xb |
                 (ushort)(SUB161(auVar49 >> 0x67,0) & 1) << 0xc |
                 (ushort)(SUB161(auVar49 >> 0x6f,0) & 1) << 0xd |
                 (ushort)(SUB161(auVar49 >> 0x77,0) & 1) << 0xe |
                (ushort)(byte)(auVar49[0xf] >> 7) << 0xf) == 0xffff) {
      pbVar20[1] = 1;
      *pbVar20 = 0;
      return;
    }
    goto LAB_141b2b366;
  case 6:
    goto code_r0x000141b2b2e6;
  case 8:
    cVar10 = (char)pbVar20 + -0x78;
    pcVar19 = (char *)CONCAT71((int7)((ulonglong)pbVar20 >> 8),cVar10);
    *pcVar19 = *pcVar19 + cVar10;
    pcVar19[1] = '\x04';
    *pcVar19 = '\0';
    return;
  case 0xc:
    *pbVar20 = *pbVar20 + (char)pbVar20;
    if (pbVar30 == (byte *)0x0 && pbVar24 == (byte *)0x0) {
      pbVar20[1] = 5;
      *pbVar20 = 0;
      return;
    }
    goto LAB_141b2b366;
  case 0xf:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x10:
  case 0x11:
  case 0x12:
  case 0x16:
    goto code_r0x000141b2ba9a;
  case 0x13:
    pbVar33 = (byte *)((ulonglong)&pbStack_278 & 0xffffffff);
    pbVar33[-8] = 0xfe;
    pbVar33[-7] = 0xff;
    pbVar33[-6] = 0xff;
    pbVar33[-5] = 0xff;
    pbVar33[-4] = 0xff;
    pbVar33[-3] = 0xff;
    pbVar33[-2] = 0xff;
    pbVar33[-1] = 0xff;
    if (*(longlong *)pbVar24 == -0x7fffffffffffffff) {
      bVar3 = pbVar24[8];
      goto code_r0x000141b2ba2c;
    }
    *(longlong *)(pbVar33 + -0x10) = *(longlong *)pbVar24;
    *(byte **)(pbVar33 + -0x18) = pbVar24;
    pbStack_2c0 = &UNK_141b2ba78;
    pdb_1409a45e0(pbVar24 + 0x18);
    pbVar30 = *(byte **)(pbVar33 + -0x10);
    if (SBORROW8(0,(longlong)pbVar30)) {
      return;
    }
    if (pbVar30 == (byte *)0x0) {
      return;
    }
    pbVar24 = *(byte **)(*(longlong *)(pbVar33 + -0x18) + 8);
    pbVar36 = (byte *)0x1;
    puVar32 = &uStack_270;
    pbVar33 = pbStack_278;
code_r0x000141b2ba9a:
    goto code_r0x0001406abac0;
  case 0x14:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x15:
    goto code_r0x000141b2ba9f;
  case 0x17:
  case 0x18:
    *(uint *)(pbVar33 + 0x79) = *(uint *)(pbVar33 + 0x79) & (uint)pbVar33;
    pbVar20 = pbVar20 + 0x6d;
    *pbVar20 = *pbVar20 + 1;
    do {
    } while (-1 < (char)*pbVar20);
    in((short)pbVar30);
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
  pbStack_2c0 = (byte *)0x141b29ae7;
  auVar49._0_8_ = pdb_140abb950(pbVar23,puVar41,uVar11,pppppppuVar31);
  auVar49._8_8_ = extraout_XMM0_Qb_32;
  goto LAB_141b29aed;
code_r0x000141b27441:
  *puStack_d0 = plStack_c8._0_4_;
  uStack_128 = *(undefined4 *)(pbVar20 + 0x18);
  uStack_130 = *(undefined8 *)(pbVar20 + 0x10);
  pbVar36 = (byte *)(ulonglong)pbVar20[0x20];
  uStack_298 = (undefined *)((ulonglong)uStack_298._4_4_ << 0x20);
  pbVar30 = (byte *)&uStack_130;
  pbStack_2c0 = (byte *)0x141b27489;
  auVar49._0_8_ = pdb_14090caf0(pbStack_160);
  auVar49._8_8_ = extraout_XMM0_Qb_23;
  goto LAB_141b26b86;
code_r0x000141b2b292:
  pbVar24 = (byte *)0x43392ddc;
code_r0x000141b2b298:
                    /* WARNING: Could not recover jumptable at 0x000141b2b29f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(pbVar24 + *(int *)(pbVar24 + (longlong)pbVar36 * 4)))();
  return;
code_r0x000141b2b2e6:
  out(*(undefined4 *)pbVar23,(short)pbVar30);
  if (bVar44) {
    pbVar33[0x32] = pbVar33[0x32] + (char)((ulonglong)pbVar30 >> 8);
code_r0x000141b2b334:
    pbVar20[1] = 2;
code_r0x000141b2b333:
    *pbVar20 = 0;
    return;
  }
  if ((int)pbVar30 == 0 && (int)pbVar24 == 0) {
    pbVar20[1] = 0;
    *pbVar20 = 0;
    return;
  }
LAB_141b2b366:
  pbVar20[1] = 6;
  *pbVar20 = 0;
  return;
code_r0x000141b2ba2c:
  pbVar36 = pbVar24;
  switch(bVar3) {
  case 0:
  case 1:
  case 2:
  case 6:
    break;
  case 3:
    pbVar30 = *(byte **)(pbVar24 + 0x10);
    if (pbVar30 != (byte *)0x0) {
      pbVar24 = *(byte **)(pbVar24 + 0x18);
      pbVar36 = (byte *)0x1;
      puVar32 = &uStack_270;
      pbVar33 = pbStack_278;
code_r0x0001406abac0:
      *(byte **)((longlong)puVar32 + -8) = pbVar33;
      *(byte **)((longlong)puVar32 + -0x10) = pbVar23;
      pbVar33 = pbVar24;
      if ((byte *)0x10 < pbVar36) {
        pbVar33 = *(byte **)(pbVar24 + -8);
      }
      *(undefined **)((longlong)puVar32 + -0x40) = &UNK_140f3c37e;
      uVar11 = GetProcessHeap(pbVar24,pbVar30);
                    /* WARNING: Could not recover jumptable at 0x000140f3c38c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      HeapFree(uVar11,0,pbVar33);
      return;
    }
    break;
  case 4:
code_r0x000141b2ba9f:
    uVar11 = *(undefined8 *)(pbVar36 + 0x18);
    uVar7 = *(undefined8 *)(pbVar36 + 0x20);
    *(undefined8 *)(pbVar33 + -0x10) = uVar11;
    *(byte **)(pbVar33 + -0x18) = pbVar36;
    pbStack_2c0 = &UNK_141b2bab4;
    pdb_14098ae50(uVar11,uVar7);
    if (*(longlong *)(*(longlong *)(pbVar33 + -0x18) + 0x10) != 0) {
      pbVar30 = (byte *)(*(longlong *)(*(longlong *)(pbVar33 + -0x18) + 0x10) << 5);
      pbVar36 = (byte *)0x8;
      pbVar24 = *(byte **)(pbVar33 + -0x10);
      puVar32 = &uStack_270;
      pbVar33 = pbStack_278;
      goto code_r0x0001406abac0;
    }
    break;
  default:
    uStack_298 = (undefined *)0xfffffffffffffffe;
    lVar12 = *(longlong *)(pbVar24 + 0x10);
    if (lVar12 == 0) {
      pbStack_2c8 = (byte *)0x0;
    }
    else {
      auStack_308[3] = *(ulonglong *)(pbVar24 + 0x18);
      pbStack_2c8 = *(byte **)(pbVar24 + 0x20);
      auStack_308[1] = 0;
      uStack_2e0 = 0;
      auStack_308[2] = lVar12;
      lStack_2d8 = lVar12;
      pbStack_2d0 = (byte *)auStack_308[3];
    }
    auStack_308[0] = (ulonglong)(lVar12 != 0);
    uStack_2e8 = auStack_308[0];
    pppppppuStack_290 = pppppppuVar31;
    pbStack_288 = pbVar16;
    pbStack_280 = pbVar23;
    pdb_14192c4b0(&pbStack_2c0,auStack_308);
    if (pbStack_2c0 != (byte *)0x0) {
      do {
        pbStack_2a8 = pbStack_2c0 + lStack_2b0 * 0x20;
        puStack_2a0 = auStack_308;
        if (*(ulonglong *)(pbStack_2c0 + lStack_2b0 * 0x18 + 0x168) != 0) {
          pub_1406abac0(*(byte **)(pbStack_2c0 + lStack_2b0 * 0x18 + 0x170),
                        *(ulonglong *)(pbStack_2c0 + lStack_2b0 * 0x18 + 0x168),1);
        }
        pdb_140966d70(&pbStack_2a8);
        pdb_14192c4b0(&pbStack_2c0,auStack_308);
      } while (pbStack_2c0 != (byte *)0x0);
    }
    return;
  }
  return;
}

