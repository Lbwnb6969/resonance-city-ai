// VA 0x140b46fd0, PDB extent 1496 bytes
// country_core::systems::ui_move_wall_group::WallGroupGizmoPlacement::new
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/ui_move_wall_group.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::systems::ui_move_wall_group::WallGroupGizmoPlacement::new
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/ui_move_wall_group.rs
   Extent: 1496 */

undefined4 *
pdb_140b46fd0(undefined4 *param_1,ulonglong *param_2,longlong param_3,undefined8 param_4,
             undefined8 param_5)

{
  byte *pbVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  code *pcVar4;
  undefined1 auVar5 [16];
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  byte *arg0;
  ulonglong uVar9;
  uint uVar10;
  byte *pbVar11;
  longlong lVar12;
  longlong lVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  float fVar26;
  ulonglong *puStack_118;
  ulonglong *puStack_110;
  byte *pbStack_108;
  ulonglong *puStack_100;
  undefined8 uStack_f0;
  ulonglong uStack_e0;
  byte *pbStack_d8;
  ulonglong uStack_d0;
  undefined4 uStack_c8;
  float fStack_c4;
  ulonglong uStack_c0;
  ulonglong uStack_b8;
  ulonglong uStack_b0;
  byte *pbStack_a8;
  undefined8 uStack_a0;
  
  uStack_a0 = 0xfffffffffffffffe;
  puStack_110 = param_2 + param_3;
  uStack_b8 = uStack_b8 & 0xffffffffffffff00;
  puStack_118 = param_2;
  pbStack_108 = (byte *)param_4;
  puStack_100 = &uStack_b8;
  pdb_141606480(&uStack_d0,&puStack_118);
  if ((char)uStack_b8 == '\x01') {
    if (uStack_d0 != 0) {
      pub_1406abac0((byte *)CONCAT44(fStack_c4,uStack_c8),uStack_d0 * 0x18,8);
    }
  }
  else if (!SBORROW8(0,uStack_d0)) {
    arg0 = (byte *)CONCAT44(fStack_c4,uStack_c8);
    if (uStack_c0 != 0) {
      uVar15 = uStack_c0 * 8;
      pdb_14007ee60();
      pbStack_d8 = pub_1406abab0(uVar15,8);
      if (pbStack_d8 == (byte *)0x0) {
        uStack_b0 = uStack_d0;
        pdb_142dc7e2a(8,uVar15);
                    /* WARNING: Does not return */
        pcVar4 = (code *)invalidInstructionException();
        (*pcVar4)();
      }
      if ((uStack_c0 < 0x13) ||
         (pbStack_d8 < arg0 + uStack_c0 * 0x18 + -0x10 && arg0 < pbStack_d8 + uStack_c0 * 8)) {
        uVar14 = 0;
      }
      else {
        uVar14 = 4;
        if ((uStack_c0 & 3) != 0) {
          uVar14 = (ulonglong)((uint)uStack_c0 & 3);
        }
        uVar14 = uStack_c0 - uVar14;
        uVar9 = 0;
        pbVar11 = arg0;
        do {
          uVar2 = *(undefined8 *)(pbVar11 + 0x18);
          uVar16 = *(undefined4 *)(pbVar11 + 4);
          uVar7 = *(undefined4 *)(pbVar11 + 0x48);
          uVar8 = *(undefined4 *)(pbVar11 + 0x4c);
          uVar17 = *(undefined4 *)(pbVar11 + 0x30);
          uVar6 = *(undefined4 *)(pbVar11 + 0x34);
          pbVar1 = pbStack_d8 + uVar9 * 8;
          *(undefined4 *)pbVar1 = *(undefined4 *)pbVar11;
          *(undefined4 *)(pbVar1 + 4) = uVar16;
          *(int *)(pbVar1 + 8) = (int)uVar2;
          *(int *)(pbVar1 + 0xc) = (int)((ulonglong)uVar2 >> 0x20);
          pbVar1 = pbStack_d8 + uVar9 * 8 + 0x10;
          *(undefined4 *)pbVar1 = uVar17;
          *(undefined4 *)(pbVar1 + 4) = uVar6;
          *(undefined4 *)(pbVar1 + 8) = uVar7;
          *(undefined4 *)(pbVar1 + 0xc) = uVar8;
          uVar9 = uVar9 + 4;
          pbVar11 = pbVar11 + 0x60;
        } while (uVar14 != uVar9);
      }
      uVar10 = (uint)uStack_c0 - (int)uVar14 & 3;
      uVar9 = uVar14;
      if (uVar10 != 0) {
        lVar12 = 0;
        do {
          *(undefined8 *)(pbStack_d8 + uVar9 * 8) =
               *(undefined8 *)(arg0 + lVar12 * 8 + uVar14 * 0x18);
          uVar9 = uVar9 + 1;
          lVar12 = lVar12 + 3;
        } while ((ulonglong)uVar10 * 3 != lVar12);
      }
      if (uVar14 - uStack_c0 < 0xfffffffffffffffd) {
        pbVar11 = arg0 + uVar9 * 0x18;
        do {
          *(undefined8 *)(pbStack_d8 + uVar9 * 8) = *(undefined8 *)pbVar11;
          *(undefined8 *)(pbStack_d8 + uVar9 * 8 + 8) = *(undefined8 *)(pbVar11 + 0x18);
          *(undefined8 *)(pbStack_d8 + uVar9 * 8 + 0x10) = *(undefined8 *)(pbVar11 + 0x30);
          *(undefined8 *)(pbStack_d8 + uVar9 * 8 + 0x18) = *(undefined8 *)(pbVar11 + 0x48);
          uVar9 = uVar9 + 4;
          pbVar11 = pbVar11 + 0x60;
        } while (uStack_c0 != uVar9);
      }
      auVar25 = ZEXT816(0);
      fVar26 = 0.0;
      pbVar11 = pbStack_d8;
      do {
        uVar14 = *(ulonglong *)(*(longlong *)pbVar11 + 0x10);
        if (1 < uVar14) {
          puVar3 = *(undefined8 **)(*(longlong *)pbVar11 + 8);
          fVar18 = (float)*puVar3;
          fVar19 = (float)((ulonglong)*puVar3 >> 0x20);
          fVar20 = (float)puVar3[1];
          fVar22 = fVar18 - fVar20;
          fVar21 = (float)((ulonglong)puVar3[1] >> 0x20);
          fVar23 = fVar19 - fVar21;
          fVar22 = SQRT(fVar23 * fVar23 + fVar22 * fVar22);
          auVar24._0_4_ = auVar25._0_4_ + fVar22 * (fVar18 + fVar20) * _DAT_142e36f60;
          auVar24._4_4_ = auVar25._4_4_ + fVar22 * (fVar19 + fVar21) * _UNK_142e36f64;
          auVar24._8_4_ = auVar25._8_4_ + _UNK_142e36f68 * 0.0 * 0.0;
          auVar24._12_4_ = auVar25._12_4_ + _UNK_142e36f6c * 0.0 * 0.0;
          fVar26 = fVar26 + fVar22;
          auVar25 = auVar24;
          if (uVar14 != 2) {
            lVar12 = uVar14 * 8 + -0x10;
            lVar13 = 0;
            do {
              auVar25 = auVar24;
              if ((uVar14 * 8 + -8 == lVar13) || (lVar12 == lVar13)) break;
              uVar2 = *(undefined8 *)((longlong)puVar3 + lVar13 + 8);
              fVar18 = (float)uVar2;
              fVar19 = (float)((ulonglong)uVar2 >> 0x20);
              uVar2 = *(undefined8 *)((longlong)puVar3 + lVar13 + 0x10);
              fVar20 = (float)uVar2;
              fVar22 = fVar18 - fVar20;
              fVar21 = (float)((ulonglong)uVar2 >> 0x20);
              fVar23 = fVar19 - fVar21;
              fVar22 = SQRT(fVar23 * fVar23 + fVar22 * fVar22);
              auVar25._0_4_ = auVar24._0_4_ + fVar22 * (fVar18 + fVar20) * _DAT_142e36f60;
              auVar25._4_4_ = auVar24._4_4_ + fVar22 * (fVar19 + fVar21) * _UNK_142e36f64;
              auVar25._8_4_ = auVar24._8_4_ + _UNK_142e36f68 * 0.0 * 0.0;
              auVar25._12_4_ = auVar24._12_4_ + _UNK_142e36f6c * 0.0 * 0.0;
              fVar26 = fVar26 + fVar22;
              lVar13 = lVar13 + 8;
              auVar24 = auVar25;
            } while (lVar12 != lVar13);
          }
        }
        pbVar11 = pbVar11 + 8;
      } while (pbVar11 != pbStack_d8 + uStack_c0 * 8);
      if (_DAT_142e37934 < fVar26) {
        uStack_b0 = uStack_d0;
        auVar5._4_4_ = fVar26;
        auVar5._0_4_ = fVar26;
        auVar5._8_8_ = 0;
        auVar25 = divps(auVar25,auVar5);
        uVar14 = auVar25._0_8_;
        puStack_100 = (ulonglong *)0x0;
        uStack_f0 = 0;
        puStack_118 = &uStack_b8;
        puStack_110 = (ulonglong *)pbStack_d8;
        pbStack_108 = pbStack_d8 + uStack_c0 * 8;
        uStack_e0 = uVar15;
        uStack_b8 = uVar14;
        pbStack_a8 = arg0;
        uVar16 = pdb_1419b41b0(&puStack_118,0);
        pub_1406abac0(pbStack_d8,uStack_c0 * 8,8);
        uVar15 = 0;
        uStack_d0 = uVar14;
        uStack_c8 = uVar16;
        fStack_c4 = fVar26;
        do {
          pdb_1419c1ac0(param_5,*(undefined4 *)(pbStack_a8 + uVar15 * 0x18 + 8));
          uVar15 = uVar15 + 1;
        } while (uVar15 != uStack_c0);
        uVar17 = pdb_1419c1ac0(param_5,auVar25._0_4_);
        pdb_140df4540(&puStack_118,&uStack_d0);
        param_1[7] = puStack_110._0_4_;
        *(ulonglong **)(param_1 + 5) = puStack_118;
        *(ulonglong *)(param_1 + 1) = uVar14;
        param_1[3] = uVar16;
        param_1[4] = fVar26;
        param_1[8] = uVar17;
        *param_1 = 1;
        if (uStack_b0 == 0) {
          return param_1;
        }
        pub_1406abac0(pbStack_a8,uStack_b0 * 0x18,8);
        return param_1;
      }
      pub_1406abac0(pbStack_d8,uVar15,8);
    }
    *param_1 = 0;
    if (uStack_d0 == 0) {
      return param_1;
    }
    pub_1406abac0(arg0,uStack_d0 * 0x18,8);
    return param_1;
  }
  *param_1 = 0;
  return param_1;
}

