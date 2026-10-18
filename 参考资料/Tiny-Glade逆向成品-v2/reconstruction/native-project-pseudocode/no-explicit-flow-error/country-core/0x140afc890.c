// VA 0x140afc890, PDB extent 3807 bytes
// country_core::systems::render_loop::draw_passes::final_post::final_post
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/render_loop/draw_passes/final_post.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::systems::render_loop::draw_passes::final_post::final_post
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/render_loop/draw_passes/final_post.rs
   Extent: 3807 */

undefined8 *
pdb_140afc890(undefined8 *param_1,longlong param_2,longlong param_3,uint param_4,longlong param_5,
             undefined8 param_6,undefined1 param_7,ulonglong *param_8)

{
  char *pcVar1;
  char *pcVar2;
  longlong *plVar3;
  code *pcVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
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
  undefined8 *puVar27;
  undefined2 uVar28;
  undefined2 uVar29;
  char cVar30;
  undefined4 uVar31;
  longlong lVar32;
  byte *pbVar33;
  byte **ppbVar34;
  ulonglong uVar35;
  ulonglong uVar36;
  uint uVar37;
  longlong lVar38;
  longlong lVar39;
  ushort uVar40;
  ulonglong uVar41;
  ulonglong uVar42;
  longlong lVar43;
  byte *unaff_R13;
  ulonglong uVar44;
  bool bVar45;
  byte bVar46;
  float fVar47;
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
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
  undefined1 auVar64 [16];
  undefined1 auStack_234 [20];
  byte **ppbStack_220;
  code *pcStack_218;
  longlong lStack_200;
  undefined8 *puStack_1f8;
  longlong lStack_1f0;
  undefined8 uStack_1e8;
  longlong lStack_1e0;
  undefined4 uStack_1d8;
  undefined4 uStack_1d4;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  byte *pbStack_1b8;
  ulonglong uStack_1b0;
  undefined4 uStack_1a8;
  undefined4 uStack_1a4;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  undefined8 uStack_198;
  ulonglong uStack_188;
  byte *pbStack_180;
  ulonglong uStack_178;
  byte *pbStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined1 uStack_150;
  undefined2 uStack_148;
  undefined2 uStack_146;
  undefined2 uStack_144;
  undefined2 uStack_142;
  undefined2 uStack_140;
  undefined2 uStack_13e;
  undefined2 uStack_13c;
  undefined1 uStack_13a;
  undefined1 uStack_139;
  undefined8 uStack_138;
  int *piStack_130;
  undefined4 *puStack_128;
  undefined4 *puStack_120;
  undefined8 *puStack_118;
  longlong lStack_110;
  undefined1 *puStack_108;
  longlong lStack_100;
  undefined1 *puStack_f8;
  undefined1 *puStack_f0;
  undefined1 *puStack_e8;
  uint *puStack_e0;
  undefined1 *puStack_d8;
  undefined4 *puStack_d0;
  byte **ppbStack_c8;
  longlong lStack_c0;
  int iStack_b8;
  uint uStack_b4;
  longlong lStack_b0;
  undefined4 uStack_a4;
  byte *pbStack_a0;
  undefined4 uStack_94;
  byte *pbStack_90;
  undefined1 uStack_86;
  undefined1 uStack_85;
  undefined1 uStack_84;
  undefined1 uStack_83;
  undefined1 uStack_82;
  undefined1 uStack_81;
  undefined8 uStack_80;
  
  uStack_80 = 0xfffffffffffffffe;
  uStack_85 = param_7;
  if (*(longlong *)(param_3 + 0x88) != 0) {
    lVar32 = *(longlong *)(param_3 + 0x70);
    uVar35 = 0x5a2668da2504810c;
    lVar38 = 0;
    while( true ) {
      uVar35 = uVar35 & *(ulonglong *)(param_3 + 0x78);
      auVar48 = *(undefined1 (*) [16])(lVar32 + uVar35);
      auVar55[0] = -(auVar48[0] == DAT_142e343a0);
      auVar55[1] = -(auVar48[1] == DAT_142e343a0._1_1_);
      auVar55[2] = -(auVar48[2] == DAT_142e343a0._2_1_);
      auVar55[3] = -(auVar48[3] == DAT_142e343a0._3_1_);
      auVar55[4] = -(auVar48[4] == DAT_142e343a0._4_1_);
      auVar55[5] = -(auVar48[5] == DAT_142e343a0._5_1_);
      auVar55[6] = -(auVar48[6] == DAT_142e343a0._6_1_);
      auVar55[7] = -(auVar48[7] == DAT_142e343a0._7_1_);
      auVar55[8] = -(auVar48[8] == DAT_142e343a0._8_1_);
      auVar55[9] = -(auVar48[9] == DAT_142e343a0._9_1_);
      auVar55[10] = -(auVar48[10] == DAT_142e343a0._10_1_);
      auVar55[0xb] = -(auVar48[0xb] == DAT_142e343a0._11_1_);
      auVar55[0xc] = -(auVar48[0xc] == DAT_142e343a0._12_1_);
      auVar55[0xd] = -(auVar48[0xd] == DAT_142e343a0._13_1_);
      auVar55[0xe] = -(auVar48[0xe] == DAT_142e343a0._14_1_);
      auVar55[0xf] = -(auVar48[0xf] == DAT_142e343a0._15_1_);
      uVar40 = (ushort)(SUB161(auVar55 >> 7,0) & 1) | (ushort)(SUB161(auVar55 >> 0xf,0) & 1) << 1 |
               (ushort)(SUB161(auVar55 >> 0x17,0) & 1) << 2 |
               (ushort)(SUB161(auVar55 >> 0x1f,0) & 1) << 3 |
               (ushort)(SUB161(auVar55 >> 0x27,0) & 1) << 4 |
               (ushort)(SUB161(auVar55 >> 0x2f,0) & 1) << 5 |
               (ushort)(SUB161(auVar55 >> 0x37,0) & 1) << 6 |
               (ushort)(SUB161(auVar55 >> 0x3f,0) & 1) << 7 |
               (ushort)(SUB161(auVar55 >> 0x47,0) & 1) << 8 |
               (ushort)(SUB161(auVar55 >> 0x4f,0) & 1) << 9 |
               (ushort)(SUB161(auVar55 >> 0x57,0) & 1) << 10 |
               (ushort)(SUB161(auVar55 >> 0x5f,0) & 1) << 0xb |
               (ushort)(SUB161(auVar55 >> 0x67,0) & 1) << 0xc |
               (ushort)(SUB161(auVar55 >> 0x6f,0) & 1) << 0xd |
               (ushort)(SUB161(auVar55 >> 0x77,0) & 1) << 0xe | (ushort)(auVar55[0xf] >> 7) << 0xf;
      uVar37 = (uint)uVar40;
      while (uVar40 != 0) {
        uVar5 = 0;
        for (uVar6 = uVar37; (uVar6 & 1) == 0; uVar6 = uVar6 >> 1 | 0x80000000) {
          uVar5 = uVar5 + 1;
        }
        uVar41 = uVar5 + uVar35 & *(ulonglong *)(param_3 + 0x78);
        pcVar1 = (char *)(lVar32 + -0x18 + uVar41 * -0x18);
        auVar56[0] = -(*pcVar1 == DAT_142e64940);
        auVar56[1] = -(pcVar1[1] == DAT_142e64940._1_1_);
        auVar56[2] = -(pcVar1[2] == DAT_142e64940._2_1_);
        auVar56[3] = -(pcVar1[3] == DAT_142e64940._3_1_);
        auVar56[4] = -(pcVar1[4] == DAT_142e64940._4_1_);
        auVar56[5] = -(pcVar1[5] == DAT_142e64940._5_1_);
        auVar56[6] = -(pcVar1[6] == DAT_142e64940._6_1_);
        auVar56[7] = -(pcVar1[7] == DAT_142e64940._7_1_);
        auVar56[8] = -(pcVar1[8] == DAT_142e64940._8_1_);
        auVar56[9] = -(pcVar1[9] == DAT_142e64940._9_1_);
        auVar56[10] = -(pcVar1[10] == DAT_142e64940._10_1_);
        auVar56[0xb] = -(pcVar1[0xb] == DAT_142e64940._11_1_);
        auVar56[0xc] = -(pcVar1[0xc] == DAT_142e64940._12_1_);
        auVar56[0xd] = -(pcVar1[0xd] == DAT_142e64940._13_1_);
        auVar56[0xe] = -(pcVar1[0xe] == DAT_142e64940._14_1_);
        auVar56[0xf] = -(pcVar1[0xf] == DAT_142e64940._15_1_);
        if ((ushort)((ushort)(SUB161(auVar56 >> 7,0) & 1) |
                     (ushort)(SUB161(auVar56 >> 0xf,0) & 1) << 1 |
                     (ushort)(SUB161(auVar56 >> 0x17,0) & 1) << 2 |
                     (ushort)(SUB161(auVar56 >> 0x1f,0) & 1) << 3 |
                     (ushort)(SUB161(auVar56 >> 0x27,0) & 1) << 4 |
                     (ushort)(SUB161(auVar56 >> 0x2f,0) & 1) << 5 |
                     (ushort)(SUB161(auVar56 >> 0x37,0) & 1) << 6 |
                     (ushort)(SUB161(auVar56 >> 0x3f,0) & 1) << 7 |
                     (ushort)(SUB161(auVar56 >> 0x47,0) & 1) << 8 |
                     (ushort)(SUB161(auVar56 >> 0x4f,0) & 1) << 9 |
                     (ushort)(SUB161(auVar56 >> 0x57,0) & 1) << 10 |
                     (ushort)(SUB161(auVar56 >> 0x5f,0) & 1) << 0xb |
                     (ushort)(SUB161(auVar56 >> 0x67,0) & 1) << 0xc |
                     (ushort)(SUB161(auVar56 >> 0x6f,0) & 1) << 0xd |
                     (ushort)(SUB161(auVar56 >> 0x77,0) & 1) << 0xe |
                    (ushort)(auVar56[0xf] >> 7) << 0xf) == 0xffff) {
          uVar35 = *(ulonglong *)(lVar32 + uVar41 * -0x18 + -8);
          if ((*(ulonglong *)(param_3 + 0x210) <= uVar35) ||
             (uVar35 = *(ulonglong *)(*(longlong *)(param_3 + 0x208) + uVar35 * 8), uVar35 == 0))
          goto LAB_140afca50;
          lVar32 = ~uVar35 * 0x40;
          if (*(longlong *)(*(longlong *)(param_3 + 0x1d8) + 0x20 + lVar32) == 0)
          goto LAB_140afca50;
          lVar38 = *(longlong *)(*(longlong *)(param_3 + 0x1d8) + lVar32 + 0x10);
          lVar39 = (ulonglong)*(byte *)(lVar38 + 0xc0) * 0x40;
          lVar32 = lVar38 + lVar39;
          if (*(char *)(lVar38 + 0x28 + lVar39) == '\0') {
            uStack_81 = 1;
            pdb_140f60be0(&uStack_178,lVar32);
            uStack_160 = *(undefined8 *)(lVar32 + 0x18);
            uStack_158 = *(undefined8 *)(lVar32 + 0x20);
          }
          else {
            pdb_14007ee60();
            pbVar33 = pub_1406abab0(7,1);
            if (pbVar33 == (byte *)0x0) {
              uStack_81 = 1;
              pdb_142dc7e2a(1,7);
              goto LAB_140afd567;
            }
            *(uint *)(pbVar33 + 3) = CONCAT31(_UNK_1430693cf,DAT_1430693ce);
            *(undefined4 *)pbVar33 = _DAT_1430693cb;
            uStack_178 = 7;
            uStack_168 = 7;
            uStack_160 = _DAT_143020ea0;
            uStack_158 = _UNK_143020ea8;
            pbStack_170 = pbVar33;
          }
          uStack_150 = 0;
          uStack_94 = 0;
          if (*(longlong *)(param_3 + 0x88) == 0) goto LAB_140afcbd7;
          lVar38 = *(longlong *)(param_3 + 0x70);
          uVar35 = 0x17b2b0983155443e;
          lVar39 = 0;
          goto LAB_140afcad9;
        }
        uVar40 = (ushort)(uVar37 - 1) & (ushort)uVar37;
        uVar37 = CONCAT22((short)(uVar37 - 1 >> 0x10),uVar40);
      }
      auVar50[0] = -(auVar48[0] == -1);
      auVar50[1] = -(auVar48[1] == -1);
      auVar50[2] = -(auVar48[2] == -1);
      auVar50[3] = -(auVar48[3] == -1);
      auVar50[4] = -(auVar48[4] == -1);
      auVar50[5] = -(auVar48[5] == -1);
      auVar50[6] = -(auVar48[6] == -1);
      auVar50[7] = -(auVar48[7] == -1);
      auVar50[8] = -(auVar48[8] == -1);
      auVar50[9] = -(auVar48[9] == -1);
      auVar50[10] = -(auVar48[10] == -1);
      auVar50[0xb] = -(auVar48[0xb] == -1);
      auVar50[0xc] = -(auVar48[0xc] == -1);
      auVar50[0xd] = -(auVar48[0xd] == -1);
      auVar50[0xe] = -(auVar48[0xe] == -1);
      auVar50[0xf] = -(auVar48[0xf] == -1);
      if ((((((((((((((((SUB161(auVar50 >> 7,0) & 1) != 0 || (SUB161(auVar50 >> 0xf,0) & 1) != 0) ||
                      (SUB161(auVar50 >> 0x17,0) & 1) != 0) || (SUB161(auVar50 >> 0x1f,0) & 1) != 0)
                    || (SUB161(auVar50 >> 0x27,0) & 1) != 0) || (SUB161(auVar50 >> 0x2f,0) & 1) != 0
                   ) || (SUB161(auVar50 >> 0x37,0) & 1) != 0) ||
                 (SUB161(auVar50 >> 0x3f,0) & 1) != 0) || (SUB161(auVar50 >> 0x47,0) & 1) != 0) ||
               (SUB161(auVar50 >> 0x4f,0) & 1) != 0) || (SUB161(auVar50 >> 0x57,0) & 1) != 0) ||
             (SUB161(auVar50 >> 0x5f,0) & 1) != 0) || (SUB161(auVar50 >> 0x67,0) & 1) != 0) ||
           (SUB161(auVar50 >> 0x6f,0) & 1) != 0) || (SUB161(auVar50 >> 0x77,0) & 1) != 0) ||
          auVar50[0xf] < '\0') break;
      uVar35 = uVar35 + lVar38 + 0x10;
      lVar38 = lVar38 + 0x10;
    }
  }
LAB_140afca50:
  uStack_81 = 1;
                    /* WARNING: Subroutine does not return */
  pdb_142dc8150(&UNK_1430521a8);
LAB_140afcad9:
  uVar35 = uVar35 & *(ulonglong *)(param_3 + 0x78);
  auVar48 = *(undefined1 (*) [16])(lVar38 + uVar35);
  auVar57[0] = -(auVar48[0] == DAT_142e42310);
  auVar57[1] = -(auVar48[1] == DAT_142e42310._1_1_);
  auVar57[2] = -(auVar48[2] == DAT_142e42310._2_1_);
  auVar57[3] = -(auVar48[3] == DAT_142e42310._3_1_);
  auVar57[4] = -(auVar48[4] == DAT_142e42310._4_1_);
  auVar57[5] = -(auVar48[5] == DAT_142e42310._5_1_);
  auVar57[6] = -(auVar48[6] == DAT_142e42310._6_1_);
  auVar57[7] = -(auVar48[7] == DAT_142e42310._7_1_);
  auVar57[8] = -(auVar48[8] == DAT_142e42310._8_1_);
  auVar57[9] = -(auVar48[9] == DAT_142e42310._9_1_);
  auVar57[10] = -(auVar48[10] == DAT_142e42310._10_1_);
  auVar57[0xb] = -(auVar48[0xb] == DAT_142e42310._11_1_);
  auVar57[0xc] = -(auVar48[0xc] == DAT_142e42310._12_1_);
  auVar57[0xd] = -(auVar48[0xd] == DAT_142e42310._13_1_);
  auVar57[0xe] = -(auVar48[0xe] == DAT_142e42310._14_1_);
  auVar57[0xf] = -(auVar48[0xf] == DAT_142e42310._15_1_);
  uVar40 = (ushort)(SUB161(auVar57 >> 7,0) & 1) | (ushort)(SUB161(auVar57 >> 0xf,0) & 1) << 1 |
           (ushort)(SUB161(auVar57 >> 0x17,0) & 1) << 2 |
           (ushort)(SUB161(auVar57 >> 0x1f,0) & 1) << 3 |
           (ushort)(SUB161(auVar57 >> 0x27,0) & 1) << 4 |
           (ushort)(SUB161(auVar57 >> 0x2f,0) & 1) << 5 |
           (ushort)(SUB161(auVar57 >> 0x37,0) & 1) << 6 |
           (ushort)(SUB161(auVar57 >> 0x3f,0) & 1) << 7 |
           (ushort)(SUB161(auVar57 >> 0x47,0) & 1) << 8 |
           (ushort)(SUB161(auVar57 >> 0x4f,0) & 1) << 9 |
           (ushort)(SUB161(auVar57 >> 0x57,0) & 1) << 10 |
           (ushort)(SUB161(auVar57 >> 0x5f,0) & 1) << 0xb |
           (ushort)(SUB161(auVar57 >> 0x67,0) & 1) << 0xc |
           (ushort)(SUB161(auVar57 >> 0x6f,0) & 1) << 0xd |
           (ushort)(SUB161(auVar57 >> 0x77,0) & 1) << 0xe | (ushort)(auVar57[0xf] >> 7) << 0xf;
  uVar37 = (uint)uVar40;
  while (uVar40 != 0) {
    uVar5 = 0;
    for (uVar6 = uVar37; (uVar6 & 1) == 0; uVar6 = uVar6 >> 1 | 0x80000000) {
      uVar5 = uVar5 + 1;
    }
    uVar41 = uVar5 + uVar35 & *(ulonglong *)(param_3 + 0x78);
    pcVar1 = (char *)(lVar38 + -0x18 + uVar41 * -0x18);
    auVar58[0] = -(*pcVar1 == DAT_142e42320);
    auVar58[1] = -(pcVar1[1] == DAT_142e42320._1_1_);
    auVar58[2] = -(pcVar1[2] == DAT_142e42320._2_1_);
    auVar58[3] = -(pcVar1[3] == DAT_142e42320._3_1_);
    auVar58[4] = -(pcVar1[4] == DAT_142e42320._4_1_);
    auVar58[5] = -(pcVar1[5] == DAT_142e42320._5_1_);
    auVar58[6] = -(pcVar1[6] == DAT_142e42320._6_1_);
    auVar58[7] = -(pcVar1[7] == DAT_142e42320._7_1_);
    auVar58[8] = -(pcVar1[8] == DAT_142e42320._8_1_);
    auVar58[9] = -(pcVar1[9] == DAT_142e42320._9_1_);
    auVar58[10] = -(pcVar1[10] == DAT_142e42320._10_1_);
    auVar58[0xb] = -(pcVar1[0xb] == DAT_142e42320._11_1_);
    auVar58[0xc] = -(pcVar1[0xc] == DAT_142e42320._12_1_);
    auVar58[0xd] = -(pcVar1[0xd] == DAT_142e42320._13_1_);
    auVar58[0xe] = -(pcVar1[0xe] == DAT_142e42320._14_1_);
    auVar58[0xf] = -(pcVar1[0xf] == DAT_142e42320._15_1_);
    if ((ushort)((ushort)(SUB161(auVar58 >> 7,0) & 1) | (ushort)(SUB161(auVar58 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar58 >> 0x17,0) & 1) << 2 |
                 (ushort)(SUB161(auVar58 >> 0x1f,0) & 1) << 3 |
                 (ushort)(SUB161(auVar58 >> 0x27,0) & 1) << 4 |
                 (ushort)(SUB161(auVar58 >> 0x2f,0) & 1) << 5 |
                 (ushort)(SUB161(auVar58 >> 0x37,0) & 1) << 6 |
                 (ushort)(SUB161(auVar58 >> 0x3f,0) & 1) << 7 |
                 (ushort)(SUB161(auVar58 >> 0x47,0) & 1) << 8 |
                 (ushort)(SUB161(auVar58 >> 0x4f,0) & 1) << 9 |
                 (ushort)(SUB161(auVar58 >> 0x57,0) & 1) << 10 |
                 (ushort)(SUB161(auVar58 >> 0x5f,0) & 1) << 0xb |
                 (ushort)(SUB161(auVar58 >> 0x67,0) & 1) << 0xc |
                 (ushort)(SUB161(auVar58 >> 0x6f,0) & 1) << 0xd |
                 (ushort)(SUB161(auVar58 >> 0x77,0) & 1) << 0xe | (ushort)(auVar58[0xf] >> 7) << 0xf
                ) == 0xffff) {
      uVar35 = *(ulonglong *)(lVar38 + uVar41 * -0x18 + -8);
      if ((*(ulonglong *)(param_3 + 0x210) <= uVar35) ||
         (uVar35 = *(ulonglong *)(*(longlong *)(param_3 + 0x208) + uVar35 * 8), uVar35 == 0))
      goto LAB_140afcbd7;
      lVar38 = ~uVar35 * 0x40;
      if (*(longlong *)(*(longlong *)(param_3 + 0x1d8) + 0x20 + lVar38) == 0) goto LAB_140afcbd7;
      uStack_86 = **(char **)(*(longlong *)(param_3 + 0x1d8) + lVar38 + 0x10) == '\x10';
      uStack_188 = *param_8;
      uStack_84 = SBORROW8(0,uStack_188);
      lStack_200 = lVar32;
      if ((bool)uStack_84) {
        uStack_94 = 1;
        if ((char)param_8[1] == '\0') {
          uStack_94 = 3;
          pdb_14007ee60();
          pbVar33 = pub_1406abab0(7,1);
          if (pbVar33 == (byte *)0x0) {
            uStack_83 = 1;
            pdb_142dc7e2a(1,7);
LAB_140afd567:
                    /* WARNING: Does not return */
            pcVar4 = (code *)invalidInstructionException();
            (*pcVar4)();
          }
          *(uint *)(pbVar33 + 3) = CONCAT31(_UNK_1430693cf,DAT_1430693ce);
          *(undefined4 *)pbVar33 = _DAT_1430693cb;
          if (uStack_178 != 0) {
            pub_1406abac0(pbStack_170,uStack_178,1);
          }
          uStack_178 = 7;
          uStack_168 = 7;
          uStack_160 = _DAT_143020ea0;
          uStack_158 = _UNK_143020ea8;
          uStack_a4 = 0;
          uStack_82 = 0;
          pbStack_170 = pbVar33;
          if (*(longlong *)(param_3 + 0x88) == 0) goto LAB_140afcf36;
          uVar35 = 7;
          unaff_R13 = &UNK_143052239;
        }
        else {
          uStack_82 = 0;
          uStack_a4 = 0;
          unaff_R13 = &UNK_143052239;
          uVar35 = 7;
        }
      }
      else {
        unaff_R13 = (byte *)param_8[1];
        uVar35 = param_8[2];
        uStack_a4 = (undefined4)param_8[3];
        uStack_82 = *(undefined1 *)((longlong)param_8 + 0x1c);
      }
      uStack_150 = 0;
      lVar32 = *(longlong *)(param_3 + 0x70);
      uVar41 = *(ulonglong *)(param_3 + 0x78);
      uVar36 = 0x924b7c70f1f31f57;
      lVar38 = 0;
      goto LAB_140afccf3;
    }
    uVar40 = (ushort)(uVar37 - 1) & (ushort)uVar37;
    uVar37 = CONCAT22((short)(uVar37 - 1 >> 0x10),uVar40);
  }
  goto LAB_140afcb30;
LAB_140afccf3:
  uVar36 = uVar36 & uVar41;
  pcVar1 = (char *)(lVar32 + uVar36);
  auVar48[0] = -(*pcVar1 == DAT_142e34260);
  auVar48[1] = -(pcVar1[1] == DAT_142e34260._1_1_);
  auVar48[2] = -(pcVar1[2] == DAT_142e34260._2_1_);
  auVar48[3] = -(pcVar1[3] == DAT_142e34260._3_1_);
  auVar48[4] = -(pcVar1[4] == DAT_142e34260._4_1_);
  auVar48[5] = -(pcVar1[5] == DAT_142e34260._5_1_);
  auVar48[6] = -(pcVar1[6] == DAT_142e34260._6_1_);
  auVar48[7] = -(pcVar1[7] == DAT_142e34260._7_1_);
  auVar48[8] = -(pcVar1[8] == DAT_142e34260._8_1_);
  auVar48[9] = -(pcVar1[9] == DAT_142e34260._9_1_);
  auVar48[10] = -(pcVar1[10] == DAT_142e34260._10_1_);
  auVar48[0xb] = -(pcVar1[0xb] == DAT_142e34260._11_1_);
  auVar48[0xc] = -(pcVar1[0xc] == DAT_142e34260._12_1_);
  auVar48[0xd] = -(pcVar1[0xd] == DAT_142e34260._13_1_);
  auVar48[0xe] = -(pcVar1[0xe] == DAT_142e34260._14_1_);
  auVar48[0xf] = -(pcVar1[0xf] == DAT_142e34260._15_1_);
  uVar40 = (ushort)(SUB161(auVar48 >> 7,0) & 1) | (ushort)(SUB161(auVar48 >> 0xf,0) & 1) << 1 |
           (ushort)(SUB161(auVar48 >> 0x17,0) & 1) << 2 |
           (ushort)(SUB161(auVar48 >> 0x1f,0) & 1) << 3 |
           (ushort)(SUB161(auVar48 >> 0x27,0) & 1) << 4 |
           (ushort)(SUB161(auVar48 >> 0x2f,0) & 1) << 5 |
           (ushort)(SUB161(auVar48 >> 0x37,0) & 1) << 6 |
           (ushort)(SUB161(auVar48 >> 0x3f,0) & 1) << 7 |
           (ushort)(SUB161(auVar48 >> 0x47,0) & 1) << 8 |
           (ushort)(SUB161(auVar48 >> 0x4f,0) & 1) << 9 |
           (ushort)(SUB161(auVar48 >> 0x57,0) & 1) << 10 |
           (ushort)(SUB161(auVar48 >> 0x5f,0) & 1) << 0xb |
           (ushort)(SUB161(auVar48 >> 0x67,0) & 1) << 0xc |
           (ushort)(SUB161(auVar48 >> 0x6f,0) & 1) << 0xd |
           (ushort)(SUB161(auVar48 >> 0x77,0) & 1) << 0xe | (ushort)(auVar48[0xf] >> 7) << 0xf;
  uVar37 = (uint)uVar40;
  while (uVar40 != 0) {
    uVar5 = 0;
    for (uVar6 = uVar37; (uVar6 & 1) == 0; uVar6 = uVar6 >> 1 | 0x80000000) {
      uVar5 = uVar5 + 1;
    }
    uVar42 = uVar5 + uVar36 & uVar41;
    pcVar2 = (char *)(lVar32 + -0x18 + uVar42 * -0x18);
    auVar59[0] = -(*pcVar2 == DAT_142e34410);
    auVar59[1] = -(pcVar2[1] == UNK_142e34411);
    auVar59[2] = -(pcVar2[2] == UNK_142e34412);
    auVar59[3] = -(pcVar2[3] == UNK_142e34413);
    auVar59[4] = -(pcVar2[4] == UNK_142e34414);
    auVar59[5] = -(pcVar2[5] == UNK_142e34415);
    auVar59[6] = -(pcVar2[6] == UNK_142e34416);
    auVar59[7] = -(pcVar2[7] == UNK_142e34417);
    auVar59[8] = -(pcVar2[8] == UNK_142e34418);
    auVar59[9] = -(pcVar2[9] == UNK_142e34419);
    auVar59[10] = -(pcVar2[10] == UNK_142e3441a);
    auVar59[0xb] = -(pcVar2[0xb] == UNK_142e3441b);
    auVar59[0xc] = -(pcVar2[0xc] == UNK_142e3441c);
    auVar59[0xd] = -(pcVar2[0xd] == UNK_142e3441d);
    auVar59[0xe] = -(pcVar2[0xe] == UNK_142e3441e);
    auVar59[0xf] = -(pcVar2[0xf] == UNK_142e3441f);
    if ((ushort)((ushort)(SUB161(auVar59 >> 7,0) & 1) | (ushort)(SUB161(auVar59 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar59 >> 0x17,0) & 1) << 2 |
                 (ushort)(SUB161(auVar59 >> 0x1f,0) & 1) << 3 |
                 (ushort)(SUB161(auVar59 >> 0x27,0) & 1) << 4 |
                 (ushort)(SUB161(auVar59 >> 0x2f,0) & 1) << 5 |
                 (ushort)(SUB161(auVar59 >> 0x37,0) & 1) << 6 |
                 (ushort)(SUB161(auVar59 >> 0x3f,0) & 1) << 7 |
                 (ushort)(SUB161(auVar59 >> 0x47,0) & 1) << 8 |
                 (ushort)(SUB161(auVar59 >> 0x4f,0) & 1) << 9 |
                 (ushort)(SUB161(auVar59 >> 0x57,0) & 1) << 10 |
                 (ushort)(SUB161(auVar59 >> 0x5f,0) & 1) << 0xb |
                 (ushort)(SUB161(auVar59 >> 0x67,0) & 1) << 0xc |
                 (ushort)(SUB161(auVar59 >> 0x6f,0) & 1) << 0xd |
                 (ushort)(SUB161(auVar59 >> 0x77,0) & 1) << 0xe | (ushort)(auVar59[0xf] >> 7) << 0xf
                ) == 0xffff) {
      uVar36 = *(ulonglong *)(lVar32 + uVar42 * -0x18 + -8);
      uVar42 = *(ulonglong *)(param_3 + 0x210);
      if (uVar42 <= uVar36) goto LAB_140afcf36;
      lVar38 = *(longlong *)(param_3 + 0x208);
      uVar36 = *(ulonglong *)(lVar38 + uVar36 * 8);
      if (uVar36 == 0) goto LAB_140afcf36;
      lVar39 = *(longlong *)(param_3 + 0x1d8);
      lVar43 = ~uVar36 * 0x40;
      puStack_1f8 = param_1;
      if (*(longlong *)(lVar39 + 0x20 + lVar43) == 0) goto LAB_140afcf36;
      plVar3 = *(longlong **)(lVar43 + lVar39 + 0x10);
      lStack_b0 = *plVar3;
      uVar36 = 0x7057b4358e925fdb;
      lVar43 = 0;
      goto LAB_140afcde1;
    }
    uVar40 = (ushort)(uVar37 - 1) & (ushort)uVar37;
    uVar37 = CONCAT22((short)(uVar37 - 1 >> 0x10),uVar40);
  }
  goto LAB_140afcd45;
LAB_140afcde1:
  uVar36 = uVar36 & uVar41;
  pcVar1 = (char *)(lVar32 + uVar36);
  auVar60[0] = -(*pcVar1 == DAT_142e33d90);
  auVar60[1] = -(pcVar1[1] == DAT_142e33d90._1_1_);
  auVar60[2] = -(pcVar1[2] == DAT_142e33d90._2_1_);
  auVar60[3] = -(pcVar1[3] == DAT_142e33d90._3_1_);
  auVar60[4] = -(pcVar1[4] == DAT_142e33d90._4_1_);
  auVar60[5] = -(pcVar1[5] == DAT_142e33d90._5_1_);
  auVar60[6] = -(pcVar1[6] == DAT_142e33d90._6_1_);
  auVar60[7] = -(pcVar1[7] == DAT_142e33d90._7_1_);
  auVar60[8] = -(pcVar1[8] == DAT_142e33d90._8_1_);
  auVar60[9] = -(pcVar1[9] == DAT_142e33d90._9_1_);
  auVar60[10] = -(pcVar1[10] == DAT_142e33d90._10_1_);
  auVar60[0xb] = -(pcVar1[0xb] == DAT_142e33d90._11_1_);
  auVar60[0xc] = -(pcVar1[0xc] == DAT_142e33d90._12_1_);
  auVar60[0xd] = -(pcVar1[0xd] == DAT_142e33d90._13_1_);
  auVar60[0xe] = -(pcVar1[0xe] == DAT_142e33d90._14_1_);
  auVar60[0xf] = -(pcVar1[0xf] == DAT_142e33d90._15_1_);
  uVar40 = (ushort)(SUB161(auVar60 >> 7,0) & 1) | (ushort)(SUB161(auVar60 >> 0xf,0) & 1) << 1 |
           (ushort)(SUB161(auVar60 >> 0x17,0) & 1) << 2 |
           (ushort)(SUB161(auVar60 >> 0x1f,0) & 1) << 3 |
           (ushort)(SUB161(auVar60 >> 0x27,0) & 1) << 4 |
           (ushort)(SUB161(auVar60 >> 0x2f,0) & 1) << 5 |
           (ushort)(SUB161(auVar60 >> 0x37,0) & 1) << 6 |
           (ushort)(SUB161(auVar60 >> 0x3f,0) & 1) << 7 |
           (ushort)(SUB161(auVar60 >> 0x47,0) & 1) << 8 |
           (ushort)(SUB161(auVar60 >> 0x4f,0) & 1) << 9 |
           (ushort)(SUB161(auVar60 >> 0x57,0) & 1) << 10 |
           (ushort)(SUB161(auVar60 >> 0x5f,0) & 1) << 0xb |
           (ushort)(SUB161(auVar60 >> 0x67,0) & 1) << 0xc |
           (ushort)(SUB161(auVar60 >> 0x6f,0) & 1) << 0xd |
           (ushort)(SUB161(auVar60 >> 0x77,0) & 1) << 0xe | (ushort)(auVar60[0xf] >> 7) << 0xf;
  uVar37 = (uint)uVar40;
  while (pbStack_90 = unaff_R13, uVar40 != 0) {
    uVar5 = 0;
    for (uVar6 = uVar37; (uVar6 & 1) == 0; uVar6 = uVar6 >> 1 | 0x80000000) {
      uVar5 = uVar5 + 1;
    }
    uVar44 = uVar5 + uVar36 & uVar41;
    pcVar2 = (char *)(lVar32 + -0x18 + uVar44 * -0x18);
    auVar61[0] = -(*pcVar2 == DAT_142e34350);
    auVar61[1] = -(pcVar2[1] == DAT_142e34350._1_1_);
    auVar61[2] = -(pcVar2[2] == DAT_142e34350._2_1_);
    auVar61[3] = -(pcVar2[3] == DAT_142e34350._3_1_);
    auVar61[4] = -(pcVar2[4] == DAT_142e34350._4_1_);
    auVar61[5] = -(pcVar2[5] == DAT_142e34350._5_1_);
    auVar61[6] = -(pcVar2[6] == DAT_142e34350._6_1_);
    auVar61[7] = -(pcVar2[7] == DAT_142e34350._7_1_);
    auVar61[8] = -(pcVar2[8] == DAT_142e34350._8_1_);
    auVar61[9] = -(pcVar2[9] == DAT_142e34350._9_1_);
    auVar61[10] = -(pcVar2[10] == DAT_142e34350._10_1_);
    auVar61[0xb] = -(pcVar2[0xb] == DAT_142e34350._11_1_);
    auVar61[0xc] = -(pcVar2[0xc] == DAT_142e34350._12_1_);
    auVar61[0xd] = -(pcVar2[0xd] == DAT_142e34350._13_1_);
    auVar61[0xe] = -(pcVar2[0xe] == DAT_142e34350._14_1_);
    auVar61[0xf] = -(pcVar2[0xf] == DAT_142e34350._15_1_);
    pbStack_a0 = unaff_R13;
    if ((ushort)((ushort)(SUB161(auVar61 >> 7,0) & 1) | (ushort)(SUB161(auVar61 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar61 >> 0x17,0) & 1) << 2 |
                 (ushort)(SUB161(auVar61 >> 0x1f,0) & 1) << 3 |
                 (ushort)(SUB161(auVar61 >> 0x27,0) & 1) << 4 |
                 (ushort)(SUB161(auVar61 >> 0x2f,0) & 1) << 5 |
                 (ushort)(SUB161(auVar61 >> 0x37,0) & 1) << 6 |
                 (ushort)(SUB161(auVar61 >> 0x3f,0) & 1) << 7 |
                 (ushort)(SUB161(auVar61 >> 0x47,0) & 1) << 8 |
                 (ushort)(SUB161(auVar61 >> 0x4f,0) & 1) << 9 |
                 (ushort)(SUB161(auVar61 >> 0x57,0) & 1) << 10 |
                 (ushort)(SUB161(auVar61 >> 0x5f,0) & 1) << 0xb |
                 (ushort)(SUB161(auVar61 >> 0x67,0) & 1) << 0xc |
                 (ushort)(SUB161(auVar61 >> 0x6f,0) & 1) << 0xd |
                 (ushort)(SUB161(auVar61 >> 0x77,0) & 1) << 0xe | (ushort)(auVar61[0xf] >> 7) << 0xf
                ) == 0xffff) {
      uVar36 = *(ulonglong *)(lVar32 + uVar44 * -0x18 + -8);
      if (((uVar42 <= uVar36) || (uVar36 = *(ulonglong *)(lVar38 + uVar36 * 8), uVar36 == 0)) ||
         (lVar43 = ~uVar36 * 0x40, *(longlong *)(lVar39 + 0x20 + lVar43) == 0)) goto LAB_140afd1a1;
      lStack_1f0 = *(longlong *)(lVar43 + lVar39 + 0x10);
      uVar36 = 0x1d6a82b468dfb8a2;
      lVar43 = 0;
      goto LAB_140afcec1;
    }
    uVar40 = (ushort)(uVar37 - 1) & (ushort)uVar37;
    uVar37 = CONCAT22((short)(uVar37 - 1 >> 0x10),uVar40);
  }
  goto LAB_140afce40;
LAB_140afcec1:
  uVar36 = uVar36 & uVar41;
  auVar48 = *(undefined1 (*) [16])(lVar32 + uVar36);
  auVar62[0] = -(auVar48[0] == DAT_142e34ec0);
  auVar62[1] = -(auVar48[1] == DAT_142e34ec0._1_1_);
  auVar62[2] = -(auVar48[2] == DAT_142e34ec0._2_1_);
  auVar62[3] = -(auVar48[3] == DAT_142e34ec0._3_1_);
  auVar62[4] = -(auVar48[4] == DAT_142e34ec0._4_1_);
  auVar62[5] = -(auVar48[5] == DAT_142e34ec0._5_1_);
  auVar62[6] = -(auVar48[6] == DAT_142e34ec0._6_1_);
  auVar62[7] = -(auVar48[7] == DAT_142e34ec0._7_1_);
  auVar62[8] = -(auVar48[8] == DAT_142e34ec0._8_1_);
  auVar62[9] = -(auVar48[9] == DAT_142e34ec0._9_1_);
  auVar62[10] = -(auVar48[10] == DAT_142e34ec0._10_1_);
  auVar62[0xb] = -(auVar48[0xb] == DAT_142e34ec0._11_1_);
  auVar62[0xc] = -(auVar48[0xc] == DAT_142e34ec0._12_1_);
  auVar62[0xd] = -(auVar48[0xd] == DAT_142e34ec0._13_1_);
  auVar62[0xe] = -(auVar48[0xe] == DAT_142e34ec0._14_1_);
  auVar62[0xf] = -(auVar48[0xf] == DAT_142e34ec0._15_1_);
  uVar40 = (ushort)(SUB161(auVar62 >> 7,0) & 1) | (ushort)(SUB161(auVar62 >> 0xf,0) & 1) << 1 |
           (ushort)(SUB161(auVar62 >> 0x17,0) & 1) << 2 |
           (ushort)(SUB161(auVar62 >> 0x1f,0) & 1) << 3 |
           (ushort)(SUB161(auVar62 >> 0x27,0) & 1) << 4 |
           (ushort)(SUB161(auVar62 >> 0x2f,0) & 1) << 5 |
           (ushort)(SUB161(auVar62 >> 0x37,0) & 1) << 6 |
           (ushort)(SUB161(auVar62 >> 0x3f,0) & 1) << 7 |
           (ushort)(SUB161(auVar62 >> 0x47,0) & 1) << 8 |
           (ushort)(SUB161(auVar62 >> 0x4f,0) & 1) << 9 |
           (ushort)(SUB161(auVar62 >> 0x57,0) & 1) << 10 |
           (ushort)(SUB161(auVar62 >> 0x5f,0) & 1) << 0xb |
           (ushort)(SUB161(auVar62 >> 0x67,0) & 1) << 0xc |
           (ushort)(SUB161(auVar62 >> 0x6f,0) & 1) << 0xd |
           (ushort)(SUB161(auVar62 >> 0x77,0) & 1) << 0xe | (ushort)(auVar62[0xf] >> 7) << 0xf;
  uVar37 = (uint)uVar40;
  while (uVar40 != 0) {
    uVar5 = 0;
    for (uVar6 = uVar37; (uVar6 & 1) == 0; uVar6 = uVar6 >> 1 | 0x80000000) {
      uVar5 = uVar5 + 1;
    }
    uVar44 = uVar5 + uVar36 & uVar41;
    pcVar1 = (char *)(lVar32 + -0x18 + uVar44 * -0x18);
    auVar63[0] = -(*pcVar1 == DAT_142e60e60);
    auVar63[1] = -(pcVar1[1] == DAT_142e60e60._1_1_);
    auVar63[2] = -(pcVar1[2] == DAT_142e60e60._2_1_);
    auVar63[3] = -(pcVar1[3] == DAT_142e60e60._3_1_);
    auVar63[4] = -(pcVar1[4] == DAT_142e60e60._4_1_);
    auVar63[5] = -(pcVar1[5] == DAT_142e60e60._5_1_);
    auVar63[6] = -(pcVar1[6] == DAT_142e60e60._6_1_);
    auVar63[7] = -(pcVar1[7] == DAT_142e60e60._7_1_);
    auVar63[8] = -(pcVar1[8] == DAT_142e60e60._8_1_);
    auVar63[9] = -(pcVar1[9] == DAT_142e60e60._9_1_);
    auVar63[10] = -(pcVar1[10] == DAT_142e60e60._10_1_);
    auVar63[0xb] = -(pcVar1[0xb] == DAT_142e60e60._11_1_);
    auVar63[0xc] = -(pcVar1[0xc] == DAT_142e60e60._12_1_);
    auVar63[0xd] = -(pcVar1[0xd] == DAT_142e60e60._13_1_);
    auVar63[0xe] = -(pcVar1[0xe] == DAT_142e60e60._14_1_);
    auVar63[0xf] = -(pcVar1[0xf] == DAT_142e60e60._15_1_);
    if ((ushort)((ushort)(SUB161(auVar63 >> 7,0) & 1) | (ushort)(SUB161(auVar63 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar63 >> 0x17,0) & 1) << 2 |
                 (ushort)(SUB161(auVar63 >> 0x1f,0) & 1) << 3 |
                 (ushort)(SUB161(auVar63 >> 0x27,0) & 1) << 4 |
                 (ushort)(SUB161(auVar63 >> 0x2f,0) & 1) << 5 |
                 (ushort)(SUB161(auVar63 >> 0x37,0) & 1) << 6 |
                 (ushort)(SUB161(auVar63 >> 0x3f,0) & 1) << 7 |
                 (ushort)(SUB161(auVar63 >> 0x47,0) & 1) << 8 |
                 (ushort)(SUB161(auVar63 >> 0x4f,0) & 1) << 9 |
                 (ushort)(SUB161(auVar63 >> 0x57,0) & 1) << 10 |
                 (ushort)(SUB161(auVar63 >> 0x5f,0) & 1) << 0xb |
                 (ushort)(SUB161(auVar63 >> 0x67,0) & 1) << 0xc |
                 (ushort)(SUB161(auVar63 >> 0x6f,0) & 1) << 0xd |
                 (ushort)(SUB161(auVar63 >> 0x77,0) & 1) << 0xe | (ushort)(auVar63[0xf] >> 7) << 0xf
                ) == 0xffff) {
      uVar41 = *(ulonglong *)(lVar32 + uVar44 * -0x18 + -8);
      if (((uVar41 < uVar42) && (uVar41 = *(ulonglong *)(lVar38 + uVar41 * 8), uVar41 != 0)) &&
         (lVar32 = ~uVar41 * 0x40, *(longlong *)(lVar39 + 0x20 + lVar32) != 0)) {
        uStack_1e8 = *(undefined8 *)(lVar39 + lVar32 + 0x10);
        pdb_141527160(auStack_234,uStack_1e8,param_2);
        uStack_148 = 0;
        uStack_146 = (undefined2)param_4;
        uVar28 = uStack_146;
        uStack_144 = (undefined2)(param_4 >> 0x10);
        uVar29 = uStack_144;
        uStack_142 = 1;
        uStack_140 = 1;
        uStack_13e = 0x2b01;
        uStack_13c = 0x204;
        uStack_13a = 0;
        uStack_138._0_4_ = 0x43052220;
        uStack_138._4_4_ = 1;
        piStack_130 = (int *)0xe;
        uStack_b4 = param_4;
        pbStack_90 = unaff_R13;
        uVar31 = pdb_140e2b4e0(param_2,&uStack_148);
        uStack_144 = (undefined2)uVar31;
        uStack_142 = (undefined2)((uint)uVar31 >> 0x10);
        uStack_13c = 1;
        uStack_13a = 1;
        uStack_139 = 0;
        uStack_138._0_4_ = 0x2042b01;
        uStack_138._4_4_ = uStack_138._4_4_ & 0xffffff00;
        uStack_148 = 0;
        uStack_146 = 0;
        uStack_140 = uVar28;
        uStack_13e = uVar29;
        if (*(char *)(param_2 + 0x24c) == '\x01') {
          pbStack_90 = unaff_R13;
          pdb_140e19620(&uStack_148,param_2);
        }
        uStack_198 = CONCAT44(uStack_138._4_4_,(undefined4)uStack_138);
        uStack_1a8 = CONCAT22(uStack_146,uStack_148);
        uStack_1a4 = CONCAT22(uStack_142,uStack_144);
        uStack_1a0 = CONCAT22(uStack_13e,uStack_140);
        fVar47 = (float)*(ushort *)(param_5 + 8) / (float)(param_4 & 0xffff);
        iStack_b8 = 4;
        if (_DAT_142e3c678 <= fVar47) {
          iStack_b8 = (_DAT_143009d08 <= fVar47) + 1;
        }
        uStack_19c = CONCAT13(uStack_139,CONCAT12(uStack_13a,uStack_13c));
        bVar45 = SBORROW8(0,lStack_b0);
        lStack_b0 = -lStack_b0;
        if (bVar45) {
          uStack_82 = 0;
          uStack_148 = 0;
          uStack_146 = 1;
          uStack_144 = 1;
          uStack_142 = 1;
          uStack_140 = 1;
          uStack_13e = 0x901;
          uStack_13c = 0x401;
          uStack_13a = 0;
          uStack_138._0_4_ = 0x4305222e;
          uStack_138._4_4_ = 1;
          piStack_130 = (int *)0xb;
          pbStack_90 = unaff_R13;
          uVar31 = pdb_140e2b4e0(param_2,&uStack_148);
          uStack_144 = (undefined2)uVar31;
          uStack_142 = (undefined2)((uint)uVar31 >> 0x10);
          uStack_140 = 1;
          uStack_13e = 1;
          uStack_13c = 1;
          uStack_13a = 1;
          uStack_139 = 0;
          uStack_138._0_4_ = 0x4010901;
          uStack_138._4_4_ = uStack_138._4_4_ & 0xffffff00;
          uStack_148 = 0;
          uStack_146 = 0;
          if (*(char *)(param_2 + 0x24c) == '\x01') {
            pbStack_90 = unaff_R13;
            pdb_140e19620(&uStack_148,param_2);
          }
          uStack_1c8 = CONCAT44(uStack_138._4_4_,(undefined4)uStack_138);
          uStack_1d8 = CONCAT22(uStack_146,uStack_148);
          uStack_1d4 = CONCAT22(uStack_142,uStack_144);
          uStack_1d0 = CONCAT17(uStack_139,
                                CONCAT16(uStack_13a,
                                         CONCAT24(uStack_13c,CONCAT22(uStack_13e,uStack_140))));
        }
        else {
          pbStack_90 = unaff_R13;
          pdb_140e1ea30(&uStack_1d8,plVar3[3],param_2,0x23,&UNK_143330ab0);
        }
        ppbStack_220 = &pbStack_1b8;
        pcStack_218 = pdb_1402ed400;
        pbStack_1b8 = unaff_R13;
        uStack_1b0 = uVar35;
        pbStack_90 = unaff_R13;
        pdb_140f60760(&uStack_148,&UNK_143068d54,&ppbStack_220);
        pbStack_180 = (byte *)CONCAT17(uStack_139,
                                       CONCAT16(uStack_13a,
                                                CONCAT24(uStack_13c,CONCAT22(uStack_13e,uStack_140))
                                               ));
        lStack_b0 = param_2;
        ppbVar34 = (byte **)pdb_140df4400(pbStack_180,
                                          CONCAT44(uStack_138._4_4_,(undefined4)uStack_138));
        lVar38 = lStack_1f0;
        ppbStack_220 = ppbVar34;
        lVar32 = lStack_1e0;
        if (*(longlong *)(lStack_1f0 + 0x60) != 0) {
          lVar39 = *(longlong *)(lStack_1f0 + 0x48);
          uVar35 = *(ulonglong *)(lStack_1f0 + 0x50);
          bVar46 = (byte)((ulonglong)ppbVar34 >> 0x39);
          auVar48 = ZEXT216(CONCAT11(bVar46,bVar46));
          auVar48 = pshuflw(auVar48,auVar48,0);
          lVar43 = 0;
          iVar7 = -(uint)(CONCAT13(unaff_XMM7_Bd,
                                   CONCAT12(unaff_XMM7_Bc,CONCAT11(unaff_XMM7_Bb,unaff_XMM7_Ba))) ==
                         CONCAT13(unaff_XMM7_Bd,
                                  CONCAT12(unaff_XMM7_Bc,CONCAT11(unaff_XMM7_Bb,unaff_XMM7_Ba))));
          iVar8 = -(uint)(CONCAT13(unaff_XMM7_Bh,
                                   CONCAT12(unaff_XMM7_Bg,CONCAT11(unaff_XMM7_Bf,unaff_XMM7_Be))) ==
                         CONCAT13(unaff_XMM7_Bh,
                                  CONCAT12(unaff_XMM7_Bg,CONCAT11(unaff_XMM7_Bf,unaff_XMM7_Be))));
          iVar9 = -(uint)(CONCAT13(unaff_XMM7_Bl,
                                   CONCAT12(unaff_XMM7_Bk,CONCAT11(unaff_XMM7_Bj,unaff_XMM7_Bi))) ==
                         CONCAT13(unaff_XMM7_Bl,
                                  CONCAT12(unaff_XMM7_Bk,CONCAT11(unaff_XMM7_Bj,unaff_XMM7_Bi))));
          iVar10 = -(uint)(CONCAT13(unaff_XMM7_Bp,
                                    CONCAT12(unaff_XMM7_Bo,CONCAT11(unaff_XMM7_Bn,unaff_XMM7_Bm)))
                          == CONCAT13(unaff_XMM7_Bp,
                                      CONCAT12(unaff_XMM7_Bo,CONCAT11(unaff_XMM7_Bn,unaff_XMM7_Bm)))
                          );
          while( true ) {
            uVar41 = (ulonglong)ppbVar34 & uVar35;
            pcVar1 = (char *)(lVar39 + uVar41);
            cVar11 = *pcVar1;
            cVar12 = pcVar1[1];
            cVar13 = pcVar1[2];
            cVar14 = pcVar1[3];
            cVar15 = pcVar1[4];
            cVar16 = pcVar1[5];
            cVar17 = pcVar1[6];
            cVar18 = pcVar1[7];
            cVar19 = pcVar1[8];
            cVar20 = pcVar1[9];
            cVar21 = pcVar1[10];
            cVar22 = pcVar1[0xb];
            cVar23 = pcVar1[0xc];
            cVar24 = pcVar1[0xd];
            cVar25 = pcVar1[0xe];
            cVar26 = pcVar1[0xf];
            auVar49[0] = -(cVar11 == auVar48[0]);
            auVar49[1] = -(cVar12 == auVar48[1]);
            auVar49[2] = -(cVar13 == auVar48[2]);
            auVar49[3] = -(cVar14 == auVar48[3]);
            auVar49[4] = -(cVar15 == auVar48[4]);
            auVar49[5] = -(cVar16 == auVar48[5]);
            auVar49[6] = -(cVar17 == auVar48[6]);
            auVar49[7] = -(cVar18 == auVar48[7]);
            auVar49[8] = -(cVar19 == auVar48[0]);
            auVar49[9] = -(cVar20 == auVar48[1]);
            auVar49[10] = -(cVar21 == auVar48[2]);
            auVar49[0xb] = -(cVar22 == auVar48[3]);
            auVar49[0xc] = -(cVar23 == auVar48[4]);
            auVar49[0xd] = -(cVar24 == auVar48[5]);
            auVar49[0xe] = -(cVar25 == auVar48[6]);
            auVar49[0xf] = -(cVar26 == auVar48[7]);
            uVar40 = (ushort)(SUB161(auVar49 >> 7,0) & 1) |
                     (ushort)(SUB161(auVar49 >> 0xf,0) & 1) << 1 |
                     (ushort)(SUB161(auVar49 >> 0x17,0) & 1) << 2 |
                     (ushort)(SUB161(auVar49 >> 0x1f,0) & 1) << 3 |
                     (ushort)(SUB161(auVar49 >> 0x27,0) & 1) << 4 |
                     (ushort)(SUB161(auVar49 >> 0x2f,0) & 1) << 5 |
                     (ushort)(SUB161(auVar49 >> 0x37,0) & 1) << 6 |
                     (ushort)(SUB161(auVar49 >> 0x3f,0) & 1) << 7 |
                     (ushort)(SUB161(auVar49 >> 0x47,0) & 1) << 8 |
                     (ushort)(SUB161(auVar49 >> 0x4f,0) & 1) << 9 |
                     (ushort)(SUB161(auVar49 >> 0x57,0) & 1) << 10 |
                     (ushort)(SUB161(auVar49 >> 0x5f,0) & 1) << 0xb |
                     (ushort)(SUB161(auVar49 >> 0x67,0) & 1) << 0xc |
                     (ushort)(SUB161(auVar49 >> 0x6f,0) & 1) << 0xd |
                     (ushort)(SUB161(auVar49 >> 0x77,0) & 1) << 0xe |
                     (ushort)(auVar49[0xf] >> 7) << 0xf;
            uVar37 = (uint)uVar40;
            lVar32 = lStack_1e0;
            while (lStack_1e0 = lVar43, uVar40 != 0) {
              uVar5 = 0;
              for (uVar6 = uVar37; (uVar6 & 1) == 0; uVar6 = uVar6 >> 1 | 0x80000000) {
                uVar5 = uVar5 + 1;
              }
              uVar36 = uVar5 + uVar41 & uVar35;
              cVar30 = pdb_140df4430(&ppbStack_220,lVar39 + uVar36 * -0x18 + -0x18);
              if (cVar30 != '\0') {
                uVar31 = pdb_140a2ec70(lVar38,*(undefined8 *)(lVar39 + uVar36 * -0x18 + -0x10));
                pbStack_1b8 = (byte *)CONCAT44(pbStack_1b8._4_4_,uVar31);
                uVar35 = CONCAT26(uStack_142,CONCAT24(uStack_144,CONCAT22(uStack_146,uStack_148)));
                if (uVar35 != 0) {
                  pub_1406abac0(pbStack_180,uVar35,1);
                }
                pbVar33 = pbStack_a0;
                lVar32 = lStack_b0;
                ppbStack_220 = (byte **)CONCAT44(ppbStack_220._4_4_,2);
                pcStack_218 = (code *)&uStack_1a8;
                uStack_148 = (undefined2)param_5;
                uStack_146 = (undefined2)((ulonglong)param_5 >> 0x10);
                uStack_144 = (undefined2)((ulonglong)param_5 >> 0x20);
                uStack_142 = (undefined2)((ulonglong)param_5 >> 0x30);
                uStack_140 = (undefined2)param_6;
                uStack_13e = (undefined2)((ulonglong)param_6 >> 0x10);
                uStack_13c = (undefined2)((ulonglong)param_6 >> 0x20);
                uStack_13a = (undefined1)((ulonglong)param_6 >> 0x30);
                uStack_139 = (undefined1)((ulonglong)param_6 >> 0x38);
                uStack_138 = &uStack_85;
                piStack_130 = &iStack_b8;
                puStack_128 = &uStack_a4;
                puStack_120 = &uStack_94;
                puStack_118 = &uStack_158;
                lStack_110 = (longlong)&uStack_158 + 4;
                puStack_108 = &stack0x00000050;
                lStack_100 = lStack_200;
                puStack_f8 = &stack0x00000048;
                puStack_f0 = &uStack_86;
                puStack_e8 = &uStack_82;
                puStack_e0 = &uStack_b4;
                puStack_d8 = auStack_234;
                puStack_d0 = &uStack_1d8;
                ppbStack_c8 = &pbStack_1b8;
                lStack_c0 = lVar38;
                pbStack_90 = pbStack_a0;
                pdb_141753eb0(lStack_b0,&UNK_143052258,10,&ppbStack_220,&uStack_148);
                uStack_148 = (undefined2)uStack_1a8;
                uStack_146 = (undefined2)((uint)uStack_1a8 >> 0x10);
                uStack_144 = (undefined2)uStack_1a4;
                uStack_142 = (undefined2)((uint)uStack_1a4 >> 0x10);
                uStack_140 = (undefined2)uStack_1a0;
                uStack_13e = (undefined2)((uint)uStack_1a0 >> 0x10);
                uStack_13c = (undefined2)uStack_19c;
                uStack_13a = (undefined1)((uint)uStack_19c >> 0x10);
                uStack_139 = (undefined1)((uint)uStack_19c >> 0x18);
                uStack_138._0_4_ = (undefined4)uStack_198;
                uStack_138._4_4_ = (uint)((ulonglong)uStack_198 >> 0x20);
                pbStack_90 = pbVar33;
                pdb_141535930(uStack_1e8,lVar32);
                puVar27 = puStack_1f8;
                puStack_1f8[2] = CONCAT44(uStack_138._4_4_,(undefined4)uStack_138);
                *puStack_1f8 = CONCAT26(uStack_142,
                                        CONCAT24(uStack_144,CONCAT22(uStack_146,uStack_148)));
                puStack_1f8[1] =
                     CONCAT17(uStack_139,
                              CONCAT16(uStack_13a,
                                       CONCAT24(uStack_13c,CONCAT22(uStack_13e,uStack_140))));
                if (0 < (longlong)uStack_188) {
                  pub_1406abac0(pbVar33,uStack_188,1);
                }
                if (uStack_178 != 0) {
                  pub_1406abac0(pbStack_170,uStack_178,1);
                }
                return puVar27;
              }
              uVar40 = (ushort)(uVar37 - 1) & (ushort)uVar37;
              uVar37 = CONCAT22((short)(uVar37 - 1 >> 0x10),uVar40);
              lVar43 = lStack_1e0;
              lVar32 = lStack_1e0;
            }
            auVar64[0] = -(cVar11 == (char)iVar7);
            auVar64[1] = -(cVar12 == (char)((uint)iVar7 >> 8));
            auVar64[2] = -(cVar13 == (char)((uint)iVar7 >> 0x10));
            auVar64[3] = -(cVar14 == (char)((uint)iVar7 >> 0x18));
            auVar64[4] = -(cVar15 == (char)iVar8);
            auVar64[5] = -(cVar16 == (char)((uint)iVar8 >> 8));
            auVar64[6] = -(cVar17 == (char)((uint)iVar8 >> 0x10));
            auVar64[7] = -(cVar18 == (char)((uint)iVar8 >> 0x18));
            auVar64[8] = -(cVar19 == (char)iVar9);
            auVar64[9] = -(cVar20 == (char)((uint)iVar9 >> 8));
            auVar64[10] = -(cVar21 == (char)((uint)iVar9 >> 0x10));
            auVar64[0xb] = -(cVar22 == (char)((uint)iVar9 >> 0x18));
            auVar64[0xc] = -(cVar23 == (char)iVar10);
            auVar64[0xd] = -(cVar24 == (char)((uint)iVar10 >> 8));
            auVar64[0xe] = -(cVar25 == (char)((uint)iVar10 >> 0x10));
            auVar64[0xf] = -(cVar26 == (char)((uint)iVar10 >> 0x18));
            if ((((((((((((((((SUB161(auVar64 >> 7,0) & 1) != 0 ||
                             (SUB161(auVar64 >> 0xf,0) & 1) != 0) ||
                            (SUB161(auVar64 >> 0x17,0) & 1) != 0) ||
                           (SUB161(auVar64 >> 0x1f,0) & 1) != 0) ||
                          (SUB161(auVar64 >> 0x27,0) & 1) != 0) ||
                         (SUB161(auVar64 >> 0x2f,0) & 1) != 0) ||
                        (SUB161(auVar64 >> 0x37,0) & 1) != 0) ||
                       (SUB161(auVar64 >> 0x3f,0) & 1) != 0) || (SUB161(auVar64 >> 0x47,0) & 1) != 0
                      ) || (SUB161(auVar64 >> 0x4f,0) & 1) != 0) ||
                    (SUB161(auVar64 >> 0x57,0) & 1) != 0) || (SUB161(auVar64 >> 0x5f,0) & 1) != 0)
                  || (SUB161(auVar64 >> 0x67,0) & 1) != 0) || (SUB161(auVar64 >> 0x6f,0) & 1) != 0)
                || (SUB161(auVar64 >> 0x77,0) & 1) != 0) || auVar64[0xf] < '\0') break;
            ppbVar34 = (byte **)(uVar41 + lStack_1e0 + 0x10);
            lVar43 = lStack_1e0 + 0x10;
            lStack_1e0 = lVar32;
          }
        }
        lStack_1e0 = lVar32;
                    /* WARNING: Subroutine does not return */
        pdb_142dc8150(&UNK_143052240);
      }
      goto LAB_140afd1ba;
    }
    uVar40 = (ushort)(uVar37 - 1) & (ushort)uVar37;
    uVar37 = CONCAT22((short)(uVar37 - 1 >> 0x10),uVar40);
  }
  auVar54[0] = -(auVar48[0] == -1);
  auVar54[1] = -(auVar48[1] == -1);
  auVar54[2] = -(auVar48[2] == -1);
  auVar54[3] = -(auVar48[3] == -1);
  auVar54[4] = -(auVar48[4] == -1);
  auVar54[5] = -(auVar48[5] == -1);
  auVar54[6] = -(auVar48[6] == -1);
  auVar54[7] = -(auVar48[7] == -1);
  auVar54[8] = -(auVar48[8] == -1);
  auVar54[9] = -(auVar48[9] == -1);
  auVar54[10] = -(auVar48[10] == -1);
  auVar54[0xb] = -(auVar48[0xb] == -1);
  auVar54[0xc] = -(auVar48[0xc] == -1);
  auVar54[0xd] = -(auVar48[0xd] == -1);
  auVar54[0xe] = -(auVar48[0xe] == -1);
  auVar54[0xf] = -(auVar48[0xf] == -1);
  if ((((((((((((((((SUB161(auVar54 >> 7,0) & 1) != 0 || (SUB161(auVar54 >> 0xf,0) & 1) != 0) ||
                  (SUB161(auVar54 >> 0x17,0) & 1) != 0) || (SUB161(auVar54 >> 0x1f,0) & 1) != 0) ||
                (SUB161(auVar54 >> 0x27,0) & 1) != 0) || (SUB161(auVar54 >> 0x2f,0) & 1) != 0) ||
              (SUB161(auVar54 >> 0x37,0) & 1) != 0) || (SUB161(auVar54 >> 0x3f,0) & 1) != 0) ||
            (SUB161(auVar54 >> 0x47,0) & 1) != 0) || (SUB161(auVar54 >> 0x4f,0) & 1) != 0) ||
          (SUB161(auVar54 >> 0x57,0) & 1) != 0) || (SUB161(auVar54 >> 0x5f,0) & 1) != 0) ||
        (SUB161(auVar54 >> 0x67,0) & 1) != 0) || (SUB161(auVar54 >> 0x6f,0) & 1) != 0) ||
      (SUB161(auVar54 >> 0x77,0) & 1) != 0) || auVar54[0xf] < '\0') {
LAB_140afd1ba:
                    /* WARNING: Subroutine does not return */
    pdb_142dc8150(&UNK_143052208);
  }
  uVar36 = uVar36 + lVar43 + 0x10;
  lVar43 = lVar43 + 0x10;
  goto LAB_140afcec1;
LAB_140afce40:
  auVar53[0] = -(*pcVar1 == -1);
  auVar53[1] = -(pcVar1[1] == -1);
  auVar53[2] = -(pcVar1[2] == -1);
  auVar53[3] = -(pcVar1[3] == -1);
  auVar53[4] = -(pcVar1[4] == -1);
  auVar53[5] = -(pcVar1[5] == -1);
  auVar53[6] = -(pcVar1[6] == -1);
  auVar53[7] = -(pcVar1[7] == -1);
  auVar53[8] = -(pcVar1[8] == -1);
  auVar53[9] = -(pcVar1[9] == -1);
  auVar53[10] = -(pcVar1[10] == -1);
  auVar53[0xb] = -(pcVar1[0xb] == -1);
  auVar53[0xc] = -(pcVar1[0xc] == -1);
  auVar53[0xd] = -(pcVar1[0xd] == -1);
  auVar53[0xe] = -(pcVar1[0xe] == -1);
  auVar53[0xf] = -(pcVar1[0xf] == -1);
  if ((((((((((((((((SUB161(auVar53 >> 7,0) & 1) != 0 || (SUB161(auVar53 >> 0xf,0) & 1) != 0) ||
                  (SUB161(auVar53 >> 0x17,0) & 1) != 0) || (SUB161(auVar53 >> 0x1f,0) & 1) != 0) ||
                (SUB161(auVar53 >> 0x27,0) & 1) != 0) || (SUB161(auVar53 >> 0x2f,0) & 1) != 0) ||
              (SUB161(auVar53 >> 0x37,0) & 1) != 0) || (SUB161(auVar53 >> 0x3f,0) & 1) != 0) ||
            (SUB161(auVar53 >> 0x47,0) & 1) != 0) || (SUB161(auVar53 >> 0x4f,0) & 1) != 0) ||
          (SUB161(auVar53 >> 0x57,0) & 1) != 0) || (SUB161(auVar53 >> 0x5f,0) & 1) != 0) ||
        (SUB161(auVar53 >> 0x67,0) & 1) != 0) || (SUB161(auVar53 >> 0x6f,0) & 1) != 0) ||
      (SUB161(auVar53 >> 0x77,0) & 1) != 0) || auVar53[0xf] < '\0') {
LAB_140afd1a1:
                    /* WARNING: Subroutine does not return */
    pdb_142dc8150(&UNK_1430521f0);
  }
  uVar36 = uVar36 + lVar43 + 0x10;
  lVar43 = lVar43 + 0x10;
  goto LAB_140afcde1;
LAB_140afcd45:
  auVar52[0] = -(*pcVar1 == -1);
  auVar52[1] = -(pcVar1[1] == -1);
  auVar52[2] = -(pcVar1[2] == -1);
  auVar52[3] = -(pcVar1[3] == -1);
  auVar52[4] = -(pcVar1[4] == -1);
  auVar52[5] = -(pcVar1[5] == -1);
  auVar52[6] = -(pcVar1[6] == -1);
  auVar52[7] = -(pcVar1[7] == -1);
  auVar52[8] = -(pcVar1[8] == -1);
  auVar52[9] = -(pcVar1[9] == -1);
  auVar52[10] = -(pcVar1[10] == -1);
  auVar52[0xb] = -(pcVar1[0xb] == -1);
  auVar52[0xc] = -(pcVar1[0xc] == -1);
  auVar52[0xd] = -(pcVar1[0xd] == -1);
  auVar52[0xe] = -(pcVar1[0xe] == -1);
  auVar52[0xf] = -(pcVar1[0xf] == -1);
  if ((((((((((((((((SUB161(auVar52 >> 7,0) & 1) != 0 || (SUB161(auVar52 >> 0xf,0) & 1) != 0) ||
                  (SUB161(auVar52 >> 0x17,0) & 1) != 0) || (SUB161(auVar52 >> 0x1f,0) & 1) != 0) ||
                (SUB161(auVar52 >> 0x27,0) & 1) != 0) || (SUB161(auVar52 >> 0x2f,0) & 1) != 0) ||
              (SUB161(auVar52 >> 0x37,0) & 1) != 0) || (SUB161(auVar52 >> 0x3f,0) & 1) != 0) ||
            (SUB161(auVar52 >> 0x47,0) & 1) != 0) || (SUB161(auVar52 >> 0x4f,0) & 1) != 0) ||
          (SUB161(auVar52 >> 0x57,0) & 1) != 0) || (SUB161(auVar52 >> 0x5f,0) & 1) != 0) ||
        (SUB161(auVar52 >> 0x67,0) & 1) != 0) || (SUB161(auVar52 >> 0x6f,0) & 1) != 0) ||
      (SUB161(auVar52 >> 0x77,0) & 1) != 0) || auVar52[0xf] < '\0') {
LAB_140afcf36:
    uStack_150 = 0;
    pbStack_90 = unaff_R13;
                    /* WARNING: Subroutine does not return */
    pdb_142dc8150(&UNK_1430521d8);
  }
  uVar36 = uVar36 + lVar38 + 0x10;
  lVar38 = lVar38 + 0x10;
  goto LAB_140afccf3;
LAB_140afcb30:
  auVar51[0] = -(auVar48[0] == -1);
  auVar51[1] = -(auVar48[1] == -1);
  auVar51[2] = -(auVar48[2] == -1);
  auVar51[3] = -(auVar48[3] == -1);
  auVar51[4] = -(auVar48[4] == -1);
  auVar51[5] = -(auVar48[5] == -1);
  auVar51[6] = -(auVar48[6] == -1);
  auVar51[7] = -(auVar48[7] == -1);
  auVar51[8] = -(auVar48[8] == -1);
  auVar51[9] = -(auVar48[9] == -1);
  auVar51[10] = -(auVar48[10] == -1);
  auVar51[0xb] = -(auVar48[0xb] == -1);
  auVar51[0xc] = -(auVar48[0xc] == -1);
  auVar51[0xd] = -(auVar48[0xd] == -1);
  auVar51[0xe] = -(auVar48[0xe] == -1);
  auVar51[0xf] = -(auVar48[0xf] == -1);
  if ((((((((((((((((SUB161(auVar51 >> 7,0) & 1) != 0 || (SUB161(auVar51 >> 0xf,0) & 1) != 0) ||
                  (SUB161(auVar51 >> 0x17,0) & 1) != 0) || (SUB161(auVar51 >> 0x1f,0) & 1) != 0) ||
                (SUB161(auVar51 >> 0x27,0) & 1) != 0) || (SUB161(auVar51 >> 0x2f,0) & 1) != 0) ||
              (SUB161(auVar51 >> 0x37,0) & 1) != 0) || (SUB161(auVar51 >> 0x3f,0) & 1) != 0) ||
            (SUB161(auVar51 >> 0x47,0) & 1) != 0) || (SUB161(auVar51 >> 0x4f,0) & 1) != 0) ||
          (SUB161(auVar51 >> 0x57,0) & 1) != 0) || (SUB161(auVar51 >> 0x5f,0) & 1) != 0) ||
        (SUB161(auVar51 >> 0x67,0) & 1) != 0) || (SUB161(auVar51 >> 0x6f,0) & 1) != 0) ||
      (SUB161(auVar51 >> 0x77,0) & 1) != 0) || auVar51[0xf] < '\0') {
LAB_140afcbd7:
    uStack_83 = 1;
                    /* WARNING: Subroutine does not return */
    pdb_142dc8150(&UNK_1430521c0);
  }
  uVar35 = uVar35 + lVar39 + 0x10;
  lVar39 = lVar39 + 0x10;
  goto LAB_140afcad9;
}

