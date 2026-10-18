// VA 0x142073b10, PDB extent 1807 bytes
// system_tree::ui_delete_tree::ui_delete_tree
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/tree-tool/src/ui_delete_tree.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: system_tree::ui_delete_tree::ui_delete_tree
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/tree-tool/src/ui_delete_tree.rs
   Extent: 1807 */

void pdb_142073b10(longlong *param_1,undefined8 *param_2,undefined8 *param_3,longlong *param_4,
                  undefined8 *param_5,ulonglong *param_6,undefined8 *param_7,undefined8 *param_8,
                  undefined8 *param_9,undefined8 param_10,undefined8 *param_11)

{
  undefined4 uVar1;
  undefined1 auVar2 [16];
  byte bVar3;
  undefined4 uVar4;
  ulonglong *puVar5;
  undefined8 uVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined8 uVar9;
  code *pcVar10;
  int iVar11;
  uint uVar12;
  undefined8 uVar13;
  char cVar14;
  byte *pbVar15;
  longlong lVar16;
  undefined8 uVar17;
  int *piVar18;
  undefined1 (*pauVar19) [16];
  ulonglong uVar20;
  uint uVar21;
  ulonglong uVar22;
  longlong lVar23;
  longlong lVar24;
  ulonglong uVar25;
  longlong lVar26;
  longlong lVar27;
  longlong lVar28;
  longlong lVar29;
  ulonglong uVar30;
  longlong lVar31;
  longlong lVar32;
  undefined8 *puVar33;
  bool bVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float unaff_XMM7_Da;
  float unaff_XMM8_Da;
  longlong lStack_128;
  undefined1 (*pauStack_120) [16];
  longlong lStack_118;
  ushort uStack_110;
  longlong lStack_108;
  ulonglong uStack_f8;
  undefined8 uStack_f0;
  longlong lStack_e8;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined8 uStack_d8;
  byte *pbStack_d0;
  longlong lStack_c0;
  ulonglong uStack_b8;
  byte *pbStack_b0;
  ulonglong uStack_a8;
  undefined8 uStack_a0;
  
  uStack_a0 = 0xfffffffffffffffe;
  if (*_DAT_143ca4500 != '\0') {
    return;
  }
  fVar37 = *(float *)*param_11;
  param_1 = (longlong *)*param_1;
  lStack_118 = param_1[2];
  lStack_128 = *param_1;
  pauStack_120 = (undefined1 (*) [16])param_1[1];
  pdb_140a3b030(&uStack_d8,*param_2,&lStack_128);
  bVar34 = false;
  if (((char)uStack_d8 == '\x04') && (bVar34 = false, uStack_d8._1_1_ == '\x06')) {
    pauVar19 = (undefined1 (*) [16])&UNK_14344ba38;
    lStack_128 = pdb_1408ffe00(*param_3,&UNK_14344ba38,10,10,3);
    pauStack_120 = pauVar19;
    cVar14 = pdb_1408ffab0(&lStack_128);
    bVar34 = cVar14 != '\x02';
    if (bVar34) {
      pdb_140a8e090(&uStack_d8,*param_8);
      unaff_XMM7_Da = (float)uStack_d8;
      unaff_XMM8_Da = pbStack_d0._0_4_;
    }
  }
  fVar37 = fVar37 * _DAT_142e3788c;
  puVar5 = (ulonglong *)*param_5;
  lVar27 = param_5[1];
  uVar20 = *puVar5;
  uVar25 = 0;
  uVar22 = uVar20 - *(ulonglong *)(lVar27 + 0x18);
  if (uVar20 < *(ulonglong *)(lVar27 + 0x18)) {
    uVar22 = uVar25;
  }
  uVar30 = uVar20 - *(ulonglong *)(lVar27 + 0x38);
  if (uVar20 < *(ulonglong *)(lVar27 + 0x38)) {
    uVar30 = uVar25;
  }
  lVar26 = uVar22 * 0x20 + *(longlong *)(lVar27 + 8);
  uVar20 = *(ulonglong *)(lVar27 + 0x10) - uVar22;
  if (*(ulonglong *)(lVar27 + 0x10) < uVar22) {
    lVar26 = 8;
    uVar20 = uVar25;
  }
  lVar28 = uVar30 * 0x20 + *(longlong *)(lVar27 + 0x28);
  uVar22 = *(ulonglong *)(lVar27 + 0x30) - uVar30;
  if (*(ulonglong *)(lVar27 + 0x30) < uVar30) {
    lVar28 = 8;
    uVar22 = uVar25;
  }
  uVar25 = (*(longlong *)(lVar27 + 0x40) - uVar22) - uVar20;
  *puVar5 = uVar25;
  lVar23 = uVar22 * 0x20 + lVar28;
  lVar27 = lVar26;
  do {
    if ((lVar27 == 0) || (lVar27 == uVar20 * 0x20 + lVar26)) {
      if ((lVar28 == 0) || (lVar28 == lVar23)) break;
      lVar29 = 0;
      lVar16 = lVar28;
      lVar28 = lVar28 + 0x20;
    }
    else {
      lVar29 = lVar27 + 0x20;
      lVar16 = lVar27;
    }
    uVar25 = uVar25 + 1;
    *puVar5 = uVar25;
    lVar27 = lVar29;
    if (*(char *)(lVar16 + 0x18) == '\0') {
      unaff_XMM7_Da = *(float *)(lVar16 + 8);
      unaff_XMM8_Da = *(float *)(lVar16 + 0x10);
      fVar37 = *(float *)(lVar16 + 0x14) + *(float *)(lVar16 + 0x14);
      bVar34 = true;
    }
  } while( true );
  if ((bVar34) && (pdb_140a2fb40(&lStack_128,*param_7), lStack_108 != 0)) {
    lVar26 = *param_4;
    lVar28 = param_4[1];
    uStack_e0 = *(undefined4 *)((longlong)param_9 + 0x1c);
    uVar6 = *param_9;
    puVar7 = (undefined4 *)param_9[2];
    uVar21 = (uint)uStack_110;
    uStack_dc = *(undefined4 *)((longlong)param_6 + 0x1c);
    uStack_f8 = *param_6;
    puVar8 = (undefined4 *)param_6[2];
    lVar27 = uStack_f8 + 0x20;
    pauVar19 = pauStack_120;
    lVar23 = lStack_128;
    lVar29 = lStack_108;
    lStack_e8 = lVar26;
    do {
      if ((short)uVar21 == 0) {
        do {
          auVar2 = *pauVar19;
          lVar23 = lVar23 + -0x100;
          pauVar19 = pauVar19 + 1;
          uVar21 = (ushort)((ushort)(SUB161(auVar2 >> 7,0) & 1) |
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
        } while (uVar21 == 0);
      }
      iVar11 = 0;
      for (uVar12 = uVar21; (uVar12 & 1) == 0; uVar12 = uVar12 >> 1 | 0x80000000) {
        iVar11 = iVar11 + 1;
      }
      lVar16 = lVar23 - (ulonglong)(uint)(iVar11 << 4);
      uVar9 = *(undefined8 *)(lVar16 + -8);
      if (((*(ulonglong *)(lVar28 + 0x10) <= (ulonglong)~(uint)uVar9) ||
          (piVar18 = (int *)((ulonglong)~(uint)uVar9 * 0x18 + *(longlong *)(lVar28 + 8)),
          piVar18[4] != (int)((ulonglong)uVar9 >> 0x20))) || (*piVar18 == 0)) {
        uStack_d8 = (uStack_b8 & 0xffffffff00000000) + 1;
LAB_142074155:
        pbStack_d0 = (byte *)uVar9;
                    /* WARNING: Subroutine does not return */
        pdb_142dc8170(&UNK_14344bac8,0x2b,&uStack_d8,&UNK_14344baa8,&UNK_14344ba78);
      }
      uVar20 = *(ulonglong *)(piVar18 + 2);
      if ((*(ulonglong *)(lVar26 + 0x38) <= (uVar20 & 0xffffffff)) ||
         ((*(ulonglong *)(*(longlong *)(lVar26 + 0x28) + (uVar20 >> 6 & 0x3ffffff) * 8) >>
           (uVar20 & 0x3f) & 1) == 0)) {
        uStack_d8 = uVar20 << 0x20;
        goto LAB_142074155;
      }
      lVar24 = *(longlong *)(lVar28 + 0x1a0) + (uVar20 >> 0x20) * 0x48;
      uVar20 = *(ulonglong *)(*(longlong *)(lVar28 + 0x1a0) + 0x40 + (uVar20 >> 0x20) * 0x48);
      if ((*(ulonglong *)(lVar26 + 0x110) < uVar20) &&
         (uVar22 = *(ulonglong *)(*(longlong *)(lVar24 + 0x38) + *(ulonglong *)(lVar26 + 0x110) * 8)
         , uVar22 != 0)) {
        lVar32 = *(longlong *)(*(longlong *)(lVar24 + 0x18) + 0x10 + ~uVar22 * 0x30);
        uVar22 = *(ulonglong *)(lVar26 + 0x118);
        if (uVar20 <= uVar22) goto LAB_142073f70;
LAB_142073f2f:
        uVar22 = *(ulonglong *)(*(longlong *)(lVar24 + 0x38) + uVar22 * 8);
        if (uVar22 == 0) goto LAB_142073f70;
        uStack_b8 = *(longlong *)(*(longlong *)(lVar24 + 0x18) + 0x10 + ~uVar22 * 0x30);
        uVar22 = *(ulonglong *)(lVar26 + 0x120);
        if (uVar22 < uVar20) goto LAB_142073f84;
LAB_142073fb0:
        lVar24 = 0;
      }
      else {
        lVar32 = 0;
        uVar22 = *(ulonglong *)(lVar26 + 0x118);
        if (uVar22 < uVar20) goto LAB_142073f2f;
LAB_142073f70:
        uStack_b8 = 0;
        uVar22 = *(ulonglong *)(lVar26 + 0x120);
        if (uVar20 <= uVar22) goto LAB_142073fb0;
LAB_142073f84:
        uVar20 = *(ulonglong *)(*(longlong *)(lVar24 + 0x38) + uVar22 * 8);
        if (uVar20 == 0) goto LAB_142073fb0;
        lVar24 = *(longlong *)(*(longlong *)(lVar24 + 0x18) + 0x10 + ~uVar20 * 0x30);
      }
      uVar20 = (ulonglong)(uint)~piVar18[1];
      lVar31 = uVar20 * 0x30;
      uStack_b8 = uStack_b8 + uVar20 * 0x58;
      fVar35 = unaff_XMM7_Da - *(float *)(lVar32 + lVar31);
      fVar36 = unaff_XMM8_Da - *(float *)(lVar32 + 8 + lVar31);
      if (SQRT(fVar36 * fVar36 + fVar35 * fVar35) < fVar37) {
        uStack_f0 = *(undefined8 *)(lVar16 + -0x10);
        *puVar8 = uStack_dc;
        lVar26 = *(longlong *)(uStack_f8 + 0x30);
        uVar22 = *(ulonglong *)(uStack_f8 + 0x40);
        if (lVar26 == *(longlong *)(uStack_f8 + 0x20)) {
          lStack_c0 = lVar24;
          uStack_a8 = *(ulonglong *)(uStack_f8 + 0x40);
          pdb_142d7e980(lVar27);
          lVar24 = lStack_c0;
          uVar22 = uStack_a8;
        }
        puVar33 = (undefined8 *)(lVar32 + lVar31);
        lVar24 = lVar24 + uVar20 * 0x10;
        lVar16 = *(longlong *)(uStack_f8 + 0x28);
        *(ulonglong *)(lVar16 + lVar26 * 0x10) = uVar22;
        *(undefined8 *)(lVar16 + 8 + lVar26 * 0x10) = uStack_f0;
        *(longlong *)(uStack_f8 + 0x30) = lVar26 + 1;
        *(longlong *)(uStack_f8 + 0x40) = *(longlong *)(uStack_f8 + 0x40) + 1;
        *puVar7 = uStack_e0;
        uVar9 = *puVar33;
        uVar13 = puVar33[1];
        uVar1 = *(undefined4 *)(puVar33 + 2);
        uVar4 = *(undefined4 *)((longlong)puVar33 + 0x14);
        uVar20 = uStack_f8;
        uVar17 = pdb_1418bded0(uStack_b8 + 0x48);
        if ((longlong)uVar20 < 0) {
          pdb_142dc7e2a(0,pbStack_b0);
LAB_142074129:
                    /* WARNING: Subroutine does not return */
          pdb_142dc7e11(8,0x58);
        }
        lStack_c0 = lVar24;
        uStack_a8 = uVar20;
        if (uVar20 == 0) {
          pbStack_b0 = (byte *)0x1;
          lVar26 = lStack_e8;
        }
        else {
          pdb_14007ee60();
          uVar20 = uStack_a8;
          pbStack_b0 = pub_1406abab0(uStack_a8,1);
          lVar26 = lStack_e8;
          if (pbStack_b0 == (byte *)0x0) {
            pbStack_b0 = (byte *)uVar20;
            pdb_142dc7e2a(1,uVar20);
            pcVar10 = (code *)swi(3);
            (*pcVar10)();
            return;
          }
          pub_142e32760(pbStack_b0,uVar17,uVar20);
        }
        bVar3 = *(byte *)(lStack_c0 + 8);
        pdb_14007ee60();
        pbVar15 = pub_1406abab0(0x58,8);
        if (pbVar15 == (byte *)0x0) goto LAB_142074129;
        pbVar15[0] = 1;
        pbVar15[1] = 0;
        pbVar15[2] = 0;
        pbVar15[3] = 0;
        pbVar15[4] = 0;
        pbVar15[5] = 0;
        pbVar15[6] = 0;
        pbVar15[7] = 0;
        pbVar15[8] = 1;
        pbVar15[9] = 0;
        pbVar15[10] = 0;
        pbVar15[0xb] = 0;
        pbVar15[0xc] = 0;
        pbVar15[0xd] = 0;
        pbVar15[0xe] = 0;
        pbVar15[0xf] = 0;
        pbVar15[0x10] = 2;
        pbVar15[0x11] = 0;
        pbVar15[0x12] = 0;
        pbVar15[0x13] = 0;
        *(undefined8 *)(pbVar15 + 0x18) = uStack_f0;
        *(ulonglong *)(pbVar15 + 0x20) = uStack_a8;
        *(byte **)(pbVar15 + 0x28) = pbStack_b0;
        *(ulonglong *)(pbVar15 + 0x30) = uStack_a8;
        *(undefined8 *)(pbVar15 + 0x38) = uVar9;
        *(undefined8 *)(pbVar15 + 0x40) = uVar13;
        *(undefined4 *)(pbVar15 + 0x48) = uVar1;
        *(undefined4 *)(pbVar15 + 0x4c) = uVar4;
        pbVar15[0x50] = bVar3;
        uStack_d8 = 0xc;
        pbStack_d0 = pbVar15;
        pdb_140ae5180(uVar6,&uStack_d8,&UNK_14344ba90);
      }
      uVar21 = uVar21 - 1 & uVar21;
      lVar29 = lVar29 + -1;
    } while (lVar29 != 0);
  }
  return;
}

