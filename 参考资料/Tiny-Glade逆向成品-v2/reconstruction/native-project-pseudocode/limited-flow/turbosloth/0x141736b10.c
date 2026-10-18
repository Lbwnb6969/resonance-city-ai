// VA 0x141736b10, PDB extent 632 bytes
// turbosloth::asset::impl$44::build::async_block$3<clutter_pack_pipe::ClutterObjectList,turbosloth::asset::BuildContext>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/turbosloth/src/asset.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Instruction at (ram,0x0001417403e9) overlaps instruction at (ram,0x0001417403e5)
    */
/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   turbosloth::asset::impl$44::build::async_block$3<clutter_pack_pipe::ClutterObjectList,turbosloth::asset::BuildContext>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/turbosloth/src/asset.rs
   Extent: 632 */

byte * pdb_141736b10(byte *param_1,byte *param_2,undefined8 param_3,undefined8 param_4,byte *param_5
                    ,undefined8 param_6,longlong *param_7,byte *param_8,longlong param_9,
                    longlong param_10,undefined8 param_11,byte *param_12,byte *param_13,
                    byte *param_14,byte *param_15,byte *param_16,byte *param_17,byte *param_18,
                    byte *param_19,byte *param_20,byte *param_21,byte *param_22,byte *param_23,
                    undefined8 param_24,byte *param_25,byte *param_26,undefined8 param_27,
                    undefined8 param_28,longlong *param_29,byte *param_30,ulonglong param_31,
                    byte *param_32,byte *param_33,byte *param_34,undefined8 param_35,
                    ulonglong param_36)

