// VA 0x140b053f0, PDB extent 1226 bytes
// country_core::systems::render_loop::compute_passes::restir_di::restir_sample_direct_lights
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/render_loop/compute_passes/restir_di.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::systems::render_loop::compute_passes::restir_di::restir_sample_direct_lights
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/render_loop/compute_passes/restir_di.rs
   Extent: 1226 */

undefined8 *
pdb_140b053f0(undefined8 *param_1,longlong param_2,longlong param_3,longlong param_4,
             undefined8 param_5,undefined8 param_6,longlong param_7)

{
  char *pcVar1;
  undefined1 auVar2 [16];
  undefined8 uVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  ulonglong uVar9;
  longlong lVar10;
  uint uVar11;
  ushort uVar12;
  ulonglong uVar13;
  int iVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auStack_21c [20];
  undefined1 auStack_208 [8];
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined1 *puStack_1e8;
  longlong lStack_1e0;
  longlong lStack_1d8;
  undefined8 uStack_1d0;
  longlong lStack_1c8;
  undefined1 *puStack_1c0;
  undefined8 *puStack_1b8;
  uint uStack_1b0;
  int iStack_1ac;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined2 uStack_190;
  undefined2 uStack_18e;
  undefined4 uStack_18c;
  undefined2 uStack_188;
  undefined2 uStack_186;
  undefined2 uStack_184;
  undefined1 uStack_182;
  undefined1 uStack_181;
  undefined4 uStack_180;
  uint uStack_17c;
  undefined4 uStack_178;
  undefined4 uStack_174;
  undefined8 uStack_16c;
  undefined8 uStack_164;
  byte bStack_15c;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 *puStack_60;
  longlong lStack_58;
  uint uStack_50;
  uint uStack_4c;
  undefined8 uStack_48;
  
  uStack_48 = 0xfffffffffffffffe;
  if (*(longlong *)(param_3 + 0x88) != 0) {
    lVar6 = *(longlong *)(param_3 + 0x70);
    uVar9 = 0x1d6a82b468dfb8a2;
    lVar10 = 0;
    while( true ) {
      uVar9 = uVar9 & *(ulonglong *)(param_3 + 0x78);
      auVar2 = *(undefined1 (*) [16])(lVar6 + uVar9);
      auVar16[0] = -(auVar2[0] == DAT_142e34ec0);
      auVar16[1] = -(auVar2[1] == DAT_142e34ec0._1_1_);
      auVar16[2] = -(auVar2[2] == DAT_142e34ec0._2_1_);
      auVar16[3] = -(auVar2[3] == DAT_142e34ec0._3_1_);
      auVar16[4] = -(auVar2[4] == DAT_142e34ec0._4_1_);
      auVar16[5] = -(auVar2[5] == DAT_142e34ec0._5_1_);
      auVar16[6] = -(auVar2[6] == DAT_142e34ec0._6_1_);
      auVar16[7] = -(auVar2[7] == DAT_142e34ec0._7_1_);
      auVar16[8] = -(auVar2[8] == DAT_142e34ec0._8_1_);
      auVar16[9] = -(auVar2[9] == DAT_142e34ec0._9_1_);
      auVar16[10] = -(auVar2[10] == DAT_142e34ec0._10_1_);
      auVar16[0xb] = -(auVar2[0xb] == DAT_142e34ec0._11_1_);
      auVar16[0xc] = -(auVar2[0xc] == DAT_142e34ec0._12_1_);
      auVar16[0xd] = -(auVar2[0xd] == DAT_142e34ec0._13_1_);
      auVar16[0xe] = -(auVar2[0xe] == DAT_142e34ec0._14_1_);
      auVar16[0xf] = -(auVar2[0xf] == DAT_142e34ec0._15_1_);
      uVar12 = (ushort)(SUB161(auVar16 >> 7,0) & 1) | (ushort)(SUB161(auVar16 >> 0xf,0) & 1) << 1 |
               (ushort)(SUB161(auVar16 >> 0x17,0) & 1) << 2 |
               (ushort)(SUB161(auVar16 >> 0x1f,0) & 1) << 3 |
               (ushort)(SUB161(auVar16 >> 0x27,0) & 1) << 4 |
               (ushort)(SUB161(auVar16 >> 0x2f,0) & 1) << 5 |
               (ushort)(SUB161(auVar16 >> 0x37,0) & 1) << 6 |
               (ushort)(SUB161(auVar16 >> 0x3f,0) & 1) << 7 |
               (ushort)(SUB161(auVar16 >> 0x47,0) & 1) << 8 |
               (ushort)(SUB161(auVar16 >> 0x4f,0) & 1) << 9 |
               (ushort)(SUB161(auVar16 >> 0x57,0) & 1) << 10 |
               (ushort)(SUB161(auVar16 >> 0x5f,0) & 1) << 0xb |
               (ushort)(SUB161(auVar16 >> 0x67,0) & 1) << 0xc |
               (ushort)(SUB161(auVar16 >> 0x6f,0) & 1) << 0xd |
               (ushort)(SUB161(auVar16 >> 0x77,0) & 1) << 0xe | (ushort)(auVar16[0xf] >> 7) << 0xf;
      uVar11 = (uint)uVar12;
      while (uVar12 != 0) {
        uVar4 = 0;
        for (uVar5 = uVar11; (uVar5 & 1) == 0; uVar5 = uVar5 >> 1 | 0x80000000) {
          uVar4 = uVar4 + 1;
        }
        uVar13 = uVar4 + uVar9 & *(ulonglong *)(param_3 + 0x78);
        pcVar1 = (char *)(lVar6 + -0x18 + uVar13 * -0x18);
        auVar17[0] = -(*pcVar1 == DAT_142e60e60);
        auVar17[1] = -(pcVar1[1] == DAT_142e60e60._1_1_);
        auVar17[2] = -(pcVar1[2] == DAT_142e60e60._2_1_);
        auVar17[3] = -(pcVar1[3] == DAT_142e60e60._3_1_);
        auVar17[4] = -(pcVar1[4] == DAT_142e60e60._4_1_);
        auVar17[5] = -(pcVar1[5] == DAT_142e60e60._5_1_);
        auVar17[6] = -(pcVar1[6] == DAT_142e60e60._6_1_);
        auVar17[7] = -(pcVar1[7] == DAT_142e60e60._7_1_);
        auVar17[8] = -(pcVar1[8] == DAT_142e60e60._8_1_);
        auVar17[9] = -(pcVar1[9] == DAT_142e60e60._9_1_);
        auVar17[10] = -(pcVar1[10] == DAT_142e60e60._10_1_);
        auVar17[0xb] = -(pcVar1[0xb] == DAT_142e60e60._11_1_);
        auVar17[0xc] = -(pcVar1[0xc] == DAT_142e60e60._12_1_);
        auVar17[0xd] = -(pcVar1[0xd] == DAT_142e60e60._13_1_);
        auVar17[0xe] = -(pcVar1[0xe] == DAT_142e60e60._14_1_);
        auVar17[0xf] = -(pcVar1[0xf] == DAT_142e60e60._15_1_);
        if ((ushort)((ushort)(SUB161(auVar17 >> 7,0) & 1) |
                     (ushort)(SUB161(auVar17 >> 0xf,0) & 1) << 1 |
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
                     (ushort)(SUB161(auVar17 >> 0x77,0) & 1) << 0xe |
                    (ushort)(auVar17[0xf] >> 7) << 0xf) == 0xffff) {
          uVar9 = *(ulonglong *)(lVar6 + uVar13 * -0x18 + -8);
          if ((uVar9 < *(ulonglong *)(param_3 + 0x210)) &&
             (uVar9 = *(ulonglong *)(*(longlong *)(param_3 + 0x208) + uVar9 * 8), uVar9 != 0)) {
            lVar6 = ~uVar9 * 0x40;
            if (*(longlong *)(*(longlong *)(param_3 + 0x1d8) + 0x20 + lVar6) != 0) {
              uVar3 = *(undefined8 *)(*(longlong *)(param_3 + 0x1d8) + lVar6 + 0x10);
              puVar7 = (undefined8 *)pdb_140bf45b0(uVar3,&UNK_14331c960);
              if ((puVar7 != (undefined8 *)0x0) &&
                 (lVar6 = (**(code **)(puVar7[1] + 0x18))(*puVar7), lVar6 != 0)) {
                uVar8 = *(undefined8 *)(lVar6 + 8);
                pdb_141526380(auStack_21c,uVar3,param_2);
                iVar14 = (int)uVar8;
                if (iVar14 == 0) {
                  uStack_190 = 0;
                  uStack_18e = 1;
                  uStack_18c = 0x10001;
                  uStack_188 = 1;
                  uStack_186 = 0x6501;
                  uStack_184 = 0x201;
                  uStack_182 = 0;
                  uStack_180 = 0x43053560;
                  uStack_17c = 1;
                  uStack_178 = 0x1a;
                  uStack_174 = 0;
                  uStack_18c = pdb_140e2b4e0(param_2,&uStack_190);
                  uStack_188 = 1;
                  uStack_186 = 1;
                  uStack_184 = 1;
                  uStack_182 = 1;
                  uStack_181 = 0;
                  uStack_180 = 0x2016501;
                  uStack_17c = uStack_17c & 0xffffff00;
                  uStack_190 = 0;
                  uStack_18e = 0;
                  if (*(char *)(param_2 + 0x24c) == '\x01') {
                    pdb_140e19620(&uStack_190,param_2);
                  }
                  uStack_f8 = CONCAT44(uStack_17c,uStack_180);
                  uStack_108 = CONCAT44(uStack_18c,CONCAT22(uStack_18e,uStack_190));
                  uStack_100 = CONCAT17(uStack_181,
                                        CONCAT16(uStack_182,
                                                 CONCAT24(uStack_184,CONCAT22(uStack_186,uStack_188)
                                                         )));
                }
                else {
                  uVar12 = *(ushort *)(param_4 + 10);
                  uStack_50 = (uint)*(ushort *)(param_4 + 8);
                  uStack_108 = (ulonglong)*(uint *)(param_4 + 8) << 0x20;
                  uStack_100 = 0x165011800010001;
                  uStack_f8 = CONCAT71(uStack_f8._1_7_,2);
                  pdb_14174a370(&uStack_190,param_2,&UNK_14305357a,0xe,&uStack_108);
                  if (CONCAT22(uStack_18e,uStack_190) == 1) {
                    /* WARNING: Subroutine does not return */
                    pdb_142dc8170(&UNK_1430538c0,0x2b,&uStack_108,&UNK_1430538a0,&UNK_143053588);
                  }
                  uStack_78 = CONCAT26(uStack_186,CONCAT24(uStack_188,uStack_18c));
                  uStack_70 = CONCAT44(uStack_180,
                                       CONCAT13(uStack_181,CONCAT12(uStack_182,uStack_184)));
                  uStack_68 = CONCAT44(uStack_178,uStack_17c);
                  uStack_e8 = uStack_16c;
                  uStack_e0 = uStack_164;
                  uStack_1f8 = uStack_164;
                  uStack_200 = uStack_16c;
                  lStack_58 = param_7 + 0x14;
                  uStack_1a8 = 0;
                  uStack_1a0 = 8;
                  uStack_198 = 0;
                  puStack_60 = param_1;
                  uStack_4c = (uint)uVar12;
                  uVar8 = pdb_14177be60(*(undefined8 *)(param_2 + 0x208),&UNK_1433313f0,0x1e,
                                        &uStack_1a8);
                  pdb_140e291c0(&uStack_108,&UNK_1433313f0,0x1e,uVar8,param_2);
                  uStack_1f0 = param_6;
                  puStack_1e8 = auStack_21c;
                  lStack_1d8 = lStack_58;
                  uStack_1d0 = param_5;
                  lStack_1c8 = param_7;
                  puStack_1c0 = auStack_208;
                  puStack_1b8 = &uStack_78;
                  lStack_1e0 = param_4;
                  uStack_1b0 = bStack_15c & 1;
                  iStack_1ac = iVar14;
                  pdb_141799980(&uStack_190,&uStack_108,&uStack_1f0);
                  param_1 = puStack_60;
                  uStack_100 = CONCAT44(1,uStack_4c);
                  uStack_108 = CONCAT44(uStack_50,1);
                  pdb_140e28810(&uStack_190,&uStack_108);
                  uStack_108 = uStack_78;
                  uStack_100 = uStack_70;
                  uStack_f8 = uStack_68;
                }
                pdb_141535000(uVar3,param_2);
                param_1[2] = uStack_f8;
                *param_1 = uStack_108;
                param_1[1] = uStack_100;
                return param_1;
              }
                    /* WARNING: Subroutine does not return */
              pdb_142dc8150(&UNK_143053548);
            }
          }
          goto LAB_140b05761;
        }
        uVar12 = (ushort)(uVar11 - 1) & (ushort)uVar11;
        uVar11 = CONCAT22((short)(uVar11 - 1 >> 0x10),uVar12);
      }
      auVar15[0] = -(auVar2[0] == -1);
      auVar15[1] = -(auVar2[1] == -1);
      auVar15[2] = -(auVar2[2] == -1);
      auVar15[3] = -(auVar2[3] == -1);
      auVar15[4] = -(auVar2[4] == -1);
      auVar15[5] = -(auVar2[5] == -1);
      auVar15[6] = -(auVar2[6] == -1);
      auVar15[7] = -(auVar2[7] == -1);
      auVar15[8] = -(auVar2[8] == -1);
      auVar15[9] = -(auVar2[9] == -1);
      auVar15[10] = -(auVar2[10] == -1);
      auVar15[0xb] = -(auVar2[0xb] == -1);
      auVar15[0xc] = -(auVar2[0xc] == -1);
      auVar15[0xd] = -(auVar2[0xd] == -1);
      auVar15[0xe] = -(auVar2[0xe] == -1);
      auVar15[0xf] = -(auVar2[0xf] == -1);
      if ((((((((((((((((SUB161(auVar15 >> 7,0) & 1) != 0 || (SUB161(auVar15 >> 0xf,0) & 1) != 0) ||
                      (SUB161(auVar15 >> 0x17,0) & 1) != 0) || (SUB161(auVar15 >> 0x1f,0) & 1) != 0)
                    || (SUB161(auVar15 >> 0x27,0) & 1) != 0) || (SUB161(auVar15 >> 0x2f,0) & 1) != 0
                   ) || (SUB161(auVar15 >> 0x37,0) & 1) != 0) ||
                 (SUB161(auVar15 >> 0x3f,0) & 1) != 0) || (SUB161(auVar15 >> 0x47,0) & 1) != 0) ||
               (SUB161(auVar15 >> 0x4f,0) & 1) != 0) || (SUB161(auVar15 >> 0x57,0) & 1) != 0) ||
             (SUB161(auVar15 >> 0x5f,0) & 1) != 0) || (SUB161(auVar15 >> 0x67,0) & 1) != 0) ||
           (SUB161(auVar15 >> 0x6f,0) & 1) != 0) || (SUB161(auVar15 >> 0x77,0) & 1) != 0) ||
          auVar15[0xf] < '\0') break;
      uVar9 = uVar9 + lVar10 + 0x10;
      lVar10 = lVar10 + 0x10;
    }
  }
LAB_140b05761:
                    /* WARNING: Subroutine does not return */
  pdb_142dc8150(&UNK_143053530);
}

