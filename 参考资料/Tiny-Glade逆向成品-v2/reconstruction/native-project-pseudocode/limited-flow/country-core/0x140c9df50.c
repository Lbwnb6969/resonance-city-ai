// VA 0x140c9df50, PDB extent 2026 bytes
// country_core::systems::audio::timberframe_audio::timberframe_audio
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/audio/timberframe_audio.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x000143078137) overlaps instruction at (ram,0x000143078136)
    */
/* WARNING: Removing unreachable block (ram,0x000143078144) */
/* WARNING: Removing unreachable block (ram,0x0001430780c5) */
/* WARNING: Removing unreachable block (ram,0x0001430780c9) */
/* WARNING: Removing unreachable block (ram,0x0001430780fa) */
/* WARNING: Removing unreachable block (ram,0x0001430780cb) */
/* WARNING: Removing unreachable block (ram,0x0001430780d1) */
/* WARNING: Removing unreachable block (ram,0x00014307812a) */
/* WARNING: Removing unreachable block (ram,0x0001430780c8) */
/* WARNING: Removing unreachable block (ram,0x000143078128) */
/* WARNING: Removing unreachable block (ram,0x0001430780ad) */
/* WARNING: Removing unreachable block (ram,0x0001430780b9) */
/* WARNING: Removing unreachable block (ram,0x0001430780bb) */
/* WARNING: Removing unreachable block (ram,0x00014307800a) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: country_core::systems::audio::timberframe_audio::timberframe_audio
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/audio/timberframe_audio.rs
   Extent: 2026 */

void pdb_140c9df50(undefined8 *param_1,longlong *param_2,undefined8 *param_3,undefined8 *param_4,
                  undefined8 *param_5,undefined8 *param_6)