{
  uint *puVar1;
  int *piVar2;
  longlong lVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  longlong *plVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  ulonglong *puVar13;
  byte *pbVar14;
  byte *pbVar15;
  byte *pbVar16;
  byte bVar17;
  undefined1 uVar18;
  char cVar19;
  byte bVar20;
  uint uVar22;
  longlong lVar23;
  byte *pbVar24;
  code *UNRECOVERED_JUMPTABLE;
  byte *pbVar25;
  undefined1 (*pauVar26) [16];
  longlong *plVar27;
  byte *pbVar28;
  longlong lVar29;
  longlong lVar30;
  undefined8 uVar31;
  ulonglong uVar32;
  char *pcVar33;
  byte *pbVar34;
  undefined1 *puVar35;
  byte *pbVar36;
  undefined *puVar37;
  undefined1 (*arg1) [16];
  undefined1 (*pauVar38) [16];
  undefined8 uVar39;
  byte *unaff_RBX;
  byte **ppbVar40;
  ulonglong uVar41;
  byte *unaff_RBP;
  byte **ppbVar42;
  byte *unaff_RDI;
  longlong in_R11;
  ulonglong unaff_R12;
  byte *unaff_R13;
  int *unaff_R14;
  byte *unaff_R15;
  bool bVar43;
  bool bVar44;
  byte *in_XMM0_Qa;
  undefined8 in_XMM0_Qb;
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined4 uVar48;
  undefined8 in_XMM1_Qa;
  undefined4 uVar49;
  undefined4 in_XMM1_Dc;
  undefined4 in_XMM1_Dd;
  undefined4 uVar50;
  undefined8 in_XMM2_Qa;
  undefined4 uVar51;
  undefined4 in_XMM2_Dc;
  undefined4 in_XMM2_Dd;
  byte *unaff_XMM6_Qa;
  undefined8 unaff_XMM6_Qb;
  longlong unaff_retaddr;
  byte *pbStackX_18;
  byte *pbStackX_20;
  undefined8 in_stack_000001e8;
  undefined8 in_stack_000001f0;
  undefined4 uStack00000000000001f8;
  undefined4 uStack00000000000001fc;
  undefined4 uStack0000000000000200;
  undefined4 uStack0000000000000204;
  byte *in_stack_00000210;
  byte *in_stack_00000218;
  byte *pbStack_c0;
  undefined1 auStack_b8 [32];
  byte *pbStack_98;
  byte *pbStack_90;
  undefined8 uStack_88;
  byte *pbStack_80;
  byte *pbStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  byte *pbStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  byte *pbStack_48;
  byte *pbStack_40;
  byte *pbStack_38;
  int iVar21;
  
  uVar51 = (undefined4)((ulonglong)in_XMM2_Qa >> 0x20);
  uVar50 = (undefined4)in_XMM2_Qa;
  uVar49 = (undefined4)((ulonglong)in_XMM1_Qa >> 0x20);
  uVar48 = (undefined4)in_XMM1_Qa;
  ppbVar40 = (byte **)auStack_b8;
  ppbVar42 = &pbStack_38;
  uStack_50 = 0xfffffffffffffffe;
  pbVar36 = &UNK_14332bd64;
  lVar23 = (longlong)*(int *)(&UNK_14332bd64 + (ulonglong)param_2[0x30] * 4);
  pbVar24 = &UNK_14332bd64 + lVar23;
  bVar20 = (byte)pbVar24;
  cVar19 = (char)((ulonglong)unaff_RBX >> 8);
  pbVar28 = pbVar24;
  pbStack_48 = unaff_XMM6_Qa;
  pbStack_40 = (byte *)unaff_XMM6_Qb;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(param_2[0x30]) {
  case 0:
    *(byte **)(param_2 + 0x20) = param_2;
    param_2[0x28] = 0;
    param_2[0x29] = 0;
    param_2[0x2a] = 0;
    param_2[0x2b] = 0;
    param_2[0x2c] = 0;
    param_2[0x2d] = 0;
    param_2[0x2e] = 0;
    param_2[0x2f] = 0;
  case 3:
    uStack_68 = param_2 + 0x20;
    pbStack_c0 = (byte *)0x141736b73;
    pbStack_60 = param_2;
    pdb_140b34c60(&pbStack_90,uStack_68,(longlong)&uStack_58 + 7);
    if (pbStack_90 == (byte *)0x2) {
      bVar20 = 3;
      uVar39 = 1;
    }
    else {
      if (*(byte **)(pbStack_60 + 0x28) != (byte *)0x0) {
        pbStack_c0 = (byte *)0x141736bad;
        uStack_68 = *(byte **)(pbStack_60 + 0x28);
        pdb_140974580();
        pbStack_c0 = (byte *)0x141736bc2;
        pub_1406abac0(uStack_68,0x38,8);
      }
      pbVar28 = pbStack_80;
      pbVar36 = uStack_88;
      pbVar24 = pbStack_78;
      pbVar25 = uStack_70;
      if ((int)pbStack_90 == 1) {
        pbVar36 = *(byte **)(pbStack_60 + 0x10);
        pbVar28 = *(byte **)(pbStack_60 + 0x18);
        pbStack_c0 = (byte *)0x141736bd9;
        pdb_14007ee60();
        pbStack_c0 = (byte *)0x141736be8;
        pbVar24 = pub_1406abab0(0x10,8);
        if (pbVar24 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
          pbStack_c0 = (byte *)0x141736c5b;
          pdb_142dc7e11(8,0x10);
        }
        pbVar24[0] = 1;
        pbVar24[1] = 0;
        pbVar24[2] = 0;
        pbVar24[3] = 0;
        pbVar24[4] = 0;
        pbVar24[5] = 0;
        pbVar24[6] = 0;
        pbVar24[7] = 0;
        pbVar24[8] = 1;
        pbVar24[9] = 0;
        pbVar24[10] = 0;
        pbVar24[0xb] = 0;
        pbVar24[0xc] = 0;
        pbVar24[0xd] = 0;
        pbVar24[0xe] = 0;
        pbVar24[0xf] = 0;
        pbVar25 = &UNK_14332b300;
      }
      pbStack_c0 = (byte *)0x141736c19;
      pdb_14097dce0();
      *(byte **)(param_1 + 8) = pbVar36;
      *(byte **)(param_1 + 0x10) = pbVar28;
      *(byte **)(param_1 + 0x18) = pbVar24;
      *(byte **)(param_1 + 0x20) = pbVar25;
      bVar20 = 1;
      uVar39 = 0;
    }
    *(undefined8 *)param_1 = uVar39;
    pbStack_60[0x30] = bVar20;
    return param_1;
  case 1:
                    /* WARNING: Subroutine does not return */
    pbStack_c0 = (byte *)0x141736c76;
    pdb_142dc8570(&UNK_14332b2c8);
  case 2:
                    /* WARNING: Subroutine does not return */
    pbStack_c0 = (byte *)0x141736c6a;
    pdb_142dc8590(&UNK_14332b2c8);
  case 4:
    UNRECOVERED_JUMPTABLE =
         (code *)(&UNK_14332bd74 + *(int *)(&UNK_14332bd74 + (longlong)pbVar24 * 4));
    goto code_r0x000141736dcc;
  case 5:
    *(int *)(lVar23 + 0xd07ac873) = *(int *)(lVar23 + 0xd07ac873) + (int)param_2;
                    /* WARNING: Subroutine does not return */
    pbStack_c0 = (byte *)0x141736eea;
    pdb_142dc8590();
  case 6:
    *pbVar24 = *pbVar24 + bVar20;
    param_2[0x10] = param_2[0x10] + cVar19;
                    /* WARNING: Subroutine does not return */
    pbStack_c0 = (byte *)0x141736edb;
    pdb_142dc7e11();
  case 7:
    UNRECOVERED_JUMPTABLE = (code *)(ulonglong)((int)pbVar24 + 0x4332bd64);
code_r0x000141736dcc:
                    /* WARNING: Could not recover jumptable at 0x000141736dcc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pbVar36 = (byte *)(*UNRECOVERED_JUMPTABLE)();
    return pbVar36;
  case 8:
                    /* WARNING: Call to offcut address within same function */
    pbStack_c0 = (byte *)0x141737034;
    in_XMM0_Qa = (byte *)func_0x000141737032();
    param_1 = pbVar36;
    in_XMM0_Qb = extraout_XMM0_Qb;
  case 0xb:
    pbVar28 = param_1;
    bVar20 = param_2[0x30];
    pbVar36 = &UNK_14332bd84;
    uVar32 = (ulonglong)*(int *)(&UNK_14332bd84 + (ulonglong)bVar20 * 4);
    bVar44 = 0xfffffffebccd427b < uVar32;
    pbVar24 = &UNK_14332bd84 + uVar32;
    bVar43 = pbVar24 == (byte *)0x0;
    bVar17 = (byte)pbVar24;
    iVar21 = (int)pbVar24;
    param_1 = pbVar28;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(bVar20) {
    case 0:
code_r0x00014173704e:
      *(byte **)(param_2 + 0x20) = param_2;
      param_2[0x28] = 0;
      param_2[0x29] = 0;
      param_2[0x2a] = 0;
      param_2[0x2b] = 0;
      param_2[0x2c] = 0;
      param_2[0x2d] = 0;
      param_2[0x2e] = 0;
      param_2[0x2f] = 0;
      break;
    case 1:
code_r0x00014173716a:
                    /* WARNING: Subroutine does not return */
      pbStack_c0 = (byte *)0x141737176;
      pdb_142dc8570(&UNK_14332b2c8);
    case 2:
code_r0x00014173715e:
                    /* WARNING: Subroutine does not return */
      pbStack_c0 = (byte *)0x14173716a;
      pdb_142dc8590(&UNK_14332b2c8);
    case 4:
code_r0x0001417372e3:
      unaff_RDI = (byte *)0xc801488104634801;
      *(byte **)(unaff_RBX + 0x70) = param_2;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
      switch(bVar20) {
      case 0:
        goto code_r0x00014173704e;
      case 1:
        goto code_r0x00014173716a;
      case 2:
        goto code_r0x00014173715e;
      case 4:
        goto code_r0x0001417372e3;
      case 5:
        goto code_r0x000141739e4c;
      case 6:
        goto code_r0x000141739e58;
      case 7:
        goto code_r0x000141738c53;
      case 8:
        goto code_r0x000141737427;
      case 9:
        goto code_r0x00014173f2db;
      case 10:
        goto code_r0x00014173f48a;
      case 0xb:
        goto code_r0x00014173f47e;
      case 0xc:
        goto code_r0x00014173f329;
      case 0xd:
        goto code_r0x00014173f5a7;
      case 0xe:
        goto code_r0x00014173f6fe;
      case 0xf:
        goto code_r0x00014173f6f2;
      case 0x10:
        goto code_r0x00014173f5e7;
      case 0x11:
        goto code_r0x00014173f832;
      case 0x12:
        goto code_r0x00014173f99f;
      case 0x13:
        goto code_r0x00014173f993;
      case 0x14:
        goto code_r0x00014173f883;
      case 0x15:
        goto code_r0x00014173fabe;
      case 0x16:
        goto code_r0x00014173fc82;
      case 0x17:
        goto code_r0x00014173fc76;
      case 0x18:
        goto code_r0x00014173fb14;
      case 0x19:
        goto code_r0x00014173fdb3;
      case 0x1a:
        goto code_r0x000141740415;
      case 0x1b:
        goto code_r0x000141740409;
      case 0x1c:
        goto code_r0x00014173fe4a;
      }
      break;
    case 5:
code_r0x000141739e4c:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 6:
      goto code_r0x000141739e58;
    case 7:
code_r0x000141738c53:
      *(longlong *)(in_R11 + 0x60) = in_R11 + 0x50;
      *(undefined8 *)(in_R11 + 0x68) = 0;
      *(longlong *)(unaff_RBX + 0x80) = in_R11 + 0x60;
      pbStack_c0 = (byte *)0x141738c84;
      pdb_140b35bb0(unaff_RBX + 0x280,in_R11 + 0x60,unaff_RBX + 0x1bf,unaff_RDI);
      lVar23 = *(longlong *)(unaff_RBX + 0x280);
      if (lVar23 == 2) {
        unaff_R13[0] = 1;
        unaff_R13[1] = 0;
        unaff_R13[2] = 0;
        unaff_R13[3] = 0;
        unaff_R13[4] = 0;
        unaff_R13[5] = 0;
        unaff_R13[6] = 0;
        unaff_R13[7] = 0;
        uVar18 = 3;
        pbVar24 = unaff_R13;
      }
      else {
        lVar29 = *(longlong *)(unaff_RBX + 0x288);
        uVar39 = *(undefined8 *)(unaff_RBX + 0x290);
        uVar31 = *(undefined8 *)(unaff_RBX + 0x298);
        uVar6 = *(undefined8 *)(unaff_RBX + 0x2a0);
        lVar30 = *(longlong *)(unaff_RBX + 0x70);
        if (*(longlong *)(lVar30 + 0x68) != 0) {
          *(longlong *)(unaff_RBX + 0x80) = *(longlong *)(lVar30 + 0x68);
          pbStack_c0 = (byte *)0x141738ccf;
          pdb_140974580();
          pbStack_c0 = (byte *)0x141738ce7;
          pub_1406abac0(*(byte **)(unaff_RBX + 0x80),0x38,8);
          lVar30 = *(longlong *)(unaff_RBX + 0x70);
        }
        if ((int)lVar23 == 1) {
          uVar39 = *(undefined8 *)(lVar30 + 0x10);
          uVar31 = *(undefined8 *)(lVar30 + 0x18);
          pbStack_c0 = (byte *)0x141738cfd;
          pdb_14007ee60();
          pbStack_c0 = (byte *)0x141738d0c;
          pbVar36 = pub_1406abab0(0x10,8);
          if (pbVar36 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
            pbStack_c0 = (byte *)0x141738e29;
            pdb_142dc7e11(8,0x10);
          }
          pbVar36[0] = 1;
          pbVar36[1] = 0;
          pbVar36[2] = 0;
          pbVar36[3] = 0;
          pbVar36[4] = 0;
          pbVar36[5] = 0;
          pbVar36[6] = 0;
          pbVar36[7] = 0;
          pbVar36[8] = 1;
          pbVar36[9] = 0;
          pbVar36[10] = 0;
          pbVar36[0xb] = 0;
          pbVar36[0xc] = 0;
          pbVar36[0xd] = 0;
          pbVar36[0xe] = 0;
          pbVar36[0xf] = 0;
          *(undefined8 *)(unaff_RBX + 0x260) = uVar39;
          *(undefined8 *)(unaff_RBX + 0x268) = uVar31;
          *(byte **)(unaff_RBX + 0x270) = pbVar36;
          *(undefined **)(unaff_RBX + 0x278) = &UNK_14332b300;
        }
        else {
          *(longlong *)(unaff_RBX + 0x150) = lVar29;
          *(undefined8 *)(unaff_RBX + 0x158) = uVar39;
          *(undefined8 *)(unaff_RBX + 0x160) = uVar31;
          *(undefined8 *)(unaff_RBX + 0x168) = uVar6;
          uVar39 = _UNK_14332b500;
          if (lVar29 == 0) {
            pbStack_98 = unaff_RBX + 0x158;
            lVar23 = *(longlong *)(*(longlong *)(unaff_RBX + 0x70) + 0x40);
            *(undefined8 *)(unaff_RBX + 0x280) = _DAT_14332b4f8;
            *(undefined8 *)(unaff_RBX + 0x288) = uVar39;
            lVar29 = *(longlong *)(*(longlong *)(unaff_RBX + 0x70) + 0x38);
            uVar39 = *(undefined8 *)(lVar29 + 0x20);
            uVar31 = *(undefined8 *)(lVar29 + 0x28);
            unaff_RBX[0x97] = 1;
            pbStack_c0 = (byte *)0x141738dad;
            pdb_141c2b710(lVar23 + 0x10,unaff_RBX + 0x280,uVar39,uVar31);
          }
          *(undefined8 *)(unaff_RBX + 0x290) = *(undefined8 *)(unaff_RBX + 0x160);
          *(undefined8 *)(unaff_RBX + 0x298) = *(undefined8 *)(unaff_RBX + 0x168);
          *(undefined8 *)(unaff_RBX + 0x280) = *(undefined8 *)(unaff_RBX + 0x150);
          *(undefined8 *)(unaff_RBX + 0x288) = *(undefined8 *)(unaff_RBX + 0x158);
          unaff_RBX[0x97] = 0;
          pbStack_c0 = (byte *)0x141738df4;
          pdb_14173b990(unaff_RBX + 0x260,unaff_RBX + 0x280);
          lVar30 = *(longlong *)(unaff_RBX + 0x70);
        }
        pbStack_c0 = (byte *)0x141738e02;
        pdb_140981490(lVar30 + 0x50);
        plVar27 = *(longlong **)(*(longlong *)(unaff_RBX + 0x70) + 0x38);
        LOCK();
        *plVar27 = *plVar27 + -1;
        lVar23 = *plVar27;
        UNLOCK();
joined_r0x00014173913d:
        if (lVar23 == 0) {
          pbStack_c0 = (byte *)0x14173914c;
          pdb_140dd76c0(*(longlong *)(unaff_RBX + 0x70) + 0x38);
        }
        plVar27 = *(longlong **)(*(longlong *)(unaff_RBX + 0x70) + 0x40);
        LOCK();
        *plVar27 = *plVar27 + -1;
        UNLOCK();
        if (*plVar27 == 0) {
          pbStack_c0 = (byte *)0x141739168;
          pdb_140dd78e0(*(longlong *)(unaff_RBX + 0x70) + 0x40);
        }
        plVar27 = (longlong *)**(undefined8 **)(unaff_RBX + 0x70);
        if (plVar27 != (longlong *)0x0) {
          LOCK();
          *plVar27 = *plVar27 + -1;
          UNLOCK();
          if (*plVar27 == 0) {
            pbStack_c0 = (byte *)0x14173918c;
            pdb_140c7a240(*(undefined8 *)(unaff_RBX + 0x70));
          }
        }
code_r0x000141739e0c:
        uVar39 = *(undefined8 *)(unaff_RBX + 0x260);
        uVar31 = *(undefined8 *)(unaff_RBX + 0x268);
        uVar6 = *(undefined8 *)(unaff_RBX + 0x278);
        *(undefined8 *)(unaff_R13 + 0x18) = *(undefined8 *)(unaff_RBX + 0x270);
        *(undefined8 *)(unaff_R13 + 0x20) = uVar6;
        *(undefined8 *)(unaff_R13 + 8) = uVar39;
        *(undefined8 *)(unaff_R13 + 0x10) = uVar31;
        unaff_R13[0] = 0;
        unaff_R13[1] = 0;
        unaff_R13[2] = 0;
        unaff_R13[3] = 0;
        unaff_R13[4] = 0;
        unaff_R13[5] = 0;
        unaff_R13[6] = 0;
        unaff_R13[7] = 0;
        uVar18 = 1;
        pbVar24 = unaff_R13;
      }
code_r0x000141739e30:
      *(undefined1 *)(*(longlong *)(unaff_RBX + 0x70) + 0x4a) = uVar18;
code_r0x000141739e58:
      return pbVar24;
    case 8:
code_r0x000141737427:
code_r0x000141737426:
      pbStack_c0 = (byte *)0x141737435;
      pub_1406abac0(*(byte **)unaff_R13,(ulonglong)param_2,1);
      pbVar36 = unaff_R13;
code_r0x000141737410:
      while( true ) {
        unaff_R13 = pbVar36 + 0x60;
        unaff_RDI = unaff_RDI + -1;
        if (unaff_RDI == (byte *)0x0) break;
        param_2 = *(byte **)(pbVar36 + 0x58);
        pbVar36 = unaff_R13;
        if (param_2 != (byte *)0x0) goto code_r0x000141737426;
      }
      lVar23 = *(longlong *)(unaff_R12 + 0x40);
      if (lVar23 != 0) {
        pbStack_c0 = (byte *)0x141737c5b;
        pub_1406abac0(*(byte **)(unaff_RBX + 0x88),lVar23 * 0x60,0x10);
      }
      *(undefined8 *)(unaff_R12 + 0x50) = *(undefined8 *)(unaff_RBX + 0x678);
      uVar39 = *(undefined8 *)(unaff_RBX + 0x670);
      *(longlong *)(unaff_R12 + 0x40) = *(longlong *)(unaff_RBX + 0x668);
      *(undefined8 *)(unaff_R12 + 0x48) = uVar39;
      puVar13 = _DAT_143ca8f38;
      lVar23 = *(longlong *)(unaff_RBX + 0x70);
      unaff_R13 = *(byte **)(unaff_RBX + 0x80);
      uVar39 = *(undefined8 *)(unaff_RBX + 0x158);
      *(undefined8 *)(lVar23 + 0x28) = *(undefined8 *)(unaff_RBX + 0x150);
      *(undefined8 *)(lVar23 + 0x30) = uVar39;
      *(undefined8 *)(lVar23 + 0x20) = 0;
      if (((char)unaff_R15 == '\0') && ((*puVar13 & 0x7fffffffffffffff) != 0)) {
        pbStack_c0 = (byte *)0x141738960;
        cVar19 = pdb_142dc79e0();
        if (cVar19 == '\0') {
          *(undefined1 *)(unaff_R12 + 0x38) = 1;
        }
      }
      LOCK();
      iVar21 = *unaff_R14;
      *unaff_R14 = *unaff_R14 + -0x3fffffff;
      UNLOCK();
      unaff_R12 = (ulonglong)(iVar21 + 0xc0000001U);
      if (0x3fffffff < iVar21 + 0xc0000001U) {
        pbStack_c0 = (byte *)0x1417387de;
        pdb_142dc6fa0();
      }
      in_R11 = *(longlong *)(unaff_RBX + 0x70);
      if (*(longlong *)(in_R11 + 0x20) == 0) {
        uVar39 = *(undefined8 *)(in_R11 + 0x30);
        *(undefined8 *)(unaff_RBX + 0x120) = *(undefined8 *)(in_R11 + 0x28);
        *(undefined8 *)(unaff_RBX + 0x128) = uVar39;
        plVar27 = plRam0000000143cad8b0;
        if (*_DAT_143ca4b08 < 2) {
          bVar20 = *(byte *)(plRam0000000143cad8b0 + 2);
          unaff_R12 = (ulonglong)bVar20;
          if (2 < bVar20) {
            unaff_RBX[0x6b] = 1;
            pbStack_c0 = (byte *)0x141738e3f;
            uVar22 = pdb_142db8070(plRam0000000143cad8b0);
            unaff_R12 = (ulonglong)uVar22;
            in_R11 = *(longlong *)(unaff_RBX + 0x70);
            if ((char)uVar22 != '\0') goto code_r0x00014173820d;
            goto code_r0x000141738e4e;
          }
          if (bVar20 == 0) goto code_r0x000141738e4e;
code_r0x00014173820d:
          lVar23 = *plVar27;
          unaff_RBX[0x6b] = 1;
          pbStack_c0 = (byte *)0x141738219;
          cVar19 = pdb_140dd7f60(lVar23);
          in_R11 = *(longlong *)(unaff_RBX + 0x70);
          if (cVar19 == '\0') goto code_r0x000141738e4e;
          lVar23 = *plVar27;
          uVar32 = *(ulonglong *)(lVar23 + 0x38);
          if (uVar32 == 0) {
            unaff_RBX[0x6b] = 1;
            pbStack_c0 = (byte *)0x141739eaf;
            pdb_142dc8110(&UNK_14332aff8,0x22,&UNK_14332b020);
            goto code_r0x00014173a218;
          }
          uVar39 = *(undefined8 *)(lVar23 + 0x30);
          uVar31 = *(undefined8 *)(lVar23 + 0x40);
          uVar6 = *(undefined8 *)(lVar23 + 0x48);
          *(undefined8 *)(unaff_RBX + 0xc0) = uVar39;
          *(ulonglong *)(unaff_RBX + 200) = uVar32;
          *(undefined8 *)(unaff_RBX + 0xd0) = uVar31;
          *(undefined8 *)(unaff_RBX + 0xd8) = uVar6;
          unaff_RBX[0xe0] = 0;
          unaff_RBX[0xe1] = 0;
          unaff_RBX[0xe2] = 0;
          unaff_RBX[0xe3] = 0;
          unaff_RBX[0xe4] = 0;
          unaff_RBX[0xe5] = 0;
          unaff_RBX[0xe6] = 0;
          unaff_RBX[0xe7] = 0;
          *(undefined **)(unaff_RBX + 0xf0) = &UNK_14332b038;
          unaff_RBX[0xf8] = 0x33;
          unaff_RBX[0xf9] = 0;
          unaff_RBX[0xfa] = 0;
          unaff_RBX[0xfb] = 0;
          unaff_RBX[0xfc] = 0;
          unaff_RBX[0xfd] = 0;
          unaff_RBX[0xfe] = 0;
          unaff_RBX[0xff] = 0;
          if (uVar32 == 1) {
            unaff_RBX[0x6b] = 1;
            pbStack_c0 = (byte *)0x141739eef;
            pdb_142dc8110(&UNK_14332aff8,0x22,&UNK_14332b020);
            goto code_r0x00014173a218;
          }
          *(undefined8 *)(unaff_RBX + 0x98) = uVar39;
          *(ulonglong *)(unaff_RBX + 0xa0) = uVar32;
          *(undefined8 *)(unaff_RBX + 0xa8) = uVar31;
          *(undefined8 *)(unaff_RBX + 0xb0) = uVar6;
          unaff_RBX[0xb8] = 1;
          unaff_RBX[0xb9] = 0;
          unaff_RBX[0xba] = 0;
          unaff_RBX[0xbb] = 0;
          unaff_RBX[0xbc] = 0;
          unaff_RBX[0xbd] = 0;
          unaff_RBX[0xbe] = 0;
          unaff_RBX[0xbf] = 0;
          *(longlong *)(unaff_RBX + 0x108) = *(longlong *)(in_R11 + 0x38) + 0x20;
          if (uVar32 < 3) {
            unaff_RBX[0x6b] = 1;
            pbStack_c0 = (byte *)0x141739f2f;
            pdb_142dc8110(&UNK_14332aff8,0x22,&UNK_14332b020);
            goto code_r0x00014173a218;
          }
          *(undefined8 *)(unaff_RBX + 0x150) = uVar39;
          *(ulonglong *)(unaff_RBX + 0x158) = uVar32;
          *(undefined8 *)(unaff_RBX + 0x160) = uVar31;
          *(undefined8 *)(unaff_RBX + 0x168) = uVar6;
          unaff_RBX[0x170] = 2;
          unaff_RBX[0x171] = 0;
          unaff_RBX[0x172] = 0;
          unaff_RBX[0x173] = 0;
          unaff_RBX[0x174] = 0;
          unaff_RBX[0x175] = 0;
          unaff_RBX[0x176] = 0;
          unaff_RBX[0x177] = 0;
          *(byte **)(unaff_RBX + 0x280) = unaff_RBX + 0xc0;
          *(byte **)(unaff_RBX + 0x288) = unaff_RBX + 0xf0;
          *(undefined **)(unaff_RBX + 0x290) = &UNK_14332b058;
          *(byte **)(unaff_RBX + 0x298) = unaff_RBX + 0x98;
          *(byte **)(unaff_RBX + 0x2a0) = unaff_RBX + 0x108;
          *(undefined **)(unaff_RBX + 0x2a8) = &UNK_14332b078;
          *(byte **)(unaff_RBX + 0x2b0) = unaff_RBX + 0x150;
          *(longlong *)(unaff_RBX + 0x2b8) = in_R11 + 0x10;
          *(undefined **)(unaff_RBX + 0x2c0) = &UNK_14332b098;
          *(byte **)(unaff_RBX + 0x1c0) = unaff_RBX + 0x280;
          unaff_RBX[0x1c8] = 3;
          unaff_RBX[0x1c9] = 0;
          unaff_RBX[0x1ca] = 0;
          unaff_RBX[0x1cb] = 0;
          unaff_RBX[0x1cc] = 0;
          unaff_RBX[0x1cd] = 0;
          unaff_RBX[0x1ce] = 0;
          unaff_RBX[0x1cf] = 0;
          *(longlong *)(unaff_RBX + 0x1d0) = lVar23 + 0x30;
          unaff_RBX[0x6b] = 1;
          pbStack_c0 = (byte *)0x1417383a2;
          pdb_14173b620(unaff_RBX + 0x1c0);
code_r0x000141739077:
          in_R11 = *(longlong *)(unaff_RBX + 0x70);
        }
        else {
code_r0x000141738e4e:
          plVar27 = plRam0000000143cad8b0;
          if ((*_DAT_143ca4ab0 == '\0') && (3 < *_DAT_143ca8e90)) {
            lVar23 = *plRam0000000143cad8b0;
            uVar39 = *(undefined8 *)(lVar23 + 0x20);
            uVar31 = *(undefined8 *)(lVar23 + 0x28);
            unaff_RBX[0x5e0] = 4;
            unaff_RBX[0x5e1] = 0;
            unaff_RBX[0x5e2] = 0;
            unaff_RBX[0x5e3] = 0;
            unaff_RBX[0x5e4] = 0;
            unaff_RBX[0x5e5] = 0;
            unaff_RBX[0x5e6] = 0;
            unaff_RBX[0x5e7] = 0;
            *(undefined8 *)(unaff_RBX + 0x5e8) = uVar39;
            *(undefined8 *)(unaff_RBX + 0x5f0) = uVar31;
            unaff_RBX[0x6b] = 1;
            pbStack_c0 = (byte *)0x141738e9f;
            uVar39 = pdb_140f33290();
            UNRECOVERED_JUMPTABLE = *(code **)(unaff_R12 + 0x18);
            unaff_RBX[0x6b] = 1;
            pbStack_c0 = (byte *)0x141738eba;
            cVar19 = (*UNRECOVERED_JUMPTABLE)(uVar39,unaff_RBX + 0x5e0);
            in_R11 = *(longlong *)(unaff_RBX + 0x70);
            if (cVar19 != '\0') {
              lVar29 = *plVar27;
              uVar32 = *(ulonglong *)(lVar29 + 0x38);
              if (uVar32 != 0) {
                uVar31 = *(undefined8 *)(lVar29 + 0x30);
                uVar6 = *(undefined8 *)(lVar29 + 0x40);
                uVar8 = *(undefined8 *)(lVar29 + 0x48);
                *(undefined8 *)(unaff_RBX + 0xc0) = uVar31;
                *(ulonglong *)(unaff_RBX + 200) = uVar32;
                *(undefined8 *)(unaff_RBX + 0xd0) = uVar6;
                *(undefined8 *)(unaff_RBX + 0xd8) = uVar8;
                unaff_RBX[0xe0] = 0;
                unaff_RBX[0xe1] = 0;
                unaff_RBX[0xe2] = 0;
                unaff_RBX[0xe3] = 0;
                unaff_RBX[0xe4] = 0;
                unaff_RBX[0xe5] = 0;
                unaff_RBX[0xe6] = 0;
                unaff_RBX[0xe7] = 0;
                *(undefined **)(unaff_RBX + 0x108) = &UNK_14332b038;
                unaff_RBX[0x110] = 0x33;
                unaff_RBX[0x111] = 0;
                unaff_RBX[0x112] = 0;
                unaff_RBX[0x113] = 0;
                unaff_RBX[0x114] = 0;
                unaff_RBX[0x115] = 0;
                unaff_RBX[0x116] = 0;
                unaff_RBX[0x117] = 0;
                if (uVar32 == 1) {
                  unaff_RBX[0x6b] = 1;
                  pbStack_c0 = (byte *)0x14173a015;
                  pdb_142dc8110(&UNK_14332aff8,0x22,&UNK_14332b020);
                  goto code_r0x00014173a218;
                }
                *(undefined8 *)(unaff_RBX + 0x98) = uVar31;
                *(ulonglong *)(unaff_RBX + 0xa0) = uVar32;
                *(undefined8 *)(unaff_RBX + 0xa8) = uVar6;
                *(undefined8 *)(unaff_RBX + 0xb0) = uVar8;
                unaff_RBX[0xb8] = 1;
                unaff_RBX[0xb9] = 0;
                unaff_RBX[0xba] = 0;
                unaff_RBX[0xbb] = 0;
                unaff_RBX[0xbc] = 0;
                unaff_RBX[0xbd] = 0;
                unaff_RBX[0xbe] = 0;
                unaff_RBX[0xbf] = 0;
                *(longlong *)(unaff_RBX + 0x230) = *(longlong *)(in_R11 + 0x38) + 0x20;
                if (uVar32 < 3) {
                  unaff_RBX[0x6b] = 1;
                  pbStack_c0 = (byte *)0x14173a055;
                  pdb_142dc8110(&UNK_14332aff8,0x22,&UNK_14332b020);
                  goto code_r0x00014173a218;
                }
                *(undefined8 *)(unaff_RBX + 0x150) = uVar31;
                *(ulonglong *)(unaff_RBX + 0x158) = uVar32;
                *(undefined8 *)(unaff_RBX + 0x160) = uVar6;
                *(undefined8 *)(unaff_RBX + 0x168) = uVar8;
                unaff_RBX[0x170] = 2;
                unaff_RBX[0x171] = 0;
                unaff_RBX[0x172] = 0;
                unaff_RBX[0x173] = 0;
                unaff_RBX[0x174] = 0;
                unaff_RBX[0x175] = 0;
                unaff_RBX[0x176] = 0;
                unaff_RBX[0x177] = 0;
                *(byte **)(unaff_RBX + 0x280) = unaff_RBX + 0xc0;
                *(byte **)(unaff_RBX + 0x288) = unaff_RBX + 0x108;
                *(undefined **)(unaff_RBX + 0x290) = &UNK_14332b058;
                *(byte **)(unaff_RBX + 0x298) = unaff_RBX + 0x98;
                *(byte **)(unaff_RBX + 0x2a0) = unaff_RBX + 0x230;
                *(undefined **)(unaff_RBX + 0x2a8) = &UNK_14332b078;
                *(byte **)(unaff_RBX + 0x2b0) = unaff_RBX + 0x150;
                *(longlong *)(unaff_RBX + 0x2b8) = in_R11 + 0x10;
                *(undefined **)(unaff_RBX + 0x2c0) = &UNK_14332b098;
                *(byte **)(unaff_RBX + 0xf0) = unaff_RBX + 0x280;
                unaff_RBX[0xf8] = 3;
                unaff_RBX[0xf9] = 0;
                unaff_RBX[0xfa] = 0;
                unaff_RBX[0xfb] = 0;
                unaff_RBX[0xfc] = 0;
                unaff_RBX[0xfd] = 0;
                unaff_RBX[0xfe] = 0;
                unaff_RBX[0xff] = 0;
                *(longlong *)(unaff_RBX + 0x100) = lVar29 + 0x30;
                *(undefined8 *)(unaff_RBX + 0x1d0) = *(undefined8 *)(unaff_RBX + 0x5f0);
                *(undefined8 *)(unaff_RBX + 0x1c0) = *(undefined8 *)(unaff_RBX + 0x5e0);
                *(undefined8 *)(unaff_RBX + 0x1c8) = *(undefined8 *)(unaff_RBX + 0x5e8);
                unaff_RBX[0x6b] = 1;
                pbStack_98 = unaff_RBX + 0xf0;
                pbStack_c0 = (byte *)0x141739076;
                pdb_140dd7f80(lVar23,uVar39,unaff_R12,unaff_RBX + 0x1c0);
                goto code_r0x000141739077;
              }
              unaff_RBX[0x6b] = 1;
              pbStack_c0 = (byte *)0x141739fd5;
              pdb_142dc8110(&UNK_14332aff8,0x22,&UNK_14332b020);
              goto code_r0x00014173a218;
            }
          }
        }
        uVar39 = _UNK_14332b500;
        lVar23 = *(longlong *)(in_R11 + 0x40);
        *(undefined8 *)(unaff_RBX + 0x280) = _DAT_14332b4f8;
        *(undefined8 *)(unaff_RBX + 0x288) = uVar39;
        uVar39 = *(undefined8 *)(*(longlong *)(in_R11 + 0x38) + 0x20);
        uVar31 = *(undefined8 *)(*(longlong *)(in_R11 + 0x38) + 0x28);
        unaff_RBX[0x6b] = 1;
        pbStack_98 = unaff_RBX + 0x120;
        pbStack_c0 = (byte *)0x1417390bb;
        pdb_141c2b710(lVar23 + 0x10,unaff_RBX + 0x280,uVar39,uVar31);
        lVar23 = *(longlong *)(unaff_RBX + 0x120);
        lVar29 = *(longlong *)(unaff_RBX + 0x128);
        *(longlong *)(unaff_RBX + 0x150) = lVar23;
        *(longlong *)(unaff_RBX + 0x158) = lVar29;
        lVar30 = *(longlong *)(lVar29 + 0x10);
        *(longlong *)(unaff_RBX + 0x80) = lVar23;
        pbStack_c0 = (byte *)0x1417390fc;
        (**(code **)(lVar29 + 0x18))
                  (unaff_RBX + 0x280,lVar23 + (lVar30 - 1U & 0xfffffffffffffff0) + 0x10);
        auVar46[0] = -(unaff_RBX[0x280] == DAT_14332a670);
        auVar46[1] = -(unaff_RBX[0x281] == UNK_14332a671);
        auVar46[2] = -(unaff_RBX[0x282] == UNK_14332a672);
        auVar46[3] = -(unaff_RBX[0x283] == UNK_14332a673);
        auVar46[4] = -(unaff_RBX[0x284] == UNK_14332a674);
        auVar46[5] = -(unaff_RBX[0x285] == UNK_14332a675);
        auVar46[6] = -(unaff_RBX[0x286] == UNK_14332a676);
        auVar46[7] = -(unaff_RBX[0x287] == UNK_14332a677);
        auVar46[8] = -(unaff_RBX[0x288] == UNK_14332a678);
        auVar46[9] = -(unaff_RBX[0x289] == UNK_14332a679);
        auVar46[10] = -(unaff_RBX[0x28a] == UNK_14332a67a);
        auVar46[0xb] = -(unaff_RBX[0x28b] == UNK_14332a67b);
        auVar46[0xc] = -(unaff_RBX[0x28c] == UNK_14332a67c);
        auVar46[0xd] = -(unaff_RBX[0x28d] == UNK_14332a67d);
        auVar46[0xe] = -(unaff_RBX[0x28e] == UNK_14332a67e);
        auVar46[0xf] = -(unaff_RBX[0x28f] == UNK_14332a67f);
        if ((ushort)((ushort)(SUB161(auVar46 >> 7,0) & 1) |
                     (ushort)(SUB161(auVar46 >> 0xf,0) & 1) << 1 |
                     (ushort)(SUB161(auVar46 >> 0x17,0) & 1) << 2 |
                     (ushort)(SUB161(auVar46 >> 0x1f,0) & 1) << 3 |
                     (ushort)(SUB161(auVar46 >> 0x27,0) & 1) << 4 |
                     (ushort)(SUB161(auVar46 >> 0x2f,0) & 1) << 5 |
                     (ushort)(SUB161(auVar46 >> 0x37,0) & 1) << 6 |
                     (ushort)(SUB161(auVar46 >> 0x3f,0) & 1) << 7 |
                     (ushort)(SUB161(auVar46 >> 0x47,0) & 1) << 8 |
                     (ushort)(SUB161(auVar46 >> 0x4f,0) & 1) << 9 |
                     (ushort)(SUB161(auVar46 >> 0x57,0) & 1) << 10 |
                     (ushort)(SUB161(auVar46 >> 0x5f,0) & 1) << 0xb |
                     (ushort)(SUB161(auVar46 >> 0x67,0) & 1) << 0xc |
                     (ushort)(SUB161(auVar46 >> 0x6f,0) & 1) << 0xd |
                     (ushort)(SUB161(auVar46 >> 0x77,0) & 1) << 0xe |
                    (ushort)(auVar46[0xf] >> 7) << 0xf) != 0xffff) {
          *(undefined8 *)(unaff_RBX + 0x280) = *(undefined8 *)(unaff_RBX + 0x80);
          *(longlong *)(unaff_RBX + 0x288) = lVar29;
          pbStack_98 = &UNK_14332b0c0;
                    /* WARNING: Subroutine does not return */
          pbStack_c0 = (byte *)0x1417391d2;
          pdb_142dc8170(&UNK_14332b0b8,8,unaff_RBX + 0x280,&UNK_14332b870);
        }
        *(undefined8 *)(unaff_RBX + 0x268) = *(undefined8 *)(unaff_RBX + 0x80);
        unaff_RBX[0x260] = 0;
        unaff_RBX[0x261] = 0;
        unaff_RBX[0x262] = 0;
        unaff_RBX[0x263] = 0;
        unaff_RBX[0x264] = 0;
        unaff_RBX[0x265] = 0;
        unaff_RBX[0x266] = 0;
        unaff_RBX[0x267] = 0;
        plVar27 = *(longlong **)(*(longlong *)(unaff_RBX + 0x70) + 0x38);
        LOCK();
        *plVar27 = *plVar27 + -1;
        lVar23 = *plVar27;
        UNLOCK();
        goto joined_r0x00014173913d;
      }
      if ((int)*(longlong *)(in_R11 + 0x20) != 1) {
        *(byte **)(unaff_RBX + 0x80) = unaff_R13;
        plVar27 = *(longlong **)(in_R11 + 0x38);
        LOCK();
        lVar23 = *plVar27;
        *plVar27 = *plVar27 + 1;
        UNLOCK();
        if (*plVar27 == 0 || SCARRY8(lVar23,1) != *plVar27 < 0) goto code_r0x00014173a218;
        *(longlong **)(in_R11 + 0x58) = plVar27;
        *(undefined1 *)(in_R11 + 0x60) = 1;
        pbVar36 = (byte *)(*(longlong *)(in_R11 + 0x40) + 0x10);
        pbStack_c0 = (byte *)0x1417383e6;
        pdb_141805d60(unaff_RBX + 0x1c0,pbVar36,*(undefined8 *)(*(longlong *)(in_R11 + 0x38) + 0x20)
                      ,*(undefined8 *)(*(longlong *)(in_R11 + 0x38) + 0x28));
        plVar27 = plRam0000000143cad898;
        if (SBORROW8(0,*(longlong *)(unaff_RBX + 0x1d0))) {
          lVar23 = *(longlong *)(unaff_RBX + 0x70);
          pbVar24 = *(byte **)(unaff_RBX + 0x80);
          if (*_DAT_143ca4b08 < 3) {
            bVar20 = *(byte *)(plRam0000000143cad898 + 2);
            pbVar36 = (byte *)(ulonglong)bVar20;
            if (2 < bVar20) {
              pbStack_c0 = (byte *)0x1417391e4;
              uVar22 = pdb_142db8070(plRam0000000143cad898);
              pbVar36 = (byte *)(ulonglong)uVar22;
              lVar23 = *(longlong *)(unaff_RBX + 0x70);
              pbVar24 = *(byte **)(unaff_RBX + 0x80);
              if ((char)uVar22 != '\0') goto code_r0x000141738431;
              goto code_r0x0001417391fa;
            }
            if (bVar20 == 0) goto code_r0x0001417391fa;
code_r0x000141738431:
            pbStack_c0 = (byte *)0x141738439;
            cVar19 = pdb_140dd7f60(*plVar27);
            lVar23 = *(longlong *)(unaff_RBX + 0x70);
            pbVar24 = *(byte **)(unaff_RBX + 0x80);
            if (cVar19 == '\0') goto code_r0x0001417391fa;
            lVar29 = *plVar27;
            uVar32 = *(ulonglong *)(lVar29 + 0x38);
            if (uVar32 == 0) {
              pbStack_c0 = (byte *)0x14173a073;
              pdb_142dc8110(&UNK_14332aff8,0x22,&UNK_14332b150);
              goto code_r0x00014173a218;
            }
            uVar39 = *(undefined8 *)(lVar29 + 0x30);
            uVar31 = *(undefined8 *)(lVar29 + 0x40);
            uVar6 = *(undefined8 *)(lVar29 + 0x48);
            *(undefined8 *)(unaff_RBX + 0xc0) = uVar39;
            *(ulonglong *)(unaff_RBX + 200) = uVar32;
            *(undefined8 *)(unaff_RBX + 0xd0) = uVar31;
            *(undefined8 *)(unaff_RBX + 0xd8) = uVar6;
            unaff_RBX[0xe0] = 0;
            unaff_RBX[0xe1] = 0;
            unaff_RBX[0xe2] = 0;
            unaff_RBX[0xe3] = 0;
            unaff_RBX[0xe4] = 0;
            unaff_RBX[0xe5] = 0;
            unaff_RBX[0xe6] = 0;
            unaff_RBX[0xe7] = 0;
            *(undefined **)(unaff_RBX + 0xf0) = &UNK_14332b168;
            unaff_RBX[0xf8] = 0x1d;
            unaff_RBX[0xf9] = 0;
            unaff_RBX[0xfa] = 0;
            unaff_RBX[0xfb] = 0;
            unaff_RBX[0xfc] = 0;
            unaff_RBX[0xfd] = 0;
            unaff_RBX[0xfe] = 0;
            unaff_RBX[0xff] = 0;
            if (uVar32 == 1) {
              pbStack_c0 = (byte *)0x14173a0af;
              pdb_142dc8110(&UNK_14332aff8,0x22,&UNK_14332b150);
              goto code_r0x00014173a218;
            }
            *(undefined8 *)(unaff_RBX + 0x98) = uVar39;
            *(ulonglong *)(unaff_RBX + 0xa0) = uVar32;
            *(undefined8 *)(unaff_RBX + 0xa8) = uVar31;
            *(undefined8 *)(unaff_RBX + 0xb0) = uVar6;
            unaff_RBX[0xb8] = 1;
            unaff_RBX[0xb9] = 0;
            unaff_RBX[0xba] = 0;
            unaff_RBX[0xbb] = 0;
            unaff_RBX[0xbc] = 0;
            unaff_RBX[0xbd] = 0;
            unaff_RBX[0xbe] = 0;
            unaff_RBX[0xbf] = 0;
            *(longlong *)(unaff_RBX + 0x108) = *(longlong *)(lVar23 + 0x38) + 0x20;
            if (uVar32 < 3) {
              pbStack_c0 = (byte *)0x14173a0eb;
              pdb_142dc8110(&UNK_14332aff8,0x22,&UNK_14332b150);
              goto code_r0x00014173a218;
            }
            *(undefined8 *)(unaff_RBX + 0x150) = uVar39;
            *(ulonglong *)(unaff_RBX + 0x158) = uVar32;
            *(undefined8 *)(unaff_RBX + 0x160) = uVar31;
            *(undefined8 *)(unaff_RBX + 0x168) = uVar6;
            unaff_RBX[0x170] = 2;
            unaff_RBX[0x171] = 0;
            unaff_RBX[0x172] = 0;
            unaff_RBX[0x173] = 0;
            unaff_RBX[0x174] = 0;
            unaff_RBX[0x175] = 0;
            unaff_RBX[0x176] = 0;
            unaff_RBX[0x177] = 0;
            *(byte **)(unaff_RBX + 0x280) = unaff_RBX + 0xc0;
            *(byte **)(unaff_RBX + 0x288) = unaff_RBX + 0xf0;
            *(undefined **)(unaff_RBX + 0x290) = &UNK_14332b058;
            *(byte **)(unaff_RBX + 0x298) = unaff_RBX + 0x98;
            *(byte **)(unaff_RBX + 0x2a0) = unaff_RBX + 0x108;
            *(undefined **)(unaff_RBX + 0x2a8) = &UNK_14332b078;
            pbVar34 = unaff_RBX + 0x150;
            *(byte **)(unaff_RBX + 0x2b0) = pbVar34;
            *(longlong *)(unaff_RBX + 0x2b8) = lVar23 + 0x10;
            *(undefined **)(unaff_RBX + 0x2c0) = &UNK_14332b098;
            *(byte **)(unaff_RBX + 0x1c0) = unaff_RBX + 0x280;
            unaff_RBX[0x1c8] = 3;
            unaff_RBX[0x1c9] = 0;
            unaff_RBX[0x1ca] = 0;
            unaff_RBX[0x1cb] = 0;
            unaff_RBX[0x1cc] = 0;
            unaff_RBX[0x1cd] = 0;
            unaff_RBX[0x1ce] = 0;
            unaff_RBX[0x1cf] = 0;
            *(longlong *)(unaff_RBX + 0x1d0) = lVar29 + 0x30;
            pbStack_c0 = (byte *)0x1417385c5;
            pdb_14173b8e0(unaff_RBX + 0x1c0);
code_r0x00014173941e:
            lVar23 = *(longlong *)(unaff_RBX + 0x70);
            pbVar24 = *(byte **)(unaff_RBX + 0x80);
            pbVar25 = pbVar34;
          }
          else {
code_r0x0001417391fa:
            plVar27 = plRam0000000143cad898;
            pbVar25 = pbVar36;
            if ((*_DAT_143ca4ab0 == '\0') && (2 < *_DAT_143ca8e90)) {
              lVar29 = *plRam0000000143cad898;
              uVar39 = *(undefined8 *)(lVar29 + 0x20);
              uVar31 = *(undefined8 *)(lVar29 + 0x28);
              unaff_RBX[0x628] = 3;
              unaff_RBX[0x629] = 0;
              unaff_RBX[0x62a] = 0;
              unaff_RBX[0x62b] = 0;
              unaff_RBX[0x62c] = 0;
              unaff_RBX[0x62d] = 0;
              unaff_RBX[0x62e] = 0;
              unaff_RBX[0x62f] = 0;
              *(undefined8 *)(unaff_RBX + 0x630) = uVar39;
              *(undefined8 *)(unaff_RBX + 0x638) = uVar31;
              pbStack_c0 = (byte *)0x141739248;
              pbVar34 = (byte *)pdb_140f33290();
              pbVar25 = unaff_RBX + 0x628;
              pbStack_c0 = (byte *)0x14173925e;
              cVar19 = (**(code **)(pbVar36 + 0x18))(pbVar34);
              lVar23 = *(longlong *)(unaff_RBX + 0x70);
              pbVar24 = *(byte **)(unaff_RBX + 0x80);
              if (cVar19 != '\0') {
                lVar30 = *plVar27;
                uVar32 = *(ulonglong *)(lVar30 + 0x38);
                if (uVar32 == 0) {
                  pbStack_c0 = (byte *)0x14173a18d;
                  pdb_142dc8110(&UNK_14332aff8,0x22,&UNK_14332b150);
                  goto code_r0x00014173a218;
                }
                uVar39 = *(undefined8 *)(lVar30 + 0x30);
                uVar31 = *(undefined8 *)(lVar30 + 0x40);
                uVar6 = *(undefined8 *)(lVar30 + 0x48);
                *(undefined8 *)(unaff_RBX + 0xc0) = uVar39;
                *(ulonglong *)(unaff_RBX + 200) = uVar32;
                *(undefined8 *)(unaff_RBX + 0xd0) = uVar31;
                *(undefined8 *)(unaff_RBX + 0xd8) = uVar6;
                unaff_RBX[0xe0] = 0;
                unaff_RBX[0xe1] = 0;
                unaff_RBX[0xe2] = 0;
                unaff_RBX[0xe3] = 0;
                unaff_RBX[0xe4] = 0;
                unaff_RBX[0xe5] = 0;
                unaff_RBX[0xe6] = 0;
                unaff_RBX[0xe7] = 0;
                *(undefined **)(unaff_RBX + 0x108) = &UNK_14332b168;
                unaff_RBX[0x110] = 0x1d;
                unaff_RBX[0x111] = 0;
                unaff_RBX[0x112] = 0;
                unaff_RBX[0x113] = 0;
                unaff_RBX[0x114] = 0;
                unaff_RBX[0x115] = 0;
                unaff_RBX[0x116] = 0;
                unaff_RBX[0x117] = 0;
                if (uVar32 == 1) {
                  pbStack_c0 = (byte *)0x14173a1c6;
                  pdb_142dc8110(&UNK_14332aff8,0x22,&UNK_14332b150);
                  goto code_r0x00014173a218;
                }
                *(undefined8 *)(unaff_RBX + 0x98) = uVar39;
                *(ulonglong *)(unaff_RBX + 0xa0) = uVar32;
                *(undefined8 *)(unaff_RBX + 0xa8) = uVar31;
                *(undefined8 *)(unaff_RBX + 0xb0) = uVar6;
                unaff_RBX[0xb8] = 1;
                unaff_RBX[0xb9] = 0;
                unaff_RBX[0xba] = 0;
                unaff_RBX[0xbb] = 0;
                unaff_RBX[0xbc] = 0;
                unaff_RBX[0xbd] = 0;
                unaff_RBX[0xbe] = 0;
                unaff_RBX[0xbf] = 0;
                *(longlong *)(unaff_RBX + 0x120) = *(longlong *)(lVar23 + 0x38) + 0x20;
                if (uVar32 < 3) {
                  pbStack_c0 = (byte *)0x14173a1fc;
                  pdb_142dc8110(&UNK_14332aff8,0x22,&UNK_14332b150);
                  goto code_r0x00014173a218;
                }
                *(undefined8 *)(unaff_RBX + 0x150) = uVar39;
                *(ulonglong *)(unaff_RBX + 0x158) = uVar32;
                *(undefined8 *)(unaff_RBX + 0x160) = uVar31;
                *(undefined8 *)(unaff_RBX + 0x168) = uVar6;
                unaff_RBX[0x170] = 2;
                unaff_RBX[0x171] = 0;
                unaff_RBX[0x172] = 0;
                unaff_RBX[0x173] = 0;
                unaff_RBX[0x174] = 0;
                unaff_RBX[0x175] = 0;
                unaff_RBX[0x176] = 0;
                unaff_RBX[0x177] = 0;
                *(byte **)(unaff_RBX + 0x280) = unaff_RBX + 0xc0;
                *(byte **)(unaff_RBX + 0x288) = unaff_RBX + 0x108;
                *(undefined **)(unaff_RBX + 0x290) = &UNK_14332b058;
                *(byte **)(unaff_RBX + 0x298) = unaff_RBX + 0x98;
                *(byte **)(unaff_RBX + 0x2a0) = unaff_RBX + 0x120;
                *(undefined **)(unaff_RBX + 0x2a8) = &UNK_14332b078;
                *(byte **)(unaff_RBX + 0x2b0) = unaff_RBX + 0x150;
                *(longlong *)(unaff_RBX + 0x2b8) = lVar23 + 0x10;
                *(undefined **)(unaff_RBX + 0x2c0) = &UNK_14332b098;
                *(byte **)(unaff_RBX + 0xf0) = unaff_RBX + 0x280;
                unaff_RBX[0xf8] = 3;
                unaff_RBX[0xf9] = 0;
                unaff_RBX[0xfa] = 0;
                unaff_RBX[0xfb] = 0;
                unaff_RBX[0xfc] = 0;
                unaff_RBX[0xfd] = 0;
                unaff_RBX[0xfe] = 0;
                unaff_RBX[0xff] = 0;
                *(longlong *)(unaff_RBX + 0x100) = lVar30 + 0x30;
                *(undefined8 *)(unaff_RBX + 0x1d0) = *(undefined8 *)(unaff_RBX + 0x638);
                *(undefined8 *)(unaff_RBX + 0x1c0) = *(undefined8 *)(unaff_RBX + 0x628);
                *(undefined8 *)(unaff_RBX + 0x1c8) = *(undefined8 *)(unaff_RBX + 0x630);
                pbStack_98 = unaff_RBX + 0xf0;
                pbStack_c0 = (byte *)0x14173941d;
                pdb_140dd7f80(lVar29,pbVar34,pbVar36,unaff_RBX + 0x1c0);
                goto code_r0x00014173941e;
              }
            }
          }
          pbStack_c0 = (byte *)0x141739438;
          uVar39 = (**(code **)(*(longlong *)(*(longlong *)(lVar23 + 0x38) + 0x18) + 0x28))
                             (*(undefined8 *)(*(longlong *)(lVar23 + 0x38) + 0x10));
          *(undefined8 *)(unaff_RBX + 0x148) = uVar39;
          *(byte **)(unaff_RBX + 0x140) = pbVar25;
          lVar23 = *(longlong *)(unaff_RBX + 0x70);
          *(undefined1 *)(lVar23 + 0x49) = 1;
          plVar27 = *(longlong **)(lVar23 + 0x40);
          LOCK();
          lVar23 = *plVar27;
          *plVar27 = *plVar27 + 1;
          UNLOCK();
          if (*plVar27 == 0 || SCARRY8(lVar23,1) != *plVar27 < 0) goto code_r0x00014173a218;
          *(longlong **)(unaff_RBX + 0x80) = plVar27;
          *(longlong **)(unaff_RBX + 0x98) = plVar27;
          pbStack_c0 = (byte *)0x141739477;
          pdb_1417473a0(unaff_RBX + 0x150);
          unaff_RBX[0x280] = 1;
          unaff_RBX[0x281] = 0;
          unaff_RBX[0x282] = 0;
          unaff_RBX[0x283] = 0;
          unaff_RBX[0x284] = 0;
          unaff_RBX[0x285] = 0;
          unaff_RBX[0x286] = 0;
          unaff_RBX[0x287] = 0;
          unaff_RBX[0x288] = 1;
          unaff_RBX[0x289] = 0;
          unaff_RBX[0x28a] = 0;
          unaff_RBX[0x28b] = 0;
          unaff_RBX[0x28c] = 0;
          unaff_RBX[0x28d] = 0;
          unaff_RBX[0x28e] = 0;
          unaff_RBX[0x28f] = 0;
          *(undefined8 *)(unaff_RBX + 0x290) = *(undefined8 *)(unaff_RBX + 0x150);
          *(undefined8 *)(unaff_RBX + 0x298) = *(undefined8 *)(unaff_RBX + 0x158);
          *(undefined4 *)(unaff_RBX + 0x2a0) = *(undefined4 *)(unaff_RBX + 0x160);
          *(undefined4 *)(unaff_RBX + 0x2a4) = *(undefined4 *)(unaff_RBX + 0x164);
          *(undefined4 *)(unaff_RBX + 0x2a8) = *(undefined4 *)(unaff_RBX + 0x168);
          *(undefined4 *)(unaff_RBX + 0x2ac) = *(undefined4 *)(unaff_RBX + 0x16c);
          *(undefined4 *)(unaff_RBX + 0x2b0) = *(undefined4 *)(unaff_RBX + 0x170);
          *(undefined4 *)(unaff_RBX + 0x2b4) = *(undefined4 *)(unaff_RBX + 0x174);
          *(undefined4 *)(unaff_RBX + 0x2b8) = *(undefined4 *)(unaff_RBX + 0x178);
          *(undefined4 *)(unaff_RBX + 700) = *(undefined4 *)(unaff_RBX + 0x17c);
          *(undefined4 *)(unaff_RBX + 0x2c0) = *(undefined4 *)(unaff_RBX + 0x180);
          *(undefined4 *)(unaff_RBX + 0x2c4) = *(undefined4 *)(unaff_RBX + 0x184);
          *(undefined4 *)(unaff_RBX + 0x2c8) = *(undefined4 *)(unaff_RBX + 0x188);
          *(undefined4 *)(unaff_RBX + 0x2cc) = *(undefined4 *)(unaff_RBX + 0x18c);
          *(undefined8 *)(unaff_RBX + 0x2d0) = *(undefined8 *)(unaff_RBX + 400);
          *(undefined8 *)(unaff_RBX + 0x2d8) = *(undefined8 *)(unaff_RBX + 0x198);
          *(undefined8 *)(unaff_RBX + 0x2e0) = *(undefined8 *)(unaff_RBX + 0x1a0);
          *(undefined8 *)(unaff_RBX + 0x2e8) = *(undefined8 *)(unaff_RBX + 0x1a8);
          pbStack_c0 = (byte *)0x1417394e9;
          pdb_14007ee60();
          uVar39 = 8;
          pbStack_c0 = (byte *)0x1417394f8;
          pbVar36 = pub_1406abab0(0x70,8);
          if (pbVar36 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
            pbStack_c0 = (byte *)0x141739612;
            pdb_142dc7e11(8,0x70);
          }
          uVar31 = *(undefined8 *)(unaff_RBX + 0x2e8);
          *(undefined8 *)(pbVar36 + 0x60) = *(undefined8 *)(unaff_RBX + 0x2e0);
          *(undefined8 *)(pbVar36 + 0x68) = uVar31;
          uVar31 = *(undefined8 *)(unaff_RBX + 0x2d8);
          *(undefined8 *)(pbVar36 + 0x50) = *(undefined8 *)(unaff_RBX + 0x2d0);
          *(undefined8 *)(pbVar36 + 0x58) = uVar31;
          uVar31 = *(undefined8 *)(unaff_RBX + 0x2c8);
          *(undefined8 *)(pbVar36 + 0x40) = *(undefined8 *)(unaff_RBX + 0x2c0);
          *(undefined8 *)(pbVar36 + 0x48) = uVar31;
          uVar31 = *(undefined8 *)(unaff_RBX + 0x280);
          uVar6 = *(undefined8 *)(unaff_RBX + 0x288);
          uVar8 = *(undefined8 *)(unaff_RBX + 0x290);
          uVar4 = *(undefined8 *)(unaff_RBX + 0x298);
          uVar48 = *(undefined4 *)(unaff_RBX + 0x2a0);
          uVar49 = *(undefined4 *)(unaff_RBX + 0x2a4);
          uVar50 = *(undefined4 *)(unaff_RBX + 0x2a8);
          uVar51 = *(undefined4 *)(unaff_RBX + 0x2ac);
          uVar10 = *(undefined4 *)(unaff_RBX + 0x2b4);
          uVar11 = *(undefined4 *)(unaff_RBX + 0x2b8);
          uVar12 = *(undefined4 *)(unaff_RBX + 700);
          *(undefined4 *)(pbVar36 + 0x30) = *(undefined4 *)(unaff_RBX + 0x2b0);
          *(undefined4 *)(pbVar36 + 0x34) = uVar10;
          *(undefined4 *)(pbVar36 + 0x38) = uVar11;
          *(undefined4 *)(pbVar36 + 0x3c) = uVar12;
          *(undefined4 *)(pbVar36 + 0x20) = uVar48;
          *(undefined4 *)(pbVar36 + 0x24) = uVar49;
          *(undefined4 *)(pbVar36 + 0x28) = uVar50;
          *(undefined4 *)(pbVar36 + 0x2c) = uVar51;
          *(undefined8 *)(pbVar36 + 0x10) = uVar8;
          *(undefined8 *)(pbVar36 + 0x18) = uVar4;
          *(undefined8 *)pbVar36 = uVar31;
          *(undefined8 *)(pbVar36 + 8) = uVar6;
          puVar7 = *(undefined8 **)(unaff_RBX + 0x70);
          plVar27 = (longlong *)*puVar7;
          uVar31 = *(undefined8 *)(unaff_RBX + 0x148);
          if (plVar27 != (longlong *)0x0) {
            uVar39 = puVar7[1];
            LOCK();
            lVar23 = *plVar27;
            *plVar27 = *plVar27 + 1;
            UNLOCK();
            if (*plVar27 == 0 || SCARRY8(lVar23,1) != *plVar27 < 0) goto code_r0x00014173a218;
          }
          *(undefined1 *)(puVar7 + 9) = 1;
          puVar7[0xf] = *(undefined8 *)(unaff_RBX + 0x80);
          puVar7[0x10] = pbVar36;
          puVar7[0x11] = plVar27;
          puVar7[0x12] = uVar39;
          LOCK();
          lVar23 = *(longlong *)pbVar36;
          *(longlong *)pbVar36 = *(longlong *)pbVar36 + 1;
          UNLOCK();
          if (*(longlong *)pbVar36 == 0 || SCARRY8(lVar23,1) != *(longlong *)pbVar36 < 0)
          goto code_r0x00014173a218;
          puVar7[10] = pbVar36;
          *(undefined1 *)((longlong)puVar7 + 0x49) = 0;
          *(undefined1 *)(puVar7 + 9) = 0;
          uVar39 = puVar7[0xf];
          uVar6 = puVar7[0x10];
          uVar48 = *(undefined4 *)((longlong)puVar7 + 0x8c);
          uVar49 = *(undefined4 *)(puVar7 + 0x12);
          uVar50 = *(undefined4 *)((longlong)puVar7 + 0x94);
          *(undefined4 *)(unaff_RBX + 0x290) = *(undefined4 *)(puVar7 + 0x11);
          *(undefined4 *)(unaff_RBX + 0x294) = uVar48;
          *(undefined4 *)(unaff_RBX + 0x298) = uVar49;
          *(undefined4 *)(unaff_RBX + 0x29c) = uVar50;
          *(undefined8 *)(unaff_RBX + 0x280) = uVar39;
          *(undefined8 *)(unaff_RBX + 0x288) = uVar6;
          UNRECOVERED_JUMPTABLE = *(code **)(*(longlong *)(unaff_RBX + 0x140) + 0x30);
          *(undefined8 *)(unaff_RBX + 0x1f0) = uVar31;
          *(longlong *)(unaff_RBX + 0x1f8) = *(longlong *)(unaff_RBX + 0x140);
          pbVar36 = unaff_RBX + 0x280;
          pbStack_c0 = (byte *)0x1417395eb;
          uVar39 = (*UNRECOVERED_JUMPTABLE)();
          lVar23 = *(longlong *)(unaff_RBX + 0x70);
          *(undefined8 *)(lVar23 + 0x68) = uVar39;
          *(byte **)(lVar23 + 0x70) = pbVar36;
          pbStack_c0 = (byte *)0x14173744d;
          (**(code **)(pbVar36 + 0x18))(unaff_RBX + 0x280,uVar39,pbVar28);
          lVar23 = *(longlong *)(unaff_RBX + 0x280);
          if (lVar23 == 2) {
            pbVar24[0] = 1;
            pbVar24[1] = 0;
            pbVar24[2] = 0;
            pbVar24[3] = 0;
            pbVar24[4] = 0;
            pbVar24[5] = 0;
            pbVar24[6] = 0;
            pbVar24[7] = 0;
            uVar18 = 4;
            goto code_r0x000141739e30;
          }
          uVar39 = *(undefined8 *)(unaff_RBX + 0x288);
          pauVar38 = *(undefined1 (**) [16])(unaff_RBX + 0x290);
          *(undefined8 *)(unaff_RBX + 0x80) =
               *(undefined8 *)(*(longlong *)(unaff_RBX + 0x70) + 0x68);
          puVar7 = *(undefined8 **)(*(longlong *)(unaff_RBX + 0x70) + 0x70);
          *(undefined8 **)(unaff_RBX + 0x88) = puVar7;
          UNRECOVERED_JUMPTABLE = (code *)*puVar7;
          if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
            pbStack_c0 = (byte *)0x1417374a3;
            (*UNRECOVERED_JUMPTABLE)(*(undefined8 *)(unaff_RBX + 0x80));
          }
          arg1 = *(undefined1 (**) [16])(*(longlong *)(unaff_RBX + 0x88) + 8);
          if (arg1 != (undefined1 (*) [16])0x0) {
            pbStack_c0 = (byte *)0x1417374c4;
            pub_1406abac0(*(byte **)(unaff_RBX + 0x80),(ulonglong)arg1,
                          *(ulonglong *)(*(longlong *)(unaff_RBX + 0x88) + 0x10));
          }
          lVar29 = *(longlong *)(unaff_RBX + 0x70);
          if ((int)lVar23 == 1) {
            uVar31 = *(undefined8 *)(lVar29 + 0x10);
            uVar6 = *(undefined8 *)(lVar29 + 0x18);
            *(undefined8 *)(unaff_RBX + 0x1f0) = *(undefined8 *)(unaff_RBX + 0x148);
            *(undefined8 *)(unaff_RBX + 0x1f8) = *(undefined8 *)(unaff_RBX + 0x140);
            pbStack_c0 = (byte *)0x1417374fd;
            pauVar26 = (undefined1 (*) [16])pdb_140c799b0(uVar39);
            *(undefined1 (**) [16])(unaff_RBX + 0xb0) = pauVar38;
            lVar29 = *(longlong *)(unaff_RBX + 0x70);
            arg1 = pauVar38;
            pauVar38 = pauVar26;
            uVar39 = uVar6;
          }
          else {
            uVar31 = 0;
          }
          *(undefined8 *)(unaff_RBX + 0x98) = uVar31;
          *(undefined8 *)(unaff_RBX + 0xa0) = uVar39;
          *(undefined1 (**) [16])(unaff_RBX + 0xa8) = pauVar38;
          lVar23 = *(longlong *)(lVar29 + 0x50);
          pcVar33 = (char *)(lVar23 + 0x10);
          LOCK();
          bVar44 = *(char *)(lVar23 + 0x10) == '\0';
          if (bVar44) {
            *(char *)(lVar23 + 0x10) = '\x01';
          }
          UNLOCK();
          if (!bVar44) {
            unaff_RBX[0x7d] = 1;
            pbStack_c0 = (byte *)0x14173885c;
            pdb_142dc6be0(pcVar33);
          }
          puVar13 = _DAT_143ca8f38;
          if ((*_DAT_143ca8f38 & 0x7fffffffffffffff) == 0) {
            bVar20 = 0;
            cVar19 = *(char *)(lVar23 + 0x11);
          }
          else {
            unaff_RBX[0x7d] = 1;
            pbStack_c0 = (byte *)0x14173886b;
            bVar20 = pdb_142dc79e0();
            bVar20 = bVar20 ^ 1;
            cVar19 = *(char *)(lVar23 + 0x11);
          }
          if (cVar19 != '\0') {
            *(char **)(unaff_RBX + 0x280) = pcVar33;
            unaff_RBX[0x288] = bVar20;
            pbStack_98 = &UNK_14332b190;
                    /* WARNING: Subroutine does not return */
            pbStack_c0 = (byte *)0x1417388b2;
            pdb_142dc8170(&UNK_14332b8d0,0x2b,unaff_RBX + 0x280,&UNK_14332b920);
          }
          uVar39 = *(undefined8 *)(lVar23 + 0x18);
          uVar31 = *(undefined8 *)(lVar23 + 0x20);
          uVar48 = *(undefined4 *)(lVar23 + 0x2c);
          uVar49 = *(undefined4 *)(lVar23 + 0x30);
          uVar50 = *(undefined4 *)(lVar23 + 0x34);
          *(undefined4 *)(unaff_RBX + 0x160) = *(undefined4 *)(lVar23 + 0x28);
          *(undefined4 *)(unaff_RBX + 0x164) = uVar48;
          *(undefined4 *)(unaff_RBX + 0x168) = uVar49;
          *(undefined4 *)(unaff_RBX + 0x16c) = uVar50;
          *(undefined8 *)(unaff_RBX + 0x150) = uVar39;
          *(undefined8 *)(unaff_RBX + 0x158) = uVar31;
          uVar31 = _UNK_14332bb38;
          uVar39 = _UNK_14332bb30;
          *(undefined8 *)(lVar23 + 0x18) = _UNK_14332bb30;
          *(undefined8 *)(lVar23 + 0x20) = uVar31;
          uVar8 = _UNK_14332bb48;
          uVar6 = _UNK_14332bb40;
          *(undefined8 *)(lVar23 + 0x28) = _UNK_14332bb40;
          *(undefined8 *)(lVar23 + 0x30) = uVar8;
          if ((bVar20 == 0) && ((*puVar13 & 0x7fffffffffffffff) != 0)) {
            unaff_RBX[0x7b] = 1;
            pbStack_c0 = (byte *)0x141738992;
            cVar19 = pdb_142dc79e0();
            if (cVar19 == '\0') {
              *(undefined1 *)(lVar23 + 0x11) = 1;
            }
          }
          LOCK();
          cVar19 = *pcVar33;
          *pcVar33 = '\0';
          UNLOCK();
          if (cVar19 == '\x02') {
            unaff_RBX[0x7b] = 1;
            pbStack_c0 = (byte *)0x1417388c4;
            pdb_142dc6ca0(pcVar33);
          }
          lVar29 = *(longlong *)(unaff_RBX + 0x70);
          lVar30 = *(longlong *)(lVar29 + 0x50);
          lVar23 = lVar30 + 0x38;
          LOCK();
          bVar44 = *(char *)(lVar30 + 0x38) == '\0';
          if (bVar44) {
            *(char *)(lVar30 + 0x38) = '\x01';
          }
          UNLOCK();
          if (!bVar44) {
            unaff_RBX[0x7b] = 1;
            pbStack_c0 = (byte *)0x1417388d6;
            pdb_142dc6be0(lVar23);
          }
          if ((*puVar13 & 0x7fffffffffffffff) == 0) {
            uVar22 = 0;
            cVar19 = *(char *)(lVar30 + 0x39);
          }
          else {
            unaff_RBX[0x7b] = 1;
            pbStack_c0 = (byte *)0x1417388e5;
            uVar22 = pdb_142dc79e0();
            uVar22 = uVar22 ^ 1;
            cVar19 = *(char *)(lVar30 + 0x39);
          }
          if (cVar19 != '\0') {
            *(longlong *)(unaff_RBX + 0x280) = lVar23;
            unaff_RBX[0x288] = (byte)uVar22;
            pbStack_98 = &UNK_14332b1a8;
                    /* WARNING: Subroutine does not return */
            pbStack_c0 = (byte *)0x14173892c;
            pdb_142dc8170(&UNK_14332b8d0,0x2b,unaff_RBX + 0x280,&UNK_14332b940);
          }
          *(uint *)(unaff_RBX + 0x88) = uVar22;
          *(longlong *)(unaff_RBX + 0x80) = lVar23;
          pbStack_c0 = (byte *)0x141737633;
          plVar27 = (longlong *)pdb_140f3bda0();
          if ((char)plVar27[2] == '\x01') {
            lVar23 = *plVar27;
            arg1 = (undefined1 (*) [16])plVar27[1];
          }
          else {
            pbStack_c0 = (byte *)0x141738937;
            lVar23 = pdb_140f4fd10();
            *plVar27 = lVar23;
            plVar27[1] = (longlong)arg1;
            *(undefined1 *)(plVar27 + 2) = 1;
          }
          *plVar27 = lVar23 + 1;
          pauVar38 = *(undefined1 (**) [16])(lVar30 + 0x40);
          lVar3 = *(longlong *)(lVar30 + 0x48);
          uVar4 = *(undefined8 *)(lVar30 + 0x58);
          *(undefined8 *)(lVar30 + 0x50) = uVar6;
          *(undefined8 *)(lVar30 + 0x58) = uVar8;
          *(undefined8 *)(lVar30 + 0x40) = uVar39;
          *(undefined8 *)(lVar30 + 0x48) = uVar31;
          *(longlong *)(lVar30 + 0x60) = lVar23;
          *(undefined1 (**) [16])(lVar30 + 0x68) = arg1;
          auVar47 = *pauVar38;
          if (lVar3 == 0) {
            uVar39 = 0;
          }
          else {
            lVar23 = lVar3 * 0x61 + 0x71;
            arg1 = pauVar38 + lVar3 * -6 + -6;
            uVar39 = 0x10;
          }
          *(undefined8 *)(unaff_RBX + 0x280) = uVar39;
          *(longlong *)(unaff_RBX + 0x288) = lVar23;
          *(undefined1 (**) [16])(unaff_RBX + 0x290) = arg1;
          *(undefined1 (**) [16])(unaff_RBX + 0x298) = pauVar38;
          *(undefined1 (**) [16])(unaff_RBX + 0x2a0) = pauVar38 + 1;
          *(undefined1 **)(unaff_RBX + 0x2a8) = *pauVar38 + lVar3 + 1;
          *(ushort *)(unaff_RBX + 0x2b0) =
               ~((ushort)(SUB161(auVar47 >> 7,0) & 1) | (ushort)(SUB161(auVar47 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar47 >> 0x17,0) & 1) << 2 |
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
                (ushort)(byte)(auVar47[0xf] >> 7) << 0xf);
          *(undefined8 *)(unaff_RBX + 0x2b8) = uVar4;
          pbStack_c0 = (byte *)0x1417376f8;
          pdb_1415ed630(unaff_RBX + 0x120,unaff_RBX + 0x280);
          if ((unaff_RBX[0x88] == 0) && ((*puVar13 & 0x7fffffffffffffff) != 0)) {
            unaff_RBX[0x7e] = 1;
            unaff_RBX[0x7f] = 1;
            pbStack_c0 = (byte *)0x1417389b1;
            cVar19 = pdb_142dc79e0();
            if (cVar19 == '\0') {
              *(undefined1 *)(lVar30 + 0x39) = 1;
            }
          }
          LOCK();
          cVar19 = **(char **)(unaff_RBX + 0x80);
          **(char **)(unaff_RBX + 0x80) = '\0';
          UNLOCK();
          if (cVar19 == '\x02') {
            unaff_RBX[0x7e] = 1;
            unaff_RBX[0x7f] = 1;
            pbStack_c0 = (byte *)0x141738955;
            pdb_142dc6ca0();
          }
          pauVar38 = *(undefined1 (**) [16])(unaff_RBX + 0x150);
          auVar47 = *pauVar38;
          *(undefined1 (**) [16])(unaff_RBX + 0x280) = pauVar38;
          *(undefined1 (**) [16])(unaff_RBX + 0x288) = pauVar38 + 1;
          *(undefined1 **)(unaff_RBX + 0x290) = *pauVar38 + *(longlong *)(unaff_RBX + 0x158) + 1;
          *(ushort *)(unaff_RBX + 0x298) =
               ~((ushort)(SUB161(auVar47 >> 7,0) & 1) | (ushort)(SUB161(auVar47 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar47 >> 0x17,0) & 1) << 2 |
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
                (ushort)(byte)(auVar47[0xf] >> 7) << 0xf);
          *(undefined8 *)(unaff_RBX + 0x2a0) = *(undefined8 *)(unaff_RBX + 0x168);
          *(longlong *)(unaff_RBX + 0x2a8) = *(longlong *)(unaff_RBX + 0x70) + 0x40;
          unaff_RBX[0x7e] = 1;
          unaff_RBX[0x7f] = 1;
          pbVar36 = unaff_RBX + 0x280;
          pbStack_c0 = (byte *)0x14173779a;
          pdb_1415ea2a0(unaff_RBX + 0x108);
          *(longlong **)(unaff_RBX + 0x88) = (longlong *)(lVar29 + 0x50);
          *(byte **)(unaff_RBX + 0x80) = pbVar24;
          if (*(longlong *)(unaff_RBX + 0x98) == 0) {
            UNRECOVERED_JUMPTABLE = *(code **)(*(longlong *)(unaff_RBX + 0xa8) + 0x18);
            lVar23 = *(longlong *)(unaff_RBX + 0xa0) +
                     (*(longlong *)(*(longlong *)(unaff_RBX + 0xa8) + 0x10) - 1U &
                     0xfffffffffffffff0) + 0x10;
            unaff_RBX[0x6d] = 1;
            unaff_RBX[0x6e] = 1;
            unaff_RBX[0x6f] = 1;
            pbStack_c0 = (byte *)0x141737946;
            (*UNRECOVERED_JUMPTABLE)(unaff_RBX + 0x280,lVar23);
            auVar45[0] = -(unaff_RBX[0x280] == DAT_14332a670);
            auVar45[1] = -(unaff_RBX[0x281] == UNK_14332a671);
            auVar45[2] = -(unaff_RBX[0x282] == UNK_14332a672);
            auVar45[3] = -(unaff_RBX[0x283] == UNK_14332a673);
            auVar45[4] = -(unaff_RBX[0x284] == UNK_14332a674);
            auVar45[5] = -(unaff_RBX[0x285] == UNK_14332a675);
            auVar45[6] = -(unaff_RBX[0x286] == UNK_14332a676);
            auVar45[7] = -(unaff_RBX[0x287] == UNK_14332a677);
            auVar45[8] = -(unaff_RBX[0x288] == UNK_14332a678);
            auVar45[9] = -(unaff_RBX[0x289] == UNK_14332a679);
            auVar45[10] = -(unaff_RBX[0x28a] == UNK_14332a67a);
            auVar45[0xb] = -(unaff_RBX[0x28b] == UNK_14332a67b);
            auVar45[0xc] = -(unaff_RBX[0x28c] == UNK_14332a67c);
            auVar45[0xd] = -(unaff_RBX[0x28d] == UNK_14332a67d);
            auVar45[0xe] = -(unaff_RBX[0x28e] == UNK_14332a67e);
            auVar45[0xf] = -(unaff_RBX[0x28f] == UNK_14332a67f);
            if ((ushort)((ushort)(SUB161(auVar45 >> 7,0) & 1) |
                         (ushort)(SUB161(auVar45 >> 0xf,0) & 1) << 1 |
                         (ushort)(SUB161(auVar45 >> 0x17,0) & 1) << 2 |
                         (ushort)(SUB161(auVar45 >> 0x1f,0) & 1) << 3 |
                         (ushort)(SUB161(auVar45 >> 0x27,0) & 1) << 4 |
                         (ushort)(SUB161(auVar45 >> 0x2f,0) & 1) << 5 |
                         (ushort)(SUB161(auVar45 >> 0x37,0) & 1) << 6 |
                         (ushort)(SUB161(auVar45 >> 0x3f,0) & 1) << 7 |
                         (ushort)(SUB161(auVar45 >> 0x47,0) & 1) << 8 |
                         (ushort)(SUB161(auVar45 >> 0x4f,0) & 1) << 9 |
                         (ushort)(SUB161(auVar45 >> 0x57,0) & 1) << 10 |
                         (ushort)(SUB161(auVar45 >> 0x5f,0) & 1) << 0xb |
                         (ushort)(SUB161(auVar45 >> 0x67,0) & 1) << 0xc |
                         (ushort)(SUB161(auVar45 >> 0x6f,0) & 1) << 0xd |
                         (ushort)(SUB161(auVar45 >> 0x77,0) & 1) << 0xe |
                        (ushort)(auVar45[0xf] >> 7) << 0xf) != 0xffff) {
              unaff_RBX[0x6d] = 1;
              unaff_RBX[0x6e] = 1;
              unaff_RBX[0x6f] = 1;
              pbStack_c0 = (byte *)0x1417389fc;
              pdb_142dc8110(&UNK_14332b0b8,8,&UNK_14332b1c0);
              goto code_r0x00014173a218;
            }
            unaff_RBX[0xf0] = 0;
            unaff_RBX[0xf1] = 0;
            unaff_RBX[0xf2] = 0;
            unaff_RBX[0xf3] = 0;
            unaff_RBX[0xf4] = 0;
            unaff_RBX[0xf5] = 0;
            unaff_RBX[0xf6] = 0;
            unaff_RBX[0xf7] = 0;
            unaff_RBX[0xf8] = 0x10;
            unaff_RBX[0xf9] = 0;
            unaff_RBX[0xfa] = 0;
            unaff_RBX[0xfb] = 0;
            unaff_RBX[0xfc] = 0;
            unaff_RBX[0xfd] = 0;
            unaff_RBX[0xfe] = 0;
            unaff_RBX[0xff] = 0;
            unaff_RBX[0x100] = 0;
            unaff_RBX[0x101] = 0;
            unaff_RBX[0x102] = 0;
            unaff_RBX[0x103] = 0;
            unaff_RBX[0x104] = 0;
            unaff_RBX[0x105] = 0;
            unaff_RBX[0x106] = 0;
            unaff_RBX[0x107] = 0;
            *(byte **)(unaff_RBX + 0x280) = unaff_RBX + 0xf0;
            unaff_RBX[0x7c] = 1;
            pbVar36 = unaff_RBX + 0x280;
            pbStack_c0 = (byte *)0x1417379af;
            pdb_140d9d5e0(lVar23,pbVar36,&UNK_14332b448);
            lVar29 = *(longlong *)(*(longlong *)(unaff_RBX + 0x70) + 0x38);
            lVar30 = *(longlong *)(*(longlong *)(unaff_RBX + 0x70) + 0x40);
            *(undefined8 *)(unaff_RBX + 0x208) = *(undefined8 *)(lVar29 + 0x28);
            *(undefined8 *)(unaff_RBX + 0x200) = *(undefined8 *)(lVar29 + 0x20);
            uVar39 = *(undefined8 *)(lVar29 + 0x10);
            UNRECOVERED_JUMPTABLE = *(code **)(*(longlong *)(lVar29 + 0x18) + 0x38);
            unaff_RBX[0x7c] = 1;
            pbStack_c0 = (byte *)0x1417379e4;
            uVar39 = (*UNRECOVERED_JUMPTABLE)(uVar39);
            *(undefined8 *)(unaff_RBX + 0x5d0) = uVar39;
            uVar39 = *(undefined8 *)(*(longlong *)(*(longlong *)(unaff_RBX + 0x70) + 0x38) + 0x10);
            UNRECOVERED_JUMPTABLE =
                 *(code **)(*(longlong *)
                             (*(longlong *)(*(longlong *)(unaff_RBX + 0x70) + 0x38) + 0x18) + 0x18);
            unaff_RBX[0x7c] = 1;
            pbStack_c0 = (byte *)0x141737a08;
            pbVar28 = (byte *)(*UNRECOVERED_JUMPTABLE)(uVar39);
            uVar39 = *(undefined8 *)(*(longlong *)(*(longlong *)(unaff_RBX + 0x70) + 0x38) + 0x10);
            UNRECOVERED_JUMPTABLE =
                 *(code **)(*(longlong *)
                             (*(longlong *)(*(longlong *)(unaff_RBX + 0x70) + 0x38) + 0x18) + 0x20);
            unaff_RBX[0x7c] = 1;
            pbStack_c0 = (byte *)0x141737a26;
            uVar18 = (*UNRECOVERED_JUMPTABLE)(uVar39);
            unaff_RBX[0x7c] = 1;
            pbStack_c0 = (byte *)0x141737a44;
            pdb_1415e6d20(unaff_RBX + 0x1c0,unaff_RBX + 0x120);
            *(undefined8 *)(unaff_RBX + 0xd0) = *(undefined8 *)(unaff_RBX + 0x118);
            *(undefined8 *)(unaff_RBX + 0xc0) = *(undefined8 *)(unaff_RBX + 0x108);
            *(undefined8 *)(unaff_RBX + 200) = *(undefined8 *)(unaff_RBX + 0x110);
            *(undefined8 *)(unaff_RBX + 0x290) = *(undefined8 *)(unaff_RBX + 0x100);
            *(undefined8 *)(unaff_RBX + 0x280) = *(undefined8 *)(unaff_RBX + 0xf0);
            *(undefined8 *)(unaff_RBX + 0x288) = *(undefined8 *)(unaff_RBX + 0xf8);
            unaff_RBX[0x7c] = 0;
            uStack_68 = unaff_RBX + 0x280;
            uStack_70 = unaff_RBX + 0xc0;
            pbStack_80 = (byte *)CONCAT71(pbStack_80._1_7_,uVar18);
            pbStack_98 = *(byte **)(unaff_RBX + 0x5d0);
            pbStack_c0 = (byte *)0x141737ad8;
            pbStack_90 = pbVar36;
            uStack_88 = pbVar28;
            pbStack_78 = unaff_RBX + 0x1c0;
            lVar29 = pdb_1417ffee0(lVar30 + 0x10,*(undefined8 *)(unaff_RBX + 0x200),
                                   *(undefined8 *)(unaff_RBX + 0x208),lVar23);
          }
          else {
            lVar23 = *(longlong *)(*(longlong *)(unaff_RBX + 0x70) + 0x38);
            lVar29 = *(longlong *)(*(longlong *)(unaff_RBX + 0x70) + 0x40);
            *(undefined8 *)(unaff_RBX + 0x208) = *(undefined8 *)(lVar23 + 0x28);
            *(undefined8 *)(unaff_RBX + 0x200) = *(undefined8 *)(lVar23 + 0x20);
            uVar39 = *(undefined8 *)(lVar23 + 0x10);
            UNRECOVERED_JUMPTABLE = *(code **)(*(longlong *)(lVar23 + 0x18) + 0x38);
            unaff_RBX[0x6d] = 1;
            unaff_RBX[0x6e] = 1;
            unaff_RBX[0x6f] = 1;
            pbStack_c0 = (byte *)0x1417377f3;
            pbVar28 = (byte *)(*UNRECOVERED_JUMPTABLE)(uVar39);
            uVar39 = *(undefined8 *)(*(longlong *)(*(longlong *)(unaff_RBX + 0x70) + 0x38) + 0x10);
            UNRECOVERED_JUMPTABLE =
                 *(code **)(*(longlong *)
                             (*(longlong *)(*(longlong *)(unaff_RBX + 0x70) + 0x38) + 0x18) + 0x18);
            unaff_RBX[0x6d] = 1;
            unaff_RBX[0x6e] = 1;
            unaff_RBX[0x6f] = 1;
            pbStack_c0 = (byte *)0x14173781c;
            pbVar24 = (byte *)(*UNRECOVERED_JUMPTABLE)(uVar39);
            uVar39 = *(undefined8 *)(*(longlong *)(*(longlong *)(unaff_RBX + 0x70) + 0x38) + 0x10);
            UNRECOVERED_JUMPTABLE =
                 *(code **)(*(longlong *)
                             (*(longlong *)(*(longlong *)(unaff_RBX + 0x70) + 0x38) + 0x18) + 0x20);
            unaff_RBX[0x6d] = 1;
            unaff_RBX[0x6e] = 1;
            unaff_RBX[0x6f] = 1;
            pbStack_c0 = (byte *)0x141737842;
            uVar18 = (*UNRECOVERED_JUMPTABLE)(uVar39);
            unaff_RBX[0x6d] = 1;
            unaff_RBX[0x6e] = 1;
            unaff_RBX[0x6f] = 1;
            pbStack_c0 = (byte *)0x141737868;
            pdb_1415e6d20(unaff_RBX + 0x1c0,unaff_RBX + 0x120);
            *(undefined8 *)(unaff_RBX + 0xd0) = *(undefined8 *)(unaff_RBX + 0x118);
            *(undefined8 *)(unaff_RBX + 0xc0) = *(undefined8 *)(unaff_RBX + 0x108);
            *(undefined8 *)(unaff_RBX + 200) = *(undefined8 *)(unaff_RBX + 0x110);
            unaff_RBX[0x280] = 0;
            unaff_RBX[0x281] = 0;
            unaff_RBX[0x282] = 0;
            unaff_RBX[0x283] = 0;
            unaff_RBX[0x284] = 0;
            unaff_RBX[0x285] = 0;
            unaff_RBX[0x286] = 0;
            unaff_RBX[0x287] = 0;
            unaff_RBX[0x288] = 0x10;
            unaff_RBX[0x289] = 0;
            unaff_RBX[0x28a] = 0;
            unaff_RBX[0x28b] = 0;
            unaff_RBX[0x28c] = 0;
            unaff_RBX[0x28d] = 0;
            unaff_RBX[0x28e] = 0;
            unaff_RBX[0x28f] = 0;
            unaff_RBX[0x290] = 0;
            unaff_RBX[0x291] = 0;
            unaff_RBX[0x292] = 0;
            unaff_RBX[0x293] = 0;
            unaff_RBX[0x294] = 0;
            unaff_RBX[0x295] = 0;
            unaff_RBX[0x296] = 0;
            unaff_RBX[0x297] = 0;
            unaff_RBX[0x6d] = 0;
            unaff_RBX[0x6e] = 1;
            unaff_RBX[0x6f] = 1;
            uStack_68 = unaff_RBX + 0x280;
            uStack_70 = unaff_RBX + 0xc0;
            pbStack_80 = (byte *)CONCAT71(pbStack_80._1_7_,uVar18);
            pbStack_c0 = (byte *)0x141737902;
            pbStack_98 = pbVar28;
            pbStack_90 = pbVar36;
            uStack_88 = pbVar24;
            pbStack_78 = unaff_RBX + 0x1c0;
            lVar29 = pdb_1417ffee0(lVar29 + 0x10,*(undefined8 *)(unaff_RBX + 0x200),
                                   *(undefined8 *)(unaff_RBX + 0x208),0);
          }
          *(undefined8 *)(unaff_RBX + 0x280) = *(undefined8 *)(unaff_RBX + 0x98);
          *(undefined8 *)(unaff_RBX + 0x288) = *(undefined8 *)(unaff_RBX + 0xa0);
          *(undefined4 *)(unaff_RBX + 0x290) = *(undefined4 *)(unaff_RBX + 0xa8);
          *(undefined4 *)(unaff_RBX + 0x294) = *(undefined4 *)(unaff_RBX + 0xac);
          *(undefined4 *)(unaff_RBX + 0x298) = *(undefined4 *)(unaff_RBX + 0xb0);
          *(undefined4 *)(unaff_RBX + 0x29c) = *(undefined4 *)(unaff_RBX + 0xb4);
          *(longlong *)(unaff_RBX + 0x2a0) = lVar29;
          lVar23 = *(longlong *)(unaff_RBX + 0x280);
          if (lVar29 == 0 || lVar23 != 0) {
            uVar39 = *(undefined8 *)(unaff_RBX + 0x288);
            pbVar24 = *(byte **)(unaff_RBX + 0x290);
            *(undefined8 *)(unaff_RBX + 0x240) = *(undefined8 *)(unaff_RBX + 0x130);
            pbVar28 = *(byte **)(unaff_RBX + 0x298);
            *(undefined8 *)(unaff_RBX + 0x230) = *(undefined8 *)(unaff_RBX + 0x120);
            *(undefined8 *)(unaff_RBX + 0x238) = *(undefined8 *)(unaff_RBX + 0x128);
            if (lVar29 != 0) {
              unaff_RBX[0x6d] = 0;
              unaff_RBX[0x6e] = 0;
              unaff_RBX[0x6f] = 0;
              pbStack_c0 = (byte *)0x141737b6d;
              pdb_1404b38e0(unaff_RBX + 0x2a0);
            }
          }
          else {
            lVar23 = *(longlong *)(*(longlong *)(unaff_RBX + 0x70) + 0x10);
            uVar39 = *(undefined8 *)(*(longlong *)(unaff_RBX + 0x70) + 0x18);
            unaff_RBX[0xc0] = 1;
            unaff_RBX[0xc1] = 0;
            unaff_RBX[0xc2] = 0;
            unaff_RBX[0xc3] = 0;
            unaff_RBX[0xc4] = 0;
            unaff_RBX[0xc5] = 0;
            unaff_RBX[0xc6] = 0;
            unaff_RBX[199] = 0;
            unaff_RBX[200] = 1;
            unaff_RBX[0xc9] = 0;
            unaff_RBX[0xca] = 0;
            unaff_RBX[0xcb] = 0;
            unaff_RBX[0xcc] = 0;
            unaff_RBX[0xcd] = 0;
            unaff_RBX[0xce] = 0;
            unaff_RBX[0xcf] = 0;
            *(longlong *)(unaff_RBX + 0xd0) = lVar29;
            pbStack_c0 = (byte *)0x141737b9d;
            pdb_14007ee60();
            pbStack_c0 = (byte *)0x141737bac;
            pbVar24 = pub_1406abab0(0x18,8);
            if (pbVar24 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
              pbStack_c0 = (byte *)0x1417389d2;
              pdb_142dc7e11(8,0x18);
            }
            *(undefined8 *)(pbVar24 + 0x10) = *(undefined8 *)(unaff_RBX + 0xd0);
            uVar31 = *(undefined8 *)(unaff_RBX + 200);
            *(undefined8 *)pbVar24 = *(undefined8 *)(unaff_RBX + 0xc0);
            *(undefined8 *)(pbVar24 + 8) = uVar31;
            *(undefined8 *)(unaff_RBX + 0x230) = *(undefined8 *)(unaff_RBX + 0x120);
            *(undefined8 *)(unaff_RBX + 0x238) = *(undefined8 *)(unaff_RBX + 0x128);
            *(undefined8 *)(unaff_RBX + 0x240) = *(undefined8 *)(unaff_RBX + 0x130);
            if (*(longlong *)(unaff_RBX + 0x280) == 0) {
              plVar27 = *(longlong **)(unaff_RBX + 0x288);
              LOCK();
              *plVar27 = *plVar27 + -1;
              UNLOCK();
              pbVar28 = &UNK_14332b220;
              if (*plVar27 == 0) {
                unaff_RBX[0x6d] = 0;
                unaff_RBX[0x6e] = 0;
                unaff_RBX[0x6f] = 0;
                pbStack_c0 = (byte *)0x141737e1b;
                pdb_140c7a240(unaff_RBX + 0x288);
              }
            }
            else {
              plVar27 = *(longlong **)(unaff_RBX + 0x290);
              LOCK();
              *plVar27 = *plVar27 + -1;
              UNLOCK();
              pbVar28 = &UNK_14332b220;
              if (*plVar27 == 0) {
                unaff_RBX[0x6d] = 0;
                unaff_RBX[0x6e] = 0;
                unaff_RBX[0x6f] = 0;
                pbStack_c0 = (byte *)0x141737c2a;
                pdb_140c7a240(unaff_RBX + 0x290);
              }
            }
          }
          lVar29 = *(longlong *)(unaff_RBX + 0x158);
          if (lVar29 != 0) {
            lVar30 = lVar29 * 0x10 + 0x10;
            uVar32 = lVar29 + lVar30 + 0x11;
            if (uVar32 != 0) {
              pbStack_c0 = (byte *)0x141737e55;
              pub_1406abac0((byte *)(*(longlong *)(unaff_RBX + 0x150) - lVar30),uVar32,0x10);
            }
          }
          plVar27 = (longlong *)**(undefined8 **)(unaff_RBX + 0x88);
          LOCK();
          *plVar27 = *plVar27 + -1;
          UNLOCK();
          if (*plVar27 == 0) {
            *(undefined8 *)(unaff_RBX + 0x250) = *(undefined8 *)(unaff_RBX + 0x148);
            *(undefined8 *)(unaff_RBX + 600) = *(undefined8 *)(unaff_RBX + 0x140);
            pbStack_c0 = (byte *)0x141737e86;
            pdb_140dd7630();
          }
          lVar29 = *(longlong *)(unaff_RBX + 0x70);
          *(undefined2 *)(lVar29 + 0x48) = 0;
        }
        else {
          uVar39 = *(undefined8 *)(unaff_RBX + 0x1c0);
          pbVar24 = *(byte **)(unaff_RBX + 0x1c8);
          *(undefined8 *)(unaff_RBX + 0x658) = uVar39;
          *(byte **)(unaff_RBX + 0x660) = pbVar24;
          *(undefined8 *)(unaff_RBX + 0x130) = *(undefined8 *)(unaff_RBX + 0x1e0);
          *(undefined8 *)(unaff_RBX + 0x120) = *(undefined8 *)(unaff_RBX + 0x1d0);
          *(undefined8 *)(unaff_RBX + 0x128) = *(undefined8 *)(unaff_RBX + 0x1d8);
          plVar27 = plRam0000000143cad8a8;
          if (*_DAT_143ca4b08 < 2) {
            bVar20 = *(byte *)(plRam0000000143cad8a8 + 2);
            pbVar36 = (byte *)(ulonglong)bVar20;
            if (2 < bVar20) {
              *(undefined8 *)(unaff_RBX + 0x88) = uVar39;
              pbStack_c0 = (byte *)0x14173962b;
              uVar22 = pdb_142db8070(plRam0000000143cad8a8);
              pbVar36 = (byte *)(ulonglong)uVar22;
              uVar39 = *(undefined8 *)(unaff_RBX + 0x88);
              if ((char)uVar22 != '\0') goto code_r0x000141738635;
              goto code_r0x00014173963d;
            }
            if (bVar20 == 0) goto code_r0x00014173963d;
code_r0x000141738635:
            *(undefined8 *)(unaff_RBX + 0x88) = uVar39;
            pbStack_c0 = (byte *)0x141738644;
            cVar19 = pdb_140dd7f60(*plVar27);
            uVar39 = *(undefined8 *)(unaff_RBX + 0x88);
            if (cVar19 == '\0') goto code_r0x00014173963d;
            lVar23 = *plVar27;
            uVar32 = *(ulonglong *)(lVar23 + 0x38);
            if (uVar32 == 0) {
              pbStack_c0 = (byte *)0x14173a091;
              pdb_142dc8110(&UNK_14332aff8,0x22,&UNK_14332b118);
              goto code_r0x00014173a218;
            }
            uVar39 = *(undefined8 *)(lVar23 + 0x30);
            uVar31 = *(undefined8 *)(lVar23 + 0x40);
            uVar6 = *(undefined8 *)(lVar23 + 0x48);
            *(undefined8 *)(unaff_RBX + 0xc0) = uVar39;
            *(ulonglong *)(unaff_RBX + 200) = uVar32;
            *(undefined8 *)(unaff_RBX + 0xd0) = uVar31;
            *(undefined8 *)(unaff_RBX + 0xd8) = uVar6;
            unaff_RBX[0xe0] = 0;
            unaff_RBX[0xe1] = 0;
            unaff_RBX[0xe2] = 0;
            unaff_RBX[0xe3] = 0;
            unaff_RBX[0xe4] = 0;
            unaff_RBX[0xe5] = 0;
            unaff_RBX[0xe6] = 0;
            unaff_RBX[0xe7] = 0;
            *(undefined **)(unaff_RBX + 0x108) = &UNK_14332b130;
            unaff_RBX[0x110] = 0x39;
            unaff_RBX[0x111] = 0;
            unaff_RBX[0x112] = 0;
            unaff_RBX[0x113] = 0;
            unaff_RBX[0x114] = 0;
            unaff_RBX[0x115] = 0;
            unaff_RBX[0x116] = 0;
            unaff_RBX[0x117] = 0;
            if (uVar32 == 1) {
              pbStack_c0 = (byte *)0x14173a0cd;
              pdb_142dc8110(&UNK_14332aff8,0x22,&UNK_14332b118);
              goto code_r0x00014173a218;
            }
            *(undefined8 *)(unaff_RBX + 0x98) = uVar39;
            *(ulonglong *)(unaff_RBX + 0xa0) = uVar32;
            *(undefined8 *)(unaff_RBX + 0xa8) = uVar31;
            *(undefined8 *)(unaff_RBX + 0xb0) = uVar6;
            unaff_RBX[0xb8] = 1;
            unaff_RBX[0xb9] = 0;
            unaff_RBX[0xba] = 0;
            unaff_RBX[0xbb] = 0;
            unaff_RBX[0xbc] = 0;
            unaff_RBX[0xbd] = 0;
            unaff_RBX[0xbe] = 0;
            unaff_RBX[0xbf] = 0;
            *(longlong *)(unaff_RBX + 0x220) =
                 *(longlong *)(*(longlong *)(unaff_RBX + 0x70) + 0x38) + 0x20;
            if (uVar32 < 3) {
              pbStack_c0 = (byte *)0x14173a109;
              pdb_142dc8110(&UNK_14332aff8,0x22,&UNK_14332b118);
              goto code_r0x00014173a218;
            }
            *(undefined8 *)(unaff_RBX + 0x150) = uVar39;
            *(ulonglong *)(unaff_RBX + 0x158) = uVar32;
            *(undefined8 *)(unaff_RBX + 0x160) = uVar31;
            *(undefined8 *)(unaff_RBX + 0x168) = uVar6;
            unaff_RBX[0x170] = 2;
            unaff_RBX[0x171] = 0;
            unaff_RBX[0x172] = 0;
            unaff_RBX[0x173] = 0;
            unaff_RBX[0x174] = 0;
            unaff_RBX[0x175] = 0;
            unaff_RBX[0x176] = 0;
            unaff_RBX[0x177] = 0;
            *(byte **)(unaff_RBX + 0x280) = unaff_RBX + 0xc0;
            *(byte **)(unaff_RBX + 0x288) = unaff_RBX + 0x108;
            *(undefined **)(unaff_RBX + 0x290) = &UNK_14332b058;
            *(byte **)(unaff_RBX + 0x298) = unaff_RBX + 0x98;
            *(byte **)(unaff_RBX + 0x2a0) = unaff_RBX + 0x220;
            *(undefined **)(unaff_RBX + 0x2a8) = &UNK_14332b078;
            *(byte **)(unaff_RBX + 0x2b0) = unaff_RBX + 0x150;
            *(longlong *)(unaff_RBX + 0x2b8) = *(longlong *)(unaff_RBX + 0x70) + 0x10;
            *(undefined **)(unaff_RBX + 0x2c0) = &UNK_14332b098;
            *(byte **)(unaff_RBX + 0xf0) = unaff_RBX + 0x280;
            unaff_RBX[0xf8] = 3;
            unaff_RBX[0xf9] = 0;
            unaff_RBX[0xfa] = 0;
            unaff_RBX[0xfb] = 0;
            unaff_RBX[0xfc] = 0;
            unaff_RBX[0xfd] = 0;
            unaff_RBX[0xfe] = 0;
            unaff_RBX[0xff] = 0;
            *(longlong *)(unaff_RBX + 0x100) = lVar23 + 0x30;
            pbStack_c0 = (byte *)0x1417387d0;
            pdb_14173b830(unaff_RBX + 0xf0);
code_r0x000141739867:
            uVar39 = *(undefined8 *)(unaff_RBX + 0x88);
          }
          else {
code_r0x00014173963d:
            if ((*_DAT_143ca4ab0 == '\0') && (3 < *_DAT_143ca8e90)) {
              *(undefined8 *)(unaff_RBX + 0x88) = uVar39;
              plVar27 = plRam0000000143cad8a8;
              pbVar28 = (byte *)*plRam0000000143cad8a8;
              uVar39 = *(undefined8 *)(pbVar28 + 0x20);
              uVar31 = *(undefined8 *)(pbVar28 + 0x28);
              unaff_RBX[0x610] = 4;
              unaff_RBX[0x611] = 0;
              unaff_RBX[0x612] = 0;
              unaff_RBX[0x613] = 0;
              unaff_RBX[0x614] = 0;
              unaff_RBX[0x615] = 0;
              unaff_RBX[0x616] = 0;
              unaff_RBX[0x617] = 0;
              *(undefined8 *)(unaff_RBX + 0x618) = uVar39;
              *(undefined8 *)(unaff_RBX + 0x620) = uVar31;
              pbStack_c0 = (byte *)0x141739691;
              uVar31 = pdb_140f33290();
              pbStack_c0 = (byte *)0x1417396a7;
              cVar19 = (**(code **)(pbVar36 + 0x18))(uVar31,unaff_RBX + 0x610);
              uVar39 = *(undefined8 *)(unaff_RBX + 0x88);
              if (cVar19 != '\0') {
                lVar23 = *plVar27;
                uVar32 = *(ulonglong *)(lVar23 + 0x38);
                if (uVar32 == 0) {
                  pbStack_c0 = (byte *)0x14173a1ab;
                  pdb_142dc8110(&UNK_14332aff8,0x22,&UNK_14332b118);
                  goto code_r0x00014173a218;
                }
                uVar39 = *(undefined8 *)(lVar23 + 0x30);
                uVar6 = *(undefined8 *)(lVar23 + 0x40);
                uVar8 = *(undefined8 *)(lVar23 + 0x48);
                *(undefined8 *)(unaff_RBX + 0xc0) = uVar39;
                *(ulonglong *)(unaff_RBX + 200) = uVar32;
                *(undefined8 *)(unaff_RBX + 0xd0) = uVar6;
                *(undefined8 *)(unaff_RBX + 0xd8) = uVar8;
                unaff_RBX[0xe0] = 0;
                unaff_RBX[0xe1] = 0;
                unaff_RBX[0xe2] = 0;
                unaff_RBX[0xe3] = 0;
                unaff_RBX[0xe4] = 0;
                unaff_RBX[0xe5] = 0;
                unaff_RBX[0xe6] = 0;
                unaff_RBX[0xe7] = 0;
                *(undefined **)(unaff_RBX + 0x220) = &UNK_14332b130;
                unaff_RBX[0x228] = 0x39;
                unaff_RBX[0x229] = 0;
                unaff_RBX[0x22a] = 0;
                unaff_RBX[0x22b] = 0;
                unaff_RBX[0x22c] = 0;
                unaff_RBX[0x22d] = 0;
                unaff_RBX[0x22e] = 0;
                unaff_RBX[0x22f] = 0;
                if (uVar32 == 1) {
                  pbStack_c0 = (byte *)0x14173a1e1;
                  pdb_142dc8110(&UNK_14332aff8,0x22,&UNK_14332b118);
                  goto code_r0x00014173a218;
                }
                *(undefined8 *)(unaff_RBX + 0x98) = uVar39;
                *(ulonglong *)(unaff_RBX + 0xa0) = uVar32;
                *(undefined8 *)(unaff_RBX + 0xa8) = uVar6;
                *(undefined8 *)(unaff_RBX + 0xb0) = uVar8;
                unaff_RBX[0xb8] = 1;
                unaff_RBX[0xb9] = 0;
                unaff_RBX[0xba] = 0;
                unaff_RBX[0xbb] = 0;
                unaff_RBX[0xbc] = 0;
                unaff_RBX[0xbd] = 0;
                unaff_RBX[0xbe] = 0;
                unaff_RBX[0xbf] = 0;
                *(longlong *)(unaff_RBX + 0x5d8) =
                     *(longlong *)(*(longlong *)(unaff_RBX + 0x70) + 0x38) + 0x20;
                if (uVar32 < 3) {
                  pbStack_c0 = (byte *)0x14173a217;
                  pdb_142dc8110(&UNK_14332aff8,0x22,&UNK_14332b118);
                  goto code_r0x00014173a218;
                }
                *(undefined8 *)(unaff_RBX + 0x150) = uVar39;
                *(ulonglong *)(unaff_RBX + 0x158) = uVar32;
                *(undefined8 *)(unaff_RBX + 0x160) = uVar6;
                *(undefined8 *)(unaff_RBX + 0x168) = uVar8;
                unaff_RBX[0x170] = 2;
                unaff_RBX[0x171] = 0;
                unaff_RBX[0x172] = 0;
                unaff_RBX[0x173] = 0;
                unaff_RBX[0x174] = 0;
                unaff_RBX[0x175] = 0;
                unaff_RBX[0x176] = 0;
                unaff_RBX[0x177] = 0;
                *(byte **)(unaff_RBX + 0x280) = unaff_RBX + 0xc0;
                *(byte **)(unaff_RBX + 0x288) = unaff_RBX + 0x220;
                *(undefined **)(unaff_RBX + 0x290) = &UNK_14332b058;
                *(byte **)(unaff_RBX + 0x298) = unaff_RBX + 0x98;
                *(byte **)(unaff_RBX + 0x2a0) = unaff_RBX + 0x5d8;
                *(undefined **)(unaff_RBX + 0x2a8) = &UNK_14332b078;
                *(byte **)(unaff_RBX + 0x2b0) = unaff_RBX + 0x150;
                *(longlong *)(unaff_RBX + 0x2b8) = *(longlong *)(unaff_RBX + 0x70) + 0x10;
                *(undefined **)(unaff_RBX + 0x2c0) = &UNK_14332b098;
                *(byte **)(unaff_RBX + 0x108) = unaff_RBX + 0x280;
                unaff_RBX[0x110] = 3;
                unaff_RBX[0x111] = 0;
                unaff_RBX[0x112] = 0;
                unaff_RBX[0x113] = 0;
                unaff_RBX[0x114] = 0;
                unaff_RBX[0x115] = 0;
                unaff_RBX[0x116] = 0;
                unaff_RBX[0x117] = 0;
                *(longlong *)(unaff_RBX + 0x118) = lVar23 + 0x30;
                *(undefined8 *)(unaff_RBX + 0x100) = *(undefined8 *)(unaff_RBX + 0x620);
                *(undefined8 *)(unaff_RBX + 0xf0) = *(undefined8 *)(unaff_RBX + 0x610);
                *(undefined8 *)(unaff_RBX + 0xf8) = *(undefined8 *)(unaff_RBX + 0x618);
                pbStack_98 = unaff_RBX + 0x108;
                pbStack_c0 = (byte *)0x141739866;
                pdb_140dd7f80(pbVar28,uVar31,pbVar36,unaff_RBX + 0xf0);
                goto code_r0x000141739867;
              }
            }
          }
          *(undefined8 *)(unaff_RBX + 0x240) = *(undefined8 *)(unaff_RBX + 0x130);
          *(undefined8 *)(unaff_RBX + 0x230) = *(undefined8 *)(unaff_RBX + 0x120);
          *(undefined8 *)(unaff_RBX + 0x238) = *(undefined8 *)(unaff_RBX + 0x128);
          lVar23 = 0;
          lVar29 = *(longlong *)(unaff_RBX + 0x70);
        }
        uVar32 = *(longlong *)(lVar29 + 0x38) + 0x10;
        *(longlong *)(unaff_RBX + 0x280) = lVar23;
        *(undefined8 *)(unaff_RBX + 0x288) = uVar39;
        *(byte **)(unaff_RBX + 0x290) = pbVar24;
        *(byte **)(unaff_RBX + 0x298) = pbVar28;
        *(undefined8 *)(unaff_RBX + 0x160) = *(undefined8 *)(unaff_RBX + 0x240);
        *(undefined8 *)(unaff_RBX + 0x150) = *(undefined8 *)(unaff_RBX + 0x230);
        *(undefined8 *)(unaff_RBX + 0x158) = *(undefined8 *)(unaff_RBX + 0x238);
        pbVar36 = unaff_RBX + 0x280;
        pbVar28 = unaff_RBX + 0x150;
        pbStack_c0 = (byte *)0x1417398f4;
        pdb_141746c10(unaff_RBX + 0x1c0,uVar32,pbVar36,pbVar28);
        plVar27 = (longlong *)(*(longlong *)(unaff_RBX + 0x70) + 0x38);
        *(undefined1 *)(*(longlong *)(unaff_RBX + 0x70) + 0x60) = 0;
        plVar9 = plRam0000000143cad8b8;
        if (*(longlong *)(unaff_RBX + 0x1c0) == 0) {
          if (*_DAT_143ca4b08 < 2) {
            bVar20 = *(byte *)(plRam0000000143cad8b8 + 2);
            uVar32 = (ulonglong)bVar20;
            if (2 < bVar20) {
              unaff_RBX[0x6c] = 1;
              pbStack_c0 = (byte *)0x141739adb;
              uVar22 = pdb_142db8070(plRam0000000143cad8b8);
              uVar32 = (ulonglong)uVar22;
              if ((char)uVar22 != '\0') goto code_r0x00014173993f;
              goto code_r0x000141739ae6;
            }
            if (bVar20 == 0) goto code_r0x000141739ae6;
code_r0x00014173993f:
            lVar23 = *plVar9;
            unaff_RBX[0x6c] = 1;
            pbStack_c0 = (byte *)0x14173994b;
            cVar19 = pdb_140dd7f60(lVar23);
            if (cVar19 == '\0') goto code_r0x000141739ae6;
            lVar23 = *plVar9;
            uVar32 = *(ulonglong *)(lVar23 + 0x38);
            if (uVar32 == 0) {
              unaff_RBX[0x6c] = 1;
              pbStack_c0 = (byte *)0x141739f51;
              pdb_142dc8110(&UNK_14332aff8,0x22,&UNK_14332b278);
              goto code_r0x00014173a218;
            }
            uVar39 = *(undefined8 *)(lVar23 + 0x30);
            uVar31 = *(undefined8 *)(lVar23 + 0x40);
            uVar6 = *(undefined8 *)(lVar23 + 0x48);
            *(undefined8 *)(unaff_RBX + 0xc0) = uVar39;
            *(ulonglong *)(unaff_RBX + 200) = uVar32;
            *(undefined8 *)(unaff_RBX + 0xd0) = uVar31;
            *(undefined8 *)(unaff_RBX + 0xd8) = uVar6;
            unaff_RBX[0xe0] = 0;
            unaff_RBX[0xe1] = 0;
            unaff_RBX[0xe2] = 0;
            unaff_RBX[0xe3] = 0;
            unaff_RBX[0xe4] = 0;
            unaff_RBX[0xe5] = 0;
            unaff_RBX[0xe6] = 0;
            unaff_RBX[0xe7] = 0;
            *(undefined **)(unaff_RBX + 0x108) = &UNK_14332b290;
            unaff_RBX[0x110] = 0x33;
            unaff_RBX[0x111] = 0;
            unaff_RBX[0x112] = 0;
            unaff_RBX[0x113] = 0;
            unaff_RBX[0x114] = 0;
            unaff_RBX[0x115] = 0;
            unaff_RBX[0x116] = 0;
            unaff_RBX[0x117] = 0;
            if (uVar32 == 1) {
              unaff_RBX[0x6c] = 1;
              pbStack_c0 = (byte *)0x141739f73;
              pdb_142dc8110(&UNK_14332aff8,0x22,&UNK_14332b278);
              goto code_r0x00014173a218;
            }
            *(undefined8 *)(unaff_RBX + 0x98) = uVar39;
            *(ulonglong *)(unaff_RBX + 0xa0) = uVar32;
            *(undefined8 *)(unaff_RBX + 0xa8) = uVar31;
            *(undefined8 *)(unaff_RBX + 0xb0) = uVar6;
            unaff_RBX[0xb8] = 1;
            unaff_RBX[0xb9] = 0;
            unaff_RBX[0xba] = 0;
            unaff_RBX[0xbb] = 0;
            unaff_RBX[0xbc] = 0;
            unaff_RBX[0xbd] = 0;
            unaff_RBX[0xbe] = 0;
            unaff_RBX[0xbf] = 0;
            *(longlong *)(unaff_RBX + 0x120) = *plVar27 + 0x20;
            if (uVar32 < 3) {
              unaff_RBX[0x6c] = 1;
              pbStack_c0 = (byte *)0x141739f95;
              pdb_142dc8110(&UNK_14332aff8,0x22,&UNK_14332b278);
              goto code_r0x00014173a218;
            }
            *(undefined8 *)(unaff_RBX + 0x150) = uVar39;
            *(ulonglong *)(unaff_RBX + 0x158) = uVar32;
            *(undefined8 *)(unaff_RBX + 0x160) = uVar31;
            *(undefined8 *)(unaff_RBX + 0x168) = uVar6;
            unaff_RBX[0x170] = 2;
            unaff_RBX[0x171] = 0;
            unaff_RBX[0x172] = 0;
            unaff_RBX[0x173] = 0;
            unaff_RBX[0x174] = 0;
            unaff_RBX[0x175] = 0;
            unaff_RBX[0x176] = 0;
            unaff_RBX[0x177] = 0;
            *(byte **)(unaff_RBX + 0x280) = unaff_RBX + 0xc0;
            *(byte **)(unaff_RBX + 0x288) = unaff_RBX + 0x108;
            *(undefined **)(unaff_RBX + 0x290) = &UNK_14332b058;
            *(byte **)(unaff_RBX + 0x298) = unaff_RBX + 0x98;
            *(byte **)(unaff_RBX + 0x2a0) = unaff_RBX + 0x120;
            *(undefined **)(unaff_RBX + 0x2a8) = &UNK_14332b078;
            *(byte **)(unaff_RBX + 0x2b0) = pbVar28;
            *(longlong *)(unaff_RBX + 0x2b8) = *(longlong *)(unaff_RBX + 0x70) + 0x10;
            *(undefined **)(unaff_RBX + 0x2c0) = &UNK_14332b098;
            *(byte **)(unaff_RBX + 0xf0) = pbVar36;
            unaff_RBX[0xf8] = 3;
            unaff_RBX[0xf9] = 0;
            unaff_RBX[0xfa] = 0;
            unaff_RBX[0xfb] = 0;
            unaff_RBX[0xfc] = 0;
            unaff_RBX[0xfd] = 0;
            unaff_RBX[0xfe] = 0;
            unaff_RBX[0xff] = 0;
            *(longlong *)(unaff_RBX + 0x100) = lVar23 + 0x30;
            unaff_RBX[0x6c] = 1;
            pbStack_c0 = (byte *)0x141739ac5;
            pdb_14173b780(unaff_RBX + 0xf0);
          }
          else {
code_r0x000141739ae6:
            plVar9 = plRam0000000143cad8b8;
            if ((*_DAT_143ca4ab0 == '\0') && (3 < *_DAT_143ca8e90)) {
              lVar23 = *plRam0000000143cad8b8;
              *(longlong *)(unaff_RBX + 0x88) = lVar23;
              uVar39 = *(undefined8 *)(lVar23 + 0x20);
              uVar31 = *(undefined8 *)(lVar23 + 0x28);
              unaff_RBX[0x640] = 4;
              unaff_RBX[0x641] = 0;
              unaff_RBX[0x642] = 0;
              unaff_RBX[0x643] = 0;
              unaff_RBX[0x644] = 0;
              unaff_RBX[0x645] = 0;
              unaff_RBX[0x646] = 0;
              unaff_RBX[0x647] = 0;
              *(undefined8 *)(unaff_RBX + 0x648) = uVar39;
              *(undefined8 *)(unaff_RBX + 0x650) = uVar31;
              unaff_RBX[0x6c] = 1;
              pbStack_c0 = (byte *)0x141739b3e;
              uVar39 = pdb_140f33290();
              UNRECOVERED_JUMPTABLE = *(code **)(uVar32 + 0x18);
              unaff_RBX[0x6c] = 1;
              pbStack_c0 = (byte *)0x141739b59;
              cVar19 = (*UNRECOVERED_JUMPTABLE)(uVar39,unaff_RBX + 0x640);
              if (cVar19 != '\0') {
                lVar23 = *plVar9;
                uVar5 = *(ulonglong *)(lVar23 + 0x38);
                if (uVar5 == 0) {
                  unaff_RBX[0x6c] = 1;
                  pbStack_c0 = (byte *)0x14173a12b;
                  pdb_142dc8110(&UNK_14332aff8,0x22,&UNK_14332b278);
                  goto code_r0x00014173a218;
                }
                uVar31 = *(undefined8 *)(lVar23 + 0x30);
                uVar6 = *(undefined8 *)(lVar23 + 0x40);
                uVar8 = *(undefined8 *)(lVar23 + 0x48);
                *(undefined8 *)(unaff_RBX + 0xc0) = uVar31;
                *(ulonglong *)(unaff_RBX + 200) = uVar5;
                *(undefined8 *)(unaff_RBX + 0xd0) = uVar6;
                *(undefined8 *)(unaff_RBX + 0xd8) = uVar8;
                unaff_RBX[0xe0] = 0;
                unaff_RBX[0xe1] = 0;
                unaff_RBX[0xe2] = 0;
                unaff_RBX[0xe3] = 0;
                unaff_RBX[0xe4] = 0;
                unaff_RBX[0xe5] = 0;
                unaff_RBX[0xe6] = 0;
                unaff_RBX[0xe7] = 0;
                *(undefined **)(unaff_RBX + 0x120) = &UNK_14332b290;
                unaff_RBX[0x128] = 0x33;
                unaff_RBX[0x129] = 0;
                unaff_RBX[0x12a] = 0;
                unaff_RBX[299] = 0;
                unaff_RBX[300] = 0;
                unaff_RBX[0x12d] = 0;
                unaff_RBX[0x12e] = 0;
                unaff_RBX[0x12f] = 0;
                if (uVar5 == 1) {
                  unaff_RBX[0x6c] = 1;
                  pbStack_c0 = (byte *)0x14173a14d;
                  pdb_142dc8110(&UNK_14332aff8,0x22,&UNK_14332b278);
                  goto code_r0x00014173a218;
                }
                *(undefined8 *)(unaff_RBX + 0x98) = uVar31;
                *(ulonglong *)(unaff_RBX + 0xa0) = uVar5;
                *(undefined8 *)(unaff_RBX + 0xa8) = uVar6;
                *(undefined8 *)(unaff_RBX + 0xb0) = uVar8;
                unaff_RBX[0xb8] = 1;
                unaff_RBX[0xb9] = 0;
                unaff_RBX[0xba] = 0;
                unaff_RBX[0xbb] = 0;
                unaff_RBX[0xbc] = 0;
                unaff_RBX[0xbd] = 0;
                unaff_RBX[0xbe] = 0;
                unaff_RBX[0xbf] = 0;
                *(longlong *)(unaff_RBX + 0x220) = *plVar27 + 0x20;
                if (uVar5 < 3) {
                  unaff_RBX[0x6c] = 1;
                  pbStack_c0 = (byte *)0x14173a16f;
                  pdb_142dc8110(&UNK_14332aff8,0x22,&UNK_14332b278);
                  goto code_r0x00014173a218;
                }
                *(undefined8 *)(unaff_RBX + 0x150) = uVar31;
                *(ulonglong *)(unaff_RBX + 0x158) = uVar5;
                *(undefined8 *)(unaff_RBX + 0x160) = uVar6;
                *(undefined8 *)(unaff_RBX + 0x168) = uVar8;
                unaff_RBX[0x170] = 2;
                unaff_RBX[0x171] = 0;
                unaff_RBX[0x172] = 0;
                unaff_RBX[0x173] = 0;
                unaff_RBX[0x174] = 0;
                unaff_RBX[0x175] = 0;
                unaff_RBX[0x176] = 0;
                unaff_RBX[0x177] = 0;
                *(byte **)(unaff_RBX + 0x280) = unaff_RBX + 0xc0;
                *(byte **)(unaff_RBX + 0x288) = unaff_RBX + 0x120;
                *(undefined **)(unaff_RBX + 0x290) = &UNK_14332b058;
                *(byte **)(unaff_RBX + 0x298) = unaff_RBX + 0x98;
                *(byte **)(unaff_RBX + 0x2a0) = unaff_RBX + 0x220;
                *(undefined **)(unaff_RBX + 0x2a8) = &UNK_14332b078;
                *(byte **)(unaff_RBX + 0x2b0) = pbVar28;
                *(longlong *)(unaff_RBX + 0x2b8) = *(longlong *)(unaff_RBX + 0x70) + 0x10;
                *(undefined **)(unaff_RBX + 0x2c0) = &UNK_14332b098;
                *(byte **)(unaff_RBX + 0x108) = pbVar36;
                unaff_RBX[0x110] = 3;
                unaff_RBX[0x111] = 0;
                unaff_RBX[0x112] = 0;
                unaff_RBX[0x113] = 0;
                unaff_RBX[0x114] = 0;
                unaff_RBX[0x115] = 0;
                unaff_RBX[0x116] = 0;
                unaff_RBX[0x117] = 0;
                *(longlong *)(unaff_RBX + 0x118) = lVar23 + 0x30;
                *(undefined8 *)(unaff_RBX + 0x100) = *(undefined8 *)(unaff_RBX + 0x650);
                *(undefined8 *)(unaff_RBX + 0xf0) = *(undefined8 *)(unaff_RBX + 0x640);
                *(undefined8 *)(unaff_RBX + 0xf8) = *(undefined8 *)(unaff_RBX + 0x648);
                unaff_RBX[0x6c] = 1;
                pbStack_98 = unaff_RBX + 0x108;
                pbStack_c0 = (byte *)0x141739d0a;
                pdb_140dd7f80(*(undefined8 *)(unaff_RBX + 0x88),uVar39,uVar32,unaff_RBX + 0xf0);
              }
            }
          }
          uVar39 = _UNK_14332b500;
          if (*(longlong *)(unaff_RBX + 0x1c0) == 0) {
            pbStack_98 = unaff_RBX + 0x1c8;
            lVar23 = *(longlong *)(*(longlong *)(unaff_RBX + 0x70) + 0x40);
            *(undefined8 *)(unaff_RBX + 0x280) = _DAT_14332b4f8;
            *(undefined8 *)(unaff_RBX + 0x288) = uVar39;
            lVar29 = *(longlong *)(*(longlong *)(unaff_RBX + 0x70) + 0x38);
            uVar39 = *(undefined8 *)(lVar29 + 0x20);
            uVar31 = *(undefined8 *)(lVar29 + 0x28);
            unaff_RBX[0x6c] = 1;
            pbStack_c0 = (byte *)0x141739d59;
            pdb_141c2b710(lVar23 + 0x10,unaff_RBX + 0x280,uVar39,uVar31);
          }
        }
        *(undefined4 *)(unaff_RBX + 0x290) = *(undefined4 *)(unaff_RBX + 0x1d0);
        *(undefined4 *)(unaff_RBX + 0x294) = *(undefined4 *)(unaff_RBX + 0x1d4);
        *(undefined4 *)(unaff_RBX + 0x298) = *(undefined4 *)(unaff_RBX + 0x1d8);
        *(undefined4 *)(unaff_RBX + 0x29c) = *(undefined4 *)(unaff_RBX + 0x1dc);
        *(undefined8 *)(unaff_RBX + 0x280) = *(undefined8 *)(unaff_RBX + 0x1c0);
        *(undefined8 *)(unaff_RBX + 0x288) = *(undefined8 *)(unaff_RBX + 0x1c8);
        unaff_RBX[0x6c] = 0;
        pbStack_c0 = (byte *)0x141739d8f;
        pdb_14173b990(unaff_RBX + 0x260,unaff_RBX + 0x280);
        *(longlong *)(unaff_RBX + 0x88) = *(longlong *)(unaff_RBX + 0x70) + 0x58;
        pbStack_c0 = (byte *)0x141739da4;
        pdb_141ac4fd0();
        plVar9 = (longlong *)**(undefined8 **)(unaff_RBX + 0x88);
        LOCK();
        *plVar9 = *plVar9 + -1;
        UNLOCK();
        unaff_R13 = *(byte **)(unaff_RBX + 0x80);
        if (*plVar9 == 0) {
          pbStack_c0 = (byte *)0x141739dc1;
          pdb_140dd76c0();
        }
        plVar9 = (longlong *)*plVar27;
        LOCK();
        *plVar9 = *plVar9 + -1;
        UNLOCK();
        if (*plVar9 == 0) {
          pbStack_c0 = (byte *)0x141739dd3;
          pdb_140dd76c0(plVar27);
        }
        plVar27 = *(longlong **)(*(longlong *)(unaff_RBX + 0x70) + 0x40);
        LOCK();
        *plVar27 = *plVar27 + -1;
        UNLOCK();
        if (*plVar27 == 0) {
          pbStack_c0 = (byte *)0x141739def;
          pdb_140dd78e0(*(longlong *)(unaff_RBX + 0x70) + 0x40);
        }
        plVar27 = (longlong *)**(undefined8 **)(unaff_RBX + 0x70);
        if (plVar27 != (longlong *)0x0) {
          LOCK();
          *plVar27 = *plVar27 + -1;
          UNLOCK();
          if (*plVar27 == 0) {
            pbStack_c0 = (byte *)0x141739e0b;
            pdb_140c7a240(*(undefined8 *)(unaff_RBX + 0x70));
          }
        }
        goto code_r0x000141739e0c;
      }
      *(undefined8 *)(in_R11 + 0x50) = *(undefined8 *)(in_R11 + 0x28);
      *(undefined8 *)(in_R11 + 0x58) = *(undefined8 *)(in_R11 + 0x30);
      puVar13 = puRam0000000143cad8a0;
      unaff_RDI = pbVar28;
      if (*_DAT_143ca4b08 < 2) {
        bVar20 = (byte)puRam0000000143cad8a0[2];
        unaff_R12 = (ulonglong)bVar20;
        if (2 < bVar20) {
          pbStack_c0 = (byte *)0x141738a23;
          uVar22 = pdb_142db8070(puRam0000000143cad8a0);
          unaff_R12 = (ulonglong)uVar22;
          in_R11 = *(longlong *)(unaff_RBX + 0x70);
          bVar20 = (byte)uVar22;
        }
        if (bVar20 != 0) {
          pbStack_c0 = (byte *)0x141738044;
          cVar19 = pdb_140dd7f60(*puVar13);
          in_R11 = *(longlong *)(unaff_RBX + 0x70);
          if (cVar19 != '\0') {
            uVar32 = *puVar13;
            uVar5 = *(ulonglong *)(uVar32 + 0x38);
            if (uVar5 == 0) {
              pbStack_c0 = (byte *)0x141739e8d;
              pdb_142dc8110(&UNK_14332aff8,0x22,&UNK_14332b0d8);
            }
            else {
              uVar39 = *(undefined8 *)(uVar32 + 0x30);
              uVar31 = *(undefined8 *)(uVar32 + 0x40);
              uVar6 = *(undefined8 *)(uVar32 + 0x48);
              *(undefined8 *)(unaff_RBX + 0xc0) = uVar39;
              *(ulonglong *)(unaff_RBX + 200) = uVar5;
              *(undefined8 *)(unaff_RBX + 0xd0) = uVar31;
              *(undefined8 *)(unaff_RBX + 0xd8) = uVar6;
              unaff_RBX[0xe0] = 0;
              unaff_RBX[0xe1] = 0;
              unaff_RBX[0xe2] = 0;
              unaff_RBX[0xe3] = 0;
              unaff_RBX[0xe4] = 0;
              unaff_RBX[0xe5] = 0;
              unaff_RBX[0xe6] = 0;
              unaff_RBX[0xe7] = 0;
              *(undefined **)(unaff_RBX + 0xf0) = &UNK_14332b0f0;
              unaff_RBX[0xf8] = 0x47;
              unaff_RBX[0xf9] = 0;
              unaff_RBX[0xfa] = 0;
              unaff_RBX[0xfb] = 0;
              unaff_RBX[0xfc] = 0;
              unaff_RBX[0xfd] = 0;
              unaff_RBX[0xfe] = 0;
              unaff_RBX[0xff] = 0;
              if (uVar5 == 1) {
                pbStack_c0 = (byte *)0x141739ecd;
                pdb_142dc8110(&UNK_14332aff8,0x22,&UNK_14332b0d8);
                goto code_r0x00014173a218;
              }
              *(undefined8 *)(unaff_RBX + 0x98) = uVar39;
              *(ulonglong *)(unaff_RBX + 0xa0) = uVar5;
              *(undefined8 *)(unaff_RBX + 0xa8) = uVar31;
              *(undefined8 *)(unaff_RBX + 0xb0) = uVar6;
              unaff_RBX[0xb8] = 1;
              unaff_RBX[0xb9] = 0;
              unaff_RBX[0xba] = 0;
              unaff_RBX[0xbb] = 0;
              unaff_RBX[0xbc] = 0;
              unaff_RBX[0xbd] = 0;
              unaff_RBX[0xbe] = 0;
              unaff_RBX[0xbf] = 0;
              *(longlong *)(unaff_RBX + 0x108) = *(longlong *)(in_R11 + 0x38) + 0x20;
              if (2 < uVar5) {
                *(undefined8 *)(unaff_RBX + 0x150) = uVar39;
                *(ulonglong *)(unaff_RBX + 0x158) = uVar5;
                *(undefined8 *)(unaff_RBX + 0x160) = uVar31;
                *(undefined8 *)(unaff_RBX + 0x168) = uVar6;
                unaff_RBX[0x170] = 2;
                unaff_RBX[0x171] = 0;
                unaff_RBX[0x172] = 0;
                unaff_RBX[0x173] = 0;
                unaff_RBX[0x174] = 0;
                unaff_RBX[0x175] = 0;
                unaff_RBX[0x176] = 0;
                unaff_RBX[0x177] = 0;
                *(byte **)(unaff_RBX + 0x280) = unaff_RBX + 0xc0;
                *(byte **)(unaff_RBX + 0x288) = unaff_RBX + 0xf0;
                *(undefined **)(unaff_RBX + 0x290) = &UNK_14332b058;
                *(byte **)(unaff_RBX + 0x298) = unaff_RBX + 0x98;
                *(byte **)(unaff_RBX + 0x2a0) = unaff_RBX + 0x108;
                *(undefined **)(unaff_RBX + 0x2a8) = &UNK_14332b078;
                *(byte **)(unaff_RBX + 0x2b0) = unaff_RBX + 0x150;
                *(longlong *)(unaff_RBX + 0x2b8) = in_R11 + 0x10;
                *(undefined **)(unaff_RBX + 0x2c0) = &UNK_14332b098;
                *(byte **)(unaff_RBX + 0x1c0) = unaff_RBX + 0x280;
                unaff_RBX[0x1c8] = 3;
                unaff_RBX[0x1c9] = 0;
                unaff_RBX[0x1ca] = 0;
                unaff_RBX[0x1cb] = 0;
                unaff_RBX[0x1cc] = 0;
                unaff_RBX[0x1cd] = 0;
                unaff_RBX[0x1ce] = 0;
                unaff_RBX[0x1cf] = 0;
                *(ulonglong *)(unaff_RBX + 0x1d0) = uVar32 + 0x30;
                pbStack_c0 = (byte *)0x1417381c9;
                pdb_14173b6d0(unaff_RBX + 0x1c0);
                goto code_r0x000141738c4f;
              }
              pbStack_c0 = (byte *)0x141739f0d;
              pdb_142dc8110(&UNK_14332aff8,0x22,&UNK_14332b0d8);
            }
            goto code_r0x00014173a218;
          }
        }
      }
      puVar13 = puRam0000000143cad8a0;
      if ((*_DAT_143ca4ab0 != '\0') || (*_DAT_143ca8e90 < 4)) goto code_r0x000141738c53;
      unaff_R14 = (int *)*puRam0000000143cad8a0;
      uVar39 = *(undefined8 *)(unaff_R14 + 8);
      uVar31 = *(undefined8 *)(unaff_R14 + 10);
      unaff_RBX[0x5f8] = 4;
      unaff_RBX[0x5f9] = 0;
      unaff_RBX[0x5fa] = 0;
      unaff_RBX[0x5fb] = 0;
      unaff_RBX[0x5fc] = 0;
      unaff_RBX[0x5fd] = 0;
      unaff_RBX[0x5fe] = 0;
      unaff_RBX[0x5ff] = 0;
      *(undefined8 *)(unaff_RBX + 0x600) = uVar39;
      *(undefined8 *)(unaff_RBX + 0x608) = uVar31;
      pbStack_c0 = (byte *)0x141738a80;
      unaff_R15 = (byte *)pdb_140f33290();
      pbStack_c0 = (byte *)0x141738a96;
      cVar19 = (**(code **)(unaff_R12 + 0x18))(unaff_R15,unaff_RBX + 0x5f8);
      in_R11 = *(longlong *)(unaff_RBX + 0x70);
      if (cVar19 == '\0') goto code_r0x000141738c53;
      uVar32 = *puVar13;
      pbVar36 = *(byte **)(uVar32 + 0x38);
      if (pbVar36 == (byte *)0x0) {
        pbStack_c0 = (byte *)0x141739fb3;
        pdb_142dc8110(&UNK_14332aff8,0x22,&UNK_14332b0d8);
      }
      else {
        uVar39 = *(undefined8 *)(uVar32 + 0x30);
        param_2 = *(byte **)(uVar32 + 0x40);
        param_3 = *(undefined8 *)(uVar32 + 0x48);
        *(undefined8 *)(unaff_RBX + 0xc0) = uVar39;
        *(byte **)(unaff_RBX + 200) = pbVar36;
        *(byte **)(unaff_RBX + 0xd0) = param_2;
        *(undefined8 *)(unaff_RBX + 0xd8) = param_3;
        unaff_RBX[0xe0] = 0;
        unaff_RBX[0xe1] = 0;
        unaff_RBX[0xe2] = 0;
        unaff_RBX[0xe3] = 0;
        unaff_RBX[0xe4] = 0;
        unaff_RBX[0xe5] = 0;
        unaff_RBX[0xe6] = 0;
        unaff_RBX[0xe7] = 0;
        *(undefined **)(unaff_RBX + 0x108) = &UNK_14332b0f0;
        unaff_RBX[0x110] = 0x47;
        unaff_RBX[0x111] = 0;
        unaff_RBX[0x112] = 0;
        unaff_RBX[0x113] = 0;
        unaff_RBX[0x114] = 0;
        unaff_RBX[0x115] = 0;
        unaff_RBX[0x116] = 0;
        unaff_RBX[0x117] = 0;
        if (pbVar36 == (byte *)0x1) {
          pbStack_c0 = (byte *)0x141739ff3;
          pdb_142dc8110(&UNK_14332aff8,0x22,&UNK_14332b0d8);
          goto code_r0x00014173a218;
        }
        *(undefined8 *)(unaff_RBX + 0x98) = uVar39;
        *(byte **)(unaff_RBX + 0xa0) = pbVar36;
        *(byte **)(unaff_RBX + 0xa8) = param_2;
        *(undefined8 *)(unaff_RBX + 0xb0) = param_3;
        unaff_RBX[0xb8] = 1;
        unaff_RBX[0xb9] = 0;
        unaff_RBX[0xba] = 0;
        unaff_RBX[0xbb] = 0;
        unaff_RBX[0xbc] = 0;
        unaff_RBX[0xbd] = 0;
        unaff_RBX[0xbe] = 0;
        unaff_RBX[0xbf] = 0;
        *(longlong *)(unaff_RBX + 0x120) = *(longlong *)(in_R11 + 0x38) + 0x20;
        if ((byte *)0x2 < pbVar36) goto code_r0x000141738b49;
        pbStack_c0 = (byte *)0x14173a033;
        pdb_142dc8110(&UNK_14332aff8,0x22,&UNK_14332b0d8);
      }
code_r0x00014173a218:
                    /* WARNING: Does not return */
      UNRECOVERED_JUMPTABLE = (code *)invalidInstructionException();
      (*UNRECOVERED_JUMPTABLE)();
    case 9:
code_r0x00014173f2db:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 10:
      goto code_r0x00014173f48a;
    case 0xb:
code_r0x00014173f47e:
      pbVar36 = (byte *)0x2ec2beec;
      bVar43 = (int)param_3 == 1;
code_r0x00014173f48a:
      param_13 = pbVar36;
      if (!bVar43) {
                    /* WARNING: Subroutine does not return */
        pbStack_c0 = (byte *)0x14173f4cd;
        pdb_142dc8590(&UNK_14332bb50);
      }
                    /* WARNING: Subroutine does not return */
      pbStack_c0 = (byte *)0x14173f49f;
      pdb_142dc8570(&UNK_14332bb50);
    case 0xc:
code_r0x00014173f329:
      ppbVar40 = &pbStack_c0;
      pbStack_c0 = pbVar24;
code_r0x00014173f309:
      *unaff_RDI = *unaff_RDI & (byte)pbVar36;
      pbStack_78 = (byte *)CONCAT44(pbStack_78._4_4_,(int)pbStack_78 - (int)param_2);
      uStack_88 = (byte *)CONCAT44(uVar49,uVar48);
      uStack_68 = *(byte **)(param_2 + 0x30);
      pbStack_60 = *(byte **)(param_2 + 0x38);
      uStack_58 = *(byte **)(param_2 + 0x40);
      uStack_50 = *(undefined8 *)(param_2 + 0x48);
      param_12 = param_2 + 0x50;
      *(byte **)(param_2 + 0x50) = in_XMM0_Qa;
      *(undefined8 *)(param_2 + 0x58) = in_XMM0_Qb;
      *(undefined4 *)(param_2 + 0x60) = uVar48;
      *(undefined4 *)(param_2 + 100) = uVar49;
      *(undefined4 *)(param_2 + 0x68) = in_XMM1_Dc;
      *(undefined4 *)(param_2 + 0x6c) = in_XMM1_Dd;
      *(undefined4 *)(param_2 + 0x70) = uVar50;
      *(undefined4 *)(param_2 + 0x74) = uVar51;
      *(undefined4 *)(param_2 + 0x78) = in_XMM2_Dc;
      *(undefined4 *)(param_2 + 0x7c) = in_XMM2_Dd;
      *(undefined4 *)(param_2 + 0x80) = *(undefined4 *)(param_2 + 0x30);
      *(undefined4 *)(param_2 + 0x84) = *(undefined4 *)(param_2 + 0x34);
      *(undefined4 *)(param_2 + 0x88) = *(undefined4 *)(param_2 + 0x38);
      *(undefined4 *)(param_2 + 0x8c) = *(undefined4 *)(param_2 + 0x3c);
      *(byte **)(param_2 + 0x90) = uStack_58;
      *(undefined8 *)(param_2 + 0x98) = uStack_50;
      param_2[0xa0] = 0;
      pbStack_48 = *(byte **)param_12;
      pbStack_40 = *(byte **)(param_2 + 0x58);
      lVar23 = *(longlong *)(param_2 + 0x60);
      uVar39 = *(undefined8 *)(param_2 + 0x78);
      uVar31 = *(undefined8 *)(param_2 + 0x68);
      uVar6 = *(undefined8 *)(param_2 + 0x70);
      pbStackX_18 = *(byte **)(param_2 + 0x80);
      pbStackX_20 = *(byte **)(param_2 + 0x88);
      param_5 = *(byte **)(param_2 + 0x90);
      param_6 = *(undefined8 *)(param_2 + 0x98);
      *(undefined8 *)((longlong)ppbVar40 + -8) = 0x14173f3a1;
      pbStack_98 = in_XMM0_Qa;
      pdb_14098a860(&pbStackX_18);
      unaff_RBX = param_14;
      pbStack_38 = pbStack_48;
      param_14[0xa0] = 1;
      if (SBORROW8(0,lVar23)) {
        param_1[0] = 2;
        param_1[1] = 0;
        param_1[2] = 0;
        param_1[3] = 0;
        param_1[4] = 0;
        param_1[5] = 0;
        param_1[6] = 0;
        param_1[7] = 0;
        pbVar24 = (byte *)0x3;
      }
      else {
        param_5 = pbStack_48;
        param_6 = pbStack_40;
        pbStackX_18 = (byte *)0x1;
        pbStackX_20 = (byte *)0x1;
        *(undefined8 *)((longlong)ppbVar40 + -8) = 0x14173f412;
        param_7 = (longlong *)lVar23;
        param_8 = (byte *)uVar31;
        param_9 = uVar6;
        param_10 = uVar39;
        pdb_14007ee60();
        *(undefined8 *)((longlong)ppbVar40 + -8) = 0x14173f421;
        pbVar36 = pub_1406abab0(0x40,0x10);
        if (pbVar36 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
          *(undefined8 *)((longlong)ppbVar40 + -8) = 0x14173f484;
          pdb_142dc7e11(0x10,0x40);
        }
        *(longlong *)(pbVar36 + 0x30) = param_9;
        *(longlong *)(pbVar36 + 0x38) = param_10;
        *(longlong **)(pbVar36 + 0x20) = param_7;
        *(byte **)(pbVar36 + 0x28) = param_8;
        *(byte **)(pbVar36 + 0x10) = param_5;
        *(undefined8 *)(pbVar36 + 0x18) = param_6;
        *(byte **)pbVar36 = pbStackX_18;
        *(byte **)(pbVar36 + 8) = pbStackX_20;
        param_1[0] = 0;
        param_1[1] = 0;
        param_1[2] = 0;
        param_1[3] = 0;
        param_1[4] = 0;
        param_1[5] = 0;
        param_1[6] = 0;
        param_1[7] = 0;
        *(byte **)(param_1 + 8) = pbVar36;
        *(undefined **)(param_1 + 0x10) = &UNK_14332ba98;
code_r0x00014173f45e:
        pbVar24 = (byte *)0x1;
        param_14 = unaff_RBX;
      }
code_r0x00014173f460:
      param_14[0xb0] = (byte)pbVar24;
      return param_1;
    case 0xd:
code_r0x00014173f5a7:
      uVar41 = (ulonglong)((int)auStack_b8 - 0xd0);
      ppbVar42 = (byte **)(uVar41 + 0x80);
      *(undefined8 *)(uVar41 + 200) = 0xfffffffffffffffe;
      pbVar24 = (byte *)(ulonglong)param_2[0x88];
code_r0x00014173f5c7:
      iVar21 = *(int *)(&UNK_14332bdb8 + (longlong)pbVar24 * 4);
      ppbVar42[7] = param_2;
                    /* WARNING: Could not emulate address calculation at 0x00014173f5ce */
                    /* WARNING: Treating indirect jump as call */
      pbVar36 = (byte *)(*(code *)(&UNK_14332bdb8 + iVar21))();
      return pbVar36;
    case 0xe:
code_r0x00014173f6fe:
      *pbVar24 = *pbVar24 ^ bVar17;
      *pbVar24 = *pbVar24 + bVar17;
code_r0x00014173f6f4:
                    /* WARNING: Subroutine does not return */
      pbStack_c0 = (byte *)0x14173f707;
      pdb_142dc7e11(8,0x30);
    case 0xf:
code_r0x00014173f6f2:
      if (!bVar43) {
        pbStack_c0 = (byte *)0x2deb9001;
                    /* WARNING: Subroutine does not return */
        pdb_142dc8590(&UNK_14332ba20);
      }
      goto code_r0x00014173f6f4;
    case 0x10:
code_r0x00014173f5e7:
      pbStack_98 = (byte *)CONCAT44(pbStack_98._4_4_,(int)pbStack_98 - iVar21);
      pbStack_78 = *(byte **)(param_2 + 0x20);
      uStack_70 = *(byte **)(param_2 + 0x28);
      uStack_68 = *(byte **)(param_2 + 0x30);
      pbStack_60 = *(byte **)(param_2 + 0x38);
      *(byte **)(param_2 + 0x40) = in_XMM0_Qa;
      *(undefined8 *)(param_2 + 0x48) = in_XMM0_Qb;
      *(undefined4 *)(param_2 + 0x50) = uVar48;
      *(undefined4 *)(param_2 + 0x54) = uVar49;
      *(undefined4 *)(param_2 + 0x58) = in_XMM1_Dc;
      *(undefined4 *)(param_2 + 0x5c) = in_XMM1_Dd;
      *(undefined4 *)(param_2 + 0x60) = *(undefined4 *)(param_2 + 0x20);
      *(undefined4 *)(param_2 + 100) = *(undefined4 *)(param_2 + 0x24);
      *(undefined4 *)(param_2 + 0x68) = *(undefined4 *)(param_2 + 0x28);
      *(undefined4 *)(param_2 + 0x6c) = *(undefined4 *)(param_2 + 0x2c);
      *(undefined4 *)(param_2 + 0x70) = *(undefined4 *)(param_2 + 0x30);
      *(undefined4 *)(param_2 + 0x74) = *(undefined4 *)(param_2 + 0x34);
      *(undefined4 *)(param_2 + 0x78) = *(undefined4 *)(param_2 + 0x38);
      *(undefined4 *)(param_2 + 0x7c) = *(undefined4 *)(param_2 + 0x3c);
      param_2[0x80] = 0;
      lVar23 = *(longlong *)(param_2 + 0x40);
      uVar39 = *(undefined8 *)(param_2 + 0x48);
      uStack_58 = *(byte **)(param_2 + 0x50);
      uStack_50 = *(undefined8 *)(param_2 + 0x58);
      pbStack_38 = *(byte **)(param_2 + 0x60);
      pbStack_c0 = (byte *)0x14173f65a;
      pdb_14098a860(ppbVar42);
      uVar31 = uStack_50;
      pbStack_48 = uStack_58;
      pbStack_40 = (byte *)uStack_50;
      *(undefined1 *)(unaff_retaddr + 0x80) = 1;
      if (SBORROW8(0,lVar23)) {
        pbVar28[0] = 2;
        pbVar28[1] = 0;
        pbVar28[2] = 0;
        pbVar28[3] = 0;
        pbVar28[4] = 0;
        pbVar28[5] = 0;
        pbVar28[6] = 0;
        pbVar28[7] = 0;
        uVar18 = 3;
code_r0x00014173f6d9:
        *(undefined1 *)(unaff_retaddr + 0x88) = uVar18;
        return pbVar28;
      }
      pbStack_38 = uStack_58;
      pbStack_c0 = (byte *)0x14173f68e;
      pdb_14007ee60();
      pbStack_c0 = (byte *)0x14173f69d;
      pbVar36 = pub_1406abab0(0x30,8);
      if (pbVar36 != (byte *)0x0) {
        pbVar36[0] = 1;
        pbVar36[1] = 0;
        pbVar36[2] = 0;
        pbVar36[3] = 0;
        pbVar36[4] = 0;
        pbVar36[5] = 0;
        pbVar36[6] = 0;
        pbVar36[7] = 0;
        pbVar36[8] = 1;
        pbVar36[9] = 0;
        pbVar36[10] = 0;
        pbVar36[0xb] = 0;
        pbVar36[0xc] = 0;
        pbVar36[0xd] = 0;
        pbVar36[0xe] = 0;
        pbVar36[0xf] = 0;
        *(longlong *)(pbVar36 + 0x10) = lVar23;
        *(undefined8 *)(pbVar36 + 0x18) = uVar39;
        *(byte **)(pbVar36 + 0x20) = pbStack_38;
        *(undefined8 *)(pbVar36 + 0x28) = uVar31;
        pbVar28[0] = 0;
        pbVar28[1] = 0;
        pbVar28[2] = 0;
        pbVar28[3] = 0;
        pbVar28[4] = 0;
        pbVar28[5] = 0;
        pbVar28[6] = 0;
        pbVar28[7] = 0;
        *(byte **)(pbVar28 + 8) = pbVar36;
        *(undefined **)(pbVar28 + 0x10) = &UNK_14332ba78;
        uVar18 = 1;
        goto code_r0x00014173f6d9;
      }
      goto code_r0x00014173f6f4;
    case 0x11:
code_r0x00014173f832:
      unaff_RBX[0x5f] = unaff_RBX[0x5f] & (byte)unaff_RBX;
      return pbVar24;
    case 0x12:
code_r0x00014173f99f:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0x13:
code_r0x00014173f993:
      *(char *)(uVar32 + 0x1bb764585) = *(char *)(uVar32 + 0x1bb764585) + (char)unaff_R14 + bVar44;
      return pbVar28;
    case 0x14:
code_r0x00014173f883:
      param_2[0x18] = param_2[0x18] + 0x84 + bVar44;
      pbStack_60 = *(byte **)(param_2 + 0x28);
      uStack_58 = *(byte **)(param_2 + 0x30);
      uStack_70 = (byte *)CONCAT44(uVar49,uVar48);
      uStack_68 = (byte *)CONCAT44(in_XMM1_Dd,in_XMM1_Dc);
      *(byte **)(param_2 + 0x38) = in_XMM0_Qa;
      *(undefined8 *)(param_2 + 0x40) = in_XMM0_Qb;
      *(byte **)(param_2 + 0x58) = uStack_68;
      *(byte **)(param_2 + 0x60) = pbStack_60;
      *(byte **)(param_2 + 0x68) = uStack_58;
      *(byte **)(param_2 + 0x48) = pbStack_78;
      *(byte **)(param_2 + 0x50) = uStack_70;
      param_2[0x70] = 0;
      lVar23 = *(longlong *)(param_2 + 0x38);
      pbStack_48 = *(byte **)(param_2 + 0x40);
      pbStack_40 = *(byte **)(param_2 + 0x48);
      pbStack_38 = *(byte **)(param_2 + 0x50);
      pbStack_c0 = (byte *)0x14173f90f;
      pdb_14098a860(ppbVar42);
      pbVar25 = pbStack_40;
      pbVar36 = pbStack_48;
      pbStack_98 = pbStack_48;
      pbStack_90 = pbStack_40;
      unaff_RBP[0x70] = 1;
      if (SBORROW8(0,lVar23)) {
        pbVar28[0] = 2;
        pbVar28[1] = 0;
        pbVar28[2] = 0;
        pbVar28[3] = 0;
        pbVar28[4] = 0;
        pbVar28[5] = 0;
        pbVar28[6] = 0;
        pbVar28[7] = 0;
        bVar20 = 3;
      }
      else {
        pbStack_38 = (byte *)0x1;
        pbStack_c0 = (byte *)0x14173f954;
        pdb_14007ee60();
        pbStack_c0 = (byte *)0x14173f963;
        pbVar24 = pub_1406abab0(0x28,8);
        if (pbVar24 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
          pbStack_c0 = (byte *)0x14173f9b8;
          pdb_142dc7e11(8,0x28);
        }
        *(byte **)(pbVar24 + 0x20) = pbVar25;
        in_XMM0_Qb = 1;
        uVar48 = (undefined4)lVar23;
        uVar49 = (undefined4)((ulonglong)lVar23 >> 0x20);
        in_XMM1_Dc = SUB84(pbVar36,0);
        in_XMM1_Dd = (undefined4)((ulonglong)pbVar36 >> 0x20);
        in_XMM0_Qa = pbStack_38;
code_r0x00014173f978:
        *(undefined4 *)(pbVar24 + 0x10) = uVar48;
        *(undefined4 *)(pbVar24 + 0x14) = uVar49;
        *(undefined4 *)(pbVar24 + 0x18) = in_XMM1_Dc;
        *(undefined4 *)(pbVar24 + 0x1c) = in_XMM1_Dd;
        *(byte **)pbVar24 = in_XMM0_Qa;
        *(undefined8 *)(pbVar24 + 8) = in_XMM0_Qb;
        unaff_RBX = unaff_RBP;
        param_1 = pbVar28;
code_r0x00014173f97f:
        pbVar28 = param_1;
        unaff_RBP = unaff_RBX;
        pbVar28[0] = 0;
        pbVar28[1] = 0;
        pbVar28[2] = 0;
        pbVar28[3] = 0;
        pbVar28[4] = 0;
        pbVar28[5] = 0;
        pbVar28[6] = 0;
        pbVar28[7] = 0;
        *(byte **)(pbVar28 + 8) = pbVar24;
        *(undefined **)(pbVar28 + 0x10) = &UNK_14332ba58;
        bVar20 = 1;
      }
      unaff_RBP[0x78] = bVar20;
      return pbVar28;
    case 0x15:
code_r0x00014173fabe:
      return pbVar24;
    case 0x16:
code_r0x00014173fc82:
      uVar22 = (iVar21 + -1) - (uint)bVar44;
      pcVar33 = (char *)(ulonglong)uVar22;
      *pcVar33 = *pcVar33 + (char)uVar22;
      goto code_r0x00014173fc81;
    case 0x17:
code_r0x00014173fc76:
      pbVar24 = (byte *)(ulonglong)(iVar21 + 0x1bebe3d);
      in_stack_00000218 = unaff_RBX;
      goto code_r0x00014173fc61;
    case 0x18:
code_r0x00014173fb14:
      if ((longlong)uVar32 < -0x14332bd84) {
code_r0x00014173fb16:
        pbStack_c0 = (byte *)0x14173fb27;
        pub_142e32760(unaff_RDI);
        param_30 = *(byte **)(unaff_RBX + 200);
        param_31 = *(ulonglong *)(unaff_RBX + 0xd0);
        param_32 = *(byte **)(unaff_RBX + 0xd8);
        param_33 = *(byte **)(unaff_RBX + 0xe0);
        pbStack_c0 = (byte *)0x14173fb5f;
        pub_142e32760(unaff_RBX + 0xe8,unaff_RDI,0xe8);
        unaff_RBX[0x1d0] = 0;
      }
      else {
code_r0x00014173fb76:
        if ((int)pbVar24 != 0) {
          in_stack_00000210 = pbVar36;
          if ((int)pbVar24 != 1) {
                    /* WARNING: Subroutine does not return */
            pbStack_c0 = (byte *)0x14173fcfc;
            pdb_142dc8590(&UNK_14332bb50);
          }
                    /* WARNING: Subroutine does not return */
          pbStack_c0 = (byte *)0x14173fcc7;
          pdb_142dc8570(&UNK_14332bb50);
        }
      }
      uVar32 = *(ulonglong *)(unaff_RBX + 0xe8);
      pbStack_c0 = (byte *)0x14173fba5;
      pub_142e32760(&param_34,unaff_RBX + 0xf0,0xc0);
      in_stack_000001e8 = *(undefined8 *)(unaff_RBX + 0x1b0);
      in_stack_000001f0 = *(undefined8 *)(unaff_RBX + 0x1b8);
      uStack00000000000001f8 = *(undefined4 *)(unaff_RBX + 0x1c0);
      uStack00000000000001fc = *(undefined4 *)(unaff_RBX + 0x1c4);
      uStack0000000000000200 = *(undefined4 *)(unaff_RBX + 0x1c8);
      uStack0000000000000204 = *(undefined4 *)(unaff_RBX + 0x1cc);
      pbStack_c0 = (byte *)0x14173fbcd;
      pdb_14098a860(&stack0x000001e8);
      pbStack_c0 = (byte *)0x14173fbe4;
      pub_142e32760(&pbStack_98,&param_34,0xc0);
      in_stack_00000218[0x1d0] = 1;
      if (SBORROW8(0,uVar32)) {
        pbVar28[0] = 2;
        pbVar28[1] = 0;
        pbVar28[2] = 0;
        pbVar28[3] = 0;
        pbVar28[4] = 0;
        pbVar28[5] = 0;
        pbVar28[6] = 0;
        pbVar28[7] = 0;
        pcVar33 = (char *)0x3;
        unaff_RBX = in_stack_00000218;
        goto code_r0x00014173fc81;
      }
      pbStack_c0 = (byte *)0x14173fc1b;
      pub_142e32760(&stack0x00000128,&pbStack_98,0xc0);
      param_34 = (byte *)0x1;
      param_35 = 1;
      pbStack_c0 = (byte *)0x14173fc3d;
      param_36 = uVar32;
      pdb_14007ee60();
      pbStack_c0 = (byte *)0x14173fc4c;
      pbVar24 = pub_1406abab0(0xd8,8);
      unaff_RDI = pbVar24;
      if (pbVar24 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
        pbStack_c0 = (byte *)0x14173fca5;
        pdb_142dc7e11(8,0xd8);
      }
      goto code_r0x00014173fc61;
    case 0x19:
code_r0x00014173fdb3:
      (&UNK_14332bd11)[uVar32] = (&UNK_14332bd11)[uVar32] + -0x7c;
      *pbVar24 = *pbVar24 + bVar17;
      pbStack_c0 = (byte *)0x14173fdc0;
      pbVar36 = (byte *)pdb_14098b910();
      return pbVar36;
    case 0x1a:
code_r0x000141740415:
      *pbVar24 = *pbVar24 + bVar17;
      param_2[0x38] = param_2[0x38] + cVar19;
code_r0x00014174041d:
                    /* WARNING: Subroutine does not return */
      pbStack_c0 = (byte *)0x141740422;
      pdb_142dc7e11(pbVar36);
    case 0x1b:
code_r0x000141740409:
      *pbVar24 = *pbVar24 + bVar17;
code_r0x00014174040b:
                    /* WARNING: Subroutine does not return */
      pbStack_c0 = (byte *)0x141740410;
      pdb_142dc8170(pbVar36);
    case 0x1c:
code_r0x00014173fe4a:
      *pbVar24 = *pbVar24 + bVar17;
code_r0x00014173fe2a:
      *pbVar24 = *pbVar24 + (char)pbVar24;
      pbStack_c0 = (byte *)0x14173fe55;
      pdb_141748860(&param_17,&param_9,&stack0xffffffffffffffd8,param_3);
      uStack_88 = param_17;
      pbStack_80 = param_18;
      pbStack_78 = param_19;
      uStack_70 = param_20;
      uStack_68 = param_21;
      pbStack_60 = param_22;
      uStack_58 = param_23;
      uStack_50 = CONCAT44(param_24._4_4_,(undefined4)param_24);
      pbStack_48 = param_25;
      *(byte **)((longlong)param_34 + 0x80) = param_25;
      *(undefined4 *)((longlong)param_34 + 0x70) = param_23._0_4_;
      *(undefined4 *)((longlong)param_34 + 0x74) = param_23._4_4_;
      *(undefined4 *)((longlong)param_34 + 0x78) = (undefined4)param_24;
      *(undefined4 *)((longlong)param_34 + 0x7c) = param_24._4_4_;
      *(undefined4 *)((longlong)param_34 + 0x60) = param_21._0_4_;
      *(undefined4 *)((longlong)param_34 + 100) = param_21._4_4_;
      *(undefined4 *)((longlong)param_34 + 0x68) = param_22._0_4_;
      *(undefined4 *)((longlong)param_34 + 0x6c) = param_22._4_4_;
      *(undefined4 *)((longlong)param_34 + 0x50) = param_19._0_4_;
      *(undefined4 *)((longlong)param_34 + 0x54) = param_19._4_4_;
      *(undefined4 *)((longlong)param_34 + 0x58) = param_20._0_4_;
      *(undefined4 *)((longlong)param_34 + 0x5c) = param_20._4_4_;
      *(byte **)((longlong)param_34 + 0x40) = param_17;
      *(byte **)((longlong)param_34 + 0x48) = param_18;
      if (*(char *)((longlong)param_34 + 0x80) != '\0') {
        if (*(char *)((longlong)param_34 + 0x80) != '\x01') {
                    /* WARNING: Subroutine does not return */
          pbStack_c0 = (byte *)0x14174046a;
          pdb_142dc8590(&UNK_14332bb00);
        }
                    /* WARNING: Subroutine does not return */
        pbStack_c0 = (byte *)0x14174045b;
        pdb_142dc8570(&UNK_14332bb00);
      }
      param_31 = *(ulonglong *)((longlong)param_34 + 0x40);
      param_32 = *(byte **)((longlong)param_34 + 0x48);
      pbVar36 = *(byte **)((longlong)param_34 + 0x50);
      param_9 = *(longlong *)((longlong)param_34 + 0x60);
      param_10 = *(longlong *)((longlong)param_34 + 0x68);
      param_11._0_4_ = *(undefined4 *)((longlong)param_34 + 0x70);
      param_11._4_4_ = *(undefined4 *)((longlong)param_34 + 0x74);
      param_12 = *(byte **)((longlong)param_34 + 0x78);
      pbStack_c0 = (byte *)0x14173ff09;
      pdb_141c2f360(&param_17,param_9 + 0x10,param_32,pbVar36);
      uVar48 = (undefined4)param_24;
      pbVar16 = param_23;
      pbVar15 = param_22;
      pbVar14 = param_21;
      pbVar34 = param_20;
      pbVar28 = param_19;
      pbVar25 = param_18;
      pbVar24 = param_17;
      lVar23 = param_10;
      auVar47[0] = -((char)param_17 == DAT_142f5c7c0);
      auVar47[1] = -(param_17._1_1_ == UNK_142f5c7c1);
      auVar47[2] = -(param_17._2_1_ == UNK_142f5c7c2);
      auVar47[3] = -(param_17._3_1_ == UNK_142f5c7c3);
      auVar47[4] = -(param_17._4_1_ == UNK_142f5c7c4);
      auVar47[5] = -(param_17._5_1_ == UNK_142f5c7c5);
      auVar47[6] = -(param_17._6_1_ == UNK_142f5c7c6);
      auVar47[7] = -(param_17._7_1_ == UNK_142f5c7c7);
      auVar47[8] = -((char)param_18 == UNK_142f5c7c8);
      auVar47[9] = -(param_18._1_1_ == UNK_142f5c7c9);
      auVar47[10] = -(param_18._2_1_ == UNK_142f5c7ca);
      auVar47[0xb] = -(param_18._3_1_ == UNK_142f5c7cb);
      auVar47[0xc] = -(param_18._4_1_ == UNK_142f5c7cc);
      auVar47[0xd] = -(param_18._5_1_ == UNK_142f5c7cd);
      auVar47[0xe] = -(param_18._6_1_ == UNK_142f5c7ce);
      auVar47[0xf] = -(param_18._7_1_ == UNK_142f5c7cf);
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
                  (ushort)(auVar47[0xf] >> 7) << 0xf) == 0xffff) {
        pbStack_c0 = (byte *)0x14173ff38;
        pdb_14098a860(&param_9);
        if (param_31 != 0) {
          pbStack_c0 = (byte *)0x14173ff57;
          pub_1406abac0(param_32,param_31,1);
        }
        *(undefined1 *)((longlong)param_34 + 0x80) = 1;
code_r0x000141740265:
        lVar23 = (longlong)param_34;
        pbStack_c0 = (byte *)0x141740271;
        param_17 = pbVar28;
        pdb_14007ee60();
        pbStack_c0 = (byte *)0x141740280;
        pbVar36 = pub_1406abab0(8,8);
        if (pbVar36 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
          pbStack_c0 = (byte *)0x141740363;
          pdb_142dc7e11(8,8);
        }
        *(byte **)pbVar36 = pbVar28;
        uVar39 = 1;
        puVar37 = &UNK_1430712c0;
      }
      else {
        param_8 = param_30;
        param_6 = param_28;
        param_7 = param_29;
        pbStackX_20 = param_26;
        param_5 = (byte *)param_27;
        pbStackX_18 = param_25;
        if (param_10 == 0) {
          uVar48 = (undefined4)CONCAT71((int7)((ulonglong)param_18 >> 8),1);
        }
        else {
          unaff_R15 = (byte *)(param_10 + 0x38);
          LOCK();
          bVar44 = *(char *)(param_10 + 0x38) == '\0';
          if (bVar44) {
            *(char *)(param_10 + 0x38) = '\x01';
          }
          UNLOCK();
          if (!bVar44) {
            param_36._0_7_ = CONCAT16(1,(undefined6)param_36);
            param_36 = CONCAT17(1,(uint7)param_36);
            pbStack_c0 = (byte *)0x1417403b0;
            pdb_142dc6be0(unaff_R15);
          }
          puVar13 = _DAT_143ca8f38;
          if ((*_DAT_143ca8f38 & 0x7fffffffffffffff) == 0) {
            uVar22 = 0;
            cVar19 = *(char *)(lVar23 + 0x39);
          }
          else {
            param_36._0_7_ = CONCAT16(1,(undefined6)param_36);
            param_36 = CONCAT17(1,(uint7)param_36);
            pbStack_c0 = (byte *)0x1417403c9;
            uVar22 = pdb_142dc79e0();
            uVar22 = uVar22 ^ 1;
            cVar19 = *(char *)(lVar23 + 0x39);
          }
          bVar20 = (byte)uVar22;
          if (cVar19 != '\0') {
code_r0x0001417403d8:
            param_18 = (byte *)CONCAT71(param_18._1_7_,bVar20);
            pbStack_98 = &UNK_14332bae8;
            pbVar36 = &UNK_14332b8d0;
            param_17 = unaff_R15;
            goto code_r0x00014174040b;
          }
          param_36._4_4_ = (undefined4)(param_36 >> 0x20);
          param_36 = CONCAT44(param_36._4_4_,uVar22);
          pbStack_c0 = (byte *)0x141740071;
          param_17 = pbVar24;
          param_18 = pbVar25;
          param_19 = pbVar28;
          param_20 = pbVar34;
          param_21 = pbVar14;
          param_22 = pbVar15;
          param_23 = pbVar16;
          param_24._0_4_ = uVar48;
          param_25 = pbStackX_18;
          param_26 = pbStackX_20;
          param_27 = param_5;
          param_28 = param_6;
          param_33 = unaff_R15;
          pdb_1417b89d0(lVar23 + 0x40,&param_17);
          if (((char)param_36 == '\0') && ((*puVar13 & 0x7fffffffffffffff) != 0)) {
            param_36._0_7_ = CONCAT16(1,(int6)param_36);
            param_36 = (ulonglong)(uint7)param_36;
            pbStack_c0 = (byte *)0x141740438;
            cVar19 = pdb_142dc79e0();
            if (cVar19 == '\0') {
              *(undefined1 *)(lVar23 + 0x39) = 1;
            }
          }
          uVar48 = 0;
          LOCK();
          cVar19 = *(char *)(lVar23 + 0x38);
          *(char *)(lVar23 + 0x38) = '\0';
          UNLOCK();
          if (cVar19 == '\x02') {
            param_36._0_7_ = CONCAT16(1,(int6)param_36);
            param_36 = (ulonglong)(uint7)param_36;
            pbStack_c0 = (byte *)0x1417400af;
            pdb_142dc6ca0();
            uVar48 = 0;
          }
        }
        param_36 = CONCAT44(param_36._4_4_,uVar48);
        pbStack_38 = param_32;
        param_13 = (byte *)0x0;
        param_14 = (byte *)0x1;
        param_15 = (byte *)0x0;
        param_19 = (byte *)0x60000020;
        param_17 = (byte *)&param_13;
        param_18 = &UNK_14332b508;
        pbStack_c0 = (byte *)0x141740122;
        cVar19 = pdb_140f58310(ppbVar42,&param_17);
        pbVar25 = param_15;
        pbVar24 = param_8;
        plVar27 = param_7;
        if (cVar19 != '\0') {
          pbStack_98 = &UNK_14332b5e0;
                    /* WARNING: Subroutine does not return */
          pbStack_c0 = (byte *)0x141740394;
          pdb_142dc8170(&UNK_14332b538,0x37,(longlong)&param_35 + 7,&UNK_14332b890);
        }
        param_33 = param_13;
        if (param_7 == (longlong *)0x0) {
          pbVar34 = (byte *)0x0;
          pbVar24 = pbVar36;
          pbVar28 = param_14;
        }
        else {
          param_17 = (byte *)param_7;
          param_18 = param_8;
          param_16 = param_14;
          if (param_8 == (byte *)0x0) {
            pbVar34 = (byte *)0x1;
          }
          else {
            pbStack_c0 = (byte *)0x141740173;
            pdb_14007ee60();
            pbStack_c0 = (byte *)0x141740180;
            pbVar34 = pub_1406abab0((ulonglong)pbVar24,1);
            if (pbVar34 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
              pbStack_c0 = (byte *)0x141740195;
              pdb_142dc7e11(1,pbVar24);
            }
          }
          pbStack_c0 = (byte *)0x1417401bf;
          pub_142e32760(pbVar34,plVar27 + 2,pbVar24);
          LOCK();
          *(longlong *)param_17 = *(longlong *)param_17 + -1;
          UNLOCK();
          if (*(longlong *)param_17 == 0) {
            pbStack_c0 = (byte *)0x1417401d8;
            pdb_1406ed6a0(&param_17);
          }
          pbVar28 = param_16;
        }
        if (((char)param_36 != '\0') && (pbStackX_18 != (byte *)0x0)) {
          pbStack_c0 = (byte *)0x141740201;
          pub_1406abac0(pbStackX_20,(ulonglong)pbStackX_18,1);
        }
        pbStack_c0 = (byte *)0x14174020e;
        pdb_14098a860(&param_9);
        pbVar36 = param_33;
        if (param_31 != 0) {
          pbStack_c0 = (byte *)0x141740234;
          pub_1406abac0(param_32,param_31,1);
        }
        lVar23 = (longlong)param_34;
        *(undefined1 *)((longlong)param_34 + 0x80) = 1;
        if (SBORROW8(0,(longlong)pbVar36)) goto code_r0x000141740265;
        if (pbVar36 == (byte *)0x8000000000000001) {
          param_1[0] = 2;
          param_1[1] = 0;
          param_1[2] = 0;
          param_1[3] = 0;
          param_1[4] = 0;
          param_1[5] = 0;
          param_1[6] = 0;
          param_1[7] = 0;
          uVar18 = 3;
          goto code_r0x0001417402a5;
        }
        param_17 = (byte *)0x1;
        param_18 = (byte *)0x1;
        param_19 = pbVar36;
        param_21 = pbVar25;
        pbStack_c0 = (byte *)0x141740301;
        param_20 = pbVar28;
        param_22 = pbVar34;
        param_23 = pbVar24;
        pdb_14007ee60();
        pbStack_c0 = (byte *)0x141740310;
        pbVar36 = pub_1406abab0(0x38,8);
        if (pbVar36 == (byte *)0x0) {
          pbVar36 = (byte *)0x8;
          goto code_r0x00014174041d;
        }
        *(byte **)(pbVar36 + 0x30) = param_23;
        *(byte **)(pbVar36 + 0x20) = param_21;
        *(byte **)(pbVar36 + 0x28) = param_22;
        *(byte **)(pbVar36 + 0x10) = param_19;
        *(byte **)(pbVar36 + 0x18) = param_20;
        *(byte **)pbVar36 = param_17;
        *(byte **)(pbVar36 + 8) = param_18;
        puVar37 = &UNK_14332ba38;
        uVar39 = 0;
      }
      *(undefined8 *)param_1 = uVar39;
      *(byte **)(param_1 + 8) = pbVar36;
      *(undefined **)(param_1 + 0x10) = puVar37;
      uVar18 = 1;
      param_34 = (byte *)lVar23;
