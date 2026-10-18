// VA 0x141736640, PDB extent 583 bytes
// turbosloth::asset::impl$44::build::async_block$2<asset::texture::blob::TextureAssetBlob,turbosloth::asset::BuildContext>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/turbosloth/src/asset.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00014173fc3e) overlaps instruction at (ram,0x00014173fc3d)
    */
/* WARNING: Removing unreachable block (ram,0x00014173f5eb) */
/* WARNING: Removing unreachable block (ram,0x00014173f8bf) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   turbosloth::asset::impl$44::build::async_block$2<asset::texture::blob::TextureAssetBlob,turbosloth::asset::BuildContext>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/turbosloth/src/asset.rs
   Extent: 583 */

ulonglong *******
pdb_141736640(ulonglong *******param_1,ulonglong *******param_2,ulonglong *******param_3,
             ulonglong *******param_4)

{
  uint *puVar1;
  byte *pbVar2;
  int *piVar3;
  ulonglong ****ppppuVar4;
  ulonglong ****ppppuVar5;
  ulonglong ****ppppuVar6;
  longlong lVar7;
  ulonglong ***pppuVar8;
  ulonglong *****pppppuVar9;
  ulonglong ******ppppppuVar10;
  ulonglong ******ppppppuVar11;
  code *pcVar12;
  ulonglong ******ppppppuVar13;
  ulonglong ******ppppppuVar14;
  longlong *plVar15;
  ulonglong ****ppppuVar16;
  ulonglong ****ppppuVar17;
  longlong *plVar18;
  char cVar19;
  byte bVar20;
  undefined1 uVar21;
  byte bVar22;
  char cVar23;
  uint uVar24;
  uint uVar25;
  ulonglong uVar26;
  ulonglong *******pppppppuVar27;
  undefined7 uVar40;
  undefined1 (*pauVar28) [16];
  ulonglong *puVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  ulonglong *****pppppuVar32;
  ulonglong *******extraout_RAX;
  longlong lVar33;
  char *pcVar34;
  undefined *puVar35;
  ulonglong *******pppppppuVar36;
  ulonglong ******ppppppuVar37;
  ulonglong ******ppppppuVar38;
  undefined1 *puVar39;
  ulonglong *******pppppppuVar41;
  ulonglong *******pppppppuVar42;
  ulonglong ******ppppppuVar43;
  int iVar44;
  undefined1 (*arg1) [16];
  undefined1 (*pauVar45) [16];
  ulonglong *******pppppppuVar46;
  ulonglong *****pppppuVar47;
  byte bVar48;
  char cVar49;
  ulonglong *******unaff_RBX;
  ulonglong *******pppppppuVar50;
  ulonglong *******pppppppuVar51;
  ulonglong *******pppppppuVar52;
  ulonglong *******pppppppuVar53;
  ulonglong *******pppppppuVar54;
  ulonglong *******pppppppuVar55;
  ulonglong *******pppppppuVar56;
  ulonglong *******pppppppuVar57;
  ulonglong *******pppppppuVar58;
  undefined8 *puVar59;
  ulonglong *******pppppppuVar60;
  ulonglong *******pppppppuVar61;
  ulonglong *******pppppppuVar62;
  undefined8 *puVar63;
  ulonglong *******pppppppuVar64;
  ulonglong *******pppppppuVar65;
  ulonglong ******ppppppuVar66;
  ulonglong *******pppppppuVar67;
  ulonglong *******in_R11;
  ulonglong ******unaff_R12;
  ulonglong *******unaff_R13;
  ulonglong *******unaff_R14;
  ulonglong *******unaff_R15;
  bool bVar68;
  bool bVar69;
  ulonglong ******in_MM0;
  ulonglong *******in_XMM0_Qa;
  ulonglong *******in_XMM0_Qb;
  ulonglong *******extraout_XMM0_Qb;
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  uint uVar73;
  ulonglong *******in_XMM1_Qa;
  uint uVar74;
  uint in_XMM1_Dc;
  uint in_XMM1_Dd;
  uint uVar75;
  undefined8 in_XMM2_Qa;
  uint uVar76;
  uint in_XMM2_Dc;
  uint in_XMM2_Dd;
  undefined8 in_XMM3_Qa;
  uint uVar77;
  uint in_XMM3_Dc;
  uint in_XMM3_Dd;
  uint in_XMM4_Da;
  uint in_XMM4_Db;
  uint in_XMM4_Dc;
  uint in_XMM4_Dd;
  ulonglong ******unaff_XMM6_Qa;
  ulonglong ******unaff_XMM6_Qb;
  uint unaff_XMM7_Da;
  uint unaff_XMM7_Db;
  uint unaff_XMM7_Dc;
  uint unaff_XMM7_Dd;
  undefined4 in_stack_00000100;
  undefined8 in_stack_000001f0;
  ulonglong *******in_stack_00000200;
  undefined1 auStack_3e0 [128];
  ulonglong ******appppppuStack_360 [62];
  undefined1 auStack_170 [56];
  undefined1 auStack_138 [48];
  undefined8 uStack_108;
  ulonglong ******ppppppuStack_100;
  ulonglong *******pppppppuStack_f0;
  ulonglong *******pppppppuStack_e0;
  ulonglong *******apppppppuStack_d8 [4];
  ulonglong *******pppppppuStack_b8;
  ulonglong *******pppppppuStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  ulonglong ******ppppppuStack_98;
  int iStack_90;
  undefined4 uStack_8c;
  undefined8 uStack_88;
  undefined8 uStack_80;
  uint uStack_78;
  undefined4 uStack_74;
  undefined8 uStack_70;
  longlong lStack_68;
  ulonglong *******pppppppuStack_60;
  undefined8 uStack_58;
  uint uStack_50;
  uint uStack_4c;
  ulonglong ******ppppppuStack_48;
  ulonglong *******pppppppuStack_40;
  ulonglong *******pppppppuStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar77 = (uint)((ulonglong)in_XMM3_Qa >> 0x20);
  uVar25 = (uint)in_XMM3_Qa;
  uVar76 = (uint)((ulonglong)in_XMM2_Qa >> 0x20);
  uVar75 = (uint)in_XMM2_Qa;
  uVar74 = (uint)((ulonglong)in_XMM1_Qa >> 0x20);
  uVar73 = (uint)in_XMM1_Qa;
  pppppppuVar58 = (ulonglong *******)apppppppuStack_d8;
  pppppppuVar61 = (ulonglong *******)apppppppuStack_d8;
  pppppppuVar57 = (ulonglong *******)apppppppuStack_d8;
  pppppppuVar50 = (ulonglong *******)apppppppuStack_d8;
  pppppppuVar53 = (ulonglong *******)apppppppuStack_d8;
  pppppppuVar56 = (ulonglong *******)apppppppuStack_d8;
  pppppppuVar64 = (ulonglong *******)apppppppuStack_d8;
  pppppppuVar62 = (ulonglong *******)apppppppuStack_d8;
  pppppppuVar51 = (ulonglong *******)apppppppuStack_d8;
  pppppppuVar52 = (ulonglong *******)apppppppuStack_d8;
  pppppppuVar65 = (ulonglong *******)apppppppuStack_d8;
  pppppppuVar55 = (ulonglong *******)apppppppuStack_d8;
  pppppppuVar46 = (ulonglong *******)&uStack_58;
  uStack_28 = 0xfffffffffffffffe;
  pppppppuVar41 = (ulonglong *******)&UNK_14332bd40;
  uVar26 = (ulonglong)*(int *)(&UNK_14332bd40 + (ulonglong)*(byte *)(param_1 + 0x14) * 4);
  pppppppuVar27 = (ulonglong *******)(&UNK_14332bd40 + uVar26);
  bVar68 = pppppppuVar27 == (ulonglong *******)0x0;
  pppppppuStack_38 = param_1;
  bVar22 = (byte)pppppppuVar27;
  uVar40 = (undefined7)((ulonglong)pppppppuVar27 >> 8);
  cVar23 = (char)((ulonglong)param_2 >> 8);
  iVar44 = (int)param_2;
  bVar48 = (byte)unaff_RBX;
  cVar49 = (char)((ulonglong)unaff_RBX >> 8);
  pppppppuVar36 = pppppppuVar27;
  pppppppuVar42 = pppppppuVar41;
  pppppppuVar54 = (ulonglong *******)apppppppuStack_d8;
  pppppppuVar60 = (ulonglong *******)apppppppuStack_d8;
  pppppppuVar67 = param_2;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(byte *)(param_1 + 0x14)) {
  case 0:
    param_1[0x15] = (ulonglong ******)param_1;
    pppppppuStack_e0 = (ulonglong *******)0x141736699;
    pub_142e32760(param_1 + 0x16,param_1 + 1,0x98);
    break;
  case 1:
                    /* WARNING: Subroutine does not return */
    pppppppuStack_e0 = (ulonglong *******)0x1417367cd;
    pdb_142dc8570(&UNK_14332b2b0);
  case 2:
                    /* WARNING: Subroutine does not return */
    pppppppuStack_e0 = (ulonglong *******)0x1417367c1;
    pdb_142dc8590(&UNK_14332b2b0);
  case 4:
    goto code_r0x00014173670f;
  case 5:
    pppppppuVar41 = (ulonglong *******)&UNK_14332bd54;
    uVar26 = (ulonglong)*(int *)(&UNK_14332bd54 + (ulonglong)*(byte *)(param_2 + 6) * 4);
    goto code_r0x0001417368c9;
  case 6:
                    /* WARNING: Subroutine does not return */
    pppppppuStack_e0 = (ulonglong *******)0x1417369db;
    pdb_142dc7e11();
  case 7:
    return pppppppuVar27;
  case 8:
    uVar26 = (ulonglong)*(uint *)(&UNK_14332bd40 + (longlong)pppppppuVar27 * 4);
code_r0x0001417368c9:
                    /* WARNING: Could not recover jumptable at 0x0001417368cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pppppppuVar41 = (ulonglong *******)(*(code *)(uVar26 + (longlong)pppppppuVar41))();
    return pppppppuVar41;
  case 9:
    if (bVar68) {
      uStack_70 = 0xfffffffffffffffe;
      pppppppuVar67 = (ulonglong *******)&UNK_14332bd40;
      param_4 = param_3;
      goto code_r0x000141736b36;
    }
    *(byte *)pppppppuVar27 = *(byte *)pppppppuVar27 + bVar22;
    (&UNK_14332bccd)[uVar26] = (&UNK_14332bccd)[uVar26] + '@';
    pppppppuVar67 = (ulonglong *******)((longlong)param_2 + 1);
    pcVar34 = (char *)(CONCAT71(uVar40,*(byte *)param_2) & 0xffffffffffffff80);
    *pcVar34 = *pcVar34 + (char)pcVar34;
    param_2 = param_2 + 2;
    bVar22 = *(byte *)param_2;
    cVar23 = (char)((ulonglong)pcVar34 >> 8);
    *(byte *)param_2 = *(byte *)param_2 + cVar23;
    if (*(byte *)param_2 == 0 || SCARRY1(bVar22,cVar23) != (char)*(byte *)param_2 < '\0') {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    bVar68 = false;
    goto code_r0x000141736ba2;
  case 10:
    goto code_r0x000141736c46;
  case 0xb:
    if (bVar68) {
      return (ulonglong *******)0x0;
    }
    uStack_80 = (ulonglong *******)((ulonglong)uStack_80 & 0xffffffff);
    pppppppuVar36 = param_2;
    goto code_r0x000141736c2f;
  case 0xc:
code_r0x000141736b36:
    puVar1 = (uint *)(&UNK_14332bcc9 + uVar26);
    *puVar1 = *puVar1 >> 0xe | *puVar1 << 0x12;
    pppppppuVar41 = (ulonglong *******)&UNK_14332bd64;
    lVar33 = (longlong)*(int *)(&UNK_14332bd64 + (ulonglong)*(byte *)(param_2 + 6) * 4);
    pppppppuVar36 = (ulonglong *******)(&UNK_14332bd64 + lVar33);
    bVar22 = (byte)pppppppuVar36;
    pppppppuVar57 = (ulonglong *******)apppppppuStack_d8;
    pppppppuVar27 = (ulonglong *******)apppppppuStack_d8;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(byte *)(param_2 + 6)) {
    case 0:
      param_2[4] = (ulonglong ******)param_2;
      param_2[5] = (ulonglong ******)0x0;
    case 3:
      uStack_88 = param_2 + 4;
      pppppppuStack_e0 = (ulonglong *******)0x141736b73;
      uStack_80 = param_2;
      pdb_140b34c60(&pppppppuStack_b0,uStack_88,(longlong)&uStack_74 + 3);
      if (pppppppuStack_b0 == (ulonglong *******)0x2) {
        pppppppuVar27 = (ulonglong *******)0x3;
        pppppppuVar41 = (ulonglong *******)0x1;
        pppppppuVar36 = pppppppuVar67;
      }
      else {
        unaff_XMM6_Qb = (ulonglong ******)CONCAT44(uStack_8c,iStack_90);
        pppppppuVar41 = (ulonglong *******)uStack_80[5];
        bVar68 = pppppppuVar41 == (ulonglong *******)0x0;
        unaff_RBX = uStack_a0;
        param_1 = uStack_a8;
        unaff_R14 = pppppppuStack_b0;
        unaff_R15 = uStack_80;
        unaff_XMM6_Qa = ppppppuStack_98;
code_r0x000141736ba2:
        if (!bVar68) {
          pppppppuStack_e0 = (ulonglong *******)0x141736bad;
          uStack_88 = pppppppuVar41;
          pdb_140974580();
          pppppppuStack_e0 = (ulonglong *******)0x141736bc2;
          pub_1406abac0((byte *)uStack_88,0x38,8);
          unaff_R15 = uStack_80;
        }
        if ((int)unaff_R14 == 1) {
          param_1 = (ulonglong *******)unaff_R15[2];
          unaff_RBX = (ulonglong *******)unaff_R15[3];
          pppppppuStack_e0 = (ulonglong *******)0x141736bd9;
          pdb_14007ee60();
          pppppppuStack_e0 = (ulonglong *******)0x141736be8;
          unaff_XMM6_Qa = (ulonglong ******)pub_1406abab0(0x10,8);
          if (unaff_XMM6_Qa == (ulonglong ******)0x0) {
                    /* WARNING: Subroutine does not return */
            pppppppuStack_e0 = (ulonglong *******)0x141736c5b;
            pdb_142dc7e11(8,0x10);
          }
          *unaff_XMM6_Qa = (ulonglong *****)0x1;
          unaff_XMM6_Qa[1] = (ulonglong *****)0x1;
          unaff_XMM6_Qb = (ulonglong ******)&UNK_14332b300;
        }
        pppppppuStack_e0 = (ulonglong *******)0x141736c19;
        pdb_14097dce0();
        pppppppuVar67[1] = (ulonglong ******)param_1;
        pppppppuVar67[2] = (ulonglong ******)unaff_RBX;
        pppppppuVar67[3] = unaff_XMM6_Qa;
        pppppppuVar67[4] = unaff_XMM6_Qb;
        pppppppuVar27 = (ulonglong *******)0x1;
        pppppppuVar41 = (ulonglong *******)0x0;
        pppppppuVar36 = pppppppuVar67;
      }
code_r0x000141736c2f:
      *pppppppuVar36 = (ulonglong ******)pppppppuVar41;
      *(byte *)(uStack_80 + 6) = (byte)pppppppuVar27;
code_r0x000141736c46:
      return pppppppuVar36;
    case 1:
                    /* WARNING: Subroutine does not return */
      pppppppuStack_e0 = (ulonglong *******)0x141736c76;
      pdb_142dc8570(&UNK_14332b2c8);
    case 2:
                    /* WARNING: Subroutine does not return */
      pppppppuStack_e0 = (ulonglong *******)0x141736c6a;
      pdb_142dc8590(&UNK_14332b2c8);
    case 4:
      goto code_r0x000141736dbe;
    case 5:
      *(int *)(lVar33 + 0xd07ac873) = *(int *)(lVar33 + 0xd07ac873) + iVar44;
      goto code_r0x000141736ede;
    case 6:
      *(byte *)pppppppuVar36 = *(byte *)pppppppuVar36 + bVar22;
      *(byte *)(param_2 + 2) = *(byte *)(param_2 + 2) + cVar49;
      goto code_r0x000141736ed6;
    case 7:
      pppppppuVar36 = (ulonglong *******)(ulonglong)((int)pppppppuVar36 + 0x4332bd64);
