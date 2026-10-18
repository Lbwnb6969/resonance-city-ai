// VA 0x1414a9f00, PDB extent 1774 bytes
// country_core::render::sparse_instance_buffer::SparseInstanceBufferWriter::push<country_core::resources::roof_tile_ssbo::RoofTileSsbo>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/render/sparse_instance_buffer.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::render::sparse_instance_buffer::SparseInstanceBufferWriter::push<country_core::resources::roof_tile_ssbo::RoofTileSsbo>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/render/sparse_instance_buffer.rs
   Extent: 1774 */

undefined8 pdb_1414a9f00(longlong *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  ulonglong *puVar2;
  undefined1 (*pauVar3) [16];
  longlong lVar4;
  undefined8 *puVar5;
  int *piVar6;
  byte bVar7;
  code *pcVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  longlong lVar20;
  longlong lVar21;
  byte *arg0;
  longlong lVar22;
  uint uVar23;
  ulonglong uVar24;
  longlong lVar25;
  ulonglong uVar26;
  longlong lVar27;
  ulonglong uVar28;
  ulonglong unaff_R12;
  longlong *unaff_R14;
  ulonglong uVar29;
  bool bVar30;
  longlong lVar31;
  undefined1 auVar32 [16];
  longlong lVar33;
  longlong lVar34;
  longlong lVar35;
  undefined8 *puStack_90;
  
  uVar23 = *(uint *)(param_1 + 0xb);
  uVar28 = (ulonglong)uVar23;
  if ((ulonglong)param_1[1] <= uVar28) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc81f2(uVar28,param_1[1],&UNK_143310d48);
  }
  bVar7 = *(byte *)(*param_1 + uVar28);
  if (0x1f < (ulonglong)bVar7) {
    unaff_R14 = (longlong *)param_1[8];
    LOCK();
    lVar25 = *unaff_R14;
    if (lVar25 == 0) {
      *unaff_R14 = 8;
    }
    UNLOCK();
    puStack_90 = param_2;
    if (lVar25 != 0) goto LAB_1414aa481;
    goto LAB_1414aa00f;
  }
  *(byte *)(*param_1 + uVar28) = bVar7 + 1;
  uVar28 = (ulonglong)(uVar23 >> 8);
  if ((ulonglong)param_1[6] <= uVar28) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc81f2(uVar28,param_1[6],&UNK_143310cf0);
  }
  if (*(int *)(param_1[5] + 0x10 + uVar28 * 0x18) == 0) {
    plVar1 = (longlong *)(param_1[5] + uVar28 * 0x18);
    uVar24 = (ulonglong)((uVar23 & 0xff) << 5) | (ulonglong)bVar7;
    uVar26 = plVar1[1];
    if (uVar26 <= uVar24) {
LAB_1414aa510:
                    /* WARNING: Subroutine does not return */
      pdb_142dc81f2(uVar24,uVar26,&UNK_143310cf0);
    }
    lVar25 = *plVar1;
    uVar28 = (ulonglong)(uint)((int)uVar24 << 6);
    uVar9 = *param_2;
    uVar10 = param_2[1];
    uVar14 = param_2[2];
    uVar15 = param_2[3];
    uVar11 = param_2[4];
    uVar12 = param_2[5];
    uVar13 = param_2[7];
    puVar5 = (undefined8 *)(lVar25 + 0x30 + uVar28);
    *puVar5 = param_2[6];
    puVar5[1] = uVar13;
    puVar5 = (undefined8 *)(lVar25 + 0x20 + uVar28);
    *puVar5 = uVar11;
    puVar5[1] = uVar12;
    puVar5 = (undefined8 *)(lVar25 + 0x10 + uVar28);
    *puVar5 = uVar14;
    puVar5[1] = uVar15;
    *(undefined8 *)(lVar25 + uVar28) = uVar9;
    ((undefined8 *)(lVar25 + uVar28))[1] = uVar10;
    uVar26 = param_1[10];
    uVar24 = (ulonglong)(*(uint *)(param_1 + 0xb) >> 6);
    if (uVar24 < uVar26) {
      LOCK();
      puVar2 = (ulonglong *)(param_1[9] + uVar24 * 8);
      *puVar2 = *puVar2 | 1L << ((byte)*(uint *)(param_1 + 0xb) & 0x3f);
      UNLOCK();
      return 0;
    }
  }
  else {
    do {
      pdb_142dc8110(&UNK_143310d08,0x25,&UNK_143310d30);
LAB_1414aa481:
      pdb_142dbc1f0(unaff_R14);
LAB_1414aa00f:
      pdb_140e9a150(unaff_R14);
      pdb_140e9a150((ulonglong)unaff_R14 | 1);
      lVar25 = unaff_R14[3];
      bVar30 = lVar25 != 0;
      if (lVar25 == 0) {
        puVar2 = (ulonglong *)param_1[7];
        uVar28 = *puVar2;
        uVar26 = param_1[6];
        uVar24 = uVar28 * 2;
        if (uVar26 < uVar28 * 2) {
          uVar24 = uVar26;
        }
        if (uVar24 != uVar28) {
          if (uVar24 < uVar28) {
            pdb_142dc8420(uVar28,uVar24,uVar26,&UNK_143310cd8);
LAB_1414aa502:
                    /* WARNING: Does not return */
            pcVar8 = (code *)invalidInstructionException();
            (*pcVar8)();
          }
          unaff_R12 = param_1[5] + uVar24 * 0x18;
          uVar26 = param_1[5] + uVar28 * 0x18;
          do {
            pdb_14007ee60();
            arg0 = pub_1406abab0(0x80000,4);
            if (arg0 == (byte *)0x0) {
              pdb_142dc7e2a(4,0x80000);
              goto LAB_1414aa502;
            }
            uVar29 = uVar26 + 0x18;
            lVar25 = 0x1c0;
            while( true ) {
              *(undefined1 (*) [16])(arg0 + lVar25 + -400) = (undefined1  [16])0x0;
              *(undefined1 (*) [16])(arg0 + lVar25 + -0x1a0) = (undefined1  [16])0x0;
              *(undefined1 (*) [16])(arg0 + lVar25 + -0x1b0) = (undefined1  [16])0x0;
              *(undefined1 (*) [16])(arg0 + lVar25 + -0x1c0) = (undefined1  [16])0x0;
              *(undefined1 (*) [16])(arg0 + lVar25 + -0x180) = (undefined1  [16])0x0;
              *(undefined1 (*) [16])(arg0 + lVar25 + -0x170) = (undefined1  [16])0x0;
              *(undefined1 (*) [16])(arg0 + lVar25 + -0x160) = (undefined1  [16])0x0;
              *(undefined1 (*) [16])(arg0 + lVar25 + -0x150) = (undefined1  [16])0x0;
              *(undefined1 (*) [16])(arg0 + lVar25 + -0x140) = (undefined1  [16])0x0;
              *(undefined1 (*) [16])(arg0 + lVar25 + -0x130) = (undefined1  [16])0x0;
              *(undefined1 (*) [16])(arg0 + lVar25 + -0x120) = (undefined1  [16])0x0;
              *(undefined1 (*) [16])(arg0 + lVar25 + -0x110) = (undefined1  [16])0x0;
              *(undefined1 (*) [16])(arg0 + lVar25 + -0x100) = (undefined1  [16])0x0;
              *(undefined1 (*) [16])(arg0 + lVar25 + -0xf0) = (undefined1  [16])0x0;
              *(undefined1 (*) [16])(arg0 + lVar25 + -0xe0) = (undefined1  [16])0x0;
              *(undefined1 (*) [16])(arg0 + lVar25 + -0xd0) = (undefined1  [16])0x0;
              *(undefined1 (*) [16])(arg0 + lVar25 + -0x90) = (undefined1  [16])0x0;
              *(undefined1 (*) [16])(arg0 + lVar25 + -0xa0) = (undefined1  [16])0x0;
              *(undefined1 (*) [16])(arg0 + lVar25 + -0xb0) = (undefined1  [16])0x0;
              *(undefined1 (*) [16])(arg0 + lVar25 + -0xc0) = (undefined1  [16])0x0;
              *(undefined1 (*) [16])(arg0 + lVar25 + -0x50) = (undefined1  [16])0x0;
              *(undefined1 (*) [16])(arg0 + lVar25 + -0x60) = (undefined1  [16])0x0;
              *(undefined1 (*) [16])(arg0 + lVar25 + -0x70) = (undefined1  [16])0x0;
              *(undefined1 (*) [16])(arg0 + lVar25 + -0x80) = (undefined1  [16])0x0;
              *(undefined1 (*) [16])(arg0 + lVar25 + -0x40) = (undefined1  [16])0x0;
              *(undefined1 (*) [16])(arg0 + lVar25 + -0x30) = (undefined1  [16])0x0;
              *(undefined1 (*) [16])(arg0 + lVar25 + -0x20) = (undefined1  [16])0x0;
              *(undefined1 (*) [16])(arg0 + lVar25 + -0x10) = (undefined1  [16])0x0;
              if (lVar25 == 0x7ffc0) break;
              pauVar3 = (undefined1 (*) [16])(arg0 + lVar25);
              pauVar3[3] = (undefined1  [16])0x0;
              pauVar3[2] = (undefined1  [16])0x0;
              pauVar3[1] = (undefined1  [16])0x0;
              *pauVar3 = (undefined1  [16])0x0;
              lVar25 = lVar25 + 0x200;
            }
            *(undefined1 (*) [16])(arg0 + 0x7fff0) = (undefined1  [16])0x0;
            *(undefined1 (*) [16])(arg0 + 0x7ffe0) = (undefined1  [16])0x0;
            *(undefined1 (*) [16])(arg0 + 0x7ffd0) = (undefined1  [16])0x0;
            *(undefined1 (*) [16])(arg0 + 0x7ffc0) = (undefined1  [16])0x0;
            if (*(int *)(uVar26 + 0x10) != 0) {
              pdb_142e1d1a4(uVar26);
            }
            if (arg0 != (byte *)0x0) {
              pub_1406abac0(arg0,0x80000,4);
            }
            uVar26 = uVar29;
          } while (uVar29 != unaff_R12);
          *puVar2 = uVar24;
          uVar24 = (uVar24 & 0x7ffffffffffff) * 0x100;
          uVar28 = uVar28 & 0x7ffffffffffff;
          uVar29 = uVar28 * 0x100;
          uVar26 = 0;
          if (uVar29 <= uVar24) {
            uVar26 = uVar24 + uVar28 * -0x100;
          }
          lVar25 = unaff_R14[3];
          if ((ulonglong)(unaff_R14[1] - lVar25) < uVar26) {
            pdb_142d7f1b0(unaff_R14 + 1,lVar25,uVar26,4,4);
            lVar25 = unaff_R14[3];
            lVar22 = uVar24 + uVar28 * -0x100;
            if (uVar29 <= uVar24 && lVar22 != 0) goto LAB_1414aa2a4;
          }
          else {
            lVar22 = uVar24 + uVar28 * -0x100;
            if (uVar29 <= uVar24 && lVar22 != 0) {
LAB_1414aa2a4:
              lVar21 = _UNK_142e4fb58;
              lVar20 = _DAT_142e4fb50;
              iVar19 = _UNK_142e4fb4c;
              iVar18 = _UNK_142e4fb48;
              iVar17 = _UNK_142e4fb44;
              iVar16 = _DAT_142e4fb40;
              auVar32._8_4_ = (int)uVar24;
              auVar32._0_8_ = uVar24;
              auVar32._12_4_ = (int)(uVar24 >> 0x20);
              lVar34 = _DAT_142e4fb30 + uVar24;
              lVar35 = _UNK_142e4fb38 + auVar32._8_8_;
              lVar31 = uVar24 + _DAT_142e47bf0;
              lVar33 = auVar32._8_8_ + _UNK_142e47bf8;
              lVar4 = unaff_R14[2] + lVar25 * 4;
              lVar25 = lVar25 + lVar22;
              lVar27 = 0;
              do {
                piVar6 = (int *)(lVar4 + lVar27 * 4);
                *piVar6 = (int)lVar31 + -1;
                piVar6[1] = (int)lVar33 + -1;
                piVar6[2] = (int)lVar34 + -1;
                piVar6[3] = (int)lVar35 + -1;
                piVar6 = (int *)(lVar4 + 0x10 + lVar27 * 4);
                *piVar6 = (int)lVar31 + iVar16;
                piVar6[1] = (int)lVar33 + iVar17;
                piVar6[2] = (int)lVar34 + iVar18;
                piVar6[3] = (int)lVar35 + iVar19;
                lVar27 = lVar27 + 8;
                lVar31 = lVar31 + lVar20;
                lVar33 = lVar33 + lVar21;
                lVar34 = lVar34 + lVar20;
                lVar35 = lVar35 + lVar21;
              } while (lVar22 != lVar27);
            }
          }
          unaff_R14[3] = lVar25;
          bVar30 = lVar25 != 0;
          if (bVar30) goto LAB_1414aa033;
        }
      }
      else {
LAB_1414aa033:
        unaff_R14[3] = lVar25 + -1;
        unaff_R12 = (ulonglong)*(uint *)(unaff_R14[2] + -4 + lVar25 * 4);
      }
      pdb_140e9a350(unaff_R14);
      pdb_140e9a350();
      LOCK();
      lVar22 = *unaff_R14;
      if (lVar22 == 8) {
        *unaff_R14 = 0;
      }
      UNLOCK();
      if (lVar22 == 8) {
        if (!bVar30) {
          return 1;
        }
      }
      else {
        pdb_142dbca40(unaff_R14,0);
        if (lVar25 == 0) {
          return 1;
        }
      }
      uVar28 = unaff_R12 & 0xffffffff;
      unaff_R14 = (longlong *)param_1[4];
      lVar25 = unaff_R14[2];
      if (lVar25 == *unaff_R14) {
        pdb_142d8d710(unaff_R14);
      }
      *(int *)(unaff_R14[1] + lVar25 * 4) = (int)unaff_R12;
      unaff_R14[2] = lVar25 + 1;
      if ((ulonglong)param_1[1] <= uVar28) {
                    /* WARNING: Subroutine does not return */
        pdb_142dc81f2(uVar28,param_1[1],&UNK_143310d60);
      }
      *(undefined1 *)(*param_1 + uVar28) = 1;
      uVar26 = param_1[6];
      uVar24 = uVar28 >> 8;
      if (uVar26 <= uVar24) goto LAB_1414aa510;
    } while (*(int *)(param_1[5] + 0x10 + uVar24 * 0x18) != 0);
    plVar1 = (longlong *)(param_1[5] + uVar24 * 0x18);
    uVar23 = (uint)(uVar28 << 5) & 0x1fe0;
    uVar24 = (ulonglong)uVar23;
    uVar26 = plVar1[1];
    if (uVar26 <= uVar24) goto LAB_1414aa510;
    lVar25 = *plVar1;
    uVar26 = (ulonglong)(uVar23 << 6);
    uVar9 = *puStack_90;
    uVar10 = puStack_90[1];
    uVar14 = puStack_90[2];
    uVar15 = puStack_90[3];
    uVar11 = puStack_90[4];
    uVar12 = puStack_90[5];
    uVar13 = puStack_90[7];
    puVar5 = (undefined8 *)(lVar25 + 0x30 + uVar26);
    *puVar5 = puStack_90[6];
    puVar5[1] = uVar13;
    puVar5 = (undefined8 *)(lVar25 + 0x20 + uVar26);
    *puVar5 = uVar11;
    puVar5[1] = uVar12;
    puVar5 = (undefined8 *)(lVar25 + 0x10 + uVar26);
    *puVar5 = uVar14;
    puVar5[1] = uVar15;
    *(undefined8 *)(lVar25 + uVar26) = uVar9;
    ((undefined8 *)(lVar25 + uVar26))[1] = uVar10;
    uVar26 = param_1[3];
    uVar24 = unaff_R12 >> 6 & 0x3ffffff;
    if (uVar24 < uVar26) {
      uVar28 = 1L << ((byte)uVar28 & 0x3f);
      LOCK();
      puVar2 = (ulonglong *)(param_1[2] + uVar24 * 8);
      *puVar2 = *puVar2 | uVar28;
      UNLOCK();
      uVar26 = param_1[10];
      if (uVar24 < uVar26) {
        LOCK();
        puVar2 = (ulonglong *)(param_1[9] + uVar24 * 8);
        *puVar2 = *puVar2 | uVar28;
        UNLOCK();
        *(int *)(param_1 + 0xb) = (int)unaff_R12;
        return 0;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  pdb_142dc81f2(uVar24,uVar26,&UNK_143310c78);
}

