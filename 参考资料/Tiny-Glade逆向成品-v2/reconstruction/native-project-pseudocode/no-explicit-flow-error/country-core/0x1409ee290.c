// VA 0x1409ee290, PDB extent 3677 bytes
// country_core::systems::collision::world::RaycastWorld::on_level_reload
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/collision/world.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::systems::collision::world::RaycastWorld::on_level_reload
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/collision/world.rs
   Extent: 3677 */

void pdb_1409ee290(longlong *param_1)

{
  longlong lVar1;
  undefined4 *puVar2;
  code *pcVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  longlong lVar19;
  longlong *plVar20;
  byte *pbVar21;
  longlong lVar22;
  undefined1 *puVar23;
  longlong lVar24;
  longlong lVar25;
  longlong lVar26;
  undefined4 unaff_XMM6_Da;
  undefined4 unaff_XMM6_Db;
  undefined4 unaff_XMM6_Dc;
  undefined4 unaff_XMM6_Dd;
  undefined4 unaff_XMM7_Da;
  undefined4 unaff_XMM7_Db;
  undefined4 unaff_XMM7_Dc;
  undefined4 unaff_XMM7_Dd;
  undefined4 auStackX_8 [8];
  undefined8 uStack_48;
  
  uStack_48 = 0x1409ee2a6;
  lVar19 = pdb_142d7c6d0();
  lVar19 = -lVar19;
  *(undefined4 *)(&stack0x00008010 + lVar19) = unaff_XMM7_Da;
  *(undefined4 *)(&stack0x00008014 + lVar19) = unaff_XMM7_Db;
  *(undefined4 *)(&stack0x00008018 + lVar19) = unaff_XMM7_Dc;
  *(undefined4 *)(&stack0x0000801c + lVar19) = unaff_XMM7_Dd;
  *(undefined4 *)(&stack0x00008000 + lVar19) = unaff_XMM6_Da;
  *(undefined4 *)(&stack0x00008004 + lVar19) = unaff_XMM6_Db;
  *(undefined4 *)(&stack0x00008008 + lVar19) = unaff_XMM6_Dc;
  *(undefined4 *)(&stack0x0000800c + lVar19) = unaff_XMM6_Dd;
  *(undefined8 *)(&stack0x00007ff8 + lVar19) = 0xfffffffffffffffe;
  *(undefined4 *)param_1[2] = *(undefined4 *)((longlong)param_1 + 0x1c);
  lVar1 = *param_1;
  *(undefined8 *)((longlong)&uStack_48 + lVar19) = 0x1409ee2dd;
  plVar20 = (longlong *)pdb_14008d710(0);
  if (plVar20 == (longlong *)0x0) {
    *(undefined8 *)((longlong)&uStack_48 + lVar19) = 0x1409ee9fc;
    pdb_142dc7890(&UNK_143326860);
  }
  else {
    lVar26 = *plVar20;
    uVar4 = *(undefined4 *)((longlong)plVar20 + 4);
    lVar22 = plVar20[1];
    uVar5 = *(undefined4 *)((longlong)plVar20 + 0xc);
    *plVar20 = *plVar20 + 1;
    uVar18 = _UNK_143022b38;
    uVar17 = _DAT_143022b30;
    uVar16 = _UNK_143022b28;
    uVar15 = _DAT_143022b20;
    *(undefined8 *)(&stack0x00007f50 + lVar19) = _DAT_143022b30;
    *(undefined8 *)(&stack0x00007f58 + lVar19) = _UNK_143022b38;
    *(undefined8 *)(&stack0x00007f40 + lVar19) = _DAT_143022b20;
    *(undefined8 *)(&stack0x00007f48 + lVar19) = _UNK_143022b28;
    *(int *)(&stack0x00007f60 + lVar19) = (int)lVar26;
    *(undefined4 *)(&stack0x00007f64 + lVar19) = uVar4;
    *(int *)(&stack0x00007f68 + lVar19) = (int)lVar22;
    *(undefined4 *)(&stack0x00007f6c + lVar19) = uVar5;
    *(undefined8 *)((longlong)&uStack_48 + lVar19) = 0x1409ee316;
    plVar20 = (longlong *)pdb_14008d710(0);
    if (plVar20 != (longlong *)0x0) {
      lVar26 = *plVar20;
      uVar4 = *(undefined4 *)((longlong)plVar20 + 4);
      lVar22 = plVar20[1];
      uVar5 = *(undefined4 *)((longlong)plVar20 + 0xc);
      *plVar20 = *plVar20 + 1;
      *(undefined8 *)(&stack0x00007f90 + lVar19) = uVar17;
      *(undefined8 *)(&stack0x00007f98 + lVar19) = uVar18;
      *(undefined8 *)(&stack0x00007f80 + lVar19) = uVar15;
      *(undefined8 *)(&stack0x00007f88 + lVar19) = uVar16;
      *(int *)(&stack0x00007fa0 + lVar19) = (int)lVar26;
      *(undefined4 *)(&stack0x00007fa4 + lVar19) = uVar4;
      *(int *)(&stack0x00007fa8 + lVar19) = (int)lVar22;
      *(undefined4 *)(&stack0x00007fac + lVar19) = uVar5;
      *(undefined8 *)((longlong)&uStack_48 + lVar19) = 0x1409ee342;
      plVar20 = (longlong *)pdb_14008d710(0);
      if (plVar20 == (longlong *)0x0) {
        *(undefined8 *)((longlong)&uStack_48 + lVar19) = 0x1409eea18;
        pdb_142dc7890(&UNK_143326860);
      }
      else {
        lVar26 = *plVar20;
        uVar4 = *(undefined4 *)((longlong)plVar20 + 4);
        lVar22 = plVar20[1];
        uVar5 = *(undefined4 *)((longlong)plVar20 + 0xc);
        *plVar20 = *plVar20 + 1;
        *(undefined8 *)(&stack0x00007b90 + lVar19) = uVar17;
        *(undefined8 *)(&stack0x00007b98 + lVar19) = uVar18;
        *(undefined8 *)(&stack0x00007b80 + lVar19) = uVar15;
        *(undefined8 *)(&stack0x00007b88 + lVar19) = uVar16;
        *(int *)(&stack0x00007ba0 + lVar19) = (int)lVar26;
        *(undefined4 *)(&stack0x00007ba4 + lVar19) = uVar4;
        *(int *)(&stack0x00007ba8 + lVar19) = (int)lVar22;
        *(undefined4 *)(&stack0x00007bac + lVar19) = uVar5;
        *(undefined8 *)((longlong)&uStack_48 + lVar19) = 0x1409ee36e;
        plVar20 = (longlong *)pdb_14008d710(0);
        if (plVar20 == (longlong *)0x0) {
          *(undefined8 *)((longlong)&uStack_48 + lVar19) = 0x1409eea27;
          pdb_142dc7890(&UNK_143326860);
        }
        else {
          lVar26 = *plVar20;
          uVar4 = *(undefined4 *)((longlong)plVar20 + 4);
          lVar22 = plVar20[1];
          uVar5 = *(undefined4 *)((longlong)plVar20 + 0xc);
          *plVar20 = *plVar20 + 1;
          *(undefined8 *)(&stack0xfffffffffffffff0 + lVar19) = uVar17;
          *(undefined8 *)(&stack0xfffffffffffffff8 + lVar19) = uVar18;
          *(undefined8 *)(&stack0xffffffffffffffe0 + lVar19) = uVar15;
          *(undefined8 *)(&stack0xffffffffffffffe8 + lVar19) = uVar16;
          puVar2 = (undefined4 *)((longlong)auStackX_8 + lVar19 + -8);
          *puVar2 = (int)lVar26;
          puVar2[1] = uVar4;
          puVar2[2] = (int)lVar22;
          puVar2[3] = uVar5;
          *(undefined8 *)((longlong)&uStack_48 + lVar19) = 0x1409ee391;
          plVar20 = (longlong *)pdb_14008d710(0);
          if (plVar20 != (longlong *)0x0) {
            lVar26 = plVar20[1];
            *(longlong *)(&stack0x00007fd0 + lVar19) = *plVar20;
            *(longlong *)(&stack0x00007fd8 + lVar19) = lVar26;
            lVar26 = *plVar20;
            *(longlong *)(&stack0x00007fe0 + lVar19) = lVar26;
            *plVar20 = lVar26 + 1;
            *(undefined8 *)(&stack0x00003dd0 + lVar19) = *(undefined8 *)(&stack0x00007f60 + lVar19);
            *(undefined8 *)(&stack0x00003dd8 + lVar19) = *(undefined8 *)(&stack0x00007f68 + lVar19);
            *(undefined8 *)(&stack0x00003dc0 + lVar19) = *(undefined8 *)(&stack0x00007f50 + lVar19);
            *(undefined8 *)(&stack0x00003dc8 + lVar19) = *(undefined8 *)(&stack0x00007f58 + lVar19);
            *(undefined8 *)(&stack0x00003db0 + lVar19) = *(undefined8 *)(&stack0x00007f40 + lVar19);
            *(undefined8 *)(&stack0x00003db8 + lVar19) = *(undefined8 *)(&stack0x00007f48 + lVar19);
            *(undefined8 *)(&stack0x00003de0 + lVar19) = *(undefined8 *)(&stack0x00007f80 + lVar19);
            *(undefined8 *)(&stack0x00003de8 + lVar19) = *(undefined8 *)(&stack0x00007f88 + lVar19);
            *(undefined8 *)(&stack0x00003df0 + lVar19) = *(undefined8 *)(&stack0x00007f90 + lVar19);
            *(undefined8 *)(&stack0x00003df8 + lVar19) = *(undefined8 *)(&stack0x00007f98 + lVar19);
            *(undefined8 *)(&stack0x00003e00 + lVar19) = *(undefined8 *)(&stack0x00007fa0 + lVar19);
            *(undefined8 *)(&stack0x00003e08 + lVar19) = *(undefined8 *)(&stack0x00007fa8 + lVar19);
            *(undefined8 *)(&stack0x00003e10 + lVar19) = *(undefined8 *)(&stack0x00007b80 + lVar19);
            *(undefined8 *)(&stack0x00003e18 + lVar19) = *(undefined8 *)(&stack0x00007b88 + lVar19);
            *(undefined8 *)(&stack0x00003e20 + lVar19) = *(undefined8 *)(&stack0x00007b90 + lVar19);
            *(undefined8 *)(&stack0x00003e28 + lVar19) = *(undefined8 *)(&stack0x00007b98 + lVar19);
            *(undefined8 *)(&stack0x00003e30 + lVar19) = *(undefined8 *)(&stack0x00007ba0 + lVar19);
            *(undefined8 *)(&stack0x00003e38 + lVar19) = *(undefined8 *)(&stack0x00007ba8 + lVar19);
            puVar2 = (undefined4 *)((longlong)auStackX_8 + lVar19 + -8);
            uVar4 = puVar2[1];
            uVar5 = puVar2[2];
            uVar6 = puVar2[3];
            *(undefined4 *)(&stack0x00003e60 + lVar19) = *puVar2;
            *(undefined4 *)(&stack0x00003e64 + lVar19) = uVar4;
            *(undefined4 *)(&stack0x00003e68 + lVar19) = uVar5;
            *(undefined4 *)(&stack0x00003e6c + lVar19) = uVar6;
            *(undefined4 *)(&stack0x00003e50 + lVar19) =
                 *(undefined4 *)(&stack0xfffffffffffffff0 + lVar19);
            *(undefined4 *)(&stack0x00003e54 + lVar19) =
                 *(undefined4 *)(&stack0xfffffffffffffff4 + lVar19);
            *(undefined4 *)(&stack0x00003e58 + lVar19) =
                 *(undefined4 *)(&stack0xfffffffffffffff8 + lVar19);
            *(undefined4 *)(&stack0x00003e5c + lVar19) =
                 *(undefined4 *)(&stack0xfffffffffffffffc + lVar19);
            *(undefined4 *)(&stack0x00003e40 + lVar19) =
                 *(undefined4 *)(&stack0xffffffffffffffe0 + lVar19);
            *(undefined4 *)(&stack0x00003e44 + lVar19) =
                 *(undefined4 *)(&stack0xffffffffffffffe4 + lVar19);
            *(undefined4 *)(&stack0x00003e48 + lVar19) =
                 *(undefined4 *)(&stack0xffffffffffffffe8 + lVar19);
            *(undefined4 *)(&stack0x00003e4c + lVar19) =
                 *(undefined4 *)(&stack0xffffffffffffffec + lVar19);
            *(undefined8 *)(&stack0x00003e80 + lVar19) = uVar17;
            *(undefined8 *)(&stack0x00003e88 + lVar19) = uVar18;
            *(undefined8 *)(&stack0x00003e70 + lVar19) = uVar15;
            *(undefined8 *)(&stack0x00003e78 + lVar19) = uVar16;
            *(longlong *)(&stack0x00007fe8 + lVar19) = lVar1 + 0x3dc8;
            *(longlong *)(&stack0x00007fc8 + lVar19) = lVar1;
            *(undefined8 *)((longlong)&uStack_48 + lVar19) = 0x1409ee47c;
            pdb_14099b0d0();
            *(undefined8 *)((longlong)&uStack_48 + lVar19) = 0x1409ee496;
            pub_142e32760(*(undefined8 *)(&stack0x00007fe8 + lVar19),&stack0x00003db0 + lVar19,0xe0)
            ;
            uVar4 = *(undefined4 *)(&stack0x00007fd4 + lVar19);
            uVar5 = *(undefined4 *)(&stack0x00007fd8 + lVar19);
            uVar6 = *(undefined4 *)(&stack0x00007fdc + lVar19);
            lVar1 = *(longlong *)(&stack0x00007fc8 + lVar19);
            *(undefined4 *)(lVar1 + 0x3ea8) = *(undefined4 *)(&stack0x00007fd0 + lVar19);
            *(undefined4 *)(lVar1 + 0x3eac) = uVar4;
            *(undefined4 *)(lVar1 + 0x3eb0) = uVar5;
            *(undefined4 *)(lVar1 + 0x3eb4) = uVar6;
            *(undefined8 *)((longlong)&uStack_48 + lVar19) = 0x1409ee4b0;
            pdb_14007ee60();
            *(undefined8 *)((longlong)&uStack_48 + lVar19) = 0x1409ee4bf;
            pbVar21 = pub_1406abab0(0x28,8);
            if (pbVar21 == (byte *)0x0) {
              *(undefined8 *)((longlong)&uStack_48 + lVar19) = 0x1409eea48;
              pdb_142dc7e2a(8,0x28);
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            pbVar21[0] = 0;
            pbVar21[1] = 0;
            pbVar21[2] = 0;
            pbVar21[3] = 0;
            pbVar21[0x20] = 0;
            pbVar21[0x21] = 0;
            pbVar21[0x22] = 0;
            pbVar21[0x23] = 0;
            *(undefined8 *)(&stack0x00007f18 + lVar19) = 1;
            *(byte **)(&stack0x00007f20 + lVar19) = pbVar21;
            *(undefined8 *)(&stack0x00007f28 + lVar19) = 1;
            *(undefined8 *)(&stack0x00007f30 + lVar19) = 1;
            *(undefined8 *)((longlong)&uStack_48 + lVar19) = 0x1409ee506;
            pdb_140934d20(&stack0xffffffffffffffe0 + lVar19);
            *(undefined8 *)(&stack0x00007f40 + lVar19) = 0;
            *(undefined8 *)(&stack0x00007f48 + lVar19) = 8;
            *(undefined8 *)(&stack0x00007f50 + lVar19) = 0;
            *(undefined8 *)(&stack0x00007f58 + lVar19) = 0;
            *(undefined8 *)(&stack0x00007f60 + lVar19) = 8;
            *(undefined8 *)(&stack0x00007f68 + lVar19) = 0;
            *(undefined8 *)(&stack0x00007f70 + lVar19) = 0;
            *(undefined8 *)(&stack0x00007b80 + lVar19) = 0;
            *(undefined8 *)(&stack0x00007b88 + lVar19) = 4;
            *(undefined8 *)(&stack0x00007b90 + lVar19) = 0;
            *(undefined8 *)(&stack0x00007b98 + lVar19) = 0;
            *(undefined8 *)(&stack0x00007ba0 + lVar19) = 4;
            *(undefined8 *)(&stack0x00007ba8 + lVar19) = 0;
            *(undefined8 *)(&stack0x00007bb0 + lVar19) = 0;
            *(undefined8 *)(&stack0x00007bb8 + lVar19) = 8;
            *(undefined8 *)(&stack0x00007bc0 + lVar19) = 0;
            *(undefined8 *)(&stack0x00007bc8 + lVar19) = 0;
            *(undefined8 *)(&stack0x00007bd0 + lVar19) = 8;
            *(undefined4 *)(&stack0x00007c10 + lVar19) = 0;
            *(undefined8 *)(&stack0x00007bd8 + lVar19) = 0;
            *(undefined8 *)(&stack0x00007be0 + lVar19) = 0;
            *(undefined8 *)(&stack0x00007be8 + lVar19) = 4;
            *(undefined8 *)(&stack0x00007bf0 + lVar19) = 0;
            *(undefined8 *)(&stack0x00007bf8 + lVar19) = 0;
            *(undefined8 *)(&stack0x00007c00 + lVar19) = 4;
            *(undefined8 *)(&stack0x00007c08 + lVar19) = 0;
            *(undefined8 *)((longlong)&uStack_48 + lVar19) = 0x1409ee5cf;
            pdb_142d8f420(&stack0x00007f80 + lVar19,4);
            *(undefined8 *)(&stack0x00007fb0 + lVar19) = 0;
            *(undefined8 *)(&stack0x00007fb8 + lVar19) = 4;
            *(undefined8 *)(&stack0x00007fc0 + lVar19) = 0;
            *(undefined4 *)(&stack0x00003db0 + lVar19) = *(undefined4 *)(&stack0x00007f18 + lVar19);
            *(undefined4 *)(&stack0x00003db4 + lVar19) = *(undefined4 *)(&stack0x00007f1c + lVar19);
            *(undefined4 *)(&stack0x00003db8 + lVar19) = *(undefined4 *)(&stack0x00007f20 + lVar19);
            *(undefined4 *)(&stack0x00003dbc + lVar19) = *(undefined4 *)(&stack0x00007f24 + lVar19);
            *(undefined4 *)(&stack0x00003dc0 + lVar19) = *(undefined4 *)(&stack0x00007f28 + lVar19);
            *(undefined4 *)(&stack0x00003dc4 + lVar19) = *(undefined4 *)(&stack0x00007f2c + lVar19);
            *(undefined4 *)(&stack0x00003dc8 + lVar19) = *(undefined4 *)(&stack0x00007f30 + lVar19);
            *(undefined4 *)(&stack0x00003dcc + lVar19) = *(undefined4 *)(&stack0x00007f34 + lVar19);
            puVar23 = &stack0x00003dd0 + lVar19;
            *(undefined8 *)((longlong)&uStack_48 + lVar19) = 0x1409ee626;
            pub_142e32760(puVar23,&stack0xffffffffffffffe0 + lVar19,0x3c90);
            *(undefined4 *)(&stack0x00007a60 + lVar19) = *(undefined4 *)(&stack0x00007f40 + lVar19);
            *(undefined4 *)(&stack0x00007a64 + lVar19) = *(undefined4 *)(&stack0x00007f44 + lVar19);
            *(undefined4 *)(&stack0x00007a68 + lVar19) = *(undefined4 *)(&stack0x00007f48 + lVar19);
            *(undefined4 *)(&stack0x00007a6c + lVar19) = *(undefined4 *)(&stack0x00007f4c + lVar19);
            *(undefined4 *)(&stack0x00007a70 + lVar19) = *(undefined4 *)(&stack0x00007f50 + lVar19);
            *(undefined4 *)(&stack0x00007a74 + lVar19) = *(undefined4 *)(&stack0x00007f54 + lVar19);
            *(undefined4 *)(&stack0x00007a78 + lVar19) = *(undefined4 *)(&stack0x00007f58 + lVar19);
            *(undefined4 *)(&stack0x00007a7c + lVar19) = *(undefined4 *)(&stack0x00007f5c + lVar19);
            *(undefined4 *)(&stack0x00007a80 + lVar19) = *(undefined4 *)(&stack0x00007f60 + lVar19);
            *(undefined4 *)(&stack0x00007a84 + lVar19) = *(undefined4 *)(&stack0x00007f64 + lVar19);
            *(undefined4 *)(&stack0x00007a88 + lVar19) = *(undefined4 *)(&stack0x00007f68 + lVar19);
            *(undefined4 *)(&stack0x00007a8c + lVar19) = *(undefined4 *)(&stack0x00007f6c + lVar19);
            *(undefined8 *)(&stack0x00007a90 + lVar19) = *(undefined8 *)(&stack0x00007f70 + lVar19);
            *(undefined8 *)((longlong)&uStack_48 + lVar19) = 0x1409ee67a;
            pub_142e32760(&stack0x00007a98 + lVar19,&stack0x00007b80 + lVar19,0x98);
            *(undefined4 *)(&stack0x00007b30 + lVar19) = *(undefined4 *)(&stack0x00007f80 + lVar19);
            *(undefined4 *)(&stack0x00007b34 + lVar19) = *(undefined4 *)(&stack0x00007f84 + lVar19);
            *(undefined4 *)(&stack0x00007b38 + lVar19) = *(undefined4 *)(&stack0x00007f88 + lVar19);
            *(undefined4 *)(&stack0x00007b3c + lVar19) = *(undefined4 *)(&stack0x00007f8c + lVar19);
            *(undefined4 *)(&stack0x00007b40 + lVar19) = *(undefined4 *)(&stack0x00007f90 + lVar19);
            *(undefined4 *)(&stack0x00007b44 + lVar19) = *(undefined4 *)(&stack0x00007f94 + lVar19);
            *(undefined4 *)(&stack0x00007b48 + lVar19) = *(undefined4 *)(&stack0x00007f98 + lVar19);
            *(undefined4 *)(&stack0x00007b4c + lVar19) = *(undefined4 *)(&stack0x00007f9c + lVar19);
            *(undefined4 *)(&stack0x00007b50 + lVar19) = *(undefined4 *)(&stack0x00007fa0 + lVar19);
            *(undefined4 *)(&stack0x00007b54 + lVar19) = *(undefined4 *)(&stack0x00007fa4 + lVar19);
            *(undefined4 *)(&stack0x00007b58 + lVar19) = *(undefined4 *)(&stack0x00007fa8 + lVar19);
            *(undefined4 *)(&stack0x00007b5c + lVar19) = *(undefined4 *)(&stack0x00007fac + lVar19);
            *(undefined4 *)(&stack0x00007b60 + lVar19) = *(undefined4 *)(&stack0x00007fb0 + lVar19);
            *(undefined4 *)(&stack0x00007b64 + lVar19) = *(undefined4 *)(&stack0x00007fb4 + lVar19);
            *(undefined4 *)(&stack0x00007b68 + lVar19) = *(undefined4 *)(&stack0x00007fb8 + lVar19);
            *(undefined4 *)(&stack0x00007b6c + lVar19) = *(undefined4 *)(&stack0x00007fbc + lVar19);
            *(undefined8 *)(&stack0x00007b70 + lVar19) = *(undefined8 *)(&stack0x00007fc0 + lVar19);
            *(undefined8 *)((longlong)&uStack_48 + lVar19) = 0x1409ee6d2;
            pub_142e32760(&stack0xffffffffffffffe0 + lVar19,lVar1,0x3dc8);
            *(undefined8 *)((longlong)&uStack_48 + lVar19) = 0x1409ee6e7;
            pub_142e32760(lVar1,&stack0x00003db0 + lVar19,0x3dc8);
            lVar26 = lVar1 + 0x20;
            lVar1 = lVar1 + 0x3cb0;
            *(undefined8 *)((longlong)&uStack_48 + lVar19) = 0x1409ee704;
            pub_142e32760(puVar23,(longlong)auStackX_8 + lVar19 + -8,0x3c90);
            *(undefined8 *)(&stack0x00007a60 + lVar19) = 0;
            *(undefined8 *)(&stack0x00007a68 + lVar19) = 0;
            *(longlong *)(&stack0x00003db0 + lVar19) = lVar26;
            *(longlong *)(&stack0x00003db8 + lVar19) = lVar1;
            *(undefined8 *)(&stack0x00003dc0 + lVar19) = 0;
            *(undefined8 *)(&stack0x00003dc8 + lVar19) = 0x11;
            lVar25 = 0x11;
            lVar22 = 0;
            *(longlong *)(&stack0x00007fe0 + lVar19) = lVar1;
            if (lVar26 != lVar1) {
              do {
                *(longlong *)(&stack0x00003db0 + lVar19) = lVar26 + 0x390;
                if (lVar25 == lVar22) goto LAB_1409ee8c6;
                *(longlong *)(&stack0x00003dc0 + lVar19) = lVar22 + 1;
                lVar24 = lVar22 * 0x390;
                lVar1 = *(longlong *)(puVar23 + lVar24);
                lVar22 = lVar22 + 1;
                if (SBORROW8(0,lVar1)) break;
                *(undefined8 *)((longlong)&uStack_48 + lVar19) = 0x1409ee7b0;
                pub_142e32760(&stack0x00007b88 + lVar19,puVar23 + lVar24 + 8,0x388);
                *(longlong *)(&stack0x00007b80 + lVar19) = lVar1;
                *(undefined1 *)(lVar26 + 0x388) = (&stack0x00007f08)[lVar19];
                *(undefined8 *)((longlong)&uStack_48 + lVar19) = 0x1409ee7dc;
                pub_142e32770(lVar26 + 0x188,&stack0x00007d08 + lVar19,0x200);
                *(undefined8 *)(&stack0x00007fb0 + lVar19) =
                     *(undefined8 *)(&stack0x00007d00 + lVar19);
                *(undefined4 *)(&stack0x00007fa0 + lVar19) =
                     *(undefined4 *)(&stack0x00007cf0 + lVar19);
                *(undefined4 *)(&stack0x00007fa4 + lVar19) =
                     *(undefined4 *)(&stack0x00007cf4 + lVar19);
                *(undefined4 *)(&stack0x00007fa8 + lVar19) =
                     *(undefined4 *)(&stack0x00007cf8 + lVar19);
                *(undefined4 *)(&stack0x00007fac + lVar19) =
                     *(undefined4 *)(&stack0x00007cfc + lVar19);
                *(undefined4 *)(&stack0x00007f90 + lVar19) =
                     *(undefined4 *)(&stack0x00007ce0 + lVar19);
                *(undefined4 *)(&stack0x00007f94 + lVar19) =
                     *(undefined4 *)(&stack0x00007ce4 + lVar19);
                *(undefined4 *)(&stack0x00007f98 + lVar19) =
                     *(undefined4 *)(&stack0x00007ce8 + lVar19);
                *(undefined4 *)(&stack0x00007f9c + lVar19) =
                     *(undefined4 *)(&stack0x00007cec + lVar19);
                *(undefined4 *)(&stack0x00007f80 + lVar19) =
                     *(undefined4 *)(&stack0x00007cd0 + lVar19);
                *(undefined4 *)(&stack0x00007f84 + lVar19) =
                     *(undefined4 *)(&stack0x00007cd4 + lVar19);
                *(undefined4 *)(&stack0x00007f88 + lVar19) =
                     *(undefined4 *)(&stack0x00007cd8 + lVar19);
                *(undefined4 *)(&stack0x00007f8c + lVar19) =
                     *(undefined4 *)(&stack0x00007cdc + lVar19);
                *(longlong *)(&stack0x00007fd0 + lVar19) = lVar26;
                *(longlong *)(&stack0x00007fe8 + lVar19) = lVar26 + 0x150;
                *(undefined8 *)((longlong)&uStack_48 + lVar19) = 0x1409ee82f;
                pdb_140981360();
                *(undefined8 *)((longlong)&uStack_48 + lVar19) = 0x1409ee843;
                pdb_14049ffc0(*(longlong *)(&stack0x00007fd0 + lVar19) + 0x168);
                puVar2 = *(undefined4 **)(&stack0x00007fe8 + lVar19);
                *(undefined8 *)(puVar2 + 0xc) = *(undefined8 *)(&stack0x00007fb0 + lVar19);
                uVar4 = *(undefined4 *)(&stack0x00007f80 + lVar19);
                uVar5 = *(undefined4 *)(&stack0x00007f84 + lVar19);
                uVar6 = *(undefined4 *)(&stack0x00007f88 + lVar19);
                uVar7 = *(undefined4 *)(&stack0x00007f8c + lVar19);
                uVar8 = *(undefined4 *)(&stack0x00007f90 + lVar19);
                uVar9 = *(undefined4 *)(&stack0x00007f94 + lVar19);
                uVar10 = *(undefined4 *)(&stack0x00007f98 + lVar19);
                uVar11 = *(undefined4 *)(&stack0x00007f9c + lVar19);
                uVar12 = *(undefined4 *)(&stack0x00007fa4 + lVar19);
                uVar13 = *(undefined4 *)(&stack0x00007fa8 + lVar19);
                uVar14 = *(undefined4 *)(&stack0x00007fac + lVar19);
                puVar2[8] = *(undefined4 *)(&stack0x00007fa0 + lVar19);
                puVar2[9] = uVar12;
                puVar2[10] = uVar13;
                puVar2[0xb] = uVar14;
                puVar2[4] = uVar8;
                puVar2[5] = uVar9;
                puVar2[6] = uVar10;
                puVar2[7] = uVar11;
                *puVar2 = uVar4;
                puVar2[1] = uVar5;
                puVar2[2] = uVar6;
                puVar2[3] = uVar7;
                *(undefined8 *)((longlong)&uStack_48 + lVar19) = 0x1409ee87e;
                pdb_1409a2f80(&stack0x00007b80 + lVar19);
                *(undefined8 *)((longlong)&uStack_48 + lVar19) = 0x1409ee887;
                pdb_1404ced20(&stack0x00007bb0 + lVar19);
                lVar26 = *(longlong *)(&stack0x00003db0 + lVar19);
                lVar22 = *(longlong *)(&stack0x00003dc0 + lVar19);
                lVar25 = *(longlong *)(&stack0x00003dc8 + lVar19);
              } while (lVar26 != *(longlong *)(&stack0x00003db8 + lVar19));
            }
            if (lVar25 - lVar22 != 0) {
              *(longlong *)(&stack0x00007fe8 + lVar19) = lVar25 - lVar22;
              *(undefined8 *)(&stack0x00007fd0 + lVar19) = 0;
              *(undefined1 **)(&stack0x00007f38 + lVar19) = puVar23 + lVar22 * 0x390;
              puVar23 = puVar23 + lVar22 * 0x390;
              while (*(longlong *)(&stack0x00007fe8 + lVar19) !=
                     *(longlong *)(&stack0x00007fd0 + lVar19)) {
                *(longlong *)(&stack0x00007fd0 + lVar19) =
                     *(longlong *)(&stack0x00007fd0 + lVar19) + 1;
                *(undefined8 *)((longlong)&uStack_48 + lVar19) = 0x1409ee9ea;
                pdb_140998070(puVar23);
                puVar23 = puVar23 + 0x390;
              }
            }
LAB_1409ee8c6:
            *(undefined8 *)(&stack0x00003de0 + lVar19) = *(undefined8 *)(&stack0x00003cc0 + lVar19);
            *(undefined4 *)(&stack0x00003dd0 + lVar19) = *(undefined4 *)(&stack0x00003cb0 + lVar19);
            *(undefined4 *)(&stack0x00003dd4 + lVar19) = *(undefined4 *)(&stack0x00003cb4 + lVar19);
            *(undefined4 *)(&stack0x00003dd8 + lVar19) = *(undefined4 *)(&stack0x00003cb8 + lVar19);
            *(undefined4 *)(&stack0x00003ddc + lVar19) = *(undefined4 *)(&stack0x00003cbc + lVar19);
            *(undefined4 *)(&stack0x00003dc0 + lVar19) = *(undefined4 *)(&stack0x00003ca0 + lVar19);
            *(undefined4 *)(&stack0x00003dc4 + lVar19) = *(undefined4 *)(&stack0x00003ca4 + lVar19);
            *(undefined4 *)(&stack0x00003dc8 + lVar19) = *(undefined4 *)(&stack0x00003ca8 + lVar19);
            *(undefined4 *)(&stack0x00003dcc + lVar19) = *(undefined4 *)(&stack0x00003cac + lVar19);
            *(undefined4 *)(&stack0x00003db0 + lVar19) = *(undefined4 *)(&stack0x00003c90 + lVar19);
            *(undefined4 *)(&stack0x00003db4 + lVar19) = *(undefined4 *)(&stack0x00003c94 + lVar19);
            *(undefined4 *)(&stack0x00003db8 + lVar19) = *(undefined4 *)(&stack0x00003c98 + lVar19);
            *(undefined4 *)(&stack0x00003dbc + lVar19) = *(undefined4 *)(&stack0x00003c9c + lVar19);
            *(undefined8 *)((longlong)&uStack_48 + lVar19) = 0x1409ee90a;
            pdb_1409820d0(*(undefined8 *)(&stack0x00007fe0 + lVar19));
            *(undefined8 *)((longlong)&uStack_48 + lVar19) = 0x1409ee91e;
            pdb_1404af150(*(longlong *)(&stack0x00007fc8 + lVar19) + 0x3cc8);
            puVar2 = *(undefined4 **)(&stack0x00007fe0 + lVar19);
            *(undefined8 *)(puVar2 + 0xc) = *(undefined8 *)(&stack0x00003de0 + lVar19);
            uVar4 = *(undefined4 *)(&stack0x00003db0 + lVar19);
            uVar5 = *(undefined4 *)(&stack0x00003db4 + lVar19);
            uVar6 = *(undefined4 *)(&stack0x00003db8 + lVar19);
            uVar7 = *(undefined4 *)(&stack0x00003dbc + lVar19);
            uVar8 = *(undefined4 *)(&stack0x00003dc0 + lVar19);
            uVar9 = *(undefined4 *)(&stack0x00003dc4 + lVar19);
            uVar10 = *(undefined4 *)(&stack0x00003dc8 + lVar19);
            uVar11 = *(undefined4 *)(&stack0x00003dcc + lVar19);
            uVar12 = *(undefined4 *)(&stack0x00003dd4 + lVar19);
            uVar13 = *(undefined4 *)(&stack0x00003dd8 + lVar19);
            uVar14 = *(undefined4 *)(&stack0x00003ddc + lVar19);
            puVar2[8] = *(undefined4 *)(&stack0x00003dd0 + lVar19);
            puVar2[9] = uVar12;
            puVar2[10] = uVar13;
            puVar2[0xb] = uVar14;
            puVar2[4] = uVar8;
            puVar2[5] = uVar9;
            puVar2[6] = uVar10;
            puVar2[7] = uVar11;
            *puVar2 = uVar4;
            puVar2[1] = uVar5;
            puVar2[2] = uVar6;
            puVar2[3] = uVar7;
            *(undefined8 *)((longlong)&uStack_48 + lVar19) = 0x1409ee95a;
            pdb_1409723b0(&stack0xffffffffffffffe0 + lVar19);
            *(undefined8 *)((longlong)&uStack_48 + lVar19) = 0x1409ee967;
            pdb_1404cec60(&stack0x00003cc8 + lVar19);
            *(undefined8 *)((longlong)&uStack_48 + lVar19) = 0x1409ee974;
            pdb_1404ce480(&stack0x00003d60 + lVar19);
            return;
          }
          *(undefined8 *)((longlong)&uStack_48 + lVar19) = 0x1409eea36;
          pdb_142dc7890(&UNK_143326860);
        }
      }
      goto LAB_1409eea37;
    }
  }
  *(undefined8 *)((longlong)&uStack_48 + lVar19) = 0x1409eea09;
  pdb_142dc7890(&UNK_143326860);
LAB_1409eea37:
                    /* WARNING: Does not return */
  pcVar3 = (code *)invalidInstructionException();
  (*pcVar3)();
}