code_r0x000141736dbe:
      pppppppuVar46 = (ulonglong *******)&uStack_58;
      pppppppuVar41 = (ulonglong *******)&UNK_14332bd74;
      uVar26 = (ulonglong)*(int *)(&UNK_14332bd74 + (longlong)pppppppuVar36 * 4);
      pppppppuVar27 = (ulonglong *******)(&UNK_14332bd74 + uVar26);
      bVar68 = pppppppuVar27 == (ulonglong *******)0x0;
      cVar19 = (char)pppppppuVar27;
      uVar24 = (uint)pppppppuVar27;
      pppppppuVar57 = (ulonglong *******)apppppppuStack_d8;
      pppppppuVar42 = (ulonglong *******)apppppppuStack_d8;
      pppppppuVar36 = (ulonglong *******)apppppppuStack_d8;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
      switch(pppppppuVar27) {
      case (ulonglong *******)0x141736dce:
        param_2[4] = (ulonglong ******)param_2;
        param_2[5] = (ulonglong ******)0x0;
      case (ulonglong *******)0x141736dda:
        uStack_88 = param_2 + 4;
        pppppppuStack_e0 = (ulonglong *******)0x141736df3;
        uStack_80 = param_2;
        pdb_140b34640(&pppppppuStack_b0,uStack_88,(longlong)&uStack_74 + 3);
        if (pppppppuStack_b0 == (ulonglong *******)0x2) {
          pppppppuVar27 = (ulonglong *******)0x3;
          pppppppuVar41 = (ulonglong *******)0x1;
        }
        else {
          unaff_XMM6_Qb = (ulonglong ******)CONCAT44(uStack_8c,iStack_90);
          pppppppuVar41 = (ulonglong *******)uStack_80[5];
          bVar68 = pppppppuVar41 == (ulonglong *******)0x0;
          unaff_RBX = uStack_a0;
          param_1 = uStack_a8;
          unaff_R14 = pppppppuStack_b0;
          unaff_R15 = uStack_80;
          unaff_XMM6_Qa = ppppppuStack_98;
code_r0x000141736e22:
          pppppppuVar46 = (ulonglong *******)&uStack_58;
          if (!bVar68) {
            pppppppuStack_e0 = (ulonglong *******)0x141736e2d;
            uStack_88 = pppppppuVar41;
            pdb_140974580();
            pppppppuStack_e0 = (ulonglong *******)0x141736e42;
            pub_1406abac0((byte *)uStack_88,0x38,8);
            unaff_R15 = uStack_80;
          }
          if ((int)unaff_R14 == 1) {
            param_1 = (ulonglong *******)unaff_R15[2];
            unaff_RBX = (ulonglong *******)unaff_R15[3];
            pppppppuStack_e0 = (ulonglong *******)0x141736e59;
            pdb_14007ee60();
            pppppppuStack_e0 = (ulonglong *******)0x141736e68;
            unaff_XMM6_Qa = (ulonglong ******)pub_1406abab0(0x10,8);
            if (unaff_XMM6_Qa == (ulonglong ******)0x0) {
              pppppppuVar41 = (ulonglong *******)0x8;
              param_2 = (ulonglong *******)0x10;
code_r0x000141736ed6:
                    /* WARNING: Subroutine does not return */
              pppppppuStack_e0 = (ulonglong *******)0x141736edb;
              pdb_142dc7e11(pppppppuVar41,param_2);
            }
            *unaff_XMM6_Qa = (ulonglong *****)0x1;
            unaff_XMM6_Qa[1] = (ulonglong *****)0x1;
            unaff_XMM6_Qb = (ulonglong ******)&UNK_14332b300;
          }
          pppppppuStack_e0 = (ulonglong *******)0x141736e99;
          pdb_14097afe0();
          pppppppuVar67[1] = (ulonglong ******)param_1;
          pppppppuVar67[2] = (ulonglong ******)unaff_RBX;
          pppppppuVar67[3] = unaff_XMM6_Qa;
          pppppppuVar67[4] = unaff_XMM6_Qb;
          pppppppuVar27 = (ulonglong *******)0x1;
          pppppppuVar41 = (ulonglong *******)0x0;
        }
code_r0x000141736eab:
        ppppppuVar43 = pppppppuVar46[-5];
        *pppppppuVar67 = (ulonglong ******)pppppppuVar41;
        *(char *)(ppppppuVar43 + 6) = (char)pppppppuVar27;
        return pppppppuVar67;
      case (ulonglong *******)0x141736ede:
code_r0x000141736ede:
                    /* WARNING: Subroutine does not return */
        pppppppuStack_e0 = (ulonglong *******)0x141736eea;
        pdb_142dc8590(&UNK_14332b2c8);
      case (ulonglong *******)0x141736eea:
                    /* WARNING: Subroutine does not return */
        pppppppuStack_e0 = (ulonglong *******)0x141736ef6;
        pdb_142dc8570(&UNK_14332b2c8);
      case (ulonglong *******)0x14173704a:
        pppppppuVar27 = (ulonglong *******)(ulonglong)(uVar24 + 0x4332bd74);
        pppppppuVar36 = (ulonglong *******)apppppppuStack_d8;
        break;
      case (ulonglong *******)0x14173714e:
        *(byte *)pppppppuVar27 = *(byte *)pppppppuVar27 + cVar19;
        *(byte *)(param_2 + 2) = *(byte *)(param_2 + 2) + cVar49;
        goto code_r0x000141737156;
      case (ulonglong *******)0x14173715a:
        *(int *)(uVar26 + 0xd07ac883) = *(int *)(uVar26 + 0xd07ac883) + iVar44;
        goto code_r0x00014173715e;
      case (ulonglong *******)0x1417372d3:
        pppppppuVar42 = pppppppuVar41;
code_r0x00014173729f:
        bVar22 = (byte)param_4;
        pppppppuVar46 = (ulonglong *******)((ulonglong)&uStack_58 & 0xffffffff);
        *(uint *)(pppppppuVar46 + 0xc4) = unaff_XMM7_Da;
        *(uint *)((longlong)pppppppuVar46 + 0x624) = unaff_XMM7_Db;
        *(uint *)(pppppppuVar46 + 0xc5) = unaff_XMM7_Dc;
        *(uint *)((longlong)pppppppuVar46 + 0x62c) = unaff_XMM7_Dd;
        pppppppuVar46[0xc2] = unaff_XMM6_Qa;
        pppppppuVar46[0xc3] = unaff_XMM6_Qb;
        pppppppuVar57 = &ppppppuStack_100;
        unaff_RBX = &ppppppuStack_100;
        pppppppuVar46[0xc1] = (ulonglong ******)0xfffffffffffffffe;
        pppppppuVar41 = (ulonglong *******)&UNK_14332bd94;
        pppppppuVar27 =
             (ulonglong *******)
             (&UNK_14332bd94 +
             *(int *)(&UNK_14332bd94 + (ulonglong)*(byte *)((longlong)param_2 + 0x4a) * 4));
        param_1 = param_3;
        in_R11 = param_2;
        unaff_R13 = pppppppuVar42;
        goto code_r0x0001417372ed;
      case (ulonglong *******)0x141737417:
        goto code_r0x000141737417;
      case (ulonglong *******)0x141738c43:
        goto code_r0x000141738c43;
      case (ulonglong *******)0x141739e3c:
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      case (ulonglong *******)0x141739e48:
        goto code_r0x000141739e48;
      case (ulonglong *******)0x14173f2cb:
        pppppppuVar46 = (ulonglong *******)&uStack_58;
        uVar26 = (ulonglong)*(byte *)(param_2 + 0x16);
        pppppppuVar41 = (ulonglong *******)&UNK_14332bda8;
        goto code_r0x00014173f2ef;
      case (ulonglong *******)0x14173f319:
        *(byte *)param_1 = *(byte *)param_1 ^ 0x74;
        *(byte *)(param_2 + 8) = *(byte *)(param_2 + 8) - (char)((ulonglong)pppppppuVar27 >> 8);
code_r0x00014173f31e:
        pppppppuVar46 = (ulonglong *******)&uStack_58;
        uStack_88 = (ulonglong *******)CONCAT44(uVar77,uVar25);
        uStack_80 = (ulonglong *******)CONCAT44(in_XMM3_Dd,in_XMM3_Dc);
        uStack_70 = CONCAT44(in_XMM4_Dd,in_XMM4_Dc);
        pppppppuVar41 = param_2 + 10;
        uStack_78 = in_XMM4_Da;
        uStack_74 = in_XMM4_Db;
        goto code_r0x00014173f32a;
      case (ulonglong *******)0x14173f46e:
        *(byte *)pppppppuVar27 = *(byte *)pppppppuVar27 + cVar19;
        return pppppppuVar27;
      case (ulonglong *******)0x14173f47a:
        goto code_r0x00014173f47a;
      case (ulonglong *******)0x14173f597:
        pcVar12 = (code *)swi(3);
        pppppppuVar41 = (ulonglong *******)(*pcVar12)();
        return pppppppuVar41;
      case (ulonglong *******)0x14173f5d7:
        pppppppuVar57 = (ulonglong *******)&pppppppuStack_e0;
        *(byte *)param_2 = *(byte *)param_2 + cVar19;
        pppppppuStack_e0 = pppppppuVar46;
        goto code_r0x00014173f5db;
      case (ulonglong *******)0x14173f6e2:
        goto code_r0x00014173f6e2;
      case (ulonglong *******)0x14173f6ee:
        return pppppppuVar27;
      case (ulonglong *******)0x14173f822:
        *(byte *)pppppppuVar27 = *(byte *)pppppppuVar27 + cVar19;
        (&UNK_14332bcff)[uVar26] = (&UNK_14332bcff)[uVar26] + 't';
        return (ulonglong *******)((ulonglong)param_2 & 0xffffffff);
      case (ulonglong *******)0x14173f873:
        ppppppuStack_98 = (ulonglong ******)(ulonglong)*(uint *)(param_2 + 2);
        in_XMM0_Qa = (ulonglong *******)*param_2;
        in_XMM0_Qb = (ulonglong *******)param_2[1];
        uStack_a8 = in_XMM0_Qa;
        uStack_a0 = in_XMM0_Qb;
        uVar73 = *(uint *)(param_2 + 3);
        uVar74 = *(uint *)((longlong)param_2 + 0x1c);
        in_XMM1_Dc = *(uint *)(param_2 + 4);
        in_XMM1_Dd = *(uint *)((longlong)param_2 + 0x24);
        pppppppuVar60 = (ulonglong *******)apppppppuStack_d8;
        goto code_r0x00014173f889;
      case (ulonglong *******)0x14173f983:
        *(byte *)pppppppuVar27 = *(byte *)pppppppuVar27 + cVar19;
        (&UNK_14332bcfd)[uVar26] = (&UNK_14332bcfd)[uVar26] + 't';
        (&UNK_14332bd01)[uVar26] = (&UNK_14332bd01)[uVar26] | (byte)param_4;
        pppppppuVar36 = (ulonglong *******)(ulonglong)(uVar24 + 0x1bec0c7);
        goto code_r0x00014173f97f;
      case (ulonglong *******)0x14173f98f:
        *(char *)(uVar26 + 0x1bb764575) =
             *(char *)(uVar26 + 0x1bb764575) + cVar23 + (0xfffffffebccd428b < uVar26);
        return (ulonglong *******)0x46894801;
      case (ulonglong *******)0x14173faae:
        pppppppuStack_e0 = (ulonglong *******)0x14173fabc;
        pppppppuVar41 = (ulonglong *******)pdb_140974040(iVar44 + 0x80);
        return pppppppuVar41;
      case (ulonglong *******)0x14173fb04:
        pppppppuVar57 = (ulonglong *******)apppppppuStack_d8;
        goto code_r0x00014173faf4;
      case (ulonglong *******)0x14173fc66:
        pppppppuVar36 = pppppppuVar27;
        pppppppuVar62 = (ulonglong *******)apppppppuStack_d8;
        goto code_r0x00014173fc51;
      case (ulonglong *******)0x14173fc72:
        if (bVar68 || (longlong)uVar26 < -0x14332bd74) {
          *(uint *)(pppppppuVar67 + 2) = uVar24;
        }
        goto code_r0x00014173fc74;
      case (ulonglong *******)0x14173fda3:
        pppppppuVar57 = (ulonglong *******)(auStack_138 + 0x18);
        pppppppuVar41 = param_2 + 0x3b;
        pppppppuStack_f0 = param_1;
        pppppppuStack_e0 = pppppppuVar46;
        goto code_r0x00014173fdbb;
      case (ulonglong *******)0x14173fe3a:
        ppppppuStack_48 = in_MM0;
code_r0x00014173fe3e:
        pppppppuVar46 = (ulonglong *******)&uStack_58;
        pppppppuVar41 = (ulonglong *******)&stack0x00000068;
        pppppppuVar57 = (ulonglong *******)apppppppuStack_d8;
        goto code_r0x00014173fe4c;
      case (ulonglong *******)0x1417403f9:
        pppppppuVar64 = (ulonglong *******)apppppppuStack_d8;
        goto code_r0x0001417403d8;
      case (ulonglong *******)0x141740405:
code_r0x000141740405:
        *(byte *)((longlong)param_2 + 0x2b) = *(byte *)((longlong)param_2 + 0x2b) + cVar49;
        goto code_r0x00014174040b;
      }
      goto code_r0x00014173703e;
    case 8:
                    /* WARNING: Call to offcut address within same function */
      pppppppuStack_e0 = (ulonglong *******)0x141737034;
      in_XMM0_Qa = (ulonglong *******)func_0x000141737032();
      in_XMM0_Qb = extraout_XMM0_Qb;
      goto code_r0x000141737016;
    case 9:
      goto code_r0x00014173714a;
    case 10:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0xb:
      goto code_r0x00014173703a;
    case 0xc:
      *(byte *)pppppppuVar67 = *(byte *)pppppppuVar67;
      (&UNK_14332bd2b)[lVar33] = (&UNK_14332bd2b)[lVar33] + 'd';
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0xd:
      *(byte *)pppppppuVar36 = *(byte *)pppppppuVar36 + bVar22;
      goto code_r0x000141739e14;
    case 0xe:
      uVar21 = SUB81(pppppppuVar46,0);
      pppppppuVar27 = unaff_R13;
      goto code_r0x000141739e30;
    case 0xf:
      (&UNK_14332bced)[lVar33] = (&UNK_14332bced)[lVar33] + 'd';
      pppppppuVar54 = (ulonglong *******)apppppppuStack_d8;
      goto code_r0x000141738c0f;
    case 0x10:
      goto code_r0x000141737410;
    case 0x11:
      pcVar12 = (code *)swi(3);
      pppppppuVar41 = (ulonglong *******)(*pcVar12)();
      return pppppppuVar41;
    case 0x12:
      return pppppppuVar36;
    case 0x13:
      goto code_r0x00014173f45e;
    case 0x14:
      *(byte *)param_1 = *(byte *)param_1 & 100;
      ppppppuStack_98 =
           (ulonglong ******)CONCAT44(ppppppuStack_98._4_4_,(int)ppppppuStack_98 - iVar44);
      uVar25 = *(uint *)(param_2 + 6);
      uVar77 = *(uint *)((longlong)param_2 + 0x34);
      in_XMM3_Dc = *(uint *)(param_2 + 7);
      in_XMM3_Dd = *(uint *)((longlong)param_2 + 0x3c);
      in_XMM4_Da = *(uint *)(param_2 + 8);
      in_XMM4_Db = *(uint *)((longlong)param_2 + 0x44);
      in_XMM4_Dc = *(uint *)(param_2 + 9);
      in_XMM4_Dd = *(uint *)((longlong)param_2 + 0x4c);
      pppppppuStack_b8 = in_XMM0_Qa;
      uStack_a8 = in_XMM1_Qa;
      goto code_r0x00014173f31e;
    case 0x15:
      pppppppuStack_e0 = pppppppuVar36;
      pppppppuVar41 = (ulonglong *******)pdb_1409737b0();
      return pppppppuVar41;
    case 0x16:
      goto code_r0x00014173f6de;
    case 0x17:
      puVar1 = (uint *)(&UNK_14332bced + lVar33);
      uVar25 = *puVar1;
      *puVar1 = *puVar1 + 0x4332bd64;
      *(char *)(lVar33 + 0xcbba4565) =
           *(char *)(lVar33 + 0xcbba4565) + (char)unaff_R14 + (0xbccd429b < uVar25);
      *(byte *)pppppppuVar36 = *(byte *)pppppppuVar36 + bVar22;
      goto code_r0x00014173f6de;
    case 0x18:
      goto code_r0x00014173f5c7;
    case 0x19:
      *(byte *)pppppppuVar36 = *(byte *)pppppppuVar36;
      (&UNK_14332bcef)[lVar33] = (&UNK_14332bcef)[lVar33] + 'd';
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0x1a:
      goto code_r0x00014173f97f;
    case 0x1b:
      bVar22 = *(byte *)param_1;
      *(byte *)param_1 = *(byte *)param_1 + 100;
      ppppppuStack_48 =
           (ulonglong ******)
           CONCAT71(ppppppuStack_48._1_7_,(char)ppppppuStack_48 + 'd' + (0x9b < bVar22));
      goto code_r0x00014173f968;
    case 0x1c:
      puVar35 = (undefined *)0x4332bdc8;
      goto code_r0x00014173f869;
    case 0x1d:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0x1e:
      break;
    case 0x1f:
      pppppppuVar41 = (ulonglong *******)((ulonglong)pppppppuVar46 & 0xffffffff);
      pppppppuVar46 = (ulonglong *******)((ulonglong)pppppppuVar36 & 0xffffffff);
      *pppppppuVar41 = (ulonglong ******)((longlong)*pppppppuVar41 + (longlong)pppppppuVar41);
      UNK_14332bd1c = UNK_14332bd1c + (char)pppppppuVar41;
      *(byte *)pppppppuVar41 = *(byte *)pppppppuVar41 + (char)pppppppuVar41;
      pppppppuVar36 = pppppppuVar41;
      pppppppuVar62 = (ulonglong *******)apppppppuStack_d8;
      break;
    case 0x20:
      goto code_r0x00014173faf4;
    case 0x21:
      *(char *)((longlong)unaff_RBX + 0x5f) = *(char *)((longlong)unaff_RBX + 0x5f) - bVar48;
      return pppppppuVar36;
    case 0x22:
      puVar39 = (undefined1 *)
                CONCAT62((int6)((ulonglong)pppppppuVar36 >> 0x10),CONCAT11(0xbe,bVar22));
      *puVar39 = *puVar39;
      goto code_r0x000141740405;
    case 0x23:
      *(int *)(&UNK_14332bced + lVar33) = *(int *)(&UNK_14332bced + lVar33) + 0x4332bd64;
      pppppppuVar27 = (ulonglong *******)(ulonglong)(bVar22 & 0x20);
      goto code_r0x0001417403d8;
    case 0x24:
      *(byte *)pppppppuVar36 = *(byte *)pppppppuVar36 + bVar22;
      ppppppuStack_48 = param_2[4];
      pppppppuStack_40 = (ulonglong *******)param_2[5];
      pppppppuStack_38 = (ulonglong *******)param_2[6];
      uStack_30 = param_2[7];
      goto code_r0x00014173fe3e;
    }
    goto code_r0x00014173fc51;
  case 0xd:
    cVar19 = in((short)param_2);
    pcVar34 = (char *)CONCAT71(uVar40,cVar19);
    *pcVar34 = cVar19;
    *pcVar34 = *pcVar34 + cVar19;
    uStack_70 = 0xfffffffffffffffe;
    pppppppuVar67 = (ulonglong *******)&UNK_14332bd40;
    pppppppuVar36 = (ulonglong *******)(ulonglong)*(byte *)(param_2 + 6);
    param_4 = param_3;
    goto code_r0x000141736dbe;
  case 0xe:
    pppppppuVar27 = (ulonglong *******)((ulonglong)param_2 & 0xffffffff);
    goto code_r0x000141736eab;
  case 0xf:
    pppppppuVar46 = (ulonglong *******)CONCAT44(uStack_58._4_4_,(undefined4)uStack_58);
    goto code_r0x000141736eab;
  case 0x10:
    pbVar2 = (byte *)((longlong)param_2 + 0xf);
    bVar22 = *pbVar2;
    cVar23 = (char)((ulonglong)pppppppuVar27 >> 8);
    *pbVar2 = *pbVar2 + cVar23;
    if (*pbVar2 == 0 || SCARRY1(bVar22,cVar23) != (char)*pbVar2 < '\0') {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    bVar68 = false;
    goto code_r0x000141736e22;
  case 0x11:
    pcVar12 = (code *)swi(3);
    pppppppuVar41 = (ulonglong *******)(*pcVar12)();
    return pppppppuVar41;
  case 0x12:
    *(char *)(uVar26 + 0x18bfbee41) =
         (*(char *)(uVar26 + 0x18bfbee41) - cVar23) - (0xfffffffebccd42bf < uVar26);
    pppppppuVar36 = param_2;
    goto code_r0x00014173712b;
  case 0x13:
    goto code_r0x00014173711a;
  case 0x14:
code_r0x000141737016:
    pppppppuStack_e0 = param_1;
    pppppppuVar50 = (ulonglong *******)auStack_170;
    pppppppuVar46 = (ulonglong *******)&pppppppuStack_f0;
    uStack_108 = 0xfffffffffffffffe;
    pppppppuVar67 = pppppppuVar41;
    param_4 = param_3;
    ppppppuStack_100 = unaff_XMM6_Qa;
code_r0x00014173703a:
    pppppppuVar27 = (ulonglong *******)(ulonglong)*(byte *)(param_2 + 6);
    pppppppuVar36 = pppppppuVar50;
    goto code_r0x00014173703e;
  case 0x15:
    goto code_r0x00014173729f;
  case 0x16:
    pppppppuStack_e0 = (ulonglong *******)0x141739e10;
    (**(code **)(CONCAT71(uVar40,bVar22 + 0x54) + -0x7c90f00d))();
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x17:
    goto code_r0x000141739e14;
  case 0x18:
    goto code_r0x000141738c0f;
  case 0x19:
    *(byte *)pppppppuVar27 = bVar22;
    *(byte *)pppppppuVar27 = *(byte *)pppppppuVar27 + bVar22;
    param_1 = param_2;
    goto code_r0x0001417373e7;
  case 0x1a:
    *(byte *)pppppppuVar27 = *(byte *)pppppppuVar27 + bVar22;
    pppppppuStack_e0 = (ulonglong *******)0x14173f2a8;
    pub_1406abac0((byte *)unaff_RBX,(ulonglong)param_2,8);
    return extraout_RAX;
  case 0x1b:
    *(uint *)pppppppuVar27 = *(uint *)pppppppuVar27 - (uint)pppppppuVar27;
    goto code_r0x00014173f43d;
  case 0x1c:
    *(int *)(&UNK_14332bd70 + uVar26) = *(int *)(&UNK_14332bd70 + uVar26) - (int)unaff_RBX;
code_r0x00014173f43d:
    *(uint *)(pppppppuVar27 + 4) = uVar75;
    *(uint *)((longlong)pppppppuVar27 + 0x24) = uVar76;
    *(uint *)(pppppppuVar27 + 5) = in_XMM2_Dc;
    *(uint *)((longlong)pppppppuVar27 + 0x2c) = in_XMM2_Dd;
    *(uint *)(pppppppuVar27 + 2) = uVar73;
    *(uint *)((longlong)pppppppuVar27 + 0x14) = uVar74;
    *(uint *)(pppppppuVar27 + 3) = in_XMM1_Dc;
    *(uint *)((longlong)pppppppuVar27 + 0x1c) = in_XMM1_Dd;
    *pppppppuVar27 = (ulonglong ******)in_XMM0_Qa;
    pppppppuVar27[1] = (ulonglong ******)in_XMM0_Qb;
    *pppppppuVar67 = (ulonglong ******)0x0;
    pppppppuVar67[1] = (ulonglong ******)pppppppuVar27;
    pppppppuVar67[2] = (ulonglong ******)&UNK_14332ba98;
code_r0x00014173f45e:
    uVar21 = 1;
code_r0x00014173f460:
    *(undefined1 *)(unaff_RBX + 0x16) = uVar21;
    return pppppppuVar67;
  case 0x1d:
    *(byte *)pppppppuVar27 = *(byte *)pppppppuVar27 + bVar22;
    (&UNK_14332bccd)[uVar26] = (&UNK_14332bccd)[uVar26] + '@';
    uVar26 = (ulonglong)((uint)pppppppuVar27 | 0x1becab9);
    goto code_r0x00014173f2ef;
  case 0x1e:
    *(char *)((longlong)unaff_RBX + 0x5f) = *(char *)((longlong)unaff_RBX + 0x5f) - bVar48;
    return pppppppuVar27;
  case 0x1f:
    goto code_r0x00014173f6ba;
  case 0x20:
    *(byte *)pppppppuVar27 = *(byte *)pppppppuVar27 + bVar22;
    pbVar2 = &UNK_14332bcc9 + uVar26;
    bVar22 = *pbVar2;
    *pbVar2 = *pbVar2 + 0x40;
    bVar68 = 0xbf < bRam000000064ffdb2b0;
    bVar48 = bRam000000064ffdb2b0 + 0x40;
    bRam000000064ffdb2b0 = bVar48 + (0xbf < bVar22);
    *(byte *)param_1 = (*(byte *)param_1 - 0x40) - (bVar68 || CARRY1(bVar48,0xbf < bVar22));
    pppppppuVar27 = apppppppuStack_d8[0];
    goto code_r0x00014173f6ba;
  case 0x21:
    goto code_r0x00014173f5a3;
  case 0x22:
    return pppppppuVar27;
  case 0x23:
    *(byte *)pppppppuVar27 = *(byte *)pppppppuVar27 + bVar22;
    pppppppuVar60 = (ulonglong *******)apppppppuStack_d8;
  case 0x24:
code_r0x00014173f94f:
    *(undefined8 *)((longlong)pppppppuVar60 + -8) = 0x14173f954;
    pdb_14007ee60();
    *(undefined8 *)((longlong)pppppppuVar60 + -8) = 0x14173f963;
    pppppppuVar36 = (ulonglong *******)pub_1406abab0(0x28,8);
    pppppppuVar57 = pppppppuVar60;
    if (pppppppuVar36 == (ulonglong *******)0x0) {
code_r0x00014173f9a9:
                    /* WARNING: Subroutine does not return */
      *(undefined8 *)((longlong)pppppppuVar57 + -8) = 0x14173f9b8;
      pdb_142dc7e11(8,0x28);
    }
code_r0x00014173f968:
    pppppppuVar36[4] = pppppppuVar46[4];
    ppppppuVar43 = *pppppppuVar46;
    ppppppuVar66 = pppppppuVar46[1];
    ppppppuVar38 = pppppppuVar46[3];
    pppppppuVar36[2] = pppppppuVar46[2];
    pppppppuVar36[3] = ppppppuVar38;
    *pppppppuVar36 = ppppppuVar43;
    pppppppuVar36[1] = ppppppuVar66;
code_r0x00014173f97f:
    *pppppppuVar67 = (ulonglong ******)0x0;
    pppppppuVar67[1] = (ulonglong ******)pppppppuVar36;
    pppppppuVar67[2] = (ulonglong ******)&UNK_14332ba58;
    uVar21 = 1;
code_r0x00014173f997:
    *(undefined1 *)(unaff_RBX + 0xf) = uVar21;
    return pppppppuVar67;
  case 0x25:
    pcVar12 = (code *)swi(3);
    pppppppuVar41 = (ulonglong *******)(*pcVar12)();
    return pppppppuVar41;
  case 0x26:
    *(undefined1 *)(param_2[0x16] + 0xe) = 2;
    param_2[0x15] = param_2[0x17];
    return (ulonglong *******)param_2[0x17];
  case 0x27:
    *(byte *)pppppppuVar27 = *(byte *)pppppppuVar27 + bVar22;
    goto code_r0x00014173fc38;
  case 0x28:
    in_stack_00000100 = SUB84(param_1,0);
    pppppppuVar61 = (ulonglong *******)apppppppuStack_d8;
code_r0x00014173fc38:
    *(undefined8 *)((longlong)pppppppuVar61 + -8) = 0x14173fc3d;
    pdb_14007ee60();
    *(undefined8 *)((longlong)pppppppuVar61 + -8) = 0x14173fc4c;
    pppppppuVar36 = (ulonglong *******)pub_1406abab0(0xd8,8);
    pppppppuVar62 = pppppppuVar61;
    if (pppppppuVar36 == (ulonglong *******)0x0) {
                    /* WARNING: Subroutine does not return */
      *(undefined8 *)((longlong)pppppppuVar61 + -8) = 0x14173fca5;
      pdb_142dc7e11(8,0xd8);
    }
code_r0x00014173fc51:
    *(undefined8 *)((longlong)pppppppuVar62 + -8) = 0x14173fc69;
    pub_142e32760(pppppppuVar36,pppppppuVar46 + 0x29,0xd8);
    *pppppppuVar67 = (ulonglong ******)0x0;
    pppppppuVar67[1] = (ulonglong ******)pppppppuVar36;
code_r0x00014173fc74:
    pppppppuVar67[2] = (ulonglong ******)&UNK_14332bab8;
    uVar21 = 1;
    pppppppuVar27 = pppppppuVar67;
code_r0x00014173fc81:
    *(undefined1 *)(unaff_RBX + 0x3b) = uVar21;
code_r0x00014173fc92:
    return pppppppuVar27;
  case 0x29:
    pppppppuStack_e0 = pppppppuVar46;
    pppppppuStack_f0 = param_1;
    pppppppuVar46 = appppppuStack_360;
    ppppppuStack_100 = (ulonglong ******)0xfffffffffffffffe;
    pppppppuVar67 = (ulonglong *******)&UNK_14332bd40;
    unaff_RBX = param_2;
    pppppppuVar57 = (ulonglong *******)auStack_3e0;
    goto code_r0x00014173faf4;
  case 0x2a:
    *(byte *)param_1 = bVar22;
    *(byte *)pppppppuVar27 = *(byte *)pppppppuVar27;
    (&UNK_14332bccb)[uVar26] = (&UNK_14332bccb)[uVar26] + '@';
    *(byte *)pppppppuVar27 = *(byte *)pppppppuVar27 + bVar22;
    (&UNK_14332bf10)[uVar26] = 2;
    return in_stack_00000200;
  case 0x2b:
    pppppppuVar46 = (ulonglong *******)CONCAT44(uStack_58._4_4_,(undefined4)uStack_58);
    pppppppuVar57 = (ulonglong *******)&uStack_50;
    goto code_r0x0001417403d2;
  case 0x2c:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x2d:
    *(int *)(&UNK_14332bda3 + uVar26) = *(int *)(&UNK_14332bda3 + uVar26) + 0x4332bd40;
    lVar33 = CONCAT71(uVar40,bVar22 + 0x81);
    goto code_r0x00014173fe0b;
  }
  pppppppuStack_40 = param_1 + 0x16;
  pppppppuStack_e0 = (ulonglong *******)0x1417366b0;
  pdb_1417251f0(&iStack_90,pppppppuStack_40,param_2);
  pppppppuVar41 = pppppppuStack_40;
  if ((char)iStack_90 == '\0') {
    uStack_a8._0_4_ = uStack_78;
    uStack_a8._4_4_ = uStack_74;
    uStack_a0 = (ulonglong *******)uStack_70;
    pppppppuStack_b8 = uStack_88;
    pppppppuStack_b0 = uStack_80;
    pppppppuStack_e0 = (ulonglong *******)0x1417366d7;
    pdb_14173c8a0(pppppppuStack_40);
    ppppppuVar43 = pppppppuStack_38[0x15];
    pppppppuStack_38[0x15] = (ulonglong ******)0x1;
    *(uint *)(pppppppuVar41 + 2) = (uint)uStack_a8;
    *(uint *)((longlong)pppppppuVar41 + 0x14) = uStack_a8._4_4_;
    *(uint *)(pppppppuVar41 + 3) = (uint)uStack_a0;
    *(uint *)((longlong)pppppppuVar41 + 0x1c) = uStack_a0._4_4_;
    *pppppppuVar41 = (ulonglong ******)pppppppuStack_b8;
    pppppppuVar41[1] = (ulonglong ******)pppppppuStack_b0;
    pppppppuStack_38[0x1a] = ppppppuVar43;
    pppppppuStack_38[0x1b] = (ulonglong ******)0x0;
code_r0x00014173670f:
    pppppppuStack_40 = pppppppuStack_38 + 0x15;
    pppppppuStack_e0 = (ulonglong *******)0x14173672a;
    pdb_140b36d70(&iStack_90,pppppppuStack_40,(longlong)&uStack_30 + 7,param_2);
    if (iStack_90 != 2) {
      ppppppuStack_48 = (ulonglong ******)uStack_70;
      lStack_68 = CONCAT44(uStack_8c,iStack_90);
      uStack_58._0_4_ = (undefined4)uStack_80;
      uStack_58._4_4_ = uStack_80._4_4_;
      uStack_50 = uStack_78;
      uStack_4c = uStack_74;
      pppppppuStack_60 = uStack_88;
      pppppppuStack_e0 = (ulonglong *******)0x141736758;
      pdb_14097c580(pppppppuStack_40);
      if (lStack_68 != 0) {
        if (pppppppuStack_60 == (ulonglong *******)0x0) {
          plVar15 = (longlong *)CONCAT44(uStack_58._4_4_,(undefined4)uStack_58);
          LOCK();
          *plVar15 = *plVar15 + -1;
          UNLOCK();
          if (*plVar15 == 0) {
            pppppppuStack_e0 = (ulonglong *******)0x141736790;
            pdb_141746b00(pppppppuVar46);
          }
        }
        else {
          plVar15 = (longlong *)CONCAT44(uStack_4c,uStack_50);
          LOCK();
          *plVar15 = *plVar15 + -1;
          UNLOCK();
          if (*plVar15 == 0) {
            pppppppuStack_e0 = (ulonglong *******)0x14173677a;
            pdb_140c7a240(&uStack_50);
          }
        }
      }
      pppppppuStack_e0 = (ulonglong *******)0x14173679a;
      pdb_14097de90(pppppppuStack_38);
      bVar22 = 1;
      pppppppuVar41 = (ulonglong *******)0x0;
      goto code_r0x00014173679f;
    }
    bVar22 = 4;
  }
  else {
    bVar22 = 3;
  }
  pppppppuVar41 = (ulonglong *******)0x1;
code_r0x00014173679f:
  *(byte *)(pppppppuStack_38 + 0x14) = bVar22;
  return pppppppuVar41;
