// VA 0x140b26860, PDB extent 2102 bytes
// country_core::systems::render_loop::compute_passes::image_baker::bake_grass2_world_albedo_tint_from_env
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/render_loop/compute_passes/image_baker.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::systems::render_loop::compute_passes::image_baker::bake_grass2_world_albedo_tint_from_env
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/render_loop/compute_passes/image_baker.rs
   Extent: 2102 */

void pdb_140b26860(longlong param_1,longlong param_2)

{
  char *pcVar1;
  undefined1 auVar2 [16];
  uint uVar3;
  uint uVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  byte *arg0;
  longlong lVar9;
  byte *arg1;
  ulonglong uVar10;
  longlong lVar11;
  uint uVar12;
  ushort uVar13;
  ulonglong uVar14;
  bool bVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auStack_1f8 [24];
  int aiStack_1e0 [2];
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  byte *pbStack_154;
  undefined8 uStack_14c;
  undefined4 uStack_144;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined1 *puStack_128;
  byte **ppbStack_120;
  undefined8 uStack_118;
  undefined4 uStack_110;
  byte *pbStack_108;
  byte *pbStack_100;
  byte *pbStack_f8;
  byte *pbStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_80;
  byte *pbStack_78;
  byte *pbStack_70;
  byte *pbStack_68;
  undefined1 uStack_60;
  undefined7 uStack_5f;
  byte *pbStack_58;
  byte *pbStack_50;
  undefined4 uStack_48;
  undefined1 uStack_43;
  undefined1 uStack_42;
  undefined1 uStack_41;
  undefined8 uStack_40;
  
  uStack_40 = 0xfffffffffffffffe;
  pdb_140f4c440(&pbStack_108,&UNK_143056c09,0x20);
  if (SBORROW8(0,(longlong)pbStack_108)) {
    return;
  }
  arg1 = pbStack_108;
  arg0 = pbStack_100;
  if (pbStack_108 != (byte *)0x8000000000000001) {
joined_r0x000140b26937:
    if (arg1 != (byte *)0x0) {
LAB_140b26947:
      pub_1406abac0(arg0,(ulonglong)arg1,1);
    }
    return;
  }
  LOCK();
  bVar15 = DAT_143cb2d04 == '\0';
  if (bVar15) {
    DAT_143cb2d04 = '\x01';
  }
  UNLOCK();
  arg1 = pbStack_100;
  arg0 = pbStack_f8;
  if (!bVar15) goto joined_r0x000140b26937;
  pbStack_58 = pbStack_100;
  pbStack_50 = pbStack_f8;
  if (pbStack_f0 == (byte *)0x4) {
    if (*(int *)pbStack_f8 != 0x65757274) goto LAB_140b26974;
  }
  else if (pbStack_f0 == (byte *)0x1) {
    if (*pbStack_f8 != 0x31) goto LAB_140b26974;
  }
  else if (pbStack_f0 != (byte *)0x0) {
LAB_140b26974:
    pbStack_78 = pbStack_100;
    pbStack_70 = pbStack_f8;
    pbStack_68 = pbStack_f0;
    uStack_60 = 1;
    uStack_48 = 0;
    goto LAB_140b2699a;
  }
  uStack_43 = 1;
  uStack_48 = 1;
  pdb_140f60120(&pbStack_78,&UNK_143056c29,0x21);
LAB_140b2699a:
  uVar8 = *(undefined8 *)(param_1 + 0x1e8);
  uStack_42 = 1;
  uVar5 = pdb_140e1d0f0(0x100000,0x30);
  uStack_42 = 1;
  pdb_140e55ce0(aiStack_1e0,uVar8,&UNK_143056c4a,0x26,uVar5);
  if (aiStack_1e0[0] != 0xb) {
    uStack_c8 = uStack_1a0;
    uStack_c0 = uStack_198;
    uStack_d8 = uStack_1b0;
    uStack_d0 = uStack_1a8;
    uStack_e8 = uStack_1c0;
    uStack_e0 = uStack_1b8;
    pbStack_f8 = (byte *)uStack_1d0;
    pbStack_f0 = (byte *)uStack_1c8;
    pbStack_100 = (byte *)uStack_1d8;
                    /* WARNING: Subroutine does not return */
    pdb_142dc8170(&UNK_143056c70,0x2d,&pbStack_108,&UNK_143057518,&UNK_143056ca0);
  }
  uStack_80 = uStack_1d8;
  pub_142e32780(uStack_1d0,0);
  if (*(longlong *)(param_2 + 0x88) != 0) {
    lVar6 = *(longlong *)(param_2 + 0x70);
    uVar10 = 0x7057b4358e925fdb;
    lVar11 = 0;
    while( true ) {
      uVar10 = uVar10 & *(ulonglong *)(param_2 + 0x78);
      auVar2 = *(undefined1 (*) [16])(lVar6 + uVar10);
      auVar17[0] = -(auVar2[0] == DAT_142e33d90);
      auVar17[1] = -(auVar2[1] == DAT_142e33d90._1_1_);
      auVar17[2] = -(auVar2[2] == DAT_142e33d90._2_1_);
      auVar17[3] = -(auVar2[3] == DAT_142e33d90._3_1_);
      auVar17[4] = -(auVar2[4] == DAT_142e33d90._4_1_);
      auVar17[5] = -(auVar2[5] == DAT_142e33d90._5_1_);
      auVar17[6] = -(auVar2[6] == DAT_142e33d90._6_1_);
      auVar17[7] = -(auVar2[7] == DAT_142e33d90._7_1_);
      auVar17[8] = -(auVar2[8] == DAT_142e33d90._8_1_);
      auVar17[9] = -(auVar2[9] == DAT_142e33d90._9_1_);
      auVar17[10] = -(auVar2[10] == DAT_142e33d90._10_1_);
      auVar17[0xb] = -(auVar2[0xb] == DAT_142e33d90._11_1_);
      auVar17[0xc] = -(auVar2[0xc] == DAT_142e33d90._12_1_);
      auVar17[0xd] = -(auVar2[0xd] == DAT_142e33d90._13_1_);
      auVar17[0xe] = -(auVar2[0xe] == DAT_142e33d90._14_1_);
      auVar17[0xf] = -(auVar2[0xf] == DAT_142e33d90._15_1_);
      uVar13 = (ushort)(SUB161(auVar17 >> 7,0) & 1) | (ushort)(SUB161(auVar17 >> 0xf,0) & 1) << 1 |
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
      uVar12 = (uint)uVar13;
      while (uVar13 != 0) {
        uVar3 = 0;
        for (uVar4 = uVar12; (uVar4 & 1) == 0; uVar4 = uVar4 >> 1 | 0x80000000) {
          uVar3 = uVar3 + 1;
        }
        uVar14 = uVar3 + uVar10 & *(ulonglong *)(param_2 + 0x78);
        pcVar1 = (char *)(lVar6 + -0x18 + uVar14 * -0x18);
        auVar18[0] = -(*pcVar1 == DAT_142e34350);
        auVar18[1] = -(pcVar1[1] == DAT_142e34350._1_1_);
        auVar18[2] = -(pcVar1[2] == DAT_142e34350._2_1_);
        auVar18[3] = -(pcVar1[3] == DAT_142e34350._3_1_);
        auVar18[4] = -(pcVar1[4] == DAT_142e34350._4_1_);
        auVar18[5] = -(pcVar1[5] == DAT_142e34350._5_1_);
        auVar18[6] = -(pcVar1[6] == DAT_142e34350._6_1_);
        auVar18[7] = -(pcVar1[7] == DAT_142e34350._7_1_);
        auVar18[8] = -(pcVar1[8] == DAT_142e34350._8_1_);
        auVar18[9] = -(pcVar1[9] == DAT_142e34350._9_1_);
        auVar18[10] = -(pcVar1[10] == DAT_142e34350._10_1_);
        auVar18[0xb] = -(pcVar1[0xb] == DAT_142e34350._11_1_);
        auVar18[0xc] = -(pcVar1[0xc] == DAT_142e34350._12_1_);
        auVar18[0xd] = -(pcVar1[0xd] == DAT_142e34350._13_1_);
        auVar18[0xe] = -(pcVar1[0xe] == DAT_142e34350._14_1_);
        auVar18[0xf] = -(pcVar1[0xf] == DAT_142e34350._15_1_);
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
          uVar10 = *(ulonglong *)(lVar6 + uVar14 * -0x18 + -8);
          if ((*(ulonglong *)(param_2 + 0x210) <= uVar10) ||
             (uVar10 = *(ulonglong *)(*(longlong *)(param_2 + 0x208) + uVar10 * 8), uVar10 == 0))
          goto LAB_140b26db7;
          lVar6 = ~uVar10 * 0x40;
          if (*(longlong *)(*(longlong *)(param_2 + 0x1d8) + 0x20 + lVar6) == 0) goto LAB_140b26db7;
          uVar8 = *(undefined8 *)(*(longlong *)(param_2 + 0x1d8) + lVar6 + 0x10);
          uStack_41 = 1;
          uVar5 = pdb_140df4400(&UNK_143056cd0,0x10);
          uStack_41 = 1;
          puVar7 = (undefined8 *)pdb_140a2e580(uVar8,uVar5);
          uStack_41 = 1;
          pdb_140e1ea30(auStack_1f8,*puVar7,param_1,0x23,&UNK_143330ab0);
          uStack_41 = 1;
          pdb_140e1e250(&pbStack_154,uStack_1d8,param_1,0,&UNK_143330058);
          uStack_140 = 0;
          uStack_138 = 8;
          uStack_130 = 0;
          uStack_41 = 1;
          uVar8 = pdb_14177be60(*(undefined8 *)(param_1 + 0x208),&UNK_143330daf,0x2f,&uStack_140);
          uStack_41 = 1;
          pdb_140e291c0(&pbStack_108,&UNK_143330daf,0x2f,uVar8,param_1);
          uStack_118 = 0x20000000200;
          uStack_110 = 0x40800000;
          uStack_41 = 1;
          puStack_128 = auStack_1f8;
          ppbStack_120 = &pbStack_154;
          pdb_14178d790(aiStack_1e0,&pbStack_108,&puStack_128);
          pub_142e32760(&pbStack_108,aiStack_1e0,0x88);
          puStack_128 = _DAT_1430569e0;
          ppbStack_120 = (byte **)_UNK_1430569e8;
          uStack_41 = 1;
          pdb_140e28810(&pbStack_108,&puStack_128);
          pbStack_f8 = (byte *)CONCAT44(pbStack_f8._4_4_,uStack_144);
          pbStack_108 = pbStack_154;
          pbStack_100 = (byte *)uStack_14c;
          uStack_41 = 1;
          pdb_140e1e2e0(&pbStack_108,param_1,0x23);
          if (_DAT_143ca4408 != 2) {
            uStack_41 = 1;
            pdb_142d8fa30(&DAT_143ca4408,&DAT_143ca4408);
          }
          LOCK();
          bVar15 = DAT_143ca4418 == '\0';
          if (bVar15) {
            DAT_143ca4418 = '\x01';
          }
          UNLOCK();
          if (!bVar15) {
            uStack_41 = 1;
            pdb_142dbd1a0(&DAT_143ca4418);
          }
          uStack_41 = 1;
          pdb_140e9a150(&DAT_143ca4418);
          lVar6 = _DAT_143ca4430;
          pbStack_f0 = (byte *)CONCAT71(uStack_5f,uStack_60);
          pbStack_f8 = pbStack_68;
          pbStack_108 = pbStack_78;
          pbStack_100 = pbStack_70;
          uStack_e8 = uStack_1d8;
          uStack_e0 = uStack_1d0;
          uStack_d8 = uStack_1c8;
          uStack_d0 = CONCAT44(uStack_d0._4_4_,0x2000200);
          if (_DAT_143ca4430 == _DAT_143ca4420) {
            pdb_142d7ee50(&DAT_143ca4420);
          }
          lVar11 = _DAT_143ca4428;
          lVar9 = lVar6 * 0x40;
          puVar7 = (undefined8 *)(_DAT_143ca4428 + 0x30 + lVar9);
          *puVar7 = uStack_d8;
          puVar7[1] = uStack_d0;
          puVar7 = (undefined8 *)(lVar11 + 0x20 + lVar9);
          *puVar7 = uStack_e8;
          puVar7[1] = uStack_e0;
          puVar7 = (undefined8 *)(lVar11 + 0x10 + lVar9);
          *puVar7 = pbStack_f8;
          puVar7[1] = pbStack_f0;
          *(undefined8 *)(lVar11 + lVar9) = pbStack_108;
          ((undefined8 *)(lVar11 + lVar9))[1] = pbStack_100;
          _DAT_143ca4430 = lVar6 + 1;
          uStack_41 = 0;
          pdb_140e9a350();
          LOCK();
          bVar15 = DAT_143ca4418 == '\x01';
          if (bVar15) {
            DAT_143ca4418 = '\0';
          }
          UNLOCK();
          if (!bVar15) {
            uStack_41 = 0;
            pdb_142dbcef0(&DAT_143ca4418,0);
          }
          arg0 = pbStack_50;
          arg1 = pbStack_58;
          if (((byte)uStack_48 & pbStack_58 != (byte *)0x0) != 1) {
            return;
          }
          goto LAB_140b26947;
        }
        uVar13 = (ushort)(uVar12 - 1) & (ushort)uVar12;
        uVar12 = CONCAT22((short)(uVar12 - 1 >> 0x10),uVar13);
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
      uVar10 = uVar10 + lVar11 + 0x10;
      lVar11 = lVar11 + 0x10;
    }
  }
LAB_140b26db7:
  uStack_41 = 1;
                    /* WARNING: Subroutine does not return */
  pdb_142dc8150(&UNK_143056cb8);
}

