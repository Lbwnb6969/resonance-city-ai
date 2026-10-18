// VA 0x141a794f0, PDB extent 2541 bytes
// country_core::render::sparse_instance_buffer::impl$10::new_storage_buffer<country_core::resources::roofs::roof_buffers::WoodenGablePlankSsbo>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/render/sparse_instance_buffer.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::render::sparse_instance_buffer::impl$10::new_storage_buffer<country_core::resources::roofs::roof_buffers::WoodenGablePlankSsbo>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/render/sparse_instance_buffer.rs
   Extent: 2541 */

undefined8 * pdb_141a794f0(undefined8 *param_1,undefined8 param_2,longlong param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  int iVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  byte *pbVar23;
  longlong lVar24;
  byte *pbVar25;
  byte *pbVar26;
  byte *pbVar27;
  byte *pbVar28;
  byte *pbVar29;
  longlong lVar30;
  ulonglong uVar31;
  bool bVar32;
  int iVar33;
  int iVar34;
  int iVar35;
  int iVar36;
  byte *pbStack_a8;
  longlong lStack_a0;
  undefined1 uStack_96;
  undefined1 uStack_95;
  undefined1 uStack_94;
  undefined1 uStack_93;
  undefined1 uStack_92;
  undefined1 uStack_91;
  undefined8 uStack_90;
  
  uStack_90 = 0xfffffffffffffffe;
  if (param_3 != 0) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc83b0(&UNK_1433824c0,0x20,&UNK_1433824e0);
  }
  pdb_14007ee60();
  pbVar23 = pub_1406abae0(0x8001,1);
  if (pbVar23 == (byte *)0x0) {
    pdb_142dc7e2a(1,0x8001);
LAB_141a79a2f:
    uStack_91 = 1;
    uStack_92 = 1;
    pdb_142dc7e2a(4,0x800);
  }
  else {
    pbVar23[0x8000] = 0x20;
    uStack_94 = 1;
    uVar31 = 0x80;
    lVar24 = pdb_140c6a640(0);
    if (uVar31 < 2) {
      uStack_91 = 1;
      uStack_92 = 1;
      pdb_142dc8420(0,2,uVar31,&UNK_143382328);
      goto LAB_141a79a77;
    }
    pdb_14007ee60();
    pbVar25 = pub_1406abab0(0xc0000,4);
    uVar11 = _UNK_143041dc8;
    uVar10 = _DAT_143041dc0;
    uVar9 = _UNK_143041db8;
    uVar8 = _DAT_143041db0;
    uVar7 = _UNK_143041da8;
    uVar6 = _DAT_143041da0;
    uVar5 = _UNK_142f98008;
    uVar4 = _DAT_142f98000;
    uVar3 = _UNK_142e4ff88;
    uVar2 = _DAT_142e4ff80;
    if (pbVar25 != (byte *)0x0) {
      lVar30 = 0xb0;
      while( true ) {
        *(undefined8 *)(pbVar25 + lVar30 + -0x90) = uVar10;
        *(undefined8 *)(pbVar25 + lVar30 + -0x90 + 8) = uVar11;
        *(undefined8 *)(pbVar25 + lVar30 + -0xa0) = uVar8;
        *(undefined8 *)(pbVar25 + lVar30 + -0xa0 + 8) = uVar9;
        *(undefined8 *)(pbVar25 + lVar30 + -0xb0) = uVar6;
        *(undefined8 *)(pbVar25 + lVar30 + -0xb0 + 8) = uVar7;
        *(undefined8 *)(pbVar25 + lVar30 + -0x80) = uVar2;
        *(undefined8 *)(pbVar25 + lVar30 + -0x80 + 8) = uVar3;
        *(undefined8 *)(pbVar25 + lVar30 + -0x70) = uVar4;
        *(undefined8 *)(pbVar25 + lVar30 + -0x70 + 8) = uVar5;
        *(undefined1 (*) [16])(pbVar25 + lVar30 + -0x60) = (undefined1  [16])0x0;
        if (lVar30 == 0xbfff0) break;
        *(undefined8 *)(pbVar25 + lVar30 + -0x30) = uVar10;
        *(undefined8 *)(pbVar25 + lVar30 + -0x28) = uVar11;
        *(undefined8 *)(pbVar25 + lVar30 + -0x40) = uVar8;
        *(undefined8 *)(pbVar25 + lVar30 + -0x38) = uVar9;
        *(undefined8 *)(pbVar25 + lVar30 + -0x50) = uVar6;
        *(undefined8 *)(pbVar25 + lVar30 + -0x48) = uVar7;
        *(undefined8 *)(pbVar25 + lVar30 + -0x20) = uVar2;
        *(undefined8 *)(pbVar25 + lVar30 + -0x20 + 8) = uVar3;
        *(undefined8 *)(pbVar25 + lVar30 + -0x10) = uVar4;
        *(undefined8 *)(pbVar25 + lVar30 + -0x10 + 8) = uVar5;
        *(undefined1 (*) [16])(pbVar25 + lVar30) = (undefined1  [16])0x0;
        lVar30 = lVar30 + 0xc0;
      }
      *(undefined8 *)(pbVar25 + 0xbffc0) = uVar10;
      *(undefined8 *)(pbVar25 + 0xbffc8) = uVar11;
      *(undefined8 *)(pbVar25 + 0xbffb0) = uVar8;
      *(undefined8 *)(pbVar25 + 0xbffb8) = uVar9;
      *(undefined8 *)(pbVar25 + 0xbffa0) = uVar6;
      *(undefined8 *)(pbVar25 + 0xbffa8) = uVar7;
      *(undefined8 *)(pbVar25 + 0xbffd0) = uVar2;
      *(undefined8 *)(pbVar25 + 0xbffd8) = uVar3;
      *(undefined8 *)(pbVar25 + 0xbffe0) = uVar4;
      *(undefined8 *)(pbVar25 + 0xbffe8) = uVar5;
      *(undefined1 (*) [16])(pbVar25 + 0xbfff0) = (undefined1  [16])0x0;
      lStack_a0 = 0x2000;
      pbStack_a8 = pbVar25;
      if (*(int *)(lVar24 + 0x10) != 0) {
        pdb_142deb1f8(lVar24,&pbStack_a8);
      }
      if ((pbStack_a8 != (byte *)0x0) && (lStack_a0 != 0)) {
        pub_1406abac0(pbStack_a8,lStack_a0 * 0x60,4);
      }
      pdb_14007ee60();
      pbVar25 = pub_1406abab0(0xc0000,4);
      if (pbVar25 != (byte *)0x0) {
        lVar30 = 0xb0;
        while( true ) {
          *(undefined8 *)(pbVar25 + lVar30 + -0x90) = uVar10;
          *(undefined8 *)(pbVar25 + lVar30 + -0x90 + 8) = uVar11;
          *(undefined8 *)(pbVar25 + lVar30 + -0xa0) = uVar8;
          *(undefined8 *)(pbVar25 + lVar30 + -0xa0 + 8) = uVar9;
          *(undefined8 *)(pbVar25 + lVar30 + -0xb0) = uVar6;
          *(undefined8 *)(pbVar25 + lVar30 + -0xb0 + 8) = uVar7;
          *(undefined8 *)(pbVar25 + lVar30 + -0x80) = uVar2;
          *(undefined8 *)(pbVar25 + lVar30 + -0x80 + 8) = uVar3;
          *(undefined8 *)(pbVar25 + lVar30 + -0x70) = uVar4;
          *(undefined8 *)(pbVar25 + lVar30 + -0x70 + 8) = uVar5;
          *(undefined1 (*) [16])(pbVar25 + lVar30 + -0x60) = (undefined1  [16])0x0;
          if (lVar30 == 0xbfff0) break;
          *(undefined8 *)(pbVar25 + lVar30 + -0x30) = uVar10;
          *(undefined8 *)(pbVar25 + lVar30 + -0x28) = uVar11;
          *(undefined8 *)(pbVar25 + lVar30 + -0x40) = uVar8;
          *(undefined8 *)(pbVar25 + lVar30 + -0x38) = uVar9;
          *(undefined8 *)(pbVar25 + lVar30 + -0x50) = uVar6;
          *(undefined8 *)(pbVar25 + lVar30 + -0x48) = uVar7;
          *(undefined8 *)(pbVar25 + lVar30 + -0x20) = uVar2;
          *(undefined8 *)(pbVar25 + lVar30 + -0x20 + 8) = uVar3;
          *(undefined8 *)(pbVar25 + lVar30 + -0x10) = uVar4;
          *(undefined8 *)(pbVar25 + lVar30 + -0x10 + 8) = uVar5;
          *(undefined1 (*) [16])(pbVar25 + lVar30) = (undefined1  [16])0x0;
          lVar30 = lVar30 + 0xc0;
        }
        *(undefined8 *)(pbVar25 + 0xbffc0) = uVar10;
        *(undefined8 *)(pbVar25 + 0xbffc8) = uVar11;
        *(undefined8 *)(pbVar25 + 0xbffb0) = uVar8;
        *(undefined8 *)(pbVar25 + 0xbffb8) = uVar9;
        *(undefined8 *)(pbVar25 + 0xbffa0) = uVar6;
        *(undefined8 *)(pbVar25 + 0xbffa8) = uVar7;
        *(undefined8 *)(pbVar25 + 0xbffd0) = uVar2;
        *(undefined8 *)(pbVar25 + 0xbffd8) = uVar3;
        *(undefined8 *)(pbVar25 + 0xbffe0) = uVar4;
        *(undefined8 *)(pbVar25 + 0xbffe8) = uVar5;
        *(undefined1 (*) [16])(pbVar25 + 0xbfff0) = (undefined1  [16])0x0;
        lStack_a0 = 0x2000;
        pbStack_a8 = pbVar25;
        if (*(int *)(lVar24 + 0x28) != 0) {
          pdb_142deb1f8(lVar24 + 0x18,&pbStack_a8);
        }
        if ((pbStack_a8 != (byte *)0x0) && (lStack_a0 != 0)) {
          pub_1406abac0(pbStack_a8,lStack_a0 * 0x60,4);
        }
        pdb_14007ee60();
        pbVar25 = pub_1406abab0(0x800,4);
        iVar22 = _UNK_14338200c;
        iVar21 = _UNK_143382008;
        iVar20 = _UNK_143382004;
        iVar19 = _DAT_143382000;
        auVar18 = _DAT_143381ff0;
        auVar17 = _DAT_143381fe0;
        auVar16 = _DAT_143381fd0;
        iVar15 = _UNK_143381f9c;
        iVar14 = _UNK_143381f98;
        iVar13 = _UNK_143381f94;
        iVar12 = _DAT_143381f90;
        if (pbVar25 != (byte *)0x0) {
          lVar30 = 0xc;
          iVar33 = _DAT_143034280;
          iVar34 = _UNK_143034284;
          iVar35 = _UNK_143034288;
          iVar36 = _UNK_14303428c;
          do {
            pbVar26 = pbVar25 + lVar30 * 4 + -0x30;
            *(int *)pbVar26 = auVar16._0_4_ - iVar33;
            *(int *)(pbVar26 + 4) = auVar16._4_4_ - iVar34;
            *(int *)(pbVar26 + 8) = auVar16._8_4_ - iVar35;
            *(int *)(pbVar26 + 0xc) = auVar16._12_4_ - iVar36;
            pbVar26 = pbVar25 + lVar30 * 4 + -0x20;
            *(int *)pbVar26 = auVar17._0_4_ - iVar33;
            *(int *)(pbVar26 + 4) = auVar17._4_4_ - iVar34;
            *(int *)(pbVar26 + 8) = auVar17._8_4_ - iVar35;
            *(int *)(pbVar26 + 0xc) = auVar17._12_4_ - iVar36;
            pbVar26 = pbVar25 + lVar30 * 4 + -0x10;
            *(int *)pbVar26 = auVar18._0_4_ - iVar33;
            *(int *)(pbVar26 + 4) = auVar18._4_4_ - iVar34;
            *(int *)(pbVar26 + 8) = auVar18._8_4_ - iVar35;
            *(int *)(pbVar26 + 0xc) = auVar18._12_4_ - iVar36;
            pbVar26 = pbVar25 + lVar30 * 4;
            *(int *)pbVar26 = iVar19 - iVar33;
            *(int *)(pbVar26 + 4) = iVar20 - iVar34;
            *(int *)(pbVar26 + 8) = iVar21 - iVar35;
            *(int *)(pbVar26 + 0xc) = iVar22 - iVar36;
            iVar33 = iVar33 + iVar12;
            iVar34 = iVar34 + iVar13;
            iVar35 = iVar35 + iVar14;
            iVar36 = iVar36 + iVar15;
            lVar30 = lVar30 + 0x10;
          } while (lVar30 != 0x20c);
          uStack_95 = 1;
          uStack_96 = 1;
          pbVar26 = (byte *)pdb_141b0fa90(param_2,0);
          pbStack_a8 = pbVar26;
          pdb_14007ee60();
          pbVar27 = pub_1406abae0(0x1000,8);
          bVar32 = pbVar27 == (byte *)0x0;
          uStack_93 = bVar32;
          if (bVar32) {
            pdb_142dc7e2a(8,0x1000);
          }
          else {
            pdb_14007ee60();
            pbVar28 = pub_1406abae0(0x1000,8);
            if (pbVar28 != (byte *)0x0) {
              pdb_14007ee60();
              pbVar29 = pub_1406abab0(0x30,8);
              if (pbVar29 != (byte *)0x0) {
                pbVar29[0] = 1;
                pbVar29[1] = 0;
                pbVar29[2] = 0;
                pbVar29[3] = 0;
                pbVar29[4] = 0;
                pbVar29[5] = 0;
                pbVar29[6] = 0;
                pbVar29[7] = 0;
                pbVar29[8] = 1;
                pbVar29[9] = 0;
                pbVar29[10] = 0;
                pbVar29[0xb] = 0;
                pbVar29[0xc] = 0;
                pbVar29[0xd] = 0;
                pbVar29[0xe] = 0;
                pbVar29[0xf] = 0;
                pbVar29[0x10] = 0;
                pbVar29[0x18] = 0;
                pbVar29[0x19] = 0;
                pbVar29[0x1a] = 0;
                pbVar29[0x1b] = 0;
                pbVar29[0x1c] = 0;
                pbVar29[0x1d] = 0;
                pbVar29[0x1e] = 0;
                pbVar29[0x1f] = 0;
                pbVar29[0x20] = 8;
                pbVar29[0x21] = 0;
                pbVar29[0x22] = 0;
                pbVar29[0x23] = 0;
                pbVar29[0x24] = 0;
                pbVar29[0x25] = 0;
                pbVar29[0x26] = 0;
                pbVar29[0x27] = 0;
                pbVar29[0x28] = 0;
                pbVar29[0x29] = 0;
                pbVar29[0x2a] = 0;
                pbVar29[0x2b] = 0;
                pbVar29[0x2c] = 0;
                pbVar29[0x2d] = 0;
                pbVar29[0x2e] = 0;
                pbVar29[0x2f] = 0;
                *param_1 = pbVar26;
                param_1[10] = 0x4000;
                param_1[1] = pbVar23;
                param_1[2] = 0x8001;
                param_1[3] = pbVar27;
                param_1[4] = 0x200;
                param_1[0xb] = 0;
                param_1[0xc] = 0x200;
                param_1[0xd] = pbVar25;
                param_1[0xe] = 0x200;
                param_1[5] = lVar24;
                param_1[6] = uVar31;
                param_1[0xf] = 2;
                param_1[7] = pbVar28;
                param_1[8] = 0x200;
                param_1[9] = pbVar29;
                return param_1;
              }
                    /* WARNING: Subroutine does not return */
              pdb_142dc7e11(8,0x30);
            }
            pdb_142dc7e2a(8,0x1000);
          }
          goto LAB_141a79a77;
        }
        goto LAB_141a79a2f;
      }
    }
    uStack_91 = 1;
    uStack_92 = 1;
    pdb_142dc7e2a(4,0xc0000);
  }
LAB_141a79a77:
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}

