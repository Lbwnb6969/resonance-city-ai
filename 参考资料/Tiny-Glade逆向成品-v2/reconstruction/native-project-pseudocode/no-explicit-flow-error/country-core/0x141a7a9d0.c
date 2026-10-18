// VA 0x141a7a9d0, PDB extent 2897 bytes
// country_core::render::sparse_instance_buffer::impl$10::new_storage_buffer<country_core::resources::roofs::roof_buffers::WoodenPlankSsbo>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/render/sparse_instance_buffer.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::render::sparse_instance_buffer::impl$10::new_storage_buffer<country_core::resources::roofs::roof_buffers::WoodenPlankSsbo>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/render/sparse_instance_buffer.rs
   Extent: 2897 */

undefined8 * pdb_141a7a9d0(undefined8 *param_1,undefined8 param_2,longlong param_3)

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
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  int iVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  byte *pbVar21;
  longlong lVar22;
  byte *pbVar23;
  byte *pbVar24;
  byte *pbVar25;
  byte *pbVar26;
  byte *pbVar27;
  longlong lVar28;
  ulonglong uVar29;
  bool bVar30;
  int iVar31;
  int iVar32;
  int iVar33;
  int iVar34;
  byte *pbStack_98;
  longlong lStack_90;
  undefined1 uStack_86;
  undefined1 uStack_85;
  undefined1 uStack_84;
  undefined1 uStack_83;
  undefined1 uStack_82;
  undefined1 uStack_81;
  undefined8 uStack_80;
  
  uStack_80 = 0xfffffffffffffffe;
  if (param_3 != 0) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc83b0(&UNK_1433824c0,0x20,&UNK_1433824e0);
  }
  pdb_14007ee60();
  pbVar21 = pub_1406abae0(0x8001,1);
  if (pbVar21 == (byte *)0x0) {
    pdb_142dc7e2a(1,0x8001);
LAB_141a7b0c8:
    uStack_81 = 1;
    uStack_82 = 1;
    pdb_142dc7e2a(4,0x1000);
  }
  else {
    pbVar21[0x8000] = 0x20;
    uStack_84 = 1;
    uVar29 = 0x80;
    lVar22 = pdb_140c69df0(0);
    if (uVar29 < 4) {
      uStack_81 = 1;
      uStack_82 = 1;
      pdb_142dc8420(0,4,uVar29,&UNK_143382328);
      goto LAB_141a7b110;
    }
    pdb_14007ee60();
    pbVar23 = pub_1406abab0(0xa0000,4);
    uVar9 = _UNK_143041dc8;
    uVar8 = _DAT_143041dc0;
    uVar7 = _UNK_143041db8;
    uVar6 = _DAT_143041db0;
    uVar5 = _UNK_143041da8;
    uVar4 = _DAT_143041da0;
    uVar3 = _UNK_14303f318;
    uVar2 = _DAT_14303f310;
    if (pbVar23 != (byte *)0x0) {
      lVar28 = 0x90;
      while( true ) {
        *(undefined8 *)(pbVar23 + lVar28 + -0x70) = uVar8;
        *(undefined8 *)(pbVar23 + lVar28 + -0x70 + 8) = uVar9;
        *(undefined8 *)(pbVar23 + lVar28 + -0x80) = uVar6;
        *(undefined8 *)(pbVar23 + lVar28 + -0x80 + 8) = uVar7;
        *(undefined8 *)(pbVar23 + lVar28 + -0x90) = uVar4;
        *(undefined8 *)(pbVar23 + lVar28 + -0x90 + 8) = uVar5;
        *(undefined8 *)(pbVar23 + lVar28 + -0x60) = uVar2;
        *(undefined8 *)(pbVar23 + lVar28 + -0x60 + 8) = uVar3;
        *(undefined1 (*) [16])(pbVar23 + lVar28 + -0x50) = (undefined1  [16])0x0;
        if (lVar28 == 0x9fff0) break;
        *(undefined8 *)(pbVar23 + lVar28 + -0x20) = uVar8;
        *(undefined8 *)(pbVar23 + lVar28 + -0x18) = uVar9;
        *(undefined8 *)(pbVar23 + lVar28 + -0x30) = uVar6;
        *(undefined8 *)(pbVar23 + lVar28 + -0x28) = uVar7;
        *(undefined8 *)(pbVar23 + lVar28 + -0x40) = uVar4;
        *(undefined8 *)(pbVar23 + lVar28 + -0x38) = uVar5;
        *(undefined8 *)(pbVar23 + lVar28 + -0x10) = uVar2;
        *(undefined8 *)(pbVar23 + lVar28 + -0x10 + 8) = uVar3;
        *(undefined1 (*) [16])(pbVar23 + lVar28) = (undefined1  [16])0x0;
        lVar28 = lVar28 + 0xa0;
      }
      *(undefined8 *)(pbVar23 + 0x9ffd0) = uVar8;
      *(undefined8 *)(pbVar23 + 0x9ffd8) = uVar9;
      *(undefined8 *)(pbVar23 + 0x9ffc0) = uVar6;
      *(undefined8 *)(pbVar23 + 0x9ffc8) = uVar7;
      *(undefined8 *)(pbVar23 + 0x9ffb0) = uVar4;
      *(undefined8 *)(pbVar23 + 0x9ffb8) = uVar5;
      *(undefined8 *)(pbVar23 + 0x9ffe0) = uVar2;
      *(undefined8 *)(pbVar23 + 0x9ffe8) = uVar3;
      *(undefined1 (*) [16])(pbVar23 + 0x9fff0) = (undefined1  [16])0x0;
      lStack_90 = 0x2000;
      pbStack_98 = pbVar23;
      if (*(int *)(lVar22 + 0x10) != 0) {
        pdb_142deb3ba(lVar22,&pbStack_98);
      }
      if ((pbStack_98 != (byte *)0x0) && (lStack_90 != 0)) {
        pub_1406abac0(pbStack_98,lStack_90 * 0x50,4);
      }
      pdb_14007ee60();
      pbVar23 = pub_1406abab0(0xa0000,4);
      if (pbVar23 != (byte *)0x0) {
        lVar28 = 0x90;
        while( true ) {
          *(undefined8 *)(pbVar23 + lVar28 + -0x70) = uVar8;
          *(undefined8 *)(pbVar23 + lVar28 + -0x70 + 8) = uVar9;
          *(undefined8 *)(pbVar23 + lVar28 + -0x80) = uVar6;
          *(undefined8 *)(pbVar23 + lVar28 + -0x80 + 8) = uVar7;
          *(undefined8 *)(pbVar23 + lVar28 + -0x90) = uVar4;
          *(undefined8 *)(pbVar23 + lVar28 + -0x90 + 8) = uVar5;
          *(undefined8 *)(pbVar23 + lVar28 + -0x60) = uVar2;
          *(undefined8 *)(pbVar23 + lVar28 + -0x60 + 8) = uVar3;
          *(undefined1 (*) [16])(pbVar23 + lVar28 + -0x50) = (undefined1  [16])0x0;
          if (lVar28 == 0x9fff0) break;
          *(undefined8 *)(pbVar23 + lVar28 + -0x20) = uVar8;
          *(undefined8 *)(pbVar23 + lVar28 + -0x18) = uVar9;
          *(undefined8 *)(pbVar23 + lVar28 + -0x30) = uVar6;
          *(undefined8 *)(pbVar23 + lVar28 + -0x28) = uVar7;
          *(undefined8 *)(pbVar23 + lVar28 + -0x40) = uVar4;
          *(undefined8 *)(pbVar23 + lVar28 + -0x38) = uVar5;
          *(undefined8 *)(pbVar23 + lVar28 + -0x10) = uVar2;
          *(undefined8 *)(pbVar23 + lVar28 + -0x10 + 8) = uVar3;
          *(undefined1 (*) [16])(pbVar23 + lVar28) = (undefined1  [16])0x0;
          lVar28 = lVar28 + 0xa0;
        }
        *(undefined8 *)(pbVar23 + 0x9ffd0) = uVar8;
        *(undefined8 *)(pbVar23 + 0x9ffd8) = uVar9;
        *(undefined8 *)(pbVar23 + 0x9ffc0) = uVar6;
        *(undefined8 *)(pbVar23 + 0x9ffc8) = uVar7;
        *(undefined8 *)(pbVar23 + 0x9ffb0) = uVar4;
        *(undefined8 *)(pbVar23 + 0x9ffb8) = uVar5;
        *(undefined8 *)(pbVar23 + 0x9ffe0) = uVar2;
        *(undefined8 *)(pbVar23 + 0x9ffe8) = uVar3;
        *(undefined1 (*) [16])(pbVar23 + 0x9fff0) = (undefined1  [16])0x0;
        lStack_90 = 0x2000;
        pbStack_98 = pbVar23;
        if (*(int *)(lVar22 + 0x28) != 0) {
          pdb_142deb3ba(lVar22 + 0x18,&pbStack_98);
        }
        if ((pbStack_98 != (byte *)0x0) && (lStack_90 != 0)) {
          pub_1406abac0(pbStack_98,lStack_90 * 0x50,4);
        }
        pdb_14007ee60();
        pbVar23 = pub_1406abab0(0xa0000,4);
        if (pbVar23 != (byte *)0x0) {
          lVar28 = 0x90;
          while( true ) {
            *(undefined8 *)(pbVar23 + lVar28 + -0x70) = uVar8;
            *(undefined8 *)(pbVar23 + lVar28 + -0x70 + 8) = uVar9;
            *(undefined8 *)(pbVar23 + lVar28 + -0x80) = uVar6;
            *(undefined8 *)(pbVar23 + lVar28 + -0x80 + 8) = uVar7;
            *(undefined8 *)(pbVar23 + lVar28 + -0x90) = uVar4;
            *(undefined8 *)(pbVar23 + lVar28 + -0x90 + 8) = uVar5;
            *(undefined8 *)(pbVar23 + lVar28 + -0x60) = uVar2;
            *(undefined8 *)(pbVar23 + lVar28 + -0x60 + 8) = uVar3;
            *(undefined1 (*) [16])(pbVar23 + lVar28 + -0x50) = (undefined1  [16])0x0;
            if (lVar28 == 0x9fff0) break;
            *(undefined8 *)(pbVar23 + lVar28 + -0x20) = uVar8;
            *(undefined8 *)(pbVar23 + lVar28 + -0x18) = uVar9;
            *(undefined8 *)(pbVar23 + lVar28 + -0x30) = uVar6;
            *(undefined8 *)(pbVar23 + lVar28 + -0x28) = uVar7;
            *(undefined8 *)(pbVar23 + lVar28 + -0x40) = uVar4;
            *(undefined8 *)(pbVar23 + lVar28 + -0x38) = uVar5;
            *(undefined8 *)(pbVar23 + lVar28 + -0x10) = uVar2;
            *(undefined8 *)(pbVar23 + lVar28 + -0x10 + 8) = uVar3;
            *(undefined1 (*) [16])(pbVar23 + lVar28) = (undefined1  [16])0x0;
            lVar28 = lVar28 + 0xa0;
          }
          *(undefined8 *)(pbVar23 + 0x9ffd0) = uVar8;
          *(undefined8 *)(pbVar23 + 0x9ffd8) = uVar9;
          *(undefined8 *)(pbVar23 + 0x9ffc0) = uVar6;
          *(undefined8 *)(pbVar23 + 0x9ffc8) = uVar7;
          *(undefined8 *)(pbVar23 + 0x9ffb0) = uVar4;
          *(undefined8 *)(pbVar23 + 0x9ffb8) = uVar5;
          *(undefined8 *)(pbVar23 + 0x9ffe0) = uVar2;
          *(undefined8 *)(pbVar23 + 0x9ffe8) = uVar3;
          *(undefined1 (*) [16])(pbVar23 + 0x9fff0) = (undefined1  [16])0x0;
          lStack_90 = 0x2000;
          pbStack_98 = pbVar23;
          if (*(int *)(lVar22 + 0x40) != 0) {
            pdb_142deb3ba(lVar22 + 0x30,&pbStack_98);
          }
          if ((pbStack_98 != (byte *)0x0) && (lStack_90 != 0)) {
            pub_1406abac0(pbStack_98,lStack_90 * 0x50,4);
          }
          pdb_14007ee60();
          pbVar23 = pub_1406abab0(0xa0000,4);
          if (pbVar23 != (byte *)0x0) {
            lVar28 = 0x90;
            while( true ) {
              *(undefined8 *)(pbVar23 + lVar28 + -0x70) = uVar8;
              *(undefined8 *)(pbVar23 + lVar28 + -0x70 + 8) = uVar9;
              *(undefined8 *)(pbVar23 + lVar28 + -0x80) = uVar6;
              *(undefined8 *)(pbVar23 + lVar28 + -0x80 + 8) = uVar7;
              *(undefined8 *)(pbVar23 + lVar28 + -0x90) = uVar4;
              *(undefined8 *)(pbVar23 + lVar28 + -0x90 + 8) = uVar5;
              *(undefined8 *)(pbVar23 + lVar28 + -0x60) = uVar2;
              *(undefined8 *)(pbVar23 + lVar28 + -0x60 + 8) = uVar3;
              *(undefined1 (*) [16])(pbVar23 + lVar28 + -0x50) = (undefined1  [16])0x0;
              if (lVar28 == 0x9fff0) break;
              *(undefined8 *)(pbVar23 + lVar28 + -0x20) = uVar8;
              *(undefined8 *)(pbVar23 + lVar28 + -0x18) = uVar9;
              *(undefined8 *)(pbVar23 + lVar28 + -0x30) = uVar6;
              *(undefined8 *)(pbVar23 + lVar28 + -0x28) = uVar7;
              *(undefined8 *)(pbVar23 + lVar28 + -0x40) = uVar4;
              *(undefined8 *)(pbVar23 + lVar28 + -0x38) = uVar5;
              *(undefined8 *)(pbVar23 + lVar28 + -0x10) = uVar2;
              *(undefined8 *)(pbVar23 + lVar28 + -0x10 + 8) = uVar3;
              *(undefined1 (*) [16])(pbVar23 + lVar28) = (undefined1  [16])0x0;
              lVar28 = lVar28 + 0xa0;
            }
            *(undefined8 *)(pbVar23 + 0x9ffd0) = uVar8;
            *(undefined8 *)(pbVar23 + 0x9ffd8) = uVar9;
            *(undefined8 *)(pbVar23 + 0x9ffc0) = uVar6;
            *(undefined8 *)(pbVar23 + 0x9ffc8) = uVar7;
            *(undefined8 *)(pbVar23 + 0x9ffb0) = uVar4;
            *(undefined8 *)(pbVar23 + 0x9ffb8) = uVar5;
            *(undefined8 *)(pbVar23 + 0x9ffe0) = uVar2;
            *(undefined8 *)(pbVar23 + 0x9ffe8) = uVar3;
            *(undefined1 (*) [16])(pbVar23 + 0x9fff0) = (undefined1  [16])0x0;
            lStack_90 = 0x2000;
            pbStack_98 = pbVar23;
            if (*(int *)(lVar22 + 0x58) != 0) {
              pdb_142deb3ba(lVar22 + 0x48,&pbStack_98);
            }
            if ((pbStack_98 != (byte *)0x0) && (lStack_90 != 0)) {
              pub_1406abac0(pbStack_98,lStack_90 * 0x50,4);
            }
            pdb_14007ee60();
            pbVar23 = pub_1406abab0(0x1000,4);
            iVar20 = _UNK_1433820bc;
            iVar19 = _UNK_1433820b8;
            iVar18 = _UNK_1433820b4;
            iVar17 = _DAT_1433820b0;
            auVar16 = _DAT_1433820a0;
            auVar15 = _DAT_143382090;
            auVar14 = _DAT_143382080;
            iVar13 = _UNK_143381f9c;
            iVar12 = _UNK_143381f98;
            iVar11 = _UNK_143381f94;
            iVar10 = _DAT_143381f90;
            if (pbVar23 != (byte *)0x0) {
              lVar28 = 0xc;
              iVar31 = _DAT_143034280;
              iVar32 = _UNK_143034284;
              iVar33 = _UNK_143034288;
              iVar34 = _UNK_14303428c;
              do {
                pbVar24 = pbVar23 + lVar28 * 4 + -0x30;
                *(int *)pbVar24 = auVar14._0_4_ - iVar31;
                *(int *)(pbVar24 + 4) = auVar14._4_4_ - iVar32;
                *(int *)(pbVar24 + 8) = auVar14._8_4_ - iVar33;
                *(int *)(pbVar24 + 0xc) = auVar14._12_4_ - iVar34;
                pbVar24 = pbVar23 + lVar28 * 4 + -0x20;
                *(int *)pbVar24 = auVar15._0_4_ - iVar31;
                *(int *)(pbVar24 + 4) = auVar15._4_4_ - iVar32;
                *(int *)(pbVar24 + 8) = auVar15._8_4_ - iVar33;
                *(int *)(pbVar24 + 0xc) = auVar15._12_4_ - iVar34;
                pbVar24 = pbVar23 + lVar28 * 4 + -0x10;
                *(int *)pbVar24 = auVar16._0_4_ - iVar31;
                *(int *)(pbVar24 + 4) = auVar16._4_4_ - iVar32;
                *(int *)(pbVar24 + 8) = auVar16._8_4_ - iVar33;
                *(int *)(pbVar24 + 0xc) = auVar16._12_4_ - iVar34;
                pbVar24 = pbVar23 + lVar28 * 4;
                *(int *)pbVar24 = iVar17 - iVar31;
                *(int *)(pbVar24 + 4) = iVar18 - iVar32;
                *(int *)(pbVar24 + 8) = iVar19 - iVar33;
                *(int *)(pbVar24 + 0xc) = iVar20 - iVar34;
                iVar31 = iVar31 + iVar10;
                iVar32 = iVar32 + iVar11;
                iVar33 = iVar33 + iVar12;
                iVar34 = iVar34 + iVar13;
                lVar28 = lVar28 + 0x10;
              } while (lVar28 != 0x40c);
              uStack_85 = 1;
              uStack_86 = 1;
              pbVar24 = (byte *)pdb_141b0edc0(param_2,0);
              pbStack_98 = pbVar24;
              pdb_14007ee60();
              pbVar25 = pub_1406abae0(0x1000,8);
              bVar30 = pbVar25 == (byte *)0x0;
              uStack_83 = bVar30;
              if (bVar30) {
                pdb_142dc7e2a(8,0x1000);
              }
              else {
                pdb_14007ee60();
                pbVar26 = pub_1406abae0(0x1000,8);
                if (pbVar26 != (byte *)0x0) {
                  pdb_14007ee60();
                  pbVar27 = pub_1406abab0(0x30,8);
                  if (pbVar27 != (byte *)0x0) {
                    pbVar27[0] = 1;
                    pbVar27[1] = 0;
                    pbVar27[2] = 0;
                    pbVar27[3] = 0;
                    pbVar27[4] = 0;
                    pbVar27[5] = 0;
                    pbVar27[6] = 0;
                    pbVar27[7] = 0;
                    pbVar27[8] = 1;
                    pbVar27[9] = 0;
                    pbVar27[10] = 0;
                    pbVar27[0xb] = 0;
                    pbVar27[0xc] = 0;
                    pbVar27[0xd] = 0;
                    pbVar27[0xe] = 0;
                    pbVar27[0xf] = 0;
                    pbVar27[0x10] = 0;
                    pbVar27[0x18] = 0;
                    pbVar27[0x19] = 0;
                    pbVar27[0x1a] = 0;
                    pbVar27[0x1b] = 0;
                    pbVar27[0x1c] = 0;
                    pbVar27[0x1d] = 0;
                    pbVar27[0x1e] = 0;
                    pbVar27[0x1f] = 0;
                    pbVar27[0x20] = 8;
                    pbVar27[0x21] = 0;
                    pbVar27[0x22] = 0;
                    pbVar27[0x23] = 0;
                    pbVar27[0x24] = 0;
                    pbVar27[0x25] = 0;
                    pbVar27[0x26] = 0;
                    pbVar27[0x27] = 0;
                    pbVar27[0x28] = 0;
                    pbVar27[0x29] = 0;
                    pbVar27[0x2a] = 0;
                    pbVar27[0x2b] = 0;
                    pbVar27[0x2c] = 0;
                    pbVar27[0x2d] = 0;
                    pbVar27[0x2e] = 0;
                    pbVar27[0x2f] = 0;
                    *param_1 = pbVar24;
                    param_1[10] = 0x8000;
                    param_1[1] = pbVar21;
                    param_1[2] = 0x8001;
                    param_1[3] = pbVar25;
                    param_1[4] = 0x200;
                    param_1[0xb] = 0;
                    param_1[0xc] = 0x400;
                    param_1[0xd] = pbVar23;
                    param_1[0xe] = 0x400;
                    param_1[5] = lVar22;
                    param_1[6] = uVar29;
                    param_1[0xf] = 4;
                    param_1[7] = pbVar26;
                    param_1[8] = 0x200;
                    param_1[9] = pbVar27;
                    return param_1;
                  }
                    /* WARNING: Subroutine does not return */
                  pdb_142dc7e11(8,0x30);
                }
                pdb_142dc7e2a(8,0x1000);
              }
              goto LAB_141a7b110;
            }
            goto LAB_141a7b0c8;
          }
        }
      }
    }
    uStack_81 = 1;
    uStack_82 = 1;
    pdb_142dc7e2a(4,0xa0000);
  }
LAB_141a7b110:
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}