{
  undefined1 uVar1;
  undefined4 uVar2;
  longlong lVar3;
  char *pcVar4;
  char *pcVar5;
  int *piVar6;
  int *piVar7;
  undefined4 uVar8;
  char cVar9;
  byte bVar10;
  byte bVar14;
  int *piVar11;
  byte *pbVar12;
  undefined8 uVar13;
  undefined4 *puVar15;
  ulonglong uVar16;
  undefined2 uVar17;
  int *piVar18;
  undefined *puVar19;
  ulonglong uVar20;
  byte *pbVar22;
  int *piVar23;
  byte *pbVar24;
  char *pcVar25;
  char *pcVar26;
  ulonglong *puVar27;
  ulonglong *puVar28;
  longlong lVar29;
  undefined4 *puVar30;
  undefined4 *puVar31;
  char *pcVar32;
  int *piVar33;
  char *pcVar34;
  char *pcVar35;
  char *pcVar36;
  byte *pbVar37;
  byte *pbVar38;
  char *pcVar39;
  longlong unaff_GS_OFFSET;
  bool bVar40;
  bool bVar41;
  bool bVar42;
  float extraout_XMM0_Da;
  float extraout_XMM0_Da_00;
  float extraout_XMM0_Da_01;
  float fVar43;
  float fVar44;
  undefined4 unaff_XMM7_Da;
  float unaff_XMM8_Da;
  undefined4 unaff_XMM9_Da;
  float unaff_XMM10_Da;
  undefined4 unaff_XMM11_Da;
  float unaff_XMM12_Da;
  undefined8 uStack_148;
  undefined4 uStack_140;
  ulonglong uStack_138;
  ulonglong uStack_130;
  ulonglong uStack_128;
  ulonglong uStack_120;
  undefined4 *puStack_118;
  undefined8 uStack_110;
  undefined4 uStack_108;
  undefined8 uStack_100;
  undefined4 uStack_f8;
  undefined8 uStack_f0;
  undefined4 uStack_e8;
  longlong *plStack_e0;
  byte bVar21;
  
  lVar3 = param_4[1];
  uVar20 = *(ulonglong *)*param_4;
  pcVar32 = (char *)0x0;
  pcVar25 = (char *)(uVar20 - *(ulonglong *)(lVar3 + 0x18));
  if (uVar20 < *(ulonglong *)(lVar3 + 0x18)) {
    pcVar25 = pcVar32;
  }
  lVar29 = (longlong)pcVar25 * 0x38 + *(longlong *)(lVar3 + 8);
  pcVar4 = *(char **)(lVar3 + 0x10);
  pcVar35 = pcVar4 + -(longlong)pcVar25;
  if (pcVar4 < pcVar25) {
    pcVar35 = pcVar32;
  }
  if (pcVar4 < pcVar25) {
    lVar29 = 8;
  }
  pcVar39 = (char *)(lVar29 + -0x38 + (longlong)pcVar35 * 0x38);
  if (pcVar4 <= pcVar25) {
    pcVar39 = pcVar32;
  }
  pcVar34 = (char *)(uVar20 - *(ulonglong *)(lVar3 + 0x38));
  if (uVar20 < *(ulonglong *)(lVar3 + 0x38)) {
    pcVar34 = pcVar32;
  }
  pcVar5 = *(char **)(lVar3 + 0x30);
  lVar29 = (longlong)pcVar34 * 0x38 + *(longlong *)(lVar3 + 0x28);
  pcVar36 = pcVar5 + -(longlong)pcVar34;
  if (pcVar5 < pcVar34) {
    pcVar36 = pcVar32;
  }
  if (pcVar5 < pcVar34) {
    lVar29 = 8;
  }
  pcVar26 = (char *)(lVar29 + -0x38 + (longlong)pcVar36 * 0x38);
  if (pcVar5 <= pcVar34) {
    pcVar26 = pcVar39;
  }
  pcVar35 = pcVar36 + (longlong)pcVar35;
  if (pcVar25 < pcVar4 || pcVar34 < pcVar5) {
    pcVar35 = pcVar32;
  }
  *(ulonglong *)*param_4 = *(longlong *)(lVar3 + 0x40) - (longlong)pcVar35;
  plStack_e0 = param_2;
  if (pcVar25 < pcVar4 || pcVar34 < pcVar5) {
    if (*pcVar26 == '\x01') {
      cVar9 = pcVar26[1];
      if (cVar9 == '\x02') {
        pcVar25 = "";
        if (*(char *)*param_5 != '\0') {
          pcVar25 = (char *)*param_5 + 4;
        }
        uStack_140 = *(undefined4 *)(pcVar25 + 8);
        uStack_148 = *(undefined8 *)pcVar25;
        pdb_140abb950(*param_1,&UNK_143077618,0x25,&uStack_148);
        cVar9 = pcVar26[1];
      }
      if (cVar9 == '\x01') {
        pcVar25 = "";
        if (*(char *)*param_5 != '\0') {
          pcVar25 = (char *)*param_5 + 4;
        }
        uStack_140 = *(undefined4 *)(pcVar25 + 8);
        uStack_148 = *(undefined8 *)pcVar25;
        pdb_140abb950(*param_1,&UNK_14307763d,0x22,&uStack_148);
      }
    }
    if ((pcVar26[0x18] == '\x01') && (pcVar26[0x19] != '\0')) {
      pcVar25 = "";
      if (*(char *)*param_5 != '\0') {
        pcVar25 = (char *)*param_5 + 4;
      }
      uStack_140 = *(undefined4 *)(pcVar25 + 8);
      uStack_148 = *(undefined8 *)pcVar25;
      pdb_140abb950(*param_1,&UNK_14307765f,0x1f,&uStack_148);
    }
  }
  puVar28 = (ulonglong *)*param_3;
  lVar3 = param_3[1];
  uVar20 = *puVar28;
  piVar33 = (int *)0x0;
  piVar11 = (int *)(uVar20 - *(ulonglong *)(lVar3 + 0x18));
  if (uVar20 < *(ulonglong *)(lVar3 + 0x18)) {
    piVar11 = piVar33;
  }
  piVar18 = (int *)(uVar20 - *(ulonglong *)(lVar3 + 0x38));
  if (uVar20 < *(ulonglong *)(lVar3 + 0x38)) {
    piVar18 = piVar33;
  }
  pbVar37 = (byte *)((longlong)piVar11 * 0x20 + *(longlong *)(lVar3 + 8));
  piVar6 = *(int **)(lVar3 + 0x10);
  piVar23 = (int *)((longlong)piVar6 - (longlong)piVar11);
  if (piVar6 < piVar11) {
    piVar23 = piVar33;
  }
  piVar7 = *(int **)(lVar3 + 0x30);
  if (piVar6 < piVar11) {
    pbVar37 = (byte *)0x8;
  }
  pbVar12 = (byte *)((longlong)piVar18 * 0x20 + *(longlong *)(lVar3 + 0x28));
  if (piVar7 < piVar18) {
    pbVar12 = (byte *)0x8;
  }
  puVar19 = (undefined *)0x0;
  uStack_120 = 0;
  piVar11 = (int *)((longlong)piVar7 - (longlong)piVar18);
  if (piVar7 < piVar18) {
    piVar11 = piVar33;
  }
  *puVar28 = (*(longlong *)(lVar3 + 0x40) - (longlong)piVar11) - (longlong)piVar23;
  uVar8 = _DAT_143059590;
  uVar2 = _DAT_142e37844;
  fVar44 = _DAT_142e36f28;
  pbVar24 = pbVar37 + (longlong)piVar23 * 0x20;
  pbVar22 = pbVar12 + (longlong)piVar11 * 0x20;
  puVar30 = (undefined4 *)*param_1;
  puVar15 = (undefined4 *)*param_6;
  uStack_138 = 0;
  uStack_130 = 0;
  uStack_128 = 0;
  puStack_118 = puVar15;
LAB_140c9e246:
  do {
    if ((pbVar37 == (byte *)0x0) || (pbVar37 == pbVar24)) {
      if ((pbVar12 == (byte *)0x0) || (pbVar12 == pbVar22)) {
        uVar2 = *(undefined4 *)((longlong)plStack_e0 + 0x1c);
        puVar30 = (undefined4 *)plStack_e0[2];
        *puVar30 = uVar2;
        lVar3 = *plStack_e0;
        if ((uStack_120 & 1) == 0) {
          pdb_140a87f70(lVar3 + 0x70);
          *puVar30 = uVar2;
          if ((uStack_128 & 1) == 0) goto LAB_140c9e4ff;
LAB_140c9e611:
          uStack_140 = uStack_108;
          uStack_148 = uStack_110;
          pdb_140a87e10(lVar3 + 0x38);
          uVar20 = *(ulonglong *)(lVar3 + 0x48);
          uVar16 = *(ulonglong *)(lVar3 + 0x60);
          if (uVar20 <= uVar16) goto LAB_140c9e72d;
          pdb_140a8e190(uVar16 * 0x30 + *(longlong *)(lVar3 + 0x40),&uStack_148);
          uVar20 = *(ulonglong *)(lVar3 + 0x48);
          uVar16 = *(ulonglong *)(lVar3 + 0x60);
          if (uVar20 <= uVar16) goto LAB_140c9e72d;
          pdb_140a8e730(uVar16 * 0x30 + *(longlong *)(lVar3 + 0x40),&UNK_143077730,0xd,
                        unaff_XMM10_Da);
          uVar20 = *(ulonglong *)(lVar3 + 0x48);
          uVar16 = *(ulonglong *)(lVar3 + 0x60);
          if (uVar20 <= uVar16) goto LAB_140c9e72d;
          pdb_140a8e730(uVar16 * 0x30 + *(longlong *)(lVar3 + 0x40),&UNK_14307773d,0xc,unaff_XMM9_Da
                       );
          *puVar30 = uVar2;
        }
        else {
          uStack_140 = uStack_f8;
          uStack_148 = uStack_100;
          pdb_140a87e10();
          uVar20 = *(ulonglong *)(lVar3 + 0x80);
          uVar16 = *(ulonglong *)(lVar3 + 0x98);
          if (uVar20 <= uVar16) goto LAB_140c9e72d;
          pdb_140a8e190(uVar16 * 0x30 + *(longlong *)(lVar3 + 0x78),&uStack_148);
          uVar20 = *(ulonglong *)(lVar3 + 0x80);
          uVar16 = *(ulonglong *)(lVar3 + 0x98);
          if (uVar20 <= uVar16) goto LAB_140c9e72d;
          pdb_140a8e730(uVar16 * 0x30 + *(longlong *)(lVar3 + 0x78),&UNK_143077730,0xd,
                        unaff_XMM12_Da);
          uVar20 = *(ulonglong *)(lVar3 + 0x80);
          uVar16 = *(ulonglong *)(lVar3 + 0x98);
          if (uVar20 <= uVar16) goto LAB_140c9e72d;
          pdb_140a8e730(uVar16 * 0x30 + *(longlong *)(lVar3 + 0x78),&UNK_14307773d,0xc,
                        unaff_XMM11_Da);
          *puVar30 = uVar2;
          if ((uStack_128 & 1) != 0) goto LAB_140c9e611;
LAB_140c9e4ff:
          pdb_140a87f70();
          *puVar30 = uVar2;
        }
        if ((uStack_130 & 1) == 0) {
          pdb_140a87f70(lVar3);
          return;
        }
        uStack_148 = uStack_f0;
        uStack_140 = uStack_e8;
        pdb_140a87e10(lVar3);
        uVar20 = *(ulonglong *)(lVar3 + 0x10);
        uVar16 = *(ulonglong *)(lVar3 + 0x28);
        if (uVar16 < uVar20) {
          pdb_140a8e190(uVar16 * 0x30 + *(longlong *)(lVar3 + 8),&uStack_148);
          uVar20 = *(ulonglong *)(lVar3 + 0x10);
          uVar16 = *(ulonglong *)(lVar3 + 0x28);
          if (uVar16 < uVar20) {
            pdb_140a8e730(uVar16 * 0x30 + *(longlong *)(lVar3 + 8),&UNK_143077730,0xd,unaff_XMM8_Da)
            ;
            uVar20 = *(ulonglong *)(lVar3 + 0x10);
            uVar16 = *(ulonglong *)(lVar3 + 0x28);
            if (uVar16 < uVar20) {
              pdb_140a8e730(uVar16 * 0x30 + *(longlong *)(lVar3 + 8),&UNK_14307773d,0xc,
                            unaff_XMM7_Da);
              uVar20 = *(ulonglong *)(lVar3 + 0x10);
              uVar16 = *(ulonglong *)(lVar3 + 0x28);
              if (uVar16 < uVar20) {
                if ((uStack_138 & 1) == 0) {
                  fVar44 = 0.0;
                }
                pdb_140a8e730(uVar16 * 0x30 + *(longlong *)(lVar3 + 8),&UNK_143077749,0xc,fVar44);
                return;
              }
            }
          }
        }
LAB_140c9e72d:
                    /* WARNING: Subroutine does not return */
        pdb_142dc81f2(uVar16,uVar20,&UNK_143043a80);
      }
      pbVar37 = (byte *)0x0;
      pbVar38 = pbVar12;
      pbVar12 = pbVar12 + 0x20;
    }
    else {
      pbVar38 = pbVar37;
      pbVar37 = pbVar37 + 0x20;
    }
    *puVar28 = *puVar28 + 1;
    bVar10 = (char)*(undefined4 *)(&UNK_143077f88 + (ulonglong)*pbVar38 * 4) + 0x88;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*pbVar38) {
    case 0:
      uStack_108 = *(undefined4 *)(pbVar38 + 0x10);
      uStack_110 = *(undefined8 *)(pbVar38 + 8);
      uVar13 = pdb_140de8220(0,uVar2,*(float *)(pbVar38 + 4) / (float)puStack_118[0x16]);
      fVar43 = 0.0;
      if (0.0 <= extraout_XMM0_Da) {
        fVar43 = extraout_XMM0_Da;
      }
      unaff_XMM10_Da = fVar44;
      if (fVar43 <= fVar44) {
        unaff_XMM10_Da = fVar43;
      }
      unaff_XMM9_Da = *(undefined4 *)(pbVar38 + 0x14);
      uStack_128 = CONCAT71((int7)((ulonglong)uVar13 >> 8),1);
      goto LAB_140c9e246;
    case 1:
      uStack_f8 = *(undefined4 *)(pbVar38 + 0x10);
      uStack_100 = *(undefined8 *)(pbVar38 + 8);
      uVar13 = pdb_140de8220(0,uVar2,*(float *)(pbVar38 + 4) / (float)puStack_118[0x16]);
      fVar43 = 0.0;
      if (0.0 <= extraout_XMM0_Da_01) {
        fVar43 = extraout_XMM0_Da_01;
      }
      unaff_XMM12_Da = fVar44;
      if (fVar43 <= fVar44) {
        unaff_XMM12_Da = fVar43;
      }
      unaff_XMM11_Da = *(undefined4 *)(pbVar38 + 0x14);
      uStack_120 = CONCAT71((int7)((ulonglong)uVar13 >> 8),1);
      goto LAB_140c9e246;
    case 2:
      uStack_140 = *(undefined4 *)(pbVar38 + 0x10);
      uStack_148 = *(undefined8 *)(pbVar38 + 8);
      piVar33 = (int *)0x1f;
      puVar19 = &UNK_1430776b9;
      break;
    case 3:
      goto code_r0x000140c9e302;
    case 4:
      uStack_140 = *(undefined4 *)(pbVar38 + 0x10);
      uStack_148 = *(undefined8 *)(pbVar38 + 8);
      piVar33 = (int *)0x1c;
      puVar19 = &UNK_1430776d8;
      break;
    case 5:
      uStack_140 = *(undefined4 *)(pbVar38 + 0x10);
      uStack_148 = *(undefined8 *)(pbVar38 + 8);
      piVar33 = (int *)0x1f;
      puVar19 = &UNK_14307765f;
      break;
    case 6:
      uStack_140 = *(undefined4 *)(pbVar38 + 0x10);
      uStack_148 = *(undefined8 *)(pbVar38 + 8);
      piVar33 = (int *)0x1a;
      puVar19 = &UNK_1430776f4;
      break;
    case 7:
      uStack_140 = *(undefined4 *)(pbVar38 + 0x10);
      uStack_148 = *(undefined8 *)(pbVar38 + 8);
      piVar33 = (int *)0x22;
      puVar19 = &UNK_14307770e;
      break;
    case 8:
    case 9:
      bVar10 = (char)*(undefined4 *)(&UNK_143077f88 + (ulonglong)*pbVar38 * 4) - 0x15;
    default:
      goto code_r0x000143077f87;
    }
    puVar15 = puVar30;
    pdb_140abb950();
  } while( true );
