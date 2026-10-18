// VA 0x14198fe30, PDB extent 1706 bytes
// country_core::components::drawable::impl$32::component_ids<country_core::render::nani::instance_data::PreplacedFlowerInstanceData,bevy_ecs::bundle::info::impl$3::register_info::closure$0::closure_env$0<country_core::components::drawable::NaniBundle<country_core::render::nani::instance_data::PreplacedFlowerInstanceData> > >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/components/drawable.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::components::drawable::impl$32::component_ids<country_core::render::nani::instance_data::PreplacedFlowerInstanceData,bevy_ecs::bundle::info::impl$3::register_info::closure$0::closure_env$0<country_core::components::drawable::NaniBundle<country_core::render::nani::instance_data::PreplacedFlowerInstanceData>
   > >
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/components/drawable.rs
   Extent: 1706 */

void pdb_14198fe30(longlong *param_1,longlong *param_2)

{
  char *pcVar1;
  undefined1 auVar2 [16];
  longlong *plVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  longlong lVar9;
  uint uVar10;
  ushort uVar11;
  ulonglong uVar12;
  longlong lVar13;
  longlong *plVar14;
  longlong lVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  longlong lStack_218;
  longlong lStack_210;
  longlong lStack_208;
  longlong lStack_200;
  longlong lStack_1f8;
  longlong lStack_1f0;
  longlong lStack_1e8;
  longlong lStack_1e0;
  longlong lStack_1d8;
  longlong lStack_1d0;
  longlong lStack_1c8;
  longlong lStack_1c0;
  longlong lStack_1b8;
  longlong lStack_1b0;
  longlong lStack_f8;
  undefined8 uStack_f0;
  longlong lStack_e0;
  longlong lStack_d8;
  longlong lStack_d0;
  longlong lStack_c8;
  longlong lStack_c0;
  longlong lStack_b8;
  longlong lStack_b0;
  longlong lStack_a8;
  longlong lStack_a0;
  longlong lStack_98;
  longlong lStack_90;
  longlong lStack_88;
  longlong lStack_80;
  longlong lStack_78;
  longlong *plStack_70;
  undefined1 uStack_62;
  undefined1 uStack_61;
  undefined8 uStack_60;
  
  uVar7 = _UNK_14335d518;
  lVar6 = _DAT_14335d510;
  uStack_60 = 0xfffffffffffffffe;
  plVar3 = (longlong *)*param_2;
  lStack_f8 = _DAT_14335d510;
  uStack_f0 = _UNK_14335d518;
  lVar15 = param_1[3];
  if (*(longlong *)(lVar15 + 0x30) != 0) {
    lVar13 = *(longlong *)(lVar15 + 0x18);
    uVar8 = 0x5aca7ad05cba5ac5;
    lVar9 = 0;
    while( true ) {
      uVar8 = uVar8 & *(ulonglong *)(lVar15 + 0x20);
      auVar2 = *(undefined1 (*) [16])(lVar13 + uVar8);
      auVar17[0] = -(auVar2[0] == DAT_142e343a0);
      auVar17[1] = -(auVar2[1] == DAT_142e343a0._1_1_);
      auVar17[2] = -(auVar2[2] == DAT_142e343a0._2_1_);
      auVar17[3] = -(auVar2[3] == DAT_142e343a0._3_1_);
      auVar17[4] = -(auVar2[4] == DAT_142e343a0._4_1_);
      auVar17[5] = -(auVar2[5] == DAT_142e343a0._5_1_);
      auVar17[6] = -(auVar2[6] == DAT_142e343a0._6_1_);
      auVar17[7] = -(auVar2[7] == DAT_142e343a0._7_1_);
      auVar17[8] = -(auVar2[8] == DAT_142e343a0._8_1_);
      auVar17[9] = -(auVar2[9] == DAT_142e343a0._9_1_);
      auVar17[10] = -(auVar2[10] == DAT_142e343a0._10_1_);
      auVar17[0xb] = -(auVar2[0xb] == DAT_142e343a0._11_1_);
      auVar17[0xc] = -(auVar2[0xc] == DAT_142e343a0._12_1_);
      auVar17[0xd] = -(auVar2[0xd] == DAT_142e343a0._13_1_);
      auVar17[0xe] = -(auVar2[0xe] == DAT_142e343a0._14_1_);
      auVar17[0xf] = -(auVar2[0xf] == DAT_142e343a0._15_1_);
      uVar11 = (ushort)(SUB161(auVar17 >> 7,0) & 1) | (ushort)(SUB161(auVar17 >> 0xf,0) & 1) << 1 |
               (ushort)(SUB161(auVar17 >> 0x17,0) & 1) << 2 |
               (ushort)(SUB161(auVar17 >> 0x1f,0) & 1) << 3 |
               (ushort)(SUB161(auVar17 >> 0x27,0) & 1) << 4 |
               (ushort)(SUB161(auVar17 >> 0x2f,0) & 1) << 5 |
               (ushort)(SUB161(auVar17 >> 0x37,0) & 1) << 6 |
               (ushort)(SUB161(auVar17 >> 0x3f,0) & 1) << 7 |
               (ushort)(SUB161(auVar17 >> 0x47,0) & 1) << 8 |
               (ushort)(SUB161(auVar17 >> 0x4f,0) & 1) << 9 |
               (ushort)(SUB161(auVar17 >> 0x57,0) & 1) << 10 |
               (ushort)(SUB161(auVar17 >> 0x5f,0) & 1) << 0xb |
               (ushort)(SUB161(auVar17 >> 0x67,0) & 1) << 0xc |
               (ushort)(SUB161(auVar17 >> 0x6f,0) & 1) << 0xd |
               (ushort)(SUB161(auVar17 >> 0x77,0) & 1) << 0xe | (ushort)(auVar17[0xf] >> 7) << 0xf;
      uVar10 = (uint)uVar11;
      while (uVar11 != 0) {
        uVar4 = 0;
        for (uVar5 = uVar10; (uVar5 & 1) == 0; uVar5 = uVar5 >> 1 | 0x80000000) {
          uVar4 = uVar4 + 1;
        }
        uVar12 = uVar4 + uVar8 & *(ulonglong *)(lVar15 + 0x20);
        pcVar1 = (char *)(lVar13 + -0x18 + uVar12 * -0x18);
        auVar18[0] = -(*pcVar1 == DAT_142e60ea0);
        auVar18[1] = -(pcVar1[1] == DAT_142e60ea0._1_1_);
        auVar18[2] = -(pcVar1[2] == DAT_142e60ea0._2_1_);
        auVar18[3] = -(pcVar1[3] == DAT_142e60ea0._3_1_);
        auVar18[4] = -(pcVar1[4] == DAT_142e60ea0._4_1_);
        auVar18[5] = -(pcVar1[5] == DAT_142e60ea0._5_1_);
        auVar18[6] = -(pcVar1[6] == DAT_142e60ea0._6_1_);
        auVar18[7] = -(pcVar1[7] == DAT_142e60ea0._7_1_);
        auVar18[8] = -(pcVar1[8] == DAT_142e60ea0._8_1_);
        auVar18[9] = -(pcVar1[9] == DAT_142e60ea0._9_1_);
        auVar18[10] = -(pcVar1[10] == DAT_142e60ea0._10_1_);
        auVar18[0xb] = -(pcVar1[0xb] == DAT_142e60ea0._11_1_);
        auVar18[0xc] = -(pcVar1[0xc] == DAT_142e60ea0._12_1_);
        auVar18[0xd] = -(pcVar1[0xd] == DAT_142e60ea0._13_1_);
        auVar18[0xe] = -(pcVar1[0xe] == DAT_142e60ea0._14_1_);
        auVar18[0xf] = -(pcVar1[0xf] == DAT_142e60ea0._15_1_);
        if ((ushort)((ushort)(SUB161(auVar18 >> 7,0) & 1) |
                     (ushort)(SUB161(auVar18 >> 0xf,0) & 1) << 1 |
                     (ushort)(SUB161(auVar18 >> 0x17,0) & 1) << 2 |
                     (ushort)(SUB161(auVar18 >> 0x1f,0) & 1) << 3 |
                     (ushort)(SUB161(auVar18 >> 0x27,0) & 1) << 4 |
                     (ushort)(SUB161(auVar18 >> 0x2f,0) & 1) << 5 |
                     (ushort)(SUB161(auVar18 >> 0x37,0) & 1) << 6 |
                     (ushort)(SUB161(auVar18 >> 0x3f,0) & 1) << 7 |
                     (ushort)(SUB161(auVar18 >> 0x47,0) & 1) << 8 |
                     (ushort)(SUB161(auVar18 >> 0x4f,0) & 1) << 9 |
                     (ushort)(SUB161(auVar18 >> 0x57,0) & 1) << 10 |
                     (ushort)(SUB161(auVar18 >> 0x5f,0) & 1) << 0xb |
                     (ushort)(SUB161(auVar18 >> 0x67,0) & 1) << 0xc |
                     (ushort)(SUB161(auVar18 >> 0x6f,0) & 1) << 0xd |
                     (ushort)(SUB161(auVar18 >> 0x77,0) & 1) << 0xe |
                    (ushort)(auVar18[0xf] >> 7) << 0xf) == 0xffff) {
          uVar8 = *(ulonglong *)(lVar13 + uVar12 * -0x18 + -8);
          pdb_140f0c080(lVar15,param_1[1],param_1[2],uVar8);
          lVar15 = plVar3[2];
          if (lVar15 == *plVar3) goto LAB_14199022c;
          goto LAB_141990234;
        }
        uVar11 = (ushort)(uVar10 - 1) & (ushort)uVar10;
        uVar10 = CONCAT22((short)(uVar10 - 1 >> 0x10),uVar11);
      }
      auVar16[0] = -(auVar2[0] == -1);
      auVar16[1] = -(auVar2[1] == -1);
      auVar16[2] = -(auVar2[2] == -1);
      auVar16[3] = -(auVar2[3] == -1);
      auVar16[4] = -(auVar2[4] == -1);
      auVar16[5] = -(auVar2[5] == -1);
      auVar16[6] = -(auVar2[6] == -1);
      auVar16[7] = -(auVar2[7] == -1);
      auVar16[8] = -(auVar2[8] == -1);
      auVar16[9] = -(auVar2[9] == -1);
      auVar16[10] = -(auVar2[10] == -1);
      auVar16[0xb] = -(auVar2[0xb] == -1);
      auVar16[0xc] = -(auVar2[0xc] == -1);
      auVar16[0xd] = -(auVar2[0xd] == -1);
      auVar16[0xe] = -(auVar2[0xe] == -1);
      auVar16[0xf] = -(auVar2[0xf] == -1);
      if ((((((((((((((((SUB161(auVar16 >> 7,0) & 1) != 0 || (SUB161(auVar16 >> 0xf,0) & 1) != 0) ||
                      (SUB161(auVar16 >> 0x17,0) & 1) != 0) || (SUB161(auVar16 >> 0x1f,0) & 1) != 0)
                    || (SUB161(auVar16 >> 0x27,0) & 1) != 0) || (SUB161(auVar16 >> 0x2f,0) & 1) != 0
                   ) || (SUB161(auVar16 >> 0x37,0) & 1) != 0) ||
                 (SUB161(auVar16 >> 0x3f,0) & 1) != 0) || (SUB161(auVar16 >> 0x47,0) & 1) != 0) ||
               (SUB161(auVar16 >> 0x4f,0) & 1) != 0) || (SUB161(auVar16 >> 0x57,0) & 1) != 0) ||
             (SUB161(auVar16 >> 0x5f,0) & 1) != 0) || (SUB161(auVar16 >> 0x67,0) & 1) != 0) ||
           (SUB161(auVar16 >> 0x6f,0) & 1) != 0) || (SUB161(auVar16 >> 0x77,0) & 1) != 0) ||
          auVar16[0xf] < '\0') break;
      uVar8 = uVar8 + lVar9 + 0x10;
      lVar9 = lVar9 + 0x10;
    }
  }
  pdb_140268ef0(&lStack_218,lVar15 + 0x80,0x5aca7ad05cba5ac5,&lStack_f8);
  if (lStack_208 == 2) {
    uVar8 = *(ulonglong *)param_1[4];
    uVar12 = uVar8 + 1;
    *(ulonglong *)param_1[4] = uVar12;
    lStack_e0 = 1;
    lStack_d8 = lVar6;
    lStack_d0 = uVar7;
    lStack_b8 = 8;
    lStack_b0 = 0x18;
    lStack_a8 = 0;
    lStack_a0 = CONCAT53(lStack_a0._3_5_,0x10100);
    lStack_c8 = 0;
    pdb_140f033d0(&lStack_218,uVar8,&lStack_e0);
    if (*(ulonglong *)(lVar15 + 0x10) < uVar12) {
      uStack_61 = 1;
      pdb_1401728f0(lVar15,uVar12);
    }
    lVar13 = uVar8 * 0x120;
    plVar14 = (longlong *)(*(longlong *)(lVar15 + 8) + lVar13);
    if (*(int *)(*(longlong *)(lVar15 + 8) + lVar13) != 2) {
      plStack_70 = plVar14;
      pdb_1404ce7e0(plVar14 + 9);
      plVar14 = plStack_70;
      lVar9 = plStack_70[0x1b];
      if (lVar9 != 0) {
        uVar12 = lVar9 * 8 + 0x17U & 0xfffffffffffffff0;
        pub_1406abac0((byte *)(plStack_70[0x1a] - uVar12),lVar9 + uVar12 + 0x11,0x10);
      }
      if (plVar14[0x17] != 0) {
        pub_1406abac0((byte *)plVar14[0x18],plVar14[0x17] << 4,8);
      }
    }
    pub_142e32760(plVar14,&lStack_218,0x120);
    lStack_218 = lVar6;
    lStack_210 = uVar7;
    pdb_1403b0980(lVar15 + 0x18,&lStack_218,uVar8);
    lVar15 = param_1[2];
    if (lVar15 == *param_1) {
      pdb_142db0920(param_1);
    }
    *(ulonglong *)(param_1[1] + lVar15 * 8) = uVar8;
    param_1[2] = lVar15 + 1;
    lStack_e0 = 0;
    lStack_d8 = 8;
    lStack_d0 = 0;
    lStack_c8 = _DAT_14335d5d0;
    lStack_c0 = _UNK_14335d5d8;
    lStack_b8 = _DAT_14335d5e0;
    lStack_b0 = _UNK_14335d5e8;
    lStack_a8 = 0;
    lStack_a0 = 8;
    lStack_98 = 0;
    lStack_90 = _DAT_14335d5d0;
    lStack_88 = _UNK_14335d5d8;
    lStack_80 = _DAT_14335d5e0;
    lStack_78 = _UNK_14335d5e8;
    uStack_62 = 1;
    pdb_140f03610(param_1[3],uVar8,&lStack_e0);
    if (param_1[2] != 0) {
      param_1[2] = param_1[2] + -1;
    }
    lStack_1b8 = lStack_80;
    lStack_1b0 = lStack_78;
    lStack_1c8 = lStack_90;
    lStack_1c0 = lStack_88;
    lStack_1d8 = lStack_a0;
    lStack_1d0 = lStack_98;
    lStack_1e8 = lStack_b0;
    lStack_1e0 = lStack_a8;
    lStack_1f8 = lStack_c0;
    lStack_1f0 = lStack_b8;
    lStack_208 = lStack_d0;
    lStack_200 = lStack_c8;
    lStack_218 = lStack_e0;
    lStack_210 = lStack_d8;
    plStack_70 = (longlong *)(*(longlong *)(param_1[3] + 8) + lVar13 + 0x48);
    pdb_1404ce7e0();
    plStack_70[0xc] = lStack_1b8;
    plStack_70[0xd] = lStack_1b0;
    plStack_70[10] = lStack_1c8;
    plStack_70[0xb] = lStack_1c0;
    plStack_70[8] = lStack_1d8;
    plStack_70[9] = lStack_1d0;
    plStack_70[6] = lStack_1e8;
    plStack_70[7] = lStack_1e0;
    plStack_70[4] = lStack_1f8;
    plStack_70[5] = lStack_1f0;
    plStack_70[2] = lStack_208;
    plStack_70[3] = lStack_200;
    *plStack_70 = lStack_218;
    plStack_70[1] = lStack_210;
    lVar15 = plVar3[2];
    if (lVar15 != *plVar3) goto LAB_141990234;
  }
  else {
    lStack_88 = lStack_1b0;
    lStack_98 = lStack_1c0;
    lStack_90 = lStack_1b8;
    lStack_a8 = lStack_1d0;
    lStack_a0 = lStack_1c8;
    lStack_b8 = lStack_1e0;
    lStack_b0 = lStack_1d8;
    lStack_c8 = lStack_1f0;
    lStack_c0 = lStack_1e8;
    lStack_d8 = lStack_200;
    lStack_d0 = lStack_1f8;
    lStack_e0 = lStack_208;
    uVar8 = pdb_140f275b0(&lStack_e0,param_1);
    lVar15 = plVar3[2];
    if (lVar15 != *plVar3) goto LAB_141990234;
  }
LAB_14199022c:
  pdb_142db0920(plVar3);
LAB_141990234:
  *(ulonglong *)(plVar3[1] + lVar15 * 8) = uVar8;
  plVar3[2] = lVar15 + 1;
  uVar7 = pdb_1419a18e0(param_1);
  lVar15 = plVar3[2];
  if (lVar15 == *plVar3) {
    pdb_142db0920(plVar3);
  }
  *(undefined8 *)(plVar3[1] + lVar15 * 8) = uVar7;
  plVar3[2] = lVar15 + 1;
  pdb_14095ffe0(param_1,param_2);
  return;
}

