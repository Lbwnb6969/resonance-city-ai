// VA 0x140b28270, PDB extent 2149 bytes
// country_core::systems::steam::workshop_publish::author_preview_path
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/steam/workshop_publish.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::systems::steam::workshop_publish::author_preview_path
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/steam/workshop_publish.rs
   Extent: 2149 */

undefined8 *
pdb_140b28270(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  longlong lVar10;
  uint uVar11;
  ulonglong arg1;
  undefined4 unaff_XMM6_Da;
  undefined4 unaff_XMM6_Db;
  undefined4 unaff_XMM6_Dc;
  undefined4 unaff_XMM6_Dd;
  undefined8 uStackX_10;
  undefined8 uStackX_18;
  undefined8 uStackX_20;
  undefined8 uStack_48;
  
  uStack_48 = 0x140b28286;
  lVar7 = pdb_142d7c6d0();
  lVar7 = -lVar7;
  *(undefined4 *)(&stack0x000011f0 + lVar7) = unaff_XMM6_Da;
  *(undefined4 *)(&stack0x000011f4 + lVar7) = unaff_XMM6_Db;
  *(undefined4 *)(&stack0x000011f8 + lVar7) = unaff_XMM6_Dc;
  *(undefined4 *)(&stack0x000011fc + lVar7) = unaff_XMM6_Dd;
  *(undefined8 *)(&stack0x000011e8 + lVar7) = 0xfffffffffffffffe;
  *(undefined8 *)(&stack0x00001098 + lVar7) = param_4;
  *(undefined8 *)(&stack0x000010a0 + lVar7) = *(undefined8 *)(&stack0x00001270 + lVar7);
  *(undefined8 *)((longlong)&uStack_48 + lVar7) = 0x140b282c4;
  pdb_140d99980((longlong)&uStackX_10 + lVar7);
  if (SBORROW8(0,*(longlong *)((longlong)&uStackX_10 + lVar7))) {
    *param_1 = 0x8000000000000000;
    return param_1;
  }
  *(longlong *)(&stack0x000011d8 + lVar7) = *(longlong *)((longlong)&uStackX_10 + lVar7);
  uVar8 = *(undefined8 *)((longlong)&uStackX_18 + lVar7);
  uVar4 = *(undefined8 *)((longlong)&uStackX_20 + lVar7);
  uVar9 = *(undefined8 *)((longlong)&uStackX_20 + lVar7);
  uVar6 = *(undefined8 *)(&stack0x00000028 + lVar7);
  *(undefined8 *)(&stack0x000011c8 + lVar7) = uVar8;
  *(undefined8 *)((longlong)&uStack_48 + lVar7) = 0x140b28308;
  pdb_140f4f620((longlong)&uStackX_10 + lVar7,uVar8,uVar4);
  if (*(int *)((longlong)&uStackX_10 + lVar7) == 2) {
    *(undefined8 *)((longlong)&uStack_48 + lVar7) = 0x140b28318;
    uVar8 = pdb_142deaf00(*(undefined8 *)((longlong)&uStackX_18 + lVar7));
    param_1[1] = uVar8;
    *param_1 = 0x8000000000000001;
    arg1 = *(ulonglong *)(&stack0x000011d8 + lVar7);
    goto joined_r0x000140b28738;
  }
  if (*(ulonglong *)(&stack0x00000048 + lVar7) < 0x100001) {
    *param_1 = *(undefined8 *)(&stack0x000011d8 + lVar7);
    param_1[1] = *(undefined8 *)(&stack0x000011c8 + lVar7);
    param_1[2] = uVar9;
    param_1[3] = uVar6;
    return param_1;
  }
  *(undefined8 *)((longlong)&uStack_48 + lVar7) = 0x140b2836c;
  uVar9 = pdb_140dc74c0();
  *(undefined1 **)(&stack0x000010a8 + lVar7) = &stack0x00001098 + lVar7;
  *(code **)(&stack0x000010b0 + lVar7) = pdb_1402ed400;
  *(undefined8 *)((longlong)&uStack_48 + lVar7) = 0x140b283a6;
  pdb_140f60760((longlong)&uStackX_10 + lVar7,&UNK_143056d3e,&stack0x000010a8 + lVar7);
  *(undefined8 *)(&stack0x000011e0 + lVar7) = *(undefined8 *)((longlong)&uStackX_10 + lVar7);
  *(undefined8 *)(&stack0xffffffffffffffe0 + lVar7) = *(undefined8 *)((longlong)&uStackX_20 + lVar7)
  ;
  *(undefined8 *)(&stack0x000011d0 + lVar7) = *(undefined8 *)((longlong)&uStackX_18 + lVar7);
  *(undefined8 *)((longlong)&uStack_48 + lVar7) = 0x140b283d8;
  pdb_140f3e9e0(&stack0x00001100 + lVar7,uVar9,uVar8);
  if (*(ulonglong *)(&stack0x000011e0 + lVar7) != 0) {
    *(undefined8 *)((longlong)&uStack_48 + lVar7) = 0x140b283f7;
    pub_1406abac0(*(byte **)(&stack0x000011d0 + lVar7),*(ulonglong *)(&stack0x000011e0 + lVar7),1);
  }
  *(undefined8 *)(&stack0x000011e0 + lVar7) = *(undefined8 *)(&stack0x00001108 + lVar7);
  uVar8 = *(undefined8 *)(&stack0x00001110 + lVar7);
  *(undefined8 *)(&stack0x00001128 + lVar7) = *(undefined8 *)(&stack0x000011c8 + lVar7);
  *(undefined8 *)(&stack0x00001130 + lVar7) = uVar4;
  *(undefined8 *)(&stack0x00001120 + lVar7) = 0x100000;
  *(undefined8 *)((longlong)&uStack_48 + lVar7) = 0x140b2843b;
  pdb_140da3220(&stack0x000010a8 + lVar7,*(undefined8 *)(&stack0x000011c8 + lVar7),uVar4);
  lVar10 = *(longlong *)(&stack0x000010a8 + lVar7);
  uVar4 = *(undefined8 *)(&stack0x000010b0 + lVar7);
  if (lVar10 == 2) {
    *(undefined8 *)(&stack0x00001140 + lVar7) = 0x8000000000000009;
    *(undefined8 *)(&stack0x00001148 + lVar7) = uVar4;
LAB_140b286b7:
    uVar8 = *(undefined8 *)(&stack0x00001140 + lVar7);
    uVar4 = *(undefined8 *)(&stack0x00001148 + lVar7);
    uVar2 = *(undefined4 *)(&stack0x00001158 + lVar7);
    uVar3 = *(undefined4 *)(&stack0x0000115c + lVar7);
    *(undefined4 *)(&stack0x00000040 + lVar7) = *(undefined4 *)(&stack0x00001170 + lVar7);
    *(undefined4 *)(&stack0x00000044 + lVar7) = *(undefined4 *)(&stack0x00001174 + lVar7);
    *(undefined4 *)(&stack0x00000048 + lVar7) = *(undefined4 *)(&stack0x00001178 + lVar7);
    *(undefined4 *)(&stack0x0000004c + lVar7) = *(undefined4 *)(&stack0x0000117c + lVar7);
    *(undefined4 *)(&stack0x00000030 + lVar7) = *(undefined4 *)(&stack0x00001160 + lVar7);
    *(undefined4 *)(&stack0x00000034 + lVar7) = *(undefined4 *)(&stack0x00001164 + lVar7);
    *(undefined4 *)(&stack0x00000038 + lVar7) = *(undefined4 *)(&stack0x00001168 + lVar7);
    *(undefined4 *)(&stack0x0000003c + lVar7) = *(undefined4 *)(&stack0x0000116c + lVar7);
    *(undefined4 *)((longlong)&uStackX_20 + lVar7) = *(undefined4 *)(&stack0x00001150 + lVar7);
    *(undefined4 *)((longlong)&uStackX_20 + lVar7 + 4) = *(undefined4 *)(&stack0x00001154 + lVar7);
    *(undefined4 *)(&stack0x00000028 + lVar7) = uVar2;
    *(undefined4 *)(&stack0x0000002c + lVar7) = uVar3;
    *(undefined8 *)((longlong)&uStackX_10 + lVar7) = uVar8;
    *(undefined8 *)((longlong)&uStackX_18 + lVar7) = uVar4;
    *(undefined8 *)((longlong)&uStack_48 + lVar7) = 0x140b286fe;
    lVar10 = pdb_142d8fbf0(&stack0x00001128 + lVar7,(longlong)&uStackX_10 + lVar7);
LAB_140b286ff:
    arg1 = *(ulonglong *)(&stack0x000011d8 + lVar7);
  }
  else {
    *(undefined8 *)(&stack0x00000060 + lVar7) = *(undefined8 *)(&stack0x000010f8 + lVar7);
    uVar2 = *(undefined4 *)(&stack0x000010c0 + lVar7);
    uVar3 = *(undefined4 *)(&stack0x000010c4 + lVar7);
    *(undefined4 *)(&stack0x00000050 + lVar7) = *(undefined4 *)(&stack0x000010e8 + lVar7);
    *(undefined4 *)(&stack0x00000054 + lVar7) = *(undefined4 *)(&stack0x000010ec + lVar7);
    *(undefined4 *)(&stack0x00000058 + lVar7) = *(undefined4 *)(&stack0x000010f0 + lVar7);
    *(undefined4 *)(&stack0x0000005c + lVar7) = *(undefined4 *)(&stack0x000010f4 + lVar7);
    *(undefined4 *)(&stack0x00000040 + lVar7) = *(undefined4 *)(&stack0x000010d8 + lVar7);
    *(undefined4 *)(&stack0x00000044 + lVar7) = *(undefined4 *)(&stack0x000010dc + lVar7);
    *(undefined4 *)(&stack0x00000048 + lVar7) = *(undefined4 *)(&stack0x000010e0 + lVar7);
    *(undefined4 *)(&stack0x0000004c + lVar7) = *(undefined4 *)(&stack0x000010e4 + lVar7);
    *(undefined4 *)(&stack0x00000030 + lVar7) = *(undefined4 *)(&stack0x000010c8 + lVar7);
    *(undefined4 *)(&stack0x00000034 + lVar7) = *(undefined4 *)(&stack0x000010cc + lVar7);
    *(undefined4 *)(&stack0x00000038 + lVar7) = *(undefined4 *)(&stack0x000010d0 + lVar7);
    *(undefined4 *)(&stack0x0000003c + lVar7) = *(undefined4 *)(&stack0x000010d4 + lVar7);
    *(undefined4 *)((longlong)&uStackX_20 + lVar7) = *(undefined4 *)(&stack0x000010b8 + lVar7);
    *(undefined4 *)((longlong)&uStackX_20 + lVar7 + 4) = *(undefined4 *)(&stack0x000010bc + lVar7);
    *(undefined4 *)(&stack0x00000028 + lVar7) = uVar2;
    *(undefined4 *)(&stack0x0000002c + lVar7) = uVar3;
    *(longlong *)((longlong)&uStackX_10 + lVar7) = lVar10;
    *(undefined8 *)((longlong)&uStackX_18 + lVar7) = uVar4;
    *(undefined8 *)((longlong)&uStack_48 + lVar7) = 0x140b284bc;
    pdb_1417d6090(&stack0x00001140 + lVar7,(longlong)&uStackX_10 + lVar7);
    if (*(longlong *)(&stack0x00001140 + lVar7) != -0x7ffffffffffffff6) goto LAB_140b286b7;
    lVar10 = *(longlong *)(&stack0x00001150 + lVar7);
    *(undefined8 *)(&stack0x000011b0 + lVar7) = *(undefined8 *)(&stack0x00001158 + lVar7);
    *(undefined8 *)(&stack0x000011b8 + lVar7) = *(undefined8 *)(&stack0x00001160 + lVar7);
    *(undefined8 *)(&stack0x000011c0 + lVar7) = *(undefined8 *)(&stack0x00001168 + lVar7);
    if (*(longlong *)(&stack0x00001148 + lVar7) == 10) goto LAB_140b286ff;
    *(undefined8 *)(&stack0x000011a0 + lVar7) = *(undefined8 *)(&stack0x000011c0 + lVar7);
    *(undefined4 *)(&stack0x00001190 + lVar7) = *(undefined4 *)(&stack0x000011b0 + lVar7);
    *(undefined4 *)(&stack0x00001194 + lVar7) = *(undefined4 *)(&stack0x000011b4 + lVar7);
    *(undefined4 *)(&stack0x00001198 + lVar7) = *(undefined4 *)(&stack0x000011b8 + lVar7);
    *(undefined4 *)(&stack0x0000119c + lVar7) = *(undefined4 *)(&stack0x000011bc + lVar7);
    *(longlong *)(&stack0x00001180 + lVar7) = *(longlong *)(&stack0x00001148 + lVar7);
    *(longlong *)(&stack0x00001188 + lVar7) = lVar10;
    uVar11 = (uint)*(undefined8 *)(&stack0x000011c0 + lVar7);
    if (uVar11 < *(uint *)(&stack0x000011a4 + lVar7)) {
      uVar11 = *(uint *)(&stack0x000011a4 + lVar7);
    }
    if (0x500 < uVar11) {
      (&stack0xffffffffffffffe0)[lVar7] = 4;
      *(undefined8 *)((longlong)&uStack_48 + lVar7) = 0x140b28566;
      pdb_140dac380((longlong)&uStackX_10 + lVar7,&stack0x00001180 + lVar7,0x500,0x500);
      *(undefined8 *)((longlong)&uStack_48 + lVar7) = 0x140b28573;
      pdb_140b2f7d0(&stack0x00001180 + lVar7);
      *(undefined8 *)(&stack0x000011a0 + lVar7) = *(undefined8 *)(&stack0x00000030 + lVar7);
      uVar2 = *(undefined4 *)((longlong)&uStackX_10 + lVar7 + 4);
      uVar3 = *(undefined4 *)((longlong)&uStackX_18 + lVar7 + 4);
      *(undefined8 *)(&stack0x00001190 + lVar7) = *(undefined8 *)((longlong)&uStackX_20 + lVar7);
      *(undefined8 *)(&stack0x00001198 + lVar7) = *(undefined8 *)(&stack0x00000028 + lVar7);
      *(undefined4 *)(&stack0x00001180 + lVar7) = *(undefined4 *)((longlong)&uStackX_10 + lVar7);
      *(undefined4 *)(&stack0x00001184 + lVar7) = uVar2;
      *(undefined4 *)(&stack0x00001188 + lVar7) = *(undefined4 *)((longlong)&uStackX_18 + lVar7);
      *(undefined4 *)(&stack0x0000118c + lVar7) = uVar3;
    }
    *(undefined8 *)((longlong)&uStack_48 + lVar7) = 0x140b285a7;
    pdb_140dacc60(&stack0x00001140 + lVar7,&stack0x00001180 + lVar7);
    *(undefined8 *)(&stack0x00001138 + lVar7) = uVar8;
    *(undefined4 *)(&stack0x00001090 + lVar7) = 0x3c46505a;
    *(undefined8 *)(&stack0x000011d0 + lVar7) = *(undefined8 *)(&stack0x00001148 + lVar7);
    uVar8 = *(undefined8 *)(&stack0x00001150 + lVar7);
    uVar2 = *(undefined4 *)(&stack0x00001158 + lVar7);
    uVar3 = *(undefined4 *)(&stack0x0000115c + lVar7);
    for (lVar10 = 0; lVar10 != 4; lVar10 = lVar10 + 1) {
      uVar1 = (&stack0x00001090)[lVar10 + lVar7];
      *(undefined8 *)(&stack0x000011b0 + lVar7) = 0;
      *(undefined8 *)(&stack0x000011b8 + lVar7) = 1;
      *(undefined8 *)(&stack0x000011c0 + lVar7) = 0;
      *(undefined8 *)((longlong)&uStack_48 + lVar7) = 0x140b28631;
      pdb_141c43000((longlong)&uStackX_10 + lVar7,&stack0x000011b0 + lVar7,uVar1);
      *(undefined **)(&stack0x00000000 + lVar7) = &UNK_1430571b0;
      *(undefined4 *)(&stack0xffffffffffffffe8 + lVar7) = uVar3;
      *(undefined4 *)(&stack0xffffffffffffffe0 + lVar7) = uVar2;
      (&stack0xfffffffffffffff0)[lVar7] = 0xf;
      *(undefined8 *)((longlong)&uStack_48 + lVar7) = 0x140b28661;
      pdb_141c44440(&stack0x000010a8 + lVar7,(longlong)&uStackX_10 + lVar7,
                    *(undefined8 *)(&stack0x000011d0 + lVar7),uVar8);
      lVar5 = *(longlong *)(&stack0x000010a8 + lVar7);
      if (lVar5 != -0x7ffffffffffffff6) {
        *(undefined8 *)(&stack0x00000048 + lVar7) = *(undefined8 *)(&stack0x000010e0 + lVar7);
        uVar2 = *(undefined4 *)(&stack0x000010b8 + lVar7);
        uVar3 = *(undefined4 *)(&stack0x000010bc + lVar7);
        *(undefined4 *)(&stack0x00000038 + lVar7) = *(undefined4 *)(&stack0x000010d0 + lVar7);
        *(undefined4 *)(&stack0x0000003c + lVar7) = *(undefined4 *)(&stack0x000010d4 + lVar7);
        *(undefined4 *)(&stack0x00000040 + lVar7) = *(undefined4 *)(&stack0x000010d8 + lVar7);
        *(undefined4 *)(&stack0x00000044 + lVar7) = *(undefined4 *)(&stack0x000010dc + lVar7);
        *(undefined4 *)(&stack0x00000028 + lVar7) = *(undefined4 *)(&stack0x000010c0 + lVar7);
        *(undefined4 *)(&stack0x0000002c + lVar7) = *(undefined4 *)(&stack0x000010c4 + lVar7);
        *(undefined4 *)(&stack0x00000030 + lVar7) = *(undefined4 *)(&stack0x000010c8 + lVar7);
        *(undefined4 *)(&stack0x00000034 + lVar7) = *(undefined4 *)(&stack0x000010cc + lVar7);
        *(undefined4 *)((longlong)&uStackX_18 + lVar7) = *(undefined4 *)(&stack0x000010b0 + lVar7);
        *(undefined4 *)((longlong)&uStackX_18 + lVar7 + 4) =
             *(undefined4 *)(&stack0x000010b4 + lVar7);
        *(undefined4 *)((longlong)&uStackX_20 + lVar7) = uVar2;
        *(undefined4 *)((longlong)&uStackX_20 + lVar7 + 4) = uVar3;
        *(longlong *)((longlong)&uStackX_10 + lVar7) = lVar5;
        *(undefined8 *)((longlong)&uStack_48 + lVar7) = 0x140b287ef;
        lVar10 = pdb_142deb120((longlong)&uStackX_10 + lVar7);
LAB_140b2881f:
        arg1 = *(ulonglong *)(&stack0x000011d8 + lVar7);
        if (*(ulonglong *)(&stack0x000011b0 + lVar7) != 0) {
          *(undefined8 *)((longlong)&uStack_48 + lVar7) = 0x140b28847;
          pub_1406abac0(*(byte **)(&stack0x000011b8 + lVar7),
                        *(ulonglong *)(&stack0x000011b0 + lVar7),1);
        }
        goto LAB_140b2884a;
      }
      if (*(ulonglong *)(&stack0x000011c0 + lVar7) < 0x100001) {
        *(undefined8 *)((longlong)&uStack_48 + lVar7) = 0x140b2880c;
        lVar10 = pdb_140f561c0(*(undefined8 *)(&stack0x000011e0 + lVar7),
                               *(undefined8 *)(&stack0x00001138 + lVar7),
                               *(undefined8 *)(&stack0x000011b8 + lVar7));
        if (lVar10 == 0) {
          lVar10 = 0;
        }
        else {
          *(undefined8 *)((longlong)&uStack_48 + lVar7) = 0x140b2881a;
          lVar10 = pdb_142deaf00(lVar10);
        }
        goto LAB_140b2881f;
      }
      if (*(ulonglong *)(&stack0x000011b0 + lVar7) != 0) {
        *(undefined8 *)((longlong)&uStack_48 + lVar7) = 0x140b286b2;
        pub_1406abac0(*(byte **)(&stack0x000011b8 + lVar7),*(ulonglong *)(&stack0x000011b0 + lVar7),
                      1);
      }
    }
    *(undefined1 **)((longlong)&uStackX_10 + lVar7) = &stack0x00001128 + lVar7;
    *(code **)((longlong)&uStackX_18 + lVar7) = pdb_140117670;
    *(undefined1 **)((longlong)&uStackX_20 + lVar7) = &stack0x00001120 + lVar7;
    *(code **)(&stack0x00000028 + lVar7) = pdb_140f72a40;
    *(undefined8 *)((longlong)&uStack_48 + lVar7) = 0x140b287a9;
    lVar10 = pdb_142d8fe70(&UNK_143057162,(longlong)&uStackX_10 + lVar7);
    arg1 = *(ulonglong *)(&stack0x000011d8 + lVar7);
LAB_140b2884a:
    if (*(ulonglong *)(&stack0x00001140 + lVar7) != 0) {
      *(undefined8 *)((longlong)&uStack_48 + lVar7) = 0x140b2886b;
      pub_1406abac0(*(byte **)(&stack0x000011d0 + lVar7),*(ulonglong *)(&stack0x00001140 + lVar7),1)
      ;
    }
    *(undefined8 *)((longlong)&uStack_48 + lVar7) = 0x140b28877;
    pdb_140b2f7d0(&stack0x00001180 + lVar7);
    if (lVar10 == 0) {
      uVar8 = *(undefined8 *)(&stack0x00001100 + lVar7);
      uVar4 = *(undefined8 *)(&stack0x00001108 + lVar7);
      uVar9 = *(undefined8 *)(&stack0x00001118 + lVar7);
      param_1[2] = *(undefined8 *)(&stack0x00001110 + lVar7);
      param_1[3] = uVar9;
      *param_1 = uVar8;
      param_1[1] = uVar4;
      goto joined_r0x000140b28738;
    }
  }
  param_1[1] = lVar10;
  *param_1 = 0x8000000000000001;
  if (*(ulonglong *)(&stack0x00001100 + lVar7) != 0) {
    *(undefined8 *)((longlong)&uStack_48 + lVar7) = 0x140b28735;
    pub_1406abac0(*(byte **)(&stack0x000011e0 + lVar7),*(ulonglong *)(&stack0x00001100 + lVar7),1);
  }
joined_r0x000140b28738:
  if (arg1 != 0) {
    *(undefined8 *)((longlong)&uStack_48 + lVar7) = 0x140b2874f;
    pub_1406abac0(*(byte **)(&stack0x000011c8 + lVar7),arg1,1);
  }
  return param_1;
}

