// Matched PDB: country_core::render::sparse_instance_buffer::SparseInstanceBufferWriter::clear<country_core::resources::roof_tile_ssbo::RoofTileSsbo>
// VA 0x141f4a6c0, PDB extent 801 bytes
// Ghidra pseudocode; types and unresolved calls are not original source.

/* Matched PDB:
   country_core::render::sparse_instance_buffer::SparseInstanceBufferWriter::clear<country_core::resources::roof_tile_ssbo::RoofTileSsbo>
   Extent: 801 bytes. No whole-program auto-analysis. */

longlong pdb_141f4a6c0(longlong *param_1)

{
  ulonglong *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  code *pcVar6;
  byte bVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  longlong *plVar15;
  longlong lVar16;
  longlong lVar17;
  longlong *unaff_RDI;
  undefined4 *puVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  longlong lVar22;
  longlong *unaff_R15;
  bool bVar23;
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
  uVar19 = param_1[1];
  if (uVar19 == 0) {
    pdb_142dc8150(&UNK_143432568);
LAB_141f4a938:
    pdb_142dbc1f0(unaff_R15);
  }
  else {
    *(int *)(param_1 + 0xb) = (int)uVar19 + -1;
    lVar16 = *(longlong *)(param_1[4] + 0x10);
    if (lVar16 != 0) {
      lVar4 = *(longlong *)(param_1[4] + 8);
      lVar22 = *param_1;
      lVar5 = param_1[2];
      uVar20 = param_1[3];
      lVar17 = 0;
      do {
        uVar3 = *(uint *)(lVar4 + lVar17);
        if (uVar19 <= uVar3) {
LAB_141f4a993:
          pdb_142dc81f2();
          pcVar6 = (code *)swi(3);
          lVar16 = (*pcVar6)();
          return lVar16;
        }
        *(undefined1 *)(lVar22 + (ulonglong)uVar3) = 0;
        uVar21 = (ulonglong)(uVar3 >> 6);
        if (uVar20 <= uVar21) {
          pdb_142dc81f2(uVar21,uVar20,&UNK_1434322f0);
          goto LAB_141f4a993;
        }
        bVar7 = (byte)uVar3 & 0x3f;
        LOCK();
        puVar1 = (ulonglong *)(lVar5 + uVar21 * 8);
        *puVar1 = *puVar1 & (-2L << bVar7 | 0xfffffffffffffffeU >> 0x40 - bVar7);
        UNLOCK();
        lVar17 = lVar17 + 4;
      } while (lVar16 << 2 != lVar17);
    }
    unaff_R15 = (longlong *)param_1[8];
    LOCK();
    lVar16 = *unaff_R15;
    if (lVar16 == 0) {
      *unaff_R15 = 8;
    }
    UNLOCK();
    unaff_RDI = param_1;
    if (lVar16 != 0) goto LAB_141f4a938;
  }
  pdb_140e9a150(unaff_R15);
  pdb_140e9a150((ulonglong)unaff_R15 | 1);
  lStack_60 = unaff_RDI[4];
  uStack_70 = *(ulonglong *)(lStack_60 + 8);
  uStack_58 = *(ulonglong *)(lStack_60 + 0x10);
  *(undefined8 *)(lStack_60 + 0x10) = 0;
  uStack_68 = uStack_70 + uStack_58 * 4;
  uStack_50 = 0;
  lVar16 = unaff_R15[3];
  plStack_48 = unaff_R15;
  if ((ulonglong)(unaff_R15[1] - lVar16) < uStack_58) {
    uStack_39 = 1;
    pdb_142d7f1b0(unaff_R15 + 1,lVar16,uStack_58,4,4);
    lVar16 = plStack_48[3];
  }
  lVar4 = plStack_48[2];
  uStack_98 = uStack_70;
  uStack_90 = uStack_68;
  uStack_78 = uStack_50;
  lStack_88 = lStack_60;
  uStack_80 = uStack_58;
  if (uStack_70 != uStack_68) {
    uVar20 = (uStack_68 - uStack_70) - 4;
    uVar19 = uStack_68;
    if ((0x6b < uVar20) &&
       ((uVar21 = lVar4 + lVar16 * 4, uStack_68 <= uVar21 ||
        (uVar21 + (uVar20 & 0xfffffffffffffffc) + 4 <=
         (uStack_68 - (uVar20 & 0xfffffffffffffffc)) - 4)))) {
      uVar20 = (uVar20 >> 2) + 1;
      lVar22 = lVar16 * 4;
      uVar21 = uVar20 & 0xfffffffffffffff8;
      lVar16 = lVar16 + uVar21;
      uStack_90 = uStack_68 + uVar21 * -4;
      puVar18 = (undefined4 *)(lVar22 + lVar4 + 0x10);
      lVar22 = 0;
      do {
        puVar2 = (undefined4 *)((uStack_68 - 0x20) + lVar22 * 4);
        uVar8 = *puVar2;
        uVar9 = puVar2[1];
        uVar10 = puVar2[2];
        uVar11 = puVar2[3];
        puVar2 = (undefined4 *)((uStack_68 - 0x10) + lVar22 * 4);
        uVar12 = *puVar2;
        uVar13 = puVar2[1];
        uVar14 = puVar2[2];
        puVar18[-4] = puVar2[3];
        puVar18[-3] = uVar14;
        puVar18[-2] = uVar13;
        puVar18[-1] = uVar12;
        *puVar18 = uVar11;
        puVar18[1] = uVar10;
        puVar18[2] = uVar9;
        puVar18[3] = uVar8;
        puVar18 = puVar18 + 8;
        lVar22 = lVar22 + -8;
      } while (-lVar22 != uVar21);
      uVar19 = uStack_90;
      if (uVar20 == uVar21) goto LAB_141f4a8e8;
    }
    do {
      uStack_90 = uVar19 - 4;
      *(undefined4 *)(lVar4 + lVar16 * 4) = *(undefined4 *)(uVar19 - 4);
      lVar16 = lVar16 + 1;
      uVar19 = uStack_90;
    } while (uStack_90 != uStack_70);
  }
LAB_141f4a8e8:
  plStack_48[3] = lVar16;
  uStack_39 = 0;
  pdb_1409693f0(&uStack_98);
  plVar15 = plStack_48;
  pdb_140e9a350(plStack_48);
  pdb_140e9a350();
  LOCK();
  lVar16 = *plVar15;
  bVar23 = lVar16 == 8;
  if (bVar23) {
    *plVar15 = 0;
    lVar16 = 8;
  }
  UNLOCK();
  if (!bVar23) {
    lVar16 = pdb_142dbca40(plVar15,0);
  }
  return lVar16;
}

