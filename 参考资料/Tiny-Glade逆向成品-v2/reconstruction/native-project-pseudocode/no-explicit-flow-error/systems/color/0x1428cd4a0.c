// VA 0x1428cd4a0, PDB extent 3190 bytes
// system_color::ui_color_gates::ui_color_gates
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/color/src/ui_color_gates.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: system_color::ui_color_gates::ui_color_gates
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/color/src/ui_color_gates.rs
   Extent: 3190 */

void pdb_1428cd4a0(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
                  longlong *param_5,longlong *param_6,undefined8 *param_7,longlong *param_8,
                  longlong *param_9,undefined8 *param_10)

{
  undefined8 *puVar1;
  undefined1 auVar2 [16];
  longlong lVar3;
  byte *******pppppppbVar4;
  byte *******pppppppbVar5;
  byte *****pppppbVar6;
  undefined8 uVar7;
  code *pcVar8;
  int iVar9;
  uint uVar10;
  char cVar11;
  ulonglong uVar12;
  int *piVar13;
  undefined8 *puVar14;
  longlong lVar15;
  byte *pbVar16;
  undefined8 uVar17;
  byte *******pppppppbVar18;
  uint uVar19;
  undefined8 *puVar20;
  byte ******ppppppbVar21;
  longlong lVar22;
  undefined1 (*pauVar23) [16];
  undefined1 (*pauVar24) [16];
  bool bVar25;
  byte ******ppppppbStack_238;
  byte *****pppppbStack_230;
  byte ******ppppppbStack_228;
  byte *****pppppbStack_220;
  undefined8 uStack_218;
  longlong lStack_188;
  undefined8 uStack_180;
  byte *****pppppbStack_178;
  undefined8 uStack_170;
  undefined4 *puStack_168;
  undefined4 *puStack_160;
  longlong lStack_158;
  longlong lStack_150;
  byte ******ppppppbStack_148;
  ulonglong uStack_140;
  byte ******ppppppbStack_138;
  longlong lStack_130;
  undefined8 *puStack_128;
  longlong lStack_120;
  longlong lStack_118;
  undefined8 uStack_110;
  byte ******ppppppbStack_108;
  byte *****pppppbStack_100;
  byte ******ppppppbStack_f8;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  byte *****pppppbStack_e8;
  longlong lStack_e0;
  longlong lStack_d8;
  byte *****pppppbStack_d0;
  byte ******ppppppbStack_c8;
  byte *****pppppbStack_c0;
  byte ******ppppppbStack_b8;
  byte ******ppppppbStack_b0;
  byte ******ppppppbStack_a8;
  byte *****pppppbStack_a0;
  byte ******ppppppbStack_98;
  byte *****pppppbStack_90;
  undefined8 uStack_88;
  byte ******ppppppbStack_80;
  byte *pbStack_78;
  byte *****pppppbStack_70;
  undefined1 uStack_63;
  undefined1 uStack_62;
  undefined1 uStack_61;
  undefined8 uStack_60;
  
  uStack_60 = 0xfffffffffffffffe;
  if (*(char *)*param_1 == '\a') {
    pauVar24 = *(undefined1 (**) [16])*param_4;
    lStack_188 = ((undefined8 *)*param_4)[3];
    auVar2 = *pauVar24;
    uVar19 = ~(uint)(ushort)((ushort)(SUB161(auVar2 >> 7,0) & 1) |
                             (ushort)(SUB161(auVar2 >> 0xf,0) & 1) << 1 |
                             (ushort)(SUB161(auVar2 >> 0x17,0) & 1) << 2 |
                             (ushort)(SUB161(auVar2 >> 0x1f,0) & 1) << 3 |
                             (ushort)(SUB161(auVar2 >> 0x27,0) & 1) << 4 |
                             (ushort)(SUB161(auVar2 >> 0x2f,0) & 1) << 5 |
                             (ushort)(SUB161(auVar2 >> 0x37,0) & 1) << 6 |
                             (ushort)(SUB161(auVar2 >> 0x3f,0) & 1) << 7 |
                             (ushort)(SUB161(auVar2 >> 0x47,0) & 1) << 8 |
                             (ushort)(SUB161(auVar2 >> 0x4f,0) & 1) << 9 |
                             (ushort)(SUB161(auVar2 >> 0x57,0) & 1) << 10 |
                             (ushort)(SUB161(auVar2 >> 0x5f,0) & 1) << 0xb |
                             (ushort)(SUB161(auVar2 >> 0x67,0) & 1) << 0xc |
                             (ushort)(SUB161(auVar2 >> 0x6f,0) & 1) << 0xd |
                             (ushort)(SUB161(auVar2 >> 0x77,0) & 1) << 0xe |
                            (ushort)(byte)(auVar2[0xf] >> 7) << 0xf);
    lStack_130 = *param_5;
    lVar3 = param_5[1];
    uStack_180 = *param_7;
    uStack_170 = *param_2;
    puStack_128 = (undefined8 *)*param_10;
    uStack_110 = *param_3;
    lStack_e0 = *param_6;
    lStack_d8 = param_6[1];
    uStack_f0 = *(undefined4 *)((longlong)param_9 + 0x1c);
    lStack_120 = *param_9;
    puStack_168 = (undefined4 *)param_9[2];
    uStack_ec = *(undefined4 *)((longlong)param_8 + 0x1c);
    lStack_118 = *param_8;
    puStack_160 = (undefined4 *)param_8[2];
    pauVar23 = pauVar24 + 1;
    lStack_158 = lStack_120 + 0x20;
    lStack_150 = lStack_118 + 0x20;
    while (bVar25 = lStack_188 != 0, lStack_188 = lStack_188 + -1, bVar25) {
      if ((short)uVar19 == 0) {
        do {
          auVar2 = *pauVar23;
          pauVar24 = pauVar24 + -0x20;
          pauVar23 = pauVar23 + 1;
          uVar19 = (ushort)((ushort)(SUB161(auVar2 >> 7,0) & 1) |
                            (ushort)(SUB161(auVar2 >> 0xf,0) & 1) << 1 |
                            (ushort)(SUB161(auVar2 >> 0x17,0) & 1) << 2 |
                            (ushort)(SUB161(auVar2 >> 0x1f,0) & 1) << 3 |
                            (ushort)(SUB161(auVar2 >> 0x27,0) & 1) << 4 |
                            (ushort)(SUB161(auVar2 >> 0x2f,0) & 1) << 5 |
                            (ushort)(SUB161(auVar2 >> 0x37,0) & 1) << 6 |
                            (ushort)(SUB161(auVar2 >> 0x3f,0) & 1) << 7 |
                            (ushort)(SUB161(auVar2 >> 0x47,0) & 1) << 8 |
                            (ushort)(SUB161(auVar2 >> 0x4f,0) & 1) << 9 |
                            (ushort)(SUB161(auVar2 >> 0x57,0) & 1) << 10 |
                            (ushort)(SUB161(auVar2 >> 0x5f,0) & 1) << 0xb |
                            (ushort)(SUB161(auVar2 >> 0x67,0) & 1) << 0xc |
                            (ushort)(SUB161(auVar2 >> 0x6f,0) & 1) << 0xd |
                            (ushort)(SUB161(auVar2 >> 0x77,0) & 1) << 0xe |
                           (ushort)(byte)(auVar2[0xf] >> 7) << 0xf) ^ 0xffff;
        } while (uVar19 == 0);
      }
      iVar9 = 0;
      for (uVar10 = uVar19; (uVar10 & 1) == 0; uVar10 = uVar10 >> 1 | 0x80000000) {
        iVar9 = iVar9 + 1;
      }
      uVar19 = uVar19 - 1 & uVar19;
      pbStack_78 = (byte *)((longlong)pauVar24 - (ulonglong)(uint)(iVar9 << 5));
      pppppbStack_e8 = (byte *****)(pbStack_78 + -0x20);
      pppppbStack_d0 = (byte *****)0x0;
      ppppppbStack_c8 = (byte ******)0x4;
      pppppbStack_c0 = (byte *****)0x0;
      puVar20 = *(undefined8 **)(pbStack_78 + -0x10);
      puVar1 = puVar20 + *(longlong *)(pbStack_78 + -8);
      pppppbStack_178 = pppppbStack_e8;
      while (puVar20 != puVar1) {
        uVar17 = *puVar20;
        puVar20 = puVar20 + 1;
        uVar12 = (ulonglong)~(uint)uVar17;
        if ((((uVar12 < *(ulonglong *)(lVar3 + 0x10)) &&
             (piVar13 = (int *)(uVar12 * 0x18 + *(longlong *)(lVar3 + 8)),
             piVar13[4] == (int)((ulonglong)uVar17 >> 0x20))) && (*piVar13 != 0)) &&
           ((uVar12 = *(ulonglong *)(piVar13 + 2),
            (uVar12 & 0xffffffff) < *(ulonglong *)(lStack_130 + 0x38) &&
            ((*(ulonglong *)(*(longlong *)(lStack_130 + 0x28) + (uVar12 >> 6 & 0x3ffffff) * 8) >>
              (uVar12 & 0x3f) & 1) != 0)))) {
          uStack_61 = 1;
          puVar14 = (undefined8 *)
                    pdb_1408f8080((ulonglong)(uint)~piVar13[1] * 0x10 +
                                  *(longlong *)
                                   (*(longlong *)
                                     (*(longlong *)(lVar3 + 0x1a0) + 0x18 + (uVar12 >> 0x20) * 0x48)
                                    + 0x10 + ~*(ulonglong *)
                                               (*(longlong *)
                                                 (*(longlong *)(lVar3 + 0x1a0) + 0x38 +
                                                 (uVar12 >> 0x20) * 0x48) +
                                               *(longlong *)(lStack_130 + 0x110) * 8) * 0x30));
          if (puVar14 == (undefined8 *)0x0) {
            uStack_61 = 1;
                    /* WARNING: Subroutine does not return */
            pdb_142dc8150(&UNK_1435af638);
          }
          uStack_61 = 1;
          lVar15 = pdb_140a2d1e0(uStack_180,*puVar14);
          if (lVar15 == 0) {
            uStack_61 = 1;
                    /* WARNING: Subroutine does not return */
            pdb_142dc8150(&UNK_1435af650);
          }
          uVar12 = *(ulonglong *)(lVar15 + 0x10);
          uStack_61 = 1;
          pdb_140a97aa0(&ppppppbStack_238,lVar15);
          pppppppbVar18 = (byte *******)(uVar12 / 3);
          if ((byte *******)((longlong)pppppbStack_d0 - (longlong)pppppbStack_c0) < pppppppbVar18) {
            uStack_61 = 1;
            pdb_142d7f1b0(&pppppbStack_d0,pppppbStack_c0,pppppppbVar18,4,0x24);
          }
          ppppppbStack_108 = (byte ******)&ppppppbStack_238;
          pppppbStack_100 = (byte *****)0x0;
          ppppppbStack_a8 = &pppppbStack_c0;
          pppppbStack_a0 = pppppbStack_c0;
          ppppppbStack_98 = ppppppbStack_c8;
          uStack_61 = 1;
          ppppppbStack_f8 = (byte ******)pppppppbVar18;
          pdb_1428a2d10(&ppppppbStack_108,&ppppppbStack_a8);
        }
      }
      ppppppbStack_a8 = &pppppbStack_e8;
      pppppbStack_a0 = (byte *****)pdb_1428b47e0;
      uStack_61 = 1;
      pdb_140f60760(&ppppppbStack_238,&UNK_1435af570,&ppppppbStack_a8);
      ppppppbStack_108 = ppppppbStack_238;
      pppppbStack_100 = pppppbStack_230;
      ppppppbStack_f8 = ppppppbStack_228;
      pppppbStack_90 = pppppbStack_c0;
      pppppbStack_a0 = pppppbStack_d0;
      ppppppbStack_98 = ppppppbStack_c8;
      ppppppbStack_a8 = (byte ******)CONCAT71(ppppppbStack_a8._1_7_,2);
      uStack_140 = uStack_140 & 0xffffffffffffff00;
      uStack_62 = 1;
      pdb_140c9dcb0(&ppppppbStack_238,&ppppppbStack_a8,&uStack_140);
      uStack_62 = 0;
      pppppppbVar18 = &ppppppbStack_108;
      uStack_140 = pdb_1428b3ad0(uStack_170,pppppppbVar18,&ppppppbStack_238);
      uStack_61 = 0;
      ppppppbStack_138 = (byte ******)pppppppbVar18;
      cVar11 = pdb_1408ffaf0(&uStack_140);
      if (cVar11 != '\0') {
        uVar17 = *puStack_128;
        ppppppbStack_a8 = &pppppbStack_e8;
        pppppbStack_a0 = (byte *****)pdb_1428b47e0;
        uStack_61 = 0;
        pdb_140f60760(&ppppppbStack_238,&UNK_1435af57f,&ppppppbStack_a8);
        ppppppbVar21 = ppppppbStack_228;
        pppppbVar6 = pppppbStack_230;
        ppppppbStack_80 = ppppppbStack_238;
        pdb_14007ee60();
        pbVar16 = pub_1406abab0(0x18,8);
        pppppbStack_70 = pppppbVar6;
        if (pbVar16 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
          pdb_142dc7e11(8,0x18);
        }
        pbVar16[0] = 1;
        pbVar16[1] = 0;
        pbVar16[2] = 0;
        pbVar16[3] = 0;
        pbVar16[4] = 0;
        pbVar16[5] = 0;
        pbVar16[6] = 0;
        pbVar16[7] = 0;
        pbVar16[8] = 1;
        pbVar16[9] = 0;
        pbVar16[10] = 0;
        pbVar16[0xb] = 0;
        pbVar16[0xc] = 0;
        pbVar16[0xd] = 0;
        pbVar16[0xe] = 0;
        pbVar16[0xf] = 0;
        *(undefined8 *)(pbVar16 + 0x10) = uVar17;
        pdb_1409baea0(&ppppppbStack_238,pppppbVar6,ppppppbVar21,pbVar16,&UNK_1435af598);
        uStack_88 = uStack_218;
        ppppppbStack_98 = ppppppbStack_228;
        pppppbStack_90 = pppppbStack_220;
        ppppppbStack_a8 = ppppppbStack_238;
        pppppbStack_a0 = pppppbStack_230;
        pdb_140b133a0(uStack_110,&ppppppbStack_a8);
        if ((byte *******)ppppppbStack_80 != (byte *******)0x0) {
          pub_1406abac0((byte *)pppppbStack_70,(ulonglong)ppppppbStack_80,1);
        }
        puVar20 = *(undefined8 **)(pbStack_78 + -0x10);
        puVar1 = puVar20 + *(longlong *)(pbStack_78 + -8);
        pppppppbVar18 = (byte *******)0x0;
        lVar15 = lStack_e0;
        lVar22 = lStack_d8;
        for (; puVar20 != puVar1; puVar20 = puVar20 + 1) {
          uVar12 = (ulonglong)~(uint)*puVar20;
          ppppppbStack_108 = (byte ******)pppppppbVar18;
          if (((uVar12 < *(ulonglong *)(lVar22 + 0x10)) &&
              (piVar13 = (int *)(uVar12 * 0x18 + *(longlong *)(lVar22 + 8)),
              piVar13[4] == (int)((ulonglong)*puVar20 >> 0x20))) &&
             ((*piVar13 != 0 &&
              ((uVar12 = *(ulonglong *)(piVar13 + 2),
               (uVar12 & 0xffffffff) < *(ulonglong *)(lVar15 + 0x38) &&
               ((*(ulonglong *)(*(longlong *)(lVar15 + 0x28) + (uVar12 >> 6 & 0x3ffffff) * 8) >>
                 (uVar12 & 0x3f) & 1) != 0)))))) {
            lVar15 = *(longlong *)
                      (*(longlong *)(*(longlong *)(lVar22 + 0x1a0) + 0x18 + (uVar12 >> 0x20) * 0x48)
                       + 0x10 + ~*(ulonglong *)
                                  (*(longlong *)
                                    (*(longlong *)(lVar22 + 0x1a0) + 0x38 + (uVar12 >> 0x20) * 0x48)
                                  + *(longlong *)(lVar15 + 0x110) * 8) * 0x30);
            pppppppbVar4 = *(byte ********)(lVar15 + 0x10 + (ulonglong)(uint)~piVar13[1] * 0x38);
            ppppppbVar21 = (byte ******)((longlong)pppppppbVar4 * 0xc);
            if ((byte *******)0xaaaaaaaaaaaaaaa < pppppppbVar4) {
              uVar17 = 0;
LAB_1428cddfa:
              uStack_61 = 0;
              pdb_142dc7e2a(uVar17,ppppppbVar21);
                    /* WARNING: Does not return */
              pcVar8 = (code *)invalidInstructionException();
              (*pcVar8)();
            }
            pppppppbVar5 = *(byte ********)(lVar15 + 8 + (ulonglong)(uint)~piVar13[1] * 0x38);
            ppppppbStack_80 = (byte ******)pppppppbVar4;
            if (ppppppbVar21 == (byte ******)0x0) {
              pbStack_78 = (byte *)0x4;
              ppppppbStack_b8 = (byte ******)0x0;
              pppppppbVar4 = (byte *******)ppppppbStack_b8;
            }
            else {
              ppppppbStack_b0 = (byte ******)pppppppbVar5;
              pppppbStack_70 = (byte *****)ppppppbVar21;
              pdb_14007ee60();
              pbStack_78 = pub_1406abab0((ulonglong)pppppbStack_70,4);
              uVar17 = 4;
              ppppppbVar21 = (byte ******)pppppbStack_70;
              pppppppbVar5 = (byte *******)ppppppbStack_b0;
              pppppppbVar4 = (byte *******)ppppppbStack_80;
              if (pbStack_78 == (byte *)0x0) goto LAB_1428cddfa;
            }
            ppppppbStack_b8 = (byte ******)pppppppbVar4;
            if ((byte *******)ppppppbStack_80 != (byte *******)0x0) {
              pub_142e32760(pbStack_78,pppppppbVar5,ppppppbVar21);
            }
            ppppppbStack_238 = &pppppbStack_e8;
            pppppbStack_230 = (byte *****)pdb_1428b47e0;
            ppppppbStack_228 = (byte ******)&ppppppbStack_108;
            pppppbStack_220 = (byte *****)pdb_140090b90;
            uStack_63 = 1;
            pdb_140f60760(&ppppppbStack_a8,&UNK_1435af5f3,&ppppppbStack_238);
            ppppppbStack_b0 = ppppppbStack_a8;
            pppppbStack_70 = pppppbStack_a0;
            ppppppbStack_148 = ppppppbStack_98;
            pdb_14007ee60();
            pbVar16 = pub_1406abab0(0x28,8);
            if (pbVar16 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
              pdb_142dc7e11(8,0x28);
            }
            pbVar16[0] = 1;
            pbVar16[1] = 0;
            pbVar16[2] = 0;
            pbVar16[3] = 0;
            pbVar16[4] = 0;
            pbVar16[5] = 0;
            pbVar16[6] = 0;
            pbVar16[7] = 0;
            pbVar16[8] = 1;
            pbVar16[9] = 0;
            pbVar16[10] = 0;
            pbVar16[0xb] = 0;
            pbVar16[0xc] = 0;
            pbVar16[0xd] = 0;
            pbVar16[0xe] = 0;
            pbVar16[0xf] = 0;
            *(byte *******)(pbVar16 + 0x10) = ppppppbStack_b8;
            *(byte **)(pbVar16 + 0x18) = pbStack_78;
            *(byte *******)(pbVar16 + 0x20) = ppppppbStack_80;
            pdb_1409baea0(&ppppppbStack_238,pppppbStack_70,ppppppbStack_148,pbVar16,&UNK_1435af608);
            uStack_88 = uStack_218;
            ppppppbStack_98 = ppppppbStack_228;
            pppppbStack_90 = pppppbStack_220;
            ppppppbStack_a8 = ppppppbStack_238;
            pppppbStack_a0 = pppppbStack_230;
            pdb_140b133a0(uStack_110,&ppppppbStack_a8);
            lVar15 = lStack_e0;
            lVar22 = lStack_d8;
            if ((byte *******)ppppppbStack_b0 != (byte *******)0x0) {
              pub_1406abac0((byte *)pppppbStack_70,(ulonglong)ppppppbStack_b0,1);
              lVar15 = lStack_e0;
              lVar22 = lStack_d8;
            }
          }
          pppppppbVar18 = (byte *******)((longlong)pppppppbVar18 + 1);
        }
      }
      uStack_61 = 0;
      cVar11 = pdb_1408ffa90(&uStack_140);
      if (cVar11 != '\0') {
        *puStack_168 = uStack_f0;
        lVar15 = *(longlong *)(lStack_120 + 0x30);
        uVar17 = *(undefined8 *)(lStack_120 + 0x40);
        if (lVar15 == *(longlong *)(lStack_120 + 0x20)) {
          uStack_61 = 0;
          pdb_142d7e980(lStack_158);
        }
        lVar22 = *(longlong *)(lStack_120 + 0x28);
        *(undefined8 *)(lVar22 + lVar15 * 0x10) = uVar17;
        *(undefined1 *)(lVar22 + 8 + lVar15 * 0x10) = 0;
        *(longlong *)(lStack_120 + 0x30) = lVar15 + 1;
        *(longlong *)(lStack_120 + 0x40) = *(longlong *)(lStack_120 + 0x40) + 1;
        uVar17 = *puStack_128;
        pppppbVar6 = (byte *****)*pppppbStack_178;
        *puStack_160 = uStack_ec;
        lVar15 = *(longlong *)(lStack_118 + 0x30);
        uVar7 = *(undefined8 *)(lStack_118 + 0x40);
        if (lVar15 == *(longlong *)(lStack_118 + 0x20)) {
          uStack_61 = 0;
          pdb_142d7ede0(lStack_150);
        }
        lVar22 = *(longlong *)(lStack_118 + 0x28);
        *(undefined4 *)(lVar22 + lVar15 * 0x28) = 7;
        *(byte ******)(lVar22 + 8 + lVar15 * 0x28) = pppppbVar6;
        *(undefined8 *)(lVar22 + 0x18 + lVar15 * 0x28) = uVar17;
        *(undefined8 *)(lVar22 + 0x20 + lVar15 * 0x28) = uVar7;
        *(longlong *)(lStack_118 + 0x30) = lVar15 + 1;
        *(longlong *)(lStack_118 + 0x40) = *(longlong *)(lStack_118 + 0x40) + 1;
      }
    }
  }
  return;
}

