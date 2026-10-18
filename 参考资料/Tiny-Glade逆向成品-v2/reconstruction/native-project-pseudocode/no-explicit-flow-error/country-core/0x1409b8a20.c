// VA 0x1409b8a20, PDB extent 1922 bytes
// country_core::systems::render_loop::compute_passes::gpu_generate_draw_lists::gather_wall_draw_batches
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/render_loop/compute_passes/gpu_generate_draw_lists.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::systems::render_loop::compute_passes::gpu_generate_draw_lists::gather_wall_draw_batches
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/render_loop/compute_passes/gpu_generate_draw_lists.rs
   Extent: 1922 */

void pdb_1409b8a20(longlong param_1)

{
  char *pcVar1;
  char *pcVar2;
  undefined8 *puVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  char cVar10;
  char cVar11;
  char cVar12;
  char cVar13;
  char cVar14;
  char cVar15;
  char cVar16;
  char cVar17;
  char cVar18;
  char cVar19;
  char cVar20;
  char cVar21;
  char cVar22;
  char cVar23;
  char cVar24;
  char cVar25;
  char cVar26;
  char cVar27;
  char cVar28;
  char cVar29;
  char cVar30;
  char cVar31;
  char cVar32;
  char cVar33;
  char cVar34;
  char cVar35;
  char cVar36;
  char cVar37;
  char cVar38;
  char cVar39;
  char cVar40;
  char cVar41;
  char cVar42;
  longlong lVar43;
  byte *pbVar44;
  int *piVar45;
  ulonglong uVar46;
  uint uVar47;
  longlong lVar48;
  longlong lVar49;
  longlong lVar50;
  ushort uVar51;
  ulonglong uVar52;
  undefined8 uVar53;
  undefined1 auVar54 [16];
  undefined1 in_XMM1_Ba;
  char cVar55;
  undefined1 in_XMM1_Bb;
  char cVar56;
  undefined1 in_XMM1_Bc;
  char cVar57;
  undefined1 in_XMM1_Bd;
  char cVar58;
  undefined1 in_XMM1_Be;
  char cVar59;
  undefined1 in_XMM1_Bf;
  char cVar60;
  undefined1 in_XMM1_Bg;
  char cVar61;
  undefined1 in_XMM1_Bh;
  char cVar62;
  undefined1 in_XMM1_Bi;
  char cVar63;
  undefined1 in_XMM1_Bj;
  char cVar64;
  undefined1 in_XMM1_Bk;
  char cVar65;
  undefined1 in_XMM1_Bl;
  char cVar66;
  undefined1 in_XMM1_Bm;
  char cVar67;
  undefined1 in_XMM1_Bn;
  char cVar68;
  undefined1 in_XMM1_Bo;
  char cVar69;
  undefined1 in_XMM1_Bp;
  char cVar70;
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  undefined1 unaff_XMM7_Ba;
  undefined1 unaff_XMM7_Bb;
  undefined1 unaff_XMM7_Bc;
  undefined1 unaff_XMM7_Bd;
  undefined1 unaff_XMM7_Be;
  undefined1 unaff_XMM7_Bf;
  undefined1 unaff_XMM7_Bg;
  undefined1 unaff_XMM7_Bh;
  undefined1 unaff_XMM7_Bi;
  undefined1 unaff_XMM7_Bj;
  undefined1 unaff_XMM7_Bk;
  undefined1 unaff_XMM7_Bl;
  undefined1 unaff_XMM7_Bm;
  undefined1 unaff_XMM7_Bn;
  undefined1 unaff_XMM7_Bo;
  undefined1 unaff_XMM7_Bp;
  undefined1 auVar80 [16];
  longlong lStack_f0;
  undefined8 uStack_e8;
  longlong lStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  longlong lStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  longlong lStack_b0;
  undefined8 uStack_a8;
  longlong lStack_a0;
  longlong lStack_98;
  undefined8 uStack_90;
  undefined1 uStack_82;
  undefined1 uStack_81;
  undefined8 uStack_80;
  
  uStack_80 = 0xfffffffffffffffe;
  if (*(longlong *)(param_1 + 0x88) != 0) {
    lVar43 = *(longlong *)(param_1 + 0x70);
    uVar46 = 0x1d6a82b468dfb8a2;
    lVar49 = 0;
    iVar6 = -(uint)(CONCAT13(in_XMM1_Bd,CONCAT12(in_XMM1_Bc,CONCAT11(in_XMM1_Bb,in_XMM1_Ba))) ==
                   CONCAT13(in_XMM1_Bd,CONCAT12(in_XMM1_Bc,CONCAT11(in_XMM1_Bb,in_XMM1_Ba))));
    cVar55 = (char)iVar6;
    cVar56 = (char)((uint)iVar6 >> 8);
    cVar57 = (char)((uint)iVar6 >> 0x10);
    cVar58 = (char)((uint)iVar6 >> 0x18);
    iVar6 = -(uint)(CONCAT13(in_XMM1_Bh,CONCAT12(in_XMM1_Bg,CONCAT11(in_XMM1_Bf,in_XMM1_Be))) ==
                   CONCAT13(in_XMM1_Bh,CONCAT12(in_XMM1_Bg,CONCAT11(in_XMM1_Bf,in_XMM1_Be))));
    cVar59 = (char)iVar6;
    cVar60 = (char)((uint)iVar6 >> 8);
    cVar61 = (char)((uint)iVar6 >> 0x10);
    cVar62 = (char)((uint)iVar6 >> 0x18);
    iVar6 = -(uint)(CONCAT13(in_XMM1_Bl,CONCAT12(in_XMM1_Bk,CONCAT11(in_XMM1_Bj,in_XMM1_Bi))) ==
                   CONCAT13(in_XMM1_Bl,CONCAT12(in_XMM1_Bk,CONCAT11(in_XMM1_Bj,in_XMM1_Bi))));
    cVar63 = (char)iVar6;
    cVar64 = (char)((uint)iVar6 >> 8);
    cVar65 = (char)((uint)iVar6 >> 0x10);
    cVar66 = (char)((uint)iVar6 >> 0x18);
    iVar6 = -(uint)(CONCAT13(in_XMM1_Bp,CONCAT12(in_XMM1_Bo,CONCAT11(in_XMM1_Bn,in_XMM1_Bm))) ==
                   CONCAT13(in_XMM1_Bp,CONCAT12(in_XMM1_Bo,CONCAT11(in_XMM1_Bn,in_XMM1_Bm))));
    cVar67 = (char)iVar6;
    cVar68 = (char)((uint)iVar6 >> 8);
    cVar69 = (char)((uint)iVar6 >> 0x10);
    cVar70 = (char)((uint)iVar6 >> 0x18);
    while( true ) {
      uVar46 = uVar46 & *(ulonglong *)(param_1 + 0x78);
      auVar54 = *(undefined1 (*) [16])(lVar43 + uVar46);
      auVar74[0] = -(auVar54[0] == DAT_142e34ec0);
      auVar74[1] = -(auVar54[1] == DAT_142e34ec0._1_1_);
      auVar74[2] = -(auVar54[2] == DAT_142e34ec0._2_1_);
      auVar74[3] = -(auVar54[3] == DAT_142e34ec0._3_1_);
      auVar74[4] = -(auVar54[4] == DAT_142e34ec0._4_1_);
      auVar74[5] = -(auVar54[5] == DAT_142e34ec0._5_1_);
      auVar74[6] = -(auVar54[6] == DAT_142e34ec0._6_1_);
      auVar74[7] = -(auVar54[7] == DAT_142e34ec0._7_1_);
      auVar74[8] = -(auVar54[8] == DAT_142e34ec0._8_1_);
      auVar74[9] = -(auVar54[9] == DAT_142e34ec0._9_1_);
      auVar74[10] = -(auVar54[10] == DAT_142e34ec0._10_1_);
      auVar74[0xb] = -(auVar54[0xb] == DAT_142e34ec0._11_1_);
      auVar74[0xc] = -(auVar54[0xc] == DAT_142e34ec0._12_1_);
      auVar74[0xd] = -(auVar54[0xd] == DAT_142e34ec0._13_1_);
      auVar74[0xe] = -(auVar54[0xe] == DAT_142e34ec0._14_1_);
      auVar74[0xf] = -(auVar54[0xf] == DAT_142e34ec0._15_1_);
      uVar51 = (ushort)(SUB161(auVar74 >> 7,0) & 1) | (ushort)(SUB161(auVar74 >> 0xf,0) & 1) << 1 |
               (ushort)(SUB161(auVar74 >> 0x17,0) & 1) << 2 |
               (ushort)(SUB161(auVar74 >> 0x1f,0) & 1) << 3 |
               (ushort)(SUB161(auVar74 >> 0x27,0) & 1) << 4 |
               (ushort)(SUB161(auVar74 >> 0x2f,0) & 1) << 5 |
               (ushort)(SUB161(auVar74 >> 0x37,0) & 1) << 6 |
               (ushort)(SUB161(auVar74 >> 0x3f,0) & 1) << 7 |
               (ushort)(SUB161(auVar74 >> 0x47,0) & 1) << 8 |
               (ushort)(SUB161(auVar74 >> 0x4f,0) & 1) << 9 |
               (ushort)(SUB161(auVar74 >> 0x57,0) & 1) << 10 |
               (ushort)(SUB161(auVar74 >> 0x5f,0) & 1) << 0xb |
               (ushort)(SUB161(auVar74 >> 0x67,0) & 1) << 0xc |
               (ushort)(SUB161(auVar74 >> 0x6f,0) & 1) << 0xd |
               (ushort)(SUB161(auVar74 >> 0x77,0) & 1) << 0xe | (ushort)(auVar74[0xf] >> 7) << 0xf;
      uVar47 = (uint)uVar51;
      while (uVar51 != 0) {
        uVar4 = 0;
        for (uVar5 = uVar47; (uVar5 & 1) == 0; uVar5 = uVar5 >> 1 | 0x80000000) {
          uVar4 = uVar4 + 1;
        }
        uVar52 = uVar4 + uVar46 & *(ulonglong *)(param_1 + 0x78);
        pcVar1 = (char *)(lVar43 + -0x18 + uVar52 * -0x18);
        auVar75[0] = -(*pcVar1 == DAT_142e60e60);
        auVar75[1] = -(pcVar1[1] == DAT_142e60e60._1_1_);
        auVar75[2] = -(pcVar1[2] == DAT_142e60e60._2_1_);
        auVar75[3] = -(pcVar1[3] == DAT_142e60e60._3_1_);
        auVar75[4] = -(pcVar1[4] == DAT_142e60e60._4_1_);
        auVar75[5] = -(pcVar1[5] == DAT_142e60e60._5_1_);
        auVar75[6] = -(pcVar1[6] == DAT_142e60e60._6_1_);
        auVar75[7] = -(pcVar1[7] == DAT_142e60e60._7_1_);
        auVar75[8] = -(pcVar1[8] == DAT_142e60e60._8_1_);
        auVar75[9] = -(pcVar1[9] == DAT_142e60e60._9_1_);
        auVar75[10] = -(pcVar1[10] == DAT_142e60e60._10_1_);
        auVar75[0xb] = -(pcVar1[0xb] == DAT_142e60e60._11_1_);
        auVar75[0xc] = -(pcVar1[0xc] == DAT_142e60e60._12_1_);
        auVar75[0xd] = -(pcVar1[0xd] == DAT_142e60e60._13_1_);
        auVar75[0xe] = -(pcVar1[0xe] == DAT_142e60e60._14_1_);
        auVar75[0xf] = -(pcVar1[0xf] == DAT_142e60e60._15_1_);
        if ((ushort)((ushort)(SUB161(auVar75 >> 7,0) & 1) |
                     (ushort)(SUB161(auVar75 >> 0xf,0) & 1) << 1 |
                     (ushort)(SUB161(auVar75 >> 0x17,0) & 1) << 2 |
                     (ushort)(SUB161(auVar75 >> 0x1f,0) & 1) << 3 |
                     (ushort)(SUB161(auVar75 >> 0x27,0) & 1) << 4 |
                     (ushort)(SUB161(auVar75 >> 0x2f,0) & 1) << 5 |
                     (ushort)(SUB161(auVar75 >> 0x37,0) & 1) << 6 |
                     (ushort)(SUB161(auVar75 >> 0x3f,0) & 1) << 7 |
                     (ushort)(SUB161(auVar75 >> 0x47,0) & 1) << 8 |
                     (ushort)(SUB161(auVar75 >> 0x4f,0) & 1) << 9 |
                     (ushort)(SUB161(auVar75 >> 0x57,0) & 1) << 10 |
                     (ushort)(SUB161(auVar75 >> 0x5f,0) & 1) << 0xb |
                     (ushort)(SUB161(auVar75 >> 0x67,0) & 1) << 0xc |
                     (ushort)(SUB161(auVar75 >> 0x6f,0) & 1) << 0xd |
                     (ushort)(SUB161(auVar75 >> 0x77,0) & 1) << 0xe |
                    (ushort)(auVar75[0xf] >> 7) << 0xf) == 0xffff) {
          uVar46 = *(ulonglong *)(lVar43 + uVar52 * -0x18 + -8);
          if ((*(ulonglong *)(param_1 + 0x210) <= uVar46) ||
             (uVar46 = *(ulonglong *)(*(longlong *)(param_1 + 0x208) + uVar46 * 8), uVar46 == 0))
          goto LAB_1409b8cec;
          lVar43 = ~uVar46 * 0x40;
          if (*(longlong *)(*(longlong *)(param_1 + 0x1d8) + 0x20 + lVar43) == 0)
          goto LAB_1409b8cec;
          lVar43 = *(longlong *)(param_1 + 0x1d8) + lVar43;
          lVar49 = *(longlong *)(lVar43 + 0x10);
          *(undefined4 *)(lVar43 + 0x3c) = *(undefined4 *)(param_1 + 0x5a8);
          cVar41 = UNK_142e33e8f;
          cVar40 = UNK_142e33e8e;
          cVar39 = UNK_142e33e8d;
          cVar38 = UNK_142e33e8c;
          cVar37 = UNK_142e33e8b;
          cVar36 = UNK_142e33e8a;
          cVar35 = UNK_142e33e89;
          cVar34 = UNK_142e33e88;
          cVar33 = UNK_142e33e87;
          cVar32 = UNK_142e33e86;
          cVar31 = UNK_142e33e85;
          cVar30 = UNK_142e33e84;
          cVar29 = UNK_142e33e83;
          cVar28 = UNK_142e33e82;
          cVar27 = UNK_142e33e81;
          cVar26 = DAT_142e33e80;
          if (*(char *)(lVar49 + 8) != '\0') {
            lStack_f0 = lVar49 + 0x10;
            uStack_81 = 1;
            uStack_82 = 1;
                    /* WARNING: Subroutine does not return */
            pdb_142dc8170(&UNK_143066330,0x2b,&lStack_f0,&UNK_143066310,&UNK_143066458);
          }
          lVar43 = lStack_a0;
          if (*(longlong *)(lVar49 + 0x28) == 0) goto LAB_1409b8e29;
          lVar50 = *(longlong *)(lVar49 + 0x10);
          uVar46 = *(ulonglong *)(lVar49 + 0x18);
          uVar52 = 0xeb575d061b90ebf5;
          lVar49 = 0;
          iVar6 = -(uint)(CONCAT13(unaff_XMM7_Bd,
                                   CONCAT12(unaff_XMM7_Bc,CONCAT11(unaff_XMM7_Bb,unaff_XMM7_Ba))) ==
                         CONCAT13(unaff_XMM7_Bd,
                                  CONCAT12(unaff_XMM7_Bc,CONCAT11(unaff_XMM7_Bb,unaff_XMM7_Ba))));
          iVar7 = -(uint)(CONCAT13(unaff_XMM7_Bh,
                                   CONCAT12(unaff_XMM7_Bg,CONCAT11(unaff_XMM7_Bf,unaff_XMM7_Be))) ==
                         CONCAT13(unaff_XMM7_Bh,
                                  CONCAT12(unaff_XMM7_Bg,CONCAT11(unaff_XMM7_Bf,unaff_XMM7_Be))));
          iVar8 = -(uint)(CONCAT13(unaff_XMM7_Bl,
                                   CONCAT12(unaff_XMM7_Bk,CONCAT11(unaff_XMM7_Bj,unaff_XMM7_Bi))) ==
                         CONCAT13(unaff_XMM7_Bl,
                                  CONCAT12(unaff_XMM7_Bk,CONCAT11(unaff_XMM7_Bj,unaff_XMM7_Bi))));
          iVar9 = -(uint)(CONCAT13(unaff_XMM7_Bp,
                                   CONCAT12(unaff_XMM7_Bo,CONCAT11(unaff_XMM7_Bn,unaff_XMM7_Bm))) ==
                         CONCAT13(unaff_XMM7_Bp,
                                  CONCAT12(unaff_XMM7_Bo,CONCAT11(unaff_XMM7_Bn,unaff_XMM7_Bm))));
          goto LAB_1409b8b90;
        }
        uVar51 = (ushort)(uVar47 - 1) & (ushort)uVar47;
        uVar47 = CONCAT22((short)(uVar47 - 1 >> 0x10),uVar51);
      }
      auVar71[0] = -(auVar54[0] == cVar55);
      auVar71[1] = -(auVar54[1] == cVar56);
      auVar71[2] = -(auVar54[2] == cVar57);
      auVar71[3] = -(auVar54[3] == cVar58);
      auVar71[4] = -(auVar54[4] == cVar59);
      auVar71[5] = -(auVar54[5] == cVar60);
      auVar71[6] = -(auVar54[6] == cVar61);
      auVar71[7] = -(auVar54[7] == cVar62);
      auVar71[8] = -(auVar54[8] == cVar63);
      auVar71[9] = -(auVar54[9] == cVar64);
      auVar71[10] = -(auVar54[10] == cVar65);
      auVar71[0xb] = -(auVar54[0xb] == cVar66);
      auVar71[0xc] = -(auVar54[0xc] == cVar67);
      auVar71[0xd] = -(auVar54[0xd] == cVar68);
      auVar71[0xe] = -(auVar54[0xe] == cVar69);
      auVar71[0xf] = -(auVar54[0xf] == cVar70);
      if ((((((((((((((((SUB161(auVar71 >> 7,0) & 1) != 0 || (SUB161(auVar71 >> 0xf,0) & 1) != 0) ||
                      (SUB161(auVar71 >> 0x17,0) & 1) != 0) || (SUB161(auVar71 >> 0x1f,0) & 1) != 0)
                    || (SUB161(auVar71 >> 0x27,0) & 1) != 0) || (SUB161(auVar71 >> 0x2f,0) & 1) != 0
                   ) || (SUB161(auVar71 >> 0x37,0) & 1) != 0) ||
                 (SUB161(auVar71 >> 0x3f,0) & 1) != 0) || (SUB161(auVar71 >> 0x47,0) & 1) != 0) ||
               (SUB161(auVar71 >> 0x4f,0) & 1) != 0) || (SUB161(auVar71 >> 0x57,0) & 1) != 0) ||
             (SUB161(auVar71 >> 0x5f,0) & 1) != 0) || (SUB161(auVar71 >> 0x67,0) & 1) != 0) ||
           (SUB161(auVar71 >> 0x6f,0) & 1) != 0) || (SUB161(auVar71 >> 0x77,0) & 1) != 0) ||
          auVar71[0xf] < '\0') break;
      uVar46 = uVar46 + lVar49 + 0x10;
      lVar49 = lVar49 + 0x10;
    }
  }
LAB_1409b8cec:
                    /* WARNING: Subroutine does not return */
  pdb_142dc8150(&UNK_14302ad48);
LAB_1409b8b90:
  uVar52 = uVar52 & uVar46;
  pcVar1 = (char *)(lVar50 + uVar52);
  cVar10 = *pcVar1;
  cVar11 = pcVar1[1];
  cVar12 = pcVar1[2];
  cVar13 = pcVar1[3];
  cVar14 = pcVar1[4];
  cVar15 = pcVar1[5];
  cVar16 = pcVar1[6];
  cVar17 = pcVar1[7];
  cVar18 = pcVar1[8];
  cVar19 = pcVar1[9];
  cVar20 = pcVar1[10];
  cVar21 = pcVar1[0xb];
  cVar22 = pcVar1[0xc];
  cVar23 = pcVar1[0xd];
  cVar24 = pcVar1[0xe];
  cVar25 = pcVar1[0xf];
  auVar54[0] = -(cVar10 == cVar26);
  auVar54[1] = -(cVar11 == cVar27);
  auVar54[2] = -(cVar12 == cVar28);
  auVar54[3] = -(cVar13 == cVar29);
  auVar54[4] = -(cVar14 == cVar30);
  auVar54[5] = -(cVar15 == cVar31);
  auVar54[6] = -(cVar16 == cVar32);
  auVar54[7] = -(cVar17 == cVar33);
  auVar54[8] = -(cVar18 == cVar34);
  auVar54[9] = -(cVar19 == cVar35);
  auVar54[10] = -(cVar20 == cVar36);
  auVar54[0xb] = -(cVar21 == cVar37);
  auVar54[0xc] = -(cVar22 == cVar38);
  auVar54[0xd] = -(cVar23 == cVar39);
  auVar54[0xe] = -(cVar24 == cVar40);
  auVar54[0xf] = -(cVar25 == cVar41);
  uVar51 = (ushort)(SUB161(auVar54 >> 7,0) & 1) | (ushort)(SUB161(auVar54 >> 0xf,0) & 1) << 1 |
           (ushort)(SUB161(auVar54 >> 0x17,0) & 1) << 2 |
           (ushort)(SUB161(auVar54 >> 0x1f,0) & 1) << 3 |
           (ushort)(SUB161(auVar54 >> 0x27,0) & 1) << 4 |
           (ushort)(SUB161(auVar54 >> 0x2f,0) & 1) << 5 |
           (ushort)(SUB161(auVar54 >> 0x37,0) & 1) << 6 |
           (ushort)(SUB161(auVar54 >> 0x3f,0) & 1) << 7 |
           (ushort)(SUB161(auVar54 >> 0x47,0) & 1) << 8 |
           (ushort)(SUB161(auVar54 >> 0x4f,0) & 1) << 9 |
           (ushort)(SUB161(auVar54 >> 0x57,0) & 1) << 10 |
           (ushort)(SUB161(auVar54 >> 0x5f,0) & 1) << 0xb |
           (ushort)(SUB161(auVar54 >> 0x67,0) & 1) << 0xc |
           (ushort)(SUB161(auVar54 >> 0x6f,0) & 1) << 0xd |
           (ushort)(SUB161(auVar54 >> 0x77,0) & 1) << 0xe | (ushort)(auVar54[0xf] >> 7) << 0xf;
  uVar47 = (uint)uVar51;
  lVar43 = lStack_a0;
  while (lStack_a0 = lVar49, uVar51 != 0) {
    uVar4 = 0;
    for (uVar5 = uVar47; (uVar5 & 1) == 0; uVar5 = uVar5 >> 1 | 0x80000000) {
      uVar4 = uVar4 + 1;
    }
    lVar43 = lVar50 + (uVar4 + uVar52 & uVar46) * -0x10;
    uStack_81 = 1;
    uStack_82 = 1;
    cVar42 = pdb_140df4430(&UNK_14331a530,lVar43 + -0x10);
    if (cVar42 != '\0') {
      puVar3 = *(undefined8 **)(lVar43 + -8);
      uStack_81 = 1;
      uStack_82 = 1;
      lVar49 = (**(code **)(puVar3[1] + 0x20))(*puVar3);
      lVar43 = lStack_a0;
      if (lVar49 == 0) goto LAB_1409b8e29;
      if (*(longlong *)(param_1 + 0x88) == 0) goto LAB_1409b8e43;
      lVar43 = *(longlong *)(param_1 + 0x70);
      uVar46 = 0x4a33d41d47a6b10e;
      lVar50 = 0;
      iVar6 = -(uint)(CONCAT13(cVar58,CONCAT12(cVar57,CONCAT11(cVar56,cVar55))) ==
                     CONCAT13(cVar58,CONCAT12(cVar57,CONCAT11(cVar56,cVar55))));
      iVar7 = -(uint)(CONCAT13(cVar62,CONCAT12(cVar61,CONCAT11(cVar60,cVar59))) ==
                     CONCAT13(cVar62,CONCAT12(cVar61,CONCAT11(cVar60,cVar59))));
      iVar8 = -(uint)(CONCAT13(cVar66,CONCAT12(cVar65,CONCAT11(cVar64,cVar63))) ==
                     CONCAT13(cVar66,CONCAT12(cVar65,CONCAT11(cVar64,cVar63))));
      iVar9 = -(uint)(CONCAT13(cVar70,CONCAT12(cVar69,CONCAT11(cVar68,cVar67))) ==
                     CONCAT13(cVar70,CONCAT12(cVar69,CONCAT11(cVar68,cVar67))));
      goto LAB_1409b8c7c;
    }
    uVar51 = (ushort)(uVar47 - 1) & (ushort)uVar47;
    uVar47 = CONCAT22((short)(uVar47 - 1 >> 0x10),uVar51);
    lVar49 = lStack_a0;
    lVar43 = lStack_a0;
  }
  goto LAB_1409b8c00;
LAB_1409b8c7c:
  uVar46 = uVar46 & *(ulonglong *)(param_1 + 0x78);
  pcVar1 = (char *)(lVar43 + uVar46);
  auVar76[0] = -(*pcVar1 == DAT_142e34d60);
  auVar76[1] = -(pcVar1[1] == DAT_142e34d60._1_1_);
  auVar76[2] = -(pcVar1[2] == DAT_142e34d60._2_1_);
  auVar76[3] = -(pcVar1[3] == DAT_142e34d60._3_1_);
  auVar76[4] = -(pcVar1[4] == DAT_142e34d60._4_1_);
  auVar76[5] = -(pcVar1[5] == DAT_142e34d60._5_1_);
  auVar76[6] = -(pcVar1[6] == DAT_142e34d60._6_1_);
  auVar76[7] = -(pcVar1[7] == DAT_142e34d60._7_1_);
  auVar76[8] = -(pcVar1[8] == DAT_142e34d60._8_1_);
  auVar76[9] = -(pcVar1[9] == DAT_142e34d60._9_1_);
  auVar76[10] = -(pcVar1[10] == DAT_142e34d60._10_1_);
  auVar76[0xb] = -(pcVar1[0xb] == DAT_142e34d60._11_1_);
  auVar76[0xc] = -(pcVar1[0xc] == DAT_142e34d60._12_1_);
  auVar76[0xd] = -(pcVar1[0xd] == DAT_142e34d60._13_1_);
  auVar76[0xe] = -(pcVar1[0xe] == DAT_142e34d60._14_1_);
  auVar76[0xf] = -(pcVar1[0xf] == DAT_142e34d60._15_1_);
  uVar51 = (ushort)(SUB161(auVar76 >> 7,0) & 1) | (ushort)(SUB161(auVar76 >> 0xf,0) & 1) << 1 |
           (ushort)(SUB161(auVar76 >> 0x17,0) & 1) << 2 |
           (ushort)(SUB161(auVar76 >> 0x1f,0) & 1) << 3 |
           (ushort)(SUB161(auVar76 >> 0x27,0) & 1) << 4 |
           (ushort)(SUB161(auVar76 >> 0x2f,0) & 1) << 5 |
           (ushort)(SUB161(auVar76 >> 0x37,0) & 1) << 6 |
           (ushort)(SUB161(auVar76 >> 0x3f,0) & 1) << 7 |
           (ushort)(SUB161(auVar76 >> 0x47,0) & 1) << 8 |
           (ushort)(SUB161(auVar76 >> 0x4f,0) & 1) << 9 |
           (ushort)(SUB161(auVar76 >> 0x57,0) & 1) << 10 |
           (ushort)(SUB161(auVar76 >> 0x5f,0) & 1) << 0xb |
           (ushort)(SUB161(auVar76 >> 0x67,0) & 1) << 0xc |
           (ushort)(SUB161(auVar76 >> 0x6f,0) & 1) << 0xd |
           (ushort)(SUB161(auVar76 >> 0x77,0) & 1) << 0xe | (ushort)(auVar76[0xf] >> 7) << 0xf;
  uVar47 = (uint)uVar51;
  while (uVar51 != 0) {
    uVar4 = 0;
    for (uVar5 = uVar47; (uVar5 & 1) == 0; uVar5 = uVar5 >> 1 | 0x80000000) {
      uVar4 = uVar4 + 1;
    }
    uVar52 = uVar4 + uVar46 & *(ulonglong *)(param_1 + 0x78);
    pcVar2 = (char *)(lVar43 + -0x18 + uVar52 * -0x18);
    auVar77[0] = -(*pcVar2 == DAT_142e64880);
    auVar77[1] = -(pcVar2[1] == UNK_142e64881);
    auVar77[2] = -(pcVar2[2] == UNK_142e64882);
    auVar77[3] = -(pcVar2[3] == UNK_142e64883);
    auVar77[4] = -(pcVar2[4] == UNK_142e64884);
    auVar77[5] = -(pcVar2[5] == UNK_142e64885);
    auVar77[6] = -(pcVar2[6] == UNK_142e64886);
    auVar77[7] = -(pcVar2[7] == UNK_142e64887);
    auVar77[8] = -(pcVar2[8] == UNK_142e64888);
    auVar77[9] = -(pcVar2[9] == UNK_142e64889);
    auVar77[10] = -(pcVar2[10] == UNK_142e6488a);
    auVar77[0xb] = -(pcVar2[0xb] == UNK_142e6488b);
    auVar77[0xc] = -(pcVar2[0xc] == UNK_142e6488c);
    auVar77[0xd] = -(pcVar2[0xd] == UNK_142e6488d);
    auVar77[0xe] = -(pcVar2[0xe] == UNK_142e6488e);
    auVar77[0xf] = -(pcVar2[0xf] == UNK_142e6488f);
    if ((ushort)((ushort)(SUB161(auVar77 >> 7,0) & 1) | (ushort)(SUB161(auVar77 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar77 >> 0x17,0) & 1) << 2 |
                 (ushort)(SUB161(auVar77 >> 0x1f,0) & 1) << 3 |
                 (ushort)(SUB161(auVar77 >> 0x27,0) & 1) << 4 |
                 (ushort)(SUB161(auVar77 >> 0x2f,0) & 1) << 5 |
                 (ushort)(SUB161(auVar77 >> 0x37,0) & 1) << 6 |
                 (ushort)(SUB161(auVar77 >> 0x3f,0) & 1) << 7 |
                 (ushort)(SUB161(auVar77 >> 0x47,0) & 1) << 8 |
                 (ushort)(SUB161(auVar77 >> 0x4f,0) & 1) << 9 |
                 (ushort)(SUB161(auVar77 >> 0x57,0) & 1) << 10 |
                 (ushort)(SUB161(auVar77 >> 0x5f,0) & 1) << 0xb |
                 (ushort)(SUB161(auVar77 >> 0x67,0) & 1) << 0xc |
                 (ushort)(SUB161(auVar77 >> 0x6f,0) & 1) << 0xd |
                 (ushort)(SUB161(auVar77 >> 0x77,0) & 1) << 0xe | (ushort)(auVar77[0xf] >> 7) << 0xf
                ) == 0xffff) {
      uVar46 = *(ulonglong *)(lVar43 + uVar52 * -0x18 + -8);
      if ((*(ulonglong *)(param_1 + 0x210) <= uVar46) ||
         (uVar46 = *(ulonglong *)(*(longlong *)(param_1 + 0x208) + uVar46 * 8), uVar46 == 0))
      goto LAB_1409b8e43;
      lVar43 = ~uVar46 * 0x40;
      if (*(longlong *)(*(longlong *)(param_1 + 0x1d8) + 0x20 + lVar43) == 0) goto LAB_1409b8e43;
      puVar3 = *(undefined8 **)(*(longlong *)(param_1 + 0x1d8) + lVar43 + 0x10);
      if (*(char *)(puVar3 + 2) == '\0') goto LAB_1409b8f3f;
      uVar53 = *puVar3;
      uVar46 = (ulonglong)~(uint)uVar53;
      if (((*(ulonglong *)(param_1 + 0x10) <= uVar46) ||
          (piVar45 = (int *)(uVar46 * 0x18 + *(longlong *)(param_1 + 8)),
          piVar45[4] != (int)((ulonglong)uVar53 >> 0x20))) || (*piVar45 == 0)) goto LAB_1409b8f3f;
      if (*(longlong *)(param_1 + 0x68) == 0) goto LAB_1409b8f3f;
      lVar43 = *(longlong *)(param_1 + 0x50);
      uVar46 = 0xe0bd57daa705878b;
      lVar50 = 0;
      goto LAB_1409b8dc0;
    }
    uVar51 = (ushort)(uVar47 - 1) & (ushort)uVar47;
    uVar47 = CONCAT22((short)(uVar47 - 1 >> 0x10),uVar51);
  }
  goto LAB_1409b8ccd;
LAB_1409b8dc0:
  uVar46 = uVar46 & *(ulonglong *)(param_1 + 0x58);
  auVar54 = *(undefined1 (*) [16])(lVar43 + uVar46);
  auVar78[0] = -(auVar54[0] == DAT_142f625a0);
  auVar78[1] = -(auVar54[1] == DAT_142f625a0._1_1_);
  auVar78[2] = -(auVar54[2] == DAT_142f625a0._2_1_);
  auVar78[3] = -(auVar54[3] == DAT_142f625a0._3_1_);
  auVar78[4] = -(auVar54[4] == DAT_142f625a0._4_1_);
  auVar78[5] = -(auVar54[5] == DAT_142f625a0._5_1_);
  auVar78[6] = -(auVar54[6] == DAT_142f625a0._6_1_);
  auVar78[7] = -(auVar54[7] == DAT_142f625a0._7_1_);
  auVar78[8] = -(auVar54[8] == DAT_142f625a0._8_1_);
  auVar78[9] = -(auVar54[9] == DAT_142f625a0._9_1_);
  auVar78[10] = -(auVar54[10] == DAT_142f625a0._10_1_);
  auVar78[0xb] = -(auVar54[0xb] == DAT_142f625a0._11_1_);
  auVar78[0xc] = -(auVar54[0xc] == DAT_142f625a0._12_1_);
  auVar78[0xd] = -(auVar54[0xd] == DAT_142f625a0._13_1_);
  auVar78[0xe] = -(auVar54[0xe] == DAT_142f625a0._14_1_);
  auVar78[0xf] = -(auVar54[0xf] == DAT_142f625a0._15_1_);
  uVar51 = (ushort)(SUB161(auVar78 >> 7,0) & 1) | (ushort)(SUB161(auVar78 >> 0xf,0) & 1) << 1 |
           (ushort)(SUB161(auVar78 >> 0x17,0) & 1) << 2 |
           (ushort)(SUB161(auVar78 >> 0x1f,0) & 1) << 3 |
           (ushort)(SUB161(auVar78 >> 0x27,0) & 1) << 4 |
           (ushort)(SUB161(auVar78 >> 0x2f,0) & 1) << 5 |
           (ushort)(SUB161(auVar78 >> 0x37,0) & 1) << 6 |
           (ushort)(SUB161(auVar78 >> 0x3f,0) & 1) << 7 |
           (ushort)(SUB161(auVar78 >> 0x47,0) & 1) << 8 |
           (ushort)(SUB161(auVar78 >> 0x4f,0) & 1) << 9 |
           (ushort)(SUB161(auVar78 >> 0x57,0) & 1) << 10 |
           (ushort)(SUB161(auVar78 >> 0x5f,0) & 1) << 0xb |
           (ushort)(SUB161(auVar78 >> 0x67,0) & 1) << 0xc |
           (ushort)(SUB161(auVar78 >> 0x6f,0) & 1) << 0xd |
           (ushort)(SUB161(auVar78 >> 0x77,0) & 1) << 0xe | (ushort)(auVar78[0xf] >> 7) << 0xf;
  uVar47 = (uint)uVar51;
  while (uVar51 != 0) {
    uVar4 = 0;
    for (uVar5 = uVar47; (uVar5 & 1) == 0; uVar5 = uVar5 >> 1 | 0x80000000) {
      uVar4 = uVar4 + 1;
    }
    uVar52 = uVar4 + uVar46 & *(ulonglong *)(param_1 + 0x58);
    pcVar1 = (char *)(lVar43 + -0x18 + uVar52 * -0x18);
    auVar79[0] = -(*pcVar1 == DAT_142f625b0);
    auVar79[1] = -(pcVar1[1] == DAT_142f625b0._1_1_);
    auVar79[2] = -(pcVar1[2] == DAT_142f625b0._2_1_);
    auVar79[3] = -(pcVar1[3] == DAT_142f625b0._3_1_);
    auVar79[4] = -(pcVar1[4] == DAT_142f625b0._4_1_);
    auVar79[5] = -(pcVar1[5] == DAT_142f625b0._5_1_);
    auVar79[6] = -(pcVar1[6] == DAT_142f625b0._6_1_);
    auVar79[7] = -(pcVar1[7] == DAT_142f625b0._7_1_);
    auVar79[8] = -(pcVar1[8] == DAT_142f625b0._8_1_);
    auVar79[9] = -(pcVar1[9] == DAT_142f625b0._9_1_);
    auVar79[10] = -(pcVar1[10] == DAT_142f625b0._10_1_);
    auVar79[0xb] = -(pcVar1[0xb] == DAT_142f625b0._11_1_);
    auVar79[0xc] = -(pcVar1[0xc] == DAT_142f625b0._12_1_);
    auVar79[0xd] = -(pcVar1[0xd] == DAT_142f625b0._13_1_);
    auVar79[0xe] = -(pcVar1[0xe] == DAT_142f625b0._14_1_);
    auVar79[0xf] = -(pcVar1[0xf] == DAT_142f625b0._15_1_);
    if ((ushort)((ushort)(SUB161(auVar79 >> 7,0) & 1) | (ushort)(SUB161(auVar79 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar79 >> 0x17,0) & 1) << 2 |
                 (ushort)(SUB161(auVar79 >> 0x1f,0) & 1) << 3 |
                 (ushort)(SUB161(auVar79 >> 0x27,0) & 1) << 4 |
                 (ushort)(SUB161(auVar79 >> 0x2f,0) & 1) << 5 |
                 (ushort)(SUB161(auVar79 >> 0x37,0) & 1) << 6 |
                 (ushort)(SUB161(auVar79 >> 0x3f,0) & 1) << 7 |
                 (ushort)(SUB161(auVar79 >> 0x47,0) & 1) << 8 |
                 (ushort)(SUB161(auVar79 >> 0x4f,0) & 1) << 9 |
                 (ushort)(SUB161(auVar79 >> 0x57,0) & 1) << 10 |
                 (ushort)(SUB161(auVar79 >> 0x5f,0) & 1) << 0xb |
                 (ushort)(SUB161(auVar79 >> 0x67,0) & 1) << 0xc |
                 (ushort)(SUB161(auVar79 >> 0x6f,0) & 1) << 0xd |
                 (ushort)(SUB161(auVar79 >> 0x77,0) & 1) << 0xe | (ushort)(auVar79[0xf] >> 7) << 0xf
                ) == 0xffff) {
      if (*(ulonglong *)(param_1 + 0x1a8) <= (ulonglong)(uint)piVar45[3]) goto LAB_1409b8f3f;
      uStack_81 = 1;
      uStack_82 = 1;
      lVar43 = pdb_140eff5a0((ulonglong)(uint)piVar45[3] * 0x48 + *(longlong *)(param_1 + 0x1a0),
                             *(undefined8 *)(lVar43 + uVar52 * -0x18 + -8),piVar45[1]);
      if (lVar43 == 0) goto LAB_1409b8f3f;
      if (*(longlong *)(lVar43 + 0x20) == 0) {
        uStack_81 = 1;
        uStack_82 = 1;
                    /* WARNING: Subroutine does not return */
        pdb_142dc8150(&UNK_14302ad90);
      }
      lVar43 = lVar43 + 0x20;
      uStack_81 = 1;
      uStack_82 = 1;
      pdb_141a75e80(&lStack_f0,lVar49,lVar43);
      lVar48 = lStack_e0;
      uVar53 = uStack_e8;
      lVar50 = lStack_f0;
      uStack_90 = uStack_e8;
      lStack_98 = lStack_f0;
      uStack_81 = 0;
      uStack_82 = 1;
      pdb_141a76030(lVar49,lVar43);
      uStack_90 = uVar53;
      lStack_98 = lVar50;
      uStack_81 = 0;
      uStack_82 = 1;
      pdb_141a78250(&lStack_f0,lVar49);
      uStack_90 = uVar53;
      lStack_98 = lVar50;
      uStack_a8 = uStack_e8;
      lStack_b0 = lStack_f0;
      uStack_81 = 0;
      uStack_82 = 0;
      pdb_141a760b0(lVar49,lVar43);
      lVar43 = lStack_f0;
      uStack_d8 = uStack_e8;
      goto LAB_1409b8f6b;
    }
    uVar51 = (ushort)(uVar47 - 1) & (ushort)uVar47;
    uVar47 = CONCAT22((short)(uVar47 - 1 >> 0x10),uVar51);
  }
  auVar73[0] = -(auVar54[0] == -1);
  auVar73[1] = -(auVar54[1] == -1);
  auVar73[2] = -(auVar54[2] == -1);
  auVar73[3] = -(auVar54[3] == -1);
  auVar73[4] = -(auVar54[4] == -1);
  auVar73[5] = -(auVar54[5] == -1);
  auVar73[6] = -(auVar54[6] == -1);
  auVar73[7] = -(auVar54[7] == -1);
  auVar73[8] = -(auVar54[8] == -1);
  auVar73[9] = -(auVar54[9] == -1);
  auVar73[10] = -(auVar54[10] == -1);
  auVar73[0xb] = -(auVar54[0xb] == -1);
  auVar73[0xc] = -(auVar54[0xc] == -1);
  auVar73[0xd] = -(auVar54[0xd] == -1);
  auVar73[0xe] = -(auVar54[0xe] == -1);
  auVar73[0xf] = -(auVar54[0xf] == -1);
  if ((((((((((((((((SUB161(auVar73 >> 7,0) & 1) != 0 || (SUB161(auVar73 >> 0xf,0) & 1) != 0) ||
                  (SUB161(auVar73 >> 0x17,0) & 1) != 0) || (SUB161(auVar73 >> 0x1f,0) & 1) != 0) ||
                (SUB161(auVar73 >> 0x27,0) & 1) != 0) || (SUB161(auVar73 >> 0x2f,0) & 1) != 0) ||
              (SUB161(auVar73 >> 0x37,0) & 1) != 0) || (SUB161(auVar73 >> 0x3f,0) & 1) != 0) ||
            (SUB161(auVar73 >> 0x47,0) & 1) != 0) || (SUB161(auVar73 >> 0x4f,0) & 1) != 0) ||
          (SUB161(auVar73 >> 0x57,0) & 1) != 0) || (SUB161(auVar73 >> 0x5f,0) & 1) != 0) ||
        (SUB161(auVar73 >> 0x67,0) & 1) != 0) || (SUB161(auVar73 >> 0x6f,0) & 1) != 0) ||
      (SUB161(auVar73 >> 0x77,0) & 1) != 0) || auVar73[0xf] < '\0') {
LAB_1409b8f3f:
    uStack_81 = 1;
    uStack_82 = 1;
    pdb_141a78250(&lStack_f0,lVar49);
    uVar53 = 4;
    lVar48 = 0;
    lVar50 = 0;
    lVar43 = lStack_f0;
    uStack_d8 = uStack_e8;
LAB_1409b8f6b:
    lStack_f0 = 1;
    uStack_e8 = 1;
    uStack_d0 = lStack_e0;
    lStack_c8 = lVar50;
    uStack_c0 = uVar53;
    uStack_b8 = lVar48;
    pdb_14007ee60();
    lStack_e0 = lVar43;
    pbVar44 = pub_1406abab0(0x40,8);
    if (pbVar44 == (byte *)0x0) {
      lStack_a0 = uVar53;
                    /* WARNING: Subroutine does not return */
      pdb_142dc7e11(8,0x40);
    }
    *(undefined8 *)(pbVar44 + 0x30) = uStack_c0;
    *(undefined8 *)(pbVar44 + 0x38) = uStack_b8;
    *(undefined8 *)(pbVar44 + 0x20) = uStack_d0;
    *(longlong *)(pbVar44 + 0x28) = lStack_c8;
    *(longlong *)(pbVar44 + 0x10) = lStack_e0;
    *(undefined8 *)(pbVar44 + 0x18) = uStack_d8;
    *(longlong *)pbVar44 = lStack_f0;
    *(undefined8 *)(pbVar44 + 8) = uStack_e8;
    return;
  }
  uVar46 = uVar46 + lVar50 + 0x10;
  lVar50 = lVar50 + 0x10;
  goto LAB_1409b8dc0;
LAB_1409b8ccd:
  auVar72[0] = -(*pcVar1 == (char)iVar6);
  auVar72[1] = -(pcVar1[1] == (char)((uint)iVar6 >> 8));
  auVar72[2] = -(pcVar1[2] == (char)((uint)iVar6 >> 0x10));
  auVar72[3] = -(pcVar1[3] == (char)((uint)iVar6 >> 0x18));
  auVar72[4] = -(pcVar1[4] == (char)iVar7);
  auVar72[5] = -(pcVar1[5] == (char)((uint)iVar7 >> 8));
  auVar72[6] = -(pcVar1[6] == (char)((uint)iVar7 >> 0x10));
  auVar72[7] = -(pcVar1[7] == (char)((uint)iVar7 >> 0x18));
  auVar72[8] = -(pcVar1[8] == (char)iVar8);
  auVar72[9] = -(pcVar1[9] == (char)((uint)iVar8 >> 8));
  auVar72[10] = -(pcVar1[10] == (char)((uint)iVar8 >> 0x10));
  auVar72[0xb] = -(pcVar1[0xb] == (char)((uint)iVar8 >> 0x18));
  auVar72[0xc] = -(pcVar1[0xc] == (char)iVar9);
  auVar72[0xd] = -(pcVar1[0xd] == (char)((uint)iVar9 >> 8));
  auVar72[0xe] = -(pcVar1[0xe] == (char)((uint)iVar9 >> 0x10));
  auVar72[0xf] = -(pcVar1[0xf] == (char)((uint)iVar9 >> 0x18));
  if ((((((((((((((((SUB161(auVar72 >> 7,0) & 1) != 0 || (SUB161(auVar72 >> 0xf,0) & 1) != 0) ||
                  (SUB161(auVar72 >> 0x17,0) & 1) != 0) || (SUB161(auVar72 >> 0x1f,0) & 1) != 0) ||
                (SUB161(auVar72 >> 0x27,0) & 1) != 0) || (SUB161(auVar72 >> 0x2f,0) & 1) != 0) ||
              (SUB161(auVar72 >> 0x37,0) & 1) != 0) || (SUB161(auVar72 >> 0x3f,0) & 1) != 0) ||
            (SUB161(auVar72 >> 0x47,0) & 1) != 0) || (SUB161(auVar72 >> 0x4f,0) & 1) != 0) ||
          (SUB161(auVar72 >> 0x57,0) & 1) != 0) || (SUB161(auVar72 >> 0x5f,0) & 1) != 0) ||
        (SUB161(auVar72 >> 0x67,0) & 1) != 0) || (SUB161(auVar72 >> 0x6f,0) & 1) != 0) ||
      (SUB161(auVar72 >> 0x77,0) & 1) != 0) || auVar72[0xf] < '\0') {
LAB_1409b8e43:
    uStack_81 = 1;
    uStack_82 = 1;
                    /* WARNING: Subroutine does not return */
    pdb_142dc8150(&UNK_14302ad78);
  }
  uVar46 = uVar46 + lVar50 + 0x10;
  lVar50 = lVar50 + 0x10;
  goto LAB_1409b8c7c;
LAB_1409b8c00:
  auVar80[0] = -(cVar10 == (char)iVar6);
  auVar80[1] = -(cVar11 == (char)((uint)iVar6 >> 8));
  auVar80[2] = -(cVar12 == (char)((uint)iVar6 >> 0x10));
  auVar80[3] = -(cVar13 == (char)((uint)iVar6 >> 0x18));
  auVar80[4] = -(cVar14 == (char)iVar7);
  auVar80[5] = -(cVar15 == (char)((uint)iVar7 >> 8));
  auVar80[6] = -(cVar16 == (char)((uint)iVar7 >> 0x10));
  auVar80[7] = -(cVar17 == (char)((uint)iVar7 >> 0x18));
  auVar80[8] = -(cVar18 == (char)iVar8);
  auVar80[9] = -(cVar19 == (char)((uint)iVar8 >> 8));
  auVar80[10] = -(cVar20 == (char)((uint)iVar8 >> 0x10));
  auVar80[0xb] = -(cVar21 == (char)((uint)iVar8 >> 0x18));
  auVar80[0xc] = -(cVar22 == (char)iVar9);
  auVar80[0xd] = -(cVar23 == (char)((uint)iVar9 >> 8));
  auVar80[0xe] = -(cVar24 == (char)((uint)iVar9 >> 0x10));
  auVar80[0xf] = -(cVar25 == (char)((uint)iVar9 >> 0x18));
  if ((((((((((((((((SUB161(auVar80 >> 7,0) & 1) != 0 || (SUB161(auVar80 >> 0xf,0) & 1) != 0) ||
                  (SUB161(auVar80 >> 0x17,0) & 1) != 0) || (SUB161(auVar80 >> 0x1f,0) & 1) != 0) ||
                (SUB161(auVar80 >> 0x27,0) & 1) != 0) || (SUB161(auVar80 >> 0x2f,0) & 1) != 0) ||
              (SUB161(auVar80 >> 0x37,0) & 1) != 0) || (SUB161(auVar80 >> 0x3f,0) & 1) != 0) ||
            (SUB161(auVar80 >> 0x47,0) & 1) != 0) || (SUB161(auVar80 >> 0x4f,0) & 1) != 0) ||
          (SUB161(auVar80 >> 0x57,0) & 1) != 0) || (SUB161(auVar80 >> 0x5f,0) & 1) != 0) ||
        (SUB161(auVar80 >> 0x67,0) & 1) != 0) || (SUB161(auVar80 >> 0x6f,0) & 1) != 0) ||
      (SUB161(auVar80 >> 0x77,0) & 1) != 0) || auVar80[0xf] < '\0') {
LAB_1409b8e29:
    lStack_a0 = lVar43;
    uStack_81 = 1;
    uStack_82 = 1;
                    /* WARNING: Subroutine does not return */
    pdb_142dc8150(&UNK_14302ad60);
  }
  uVar52 = uVar52 + lStack_a0 + 0x10;
  lVar49 = lStack_a0 + 0x10;
  lStack_a0 = lVar43;
  goto LAB_1409b8b90;
}

