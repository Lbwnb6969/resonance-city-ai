// VA 0x140c986d0, PDB extent 2155 bytes
// country_core::systems::collision::impl$0::build
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/collision.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: country_core::systems::collision::impl$0::build
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/collision.rs
   Extent: 2155 */

void pdb_140c986d0(undefined8 param_1,undefined8 param_2)

{
  undefined1 *puVar1;
  code *pcVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  longlong lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  longlong lVar13;
  undefined8 uVar14;
  longlong *plVar15;
  byte *pbVar16;
  longlong lVar17;
  undefined4 unaff_XMM6_Da;
  undefined4 unaff_XMM6_Db;
  undefined4 unaff_XMM6_Dc;
  undefined4 unaff_XMM6_Dd;
  undefined4 unaff_XMM7_Da;
  undefined4 unaff_XMM7_Db;
  undefined4 unaff_XMM7_Dc;
  undefined4 unaff_XMM7_Dd;
  undefined8 uStackX_8;
  undefined8 uStackX_10;
  undefined8 uStackX_18;
  undefined8 uStackX_20;
  undefined8 uStack_20;
  
  uStack_20 = 0x140c986dd;
  lVar13 = pdb_142d7c6d0();
  lVar13 = -lVar13;
  *(undefined4 *)(&stack0x00007ed8 + lVar13) = unaff_XMM7_Da;
  *(undefined4 *)(&stack0x00007edc + lVar13) = unaff_XMM7_Db;
  *(undefined4 *)(&stack0x00007ee0 + lVar13) = unaff_XMM7_Dc;
  *(undefined4 *)(&stack0x00007ee4 + lVar13) = unaff_XMM7_Dd;
  *(undefined4 *)(&stack0x00007ec8 + lVar13) = unaff_XMM6_Da;
  *(undefined4 *)(&stack0x00007ecc + lVar13) = unaff_XMM6_Db;
  *(undefined4 *)(&stack0x00007ed0 + lVar13) = unaff_XMM6_Dc;
  *(undefined4 *)(&stack0x00007ed4 + lVar13) = unaff_XMM6_Dd;
  *(undefined8 *)(&stack0x00007ec0 + lVar13) = 0xfffffffffffffffe;
  *(undefined8 *)((longlong)&uStack_20 + lVar13) = 0x140c9870c;
  pdb_140c95a50(param_2);
  *(undefined8 *)((longlong)&uStack_20 + lVar13) = 0x140c98718;
  pdb_1409360d0(&stack0x00003dd8 + lVar13);
  *(undefined1 *)((longlong)&uStackX_8 + lVar13) = 0x1e;
  lVar17 = (longlong)&uStackX_8 + lVar13;
  *(undefined8 *)((longlong)&uStack_20 + lVar13) = 0x140c98733;
  uVar14 = pdb_140950ee0(_DAT_143ca8dd0,lVar17,&UNK_14305af38);
  *(undefined8 *)((longlong)&uStack_20 + lVar13) = 0x140c98746;
  pdb_140676be0(&stack0x00003dd8 + lVar13,uVar14,lVar17);
  *(undefined8 *)(&stack0x00007cf8 + lVar13) = *(undefined8 *)(&stack0x00003e38 + lVar13);
  *(undefined8 *)(&stack0x00007d00 + lVar13) = *(undefined8 *)(&stack0x00003e40 + lVar13);
  *(undefined8 *)(&stack0x00007ce8 + lVar13) = *(undefined8 *)(&stack0x00003e28 + lVar13);
  *(undefined8 *)(&stack0x00007cf0 + lVar13) = *(undefined8 *)(&stack0x00003e30 + lVar13);
  *(undefined8 *)(&stack0x00007cd8 + lVar13) = *(undefined8 *)(&stack0x00003e18 + lVar13);
  *(undefined8 *)(&stack0x00007ce0 + lVar13) = *(undefined8 *)(&stack0x00003e20 + lVar13);
  *(undefined4 *)(&stack0x00007cc8 + lVar13) = *(undefined4 *)(&stack0x00003e08 + lVar13);
  *(undefined4 *)(&stack0x00007ccc + lVar13) = *(undefined4 *)(&stack0x00003e0c + lVar13);
  *(undefined4 *)(&stack0x00007cd0 + lVar13) = *(undefined4 *)(&stack0x00003e10 + lVar13);
  *(undefined4 *)(&stack0x00007cd4 + lVar13) = *(undefined4 *)(&stack0x00003e14 + lVar13);
  *(undefined4 *)(&stack0x00007cb8 + lVar13) = *(undefined4 *)(&stack0x00003df8 + lVar13);
  *(undefined4 *)(&stack0x00007cbc + lVar13) = *(undefined4 *)(&stack0x00003dfc + lVar13);
  *(undefined4 *)(&stack0x00007cc0 + lVar13) = *(undefined4 *)(&stack0x00003e00 + lVar13);
  *(undefined4 *)(&stack0x00007cc4 + lVar13) = *(undefined4 *)(&stack0x00003e04 + lVar13);
  *(undefined4 *)(&stack0x00007ca8 + lVar13) = *(undefined4 *)(&stack0x00003de8 + lVar13);
  *(undefined4 *)(&stack0x00007cac + lVar13) = *(undefined4 *)(&stack0x00003dec + lVar13);
  *(undefined4 *)(&stack0x00007cb0 + lVar13) = *(undefined4 *)(&stack0x00003df0 + lVar13);
  *(undefined4 *)(&stack0x00007cb4 + lVar13) = *(undefined4 *)(&stack0x00003df4 + lVar13);
  *(undefined4 *)(&stack0x00007c98 + lVar13) = *(undefined4 *)(&stack0x00003dd8 + lVar13);
  *(undefined4 *)(&stack0x00007c9c + lVar13) = *(undefined4 *)(&stack0x00003ddc + lVar13);
  *(undefined4 *)(&stack0x00007ca0 + lVar13) = *(undefined4 *)(&stack0x00003de0 + lVar13);
  *(undefined4 *)(&stack0x00007ca4 + lVar13) = *(undefined4 *)(&stack0x00003de4 + lVar13);
  *(undefined8 *)((longlong)&uStack_20 + lVar13) = 0x140c987bb;
  pdb_140c62d10((longlong)&uStackX_8 + lVar13,0x24,&UNK_143077008);
  *(undefined8 *)(&stack0x00003e38 + lVar13) = *(undefined8 *)(&stack0x00007cf8 + lVar13);
  *(undefined8 *)(&stack0x00003e40 + lVar13) = *(undefined8 *)(&stack0x00007d00 + lVar13);
  *(undefined8 *)(&stack0x00003e28 + lVar13) = *(undefined8 *)(&stack0x00007ce8 + lVar13);
  *(undefined8 *)(&stack0x00003e30 + lVar13) = *(undefined8 *)(&stack0x00007cf0 + lVar13);
  *(undefined8 *)(&stack0x00003e18 + lVar13) = *(undefined8 *)(&stack0x00007cd8 + lVar13);
  *(undefined8 *)(&stack0x00003e20 + lVar13) = *(undefined8 *)(&stack0x00007ce0 + lVar13);
  *(undefined8 *)(&stack0x00003e08 + lVar13) = *(undefined8 *)(&stack0x00007cc8 + lVar13);
  *(undefined8 *)(&stack0x00003e10 + lVar13) = *(undefined8 *)(&stack0x00007cd0 + lVar13);
  *(undefined8 *)(&stack0x00003df8 + lVar13) = *(undefined8 *)(&stack0x00007cb8 + lVar13);
  *(undefined8 *)(&stack0x00003e00 + lVar13) = *(undefined8 *)(&stack0x00007cc0 + lVar13);
  *(undefined8 *)(&stack0x00003de8 + lVar13) = *(undefined8 *)(&stack0x00007ca8 + lVar13);
  *(undefined8 *)(&stack0x00003df0 + lVar13) = *(undefined8 *)(&stack0x00007cb0 + lVar13);
  *(undefined8 *)(&stack0x00003dd8 + lVar13) = *(undefined8 *)(&stack0x00007c98 + lVar13);
  *(undefined8 *)(&stack0x00003de0 + lVar13) = *(undefined8 *)(&stack0x00007ca0 + lVar13);
  uVar3 = *(undefined4 *)((longlong)&uStackX_18 + lVar13 + 4);
  uVar4 = *(undefined4 *)((longlong)&uStackX_20 + lVar13 + 4);
  *(undefined8 *)(&stack0x00003e48 + lVar13) = *(undefined8 *)((longlong)&uStackX_8 + lVar13);
  *(undefined8 *)(&stack0x00003e50 + lVar13) = *(undefined8 *)((longlong)&uStackX_10 + lVar13);
  *(undefined4 *)(&stack0x00003e58 + lVar13) = *(undefined4 *)((longlong)&uStackX_18 + lVar13);
  *(undefined4 *)(&stack0x00003e5c + lVar13) = uVar3;
  *(undefined4 *)(&stack0x00003e60 + lVar13) = *(undefined4 *)((longlong)&uStackX_20 + lVar13);
  *(undefined4 *)(&stack0x00003e64 + lVar13) = uVar4;
  *(undefined4 *)(&stack0x00003e68 + lVar13) = *(undefined4 *)(&stack0x00000028 + lVar13);
  *(undefined4 *)(&stack0x00003e6c + lVar13) = *(undefined4 *)(&stack0x0000002c + lVar13);
  *(undefined4 *)(&stack0x00003e70 + lVar13) = *(undefined4 *)(&stack0x00000030 + lVar13);
  *(undefined4 *)(&stack0x00003e74 + lVar13) = *(undefined4 *)(&stack0x00000034 + lVar13);
  *(undefined4 *)(&stack0x00003e78 + lVar13) = *(undefined4 *)(&stack0x00000038 + lVar13);
  *(undefined4 *)(&stack0x00003e7c + lVar13) = *(undefined4 *)(&stack0x0000003c + lVar13);
  *(undefined4 *)(&stack0x00003e80 + lVar13) = *(undefined4 *)(&stack0x00000040 + lVar13);
  *(undefined4 *)(&stack0x00003e84 + lVar13) = *(undefined4 *)(&stack0x00000044 + lVar13);
  *(undefined8 *)(&stack0x00003e88 + lVar13) = *(undefined8 *)(&stack0x00000048 + lVar13);
  *(undefined8 *)(&stack0x00003e90 + lVar13) = *(undefined8 *)(&stack0x00000050 + lVar13);
  *(undefined8 *)(&stack0x00003e98 + lVar13) = *(undefined8 *)(&stack0x00000058 + lVar13);
  *(undefined8 *)(&stack0x00003ea0 + lVar13) = *(undefined8 *)(&stack0x00000060 + lVar13);
  *(undefined4 *)(&stack0x00003ea8 + lVar13) = *(undefined4 *)(&stack0x00000068 + lVar13);
  *(undefined4 *)(&stack0x00003eac + lVar13) = *(undefined4 *)(&stack0x0000006c + lVar13);
  *(undefined4 *)(&stack0x00003eb0 + lVar13) = *(undefined4 *)(&stack0x00000070 + lVar13);
  *(undefined4 *)(&stack0x00003eb4 + lVar13) = *(undefined4 *)(&stack0x00000074 + lVar13);
  *(undefined8 *)((longlong)&uStack_20 + lVar13) = 0x140c9887a;
  pdb_140c971f0(param_2,&stack0x00003dd8 + lVar13);
  *(undefined8 *)((longlong)&uStack_20 + lVar13) = 0x140c98884;
  pdb_140c975a0(param_2,1);
  *(undefined8 *)((longlong)&uStack_20 + lVar13) = 0x140c9888b;
  plVar15 = (longlong *)pdb_14008d710(0);
  if (plVar15 == (longlong *)0x0) {
    *(undefined8 *)((longlong)&uStack_20 + lVar13) = 0x140c98c87;
    pdb_142dc7890(&UNK_143326860);
  }
  else {
    lVar17 = *plVar15;
    uVar3 = *(undefined4 *)((longlong)plVar15 + 4);
    lVar9 = plVar15[1];
    uVar4 = *(undefined4 *)((longlong)plVar15 + 0xc);
    *plVar15 = *plVar15 + 1;
    uVar12 = _UNK_143022b38;
    uVar11 = _DAT_143022b30;
    uVar10 = _UNK_143022b28;
    uVar14 = _DAT_143022b20;
    *(undefined8 *)(&stack0x00007e88 + lVar13) = _DAT_143022b30;
    *(undefined8 *)(&stack0x00007e90 + lVar13) = _UNK_143022b38;
    *(undefined8 *)(&stack0x00007e78 + lVar13) = _DAT_143022b20;
    *(undefined8 *)(&stack0x00007e80 + lVar13) = _UNK_143022b28;
    *(int *)(&stack0x00007e98 + lVar13) = (int)lVar17;
    *(undefined4 *)(&stack0x00007e9c + lVar13) = uVar3;
    *(int *)(&stack0x00007ea0 + lVar13) = (int)lVar9;
    *(undefined4 *)(&stack0x00007ea4 + lVar13) = uVar4;
    *(undefined8 *)((longlong)&uStack_20 + lVar13) = 0x140c988c4;
    plVar15 = (longlong *)pdb_14008d710(0);
    if (plVar15 != (longlong *)0x0) {
      lVar17 = *plVar15;
      uVar3 = *(undefined4 *)((longlong)plVar15 + 4);
      lVar9 = plVar15[1];
      uVar4 = *(undefined4 *)((longlong)plVar15 + 0xc);
      *plVar15 = *plVar15 + 1;
      *(undefined8 *)(&stack0x00007d98 + lVar13) = uVar11;
      *(undefined8 *)(&stack0x00007da0 + lVar13) = uVar12;
      *(undefined8 *)(&stack0x00007d88 + lVar13) = uVar14;
      *(undefined8 *)(&stack0x00007d90 + lVar13) = uVar10;
      *(int *)(&stack0x00007da8 + lVar13) = (int)lVar17;
      *(undefined4 *)(&stack0x00007dac + lVar13) = uVar3;
      *(int *)(&stack0x00007db0 + lVar13) = (int)lVar9;
      *(undefined4 *)(&stack0x00007db4 + lVar13) = uVar4;
      *(undefined8 *)((longlong)&uStack_20 + lVar13) = 0x140c988f0;
      plVar15 = (longlong *)pdb_14008d710(0);
      if (plVar15 == (longlong *)0x0) {
        *(undefined8 *)((longlong)&uStack_20 + lVar13) = 0x140c98ca3;
        pdb_142dc7890(&UNK_143326860);
      }
      else {
        lVar17 = *plVar15;
        uVar3 = *(undefined4 *)((longlong)plVar15 + 4);
        lVar9 = plVar15[1];
        uVar4 = *(undefined4 *)((longlong)plVar15 + 0xc);
        *plVar15 = *plVar15 + 1;
        *(undefined8 *)((longlong)&uStackX_18 + lVar13) = uVar11;
        *(undefined8 *)((longlong)&uStackX_20 + lVar13) = uVar12;
        *(undefined8 *)((longlong)&uStackX_8 + lVar13) = uVar14;
        *(undefined8 *)((longlong)&uStackX_10 + lVar13) = uVar10;
        *(int *)(&stack0x00000028 + lVar13) = (int)lVar17;
        *(undefined4 *)(&stack0x0000002c + lVar13) = uVar3;
        *(int *)(&stack0x00000030 + lVar13) = (int)lVar9;
        *(undefined4 *)(&stack0x00000034 + lVar13) = uVar4;
        *(undefined8 *)((longlong)&uStack_20 + lVar13) = 0x140c98913;
        plVar15 = (longlong *)pdb_14008d710(0);
        if (plVar15 == (longlong *)0x0) {
          *(undefined8 *)((longlong)&uStack_20 + lVar13) = 0x140c98cb2;
          pdb_142dc7890(&UNK_143326860);
        }
        else {
          lVar17 = *plVar15;
          uVar3 = *(undefined4 *)((longlong)plVar15 + 4);
          lVar9 = plVar15[1];
          uVar4 = *(undefined4 *)((longlong)plVar15 + 0xc);
          *plVar15 = *plVar15 + 1;
          *(undefined8 *)(&stack0x00003de8 + lVar13) = uVar11;
          *(undefined8 *)(&stack0x00003df0 + lVar13) = uVar12;
          *(undefined8 *)(&stack0x00003dd8 + lVar13) = uVar14;
          *(undefined8 *)(&stack0x00003de0 + lVar13) = uVar10;
          *(int *)(&stack0x00003df8 + lVar13) = (int)lVar17;
          *(undefined4 *)(&stack0x00003dfc + lVar13) = uVar3;
          *(int *)(&stack0x00003e00 + lVar13) = (int)lVar9;
          *(undefined4 *)(&stack0x00003e04 + lVar13) = uVar4;
          *(undefined8 *)((longlong)&uStack_20 + lVar13) = 0x140c9893f;
          plVar15 = (longlong *)pdb_14008d710(0);
          if (plVar15 == (longlong *)0x0) {
            *(undefined8 *)((longlong)&uStack_20 + lVar13) = 0x140c98cc1;
            pdb_142dc7890(&UNK_143326860);
          }
          else {
            lVar17 = *plVar15;
            uVar3 = *(undefined4 *)((longlong)plVar15 + 4);
            lVar9 = plVar15[1];
            uVar4 = *(undefined4 *)((longlong)plVar15 + 0xc);
            *plVar15 = *plVar15 + 1;
            *(undefined8 *)(&stack0x00007cb8 + lVar13) = *(undefined8 *)(&stack0x00007e98 + lVar13);
            *(undefined8 *)(&stack0x00007cc0 + lVar13) = *(undefined8 *)(&stack0x00007ea0 + lVar13);
            *(undefined8 *)(&stack0x00007ca8 + lVar13) = *(undefined8 *)(&stack0x00007e88 + lVar13);
            *(undefined8 *)(&stack0x00007cb0 + lVar13) = *(undefined8 *)(&stack0x00007e90 + lVar13);
            *(undefined8 *)(&stack0x00007c98 + lVar13) = *(undefined8 *)(&stack0x00007e78 + lVar13);
            *(undefined8 *)(&stack0x00007ca0 + lVar13) = *(undefined8 *)(&stack0x00007e80 + lVar13);
            *(undefined8 *)(&stack0x00007cc8 + lVar13) = *(undefined8 *)(&stack0x00007d88 + lVar13);
            *(undefined8 *)(&stack0x00007cd0 + lVar13) = *(undefined8 *)(&stack0x00007d90 + lVar13);
            *(undefined8 *)(&stack0x00007cd8 + lVar13) = *(undefined8 *)(&stack0x00007d98 + lVar13);
            *(undefined8 *)(&stack0x00007ce0 + lVar13) = *(undefined8 *)(&stack0x00007da0 + lVar13);
            *(undefined8 *)(&stack0x00007ce8 + lVar13) = *(undefined8 *)(&stack0x00007da8 + lVar13);
            *(undefined8 *)(&stack0x00007cf0 + lVar13) = *(undefined8 *)(&stack0x00007db0 + lVar13);
            *(undefined8 *)(&stack0x00007cf8 + lVar13) =
                 *(undefined8 *)((longlong)&uStackX_8 + lVar13);
            *(undefined8 *)(&stack0x00007d00 + lVar13) =
                 *(undefined8 *)((longlong)&uStackX_10 + lVar13);
            *(undefined8 *)(&stack0x00007d08 + lVar13) =
                 *(undefined8 *)((longlong)&uStackX_18 + lVar13);
            *(undefined8 *)(&stack0x00007d10 + lVar13) =
                 *(undefined8 *)((longlong)&uStackX_20 + lVar13);
            *(undefined8 *)(&stack0x00007d18 + lVar13) = *(undefined8 *)(&stack0x00000028 + lVar13);
            *(undefined8 *)(&stack0x00007d20 + lVar13) = *(undefined8 *)(&stack0x00000030 + lVar13);
            *(undefined4 *)(&stack0x00007d48 + lVar13) = *(undefined4 *)(&stack0x00003df8 + lVar13);
            *(undefined4 *)(&stack0x00007d4c + lVar13) = *(undefined4 *)(&stack0x00003dfc + lVar13);
            *(undefined4 *)(&stack0x00007d50 + lVar13) = *(undefined4 *)(&stack0x00003e00 + lVar13);
            *(undefined4 *)(&stack0x00007d54 + lVar13) = *(undefined4 *)(&stack0x00003e04 + lVar13);
            *(undefined4 *)(&stack0x00007d38 + lVar13) = *(undefined4 *)(&stack0x00003de8 + lVar13);
            *(undefined4 *)(&stack0x00007d3c + lVar13) = *(undefined4 *)(&stack0x00003dec + lVar13);
            *(undefined4 *)(&stack0x00007d40 + lVar13) = *(undefined4 *)(&stack0x00003df0 + lVar13);
            *(undefined4 *)(&stack0x00007d44 + lVar13) = *(undefined4 *)(&stack0x00003df4 + lVar13);
            *(undefined4 *)(&stack0x00007d28 + lVar13) = *(undefined4 *)(&stack0x00003dd8 + lVar13);
            *(undefined4 *)(&stack0x00007d2c + lVar13) = *(undefined4 *)(&stack0x00003ddc + lVar13);
            *(undefined4 *)(&stack0x00007d30 + lVar13) = *(undefined4 *)(&stack0x00003de0 + lVar13);
            *(undefined4 *)(&stack0x00007d34 + lVar13) = *(undefined4 *)(&stack0x00003de4 + lVar13);
            *(undefined8 *)(&stack0x00007d58 + lVar13) = uVar14;
            *(undefined8 *)(&stack0x00007d60 + lVar13) = uVar10;
            *(undefined8 *)(&stack0x00007d68 + lVar13) = uVar11;
            *(undefined8 *)(&stack0x00007d70 + lVar13) = uVar12;
            *(int *)(&stack0x00007d78 + lVar13) = (int)lVar17;
            *(undefined4 *)(&stack0x00007d7c + lVar13) = uVar3;
            *(int *)(&stack0x00007d80 + lVar13) = (int)lVar9;
            *(undefined4 *)(&stack0x00007d84 + lVar13) = uVar4;
            *(undefined8 *)((longlong)&uStack_20 + lVar13) = 0x140c98a08;
            pdb_14007ee60();
            *(undefined8 *)((longlong)&uStack_20 + lVar13) = 0x140c98a17;
            pbVar16 = pub_1406abab0(0x28,8);
            if (pbVar16 != (byte *)0x0) {
              pbVar16[0] = 0;
              pbVar16[1] = 0;
              pbVar16[2] = 0;
              pbVar16[3] = 0;
              pbVar16[0x20] = 0;
              pbVar16[0x21] = 0;
              pbVar16[0x22] = 0;
              pbVar16[0x23] = 0;
              *(undefined8 *)(&stack0x00007e58 + lVar13) = 1;
              *(byte **)(&stack0x00007e60 + lVar13) = pbVar16;
              *(undefined8 *)(&stack0x00007e68 + lVar13) = 1;
              *(undefined8 *)(&stack0x00007e70 + lVar13) = 1;
              *(undefined8 *)((longlong)&uStack_20 + lVar13) = 0x140c98a61;
              pdb_140934d20(&stack0x00003dd8 + lVar13);
              *(undefined8 *)(&stack0x00007e20 + lVar13) = 0;
              *(undefined8 *)(&stack0x00007e28 + lVar13) = 8;
              *(undefined8 *)(&stack0x00007e30 + lVar13) = 0;
              *(undefined8 *)(&stack0x00007e38 + lVar13) = 0;
              *(undefined8 *)(&stack0x00007e40 + lVar13) = 8;
              *(undefined8 *)(&stack0x00007e48 + lVar13) = 0;
              *(undefined8 *)(&stack0x00007e50 + lVar13) = 0;
              *(undefined8 *)(&stack0x00007d88 + lVar13) = 0;
              *(undefined8 *)(&stack0x00007d90 + lVar13) = 4;
              *(undefined8 *)(&stack0x00007d98 + lVar13) = 0;
              *(undefined8 *)(&stack0x00007da0 + lVar13) = 0;
              *(undefined8 *)(&stack0x00007da8 + lVar13) = 4;
              *(undefined8 *)(&stack0x00007db0 + lVar13) = 0;
              *(undefined8 *)(&stack0x00007db8 + lVar13) = 0;
              *(undefined8 *)(&stack0x00007dc0 + lVar13) = 8;
              *(undefined8 *)(&stack0x00007dc8 + lVar13) = 0;
              *(undefined8 *)(&stack0x00007dd0 + lVar13) = 0;
              *(undefined8 *)(&stack0x00007dd8 + lVar13) = 8;
              *(undefined4 *)(&stack0x00007e18 + lVar13) = 0;
              *(undefined8 *)(&stack0x00007de0 + lVar13) = 0;
              *(undefined8 *)(&stack0x00007de8 + lVar13) = 0;
              *(undefined8 *)(&stack0x00007df0 + lVar13) = 4;
              *(undefined8 *)(&stack0x00007df8 + lVar13) = 0;
              *(undefined8 *)(&stack0x00007e00 + lVar13) = 0;
              *(undefined8 *)(&stack0x00007e08 + lVar13) = 4;
              *(undefined8 *)(&stack0x00007e10 + lVar13) = 0;
              *(undefined8 *)((longlong)&uStack_20 + lVar13) = 0x140c98b2a;
              pdb_142d8f420(&stack0x00007e78 + lVar13,4);
              *(undefined8 *)(&stack0x00007ea8 + lVar13) = 0;
              *(undefined8 *)(&stack0x00007eb0 + lVar13) = 4;
              *(undefined8 *)(&stack0x00007eb8 + lVar13) = 0;
              uVar3 = *(undefined4 *)(&stack0x00007e60 + lVar13);
              uVar4 = *(undefined4 *)(&stack0x00007e64 + lVar13);
              uVar5 = *(undefined4 *)(&stack0x00007e68 + lVar13);
              uVar6 = *(undefined4 *)(&stack0x00007e6c + lVar13);
              uVar7 = *(undefined4 *)(&stack0x00007e70 + lVar13);
              uVar8 = *(undefined4 *)(&stack0x00007e74 + lVar13);
              *(undefined4 *)((longlong)&uStackX_8 + lVar13) =
                   *(undefined4 *)(&stack0x00007e58 + lVar13);
              *(undefined4 *)((longlong)&uStackX_8 + lVar13 + 4) =
                   *(undefined4 *)(&stack0x00007e5c + lVar13);
              *(undefined4 *)((longlong)&uStackX_10 + lVar13) = uVar3;
              *(undefined4 *)((longlong)&uStackX_10 + lVar13 + 4) = uVar4;
              *(undefined4 *)((longlong)&uStackX_18 + lVar13) = uVar5;
              *(undefined4 *)((longlong)&uStackX_18 + lVar13 + 4) = uVar6;
              *(undefined4 *)((longlong)&uStackX_20 + lVar13) = uVar7;
              *(undefined4 *)((longlong)&uStackX_20 + lVar13 + 4) = uVar8;
              *(undefined8 *)((longlong)&uStack_20 + lVar13) = 0x140c98b78;
              pub_142e32760(&stack0x00000028 + lVar13,&stack0x00003dd8 + lVar13,0x3c90);
              *(undefined4 *)(&stack0x00003cb8 + lVar13) =
                   *(undefined4 *)(&stack0x00007e20 + lVar13);
              *(undefined4 *)(&stack0x00003cbc + lVar13) =
                   *(undefined4 *)(&stack0x00007e24 + lVar13);
              *(undefined4 *)(&stack0x00003cc0 + lVar13) =
                   *(undefined4 *)(&stack0x00007e28 + lVar13);
              *(undefined4 *)(&stack0x00003cc4 + lVar13) =
                   *(undefined4 *)(&stack0x00007e2c + lVar13);
              *(undefined4 *)(&stack0x00003cc8 + lVar13) =
                   *(undefined4 *)(&stack0x00007e30 + lVar13);
              *(undefined4 *)(&stack0x00003ccc + lVar13) =
                   *(undefined4 *)(&stack0x00007e34 + lVar13);
              *(undefined4 *)(&stack0x00003cd0 + lVar13) =
                   *(undefined4 *)(&stack0x00007e38 + lVar13);
              *(undefined4 *)(&stack0x00003cd4 + lVar13) =
                   *(undefined4 *)(&stack0x00007e3c + lVar13);
              *(undefined4 *)(&stack0x00003cd8 + lVar13) =
                   *(undefined4 *)(&stack0x00007e40 + lVar13);
              *(undefined4 *)(&stack0x00003cdc + lVar13) =
                   *(undefined4 *)(&stack0x00007e44 + lVar13);
              *(undefined4 *)(&stack0x00003ce0 + lVar13) =
                   *(undefined4 *)(&stack0x00007e48 + lVar13);
              *(undefined4 *)(&stack0x00003ce4 + lVar13) =
                   *(undefined4 *)(&stack0x00007e4c + lVar13);
              *(undefined8 *)(&stack0x00003ce8 + lVar13) =
                   *(undefined8 *)(&stack0x00007e50 + lVar13);
              *(undefined8 *)((longlong)&uStack_20 + lVar13) = 0x140c98bc9;
              pub_142e32760(&stack0x00003cf0 + lVar13,&stack0x00007d88 + lVar13,0x98);
              *(undefined4 *)(&stack0x00003d88 + lVar13) =
                   *(undefined4 *)(&stack0x00007e78 + lVar13);
              *(undefined4 *)(&stack0x00003d8c + lVar13) =
                   *(undefined4 *)(&stack0x00007e7c + lVar13);
              *(undefined4 *)(&stack0x00003d90 + lVar13) =
                   *(undefined4 *)(&stack0x00007e80 + lVar13);
              *(undefined4 *)(&stack0x00003d94 + lVar13) =
                   *(undefined4 *)(&stack0x00007e84 + lVar13);
              *(undefined4 *)(&stack0x00003d98 + lVar13) =
                   *(undefined4 *)(&stack0x00007e88 + lVar13);
              *(undefined4 *)(&stack0x00003d9c + lVar13) =
                   *(undefined4 *)(&stack0x00007e8c + lVar13);
              *(undefined4 *)(&stack0x00003da0 + lVar13) =
                   *(undefined4 *)(&stack0x00007e90 + lVar13);
              *(undefined4 *)(&stack0x00003da4 + lVar13) =
                   *(undefined4 *)(&stack0x00007e94 + lVar13);
              *(undefined4 *)(&stack0x00003da8 + lVar13) =
                   *(undefined4 *)(&stack0x00007e98 + lVar13);
              *(undefined4 *)(&stack0x00003dac + lVar13) =
                   *(undefined4 *)(&stack0x00007e9c + lVar13);
              *(undefined4 *)(&stack0x00003db0 + lVar13) =
                   *(undefined4 *)(&stack0x00007ea0 + lVar13);
              *(undefined4 *)(&stack0x00003db4 + lVar13) =
                   *(undefined4 *)(&stack0x00007ea4 + lVar13);
              *(undefined4 *)(&stack0x00003db8 + lVar13) =
                   *(undefined4 *)(&stack0x00007ea8 + lVar13);
              *(undefined4 *)(&stack0x00003dbc + lVar13) =
                   *(undefined4 *)(&stack0x00007eac + lVar13);
              *(undefined4 *)(&stack0x00003dc0 + lVar13) =
                   *(undefined4 *)(&stack0x00007eb0 + lVar13);
              *(undefined4 *)(&stack0x00003dc4 + lVar13) =
                   *(undefined4 *)(&stack0x00007eb4 + lVar13);
              *(undefined8 *)(&stack0x00003dc8 + lVar13) =
                   *(undefined8 *)(&stack0x00007eb8 + lVar13);
              *(undefined8 *)((longlong)&uStack_20 + lVar13) = 0x140c98c28;
              pub_142e32760(&stack0x00007ba0 + lVar13,&stack0x00007c98 + lVar13,0xf0);
              puVar1 = &stack0x00003dd8 + lVar13;
              *(undefined8 *)((longlong)&uStack_20 + lVar13) = 0x140c98c41;
              pub_142e32760(puVar1,(longlong)&uStackX_8 + lVar13,0x3dc8);
              *(undefined8 *)((longlong)&uStack_20 + lVar13) = 0x140c98c4c;
              uVar14 = pdb_1419044a0(param_2,puVar1);
              *(undefined8 *)((longlong)&uStack_20 + lVar13) = 0x140c98c57;
              pdb_140a62ae0(puVar1);
              *(undefined8 *)((longlong)&uStack_20 + lVar13) = 0x140c98c62;
              pdb_141903ee0(uVar14,puVar1);
              return;
            }
            *(undefined8 *)((longlong)&uStack_20 + lVar13) = 0x140c98cd3;
            pdb_142dc7e2a(8,0x28);
          }
        }
      }
      goto LAB_140c98cd4;
    }
  }
  *(undefined8 *)((longlong)&uStack_20 + lVar13) = 0x140c98c94;
  pdb_142dc7890(&UNK_143326860);
LAB_140c98cd4:
                    /* WARNING: Does not return */
  pcVar2 = (code *)invalidInstructionException();
  (*pcVar2)();
}

