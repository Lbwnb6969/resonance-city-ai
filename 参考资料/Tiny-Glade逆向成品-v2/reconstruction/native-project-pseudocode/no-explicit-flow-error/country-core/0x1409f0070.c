// VA 0x1409f0070, PDB extent 2380 bytes
// country_core::systems::collision::world::RaycastMeshData::new_indexed
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/collision/world.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::systems::collision::world::RaycastMeshData::new_indexed
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/collision/world.rs
   Extent: 2380 */

undefined8 *
pdb_1409f0070(undefined8 *param_1,ulonglong *param_2,ulonglong *param_3,ulonglong *param_4,
             undefined8 *param_5)

{
  undefined4 uVar1;
  byte *pbVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  code *pcVar5;
  ulonglong arg0;
  byte *pbVar6;
  byte *pbVar7;
  byte *pbVar8;
  ulonglong *puVar9;
  ulonglong uVar10;
  byte **ppbVar11;
  undefined8 uVar12;
  longlong lVar13;
  ulonglong *puVar14;
  ulonglong *puVar15;
  ulonglong uStack_128;
  byte *pbStack_120;
  ulonglong uStack_118;
  byte *pbStack_110;
  byte **ppbStack_108;
  byte **ppbStack_100;
  ulonglong *puStack_f0;
  ulonglong *puStack_e8;
  byte *pbStack_e0;
  byte *pbStack_d8;
  byte *pbStack_d0;
  ulonglong uStack_c8;
  ulonglong *puStack_c0;
  byte *pbStack_b8;
  ulonglong *puStack_b0;
  ulonglong uStack_a8;
  ulonglong uStack_a0;
  byte *pbStack_98;
  byte *pbStack_90;
  byte *pbStack_88;
  ulonglong *puStack_80;
  byte *pbStack_78;
  ulonglong uStack_70;
  byte *pbStack_68;
  ulonglong uStack_60;
  undefined1 uStack_4d;
  undefined1 uStack_4c;
  undefined1 uStack_4b;
  undefined1 uStack_4a;
  undefined1 uStack_49;
  undefined8 uStack_48;
  
  uStack_48 = 0xfffffffffffffffe;
  pbStack_e0 = (byte *)param_2[1];
  pbVar2 = (byte *)param_2[2];
  pbStack_d0 = (byte *)param_3[1];
  uVar3 = param_3[2];
  uStack_49 = 1;
  uStack_4a = 1;
  uStack_4b = 1;
  uStack_4c = 1;
  puStack_f0 = param_2;
  puStack_e8 = param_3;
  pbStack_d8 = pbVar2;
  uStack_c8 = uVar3;
  puStack_c0 = param_4;
  pbStack_98 = pbStack_d0;
  pbStack_78 = pbStack_e0;
  pbVar6 = (byte *)pdb_140bba540(&pbStack_e0);
  uVar4 = *puStack_c0;
  if (!SBORROW8(0,uVar4)) {
    pbStack_d8 = (byte *)puStack_c0[1];
    pbStack_d0 = (byte *)puStack_c0[2];
    uStack_49 = 1;
    uStack_4a = 1;
    uStack_4b = 1;
    uStack_4c = 1;
    pbStack_e0 = pbVar6;
    pbVar6 = (byte *)pdb_140bb9de0(&pbStack_e0);
  }
  puStack_80 = (ulonglong *)*param_5;
  if (!SBORROW8(0,(longlong)puStack_80)) {
    pbStack_d8 = (byte *)param_5[1];
    pbStack_d0 = (byte *)param_5[2];
    uStack_49 = 1;
    uStack_4a = 1;
    uStack_4b = 1;
    uStack_4c = 1;
    pbStack_e0 = pbVar6;
    pbVar6 = (byte *)pdb_140bb9ff0();
  }
  arg0 = uVar3 * 0xc;
  if (uVar3 == 0) {
    pbVar7 = (byte *)0x4;
  }
  else {
    pdb_14007ee60();
    pbVar7 = pub_1406abab0(arg0,4);
    if (pbVar7 == (byte *)0x0) {
      uStack_49 = 1;
      uStack_4a = 1;
      uStack_4b = 1;
      uStack_4c = 1;
      pdb_142dc7e2a(4,arg0);
      goto LAB_1409f0586;
    }
    if (uVar3 == 1) {
      uVar10 = 0;
    }
    else {
      lVar13 = 0x14;
      uVar10 = 0;
      do {
        uVar1 = *(undefined4 *)(pbStack_98 + lVar13 + -0xc);
        *(undefined8 *)(pbVar7 + lVar13 + -0x14) = *(undefined8 *)(pbStack_98 + lVar13 + -0x14);
        *(undefined4 *)(pbVar7 + lVar13 + -0xc) = uVar1;
        uVar1 = *(undefined4 *)(pbStack_98 + lVar13);
        *(undefined8 *)(pbVar7 + lVar13 + -8) = *(undefined8 *)(pbStack_98 + lVar13 + -8);
        *(undefined4 *)(pbVar7 + lVar13) = uVar1;
        uVar10 = uVar10 + 2;
        lVar13 = lVar13 + 0x18;
      } while ((uVar3 & 0xfffffffffffffffe) != uVar10);
      if ((uVar3 & 1) == 0) goto LAB_1409f0219;
    }
    lVar13 = uVar10 * 0xc;
    uVar1 = *(undefined4 *)(pbStack_98 + lVar13 + 8);
    *(undefined8 *)(pbVar7 + lVar13) = *(undefined8 *)(pbStack_98 + lVar13);
    *(undefined4 *)(pbVar7 + lVar13 + 8) = uVar1;
  }
LAB_1409f0219:
  uVar10 = (longlong)pbVar2 * 0xc;
  uStack_128 = uVar3;
  pbStack_120 = pbVar7;
  uStack_118 = uVar3;
  if ((byte *)0xaaaaaaaaaaaaaaa < pbVar2) {
    uVar12 = 0;
LAB_1409f0242:
    uStack_4d = 1;
    pdb_142dc7e2a(uVar12,uVar10);
    goto LAB_1409f0586;
  }
  uStack_70 = uVar10;
  if (uVar10 == 0) {
    pbVar8 = (byte *)0x4;
    pbVar7 = (byte *)0x0;
  }
  else {
    pdb_14007ee60();
    uVar12 = 4;
    pbVar8 = pub_1406abab0(uStack_70,4);
    pbVar7 = pbVar2;
    uVar10 = uStack_70;
    if (pbVar8 == (byte *)0x0) goto LAB_1409f0242;
  }
  pbStack_d0 = (byte *)0x0;
  pbStack_e0 = pbVar7;
  pbStack_d8 = pbVar8;
  if (pbVar2 != (byte *)0x0) {
    pub_142e32760(pbVar8,pbStack_78,uStack_70);
    pbStack_d0 = pbVar2;
  }
  uStack_4d = 0;
  ppbVar11 = &pbStack_e0;
  uStack_a0 = arg0;
  uStack_60 = uVar3;
  pbStack_110 = (byte *)pdb_141b3b1f0(&uStack_128);
  pbVar7 = pbStack_98;
  puVar14 = puStack_c0;
  pbStack_90 = pbStack_78;
  ppbStack_108 = ppbVar11;
  ppbStack_100 = ppbVar11;
  pbStack_b8 = pbVar2;
  pbStack_68 = pbStack_110;
  if (pbVar2 < (byte *)*puStack_f0) {
    uVar3 = (longlong)*puStack_f0 * 0xc;
    if (pbVar2 == (byte *)0x0) {
      pbStack_90 = (byte *)0x4;
      pub_1406abac0(pbStack_78,uVar3,4);
    }
    else {
      pbStack_90 = pub_1406abad0(pbStack_78,uVar3,4,uStack_70);
      if (pbStack_90 == (byte *)0x0) {
        uStack_60 = uVar3;
        pdb_142dc7e2a(4,uStack_70);
        goto LAB_1409f0586;
      }
    }
  }
  pbStack_88 = pbVar7;
  if (uStack_60 < *puStack_e8) {
    uVar3 = *puStack_e8 * 0xc;
    if (uStack_60 != 0) {
      pbStack_88 = pub_1406abad0(pbVar7,uVar3,4,uStack_a0);
      if (pbStack_88 == (byte *)0x0) {
        uStack_60 = uVar3;
        pdb_142dc7e2a(4,uStack_a0);
        goto LAB_1409f0586;
      }
      goto LAB_1409f03a7;
    }
    pbStack_88 = (byte *)0x4;
    pub_1406abac0(pbVar7,uVar3,4);
    if (!SBORROW8(0,uVar4)) goto LAB_1409f03d9;
LAB_1409f03af:
    puVar9 = (ulonglong *)0x0;
  }
  else {
LAB_1409f03a7:
    if (SBORROW8(0,uVar4)) goto LAB_1409f03af;
LAB_1409f03d9:
    puVar15 = (ulonglong *)puVar14[1];
    uStack_a8 = puVar14[2];
    puVar9 = puVar15;
    if (uStack_a8 < uVar4) {
      pbVar2 = (byte *)(uVar4 * 0xc);
      if (uStack_a8 == 0) {
        pub_1406abac0((byte *)puVar15,(ulonglong)pbVar2,4);
        puVar9 = (ulonglong *)0x4;
      }
      else {
        uVar3 = uStack_a8 * 0xc;
        puVar9 = (ulonglong *)pub_1406abad0((byte *)puVar15,(ulonglong)pbVar2,4,uVar3);
        puVar14 = puVar15;
        if (puVar9 == (ulonglong *)0x0) {
          puStack_80 = puVar15;
          pbStack_68 = pbVar2;
          pdb_142dc7e2a(4,uVar3);
          goto LAB_1409f0586;
        }
      }
    }
  }
  puStack_b0 = puVar9;
  if (SBORROW8(0,(longlong)puStack_80)) {
    pbVar7 = (byte *)0x0;
  }
  else {
    pbVar2 = (byte *)param_5[1];
    puVar14 = (ulonglong *)param_5[2];
    pbVar7 = pbVar2;
    if (puVar14 < puStack_80) {
      puVar15 = (ulonglong *)((longlong)puStack_80 << 3);
      if (puVar14 == (ulonglong *)0x0) {
        pub_1406abac0(pbVar2,(ulonglong)puVar15,4);
        pbVar7 = (byte *)0x4;
      }
      else {
        pbVar7 = pub_1406abad0(pbVar2,(ulonglong)puVar15,4,(longlong)puVar14 * 8);
        if (pbVar7 == (byte *)0x0) {
          puStack_80 = puVar15;
          pbStack_68 = pbVar2;
          pdb_142dc7e2a(4,(longlong)puVar14 * 8);
LAB_1409f0586:
                    /* WARNING: Does not return */
          pcVar5 = (code *)invalidInstructionException();
          (*pcVar5)();
        }
      }
    }
  }
  *param_1 = pbStack_88;
  param_1[1] = uStack_60;
  param_1[2] = pbStack_90;
  param_1[3] = pbStack_b8;
  param_1[6] = puStack_b0;
  param_1[7] = uStack_a8;
  param_1[8] = pbVar7;
  param_1[9] = puVar14;
  param_1[4] = pbStack_68;
  param_1[5] = ppbStack_100;
  uVar12 = _UNK_143033418;
  param_1[10] = _DAT_143033410;
  param_1[0xb] = uVar12;
  uVar12 = _UNK_143033428;
  param_1[0xc] = _DAT_143033420;
  param_1[0xd] = uVar12;
  param_1[0xe] = pbVar6;
  return param_1;
}

