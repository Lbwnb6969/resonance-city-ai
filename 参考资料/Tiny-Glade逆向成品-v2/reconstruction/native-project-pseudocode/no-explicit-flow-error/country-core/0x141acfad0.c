// VA 0x141acfad0, PDB extent 3640 bytes
// country_core::systems::audio::playermade_stairs_audio::stairs_audio_system
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/audio/playermade_stairs_audio.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::systems::audio::playermade_stairs_audio::stairs_audio_system
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/audio/playermade_stairs_audio.rs
   Extent: 3640 */

void pdb_141acfad0(longlong *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  byte bVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  longlong lVar6;
  ulonglong *puVar7;
  ulonglong uVar8;
  longlong *plVar9;
  code *pcVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  longlong lVar13;
  byte *pbVar14;
  ulonglong uVar15;
  uint uVar16;
  undefined *puVar17;
  longlong lVar18;
  longlong lVar19;
  longlong lVar20;
  longlong lVar21;
  ulonglong uVar22;
  longlong lVar23;
  longlong lVar24;
  byte bVar25;
  ulonglong uVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  undefined4 uVar33;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  ulonglong uStack_158;
  byte *pbStack_150;
  ulonglong uStack_148;
  undefined1 uStack_140;
  undefined4 uStack_13f;
  undefined2 uStack_13b;
  undefined1 uStack_139;
  undefined8 uStack_138;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined8 uStack_128;
  undefined8 uStack_120;
  ulonglong uStack_118;
  byte *pbStack_110;
  ulonglong uStack_108;
  undefined1 uStack_100;
  undefined4 uStack_ff;
  undefined2 uStack_fb;
  undefined1 uStack_f9;
  byte bStack_f2;
  byte bStack_f1;
  undefined8 uStack_f0;
  
  uStack_f0 = 0xfffffffffffffffe;
  uVar4 = *(undefined4 *)((longlong)param_1 + 0x1c);
  puVar5 = (undefined4 *)param_1[2];
  *puVar5 = uVar4;
  lVar6 = *param_1;
  pdb_140a87f70(lVar6);
  *puVar5 = uVar4;
  pdb_140a87f70();
  *puVar5 = uVar4;
  pdb_140a87f70();
  *puVar5 = uVar4;
  pdb_140a87f70();
  *puVar5 = uVar4;
  pdb_140a87f70();
  *puVar5 = uVar4;
  pdb_140a87f70();
  *puVar5 = uVar4;
  pdb_140a87f70();
  *puVar5 = uVar4;
  pdb_140a87f70();
  *puVar5 = uVar4;
  uStack_12c = uVar4;
  pdb_140a87f70();
  puVar7 = (ulonglong *)*param_2;
  lVar20 = param_2[1];
  uVar8 = *puVar7;
  uVar26 = 0;
  uVar22 = uVar8 - *(ulonglong *)(lVar20 + 0x18);
  if (uVar8 < *(ulonglong *)(lVar20 + 0x18)) {
    uVar22 = uVar26;
  }
  uVar15 = uVar8 - *(ulonglong *)(lVar20 + 0x38);
  if (uVar8 < *(ulonglong *)(lVar20 + 0x38)) {
    uVar15 = uVar26;
  }
  lVar23 = uVar22 * 0x38 + *(longlong *)(lVar20 + 8);
  uVar8 = *(ulonglong *)(lVar20 + 0x10) - uVar22;
  if (*(ulonglong *)(lVar20 + 0x10) < uVar22) {
    lVar23 = 8;
    uVar8 = uVar26;
  }
  lVar19 = uVar15 * 0x38 + *(longlong *)(lVar20 + 0x28);
  uVar22 = *(ulonglong *)(lVar20 + 0x30) - uVar15;
  if (*(ulonglong *)(lVar20 + 0x30) < uVar15) {
    lVar19 = 8;
    uVar22 = uVar26;
  }
  *puVar7 = (*(longlong *)(lVar20 + 0x40) - uVar22) - uVar8;
  uVar12 = _DAT_14300a334;
  uVar11 = _DAT_142e37adc;
  uVar4 = _DAT_142e37878;
  plVar9 = (longlong *)*param_3;
  lVar20 = lVar19;
  lVar24 = lVar23;
LAB_141acfcb0:
  if ((lVar24 == 0) || (lVar24 == uVar8 * 0x38 + lVar23)) {
    if ((lVar20 == 0) || (lVar20 == uVar22 * 0x38 + lVar19)) {
      return;
    }
    lVar21 = lVar20 + 0x38;
    lVar13 = 0;
  }
  else {
    lVar13 = lVar24 + 0x38;
    lVar21 = lVar20;
    lVar20 = lVar24;
  }
  *puVar7 = *puVar7 + 1;
  bVar3 = *(byte *)(lVar20 + 8);
  bStack_f1 = *(byte *)(lVar20 + 9);
  bStack_f2 = *(byte *)(lVar20 + 10);
  bVar25 = *(byte *)(lVar20 + 0xb);
  fVar32 = *(float *)(lVar20 + 0xc);
  uVar1 = *(undefined4 *)(lVar20 + 0x10);
  uVar33 = *(undefined4 *)(lVar20 + 0x14);
  uVar2 = *(undefined4 *)(lVar20 + 0x18);
  uStack_130 = *(undefined4 *)(lVar20 + 0x24);
  uStack_138 = *(undefined8 *)(lVar20 + 0x1c);
  uVar28 = *(undefined4 *)(lVar20 + 0x2c);
  uVar27 = pdb_140de8220(uVar12,uVar11,*(undefined4 *)(lVar20 + 0x28));
  uVar28 = pdb_140de8220(0,uVar4,uVar28);
  lVar18 = lVar6;
  lVar20 = lVar21;
  lVar24 = lVar13;
  switch(bVar3) {
  case 0:
    goto code_r0x000141ad0110;
  case 1:
    lVar18 = lVar6 + 0x38;
    goto code_r0x000141ad0110;
  case 2:
    lVar18 = lVar6 + 0x70;
    goto code_r0x000141ad0110;
  case 3:
    uVar26 = 0x1c;
    puVar17 = &UNK_143387b01;
    lVar13 = *plVar9;
    break;
  case 4:
    puVar17 = &UNK_143387b1d;
    goto code_r0x000141acff23;
  case 5:
    puVar17 = &UNK_143387b3a;
    goto code_r0x000141acff23;
  case 6:
    puVar17 = &UNK_143387b57;
    goto code_r0x000141acfe18;
  case 7:
    goto code_r0x000141ad00c1;
  case 8:
    goto code_r0x000141ad00f8;
  case 9:
    goto code_r0x000141ad00fe;
  case 10:
    puVar17 = &UNK_143387b7b;
    goto code_r0x000141ad04e3;
  case 0xb:
    puVar17 = &UNK_143387b9d;
    goto code_r0x000141acfe7e;
  case 0xc:
    puVar17 = &UNK_143387bbe;
code_r0x000141acfe7e:
    uVar26 = 0x21;
    lVar13 = *plVar9;
    break;
  case 0xd:
    puVar17 = &UNK_143387bdf;
    uVar26 = 0x28;
    lVar13 = *plVar9;
    break;
  case 0xe:
    goto code_r0x000141ad0104;
  case 0xf:
    puVar17 = &UNK_143387c07;
    uVar26 = 0x1e;
    lVar13 = *plVar9;
    break;
  case 0x10:
    goto code_r0x000141ad00f2;
  case 0x11:
    goto code_r0x000141ad010a;
  case 0x12:
    puVar17 = &UNK_143387c25;
    goto code_r0x000141acff23;
  case 0x13:
    puVar17 = &UNK_143387c42;
code_r0x000141acff23:
    uVar26 = 0x1d;
    lVar13 = *plVar9;
    break;
  case 0x14:
    puVar17 = &UNK_143387c5f;
    uVar26 = 0x1f;
    lVar13 = *plVar9;
    break;
  case 0x15:
  case 0x1a:
  case 0x1b:
    puVar17 = &UNK_143387c7e;
code_r0x000141acfe18:
    uVar26 = 0x24;
    lVar13 = *plVar9;
    break;
  case 0x16:
    puVar17 = &UNK_143387ca2;
    goto code_r0x000141acfdfa;
  case 0x17:
    puVar17 = &UNK_143387cc5;
    uVar26 = 0x26;
    lVar13 = *plVar9;
    break;
  case 0x18:
    puVar17 = &UNK_143387ceb;
code_r0x000141ad04e3:
    uVar26 = 0x22;
    lVar13 = *plVar9;
    break;
  default:
    goto LAB_141acfcb0;
  case 0x1c:
    puVar17 = &UNK_143387d0d;
code_r0x000141acfdfa:
    uVar26 = 0x23;
    lVar13 = *plVar9;
    break;
  case 0x1d:
    puVar17 = &UNK_143387d30;
    uVar26 = 0x20;
    lVar13 = *plVar9;
  }
  if (lVar13 == 0) {
    pdb_14007ee60();
    pbVar14 = pub_1406abab0(uVar26,1);
    if (pbVar14 == (byte *)0x0) {
      pdb_142dc7e2a(1,uVar26);
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
    pub_142e32760(pbVar14,puVar17,uVar26);
    uStack_168 = 0;
    uStack_140 = 2;
    uStack_158 = uVar26;
    pbStack_150 = pbVar14;
    uStack_148 = uVar26;
  }
  else {
    pdb_140a8b180(&uStack_168,lVar13 + 0x10,puVar17,uVar26);
    if ((int)uStack_168 == 2) {
      uStack_170 = CONCAT44(uStack_15c,uStack_160);
                    /* WARNING: Subroutine does not return */
      pdb_142dc8170(&UNK_143388100,0x2b,&uStack_170,&UNK_1433880e0,&UNK_143387d50);
    }
  }
  uStack_120 = CONCAT44(uStack_15c,uStack_160);
  uStack_108 = uStack_148;
  uStack_100 = uStack_140;
  uStack_ff = uStack_13f;
  uStack_fb = uStack_13b;
  uStack_f9 = uStack_139;
  uStack_118 = uStack_158;
  pbStack_110 = pbStack_150;
  uStack_128 = uStack_168;
  uStack_160 = uStack_130;
  uStack_168 = uStack_138;
  pdb_140a8e190(&uStack_128,&uStack_168);
  pdb_140a8e730(&uStack_128,&UNK_143387d68,0xb,uVar27);
  pdb_140a8a6f0(&uStack_128);
  fVar31 = _DAT_142e36f28;
  if (bVar3 == 0xf) {
code_r0x000141ad003d:
    fVar29 = (float)pdb_140de8220(_DAT_142e36f28,_DAT_142e382c8,fVar32);
    fVar30 = 0.0;
    if (0.0 <= fVar29) {
      fVar30 = fVar29;
    }
    if (fVar30 <= fVar31) {
      fVar31 = fVar30;
    }
    pdb_140a8e730(&uStack_128,&UNK_143387d73,4,fVar31);
  }
  else if ((bVar3 == 0x13) || (bVar3 == 0x14)) {
    if (_DAT_142e36f28 < fVar32) goto code_r0x000141ad003d;
    pdb_1409a5ed0(&uStack_128);
    if (uStack_118 != 0) {
      pub_1406abac0(pbStack_110,uStack_118,1);
    }
    goto LAB_141acfcb0;
  }
  pdb_1409a5ed0(&uStack_128);
  if (uStack_118 != 0) {
    pub_1406abac0(pbStack_110,uStack_118,1);
  }
  switch(bVar3) {
  case 7:
code_r0x000141ad00c1:
    lVar18 = lVar6 + 0xa8;
    break;
  case 8:
code_r0x000141ad00f8:
    lVar18 = lVar6 + 0xe0;
    break;
  case 9:
code_r0x000141ad00fe:
    lVar18 = lVar6 + 0x118;
    break;
  default:
    goto LAB_141acfcb0;
  case 0xe:
code_r0x000141ad0104:
    lVar18 = lVar6 + 0x150;
    break;
  case 0x10:
code_r0x000141ad00f2:
    lVar18 = lVar6 + 0x188;
    break;
  case 0x11:
code_r0x000141ad010a:
    lVar18 = lVar6 + 0x1c0;
  }
code_r0x000141ad0110:
  *puVar5 = uStack_12c;
  pdb_140a87e10(lVar18);
  uVar26 = *(ulonglong *)(lVar18 + 0x10);
  uVar15 = *(ulonglong *)(lVar18 + 0x28);
  if (uVar26 <= uVar15) goto code_r0x000141ad0593;
  pdb_140a8e730(uVar15 * 0x30 + *(longlong *)(lVar18 + 8),&UNK_143387d68,0xb,uVar27);
  uVar26 = *(ulonglong *)(lVar18 + 0x10);
  uVar15 = *(ulonglong *)(lVar18 + 0x28);
  if (uVar26 <= uVar15) goto code_r0x000141ad0593;
  pdb_140a8e190(uVar15 * 0x30 + *(longlong *)(lVar18 + 8),&uStack_138);
  if (bVar3 < 0x12) {
    uVar16 = (uint)bVar3;
    if ((0x10306U >> (uVar16 & 0x1f) & 1) == 0) {
      if ((0x4081U >> (uVar16 & 0x1f) & 1) != 0) {
        uVar26 = *(ulonglong *)(lVar18 + 0x10);
        uVar15 = *(ulonglong *)(lVar18 + 0x28);
        if (uVar15 < uVar26) {
          lVar13 = *(longlong *)(lVar18 + 8);
          fVar30 = (float)pdb_140de8220(0,_DAT_142e382c8,fVar32);
          fVar32 = _DAT_142e36f28;
          fVar31 = 0.0;
          if (0.0 <= fVar30) {
            fVar31 = fVar30;
          }
          fVar30 = _DAT_142e36f28;
          if (fVar31 <= _DAT_142e36f28) {
            fVar30 = fVar31;
          }
          pdb_140a8e730(uVar15 * 0x30 + lVar13,&UNK_143387a60,0xd,fVar30);
          uVar26 = *(ulonglong *)(lVar18 + 0x10);
          uVar15 = *(ulonglong *)(lVar18 + 0x28);
          if (uVar15 < uVar26) {
            uVar27 = _DAT_142e37884;
            if (bVar3 != 0) {
              uVar27 = *(undefined4 *)(&UNK_143387730 + (ulonglong)(bVar3 == 7) * 4);
            }
            lVar13 = *(longlong *)(lVar18 + 8);
            fVar30 = (float)pdb_140de8220(0,uVar27,uVar1);
            fVar31 = 0.0;
            if (0.0 <= fVar30) {
              fVar31 = fVar30;
            }
            if (fVar31 <= fVar32) {
              fVar32 = fVar31;
            }
            pdb_140a8e730(uVar15 * 0x30 + lVar13,&UNK_143387d77,0xd,fVar32);
            uVar26 = *(ulonglong *)(lVar18 + 0x10);
            uVar15 = *(ulonglong *)(lVar18 + 0x28);
            if (uVar15 < uVar26) {
              pdb_140a8e730(uVar15 * 0x30 + *(longlong *)(lVar18 + 8),&UNK_143387d84,8,uVar28);
              uVar26 = *(ulonglong *)(lVar18 + 0x10);
              uVar15 = *(ulonglong *)(lVar18 + 0x28);
              if (uVar15 < uVar26) {
                pdb_140a8e730(uVar15 * 0x30 + *(longlong *)(lVar18 + 8),&UNK_143387d8c,0x25,uVar2);
                goto joined_r0x000141ad035b;
              }
            }
          }
        }
        goto code_r0x000141ad0593;
      }
      if (uVar16 == 0x11) goto code_r0x000141ad0285;
    }
    else {
      uVar26 = *(ulonglong *)(lVar18 + 0x10);
      uVar15 = *(ulonglong *)(lVar18 + 0x28);
      if (uVar26 <= uVar15) goto code_r0x000141ad0593;
      pdb_140a8e730(uVar15 * 0x30 + *(longlong *)(lVar18 + 8),&UNK_143387a60,0xd,fVar32);
joined_r0x000141ad035b:
      if (bVar3 < 0x11) {
                    /* WARNING: Could not find normalized switch variable to match jumptable */
        switch(bVar3) {
        case 1:
        case 8:
        case 0x10:
          goto code_r0x000141ad0400;
        case 2:
        case 9:
        case 0xe:
          bVar25 = bStack_f1;
        case 0:
        case 7:
          uVar26 = *(ulonglong *)(lVar18 + 0x10);
          uVar15 = *(ulonglong *)(lVar18 + 0x28);
          if (uVar26 <= uVar15) goto code_r0x000141ad0593;
          fVar32 = _DAT_142e36f28;
          if ((bVar25 & 1) == 0) {
            fVar32 = 0.0;
          }
          pdb_140a8e730(uVar15 * 0x30 + *(longlong *)(lVar18 + 8),&UNK_143387db1,8,fVar32);
          switch(bVar3) {
          case 0:
          case 7:
          case 0xe:
            goto code_r0x000141ad0404;
          case 1:
          case 2:
          case 8:
          case 9:
            goto code_r0x000141ad0400;
          default:
            break;
          }
        }
      }
    }
  }
  goto LAB_141acfcb0;
code_r0x000141ad0285:
  uVar26 = *(ulonglong *)(lVar18 + 0x10);
  uVar15 = *(ulonglong *)(lVar18 + 0x28);
  if (uVar26 <= uVar15) {
code_r0x000141ad0593:
                    /* WARNING: Subroutine does not return */
    pdb_142dc81f2(uVar15,uVar26,&UNK_143043a80);
  }
  fVar32 = _DAT_142e36f28;
  if ((bStack_f1 & 1) == 0) {
    fVar32 = 0.0;
  }
  pdb_140a8e730(uVar15 * 0x30 + *(longlong *)(lVar18 + 8),&UNK_143387db1,8,fVar32);
code_r0x000141ad0400:
  uVar33 = uVar1;
code_r0x000141ad0404:
  fVar32 = _DAT_142e36f28;
  uVar26 = *(ulonglong *)(lVar18 + 0x10);
  uVar15 = *(ulonglong *)(lVar18 + 0x28);
  if (uVar26 <= uVar15) goto code_r0x000141ad0593;
  lVar13 = *(longlong *)(lVar18 + 8);
  fVar30 = (float)pdb_140de8220(_DAT_142e36f28,uVar26,uVar33);
  fVar31 = 0.0;
  if (0.0 <= fVar30) {
    fVar31 = fVar30;
  }
  fVar30 = fVar32;
  if (fVar31 <= fVar32) {
    fVar30 = fVar31;
  }
  pdb_140a8e730(uVar15 * 0x30 + lVar13,&UNK_143387db9,0x11,fVar30);
  if ((bVar3 == 7) || (bVar3 == 0)) {
    uVar26 = *(ulonglong *)(lVar18 + 0x10);
    uVar15 = *(ulonglong *)(lVar18 + 0x28);
    if (uVar26 <= uVar15) goto code_r0x000141ad0593;
    if ((bStack_f1 & 1) == 0) {
      fVar32 = 0.0;
    }
    pdb_140a8e730(uVar15 * 0x30 + *(longlong *)(lVar18 + 8),&UNK_143387dca,0xf,fVar32);
    uVar26 = *(ulonglong *)(lVar18 + 0x10);
    uVar15 = *(ulonglong *)(lVar18 + 0x28);
    if (uVar26 <= uVar15) goto code_r0x000141ad0593;
    fVar32 = _DAT_142e36f28;
    if ((bStack_f2 & 1) == 0) {
      fVar32 = 0.0;
    }
    pdb_140a8e730(uVar15 * 0x30 + *(longlong *)(lVar18 + 8),&UNK_143387dd9,8,fVar32);
  }
  goto LAB_141acfcb0;
}

