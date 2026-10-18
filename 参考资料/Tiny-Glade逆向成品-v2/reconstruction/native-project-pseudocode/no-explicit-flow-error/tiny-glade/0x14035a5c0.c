// VA 0x14035a5c0, PDB extent 1511 bytes
// tiny_glade::game_loop::GameLoop::run
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/game_loop.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: tiny_glade::game_loop::GameLoop::run
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/game_loop.rs
   Extent: 1511 */

void pdb_14035a5c0(longlong param_1)

{
  char *pcVar1;
  char cVar2;
  undefined1 auVar3 [16];
  code *pcVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  byte *pbVar8;
  undefined8 *puVar9;
  ulonglong uVar10;
  longlong lVar11;
  uint uVar12;
  ushort uVar13;
  ulonglong uVar14;
  bool bVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  byte **ppbStack_e0;
  code *pcStack_d8;
  longlong *plStack_d0;
  code *pcStack_c8;
  longlong lStack_c0;
  byte *pbStack_b8;
  byte *pbStack_b0;
  byte *pbStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  byte ***pppbStack_58;
  byte *pbStack_50;
  byte *pbStack_48;
  longlong lStack_40;
  longlong *plStack_38;
  undefined1 uStack_29;
  undefined8 uStack_28;
  
  uStack_28 = 0xfffffffffffffffe;
  lStack_40 = param_1;
  pdb_14035abb0();
  DAT_143cb2b0a = 1;
  if (*(longlong *)(lStack_40 + 0x178) != 0) {
    lVar7 = *(longlong *)(lStack_40 + 0x160);
    uVar10 = 0xbed298c9c7b4ed1;
    lVar11 = 0;
    do {
      uVar10 = uVar10 & *(ulonglong *)(lStack_40 + 0x168);
      auVar3 = *(undefined1 (*) [16])(lVar7 + uVar10);
      auVar18[0] = -(auVar3[0] == DAT_142e34910);
      auVar18[1] = -(auVar3[1] == DAT_142e34910._1_1_);
      auVar18[2] = -(auVar3[2] == DAT_142e34910._2_1_);
      auVar18[3] = -(auVar3[3] == DAT_142e34910._3_1_);
      auVar18[4] = -(auVar3[4] == DAT_142e34910._4_1_);
      auVar18[5] = -(auVar3[5] == DAT_142e34910._5_1_);
      auVar18[6] = -(auVar3[6] == DAT_142e34910._6_1_);
      auVar18[7] = -(auVar3[7] == DAT_142e34910._7_1_);
      auVar18[8] = -(auVar3[8] == DAT_142e34910._8_1_);
      auVar18[9] = -(auVar3[9] == DAT_142e34910._9_1_);
      auVar18[10] = -(auVar3[10] == DAT_142e34910._10_1_);
      auVar18[0xb] = -(auVar3[0xb] == DAT_142e34910._11_1_);
      auVar18[0xc] = -(auVar3[0xc] == DAT_142e34910._12_1_);
      auVar18[0xd] = -(auVar3[0xd] == DAT_142e34910._13_1_);
      auVar18[0xe] = -(auVar3[0xe] == DAT_142e34910._14_1_);
      auVar18[0xf] = -(auVar3[0xf] == DAT_142e34910._15_1_);
      uVar13 = (ushort)(SUB161(auVar18 >> 7,0) & 1) | (ushort)(SUB161(auVar18 >> 0xf,0) & 1) << 1 |
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
      uVar12 = (uint)uVar13;
      while (uVar13 != 0) {
        uVar5 = 0;
        for (uVar6 = uVar12; (uVar6 & 1) == 0; uVar6 = uVar6 >> 1 | 0x80000000) {
          uVar5 = uVar5 + 1;
        }
        uVar14 = uVar5 + uVar10 & *(ulonglong *)(lStack_40 + 0x168);
        pcVar1 = (char *)(lVar7 + -0x18 + uVar14 * -0x18);
        auVar19[0] = -(*pcVar1 == DAT_142e64850);
        auVar19[1] = -(pcVar1[1] == DAT_142e64850._1_1_);
        auVar19[2] = -(pcVar1[2] == DAT_142e64850._2_1_);
        auVar19[3] = -(pcVar1[3] == DAT_142e64850._3_1_);
        auVar19[4] = -(pcVar1[4] == DAT_142e64850._4_1_);
        auVar19[5] = -(pcVar1[5] == DAT_142e64850._5_1_);
        auVar19[6] = -(pcVar1[6] == DAT_142e64850._6_1_);
        auVar19[7] = -(pcVar1[7] == DAT_142e64850._7_1_);
        auVar19[8] = -(pcVar1[8] == DAT_142e64850._8_1_);
        auVar19[9] = -(pcVar1[9] == DAT_142e64850._9_1_);
        auVar19[10] = -(pcVar1[10] == DAT_142e64850._10_1_);
        auVar19[0xb] = -(pcVar1[0xb] == DAT_142e64850._11_1_);
        auVar19[0xc] = -(pcVar1[0xc] == DAT_142e64850._12_1_);
        auVar19[0xd] = -(pcVar1[0xd] == DAT_142e64850._13_1_);
        auVar19[0xe] = -(pcVar1[0xe] == DAT_142e64850._14_1_);
        auVar19[0xf] = -(pcVar1[0xf] == DAT_142e64850._15_1_);
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
          uVar10 = *(ulonglong *)(lVar7 + uVar14 * -0x18 + -8);
          if ((*(ulonglong *)(lStack_40 + 0x300) <= uVar10) ||
             (uVar10 = *(ulonglong *)(*(longlong *)(lStack_40 + 0x2f8) + uVar10 * 8), uVar10 == 0))
          goto LAB_14035a9dd;
          lVar7 = ~uVar10 * 0x40;
          if (*(longlong *)(*(longlong *)(lStack_40 + 0x2c8) + 0x20 + lVar7) == 0)
          goto LAB_14035a9dd;
          lVar7 = *(longlong *)(*(longlong *)(lStack_40 + 0x2c8) + lVar7 + 0x10);
          if (-1 < *(longlong *)(lVar7 + 0x40)) {
            pdb_14007ee60();
            pbStack_a8 = pub_1406abab0(0x80,1);
            if (pbStack_a8 == (byte *)0x0) {
              pdb_142dc7e2a(1,0x80);
                    /* WARNING: Does not return */
              pcVar4 = (code *)invalidInstructionException();
              (*pcVar4)();
            }
            pbStack_b0 = (byte *)0x80;
            uStack_a0 = 0;
            ppbStack_e0 = &pbStack_b0;
            pbVar8 = (byte *)pdb_140485330(lVar7,&ppbStack_e0);
            if (pbVar8 != (byte *)0x0) {
              if (pbStack_b0 != (byte *)0x0) {
                pub_1406abac0(pbStack_a8,(ulonglong)pbStack_b0,1);
              }
LAB_14035aa57:
              pbStack_b0 = pbVar8;
                    /* WARNING: Subroutine does not return */
              pdb_142dc8170(&UNK_142f42df8,0x2b,&pbStack_b0,&UNK_142f42e28,&UNK_142f425c0);
            }
            pbStack_48 = pbStack_b0;
            pbVar8 = pbStack_a8;
            if (SBORROW8(0,(longlong)pbStack_b0)) goto LAB_14035aa57;
            pbStack_50 = pbStack_a8;
            pbVar8 = (byte *)pdb_140f561c0(*(undefined8 *)(lVar7 + 0x48),
                                           *(undefined8 *)(lVar7 + 0x50),pbStack_a8,uStack_a0);
            if (pbStack_48 != (byte *)0x0) {
              pub_1406abac0(pbStack_50,(ulonglong)pbStack_48,1);
            }
            pbStack_b0 = pbVar8;
            if (pbVar8 != (byte *)0x0) {
              pdb_1404b38e0(&pbStack_b0);
            }
            if (*(longlong *)(lStack_40 + 0x178) == 0) goto LAB_14035a9ef;
          }
          lVar7 = *(longlong *)(lStack_40 + 0x160);
          uVar10 = 0x89344017c8ec8a8d;
          lVar11 = 0;
          goto LAB_14035a7dd;
        }
        uVar13 = (ushort)(uVar12 - 1) & (ushort)uVar12;
        uVar12 = CONCAT22((short)(uVar12 - 1 >> 0x10),uVar13);
      }
      auVar16[0] = -(auVar3[0] == -1);
      auVar16[1] = -(auVar3[1] == -1);
      auVar16[2] = -(auVar3[2] == -1);
      auVar16[3] = -(auVar3[3] == -1);
      auVar16[4] = -(auVar3[4] == -1);
      auVar16[5] = -(auVar3[5] == -1);
      auVar16[6] = -(auVar3[6] == -1);
      auVar16[7] = -(auVar3[7] == -1);
      auVar16[8] = -(auVar3[8] == -1);
      auVar16[9] = -(auVar3[9] == -1);
      auVar16[10] = -(auVar3[10] == -1);
      auVar16[0xb] = -(auVar3[0xb] == -1);
      auVar16[0xc] = -(auVar3[0xc] == -1);
      auVar16[0xd] = -(auVar3[0xd] == -1);
      auVar16[0xe] = -(auVar3[0xe] == -1);
      auVar16[0xf] = -(auVar3[0xf] == -1);
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
    } while( true );
  }
