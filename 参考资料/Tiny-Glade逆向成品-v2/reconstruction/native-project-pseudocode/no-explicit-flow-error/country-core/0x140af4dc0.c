// VA 0x140af4dc0, PDB extent 1834 bytes
// country_core::systems::render_loop::draw_passes::draw_lists::render_bucket
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/render_loop/draw_passes/draw_lists.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::systems::render_loop::draw_passes::draw_lists::render_bucket
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/render_loop/draw_passes/draw_lists.rs
   Extent: 1834 */

void pdb_140af4dc0(char *param_1,longlong param_2,longlong param_3,longlong param_4,
                  undefined1 param_5)

{
  char *pcVar1;
  char *pcVar2;
  char cVar3;
  longlong *plVar4;
  uint uVar5;
  uint uVar6;
  char cVar7;
  char cVar8;
  char cVar9;
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
  char cVar43;
  char cVar44;
  char cVar45;
  char cVar46;
  char cVar47;
  char cVar48;
  char cVar49;
  char cVar50;
  char cVar51;
  char cVar52;
  char cVar53;
  int iVar54;
  longlong lVar55;
  ulonglong uVar56;
  undefined8 uVar57;
  longlong lVar58;
  longlong lVar59;
  undefined4 uVar60;
  ulonglong uVar61;
  uint uVar62;
  longlong lVar63;
  longlong lVar64;
  ushort uVar65;
  ulonglong uVar66;
  longlong lVar67;
  byte bVar68;
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  undefined1 unaff_XMM7_Ba;
  char cVar81;
  undefined1 unaff_XMM7_Bb;
  char cVar82;
  undefined1 unaff_XMM7_Bc;
  char cVar83;
  undefined1 unaff_XMM7_Bd;
  char cVar84;
  undefined1 unaff_XMM7_Be;
  char cVar85;
  undefined1 unaff_XMM7_Bf;
  char cVar86;
  undefined1 unaff_XMM7_Bg;
  char cVar87;
  undefined1 unaff_XMM7_Bh;
  char cVar88;
  undefined1 unaff_XMM7_Bi;
  char cVar89;
  undefined1 unaff_XMM7_Bj;
  char cVar90;
  undefined1 unaff_XMM7_Bk;
  char cVar91;
  undefined1 unaff_XMM7_Bl;
  char cVar92;
  undefined1 unaff_XMM7_Bm;
  char cVar93;
  undefined1 unaff_XMM7_Bn;
  char cVar94;
  undefined1 unaff_XMM7_Bo;
  char cVar95;
  undefined1 unaff_XMM7_Bp;
  char cVar96;
  undefined1 auVar97 [16];
  undefined8 uStack_d8;
  int iStack_d0;
  int iStack_cc;
  int iStack_c8;
  int iStack_c4;
  longlong lStack_c0;
  longlong lStack_b8;
  longlong lStack_b0;
  char *pcStack_a8;
  longlong lStack_a0;
  
  if (*(longlong *)(param_4 + 0x88) != 0) {
    lVar55 = *(longlong *)(param_4 + 0x70);
    uVar56 = *(ulonglong *)(param_4 + 0x78);
    uVar61 = 0xbc86f891ccb8bc37;
    lVar63 = 0;
    while( true ) {
      uVar61 = uVar61 & uVar56;
      pcVar1 = (char *)(lVar55 + uVar61);
      auVar69[0] = -(*pcVar1 == DAT_142e34330);
      auVar69[1] = -(pcVar1[1] == UNK_142e34331);
      auVar69[2] = -(pcVar1[2] == UNK_142e34332);
      auVar69[3] = -(pcVar1[3] == UNK_142e34333);
      auVar69[4] = -(pcVar1[4] == UNK_142e34334);
      auVar69[5] = -(pcVar1[5] == UNK_142e34335);
      auVar69[6] = -(pcVar1[6] == UNK_142e34336);
      auVar69[7] = -(pcVar1[7] == UNK_142e34337);
      auVar69[8] = -(pcVar1[8] == UNK_142e34338);
      auVar69[9] = -(pcVar1[9] == UNK_142e34339);
      auVar69[10] = -(pcVar1[10] == UNK_142e3433a);
      auVar69[0xb] = -(pcVar1[0xb] == UNK_142e3433b);
      auVar69[0xc] = -(pcVar1[0xc] == UNK_142e3433c);
      auVar69[0xd] = -(pcVar1[0xd] == UNK_142e3433d);
      auVar69[0xe] = -(pcVar1[0xe] == UNK_142e3433e);
      auVar69[0xf] = -(pcVar1[0xf] == UNK_142e3433f);
      uVar65 = (ushort)(SUB161(auVar69 >> 7,0) & 1) | (ushort)(SUB161(auVar69 >> 0xf,0) & 1) << 1 |
               (ushort)(SUB161(auVar69 >> 0x17,0) & 1) << 2 |
               (ushort)(SUB161(auVar69 >> 0x1f,0) & 1) << 3 |
               (ushort)(SUB161(auVar69 >> 0x27,0) & 1) << 4 |
               (ushort)(SUB161(auVar69 >> 0x2f,0) & 1) << 5 |
               (ushort)(SUB161(auVar69 >> 0x37,0) & 1) << 6 |
               (ushort)(SUB161(auVar69 >> 0x3f,0) & 1) << 7 |
               (ushort)(SUB161(auVar69 >> 0x47,0) & 1) << 8 |
               (ushort)(SUB161(auVar69 >> 0x4f,0) & 1) << 9 |
               (ushort)(SUB161(auVar69 >> 0x57,0) & 1) << 10 |
               (ushort)(SUB161(auVar69 >> 0x5f,0) & 1) << 0xb |
               (ushort)(SUB161(auVar69 >> 0x67,0) & 1) << 0xc |
               (ushort)(SUB161(auVar69 >> 0x6f,0) & 1) << 0xd |
               (ushort)(SUB161(auVar69 >> 0x77,0) & 1) << 0xe | (ushort)(auVar69[0xf] >> 7) << 0xf;
      uVar62 = (uint)uVar65;
      while (uVar65 != 0) {
        uVar5 = 0;
        for (uVar6 = uVar62; (uVar6 & 1) == 0; uVar6 = uVar6 >> 1 | 0x80000000) {
          uVar5 = uVar5 + 1;
        }
        uVar66 = uVar5 + uVar61 & uVar56;
        pcVar2 = (char *)(lVar55 + -0x18 + uVar66 * -0x18);
        auVar78[0] = -(*pcVar2 == DAT_142e34340);
        auVar78[1] = -(pcVar2[1] == UNK_142e34341);
        auVar78[2] = -(pcVar2[2] == UNK_142e34342);
        auVar78[3] = -(pcVar2[3] == UNK_142e34343);
        auVar78[4] = -(pcVar2[4] == UNK_142e34344);
        auVar78[5] = -(pcVar2[5] == UNK_142e34345);
        auVar78[6] = -(pcVar2[6] == UNK_142e34346);
        auVar78[7] = -(pcVar2[7] == UNK_142e34347);
        auVar78[8] = -(pcVar2[8] == UNK_142e34348);
        auVar78[9] = -(pcVar2[9] == UNK_142e34349);
        auVar78[10] = -(pcVar2[10] == UNK_142e3434a);
        auVar78[0xb] = -(pcVar2[0xb] == UNK_142e3434b);
        auVar78[0xc] = -(pcVar2[0xc] == UNK_142e3434c);
        auVar78[0xd] = -(pcVar2[0xd] == UNK_142e3434d);
        auVar78[0xe] = -(pcVar2[0xe] == UNK_142e3434e);
        auVar78[0xf] = -(pcVar2[0xf] == UNK_142e3434f);
        if ((ushort)((ushort)(SUB161(auVar78 >> 7,0) & 1) |
                     (ushort)(SUB161(auVar78 >> 0xf,0) & 1) << 1 |
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
                     (ushort)(SUB161(auVar78 >> 0x77,0) & 1) << 0xe |
                    (ushort)(auVar78[0xf] >> 7) << 0xf) == 0xffff) {
          uVar61 = *(ulonglong *)(lVar55 + uVar66 * -0x18 + -8);
          if (*(ulonglong *)(param_4 + 0x210) <= uVar61) goto LAB_140af5459;
          uVar61 = *(ulonglong *)(*(longlong *)(param_4 + 0x208) + uVar61 * 8);
          if (uVar61 == 0) goto LAB_140af5459;
          lVar63 = *(longlong *)(param_4 + 0x1d8);
          lVar67 = ~uVar61 * 0x40;
          if (*(longlong *)(lVar63 + 0x20 + lVar67) == 0) goto LAB_140af5459;
          iVar54 = (int)*(undefined8 *)(lVar67 + lVar63 + 0x10);
          uVar61 = 0x333f70bcf778a134;
          lVar67 = 0;
          goto LAB_140af4f2d;
        }
        uVar65 = (ushort)(uVar62 - 1) & (ushort)uVar62;
        uVar62 = CONCAT22((short)(uVar62 - 1 >> 0x10),uVar65);
      }
      auVar76[0] = -(*pcVar1 == -1);
      auVar76[1] = -(pcVar1[1] == -1);
      auVar76[2] = -(pcVar1[2] == -1);
      auVar76[3] = -(pcVar1[3] == -1);
      auVar76[4] = -(pcVar1[4] == -1);
      auVar76[5] = -(pcVar1[5] == -1);
      auVar76[6] = -(pcVar1[6] == -1);
      auVar76[7] = -(pcVar1[7] == -1);
      auVar76[8] = -(pcVar1[8] == -1);
      auVar76[9] = -(pcVar1[9] == -1);
      auVar76[10] = -(pcVar1[10] == -1);
      auVar76[0xb] = -(pcVar1[0xb] == -1);
      auVar76[0xc] = -(pcVar1[0xc] == -1);
      auVar76[0xd] = -(pcVar1[0xd] == -1);
      auVar76[0xe] = -(pcVar1[0xe] == -1);
      auVar76[0xf] = -(pcVar1[0xf] == -1);
      if ((((((((((((((((SUB161(auVar76 >> 7,0) & 1) != 0 || (SUB161(auVar76 >> 0xf,0) & 1) != 0) ||
                      (SUB161(auVar76 >> 0x17,0) & 1) != 0) || (SUB161(auVar76 >> 0x1f,0) & 1) != 0)
                    || (SUB161(auVar76 >> 0x27,0) & 1) != 0) || (SUB161(auVar76 >> 0x2f,0) & 1) != 0
                   ) || (SUB161(auVar76 >> 0x37,0) & 1) != 0) ||
                 (SUB161(auVar76 >> 0x3f,0) & 1) != 0) || (SUB161(auVar76 >> 0x47,0) & 1) != 0) ||
               (SUB161(auVar76 >> 0x4f,0) & 1) != 0) || (SUB161(auVar76 >> 0x57,0) & 1) != 0) ||
             (SUB161(auVar76 >> 0x5f,0) & 1) != 0) || (SUB161(auVar76 >> 0x67,0) & 1) != 0) ||
           (SUB161(auVar76 >> 0x6f,0) & 1) != 0) || (SUB161(auVar76 >> 0x77,0) & 1) != 0) ||
          auVar76[0xf] < '\0') break;
      uVar61 = uVar61 + lVar63 + 0x10;
      lVar63 = lVar63 + 0x10;
    }
  }
LAB_140af5459:
                    /* WARNING: Subroutine does not return */
  pdb_142dc8150(&UNK_143051100);
LAB_140af4f2d:
  uVar61 = uVar61 & uVar56;
  auVar69 = *(undefined1 (*) [16])(lVar55 + uVar61);
  auVar79[0] = -(auVar69[0] == DAT_142e42340);
  auVar79[1] = -(auVar69[1] == DAT_142e42340._1_1_);
  auVar79[2] = -(auVar69[2] == DAT_142e42340._2_1_);
  auVar79[3] = -(auVar69[3] == DAT_142e42340._3_1_);
  auVar79[4] = -(auVar69[4] == DAT_142e42340._4_1_);
  auVar79[5] = -(auVar69[5] == DAT_142e42340._5_1_);
  auVar79[6] = -(auVar69[6] == DAT_142e42340._6_1_);
  auVar79[7] = -(auVar69[7] == DAT_142e42340._7_1_);
  auVar79[8] = -(auVar69[8] == DAT_142e42340._8_1_);
  auVar79[9] = -(auVar69[9] == DAT_142e42340._9_1_);
  auVar79[10] = -(auVar69[10] == DAT_142e42340._10_1_);
  auVar79[0xb] = -(auVar69[0xb] == DAT_142e42340._11_1_);
  auVar79[0xc] = -(auVar69[0xc] == DAT_142e42340._12_1_);
  auVar79[0xd] = -(auVar69[0xd] == DAT_142e42340._13_1_);
  auVar79[0xe] = -(auVar69[0xe] == DAT_142e42340._14_1_);
  auVar79[0xf] = -(auVar69[0xf] == DAT_142e42340._15_1_);
  uVar65 = (ushort)(SUB161(auVar79 >> 7,0) & 1) | (ushort)(SUB161(auVar79 >> 0xf,0) & 1) << 1 |
           (ushort)(SUB161(auVar79 >> 0x17,0) & 1) << 2 |
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
           (ushort)(SUB161(auVar79 >> 0x77,0) & 1) << 0xe | (ushort)(auVar79[0xf] >> 7) << 0xf;
  uVar62 = (uint)uVar65;
  while (uVar65 != 0) {
    uVar5 = 0;
    for (uVar6 = uVar62; (uVar6 & 1) == 0; uVar6 = uVar6 >> 1 | 0x80000000) {
      uVar5 = uVar5 + 1;
    }
    uVar66 = uVar5 + uVar61 & uVar56;
    pcVar1 = (char *)(lVar55 + -0x18 + uVar66 * -0x18);
    auVar80[0] = -(*pcVar1 == DAT_142e42350);
    auVar80[1] = -(pcVar1[1] == DAT_142e42350._1_1_);
    auVar80[2] = -(pcVar1[2] == DAT_142e42350._2_1_);
    auVar80[3] = -(pcVar1[3] == DAT_142e42350._3_1_);
    auVar80[4] = -(pcVar1[4] == DAT_142e42350._4_1_);
    auVar80[5] = -(pcVar1[5] == DAT_142e42350._5_1_);
    auVar80[6] = -(pcVar1[6] == DAT_142e42350._6_1_);
    auVar80[7] = -(pcVar1[7] == DAT_142e42350._7_1_);
    auVar80[8] = -(pcVar1[8] == DAT_142e42350._8_1_);
    auVar80[9] = -(pcVar1[9] == DAT_142e42350._9_1_);
    auVar80[10] = -(pcVar1[10] == DAT_142e42350._10_1_);
    auVar80[0xb] = -(pcVar1[0xb] == DAT_142e42350._11_1_);
    auVar80[0xc] = -(pcVar1[0xc] == DAT_142e42350._12_1_);
    auVar80[0xd] = -(pcVar1[0xd] == DAT_142e42350._13_1_);
    auVar80[0xe] = -(pcVar1[0xe] == DAT_142e42350._14_1_);
    auVar80[0xf] = -(pcVar1[0xf] == DAT_142e42350._15_1_);
    if ((ushort)((ushort)(SUB161(auVar80 >> 7,0) & 1) | (ushort)(SUB161(auVar80 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar80 >> 0x17,0) & 1) << 2 |
                 (ushort)(SUB161(auVar80 >> 0x1f,0) & 1) << 3 |
                 (ushort)(SUB161(auVar80 >> 0x27,0) & 1) << 4 |
                 (ushort)(SUB161(auVar80 >> 0x2f,0) & 1) << 5 |
                 (ushort)(SUB161(auVar80 >> 0x37,0) & 1) << 6 |
                 (ushort)(SUB161(auVar80 >> 0x3f,0) & 1) << 7 |
                 (ushort)(SUB161(auVar80 >> 0x47,0) & 1) << 8 |
                 (ushort)(SUB161(auVar80 >> 0x4f,0) & 1) << 9 |
                 (ushort)(SUB161(auVar80 >> 0x57,0) & 1) << 10 |
                 (ushort)(SUB161(auVar80 >> 0x5f,0) & 1) << 0xb |
                 (ushort)(SUB161(auVar80 >> 0x67,0) & 1) << 0xc |
                 (ushort)(SUB161(auVar80 >> 0x6f,0) & 1) << 0xd |
                 (ushort)(SUB161(auVar80 >> 0x77,0) & 1) << 0xe | (ushort)(auVar80[0xf] >> 7) << 0xf
                ) == 0xffff) {
      uVar56 = *(ulonglong *)(lVar55 + uVar66 * -0x18 + -8);
      if (((uVar56 < *(ulonglong *)(param_4 + 0x210)) &&
          (uVar56 = *(ulonglong *)(*(longlong *)(param_4 + 0x208) + uVar56 * 8), uVar56 != 0)) &&
         (lVar55 = ~uVar56 * 0x40, *(longlong *)(lVar63 + 0x20 + lVar55) != 0)) {
        lVar55 = *(longlong *)(lVar63 + lVar55 + 0x10);
        lStack_a0 = *(longlong *)(lVar55 + 0xa8);
        iStack_c4 = iVar54;
        uVar56 = pdb_140e2be00(*(undefined8 *)(param_3 + 0x290));
        if ((uVar56 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
          pdb_142dc8150(&UNK_143051130);
        }
        iStack_c8 = iVar54 + 0x10;
        uVar56 = pdb_140e2be00(*(undefined8 *)(param_3 + 0x290));
        if ((uVar56 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
          pdb_142dc8150(&UNK_143051148);
        }
        iStack_cc = iVar54 + 0x18;
        uVar56 = pdb_140e2be00(*(undefined8 *)(param_3 + 0x290));
        cVar53 = UNK_142e3498f;
        cVar52 = UNK_142e3498e;
        cVar51 = UNK_142e3498d;
        cVar50 = UNK_142e3498c;
        cVar49 = UNK_142e3498b;
        cVar48 = UNK_142e3498a;
        cVar47 = UNK_142e34989;
        cVar46 = UNK_142e34988;
        cVar45 = UNK_142e34987;
        cVar44 = UNK_142e34986;
        cVar43 = UNK_142e34985;
        cVar42 = UNK_142e34984;
        cVar41 = UNK_142e34983;
        cVar40 = UNK_142e34982;
        cVar39 = UNK_142e34981;
        cVar38 = DAT_142e34980;
        cVar37 = UNK_142e33bdf;
        cVar36 = UNK_142e33bde;
        cVar35 = UNK_142e33bdd;
        cVar34 = UNK_142e33bdc;
        cVar33 = UNK_142e33bdb;
        cVar32 = UNK_142e33bda;
        cVar31 = UNK_142e33bd9;
        cVar30 = UNK_142e33bd8;
        cVar29 = UNK_142e33bd7;
        cVar28 = UNK_142e33bd6;
        cVar27 = UNK_142e33bd5;
        cVar26 = UNK_142e33bd4;
        cVar25 = UNK_142e33bd3;
        cVar24 = UNK_142e33bd2;
        cVar23 = UNK_142e33bd1;
        cVar22 = DAT_142e33bd0;
        if ((uVar56 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
          pdb_142dc8150(&UNK_143051160);
        }
        if (param_2 != 0) {
          pcStack_a8 = param_1 + param_2 * 0x40;
          lStack_b8 = lVar55 + 0xb0;
          iVar54 = -(uint)(CONCAT13(unaff_XMM7_Bd,
                                    CONCAT12(unaff_XMM7_Bc,CONCAT11(unaff_XMM7_Bb,unaff_XMM7_Ba)))
                          == CONCAT13(unaff_XMM7_Bd,
                                      CONCAT12(unaff_XMM7_Bc,CONCAT11(unaff_XMM7_Bb,unaff_XMM7_Ba)))
                          );
          cVar81 = (char)iVar54;
          cVar82 = (char)((uint)iVar54 >> 8);
          cVar83 = (char)((uint)iVar54 >> 0x10);
          cVar84 = (char)((uint)iVar54 >> 0x18);
          iVar54 = -(uint)(CONCAT13(unaff_XMM7_Bh,
                                    CONCAT12(unaff_XMM7_Bg,CONCAT11(unaff_XMM7_Bf,unaff_XMM7_Be)))
                          == CONCAT13(unaff_XMM7_Bh,
                                      CONCAT12(unaff_XMM7_Bg,CONCAT11(unaff_XMM7_Bf,unaff_XMM7_Be)))
                          );
          cVar85 = (char)iVar54;
          cVar86 = (char)((uint)iVar54 >> 8);
          cVar87 = (char)((uint)iVar54 >> 0x10);
          cVar88 = (char)((uint)iVar54 >> 0x18);
          iVar54 = -(uint)(CONCAT13(unaff_XMM7_Bl,
                                    CONCAT12(unaff_XMM7_Bk,CONCAT11(unaff_XMM7_Bj,unaff_XMM7_Bi)))
                          == CONCAT13(unaff_XMM7_Bl,
                                      CONCAT12(unaff_XMM7_Bk,CONCAT11(unaff_XMM7_Bj,unaff_XMM7_Bi)))
                          );
          cVar89 = (char)iVar54;
          cVar90 = (char)((uint)iVar54 >> 8);
          cVar91 = (char)((uint)iVar54 >> 0x10);
          cVar92 = (char)((uint)iVar54 >> 0x18);
          iVar54 = -(uint)(CONCAT13(unaff_XMM7_Bp,
                                    CONCAT12(unaff_XMM7_Bo,CONCAT11(unaff_XMM7_Bn,unaff_XMM7_Bm)))
                          == CONCAT13(unaff_XMM7_Bp,
                                      CONCAT12(unaff_XMM7_Bo,CONCAT11(unaff_XMM7_Bn,unaff_XMM7_Bm)))
                          );
          cVar93 = (char)iVar54;
          cVar94 = (char)((uint)iVar54 >> 8);
          cVar95 = (char)((uint)iVar54 >> 0x10);
          cVar96 = (char)((uint)iVar54 >> 0x18);
          lStack_b0 = param_3;
          do {
            lVar63 = lStack_c0;
            if ((lStack_a0 != 0) &&
               (lVar67 = pdb_140e72a60(param_1 + 0x10), lVar63 = lStack_c0,
               *(longlong *)(lVar55 + 0xa8) != 0)) {
              uVar57 = *(undefined8 *)(*(longlong *)(lVar67 + 0x18) + 0xe8);
              lVar67 = *(longlong *)(*(longlong *)(lVar67 + 0x18) + 0xf0);
              uVar61 = pdb_1400af950(lStack_b8,uVar57,lVar67);
              lVar58 = *(longlong *)(lVar55 + 0x90);
              uVar56 = *(ulonglong *)(lVar55 + 0x98);
              bVar68 = (byte)(uVar61 >> 0x39);
              auVar69 = ZEXT216(CONCAT11(bVar68,bVar68));
              auVar69 = pshuflw(auVar69,auVar69,0);
              lVar59 = 0;
              while( true ) {
                uVar61 = uVar61 & uVar56;
                pcVar1 = (char *)(lVar58 + uVar61);
                cVar3 = *pcVar1;
                cVar7 = pcVar1[1];
                cVar8 = pcVar1[2];
                cVar9 = pcVar1[3];
                cVar10 = pcVar1[4];
                cVar11 = pcVar1[5];
                cVar12 = pcVar1[6];
                cVar13 = pcVar1[7];
                cVar14 = pcVar1[8];
                cVar15 = pcVar1[9];
                cVar16 = pcVar1[10];
                cVar17 = pcVar1[0xb];
                cVar18 = pcVar1[0xc];
                cVar19 = pcVar1[0xd];
                cVar20 = pcVar1[0xe];
                cVar21 = pcVar1[0xf];
                auVar70[0] = -(cVar3 == auVar69[0]);
                auVar70[1] = -(cVar7 == auVar69[1]);
                auVar70[2] = -(cVar8 == auVar69[2]);
                auVar70[3] = -(cVar9 == auVar69[3]);
                auVar70[4] = -(cVar10 == auVar69[4]);
                auVar70[5] = -(cVar11 == auVar69[5]);
                auVar70[6] = -(cVar12 == auVar69[6]);
                auVar70[7] = -(cVar13 == auVar69[7]);
                auVar70[8] = -(cVar14 == auVar69[0]);
                auVar70[9] = -(cVar15 == auVar69[1]);
                auVar70[10] = -(cVar16 == auVar69[2]);
                auVar70[0xb] = -(cVar17 == auVar69[3]);
                auVar70[0xc] = -(cVar18 == auVar69[4]);
                auVar70[0xd] = -(cVar19 == auVar69[5]);
                auVar70[0xe] = -(cVar20 == auVar69[6]);
                auVar70[0xf] = -(cVar21 == auVar69[7]);
                uVar65 = (ushort)(SUB161(auVar70 >> 7,0) & 1) |
                         (ushort)(SUB161(auVar70 >> 0xf,0) & 1) << 1 |
                         (ushort)(SUB161(auVar70 >> 0x17,0) & 1) << 2 |
                         (ushort)(SUB161(auVar70 >> 0x1f,0) & 1) << 3 |
                         (ushort)(SUB161(auVar70 >> 0x27,0) & 1) << 4 |
                         (ushort)(SUB161(auVar70 >> 0x2f,0) & 1) << 5 |
                         (ushort)(SUB161(auVar70 >> 0x37,0) & 1) << 6 |
                         (ushort)(SUB161(auVar70 >> 0x3f,0) & 1) << 7 |
                         (ushort)(SUB161(auVar70 >> 0x47,0) & 1) << 8 |
                         (ushort)(SUB161(auVar70 >> 0x4f,0) & 1) << 9 |
                         (ushort)(SUB161(auVar70 >> 0x57,0) & 1) << 10 |
                         (ushort)(SUB161(auVar70 >> 0x5f,0) & 1) << 0xb |
                         (ushort)(SUB161(auVar70 >> 0x67,0) & 1) << 0xc |
                         (ushort)(SUB161(auVar70 >> 0x6f,0) & 1) << 0xd |
                         (ushort)(SUB161(auVar70 >> 0x77,0) & 1) << 0xe |
                         (ushort)(auVar70[0xf] >> 7) << 0xf;
                uVar62 = (uint)uVar65;
                lVar63 = lStack_c0;
                while (lStack_c0 = lVar59, uVar65 != 0) {
                  uVar5 = 0;
                  for (uVar6 = uVar62; (uVar6 & 1) == 0; uVar6 = uVar6 >> 1 | 0x80000000) {
                    uVar5 = uVar5 + 1;
                  }
                  uVar66 = uVar5 + uVar61 & uVar56;
                  if ((lVar67 == *(longlong *)(lVar58 + -8 + uVar66 * -0x18)) &&
                     (iVar54 = pub_142e32750(uVar57,*(undefined8 *)(uVar66 * -0x18 + lVar58 + -0x10)
                                             ,lVar67), iVar54 == 0)) goto LAB_140af509a;
                  uVar65 = (ushort)(uVar62 - 1) & (ushort)uVar62;
                  uVar62 = CONCAT22((short)(uVar62 - 1 >> 0x10),uVar65);
                  lVar59 = lStack_c0;
                  lVar63 = lStack_c0;
                }
                auVar97[0] = -(cVar3 == cVar81);
                auVar97[1] = -(cVar7 == cVar82);
                auVar97[2] = -(cVar8 == cVar83);
                auVar97[3] = -(cVar9 == cVar84);
                auVar97[4] = -(cVar10 == cVar85);
                auVar97[5] = -(cVar11 == cVar86);
                auVar97[6] = -(cVar12 == cVar87);
                auVar97[7] = -(cVar13 == cVar88);
                auVar97[8] = -(cVar14 == cVar89);
                auVar97[9] = -(cVar15 == cVar90);
                auVar97[10] = -(cVar16 == cVar91);
                auVar97[0xb] = -(cVar17 == cVar92);
                auVar97[0xc] = -(cVar18 == cVar93);
                auVar97[0xd] = -(cVar19 == cVar94);
                auVar97[0xe] = -(cVar20 == cVar95);
                auVar97[0xf] = -(cVar21 == cVar96);
                if ((((((((((((((((SUB161(auVar97 >> 7,0) & 1) != 0 ||
                                 (SUB161(auVar97 >> 0xf,0) & 1) != 0) ||
                                (SUB161(auVar97 >> 0x17,0) & 1) != 0) ||
                               (SUB161(auVar97 >> 0x1f,0) & 1) != 0) ||
                              (SUB161(auVar97 >> 0x27,0) & 1) != 0) ||
                             (SUB161(auVar97 >> 0x2f,0) & 1) != 0) ||
                            (SUB161(auVar97 >> 0x37,0) & 1) != 0) ||
                           (SUB161(auVar97 >> 0x3f,0) & 1) != 0) ||
                          (SUB161(auVar97 >> 0x47,0) & 1) != 0) ||
                         (SUB161(auVar97 >> 0x4f,0) & 1) != 0) ||
                        (SUB161(auVar97 >> 0x57,0) & 1) != 0) ||
                       (SUB161(auVar97 >> 0x5f,0) & 1) != 0) || (SUB161(auVar97 >> 0x67,0) & 1) != 0
                      ) || (SUB161(auVar97 >> 0x6f,0) & 1) != 0) ||
                    (SUB161(auVar97 >> 0x77,0) & 1) != 0) || auVar97[0xf] < '\0') break;
                uVar61 = uVar61 + lStack_c0 + 0x10;
                lVar59 = lStack_c0 + 0x10;
                lStack_c0 = lVar63;
              }
            }
            lStack_c0 = lVar63;
            uVar57 = pdb_140e21920(lStack_b0,param_1 + 0x10);
            uStack_d8 = CONCAT44(iStack_c8,iStack_c4);
            iStack_d0 = iStack_cc;
            lVar63 = pdb_140e24e00(uVar57,&uStack_d8,3);
            if (*(longlong *)(param_1 + 0x18) != 0) {
              pdb_140e23fa0(lVar63);
            }
            if (param_1[0x38] == '\x01') {
              cVar3 = param_1[0x39];
              *(uint *)(lVar63 + 0x288) = *(uint *)(lVar63 + 0x288) | 0x80;
              *(byte *)(lVar63 + 0x83) = *(byte *)(lVar63 + 0x83) | 1;
              *(char *)(lVar63 + 0x80) = cVar3;
            }
            cVar3 = param_1[0x3a];
            if (cVar3 != '\0') {
              *(byte *)(lVar63 + 0x288) = *(byte *)(lVar63 + 0x288) | 0x80;
              *(byte *)(lVar63 + 0x83) = *(byte *)(lVar63 + 0x83) | 4;
              *(char *)(lVar63 + 0x81) = cVar3;
            }
            if (*(code **)(param_1 + 0x20) == (code *)0x0) {
              if (*param_1 == '\0') {
                if (*(longlong *)(param_4 + 0x88) != 0) {
                  lVar67 = *(longlong *)(param_1 + 8);
                  lVar58 = *(longlong *)(param_4 + 0x70);
                  lVar59 = 0;
                  uVar56 = 0x59a9ebec036a11fe;
                  while( true ) {
                    uVar56 = uVar56 & *(ulonglong *)(param_4 + 0x78);
                    auVar69 = *(undefined1 (*) [16])(lVar58 + uVar56);
                    auVar72[0] = -(auVar69[0] == cVar22);
                    auVar72[1] = -(auVar69[1] == cVar23);
                    auVar72[2] = -(auVar69[2] == cVar24);
                    auVar72[3] = -(auVar69[3] == cVar25);
                    auVar72[4] = -(auVar69[4] == cVar26);
                    auVar72[5] = -(auVar69[5] == cVar27);
                    auVar72[6] = -(auVar69[6] == cVar28);
                    auVar72[7] = -(auVar69[7] == cVar29);
                    auVar72[8] = -(auVar69[8] == cVar30);
                    auVar72[9] = -(auVar69[9] == cVar31);
                    auVar72[10] = -(auVar69[10] == cVar32);
                    auVar72[0xb] = -(auVar69[0xb] == cVar33);
                    auVar72[0xc] = -(auVar69[0xc] == cVar34);
                    auVar72[0xd] = -(auVar69[0xd] == cVar35);
                    auVar72[0xe] = -(auVar69[0xe] == cVar36);
                    auVar72[0xf] = -(auVar69[0xf] == cVar37);
                    uVar65 = (ushort)(SUB161(auVar72 >> 7,0) & 1) |
                             (ushort)(SUB161(auVar72 >> 0xf,0) & 1) << 1 |
                             (ushort)(SUB161(auVar72 >> 0x17,0) & 1) << 2 |
                             (ushort)(SUB161(auVar72 >> 0x1f,0) & 1) << 3 |
                             (ushort)(SUB161(auVar72 >> 0x27,0) & 1) << 4 |
                             (ushort)(SUB161(auVar72 >> 0x2f,0) & 1) << 5 |
                             (ushort)(SUB161(auVar72 >> 0x37,0) & 1) << 6 |
                             (ushort)(SUB161(auVar72 >> 0x3f,0) & 1) << 7 |
                             (ushort)(SUB161(auVar72 >> 0x47,0) & 1) << 8 |
                             (ushort)(SUB161(auVar72 >> 0x4f,0) & 1) << 9 |
                             (ushort)(SUB161(auVar72 >> 0x57,0) & 1) << 10 |
                             (ushort)(SUB161(auVar72 >> 0x5f,0) & 1) << 0xb |
                             (ushort)(SUB161(auVar72 >> 0x67,0) & 1) << 0xc |
                             (ushort)(SUB161(auVar72 >> 0x6f,0) & 1) << 0xd |
                             (ushort)(SUB161(auVar72 >> 0x77,0) & 1) << 0xe |
                             (ushort)(auVar72[0xf] >> 7) << 0xf;
                    uVar62 = (uint)uVar65;
                    while (uVar65 != 0) {
                      uVar5 = 0;
                      for (uVar6 = uVar62; (uVar6 & 1) == 0; uVar6 = uVar6 >> 1 | 0x80000000) {
                        uVar5 = uVar5 + 1;
                      }
                      uVar61 = uVar5 + uVar56 & *(ulonglong *)(param_4 + 0x78);
                      pcVar1 = (char *)(lVar58 + -0x18 + uVar61 * -0x18);
                      auVar73[0] = -(*pcVar1 == cVar38);
                      auVar73[1] = -(pcVar1[1] == cVar39);
                      auVar73[2] = -(pcVar1[2] == cVar40);
                      auVar73[3] = -(pcVar1[3] == cVar41);
                      auVar73[4] = -(pcVar1[4] == cVar42);
                      auVar73[5] = -(pcVar1[5] == cVar43);
                      auVar73[6] = -(pcVar1[6] == cVar44);
                      auVar73[7] = -(pcVar1[7] == cVar45);
                      auVar73[8] = -(pcVar1[8] == cVar46);
                      auVar73[9] = -(pcVar1[9] == cVar47);
                      auVar73[10] = -(pcVar1[10] == cVar48);
                      auVar73[0xb] = -(pcVar1[0xb] == cVar49);
                      auVar73[0xc] = -(pcVar1[0xc] == cVar50);
                      auVar73[0xd] = -(pcVar1[0xd] == cVar51);
                      auVar73[0xe] = -(pcVar1[0xe] == cVar52);
                      auVar73[0xf] = -(pcVar1[0xf] == cVar53);
                      if ((ushort)((ushort)(SUB161(auVar73 >> 7,0) & 1) |
                                   (ushort)(SUB161(auVar73 >> 0xf,0) & 1) << 1 |
                                   (ushort)(SUB161(auVar73 >> 0x17,0) & 1) << 2 |
                                   (ushort)(SUB161(auVar73 >> 0x1f,0) & 1) << 3 |
                                   (ushort)(SUB161(auVar73 >> 0x27,0) & 1) << 4 |
                                   (ushort)(SUB161(auVar73 >> 0x2f,0) & 1) << 5 |
                                   (ushort)(SUB161(auVar73 >> 0x37,0) & 1) << 6 |
                                   (ushort)(SUB161(auVar73 >> 0x3f,0) & 1) << 7 |
                                   (ushort)(SUB161(auVar73 >> 0x47,0) & 1) << 8 |
                                   (ushort)(SUB161(auVar73 >> 0x4f,0) & 1) << 9 |
                                   (ushort)(SUB161(auVar73 >> 0x57,0) & 1) << 10 |
                                   (ushort)(SUB161(auVar73 >> 0x5f,0) & 1) << 0xb |
                                   (ushort)(SUB161(auVar73 >> 0x67,0) & 1) << 0xc |
                                   (ushort)(SUB161(auVar73 >> 0x6f,0) & 1) << 0xd |
                                   (ushort)(SUB161(auVar73 >> 0x77,0) & 1) << 0xe |
                                  (ushort)(auVar73[0xf] >> 7) << 0xf) == 0xffff) {
                        uVar56 = *(ulonglong *)(lVar58 + uVar61 * -0x18 + -8);
                        if ((*(ulonglong *)(param_4 + 0x210) <= uVar56) ||
                           (uVar56 = *(ulonglong *)(*(longlong *)(param_4 + 0x208) + uVar56 * 8),
                           uVar56 == 0)) goto LAB_140af54ad;
                        lVar58 = ~uVar56 * 0x40;
                        if (*(longlong *)(*(longlong *)(param_4 + 0x1d8) + 0x20 + lVar58) == 0)
                        goto LAB_140af54ad;
                        plVar4 = *(longlong **)(*(longlong *)(param_4 + 0x1d8) + lVar58 + 0x10);
                        uStack_d8 = lVar67;
                        if (plVar4[3] == 0) goto LAB_140af54b9;
                        uVar56 = pdb_1400af0a0(plVar4 + 4,&uStack_d8);
                        lVar58 = *plVar4;
                        bVar68 = (byte)(uVar56 >> 0x39);
                        auVar69 = ZEXT216(CONCAT11(bVar68,bVar68));
                        auVar69 = pshuflw(auVar69,auVar69,0);
                        lVar59 = 0;
                        goto LAB_140af538d;
                      }
                      uVar65 = (ushort)(uVar62 - 1) & (ushort)uVar62;
                      uVar62 = CONCAT22((short)(uVar62 - 1 >> 0x10),uVar65);
                    }
                    auVar71[0] = -(auVar69[0] == cVar81);
                    auVar71[1] = -(auVar69[1] == cVar82);
                    auVar71[2] = -(auVar69[2] == cVar83);
                    auVar71[3] = -(auVar69[3] == cVar84);
                    auVar71[4] = -(auVar69[4] == cVar85);
                    auVar71[5] = -(auVar69[5] == cVar86);
                    auVar71[6] = -(auVar69[6] == cVar87);
                    auVar71[7] = -(auVar69[7] == cVar88);
                    auVar71[8] = -(auVar69[8] == cVar89);
                    auVar71[9] = -(auVar69[9] == cVar90);
                    auVar71[10] = -(auVar69[10] == cVar91);
                    auVar71[0xb] = -(auVar69[0xb] == cVar92);
                    auVar71[0xc] = -(auVar69[0xc] == cVar93);
                    auVar71[0xd] = -(auVar69[0xd] == cVar94);
                    auVar71[0xe] = -(auVar69[0xe] == cVar95);
                    auVar71[0xf] = -(auVar69[0xf] == cVar96);
                    if ((((((((((((((((SUB161(auVar71 >> 7,0) & 1) != 0 ||
                                     (SUB161(auVar71 >> 0xf,0) & 1) != 0) ||
                                    (SUB161(auVar71 >> 0x17,0) & 1) != 0) ||
                                   (SUB161(auVar71 >> 0x1f,0) & 1) != 0) ||
                                  (SUB161(auVar71 >> 0x27,0) & 1) != 0) ||
                                 (SUB161(auVar71 >> 0x2f,0) & 1) != 0) ||
                                (SUB161(auVar71 >> 0x37,0) & 1) != 0) ||
                               (SUB161(auVar71 >> 0x3f,0) & 1) != 0) ||
                              (SUB161(auVar71 >> 0x47,0) & 1) != 0) ||
                             (SUB161(auVar71 >> 0x4f,0) & 1) != 0) ||
                            (SUB161(auVar71 >> 0x57,0) & 1) != 0) ||
                           (SUB161(auVar71 >> 0x5f,0) & 1) != 0) ||
                          (SUB161(auVar71 >> 0x67,0) & 1) != 0) ||
                         (SUB161(auVar71 >> 0x6f,0) & 1) != 0) ||
                        (SUB161(auVar71 >> 0x77,0) & 1) != 0) || auVar71[0xf] < '\0') break;
                    uVar56 = uVar56 + lVar59 + 0x10;
                    lVar59 = lVar59 + 0x10;
                  }
                }
LAB_140af54ad:
                    /* WARNING: Subroutine does not return */
                pdb_142dc8150(&UNK_143051178);
              }
              uVar60 = *(undefined4 *)(param_1 + 4);
LAB_140af5256:
              pdb_140e25490(lVar63,uVar60,0,*(undefined4 *)(param_1 + 0x34));
            }
            else {
              (**(code **)(param_1 + 0x20))
                        (param_1,param_4,param_5,*(undefined8 *)(param_1 + 0x28),lVar63);
            }
LAB_140af509a:
            param_1 = param_1 + 0x40;
          } while (param_1 != pcStack_a8);
        }
        return;
      }
      goto LAB_140af5465;
    }
    uVar65 = (ushort)(uVar62 - 1) & (ushort)uVar62;
    uVar62 = CONCAT22((short)(uVar62 - 1 >> 0x10),uVar65);
  }
  goto LAB_140af4f80;
LAB_140af538d:
  uVar56 = uVar56 & plVar4[1];
  auVar78 = *(undefined1 (*) [16])(lVar58 + uVar56);
  auVar75[0] = -(auVar78[0] == auVar69[0]);
  auVar75[1] = -(auVar78[1] == auVar69[1]);
  auVar75[2] = -(auVar78[2] == auVar69[2]);
  auVar75[3] = -(auVar78[3] == auVar69[3]);
  auVar75[4] = -(auVar78[4] == auVar69[4]);
  auVar75[5] = -(auVar78[5] == auVar69[5]);
  auVar75[6] = -(auVar78[6] == auVar69[6]);
  auVar75[7] = -(auVar78[7] == auVar69[7]);
  auVar75[8] = -(auVar78[8] == auVar69[0]);
  auVar75[9] = -(auVar78[9] == auVar69[1]);
  auVar75[10] = -(auVar78[10] == auVar69[2]);
  auVar75[0xb] = -(auVar78[0xb] == auVar69[3]);
  auVar75[0xc] = -(auVar78[0xc] == auVar69[4]);
  auVar75[0xd] = -(auVar78[0xd] == auVar69[5]);
  auVar75[0xe] = -(auVar78[0xe] == auVar69[6]);
  auVar75[0xf] = -(auVar78[0xf] == auVar69[7]);
  uVar65 = (ushort)(SUB161(auVar75 >> 7,0) & 1) | (ushort)(SUB161(auVar75 >> 0xf,0) & 1) << 1 |
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
           (ushort)(SUB161(auVar75 >> 0x77,0) & 1) << 0xe | (ushort)(auVar75[0xf] >> 7) << 0xf;
  uVar62 = (uint)uVar65;
  while (uVar65 != 0) {
    uVar5 = 0;
    for (uVar6 = uVar62; (uVar6 & 1) == 0; uVar6 = uVar6 >> 1 | 0x80000000) {
      uVar5 = uVar5 + 1;
    }
    lVar64 = (uVar5 + uVar56 & plVar4[1]) * -0x30;
    if (lVar67 == *(longlong *)(lVar58 + -0x30 + lVar64)) {
      lVar58 = lVar58 + lVar64;
      lVar67 = pdb_141a076a0(lVar63,lVar58 + -0x28);
      uVar57 = pdb_140e17290(lVar58 + -0x10,lVar67);
      *(byte *)(lVar67 + 0x28a) = *(byte *)(lVar67 + 0x28a) | 1;
      *(undefined8 *)(lVar67 + 200) = uVar57;
      if (*(char *)(lVar58 + -4) == '\0') {
        pdb_140e25450(lVar63);
        uVar60 = *(undefined4 *)(lVar58 + -8);
      }
      else {
        *(byte *)(lVar63 + 0x288) = *(byte *)(lVar63 + 0x288) | 0x80;
        *(byte *)(lVar63 + 0x83) = *(byte *)(lVar63 + 0x83) | 2;
        *(undefined1 *)(lVar63 + 0x82) = 0;
        uVar60 = *(undefined4 *)(lVar58 + -8);
      }
      goto LAB_140af5256;
    }
    uVar65 = (ushort)(uVar62 - 1) & (ushort)uVar62;
    uVar62 = CONCAT22((short)(uVar62 - 1 >> 0x10),uVar65);
  }
  auVar74[0] = -(auVar78[0] == cVar81);
  auVar74[1] = -(auVar78[1] == cVar82);
  auVar74[2] = -(auVar78[2] == cVar83);
  auVar74[3] = -(auVar78[3] == cVar84);
  auVar74[4] = -(auVar78[4] == cVar85);
  auVar74[5] = -(auVar78[5] == cVar86);
  auVar74[6] = -(auVar78[6] == cVar87);
  auVar74[7] = -(auVar78[7] == cVar88);
  auVar74[8] = -(auVar78[8] == cVar89);
  auVar74[9] = -(auVar78[9] == cVar90);
  auVar74[10] = -(auVar78[10] == cVar91);
  auVar74[0xb] = -(auVar78[0xb] == cVar92);
  auVar74[0xc] = -(auVar78[0xc] == cVar93);
  auVar74[0xd] = -(auVar78[0xd] == cVar94);
  auVar74[0xe] = -(auVar78[0xe] == cVar95);
  auVar74[0xf] = -(auVar78[0xf] == cVar96);
  if ((((((((((((((((SUB161(auVar74 >> 7,0) & 1) != 0 || (SUB161(auVar74 >> 0xf,0) & 1) != 0) ||
                  (SUB161(auVar74 >> 0x17,0) & 1) != 0) || (SUB161(auVar74 >> 0x1f,0) & 1) != 0) ||
                (SUB161(auVar74 >> 0x27,0) & 1) != 0) || (SUB161(auVar74 >> 0x2f,0) & 1) != 0) ||
              (SUB161(auVar74 >> 0x37,0) & 1) != 0) || (SUB161(auVar74 >> 0x3f,0) & 1) != 0) ||
            (SUB161(auVar74 >> 0x47,0) & 1) != 0) || (SUB161(auVar74 >> 0x4f,0) & 1) != 0) ||
          (SUB161(auVar74 >> 0x57,0) & 1) != 0) || (SUB161(auVar74 >> 0x5f,0) & 1) != 0) ||
        (SUB161(auVar74 >> 0x67,0) & 1) != 0) || (SUB161(auVar74 >> 0x6f,0) & 1) != 0) ||
      (SUB161(auVar74 >> 0x77,0) & 1) != 0) || auVar74[0xf] < '\0') {
LAB_140af54b9:
                    /* WARNING: Subroutine does not return */
    pdb_142dc8150(&UNK_143051190);
  }
  uVar56 = uVar56 + lVar59 + 0x10;
  lVar59 = lVar59 + 0x10;
  goto LAB_140af538d;
LAB_140af4f80:
  auVar77[0] = -(auVar69[0] == -1);
  auVar77[1] = -(auVar69[1] == -1);
  auVar77[2] = -(auVar69[2] == -1);
  auVar77[3] = -(auVar69[3] == -1);
  auVar77[4] = -(auVar69[4] == -1);
  auVar77[5] = -(auVar69[5] == -1);
  auVar77[6] = -(auVar69[6] == -1);
  auVar77[7] = -(auVar69[7] == -1);
  auVar77[8] = -(auVar69[8] == -1);
  auVar77[9] = -(auVar69[9] == -1);
  auVar77[10] = -(auVar69[10] == -1);
  auVar77[0xb] = -(auVar69[0xb] == -1);
  auVar77[0xc] = -(auVar69[0xc] == -1);
  auVar77[0xd] = -(auVar69[0xd] == -1);
  auVar77[0xe] = -(auVar69[0xe] == -1);
  auVar77[0xf] = -(auVar69[0xf] == -1);
  if ((((((((((((((((SUB161(auVar77 >> 7,0) & 1) != 0 || (SUB161(auVar77 >> 0xf,0) & 1) != 0) ||
                  (SUB161(auVar77 >> 0x17,0) & 1) != 0) || (SUB161(auVar77 >> 0x1f,0) & 1) != 0) ||
                (SUB161(auVar77 >> 0x27,0) & 1) != 0) || (SUB161(auVar77 >> 0x2f,0) & 1) != 0) ||
              (SUB161(auVar77 >> 0x37,0) & 1) != 0) || (SUB161(auVar77 >> 0x3f,0) & 1) != 0) ||
            (SUB161(auVar77 >> 0x47,0) & 1) != 0) || (SUB161(auVar77 >> 0x4f,0) & 1) != 0) ||
          (SUB161(auVar77 >> 0x57,0) & 1) != 0) || (SUB161(auVar77 >> 0x5f,0) & 1) != 0) ||
        (SUB161(auVar77 >> 0x67,0) & 1) != 0) || (SUB161(auVar77 >> 0x6f,0) & 1) != 0) ||
      (SUB161(auVar77 >> 0x77,0) & 1) != 0) || auVar77[0xf] < '\0') {
LAB_140af5465:
                    /* WARNING: Subroutine does not return */
    pdb_142dc8150(&UNK_143051118);
  }
  uVar61 = uVar61 + lVar67 + 0x10;
  lVar67 = lVar67 + 0x10;
  goto LAB_140af4f2d;
}