code_r0x00014173703e:
  pppppppuVar57 = pppppppuVar36;
  bVar22 = (byte)param_4;
  pppppppuVar41 = (ulonglong *******)&UNK_14332bd84;
  uVar26 = (ulonglong)*(int *)(&UNK_14332bd84 + (longlong)pppppppuVar27 * 4);
  bVar68 = 0xfffffffebccd427b < uVar26;
  pppppppuVar27 = (ulonglong *******)(&UNK_14332bd84 + uVar26);
  bVar69 = pppppppuVar27 == (ulonglong *******)0x0;
  bVar20 = (byte)pppppppuVar27;
  pppppppuVar52 = pppppppuVar57;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
  switch(pppppppuVar27) {
  case (ulonglong *******)0x14173704e:
    param_2[4] = (ulonglong ******)param_2;
    param_2[5] = (ulonglong ******)0x0;
  case (ulonglong *******)0x14173705a:
    pppppppuVar46[-5] = (ulonglong ******)param_2;
    pppppppuVar46[-6] = (ulonglong ******)(param_2 + 4);
    *(undefined8 *)((longlong)pppppppuVar57 + -8) = 0x141737073;
    pdb_140b34f70(pppppppuVar46 + -0xb,param_2 + 4,(byte *)((longlong)pppppppuVar46 + -0x19));
    ppppppuVar43 = pppppppuVar46[-0xb];
    if (ppppppuVar43 == (ulonglong ******)0x2) {
      pppppppuVar27 = (ulonglong *******)0x3;
      pppppppuVar41 = (ulonglong *******)0x1;
      pppppppuVar36 = pppppppuVar67;
    }
    else {
      param_1 = (ulonglong *******)pppppppuVar46[-10];
      unaff_RBX = (ulonglong *******)pppppppuVar46[-9];
      unaff_XMM6_Qa = pppppppuVar46[-8];
      unaff_XMM6_Qb = pppppppuVar46[-7];
      ppppppuVar66 = pppppppuVar46[-5];
      if ((ulonglong ******)ppppppuVar66[5] != (ulonglong ******)0x0) {
        pppppppuVar46[-6] = (ulonglong ******)ppppppuVar66[5];
        *(undefined8 *)((longlong)pppppppuVar57 + -8) = 0x1417370ad;
        pdb_140974580();
        ppppppuVar66 = pppppppuVar46[-6];
        *(undefined8 *)((longlong)pppppppuVar57 + -8) = 0x1417370c2;
        pub_1406abac0((byte *)ppppppuVar66,0x38,8);
        ppppppuVar66 = pppppppuVar46[-5];
      }
      if ((int)ppppppuVar43 == 1) {
        param_1 = (ulonglong *******)ppppppuVar66[2];
        unaff_RBX = (ulonglong *******)ppppppuVar66[3];
        *(undefined8 *)((longlong)pppppppuVar57 + -8) = 0x1417370d9;
        pdb_14007ee60();
        *(undefined8 *)((longlong)pppppppuVar57 + -8) = 0x1417370e8;
        unaff_XMM6_Qa = (ulonglong ******)pub_1406abab0(0x10,8);
        if (unaff_XMM6_Qa == (ulonglong ******)0x0) {
          pppppppuVar41 = (ulonglong *******)0x8;
          param_2 = (ulonglong *******)0x10;
          pppppppuVar51 = pppppppuVar57;
code_r0x000141737156:
                    /* WARNING: Subroutine does not return */
          *(undefined8 *)((longlong)pppppppuVar51 + -8) = 0x14173715b;
          pdb_142dc7e11(pppppppuVar41,param_2);
        }
        *unaff_XMM6_Qa = (ulonglong *****)0x1;
        unaff_XMM6_Qa[1] = (ulonglong *****)0x1;
        unaff_XMM6_Qb = (ulonglong ******)&UNK_14332b300;
      }
      *(undefined8 *)((longlong)pppppppuVar57 + -8) = 0x141737119;
      pdb_14097d110();
code_r0x00014173711a:
      pppppppuVar67[1] = (ulonglong ******)param_1;
      pppppppuVar67[2] = (ulonglong ******)unaff_RBX;
      pppppppuVar67[3] = unaff_XMM6_Qa;
      pppppppuVar67[4] = unaff_XMM6_Qb;
      pppppppuVar27 = (ulonglong *******)0x1;
      pppppppuVar41 = (ulonglong *******)0x0;
      pppppppuVar36 = pppppppuVar67;
    }
code_r0x00014173712b:
    ppppppuVar43 = pppppppuVar46[-5];
    *pppppppuVar36 = (ulonglong ******)pppppppuVar41;
    *(char *)(ppppppuVar43 + 6) = (char)pppppppuVar27;
code_r0x00014173714a:
    return pppppppuVar36;
  case (ulonglong *******)0x14173715e:
code_r0x00014173715e:
                    /* WARNING: Subroutine does not return */
    *(undefined8 *)((longlong)pppppppuVar52 + -8) = 0x14173716a;
    pdb_142dc8590(&UNK_14332b2c8);
  case (ulonglong *******)0x14173716a:
                    /* WARNING: Subroutine does not return */
    *(undefined8 *)((longlong)pppppppuVar57 + -8) = 0x141737176;
    pdb_142dc8570(&UNK_14332b2c8);
  case (ulonglong *******)0x1417372e3:
    param_1 = (ulonglong *******)0xc801488104634801;
code_r0x0001417372ed:
    unaff_RBX[0xe] = (ulonglong ******)param_2;
    bVar48 = (byte)pppppppuVar41;
    cVar23 = (char)pppppppuVar27;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
    switch(pppppppuVar27) {
    case (ulonglong *******)0x1417372f3:
      *(undefined2 *)(in_R11 + 9) = 0;
      unaff_R12 = in_R11[7];
      unaff_R14 = (ulonglong *******)(unaff_R12 + 6);
      LOCK();
      bVar68 = *(int *)(unaff_R12 + 6) == 0;
      if (bVar68) {
        *(int *)(unaff_R12 + 6) = 0x3fffffff;
      }
      UNLOCK();
      if (!bVar68) {
        *(undefined8 *)((longlong)pppppppuVar57 + -8) = 0x1417387ec;
        pdb_142dc6e70(unaff_R14);
      }
      pppppppuVar41 = _DAT_143ca8f38;
      if (((ulonglong)*_DAT_143ca8f38 & 0x7fffffffffffffff) == 0) {
        unaff_R15 = (ulonglong *******)0x0;
        bVar22 = 0;
        cVar23 = *(char *)(unaff_R12 + 7);
        ppppppuVar43 = unaff_RBX[0xe];
      }
      else {
        *(undefined8 *)((longlong)pppppppuVar57 + -8) = 0x1417387f7;
        bVar22 = pdb_142dc79e0();
        bVar22 = bVar22 ^ 1;
        unaff_R15 = (ulonglong *******)(ulonglong)bVar22;
        cVar23 = *(char *)(unaff_R12 + 7);
        ppppppuVar43 = unaff_RBX[0xe];
      }
      if (cVar23 != '\0') {
        unaff_RBX[0x50] = (ulonglong ******)unaff_R14;
        *(byte *)(unaff_RBX + 0x51) = bVar22;
        *(undefined **)((longlong)pppppppuVar57 + 0x20) = &UNK_14332afe0;
                    /* WARNING: Subroutine does not return */
        *(undefined8 *)((longlong)pppppppuVar57 + -8) = 0x14173884a;
        pdb_142dc8170(&UNK_14332b8d0,0x2b,unaff_RBX + 0x50,&UNK_14332b960);
      }
      unaff_RBX[0x13] = (ulonglong ******)unaff_R14;
      bVar22 = (byte)unaff_R15;
      *(byte *)(unaff_RBX + 0x14) = bVar22;
      ppppppuVar66 = (ulonglong ******)unaff_R12[0xe];
      if (ppppppuVar66 == (ulonglong ******)0x0) {
        if (SBORROW8(0,(longlong)unaff_R12[0xb])) {
          unaff_R12[0xb] = (ulonglong *****)0x0;
          unaff_R12[0xc] = (ulonglong *****)0x8;
          unaff_R12[0xd] = (ulonglong *****)0x0;
          ppppppuVar43[4] = (ulonglong *****)0x2;
        }
        else {
          unaff_RBX[0x50] = (ulonglong ******)0x1;
          unaff_RBX[0x51] = (ulonglong ******)0x1;
          unaff_RBX[0x60] = (ulonglong ******)0x0;
          unaff_RBX[0x65] = (ulonglong ******)0x0;
          *(undefined1 (*) [16])(unaff_RBX + 0xa0) = (undefined1  [16])0x0;
          unaff_RBX[0xa2] = (ulonglong ******)0x0;
          unaff_RBX[0xa3] = (ulonglong ******)0x1;
          unaff_RBX[0xa4] = (ulonglong ******)0x1;
          *(undefined8 *)((longlong)pppppppuVar57 + -8) = 0x141737d42;
          pdb_14007ee60();
          *(undefined8 *)((longlong)pppppppuVar57 + -8) = 0x141737d51;
          ppppppuVar43 = (ulonglong ******)pub_1406abab0(0x300,0x80);
          if (ppppppuVar43 == (ulonglong ******)0x0) {
                    /* WARNING: Subroutine does not return */
            *(undefined8 *)((longlong)pppppppuVar57 + -8) = 0x141738983;
            pdb_142dc7e11(0x80,0x300);
          }
          unaff_RBX[0x10] = (ulonglong ******)param_1;
          *(undefined8 *)((longlong)pppppppuVar57 + -8) = 0x141737d79;
          pub_142e32760(ppppppuVar43,unaff_RBX + 0x50,0x300);
          LOCK();
          pppppuVar47 = *ppppppuVar43;
          *ppppppuVar43 = (ulonglong *****)((longlong)*ppppppuVar43 + 1);
          UNLOCK();
          if (*ppppppuVar43 == (ulonglong *****)0x0 ||
              SCARRY8((longlong)pppppuVar47,1) != (longlong)*ppppppuVar43 < 0)
          goto code_r0x00014173a218;
          unaff_RBX[0x50] = ppppppuVar43;
          unaff_RBX[0x51] = (ulonglong ******)0x0;
          unaff_RBX[0x2a] = ppppppuVar43;
          pppppuVar47 = unaff_R12[0xd];
          if (pppppuVar47 == unaff_R12[0xb]) {
            *(undefined8 *)((longlong)pppppppuVar57 + -8) = 0x141737db2;
            pdb_142d7e8a0(unaff_R12 + 0xb);
          }
          unaff_R12[0xc][(longlong)pppppuVar47] = (ulonglong ****)ppppppuVar43;
          unaff_R12[0xd] = (ulonglong *****)((longlong)pppppuVar47 + 1);
          ppppppuVar66 = unaff_RBX[0xe];
          ppppppuVar66[5] = (ulonglong *****)ppppppuVar43;
          ppppppuVar66[6] = (ulonglong *****)0x0;
          ppppppuVar66[4] = (ulonglong *****)0x1;
          param_1 = (ulonglong *******)unaff_RBX[0x10];
          pppppppuVar41 = _DAT_143ca8f38;
        }
      }
      else {
        ppppppuVar38 = (ulonglong ******)unaff_R12[0xf];
        LOCK();
        pppppuVar47 = *ppppppuVar66;
        *ppppppuVar66 = (ulonglong *****)((longlong)*ppppppuVar66 + 1);
        UNLOCK();
        if (*ppppppuVar66 == (ulonglong *****)0x0 ||
            SCARRY8((longlong)pppppuVar47,1) != (longlong)*ppppppuVar66 < 0)
        goto code_r0x00014173a218;
        unaff_RBX[0x2a] = ppppppuVar66;
        unaff_RBX[0x2b] = ppppppuVar38;
        pppppuVar47 = ppppppuVar43[8];
        pppppuVar32 = unaff_R12[9];
        pppppuVar9 = unaff_R12[10];
        *(undefined8 *)((longlong)pppppppuVar57 + -8) = 0x141737399;
        pdb_141c34660(unaff_RBX + 0xcd,pppppuVar47 + 2,pppppuVar32,pppppuVar9);
        uVar26 = 1;
        if ((longlong)unaff_RBX[0xcd] < 0) {
          uVar26 = (ulonglong)unaff_RBX[0xcd] ^ 0x8000000000000000;
        }
        ppppppuVar43 = unaff_RBX[0xe];
        if (uVar26 != 0) {
          if (uVar26 != 1) {
            if (SBORROW8(0,(longlong)unaff_R12[0xb])) {
              unaff_R12[0xb] = (ulonglong *****)0x0;
              unaff_R12[0xc] = (ulonglong *****)0x8;
              unaff_R12[0xd] = (ulonglong *****)0x0;
              ppppppuVar43[4] = (ulonglong *****)0x2;
              ppppppuVar43 = unaff_RBX[0x2a];
              LOCK();
              *ppppppuVar43 = (ulonglong *****)((longlong)*ppppppuVar43 + -1);
              pppppuVar47 = *ppppppuVar43;
              UNLOCK();
            }
            else {
              unaff_RBX[0x50] = (ulonglong ******)0x1;
              unaff_RBX[0x51] = (ulonglong ******)0x1;
              unaff_RBX[0x60] = (ulonglong ******)0x0;
              unaff_RBX[0x65] = (ulonglong ******)0x0;
              *(undefined1 (*) [16])(unaff_RBX + 0xa0) = (undefined1  [16])0x0;
              unaff_RBX[0xa2] = (ulonglong ******)0x0;
              unaff_RBX[0xa3] = (ulonglong ******)0x1;
              unaff_RBX[0xa4] = (ulonglong ******)0x1;
              *(undefined8 *)((longlong)pppppppuVar57 + -8) = 0x141737ef4;
              pdb_14007ee60();
              *(undefined8 *)((longlong)pppppppuVar57 + -8) = 0x141737f03;
              ppppppuVar43 = (ulonglong ******)pub_1406abab0(0x300,0x80);
              if (ppppppuVar43 == (ulonglong ******)0x0) {
                    /* WARNING: Subroutine does not return */
                *(undefined8 *)((longlong)pppppppuVar57 + -8) = 0x141738a11;
                pdb_142dc7e11(0x80,0x300);
              }
              unaff_RBX[0x10] = (ulonglong ******)param_1;
              *(undefined8 *)((longlong)pppppppuVar57 + -8) = 0x141737f2b;
              pub_142e32760(ppppppuVar43,unaff_RBX + 0x50,0x300);
              LOCK();
              pppppuVar47 = *ppppppuVar43;
              *ppppppuVar43 = (ulonglong *****)((longlong)*ppppppuVar43 + 1);
              UNLOCK();
              if (*ppppppuVar43 == (ulonglong *****)0x0 ||
                  SCARRY8((longlong)pppppuVar47,1) != (longlong)*ppppppuVar43 < 0)
              goto code_r0x00014173a218;
              unaff_RBX[0x50] = ppppppuVar43;
              unaff_RBX[0x51] = (ulonglong ******)0x0;
              unaff_RBX[0x18] = ppppppuVar43;
              pppppuVar47 = unaff_R12[0xd];
              if (pppppuVar47 == unaff_R12[0xb]) {
                *(undefined8 *)((longlong)pppppppuVar57 + -8) = 0x141737f64;
                pdb_142d7e8a0(unaff_R12 + 0xb);
              }
              unaff_R12[0xc][(longlong)pppppuVar47] = (ulonglong ****)ppppppuVar43;
              unaff_R12[0xd] = (ulonglong *****)((longlong)pppppuVar47 + 1);
              ppppppuVar66 = unaff_RBX[0xe];
              ppppppuVar66[5] = (ulonglong *****)ppppppuVar43;
              ppppppuVar66[6] = (ulonglong *****)0x0;
              ppppppuVar66[4] = (ulonglong *****)0x1;
              pppppppuVar41 = _DAT_143ca8f38;
              param_1 = (ulonglong *******)unaff_RBX[0x10];
              ppppppuVar43 = unaff_RBX[0x2a];
              LOCK();
              *ppppppuVar43 = (ulonglong *****)((longlong)*ppppppuVar43 + -1);
              pppppuVar47 = *ppppppuVar43;
              UNLOCK();
            }
            if (pppppuVar47 == (ulonglong *****)0x0) {
              *(undefined8 *)((longlong)pppppppuVar57 + -8) = 0x141737fb5;
              pdb_140c7a240(unaff_RBX + 0x2a);
            }
            goto code_r0x000141737fb6;
          }
          unaff_RBX[0x10] = (ulonglong ******)unaff_R13;
          unaff_RBX[0x11] = (ulonglong ******)unaff_R12[9];
code_r0x0001417373e7:
          bVar22 = (byte)unaff_R15;
          pppppppuVar67 = param_1;
          if ((ulonglong *******)unaff_R12[10] != (ulonglong *******)0x0) {
            unaff_R13 = (ulonglong *******)(unaff_RBX[0x11] + 9);
            param_1 = (ulonglong *******)unaff_R12[10];
            do {
              param_2 = (ulonglong *******)unaff_R13[-1];
              pppppppuVar53 = pppppppuVar57;
              if (param_2 != (ulonglong *******)0x0) {
code_r0x000141737426:
                ppppppuVar43 = *unaff_R13;
                *(undefined8 *)((longlong)pppppppuVar57 + -8) = 0x141737435;
                pub_1406abac0((byte *)ppppppuVar43,(ulonglong)param_2,1);
                pppppppuVar53 = pppppppuVar57;
              }
code_r0x000141737410:
              unaff_R13 = unaff_R13 + 0xc;
              param_1 = (ulonglong *******)((longlong)param_1 + -1);
              bVar68 = param_1 == (ulonglong *******)0x0;
              pppppppuVar57 = pppppppuVar53;
code_r0x000141737417:
              bVar22 = (byte)unaff_R15;
            } while (!bVar68);
          }
          pppppuVar47 = unaff_R12[8];
          if (pppppuVar47 != (ulonglong *****)0x0) {
            ppppppuVar43 = unaff_RBX[0x11];
            *(undefined8 *)((longlong)pppppppuVar57 + -8) = 0x141737c5b;
            pub_1406abac0((byte *)ppppppuVar43,(longlong)pppppuVar47 * 0x60,0x10);
          }
          unaff_R12[10] = (ulonglong *****)unaff_RBX[0xcf];
          ppppppuVar43 = unaff_RBX[0xce];
          unaff_R12[8] = (ulonglong *****)unaff_RBX[0xcd];
          unaff_R12[9] = (ulonglong *****)ppppppuVar43;
          ppppppuVar43 = unaff_RBX[0xe];
          unaff_R13 = (ulonglong *******)unaff_RBX[0x10];
          pppppppuVar41 = _DAT_143ca8f38;
          param_1 = pppppppuVar67;
        }
        ppppppuVar66 = unaff_RBX[0x2b];
        ppppppuVar43[5] = (ulonglong *****)unaff_RBX[0x2a];
        ppppppuVar43[6] = (ulonglong *****)ppppppuVar66;
        ppppppuVar43[4] = (ulonglong *****)0x0;
      }
code_r0x000141737fb6:
      if ((bVar22 == 0) && (((ulonglong)*pppppppuVar41 & 0x7fffffffffffffff) != 0)) {
        *(undefined8 *)((longlong)pppppppuVar57 + -8) = 0x141738960;
        cVar23 = pdb_142dc79e0();
        if (cVar23 == '\0') {
          *(undefined1 *)(unaff_R12 + 7) = 1;
        }
      }
      LOCK();
      uVar25 = *(uint *)unaff_R14;
      *(uint *)unaff_R14 = *(uint *)unaff_R14 + 0xc0000001;
      UNLOCK();
      unaff_R12 = (ulonglong ******)(ulonglong)(uVar25 + 0xc0000001);
      if (0x3fffffff < uVar25 + 0xc0000001) {
        *(undefined8 *)((longlong)pppppppuVar57 + -8) = 0x1417387de;
        pdb_142dc6fa0(unaff_R14);
      }
      plVar15 = plRam0000000143cad8b0;
      in_R11 = (ulonglong *******)unaff_RBX[0xe];
      if (in_R11[4] != (ulonglong ******)0x0) {
        if ((int)in_R11[4] != 1) {
          unaff_RBX[0x10] = (ulonglong ******)unaff_R13;
          ppppppuVar43 = in_R11[7];
          LOCK();
          pppppuVar47 = *ppppppuVar43;
          *ppppppuVar43 = (ulonglong *****)((longlong)*ppppppuVar43 + 1);
          UNLOCK();
          if (*ppppppuVar43 == (ulonglong *****)0x0 ||
              SCARRY8((longlong)pppppuVar47,1) != (longlong)*ppppppuVar43 < 0)
          goto code_r0x00014173a218;
          in_R11[0xb] = ppppppuVar43;
          *(byte *)(in_R11 + 0xc) = 1;
          pppppppuVar41 = (ulonglong *******)(in_R11[8] + 2);
          pppppuVar47 = in_R11[7][4];
          pppppuVar32 = in_R11[7][5];
          *(undefined8 *)((longlong)pppppppuVar57 + -8) = 0x1417383e6;
          pdb_141805d60(unaff_RBX + 0x38,pppppppuVar41,pppppuVar47,pppppuVar32);
          plVar18 = plRam0000000143cad8a8;
          plVar15 = plRam0000000143cad898;
          if (SBORROW8(0,(longlong)unaff_RBX[0x3a])) {
            ppppppuVar43 = unaff_RBX[0xe];
            unaff_R13 = (ulonglong *******)unaff_RBX[0x10];
            if (*_DAT_143ca4b08 < 3) {
              bVar22 = *(byte *)(plRam0000000143cad898 + 2);
              pppppppuVar41 = (ulonglong *******)(ulonglong)bVar22;
              if (2 < bVar22) {
                *(undefined8 *)((longlong)pppppppuVar57 + -8) = 0x1417391e4;
                uVar25 = pdb_142db8070(plRam0000000143cad898);
                pppppppuVar41 = (ulonglong *******)(ulonglong)uVar25;
                ppppppuVar43 = unaff_RBX[0xe];
                unaff_R13 = (ulonglong *******)unaff_RBX[0x10];
                if ((char)uVar25 != '\0') goto code_r0x000141738431;
                goto code_r0x0001417391fa;
              }
              if (bVar22 == 0) goto code_r0x0001417391fa;
code_r0x000141738431:
              lVar33 = *plVar15;
              *(undefined8 *)((longlong)pppppppuVar57 + -8) = 0x141738439;
              cVar23 = pdb_140dd7f60(lVar33);
              ppppppuVar43 = unaff_RBX[0xe];
              unaff_R13 = (ulonglong *******)unaff_RBX[0x10];
              if (cVar23 == '\0') goto code_r0x0001417391fa;
              lVar33 = *plVar15;
              ppppppuVar66 = *(ulonglong *******)(lVar33 + 0x38);
              if (ppppppuVar66 == (ulonglong ******)0x0) {
                *(undefined8 *)((longlong)pppppppuVar57 + -8) = 0x14173a073;
                pdb_142dc8110(&UNK_14332aff8,0x22,&UNK_14332b150);
                goto code_r0x00014173a218;
              }
              ppppppuVar38 = *(ulonglong *******)(lVar33 + 0x30);
              ppppppuVar37 = *(ulonglong *******)(lVar33 + 0x40);
              ppppppuVar10 = *(ulonglong *******)(lVar33 + 0x48);
              unaff_RBX[0x18] = ppppppuVar38;
              unaff_RBX[0x19] = ppppppuVar66;
              unaff_RBX[0x1a] = ppppppuVar37;
              unaff_RBX[0x1b] = ppppppuVar10;
              unaff_RBX[0x1c] = (ulonglong ******)0x0;
              unaff_RBX[0x1e] = (ulonglong ******)&UNK_14332b168;
              unaff_RBX[0x1f] = (ulonglong ******)0x1d;
              if (ppppppuVar66 == (ulonglong ******)0x1) {
                *(undefined8 *)((longlong)pppppppuVar57 + -8) = 0x14173a0af;
                pdb_142dc8110(&UNK_14332aff8,0x22,&UNK_14332b150);
                goto code_r0x00014173a218;
              }
              unaff_RBX[0x13] = ppppppuVar38;
              unaff_RBX[0x14] = ppppppuVar66;
              unaff_RBX[0x15] = ppppppuVar37;
              unaff_RBX[0x16] = ppppppuVar10;
              unaff_RBX[0x17] = (ulonglong ******)0x1;
              unaff_RBX[0x21] = (ulonglong ******)(ppppppuVar43[7] + 4);
              if (ppppppuVar66 < (ulonglong ******)0x3) {
                *(undefined8 *)((longlong)pppppppuVar57 + -8) = 0x14173a0eb;
                pdb_142dc8110(&UNK_14332aff8,0x22,&UNK_14332b150);
                goto code_r0x00014173a218;
              }
              unaff_RBX[0x2a] = ppppppuVar38;
              unaff_RBX[0x2b] = ppppppuVar66;
              unaff_RBX[0x2c] = ppppppuVar37;
              unaff_RBX[0x2d] = ppppppuVar10;
              unaff_RBX[0x2e] = (ulonglong ******)0x2;
              unaff_RBX[0x50] = (ulonglong ******)(unaff_RBX + 0x18);
              unaff_RBX[0x51] = (ulonglong ******)(unaff_RBX + 0x1e);
              unaff_RBX[0x52] = (ulonglong ******)&UNK_14332b058;
              unaff_RBX[0x53] = (ulonglong ******)(unaff_RBX + 0x13);
              unaff_RBX[0x54] = (ulonglong ******)(unaff_RBX + 0x21);
              unaff_RBX[0x55] = (ulonglong ******)&UNK_14332b078;
              pppppppuVar67 = unaff_RBX + 0x2a;
              unaff_RBX[0x56] = (ulonglong ******)pppppppuVar67;
              unaff_RBX[0x57] = ppppppuVar43 + 2;
              unaff_RBX[0x58] = (ulonglong ******)&UNK_14332b098;
              unaff_RBX[0x38] = (ulonglong ******)(unaff_RBX + 0x50);
              unaff_RBX[0x39] = (ulonglong ******)0x3;
              unaff_RBX[0x3a] = (ulonglong ******)(lVar33 + 0x30);
              *(undefined8 *)((longlong)pppppppuVar57 + -8) = 0x1417385c5;
              pdb_14173b8e0(unaff_RBX + 0x38);
code_r0x00014173941e:
              ppppppuVar43 = unaff_RBX[0xe];
              unaff_R13 = (ulonglong *******)unaff_RBX[0x10];
              pppppppuVar46 = pppppppuVar67;
            }
            else {
code_r0x0001417391fa:
              plVar15 = plRam0000000143cad898;
              pppppppuVar46 = pppppppuVar41;
              if ((*_DAT_143ca4ab0 == '\0') && (2 < *_DAT_143ca8e90)) {
                lVar33 = *plRam0000000143cad898;
                ppppppuVar43 = *(ulonglong *******)(lVar33 + 0x20);
                ppppppuVar66 = *(ulonglong *******)(lVar33 + 0x28);
                unaff_RBX[0xc5] = (ulonglong ******)0x3;
                unaff_RBX[0xc6] = ppppppuVar43;
                unaff_RBX[199] = ppppppuVar66;
                *(undefined8 *)((longlong)pppppppuVar57 + -8) = 0x141739248;
                pppppppuVar67 = (ulonglong *******)pdb_140f33290();
                pppppppuVar46 = unaff_RBX + 0xc5;
                ppppppuVar43 = pppppppuVar41[3];
                *(undefined8 *)((longlong)pppppppuVar57 + -8) = 0x14173925e;
                cVar23 = (*(code *)ppppppuVar43)(pppppppuVar67);
                ppppppuVar43 = unaff_RBX[0xe];
                unaff_R13 = (ulonglong *******)unaff_RBX[0x10];
                if (cVar23 != '\0') {
                  lVar7 = *plVar15;
                  ppppppuVar66 = *(ulonglong *******)(lVar7 + 0x38);
                  if (ppppppuVar66 == (ulonglong ******)0x0) {
                    *(undefined8 *)((longlong)pppppppuVar57 + -8) = 0x14173a18d;
                    pdb_142dc8110(&UNK_14332aff8,0x22,&UNK_14332b150);
                    goto code_r0x00014173a218;
                  }
                  ppppppuVar38 = *(ulonglong *******)(lVar7 + 0x30);
                  ppppppuVar37 = *(ulonglong *******)(lVar7 + 0x40);
                  ppppppuVar10 = *(ulonglong *******)(lVar7 + 0x48);
                  unaff_RBX[0x18] = ppppppuVar38;
                  unaff_RBX[0x19] = ppppppuVar66;
                  unaff_RBX[0x1a] = ppppppuVar37;
                  unaff_RBX[0x1b] = ppppppuVar10;
                  unaff_RBX[0x1c] = (ulonglong ******)0x0;
                  unaff_RBX[0x21] = (ulonglong ******)&UNK_14332b168;
                  unaff_RBX[0x22] = (ulonglong ******)0x1d;
                  if (ppppppuVar66 == (ulonglong ******)0x1) {
                    *(undefined8 *)((longlong)pppppppuVar57 + -8) = 0x14173a1c6;
                    pdb_142dc8110(&UNK_14332aff8,0x22,&UNK_14332b150);
                    goto code_r0x00014173a218;
                  }
                  unaff_RBX[0x13] = ppppppuVar38;
                  unaff_RBX[0x14] = ppppppuVar66;
                  unaff_RBX[0x15] = ppppppuVar37;
                  unaff_RBX[0x16] = ppppppuVar10;
                  unaff_RBX[0x17] = (ulonglong ******)0x1;
                  unaff_RBX[0x24] = (ulonglong ******)(ppppppuVar43[7] + 4);
                  if (ppppppuVar66 < (ulonglong ******)0x3) {
                    *(undefined8 *)((longlong)pppppppuVar57 + -8) = 0x14173a1fc;
                    pdb_142dc8110(&UNK_14332aff8,0x22,&UNK_14332b150);
                    goto code_r0x00014173a218;
                  }
                  unaff_RBX[0x2a] = ppppppuVar38;
                  unaff_RBX[0x2b] = ppppppuVar66;
                  unaff_RBX[0x2c] = ppppppuVar37;
                  unaff_RBX[0x2d] = ppppppuVar10;
                  unaff_RBX[0x2e] = (ulonglong ******)0x2;
                  unaff_RBX[0x50] = (ulonglong ******)(unaff_RBX + 0x18);
                  unaff_RBX[0x51] = (ulonglong ******)(unaff_RBX + 0x21);
                  unaff_RBX[0x52] = (ulonglong ******)&UNK_14332b058;
                  unaff_RBX[0x53] = (ulonglong ******)(unaff_RBX + 0x13);
                  unaff_RBX[0x54] = (ulonglong ******)(unaff_RBX + 0x24);
                  unaff_RBX[0x55] = (ulonglong ******)&UNK_14332b078;
                  unaff_RBX[0x56] = (ulonglong ******)(unaff_RBX + 0x2a);
                  unaff_RBX[0x57] = ppppppuVar43 + 2;
                  unaff_RBX[0x58] = (ulonglong ******)&UNK_14332b098;
                  unaff_RBX[0x1e] = (ulonglong ******)(unaff_RBX + 0x50);
                  unaff_RBX[0x1f] = (ulonglong ******)0x3;
                  unaff_RBX[0x20] = (ulonglong ******)(lVar7 + 0x30);
                  unaff_RBX[0x3a] = unaff_RBX[199];
                  unaff_RBX[0x38] = unaff_RBX[0xc5];
                  unaff_RBX[0x39] = unaff_RBX[0xc6];
                  *(ulonglong ********)((longlong)pppppppuVar57 + 0x20) = unaff_RBX + 0x1e;
                  *(undefined8 *)((longlong)pppppppuVar57 + -8) = 0x14173941d;
                  pdb_140dd7f80(lVar33,pppppppuVar67,pppppppuVar41,unaff_RBX + 0x38);
                  goto code_r0x00014173941e;
                }
              }
            }
            ppppuVar4 = ppppppuVar43[7][2];
            pppuVar8 = ppppppuVar43[7][3][5];
            *(undefined8 *)((longlong)pppppppuVar57 + -8) = 0x141739438;
            ppppppuVar43 = (ulonglong ******)(*(code *)pppuVar8)(ppppuVar4);
            unaff_RBX[0x29] = ppppppuVar43;
            unaff_RBX[0x28] = (ulonglong ******)pppppppuVar46;
            ppppppuVar43 = unaff_RBX[0xe];
            *(undefined1 *)((longlong)ppppppuVar43 + 0x49) = 1;
            ppppppuVar43 = (ulonglong ******)ppppppuVar43[8];
            LOCK();
            pppppuVar47 = *ppppppuVar43;
            *ppppppuVar43 = (ulonglong *****)((longlong)*ppppppuVar43 + 1);
            UNLOCK();
            if (*ppppppuVar43 == (ulonglong *****)0x0 ||
                SCARRY8((longlong)pppppuVar47,1) != (longlong)*ppppppuVar43 < 0)
            goto code_r0x00014173a218;
            unaff_RBX[0x10] = ppppppuVar43;
            unaff_RBX[0x13] = ppppppuVar43;
            *(undefined8 *)((longlong)pppppppuVar57 + -8) = 0x141739477;
            pdb_1417473a0(unaff_RBX + 0x2a);
            unaff_RBX[0x50] = (ulonglong ******)0x1;
            unaff_RBX[0x51] = (ulonglong ******)0x1;
            unaff_RBX[0x52] = unaff_RBX[0x2a];
            unaff_RBX[0x53] = unaff_RBX[0x2b];
            *(uint *)(unaff_RBX + 0x54) = *(uint *)(unaff_RBX + 0x2c);
            *(uint *)((longlong)unaff_RBX + 0x2a4) = *(uint *)((longlong)unaff_RBX + 0x164);
            *(uint *)(unaff_RBX + 0x55) = *(uint *)(unaff_RBX + 0x2d);
            *(uint *)((longlong)unaff_RBX + 0x2ac) = *(uint *)((longlong)unaff_RBX + 0x16c);
            *(uint *)(unaff_RBX + 0x56) = *(uint *)(unaff_RBX + 0x2e);
            *(uint *)((longlong)unaff_RBX + 0x2b4) = *(uint *)((longlong)unaff_RBX + 0x174);
            *(uint *)(unaff_RBX + 0x57) = *(uint *)(unaff_RBX + 0x2f);
            *(uint *)((longlong)unaff_RBX + 700) = *(uint *)((longlong)unaff_RBX + 0x17c);
            *(uint *)(unaff_RBX + 0x58) = *(uint *)(unaff_RBX + 0x30);
            *(uint *)((longlong)unaff_RBX + 0x2c4) = *(uint *)((longlong)unaff_RBX + 0x184);
            *(uint *)(unaff_RBX + 0x59) = *(uint *)(unaff_RBX + 0x31);
            *(uint *)((longlong)unaff_RBX + 0x2cc) = *(uint *)((longlong)unaff_RBX + 0x18c);
            unaff_RBX[0x5a] = unaff_RBX[0x32];
            unaff_RBX[0x5b] = unaff_RBX[0x33];
            unaff_RBX[0x5c] = unaff_RBX[0x34];
            unaff_RBX[0x5d] = unaff_RBX[0x35];
            *(undefined8 *)((longlong)pppppppuVar57 + -8) = 0x1417394e9;
            pdb_14007ee60();
            pppppuVar47 = (ulonglong *****)0x8;
            *(undefined8 *)((longlong)pppppppuVar57 + -8) = 0x1417394f8;
            pppppuVar32 = (ulonglong *****)pub_1406abab0(0x70,8);
            if (pppppuVar32 == (ulonglong *****)0x0) {
                    /* WARNING: Subroutine does not return */
              *(undefined8 *)((longlong)pppppppuVar57 + -8) = 0x141739612;
              pdb_142dc7e11(8,0x70);
            }
            ppppppuVar43 = unaff_RBX[0x5d];
            pppppuVar32[0xc] = (ulonglong ****)unaff_RBX[0x5c];
            pppppuVar32[0xd] = (ulonglong ****)ppppppuVar43;
            ppppppuVar43 = unaff_RBX[0x5b];
            pppppuVar32[10] = (ulonglong ****)unaff_RBX[0x5a];
            pppppuVar32[0xb] = (ulonglong ****)ppppppuVar43;
            ppppppuVar43 = unaff_RBX[0x59];
            pppppuVar32[8] = (ulonglong ****)unaff_RBX[0x58];
            pppppuVar32[9] = (ulonglong ****)ppppppuVar43;
            ppppppuVar43 = unaff_RBX[0x50];
            ppppppuVar66 = unaff_RBX[0x51];
            ppppppuVar38 = unaff_RBX[0x52];
            ppppppuVar37 = unaff_RBX[0x53];
            uVar25 = *(uint *)(unaff_RBX + 0x54);
            uVar77 = *(uint *)((longlong)unaff_RBX + 0x2a4);
            uVar73 = *(uint *)(unaff_RBX + 0x55);
            uVar74 = *(uint *)((longlong)unaff_RBX + 0x2ac);
            uVar75 = *(uint *)((longlong)unaff_RBX + 0x2b4);
            uVar76 = *(uint *)(unaff_RBX + 0x57);
            uVar24 = *(uint *)((longlong)unaff_RBX + 700);
            *(uint *)(pppppuVar32 + 6) = *(uint *)(unaff_RBX + 0x56);
            *(uint *)((longlong)pppppuVar32 + 0x34) = uVar75;
            *(uint *)(pppppuVar32 + 7) = uVar76;
            *(uint *)((longlong)pppppuVar32 + 0x3c) = uVar24;
            *(uint *)(pppppuVar32 + 4) = uVar25;
            *(uint *)((longlong)pppppuVar32 + 0x24) = uVar77;
            *(uint *)(pppppuVar32 + 5) = uVar73;
            *(uint *)((longlong)pppppuVar32 + 0x2c) = uVar74;
            pppppuVar32[2] = (ulonglong ****)ppppppuVar38;
            pppppuVar32[3] = (ulonglong ****)ppppppuVar37;
            *pppppuVar32 = (ulonglong ****)ppppppuVar43;
            pppppuVar32[1] = (ulonglong ****)ppppppuVar66;
            ppppppuVar43 = unaff_RBX[0xe];
            pppppuVar9 = *ppppppuVar43;
            ppppppuVar66 = unaff_RBX[0x29];
            if (pppppuVar9 != (ulonglong *****)0x0) {
              pppppuVar47 = ppppppuVar43[1];
              LOCK();
              ppppuVar4 = *pppppuVar9;
              *pppppuVar9 = (ulonglong ****)((longlong)*pppppuVar9 + 1);
              UNLOCK();
              if (*pppppuVar9 == (ulonglong ****)0x0 ||
                  SCARRY8((longlong)ppppuVar4,1) != (longlong)*pppppuVar9 < 0)
              goto code_r0x00014173a218;
            }
            *(undefined1 *)(ppppppuVar43 + 9) = 1;
            ppppppuVar43[0xf] = (ulonglong *****)unaff_RBX[0x10];
            ppppppuVar43[0x10] = pppppuVar32;
            ppppppuVar43[0x11] = pppppuVar9;
            ppppppuVar43[0x12] = pppppuVar47;
            LOCK();
            ppppuVar4 = *pppppuVar32;
            *pppppuVar32 = (ulonglong ****)((longlong)*pppppuVar32 + 1);
            UNLOCK();
            if (*pppppuVar32 == (ulonglong ****)0x0 ||
                SCARRY8((longlong)ppppuVar4,1) != (longlong)*pppppuVar32 < 0)
            goto code_r0x00014173a218;
            ppppppuVar43[10] = pppppuVar32;
            *(undefined1 *)((longlong)ppppppuVar43 + 0x49) = 0;
            *(undefined1 *)(ppppppuVar43 + 9) = 0;
            ppppppuVar38 = (ulonglong ******)ppppppuVar43[0xf];
            ppppppuVar37 = (ulonglong ******)ppppppuVar43[0x10];
            uVar25 = *(uint *)((longlong)ppppppuVar43 + 0x8c);
            uVar77 = *(uint *)(ppppppuVar43 + 0x12);
            uVar73 = *(uint *)((longlong)ppppppuVar43 + 0x94);
            *(uint *)(unaff_RBX + 0x52) = *(uint *)(ppppppuVar43 + 0x11);
            *(uint *)((longlong)unaff_RBX + 0x294) = uVar25;
            *(uint *)(unaff_RBX + 0x53) = uVar77;
            *(uint *)((longlong)unaff_RBX + 0x29c) = uVar73;
            unaff_RBX[0x50] = ppppppuVar38;
            unaff_RBX[0x51] = ppppppuVar37;
            pppppuVar47 = unaff_RBX[0x28][6];
            unaff_RBX[0x3e] = ppppppuVar66;
            unaff_RBX[0x3f] = unaff_RBX[0x28];
            pppppppuVar41 = unaff_RBX + 0x50;
            *(undefined8 *)((longlong)pppppppuVar57 + -8) = 0x1417395eb;
            ppppppuVar43 = (ulonglong ******)(*(code *)pppppuVar47)();
            ppppppuVar66 = unaff_RBX[0xe];
            ppppppuVar66[0xd] = (ulonglong *****)ppppppuVar43;
            ppppppuVar66[0xe] = (ulonglong *****)pppppppuVar41;
            goto code_r0x00014173743f;
          }
          ppppppuVar38 = unaff_RBX[0x38];
          ppppppuVar37 = unaff_RBX[0x39];
          unaff_RBX[0xcb] = ppppppuVar38;
          unaff_RBX[0xcc] = ppppppuVar37;
          unaff_RBX[0x26] = unaff_RBX[0x3c];
          unaff_RBX[0x24] = unaff_RBX[0x3a];
          unaff_RBX[0x25] = unaff_RBX[0x3b];
          if (*_DAT_143ca4b08 < 2) {
            bVar22 = *(byte *)(plRam0000000143cad8a8 + 2);
            pppppppuVar41 = (ulonglong *******)(ulonglong)bVar22;
            if (2 < bVar22) {
              unaff_RBX[0x11] = ppppppuVar38;
              *(undefined8 *)((longlong)pppppppuVar57 + -8) = 0x14173962b;
              uVar25 = pdb_142db8070(plRam0000000143cad8a8);
              pppppppuVar41 = (ulonglong *******)(ulonglong)uVar25;
              ppppppuVar38 = unaff_RBX[0x11];
              if ((char)uVar25 != '\0') goto code_r0x000141738635;
              goto code_r0x00014173963d;
            }
            if (bVar22 == 0) goto code_r0x00014173963d;
code_r0x000141738635:
            unaff_RBX[0x11] = ppppppuVar38;
            lVar33 = *plVar18;
            *(undefined8 *)((longlong)pppppppuVar57 + -8) = 0x141738644;
            cVar23 = pdb_140dd7f60(lVar33);
            ppppppuVar38 = unaff_RBX[0x11];
            if (cVar23 == '\0') goto code_r0x00014173963d;
            lVar33 = *plVar18;
            ppppppuVar43 = *(ulonglong *******)(lVar33 + 0x38);
            if (ppppppuVar43 == (ulonglong ******)0x0) {
              *(undefined8 *)((longlong)pppppppuVar57 + -8) = 0x14173a091;
              pdb_142dc8110(&UNK_14332aff8,0x22,&UNK_14332b118);
              goto code_r0x00014173a218;
            }
            ppppppuVar66 = *(ulonglong *******)(lVar33 + 0x30);
            ppppppuVar38 = *(ulonglong *******)(lVar33 + 0x40);
            ppppppuVar10 = *(ulonglong *******)(lVar33 + 0x48);
            unaff_RBX[0x18] = ppppppuVar66;
            unaff_RBX[0x19] = ppppppuVar43;
            unaff_RBX[0x1a] = ppppppuVar38;
            unaff_RBX[0x1b] = ppppppuVar10;
            unaff_RBX[0x1c] = (ulonglong ******)0x0;
            unaff_RBX[0x21] = (ulonglong ******)&UNK_14332b130;
            unaff_RBX[0x22] = (ulonglong ******)0x39;
            if (ppppppuVar43 == (ulonglong ******)0x1) {
              *(undefined8 *)((longlong)pppppppuVar57 + -8) = 0x14173a0cd;
              pdb_142dc8110(&UNK_14332aff8,0x22,&UNK_14332b118);
              goto code_r0x00014173a218;
            }
            unaff_RBX[0x13] = ppppppuVar66;
            unaff_RBX[0x14] = ppppppuVar43;
            unaff_RBX[0x15] = ppppppuVar38;
            unaff_RBX[0x16] = ppppppuVar10;
            unaff_RBX[0x17] = (ulonglong ******)0x1;
            unaff_RBX[0x44] = (ulonglong ******)(unaff_RBX[0xe][7] + 4);
            if (ppppppuVar43 < (ulonglong ******)0x3) {
              *(undefined8 *)((longlong)pppppppuVar57 + -8) = 0x14173a109;
              pdb_142dc8110(&UNK_14332aff8,0x22,&UNK_14332b118);
              goto code_r0x00014173a218;
            }
            unaff_RBX[0x2a] = ppppppuVar66;
            unaff_RBX[0x2b] = ppppppuVar43;
            unaff_RBX[0x2c] = ppppppuVar38;
            unaff_RBX[0x2d] = ppppppuVar10;
            unaff_RBX[0x2e] = (ulonglong ******)0x2;
            unaff_RBX[0x50] = (ulonglong ******)(unaff_RBX + 0x18);
            unaff_RBX[0x51] = (ulonglong ******)(unaff_RBX + 0x21);
            unaff_RBX[0x52] = (ulonglong ******)&UNK_14332b058;
            unaff_RBX[0x53] = (ulonglong ******)(unaff_RBX + 0x13);
            unaff_RBX[0x54] = (ulonglong ******)(unaff_RBX + 0x44);
            unaff_RBX[0x55] = (ulonglong ******)&UNK_14332b078;
            unaff_RBX[0x56] = (ulonglong ******)(unaff_RBX + 0x2a);
            unaff_RBX[0x57] = unaff_RBX[0xe] + 2;
            unaff_RBX[0x58] = (ulonglong ******)&UNK_14332b098;
            unaff_RBX[0x1e] = (ulonglong ******)(unaff_RBX + 0x50);
            unaff_RBX[0x1f] = (ulonglong ******)0x3;
            unaff_RBX[0x20] = (ulonglong ******)(lVar33 + 0x30);
            *(undefined8 *)((longlong)pppppppuVar57 + -8) = 0x1417387d0;
            pdb_14173b830(unaff_RBX + 0x1e);
code_r0x000141739867:
            ppppppuVar38 = unaff_RBX[0x11];
          }
          else {
code_r0x00014173963d:
            plVar15 = plRam0000000143cad8a8;
            if ((*_DAT_143ca4ab0 == '\0') && (3 < *_DAT_143ca8e90)) {
              unaff_RBX[0x11] = ppppppuVar38;
              param_1 = (ulonglong *******)*plRam0000000143cad8a8;
              ppppppuVar43 = param_1[4];
              ppppppuVar66 = param_1[5];
              unaff_RBX[0xc2] = (ulonglong ******)0x4;
              unaff_RBX[0xc3] = ppppppuVar43;
              unaff_RBX[0xc4] = ppppppuVar66;
              *(undefined8 *)((longlong)pppppppuVar57 + -8) = 0x141739691;
              uVar30 = pdb_140f33290();
              ppppppuVar43 = pppppppuVar41[3];
              *(undefined8 *)((longlong)pppppppuVar57 + -8) = 0x1417396a7;
              cVar23 = (*(code *)ppppppuVar43)(uVar30,unaff_RBX + 0xc2);
              ppppppuVar38 = unaff_RBX[0x11];
              if (cVar23 != '\0') {
                lVar33 = *plVar15;
                ppppppuVar43 = *(ulonglong *******)(lVar33 + 0x38);
                if (ppppppuVar43 == (ulonglong ******)0x0) {
                  *(undefined8 *)((longlong)pppppppuVar57 + -8) = 0x14173a1ab;
                  pdb_142dc8110(&UNK_14332aff8,0x22,&UNK_14332b118);
                  goto code_r0x00014173a218;
                }
                ppppppuVar66 = *(ulonglong *******)(lVar33 + 0x30);
                ppppppuVar38 = *(ulonglong *******)(lVar33 + 0x40);
                ppppppuVar10 = *(ulonglong *******)(lVar33 + 0x48);
                unaff_RBX[0x18] = ppppppuVar66;
                unaff_RBX[0x19] = ppppppuVar43;
                unaff_RBX[0x1a] = ppppppuVar38;
                unaff_RBX[0x1b] = ppppppuVar10;
                unaff_RBX[0x1c] = (ulonglong ******)0x0;
                unaff_RBX[0x44] = (ulonglong ******)&UNK_14332b130;
                unaff_RBX[0x45] = (ulonglong ******)0x39;
                if (ppppppuVar43 == (ulonglong ******)0x1) {
                  *(undefined8 *)((longlong)pppppppuVar57 + -8) = 0x14173a1e1;
                  pdb_142dc8110(&UNK_14332aff8,0x22,&UNK_14332b118);
                  goto code_r0x00014173a218;
                }
                unaff_RBX[0x13] = ppppppuVar66;
                unaff_RBX[0x14] = ppppppuVar43;
                unaff_RBX[0x15] = ppppppuVar38;
                unaff_RBX[0x16] = ppppppuVar10;
                unaff_RBX[0x17] = (ulonglong ******)0x1;
                unaff_RBX[0xbb] = (ulonglong ******)(unaff_RBX[0xe][7] + 4);
                if (ppppppuVar43 < (ulonglong ******)0x3) {
                  *(undefined8 *)((longlong)pppppppuVar57 + -8) = 0x14173a217;
                  pdb_142dc8110(&UNK_14332aff8,0x22,&UNK_14332b118);
                  goto code_r0x00014173a218;
                }
                unaff_RBX[0x2a] = ppppppuVar66;
                unaff_RBX[0x2b] = ppppppuVar43;
                unaff_RBX[0x2c] = ppppppuVar38;
                unaff_RBX[0x2d] = ppppppuVar10;
                unaff_RBX[0x2e] = (ulonglong ******)0x2;
                unaff_RBX[0x50] = (ulonglong ******)(unaff_RBX + 0x18);
                unaff_RBX[0x51] = (ulonglong ******)(unaff_RBX + 0x44);
                unaff_RBX[0x52] = (ulonglong ******)&UNK_14332b058;
                unaff_RBX[0x53] = (ulonglong ******)(unaff_RBX + 0x13);
                unaff_RBX[0x54] = (ulonglong ******)(unaff_RBX + 0xbb);
                unaff_RBX[0x55] = (ulonglong ******)&UNK_14332b078;
                unaff_RBX[0x56] = (ulonglong ******)(unaff_RBX + 0x2a);
                unaff_RBX[0x57] = unaff_RBX[0xe] + 2;
                unaff_RBX[0x58] = (ulonglong ******)&UNK_14332b098;
                unaff_RBX[0x21] = (ulonglong ******)(unaff_RBX + 0x50);
                unaff_RBX[0x22] = (ulonglong ******)0x3;
                unaff_RBX[0x23] = (ulonglong ******)(lVar33 + 0x30);
                unaff_RBX[0x20] = unaff_RBX[0xc4];
                unaff_RBX[0x1e] = unaff_RBX[0xc2];
                unaff_RBX[0x1f] = unaff_RBX[0xc3];
                *(ulonglong ********)((longlong)pppppppuVar57 + 0x20) = unaff_RBX + 0x21;
                *(undefined8 *)((longlong)pppppppuVar57 + -8) = 0x141739866;
                pdb_140dd7f80(param_1,uVar30,pppppppuVar41,unaff_RBX + 0x1e);
                goto code_r0x000141739867;
              }
            }
          }
          unaff_RBX[0x48] = unaff_RBX[0x26];
          unaff_RBX[0x46] = unaff_RBX[0x24];
          unaff_RBX[0x47] = unaff_RBX[0x25];
          ppppppuVar66 = (ulonglong ******)0x0;
          ppppppuVar43 = unaff_RBX[0xe];
          goto code_r0x000141739892;
        }
        in_R11[10] = in_R11[5];
        in_R11[0xb] = in_R11[6];
        plVar15 = plRam0000000143cad8a0;
        if (*_DAT_143ca4b08 < 2) {
          bVar22 = *(byte *)(plRam0000000143cad8a0 + 2);
          unaff_R12 = (ulonglong ******)(ulonglong)bVar22;
          if (2 < bVar22) {
            *(undefined8 *)((longlong)pppppppuVar57 + -8) = 0x141738a23;
            uVar25 = pdb_142db8070(plRam0000000143cad8a0);
            unaff_R12 = (ulonglong ******)(ulonglong)uVar25;
            in_R11 = (ulonglong *******)unaff_RBX[0xe];
            if ((char)uVar25 != '\0') goto code_r0x00014173803c;
            goto code_r0x000141738a32;
          }
          if (bVar22 == 0) goto code_r0x000141738a32;
code_r0x00014173803c:
          lVar33 = *plVar15;
          *(undefined8 *)((longlong)pppppppuVar57 + -8) = 0x141738044;
          cVar23 = pdb_140dd7f60(lVar33);
          in_R11 = (ulonglong *******)unaff_RBX[0xe];
          if (cVar23 == '\0') goto code_r0x000141738a32;
          lVar33 = *plVar15;
          ppppppuVar43 = *(ulonglong *******)(lVar33 + 0x38);
          if (ppppppuVar43 == (ulonglong ******)0x0) {
            *(undefined8 *)((longlong)pppppppuVar57 + -8) = 0x141739e8d;
            pdb_142dc8110(&UNK_14332aff8,0x22,&UNK_14332b0d8);
            goto code_r0x00014173a218;
          }
          ppppppuVar66 = *(ulonglong *******)(lVar33 + 0x30);
          ppppppuVar38 = *(ulonglong *******)(lVar33 + 0x40);
          ppppppuVar37 = *(ulonglong *******)(lVar33 + 0x48);
          unaff_RBX[0x18] = ppppppuVar66;
          unaff_RBX[0x19] = ppppppuVar43;
          unaff_RBX[0x1a] = ppppppuVar38;
          unaff_RBX[0x1b] = ppppppuVar37;
          unaff_RBX[0x1c] = (ulonglong ******)0x0;
          unaff_RBX[0x1e] = (ulonglong ******)&UNK_14332b0f0;
          unaff_RBX[0x1f] = (ulonglong ******)0x47;
          if (ppppppuVar43 == (ulonglong ******)0x1) {
            *(undefined8 *)((longlong)pppppppuVar57 + -8) = 0x141739ecd;
            pdb_142dc8110(&UNK_14332aff8,0x22,&UNK_14332b0d8);
            goto code_r0x00014173a218;
          }
          unaff_RBX[0x13] = ppppppuVar66;
          unaff_RBX[0x14] = ppppppuVar43;
          unaff_RBX[0x15] = ppppppuVar38;
          unaff_RBX[0x16] = ppppppuVar37;
          unaff_RBX[0x17] = (ulonglong ******)0x1;
          unaff_RBX[0x21] = in_R11[7] + 4;
          if (ppppppuVar43 < (ulonglong ******)0x3) {
            *(undefined8 *)((longlong)pppppppuVar57 + -8) = 0x141739f0d;
            pdb_142dc8110(&UNK_14332aff8,0x22,&UNK_14332b0d8);
            goto code_r0x00014173a218;
          }
          unaff_RBX[0x2a] = ppppppuVar66;
          unaff_RBX[0x2b] = ppppppuVar43;
          unaff_RBX[0x2c] = ppppppuVar38;
          unaff_RBX[0x2d] = ppppppuVar37;
          unaff_RBX[0x2e] = (ulonglong ******)0x2;
          unaff_RBX[0x50] = (ulonglong ******)(unaff_RBX + 0x18);
          unaff_RBX[0x51] = (ulonglong ******)(unaff_RBX + 0x1e);
          unaff_RBX[0x52] = (ulonglong ******)&UNK_14332b058;
          unaff_RBX[0x53] = (ulonglong ******)(unaff_RBX + 0x13);
          unaff_RBX[0x54] = (ulonglong ******)(unaff_RBX + 0x21);
          unaff_RBX[0x55] = (ulonglong ******)&UNK_14332b078;
          unaff_RBX[0x56] = (ulonglong ******)(unaff_RBX + 0x2a);
          unaff_RBX[0x57] = (ulonglong ******)(in_R11 + 2);
          unaff_RBX[0x58] = (ulonglong ******)&UNK_14332b098;
          unaff_RBX[0x38] = (ulonglong ******)(unaff_RBX + 0x50);
          unaff_RBX[0x39] = (ulonglong ******)0x3;
          unaff_RBX[0x3a] = (ulonglong ******)(lVar33 + 0x30);
          *(undefined8 *)((longlong)pppppppuVar57 + -8) = 0x1417381c9;
          pdb_14173b6d0(unaff_RBX + 0x38);
code_r0x000141738c4f:
          in_R11 = (ulonglong *******)unaff_RBX[0xe];
        }
        else {
code_r0x000141738a32:
          plVar15 = plRam0000000143cad8a0;
          if ((*_DAT_143ca4ab0 == '\0') && (3 < *_DAT_143ca8e90)) {
            unaff_R14 = (ulonglong *******)*plRam0000000143cad8a0;
            ppppppuVar43 = unaff_R14[4];
            ppppppuVar66 = unaff_R14[5];
            unaff_RBX[0xbf] = (ulonglong ******)0x4;
            unaff_RBX[0xc0] = ppppppuVar43;
            unaff_RBX[0xc1] = ppppppuVar66;
            *(undefined8 *)((longlong)pppppppuVar57 + -8) = 0x141738a80;
            unaff_R15 = (ulonglong *******)pdb_140f33290();
            pppppuVar47 = unaff_R12[3];
            *(undefined8 *)((longlong)pppppppuVar57 + -8) = 0x141738a96;
            cVar23 = (*(code *)pppppuVar47)(unaff_R15,unaff_RBX + 0xbf);
            in_R11 = (ulonglong *******)unaff_RBX[0xe];
            if (cVar23 != '\0') {
              lVar33 = *plVar15;
              ppppppuVar43 = *(ulonglong *******)(lVar33 + 0x38);
              if (ppppppuVar43 == (ulonglong ******)0x0) {
                *(undefined8 *)((longlong)pppppppuVar57 + -8) = 0x141739fb3;
                pdb_142dc8110(&UNK_14332aff8,0x22,&UNK_14332b0d8);
                goto code_r0x00014173a218;
              }
              ppppppuVar66 = *(ulonglong *******)(lVar33 + 0x30);
              ppppppuVar38 = *(ulonglong *******)(lVar33 + 0x40);
              ppppppuVar37 = *(ulonglong *******)(lVar33 + 0x48);
              unaff_RBX[0x18] = ppppppuVar66;
              unaff_RBX[0x19] = ppppppuVar43;
              unaff_RBX[0x1a] = ppppppuVar38;
              unaff_RBX[0x1b] = ppppppuVar37;
              unaff_RBX[0x1c] = (ulonglong ******)0x0;
              unaff_RBX[0x21] = (ulonglong ******)&UNK_14332b0f0;
              unaff_RBX[0x22] = (ulonglong ******)0x47;
              if (ppppppuVar43 == (ulonglong ******)0x1) {
                *(undefined8 *)((longlong)pppppppuVar57 + -8) = 0x141739ff3;
                pdb_142dc8110(&UNK_14332aff8,0x22,&UNK_14332b0d8);
                goto code_r0x00014173a218;
              }
              unaff_RBX[0x13] = ppppppuVar66;
              unaff_RBX[0x14] = ppppppuVar43;
              unaff_RBX[0x15] = ppppppuVar38;
              unaff_RBX[0x16] = ppppppuVar37;
              unaff_RBX[0x17] = (ulonglong ******)0x1;
              unaff_RBX[0x24] = in_R11[7] + 4;
              if (ppppppuVar43 < (ulonglong ******)0x3) {
                *(undefined8 *)((longlong)pppppppuVar57 + -8) = 0x14173a033;
                pdb_142dc8110(&UNK_14332aff8,0x22,&UNK_14332b0d8);
                goto code_r0x00014173a218;
              }
              unaff_RBX[0x2a] = ppppppuVar66;
              unaff_RBX[0x2b] = ppppppuVar43;
              unaff_RBX[0x2c] = ppppppuVar38;
              unaff_RBX[0x2d] = ppppppuVar37;
              unaff_RBX[0x2e] = (ulonglong ******)0x2;
              unaff_RBX[0x50] = (ulonglong ******)(unaff_RBX + 0x18);
              unaff_RBX[0x51] = (ulonglong ******)(unaff_RBX + 0x21);
              unaff_RBX[0x52] = (ulonglong ******)&UNK_14332b058;
              unaff_RBX[0x53] = (ulonglong ******)(unaff_RBX + 0x13);
              unaff_RBX[0x54] = (ulonglong ******)(unaff_RBX + 0x24);
              unaff_RBX[0x55] = (ulonglong ******)&UNK_14332b078;
              unaff_RBX[0x56] = (ulonglong ******)(unaff_RBX + 0x2a);
              unaff_RBX[0x57] = (ulonglong ******)(in_R11 + 2);
              unaff_RBX[0x58] = (ulonglong ******)&UNK_14332b098;
              unaff_RBX[0x1e] = (ulonglong ******)(unaff_RBX + 0x50);
              unaff_RBX[0x1f] = (ulonglong ******)0x3;
              unaff_RBX[0x20] = (ulonglong ******)(lVar33 + 0x30);
              pppppppuVar54 = pppppppuVar57;
code_r0x000141738c0f:
              pppppppuVar41 = unaff_R14;
              unaff_RBX[0x3a] = unaff_RBX[0xc1];
              unaff_RBX[0x38] = unaff_RBX[0xbf];
              unaff_RBX[0x39] = unaff_RBX[0xc0];
              *(ulonglong ********)((longlong)pppppppuVar54 + 0x20) = unaff_RBX + 0x1e;
              param_4 = unaff_RBX + 0x38;
              pppppppuVar42 = pppppppuVar54;
code_r0x000141738c43:
              pppppppuVar57 = pppppppuVar42;
              *(undefined8 *)((longlong)pppppppuVar57 + -8) = 0x141738c4e;
              pdb_140dd7f80(pppppppuVar41,unaff_R15,unaff_R12,param_4);
              goto code_r0x000141738c4f;
            }
          }
        }
code_r0x000141738c53:
        in_R11[0xc] = (ulonglong ******)(in_R11 + 10);
        in_R11[0xd] = (ulonglong ******)0x0;
        goto code_r0x000141738c63;
      }
      ppppppuVar43 = in_R11[6];
      unaff_RBX[0x24] = in_R11[5];
      unaff_RBX[0x25] = ppppppuVar43;
      if (*_DAT_143ca4b08 < 2) {
        bVar22 = *(byte *)(plRam0000000143cad8b0 + 2);
        unaff_R12 = (ulonglong ******)(ulonglong)bVar22;
        if (2 < bVar22) {
          *(byte *)((longlong)unaff_RBX + 0x6b) = 1;
          *(undefined8 *)((longlong)pppppppuVar57 + -8) = 0x141738e3f;
          uVar25 = pdb_142db8070(plRam0000000143cad8b0);
          unaff_R12 = (ulonglong ******)(ulonglong)uVar25;
          in_R11 = (ulonglong *******)unaff_RBX[0xe];
          if ((char)uVar25 != '\0') goto code_r0x00014173820d;
          goto code_r0x000141738e4e;
        }
        if (bVar22 == 0) goto code_r0x000141738e4e;
code_r0x00014173820d:
        lVar33 = *plVar15;
        *(byte *)((longlong)unaff_RBX + 0x6b) = 1;
        *(undefined8 *)((longlong)pppppppuVar57 + -8) = 0x141738219;
        cVar23 = pdb_140dd7f60(lVar33);
        in_R11 = (ulonglong *******)unaff_RBX[0xe];
        if (cVar23 == '\0') goto code_r0x000141738e4e;
        lVar33 = *plVar15;
        ppppppuVar43 = *(ulonglong *******)(lVar33 + 0x38);
        if (ppppppuVar43 == (ulonglong ******)0x0) {
          *(byte *)((longlong)unaff_RBX + 0x6b) = 1;
          *(undefined8 *)((longlong)pppppppuVar57 + -8) = 0x141739eaf;
          pdb_142dc8110(&UNK_14332aff8,0x22,&UNK_14332b020);
          goto code_r0x00014173a218;
        }
        ppppppuVar66 = *(ulonglong *******)(lVar33 + 0x30);
        ppppppuVar38 = *(ulonglong *******)(lVar33 + 0x40);
        ppppppuVar37 = *(ulonglong *******)(lVar33 + 0x48);
        unaff_RBX[0x18] = ppppppuVar66;
        unaff_RBX[0x19] = ppppppuVar43;
        unaff_RBX[0x1a] = ppppppuVar38;
        unaff_RBX[0x1b] = ppppppuVar37;
        unaff_RBX[0x1c] = (ulonglong ******)0x0;
        unaff_RBX[0x1e] = (ulonglong ******)&UNK_14332b038;
        unaff_RBX[0x1f] = (ulonglong ******)0x33;
        if (ppppppuVar43 == (ulonglong ******)0x1) {
          *(byte *)((longlong)unaff_RBX + 0x6b) = 1;
          *(undefined8 *)((longlong)pppppppuVar57 + -8) = 0x141739eef;
          pdb_142dc8110(&UNK_14332aff8,0x22,&UNK_14332b020);
          goto code_r0x00014173a218;
        }
        unaff_RBX[0x13] = ppppppuVar66;
        unaff_RBX[0x14] = ppppppuVar43;
        unaff_RBX[0x15] = ppppppuVar38;
        unaff_RBX[0x16] = ppppppuVar37;
        unaff_RBX[0x17] = (ulonglong ******)0x1;
        unaff_RBX[0x21] = in_R11[7] + 4;
        if (ppppppuVar43 < (ulonglong ******)0x3) {
          *(byte *)((longlong)unaff_RBX + 0x6b) = 1;
          *(undefined8 *)((longlong)pppppppuVar57 + -8) = 0x141739f2f;
          pdb_142dc8110(&UNK_14332aff8,0x22,&UNK_14332b020);
          goto code_r0x00014173a218;
        }
        unaff_RBX[0x2a] = ppppppuVar66;
        unaff_RBX[0x2b] = ppppppuVar43;
        unaff_RBX[0x2c] = ppppppuVar38;
        unaff_RBX[0x2d] = ppppppuVar37;
        unaff_RBX[0x2e] = (ulonglong ******)0x2;
        unaff_RBX[0x50] = (ulonglong ******)(unaff_RBX + 0x18);
        unaff_RBX[0x51] = (ulonglong ******)(unaff_RBX + 0x1e);
        unaff_RBX[0x52] = (ulonglong ******)&UNK_14332b058;
        unaff_RBX[0x53] = (ulonglong ******)(unaff_RBX + 0x13);
        unaff_RBX[0x54] = (ulonglong ******)(unaff_RBX + 0x21);
        unaff_RBX[0x55] = (ulonglong ******)&UNK_14332b078;
        unaff_RBX[0x56] = (ulonglong ******)(unaff_RBX + 0x2a);
        unaff_RBX[0x57] = (ulonglong ******)(in_R11 + 2);
        unaff_RBX[0x58] = (ulonglong ******)&UNK_14332b098;
        unaff_RBX[0x38] = (ulonglong ******)(unaff_RBX + 0x50);
        unaff_RBX[0x39] = (ulonglong ******)0x3;
        unaff_RBX[0x3a] = (ulonglong ******)(lVar33 + 0x30);
        *(byte *)((longlong)unaff_RBX + 0x6b) = 1;
        *(undefined8 *)((longlong)pppppppuVar57 + -8) = 0x1417383a2;
        pdb_14173b620(unaff_RBX + 0x38);
code_r0x000141739077:
        in_R11 = (ulonglong *******)unaff_RBX[0xe];
      }
      else {
code_r0x000141738e4e:
        plVar15 = plRam0000000143cad8b0;
        if ((*_DAT_143ca4ab0 == '\0') && (3 < *_DAT_143ca8e90)) {
          lVar33 = *plRam0000000143cad8b0;
          ppppppuVar43 = *(ulonglong *******)(lVar33 + 0x20);
          ppppppuVar66 = *(ulonglong *******)(lVar33 + 0x28);
          unaff_RBX[0xbc] = (ulonglong ******)0x4;
          unaff_RBX[0xbd] = ppppppuVar43;
          unaff_RBX[0xbe] = ppppppuVar66;
          *(byte *)((longlong)unaff_RBX + 0x6b) = 1;
          *(undefined8 *)((longlong)pppppppuVar57 + -8) = 0x141738e9f;
          uVar30 = pdb_140f33290();
          pppppuVar47 = unaff_R12[3];
          *(byte *)((longlong)unaff_RBX + 0x6b) = 1;
          *(undefined8 *)((longlong)pppppppuVar57 + -8) = 0x141738eba;
          cVar23 = (*(code *)pppppuVar47)(uVar30,unaff_RBX + 0xbc);
          in_R11 = (ulonglong *******)unaff_RBX[0xe];
          if (cVar23 != '\0') {
            lVar7 = *plVar15;
            ppppppuVar43 = *(ulonglong *******)(lVar7 + 0x38);
            if (ppppppuVar43 == (ulonglong ******)0x0) {
              *(byte *)((longlong)unaff_RBX + 0x6b) = 1;
              *(undefined8 *)((longlong)pppppppuVar57 + -8) = 0x141739fd5;
              pdb_142dc8110(&UNK_14332aff8,0x22,&UNK_14332b020);
code_r0x00014173a218:
                    /* WARNING: Does not return */
              pcVar12 = (code *)invalidInstructionException();
              (*pcVar12)();
            }
            ppppppuVar66 = *(ulonglong *******)(lVar7 + 0x30);
            ppppppuVar38 = *(ulonglong *******)(lVar7 + 0x40);
            ppppppuVar37 = *(ulonglong *******)(lVar7 + 0x48);
            unaff_RBX[0x18] = ppppppuVar66;
            unaff_RBX[0x19] = ppppppuVar43;
            unaff_RBX[0x1a] = ppppppuVar38;
            unaff_RBX[0x1b] = ppppppuVar37;
            unaff_RBX[0x1c] = (ulonglong ******)0x0;
            unaff_RBX[0x21] = (ulonglong ******)&UNK_14332b038;
            unaff_RBX[0x22] = (ulonglong ******)0x33;
            if (ppppppuVar43 == (ulonglong ******)0x1) {
              *(byte *)((longlong)unaff_RBX + 0x6b) = 1;
              *(undefined8 *)((longlong)pppppppuVar57 + -8) = 0x14173a015;
              pdb_142dc8110(&UNK_14332aff8,0x22,&UNK_14332b020);
              goto code_r0x00014173a218;
            }
            unaff_RBX[0x13] = ppppppuVar66;
            unaff_RBX[0x14] = ppppppuVar43;
            unaff_RBX[0x15] = ppppppuVar38;
            unaff_RBX[0x16] = ppppppuVar37;
            unaff_RBX[0x17] = (ulonglong ******)0x1;
            unaff_RBX[0x46] = in_R11[7] + 4;
            if (ppppppuVar43 < (ulonglong ******)0x3) {
              *(byte *)((longlong)unaff_RBX + 0x6b) = 1;
              *(undefined8 *)((longlong)pppppppuVar57 + -8) = 0x14173a055;
              pdb_142dc8110(&UNK_14332aff8,0x22,&UNK_14332b020);
              goto code_r0x00014173a218;
            }
            unaff_RBX[0x2a] = ppppppuVar66;
            unaff_RBX[0x2b] = ppppppuVar43;
            unaff_RBX[0x2c] = ppppppuVar38;
            unaff_RBX[0x2d] = ppppppuVar37;
            unaff_RBX[0x2e] = (ulonglong ******)0x2;
            unaff_RBX[0x50] = (ulonglong ******)(unaff_RBX + 0x18);
            unaff_RBX[0x51] = (ulonglong ******)(unaff_RBX + 0x21);
            unaff_RBX[0x52] = (ulonglong ******)&UNK_14332b058;
            unaff_RBX[0x53] = (ulonglong ******)(unaff_RBX + 0x13);
            unaff_RBX[0x54] = (ulonglong ******)(unaff_RBX + 0x46);
            unaff_RBX[0x55] = (ulonglong ******)&UNK_14332b078;
            unaff_RBX[0x56] = (ulonglong ******)(unaff_RBX + 0x2a);
            unaff_RBX[0x57] = (ulonglong ******)(in_R11 + 2);
            unaff_RBX[0x58] = (ulonglong ******)&UNK_14332b098;
            unaff_RBX[0x1e] = (ulonglong ******)(unaff_RBX + 0x50);
            unaff_RBX[0x1f] = (ulonglong ******)0x3;
            unaff_RBX[0x20] = (ulonglong ******)(lVar7 + 0x30);
            unaff_RBX[0x3a] = unaff_RBX[0xbe];
            unaff_RBX[0x38] = unaff_RBX[0xbc];
            unaff_RBX[0x39] = unaff_RBX[0xbd];
            *(byte *)((longlong)unaff_RBX + 0x6b) = 1;
            *(ulonglong ********)((longlong)pppppppuVar57 + 0x20) = unaff_RBX + 0x1e;
            *(undefined8 *)((longlong)pppppppuVar57 + -8) = 0x141739076;
            pdb_140dd7f80(lVar33,uVar30,unaff_R12,unaff_RBX + 0x38);
            goto code_r0x000141739077;
          }
        }
      }
      ppppppuVar43 = in_R11[8];
      unaff_RBX[0x50] = _DAT_14332b4f8;
      unaff_RBX[0x51] = _UNK_14332b500;
      pppppuVar47 = in_R11[7][4];
      pppppuVar32 = in_R11[7][5];
      *(byte *)((longlong)unaff_RBX + 0x6b) = 1;
      *(ulonglong ********)((longlong)pppppppuVar57 + 0x20) = unaff_RBX + 0x24;
      *(undefined8 *)((longlong)pppppppuVar57 + -8) = 0x1417390bb;
      pdb_141c2b710(ppppppuVar43 + 2,unaff_RBX + 0x50,pppppuVar47,pppppuVar32);
      ppppppuVar43 = unaff_RBX[0x24];
      ppppppuVar66 = unaff_RBX[0x25];
      unaff_RBX[0x2a] = ppppppuVar43;
      unaff_RBX[0x2b] = ppppppuVar66;
      pppppuVar47 = ppppppuVar66[2];
      unaff_RBX[0x10] = ppppppuVar43;
      pppppuVar32 = ppppppuVar66[3];
      *(undefined8 *)((longlong)pppppppuVar57 + -8) = 0x1417390fc;
      (*(code *)pppppuVar32)
                (unaff_RBX + 0x50,
                 (longlong)ppppppuVar43 + ((longlong)pppppuVar47 - 1U & 0xfffffffffffffff0) + 0x10);
      auVar71[0] = -(*(byte *)(unaff_RBX + 0x50) == DAT_14332a670);
      auVar71[1] = -(*(byte *)((longlong)unaff_RBX + 0x281) == UNK_14332a671);
      auVar71[2] = -(*(byte *)((longlong)unaff_RBX + 0x282) == UNK_14332a672);
      auVar71[3] = -(*(byte *)((longlong)unaff_RBX + 0x283) == UNK_14332a673);
      auVar71[4] = -(*(byte *)((longlong)unaff_RBX + 0x284) == UNK_14332a674);
      auVar71[5] = -(*(byte *)((longlong)unaff_RBX + 0x285) == UNK_14332a675);
      auVar71[6] = -(*(byte *)((longlong)unaff_RBX + 0x286) == UNK_14332a676);
      auVar71[7] = -(*(byte *)((longlong)unaff_RBX + 0x287) == UNK_14332a677);
      auVar71[8] = -(*(byte *)(unaff_RBX + 0x51) == UNK_14332a678);
      auVar71[9] = -(*(byte *)((longlong)unaff_RBX + 0x289) == UNK_14332a679);
      auVar71[10] = -(*(byte *)((longlong)unaff_RBX + 0x28a) == UNK_14332a67a);
      auVar71[0xb] = -(*(byte *)((longlong)unaff_RBX + 0x28b) == UNK_14332a67b);
      auVar71[0xc] = -(*(byte *)((longlong)unaff_RBX + 0x28c) == UNK_14332a67c);
      auVar71[0xd] = -(*(byte *)((longlong)unaff_RBX + 0x28d) == UNK_14332a67d);
      auVar71[0xe] = -(*(byte *)((longlong)unaff_RBX + 0x28e) == UNK_14332a67e);
      auVar71[0xf] = -(*(byte *)((longlong)unaff_RBX + 0x28f) == UNK_14332a67f);
      if ((ushort)((ushort)(SUB161(auVar71 >> 7,0) & 1) |
                   (ushort)(SUB161(auVar71 >> 0xf,0) & 1) << 1 |
                   (ushort)(SUB161(auVar71 >> 0x17,0) & 1) << 2 |
                   (ushort)(SUB161(auVar71 >> 0x1f,0) & 1) << 3 |
                   (ushort)(SUB161(auVar71 >> 0x27,0) & 1) << 4 |
                   (ushort)(SUB161(auVar71 >> 0x2f,0) & 1) << 5 |
                   (ushort)(SUB161(auVar71 >> 0x37,0) & 1) << 6 |
                   (ushort)(SUB161(auVar71 >> 0x3f,0) & 1) << 7 |
                   (ushort)(SUB161(auVar71 >> 0x47,0) & 1) << 8 |
                   (ushort)(SUB161(auVar71 >> 0x4f,0) & 1) << 9 |
                   (ushort)(SUB161(auVar71 >> 0x57,0) & 1) << 10 |
                   (ushort)(SUB161(auVar71 >> 0x5f,0) & 1) << 0xb |
                   (ushort)(SUB161(auVar71 >> 0x67,0) & 1) << 0xc |
                   (ushort)(SUB161(auVar71 >> 0x6f,0) & 1) << 0xd |
                   (ushort)(SUB161(auVar71 >> 0x77,0) & 1) << 0xe |
                  (ushort)(auVar71[0xf] >> 7) << 0xf) != 0xffff) {
        unaff_RBX[0x50] = unaff_RBX[0x10];
        unaff_RBX[0x51] = ppppppuVar66;
        *(undefined **)((longlong)pppppppuVar57 + 0x20) = &UNK_14332b0c0;
                    /* WARNING: Subroutine does not return */
        *(undefined8 *)((longlong)pppppppuVar57 + -8) = 0x1417391d2;
        pdb_142dc8170(&UNK_14332b0b8,8,unaff_RBX + 0x50,&UNK_14332b870);
      }
      unaff_RBX[0x4d] = unaff_RBX[0x10];
      unaff_RBX[0x4c] = (ulonglong ******)0x0;
      pppppuVar47 = unaff_RBX[0xe][7];
      LOCK();
      *pppppuVar47 = (ulonglong ****)((longlong)*pppppuVar47 - 1);
      ppppuVar4 = *pppppuVar47;
      UNLOCK();
joined_r0x000141738e0f:
      if (ppppuVar4 == (ulonglong ****)0x0) {
        ppppppuVar43 = unaff_RBX[0xe];
        *(undefined8 *)((longlong)pppppppuVar57 + -8) = 0x14173914c;
        pdb_140dd76c0(ppppppuVar43 + 7);
      }
      pppppuVar47 = unaff_RBX[0xe][8];
      LOCK();
      *pppppuVar47 = (ulonglong ****)((longlong)*pppppuVar47 + -1);
      UNLOCK();
      if (*pppppuVar47 == (ulonglong ****)0x0) {
        ppppppuVar43 = unaff_RBX[0xe];
        *(undefined8 *)((longlong)pppppppuVar57 + -8) = 0x141739168;
        pdb_140dd78e0(ppppppuVar43 + 8);
      }
      pppppuVar47 = *unaff_RBX[0xe];
      if (pppppuVar47 != (ulonglong *****)0x0) {
        LOCK();
        *pppppuVar47 = (ulonglong ****)((longlong)*pppppuVar47 + -1);
        UNLOCK();
        if (*pppppuVar47 == (ulonglong ****)0x0) {
          ppppppuVar43 = unaff_RBX[0xe];
          *(undefined8 *)((longlong)pppppppuVar57 + -8) = 0x14173918c;
          pdb_140c7a240(ppppppuVar43);
        }
      }
      break;
    case (ulonglong *******)0x141737437:
      ppppppuVar43 = in_R11[0xd];
      pppppppuVar41 = (ulonglong *******)in_R11[0xe];
code_r0x00014173743f:
      ppppppuVar66 = pppppppuVar41[3];
      *(undefined8 *)((longlong)pppppppuVar57 + -8) = 0x14173744d;
      (*(code *)ppppppuVar66)(unaff_RBX + 0x50,ppppppuVar43,param_1);
      ppppppuVar43 = unaff_RBX[0x50];
      if (ppppppuVar43 == (ulonglong ******)0x2) {
        *unaff_R13 = (ulonglong ******)0x1;
        uVar21 = 4;
        pppppppuVar27 = unaff_R13;
        goto code_r0x000141739e30;
      }
      ppppppuVar66 = unaff_RBX[0x51];
      pauVar45 = (undefined1 (*) [16])unaff_RBX[0x52];
      unaff_RBX[0x10] = (ulonglong ******)unaff_RBX[0xe][0xd];
      ppppppuVar38 = (ulonglong ******)unaff_RBX[0xe][0xe];
      unaff_RBX[0x11] = ppppppuVar38;
      pppppuVar47 = *ppppppuVar38;
      if (pppppuVar47 != (ulonglong *****)0x0) {
        ppppppuVar38 = unaff_RBX[0x10];
        *(undefined8 *)((longlong)pppppppuVar57 + -8) = 0x1417374a3;
        (*(code *)pppppuVar47)(ppppppuVar38);
      }
      ppppppuVar38 = unaff_RBX[0x10];
      arg1 = (undefined1 (*) [16])unaff_RBX[0x11][1];
      if (arg1 != (undefined1 (*) [16])0x0) {
        pppppuVar47 = unaff_RBX[0x11][2];
        *(undefined8 *)((longlong)pppppppuVar57 + -8) = 0x1417374c4;
        pub_1406abac0((byte *)ppppppuVar38,(ulonglong)arg1,(ulonglong)pppppuVar47);
      }
      ppppppuVar38 = unaff_RBX[0xe];
      if ((int)ppppppuVar43 == 1) {
        ppppppuVar43 = (ulonglong ******)ppppppuVar38[2];
        ppppppuVar37 = (ulonglong ******)ppppppuVar38[3];
        unaff_RBX[0x3e] = unaff_RBX[0x29];
        unaff_RBX[0x3f] = unaff_RBX[0x28];
        *(undefined8 *)((longlong)pppppppuVar57 + -8) = 0x1417374fd;
        pauVar28 = (undefined1 (*) [16])pdb_140c799b0(ppppppuVar66);
        unaff_RBX[0x16] = (ulonglong ******)pauVar45;
        ppppppuVar38 = unaff_RBX[0xe];
        arg1 = pauVar45;
        pauVar45 = pauVar28;
        ppppppuVar66 = ppppppuVar37;
      }
      else {
        ppppppuVar43 = (ulonglong ******)0x0;
      }
      unaff_RBX[0x13] = ppppppuVar43;
      unaff_RBX[0x14] = ppppppuVar66;
      unaff_RBX[0x15] = (ulonglong ******)pauVar45;
      pppppuVar47 = ppppppuVar38[10];
      ppppppuVar43 = (ulonglong ******)(pppppuVar47 + 2);
      LOCK();
      bVar68 = *(char *)(pppppuVar47 + 2) == '\0';
      if (bVar68) {
        *(char *)(pppppuVar47 + 2) = '\x01';
      }
      UNLOCK();
      if (!bVar68) {
        *(byte *)((longlong)unaff_RBX + 0x7d) = 1;
        *(undefined8 *)((longlong)pppppppuVar57 + -8) = 0x14173885c;
        pdb_142dc6be0(ppppppuVar43);
      }
      pppppppuVar41 = _DAT_143ca8f38;
      if (((ulonglong)*_DAT_143ca8f38 & 0x7fffffffffffffff) == 0) {
        bVar22 = 0;
        cVar23 = *(char *)((longlong)pppppuVar47 + 0x11);
        ppppuVar4 = _UNK_14332bb30;
        ppppuVar6 = _UNK_14332bb38;
      }
      else {
        *(byte *)((longlong)unaff_RBX + 0x7d) = 1;
        *(undefined8 *)((longlong)pppppppuVar57 + -8) = 0x14173886b;
        bVar22 = pdb_142dc79e0();
        bVar22 = bVar22 ^ 1;
        cVar23 = *(char *)((longlong)pppppuVar47 + 0x11);
        ppppuVar4 = _UNK_14332bb30;
        ppppuVar6 = _UNK_14332bb38;
      }
      _UNK_14332bb30 = ppppuVar4;
      _UNK_14332bb38 = ppppuVar6;
      if (cVar23 != '\0') {
        unaff_RBX[0x50] = ppppppuVar43;
        *(byte *)(unaff_RBX + 0x51) = bVar22;
        *(undefined **)((longlong)pppppppuVar57 + 0x20) = &UNK_14332b190;
                    /* WARNING: Subroutine does not return */
        *(undefined8 *)((longlong)pppppppuVar57 + -8) = 0x1417388b2;
        pdb_142dc8170(&UNK_14332b8d0,0x2b,unaff_RBX + 0x50,&UNK_14332b920);
      }
      ppppppuVar66 = (ulonglong ******)pppppuVar47[3];
      ppppppuVar38 = (ulonglong ******)pppppuVar47[4];
      uVar25 = *(uint *)((longlong)pppppuVar47 + 0x2c);
      uVar77 = *(uint *)(pppppuVar47 + 6);
      uVar73 = *(uint *)((longlong)pppppuVar47 + 0x34);
      *(uint *)(unaff_RBX + 0x2c) = *(uint *)(pppppuVar47 + 5);
      *(uint *)((longlong)unaff_RBX + 0x164) = uVar25;
      *(uint *)(unaff_RBX + 0x2d) = uVar77;
      *(uint *)((longlong)unaff_RBX + 0x16c) = uVar73;
      unaff_RBX[0x2a] = ppppppuVar66;
      unaff_RBX[0x2b] = ppppppuVar38;
      pppppuVar47[3] = ppppuVar4;
      pppppuVar47[4] = ppppuVar6;
      ppppuVar17 = _UNK_14332bb48;
      ppppuVar16 = _UNK_14332bb40;
      pppppuVar47[5] = _UNK_14332bb40;
      pppppuVar47[6] = ppppuVar17;
      if ((bVar22 == 0) && (((ulonglong)*pppppppuVar41 & 0x7fffffffffffffff) != 0)) {
        *(byte *)((longlong)unaff_RBX + 0x7b) = 1;
        *(undefined8 *)((longlong)pppppppuVar57 + -8) = 0x141738992;
        cVar23 = pdb_142dc79e0();
        if (cVar23 == '\0') {
          *(undefined1 *)((longlong)pppppuVar47 + 0x11) = 1;
        }
      }
      LOCK();
      cVar23 = *(char *)ppppppuVar43;
      *(char *)ppppppuVar43 = '\0';
      UNLOCK();
      if (cVar23 == '\x02') {
        *(byte *)((longlong)unaff_RBX + 0x7b) = 1;
        *(undefined8 *)((longlong)pppppppuVar57 + -8) = 0x1417388c4;
        pdb_142dc6ca0(ppppppuVar43);
      }
      ppppppuVar66 = unaff_RBX[0xe];
      pppppuVar47 = ppppppuVar66[10];
      ppppppuVar43 = (ulonglong ******)(pppppuVar47 + 7);
      LOCK();
      bVar68 = *(char *)(pppppuVar47 + 7) == '\0';
      if (bVar68) {
        *(char *)(pppppuVar47 + 7) = '\x01';
      }
      UNLOCK();
      if (!bVar68) {
        *(byte *)((longlong)unaff_RBX + 0x7b) = 1;
        *(undefined8 *)((longlong)pppppppuVar57 + -8) = 0x1417388d6;
        pdb_142dc6be0(ppppppuVar43);
      }
      if (((ulonglong)*pppppppuVar41 & 0x7fffffffffffffff) == 0) {
        uVar25 = 0;
        cVar23 = *(char *)((longlong)pppppuVar47 + 0x39);
      }
      else {
        *(byte *)((longlong)unaff_RBX + 0x7b) = 1;
        *(undefined8 *)((longlong)pppppppuVar57 + -8) = 0x1417388e5;
        uVar25 = pdb_142dc79e0();
        uVar25 = uVar25 ^ 1;
        cVar23 = *(char *)((longlong)pppppuVar47 + 0x39);
      }
      if (cVar23 != '\0') {
        unaff_RBX[0x50] = ppppppuVar43;
        *(byte *)(unaff_RBX + 0x51) = (byte)uVar25;
        *(undefined **)((longlong)pppppppuVar57 + 0x20) = &UNK_14332b1a8;
                    /* WARNING: Subroutine does not return */
        *(undefined8 *)((longlong)pppppppuVar57 + -8) = 0x14173892c;
        pdb_142dc8170(&UNK_14332b8d0,0x2b,unaff_RBX + 0x50,&UNK_14332b940);
      }
      *(uint *)(unaff_RBX + 0x11) = uVar25;
      unaff_RBX[0x10] = ppppppuVar43;
      *(undefined8 *)((longlong)pppppppuVar57 + -8) = 0x141737633;
      puVar29 = (ulonglong *)pdb_140f3bda0();
      if ((char)puVar29[2] == '\x01') {
        ppppppuVar43 = (ulonglong ******)*puVar29;
        arg1 = (undefined1 (*) [16])puVar29[1];
      }
      else {
        *(undefined8 *)((longlong)pppppppuVar57 + -8) = 0x141738937;
        ppppppuVar43 = (ulonglong ******)pdb_140f4fd10();
        *puVar29 = (ulonglong)ppppppuVar43;
        puVar29[1] = (ulonglong)arg1;
        *(undefined1 *)(puVar29 + 2) = 1;
      }
      *puVar29 = (longlong)ppppppuVar43 + 1;
      pauVar45 = (undefined1 (*) [16])pppppuVar47[8];
      ppppuVar5 = pppppuVar47[9];
      ppppppuVar38 = (ulonglong ******)pppppuVar47[0xb];
      pppppuVar47[10] = ppppuVar16;
      pppppuVar47[0xb] = ppppuVar17;
      pppppuVar47[8] = ppppuVar4;
      pppppuVar47[9] = ppppuVar6;
      pppppuVar47[0xc] = (ulonglong ****)ppppppuVar43;
      pppppuVar47[0xd] = (ulonglong ****)arg1;
      auVar72 = *pauVar45;
      if (ppppuVar5 == (ulonglong ****)0x0) {
        ppppppuVar37 = (ulonglong ******)0x0;
      }
      else {
        ppppppuVar43 = (ulonglong ******)((longlong)ppppuVar5 * 0x61 + 0x71);
        arg1 = pauVar45 + (longlong)ppppuVar5 * -6 + -6;
        ppppppuVar37 = (ulonglong ******)0x10;
      }
      unaff_RBX[0x50] = ppppppuVar37;
      unaff_RBX[0x51] = ppppppuVar43;
      unaff_RBX[0x52] = (ulonglong ******)arg1;
      unaff_RBX[0x53] = (ulonglong ******)pauVar45;
      unaff_RBX[0x54] = (ulonglong ******)(pauVar45 + 1);
      unaff_RBX[0x55] = (ulonglong ******)(*pauVar45 + (longlong)ppppuVar5 + 1);
      *(ushort *)(unaff_RBX + 0x56) =
           ~((ushort)(SUB161(auVar72 >> 7,0) & 1) | (ushort)(SUB161(auVar72 >> 0xf,0) & 1) << 1 |
             (ushort)(SUB161(auVar72 >> 0x17,0) & 1) << 2 |
             (ushort)(SUB161(auVar72 >> 0x1f,0) & 1) << 3 |
             (ushort)(SUB161(auVar72 >> 0x27,0) & 1) << 4 |
             (ushort)(SUB161(auVar72 >> 0x2f,0) & 1) << 5 |
             (ushort)(SUB161(auVar72 >> 0x37,0) & 1) << 6 |
             (ushort)(SUB161(auVar72 >> 0x3f,0) & 1) << 7 |
             (ushort)(SUB161(auVar72 >> 0x47,0) & 1) << 8 |
             (ushort)(SUB161(auVar72 >> 0x4f,0) & 1) << 9 |
             (ushort)(SUB161(auVar72 >> 0x57,0) & 1) << 10 |
             (ushort)(SUB161(auVar72 >> 0x5f,0) & 1) << 0xb |
             (ushort)(SUB161(auVar72 >> 0x67,0) & 1) << 0xc |
             (ushort)(SUB161(auVar72 >> 0x6f,0) & 1) << 0xd |
             (ushort)(SUB161(auVar72 >> 0x77,0) & 1) << 0xe |
            (ushort)(byte)(auVar72[0xf] >> 7) << 0xf);
      unaff_RBX[0x57] = ppppppuVar38;
      *(undefined8 *)((longlong)pppppppuVar57 + -8) = 0x1417376f8;
      pdb_1415ed630(unaff_RBX + 0x24,unaff_RBX + 0x50);
      if ((*(byte *)(unaff_RBX + 0x11) == 0) &&
         (((ulonglong)*pppppppuVar41 & 0x7fffffffffffffff) != 0)) {
        *(byte *)((longlong)unaff_RBX + 0x7e) = 1;
        *(byte *)((longlong)unaff_RBX + 0x7f) = 1;
        *(undefined8 *)((longlong)pppppppuVar57 + -8) = 0x1417389b1;
        cVar23 = pdb_142dc79e0();
        if (cVar23 == '\0') {
          *(undefined1 *)((longlong)pppppuVar47 + 0x39) = 1;
        }
      }
      LOCK();
      cVar23 = *(char *)unaff_RBX[0x10];
      *(char *)unaff_RBX[0x10] = '\0';
      UNLOCK();
      if (cVar23 == '\x02') {
        *(byte *)((longlong)unaff_RBX + 0x7e) = 1;
        *(byte *)((longlong)unaff_RBX + 0x7f) = 1;
        *(undefined8 *)((longlong)pppppppuVar57 + -8) = 0x141738955;
        pdb_142dc6ca0();
      }
      pauVar45 = (undefined1 (*) [16])unaff_RBX[0x2a];
      auVar72 = *pauVar45;
      unaff_RBX[0x50] = (ulonglong ******)pauVar45;
      unaff_RBX[0x51] = (ulonglong ******)(pauVar45 + 1);
      unaff_RBX[0x52] = (ulonglong ******)(*pauVar45 + (longlong)unaff_RBX[0x2b] + 1);
      *(ushort *)(unaff_RBX + 0x53) =
           ~((ushort)(SUB161(auVar72 >> 7,0) & 1) | (ushort)(SUB161(auVar72 >> 0xf,0) & 1) << 1 |
             (ushort)(SUB161(auVar72 >> 0x17,0) & 1) << 2 |
             (ushort)(SUB161(auVar72 >> 0x1f,0) & 1) << 3 |
             (ushort)(SUB161(auVar72 >> 0x27,0) & 1) << 4 |
             (ushort)(SUB161(auVar72 >> 0x2f,0) & 1) << 5 |
             (ushort)(SUB161(auVar72 >> 0x37,0) & 1) << 6 |
             (ushort)(SUB161(auVar72 >> 0x3f,0) & 1) << 7 |
             (ushort)(SUB161(auVar72 >> 0x47,0) & 1) << 8 |
             (ushort)(SUB161(auVar72 >> 0x4f,0) & 1) << 9 |
             (ushort)(SUB161(auVar72 >> 0x57,0) & 1) << 10 |
             (ushort)(SUB161(auVar72 >> 0x5f,0) & 1) << 0xb |
             (ushort)(SUB161(auVar72 >> 0x67,0) & 1) << 0xc |
             (ushort)(SUB161(auVar72 >> 0x6f,0) & 1) << 0xd |
             (ushort)(SUB161(auVar72 >> 0x77,0) & 1) << 0xe |
            (ushort)(byte)(auVar72[0xf] >> 7) << 0xf);
      unaff_RBX[0x54] = unaff_RBX[0x2d];
      unaff_RBX[0x55] = unaff_RBX[0xe] + 8;
      *(byte *)((longlong)unaff_RBX + 0x7e) = 1;
      *(byte *)((longlong)unaff_RBX + 0x7f) = 1;
      pppppppuVar41 = unaff_RBX + 0x50;
      *(undefined8 *)((longlong)pppppppuVar57 + -8) = 0x14173779a;
      pdb_1415ea2a0(unaff_RBX + 0x21);
      unaff_RBX[0x11] = ppppppuVar66 + 10;
      unaff_RBX[0x10] = (ulonglong ******)unaff_R13;
      if (unaff_RBX[0x13] == (ulonglong ******)0x0) {
        pppppuVar47 = unaff_RBX[0x15][3];
        lVar33 = (longlong)unaff_RBX[0x14] +
                 ((longlong)unaff_RBX[0x15][2] - 1U & 0xfffffffffffffff0) + 0x10;
        *(byte *)((longlong)unaff_RBX + 0x6d) = 1;
        *(byte *)((longlong)unaff_RBX + 0x6e) = 1;
        *(byte *)((longlong)unaff_RBX + 0x6f) = 1;
        *(undefined8 *)((longlong)pppppppuVar57 + -8) = 0x141737946;
        (*(code *)pppppuVar47)(unaff_RBX + 0x50,lVar33);
        auVar70[0] = -(*(byte *)(unaff_RBX + 0x50) == DAT_14332a670);
        auVar70[1] = -(*(byte *)((longlong)unaff_RBX + 0x281) == UNK_14332a671);
        auVar70[2] = -(*(byte *)((longlong)unaff_RBX + 0x282) == UNK_14332a672);
        auVar70[3] = -(*(byte *)((longlong)unaff_RBX + 0x283) == UNK_14332a673);
        auVar70[4] = -(*(byte *)((longlong)unaff_RBX + 0x284) == UNK_14332a674);
        auVar70[5] = -(*(byte *)((longlong)unaff_RBX + 0x285) == UNK_14332a675);
        auVar70[6] = -(*(byte *)((longlong)unaff_RBX + 0x286) == UNK_14332a676);
        auVar70[7] = -(*(byte *)((longlong)unaff_RBX + 0x287) == UNK_14332a677);
        auVar70[8] = -(*(byte *)(unaff_RBX + 0x51) == UNK_14332a678);
        auVar70[9] = -(*(byte *)((longlong)unaff_RBX + 0x289) == UNK_14332a679);
        auVar70[10] = -(*(byte *)((longlong)unaff_RBX + 0x28a) == UNK_14332a67a);
        auVar70[0xb] = -(*(byte *)((longlong)unaff_RBX + 0x28b) == UNK_14332a67b);
        auVar70[0xc] = -(*(byte *)((longlong)unaff_RBX + 0x28c) == UNK_14332a67c);
        auVar70[0xd] = -(*(byte *)((longlong)unaff_RBX + 0x28d) == UNK_14332a67d);
        auVar70[0xe] = -(*(byte *)((longlong)unaff_RBX + 0x28e) == UNK_14332a67e);
        auVar70[0xf] = -(*(byte *)((longlong)unaff_RBX + 0x28f) == UNK_14332a67f);
        if ((ushort)((ushort)(SUB161(auVar70 >> 7,0) & 1) |
                     (ushort)(SUB161(auVar70 >> 0xf,0) & 1) << 1 |
                     (ushort)(SUB161(auVar70 >> 0x17,0) & 1) << 2 |
                     (ushort)(SUB161(auVar70 >> 0x1f,0) & 1) << 3 |
                     (ushort)(SUB161(auVar70 >> 0x27,0) & 1) << 4 |
                     (ushort)(SUB161(auVar70 >> 0x2f,0) & 1) << 5 |
                     (ushort)(SUB161(auVar70 >> 0x37,0) & 1) << 6 |
                     (ushort)(SUB161(auVar70 >> 0x3f,0) & 1) << 7 |
                     (ushort)(SUB161(auVar70 >> 0x47,0) & 1) << 8 |
                     (ushort)(SUB161(auVar70 >> 0x4f,0) & 1) << 9 |
                     (ushort)(SUB161(auVar70 >> 0x57,0) & 1) << 10 |
                     (ushort)(SUB161(auVar70 >> 0x5f,0) & 1) << 0xb |
                     (ushort)(SUB161(auVar70 >> 0x67,0) & 1) << 0xc |
                     (ushort)(SUB161(auVar70 >> 0x6f,0) & 1) << 0xd |
                     (ushort)(SUB161(auVar70 >> 0x77,0) & 1) << 0xe |
                    (ushort)(auVar70[0xf] >> 7) << 0xf) != 0xffff) {
          *(byte *)((longlong)unaff_RBX + 0x6d) = 1;
          *(byte *)((longlong)unaff_RBX + 0x6e) = 1;
          *(byte *)((longlong)unaff_RBX + 0x6f) = 1;
          *(undefined8 *)((longlong)pppppppuVar57 + -8) = 0x1417389fc;
          pdb_142dc8110(&UNK_14332b0b8,8,&UNK_14332b1c0);
          goto code_r0x00014173a218;
        }
        unaff_RBX[0x1e] = (ulonglong ******)0x0;
        unaff_RBX[0x1f] = (ulonglong ******)0x10;
        unaff_RBX[0x20] = (ulonglong ******)0x0;
        unaff_RBX[0x50] = (ulonglong ******)(unaff_RBX + 0x1e);
        *(byte *)((longlong)unaff_RBX + 0x7c) = 1;
        pppppppuVar41 = unaff_RBX + 0x50;
        *(undefined8 *)((longlong)pppppppuVar57 + -8) = 0x1417379af;
        pdb_140d9d5e0(lVar33,pppppppuVar41,&UNK_14332b448);
        pppppuVar47 = unaff_RBX[0xe][7];
        pppppuVar32 = unaff_RBX[0xe][8];
        unaff_RBX[0x41] = (ulonglong ******)pppppuVar47[5];
        unaff_RBX[0x40] = (ulonglong ******)pppppuVar47[4];
        ppppuVar4 = pppppuVar47[2];
        pppuVar8 = pppppuVar47[3][7];
        *(byte *)((longlong)unaff_RBX + 0x7c) = 1;
        *(undefined8 *)((longlong)pppppppuVar57 + -8) = 0x1417379e4;
        ppppppuVar43 = (ulonglong ******)(*(code *)pppuVar8)(ppppuVar4);
        unaff_RBX[0xba] = ppppppuVar43;
        ppppuVar4 = unaff_RBX[0xe][7][2];
        pppuVar8 = unaff_RBX[0xe][7][3][3];
        *(byte *)((longlong)unaff_RBX + 0x7c) = 1;
        *(undefined8 *)((longlong)pppppppuVar57 + -8) = 0x141737a08;
        uVar30 = (*(code *)pppuVar8)(ppppuVar4);
        ppppuVar4 = unaff_RBX[0xe][7][2];
        pppuVar8 = unaff_RBX[0xe][7][3][4];
        *(byte *)((longlong)unaff_RBX + 0x7c) = 1;
        *(undefined8 *)((longlong)pppppppuVar57 + -8) = 0x141737a26;
        uVar21 = (*(code *)pppuVar8)(ppppuVar4);
        *(byte *)((longlong)unaff_RBX + 0x7c) = 1;
        *(undefined8 *)((longlong)pppppppuVar57 + -8) = 0x141737a44;
        pdb_1415e6d20(unaff_RBX + 0x38,unaff_RBX + 0x24);
        unaff_RBX[0x1a] = unaff_RBX[0x23];
        unaff_RBX[0x18] = unaff_RBX[0x21];
        unaff_RBX[0x19] = unaff_RBX[0x22];
        unaff_RBX[0x52] = unaff_RBX[0x20];
        unaff_RBX[0x50] = unaff_RBX[0x1e];
        unaff_RBX[0x51] = unaff_RBX[0x1f];
        *(byte *)((longlong)unaff_RBX + 0x7c) = 0;
        *(ulonglong ********)((longlong)pppppppuVar57 + 0x50) = unaff_RBX + 0x50;
        *(ulonglong ********)((longlong)pppppppuVar57 + 0x48) = unaff_RBX + 0x18;
        *(ulonglong ********)((longlong)pppppppuVar57 + 0x40) = unaff_RBX + 0x38;
        *(undefined1 *)((longlong)pppppppuVar57 + 0x38) = uVar21;
        *(undefined8 *)((longlong)pppppppuVar57 + 0x30) = uVar30;
        *(ulonglong ********)((longlong)pppppppuVar57 + 0x28) = pppppppuVar41;
        *(ulonglong *******)((longlong)pppppppuVar57 + 0x20) = unaff_RBX[0xba];
        ppppppuVar43 = unaff_RBX[0x40];
        ppppppuVar66 = unaff_RBX[0x41];
        *(undefined8 *)((longlong)pppppppuVar57 + -8) = 0x141737ad8;
        ppppppuVar43 = (ulonglong ******)
                       pdb_1417ffee0(pppppuVar32 + 2,ppppppuVar43,ppppppuVar66,lVar33);
      }
      else {
        pppppuVar47 = unaff_RBX[0xe][7];
        pppppuVar32 = unaff_RBX[0xe][8];
        unaff_RBX[0x41] = (ulonglong ******)pppppuVar47[5];
        unaff_RBX[0x40] = (ulonglong ******)pppppuVar47[4];
        ppppuVar4 = pppppuVar47[2];
        pppuVar8 = pppppuVar47[3][7];
        *(byte *)((longlong)unaff_RBX + 0x6d) = 1;
        *(byte *)((longlong)unaff_RBX + 0x6e) = 1;
        *(byte *)((longlong)unaff_RBX + 0x6f) = 1;
        *(undefined8 *)((longlong)pppppppuVar57 + -8) = 0x1417377f3;
        uVar30 = (*(code *)pppuVar8)(ppppuVar4);
        ppppuVar4 = unaff_RBX[0xe][7][2];
        pppuVar8 = unaff_RBX[0xe][7][3][3];
        *(byte *)((longlong)unaff_RBX + 0x6d) = 1;
        *(byte *)((longlong)unaff_RBX + 0x6e) = 1;
        *(byte *)((longlong)unaff_RBX + 0x6f) = 1;
        *(undefined8 *)((longlong)pppppppuVar57 + -8) = 0x14173781c;
        uVar31 = (*(code *)pppuVar8)(ppppuVar4);
        ppppuVar4 = unaff_RBX[0xe][7][2];
        pppuVar8 = unaff_RBX[0xe][7][3][4];
        *(byte *)((longlong)unaff_RBX + 0x6d) = 1;
        *(byte *)((longlong)unaff_RBX + 0x6e) = 1;
        *(byte *)((longlong)unaff_RBX + 0x6f) = 1;
        *(undefined8 *)((longlong)pppppppuVar57 + -8) = 0x141737842;
        uVar21 = (*(code *)pppuVar8)(ppppuVar4);
        *(byte *)((longlong)unaff_RBX + 0x6d) = 1;
        *(byte *)((longlong)unaff_RBX + 0x6e) = 1;
        *(byte *)((longlong)unaff_RBX + 0x6f) = 1;
        *(undefined8 *)((longlong)pppppppuVar57 + -8) = 0x141737868;
        pdb_1415e6d20(unaff_RBX + 0x38,unaff_RBX + 0x24);
        unaff_RBX[0x1a] = unaff_RBX[0x23];
        unaff_RBX[0x18] = unaff_RBX[0x21];
        unaff_RBX[0x19] = unaff_RBX[0x22];
        unaff_RBX[0x50] = (ulonglong ******)0x0;
        unaff_RBX[0x51] = (ulonglong ******)0x10;
        unaff_RBX[0x52] = (ulonglong ******)0x0;
        *(byte *)((longlong)unaff_RBX + 0x6d) = 0;
        *(byte *)((longlong)unaff_RBX + 0x6e) = 1;
        *(byte *)((longlong)unaff_RBX + 0x6f) = 1;
        *(ulonglong ********)((longlong)pppppppuVar57 + 0x50) = unaff_RBX + 0x50;
        *(ulonglong ********)((longlong)pppppppuVar57 + 0x48) = unaff_RBX + 0x18;
        *(ulonglong ********)((longlong)pppppppuVar57 + 0x40) = unaff_RBX + 0x38;
        *(undefined1 *)((longlong)pppppppuVar57 + 0x38) = uVar21;
        *(undefined8 *)((longlong)pppppppuVar57 + 0x30) = uVar31;
        *(ulonglong ********)((longlong)pppppppuVar57 + 0x28) = pppppppuVar41;
        *(undefined8 *)((longlong)pppppppuVar57 + 0x20) = uVar30;
        ppppppuVar43 = unaff_RBX[0x40];
        ppppppuVar66 = unaff_RBX[0x41];
        *(undefined8 *)((longlong)pppppppuVar57 + -8) = 0x141737902;
        ppppppuVar43 = (ulonglong ******)pdb_1417ffee0(pppppuVar32 + 2,ppppppuVar43,ppppppuVar66,0);
      }
      unaff_RBX[0x50] = unaff_RBX[0x13];
      unaff_RBX[0x51] = unaff_RBX[0x14];
      *(uint *)(unaff_RBX + 0x52) = *(uint *)(unaff_RBX + 0x15);
      *(uint *)((longlong)unaff_RBX + 0x294) = *(uint *)((longlong)unaff_RBX + 0xac);
      *(uint *)(unaff_RBX + 0x53) = *(uint *)(unaff_RBX + 0x16);
      *(uint *)((longlong)unaff_RBX + 0x29c) = *(uint *)((longlong)unaff_RBX + 0xb4);
      unaff_RBX[0x54] = ppppppuVar43;
      ppppppuVar66 = unaff_RBX[0x50];
      if (ppppppuVar43 == (ulonglong ******)0x0 || ppppppuVar66 != (ulonglong ******)0x0) {
        ppppppuVar38 = unaff_RBX[0x51];
        ppppppuVar37 = unaff_RBX[0x52];
        unaff_RBX[0x48] = unaff_RBX[0x26];
        param_1 = (ulonglong *******)unaff_RBX[0x53];
        unaff_RBX[0x46] = unaff_RBX[0x24];
        unaff_RBX[0x47] = unaff_RBX[0x25];
        if (ppppppuVar43 != (ulonglong ******)0x0) {
          *(byte *)((longlong)unaff_RBX + 0x6d) = 0;
          *(byte *)((longlong)unaff_RBX + 0x6e) = 0;
          *(byte *)((longlong)unaff_RBX + 0x6f) = 0;
          *(undefined8 *)((longlong)pppppppuVar57 + -8) = 0x141737b6d;
          pdb_1404b38e0(unaff_RBX + 0x54);
        }
      }
      else {
        ppppppuVar66 = (ulonglong ******)unaff_RBX[0xe][2];
        ppppppuVar38 = (ulonglong ******)unaff_RBX[0xe][3];
        unaff_RBX[0x18] = (ulonglong ******)0x1;
        unaff_RBX[0x19] = (ulonglong ******)0x1;
        unaff_RBX[0x1a] = ppppppuVar43;
        *(undefined8 *)((longlong)pppppppuVar57 + -8) = 0x141737b9d;
        pdb_14007ee60();
        *(undefined8 *)((longlong)pppppppuVar57 + -8) = 0x141737bac;
        ppppppuVar37 = (ulonglong ******)pub_1406abab0(0x18,8);
        if (ppppppuVar37 == (ulonglong ******)0x0) {
                    /* WARNING: Subroutine does not return */
          *(undefined8 *)((longlong)pppppppuVar57 + -8) = 0x1417389d2;
          pdb_142dc7e11(8,0x18);
        }
        ppppppuVar37[2] = (ulonglong *****)unaff_RBX[0x1a];
        ppppppuVar43 = unaff_RBX[0x19];
        *ppppppuVar37 = (ulonglong *****)unaff_RBX[0x18];
        ppppppuVar37[1] = (ulonglong *****)ppppppuVar43;
        unaff_RBX[0x46] = unaff_RBX[0x24];
        unaff_RBX[0x47] = unaff_RBX[0x25];
        unaff_RBX[0x48] = unaff_RBX[0x26];
        if (unaff_RBX[0x50] == (ulonglong ******)0x0) {
          ppppppuVar43 = unaff_RBX[0x51];
          LOCK();
          *ppppppuVar43 = (ulonglong *****)((longlong)*ppppppuVar43 + -1);
          UNLOCK();
          param_1 = (ulonglong *******)&UNK_14332b220;
          if (*ppppppuVar43 == (ulonglong *****)0x0) {
            *(byte *)((longlong)unaff_RBX + 0x6d) = 0;
            *(byte *)((longlong)unaff_RBX + 0x6e) = 0;
            *(byte *)((longlong)unaff_RBX + 0x6f) = 0;
            *(undefined8 *)((longlong)pppppppuVar57 + -8) = 0x141737e1b;
            pdb_140c7a240(unaff_RBX + 0x51);
          }
        }
        else {
          ppppppuVar43 = unaff_RBX[0x52];
          LOCK();
          *ppppppuVar43 = (ulonglong *****)((longlong)*ppppppuVar43 + -1);
          UNLOCK();
          param_1 = (ulonglong *******)&UNK_14332b220;
          if (*ppppppuVar43 == (ulonglong *****)0x0) {
            *(byte *)((longlong)unaff_RBX + 0x6d) = 0;
            *(byte *)((longlong)unaff_RBX + 0x6e) = 0;
            *(byte *)((longlong)unaff_RBX + 0x6f) = 0;
            *(undefined8 *)((longlong)pppppppuVar57 + -8) = 0x141737c2a;
            pdb_140c7a240(unaff_RBX + 0x52);
          }
        }
      }
      ppppppuVar43 = unaff_RBX[0x2b];
      if (ppppppuVar43 != (ulonglong ******)0x0) {
        uVar26 = (longlong)ppppppuVar43 * 0x11 + 0x21;
        if (uVar26 != 0) {
          ppppppuVar10 = unaff_RBX[0x2a];
          *(undefined8 *)((longlong)pppppppuVar57 + -8) = 0x141737e55;
          pub_1406abac0((byte *)((longlong)ppppppuVar10 - ((longlong)ppppppuVar43 * 0x10 + 0x10)),
                        uVar26,0x10);
        }
      }
      pppppuVar47 = *unaff_RBX[0x11];
      LOCK();
      *pppppuVar47 = (ulonglong ****)((longlong)*pppppuVar47 + -1);
      UNLOCK();
      if (*pppppuVar47 == (ulonglong ****)0x0) {
        unaff_RBX[0x4a] = unaff_RBX[0x29];
        unaff_RBX[0x4b] = unaff_RBX[0x28];
        *(undefined8 *)((longlong)pppppppuVar57 + -8) = 0x141737e86;
        pdb_140dd7630();
      }
      ppppppuVar43 = unaff_RBX[0xe];
      *(undefined2 *)(ppppppuVar43 + 9) = 0;
code_r0x000141739892:
      pppppuVar47 = ppppppuVar43[7] + 2;
      unaff_RBX[0x50] = ppppppuVar66;
      unaff_RBX[0x51] = ppppppuVar38;
      unaff_RBX[0x52] = ppppppuVar37;
      unaff_RBX[0x53] = (ulonglong ******)param_1;
      unaff_RBX[0x2c] = unaff_RBX[0x48];
      unaff_RBX[0x2a] = unaff_RBX[0x46];
      unaff_RBX[0x2b] = unaff_RBX[0x47];
      pppppppuVar41 = unaff_RBX + 0x50;
      pppppppuVar46 = unaff_RBX + 0x2a;
      *(undefined8 *)((longlong)pppppppuVar57 + -8) = 0x1417398f4;
      pdb_141746c10(unaff_RBX + 0x38,pppppuVar47,pppppppuVar41,pppppppuVar46);
      ppppppuVar43 = unaff_RBX[0xe] + 7;
      *(undefined1 *)(unaff_RBX[0xe] + 0xc) = 0;
      puVar29 = puRam0000000143cad8b8;
      if (unaff_RBX[0x38] == (ulonglong ******)0x0) {
        if (*_DAT_143ca4b08 < 2) {
          bVar22 = (byte)puRam0000000143cad8b8[2];
          pppppuVar47 = (ulonglong *****)(ulonglong)bVar22;
          if (2 < bVar22) {
            *(byte *)((longlong)unaff_RBX + 0x6c) = 1;
            *(undefined8 *)((longlong)pppppppuVar57 + -8) = 0x141739adb;
            uVar25 = pdb_142db8070(puRam0000000143cad8b8);
            pppppuVar47 = (ulonglong *****)(ulonglong)uVar25;
            if ((char)uVar25 != '\0') goto code_r0x00014173993f;
            goto code_r0x000141739ae6;
          }
          if (bVar22 == 0) goto code_r0x000141739ae6;
code_r0x00014173993f:
          uVar26 = *puVar29;
          *(byte *)((longlong)unaff_RBX + 0x6c) = 1;
          *(undefined8 *)((longlong)pppppppuVar57 + -8) = 0x14173994b;
          cVar23 = pdb_140dd7f60(uVar26);
          if (cVar23 == '\0') goto code_r0x000141739ae6;
          uVar26 = *puVar29;
          ppppppuVar66 = *(ulonglong *******)(uVar26 + 0x38);
          if (ppppppuVar66 == (ulonglong ******)0x0) {
            *(byte *)((longlong)unaff_RBX + 0x6c) = 1;
            *(undefined8 *)((longlong)pppppppuVar57 + -8) = 0x141739f51;
            pdb_142dc8110(&UNK_14332aff8,0x22,&UNK_14332b278);
            goto code_r0x00014173a218;
          }
          ppppppuVar38 = *(ulonglong *******)(uVar26 + 0x30);
          ppppppuVar37 = *(ulonglong *******)(uVar26 + 0x40);
          ppppppuVar10 = *(ulonglong *******)(uVar26 + 0x48);
          unaff_RBX[0x18] = ppppppuVar38;
          unaff_RBX[0x19] = ppppppuVar66;
          unaff_RBX[0x1a] = ppppppuVar37;
          unaff_RBX[0x1b] = ppppppuVar10;
          unaff_RBX[0x1c] = (ulonglong ******)0x0;
          unaff_RBX[0x21] = (ulonglong ******)&UNK_14332b290;
          unaff_RBX[0x22] = (ulonglong ******)0x33;
          if (ppppppuVar66 == (ulonglong ******)0x1) {
            *(byte *)((longlong)unaff_RBX + 0x6c) = 1;
            *(undefined8 *)((longlong)pppppppuVar57 + -8) = 0x141739f73;
            pdb_142dc8110(&UNK_14332aff8,0x22,&UNK_14332b278);
            goto code_r0x00014173a218;
          }
          unaff_RBX[0x13] = ppppppuVar38;
          unaff_RBX[0x14] = ppppppuVar66;
          unaff_RBX[0x15] = ppppppuVar37;
          unaff_RBX[0x16] = ppppppuVar10;
          unaff_RBX[0x17] = (ulonglong ******)0x1;
          unaff_RBX[0x24] = (ulonglong ******)(*ppppppuVar43 + 4);
          if (ppppppuVar66 < (ulonglong ******)0x3) {
            *(byte *)((longlong)unaff_RBX + 0x6c) = 1;
            *(undefined8 *)((longlong)pppppppuVar57 + -8) = 0x141739f95;
            pdb_142dc8110(&UNK_14332aff8,0x22,&UNK_14332b278);
            goto code_r0x00014173a218;
          }
          unaff_RBX[0x2a] = ppppppuVar38;
          unaff_RBX[0x2b] = ppppppuVar66;
          unaff_RBX[0x2c] = ppppppuVar37;
          unaff_RBX[0x2d] = ppppppuVar10;
          unaff_RBX[0x2e] = (ulonglong ******)0x2;
          unaff_RBX[0x50] = (ulonglong ******)(unaff_RBX + 0x18);
          unaff_RBX[0x51] = (ulonglong ******)(unaff_RBX + 0x21);
          unaff_RBX[0x52] = (ulonglong ******)&UNK_14332b058;
          unaff_RBX[0x53] = (ulonglong ******)(unaff_RBX + 0x13);
          unaff_RBX[0x54] = (ulonglong ******)(unaff_RBX + 0x24);
          unaff_RBX[0x55] = (ulonglong ******)&UNK_14332b078;
          unaff_RBX[0x56] = (ulonglong ******)pppppppuVar46;
          unaff_RBX[0x57] = unaff_RBX[0xe] + 2;
          unaff_RBX[0x58] = (ulonglong ******)&UNK_14332b098;
          unaff_RBX[0x1e] = (ulonglong ******)pppppppuVar41;
          unaff_RBX[0x1f] = (ulonglong ******)0x3;
          unaff_RBX[0x20] = (ulonglong ******)(uVar26 + 0x30);
          *(byte *)((longlong)unaff_RBX + 0x6c) = 1;
          *(undefined8 *)((longlong)pppppppuVar57 + -8) = 0x141739ac5;
          pdb_14173b780(unaff_RBX + 0x1e);
        }
        else {
code_r0x000141739ae6:
          puVar29 = puRam0000000143cad8b8;
          if ((*_DAT_143ca4ab0 == '\0') && (3 < *_DAT_143ca8e90)) {
            ppppppuVar66 = (ulonglong ******)*puRam0000000143cad8b8;
            unaff_RBX[0x11] = ppppppuVar66;
            ppppppuVar38 = (ulonglong ******)ppppppuVar66[4];
            ppppppuVar66 = (ulonglong ******)ppppppuVar66[5];
            unaff_RBX[200] = (ulonglong ******)0x4;
            unaff_RBX[0xc9] = ppppppuVar38;
            unaff_RBX[0xca] = ppppppuVar66;
            *(byte *)((longlong)unaff_RBX + 0x6c) = 1;
            *(undefined8 *)((longlong)pppppppuVar57 + -8) = 0x141739b3e;
            uVar30 = pdb_140f33290();
            ppppuVar4 = pppppuVar47[3];
            *(byte *)((longlong)unaff_RBX + 0x6c) = 1;
            *(undefined8 *)((longlong)pppppppuVar57 + -8) = 0x141739b59;
            cVar23 = (*(code *)ppppuVar4)(uVar30,unaff_RBX + 200);
            if (cVar23 != '\0') {
              uVar26 = *puVar29;
              ppppppuVar66 = *(ulonglong *******)(uVar26 + 0x38);
              if (ppppppuVar66 == (ulonglong ******)0x0) {
                *(byte *)((longlong)unaff_RBX + 0x6c) = 1;
                *(undefined8 *)((longlong)pppppppuVar57 + -8) = 0x14173a12b;
                pdb_142dc8110(&UNK_14332aff8,0x22,&UNK_14332b278);
                goto code_r0x00014173a218;
              }
              ppppppuVar38 = *(ulonglong *******)(uVar26 + 0x30);
              ppppppuVar37 = *(ulonglong *******)(uVar26 + 0x40);
              ppppppuVar10 = *(ulonglong *******)(uVar26 + 0x48);
              unaff_RBX[0x18] = ppppppuVar38;
              unaff_RBX[0x19] = ppppppuVar66;
              unaff_RBX[0x1a] = ppppppuVar37;
              unaff_RBX[0x1b] = ppppppuVar10;
              unaff_RBX[0x1c] = (ulonglong ******)0x0;
              unaff_RBX[0x24] = (ulonglong ******)&UNK_14332b290;
              unaff_RBX[0x25] = (ulonglong ******)0x33;
              if (ppppppuVar66 == (ulonglong ******)0x1) {
                *(byte *)((longlong)unaff_RBX + 0x6c) = 1;
                *(undefined8 *)((longlong)pppppppuVar57 + -8) = 0x14173a14d;
                pdb_142dc8110(&UNK_14332aff8,0x22,&UNK_14332b278);
                goto code_r0x00014173a218;
              }
              unaff_RBX[0x13] = ppppppuVar38;
              unaff_RBX[0x14] = ppppppuVar66;
              unaff_RBX[0x15] = ppppppuVar37;
              unaff_RBX[0x16] = ppppppuVar10;
              unaff_RBX[0x17] = (ulonglong ******)0x1;
              unaff_RBX[0x44] = (ulonglong ******)(*ppppppuVar43 + 4);
              if (ppppppuVar66 < (ulonglong ******)0x3) {
                *(byte *)((longlong)unaff_RBX + 0x6c) = 1;
                *(undefined8 *)((longlong)pppppppuVar57 + -8) = 0x14173a16f;
                pdb_142dc8110(&UNK_14332aff8,0x22,&UNK_14332b278);
                goto code_r0x00014173a218;
              }
              unaff_RBX[0x2a] = ppppppuVar38;
              unaff_RBX[0x2b] = ppppppuVar66;
              unaff_RBX[0x2c] = ppppppuVar37;
              unaff_RBX[0x2d] = ppppppuVar10;
              unaff_RBX[0x2e] = (ulonglong ******)0x2;
              unaff_RBX[0x50] = (ulonglong ******)(unaff_RBX + 0x18);
              unaff_RBX[0x51] = (ulonglong ******)(unaff_RBX + 0x24);
              unaff_RBX[0x52] = (ulonglong ******)&UNK_14332b058;
              unaff_RBX[0x53] = (ulonglong ******)(unaff_RBX + 0x13);
              unaff_RBX[0x54] = (ulonglong ******)(unaff_RBX + 0x44);
              unaff_RBX[0x55] = (ulonglong ******)&UNK_14332b078;
              unaff_RBX[0x56] = (ulonglong ******)pppppppuVar46;
              unaff_RBX[0x57] = unaff_RBX[0xe] + 2;
              unaff_RBX[0x58] = (ulonglong ******)&UNK_14332b098;
              unaff_RBX[0x21] = (ulonglong ******)pppppppuVar41;
              unaff_RBX[0x22] = (ulonglong ******)0x3;
              unaff_RBX[0x23] = (ulonglong ******)(uVar26 + 0x30);
              unaff_RBX[0x20] = unaff_RBX[0xca];
              unaff_RBX[0x1e] = unaff_RBX[200];
              unaff_RBX[0x1f] = unaff_RBX[0xc9];
              *(byte *)((longlong)unaff_RBX + 0x6c) = 1;
              *(ulonglong ********)((longlong)pppppppuVar57 + 0x20) = unaff_RBX + 0x21;
              ppppppuVar66 = unaff_RBX[0x11];
              *(undefined8 *)((longlong)pppppppuVar57 + -8) = 0x141739d0a;
              pdb_140dd7f80(ppppppuVar66,uVar30,pppppuVar47,unaff_RBX + 0x1e);
            }
          }
        }
        if (unaff_RBX[0x38] == (ulonglong ******)0x0) {
          pppppuVar47 = unaff_RBX[0xe][8];
          unaff_RBX[0x50] = _DAT_14332b4f8;
          unaff_RBX[0x51] = _UNK_14332b500;
          pppppuVar32 = unaff_RBX[0xe][7];
          ppppuVar4 = pppppuVar32[4];
          ppppuVar6 = pppppuVar32[5];
          *(byte *)((longlong)unaff_RBX + 0x6c) = 1;
          *(ulonglong ********)((longlong)pppppppuVar57 + 0x20) = unaff_RBX + 0x39;
          *(undefined8 *)((longlong)pppppppuVar57 + -8) = 0x141739d59;
          pdb_141c2b710(pppppuVar47 + 2,unaff_RBX + 0x50,ppppuVar4,ppppuVar6);
        }
      }
      *(uint *)(unaff_RBX + 0x52) = *(uint *)(unaff_RBX + 0x3a);
      *(uint *)((longlong)unaff_RBX + 0x294) = *(uint *)((longlong)unaff_RBX + 0x1d4);
      *(uint *)(unaff_RBX + 0x53) = *(uint *)(unaff_RBX + 0x3b);
      *(uint *)((longlong)unaff_RBX + 0x29c) = *(uint *)((longlong)unaff_RBX + 0x1dc);
      unaff_RBX[0x50] = unaff_RBX[0x38];
      unaff_RBX[0x51] = unaff_RBX[0x39];
      *(byte *)((longlong)unaff_RBX + 0x6c) = 0;
      *(undefined8 *)((longlong)pppppppuVar57 + -8) = 0x141739d8f;
      pdb_14173b990(unaff_RBX + 0x4c,unaff_RBX + 0x50);
      unaff_RBX[0x11] = unaff_RBX[0xe] + 0xb;
      *(undefined8 *)((longlong)pppppppuVar57 + -8) = 0x141739da4;
      pdb_141ac4fd0();
      pppppuVar47 = *unaff_RBX[0x11];
      LOCK();
      *pppppuVar47 = (ulonglong ****)((longlong)*pppppuVar47 + -1);
      UNLOCK();
      unaff_R13 = (ulonglong *******)unaff_RBX[0x10];
      if (*pppppuVar47 == (ulonglong ****)0x0) {
        *(undefined8 *)((longlong)pppppppuVar57 + -8) = 0x141739dc1;
        pdb_140dd76c0();
      }
      pppppuVar47 = *ppppppuVar43;
      LOCK();
      *pppppuVar47 = (ulonglong ****)((longlong)*pppppuVar47 + -1);
      UNLOCK();
      if (*pppppuVar47 == (ulonglong ****)0x0) {
        *(undefined8 *)((longlong)pppppppuVar57 + -8) = 0x141739dd3;
        pdb_140dd76c0(ppppppuVar43);
      }
      pppppuVar47 = unaff_RBX[0xe][8];
      LOCK();
      *pppppuVar47 = (ulonglong ****)((longlong)*pppppuVar47 + -1);
      UNLOCK();
      if (*pppppuVar47 == (ulonglong ****)0x0) {
        ppppppuVar43 = unaff_RBX[0xe];
        *(undefined8 *)((longlong)pppppppuVar57 + -8) = 0x141739def;
        pdb_140dd78e0(ppppppuVar43 + 8);
      }
      pppppuVar47 = *unaff_RBX[0xe];
      if (pppppuVar47 != (ulonglong *****)0x0) {
        LOCK();
        *pppppuVar47 = (ulonglong ****)((longlong)*pppppuVar47 + -1);
        UNLOCK();
        if (*pppppuVar47 == (ulonglong ****)0x0) {
          ppppppuVar43 = unaff_RBX[0xe];
          *(undefined8 *)((longlong)pppppppuVar57 + -8) = 0x141739e0b;
          pdb_140c7a240(ppppppuVar43);
        }
      }
      break;
    case (ulonglong *******)0x141738c63:
code_r0x000141738c63:
      unaff_RBX[0x10] = (ulonglong ******)(in_R11 + 0xc);
      *(undefined8 *)((longlong)pppppppuVar57 + -8) = 0x141738c84;
      pdb_140b35bb0(unaff_RBX + 0x50,in_R11 + 0xc,(byte *)((longlong)unaff_RBX + 0x1bf),param_1);
      ppppppuVar43 = unaff_RBX[0x50];
      if (ppppppuVar43 != (ulonglong ******)0x2) {
        ppppppuVar66 = unaff_RBX[0x51];
        ppppppuVar38 = unaff_RBX[0x52];
        ppppppuVar10 = unaff_RBX[0x53];
        ppppppuVar11 = unaff_RBX[0x54];
        ppppppuVar37 = unaff_RBX[0xe];
        if ((ulonglong ******)ppppppuVar37[0xd] != (ulonglong ******)0x0) {
          unaff_RBX[0x10] = (ulonglong ******)ppppppuVar37[0xd];
          *(undefined8 *)((longlong)pppppppuVar57 + -8) = 0x141738ccf;
          pdb_140974580();
          ppppppuVar37 = unaff_RBX[0x10];
          *(undefined8 *)((longlong)pppppppuVar57 + -8) = 0x141738ce7;
          pub_1406abac0((byte *)ppppppuVar37,0x38,8);
          ppppppuVar37 = unaff_RBX[0xe];
        }
        if ((int)ppppppuVar43 == 1) {
          ppppppuVar43 = (ulonglong ******)ppppppuVar37[2];
          ppppppuVar66 = (ulonglong ******)ppppppuVar37[3];
          *(undefined8 *)((longlong)pppppppuVar57 + -8) = 0x141738cfd;
          pdb_14007ee60();
          *(undefined8 *)((longlong)pppppppuVar57 + -8) = 0x141738d0c;
          ppppppuVar38 = (ulonglong ******)pub_1406abab0(0x10,8);
          if (ppppppuVar38 == (ulonglong ******)0x0) {
                    /* WARNING: Subroutine does not return */
            *(undefined8 *)((longlong)pppppppuVar57 + -8) = 0x141738e29;
            pdb_142dc7e11(8,0x10);
          }
          *ppppppuVar38 = (ulonglong *****)0x1;
          ppppppuVar38[1] = (ulonglong *****)0x1;
          unaff_RBX[0x4c] = ppppppuVar43;
          unaff_RBX[0x4d] = ppppppuVar66;
          unaff_RBX[0x4e] = ppppppuVar38;
          unaff_RBX[0x4f] = (ulonglong ******)&UNK_14332b300;
        }
        else {
          unaff_RBX[0x2a] = ppppppuVar66;
          unaff_RBX[0x2b] = ppppppuVar38;
          unaff_RBX[0x2c] = ppppppuVar10;
          unaff_RBX[0x2d] = ppppppuVar11;
          if (ppppppuVar66 == (ulonglong ******)0x0) {
            pppppuVar47 = unaff_RBX[0xe][8];
            unaff_RBX[0x50] = _DAT_14332b4f8;
            unaff_RBX[0x51] = _UNK_14332b500;
            pppppuVar32 = unaff_RBX[0xe][7];
            ppppuVar4 = pppppuVar32[4];
            ppppuVar6 = pppppuVar32[5];
            *(byte *)((longlong)unaff_RBX + 0x97) = 1;
            *(ulonglong ********)((longlong)pppppppuVar57 + 0x20) = unaff_RBX + 0x2b;
            *(undefined8 *)((longlong)pppppppuVar57 + -8) = 0x141738dad;
            pdb_141c2b710(pppppuVar47 + 2,unaff_RBX + 0x50,ppppuVar4,ppppuVar6);
          }
          unaff_RBX[0x52] = unaff_RBX[0x2c];
          unaff_RBX[0x53] = unaff_RBX[0x2d];
          unaff_RBX[0x50] = unaff_RBX[0x2a];
          unaff_RBX[0x51] = unaff_RBX[0x2b];
          *(byte *)((longlong)unaff_RBX + 0x97) = 0;
          *(undefined8 *)((longlong)pppppppuVar57 + -8) = 0x141738df4;
          pdb_14173b990(unaff_RBX + 0x4c,unaff_RBX + 0x50);
          ppppppuVar37 = unaff_RBX[0xe];
        }
        *(undefined8 *)((longlong)pppppppuVar57 + -8) = 0x141738e02;
        pdb_140981490(ppppppuVar37 + 10);
        pppppuVar47 = unaff_RBX[0xe][7];
        LOCK();
        *pppppuVar47 = (ulonglong ****)((longlong)*pppppuVar47 + -1);
        ppppuVar4 = *pppppuVar47;
        UNLOCK();
        goto joined_r0x000141738e0f;
      }
      *unaff_R13 = (ulonglong ******)0x1;
      uVar21 = 3;
      pppppppuVar27 = unaff_R13;
      goto code_r0x000141739e30;
    case (ulonglong *******)0x141739e5c:
                    /* WARNING: Subroutine does not return */
      *(undefined8 *)((longlong)pppppppuVar57 + -8) = 0x141739e68;
      pdb_142dc8570(&UNK_14332b178);
    case (ulonglong *******)0x141739e68:
                    /* WARNING: Subroutine does not return */
      *(undefined8 *)((longlong)pppppppuVar57 + -8) = 0x141739e74;
      pdb_142dc8590(&UNK_14332b178);
    case (ulonglong *******)0x14173f2eb:
      pppppppuVar41 = (ulonglong *******)0x4801beca;
      uVar26 = (ulonglong)*(uint *)((longlong)pppppppuVar27 * 4 + 0x4801beca);
code_r0x00014173f2ef:
      uVar25 = *(uint *)((longlong)pppppppuVar41 + uVar26 * 4);
      pppppppuVar46[0x15] = (ulonglong ******)param_2;
                    /* WARNING: Could not emulate address calculation at 0x00014173f2ef */
                    /* WARNING: Treating indirect jump as call */
      pppppppuVar41 =
           (ulonglong *******)(*(code *)((longlong)(int)uVar25 + (longlong)pppppppuVar41))();
      return pppppppuVar41;
    case (ulonglong *******)0x14173f339:
      *(byte *)pppppppuVar27 = *(byte *)pppppppuVar27;
      *(byte *)param_1 = *(byte *)param_1 + bVar48;
      *(uint *)(param_2 + 0x12) = *(uint *)(param_2 + 0x12) - (int)pppppppuVar57;
      pppppppuVar56 = pppppppuVar57;
      goto code_r0x00014173f344;
    case (ulonglong *******)0x14173f48e:
      pppppppuVar57 = (ulonglong *******)(ulonglong)((int)pppppppuVar27 + 0x48000000);
      pppppppuVar41 = (ulonglong *******)0x4332bb50;
    case (ulonglong *******)0x14173f49a:
      goto code_r0x00014173f49a;
    case (ulonglong *******)0x14173f5b7:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case (ulonglong *******)0x14173f5f7:
      *(uint *)(pppppppuVar46 + -6) = *(uint *)(pppppppuVar46 + -6) - (int)unaff_RBX;
      goto code_r0x00014173f5db;
    case (ulonglong *******)0x14173f702:
      goto code_r0x00014173f702;
    case (ulonglong *******)0x14173f70e:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case (ulonglong *******)0x14173f842:
      *(ulonglong ********)((longlong)pppppppuVar57 + -8) = param_1;
      *(ulonglong ********)((longlong)pppppppuVar57 + -0x10) = unaff_RBX;
      pppppppuVar46 = (ulonglong *******)((longlong)pppppppuVar57 + -0x58);
      *(undefined8 *)((longlong)pppppppuVar57 + -0x18) = 0xfffffffffffffffe;
      pppppppuVar36 = (ulonglong *******)(ulonglong)*(byte *)(param_2 + 0xf);
      puVar35 = &UNK_14332bdc8;
code_r0x00014173f869:
      iVar44 = *(int *)(puVar35 + (longlong)pppppppuVar36 * 4);
      pppppppuVar46[6] = (ulonglong ******)param_2;
                    /* WARNING: Could not recover jumptable at 0x00014173f874. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      pppppppuVar41 = (ulonglong *******)(*(code *)(puVar35 + iVar44))();
      return pppppppuVar41;
    case (ulonglong *******)0x14173f893:
      pppppppuVar60 = (ulonglong *******)((longlong)pppppppuVar57 + -8);
      *(ulonglong ********)((longlong)pppppppuVar57 + -8) = pppppppuVar46;
      *(uint *)(param_2 + 7) =
           *(uint *)(param_2 + 7) + (int)pppppppuVar27 + (uint)(*(byte *)unaff_R15 < bVar22);
      goto code_r0x00014173f8a1;
    case (ulonglong *******)0x14173f9a3:
      *(byte *)((longlong)unaff_RBX + 0x5f) =
           *(byte *)((longlong)unaff_RBX + 0x5f) + (char)unaff_RBX;
      return pppppppuVar27;
    case (ulonglong *******)0x14173f9af:
      *(byte *)pppppppuVar27 = *(byte *)pppppppuVar27 - cVar23;
      *(byte *)pppppppuVar27 = *(byte *)pppppppuVar27 + cVar23;
      goto code_r0x00014173f9a9;
    case (ulonglong *******)0x14173face:
      pcVar12 = (code *)swi(3);
      pppppppuVar41 = (ulonglong *******)(*pcVar12)();
      return pppppppuVar41;
    case (ulonglong *******)0x14173fb24:
      uVar25 = *(uint *)param_1;
      *(uint *)param_1 = *(uint *)param_1 + (uint)pppppppuVar41;
      *(byte *)(unaff_RBX + 0x19) =
           *(byte *)(unaff_RBX + 0x19) + cVar23 + -0x6f + CARRY4(uVar25,(uint)pppppppuVar41);
      pppppppuVar61 = pppppppuVar57;
      goto code_r0x00014173fb16;
    case (ulonglong *******)0x14173fc86:
      *(byte *)((longlong)pppppppuVar27 + -0x77) =
           *(byte *)((longlong)pppppppuVar27 + -0x77) + bVar48;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case (ulonglong *******)0x14173fc92:
      goto code_r0x00014173fc92;
    case (ulonglong *******)0x14173fdc3:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case (ulonglong *******)0x14173fe5a:
      *(byte *)pppppppuVar27 = *(byte *)pppppppuVar27;
      bVar22 = *(byte *)param_1;
      *(byte *)param_1 = *(byte *)param_1 + bVar48;
      *(byte *)(pppppppuVar46 + 0x1a) =
           *(byte *)(pppppppuVar46 + 0x1a) + bVar48 + CARRY1(bVar22,bVar48);
      goto code_r0x00014173fe65;
    case (ulonglong *******)0x141740419:
      *(byte *)pppppppuVar27 = *(byte *)pppppppuVar27 + cVar23;
      goto code_r0x00014174041d;
    case (ulonglong *******)0x141740425:
code_r0x000141740425:
      *(byte *)((longlong)pppppppuVar46 + 0x15f) = 0;
      *(byte *)((longlong)pppppppuVar46 + 0x15e) = 1;
      *(undefined8 *)((longlong)pppppppuVar57 + -8) = 0x141740438;
      cVar23 = pdb_142dc79e0();
      if (cVar23 == '\0') {
        *(byte *)((longlong)unaff_RBX + 0x39) = 1;
      }
code_r0x00014174008e:
      uVar25 = 0;
      LOCK();
      bVar22 = *(byte *)unaff_R15;
      *(byte *)unaff_R15 = 0;
      UNLOCK();
      if (bVar22 == 2) {
        *(byte *)((longlong)pppppppuVar46 + 0x15f) = 0;
        *(byte *)((longlong)pppppppuVar46 + 0x15e) = 1;
        *(undefined8 *)((longlong)pppppppuVar57 + -8) = 0x1417400af;
        pdb_142dc6ca0();
        uVar25 = 0;
      }
code_r0x0001417400b6:
      *(uint *)(pppppppuVar46 + 0x2b) = uVar25;
      *pppppppuVar46 = pppppppuVar46[0x27];
      pppppppuVar46[1] = (ulonglong ******)param_1;
      pppppppuVar46[0x14] = (ulonglong ******)0x0;
      pppppppuVar46[0x15] = (ulonglong ******)0x1;
      pppppppuVar46[0x16] = (ulonglong ******)0x0;
      pppppppuVar46[0x1a] = (ulonglong ******)0x60000020;
      pppppppuVar46[0x18] = (ulonglong ******)(pppppppuVar46 + 0x14);
      pppppppuVar46[0x19] = (ulonglong ******)&UNK_14332b508;
      *(undefined8 *)((longlong)pppppppuVar57 + -8) = 0x141740122;
      cVar23 = pdb_140f58310(pppppppuVar46,pppppppuVar46 + 0x18);
      if (cVar23 != '\0') {
        *(undefined **)((longlong)pppppppuVar57 + 0x20) = &UNK_14332b5e0;
                    /* WARNING: Subroutine does not return */
        *(undefined8 *)((longlong)pppppppuVar57 + -8) = 0x141740394;
        pdb_142dc8170(&UNK_14332b538,0x37,(byte *)((longlong)pppppppuVar46 + 0x157),&UNK_14332b890);
      }
      ppppppuVar43 = pppppppuVar46[0x15];
      ppppppuVar38 = pppppppuVar46[0x16];
      ppppppuVar66 = pppppppuVar46[0xe];
      pppppppuVar46[0x28] = pppppppuVar46[0x14];
      if (ppppppuVar66 == (ulonglong ******)0x0) {
        ppppppuVar37 = (ulonglong ******)0x0;
        bVar22 = *(byte *)(pppppppuVar46 + 0x2b);
      }
      else {
        param_1 = (ulonglong *******)pppppppuVar46[0xf];
        pppppppuVar46[0x18] = ppppppuVar66;
        pppppppuVar46[0x19] = (ulonglong ******)param_1;
        pppppppuVar46[0x17] = ppppppuVar43;
        if (param_1 == (ulonglong *******)0x0) {
          ppppppuVar37 = (ulonglong ******)0x1;
        }
        else {
          *(undefined8 *)((longlong)pppppppuVar57 + -8) = 0x141740173;
          pdb_14007ee60();
          *(undefined8 *)((longlong)pppppppuVar57 + -8) = 0x141740180;
          ppppppuVar37 = (ulonglong ******)pub_1406abab0((ulonglong)param_1,1);
          if (ppppppuVar37 == (ulonglong ******)0x0) {
                    /* WARNING: Subroutine does not return */
            *(undefined8 *)((longlong)pppppppuVar57 + -8) = 0x141740195;
            pdb_142dc7e11(1,param_1);
          }
        }
        *(undefined8 *)((longlong)pppppppuVar57 + -8) = 0x1417401bf;
        pub_142e32760(ppppppuVar37,ppppppuVar66 + 2,param_1);
        ppppppuVar43 = pppppppuVar46[0x18];
        LOCK();
        *ppppppuVar43 = (ulonglong *****)((longlong)*ppppppuVar43 + -1);
        UNLOCK();
        if (*ppppppuVar43 == (ulonglong *****)0x0) {
          *(undefined8 *)((longlong)pppppppuVar57 + -8) = 0x1417401d8;
          pdb_1406ed6a0(pppppppuVar46 + 0x18);
        }
        ppppppuVar43 = pppppppuVar46[0x17];
        bVar22 = *(byte *)(pppppppuVar46 + 0x2b);
      }
      if ((bVar22 != 0) && (ppppppuVar66 = pppppppuVar46[10], ppppppuVar66 != (ulonglong ******)0x0)
         ) {
        ppppppuVar10 = pppppppuVar46[0xb];
        *(undefined8 *)((longlong)pppppppuVar57 + -8) = 0x141740201;
        pub_1406abac0((byte *)ppppppuVar10,(ulonglong)ppppppuVar66,1);
      }
      *(undefined8 *)((longlong)pppppppuVar57 + -8) = 0x14174020e;
      pdb_14098a860(pppppppuVar46 + 0x10);
      ppppppuVar10 = pppppppuVar46[0x28];
      ppppppuVar66 = pppppppuVar46[0x26];
      if (ppppppuVar66 != (ulonglong ******)0x0) {
        ppppppuVar11 = pppppppuVar46[0x27];
        *(undefined8 *)((longlong)pppppppuVar57 + -8) = 0x141740234;
        pub_1406abac0((byte *)ppppppuVar11,(ulonglong)ppppppuVar66,1);
      }
      ppppppuVar66 = pppppppuVar46[0x29];
      *(undefined1 *)(ppppppuVar66 + 0x10) = 1;
      if (SBORROW8(0,(longlong)ppppppuVar10)) goto code_r0x000141740265;
      if (ppppppuVar10 == (ulonglong ******)0x8000000000000001) {
        *pppppppuVar67 = (ulonglong ******)0x2;
        uVar21 = 3;
        goto code_r0x0001417402a5;
      }
      pppppppuVar46[0x18] = (ulonglong ******)0x1;
      pppppppuVar46[0x19] = (ulonglong ******)0x1;
      pppppppuVar46[0x1a] = ppppppuVar10;
      pppppppuVar46[0x1b] = ppppppuVar43;
      pppppppuVar46[0x1c] = ppppppuVar38;
      pppppppuVar46[0x1d] = ppppppuVar37;
      pppppppuVar46[0x1e] = (ulonglong ******)param_1;
      *(undefined8 *)((longlong)pppppppuVar57 + -8) = 0x141740301;
      pdb_14007ee60();
      *(undefined8 *)((longlong)pppppppuVar57 + -8) = 0x141740310;
      ppppppuVar38 = (ulonglong ******)pub_1406abab0(0x38,8);
      if (ppppppuVar38 == (ulonglong ******)0x0) {
        pppppppuVar41 = (ulonglong *******)0x8;
code_r0x00014174041d:
                    /* WARNING: Subroutine does not return */
        *(undefined8 *)((longlong)pppppppuVar57 + -8) = 0x141740422;
        pdb_142dc7e11(pppppppuVar41);
      }
      ppppppuVar38[6] = (ulonglong *****)pppppppuVar46[0x1e];
      ppppppuVar43 = pppppppuVar46[0x18];
      ppppppuVar37 = pppppppuVar46[0x19];
      ppppppuVar10 = pppppppuVar46[0x1a];
      ppppppuVar11 = pppppppuVar46[0x1b];
      ppppppuVar13 = pppppppuVar46[0x1d];
      ppppppuVar38[4] = (ulonglong *****)pppppppuVar46[0x1c];
      ppppppuVar38[5] = (ulonglong *****)ppppppuVar13;
      ppppppuVar38[2] = (ulonglong *****)ppppppuVar10;
      ppppppuVar38[3] = (ulonglong *****)ppppppuVar11;
      *ppppppuVar38 = (ulonglong *****)ppppppuVar43;
      ppppppuVar38[1] = (ulonglong *****)ppppppuVar37;
      ppppppuVar43 = (ulonglong ******)&UNK_14332ba38;
      ppppppuVar37 = (ulonglong ******)0x0;
      goto code_r0x000141740298;
    }
    in_XMM0_Qa = (ulonglong *******)unaff_RBX[0x4c];
    in_XMM0_Qb = (ulonglong *******)unaff_RBX[0x4d];
