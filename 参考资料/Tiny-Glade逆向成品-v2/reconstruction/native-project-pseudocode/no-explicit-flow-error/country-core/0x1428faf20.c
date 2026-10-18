// VA 0x1428faf20, PDB extent 1921 bytes
// country_core::render::sparse_instance_buffer::SparseInstanceBufferWriter::push<country_core::resources::roofs::roof_buffers::WoodenPlankSsbo>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/render/sparse_instance_buffer.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::render::sparse_instance_buffer::SparseInstanceBufferWriter::push<country_core::resources::roofs::roof_buffers::WoodenPlankSsbo>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/render/sparse_instance_buffer.rs
   Extent: 1921 */

undefined8 pdb_1428faf20(longlong *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  ulonglong *puVar2;
  byte *pbVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 *puVar6;
  int *piVar7;
  byte bVar8;
  longlong lVar9;
  code *pcVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  byte *pbVar20;
  longlong lVar21;
  uint uVar22;
  ulonglong uVar23;
  ulonglong uVar24;
  longlong lVar25;
  ulonglong uVar26;
  longlong *unaff_R12;
  longlong lVar27;
  ulonglong unaff_R13;
  bool bVar28;
  longlong lVar29;
  undefined1 auVar30 [16];
  longlong lVar31;
  longlong lVar32;
  longlong lVar33;
  byte *pbStack_c8;
  longlong lStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  ulonglong uStack_78;
  ulonglong uStack_70;
  longlong *plStack_68;
  undefined8 uStack_60;
  
  uStack_60 = 0xfffffffffffffffe;
  uVar22 = *(uint *)(param_1 + 0xb);
  uVar26 = (ulonglong)uVar22;
  if ((ulonglong)param_1[1] <= uVar26) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc81f2(uVar26,param_1[1],&UNK_1435b4168);
  }
  bVar8 = *(byte *)(*param_1 + uVar26);
  if (0x1f < (ulonglong)bVar8) {
    unaff_R12 = (longlong *)param_1[8];
    LOCK();
    lVar21 = *unaff_R12;
    if (lVar21 == 0) {
      *unaff_R12 = 8;
    }
    UNLOCK();
    if (lVar21 != 0) goto LAB_1428fb51f;
    goto LAB_1428fb03b;
  }
  *(byte *)(*param_1 + uVar26) = bVar8 + 1;
  uVar26 = (ulonglong)(uVar22 >> 8);
  if ((ulonglong)param_1[6] <= uVar26) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc81f2(uVar26,param_1[6],&UNK_1435b4110);
  }
  if (*(int *)(param_1[5] + 0x10 + uVar26 * 0x18) == 0) {
    plVar1 = (longlong *)(param_1[5] + uVar26 * 0x18);
    uVar23 = (ulonglong)((uVar22 & 0xff) << 5) | (ulonglong)bVar8;
    uVar24 = plVar1[1];
    if (uVar24 <= uVar23) {
LAB_1428fb5bc:
                    /* WARNING: Subroutine does not return */
      pdb_142dc81f2(uVar23,uVar24,&UNK_1435b4110);
    }
    lVar21 = *plVar1;
    uVar26 = (ulonglong)(uint)((int)uVar23 * 0x50);
    uVar11 = param_2[9];
    puVar6 = (undefined8 *)(lVar21 + 0x40 + uVar26);
    *puVar6 = param_2[8];
    puVar6[1] = uVar11;
    uVar11 = *param_2;
    uVar12 = param_2[1];
    uVar16 = param_2[2];
    uVar17 = param_2[3];
    uVar13 = param_2[4];
    uVar14 = param_2[5];
    uVar15 = param_2[7];
    puVar6 = (undefined8 *)(lVar21 + 0x30 + uVar26);
    *puVar6 = param_2[6];
    puVar6[1] = uVar15;
    puVar6 = (undefined8 *)(lVar21 + 0x20 + uVar26);
    *puVar6 = uVar13;
    puVar6[1] = uVar14;
    puVar6 = (undefined8 *)(lVar21 + 0x10 + uVar26);
    *puVar6 = uVar16;
    puVar6[1] = uVar17;
    *(undefined8 *)(lVar21 + uVar26) = uVar11;
    ((undefined8 *)(lVar21 + uVar26))[1] = uVar12;
    uVar24 = param_1[10];
    uVar23 = (ulonglong)(*(uint *)(param_1 + 0xb) >> 6);
    if (uVar23 < uVar24) {
      LOCK();
      puVar2 = (ulonglong *)(param_1[9] + uVar23 * 8);
      *puVar2 = *puVar2 | 1L << ((byte)*(uint *)(param_1 + 0xb) & 0x3f);
      UNLOCK();
      return 0;
    }
  }
  else {
    do {
      pdb_142dc8110(&UNK_1435b4128,0x25,&UNK_1435b4150);
LAB_1428fb51f:
      pdb_142dbc1f0(unaff_R12);
LAB_1428fb03b:
      pdb_140e9a150(unaff_R12);
      pdb_140e9a150((ulonglong)unaff_R12 | 1);
      plVar1 = (longlong *)unaff_R12[3];
      bVar28 = plVar1 == (longlong *)0x0;
      if (bVar28) {
        plVar4 = unaff_R12 + 1;
        puVar2 = (ulonglong *)param_1[7];
        uStack_70 = *puVar2;
        uVar26 = param_1[6];
        uStack_78 = uStack_70 * 2;
        if (uVar26 < uStack_70 * 2) {
          uStack_78 = uVar26;
        }
        if (uStack_78 == uStack_70) goto LAB_1428fb0a9;
        plStack_68 = unaff_R12;
        if (uStack_78 < uStack_70) {
          pdb_142dc8420(uStack_70,uStack_78,uVar26,&UNK_1435b40f8);
LAB_1428fb5ae:
                    /* WARNING: Does not return */
          pcVar10 = (code *)invalidInstructionException();
          (*pcVar10)();
        }
        lVar9 = param_1[5];
        lVar21 = uStack_78 * 0x18;
        lVar27 = lVar9 + uStack_70 * 0x18;
        while (lVar27 != lVar9 + lVar21) {
          pdb_140a77410(&pbStack_c8);
          pdb_14007ee60();
          pbVar20 = pub_1406abab0(0xa0000,4);
          if (pbVar20 == (byte *)0x0) {
            pdb_142dc7e2a(4,0xa0000);
            goto LAB_1428fb5ae;
          }
          lVar5 = lVar27 + 0x18;
          lVar25 = 0xf0;
          while( true ) {
            *(undefined8 *)(pbVar20 + lVar25 + -0xb0) = uStack_88;
            *(undefined8 *)(pbVar20 + lVar25 + -0xb0 + 8) = uStack_80;
            *(undefined8 *)(pbVar20 + lVar25 + -0xc0) = uStack_98;
            *(undefined8 *)(pbVar20 + lVar25 + -0xc0 + 8) = uStack_90;
            *(undefined8 *)(pbVar20 + lVar25 + -0xd0) = uStack_a8;
            *(undefined8 *)(pbVar20 + lVar25 + -0xd0 + 8) = uStack_a0;
            *(undefined8 *)(pbVar20 + lVar25 + -0xe0) = uStack_b8;
            *(undefined8 *)(pbVar20 + lVar25 + -0xe0 + 8) = uStack_b0;
            *(byte **)(pbVar20 + lVar25 + -0xf0) = pbStack_c8;
            *(longlong *)(pbVar20 + lVar25 + -0xf0 + 8) = lStack_c0;
            *(byte **)(pbVar20 + lVar25 + -0xa0) = pbStack_c8;
            *(longlong *)(pbVar20 + lVar25 + -0xa0 + 8) = lStack_c0;
            *(undefined8 *)(pbVar20 + lVar25 + -0x90) = uStack_b8;
            *(undefined8 *)(pbVar20 + lVar25 + -0x90 + 8) = uStack_b0;
            *(undefined8 *)(pbVar20 + lVar25 + -0x80) = uStack_a8;
            *(undefined8 *)(pbVar20 + lVar25 + -0x80 + 8) = uStack_a0;
            *(undefined8 *)(pbVar20 + lVar25 + -0x70) = uStack_98;
            *(undefined8 *)(pbVar20 + lVar25 + -0x70 + 8) = uStack_90;
            *(undefined8 *)(pbVar20 + lVar25 + -0x60) = uStack_88;
            *(undefined8 *)(pbVar20 + lVar25 + -0x60 + 8) = uStack_80;
            *(byte **)(pbVar20 + lVar25 + -0x50) = pbStack_c8;
            *(longlong *)(pbVar20 + lVar25 + -0x50 + 8) = lStack_c0;
            *(undefined8 *)(pbVar20 + lVar25 + -0x40) = uStack_b8;
            *(undefined8 *)(pbVar20 + lVar25 + -0x40 + 8) = uStack_b0;
            *(undefined8 *)(pbVar20 + lVar25 + -0x30) = uStack_a8;
            *(undefined8 *)(pbVar20 + lVar25 + -0x30 + 8) = uStack_a0;
            *(undefined8 *)(pbVar20 + lVar25 + -0x20) = uStack_98;
            *(undefined8 *)(pbVar20 + lVar25 + -0x20 + 8) = uStack_90;
            *(undefined8 *)(pbVar20 + lVar25 + -0x10) = uStack_88;
            *(undefined8 *)(pbVar20 + lVar25 + -0x10 + 8) = uStack_80;
            if (lVar25 == 0x9ffb0) break;
            pbVar3 = pbVar20 + lVar25;
            *(undefined8 *)(pbVar3 + 0x40) = uStack_88;
            *(undefined8 *)(pbVar3 + 0x48) = uStack_80;
            *(undefined8 *)(pbVar3 + 0x30) = uStack_98;
            *(undefined8 *)(pbVar3 + 0x38) = uStack_90;
            *(undefined8 *)(pbVar3 + 0x20) = uStack_a8;
            *(undefined8 *)(pbVar3 + 0x28) = uStack_a0;
            *(undefined8 *)(pbVar3 + 0x10) = uStack_b8;
            *(undefined8 *)(pbVar3 + 0x18) = uStack_b0;
            *(byte **)pbVar3 = pbStack_c8;
            *(longlong *)(pbVar3 + 8) = lStack_c0;
            lVar25 = lVar25 + 0x140;
          }
          *(undefined8 *)(pbVar20 + 0x9fff0) = uStack_88;
          *(undefined8 *)(pbVar20 + 0x9fff8) = uStack_80;
          auVar18._8_8_ = uStack_a0;
          auVar18._0_8_ = uStack_a8;
          auVar19._8_8_ = uStack_90;
          auVar19._0_8_ = uStack_98;
          *(undefined1 (*) [16])(pbVar20 + 0x9ffe0) = auVar19;
          *(undefined1 (*) [16])(pbVar20 + 0x9ffd0) = auVar18;
          *(undefined8 *)(pbVar20 + 0x9ffc0) = uStack_b8;
          *(undefined8 *)(pbVar20 + 0x9ffc8) = uStack_b0;
          *(byte **)(pbVar20 + 0x9ffb0) = pbStack_c8;
          *(longlong *)(pbVar20 + 0x9ffb8) = lStack_c0;
          lStack_c0 = 0x2000;
          pbStack_c8 = pbVar20;
          if (*(int *)(lVar27 + 0x10) != 0) {
            pdb_142e31ad7(lVar27,&pbStack_c8);
          }
          lVar27 = lVar5;
          if ((pbStack_c8 != (byte *)0x0) && (lStack_c0 != 0)) {
            pub_1406abac0(pbStack_c8,lStack_c0 * 0x50,4);
          }
        }
        *puVar2 = uStack_78;
        uVar23 = (uStack_78 & 0x7ffffffffffff) * 0x100;
        uVar26 = uStack_70 & 0x7ffffffffffff;
        unaff_R13 = uVar26 * 0x100;
        uVar24 = 0;
        if (unaff_R13 <= uVar23) {
          uVar24 = uVar23 + uVar26 * -0x100;
        }
        unaff_R12 = (longlong *)plStack_68[3];
        if ((ulonglong)(plStack_68[1] - (longlong)unaff_R12) < uVar24) {
          pdb_142d7f1b0(plVar4,unaff_R12,uVar24,4,4);
          unaff_R12 = (longlong *)plStack_68[3];
          lVar21 = uVar23 + uVar26 * -0x100;
          if (unaff_R13 <= uVar23 && lVar21 != 0) goto LAB_1428fb437;
        }
        else {
          lVar21 = uVar23 + uVar26 * -0x100;
          if (unaff_R13 <= uVar23 && lVar21 != 0) {
LAB_1428fb437:
            lVar5 = _UNK_142e4fb58;
            lVar27 = _DAT_142e4fb50;
            auVar18 = _DAT_142e4fb40;
            auVar30._8_4_ = (int)uVar23;
            auVar30._0_8_ = uVar23;
            auVar30._12_4_ = (int)(uVar23 >> 0x20);
            lVar32 = _DAT_142e4fb30 + uVar23;
            lVar33 = _UNK_142e4fb38 + auVar30._8_8_;
            lVar29 = uVar23 + _DAT_142e47bf0;
            lVar31 = auVar30._8_8_ + _UNK_142e47bf8;
            lVar9 = plStack_68[2] + (longlong)unaff_R12 * 4;
            unaff_R12 = (longlong *)((longlong)unaff_R12 + lVar21);
            lVar25 = 0;
            do {
              piVar7 = (int *)(lVar9 + lVar25 * 4);
              *piVar7 = (int)lVar29 + -1;
              piVar7[1] = (int)lVar31 + -1;
              piVar7[2] = (int)lVar32 + -1;
              piVar7[3] = (int)lVar33 + -1;
              piVar7 = (int *)(lVar9 + 0x10 + lVar25 * 4);
              *piVar7 = (int)lVar29 + auVar18._0_4_;
              piVar7[1] = (int)lVar31 + auVar18._4_4_;
              piVar7[2] = (int)lVar32 + auVar18._8_4_;
              piVar7[3] = (int)lVar33 + auVar18._12_4_;
              lVar25 = lVar25 + 8;
              lVar29 = lVar29 + lVar27;
              lVar31 = lVar31 + lVar5;
              lVar32 = lVar32 + lVar27;
              lVar33 = lVar33 + lVar5;
            } while (lVar21 != lVar25);
          }
        }
        plVar1 = plStack_68;
        plStack_68[3] = (longlong)unaff_R12;
        bVar28 = unaff_R12 == (longlong *)0x0;
        if (!bVar28) {
          plStack_68[3] = (longlong)unaff_R12 + -1;
          unaff_R13 = (ulonglong)*(uint *)(plStack_68[2] + -4 + (longlong)unaff_R12 * 4);
        }
        pdb_140e9a350(plStack_68);
        pdb_140e9a350();
        LOCK();
        lVar21 = *plVar1;
        if (lVar21 == 8) {
          *plVar1 = 0;
        }
        UNLOCK();
        if (lVar21 != 8) {
          pdb_142dbca40(plVar1,0);
          plVar1 = unaff_R12;
          goto joined_r0x0001428fb4ff;
        }
LAB_1428fb0cc:
        if (bVar28) {
          return 1;
        }
      }
      else {
        unaff_R12[3] = (longlong)plVar1 + -1;
        unaff_R13 = (ulonglong)*(uint *)(unaff_R12[2] + -4 + (longlong)plVar1 * 4);
LAB_1428fb0a9:
        pdb_140e9a350(unaff_R12);
        pdb_140e9a350();
        LOCK();
        lVar21 = *unaff_R12;
        if (lVar21 == 8) {
          *unaff_R12 = 0;
        }
        UNLOCK();
        if (lVar21 == 8) goto LAB_1428fb0cc;
        pdb_142dbca40(unaff_R12,0);
joined_r0x0001428fb4ff:
        if (plVar1 == (longlong *)0x0) {
          return 1;
        }
      }
      uVar26 = unaff_R13 & 0xffffffff;
      plVar1 = (longlong *)param_1[4];
      lVar21 = plVar1[2];
      if (lVar21 == *plVar1) {
        pdb_142d8d710(plVar1);
      }
      *(int *)(plVar1[1] + lVar21 * 4) = (int)unaff_R13;
      plVar1[2] = lVar21 + 1;
      if ((ulonglong)param_1[1] <= uVar26) {
                    /* WARNING: Subroutine does not return */
        pdb_142dc81f2(uVar26,param_1[1],&UNK_1435b4180);
      }
      *(undefined1 *)(*param_1 + uVar26) = 1;
      uVar24 = param_1[6];
      uVar23 = uVar26 >> 8;
      if (uVar24 <= uVar23) goto LAB_1428fb5bc;
    } while (*(int *)(param_1[5] + 0x10 + uVar23 * 0x18) != 0);
    plVar1 = (longlong *)(param_1[5] + uVar23 * 0x18);
    uVar22 = (uint)(uVar26 << 5) & 0x1fe0;
    uVar23 = (ulonglong)uVar22;
    uVar24 = plVar1[1];
    if (uVar24 <= uVar23) goto LAB_1428fb5bc;
    lVar21 = *plVar1;
    uVar24 = (ulonglong)(uVar22 * 0x50);
    uVar11 = param_2[9];
    puVar6 = (undefined8 *)(lVar21 + 0x40 + uVar24);
    *puVar6 = param_2[8];
    puVar6[1] = uVar11;
    uVar11 = *param_2;
    uVar12 = param_2[1];
    uVar16 = param_2[2];
    uVar17 = param_2[3];
    uVar13 = param_2[4];
    uVar14 = param_2[5];
    uVar15 = param_2[7];
    puVar6 = (undefined8 *)(lVar21 + 0x30 + uVar24);
    *puVar6 = param_2[6];
    puVar6[1] = uVar15;
    puVar6 = (undefined8 *)(lVar21 + 0x20 + uVar24);
    *puVar6 = uVar13;
    puVar6[1] = uVar14;
    puVar6 = (undefined8 *)(lVar21 + 0x10 + uVar24);
    *puVar6 = uVar16;
    puVar6[1] = uVar17;
    *(undefined8 *)(lVar21 + uVar24) = uVar11;
    ((undefined8 *)(lVar21 + uVar24))[1] = uVar12;
    uVar24 = param_1[3];
    uVar23 = unaff_R13 >> 6 & 0x3ffffff;
    if (uVar23 < uVar24) {
      uVar26 = 1L << ((byte)uVar26 & 0x3f);
      LOCK();
      puVar2 = (ulonglong *)(param_1[2] + uVar23 * 8);
      *puVar2 = *puVar2 | uVar26;
      UNLOCK();
      uVar24 = param_1[10];
      if (uVar23 < uVar24) {
        LOCK();
        puVar2 = (ulonglong *)(param_1[9] + uVar23 * 8);
        *puVar2 = *puVar2 | uVar26;
        UNLOCK();
        *(int *)(param_1 + 0xb) = (int)unaff_R13;
        return 0;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  pdb_142dc81f2(uVar23,uVar24,&UNK_1435b4098);
}