code_r0x000140c9e302:
  uStack_138 = (ulonglong)pbVar38[1];
  uStack_e8 = *(undefined4 *)(pbVar38 + 0x10);
  uStack_f0 = *(undefined8 *)(pbVar38 + 8);
  uVar13 = pdb_140de8220(0,uVar8,*(undefined4 *)(pbVar38 + 4));
  fVar43 = 0.0;
  if (0.0 <= extraout_XMM0_Da_00) {
    fVar43 = extraout_XMM0_Da_00;
  }
  unaff_XMM8_Da = fVar44;
  if (fVar43 <= fVar44) {
    unaff_XMM8_Da = fVar43;
  }
  unaff_XMM7_Da = *(undefined4 *)(pbVar38 + 0x14);
  uStack_130 = CONCAT71((int7)((ulonglong)uVar13 >> 8),1);
  goto LAB_140c9e246;
code_r0x000143077f87:
  bVar40 = CARRY1(bRam00000001360541f0,bVar10);
  bRam00000001360541f0 = bRam00000001360541f0 + bVar10;
  bVar42 = bRam00000001360541f0 == 0;
  pbVar37 = (byte *)((ulonglong)puVar19 & 0xffffffff);
  if ((POPCOUNT(bRam00000001360541f0) & 1U) != 0) {
    return;
  }
  bVar21 = (byte)((ulonglong)puVar19 >> 8);
  uVar17 = SUB82(puVar19,0);
  bVar10 = (byte)pbVar37;
  bVar41 = false;
  puVar31 = puVar30;
  if (bVar40) {
    uVar20 = (longlong)*(int *)((longlong)puVar28 + 100) * 0x632e7865;
    pbVar24 = (byte *)(uVar20 & 0xffffffff);
    bVar41 = (longlong)(int)uVar20 != uVar20;
    puVar27 = puVar28;
    bVar14 = bRam00000001360541f0;
    if (bVar41) goto code_r0x000143078067;
    if (!bVar42) {
      *pbVar37 = *pbVar37 + bVar10;
      *pbVar37 = *pbVar37 + bVar10;
      *pbVar37 = *pbVar37 + bVar10;
      if (puVar15 != (undefined4 *)0x1 && *pbVar37 != 0) {
        halt_baddata();
      }
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  while( true ) {
    bVar14 = (byte)((ulonglong)pbVar37 >> 8);
    if (!bVar41 && !bVar42) {
      if (bVar41) {
        pcVar25 = (char *)((longlong)pbVar37 * 5 + 7);
        *pcVar25 = *pcVar25 + bVar21;
        *piVar33 = *piVar33 + (int)puVar19;
        *pbVar37 = *pbVar37 + bVar10;
        *pbVar37 = *pbVar37 + bVar10;
        *pbVar37 = *pbVar37 + bVar10;
        *pbVar37 = *pbVar37 + bVar10;
        *pbVar22 = *pbVar22 + bVar14;
        *pbVar37 = *pbVar37 + bVar10;
        *pbVar37 = *pbVar37 + (char)((ulonglong)puVar15 >> 8);
        *pbVar37 = *pbVar37 + bVar10;
        return;
      }
      uVar1 = in(uVar17);
      *(undefined1 *)puVar31 = uVar1;
      out((int)*puVar28,uVar17);
      if (bVar42) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    *pbVar37 = *pbVar37 + bVar10;
    bVar40 = CARRY1(*pbVar37,bVar10);
    *pbVar37 = *pbVar37 + bVar10;
    if (*pbVar37 != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if (!bVar40) break;
    *(byte *)((longlong)puVar15 + 0x62) = *(byte *)((longlong)puVar15 + 0x62) & bVar21;
    puVar30 = (undefined4 *)((longlong)puVar31 + -1);
    uVar1 = in(uVar17);
    *(undefined1 *)puVar31 = uVar1;
    pbVar12 = pbVar22 + unaff_GS_OFFSET + 0x61;
    bVar41 = false;
    *pbVar12 = *pbVar12 & bVar14;
    bVar14 = *pbVar12;
    bVar42 = *pbVar12 == 0;
    puVar27 = puVar28;
code_r0x000143078067:
    pbVar24 = (byte *)(ulonglong)(uint)puVar15[0x1d];
    if (-1 < (char)bVar14) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    puVar28 = (ulonglong *)((longlong)puVar27 + -4);
    out((int)*puVar27,uVar17);
    puVar31 = puVar30;
  }
  if (!bVar40) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (bVar40 || *pbVar37 == 0) {
    *pbVar37 = *pbVar37 + bVar10;
    *pbVar37 = *pbVar37 + bVar10;
    *pbVar37 = *pbVar37 + bVar10;
    *pbVar37 = *pbVar37 + bVar10;
    pbVar22 = (byte *)CONCAT62((int6)((ulonglong)pbVar22 >> 0x10),
                               CONCAT11((char)((ulonglong)pbVar22 >> 8) + (char)puVar19,
                                        (char)pbVar22));
  }
  else if (!bVar40) {
    pbVar12 = pbVar37 + 0x61;
    *pbVar12 = *pbVar12 & bVar21;
    if (*pbVar12 != 0) {
      pbVar37 = (byte *)((longlong)puVar31 + (longlong)pbVar24 * 2 + 0x20);
      *pbVar37 = *pbVar37 & bVar21;
      if (*pbVar37 == 0) {
        uVar1 = in(uVar17);
        *(undefined1 *)puVar31 = uVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    *pbVar37 = *pbVar37 + bVar10;
    *pbVar37 = *pbVar37 + bVar10;
    *pbVar37 = *pbVar37 + bVar10;
    pbVar37 = (byte *)CONCAT71((int7)((ulonglong)pbVar37 >> 8),pbVar22[(ulonglong)puVar19 & 0xff]);
  }
  bVar10 = (byte)pbVar37 | *pbVar37;
  pbVar37 = (byte *)CONCAT71((int7)((ulonglong)pbVar37 >> 8),bVar10);
  *pbVar22 = *pbVar22 + (char)puVar15;
  *pbVar37 = *pbVar37 + bVar10;
  *pbVar37 = *pbVar37 + bVar21;
  if (puVar15 == (undefined4 *)0x1 || *pbVar37 == 0) {
    *(int *)pbVar37 = *(int *)pbVar37 + (int)pbVar37;
    bVar14 = *pbVar37;
    *pbVar37 = *pbVar37 + bVar10;
    *pbVar37 = (*pbVar37 - bVar10) - CARRY1(bVar14,bVar10);
    *pbVar37 = *pbVar37 + bVar10;
    *pbVar37 = *pbVar37 + bVar10;
    *pbVar37 = *pbVar37 + bVar10;
    *pbVar37 = *pbVar37 | bVar10;
    *pbVar37 = *pbVar37 + bVar10;
    *pbVar37 = *pbVar37 + bVar10;
    bVar14 = *pbVar37;
    *pbVar37 = *pbVar37 + bVar10;
    uVar2 = in(uVar17);
    *puVar31 = uVar2;
    if (!SCARRY1(bVar14,bVar10)) {
      *(int *)pbVar37 = *(int *)pbVar37 + (int)pbVar37;
      *pbVar37 = *pbVar37 + bVar10;
      pbVar37[(longlong)puVar28 * 2 + 0x40] = pbVar37[(longlong)puVar28 * 2 + 0x40] - 1;
      *pbVar37 = *pbVar37 + bVar10;
      pbVar37[-0x2c] = pbVar37[-0x2c] + bVar21;
      return;
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