code_r0x000141739e14:
    ppppppuVar43 = unaff_RBX[0x4f];
    unaff_R13[3] = unaff_RBX[0x4e];
    unaff_R13[4] = ppppppuVar43;
    unaff_R13[1] = (ulonglong ******)in_XMM0_Qa;
    unaff_R13[2] = (ulonglong ******)in_XMM0_Qb;
    *unaff_R13 = (ulonglong ******)0x0;
    uVar21 = 1;
    pppppppuVar27 = unaff_R13;
code_r0x000141739e30:
    *(undefined1 *)((longlong)unaff_RBX[0xe] + 0x4a) = uVar21;
code_r0x000141739e48:
code_r0x000141739e58:
    return pppppppuVar27;
  case (ulonglong *******)0x141737427:
    goto code_r0x000141737426;
  case (ulonglong *******)0x141738c53:
    goto code_r0x000141738c53;
  case (ulonglong *******)0x141739e4c:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (ulonglong *******)0x141739e58:
    goto code_r0x000141739e58;
  case (ulonglong *******)0x14173f2db:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (ulonglong *******)0x14173f329:
    pppppppuVar55 = (ulonglong *******)((longlong)pppppppuVar57 + -8);
    *(ulonglong ********)((longlong)pppppppuVar57 + -8) = pppppppuVar27;
