// Matched PDB: alloc::vec::spec_from_iter::impl$0::from_iter<country_core::shader::grass2::inc::card_splat_common::Grass2CardPointPosition,core::iter::adapters::map::Map<core::iter::adapters::flatten::FlatMap<core::iter::adapters::map::Map<core::iter::adapters::flatten::FlatMap<core::slice::iter::Iter<asset::foliage::Grass2SlotAsset>,core::iter::adapters::map::Map<core::slice::iter::Iter<asset::foliage::Grass2RuntimeExemplarAsset>,country_core::systems::grass2::impl$1::active_slot_exemplars::closure$0::closure_env$0>,country_core::systems::grass2::impl$1::active_slot_exemplars::closure_env$0>,country_core::systems::grass2::impl$1::active_exemplars::closure_env$0>,ref$<alloc::vec::Vec<asset::foliage::PackedGrass2CardPointPosition,alloc::alloc::Global> >,country_core::systems::render_loop::compute_passes::grass2::load_grass2_card_point_positions::closure_env$0>,country_core::systems::render_loop::compute_passes::grass2::load_grass2_card_point_positions::closure_env$1> >
// VA 0x1415fe990, PDB extent 1594 bytes
// Ghidra pseudocode; types and unresolved calls are not original source.

/* WARNING: Type propagation algorithm not settling */
/* Matched PDB:
   alloc::vec::spec_from_iter::impl$0::from_iter<country_core::shader::grass2::inc::card_splat_common::Grass2CardPointPosition,core::iter::adapters::map::Map<core::iter::adapters::flatten::FlatMap<core::iter::adapters::map::Map<core::iter::adapters::flatten::FlatMap<core::slice::iter::Iter<asset::foliage::Grass2SlotAsset>,core::iter::adapters::map::Map<core::slice::iter::Iter<asset::foliage::Grass2RuntimeExemplarAsset>,country_core::systems::grass2::impl$1::active_slot_exemplars::closure$0::closure_env$0>,country_core::systems::grass2::impl$1::active_slot_exemplars::closure_env$0>,country_core::systems::grass2::impl$1::active_exemplars::closure_env$0>,ref$<alloc::vec::Vec<asset::foliage::PackedGrass2CardPointPosition,alloc::alloc::Global>
   >,country_core::systems::render_loop::compute_passes::grass2::load_grass2_card_point_positions::closure_env$0>,country_core::systems::render_loop::compute_passes::grass2::load_grass2_card_point_positions::closure_env$1>
   >
   Extent: 1594 bytes. No whole-program auto-analysis. */

ulonglong * pdb_1415fe990(ulonglong *param_1,ulonglong *param_2)

