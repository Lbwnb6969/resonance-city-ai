// VA 0x140b04680, PDB extent 986 bytes
// country_core::systems::render_loop::compute_passes::apply_screen_shadows::apply_screen_shadows
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/render_loop/compute_passes/apply_screen_shadows.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::systems::render_loop::compute_passes::apply_screen_shadows::apply_screen_shadows
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/render_loop/compute_passes/apply_screen_shadows.rs
   Extent: 986 */

undefined8 *
pdb_140b04680(undefined8 *param_1,longlong param_2,longlong param_3,longlong param_4,
             undefined8 param_5)

{
  char *pcVar1;
  undefined1 auVar2 [16];
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  undefined8 uVar10;
  ulonglong uVar11;
  longlong lVar12;
  uint uVar13;
  ushort uVar14;
  ulonglong uVar15;
  undefined1 in_XMM1_Ba;
  undefined1 in_XMM1_Bb;
  undefined1 in_XMM1_Bc;
  undefined1 in_XMM1_Bd;
  undefined1 in_XMM1_Be;
  undefined1 in_XMM1_Bf;
  undefined1 in_XMM1_Bg;
  undefined1 in_XMM1_Bh;
  undefined1 in_XMM1_Bi;
  undefined1 in_XMM1_Bj;
  undefined1 in_XMM1_Bk;
  undefined1 in_XMM1_Bl;
  undefined1 in_XMM1_Bm;
  undefined1 in_XMM1_Bn;
  undefined1 in_XMM1_Bo;
  undefined1 in_XMM1_Bp;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  int iStack_228;
  undefined4 uStack_224;
  undefined4 uStack_220;
  undefined4 uStack_21c;
  undefined4 uStack_218;
  undefined1 uStack_214;
  undefined1 uStack_213;
  undefined1 uStack_212;
  undefined1 uStack_211;
  undefined1 uStack_210;
  undefined1 uStack_20f;
  undefined1 uStack_20e;
  undefined1 uStack_20d;
  undefined1 uStack_20c;
  undefined1 uStack_20b;
  undefined1 uStack_20a;
  undefined1 uStack_209;
  undefined1 uStack_208;
  undefined1 uStack_207;
  undefined1 uStack_206;
  undefined1 uStack_205;
  undefined8 uStack_204;
  undefined8 uStack_1fc;
  byte bStack_1f4;
  undefined1 auStack_19c [20];
  undefined1 auStack_188 [8];
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined1 *puStack_168;
  longlong lStack_160;
  undefined8 *puStack_158;
  longlong lStack_150;
  undefined1 *puStack_148;
  undefined4 *puStack_140;
  undefined8 uStack_138;
  uint uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined1 uStack_118;
  undefined1 uStack_117;
  undefined1 uStack_116;
  undefined1 uStack_115;
  undefined1 uStack_114;
  undefined1 uStack_113;
  undefined1 uStack_112;
  undefined1 uStack_111;
  undefined1 uStack_110;
  undefined1 uStack_10f;
  undefined1 uStack_10e;
  undefined1 uStack_10d;
  undefined1 uStack_10c;
  undefined1 uStack_10b;
  undefined1 uStack_10a;
  undefined1 uStack_109;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined6 uStack_80;
  undefined2 uStack_7a;
  undefined6 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_48;
  
  uStack_48 = 0xfffffffffffffffe;
  if (*(longlong *)(param_3 + 0x88) != 0) {
    lVar9 = *(longlong *)(param_3 + 0x70);
    uVar11 = 0x1d6a82b468dfb8a2;
    lVar12 = 0;
    iVar5 = -(uint)(CONCAT13(in_XMM1_Bd,CONCAT12(in_XMM1_Bc,CONCAT11(in_XMM1_Bb,in_XMM1_Ba))) ==
                   CONCAT13(in_XMM1_Bd,CONCAT12(in_XMM1_Bc,CONCAT11(in_XMM1_Bb,in_XMM1_Ba))));
    iVar6 = -(uint)(CONCAT13(in_XMM1_Bh,CONCAT12(in_XMM1_Bg,CONCAT11(in_XMM1_Bf,in_XMM1_Be))) ==
                   CONCAT13(in_XMM1_Bh,CONCAT12(in_XMM1_Bg,CONCAT11(in_XMM1_Bf,in_XMM1_Be))));
    iVar7 = -(uint)(CONCAT13(in_XMM1_Bl,CONCAT12(in_XMM1_Bk,CONCAT11(in_XMM1_Bj,in_XMM1_Bi))) ==
                   CONCAT13(in_XMM1_Bl,CONCAT12(in_XMM1_Bk,CONCAT11(in_XMM1_Bj,in_XMM1_Bi))));
    iVar8 = -(uint)(CONCAT13(in_XMM1_Bp,CONCAT12(in_XMM1_Bo,CONCAT11(in_XMM1_Bn,in_XMM1_Bm))) ==
                   CONCAT13(in_XMM1_Bp,CONCAT12(in_XMM1_Bo,CONCAT11(in_XMM1_Bn,in_XMM1_Bm))));
    while( true ) {
      uVar11 = uVar11 & *(ulonglong *)(param_3 + 0x78);
      auVar2 = *(undefined1 (*) [16])(lVar9 + uVar11);
      auVar17[0] = -(auVar2[0] == DAT_142e34ec0);
      auVar17[1] = -(auVar2[1] == DAT_142e34ec0._1_1_);
      auVar17[2] = -(auVar2[2] == DAT_142e34ec0._2_1_);
      auVar17[3] = -(auVar2[3] == DAT_142e34ec0._3_1_);
      auVar17[4] = -(auVar2[4] == DAT_142e34ec0._4_1_);
      auVar17[5] = -(auVar2[5] == DAT_142e34ec0._5_1_);
      auVar17[6] = -(auVar2[6] == DAT_142e34ec0._6_1_);
      auVar17[7] = -(auVar2[7] == DAT_142e34ec0._7_1_);
      auVar17[8] = -(auVar2[8] == DAT_142e34ec0._8_1_);
      auVar17[9] = -(auVar2[9] == DAT_142e34ec0._9_1_);
      auVar17[10] = -(auVar2[10] == DAT_142e34ec0._10_1_);
      auVar17[0xb] = -(auVar2[0xb] == DAT_142e34ec0._11_1_);
      auVar17[0xc] = -(auVar2[0xc] == DAT_142e34ec0._12_1_);
      auVar17[0xd] = -(auVar2[0xd] == DAT_142e34ec0._13_1_);
      auVar17[0xe] = -(auVar2[0xe] == DAT_142e34ec0._14_1_);
      auVar17[0xf] = -(auVar2[0xf] == DAT_142e34ec0._15_1_);
      uVar14 = (ushort)(SUB161(auVar17 >> 7,0) & 1) | (ushort)(SUB161(auVar17 >> 0xf,0) & 1) << 1 |
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
      uVar13 = (uint)uVar14;
      while (uVar14 != 0) {
        uVar3 = 0;
        for (uVar4 = uVar13; (uVar4 & 1) == 0; uVar4 = uVar4 >> 1 | 0x80000000) {
          uVar3 = uVar3 + 1;
        }
        uVar15 = uVar3 + uVar11 & *(ulonglong *)(param_3 + 0x78);
        pcVar1 = (char *)(lVar9 + -0x18 + uVar15 * -0x18);
        auVar18[0] = -(*pcVar1 == DAT_142e60e60);
        auVar18[1] = -(pcVar1[1] == DAT_142e60e60._1_1_);
        auVar18[2] = -(pcVar1[2] == DAT_142e60e60._2_1_);
        auVar18[3] = -(pcVar1[3] == DAT_142e60e60._3_1_);
        auVar18[4] = -(pcVar1[4] == DAT_142e60e60._4_1_);
        auVar18[5] = -(pcVar1[5] == DAT_142e60e60._5_1_);
        auVar18[6] = -(pcVar1[6] == DAT_142e60e60._6_1_);
        auVar18[7] = -(pcVar1[7] == DAT_142e60e60._7_1_);
        auVar18[8] = -(pcVar1[8] == DAT_142e60e60._8_1_);
        auVar18[9] = -(pcVar1[9] == DAT_142e60e60._9_1_);
        auVar18[10] = -(pcVar1[10] == DAT_142e60e60._10_1_);
        auVar18[0xb] = -(pcVar1[0xb] == DAT_142e60e60._11_1_);
        auVar18[0xc] = -(pcVar1[0xc] == DAT_142e60e60._12_1_);
        auVar18[0xd] = -(pcVar1[0xd] == DAT_142e60e60._13_1_);
        auVar18[0xe] = -(pcVar1[0xe] == DAT_142e60e60._14_1_);
        auVar18[0xf] = -(pcVar1[0xf] == DAT_142e60e60._15_1_);
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
          uVar11 = *(ulonglong *)(lVar9 + uVar15 * -0x18 + -8);
          if ((uVar11 < *(ulonglong *)(param_3 + 0x210)) &&
             (uVar11 = *(ulonglong *)(*(longlong *)(param_3 + 0x208) + uVar11 * 8), uVar11 != 0)) {
            lVar9 = ~uVar11 * 0x40;
            if (*(longlong *)(*(longlong *)(param_3 + 0x1d8) + 0x20 + lVar9) != 0) {
              uVar10 = *(undefined8 *)(*(longlong *)(param_3 + 0x1d8) + lVar9 + 0x10);
              pdb_141529b00(auStack_19c,uVar10,param_2);
              uStack_128 = (ulonglong)*(uint *)(param_4 + 0x20) << 0x20;
              uStack_120 = 0x109011800010001;
              uStack_118 = 2;
              pdb_14174a370(&iStack_228,param_2,&UNK_143053410,0x17,&uStack_128);
              if (iStack_228 != 1) {
                uStack_68 = CONCAT44(uStack_220,uStack_224);
                uStack_60 = CONCAT44(uStack_218,uStack_21c);
                uStack_108 = uStack_204;
                uStack_100 = uStack_1fc;
                uStack_118 = uStack_214;
                uStack_117 = uStack_213;
                uStack_116 = uStack_212;
                uStack_115 = uStack_211;
                uStack_114 = uStack_210;
                uStack_113 = uStack_20f;
                uStack_112 = uStack_20e;
                uStack_111 = uStack_20d;
                uStack_110 = uStack_20c;
                uStack_10f = uStack_20b;
                uStack_10e = uStack_20a;
                uStack_10d = uStack_209;
                uStack_10c = uStack_208;
                uStack_10b = uStack_207;
                uStack_10a = uStack_206;
                uStack_109 = uStack_205;
                uStack_58 = CONCAT17(uStack_20d,
                                     CONCAT16(uStack_20e,
                                              CONCAT15(uStack_20f,
                                                       CONCAT14(uStack_210,
                                                                CONCAT13(uStack_211,
                                                                         CONCAT12(uStack_212,
                                                                                  CONCAT11(
                                                  uStack_213,uStack_214)))))));
                uStack_178 = uStack_1fc;
                uStack_180 = uStack_204;
                uStack_70 = uVar10;
                uStack_88 = pdb_140e26050(0);
                uStack_84 = *(undefined4 *)(param_4 + 0x1c);
                uStack_80 = (undefined6)*(undefined8 *)(param_4 + 0x20);
                uStack_7a = (undefined2)*(undefined8 *)(param_4 + 0x26);
                uStack_78 = (undefined6)((ulonglong)*(undefined8 *)(param_4 + 0x26) >> 0x10);
                uStack_a0 = 0;
                uStack_98 = 8;
                uStack_90 = 0;
                uVar10 = pdb_14177be60(*(undefined8 *)(param_2 + 0x208),&UNK_143330ac8,0x26,
                                       &uStack_a0);
                pdb_140e291c0(&uStack_128,&UNK_143330ac8,0x26,uVar10,param_2);
                puStack_168 = auStack_19c;
                puStack_158 = &uStack_68;
                puStack_148 = auStack_188;
                puStack_140 = &uStack_88;
                uStack_138 = param_5;
                uStack_130 = (uint)bStack_1f4;
                lStack_160 = param_4;
                lStack_150 = param_4 + 0x18;
                pdb_14178f010(&iStack_228,&uStack_128,&puStack_168);
                uStack_120 = CONCAT44(1,(uint)uStack_60 >> 0x10);
                uStack_128 = CONCAT44((uint)uStack_60 & 0xffff,1);
                pdb_140e28810(&iStack_228,&uStack_128);
                param_1[2] = uStack_58;
                *param_1 = uStack_68;
                param_1[1] = uStack_60;
                pdb_141537840(uStack_70,param_2);
                return param_1;
              }
                    /* WARNING: Subroutine does not return */
              pdb_142dc8170(&UNK_1430538c0,0x2b,&uStack_128,&UNK_1430538a0,&UNK_143053428);
            }
          }
          goto LAB_140b049da;
        }
        uVar14 = (ushort)(uVar13 - 1) & (ushort)uVar13;
        uVar13 = CONCAT22((short)(uVar13 - 1 >> 0x10),uVar14);
      }
      auVar16[0] = -(auVar2[0] == (char)iVar5);
      auVar16[1] = -(auVar2[1] == (char)((uint)iVar5 >> 8));
      auVar16[2] = -(auVar2[2] == (char)((uint)iVar5 >> 0x10));
      auVar16[3] = -(auVar2[3] == (char)((uint)iVar5 >> 0x18));
      auVar16[4] = -(auVar2[4] == (char)iVar6);
      auVar16[5] = -(auVar2[5] == (char)((uint)iVar6 >> 8));
      auVar16[6] = -(auVar2[6] == (char)((uint)iVar6 >> 0x10));
      auVar16[7] = -(auVar2[7] == (char)((uint)iVar6 >> 0x18));
      auVar16[8] = -(auVar2[8] == (char)iVar7);
      auVar16[9] = -(auVar2[9] == (char)((uint)iVar7 >> 8));
      auVar16[10] = -(auVar2[10] == (char)((uint)iVar7 >> 0x10));
      auVar16[0xb] = -(auVar2[0xb] == (char)((uint)iVar7 >> 0x18));
      auVar16[0xc] = -(auVar2[0xc] == (char)iVar8);
      auVar16[0xd] = -(auVar2[0xd] == (char)((uint)iVar8 >> 8));
      auVar16[0xe] = -(auVar2[0xe] == (char)((uint)iVar8 >> 0x10));
      auVar16[0xf] = -(auVar2[0xf] == (char)((uint)iVar8 >> 0x18));
      if ((((((((((((((((SUB161(auVar16 >> 7,0) & 1) != 0 || (SUB161(auVar16 >> 0xf,0) & 1) != 0) ||
                      (SUB161(auVar16 >> 0x17,0) & 1) != 0) || (SUB161(auVar16 >> 0x1f,0) & 1) != 0)
                    || (SUB161(auVar16 >> 0x27,0) & 1) != 0) || (SUB161(auVar16 >> 0x2f,0) & 1) != 0
                   ) || (SUB161(auVar16 >> 0x37,0) & 1) != 0) ||
                 (SUB161(auVar16 >> 0x3f,0) & 1) != 0) || (SUB161(auVar16 >> 0x47,0) & 1) != 0) ||
               (SUB161(auVar16 >> 0x4f,0) & 1) != 0) || (SUB161(auVar16 >> 0x57,0) & 1) != 0) ||
             (SUB161(auVar16 >> 0x5f,0) & 1) != 0) || (SUB161(auVar16 >> 0x67,0) & 1) != 0) ||
           (SUB161(auVar16 >> 0x6f,0) & 1) != 0) || (SUB161(auVar16 >> 0x77,0) & 1) != 0) ||
          auVar16[0xf] < '\0') break;
      uVar11 = uVar11 + lVar12 + 0x10;
      lVar12 = lVar12 + 0x10;
    }
  }
LAB_140b049da:
                    /* WARNING: Subroutine does not return */
  pdb_142dc8150(&UNK_1430533f8);
}