code_r0x00014173f32a:
    param_2[10] = (ulonglong ******)in_XMM0_Qa;
    param_2[0xb] = (ulonglong ******)in_XMM0_Qb;
    *(uint *)(param_2 + 0xc) = uVar73;
    *(uint *)((longlong)param_2 + 100) = uVar74;
    *(uint *)(param_2 + 0xd) = in_XMM1_Dc;
    *(uint *)((longlong)param_2 + 0x6c) = in_XMM1_Dd;
    *(uint *)(param_2 + 0xe) = uVar75;
    *(uint *)((longlong)param_2 + 0x74) = uVar76;
    *(uint *)(param_2 + 0xf) = in_XMM2_Dc;
    *(uint *)((longlong)param_2 + 0x7c) = in_XMM2_Dd;
    *(uint *)(param_2 + 0x10) = uVar25;
    *(uint *)((longlong)param_2 + 0x84) = uVar77;
    *(uint *)(param_2 + 0x11) = in_XMM3_Dc;
    *(uint *)((longlong)param_2 + 0x8c) = in_XMM3_Dd;
    *(uint *)(param_2 + 0x12) = in_XMM4_Da;
    *(uint *)((longlong)param_2 + 0x94) = in_XMM4_Db;
    *(uint *)(param_2 + 0x13) = in_XMM4_Dc;
    *(uint *)((longlong)param_2 + 0x9c) = in_XMM4_Dd;
    pppppppuVar56 = pppppppuVar55;
