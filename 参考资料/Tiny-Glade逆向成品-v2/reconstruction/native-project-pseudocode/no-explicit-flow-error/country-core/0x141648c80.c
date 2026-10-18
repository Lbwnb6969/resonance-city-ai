// VA 0x141648c80, PDB extent 1382 bytes
// country_core::resources::rocky_terrain::RockyTerrainMesh::load
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/rocky_terrain.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: country_core::resources::rocky_terrain::RockyTerrainMesh::load
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/rocky_terrain.rs
   Extent: 1382 */

undefined8
pdb_141648c80(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  byte *pbVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  code *pcVar5;
  ulonglong uVar6;
  uint uVar7;
  ulonglong uVar8;
  byte *pbVar9;
  longlong lVar10;
  byte *pbVar11;
  longlong lVar12;
  undefined8 uVar13;
  ulonglong uVar14;
  ulonglong uStack_100;
  byte *pbStack_f8;
  undefined8 uStack_f0;
  ulonglong uStack_e8;
  byte *pbStack_e0;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  uint uStack_c0;
  undefined4 uStack_bc;
  ulonglong uStack_b8;
  byte *pbStack_b0;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  uint uStack_90;
  undefined4 uStack_8c;
  byte *pbStack_88;
  byte *pbStack_80;
  byte *pbStack_78;
  ulonglong uStack_70;
  byte *pbStack_68;
  ulonglong uStack_60;
  byte *pbStack_58;
  byte *pbStack_50;
  undefined8 uStack_48;
  
  uStack_48 = 0xfffffffffffffffe;
  pdb_140d929f0(&uStack_e8,param_1,param_2);
  pbStack_50 = pbStack_e0;
  pdb_140f55d10(&uStack_b8,pbStack_e0,CONCAT44(uStack_d4,uStack_d8));
  pdb_141706360(&uStack_100,&uStack_b8,&uStack_e8);
  if (uStack_e8 != 0) {
    pub_1406abac0(pbStack_50,uStack_e8,1);
  }
  if (SBORROW8(0,uStack_100)) {
    return 1;
  }
  pbStack_50 = (byte *)uStack_100;
  pbStack_78 = pbStack_f8;
  pdb_14164f7e0(&uStack_e8,pbStack_f8,uStack_f0);
  if (SBORROW8(0,uStack_e8)) {
    pdb_142dead00(pbStack_e0);
    if (pbStack_50 != (byte *)0x0) {
      pub_1406abac0(pbStack_78,(ulonglong)pbStack_50,1);
      return 1;
    }
    return 1;
  }
  uStack_98 = uStack_c8;
  uStack_94 = uStack_c4;
  uStack_90 = uStack_c0;
  uStack_8c = uStack_bc;
  uStack_a8 = uStack_d8;
  uStack_a4 = uStack_d4;
  uStack_a0 = uStack_d0;
  uStack_9c = uStack_cc;
  uStack_b8 = uStack_e8;
  pbStack_b0 = pbStack_e0;
  uVar14 = CONCAT44(uStack_d4,uStack_d8);
  uVar6 = uVar14 * 0x30;
  if (0x2aaaaaaaaaaaaaa < uVar14) {
    uVar13 = 0;
LAB_141648da3:
    pdb_142dc7e2a(uVar13,uVar6);
    goto LAB_141648eb4;
  }
  if (uVar6 == 0) {
    pbStack_58 = (byte *)0x4;
    uStack_70 = 0;
    uVar8 = uStack_70;
  }
  else {
    pdb_14007ee60();
    uVar13 = 4;
    pbStack_58 = pub_1406abab0(uVar6,4);
    uVar8 = uVar14;
    if (pbStack_58 == (byte *)0x0) goto LAB_141648da3;
  }
  uStack_70 = uVar8;
  if (uVar14 != 0) {
    pbVar9 = pbStack_58 + 0x2c;
    pbVar11 = pbStack_e0;
    do {
      uVar4 = *(undefined4 *)(pbVar11 + 0xc);
      uVar2 = *(undefined4 *)(pbVar11 + 0x10);
      uVar3 = *(undefined4 *)(pbVar11 + 0x20);
      *(undefined4 *)(pbVar9 + -0x24) = *(undefined4 *)(pbVar11 + 8);
      *(undefined8 *)(pbVar9 + -0x2c) = *(undefined8 *)pbVar11;
      *(undefined4 *)(pbVar9 + -0x20) = uVar4;
      *(undefined8 *)(pbVar9 + -0x1c) = *(undefined8 *)pbVar11;
      *(undefined4 *)(pbVar9 + -0x14) = *(undefined4 *)(pbVar11 + 8);
      *(undefined4 *)(pbVar9 + -0x10) = uVar2;
      *(undefined8 *)(pbVar9 + -0xc) = *(undefined8 *)(pbVar11 + 0x14);
      *(undefined4 *)(pbVar9 + -4) = *(undefined4 *)(pbVar11 + 0x1c);
      *(undefined4 *)pbVar9 = uVar3;
      pbVar9 = pbVar9 + 0x30;
      pbVar11 = pbVar11 + 0x24;
      uVar14 = uVar14 - 1;
    } while (uVar14 != 0);
  }
  pbStack_88 = pbStack_e0;
  pdb_14152f980(param_4,param_3,pbStack_58);
  uVar7 = uStack_90;
  uVar6 = CONCAT44(uStack_8c,uStack_90);
  uVar14 = uVar6 << 5;
  if (0x7ffffffffffffffc < uVar14) {
    uVar13 = 0;
LAB_141648ea8:
    pdb_142dc7e2a(uVar13,uVar14);
LAB_141648eb4:
                    /* WARNING: Does not return */
    pcVar5 = (code *)invalidInstructionException();
    (*pcVar5)();
  }
  pbStack_80 = (byte *)CONCAT44(uStack_94,uStack_98);
  if (uVar14 == 0) {
    pbStack_68 = (byte *)0x4;
    uStack_60 = 0;
  }
  else {
    pdb_14007ee60();
    uVar13 = 4;
    pbStack_68 = pub_1406abab0(uVar14,4);
    uStack_60 = uVar6;
    if (pbStack_68 == (byte *)0x0) goto LAB_141648ea8;
  }
  pbVar9 = pbStack_80;
  pbVar11 = pbStack_88;
  if (uVar6 != 0) {
    if (uVar6 == 1) {
      uVar14 = 0;
    }
    else {
      uVar14 = 0;
      lVar10 = 0;
      do {
        uVar4 = *(undefined4 *)(pbStack_80 + lVar10 + 0xc);
        *(undefined4 *)(pbStack_68 + lVar10 * 2 + 8) = *(undefined4 *)(pbStack_80 + lVar10 + 8);
        *(undefined8 *)(pbStack_68 + lVar10 * 2) = *(undefined8 *)(pbStack_80 + lVar10);
        *(undefined4 *)(pbStack_68 + lVar10 * 2 + 0xc) = uVar4;
        pbVar1 = pbStack_68 + lVar10 * 2 + 0x10;
        pbVar1[0] = 0;
        pbVar1[1] = 0;
        pbVar1[2] = 0;
        pbVar1[3] = 0;
        pbVar1[4] = 0;
        pbVar1[5] = 0;
        pbVar1[6] = 0;
        pbVar1[7] = 0;
        pbVar1[8] = 0;
        pbVar1[9] = 0;
        pbVar1[10] = 0;
        pbVar1[0xb] = 0;
        pbVar1[0xc] = 0;
        pbVar1[0xd] = 0;
        pbVar1[0xe] = 0;
        pbVar1[0xf] = 0;
        uVar4 = *(undefined4 *)(pbStack_80 + lVar10 + 0x1c);
        *(undefined4 *)(pbStack_68 + lVar10 * 2 + 0x28) =
             *(undefined4 *)(pbStack_80 + lVar10 + 0x18);
        *(undefined8 *)(pbStack_68 + lVar10 * 2 + 0x20) =
             *(undefined8 *)(pbStack_80 + lVar10 + 0x10);
        *(undefined4 *)(pbStack_68 + lVar10 * 2 + 0x2c) = uVar4;
        uVar14 = uVar14 + 2;
        pbVar1 = pbStack_68 + lVar10 * 2 + 0x30;
        pbVar1[0] = 0;
        pbVar1[1] = 0;
        pbVar1[2] = 0;
        pbVar1[3] = 0;
        pbVar1[4] = 0;
        pbVar1[5] = 0;
        pbVar1[6] = 0;
        pbVar1[7] = 0;
        pbVar1[8] = 0;
        pbVar1[9] = 0;
        pbVar1[10] = 0;
        pbVar1[0xb] = 0;
        pbVar1[0xc] = 0;
        pbVar1[0xd] = 0;
        pbVar1[0xe] = 0;
        pbVar1[0xf] = 0;
        lVar10 = lVar10 + 0x20;
      } while ((uVar6 & 0xfffffffffffffffe) != uVar14);
      if ((uVar7 & 1) == 0) goto LAB_141648fbe;
    }
    lVar12 = uVar14 * 0x10;
    uVar4 = *(undefined4 *)(pbStack_80 + lVar12 + 0xc);
    lVar10 = uVar14 * 0x20;
    *(undefined4 *)(pbStack_68 + lVar10 + 8) = *(undefined4 *)(pbStack_80 + lVar12 + 8);
    *(undefined8 *)(pbStack_68 + lVar10) = *(undefined8 *)(pbStack_80 + lVar12);
    *(undefined4 *)(pbStack_68 + lVar10 + 0xc) = uVar4;
    pbVar1 = pbStack_68 + lVar10 + 0x10;
    pbVar1[0] = 0;
    pbVar1[1] = 0;
    pbVar1[2] = 0;
    pbVar1[3] = 0;
    pbVar1[4] = 0;
    pbVar1[5] = 0;
    pbVar1[6] = 0;
    pbVar1[7] = 0;
    pbVar1[8] = 0;
    pbVar1[9] = 0;
    pbVar1[10] = 0;
    pbVar1[0xb] = 0;
    pbVar1[0xc] = 0;
    pbVar1[0xd] = 0;
    pbVar1[0xe] = 0;
    pbVar1[0xf] = 0;
  }
LAB_141648fbe:
  pdb_14152f750(param_4,param_3,pbStack_68,uVar6);
  if (uStack_60 != 0) {
    pub_1406abac0(pbStack_68,uStack_60 << 5,4);
  }
  if (uStack_70 != 0) {
    pub_1406abac0(pbStack_58,uStack_70 * 0x30,4);
  }
  if (uStack_e8 != 0) {
    pub_1406abac0(pbVar11,uStack_e8 * 0x24,4);
  }
  if (CONCAT44(uStack_9c,uStack_a0) != 0) {
    pub_1406abac0(pbVar9,CONCAT44(uStack_9c,uStack_a0) << 4,4);
  }
  if (pbStack_50 != (byte *)0x0) {
    pub_1406abac0(pbStack_78,(ulonglong)pbStack_50,1);
  }
  return 0;
}