code_r0x0001417402a5:
      *(undefined1 *)((longlong)param_34 + 0x88) = uVar18;
      return param_1;
    }
    uStack_68 = param_2 + 0x20;
    pbStack_c0 = (byte *)0x141737073;
    pbStack_60 = param_2;
    pdb_140b34f70(&pbStack_90,uStack_68,(longlong)&uStack_58 + 7);
    if (pbStack_90 == (byte *)0x2) {
      bVar20 = 3;
      uVar39 = 1;
    }
    else {
      if (*(byte **)(pbStack_60 + 0x28) != (byte *)0x0) {
        pbStack_c0 = (byte *)0x1417370ad;
        uStack_68 = *(byte **)(pbStack_60 + 0x28);
        pdb_140974580();
        pbStack_c0 = (byte *)0x1417370c2;
        pub_1406abac0(uStack_68,0x38,8);
      }
      pbVar24 = pbStack_80;
      pbVar36 = uStack_88;
      pbVar25 = pbStack_78;
      pbVar34 = uStack_70;
      if ((int)pbStack_90 == 1) {
        pbVar36 = *(byte **)(pbStack_60 + 0x10);
        pbVar24 = *(byte **)(pbStack_60 + 0x18);
        pbStack_c0 = (byte *)0x1417370d9;
        pdb_14007ee60();
        pbStack_c0 = (byte *)0x1417370e8;
        pbVar25 = pub_1406abab0(0x10,8);
        if (pbVar25 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
          pbStack_c0 = (byte *)0x14173715b;
          pdb_142dc7e11(8,0x10);
        }
        pbVar25[0] = 1;
        pbVar25[1] = 0;
        pbVar25[2] = 0;
        pbVar25[3] = 0;
        pbVar25[4] = 0;
        pbVar25[5] = 0;
        pbVar25[6] = 0;
        pbVar25[7] = 0;
        pbVar25[8] = 1;
        pbVar25[9] = 0;
        pbVar25[10] = 0;
        pbVar25[0xb] = 0;
        pbVar25[0xc] = 0;
        pbVar25[0xd] = 0;
        pbVar25[0xe] = 0;
        pbVar25[0xf] = 0;
        pbVar34 = &UNK_14332b300;
      }
      pbStack_c0 = (byte *)0x141737119;
      pdb_14097d110();
      *(byte **)(pbVar28 + 8) = pbVar36;
      *(byte **)(pbVar28 + 0x10) = pbVar24;
      *(byte **)(pbVar28 + 0x18) = pbVar25;
      *(byte **)(pbVar28 + 0x20) = pbVar34;
      bVar20 = 1;
      uVar39 = 0;
    }
    *(undefined8 *)pbVar28 = uVar39;
    pbStack_60[0x30] = bVar20;