{
  longlong *plVar1;
  undefined4 uVar2;
  ulonglong uVar3;
  undefined4 *puVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong *puVar7;
  ulonglong uVar8;
  undefined4 *puVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  undefined4 *puVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  undefined4 *puVar17;
  ulonglong uStack_a8;
  ulonglong *puStack_a0;
  ulonglong uStack_98;
  undefined4 *puStack_90;
  ulonglong uStack_88;
  undefined4 *puStack_80;
  ulonglong uStack_78;
  undefined4 *puStack_70;
  undefined4 *puStack_68;
  ulonglong uStack_60;
  ulonglong uStack_58;
  undefined4 *puStack_50;
  undefined8 uStack_48;
  
  uStack_48 = 0xfffffffffffffffe;
  puVar4 = (undefined4 *)param_2[9];
  uVar6 = *param_2;
  uVar3 = param_2[2];
  uStack_60 = param_2[7];
  puVar17 = (undefined4 *)param_2[10];
  if ((uVar6 & 1) == 0) {
    if ((puVar4 == (undefined4 *)0x0) || (puVar4 == puVar17)) {
LAB_1415feadc:
      puVar4 = (undefined4 *)param_2[0xb];
      if (puVar4 == (undefined4 *)0x0) {
LAB_1415fec39:
        *param_1 = 0;
        param_1[1] = 4;
        param_1[2] = 0;
        return param_1;
      }
      puVar9 = (undefined4 *)0x0;
      puVar12 = puVar4 + 1;
      if (puVar4 == (undefined4 *)param_2[0xc]) {
        puVar12 = puVar9;
      }
      param_2[0xb] = (ulonglong)puVar12;
      if (puVar4 == (undefined4 *)param_2[0xc]) goto LAB_1415fec39;
    }
    else {
      puVar9 = puVar4 + 1;
    }
  }
  else {
    if ((puVar4 == (undefined4 *)0x0) || (puVar4 == puVar17)) {
      uVar13 = param_2[1];
      uVar16 = param_2[4];
      uVar14 = param_2[3];
      uVar10 = param_2[6];
joined_r0x0001415fea51:
      do {
        if (uVar14 == 0) {
LAB_1415fea6d:
          if ((uVar13 != 0) && (uVar13 != uVar3)) {
            param_2[1] = uVar13 + 0x48;
            uVar14 = *(ulonglong *)(uVar13 + 0x20);
            uVar16 = *(longlong *)(uVar13 + 0x28) * 0xd0 + uVar14;
            param_2[3] = uVar14;
            param_2[4] = uVar16;
            uVar13 = uVar13 + 0x48;
            goto joined_r0x0001415fea51;
          }
          if (uVar10 == 0) goto LAB_1415feadc;
          if (uVar10 == uStack_60) {
            param_2[6] = 0;
            goto LAB_1415feadc;
          }
          param_2[6] = uVar10 + 0xd0;
          uVar8 = 0;
          uVar5 = uVar10 + 0xd0;
          uVar14 = uVar10;
        }
        else {
          if (uVar14 == uVar16) {
            param_2[3] = 0;
            goto LAB_1415fea6d;
          }
          uVar8 = uVar14 + 0xd0;
          param_2[3] = uVar8;
          uVar5 = uVar10;
        }
        puVar4 = *(undefined4 **)(uVar14 + 0x30);
        plVar1 = (longlong *)(uVar14 + 0x38);
        puVar17 = puVar4 + *plVar1;
        uVar14 = uVar8;
        uVar10 = uVar5;
      } while (*plVar1 == 0);
    }
    puVar9 = puVar4 + 1;
  }
  uVar13 = (ulonglong)((longlong)puVar17 - (longlong)puVar9) >> 2;
  if (puVar9 == (undefined4 *)0x0) {
    uVar13 = 0;
  }
  puStack_50 = (undefined4 *)param_2[0xb];
  puStack_90 = (undefined4 *)param_2[0xc];
  uVar16 = (ulonglong)((longlong)puStack_90 - (longlong)puStack_50) >> 2;
  if (puStack_50 == (undefined4 *)0x0) {
    uVar16 = 0;
  }
  uVar16 = uVar16 + uVar13;
  if ((uVar6 & 1) != 0) {
    if (param_2[3] == 0) {
      uVar14 = 0;
      uVar13 = param_2[6];
    }
    else {
      uVar14 = (param_2[4] - param_2[3] >> 4) * 0x4ec4ec4ec4ec4ec5;
      uVar13 = param_2[6];
    }
    if (uVar13 != 0) {
      uVar14 = uVar14 | (uStack_60 - uVar13 >> 4) * 0x4ec4ec4ec4ec4ec5;
    }
    puVar7 = &uStack_88;
    uVar13 = 0;
    if ((uVar3 != param_2[1] && param_2[1] != 0) || (uVar14 != 0)) goto LAB_1415febba;
  }
  puVar7 = &uStack_98;
  uVar13 = uVar16;
LAB_1415febba:
  uVar2 = *puVar4;
  *puVar7 = uVar13;
  uVar13 = 3;
  if (3 < uVar16) {
    uVar13 = uVar16;
  }
  puVar7 = (ulonglong *)(uVar13 * 4 + 4);
  uStack_58 = uVar6;
  if (puVar7 < (ulonglong *)0x7ffffffffffffffd && uVar16 < 0x3fffffffffffffff) goto LAB_1415fec05;
  param_1 = (ulonglong *)0x0;
  do {
    param_2 = puVar7;
    pdb_142dc7e2a();
LAB_1415fec05:
    puStack_a0 = param_1;
    if (puVar7 == (ulonglong *)0x0) {
      puVar4 = (undefined4 *)0x4;
      uStack_88 = 0;
      goto LAB_1415fec76;
    }
    pdb_14007ee60();
    puVar4 = (undefined4 *)func_0x0001406abab0(puVar7,4);
    param_1 = (ulonglong *)0x4;
  } while (puVar4 == (undefined4 *)0x0);
  uStack_88 = uVar13 + 1;
  uVar6 = uStack_58;
LAB_1415fec76:
  *puVar4 = uVar2;
  uStack_78 = 1;
  uVar14 = param_2[1];
  uVar13 = param_2[3];
  uVar10 = param_2[4];
  uVar16 = param_2[6];
  puStack_68 = puVar9;
  puVar9 = puStack_50;
  uVar8 = uStack_60;
  puStack_70 = puVar17;
  puStack_80 = puVar4;
  do {
    if ((uVar6 & 1) == 0) {
      if ((puStack_68 == (undefined4 *)0x0) || (puStack_68 == puStack_70)) {
joined_r0x0001415fee29:
        if ((puVar9 == (undefined4 *)0x0) || (puVar9 == puStack_90)) {
          puStack_a0[2] = uStack_78;
          *puStack_a0 = uStack_88;
          puStack_a0[1] = (ulonglong)puStack_80;
          return puStack_a0;
        }
        puStack_68 = (undefined4 *)0x0;
        uVar2 = *puVar9;
        puVar9 = puVar9 + 1;
      }
      else {
        uVar2 = *puStack_68;
        puStack_68 = puStack_68 + 1;
      }
    }
    else {
      uVar5 = uVar16;
      if ((puStack_68 == (undefined4 *)0x0) || (puStack_68 == puStack_70)) {
        do {
          uVar15 = uVar13;
          if (uVar13 != 0) goto LAB_1415feda0;
LAB_1415feda7:
          uVar15 = uVar5;
          if ((uVar14 == 0) || (uVar14 == uVar3)) {
            if (uVar15 == 0) goto joined_r0x0001415fee29;
            if (uVar15 == uVar8) {
              uVar16 = 0;
              goto joined_r0x0001415fee29;
            }
            uVar16 = uVar15 + 0xd0;
            uVar11 = 0;
            uVar5 = uVar16;
            while( true ) {
              puStack_68 = *(undefined4 **)(uVar15 + 0x30);
              puStack_70 = puStack_68 + *(longlong *)(uVar15 + 0x38);
              if (*(longlong *)(uVar15 + 0x38) != 0) goto LAB_1415fecec;
              uVar15 = uVar11;
              if (uVar11 == 0) goto LAB_1415feda7;
LAB_1415feda0:
              if (uVar15 == uVar10) break;
              uVar13 = uVar15 + 0xd0;
              uVar11 = uVar13;
            }
            uVar13 = 0;
            goto LAB_1415feda7;
          }
          uVar13 = *(ulonglong *)(uVar14 + 0x20);
          uVar10 = *(longlong *)(uVar14 + 0x28) * 0xd0 + uVar13;
          uVar14 = uVar14 + 0x48;
          uVar5 = uVar15;
        } while( true );
      }
LAB_1415fecec:
      uVar2 = *puStack_68;
      puStack_68 = puStack_68 + 1;
    }
    if (uStack_78 == uStack_88) {
      uVar5 = (ulonglong)((longlong)puStack_70 - (longlong)puStack_68) >> 2;
      if (puStack_68 == (undefined4 *)0x0) {
        uVar5 = 0;
      }
      uVar15 = (ulonglong)((longlong)puStack_90 - (longlong)puVar9) >> 2;
      if (puVar9 == (undefined4 *)0x0) {
        uVar15 = 0;
      }
      if ((uVar6 & 1) == 0) {
LAB_1415feeeb:
        puVar7 = &uStack_a8;
        uVar8 = uVar15 + uVar5;
      }
      else {
        if (uVar13 == 0) {
          uVar6 = 0;
        }
        else {
          uVar6 = (uVar10 - uVar13 >> 4) * 0x4ec4ec4ec4ec4ec5;
        }
        if (uVar16 != 0) {
          uVar6 = uVar6 | (uVar8 - uVar16 >> 4) * 0x4ec4ec4ec4ec4ec5;
        }
        puVar7 = &uStack_98;
        if (uVar3 == uVar14 || uVar14 == 0) {
          uVar8 = 0;
          if (uVar6 == 0) goto LAB_1415feeeb;
        }
        else {
          uVar8 = 0;
        }
      }
      *puVar7 = uVar8;
      puStack_50 = (undefined4 *)uStack_78;
      pdb_142d7f1b0(&uStack_88,uStack_78,uVar15 + uVar5 + 1,4,4);
      puVar4 = puStack_80;
      uStack_78 = (ulonglong)puStack_50;
      uVar8 = uStack_60;
      uVar6 = uStack_58;
    }
    puVar4[uStack_78] = uVar2;
    uStack_78 = uStack_78 + 1;
  } while( true );
}

