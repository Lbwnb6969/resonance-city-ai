// VA 0x1424ca2c0, PDB extent 3402 bytes
// country_core::components::drawable::impl$17::component_ids<bevy_ecs::bundle::info::impl$3::register_info::closure$0::closure_env$0<country_core::components::drawable::DrawableMeshBundle> >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/components/drawable.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::components::drawable::impl$17::component_ids<bevy_ecs::bundle::info::impl$3::register_info::closure$0::closure_env$0<country_core::components::drawable::DrawableMeshBundle>
   >
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/components/drawable.rs
   Extent: 3402 */

void pdb_1424ca2c0(longlong *param_1,longlong *param_2)

{
  char *pcVar1;
  undefined1 auVar2 [16];
  uint uVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong *plVar7;
  ulonglong uVar8;
  longlong lVar9;
  longlong lVar10;
  uint uVar11;
  ushort uVar12;
  ulonglong uVar13;
  longlong lVar14;
  longlong *plVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  longlong lStack_228;
  longlong lStack_220;
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
  longlong lStack_108;
  undefined8 uStack_100;
  longlong *plStack_f0;
  longlong *plStack_e8;
  longlong lStack_e0;
  longlong lStack_d8;
  longlong lStack_d0;
  longlong lStack_c8;
  longlong lStack_c0;
  longlong lStack_b8;
  longlong lStack_b0;
  code *pcStack_a8;
  longlong lStack_a0;
  longlong lStack_98;
  longlong lStack_90;
  longlong lStack_88;
  longlong lStack_80;
  longlong lStack_78;
  longlong *plStack_70;
  undefined1 uStack_64;
  undefined1 uStack_63;
  undefined1 uStack_62;
  undefined1 uStack_61;
  undefined8 uStack_60;
  
  uVar6 = _UNK_143511298;
  lVar5 = _DAT_143511290;
  uStack_60 = 0xfffffffffffffffe;
  plVar15 = (longlong *)*param_2;
  lStack_108 = _DAT_143511290;
  uStack_100 = _UNK_143511298;
  lVar9 = param_1[3];
  if (*(longlong *)(lVar9 + 0x30) != 0) {
    lVar14 = *(longlong *)(lVar9 + 0x18);
    uVar8 = 0x50fb4a07b382bec0;
    lVar10 = 0;
    while( true ) {
      uVar8 = uVar8 & *(ulonglong *)(lVar9 + 0x20);
      auVar2 = *(undefined1 (*) [16])(lVar14 + uVar8);
      auVar18[0] = -(auVar2[0] == DAT_142e347b0);
      auVar18[1] = -(auVar2[1] == DAT_142e347b0._1_1_);
      auVar18[2] = -(auVar2[2] == DAT_142e347b0._2_1_);
      auVar18[3] = -(auVar2[3] == DAT_142e347b0._3_1_);
      auVar18[4] = -(auVar2[4] == DAT_142e347b0._4_1_);
      auVar18[5] = -(auVar2[5] == DAT_142e347b0._5_1_);
      auVar18[6] = -(auVar2[6] == DAT_142e347b0._6_1_);
      auVar18[7] = -(auVar2[7] == DAT_142e347b0._7_1_);
      auVar18[8] = -(auVar2[8] == DAT_142e347b0._8_1_);
      auVar18[9] = -(auVar2[9] == DAT_142e347b0._9_1_);
      auVar18[10] = -(auVar2[10] == DAT_142e347b0._10_1_);
      auVar18[0xb] = -(auVar2[0xb] == DAT_142e347b0._11_1_);
      auVar18[0xc] = -(auVar2[0xc] == DAT_142e347b0._12_1_);
      auVar18[0xd] = -(auVar2[0xd] == DAT_142e347b0._13_1_);
      auVar18[0xe] = -(auVar2[0xe] == DAT_142e347b0._14_1_);
      auVar18[0xf] = -(auVar2[0xf] == DAT_142e347b0._15_1_);
      uVar12 = (ushort)(SUB161(auVar18 >> 7,0) & 1) | (ushort)(SUB161(auVar18 >> 0xf,0) & 1) << 1 |
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
               (ushort)(SUB161(auVar18 >> 0x77,0) & 1) << 0xe | (ushort)(auVar18[0xf] >> 7) << 0xf;
      uVar11 = (uint)uVar12;
      while (uVar12 != 0) {
        uVar3 = 0;
        for (uVar4 = uVar11; (uVar4 & 1) == 0; uVar4 = uVar4 >> 1 | 0x80000000) {
          uVar3 = uVar3 + 1;
        }
        uVar13 = uVar3 + uVar8 & *(ulonglong *)(lVar9 + 0x20);
        pcVar1 = (char *)(lVar14 + -0x18 + uVar13 * -0x18);
        auVar19[0] = -(*pcVar1 == DAT_142f62500);
        auVar19[1] = -(pcVar1[1] == DAT_142f62500._1_1_);
        auVar19[2] = -(pcVar1[2] == DAT_142f62500._2_1_);
        auVar19[3] = -(pcVar1[3] == DAT_142f62500._3_1_);
        auVar19[4] = -(pcVar1[4] == DAT_142f62500._4_1_);
        auVar19[5] = -(pcVar1[5] == DAT_142f62500._5_1_);
        auVar19[6] = -(pcVar1[6] == DAT_142f62500._6_1_);
        auVar19[7] = -(pcVar1[7] == DAT_142f62500._7_1_);
        auVar19[8] = -(pcVar1[8] == DAT_142f62500._8_1_);
        auVar19[9] = -(pcVar1[9] == DAT_142f62500._9_1_);
        auVar19[10] = -(pcVar1[10] == DAT_142f62500._10_1_);
        auVar19[0xb] = -(pcVar1[0xb] == DAT_142f62500._11_1_);
        auVar19[0xc] = -(pcVar1[0xc] == DAT_142f62500._12_1_);
        auVar19[0xd] = -(pcVar1[0xd] == DAT_142f62500._13_1_);
        auVar19[0xe] = -(pcVar1[0xe] == DAT_142f62500._14_1_);
        auVar19[0xf] = -(pcVar1[0xf] == DAT_142f62500._15_1_);
        if ((ushort)((ushort)(SUB161(auVar19 >> 7,0) & 1) |
                     (ushort)(SUB161(auVar19 >> 0xf,0) & 1) << 1 |
                     (ushort)(SUB161(auVar19 >> 0x17,0) & 1) << 2 |
                     (ushort)(SUB161(auVar19 >> 0x1f,0) & 1) << 3 |
                     (ushort)(SUB161(auVar19 >> 0x27,0) & 1) << 4 |
                     (ushort)(SUB161(auVar19 >> 0x2f,0) & 1) << 5 |
                     (ushort)(SUB161(auVar19 >> 0x37,0) & 1) << 6 |
                     (ushort)(SUB161(auVar19 >> 0x3f,0) & 1) << 7 |
                     (ushort)(SUB161(auVar19 >> 0x47,0) & 1) << 8 |
                     (ushort)(SUB161(auVar19 >> 0x4f,0) & 1) << 9 |
                     (ushort)(SUB161(auVar19 >> 0x57,0) & 1) << 10 |
                     (ushort)(SUB161(auVar19 >> 0x5f,0) & 1) << 0xb |
                     (ushort)(SUB161(auVar19 >> 0x67,0) & 1) << 0xc |
                     (ushort)(SUB161(auVar19 >> 0x6f,0) & 1) << 0xd |
                     (ushort)(SUB161(auVar19 >> 0x77,0) & 1) << 0xe |
                    (ushort)(auVar19[0xf] >> 7) << 0xf) == 0xffff) {
          uVar8 = *(ulonglong *)(lVar14 + uVar13 * -0x18 + -8);
          pdb_140f0c080(lVar9,param_1[1],param_1[2],uVar8);
          lVar9 = plVar15[2];
          if (lVar9 == *plVar15) goto LAB_1424ca709;
          goto LAB_1424ca711;
        }
        uVar12 = (ushort)(uVar11 - 1) & (ushort)uVar11;
        uVar11 = CONCAT22((short)(uVar11 - 1 >> 0x10),uVar12);
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
      uVar8 = uVar8 + lVar10 + 0x10;
      lVar10 = lVar10 + 0x10;
    }
  }
  lVar14 = lVar9 + 0x80;
  pdb_140268ef0(&lStack_228,lVar14,0x50fb4a07b382bec0,&lStack_108);
  if (lStack_218 == 2) {
    uVar8 = *(ulonglong *)param_1[4];
    uVar13 = uVar8 + 1;
    *(ulonglong *)param_1[4] = uVar13;
    lStack_c8 = pdb_1408f8010();
    lStack_e0 = 1;
    lStack_d8 = lVar5;
    lStack_d0 = uVar6;
    lStack_b8 = 8;
    lStack_b0 = 0x10;
    pcStack_a8 = (code *)0x0;
    lStack_a0 = CONCAT53(lStack_a0._3_5_,0x10100);
    lStack_c0 = lVar14;
    pdb_140f033d0(&lStack_228,uVar8,&lStack_e0);
    if (*(ulonglong *)(lVar9 + 0x10) < uVar13) {
      uStack_63 = 1;
      pdb_1401728f0(lVar9,uVar13);
    }
    lVar14 = uVar8 * 0x120;
    plVar7 = (longlong *)(*(longlong *)(lVar9 + 8) + lVar14);
    if (*(int *)(*(longlong *)(lVar9 + 8) + lVar14) != 2) {
      plStack_70 = plVar7;
      pdb_1404ce7e0(plVar7 + 9);
      lVar10 = plStack_70[0x1b];
      if (lVar10 != 0) {
        uVar13 = lVar10 * 8 + 0x17U & 0xfffffffffffffff0;
        pub_1406abac0((byte *)(plStack_70[0x1a] - uVar13),lVar10 + uVar13 + 0x11,0x10);
      }
      plVar7 = plStack_70;
      if (plStack_70[0x17] != 0) {
        pub_1406abac0((byte *)plStack_70[0x18],plStack_70[0x17] << 4,8);
        plVar7 = plStack_70;
      }
    }
    pub_142e32760(plVar7,&lStack_228,0x120);
    lStack_228 = lVar5;
    lStack_220 = uVar6;
    pdb_1403b0980(lVar9 + 0x18,&lStack_228,uVar8);
    lVar9 = param_1[2];
    if (lVar9 == *param_1) {
      pdb_142db0920(param_1);
    }
    *(ulonglong *)(param_1[1] + lVar9 * 8) = uVar8;
    param_1[2] = lVar9 + 1;
    lStack_e0 = 0;
    lStack_d8 = 8;
    lStack_d0 = 0;
    lStack_c8 = _DAT_1435112c0;
    lStack_c0 = _UNK_1435112c8;
    lStack_b8 = _DAT_1435112d0;
    lStack_b0 = _UNK_1435112d8;
    pcStack_a8 = (code *)0x0;
    lStack_a0 = 8;
    lStack_98 = 0;
    lStack_90 = _DAT_1435112c0;
    lStack_88 = _UNK_1435112c8;
    lStack_80 = _DAT_1435112d0;
    lStack_78 = _UNK_1435112d8;
    uStack_61 = 1;
    plStack_f0 = param_1;
    plStack_e8 = &lStack_e0;
    pdb_14007ee60(uVar8,&plStack_f0);
    uStack_61 = 1;
    pdb_140f03610(param_1[3],uVar8);
    if (param_1[2] != 0) {
      param_1[2] = param_1[2] + -1;
    }
    lStack_1c8 = lStack_80;
    lStack_1c0 = lStack_78;
    lStack_1d8 = lStack_90;
    lStack_1d0 = lStack_88;
    lStack_1e8 = lStack_a0;
    lStack_1e0 = lStack_98;
    lStack_1f8 = lStack_b0;
    lStack_1f0 = (longlong)pcStack_a8;
    lStack_208 = lStack_c0;
    lStack_200 = lStack_b8;
    lStack_218 = lStack_d0;
    lStack_210 = lStack_c8;
    lStack_228 = lStack_e0;
    lStack_220 = lStack_d8;
    plStack_70 = (longlong *)(*(longlong *)(param_1[3] + 8) + lVar14 + 0x48);
    pdb_1404ce7e0();
    plStack_70[0xc] = lStack_1c8;
    plStack_70[0xd] = lStack_1c0;
    plStack_70[10] = lStack_1d8;
    plStack_70[0xb] = lStack_1d0;
    plStack_70[8] = lStack_1e8;
    plStack_70[9] = lStack_1e0;
    plStack_70[6] = lStack_1f8;
    plStack_70[7] = lStack_1f0;
    plStack_70[4] = lStack_208;
    plStack_70[5] = lStack_200;
    plStack_70[2] = lStack_218;
    plStack_70[3] = lStack_210;
    *plStack_70 = lStack_228;
    plStack_70[1] = lStack_220;
    lVar9 = plVar15[2];
    if (lVar9 == *plVar15) {
LAB_1424ca709:
      pdb_142db0920(plVar15);
    }
  }
  else {
    lStack_88 = lStack_1c0;
    lStack_98 = lStack_1d0;
    lStack_90 = lStack_1c8;
    pcStack_a8 = (code *)lStack_1e0;
    lStack_a0 = lStack_1d8;
    lStack_b8 = lStack_1f0;
    lStack_b0 = lStack_1e8;
    lStack_c8 = lStack_200;
    lStack_c0 = lStack_1f8;
    lStack_d8 = lStack_210;
    lStack_d0 = lStack_208;
    lStack_e0 = lStack_218;
    uVar8 = pdb_140f275b0(&lStack_e0,param_1);
    lVar9 = plVar15[2];
    if (lVar9 == *plVar15) goto LAB_1424ca709;
  }
LAB_1424ca711:
  *(ulonglong *)(plVar15[1] + lVar9 * 8) = uVar8;
  plVar15[2] = lVar9 + 1;
  pdb_142a45a70(param_1,param_2);
  uVar6 = pdb_1424d53f0(param_1);
  plVar15 = (longlong *)*param_2;
  lVar9 = plVar15[2];
  if (lVar9 == *plVar15) {
    pdb_142db0920(plVar15);
  }
  *(undefined8 *)(plVar15[1] + lVar9 * 8) = uVar6;
  plVar15[2] = lVar9 + 1;
  uVar6 = _UNK_143511278;
  lVar5 = _DAT_143511270;
  param_2 = (longlong *)*param_2;
  lStack_108 = _DAT_143511270;
  uStack_100 = _UNK_143511278;
  lVar9 = param_1[3];
  if (*(longlong *)(lVar9 + 0x30) != 0) {
    lVar14 = *(longlong *)(lVar9 + 0x18);
    uVar8 = 0x5a7e9e04c4acc2c5;
    lVar10 = 0;
    while( true ) {
      uVar8 = uVar8 & *(ulonglong *)(lVar9 + 0x20);
      auVar2 = *(undefined1 (*) [16])(lVar14 + uVar8);
      auVar20[0] = -(auVar2[0] == DAT_142e343a0);
      auVar20[1] = -(auVar2[1] == DAT_142e343a0._1_1_);
      auVar20[2] = -(auVar2[2] == DAT_142e343a0._2_1_);
      auVar20[3] = -(auVar2[3] == DAT_142e343a0._3_1_);
      auVar20[4] = -(auVar2[4] == DAT_142e343a0._4_1_);
      auVar20[5] = -(auVar2[5] == DAT_142e343a0._5_1_);
      auVar20[6] = -(auVar2[6] == DAT_142e343a0._6_1_);
      auVar20[7] = -(auVar2[7] == DAT_142e343a0._7_1_);
      auVar20[8] = -(auVar2[8] == DAT_142e343a0._8_1_);
      auVar20[9] = -(auVar2[9] == DAT_142e343a0._9_1_);
      auVar20[10] = -(auVar2[10] == DAT_142e343a0._10_1_);
      auVar20[0xb] = -(auVar2[0xb] == DAT_142e343a0._11_1_);
      auVar20[0xc] = -(auVar2[0xc] == DAT_142e343a0._12_1_);
      auVar20[0xd] = -(auVar2[0xd] == DAT_142e343a0._13_1_);
      auVar20[0xe] = -(auVar2[0xe] == DAT_142e343a0._14_1_);
      auVar20[0xf] = -(auVar2[0xf] == DAT_142e343a0._15_1_);
      uVar12 = (ushort)(SUB161(auVar20 >> 7,0) & 1) | (ushort)(SUB161(auVar20 >> 0xf,0) & 1) << 1 |
               (ushort)(SUB161(auVar20 >> 0x17,0) & 1) << 2 |
               (ushort)(SUB161(auVar20 >> 0x1f,0) & 1) << 3 |
               (ushort)(SUB161(auVar20 >> 0x27,0) & 1) << 4 |
               (ushort)(SUB161(auVar20 >> 0x2f,0) & 1) << 5 |
               (ushort)(SUB161(auVar20 >> 0x37,0) & 1) << 6 |
               (ushort)(SUB161(auVar20 >> 0x3f,0) & 1) << 7 |
               (ushort)(SUB161(auVar20 >> 0x47,0) & 1) << 8 |
               (ushort)(SUB161(auVar20 >> 0x4f,0) & 1) << 9 |
               (ushort)(SUB161(auVar20 >> 0x57,0) & 1) << 10 |
               (ushort)(SUB161(auVar20 >> 0x5f,0) & 1) << 0xb |
               (ushort)(SUB161(auVar20 >> 0x67,0) & 1) << 0xc |
               (ushort)(SUB161(auVar20 >> 0x6f,0) & 1) << 0xd |
               (ushort)(SUB161(auVar20 >> 0x77,0) & 1) << 0xe | (ushort)(auVar20[0xf] >> 7) << 0xf;
      uVar11 = (uint)uVar12;
      while (uVar12 != 0) {
        uVar3 = 0;
        for (uVar4 = uVar11; (uVar4 & 1) == 0; uVar4 = uVar4 >> 1 | 0x80000000) {
          uVar3 = uVar3 + 1;
        }
        uVar13 = uVar3 + uVar8 & *(ulonglong *)(lVar9 + 0x20);
        pcVar1 = (char *)(lVar14 + -0x18 + uVar13 * -0x18);
        auVar21[0] = -(*pcVar1 == DAT_143020620);
        auVar21[1] = -(pcVar1[1] == DAT_143020620._1_1_);
        auVar21[2] = -(pcVar1[2] == DAT_143020620._2_1_);
        auVar21[3] = -(pcVar1[3] == DAT_143020620._3_1_);
        auVar21[4] = -(pcVar1[4] == DAT_143020620._4_1_);
        auVar21[5] = -(pcVar1[5] == DAT_143020620._5_1_);
        auVar21[6] = -(pcVar1[6] == DAT_143020620._6_1_);
        auVar21[7] = -(pcVar1[7] == DAT_143020620._7_1_);
        auVar21[8] = -(pcVar1[8] == DAT_143020620._8_1_);
        auVar21[9] = -(pcVar1[9] == DAT_143020620._9_1_);
        auVar21[10] = -(pcVar1[10] == DAT_143020620._10_1_);
        auVar21[0xb] = -(pcVar1[0xb] == DAT_143020620._11_1_);
        auVar21[0xc] = -(pcVar1[0xc] == DAT_143020620._12_1_);
        auVar21[0xd] = -(pcVar1[0xd] == DAT_143020620._13_1_);
        auVar21[0xe] = -(pcVar1[0xe] == DAT_143020620._14_1_);
        auVar21[0xf] = -(pcVar1[0xf] == DAT_143020620._15_1_);
        if ((ushort)((ushort)(SUB161(auVar21 >> 7,0) & 1) |
                     (ushort)(SUB161(auVar21 >> 0xf,0) & 1) << 1 |
                     (ushort)(SUB161(auVar21 >> 0x17,0) & 1) << 2 |
                     (ushort)(SUB161(auVar21 >> 0x1f,0) & 1) << 3 |
                     (ushort)(SUB161(auVar21 >> 0x27,0) & 1) << 4 |
                     (ushort)(SUB161(auVar21 >> 0x2f,0) & 1) << 5 |
                     (ushort)(SUB161(auVar21 >> 0x37,0) & 1) << 6 |
                     (ushort)(SUB161(auVar21 >> 0x3f,0) & 1) << 7 |
                     (ushort)(SUB161(auVar21 >> 0x47,0) & 1) << 8 |
                     (ushort)(SUB161(auVar21 >> 0x4f,0) & 1) << 9 |
                     (ushort)(SUB161(auVar21 >> 0x57,0) & 1) << 10 |
                     (ushort)(SUB161(auVar21 >> 0x5f,0) & 1) << 0xb |
                     (ushort)(SUB161(auVar21 >> 0x67,0) & 1) << 0xc |
                     (ushort)(SUB161(auVar21 >> 0x6f,0) & 1) << 0xd |
                     (ushort)(SUB161(auVar21 >> 0x77,0) & 1) << 0xe |
                    (ushort)(auVar21[0xf] >> 7) << 0xf) == 0xffff) {
          uVar8 = *(ulonglong *)(lVar14 + uVar13 * -0x18 + -8);
          pdb_140f0c080(lVar9,param_1[1],param_1[2],uVar8);
          lVar9 = param_2[2];
          if (lVar9 == *param_2) goto LAB_1424cab4f;
          goto LAB_1424cab57;
        }
        uVar12 = (ushort)(uVar11 - 1) & (ushort)uVar11;
        uVar11 = CONCAT22((short)(uVar11 - 1 >> 0x10),uVar12);
      }
      auVar17[0] = -(auVar2[0] == -1);
      auVar17[1] = -(auVar2[1] == -1);
      auVar17[2] = -(auVar2[2] == -1);
      auVar17[3] = -(auVar2[3] == -1);
      auVar17[4] = -(auVar2[4] == -1);
      auVar17[5] = -(auVar2[5] == -1);
      auVar17[6] = -(auVar2[6] == -1);
      auVar17[7] = -(auVar2[7] == -1);
      auVar17[8] = -(auVar2[8] == -1);
      auVar17[9] = -(auVar2[9] == -1);
      auVar17[10] = -(auVar2[10] == -1);
      auVar17[0xb] = -(auVar2[0xb] == -1);
      auVar17[0xc] = -(auVar2[0xc] == -1);
      auVar17[0xd] = -(auVar2[0xd] == -1);
      auVar17[0xe] = -(auVar2[0xe] == -1);
      auVar17[0xf] = -(auVar2[0xf] == -1);
      if ((((((((((((((((SUB161(auVar17 >> 7,0) & 1) != 0 || (SUB161(auVar17 >> 0xf,0) & 1) != 0) ||
                      (SUB161(auVar17 >> 0x17,0) & 1) != 0) || (SUB161(auVar17 >> 0x1f,0) & 1) != 0)
                    || (SUB161(auVar17 >> 0x27,0) & 1) != 0) || (SUB161(auVar17 >> 0x2f,0) & 1) != 0
                   ) || (SUB161(auVar17 >> 0x37,0) & 1) != 0) ||
                 (SUB161(auVar17 >> 0x3f,0) & 1) != 0) || (SUB161(auVar17 >> 0x47,0) & 1) != 0) ||
               (SUB161(auVar17 >> 0x4f,0) & 1) != 0) || (SUB161(auVar17 >> 0x57,0) & 1) != 0) ||
             (SUB161(auVar17 >> 0x5f,0) & 1) != 0) || (SUB161(auVar17 >> 0x67,0) & 1) != 0) ||
           (SUB161(auVar17 >> 0x6f,0) & 1) != 0) || (SUB161(auVar17 >> 0x77,0) & 1) != 0) ||
          auVar17[0xf] < '\0') break;
      uVar8 = uVar8 + lVar10 + 0x10;
      lVar10 = lVar10 + 0x10;
    }
  }
  lVar14 = lVar9 + 0x80;
  pdb_140268ef0(&lStack_228,lVar14,0x5a7e9e04c4acc2c5,&lStack_108);
  if (lStack_218 == 2) {
    uVar8 = *(ulonglong *)param_1[4];
    uVar13 = uVar8 + 1;
    *(ulonglong *)param_1[4] = uVar13;
    lStack_c8 = pdb_1408fdbf0();
    lStack_e0 = 1;
    lStack_d8 = lVar5;
    lStack_d0 = uVar6;
    lStack_b8 = 8;
    lStack_b0 = 8;
    pcStack_a8 = pdb_1424e4d70;
    lStack_a0 = CONCAT53(lStack_a0._3_5_,0x10100);
    lStack_c0 = lVar14;
    pdb_140f033d0(&lStack_228,uVar8,&lStack_e0);
    if (*(ulonglong *)(lVar9 + 0x10) < uVar13) {
      uStack_64 = 1;
      pdb_1401728f0(lVar9,uVar13);
    }
    lVar14 = uVar8 * 0x120;
    plVar15 = (longlong *)(*(longlong *)(lVar9 + 8) + lVar14);
    if (*(int *)(*(longlong *)(lVar9 + 8) + lVar14) != 2) {
      plStack_70 = plVar15;
      pdb_1404ce7e0(plVar15 + 9);
      plVar15 = plStack_70;
      lVar10 = plStack_70[0x1b];
      if (lVar10 != 0) {
        uVar13 = lVar10 * 8 + 0x17U & 0xfffffffffffffff0;
        pub_1406abac0((byte *)(plStack_70[0x1a] - uVar13),lVar10 + uVar13 + 0x11,0x10);
      }
      if (plVar15[0x17] != 0) {
        pub_1406abac0((byte *)plVar15[0x18],plVar15[0x17] << 4,8);
      }
    }
    pub_142e32760(plVar15,&lStack_228,0x120);
    lStack_228 = lVar5;
    lStack_220 = uVar6;
    pdb_1403b0980(lVar9 + 0x18,&lStack_228,uVar8);
    lVar9 = param_1[2];
    if (lVar9 == *param_1) {
      pdb_142db0920(param_1);
    }
    *(ulonglong *)(param_1[1] + lVar9 * 8) = uVar8;
    param_1[2] = lVar9 + 1;
    lStack_e0 = 0;
    lStack_d8 = 8;
    lStack_d0 = 0;
    lStack_c8 = _DAT_1435112c0;
    lStack_c0 = _UNK_1435112c8;
    lStack_b8 = _DAT_1435112d0;
    lStack_b0 = _UNK_1435112d8;
    pcStack_a8 = (code *)0x0;
    lStack_a0 = 8;
    lStack_98 = 0;
    lStack_90 = _DAT_1435112c0;
    lStack_88 = _UNK_1435112c8;
    lStack_80 = _DAT_1435112d0;
    lStack_78 = _UNK_1435112d8;
    uStack_62 = 1;
    plStack_f0 = param_1;
    plStack_e8 = &lStack_e0;
    pdb_14007ee60(uVar8,&plStack_f0);
    uStack_62 = 1;
    pdb_140f03610(param_1[3],uVar8,&lStack_e0);
    if (param_1[2] != 0) {
      param_1[2] = param_1[2] + -1;
    }
    lStack_1c8 = lStack_80;
    lStack_1c0 = lStack_78;
    lStack_1d8 = lStack_90;
    lStack_1d0 = lStack_88;
    lStack_1e8 = lStack_a0;
    lStack_1e0 = lStack_98;
    lStack_1f8 = lStack_b0;
    lStack_1f0 = (longlong)pcStack_a8;
    lStack_208 = lStack_c0;
    lStack_200 = lStack_b8;
    lStack_218 = lStack_d0;
    lStack_210 = lStack_c8;
    lStack_228 = lStack_e0;
    lStack_220 = lStack_d8;
    plStack_70 = (longlong *)(*(longlong *)(param_1[3] + 8) + lVar14 + 0x48);
    pdb_1404ce7e0();
    plStack_70[0xc] = lStack_1c8;
    plStack_70[0xd] = lStack_1c0;
    plStack_70[10] = lStack_1d8;
    plStack_70[0xb] = lStack_1d0;
    plStack_70[8] = lStack_1e8;
    plStack_70[9] = lStack_1e0;
    plStack_70[6] = lStack_1f8;
    plStack_70[7] = lStack_1f0;
    plStack_70[4] = lStack_208;
    plStack_70[5] = lStack_200;
    plStack_70[2] = lStack_218;
    plStack_70[3] = lStack_210;
    *plStack_70 = lStack_228;
    plStack_70[1] = lStack_220;
    lVar9 = param_2[2];
    if (lVar9 != *param_2) goto LAB_1424cab57;
  }
  else {
    lStack_88 = lStack_1c0;
    lStack_98 = lStack_1d0;
    lStack_90 = lStack_1c8;
    pcStack_a8 = (code *)lStack_1e0;
    lStack_a0 = lStack_1d8;
    lStack_b8 = lStack_1f0;
    lStack_b0 = lStack_1e8;
    lStack_c8 = lStack_200;
    lStack_c0 = lStack_1f8;
    lStack_d8 = lStack_210;
    lStack_d0 = lStack_208;
    lStack_e0 = lStack_218;
    uVar8 = pdb_140f275b0(&lStack_e0,param_1);
    lVar9 = param_2[2];
    if (lVar9 != *param_2) goto LAB_1424cab57;
  }
LAB_1424cab4f:
  pdb_142db0920(param_2);
LAB_1424cab57:
  *(ulonglong *)(param_2[1] + lVar9 * 8) = uVar8;
  param_2[2] = lVar9 + 1;
  return;
}

