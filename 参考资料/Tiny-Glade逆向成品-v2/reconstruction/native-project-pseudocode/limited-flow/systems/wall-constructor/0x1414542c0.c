// VA 0x1414542c0, PDB extent 9583 bytes
// system_wall_constructor::construct_wooden_walls::stone_foundation_window_frames::emit_stone_foundation_decorator_frames<system_wall_constructor::construct_walls::construct_walls::closure_env$3>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/wall-constructor/src/construct_wooden_walls/stone_foundation_window_frames.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Removing unreachable block (ram,0x0001414552d1) */
/* WARNING: Removing unreachable block (ram,0x00014145480e) */
/* WARNING: Removing unreachable block (ram,0x000141454811) */
/* WARNING: Removing unreachable block (ram,0x000141454816) */
/* WARNING: Removing unreachable block (ram,0x0001414545f7) */
/* WARNING: Removing unreachable block (ram,0x000141454637) */
/* WARNING: Removing unreachable block (ram,0x0001414559a5) */
/* WARNING: Removing unreachable block (ram,0x00014145464f) */
/* WARNING: Removing unreachable block (ram,0x0001414559b4) */
/* WARNING: Removing unreachable block (ram,0x000141454658) */
/* WARNING: Removing unreachable block (ram,0x000141454690) */
/* WARNING: Removing unreachable block (ram,0x000141454694) */
/* WARNING: Removing unreachable block (ram,0x000141455a05) */
/* WARNING: Removing unreachable block (ram,0x0001414546cc) */
/* WARNING: Removing unreachable block (ram,0x000141455a14) */
/* WARNING: Removing unreachable block (ram,0x0001414546d9) */
/* WARNING: Removing unreachable block (ram,0x000141454718) */
/* WARNING: Removing unreachable block (ram,0x00014145471c) */
/* WARNING: Removing unreachable block (ram,0x000141454732) */
/* WARNING: Removing unreachable block (ram,0x000141454ede) */
/* WARNING: Removing unreachable block (ram,0x000141454fb3) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   system_wall_constructor::construct_wooden_walls::stone_foundation_window_frames::emit_stone_foundation_decorator_frames<system_wall_constructor::construct_walls::construct_walls::closure_env$3>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/wall-constructor/src/construct_wooden_walls/stone_foundation_window_frames.rs
   Extent: 9583 */

void pdb_1414542c0(undefined8 param_1,undefined4 param_2,longlong param_3,float param_4,
                  longlong param_5,undefined8 param_6,undefined8 param_7)

