// VA 0x1419bfe10, PDB extent 3891 bytes
// country_core::systems::audio::water_ambience_audio::water_ambience_audio_init_system
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/audio/water_ambience_audio.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::systems::audio::water_ambience_audio::water_ambience_audio_init_system
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/audio/water_ambience_audio.rs
   Extent: 3891 */

void pdb_1419bfe10(ulonglong *param_1,byte *param_2)

{
  byte *pbVar1;
  int iVar2;
  undefined8 uVar3;
  code *pcVar4;
  byte **arg1;
  byte **arg0;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  longlong lVar9;
  byte *pbVar10;
  ulonglong uVar11;
  longlong lVar12;
  byte *pbVar13;
  longlong lVar14;
  byte *pbVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  bool bVar18;
  float fVar19;
  float fVar20;
  undefined4 uStack_240;
  undefined4 uStack_23c;
  undefined8 uStack_210;
  longlong lStack_1d0;
  byte *pbStack_1c8;
  ulonglong uStack_1c0;
  undefined8 auStack_1b8 [10];
  longlong lStack_168;
  byte *pbStack_160;
  ulonglong uStack_158;
  longlong lStack_150;
  byte *pbStack_148;
  longlong lStack_140;
  longlong lStack_138;
  byte *pbStack_130;
  longlong lStack_128;
  byte *pbStack_120;
  byte *pbStack_118;
  ulonglong uStack_110;
  ulonglong uStack_108;
  byte *pbStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined1 auStack_c8 [20];
  undefined1 uStack_b4;
  undefined1 uStack_b3;
  undefined1 uStack_b2;
  undefined1 uStack_b1;
  undefined8 uStack_b0;
  
  uStack_b0 = 0xfffffffffffffffe;
  if (DAT_143cb2d0c != '\0') {
    return;
  }
  pdb_14007ee60();
  pbVar10 = pub_1406abab0(0x15e0,8);
  if (pbVar10 == (byte *)0x0) {
    pdb_142dc7e2a(8,0x15e0);
  }
  else {
    lStack_150 = 100;
    lStack_140 = 0;
    pbStack_148 = pbVar10;
    pbStack_100 = param_2;
    pdb_14007ee60();
    pbStack_130 = pub_1406abab0(0x960,8);
    fVar8 = _DAT_14300e4bc;
    fVar7 = _DAT_142e37878;
    fVar6 = _DAT_142e36f50;
    fVar5 = _DAT_142e36f28;
    if (pbStack_130 != (byte *)0x0) {
      lStack_138 = 100;
      lStack_128 = 0;
      uVar16 = *param_1;
      uVar11 = 0;
      do {
        uStack_b3 = uVar11 < 10;
        if (!(bool)uStack_b3) {
          uStack_e8 = (byte **)lStack_140;
          uStack_f8 = (byte *)lStack_150;
          uStack_f0 = (byte **)pbStack_148;
          uStack_b1 = 1;
          pdb_1416185e0(pbStack_100,&uStack_f8,&UNK_143360da0);
          uStack_e8 = (byte **)lStack_128;
          uStack_f8 = (byte *)lStack_138;
          uStack_f0 = (byte **)pbStack_130;
          uStack_b1 = 0;
          pdb_14161a020(pbStack_100,&uStack_f8,&UNK_143360db8);
          return;
        }
        uStack_110 = uVar11 + 1;
        fVar19 = ((float)(longlong)uVar11 + fVar6) / fVar7;
        uVar17 = 0;
        uStack_b3 = 1;
        while (uVar11 = uStack_110, uVar17 < 10) {
          fVar20 = ((float)(longlong)uVar17 + fVar6) / fVar7;
          pbStack_118 = (byte *)0x0;
          uStack_f0 = (byte **)&UNK_143360dd0;
          uStack_e8 = (byte **)0x14;
          uStack_e0 = (byte **)0x0;
          uStack_d8 = (byte **)0x4;
          uStack_b4 = 1;
          uStack_f8 = (byte *)uVar16;
          uStack_d0 = &pbStack_118;
          pdb_1415f8780(&lStack_168,&uStack_f8);
          pbVar13 = pbStack_118;
          uVar11 = uStack_158;
          pbVar10 = pbStack_160;
          lVar14 = lStack_168;
          if (pbStack_118 != (byte *)0x0) {
            uStack_108 = uStack_158;
            if (uStack_158 == 0) goto LAB_1419c02d0;
            uVar16 = 0;
            pbStack_120 = pbStack_160;
            goto LAB_1419c037d;
          }
          pbVar13 = pbStack_160;
          if (SBORROW8(0,lStack_168)) goto LAB_1419c02f5;
          lStack_1d0 = lStack_168;
          pbStack_1c8 = pbStack_160;
          uStack_1c0 = uStack_158;
          uStack_108 = uVar17;
          if (uStack_158 == 0) {
                    /* WARNING: Subroutine does not return */
            pdb_142dc81f2(0,0,&UNK_1430439e8);
          }
          if (*(int *)pbStack_160 == 1) {
            pdb_141808720(&uStack_f8,pbStack_160 + 8,&UNK_143043a00,4);
            uVar17 = (ulonglong)uStack_f8;
            if (uStack_f8 != (byte *)0x8000000000000004) {
              pdb_140a8f580(&uStack_f8);
            }
            bVar18 = uVar17 == 0x8000000000000004;
          }
          else {
            bVar18 = false;
          }
          uVar3 = auStack_c8._0_8_;
          lVar9 = lStack_140;
          uStack_f8 = (byte *)lVar14;
          uStack_f0 = (byte **)pbVar10;
          uStack_e8 = (byte **)uVar11;
          uStack_d8 = (byte **)CONCAT44(uStack_d8._4_4_,1000000000);
          uStack_d0 = (byte **)0x0;
          auStack_c8[5] = bVar18;
          auStack_c8._0_5_ = 0x32;
          auStack_c8[7] = SUB81(uVar3,7);
          auStack_c8[6] = 0;
          if (lStack_140 == lStack_150) {
            pdb_142d7f080(&lStack_150);
          }
          lVar14 = lStack_128;
          lVar12 = lVar9 * 0x38;
          *(undefined8 *)(pbStack_148 + lVar12 + 0x30) = auStack_c8._0_8_;
          pbVar10 = pbStack_148 + lVar12 + 0x20;
          *(undefined4 *)pbVar10 = (undefined4)uStack_d8;
          *(undefined4 *)(pbVar10 + 4) = uStack_d8._4_4_;
          *(undefined4 *)(pbVar10 + 8) = (undefined4)uStack_d0;
          *(undefined4 *)(pbVar10 + 0xc) = uStack_d0._4_4_;
          pbVar10 = pbStack_148 + lVar12 + 0x10;
          *(undefined4 *)pbVar10 = (undefined4)uStack_e8;
          *(undefined4 *)(pbVar10 + 4) = uStack_e8._4_4_;
          *(undefined4 *)(pbVar10 + 8) = (undefined4)uStack_e0;
          *(undefined4 *)(pbVar10 + 0xc) = uStack_e0._4_4_;
          pbVar10 = pbStack_148 + lVar12;
          *(undefined4 *)pbVar10 = (undefined4)uStack_f8;
          *(undefined4 *)(pbVar10 + 4) = uStack_f8._4_4_;
          *(undefined4 *)(pbVar10 + 8) = (undefined4)uStack_f0;
          *(undefined4 *)(pbVar10 + 0xc) = uStack_f0._4_4_;
          lStack_140 = lVar9 + 1;
          if (lStack_128 == lStack_138) {
            uStack_b1 = 1;
            pdb_142d7e830(&lStack_138);
          }
          uVar17 = uStack_108 + 1;
          *(float *)(pbStack_130 + lVar14 * 0x18) = fVar20 * fVar8 - (fVar5 - fVar20) * fVar8;
          *(float *)(pbStack_130 + lVar14 * 0x18 + 4) = fVar19 * fVar8 - (fVar5 - fVar19) * fVar8;
          pbVar10 = pbStack_130 + lVar14 * 0x18 + 8;
          pbVar10[0] = 0;
          pbVar10[1] = 0;
          pbVar10[2] = 0;
          pbVar10[3] = 0;
          pbVar10[4] = 0;
          pbVar10[5] = 0;
          pbVar10[6] = 0;
          pbVar10[7] = 0;
          pbVar10 = pbStack_130 + lVar14 * 0x18 + 0x10;
          pbVar10[0] = 0;
          pbVar10[1] = 0;
          pbVar10[2] = 0;
          pbVar10[3] = 0;
          lStack_128 = lVar14 + 1;
        }
      } while( true );
    }
  }
  uStack_b2 = 1;
  pdb_142dc7e2a(8,0x960);
                    /* WARNING: Does not return */
  pcVar4 = (code *)invalidInstructionException();
  (*pcVar4)();
LAB_1419c037d:
  lVar14 = uVar16 * 0x30;
  pbVar15 = pbVar10 + lVar14;
  uVar16 = uVar16 + 1;
  iVar2 = *(int *)(pbVar10 + lVar14);
  uVar3 = *(undefined8 *)(pbVar10 + lVar14 + 8);
  pbVar1 = pbVar10 + lVar14;
  pbVar1[0] = 0;
  pbVar1[1] = 0;
  pbVar1[2] = 0;
  pbVar1[3] = 0;
  pbVar1[4] = 0;
  pbVar1[5] = 0;
  pbVar1[6] = 0;
  pbVar1[7] = 0;
  if (iVar2 == 1) {
    auStack_1b8[0] = uVar3;
    uStack_110 = uVar16;
    pbStack_100 = pbVar15;
    if ((pbVar15[0x28] != 2) &&
       (pdb_141808d70(&uStack_f8,auStack_1b8), uStack_f8 != (byte *)0x8000000000000004)) {
      switch((longlong)uStack_f8 >> 0x3f & (longlong)uStack_f8 + 0x8000000000000001U) {
      case 0:
        arg1 = uStack_e0;
        arg0 = uStack_d8;
        if (uStack_f8 != (byte *)0x0) {
          pub_1406abac0((byte *)uStack_f0,(ulonglong)uStack_f8,1);
          arg1 = uStack_e0;
          arg0 = uStack_d8;
        }
        break;
      case 1:
        arg1 = uStack_d8;
        arg0 = uStack_d0;
        if (uStack_f0 != (byte **)0x0) {
          pub_1406abac0((byte *)uStack_e8,(ulonglong)uStack_f0,1);
          arg1 = uStack_d8;
          arg0 = uStack_d0;
        }
        break;
      case 2:
        *(undefined1 *)uStack_f0 = 0;
        arg1 = uStack_e8;
        arg0 = uStack_f0;
        break;
      case 3:
        arg1 = uStack_f0;
        arg0 = uStack_e8;
        break;
      default:
        goto LAB_1419c04b0;
      }
      if (arg1 != (byte **)0x0) {
        pub_1406abac0((byte *)arg0,(ulonglong)arg1,1);
      }
    }
LAB_1419c04b0:
    pdb_141809010(&uStack_240,auStack_1b8);
    pbVar15 = pbStack_100;
    uVar16 = uStack_110;
    pbVar10 = pbStack_120;
    if (CONCAT44(uStack_23c,uStack_240) != -0x7ffffffffffffffc) {
      auStack_c8._0_8_ = uStack_210;
                    /* WARNING: Subroutine does not return */
      pdb_142dc8170(&UNK_143027c00,0x2b,&uStack_f8,&UNK_143027c70,&UNK_1430281b0);
    }
  }
  if (*(ulonglong *)(pbVar15 + 0x10) != 0) {
    pub_1406abac0(*(byte **)(pbVar15 + 0x18),*(ulonglong *)(pbVar15 + 0x10),1);
  }
  if (uVar16 == uStack_108) {
LAB_1419c02d0:
    if (lStack_168 != 0) {
      pub_1406abac0(pbVar10,lStack_168 * 0x30,8);
    }
LAB_1419c02f5:
    uStack_f8 = pbVar13;
                    /* WARNING: Subroutine does not return */
    pdb_142dc8170(&UNK_143360f20,0x2b,&uStack_f8,&UNK_143360f50,&UNK_143360de8);
  }
  goto LAB_1419c037d;
}

