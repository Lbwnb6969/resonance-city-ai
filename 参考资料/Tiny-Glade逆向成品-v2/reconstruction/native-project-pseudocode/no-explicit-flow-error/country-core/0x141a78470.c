// VA 0x141a78470, PDB extent 2101 bytes
// country_core::render::sparse_instance_buffer::impl$10::new_storage_buffer<country_core::resources::roof_tile_ssbo::RoofTileSsbo>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/render/sparse_instance_buffer.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::render::sparse_instance_buffer::impl$10::new_storage_buffer<country_core::resources::roof_tile_ssbo::RoofTileSsbo>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/render/sparse_instance_buffer.rs
   Extent: 2101 */

undefined8 * pdb_141a78470(undefined8 *param_1,undefined8 param_2,longlong param_3)

{
  undefined1 (*pauVar1) [16];
  code *pcVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  byte *pbVar14;
  byte *pbVar15;
  byte *pbVar16;
  byte *pbVar17;
  byte *pbVar18;
  byte *pbVar19;
  longlong lVar20;
  ulonglong uVar21;
  longlong lVar22;
  longlong lVar23;
  bool bVar24;
  int iVar25;
  int iVar26;
  int iVar27;
  int iVar28;
  byte *pbStack_80;
  longlong lStack_78;
  longlong lStack_70;
  undefined1 uStack_66;
  undefined1 uStack_65;
  undefined1 uStack_64;
  undefined1 uStack_63;
  undefined1 uStack_62;
  undefined1 uStack_61;
  undefined8 uStack_60;
  
  uStack_60 = 0xfffffffffffffffe;
  if (param_3 != 0) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc83b0(&UNK_1433824c0,0x20,&UNK_1433824e0);
  }
  pdb_14007ee60();
  pbVar14 = pub_1406abae0(0x8001,1);
  if (pbVar14 == (byte *)0x0) {
    pdb_142dc7e2a(1,0x8001);
  }
  else {
    pbVar14[0x8000] = 0x20;
    uStack_64 = 1;
    uVar21 = 0x80;
    lStack_70 = pdb_140c6a7e0(0);
    if (uVar21 < 8) {
      uStack_61 = 1;
      uStack_62 = 1;
      pdb_142dc8420(0,8,uVar21,&UNK_143382328);
      goto LAB_141a78970;
    }
    lVar23 = 0;
    do {
      pdb_14007ee60();
      pbVar15 = pub_1406abab0(0x80000,4);
      if (pbVar15 == (byte *)0x0) {
        uStack_61 = 1;
        uStack_62 = 1;
        pdb_142dc7e2a(4,0x80000);
        goto LAB_141a78970;
      }
      lVar20 = lStack_70 + lVar23;
      lVar23 = lVar23 + 0x18;
      lVar22 = 0x1c0;
      while( true ) {
        *(undefined1 (*) [16])(pbVar15 + lVar22 + -400) = (undefined1  [16])0x0;
        *(undefined1 (*) [16])(pbVar15 + lVar22 + -0x1a0) = (undefined1  [16])0x0;
        *(undefined1 (*) [16])(pbVar15 + lVar22 + -0x1b0) = (undefined1  [16])0x0;
        *(undefined1 (*) [16])(pbVar15 + lVar22 + -0x1c0) = (undefined1  [16])0x0;
        *(undefined1 (*) [16])(pbVar15 + lVar22 + -0x180) = (undefined1  [16])0x0;
        *(undefined1 (*) [16])(pbVar15 + lVar22 + -0x170) = (undefined1  [16])0x0;
        *(undefined1 (*) [16])(pbVar15 + lVar22 + -0x160) = (undefined1  [16])0x0;
        *(undefined1 (*) [16])(pbVar15 + lVar22 + -0x150) = (undefined1  [16])0x0;
        *(undefined1 (*) [16])(pbVar15 + lVar22 + -0x140) = (undefined1  [16])0x0;
        *(undefined1 (*) [16])(pbVar15 + lVar22 + -0x130) = (undefined1  [16])0x0;
        *(undefined1 (*) [16])(pbVar15 + lVar22 + -0x120) = (undefined1  [16])0x0;
        *(undefined1 (*) [16])(pbVar15 + lVar22 + -0x110) = (undefined1  [16])0x0;
        *(undefined1 (*) [16])(pbVar15 + lVar22 + -0x100) = (undefined1  [16])0x0;
        *(undefined1 (*) [16])(pbVar15 + lVar22 + -0xf0) = (undefined1  [16])0x0;
        *(undefined1 (*) [16])(pbVar15 + lVar22 + -0xe0) = (undefined1  [16])0x0;
        *(undefined1 (*) [16])(pbVar15 + lVar22 + -0xd0) = (undefined1  [16])0x0;
        *(undefined1 (*) [16])(pbVar15 + lVar22 + -0x90) = (undefined1  [16])0x0;
        *(undefined1 (*) [16])(pbVar15 + lVar22 + -0xa0) = (undefined1  [16])0x0;
        *(undefined1 (*) [16])(pbVar15 + lVar22 + -0xb0) = (undefined1  [16])0x0;
        *(undefined1 (*) [16])(pbVar15 + lVar22 + -0xc0) = (undefined1  [16])0x0;
        *(undefined1 (*) [16])(pbVar15 + lVar22 + -0x50) = (undefined1  [16])0x0;
        *(undefined1 (*) [16])(pbVar15 + lVar22 + -0x60) = (undefined1  [16])0x0;
        *(undefined1 (*) [16])(pbVar15 + lVar22 + -0x70) = (undefined1  [16])0x0;
        *(undefined1 (*) [16])(pbVar15 + lVar22 + -0x80) = (undefined1  [16])0x0;
        *(undefined1 (*) [16])(pbVar15 + lVar22 + -0x40) = (undefined1  [16])0x0;
        *(undefined1 (*) [16])(pbVar15 + lVar22 + -0x30) = (undefined1  [16])0x0;
        *(undefined1 (*) [16])(pbVar15 + lVar22 + -0x20) = (undefined1  [16])0x0;
        *(undefined1 (*) [16])(pbVar15 + lVar22 + -0x10) = (undefined1  [16])0x0;
        if (lVar22 == 0x7ffc0) break;
        pauVar1 = (undefined1 (*) [16])(pbVar15 + lVar22);
        pauVar1[3] = (undefined1  [16])0x0;
        pauVar1[2] = (undefined1  [16])0x0;
        pauVar1[1] = (undefined1  [16])0x0;
        *pauVar1 = (undefined1  [16])0x0;
        lVar22 = lVar22 + 0x200;
      }
      *(undefined1 (*) [16])(pbVar15 + 0x7fff0) = (undefined1  [16])0x0;
      *(undefined1 (*) [16])(pbVar15 + 0x7ffe0) = (undefined1  [16])0x0;
      *(undefined1 (*) [16])(pbVar15 + 0x7ffd0) = (undefined1  [16])0x0;
      *(undefined1 (*) [16])(pbVar15 + 0x7ffc0) = (undefined1  [16])0x0;
      lStack_78 = 0x2000;
      pbStack_80 = pbVar15;
      if (*(int *)(lVar20 + 0x10) != 0) {
        pdb_142deb407(lVar20,&pbStack_80);
      }
      if ((pbStack_80 != (byte *)0x0) && (lStack_78 != 0)) {
        pub_1406abac0(pbStack_80,lStack_78 << 6,4);
      }
    } while (lVar23 != 0xc0);
    pdb_14007ee60();
    pbVar15 = pub_1406abab0(0x2000,4);
    iVar13 = _UNK_143381f9c;
    iVar12 = _UNK_143381f98;
    iVar11 = _UNK_143381f94;
    iVar10 = _DAT_143381f90;
    iVar9 = _UNK_143381f8c;
    iVar8 = _UNK_143381f88;
    iVar7 = _UNK_143381f84;
    iVar6 = _DAT_143381f80;
    auVar5 = _DAT_143381f70;
    auVar4 = _DAT_143381f60;
    auVar3 = _DAT_143381f50;
    if (pbVar15 != (byte *)0x0) {
      lVar23 = 0xc;
      iVar25 = _DAT_143034280;
      iVar26 = _UNK_143034284;
      iVar27 = _UNK_143034288;
      iVar28 = _UNK_14303428c;
      do {
        pbVar16 = pbVar15 + lVar23 * 4 + -0x30;
        *(int *)pbVar16 = auVar3._0_4_ - iVar25;
        *(int *)(pbVar16 + 4) = auVar3._4_4_ - iVar26;
        *(int *)(pbVar16 + 8) = auVar3._8_4_ - iVar27;
        *(int *)(pbVar16 + 0xc) = auVar3._12_4_ - iVar28;
        pbVar16 = pbVar15 + lVar23 * 4 + -0x20;
        *(int *)pbVar16 = auVar4._0_4_ - iVar25;
        *(int *)(pbVar16 + 4) = auVar4._4_4_ - iVar26;
        *(int *)(pbVar16 + 8) = auVar4._8_4_ - iVar27;
        *(int *)(pbVar16 + 0xc) = auVar4._12_4_ - iVar28;
        pbVar16 = pbVar15 + lVar23 * 4 + -0x10;
        *(int *)pbVar16 = auVar5._0_4_ - iVar25;
        *(int *)(pbVar16 + 4) = auVar5._4_4_ - iVar26;
        *(int *)(pbVar16 + 8) = auVar5._8_4_ - iVar27;
        *(int *)(pbVar16 + 0xc) = auVar5._12_4_ - iVar28;
        pbVar16 = pbVar15 + lVar23 * 4;
        *(int *)pbVar16 = iVar6 - iVar25;
        *(int *)(pbVar16 + 4) = iVar7 - iVar26;
        *(int *)(pbVar16 + 8) = iVar8 - iVar27;
        *(int *)(pbVar16 + 0xc) = iVar9 - iVar28;
        iVar25 = iVar25 + iVar10;
        iVar26 = iVar26 + iVar11;
        iVar27 = iVar27 + iVar12;
        iVar28 = iVar28 + iVar13;
        lVar23 = lVar23 + 0x10;
      } while (lVar23 != 0x80c);
      uStack_65 = 1;
      uStack_66 = 1;
      pbVar16 = (byte *)pdb_141b0e540(param_2,0);
      pbStack_80 = pbVar16;
      pdb_14007ee60();
      pbVar17 = pub_1406abae0(0x1000,8);
      bVar24 = pbVar17 == (byte *)0x0;
      uStack_63 = bVar24;
      if (bVar24) {
        pdb_142dc7e2a(8,0x1000);
      }
      else {
        pdb_14007ee60();
        pbVar18 = pub_1406abae0(0x1000,8);
        if (pbVar18 != (byte *)0x0) {
          pdb_14007ee60();
          pbVar19 = pub_1406abab0(0x30,8);
          if (pbVar19 != (byte *)0x0) {
            pbVar19[0] = 1;
            pbVar19[1] = 0;
            pbVar19[2] = 0;
            pbVar19[3] = 0;
            pbVar19[4] = 0;
            pbVar19[5] = 0;
            pbVar19[6] = 0;
            pbVar19[7] = 0;
            pbVar19[8] = 1;
            pbVar19[9] = 0;
            pbVar19[10] = 0;
            pbVar19[0xb] = 0;
            pbVar19[0xc] = 0;
            pbVar19[0xd] = 0;
            pbVar19[0xe] = 0;
            pbVar19[0xf] = 0;
            pbVar19[0x10] = 0;
            pbVar19[0x18] = 0;
            pbVar19[0x19] = 0;
            pbVar19[0x1a] = 0;
            pbVar19[0x1b] = 0;
            pbVar19[0x1c] = 0;
            pbVar19[0x1d] = 0;
            pbVar19[0x1e] = 0;
            pbVar19[0x1f] = 0;
            pbVar19[0x20] = 8;
            pbVar19[0x21] = 0;
            pbVar19[0x22] = 0;
            pbVar19[0x23] = 0;
            pbVar19[0x24] = 0;
            pbVar19[0x25] = 0;
            pbVar19[0x26] = 0;
            pbVar19[0x27] = 0;
            pbVar19[0x28] = 0;
            pbVar19[0x29] = 0;
            pbVar19[0x2a] = 0;
            pbVar19[0x2b] = 0;
            pbVar19[0x2c] = 0;
            pbVar19[0x2d] = 0;
            pbVar19[0x2e] = 0;
            pbVar19[0x2f] = 0;
            *param_1 = pbVar16;
            param_1[10] = 0x10000;
            param_1[1] = pbVar14;
            param_1[2] = 0x8001;
            param_1[3] = pbVar17;
            param_1[4] = 0x200;
            param_1[0xb] = 0;
            param_1[0xc] = 0x800;
            param_1[0xd] = pbVar15;
            param_1[0xe] = 0x800;
            param_1[5] = lStack_70;
            param_1[6] = uVar21;
            param_1[0xf] = 8;
            param_1[7] = pbVar18;
            param_1[8] = 0x200;
            param_1[9] = pbVar19;
            return param_1;
          }
                    /* WARNING: Subroutine does not return */
          pdb_142dc7e11(8,0x30);
        }
        pdb_142dc7e2a(8,0x1000);
      }
      goto LAB_141a78970;
    }
  }
  uStack_61 = 1;
  uStack_62 = 1;
  pdb_142dc7e2a(4,0x2000);
LAB_141a78970:
                    /* WARNING: Does not return */
  pcVar2 = (code *)invalidInstructionException();
  (*pcVar2)();
}

