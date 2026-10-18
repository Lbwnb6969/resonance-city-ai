// VA 0x140848f00, PDB extent 434 bytes
// system_decorator::decorator_visual::lantern::impl$0::default
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/decorator/src/decorator_visual/lantern.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: system_decorator::decorator_visual::lantern::impl$0::default
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/decorator/src/decorator_visual/lantern.rs
   Extent: 434 */

undefined8 * pdb_140848f00(undefined8 *param_1)

{
  code *pcVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  short sVar4;
  short sVar5;
  short sVar6;
  short sVar7;
  short sVar8;
  short sVar9;
  short sVar10;
  short sVar11;
  short sVar12;
  short sVar13;
  short sVar14;
  short sVar15;
  short sVar16;
  short sVar17;
  short sVar18;
  short sVar19;
  byte *pbVar20;
  longlong lVar21;
  byte *pbVar22;
  short sVar23;
  short sVar24;
  short sVar25;
  short sVar26;
  short sVar27;
  short sVar28;
  short sVar29;
  short sVar30;
  
  pdb_14007ee60();
  pbVar20 = pub_1406abab0(0x10000,2);
  sVar19 = _UNK_14300bb6e;
  sVar18 = _UNK_14300bb6c;
  sVar17 = _UNK_14300bb6a;
  sVar16 = _UNK_14300bb68;
  sVar15 = _UNK_14300bb66;
  sVar14 = _UNK_14300bb64;
  sVar13 = _UNK_14300bb62;
  sVar12 = _DAT_14300bb60;
  sVar11 = _UNK_14300bb5e;
  sVar10 = _UNK_14300bb5c;
  sVar9 = _UNK_14300bb5a;
  sVar8 = _UNK_14300bb58;
  sVar7 = _UNK_14300bb56;
  sVar6 = _UNK_14300bb54;
  sVar5 = _UNK_14300bb52;
  sVar4 = _DAT_14300bb50;
  auVar3 = _DAT_14300bb40;
  auVar2 = _DAT_14300bb30;
  if (pbVar20 == (byte *)0x0) {
    pdb_142dc7e2a(2,0x10000);
  }
  else {
    lVar21 = 0x18;
    sVar23 = _DAT_14300bb20;
    sVar24 = _UNK_14300bb22;
    sVar25 = _UNK_14300bb24;
    sVar26 = _UNK_14300bb26;
    sVar27 = _UNK_14300bb28;
    sVar28 = _UNK_14300bb2a;
    sVar29 = _UNK_14300bb2c;
    sVar30 = _UNK_14300bb2e;
    do {
      pbVar22 = pbVar20 + lVar21 * 2 + -0x30;
      *(short *)pbVar22 = sVar23 + -1;
      *(short *)(pbVar22 + 2) = sVar24 + -1;
      *(short *)(pbVar22 + 4) = sVar25 + -1;
      *(short *)(pbVar22 + 6) = sVar26 + -1;
      *(short *)(pbVar22 + 8) = sVar27 + -1;
      *(short *)(pbVar22 + 10) = sVar28 + -1;
      *(short *)(pbVar22 + 0xc) = sVar29 + -1;
      *(short *)(pbVar22 + 0xe) = sVar30 + -1;
      pbVar22 = pbVar20 + lVar21 * 2 + -0x20;
      *(short *)pbVar22 = sVar23 + auVar2._0_2_;
      *(short *)(pbVar22 + 2) = sVar24 + auVar2._2_2_;
      *(short *)(pbVar22 + 4) = sVar25 + auVar2._4_2_;
      *(short *)(pbVar22 + 6) = sVar26 + auVar2._6_2_;
      *(short *)(pbVar22 + 8) = sVar27 + auVar2._8_2_;
      *(short *)(pbVar22 + 10) = sVar28 + auVar2._10_2_;
      *(short *)(pbVar22 + 0xc) = sVar29 + auVar2._12_2_;
      *(short *)(pbVar22 + 0xe) = sVar30 + auVar2._14_2_;
      pbVar22 = pbVar20 + lVar21 * 2 + -0x10;
      *(short *)pbVar22 = sVar23 + auVar3._0_2_;
      *(short *)(pbVar22 + 2) = sVar24 + auVar3._2_2_;
      *(short *)(pbVar22 + 4) = sVar25 + auVar3._4_2_;
      *(short *)(pbVar22 + 6) = sVar26 + auVar3._6_2_;
      *(short *)(pbVar22 + 8) = sVar27 + auVar3._8_2_;
      *(short *)(pbVar22 + 10) = sVar28 + auVar3._10_2_;
      *(short *)(pbVar22 + 0xc) = sVar29 + auVar3._12_2_;
      *(short *)(pbVar22 + 0xe) = sVar30 + auVar3._14_2_;
      pbVar22 = pbVar20 + lVar21 * 2;
      *(short *)pbVar22 = sVar23 + sVar4;
      *(short *)(pbVar22 + 2) = sVar24 + sVar5;
      *(short *)(pbVar22 + 4) = sVar25 + sVar6;
      *(short *)(pbVar22 + 6) = sVar26 + sVar7;
      *(short *)(pbVar22 + 8) = sVar27 + sVar8;
      *(short *)(pbVar22 + 10) = sVar28 + sVar9;
      *(short *)(pbVar22 + 0xc) = sVar29 + sVar10;
      *(short *)(pbVar22 + 0xe) = sVar30 + sVar11;
      sVar23 = sVar23 + sVar12;
      sVar24 = sVar24 + sVar13;
      sVar25 = sVar25 + sVar14;
      sVar26 = sVar26 + sVar15;
      sVar27 = sVar27 + sVar16;
      sVar28 = sVar28 + sVar17;
      sVar29 = sVar29 + sVar18;
      sVar30 = sVar30 + sVar19;
      lVar21 = lVar21 + 0x20;
    } while (lVar21 != 0x8018);
    pdb_14007ee60();
    pbVar22 = pub_1406abae0(0x80000,4);
    if (pbVar22 != (byte *)0x0) {
      *param_1 = 0;
      param_1[1] = 4;
      *(undefined1 (*) [16])(param_1 + 2) = (undefined1  [16])0x0;
      param_1[4] = 4;
      param_1[5] = 0;
      param_1[6] = 0x8000;
      param_1[7] = pbVar20;
      param_1[8] = 0x8000;
      param_1[9] = 0x8000;
      param_1[10] = pbVar22;
      param_1[0xb] = 0x8000;
      return param_1;
    }
  }
  pdb_142dc7e2a(4,0x80000);
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}

