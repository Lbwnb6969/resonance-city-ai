// VA 0x141a75940, PDB extent 1344 bytes
// country_core::render::sparse_instance_buffer::SparseInstanceBuffer::take_out_waste<country_core::geometry::instanced_wall::BrickTransformSsbo>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/render/sparse_instance_buffer.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::render::sparse_instance_buffer::SparseInstanceBuffer::take_out_waste<country_core::geometry::instanced_wall::BrickTransformSsbo>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/render/sparse_instance_buffer.rs
   Extent: 1344 */

void pdb_141a75940(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  ulonglong *puVar2;
  undefined4 *puVar3;
  uint uVar4;
  byte *pbVar5;
  longlong lVar6;
  byte bVar7;
  code *pcVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  longlong *plVar16;
  longlong *plVar17;
  ulonglong uVar18;
  longlong lVar19;
  longlong *plVar20;
  ulonglong uVar21;
  longlong lVar22;
  ulonglong uVar23;
  ulonglong uVar24;
  undefined4 *puVar25;
  bool bVar26;
  ulonglong uStack_e8;
  ulonglong uStack_e0;
  byte *pbStack_d8;
  ulonglong uStack_d0;
  undefined8 uStack_c8;
  longlong lStack_c0;
  ulonglong uStack_b8;
  ulonglong uStack_b0;
  byte *pbStack_a8;
  ulonglong uStack_a0;
  undefined8 uStack_98;
  longlong *plStack_90;
  longlong *plStack_88;
  longlong *plStack_80;
  longlong lStack_78;
  longlong lStack_70;
  longlong *plStack_68;
  byte *pbStack_60;
  longlong *plStack_58;
  undefined1 uStack_49;
  undefined8 uStack_48;
  
  uStack_48 = 0xfffffffffffffffe;
  plVar17 = *(longlong **)(param_1 + 0x48);
  LOCK();
  lVar19 = *plVar17;
  *plVar17 = *plVar17 + 1;
  UNLOCK();
  if (*plVar17 == 0 || SCARRY8(lVar19,1) != *plVar17 < 0) {
                    /* WARNING: Does not return */
    pcVar8 = (code *)invalidInstructionException();
    (*pcVar8)();
  }
  plVar1 = plVar17 + 2;
  LOCK();
  bVar26 = (char)plVar17[2] == '\0';
  if (bVar26) {
    *(char *)(plVar17 + 2) = '\x01';
  }
  UNLOCK();
  plStack_58 = plVar17;
  if (!bVar26) {
    pdb_142dbd1a0(plVar1,param_2,1000000000);
  }
  pdb_140e9a150(plVar1);
  plStack_80 = plVar17 + 3;
  lStack_78 = plVar17[5];
  plVar17[5] = 0;
  plStack_88 = (longlong *)plVar17[4] + lStack_78;
  lStack_70 = 0;
  lStack_c0 = param_1 + 0x58;
  plVar17 = (longlong *)plVar17[4];
  plStack_68 = plVar1;
  do {
    plVar16 = plStack_68;
    lVar19 = lStack_70;
    plVar1 = plStack_80;
    plVar20 = (longlong *)(param_1 + 0x58);
    if (plVar17 == plStack_88) {
      if (lStack_70 != 0) {
        lVar6 = plStack_80[2];
        if (lStack_78 != lVar6) {
          pub_142e32770(plStack_80[1] + lVar6 * 8,plStack_80[1] + lStack_78 * 8,lStack_70 * 8);
        }
        plVar1[2] = lVar6 + lVar19;
      }
      pdb_140e9a350();
      LOCK();
      bVar26 = (char)*plVar16 == '\x01';
      if (bVar26) {
        *(char *)plVar16 = '\0';
      }
      UNLOCK();
      if (!bVar26) {
        pdb_142dbcef0(plVar16,0);
      }
      LOCK();
      *plStack_58 = *plStack_58 + -1;
      UNLOCK();
      if (*plStack_58 == 0) {
        pdb_140c7ace0(&plStack_58);
      }
      return;
    }
    plStack_90 = plVar17 + 1;
    pbVar5 = (byte *)*plVar17;
    if (pbVar5 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
      pdb_142dc8150(&UNK_143382370);
    }
    lVar19 = *(longlong *)(pbVar5 + 0x10);
    pbStack_60 = pbVar5;
    if (lVar19 != 0) {
      lVar6 = *(longlong *)(pbVar5 + 8);
      lVar22 = 0;
      do {
        uVar4 = *(uint *)(lVar6 + lVar22);
        uVar18 = (ulonglong)uVar4;
        if (*(ulonglong *)(param_1 + 0x10) <= uVar18) {
                    /* WARNING: Subroutine does not return */
          pdb_142dc81f2(uVar18,*(ulonglong *)(param_1 + 0x10),&UNK_143382388);
        }
        *(undefined1 *)(*(longlong *)(param_1 + 8) + uVar18) = 0;
        uVar18 = (ulonglong)(uVar4 >> 6);
        if (*(ulonglong *)(param_1 + 0x20) <= uVar18) {
                    /* WARNING: Subroutine does not return */
          pdb_142dc81f2(uVar18,*(ulonglong *)(param_1 + 0x20),&UNK_1433821a0);
        }
        bVar7 = (byte)uVar4 & 0x3f;
        LOCK();
        puVar2 = (ulonglong *)(*(longlong *)(param_1 + 0x18) + uVar18 * 8);
        *puVar2 = *puVar2 & (-2L << bVar7 | 0xfffffffffffffffeU >> 0x40 - bVar7);
        UNLOCK();
        lVar22 = lVar22 + 4;
      } while (lVar19 << 2 != lVar22);
    }
    LOCK();
    lVar19 = *plVar20;
    if (lVar19 == 0) {
      *plVar20 = 8;
    }
    UNLOCK();
    if (lVar19 != 0) {
      pdb_142dbc1f0(plVar20);
    }
    pdb_140e9a150(plVar20);
    pdb_140e9a150(param_1 + 0x59);
    uStack_b8 = *(ulonglong *)(pbStack_60 + 8);
    uStack_a0 = *(ulonglong *)(pbStack_60 + 0x10);
    pbStack_60[0x10] = 0;
    pbStack_60[0x11] = 0;
    pbStack_60[0x12] = 0;
    pbStack_60[0x13] = 0;
    pbStack_60[0x14] = 0;
    pbStack_60[0x15] = 0;
    pbStack_60[0x16] = 0;
    pbStack_60[0x17] = 0;
    uStack_b0 = uStack_b8 + uStack_a0 * 4;
    pbStack_a8 = pbStack_60;
    uStack_98 = 0;
    lVar19 = *(longlong *)(param_1 + 0x70);
    if ((ulonglong)(*(longlong *)(param_1 + 0x60) - lVar19) < uStack_a0) {
      uStack_49 = 1;
      pdb_142d7f1b0(param_1 + 0x60,lVar19,uStack_a0,4,4);
      lVar19 = *(longlong *)(param_1 + 0x70);
    }
    lVar6 = *(longlong *)(param_1 + 0x68);
    uStack_e8 = uStack_b8;
    uStack_e0 = uStack_b0;
    uStack_c8 = uStack_98;
    pbStack_d8 = pbStack_a8;
    uStack_d0 = uStack_a0;
    if (uStack_b8 != uStack_b0) {
      uVar23 = (uStack_b0 - uStack_b8) - 4;
      uVar18 = uStack_b0;
      if ((0x3b < uVar23) &&
         ((uVar24 = lVar6 + lVar19 * 4, uStack_b0 <= uVar24 ||
          (uVar21 = (uStack_b0 - 4) - uStack_b8 & 0xfffffffffffffffc,
          uVar24 + uVar21 + 4 <= (uStack_b0 - 4) - uVar21)))) {
        uVar24 = (uVar23 >> 2) + 1;
        uVar23 = uVar24 & 0xfffffffffffffff8;
        uStack_e0 = uStack_b0 + uVar23 * -4;
        puVar25 = (undefined4 *)(lVar6 + lVar19 * 4 + 0x10);
        lVar19 = lVar19 + uVar23;
        lVar22 = 0;
        do {
          puVar3 = (undefined4 *)((uStack_b0 - 0x20) + lVar22 * 4);
          uVar9 = *puVar3;
          uVar10 = puVar3[1];
          uVar11 = puVar3[2];
          uVar12 = puVar3[3];
          puVar3 = (undefined4 *)((uStack_b0 - 0x10) + lVar22 * 4);
          uVar13 = *puVar3;
          uVar14 = puVar3[1];
          uVar15 = puVar3[2];
          puVar25[-4] = puVar3[3];
          puVar25[-3] = uVar15;
          puVar25[-2] = uVar14;
          puVar25[-1] = uVar13;
          *puVar25 = uVar12;
          puVar25[1] = uVar11;
          puVar25[2] = uVar10;
          puVar25[3] = uVar9;
          puVar25 = puVar25 + 8;
          lVar22 = lVar22 + -8;
        } while (-lVar22 != uVar23);
        uVar18 = uStack_e0;
        if (uVar24 == uVar23) goto LAB_141a75be8;
      }
      do {
        uStack_e0 = uVar18 - 4;
        *(undefined4 *)(lVar6 + lVar19 * 4) = *(undefined4 *)(uVar18 - 4);
        lVar19 = lVar19 + 1;
        uVar18 = uStack_e0;
      } while (uStack_e0 != uStack_b8);
    }
LAB_141a75be8:
    *(longlong *)(param_1 + 0x70) = lVar19;
    uStack_49 = 0;
    pdb_1409693f0(&uStack_e8);
    plVar17 = (longlong *)(param_1 + 0x58);
    pdb_140e9a350(plVar17);
    pdb_140e9a350(param_1 + 0x59);
    LOCK();
    lVar19 = *plVar17;
    if (lVar19 == 8) {
      *plVar17 = 0;
    }
    UNLOCK();
    if (lVar19 != 8) {
      pdb_142dbca40(plVar17,0);
    }
    pbVar5 = pbStack_60;
    if (*(longlong *)pbStack_60 != 0) {
      pub_1406abac0(*(byte **)(pbStack_60 + 8),*(longlong *)pbStack_60 << 2,4);
    }
    pub_1406abac0(pbVar5,0x20,8);
    plVar17 = plStack_90;
  } while( true );
}

