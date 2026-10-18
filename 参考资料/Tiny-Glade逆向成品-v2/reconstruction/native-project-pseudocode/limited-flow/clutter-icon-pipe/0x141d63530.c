// VA 0x141d63530, PDB extent 2531 bytes
// rhapsody::setup::GraphicsInstanceInfo::create_first_available_device<rhapsody::setup::GraphicsDeviceDesc>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/clutter-icon-pipe/src/lib.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   rhapsody::setup::GraphicsInstanceInfo::create_first_available_device<rhapsody::setup::GraphicsDeviceDesc>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/clutter-icon-pipe/src/lib.rs
   Extent: 2531 */

undefined8 * pdb_141d63530(undefined8 param_1,ulonglong *param_2)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  code *pcVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  ulonglong *puVar11;
  longlong lVar12;
  undefined8 uVar13;
  byte *pbVar14;
  undefined8 *puVar15;
  ulonglong *puVar16;
  longlong lVar17;
  ulonglong *puVar18;
  undefined4 unaff_XMM6_Da;
  undefined4 unaff_XMM6_Db;
  undefined4 unaff_XMM6_Dc;
  undefined4 unaff_XMM6_Dd;
  undefined8 uStackX_8;
  undefined4 auStackX_10 [6];
  undefined8 uStack_48;
  
  uStack_48 = 0x141d63546;
  lVar12 = pdb_142d7c6d0();
  puVar11 = _DAT_143ca8e90;
  lVar12 = -lVar12;
  *(undefined4 *)(&stack0x000017b0 + lVar12) = unaff_XMM6_Da;
  *(undefined4 *)(&stack0x000017b4 + lVar12) = unaff_XMM6_Db;
  *(undefined4 *)(&stack0x000017b8 + lVar12) = unaff_XMM6_Dc;
  *(undefined4 *)(&stack0x000017bc + lVar12) = unaff_XMM6_Dd;
  *(undefined8 *)(&stack0x000017a8 + lVar12) = 0xfffffffffffffffe;
  uVar2 = *param_2;
  if (uVar2 != 0x18) {
    lVar12 = 3;
    if (0xf < uVar2) {
      lVar12 = uVar2 - 0x10;
    }
                    /* WARNING: Could not recover jumptable at 0x000141d638dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    puVar15 = (undefined8 *)
              (*(code *)(&UNK_1433d4264 + *(int *)(&UNK_1433d4264 + lVar12 * 4)))
                        (&UNK_1433d4264 + *(int *)(&UNK_1433d4264 + lVar12 * 4));
    return puVar15;
  }
  *(undefined8 *)(&stack0x00001798 + lVar12) = param_1;
  if (param_2[0xd] != 0) {
    puVar16 = (ulonglong *)param_2[0xc];
    lVar17 = param_2[0xd] << 3;
    puVar18 = param_2 + 2;
    puVar1 = &stack0x00001730 + lVar12;
    do {
      if (2 < *puVar11) {
        uVar2 = *puVar16;
        *(undefined8 *)((longlong)&uStack_48 + lVar12) = 0x141d635f9;
        uVar13 = pdb_140e8df80(uVar2 + 0x10);
        *(undefined8 *)(&stack0x00001730 + lVar12) = uVar13;
        *(ulonglong **)(&stack0x00001738 + lVar12) = param_2;
        *(undefined1 **)(&stack0xffffffffffffffe0 + lVar12) = puVar1;
        *(code **)(&stack0xffffffffffffffe8 + lVar12) = pdb_1402ed420;
        *(ulonglong *)(&stack0xfffffffffffffff0 + lVar12) = uVar2 + 0x48;
        *(code **)(&stack0xfffffffffffffff8 + lVar12) = pdb_140e8ca40;
        *(ulonglong *)((longlong)auStackX_10 + lVar12 + -0x10) = uVar2 + 0x690;
        *(code **)((longlong)&uStackX_8 + lVar12) = pdb_140eaccb0;
        *(undefined8 *)(&stack0x00000b80 + lVar12) = 0;
        *(undefined **)(&stack0x00000b88 + lVar12) = &UNK_1433d4201;
        *(undefined8 *)(&stack0x00000b90 + lVar12) = 0xf;
        *(undefined8 *)(&stack0x00000b98 + lVar12) = 0;
        *(undefined **)(&stack0x00000ba0 + lVar12) = &UNK_1433d41b3;
        *(undefined8 *)(&stack0x00000ba8 + lVar12) = 0x4d;
        *(undefined8 *)(&stack0x00000bb0 + lVar12) = 3;
        *(undefined **)(&stack0x00000bb8 + lVar12) = &UNK_1433d4201;
        *(undefined8 *)(&stack0x00000bc0 + lVar12) = 0xf;
        *(undefined8 *)(&stack0x00000bc8 + lVar12) = 0x1aa00000001;
        *(undefined **)(&stack0x00000bd0 + lVar12) = &UNK_1433d417f;
        *(undefined1 **)(&stack0x00000bd8 + lVar12) = &stack0xffffffffffffffe0 + lVar12;
        *(undefined8 *)((longlong)&uStack_48 + lVar12) = 0x141d636e7;
        pdb_140f332f0(&stack0x000017a7 + lVar12,&stack0x00000b80 + lVar12);
      }
      if (3 < *puVar11) {
        *(ulonglong **)(&stack0xffffffffffffffe0 + lVar12) = puVar16;
        *(code **)(&stack0xffffffffffffffe8 + lVar12) = pdb_1426c9a30;
        *(undefined8 *)(&stack0x00000b80 + lVar12) = 0;
        *(undefined **)(&stack0x00000b88 + lVar12) = &UNK_1433d4201;
        *(undefined8 *)(&stack0x00000b90 + lVar12) = 0xf;
        *(undefined8 *)(&stack0x00000b98 + lVar12) = 0;
        *(undefined **)(&stack0x00000ba0 + lVar12) = &UNK_1433d41b3;
        *(undefined8 *)(&stack0x00000ba8 + lVar12) = 0x4d;
        *(undefined8 *)(&stack0x00000bb0 + lVar12) = 4;
        *(undefined **)(&stack0x00000bb8 + lVar12) = &UNK_1433d4201;
        *(undefined8 *)(&stack0x00000bc0 + lVar12) = 0xf;
        *(undefined8 *)(&stack0x00000bc8 + lVar12) = 0x1b000000001;
        *(undefined **)(&stack0x00000bd0 + lVar12) = &UNK_1433d4210;
        *(undefined1 **)(&stack0x00000bd8 + lVar12) = &stack0xffffffffffffffe0 + lVar12;
        *(undefined8 *)((longlong)&uStack_48 + lVar12) = 0x141d6379f;
        pdb_140f332f0(&stack0x000017a7 + lVar12,&stack0x00000b80 + lVar12);
      }
      *(undefined8 *)((longlong)&uStack_48 + lVar12) = 0x141d637ae;
      param_2 = puVar16;
      pdb_140e58040(&stack0xffffffffffffffe0 + lVar12,puVar16,puVar18);
      if (*(int *)(&stack0xffffffffffffffe0 + lVar12) != 2) {
        *(undefined8 *)((longlong)&uStack_48 + lVar12) = 0x141d6394e;
        pub_142e32760(&stack0x00000b90 + lVar12,&stack0xffffffffffffffe0 + lVar12,0xba0);
        *(undefined8 *)(&stack0x00000b80 + lVar12) = 1;
        *(undefined8 *)(&stack0x00000b88 + lVar12) = 1;
        *(undefined8 *)((longlong)&uStack_48 + lVar12) = 0x141d63969;
        pdb_14007ee60();
        *(undefined8 *)((longlong)&uStack_48 + lVar12) = 0x141d63978;
        pbVar14 = pub_1406abab0(0xbb0,8);
        if (pbVar14 != (byte *)0x0) {
          *(undefined8 *)((longlong)&uStack_48 + lVar12) = 0x141d63999;
          pub_142e32760(pbVar14,&stack0x00000b80 + lVar12,0xbb0);
          puVar15 = *(undefined8 **)(&stack0x00001798 + lVar12);
          *puVar15 = 0x18;
          puVar15[1] = pbVar14;
          return puVar15;
        }
                    /* WARNING: Subroutine does not return */
        *(undefined8 *)((longlong)&uStack_48 + lVar12) = 0x141d63df0;
        pdb_142dc7e11(8,0xbb0);
      }
      *(undefined8 *)(&stack0x00001770 + lVar12) = *(undefined8 *)(&stack0x00000028 + lVar12);
      *(undefined8 *)(&stack0x00001778 + lVar12) = *(undefined8 *)(&stack0x00000030 + lVar12);
      uVar4 = *(undefined4 *)((longlong)auStackX_10 + lVar12 + -0x10);
      uVar5 = *(undefined4 *)((longlong)auStackX_10 + lVar12 + -0xc);
      uVar6 = *(undefined4 *)((longlong)auStackX_10 + lVar12 + -4);
      uVar7 = *(undefined4 *)((longlong)auStackX_10 + lVar12 + 4);
      uVar8 = *(undefined4 *)((longlong)auStackX_10 + lVar12 + 0xc);
      uVar9 = *(undefined4 *)((longlong)auStackX_10 + lVar12 + 0x10);
      uVar10 = *(undefined4 *)((longlong)auStackX_10 + lVar12 + 0x14);
      *(undefined4 *)(&stack0x00001760 + lVar12) =
           *(undefined4 *)((longlong)auStackX_10 + lVar12 + 8);
      *(undefined4 *)(&stack0x00001764 + lVar12) = uVar8;
      *(undefined4 *)(&stack0x00001768 + lVar12) = uVar9;
      *(undefined4 *)(&stack0x0000176c + lVar12) = uVar10;
      *(undefined4 *)(&stack0x00001750 + lVar12) = *(undefined4 *)((longlong)&uStackX_8 + lVar12);
      *(undefined4 *)(&stack0x00001754 + lVar12) = uVar6;
      *(undefined4 *)(&stack0x00001758 + lVar12) = *(undefined4 *)((longlong)auStackX_10 + lVar12);
      *(undefined4 *)(&stack0x0000175c + lVar12) = uVar7;
      *(undefined4 *)(&stack0x00001740 + lVar12) =
           *(undefined4 *)(&stack0xfffffffffffffff8 + lVar12);
      *(undefined4 *)(&stack0x00001744 + lVar12) =
           *(undefined4 *)(&stack0xfffffffffffffffc + lVar12);
      *(undefined4 *)(&stack0x00001748 + lVar12) = uVar4;
      *(undefined4 *)(&stack0x0000174c + lVar12) = uVar5;
      *(undefined4 *)(&stack0x00001730 + lVar12) =
           *(undefined4 *)(&stack0xffffffffffffffe8 + lVar12);
      *(undefined4 *)(&stack0x00001734 + lVar12) =
           *(undefined4 *)(&stack0xffffffffffffffec + lVar12);
      *(undefined4 *)(&stack0x00001738 + lVar12) =
           *(undefined4 *)(&stack0xfffffffffffffff0 + lVar12);
      *(undefined4 *)(&stack0x0000173c + lVar12) =
           *(undefined4 *)(&stack0xfffffffffffffff4 + lVar12);
      if (*puVar11 != 0) {
        *(undefined1 **)(&stack0x00001788 + lVar12) = puVar1;
        *(code **)(&stack0x00001790 + lVar12) = pdb_141d63350;
        *(undefined8 *)(&stack0x00000b80 + lVar12) = 0;
        *(undefined **)(&stack0x00000b88 + lVar12) = &UNK_1433d4201;
        *(undefined8 *)(&stack0x00000b90 + lVar12) = 0xf;
        *(undefined8 *)(&stack0x00000b98 + lVar12) = 0;
        *(undefined **)(&stack0x00000ba0 + lVar12) = &UNK_1433d41b3;
        *(undefined8 *)(&stack0x00000ba8 + lVar12) = 0x4d;
        *(undefined8 *)(&stack0x00000bb0 + lVar12) = 1;
        *(undefined **)(&stack0x00000bb8 + lVar12) = &UNK_1433d4201;
        *(undefined8 *)(&stack0x00000bc0 + lVar12) = 0xf;
        *(undefined8 *)(&stack0x00000bc8 + lVar12) = 0x1bf00000001;
        *(undefined **)(&stack0x00000bd0 + lVar12) = &UNK_1433d4233;
        *(undefined1 **)(&stack0x00000bd8 + lVar12) = &stack0x00001788 + lVar12;
        param_2 = (ulonglong *)(&stack0x00000b80 + lVar12);
        *(undefined8 *)((longlong)&uStack_48 + lVar12) = 0x141d638b8;
        pdb_140f332f0(&stack0x000017a7 + lVar12);
      }
      puVar16 = puVar16 + 1;
      *(undefined8 *)((longlong)&uStack_48 + lVar12) = 0x141d635cc;
      pdb_141d631e0(puVar1);
      lVar17 = lVar17 + -8;
    } while (lVar17 != 0);
  }
  *(undefined8 *)((longlong)&uStack_48 + lVar12) = 0x141d638f3;
  pdb_14007ee60();
  *(undefined8 *)((longlong)&uStack_48 + lVar12) = 0x141d63902;
  pbVar14 = pub_1406abab0(4,1);
  if (pbVar14 != (byte *)0x0) {
    pbVar14[0] = 0x74;
    pbVar14[1] = 0x6f;
    pbVar14[2] = 100;
    pbVar14[3] = 0x6f;
    puVar15 = *(undefined8 **)(&stack0x00001798 + lVar12);
    *puVar15 = 0x11;
    puVar15[1] = 4;
    puVar15[2] = pbVar14;
    puVar15[3] = 4;
    return puVar15;
  }
  *(undefined8 *)((longlong)&uStack_48 + lVar12) = 0x141d63e02;
  pdb_142dc7e2a(1,4);
  pcVar3 = (code *)swi(3);
  puVar15 = (undefined8 *)(*pcVar3)();
  return puVar15;
}

