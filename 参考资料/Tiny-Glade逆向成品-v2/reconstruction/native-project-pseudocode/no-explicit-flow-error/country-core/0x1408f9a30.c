// VA 0x1408f9a30, PDB extent 1303 bytes
// country_core::startup::load_glade_tod_and_weather::load_glade_tod_and_weather
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/startup/load_glade_tod_and_weather.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::startup::load_glade_tod_and_weather::load_glade_tod_and_weather
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/startup/load_glade_tod_and_weather.rs
   Extent: 1303 */

void pdb_1408f9a30(longlong *param_1,longlong *param_2,longlong *param_3,longlong *param_4)

{
  undefined4 uVar1;
  longlong lVar2;
  ulonglong *puVar3;
  undefined4 *puVar4;
  undefined8 *puVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined8 uVar16;
  longlong lVar17;
  uint *puVar18;
  undefined4 uVar19;
  uint uVar20;
  uint uVar21;
  ulonglong uStack_b8;
  byte *pbStack_b0;
  undefined8 uStack_a8;
  byte *pbStack_a0;
  uint *puStack_98;
  uint *puStack_90;
  ulonglong uStack_88;
  uint *puStack_78;
  uint *puStack_70;
  ulonglong uStack_68;
  ulonglong uStack_58;
  uint *puStack_50;
  undefined8 uStack_48;
  
  uStack_48 = 0xfffffffffffffffe;
  lVar2 = *param_4;
  lVar17 = (ulonglong)*(byte *)(lVar2 + 0x98) * 8;
  pdb_140f3e9e0(&puStack_98,&UNK_1430450c6,0xc,*(undefined8 *)(&UNK_14301df28 + lVar17),
                *(undefined8 *)(&UNK_14301df00 + lVar17));
  puStack_50 = puStack_90;
  pdb_140f3e9e0(&puStack_78,puStack_90,uStack_88,&UNK_14301d7c8,8);
  pdb_1416432f0(&uStack_b8,&puStack_78);
  if (SBORROW8(0,uStack_b8)) {
    pdb_140f36c40(&pbStack_b0);
    if (puStack_98 != (uint *)0x0) {
      pub_1406abac0((byte *)puStack_50,(ulonglong)puStack_98,1);
    }
    pdb_141648880(&puStack_78);
    puStack_50 = puStack_70;
    pdb_14164f9b0(&puStack_98,puStack_70,uStack_68);
    fVar15 = _UNK_14301d4a4;
    fVar14 = _DAT_14301d4a0;
    fVar13 = _UNK_14301d49c;
    fVar12 = _UNK_14301d498;
    fVar11 = _UNK_14301d494;
    fVar10 = _DAT_14301d490;
    uVar9 = _UNK_142e377ec;
    uVar8 = _UNK_142e377e8;
    uVar7 = _UNK_142e377e4;
    uVar6 = _DAT_142e377e0;
    if (SBORROW8(0,(longlong)puStack_98)) {
      puStack_98 = puStack_90;
                    /* WARNING: Subroutine does not return */
      pdb_142dc8170(&UNK_14301dc40,0x2b,&puStack_98,&UNK_14301dc20,&UNK_14301d7e8);
    }
    if (uStack_88 != 0) {
      puVar18 = puStack_90;
      do {
        *puVar18 = -(uint)(fVar10 < (float)(*puVar18 & uVar6)) & *puVar18;
        puVar18[1] = -(uint)(fVar11 < (float)(puVar18[1] & uVar7)) & puVar18[1];
        puVar18[2] = -(uint)(fVar12 < (float)(puVar18[2] & uVar8)) & puVar18[2];
        puVar18[3] = -(uint)(fVar13 < (float)(puVar18[3] & uVar9)) & puVar18[3];
        uVar20 = (uint)*(undefined8 *)(puVar18 + 4);
        uVar21 = (uint)((ulonglong)*(undefined8 *)(puVar18 + 4) >> 0x20);
        *(ulonglong *)(puVar18 + 4) =
             CONCAT44(-(uint)(fVar15 < (float)(uVar21 & uVar7)) & uVar21,
                      -(uint)(fVar14 < (float)(uVar20 & uVar6)) & uVar20);
        puVar18 = puVar18 + 0x18;
      } while (puVar18 != puStack_90 + uStack_88 * 0x18);
    }
    *(undefined4 *)param_1[2] = *(undefined4 *)((longlong)param_1 + 0x1c);
    puVar3 = (ulonglong *)*param_1;
    if (*puVar3 != 0) {
      pub_1406abac0((byte *)puVar3[1],*puVar3 * 0x60,8);
    }
    *puVar3 = (ulonglong)puStack_98;
    puVar3[1] = (ulonglong)puStack_90;
    puVar3[2] = uStack_88;
  }
  else {
    uStack_58 = uStack_b8;
    pbStack_a0 = pbStack_b0;
    pdb_14164f9b0(&puStack_78,pbStack_b0,uStack_a8);
    fVar15 = _UNK_14301d4a4;
    fVar14 = _DAT_14301d4a0;
    fVar13 = _UNK_14301d49c;
    fVar12 = _UNK_14301d498;
    fVar11 = _UNK_14301d494;
    fVar10 = _DAT_14301d490;
    uVar9 = _UNK_142e377ec;
    uVar8 = _UNK_142e377e8;
    uVar7 = _UNK_142e377e4;
    uVar6 = _DAT_142e377e0;
    if (SBORROW8(0,(longlong)puStack_78)) {
      puStack_78 = puStack_70;
                    /* WARNING: Subroutine does not return */
      pdb_142dc8170(&UNK_14301dc40,0x2b,&puStack_78,&UNK_14301dc20,&UNK_14301d7d0);
    }
    if (uStack_68 != 0) {
      puVar18 = puStack_70;
      do {
        *puVar18 = -(uint)(fVar10 < (float)(*puVar18 & uVar6)) & *puVar18;
        puVar18[1] = -(uint)(fVar11 < (float)(puVar18[1] & uVar7)) & puVar18[1];
        puVar18[2] = -(uint)(fVar12 < (float)(puVar18[2] & uVar8)) & puVar18[2];
        puVar18[3] = -(uint)(fVar13 < (float)(puVar18[3] & uVar9)) & puVar18[3];
        uVar20 = (uint)*(undefined8 *)(puVar18 + 4);
        uVar21 = (uint)((ulonglong)*(undefined8 *)(puVar18 + 4) >> 0x20);
        *(ulonglong *)(puVar18 + 4) =
             CONCAT44(-(uint)(fVar15 < (float)(uVar21 & uVar7)) & uVar21,
                      -(uint)(fVar14 < (float)(uVar20 & uVar6)) & uVar20);
        puVar18 = puVar18 + 0x18;
      } while (puVar18 != puStack_70 + uStack_68 * 0x18);
    }
    *(undefined4 *)param_1[2] = *(undefined4 *)((longlong)param_1 + 0x1c);
    puVar3 = (ulonglong *)*param_1;
    if (*puVar3 != 0) {
      pub_1406abac0((byte *)puVar3[1],*puVar3 * 0x60,8);
    }
    *puVar3 = (ulonglong)puStack_78;
    puVar3[1] = (ulonglong)puStack_70;
    puVar3[2] = uStack_68;
    if (uStack_58 != 0) {
      pub_1406abac0(pbStack_a0,uStack_58,1);
    }
    puStack_78 = puStack_98;
    if (SBORROW8(0,uStack_b8)) {
      pdb_140f36c40(&pbStack_b0);
      puStack_78 = puStack_98;
    }
  }
  if (puStack_78 != (uint *)0x0) {
    pub_1406abac0((byte *)puStack_50,(ulonglong)puStack_78,1);
  }
  uVar1 = *(undefined4 *)((longlong)param_2 + 0x1c);
  puVar4 = (undefined4 *)param_2[2];
  *puVar4 = uVar1;
  uVar16 = _UNK_14301d4b8;
  puVar5 = (undefined8 *)*param_2;
  *puVar5 = _DAT_14301d4b0;
  puVar5[1] = uVar16;
  *(undefined4 *)(puVar5 + 2) = 0;
  *(undefined2 *)((longlong)puVar5 + 0x14) = 0;
  uVar19 = *(undefined4 *)(*param_3 + 0x10);
  *puVar4 = uVar1;
  *(undefined4 *)((longlong)puVar5 + 0xc) = uVar19;
  uVar19 = _DAT_142e36f28;
  if (*(char *)(lVar2 + 0x98) != '\x04') {
    uVar19 = 0;
  }
  *puVar4 = uVar1;
  *(undefined4 *)(puVar5 + 2) = uVar19;
  return;
}

