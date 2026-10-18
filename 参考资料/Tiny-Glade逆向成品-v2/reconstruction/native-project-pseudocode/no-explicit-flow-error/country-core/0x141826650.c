// VA 0x141826650, PDB extent 2810 bytes
// country_core::startup::load_mesh_atlases::load_nani_meshes<country_core::startup::load_mesh_atlases::load_mesh_atlases::closure_env$0>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/startup/load_mesh_atlases.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::startup::load_mesh_atlases::load_nani_meshes<country_core::startup::load_mesh_atlases::load_mesh_atlases::closure_env$0>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/startup/load_mesh_atlases.rs
   Extent: 2810 */

void pdb_141826650(undefined8 param_1,int *param_2)

{
  undefined1 auVar1 [16];
  longlong *plVar2;
  longlong lVar3;
  code *pcVar4;
  uint uVar5;
  uint uVar6;
  ulonglong uVar7;
  longlong lVar8;
  byte *pbVar9;
  ulonglong *puVar10;
  ulonglong *puVar11;
  longlong lVar12;
  ulonglong uVar13;
  undefined1 (*pauVar14) [16];
  ulonglong uVar15;
  ulonglong uVar16;
  uint uVar17;
  ulonglong *puVar18;
  longlong lVar19;
  undefined1 (*pauVar20) [16];
  ulonglong *puVar21;
  bool bVar22;
  ulonglong *puStack_258;
  ulonglong *puStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  ulonglong uStack_218;
  ulonglong uStack_208;
  undefined8 uStack_200;
  ulonglong *puStack_1f8;
  int *piStack_1f0;
  ulonglong uStack_1e8;
  ulonglong *puStack_1e0;
  ulonglong *puStack_1d8;
  byte *pbStack_1d0;
  undefined8 uStack_1c8;
  undefined1 uStack_1c0;
  undefined8 uStack_1b8;
  ulonglong *puStack_1b0;
  undefined4 uStack_1a8;
  undefined4 uStack_1a4;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  uint uStack_198;
  undefined4 uStack_194;
  undefined4 uStack_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  longlong lStack_178;
  ulonglong uStack_170;
  longlong lStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  ulonglong uStack_138;
  ulonglong *puStack_130;
  undefined8 uStack_128;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  ulonglong uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  ulonglong *puStack_d0;
  ulonglong *puStack_c8;
  ulonglong *puStack_c0;
  ulonglong *puStack_b8;
  ulonglong *puStack_b0;
  code *pcStack_a8;
  undefined8 uStack_a0;
  ulonglong *puStack_98;
  code *pcStack_90;
  undefined8 uStack_88;
  ulonglong uStack_78;
  byte *pbStack_70;
  ulonglong uStack_68;
  ulonglong uStack_60;
  ulonglong *puStack_58;
  char cStack_49;
  undefined8 uStack_48;
  
  uStack_48 = 0xfffffffffffffffe;
  uStack_200 = param_1;
  pdb_140d929f0(&uStack_138,&UNK_143340be8,0x16);
  uStack_1b8 = (byte *)((ulonglong)uStack_1b8._4_4_ << 0x20);
  puStack_1b0 = (ulonglong *)0x0;
  uStack_1a8 = 7;
  uStack_1a4 = 0;
  uStack_19c = 0;
  uStack_198 = uStack_198 & 0xffffff00;
  uStack_1a0 = 1;
  puStack_58 = puStack_130;
  puVar10 = puStack_130;
  lVar8 = pdb_140f4a2a0(&uStack_1b8,puStack_130,uStack_128);
  if (uStack_138 != 0) {
    pub_1406abac0((byte *)puStack_58,uStack_138,1);
  }
  if (lVar8 == 1) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc8170(&UNK_143340bfe,0x14,&uStack_1b8,&UNK_143341158,&UNK_143340c48);
  }
  pdb_14007ee60();
  pbVar9 = pub_1406abab0(0x2000,1);
  if (pbVar9 == (byte *)0x0) {
    puStack_58 = puVar10;
    pdb_142dc7e2a(1,0x2000);
LAB_141826e6d:
                    /* WARNING: Does not return */
    pcVar4 = (code *)invalidInstructionException();
    (*pcVar4)();
  }
  puStack_1b0 = (ulonglong *)0x2000;
  uStack_1a8 = 0;
  uStack_1a4 = 0;
  uStack_1a0 = 0;
  uStack_19c = 0;
  uStack_198 = 0;
  uStack_194 = 0;
  uStack_248 = 0;
  puStack_258 = (ulonglong *)0x1;
  puStack_250 = (ulonglong *)0x80;
  uStack_1b8 = pbVar9;
  pdb_141741830(&uStack_138,&puStack_258,&uStack_1b8);
  if ((char)uStack_138 != '2') {
    uStack_158 = uStack_d8;
    lStack_168 = uStack_e8;
    uStack_160 = uStack_e0;
    uStack_170 = uStack_f0;
    uStack_188 = uStack_108;
    uStack_184 = uStack_104;
    uStack_180 = uStack_100;
    uStack_17c = uStack_fc;
    uStack_198 = uStack_118;
    uStack_194 = uStack_114;
    uStack_1a8 = (undefined4)uStack_128;
    uStack_1a4 = uStack_128._4_4_;
    uStack_1a0 = uStack_120;
    uStack_19c = uStack_11c;
    uStack_1b8 = (byte *)uStack_138;
    puStack_1b0 = puStack_130;
                    /* WARNING: Subroutine does not return */
    pdb_142dc8170(&UNK_143340c60,0x1b,&uStack_1b8,&UNK_143341178,&UNK_143340c80);
  }
  puStack_b8 = uStack_128 + CONCAT44(uStack_11c,uStack_120) * 10;
  puStack_d0 = uStack_128;
  puStack_c8 = uStack_128;
  puStack_c0 = puStack_130;
  puVar10 = uStack_128;
  piStack_1f0 = param_2;
  if (uStack_128 != puStack_b8) {
    do {
      puStack_c8 = puVar10 + 10;
      uVar16 = *puVar10;
      uStack_218 = puVar10[9];
      puVar11 = (ulonglong *)puVar10[7];
      uVar15 = puVar10[8];
      uStack_238 = puVar10[5];
      uVar13 = puVar10[6];
      uStack_248 = puVar10[3];
      uStack_240 = puVar10[4];
      puStack_258 = (ulonglong *)puVar10[1];
      puStack_250 = (ulonglong *)puVar10[2];
      uStack_230 = uVar13;
      uStack_228 = puVar11;
      uStack_220 = uVar15;
      if (SBORROW8(0,uVar16)) break;
      uStack_248._4_4_ = (undefined4)(uStack_248 >> 0x20);
      uStack_240._4_4_ = (undefined4)(uStack_240 >> 0x20);
      uStack_238._4_4_ = (undefined4)(uStack_238 >> 0x20);
      uStack_230._0_4_ = (undefined4)uVar13;
      uStack_230._4_4_ = (undefined4)(uVar13 >> 0x20);
      uStack_228._0_4_ = SUB84(puVar11,0);
      uStack_228._4_4_ = (undefined4)((ulonglong)puVar11 >> 0x20);
      uStack_220._0_4_ = (undefined4)uVar15;
      uStack_220._4_4_ = (undefined4)(uVar15 >> 0x20);
      uStack_100 = (undefined4)uStack_228;
      uStack_fc = uStack_228._4_4_;
      uStack_f8 = (undefined4)uStack_220;
      uStack_f4 = uStack_220._4_4_;
      uStack_110 = (undefined4)uStack_238;
      uStack_10c = uStack_238._4_4_;
      uStack_108 = (undefined4)uStack_230;
      uStack_104 = uStack_230._4_4_;
      uStack_120 = (undefined4)uStack_248;
      uStack_11c = uStack_248._4_4_;
      uStack_118 = (undefined4)uStack_240;
      uStack_114 = uStack_240._4_4_;
      uStack_f0._0_1_ = (char)uStack_218;
      cStack_49 = (char)uStack_f0;
      uStack_138 = uVar16;
      puStack_130 = puStack_258;
      uStack_128 = puStack_250;
      uStack_f0 = uStack_218;
      if ((char)uStack_f0 == '\a') {
                    /* WARNING: Subroutine does not return */
        pdb_142dc83d0(&UNK_143340c98,99,&UNK_143340cd0);
      }
      uVar16 = uVar15 * 0x20;
      puVar21 = puVar11 + uVar15 * 4;
      puVar10 = puVar11 + 5;
      puStack_1f8 = puVar21;
      uStack_1e8 = uVar13;
      puStack_1e0 = puVar11;
      while( true ) {
        uVar16 = uVar16 - 0x20;
        if (puVar11 == puVar21) break;
        puVar18 = puVar11 + 4;
        uVar15 = *puVar11;
        uVar13 = puVar11[3];
        pbVar9 = (byte *)puVar11[1];
        uVar7 = puVar11[2];
        if (SBORROW8(0,uVar15)) {
          if (puVar21 != puVar18) {
            uVar16 = uVar16 >> 5;
            do {
              if (puVar10[-1] != 0) {
                pub_1406abac0((byte *)*puVar10,puVar10[-1],1);
              }
              puVar10 = puVar10 + 4;
              uVar16 = uVar16 - 1;
            } while (uVar16 != 0);
          }
          break;
        }
        uStack_78 = uVar15;
        pbStack_70 = pbVar9;
        uStack_68 = uVar7;
        uStack_60 = uVar13;
        if ((DAT_143cb2d0c != '\x01') ||
           (uStack_60._0_1_ = (char)uVar13, bVar22 = (char)uStack_60 == '\0', puVar11 = puVar18,
           bVar22)) {
          pdb_140b1dec0(&uStack_1b8,pbVar9,uVar7,&uStack_138);
          if (param_2 != (int *)0x0) {
            puStack_b0 = &uStack_78;
            pcStack_a8 = pdb_140001020;
            pdb_140f60760(&puStack_98,&UNK_143340b70,&puStack_b0);
            puStack_1d8 = puStack_98;
            pbStack_1d0 = (byte *)pcStack_90;
            uStack_1c8 = uStack_88;
            uStack_1c0 = 1;
            if (*param_2 != 3) {
              plVar2 = *(longlong **)(param_2 + 0xe);
              LOCK();
              lVar8 = *plVar2;
              *plVar2 = *plVar2 + 1;
              UNLOCK();
              if (*plVar2 == 0 || SCARRY8(lVar8,1) != *plVar2 < 0) goto LAB_141826e6d;
              pdb_140c29560(&puStack_b0,param_2,&puStack_1d8,plVar2,uStack_f0 & 0xff);
              if (puStack_b0 != (ulonglong *)0x8000000000000004) {
                uStack_88 = uStack_a0;
                puStack_98 = puStack_b0;
                pcStack_90 = pcStack_a8;
                    /* WARNING: Subroutine does not return */
                pdb_142dc8170(&UNK_14306e978,0x1e,&puStack_98,&UNK_14306f550,&UNK_14306e998);
              }
            }
            if (puStack_1d8 != (ulonglong *)0x0) {
              pub_1406abac0(pbStack_1d0,(ulonglong)puStack_1d8,1);
            }
          }
          pdb_140a58820(uStack_200,uStack_f0 & 0xff,pbStack_70,uStack_68,&uStack_1b8);
          lVar8 = lStack_178;
          if (lStack_178 != 0) {
            uStack_208 = uVar16;
            puStack_58 = puVar18;
            if (lStack_168 != 0) {
              pauVar14 = (undefined1 (*) [16])CONCAT44(uStack_17c,uStack_180);
              auVar1 = *pauVar14;
              pauVar20 = pauVar14 + 1;
              uVar17 = ~(uint)(ushort)((ushort)(SUB161(auVar1 >> 7,0) & 1) |
                                       (ushort)(SUB161(auVar1 >> 0xf,0) & 1) << 1 |
                                       (ushort)(SUB161(auVar1 >> 0x17,0) & 1) << 2 |
                                       (ushort)(SUB161(auVar1 >> 0x1f,0) & 1) << 3 |
                                       (ushort)(SUB161(auVar1 >> 0x27,0) & 1) << 4 |
                                       (ushort)(SUB161(auVar1 >> 0x2f,0) & 1) << 5 |
                                       (ushort)(SUB161(auVar1 >> 0x37,0) & 1) << 6 |
                                       (ushort)(SUB161(auVar1 >> 0x3f,0) & 1) << 7 |
                                       (ushort)(SUB161(auVar1 >> 0x47,0) & 1) << 8 |
                                       (ushort)(SUB161(auVar1 >> 0x4f,0) & 1) << 9 |
                                       (ushort)(SUB161(auVar1 >> 0x57,0) & 1) << 10 |
                                       (ushort)(SUB161(auVar1 >> 0x5f,0) & 1) << 0xb |
                                       (ushort)(SUB161(auVar1 >> 0x67,0) & 1) << 0xc |
                                       (ushort)(SUB161(auVar1 >> 0x6f,0) & 1) << 0xd |
                                       (ushort)(SUB161(auVar1 >> 0x77,0) & 1) << 0xe |
                                      (ushort)(byte)(auVar1[0xf] >> 7) << 0xf);
              lVar19 = lStack_168;
              do {
                if ((short)uVar17 == 0) {
                  do {
                    auVar1 = *pauVar20;
                    pauVar14 = pauVar14 + -0x38;
                    pauVar20 = pauVar20 + 1;
                    uVar17 = (ushort)((ushort)(SUB161(auVar1 >> 7,0) & 1) |
                                      (ushort)(SUB161(auVar1 >> 0xf,0) & 1) << 1 |
                                      (ushort)(SUB161(auVar1 >> 0x17,0) & 1) << 2 |
                                      (ushort)(SUB161(auVar1 >> 0x1f,0) & 1) << 3 |
                                      (ushort)(SUB161(auVar1 >> 0x27,0) & 1) << 4 |
                                      (ushort)(SUB161(auVar1 >> 0x2f,0) & 1) << 5 |
                                      (ushort)(SUB161(auVar1 >> 0x37,0) & 1) << 6 |
                                      (ushort)(SUB161(auVar1 >> 0x3f,0) & 1) << 7 |
                                      (ushort)(SUB161(auVar1 >> 0x47,0) & 1) << 8 |
                                      (ushort)(SUB161(auVar1 >> 0x4f,0) & 1) << 9 |
                                      (ushort)(SUB161(auVar1 >> 0x57,0) & 1) << 10 |
                                      (ushort)(SUB161(auVar1 >> 0x5f,0) & 1) << 0xb |
                                      (ushort)(SUB161(auVar1 >> 0x67,0) & 1) << 0xc |
                                      (ushort)(SUB161(auVar1 >> 0x6f,0) & 1) << 0xd |
                                      (ushort)(SUB161(auVar1 >> 0x77,0) & 1) << 0xe |
                                     (ushort)(byte)(auVar1[0xf] >> 7) << 0xf) ^ 0xffff;
                  } while (uVar17 == 0);
                }
                uVar5 = 0;
                for (uVar6 = uVar17; (uVar6 & 1) == 0; uVar6 = uVar6 >> 1 | 0x80000000) {
                  uVar5 = uVar5 + 1;
                }
                lVar12 = (ulonglong)uVar5 * -0x38;
                uVar16 = *(ulonglong *)((longlong)pauVar14 + lVar12 + -0x38);
                if (uVar16 != 0) {
                  pub_1406abac0(*(byte **)((longlong)pauVar14 + lVar12 + -0x30),uVar16,1);
                }
                switch(*(undefined8 *)((longlong)pauVar14 + lVar12 + -0x20)) {
                case 0:
                case 2:
                  lVar3 = *(longlong *)((longlong)pauVar14 + lVar12 + -0x18);
                  if (lVar3 != 0) {
                    pbVar9 = *(byte **)((longlong)pauVar14 + lVar12 + -0x10);
                    uVar16 = lVar3 << 2;
LAB_141826a90:
                    uVar15 = 4;
code_r0x000141826a96:
                    pub_1406abac0(pbVar9,uVar16,uVar15);
                  }
                  break;
                case 1:
                  lVar3 = *(longlong *)((longlong)pauVar14 + lVar12 + -0x18);
                  if (lVar3 != 0) {
                    pbVar9 = *(byte **)((longlong)pauVar14 + lVar12 + -0x10);
                    uVar16 = lVar3 << 3;
                    uVar15 = 2;
                    goto code_r0x000141826a96;
                  }
                  break;
                case 3:
                  lVar3 = *(longlong *)((longlong)pauVar14 + lVar12 + -0x18);
                  if (lVar3 != 0) {
                    pbVar9 = *(byte **)((longlong)pauVar14 + lVar12 + -0x10);
                    uVar16 = lVar3 << 3;
                    goto LAB_141826a90;
                  }
                  break;
                case 4:
                  lVar3 = *(longlong *)((longlong)pauVar14 + lVar12 + -0x18);
                  if (lVar3 != 0) {
                    pbVar9 = *(byte **)((longlong)pauVar14 + lVar12 + -0x10);
                    uVar16 = lVar3 * 0xc;
                    goto LAB_141826a90;
                  }
                  break;
                default:
                  lVar3 = *(longlong *)((longlong)pauVar14 + lVar12 + -0x18);
                  if (lVar3 != 0) {
                    pbVar9 = *(byte **)((longlong)pauVar14 + lVar12 + -0x10);
                    uVar16 = lVar3 << 4;
                    goto LAB_141826a90;
                  }
                }
                uVar17 = uVar17 - 1 & uVar17;
                lVar19 = lVar19 + -1;
              } while (lVar19 != 0);
            }
            puVar18 = puStack_58;
            param_2 = piStack_1f0;
            puVar21 = puStack_1f8;
            uVar16 = uStack_208;
            uVar15 = lVar8 * 0x38 + 0x47U & 0xfffffffffffffff0;
            uVar13 = lVar8 + uVar15 + 0x11;
            if (uVar13 != 0) {
              pub_1406abac0((byte *)(CONCAT44(uStack_17c,uStack_180) - uVar15),uVar13,0x10);
            }
          }
          if (uStack_1b8 != (byte *)0x0) {
            pub_1406abac0((byte *)puStack_1b0,(longlong)uStack_1b8 << 2,4);
          }
          uVar15 = CONCAT44(uStack_19c,uStack_1a0);
          puVar11 = puVar18;
          if ((!SBORROW8(0,uVar15)) && (uVar15 != 0)) {
            pub_1406abac0((byte *)CONCAT44(uStack_194,uStack_198),uVar15,1);
          }
        }
        if (uStack_78 != 0) {
          pub_1406abac0(pbStack_70,uStack_78,1);
        }
        puVar10 = puVar10 + 4;
      }
      if (uStack_1e8 != 0) {
        pub_1406abac0((byte *)puStack_1e0,uStack_1e8 << 5,8);
      }
      pdb_140999dd0(&uStack_138);
      puVar10 = puStack_c8;
    } while (puStack_c8 != puStack_b8);
  }
  pdb_140971f40(&puStack_d0);
  return;
}

