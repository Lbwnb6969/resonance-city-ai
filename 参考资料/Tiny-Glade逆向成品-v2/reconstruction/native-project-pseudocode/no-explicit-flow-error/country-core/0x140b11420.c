// VA 0x140b11420, PDB extent 1183 bytes
// country_core::systems::render_loop::draw_passes::ui_pass::render_simple_bucket
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/render_loop/draw_passes/ui_pass.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::systems::render_loop::draw_passes::ui_pass::render_simple_bucket
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/render_loop/draw_passes/ui_pass.rs
   Extent: 1183 */

void pdb_140b11420(char *param_1,longlong param_2,longlong param_3,longlong param_4,
                  undefined1 param_5)

{
  char *pcVar1;
  char cVar2;
  longlong *plVar3;
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
  longlong lVar42;
  undefined8 uVar43;
  longlong lVar44;
  undefined4 uVar45;
  ulonglong uVar46;
  longlong lVar47;
  char *pcVar48;
  uint uVar49;
  longlong lVar50;
  longlong lVar51;
  ushort uVar52;
  ulonglong uVar53;
  byte bVar54;
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
  char cVar64;
  undefined1 unaff_XMM7_Bc;
  char cVar65;
  undefined1 unaff_XMM7_Bd;
  char cVar66;
  undefined1 unaff_XMM7_Be;
  undefined1 unaff_XMM7_Bf;
  char cVar67;
  undefined1 unaff_XMM7_Bg;
  char cVar68;
  undefined1 unaff_XMM7_Bh;
  char cVar69;
  undefined1 unaff_XMM7_Bi;
  undefined1 unaff_XMM7_Bj;
  char cVar70;
  undefined1 unaff_XMM7_Bk;
  char cVar71;
  undefined1 unaff_XMM7_Bl;
  char cVar72;
  undefined1 unaff_XMM7_Bm;
  undefined1 unaff_XMM7_Bn;
  char cVar73;
  undefined1 unaff_XMM7_Bo;
  char cVar74;
  undefined1 unaff_XMM7_Bp;
  char cVar75;
  undefined4 uStack_8c;
  longlong lStack_88;
  longlong alStack_80 [8];
  
  if (*(longlong *)(param_4 + 0x88) == 0) {
LAB_140b1186d:
                    /* WARNING: Subroutine does not return */
    pdb_142dc8150(&UNK_143054f18);
  }
  lVar42 = *(longlong *)(param_4 + 0x70);
  uVar46 = 0xbc86f891ccb8bc37;
  lVar50 = 0;
  do {
    uVar46 = uVar46 & *(ulonglong *)(param_4 + 0x78);
    auVar56 = *(undefined1 (*) [16])(lVar42 + uVar46);
    auVar62[0] = -(auVar56[0] == DAT_142e34330);
    auVar62[1] = -(auVar56[1] == DAT_142e34330._1_1_);
    auVar62[2] = -(auVar56[2] == DAT_142e34330._2_1_);
    auVar62[3] = -(auVar56[3] == DAT_142e34330._3_1_);
    auVar62[4] = -(auVar56[4] == DAT_142e34330._4_1_);
    auVar62[5] = -(auVar56[5] == DAT_142e34330._5_1_);
    auVar62[6] = -(auVar56[6] == DAT_142e34330._6_1_);
    auVar62[7] = -(auVar56[7] == DAT_142e34330._7_1_);
    auVar62[8] = -(auVar56[8] == DAT_142e34330._8_1_);
    auVar62[9] = -(auVar56[9] == DAT_142e34330._9_1_);
    auVar62[10] = -(auVar56[10] == DAT_142e34330._10_1_);
    auVar62[0xb] = -(auVar56[0xb] == DAT_142e34330._11_1_);
    auVar62[0xc] = -(auVar56[0xc] == DAT_142e34330._12_1_);
    auVar62[0xd] = -(auVar56[0xd] == DAT_142e34330._13_1_);
    auVar62[0xe] = -(auVar56[0xe] == DAT_142e34330._14_1_);
    auVar62[0xf] = -(auVar56[0xf] == DAT_142e34330._15_1_);
    uVar52 = (ushort)(SUB161(auVar62 >> 7,0) & 1) | (ushort)(SUB161(auVar62 >> 0xf,0) & 1) << 1 |
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
    uVar49 = (uint)uVar52;
    while (uVar52 != 0) {
      uVar4 = 0;
      for (uVar5 = uVar49; (uVar5 & 1) == 0; uVar5 = uVar5 >> 1 | 0x80000000) {
        uVar4 = uVar4 + 1;
      }
      uVar53 = uVar4 + uVar46 & *(ulonglong *)(param_4 + 0x78);
      pcVar48 = (char *)(lVar42 + -0x18 + uVar53 * -0x18);
      auVar63[0] = -(*pcVar48 == DAT_142e34340);
      auVar63[1] = -(pcVar48[1] == DAT_142e34340._1_1_);
      auVar63[2] = -(pcVar48[2] == DAT_142e34340._2_1_);
      auVar63[3] = -(pcVar48[3] == DAT_142e34340._3_1_);
      auVar63[4] = -(pcVar48[4] == DAT_142e34340._4_1_);
      auVar63[5] = -(pcVar48[5] == DAT_142e34340._5_1_);
      auVar63[6] = -(pcVar48[6] == DAT_142e34340._6_1_);
      auVar63[7] = -(pcVar48[7] == DAT_142e34340._7_1_);
      auVar63[8] = -(pcVar48[8] == DAT_142e34340._8_1_);
      auVar63[9] = -(pcVar48[9] == DAT_142e34340._9_1_);
      auVar63[10] = -(pcVar48[10] == DAT_142e34340._10_1_);
      auVar63[0xb] = -(pcVar48[0xb] == DAT_142e34340._11_1_);
      auVar63[0xc] = -(pcVar48[0xc] == DAT_142e34340._12_1_);
      auVar63[0xd] = -(pcVar48[0xd] == DAT_142e34340._13_1_);
      auVar63[0xe] = -(pcVar48[0xe] == DAT_142e34340._14_1_);
      auVar63[0xf] = -(pcVar48[0xf] == DAT_142e34340._15_1_);
      if ((ushort)((ushort)(SUB161(auVar63 >> 7,0) & 1) |
                   (ushort)(SUB161(auVar63 >> 0xf,0) & 1) << 1 |
                   (ushort)(SUB161(auVar63 >> 0x17,0) & 1) << 2 |
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
                   (ushort)(SUB161(auVar63 >> 0x77,0) & 1) << 0xe |
                  (ushort)(auVar63[0xf] >> 7) << 0xf) == 0xffff) {
        uVar46 = *(ulonglong *)(lVar42 + uVar53 * -0x18 + -8);
        if ((uVar46 < *(ulonglong *)(param_4 + 0x210)) &&
           (uVar46 = *(ulonglong *)(*(longlong *)(param_4 + 0x208) + uVar46 * 8), uVar46 != 0)) {
          lVar42 = ~uVar46 * 0x40;
          if (*(longlong *)(*(longlong *)(param_4 + 0x1d8) + 0x20 + lVar42) != 0) {
            uVar45 = (undefined4)*(undefined8 *)(*(longlong *)(param_4 + 0x1d8) + lVar42 + 0x10);
            uVar46 = pdb_140e2be00(*(undefined8 *)(param_3 + 0x290));
            cVar41 = UNK_142e3498f;
            cVar40 = UNK_142e3498e;
            cVar39 = UNK_142e3498d;
            cVar38 = UNK_142e3498c;
            cVar37 = UNK_142e3498b;
            cVar36 = UNK_142e3498a;
            cVar35 = UNK_142e34989;
            cVar34 = UNK_142e34988;
            cVar33 = UNK_142e34987;
            cVar32 = UNK_142e34986;
            cVar31 = UNK_142e34985;
            cVar30 = UNK_142e34984;
            cVar29 = UNK_142e34983;
            cVar28 = UNK_142e34982;
            cVar27 = UNK_142e34981;
            cVar26 = DAT_142e34980;
            cVar25 = UNK_142e33bdf;
            cVar24 = UNK_142e33bde;
            cVar23 = UNK_142e33bdd;
            cVar22 = UNK_142e33bdc;
            cVar21 = UNK_142e33bdb;
            cVar20 = UNK_142e33bda;
            cVar19 = UNK_142e33bd9;
            cVar18 = UNK_142e33bd8;
            cVar17 = UNK_142e33bd7;
            cVar16 = UNK_142e33bd6;
            cVar15 = UNK_142e33bd5;
            cVar14 = UNK_142e33bd4;
            cVar13 = UNK_142e33bd3;
            cVar12 = UNK_142e33bd2;
            cVar11 = UNK_142e33bd1;
            cVar10 = DAT_142e33bd0;
            if ((uVar46 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
              pdb_142dc8150(&UNK_143054f30);
            }
            if (param_2 != 0) {
              pcVar48 = param_1 + param_2 * 0x40;
              iVar6 = -(uint)(CONCAT13(unaff_XMM7_Bd,
                                       CONCAT12(unaff_XMM7_Bc,CONCAT11(unaff_XMM7_Bb,unaff_XMM7_Ba))
                                      ) ==
                             CONCAT13(unaff_XMM7_Bd,
                                      CONCAT12(unaff_XMM7_Bc,CONCAT11(unaff_XMM7_Bb,unaff_XMM7_Ba)))
                             );
              cVar64 = (char)((uint)iVar6 >> 8);
              cVar65 = (char)((uint)iVar6 >> 0x10);
              cVar66 = (char)((uint)iVar6 >> 0x18);
              iVar7 = -(uint)(CONCAT13(unaff_XMM7_Bh,
                                       CONCAT12(unaff_XMM7_Bg,CONCAT11(unaff_XMM7_Bf,unaff_XMM7_Be))
                                      ) ==
                             CONCAT13(unaff_XMM7_Bh,
                                      CONCAT12(unaff_XMM7_Bg,CONCAT11(unaff_XMM7_Bf,unaff_XMM7_Be)))
                             );
              cVar67 = (char)((uint)iVar7 >> 8);
              cVar68 = (char)((uint)iVar7 >> 0x10);
              cVar69 = (char)((uint)iVar7 >> 0x18);
              iVar8 = -(uint)(CONCAT13(unaff_XMM7_Bl,
                                       CONCAT12(unaff_XMM7_Bk,CONCAT11(unaff_XMM7_Bj,unaff_XMM7_Bi))
                                      ) ==
                             CONCAT13(unaff_XMM7_Bl,
                                      CONCAT12(unaff_XMM7_Bk,CONCAT11(unaff_XMM7_Bj,unaff_XMM7_Bi)))
                             );
              cVar70 = (char)((uint)iVar8 >> 8);
              cVar71 = (char)((uint)iVar8 >> 0x10);
              cVar72 = (char)((uint)iVar8 >> 0x18);
              iVar9 = -(uint)(CONCAT13(unaff_XMM7_Bp,
                                       CONCAT12(unaff_XMM7_Bo,CONCAT11(unaff_XMM7_Bn,unaff_XMM7_Bm))
                                      ) ==
                             CONCAT13(unaff_XMM7_Bp,
                                      CONCAT12(unaff_XMM7_Bo,CONCAT11(unaff_XMM7_Bn,unaff_XMM7_Bm)))
                             );
              cVar73 = (char)((uint)iVar9 >> 8);
              cVar74 = (char)((uint)iVar9 >> 0x10);
              cVar75 = (char)((uint)iVar9 >> 0x18);
              do {
                uVar43 = pdb_140e21920(param_3,param_1 + 0x10);
                uStack_8c = uVar45;
                lVar42 = pdb_140e24e00(uVar43,&uStack_8c,1);
                if (*(longlong *)(param_1 + 0x18) != 0) {
                  pdb_140e23fa0(lVar42);
                }
                if (param_1[0x38] == '\x01') {
                  cVar2 = param_1[0x39];
                  *(uint *)(lVar42 + 0x288) = *(uint *)(lVar42 + 0x288) | 0x80;
                  *(byte *)(lVar42 + 0x83) = *(byte *)(lVar42 + 0x83) | 1;
                  *(char *)(lVar42 + 0x80) = cVar2;
                }
                cVar2 = param_1[0x3a];
                if (cVar2 != '\0') {
                  *(byte *)(lVar42 + 0x288) = *(byte *)(lVar42 + 0x288) | 0x80;
                  *(byte *)(lVar42 + 0x83) = *(byte *)(lVar42 + 0x83) | 4;
                  *(char *)(lVar42 + 0x81) = cVar2;
                }
                if (*(code **)(param_1 + 0x20) == (code *)0x0) {
                  if (*param_1 == '\0') {
                    if (*(longlong *)(param_4 + 0x88) != 0) {
                      lVar50 = *(longlong *)(param_1 + 8);
                      lVar44 = *(longlong *)(param_4 + 0x70);
                      lVar47 = 0;
                      uVar46 = 0x59a9ebec036a11fe;
                      while( true ) {
                        uVar46 = uVar46 & *(ulonglong *)(param_4 + 0x78);
                        auVar56 = *(undefined1 (*) [16])(lVar44 + uVar46);
                        auVar57[0] = -(auVar56[0] == cVar10);
                        auVar57[1] = -(auVar56[1] == cVar11);
                        auVar57[2] = -(auVar56[2] == cVar12);
                        auVar57[3] = -(auVar56[3] == cVar13);
                        auVar57[4] = -(auVar56[4] == cVar14);
                        auVar57[5] = -(auVar56[5] == cVar15);
                        auVar57[6] = -(auVar56[6] == cVar16);
                        auVar57[7] = -(auVar56[7] == cVar17);
                        auVar57[8] = -(auVar56[8] == cVar18);
                        auVar57[9] = -(auVar56[9] == cVar19);
                        auVar57[10] = -(auVar56[10] == cVar20);
                        auVar57[0xb] = -(auVar56[0xb] == cVar21);
                        auVar57[0xc] = -(auVar56[0xc] == cVar22);
                        auVar57[0xd] = -(auVar56[0xd] == cVar23);
                        auVar57[0xe] = -(auVar56[0xe] == cVar24);
                        auVar57[0xf] = -(auVar56[0xf] == cVar25);
                        uVar52 = (ushort)(SUB161(auVar57 >> 7,0) & 1) |
                                 (ushort)(SUB161(auVar57 >> 0xf,0) & 1) << 1 |
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
                                 (ushort)(SUB161(auVar57 >> 0x77,0) & 1) << 0xe |
                                 (ushort)(auVar57[0xf] >> 7) << 0xf;
                        uVar49 = (uint)uVar52;
                        while (uVar52 != 0) {
                          uVar4 = 0;
                          for (uVar5 = uVar49; (uVar5 & 1) == 0; uVar5 = uVar5 >> 1 | 0x80000000) {
                            uVar4 = uVar4 + 1;
                          }
                          uVar53 = uVar4 + uVar46 & *(ulonglong *)(param_4 + 0x78);
                          pcVar1 = (char *)(lVar44 + -0x18 + uVar53 * -0x18);
                          auVar58[0] = -(*pcVar1 == cVar26);
                          auVar58[1] = -(pcVar1[1] == cVar27);
                          auVar58[2] = -(pcVar1[2] == cVar28);
                          auVar58[3] = -(pcVar1[3] == cVar29);
                          auVar58[4] = -(pcVar1[4] == cVar30);
                          auVar58[5] = -(pcVar1[5] == cVar31);
                          auVar58[6] = -(pcVar1[6] == cVar32);
                          auVar58[7] = -(pcVar1[7] == cVar33);
                          auVar58[8] = -(pcVar1[8] == cVar34);
                          auVar58[9] = -(pcVar1[9] == cVar35);
                          auVar58[10] = -(pcVar1[10] == cVar36);
                          auVar58[0xb] = -(pcVar1[0xb] == cVar37);
                          auVar58[0xc] = -(pcVar1[0xc] == cVar38);
                          auVar58[0xd] = -(pcVar1[0xd] == cVar39);
                          auVar58[0xe] = -(pcVar1[0xe] == cVar40);
                          auVar58[0xf] = -(pcVar1[0xf] == cVar41);
                          if ((ushort)((ushort)(SUB161(auVar58 >> 7,0) & 1) |
                                       (ushort)(SUB161(auVar58 >> 0xf,0) & 1) << 1 |
                                       (ushort)(SUB161(auVar58 >> 0x17,0) & 1) << 2 |
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
                                       (ushort)(SUB161(auVar58 >> 0x77,0) & 1) << 0xe |
                                      (ushort)(auVar58[0xf] >> 7) << 0xf) == 0xffff) {
                            uVar46 = *(ulonglong *)(lVar44 + uVar53 * -0x18 + -8);
                            if ((*(ulonglong *)(param_4 + 0x210) <= uVar46) ||
                               (uVar46 = *(ulonglong *)(*(longlong *)(param_4 + 0x208) + uVar46 * 8)
                               , uVar46 == 0)) goto LAB_140b1189a;
                            lVar44 = ~uVar46 * 0x40;
                            if (*(longlong *)(*(longlong *)(param_4 + 0x1d8) + 0x20 + lVar44) == 0)
                            goto LAB_140b1189a;
                            plVar3 = *(longlong **)(*(longlong *)(param_4 + 0x1d8) + lVar44 + 0x10);
                            lStack_88 = param_3;
                            alStack_80[0] = lVar50;
                            if (plVar3[3] == 0) goto LAB_140b118a6;
                            uVar46 = pdb_1400af0a0(plVar3 + 4,alStack_80);
                            lVar44 = *plVar3;
                            bVar54 = (byte)(uVar46 >> 0x39);
                            auVar56 = ZEXT216(CONCAT11(bVar54,bVar54));
                            auVar56 = pshuflw(auVar56,auVar56,0);
                            lVar47 = 0;
                            goto LAB_140b11786;
                          }
                          uVar52 = (ushort)(uVar49 - 1) & (ushort)uVar49;
                          uVar49 = CONCAT22((short)(uVar49 - 1 >> 0x10),uVar52);
                        }
                        auVar55[0] = -(auVar56[0] == (char)iVar6);
                        auVar55[1] = -(auVar56[1] == cVar64);
                        auVar55[2] = -(auVar56[2] == cVar65);
                        auVar55[3] = -(auVar56[3] == cVar66);
                        auVar55[4] = -(auVar56[4] == (char)iVar7);
                        auVar55[5] = -(auVar56[5] == cVar67);
                        auVar55[6] = -(auVar56[6] == cVar68);
                        auVar55[7] = -(auVar56[7] == cVar69);
                        auVar55[8] = -(auVar56[8] == (char)iVar8);
                        auVar55[9] = -(auVar56[9] == cVar70);
                        auVar55[10] = -(auVar56[10] == cVar71);
                        auVar55[0xb] = -(auVar56[0xb] == cVar72);
                        auVar55[0xc] = -(auVar56[0xc] == (char)iVar9);
                        auVar55[0xd] = -(auVar56[0xd] == cVar73);
                        auVar55[0xe] = -(auVar56[0xe] == cVar74);
                        auVar55[0xf] = -(auVar56[0xf] == cVar75);
                        if ((((((((((((((((SUB161(auVar55 >> 7,0) & 1) != 0 ||
                                         (SUB161(auVar55 >> 0xf,0) & 1) != 0) ||
                                        (SUB161(auVar55 >> 0x17,0) & 1) != 0) ||
                                       (SUB161(auVar55 >> 0x1f,0) & 1) != 0) ||
                                      (SUB161(auVar55 >> 0x27,0) & 1) != 0) ||
                                     (SUB161(auVar55 >> 0x2f,0) & 1) != 0) ||
                                    (SUB161(auVar55 >> 0x37,0) & 1) != 0) ||
                                   (SUB161(auVar55 >> 0x3f,0) & 1) != 0) ||
                                  (SUB161(auVar55 >> 0x47,0) & 1) != 0) ||
                                 (SUB161(auVar55 >> 0x4f,0) & 1) != 0) ||
                                (SUB161(auVar55 >> 0x57,0) & 1) != 0) ||
                               (SUB161(auVar55 >> 0x5f,0) & 1) != 0) ||
                              (SUB161(auVar55 >> 0x67,0) & 1) != 0) ||
                             (SUB161(auVar55 >> 0x6f,0) & 1) != 0) ||
                            (SUB161(auVar55 >> 0x77,0) & 1) != 0) || auVar55[0xf] < '\0') break;
                        uVar46 = uVar46 + lVar47 + 0x10;
                        lVar47 = lVar47 + 0x10;
                      }
                    }
LAB_140b1189a:
                    /* WARNING: Subroutine does not return */
                    pdb_142dc8150(&UNK_143054f48);
                  }
                  pdb_140e25490(lVar42,*(undefined4 *)(param_1 + 4),0,
                                *(undefined4 *)(param_1 + 0x34));
                }
                else {
                  (**(code **)(param_1 + 0x20))
                            (param_1,param_4,param_5,*(undefined8 *)(param_1 + 0x28),lVar42);
                }
LAB_140b115a4:
                param_1 = param_1 + 0x40;
              } while (param_1 != pcVar48);
            }
            return;
          }
        }
        goto LAB_140b1186d;
      }
      uVar52 = (ushort)(uVar49 - 1) & (ushort)uVar49;
      uVar49 = CONCAT22((short)(uVar49 - 1 >> 0x10),uVar52);
    }
    auVar61[0] = -(auVar56[0] == -1);
    auVar61[1] = -(auVar56[1] == -1);
    auVar61[2] = -(auVar56[2] == -1);
    auVar61[3] = -(auVar56[3] == -1);
    auVar61[4] = -(auVar56[4] == -1);
    auVar61[5] = -(auVar56[5] == -1);
    auVar61[6] = -(auVar56[6] == -1);
    auVar61[7] = -(auVar56[7] == -1);
    auVar61[8] = -(auVar56[8] == -1);
    auVar61[9] = -(auVar56[9] == -1);
    auVar61[10] = -(auVar56[10] == -1);
    auVar61[0xb] = -(auVar56[0xb] == -1);
    auVar61[0xc] = -(auVar56[0xc] == -1);
    auVar61[0xd] = -(auVar56[0xd] == -1);
    auVar61[0xe] = -(auVar56[0xe] == -1);
    auVar61[0xf] = -(auVar56[0xf] == -1);
    if ((((((((((((((((SUB161(auVar61 >> 7,0) & 1) != 0 || (SUB161(auVar61 >> 0xf,0) & 1) != 0) ||
                    (SUB161(auVar61 >> 0x17,0) & 1) != 0) || (SUB161(auVar61 >> 0x1f,0) & 1) != 0)
                  || (SUB161(auVar61 >> 0x27,0) & 1) != 0) || (SUB161(auVar61 >> 0x2f,0) & 1) != 0)
                || (SUB161(auVar61 >> 0x37,0) & 1) != 0) || (SUB161(auVar61 >> 0x3f,0) & 1) != 0) ||
              (SUB161(auVar61 >> 0x47,0) & 1) != 0) || (SUB161(auVar61 >> 0x4f,0) & 1) != 0) ||
            (SUB161(auVar61 >> 0x57,0) & 1) != 0) || (SUB161(auVar61 >> 0x5f,0) & 1) != 0) ||
          (SUB161(auVar61 >> 0x67,0) & 1) != 0) || (SUB161(auVar61 >> 0x6f,0) & 1) != 0) ||
        (SUB161(auVar61 >> 0x77,0) & 1) != 0) || auVar61[0xf] < '\0') goto LAB_140b1186d;
    uVar46 = uVar46 + lVar50 + 0x10;
    lVar50 = lVar50 + 0x10;
  } while( true );
LAB_140b11786:
  uVar46 = uVar46 & plVar3[1];
  auVar62 = *(undefined1 (*) [16])(lVar44 + uVar46);
  auVar60[0] = -(auVar62[0] == auVar56[0]);
  auVar60[1] = -(auVar62[1] == auVar56[1]);
  auVar60[2] = -(auVar62[2] == auVar56[2]);
  auVar60[3] = -(auVar62[3] == auVar56[3]);
  auVar60[4] = -(auVar62[4] == auVar56[4]);
  auVar60[5] = -(auVar62[5] == auVar56[5]);
  auVar60[6] = -(auVar62[6] == auVar56[6]);
  auVar60[7] = -(auVar62[7] == auVar56[7]);
  auVar60[8] = -(auVar62[8] == auVar56[0]);
  auVar60[9] = -(auVar62[9] == auVar56[1]);
  auVar60[10] = -(auVar62[10] == auVar56[2]);
  auVar60[0xb] = -(auVar62[0xb] == auVar56[3]);
  auVar60[0xc] = -(auVar62[0xc] == auVar56[4]);
  auVar60[0xd] = -(auVar62[0xd] == auVar56[5]);
  auVar60[0xe] = -(auVar62[0xe] == auVar56[6]);
  auVar60[0xf] = -(auVar62[0xf] == auVar56[7]);
  uVar52 = (ushort)(SUB161(auVar60 >> 7,0) & 1) | (ushort)(SUB161(auVar60 >> 0xf,0) & 1) << 1 |
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
  uVar49 = (uint)uVar52;
  while (uVar52 != 0) {
    uVar4 = 0;
    for (uVar5 = uVar49; (uVar5 & 1) == 0; uVar5 = uVar5 >> 1 | 0x80000000) {
      uVar4 = uVar4 + 1;
    }
    lVar51 = (uVar4 + uVar46 & plVar3[1]) * -0x30;
    if (lVar50 == *(longlong *)(lVar44 + -0x30 + lVar51)) {
      lVar44 = lVar44 + lVar51;
      lVar50 = pdb_141a076a0(lVar42,lVar44 + -0x28);
      uVar43 = pdb_140e17290(lVar44 + -0x10,lVar50);
      *(byte *)(lVar50 + 0x28a) = *(byte *)(lVar50 + 0x28a) | 1;
      *(undefined8 *)(lVar50 + 200) = uVar43;
      if (*(char *)(lVar44 + -4) == '\0') {
        pdb_140e25450(lVar42);
      }
      else {
        *(byte *)(lVar42 + 0x288) = *(byte *)(lVar42 + 0x288) | 0x80;
        *(byte *)(lVar42 + 0x83) = *(byte *)(lVar42 + 0x83) | 2;
        *(undefined1 *)(lVar42 + 0x82) = 0;
      }
      param_3 = lStack_88;
      pdb_140e25490(lVar42,*(undefined4 *)(lVar44 + -8),0,*(undefined4 *)(param_1 + 0x34));
      goto LAB_140b115a4;
    }
    uVar52 = (ushort)(uVar49 - 1) & (ushort)uVar49;
    uVar49 = CONCAT22((short)(uVar49 - 1 >> 0x10),uVar52);
  }
  auVar59[0] = -(auVar62[0] == (char)iVar6);
  auVar59[1] = -(auVar62[1] == cVar64);
  auVar59[2] = -(auVar62[2] == cVar65);
  auVar59[3] = -(auVar62[3] == cVar66);
  auVar59[4] = -(auVar62[4] == (char)iVar7);
  auVar59[5] = -(auVar62[5] == cVar67);
  auVar59[6] = -(auVar62[6] == cVar68);
  auVar59[7] = -(auVar62[7] == cVar69);
  auVar59[8] = -(auVar62[8] == (char)iVar8);
  auVar59[9] = -(auVar62[9] == cVar70);
  auVar59[10] = -(auVar62[10] == cVar71);
  auVar59[0xb] = -(auVar62[0xb] == cVar72);
  auVar59[0xc] = -(auVar62[0xc] == (char)iVar9);
  auVar59[0xd] = -(auVar62[0xd] == cVar73);
  auVar59[0xe] = -(auVar62[0xe] == cVar74);
  auVar59[0xf] = -(auVar62[0xf] == cVar75);
  if ((((((((((((((((SUB161(auVar59 >> 7,0) & 1) != 0 || (SUB161(auVar59 >> 0xf,0) & 1) != 0) ||
                  (SUB161(auVar59 >> 0x17,0) & 1) != 0) || (SUB161(auVar59 >> 0x1f,0) & 1) != 0) ||
                (SUB161(auVar59 >> 0x27,0) & 1) != 0) || (SUB161(auVar59 >> 0x2f,0) & 1) != 0) ||
              (SUB161(auVar59 >> 0x37,0) & 1) != 0) || (SUB161(auVar59 >> 0x3f,0) & 1) != 0) ||
            (SUB161(auVar59 >> 0x47,0) & 1) != 0) || (SUB161(auVar59 >> 0x4f,0) & 1) != 0) ||
          (SUB161(auVar59 >> 0x57,0) & 1) != 0) || (SUB161(auVar59 >> 0x5f,0) & 1) != 0) ||
        (SUB161(auVar59 >> 0x67,0) & 1) != 0) || (SUB161(auVar59 >> 0x6f,0) & 1) != 0) ||
      (SUB161(auVar59 >> 0x77,0) & 1) != 0) || auVar59[0xf] < '\0') {
LAB_140b118a6:
                    /* WARNING: Subroutine does not return */
    pdb_142dc8150(&UNK_143054f60);
  }
  uVar46 = uVar46 + lVar47 + 0x10;
  lVar47 = lVar47 + 0x10;
  goto LAB_140b11786;
}

