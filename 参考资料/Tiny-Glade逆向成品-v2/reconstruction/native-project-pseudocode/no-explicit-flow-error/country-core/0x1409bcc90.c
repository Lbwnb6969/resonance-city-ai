// VA 0x1409bcc90, PDB extent 2374 bytes
// country_core::systems::ui::signifiers::impl$2::build::thick_line_draw_fn
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/ui/signifiers/mod.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::systems::ui::signifiers::impl$2::build::thick_line_draw_fn
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/ui/signifiers/mod.rs
   Extent: 2374 */

void pdb_1409bcc90(int *param_1,longlong param_2,undefined8 param_3,ulonglong param_4,
                  ulonglong param_5)

{
  char *pcVar1;
  char *pcVar2;
  float fVar3;
  ushort uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  longlong lVar8;
  undefined8 uVar9;
  int *piVar10;
  float *pfVar11;
  undefined4 *puVar12;
  ulonglong uVar13;
  ushort *puVar14;
  ushort *puVar15;
  uint uVar16;
  ulonglong uVar17;
  uint uVar18;
  longlong lVar19;
  longlong lVar20;
  ushort uVar21;
  int iVar22;
  ulonglong uVar23;
  ulonglong uVar24;
  ulonglong uVar25;
  ushort uVar26;
  int iVar27;
  ulonglong uVar28;
  longlong *plVar29;
  byte bVar30;
  undefined4 uVar31;
  undefined4 extraout_XMM0_Da;
  undefined1 auVar32 [16];
  float fVar33;
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  float unaff_XMM6_Da;
  float fVar53;
  undefined4 unaff_XMM7_Da;
  ulonglong uStack_b0;
  int iStack_a8;
  int iStack_a4;
  ulonglong uStack_a0;
  longlong lStack_98;
  ushort *puStack_90;
  
  if (*(longlong *)(param_2 + 0x88) != 0) {
    lVar8 = *(longlong *)(param_2 + 0x70);
    uVar17 = 0x59a9ebec036a11fe;
    lVar19 = 0;
    while( true ) {
      uVar17 = uVar17 & *(ulonglong *)(param_2 + 0x78);
      auVar32 = *(undefined1 (*) [16])(lVar8 + uVar17);
      auVar39[0] = -(auVar32[0] == DAT_142e33bd0);
      auVar39[1] = -(auVar32[1] == DAT_142e33bd0._1_1_);
      auVar39[2] = -(auVar32[2] == DAT_142e33bd0._2_1_);
      auVar39[3] = -(auVar32[3] == DAT_142e33bd0._3_1_);
      auVar39[4] = -(auVar32[4] == DAT_142e33bd0._4_1_);
      auVar39[5] = -(auVar32[5] == DAT_142e33bd0._5_1_);
      auVar39[6] = -(auVar32[6] == DAT_142e33bd0._6_1_);
      auVar39[7] = -(auVar32[7] == DAT_142e33bd0._7_1_);
      auVar39[8] = -(auVar32[8] == DAT_142e33bd0._8_1_);
      auVar39[9] = -(auVar32[9] == DAT_142e33bd0._9_1_);
      auVar39[10] = -(auVar32[10] == DAT_142e33bd0._10_1_);
      auVar39[0xb] = -(auVar32[0xb] == DAT_142e33bd0._11_1_);
      auVar39[0xc] = -(auVar32[0xc] == DAT_142e33bd0._12_1_);
      auVar39[0xd] = -(auVar32[0xd] == DAT_142e33bd0._13_1_);
      auVar39[0xe] = -(auVar32[0xe] == DAT_142e33bd0._14_1_);
      auVar39[0xf] = -(auVar32[0xf] == DAT_142e33bd0._15_1_);
      uVar26 = (ushort)(SUB161(auVar39 >> 7,0) & 1) | (ushort)(SUB161(auVar39 >> 0xf,0) & 1) << 1 |
               (ushort)(SUB161(auVar39 >> 0x17,0) & 1) << 2 |
               (ushort)(SUB161(auVar39 >> 0x1f,0) & 1) << 3 |
               (ushort)(SUB161(auVar39 >> 0x27,0) & 1) << 4 |
               (ushort)(SUB161(auVar39 >> 0x2f,0) & 1) << 5 |
               (ushort)(SUB161(auVar39 >> 0x37,0) & 1) << 6 |
               (ushort)(SUB161(auVar39 >> 0x3f,0) & 1) << 7 |
               (ushort)(SUB161(auVar39 >> 0x47,0) & 1) << 8 |
               (ushort)(SUB161(auVar39 >> 0x4f,0) & 1) << 9 |
               (ushort)(SUB161(auVar39 >> 0x57,0) & 1) << 10 |
               (ushort)(SUB161(auVar39 >> 0x5f,0) & 1) << 0xb |
               (ushort)(SUB161(auVar39 >> 0x67,0) & 1) << 0xc |
               (ushort)(SUB161(auVar39 >> 0x6f,0) & 1) << 0xd |
               (ushort)(SUB161(auVar39 >> 0x77,0) & 1) << 0xe | (ushort)(auVar39[0xf] >> 7) << 0xf;
      uVar25 = (ulonglong)uVar26;
      while (uVar26 != 0) {
        uVar16 = 0;
        for (uVar18 = (uint)uVar25; (uVar18 & 1) == 0; uVar18 = uVar18 >> 1 | 0x80000000) {
          uVar16 = uVar16 + 1;
        }
        uVar28 = uVar16 + uVar17 & *(ulonglong *)(param_2 + 0x78);
        pcVar1 = (char *)(lVar8 + -0x18 + uVar28 * -0x18);
        auVar40[0] = -(*pcVar1 == DAT_142e34980);
        auVar40[1] = -(pcVar1[1] == DAT_142e34980._1_1_);
        auVar40[2] = -(pcVar1[2] == DAT_142e34980._2_1_);
        auVar40[3] = -(pcVar1[3] == DAT_142e34980._3_1_);
        auVar40[4] = -(pcVar1[4] == DAT_142e34980._4_1_);
        auVar40[5] = -(pcVar1[5] == DAT_142e34980._5_1_);
        auVar40[6] = -(pcVar1[6] == DAT_142e34980._6_1_);
        auVar40[7] = -(pcVar1[7] == DAT_142e34980._7_1_);
        auVar40[8] = -(pcVar1[8] == DAT_142e34980._8_1_);
        auVar40[9] = -(pcVar1[9] == DAT_142e34980._9_1_);
        auVar40[10] = -(pcVar1[10] == DAT_142e34980._10_1_);
        auVar40[0xb] = -(pcVar1[0xb] == DAT_142e34980._11_1_);
        auVar40[0xc] = -(pcVar1[0xc] == DAT_142e34980._12_1_);
        auVar40[0xd] = -(pcVar1[0xd] == DAT_142e34980._13_1_);
        auVar40[0xe] = -(pcVar1[0xe] == DAT_142e34980._14_1_);
        auVar40[0xf] = -(pcVar1[0xf] == DAT_142e34980._15_1_);
        if ((ushort)((ushort)(SUB161(auVar40 >> 7,0) & 1) |
                     (ushort)(SUB161(auVar40 >> 0xf,0) & 1) << 1 |
                     (ushort)(SUB161(auVar40 >> 0x17,0) & 1) << 2 |
                     (ushort)(SUB161(auVar40 >> 0x1f,0) & 1) << 3 |
                     (ushort)(SUB161(auVar40 >> 0x27,0) & 1) << 4 |
                     (ushort)(SUB161(auVar40 >> 0x2f,0) & 1) << 5 |
                     (ushort)(SUB161(auVar40 >> 0x37,0) & 1) << 6 |
                     (ushort)(SUB161(auVar40 >> 0x3f,0) & 1) << 7 |
                     (ushort)(SUB161(auVar40 >> 0x47,0) & 1) << 8 |
                     (ushort)(SUB161(auVar40 >> 0x4f,0) & 1) << 9 |
                     (ushort)(SUB161(auVar40 >> 0x57,0) & 1) << 10 |
                     (ushort)(SUB161(auVar40 >> 0x5f,0) & 1) << 0xb |
                     (ushort)(SUB161(auVar40 >> 0x67,0) & 1) << 0xc |
                     (ushort)(SUB161(auVar40 >> 0x6f,0) & 1) << 0xd |
                     (ushort)(SUB161(auVar40 >> 0x77,0) & 1) << 0xe |
                    (ushort)(auVar40[0xf] >> 7) << 0xf) == 0xffff) {
          uVar17 = *(ulonglong *)(lVar8 + uVar28 * -0x18 + -8);
          if ((*(ulonglong *)(param_2 + 0x210) <= uVar17) ||
             (uVar17 = *(ulonglong *)(*(longlong *)(param_2 + 0x208) + uVar17 * 8), uVar17 == 0))
          goto LAB_1409bceca;
          lVar8 = ~uVar17 * 0x40;
          if (*(longlong *)(*(longlong *)(param_2 + 0x1d8) + 0x20 + lVar8) == 0) goto LAB_1409bceca;
          if (*param_1 == 1) goto LAB_1409bd543;
          plVar29 = *(longlong **)(*(longlong *)(param_2 + 0x1d8) + lVar8 + 0x10);
          uVar17 = *(ulonglong *)(param_1 + 2);
          uStack_b0 = uVar17;
          if (plVar29[3] == 0) goto LAB_1409bced6;
          uVar28 = pdb_1400af0a0(plVar29 + 4,&uStack_b0);
          lVar8 = *plVar29;
          bVar30 = (byte)(uVar28 >> 0x39);
          auVar32 = ZEXT216(CONCAT11(bVar30,bVar30));
          auVar32 = pshuflw(auVar32,auVar32,0);
          lVar19 = 0;
          goto LAB_1409bce1a;
        }
        iVar27 = (uint)uVar25 - 1;
        uVar26 = (ushort)iVar27 & (ushort)uVar25;
        uVar25 = (ulonglong)CONCAT22((short)((uint)iVar27 >> 0x10),uVar26);
      }
      auVar35[0] = -(auVar32[0] == -1);
      auVar35[1] = -(auVar32[1] == -1);
      auVar35[2] = -(auVar32[2] == -1);
      auVar35[3] = -(auVar32[3] == -1);
      auVar35[4] = -(auVar32[4] == -1);
      auVar35[5] = -(auVar32[5] == -1);
      auVar35[6] = -(auVar32[6] == -1);
      auVar35[7] = -(auVar32[7] == -1);
      auVar35[8] = -(auVar32[8] == -1);
      auVar35[9] = -(auVar32[9] == -1);
      auVar35[10] = -(auVar32[10] == -1);
      auVar35[0xb] = -(auVar32[0xb] == -1);
      auVar35[0xc] = -(auVar32[0xc] == -1);
      auVar35[0xd] = -(auVar32[0xd] == -1);
      auVar35[0xe] = -(auVar32[0xe] == -1);
      auVar35[0xf] = -(auVar32[0xf] == -1);
      if ((((((((((((((((SUB161(auVar35 >> 7,0) & 1) != 0 || (SUB161(auVar35 >> 0xf,0) & 1) != 0) ||
                      (SUB161(auVar35 >> 0x17,0) & 1) != 0) || (SUB161(auVar35 >> 0x1f,0) & 1) != 0)
                    || (SUB161(auVar35 >> 0x27,0) & 1) != 0) || (SUB161(auVar35 >> 0x2f,0) & 1) != 0
                   ) || (SUB161(auVar35 >> 0x37,0) & 1) != 0) ||
                 (SUB161(auVar35 >> 0x3f,0) & 1) != 0) || (SUB161(auVar35 >> 0x47,0) & 1) != 0) ||
               (SUB161(auVar35 >> 0x4f,0) & 1) != 0) || (SUB161(auVar35 >> 0x57,0) & 1) != 0) ||
             (SUB161(auVar35 >> 0x5f,0) & 1) != 0) || (SUB161(auVar35 >> 0x67,0) & 1) != 0) ||
           (SUB161(auVar35 >> 0x6f,0) & 1) != 0) || (SUB161(auVar35 >> 0x77,0) & 1) != 0) ||
          auVar35[0xf] < '\0') break;
      uVar17 = uVar17 + lVar19 + 0x10;
      lVar19 = lVar19 + 0x10;
    }
  }
LAB_1409bceca:
                    /* WARNING: Subroutine does not return */
  pdb_142dc8150(&UNK_14302b2d0);
LAB_1409bce1a:
  uVar28 = uVar28 & plVar29[1];
  auVar39 = *(undefined1 (*) [16])(lVar8 + uVar28);
  auVar36[0] = -(auVar39[0] == auVar32[0]);
  auVar36[1] = -(auVar39[1] == auVar32[1]);
  auVar36[2] = -(auVar39[2] == auVar32[2]);
  auVar36[3] = -(auVar39[3] == auVar32[3]);
  auVar36[4] = -(auVar39[4] == auVar32[4]);
  auVar36[5] = -(auVar39[5] == auVar32[5]);
  auVar36[6] = -(auVar39[6] == auVar32[6]);
  auVar36[7] = -(auVar39[7] == auVar32[7]);
  auVar36[8] = -(auVar39[8] == auVar32[0]);
  auVar36[9] = -(auVar39[9] == auVar32[1]);
  auVar36[10] = -(auVar39[10] == auVar32[2]);
  auVar36[0xb] = -(auVar39[0xb] == auVar32[3]);
  auVar36[0xc] = -(auVar39[0xc] == auVar32[4]);
  auVar36[0xd] = -(auVar39[0xd] == auVar32[5]);
  auVar36[0xe] = -(auVar39[0xe] == auVar32[6]);
  auVar36[0xf] = -(auVar39[0xf] == auVar32[7]);
  uVar26 = (ushort)(SUB161(auVar36 >> 7,0) & 1) | (ushort)(SUB161(auVar36 >> 0xf,0) & 1) << 1 |
           (ushort)(SUB161(auVar36 >> 0x17,0) & 1) << 2 |
           (ushort)(SUB161(auVar36 >> 0x1f,0) & 1) << 3 |
           (ushort)(SUB161(auVar36 >> 0x27,0) & 1) << 4 |
           (ushort)(SUB161(auVar36 >> 0x2f,0) & 1) << 5 |
           (ushort)(SUB161(auVar36 >> 0x37,0) & 1) << 6 |
           (ushort)(SUB161(auVar36 >> 0x3f,0) & 1) << 7 |
           (ushort)(SUB161(auVar36 >> 0x47,0) & 1) << 8 |
           (ushort)(SUB161(auVar36 >> 0x4f,0) & 1) << 9 |
           (ushort)(SUB161(auVar36 >> 0x57,0) & 1) << 10 |
           (ushort)(SUB161(auVar36 >> 0x5f,0) & 1) << 0xb |
           (ushort)(SUB161(auVar36 >> 0x67,0) & 1) << 0xc |
           (ushort)(SUB161(auVar36 >> 0x6f,0) & 1) << 0xd |
           (ushort)(SUB161(auVar36 >> 0x77,0) & 1) << 0xe | (ushort)(auVar36[0xf] >> 7) << 0xf;
  uVar16 = (uint)uVar26;
  while (uVar26 != 0) {
    uVar18 = 0;
    for (uVar6 = uVar16; (uVar6 & 1) == 0; uVar6 = uVar6 >> 1 | 0x80000000) {
      uVar18 = uVar18 + 1;
    }
    lVar20 = (uVar18 + uVar28 & plVar29[1]) * -0x30;
    if (uVar17 == *(ulonglong *)(lVar8 + -0x30 + lVar20)) {
      lVar8 = lVar8 + lVar20;
      lVar19 = pdb_141a076a0(param_5,lVar8 + -0x28);
      uVar9 = pdb_140e17290(lVar8 + -0x10,lVar19);
      *(byte *)(lVar19 + 0x28a) = *(byte *)(lVar19 + 0x28a) | 1;
      *(undefined8 *)(lVar19 + 200) = uVar9;
      if (*(char *)(lVar8 + -4) == '\0') {
        pdb_140e25450(param_5);
      }
      else {
        *(byte *)(param_5 + 0x288) = *(byte *)(param_5 + 0x288) | 0x80;
        *(byte *)(param_5 + 0x83) = *(byte *)(param_5 + 0x83) | 2;
        *(undefined1 *)(param_5 + 0x82) = 0;
      }
      if ((param_4 & 0xffffffff) == 0) {
                    /* WARNING: Subroutine does not return */
        pdb_142dc83d0(&UNK_14302b5ec,99,&UNK_14302b680);
      }
      uVar17 = param_4 & 0xffffffff ^ 0xffffffff;
      if (((*(ulonglong *)(param_2 + 0x10) <= uVar17) ||
          (piVar10 = (int *)(uVar17 * 0x18 + *(longlong *)(param_2 + 8)),
          piVar10[4] != (int)(param_4 >> 0x20))) || (iVar27 = *piVar10, iVar27 == 0)) {
        uStack_b0 = param_4;
                    /* WARNING: Subroutine does not return */
        pdb_142dc8170(&UNK_14302b558,0x2b,&uStack_b0,&UNK_14302b538,&UNK_14302b300);
      }
      uVar16 = *(uint *)(lVar8 + -8);
      uVar17 = *(ulonglong *)(piVar10 + 2);
      iVar5 = piVar10[1];
      puVar14 = (ushort *)(ulonglong)*(uint *)(param_2 + 0x5a8);
      uVar28 = param_5;
      if (*(longlong *)(param_2 + 0x68) == 0) goto LAB_1409bd0dd;
      puVar14 = (ushort *)CONCAT44(*(uint *)(param_2 + 0x5a8),*(undefined4 *)(param_2 + 0x5ac));
      uVar28 = uVar17 >> 0x20;
      lVar8 = *(longlong *)(param_2 + 0x50);
      uVar13 = 0x6739c6660566e7a3;
      lVar19 = 0;
      goto LAB_1409bcf8c;
    }
    uVar26 = (ushort)(uVar16 - 1) & (ushort)uVar16;
    uVar16 = CONCAT22((short)(uVar16 - 1 >> 0x10),uVar26);
  }
  auVar34[0] = -(auVar39[0] == -1);
  auVar34[1] = -(auVar39[1] == -1);
  auVar34[2] = -(auVar39[2] == -1);
  auVar34[3] = -(auVar39[3] == -1);
  auVar34[4] = -(auVar39[4] == -1);
  auVar34[5] = -(auVar39[5] == -1);
  auVar34[6] = -(auVar39[6] == -1);
  auVar34[7] = -(auVar39[7] == -1);
  auVar34[8] = -(auVar39[8] == -1);
  auVar34[9] = -(auVar39[9] == -1);
  auVar34[10] = -(auVar39[10] == -1);
  auVar34[0xb] = -(auVar39[0xb] == -1);
  auVar34[0xc] = -(auVar39[0xc] == -1);
  auVar34[0xd] = -(auVar39[0xd] == -1);
  auVar34[0xe] = -(auVar39[0xe] == -1);
  auVar34[0xf] = -(auVar39[0xf] == -1);
  if ((((((((((((((((SUB161(auVar34 >> 7,0) & 1) != 0 || (SUB161(auVar34 >> 0xf,0) & 1) != 0) ||
                  (SUB161(auVar34 >> 0x17,0) & 1) != 0) || (SUB161(auVar34 >> 0x1f,0) & 1) != 0) ||
                (SUB161(auVar34 >> 0x27,0) & 1) != 0) || (SUB161(auVar34 >> 0x2f,0) & 1) != 0) ||
              (SUB161(auVar34 >> 0x37,0) & 1) != 0) || (SUB161(auVar34 >> 0x3f,0) & 1) != 0) ||
            (SUB161(auVar34 >> 0x47,0) & 1) != 0) || (SUB161(auVar34 >> 0x4f,0) & 1) != 0) ||
          (SUB161(auVar34 >> 0x57,0) & 1) != 0) || (SUB161(auVar34 >> 0x5f,0) & 1) != 0) ||
        (SUB161(auVar34 >> 0x67,0) & 1) != 0) || (SUB161(auVar34 >> 0x6f,0) & 1) != 0) ||
      (SUB161(auVar34 >> 0x77,0) & 1) != 0) || auVar34[0xf] < '\0') {
LAB_1409bced6:
                    /* WARNING: Subroutine does not return */
    pdb_142dc8150(&UNK_14302b2e8);
  }
  uVar28 = uVar28 + lVar19 + 0x10;
  lVar19 = lVar19 + 0x10;
  goto LAB_1409bce1a;
LAB_1409bcf8c:
  uVar13 = uVar13 & *(ulonglong *)(param_2 + 0x58);
  auVar32 = *(undefined1 (*) [16])(lVar8 + uVar13);
  auVar41[0] = -(auVar32[0] == DAT_142e33db0);
  auVar41[1] = -(auVar32[1] == DAT_142e33db0._1_1_);
  auVar41[2] = -(auVar32[2] == DAT_142e33db0._2_1_);
  auVar41[3] = -(auVar32[3] == DAT_142e33db0._3_1_);
  auVar41[4] = -(auVar32[4] == DAT_142e33db0._4_1_);
  auVar41[5] = -(auVar32[5] == DAT_142e33db0._5_1_);
  auVar41[6] = -(auVar32[6] == DAT_142e33db0._6_1_);
  auVar41[7] = -(auVar32[7] == DAT_142e33db0._7_1_);
  auVar41[8] = -(auVar32[8] == DAT_142e33db0._8_1_);
  auVar41[9] = -(auVar32[9] == DAT_142e33db0._9_1_);
  auVar41[10] = -(auVar32[10] == DAT_142e33db0._10_1_);
  auVar41[0xb] = -(auVar32[0xb] == DAT_142e33db0._11_1_);
  auVar41[0xc] = -(auVar32[0xc] == DAT_142e33db0._12_1_);
  auVar41[0xd] = -(auVar32[0xd] == DAT_142e33db0._13_1_);
  auVar41[0xe] = -(auVar32[0xe] == DAT_142e33db0._14_1_);
  auVar41[0xf] = -(auVar32[0xf] == DAT_142e33db0._15_1_);
  uVar26 = (ushort)(SUB161(auVar41 >> 7,0) & 1) | (ushort)(SUB161(auVar41 >> 0xf,0) & 1) << 1 |
           (ushort)(SUB161(auVar41 >> 0x17,0) & 1) << 2 |
           (ushort)(SUB161(auVar41 >> 0x1f,0) & 1) << 3 |
           (ushort)(SUB161(auVar41 >> 0x27,0) & 1) << 4 |
           (ushort)(SUB161(auVar41 >> 0x2f,0) & 1) << 5 |
           (ushort)(SUB161(auVar41 >> 0x37,0) & 1) << 6 |
           (ushort)(SUB161(auVar41 >> 0x3f,0) & 1) << 7 |
           (ushort)(SUB161(auVar41 >> 0x47,0) & 1) << 8 |
           (ushort)(SUB161(auVar41 >> 0x4f,0) & 1) << 9 |
           (ushort)(SUB161(auVar41 >> 0x57,0) & 1) << 10 |
           (ushort)(SUB161(auVar41 >> 0x5f,0) & 1) << 0xb |
           (ushort)(SUB161(auVar41 >> 0x67,0) & 1) << 0xc |
           (ushort)(SUB161(auVar41 >> 0x6f,0) & 1) << 0xd |
           (ushort)(SUB161(auVar41 >> 0x77,0) & 1) << 0xe | (ushort)(auVar41[0xf] >> 7) << 0xf;
  uVar24 = (ulonglong)uVar26;
  while (uVar26 != 0) {
    uVar18 = 0;
    for (uVar6 = (uint)uVar24; (uVar6 & 1) == 0; uVar6 = uVar6 >> 1 | 0x80000000) {
      uVar18 = uVar18 + 1;
    }
    uVar23 = uVar18 + uVar13 & *(ulonglong *)(param_2 + 0x58);
    uVar25 = uVar23 * -3;
    pcVar1 = (char *)(lVar8 + -0x18 + uVar23 * -0x18);
    auVar42[0] = -(*pcVar1 == DAT_14302a820);
    auVar42[1] = -(pcVar1[1] == DAT_14302a820._1_1_);
    auVar42[2] = -(pcVar1[2] == DAT_14302a820._2_1_);
    auVar42[3] = -(pcVar1[3] == DAT_14302a820._3_1_);
    auVar42[4] = -(pcVar1[4] == DAT_14302a820._4_1_);
    auVar42[5] = -(pcVar1[5] == DAT_14302a820._5_1_);
    auVar42[6] = -(pcVar1[6] == DAT_14302a820._6_1_);
    auVar42[7] = -(pcVar1[7] == DAT_14302a820._7_1_);
    auVar42[8] = -(pcVar1[8] == DAT_14302a820._8_1_);
    auVar42[9] = -(pcVar1[9] == DAT_14302a820._9_1_);
    auVar42[10] = -(pcVar1[10] == DAT_14302a820._10_1_);
    auVar42[0xb] = -(pcVar1[0xb] == DAT_14302a820._11_1_);
    auVar42[0xc] = -(pcVar1[0xc] == DAT_14302a820._12_1_);
    auVar42[0xd] = -(pcVar1[0xd] == DAT_14302a820._13_1_);
    auVar42[0xe] = -(pcVar1[0xe] == DAT_14302a820._14_1_);
    auVar42[0xf] = -(pcVar1[0xf] == DAT_14302a820._15_1_);
    if ((ushort)((ushort)(SUB161(auVar42 >> 7,0) & 1) | (ushort)(SUB161(auVar42 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar42 >> 0x17,0) & 1) << 2 |
                 (ushort)(SUB161(auVar42 >> 0x1f,0) & 1) << 3 |
                 (ushort)(SUB161(auVar42 >> 0x27,0) & 1) << 4 |
                 (ushort)(SUB161(auVar42 >> 0x2f,0) & 1) << 5 |
                 (ushort)(SUB161(auVar42 >> 0x37,0) & 1) << 6 |
                 (ushort)(SUB161(auVar42 >> 0x3f,0) & 1) << 7 |
                 (ushort)(SUB161(auVar42 >> 0x47,0) & 1) << 8 |
                 (ushort)(SUB161(auVar42 >> 0x4f,0) & 1) << 9 |
                 (ushort)(SUB161(auVar42 >> 0x57,0) & 1) << 10 |
                 (ushort)(SUB161(auVar42 >> 0x5f,0) & 1) << 0xb |
                 (ushort)(SUB161(auVar42 >> 0x67,0) & 1) << 0xc |
                 (ushort)(SUB161(auVar42 >> 0x6f,0) & 1) << 0xd |
                 (ushort)(SUB161(auVar42 >> 0x77,0) & 1) << 0xe | (ushort)(auVar42[0xf] >> 7) << 0xf
                ) == 0xffff) {
      if (*(ulonglong *)(param_2 + 0x1a8) <= uVar28) goto LAB_1409bd0dd;
      plVar29 = (longlong *)(uVar28 * 0x48);
      pfVar11 = (float *)pdb_140eff5a0(*(longlong *)(param_2 + 0x1a0) + (longlong)plVar29,
                                       *(undefined8 *)(lVar8 + uVar23 * -0x18 + -8));
      if (pfVar11 == (float *)0x0) goto LAB_1409bd0dd;
      unaff_XMM6_Da = *pfVar11;
      unaff_XMM7_Da = 0;
      if (*(longlong *)(param_2 + 0x68) == 0) goto LAB_1409bd121;
      lVar8 = *(longlong *)(param_2 + 0x50);
      uVar13 = 0x78b2c2905f29050e;
      lVar19 = 0;
      goto LAB_1409bd070;
    }
    iVar22 = (uint)uVar24 - 1;
    uVar26 = (ushort)iVar22 & (ushort)uVar24;
    uVar24 = (ulonglong)CONCAT22((short)((uint)iVar22 >> 0x10),uVar26);
    uVar25 = uVar24;
  }
  auVar37[0] = -(auVar32[0] == -1);
  auVar37[1] = -(auVar32[1] == -1);
  auVar37[2] = -(auVar32[2] == -1);
  auVar37[3] = -(auVar32[3] == -1);
  auVar37[4] = -(auVar32[4] == -1);
  auVar37[5] = -(auVar32[5] == -1);
  auVar37[6] = -(auVar32[6] == -1);
  auVar37[7] = -(auVar32[7] == -1);
  auVar37[8] = -(auVar32[8] == -1);
  auVar37[9] = -(auVar32[9] == -1);
  auVar37[10] = -(auVar32[10] == -1);
  auVar37[0xb] = -(auVar32[0xb] == -1);
  auVar37[0xc] = -(auVar32[0xc] == -1);
  auVar37[0xd] = -(auVar32[0xd] == -1);
  auVar37[0xe] = -(auVar32[0xe] == -1);
  auVar37[0xf] = -(auVar32[0xf] == -1);
  if ((((((((((((((((SUB161(auVar37 >> 7,0) & 1) != 0 || (SUB161(auVar37 >> 0xf,0) & 1) != 0) ||
                  (SUB161(auVar37 >> 0x17,0) & 1) != 0) || (SUB161(auVar37 >> 0x1f,0) & 1) != 0) ||
                (SUB161(auVar37 >> 0x27,0) & 1) != 0) || (SUB161(auVar37 >> 0x2f,0) & 1) != 0) ||
              (SUB161(auVar37 >> 0x37,0) & 1) != 0) || (SUB161(auVar37 >> 0x3f,0) & 1) != 0) ||
            (SUB161(auVar37 >> 0x47,0) & 1) != 0) || (SUB161(auVar37 >> 0x4f,0) & 1) != 0) ||
          (SUB161(auVar37 >> 0x57,0) & 1) != 0) || (SUB161(auVar37 >> 0x5f,0) & 1) != 0) ||
        (SUB161(auVar37 >> 0x67,0) & 1) != 0) || (SUB161(auVar37 >> 0x6f,0) & 1) != 0) ||
      (SUB161(auVar37 >> 0x77,0) & 1) != 0) || auVar37[0xf] < '\0') goto LAB_1409bd0dd;
  uVar13 = uVar13 + lVar19 + 0x10;
  lVar19 = lVar19 + 0x10;
  goto LAB_1409bcf8c;
LAB_1409bd070:
  uVar13 = uVar13 & *(ulonglong *)(param_2 + 0x58);
  pcVar1 = (char *)(lVar8 + uVar13);
  auVar32[0] = -(*pcVar1 == DAT_142e34c50);
  auVar32[1] = -(pcVar1[1] == DAT_142e34c50._1_1_);
  auVar32[2] = -(pcVar1[2] == DAT_142e34c50._2_1_);
  auVar32[3] = -(pcVar1[3] == DAT_142e34c50._3_1_);
  auVar32[4] = -(pcVar1[4] == DAT_142e34c50._4_1_);
  auVar32[5] = -(pcVar1[5] == DAT_142e34c50._5_1_);
  auVar32[6] = -(pcVar1[6] == DAT_142e34c50._6_1_);
  auVar32[7] = -(pcVar1[7] == DAT_142e34c50._7_1_);
  auVar32[8] = -(pcVar1[8] == DAT_142e34c50._8_1_);
  auVar32[9] = -(pcVar1[9] == DAT_142e34c50._9_1_);
  auVar32[10] = -(pcVar1[10] == DAT_142e34c50._10_1_);
  auVar32[0xb] = -(pcVar1[0xb] == DAT_142e34c50._11_1_);
  auVar32[0xc] = -(pcVar1[0xc] == DAT_142e34c50._12_1_);
  auVar32[0xd] = -(pcVar1[0xd] == DAT_142e34c50._13_1_);
  auVar32[0xe] = -(pcVar1[0xe] == DAT_142e34c50._14_1_);
  auVar32[0xf] = -(pcVar1[0xf] == DAT_142e34c50._15_1_);
  uVar26 = (ushort)(SUB161(auVar32 >> 7,0) & 1) | (ushort)(SUB161(auVar32 >> 0xf,0) & 1) << 1 |
           (ushort)(SUB161(auVar32 >> 0x17,0) & 1) << 2 |
           (ushort)(SUB161(auVar32 >> 0x1f,0) & 1) << 3 |
           (ushort)(SUB161(auVar32 >> 0x27,0) & 1) << 4 |
           (ushort)(SUB161(auVar32 >> 0x2f,0) & 1) << 5 |
           (ushort)(SUB161(auVar32 >> 0x37,0) & 1) << 6 |
           (ushort)(SUB161(auVar32 >> 0x3f,0) & 1) << 7 |
           (ushort)(SUB161(auVar32 >> 0x47,0) & 1) << 8 |
           (ushort)(SUB161(auVar32 >> 0x4f,0) & 1) << 9 |
           (ushort)(SUB161(auVar32 >> 0x57,0) & 1) << 10 |
           (ushort)(SUB161(auVar32 >> 0x5f,0) & 1) << 0xb |
           (ushort)(SUB161(auVar32 >> 0x67,0) & 1) << 0xc |
           (ushort)(SUB161(auVar32 >> 0x6f,0) & 1) << 0xd |
           (ushort)(SUB161(auVar32 >> 0x77,0) & 1) << 0xe | (ushort)(auVar32[0xf] >> 7) << 0xf;
  uVar18 = (uint)uVar26;
  while (uVar26 != 0) {
    uVar6 = 0;
    for (uVar7 = uVar18; (uVar7 & 1) == 0; uVar7 = uVar7 >> 1 | 0x80000000) {
      uVar6 = uVar6 + 1;
    }
    uVar24 = uVar6 + uVar13 & *(ulonglong *)(param_2 + 0x58);
    uVar25 = uVar24 * -3;
    pcVar2 = (char *)(lVar8 + -0x18 + uVar24 * -0x18);
    auVar43[0] = -(*pcVar2 == DAT_142f624f0);
    auVar43[1] = -(pcVar2[1] == UNK_142f624f1);
    auVar43[2] = -(pcVar2[2] == UNK_142f624f2);
    auVar43[3] = -(pcVar2[3] == UNK_142f624f3);
    auVar43[4] = -(pcVar2[4] == UNK_142f624f4);
    auVar43[5] = -(pcVar2[5] == UNK_142f624f5);
    auVar43[6] = -(pcVar2[6] == UNK_142f624f6);
    auVar43[7] = -(pcVar2[7] == UNK_142f624f7);
    auVar43[8] = -(pcVar2[8] == UNK_142f624f8);
    auVar43[9] = -(pcVar2[9] == UNK_142f624f9);
    auVar43[10] = -(pcVar2[10] == UNK_142f624fa);
    auVar43[0xb] = -(pcVar2[0xb] == UNK_142f624fb);
    auVar43[0xc] = -(pcVar2[0xc] == UNK_142f624fc);
    auVar43[0xd] = -(pcVar2[0xd] == UNK_142f624fd);
    auVar43[0xe] = -(pcVar2[0xe] == UNK_142f624fe);
    auVar43[0xf] = -(pcVar2[0xf] == UNK_142f624ff);
    if ((ushort)((ushort)(SUB161(auVar43 >> 7,0) & 1) | (ushort)(SUB161(auVar43 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar43 >> 0x17,0) & 1) << 2 |
                 (ushort)(SUB161(auVar43 >> 0x1f,0) & 1) << 3 |
                 (ushort)(SUB161(auVar43 >> 0x27,0) & 1) << 4 |
                 (ushort)(SUB161(auVar43 >> 0x2f,0) & 1) << 5 |
                 (ushort)(SUB161(auVar43 >> 0x37,0) & 1) << 6 |
                 (ushort)(SUB161(auVar43 >> 0x3f,0) & 1) << 7 |
                 (ushort)(SUB161(auVar43 >> 0x47,0) & 1) << 8 |
                 (ushort)(SUB161(auVar43 >> 0x4f,0) & 1) << 9 |
                 (ushort)(SUB161(auVar43 >> 0x57,0) & 1) << 10 |
                 (ushort)(SUB161(auVar43 >> 0x5f,0) & 1) << 0xb |
                 (ushort)(SUB161(auVar43 >> 0x67,0) & 1) << 0xc |
                 (ushort)(SUB161(auVar43 >> 0x6f,0) & 1) << 0xd |
                 (ushort)(SUB161(auVar43 >> 0x77,0) & 1) << 0xe | (ushort)(auVar43[0xf] >> 7) << 0xf
                ) == 0xffff) goto LAB_1409bd0f5;
    uVar26 = (ushort)(uVar18 - 1) & (ushort)uVar18;
    uVar18 = CONCAT22((short)(uVar18 - 1 >> 0x10),uVar26);
    uVar25 = (ulonglong)uVar18;
  }
  auVar38[0] = -(*pcVar1 == -1);
  auVar38[1] = -(pcVar1[1] == -1);
  auVar38[2] = -(pcVar1[2] == -1);
  auVar38[3] = -(pcVar1[3] == -1);
  auVar38[4] = -(pcVar1[4] == -1);
  auVar38[5] = -(pcVar1[5] == -1);
  auVar38[6] = -(pcVar1[6] == -1);
  auVar38[7] = -(pcVar1[7] == -1);
  auVar38[8] = -(pcVar1[8] == -1);
  auVar38[9] = -(pcVar1[9] == -1);
  auVar38[10] = -(pcVar1[10] == -1);
  auVar38[0xb] = -(pcVar1[0xb] == -1);
  auVar38[0xc] = -(pcVar1[0xc] == -1);
  auVar38[0xd] = -(pcVar1[0xd] == -1);
  auVar38[0xe] = -(pcVar1[0xe] == -1);
  auVar38[0xf] = -(pcVar1[0xf] == -1);
  if ((((((((((((((((SUB161(auVar38 >> 7,0) & 1) != 0 || (SUB161(auVar38 >> 0xf,0) & 1) != 0) ||
                  (SUB161(auVar38 >> 0x17,0) & 1) != 0) || (SUB161(auVar38 >> 0x1f,0) & 1) != 0) ||
                (SUB161(auVar38 >> 0x27,0) & 1) != 0) || (SUB161(auVar38 >> 0x2f,0) & 1) != 0) ||
              (SUB161(auVar38 >> 0x37,0) & 1) != 0) || (SUB161(auVar38 >> 0x3f,0) & 1) != 0) ||
            (SUB161(auVar38 >> 0x47,0) & 1) != 0) || (SUB161(auVar38 >> 0x4f,0) & 1) != 0) ||
          (SUB161(auVar38 >> 0x57,0) & 1) != 0) || (SUB161(auVar38 >> 0x5f,0) & 1) != 0) ||
        (SUB161(auVar38 >> 0x67,0) & 1) != 0) || (SUB161(auVar38 >> 0x6f,0) & 1) != 0) ||
      (SUB161(auVar38 >> 0x77,0) & 1) != 0) || auVar38[0xf] < '\0') goto LAB_1409bd121;
  uVar13 = uVar13 + lVar19 + 0x10;
  lVar19 = lVar19 + 0x10;
  goto LAB_1409bd070;
LAB_1409bd271:
  uVar17 = uVar17 & *(ulonglong *)(param_2 + 0x58);
  pcVar1 = (char *)(lVar8 + uVar17);
  auVar49[0] = -(*pcVar1 == DAT_142e34fb0);
  auVar49[1] = -(pcVar1[1] == UNK_142e34fb1);
  auVar49[2] = -(pcVar1[2] == UNK_142e34fb2);
  auVar49[3] = -(pcVar1[3] == UNK_142e34fb3);
  auVar49[4] = -(pcVar1[4] == UNK_142e34fb4);
  auVar49[5] = -(pcVar1[5] == UNK_142e34fb5);
  auVar49[6] = -(pcVar1[6] == UNK_142e34fb6);
  auVar49[7] = -(pcVar1[7] == UNK_142e34fb7);
  auVar49[8] = -(pcVar1[8] == UNK_142e34fb8);
  auVar49[9] = -(pcVar1[9] == UNK_142e34fb9);
  auVar49[10] = -(pcVar1[10] == UNK_142e34fba);
  auVar49[0xb] = -(pcVar1[0xb] == UNK_142e34fbb);
  auVar49[0xc] = -(pcVar1[0xc] == UNK_142e34fbc);
  auVar49[0xd] = -(pcVar1[0xd] == UNK_142e34fbd);
  auVar49[0xe] = -(pcVar1[0xe] == UNK_142e34fbe);
  auVar49[0xf] = -(pcVar1[0xf] == UNK_142e34fbf);
  uVar26 = (ushort)(SUB161(auVar49 >> 7,0) & 1) | (ushort)(SUB161(auVar49 >> 0xf,0) & 1) << 1 |
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
           (ushort)(SUB161(auVar49 >> 0x77,0) & 1) << 0xe | (ushort)(auVar49[0xf] >> 7) << 0xf;
  uVar18 = (uint)uVar26;
  while (uVar26 != 0) {
    uVar6 = 0;
    for (uVar7 = uVar18; (uVar7 & 1) == 0; uVar7 = uVar7 >> 1 | 0x80000000) {
      uVar6 = uVar6 + 1;
    }
    uVar13 = uVar6 + uVar17 & *(ulonglong *)(param_2 + 0x58);
    uVar25 = uVar13 * -3;
    pcVar2 = (char *)(lVar8 + -0x18 + uVar13 * -0x18);
    auVar50[0] = -(*pcVar2 == DAT_14302a830);
    auVar50[1] = -(pcVar2[1] == UNK_14302a831);
    auVar50[2] = -(pcVar2[2] == UNK_14302a832);
    auVar50[3] = -(pcVar2[3] == UNK_14302a833);
    auVar50[4] = -(pcVar2[4] == UNK_14302a834);
    auVar50[5] = -(pcVar2[5] == UNK_14302a835);
    auVar50[6] = -(pcVar2[6] == UNK_14302a836);
    auVar50[7] = -(pcVar2[7] == UNK_14302a837);
    auVar50[8] = -(pcVar2[8] == UNK_14302a838);
    auVar50[9] = -(pcVar2[9] == UNK_14302a839);
    auVar50[10] = -(pcVar2[10] == UNK_14302a83a);
    auVar50[0xb] = -(pcVar2[0xb] == UNK_14302a83b);
    auVar50[0xc] = -(pcVar2[0xc] == UNK_14302a83c);
    auVar50[0xd] = -(pcVar2[0xd] == UNK_14302a83d);
    auVar50[0xe] = -(pcVar2[0xe] == UNK_14302a83e);
    auVar50[0xf] = -(pcVar2[0xf] == UNK_14302a83f);
    puVar14 = puVar15;
    if ((ushort)((ushort)(SUB161(auVar50 >> 7,0) & 1) | (ushort)(SUB161(auVar50 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar50 >> 0x17,0) & 1) << 2 |
                 (ushort)(SUB161(auVar50 >> 0x1f,0) & 1) << 3 |
                 (ushort)(SUB161(auVar50 >> 0x27,0) & 1) << 4 |
                 (ushort)(SUB161(auVar50 >> 0x2f,0) & 1) << 5 |
                 (ushort)(SUB161(auVar50 >> 0x37,0) & 1) << 6 |
                 (ushort)(SUB161(auVar50 >> 0x3f,0) & 1) << 7 |
                 (ushort)(SUB161(auVar50 >> 0x47,0) & 1) << 8 |
                 (ushort)(SUB161(auVar50 >> 0x4f,0) & 1) << 9 |
                 (ushort)(SUB161(auVar50 >> 0x57,0) & 1) << 10 |
                 (ushort)(SUB161(auVar50 >> 0x5f,0) & 1) << 0xb |
                 (ushort)(SUB161(auVar50 >> 0x67,0) & 1) << 0xc |
                 (ushort)(SUB161(auVar50 >> 0x6f,0) & 1) << 0xd |
                 (ushort)(SUB161(auVar50 >> 0x77,0) & 1) << 0xe | (ushort)(auVar50[0xf] >> 7) << 0xf
                ) == 0xffff) goto LAB_1409bd2f6;
    uVar26 = (ushort)(uVar18 - 1) & (ushort)uVar18;
    uVar18 = CONCAT22((short)(uVar18 - 1 >> 0x10),uVar26);
  }
  auVar45[0] = -(*pcVar1 == -1);
  auVar45[1] = -(pcVar1[1] == -1);
  auVar45[2] = -(pcVar1[2] == -1);
  auVar45[3] = -(pcVar1[3] == -1);
  auVar45[4] = -(pcVar1[4] == -1);
  auVar45[5] = -(pcVar1[5] == -1);
  auVar45[6] = -(pcVar1[6] == -1);
  auVar45[7] = -(pcVar1[7] == -1);
  auVar45[8] = -(pcVar1[8] == -1);
  auVar45[9] = -(pcVar1[9] == -1);
  auVar45[10] = -(pcVar1[10] == -1);
  auVar45[0xb] = -(pcVar1[0xb] == -1);
  auVar45[0xc] = -(pcVar1[0xc] == -1);
  auVar45[0xd] = -(pcVar1[0xd] == -1);
  auVar45[0xe] = -(pcVar1[0xe] == -1);
  auVar45[0xf] = -(pcVar1[0xf] == -1);
  if ((((((((((((((((SUB161(auVar45 >> 7,0) & 1) != 0 || (SUB161(auVar45 >> 0xf,0) & 1) != 0) ||
                  (SUB161(auVar45 >> 0x17,0) & 1) != 0) || (SUB161(auVar45 >> 0x1f,0) & 1) != 0) ||
                (SUB161(auVar45 >> 0x27,0) & 1) != 0) || (SUB161(auVar45 >> 0x2f,0) & 1) != 0) ||
              (SUB161(auVar45 >> 0x37,0) & 1) != 0) || (SUB161(auVar45 >> 0x3f,0) & 1) != 0) ||
            (SUB161(auVar45 >> 0x47,0) & 1) != 0) || (SUB161(auVar45 >> 0x4f,0) & 1) != 0) ||
          (SUB161(auVar45 >> 0x57,0) & 1) != 0) || (SUB161(auVar45 >> 0x5f,0) & 1) != 0) ||
        (SUB161(auVar45 >> 0x67,0) & 1) != 0) || (SUB161(auVar45 >> 0x6f,0) & 1) != 0) ||
      (SUB161(auVar45 >> 0x77,0) & 1) != 0) || auVar45[0xf] < '\0') goto LAB_1409bd330;
  uVar17 = uVar17 + lVar19 + 0x10;
  lVar19 = lVar19 + 0x10;
  goto LAB_1409bd271;
LAB_1409bd0dd:
  lVar8 = pdb_142dc8110(&UNK_14302b318,0x26);
LAB_1409bd0f5:
  if ((uVar28 < *(ulonglong *)(param_2 + 0x1a8)) &&
     (puVar12 = (undefined4 *)
                pdb_140eff5a0(*(longlong *)(param_2 + 0x1a0) + (longlong)plVar29,
                              *(undefined8 *)(lVar8 + uVar25 * 8 + -8)),
     puVar12 != (undefined4 *)0x0)) {
    unaff_XMM7_Da = *puVar12;
  }
LAB_1409bd121:
  uStack_b0 = param_4;
  iStack_a8 = iVar27;
  iStack_a4 = iVar5;
  uStack_a0 = uVar17;
  lStack_98 = param_2;
  puStack_90 = puVar14;
  uVar31 = pdb_1409ba9f0(param_2,&uStack_b0);
  if (*(longlong *)(param_2 + 0x88) != 0) {
    lVar8 = *(longlong *)(param_2 + 0x70);
    uVar17 = 0xcda1f14a4c73f628;
    lVar19 = 0;
    while( true ) {
      uVar17 = uVar17 & *(ulonglong *)(param_2 + 0x78);
      pcVar1 = (char *)(lVar8 + uVar17);
      auVar47[0] = -(*pcVar1 == DAT_142e35050);
      auVar47[1] = -(pcVar1[1] == UNK_142e35051);
      auVar47[2] = -(pcVar1[2] == UNK_142e35052);
      auVar47[3] = -(pcVar1[3] == UNK_142e35053);
      auVar47[4] = -(pcVar1[4] == UNK_142e35054);
      auVar47[5] = -(pcVar1[5] == UNK_142e35055);
      auVar47[6] = -(pcVar1[6] == UNK_142e35056);
      auVar47[7] = -(pcVar1[7] == UNK_142e35057);
      auVar47[8] = -(pcVar1[8] == UNK_142e35058);
      auVar47[9] = -(pcVar1[9] == UNK_142e35059);
      auVar47[10] = -(pcVar1[10] == UNK_142e3505a);
      auVar47[0xb] = -(pcVar1[0xb] == UNK_142e3505b);
      auVar47[0xc] = -(pcVar1[0xc] == UNK_142e3505c);
      auVar47[0xd] = -(pcVar1[0xd] == UNK_142e3505d);
      auVar47[0xe] = -(pcVar1[0xe] == UNK_142e3505e);
      auVar47[0xf] = -(pcVar1[0xf] == UNK_142e3505f);
      uVar26 = (ushort)(SUB161(auVar47 >> 7,0) & 1) | (ushort)(SUB161(auVar47 >> 0xf,0) & 1) << 1 |
               (ushort)(SUB161(auVar47 >> 0x17,0) & 1) << 2 |
               (ushort)(SUB161(auVar47 >> 0x1f,0) & 1) << 3 |
               (ushort)(SUB161(auVar47 >> 0x27,0) & 1) << 4 |
               (ushort)(SUB161(auVar47 >> 0x2f,0) & 1) << 5 |
               (ushort)(SUB161(auVar47 >> 0x37,0) & 1) << 6 |
               (ushort)(SUB161(auVar47 >> 0x3f,0) & 1) << 7 |
               (ushort)(SUB161(auVar47 >> 0x47,0) & 1) << 8 |
               (ushort)(SUB161(auVar47 >> 0x4f,0) & 1) << 9 |
               (ushort)(SUB161(auVar47 >> 0x57,0) & 1) << 10 |
               (ushort)(SUB161(auVar47 >> 0x5f,0) & 1) << 0xb |
               (ushort)(SUB161(auVar47 >> 0x67,0) & 1) << 0xc |
               (ushort)(SUB161(auVar47 >> 0x6f,0) & 1) << 0xd |
               (ushort)(SUB161(auVar47 >> 0x77,0) & 1) << 0xe | (ushort)(auVar47[0xf] >> 7) << 0xf;
      uVar18 = (uint)uVar26;
      while (uVar26 != 0) {
        uVar6 = 0;
        for (uVar7 = uVar18; (uVar7 & 1) == 0; uVar7 = uVar7 >> 1 | 0x80000000) {
          uVar6 = uVar6 + 1;
        }
        uVar13 = uVar6 + uVar17 & *(ulonglong *)(param_2 + 0x78);
        uVar25 = uVar13 * -3;
        pcVar2 = (char *)(lVar8 + -0x18 + uVar13 * -0x18);
        auVar48[0] = -(*pcVar2 == DAT_142e42300);
        auVar48[1] = -(pcVar2[1] == UNK_142e42301);
        auVar48[2] = -(pcVar2[2] == UNK_142e42302);
        auVar48[3] = -(pcVar2[3] == UNK_142e42303);
        auVar48[4] = -(pcVar2[4] == UNK_142e42304);
        auVar48[5] = -(pcVar2[5] == UNK_142e42305);
        auVar48[6] = -(pcVar2[6] == UNK_142e42306);
        auVar48[7] = -(pcVar2[7] == UNK_142e42307);
        auVar48[8] = -(pcVar2[8] == UNK_142e42308);
        auVar48[9] = -(pcVar2[9] == UNK_142e42309);
        auVar48[10] = -(pcVar2[10] == UNK_142e4230a);
        auVar48[0xb] = -(pcVar2[0xb] == UNK_142e4230b);
        auVar48[0xc] = -(pcVar2[0xc] == UNK_142e4230c);
        auVar48[0xd] = -(pcVar2[0xd] == UNK_142e4230d);
        auVar48[0xe] = -(pcVar2[0xe] == UNK_142e4230e);
        auVar48[0xf] = -(pcVar2[0xf] == UNK_142e4230f);
        if ((ushort)((ushort)(SUB161(auVar48 >> 7,0) & 1) |
                     (ushort)(SUB161(auVar48 >> 0xf,0) & 1) << 1 |
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
                     (ushort)(SUB161(auVar48 >> 0x77,0) & 1) << 0xe |
                    (ushort)(auVar48[0xf] >> 7) << 0xf) == 0xffff) {
          uVar17 = *(ulonglong *)(lVar8 + uVar13 * -0x18 + -8);
          if ((*(ulonglong *)(param_2 + 0x210) <= uVar17) ||
             (uVar17 = *(ulonglong *)(*(longlong *)(param_2 + 0x208) + uVar17 * 8), uVar17 == 0))
          goto LAB_1409bd2de;
          lVar8 = ~uVar17 * 0x40;
          if (*(longlong *)(*(longlong *)(param_2 + 0x1d8) + 0x20 + lVar8) == 0) goto LAB_1409bd2de;
          puVar15 = *(ushort **)(*(longlong *)(param_2 + 0x1d8) + lVar8 + 0x10);
          if (*(longlong *)(param_2 + 0x68) == 0) goto LAB_1409bd330;
          lVar8 = *(longlong *)(param_2 + 0x50);
          uVar17 = 0x3fd2c4ba1caaea95;
          lVar19 = 0;
          goto LAB_1409bd271;
        }
        uVar26 = (ushort)(uVar18 - 1) & (ushort)uVar18;
        uVar18 = CONCAT22((short)(uVar18 - 1 >> 0x10),uVar26);
        uVar25 = (ulonglong)uVar18;
      }
      auVar44[0] = -(*pcVar1 == -1);
      auVar44[1] = -(pcVar1[1] == -1);
      auVar44[2] = -(pcVar1[2] == -1);
      auVar44[3] = -(pcVar1[3] == -1);
      auVar44[4] = -(pcVar1[4] == -1);
      auVar44[5] = -(pcVar1[5] == -1);
      auVar44[6] = -(pcVar1[6] == -1);
      auVar44[7] = -(pcVar1[7] == -1);
      auVar44[8] = -(pcVar1[8] == -1);
      auVar44[9] = -(pcVar1[9] == -1);
      auVar44[10] = -(pcVar1[10] == -1);
      auVar44[0xb] = -(pcVar1[0xb] == -1);
      auVar44[0xc] = -(pcVar1[0xc] == -1);
      auVar44[0xd] = -(pcVar1[0xd] == -1);
      auVar44[0xe] = -(pcVar1[0xe] == -1);
      auVar44[0xf] = -(pcVar1[0xf] == -1);
      if ((((((((((((((((SUB161(auVar44 >> 7,0) & 1) != 0 || (SUB161(auVar44 >> 0xf,0) & 1) != 0) ||
                      (SUB161(auVar44 >> 0x17,0) & 1) != 0) || (SUB161(auVar44 >> 0x1f,0) & 1) != 0)
                    || (SUB161(auVar44 >> 0x27,0) & 1) != 0) || (SUB161(auVar44 >> 0x2f,0) & 1) != 0
                   ) || (SUB161(auVar44 >> 0x37,0) & 1) != 0) ||
                 (SUB161(auVar44 >> 0x3f,0) & 1) != 0) || (SUB161(auVar44 >> 0x47,0) & 1) != 0) ||
               (SUB161(auVar44 >> 0x4f,0) & 1) != 0) || (SUB161(auVar44 >> 0x57,0) & 1) != 0) ||
             (SUB161(auVar44 >> 0x5f,0) & 1) != 0) || (SUB161(auVar44 >> 0x67,0) & 1) != 0) ||
           (SUB161(auVar44 >> 0x6f,0) & 1) != 0) || (SUB161(auVar44 >> 0x77,0) & 1) != 0) ||
          auVar44[0xf] < '\0') break;
      uVar17 = uVar17 + lVar19 + 0x10;
      lVar19 = lVar19 + 0x10;
    }
  }
LAB_1409bd2de:
  lVar8 = pdb_142dc8110(&UNK_14302b358,0x1c);
  uVar31 = extraout_XMM0_Da;
LAB_1409bd2f6:
  puVar15 = puVar14;
  if (uVar28 < *(ulonglong *)(param_2 + 0x1a8)) {
    lVar8 = pdb_140eff5a0((longlong)plVar29 + *(longlong *)(param_2 + 0x1a0),
                          *(undefined8 *)(lVar8 + uVar25 * 8 + -8));
    lVar19 = 2;
    if (lVar8 != 0) goto LAB_1409bd339;
  }
LAB_1409bd330:
  puVar14 = puVar15 + 4;
  lVar19 = 10;
LAB_1409bd339:
  if (*(longlong *)(param_2 + 0x88) != 0) {
    uVar26 = *(ushort *)((longlong)puVar15 + lVar19);
    uVar4 = *puVar14;
    lVar8 = *(longlong *)(param_2 + 0x70);
    uVar17 = 0x7d09499a2a58ccaf;
    lVar19 = 0;
    while( true ) {
      uVar17 = uVar17 & *(ulonglong *)(param_2 + 0x78);
      pcVar1 = (char *)(lVar8 + uVar17);
      auVar51[0] = -(*pcVar1 == DAT_142e34280);
      auVar51[1] = -(pcVar1[1] == DAT_142e34280._1_1_);
      auVar51[2] = -(pcVar1[2] == DAT_142e34280._2_1_);
      auVar51[3] = -(pcVar1[3] == DAT_142e34280._3_1_);
      auVar51[4] = -(pcVar1[4] == DAT_142e34280._4_1_);
      auVar51[5] = -(pcVar1[5] == DAT_142e34280._5_1_);
      auVar51[6] = -(pcVar1[6] == DAT_142e34280._6_1_);
      auVar51[7] = -(pcVar1[7] == DAT_142e34280._7_1_);
      auVar51[8] = -(pcVar1[8] == DAT_142e34280._8_1_);
      auVar51[9] = -(pcVar1[9] == DAT_142e34280._9_1_);
      auVar51[10] = -(pcVar1[10] == DAT_142e34280._10_1_);
      auVar51[0xb] = -(pcVar1[0xb] == DAT_142e34280._11_1_);
      auVar51[0xc] = -(pcVar1[0xc] == DAT_142e34280._12_1_);
      auVar51[0xd] = -(pcVar1[0xd] == DAT_142e34280._13_1_);
      auVar51[0xe] = -(pcVar1[0xe] == DAT_142e34280._14_1_);
      auVar51[0xf] = -(pcVar1[0xf] == DAT_142e34280._15_1_);
      uVar21 = (ushort)(SUB161(auVar51 >> 7,0) & 1) | (ushort)(SUB161(auVar51 >> 0xf,0) & 1) << 1 |
               (ushort)(SUB161(auVar51 >> 0x17,0) & 1) << 2 |
               (ushort)(SUB161(auVar51 >> 0x1f,0) & 1) << 3 |
               (ushort)(SUB161(auVar51 >> 0x27,0) & 1) << 4 |
               (ushort)(SUB161(auVar51 >> 0x2f,0) & 1) << 5 |
               (ushort)(SUB161(auVar51 >> 0x37,0) & 1) << 6 |
               (ushort)(SUB161(auVar51 >> 0x3f,0) & 1) << 7 |
               (ushort)(SUB161(auVar51 >> 0x47,0) & 1) << 8 |
               (ushort)(SUB161(auVar51 >> 0x4f,0) & 1) << 9 |
               (ushort)(SUB161(auVar51 >> 0x57,0) & 1) << 10 |
               (ushort)(SUB161(auVar51 >> 0x5f,0) & 1) << 0xb |
               (ushort)(SUB161(auVar51 >> 0x67,0) & 1) << 0xc |
               (ushort)(SUB161(auVar51 >> 0x6f,0) & 1) << 0xd |
               (ushort)(SUB161(auVar51 >> 0x77,0) & 1) << 0xe | (ushort)(auVar51[0xf] >> 7) << 0xf;
      uVar18 = (uint)uVar21;
      while (uVar21 != 0) {
        uVar6 = 0;
        for (uVar7 = uVar18; (uVar7 & 1) == 0; uVar7 = uVar7 >> 1 | 0x80000000) {
          uVar6 = uVar6 + 1;
        }
        uVar25 = uVar6 + uVar17 & *(ulonglong *)(param_2 + 0x78);
        pcVar2 = (char *)(lVar8 + -0x18 + uVar25 * -0x18);
        auVar52[0] = -(*pcVar2 == DAT_142e42330);
        auVar52[1] = -(pcVar2[1] == DAT_142e42330._1_1_);
        auVar52[2] = -(pcVar2[2] == DAT_142e42330._2_1_);
        auVar52[3] = -(pcVar2[3] == DAT_142e42330._3_1_);
        auVar52[4] = -(pcVar2[4] == DAT_142e42330._4_1_);
        auVar52[5] = -(pcVar2[5] == DAT_142e42330._5_1_);
        auVar52[6] = -(pcVar2[6] == DAT_142e42330._6_1_);
        auVar52[7] = -(pcVar2[7] == DAT_142e42330._7_1_);
        auVar52[8] = -(pcVar2[8] == DAT_142e42330._8_1_);
        auVar52[9] = -(pcVar2[9] == DAT_142e42330._9_1_);
        auVar52[10] = -(pcVar2[10] == DAT_142e42330._10_1_);
        auVar52[0xb] = -(pcVar2[0xb] == DAT_142e42330._11_1_);
        auVar52[0xc] = -(pcVar2[0xc] == DAT_142e42330._12_1_);
        auVar52[0xd] = -(pcVar2[0xd] == DAT_142e42330._13_1_);
        auVar52[0xe] = -(pcVar2[0xe] == DAT_142e42330._14_1_);
        auVar52[0xf] = -(pcVar2[0xf] == DAT_142e42330._15_1_);
        if ((ushort)((ushort)(SUB161(auVar52 >> 7,0) & 1) |
                     (ushort)(SUB161(auVar52 >> 0xf,0) & 1) << 1 |
                     (ushort)(SUB161(auVar52 >> 0x17,0) & 1) << 2 |
                     (ushort)(SUB161(auVar52 >> 0x1f,0) & 1) << 3 |
                     (ushort)(SUB161(auVar52 >> 0x27,0) & 1) << 4 |
                     (ushort)(SUB161(auVar52 >> 0x2f,0) & 1) << 5 |
                     (ushort)(SUB161(auVar52 >> 0x37,0) & 1) << 6 |
                     (ushort)(SUB161(auVar52 >> 0x3f,0) & 1) << 7 |
                     (ushort)(SUB161(auVar52 >> 0x47,0) & 1) << 8 |
                     (ushort)(SUB161(auVar52 >> 0x4f,0) & 1) << 9 |
                     (ushort)(SUB161(auVar52 >> 0x57,0) & 1) << 10 |
                     (ushort)(SUB161(auVar52 >> 0x5f,0) & 1) << 0xb |
                     (ushort)(SUB161(auVar52 >> 0x67,0) & 1) << 0xc |
                     (ushort)(SUB161(auVar52 >> 0x6f,0) & 1) << 0xd |
                     (ushort)(SUB161(auVar52 >> 0x77,0) & 1) << 0xe |
                    (ushort)(auVar52[0xf] >> 7) << 0xf) == 0xffff) {
          uVar17 = *(ulonglong *)(lVar8 + uVar25 * -0x18 + -8);
          if ((uVar17 < *(ulonglong *)(param_2 + 0x210)) &&
             (uVar17 = *(ulonglong *)(*(longlong *)(param_2 + 0x208) + uVar17 * 8), uVar17 != 0)) {
            lVar8 = ~uVar17 * 0x40;
            if (*(longlong *)(*(longlong *)(param_2 + 0x1d8) + 0x20 + lVar8) != 0) {
              fVar3 = *(float *)(*(longlong *)(*(longlong *)(param_2 + 0x1d8) + lVar8 + 0x10) + 0xe8
                                );
              lVar8 = *(longlong *)(param_5 + 0x40);
              lVar19 = lVar8;
              if ((ulonglong)(*(longlong *)(param_5 + 0x30) - lVar8) < 0x18) {
                pdb_142d7f1b0(param_5 + 0x30,lVar8,0x18,1,1);
                lVar19 = *(longlong *)(param_5 + 0x40);
              }
              fVar33 = (float)uVar26 / _DAT_142e4bfe4;
              fVar53 = unaff_XMM6_Da * _DAT_142e36f50;
              lVar20 = *(longlong *)(param_5 + 0x38);
              *(uint *)(lVar20 + lVar19) = uVar16 / 6 + 1;
              *(float *)(lVar20 + 4 + lVar19) = fVar53 * fVar3 * fVar33;
              *(undefined4 *)(lVar20 + 8 + lVar19) = unaff_XMM7_Da;
              *(undefined4 *)(lVar20 + 0xc + lVar19) = uVar31;
              *(float *)(lVar20 + 0x10 + lVar19) = (float)uVar4;
              *(float *)(lVar20 + 0x14 + lVar19) = (float)uVar26;
              *(longlong *)(param_5 + 0x40) = lVar19 + 0x18;
              *(byte *)(param_5 + 0x28a) = *(byte *)(param_5 + 0x28a) | 0x20;
              *(int *)(param_5 + 0xf0) = (int)lVar8;
              *(undefined4 *)(param_5 + 0xf4) = 0;
              pdb_140e25490(param_5,uVar16,0,1);
              return;
            }
          }
          goto LAB_1409bd52b;
        }
        uVar21 = (ushort)(uVar18 - 1) & (ushort)uVar18;
        uVar18 = CONCAT22((short)(uVar18 - 1 >> 0x10),uVar21);
      }
      auVar46[0] = -(*pcVar1 == -1);
      auVar46[1] = -(pcVar1[1] == -1);
      auVar46[2] = -(pcVar1[2] == -1);
      auVar46[3] = -(pcVar1[3] == -1);
      auVar46[4] = -(pcVar1[4] == -1);
      auVar46[5] = -(pcVar1[5] == -1);
      auVar46[6] = -(pcVar1[6] == -1);
      auVar46[7] = -(pcVar1[7] == -1);
      auVar46[8] = -(pcVar1[8] == -1);
      auVar46[9] = -(pcVar1[9] == -1);
      auVar46[10] = -(pcVar1[10] == -1);
      auVar46[0xb] = -(pcVar1[0xb] == -1);
      auVar46[0xc] = -(pcVar1[0xc] == -1);
      auVar46[0xd] = -(pcVar1[0xd] == -1);
      auVar46[0xe] = -(pcVar1[0xe] == -1);
      auVar46[0xf] = -(pcVar1[0xf] == -1);
      if ((((((((((((((((SUB161(auVar46 >> 7,0) & 1) != 0 || (SUB161(auVar46 >> 0xf,0) & 1) != 0) ||
                      (SUB161(auVar46 >> 0x17,0) & 1) != 0) || (SUB161(auVar46 >> 0x1f,0) & 1) != 0)
                    || (SUB161(auVar46 >> 0x27,0) & 1) != 0) || (SUB161(auVar46 >> 0x2f,0) & 1) != 0
                   ) || (SUB161(auVar46 >> 0x37,0) & 1) != 0) ||
                 (SUB161(auVar46 >> 0x3f,0) & 1) != 0) || (SUB161(auVar46 >> 0x47,0) & 1) != 0) ||
               (SUB161(auVar46 >> 0x4f,0) & 1) != 0) || (SUB161(auVar46 >> 0x57,0) & 1) != 0) ||
             (SUB161(auVar46 >> 0x5f,0) & 1) != 0) || (SUB161(auVar46 >> 0x67,0) & 1) != 0) ||
           (SUB161(auVar46 >> 0x6f,0) & 1) != 0) || (SUB161(auVar46 >> 0x77,0) & 1) != 0) ||
          auVar46[0xf] < '\0') break;
      uVar17 = uVar17 + lVar19 + 0x10;
      lVar19 = lVar19 + 0x10;
    }
  }
LAB_1409bd52b:
  pdb_142dc8110(&UNK_14302b390,0x15,&UNK_14302b3a8);
LAB_1409bd543:
                    /* WARNING: Subroutine does not return */
  pdb_142dc83b0(&UNK_14302ac29,0x28,&UNK_14302b3c0);
}