code_r0x00014173714a:
    return pbVar28;
  case 9:
    goto code_r0x00014173714a;
  case 10:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0xc:
    *param_1 = *param_1;
    (&UNK_14332bd2b)[lVar23] = (&UNK_14332bd2b)[lVar23] + 'd';
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0xd:
    *pbVar24 = *pbVar24 + bVar20;
    goto code_r0x000141739e0c;
  case 0xe:
    uVar18 = SUB81(ppbVar42,0);
    pbVar24 = unaff_R13;
    goto code_r0x000141739e30;
  case 0xf:
    (&UNK_14332bced)[lVar23] = (&UNK_14332bced)[lVar23] + 'd';
    uVar32 = (ulonglong)pbVar24 & 0xffffffffffffff20;
    uVar39 = param_3;
code_r0x000141738b49:
    *(undefined8 *)(unaff_RBX + 0x150) = uVar39;
    *(byte **)(unaff_RBX + 0x158) = pbVar36;
    *(byte **)(unaff_RBX + 0x160) = param_2;
    *(undefined8 *)(unaff_RBX + 0x168) = param_3;
    unaff_RBX[0x170] = 2;
    unaff_RBX[0x171] = 0;
    unaff_RBX[0x172] = 0;
    unaff_RBX[0x173] = 0;
    unaff_RBX[0x174] = 0;
    unaff_RBX[0x175] = 0;
    unaff_RBX[0x176] = 0;
    unaff_RBX[0x177] = 0;
    *(byte **)(unaff_RBX + 0x280) = unaff_RBX + 0xc0;
    *(byte **)(unaff_RBX + 0x288) = unaff_RBX + 0x108;
    *(undefined **)(unaff_RBX + 0x290) = &UNK_14332b058;
    *(byte **)(unaff_RBX + 0x298) = unaff_RBX + 0x98;
    *(byte **)(unaff_RBX + 0x2a0) = unaff_RBX + 0x120;
    *(undefined **)(unaff_RBX + 0x2a8) = &UNK_14332b078;
    *(byte **)(unaff_RBX + 0x2b0) = unaff_RBX + 0x150;
    *(longlong *)(unaff_RBX + 0x2b8) = in_R11 + 0x10;
    *(undefined **)(unaff_RBX + 0x2c0) = &UNK_14332b098;
    *(byte **)(unaff_RBX + 0xf0) = unaff_RBX + 0x280;
    unaff_RBX[0xf8] = 3;
    unaff_RBX[0xf9] = 0;
    unaff_RBX[0xfa] = 0;
    unaff_RBX[0xfb] = 0;
    unaff_RBX[0xfc] = 0;
    unaff_RBX[0xfd] = 0;
    unaff_RBX[0xfe] = 0;
    unaff_RBX[0xff] = 0;
    *(ulonglong *)(unaff_RBX + 0x100) = uVar32 + 0x30;
    *(undefined8 *)(unaff_RBX + 0x1d0) = *(undefined8 *)(unaff_RBX + 0x608);
    *(undefined8 *)(unaff_RBX + 0x1c0) = *(undefined8 *)(unaff_RBX + 0x5f8);
    *(undefined8 *)(unaff_RBX + 0x1c8) = *(undefined8 *)(unaff_RBX + 0x600);
    pbStack_98 = unaff_RBX + 0xf0;
    pbStack_c0 = (byte *)0x141738c4e;
    pdb_140dd7f80(unaff_R14,unaff_R15,unaff_R12,unaff_RBX + 0x1c0);
