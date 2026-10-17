// Matched PDB: country_core::render::sparse_instance_buffer::SparseInstanceBufferWriter::push<country_core::resources::roof_tile_ssbo::RoofTileSsbo>
// VA 0x141f49fd0, PDB extent 1774 bytes
// Ghidra pseudocode; types and unresolved calls are not original source.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB:
   country_core::render::sparse_instance_buffer::SparseInstanceBufferWriter::push<country_core::resources::roof_tile_ssbo::RoofTileSsbo>
   Extent: 1774 bytes. No whole-program auto-analysis. */

undefined8 pdb_141f49fd0(longlong *param_1,undefined8 *param_2)

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
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  longlong lVar19;
  longlong lVar20;
  longlong lVar21;
  undefined8 uVar22;
  uint uVar23;
  ulonglong uVar24;
  longlong lVar25;
  longlong lVar26;
  ulonglong unaff_RBX;
  ulonglong uVar27;
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
  uVar24 = (ulonglong)uVar23;
  if ((ulonglong)param_1[1] <= uVar24) {
    pdb_142dc81f2(uVar24,param_1[1],&UNK_143432538);
    goto LAB_141f4a5e0;
  }
  bVar7 = *(byte *)(*param_1 + uVar24);
  if (0x1f < (ulonglong)bVar7) {
    unaff_R14 = (longlong *)param_1[8];
    LOCK();
    lVar21 = *unaff_R14;
    if (lVar21 == 0) {
      *unaff_R14 = 8;
    }
    UNLOCK();
    puStack_90 = param_2;
    if (lVar21 != 0) goto LAB_141f4a551;
    goto LAB_141f4a0df;
  }
  *(byte *)(*param_1 + uVar24) = bVar7 + 1;
  uVar24 = (ulonglong)(uVar23 >> 8);
  if ((ulonglong)param_1[6] <= uVar24) goto LAB_141f4a5fb;
  if (*(int *)(param_1[5] + 0x10 + uVar24 * 0x18) == 0) {
    plVar1 = (longlong *)(param_1[5] + uVar24 * 0x18);
    uVar24 = (ulonglong)((uVar23 & 0xff) << 5) | (ulonglong)bVar7;
    if (uVar24 < (ulonglong)plVar1[1]) {
      lVar21 = *plVar1;
      uVar24 = (ulonglong)(uint)((int)uVar24 << 6);
      uVar22 = *param_2;
      uVar9 = param_2[1];
      uVar10 = param_2[2];
      uVar11 = param_2[3];
      uVar12 = param_2[4];
      uVar13 = param_2[5];
      uVar14 = param_2[7];
      puVar5 = (undefined8 *)(lVar21 + 0x30 + uVar24);
      *puVar5 = param_2[6];
      puVar5[1] = uVar14;
      puVar5 = (undefined8 *)(lVar21 + 0x20 + uVar24);
      *puVar5 = uVar12;
      puVar5[1] = uVar13;
      puVar5 = (undefined8 *)(lVar21 + 0x10 + uVar24);
      *puVar5 = uVar10;
      puVar5[1] = uVar11;
      *(undefined8 *)(lVar21 + uVar24) = uVar22;
      ((undefined8 *)(lVar21 + uVar24))[1] = uVar9;
      uVar24 = (ulonglong)(*(uint *)(param_1 + 0xb) >> 6);
      if (uVar24 < (ulonglong)param_1[10]) {
        LOCK();
        puVar2 = (ulonglong *)(param_1[9] + uVar24 * 8);
        *puVar2 = *puVar2 | 1L << ((byte)*(uint *)(param_1 + 0xb) & 0x3f);
        UNLOCK();
        return 0;
      }
    }
    else {
LAB_141f4a5e0:
      uVar24 = pdb_142dc81f2();
    }
  }
  else {
    do {
      pdb_142dc8110(&UNK_1434324f8,0x25,&UNK_143432520);
LAB_141f4a551:
      pdb_142dbc1f0(unaff_R14);
LAB_141f4a0df:
      pdb_140e9a150(unaff_R14);
      pdb_140e9a150((ulonglong)unaff_R14 | 1);
      lVar21 = unaff_R14[3];
      bVar30 = lVar21 != 0;
      if (lVar21 == 0) {
        puVar2 = (ulonglong *)param_1[7];
        uVar24 = *puVar2;
        uVar28 = param_1[6];
        uVar27 = uVar24 * 2;
        if (uVar28 < uVar24 * 2) {
          uVar27 = uVar28;
        }
        if (uVar27 != uVar24) {
          if (uVar27 < uVar24) {
            pdb_142dc8420(uVar24,uVar27,uVar28,&UNK_1434324c8);
LAB_141f4a5d2:
                    /* WARNING: Does not return */
            pcVar8 = (code *)invalidInstructionException();
            (*pcVar8)();
          }
          unaff_R12 = param_1[5] + uVar27 * 0x18;
          uVar28 = param_1[5] + uVar24 * 0x18;
          do {
            pdb_14007ee60();
            lVar21 = func_0x0001406abab0(0x80000);
            if (lVar21 == 0) {
              pdb_142dc7e2a(4,0x80000);
              goto LAB_141f4a5d2;
            }
            uVar29 = uVar28 + 0x18;
            lVar25 = 0x1c0;
            while( true ) {
              *(undefined1 (*) [16])(lVar21 + -400 + lVar25) = (undefined1  [16])0x0;
              *(undefined1 (*) [16])(lVar21 + -0x1a0 + lVar25) = (undefined1  [16])0x0;
              *(undefined1 (*) [16])(lVar21 + -0x1b0 + lVar25) = (undefined1  [16])0x0;
              *(undefined1 (*) [16])(lVar21 + -0x1c0 + lVar25) = (undefined1  [16])0x0;
              *(undefined1 (*) [16])(lVar21 + -0x180 + lVar25) = (undefined1  [16])0x0;
              *(undefined1 (*) [16])(lVar21 + -0x170 + lVar25) = (undefined1  [16])0x0;
              *(undefined1 (*) [16])(lVar21 + -0x160 + lVar25) = (undefined1  [16])0x0;
              *(undefined1 (*) [16])(lVar21 + -0x150 + lVar25) = (undefined1  [16])0x0;
              *(undefined1 (*) [16])(lVar21 + -0x140 + lVar25) = (undefined1  [16])0x0;
              *(undefined1 (*) [16])(lVar21 + -0x130 + lVar25) = (undefined1  [16])0x0;
              *(undefined1 (*) [16])(lVar21 + -0x120 + lVar25) = (undefined1  [16])0x0;
              *(undefined1 (*) [16])(lVar21 + -0x110 + lVar25) = (undefined1  [16])0x0;
              *(undefined1 (*) [16])(lVar21 + -0x100 + lVar25) = (undefined1  [16])0x0;
              *(undefined1 (*) [16])(lVar21 + -0xf0 + lVar25) = (undefined1  [16])0x0;
              *(undefined1 (*) [16])(lVar21 + -0xe0 + lVar25) = (undefined1  [16])0x0;
              *(undefined1 (*) [16])(lVar21 + -0xd0 + lVar25) = (undefined1  [16])0x0;
              *(undefined1 (*) [16])(lVar21 + -0x90 + lVar25) = (undefined1  [16])0x0;
              *(undefined1 (*) [16])(lVar21 + -0xa0 + lVar25) = (undefined1  [16])0x0;
              *(undefined1 (*) [16])(lVar21 + -0xb0 + lVar25) = (undefined1  [16])0x0;
              *(undefined1 (*) [16])(lVar21 + -0xc0 + lVar25) = (undefined1  [16])0x0;
              *(undefined1 (*) [16])(lVar21 + -0x50 + lVar25) = (undefined1  [16])0x0;
              *(undefined1 (*) [16])(lVar21 + -0x60 + lVar25) = (undefined1  [16])0x0;
              *(undefined1 (*) [16])(lVar21 + -0x70 + lVar25) = (undefined1  [16])0x0;
              *(undefined1 (*) [16])(lVar21 + -0x80 + lVar25) = (undefined1  [16])0x0;
              *(undefined1 (*) [16])(lVar21 + -0x40 + lVar25) = (undefined1  [16])0x0;
              *(undefined1 (*) [16])(lVar21 + -0x30 + lVar25) = (undefined1  [16])0x0;
              *(undefined1 (*) [16])(lVar21 + -0x20 + lVar25) = (undefined1  [16])0x0;
              *(undefined1 (*) [16])(lVar21 + -0x10 + lVar25) = (undefined1  [16])0x0;
              if (lVar25 == 0x7ffc0) break;
              pauVar3 = (undefined1 (*) [16])(lVar21 + lVar25);
              pauVar3[3] = (undefined1  [16])0x0;
              pauVar3[2] = (undefined1  [16])0x0;
              pauVar3[1] = (undefined1  [16])0x0;
              *pauVar3 = (undefined1  [16])0x0;
              lVar25 = lVar25 + 0x200;
            }
            *(undefined1 (*) [16])(lVar21 + 0x7fff0) = (undefined1  [16])0x0;
            *(undefined1 (*) [16])(lVar21 + 0x7ffe0) = (undefined1  [16])0x0;
            *(undefined1 (*) [16])(lVar21 + 0x7ffd0) = (undefined1  [16])0x0;
            *(undefined1 (*) [16])(lVar21 + 0x7ffc0) = (undefined1  [16])0x0;
            if (*(int *)(uVar28 + 0x10) != 0) {
              pdb_142e294d7(uVar28);
            }
            if (lVar21 != 0) {
              func_0x0001406abac0();
            }
            uVar28 = uVar29;
          } while (uVar29 != unaff_R12);
          *puVar2 = uVar27;
          uVar27 = (uVar27 & 0x7ffffffffffff) * 0x100;
          uVar24 = uVar24 & 0x7ffffffffffff;
          uVar29 = uVar24 * 0x100;
          uVar28 = 0;
          if (uVar29 <= uVar27) {
            uVar28 = uVar27 + uVar24 * -0x100;
          }
          lVar21 = unaff_R14[3];
          if ((ulonglong)(unaff_R14[1] - lVar21) < uVar28) {
            pdb_142d7f1b0(unaff_R14 + 1,lVar21,uVar28,4,4);
            lVar21 = unaff_R14[3];
            lVar25 = uVar27 + uVar24 * -0x100;
            if (uVar29 <= uVar27 && lVar25 != 0) goto LAB_141f4a374;
          }
          else {
            lVar25 = uVar27 + uVar24 * -0x100;
            if (uVar29 <= uVar27 && lVar25 != 0) {
LAB_141f4a374:
              lVar20 = _UNK_142e4fb58;
              lVar19 = _DAT_142e4fb50;
              iVar18 = _UNK_142e4fb4c;
              iVar17 = _UNK_142e4fb48;
              iVar16 = _UNK_142e4fb44;
              iVar15 = _DAT_142e4fb40;
              auVar32._8_4_ = (int)uVar27;
              auVar32._0_8_ = uVar27;
              auVar32._12_4_ = (int)(uVar27 >> 0x20);
              lVar34 = _DAT_142e4fb30 + uVar27;
              lVar35 = _UNK_142e4fb38 + auVar32._8_8_;
              lVar31 = uVar27 + _DAT_142e47bf0;
              lVar33 = auVar32._8_8_ + _UNK_142e47bf8;
              lVar4 = unaff_R14[2] + lVar21 * 4;
              lVar21 = lVar21 + lVar25;
              lVar26 = 0;
              do {
                piVar6 = (int *)(lVar4 + lVar26 * 4);
                *piVar6 = (int)lVar31 + -1;
                piVar6[1] = (int)lVar33 + -1;
                piVar6[2] = (int)lVar34 + -1;
                piVar6[3] = (int)lVar35 + -1;
                piVar6 = (int *)(lVar4 + 0x10 + lVar26 * 4);
                *piVar6 = (int)lVar31 + iVar15;
                piVar6[1] = (int)lVar33 + iVar16;
                piVar6[2] = (int)lVar34 + iVar17;
                piVar6[3] = (int)lVar35 + iVar18;
                lVar26 = lVar26 + 8;
                lVar31 = lVar31 + lVar19;
                lVar33 = lVar33 + lVar20;
                lVar34 = lVar34 + lVar19;
                lVar35 = lVar35 + lVar20;
              } while (lVar25 != lVar26);
            }
          }
          unaff_R14[3] = lVar21;
          bVar30 = lVar21 != 0;
          if (bVar30) goto LAB_141f4a103;
        }
      }
      else {
LAB_141f4a103:
        unaff_R14[3] = lVar21 + -1;
        unaff_R12 = (ulonglong)*(uint *)(unaff_R14[2] + -4 + lVar21 * 4);
      }
      pdb_140e9a350(unaff_R14);
      pdb_140e9a350();
      LOCK();
      lVar25 = *unaff_R14;
      if (lVar25 == 8) {
        *unaff_R14 = 0;
      }
      UNLOCK();
      if (lVar25 == 8) {
        if (!bVar30) {
          return 1;
        }
      }
      else {
        pdb_142dbca40(unaff_R14,0);
        if (lVar21 == 0) {
          return 1;
        }
      }
      unaff_RBX = unaff_R12 & 0xffffffff;
      unaff_R14 = (longlong *)param_1[4];
      lVar21 = unaff_R14[2];
      if (lVar21 == *unaff_R14) {
        pdb_142d8d710(unaff_R14);
      }
      *(int *)(unaff_R14[1] + lVar21 * 4) = (int)unaff_R12;
      unaff_R14[2] = lVar21 + 1;
      if ((ulonglong)param_1[1] <= unaff_RBX) goto LAB_141f4a60a;
      *(undefined1 *)(*param_1 + unaff_RBX) = 1;
      uVar24 = unaff_RBX >> 8;
      if ((ulonglong)param_1[6] <= uVar24) goto LAB_141f4a5e0;
    } while (*(int *)(param_1[5] + 0x10 + uVar24 * 0x18) != 0);
    plVar1 = (longlong *)(param_1[5] + uVar24 * 0x18);
    uVar23 = (uint)(unaff_RBX << 5) & 0x1fe0;
    if ((ulonglong)plVar1[1] <= (ulonglong)uVar23) goto LAB_141f4a5e0;
    lVar21 = *plVar1;
    uVar24 = (ulonglong)(uVar23 << 6);
    uVar22 = *puStack_90;
    uVar9 = puStack_90[1];
    uVar10 = puStack_90[2];
    uVar11 = puStack_90[3];
    uVar12 = puStack_90[4];
    uVar13 = puStack_90[5];
    uVar14 = puStack_90[7];
    puVar5 = (undefined8 *)(lVar21 + 0x30 + uVar24);
    *puVar5 = puStack_90[6];
    puVar5[1] = uVar14;
    puVar5 = (undefined8 *)(lVar21 + 0x20 + uVar24);
    *puVar5 = uVar12;
    puVar5[1] = uVar13;
    puVar5 = (undefined8 *)(lVar21 + 0x10 + uVar24);
    *puVar5 = uVar10;
    puVar5[1] = uVar11;
    *(undefined8 *)(lVar21 + uVar24) = uVar22;
    ((undefined8 *)(lVar21 + uVar24))[1] = uVar9;
    uVar24 = unaff_R12 >> 6 & 0x3ffffff;
    if (uVar24 < (ulonglong)param_1[3]) {
      uVar28 = 1L << ((byte)unaff_RBX & 0x3f);
      LOCK();
      puVar2 = (ulonglong *)(param_1[2] + uVar24 * 8);
      *puVar2 = *puVar2 | uVar28;
      UNLOCK();
      if (uVar24 < (ulonglong)param_1[10]) {
        LOCK();
        puVar2 = (ulonglong *)(param_1[9] + uVar24 * 8);
        *puVar2 = *puVar2 | uVar28;
        UNLOCK();
        *(int *)(param_1 + 0xb) = (int)unaff_R12;
        return 0;
      }
    }
  }
  uVar24 = pdb_142dc81f2(uVar24);
LAB_141f4a5fb:
  pdb_142dc81f2(uVar24);
LAB_141f4a60a:
  pdb_142dc81f2(unaff_RBX);
  pcVar8 = (code *)swi(3);
  uVar22 = (*pcVar8)();
  return uVar22;
}

