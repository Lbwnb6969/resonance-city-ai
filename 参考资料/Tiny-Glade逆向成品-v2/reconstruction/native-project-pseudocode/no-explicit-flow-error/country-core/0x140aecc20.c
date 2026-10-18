// VA 0x140aecc20, PDB extent 1133 bytes
// country_core::systems::time_of_day::remap_hour_to_fmod_hour
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/time_of_day.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: country_core::systems::time_of_day::remap_hour_to_fmod_hour
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/time_of_day.rs
   Extent: 1133 */

undefined8 pdb_140aecc20(undefined8 param_1,char param_2)

{
  float *pfVar1;
  byte *pbVar2;
  float fVar3;
  float fVar4;
  code *pcVar5;
  float fVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  byte *pbVar9;
  float *pfVar10;
  byte *pbVar11;
  float *pfVar12;
  byte *pbVar13;
  byte *pbVar14;
  byte *pbVar15;
  float *pfVar16;
  bool bVar17;
  float *pfVar18;
  float fVar19;
  byte *pbStack_a0;
  float *pfStack_98;
  byte *pbStack_90;
  ulonglong uStack_88;
  byte *pbStack_80;
  ulonglong uStack_78;
  undefined8 uStack_70;
  
  fVar19 = (float)param_1;
  uStack_70 = 0xfffffffffffffffe;
  pdb_14007ee60();
  pfVar12 = (float *)pub_1406abab0(0x18,4);
  uVar7 = _UNK_14304fd28;
  if (pfVar12 == (float *)0x0) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc7e11(4,0x18);
  }
  *(undefined8 *)pfVar12 = _DAT_14304fd20;
  *(undefined8 *)(pfVar12 + 2) = uVar7;
  *(undefined8 *)(pfVar12 + 4) = _DAT_14304fd30;
  pbStack_a0 = (byte *)0x6;
  pbStack_90 = (byte *)0x6;
  pfStack_98 = pfVar12;
  pdb_14007ee60();
  pfVar16 = (float *)0x4;
  pbStack_80 = pub_1406abab0(0x18,4);
  uVar7 = _UNK_14304fd48;
  if (pbStack_80 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc7e11(4,0x18);
  }
  *(undefined8 *)pbStack_80 = _DAT_14304fd40;
  *(undefined8 *)(pbStack_80 + 8) = uVar7;
  *(undefined8 *)(pbStack_80 + 0x10) = _DAT_14304fd50;
  uStack_88 = 6;
  uStack_78 = 6;
  pbVar15 = (byte *)0x6;
  if (param_2 == '\0') {
LAB_140aece0d:
    pfVar1 = pfVar12 + (longlong)pbVar15;
    pbVar2 = pbStack_80 + uStack_78 * 4;
    bVar17 = true;
    pbVar13 = pbStack_80;
    while (pfVar12 != pfVar1) {
      pfVar18 = pfVar12 + 1;
      if (bVar17) {
        if (((pfVar18 == pfVar1) || (pbVar13 == pbVar2)) || (pbVar13 + 4 == pbVar2)) break;
        fVar3 = *pfVar12;
        pfVar10 = pfVar12 + 2;
        pbVar9 = pbVar13 + 8;
        pbVar11 = pbVar13 + 4;
        pbVar14 = pbVar13;
        pfVar16 = pfVar18;
      }
      else {
        if (pbVar13 == pbVar2) break;
        fVar3 = *pfVar16;
        pfVar10 = pfVar18;
        pbVar9 = pbVar13 + 4;
        pbVar11 = pbVar13;
        pbVar14 = pbVar15;
        pfVar16 = pfVar12;
      }
      pbVar15 = pbVar11;
      pbVar13 = pbVar9;
      pfVar12 = pfVar10;
      pbVar9 = pbVar15;
      if (fVar19 < fVar3) goto LAB_140aecea0;
      fVar4 = *pfVar16;
      while (pbVar9 = pbVar15, fVar4 <= fVar19) {
LAB_140aecea0:
        do {
          pfVar18 = pfVar12;
          pbVar15 = pbVar13;
          pbVar14 = pbVar9;
          if ((pfVar18 == pfVar1) || (pbVar15 == pbVar2)) goto LAB_140aecf0d;
          pfVar12 = pfVar18 + 1;
          pbVar13 = pbVar15 + 4;
          fVar3 = *pfVar16;
          pbVar9 = pbVar15;
          pfVar16 = pfVar18;
        } while (fVar19 < fVar3);
        fVar4 = *pfVar18;
      }
      bVar17 = false;
      param_1 = pdb_140de9fb0(fVar19,fVar3,fVar4,*(undefined4 *)pbVar14,*(undefined4 *)pbVar15);
    }
LAB_140aecf0d:
    if (uStack_88 != 0) {
      pub_1406abac0(pbStack_80,uStack_88 << 2,4);
    }
    if (pbStack_a0 != (byte *)0x0) {
      pub_1406abac0((byte *)pfStack_98,(longlong)pbStack_a0 << 2,4);
    }
    return param_1;
  }
  pdb_142d89720(&pbStack_a0);
  uVar8 = uStack_78;
  fVar3 = pfStack_98[3];
  fVar4 = pfStack_98[4];
  fVar6 = pfStack_98[5];
  pfStack_98[3] = pfStack_98[2];
  pfStack_98[4] = fVar3;
  pfStack_98[5] = fVar4;
  pfStack_98[6] = fVar6;
  pfStack_98[2] = 4.52;
  pbStack_90 = (byte *)0x7;
  if (uStack_78 < 2) {
    pdb_142dc7e73(2,uStack_78,&UNK_143050160);
  }
  else {
    if (uStack_78 == uStack_88) {
      pdb_142d89720(&uStack_88);
    }
    pfVar12 = (float *)(pbStack_80 + 8);
    if (uVar8 != 2) {
      pfVar16 = pfVar12;
      pub_142e32770(pbStack_80 + 0xc,pfVar12,uVar8 * 4 + -8);
    }
    pbVar15 = pbStack_90;
    *pfVar12 = 5.0;
    uStack_78 = uVar8 + 1;
    if (pbStack_90 < (byte *)0x3) {
      pdb_142dc7e73(3,pbStack_90,&UNK_143050178);
    }
    else {
      if (pbStack_90 == pbStack_a0) {
        pdb_142d89720(&pbStack_a0);
      }
      pfVar12 = pfStack_98 + 3;
      if (pbVar15 != (byte *)0x3) {
        pfVar16 = pfVar12;
        pub_142e32770(pfStack_98 + 4,pfVar12,(longlong)pbVar15 * 4 + -0xc);
      }
      uVar8 = uStack_78;
      *pfVar12 = 6.2;
      pbStack_90 = pbVar15 + 1;
      if (2 < uStack_78) {
        if (uStack_78 == uStack_88) {
          pdb_142d89720(&uStack_88);
        }
        pfVar12 = (float *)(pbStack_80 + 0xc);
        if (uVar8 != 3) {
          pfVar16 = pfVar12;
          pub_142e32770(pbStack_80 + 0x10,pfVar12,uVar8 * 4 + -0xc);
        }
        *pfVar12 = 9.0;
        uStack_78 = uVar8 + 1;
        pbVar15 = pbStack_90;
        pfVar12 = pfStack_98;
        goto LAB_140aece0d;
      }
      pdb_142dc7e73(3,uStack_78,&UNK_143050190);
    }
  }
                    /* WARNING: Does not return */
  pcVar5 = (code *)invalidInstructionException();
  (*pcVar5)();
}