code_r0x000141738c4f:
    in_R11 = *(longlong *)(unaff_RBX + 0x70);
    goto code_r0x000141738c53;
  case 0x10:
    pbVar28 = param_1;
    pbVar36 = unaff_R13;
    goto code_r0x000141737410;
  case 0x11:
    UNRECOVERED_JUMPTABLE = (code *)swi(3);
    pbVar36 = (byte *)(*UNRECOVERED_JUMPTABLE)();
    return pbVar36;
  case 0x12:
    param_14 = unaff_RBX;
    goto code_r0x00014173f460;
  case 0x13:
    goto code_r0x00014173f45e;
  case 0x14:
    goto code_r0x00014173f309;
  case 0x15:
    pbStack_c0 = pbVar24;
    pbVar36 = (byte *)pdb_1409737b0();
    return pbVar36;
  case 0x16:
    goto code_r0x00014173f6de;
  case 0x17:
    puVar1 = (uint *)(&UNK_14332bced + lVar23);
    uVar22 = *puVar1;
    *puVar1 = *puVar1 + 0x4332bd64;
    *(char *)(lVar23 + 0xcbba4565) =
         *(char *)(lVar23 + 0xcbba4565) + (char)unaff_R14 + (0xbccd429b < uVar22);
    *pbVar24 = *pbVar24 + bVar20;
    goto code_r0x00014173f6de;
  case 0x18:
    goto code_r0x00014173f5c7;
  case 0x19:
    *pbVar24 = *pbVar24;
    (&UNK_14332bcef)[lVar23] = (&UNK_14332bcef)[lVar23] + 'd';
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x1a:
    goto code_r0x00014173f97f;
  case 0x1b:
    *unaff_RDI = *unaff_RDI + 100;
    unaff_RBP = unaff_RBX;
    pbVar28 = param_1;
    goto code_r0x00014173f978;
  case 0x1c:
                    /* WARNING: Could not emulate address calculation at 0x00014173f869 */
                    /* WARNING: Treating indirect jump as call */
    pbVar36 = (byte *)(*(code *)((longlong)*(int *)((longlong)pbVar24 * 4 + 0x4332bdc8) + 0x4332bdc8
                                ))();
    return pbVar36;
  case 0x1d:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x1e:
    in_stack_00000218 = unaff_RBX;
    pbVar28 = param_1;
    break;
  case 0x1f:
    pbVar24 = (byte *)((ulonglong)ppbVar42 & 0xffffffff);
    *(byte **)pbVar24 = pbVar24 + *(longlong *)pbVar24;
    UNK_14332bd1c = UNK_14332bd1c + (char)pbVar24;
    *pbVar24 = *pbVar24 + (char)pbVar24;
    in_stack_00000218 = unaff_RBX;
    pbVar28 = param_1;
    break;
  case 0x20:
    uVar32 = (ulonglong)*(int *)(&UNK_14332bdd8 + (ulonglong)param_2[0x1d8] * 4);
    pbVar24 = &UNK_14332bdd8 + uVar32;
    in_stack_00000218 = param_2;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(param_2[0x1d8]) {
    case 0:
      unaff_RDI = (byte *)&param_5;
      pbVar28 = param_1;
      break;
    case 1:
                    /* WARNING: Subroutine does not return */
      pbStack_c0 = (byte *)0x14173fce2;
      pdb_142dc8570(&UNK_14332ba20);
    case 2:
                    /* WARNING: Subroutine does not return */
      pbStack_c0 = (byte *)0x14173fcd6;
      pdb_142dc8590(&UNK_14332ba20);
    case 3:
      pbVar24 = (byte *)(ulonglong)unaff_RBX[0x1d0];
      pbVar36 = unaff_RBX + 0xe8;
      pbVar28 = param_1;
      goto code_r0x00014173fb76;
    case 4:
      param_34 = param_2;
                    /* WARNING: Could not emulate address calculation at 0x00014173fe07 */
                    /* WARNING: Treating indirect jump as call */
      pbVar36 = (byte *)(*(code *)(&UNK_14332bdd8 + *(int *)(&UNK_14332bdd8 + (longlong)pbVar24 * 4)
                                  ))();
      return pbVar36;
    case 5:
      *(int *)(uVar32 + 0xd07ac8e7) = *(int *)(uVar32 + 0xd07ac8e7) + (int)param_2;
      pbVar24 = (byte *)(ulonglong)((uint)pbVar24 | 0x1beb5ac);
    case 6:
      piVar2 = (int *)((ulonglong)(((uint)pbVar24 | 0x9b0d8d48) + (int)ppbVar42) + 1);
      *piVar2 = *piVar2 + -0x480b0f90;
                    /* WARNING: Subroutine does not return */
      pbStack_c0 = (byte *)0x141740479;
      pdb_142dc8590(0x4332ba20);
    case 7:
      *(uint *)(param_2 + 0x70) =
           *(int *)(param_2 + 0x70) + (int)unaff_RBX + (uint)(0xfffffffebccd4227 < uVar32);
      goto code_r0x00014173fe2a;
    }
    goto code_r0x00014173fb16;
  case 0x21:
    unaff_RBX[0x5f] = unaff_RBX[0x5f] - (byte)unaff_RBX;
    return pbVar24;
  case 0x22:
    puVar35 = (undefined1 *)CONCAT62((int6)((ulonglong)pbVar24 >> 0x10),CONCAT11(0xbe,bVar20));
    *puVar35 = *puVar35;
    param_2[0x2b] = param_2[0x2b] + cVar19;
    goto code_r0x00014174040b;
  case 0x23:
    *(int *)(&UNK_14332bced + lVar23) = *(int *)(&UNK_14332bced + lVar23) + 0x4332bd64;
    bVar20 = bVar20 & 0x20;
    goto code_r0x0001417403d8;
  case 0x24:
    goto code_r0x00014173fe2a;
  }
code_r0x00014173fc61:
  pbStack_c0 = (byte *)0x14173fc69;
  pub_142e32760(pbVar24);
  pbVar28[0] = 0;
  pbVar28[1] = 0;
  pbVar28[2] = 0;
  pbVar28[3] = 0;
  pbVar28[4] = 0;
  pbVar28[5] = 0;
  pbVar28[6] = 0;
  pbVar28[7] = 0;
  *(byte **)(pbVar28 + 8) = unaff_RDI;
  *(undefined **)(pbVar28 + 0x10) = &UNK_14332bab8;
  pcVar33 = (char *)0x1;
  unaff_RBX = in_stack_00000218;
code_r0x00014173fc81:
  unaff_RBX[0x1d8] = (byte)pcVar33;
  return pbVar28;
code_r0x00014173f6de:
  (&UNK_14332bced)[lVar23] = (&UNK_14332bced)[lVar23] + 'd';
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