code_r0x00014173f344:
    *(byte *)(param_2 + 0x14) = 0;
    pppppppuVar46[0x13] = (ulonglong ******)pppppppuVar41;
    ppppppuVar43 = pppppppuVar41[1];
    pppppppuVar46[-2] = *pppppppuVar41;
    pppppppuVar46[-1] = ppppppuVar43;
    ppppppuVar43 = param_2[0xc];
    pppppppuVar46[4] = param_2[0xf];
    ppppppuVar66 = param_2[0xe];
    pppppppuVar46[2] = param_2[0xd];
    pppppppuVar46[3] = ppppppuVar66;
    ppppppuVar66 = param_2[0x10];
    ppppppuVar38 = param_2[0x11];
    uVar25 = *(uint *)((longlong)param_2 + 0x94);
    uVar77 = *(uint *)(param_2 + 0x13);
    uVar73 = *(uint *)((longlong)param_2 + 0x9c);
    *(uint *)(pppppppuVar46 + 0xc) = *(uint *)(param_2 + 0x12);
    *(uint *)((longlong)pppppppuVar46 + 100) = uVar25;
    *(uint *)(pppppppuVar46 + 0xd) = uVar77;
    *(uint *)((longlong)pppppppuVar46 + 0x6c) = uVar73;
    pppppppuVar46[10] = ppppppuVar66;
    pppppppuVar46[0xb] = ppppppuVar38;
    *(undefined8 *)((longlong)pppppppuVar56 + -8) = 0x14173f3a1;
    pdb_14098a860(pppppppuVar46 + 10);
    *pppppppuVar46 = pppppppuVar46[-2];
    pppppppuVar46[1] = pppppppuVar46[-1];
    pppppppuVar46[6] = pppppppuVar46[2];
    pppppppuVar46[7] = pppppppuVar46[3];
    pppppppuVar46[8] = pppppppuVar46[4];
    unaff_RBX = (ulonglong *******)pppppppuVar46[0x15];
    *(undefined1 *)(unaff_RBX + 0x14) = 1;
    if (SBORROW8(0,(longlong)ppppppuVar43)) {
      *pppppppuVar67 = (ulonglong ******)0x2;
      uVar21 = 3;
      goto code_r0x00014173f460;
    }
    pppppppuVar46[0xc] = *pppppppuVar46;
    pppppppuVar46[0xd] = pppppppuVar46[1];
    pppppppuVar46[0xf] = pppppppuVar46[6];
    pppppppuVar46[0x10] = pppppppuVar46[7];
    pppppppuVar46[0x11] = pppppppuVar46[8];
    pppppppuVar46[10] = (ulonglong ******)0x1;
    pppppppuVar46[0xb] = (ulonglong ******)0x1;
    pppppppuVar46[0xe] = ppppppuVar43;
    *(undefined8 *)((longlong)pppppppuVar56 + -8) = 0x14173f412;
    pdb_14007ee60();
    *(undefined8 *)((longlong)pppppppuVar56 + -8) = 0x14173f421;
    pppppppuVar27 = (ulonglong *******)pub_1406abab0(0x40,0x10);
    if (pppppppuVar27 == (ulonglong *******)0x0) {
      pppppppuVar41 = (ulonglong *******)0x10;
code_r0x00014173f47a:
                    /* WARNING: Subroutine does not return */
      *(undefined8 *)((longlong)pppppppuVar56 + -8) = 0x14173f484;
      pdb_142dc7e11(pppppppuVar41,0x40);
    }
    in_XMM0_Qa = (ulonglong *******)pppppppuVar46[10];
    in_XMM0_Qb = (ulonglong *******)pppppppuVar46[0xb];
    uVar73 = *(uint *)(pppppppuVar46 + 0xc);
    uVar74 = *(uint *)((longlong)pppppppuVar46 + 100);
    in_XMM1_Dc = *(uint *)(pppppppuVar46 + 0xd);
    in_XMM1_Dd = *(uint *)((longlong)pppppppuVar46 + 0x6c);
    uVar75 = *(uint *)(pppppppuVar46 + 0xe);
    uVar76 = *(uint *)((longlong)pppppppuVar46 + 0x74);
    in_XMM2_Dc = *(uint *)(pppppppuVar46 + 0xf);
    in_XMM2_Dd = *(uint *)((longlong)pppppppuVar46 + 0x7c);
    ppppppuVar43 = pppppppuVar46[0x11];
    pppppppuVar27[6] = pppppppuVar46[0x10];
    pppppppuVar27[7] = ppppppuVar43;
    goto code_r0x00014173f43d;
  case (ulonglong *******)0x14173f47e:
    pppppppuVar41 = (ulonglong *******)0x2ec2beec;
    bVar69 = (int)param_3 == 1;
  case (ulonglong *******)0x14173f48a:
    if (!bVar69) {
      pppppppuVar46[0x14] = (ulonglong ******)pppppppuVar41;
                    /* WARNING: Subroutine does not return */
      *(undefined8 *)((longlong)pppppppuVar57 + -8) = 0x14173f4cd;
      pdb_142dc8590(&UNK_14332bb50);
    }
    pppppppuVar46[0x14] = (ulonglong ******)pppppppuVar41;
    pppppppuVar41 = (ulonglong *******)&UNK_14332bb50;
