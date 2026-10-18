// VA 0x14281a140, PDB extent 801 bytes
// country_core::render::sparse_instance_buffer::SparseInstanceBufferWriter::clear<country_core::resources::roofs::roof_buffers::WoodenPlankSsbo>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/render/sparse_instance_buffer.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::render::sparse_instance_buffer::SparseInstanceBufferWriter::clear<country_core::resources::roofs::roof_buffers::WoodenPlankSsbo>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/render/sparse_instance_buffer.rs
   Extent: 801 */

longlong pdb_14281a140(longlong *param_1)

{
  ulonglong *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  byte bVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  longlong lVar15;
  longlong lVar16;
  undefined4 *puVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  longlong lVar21;
  bool bVar22;
  ulonglong uStack_98;
  ulonglong uStack_90;
  longlong lStack_88;
  ulonglong uStack_80;
  undefined8 uStack_78;
  ulonglong uStack_70;
  ulonglong uStack_68;
  longlong lStack_60;
  ulonglong uStack_58;
  undefined8 uStack_50;
  longlong *plStack_48;
  undefined1 uStack_39;
  undefined8 uStack_38;
  
  uStack_38 = 0xfffffffffffffffe;
  uVar18 = param_1[1];
  if (uVar18 == 0) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc8150(&UNK_14359dc18);
  }
  *(int *)(param_1 + 0xb) = (int)uVar18 + -1;
  lVar15 = *(longlong *)(param_1[4] + 0x10);
  if (lVar15 != 0) {
    lVar4 = *(longlong *)(param_1[4] + 8);
    lVar21 = *param_1;
    lVar5 = param_1[2];
    uVar19 = param_1[3];
    lVar16 = 0;
    do {
      uVar3 = *(uint *)(lVar4 + lVar16);
      uVar20 = (ulonglong)uVar3;
      if (uVar18 <= uVar20) {
                    /* WARNING: Subroutine does not return */
        pdb_142dc81f2(uVar20,uVar18,&UNK_14359dc30);
      }
      *(undefined1 *)(lVar21 + uVar20) = 0;
      uVar20 = (ulonglong)(uVar3 >> 6);
      if (uVar19 <= uVar20) {
                    /* WARNING: Subroutine does not return */
        pdb_142dc81f2(uVar20,uVar19,&UNK_14359db30);
      }
      bVar7 = (byte)uVar3 & 0x3f;
      LOCK();
      puVar1 = (ulonglong *)(lVar5 + uVar20 * 8);
      *puVar1 = *puVar1 & (-2L << bVar7 | 0xfffffffffffffffeU >> 0x40 - bVar7);
      UNLOCK();
      lVar16 = lVar16 + 4;
    } while (lVar15 << 2 != lVar16);
  }
  plVar6 = (longlong *)param_1[8];
  LOCK();
  lVar15 = *plVar6;
  if (lVar15 == 0) {
    *plVar6 = 8;
  }
  UNLOCK();
  if (lVar15 != 0) {
    pdb_142dbc1f0(plVar6,uVar18,1000000000);
  }
  pdb_140e9a150(plVar6);
  pdb_140e9a150((ulonglong)plVar6 | 1);
  lStack_60 = param_1[4];
  uStack_70 = *(ulonglong *)(lStack_60 + 8);
  uStack_58 = *(ulonglong *)(lStack_60 + 0x10);
  *(undefined8 *)(lStack_60 + 0x10) = 0;
  uStack_68 = uStack_70 + uStack_58 * 4;
  uStack_50 = 0;
  lVar15 = plVar6[3];
  plStack_48 = plVar6;
  if ((ulonglong)(plVar6[1] - lVar15) < uStack_58) {
    uStack_39 = 1;
    pdb_142d7f1b0(plVar6 + 1,lVar15,uStack_58,4,4);
    lVar15 = plStack_48[3];
  }
  lVar4 = plStack_48[2];
  uStack_98 = uStack_70;
  uStack_90 = uStack_68;
  uStack_78 = uStack_50;
  lStack_88 = lStack_60;
  uStack_80 = uStack_58;
  if (uStack_70 != uStack_68) {
    uVar19 = (uStack_68 - uStack_70) - 4;
    uVar18 = uStack_68;
    if ((0x6b < uVar19) &&
       ((uVar20 = lVar4 + lVar15 * 4, uStack_68 <= uVar20 ||
        (uVar20 + (uVar19 & 0xfffffffffffffffc) + 4 <=
         (uStack_68 - (uVar19 & 0xfffffffffffffffc)) - 4)))) {
      uVar19 = (uVar19 >> 2) + 1;
      lVar21 = lVar15 * 4;
      uVar20 = uVar19 & 0xfffffffffffffff8;
      lVar15 = lVar15 + uVar20;
      uStack_90 = uStack_68 + uVar20 * -4;
      puVar17 = (undefined4 *)(lVar21 + lVar4 + 0x10);
      lVar21 = 0;
      do {
        puVar2 = (undefined4 *)((uStack_68 - 0x20) + lVar21 * 4);
        uVar8 = *puVar2;
        uVar9 = puVar2[1];
        uVar10 = puVar2[2];
        uVar11 = puVar2[3];
        puVar2 = (undefined4 *)((uStack_68 - 0x10) + lVar21 * 4);
        uVar12 = *puVar2;
        uVar13 = puVar2[1];
        uVar14 = puVar2[2];
        puVar17[-4] = puVar2[3];
        puVar17[-3] = uVar14;
        puVar17[-2] = uVar13;
        puVar17[-1] = uVar12;
        *puVar17 = uVar11;
        puVar17[1] = uVar10;
        puVar17[2] = uVar9;
        puVar17[3] = uVar8;
        puVar17 = puVar17 + 8;
        lVar21 = lVar21 + -8;
      } while (-lVar21 != uVar20);
      uVar18 = uStack_90;
      if (uVar19 == uVar20) goto LAB_14281a368;
    }
    do {
      uStack_90 = uVar18 - 4;
      *(undefined4 *)(lVar4 + lVar15 * 4) = *(undefined4 *)(uVar18 - 4);
      lVar15 = lVar15 + 1;
      uVar18 = uStack_90;
    } while (uStack_90 != uStack_70);
  }
LAB_14281a368:
  plStack_48[3] = lVar15;
  uStack_39 = 0;
  pdb_1409693f0(&uStack_98);
  plVar6 = plStack_48;
  pdb_140e9a350(plStack_48);
  pdb_140e9a350();
  LOCK();
  lVar15 = *plVar6;
  bVar22 = lVar15 == 8;
  if (bVar22) {
    *plVar6 = 0;
    lVar15 = 8;
  }
  UNLOCK();
  if (!bVar22) {
    lVar15 = pdb_142dbca40(plVar6,0);
  }
  return lVar15;
}

