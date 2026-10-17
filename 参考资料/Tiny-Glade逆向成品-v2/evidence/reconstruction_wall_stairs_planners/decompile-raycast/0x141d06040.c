// Matched PDB: parry3d::partitioning::qbvh::qbvh::Qbvh::traverse_best_first_node<rapier3d::geometry::collider_components::ColliderHandle,parry3d::query::ray::ray_composite_shape::RayCompositeShapeToiBestFirstVisitor<rapier3d::pipeline::query_pipeline::QueryPipelineAsCompositeShape> >
// VA 0x141d06040, PDB extent 2689 bytes
// Ghidra pseudocode; types and unresolved calls are not original source.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB:
   parry3d::partitioning::qbvh::qbvh::Qbvh::traverse_best_first_node<rapier3d::geometry::collider_components::ColliderHandle,parry3d::query::ray::ray_composite_shape::RayCompositeShapeToiBestFirstVisitor<rapier3d::pipeline::query_pipeline::QueryPipelineAsCompositeShape>
   >
   Extent: 2689 bytes. No whole-program auto-analysis. */

undefined4 *
pdb_141d06040(undefined4 *param_1,longlong param_2,longlong param_3,undefined4 param_4,float param_5
             )

{
  byte bVar1;
  uint uVar2;
  ulonglong uVar3;
  code *pcVar4;
  undefined4 uVar5;
  undefined8 *puVar6;
  float fVar7;
  char cVar8;
  byte bVar9;
  float fVar10;
  longlong lVar11;
  byte bVar12;
  int iVar13;
  uint uVar14;
  ulonglong uVar15;
  longlong lVar16;
  undefined8 *puVar17;
  undefined4 uVar18;
  ulonglong uVar19;
  longlong *plVar20;
  ulonglong uVar21;
  undefined4 uVar22;
  uint uVar23;
  bool bVar24;
  float fVar25;
  float unaff_XMM6_Da;
  ulonglong uStack_258;
  longlong lStack_250;
  longlong lStack_240;
  undefined1 uStack_238;
  undefined1 uStack_237;
  undefined1 uStack_236;
  undefined1 uStack_235;
  int iStack_224;
  uint uStack_220;
  uint uStack_21c;
  undefined8 uStack_218;
  float fStack_210;
  undefined8 uStack_208;
  undefined4 uStack_200;
  undefined8 uStack_1f8;
  undefined4 uStack_1f0;
  float afStack_1e8 [4];
  ulonglong uStack_1d8;
  longlong lStack_1d0;
  undefined4 *puStack_1c8;
  undefined4 *puStack_1c0;
  undefined4 *puStack_1b8;
  undefined4 *puStack_1b0;
  longlong lStack_1a8;
  undefined4 *puStack_1a0;
  undefined8 uStack_198;
  float fStack_190;
  float fStack_18c;
  float fStack_188;
  float fStack_184;
  undefined4 uStack_180;
  float fStack_17c;
  undefined4 uStack_178;
  undefined8 uStack_174;
  undefined4 uStack_16c;
  undefined4 uStack_168;
  undefined8 uStack_164;
  undefined4 uStack_15c;
  undefined8 uStack_158;
  undefined8 uStack_150;
  longlong lStack_148;
  longlong lStack_140;
  undefined4 uStack_138;
  undefined4 uStack_134;
  float fStack_130;
  undefined4 uStack_12c;
  ulonglong uStack_128;
  undefined4 *puStack_120;
  ulonglong uStack_118;
  longlong lStack_110;
  undefined4 uStack_104;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  float fStack_e8;
  float fStack_e4;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  uint uStack_a8;
  undefined1 uStack_a1;
  undefined8 uStack_a0;
  
  uStack_a0 = 0xfffffffffffffffe;
  uVar3 = *(ulonglong *)(param_2 + 0x28);
  if (uVar3 == 0) {
    *param_1 = 0;
  }
  else {
    uStack_128 = 0;
    puStack_120 = (undefined4 *)0x4;
    uStack_118 = 0;
    puStack_1a0 = param_1;
    lStack_110 = param_3;
    pdb_142db07d0(&uStack_128);
    fVar25 = _DAT_142e36f38 * param_5;
    *puStack_120 = param_4;
    puStack_120[1] = fVar25;
    uVar14 = _DAT_142e37820;
    uStack_118 = 1;
    lStack_240 = *(longlong *)(param_2 + 0x20);
    lStack_1a8 = *(longlong *)(param_2 + 0x68);
    uStack_1d8 = *(ulonglong *)(param_2 + 0x70);
    lStack_148 = lStack_110 + 0x70;
    lStack_140 = lStack_110 + 0x74;
    uStack_104 = 0;
    while( true ) {
      pdb_141d093e0(&iStack_224,&uStack_128);
      puVar6 = (undefined8 *)CONCAT44(uStack_e0._4_4_,(float)uStack_e0);
      if ((iStack_224 != 1) || (param_5 <= (float)(uStack_21c ^ uVar14))) break;
      uVar21 = (ulonglong)uStack_220;
      if (uVar3 <= uVar21) {
        pdb_142dc81f2(uVar21,uVar3,&UNK_1433ca558);
                    /* WARNING: Does not return */
        pcVar4 = (code *)invalidInstructionException();
        (*pcVar4)();
      }
      lVar11 = lStack_240 + uVar21 * 0x80;
      bVar1 = *(byte *)(lStack_240 + 0x78 + uVar21 * 0x80);
      if ((bVar1 & 1) != 0) {
        puStack_1c8 = (undefined4 *)(lStack_1a8 + 8 + (ulonglong)*(uint *)(lVar11 + 0x60) * 0x10);
        if (uStack_1d8 <= *(uint *)(lVar11 + 0x60)) {
          puStack_1c8 = (undefined4 *)0x0;
        }
        puStack_1c0 = (undefined4 *)(lStack_1a8 + 8 + (ulonglong)*(uint *)(lVar11 + 100) * 0x10);
        if (uStack_1d8 <= *(uint *)(lVar11 + 100)) {
          puStack_1c0 = (undefined4 *)0x0;
        }
        puStack_1b8 = (undefined4 *)(lStack_1a8 + 8 + (ulonglong)*(uint *)(lVar11 + 0x68) * 0x10);
        if (uStack_1d8 <= *(uint *)(lVar11 + 0x68)) {
          puStack_1b8 = (undefined4 *)0x0;
        }
        puStack_1b0 = (undefined4 *)(lStack_1a8 + 8 + (ulonglong)*(uint *)(lVar11 + 0x6c) * 0x10);
        if (uStack_1d8 <= *(uint *)(lVar11 + 0x6c)) {
          puStack_1b0 = (undefined4 *)0x0;
        }
      }
      fStack_190 = *(float *)(lStack_110 + 0x70);
      uStack_198 = CONCAT44(fStack_190,fStack_190);
      fStack_18c = fStack_190;
      pdb_140ce58f0(&uStack_f8,lVar11,lStack_110,&uStack_198);
      uStack_258 = uStack_f8;
      uVar21 = uStack_258;
      lStack_250 = uStack_f0;
      if ((bVar1 & 1) == 0) {
        uStack_258._0_4_ = (uint)uStack_f8;
        uVar23 = (uint)uStack_258;
        iVar13 = 0;
        fVar10 = 0.0;
        uVar18 = 0;
        uVar22 = 0;
        uStack_258 = uVar21;
      }
      else {
        uStack_238 = fStack_e8 < param_5;
        uStack_158 = 0;
        uStack_150 = 0;
        uStack_a8 = 0;
        uStack_237 = fStack_e4 < param_5;
        uStack_198 = uStack_198 & 0xffffffff00000000;
        fStack_188 = 0.0;
        uStack_236 = (float)uStack_e0 < param_5;
        uStack_178 = 0;
        uStack_168 = 0;
        uStack_235 = uStack_e0._4_4_ < param_5;
        pdb_141d32290(&uStack_f8,&uStack_258,&uStack_238);
        bVar9 = uStack_f8._1_1_ * '\x02' | (byte)uStack_f8;
        bVar12 = uStack_f8._2_1_ << 2;
        cVar8 = uStack_f8._3_1_;
        uStack_100 = 0;
        uStack_e0 = (undefined8 *)CONCAT44(uStack_e0._4_4_,(float)uStack_e0);
        uStack_d8 = (undefined8 *)CONCAT44(uStack_d8._4_4_,(undefined4)uStack_d8);
        uStack_d0 = (undefined4 *)CONCAT44(uStack_d0._4_4_,(undefined4)uStack_d0);
        uStack_c8 = (uint *)CONCAT44(uStack_c8._4_4_,(undefined4)uStack_c8);
        uStack_c0 = (undefined8 *)CONCAT44(uStack_c0._4_4_,(undefined4)uStack_c0);
        if (((uStack_f8 & 1) != 0) &&
           (uStack_e0 = (undefined8 *)CONCAT44(uStack_e0._4_4_,(float)uStack_e0),
           uStack_d8 = (undefined8 *)CONCAT44(uStack_d8._4_4_,(undefined4)uStack_d8),
           uStack_d0 = (undefined4 *)CONCAT44(uStack_d0._4_4_,(undefined4)uStack_d0),
           uStack_c8 = (uint *)CONCAT44(uStack_c8._4_4_,(undefined4)uStack_c8),
           uStack_c0 = (undefined8 *)CONCAT44(uStack_c0._4_4_,(undefined4)uStack_c0),
           puStack_1c8 != (undefined4 *)0x0)) {
          uStack_b0 = *puStack_1c8;
          uStack_ac = puStack_1c8[1];
          uStack_f8 = *(longlong *)(lStack_110 + 0x68);
          uStack_f0 = lStack_148;
          fStack_e8 = (float)lStack_140;
          fStack_e4 = (float)((ulonglong)lStack_140 >> 0x20);
          uStack_e0 = &uStack_198;
          uStack_d8 = &uStack_100;
          uStack_d0 = &uStack_b0;
          uStack_c8 = &uStack_a8;
          uStack_c0 = &uStack_158;
          pdb_141a07850(*(undefined8 *)(lStack_110 + 0x60),uStack_b0,uStack_ac,&uStack_f8);
        }
        uStack_100 = 1;
        if (((bVar9 & 2) != 0) && (puStack_1c0 != (undefined4 *)0x0)) {
          uStack_b0 = *puStack_1c0;
          uStack_ac = puStack_1c0[1];
          uStack_f8 = *(longlong *)(lStack_110 + 0x68);
          uStack_f0 = lStack_148;
          fStack_e8 = (float)lStack_140;
          fStack_e4 = (float)((ulonglong)lStack_140 >> 0x20);
          uStack_e0 = &uStack_198;
          uStack_d8 = &uStack_100;
          uStack_d0 = &uStack_b0;
          uStack_c8 = &uStack_a8;
          uStack_c0 = &uStack_158;
          pdb_141a07850(*(undefined8 *)(lStack_110 + 0x60),uStack_b0,uStack_ac,&uStack_f8);
        }
        uStack_100 = 2;
        if ((((bVar12 | bVar9) & 4) != 0) && (puStack_1b8 != (undefined4 *)0x0)) {
          uStack_b0 = *puStack_1b8;
          uStack_ac = puStack_1b8[1];
          uStack_f8 = *(longlong *)(lStack_110 + 0x68);
          uStack_f0 = lStack_148;
          fStack_e8 = (float)lStack_140;
          fStack_e4 = (float)((ulonglong)lStack_140 >> 0x20);
          uStack_e0 = &uStack_198;
          uStack_d8 = &uStack_100;
          uStack_d0 = &uStack_b0;
          uStack_c8 = &uStack_a8;
          uStack_c0 = &uStack_158;
          pdb_141a07850(*(undefined8 *)(lStack_110 + 0x60),uStack_b0,uStack_ac,&uStack_f8);
        }
        uStack_100 = 3;
        puVar6 = uStack_e0;
        if ((cVar8 != '\0') && (puStack_1b0 != (undefined4 *)0x0)) {
          uStack_b0 = *puStack_1b0;
          uStack_ac = puStack_1b0[1];
          uStack_f8 = *(longlong *)(lStack_110 + 0x68);
          uStack_f0 = lStack_148;
          fStack_e8 = (float)lStack_140;
          fStack_e4 = (float)((ulonglong)lStack_140 >> 0x20);
          uStack_e0 = &uStack_198;
          uStack_d8 = &uStack_100;
          uStack_d0 = &uStack_b0;
          uStack_c8 = &uStack_a8;
          uStack_c0 = &uStack_158;
          pdb_141a07850(*(undefined8 *)(lStack_110 + 0x60),uStack_b0,uStack_ac,&uStack_f8);
          puVar6 = uStack_e0;
        }
        fVar10 = fStack_188;
        fVar7 = fStack_18c;
        fVar25 = fStack_190;
        uStack_138 = uStack_198._4_4_;
        lStack_1d0 = CONCAT44(fStack_18c,fStack_190);
        fStack_210 = fStack_17c;
        uStack_218 = CONCAT44(uStack_180,fStack_184);
        uStack_200 = uStack_16c;
        uStack_208 = uStack_174;
        uStack_1f8 = uStack_164;
        uStack_1f0 = uStack_15c;
        uStack_e0._4_4_ = uStack_150._4_4_;
        uStack_e0._0_4_ = (float)uStack_150;
        fStack_e4 = uStack_158._4_4_;
        fStack_e8 = (float)uStack_158;
        uVar23 = uStack_a8;
        iVar13 = (int)uStack_198;
        uVar18 = uStack_178;
        uVar22 = uStack_168;
        if ((int)uStack_198 == 2) {
          bVar24 = (uStack_198 & 0x100000000) != 0;
          if (bVar24) {
            uStack_198 = (ulonglong)*(uint *)(lVar11 + 0x70) << 0x20;
            fStack_190 = (float)CONCAT31(fStack_190._1_3_,*(undefined1 *)(lVar11 + 0x74));
            fStack_18c = fVar25;
            fStack_188 = fVar7;
            fStack_184 = fVar10;
          }
          uVar14 = (uint)bVar24;
          uStack_198 = CONCAT44(uStack_198._4_4_,uVar14);
          uStack_f8 = CONCAT44(uStack_12c,uStack_104);
          uStack_f0 = CONCAT71(uStack_f0._1_7_,uStack_a1);
          uStack_f0 = CONCAT44(uStack_134,(undefined4)uStack_f0);
          fStack_e8 = fStack_130;
          fStack_e4 = unaff_XMM6_Da;
          puVar17 = &uStack_f8;
          if (uVar14 != 0) {
            puVar17 = &uStack_198;
          }
          *(undefined8 *)(puStack_1a0 + 4) = puVar17[2];
          uVar18 = *(undefined4 *)((longlong)puVar17 + 4);
          uVar22 = *(undefined4 *)(puVar17 + 1);
          uVar5 = *(undefined4 *)((longlong)puVar17 + 0xc);
          *puStack_1a0 = *(undefined4 *)puVar17;
          puStack_1a0[1] = uVar18;
          puStack_1a0[2] = uVar22;
          puStack_1a0[3] = uVar5;
          if (uStack_128 == 0) {
            uStack_f8 = 0;
          }
          else {
            uStack_198 = uStack_128 << 3;
            uStack_f8 = 4;
          }
          goto LAB_141d06918;
        }
      }
      afStack_1e8[0] = fStack_e8;
      afStack_1e8[1] = fStack_e4;
      afStack_1e8[2] = (float)uStack_e0;
      afStack_1e8[3] = uStack_e0._4_4_;
      uStack_f8 = CONCAT44(uStack_138,iVar13);
      uStack_f0 = lStack_1d0;
      fStack_e8 = fVar10;
      uStack_e0._4_4_ = fStack_210;
      fStack_e4 = (float)uStack_218;
      uStack_e0._0_4_ = (float)((ulonglong)uStack_218 >> 0x20);
      uStack_d8._0_4_ = uVar18;
      uStack_d0._4_4_ = uStack_200;
      uStack_d8._4_4_ = (undefined4)uStack_208;
      uStack_d0._0_4_ = (undefined4)((ulonglong)uStack_208 >> 0x20);
      uStack_c8._0_4_ = uVar22;
      uStack_c0._4_4_ = uStack_1f0;
      uStack_c8._4_4_ = (undefined4)uStack_1f8;
      uStack_c0._0_4_ = (undefined4)((ulonglong)uStack_1f8 >> 0x20);
      uVar21 = 0;
      while (uVar19 = uVar21, uVar15 = uStack_118, uVar19 < 4) {
        uVar21 = uVar19 + 1;
        if (((uint)(1L << ((byte)uVar19 & 0x3f)) &
            (uVar23 >> 0x15 & 8 | uVar23 >> 0xe & 4 | uVar23 >> 7 & 2 | uVar23 & 1)) != 0) {
          if ((bVar1 & 1) == 0) {
            uVar2 = *(uint *)(lVar11 + 0x60 + uVar19 * 4);
            if (uVar2 < uVar3) {
              fVar25 = afStack_1e8[uVar19];
              if (uStack_118 == uStack_128) {
                pdb_142db07d0(&uStack_128);
              }
              puStack_120[uVar15 * 2] = uVar2;
              puStack_120[uVar15 * 2 + 1] = (uint)fVar25 ^ uVar14;
              uStack_118 = uVar15 + 1;
              uVar18 = puStack_120[uVar15 * 2];
              fVar25 = (float)puStack_120[uVar15 * 2 + 1];
              while (uVar15 != 0) {
                uVar19 = uVar15 - 1 >> 1;
                if (fVar25 < (float)puStack_120[uVar19 * 2 + 1] ||
                    fVar25 == (float)puStack_120[uVar19 * 2 + 1]) goto LAB_141d0674e;
                *(undefined8 *)(puStack_120 + uVar15 * 2) =
                     *(undefined8 *)(puStack_120 + uVar19 * 2);
                uVar15 = uVar19;
              }
              uVar15 = 0;
LAB_141d0674e:
              puStack_120[uVar15 * 2] = uVar18;
              puStack_120[uVar15 * 2 + 1] = fVar25;
            }
          }
          else if (((afStack_1e8[uVar19] < param_5) && (*(int *)(&uStack_f8 + uVar19 * 2) != 0)) &&
                  (uVar15 = (ulonglong)*(uint *)(lVar11 + 0x60 + uVar19 * 4), uVar15 < uStack_1d8))
          {
            lVar16 = uVar15 * 0x10;
            uStack_12c = *(undefined4 *)(lStack_1a8 + lVar16);
            uStack_a1 = *(undefined1 *)(lStack_1a8 + 4 + lVar16);
            uStack_134 = *(undefined4 *)((longlong)&uStack_f8 + uVar19 * 0x10 + 4);
            fStack_130 = *(float *)(&uStack_f0 + uVar19 * 2);
            unaff_XMM6_Da = *(float *)((longlong)&uStack_f0 + uVar19 * 0x10 + 4);
            uStack_104 = 1;
            param_5 = afStack_1e8[uVar19];
          }
        }
      }
    }
    *puStack_1a0 = uStack_104;
    puStack_1a0[1] = uStack_12c;
    *(undefined1 *)(puStack_1a0 + 2) = uStack_a1;
    puStack_1a0[3] = uStack_134;
    puStack_1a0[4] = fStack_130;
    puStack_1a0[5] = unaff_XMM6_Da;
    if (uStack_128 == 0) {
      lVar11 = 0;
      plVar20 = &uStack_f8;
    }
    else {
      lVar11 = uStack_128 << 3;
      uStack_f8 = 4;
      plVar20 = &uStack_198;
    }
    *plVar20 = lVar11;
LAB_141d06918:
    param_1 = puStack_1a0;
    if ((uStack_f8 != 0) && (uStack_198 != 0)) {
      uStack_e0 = puVar6;
      func_0x0001406abac0();
    }
  }
  return param_1;
}

