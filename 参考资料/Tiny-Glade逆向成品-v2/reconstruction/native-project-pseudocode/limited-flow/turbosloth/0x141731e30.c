// VA 0x141731e30, PDB extent 583 bytes
// turbosloth::asset::impl$44::build::async_block$2<clutter_pack_pipe::ClutterMeshAsset,turbosloth::asset::BuildContext>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/turbosloth/src/asset.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Instruction at (ram,0x00014173f40e) overlaps instruction at (ram,0x00014173f40d)
    */
/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   turbosloth::asset::impl$44::build::async_block$2<clutter_pack_pipe::ClutterMeshAsset,turbosloth::asset::BuildContext>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/turbosloth/src/asset.rs
   Extent: 583 */

ulonglong *
pdb_141731e30(ulonglong *param_1,ulonglong *param_2,longlong param_3,undefined *param_4,
             ulonglong param_5,ulonglong param_6,undefined8 param_7,undefined8 param_8,
             ulonglong param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             ulonglong *param_13)

{
  char *pcVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  undefined8 uVar7;
  longlong *plVar8;
  code *pcVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  ulonglong uVar17;
  undefined1 uVar18;
  byte bVar19;
  char cVar20;
  uint uVar21;
  char cVar32;
  ulonglong *puVar22;
  undefined1 (*pauVar23) [16];
  longlong *plVar24;
  undefined8 uVar25;
  longlong lVar26;
  longlong lVar27;
  undefined8 *puVar28;
  undefined8 uVar29;
  ulonglong *extraout_RAX;
  byte *pbVar30;
  byte *pbVar31;
  undefined *puVar34;
  undefined1 (*pauVar35) [16];
  undefined1 (*pauVar36) [16];
  undefined8 *puVar37;
  undefined8 *puVar38;
  ulonglong uVar39;
  undefined8 *unaff_RBX;
  undefined1 *puVar40;
  ulonglong **ppuVar41;
  ulonglong *puVar42;
  ulonglong unaff_RBP;
  ulonglong **ppuVar43;
  ulonglong *puVar44;
  longlong lVar45;
  longlong in_R11;
  ulonglong unaff_R12;
  ulonglong *unaff_R13;
  int *unaff_R14;
  undefined8 unaff_R15;
  bool bVar46;
  ulonglong in_XMM0_Qa;
  undefined8 in_XMM0_Qb;
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  byte *unaff_XMM6_Qa;
  undefined *unaff_XMM6_Qb;
  undefined4 unaff_retaddr;
  undefined4 unaff_retaddr_00;
  ulonglong uStackX_8;
  ulonglong uStackX_10;
  ulonglong *puStackX_18;
  ulonglong *puStackX_20;
  ulonglong in_stack_000000d8;
  byte *in_stack_000000e0;
  longlong in_stack_000000f0;
  undefined8 in_stack_000000f8;
  char cStack0000000000000100;
  undefined1 auStack_f919 [63305];
  undefined1 *puStack_1d0;
  undefined1 auStack_148 [24];
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  ulonglong *puStack_e0;
  ulonglong auStack_d8 [2];
  ulonglong *puStack_c8;
  longlong *plStack_b8;
  undefined8 *puStack_b0;
  undefined8 uStack_a8;
  int iStack_a0;
  int iStack_9c;
  undefined8 *puStack_98;
  longlong *plStack_90;
  byte *pbStack_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  int iStack_78;
  int iStack_74;
  int iStack_70;
  int iStack_6c;
  longlong *plStack_68;
  longlong *plStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  ulonglong *puStack_48;
  ulonglong *puStack_40;
  ulonglong *puStack_38;
  undefined7 uVar33;
  
  puVar42 = auStack_d8;
  ppuVar43 = (ulonglong **)&uStack_58;
  puVar34 = &UNK_14332bd08;
  iVar2 = *(int *)(&UNK_14332bd08 + (ulonglong)(byte)param_1[0x14] * 4);
  puVar22 = (ulonglong *)(&UNK_14332bd08 + iVar2);
  puStack_38 = param_1;
  cVar20 = (char)puVar22;
  uVar21 = (uint)puVar22;
  uVar33 = (undefined7)((ulonglong)puVar22 >> 8);
  cVar32 = (char)((ulonglong)puVar22 >> 8);
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch((byte)param_1[0x14]) {
  case 0:
    param_1[0x15] = (ulonglong)param_1;
    puStack_e0 = (ulonglong *)0x141731e89;
    pub_142e32760(param_1 + 0x16,param_1 + 1,0x98);
  case 3:
    puStack_40 = param_1 + 0x16;
    puStack_e0 = (ulonglong *)0x141731ea0;
    pdb_141720eb0(&plStack_90,puStack_40,param_2);
    puVar22 = puStack_40;
    if ((char)plStack_90 == '\0') {
      puStack_b0 = (undefined8 *)CONCAT44(uStack_7c,uStack_80);
      uStack_a8._0_4_ = iStack_78;
      uStack_a8._4_4_ = iStack_74;
      iStack_a0 = iStack_70;
      iStack_9c = iStack_6c;
      plStack_b8 = (longlong *)pbStack_88;
      puStack_e0 = (ulonglong *)0x141731ec7;
      pdb_14173c8a0(puStack_40);
      uVar39 = puStack_38[0x15];
      puStack_38[0x15] = 1;
      *(int *)(puVar22 + 2) = (int)uStack_a8;
      *(int *)((longlong)puVar22 + 0x14) = uStack_a8._4_4_;
      *(int *)(puVar22 + 3) = iStack_a0;
      *(int *)((longlong)puVar22 + 0x1c) = iStack_9c;
      *puVar22 = (ulonglong)plStack_b8;
      puVar22[1] = (ulonglong)puStack_b0;
      puStack_38[0x1a] = uVar39;
      puStack_38[0x1b] = 0;
code_r0x000141731eff:
      puStack_40 = puStack_38 + 0x15;
      puStack_e0 = (ulonglong *)0x141731f1a;
      pdb_140b37910(&plStack_90,puStack_40,&stack0xffffffffffffffd7,param_2);
      if ((int)plStack_90 != 2) {
        uStack_58 = (byte *)CONCAT44(uStack_7c,uStack_80);
        uStack_50 = (ulonglong *)CONCAT44(iStack_74,iStack_78);
        plStack_68 = plStack_90;
        plStack_60 = (longlong *)pbStack_88;
        puStack_e0 = (ulonglong *)0x141731f48;
        pdb_14097adb0(puStack_40);
        if (plStack_68 != (longlong *)0x0) {
          if (plStack_60 == (longlong *)0x0) {
            LOCK();
            *(longlong *)uStack_58 = *(longlong *)uStack_58 + -1;
            UNLOCK();
            if (*(longlong *)uStack_58 == 0) {
              puStack_e0 = (ulonglong *)0x141731f80;
              pdb_140c7a060(ppuVar43);
            }
          }
          else {
            LOCK();
            *uStack_50 = *uStack_50 + -1;
            UNLOCK();
            if (*uStack_50 == 0) {
              puStack_e0 = (ulonglong *)0x141731f6a;
              pdb_140c7a240(&uStack_50);
            }
          }
        }
        puStack_e0 = (ulonglong *)0x141731f8a;
        pdb_14097b7d0(puStack_38);
        cVar20 = '\x01';
        puVar22 = (ulonglong *)0x0;
        goto code_r0x000141731f8f;
      }
      cVar20 = '\x04';
    }
    else {
      cVar20 = '\x03';
    }
    puVar22 = (ulonglong *)0x1;
code_r0x000141731f8f:
    *(char *)(puStack_38 + 0x14) = cVar20;
    return puVar22;
  case 1:
                    /* WARNING: Subroutine does not return */
    puStack_e0 = (ulonglong *)0x141731fbd;
    pdb_142dc8570(&UNK_14332b2b0);
  case 2:
                    /* WARNING: Subroutine does not return */
    puStack_e0 = (ulonglong *)0x141731fb1;
    pdb_142dc8590(&UNK_14332b2b0);
  case 4:
    goto code_r0x000141731eff;
  case 5:
    iVar2 = *(int *)(&UNK_14332bd1c + (longlong)puVar22 * 4);
    unaff_RBX[0xe] = param_2;
                    /* WARNING: Could not emulate address calculation at 0x0001417320d6 */
                    /* WARNING: Treating indirect jump as call */
    puVar22 = (ulonglong *)(*(code *)(&UNK_14332bd1c + iVar2))();
    return puVar22;
  case 6:
    goto code_r0x000141734c38;
  case 7:
    goto code_r0x000141734c44;
  case 8:
code_r0x000141733a3f:
    lVar45 = unaff_RBX[0xe];
    param_2 = param_1;
    puVar22 = unaff_R13;
code_r0x000141733a43:
    *(longlong *)(lVar45 + 0x60) = lVar45 + 0x50;
    *(undefined8 *)(lVar45 + 0x68) = 0;
    unaff_RBX[0x10] = lVar45 + 0x60;
    puStack_e0 = (ulonglong *)0x141733a74;
    pdb_140b35bb0(unaff_RBX + 0x50,lVar45 + 0x60,(longlong)unaff_RBX + 0x1bf,param_2);
    lVar45 = unaff_RBX[0x50];
    if (lVar45 == 2) {
      *puVar22 = 1;
      uVar18 = 3;
    }
    else {
      lVar26 = unaff_RBX[0x51];
      uVar29 = unaff_RBX[0x52];
      uVar25 = unaff_RBX[0x53];
      uVar5 = unaff_RBX[0x54];
      lVar27 = unaff_RBX[0xe];
      if (*(longlong *)(lVar27 + 0x68) != 0) {
        unaff_RBX[0x10] = *(longlong *)(lVar27 + 0x68);
        puStack_e0 = (ulonglong *)0x141733abf;
        pdb_140974580();
        puStack_e0 = (ulonglong *)0x141733ad7;
        pub_1406abac0((byte *)unaff_RBX[0x10],0x38,8);
        lVar27 = unaff_RBX[0xe];
      }
      if ((int)lVar45 == 1) {
        uVar29 = *(undefined8 *)(lVar27 + 0x10);
        uVar25 = *(undefined8 *)(lVar27 + 0x18);
        puStack_e0 = (ulonglong *)0x141733aed;
        pdb_14007ee60();
        puStack_e0 = (ulonglong *)0x141733afc;
        pbVar30 = pub_1406abab0(0x10,8);
        if (pbVar30 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
          puStack_e0 = (ulonglong *)0x141733c19;
          pdb_142dc7e11(8,0x10);
        }
        pbVar30[0] = 1;
        pbVar30[1] = 0;
        pbVar30[2] = 0;
        pbVar30[3] = 0;
        pbVar30[4] = 0;
        pbVar30[5] = 0;
        pbVar30[6] = 0;
        pbVar30[7] = 0;
        pbVar30[8] = 1;
        pbVar30[9] = 0;
        pbVar30[10] = 0;
        pbVar30[0xb] = 0;
        pbVar30[0xc] = 0;
        pbVar30[0xd] = 0;
        pbVar30[0xe] = 0;
        pbVar30[0xf] = 0;
        unaff_RBX[0x4c] = uVar29;
        unaff_RBX[0x4d] = uVar25;
        unaff_RBX[0x4e] = pbVar30;
        unaff_RBX[0x4f] = &UNK_14332b300;
      }
      else {
        unaff_RBX[0x2a] = lVar26;
        unaff_RBX[0x2b] = uVar29;
        unaff_RBX[0x2c] = uVar25;
        unaff_RBX[0x2d] = uVar5;
        uVar29 = _UNK_14332b4a0;
        if (lVar26 == 0) {
          plStack_b8 = unaff_RBX + 0x2b;
          lVar45 = *(longlong *)(unaff_RBX[0xe] + 0x40);
          unaff_RBX[0x50] = _DAT_14332b498;
          unaff_RBX[0x51] = uVar29;
          lVar26 = *(longlong *)(unaff_RBX[0xe] + 0x38);
          uVar29 = *(undefined8 *)(lVar26 + 0x20);
          uVar25 = *(undefined8 *)(lVar26 + 0x28);
          *(undefined1 *)((longlong)unaff_RBX + 0x97) = 1;
          puStack_e0 = (ulonglong *)0x141733b9d;
          pdb_141c2b710(lVar45 + 0x10,unaff_RBX + 0x50,uVar29,uVar25);
        }
        unaff_RBX[0x52] = unaff_RBX[0x2c];
        unaff_RBX[0x53] = unaff_RBX[0x2d];
        unaff_RBX[0x50] = unaff_RBX[0x2a];
        unaff_RBX[0x51] = unaff_RBX[0x2b];
        *(undefined1 *)((longlong)unaff_RBX + 0x97) = 0;
        puStack_e0 = (ulonglong *)0x141733be4;
        pdb_14173bac0(unaff_RBX + 0x4c,unaff_RBX + 0x50);
        lVar27 = unaff_RBX[0xe];
      }
      puStack_e0 = (ulonglong *)0x141733bf2;
      pdb_140981490(lVar27 + 0x50);
      plVar24 = *(longlong **)(unaff_RBX[0xe] + 0x38);
      LOCK();
      *plVar24 = *plVar24 + -1;
      lVar45 = *plVar24;
      UNLOCK();
joined_r0x000141733f2d:
      if (lVar45 == 0) {
        puStack_e0 = (ulonglong *)0x141733f3c;
        pdb_140dd76c0(unaff_RBX[0xe] + 0x38);
      }
      plVar24 = *(longlong **)(unaff_RBX[0xe] + 0x40);
      LOCK();
      *plVar24 = *plVar24 + -1;
      UNLOCK();
      if (*plVar24 == 0) {
        puStack_e0 = (ulonglong *)0x141733f58;
        pdb_140dd78e0(unaff_RBX[0xe] + 0x40);
      }
      plVar24 = *(longlong **)unaff_RBX[0xe];
      if (plVar24 != (longlong *)0x0) {
        LOCK();
        *plVar24 = *plVar24 + -1;
        UNLOCK();
        if (*plVar24 == 0) {
          puStack_e0 = (ulonglong *)0x141733f7c;
          pdb_140c7a240(unaff_RBX[0xe]);
        }
      }
code_r0x000141734bfc:
      uVar39 = unaff_RBX[0x4c];
      uVar6 = unaff_RBX[0x4d];
      uVar17 = unaff_RBX[0x4f];
      puVar22[3] = unaff_RBX[0x4e];
      puVar22[4] = uVar17;
      puVar22[1] = uVar39;
      puVar22[2] = uVar6;
      *puVar22 = 0;
      uVar18 = 1;
    }
code_r0x000141734c20:
    *(undefined1 *)(unaff_RBX[0xe] + 0x4a) = uVar18;
    goto code_r0x000141734c38;
  case 9:
    *(char *)((longlong)param_2 + (longlong)ppuVar43 * 8 + 0x49) = '\0';
    pbVar30 = (byte *)((ulonglong)uStack_58 & 0xffffffff);
    puVar22 = param_2;
code_r0x00014173221a:
    puStack_e0 = (ulonglong *)0x141732225;
    pub_1406abac0(pbVar30,(ulonglong)puVar22,1);
    puVar44 = unaff_R13;
    while( true ) {
      unaff_R13 = puVar44 + 0xc;
      param_1 = (ulonglong *)((longlong)param_1 + -1);
      if (param_1 == (ulonglong *)0x0) break;
      puVar22 = (ulonglong *)puVar44[0xb];
      puVar44 = unaff_R13;
      if (puVar22 != (ulonglong *)0x0) goto code_r0x000141732216;
    }
    lVar45 = *(longlong *)(unaff_R12 + 0x40);
    if (lVar45 != 0) {
      puStack_e0 = (ulonglong *)0x141732a4b;
      pub_1406abac0((byte *)unaff_RBX[0x11],lVar45 * 0x60,0x10);
    }
    *(undefined8 *)(unaff_R12 + 0x50) = unaff_RBX[0xcf];
    uVar29 = unaff_RBX[0xce];
    *(longlong *)(unaff_R12 + 0x40) = unaff_RBX[0xcd];
    *(undefined8 *)(unaff_R12 + 0x48) = uVar29;
    puVar22 = _DAT_143ca8f38;
    lVar45 = unaff_RBX[0xe];
    unaff_R13 = (ulonglong *)unaff_RBX[0x10];
    uVar29 = unaff_RBX[0x2b];
    *(undefined8 *)(lVar45 + 0x28) = unaff_RBX[0x2a];
    *(undefined8 *)(lVar45 + 0x30) = uVar29;
    *(undefined8 *)(lVar45 + 0x20) = 0;
    if (((char)unaff_R15 == '\0') && ((*puVar22 & 0x7fffffffffffffff) != 0)) {
      puStack_e0 = (ulonglong *)0x141733750;
      cVar20 = pdb_142dc79e0();
      if (cVar20 == '\0') {
        *(undefined1 *)(unaff_R12 + 0x38) = 1;
      }
    }
    LOCK();
    iVar2 = *unaff_R14;
    *unaff_R14 = *unaff_R14 + -0x3fffffff;
    UNLOCK();
    uVar39 = (ulonglong)(iVar2 + 0xc0000001U);
    if (0x3fffffff < iVar2 + 0xc0000001U) {
      puStack_e0 = (ulonglong *)0x1417335ce;
      pdb_142dc6fa0();
    }
    lVar45 = unaff_RBX[0xe];
    puVar22 = unaff_R13;
    if (*(longlong *)(lVar45 + 0x20) == 0) {
      uVar29 = *(undefined8 *)(lVar45 + 0x30);
      unaff_RBX[0x24] = *(undefined8 *)(lVar45 + 0x28);
      unaff_RBX[0x25] = uVar29;
      plVar24 = plRam0000000143cad8b0;
      if (*_DAT_143ca4b08 < 2) {
        bVar19 = *(byte *)(plRam0000000143cad8b0 + 2);
        uVar39 = (ulonglong)bVar19;
        if (2 < bVar19) {
          *(undefined1 *)((longlong)unaff_RBX + 0x6b) = 1;
          puStack_e0 = (ulonglong *)0x141733c2f;
          uVar21 = pdb_142db8070(plRam0000000143cad8b0);
          uVar39 = (ulonglong)uVar21;
          lVar45 = unaff_RBX[0xe];
          if ((char)uVar21 != '\0') goto code_r0x000141732ffd;
          goto code_r0x000141733c3e;
        }
        if (bVar19 == 0) goto code_r0x000141733c3e;
code_r0x000141732ffd:
        lVar45 = *plVar24;
        *(undefined1 *)((longlong)unaff_RBX + 0x6b) = 1;
        puStack_e0 = (ulonglong *)0x141733009;
        cVar20 = pdb_140dd7f60(lVar45);
        lVar45 = unaff_RBX[0xe];
        if (cVar20 == '\0') goto code_r0x000141733c3e;
        lVar26 = *plVar24;
        uVar39 = *(ulonglong *)(lVar26 + 0x38);
        if (uVar39 == 0) {
          *(undefined1 *)((longlong)unaff_RBX + 0x6b) = 1;
          puStack_e0 = (ulonglong *)0x141734c9f;
          pdb_142dc8110(&UNK_14332aff8,0x22,&UNK_14332b020);
          goto code_r0x000141735008;
        }
        uVar29 = *(undefined8 *)(lVar26 + 0x30);
        uVar25 = *(undefined8 *)(lVar26 + 0x40);
        uVar5 = *(undefined8 *)(lVar26 + 0x48);
        unaff_RBX[0x18] = uVar29;
        unaff_RBX[0x19] = uVar39;
        unaff_RBX[0x1a] = uVar25;
        unaff_RBX[0x1b] = uVar5;
        unaff_RBX[0x1c] = 0;
        unaff_RBX[0x1e] = &UNK_14332b038;
        unaff_RBX[0x1f] = 0x33;
        if (uVar39 == 1) {
          *(undefined1 *)((longlong)unaff_RBX + 0x6b) = 1;
          puStack_e0 = (ulonglong *)0x141734cdf;
          pdb_142dc8110(&UNK_14332aff8,0x22,&UNK_14332b020);
          goto code_r0x000141735008;
        }
        unaff_RBX[0x13] = uVar29;
        unaff_RBX[0x14] = uVar39;
        unaff_RBX[0x15] = uVar25;
        unaff_RBX[0x16] = uVar5;
        unaff_RBX[0x17] = 1;
        unaff_RBX[0x21] = *(longlong *)(lVar45 + 0x38) + 0x20;
        if (uVar39 < 3) {
          *(undefined1 *)((longlong)unaff_RBX + 0x6b) = 1;
          puStack_e0 = (ulonglong *)0x141734d1f;
          pdb_142dc8110(&UNK_14332aff8,0x22,&UNK_14332b020);
          goto code_r0x000141735008;
        }
        unaff_RBX[0x2a] = uVar29;
        unaff_RBX[0x2b] = uVar39;
        unaff_RBX[0x2c] = uVar25;
        unaff_RBX[0x2d] = uVar5;
        unaff_RBX[0x2e] = 2;
        unaff_RBX[0x50] = unaff_RBX + 0x18;
        unaff_RBX[0x51] = unaff_RBX + 0x1e;
        unaff_RBX[0x52] = &UNK_14332b058;
        unaff_RBX[0x53] = unaff_RBX + 0x13;
        unaff_RBX[0x54] = unaff_RBX + 0x21;
        unaff_RBX[0x55] = &UNK_14332b078;
        unaff_RBX[0x56] = unaff_RBX + 0x2a;
        unaff_RBX[0x57] = lVar45 + 0x10;
        unaff_RBX[0x58] = &UNK_14332b098;
        unaff_RBX[0x38] = unaff_RBX + 0x50;
        unaff_RBX[0x39] = 3;
        unaff_RBX[0x3a] = lVar26 + 0x30;
        *(undefined1 *)((longlong)unaff_RBX + 0x6b) = 1;
        puStack_e0 = (ulonglong *)0x141733192;
        pdb_14173b620(unaff_RBX + 0x38);
code_r0x000141733e67:
        lVar45 = unaff_RBX[0xe];
      }
      else {
code_r0x000141733c3e:
        plVar24 = plRam0000000143cad8b0;
        if ((*_DAT_143ca4ab0 == '\0') && (3 < *_DAT_143ca8e90)) {
          lVar26 = *plRam0000000143cad8b0;
          uVar29 = *(undefined8 *)(lVar26 + 0x20);
          uVar25 = *(undefined8 *)(lVar26 + 0x28);
          unaff_RBX[0xbc] = 4;
          unaff_RBX[0xbd] = uVar29;
          unaff_RBX[0xbe] = uVar25;
          *(undefined1 *)((longlong)unaff_RBX + 0x6b) = 1;
          puStack_e0 = (ulonglong *)0x141733c8f;
          uVar29 = pdb_140f33290();
          pcVar9 = *(code **)(uVar39 + 0x18);
          *(undefined1 *)((longlong)unaff_RBX + 0x6b) = 1;
          puStack_e0 = (ulonglong *)0x141733caa;
          cVar20 = (*pcVar9)(uVar29,unaff_RBX + 0xbc);
          lVar45 = unaff_RBX[0xe];
          if (cVar20 != '\0') {
            lVar27 = *plVar24;
            uVar6 = *(ulonglong *)(lVar27 + 0x38);
            if (uVar6 != 0) {
              uVar25 = *(undefined8 *)(lVar27 + 0x30);
              uVar5 = *(undefined8 *)(lVar27 + 0x40);
              uVar7 = *(undefined8 *)(lVar27 + 0x48);
              unaff_RBX[0x18] = uVar25;
              unaff_RBX[0x19] = uVar6;
              unaff_RBX[0x1a] = uVar5;
              unaff_RBX[0x1b] = uVar7;
              unaff_RBX[0x1c] = 0;
              unaff_RBX[0x21] = &UNK_14332b038;
              unaff_RBX[0x22] = 0x33;
              if (uVar6 == 1) {
                *(undefined1 *)((longlong)unaff_RBX + 0x6b) = 1;
                puStack_e0 = (ulonglong *)0x141734e05;
                pdb_142dc8110(&UNK_14332aff8,0x22,&UNK_14332b020);
                goto code_r0x000141735008;
              }
              unaff_RBX[0x13] = uVar25;
              unaff_RBX[0x14] = uVar6;
              unaff_RBX[0x15] = uVar5;
              unaff_RBX[0x16] = uVar7;
              unaff_RBX[0x17] = 1;
              unaff_RBX[0x46] = *(longlong *)(lVar45 + 0x38) + 0x20;
              if (uVar6 < 3) {
                *(undefined1 *)((longlong)unaff_RBX + 0x6b) = 1;
                puStack_e0 = (ulonglong *)0x141734e45;
                pdb_142dc8110(&UNK_14332aff8,0x22,&UNK_14332b020);
                goto code_r0x000141735008;
              }
              unaff_RBX[0x2a] = uVar25;
              unaff_RBX[0x2b] = uVar6;
              unaff_RBX[0x2c] = uVar5;
              unaff_RBX[0x2d] = uVar7;
              unaff_RBX[0x2e] = 2;
              unaff_RBX[0x50] = unaff_RBX + 0x18;
              unaff_RBX[0x51] = unaff_RBX + 0x21;
              unaff_RBX[0x52] = &UNK_14332b058;
              unaff_RBX[0x53] = unaff_RBX + 0x13;
              unaff_RBX[0x54] = unaff_RBX + 0x46;
              unaff_RBX[0x55] = &UNK_14332b078;
              unaff_RBX[0x56] = unaff_RBX + 0x2a;
              unaff_RBX[0x57] = lVar45 + 0x10;
              unaff_RBX[0x58] = &UNK_14332b098;
              unaff_RBX[0x1e] = unaff_RBX + 0x50;
              unaff_RBX[0x1f] = 3;
              unaff_RBX[0x20] = lVar27 + 0x30;
              unaff_RBX[0x3a] = unaff_RBX[0xbe];
              unaff_RBX[0x38] = unaff_RBX[0xbc];
              unaff_RBX[0x39] = unaff_RBX[0xbd];
              *(undefined1 *)((longlong)unaff_RBX + 0x6b) = 1;
              plStack_b8 = unaff_RBX + 0x1e;
              puStack_e0 = (ulonglong *)0x141733e66;
              pdb_140dd7f80(lVar26,uVar29,uVar39,unaff_RBX + 0x38);
              goto code_r0x000141733e67;
            }
            *(undefined1 *)((longlong)unaff_RBX + 0x6b) = 1;
            puStack_e0 = (ulonglong *)0x141734dc5;
            pdb_142dc8110(&UNK_14332aff8,0x22,&UNK_14332b020);
            goto code_r0x000141735008;
          }
        }
      }
      uVar29 = _UNK_14332b4a0;
      lVar26 = *(longlong *)(lVar45 + 0x40);
      unaff_RBX[0x50] = _DAT_14332b498;
      unaff_RBX[0x51] = uVar29;
      uVar29 = *(undefined8 *)(*(longlong *)(lVar45 + 0x38) + 0x20);
      uVar25 = *(undefined8 *)(*(longlong *)(lVar45 + 0x38) + 0x28);
      *(undefined1 *)((longlong)unaff_RBX + 0x6b) = 1;
      plStack_b8 = unaff_RBX + 0x24;
      puStack_e0 = (ulonglong *)0x141733eab;
      pdb_141c2b710(lVar26 + 0x10,unaff_RBX + 0x50,uVar29,uVar25);
      lVar45 = unaff_RBX[0x24];
      lVar26 = unaff_RBX[0x25];
      unaff_RBX[0x2a] = lVar45;
      unaff_RBX[0x2b] = lVar26;
      lVar27 = *(longlong *)(lVar26 + 0x10);
      unaff_RBX[0x10] = lVar45;
      puStack_e0 = (ulonglong *)0x141733eec;
      (**(code **)(lVar26 + 0x18))
                (unaff_RBX + 0x50,lVar45 + (lVar27 - 1U & 0xfffffffffffffff0) + 0x10);
      auVar48[0] = -(*(char *)(unaff_RBX + 0x50) == DAT_14332a660);
      auVar48[1] = -(*(char *)((longlong)unaff_RBX + 0x281) == UNK_14332a661);
      auVar48[2] = -(*(char *)((longlong)unaff_RBX + 0x282) == UNK_14332a662);
      auVar48[3] = -(*(char *)((longlong)unaff_RBX + 0x283) == UNK_14332a663);
      auVar48[4] = -(*(char *)((longlong)unaff_RBX + 0x284) == UNK_14332a664);
      auVar48[5] = -(*(char *)((longlong)unaff_RBX + 0x285) == UNK_14332a665);
      auVar48[6] = -(*(char *)((longlong)unaff_RBX + 0x286) == UNK_14332a666);
      auVar48[7] = -(*(char *)((longlong)unaff_RBX + 0x287) == UNK_14332a667);
      auVar48[8] = -(*(char *)(unaff_RBX + 0x51) == UNK_14332a668);
      auVar48[9] = -(*(char *)((longlong)unaff_RBX + 0x289) == UNK_14332a669);
      auVar48[10] = -(*(char *)((longlong)unaff_RBX + 0x28a) == UNK_14332a66a);
      auVar48[0xb] = -(*(char *)((longlong)unaff_RBX + 0x28b) == UNK_14332a66b);
      auVar48[0xc] = -(*(char *)((longlong)unaff_RBX + 0x28c) == UNK_14332a66c);
      auVar48[0xd] = -(*(char *)((longlong)unaff_RBX + 0x28d) == UNK_14332a66d);
      auVar48[0xe] = -(*(char *)((longlong)unaff_RBX + 0x28e) == UNK_14332a66e);
      auVar48[0xf] = -(*(char *)((longlong)unaff_RBX + 0x28f) == UNK_14332a66f);
      if ((ushort)((ushort)(SUB161(auVar48 >> 7,0) & 1) |
                   (ushort)(SUB161(auVar48 >> 0xf,0) & 1) << 1 |
                   (ushort)(SUB161(auVar48 >> 0x17,0) & 1) << 2 |
                   (ushort)(SUB161(auVar48 >> 0x1f,0) & 1) << 3 |
                   (ushort)(SUB161(auVar48 >> 0x27,0) & 1) << 4 |
                   (ushort)(SUB161(auVar48 >> 0x2f,0) & 1) << 5 |
                   (ushort)(SUB161(auVar48 >> 0x37,0) & 1) << 6 |
                   (ushort)(SUB161(auVar48 >> 0x3f,0) & 1) << 7 |
                   (ushort)(SUB161(auVar48 >> 0x47,0) & 1) << 8 |
                   (ushort)(SUB161(auVar48 >> 0x4f,0) & 1) << 9 |
                   (ushort)(SUB161(auVar48 >> 0x57,0) & 1) << 10 |
                   (ushort)(SUB161(auVar48 >> 0x5f,0) & 1) << 0xb |
                   (ushort)(SUB161(auVar48 >> 0x67,0) & 1) << 0xc |
                   (ushort)(SUB161(auVar48 >> 0x6f,0) & 1) << 0xd |
                   (ushort)(SUB161(auVar48 >> 0x77,0) & 1) << 0xe |
                  (ushort)(auVar48[0xf] >> 7) << 0xf) != 0xffff) {
        unaff_RBX[0x50] = unaff_RBX[0x10];
        unaff_RBX[0x51] = lVar26;
        plStack_b8 = (longlong *)&UNK_14332b0c0;
                    /* WARNING: Subroutine does not return */
        puStack_e0 = (ulonglong *)0x141733fc2;
        pdb_142dc8170(&UNK_14332b0b8,8,unaff_RBX + 0x50,&UNK_14332b870);
      }
      unaff_RBX[0x4d] = unaff_RBX[0x10];
      unaff_RBX[0x4c] = 0;
      plVar24 = *(longlong **)(unaff_RBX[0xe] + 0x38);
      LOCK();
      *plVar24 = *plVar24 + -1;
      lVar45 = *plVar24;
      UNLOCK();
      goto joined_r0x000141733f2d;
    }
    if ((int)*(longlong *)(lVar45 + 0x20) != 1) {
      unaff_RBX[0x10] = unaff_R13;
      plVar24 = *(longlong **)(lVar45 + 0x38);
      LOCK();
      lVar26 = *plVar24;
      *plVar24 = *plVar24 + 1;
      UNLOCK();
      if (*plVar24 == 0 || SCARRY8(lVar26,1) != *plVar24 < 0) goto code_r0x000141735008;
      *(longlong **)(lVar45 + 0x58) = plVar24;
      *(undefined1 *)(lVar45 + 0x60) = 1;
      puVar37 = (undefined8 *)(*(longlong *)(lVar45 + 0x40) + 0x10);
      puStack_e0 = (ulonglong *)0x1417331d6;
      pdb_141805810(unaff_RBX + 0x38,puVar37,*(undefined8 *)(*(longlong *)(lVar45 + 0x38) + 0x20),
                    *(undefined8 *)(*(longlong *)(lVar45 + 0x38) + 0x28));
      plVar24 = plRam0000000143cad898;
      if (SBORROW8(0,unaff_RBX[0x3a])) {
        lVar45 = unaff_RBX[0xe];
        puVar22 = (ulonglong *)unaff_RBX[0x10];
        if (*_DAT_143ca4b08 < 3) {
          bVar19 = *(byte *)(plRam0000000143cad898 + 2);
          puVar37 = (undefined8 *)(ulonglong)bVar19;
          if (2 < bVar19) {
            puStack_e0 = (ulonglong *)0x141733fd4;
            uVar21 = pdb_142db8070(plRam0000000143cad898);
            puVar37 = (undefined8 *)(ulonglong)uVar21;
            lVar45 = unaff_RBX[0xe];
            puVar22 = (ulonglong *)unaff_RBX[0x10];
            if ((char)uVar21 != '\0') goto code_r0x000141733221;
            goto code_r0x000141733fea;
          }
          if (bVar19 == 0) goto code_r0x000141733fea;
code_r0x000141733221:
          puStack_e0 = (ulonglong *)0x141733229;
          cVar20 = pdb_140dd7f60(*plVar24);
          lVar45 = unaff_RBX[0xe];
          puVar22 = (ulonglong *)unaff_RBX[0x10];
          if (cVar20 == '\0') goto code_r0x000141733fea;
          lVar26 = *plVar24;
          uVar39 = *(ulonglong *)(lVar26 + 0x38);
          if (uVar39 == 0) {
            puStack_e0 = (ulonglong *)0x141734e63;
            pdb_142dc8110(&UNK_14332aff8,0x22,&UNK_14332b150);
            goto code_r0x000141735008;
          }
          uVar29 = *(undefined8 *)(lVar26 + 0x30);
          uVar25 = *(undefined8 *)(lVar26 + 0x40);
          uVar5 = *(undefined8 *)(lVar26 + 0x48);
          unaff_RBX[0x18] = uVar29;
          unaff_RBX[0x19] = uVar39;
          unaff_RBX[0x1a] = uVar25;
          unaff_RBX[0x1b] = uVar5;
          unaff_RBX[0x1c] = 0;
          unaff_RBX[0x1e] = &UNK_14332b168;
          unaff_RBX[0x1f] = 0x1d;
          if (uVar39 == 1) {
            puStack_e0 = (ulonglong *)0x141734e9f;
            pdb_142dc8110(&UNK_14332aff8,0x22,&UNK_14332b150);
            goto code_r0x000141735008;
          }
          unaff_RBX[0x13] = uVar29;
          unaff_RBX[0x14] = uVar39;
          unaff_RBX[0x15] = uVar25;
          unaff_RBX[0x16] = uVar5;
          unaff_RBX[0x17] = 1;
          unaff_RBX[0x21] = *(longlong *)(lVar45 + 0x38) + 0x20;
          if (uVar39 < 3) {
            puStack_e0 = (ulonglong *)0x141734edb;
            pdb_142dc8110(&UNK_14332aff8,0x22,&UNK_14332b150);
            goto code_r0x000141735008;
          }
          unaff_RBX[0x2a] = uVar29;
          unaff_RBX[0x2b] = uVar39;
          unaff_RBX[0x2c] = uVar25;
          unaff_RBX[0x2d] = uVar5;
          unaff_RBX[0x2e] = 2;
          unaff_RBX[0x50] = unaff_RBX + 0x18;
          unaff_RBX[0x51] = unaff_RBX + 0x1e;
          unaff_RBX[0x52] = &UNK_14332b058;
          unaff_RBX[0x53] = unaff_RBX + 0x13;
          unaff_RBX[0x54] = unaff_RBX + 0x21;
          unaff_RBX[0x55] = &UNK_14332b078;
          puVar28 = unaff_RBX + 0x2a;
          unaff_RBX[0x56] = puVar28;
          unaff_RBX[0x57] = lVar45 + 0x10;
          unaff_RBX[0x58] = &UNK_14332b098;
          unaff_RBX[0x38] = unaff_RBX + 0x50;
          unaff_RBX[0x39] = 3;
          unaff_RBX[0x3a] = lVar26 + 0x30;
          puStack_e0 = (ulonglong *)0x1417333b5;
          pdb_14173b8e0(unaff_RBX + 0x38);
code_r0x00014173420e:
          lVar45 = unaff_RBX[0xe];
          puVar22 = (ulonglong *)unaff_RBX[0x10];
          puVar38 = puVar28;
        }
        else {
code_r0x000141733fea:
          plVar24 = plRam0000000143cad898;
          puVar38 = puVar37;
          if ((*_DAT_143ca4ab0 == '\0') && (2 < *_DAT_143ca8e90)) {
            lVar26 = *plRam0000000143cad898;
            uVar29 = *(undefined8 *)(lVar26 + 0x20);
            uVar25 = *(undefined8 *)(lVar26 + 0x28);
            unaff_RBX[0xc5] = 3;
            unaff_RBX[0xc6] = uVar29;
            unaff_RBX[199] = uVar25;
            puStack_e0 = (ulonglong *)0x141734038;
            puVar28 = (undefined8 *)pdb_140f33290();
            puVar38 = unaff_RBX + 0xc5;
            puStack_e0 = (ulonglong *)0x14173404e;
            cVar20 = (*(code *)puVar37[3])(puVar28);
            lVar45 = unaff_RBX[0xe];
            puVar22 = (ulonglong *)unaff_RBX[0x10];
            if (cVar20 != '\0') {
              lVar27 = *plVar24;
              uVar39 = *(ulonglong *)(lVar27 + 0x38);
              if (uVar39 == 0) {
                puStack_e0 = (ulonglong *)0x141734f7d;
                pdb_142dc8110(&UNK_14332aff8,0x22,&UNK_14332b150);
                goto code_r0x000141735008;
              }
              uVar29 = *(undefined8 *)(lVar27 + 0x30);
              uVar25 = *(undefined8 *)(lVar27 + 0x40);
              uVar5 = *(undefined8 *)(lVar27 + 0x48);
              unaff_RBX[0x18] = uVar29;
              unaff_RBX[0x19] = uVar39;
              unaff_RBX[0x1a] = uVar25;
              unaff_RBX[0x1b] = uVar5;
              unaff_RBX[0x1c] = 0;
              unaff_RBX[0x21] = &UNK_14332b168;
              unaff_RBX[0x22] = 0x1d;
              if (uVar39 == 1) {
                puStack_e0 = (ulonglong *)0x141734fb6;
                pdb_142dc8110(&UNK_14332aff8,0x22,&UNK_14332b150);
                goto code_r0x000141735008;
              }
              unaff_RBX[0x13] = uVar29;
              unaff_RBX[0x14] = uVar39;
              unaff_RBX[0x15] = uVar25;
              unaff_RBX[0x16] = uVar5;
              unaff_RBX[0x17] = 1;
              unaff_RBX[0x24] = *(longlong *)(lVar45 + 0x38) + 0x20;
              if (uVar39 < 3) {
                puStack_e0 = (ulonglong *)0x141734fec;
                pdb_142dc8110(&UNK_14332aff8,0x22,&UNK_14332b150);
                goto code_r0x000141735008;
              }
              unaff_RBX[0x2a] = uVar29;
              unaff_RBX[0x2b] = uVar39;
              unaff_RBX[0x2c] = uVar25;
              unaff_RBX[0x2d] = uVar5;
              unaff_RBX[0x2e] = 2;
              unaff_RBX[0x50] = unaff_RBX + 0x18;
              unaff_RBX[0x51] = unaff_RBX + 0x21;
              unaff_RBX[0x52] = &UNK_14332b058;
              unaff_RBX[0x53] = unaff_RBX + 0x13;
              unaff_RBX[0x54] = unaff_RBX + 0x24;
              unaff_RBX[0x55] = &UNK_14332b078;
              unaff_RBX[0x56] = unaff_RBX + 0x2a;
              unaff_RBX[0x57] = lVar45 + 0x10;
              unaff_RBX[0x58] = &UNK_14332b098;
              unaff_RBX[0x1e] = unaff_RBX + 0x50;
              unaff_RBX[0x1f] = 3;
              unaff_RBX[0x20] = lVar27 + 0x30;
              unaff_RBX[0x3a] = unaff_RBX[199];
              unaff_RBX[0x38] = unaff_RBX[0xc5];
              unaff_RBX[0x39] = unaff_RBX[0xc6];
              plStack_b8 = unaff_RBX + 0x1e;
              puStack_e0 = (ulonglong *)0x14173420d;
              pdb_140dd7f80(lVar26,puVar28,puVar37,unaff_RBX + 0x38);
              goto code_r0x00014173420e;
            }
          }
        }
        puStack_e0 = (ulonglong *)0x141734228;
        uVar29 = (**(code **)(*(longlong *)(*(longlong *)(lVar45 + 0x38) + 0x18) + 0x28))
                           (*(undefined8 *)(*(longlong *)(lVar45 + 0x38) + 0x10));
        unaff_RBX[0x29] = uVar29;
        unaff_RBX[0x28] = puVar38;
        lVar45 = unaff_RBX[0xe];
        *(undefined1 *)(lVar45 + 0x49) = 1;
        plVar24 = *(longlong **)(lVar45 + 0x40);
        LOCK();
        lVar45 = *plVar24;
        *plVar24 = *plVar24 + 1;
        UNLOCK();
        if (*plVar24 == 0 || SCARRY8(lVar45,1) != *plVar24 < 0) goto code_r0x000141735008;
        unaff_RBX[0x10] = plVar24;
        unaff_RBX[0x13] = plVar24;
        puStack_e0 = (ulonglong *)0x141734267;
        pdb_1417473a0(unaff_RBX + 0x2a);
        unaff_RBX[0x50] = 1;
        unaff_RBX[0x51] = 1;
        unaff_RBX[0x52] = unaff_RBX[0x2a];
        unaff_RBX[0x53] = unaff_RBX[0x2b];
        *(undefined4 *)(unaff_RBX + 0x54) = *(undefined4 *)(unaff_RBX + 0x2c);
        *(undefined4 *)((longlong)unaff_RBX + 0x2a4) = *(undefined4 *)((longlong)unaff_RBX + 0x164);
        *(undefined4 *)(unaff_RBX + 0x55) = *(undefined4 *)(unaff_RBX + 0x2d);
        *(undefined4 *)((longlong)unaff_RBX + 0x2ac) = *(undefined4 *)((longlong)unaff_RBX + 0x16c);
        *(undefined4 *)(unaff_RBX + 0x56) = *(undefined4 *)(unaff_RBX + 0x2e);
        *(undefined4 *)((longlong)unaff_RBX + 0x2b4) = *(undefined4 *)((longlong)unaff_RBX + 0x174);
        *(undefined4 *)(unaff_RBX + 0x57) = *(undefined4 *)(unaff_RBX + 0x2f);
        *(undefined4 *)((longlong)unaff_RBX + 700) = *(undefined4 *)((longlong)unaff_RBX + 0x17c);
        *(undefined4 *)(unaff_RBX + 0x58) = *(undefined4 *)(unaff_RBX + 0x30);
        *(undefined4 *)((longlong)unaff_RBX + 0x2c4) = *(undefined4 *)((longlong)unaff_RBX + 0x184);
        *(undefined4 *)(unaff_RBX + 0x59) = *(undefined4 *)(unaff_RBX + 0x31);
        *(undefined4 *)((longlong)unaff_RBX + 0x2cc) = *(undefined4 *)((longlong)unaff_RBX + 0x18c);
        unaff_RBX[0x5a] = unaff_RBX[0x32];
        unaff_RBX[0x5b] = unaff_RBX[0x33];
        unaff_RBX[0x5c] = unaff_RBX[0x34];
        unaff_RBX[0x5d] = unaff_RBX[0x35];
        puStack_e0 = (ulonglong *)0x1417342d9;
        pdb_14007ee60();
        uVar29 = 8;
        puStack_e0 = (ulonglong *)0x1417342e8;
        pbVar30 = pub_1406abab0(0x70,8);
        if (pbVar30 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
          puStack_e0 = (ulonglong *)0x141734402;
          pdb_142dc7e11(8,0x70);
        }
        uVar25 = unaff_RBX[0x5d];
        *(undefined8 *)(pbVar30 + 0x60) = unaff_RBX[0x5c];
        *(undefined8 *)(pbVar30 + 0x68) = uVar25;
        uVar25 = unaff_RBX[0x5b];
        *(undefined8 *)(pbVar30 + 0x50) = unaff_RBX[0x5a];
        *(undefined8 *)(pbVar30 + 0x58) = uVar25;
        uVar25 = unaff_RBX[0x59];
        *(undefined8 *)(pbVar30 + 0x40) = unaff_RBX[0x58];
        *(undefined8 *)(pbVar30 + 0x48) = uVar25;
        uVar25 = unaff_RBX[0x50];
        uVar5 = unaff_RBX[0x51];
        uVar7 = unaff_RBX[0x52];
        uVar4 = unaff_RBX[0x53];
        uVar10 = *(undefined4 *)(unaff_RBX + 0x54);
        uVar11 = *(undefined4 *)((longlong)unaff_RBX + 0x2a4);
        uVar12 = *(undefined4 *)(unaff_RBX + 0x55);
        uVar13 = *(undefined4 *)((longlong)unaff_RBX + 0x2ac);
        uVar14 = *(undefined4 *)((longlong)unaff_RBX + 0x2b4);
        uVar15 = *(undefined4 *)(unaff_RBX + 0x57);
        uVar16 = *(undefined4 *)((longlong)unaff_RBX + 700);
        *(undefined4 *)(pbVar30 + 0x30) = *(undefined4 *)(unaff_RBX + 0x56);
        *(undefined4 *)(pbVar30 + 0x34) = uVar14;
        *(undefined4 *)(pbVar30 + 0x38) = uVar15;
        *(undefined4 *)(pbVar30 + 0x3c) = uVar16;
        *(undefined4 *)(pbVar30 + 0x20) = uVar10;
        *(undefined4 *)(pbVar30 + 0x24) = uVar11;
        *(undefined4 *)(pbVar30 + 0x28) = uVar12;
        *(undefined4 *)(pbVar30 + 0x2c) = uVar13;
        *(undefined8 *)(pbVar30 + 0x10) = uVar7;
        *(undefined8 *)(pbVar30 + 0x18) = uVar4;
        *(undefined8 *)pbVar30 = uVar25;
        *(undefined8 *)(pbVar30 + 8) = uVar5;
        puVar37 = (undefined8 *)unaff_RBX[0xe];
        plVar24 = (longlong *)*puVar37;
        uVar25 = unaff_RBX[0x29];
        if (plVar24 != (longlong *)0x0) {
          uVar29 = puVar37[1];
          LOCK();
          lVar45 = *plVar24;
          *plVar24 = *plVar24 + 1;
          UNLOCK();
          if (*plVar24 == 0 || SCARRY8(lVar45,1) != *plVar24 < 0) goto code_r0x000141735008;
        }
        *(undefined1 *)(puVar37 + 9) = 1;
        puVar37[0xf] = unaff_RBX[0x10];
        puVar37[0x10] = pbVar30;
        puVar37[0x11] = plVar24;
        puVar37[0x12] = uVar29;
        LOCK();
        lVar45 = *(longlong *)pbVar30;
        *(longlong *)pbVar30 = *(longlong *)pbVar30 + 1;
        UNLOCK();
        if (*(longlong *)pbVar30 == 0 || SCARRY8(lVar45,1) != *(longlong *)pbVar30 < 0)
        goto code_r0x000141735008;
        puVar37[10] = pbVar30;
        *(undefined1 *)((longlong)puVar37 + 0x49) = 0;
        *(undefined1 *)(puVar37 + 9) = 0;
        uVar29 = puVar37[0xf];
        uVar5 = puVar37[0x10];
        uVar10 = *(undefined4 *)((longlong)puVar37 + 0x8c);
        uVar11 = *(undefined4 *)(puVar37 + 0x12);
        uVar12 = *(undefined4 *)((longlong)puVar37 + 0x94);
        *(undefined4 *)(unaff_RBX + 0x52) = *(undefined4 *)(puVar37 + 0x11);
        *(undefined4 *)((longlong)unaff_RBX + 0x294) = uVar10;
        *(undefined4 *)(unaff_RBX + 0x53) = uVar11;
        *(undefined4 *)((longlong)unaff_RBX + 0x29c) = uVar12;
        unaff_RBX[0x50] = uVar29;
        unaff_RBX[0x51] = uVar5;
        pcVar9 = *(code **)(unaff_RBX[0x28] + 0x30);
        unaff_RBX[0x3e] = uVar25;
        unaff_RBX[0x3f] = unaff_RBX[0x28];
        puVar37 = unaff_RBX + 0x50;
        puStack_e0 = (ulonglong *)0x1417343db;
        uVar29 = (*pcVar9)();
        lVar45 = unaff_RBX[0xe];
        *(undefined8 *)(lVar45 + 0x68) = uVar29;
        *(undefined8 **)(lVar45 + 0x70) = puVar37;
        puStack_e0 = (ulonglong *)0x14173223d;
        (*(code *)puVar37[3])(unaff_RBX + 0x50,uVar29,param_2);
        lVar45 = unaff_RBX[0x50];
        if (lVar45 == 2) {
          *puVar22 = 1;
          uVar18 = 4;
          goto code_r0x000141734c20;
        }
        uVar29 = unaff_RBX[0x51];
        pauVar36 = (undefined1 (*) [16])unaff_RBX[0x52];
        unaff_RBX[0x10] = *(undefined8 *)(unaff_RBX[0xe] + 0x68);
        puVar37 = *(undefined8 **)(unaff_RBX[0xe] + 0x70);
        unaff_RBX[0x11] = puVar37;
        pcVar9 = (code *)*puVar37;
        if (pcVar9 != (code *)0x0) {
          puStack_e0 = (ulonglong *)0x141732293;
          (*pcVar9)(unaff_RBX[0x10]);
        }
        pauVar35 = *(undefined1 (**) [16])(unaff_RBX[0x11] + 8);
        if (pauVar35 != (undefined1 (*) [16])0x0) {
          puStack_e0 = (ulonglong *)0x1417322b4;
          pub_1406abac0((byte *)unaff_RBX[0x10],(ulonglong)pauVar35,
                        *(ulonglong *)(unaff_RBX[0x11] + 0x10));
        }
        lVar26 = unaff_RBX[0xe];
        if ((int)lVar45 == 1) {
          uVar25 = *(undefined8 *)(lVar26 + 0x10);
          uVar5 = *(undefined8 *)(lVar26 + 0x18);
          unaff_RBX[0x3e] = unaff_RBX[0x29];
          unaff_RBX[0x3f] = unaff_RBX[0x28];
          puStack_e0 = (ulonglong *)0x1417322ed;
          pauVar23 = (undefined1 (*) [16])pdb_140c799b0(uVar29);
          unaff_RBX[0x16] = pauVar36;
          lVar26 = unaff_RBX[0xe];
          pauVar35 = pauVar36;
          pauVar36 = pauVar23;
          uVar29 = uVar5;
        }
        else {
          uVar25 = 0;
        }
        unaff_RBX[0x13] = uVar25;
        unaff_RBX[0x14] = uVar29;
        unaff_RBX[0x15] = pauVar36;
        lVar45 = *(longlong *)(lVar26 + 0x50);
        pcVar1 = (char *)(lVar45 + 0x10);
        LOCK();
        bVar46 = *(char *)(lVar45 + 0x10) == '\0';
        if (bVar46) {
          *(char *)(lVar45 + 0x10) = '\x01';
        }
        UNLOCK();
        if (!bVar46) {
          *(undefined1 *)((longlong)unaff_RBX + 0x7d) = 1;
          puStack_e0 = (ulonglong *)0x14173364c;
          pdb_142dc6be0(pcVar1);
        }
        puVar44 = _DAT_143ca8f38;
        if ((*_DAT_143ca8f38 & 0x7fffffffffffffff) == 0) {
          bVar19 = 0;
          cVar20 = *(char *)(lVar45 + 0x11);
        }
        else {
          *(undefined1 *)((longlong)unaff_RBX + 0x7d) = 1;
          puStack_e0 = (ulonglong *)0x14173365b;
          bVar19 = pdb_142dc79e0();
          bVar19 = bVar19 ^ 1;
          cVar20 = *(char *)(lVar45 + 0x11);
        }
        if (cVar20 != '\0') {
          unaff_RBX[0x50] = pcVar1;
          *(byte *)(unaff_RBX + 0x51) = bVar19;
          plStack_b8 = (longlong *)&UNK_14332b190;
                    /* WARNING: Subroutine does not return */
          puStack_e0 = (ulonglong *)0x1417336a2;
          pdb_142dc8170(&UNK_14332b8d0,0x2b,unaff_RBX + 0x50,&UNK_14332b920);
        }
        uVar29 = *(undefined8 *)(lVar45 + 0x18);
        uVar25 = *(undefined8 *)(lVar45 + 0x20);
        uVar10 = *(undefined4 *)(lVar45 + 0x2c);
        uVar11 = *(undefined4 *)(lVar45 + 0x30);
        uVar12 = *(undefined4 *)(lVar45 + 0x34);
        *(undefined4 *)(unaff_RBX + 0x2c) = *(undefined4 *)(lVar45 + 0x28);
        *(undefined4 *)((longlong)unaff_RBX + 0x164) = uVar10;
        *(undefined4 *)(unaff_RBX + 0x2d) = uVar11;
        *(undefined4 *)((longlong)unaff_RBX + 0x16c) = uVar12;
        unaff_RBX[0x2a] = uVar29;
        unaff_RBX[0x2b] = uVar25;
        uVar25 = _UNK_14332bb38;
        uVar29 = _UNK_14332bb30;
        *(undefined8 *)(lVar45 + 0x18) = _UNK_14332bb30;
        *(undefined8 *)(lVar45 + 0x20) = uVar25;
        uVar7 = _UNK_14332bb48;
        uVar5 = _UNK_14332bb40;
        *(undefined8 *)(lVar45 + 0x28) = _UNK_14332bb40;
        *(undefined8 *)(lVar45 + 0x30) = uVar7;
        if ((bVar19 == 0) && ((*puVar44 & 0x7fffffffffffffff) != 0)) {
          *(undefined1 *)((longlong)unaff_RBX + 0x7b) = 1;
          puStack_e0 = (ulonglong *)0x141733782;
          cVar20 = pdb_142dc79e0();
          if (cVar20 == '\0') {
            *(undefined1 *)(lVar45 + 0x11) = 1;
          }
        }
        LOCK();
        cVar20 = *pcVar1;
        *pcVar1 = '\0';
        UNLOCK();
        if (cVar20 == '\x02') {
          *(undefined1 *)((longlong)unaff_RBX + 0x7b) = 1;
          puStack_e0 = (ulonglong *)0x1417336b4;
          pdb_142dc6ca0(pcVar1);
        }
        lVar26 = unaff_RBX[0xe];
        lVar27 = *(longlong *)(lVar26 + 0x50);
        lVar45 = lVar27 + 0x38;
        LOCK();
        bVar46 = *(char *)(lVar27 + 0x38) == '\0';
        if (bVar46) {
          *(char *)(lVar27 + 0x38) = '\x01';
        }
        UNLOCK();
        if (!bVar46) {
          *(undefined1 *)((longlong)unaff_RBX + 0x7b) = 1;
          puStack_e0 = (ulonglong *)0x1417336c6;
          pdb_142dc6be0(lVar45);
        }
        if ((*puVar44 & 0x7fffffffffffffff) == 0) {
          uVar21 = 0;
          cVar20 = *(char *)(lVar27 + 0x39);
        }
        else {
          *(undefined1 *)((longlong)unaff_RBX + 0x7b) = 1;
          puStack_e0 = (ulonglong *)0x1417336d5;
          uVar21 = pdb_142dc79e0();
          uVar21 = uVar21 ^ 1;
          cVar20 = *(char *)(lVar27 + 0x39);
        }
        if (cVar20 != '\0') {
          unaff_RBX[0x50] = lVar45;
          *(char *)(unaff_RBX + 0x51) = (char)uVar21;
          plStack_b8 = (longlong *)&UNK_14332b1a8;
                    /* WARNING: Subroutine does not return */
          puStack_e0 = (ulonglong *)0x14173371c;
          pdb_142dc8170(&UNK_14332b8d0,0x2b,unaff_RBX + 0x50,&UNK_14332b940);
        }
        *(uint *)(unaff_RBX + 0x11) = uVar21;
        unaff_RBX[0x10] = lVar45;
        puStack_e0 = (ulonglong *)0x141732423;
        plVar24 = (longlong *)pdb_140f3bda0();
        if ((char)plVar24[2] == '\x01') {
          lVar45 = *plVar24;
          pauVar35 = (undefined1 (*) [16])plVar24[1];
        }
        else {
          puStack_e0 = (ulonglong *)0x141733727;
          lVar45 = pdb_140f4fd10();
          *plVar24 = lVar45;
          plVar24[1] = (longlong)pauVar35;
          *(undefined1 *)(plVar24 + 2) = 1;
        }
        *plVar24 = lVar45 + 1;
        pauVar36 = *(undefined1 (**) [16])(lVar27 + 0x40);
        lVar3 = *(longlong *)(lVar27 + 0x48);
        uVar4 = *(undefined8 *)(lVar27 + 0x58);
        *(undefined8 *)(lVar27 + 0x50) = uVar5;
        *(undefined8 *)(lVar27 + 0x58) = uVar7;
        *(undefined8 *)(lVar27 + 0x40) = uVar29;
        *(undefined8 *)(lVar27 + 0x48) = uVar25;
        *(longlong *)(lVar27 + 0x60) = lVar45;
        *(undefined1 (**) [16])(lVar27 + 0x68) = pauVar35;
        auVar49 = *pauVar36;
        if (lVar3 == 0) {
          uVar29 = 0;
        }
        else {
          lVar45 = lVar3 * 0x61 + 0x71;
          pauVar35 = pauVar36 + lVar3 * -6 + -6;
          uVar29 = 0x10;
        }
        unaff_RBX[0x50] = uVar29;
        unaff_RBX[0x51] = lVar45;
        unaff_RBX[0x52] = pauVar35;
        unaff_RBX[0x53] = pauVar36;
        unaff_RBX[0x54] = pauVar36 + 1;
        unaff_RBX[0x55] = *pauVar36 + lVar3 + 1;
        *(ushort *)(unaff_RBX + 0x56) =
             ~((ushort)(SUB161(auVar49 >> 7,0) & 1) | (ushort)(SUB161(auVar49 >> 0xf,0) & 1) << 1 |
               (ushort)(SUB161(auVar49 >> 0x17,0) & 1) << 2 |
               (ushort)(SUB161(auVar49 >> 0x1f,0) & 1) << 3 |
               (ushort)(SUB161(auVar49 >> 0x27,0) & 1) << 4 |
               (ushort)(SUB161(auVar49 >> 0x2f,0) & 1) << 5 |
               (ushort)(SUB161(auVar49 >> 0x37,0) & 1) << 6 |
               (ushort)(SUB161(auVar49 >> 0x3f,0) & 1) << 7 |
               (ushort)(SUB161(auVar49 >> 0x47,0) & 1) << 8 |
               (ushort)(SUB161(auVar49 >> 0x4f,0) & 1) << 9 |
               (ushort)(SUB161(auVar49 >> 0x57,0) & 1) << 10 |
               (ushort)(SUB161(auVar49 >> 0x5f,0) & 1) << 0xb |
               (ushort)(SUB161(auVar49 >> 0x67,0) & 1) << 0xc |
               (ushort)(SUB161(auVar49 >> 0x6f,0) & 1) << 0xd |
               (ushort)(SUB161(auVar49 >> 0x77,0) & 1) << 0xe |
              (ushort)(byte)(auVar49[0xf] >> 7) << 0xf);
        unaff_RBX[0x57] = uVar4;
        puStack_e0 = (ulonglong *)0x1417324e8;
        pdb_1415ed630(unaff_RBX + 0x24,unaff_RBX + 0x50);
        if ((*(char *)(unaff_RBX + 0x11) == '\0') && ((*puVar44 & 0x7fffffffffffffff) != 0)) {
          *(undefined1 *)((longlong)unaff_RBX + 0x7e) = 1;
          *(undefined1 *)((longlong)unaff_RBX + 0x7f) = 1;
          puStack_e0 = (ulonglong *)0x1417337a1;
          cVar20 = pdb_142dc79e0();
          if (cVar20 == '\0') {
            *(undefined1 *)(lVar27 + 0x39) = 1;
          }
        }
        LOCK();
        cVar20 = *(char *)unaff_RBX[0x10];
        *(char *)unaff_RBX[0x10] = '\0';
        UNLOCK();
        if (cVar20 == '\x02') {
          *(undefined1 *)((longlong)unaff_RBX + 0x7e) = 1;
          *(undefined1 *)((longlong)unaff_RBX + 0x7f) = 1;
          puStack_e0 = (ulonglong *)0x141733745;
          pdb_142dc6ca0();
        }
        pauVar36 = (undefined1 (*) [16])unaff_RBX[0x2a];
        auVar49 = *pauVar36;
        unaff_RBX[0x50] = pauVar36;
        unaff_RBX[0x51] = pauVar36 + 1;
        unaff_RBX[0x52] = *pauVar36 + unaff_RBX[0x2b] + 1;
        *(ushort *)(unaff_RBX + 0x53) =
             ~((ushort)(SUB161(auVar49 >> 7,0) & 1) | (ushort)(SUB161(auVar49 >> 0xf,0) & 1) << 1 |
               (ushort)(SUB161(auVar49 >> 0x17,0) & 1) << 2 |
               (ushort)(SUB161(auVar49 >> 0x1f,0) & 1) << 3 |
               (ushort)(SUB161(auVar49 >> 0x27,0) & 1) << 4 |
               (ushort)(SUB161(auVar49 >> 0x2f,0) & 1) << 5 |
               (ushort)(SUB161(auVar49 >> 0x37,0) & 1) << 6 |
               (ushort)(SUB161(auVar49 >> 0x3f,0) & 1) << 7 |
               (ushort)(SUB161(auVar49 >> 0x47,0) & 1) << 8 |
               (ushort)(SUB161(auVar49 >> 0x4f,0) & 1) << 9 |
               (ushort)(SUB161(auVar49 >> 0x57,0) & 1) << 10 |
               (ushort)(SUB161(auVar49 >> 0x5f,0) & 1) << 0xb |
               (ushort)(SUB161(auVar49 >> 0x67,0) & 1) << 0xc |
               (ushort)(SUB161(auVar49 >> 0x6f,0) & 1) << 0xd |
               (ushort)(SUB161(auVar49 >> 0x77,0) & 1) << 0xe |
              (ushort)(byte)(auVar49[0xf] >> 7) << 0xf);
        unaff_RBX[0x54] = unaff_RBX[0x2d];
        unaff_RBX[0x55] = unaff_RBX[0xe] + 0x40;
        *(undefined1 *)((longlong)unaff_RBX + 0x7e) = 1;
        *(undefined1 *)((longlong)unaff_RBX + 0x7f) = 1;
        puVar37 = unaff_RBX + 0x50;
        puStack_e0 = (ulonglong *)0x14173258a;
        pdb_1415ea2a0(unaff_RBX + 0x21);
        unaff_RBX[0x11] = (longlong *)(lVar26 + 0x50);
        unaff_RBX[0x10] = puVar22;
        if (unaff_RBX[0x13] == 0) {
          pcVar9 = *(code **)(unaff_RBX[0x15] + 0x18);
          lVar45 = unaff_RBX[0x14] +
                   (*(longlong *)(unaff_RBX[0x15] + 0x10) - 1U & 0xfffffffffffffff0) + 0x10;
          *(undefined1 *)((longlong)unaff_RBX + 0x6d) = 1;
          *(undefined1 *)((longlong)unaff_RBX + 0x6e) = 1;
          *(undefined1 *)((longlong)unaff_RBX + 0x6f) = 1;
          puStack_e0 = (ulonglong *)0x141732736;
          (*pcVar9)(unaff_RBX + 0x50,lVar45);
          auVar47[0] = -(*(char *)(unaff_RBX + 0x50) == DAT_14332a660);
          auVar47[1] = -(*(char *)((longlong)unaff_RBX + 0x281) == UNK_14332a661);
          auVar47[2] = -(*(char *)((longlong)unaff_RBX + 0x282) == UNK_14332a662);
          auVar47[3] = -(*(char *)((longlong)unaff_RBX + 0x283) == UNK_14332a663);
          auVar47[4] = -(*(char *)((longlong)unaff_RBX + 0x284) == UNK_14332a664);
          auVar47[5] = -(*(char *)((longlong)unaff_RBX + 0x285) == UNK_14332a665);
          auVar47[6] = -(*(char *)((longlong)unaff_RBX + 0x286) == UNK_14332a666);
          auVar47[7] = -(*(char *)((longlong)unaff_RBX + 0x287) == UNK_14332a667);
          auVar47[8] = -(*(char *)(unaff_RBX + 0x51) == UNK_14332a668);
          auVar47[9] = -(*(char *)((longlong)unaff_RBX + 0x289) == UNK_14332a669);
          auVar47[10] = -(*(char *)((longlong)unaff_RBX + 0x28a) == UNK_14332a66a);
          auVar47[0xb] = -(*(char *)((longlong)unaff_RBX + 0x28b) == UNK_14332a66b);
          auVar47[0xc] = -(*(char *)((longlong)unaff_RBX + 0x28c) == UNK_14332a66c);
          auVar47[0xd] = -(*(char *)((longlong)unaff_RBX + 0x28d) == UNK_14332a66d);
          auVar47[0xe] = -(*(char *)((longlong)unaff_RBX + 0x28e) == UNK_14332a66e);
          auVar47[0xf] = -(*(char *)((longlong)unaff_RBX + 0x28f) == UNK_14332a66f);
          if ((ushort)((ushort)(SUB161(auVar47 >> 7,0) & 1) |
                       (ushort)(SUB161(auVar47 >> 0xf,0) & 1) << 1 |
                       (ushort)(SUB161(auVar47 >> 0x17,0) & 1) << 2 |
                       (ushort)(SUB161(auVar47 >> 0x1f,0) & 1) << 3 |
                       (ushort)(SUB161(auVar47 >> 0x27,0) & 1) << 4 |
                       (ushort)(SUB161(auVar47 >> 0x2f,0) & 1) << 5 |
                       (ushort)(SUB161(auVar47 >> 0x37,0) & 1) << 6 |
                       (ushort)(SUB161(auVar47 >> 0x3f,0) & 1) << 7 |
                       (ushort)(SUB161(auVar47 >> 0x47,0) & 1) << 8 |
                       (ushort)(SUB161(auVar47 >> 0x4f,0) & 1) << 9 |
                       (ushort)(SUB161(auVar47 >> 0x57,0) & 1) << 10 |
                       (ushort)(SUB161(auVar47 >> 0x5f,0) & 1) << 0xb |
                       (ushort)(SUB161(auVar47 >> 0x67,0) & 1) << 0xc |
                       (ushort)(SUB161(auVar47 >> 0x6f,0) & 1) << 0xd |
                       (ushort)(SUB161(auVar47 >> 0x77,0) & 1) << 0xe |
                      (ushort)(auVar47[0xf] >> 7) << 0xf) != 0xffff) {
            *(undefined1 *)((longlong)unaff_RBX + 0x6d) = 1;
            *(undefined1 *)((longlong)unaff_RBX + 0x6e) = 1;
            *(undefined1 *)((longlong)unaff_RBX + 0x6f) = 1;
            puStack_e0 = (ulonglong *)0x1417337ec;
            pdb_142dc8110(&UNK_14332b0b8,8,&UNK_14332b1c0);
            goto code_r0x000141735008;
          }
          unaff_RBX[0x1e] = 0;
          unaff_RBX[0x1f] = 0x10;
          unaff_RBX[0x20] = 0;
          unaff_RBX[0x50] = unaff_RBX + 0x1e;
          *(undefined1 *)((longlong)unaff_RBX + 0x7c) = 1;
          puVar37 = unaff_RBX + 0x50;
          puStack_e0 = (ulonglong *)0x14173279f;
          pdb_140ceee10(lVar45,puVar37,&UNK_14332b420);
          lVar26 = *(longlong *)(unaff_RBX[0xe] + 0x38);
          lVar27 = *(longlong *)(unaff_RBX[0xe] + 0x40);
          unaff_RBX[0x41] = *(undefined8 *)(lVar26 + 0x28);
          unaff_RBX[0x40] = *(undefined8 *)(lVar26 + 0x20);
          uVar29 = *(undefined8 *)(lVar26 + 0x10);
          pcVar9 = *(code **)(*(longlong *)(lVar26 + 0x18) + 0x38);
          *(undefined1 *)((longlong)unaff_RBX + 0x7c) = 1;
          puStack_e0 = (ulonglong *)0x1417327d4;
          uVar29 = (*pcVar9)(uVar29);
          unaff_RBX[0xba] = uVar29;
          uVar29 = *(undefined8 *)(*(longlong *)(unaff_RBX[0xe] + 0x38) + 0x10);
          pcVar9 = *(code **)(*(longlong *)(*(longlong *)(unaff_RBX[0xe] + 0x38) + 0x18) + 0x18);
          *(undefined1 *)((longlong)unaff_RBX + 0x7c) = 1;
          puStack_e0 = (ulonglong *)0x1417327f8;
          uVar25 = (*pcVar9)(uVar29);
          uVar29 = *(undefined8 *)(*(longlong *)(unaff_RBX[0xe] + 0x38) + 0x10);
          pcVar9 = *(code **)(*(longlong *)(*(longlong *)(unaff_RBX[0xe] + 0x38) + 0x18) + 0x20);
          *(undefined1 *)((longlong)unaff_RBX + 0x7c) = 1;
          puStack_e0 = (ulonglong *)0x141732816;
          uVar18 = (*pcVar9)(uVar29);
          *(undefined1 *)((longlong)unaff_RBX + 0x7c) = 1;
          puStack_e0 = (ulonglong *)0x141732834;
          pdb_1415e6d20(unaff_RBX + 0x38,unaff_RBX + 0x24);
          unaff_RBX[0x1a] = unaff_RBX[0x23];
          unaff_RBX[0x18] = unaff_RBX[0x21];
          unaff_RBX[0x19] = unaff_RBX[0x22];
          unaff_RBX[0x52] = unaff_RBX[0x20];
          unaff_RBX[0x50] = unaff_RBX[0x1e];
          unaff_RBX[0x51] = unaff_RBX[0x1f];
          *(undefined1 *)((longlong)unaff_RBX + 0x7c) = 0;
          pbStack_88 = (byte *)(unaff_RBX + 0x50);
          plStack_90 = unaff_RBX + 0x18;
          iStack_a0 = CONCAT31(iStack_a0._1_3_,uVar18);
          plStack_b8 = (longlong *)unaff_RBX[0xba];
          puStack_e0 = (ulonglong *)0x1417328c8;
          puStack_b0 = puVar37;
          uStack_a8 = uVar25;
          puStack_98 = unaff_RBX + 0x38;
          lVar26 = pdb_1417ff030(lVar27 + 0x10,unaff_RBX[0x40],unaff_RBX[0x41],lVar45);
        }
        else {
          lVar45 = *(longlong *)(unaff_RBX[0xe] + 0x38);
          lVar26 = *(longlong *)(unaff_RBX[0xe] + 0x40);
          unaff_RBX[0x41] = *(undefined8 *)(lVar45 + 0x28);
          unaff_RBX[0x40] = *(undefined8 *)(lVar45 + 0x20);
          uVar29 = *(undefined8 *)(lVar45 + 0x10);
          pcVar9 = *(code **)(*(longlong *)(lVar45 + 0x18) + 0x38);
          *(undefined1 *)((longlong)unaff_RBX + 0x6d) = 1;
          *(undefined1 *)((longlong)unaff_RBX + 0x6e) = 1;
          *(undefined1 *)((longlong)unaff_RBX + 0x6f) = 1;
          puStack_e0 = (ulonglong *)0x1417325e3;
          plVar24 = (longlong *)(*pcVar9)(uVar29);
          uVar29 = *(undefined8 *)(*(longlong *)(unaff_RBX[0xe] + 0x38) + 0x10);
          pcVar9 = *(code **)(*(longlong *)(*(longlong *)(unaff_RBX[0xe] + 0x38) + 0x18) + 0x18);
          *(undefined1 *)((longlong)unaff_RBX + 0x6d) = 1;
          *(undefined1 *)((longlong)unaff_RBX + 0x6e) = 1;
          *(undefined1 *)((longlong)unaff_RBX + 0x6f) = 1;
          puStack_e0 = (ulonglong *)0x14173260c;
          uVar25 = (*pcVar9)(uVar29);
          uVar29 = *(undefined8 *)(*(longlong *)(unaff_RBX[0xe] + 0x38) + 0x10);
          pcVar9 = *(code **)(*(longlong *)(*(longlong *)(unaff_RBX[0xe] + 0x38) + 0x18) + 0x20);
          *(undefined1 *)((longlong)unaff_RBX + 0x6d) = 1;
          *(undefined1 *)((longlong)unaff_RBX + 0x6e) = 1;
          *(undefined1 *)((longlong)unaff_RBX + 0x6f) = 1;
          puStack_e0 = (ulonglong *)0x141732632;
          uVar18 = (*pcVar9)(uVar29);
          *(undefined1 *)((longlong)unaff_RBX + 0x6d) = 1;
          *(undefined1 *)((longlong)unaff_RBX + 0x6e) = 1;
          *(undefined1 *)((longlong)unaff_RBX + 0x6f) = 1;
          puStack_e0 = (ulonglong *)0x141732658;
          pdb_1415e6d20(unaff_RBX + 0x38,unaff_RBX + 0x24);
          unaff_RBX[0x1a] = unaff_RBX[0x23];
          unaff_RBX[0x18] = unaff_RBX[0x21];
          unaff_RBX[0x19] = unaff_RBX[0x22];
          unaff_RBX[0x50] = 0;
          unaff_RBX[0x51] = 0x10;
          unaff_RBX[0x52] = 0;
          *(undefined1 *)((longlong)unaff_RBX + 0x6d) = 0;
          *(undefined1 *)((longlong)unaff_RBX + 0x6e) = 1;
          *(undefined1 *)((longlong)unaff_RBX + 0x6f) = 1;
          pbStack_88 = (byte *)(unaff_RBX + 0x50);
          plStack_90 = unaff_RBX + 0x18;
          iStack_a0 = CONCAT31(iStack_a0._1_3_,uVar18);
          puStack_e0 = (ulonglong *)0x1417326f2;
          plStack_b8 = plVar24;
          puStack_b0 = puVar37;
          uStack_a8 = uVar25;
          puStack_98 = unaff_RBX + 0x38;
          lVar26 = pdb_1417ff030(lVar26 + 0x10,unaff_RBX[0x40],unaff_RBX[0x41],0);
        }
        unaff_RBX[0x50] = unaff_RBX[0x13];
        unaff_RBX[0x51] = unaff_RBX[0x14];
        *(undefined4 *)(unaff_RBX + 0x52) = *(undefined4 *)(unaff_RBX + 0x15);
        *(undefined4 *)((longlong)unaff_RBX + 0x294) = *(undefined4 *)((longlong)unaff_RBX + 0xac);
        *(undefined4 *)(unaff_RBX + 0x53) = *(undefined4 *)(unaff_RBX + 0x16);
        *(undefined4 *)((longlong)unaff_RBX + 0x29c) = *(undefined4 *)((longlong)unaff_RBX + 0xb4);
        unaff_RBX[0x54] = lVar26;
        lVar45 = unaff_RBX[0x50];
        if (lVar26 == 0 || lVar45 != 0) {
          uVar29 = unaff_RBX[0x51];
          pbVar30 = (byte *)unaff_RBX[0x52];
          unaff_RBX[0x48] = unaff_RBX[0x26];
          param_2 = (ulonglong *)unaff_RBX[0x53];
          unaff_RBX[0x46] = unaff_RBX[0x24];
          unaff_RBX[0x47] = unaff_RBX[0x25];
          if (lVar26 != 0) {
            *(undefined1 *)((longlong)unaff_RBX + 0x6d) = 0;
            *(undefined1 *)((longlong)unaff_RBX + 0x6e) = 0;
            *(undefined1 *)((longlong)unaff_RBX + 0x6f) = 0;
            puStack_e0 = (ulonglong *)0x14173295d;
            pdb_1404b38e0(unaff_RBX + 0x54);
          }
        }
        else {
          lVar45 = *(longlong *)(unaff_RBX[0xe] + 0x10);
          uVar29 = *(undefined8 *)(unaff_RBX[0xe] + 0x18);
          unaff_RBX[0x18] = 1;
          unaff_RBX[0x19] = 1;
          unaff_RBX[0x1a] = lVar26;
          puStack_e0 = (ulonglong *)0x14173298d;
          pdb_14007ee60();
          puStack_e0 = (ulonglong *)0x14173299c;
          pbVar30 = pub_1406abab0(0x18,8);
          if (pbVar30 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
            puStack_e0 = (ulonglong *)0x1417337c2;
            pdb_142dc7e11(8,0x18);
          }
          *(undefined8 *)(pbVar30 + 0x10) = unaff_RBX[0x1a];
          uVar25 = unaff_RBX[0x19];
          *(undefined8 *)pbVar30 = unaff_RBX[0x18];
          *(undefined8 *)(pbVar30 + 8) = uVar25;
          unaff_RBX[0x46] = unaff_RBX[0x24];
          unaff_RBX[0x47] = unaff_RBX[0x25];
          unaff_RBX[0x48] = unaff_RBX[0x26];
          if (unaff_RBX[0x50] == 0) {
            plVar24 = (longlong *)unaff_RBX[0x51];
            LOCK();
            *plVar24 = *plVar24 + -1;
            UNLOCK();
            param_2 = (ulonglong *)&UNK_14332b220;
            if (*plVar24 == 0) {
              *(undefined1 *)((longlong)unaff_RBX + 0x6d) = 0;
              *(undefined1 *)((longlong)unaff_RBX + 0x6e) = 0;
              *(undefined1 *)((longlong)unaff_RBX + 0x6f) = 0;
              puStack_e0 = (ulonglong *)0x141732c0b;
              pdb_140c7a240(unaff_RBX + 0x51);
            }
          }
          else {
            plVar24 = (longlong *)unaff_RBX[0x52];
            LOCK();
            *plVar24 = *plVar24 + -1;
            UNLOCK();
            param_2 = (ulonglong *)&UNK_14332b220;
            if (*plVar24 == 0) {
              *(undefined1 *)((longlong)unaff_RBX + 0x6d) = 0;
              *(undefined1 *)((longlong)unaff_RBX + 0x6e) = 0;
              *(undefined1 *)((longlong)unaff_RBX + 0x6f) = 0;
              puStack_e0 = (ulonglong *)0x141732a1a;
              pdb_140c7a240(unaff_RBX + 0x52);
            }
          }
        }
        lVar26 = unaff_RBX[0x2b];
        if (lVar26 != 0) {
          lVar27 = lVar26 * 0x10 + 0x10;
          uVar39 = lVar26 + lVar27 + 0x11;
          if (uVar39 != 0) {
            puStack_e0 = (ulonglong *)0x141732c45;
            pub_1406abac0((byte *)(unaff_RBX[0x2a] - lVar27),uVar39,0x10);
          }
        }
        plVar24 = *(longlong **)unaff_RBX[0x11];
        LOCK();
        *plVar24 = *plVar24 + -1;
        UNLOCK();
        if (*plVar24 == 0) {
          unaff_RBX[0x4a] = unaff_RBX[0x29];
          unaff_RBX[0x4b] = unaff_RBX[0x28];
          puStack_e0 = (ulonglong *)0x141732c76;
          pdb_140dd7630();
        }
        lVar26 = unaff_RBX[0xe];
        *(undefined2 *)(lVar26 + 0x48) = 0;
      }
      else {
        uVar29 = unaff_RBX[0x38];
        pbVar30 = (byte *)unaff_RBX[0x39];
        unaff_RBX[0xcb] = uVar29;
        unaff_RBX[0xcc] = pbVar30;
        unaff_RBX[0x26] = unaff_RBX[0x3c];
        unaff_RBX[0x24] = unaff_RBX[0x3a];
        unaff_RBX[0x25] = unaff_RBX[0x3b];
        plVar24 = plRam0000000143cad8a8;
        if (*_DAT_143ca4b08 < 2) {
          bVar19 = *(byte *)(plRam0000000143cad8a8 + 2);
          puVar37 = (undefined8 *)(ulonglong)bVar19;
          if (2 < bVar19) {
            unaff_RBX[0x11] = uVar29;
            puStack_e0 = (ulonglong *)0x14173441b;
            uVar21 = pdb_142db8070(plRam0000000143cad8a8);
            puVar37 = (undefined8 *)(ulonglong)uVar21;
            uVar29 = unaff_RBX[0x11];
            if ((char)uVar21 != '\0') goto code_r0x000141733425;
            goto code_r0x00014173442d;
          }
          if (bVar19 == 0) goto code_r0x00014173442d;
code_r0x000141733425:
          unaff_RBX[0x11] = uVar29;
          puStack_e0 = (ulonglong *)0x141733434;
          cVar20 = pdb_140dd7f60(*plVar24);
          uVar29 = unaff_RBX[0x11];
          if (cVar20 == '\0') goto code_r0x00014173442d;
          lVar45 = *plVar24;
          uVar39 = *(ulonglong *)(lVar45 + 0x38);
          if (uVar39 == 0) {
            puStack_e0 = (ulonglong *)0x141734e81;
            pdb_142dc8110(&UNK_14332aff8,0x22,&UNK_14332b118);
            goto code_r0x000141735008;
          }
          uVar29 = *(undefined8 *)(lVar45 + 0x30);
          uVar25 = *(undefined8 *)(lVar45 + 0x40);
          uVar5 = *(undefined8 *)(lVar45 + 0x48);
          unaff_RBX[0x18] = uVar29;
          unaff_RBX[0x19] = uVar39;
          unaff_RBX[0x1a] = uVar25;
          unaff_RBX[0x1b] = uVar5;
          unaff_RBX[0x1c] = 0;
          unaff_RBX[0x21] = &UNK_14332b130;
          unaff_RBX[0x22] = 0x39;
          if (uVar39 == 1) {
            puStack_e0 = (ulonglong *)0x141734ebd;
            pdb_142dc8110(&UNK_14332aff8,0x22,&UNK_14332b118);
            goto code_r0x000141735008;
          }
          unaff_RBX[0x13] = uVar29;
          unaff_RBX[0x14] = uVar39;
          unaff_RBX[0x15] = uVar25;
          unaff_RBX[0x16] = uVar5;
          unaff_RBX[0x17] = 1;
          unaff_RBX[0x44] = *(longlong *)(unaff_RBX[0xe] + 0x38) + 0x20;
          if (uVar39 < 3) {
            puStack_e0 = (ulonglong *)0x141734ef9;
            pdb_142dc8110(&UNK_14332aff8,0x22,&UNK_14332b118);
            goto code_r0x000141735008;
          }
          unaff_RBX[0x2a] = uVar29;
          unaff_RBX[0x2b] = uVar39;
          unaff_RBX[0x2c] = uVar25;
          unaff_RBX[0x2d] = uVar5;
          unaff_RBX[0x2e] = 2;
          unaff_RBX[0x50] = unaff_RBX + 0x18;
          unaff_RBX[0x51] = unaff_RBX + 0x21;
          unaff_RBX[0x52] = &UNK_14332b058;
          unaff_RBX[0x53] = unaff_RBX + 0x13;
          unaff_RBX[0x54] = unaff_RBX + 0x44;
          unaff_RBX[0x55] = &UNK_14332b078;
          unaff_RBX[0x56] = unaff_RBX + 0x2a;
          unaff_RBX[0x57] = unaff_RBX[0xe] + 0x10;
          unaff_RBX[0x58] = &UNK_14332b098;
          unaff_RBX[0x1e] = unaff_RBX + 0x50;
          unaff_RBX[0x1f] = 3;
          unaff_RBX[0x20] = lVar45 + 0x30;
          puStack_e0 = (ulonglong *)0x1417335c0;
          pdb_14173b830(unaff_RBX + 0x1e);
code_r0x000141734657:
          uVar29 = unaff_RBX[0x11];
        }
        else {
code_r0x00014173442d:
          if ((*_DAT_143ca4ab0 == '\0') && (3 < *_DAT_143ca8e90)) {
            unaff_RBX[0x11] = uVar29;
            plVar24 = plRam0000000143cad8a8;
            param_2 = (ulonglong *)*plRam0000000143cad8a8;
            uVar39 = param_2[4];
            uVar6 = param_2[5];
            unaff_RBX[0xc2] = 4;
            unaff_RBX[0xc3] = uVar39;
            unaff_RBX[0xc4] = uVar6;
            puStack_e0 = (ulonglong *)0x141734481;
            uVar25 = pdb_140f33290();
            puStack_e0 = (ulonglong *)0x141734497;
            cVar20 = (*(code *)puVar37[3])(uVar25,unaff_RBX + 0xc2);
            uVar29 = unaff_RBX[0x11];
            if (cVar20 != '\0') {
              lVar45 = *plVar24;
              uVar39 = *(ulonglong *)(lVar45 + 0x38);
              if (uVar39 == 0) {
                puStack_e0 = (ulonglong *)0x141734f9b;
                pdb_142dc8110(&UNK_14332aff8,0x22,&UNK_14332b118);
                goto code_r0x000141735008;
              }
              uVar29 = *(undefined8 *)(lVar45 + 0x30);
              uVar5 = *(undefined8 *)(lVar45 + 0x40);
              uVar7 = *(undefined8 *)(lVar45 + 0x48);
              unaff_RBX[0x18] = uVar29;
              unaff_RBX[0x19] = uVar39;
              unaff_RBX[0x1a] = uVar5;
              unaff_RBX[0x1b] = uVar7;
              unaff_RBX[0x1c] = 0;
              unaff_RBX[0x44] = &UNK_14332b130;
              unaff_RBX[0x45] = 0x39;
              if (uVar39 == 1) {
                puStack_e0 = (ulonglong *)0x141734fd1;
                pdb_142dc8110(&UNK_14332aff8,0x22,&UNK_14332b118);
                goto code_r0x000141735008;
              }
              unaff_RBX[0x13] = uVar29;
              unaff_RBX[0x14] = uVar39;
              unaff_RBX[0x15] = uVar5;
              unaff_RBX[0x16] = uVar7;
              unaff_RBX[0x17] = 1;
              unaff_RBX[0xbb] = *(longlong *)(unaff_RBX[0xe] + 0x38) + 0x20;
              if (uVar39 < 3) {
                puStack_e0 = (ulonglong *)0x141735007;
                pdb_142dc8110(&UNK_14332aff8,0x22,&UNK_14332b118);
                goto code_r0x000141735008;
              }
              unaff_RBX[0x2a] = uVar29;
              unaff_RBX[0x2b] = uVar39;
              unaff_RBX[0x2c] = uVar5;
              unaff_RBX[0x2d] = uVar7;
              unaff_RBX[0x2e] = 2;
              unaff_RBX[0x50] = unaff_RBX + 0x18;
              unaff_RBX[0x51] = unaff_RBX + 0x44;
              unaff_RBX[0x52] = &UNK_14332b058;
              unaff_RBX[0x53] = unaff_RBX + 0x13;
              unaff_RBX[0x54] = unaff_RBX + 0xbb;
              unaff_RBX[0x55] = &UNK_14332b078;
              unaff_RBX[0x56] = unaff_RBX + 0x2a;
              unaff_RBX[0x57] = unaff_RBX[0xe] + 0x10;
              unaff_RBX[0x58] = &UNK_14332b098;
              unaff_RBX[0x21] = unaff_RBX + 0x50;
              unaff_RBX[0x22] = 3;
              unaff_RBX[0x23] = lVar45 + 0x30;
              unaff_RBX[0x20] = unaff_RBX[0xc4];
              unaff_RBX[0x1e] = unaff_RBX[0xc2];
              unaff_RBX[0x1f] = unaff_RBX[0xc3];
              plStack_b8 = unaff_RBX + 0x21;
              puStack_e0 = (ulonglong *)0x141734656;
              pdb_140dd7f80(param_2,uVar25,puVar37,unaff_RBX + 0x1e);
              goto code_r0x000141734657;
            }
          }
        }
        unaff_RBX[0x48] = unaff_RBX[0x26];
        unaff_RBX[0x46] = unaff_RBX[0x24];
        unaff_RBX[0x47] = unaff_RBX[0x25];
        lVar45 = 0;
        lVar26 = unaff_RBX[0xe];
      }
      uVar39 = *(longlong *)(lVar26 + 0x38) + 0x10;
      unaff_RBX[0x50] = lVar45;
      unaff_RBX[0x51] = uVar29;
      unaff_RBX[0x52] = pbVar30;
      unaff_RBX[0x53] = param_2;
      unaff_RBX[0x2c] = unaff_RBX[0x48];
      unaff_RBX[0x2a] = unaff_RBX[0x46];
      unaff_RBX[0x2b] = unaff_RBX[0x47];
      puVar37 = unaff_RBX + 0x50;
      puVar38 = unaff_RBX + 0x2a;
      puStack_e0 = (ulonglong *)0x1417346e4;
      pdb_141746c10(unaff_RBX + 0x38,uVar39,puVar37,puVar38);
      plVar24 = (longlong *)(unaff_RBX[0xe] + 0x38);
      *(undefined1 *)(unaff_RBX[0xe] + 0x60) = 0;
      plVar8 = plRam0000000143cad8b8;
      if (unaff_RBX[0x38] == 0) {
        if (*_DAT_143ca4b08 < 2) {
          bVar19 = *(byte *)(plRam0000000143cad8b8 + 2);
          uVar39 = (ulonglong)bVar19;
          if (2 < bVar19) {
            *(undefined1 *)((longlong)unaff_RBX + 0x6c) = 1;
            puStack_e0 = (ulonglong *)0x1417348cb;
            uVar21 = pdb_142db8070(plRam0000000143cad8b8);
            uVar39 = (ulonglong)uVar21;
            if ((char)uVar21 != '\0') goto code_r0x00014173472f;
            goto code_r0x0001417348d6;
          }
          if (bVar19 == 0) goto code_r0x0001417348d6;
code_r0x00014173472f:
          lVar45 = *plVar8;
          *(undefined1 *)((longlong)unaff_RBX + 0x6c) = 1;
          puStack_e0 = (ulonglong *)0x14173473b;
          cVar20 = pdb_140dd7f60(lVar45);
          if (cVar20 == '\0') goto code_r0x0001417348d6;
          lVar45 = *plVar8;
          uVar39 = *(ulonglong *)(lVar45 + 0x38);
          if (uVar39 == 0) {
            *(undefined1 *)((longlong)unaff_RBX + 0x6c) = 1;
            puStack_e0 = (ulonglong *)0x141734d41;
            pdb_142dc8110(&UNK_14332aff8,0x22,&UNK_14332b278);
            goto code_r0x000141735008;
          }
          uVar29 = *(undefined8 *)(lVar45 + 0x30);
          uVar25 = *(undefined8 *)(lVar45 + 0x40);
          uVar5 = *(undefined8 *)(lVar45 + 0x48);
          unaff_RBX[0x18] = uVar29;
          unaff_RBX[0x19] = uVar39;
          unaff_RBX[0x1a] = uVar25;
          unaff_RBX[0x1b] = uVar5;
          unaff_RBX[0x1c] = 0;
          unaff_RBX[0x21] = &UNK_14332b290;
          unaff_RBX[0x22] = 0x33;
          if (uVar39 == 1) {
            *(undefined1 *)((longlong)unaff_RBX + 0x6c) = 1;
            puStack_e0 = (ulonglong *)0x141734d63;
            pdb_142dc8110(&UNK_14332aff8,0x22,&UNK_14332b278);
            goto code_r0x000141735008;
          }
          unaff_RBX[0x13] = uVar29;
          unaff_RBX[0x14] = uVar39;
          unaff_RBX[0x15] = uVar25;
          unaff_RBX[0x16] = uVar5;
          unaff_RBX[0x17] = 1;
          unaff_RBX[0x24] = *plVar24 + 0x20;
          if (uVar39 < 3) {
            *(undefined1 *)((longlong)unaff_RBX + 0x6c) = 1;
            puStack_e0 = (ulonglong *)0x141734d85;
            pdb_142dc8110(&UNK_14332aff8,0x22,&UNK_14332b278);
            goto code_r0x000141735008;
          }
          unaff_RBX[0x2a] = uVar29;
          unaff_RBX[0x2b] = uVar39;
          unaff_RBX[0x2c] = uVar25;
          unaff_RBX[0x2d] = uVar5;
          unaff_RBX[0x2e] = 2;
          unaff_RBX[0x50] = unaff_RBX + 0x18;
          unaff_RBX[0x51] = unaff_RBX + 0x21;
          unaff_RBX[0x52] = &UNK_14332b058;
          unaff_RBX[0x53] = unaff_RBX + 0x13;
          unaff_RBX[0x54] = unaff_RBX + 0x24;
          unaff_RBX[0x55] = &UNK_14332b078;
          unaff_RBX[0x56] = puVar38;
          unaff_RBX[0x57] = unaff_RBX[0xe] + 0x10;
          unaff_RBX[0x58] = &UNK_14332b098;
          unaff_RBX[0x1e] = puVar37;
          unaff_RBX[0x1f] = 3;
          unaff_RBX[0x20] = lVar45 + 0x30;
          *(undefined1 *)((longlong)unaff_RBX + 0x6c) = 1;
          puStack_e0 = (ulonglong *)0x1417348b5;
          pdb_14173b780(unaff_RBX + 0x1e);
        }
        else {
code_r0x0001417348d6:
          plVar8 = plRam0000000143cad8b8;
          if ((*_DAT_143ca4ab0 == '\0') && (3 < *_DAT_143ca8e90)) {
            lVar45 = *plRam0000000143cad8b8;
            unaff_RBX[0x11] = lVar45;
            uVar29 = *(undefined8 *)(lVar45 + 0x20);
            uVar25 = *(undefined8 *)(lVar45 + 0x28);
            unaff_RBX[200] = 4;
            unaff_RBX[0xc9] = uVar29;
            unaff_RBX[0xca] = uVar25;
            *(undefined1 *)((longlong)unaff_RBX + 0x6c) = 1;
            puStack_e0 = (ulonglong *)0x14173492e;
            uVar29 = pdb_140f33290();
            pcVar9 = *(code **)(uVar39 + 0x18);
            *(undefined1 *)((longlong)unaff_RBX + 0x6c) = 1;
            puStack_e0 = (ulonglong *)0x141734949;
            cVar20 = (*pcVar9)(uVar29,unaff_RBX + 200);
            if (cVar20 != '\0') {
              lVar45 = *plVar8;
              uVar6 = *(ulonglong *)(lVar45 + 0x38);
              if (uVar6 == 0) {
                *(undefined1 *)((longlong)unaff_RBX + 0x6c) = 1;
                puStack_e0 = (ulonglong *)0x141734f1b;
                pdb_142dc8110(&UNK_14332aff8,0x22,&UNK_14332b278);
                goto code_r0x000141735008;
              }
              uVar25 = *(undefined8 *)(lVar45 + 0x30);
              uVar5 = *(undefined8 *)(lVar45 + 0x40);
              uVar7 = *(undefined8 *)(lVar45 + 0x48);
              unaff_RBX[0x18] = uVar25;
              unaff_RBX[0x19] = uVar6;
              unaff_RBX[0x1a] = uVar5;
              unaff_RBX[0x1b] = uVar7;
              unaff_RBX[0x1c] = 0;
              unaff_RBX[0x24] = &UNK_14332b290;
              unaff_RBX[0x25] = 0x33;
              if (uVar6 == 1) {
                *(undefined1 *)((longlong)unaff_RBX + 0x6c) = 1;
                puStack_e0 = (ulonglong *)0x141734f3d;
                pdb_142dc8110(&UNK_14332aff8,0x22,&UNK_14332b278);
                goto code_r0x000141735008;
              }
              unaff_RBX[0x13] = uVar25;
              unaff_RBX[0x14] = uVar6;
              unaff_RBX[0x15] = uVar5;
              unaff_RBX[0x16] = uVar7;
              unaff_RBX[0x17] = 1;
              unaff_RBX[0x44] = *plVar24 + 0x20;
              if (uVar6 < 3) {
                *(undefined1 *)((longlong)unaff_RBX + 0x6c) = 1;
                puStack_e0 = (ulonglong *)0x141734f5f;
                pdb_142dc8110(&UNK_14332aff8,0x22,&UNK_14332b278);
                goto code_r0x000141735008;
              }
              unaff_RBX[0x2a] = uVar25;
              unaff_RBX[0x2b] = uVar6;
              unaff_RBX[0x2c] = uVar5;
              unaff_RBX[0x2d] = uVar7;
              unaff_RBX[0x2e] = 2;
              unaff_RBX[0x50] = unaff_RBX + 0x18;
              unaff_RBX[0x51] = unaff_RBX + 0x24;
              unaff_RBX[0x52] = &UNK_14332b058;
              unaff_RBX[0x53] = unaff_RBX + 0x13;
              unaff_RBX[0x54] = unaff_RBX + 0x44;
              unaff_RBX[0x55] = &UNK_14332b078;
              unaff_RBX[0x56] = puVar38;
              unaff_RBX[0x57] = unaff_RBX[0xe] + 0x10;
              unaff_RBX[0x58] = &UNK_14332b098;
              unaff_RBX[0x21] = puVar37;
              unaff_RBX[0x22] = 3;
              unaff_RBX[0x23] = lVar45 + 0x30;
              unaff_RBX[0x20] = unaff_RBX[0xca];
              unaff_RBX[0x1e] = unaff_RBX[200];
              unaff_RBX[0x1f] = unaff_RBX[0xc9];
              *(undefined1 *)((longlong)unaff_RBX + 0x6c) = 1;
              plStack_b8 = unaff_RBX + 0x21;
              puStack_e0 = (ulonglong *)0x141734afa;
              pdb_140dd7f80(unaff_RBX[0x11],uVar29,uVar39,unaff_RBX + 0x1e);
            }
          }
        }
        uVar29 = _UNK_14332b4a0;
        if (unaff_RBX[0x38] == 0) {
          plStack_b8 = unaff_RBX + 0x39;
          lVar45 = *(longlong *)(unaff_RBX[0xe] + 0x40);
          unaff_RBX[0x50] = _DAT_14332b498;
          unaff_RBX[0x51] = uVar29;
          lVar26 = *(longlong *)(unaff_RBX[0xe] + 0x38);
          uVar29 = *(undefined8 *)(lVar26 + 0x20);
          uVar25 = *(undefined8 *)(lVar26 + 0x28);
          *(undefined1 *)((longlong)unaff_RBX + 0x6c) = 1;
          puStack_e0 = (ulonglong *)0x141734b49;
          pdb_141c2b710(lVar45 + 0x10,unaff_RBX + 0x50,uVar29,uVar25);
        }
      }
      *(undefined4 *)(unaff_RBX + 0x52) = *(undefined4 *)(unaff_RBX + 0x3a);
      *(undefined4 *)((longlong)unaff_RBX + 0x294) = *(undefined4 *)((longlong)unaff_RBX + 0x1d4);
      *(undefined4 *)(unaff_RBX + 0x53) = *(undefined4 *)(unaff_RBX + 0x3b);
      *(undefined4 *)((longlong)unaff_RBX + 0x29c) = *(undefined4 *)((longlong)unaff_RBX + 0x1dc);
      unaff_RBX[0x50] = unaff_RBX[0x38];
      unaff_RBX[0x51] = unaff_RBX[0x39];
      *(undefined1 *)((longlong)unaff_RBX + 0x6c) = 0;
      puStack_e0 = (ulonglong *)0x141734b7f;
      pdb_14173bac0(unaff_RBX + 0x4c,unaff_RBX + 0x50);
      unaff_RBX[0x11] = unaff_RBX[0xe] + 0x58;
      puStack_e0 = (ulonglong *)0x141734b94;
      pdb_141ac4fd0();
      plVar8 = *(longlong **)unaff_RBX[0x11];
      LOCK();
      *plVar8 = *plVar8 + -1;
      UNLOCK();
      puVar22 = (ulonglong *)unaff_RBX[0x10];
      if (*plVar8 == 0) {
        puStack_e0 = (ulonglong *)0x141734bb1;
        pdb_140dd76c0();
      }
      plVar8 = (longlong *)*plVar24;
      LOCK();
      *plVar8 = *plVar8 + -1;
      UNLOCK();
      if (*plVar8 == 0) {
        puStack_e0 = (ulonglong *)0x141734bc3;
        pdb_140dd76c0(plVar24);
      }
      plVar24 = *(longlong **)(unaff_RBX[0xe] + 0x40);
      LOCK();
      *plVar24 = *plVar24 + -1;
      UNLOCK();
      if (*plVar24 == 0) {
        puStack_e0 = (ulonglong *)0x141734bdf;
        pdb_140dd78e0(unaff_RBX[0xe] + 0x40);
      }
      plVar24 = *(longlong **)unaff_RBX[0xe];
      if (plVar24 != (longlong *)0x0) {
        LOCK();
        *plVar24 = *plVar24 + -1;
        UNLOCK();
        if (*plVar24 == 0) {
          puStack_e0 = (ulonglong *)0x141734bfb;
          pdb_140c7a240(unaff_RBX[0xe]);
        }
      }
      goto code_r0x000141734bfc;
    }
    *(undefined8 *)(lVar45 + 0x50) = *(undefined8 *)(lVar45 + 0x28);
    *(undefined8 *)(lVar45 + 0x58) = *(undefined8 *)(lVar45 + 0x30);
    plVar24 = plRam0000000143cad8a0;
    param_1 = param_2;
    if (*_DAT_143ca4b08 < 2) {
      bVar19 = *(byte *)(plRam0000000143cad8a0 + 2);
      uVar39 = (ulonglong)bVar19;
      if (2 < bVar19) {
        puStack_e0 = (ulonglong *)0x141733813;
        uVar21 = pdb_142db8070(plRam0000000143cad8a0);
        uVar39 = (ulonglong)uVar21;
        lVar45 = unaff_RBX[0xe];
        bVar19 = (byte)uVar21;
      }
      if (bVar19 != 0) {
        puStack_e0 = (ulonglong *)0x141732e34;
        cVar20 = pdb_140dd7f60(*plVar24);
        lVar45 = unaff_RBX[0xe];
        if (cVar20 != '\0') {
          lVar26 = *plVar24;
          uVar39 = *(ulonglong *)(lVar26 + 0x38);
          if (uVar39 == 0) {
            puStack_e0 = (ulonglong *)0x141734c7d;
            pdb_142dc8110(&UNK_14332aff8,0x22,&UNK_14332b0d8);
          }
          else {
            uVar29 = *(undefined8 *)(lVar26 + 0x30);
            uVar25 = *(undefined8 *)(lVar26 + 0x40);
            uVar5 = *(undefined8 *)(lVar26 + 0x48);
            unaff_RBX[0x18] = uVar29;
            unaff_RBX[0x19] = uVar39;
            unaff_RBX[0x1a] = uVar25;
            unaff_RBX[0x1b] = uVar5;
            unaff_RBX[0x1c] = 0;
            unaff_RBX[0x1e] = &UNK_14332b0f0;
            unaff_RBX[0x1f] = 0x47;
            if (uVar39 != 1) {
              unaff_RBX[0x13] = uVar29;
              unaff_RBX[0x14] = uVar39;
              unaff_RBX[0x15] = uVar25;
              unaff_RBX[0x16] = uVar5;
              unaff_RBX[0x17] = 1;
              unaff_RBX[0x21] = *(longlong *)(lVar45 + 0x38) + 0x20;
              if (uVar39 < 3) {
                puStack_e0 = (ulonglong *)0x141734cfd;
                pdb_142dc8110(&UNK_14332aff8,0x22,&UNK_14332b0d8);
                goto code_r0x000141735008;
              }
              unaff_RBX[0x2a] = uVar29;
              unaff_RBX[0x2b] = uVar39;
              unaff_RBX[0x2c] = uVar25;
              unaff_RBX[0x2d] = uVar5;
              unaff_RBX[0x2e] = 2;
              unaff_RBX[0x50] = unaff_RBX + 0x18;
              unaff_RBX[0x51] = unaff_RBX + 0x1e;
              unaff_RBX[0x52] = &UNK_14332b058;
              unaff_RBX[0x53] = unaff_RBX + 0x13;
              unaff_RBX[0x54] = unaff_RBX + 0x21;
              unaff_RBX[0x55] = &UNK_14332b078;
              unaff_RBX[0x56] = unaff_RBX + 0x2a;
              unaff_RBX[0x57] = lVar45 + 0x10;
              unaff_RBX[0x58] = &UNK_14332b098;
              unaff_RBX[0x38] = unaff_RBX + 0x50;
              unaff_RBX[0x39] = 3;
              unaff_RBX[0x3a] = lVar26 + 0x30;
              puStack_e0 = (ulonglong *)0x141732fb9;
              pdb_14173b6d0(unaff_RBX + 0x38);
              goto code_r0x000141733a3f;
            }
            puStack_e0 = (ulonglong *)0x141734cbd;
            pdb_142dc8110(&UNK_14332aff8,0x22,&UNK_14332b0d8);
          }
          goto code_r0x000141735008;
        }
      }
    }
    plVar24 = plRam0000000143cad8a0;
    if ((*_DAT_143ca4ab0 != '\0') || (*_DAT_143ca8e90 < 4)) goto code_r0x000141733a43;
    lVar26 = *plRam0000000143cad8a0;
    uVar29 = *(undefined8 *)(lVar26 + 0x20);
    uVar25 = *(undefined8 *)(lVar26 + 0x28);
    unaff_RBX[0xbf] = 4;
    unaff_RBX[0xc0] = uVar29;
    unaff_RBX[0xc1] = uVar25;
    puStack_e0 = (ulonglong *)0x141733870;
    uVar29 = pdb_140f33290();
    puStack_e0 = (ulonglong *)0x141733886;
    cVar20 = (**(code **)(uVar39 + 0x18))(uVar29,unaff_RBX + 0xbf);
    lVar45 = unaff_RBX[0xe];
    if (cVar20 == '\0') goto code_r0x000141733a43;
    lVar27 = *plVar24;
    uVar6 = *(ulonglong *)(lVar27 + 0x38);
    if (uVar6 == 0) {
      puStack_e0 = (ulonglong *)0x141734da3;
      pdb_142dc8110(&UNK_14332aff8,0x22,&UNK_14332b0d8);
    }
    else {
      uVar25 = *(undefined8 *)(lVar27 + 0x30);
      uVar5 = *(undefined8 *)(lVar27 + 0x40);
      uVar7 = *(undefined8 *)(lVar27 + 0x48);
      unaff_RBX[0x18] = uVar25;
      unaff_RBX[0x19] = uVar6;
      unaff_RBX[0x1a] = uVar5;
      unaff_RBX[0x1b] = uVar7;
      unaff_RBX[0x1c] = 0;
      unaff_RBX[0x21] = &UNK_14332b0f0;
      unaff_RBX[0x22] = 0x47;
      if (uVar6 != 1) {
        unaff_RBX[0x13] = uVar25;
        unaff_RBX[0x14] = uVar6;
        unaff_RBX[0x15] = uVar5;
        unaff_RBX[0x16] = uVar7;
        unaff_RBX[0x17] = 1;
        unaff_RBX[0x24] = *(longlong *)(lVar45 + 0x38) + 0x20;
        if (uVar6 < 3) {
          puStack_e0 = (ulonglong *)0x141734e23;
          pdb_142dc8110(&UNK_14332aff8,0x22,&UNK_14332b0d8);
          goto code_r0x000141735008;
        }
        unaff_RBX[0x2a] = uVar25;
        unaff_RBX[0x2b] = uVar6;
        unaff_RBX[0x2c] = uVar5;
        unaff_RBX[0x2d] = uVar7;
        unaff_RBX[0x2e] = 2;
        unaff_RBX[0x50] = unaff_RBX + 0x18;
        unaff_RBX[0x51] = unaff_RBX + 0x21;
        unaff_RBX[0x52] = &UNK_14332b058;
        unaff_RBX[0x53] = unaff_RBX + 0x13;
        unaff_RBX[0x54] = unaff_RBX + 0x24;
        unaff_RBX[0x55] = &UNK_14332b078;
        unaff_RBX[0x56] = unaff_RBX + 0x2a;
        unaff_RBX[0x57] = lVar45 + 0x10;
        unaff_RBX[0x58] = &UNK_14332b098;
        unaff_RBX[0x1e] = unaff_RBX + 0x50;
        unaff_RBX[0x1f] = 3;
        unaff_RBX[0x20] = lVar27 + 0x30;
        unaff_RBX[0x3a] = unaff_RBX[0xc1];
        unaff_RBX[0x38] = unaff_RBX[0xbf];
        unaff_RBX[0x39] = unaff_RBX[0xc0];
        plStack_b8 = unaff_RBX + 0x1e;
        puStack_e0 = (ulonglong *)0x141733a3e;
        pdb_140dd7f80(lVar26,uVar29,uVar39,unaff_RBX + 0x38);
        goto code_r0x000141733a3f;
      }
      puStack_e0 = (ulonglong *)0x141734de3;
      pdb_142dc8110(&UNK_14332aff8,0x22,&UNK_14332b0d8);
    }
code_r0x000141735008:
                    /* WARNING: Does not return */
    pcVar9 = (code *)invalidInstructionException();
    (*pcVar9)();
  case 10:
    pcVar1 = (char *)((longlong)param_2 + 0xf);
    cVar20 = *pcVar1;
    *pcVar1 = *pcVar1 + cVar32;
    if (*pcVar1 == '\0' || SCARRY1(cVar20,cVar32) != *pcVar1 < '\0') {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    pbStack_88 = &UNK_14332bd08;
    puStack_e0 = (ulonglong *)0x14173645d;
    pdb_140974580();
    puStack_e0 = (ulonglong *)0x141736472;
    pub_1406abac0(pbStack_88,0x38,8);
    if ((int)unaff_R14 == 1) {
      param_1 = *(ulonglong **)(CONCAT44(uStack_7c,uStack_80) + 0x10);
      unaff_RBX = *(undefined8 **)(CONCAT44(uStack_7c,uStack_80) + 0x18);
      puStack_e0 = (ulonglong *)0x141736489;
      pdb_14007ee60();
      puStack_e0 = (ulonglong *)0x141736498;
      unaff_XMM6_Qa = pub_1406abab0(0x10,8);
      if (unaff_XMM6_Qa == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
        puStack_e0 = (ulonglong *)0x14173650b;
        pdb_142dc7e11(8,0x10);
      }
      unaff_XMM6_Qa[0] = 1;
      unaff_XMM6_Qa[1] = 0;
      unaff_XMM6_Qa[2] = 0;
      unaff_XMM6_Qa[3] = 0;
      unaff_XMM6_Qa[4] = 0;
      unaff_XMM6_Qa[5] = 0;
      unaff_XMM6_Qa[6] = 0;
      unaff_XMM6_Qa[7] = 0;
      unaff_XMM6_Qa[8] = 1;
      unaff_XMM6_Qa[9] = 0;
      unaff_XMM6_Qa[10] = 0;
      unaff_XMM6_Qa[0xb] = 0;
      unaff_XMM6_Qa[0xc] = 0;
      unaff_XMM6_Qa[0xd] = 0;
      unaff_XMM6_Qa[0xe] = 0;
      unaff_XMM6_Qa[0xf] = 0;
      unaff_XMM6_Qb = &UNK_14332b300;
    }
    puStack_e0 = (ulonglong *)0x1417364c9;
    pdb_14097e360();
    param_2[1] = (ulonglong)param_1;
    param_2[2] = (ulonglong)unaff_RBX;
    param_2[3] = (ulonglong)unaff_XMM6_Qa;
    param_2[4] = (ulonglong)unaff_XMM6_Qb;
    *param_2 = 0;
    *(undefined1 *)(CONCAT44(uStack_7c,uStack_80) + 0x30) = 1;
    return param_2;
  case 0xb:
    *(char *)((longlong)unaff_RBX + 0x5f) = *(char *)((longlong)unaff_RBX + 0x5f) + (char)unaff_RBX;
    return puVar22;
  case 0xc:
    return (ulonglong *)((ulonglong)param_2 & 0xffffffff);
  case 0xd:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0xe:
    ppuVar43 = (ulonglong **)&stack0xfffffffffffffef0;
    puStack_e0 = (ulonglong *)0xfffffffffffffffe;
    param_1 = (ulonglong *)&UNK_14332bd08;
  case 0x11:
    iVar2 = *(int *)(&UNK_14332bd40 + (ulonglong)UNK_14332bda8 * 4);
    ppuVar43[4] = param_1;
                    /* WARNING: Could not recover jumptable at 0x00014173667a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    puVar22 = (ulonglong *)(*(code *)(&UNK_14332bd40 + iVar2))();
    return puVar22;
  case 0xf:
    if (!SCARRY1((char)param_3,(char)unaff_R13)) {
      *(uint *)puVar22 = (int)*puVar22 + uVar21;
    }
    break;
  case 0x10:
code_r0x00014173677d:
    LOCK();
    *(longlong *)uStack_58 = *(longlong *)uStack_58 + -1;
    UNLOCK();
    if (*(longlong *)uStack_58 == 0) {
      puStack_e0 = (ulonglong *)0x141736790;
      pdb_141746b00(ppuVar43);
    }
    break;
  case 0x12:
    uVar39 = param_1[0x15];
    param_1[0x15] = 1;
    *(int *)(unaff_RBX + 2) = (int)uStack_a8;
    *(int *)((longlong)unaff_RBX + 0x14) = uStack_a8._4_4_;
    *(int *)(unaff_RBX + 3) = iStack_a0;
    *(int *)((longlong)unaff_RBX + 0x1c) = iStack_9c;
    *unaff_RBX = plStack_b8;
    unaff_RBX[1] = puStack_b0;
    param_1[0x1a] = uVar39;
    param_1[0x1b] = 0;
    puStack_40 = param_1 + 0x15;
    puStack_e0 = (ulonglong *)0x14173672a;
    pdb_140b36d70(&plStack_90,puStack_40,&stack0xffffffffffffffd7,param_2);
    if ((int)plStack_90 == 2) {
      cVar20 = '\x04';
      puVar22 = (ulonglong *)0x1;
      goto code_r0x00014173679f;
    }
    uStack_58 = (byte *)CONCAT44(uStack_7c,uStack_80);
    uStack_50 = (ulonglong *)CONCAT44(iStack_74,iStack_78);
    plStack_68 = plStack_90;
    plStack_60 = (longlong *)pbStack_88;
    puStack_e0 = (ulonglong *)0x141736758;
    pdb_14097c580(puStack_40);
    if (plStack_68 != (longlong *)0x0) {
      if (plStack_60 == (longlong *)0x0) goto code_r0x00014173677d;
      LOCK();
      *uStack_50 = *uStack_50 + -1;
      UNLOCK();
      if (*uStack_50 == 0) {
        puStack_e0 = (ulonglong *)0x14173677a;
        pdb_140c7a240(&uStack_50);
      }
    }
    break;
  case 0x13:
    return puVar22;
  case 0x14:
    goto code_r0x00014173699e;
  case 0x15:
    puStack_e0 = (ulonglong *)0x141736999;
    pdb_14097d2c0();
    param_2[1] = (ulonglong)param_1;
    goto code_r0x00014173699e;
  case 0x16:
    pcVar9 = (code *)swi(3);
    puVar22 = (ulonglong *)(*pcVar9)();
    return puVar22;
  case 0x17:
    (&UNK_14332bd38)[iVar2] = 2;
    return puVar22;
  case 0x18:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x19:
    *(int *)(param_2 + 9) = (int)param_2[9] + (int)auStack_d8;
    puStack_e0 = (ulonglong *)0x141736c19;
    pdb_14097dce0();
    param_2[1] = (ulonglong)param_1;
    param_2[2] = (ulonglong)unaff_RBX;
    param_2[3] = (ulonglong)puVar22;
    param_2[4] = in_XMM0_Qa;
    *param_2 = 0;
    *(undefined1 *)(CONCAT44(uStack_7c,uStack_80) + 0x30) = 1;
    return param_2;
  case 0x1a:
    return puVar22;
  case 0x1b:
    ppuVar43 = (ulonglong **)(ulonglong)((int)param_2 + 0x80);
  case 0x1e:
    puVar22 = ppuVar43[-5];
    *(undefined1 *)(puVar22 + 6) = 2;
    return puVar22;
  case 0x1c:
    puVar22 = (ulonglong *)(ulonglong)(uVar21 | 0x1bf447d);
  case 0x1d:
    *(char *)puVar22 = (char)*puVar22 + (char)puVar22;
    puVar22[1] = 1;
    puStack_e0 = (ulonglong *)0x141736e99;
    pdb_14097afe0();
    param_2[1] = (ulonglong)param_1;
    param_2[2] = (ulonglong)unaff_RBX;
    param_2[3] = (ulonglong)puVar22;
    param_2[4] = (ulonglong)&UNK_14332b300;
    *param_2 = 0;
    *(undefined1 *)(CONCAT44(uStack_7c,uStack_80) + 0x30) = 1;
    return param_2;
  case 0x1f:
    puVar40 = auStack_148;
    goto code_r0x000141736fe1;
  case 0x20:
    *(int *)puVar22 = 1;
    ppuVar41 = (ulonglong **)puStack_1d0;
    goto code_r0x0001417370ed;
  case 0x21:
    puVar22 = (ulonglong *)CONCAT71(uVar33,cVar20 + -0x43);
    puStack_1d0 = (undefined1 *)&puStack_e0;
    ppuVar41 = &puStack_e0;
    puStack_e0 = (ulonglong *)ppuVar43;
    cVar20 = '\x1d';
    do {
      ppuVar43 = ppuVar43 + -1;
      ppuVar41 = ppuVar41 + -1;
      *ppuVar41 = *ppuVar43;
      cVar20 = cVar20 + -1;
    } while ('\0' < cVar20);
    puVar42 = (ulonglong *)auStack_f919;
    ppuVar43 = &puStack_e0;
    ppuVar41 = &puStack_e0;
    if (puVar22 == (ulonglong *)0x0) {
                    /* WARNING: Subroutine does not return */
      pdb_142dc7e11(8,0x10);
    }
code_r0x0001417370ed:
    puStack_1d0 = (undefined1 *)ppuVar41;
    *puVar22 = 1;
    puVar22[1] = 1;
    *(undefined8 *)((longlong)puVar42 + -8) = 0x141737119;
    pdb_14097d110();
    param_2[1] = (ulonglong)param_1;
    param_2[2] = (ulonglong)unaff_RBX;
    param_2[3] = (ulonglong)puVar22;
    param_2[4] = (ulonglong)&UNK_14332b300;
    uVar39 = (ulonglong)ppuVar43[-5];
    *param_2 = 0;
    *(undefined1 *)(uVar39 + 0x30) = 1;
    return param_2;
  case 0x22:
    puVar40 = (undefined1 *)(ulonglong)((int)auStack_d8 - 0x38);
code_r0x000141736fe1:
    *(byte **)(puVar40 + 0x20) = unaff_XMM6_Qa;
    *(undefined **)(puVar40 + 0x28) = unaff_XMM6_Qb;
    puVar22 = (ulonglong *)param_2[0xb];
    *(undefined1 *)(puVar22 + 6) = 2;
    return puVar22;
  case 0x23:
    pcVar1 = (char *)((longlong)param_2 + 0xf);
    cVar20 = *pcVar1;
    *pcVar1 = *pcVar1 + cVar32;
    if (*pcVar1 == '\0' || SCARRY1(cVar20,cVar32) != *pcVar1 < '\0') {
      *(undefined1 *)((ulonglong *)CONCAT44(uStack_7c,uStack_80) + 6) = 2;
      return (ulonglong *)CONCAT44(uStack_7c,uStack_80);
    }
    iVar2 = *(int *)((longlong)puVar22 * 4 + 0x4332bd94);
    unaff_RBX[0xe] = param_2;
                    /* WARNING: Could not emulate address calculation at 0x0001417372e6 */
                    /* WARNING: Treating indirect jump as call */
    puVar22 = (ulonglong *)(*(code *)((longlong)iVar2 + 0x4332bd94))();
    return puVar22;
  case 0x24:
code_r0x000141739dd4:
    puVar22 = *(ulonglong **)(unaff_RBX[0xe] + 0x40);
  case 0x25:
    LOCK();
    *puVar22 = *puVar22 - 1;
    UNLOCK();
    if (*puVar22 == 0) {
      puStack_e0 = (ulonglong *)0x141739def;
      pdb_140dd78e0(unaff_RBX[0xe] + 0x40);
    }
    plVar24 = *(longlong **)unaff_RBX[0xe];
    if (plVar24 != (longlong *)0x0) {
      LOCK();
      *plVar24 = *plVar24 + -1;
      UNLOCK();
      if (*plVar24 == 0) {
        puStack_e0 = (ulonglong *)0x141739e0b;
        pdb_140c7a240(unaff_RBX[0xe]);
      }
    }
code_r0x000141739e0c:
    uVar39 = unaff_RBX[0x4c];
    uVar6 = unaff_RBX[0x4d];
    uVar17 = unaff_RBX[0x4f];
    unaff_R13[3] = unaff_RBX[0x4e];
    unaff_R13[4] = uVar17;
    unaff_R13[1] = uVar39;
    unaff_R13[2] = uVar6;
    *unaff_R13 = 0;
    uVar18 = 1;
code_r0x000141739e30:
    *(undefined1 *)(unaff_RBX[0xe] + 0x4a) = uVar18;
    return unaff_R13;
  case 0x26:
    lVar45 = CONCAT71(uVar33,cVar20 + (char)*puVar22);
    *(char *)(lVar45 + -0x77) = *(char *)(lVar45 + -0x77) + '\b';
    param_1 = (ulonglong *)(ulonglong)*(uint *)(lVar45 + 0x48000002);
    uVar39 = 0x4332b098;
code_r0x000141738b49:
    unaff_RBX[0x2a] = param_4;
    unaff_RBX[0x2b] = uVar39;
    unaff_RBX[0x2c] = param_2;
    unaff_RBX[0x2d] = param_3;
    unaff_RBX[0x2e] = 2;
    unaff_RBX[0x50] = unaff_RBX + 0x18;
    unaff_RBX[0x51] = unaff_RBX + 0x21;
    unaff_RBX[0x52] = &UNK_14332b058;
    unaff_RBX[0x53] = unaff_RBX + 0x13;
    unaff_RBX[0x54] = unaff_RBX + 0x24;
    unaff_RBX[0x55] = &UNK_14332b078;
    unaff_RBX[0x56] = unaff_RBX + 0x2a;
    unaff_RBX[0x57] = in_R11 + 0x10;
    unaff_RBX[0x58] = &UNK_14332b098;
    unaff_RBX[0x1e] = unaff_RBX + 0x50;
    unaff_RBX[0x1f] = 3;
    unaff_RBX[0x20] = lVar45 + 0x30;
    unaff_RBX[0x3a] = unaff_RBX[0xc1];
    unaff_RBX[0x38] = unaff_RBX[0xbf];
    unaff_RBX[0x39] = unaff_RBX[0xc0];
    plStack_b8 = unaff_RBX + 0x1e;
    puStack_e0 = (ulonglong *)0x141738c4e;
    pdb_140dd7f80(unaff_R14,unaff_R15,unaff_R12,unaff_RBX + 0x38);
code_r0x000141738c4f:
    in_R11 = unaff_RBX[0xe];
code_r0x000141738c53:
    *(longlong *)(in_R11 + 0x60) = in_R11 + 0x50;
    *(undefined8 *)(in_R11 + 0x68) = 0;
    unaff_RBX[0x10] = in_R11 + 0x60;
    puStack_e0 = (ulonglong *)0x141738c84;
    pdb_140b35bb0(unaff_RBX + 0x50,in_R11 + 0x60,(longlong)unaff_RBX + 0x1bf,param_1);
    lVar45 = unaff_RBX[0x50];
    if (lVar45 == 2) {
      *unaff_R13 = 1;
      uVar18 = 3;
      goto code_r0x000141739e30;
    }
    lVar26 = unaff_RBX[0x51];
    uVar29 = unaff_RBX[0x52];
    uVar25 = unaff_RBX[0x53];
    uVar5 = unaff_RBX[0x54];
    lVar27 = unaff_RBX[0xe];
    if (*(longlong *)(lVar27 + 0x68) != 0) {
      unaff_RBX[0x10] = *(longlong *)(lVar27 + 0x68);
      puStack_e0 = (ulonglong *)0x141738ccf;
      pdb_140974580();
      puStack_e0 = (ulonglong *)0x141738ce7;
      pub_1406abac0((byte *)unaff_RBX[0x10],0x38,8);
      lVar27 = unaff_RBX[0xe];
    }
    if ((int)lVar45 == 1) {
      uVar29 = *(undefined8 *)(lVar27 + 0x10);
      uVar25 = *(undefined8 *)(lVar27 + 0x18);
      puStack_e0 = (ulonglong *)0x141738cfd;
      pdb_14007ee60();
      puStack_e0 = (ulonglong *)0x141738d0c;
      pbVar30 = pub_1406abab0(0x10,8);
      if (pbVar30 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
        puStack_e0 = (ulonglong *)0x141738e29;
        pdb_142dc7e11(8,0x10);
      }
      pbVar30[0] = 1;
      pbVar30[1] = 0;
      pbVar30[2] = 0;
      pbVar30[3] = 0;
      pbVar30[4] = 0;
      pbVar30[5] = 0;
      pbVar30[6] = 0;
      pbVar30[7] = 0;
      pbVar30[8] = 1;
      pbVar30[9] = 0;
      pbVar30[10] = 0;
      pbVar30[0xb] = 0;
      pbVar30[0xc] = 0;
      pbVar30[0xd] = 0;
      pbVar30[0xe] = 0;
      pbVar30[0xf] = 0;
      unaff_RBX[0x4c] = uVar29;
      unaff_RBX[0x4d] = uVar25;
      unaff_RBX[0x4e] = pbVar30;
      unaff_RBX[0x4f] = &UNK_14332b300;
    }
    else {
      unaff_RBX[0x2a] = lVar26;
      unaff_RBX[0x2b] = uVar29;
      unaff_RBX[0x2c] = uVar25;
      unaff_RBX[0x2d] = uVar5;
      uVar29 = _UNK_14332b500;
      if (lVar26 == 0) {
        plStack_b8 = unaff_RBX + 0x2b;
        lVar45 = *(longlong *)(unaff_RBX[0xe] + 0x40);
        unaff_RBX[0x50] = _DAT_14332b4f8;
        unaff_RBX[0x51] = uVar29;
        lVar26 = *(longlong *)(unaff_RBX[0xe] + 0x38);
        uVar29 = *(undefined8 *)(lVar26 + 0x20);
        uVar25 = *(undefined8 *)(lVar26 + 0x28);
        *(undefined1 *)((longlong)unaff_RBX + 0x97) = 1;
        puStack_e0 = (ulonglong *)0x141738dad;
        pdb_141c2b710(lVar45 + 0x10,unaff_RBX + 0x50,uVar29,uVar25);
      }
      unaff_RBX[0x52] = unaff_RBX[0x2c];
      unaff_RBX[0x53] = unaff_RBX[0x2d];
      unaff_RBX[0x50] = unaff_RBX[0x2a];
      unaff_RBX[0x51] = unaff_RBX[0x2b];
      *(undefined1 *)((longlong)unaff_RBX + 0x97) = 0;
      puStack_e0 = (ulonglong *)0x141738df4;
      pdb_14173b990(unaff_RBX + 0x4c,unaff_RBX + 0x50);
      lVar27 = unaff_RBX[0xe];
    }
    puStack_e0 = (ulonglong *)0x141738e02;
    pdb_140981490(lVar27 + 0x50);
    plVar24 = *(longlong **)(unaff_RBX[0xe] + 0x38);
    LOCK();
    *plVar24 = *plVar24 + -1;
    lVar45 = *plVar24;
    UNLOCK();
    goto joined_r0x00014173913d;
  case 0x27:
    uVar39 = 1;
    if ((longlong)puVar22 < 0) {
      uVar39 = (ulonglong)puVar22 ^ 0x14332bd08;
    }
    lVar45 = unaff_RBX[0xe];
    if (uVar39 == 0) {
code_r0x000141737c84:
      uVar29 = unaff_RBX[0x2b];
      *(undefined8 *)(lVar45 + 0x28) = unaff_RBX[0x2a];
      *(undefined8 *)(lVar45 + 0x30) = uVar29;
      *(undefined8 *)(lVar45 + 0x20) = 0;
    }
    else {
      if (uVar39 == 1) {
        unaff_RBX[0x10] = unaff_R13;
        unaff_RBX[0x11] = *(undefined8 *)(unaff_R12 + 0x48);
        lVar45 = *(longlong *)(unaff_R12 + 0x50);
        if (lVar45 != 0) {
          puVar37 = (undefined8 *)(unaff_RBX[0x11] + 0x48);
          do {
            if (puVar37[-1] != 0) {
              puStack_e0 = (ulonglong *)0x141737435;
              pub_1406abac0((byte *)*puVar37,puVar37[-1],1);
            }
            puVar37 = puVar37 + 0xc;
            lVar45 = lVar45 + -1;
          } while (lVar45 != 0);
        }
        lVar45 = *(longlong *)(unaff_R12 + 0x40);
        if (lVar45 != 0) {
          puStack_e0 = (ulonglong *)0x141737c5b;
          pub_1406abac0((byte *)unaff_RBX[0x11],lVar45 * 0x60,0x10);
        }
        *(undefined8 *)(unaff_R12 + 0x50) = unaff_RBX[0xcf];
        uVar29 = unaff_RBX[0xce];
        *(longlong *)(unaff_R12 + 0x40) = unaff_RBX[0xcd];
        *(undefined8 *)(unaff_R12 + 0x48) = uVar29;
        lVar45 = unaff_RBX[0xe];
        unaff_R13 = (ulonglong *)unaff_RBX[0x10];
        param_2 = _DAT_143ca8f38;
        goto code_r0x000141737c84;
      }
      if (SBORROW8(0,*(longlong *)(unaff_R12 + 0x58))) {
        *(undefined8 *)(unaff_R12 + 0x58) = 0;
        *(undefined8 *)(unaff_R12 + 0x60) = 8;
        *(undefined8 *)(unaff_R12 + 0x68) = 0;
        *(undefined8 *)(lVar45 + 0x20) = 2;
        plVar24 = (longlong *)unaff_RBX[0x2a];
        LOCK();
        *plVar24 = *plVar24 + -1;
        lVar45 = *plVar24;
        UNLOCK();
      }
      else {
        unaff_RBX[0x50] = 1;
        unaff_RBX[0x51] = 1;
        unaff_RBX[0x60] = 0;
        unaff_RBX[0x65] = 0;
        *(undefined1 (*) [16])(unaff_RBX + 0xa0) = (undefined1  [16])0x0;
        unaff_RBX[0xa2] = 0;
        unaff_RBX[0xa3] = 1;
        unaff_RBX[0xa4] = 1;
        puStack_e0 = (ulonglong *)0x141737ef4;
        pdb_14007ee60();
        puStack_e0 = (ulonglong *)0x141737f03;
        pbVar30 = pub_1406abab0(0x300,0x80);
        if (pbVar30 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
          puStack_e0 = (ulonglong *)0x141738a11;
          pdb_142dc7e11(0x80,0x300);
        }
        unaff_RBX[0x10] = param_1;
        puStack_e0 = (ulonglong *)0x141737f2b;
        pub_142e32760(pbVar30,unaff_RBX + 0x50,0x300);
        LOCK();
        lVar45 = *(longlong *)pbVar30;
        *(longlong *)pbVar30 = *(longlong *)pbVar30 + 1;
        UNLOCK();
        if (*(longlong *)pbVar30 == 0 || SCARRY8(lVar45,1) != *(longlong *)pbVar30 < 0)
        goto code_r0x00014173a218;
        unaff_RBX[0x50] = pbVar30;
        unaff_RBX[0x51] = 0;
        unaff_RBX[0x18] = pbVar30;
        lVar45 = *(longlong *)(unaff_R12 + 0x68);
        if (lVar45 == *(longlong *)(unaff_R12 + 0x58)) {
          puStack_e0 = (ulonglong *)0x141737f64;
          pdb_142d7e8a0(unaff_R12 + 0x58);
        }
        *(byte **)(*(longlong *)(unaff_R12 + 0x60) + lVar45 * 8) = pbVar30;
        *(longlong *)(unaff_R12 + 0x68) = lVar45 + 1;
        lVar45 = unaff_RBX[0xe];
        *(byte **)(lVar45 + 0x28) = pbVar30;
        *(undefined8 *)(lVar45 + 0x30) = 0;
        *(undefined8 *)(lVar45 + 0x20) = 1;
        param_2 = _DAT_143ca8f38;
        param_1 = (ulonglong *)unaff_RBX[0x10];
        plVar24 = (longlong *)unaff_RBX[0x2a];
        LOCK();
        *plVar24 = *plVar24 + -1;
        lVar45 = *plVar24;
        UNLOCK();
      }
      if (lVar45 == 0) {
        puStack_e0 = (ulonglong *)0x141737fb5;
        pdb_140c7a240(unaff_RBX + 0x2a);
      }
    }
    if (((char)unaff_R15 == '\0') && ((*param_2 & 0x7fffffffffffffff) != 0)) {
      puStack_e0 = (ulonglong *)0x141738960;
      cVar20 = pdb_142dc79e0();
      if (cVar20 == '\0') {
        *(undefined1 *)(unaff_R12 + 0x38) = 1;
      }
    }
    LOCK();
    iVar2 = *unaff_R14;
    *unaff_R14 = *unaff_R14 + -0x3fffffff;
    UNLOCK();
    unaff_R12 = (ulonglong)(iVar2 + 0xc0000001U);
    if (0x3fffffff < iVar2 + 0xc0000001U) {
      puStack_e0 = (ulonglong *)0x1417387de;
      pdb_142dc6fa0();
    }
    in_R11 = unaff_RBX[0xe];
    if (*(longlong *)(in_R11 + 0x20) != 0) {
      if ((int)*(longlong *)(in_R11 + 0x20) != 1) {
        unaff_RBX[0x10] = unaff_R13;
        plVar24 = *(longlong **)(in_R11 + 0x38);
        LOCK();
        lVar45 = *plVar24;
        *plVar24 = *plVar24 + 1;
        UNLOCK();
        if (*plVar24 == 0 || SCARRY8(lVar45,1) != *plVar24 < 0) goto code_r0x00014173a218;
        *(longlong **)(in_R11 + 0x58) = plVar24;
        *(undefined1 *)(in_R11 + 0x60) = 1;
        puVar37 = (undefined8 *)(*(longlong *)(in_R11 + 0x40) + 0x10);
        puStack_e0 = (ulonglong *)0x1417383e6;
        pdb_141805d60(unaff_RBX + 0x38,puVar37,*(undefined8 *)(*(longlong *)(in_R11 + 0x38) + 0x20),
                      *(undefined8 *)(*(longlong *)(in_R11 + 0x38) + 0x28));
        plVar24 = plRam0000000143cad898;
        if (SBORROW8(0,unaff_RBX[0x3a])) {
          lVar45 = unaff_RBX[0xe];
          unaff_R13 = (ulonglong *)unaff_RBX[0x10];
          if (*_DAT_143ca4b08 < 3) {
            bVar19 = *(byte *)(plRam0000000143cad898 + 2);
            puVar37 = (undefined8 *)(ulonglong)bVar19;
            if (2 < bVar19) {
              puStack_e0 = (ulonglong *)0x1417391e4;
              uVar21 = pdb_142db8070(plRam0000000143cad898);
              puVar37 = (undefined8 *)(ulonglong)uVar21;
              lVar45 = unaff_RBX[0xe];
              unaff_R13 = (ulonglong *)unaff_RBX[0x10];
              if ((char)uVar21 != '\0') goto code_r0x000141738431;
              goto code_r0x0001417391fa;
            }
            if (bVar19 == 0) goto code_r0x0001417391fa;
code_r0x000141738431:
            puStack_e0 = (ulonglong *)0x141738439;
            cVar20 = pdb_140dd7f60(*plVar24);
            lVar45 = unaff_RBX[0xe];
            unaff_R13 = (ulonglong *)unaff_RBX[0x10];
            if (cVar20 == '\0') goto code_r0x0001417391fa;
            lVar26 = *plVar24;
            uVar39 = *(ulonglong *)(lVar26 + 0x38);
            if (uVar39 == 0) {
              puStack_e0 = (ulonglong *)0x14173a073;
              pdb_142dc8110(&UNK_14332aff8,0x22,&UNK_14332b150);
              goto code_r0x00014173a218;
            }
            uVar29 = *(undefined8 *)(lVar26 + 0x30);
            uVar25 = *(undefined8 *)(lVar26 + 0x40);
            uVar5 = *(undefined8 *)(lVar26 + 0x48);
            unaff_RBX[0x18] = uVar29;
            unaff_RBX[0x19] = uVar39;
            unaff_RBX[0x1a] = uVar25;
            unaff_RBX[0x1b] = uVar5;
            unaff_RBX[0x1c] = 0;
            unaff_RBX[0x1e] = &UNK_14332b168;
            unaff_RBX[0x1f] = 0x1d;
            if (uVar39 == 1) {
              puStack_e0 = (ulonglong *)0x14173a0af;
              pdb_142dc8110(&UNK_14332aff8,0x22,&UNK_14332b150);
              goto code_r0x00014173a218;
            }
            unaff_RBX[0x13] = uVar29;
            unaff_RBX[0x14] = uVar39;
            unaff_RBX[0x15] = uVar25;
            unaff_RBX[0x16] = uVar5;
            unaff_RBX[0x17] = 1;
            unaff_RBX[0x21] = *(longlong *)(lVar45 + 0x38) + 0x20;
            if (uVar39 < 3) {
              puStack_e0 = (ulonglong *)0x14173a0eb;
              pdb_142dc8110(&UNK_14332aff8,0x22,&UNK_14332b150);
              goto code_r0x00014173a218;
            }
            unaff_RBX[0x2a] = uVar29;
            unaff_RBX[0x2b] = uVar39;
            unaff_RBX[0x2c] = uVar25;
            unaff_RBX[0x2d] = uVar5;
            unaff_RBX[0x2e] = 2;
            unaff_RBX[0x50] = unaff_RBX + 0x18;
            unaff_RBX[0x51] = unaff_RBX + 0x1e;
            unaff_RBX[0x52] = &UNK_14332b058;
            unaff_RBX[0x53] = unaff_RBX + 0x13;
            unaff_RBX[0x54] = unaff_RBX + 0x21;
            unaff_RBX[0x55] = &UNK_14332b078;
            puVar28 = unaff_RBX + 0x2a;
            unaff_RBX[0x56] = puVar28;
            unaff_RBX[0x57] = lVar45 + 0x10;
            unaff_RBX[0x58] = &UNK_14332b098;
            unaff_RBX[0x38] = unaff_RBX + 0x50;
            unaff_RBX[0x39] = 3;
            unaff_RBX[0x3a] = lVar26 + 0x30;
            puStack_e0 = (ulonglong *)0x1417385c5;
            pdb_14173b8e0(unaff_RBX + 0x38);
code_r0x00014173941e:
            lVar45 = unaff_RBX[0xe];
            unaff_R13 = (ulonglong *)unaff_RBX[0x10];
            puVar38 = puVar28;
          }
          else {
code_r0x0001417391fa:
            plVar24 = plRam0000000143cad898;
            puVar38 = puVar37;
            if ((*_DAT_143ca4ab0 == '\0') && (2 < *_DAT_143ca8e90)) {
              lVar26 = *plRam0000000143cad898;
              uVar29 = *(undefined8 *)(lVar26 + 0x20);
              uVar25 = *(undefined8 *)(lVar26 + 0x28);
              unaff_RBX[0xc5] = 3;
              unaff_RBX[0xc6] = uVar29;
              unaff_RBX[199] = uVar25;
              puStack_e0 = (ulonglong *)0x141739248;
              puVar28 = (undefined8 *)pdb_140f33290();
              puVar38 = unaff_RBX + 0xc5;
              puStack_e0 = (ulonglong *)0x14173925e;
              cVar20 = (*(code *)puVar37[3])(puVar28);
              lVar45 = unaff_RBX[0xe];
              unaff_R13 = (ulonglong *)unaff_RBX[0x10];
              if (cVar20 != '\0') {
                lVar27 = *plVar24;
                uVar39 = *(ulonglong *)(lVar27 + 0x38);
                if (uVar39 == 0) {
                  puStack_e0 = (ulonglong *)0x14173a18d;
                  pdb_142dc8110(&UNK_14332aff8,0x22,&UNK_14332b150);
                  goto code_r0x00014173a218;
                }
                uVar29 = *(undefined8 *)(lVar27 + 0x30);
                uVar25 = *(undefined8 *)(lVar27 + 0x40);
                uVar5 = *(undefined8 *)(lVar27 + 0x48);
                unaff_RBX[0x18] = uVar29;
                unaff_RBX[0x19] = uVar39;
                unaff_RBX[0x1a] = uVar25;
                unaff_RBX[0x1b] = uVar5;
                unaff_RBX[0x1c] = 0;
                unaff_RBX[0x21] = &UNK_14332b168;
                unaff_RBX[0x22] = 0x1d;
                if (uVar39 == 1) {
                  puStack_e0 = (ulonglong *)0x14173a1c6;
                  pdb_142dc8110(&UNK_14332aff8,0x22,&UNK_14332b150);
                  goto code_r0x00014173a218;
                }
                unaff_RBX[0x13] = uVar29;
                unaff_RBX[0x14] = uVar39;
                unaff_RBX[0x15] = uVar25;
                unaff_RBX[0x16] = uVar5;
                unaff_RBX[0x17] = 1;
                unaff_RBX[0x24] = *(longlong *)(lVar45 + 0x38) + 0x20;
                if (uVar39 < 3) {
                  puStack_e0 = (ulonglong *)0x14173a1fc;
                  pdb_142dc8110(&UNK_14332aff8,0x22,&UNK_14332b150);
                  goto code_r0x00014173a218;
                }
                unaff_RBX[0x2a] = uVar29;
                unaff_RBX[0x2b] = uVar39;
                unaff_RBX[0x2c] = uVar25;
                unaff_RBX[0x2d] = uVar5;
                unaff_RBX[0x2e] = 2;
                unaff_RBX[0x50] = unaff_RBX + 0x18;
                unaff_RBX[0x51] = unaff_RBX + 0x21;
                unaff_RBX[0x52] = &UNK_14332b058;
                unaff_RBX[0x53] = unaff_RBX + 0x13;
                unaff_RBX[0x54] = unaff_RBX + 0x24;
                unaff_RBX[0x55] = &UNK_14332b078;
                unaff_RBX[0x56] = unaff_RBX + 0x2a;
                unaff_RBX[0x57] = lVar45 + 0x10;
                unaff_RBX[0x58] = &UNK_14332b098;
                unaff_RBX[0x1e] = unaff_RBX + 0x50;
                unaff_RBX[0x1f] = 3;
                unaff_RBX[0x20] = lVar27 + 0x30;
                unaff_RBX[0x3a] = unaff_RBX[199];
                unaff_RBX[0x38] = unaff_RBX[0xc5];
                unaff_RBX[0x39] = unaff_RBX[0xc6];
                plStack_b8 = unaff_RBX + 0x1e;
                puStack_e0 = (ulonglong *)0x14173941d;
                pdb_140dd7f80(lVar26,puVar28,puVar37,unaff_RBX + 0x38);
                goto code_r0x00014173941e;
              }
            }
          }
          puStack_e0 = (ulonglong *)0x141739438;
          uVar29 = (**(code **)(*(longlong *)(*(longlong *)(lVar45 + 0x38) + 0x18) + 0x28))
                             (*(undefined8 *)(*(longlong *)(lVar45 + 0x38) + 0x10));
          unaff_RBX[0x29] = uVar29;
          unaff_RBX[0x28] = puVar38;
          lVar45 = unaff_RBX[0xe];
          *(undefined1 *)(lVar45 + 0x49) = 1;
          plVar24 = *(longlong **)(lVar45 + 0x40);
          LOCK();
          lVar45 = *plVar24;
          *plVar24 = *plVar24 + 1;
          UNLOCK();
          if (*plVar24 == 0 || SCARRY8(lVar45,1) != *plVar24 < 0) goto code_r0x00014173a218;
          unaff_RBX[0x10] = plVar24;
          unaff_RBX[0x13] = plVar24;
          puStack_e0 = (ulonglong *)0x141739477;
          pdb_1417473a0(unaff_RBX + 0x2a);
          unaff_RBX[0x50] = 1;
          unaff_RBX[0x51] = 1;
          unaff_RBX[0x52] = unaff_RBX[0x2a];
          unaff_RBX[0x53] = unaff_RBX[0x2b];
          *(undefined4 *)(unaff_RBX + 0x54) = *(undefined4 *)(unaff_RBX + 0x2c);
          *(undefined4 *)((longlong)unaff_RBX + 0x2a4) =
               *(undefined4 *)((longlong)unaff_RBX + 0x164);
          *(undefined4 *)(unaff_RBX + 0x55) = *(undefined4 *)(unaff_RBX + 0x2d);
          *(undefined4 *)((longlong)unaff_RBX + 0x2ac) =
               *(undefined4 *)((longlong)unaff_RBX + 0x16c);
          *(undefined4 *)(unaff_RBX + 0x56) = *(undefined4 *)(unaff_RBX + 0x2e);
          *(undefined4 *)((longlong)unaff_RBX + 0x2b4) =
               *(undefined4 *)((longlong)unaff_RBX + 0x174);
          *(undefined4 *)(unaff_RBX + 0x57) = *(undefined4 *)(unaff_RBX + 0x2f);
          *(undefined4 *)((longlong)unaff_RBX + 700) = *(undefined4 *)((longlong)unaff_RBX + 0x17c);
          *(undefined4 *)(unaff_RBX + 0x58) = *(undefined4 *)(unaff_RBX + 0x30);
          *(undefined4 *)((longlong)unaff_RBX + 0x2c4) =
               *(undefined4 *)((longlong)unaff_RBX + 0x184);
          *(undefined4 *)(unaff_RBX + 0x59) = *(undefined4 *)(unaff_RBX + 0x31);
          *(undefined4 *)((longlong)unaff_RBX + 0x2cc) =
               *(undefined4 *)((longlong)unaff_RBX + 0x18c);
          unaff_RBX[0x5a] = unaff_RBX[0x32];
          unaff_RBX[0x5b] = unaff_RBX[0x33];
          unaff_RBX[0x5c] = unaff_RBX[0x34];
          unaff_RBX[0x5d] = unaff_RBX[0x35];
          puStack_e0 = (ulonglong *)0x1417394e9;
          pdb_14007ee60();
          uVar29 = 8;
          puStack_e0 = (ulonglong *)0x1417394f8;
          pbVar30 = pub_1406abab0(0x70,8);
          if (pbVar30 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
            puStack_e0 = (ulonglong *)0x141739612;
            pdb_142dc7e11(8,0x70);
          }
          uVar25 = unaff_RBX[0x5d];
          *(undefined8 *)(pbVar30 + 0x60) = unaff_RBX[0x5c];
          *(undefined8 *)(pbVar30 + 0x68) = uVar25;
          uVar25 = unaff_RBX[0x5b];
          *(undefined8 *)(pbVar30 + 0x50) = unaff_RBX[0x5a];
          *(undefined8 *)(pbVar30 + 0x58) = uVar25;
          uVar25 = unaff_RBX[0x59];
          *(undefined8 *)(pbVar30 + 0x40) = unaff_RBX[0x58];
          *(undefined8 *)(pbVar30 + 0x48) = uVar25;
          uVar25 = unaff_RBX[0x50];
          uVar5 = unaff_RBX[0x51];
          uVar7 = unaff_RBX[0x52];
          uVar4 = unaff_RBX[0x53];
          uVar10 = *(undefined4 *)(unaff_RBX + 0x54);
          uVar11 = *(undefined4 *)((longlong)unaff_RBX + 0x2a4);
          uVar12 = *(undefined4 *)(unaff_RBX + 0x55);
          uVar13 = *(undefined4 *)((longlong)unaff_RBX + 0x2ac);
          uVar14 = *(undefined4 *)((longlong)unaff_RBX + 0x2b4);
          uVar15 = *(undefined4 *)(unaff_RBX + 0x57);
          uVar16 = *(undefined4 *)((longlong)unaff_RBX + 700);
          *(undefined4 *)(pbVar30 + 0x30) = *(undefined4 *)(unaff_RBX + 0x56);
          *(undefined4 *)(pbVar30 + 0x34) = uVar14;
          *(undefined4 *)(pbVar30 + 0x38) = uVar15;
          *(undefined4 *)(pbVar30 + 0x3c) = uVar16;
          *(undefined4 *)(pbVar30 + 0x20) = uVar10;
          *(undefined4 *)(pbVar30 + 0x24) = uVar11;
          *(undefined4 *)(pbVar30 + 0x28) = uVar12;
          *(undefined4 *)(pbVar30 + 0x2c) = uVar13;
          *(undefined8 *)(pbVar30 + 0x10) = uVar7;
          *(undefined8 *)(pbVar30 + 0x18) = uVar4;
          *(undefined8 *)pbVar30 = uVar25;
          *(undefined8 *)(pbVar30 + 8) = uVar5;
          puVar37 = (undefined8 *)unaff_RBX[0xe];
          plVar24 = (longlong *)*puVar37;
          uVar25 = unaff_RBX[0x29];
          if (plVar24 != (longlong *)0x0) {
            uVar29 = puVar37[1];
            LOCK();
            lVar45 = *plVar24;
            *plVar24 = *plVar24 + 1;
            UNLOCK();
            if (*plVar24 == 0 || SCARRY8(lVar45,1) != *plVar24 < 0) goto code_r0x00014173a218;
          }
          *(undefined1 *)(puVar37 + 9) = 1;
          puVar37[0xf] = unaff_RBX[0x10];
          puVar37[0x10] = pbVar30;
          puVar37[0x11] = plVar24;
          puVar37[0x12] = uVar29;
          LOCK();
          lVar45 = *(longlong *)pbVar30;
          *(longlong *)pbVar30 = *(longlong *)pbVar30 + 1;
          UNLOCK();
          if (*(longlong *)pbVar30 == 0 || SCARRY8(lVar45,1) != *(longlong *)pbVar30 < 0)
          goto code_r0x00014173a218;
          puVar37[10] = pbVar30;
          *(undefined1 *)((longlong)puVar37 + 0x49) = 0;
          *(undefined1 *)(puVar37 + 9) = 0;
          uVar29 = puVar37[0xf];
          uVar5 = puVar37[0x10];
          uVar10 = *(undefined4 *)((longlong)puVar37 + 0x8c);
          uVar11 = *(undefined4 *)(puVar37 + 0x12);
          uVar12 = *(undefined4 *)((longlong)puVar37 + 0x94);
          *(undefined4 *)(unaff_RBX + 0x52) = *(undefined4 *)(puVar37 + 0x11);
          *(undefined4 *)((longlong)unaff_RBX + 0x294) = uVar10;
          *(undefined4 *)(unaff_RBX + 0x53) = uVar11;
          *(undefined4 *)((longlong)unaff_RBX + 0x29c) = uVar12;
          unaff_RBX[0x50] = uVar29;
          unaff_RBX[0x51] = uVar5;
          pcVar9 = *(code **)(unaff_RBX[0x28] + 0x30);
          unaff_RBX[0x3e] = uVar25;
          unaff_RBX[0x3f] = unaff_RBX[0x28];
          puVar37 = unaff_RBX + 0x50;
          puStack_e0 = (ulonglong *)0x1417395eb;
          uVar29 = (*pcVar9)();
          lVar45 = unaff_RBX[0xe];
          *(undefined8 *)(lVar45 + 0x68) = uVar29;
          *(undefined8 **)(lVar45 + 0x70) = puVar37;
          puStack_e0 = (ulonglong *)0x14173744d;
          (*(code *)puVar37[3])(unaff_RBX + 0x50,uVar29,param_1);
          lVar45 = unaff_RBX[0x50];
          if (lVar45 == 2) {
            *unaff_R13 = 1;
            uVar18 = 4;
            goto code_r0x000141739e30;
          }
          uVar29 = unaff_RBX[0x51];
          pauVar36 = (undefined1 (*) [16])unaff_RBX[0x52];
          unaff_RBX[0x10] = *(undefined8 *)(unaff_RBX[0xe] + 0x68);
          puVar37 = *(undefined8 **)(unaff_RBX[0xe] + 0x70);
          unaff_RBX[0x11] = puVar37;
          pcVar9 = (code *)*puVar37;
          if (pcVar9 != (code *)0x0) {
            puStack_e0 = (ulonglong *)0x1417374a3;
            (*pcVar9)(unaff_RBX[0x10]);
          }
          pauVar35 = *(undefined1 (**) [16])(unaff_RBX[0x11] + 8);
          if (pauVar35 != (undefined1 (*) [16])0x0) {
            puStack_e0 = (ulonglong *)0x1417374c4;
            pub_1406abac0((byte *)unaff_RBX[0x10],(ulonglong)pauVar35,
                          *(ulonglong *)(unaff_RBX[0x11] + 0x10));
          }
          lVar26 = unaff_RBX[0xe];
          if ((int)lVar45 == 1) {
            uVar25 = *(undefined8 *)(lVar26 + 0x10);
            uVar5 = *(undefined8 *)(lVar26 + 0x18);
            unaff_RBX[0x3e] = unaff_RBX[0x29];
            unaff_RBX[0x3f] = unaff_RBX[0x28];
            puStack_e0 = (ulonglong *)0x1417374fd;
            pauVar23 = (undefined1 (*) [16])pdb_140c799b0(uVar29);
            unaff_RBX[0x16] = pauVar36;
            lVar26 = unaff_RBX[0xe];
            pauVar35 = pauVar36;
            pauVar36 = pauVar23;
            uVar29 = uVar5;
          }
          else {
            uVar25 = 0;
          }
          unaff_RBX[0x13] = uVar25;
          unaff_RBX[0x14] = uVar29;
          unaff_RBX[0x15] = pauVar36;
          lVar45 = *(longlong *)(lVar26 + 0x50);
          pcVar1 = (char *)(lVar45 + 0x10);
          LOCK();
          bVar46 = *(char *)(lVar45 + 0x10) == '\0';
          if (bVar46) {
            *(char *)(lVar45 + 0x10) = '\x01';
          }
          UNLOCK();
          if (!bVar46) {
            *(undefined1 *)((longlong)unaff_RBX + 0x7d) = 1;
            puStack_e0 = (ulonglong *)0x14173885c;
            pdb_142dc6be0(pcVar1);
          }
          puVar22 = _DAT_143ca8f38;
          if ((*_DAT_143ca8f38 & 0x7fffffffffffffff) == 0) {
            bVar19 = 0;
            cVar20 = *(char *)(lVar45 + 0x11);
          }
          else {
            *(undefined1 *)((longlong)unaff_RBX + 0x7d) = 1;
            puStack_e0 = (ulonglong *)0x14173886b;
            bVar19 = pdb_142dc79e0();
            bVar19 = bVar19 ^ 1;
            cVar20 = *(char *)(lVar45 + 0x11);
          }
          if (cVar20 != '\0') {
            unaff_RBX[0x50] = pcVar1;
            *(byte *)(unaff_RBX + 0x51) = bVar19;
            plStack_b8 = (longlong *)&UNK_14332b190;
                    /* WARNING: Subroutine does not return */
            puStack_e0 = (ulonglong *)0x1417388b2;
            pdb_142dc8170(&UNK_14332b8d0,0x2b,unaff_RBX + 0x50,&UNK_14332b920);
          }
          uVar29 = *(undefined8 *)(lVar45 + 0x18);
          uVar25 = *(undefined8 *)(lVar45 + 0x20);
          uVar10 = *(undefined4 *)(lVar45 + 0x2c);
          uVar11 = *(undefined4 *)(lVar45 + 0x30);
          uVar12 = *(undefined4 *)(lVar45 + 0x34);
          *(undefined4 *)(unaff_RBX + 0x2c) = *(undefined4 *)(lVar45 + 0x28);
          *(undefined4 *)((longlong)unaff_RBX + 0x164) = uVar10;
          *(undefined4 *)(unaff_RBX + 0x2d) = uVar11;
          *(undefined4 *)((longlong)unaff_RBX + 0x16c) = uVar12;
          unaff_RBX[0x2a] = uVar29;
          unaff_RBX[0x2b] = uVar25;
          uVar25 = _UNK_14332bb38;
          uVar29 = _UNK_14332bb30;
          *(undefined8 *)(lVar45 + 0x18) = _UNK_14332bb30;
          *(undefined8 *)(lVar45 + 0x20) = uVar25;
          uVar7 = _UNK_14332bb48;
          uVar5 = _UNK_14332bb40;
          *(undefined8 *)(lVar45 + 0x28) = _UNK_14332bb40;
          *(undefined8 *)(lVar45 + 0x30) = uVar7;
          if ((bVar19 == 0) && ((*puVar22 & 0x7fffffffffffffff) != 0)) {
            *(undefined1 *)((longlong)unaff_RBX + 0x7b) = 1;
            puStack_e0 = (ulonglong *)0x141738992;
            cVar20 = pdb_142dc79e0();
            if (cVar20 == '\0') {
              *(undefined1 *)(lVar45 + 0x11) = 1;
            }
          }
          LOCK();
          cVar20 = *pcVar1;
          *pcVar1 = '\0';
          UNLOCK();
          if (cVar20 == '\x02') {
            *(undefined1 *)((longlong)unaff_RBX + 0x7b) = 1;
            puStack_e0 = (ulonglong *)0x1417388c4;
            pdb_142dc6ca0(pcVar1);
          }
          lVar26 = unaff_RBX[0xe];
          lVar27 = *(longlong *)(lVar26 + 0x50);
          lVar45 = lVar27 + 0x38;
          LOCK();
          bVar46 = *(char *)(lVar27 + 0x38) == '\0';
          if (bVar46) {
            *(char *)(lVar27 + 0x38) = '\x01';
          }
          UNLOCK();
          if (!bVar46) {
            *(undefined1 *)((longlong)unaff_RBX + 0x7b) = 1;
            puStack_e0 = (ulonglong *)0x1417388d6;
            pdb_142dc6be0(lVar45);
          }
          if ((*puVar22 & 0x7fffffffffffffff) == 0) {
            uVar21 = 0;
            cVar20 = *(char *)(lVar27 + 0x39);
          }
          else {
            *(undefined1 *)((longlong)unaff_RBX + 0x7b) = 1;
            puStack_e0 = (ulonglong *)0x1417388e5;
            uVar21 = pdb_142dc79e0();
            uVar21 = uVar21 ^ 1;
            cVar20 = *(char *)(lVar27 + 0x39);
          }
          if (cVar20 != '\0') {
            unaff_RBX[0x50] = lVar45;
            *(char *)(unaff_RBX + 0x51) = (char)uVar21;
            plStack_b8 = (longlong *)&UNK_14332b1a8;
                    /* WARNING: Subroutine does not return */
            puStack_e0 = (ulonglong *)0x14173892c;
            pdb_142dc8170(&UNK_14332b8d0,0x2b,unaff_RBX + 0x50,&UNK_14332b940);
          }
          *(uint *)(unaff_RBX + 0x11) = uVar21;
          unaff_RBX[0x10] = lVar45;
          puStack_e0 = (ulonglong *)0x141737633;
          plVar24 = (longlong *)pdb_140f3bda0();
          if ((char)plVar24[2] == '\x01') {
            lVar45 = *plVar24;
            pauVar35 = (undefined1 (*) [16])plVar24[1];
          }
          else {
            puStack_e0 = (ulonglong *)0x141738937;
            lVar45 = pdb_140f4fd10();
            *plVar24 = lVar45;
            plVar24[1] = (longlong)pauVar35;
            *(undefined1 *)(plVar24 + 2) = 1;
          }
          *plVar24 = lVar45 + 1;
          pauVar36 = *(undefined1 (**) [16])(lVar27 + 0x40);
          lVar3 = *(longlong *)(lVar27 + 0x48);
          uVar4 = *(undefined8 *)(lVar27 + 0x58);
          *(undefined8 *)(lVar27 + 0x50) = uVar5;
          *(undefined8 *)(lVar27 + 0x58) = uVar7;
          *(undefined8 *)(lVar27 + 0x40) = uVar29;
          *(undefined8 *)(lVar27 + 0x48) = uVar25;
          *(longlong *)(lVar27 + 0x60) = lVar45;
          *(undefined1 (**) [16])(lVar27 + 0x68) = pauVar35;
          auVar49 = *pauVar36;
          if (lVar3 == 0) {
            uVar29 = 0;
          }
          else {
            lVar45 = lVar3 * 0x61 + 0x71;
            pauVar35 = pauVar36 + lVar3 * -6 + -6;
            uVar29 = 0x10;
          }
          unaff_RBX[0x50] = uVar29;
          unaff_RBX[0x51] = lVar45;
          unaff_RBX[0x52] = pauVar35;
          unaff_RBX[0x53] = pauVar36;
          unaff_RBX[0x54] = pauVar36 + 1;
          unaff_RBX[0x55] = *pauVar36 + lVar3 + 1;
          *(ushort *)(unaff_RBX + 0x56) =
               ~((ushort)(SUB161(auVar49 >> 7,0) & 1) | (ushort)(SUB161(auVar49 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar49 >> 0x17,0) & 1) << 2 |
                 (ushort)(SUB161(auVar49 >> 0x1f,0) & 1) << 3 |
                 (ushort)(SUB161(auVar49 >> 0x27,0) & 1) << 4 |
                 (ushort)(SUB161(auVar49 >> 0x2f,0) & 1) << 5 |
                 (ushort)(SUB161(auVar49 >> 0x37,0) & 1) << 6 |
                 (ushort)(SUB161(auVar49 >> 0x3f,0) & 1) << 7 |
                 (ushort)(SUB161(auVar49 >> 0x47,0) & 1) << 8 |
                 (ushort)(SUB161(auVar49 >> 0x4f,0) & 1) << 9 |
                 (ushort)(SUB161(auVar49 >> 0x57,0) & 1) << 10 |
                 (ushort)(SUB161(auVar49 >> 0x5f,0) & 1) << 0xb |
                 (ushort)(SUB161(auVar49 >> 0x67,0) & 1) << 0xc |
                 (ushort)(SUB161(auVar49 >> 0x6f,0) & 1) << 0xd |
                 (ushort)(SUB161(auVar49 >> 0x77,0) & 1) << 0xe |
                (ushort)(byte)(auVar49[0xf] >> 7) << 0xf);
          unaff_RBX[0x57] = uVar4;
          puStack_e0 = (ulonglong *)0x1417376f8;
          pdb_1415ed630(unaff_RBX + 0x24,unaff_RBX + 0x50);
          if ((*(char *)(unaff_RBX + 0x11) == '\0') && ((*puVar22 & 0x7fffffffffffffff) != 0)) {
            *(undefined1 *)((longlong)unaff_RBX + 0x7e) = 1;
            *(undefined1 *)((longlong)unaff_RBX + 0x7f) = 1;
            puStack_e0 = (ulonglong *)0x1417389b1;
            cVar20 = pdb_142dc79e0();
            if (cVar20 == '\0') {
              *(undefined1 *)(lVar27 + 0x39) = 1;
            }
          }
          LOCK();
          cVar20 = *(char *)unaff_RBX[0x10];
          *(char *)unaff_RBX[0x10] = '\0';
          UNLOCK();
          if (cVar20 == '\x02') {
            *(undefined1 *)((longlong)unaff_RBX + 0x7e) = 1;
            *(undefined1 *)((longlong)unaff_RBX + 0x7f) = 1;
            puStack_e0 = (ulonglong *)0x141738955;
            pdb_142dc6ca0();
          }
          pauVar36 = (undefined1 (*) [16])unaff_RBX[0x2a];
          auVar49 = *pauVar36;
          unaff_RBX[0x50] = pauVar36;
          unaff_RBX[0x51] = pauVar36 + 1;
          unaff_RBX[0x52] = *pauVar36 + unaff_RBX[0x2b] + 1;
          *(ushort *)(unaff_RBX + 0x53) =
               ~((ushort)(SUB161(auVar49 >> 7,0) & 1) | (ushort)(SUB161(auVar49 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar49 >> 0x17,0) & 1) << 2 |
                 (ushort)(SUB161(auVar49 >> 0x1f,0) & 1) << 3 |
                 (ushort)(SUB161(auVar49 >> 0x27,0) & 1) << 4 |
                 (ushort)(SUB161(auVar49 >> 0x2f,0) & 1) << 5 |
                 (ushort)(SUB161(auVar49 >> 0x37,0) & 1) << 6 |
                 (ushort)(SUB161(auVar49 >> 0x3f,0) & 1) << 7 |
                 (ushort)(SUB161(auVar49 >> 0x47,0) & 1) << 8 |
                 (ushort)(SUB161(auVar49 >> 0x4f,0) & 1) << 9 |
                 (ushort)(SUB161(auVar49 >> 0x57,0) & 1) << 10 |
                 (ushort)(SUB161(auVar49 >> 0x5f,0) & 1) << 0xb |
                 (ushort)(SUB161(auVar49 >> 0x67,0) & 1) << 0xc |
                 (ushort)(SUB161(auVar49 >> 0x6f,0) & 1) << 0xd |
                 (ushort)(SUB161(auVar49 >> 0x77,0) & 1) << 0xe |
                (ushort)(byte)(auVar49[0xf] >> 7) << 0xf);
          unaff_RBX[0x54] = unaff_RBX[0x2d];
          unaff_RBX[0x55] = unaff_RBX[0xe] + 0x40;
          *(undefined1 *)((longlong)unaff_RBX + 0x7e) = 1;
          *(undefined1 *)((longlong)unaff_RBX + 0x7f) = 1;
          puVar37 = unaff_RBX + 0x50;
          puStack_e0 = (ulonglong *)0x14173779a;
          pdb_1415ea2a0(unaff_RBX + 0x21);
          unaff_RBX[0x11] = (longlong *)(lVar26 + 0x50);
          unaff_RBX[0x10] = unaff_R13;
          if (unaff_RBX[0x13] == 0) {
            pcVar9 = *(code **)(unaff_RBX[0x15] + 0x18);
            lVar45 = unaff_RBX[0x14] +
                     (*(longlong *)(unaff_RBX[0x15] + 0x10) - 1U & 0xfffffffffffffff0) + 0x10;
            *(undefined1 *)((longlong)unaff_RBX + 0x6d) = 1;
            *(undefined1 *)((longlong)unaff_RBX + 0x6e) = 1;
            *(undefined1 *)((longlong)unaff_RBX + 0x6f) = 1;
            puStack_e0 = (ulonglong *)0x141737946;
            (*pcVar9)(unaff_RBX + 0x50,lVar45);
            auVar49[0] = -(*(char *)(unaff_RBX + 0x50) == DAT_14332a670);
            auVar49[1] = -(*(char *)((longlong)unaff_RBX + 0x281) == UNK_14332a671);
            auVar49[2] = -(*(char *)((longlong)unaff_RBX + 0x282) == UNK_14332a672);
            auVar49[3] = -(*(char *)((longlong)unaff_RBX + 0x283) == UNK_14332a673);
            auVar49[4] = -(*(char *)((longlong)unaff_RBX + 0x284) == UNK_14332a674);
            auVar49[5] = -(*(char *)((longlong)unaff_RBX + 0x285) == UNK_14332a675);
            auVar49[6] = -(*(char *)((longlong)unaff_RBX + 0x286) == UNK_14332a676);
            auVar49[7] = -(*(char *)((longlong)unaff_RBX + 0x287) == UNK_14332a677);
            auVar49[8] = -(*(char *)(unaff_RBX + 0x51) == UNK_14332a678);
            auVar49[9] = -(*(char *)((longlong)unaff_RBX + 0x289) == UNK_14332a679);
            auVar49[10] = -(*(char *)((longlong)unaff_RBX + 0x28a) == UNK_14332a67a);
            auVar49[0xb] = -(*(char *)((longlong)unaff_RBX + 0x28b) == UNK_14332a67b);
            auVar49[0xc] = -(*(char *)((longlong)unaff_RBX + 0x28c) == UNK_14332a67c);
            auVar49[0xd] = -(*(char *)((longlong)unaff_RBX + 0x28d) == UNK_14332a67d);
            auVar49[0xe] = -(*(char *)((longlong)unaff_RBX + 0x28e) == UNK_14332a67e);
            auVar49[0xf] = -(*(char *)((longlong)unaff_RBX + 0x28f) == UNK_14332a67f);
            if ((ushort)((ushort)(SUB161(auVar49 >> 7,0) & 1) |
                         (ushort)(SUB161(auVar49 >> 0xf,0) & 1) << 1 |
                         (ushort)(SUB161(auVar49 >> 0x17,0) & 1) << 2 |
                         (ushort)(SUB161(auVar49 >> 0x1f,0) & 1) << 3 |
                         (ushort)(SUB161(auVar49 >> 0x27,0) & 1) << 4 |
                         (ushort)(SUB161(auVar49 >> 0x2f,0) & 1) << 5 |
                         (ushort)(SUB161(auVar49 >> 0x37,0) & 1) << 6 |
                         (ushort)(SUB161(auVar49 >> 0x3f,0) & 1) << 7 |
                         (ushort)(SUB161(auVar49 >> 0x47,0) & 1) << 8 |
                         (ushort)(SUB161(auVar49 >> 0x4f,0) & 1) << 9 |
                         (ushort)(SUB161(auVar49 >> 0x57,0) & 1) << 10 |
                         (ushort)(SUB161(auVar49 >> 0x5f,0) & 1) << 0xb |
                         (ushort)(SUB161(auVar49 >> 0x67,0) & 1) << 0xc |
                         (ushort)(SUB161(auVar49 >> 0x6f,0) & 1) << 0xd |
                         (ushort)(SUB161(auVar49 >> 0x77,0) & 1) << 0xe |
                        (ushort)(auVar49[0xf] >> 7) << 0xf) != 0xffff) {
              *(undefined1 *)((longlong)unaff_RBX + 0x6d) = 1;
              *(undefined1 *)((longlong)unaff_RBX + 0x6e) = 1;
              *(undefined1 *)((longlong)unaff_RBX + 0x6f) = 1;
              puStack_e0 = (ulonglong *)0x1417389fc;
              pdb_142dc8110(&UNK_14332b0b8,8,&UNK_14332b1c0);
              goto code_r0x00014173a218;
            }
            unaff_RBX[0x1e] = 0;
            unaff_RBX[0x1f] = 0x10;
            unaff_RBX[0x20] = 0;
            unaff_RBX[0x50] = unaff_RBX + 0x1e;
            *(undefined1 *)((longlong)unaff_RBX + 0x7c) = 1;
            puVar37 = unaff_RBX + 0x50;
            puStack_e0 = (ulonglong *)0x1417379af;
            pdb_140d9d5e0(lVar45,puVar37,&UNK_14332b448);
            lVar26 = *(longlong *)(unaff_RBX[0xe] + 0x38);
            lVar27 = *(longlong *)(unaff_RBX[0xe] + 0x40);
            unaff_RBX[0x41] = *(undefined8 *)(lVar26 + 0x28);
            unaff_RBX[0x40] = *(undefined8 *)(lVar26 + 0x20);
            uVar29 = *(undefined8 *)(lVar26 + 0x10);
            pcVar9 = *(code **)(*(longlong *)(lVar26 + 0x18) + 0x38);
            *(undefined1 *)((longlong)unaff_RBX + 0x7c) = 1;
            puStack_e0 = (ulonglong *)0x1417379e4;
            uVar29 = (*pcVar9)(uVar29);
            unaff_RBX[0xba] = uVar29;
            uVar29 = *(undefined8 *)(*(longlong *)(unaff_RBX[0xe] + 0x38) + 0x10);
            pcVar9 = *(code **)(*(longlong *)(*(longlong *)(unaff_RBX[0xe] + 0x38) + 0x18) + 0x18);
            *(undefined1 *)((longlong)unaff_RBX + 0x7c) = 1;
            puStack_e0 = (ulonglong *)0x141737a08;
            uVar25 = (*pcVar9)(uVar29);
            uVar29 = *(undefined8 *)(*(longlong *)(unaff_RBX[0xe] + 0x38) + 0x10);
            pcVar9 = *(code **)(*(longlong *)(*(longlong *)(unaff_RBX[0xe] + 0x38) + 0x18) + 0x20);
            *(undefined1 *)((longlong)unaff_RBX + 0x7c) = 1;
            puStack_e0 = (ulonglong *)0x141737a26;
            uVar18 = (*pcVar9)(uVar29);
            *(undefined1 *)((longlong)unaff_RBX + 0x7c) = 1;
            puStack_e0 = (ulonglong *)0x141737a44;
            pdb_1415e6d20(unaff_RBX + 0x38,unaff_RBX + 0x24);
            unaff_RBX[0x1a] = unaff_RBX[0x23];
            unaff_RBX[0x18] = unaff_RBX[0x21];
            unaff_RBX[0x19] = unaff_RBX[0x22];
            unaff_RBX[0x52] = unaff_RBX[0x20];
            unaff_RBX[0x50] = unaff_RBX[0x1e];
            unaff_RBX[0x51] = unaff_RBX[0x1f];
            *(undefined1 *)((longlong)unaff_RBX + 0x7c) = 0;
            pbStack_88 = (byte *)(unaff_RBX + 0x50);
            plStack_90 = unaff_RBX + 0x18;
            iStack_a0 = CONCAT31(iStack_a0._1_3_,uVar18);
            plStack_b8 = (longlong *)unaff_RBX[0xba];
            puStack_e0 = (ulonglong *)0x141737ad8;
            puStack_b0 = puVar37;
            uStack_a8 = uVar25;
            puStack_98 = unaff_RBX + 0x38;
            lVar26 = pdb_1417ffee0(lVar27 + 0x10,unaff_RBX[0x40],unaff_RBX[0x41],lVar45);
          }
          else {
            lVar45 = *(longlong *)(unaff_RBX[0xe] + 0x38);
            lVar26 = *(longlong *)(unaff_RBX[0xe] + 0x40);
            unaff_RBX[0x41] = *(undefined8 *)(lVar45 + 0x28);
            unaff_RBX[0x40] = *(undefined8 *)(lVar45 + 0x20);
            uVar29 = *(undefined8 *)(lVar45 + 0x10);
            pcVar9 = *(code **)(*(longlong *)(lVar45 + 0x18) + 0x38);
            *(undefined1 *)((longlong)unaff_RBX + 0x6d) = 1;
            *(undefined1 *)((longlong)unaff_RBX + 0x6e) = 1;
            *(undefined1 *)((longlong)unaff_RBX + 0x6f) = 1;
            puStack_e0 = (ulonglong *)0x1417377f3;
            plVar24 = (longlong *)(*pcVar9)(uVar29);
            uVar29 = *(undefined8 *)(*(longlong *)(unaff_RBX[0xe] + 0x38) + 0x10);
            pcVar9 = *(code **)(*(longlong *)(*(longlong *)(unaff_RBX[0xe] + 0x38) + 0x18) + 0x18);
            *(undefined1 *)((longlong)unaff_RBX + 0x6d) = 1;
            *(undefined1 *)((longlong)unaff_RBX + 0x6e) = 1;
            *(undefined1 *)((longlong)unaff_RBX + 0x6f) = 1;
            puStack_e0 = (ulonglong *)0x14173781c;
            uVar25 = (*pcVar9)(uVar29);
            uVar29 = *(undefined8 *)(*(longlong *)(unaff_RBX[0xe] + 0x38) + 0x10);
            pcVar9 = *(code **)(*(longlong *)(*(longlong *)(unaff_RBX[0xe] + 0x38) + 0x18) + 0x20);
            *(undefined1 *)((longlong)unaff_RBX + 0x6d) = 1;
            *(undefined1 *)((longlong)unaff_RBX + 0x6e) = 1;
            *(undefined1 *)((longlong)unaff_RBX + 0x6f) = 1;
            puStack_e0 = (ulonglong *)0x141737842;
            uVar18 = (*pcVar9)(uVar29);
            *(undefined1 *)((longlong)unaff_RBX + 0x6d) = 1;
            *(undefined1 *)((longlong)unaff_RBX + 0x6e) = 1;
            *(undefined1 *)((longlong)unaff_RBX + 0x6f) = 1;
            puStack_e0 = (ulonglong *)0x141737868;
            pdb_1415e6d20(unaff_RBX + 0x38,unaff_RBX + 0x24);
            unaff_RBX[0x1a] = unaff_RBX[0x23];
            unaff_RBX[0x18] = unaff_RBX[0x21];
            unaff_RBX[0x19] = unaff_RBX[0x22];
            unaff_RBX[0x50] = 0;
            unaff_RBX[0x51] = 0x10;
            unaff_RBX[0x52] = 0;
            *(undefined1 *)((longlong)unaff_RBX + 0x6d) = 0;
            *(undefined1 *)((longlong)unaff_RBX + 0x6e) = 1;
            *(undefined1 *)((longlong)unaff_RBX + 0x6f) = 1;
            pbStack_88 = (byte *)(unaff_RBX + 0x50);
            plStack_90 = unaff_RBX + 0x18;
            iStack_a0 = CONCAT31(iStack_a0._1_3_,uVar18);
            puStack_e0 = (ulonglong *)0x141737902;
            plStack_b8 = plVar24;
            puStack_b0 = puVar37;
            uStack_a8 = uVar25;
            puStack_98 = unaff_RBX + 0x38;
            lVar26 = pdb_1417ffee0(lVar26 + 0x10,unaff_RBX[0x40],unaff_RBX[0x41],0);
          }
          unaff_RBX[0x50] = unaff_RBX[0x13];
          unaff_RBX[0x51] = unaff_RBX[0x14];
          *(undefined4 *)(unaff_RBX + 0x52) = *(undefined4 *)(unaff_RBX + 0x15);
          *(undefined4 *)((longlong)unaff_RBX + 0x294) = *(undefined4 *)((longlong)unaff_RBX + 0xac)
          ;
          *(undefined4 *)(unaff_RBX + 0x53) = *(undefined4 *)(unaff_RBX + 0x16);
          *(undefined4 *)((longlong)unaff_RBX + 0x29c) = *(undefined4 *)((longlong)unaff_RBX + 0xb4)
          ;
          unaff_RBX[0x54] = lVar26;
          lVar45 = unaff_RBX[0x50];
          if (lVar26 == 0 || lVar45 != 0) {
            uVar29 = unaff_RBX[0x51];
            pbVar30 = (byte *)unaff_RBX[0x52];
            unaff_RBX[0x48] = unaff_RBX[0x26];
            param_1 = (ulonglong *)unaff_RBX[0x53];
            unaff_RBX[0x46] = unaff_RBX[0x24];
            unaff_RBX[0x47] = unaff_RBX[0x25];
            if (lVar26 != 0) {
              *(undefined1 *)((longlong)unaff_RBX + 0x6d) = 0;
              *(undefined1 *)((longlong)unaff_RBX + 0x6e) = 0;
              *(undefined1 *)((longlong)unaff_RBX + 0x6f) = 0;
              puStack_e0 = (ulonglong *)0x141737b6d;
              pdb_1404b38e0(unaff_RBX + 0x54);
            }
          }
          else {
            lVar45 = *(longlong *)(unaff_RBX[0xe] + 0x10);
            uVar29 = *(undefined8 *)(unaff_RBX[0xe] + 0x18);
            unaff_RBX[0x18] = 1;
            unaff_RBX[0x19] = 1;
            unaff_RBX[0x1a] = lVar26;
            puStack_e0 = (ulonglong *)0x141737b9d;
            pdb_14007ee60();
            puStack_e0 = (ulonglong *)0x141737bac;
            pbVar30 = pub_1406abab0(0x18,8);
            if (pbVar30 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
              puStack_e0 = (ulonglong *)0x1417389d2;
              pdb_142dc7e11(8,0x18);
            }
            *(undefined8 *)(pbVar30 + 0x10) = unaff_RBX[0x1a];
            uVar25 = unaff_RBX[0x19];
            *(undefined8 *)pbVar30 = unaff_RBX[0x18];
            *(undefined8 *)(pbVar30 + 8) = uVar25;
            unaff_RBX[0x46] = unaff_RBX[0x24];
            unaff_RBX[0x47] = unaff_RBX[0x25];
            unaff_RBX[0x48] = unaff_RBX[0x26];
            if (unaff_RBX[0x50] == 0) {
              plVar24 = (longlong *)unaff_RBX[0x51];
              LOCK();
              *plVar24 = *plVar24 + -1;
              UNLOCK();
              param_1 = (ulonglong *)&UNK_14332b220;
              if (*plVar24 == 0) {
                *(undefined1 *)((longlong)unaff_RBX + 0x6d) = 0;
                *(undefined1 *)((longlong)unaff_RBX + 0x6e) = 0;
                *(undefined1 *)((longlong)unaff_RBX + 0x6f) = 0;
                puStack_e0 = (ulonglong *)0x141737e1b;
                pdb_140c7a240(unaff_RBX + 0x51);
              }
            }
            else {
              plVar24 = (longlong *)unaff_RBX[0x52];
              LOCK();
              *plVar24 = *plVar24 + -1;
              UNLOCK();
              param_1 = (ulonglong *)&UNK_14332b220;
              if (*plVar24 == 0) {
                *(undefined1 *)((longlong)unaff_RBX + 0x6d) = 0;
                *(undefined1 *)((longlong)unaff_RBX + 0x6e) = 0;
                *(undefined1 *)((longlong)unaff_RBX + 0x6f) = 0;
                puStack_e0 = (ulonglong *)0x141737c2a;
                pdb_140c7a240(unaff_RBX + 0x52);
              }
            }
          }
          lVar26 = unaff_RBX[0x2b];
          if (lVar26 != 0) {
            lVar27 = lVar26 * 0x10 + 0x10;
            uVar39 = lVar26 + lVar27 + 0x11;
            if (uVar39 != 0) {
              puStack_e0 = (ulonglong *)0x141737e55;
              pub_1406abac0((byte *)(unaff_RBX[0x2a] - lVar27),uVar39,0x10);
            }
          }
          plVar24 = *(longlong **)unaff_RBX[0x11];
          LOCK();
          *plVar24 = *plVar24 + -1;
          UNLOCK();
          if (*plVar24 == 0) {
            unaff_RBX[0x4a] = unaff_RBX[0x29];
            unaff_RBX[0x4b] = unaff_RBX[0x28];
            puStack_e0 = (ulonglong *)0x141737e86;
            pdb_140dd7630();
          }
          lVar26 = unaff_RBX[0xe];
          *(undefined2 *)(lVar26 + 0x48) = 0;
        }
        else {
          uVar29 = unaff_RBX[0x38];
          pbVar30 = (byte *)unaff_RBX[0x39];
          unaff_RBX[0xcb] = uVar29;
          unaff_RBX[0xcc] = pbVar30;
          unaff_RBX[0x26] = unaff_RBX[0x3c];
          unaff_RBX[0x24] = unaff_RBX[0x3a];
          unaff_RBX[0x25] = unaff_RBX[0x3b];
          plVar24 = plRam0000000143cad8a8;
          if (*_DAT_143ca4b08 < 2) {
            bVar19 = *(byte *)(plRam0000000143cad8a8 + 2);
            puVar37 = (undefined8 *)(ulonglong)bVar19;
            if (2 < bVar19) {
              unaff_RBX[0x11] = uVar29;
              puStack_e0 = (ulonglong *)0x14173962b;
              uVar21 = pdb_142db8070(plRam0000000143cad8a8);
              puVar37 = (undefined8 *)(ulonglong)uVar21;
              uVar29 = unaff_RBX[0x11];
              if ((char)uVar21 != '\0') goto code_r0x000141738635;
              goto code_r0x00014173963d;
            }
            if (bVar19 == 0) goto code_r0x00014173963d;
code_r0x000141738635:
            unaff_RBX[0x11] = uVar29;
            puStack_e0 = (ulonglong *)0x141738644;
            cVar20 = pdb_140dd7f60(*plVar24);
            uVar29 = unaff_RBX[0x11];
            if (cVar20 == '\0') goto code_r0x00014173963d;
            lVar45 = *plVar24;
            uVar39 = *(ulonglong *)(lVar45 + 0x38);
            if (uVar39 == 0) {
              puStack_e0 = (ulonglong *)0x14173a091;
              pdb_142dc8110(&UNK_14332aff8,0x22,&UNK_14332b118);
              goto code_r0x00014173a218;
            }
            uVar29 = *(undefined8 *)(lVar45 + 0x30);
            uVar25 = *(undefined8 *)(lVar45 + 0x40);
            uVar5 = *(undefined8 *)(lVar45 + 0x48);
            unaff_RBX[0x18] = uVar29;
            unaff_RBX[0x19] = uVar39;
            unaff_RBX[0x1a] = uVar25;
            unaff_RBX[0x1b] = uVar5;
            unaff_RBX[0x1c] = 0;
            unaff_RBX[0x21] = &UNK_14332b130;
            unaff_RBX[0x22] = 0x39;
            if (uVar39 == 1) {
              puStack_e0 = (ulonglong *)0x14173a0cd;
              pdb_142dc8110(&UNK_14332aff8,0x22,&UNK_14332b118);
              goto code_r0x00014173a218;
            }
            unaff_RBX[0x13] = uVar29;
            unaff_RBX[0x14] = uVar39;
            unaff_RBX[0x15] = uVar25;
            unaff_RBX[0x16] = uVar5;
            unaff_RBX[0x17] = 1;
            unaff_RBX[0x44] = *(longlong *)(unaff_RBX[0xe] + 0x38) + 0x20;
            if (uVar39 < 3) {
              puStack_e0 = (ulonglong *)0x14173a109;
              pdb_142dc8110(&UNK_14332aff8,0x22,&UNK_14332b118);
              goto code_r0x00014173a218;
            }
            unaff_RBX[0x2a] = uVar29;
            unaff_RBX[0x2b] = uVar39;
            unaff_RBX[0x2c] = uVar25;
            unaff_RBX[0x2d] = uVar5;
            unaff_RBX[0x2e] = 2;
            unaff_RBX[0x50] = unaff_RBX + 0x18;
            unaff_RBX[0x51] = unaff_RBX + 0x21;
            unaff_RBX[0x52] = &UNK_14332b058;
            unaff_RBX[0x53] = unaff_RBX + 0x13;
            unaff_RBX[0x54] = unaff_RBX + 0x44;
            unaff_RBX[0x55] = &UNK_14332b078;
            unaff_RBX[0x56] = unaff_RBX + 0x2a;
            unaff_RBX[0x57] = unaff_RBX[0xe] + 0x10;
            unaff_RBX[0x58] = &UNK_14332b098;
            unaff_RBX[0x1e] = unaff_RBX + 0x50;
            unaff_RBX[0x1f] = 3;
            unaff_RBX[0x20] = lVar45 + 0x30;
            puStack_e0 = (ulonglong *)0x1417387d0;
            pdb_14173b830(unaff_RBX + 0x1e);
code_r0x000141739867:
            uVar29 = unaff_RBX[0x11];
          }
          else {
code_r0x00014173963d:
            if ((*_DAT_143ca4ab0 == '\0') && (3 < *_DAT_143ca8e90)) {
              unaff_RBX[0x11] = uVar29;
              plVar24 = plRam0000000143cad8a8;
              param_1 = (ulonglong *)*plRam0000000143cad8a8;
              uVar39 = param_1[4];
              uVar6 = param_1[5];
              unaff_RBX[0xc2] = 4;
              unaff_RBX[0xc3] = uVar39;
              unaff_RBX[0xc4] = uVar6;
              puStack_e0 = (ulonglong *)0x141739691;
              uVar25 = pdb_140f33290();
              puStack_e0 = (ulonglong *)0x1417396a7;
              cVar20 = (*(code *)puVar37[3])(uVar25,unaff_RBX + 0xc2);
              uVar29 = unaff_RBX[0x11];
              if (cVar20 != '\0') {
                lVar45 = *plVar24;
                uVar39 = *(ulonglong *)(lVar45 + 0x38);
                if (uVar39 == 0) {
                  puStack_e0 = (ulonglong *)0x14173a1ab;
                  pdb_142dc8110(&UNK_14332aff8,0x22,&UNK_14332b118);
                  goto code_r0x00014173a218;
                }
                uVar29 = *(undefined8 *)(lVar45 + 0x30);
                uVar5 = *(undefined8 *)(lVar45 + 0x40);
                uVar7 = *(undefined8 *)(lVar45 + 0x48);
                unaff_RBX[0x18] = uVar29;
                unaff_RBX[0x19] = uVar39;
                unaff_RBX[0x1a] = uVar5;
                unaff_RBX[0x1b] = uVar7;
                unaff_RBX[0x1c] = 0;
                unaff_RBX[0x44] = &UNK_14332b130;
                unaff_RBX[0x45] = 0x39;
                if (uVar39 == 1) {
                  puStack_e0 = (ulonglong *)0x14173a1e1;
                  pdb_142dc8110(&UNK_14332aff8,0x22,&UNK_14332b118);
                  goto code_r0x00014173a218;
                }
                unaff_RBX[0x13] = uVar29;
                unaff_RBX[0x14] = uVar39;
                unaff_RBX[0x15] = uVar5;
                unaff_RBX[0x16] = uVar7;
                unaff_RBX[0x17] = 1;
                unaff_RBX[0xbb] = *(longlong *)(unaff_RBX[0xe] + 0x38) + 0x20;
                if (uVar39 < 3) {
                  puStack_e0 = (ulonglong *)0x14173a217;
                  pdb_142dc8110(&UNK_14332aff8,0x22,&UNK_14332b118);
                  goto code_r0x00014173a218;
                }
                unaff_RBX[0x2a] = uVar29;
                unaff_RBX[0x2b] = uVar39;
                unaff_RBX[0x2c] = uVar5;
                unaff_RBX[0x2d] = uVar7;
                unaff_RBX[0x2e] = 2;
                unaff_RBX[0x50] = unaff_RBX + 0x18;
                unaff_RBX[0x51] = unaff_RBX + 0x44;
                unaff_RBX[0x52] = &UNK_14332b058;
                unaff_RBX[0x53] = unaff_RBX + 0x13;
                unaff_RBX[0x54] = unaff_RBX + 0xbb;
                unaff_RBX[0x55] = &UNK_14332b078;
                unaff_RBX[0x56] = unaff_RBX + 0x2a;
                unaff_RBX[0x57] = unaff_RBX[0xe] + 0x10;
                unaff_RBX[0x58] = &UNK_14332b098;
                unaff_RBX[0x21] = unaff_RBX + 0x50;
                unaff_RBX[0x22] = 3;
                unaff_RBX[0x23] = lVar45 + 0x30;
                unaff_RBX[0x20] = unaff_RBX[0xc4];
                unaff_RBX[0x1e] = unaff_RBX[0xc2];
                unaff_RBX[0x1f] = unaff_RBX[0xc3];
                plStack_b8 = unaff_RBX + 0x21;
                puStack_e0 = (ulonglong *)0x141739866;
                pdb_140dd7f80(param_1,uVar25,puVar37,unaff_RBX + 0x1e);
                goto code_r0x000141739867;
              }
            }
          }
          unaff_RBX[0x48] = unaff_RBX[0x26];
          unaff_RBX[0x46] = unaff_RBX[0x24];
          unaff_RBX[0x47] = unaff_RBX[0x25];
          lVar45 = 0;
          lVar26 = unaff_RBX[0xe];
        }
        uVar39 = *(longlong *)(lVar26 + 0x38) + 0x10;
        unaff_RBX[0x50] = lVar45;
        unaff_RBX[0x51] = uVar29;
        unaff_RBX[0x52] = pbVar30;
        unaff_RBX[0x53] = param_1;
        unaff_RBX[0x2c] = unaff_RBX[0x48];
        unaff_RBX[0x2a] = unaff_RBX[0x46];
        unaff_RBX[0x2b] = unaff_RBX[0x47];
        puVar37 = unaff_RBX + 0x50;
        puVar38 = unaff_RBX + 0x2a;
        puStack_e0 = (ulonglong *)0x1417398f4;
        pdb_141746c10(unaff_RBX + 0x38,uVar39,puVar37,puVar38);
        plVar24 = (longlong *)(unaff_RBX[0xe] + 0x38);
        *(undefined1 *)(unaff_RBX[0xe] + 0x60) = 0;
        plVar8 = plRam0000000143cad8b8;
        if (unaff_RBX[0x38] == 0) {
          if (*_DAT_143ca4b08 < 2) {
            bVar19 = *(byte *)(plRam0000000143cad8b8 + 2);
            uVar39 = (ulonglong)bVar19;
            if (2 < bVar19) {
              *(undefined1 *)((longlong)unaff_RBX + 0x6c) = 1;
              puStack_e0 = (ulonglong *)0x141739adb;
              uVar21 = pdb_142db8070(plRam0000000143cad8b8);
              uVar39 = (ulonglong)uVar21;
              if ((char)uVar21 != '\0') goto code_r0x00014173993f;
              goto code_r0x000141739ae6;
            }
            if (bVar19 == 0) goto code_r0x000141739ae6;
code_r0x00014173993f:
            lVar45 = *plVar8;
            *(undefined1 *)((longlong)unaff_RBX + 0x6c) = 1;
            puStack_e0 = (ulonglong *)0x14173994b;
            cVar20 = pdb_140dd7f60(lVar45);
            if (cVar20 == '\0') goto code_r0x000141739ae6;
            lVar45 = *plVar8;
            uVar39 = *(ulonglong *)(lVar45 + 0x38);
            if (uVar39 == 0) {
              *(undefined1 *)((longlong)unaff_RBX + 0x6c) = 1;
              puStack_e0 = (ulonglong *)0x141739f51;
              pdb_142dc8110(&UNK_14332aff8,0x22,&UNK_14332b278);
              goto code_r0x00014173a218;
            }
            uVar29 = *(undefined8 *)(lVar45 + 0x30);
            uVar25 = *(undefined8 *)(lVar45 + 0x40);
            uVar5 = *(undefined8 *)(lVar45 + 0x48);
            unaff_RBX[0x18] = uVar29;
            unaff_RBX[0x19] = uVar39;
            unaff_RBX[0x1a] = uVar25;
            unaff_RBX[0x1b] = uVar5;
            unaff_RBX[0x1c] = 0;
            unaff_RBX[0x21] = &UNK_14332b290;
            unaff_RBX[0x22] = 0x33;
            if (uVar39 == 1) {
              *(undefined1 *)((longlong)unaff_RBX + 0x6c) = 1;
              puStack_e0 = (ulonglong *)0x141739f73;
              pdb_142dc8110(&UNK_14332aff8,0x22,&UNK_14332b278);
              goto code_r0x00014173a218;
            }
            unaff_RBX[0x13] = uVar29;
            unaff_RBX[0x14] = uVar39;
            unaff_RBX[0x15] = uVar25;
            unaff_RBX[0x16] = uVar5;
            unaff_RBX[0x17] = 1;
            unaff_RBX[0x24] = *plVar24 + 0x20;
            if (uVar39 < 3) {
              *(undefined1 *)((longlong)unaff_RBX + 0x6c) = 1;
              puStack_e0 = (ulonglong *)0x141739f95;
              pdb_142dc8110(&UNK_14332aff8,0x22,&UNK_14332b278);
              goto code_r0x00014173a218;
            }
            unaff_RBX[0x2a] = uVar29;
            unaff_RBX[0x2b] = uVar39;
            unaff_RBX[0x2c] = uVar25;
            unaff_RBX[0x2d] = uVar5;
            unaff_RBX[0x2e] = 2;
            unaff_RBX[0x50] = unaff_RBX + 0x18;
            unaff_RBX[0x51] = unaff_RBX + 0x21;
            unaff_RBX[0x52] = &UNK_14332b058;
            unaff_RBX[0x53] = unaff_RBX + 0x13;
            unaff_RBX[0x54] = unaff_RBX + 0x24;
            unaff_RBX[0x55] = &UNK_14332b078;
            unaff_RBX[0x56] = puVar38;
            unaff_RBX[0x57] = unaff_RBX[0xe] + 0x10;
            unaff_RBX[0x58] = &UNK_14332b098;
            unaff_RBX[0x1e] = puVar37;
            unaff_RBX[0x1f] = 3;
            unaff_RBX[0x20] = lVar45 + 0x30;
            *(undefined1 *)((longlong)unaff_RBX + 0x6c) = 1;
            puStack_e0 = (ulonglong *)0x141739ac5;
            pdb_14173b780(unaff_RBX + 0x1e);
          }
          else {
code_r0x000141739ae6:
            plVar8 = plRam0000000143cad8b8;
            if ((*_DAT_143ca4ab0 == '\0') && (3 < *_DAT_143ca8e90)) {
              lVar45 = *plRam0000000143cad8b8;
              unaff_RBX[0x11] = lVar45;
              uVar29 = *(undefined8 *)(lVar45 + 0x20);
              uVar25 = *(undefined8 *)(lVar45 + 0x28);
              unaff_RBX[200] = 4;
              unaff_RBX[0xc9] = uVar29;
              unaff_RBX[0xca] = uVar25;
              *(undefined1 *)((longlong)unaff_RBX + 0x6c) = 1;
              puStack_e0 = (ulonglong *)0x141739b3e;
              uVar29 = pdb_140f33290();
              pcVar9 = *(code **)(uVar39 + 0x18);
              *(undefined1 *)((longlong)unaff_RBX + 0x6c) = 1;
              puStack_e0 = (ulonglong *)0x141739b59;
              cVar20 = (*pcVar9)(uVar29,unaff_RBX + 200);
              if (cVar20 != '\0') {
                lVar45 = *plVar8;
                uVar6 = *(ulonglong *)(lVar45 + 0x38);
                if (uVar6 == 0) {
                  *(undefined1 *)((longlong)unaff_RBX + 0x6c) = 1;
                  puStack_e0 = (ulonglong *)0x14173a12b;
                  pdb_142dc8110(&UNK_14332aff8,0x22,&UNK_14332b278);
                  goto code_r0x00014173a218;
                }
                uVar25 = *(undefined8 *)(lVar45 + 0x30);
                uVar5 = *(undefined8 *)(lVar45 + 0x40);
                uVar7 = *(undefined8 *)(lVar45 + 0x48);
                unaff_RBX[0x18] = uVar25;
                unaff_RBX[0x19] = uVar6;
                unaff_RBX[0x1a] = uVar5;
                unaff_RBX[0x1b] = uVar7;
                unaff_RBX[0x1c] = 0;
                unaff_RBX[0x24] = &UNK_14332b290;
                unaff_RBX[0x25] = 0x33;
                if (uVar6 == 1) {
                  *(undefined1 *)((longlong)unaff_RBX + 0x6c) = 1;
                  puStack_e0 = (ulonglong *)0x14173a14d;
                  pdb_142dc8110(&UNK_14332aff8,0x22,&UNK_14332b278);
                  goto code_r0x00014173a218;
                }
                unaff_RBX[0x13] = uVar25;
                unaff_RBX[0x14] = uVar6;
                unaff_RBX[0x15] = uVar5;
                unaff_RBX[0x16] = uVar7;
                unaff_RBX[0x17] = 1;
                unaff_RBX[0x44] = *plVar24 + 0x20;
                if (uVar6 < 3) {
                  *(undefined1 *)((longlong)unaff_RBX + 0x6c) = 1;
                  puStack_e0 = (ulonglong *)0x14173a16f;
                  pdb_142dc8110(&UNK_14332aff8,0x22,&UNK_14332b278);
                  goto code_r0x00014173a218;
                }
                unaff_RBX[0x2a] = uVar25;
                unaff_RBX[0x2b] = uVar6;
                unaff_RBX[0x2c] = uVar5;
                unaff_RBX[0x2d] = uVar7;
                unaff_RBX[0x2e] = 2;
                unaff_RBX[0x50] = unaff_RBX + 0x18;
                unaff_RBX[0x51] = unaff_RBX + 0x24;
                unaff_RBX[0x52] = &UNK_14332b058;
                unaff_RBX[0x53] = unaff_RBX + 0x13;
                unaff_RBX[0x54] = unaff_RBX + 0x44;
                unaff_RBX[0x55] = &UNK_14332b078;
                unaff_RBX[0x56] = puVar38;
                unaff_RBX[0x57] = unaff_RBX[0xe] + 0x10;
                unaff_RBX[0x58] = &UNK_14332b098;
                unaff_RBX[0x21] = puVar37;
                unaff_RBX[0x22] = 3;
                unaff_RBX[0x23] = lVar45 + 0x30;
                unaff_RBX[0x20] = unaff_RBX[0xca];
                unaff_RBX[0x1e] = unaff_RBX[200];
                unaff_RBX[0x1f] = unaff_RBX[0xc9];
                *(undefined1 *)((longlong)unaff_RBX + 0x6c) = 1;
                plStack_b8 = unaff_RBX + 0x21;
                puStack_e0 = (ulonglong *)0x141739d0a;
                pdb_140dd7f80(unaff_RBX[0x11],uVar29,uVar39,unaff_RBX + 0x1e);
              }
            }
          }
          uVar29 = _UNK_14332b500;
          if (unaff_RBX[0x38] == 0) {
            plStack_b8 = unaff_RBX + 0x39;
            lVar45 = *(longlong *)(unaff_RBX[0xe] + 0x40);
            unaff_RBX[0x50] = _DAT_14332b4f8;
            unaff_RBX[0x51] = uVar29;
            lVar26 = *(longlong *)(unaff_RBX[0xe] + 0x38);
            uVar29 = *(undefined8 *)(lVar26 + 0x20);
            uVar25 = *(undefined8 *)(lVar26 + 0x28);
            *(undefined1 *)((longlong)unaff_RBX + 0x6c) = 1;
            puStack_e0 = (ulonglong *)0x141739d59;
            pdb_141c2b710(lVar45 + 0x10,unaff_RBX + 0x50,uVar29,uVar25);
          }
        }
        *(undefined4 *)(unaff_RBX + 0x52) = *(undefined4 *)(unaff_RBX + 0x3a);
        *(undefined4 *)((longlong)unaff_RBX + 0x294) = *(undefined4 *)((longlong)unaff_RBX + 0x1d4);
        *(undefined4 *)(unaff_RBX + 0x53) = *(undefined4 *)(unaff_RBX + 0x3b);
        *(undefined4 *)((longlong)unaff_RBX + 0x29c) = *(undefined4 *)((longlong)unaff_RBX + 0x1dc);
        unaff_RBX[0x50] = unaff_RBX[0x38];
        unaff_RBX[0x51] = unaff_RBX[0x39];
        *(undefined1 *)((longlong)unaff_RBX + 0x6c) = 0;
        puStack_e0 = (ulonglong *)0x141739d8f;
        pdb_14173b990(unaff_RBX + 0x4c,unaff_RBX + 0x50);
        unaff_RBX[0x11] = unaff_RBX[0xe] + 0x58;
        puStack_e0 = (ulonglong *)0x141739da4;
        pdb_141ac4fd0();
        plVar8 = *(longlong **)unaff_RBX[0x11];
        LOCK();
        *plVar8 = *plVar8 + -1;
        UNLOCK();
        unaff_R13 = (ulonglong *)unaff_RBX[0x10];
        if (*plVar8 == 0) {
          puStack_e0 = (ulonglong *)0x141739dc1;
          pdb_140dd76c0();
        }
        plVar8 = (longlong *)*plVar24;
        LOCK();
        *plVar8 = *plVar8 + -1;
        UNLOCK();
        if (*plVar8 == 0) {
          puStack_e0 = (ulonglong *)0x141739dd3;
          pdb_140dd76c0(plVar24);
        }
        goto code_r0x000141739dd4;
      }
      *(undefined8 *)(in_R11 + 0x50) = *(undefined8 *)(in_R11 + 0x28);
      *(undefined8 *)(in_R11 + 0x58) = *(undefined8 *)(in_R11 + 0x30);
      plVar24 = plRam0000000143cad8a0;
      if (*_DAT_143ca4b08 < 2) {
        bVar19 = *(byte *)(plRam0000000143cad8a0 + 2);
        unaff_R12 = (ulonglong)bVar19;
        if (2 < bVar19) {
          puStack_e0 = (ulonglong *)0x141738a23;
          uVar21 = pdb_142db8070(plRam0000000143cad8a0);
          unaff_R12 = (ulonglong)uVar21;
          in_R11 = unaff_RBX[0xe];
          if ((char)uVar21 != '\0') goto code_r0x00014173803c;
          goto code_r0x000141738a32;
        }
        if (bVar19 == 0) goto code_r0x000141738a32;
code_r0x00014173803c:
        puStack_e0 = (ulonglong *)0x141738044;
        cVar20 = pdb_140dd7f60(*plVar24);
        in_R11 = unaff_RBX[0xe];
        if (cVar20 == '\0') goto code_r0x000141738a32;
        lVar45 = *plVar24;
        uVar39 = *(ulonglong *)(lVar45 + 0x38);
        if (uVar39 == 0) {
          puStack_e0 = (ulonglong *)0x141739e8d;
          pdb_142dc8110(&UNK_14332aff8,0x22,&UNK_14332b0d8);
          goto code_r0x00014173a218;
        }
        uVar29 = *(undefined8 *)(lVar45 + 0x30);
        uVar25 = *(undefined8 *)(lVar45 + 0x40);
        uVar5 = *(undefined8 *)(lVar45 + 0x48);
        unaff_RBX[0x18] = uVar29;
        unaff_RBX[0x19] = uVar39;
        unaff_RBX[0x1a] = uVar25;
        unaff_RBX[0x1b] = uVar5;
        unaff_RBX[0x1c] = 0;
        unaff_RBX[0x1e] = &UNK_14332b0f0;
        unaff_RBX[0x1f] = 0x47;
        if (uVar39 == 1) {
          puStack_e0 = (ulonglong *)0x141739ecd;
          pdb_142dc8110(&UNK_14332aff8,0x22,&UNK_14332b0d8);
          goto code_r0x00014173a218;
        }
        unaff_RBX[0x13] = uVar29;
        unaff_RBX[0x14] = uVar39;
        unaff_RBX[0x15] = uVar25;
        unaff_RBX[0x16] = uVar5;
        unaff_RBX[0x17] = 1;
        unaff_RBX[0x21] = *(longlong *)(in_R11 + 0x38) + 0x20;
        if (uVar39 < 3) {
          puStack_e0 = (ulonglong *)0x141739f0d;
          pdb_142dc8110(&UNK_14332aff8,0x22,&UNK_14332b0d8);
          goto code_r0x00014173a218;
        }
        unaff_RBX[0x2a] = uVar29;
        unaff_RBX[0x2b] = uVar39;
        unaff_RBX[0x2c] = uVar25;
        unaff_RBX[0x2d] = uVar5;
        unaff_RBX[0x2e] = 2;
        unaff_RBX[0x50] = unaff_RBX + 0x18;
        unaff_RBX[0x51] = unaff_RBX + 0x1e;
        unaff_RBX[0x52] = &UNK_14332b058;
        unaff_RBX[0x53] = unaff_RBX + 0x13;
        unaff_RBX[0x54] = unaff_RBX + 0x21;
        unaff_RBX[0x55] = &UNK_14332b078;
        unaff_RBX[0x56] = unaff_RBX + 0x2a;
        unaff_RBX[0x57] = in_R11 + 0x10;
        unaff_RBX[0x58] = &UNK_14332b098;
        unaff_RBX[0x38] = unaff_RBX + 0x50;
        unaff_RBX[0x39] = 3;
        unaff_RBX[0x3a] = lVar45 + 0x30;
        puStack_e0 = (ulonglong *)0x1417381c9;
        pdb_14173b6d0(unaff_RBX + 0x38);
        goto code_r0x000141738c4f;
      }
code_r0x000141738a32:
      plVar24 = plRam0000000143cad8a0;
      if ((*_DAT_143ca4ab0 == '\0') && (3 < *_DAT_143ca8e90)) {
        unaff_R14 = (int *)*plRam0000000143cad8a0;
        uVar29 = *(undefined8 *)(unaff_R14 + 8);
        uVar25 = *(undefined8 *)(unaff_R14 + 10);
        unaff_RBX[0xbf] = 4;
        unaff_RBX[0xc0] = uVar29;
        unaff_RBX[0xc1] = uVar25;
        puStack_e0 = (ulonglong *)0x141738a80;
        unaff_R15 = pdb_140f33290();
        puStack_e0 = (ulonglong *)0x141738a96;
        cVar20 = (**(code **)(unaff_R12 + 0x18))(unaff_R15,unaff_RBX + 0xbf);
        in_R11 = unaff_RBX[0xe];
        if (cVar20 != '\0') {
          lVar45 = *plVar24;
          uVar39 = *(ulonglong *)(lVar45 + 0x38);
          if (uVar39 == 0) {
            puStack_e0 = (ulonglong *)0x141739fb3;
            pdb_142dc8110(&UNK_14332aff8,0x22,&UNK_14332b0d8);
            goto code_r0x00014173a218;
          }
          param_4 = *(undefined **)(lVar45 + 0x30);
          param_2 = *(ulonglong **)(lVar45 + 0x40);
          param_3 = *(longlong *)(lVar45 + 0x48);
          unaff_RBX[0x18] = param_4;
          unaff_RBX[0x19] = uVar39;
          unaff_RBX[0x1a] = param_2;
          unaff_RBX[0x1b] = param_3;
          unaff_RBX[0x1c] = 0;
          unaff_RBX[0x21] = &UNK_14332b0f0;
          unaff_RBX[0x22] = 0x47;
          if (uVar39 == 1) {
            puStack_e0 = (ulonglong *)0x141739ff3;
            pdb_142dc8110(&UNK_14332aff8,0x22,&UNK_14332b0d8);
            goto code_r0x00014173a218;
          }
          unaff_RBX[0x13] = param_4;
          unaff_RBX[0x14] = uVar39;
          unaff_RBX[0x15] = param_2;
          unaff_RBX[0x16] = param_3;
          unaff_RBX[0x17] = 1;
          unaff_RBX[0x24] = *(longlong *)(in_R11 + 0x38) + 0x20;
          if (uVar39 < 3) {
            puStack_e0 = (ulonglong *)0x14173a033;
            pdb_142dc8110(&UNK_14332aff8,0x22,&UNK_14332b0d8);
            goto code_r0x00014173a218;
          }
          goto code_r0x000141738b49;
        }
      }
      goto code_r0x000141738c53;
    }
    uVar29 = *(undefined8 *)(in_R11 + 0x30);
    unaff_RBX[0x24] = *(undefined8 *)(in_R11 + 0x28);
    unaff_RBX[0x25] = uVar29;
    plVar24 = plRam0000000143cad8b0;
    if (*_DAT_143ca4b08 < 2) {
      bVar19 = *(byte *)(plRam0000000143cad8b0 + 2);
      unaff_R12 = (ulonglong)bVar19;
      if (2 < bVar19) {
        *(undefined1 *)((longlong)unaff_RBX + 0x6b) = 1;
        puStack_e0 = (ulonglong *)0x141738e3f;
        uVar21 = pdb_142db8070(plRam0000000143cad8b0);
        unaff_R12 = (ulonglong)uVar21;
        in_R11 = unaff_RBX[0xe];
        if ((char)uVar21 != '\0') goto code_r0x00014173820d;
        goto code_r0x000141738e4e;
      }
      if (bVar19 == 0) goto code_r0x000141738e4e;
code_r0x00014173820d:
      lVar45 = *plVar24;
      *(undefined1 *)((longlong)unaff_RBX + 0x6b) = 1;
      puStack_e0 = (ulonglong *)0x141738219;
      cVar20 = pdb_140dd7f60(lVar45);
      in_R11 = unaff_RBX[0xe];
      if (cVar20 == '\0') goto code_r0x000141738e4e;
      lVar45 = *plVar24;
      uVar39 = *(ulonglong *)(lVar45 + 0x38);
      if (uVar39 == 0) {
        *(undefined1 *)((longlong)unaff_RBX + 0x6b) = 1;
        puStack_e0 = (ulonglong *)0x141739eaf;
        pdb_142dc8110(&UNK_14332aff8,0x22,&UNK_14332b020);
        goto code_r0x00014173a218;
      }
      uVar29 = *(undefined8 *)(lVar45 + 0x30);
      uVar25 = *(undefined8 *)(lVar45 + 0x40);
      uVar5 = *(undefined8 *)(lVar45 + 0x48);
      unaff_RBX[0x18] = uVar29;
      unaff_RBX[0x19] = uVar39;
      unaff_RBX[0x1a] = uVar25;
      unaff_RBX[0x1b] = uVar5;
      unaff_RBX[0x1c] = 0;
      unaff_RBX[0x1e] = &UNK_14332b038;
      unaff_RBX[0x1f] = 0x33;
      if (uVar39 == 1) {
        *(undefined1 *)((longlong)unaff_RBX + 0x6b) = 1;
        puStack_e0 = (ulonglong *)0x141739eef;
        pdb_142dc8110(&UNK_14332aff8,0x22,&UNK_14332b020);
        goto code_r0x00014173a218;
      }
      unaff_RBX[0x13] = uVar29;
      unaff_RBX[0x14] = uVar39;
      unaff_RBX[0x15] = uVar25;
      unaff_RBX[0x16] = uVar5;
      unaff_RBX[0x17] = 1;
      unaff_RBX[0x21] = *(longlong *)(in_R11 + 0x38) + 0x20;
      if (uVar39 < 3) {
        *(undefined1 *)((longlong)unaff_RBX + 0x6b) = 1;
        puStack_e0 = (ulonglong *)0x141739f2f;
        pdb_142dc8110(&UNK_14332aff8,0x22,&UNK_14332b020);
        goto code_r0x00014173a218;
      }
      unaff_RBX[0x2a] = uVar29;
      unaff_RBX[0x2b] = uVar39;
      unaff_RBX[0x2c] = uVar25;
      unaff_RBX[0x2d] = uVar5;
      unaff_RBX[0x2e] = 2;
      unaff_RBX[0x50] = unaff_RBX + 0x18;
      unaff_RBX[0x51] = unaff_RBX + 0x1e;
      unaff_RBX[0x52] = &UNK_14332b058;
      unaff_RBX[0x53] = unaff_RBX + 0x13;
      unaff_RBX[0x54] = unaff_RBX + 0x21;
      unaff_RBX[0x55] = &UNK_14332b078;
      unaff_RBX[0x56] = unaff_RBX + 0x2a;
      unaff_RBX[0x57] = in_R11 + 0x10;
      unaff_RBX[0x58] = &UNK_14332b098;
      unaff_RBX[0x38] = unaff_RBX + 0x50;
      unaff_RBX[0x39] = 3;
      unaff_RBX[0x3a] = lVar45 + 0x30;
      *(undefined1 *)((longlong)unaff_RBX + 0x6b) = 1;
      puStack_e0 = (ulonglong *)0x1417383a2;
      pdb_14173b620(unaff_RBX + 0x38);
code_r0x000141739077:
      in_R11 = unaff_RBX[0xe];
    }
    else {
code_r0x000141738e4e:
      plVar24 = plRam0000000143cad8b0;
      if ((*_DAT_143ca4ab0 == '\0') && (3 < *_DAT_143ca8e90)) {
        lVar45 = *plRam0000000143cad8b0;
        uVar29 = *(undefined8 *)(lVar45 + 0x20);
        uVar25 = *(undefined8 *)(lVar45 + 0x28);
        unaff_RBX[0xbc] = 4;
        unaff_RBX[0xbd] = uVar29;
        unaff_RBX[0xbe] = uVar25;
        *(undefined1 *)((longlong)unaff_RBX + 0x6b) = 1;
        puStack_e0 = (ulonglong *)0x141738e9f;
        uVar29 = pdb_140f33290();
        pcVar9 = *(code **)(unaff_R12 + 0x18);
        *(undefined1 *)((longlong)unaff_RBX + 0x6b) = 1;
        puStack_e0 = (ulonglong *)0x141738eba;
        cVar20 = (*pcVar9)(uVar29,unaff_RBX + 0xbc);
        in_R11 = unaff_RBX[0xe];
        if (cVar20 != '\0') {
          lVar26 = *plVar24;
          uVar39 = *(ulonglong *)(lVar26 + 0x38);
          if (uVar39 == 0) {
            *(undefined1 *)((longlong)unaff_RBX + 0x6b) = 1;
            puStack_e0 = (ulonglong *)0x141739fd5;
            pdb_142dc8110(&UNK_14332aff8,0x22,&UNK_14332b020);
code_r0x00014173a218:
                    /* WARNING: Does not return */
            pcVar9 = (code *)invalidInstructionException();
            (*pcVar9)();
          }
          uVar25 = *(undefined8 *)(lVar26 + 0x30);
          uVar5 = *(undefined8 *)(lVar26 + 0x40);
          uVar7 = *(undefined8 *)(lVar26 + 0x48);
          unaff_RBX[0x18] = uVar25;
          unaff_RBX[0x19] = uVar39;
          unaff_RBX[0x1a] = uVar5;
          unaff_RBX[0x1b] = uVar7;
          unaff_RBX[0x1c] = 0;
          unaff_RBX[0x21] = &UNK_14332b038;
          unaff_RBX[0x22] = 0x33;
          if (uVar39 == 1) {
            *(undefined1 *)((longlong)unaff_RBX + 0x6b) = 1;
            puStack_e0 = (ulonglong *)0x14173a015;
            pdb_142dc8110(&UNK_14332aff8,0x22,&UNK_14332b020);
            goto code_r0x00014173a218;
          }
          unaff_RBX[0x13] = uVar25;
          unaff_RBX[0x14] = uVar39;
          unaff_RBX[0x15] = uVar5;
          unaff_RBX[0x16] = uVar7;
          unaff_RBX[0x17] = 1;
          unaff_RBX[0x46] = *(longlong *)(in_R11 + 0x38) + 0x20;
          if (uVar39 < 3) {
            *(undefined1 *)((longlong)unaff_RBX + 0x6b) = 1;
            puStack_e0 = (ulonglong *)0x14173a055;
            pdb_142dc8110(&UNK_14332aff8,0x22,&UNK_14332b020);
            goto code_r0x00014173a218;
          }
          unaff_RBX[0x2a] = uVar25;
          unaff_RBX[0x2b] = uVar39;
          unaff_RBX[0x2c] = uVar5;
          unaff_RBX[0x2d] = uVar7;
          unaff_RBX[0x2e] = 2;
          unaff_RBX[0x50] = unaff_RBX + 0x18;
          unaff_RBX[0x51] = unaff_RBX + 0x21;
          unaff_RBX[0x52] = &UNK_14332b058;
          unaff_RBX[0x53] = unaff_RBX + 0x13;
          unaff_RBX[0x54] = unaff_RBX + 0x46;
          unaff_RBX[0x55] = &UNK_14332b078;
          unaff_RBX[0x56] = unaff_RBX + 0x2a;
          unaff_RBX[0x57] = in_R11 + 0x10;
          unaff_RBX[0x58] = &UNK_14332b098;
          unaff_RBX[0x1e] = unaff_RBX + 0x50;
          unaff_RBX[0x1f] = 3;
          unaff_RBX[0x20] = lVar26 + 0x30;
          unaff_RBX[0x3a] = unaff_RBX[0xbe];
          unaff_RBX[0x38] = unaff_RBX[0xbc];
          unaff_RBX[0x39] = unaff_RBX[0xbd];
          *(undefined1 *)((longlong)unaff_RBX + 0x6b) = 1;
          plStack_b8 = unaff_RBX + 0x1e;
          puStack_e0 = (ulonglong *)0x141739076;
          pdb_140dd7f80(lVar45,uVar29,unaff_R12,unaff_RBX + 0x38);
          goto code_r0x000141739077;
        }
      }
    }
    uVar29 = _UNK_14332b500;
    lVar45 = *(longlong *)(in_R11 + 0x40);
    unaff_RBX[0x50] = _DAT_14332b4f8;
    unaff_RBX[0x51] = uVar29;
    uVar29 = *(undefined8 *)(*(longlong *)(in_R11 + 0x38) + 0x20);
    uVar25 = *(undefined8 *)(*(longlong *)(in_R11 + 0x38) + 0x28);
    *(undefined1 *)((longlong)unaff_RBX + 0x6b) = 1;
    plStack_b8 = unaff_RBX + 0x24;
    puStack_e0 = (ulonglong *)0x1417390bb;
    pdb_141c2b710(lVar45 + 0x10,unaff_RBX + 0x50,uVar29,uVar25);
    lVar45 = unaff_RBX[0x24];
    lVar26 = unaff_RBX[0x25];
    unaff_RBX[0x2a] = lVar45;
    unaff_RBX[0x2b] = lVar26;
    lVar27 = *(longlong *)(lVar26 + 0x10);
    unaff_RBX[0x10] = lVar45;
    puStack_e0 = (ulonglong *)0x1417390fc;
    (**(code **)(lVar26 + 0x18))
              (unaff_RBX + 0x50,lVar45 + (lVar27 - 1U & 0xfffffffffffffff0) + 0x10);
    auVar50[0] = -(*(char *)(unaff_RBX + 0x50) == DAT_14332a670);
    auVar50[1] = -(*(char *)((longlong)unaff_RBX + 0x281) == UNK_14332a671);
    auVar50[2] = -(*(char *)((longlong)unaff_RBX + 0x282) == UNK_14332a672);
    auVar50[3] = -(*(char *)((longlong)unaff_RBX + 0x283) == UNK_14332a673);
    auVar50[4] = -(*(char *)((longlong)unaff_RBX + 0x284) == UNK_14332a674);
    auVar50[5] = -(*(char *)((longlong)unaff_RBX + 0x285) == UNK_14332a675);
    auVar50[6] = -(*(char *)((longlong)unaff_RBX + 0x286) == UNK_14332a676);
    auVar50[7] = -(*(char *)((longlong)unaff_RBX + 0x287) == UNK_14332a677);
    auVar50[8] = -(*(char *)(unaff_RBX + 0x51) == UNK_14332a678);
    auVar50[9] = -(*(char *)((longlong)unaff_RBX + 0x289) == UNK_14332a679);
    auVar50[10] = -(*(char *)((longlong)unaff_RBX + 0x28a) == UNK_14332a67a);
    auVar50[0xb] = -(*(char *)((longlong)unaff_RBX + 0x28b) == UNK_14332a67b);
    auVar50[0xc] = -(*(char *)((longlong)unaff_RBX + 0x28c) == UNK_14332a67c);
    auVar50[0xd] = -(*(char *)((longlong)unaff_RBX + 0x28d) == UNK_14332a67d);
    auVar50[0xe] = -(*(char *)((longlong)unaff_RBX + 0x28e) == UNK_14332a67e);
    auVar50[0xf] = -(*(char *)((longlong)unaff_RBX + 0x28f) == UNK_14332a67f);
    if ((ushort)((ushort)(SUB161(auVar50 >> 7,0) & 1) | (ushort)(SUB161(auVar50 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar50 >> 0x17,0) & 1) << 2 |
                 (ushort)(SUB161(auVar50 >> 0x1f,0) & 1) << 3 |
                 (ushort)(SUB161(auVar50 >> 0x27,0) & 1) << 4 |
                 (ushort)(SUB161(auVar50 >> 0x2f,0) & 1) << 5 |
                 (ushort)(SUB161(auVar50 >> 0x37,0) & 1) << 6 |
                 (ushort)(SUB161(auVar50 >> 0x3f,0) & 1) << 7 |
                 (ushort)(SUB161(auVar50 >> 0x47,0) & 1) << 8 |
                 (ushort)(SUB161(auVar50 >> 0x4f,0) & 1) << 9 |
                 (ushort)(SUB161(auVar50 >> 0x57,0) & 1) << 10 |
                 (ushort)(SUB161(auVar50 >> 0x5f,0) & 1) << 0xb |
                 (ushort)(SUB161(auVar50 >> 0x67,0) & 1) << 0xc |
                 (ushort)(SUB161(auVar50 >> 0x6f,0) & 1) << 0xd |
                 (ushort)(SUB161(auVar50 >> 0x77,0) & 1) << 0xe | (ushort)(auVar50[0xf] >> 7) << 0xf
                ) != 0xffff) {
      unaff_RBX[0x50] = unaff_RBX[0x10];
      unaff_RBX[0x51] = lVar26;
      plStack_b8 = (longlong *)&UNK_14332b0c0;
                    /* WARNING: Subroutine does not return */
      puStack_e0 = (ulonglong *)0x1417391d2;
      pdb_142dc8170(&UNK_14332b0b8,8,unaff_RBX + 0x50,&UNK_14332b870);
    }
    unaff_RBX[0x4d] = unaff_RBX[0x10];
    unaff_RBX[0x4c] = 0;
    plVar24 = *(longlong **)(unaff_RBX[0xe] + 0x38);
    LOCK();
    *plVar24 = *plVar24 + -1;
    lVar45 = *plVar24;
    UNLOCK();
joined_r0x00014173913d:
    if (lVar45 == 0) {
      puStack_e0 = (ulonglong *)0x14173914c;
      pdb_140dd76c0(unaff_RBX[0xe] + 0x38);
    }
    plVar24 = *(longlong **)(unaff_RBX[0xe] + 0x40);
    LOCK();
    *plVar24 = *plVar24 + -1;
    UNLOCK();
    if (*plVar24 == 0) {
      puStack_e0 = (ulonglong *)0x141739168;
      pdb_140dd78e0(unaff_RBX[0xe] + 0x40);
    }
    plVar24 = *(longlong **)unaff_RBX[0xe];
    if (plVar24 != (longlong *)0x0) {
      LOCK();
      *plVar24 = *plVar24 + -1;
      UNLOCK();
      if (*plVar24 == 0) {
        puStack_e0 = (ulonglong *)0x14173918c;
        pdb_140c7a240(unaff_RBX[0xe]);
      }
    }
    goto code_r0x000141739e0c;
  case 0x28:
    *(char *)param_1 = cVar20;
    *(char *)puVar22 = (char)*puVar22;
    (&UNK_14332bc95)[iVar2] = (&UNK_14332bc95)[iVar2] + '\b';
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x29:
    unaff_RBX = (undefined8 *)((ulonglong)puVar22 & 0xffffffff);
    UNK_14332bd48 = UNK_14332bd48 + '\x01';
    goto code_r0x00014173f417;
  case 0x2a:
    unaff_retaddr = 1;
    puStack_e0 = (ulonglong *)0x14173f412;
    pdb_14007ee60();
    puVar34 = (undefined *)0x40;
    puStackX_18 = param_1;
code_r0x00014173f417:
    puStack_e0 = (ulonglong *)0x14173f421;
    puVar22 = (ulonglong *)pub_1406abab0((ulonglong)puVar34,0x10);
    if (puVar22 != (ulonglong *)0x0) {
      puVar22[6] = param_5;
      puVar22[7] = param_6;
      puVar22[4] = (ulonglong)puStackX_18;
      puVar22[5] = (ulonglong)puStackX_20;
      puVar22[2] = uStackX_8;
      puVar22[3] = uStackX_10;
      *puVar22 = unaff_RBP;
      puVar22[1] = CONCAT44(unaff_retaddr_00,unaff_retaddr);
      *param_2 = 0;
      param_2[1] = (ulonglong)puVar22;
      param_2[2] = (ulonglong)&UNK_14332ba98;
      *(undefined1 *)(unaff_RBX + 0x16) = 1;
      return param_2;
    }
                    /* WARNING: Subroutine does not return */
    puStack_e0 = (ulonglong *)0x14173f484;
    pdb_142dc7e11(0x10,0x40);
  case 0x2b:
    return puVar22;
  case 0x2c:
    *(undefined1 *)(param_2[0x25] + 0xa0) = 2;
    param_2[0x24] = param_2[0x23];
    return (ulonglong *)param_2[0x23];
  case 0x2d:
    plStack_68 = (longlong *)CONCAT71(plStack_68._1_7_,(char)plStack_68 - cVar20);
    puStack_e0 = (ulonglong *)0x14173f68e;
    uStack_58 = (byte *)in_XMM0_Qa;
    uStack_50 = (ulonglong *)in_XMM0_Qb;
    pdb_14007ee60();
    puStack_e0 = (ulonglong *)0x14173f69d;
    pbVar30 = pub_1406abab0(0x30,8);
    if (pbVar30 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
      puStack_e0 = (ulonglong *)0x14173f707;
      pdb_142dc7e11(8,0x30);
    }
    pbVar30[0] = 1;
    pbVar30[1] = 0;
    pbVar30[2] = 0;
    pbVar30[3] = 0;
    pbVar30[4] = 0;
    pbVar30[5] = 0;
    pbVar30[6] = 0;
    pbVar30[7] = 0;
    pbVar30[8] = 1;
    pbVar30[9] = 0;
    pbVar30[10] = 0;
    pbVar30[0xb] = 0;
    pbVar30[0xc] = 0;
    pbVar30[0xd] = 0;
    pbVar30[0xe] = 0;
    pbVar30[0xf] = 0;
    *(undefined8 **)(pbVar30 + 0x10) = unaff_RBX;
    *(int **)(pbVar30 + 0x18) = unaff_R14;
    *(byte **)(pbVar30 + 0x20) = uStack_58;
    *(ulonglong **)(pbVar30 + 0x28) = uStack_50;
    *param_2 = 0;
    param_2[1] = (ulonglong)pbVar30;
    param_2[2] = (ulonglong)&UNK_14332ba78;
    cVar20 = '\x01';
    goto code_r0x00014173f6d9;
  case 0x2e:
    *param_2 = 2;
    cVar20 = '\x03';
code_r0x00014173f6d9:
    *(char *)(param_1 + 0x11) = cVar20;
    return param_2;
  case 0x2f:
    *(char *)puVar22 = (char)*puVar22;
    *(char *)puVar22 = (char)*puVar22 + cVar20;
    uStack_128 = 0x14173f58d;
    puStack_e0 = (ulonglong *)ppuVar43;
    puStack_c8 = param_2;
    puVar22 = (ulonglong *)pdb_1409737b0(param_2 + 0x1a);
    return puVar22;
  case 0x30:
    return puVar22;
  case 0x31:
    goto code_r0x00014173f923;
  case 0x32:
    puVar22 = param_1;
    goto code_r0x00014173f923;
  case 0x33:
    if (param_2[0x18] != 0) {
      uStack_120 = 0x14173f82e;
      puStack_e0 = param_2;
      pub_1406abac0((byte *)param_2[0x15],param_2[0x18],1);
      puVar22 = extraout_RAX;
    }
    return puVar22;
  case 0x34:
    uStack_130 = 0x14173fa5d;
    puStack_e0 = auStack_d8;
    puVar22 = (ulonglong *)pdb_14173d8c0(param_2[0x15]);
    return puVar22;
  case 0x35:
    puStack_e0 = (ulonglong *)0x14173fc1b;
    pub_142e32760((int)ppuVar43 + 0x160,&plStack_b8,0xc0);
    in_stack_000000f0 = 1;
    in_stack_000000f8 = 1;
    puStack_e0 = (ulonglong *)0x14173fc3d;
    _cStack0000000000000100 = param_1;
    pdb_14007ee60();
    puStack_e0 = (ulonglong *)0x14173fc4c;
    pbVar30 = pub_1406abab0(0xd8,8);
    if (pbVar30 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
      puStack_e0 = (ulonglong *)0x14173fca5;
      pdb_142dc7e11(8,0xd8);
    }
    puStack_e0 = (ulonglong *)0x14173fc69;
    pub_142e32760(pbVar30,&stack0x000000f0,0xd8);
    *param_2 = 0;
    param_2[1] = (ulonglong)pbVar30;
    param_2[2] = (ulonglong)&UNK_14332bab8;
    uVar18 = 1;
    goto code_r0x00014173fc81;
  case 0x36:
    *param_2 = 2;
    uVar18 = 3;
code_r0x00014173fc81:
    *(undefined1 *)(unaff_RBX + 0x3b) = uVar18;
    return param_2;
  case 0x37:
    return puVar22;
  case 0x38:
    uStack_118 = 0x14173fd50;
    puStack_e0 = param_1;
    puVar22 = (ulonglong *)pdb_14173d6f0(param_2[0x59]);
    return puVar22;
  case 0x39:
    *(char *)puVar22 = (char)*puVar22 + cVar20;
    puVar44 = (ulonglong *)(ulonglong)((int)param_2 + uVar21);
    *(char *)puVar22 = (char)*puVar22 + cVar20;
    iRam000000064ffdb121 = iRam000000064ffdb121 + 0x4332bd08;
    puStack_e0 = (ulonglong *)0x1417403b0;
    pdb_142dc6be0();
    puVar22 = _DAT_143ca8f38;
    if ((*_DAT_143ca8f38 & 0x7fffffffffffffff) == 0) {
      uVar21 = 0;
      cVar20 = *(char *)((longlong)unaff_RBX + 0x39);
    }
    else {
      _cStack0000000000000100 = CONCAT16(1,_cStack0000000000000100);
      _cStack0000000000000100 = (ulonglong *)CONCAT17(1,_cStack0000000000000100);
      puStack_e0 = (ulonglong *)0x1417403c9;
      uVar21 = pdb_142dc79e0();
      uVar21 = uVar21 ^ 1;
      cVar20 = *(char *)((longlong)unaff_RBX + 0x39);
    }
    if (cVar20 != '\0') {
      plStack_b8 = (longlong *)&UNK_14332bae8;
                    /* WARNING: Subroutine does not return */
      puStack_e0 = (ulonglong *)0x141740410;
      pdb_142dc8170(&UNK_14332b8d0,0x2b,&stack0x00000068,&UNK_14332b940);
    }
    uVar39 = (ulonglong)_cStack0000000000000100 >> 0x20;
    _cStack0000000000000100 = (ulonglong *)CONCAT44((int)uVar39,uVar21);
    puStack_e0 = (ulonglong *)0x141740071;
    pdb_1417b89d0(unaff_RBX + 8,&stack0x00000068);
    if ((cStack0000000000000100 == '\0') && ((*puVar22 & 0x7fffffffffffffff) != 0)) {
      _cStack0000000000000100 = CONCAT16(1,(int6)_cStack0000000000000100);
      _cStack0000000000000100 = (ulonglong *)(ulonglong)_cStack0000000000000100;
      puStack_e0 = (ulonglong *)0x141740438;
      cVar20 = pdb_142dc79e0();
      if (cVar20 == '\0') {
        *(undefined1 *)((longlong)unaff_RBX + 0x39) = 1;
      }
    }
    LOCK();
    cVar20 = *(char *)(unaff_RBX + 7);
    *(char *)(unaff_RBX + 7) = '\0';
    UNLOCK();
    if (cVar20 == '\x02') {
      _cStack0000000000000100 = CONCAT16(1,(int6)_cStack0000000000000100);
      _cStack0000000000000100 = (ulonglong *)(ulonglong)_cStack0000000000000100;
      puStack_e0 = (ulonglong *)0x1417400af;
      pdb_142dc6ca0();
    }
    _cStack0000000000000100 = (ulonglong *)((ulonglong)_cStack0000000000000100 & 0xffffffff00000000)
    ;
    uStack_58 = in_stack_000000e0;
    param_9 = 0;
    param_10 = 1;
    param_11 = 0;
    param_13 = &param_9;
    puStack_e0 = (ulonglong *)0x141740122;
    uStack_50 = param_1;
    cVar20 = pdb_140f58310(ppuVar43,&stack0x00000068);
    uVar29 = param_11;
    uVar39 = param_9;
    if (cVar20 != '\0') {
      plStack_b8 = (longlong *)&UNK_14332b5e0;
      puVar34 = &UNK_14332b538;
      param_4 = &UNK_14332b890;
      param_3 = (longlong)&stack0x000000f8 + 7;
      param_2 = (ulonglong *)0x37;
      goto code_r0x00014174038f;
    }
    if (puStackX_18 == (ulonglong *)0x0) {
      pbVar30 = (byte *)0x0;
      uVar25 = param_10;
    }
    else {
      param_13 = puStackX_18;
      param_12 = param_10;
      if (puStackX_20 == (ulonglong *)0x0) {
        pbVar30 = (byte *)0x1;
      }
      else {
        puStack_e0 = (ulonglong *)0x141740173;
        pdb_14007ee60();
        puStack_e0 = (ulonglong *)0x141740180;
        pbVar30 = pub_1406abab0((ulonglong)puStackX_20,1);
        if (pbVar30 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
          puStack_e0 = (ulonglong *)0x141740195;
          pdb_142dc7e11(1,puStackX_20);
        }
      }
      puStack_e0 = (ulonglong *)0x1417401bf;
      pub_142e32760(pbVar30,puStackX_18 + 2,puStackX_20);
      LOCK();
      *param_13 = *param_13 - 1;
      UNLOCK();
      if (*param_13 == 0) {
        puStack_e0 = (ulonglong *)0x1417401d8;
        pdb_1406ed6a0(&stack0x00000068);
      }
      param_1 = puStackX_20;
      uVar25 = param_12;
    }
    if ((cStack0000000000000100 != '\0') && (unaff_RBP != 0)) {
      puStack_e0 = (ulonglong *)0x141740201;
      pub_1406abac0((byte *)CONCAT44(unaff_retaddr_00,unaff_retaddr),unaff_RBP,1);
    }
    puStack_e0 = (ulonglong *)0x14174020e;
    pdb_14098a860(&param_5);
    if (in_stack_000000d8 != 0) {
      puStack_e0 = (ulonglong *)0x141740234;
      pub_1406abac0(in_stack_000000e0,in_stack_000000d8,1);
    }
    lVar45 = in_stack_000000f0;
    *(undefined1 *)(in_stack_000000f0 + 0x80) = 1;
    if (SBORROW8(0,uVar39)) {
      puStack_e0 = (ulonglong *)0x141740271;
      param_13 = (ulonglong *)uVar25;
      pdb_14007ee60();
      puStack_e0 = (ulonglong *)0x141740280;
      pbVar31 = pub_1406abab0(8,8);
      if (pbVar31 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
        puStack_e0 = (ulonglong *)0x141740363;
        pdb_142dc7e11(8,8);
      }
      *(undefined8 *)pbVar31 = uVar25;
      uVar39 = 1;
      puVar34 = &UNK_1430712c0;
    }
    else {
      if (uVar39 == 0x8000000000000001) {
        *puVar44 = 2;
        uVar18 = 3;
        goto code_r0x0001417402a5;
      }
      param_13 = (ulonglong *)0x1;
      puStack_e0 = (ulonglong *)0x141740301;
      pdb_14007ee60();
      puStack_e0 = (ulonglong *)0x141740310;
      pbVar31 = pub_1406abab0(0x38,8);
      if (pbVar31 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
        puStack_e0 = (ulonglong *)0x141740422;
        pdb_142dc7e11(8,0x38);
      }
      *(ulonglong **)(pbVar31 + 0x30) = param_1;
      *(undefined8 *)(pbVar31 + 0x20) = uVar29;
      *(byte **)(pbVar31 + 0x28) = pbVar30;
      *(ulonglong *)(pbVar31 + 0x10) = uVar39;
      *(undefined8 *)(pbVar31 + 0x18) = uVar25;
      *(ulonglong **)pbVar31 = param_13;
      pbVar31[8] = 1;
      pbVar31[9] = 0;
      pbVar31[10] = 0;
      pbVar31[0xb] = 0;
      pbVar31[0xc] = 0;
      pbVar31[0xd] = 0;
      pbVar31[0xe] = 0;
      pbVar31[0xf] = 0;
      puVar34 = &UNK_14332ba38;
      uVar39 = 0;
    }
    *puVar44 = uVar39;
    puVar44[1] = (ulonglong)pbVar31;
    puVar44[2] = (ulonglong)puVar34;
    uVar18 = 1;
code_r0x0001417402a5:
    *(undefined1 *)(lVar45 + 0x88) = uVar18;
    return puVar44;
  case 0x3a:
    *(char *)puVar22 = (char)*puVar22 + cVar20;
code_r0x00014174038f:
                    /* WARNING: Subroutine does not return */
    puStack_e0 = (ulonglong *)0x141740394;
    pdb_142dc8170(puVar34,param_2,param_3,param_4);
  case 0x3b:
    pcVar9 = (code *)swi(3);
    puVar22 = (ulonglong *)(*pcVar9)();
    return puVar22;
  }
  puStack_e0 = (ulonglong *)0x14173679a;
  pdb_14097de90(puStack_38);
  cVar20 = '\x01';
  puVar22 = (ulonglong *)0x0;
code_r0x00014173679f:
  *(char *)(puStack_38 + 0x14) = cVar20;
  return puVar22;
code_r0x000141732216:
  pbVar30 = (byte *)*unaff_R13;
  goto code_r0x00014173221a;
code_r0x00014173699e:
  param_2[2] = (ulonglong)unaff_RBX;
  param_2[3] = (ulonglong)unaff_XMM6_Qa;
  param_2[4] = (ulonglong)unaff_XMM6_Qb;
  *param_2 = 0;
  *(undefined1 *)(CONCAT44(uStack_7c,uStack_80) + 0x30) = 1;
  return param_2;
code_r0x00014173f923:
  if (SBORROW8(0,(longlong)puVar22)) {
    *param_2 = 2;
    uVar18 = 3;
  }
  else {
    puStack_40 = (ulonglong *)plStack_b8;
    puStack_38 = puStack_b0;
    uStack_58 = (byte *)0x1;
    uStack_50 = (ulonglong *)0x1;
    puStack_e0 = (ulonglong *)0x14173f954;
    puStack_48 = param_1;
    pdb_14007ee60();
    puStack_e0 = (ulonglong *)0x14173f963;
    pbVar30 = pub_1406abab0(0x28,8);
    if (pbVar30 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
      puStack_e0 = (ulonglong *)0x14173f9b8;
      pdb_142dc7e11(8,0x28);
    }
    *(ulonglong **)(pbVar30 + 0x20) = puStack_38;
    *(ulonglong **)(pbVar30 + 0x10) = puStack_48;
    *(ulonglong **)(pbVar30 + 0x18) = puStack_40;
    *(byte **)pbVar30 = uStack_58;
    *(ulonglong **)(pbVar30 + 8) = uStack_50;
    *param_2 = 0;
    param_2[1] = (ulonglong)pbVar30;
    param_2[2] = (ulonglong)&UNK_14332ba58;
    uVar18 = 1;
  }
  *(undefined1 *)(unaff_RBX + 0xf) = uVar18;
  return param_2;
code_r0x000141734c38:
code_r0x000141734c44:
  return puVar22;
}

