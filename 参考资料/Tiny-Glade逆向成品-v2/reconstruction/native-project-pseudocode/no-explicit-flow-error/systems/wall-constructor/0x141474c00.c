// VA 0x141474c00, PDB extent 2108 bytes
// system_wall_constructor::construct_elevation_supports::circle_bottom_layer::construct_circle_bottom_layer
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/wall-constructor/src/construct_elevation_supports/circle_bottom_layer.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   system_wall_constructor::construct_elevation_supports::circle_bottom_layer::construct_circle_bottom_layer
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/wall-constructor/src/construct_elevation_supports/circle_bottom_layer.rs
   Extent: 2108 */

undefined8
pdb_141474c00(undefined8 param_1,longlong param_2,undefined8 *param_3,undefined8 param_4,
             longlong *param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  char cVar5;
  bool bVar6;
  undefined4 uVar7;
  int iVar8;
  undefined8 *puVar9;
  longlong lVar10;
  int *piVar11;
  ulonglong uVar12;
  longlong lVar13;
  ulonglong uVar14;
  float *pfVar15;
  ulonglong uVar16;
  float *pfVar17;
  float *pfVar18;
  float *pfVar19;
  int iVar20;
  bool bVar21;
  float fVar22;
  float fVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  undefined8 in_stack_fffffffffffffdb8;
  undefined *puVar29;
  undefined8 in_stack_fffffffffffffdc8;
  uint in_stack_fffffffffffffdd0;
  undefined8 uStack_200;
  longlong lStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  float *pfStack_1e0;
  undefined4 uStack_1d8;
  undefined4 uStack_1d4;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  longlong lStack_1c8;
  longlong lStack_1c0;
  undefined4 uStack_1b8;
  undefined4 uStack_1b4;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  int iStack_1a8;
  undefined8 *puStack_1a0;
  undefined1 *puStack_198;
  longlong lStack_190;
  float *pfStack_188;
  longlong lStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  longlong lStack_140;
  longlong lStack_138;
  float *pfStack_130;
  code *pcStack_128;
  longlong lStack_120;
  float *pfStack_118;
  undefined8 uStack_110;
  float fStack_108;
  undefined4 uStack_104;
  undefined8 uStack_100;
  float fStack_f8;
  undefined1 uStack_f1;
  undefined8 uStack_f0;
  
  uVar24 = (undefined4)((ulonglong)in_stack_fffffffffffffdc8 >> 0x20);
  uVar7 = (undefined4)((ulonglong)in_stack_fffffffffffffdb8 >> 0x20);
  uStack_f0 = 0xfffffffffffffffe;
  uStack_110 = *param_3;
  fVar28 = *(float *)(param_3 + 1) + _DAT_14300b140;
  uStack_104 = *(undefined4 *)((longlong)param_3 + 0xc);
  fStack_108 = fVar28;
  uStack_100 = param_1;
  fVar22 = (float)pdb_140deff30(&uStack_110);
  fVar23 = _DAT_142e4bfe4 * fVar22;
  uVar12 = 0;
  if (0.0 <= fVar23) {
    uVar12 = (longlong)(fVar23 - _DAT_142e36f2c) & (longlong)fVar23 >> 0x3f | (longlong)fVar23;
  }
  uVar1 = *(undefined4 *)(param_2 + 0x284);
  uVar16 = 0xffffffffffffffff;
  if (fVar23 <= _DAT_142e36f30) {
    uVar16 = uVar12;
  }
  lStack_120 = pdb_140315970(&uStack_100);
  lStack_120 = lStack_120 + uVar16;
  cVar5 = pdb_1408ff990(param_2 + 0x2a3);
  if (cVar5 == '\0') {
    lStack_140 = param_2 + 0x29f;
    cVar5 = pdb_1408ff980();
    if ((cVar5 == '\0') ||
       (((cVar5 = pdb_1408ff980(param_2 + 0x29f), cVar5 != '\0' && (*(uint *)(param_2 + 600) < 2))
        && (0.0 < *(float *)(param_2 + 0x294))))) {
      puVar9 = (undefined8 *)pdb_1413e4400(param_4,&UNK_1433056c0);
      if ((puVar9 == (undefined8 *)0x0) ||
         (lVar10 = (**(code **)(puVar9[1] + 0x18))(*puVar9), lVar10 == 0)) {
                    /* WARNING: Subroutine does not return */
        pdb_142dc8150(&UNK_14330be58);
      }
      uStack_f1 = 0;
      pfVar17 = *(float **)(param_2 + 0x150);
      if (pfVar17 == (float *)0x0) {
                    /* WARNING: Subroutine does not return */
        pdb_142dc8150(&UNK_143305b70);
      }
      pfVar18 = pfVar17 + 6;
      LOCK();
      bVar21 = *(char *)(pfVar17 + 6) == '\0';
      if (bVar21) {
        *(char *)(pfVar17 + 6) = '\x01';
      }
      UNLOCK();
      if (bVar21) {
        pdb_140e9a150(pfVar18);
        lVar4 = *(longlong *)(pfVar17 + 4);
      }
      else {
        pdb_142dbd1a0(pfVar18,1,1000000000);
        pdb_140e9a150(pfVar18);
        lVar4 = *(longlong *)(pfVar17 + 4);
      }
      if ((lVar4 == 0) ||
         (piVar11 = (int *)(*(longlong *)(pfVar17 + 2) + lVar4 * 4 + -4), piVar11 == (int *)0x0)) {
        lStack_1f8 = *(longlong *)(lVar10 + 0x10);
        if (lStack_1f8 == 0) {
                    /* WARNING: Subroutine does not return */
          pdb_142dc8150(&UNK_143305b88);
        }
        iStack_1a8 = (int)lStack_1f8 + -1;
      }
      else {
        iStack_1a8 = *piVar11;
        lStack_1f8 = *(longlong *)(lVar10 + 0x10);
      }
      uStack_200 = *(undefined8 *)(lVar10 + 8);
      uStack_1f0 = *(undefined8 *)(lVar10 + 0x18);
      uStack_1e8 = *(undefined8 *)(lVar10 + 0x20);
      uStack_1d8 = *(undefined4 *)(lVar10 + 0x28);
      uStack_1d4 = *(undefined4 *)(lVar10 + 0x2c);
      uStack_1d0 = *(undefined4 *)(lVar10 + 0x30);
      uStack_1cc = *(undefined4 *)(lVar10 + 0x34);
      lStack_1c8 = lVar10 + 0x78;
      lStack_1c0 = lVar10 + 0x58;
      uStack_1b8 = *(undefined4 *)(lVar10 + 0x38);
      uStack_1b4 = *(undefined4 *)(lVar10 + 0x3c);
      uStack_1b0 = *(undefined4 *)(lVar10 + 0x40);
      uStack_1ac = *(undefined4 *)(lVar10 + 0x44);
      puStack_1a0 = &uStack_200;
      puStack_198 = &uStack_f1;
      pfStack_1e0 = pfVar17;
      fVar23 = (float)pub_142e329c0(fVar22 / _DAT_142e3c634);
      lStack_190 = 0;
      uVar16 = (longlong)(fVar23 - _DAT_142e36f2c) & (longlong)fVar23 >> 0x3f | (longlong)fVar23;
      uVar12 = 0;
      if (0.0 <= fVar23) {
        uVar12 = uVar16;
      }
      pfStack_188 = (float *)0x4;
      uVar14 = 0xffffffffffffffff;
      if (fVar23 <= _DAT_142e36f30) {
        uVar14 = uVar12;
      }
      lStack_180 = 0;
      puVar29 = &UNK_14330be70;
      pdb_140de8bb0(uVar14 + 1,uVar16,&lStack_120,&lStack_190,&UNK_14330be70);
      cVar5 = pdb_1408ff980(param_2 + 0x29f);
      fVar23 = _DAT_142e36f28;
      if (((cVar5 != '\0') && (*(uint *)(param_2 + 600) < 2)) && (0.0 < *(float *)(param_2 + 0x294))
         ) {
        fStack_108 = fVar28 + _DAT_14330bdf8;
      }
      pfStack_118 = pfStack_188 + lStack_180;
      bVar21 = true;
      pfVar18 = pfStack_188;
      iVar20 = 0;
      lStack_138 = param_2;
      while (lVar10 = lStack_138, uVar7 = (undefined4)((ulonglong)puVar29 >> 0x20),
            pfVar18 != pfStack_118) {
        pfVar19 = pfVar18 + 1;
        pfVar15 = pfVar18;
        if (bVar21) {
          if (pfVar19 == pfStack_118) break;
          pfVar15 = pfVar19;
          pfVar17 = pfVar18;
          pfVar19 = pfVar18 + 2;
        }
        fVar28 = *pfVar17;
        fVar27 = *pfVar15;
        fStack_f8 = fVar28;
        if ((fVar28 < 0.0) || (fVar23 < fVar28)) {
          pfStack_130 = &fStack_f8;
          pcStack_128 = pdb_140f70fc0;
                    /* WARNING: Subroutine does not return */
          pdb_142dc83d0(&UNK_143307ab0,&pfStack_130,&UNK_14330be88);
        }
        fVar26 = fVar28;
        uVar24 = pdb_140def2c0(&uStack_110,fVar28);
        fStack_f8 = fVar27;
        if ((fVar27 < 0.0) || (fVar23 < fVar27)) {
          pfStack_130 = &fStack_f8;
          pcStack_128 = pdb_140f70fc0;
                    /* WARNING: Subroutine does not return */
          pdb_142dc83d0(&UNK_143307ab0,&pfStack_130,&UNK_14330bea0);
        }
        uVar25 = pdb_140def2c0(&uStack_110);
        uVar3 = *(undefined4 *)(lVar10 + 0x274);
        uVar2 = *(undefined4 *)(lVar10 + 0x288);
        iVar8 = pdb_140315970(&uStack_100);
        cVar5 = pdb_1408ff980(lStack_140);
        if ((cVar5 == '\0') || (1 < *(uint *)(lVar10 + 600))) {
          bVar6 = false;
        }
        else {
          bVar6 = 0.0 < *(float *)(lVar10 + 0x294);
        }
        bVar21 = false;
        puVar29 = (undefined *)CONCAT44(uVar7,fVar27);
        pdb_1424c5e90(&lStack_120,uVar24,fVar26,uVar25,puVar29,uVar1,&puStack_1a0,uVar3,uVar2,
                      iVar8 + iVar20,CONCAT44(fVar28 * fVar22,fVar28 * fVar22),bVar6);
        pfVar17 = pfVar15;
        pfVar18 = pfVar19;
        iVar20 = iVar20 + 1;
      }
      if (lStack_190 != 0) {
        pub_1406abac0((byte *)pfStack_188,lStack_190 << 2,4);
      }
      pfVar18 = pfStack_1e0;
      pfVar17 = pfStack_1e0 + 6;
      pdb_140e9a350();
      LOCK();
      bVar21 = *(char *)(pfVar18 + 6) == '\x01';
      if (bVar21) {
        *(char *)(pfVar18 + 6) = '\0';
      }
      UNLOCK();
      if (!bVar21) {
        pdb_142dbcef0(pfVar17,0);
        return 0;
      }
      return 0;
    }
  }
  cVar5 = pdb_1408ff990(param_2 + 0x2a3);
  if (cVar5 == '\0') {
    pdb_140df4540(&lStack_190,&uStack_110,*(float *)(param_2 + 0x284) + _DAT_143305788);
    pdb_140aaa870(&uStack_200,&lStack_190,fVar28 + _DAT_14330bdfc,_DAT_142e3c624,
                  CONCAT44(uVar7,0x3ecccccd),0,CONCAT44(uVar24,0x40c90fdb),
                  in_stack_fffffffffffffdd0 & 0xffffff00);
    uVar7 = pdb_140315970(&uStack_100);
    pdb_140aaac40(&lStack_190,&uStack_200,uVar7);
    lVar10 = param_5[2];
    if (lVar10 == *param_5) {
      pdb_142d8db00(param_5);
    }
    lVar4 = param_5[1];
    lVar13 = lVar10 * 0x50;
    puVar9 = (undefined8 *)(lVar4 + 0x40 + lVar13);
    *puVar9 = uStack_150;
    puVar9[1] = uStack_148;
    puVar9 = (undefined8 *)(lVar4 + 0x30 + lVar13);
    *puVar9 = uStack_160;
    puVar9[1] = uStack_158;
    puVar9 = (undefined8 *)(lVar4 + 0x20 + lVar13);
    *puVar9 = uStack_170;
    puVar9[1] = uStack_168;
    puVar9 = (undefined8 *)(lVar4 + 0x10 + lVar13);
    *puVar9 = lStack_180;
    puVar9[1] = uStack_178;
    *(longlong *)(lVar4 + lVar13) = lStack_190;
    ((longlong *)(lVar4 + lVar13))[1] = (longlong)pfStack_188;
    param_5[2] = lVar10 + 1;
  }
  return 0;
}

