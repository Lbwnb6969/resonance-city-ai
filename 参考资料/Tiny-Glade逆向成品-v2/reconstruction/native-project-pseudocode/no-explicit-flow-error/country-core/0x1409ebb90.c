// VA 0x1409ebb90, PDB extent 1004 bytes
// country_core::systems::render_loop::menu_background::render_menu_bg
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/render_loop/menu_background.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::systems::render_loop::menu_background::render_menu_bg
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/render_loop/menu_background.rs
   Extent: 1004 */

void pdb_1409ebb90(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  char *pcVar1;
  char *pcVar2;
  char cVar3;
  undefined4 uVar4;
  ulonglong uVar5;
  ulonglong *puVar6;
  longlong *plVar7;
  uint uVar8;
  uint uVar9;
  longlong lVar10;
  uint uVar11;
  ulonglong uVar12;
  longlong lVar13;
  longlong lVar14;
  ushort uVar15;
  ulonglong uVar16;
  bool bVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auStack_98 [24];
  longlong lStack_80;
  undefined8 uStack_78;
  longlong lStack_60;
  longlong *plStack_58;
  undefined1 uStack_49;
  undefined8 uStack_48;
  
  uStack_48 = 0xfffffffffffffffe;
  if (*(longlong *)(param_2 + 0x88) != 0) {
    lVar10 = *(longlong *)(param_2 + 0x70);
    uVar5 = *(ulonglong *)(param_2 + 0x78);
    uVar12 = 0xf1335775cdf5bf9c;
    lVar13 = 0;
    while( true ) {
      uVar12 = uVar12 & uVar5;
      pcVar1 = (char *)(lVar10 + uVar12);
      auVar20[0] = -(*pcVar1 == DAT_142e34070);
      auVar20[1] = -(pcVar1[1] == UNK_142e34071);
      auVar20[2] = -(pcVar1[2] == UNK_142e34072);
      auVar20[3] = -(pcVar1[3] == UNK_142e34073);
      auVar20[4] = -(pcVar1[4] == UNK_142e34074);
      auVar20[5] = -(pcVar1[5] == UNK_142e34075);
      auVar20[6] = -(pcVar1[6] == UNK_142e34076);
      auVar20[7] = -(pcVar1[7] == UNK_142e34077);
      auVar20[8] = -(pcVar1[8] == UNK_142e34078);
      auVar20[9] = -(pcVar1[9] == UNK_142e34079);
      auVar20[10] = -(pcVar1[10] == UNK_142e3407a);
      auVar20[0xb] = -(pcVar1[0xb] == UNK_142e3407b);
      auVar20[0xc] = -(pcVar1[0xc] == UNK_142e3407c);
      auVar20[0xd] = -(pcVar1[0xd] == UNK_142e3407d);
      auVar20[0xe] = -(pcVar1[0xe] == UNK_142e3407e);
      auVar20[0xf] = -(pcVar1[0xf] == UNK_142e3407f);
      uVar15 = (ushort)(SUB161(auVar20 >> 7,0) & 1) | (ushort)(SUB161(auVar20 >> 0xf,0) & 1) << 1 |
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
      uVar11 = (uint)uVar15;
      while (uVar15 != 0) {
        uVar8 = 0;
        for (uVar9 = uVar11; (uVar9 & 1) == 0; uVar9 = uVar9 >> 1 | 0x80000000) {
          uVar8 = uVar8 + 1;
        }
        uVar16 = uVar8 + uVar12 & uVar5;
        pcVar2 = (char *)(lVar10 + -0x18 + uVar16 * -0x18);
        auVar21[0] = -(*pcVar2 == DAT_142e34080);
        auVar21[1] = -(pcVar2[1] == UNK_142e34081);
        auVar21[2] = -(pcVar2[2] == UNK_142e34082);
        auVar21[3] = -(pcVar2[3] == UNK_142e34083);
        auVar21[4] = -(pcVar2[4] == UNK_142e34084);
        auVar21[5] = -(pcVar2[5] == UNK_142e34085);
        auVar21[6] = -(pcVar2[6] == UNK_142e34086);
        auVar21[7] = -(pcVar2[7] == UNK_142e34087);
        auVar21[8] = -(pcVar2[8] == UNK_142e34088);
        auVar21[9] = -(pcVar2[9] == UNK_142e34089);
        auVar21[10] = -(pcVar2[10] == UNK_142e3408a);
        auVar21[0xb] = -(pcVar2[0xb] == UNK_142e3408b);
        auVar21[0xc] = -(pcVar2[0xc] == UNK_142e3408c);
        auVar21[0xd] = -(pcVar2[0xd] == UNK_142e3408d);
        auVar21[0xe] = -(pcVar2[0xe] == UNK_142e3408e);
        auVar21[0xf] = -(pcVar2[0xf] == UNK_142e3408f);
        if ((ushort)((ushort)(SUB161(auVar21 >> 7,0) & 1) |
                     (ushort)(SUB161(auVar21 >> 0xf,0) & 1) << 1 |
                     (ushort)(SUB161(auVar21 >> 0x17,0) & 1) << 2 |
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
                     (ushort)(SUB161(auVar21 >> 0x77,0) & 1) << 0xe |
                    (ushort)(auVar21[0xf] >> 7) << 0xf) == 0xffff) {
          uVar12 = *(ulonglong *)(lVar10 + uVar16 * -0x18 + -8);
          if (*(ulonglong *)(param_2 + 0x210) <= uVar12) goto LAB_1409ebd7f;
          uVar12 = *(ulonglong *)(*(longlong *)(param_2 + 0x208) + uVar12 * 8);
          if (uVar12 == 0) goto LAB_1409ebd7f;
          lVar13 = *(longlong *)(param_2 + 0x1d8);
          lVar14 = ~uVar12 * 0x40;
          if (*(longlong *)(lVar13 + 0x20 + lVar14) == 0) goto LAB_1409ebd7f;
          puVar6 = *(ulonglong **)(lVar14 + lVar13 + 0x10);
          uVar12 = *puVar6;
          uVar16 = 4;
          if (1 < uVar12) {
            uVar16 = uVar12 - 2;
          }
          if ((0x1aeUL >> (uVar16 & 0x3f) & 1) == 0) {
            return;
          }
          if (((int)uVar12 == 7) && ((char)puVar6[1] == '\x01')) {
            return;
          }
          uVar12 = 0x29934c72a0076d66;
          lVar14 = 0;
          goto LAB_1409ebd11;
        }
        uVar15 = (ushort)(uVar11 - 1) & (ushort)uVar11;
        uVar11 = CONCAT22((short)(uVar11 - 1 >> 0x10),uVar15);
      }
      auVar18[0] = -(*pcVar1 == -1);
      auVar18[1] = -(pcVar1[1] == -1);
      auVar18[2] = -(pcVar1[2] == -1);
      auVar18[3] = -(pcVar1[3] == -1);
      auVar18[4] = -(pcVar1[4] == -1);
      auVar18[5] = -(pcVar1[5] == -1);
      auVar18[6] = -(pcVar1[6] == -1);
      auVar18[7] = -(pcVar1[7] == -1);
      auVar18[8] = -(pcVar1[8] == -1);
      auVar18[9] = -(pcVar1[9] == -1);
      auVar18[10] = -(pcVar1[10] == -1);
      auVar18[0xb] = -(pcVar1[0xb] == -1);
      auVar18[0xc] = -(pcVar1[0xc] == -1);
      auVar18[0xd] = -(pcVar1[0xd] == -1);
      auVar18[0xe] = -(pcVar1[0xe] == -1);
      auVar18[0xf] = -(pcVar1[0xf] == -1);
      if ((((((((((((((((SUB161(auVar18 >> 7,0) & 1) != 0 || (SUB161(auVar18 >> 0xf,0) & 1) != 0) ||
                      (SUB161(auVar18 >> 0x17,0) & 1) != 0) || (SUB161(auVar18 >> 0x1f,0) & 1) != 0)
                    || (SUB161(auVar18 >> 0x27,0) & 1) != 0) || (SUB161(auVar18 >> 0x2f,0) & 1) != 0
                   ) || (SUB161(auVar18 >> 0x37,0) & 1) != 0) ||
                 (SUB161(auVar18 >> 0x3f,0) & 1) != 0) || (SUB161(auVar18 >> 0x47,0) & 1) != 0) ||
               (SUB161(auVar18 >> 0x4f,0) & 1) != 0) || (SUB161(auVar18 >> 0x57,0) & 1) != 0) ||
             (SUB161(auVar18 >> 0x5f,0) & 1) != 0) || (SUB161(auVar18 >> 0x67,0) & 1) != 0) ||
           (SUB161(auVar18 >> 0x6f,0) & 1) != 0) || (SUB161(auVar18 >> 0x77,0) & 1) != 0) ||
          auVar18[0xf] < '\0') break;
      uVar12 = uVar12 + lVar13 + 0x10;
      lVar13 = lVar13 + 0x10;
    }
  }
LAB_1409ebd7f:
                    /* WARNING: Subroutine does not return */
  pdb_142dc8150(&UNK_143032908);
LAB_1409ebd11:
  uVar12 = uVar12 & uVar5;
  auVar20 = *(undefined1 (*) [16])(lVar10 + uVar12);
  auVar22[0] = -(auVar20[0] == DAT_142e33d70);
  auVar22[1] = -(auVar20[1] == DAT_142e33d70._1_1_);
  auVar22[2] = -(auVar20[2] == DAT_142e33d70._2_1_);
  auVar22[3] = -(auVar20[3] == DAT_142e33d70._3_1_);
  auVar22[4] = -(auVar20[4] == DAT_142e33d70._4_1_);
  auVar22[5] = -(auVar20[5] == DAT_142e33d70._5_1_);
  auVar22[6] = -(auVar20[6] == DAT_142e33d70._6_1_);
  auVar22[7] = -(auVar20[7] == DAT_142e33d70._7_1_);
  auVar22[8] = -(auVar20[8] == DAT_142e33d70._8_1_);
  auVar22[9] = -(auVar20[9] == DAT_142e33d70._9_1_);
  auVar22[10] = -(auVar20[10] == DAT_142e33d70._10_1_);
  auVar22[0xb] = -(auVar20[0xb] == DAT_142e33d70._11_1_);
  auVar22[0xc] = -(auVar20[0xc] == DAT_142e33d70._12_1_);
  auVar22[0xd] = -(auVar20[0xd] == DAT_142e33d70._13_1_);
  auVar22[0xe] = -(auVar20[0xe] == DAT_142e33d70._14_1_);
  auVar22[0xf] = -(auVar20[0xf] == DAT_142e33d70._15_1_);
  uVar15 = (ushort)(SUB161(auVar22 >> 7,0) & 1) | (ushort)(SUB161(auVar22 >> 0xf,0) & 1) << 1 |
           (ushort)(SUB161(auVar22 >> 0x17,0) & 1) << 2 |
           (ushort)(SUB161(auVar22 >> 0x1f,0) & 1) << 3 |
           (ushort)(SUB161(auVar22 >> 0x27,0) & 1) << 4 |
           (ushort)(SUB161(auVar22 >> 0x2f,0) & 1) << 5 |
           (ushort)(SUB161(auVar22 >> 0x37,0) & 1) << 6 |
           (ushort)(SUB161(auVar22 >> 0x3f,0) & 1) << 7 |
           (ushort)(SUB161(auVar22 >> 0x47,0) & 1) << 8 |
           (ushort)(SUB161(auVar22 >> 0x4f,0) & 1) << 9 |
           (ushort)(SUB161(auVar22 >> 0x57,0) & 1) << 10 |
           (ushort)(SUB161(auVar22 >> 0x5f,0) & 1) << 0xb |
           (ushort)(SUB161(auVar22 >> 0x67,0) & 1) << 0xc |
           (ushort)(SUB161(auVar22 >> 0x6f,0) & 1) << 0xd |
           (ushort)(SUB161(auVar22 >> 0x77,0) & 1) << 0xe | (ushort)(auVar22[0xf] >> 7) << 0xf;
  uVar11 = (uint)uVar15;
  while (uVar15 != 0) {
    uVar8 = 0;
    for (uVar9 = uVar11; (uVar9 & 1) == 0; uVar9 = uVar9 >> 1 | 0x80000000) {
      uVar8 = uVar8 + 1;
    }
    uVar16 = uVar8 + uVar12 & uVar5;
    pcVar1 = (char *)(lVar10 + -0x18 + uVar16 * -0x18);
    auVar23[0] = -(*pcVar1 == DAT_142e34100);
    auVar23[1] = -(pcVar1[1] == DAT_142e34100._1_1_);
    auVar23[2] = -(pcVar1[2] == DAT_142e34100._2_1_);
    auVar23[3] = -(pcVar1[3] == DAT_142e34100._3_1_);
    auVar23[4] = -(pcVar1[4] == DAT_142e34100._4_1_);
    auVar23[5] = -(pcVar1[5] == DAT_142e34100._5_1_);
    auVar23[6] = -(pcVar1[6] == DAT_142e34100._6_1_);
    auVar23[7] = -(pcVar1[7] == DAT_142e34100._7_1_);
    auVar23[8] = -(pcVar1[8] == DAT_142e34100._8_1_);
    auVar23[9] = -(pcVar1[9] == DAT_142e34100._9_1_);
    auVar23[10] = -(pcVar1[10] == DAT_142e34100._10_1_);
    auVar23[0xb] = -(pcVar1[0xb] == DAT_142e34100._11_1_);
    auVar23[0xc] = -(pcVar1[0xc] == DAT_142e34100._12_1_);
    auVar23[0xd] = -(pcVar1[0xd] == DAT_142e34100._13_1_);
    auVar23[0xe] = -(pcVar1[0xe] == DAT_142e34100._14_1_);
    auVar23[0xf] = -(pcVar1[0xf] == DAT_142e34100._15_1_);
    if ((ushort)((ushort)(SUB161(auVar23 >> 7,0) & 1) | (ushort)(SUB161(auVar23 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar23 >> 0x17,0) & 1) << 2 |
                 (ushort)(SUB161(auVar23 >> 0x1f,0) & 1) << 3 |
                 (ushort)(SUB161(auVar23 >> 0x27,0) & 1) << 4 |
                 (ushort)(SUB161(auVar23 >> 0x2f,0) & 1) << 5 |
                 (ushort)(SUB161(auVar23 >> 0x37,0) & 1) << 6 |
                 (ushort)(SUB161(auVar23 >> 0x3f,0) & 1) << 7 |
                 (ushort)(SUB161(auVar23 >> 0x47,0) & 1) << 8 |
                 (ushort)(SUB161(auVar23 >> 0x4f,0) & 1) << 9 |
                 (ushort)(SUB161(auVar23 >> 0x57,0) & 1) << 10 |
                 (ushort)(SUB161(auVar23 >> 0x5f,0) & 1) << 0xb |
                 (ushort)(SUB161(auVar23 >> 0x67,0) & 1) << 0xc |
                 (ushort)(SUB161(auVar23 >> 0x6f,0) & 1) << 0xd |
                 (ushort)(SUB161(auVar23 >> 0x77,0) & 1) << 0xe | (ushort)(auVar23[0xf] >> 7) << 0xf
                ) == 0xffff) {
      uVar5 = *(ulonglong *)(lVar10 + uVar16 * -0x18 + -8);
      if (((uVar5 < *(ulonglong *)(param_2 + 0x210)) &&
          (uVar5 = *(ulonglong *)(*(longlong *)(param_2 + 0x208) + uVar5 * 8), uVar5 != 0)) &&
         (lVar10 = ~uVar5 * 0x40, *(longlong *)(lVar13 + 0x20 + lVar10) != 0)) {
        lVar13 = lVar13 + lVar10;
        plVar7 = *(longlong **)(lVar13 + 0x10);
        uVar4 = *(undefined4 *)(param_2 + 0x5a8);
        lVar10 = *plVar7;
        pcVar1 = (char *)(lVar10 + 0x10);
        LOCK();
        bVar17 = *(char *)(lVar10 + 0x10) == '\0';
        if (bVar17) {
          *(char *)(lVar10 + 0x10) = '\x01';
        }
        UNLOCK();
        if (!bVar17) {
          pdb_142dbd1a0(pcVar1,0xffffffff,1000000000);
        }
        pdb_140e9a150(pcVar1);
        lStack_80 = *(longlong *)(lVar10 + 0x18);
        *(undefined8 *)(lVar10 + 0x18) = 0;
        uStack_49 = 1;
        pdb_140e9a350();
        LOCK();
        cVar3 = *pcVar1;
        if (cVar3 == '\x01') {
          *pcVar1 = '\0';
        }
        UNLOCK();
        if (cVar3 != '\x01') {
          uStack_49 = 1;
          pdb_142dbcef0(pcVar1,0);
        }
        if (lStack_80 == 0) {
          lVar10 = plVar7[1];
          if (lVar10 == 0) {
            return;
          }
        }
        else {
          lStack_60 = lStack_80;
          *(undefined4 *)(lVar13 + 0x3c) = uVar4;
          plStack_58 = plVar7 + 1;
          if (plVar7[1] != 0) {
            pdb_14098a200(plStack_58);
          }
          *plStack_58 = lStack_60;
          lVar10 = lStack_60;
        }
        pdb_140e1ea30(auStack_98,lVar10,param_1,0x23,&UNK_143330ab0);
        lStack_80 = CONCAT44(lStack_80._4_4_,2);
        uStack_78 = param_3;
        pdb_14175d0b0(param_1,&UNK_143032938,7,&lStack_80,auStack_98);
        return;
      }
      goto LAB_1409ebe4b;
    }
    uVar15 = (ushort)(uVar11 - 1) & (ushort)uVar11;
    uVar11 = CONCAT22((short)(uVar11 - 1 >> 0x10),uVar15);
  }
  auVar19[0] = -(auVar20[0] == -1);
  auVar19[1] = -(auVar20[1] == -1);
  auVar19[2] = -(auVar20[2] == -1);
  auVar19[3] = -(auVar20[3] == -1);
  auVar19[4] = -(auVar20[4] == -1);
  auVar19[5] = -(auVar20[5] == -1);
  auVar19[6] = -(auVar20[6] == -1);
  auVar19[7] = -(auVar20[7] == -1);
  auVar19[8] = -(auVar20[8] == -1);
  auVar19[9] = -(auVar20[9] == -1);
  auVar19[10] = -(auVar20[10] == -1);
  auVar19[0xb] = -(auVar20[0xb] == -1);
  auVar19[0xc] = -(auVar20[0xc] == -1);
  auVar19[0xd] = -(auVar20[0xd] == -1);
  auVar19[0xe] = -(auVar20[0xe] == -1);
  auVar19[0xf] = -(auVar20[0xf] == -1);
  if ((((((((((((((((SUB161(auVar19 >> 7,0) & 1) != 0 || (SUB161(auVar19 >> 0xf,0) & 1) != 0) ||
                  (SUB161(auVar19 >> 0x17,0) & 1) != 0) || (SUB161(auVar19 >> 0x1f,0) & 1) != 0) ||
                (SUB161(auVar19 >> 0x27,0) & 1) != 0) || (SUB161(auVar19 >> 0x2f,0) & 1) != 0) ||
              (SUB161(auVar19 >> 0x37,0) & 1) != 0) || (SUB161(auVar19 >> 0x3f,0) & 1) != 0) ||
            (SUB161(auVar19 >> 0x47,0) & 1) != 0) || (SUB161(auVar19 >> 0x4f,0) & 1) != 0) ||
          (SUB161(auVar19 >> 0x57,0) & 1) != 0) || (SUB161(auVar19 >> 0x5f,0) & 1) != 0) ||
        (SUB161(auVar19 >> 0x67,0) & 1) != 0) || (SUB161(auVar19 >> 0x6f,0) & 1) != 0) ||
      (SUB161(auVar19 >> 0x77,0) & 1) != 0) || auVar19[0xf] < '\0') {
LAB_1409ebe4b:
                    /* WARNING: Subroutine does not return */
    pdb_142dc8150(&UNK_143032920);
  }
  uVar12 = uVar12 + lVar14 + 0x10;
  lVar14 = lVar14 + 0x10;
  goto LAB_1409ebd11;
}

