// VA 0x141b17600, PDB extent 839 bytes
// country_core::render::ssbo::impl$0::new_storage_buffer<country_core::resources::render::spatial_resolve_offsets::SpatialResolveOffsetsSsbo>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/render/ssbo.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::render::ssbo::impl$0::new_storage_buffer<country_core::resources::render::spatial_resolve_offsets::SpatialResolveOffsetsSsbo>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/render/ssbo.rs
   Extent: 839 */

undefined8 pdb_141b17600(undefined8 param_1,byte *param_2,ulonglong param_3)

{
  code *pcVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  byte *unaff_RBX;
  char cVar5;
  undefined8 unaff_R14;
  ulonglong auStackX_8 [2];
  undefined8 uStackX_18;
  undefined8 uStackX_20;
  undefined8 uStack_30;
  
  uStack_30 = 0x141b17610;
  lVar2 = pdb_142d7c6d0();
  lVar2 = -lVar2;
  *(undefined8 *)(&stack0x00002090 + lVar2) = 0xfffffffffffffffe;
  if (param_2 == (byte *)0x0) {
    (&stack0x0000208f)[lVar2] = 0;
    *(undefined8 *)((longlong)&uStack_30 + lVar2) = 0x141b1767d;
    pdb_140a6ad70((longlong)&uStackX_18 + lVar2);
    if (*(int *)((longlong)&uStackX_18 + lVar2) == 1) {
      *(undefined8 *)((longlong)&uStack_30 + lVar2) = 0x141b17689;
      pdb_14007ee60();
      *(undefined8 *)((longlong)&uStack_30 + lVar2) = 0x141b17698;
      param_2 = pub_1406abab0(0x2000,4);
      if (param_2 == (byte *)0x0) {
        (&stack0x0000208f)[lVar2] = 0;
        *(undefined8 *)((longlong)&uStack_30 + lVar2) = 0x141b17890;
        pdb_142dc7e2a(4,0x2000);
                    /* WARNING: Does not return */
        pcVar1 = (code *)invalidInstructionException();
        (*pcVar1)();
      }
      *(undefined8 *)((longlong)&uStack_30 + lVar2) = 0x141b176b6;
      pub_142e32760(param_2,(longlong)&uStackX_18 + lVar2 + 4,0x2000);
      unaff_R14 = CONCAT71((int7)((ulonglong)unaff_R14 >> 8),1);
    }
    else {
      unaff_R14 = 0;
      param_2 = (byte *)0x0;
    }
    param_3 = 0x2000;
LAB_141b176c5:
    *(byte **)(&stack0x00002080 + lVar2) = param_2;
    cVar5 = (char)unaff_R14;
    (&stack0x0000208f)[lVar2] = cVar5;
    *(undefined8 *)((longlong)&uStack_30 + lVar2) = 0x141b176e4;
    uVar3 = pdb_140e1d1f0(0x2000,0x1a,1);
    *(byte **)(&stack0x00002080 + lVar2) = param_2;
    (&stack0x0000208f)[lVar2] = cVar5;
    *(undefined8 *)((longlong)&uStack_30 + lVar2) = 0x141b17700;
    uVar3 = pdb_140e1d260(uVar3,4);
    *(byte **)(&stack0x00002080 + lVar2) = param_2;
    (&stack0x0000208f)[lVar2] = cVar5;
    *(ulonglong *)((longlong)auStackX_8 + lVar2) = param_3;
    *(byte **)(&stack0x00000000 + lVar2) = param_2;
    *(undefined8 *)(&stack0xfffffffffffffff8 + lVar2) = uVar3;
    *(undefined8 *)((longlong)&uStack_30 + lVar2) = 0x141b17737;
    pdb_1415d1d50((longlong)&uStackX_18 + lVar2,param_1,&UNK_14338d678,0x15);
    lVar4 = *(longlong *)((longlong)&uStackX_18 + lVar2);
    param_1 = *(undefined8 *)((longlong)&uStackX_20 + lVar2);
    unaff_RBX = param_2;
    if (lVar4 == 0xb) {
      if (cVar5 != '\0') {
        *(undefined8 *)((longlong)&uStack_30 + lVar2) = 0x141b1775e;
        pub_1406abac0(param_2,0x2000,4);
      }
      return param_1;
    }
  }
  else {
    *(ulonglong *)(&stack0x00002020 + lVar2) = param_3 & 0x1fff;
    if ((param_3 & 0x1fff) == 0) {
      *(ulonglong *)((longlong)&uStackX_18 + lVar2) = (ulonglong)param_2 & 3;
      unaff_RBX = param_2;
      if (((ulonglong)param_2 & 3) == 0) {
        if (0x3fff < param_3) {
          *(undefined **)(&stack0x00002020 + lVar2) = &UNK_143390842;
          *(undefined8 *)(&stack0x00002028 + lVar2) = 0x53;
          *(undefined1 **)((longlong)&uStackX_18 + lVar2) = &stack0x00002020 + lVar2;
          *(code **)((longlong)&uStackX_20 + lVar2) = pdb_1402ed400;
          (&stack0x0000208f)[lVar2] = 0;
                    /* WARNING: Subroutine does not return */
          *(undefined8 *)((longlong)&uStack_30 + lVar2) = 0x141b17877;
          pdb_142dc83d0(&UNK_14338d590,(longlong)&uStackX_18 + lVar2,&UNK_14338d5c0);
        }
        unaff_R14 = 0;
        goto LAB_141b176c5;
      }
    }
    else {
      *(undefined **)(&stack0x00000000 + lVar2) = &UNK_143381f30;
      *(undefined8 *)((longlong)&uStack_30 + lVar2) = 0x141b17793;
      pdb_142dc7fb4(0,&stack0x00002020 + lVar2,&UNK_143381eb8,0);
    }
    *(undefined **)(&stack0x00000000 + lVar2) = &UNK_143381f18;
    *(undefined8 *)((longlong)&uStack_30 + lVar2) = 0x141b177b4;
    lVar4 = pdb_142dc7fb4(0,(longlong)&uStackX_18 + lVar2,&UNK_143381eb8,0);
  }
  *(undefined8 *)(&stack0x00002078 + lVar2) = unaff_R14;
  *(byte **)(&stack0x00002070 + lVar2) = unaff_RBX;
  *(undefined4 *)(&stack0x00002060 + lVar2) = *(undefined4 *)(&stack0x00000058 + lVar2);
  *(undefined4 *)(&stack0x00002064 + lVar2) = *(undefined4 *)(&stack0x0000005c + lVar2);
  *(undefined4 *)(&stack0x00002068 + lVar2) = *(undefined4 *)(&stack0x00000060 + lVar2);
  *(undefined4 *)(&stack0x0000206c + lVar2) = *(undefined4 *)(&stack0x00000064 + lVar2);
  *(undefined4 *)(&stack0x00002050 + lVar2) = *(undefined4 *)(&stack0x00000048 + lVar2);
  *(undefined4 *)(&stack0x00002054 + lVar2) = *(undefined4 *)(&stack0x0000004c + lVar2);
  *(undefined4 *)(&stack0x00002058 + lVar2) = *(undefined4 *)(&stack0x00000050 + lVar2);
  *(undefined4 *)(&stack0x0000205c + lVar2) = *(undefined4 *)(&stack0x00000054 + lVar2);
  *(undefined4 *)(&stack0x00002040 + lVar2) = *(undefined4 *)(&stack0x00000038 + lVar2);
  *(undefined4 *)(&stack0x00002044 + lVar2) = *(undefined4 *)(&stack0x0000003c + lVar2);
  *(undefined4 *)(&stack0x00002048 + lVar2) = *(undefined4 *)(&stack0x00000040 + lVar2);
  *(undefined4 *)(&stack0x0000204c + lVar2) = *(undefined4 *)(&stack0x00000044 + lVar2);
  *(undefined4 *)(&stack0x00002030 + lVar2) = *(undefined4 *)(&stack0x00000028 + lVar2);
  *(undefined4 *)(&stack0x00002034 + lVar2) = *(undefined4 *)(&stack0x0000002c + lVar2);
  *(undefined4 *)(&stack0x00002038 + lVar2) = *(undefined4 *)(&stack0x00000030 + lVar2);
  *(undefined4 *)(&stack0x0000203c + lVar2) = *(undefined4 *)(&stack0x00000034 + lVar2);
  *(longlong *)(&stack0x00002020 + lVar2) = lVar4;
  *(undefined8 *)(&stack0x00002028 + lVar2) = param_1;
  *(undefined **)(&stack0xfffffffffffffff8 + lVar2) = &UNK_14338d4c8;
                    /* WARNING: Subroutine does not return */
  *(undefined8 *)((longlong)&uStack_30 + lVar2) = 0x141b17827;
  pdb_142dc8170(&UNK_143390f78,0x2b,&stack0x00002020 + lVar2,&UNK_143390f58);
}