LAB_14035a9dd:
                    /* WARNING: Subroutine does not return */
  pdb_142dc8150(&UNK_142f425a8);
LAB_14035a7dd:
  uVar10 = uVar10 & *(ulonglong *)(lStack_40 + 0x168);
  auVar3 = *(undefined1 (*) [16])(lVar7 + uVar10);
  auVar20[0] = -(auVar3[0] == DAT_142e342a0);
  auVar20[1] = -(auVar3[1] == DAT_142e342a0._1_1_);
  auVar20[2] = -(auVar3[2] == DAT_142e342a0._2_1_);
  auVar20[3] = -(auVar3[3] == DAT_142e342a0._3_1_);
  auVar20[4] = -(auVar3[4] == DAT_142e342a0._4_1_);
  auVar20[5] = -(auVar3[5] == DAT_142e342a0._5_1_);
  auVar20[6] = -(auVar3[6] == DAT_142e342a0._6_1_);
  auVar20[7] = -(auVar3[7] == DAT_142e342a0._7_1_);
  auVar20[8] = -(auVar3[8] == DAT_142e342a0._8_1_);
  auVar20[9] = -(auVar3[9] == DAT_142e342a0._9_1_);
  auVar20[10] = -(auVar3[10] == DAT_142e342a0._10_1_);
  auVar20[0xb] = -(auVar3[0xb] == DAT_142e342a0._11_1_);
  auVar20[0xc] = -(auVar3[0xc] == DAT_142e342a0._12_1_);
  auVar20[0xd] = -(auVar3[0xd] == DAT_142e342a0._13_1_);
  auVar20[0xe] = -(auVar3[0xe] == DAT_142e342a0._14_1_);
  auVar20[0xf] = -(auVar3[0xf] == DAT_142e342a0._15_1_);
  uVar13 = (ushort)(SUB161(auVar20 >> 7,0) & 1) | (ushort)(SUB161(auVar20 >> 0xf,0) & 1) << 1 |
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
  uVar12 = (uint)uVar13;
  while (uVar13 != 0) {
    uVar5 = 0;
    for (uVar6 = uVar12; (uVar6 & 1) == 0; uVar6 = uVar6 >> 1 | 0x80000000) {
      uVar5 = uVar5 + 1;
    }
    uVar14 = uVar5 + uVar10 & *(ulonglong *)(lStack_40 + 0x168);
    pcVar1 = (char *)(lVar7 + -0x18 + uVar14 * -0x18);
    auVar21[0] = -(*pcVar1 == DAT_142e342b0);
    auVar21[1] = -(pcVar1[1] == DAT_142e342b0._1_1_);
    auVar21[2] = -(pcVar1[2] == DAT_142e342b0._2_1_);
    auVar21[3] = -(pcVar1[3] == DAT_142e342b0._3_1_);
    auVar21[4] = -(pcVar1[4] == DAT_142e342b0._4_1_);
    auVar21[5] = -(pcVar1[5] == DAT_142e342b0._5_1_);
    auVar21[6] = -(pcVar1[6] == DAT_142e342b0._6_1_);
    auVar21[7] = -(pcVar1[7] == DAT_142e342b0._7_1_);
    auVar21[8] = -(pcVar1[8] == DAT_142e342b0._8_1_);
    auVar21[9] = -(pcVar1[9] == DAT_142e342b0._9_1_);
    auVar21[10] = -(pcVar1[10] == DAT_142e342b0._10_1_);
    auVar21[0xb] = -(pcVar1[0xb] == DAT_142e342b0._11_1_);
    auVar21[0xc] = -(pcVar1[0xc] == DAT_142e342b0._12_1_);
    auVar21[0xd] = -(pcVar1[0xd] == DAT_142e342b0._13_1_);
    auVar21[0xe] = -(pcVar1[0xe] == DAT_142e342b0._14_1_);
    auVar21[0xf] = -(pcVar1[0xf] == DAT_142e342b0._15_1_);
    if ((ushort)((ushort)(SUB161(auVar21 >> 7,0) & 1) | (ushort)(SUB161(auVar21 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar21 >> 0x17,0) & 1) << 2 |
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
                 (ushort)(SUB161(auVar21 >> 0x77,0) & 1) << 0xe | (ushort)(auVar21[0xf] >> 7) << 0xf
                ) == 0xffff) {
      uVar10 = *(ulonglong *)(lVar7 + uVar14 * -0x18 + -8);
      if ((uVar10 < *(ulonglong *)(lStack_40 + 0x300)) &&
         (uVar10 = *(ulonglong *)(*(longlong *)(lStack_40 + 0x2f8) + uVar10 * 8), uVar10 != 0)) {
        lVar7 = ~uVar10 * 0x40;
        if (*(longlong *)(*(longlong *)(lStack_40 + 0x2c8) + 0x20 + lVar7) != 0) {
          puVar9 = (undefined8 *)pdb_140f03130(*(longlong *)(lStack_40 + 0x2c8) + lVar7,0);
          plStack_38 = (longlong *)*puVar9;
          lVar7 = pdb_140a92040(&plStack_38);
          lVar7 = *(longlong *)(lVar7 + 0x6a8);
          pcVar1 = (char *)(lVar7 + 0x10);
          LOCK();
          bVar15 = *(char *)(lVar7 + 0x10) == '\0';
          if (bVar15) {
            *(char *)(lVar7 + 0x10) = '\x01';
          }
          UNLOCK();
          if (!bVar15) {
            pdb_142dbd1a0(pcVar1);
          }
          pdb_140e9a150(pcVar1);
          pbVar8 = *(byte **)(lVar7 + 0x688);
          lVar7 = *(longlong *)(lVar7 + 0x690);
          pdb_140e9a350();
          LOCK();
          cVar2 = *pcVar1;
          if (cVar2 == '\x01') {
            *pcVar1 = '\0';
          }
          UNLOCK();
          if (cVar2 != '\x01') {
            pdb_142dbcef0(pcVar1,0);
          }
          lStack_c0 = lVar7;
          pbStack_b8 = pbVar8;
          if ((lVar7 != 0 || pbVar8 != (byte *)0x0) && (3 < *_DAT_143ca8e90)) {
            ppbStack_e0 = &pbStack_b8;
            pcStack_d8 = pdb_140f72a40;
            plStack_d0 = &lStack_c0;
            pcStack_c8 = pdb_140f72a40;
            pbStack_b0 = (byte *)0x0;
            pbStack_a8 = &UNK_142f42622;
            uStack_a0 = 0x15;
            uStack_98 = 0;
            puStack_90 = &UNK_142f42580;
            uStack_88 = 0x22;
            uStack_80 = 4;
            puStack_78 = &UNK_142f42622;
            uStack_70 = 0x15;
            uStack_68 = 0x4ae00000001;
            puStack_60 = &UNK_142f425f0;
            pppbStack_58 = &ppbStack_e0;
            pdb_140f332f0(&uStack_29,&pbStack_b0);
          }
          LOCK();
          *plStack_38 = *plStack_38 + -1;
          UNLOCK();
          if (*plStack_38 == 0) {
            pdb_140e3f860(&plStack_38);
          }
          pdb_1404bbf70(lStack_40);
          return;
        }
      }
      goto LAB_14035a9ef;
    }
    uVar13 = (ushort)(uVar12 - 1) & (ushort)uVar12;
    uVar12 = CONCAT22((short)(uVar12 - 1 >> 0x10),uVar13);
  }
  auVar17[0] = -(auVar3[0] == -1);
  auVar17[1] = -(auVar3[1] == -1);
  auVar17[2] = -(auVar3[2] == -1);
  auVar17[3] = -(auVar3[3] == -1);
  auVar17[4] = -(auVar3[4] == -1);
  auVar17[5] = -(auVar3[5] == -1);
  auVar17[6] = -(auVar3[6] == -1);
  auVar17[7] = -(auVar3[7] == -1);
  auVar17[8] = -(auVar3[8] == -1);
  auVar17[9] = -(auVar3[9] == -1);
  auVar17[10] = -(auVar3[10] == -1);
  auVar17[0xb] = -(auVar3[0xb] == -1);
  auVar17[0xc] = -(auVar3[0xc] == -1);
  auVar17[0xd] = -(auVar3[0xd] == -1);
  auVar17[0xe] = -(auVar3[0xe] == -1);
  auVar17[0xf] = -(auVar3[0xf] == -1);
  if ((((((((((((((((SUB161(auVar17 >> 7,0) & 1) != 0 || (SUB161(auVar17 >> 0xf,0) & 1) != 0) ||
                  (SUB161(auVar17 >> 0x17,0) & 1) != 0) || (SUB161(auVar17 >> 0x1f,0) & 1) != 0) ||
                (SUB161(auVar17 >> 0x27,0) & 1) != 0) || (SUB161(auVar17 >> 0x2f,0) & 1) != 0) ||
              (SUB161(auVar17 >> 0x37,0) & 1) != 0) || (SUB161(auVar17 >> 0x3f,0) & 1) != 0) ||
            (SUB161(auVar17 >> 0x47,0) & 1) != 0) || (SUB161(auVar17 >> 0x4f,0) & 1) != 0) ||
          (SUB161(auVar17 >> 0x57,0) & 1) != 0) || (SUB161(auVar17 >> 0x5f,0) & 1) != 0) ||
        (SUB161(auVar17 >> 0x67,0) & 1) != 0) || (SUB161(auVar17 >> 0x6f,0) & 1) != 0) ||
      (SUB161(auVar17 >> 0x77,0) & 1) != 0) || auVar17[0xf] < '\0') {
LAB_14035a9ef:
                    /* WARNING: Subroutine does not return */
    pdb_142dc8150(&UNK_142f425d8);
  }
  uVar10 = uVar10 + lVar11 + 0x10;
  lVar11 = lVar11 + 0x10;
  goto LAB_14035a7dd;
}

