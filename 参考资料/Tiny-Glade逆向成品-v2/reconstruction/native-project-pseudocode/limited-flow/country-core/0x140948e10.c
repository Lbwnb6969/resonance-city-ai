// VA 0x140948e10, PDB extent 10972 bytes
// country_core::systems::audio::signifier_audio::signifier_audio_system
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/audio/signifier_audio.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001409497c8) overlaps instruction at (ram,0x0001409497c7)
    */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::systems::audio::signifier_audio::signifier_audio_system
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/audio/signifier_audio.rs
   Extent: 10972 */

longlong *
pdb_140948e10(longlong *param_1,longlong *param_2,undefined8 *param_3,longlong *param_4,
             undefined8 *param_5,undefined8 *param_6,undefined8 *param_7,undefined8 *param_8,
             undefined8 *param_9,undefined8 *param_10)

{
  uint *puVar1;
  uint uVar2;
  byte bVar4;
  byte bVar5;
  ulonglong *puVar6;
  undefined8 uVar7;
  code *pcVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  char cVar15;
  longlong lVar16;
  ulonglong uVar17;
  undefined *puVar18;
  longlong *plVar19;
  int *piVar20;
  int *piVar21;
  byte *pbVar22;
  ulonglong uVar23;
  uint uVar24;
  int iVar25;
  int *piVar26;
  longlong lVar27;
  ulonglong uVar28;
  ulonglong uVar29;
  int *piVar30;
  byte *pbVar31;
  byte *pbVar32;
  int *piVar33;
  longlong lVar34;
  ulonglong uVar35;
  byte *pbVar36;
  ulonglong uVar37;
  ulonglong uVar38;
  undefined *puVar39;
  undefined *puVar40;
  longlong lVar41;
  byte *pbVar42;
  longlong lVar43;
  int *piVar44;
  longlong lVar45;
  byte *pbVar46;
  byte *pbVar47;
  bool bVar48;
  bool bVar49;
  bool bVar50;
  bool bVar51;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  int iStack_198;
  longlong lStack_190;
  undefined8 uStack_188;
  longlong *plStack_180;
  longlong lStack_170;
  longlong *plStack_168;
  longlong *plStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  ulonglong uStack_148;
  byte *pbStack_140;
  undefined8 uStack_138;
  undefined1 uStack_130;
  undefined4 uStack_12f;
  undefined2 uStack_12b;
  undefined1 uStack_129;
  undefined8 uStack_128;
  undefined8 uStack_120;
  ulonglong uStack_118;
  byte *pbStack_110;
  undefined8 uStack_108;
  undefined1 uStack_100;
  undefined4 uStack_ff;
  undefined2 uStack_fb;
  undefined1 uStack_f9;
  longlong *plStack_f8;
  undefined8 uStack_f0;
  uint uVar3;
  
  uStack_f0 = 0xfffffffffffffffe;
  plStack_160 = param_2;
  cVar15 = pdb_140e94b40();
  plStack_180 = param_4;
  plStack_f8 = param_1;
  if (cVar15 == '\0') {
    lStack_190 = 0;
  }
  else {
    puVar39 = &UNK_143024ec7;
    lVar43 = 0x45;
    uVar28 = 0x45;
    lVar16 = pdb_14094f280(&UNK_143024ec7);
    if (lVar16 == 1) {
      if (0x45 < uVar28) {
LAB_14094a964:
        pdb_142dc8070(&UNK_143024ec7,0x45,0);
LAB_14094a985:
        pdb_142dc7e2a(1,0x18);
LAB_14094a9d7:
                    /* WARNING: Does not return */
        pcVar8 = (code *)invalidInstructionException();
        (*pcVar8)();
      }
      puVar39 = &UNK_143024ec7;
      uVar17 = pdb_14094f280(&UNK_143024ec7);
      if ((uVar17 & 1) != 0) {
        if (0x45 < uVar28 + 2) {
          pdb_142dc8070(&UNK_143024ec7,0x45,uVar28 + 2,0x45,&UNK_143025028);
                    /* WARNING: Subroutine does not return */
          pdb_142dc81f2();
        }
        lVar43 = 0x43 - uVar28;
        puVar39 = &UNK_143024ec9 + uVar28;
      }
    }
    puVar18 = &UNK_143024421;
    puVar40 = &UNK_1430243e9;
    do {
      pbVar22 = puVar18 + -1;
      uVar24 = (uint)(char)*pbVar22;
      if ((int)uVar24 < 0) {
        bVar5 = puVar18[-2];
        if ((char)bVar5 < -0x40) {
          bVar4 = puVar18[-3];
          if ((char)bVar4 < -0x40) {
            pbVar31 = puVar18 + -4;
            puVar18 = puVar18 + -4;
            uVar24 = bVar4 & 0x3f | (*pbVar31 & 7) << 6;
          }
          else {
            puVar18 = puVar18 + -3;
            uVar24 = bVar4 & 0xf;
          }
          uVar24 = bVar5 & 0x3f | uVar24 << 6;
        }
        else {
          puVar18 = puVar18 + -2;
          uVar24 = bVar5 & 0x1f;
        }
        uVar24 = (uint)(*pbVar22 & 0x3f) | uVar24 << 6;
        if (uVar24 != 0x5c) goto LAB_140948f99;
LAB_140948fb5:
        if ((undefined *)0x38 < puVar18 + -0x1430243e8) {
          pdb_142dc8070(&UNK_1430243e9,0x38,puVar18 + -0x1430243e8,0x38,&UNK_143024ff0);
          goto LAB_14094a964;
        }
        lVar16 = 0x37 - (longlong)(puVar18 + -0x1430243e9);
        puVar40 = puVar18 + 1;
        goto LAB_140948fd8;
      }
      puVar18 = puVar18 + -1;
      if (uVar24 == 0x5c) goto LAB_140948fb5;
LAB_140948f99:
      if (uVar24 == 0x2f) goto LAB_140948fb5;
    } while (puVar18 != &UNK_1430243e9);
    lVar16 = 0x38;
LAB_140948fd8:
    plVar19 = (longlong *)pdb_140e97000();
    if (((char)plVar19[0xd] != '\x01') &&
       (plVar19 = (longlong *)pdb_142d8ec20(plVar19,0), plVar19 == (longlong *)0x0)) {
LAB_14094a8a4:
      pdb_142dc7890(&UNK_143326860);
                    /* WARNING: Subroutine does not return */
      pdb_142dc83b0(&UNK_143059e50,0x32,&UNK_143024840);
    }
    if (*plVar19 != 0) goto LAB_14094a870;
    *plVar19 = -1;
    plStack_168 = plVar19;
    uStack_188 = pdb_140e94f10(plVar19 + 1,puVar39,lVar43,puVar40,lVar16,1,0);
    *plStack_168 = *plStack_168 + 1;
    lStack_190 = 1;
  }
  puVar6 = (ulonglong *)*param_3;
  lVar16 = param_3[1];
  uVar28 = *puVar6;
  uVar23 = 0;
  uVar17 = uVar28 - *(ulonglong *)(lVar16 + 0x18);
  if (uVar28 < *(ulonglong *)(lVar16 + 0x18)) {
    uVar17 = uVar23;
  }
  uVar38 = uVar28 - *(ulonglong *)(lVar16 + 0x38);
  if (uVar28 < *(ulonglong *)(lVar16 + 0x38)) {
    uVar38 = uVar23;
  }
  uVar28 = *(ulonglong *)(lVar16 + 0x10);
  uVar37 = *(ulonglong *)(lVar16 + 0x30);
  uVar35 = uVar37 - uVar38;
  if (uVar37 < uVar38) {
    uVar35 = uVar23;
  }
  uVar29 = uVar28 - uVar17;
  if (uVar28 < uVar17) {
    uVar29 = uVar23;
  }
  uVar23 = *(ulonglong *)(lVar16 + 0x40);
  lVar43 = *(longlong *)(lVar16 + 8);
  lVar16 = *(longlong *)(lVar16 + 0x28);
  *puVar6 = (uVar23 - uVar35) - uVar29;
  if (uVar28 >= uVar17 && uVar28 - uVar17 != 0 || uVar37 >= uVar38 && uVar37 - uVar38 != 0) {
    lVar16 = lVar16 + uVar38 * 0x10;
    lVar43 = lVar43 + uVar17 * 0x10;
    if (uVar28 < uVar17) {
      lVar43 = 8;
    }
    lVar27 = 0;
    if (uVar17 < uVar28) {
      lVar27 = lVar43 + -0x10 + uVar29 * 0x10;
    }
    if (uVar37 < uVar38) {
      lVar16 = 8;
    }
    lVar16 = lVar16 + -0x10 + uVar35 * 0x10;
    if (uVar37 <= uVar38) {
      lVar16 = lVar27;
    }
    *puVar6 = uVar23;
    uVar7 = *(undefined8 *)(lVar16 + 8);
    *(undefined4 *)plStack_160[2] = *(undefined4 *)((longlong)plStack_160 + 0x1c);
    lVar16 = *plStack_160;
    *(undefined8 *)(lVar16 + 0x30) = 1;
    *(undefined8 *)(lVar16 + 0x38) = uVar7;
  }
  puVar6 = (ulonglong *)*param_8;
  lVar16 = param_8[1];
  uVar28 = *puVar6;
  uVar23 = 0;
  uVar17 = uVar28 - *(ulonglong *)(lVar16 + 0x18);
  if (uVar28 < *(ulonglong *)(lVar16 + 0x18)) {
    uVar17 = uVar23;
  }
  uVar38 = uVar28 - *(ulonglong *)(lVar16 + 0x38);
  if (uVar28 < *(ulonglong *)(lVar16 + 0x38)) {
    uVar38 = uVar23;
  }
  piVar20 = (int *)(uVar17 * 0x20 + *(longlong *)(lVar16 + 8));
  uVar28 = *(ulonglong *)(lVar16 + 0x10);
  uVar37 = uVar28 - uVar17;
  if (uVar28 < uVar17) {
    uVar37 = uVar23;
  }
  if (uVar28 < uVar17) {
    piVar20 = (int *)0x8;
  }
  piVar26 = (int *)(uVar38 * 0x20 + *(longlong *)(lVar16 + 0x28));
  uVar28 = *(ulonglong *)(lVar16 + 0x30) - uVar38;
  if (*(ulonglong *)(lVar16 + 0x30) < uVar38) {
    piVar26 = (int *)0x8;
    uVar28 = uVar23;
  }
  *puVar6 = (*(longlong *)(lVar16 + 0x40) - uVar28) - uVar37;
  piVar30 = piVar20 + uVar37 * 8;
  piVar44 = piVar26 + uVar28 * 8;
  plStack_f8 = (longlong *)*plStack_f8;
  plStack_168 = (longlong *)CONCAT44(plStack_168._4_4_,0x2c);
  do {
    if ((piVar20 == (int *)0x0) || (piVar20 == piVar30)) {
      if ((piVar26 == (int *)0x0) || (piVar26 == piVar44)) {
        if ((uint)plStack_168 != 0x2c) {
                    /* WARNING: Could not recover jumptable at 0x000140949ed5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          plVar19 = (longlong *)
                    (*(code *)(&UNK_14302518c +
                              *(int *)(&UNK_14302518c + ((ulonglong)plStack_168 & 0xffffffff) * 4)))
                              ();
          return plVar19;
        }
        *(undefined4 *)plStack_160[2] = *(undefined4 *)((longlong)plStack_160 + 0x1c);
        lStack_170 = *plStack_160;
        pdb_140a87f70(lStack_170 + 0xd0);
        puVar6 = (ulonglong *)*param_9;
        lVar16 = param_9[1];
        uVar28 = *puVar6;
        uVar23 = 0;
        uVar17 = uVar28 - *(ulonglong *)(lVar16 + 0x18);
        if (uVar28 < *(ulonglong *)(lVar16 + 0x18)) {
          uVar17 = uVar23;
        }
        uVar38 = uVar28 - *(ulonglong *)(lVar16 + 0x38);
        if (uVar28 < *(ulonglong *)(lVar16 + 0x38)) {
          uVar38 = uVar23;
        }
        lVar43 = uVar17 * 0x10 + *(longlong *)(lVar16 + 8);
        uVar28 = *(ulonglong *)(lVar16 + 0x10) - uVar17;
        if (*(ulonglong *)(lVar16 + 0x10) < uVar17) {
          lVar43 = 8;
          uVar28 = uVar23;
        }
        lVar27 = uVar38 * 0x10 + *(longlong *)(lVar16 + 0x28);
        uVar17 = *(ulonglong *)(lVar16 + 0x30) - uVar38;
        if (*(ulonglong *)(lVar16 + 0x30) < uVar38) {
          lVar27 = 8;
          uVar17 = uVar23;
        }
        *puVar6 = (*(longlong *)(lVar16 + 0x40) - uVar17) - uVar28;
        lVar16 = uVar28 * 0x10 + lVar43;
        lVar45 = uVar17 * 0x10 + lVar27;
        break;
      }
      piVar21 = piVar26 + 8;
      piVar33 = (int *)0x0;
      *puVar6 = *puVar6 + 1;
      iVar25 = *piVar26;
      piVar20 = piVar26;
      if (iVar25 != 0x17) goto LAB_1409491e7;
LAB_140949255:
      if (*plStack_f8 == 0) {
        pdb_14007ee60();
        pbVar22 = pub_1406abab0(0x18,1);
        uVar7 = _UNK_1430248ef;
        if (pbVar22 == (byte *)0x0) {
          pdb_142dc7e2a(1,0x18);
          goto LAB_14094a9d7;
        }
        *(undefined8 *)pbVar22 = _DAT_1430248e7;
        *(undefined8 *)(pbVar22 + 8) = uVar7;
        pbVar22[0x10] = 0x61;
        pbVar22[0x11] = 0x72;
        pbVar22[0x12] = 0x2f;
        pbVar22[0x13] = 0x43;
        pbVar22[0x14] = 0x6c;
        pbVar22[0x15] = 0x6f;
        pbVar22[0x16] = 0x73;
        pbVar22[0x17] = 0x65;
        uStack_128 = 0;
        uStack_118 = 0x18;
        uStack_108 = 0x18;
        uStack_100 = 2;
        pbStack_110 = pbVar22;
      }
      else {
        pdb_140a8b180(&uStack_128,*plStack_f8 + 0x10,&DAT_1430248e7,0x18);
        if ((int)uStack_128 == 2) {
          uStack_158 = uStack_120;
                    /* WARNING: Subroutine does not return */
          pdb_142dc8170(&UNK_143024e08,0x2b,&uStack_158,&UNK_143024de8,&UNK_1430248b8);
        }
      }
      uStack_138 = uStack_108;
      uStack_130 = uStack_100;
      uStack_12f = uStack_ff;
      uStack_12b = uStack_fb;
      uStack_129 = uStack_f9;
      uStack_148 = uStack_118;
      pbStack_140 = pbStack_110;
      uStack_158 = uStack_128;
      uStack_150 = uStack_120;
      pdb_140a8a6f0(&uStack_158);
      pdb_1409a5ed0(&uStack_158);
      piVar20 = piVar33;
      piVar26 = piVar21;
LAB_1409493fd:
      piVar21 = (int *)&uStack_1a8;
      if (uStack_148 != 0) {
        pub_1406abac0(pbStack_140,uStack_148,1);
      }
    }
    else {
      piVar33 = piVar20 + 8;
      *puVar6 = *puVar6 + 1;
      iVar25 = *piVar20;
      piVar21 = piVar26;
      if (iVar25 == 0x17) goto LAB_140949255;
LAB_1409491e7:
      piVar26 = piVar21;
      if (iVar25 == 0x16) {
        if (*plStack_f8 == 0) {
          pdb_14007ee60();
          pbVar22 = pub_1406abab0(0x17,1);
          uVar7 = _UNK_1430248d8;
          if (pbVar22 == (byte *)0x0) {
            pdb_142dc7e2a(1,0x17);
            goto LAB_14094a9d7;
          }
          *(undefined8 *)pbVar22 = _DAT_1430248d0;
          *(undefined8 *)(pbVar22 + 8) = uVar7;
          pbVar22[0xf] = 0x62;
          pbVar22[0x10] = 0x61;
          pbVar22[0x11] = 0x72;
          pbVar22[0x12] = 0x2f;
          pbVar22[0x13] = 0x4f;
          pbVar22[0x14] = 0x70;
          pbVar22[0x15] = 0x65;
          pbVar22[0x16] = 0x6e;
          uStack_128 = 0;
          uStack_118 = 0x17;
          uStack_108 = 0x17;
          uStack_100 = 2;
          pbStack_110 = pbVar22;
        }
        else {
          pdb_140a8b180(&uStack_128,*plStack_f8 + 0x10,&DAT_1430248d0,0x17);
          if ((int)uStack_128 == 2) {
            uStack_158 = uStack_120;
                    /* WARNING: Subroutine does not return */
            pdb_142dc8170(&UNK_143024e08,0x2b,&uStack_158,&UNK_143024de8,&UNK_1430248b8);
          }
        }
        uStack_138 = uStack_108;
        uStack_130 = uStack_100;
        uStack_12f = uStack_ff;
        uStack_12b = uStack_fb;
        uStack_129 = uStack_f9;
        uStack_148 = uStack_118;
        pbStack_140 = pbStack_110;
        uStack_158 = uStack_128;
        uStack_150 = uStack_120;
        pdb_140a8a6f0(&uStack_158);
        pdb_1409a5ed0(&uStack_158);
        piVar20 = piVar33;
        goto LAB_1409493fd;
      }
      plStack_168 = (longlong *)CONCAT44(plStack_168._4_4_,iVar25);
      piVar21 = piVar20 + 1;
      piVar20 = piVar33;
    }
    iStack_198 = piVar21[4];
    uStack_1a8 = *(undefined8 *)piVar21;
    uStack_1a0 = *(undefined8 *)(piVar21 + 2);
  } while( true );
LAB_1409494d6:
  if ((lVar43 == 0) || (lVar43 == lVar16)) {
    if ((lVar27 == 0) || (lVar27 == lVar45)) {
      puVar6 = (ulonglong *)*plStack_180;
      pbVar22 = (byte *)plStack_180[1];
      uVar28 = *puVar6;
      uVar23 = 0;
      uVar17 = uVar28 - *(ulonglong *)(pbVar22 + 0x18);
      if (uVar28 < *(ulonglong *)(pbVar22 + 0x18)) {
        uVar17 = uVar23;
      }
      uVar38 = uVar28 - *(ulonglong *)(pbVar22 + 0x38);
      if (uVar28 < *(ulonglong *)(pbVar22 + 0x38)) {
        uVar38 = uVar23;
      }
      pbVar31 = (byte *)(uVar17 * 0x38 + *(longlong *)(pbVar22 + 8));
      uVar28 = *(ulonglong *)(pbVar22 + 0x10);
      uVar37 = uVar28 - uVar17;
      if (uVar28 < uVar17) {
        uVar37 = uVar23;
      }
      if (uVar28 < uVar17) {
        pbVar31 = (byte *)0x8;
      }
      pbVar46 = (byte *)(uVar38 * 0x38 + *(longlong *)(pbVar22 + 0x28));
      uVar28 = *(ulonglong *)(pbVar22 + 0x30) - uVar38;
      if (*(ulonglong *)(pbVar22 + 0x30) < uVar38) {
        pbVar46 = (byte *)0x8;
        uVar28 = uVar23;
      }
      goto code_r0x000140949774;
    }
    lVar34 = lVar27 + 0x10;
    lVar41 = 0;
    *puVar6 = *puVar6 + 1;
    if (*(char *)(lVar27 + 8) != '\0') goto LAB_1409494f0;
LAB_140949555:
    if (*plStack_f8 == 0) {
      pdb_14007ee60();
      pbVar22 = pub_1406abab0(0x1e,1);
      uVar7 = _UNK_14302488a;
      if (pbVar22 == (byte *)0x0) {
        pdb_142dc7e2a(1,0x1e);
        goto LAB_14094a9d7;
      }
      *(ulonglong *)(pbVar22 + 0xe) = CONCAT62(_UNK_143024884,_DAT_143024882);
      *(undefined8 *)(pbVar22 + 0x16) = uVar7;
      uVar7 = CONCAT26(_DAT_143024882,_UNK_14302487c);
      *(undefined8 *)pbVar22 = _DAT_143024874;
      *(undefined8 *)(pbVar22 + 8) = uVar7;
      uStack_128 = 0;
      uStack_118 = 0x1e;
      uStack_108 = 0x1e;
      uStack_100 = 2;
      pbStack_110 = pbVar22;
    }
    else {
      pdb_140a8b180(&uStack_128,*plStack_f8 + 0x10,&DAT_143024874,0x1e);
      if ((int)uStack_128 == 2) {
        uStack_158 = uStack_120;
                    /* WARNING: Subroutine does not return */
        pdb_142dc8170(&UNK_143024e08,0x2b,&uStack_158,&UNK_143024de8,&UNK_1430248b8);
      }
    }
    uStack_138 = uStack_108;
    uStack_130 = uStack_100;
    uStack_12f = uStack_ff;
    uStack_12b = uStack_fb;
    uStack_129 = uStack_f9;
    uStack_148 = uStack_118;
    pbStack_140 = pbStack_110;
    uStack_158 = uStack_128;
    uStack_150 = uStack_120;
    pdb_140a8a6f0(&uStack_158);
    pdb_1409a5ed0(&uStack_158);
    lVar27 = lVar34;
    lVar43 = lVar41;
  }
  else {
    lVar41 = lVar43 + 0x10;
    *puVar6 = *puVar6 + 1;
    lVar34 = lVar27;
    if (*(char *)(lVar43 + 8) == '\0') goto LAB_140949555;
LAB_1409494f0:
    if (*plStack_f8 == 0) {
      pdb_14007ee60();
      pbVar22 = pub_1406abab0(0x1f,1);
      uVar7 = _UNK_1430248a9;
      if (pbVar22 == (byte *)0x0) {
        pdb_142dc7e2a(1,0x1f);
        goto LAB_14094a9d7;
      }
      *(ulonglong *)(pbVar22 + 0xf) = CONCAT71(_UNK_1430248a2,DAT_1430248a1);
      *(undefined8 *)(pbVar22 + 0x17) = uVar7;
      uVar7 = CONCAT17(DAT_1430248a1,_UNK_14302489a);
      *(undefined8 *)pbVar22 = _DAT_143024892;
      *(undefined8 *)(pbVar22 + 8) = uVar7;
      uStack_128 = 0;
      uStack_118 = 0x1f;
      uStack_108 = 0x1f;
      uStack_100 = 2;
      pbStack_110 = pbVar22;
    }
    else {
      pdb_140a8b180(&uStack_128,*plStack_f8 + 0x10,&DAT_143024892,0x1f);
      if ((int)uStack_128 == 2) {
        uStack_158 = uStack_120;
                    /* WARNING: Subroutine does not return */
        pdb_142dc8170(&UNK_143024e08,0x2b,&uStack_158,&UNK_143024de8,&UNK_1430248b8);
      }
    }
    uStack_138 = uStack_108;
    uStack_130 = uStack_100;
    uStack_12f = uStack_ff;
    uStack_12b = uStack_fb;
    uStack_129 = uStack_f9;
    uStack_148 = uStack_118;
    pbStack_140 = pbStack_110;
    uStack_158 = uStack_128;
    uStack_150 = uStack_120;
    pdb_140a8a6f0(&uStack_158);
    pdb_1409a5ed0(&uStack_158);
    lVar27 = lVar34;
    lVar43 = lVar41;
  }
  if (uStack_148 != 0) {
    pub_1406abac0(pbStack_140,uStack_148,1);
  }
  goto LAB_1409494d6;
code_r0x000140949774:
  *puVar6 = (*(longlong *)(pbVar22 + 0x40) - uVar28) - uVar37;
  uVar14 = _DAT_1430241b0;
  uVar13 = _DAT_1430241ac;
  uVar12 = _DAT_143008730;
  uVar11 = _DAT_142f57bc8;
  uVar10 = _DAT_142f3e570;
  uVar9 = _DAT_142e37adc;
  pbVar42 = pbVar31 + uVar37 * 0x38;
  pbVar36 = pbVar46 + uVar28 * 0x38;
  plStack_160 = (longlong *)*param_10;
  plStack_180 = plStack_160 + 4;
  pbVar32 = pbVar31;
  pbVar47 = pbVar46;
LAB_140949810:
  do {
    if ((pbVar32 == (byte *)0x0) || (pbVar32 == pbVar42)) {
      if ((pbVar47 == (byte *)0x0) || (pbVar47 == pbVar36)) {
        if ((uint)plStack_168 == 0x2c) {
          if ((byte)uVar23 == 1) {
LAB_140949f0c:
            if (*plStack_f8 == 0) {
              pdb_14007ee60();
              pbVar22 = pub_1406abab0(0x18,1);
              uVar7 = _UNK_14302482e;
              if (pbVar22 == (byte *)0x0) goto LAB_14094a985;
              *(undefined8 *)pbVar22 = _DAT_143024826;
              *(undefined8 *)(pbVar22 + 8) = uVar7;
              pbVar22[0x10] = 0x6c;
              pbVar22[0x11] = 0x20;
              pbVar22[0x12] = 0x43;
              pbVar22[0x13] = 0x68;
              pbVar22[0x14] = 0x61;
              pbVar22[0x15] = 0x6e;
              pbVar22[0x16] = 0x67;
              pbVar22[0x17] = 0x65;
              uStack_128 = 0;
              uStack_118 = 0x18;
              uStack_108 = 0x18;
              uStack_100 = 2;
              pbStack_110 = pbVar22;
            }
            else {
              pdb_140a8b180(&uStack_128,*plStack_f8 + 0x10,&DAT_143024826,0x18);
              if ((int)uStack_128 == 2) {
                uStack_158 = uStack_120;
                    /* WARNING: Subroutine does not return */
                pdb_142dc8170(&UNK_143024e08,0x2b,&uStack_158,&UNK_143024de8,&UNK_1430248b8);
              }
            }
            uStack_138 = uStack_108;
            uStack_130 = uStack_100;
            uStack_12f = uStack_ff;
            uStack_12b = uStack_fb;
            uStack_129 = uStack_f9;
            uStack_148 = uStack_118;
            pbStack_140 = pbStack_110;
            uStack_158 = uStack_128;
            uStack_150 = uStack_120;
            pdb_140a8a6f0(&uStack_158);
            pdb_1409a5ed0(&uStack_158);
            if (uStack_148 != 0) {
              pub_1406abac0(pbStack_140,uStack_148,1);
            }
          }
        }
        else if (((uint)plStack_168 < 0x2a & (byte)uVar23) != 0) goto LAB_140949f0c;
        lVar16 = param_5[1];
        uVar28 = *(ulonglong *)*param_5;
        uVar23 = 0;
        uVar17 = uVar28 - *(ulonglong *)(lVar16 + 0x18);
        if (uVar28 < *(ulonglong *)(lVar16 + 0x18)) {
          uVar17 = uVar23;
        }
        uVar38 = uVar28 - *(ulonglong *)(lVar16 + 0x38);
        if (uVar28 < *(ulonglong *)(lVar16 + 0x38)) {
          uVar38 = uVar23;
        }
        uVar28 = *(ulonglong *)(lVar16 + 0x10);
        uVar37 = *(ulonglong *)(lVar16 + 0x30);
        uVar35 = uVar28 - uVar17;
        if (uVar28 < uVar17) {
          uVar35 = uVar23;
        }
        uVar29 = uVar37 - uVar38;
        if (uVar37 < uVar38) {
          uVar29 = uVar23;
        }
        uVar35 = uVar29 + uVar35;
        if (uVar38 < uVar37) {
          uVar35 = uVar23;
        }
        if (uVar17 < uVar28) {
          uVar35 = uVar23;
        }
        *(ulonglong *)*param_5 = *(longlong *)(lVar16 + 0x40) - uVar35;
        lVar16 = param_6[1];
        uVar28 = *(ulonglong *)*param_6;
        uVar17 = uVar28 - *(ulonglong *)(lVar16 + 0x18);
        if (uVar28 < *(ulonglong *)(lVar16 + 0x18)) {
          uVar17 = uVar23;
        }
        uVar38 = uVar28 - *(ulonglong *)(lVar16 + 0x38);
        if (uVar28 < *(ulonglong *)(lVar16 + 0x38)) {
          uVar38 = uVar23;
        }
        bVar48 = *(ulonglong *)(lVar16 + 0x30) < uVar38;
        uVar38 = *(ulonglong *)(lVar16 + 0x30) - uVar38;
        uVar28 = uVar38;
        if (bVar48) {
          uVar28 = uVar23;
        }
        bVar49 = *(ulonglong *)(lVar16 + 0x10) < uVar17;
        uVar17 = *(ulonglong *)(lVar16 + 0x10) - uVar17;
        uVar37 = uVar17;
        if (bVar49) {
          uVar37 = uVar23;
        }
        uVar28 = uVar37 + uVar28;
        if (!bVar49 && uVar17 != 0 || !bVar48 && uVar38 != 0) {
          uVar28 = uVar23;
        }
        *(ulonglong *)*param_6 = *(longlong *)(lVar16 + 0x40) - uVar28;
        lVar16 = param_7[1];
        uVar28 = *(ulonglong *)*param_7;
        uVar37 = uVar28 - *(ulonglong *)(lVar16 + 0x18);
        if (uVar28 < *(ulonglong *)(lVar16 + 0x18)) {
          uVar37 = uVar23;
        }
        uVar35 = uVar28 - *(ulonglong *)(lVar16 + 0x38);
        if (uVar28 < *(ulonglong *)(lVar16 + 0x38)) {
          uVar35 = uVar23;
        }
        bVar50 = *(ulonglong *)(lVar16 + 0x30) < uVar35;
        uVar35 = *(ulonglong *)(lVar16 + 0x30) - uVar35;
        uVar28 = uVar35;
        if (bVar50) {
          uVar28 = uVar23;
        }
        bVar51 = *(ulonglong *)(lVar16 + 0x10) < uVar37;
        uVar37 = *(ulonglong *)(lVar16 + 0x10) - uVar37;
        uVar29 = uVar37;
        if (bVar51) {
          uVar29 = uVar23;
        }
        uVar28 = uVar29 + uVar28;
        if (!bVar51 && uVar37 != 0 || !bVar50 && uVar35 != 0) {
          uVar28 = uVar23;
        }
        plVar19 = (longlong *)(*(longlong *)(lVar16 + 0x40) - uVar28);
        *(ulonglong *)*param_7 = (ulonglong)plVar19;
        if (!bVar49 && uVar17 != 0 || !bVar48 && uVar38 != 0) {
          plVar19 = (longlong *)pdb_140a8a6f0(lStack_170 + 0x40);
        }
        if (!bVar51 && uVar37 != 0 || !bVar50 && uVar35 != 0) {
          plVar19 = (longlong *)pdb_140a8a6f0(lStack_170 + 0x70);
        }
        if (lStack_190 == 0) {
          return plVar19;
        }
        plVar19 = (longlong *)pdb_140e97000();
        if ((char)plVar19[0xd] != '\x01') goto LAB_14094a87c;
        do {
          if (*plVar19 == 0) {
            *plVar19 = -1;
            plStack_f8 = plVar19;
            pdb_140e95370(plVar19 + 1,uStack_188);
            *plStack_f8 = *plStack_f8 + 1;
            return plStack_f8;
          }
LAB_14094a870:
          plVar19 = (longlong *)pdb_142dc8090(&UNK_143326a50);
LAB_14094a87c:
          plVar19 = (longlong *)pdb_142d8ec20(plVar19,0);
        } while (plVar19 != (longlong *)0x0);
        goto LAB_14094a8a4;
      }
      pbVar46 = pbVar47 + 0x38;
      pbVar31 = (byte *)0x0;
      pbVar22 = pbVar47;
    }
    else {
      pbVar31 = pbVar32 + 0x38;
      pbVar22 = pbVar32;
      pbVar46 = pbVar47;
    }
    *puVar6 = *puVar6 + 1;
    bVar5 = *pbVar22;
    pbVar32 = pbVar31;
    pbVar47 = pbVar46;
  } while ((bVar5 == 9) || (pbVar22[0x18] == 9));
  uVar28 = *(ulonglong *)(pbVar22 + 8);
  uVar23 = 1;
  bVar48 = 0xfffffffebcfdadc3 <
           (ulonglong)(longlong)*(int *)(&UNK_14302523c + (ulonglong)(uint)bVar5 * 4);
  uVar24 = *(int *)(&UNK_14302523c + (ulonglong)(uint)bVar5 * 4) + 0x4302523c;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(bVar5) {
  case 10:
    if (*plStack_f8 != 0) {
      uVar37 = 4;
      pdb_140a8aa00(*plStack_f8 + 0x10,&UNK_143024870,4,uVar9);
    }
    goto LAB_140949810;
  case 0xb:
    if (*plStack_f8 != 0) {
      uVar37 = 4;
      pdb_140a8aa00(*plStack_f8 + 0x10,&UNK_143024870,4,uVar10);
    }
    goto LAB_140949810;
  case 0xc:
    if (*plStack_f8 != 0) {
      uVar37 = 4;
      pdb_140a8aa00(*plStack_f8 + 0x10,&UNK_143024870,4,uVar14);
    }
    goto LAB_140949810;
  case 0xd:
  case 0xe:
    if (*plStack_f8 != 0) {
      uVar37 = 4;
      pdb_140a8aa00(*plStack_f8 + 0x10,&UNK_143024870,4,uVar11);
    }
    goto LAB_140949810;
  case 0xf:
    if (*plStack_f8 != 0) {
      uVar37 = 4;
      pdb_140a8aa00(*plStack_f8 + 0x10,&UNK_143024870,4,uVar12);
    }
    goto LAB_140949810;
  case 0x10:
    if (*plStack_f8 != 0) {
      uVar37 = 4;
      pdb_140a8aa00(*plStack_f8 + 0x10,&UNK_143024870,4,uVar13);
    }
  case 0x11:
    goto LAB_140949810;
  default:
    goto LAB_140949810;
  case 0x15:
    goto LAB_140949810;
  case 0x16:
    uVar23 = (ulonglong)(byte)((byte)pbVar22 + 1);
    _UNK_14302523c = (_UNK_14302523c - uVar24) - (uint)(0xfe < (byte)pbVar22);
    goto LAB_140949810;
  case 0x17:
    DAT_1430241b4 = DAT_1430241b4 + (char)pbVar31 + bVar48;
    pdb_140a8aa00();
    goto LAB_140949810;
  case 0x18:
    break;
  case 0x19:
    DAT_142f895fc = DAT_142f895fc + (char)pbVar31 + bVar48;
    pdb_140a8aa00();
    goto LAB_140949810;
  case 0x1a:
  case 0x1b:
  case 0x1c:
    puVar1 = (uint *)(pbVar22 + -0x6e);
    uVar2 = *puVar1;
    uVar3 = *puVar1;
    *puVar1 = (uVar3 - uVar24) - (uint)bVar48;
    if ((uVar24 <= uVar2 && (uint)bVar48 <= uVar3 - uVar24) && *puVar1 != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    return (longlong *)(ulonglong)(uint)(int)(short)pbVar22;
  }
  goto code_r0x000140949774;
}

