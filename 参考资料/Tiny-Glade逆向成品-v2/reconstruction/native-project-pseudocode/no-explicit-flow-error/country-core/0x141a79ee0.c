// VA 0x141a79ee0, PDB extent 2787 bytes
// country_core::render::sparse_instance_buffer::impl$10::new_storage_buffer<country_core::resources::sparkle::SparkleSsbo>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/render/sparse_instance_buffer.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::render::sparse_instance_buffer::impl$10::new_storage_buffer<country_core::resources::sparkle::SparkleSsbo>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/render/sparse_instance_buffer.rs
   Extent: 2787 */

undefined8 * pdb_141a79ee0(undefined8 *param_1,undefined8 param_2,longlong param_3)

{
  code *pcVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
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
  pbVar21 = pub_1406abae0(0x301,1);
  if (pbVar21 == (byte *)0x0) {
    pdb_142dc7e2a(1,0x301);
LAB_141a7a547:
    uStack_81 = 1;
    uStack_82 = 1;
    pdb_142dc7e2a(4,0xc00);
  }
  else {
    pbVar21[0x300] = 0x20;
    uStack_84 = 1;
    uVar29 = 3;
    lVar22 = pdb_140c69f90(0);
    if (uVar29 < 3) {
      uStack_81 = 1;
      uStack_82 = 1;
      pdb_142dc8420(0,3,uVar29,&UNK_143382328);
      goto LAB_141a7a58f;
    }
    pdb_14007ee60();
    pbVar23 = pub_1406abab0(0x40000,4);
    if (pbVar23 != (byte *)0x0) {
      lVar28 = 0xe0;
      while( true ) {
        *(undefined1 (*) [16])(pbVar23 + lVar28 + -0xd0) = (undefined1  [16])0x0;
        *(undefined1 (*) [16])(pbVar23 + lVar28 + -0xe0) = (undefined1  [16])0x0;
        *(undefined1 (*) [16])(pbVar23 + lVar28 + -0xc0) = (undefined1  [16])0x0;
        *(undefined1 (*) [16])(pbVar23 + lVar28 + -0xb0) = (undefined1  [16])0x0;
        *(undefined1 (*) [16])(pbVar23 + lVar28 + -0xa0) = (undefined1  [16])0x0;
        *(undefined1 (*) [16])(pbVar23 + lVar28 + -0x90) = (undefined1  [16])0x0;
        *(undefined1 (*) [16])(pbVar23 + lVar28 + -0x80) = (undefined1  [16])0x0;
        *(undefined1 (*) [16])(pbVar23 + lVar28 + -0x70) = (undefined1  [16])0x0;
        *(undefined1 (*) [16])(pbVar23 + lVar28 + -0x60) = (undefined1  [16])0x0;
        *(undefined1 (*) [16])(pbVar23 + lVar28 + -0x50) = (undefined1  [16])0x0;
        *(undefined1 (*) [16])(pbVar23 + lVar28 + -0x40) = (undefined1  [16])0x0;
        *(undefined1 (*) [16])(pbVar23 + lVar28 + -0x30) = (undefined1  [16])0x0;
        *(undefined1 (*) [16])(pbVar23 + lVar28 + -0x20) = (undefined1  [16])0x0;
        *(undefined1 (*) [16])(pbVar23 + lVar28 + -0x10) = (undefined1  [16])0x0;
        if (lVar28 == 0x3ffe0) break;
        ((undefined1 (*) [16])(pbVar23 + lVar28))[1] = (undefined1  [16])0x0;
        *(undefined1 (*) [16])(pbVar23 + lVar28) = (undefined1  [16])0x0;
        lVar28 = lVar28 + 0x100;
      }
      *(undefined1 (*) [16])(pbVar23 + 0x3fff0) = (undefined1  [16])0x0;
      *(undefined1 (*) [16])(pbVar23 + 0x3ffe0) = (undefined1  [16])0x0;
      lStack_90 = 0x2000;
      pbStack_98 = pbVar23;
      if (*(int *)(lVar22 + 0x10) != 0) {
        pdb_142deb324(lVar22,&pbStack_98);
      }
      if ((pbStack_98 != (byte *)0x0) && (lStack_90 != 0)) {
        pub_1406abac0(pbStack_98,lStack_90 << 5,4);
      }
      pdb_14007ee60();
      pbVar23 = pub_1406abab0(0x40000,4);
      if (pbVar23 != (byte *)0x0) {
        lVar28 = 0xe0;
        while( true ) {
          *(undefined1 (*) [16])(pbVar23 + lVar28 + -0xd0) = (undefined1  [16])0x0;
          *(undefined1 (*) [16])(pbVar23 + lVar28 + -0xe0) = (undefined1  [16])0x0;
          *(undefined1 (*) [16])(pbVar23 + lVar28 + -0xc0) = (undefined1  [16])0x0;
          *(undefined1 (*) [16])(pbVar23 + lVar28 + -0xb0) = (undefined1  [16])0x0;
          *(undefined1 (*) [16])(pbVar23 + lVar28 + -0xa0) = (undefined1  [16])0x0;
          *(undefined1 (*) [16])(pbVar23 + lVar28 + -0x90) = (undefined1  [16])0x0;
          *(undefined1 (*) [16])(pbVar23 + lVar28 + -0x80) = (undefined1  [16])0x0;
          *(undefined1 (*) [16])(pbVar23 + lVar28 + -0x70) = (undefined1  [16])0x0;
          *(undefined1 (*) [16])(pbVar23 + lVar28 + -0x60) = (undefined1  [16])0x0;
          *(undefined1 (*) [16])(pbVar23 + lVar28 + -0x50) = (undefined1  [16])0x0;
          *(undefined1 (*) [16])(pbVar23 + lVar28 + -0x40) = (undefined1  [16])0x0;
          *(undefined1 (*) [16])(pbVar23 + lVar28 + -0x30) = (undefined1  [16])0x0;
          *(undefined1 (*) [16])(pbVar23 + lVar28 + -0x20) = (undefined1  [16])0x0;
          *(undefined1 (*) [16])(pbVar23 + lVar28 + -0x10) = (undefined1  [16])0x0;
          if (lVar28 == 0x3ffe0) break;
          ((undefined1 (*) [16])(pbVar23 + lVar28))[1] = (undefined1  [16])0x0;
          *(undefined1 (*) [16])(pbVar23 + lVar28) = (undefined1  [16])0x0;
          lVar28 = lVar28 + 0x100;
        }
        *(undefined1 (*) [16])(pbVar23 + 0x3fff0) = (undefined1  [16])0x0;
        *(undefined1 (*) [16])(pbVar23 + 0x3ffe0) = (undefined1  [16])0x0;
        lStack_90 = 0x2000;
        pbStack_98 = pbVar23;
        if (*(int *)(lVar22 + 0x28) != 0) {
          pdb_142deb324(lVar22 + 0x18,&pbStack_98);
        }
        if ((pbStack_98 != (byte *)0x0) && (lStack_90 != 0)) {
          pub_1406abac0(pbStack_98,lStack_90 << 5,4);
        }
        pdb_14007ee60();
        pbVar23 = pub_1406abab0(0x40000,4);
        if (pbVar23 != (byte *)0x0) {
          lVar28 = 0xe0;
          while( true ) {
            *(undefined1 (*) [16])(pbVar23 + lVar28 + -0xd0) = (undefined1  [16])0x0;
            *(undefined1 (*) [16])(pbVar23 + lVar28 + -0xe0) = (undefined1  [16])0x0;
            *(undefined1 (*) [16])(pbVar23 + lVar28 + -0xc0) = (undefined1  [16])0x0;
            *(undefined1 (*) [16])(pbVar23 + lVar28 + -0xb0) = (undefined1  [16])0x0;
            *(undefined1 (*) [16])(pbVar23 + lVar28 + -0xa0) = (undefined1  [16])0x0;
            *(undefined1 (*) [16])(pbVar23 + lVar28 + -0x90) = (undefined1  [16])0x0;
            *(undefined1 (*) [16])(pbVar23 + lVar28 + -0x80) = (undefined1  [16])0x0;
            *(undefined1 (*) [16])(pbVar23 + lVar28 + -0x70) = (undefined1  [16])0x0;
            *(undefined1 (*) [16])(pbVar23 + lVar28 + -0x60) = (undefined1  [16])0x0;
            *(undefined1 (*) [16])(pbVar23 + lVar28 + -0x50) = (undefined1  [16])0x0;
            *(undefined1 (*) [16])(pbVar23 + lVar28 + -0x40) = (undefined1  [16])0x0;
            *(undefined1 (*) [16])(pbVar23 + lVar28 + -0x30) = (undefined1  [16])0x0;
            *(undefined1 (*) [16])(pbVar23 + lVar28 + -0x20) = (undefined1  [16])0x0;
            *(undefined1 (*) [16])(pbVar23 + lVar28 + -0x10) = (undefined1  [16])0x0;
            if (lVar28 == 0x3ffe0) break;
            ((undefined1 (*) [16])(pbVar23 + lVar28))[1] = (undefined1  [16])0x0;
            *(undefined1 (*) [16])(pbVar23 + lVar28) = (undefined1  [16])0x0;
            lVar28 = lVar28 + 0x100;
          }
          *(undefined1 (*) [16])(pbVar23 + 0x3fff0) = (undefined1  [16])0x0;
          *(undefined1 (*) [16])(pbVar23 + 0x3ffe0) = (undefined1  [16])0x0;
          lStack_90 = 0x2000;
          pbStack_98 = pbVar23;
          if (*(int *)(lVar22 + 0x40) != 0) {
            pdb_142deb324(lVar22 + 0x30,&pbStack_98);
          }
          if ((pbStack_98 != (byte *)0x0) && (lStack_90 != 0)) {
            pub_1406abac0(pbStack_98,lStack_90 << 5,4);
          }
          pdb_14007ee60();
          pbVar23 = pub_1406abab0(0xc00,4);
          iVar20 = _UNK_14338207c;
          iVar19 = _UNK_143382078;
          iVar18 = _UNK_143382074;
          iVar17 = _DAT_143382070;
          iVar16 = _UNK_14338206c;
          iVar15 = _UNK_143382068;
          iVar14 = _UNK_143382064;
          iVar13 = _DAT_143382060;
          iVar12 = _UNK_14338205c;
          iVar11 = _UNK_143382058;
          iVar10 = _UNK_143382054;
          iVar9 = _DAT_143382050;
          iVar8 = _UNK_14338204c;
          iVar7 = _UNK_143382048;
          iVar6 = _UNK_143382044;
          iVar5 = _DAT_143382040;
          auVar4 = _DAT_143382030;
          auVar3 = _DAT_143382020;
          auVar2 = _DAT_143382010;
          if (pbVar23 != (byte *)0x0) {
            lVar28 = 0x14;
            iVar31 = _DAT_143034280;
            iVar32 = _UNK_143034284;
            iVar33 = _UNK_143034288;
            iVar34 = _UNK_14303428c;
            do {
              pbVar24 = pbVar23 + lVar28 * 4 + -0x50;
              *(int *)pbVar24 = auVar2._0_4_ - iVar31;
              *(int *)(pbVar24 + 4) = auVar2._4_4_ - iVar32;
              *(int *)(pbVar24 + 8) = auVar2._8_4_ - iVar33;
              *(int *)(pbVar24 + 0xc) = auVar2._12_4_ - iVar34;
              pbVar24 = pbVar23 + lVar28 * 4 + -0x40;
              *(int *)pbVar24 = auVar3._0_4_ - iVar31;
              *(int *)(pbVar24 + 4) = auVar3._4_4_ - iVar32;
              *(int *)(pbVar24 + 8) = auVar3._8_4_ - iVar33;
              *(int *)(pbVar24 + 0xc) = auVar3._12_4_ - iVar34;
              pbVar24 = pbVar23 + lVar28 * 4 + -0x30;
              *(int *)pbVar24 = auVar4._0_4_ - iVar31;
              *(int *)(pbVar24 + 4) = auVar4._4_4_ - iVar32;
              *(int *)(pbVar24 + 8) = auVar4._8_4_ - iVar33;
              *(int *)(pbVar24 + 0xc) = auVar4._12_4_ - iVar34;
              pbVar24 = pbVar23 + lVar28 * 4 + -0x20;
              *(int *)pbVar24 = iVar5 - iVar31;
              *(int *)(pbVar24 + 4) = iVar6 - iVar32;
              *(int *)(pbVar24 + 8) = iVar7 - iVar33;
              *(int *)(pbVar24 + 0xc) = iVar8 - iVar34;
              pbVar24 = pbVar23 + lVar28 * 4 + -0x10;
              *(int *)pbVar24 = iVar9 - iVar31;
              *(int *)(pbVar24 + 4) = iVar10 - iVar32;
              *(int *)(pbVar24 + 8) = iVar11 - iVar33;
              *(int *)(pbVar24 + 0xc) = iVar12 - iVar34;
              pbVar24 = pbVar23 + lVar28 * 4;
              *(int *)pbVar24 = iVar13 - iVar31;
              *(int *)(pbVar24 + 4) = iVar14 - iVar32;
              *(int *)(pbVar24 + 8) = iVar15 - iVar33;
              *(int *)(pbVar24 + 0xc) = iVar16 - iVar34;
              iVar31 = iVar31 + iVar17;
              iVar32 = iVar32 + iVar18;
              iVar33 = iVar33 + iVar19;
              iVar34 = iVar34 + iVar20;
              lVar28 = lVar28 + 0x18;
            } while (lVar28 != 0x314);
            uStack_85 = 1;
            uStack_86 = 1;
            pbVar24 = (byte *)pdb_141b0ef20(param_2,0);
            pbStack_98 = pbVar24;
            pdb_14007ee60();
            pbVar25 = pub_1406abae0(0x60,8);
            bVar30 = pbVar25 == (byte *)0x0;
            uStack_83 = bVar30;
            if (bVar30) {
              pdb_142dc7e2a(8,0x60);
            }
            else {
              pdb_14007ee60();
              pbVar26 = pub_1406abae0(0x60,8);
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
                  param_1[10] = 0x6000;
                  param_1[1] = pbVar21;
                  param_1[2] = 0x301;
                  param_1[3] = pbVar25;
                  param_1[4] = 0xc;
                  param_1[0xb] = 0;
                  param_1[0xc] = 0x300;
                  param_1[0xd] = pbVar23;
                  param_1[0xe] = 0x300;
                  param_1[5] = lVar22;
                  param_1[6] = uVar29;
                  param_1[0xf] = 3;
                  param_1[7] = pbVar26;
                  param_1[8] = 0xc;
                  param_1[9] = pbVar27;
                  return param_1;
                }
                    /* WARNING: Subroutine does not return */
                pdb_142dc7e11(8,0x30);
              }
              pdb_142dc7e2a(8,0x60);
            }
            goto LAB_141a7a58f;
          }
          goto LAB_141a7a547;
        }
      }
    }
    uStack_81 = 1;
    uStack_82 = 1;
    pdb_142dc7e2a(4,0x40000);
  }
LAB_141a7a58f:
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}

