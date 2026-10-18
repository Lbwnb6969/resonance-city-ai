// VA 0x140a2ca40, PDB extent 1946 bytes
// country_core::asset_libraries::mesh_library::AssetMeshLibrary::add
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/asset_libraries/mesh_library.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: country_core::asset_libraries::mesh_library::AssetMeshLibrary::add
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/asset_libraries/mesh_library.rs
   Extent: 1946 */

longlong pdb_140a2ca40(longlong param_1,ulonglong *param_2)

{
  longlong *plVar1;
  ulonglong uVar2;
  code *pcVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  longlong lVar17;
  byte *pbVar18;
  longlong lVar19;
  undefined8 uVar20;
  ulonglong uVar21;
  undefined1 unaff_R14B;
  bool bVar22;
  bool bVar23;
  ulonglong uStack_108;
  byte *pbStack_100;
  ulonglong uStack_f8;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  ulonglong uStack_c8;
  ulonglong uStack_c0;
  ulonglong uStack_b8;
  ulonglong uStack_b0;
  ulonglong uStack_a8;
  ulonglong uStack_a0;
  ulonglong uStack_98;
  ulonglong uStack_90;
  ulonglong uStack_80;
  ulonglong *puStack_78;
  byte *pbStack_70;
  ulonglong uStack_68;
  longlong *plStack_60;
  ulonglong uStack_58;
  undefined1 uStack_4e;
  undefined1 uStack_4d;
  undefined1 uStack_4c;
  undefined1 uStack_4b;
  undefined1 uStack_4a;
  undefined1 uStack_49;
  undefined8 uStack_48;
  
  lVar17 = _DAT_143cb3070;
  uStack_48 = 0xfffffffffffffffe;
  LOCK();
  _DAT_143cb3070 = _DAT_143cb3070 + 1;
  UNLOCK();
  puStack_78 = param_2;
  if (SBORROW8(0,param_2[3])) {
    uVar21 = 0x8000000000000000;
  }
  else {
    uVar21 = param_2[5];
    if ((longlong)uVar21 < 0) {
      uVar20 = 0;
LAB_140a2ca9a:
      uStack_4d = 1;
      uStack_4e = 1;
      pdb_142dc7e2a(uVar20,uVar21);
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    if (uVar21 == 0) {
      pbStack_70 = (byte *)0x1;
    }
    else {
      uVar2 = param_2[4];
      pdb_14007ee60();
      uVar20 = 1;
      pbStack_70 = pub_1406abab0(uVar21,1);
      if (pbStack_70 == (byte *)0x0) goto LAB_140a2ca9a;
      pub_142e32760(pbStack_70,uVar2,uVar21);
    }
    unaff_R14B = (undefined1)param_2[6];
  }
  uStack_98 = param_2[0xe];
  uStack_90 = param_2[0xf];
  uStack_a8 = param_2[0xc];
  uStack_a0 = param_2[0xd];
  uStack_b8 = param_2[10];
  uStack_b0 = param_2[0xb];
  uStack_c8 = param_2[8];
  uStack_c0 = param_2[9];
  uStack_108 = *param_2;
  pbStack_100 = (byte *)param_2[1];
  uStack_f8 = param_2[2];
  uStack_f0 = (undefined4)param_2[3];
  uStack_ec = *(undefined4 *)((longlong)param_2 + 0x1c);
  uStack_e8 = (undefined4)param_2[4];
  uStack_e4 = *(undefined4 *)((longlong)param_2 + 0x24);
  uStack_e0 = (undefined4)param_2[5];
  uStack_dc = *(undefined4 *)((longlong)param_2 + 0x2c);
  uStack_d8 = (undefined4)param_2[6];
  uStack_d4 = *(undefined4 *)((longlong)param_2 + 0x34);
  uStack_d0 = (undefined4)param_2[7];
  uStack_cc = *(undefined4 *)((longlong)param_2 + 0x3c);
  uStack_68 = uVar21;
  pdb_14007ee60();
  pbVar18 = pub_1406abab0(0x80,8);
  if (pbVar18 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc7e11(8,0x80);
  }
  uVar21 = param_2[0xf];
  *(ulonglong *)(pbVar18 + 0x70) = param_2[0xe];
  *(ulonglong *)(pbVar18 + 0x78) = uVar21;
  uVar21 = param_2[0xd];
  *(ulonglong *)(pbVar18 + 0x60) = param_2[0xc];
  *(ulonglong *)(pbVar18 + 0x68) = uVar21;
  uVar21 = param_2[0xb];
  *(ulonglong *)(pbVar18 + 0x50) = param_2[10];
  *(ulonglong *)(pbVar18 + 0x58) = uVar21;
  uVar21 = param_2[9];
  *(ulonglong *)(pbVar18 + 0x40) = param_2[8];
  *(ulonglong *)(pbVar18 + 0x48) = uVar21;
  uVar21 = *param_2;
  uVar4 = *(undefined4 *)((longlong)param_2 + 4);
  uVar2 = param_2[1];
  uVar5 = *(undefined4 *)((longlong)param_2 + 0xc);
  uVar12 = param_2[2];
  uVar6 = *(undefined4 *)((longlong)param_2 + 0x14);
  uVar13 = param_2[3];
  uVar7 = *(undefined4 *)((longlong)param_2 + 0x1c);
  uVar14 = param_2[4];
  uVar8 = *(undefined4 *)((longlong)param_2 + 0x24);
  uVar15 = param_2[5];
  uVar9 = *(undefined4 *)((longlong)param_2 + 0x2c);
  uVar10 = *(undefined4 *)((longlong)param_2 + 0x34);
  uVar16 = param_2[7];
  uVar11 = *(undefined4 *)((longlong)param_2 + 0x3c);
  *(int *)(pbVar18 + 0x30) = (int)param_2[6];
  *(undefined4 *)(pbVar18 + 0x34) = uVar10;
  *(int *)(pbVar18 + 0x38) = (int)uVar16;
  *(undefined4 *)(pbVar18 + 0x3c) = uVar11;
  *(int *)(pbVar18 + 0x20) = (int)uVar14;
  *(undefined4 *)(pbVar18 + 0x24) = uVar8;
  *(int *)(pbVar18 + 0x28) = (int)uVar15;
  *(undefined4 *)(pbVar18 + 0x2c) = uVar9;
  *(int *)(pbVar18 + 0x10) = (int)uVar12;
  *(undefined4 *)(pbVar18 + 0x14) = uVar6;
  *(int *)(pbVar18 + 0x18) = (int)uVar13;
  *(undefined4 *)(pbVar18 + 0x1c) = uVar7;
  *(int *)pbVar18 = (int)uVar21;
  *(undefined4 *)(pbVar18 + 4) = uVar4;
  *(int *)(pbVar18 + 8) = (int)uVar2;
  *(undefined4 *)(pbVar18 + 0xc) = uVar5;
  uStack_49 = 1;
  uStack_4a = 1;
  lVar19 = pdb_140bf4a40(param_1 + 0x20,lVar17,pbVar18);
  if (lVar19 != 0) {
    uStack_49 = 1;
    uStack_4a = 1;
                    /* WARNING: Subroutine does not return */
    pdb_142dc83b0(&UNK_143039c70,0x56,&UNK_143039cc8);
  }
  uVar21 = param_1 + 0x60;
  LOCK();
  bVar22 = *(longlong *)(param_1 + 0x60) == 0;
  if (bVar22) {
    *(longlong *)(param_1 + 0x60) = 8;
  }
  UNLOCK();
  if (!bVar22) {
    uStack_49 = 1;
    uStack_4a = 1;
    pdb_142dbc1f0(uVar21);
  }
  uStack_49 = 1;
  uStack_4a = 1;
  pdb_140e9a150(uVar21);
  uStack_49 = 1;
  uStack_4a = 1;
  pdb_140e9a150(uVar21 | 1);
  lVar19 = *(longlong *)(param_1 + 0x78);
  uStack_58 = uVar21;
  if (lVar19 == *(longlong *)(param_1 + 0x68)) {
    pdb_142d7e8a0(param_1 + 0x68);
  }
  *(longlong *)(*(longlong *)(param_1 + 0x70) + lVar19 * 8) = lVar17;
  *(longlong *)(param_1 + 0x78) = lVar19 + 1;
  uStack_49 = 1;
  uStack_4a = 1;
  plVar1 = (longlong *)(param_1 + 0x60);
  pdb_140e9a350(plVar1);
  uStack_49 = 1;
  uStack_4a = 1;
  pdb_140e9a350();
  LOCK();
  lVar19 = *plVar1;
  if (lVar19 == 8) {
    *plVar1 = 0;
  }
  UNLOCK();
  if (lVar19 != 8) {
    uStack_49 = 1;
    uStack_4a = 1;
    pdb_142dbca40(plVar1,0);
  }
  uStack_58 = puStack_78[0x10];
  bVar22 = SBORROW8(0,uStack_58);
  if (!bVar22) {
    plStack_60 = (longlong *)puStack_78[0x11];
    uVar2 = puStack_78[0x12];
    uVar21 = param_1 + 0x80;
    LOCK();
    bVar23 = *(longlong *)(param_1 + 0x80) == 0;
    if (bVar23) {
      *(longlong *)(param_1 + 0x80) = 8;
    }
    UNLOCK();
    if (!bVar23) {
      uStack_4b = 1;
      pdb_142dbc1f0(uVar21);
    }
    uStack_4b = 1;
    pdb_140e9a150(uVar21);
    uStack_4b = 1;
    pdb_140e9a150(uVar21 | 1);
    uStack_108 = uStack_58;
    pbStack_100 = (byte *)plStack_60;
    uStack_f8 = uVar2;
    uStack_80 = uVar21;
    pdb_1417ba5c0(param_1 + 0x88,&uStack_108,lVar17);
    uStack_4b = 0;
    plVar1 = (longlong *)(param_1 + 0x80);
    pdb_140e9a350(plVar1);
    uStack_4b = 0;
    pdb_140e9a350();
    LOCK();
    lVar19 = *plVar1;
    if (lVar19 == 8) {
      *plVar1 = 0;
    }
    UNLOCK();
    if (lVar19 != 8) {
      uStack_4b = 0;
      pdb_142dbca40(plVar1,0);
    }
  }
  uStack_58 = CONCAT71(uStack_58._1_7_,bVar22);
  if (!SBORROW8(0,uStack_68)) {
    plVar1 = (longlong *)(param_1 + 0xf0);
    LOCK();
    bVar22 = *(longlong *)(param_1 + 0xf0) == 0;
    if (bVar22) {
      *(longlong *)(param_1 + 0xf0) = 8;
    }
    UNLOCK();
    if (!bVar22) {
      uStack_4c = 1;
      pdb_142dbc1f0(plVar1);
    }
    uStack_4c = 1;
    pdb_140e9a150(plVar1);
    uStack_4c = 1;
    pdb_140e9a150((ulonglong)plVar1 | 1);
    uStack_108 = uStack_68;
    pbStack_100 = pbStack_70;
    uStack_f8 = uStack_68;
    uStack_f0 = CONCAT31(uStack_f0._1_3_,unaff_R14B);
    plStack_60 = plVar1;
    pdb_1417b7000(param_1 + 0xf8,&uStack_108,lVar17);
    plVar1 = plStack_60;
    uStack_4c = 0;
    pdb_140e9a350(plStack_60);
    uStack_4c = 0;
    pdb_140e9a350();
    LOCK();
    lVar19 = *plVar1;
    if (lVar19 == 8) {
      *plVar1 = 0;
    }
    UNLOCK();
    if (lVar19 != 8) {
      uStack_4c = 0;
      pdb_142dbca40(plVar1,0);
    }
  }
  return lVar17;
}

