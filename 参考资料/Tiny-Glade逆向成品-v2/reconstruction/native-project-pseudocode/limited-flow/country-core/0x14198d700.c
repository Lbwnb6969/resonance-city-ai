// VA 0x14198d700, PDB extent 2326 bytes
// country_core::resources::history::impl$16::deserialize::impl$0::visit_map<ref_mut$<serde_json::value::de::MapDeserializer> >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/history/mod.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00014198ed3f) overlaps instruction at (ram,0x00014198ed3e)
    */
/* WARNING: Removing unreachable block (ram,0x00014198ec66) */
/* WARNING: Removing unreachable block (ram,0x00014198e949) */
/* WARNING: Removing unreachable block (ram,0x00014198e8fb) */
/* WARNING: Removing unreachable block (ram,0x00014198e8fd) */
/* WARNING: Removing unreachable block (ram,0x00014198e96d) */
/* WARNING: Removing unreachable block (ram,0x00014198ec7e) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::resources::history::impl$16::deserialize::impl$0::visit_map<ref_mut$<serde_json::value::de::MapDeserializer>
   >
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/history/mod.rs
   Extent: 2326 */

ulonglong *******
pdb_14198d700(ulonglong *******param_1,ulonglong *******param_2,ulonglong *******param_3,
             ulonglong *******param_4)