code_r0x00014173f49a:
                    /* WARNING: Subroutine does not return */
    *(undefined8 *)((longlong)pppppppuVar57 + -8) = 0x14173f49f;
    pdb_142dc8570(pppppppuVar41);
  case (ulonglong *******)0x14173f5a7:
    pppppppuVar58 = (ulonglong *******)(ulonglong)((int)pppppppuVar57 - 0xd0);
code_r0x00014173f5a3:
    *(ulonglong ********)((longlong)pppppppuVar58 + -8) = pppppppuVar67;
    *(ulonglong ********)((longlong)pppppppuVar58 + -0x10) = param_1;
    *(ulonglong ********)((longlong)pppppppuVar58 + -0x18) = unaff_RBX;
    pppppppuVar46 = (ulonglong *******)((longlong)pppppppuVar58 + -0x68);
    *(undefined8 *)((longlong)pppppppuVar58 + -0x20) = 0xfffffffffffffffe;
    pppppppuVar36 = (ulonglong *******)(ulonglong)*(byte *)(param_2 + 0x11);
    pppppppuVar27 = (ulonglong *******)((longlong)pppppppuVar58 + -0xe8);
    pppppppuVar67 = pppppppuVar41;
code_r0x00014173f5c7:
    pppppppuVar57 = pppppppuVar27;
    lVar33 = (longlong)*(int *)(&UNK_14332bdb8 + (longlong)pppppppuVar36 * 4);
    pcVar34 = &UNK_14332bdb8 + lVar33;
    pppppppuVar46[7] = (ulonglong ******)param_2;
    cVar23 = (char)pcVar34;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
    switch(pcVar34) {
    case (char *)0x14173f5db:
      goto code_r0x00014173f5db;
    case (char *)0x14173f61b:
      bVar22 = *(byte *)(param_2 + 0x10);
      pppppppuVar46[8] = (ulonglong ******)(param_2 + 8);
      if (bVar22 != 0) {
        if (bVar22 != 1) {
          pppppppuVar46[6] = pppppppuVar46[8];
                    /* WARNING: Subroutine does not return */
          *(undefined8 *)((longlong)pppppppuVar57 + -8) = 0x14173f752;
          pdb_142dc8590(&UNK_14332bb50);
        }
        pppppppuVar46[6] = pppppppuVar46[8];
                    /* WARNING: Subroutine does not return */
        *(undefined8 *)((longlong)pppppppuVar57 + -8) = 0x14173f723;
        pdb_142dc8570(&UNK_14332bb50);
      }
      goto code_r0x00014173f632;
    case (char *)0x14173f726:
code_r0x00014173f726:
                    /* WARNING: Subroutine does not return */
      *(undefined8 *)((longlong)pppppppuVar57 + -8) = 0x14173f732;
      pdb_142dc8590(&UNK_14332ba20);
    case (char *)0x14173f732:
                    /* WARNING: Subroutine does not return */
      *(undefined8 *)((longlong)pppppppuVar57 + -8) = 0x14173f73e;
      pdb_142dc8570(&UNK_14332ba20);
    case (char *)0x14173f866:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case (char *)0x14173f8b7:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case (char *)0x14173f9c7:
      (&UNK_14332bd45)[lVar33] = (&UNK_14332bd45)[lVar33] + 'H';
                    /* WARNING: Subroutine does not return */
      *(undefined8 *)((longlong)pppppppuVar57 + -8) = 0x14173f9d4;
      pdb_142dc8570();
    case (char *)0x14173f9d3:
      *(int *)(lVar33 + 0xd07aeba3) = *(int *)(lVar33 + 0xd07aeba3) + (int)param_2;
                    /* WARNING: Subroutine does not return */
      *(undefined8 *)((longlong)pppppppuVar57 + -8) = 0x14173f9e3;
      pdb_142dc8590();
    case (char *)0x14173faf2:
      pppppppuVar67 = (ulonglong *******)0x4332bdb8;
code_r0x00014173faf4:
      bVar22 = *(byte *)(param_2 + 0x3b);
      pppppppuVar41 = (ulonglong *******)&UNK_14332bdd8;
      uVar26 = (ulonglong)*(int *)(&UNK_14332bdd8 + (ulonglong)bVar22 * 4);
      puVar35 = &UNK_14332bdd8 + uVar26;
      pppppppuVar46[0x4a] = (ulonglong ******)param_2;
      pppppppuVar61 = pppppppuVar57;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
      switch(bVar22) {
      case 0:
        param_1 = pppppppuVar46 + 0xc;
        goto code_r0x00014173fb16;
      case 1:
                    /* WARNING: Subroutine does not return */
        *(undefined8 *)((longlong)pppppppuVar57 + -8) = 0x14173fce2;
        pdb_142dc8570(&UNK_14332ba20);
      case 2:
                    /* WARNING: Subroutine does not return */
        *(undefined8 *)((longlong)pppppppuVar57 + -8) = 0x14173fcd6;
        pdb_142dc8590(&UNK_14332ba20);
      case 3:
        pppppppuVar27 = (ulonglong *******)(ulonglong)*(byte *)(unaff_RBX + 0x3a);
        pppppppuVar41 = unaff_RBX + 0x1d;
        goto code_r0x00014173fb76;
      case 4:
        lVar33 = (longlong)*(int *)(&UNK_14332bdd8 + (longlong)puVar35 * 4);
code_r0x00014173fe0b:
        pppppppuVar46[0x29] = (ulonglong ******)param_2;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
        switch((byte *)(lVar33 + (longlong)pppppppuVar41)) {
        case (byte *)0x284a6235a:
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        case (byte *)0x284a6243d:
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        case (byte *)0x284a62476:
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        case (byte *)0x284a62482:
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        case (byte *)0x284a624d0:
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        case (byte *)0x284a6257b:
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        case (byte *)0x284a62587:
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        case (byte *)0x284a6268b:
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        case (byte *)0x284a62697:
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        case (byte *)0x284a628eb:
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        case (byte *)0x284a628f7:
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        case (byte *)0x284a629fb:
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        case (byte *)0x284a62a07:
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        case (byte *)0x284a62a5b:
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        case (byte *)0x284a62a67:
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        case (byte *)0x284a62b6b:
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        case (byte *)0x284a62b77:
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        case (byte *)0x284a62dcb:
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        case (byte *)0x284a62dd7:
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        case (byte *)0x284a62edb:
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        case (byte *)0x284a62ee7:
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        case (byte *)0x284a62f60:
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        case (byte *)0x284a630a4:
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        case (byte *)0x284a649d0:
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        case (byte *)0x284a65bc9:
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        case (byte *)0x284a65bd5:
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        case (byte *)0x284a6af58:
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        case (byte *)0x284a6afa6:
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        case (byte *)0x284a6b1fb:
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        case (byte *)0x284a6b207:
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        case (byte *)0x284a6b264:
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        case (byte *)0x284a6b324:
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        case (byte *)0x284a6b36f:
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        case (byte *)0x284a6b37b:
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        case (byte *)0x284a6b4af:
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        case (byte *)0x284a6b600:
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        case (byte *)0x284a6b710:
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        case (byte *)0x284a6b71c:
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        case (byte *)0x284a6b791:
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        case (byte *)0x284a6b83b:
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        case (byte *)0x284a6b9f3:
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        case (byte *)0x284a6b9ff:
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        case (byte *)0x284a6bb30:
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        case (byte *)0x284a6bbc7:
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        case (byte *)0x284a6c086:
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        case (byte *)0x284a6c092:
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
      case 5:
        *(int *)(uVar26 + 0xd07ac8e7) = *(int *)(uVar26 + 0xd07ac8e7) + (int)param_2;
        puVar35 = (undefined *)(ulonglong)((uint)puVar35 | 0x1beb5ac);
      case 6:
        piVar3 = (int *)((ulonglong)(((uint)puVar35 | 0x9b0d8d48) + (int)pppppppuVar46) + 1);
        *piVar3 = *piVar3 + -0x480b0f90;
                    /* WARNING: Subroutine does not return */
        *(undefined8 *)((longlong)pppppppuVar57 + -8) = 0x141740479;
        pdb_142dc8590(0x4332ba20);
      case 7:
        *(uint *)(param_2 + 0xe) =
             *(uint *)(param_2 + 0xe) + (int)unaff_RBX + (uint)(0xfffffffebccd4227 < uVar26);
      }
      goto code_r0x00014173fea1;
    case "":
      *pcVar34 = *pcVar34 + cVar23;
      pppppppuVar61 = pppppppuVar57;
code_r0x00014173fb16:
      *(undefined8 *)((longlong)pppppppuVar61 + -8) = 0x14173fb27;
      pub_142e32760(param_1,unaff_RBX,200);
      ppppppuVar43 = unaff_RBX[0x1a];
      uVar25 = *(uint *)(unaff_RBX + 0x1b);
      uVar77 = *(uint *)((longlong)unaff_RBX + 0xdc);
      uVar73 = *(uint *)(unaff_RBX + 0x1c);
      uVar74 = *(uint *)((longlong)unaff_RBX + 0xe4);
      pppppppuVar46[0x25] = unaff_RBX[0x19];
      pppppppuVar46[0x26] = ppppppuVar43;
      *(uint *)(pppppppuVar46 + 0x27) = uVar25;
      *(uint *)((longlong)pppppppuVar46 + 0x13c) = uVar77;
      *(uint *)(pppppppuVar46 + 0x28) = uVar73;
      *(uint *)((longlong)pppppppuVar46 + 0x144) = uVar74;
      pppppppuVar46[0x4b] = (ulonglong ******)(unaff_RBX + 0x1d);
      *(undefined8 *)((longlong)pppppppuVar61 + -8) = 0x14173fb5f;
      pub_142e32760(unaff_RBX + 0x1d,param_1,0xe8);
      *(byte *)(unaff_RBX + 0x3a) = 0;
      goto code_r0x00014173fb85;
    case (char *)0x14173fcaa:
      *(int *)((longlong)pppppppuVar46 + 0x35) =
           *(int *)((longlong)pppppppuVar46 + 0x35) + (int)pppppppuVar67;
      break;
    case (char *)0x14173fcb6:
      *pcVar34 = *pcVar34 + cVar23;
      break;
    case (char *)0x14173fde7:
      *pcVar34 = *pcVar34;
      (&UNK_14332bd7f)[lVar33] = (&UNK_14332bd7f)[lVar33] + -0x48;
      *pcVar34 = *pcVar34 + cVar23;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case (char *)0x14173fe7e:
      puVar63 = (undefined8 *)((longlong)pppppppuVar57 + -8);
      pppppppuVar57 = (ulonglong *******)((longlong)pppppppuVar57 + -8);
      *puVar63 = pppppppuVar46;
      *(byte *)param_1 = *(byte *)param_1 >> 1 | *(byte *)param_1 << 7;
      *(uint *)(pppppppuVar46 + -4) = *(uint *)(pppppppuVar46 + -4) - (int)unaff_RBX;
      goto code_r0x00014173fe84;
    case (char *)0x14174043d:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case (char *)0x141740449:
      *(uint *)(unaff_RBX + 0x1eea03f) = *(uint *)(unaff_RBX + 0x1eea03f) + 1;
      goto code_r0x00014174044f;
    }
code_r0x00014173fcad:
    pppppppuVar46[0x49] = pppppppuVar46[0x4b];
                    /* WARNING: Subroutine does not return */
    *(undefined8 *)((longlong)pppppppuVar57 + -8) = 0x14173fcc7;
    pdb_142dc8570(&UNK_14332bb50);
  case (ulonglong *******)0x14173f5e7:
    *(uint *)(pppppppuVar46 + -0xc) = *(uint *)(pppppppuVar46 + -0xc) - (int)pppppppuVar27;
code_r0x00014173f5db:
    ppppppuVar43 = *param_2;
    ppppppuVar66 = param_2[1];
    ppppppuVar38 = param_2[2];
    ppppppuVar37 = param_2[3];
    pppppppuVar46[-10] = ppppppuVar38;
    pppppppuVar46[-9] = ppppppuVar37;
    pppppppuVar46[-0xc] = ppppppuVar43;
    pppppppuVar46[-0xb] = ppppppuVar66;
    ppppppuVar10 = param_2[4];
    ppppppuVar11 = param_2[5];
    ppppppuVar13 = param_2[6];
    ppppppuVar14 = param_2[7];
    pppppppuVar46[-8] = ppppppuVar10;
    pppppppuVar46[-7] = ppppppuVar11;
    pppppppuVar46[-6] = ppppppuVar13;
    pppppppuVar46[-5] = ppppppuVar14;
    pppppppuVar46[8] = (ulonglong ******)(param_2 + 8);
    param_2[8] = ppppppuVar43;
    param_2[9] = ppppppuVar66;
    param_2[10] = ppppppuVar38;
    param_2[0xb] = ppppppuVar37;
    param_2[0xc] = ppppppuVar10;
    param_2[0xd] = ppppppuVar11;
    param_2[0xe] = ppppppuVar13;
    param_2[0xf] = ppppppuVar14;
    *(byte *)(param_2 + 0x10) = 0;
code_r0x00014173f632:
    unaff_RBX = (ulonglong *******)param_2[8];
    ppppppuVar43 = param_2[9];
    ppppppuVar66 = param_2[0xb];
    pppppppuVar46[-4] = param_2[10];
    pppppppuVar46[-3] = ppppppuVar66;
    ppppppuVar66 = param_2[0xc];
    ppppppuVar38 = param_2[0xd];
    uVar25 = *(uint *)((longlong)param_2 + 0x74);
    uVar77 = *(uint *)(param_2 + 0xf);
    uVar73 = *(uint *)((longlong)param_2 + 0x7c);
    *(uint *)(pppppppuVar46 + 2) = *(uint *)(param_2 + 0xe);
    *(uint *)((longlong)pppppppuVar46 + 0x14) = uVar25;
    *(uint *)(pppppppuVar46 + 3) = uVar77;
    *(uint *)((longlong)pppppppuVar46 + 0x1c) = uVar73;
    *pppppppuVar46 = ppppppuVar66;
    pppppppuVar46[1] = ppppppuVar38;
    *(undefined8 *)((longlong)pppppppuVar57 + -8) = 0x14173f65a;
    pdb_14098a860(pppppppuVar46);
    pppppppuVar46[-2] = pppppppuVar46[-4];
    pppppppuVar46[-1] = pppppppuVar46[-3];
    param_1 = (ulonglong *******)pppppppuVar46[7];
    *(byte *)(param_1 + 0x10) = 1;
    if (!SBORROW8(0,(longlong)unaff_RBX)) {
      *pppppppuVar46 = pppppppuVar46[-2];
      pppppppuVar46[1] = pppppppuVar46[-1];
      *(undefined8 *)((longlong)pppppppuVar57 + -8) = 0x14173f68e;
      pdb_14007ee60();
      *(undefined8 *)((longlong)pppppppuVar57 + -8) = 0x14173f69d;
      pppppppuVar27 = (ulonglong *******)pub_1406abab0(0x30,8);
      if (pppppppuVar27 == (ulonglong *******)0x0) {
        pppppppuVar46[5] = ppppppuVar43;
        goto code_r0x00014173f6f4;
      }
      *pppppppuVar27 = (ulonglong ******)0x1;
      pppppppuVar27[1] = (ulonglong ******)0x1;
      pppppppuVar27[2] = (ulonglong ******)unaff_RBX;
      pppppppuVar27[3] = ppppppuVar43;
      in_XMM0_Qa = (ulonglong *******)*pppppppuVar46;
      in_XMM0_Qb = (ulonglong *******)pppppppuVar46[1];
      goto code_r0x00014173f6bd;
    }
    *pppppppuVar67 = (ulonglong ******)0x2;
    bVar22 = 3;
    pppppppuVar27 = pppppppuVar67;
    goto code_r0x00014173f6d9;
  case (ulonglong *******)0x14173f6f2:
    if (!bVar69) {
      puVar59 = (undefined8 *)((longlong)pppppppuVar57 + -8);
      pppppppuVar57 = (ulonglong *******)((longlong)pppppppuVar57 + -8);
      *puVar59 = 0x2deb9001;
      goto code_r0x00014173f726;
    }
code_r0x00014173f6f4:
    pppppppuVar46[8] = (ulonglong ******)unaff_RBX;
    pppppppuVar41 = (ulonglong *******)0x8;
code_r0x00014173f702:
                    /* WARNING: Subroutine does not return */
    *(undefined8 *)((longlong)pppppppuVar57 + -8) = 0x14173f707;
    pdb_142dc7e11(pppppppuVar41);
  case (ulonglong *******)0x14173f6fe:
    *(byte *)pppppppuVar27 = *(byte *)pppppppuVar27 ^ bVar20;
    *(byte *)pppppppuVar27 = *(byte *)pppppppuVar27 + bVar20;
    goto code_r0x00014173f702;
  case (ulonglong *******)0x14173f832:
    *(byte *)((longlong)unaff_RBX + 0x5f) = *(byte *)((longlong)unaff_RBX + 0x5f) & bVar48;
    return pppppppuVar27;
  case (ulonglong *******)0x14173f883:
    *(byte *)(param_2 + 3) = *(byte *)(param_2 + 3) + 0x84 + bVar68;
    pppppppuVar60 = pppppppuVar57;
code_r0x00014173f889:
    ppppppuVar43 = param_2[5];
    ppppppuVar66 = param_2[6];
    *(uint *)(pppppppuVar46 + -7) = uVar73;
    *(uint *)((longlong)pppppppuVar46 + -0x34) = uVar74;
    *(uint *)(pppppppuVar46 + -6) = in_XMM1_Dc;
    *(uint *)((longlong)pppppppuVar46 + -0x2c) = in_XMM1_Dd;
    pppppppuVar46[-5] = ppppppuVar43;
    pppppppuVar46[-4] = ppppppuVar66;
    pppppppuVar46[7] = (ulonglong ******)(param_2 + 7);
    param_2[7] = (ulonglong ******)in_XMM0_Qa;
    param_2[8] = (ulonglong ******)in_XMM0_Qb;
code_r0x00014173f8a1:
    ppppppuVar43 = pppppppuVar46[-5];
    param_2[0xb] = pppppppuVar46[-6];
    param_2[0xc] = ppppppuVar43;
    param_2[0xd] = pppppppuVar46[-4];
    param_2[9] = pppppppuVar46[-8];
    param_2[10] = pppppppuVar46[-7];
    *(byte *)(param_2 + 0xe) = 0;
    ppppppuVar43 = param_2[7];
    pppppppuVar46[-2] = param_2[8];
    pppppppuVar46[-1] = param_2[9];
    ppppppuVar66 = param_2[10];
    ppppppuVar38 = param_2[0xb];
    ppppppuVar37 = param_2[0xd];
    pppppppuVar46[2] = param_2[0xc];
    pppppppuVar46[3] = ppppppuVar37;
    *pppppppuVar46 = ppppppuVar66;
    pppppppuVar46[1] = ppppppuVar38;
    *(undefined8 *)((longlong)pppppppuVar60 + -8) = 0x14173f90f;
    pdb_14098a860(pppppppuVar46);
    pppppppuVar46[-0xc] = pppppppuVar46[-2];
    pppppppuVar46[-0xb] = pppppppuVar46[-1];
    unaff_RBX = (ulonglong *******)pppppppuVar46[6];
    *(undefined1 *)(unaff_RBX + 0xe) = 1;
    if (SBORROW8(0,(longlong)ppppppuVar43)) {
      *pppppppuVar67 = (ulonglong ******)0x2;
      uVar21 = 3;
      goto code_r0x00014173f997;
    }
    pppppppuVar46[3] = pppppppuVar46[-0xc];
    pppppppuVar46[4] = pppppppuVar46[-0xb];
    *pppppppuVar46 = (ulonglong ******)0x1;
    pppppppuVar46[1] = (ulonglong ******)0x1;
    pppppppuVar46[2] = ppppppuVar43;
    goto code_r0x00014173f94f;
  case (ulonglong *******)0x14173f993:
    *(char *)(uVar26 + 0x1bb764585) = *(char *)(uVar26 + 0x1bb764585) + (char)unaff_R14 + bVar68;
    return pppppppuVar67;
  case (ulonglong *******)0x14173f99f:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (ulonglong *******)0x14173fabe:
    return pppppppuVar27;
  case (ulonglong *******)0x14173fb14:
    pppppppuVar61 = pppppppuVar57;
    if ((longlong)uVar26 < -0x14332bd84) goto code_r0x00014173fb16;
code_r0x00014173fb76:
    pppppppuVar46[0x4b] = (ulonglong ******)pppppppuVar41;
    if ((int)pppppppuVar27 != 0) {
      pppppppuVar57 = pppppppuVar61;
      if ((int)pppppppuVar27 != 1) {
        pppppppuVar46[0x49] = pppppppuVar46[0x4b];
                    /* WARNING: Subroutine does not return */
        *(undefined8 *)((longlong)pppppppuVar61 + -8) = 0x14173fcfc;
        pdb_142dc8590(&UNK_14332bb50);
      }
      goto code_r0x00014173fcad;
    }
code_r0x00014173fb85:
    ppppppuVar43 = unaff_RBX[0x1d];
    *(undefined8 *)((longlong)pppppppuVar61 + -8) = 0x14173fba5;
    pub_142e32760(pppppppuVar46 + 0x29,unaff_RBX + 0x1e,0xc0);
    ppppppuVar66 = unaff_RBX[0x36];
    ppppppuVar38 = unaff_RBX[0x37];
    uVar25 = *(uint *)((longlong)unaff_RBX + 0x1c4);
    uVar77 = *(uint *)(unaff_RBX + 0x39);
    uVar73 = *(uint *)((longlong)unaff_RBX + 0x1cc);
    *(uint *)(pppppppuVar46 + 0x46) = *(uint *)(unaff_RBX + 0x38);
    *(uint *)((longlong)pppppppuVar46 + 0x234) = uVar25;
    *(uint *)(pppppppuVar46 + 0x47) = uVar77;
    *(uint *)((longlong)pppppppuVar46 + 0x23c) = uVar73;
    pppppppuVar46[0x44] = ppppppuVar66;
    pppppppuVar46[0x45] = ppppppuVar38;
    *(undefined8 *)((longlong)pppppppuVar61 + -8) = 0x14173fbcd;
    pdb_14098a860(pppppppuVar46 + 0x44);
    *(undefined8 *)((longlong)pppppppuVar61 + -8) = 0x14173fbe4;
    pub_142e32760(pppppppuVar46 + -0xc,pppppppuVar46 + 0x29,0xc0);
    unaff_RBX = (ulonglong *******)pppppppuVar46[0x4a];
    *(undefined1 *)(unaff_RBX + 0x3a) = 1;
    if (!SBORROW8(0,(longlong)ppppppuVar43)) {
      *(undefined8 *)((longlong)pppppppuVar61 + -8) = 0x14173fc1b;
      pub_142e32760(pppppppuVar46 + 0x2c,pppppppuVar46 + -0xc,0xc0);
      pppppppuVar46[0x29] = (ulonglong ******)0x1;
      pppppppuVar46[0x2a] = (ulonglong ******)0x1;
      pppppppuVar46[0x2b] = ppppppuVar43;
      goto code_r0x00014173fc38;
    }
    *pppppppuVar67 = (ulonglong ******)0x2;
    uVar21 = 3;
    pppppppuVar27 = pppppppuVar67;
    goto code_r0x00014173fc81;
  case (ulonglong *******)0x14173fc76:
    goto code_r0x00014173fc74;
  case (ulonglong *******)0x14173fc82:
    uVar25 = ((int)pppppppuVar27 + -1) - (uint)bVar68;
    *(char *)(ulonglong)uVar25 = *(char *)(ulonglong)uVar25 + (char)uVar25;
    return pppppppuVar67;
  case (ulonglong *******)0x14173fdb3:
    (&UNK_14332bd11)[uVar26] = (&UNK_14332bd11)[uVar26] + -0x7c;
    *(byte *)pppppppuVar27 = *(byte *)pppppppuVar27 + bVar20;
code_r0x00014173fdbb:
    *(undefined8 *)((longlong)pppppppuVar57 + -8) = 0x14173fdc0;
    pppppppuVar41 = (ulonglong *******)pdb_14098b910(pppppppuVar41);
    return pppppppuVar41;
  case (ulonglong *******)0x14173fe4a:
    *(byte *)pppppppuVar27 = *(byte *)pppppppuVar27 + bVar20;
code_r0x00014173fe4c:
    *(undefined8 *)((longlong)pppppppuVar57 + -8) = 0x14173fe55;
    pdb_141748860(pppppppuVar41);
    in_XMM0_Qa = (ulonglong *******)pppppppuVar46[0x18];
    in_XMM0_Qb = (ulonglong *******)pppppppuVar46[0x19];
    uVar73 = *(uint *)(pppppppuVar46 + 0x1a);
    uVar74 = *(uint *)((longlong)pppppppuVar46 + 0xd4);
    in_XMM1_Dc = *(uint *)(pppppppuVar46 + 0x1b);
    in_XMM1_Dd = *(uint *)((longlong)pppppppuVar46 + 0xdc);
code_r0x00014173fe65:
    uVar75 = *(uint *)(pppppppuVar46 + 0x1c);
    uVar76 = *(uint *)((longlong)pppppppuVar46 + 0xe4);
    in_XMM2_Dc = *(uint *)(pppppppuVar46 + 0x1d);
    in_XMM2_Dd = *(uint *)((longlong)pppppppuVar46 + 0xec);
    uVar25 = *(uint *)(pppppppuVar46 + 0x1e);
    uVar77 = *(uint *)((longlong)pppppppuVar46 + 0xf4);
    in_XMM3_Dc = *(uint *)(pppppppuVar46 + 0x1f);
    in_XMM3_Dd = *(uint *)((longlong)pppppppuVar46 + 0xfc);
    pppppppuVar46[-10] = (ulonglong ******)in_XMM0_Qa;
    pppppppuVar46[-9] = (ulonglong ******)in_XMM0_Qb;
    *(uint *)(pppppppuVar46 + -8) = uVar73;
    *(uint *)((longlong)pppppppuVar46 + -0x3c) = uVar74;
    *(uint *)(pppppppuVar46 + -7) = in_XMM1_Dc;
    *(uint *)((longlong)pppppppuVar46 + -0x34) = in_XMM1_Dd;
    *(uint *)(pppppppuVar46 + -6) = uVar75;
    *(uint *)((longlong)pppppppuVar46 + -0x2c) = uVar76;
    *(uint *)(pppppppuVar46 + -5) = in_XMM2_Dc;
    *(uint *)((longlong)pppppppuVar46 + -0x24) = in_XMM2_Dd;
    *(uint *)(pppppppuVar46 + -4) = uVar25;
    *(uint *)((longlong)pppppppuVar46 + -0x1c) = uVar77;
    *(uint *)(pppppppuVar46 + -3) = in_XMM3_Dc;
    *(uint *)((longlong)pppppppuVar46 + -0x14) = in_XMM3_Dd;
code_r0x00014173fe84:
    pppppppuVar46[-2] = pppppppuVar46[0x20];
    param_2 = (ulonglong *******)pppppppuVar46[0x29];
    param_2[0x10] = pppppppuVar46[0x20];
    *(uint *)(param_2 + 0xe) = uVar25;
    *(uint *)((longlong)param_2 + 0x74) = uVar77;
    *(uint *)(param_2 + 0xf) = in_XMM3_Dc;
    *(uint *)((longlong)param_2 + 0x7c) = in_XMM3_Dd;
code_r0x00014173fea1:
    *(uint *)(param_2 + 0xc) = uVar75;
    *(uint *)((longlong)param_2 + 100) = uVar76;
    *(uint *)(param_2 + 0xd) = in_XMM2_Dc;
    *(uint *)((longlong)param_2 + 0x6c) = in_XMM2_Dd;
    *(uint *)(param_2 + 10) = uVar73;
    *(uint *)((longlong)param_2 + 0x54) = uVar74;
    *(uint *)(param_2 + 0xb) = in_XMM1_Dc;
    *(uint *)((longlong)param_2 + 0x5c) = in_XMM1_Dd;
    param_2[8] = (ulonglong ******)in_XMM0_Qa;
    param_2[9] = (ulonglong ******)in_XMM0_Qb;
    if (*(byte *)(param_2 + 0x10) != 0) {
      if (*(byte *)(param_2 + 0x10) != 1) {
                    /* WARNING: Subroutine does not return */
        *(undefined8 *)((longlong)pppppppuVar57 + -8) = 0x14174046a;
        pdb_142dc8590(&UNK_14332bb00);
      }
code_r0x00014174044f:
                    /* WARNING: Subroutine does not return */
      *(undefined8 *)((longlong)pppppppuVar57 + -8) = 0x14174045b;
      pdb_142dc8570(&UNK_14332bb00);
    }
    pppppppuVar46[0x26] = param_2[8];
    ppppppuVar43 = param_2[9];
    param_1 = (ulonglong *******)param_2[10];
    ppppppuVar66 = param_2[0xc];
    ppppppuVar38 = param_2[0xd];
    uVar25 = *(uint *)((longlong)param_2 + 0x74);
    uVar77 = *(uint *)(param_2 + 0xf);
    uVar73 = *(uint *)((longlong)param_2 + 0x7c);
    *(uint *)(pppppppuVar46 + 0x12) = *(uint *)(param_2 + 0xe);
    *(uint *)((longlong)pppppppuVar46 + 0x94) = uVar25;
    *(uint *)(pppppppuVar46 + 0x13) = uVar77;
    *(uint *)((longlong)pppppppuVar46 + 0x9c) = uVar73;
    pppppppuVar46[0x10] = ppppppuVar66;
    pppppppuVar46[0x11] = ppppppuVar38;
    ppppppuVar66 = pppppppuVar46[0x10];
    pppppppuVar46[0x27] = ppppppuVar43;
    *(undefined8 *)((longlong)pppppppuVar57 + -8) = 0x14173ff09;
    pdb_141c2f360(pppppppuVar46 + 0x18,ppppppuVar66 + 2,ppppppuVar43,param_1);
    auVar72[0] = -(*(byte *)(pppppppuVar46 + 0x18) == DAT_142f5c7c0);
    auVar72[1] = -(*(byte *)((longlong)pppppppuVar46 + 0xc1) == UNK_142f5c7c1);
    auVar72[2] = -(*(byte *)((longlong)pppppppuVar46 + 0xc2) == UNK_142f5c7c2);
    auVar72[3] = -(*(byte *)((longlong)pppppppuVar46 + 0xc3) == UNK_142f5c7c3);
    auVar72[4] = -(*(byte *)((longlong)pppppppuVar46 + 0xc4) == UNK_142f5c7c4);
    auVar72[5] = -(*(byte *)((longlong)pppppppuVar46 + 0xc5) == UNK_142f5c7c5);
    auVar72[6] = -(*(byte *)((longlong)pppppppuVar46 + 0xc6) == UNK_142f5c7c6);
    auVar72[7] = -(*(byte *)((longlong)pppppppuVar46 + 199) == UNK_142f5c7c7);
    auVar72[8] = -(*(byte *)(pppppppuVar46 + 0x19) == UNK_142f5c7c8);
    auVar72[9] = -(*(byte *)((longlong)pppppppuVar46 + 0xc9) == UNK_142f5c7c9);
    auVar72[10] = -(*(byte *)((longlong)pppppppuVar46 + 0xca) == UNK_142f5c7ca);
    auVar72[0xb] = -(*(byte *)((longlong)pppppppuVar46 + 0xcb) == UNK_142f5c7cb);
    auVar72[0xc] = -(*(byte *)((longlong)pppppppuVar46 + 0xcc) == UNK_142f5c7cc);
    auVar72[0xd] = -(*(byte *)((longlong)pppppppuVar46 + 0xcd) == UNK_142f5c7cd);
    auVar72[0xe] = -(*(byte *)((longlong)pppppppuVar46 + 0xce) == UNK_142f5c7ce);
    auVar72[0xf] = -(*(byte *)((longlong)pppppppuVar46 + 0xcf) == UNK_142f5c7cf);
    ppppppuVar43 = pppppppuVar46[0x1a];
    if ((ushort)((ushort)(SUB161(auVar72 >> 7,0) & 1) | (ushort)(SUB161(auVar72 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar72 >> 0x17,0) & 1) << 2 |
                 (ushort)(SUB161(auVar72 >> 0x1f,0) & 1) << 3 |
                 (ushort)(SUB161(auVar72 >> 0x27,0) & 1) << 4 |
                 (ushort)(SUB161(auVar72 >> 0x2f,0) & 1) << 5 |
                 (ushort)(SUB161(auVar72 >> 0x37,0) & 1) << 6 |
                 (ushort)(SUB161(auVar72 >> 0x3f,0) & 1) << 7 |
                 (ushort)(SUB161(auVar72 >> 0x47,0) & 1) << 8 |
                 (ushort)(SUB161(auVar72 >> 0x4f,0) & 1) << 9 |
                 (ushort)(SUB161(auVar72 >> 0x57,0) & 1) << 10 |
                 (ushort)(SUB161(auVar72 >> 0x5f,0) & 1) << 0xb |
                 (ushort)(SUB161(auVar72 >> 0x67,0) & 1) << 0xc |
                 (ushort)(SUB161(auVar72 >> 0x6f,0) & 1) << 0xd |
                 (ushort)(SUB161(auVar72 >> 0x77,0) & 1) << 0xe | (ushort)(auVar72[0xf] >> 7) << 0xf
                ) != 0xffff) {
      pppppppuVar46[0xf] = pppppppuVar46[0x25];
      pppppppuVar46[0xd] = pppppppuVar46[0x23];
      pppppppuVar46[0xe] = pppppppuVar46[0x24];
      *(uint *)(pppppppuVar46 + 0xb) = *(uint *)(pppppppuVar46 + 0x21);
      *(uint *)((longlong)pppppppuVar46 + 0x5c) = *(uint *)((longlong)pppppppuVar46 + 0x10c);
      *(uint *)(pppppppuVar46 + 0xc) = *(uint *)(pppppppuVar46 + 0x22);
      *(uint *)((longlong)pppppppuVar46 + 100) = *(uint *)((longlong)pppppppuVar46 + 0x114);
      *(uint *)(pppppppuVar46 + 9) = *(uint *)(pppppppuVar46 + 0x1f);
      *(uint *)((longlong)pppppppuVar46 + 0x4c) = *(uint *)((longlong)pppppppuVar46 + 0xfc);
      *(uint *)(pppppppuVar46 + 10) = *(uint *)(pppppppuVar46 + 0x20);
      *(uint *)((longlong)pppppppuVar46 + 0x54) = *(uint *)((longlong)pppppppuVar46 + 0x104);
      *(uint *)(pppppppuVar46 + 7) = *(uint *)(pppppppuVar46 + 0x1d);
      *(uint *)((longlong)pppppppuVar46 + 0x3c) = *(uint *)((longlong)pppppppuVar46 + 0xec);
      *(uint *)(pppppppuVar46 + 8) = *(uint *)(pppppppuVar46 + 0x1e);
      *(uint *)((longlong)pppppppuVar46 + 0x44) = *(uint *)((longlong)pppppppuVar46 + 0xf4);
      pppppppuVar46[5] = pppppppuVar46[0x1b];
      pppppppuVar46[6] = pppppppuVar46[0x1c];
      pppppppuVar46[2] = pppppppuVar46[0x18];
      pppppppuVar46[3] = pppppppuVar46[0x19];
      pppppppuVar46[4] = ppppppuVar43;
      unaff_RBX = (ulonglong *******)pppppppuVar46[0x11];
      if (unaff_RBX != (ulonglong *******)0x0) {
        unaff_R15 = unaff_RBX + 7;
        LOCK();
        bVar68 = *(byte *)(unaff_RBX + 7) == 0;
        if (bVar68) {
          *(byte *)(unaff_RBX + 7) = 1;
        }
        UNLOCK();
        if (!bVar68) {
          *(byte *)((longlong)pppppppuVar46 + 0x15f) = 1;
          *(byte *)((longlong)pppppppuVar46 + 0x15e) = 1;
          *(undefined8 *)((longlong)pppppppuVar57 + -8) = 0x1417403b0;
          pdb_142dc6be0(unaff_R15);
        }
        unaff_R14 = _DAT_143ca8f38;
        if (((ulonglong)*_DAT_143ca8f38 & 0x7fffffffffffffff) == 0) {
          pppppppuVar27 = (ulonglong *******)0x0;
          uVar25 = 0;
          pppppppuVar64 = pppppppuVar57;
          if (*(byte *)((longlong)unaff_RBX + 0x39) != 0) {
code_r0x0001417403d8:
            pppppppuVar46[0x18] = (ulonglong ******)unaff_R15;
            *(byte *)(pppppppuVar46 + 0x19) = (byte)pppppppuVar27;
            *(undefined **)((longlong)pppppppuVar64 + 0x20) = &UNK_14332bae8;
            pppppppuVar41 = (ulonglong *******)&UNK_14332b8d0;
            pppppppuVar65 = pppppppuVar64;
code_r0x00014174040b:
                    /* WARNING: Subroutine does not return */
            *(undefined8 *)((longlong)pppppppuVar65 + -8) = 0x141740410;
            pdb_142dc8170(pppppppuVar41);
          }
        }
        else {
          *(byte *)((longlong)pppppppuVar46 + 0x15f) = 1;
          *(byte *)((longlong)pppppppuVar46 + 0x15e) = 1;
          *(undefined8 *)((longlong)pppppppuVar57 + -8) = 0x1417403c9;
          uVar26 = pdb_142dc79e0();
          pppppppuVar27 = (ulonglong *******)(uVar26 ^ 1);
          bVar68 = *(byte *)((longlong)unaff_RBX + 0x39) == 0;
code_r0x0001417403d2:
          uVar25 = (uint)pppppppuVar27;
          pppppppuVar64 = pppppppuVar57;
          if (!bVar68) goto code_r0x0001417403d8;
        }
        *(uint *)(pppppppuVar46 + 0x2b) = uVar25;
        pppppppuVar46[0x28] = (ulonglong ******)unaff_R15;
        pppppppuVar46[0x22] = pppppppuVar46[0xc];
        pppppppuVar46[0x23] = pppppppuVar46[0xd];
        pppppppuVar46[0x20] = pppppppuVar46[10];
        pppppppuVar46[0x21] = pppppppuVar46[0xb];
        *(uint *)(pppppppuVar46 + 0x1e) = *(uint *)(pppppppuVar46 + 8);
        *(uint *)((longlong)pppppppuVar46 + 0xf4) = *(uint *)((longlong)pppppppuVar46 + 0x44);
        *(uint *)(pppppppuVar46 + 0x1f) = *(uint *)(pppppppuVar46 + 9);
        *(uint *)((longlong)pppppppuVar46 + 0xfc) = *(uint *)((longlong)pppppppuVar46 + 0x4c);
        *(uint *)(pppppppuVar46 + 0x1c) = *(uint *)(pppppppuVar46 + 6);
        *(uint *)((longlong)pppppppuVar46 + 0xe4) = *(uint *)((longlong)pppppppuVar46 + 0x34);
        *(uint *)(pppppppuVar46 + 0x1d) = *(uint *)(pppppppuVar46 + 7);
        *(uint *)((longlong)pppppppuVar46 + 0xec) = *(uint *)((longlong)pppppppuVar46 + 0x3c);
        *(uint *)(pppppppuVar46 + 0x1a) = *(uint *)(pppppppuVar46 + 4);
        *(uint *)((longlong)pppppppuVar46 + 0xd4) = *(uint *)((longlong)pppppppuVar46 + 0x24);
        *(uint *)(pppppppuVar46 + 0x1b) = *(uint *)(pppppppuVar46 + 5);
        *(uint *)((longlong)pppppppuVar46 + 0xdc) = *(uint *)((longlong)pppppppuVar46 + 0x2c);
        pppppppuVar46[0x18] = pppppppuVar46[2];
        pppppppuVar46[0x19] = pppppppuVar46[3];
        *(undefined8 *)((longlong)pppppppuVar57 + -8) = 0x141740071;
        pdb_1417b89d0(unaff_RBX + 8,pppppppuVar46 + 0x18);
        unaff_R15 = unaff_RBX + 7;
        if ((*(byte *)(pppppppuVar46 + 0x2b) == 0) &&
           (((ulonglong)*unaff_R14 & 0x7fffffffffffffff) != 0)) goto code_r0x000141740425;
        goto code_r0x00014174008e;
      }
      uVar25 = (uint)CONCAT71((int7)((ulonglong)pppppppuVar46[0x19] >> 8),1);
      goto code_r0x0001417400b6;
    }
    *(undefined8 *)((longlong)pppppppuVar57 + -8) = 0x14173ff38;
    pdb_14098a860(pppppppuVar46 + 0x10);
    ppppppuVar66 = pppppppuVar46[0x26];
    if (ppppppuVar66 != (ulonglong ******)0x0) {
      ppppppuVar38 = pppppppuVar46[0x27];
      *(undefined8 *)((longlong)pppppppuVar57 + -8) = 0x14173ff57;
      pub_1406abac0((byte *)ppppppuVar38,(ulonglong)ppppppuVar66,1);
    }
    ppppppuVar66 = pppppppuVar46[0x29];
    *(undefined1 *)(ppppppuVar66 + 0x10) = 1;
code_r0x000141740265:
    pppppppuVar46[0x18] = ppppppuVar43;
    *(undefined8 *)((longlong)pppppppuVar57 + -8) = 0x141740271;
    pdb_14007ee60();
    *(undefined8 *)((longlong)pppppppuVar57 + -8) = 0x141740280;
    ppppppuVar38 = (ulonglong ******)pub_1406abab0(8,8);
    if (ppppppuVar38 == (ulonglong ******)0x0) {
                    /* WARNING: Subroutine does not return */
      *(undefined8 *)((longlong)pppppppuVar57 + -8) = 0x141740363;
      pdb_142dc7e11(8,8);
    }
    *ppppppuVar38 = (ulonglong *****)ppppppuVar43;
    ppppppuVar37 = (ulonglong ******)0x1;
    ppppppuVar43 = (ulonglong ******)&UNK_1430712c0;
code_r0x000141740298:
    *pppppppuVar67 = ppppppuVar37;
    pppppppuVar67[1] = ppppppuVar38;
    pppppppuVar67[2] = ppppppuVar43;
    uVar21 = 1;
code_r0x0001417402a5:
    *(undefined1 *)(ppppppuVar66 + 0x11) = uVar21;
    return pppppppuVar67;
  case (ulonglong *******)0x141740409:
    *(byte *)pppppppuVar27 = *(byte *)pppppppuVar27 + bVar20;
    pppppppuVar65 = pppppppuVar57;
    goto code_r0x00014174040b;
  case (ulonglong *******)0x141740415:
    *(byte *)pppppppuVar27 = *(byte *)pppppppuVar27 + bVar20;
    *(byte *)(param_2 + 7) = *(byte *)(param_2 + 7) + cVar49;
    goto code_r0x00014174041d;
  }
code_r0x00014173f6de:
  (&UNK_14332bced)[lVar33] = (&UNK_14332bced)[lVar33] + 'd';
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
code_r0x00014173f6ba:
code_r0x00014173f6bd:
  pppppppuVar27[4] = (ulonglong ******)in_XMM0_Qa;
  pppppppuVar27[5] = (ulonglong ******)in_XMM0_Qb;
  *pppppppuVar67 = (ulonglong ******)0x0;
  pppppppuVar67[1] = (ulonglong ******)pppppppuVar27;
  pppppppuVar67[2] = (ulonglong ******)&UNK_14332ba78;
  bVar22 = 1;
  pppppppuVar27 = pppppppuVar67;
code_r0x00014173f6d9:
  *(byte *)(param_1 + 0x11) = bVar22;
code_r0x00014173f6e2:
  return pppppppuVar27;
}

