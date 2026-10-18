// VA 0x1413f7520, PDB extent 1697 bytes
// country_core::render::sparse_instance_buffer::SparseInstanceBufferWriter::push<country_core::resources::sparkle::SparkleSsbo>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/render/sparse_instance_buffer.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::render::sparse_instance_buffer::SparseInstanceBufferWriter::push<country_core::resources::sparkle::SparkleSsbo>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/render/sparse_instance_buffer.rs
   Extent: 1697 */

undefined8 pdb_1413f7520(longlong *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  ulonglong *puVar2;
  byte *pbVar3;
  longlong lVar4;
  undefined8 *puVar5;
  int *piVar6;
  byte bVar7;
  code *pcVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  longlong lVar16;
  longlong lVar17;
  byte *pbVar18;
  uint uVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  longlong lVar22;
  longlong lVar23;
  ulonglong uVar24;
  ulonglong unaff_R12;
  longlong lVar25;
  longlong *unaff_R14;
  ulonglong uVar26;
  longlong lVar27;
  undefined1 auVar28 [16];
  longlong lVar29;
  longlong lVar30;
  longlong lVar31;
  byte *pbStack_88;
  longlong lStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  longlong *plStack_68;
  undefined8 uStack_60;
  
  uStack_60 = 0xfffffffffffffffe;
  uVar19 = *(uint *)(param_1 + 0xb);
  uVar24 = (ulonglong)uVar19;
  if ((ulonglong)param_1[1] <= uVar24) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc81f2(uVar24,param_1[1],&UNK_143305d90);
  }
  bVar7 = *(byte *)(*param_1 + uVar24);
  if (0x1f < (ulonglong)bVar7) {
    unaff_R14 = (longlong *)param_1[8];
    LOCK();
    lVar25 = *unaff_R14;
    if (lVar25 == 0) {
      *unaff_R14 = 8;
    }
    UNLOCK();
    if (lVar25 != 0) goto LAB_1413f7a31;
    goto LAB_1413f761a;
  }
  *(byte *)(*param_1 + uVar24) = bVar7 + 1;
  uVar24 = (ulonglong)(uVar19 >> 8);
  if ((ulonglong)param_1[6] <= uVar24) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc81f2(uVar24,param_1[6],&UNK_143305d38);
  }
  if (*(int *)(param_1[5] + 0x10 + uVar24 * 0x18) == 0) {
    plVar1 = (longlong *)(param_1[5] + uVar24 * 0x18);
    uVar20 = (ulonglong)((uVar19 & 0xff) << 5) | (ulonglong)bVar7;
    uVar21 = plVar1[1];
    if (uVar21 <= uVar20) {
LAB_1413f7ae3:
                    /* WARNING: Subroutine does not return */
      pdb_142dc81f2(uVar20,uVar21,&UNK_143305d38);
    }
    lVar25 = *plVar1;
    uVar24 = (ulonglong)(uint)((int)uVar20 << 5);
    uVar9 = *param_2;
    uVar10 = param_2[1];
    uVar11 = param_2[3];
    puVar5 = (undefined8 *)(lVar25 + 0x10 + uVar24);
    *puVar5 = param_2[2];
    puVar5[1] = uVar11;
    puVar5 = (undefined8 *)(lVar25 + uVar24);
    *puVar5 = uVar9;
    puVar5[1] = uVar10;
    uVar21 = param_1[10];
    uVar20 = (ulonglong)(*(uint *)(param_1 + 0xb) >> 6);
    if (uVar20 < uVar21) {
      LOCK();
      puVar2 = (ulonglong *)(param_1[9] + uVar20 * 8);
      *puVar2 = *puVar2 | 1L << ((byte)*(uint *)(param_1 + 0xb) & 0x3f);
      UNLOCK();
      return 0;
    }
  }
  else {
    do {
      pdb_142dc8110(&UNK_143305d50,0x25,&UNK_143305d78);
LAB_1413f7a31:
      pdb_142dbc1f0(unaff_R14);
LAB_1413f761a:
      pdb_140e9a150(unaff_R14);
      pdb_140e9a150((ulonglong)unaff_R14 | 1);
      lVar25 = unaff_R14[3];
      if (lVar25 == 0) {
        puVar2 = (ulonglong *)param_1[7];
        uVar24 = *puVar2;
        uVar21 = param_1[6];
        uVar20 = uVar24 * 2;
        if (uVar21 < uVar24 * 2) {
          uVar20 = uVar21;
        }
        if (uVar20 == uVar24) goto LAB_1413f7680;
        plStack_68 = unaff_R14;
        if (uVar20 < uVar24) {
          pdb_142dc8420(uVar24,uVar20,uVar21,&UNK_143305d20);
LAB_1413f7ad5:
                    /* WARNING: Does not return */
          pcVar8 = (code *)invalidInstructionException();
          (*pcVar8)();
        }
        lVar25 = param_1[5];
        unaff_R12 = lVar25 + uVar24 * 0x18;
        while (unaff_R12 != lVar25 + uVar20 * 0x18) {
          pdb_14090df50(&pbStack_88);
          pdb_14007ee60();
          pbVar18 = pub_1406abab0(0x40000,4);
          if (pbVar18 == (byte *)0x0) {
            pdb_142dc7e2a(4,0x40000);
            goto LAB_1413f7ad5;
          }
          uVar21 = unaff_R12 + 0x18;
          lVar22 = 0x60;
          while( true ) {
            *(undefined8 *)(pbVar18 + lVar22 + -0x50) = uStack_78;
            *(undefined8 *)(pbVar18 + lVar22 + -0x50 + 8) = uStack_70;
            *(byte **)(pbVar18 + lVar22 + -0x60) = pbStack_88;
            *(longlong *)(pbVar18 + lVar22 + -0x60 + 8) = lStack_80;
            *(byte **)(pbVar18 + lVar22 + -0x40) = pbStack_88;
            *(longlong *)(pbVar18 + lVar22 + -0x40 + 8) = lStack_80;
            *(undefined8 *)(pbVar18 + lVar22 + -0x30) = uStack_78;
            *(undefined8 *)(pbVar18 + lVar22 + -0x30 + 8) = uStack_70;
            *(byte **)(pbVar18 + lVar22 + -0x20) = pbStack_88;
            *(longlong *)(pbVar18 + lVar22 + -0x20 + 8) = lStack_80;
            *(undefined8 *)(pbVar18 + lVar22 + -0x10) = uStack_78;
            *(undefined8 *)(pbVar18 + lVar22 + -0x10 + 8) = uStack_70;
            if (lVar22 == 0x3ffe0) break;
            pbVar3 = pbVar18 + lVar22;
            *(undefined8 *)(pbVar3 + 0x10) = uStack_78;
            *(undefined8 *)(pbVar3 + 0x18) = uStack_70;
            *(byte **)pbVar3 = pbStack_88;
            *(longlong *)(pbVar3 + 8) = lStack_80;
            lVar22 = lVar22 + 0x80;
          }
          *(undefined8 *)(pbVar18 + 0x3fff0) = uStack_78;
          *(undefined8 *)(pbVar18 + 0x3fff8) = uStack_70;
          *(byte **)(pbVar18 + 0x3ffe0) = pbStack_88;
          *(longlong *)(pbVar18 + 0x3ffe8) = lStack_80;
          lStack_80 = 0x2000;
          pbStack_88 = pbVar18;
          if (*(int *)(unaff_R12 + 0x10) != 0) {
            pdb_142e1d072(unaff_R12,&pbStack_88);
          }
          unaff_R12 = uVar21;
          if ((pbStack_88 != (byte *)0x0) && (lStack_80 != 0)) {
            pub_1406abac0(pbStack_88,lStack_80 << 5,4);
          }
        }
        *puVar2 = uVar20;
        uVar26 = (uVar20 & 0x7ffffffffffff) * 0x100;
        uVar24 = uVar24 & 0x7ffffffffffff;
        uVar20 = uVar24 * 0x100;
        uVar21 = 0;
        if (uVar20 <= uVar26) {
          uVar21 = uVar26 + uVar24 * -0x100;
        }
        lVar25 = plStack_68[3];
        if ((ulonglong)(plStack_68[1] - lVar25) < uVar21) {
          pdb_142d7f1b0(unaff_R14 + 1,lVar25,uVar21,4,4);
          lVar25 = plStack_68[3];
          lVar22 = uVar26 + uVar24 * -0x100;
          if (uVar20 <= uVar26 && lVar22 != 0) goto LAB_1413f7941;
        }
        else {
          lVar22 = uVar26 + uVar24 * -0x100;
          if (uVar20 <= uVar26 && lVar22 != 0) {
LAB_1413f7941:
            lVar17 = _UNK_142e4fb58;
            lVar16 = _DAT_142e4fb50;
            iVar15 = _UNK_142e4fb4c;
            iVar14 = _UNK_142e4fb48;
            iVar13 = _UNK_142e4fb44;
            iVar12 = _DAT_142e4fb40;
            auVar28._8_4_ = (int)uVar26;
            auVar28._0_8_ = uVar26;
            auVar28._12_4_ = (int)(uVar26 >> 0x20);
            lVar30 = _DAT_142e4fb30 + uVar26;
            lVar31 = _UNK_142e4fb38 + auVar28._8_8_;
            lVar27 = uVar26 + _DAT_142e47bf0;
            lVar29 = auVar28._8_8_ + _UNK_142e47bf8;
            lVar4 = plStack_68[2] + lVar25 * 4;
            lVar25 = lVar25 + lVar22;
            lVar23 = 0;
            do {
              piVar6 = (int *)(lVar4 + lVar23 * 4);
              *piVar6 = (int)lVar27 + -1;
              piVar6[1] = (int)lVar29 + -1;
              piVar6[2] = (int)lVar30 + -1;
              piVar6[3] = (int)lVar31 + -1;
              piVar6 = (int *)(lVar4 + 0x10 + lVar23 * 4);
              *piVar6 = (int)lVar27 + iVar12;
              piVar6[1] = (int)lVar29 + iVar13;
              piVar6[2] = (int)lVar30 + iVar14;
              piVar6[3] = (int)lVar31 + iVar15;
              lVar23 = lVar23 + 8;
              lVar27 = lVar27 + lVar16;
              lVar29 = lVar29 + lVar17;
              lVar30 = lVar30 + lVar16;
              lVar31 = lVar31 + lVar17;
            } while (lVar22 != lVar23);
          }
        }
        plVar1 = plStack_68;
        plStack_68[3] = lVar25;
        if (lVar25 != 0) {
          plStack_68[3] = lVar25 + -1;
          unaff_R12 = (ulonglong)*(uint *)(plStack_68[2] + -4 + lVar25 * 4);
        }
        pdb_140e9a350(plStack_68);
        pdb_140e9a350();
        LOCK();
        lVar22 = *plVar1;
        if (lVar22 == 8) {
          *plVar1 = 0;
        }
        UNLOCK();
        if (lVar22 != 8) {
          pdb_142dbca40(plVar1,0);
          goto joined_r0x0001413f7abd;
        }
        if (lVar25 == 0) {
          return 1;
        }
      }
      else {
        unaff_R14[3] = lVar25 + -1;
        unaff_R12 = (ulonglong)*(uint *)(unaff_R14[2] + -4 + lVar25 * 4);
LAB_1413f7680:
        pdb_140e9a350(unaff_R14);
        pdb_140e9a350();
        LOCK();
        lVar22 = *unaff_R14;
        if (lVar22 == 8) {
          *unaff_R14 = 0;
        }
        UNLOCK();
        if (lVar22 == 8) {
          if (lVar25 == 0) {
            return 1;
          }
        }
        else {
          pdb_142dbca40(unaff_R14,0);
joined_r0x0001413f7abd:
          if (lVar25 == 0) {
            return 1;
          }
        }
      }
      uVar24 = unaff_R12 & 0xffffffff;
      unaff_R14 = (longlong *)param_1[4];
      lVar25 = unaff_R14[2];
      if (lVar25 == *unaff_R14) {
        pdb_142d8d710(unaff_R14);
      }
      *(int *)(unaff_R14[1] + lVar25 * 4) = (int)unaff_R12;
      unaff_R14[2] = lVar25 + 1;
      if ((ulonglong)param_1[1] <= uVar24) {
                    /* WARNING: Subroutine does not return */
        pdb_142dc81f2(uVar24,param_1[1],&UNK_143305da8);
      }
      *(undefined1 *)(*param_1 + uVar24) = 1;
      uVar21 = param_1[6];
      uVar20 = uVar24 >> 8;
      if (uVar21 <= uVar20) goto LAB_1413f7ae3;
    } while (*(int *)(param_1[5] + 0x10 + uVar20 * 0x18) != 0);
    plVar1 = (longlong *)(param_1[5] + uVar20 * 0x18);
    uVar19 = (uint)(uVar24 << 5) & 0x1fe0;
    uVar20 = (ulonglong)uVar19;
    uVar21 = plVar1[1];
    if (uVar21 <= uVar20) goto LAB_1413f7ae3;
    lVar25 = *plVar1;
    uVar21 = (ulonglong)(uVar19 << 5);
    uVar9 = *param_2;
    uVar10 = param_2[1];
    uVar11 = param_2[3];
    puVar5 = (undefined8 *)(lVar25 + 0x10 + uVar21);
    *puVar5 = param_2[2];
    puVar5[1] = uVar11;
    puVar5 = (undefined8 *)(lVar25 + uVar21);
    *puVar5 = uVar9;
    puVar5[1] = uVar10;
    uVar21 = param_1[3];
    uVar20 = unaff_R12 >> 6 & 0x3ffffff;
    if (uVar20 < uVar21) {
      uVar24 = 1L << ((byte)uVar24 & 0x3f);
      LOCK();
      puVar2 = (ulonglong *)(param_1[2] + uVar20 * 8);
      *puVar2 = *puVar2 | uVar24;
      UNLOCK();
      uVar21 = param_1[10];
      if (uVar20 < uVar21) {
        LOCK();
        puVar2 = (ulonglong *)(param_1[9] + uVar20 * 8);
        *puVar2 = *puVar2 | uVar24;
        UNLOCK();
        *(int *)(param_1 + 0xb) = (int)unaff_R12;
        return 0;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  pdb_142dc81f2(uVar20,uVar21,&UNK_143305af8);
}