{
  undefined4 *puVar1;
  uint *puVar2;
  byte *pbVar3;
  int *piVar4;
  char *pcVar5;
  char cVar6;
  undefined4 uVar7;
  undefined **ppuVar8;
  byte bVar9;
  uint uVar10;
  uint uVar11;
  undefined8 uVar12;
  ulonglong uVar13;
  ulonglong *******pppppppuVar14;
  ulonglong *******pppppppuVar15;
  longlong lVar16;
  ulonglong *******pppppppuVar17;
  ulonglong *******pppppppuVar18;
  ulonglong *******extraout_RAX;
  byte bVar20;
  int iVar21;
  ulonglong ******ppppppuVar22;
  ulonglong uVar23;
  ulonglong *******arg0;
  ulonglong *******pppppppuVar24;
  ulonglong ******ppppppuVar25;
  undefined2 uVar26;
  ulonglong *******arg1;
  undefined1 uVar27;
  int unaff_EBX;
  ulonglong *******pppppppuVar28;
  ulonglong *******pppppppuVar29;
  ulonglong *******pppppppuVar30;
  ulonglong *******pppppppuVar31;
  ulonglong *******pppppppuVar32;
  ulonglong *******pppppppuVar33;
  ulonglong *******pppppppuVar34;
  undefined **ppuVar35;
  ulonglong *******pppppppuVar36;
  undefined **ppuVar37;
  undefined **ppuVar38;
  ulonglong *******pppppppuVar39;
  undefined **ppuVar40;
  ulonglong *******pppppppuVar41;
  undefined **ppuVar42;
  ulonglong *******pppppppuVar43;
  ulonglong ******ppppppuVar44;
  ulonglong *******pppppppuVar45;
  code *UNRECOVERED_JUMPTABLE;
  longlong unaff_GS_OFFSET;
  bool bVar46;
  ulonglong auStack_160 [2];
  ulonglong ******ppppppuStack_150;
  ulonglong ******ppppppuStack_148;
  ulonglong uStack_140;
  undefined8 uStack_138;
  ulonglong ******ppppppuStack_130;
  ulonglong ******ppppppuStack_128;
  ulonglong ******ppppppuStack_120;
  undefined *puStack_118;
  ulonglong *******pppppppuStack_110;
  undefined *puStack_108;
  undefined *puStack_100;
  ulonglong *puStack_f8;
  ulonglong *******pppppppuStack_f0;
  ulonglong *******pppppppuStack_e8;
  ulonglong *******pppppppuStack_e0;
  ulonglong *******pppppppuStack_d8;
  ulonglong *******pppppppuStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  ulonglong *******pppppppuStack_b0;
  ulonglong *******pppppppuStack_a8;
  ulonglong *******pppppppuStack_a0;
  undefined8 uStack_98;
  undefined4 uStack_90;
  int iStack_8c;
  undefined4 uStack_88;
  uint uStack_84;
  uint uStack_80;
  uint uStack_7c;
  ulonglong *******pppppppuStack_70;
  ulonglong *******pppppppuStack_68;
  ulonglong *******pppppppuStack_60;
  ulonglong *******pppppppuStack_58;
  undefined1 uStack_4d;
  undefined1 uStack_4c;
  undefined1 uStack_4b;
  undefined1 uStack_4a;
  undefined1 uStack_49;
  undefined8 uStack_48;
  undefined7 uVar19;
  
  pppppppuVar28 = (ulonglong *******)&puStack_108;
  pppppppuVar29 = (ulonglong *******)&puStack_108;
  pppppppuVar30 = (ulonglong *******)&puStack_108;
  pppppppuVar31 = (ulonglong *******)&puStack_108;
  pppppppuVar32 = (ulonglong *******)&puStack_108;
  pppppppuVar33 = (ulonglong *******)&puStack_108;
  pppppppuVar34 = (ulonglong *******)&puStack_108;
  pppppppuVar36 = (ulonglong *******)&puStack_108;
  ppuVar37 = &puStack_108;
  pppppppuVar15 = (ulonglong *******)&puStack_108;
  ppuVar40 = &puStack_108;
  pppppppuVar41 = (ulonglong *******)&puStack_108;
  ppuVar42 = &puStack_108;
  pppppppuVar18 = (ulonglong *******)&uStack_88;
  uStack_48 = 0xfffffffffffffffe;
  uStack_c8 = (ulonglong *******)0x8000000000000000;
  pppppppuStack_68 = (ulonglong *******)0x0;
  pppppppuStack_70 = (ulonglong *******)0x0;
  puVar1 = (undefined4 *)((longlong)param_2 + 0x49);
  pppppppuVar45 = (ulonglong *******)&UNK_14335cf08;
  pppppppuStack_58 = param_1;
LAB_14198d778:
  uStack_49 = 1;
  uStack_4a = 1;
  pppppppuStack_110 = (ulonglong *******)0x14198d78b;
  arg0 = (ulonglong *******)&uStack_98;
  arg1 = param_2;
  pdb_141be4450();
  pppppppuVar39 = pppppppuStack_58;
  if ((char)uStack_98 == '\x01') {
    arg1 = (ulonglong *******)CONCAT44(iStack_8c,uStack_90);
    goto joined_r0x00014198d9ab;
  }
  uVar13 = (ulonglong)*(int *)(&UNK_14335cf08 + (ulonglong)uStack_98._1_1_ * 4);
  pppppppuVar14 = (ulonglong *******)(&UNK_14335cf08 + uVar13);
  bVar46 = pppppppuVar14 == (ulonglong *******)0x0;
  bVar20 = (byte)arg0;
  uVar11 = (uint)arg0;
  bVar9 = (byte)pppppppuVar14;
  uVar10 = (uint)pppppppuVar14;
  uVar19 = (undefined7)((ulonglong)pppppppuVar14 >> 8);
  uVar26 = SUB82(arg1,0);
  uVar27 = UNK_14335cf08;
  pppppppuVar17 = arg0;
  ppuVar38 = &puStack_108;
  ppuVar8 = &puStack_108;
  ppuVar35 = &puStack_108;
  pppppppuVar24 = _UNK_14335cf08;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(uStack_98._1_1_) {
  case 0:
    if (!SBORROW8(0,(longlong)uStack_c8)) {
      pppppppuStack_b0 = (ulonglong *******)&UNK_14335ca48;
      pppppppuStack_a8 = (ulonglong *******)0x5;
      uStack_98._0_1_ = (char)&pppppppuStack_b0;
      uStack_98._1_1_ = (byte)((ulonglong)&pppppppuStack_b0 >> 8);
      uStack_98._2_2_ = (undefined2)((ulonglong)&pppppppuStack_b0 >> 0x10);
      uStack_98._4_4_ = (undefined4)((ulonglong)&pppppppuStack_b0 >> 0x20);
      uStack_90 = 0x402ed400;
      iStack_8c = 1;
      uStack_49 = 1;
      uStack_4a = 1;
      pppppppuStack_110 = (ulonglong *******)0x14198dc84;
      arg1 = (ulonglong *******)pdb_142d872f0(&UNK_143045061,&uStack_98);
      pppppppuVar39 = pppppppuStack_58;
      goto joined_r0x00014198d9ab;
    }
    cVar6 = *(char *)(param_2 + 9);
    *(undefined1 *)(param_2 + 9) = 6;
    if (cVar6 == '\x06') {
      uStack_49 = 1;
      uStack_4a = 1;
      pppppppuStack_110 = (ulonglong *******)0x14198da59;
      arg1 = (ulonglong *******)pdb_142d86fc0(&UNK_14339ab08,0x10);
      pppppppuVar39 = pppppppuStack_58;
      goto joined_r0x00014198d9ab;
    }
    uVar7 = *puVar1;
    uStack_84 = *(uint *)((longlong)param_2 + 0x5c);
    uStack_80 = *(uint *)(param_2 + 0xc);
    uStack_7c = *(uint *)((longlong)param_2 + 100);
    uStack_98._1_1_ = (byte)uVar7;
    uStack_98._2_2_ = (undefined2)((uint)uVar7 >> 8);
    uStack_98._5_3_ = (undefined3)*(undefined4 *)((longlong)param_2 + 0x4d);
    uStack_98._4_4_ = CONCAT31(uStack_98._5_3_,(char)((uint)uVar7 >> 0x18));
    uStack_90._1_3_ = (undefined3)*(undefined4 *)((longlong)param_2 + 0x51);
    uStack_90 = CONCAT31(uStack_90._1_3_,
                         (char)((uint)*(undefined4 *)((longlong)param_2 + 0x4d) >> 0x18));
    iStack_8c._1_3_ = (undefined3)*(undefined4 *)((longlong)param_2 + 0x55);
    iStack_8c = CONCAT31(iStack_8c._1_3_,
                         (char)((uint)*(undefined4 *)((longlong)param_2 + 0x51) >> 0x18));
    uStack_88._1_3_ = (undefined3)(*(uint *)(param_2 + 0xb) >> 8);
    uStack_88._0_1_ = (undefined1)((uint)*(undefined4 *)((longlong)param_2 + 0x55) >> 0x18);
    uStack_49 = 1;
    uStack_4a = 1;
    pppppppuStack_110 = (ulonglong *******)0x14198d7e9;
    uStack_98._0_1_ = cVar6;
    pdb_1414ff1a0(&pppppppuStack_b0,&uStack_98);
    arg1 = pppppppuStack_a8;
    pppppppuVar39 = pppppppuStack_58;
    if (SBORROW8(0,(longlong)pppppppuStack_b0)) goto joined_r0x00014198d9ab;
    uStack_b8 = pppppppuStack_a0;
    uStack_c8 = pppppppuStack_b0;
    uStack_c0 = pppppppuStack_a8;
    goto LAB_14198d778;
  case 1:
    if (pppppppuStack_68 != (ulonglong *******)0x0) {
      pppppppuStack_b0 = (ulonglong *******)&UNK_14335ca4d;
      pppppppuStack_a8 = (ulonglong *******)0xa;
      uStack_98._0_1_ = (char)&pppppppuStack_b0;
      uStack_98._1_1_ = (byte)((ulonglong)&pppppppuStack_b0 >> 8);
      uStack_98._2_2_ = (undefined2)((ulonglong)&pppppppuStack_b0 >> 0x10);
      uStack_98._4_4_ = (undefined4)((ulonglong)&pppppppuStack_b0 >> 0x20);
      uStack_90 = 0x402ed400;
      iStack_8c = 1;
      uStack_49 = 1;
      uStack_4a = 1;
      pppppppuStack_110 = (ulonglong *******)0x14198dcc8;
      arg1 = (ulonglong *******)pdb_142d872f0(&UNK_143045061,&uStack_98);
      pppppppuVar39 = pppppppuStack_58;
      goto joined_r0x00014198d9ab;
    }
    cVar6 = *(char *)(param_2 + 9);
    *(undefined1 *)(param_2 + 9) = 6;
    if (cVar6 == '\x06') {
      uStack_49 = 1;
      uStack_4a = 1;
      pppppppuStack_110 = (ulonglong *******)0x14198d8dc;
      arg1 = (ulonglong *******)pdb_142d86fc0(&UNK_14339ab08,0x10);
      uVar13 = 1;
    }
    else {
      uVar7 = *puVar1;
      uStack_84 = *(uint *)((longlong)param_2 + 0x5c);
      uStack_80 = *(uint *)(param_2 + 0xc);
      uStack_7c = *(uint *)((longlong)param_2 + 100);
      uStack_98._1_1_ = (byte)uVar7;
      uStack_98._2_2_ = (undefined2)((uint)uVar7 >> 8);
      uStack_98._5_3_ = (undefined3)*(undefined4 *)((longlong)param_2 + 0x4d);
      uStack_98._4_4_ = CONCAT31(uStack_98._5_3_,(char)((uint)uVar7 >> 0x18));
      uStack_90._1_3_ = (undefined3)*(undefined4 *)((longlong)param_2 + 0x51);
      uStack_90 = CONCAT31(uStack_90._1_3_,
                           (char)((uint)*(undefined4 *)((longlong)param_2 + 0x4d) >> 0x18));
      iStack_8c._1_3_ = (undefined3)*(undefined4 *)((longlong)param_2 + 0x55);
      iStack_8c = CONCAT31(iStack_8c._1_3_,
                           (char)((uint)*(undefined4 *)((longlong)param_2 + 0x51) >> 0x18));
      uStack_88._1_3_ = (undefined3)(*(uint *)(param_2 + 0xb) >> 8);
      uStack_88._0_1_ = (undefined1)((uint)*(undefined4 *)((longlong)param_2 + 0x55) >> 0x18);
      uStack_49 = 1;
      uStack_4a = 1;
      pppppppuStack_110 = (ulonglong *******)0x14198d96d;
      uStack_98._0_1_ = cVar6;
      uVar13 = pdb_140c789b0(&uStack_98);
    }
    pppppppuVar39 = pppppppuStack_58;
    if ((uVar13 & 1) != 0) goto joined_r0x00014198d9ab;
    pppppppuStack_60 = arg1;
    if (pppppppuStack_68 != (ulonglong *******)0x0) {
      LOCK();
      *pppppppuStack_68 = (ulonglong ******)((longlong)*pppppppuStack_68 - 1);
      UNLOCK();
      if (*pppppppuStack_68 == (ulonglong ******)0x0) {
        pppppppuStack_110 = (ulonglong *******)0x14198d98e;
        pdb_140c7bbc0(&pppppppuStack_68);
      }
    }
    pppppppuStack_68 = pppppppuStack_60;
    goto LAB_14198d778;
  case 2:
    if (pppppppuStack_70 != (ulonglong *******)0x0) {
      pppppppuStack_b0 = (ulonglong *******)&UNK_14335ca57;
      pppppppuStack_a8 = (ulonglong *******)0x6;
      uStack_98._0_1_ = (char)&pppppppuStack_b0;
      uStack_98._1_1_ = (byte)((ulonglong)&pppppppuStack_b0 >> 8);
      uStack_98._2_2_ = (undefined2)((ulonglong)&pppppppuStack_b0 >> 0x10);
      uStack_98._4_4_ = (undefined4)((ulonglong)&pppppppuStack_b0 >> 0x20);
      uStack_90 = 0x402ed400;
      iStack_8c = 1;
      uStack_49 = 1;
      uStack_4a = 1;
      pppppppuStack_110 = (ulonglong *******)0x14198dc40;
      arg1 = (ulonglong *******)pdb_142d872f0(&UNK_143045061,&uStack_98);
      pppppppuVar39 = pppppppuStack_58;
      goto joined_r0x00014198d9ab;
    }
    cVar6 = *(char *)(param_2 + 9);
    *(undefined1 *)(param_2 + 9) = 6;
    if (cVar6 == '\x06') {
      uStack_49 = 1;
      uStack_4a = 1;
      pppppppuStack_110 = (ulonglong *******)0x14198d850;
      arg1 = (ulonglong *******)pdb_142d86fc0(&UNK_14339ab08,0x10);
      uVar13 = 1;
    }
    else {
      uVar7 = *puVar1;
      uStack_84 = *(uint *)((longlong)param_2 + 0x5c);
      uStack_80 = *(uint *)(param_2 + 0xc);
      uStack_7c = *(uint *)((longlong)param_2 + 100);
      uStack_98._1_1_ = (byte)uVar7;
      uStack_98._2_2_ = (undefined2)((uint)uVar7 >> 8);
      uStack_98._5_3_ = (undefined3)*(undefined4 *)((longlong)param_2 + 0x4d);
      uStack_98._4_4_ = CONCAT31(uStack_98._5_3_,(char)((uint)uVar7 >> 0x18));
      uStack_90._1_3_ = (undefined3)*(undefined4 *)((longlong)param_2 + 0x51);
      uStack_90 = CONCAT31(uStack_90._1_3_,
                           (char)((uint)*(undefined4 *)((longlong)param_2 + 0x4d) >> 0x18));
      iStack_8c._1_3_ = (undefined3)*(undefined4 *)((longlong)param_2 + 0x55);
      iStack_8c = CONCAT31(iStack_8c._1_3_,
                           (char)((uint)*(undefined4 *)((longlong)param_2 + 0x51) >> 0x18));
      uStack_88._1_3_ = (undefined3)(*(uint *)(param_2 + 0xb) >> 8);
      uStack_88._0_1_ = (undefined1)((uint)*(undefined4 *)((longlong)param_2 + 0x55) >> 0x18);
      uStack_49 = 1;
      uStack_4a = 1;
      pppppppuStack_110 = (ulonglong *******)0x14198d912;
      uStack_98._0_1_ = cVar6;
      uVar13 = pdb_140c78e90(&uStack_98);
    }
    pppppppuVar39 = pppppppuStack_58;
    if ((uVar13 & 1) != 0) goto joined_r0x00014198d9ab;
    pppppppuStack_60 = arg1;
    if (pppppppuStack_70 != (ulonglong *******)0x0) {
      LOCK();
      *pppppppuStack_70 = (ulonglong ******)((longlong)*pppppppuStack_70 - 1);
      UNLOCK();
      if (*pppppppuStack_70 == (ulonglong ******)0x0) {
        pppppppuStack_110 = (ulonglong *******)0x14198d93f;
        pdb_140c7a400(&pppppppuStack_70);
      }
    }
    pppppppuStack_70 = pppppppuStack_60;
    goto LAB_14198d778;
  case 3:
    cVar6 = *(char *)(param_2 + 9);
    *(undefined1 *)(param_2 + 9) = 6;
    if (cVar6 != '\x06') goto code_r0x00014198d870;
    uStack_49 = 1;
    uStack_4a = 1;
    pppppppuStack_110 = (ulonglong *******)0x14198da3d;
    arg1 = (ulonglong *******)pdb_142d86fc0(&UNK_14339ab08,0x10);
    pppppppuVar39 = pppppppuStack_58;
    goto joined_r0x00014198d9ab;
  case 4:
    if (!SBORROW8(0,(longlong)uStack_c8)) {
      uStack_98._0_1_ = (char)uStack_c8;
      uStack_98._1_1_ = (byte)((ulonglong)uStack_c8 >> 8);
      uStack_98._2_2_ = (undefined2)((ulonglong)uStack_c8 >> 0x10);
      uStack_98._4_4_ = uStack_c8._4_4_;
      uStack_90 = (undefined4)uStack_c0;
      iStack_8c = uStack_c0._4_4_;
      pppppppuVar18 = pppppppuStack_68;
      uVar27 = 0;
      uStack_88 = (undefined4)uStack_b8;
      uStack_84 = uStack_b8._4_4_;
      if (pppppppuStack_68 == (ulonglong *******)0x0) {
        pppppppuStack_60 = (ulonglong *******)CONCAT71(pppppppuStack_60._1_7_,1);
        pppppppuStack_110 = (ulonglong *******)0x14198db56;
        pppppppuVar18 = (ulonglong *******)pdb_140c7d380();
        uVar27 = pppppppuStack_60._0_1_;
      }
      pppppppuVar15 = pppppppuStack_70;
      if (pppppppuStack_70 == (ulonglong *******)0x0) {
        pppppppuStack_110 = (ulonglong *******)0x14198db70;
        pppppppuStack_b0 = pppppppuVar18;
        pdb_14007ee60();
        pppppppuStack_110 = (ulonglong *******)0x14198db7f;
        pppppppuVar15 = (ulonglong *******)pub_1406abab0(0x60,8);
        if (pppppppuVar15 == (ulonglong *******)0x0) {
          pppppppuStack_60 = (ulonglong *******)CONCAT71(pppppppuStack_60._1_7_,uVar27);
                    /* WARNING: Subroutine does not return */
          pppppppuStack_110 = (ulonglong *******)0x14198dce4;
          pppppppuStack_58 = pppppppuVar18;
          pdb_142dc7e11(8,0x60);
        }
        pppppppuVar15[8] = (ulonglong ******)0x0;
        pppppppuVar15[9] = (ulonglong ******)0x0;
        *pppppppuVar15 = (ulonglong ******)0x1;
        pppppppuVar15[1] = (ulonglong ******)0x1;
        pppppppuVar15[2] = (ulonglong ******)0x0;
        pppppppuVar15[4] = (ulonglong ******)0x0;
        pppppppuVar15[6] = (ulonglong ******)0x0;
        pppppppuVar15[7] = (ulonglong ******)0x4;
        pppppppuVar15[10] = (ulonglong ******)0x4;
        pppppppuVar15[0xb] = (ulonglong ******)0x0;
      }
      ppppppuVar25 = (ulonglong ******)
                     CONCAT44(uStack_98._4_4_,
                              CONCAT22(uStack_98._2_2_,CONCAT11(uStack_98._1_1_,(char)uStack_98)));
      arg1 = (ulonglong *******)CONCAT44(iStack_8c,uStack_90);
      if (!SBORROW8(0,(longlong)ppppppuVar25)) {
        *pppppppuVar39 = ppppppuVar25;
        pppppppuVar39[1] = (ulonglong ******)arg1;
        pppppppuVar39[2] = (ulonglong ******)CONCAT44(uStack_84,uStack_88);
        pppppppuVar39[3] = (ulonglong ******)pppppppuVar18;
        pppppppuVar39[4] = (ulonglong ******)pppppppuVar15;
        return pppppppuVar39;
      }
      goto LAB_14198db06;
    }
    pppppppuStack_e8 = (ulonglong *******)&UNK_14335ca48;
    pppppppuStack_e0 = (ulonglong *******)0x5;
    pppppppuStack_b0 = (ulonglong *******)&pppppppuStack_e8;
    pppppppuStack_a8 = (ulonglong *******)pdb_1402ed400;
    uStack_49 = 1;
    uStack_4a = 1;
    pppppppuStack_110 = (ulonglong *******)0x14198da21;
    arg1 = (ulonglong *******)pdb_142d872f0(&UNK_143044fe5,&pppppppuStack_b0);
    pppppppuVar39 = pppppppuStack_58;
    goto joined_r0x00014198d9ab;
  case 5:
    pppppppuVar43 = (ulonglong *******)&pppppppuStack_110;
    pppppppuVar41 = (ulonglong *******)&pppppppuStack_110;
    pppppppuVar39 = (ulonglong *******)&pppppppuStack_110;
    pppppppuVar15 = (ulonglong *******)&pppppppuStack_110;
    pppppppuVar36 = (ulonglong *******)&pppppppuStack_110;
    pppppppuVar32 = (ulonglong *******)&pppppppuStack_110;
    pppppppuVar29 = (ulonglong *******)&pppppppuStack_110;
    pppppppuVar33 = (ulonglong *******)&pppppppuStack_110;
    pppppppuVar31 = (ulonglong *******)&pppppppuStack_110;
    pppppppuVar30 = (ulonglong *******)&pppppppuStack_110;
    pppppppuVar34 = (ulonglong *******)&pppppppuStack_110;
    pppppppuVar28 = (ulonglong *******)&pppppppuStack_110;
    pppppppuStack_110 = pppppppuVar14;
    arg1 = (ulonglong *******)&UNK_14335cf1c;
    uVar23 = (ulonglong)*(int *)(&UNK_14335cf1c + ((ulonglong)arg0 & 0xff) * 4);
    pppppppuVar17 = (ulonglong *******)(&UNK_14335cf1c + uVar23);
    bVar20 = (byte)pppppppuVar17;
    iVar21 = (int)pppppppuVar17;
    pppppppuVar24 = pppppppuVar17;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch((ulonglong)arg0 & 0xff) {
    case 0:
      if (bVar9 == 6) {
        pppppppuStack_f0 = (ulonglong *******)CONCAT71(pppppppuStack_f0._1_7_,0xd);
        puStack_118 = (undefined *)0x14198e6b1;
        arg1 = (ulonglong *******)pdb_142db90e0(&pppppppuStack_f0,&UNK_14339ab48,&UNK_143399fa8);
        _UNK_14335cf08 = (ulonglong *******)0x10;
        goto code_r0x00014198e54e;
      }
      pppppppuStack_e0 = pppppppuStack_b0;
      pppppppuStack_d8 = pppppppuStack_a8;
      goto code_r0x00014198e250;
    case 1:
      if (bVar9 == 6) {
        pppppppuStack_f0 = (ulonglong *******)CONCAT71(pppppppuStack_f0._1_7_,0xd);
        puStack_118 = (undefined *)0x14198e6df;
        arg1 = (ulonglong *******)pdb_142db90e0(&pppppppuStack_f0,&UNK_14339ab48,&UNK_143399fa8);
        uVar13 = 1;
      }
      else {
        puStack_118 = (undefined *)0x14198e448;
        uVar13 = pdb_140c788c0(&pppppppuStack_f0);
      }
      bVar46 = (uVar13 & 1) == 0;
      pppppppuVar14 = (ulonglong *******)0x10;
      arg0 = (ulonglong *******)0x1;
      break;
    case 2:
      if (bVar9 == 6) {
        pppppppuStack_f0 = (ulonglong *******)CONCAT71(pppppppuStack_f0._1_7_,0xd);
        puStack_118 = (undefined *)0x14198e633;
        arg1 = (ulonglong *******)pdb_142db90e0(&pppppppuStack_f0,&UNK_14339ab48,&UNK_143399fa8);
        uVar13 = 1;
      }
      else {
        puStack_118 = (undefined *)0x14198e37b;
        uVar13 = pdb_140c788c0(&pppppppuStack_f0);
      }
      bVar46 = (uVar13 & 1) == 0;
      pppppppuVar14 = (ulonglong *******)0x10;
      arg0 = (ulonglong *******)0x2;
      break;
    case 3:
      if (bVar9 == 6) {
        pppppppuStack_f0 = (ulonglong *******)CONCAT71(pppppppuStack_f0._1_7_,0xd);
        puStack_118 = (undefined *)0x14198e687;
        arg1 = (ulonglong *******)pdb_142db90e0(&pppppppuStack_f0,&UNK_14339ab48,&UNK_143399fa8);
        uVar13 = 1;
      }
      else {
        puStack_118 = (undefined *)0x14198e3e1;
        uVar13 = pdb_140c788c0(&pppppppuStack_f0);
      }
      bVar46 = (uVar13 & 1) == 0;
      pppppppuVar14 = (ulonglong *******)0x10;
      arg0 = (ulonglong *******)0x3;
      break;
    case 4:
      if (bVar9 == 6) {
        pppppppuStack_f0 = (ulonglong *******)CONCAT71(pppppppuStack_f0._1_7_,0xd);
        puStack_118 = (undefined *)0x14198e5b5;
        arg1 = (ulonglong *******)pdb_142db90e0(&pppppppuStack_f0,&UNK_14339ab48,&UNK_143399fa8);
        uVar13 = 1;
      }
      else {
        puStack_118 = (undefined *)0x14198e2d8;
        uVar13 = pdb_140c788c0(&pppppppuStack_f0);
      }
      bVar46 = (uVar13 & 1) == 0;
      pppppppuVar14 = (ulonglong *******)0x10;
      arg0 = (ulonglong *******)0x4;
      break;
    case 5:
      if (bVar9 == 6) {
        pppppppuStack_f0 = (ulonglong *******)CONCAT71(pppppppuStack_f0._1_7_,0xd);
        puStack_118 = (undefined *)0x14198e709;
        arg1 = (ulonglong *******)pdb_142db90e0(&pppppppuStack_f0,&UNK_14339ab48,&UNK_143399fa8);
        uVar13 = 1;
      }
      else {
        puStack_118 = (undefined *)0x14198e47f;
        uVar13 = pdb_140c788c0(&pppppppuStack_f0);
      }
      bVar46 = (uVar13 & 1) == 0;
      pppppppuVar14 = (ulonglong *******)0x10;
      arg0 = (ulonglong *******)0x5;
      break;
    case 6:
      if (bVar9 == 6) {
        pppppppuStack_f0 = (ulonglong *******)CONCAT71(pppppppuStack_f0._1_7_,0xd);
        arg0 = (ulonglong *******)&pppppppuStack_f0;
        puStack_118 = (undefined *)0x14198e733;
        arg1 = (ulonglong *******)pdb_142db90e0(arg0,&UNK_14339ab48,&UNK_143399fa8);
        pppppppuVar14 = (ulonglong *******)0x1;
      }
      else {
        arg0 = (ulonglong *******)&pppppppuStack_f0;
        puStack_118 = (undefined *)0x14198e4ca;
        pppppppuVar14 = (ulonglong *******)pdb_140c788c0();
      }
      goto code_r0x00014198e4c4;
    case 7:
      puStack_118 = (undefined *)0x14198e401;
      pdb_141bec2a0(&pppppppuStack_f0,&uStack_c0);
      if (pppppppuStack_f0 == (ulonglong *******)0x0) {
        arg0 = (ulonglong *******)0x10;
        _UNK_14335cf10 = pppppppuStack_e8;
        goto code_r0x00014198e512;
      }
      goto code_r0x00014198e414;
    case 8:
      if (bVar9 == 6) {
        pppppppuStack_f0 = (ulonglong *******)CONCAT71(pppppppuStack_f0._1_7_,0xd);
        goto code_r0x00014198e772;
      }
      puStack_118 = (undefined *)0x14198e544;
      uVar11 = pdb_140c79450(&pppppppuStack_f0);
      goto code_r0x00014198e544;
    case 9:
      if (bVar9 == 6) {
        pppppppuStack_f0 = (ulonglong *******)CONCAT71(pppppppuStack_f0._1_7_,0xd);
        puStack_118 = (undefined *)0x14198e609;
        arg1 = (ulonglong *******)pdb_142db90e0(&pppppppuStack_f0,&UNK_14339ab48,&UNK_143399fa8);
        uVar13 = 1;
      }
      else {
        puStack_118 = (undefined *)0x14198e344;
        uVar13 = pdb_140c78d60(&pppppppuStack_f0);
      }
      bVar46 = (uVar13 & 1) == 0;
      pppppppuVar14 = (ulonglong *******)0x10;
      arg0 = (ulonglong *******)0x9;
      break;
    case 10:
      if (bVar9 == 6) {
        pppppppuStack_f0 = (ulonglong *******)CONCAT71(pppppppuStack_f0._1_7_,0xd);
        puStack_118 = (undefined *)0x14198e75d;
        arg1 = (ulonglong *******)pdb_142db90e0(&pppppppuStack_f0,&UNK_14339ab48,&UNK_143399fa8);
        uVar13 = 1;
      }
      else {
        puStack_118 = (undefined *)0x14198e4fe;
        uVar13 = pdb_140c78790(&pppppppuStack_f0);
      }
      bVar46 = (uVar13 & 1) == 0;
      pppppppuVar14 = (ulonglong *******)0x10;
      arg0 = (ulonglong *******)0xa;
      break;
    case 0xb:
      goto code_r0x00014198e29e;
    case 0xc:
      if (bVar9 != 6) {
        pppppppuStack_e0 = pppppppuStack_b0;
        pppppppuStack_d8 = pppppppuStack_a8;
        goto code_r0x00014198e30a;
      }
      pppppppuStack_f0 = (ulonglong *******)CONCAT71(pppppppuStack_f0._1_7_,0xd);
      puStack_118 = (undefined *)0x14198e5df;
      arg1 = (ulonglong *******)pdb_142db90e0(&pppppppuStack_f0,&UNK_14339ab48,&UNK_143399fa8);
      uVar11 = 1;
      goto code_r0x00014198e30f;
    case 0xd:
      goto code_r0x00014198e492;
    case 0xe:
      if (bVar9 != 6) {
        pppppppuStack_e0 = pppppppuStack_b0;
        pppppppuStack_d8 = pppppppuStack_a8;
        goto code_r0x00014198e27f;
      }
      pppppppuStack_f0 = (ulonglong *******)CONCAT71(pppppppuStack_f0._1_7_,0xd);
      puStack_118 = (undefined *)0x14198e58b;
      arg1 = (ulonglong *******)pdb_142db90e0(&pppppppuStack_f0,&UNK_14339ab48,&UNK_143399fa8);
      uVar11 = 1;
      goto code_r0x00014198e284;
    case 0xf:
      if (bVar9 != 6) {
        pppppppuStack_e0 = pppppppuStack_b0;
        pppppppuStack_d8 = pppppppuStack_a8;
        goto code_r0x00014198e3ad;
      }
      pppppppuStack_f0 = (ulonglong *******)CONCAT71(pppppppuStack_f0._1_7_,0xd);
      puStack_118 = (undefined *)0x14198e65d;
      arg1 = (ulonglong *******)pdb_142db90e0(&pppppppuStack_f0,&UNK_14339ab48,&UNK_143399fa8);
      lVar16 = 1;
      goto code_r0x00014198e3b2;
    case 0x10:
      *(int *)(&UNK_14335ce91 + uVar13) = *(int *)(&UNK_14335ce91 + uVar13) + iVar21;
      return pppppppuVar14;
    case 0x11:
      (&UNK_14335cf3b)[uVar13] = (&UNK_14335cf3b)[uVar13] + bVar20;
      (&UNK_14335ce9d)[uVar23] = (&UNK_14335ce9d)[uVar23] | bVar20;
      UNRECOVERED_JUMPTABLE = (code *)swi(1);
      pppppppuVar18 = (ulonglong *******)(*UNRECOVERED_JUMPTABLE)();
      return pppppppuVar18;
    case 0x12:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0x13:
      return pppppppuVar14;
    case 0x14:
      pppppppuVar14 = (ulonglong *******)CONCAT71(uVar19,bVar9 + 0x41);
      pppppppuVar15 = (ulonglong *******)&pppppppuStack_110;
code_r0x00014198e9d0:
      arg0 = arg1;
      if (*(char *)((longlong)arg1 + 4) == 'r' && *(uint *)arg1 == 0x6f6c6f43) {
        *(char *)((longlong)pppppppuVar14 + 1) = '\t';
        goto code_r0x00014198ea74;
      }
      goto LAB_14198ea1a;
    case 0x15:
      pppppppuVar14 = (ulonglong *******)((ulonglong)pppppppuVar14 | 0x89);
      pppppppuVar18 = (ulonglong *******)&pppppppuStack_110;
code_r0x00014198e7b6:
      pppppppuVar15 = pppppppuVar18;
      arg0 = arg1;
      switch(&UNK_14335cf5c + *(int *)(&UNK_14335cf5c + (longlong)pppppppuVar17 * 4)) {
      case (undefined *)0x14198e7c6:
        if (*(uint *)arg1 == 0x68746150) {
          *(char *)((longlong)pppppppuVar14 + 1) = '\x01';
          goto code_r0x00014198ea74;
        }
        bVar46 = *(uint *)arg1 == 0x6c6c6157;
        goto code_r0x00014198e7d8;
      case (undefined *)0x14198e7ff:
        if (*(char *)(arg1 + 1) == 'r' && *arg1 == (ulonglong ******)0x6f7461726f636544)
        goto code_r0x00014198e81e;
        break;
      case (undefined *)0x14198e827:
        arg0 = (ulonglong *******)0x7473656c62626f43;
        if (*(uint *)(arg1 + 1) != 0x31656e6f || *arg1 != (ulonglong ******)0x7473656c62626f43) {
          param_4 = (ulonglong *******)*arg1;
          ppuVar35 = (undefined **)pppppppuVar15;
          goto code_r0x00014198e84a;
        }
        goto code_r0x00014198ea4c;
      case (undefined *)0x14198e89e:
        if (*(int *)((longlong)arg1 + 3) == 0x6e696172 && *(uint *)arg1 == 0x72726554) {
          *(char *)((longlong)pppppppuVar14 + 1) = '\0';
          goto code_r0x00014198ea74;
        }
        break;
      case (undefined *)0x14198e8c1:
        if (*(longlong *)((longlong)arg1 + 3) != 0x3556726f7461726f ||
            *arg1 != (ulonglong ******)0x6f7461726f636544) goto code_r0x00014198e8e5;
        goto code_r0x00014198ea14;
      case (undefined *)0x14198e912:
        if (*(short *)((longlong)arg1 + 4) == 0x6e65 && *(uint *)arg1 == 0x64726147) {
          *(char *)((longlong)pppppppuVar14 + 1) = '\x06';
          goto code_r0x00014198ea74;
        }
        if (*(short *)((longlong)arg1 + 4) == 0x7372 && *(uint *)arg1 == 0x69617453) {
          *(char *)((longlong)pppppppuVar14 + 1) = '\x0e';
          goto code_r0x00014198ea74;
        }
        break;
      case (undefined *)0x14198e953:
        arg0 = (ulonglong *******)0x6f7461726f636544;
        param_4 = (ulonglong *******)*arg1;
        pppppppuVar36 = pppppppuVar15;
code_r0x00014198e960:
        param_4 = (ulonglong *******)((ulonglong)param_4 ^ (ulonglong)arg0);
        goto code_r0x00014198e963;
      case (undefined *)0x14198e9b7:
        uVar11 = *(byte *)((longlong)arg1 + 4) ^ 0x72 | *(uint *)arg1 ^ 0x65746157;
        ppuVar37 = (undefined **)pppppppuVar15;
        goto code_r0x00014198e9ca;
      case (undefined *)0x14198e9ee:
        arg0 = (ulonglong *******)((ulonglong)*arg1 ^ 0x5377654e6c6c6157);
        param_4 = (ulonglong *******)(*(ulonglong *)((longlong)arg1 + 5) ^ 0x6d65747379537765);
        goto code_r0x00014198ea09;
      }
      goto LAB_14198ea1a;
    case 0x16:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0x17:
      out(_UNK_14335cf08,0xcf1c);
      pppppppuVar15 = (ulonglong *******)&pppppppuStack_110;
      if (0xfffffffebcca30e3 < uVar23) {
code_r0x00014198e8e5:
        bVar46 = *(longlong *)((longlong)arg1 + 3) == 0x72657474756c436f &&
                 *arg1 == (ulonglong ******)0x74756c436f747541;
        goto code_r0x00014198e903;
      }
      pppppppuVar15 = (ulonglong *******)&pppppppuStack_110;
      if (pppppppuVar17 == (ulonglong *******)0x0) {
        uVar27 = in(0xcf1c);
        *(undefined1 *)param_2 = uVar27;
        arg0 = (ulonglong *******)0x0;
        goto code_r0x00014198e960;
      }
      goto code_r0x00014198e886;
    case 0x18:
      cVar6 = *(char *)pppppppuVar14;
      pppppppuVar14 = (ulonglong *******)CONCAT71(uVar19,bVar9 + cVar6);
      pcVar5 = (char *)(uVar23 + 0x1a8a82356);
      *pcVar5 = *pcVar5 + bVar9 + cVar6;
      arg0 = arg1;
      if (*pcVar5 != '\0') goto LAB_14198ea1a;
code_r0x00014198e7f6:
      *(char *)((longlong)pppppppuVar14 + 1) = '\f';
      goto code_r0x00014198ea74;
    case 0x19:
      goto code_r0x00014198e9ae;
    case 0x1a:
      goto code_r0x00014198ea3a;
    default:
      *(byte *)pppppppuVar14 = *(char *)pppppppuVar14 + bVar9;
      goto code_r0x00014198eb0d;
    case 0x1e:
      UNK_14335cecb = 0;
      UNRECOVERED_JUMPTABLE = (code *)swi(3);
      pppppppuVar18 = (ulonglong *******)(*UNRECOVERED_JUMPTABLE)();
      return pppppppuVar18;
    case 0x1f:
      if (param_3 ==
          (ulonglong *******)
          CONCAT26(_UNK_14335cf25,CONCAT15(UNK_14335cf24,CONCAT41(_UNK_14335cf20,UNK_14335cf1f))) &&
          pppppppuVar17 == (ulonglong *******)0x0) goto code_r0x00014198eada;
      goto LAB_14198eb89;
    case 0x20:
      puStack_118 = &UNK_14335cf1c;
      pppppppuVar14 = (ulonglong *******)CONCAT71(uVar19,bVar9 + 0x81);
      while (arg0 = (ulonglong *******)0x0, pppppppuVar17 != (ulonglong *******)0x0) {
        pppppppuVar17 = (ulonglong *******)((longlong)pppppppuVar17 + -1);
        uVar11 = in(0xcf1c);
        *(uint *)param_2 = uVar11;
        param_2 = (ulonglong *******)((longlong)param_2 + 4);
      }
code_r0x00014198eaf1:
      *(char *)arg0 = *(char *)arg0 + (char)arg0;
      return pppppppuVar14;
    case 0x22:
      return pppppppuVar14;
    case 0x23:
      _UNK_14335cf1c = _UNK_14335cf1c + uVar10;
code_r0x00014198ea4c:
      *(char *)((longlong)pppppppuVar14 + 1) = '\x02';
      goto code_r0x00014198ea74;
    case 0x27:
      pppppppuVar14 = (ulonglong *******)(ulonglong)(uVar10 + iVar21);
      goto code_r0x00014198ea89;
    case 0x28:
      arg1 = (ulonglong *******)
             CONCAT62(0x14335,CONCAT11((&UNK_14335cf50)[(longlong)pppppppuVar14 * 2 + uVar13] | 0xcf
                                       ,0x1c));
      if (*(longlong *)(unaff_GS_OFFSET + (longlong)arg1) == 0x7265764f) {
LAB_14198ec27:
        (&UNK_14335cf09)[uVar13] = 2;
LAB_14198ec2b:
        *(char *)pppppppuVar14 = '\0';
        return pppppppuVar14;
      }
      goto LAB_14198ec3b;
    case 0x29:
      *(byte *)(uVar23 + 0x18b3e571d) = *(byte *)(uVar23 + 0x18b3e571d) | (byte)&uStack_98;
      goto code_r0x00014198ec5f;
    case 0x2a:
    case 0x2d:
    case 0x2e:
      goto code_r0x00014198ed3f;
    case 0x2b:
      *(uint *)pppppppuVar14 = *(uint *)pppppppuVar14 + uVar10;
      (&UNK_14335cec1)[uVar13] = (&UNK_14335cec1)[uVar13] + bVar20;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0x2c:
      goto code_r0x00014198ecef;
    case 0x2f:
      ppuVar40 = &puStack_118;
      puStack_118 = (undefined *)0x4c31305f;
      pppppppuVar14 =
           (ulonglong *******)
           (ulonglong)(uVar10 ^ CONCAT22(_UNK_14335cf25,CONCAT11(UNK_14335cf24,UNK_14335cf23)));
      goto code_r0x00014198ed24;
    case 0x30:
      if (0xfffffffebcca30e3 < uVar23) {
        pppppppuVar14 = (ulonglong *******)CONCAT71(uVar19,bVar9 + 0x81);
        goto code_r0x00014198ec80;
      }
      if (pppppppuVar17 != (ulonglong *******)0x0) {
        pppppppuVar39 = (ulonglong *******)&pppppppuStack_110;
        if (UNK_14335cf24 == 'e' && iVar21 == _UNK_14335cf1c) goto LAB_14198ec27;
        goto LAB_14198ec3b;
      }
      goto code_r0x00014198ec5f;
    case 0x31:
code_r0x00014198ec80:
      *(char *)((longlong)pppppppuVar14 + -0x73) =
           *(char *)((longlong)pppppppuVar14 + -0x73) + bVar20;
      UNRECOVERED_JUMPTABLE =
           (code *)((longlong)(int)*(uint *)((longlong)pppppppuVar17 + (longlong)param_3 * 4) +
                   (longlong)pppppppuVar17);
                    /* WARNING: Could not recover jumptable at 0x00014198ec8f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      pppppppuVar18 =
           (ulonglong *******)
           (*UNRECOVERED_JUMPTABLE)(pppppppuVar17,&UNK_14335cf1c,UNRECOVERED_JUMPTABLE);
      return pppppppuVar18;
    case 0x32:
    case 0x33:
    case 0x34:
    case 0x38:
      pppppppuVar24 = (ulonglong *******)*pppppppuVar17;
      param_3 = pppppppuVar17;
    case 0x37:
      if (pppppppuVar24 != (ulonglong *******)0x8000000000000001) {
        uStack_98._0_1_ = (char)pppppppuVar24;
        uStack_98._1_1_ = (byte)((ulonglong)pppppppuVar24 >> 8);
        uStack_98._2_2_ = (undefined2)((ulonglong)pppppppuVar24 >> 0x10);
        uStack_98._4_4_ = (undefined4)((ulonglong)pppppppuVar24 >> 0x20);
        puStack_118 = &UNK_14198f098;
        pppppppuStack_a0 = param_3;
        pdb_1409a45e0(param_3 + 3);
        ppppppuVar25 = (ulonglong ******)
                       CONCAT44(uStack_98._4_4_,
                                CONCAT22(uStack_98._2_2_,CONCAT11(uStack_98._1_1_,(char)uStack_98)))
        ;
        if (SBORROW8(0,(longlong)ppppppuVar25)) {
          return pppppppuStack_a0;
        }
        if (ppppppuVar25 == (ulonglong ******)0x0) {
          return pppppppuStack_a0;
        }
        ppppppuVar22 = pppppppuStack_a0[1];
        uVar13 = 1;
        goto code_r0x0001406abac0;
      }
      bVar9 = *(byte *)(param_3 + 1);
      if ((ulonglong)bVar9 < 7) {
        pppppppuVar18 =
             (ulonglong *******)(&UNK_14335cfe4 + *(int *)(&UNK_14335cfe4 + (ulonglong)bVar9 * 4));
        switch(bVar9) {
        case 3:
          ppppppuVar25 = param_3[2];
          if (ppppppuVar25 != (ulonglong ******)0x0) {
            ppppppuVar22 = param_3[3];
            uVar13 = 1;
code_r0x0001406abac0:
            pppppppuStack_d8 = (ulonglong *******)&UNK_14335cf08;
            ppppppuVar44 = ppppppuVar22;
            if (0x10 < uVar13) {
              ppppppuVar44 = (ulonglong ******)ppppppuVar22[-1];
            }
            puStack_108 = &UNK_140f3c37e;
            uVar12 = GetProcessHeap(ppppppuVar22,ppppppuVar25);
                    /* WARNING: Could not recover jumptable at 0x000140f3c38c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            pppppppuVar18 = (ulonglong *******)HeapFree(uVar12,0,ppppppuVar44);
            return pppppppuVar18;
          }
          break;
        case 4:
          ppppppuVar25 = param_3[3];
          uStack_98._0_1_ = (char)ppppppuVar25;
          uStack_98._1_1_ = (byte)((ulonglong)ppppppuVar25 >> 8);
          uStack_98._2_2_ = (undefined2)((ulonglong)ppppppuVar25 >> 0x10);
          uStack_98._4_4_ = (undefined4)((ulonglong)ppppppuVar25 >> 0x20);
          puStack_118 = &UNK_14198f0d4;
          pppppppuStack_a0 = param_3;
          pdb_14098ae50(ppppppuVar25,param_3[4]);
          pppppppuVar18 = pppppppuStack_a0;
          if (pppppppuStack_a0[2] != (ulonglong ******)0x0) {
            ppppppuVar25 = (ulonglong ******)((longlong)pppppppuStack_a0[2] << 5);
            uVar13 = 8;
            ppppppuVar22 = (ulonglong ******)
                           CONCAT44(uStack_98._4_4_,
                                    CONCAT22(uStack_98._2_2_,
                                             CONCAT11(uStack_98._1_1_,(char)uStack_98)));
            goto code_r0x0001406abac0;
          }
          break;
        case 5:
          goto code_r0x00014198f100;
        }
        return pppppppuVar18;
      }
code_r0x00014198f100:
      pppppppuStack_d8 = (ulonglong *******)&UNK_14335cf08;
      pppppppuStack_e8 = (ulonglong *******)0x0;
      pppppppuStack_f0 = (ulonglong *******)0xfffffffffffffffe;
      ppppppuVar25 = param_3[2];
      if (ppppppuVar25 == (ulonglong ******)0x0) {
        ppppppuStack_120 = (ulonglong ******)0x0;
      }
      else {
        ppppppuStack_148 = param_3[3];
        ppppppuStack_120 = param_3[4];
        auStack_160[1] = 0;
        uStack_138 = 0;
        ppppppuStack_150 = ppppppuVar25;
        ppppppuStack_130 = ppppppuVar25;
        ppppppuStack_128 = ppppppuStack_148;
      }
      auStack_160[0] = (ulonglong)(ppppppuVar25 != (ulonglong ******)0x0);
      uStack_140 = auStack_160[0];
      pppppppuStack_e0 = param_2;
      pdb_14192c4b0(&puStack_118,auStack_160);
      if (puStack_118 != (undefined *)0x0) {
        do {
          puStack_100 = puStack_118 + (longlong)puStack_108 * 0x20;
          puStack_f8 = auStack_160;
          if (*(ulonglong *)(puStack_118 + (longlong)puStack_108 * 0x18 + 0x168) != 0) {
            pub_1406abac0(*(byte **)(puStack_118 + (longlong)puStack_108 * 0x18 + 0x170),
                          *(ulonglong *)(puStack_118 + (longlong)puStack_108 * 0x18 + 0x168),1);
          }
          pdb_140966d70(&puStack_100);
          pdb_14192c4b0(&puStack_118,auStack_160);
        } while (puStack_118 != (undefined *)0x0);
      }
      return (ulonglong *******)0x0;
    case 0x35:
      UNRECOVERED_JUMPTABLE = (code *)swi(3);
      pppppppuVar18 = (ulonglong *******)(*UNRECOVERED_JUMPTABLE)();
      return pppppppuVar18;
    case 0x36:
      UNRECOVERED_JUMPTABLE = (code *)swi(3);
      pppppppuVar18 = (ulonglong *******)(*UNRECOVERED_JUMPTABLE)();
      return pppppppuVar18;
    case 0x39:
      goto code_r0x00014198fbb5;
    case 0x3a:
      pbVar3 = (byte *)((longlong)param_3 + -0x3f);
      *pbVar3 = *pbVar3 >> 1 | *pbVar3 << 7;
      ppppppuVar25 = (ulonglong ******)(&UNK_14335cf1b + uVar23);
      pppppppuVar18 = (ulonglong *******)&pppppppuStack_110;
      if (ppppppuVar25 != (ulonglong ******)0x0) {
        *(byte *)pppppppuVar14 = *(char *)pppppppuVar14 + bVar9;
        pppppppuVar18 = (ulonglong *******)&pppppppuStack_110;
      }
      goto code_r0x00014198fbc2;
    case 0x3b:
      goto LAB_14198fb79;
    case 0x3c:
      puStack_100 = &UNK_14335cf1c;
      goto code_r0x00014198fba5;
    case 0x3d:
      bVar46 = SBORROW8(0,(longlong)pppppppuVar17);
      goto code_r0x00014198fb5a;
    case 0x3e:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    goto code_r0x00014198e50a;
  case 6:
    (&UNK_14335ce93)[uVar13] = (&UNK_14335ce93)[uVar13] + bVar20;
    pppppppuStack_f0 = (ulonglong *******)((ulonglong)pppppppuVar14 & 0xffffffffffffff28);
    pppppppuStack_e8 = arg0;
code_r0x00014198e414:
    _UNK_14335cf18 = SUB84(pppppppuStack_e8,0);
    _UNK_14335cf1c = (int)((ulonglong)pppppppuStack_e8 >> 0x20);
    arg0 = (ulonglong *******)0x7;
    _UNK_14335cf10 = pppppppuStack_f0;
    goto code_r0x00014198e512;
  case 7:
    *(byte *)param_2 = bVar9;
                    /* WARNING: Could not emulate address calculation at 0x00014198e342 */
                    /* WARNING: Treating indirect jump as call */
    pppppppuVar18 = (ulonglong *******)(*(code *)(ulonglong)*(uint *)(&UNK_143468709 + uVar13))();
    return pppppppuVar18;
  case 8:
    (&UNK_14335ce95)[uVar13] = (&UNK_14335ce95)[uVar13] & bVar20;
code_r0x00014198e3ad:
    *(undefined8 *)((longlong)pppppppuVar32 + -8) = 0x14198e3b2;
    lVar16 = pdb_140c79080();
code_r0x00014198e3b2:
    _UNK_14335cf08 = (ulonglong *******)(lVar16 + 0xf);
    goto code_r0x00014198e54e;
  case 9:
code_r0x00014198e29e:
    *(undefined8 *)((longlong)pppppppuVar30 + -8) = 0x14198e2a9;
    pdb_141be9530(&UNK_14335cf08);
    return (ulonglong *******)&UNK_14335cf08;
  case 10:
    *(undefined1 *)param_2 = uVar27;
                    /* WARNING: Could not emulate address calculation at 0x00014198e446 */
                    /* WARNING: Treating indirect jump as call */
    pppppppuVar18 = (ulonglong *******)(*(code *)(ulonglong)*(uint *)(&UNK_143468709 + uVar13))();
    return pppppppuVar18;
  case 0xb:
code_r0x00014198e492:
    *(undefined8 *)((longlong)pppppppuVar33 + -8) = 0x14198e497;
    lVar16 = pdb_141bec310();
    _UNK_14335cf08 = (ulonglong *******)(lVar16 * 3 + 0xd);
    goto code_r0x00014198e54e;
  case 0xc:
    *(undefined1 *)param_2 = uVar27;
                    /* WARNING: Could not emulate address calculation at 0x00014198e3df */
                    /* WARNING: Treating indirect jump as call */
    pppppppuVar18 = (ulonglong *******)(*(code *)(ulonglong)*(uint *)(&UNK_143468709 + uVar13))();
    return pppppppuVar18;
  case 0xd:
    goto code_r0x00014198e50a;
  case 0xe:
code_r0x00014198e30a:
    *(undefined8 *)((longlong)pppppppuVar31 + -8) = 0x14198e30f;
    uVar11 = pdb_140c78c50();
code_r0x00014198e30f:
    _UNK_14335cf08 = (ulonglong *******)((ulonglong)uVar11 * 4 + 0xc);
    goto code_r0x00014198e54e;
  case 0xf:
code_r0x00014198e4c4:
    bVar46 = (byte)((byte)pppppppuVar14 & (byte)((ulonglong)arg0 >> 8)) == 0;
    pppppppuVar14 = (ulonglong *******)0x10;
    arg0 = (ulonglong *******)0x6;
code_r0x00014198e50a:
    _UNK_14335cf10 = arg1;
    if (!bVar46) {
      arg0 = pppppppuVar14;
    }
code_r0x00014198e512:
    _UNK_14335cf08 = arg0;
    return (ulonglong *******)&UNK_14335cf08;
  case 0x10:
code_r0x00014198e27f:
    *(undefined8 *)((longlong)pppppppuVar29 + -8) = 0x14198e284;
    uVar11 = pdb_140c79320();
code_r0x00014198e284:
    _UNK_14335cf08 = (ulonglong *******)((ulonglong)uVar11 * 2 + 0xe);
    goto code_r0x00014198e54e;
  case 0x11:
    *(uint *)param_2 = _UNK_14335cf08;
                    /* WARNING: Could not emulate address calculation at 0x00014198e2d6 */
                    /* WARNING: Treating indirect jump as call */
    pppppppuVar18 = (ulonglong *******)(*(code *)(ulonglong)*(uint *)(&UNK_143468709 + uVar13))();
    return pppppppuVar18;
  case 0x12:
    *(undefined1 *)param_2 = uVar27;
                    /* WARNING: Could not recover jumptable at 0x00014198e47d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pppppppuVar18 =
         (ulonglong *******)
         (*(code *)(ulonglong)
                   *(uint *)(CONCAT71(uVar19,bVar9 & (byte)((ulonglong)arg0 >> 8)) + 0x10b801))();
    return pppppppuVar18;
  case 0x13:
    (&UNK_14335ce95)[uVar13] = (&UNK_14335ce95)[uVar13] & bVar20;
code_r0x00014198e250:
    *(undefined8 *)((longlong)pppppppuVar28 + -8) = 0x14198e255;
    lVar16 = pdb_140c78ab0();
    _UNK_14335cf08 = (ulonglong *******)(lVar16 << 4);
code_r0x00014198e54e:
    _UNK_14335cf10 = arg1;
    return (ulonglong *******)&UNK_14335cf08;
  case 0x14:
    *(uint *)param_2 = _UNK_14335cf08;
                    /* WARNING: Could not emulate address calculation at 0x00014198e379 */
                    /* WARNING: Treating indirect jump as call */
    pppppppuVar18 = (ulonglong *******)(*(code *)(ulonglong)*(uint *)(&UNK_143468709 + uVar13))();
    return pppppppuVar18;
  case 0x15:
code_r0x00014198e772:
    *(undefined8 *)((longlong)pppppppuVar34 + -8) = 0x14198e787;
    arg1 = (ulonglong *******)pdb_142db90e0((undefined1 *)((longlong)pppppppuVar34 + 0x20));
    uVar11 = 1;
code_r0x00014198e544:
    _UNK_14335cf08 = (ulonglong *******)((ulonglong)uVar11 * 8 + 8);
    goto code_r0x00014198e54e;
  case 0x16:
code_r0x00014198e963:
    if (*(short *)(arg1 + 1) == 0x3572 && param_4 == (ulonglong *******)0x0) {
code_r0x00014198ea14:
      *(char *)((longlong)pppppppuVar14 + 1) = '\n';
      goto code_r0x00014198ea74;
    }
    if (*(short *)(arg1 + 1) != 0x3472 || arg0 != (ulonglong *******)*arg1) {
      arg0 = (ulonglong *******)0x696150746e616c50;
      ppuVar8 = (undefined **)pppppppuVar36;
      goto code_r0x00014198e99a;
    }
    goto code_r0x00014198e81e;
  case 0x17:
    *(uint *)pppppppuVar14 = *(uint *)pppppppuVar14 + uVar10;
    (&UNK_14335cec1)[uVar13] = (&UNK_14335cec1)[uVar13] + bVar20;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x18:
code_r0x00014198e84a:
    pcVar5 = (char *)((longlong)arg0 * 4 + 10);
    *pcVar5 = *pcVar5 + (char)arg0;
    if (*(uint *)(arg1 + 1) == 0x32656e6f && param_4 == arg0) {
      *(char *)((longlong)pppppppuVar14 + 1) = '\x03';
      goto code_r0x00014198ea74;
    }
    uVar13 = (ulonglong)arg0 ^ (ulonglong)*arg1;
    param_4 = (ulonglong *******)((ulonglong)*(uint *)(arg1 + 1) ^ 0x33656e6f);
    goto code_r0x00014198e873;
  case 0x19:
    pppppppuVar15 = (ulonglong *******)&puStack_108;
    if (0xfffffffebcca30f7 >= uVar13) {
code_r0x00014198e9ca:
      pppppppuVar15 = (ulonglong *******)ppuVar37;
      if (uVar11 == 0) {
        *(char *)((longlong)pppppppuVar14 + 1) = '\x05';
        goto code_r0x00014198ea74;
      }
      goto code_r0x00014198e9d0;
    }
code_r0x00014198ea09:
    bVar46 = arg0 == (ulonglong *******)0x0;
    arg0 = arg1;
    if (param_4 == (ulonglong *******)0x0 && bVar46) goto code_r0x00014198ea0e;
    break;
  case 0x1a:
    bVar46 = arg0 < (ulonglong *******)0xa;
    arg0 = arg1;
    pppppppuVar18 = (ulonglong *******)&puStack_108;
    if (bVar46) goto code_r0x00014198e7b6;
    break;
  case 0x1b:
    bVar46 = uVar11 + *(int *)((longlong)arg0 + 9) == 0;
    pppppppuVar15 = (ulonglong *******)&uStack_80;
code_r0x00014198e903:
    arg0 = arg1;
    if (bVar46) {
      *(char *)((longlong)pppppppuVar14 + 1) = '\r';
      goto code_r0x00014198ea74;
    }
    break;
  case 0x1c:
    uVar13 = (ulonglong)(uVar11 ^ 0x33656e6f);
    ppuVar35 = &puStack_108;
code_r0x00014198e873:
    if (param_4 == (ulonglong *******)0x0 && uVar13 == 0) {
      *(char *)((longlong)pppppppuVar14 + 1) = '\x04';
code_r0x00014198ea74:
      *(char *)pppppppuVar14 = '\0';
      return pppppppuVar14;
    }
    pppppppuVar17 = (ulonglong *******)0x6f7461726f636544;
    pppppppuVar15 = (ulonglong *******)ppuVar35;
code_r0x00014198e886:
    arg0 = arg1;
    if (*(uint *)(arg1 + 1) == 0x646c4f72 && pppppppuVar17 == (ulonglong *******)*arg1) {
code_r0x00014198e81e:
      *(char *)((longlong)pppppppuVar14 + 1) = '\v';
      goto code_r0x00014198ea74;
    }
    break;
  case 0x1d:
    bVar46 = (char)arg1 == *(char *)((longlong)param_2 + 0x61);
    uVar27 = in(uVar26);
    *(undefined1 *)param_2 = uVar27;
    uVar27 = in(uVar26);
    *(undefined1 *)((longlong)param_2 + 1) = uVar27;
    pppppppuVar15 = (ulonglong *******)&puStack_108;
code_r0x00014198e7d8:
    if (bVar46) {
code_r0x00014198ea0e:
      *(char *)((longlong)pppppppuVar14 + 1) = '\a';
      goto code_r0x00014198ea74;
    }
    if (*(uint *)arg1 == 0x666f6f52) {
      *(char *)((longlong)pppppppuVar14 + 1) = '\b';
      goto code_r0x00014198ea74;
    }
    arg0 = arg1;
    if (*(uint *)arg1 == 0x65657254) goto code_r0x00014198e7f6;
    break;
  case 0x1e:
code_r0x00014198e99a:
    pppppppuVar15 = (ulonglong *******)ppuVar8;
    bVar46 = arg0 == (ulonglong *******)*arg1;
    arg0 = arg1;
    if (*(short *)(arg1 + 1) == 0x746e && bVar46) {
code_r0x00014198e9ae:
      *(char *)((longlong)pppppppuVar14 + 1) = '\x0f';
      goto code_r0x00014198ea74;
    }
    break;
  case 0x1f:
    goto code_r0x00014198ea26;
  default:
code_r0x00014198eb0d:
    out(_UNK_14335cf08,(short)arg1);
    out(_UNK_14335cf0c,(short)arg1);
    if (*(longlong *)((longlong)arg1 + 7) == 0x656c7974735f666f &&
        pppppppuVar17 == (ulonglong *******)*arg1) {
      (&UNK_14335cf09)[uVar13] = 6;
      *(char *)pppppppuVar14 = '\0';
      return pppppppuVar14;
    }
LAB_14198eb89:
    (&UNK_14335cf09)[uVar13] = 7;
    *(char *)pppppppuVar14 = '\0';
    return pppppppuVar14;
  case 0x23:
    bVar9 = bVar9 | (byte)((ulonglong)arg1 >> 8);
    piVar4 = (int *)(((ulonglong)pppppppuVar18 & 0xffffffff) * 8);
    *piVar4 = *piVar4 + (int)CONCAT71(uVar19,bVar9);
    pppppppuVar14 = (ulonglong *******)CONCAT71(uVar19,bVar9 - 0x3a);
    *(uint *)pppppppuVar14 = *(uint *)pppppppuVar14 + uVar11;
    goto code_r0x00014198ea74;
  case 0x24:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x25:
    *(byte *)pppppppuVar14 = *(char *)pppppppuVar14 + bVar9;
code_r0x00014198eada:
    (&UNK_14335cf09)[uVar13] = 5;
    *(char *)pppppppuVar14 = '\0';
    return pppppppuVar14;
  case 0x27:
    uVar11 = in(uVar26);
    *(uint *)param_2 = uVar11;
    goto code_r0x00014198eaf1;
  case 0x28:
    goto code_r0x00014198ea3a;
  case 0x2c:
code_r0x00014198ea89:
    uVar11 = (uint)pppppppuVar14 | 0xf8870f;
    *(char *)(ulonglong)uVar11 = *(char *)(ulonglong)uVar11 + (char)uVar11;
                    /* WARNING: Could not recover jumptable at 0x00014198ea9f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pppppppuVar18 =
         (ulonglong *******)
         (*(code *)(&UNK_14335cf84 + *(int *)(&UNK_14335cf84 + (longlong)param_3 * 4)))();
    return pppppppuVar18;
  case 0x2d:
    pppppppuVar39 = (ulonglong *******)&puStack_108;
    if (bVar46) {
      (&UNK_14335cf09)[uVar13] = 1;
      goto LAB_14198ec2b;
    }
    goto LAB_14198ec3b;
  case 0x2e:
    return pppppppuVar14;
  case 0x2f:
  case 0x32:
  case 0x33:
code_r0x00014198ed3f:
    if (*(char *)(arg1 + 1) == '1' && *arg1 == (ulonglong ******)0x305f746867696568) {
code_r0x00014198ee05:
      (&UNK_14335cf09)[uVar13] = 1;
      *(char *)pppppppuVar14 = '\0';
      return pppppppuVar14;
    }
    if (*(char *)(arg1 + 1) == 'r' && *arg1 == (ulonglong ******)0x69645f6567646972) {
      (&UNK_14335cf09)[uVar13] = 4;
      *(char *)pppppppuVar14 = '\0';
      return pppppppuVar14;
    }
LAB_14198edf3:
    *(char *)((longlong)pppppppuVar14 + 1) = '\a';
    *(char *)pppppppuVar14 = '\0';
    return pppppppuVar14;
  case 0x30:
    if (*(short *)((longlong)arg1 + 4) == 0x7468 && uVar11 == 0) goto code_r0x00014198ee05;
    goto LAB_14198edf3;
  case 0x31:
    if (0xfffffffebcca30f7 < uVar13) goto code_r0x00014198ed46;
    uVar11 = in(uVar26);
    *(uint *)param_2 = uVar11;
    pppppppuVar17 = (ulonglong *******)((ulonglong)arg0 ^ (ulonglong)*arg1);
    param_3 = (ulonglong *******)(*(ulonglong *)((longlong)arg1 + 6) ^ 0x656c7974735f6d69);
code_r0x00014198ecef:
    if (param_3 == (ulonglong *******)0x0 && pppppppuVar17 == (ulonglong *******)0x0) {
      (&UNK_14335cf09)[uVar13] = 6;
      *(char *)pppppppuVar14 = '\0';
      return pppppppuVar14;
    }
    goto LAB_14198edf3;
  case 0x34:
    pbVar3 = &UNK_14335cec1 + uVar13;
    bVar9 = *pbVar3;
    *pbVar3 = *pbVar3 + bVar20;
    if (CARRY1(bVar9,bVar20)) {
      if (*(short *)(arg1 + 1) == 0x3130 && *arg1 == (ulonglong ******)0x5f656c69666f7270) {
        (&UNK_14335cf09)[uVar13] = 0;
        *(char *)pppppppuVar14 = '\0';
        return pppppppuVar14;
      }
      if (*(short *)(arg1 + 1) == 0x7465 && *arg1 == (ulonglong ******)0x7366666f5f706974) {
        (&UNK_14335cf09)[uVar13] = 2;
        *(char *)pppppppuVar14 = '\0';
        return pppppppuVar14;
      }
      goto LAB_14198edf3;
    }
code_r0x00014198ed24:
    uVar27 = in((short)arg1);
    **ppuVar40 = uVar27;
    if (*(longlong *)((longlong)arg1 + 7) == 0x31305f6874676e65 &&
        pppppppuVar17 == *(ulonglong ********)(unaff_GS_OFFSET + (longlong)arg1)) {
      arg0 = (ulonglong *******)0x3;
code_r0x00014198ed46:
      *(char *)((longlong)pppppppuVar14 + 1) = (char)arg0;
      *(char *)pppppppuVar14 = '\0';
      return pppppppuVar14;
    }
    goto LAB_14198edf3;
  case 0x35:
    pppppppuVar39 = (ulonglong *******)(ulonglong)(uint)(unaff_EBX * 0x23740a39);
LAB_14198ec3b:
    *(undefined8 *)((longlong)pppppppuVar39 + -8) = 0x14198ec59;
    pppppppuVar17 = (ulonglong *******)pdb_142d8f140(arg1,param_3,&UNK_14335c600,4);
    pppppppuVar45 = pppppppuVar14;
code_r0x00014198ec5f:
    pppppppuVar45[1] = (ulonglong ******)pppppppuVar17;
    *(char *)pppppppuVar14 = '\x01';
                    /* WARNING: Bad instruction - Truncating control flow here */
code_r0x00014198ec6c:
    return pppppppuVar14;
  case 0x36:
    goto code_r0x00014198ec6c;
  case 0x37:
  case 0x38:
  case 0x39:
  case 0x3d:
    UNRECOVERED_JUMPTABLE = (code *)swi(3);
    pppppppuVar18 = (ulonglong *******)(*UNRECOVERED_JUMPTABLE)();
    return pppppppuVar18;
  case 0x3a:
    goto pdb_140f679a0;
  case 0x3b:
pdb_140f679a0:
                    /* WARNING: Could not recover jumptable at 0x000140f679ae. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pppppppuVar18 = (ulonglong *******)(*(code *)arg0[1][3])(*arg0);
    return pppppppuVar18;
  case 0x3c:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x3e:
    puStack_f8 = (ulonglong *)CONCAT44(puStack_f8._4_4_,(int)arg1);
code_r0x00014198fba5:
    *(ulonglong ********)((longlong)pppppppuVar41 + -8) = pppppppuVar18;
    *(undefined1 **)((longlong)pppppppuVar41 + -0x10) = &UNK_14335cf08;
    ppuVar42 = (undefined **)((longlong)pppppppuVar41 + -0x18);
    *(ulonglong ********)((longlong)pppppppuVar41 + -0x18) = param_2;
  case 0x3f:
    *(undefined8 *)((longlong)ppuVar42 + -8) = 0;
    pppppppuVar43 = (ulonglong *******)((longlong)ppuVar42 + -0x30);
    pppppppuVar18 = arg1 + 0xc;
    arg1 = (ulonglong *******)arg1[5];
code_r0x00014198fbb5:
    if (arg1 != (ulonglong *******)0x0) {
      ppppppuVar25 = pppppppuVar18[-6];
      arg1 = (ulonglong *******)((longlong)arg1 << 4);
      pppppppuVar18 = pppppppuVar43;
code_r0x00014198fbc2:
      *(undefined8 *)((longlong)pppppppuVar18 + -8) = 0x14198fbcd;
      pub_1406abac0((byte *)ppppppuVar25,(ulonglong)arg1,8);
      pppppppuVar14 = extraout_RAX;
    }
    return pppppppuVar14;
  case 0x40:
    goto LAB_14198fb6d;
  case 0x41:
    *(byte *)pppppppuVar14 = *(char *)pppppppuVar14 + bVar9;
    *(undefined1 *)(arg1 + 0x10) = *(undefined1 *)(arg1 + 0x10);
    pppppppuStack_110 = (ulonglong *******)0x14198fb99;
    pdb_142dc7e2a();
    UNRECOVERED_JUMPTABLE = (code *)swi(3);
    pppppppuVar18 = (ulonglong *******)(*UNRECOVERED_JUMPTABLE)();
    return pppppppuVar18;
  case 0x42:
    *(byte *)pppppppuVar14 = *(char *)pppppppuVar14 + bVar9;
    pppppppuStack_110 = (ulonglong *******)0x14198fb4a;
    pub_1406abac0((byte *)arg0,(ulonglong)arg1,(ulonglong)param_3);
    goto LAB_14198fb5c;
  case 0x43:
    bVar46 = SBORROW4(0,uVar11);
code_r0x00014198fb5a:
    if (!bVar46) {
LAB_14198fb79:
      _UNK_14335cf18 = uStack_90;
      _UNK_14335cf1c = iStack_8c;
      pppppppuVar24 = pppppppuVar14;
      _UNK_14335cf10 = param_2;
      goto LAB_14198fb6d;
    }
LAB_14198fb5c:
    _UNK_14335cf08 = (ulonglong *******)0x8000000000000000;
    pppppppuVar24 = _UNK_14335cf08;
    _UNK_14335cf10 = param_2;
LAB_14198fb6d:
    _UNK_14335cf08 = pppppppuVar24;
    return (ulonglong *******)&UNK_14335cf08;
  }
LAB_14198ea1a:
  ppuVar38 = (undefined **)pppppppuVar15;
code_r0x00014198ea26:
  *(char *)((longlong)pppppppuVar14 + -0x77) =
       *(char *)((longlong)pppppppuVar14 + -0x77) + (char)arg0;
  puVar2 = (uint *)((longlong)arg0 * 5 + -0x3e);
  *puVar2 = *puVar2 >> 1 | (uint)((*puVar2 & 1) != 0) << 0x1f;
  *(undefined8 *)((longlong)ppuVar38 + -8) = 0x14198ea38;
  pppppppuVar17 = (ulonglong *******)pdb_142d8f140();
  pppppppuVar45 = pppppppuVar14;
code_r0x00014198ea3a:
  puVar2 = (uint *)((longlong)pppppppuVar14 + -0x77);
  *puVar2 = *puVar2 >> 0x10 | *puVar2 << 0x10;
  pppppppuVar45[1] = (ulonglong ******)pppppppuVar17;
  *(char *)pppppppuVar14 = '\x01';
  return pppppppuVar14;
code_r0x00014198d870:
  uVar7 = *puVar1;
  uStack_84 = *(uint *)((longlong)param_2 + 0x5c);
  uStack_80 = *(uint *)(param_2 + 0xc);
  uStack_7c = *(uint *)((longlong)param_2 + 100);
  uStack_98._1_1_ = (byte)uVar7;
  uStack_98._2_2_ = (undefined2)((uint)uVar7 >> 8);
  uStack_98._5_3_ = (undefined3)*(undefined4 *)((longlong)param_2 + 0x4d);
  uStack_98._4_4_ = CONCAT31(uStack_98._5_3_,(char)((uint)uVar7 >> 0x18));
  uStack_90._1_3_ = (undefined3)*(undefined4 *)((longlong)param_2 + 0x51);
  uStack_90 = CONCAT31(uStack_90._1_3_,
                       (char)((uint)*(undefined4 *)((longlong)param_2 + 0x4d) >> 0x18));
  iStack_8c._1_3_ = (undefined3)*(undefined4 *)((longlong)param_2 + 0x55);
  iStack_8c = CONCAT31(iStack_8c._1_3_,
                       (char)((uint)*(undefined4 *)((longlong)param_2 + 0x51) >> 0x18));
  uStack_88._1_3_ = (undefined3)(*(uint *)(param_2 + 0xb) >> 8);
  uStack_88._0_1_ = (undefined1)((uint)*(undefined4 *)((longlong)param_2 + 0x55) >> 0x18);
  uStack_49 = 1;
  uStack_4a = 1;
  pppppppuStack_110 = (ulonglong *******)0x14198d898;
  uStack_98._0_1_ = cVar6;
  arg1 = (ulonglong *******)pdb_141503990(&uStack_98);
  pppppppuVar39 = pppppppuStack_58;
  if (arg1 != (ulonglong *******)0x0) {
joined_r0x00014198d9ab:
    pppppppuStack_58 = pppppppuVar39;
    if (pppppppuStack_70 != (ulonglong *******)0x0) {
      LOCK();
      *pppppppuStack_70 = (ulonglong ******)((longlong)*pppppppuStack_70 - 1);
      UNLOCK();
      if (*pppppppuStack_70 == (ulonglong ******)0x0) {
        uStack_4c = 1;
        uStack_4d = 1;
        pppppppuStack_110 = (ulonglong *******)0x14198d9cf;
        pdb_140c7a400(&pppppppuStack_70);
      }
    }
    if (pppppppuStack_68 != (ulonglong *******)0x0) {
      LOCK();
      *pppppppuStack_68 = (ulonglong ******)((longlong)*pppppppuStack_68 - 1);
      UNLOCK();
      if (*pppppppuStack_68 == (ulonglong ******)0x0) {
        uStack_4b = 1;
        pppppppuStack_110 = (ulonglong *******)0x14198da8d;
        pdb_140c7bbc0(&pppppppuStack_68);
      }
    }
    if (!SBORROW8(0,(longlong)uStack_c8)) {
      pppppppuStack_d8 = uStack_c8;
      pppppppuStack_58 = uStack_b8;
      pppppppuStack_60 = (ulonglong *******)0x0;
      pppppppuStack_d0 = uStack_c0;
      pppppppuVar18 = uStack_c0;
      while (pppppppuStack_58 != pppppppuStack_60) {
        pppppppuStack_60 = (ulonglong *******)((longlong)pppppppuStack_60 + 1);
        pppppppuStack_110 = (ulonglong *******)0x14198dada;
        pdb_14098fa70(pppppppuVar18);
        pppppppuVar18 = pppppppuVar18 + 3;
      }
      if (pppppppuStack_d8 != (ulonglong *******)0x0) {
        pppppppuStack_110 = (ulonglong *******)0x14198db03;
        pub_1406abac0((byte *)pppppppuStack_d0,(longlong)pppppppuStack_d8 * 0x18,8);
      }
    }
LAB_14198db06:
    pppppppuVar39[1] = (ulonglong ******)arg1;
    *pppppppuVar39 = (ulonglong ******)0x8000000000000000;
    return pppppppuVar39;
  }
  goto LAB_14198d778;
}