{
  longlong lVar1;
  byte *pbVar2;
  undefined8 uVar3;
  undefined1 auVar4 [16];
  int iVar5;
  float *pfVar6;
  char cVar7;
  undefined1 uVar8;
  uint uVar9;
  byte *pbVar10;
  uint uVar11;
  uint uVar12;
  byte bVar13;
  undefined1 (*pauVar14) [16];
  longlong lVar15;
  undefined1 (*pauVar16) [16];
  float fVar17;
  float fVar18;
  undefined4 uVar19;
  undefined4 extraout_XMM0_Da;
  float fVar20;
  float fVar21;
  float fVar22;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  undefined4 extraout_XMM0_Da_02;
  undefined4 extraout_XMM0_Da_03;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  longlong lStack_2a0;
  byte *pbStack_298;
  longlong lStack_280;
  float afStack_278 [14];
  float fStack_240;
  float fStack_23c;
  float fStack_234;
  float *pfStack_230;
  undefined8 uStack_228;
  float fStack_220;
  float fStack_21c;
  undefined1 uStack_218;
  undefined7 uStack_217;
  byte *pbStack_210;
  ulonglong uStack_208;
  float fStack_200;
  float fStack_1fc;
  float fStack_1f8;
  float fStack_1f4;
  float fStack_1f0;
  float fStack_1ec;
  float *pfStack_1e8;
  float *pfStack_1e0;
  undefined8 uStack_1d8;
  longlong lStack_1d0;
  float *pfStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  float *pfStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  float fStack_170;
  float fStack_16c;
  undefined8 uStack_168;
  float fStack_160;
  float fStack_15c;
  longlong lStack_158;
  float *pfStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  float *pfStack_138;
  undefined1 *puStack_130;
  float *pfStack_128;
  int iStack_120;
  int iStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  longlong lStack_110;
  float *pfStack_108;
  byte *pbStack_100;
  undefined1 uStack_f1;
  undefined8 uStack_f0;
  
  uStack_f0 = 0xfffffffffffffffe;
  uStack_1b0 = param_1;
  uStack_118 = param_2;
  pdb_141483d90(afStack_278,param_3);
  pdb_141483630(&lStack_2a0,param_3,afStack_278);
  uStack_114 = *(undefined4 *)(param_3 + 0x284);
  pauVar16 = *(undefined1 (**) [16])(param_5 + 0x30);
  lStack_280 = *(longlong *)(param_5 + 0x48);
  auVar4 = *pauVar16;
  pauVar14 = pauVar16 + 1;
  uVar12 = ~(uint)(ushort)((ushort)(SUB161(auVar4 >> 7,0) & 1) |
                           (ushort)(SUB161(auVar4 >> 0xf,0) & 1) << 1 |
                           (ushort)(SUB161(auVar4 >> 0x17,0) & 1) << 2 |
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
                           (ushort)(SUB161(auVar4 >> 0x77,0) & 1) << 0xe |
                          (ushort)(byte)(auVar4[0xf] >> 7) << 0xf);
  fStack_200 = _DAT_142e3c650 + param_4;
  fStack_1fc = param_4;
  lStack_110 = param_3;
LAB_1414543c0:
  do {
    while( true ) {
      while( true ) {
        do {
          while( true ) {
            do {
              if (lStack_280 == 0) {
                if (lStack_2a0 != 0) {
                  pub_1406abac0(pbStack_298,lStack_2a0 * 0x14,4);
                }
                return;
              }
              if ((short)uVar12 == 0) {
                do {
                  auVar4 = *pauVar14;
                  pauVar16 = pauVar16 + -0x68;
                  pauVar14 = pauVar14 + 1;
                  uVar12 = (ushort)((ushort)(SUB161(auVar4 >> 7,0) & 1) |
                                    (ushort)(SUB161(auVar4 >> 0xf,0) & 1) << 1 |
                                    (ushort)(SUB161(auVar4 >> 0x17,0) & 1) << 2 |
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
                                    (ushort)(SUB161(auVar4 >> 0x77,0) & 1) << 0xe |
                                   (ushort)(byte)(auVar4[0xf] >> 7) << 0xf) ^ 0xffff;
                } while (uVar12 == 0);
              }
              uVar9 = 0;
              for (uVar11 = uVar12; (uVar11 & 1) == 0; uVar11 = uVar11 >> 1 | 0x80000000) {
                uVar9 = uVar9 + 1;
              }
              lVar15 = (ulonglong)uVar9 * -0x68;
              uVar9 = pdb_140c45920(param_6,*(undefined4 *)((longlong)pauVar16 + lVar15 + -0x68));
              uVar12 = uVar12 - 1 & uVar12;
              lStack_280 = lStack_280 + -1;
              bVar13 = (byte)uVar9;
            } while (((9 < bVar13) ||
                     (pbStack_100 = (byte *)(ulonglong)(uVar9 & 0xff),
                     (0x2dbU >> (uVar9 & 0x1f) & 1) == 0)) ||
                    (pfStack_108 = (float *)pdb_1409012b0((longlong)pauVar16 + lVar15 + -0x60),
                    fVar18 = _DAT_142e37ad4, pfStack_108 == (float *)0x0));
            fVar27 = pfStack_108[1];
            fVar17 = (float)pub_142e32a40(*pfStack_108 / _DAT_142e37ad4);
            fVar24 = _DAT_142e382cc;
            iStack_120 = (int)fVar17;
            if (_DAT_142e382cc < fVar17) {
              iStack_120 = 0x7fffffff;
            }
            if (NAN(fVar17)) {
              iStack_120 = 0;
            }
            fVar18 = (float)pub_142e32a40(fVar27 / fVar18);
            iStack_11c = (int)fVar18;
            if (fVar24 < fVar18) {
              iStack_11c = 0x7fffffff;
            }
            if (NAN(fVar18)) {
              iStack_11c = 0;
            }
            cVar7 = *(char *)((longlong)pauVar16 + lVar15 + -7);
            if (bVar13 == 3) break;
            if ((cVar7 != '\0') && (bVar13 < 10)) {
                    /* WARNING: Could not recover jumptable at 0x00014145455d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (*(code *)(&UNK_14330a488 + *(int *)(&UNK_14330a488 + (longlong)pbStack_100 * 4)))();
              return;
            }
          }
          pdb_1424bceb0(&uStack_1a8,param_6,3);
          fVar18 = pfStack_198._0_4_;
          uVar19 = pdb_140a87350(cVar7);
          pdb_140deead0(&fStack_1f8,*pfStack_108 + 0.0,pfStack_108[1] + 0.0,uVar19,
                        fVar18 + _DAT_142f60fec);
          fVar18 = fStack_1f4;
          cVar7 = pdb_140a87330();
        } while (cVar7 == '\0');
        uVar11 = (uint)pbStack_100;
        if ((0xcbU >> (uVar11 & 0x1f) & 1) != 0) break;
        if (uVar11 == 4) {
          uVar19 = pdb_1409303b0(lStack_110);
          pbStack_100 = (byte *)CONCAT44(pbStack_100._4_4_,uVar19);
          iVar5 = *(int *)(lStack_110 + 600);
          pfStack_150 = (float *)CONCAT44(pfStack_150._4_4_,iVar5);
          uStack_1a8 = (byte *)0x0;
          uStack_1a0 = (float *)0x4;
          pfStack_198 = (float *)CONCAT44(fVar18 + _UNK_14330a354,fStack_1f8 + _UNK_14330a358);
          uStack_190 = (undefined8 *)CONCAT44(fVar18 + _UNK_14330a354,fStack_1f0 + _DAT_14330a350);
          uStack_188 = (float *)CONCAT44(fStack_1ec + _UNK_14330a35c,fStack_1f8 + _UNK_14330a358);
          uStack_180 = CONCAT44(fStack_1ec + _UNK_14330a35c,fStack_1f0 + _DAT_14330a350);
          uStack_178 = CONCAT44(fVar18,fStack_1f8 + _DAT_14330a344);
          fStack_170 = fStack_1f8 + _DAT_14330a344;
          fStack_16c = fStack_1ec;
          uStack_168 = CONCAT44(fVar18,fStack_1f0 + _DAT_14330a360);
          fStack_160 = fStack_1f0 + _DAT_14330a360;
          fStack_15c = fStack_1ec;
          pbVar10 = (byte *)0x0;
          lVar15 = 0;
          while (pbVar10 != (byte *)0x4) {
            pbVar2 = pbVar10 + 1;
            pfStack_1e8 = (&pfStack_198)[(longlong)pbVar10 * 2];
            pfStack_1e0 = (float *)(&uStack_190)[(longlong)pbVar10 * 2];
            lVar1 = lVar15 + 1;
            uStack_148 = &pfStack_1e8;
            uStack_140 = (float *)&uStack_1d8;
            pfStack_138 = afStack_278;
            puStack_130 = &uStack_218;
            uStack_218 = iVar5 != 2;
            uStack_1a8 = pbVar2;
            lStack_158 = lVar1;
            pdb_1413e99a0(&lStack_1d0,&uStack_148);
            pfStack_108 = pfStack_1c8;
            pdb_1424bd2a0(&uStack_148,pfStack_1c8,uStack_1c0);
            if ((float *)0x1 < pfStack_138) {
              pfStack_128 = uStack_140;
              pdb_1414539d0(uStack_1b0,uStack_118,afStack_278,&lStack_2a0,(int)pbStack_100,
                            extraout_XMM0_Da_01,uStack_140,pfStack_138,0x3e54fdf3,uStack_114,
                            iStack_120,iStack_11c,lVar15,(int)pfStack_150 != 2,param_7);
            }
            if (uStack_148 != (float **)0x0) {
              pub_1406abac0((byte *)uStack_140,(longlong)uStack_148 << 3,4);
            }
            pbVar10 = pbVar2;
            lVar15 = lVar1;
            if (lStack_1d0 != 0) {
              pub_1406abac0((byte *)pfStack_108,lStack_1d0 << 3,4);
            }
          }
        }
        else {
          if (uVar11 != 9) {
                    /* WARNING: Subroutine does not return */
            pdb_142dc83b0(&UNK_14330a430,0x28,&UNK_14330a470);
          }
          uVar19 = pdb_1409303b0(lStack_110);
          iVar5 = *(int *)(lStack_110 + 600);
          uStack_f1 = iVar5 != 2;
          uVar3 = *(undefined8 *)pfStack_108;
          uStack_1b8 = uVar3;
          pdb_1414dcbb0(&uStack_218,*(undefined1 *)((longlong)pauVar16 + lVar15 + -7));
          fVar18 = fStack_240;
          pbStack_100 = pbStack_210;
          if ((uStack_208 != 0) && (pbVar10 = pbStack_210 + uStack_208 * 8, pbVar10 != (byte *)0x8))
          {
            fVar27 = *(float *)(pbVar10 + -8);
            fVar24 = _DAT_14330a340 - fVar27;
            fVar25 = *(float *)(pbVar10 + -4) + _DAT_14330a344;
            fVar17 = (float)uVar3;
            if (iVar5 == 2) {
              fVar26 = (float)pdb_141483e90(afStack_278);
              fStack_220 = (float)pdb_141483e90(afStack_278,fVar17 + fVar27 + _DAT_14330a348);
            }
            else {
              if (fStack_240 <= _DAT_142e37848) {
                fVar26 = (float)pdb_141483e90(afStack_278);
              }
              else {
                uStack_1a8 = (byte *)CONCAT44(fStack_240,1);
                fVar20 = (float)pdb_140dea6c0(&uStack_1a8);
                fVar26 = (float)pdb_141483e90(afStack_278,fVar20);
                fVar26 = fVar26 + (((fVar24 + fVar17) - fVar20) / fVar18) * fStack_23c;
              }
              fVar18 = fStack_240;
              fVar17 = fVar17 + fVar27 + _DAT_14330a348;
              if (fStack_240 <= _DAT_142e37848) {
                fStack_220 = (float)pdb_141483e90(afStack_278,fVar17);
              }
              else {
                uStack_1a8 = (byte *)CONCAT44(fStack_240,1);
                fVar27 = (float)pdb_140dea6c0(&uStack_1a8,fVar17);
                fStack_220 = (float)pdb_141483e90(afStack_278,fVar27);
                fStack_220 = fStack_220 + ((fVar17 - fVar27) / fVar18) * fStack_23c;
              }
            }
            fStack_21c = (float)((ulonglong)uVar3 >> 0x20) + fVar25;
            uStack_228 = CONCAT44(fStack_21c,fVar26);
            pdb_1424bd2a0(&uStack_1a8,&uStack_228,2);
            if ((float *)0x1 < pfStack_198) {
              pfStack_108 = uStack_1a0;
              pdb_1414539d0(uStack_1b0,uStack_118,afStack_278,&lStack_2a0,uVar19,extraout_XMM0_Da_00
                            ,uStack_1a0,pfStack_198,0x3e54fdf3,uStack_114,iStack_120,iStack_11c,0,
                            iVar5 != 2,param_7);
            }
            if (uStack_1a8 != (byte *)0x0) {
              pub_1406abac0((byte *)uStack_1a0,(longlong)uStack_1a8 << 3,4);
            }
            uStack_1a8 = pbStack_100;
            pfStack_198 = afStack_278;
            uStack_190 = &uStack_1b8;
            uStack_188 = (float *)&uStack_f1;
            uStack_1a0 = (float *)pbVar10;
            pdb_1413eb4f0(&pfStack_1e8,&uStack_1a8);
            uStack_1a8 = pbStack_100;
            pfStack_198 = afStack_278;
            uStack_190 = &uStack_1b8;
            uStack_188 = (float *)&uStack_f1;
            uStack_1a0 = (float *)pbVar10;
            pdb_1413ecec0(&lStack_1d0,&uStack_1a8);
            uStack_1a0 = (float *)0x2;
            pfStack_150 = pfStack_1c8;
            pfStack_198 = pfStack_1c8;
            uStack_190 = (undefined8 *)uStack_1c0;
            pfStack_128 = pfStack_1e0;
            uStack_188 = pfStack_1e0;
            uStack_180 = uStack_1d8;
            uStack_178 = 0;
            lVar15 = 0;
            pbVar10 = (byte *)0x0;
            while (uVar8 = uStack_f1, pbVar10 != (byte *)0x2) {
              pbVar2 = pbVar10 + 1;
              lVar15 = lVar15 + 1;
              uStack_1a8 = pbVar2;
              uStack_178 = lVar15;
              pdb_1424bd2a0(&uStack_148,(&pfStack_198)[(longlong)pbVar10 * 2],
                            (&uStack_190)[(longlong)pbVar10 * 2]);
              if ((float *)0x1 < pfStack_138) {
                pfStack_108 = uStack_140;
                pdb_1414539d0(uStack_1b0,uStack_118,afStack_278,&lStack_2a0,uVar19,
                              extraout_XMM0_Da_00,uStack_140,pfStack_138,0x3e54fdf3,uStack_114,
                              iStack_120,iStack_11c,lVar15,uVar8,param_7);
              }
              pbVar10 = pbVar2;
              if (uStack_148 != (float **)0x0) {
                pub_1406abac0((byte *)uStack_140,(longlong)uStack_148 << 3,4);
              }
            }
            if (lStack_1d0 != 0) {
              pub_1406abac0((byte *)pfStack_150,lStack_1d0 << 3,4);
            }
            if (pfStack_1e8 != (float *)0x0) {
              pub_1406abac0((byte *)pfStack_128,(longlong)pfStack_1e8 << 3,4);
            }
          }
          if (CONCAT71(uStack_217,uStack_218) != 0) {
            pub_1406abac0(pbStack_100,CONCAT71(uStack_217,uStack_218) << 3,4);
          }
        }
      }
      uVar8 = pdb_140a87390(uVar9,lStack_110);
      fVar24 = fStack_1f0;
      pfStack_150 = (float *)CONCAT71(pfStack_150._1_7_,uVar8);
      fVar27 = fStack_1f8;
      fVar17 = fStack_1f8 + _DAT_14330a340 + _DAT_14330a364;
      fVar26 = fVar18 + _DAT_14330a340 + _DAT_14330a368;
      fVar25 = fStack_1f0 + _DAT_14330a348 + _DAT_14330a36c;
      fVar18 = fVar18 + _DAT_14330a368;
      if ((int)pbStack_100 != 2) {
        fVar26 = fVar26 + _DAT_14330a370;
        fVar18 = fVar18 + _DAT_14330a370;
      }
      uVar19 = pdb_1409303b0(lStack_110);
      pfStack_128 = (float *)CONCAT44(pfStack_128._4_4_,extraout_XMM0_Da);
      uStack_148 = (float **)CONCAT44(fVar26,fVar17);
      uStack_140 = (float *)CONCAT44(fVar18,fVar25);
      fVar26 = _DAT_14330a374;
      if ((char)pfStack_150 == '\0') {
        fVar26 = 0.0;
      }
      iVar5 = *(int *)(lStack_110 + 600);
      fVar20 = (float)pdb_140deec10(&uStack_148);
      fVar21 = (float)pdb_140deec50(&uStack_148);
      if (((_DAT_142e37848 < fVar26 + fVar26 + fVar20) && (_DAT_142e37848 < fVar21)) &&
         (_DAT_142e37848 < fStack_23c)) {
        fVar20 = _DAT_142e37848;
        pdb_140deec20(&uStack_148);
        pfStack_230 = (float *)CONCAT44(pfStack_230._4_4_,fVar20);
        fVar17 = fVar17 - fVar26;
        if (iVar5 == 2) {
          fVar20 = (float)pdb_141483e90(afStack_278);
        }
        else if (fStack_240 <= _DAT_142e37848) {
          fVar20 = (float)pdb_141483e90(afStack_278);
        }
        else {
          fStack_234 = fStack_240;
          uStack_1a8 = (byte *)CONCAT44(fStack_240,1);
          fVar22 = (float)pdb_140dea6c0(&uStack_1a8,fVar17);
          fVar23 = fVar22;
          fVar20 = (float)pdb_141483e90(afStack_278);
          fVar20 = fVar20 + ((fVar17 - fVar22) / fStack_234) * fStack_23c;
          fVar17 = fVar23;
        }
        pdb_140deec20(&uStack_148);
        fVar23 = fStack_240;
        fVar26 = fVar26 + fVar25;
        if (iVar5 == 2) {
          fVar25 = (float)pdb_141483e90(afStack_278,fVar26);
        }
        else if (fStack_240 <= _DAT_142e37848) {
          fVar25 = (float)pdb_141483e90(afStack_278,fVar26);
        }
        else {
          uStack_1a8 = (byte *)CONCAT44(fStack_240,1);
          fVar22 = (float)pdb_140dea6c0(&uStack_1a8,fVar26);
          fVar25 = (float)pdb_141483e90(afStack_278,fVar22);
          fVar25 = fVar25 + ((fVar26 - fVar22) / fVar23) * fStack_23c;
        }
        uStack_1a8 = (byte *)CONCAT44(pfStack_230._0_4_,fVar20);
        uStack_1a0 = (float *)CONCAT44(fVar17,fVar25);
        pdb_1414539d0(uStack_1b0,uStack_118,afStack_278,&lStack_2a0,uVar19,pfStack_128._0_4_,
                      &uStack_1a8,2,fVar21,uStack_114,iStack_120,iStack_11c,0,iVar5 != 2,param_7);
      }
      if ((0xbU >> ((uint)pbStack_100 & 0x1f) & 1) != 0) break;
      if ((0xc0U >> ((uint)pbStack_100 & 0x1f) & 1) == 0) {
                    /* WARNING: Subroutine does not return */
        pdb_142dc83b0(&UNK_14330a430,0x28,&UNK_14330a458);
      }
      uVar19 = pdb_1409303b0(lStack_110);
      uStack_228 = *(undefined8 *)pfStack_108;
      uStack_1b8 = CONCAT71(uStack_1b8._1_7_,*(int *)(lStack_110 + 600) != 2);
      pdb_1414dcd40(&uStack_218,*(undefined1 *)((longlong)pauVar16 + lVar15 + -7));
      if (1 < uStack_208) {
        pbVar10 = pbStack_210 + uStack_208 * 8;
        pbStack_100 = pbStack_210;
        uStack_1a8 = pbStack_210;
        uStack_190 = &uStack_228;
        uStack_188 = (float *)&uStack_1b8;
        uStack_1a0 = (float *)pbVar10;
        pfStack_198 = afStack_278;
        pdb_1413ecb20(&pfStack_1e8,&uStack_1a8);
        uStack_1a8 = pbStack_100;
        uStack_190 = &uStack_228;
        uStack_188 = (float *)&uStack_1b8;
        uStack_1a0 = (float *)pbVar10;
        pfStack_198 = afStack_278;
        pdb_1413ef290(&lStack_1d0,&uStack_1a8);
        uStack_1a0 = (float *)0x2;
        pfStack_128 = pfStack_1c8;
        pfStack_198 = pfStack_1c8;
        uStack_190 = (undefined8 *)uStack_1c0;
        pfStack_230 = pfStack_1e0;
        uStack_188 = pfStack_1e0;
        uStack_180 = uStack_1d8;
        uStack_178 = 0;
        lVar15 = 0;
        pbVar10 = (byte *)0x0;
        do {
          while( true ) {
            pbVar2 = pbVar10 + 1;
            lVar15 = lVar15 + 1;
            uVar8 = (undefined1)uStack_1b8;
            uStack_1a8 = pbVar2;
            uStack_178 = lVar15;
            if ((char)pfStack_150 != '\0') break;
            pdb_1424bd2a0(&uStack_148);
            if ((float *)0x1 < pfStack_138) {
              pfStack_108 = uStack_140;
              pdb_1414539d0(uStack_1b0,uStack_118,afStack_278,&lStack_2a0,uVar19,extraout_XMM0_Da_03
                            ,uStack_140,pfStack_138,0x3e54fdf3,uStack_114,iStack_120,iStack_11c,
                            lVar15,uVar8,param_7);
            }
            if (uStack_148 != (float **)0x0) {
              pub_1406abac0((byte *)uStack_140,(longlong)uStack_148 << 3,4);
            }
            pbVar10 = pbVar2;
            if (pbVar2 == (byte *)0x2) goto LAB_141455466;
          }
          pdb_1414539d0(uStack_1b0,uStack_118,afStack_278,&lStack_2a0,uVar19,extraout_XMM0_Da_03,
                        (&pfStack_198)[(longlong)pbVar10 * 2],(&uStack_190)[(longlong)pbVar10 * 2],
                        0x3e54fdf3,uStack_114,iStack_120,iStack_11c,lVar15,(undefined1)uStack_1b8,
                        param_7);
          pbVar10 = pbVar2;
        } while (pbVar2 != (byte *)0x2);
LAB_141455466:
        if (lStack_1d0 != 0) {
          pub_1406abac0((byte *)pfStack_128,lStack_1d0 << 3,4);
        }
        if (pfStack_1e8 != (float *)0x0) {
          pub_1406abac0((byte *)pfStack_230,(longlong)pfStack_1e8 << 3,4);
        }
      }
      if (CONCAT71(uStack_217,uStack_218) != 0) {
        pub_1406abac0(pbStack_210,CONCAT71(uStack_217,uStack_218) << 3,4);
      }
    }
    uVar19 = pdb_1409303b0(lStack_110);
    pbStack_100 = (byte *)CONCAT44(pbStack_100._4_4_,uVar19);
    iVar5 = *(int *)(lStack_110 + 600);
    pfStack_150 = (float *)CONCAT44(pfStack_150._4_4_,iVar5);
    pfStack_198 = (float *)0x1;
    fStack_170 = fVar27 + _DAT_14330a380;
    fVar27 = fStack_1ec + _DAT_14330a360 + _UNK_14330a384;
    uStack_190 = (undefined8 *)CONCAT44(fVar27,fStack_170);
    uStack_180 = 2;
    uStack_178 = CONCAT44(fVar18,fStack_170);
    uStack_168 = 3;
    fStack_15c = fVar18;
    fStack_160 = fVar24 + _DAT_14330a390;
    uStack_188 = (float *)CONCAT44(fVar27,fStack_160);
    fStack_16c = fStack_1ec + _UNK_14330a394;
    lStack_158 = CONCAT44(fStack_1ec + _UNK_14330a394,fStack_160);
    lVar15 = 0;
    do {
      while( true ) {
        pfVar6 = (&pfStack_198)[lVar15 * 3];
        pfStack_1e8 = (float *)(&uStack_190)[lVar15 * 3];
        pfStack_1e0 = (float *)(&uStack_188)[lVar15 * 3];
        uStack_148 = &pfStack_1e8;
        uStack_140 = (float *)&uStack_1d8;
        pfStack_138 = afStack_278;
        puStack_130 = &uStack_218;
        uStack_218 = iVar5 != 2;
        pdb_1413e99a0(&lStack_1d0,&uStack_148);
        pfStack_108 = pfStack_1c8;
        pdb_1424bd2a0(&uStack_148,pfStack_1c8,uStack_1c0);
        if ((float *)0x1 < pfStack_138) {
          pfStack_128 = uStack_140;
          pdb_1414539d0(uStack_1b0,uStack_118,afStack_278,&lStack_2a0,(int)pbStack_100,
                        extraout_XMM0_Da_02,uStack_140,pfStack_138,0x3e54fdf3,uStack_114,iStack_120,
                        iStack_11c,pfVar6,(int)pfStack_150 != 2,param_7);
        }
        if (uStack_148 != (float **)0x0) {
          pub_1406abac0((byte *)uStack_140,(longlong)uStack_148 << 3,4);
        }
        if (lStack_1d0 == 0) break;
        pub_1406abac0((byte *)pfStack_108,lStack_1d0 << 3,4);
        lVar15 = lVar15 + 1;
        if (lVar15 == 3) goto LAB_1414543c0;
      }
      lVar15 = lVar15 + 1;
    } while (lVar15 != 3);
  } while( true );
}

