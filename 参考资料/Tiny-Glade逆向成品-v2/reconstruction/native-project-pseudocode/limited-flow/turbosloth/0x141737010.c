// VA 0x141737010, PDB extent 632 bytes
// turbosloth::asset::impl$44::build::async_block$3<clutter_pack_pipe::ClutterIconImage,turbosloth::asset::BuildContext>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/turbosloth/src/asset.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Instruction at (ram,0x000141740409) overlaps instruction at (ram,0x000141740406)
    */
/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   turbosloth::asset::impl$44::build::async_block$3<clutter_pack_pipe::ClutterIconImage,turbosloth::asset::BuildContext>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/turbosloth/src/asset.rs
   Extent: 632 */

byte * pdb_141737010(byte *param_1,undefined8 *param_2,int param_3,undefined8 param_4)

{
  int *piVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong *plVar5;
  code *pcVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  ulonglong *puVar17;
  undefined1 *puVar18;
  byte bVar19;
  undefined1 uVar20;
  byte bVar21;
  char cVar22;
  uint uVar24;
  ulonglong uVar25;
  byte *pbVar26;
  undefined1 (*pauVar27) [16];
  longlong *plVar28;
  longlong lVar29;
  undefined8 uVar30;
  longlong lVar31;
  longlong lVar32;
  byte *pbVar33;
  ulonglong uVar34;
  longlong lVar35;
  char *pcVar36;
  ulonglong uVar37;
  undefined *puVar38;
  undefined1 (*arg1) [16];
  undefined1 (*pauVar39) [16];
  undefined8 uVar40;
  longlong unaff_RBX;
  byte **ppbVar41;
  undefined1 *puVar42;
  undefined1 *puVar43;
  undefined1 *puVar44;
  longlong unaff_RBP;
  undefined8 *puVar45;
  byte *unaff_RDI;
  longlong in_R11;
  longlong unaff_R12;
  byte *unaff_R13;
  int *unaff_R14;
  longlong unaff_R15;
  bool bVar46;
  bool bVar47;
  undefined8 in_XMM0_Qa;
  undefined8 in_XMM0_Qb;
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined4 uVar51;
  undefined8 in_XMM1_Qa;
  undefined4 uVar52;
  undefined4 in_XMM1_Dc;
  undefined4 in_XMM1_Dd;
  undefined8 in_XMM2_Qa;
  undefined4 in_XMM2_Dc;
  undefined4 in_XMM2_Dd;
  undefined4 in_XMM3_Dc;
  undefined4 in_XMM3_Dd;
  undefined8 in_XMM4_Qa;
  undefined8 in_XMM4_Qb;
  undefined8 uStackX_18;
  undefined8 uStackX_20;
  longlong in_stack_00000070;
  byte *pbStack_c0;
  undefined1 auStack_b8 [32];
  undefined *puStack_98;
  longlong lStack_90;
  undefined8 uStack_88;
  undefined1 uStack_80;
  undefined7 uStack_7f;
  byte *pbStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 *puStack_60;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined8 uStack_50;
  undefined8 uStack_48;
  longlong lStack_40;
  undefined8 uStack_38;
  int iVar23;
  
  uVar52 = (undefined4)((ulonglong)in_XMM1_Qa >> 0x20);
  uVar51 = (undefined4)in_XMM1_Qa;
  puVar44 = auStack_b8;
  ppbVar41 = (byte **)auStack_b8;
  puVar43 = auStack_b8;
  puVar42 = auStack_b8;
  puVar45 = &uStack_38;
  uStack_50 = 0xfffffffffffffffe;
  bVar21 = *(byte *)(param_2 + 6);
  puVar38 = &UNK_14332bd84;
  uVar25 = (ulonglong)*(int *)(&UNK_14332bd84 + (ulonglong)bVar21 * 4);
  bVar46 = 0xfffffffebccd427b < uVar25;
  pbVar26 = &UNK_14332bd84 + uVar25;
  bVar47 = pbVar26 == (byte *)0x0;
  bVar19 = (byte)pbVar26;
  iVar23 = (int)pbVar26;
  puVar18 = auStack_b8;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(bVar21) {
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
  case 3:
    goto code_r0x00014173705a;
  case 4:
code_r0x0001417372e3:
    unaff_RDI = (byte *)0xc801488104634801;
    *(undefined8 **)(unaff_RBX + 0x70) = param_2;
    puVar18 = auStack_b8;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(bVar21) {
    case 1:
      goto code_r0x00014173716a;
    case 2:
      goto code_r0x00014173715e;
    case 3:
      goto code_r0x00014173705a;
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
  case 0:
    param_2[4] = param_2;
    param_2[5] = 0;
code_r0x00014173705a:
    uStack_68 = (byte *)(param_2 + 4);
    pbStack_c0 = (byte *)0x141737073;
    puStack_60 = param_2;
    pdb_140b34f70(&lStack_90,uStack_68,(longlong)&uStack_54 + 3);
    if (lStack_90 == 2) {
      uVar20 = 3;
      uVar40 = 1;
    }
    else {
      uVar40 = CONCAT71(uStack_7f,uStack_80);
      if ((byte *)puStack_60[5] != (byte *)0x0) {
        pbStack_c0 = (byte *)0x1417370ad;
        uStack_68 = (byte *)puStack_60[5];
        pdb_140974580();
        pbStack_c0 = (byte *)0x1417370c2;
        pub_1406abac0(uStack_68,0x38,8);
      }
      uVar30 = uStack_88;
      pbVar26 = pbStack_78;
      puVar38 = puStack_70;
      if ((int)lStack_90 == 1) {
        uVar30 = puStack_60[2];
        uVar40 = puStack_60[3];
        pbStack_c0 = (byte *)0x1417370d9;
        pdb_14007ee60();
        pbStack_c0 = (byte *)0x1417370e8;
        pbVar26 = pub_1406abab0(0x10,8);
        if (pbVar26 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
          pbStack_c0 = (byte *)0x14173715b;
          pdb_142dc7e11(8,0x10);
        }
        pbVar26[0] = 1;
        pbVar26[1] = 0;
        pbVar26[2] = 0;
        pbVar26[3] = 0;
        pbVar26[4] = 0;
        pbVar26[5] = 0;
        pbVar26[6] = 0;
        pbVar26[7] = 0;
        pbVar26[8] = 1;
        pbVar26[9] = 0;
        pbVar26[10] = 0;
        pbVar26[0xb] = 0;
        pbVar26[0xc] = 0;
        pbVar26[0xd] = 0;
        pbVar26[0xe] = 0;
        pbVar26[0xf] = 0;
        puVar38 = &UNK_14332b300;
      }
      pbStack_c0 = (byte *)0x141737119;
      pdb_14097d110();
      *(undefined8 *)(param_1 + 8) = uVar30;
      *(undefined8 *)(param_1 + 0x10) = uVar40;
      *(byte **)(param_1 + 0x18) = pbVar26;
      *(undefined **)(param_1 + 0x20) = puVar38;
      uVar20 = 1;
      uVar40 = 0;
    }
    *(undefined8 *)param_1 = uVar40;
    *(undefined1 *)(puStack_60 + 6) = uVar20;
    return param_1;
  case 5:
code_r0x000141739e4c:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 6:
    goto code_r0x000141739e58;
  case 7:
code_r0x000141738c53:
    pbVar26 = unaff_R13;
    *(longlong *)(in_R11 + 0x60) = in_R11 + 0x50;
    *(undefined8 *)(in_R11 + 0x68) = 0;
    *(longlong *)(unaff_RBX + 0x80) = in_R11 + 0x60;
    pbStack_c0 = (byte *)0x141738c84;
    pdb_140b35bb0(unaff_RBX + 0x280,in_R11 + 0x60,unaff_RBX + 0x1bf,unaff_RDI);
    lVar35 = *(longlong *)(unaff_RBX + 0x280);
    if (lVar35 == 2) {
      pbVar26[0] = 1;
      pbVar26[1] = 0;
      pbVar26[2] = 0;
      pbVar26[3] = 0;
      pbVar26[4] = 0;
      pbVar26[5] = 0;
      pbVar26[6] = 0;
      pbVar26[7] = 0;
      uVar20 = 3;
    }
    else {
      lVar31 = *(longlong *)(unaff_RBX + 0x288);
      uVar40 = *(undefined8 *)(unaff_RBX + 0x290);
      uVar30 = *(undefined8 *)(unaff_RBX + 0x298);
      uVar3 = *(undefined8 *)(unaff_RBX + 0x2a0);
      lVar32 = *(longlong *)(unaff_RBX + 0x70);
      if (*(longlong *)(lVar32 + 0x68) != 0) {
        *(longlong *)(unaff_RBX + 0x80) = *(longlong *)(lVar32 + 0x68);
        pbStack_c0 = (byte *)0x141738ccf;
        pdb_140974580();
        pbStack_c0 = (byte *)0x141738ce7;
        pub_1406abac0(*(byte **)(unaff_RBX + 0x80),0x38,8);
        lVar32 = *(longlong *)(unaff_RBX + 0x70);
      }
      if ((int)lVar35 == 1) {
        uVar40 = *(undefined8 *)(lVar32 + 0x10);
        uVar30 = *(undefined8 *)(lVar32 + 0x18);
        pbStack_c0 = (byte *)0x141738cfd;
        pdb_14007ee60();
        pbStack_c0 = (byte *)0x141738d0c;
        pbVar33 = pub_1406abab0(0x10,8);
        if (pbVar33 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
          pbStack_c0 = (byte *)0x141738e29;
          pdb_142dc7e11(8,0x10);
        }
        pbVar33[0] = 1;
        pbVar33[1] = 0;
        pbVar33[2] = 0;
        pbVar33[3] = 0;
        pbVar33[4] = 0;
        pbVar33[5] = 0;
        pbVar33[6] = 0;
        pbVar33[7] = 0;
        pbVar33[8] = 1;
        pbVar33[9] = 0;
        pbVar33[10] = 0;
        pbVar33[0xb] = 0;
        pbVar33[0xc] = 0;
        pbVar33[0xd] = 0;
        pbVar33[0xe] = 0;
        pbVar33[0xf] = 0;
        *(undefined8 *)(unaff_RBX + 0x260) = uVar40;
        *(undefined8 *)(unaff_RBX + 0x268) = uVar30;
        *(byte **)(unaff_RBX + 0x270) = pbVar33;
        *(undefined **)(unaff_RBX + 0x278) = &UNK_14332b300;
      }
      else {
        *(longlong *)(unaff_RBX + 0x150) = lVar31;
        *(undefined8 *)(unaff_RBX + 0x158) = uVar40;
        *(undefined8 *)(unaff_RBX + 0x160) = uVar30;
        *(undefined8 *)(unaff_RBX + 0x168) = uVar3;
        uVar40 = _UNK_14332b500;
        if (lVar31 == 0) {
          puStack_98 = (undefined *)(unaff_RBX + 0x158);
          lVar35 = *(longlong *)(*(longlong *)(unaff_RBX + 0x70) + 0x40);
          *(undefined8 *)(unaff_RBX + 0x280) = _DAT_14332b4f8;
          *(undefined8 *)(unaff_RBX + 0x288) = uVar40;
          lVar31 = *(longlong *)(*(longlong *)(unaff_RBX + 0x70) + 0x38);
          uVar40 = *(undefined8 *)(lVar31 + 0x20);
          uVar30 = *(undefined8 *)(lVar31 + 0x28);
          *(undefined1 *)(unaff_RBX + 0x97) = 1;
          pbStack_c0 = (byte *)0x141738dad;
          pdb_141c2b710(lVar35 + 0x10,unaff_RBX + 0x280,uVar40,uVar30);
        }
        *(undefined8 *)(unaff_RBX + 0x290) = *(undefined8 *)(unaff_RBX + 0x160);
        *(undefined8 *)(unaff_RBX + 0x298) = *(undefined8 *)(unaff_RBX + 0x168);
        *(undefined8 *)(unaff_RBX + 0x280) = *(undefined8 *)(unaff_RBX + 0x150);
        *(undefined8 *)(unaff_RBX + 0x288) = *(undefined8 *)(unaff_RBX + 0x158);
        *(undefined1 *)(unaff_RBX + 0x97) = 0;
        pbStack_c0 = (byte *)0x141738df4;
        pdb_14173b990(unaff_RBX + 0x260,unaff_RBX + 0x280);
        lVar32 = *(longlong *)(unaff_RBX + 0x70);
      }
      pbStack_c0 = (byte *)0x141738e02;
      pdb_140981490(lVar32 + 0x50);
      plVar5 = *(longlong **)(*(longlong *)(unaff_RBX + 0x70) + 0x38);
      LOCK();
      *plVar5 = *plVar5 + -1;
      lVar35 = *plVar5;
      UNLOCK();
joined_r0x00014173913d:
      if (lVar35 == 0) {
        pbStack_c0 = (byte *)0x14173914c;
        pdb_140dd76c0(*(longlong *)(unaff_RBX + 0x70) + 0x38);
      }
      plVar5 = *(longlong **)(*(longlong *)(unaff_RBX + 0x70) + 0x40);
      LOCK();
      *plVar5 = *plVar5 + -1;
      UNLOCK();
      if (*plVar5 == 0) {
        pbStack_c0 = (byte *)0x141739168;
        pdb_140dd78e0(*(longlong *)(unaff_RBX + 0x70) + 0x40);
      }
      plVar5 = (longlong *)**(undefined8 **)(unaff_RBX + 0x70);
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        *plVar5 = *plVar5 + -1;
        UNLOCK();
        if (*plVar5 == 0) {
          pbStack_c0 = (byte *)0x14173918c;
          pdb_140c7a240(*(undefined8 *)(unaff_RBX + 0x70));
        }
      }
code_r0x000141739e0c:
      uVar40 = *(undefined8 *)(unaff_RBX + 0x260);
      uVar30 = *(undefined8 *)(unaff_RBX + 0x268);
      uVar3 = *(undefined8 *)(unaff_RBX + 0x278);
      *(undefined8 *)(pbVar26 + 0x18) = *(undefined8 *)(unaff_RBX + 0x270);
      *(undefined8 *)(pbVar26 + 0x20) = uVar3;
      *(undefined8 *)(pbVar26 + 8) = uVar40;
      *(undefined8 *)(pbVar26 + 0x10) = uVar30;
      pbVar26[0] = 0;
      pbVar26[1] = 0;
      pbVar26[2] = 0;
      pbVar26[3] = 0;
      pbVar26[4] = 0;
      pbVar26[5] = 0;
      pbVar26[6] = 0;
      pbVar26[7] = 0;
      uVar20 = 1;
    }
code_r0x000141739e30:
    *(undefined1 *)(*(longlong *)(unaff_RBX + 0x70) + 0x4a) = uVar20;
code_r0x000141739e58:
    return pbVar26;
  case 8:
code_r0x000141737427:
    pbVar26 = (byte *)(ulonglong)(uint)uStack_38;
    do {
      pbStack_c0 = (byte *)0x141737435;
      pub_1406abac0(pbVar26,(ulonglong)param_2,1);
      pbVar26 = unaff_R13;
      do {
        unaff_R13 = pbVar26 + 0x60;
        unaff_RDI = unaff_RDI + -1;
        if (unaff_RDI == (byte *)0x0) {
          lVar35 = *(longlong *)(unaff_R12 + 0x40);
          if (lVar35 != 0) {
            pbStack_c0 = (byte *)0x141737c5b;
            pub_1406abac0(*(byte **)(unaff_RBX + 0x88),lVar35 * 0x60,0x10);
          }
          *(undefined8 *)(unaff_R12 + 0x50) = *(undefined8 *)(unaff_RBX + 0x678);
          uVar40 = *(undefined8 *)(unaff_RBX + 0x670);
          *(longlong *)(unaff_R12 + 0x40) = *(longlong *)(unaff_RBX + 0x668);
          *(undefined8 *)(unaff_R12 + 0x48) = uVar40;
          puVar17 = _DAT_143ca8f38;
          lVar35 = *(longlong *)(unaff_RBX + 0x70);
          pbVar26 = *(byte **)(unaff_RBX + 0x80);
          uVar40 = *(undefined8 *)(unaff_RBX + 0x158);
          *(undefined8 *)(lVar35 + 0x28) = *(undefined8 *)(unaff_RBX + 0x150);
          *(undefined8 *)(lVar35 + 0x30) = uVar40;
          *(undefined8 *)(lVar35 + 0x20) = 0;
          if (((char)unaff_R15 == '\0') && ((*puVar17 & 0x7fffffffffffffff) != 0)) {
            pbStack_c0 = (byte *)0x141738960;
            cVar22 = pdb_142dc79e0();
            if (cVar22 == '\0') {
              *(undefined1 *)(unaff_R12 + 0x38) = 1;
            }
          }
          LOCK();
          iVar23 = *unaff_R14;
          *unaff_R14 = *unaff_R14 + -0x3fffffff;
          UNLOCK();
          uVar25 = (ulonglong)(iVar23 + 0xc0000001U);
          if (0x3fffffff < iVar23 + 0xc0000001U) {
            pbStack_c0 = (byte *)0x1417387de;
            pdb_142dc6fa0();
          }
          in_R11 = *(longlong *)(unaff_RBX + 0x70);
          if (*(longlong *)(in_R11 + 0x20) == 0) {
            uVar40 = *(undefined8 *)(in_R11 + 0x30);
            *(undefined8 *)(unaff_RBX + 0x120) = *(undefined8 *)(in_R11 + 0x28);
            *(undefined8 *)(unaff_RBX + 0x128) = uVar40;
            plVar5 = plRam0000000143cad8b0;
            if (*_DAT_143ca4b08 < 2) {
              bVar21 = *(byte *)(plRam0000000143cad8b0 + 2);
              uVar25 = (ulonglong)bVar21;
              if (2 < bVar21) {
                *(undefined1 *)(unaff_RBX + 0x6b) = 1;
                pbStack_c0 = (byte *)0x141738e3f;
                uVar24 = pdb_142db8070(plRam0000000143cad8b0);
                uVar25 = (ulonglong)uVar24;
                in_R11 = *(longlong *)(unaff_RBX + 0x70);
                if ((char)uVar24 != '\0') goto code_r0x00014173820d;
                goto code_r0x000141738e4e;
              }
              if (bVar21 == 0) goto code_r0x000141738e4e;
code_r0x00014173820d:
              lVar35 = *plVar5;
              *(undefined1 *)(unaff_RBX + 0x6b) = 1;
              pbStack_c0 = (byte *)0x141738219;
              cVar22 = pdb_140dd7f60(lVar35);
              in_R11 = *(longlong *)(unaff_RBX + 0x70);
              if (cVar22 == '\0') goto code_r0x000141738e4e;
              lVar35 = *plVar5;
              uVar25 = *(ulonglong *)(lVar35 + 0x38);
              if (uVar25 == 0) {
                *(undefined1 *)(unaff_RBX + 0x6b) = 1;
                pbStack_c0 = (byte *)0x141739eaf;
                pdb_142dc8110(&UNK_14332aff8,0x22,&UNK_14332b020);
                goto code_r0x00014173a218;
              }
              uVar40 = *(undefined8 *)(lVar35 + 0x30);
              uVar30 = *(undefined8 *)(lVar35 + 0x40);
              uVar3 = *(undefined8 *)(lVar35 + 0x48);
              *(undefined8 *)(unaff_RBX + 0xc0) = uVar40;
              *(ulonglong *)(unaff_RBX + 200) = uVar25;
              *(undefined8 *)(unaff_RBX + 0xd0) = uVar30;
              *(undefined8 *)(unaff_RBX + 0xd8) = uVar3;
              *(undefined8 *)(unaff_RBX + 0xe0) = 0;
              *(undefined **)(unaff_RBX + 0xf0) = &UNK_14332b038;
              *(undefined8 *)(unaff_RBX + 0xf8) = 0x33;
              if (uVar25 == 1) {
                *(undefined1 *)(unaff_RBX + 0x6b) = 1;
                pbStack_c0 = (byte *)0x141739eef;
                pdb_142dc8110(&UNK_14332aff8,0x22,&UNK_14332b020);
                goto code_r0x00014173a218;
              }
              *(undefined8 *)(unaff_RBX + 0x98) = uVar40;
              *(ulonglong *)(unaff_RBX + 0xa0) = uVar25;
              *(undefined8 *)(unaff_RBX + 0xa8) = uVar30;
              *(undefined8 *)(unaff_RBX + 0xb0) = uVar3;
              *(undefined8 *)(unaff_RBX + 0xb8) = 1;
              *(longlong *)(unaff_RBX + 0x108) = *(longlong *)(in_R11 + 0x38) + 0x20;
              if (uVar25 < 3) {
                *(undefined1 *)(unaff_RBX + 0x6b) = 1;
                pbStack_c0 = (byte *)0x141739f2f;
                pdb_142dc8110(&UNK_14332aff8,0x22,&UNK_14332b020);
                goto code_r0x00014173a218;
              }
              *(undefined8 *)(unaff_RBX + 0x150) = uVar40;
              *(ulonglong *)(unaff_RBX + 0x158) = uVar25;
              *(undefined8 *)(unaff_RBX + 0x160) = uVar30;
              *(undefined8 *)(unaff_RBX + 0x168) = uVar3;
              *(undefined8 *)(unaff_RBX + 0x170) = 2;
              *(longlong *)(unaff_RBX + 0x280) = unaff_RBX + 0xc0;
              *(longlong *)(unaff_RBX + 0x288) = unaff_RBX + 0xf0;
              *(undefined **)(unaff_RBX + 0x290) = &UNK_14332b058;
              *(longlong *)(unaff_RBX + 0x298) = unaff_RBX + 0x98;
              *(longlong *)(unaff_RBX + 0x2a0) = unaff_RBX + 0x108;
              *(undefined **)(unaff_RBX + 0x2a8) = &UNK_14332b078;
              *(longlong *)(unaff_RBX + 0x2b0) = unaff_RBX + 0x150;
              *(longlong *)(unaff_RBX + 0x2b8) = in_R11 + 0x10;
              *(undefined **)(unaff_RBX + 0x2c0) = &UNK_14332b098;
              *(longlong *)(unaff_RBX + 0x1c0) = unaff_RBX + 0x280;
              *(undefined8 *)(unaff_RBX + 0x1c8) = 3;
              *(longlong *)(unaff_RBX + 0x1d0) = lVar35 + 0x30;
              *(undefined1 *)(unaff_RBX + 0x6b) = 1;
              pbStack_c0 = (byte *)0x1417383a2;
              pdb_14173b620(unaff_RBX + 0x1c0);
code_r0x000141739077:
              in_R11 = *(longlong *)(unaff_RBX + 0x70);
            }
            else {
code_r0x000141738e4e:
              plVar5 = plRam0000000143cad8b0;
              if ((*_DAT_143ca4ab0 == '\0') && (3 < *_DAT_143ca8e90)) {
                lVar35 = *plRam0000000143cad8b0;
                uVar40 = *(undefined8 *)(lVar35 + 0x20);
                uVar30 = *(undefined8 *)(lVar35 + 0x28);
                *(undefined8 *)(unaff_RBX + 0x5e0) = 4;
                *(undefined8 *)(unaff_RBX + 0x5e8) = uVar40;
                *(undefined8 *)(unaff_RBX + 0x5f0) = uVar30;
                *(undefined1 *)(unaff_RBX + 0x6b) = 1;
                pbStack_c0 = (byte *)0x141738e9f;
                uVar40 = pdb_140f33290();
                pcVar6 = *(code **)(uVar25 + 0x18);
                *(undefined1 *)(unaff_RBX + 0x6b) = 1;
                pbStack_c0 = (byte *)0x141738eba;
                cVar22 = (*pcVar6)(uVar40,unaff_RBX + 0x5e0);
                in_R11 = *(longlong *)(unaff_RBX + 0x70);
                if (cVar22 != '\0') {
                  lVar31 = *plVar5;
                  uVar37 = *(ulonglong *)(lVar31 + 0x38);
                  if (uVar37 == 0) {
                    *(undefined1 *)(unaff_RBX + 0x6b) = 1;
                    pbStack_c0 = (byte *)0x141739fd5;
                    pdb_142dc8110(&UNK_14332aff8,0x22,&UNK_14332b020);
code_r0x00014173a218:
                    /* WARNING: Does not return */
                    pcVar6 = (code *)invalidInstructionException();
                    (*pcVar6)();
                  }
                  uVar30 = *(undefined8 *)(lVar31 + 0x30);
                  uVar3 = *(undefined8 *)(lVar31 + 0x40);
                  uVar4 = *(undefined8 *)(lVar31 + 0x48);
                  *(undefined8 *)(unaff_RBX + 0xc0) = uVar30;
                  *(ulonglong *)(unaff_RBX + 200) = uVar37;
                  *(undefined8 *)(unaff_RBX + 0xd0) = uVar3;
                  *(undefined8 *)(unaff_RBX + 0xd8) = uVar4;
                  *(undefined8 *)(unaff_RBX + 0xe0) = 0;
                  *(undefined **)(unaff_RBX + 0x108) = &UNK_14332b038;
                  *(undefined8 *)(unaff_RBX + 0x110) = 0x33;
                  if (uVar37 == 1) {
                    *(undefined1 *)(unaff_RBX + 0x6b) = 1;
                    pbStack_c0 = (byte *)0x14173a015;
                    pdb_142dc8110(&UNK_14332aff8,0x22,&UNK_14332b020);
                    goto code_r0x00014173a218;
                  }
                  *(undefined8 *)(unaff_RBX + 0x98) = uVar30;
                  *(ulonglong *)(unaff_RBX + 0xa0) = uVar37;
                  *(undefined8 *)(unaff_RBX + 0xa8) = uVar3;
                  *(undefined8 *)(unaff_RBX + 0xb0) = uVar4;
                  *(undefined8 *)(unaff_RBX + 0xb8) = 1;
                  *(longlong *)(unaff_RBX + 0x230) = *(longlong *)(in_R11 + 0x38) + 0x20;
                  if (uVar37 < 3) {
                    *(undefined1 *)(unaff_RBX + 0x6b) = 1;
                    pbStack_c0 = (byte *)0x14173a055;
                    pdb_142dc8110(&UNK_14332aff8,0x22,&UNK_14332b020);
                    goto code_r0x00014173a218;
                  }
                  *(undefined8 *)(unaff_RBX + 0x150) = uVar30;
                  *(ulonglong *)(unaff_RBX + 0x158) = uVar37;
                  *(undefined8 *)(unaff_RBX + 0x160) = uVar3;
                  *(undefined8 *)(unaff_RBX + 0x168) = uVar4;
                  *(undefined8 *)(unaff_RBX + 0x170) = 2;
                  *(longlong *)(unaff_RBX + 0x280) = unaff_RBX + 0xc0;
                  *(longlong *)(unaff_RBX + 0x288) = unaff_RBX + 0x108;
                  *(undefined **)(unaff_RBX + 0x290) = &UNK_14332b058;
                  *(longlong *)(unaff_RBX + 0x298) = unaff_RBX + 0x98;
                  *(longlong *)(unaff_RBX + 0x2a0) = unaff_RBX + 0x230;
                  *(undefined **)(unaff_RBX + 0x2a8) = &UNK_14332b078;
                  *(longlong *)(unaff_RBX + 0x2b0) = unaff_RBX + 0x150;
                  *(longlong *)(unaff_RBX + 0x2b8) = in_R11 + 0x10;
                  *(undefined **)(unaff_RBX + 0x2c0) = &UNK_14332b098;
                  *(longlong *)(unaff_RBX + 0xf0) = unaff_RBX + 0x280;
                  *(undefined8 *)(unaff_RBX + 0xf8) = 3;
                  *(longlong *)(unaff_RBX + 0x100) = lVar31 + 0x30;
                  *(undefined8 *)(unaff_RBX + 0x1d0) = *(undefined8 *)(unaff_RBX + 0x5f0);
                  *(undefined8 *)(unaff_RBX + 0x1c0) = *(undefined8 *)(unaff_RBX + 0x5e0);
                  *(undefined8 *)(unaff_RBX + 0x1c8) = *(undefined8 *)(unaff_RBX + 0x5e8);
                  *(undefined1 *)(unaff_RBX + 0x6b) = 1;
                  puStack_98 = (undefined *)(unaff_RBX + 0xf0);
                  pbStack_c0 = (byte *)0x141739076;
                  pdb_140dd7f80(lVar35,uVar40,uVar25,unaff_RBX + 0x1c0);
                  goto code_r0x000141739077;
                }
              }
            }
            uVar40 = _UNK_14332b500;
            lVar35 = *(longlong *)(in_R11 + 0x40);
            *(undefined8 *)(unaff_RBX + 0x280) = _DAT_14332b4f8;
            *(undefined8 *)(unaff_RBX + 0x288) = uVar40;
            uVar40 = *(undefined8 *)(*(longlong *)(in_R11 + 0x38) + 0x20);
            uVar30 = *(undefined8 *)(*(longlong *)(in_R11 + 0x38) + 0x28);
            *(undefined1 *)(unaff_RBX + 0x6b) = 1;
            puStack_98 = (undefined *)(unaff_RBX + 0x120);
            pbStack_c0 = (byte *)0x1417390bb;
            pdb_141c2b710(lVar35 + 0x10,unaff_RBX + 0x280,uVar40,uVar30);
            lVar35 = *(longlong *)(unaff_RBX + 0x120);
            lVar31 = *(longlong *)(unaff_RBX + 0x128);
            *(longlong *)(unaff_RBX + 0x150) = lVar35;
            *(longlong *)(unaff_RBX + 0x158) = lVar31;
            lVar32 = *(longlong *)(lVar31 + 0x10);
            *(longlong *)(unaff_RBX + 0x80) = lVar35;
            pbStack_c0 = (byte *)0x1417390fc;
            (**(code **)(lVar31 + 0x18))
                      (unaff_RBX + 0x280,lVar35 + (lVar32 - 1U & 0xfffffffffffffff0) + 0x10);
            auVar49[0] = -(*(char *)(unaff_RBX + 0x280) == DAT_14332a670);
            auVar49[1] = -(*(char *)(unaff_RBX + 0x281) == UNK_14332a671);
            auVar49[2] = -(*(char *)(unaff_RBX + 0x282) == UNK_14332a672);
            auVar49[3] = -(*(char *)(unaff_RBX + 0x283) == UNK_14332a673);
            auVar49[4] = -(*(char *)(unaff_RBX + 0x284) == UNK_14332a674);
            auVar49[5] = -(*(char *)(unaff_RBX + 0x285) == UNK_14332a675);
            auVar49[6] = -(*(char *)(unaff_RBX + 0x286) == UNK_14332a676);
            auVar49[7] = -(*(char *)(unaff_RBX + 0x287) == UNK_14332a677);
            auVar49[8] = -(*(char *)(unaff_RBX + 0x288) == UNK_14332a678);
            auVar49[9] = -(*(char *)(unaff_RBX + 0x289) == UNK_14332a679);
            auVar49[10] = -(*(char *)(unaff_RBX + 0x28a) == UNK_14332a67a);
            auVar49[0xb] = -(*(char *)(unaff_RBX + 0x28b) == UNK_14332a67b);
            auVar49[0xc] = -(*(char *)(unaff_RBX + 0x28c) == UNK_14332a67c);
            auVar49[0xd] = -(*(char *)(unaff_RBX + 0x28d) == UNK_14332a67d);
            auVar49[0xe] = -(*(char *)(unaff_RBX + 0x28e) == UNK_14332a67e);
            auVar49[0xf] = -(*(char *)(unaff_RBX + 0x28f) == UNK_14332a67f);
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
              *(undefined8 *)(unaff_RBX + 0x280) = *(undefined8 *)(unaff_RBX + 0x80);
              *(longlong *)(unaff_RBX + 0x288) = lVar31;
              puStack_98 = &UNK_14332b0c0;
                    /* WARNING: Subroutine does not return */
              pbStack_c0 = (byte *)0x1417391d2;
              pdb_142dc8170(&UNK_14332b0b8,8,unaff_RBX + 0x280,&UNK_14332b870);
            }
            *(undefined8 *)(unaff_RBX + 0x268) = *(undefined8 *)(unaff_RBX + 0x80);
            *(undefined8 *)(unaff_RBX + 0x260) = 0;
            plVar5 = *(longlong **)(*(longlong *)(unaff_RBX + 0x70) + 0x38);
            LOCK();
            *plVar5 = *plVar5 + -1;
            lVar35 = *plVar5;
            UNLOCK();
            goto joined_r0x00014173913d;
          }
          if ((int)*(longlong *)(in_R11 + 0x20) == 1) {
            *(undefined8 *)(in_R11 + 0x50) = *(undefined8 *)(in_R11 + 0x28);
            *(undefined8 *)(in_R11 + 0x58) = *(undefined8 *)(in_R11 + 0x30);
            plVar5 = plRam0000000143cad8a0;
            unaff_RDI = param_1;
            unaff_R13 = pbVar26;
            if (*_DAT_143ca4b08 < 2) {
              bVar21 = *(byte *)(plRam0000000143cad8a0 + 2);
              uVar25 = (ulonglong)bVar21;
              if (2 < bVar21) {
                pbStack_c0 = (byte *)0x141738a23;
                uVar24 = pdb_142db8070(plRam0000000143cad8a0);
                uVar25 = (ulonglong)uVar24;
                in_R11 = *(longlong *)(unaff_RBX + 0x70);
                if ((char)uVar24 != '\0') goto code_r0x00014173803c;
                goto code_r0x000141738a32;
              }
              if (bVar21 == 0) goto code_r0x000141738a32;
code_r0x00014173803c:
              pbStack_c0 = (byte *)0x141738044;
              cVar22 = pdb_140dd7f60(*plVar5);
              in_R11 = *(longlong *)(unaff_RBX + 0x70);
              if (cVar22 == '\0') goto code_r0x000141738a32;
              lVar35 = *plVar5;
              uVar25 = *(ulonglong *)(lVar35 + 0x38);
              if (uVar25 == 0) {
                pbStack_c0 = (byte *)0x141739e8d;
                pdb_142dc8110(&UNK_14332aff8,0x22,&UNK_14332b0d8);
                goto code_r0x00014173a218;
              }
              uVar40 = *(undefined8 *)(lVar35 + 0x30);
              uVar30 = *(undefined8 *)(lVar35 + 0x40);
              uVar3 = *(undefined8 *)(lVar35 + 0x48);
              *(undefined8 *)(unaff_RBX + 0xc0) = uVar40;
              *(ulonglong *)(unaff_RBX + 200) = uVar25;
              *(undefined8 *)(unaff_RBX + 0xd0) = uVar30;
              *(undefined8 *)(unaff_RBX + 0xd8) = uVar3;
              *(undefined8 *)(unaff_RBX + 0xe0) = 0;
              *(undefined **)(unaff_RBX + 0xf0) = &UNK_14332b0f0;
              *(undefined8 *)(unaff_RBX + 0xf8) = 0x47;
              if (uVar25 == 1) {
                pbStack_c0 = (byte *)0x141739ecd;
                pdb_142dc8110(&UNK_14332aff8,0x22,&UNK_14332b0d8);
                goto code_r0x00014173a218;
              }
              *(undefined8 *)(unaff_RBX + 0x98) = uVar40;
              *(ulonglong *)(unaff_RBX + 0xa0) = uVar25;
              *(undefined8 *)(unaff_RBX + 0xa8) = uVar30;
              *(undefined8 *)(unaff_RBX + 0xb0) = uVar3;
              *(undefined8 *)(unaff_RBX + 0xb8) = 1;
              *(longlong *)(unaff_RBX + 0x108) = *(longlong *)(in_R11 + 0x38) + 0x20;
              if (uVar25 < 3) {
                pbStack_c0 = (byte *)0x141739f0d;
                pdb_142dc8110(&UNK_14332aff8,0x22,&UNK_14332b0d8);
                goto code_r0x00014173a218;
              }
              *(undefined8 *)(unaff_RBX + 0x150) = uVar40;
              *(ulonglong *)(unaff_RBX + 0x158) = uVar25;
              *(undefined8 *)(unaff_RBX + 0x160) = uVar30;
              *(undefined8 *)(unaff_RBX + 0x168) = uVar3;
              *(undefined8 *)(unaff_RBX + 0x170) = 2;
              *(longlong *)(unaff_RBX + 0x280) = unaff_RBX + 0xc0;
              *(longlong *)(unaff_RBX + 0x288) = unaff_RBX + 0xf0;
              *(undefined **)(unaff_RBX + 0x290) = &UNK_14332b058;
              *(longlong *)(unaff_RBX + 0x298) = unaff_RBX + 0x98;
              *(longlong *)(unaff_RBX + 0x2a0) = unaff_RBX + 0x108;
              *(undefined **)(unaff_RBX + 0x2a8) = &UNK_14332b078;
              *(longlong *)(unaff_RBX + 0x2b0) = unaff_RBX + 0x150;
              *(longlong *)(unaff_RBX + 0x2b8) = in_R11 + 0x10;
              *(undefined **)(unaff_RBX + 0x2c0) = &UNK_14332b098;
              *(longlong *)(unaff_RBX + 0x1c0) = unaff_RBX + 0x280;
              *(undefined8 *)(unaff_RBX + 0x1c8) = 3;
              *(longlong *)(unaff_RBX + 0x1d0) = lVar35 + 0x30;
              pbStack_c0 = (byte *)0x1417381c9;
              pdb_14173b6d0(unaff_RBX + 0x1c0);
            }
            else {
code_r0x000141738a32:
              plVar5 = plRam0000000143cad8a0;
              if ((*_DAT_143ca4ab0 != '\0') || (*_DAT_143ca8e90 < 4)) goto code_r0x000141738c53;
              lVar35 = *plRam0000000143cad8a0;
              uVar40 = *(undefined8 *)(lVar35 + 0x20);
              uVar30 = *(undefined8 *)(lVar35 + 0x28);
              *(undefined8 *)(unaff_RBX + 0x5f8) = 4;
              *(undefined8 *)(unaff_RBX + 0x600) = uVar40;
              *(undefined8 *)(unaff_RBX + 0x608) = uVar30;
              pbStack_c0 = (byte *)0x141738a80;
              uVar40 = pdb_140f33290();
              pbStack_c0 = (byte *)0x141738a96;
              cVar22 = (**(code **)(uVar25 + 0x18))(uVar40,unaff_RBX + 0x5f8);
              in_R11 = *(longlong *)(unaff_RBX + 0x70);
              if (cVar22 == '\0') goto code_r0x000141738c53;
              lVar31 = *plVar5;
              uVar37 = *(ulonglong *)(lVar31 + 0x38);
              if (uVar37 == 0) {
                pbStack_c0 = (byte *)0x141739fb3;
                pdb_142dc8110(&UNK_14332aff8,0x22,&UNK_14332b0d8);
                goto code_r0x00014173a218;
              }
              uVar30 = *(undefined8 *)(lVar31 + 0x30);
              uVar3 = *(undefined8 *)(lVar31 + 0x40);
              uVar4 = *(undefined8 *)(lVar31 + 0x48);
              *(undefined8 *)(unaff_RBX + 0xc0) = uVar30;
              *(ulonglong *)(unaff_RBX + 200) = uVar37;
              *(undefined8 *)(unaff_RBX + 0xd0) = uVar3;
              *(undefined8 *)(unaff_RBX + 0xd8) = uVar4;
              *(undefined8 *)(unaff_RBX + 0xe0) = 0;
              *(undefined **)(unaff_RBX + 0x108) = &UNK_14332b0f0;
              *(undefined8 *)(unaff_RBX + 0x110) = 0x47;
              if (uVar37 == 1) {
                pbStack_c0 = (byte *)0x141739ff3;
                pdb_142dc8110(&UNK_14332aff8,0x22,&UNK_14332b0d8);
                goto code_r0x00014173a218;
              }
              *(undefined8 *)(unaff_RBX + 0x98) = uVar30;
              *(ulonglong *)(unaff_RBX + 0xa0) = uVar37;
              *(undefined8 *)(unaff_RBX + 0xa8) = uVar3;
              *(undefined8 *)(unaff_RBX + 0xb0) = uVar4;
              *(undefined8 *)(unaff_RBX + 0xb8) = 1;
              *(longlong *)(unaff_RBX + 0x120) = *(longlong *)(in_R11 + 0x38) + 0x20;
              if (uVar37 < 3) {
                pbStack_c0 = (byte *)0x14173a033;
                pdb_142dc8110(&UNK_14332aff8,0x22,&UNK_14332b0d8);
                goto code_r0x00014173a218;
              }
              *(undefined8 *)(unaff_RBX + 0x150) = uVar30;
              *(ulonglong *)(unaff_RBX + 0x158) = uVar37;
              *(undefined8 *)(unaff_RBX + 0x160) = uVar3;
              *(undefined8 *)(unaff_RBX + 0x168) = uVar4;
              *(undefined8 *)(unaff_RBX + 0x170) = 2;
              *(longlong *)(unaff_RBX + 0x280) = unaff_RBX + 0xc0;
              *(longlong *)(unaff_RBX + 0x288) = unaff_RBX + 0x108;
              *(undefined **)(unaff_RBX + 0x290) = &UNK_14332b058;
              *(longlong *)(unaff_RBX + 0x298) = unaff_RBX + 0x98;
              *(longlong *)(unaff_RBX + 0x2a0) = unaff_RBX + 0x120;
              *(undefined **)(unaff_RBX + 0x2a8) = &UNK_14332b078;
              *(longlong *)(unaff_RBX + 0x2b0) = unaff_RBX + 0x150;
              *(longlong *)(unaff_RBX + 0x2b8) = in_R11 + 0x10;
              *(undefined **)(unaff_RBX + 0x2c0) = &UNK_14332b098;
              *(longlong *)(unaff_RBX + 0xf0) = unaff_RBX + 0x280;
              *(undefined8 *)(unaff_RBX + 0xf8) = 3;
              *(longlong *)(unaff_RBX + 0x100) = lVar31 + 0x30;
              *(undefined8 *)(unaff_RBX + 0x1d0) = *(undefined8 *)(unaff_RBX + 0x608);
              *(undefined8 *)(unaff_RBX + 0x1c0) = *(undefined8 *)(unaff_RBX + 0x5f8);
              *(undefined8 *)(unaff_RBX + 0x1c8) = *(undefined8 *)(unaff_RBX + 0x600);
              puStack_98 = (undefined *)(unaff_RBX + 0xf0);
              pbStack_c0 = (byte *)0x141738c4e;
              pdb_140dd7f80(lVar35,uVar40,uVar25,unaff_RBX + 0x1c0);
            }
            in_R11 = *(longlong *)(unaff_RBX + 0x70);
            goto code_r0x000141738c53;
          }
          *(byte **)(unaff_RBX + 0x80) = pbVar26;
          plVar5 = *(longlong **)(in_R11 + 0x38);
          LOCK();
          lVar35 = *plVar5;
          *plVar5 = *plVar5 + 1;
          UNLOCK();
          if (*plVar5 == 0 || SCARRY8(lVar35,1) != *plVar5 < 0) goto code_r0x00014173a218;
          *(longlong **)(in_R11 + 0x58) = plVar5;
          *(undefined1 *)(in_R11 + 0x60) = 1;
          uVar25 = *(longlong *)(in_R11 + 0x40) + 0x10;
          pbStack_c0 = (byte *)0x1417383e6;
          pdb_141805d60(unaff_RBX + 0x1c0,uVar25,
                        *(undefined8 *)(*(longlong *)(in_R11 + 0x38) + 0x20),
                        *(undefined8 *)(*(longlong *)(in_R11 + 0x38) + 0x28));
          plVar5 = plRam0000000143cad898;
          if (SBORROW8(0,*(longlong *)(unaff_RBX + 0x1d0))) {
            lVar35 = *(longlong *)(unaff_RBX + 0x70);
            pbVar26 = *(byte **)(unaff_RBX + 0x80);
            if (*_DAT_143ca4b08 < 3) {
              bVar21 = *(byte *)(plRam0000000143cad898 + 2);
              uVar25 = (ulonglong)bVar21;
              if (2 < bVar21) {
                pbStack_c0 = (byte *)0x1417391e4;
                uVar24 = pdb_142db8070(plRam0000000143cad898);
                uVar25 = (ulonglong)uVar24;
                lVar35 = *(longlong *)(unaff_RBX + 0x70);
                pbVar26 = *(byte **)(unaff_RBX + 0x80);
                if ((char)uVar24 != '\0') goto code_r0x000141738431;
                goto code_r0x0001417391fa;
              }
              if (bVar21 == 0) goto code_r0x0001417391fa;
code_r0x000141738431:
              pbStack_c0 = (byte *)0x141738439;
              cVar22 = pdb_140dd7f60(*plVar5);
              lVar35 = *(longlong *)(unaff_RBX + 0x70);
              pbVar26 = *(byte **)(unaff_RBX + 0x80);
              if (cVar22 == '\0') goto code_r0x0001417391fa;
              lVar31 = *plVar5;
              uVar25 = *(ulonglong *)(lVar31 + 0x38);
              if (uVar25 == 0) {
                pbStack_c0 = (byte *)0x14173a073;
                pdb_142dc8110(&UNK_14332aff8,0x22,&UNK_14332b150);
                goto code_r0x00014173a218;
              }
              uVar40 = *(undefined8 *)(lVar31 + 0x30);
              uVar30 = *(undefined8 *)(lVar31 + 0x40);
              uVar3 = *(undefined8 *)(lVar31 + 0x48);
              *(undefined8 *)(unaff_RBX + 0xc0) = uVar40;
              *(ulonglong *)(unaff_RBX + 200) = uVar25;
              *(undefined8 *)(unaff_RBX + 0xd0) = uVar30;
              *(undefined8 *)(unaff_RBX + 0xd8) = uVar3;
              *(undefined8 *)(unaff_RBX + 0xe0) = 0;
              *(undefined **)(unaff_RBX + 0xf0) = &UNK_14332b168;
              *(undefined8 *)(unaff_RBX + 0xf8) = 0x1d;
              if (uVar25 == 1) {
                pbStack_c0 = (byte *)0x14173a0af;
                pdb_142dc8110(&UNK_14332aff8,0x22,&UNK_14332b150);
                goto code_r0x00014173a218;
              }
              *(undefined8 *)(unaff_RBX + 0x98) = uVar40;
              *(ulonglong *)(unaff_RBX + 0xa0) = uVar25;
              *(undefined8 *)(unaff_RBX + 0xa8) = uVar30;
              *(undefined8 *)(unaff_RBX + 0xb0) = uVar3;
              *(undefined8 *)(unaff_RBX + 0xb8) = 1;
              *(longlong *)(unaff_RBX + 0x108) = *(longlong *)(lVar35 + 0x38) + 0x20;
              if (uVar25 < 3) {
                pbStack_c0 = (byte *)0x14173a0eb;
                pdb_142dc8110(&UNK_14332aff8,0x22,&UNK_14332b150);
                goto code_r0x00014173a218;
              }
              *(undefined8 *)(unaff_RBX + 0x150) = uVar40;
              *(ulonglong *)(unaff_RBX + 0x158) = uVar25;
              *(undefined8 *)(unaff_RBX + 0x160) = uVar30;
              *(undefined8 *)(unaff_RBX + 0x168) = uVar3;
              *(undefined8 *)(unaff_RBX + 0x170) = 2;
              *(longlong *)(unaff_RBX + 0x280) = unaff_RBX + 0xc0;
              *(longlong *)(unaff_RBX + 0x288) = unaff_RBX + 0xf0;
              *(undefined **)(unaff_RBX + 0x290) = &UNK_14332b058;
              *(longlong *)(unaff_RBX + 0x298) = unaff_RBX + 0x98;
              *(longlong *)(unaff_RBX + 0x2a0) = unaff_RBX + 0x108;
              *(undefined **)(unaff_RBX + 0x2a8) = &UNK_14332b078;
              uVar34 = unaff_RBX + 0x150;
              *(ulonglong *)(unaff_RBX + 0x2b0) = uVar34;
              *(longlong *)(unaff_RBX + 0x2b8) = lVar35 + 0x10;
              *(undefined **)(unaff_RBX + 0x2c0) = &UNK_14332b098;
              *(longlong *)(unaff_RBX + 0x1c0) = unaff_RBX + 0x280;
              *(undefined8 *)(unaff_RBX + 0x1c8) = 3;
              *(longlong *)(unaff_RBX + 0x1d0) = lVar31 + 0x30;
              pbStack_c0 = (byte *)0x1417385c5;
              pdb_14173b8e0(unaff_RBX + 0x1c0);
code_r0x00014173941e:
              lVar35 = *(longlong *)(unaff_RBX + 0x70);
              pbVar26 = *(byte **)(unaff_RBX + 0x80);
              uVar37 = uVar34;
            }
            else {
code_r0x0001417391fa:
              plVar5 = plRam0000000143cad898;
              uVar37 = uVar25;
              if ((*_DAT_143ca4ab0 == '\0') && (2 < *_DAT_143ca8e90)) {
                lVar31 = *plRam0000000143cad898;
                uVar40 = *(undefined8 *)(lVar31 + 0x20);
                uVar30 = *(undefined8 *)(lVar31 + 0x28);
                *(undefined8 *)(unaff_RBX + 0x628) = 3;
                *(undefined8 *)(unaff_RBX + 0x630) = uVar40;
                *(undefined8 *)(unaff_RBX + 0x638) = uVar30;
                pbStack_c0 = (byte *)0x141739248;
                uVar34 = pdb_140f33290();
                uVar37 = unaff_RBX + 0x628;
                pbStack_c0 = (byte *)0x14173925e;
                cVar22 = (**(code **)(uVar25 + 0x18))(uVar34);
                lVar35 = *(longlong *)(unaff_RBX + 0x70);
                pbVar26 = *(byte **)(unaff_RBX + 0x80);
                if (cVar22 != '\0') {
                  lVar32 = *plVar5;
                  uVar37 = *(ulonglong *)(lVar32 + 0x38);
                  if (uVar37 == 0) {
                    pbStack_c0 = (byte *)0x14173a18d;
                    pdb_142dc8110(&UNK_14332aff8,0x22,&UNK_14332b150);
                    goto code_r0x00014173a218;
                  }
                  uVar40 = *(undefined8 *)(lVar32 + 0x30);
                  uVar30 = *(undefined8 *)(lVar32 + 0x40);
                  uVar3 = *(undefined8 *)(lVar32 + 0x48);
                  *(undefined8 *)(unaff_RBX + 0xc0) = uVar40;
                  *(ulonglong *)(unaff_RBX + 200) = uVar37;
                  *(undefined8 *)(unaff_RBX + 0xd0) = uVar30;
                  *(undefined8 *)(unaff_RBX + 0xd8) = uVar3;
                  *(undefined8 *)(unaff_RBX + 0xe0) = 0;
                  *(undefined **)(unaff_RBX + 0x108) = &UNK_14332b168;
                  *(undefined8 *)(unaff_RBX + 0x110) = 0x1d;
                  if (uVar37 == 1) {
                    pbStack_c0 = (byte *)0x14173a1c6;
                    pdb_142dc8110(&UNK_14332aff8,0x22,&UNK_14332b150);
                    goto code_r0x00014173a218;
                  }
                  *(undefined8 *)(unaff_RBX + 0x98) = uVar40;
                  *(ulonglong *)(unaff_RBX + 0xa0) = uVar37;
                  *(undefined8 *)(unaff_RBX + 0xa8) = uVar30;
                  *(undefined8 *)(unaff_RBX + 0xb0) = uVar3;
                  *(undefined8 *)(unaff_RBX + 0xb8) = 1;
                  *(longlong *)(unaff_RBX + 0x120) = *(longlong *)(lVar35 + 0x38) + 0x20;
                  if (uVar37 < 3) {
                    pbStack_c0 = (byte *)0x14173a1fc;
                    pdb_142dc8110(&UNK_14332aff8,0x22,&UNK_14332b150);
                    goto code_r0x00014173a218;
                  }
                  *(undefined8 *)(unaff_RBX + 0x150) = uVar40;
                  *(ulonglong *)(unaff_RBX + 0x158) = uVar37;
                  *(undefined8 *)(unaff_RBX + 0x160) = uVar30;
                  *(undefined8 *)(unaff_RBX + 0x168) = uVar3;
                  *(undefined8 *)(unaff_RBX + 0x170) = 2;
                  *(longlong *)(unaff_RBX + 0x280) = unaff_RBX + 0xc0;
                  *(longlong *)(unaff_RBX + 0x288) = unaff_RBX + 0x108;
                  *(undefined **)(unaff_RBX + 0x290) = &UNK_14332b058;
                  *(longlong *)(unaff_RBX + 0x298) = unaff_RBX + 0x98;
                  *(longlong *)(unaff_RBX + 0x2a0) = unaff_RBX + 0x120;
                  *(undefined **)(unaff_RBX + 0x2a8) = &UNK_14332b078;
                  *(longlong *)(unaff_RBX + 0x2b0) = unaff_RBX + 0x150;
                  *(longlong *)(unaff_RBX + 0x2b8) = lVar35 + 0x10;
                  *(undefined **)(unaff_RBX + 0x2c0) = &UNK_14332b098;
                  *(longlong *)(unaff_RBX + 0xf0) = unaff_RBX + 0x280;
                  *(undefined8 *)(unaff_RBX + 0xf8) = 3;
                  *(longlong *)(unaff_RBX + 0x100) = lVar32 + 0x30;
                  *(undefined8 *)(unaff_RBX + 0x1d0) = *(undefined8 *)(unaff_RBX + 0x638);
                  *(undefined8 *)(unaff_RBX + 0x1c0) = *(undefined8 *)(unaff_RBX + 0x628);
                  *(undefined8 *)(unaff_RBX + 0x1c8) = *(undefined8 *)(unaff_RBX + 0x630);
                  puStack_98 = (undefined *)(unaff_RBX + 0xf0);
                  pbStack_c0 = (byte *)0x14173941d;
                  pdb_140dd7f80(lVar31,uVar34,uVar25,unaff_RBX + 0x1c0);
                  goto code_r0x00014173941e;
                }
              }
            }
            pbStack_c0 = (byte *)0x141739438;
            uVar40 = (**(code **)(*(longlong *)(*(longlong *)(lVar35 + 0x38) + 0x18) + 0x28))
                               (*(undefined8 *)(*(longlong *)(lVar35 + 0x38) + 0x10));
            *(undefined8 *)(unaff_RBX + 0x148) = uVar40;
            *(ulonglong *)(unaff_RBX + 0x140) = uVar37;
            lVar35 = *(longlong *)(unaff_RBX + 0x70);
            *(undefined1 *)(lVar35 + 0x49) = 1;
            plVar5 = *(longlong **)(lVar35 + 0x40);
            LOCK();
            lVar35 = *plVar5;
            *plVar5 = *plVar5 + 1;
            UNLOCK();
            if (*plVar5 == 0 || SCARRY8(lVar35,1) != *plVar5 < 0) goto code_r0x00014173a218;
            *(longlong **)(unaff_RBX + 0x80) = plVar5;
            *(longlong **)(unaff_RBX + 0x98) = plVar5;
            pbStack_c0 = (byte *)0x141739477;
            pdb_1417473a0(unaff_RBX + 0x150);
            *(undefined8 *)(unaff_RBX + 0x280) = 1;
            *(undefined8 *)(unaff_RBX + 0x288) = 1;
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
            uVar40 = 8;
            pbStack_c0 = (byte *)0x1417394f8;
            pbVar33 = pub_1406abab0(0x70,8);
            if (pbVar33 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
              pbStack_c0 = (byte *)0x141739612;
              pdb_142dc7e11(8,0x70);
            }
            uVar30 = *(undefined8 *)(unaff_RBX + 0x2e8);
            *(undefined8 *)(pbVar33 + 0x60) = *(undefined8 *)(unaff_RBX + 0x2e0);
            *(undefined8 *)(pbVar33 + 0x68) = uVar30;
            uVar30 = *(undefined8 *)(unaff_RBX + 0x2d8);
            *(undefined8 *)(pbVar33 + 0x50) = *(undefined8 *)(unaff_RBX + 0x2d0);
            *(undefined8 *)(pbVar33 + 0x58) = uVar30;
            uVar30 = *(undefined8 *)(unaff_RBX + 0x2c8);
            *(undefined8 *)(pbVar33 + 0x40) = *(undefined8 *)(unaff_RBX + 0x2c0);
            *(undefined8 *)(pbVar33 + 0x48) = uVar30;
            uVar30 = *(undefined8 *)(unaff_RBX + 0x280);
            uVar3 = *(undefined8 *)(unaff_RBX + 0x288);
            uVar4 = *(undefined8 *)(unaff_RBX + 0x290);
            uVar2 = *(undefined8 *)(unaff_RBX + 0x298);
            uVar51 = *(undefined4 *)(unaff_RBX + 0x2a0);
            uVar52 = *(undefined4 *)(unaff_RBX + 0x2a4);
            uVar7 = *(undefined4 *)(unaff_RBX + 0x2a8);
            uVar8 = *(undefined4 *)(unaff_RBX + 0x2ac);
            uVar9 = *(undefined4 *)(unaff_RBX + 0x2b4);
            uVar10 = *(undefined4 *)(unaff_RBX + 0x2b8);
            uVar11 = *(undefined4 *)(unaff_RBX + 700);
            *(undefined4 *)(pbVar33 + 0x30) = *(undefined4 *)(unaff_RBX + 0x2b0);
            *(undefined4 *)(pbVar33 + 0x34) = uVar9;
            *(undefined4 *)(pbVar33 + 0x38) = uVar10;
            *(undefined4 *)(pbVar33 + 0x3c) = uVar11;
            *(undefined4 *)(pbVar33 + 0x20) = uVar51;
            *(undefined4 *)(pbVar33 + 0x24) = uVar52;
            *(undefined4 *)(pbVar33 + 0x28) = uVar7;
            *(undefined4 *)(pbVar33 + 0x2c) = uVar8;
            *(undefined8 *)(pbVar33 + 0x10) = uVar4;
            *(undefined8 *)(pbVar33 + 0x18) = uVar2;
            *(undefined8 *)pbVar33 = uVar30;
            *(undefined8 *)(pbVar33 + 8) = uVar3;
            puVar45 = *(undefined8 **)(unaff_RBX + 0x70);
            plVar5 = (longlong *)*puVar45;
            uVar30 = *(undefined8 *)(unaff_RBX + 0x148);
            if (plVar5 != (longlong *)0x0) {
              uVar40 = puVar45[1];
              LOCK();
              lVar35 = *plVar5;
              *plVar5 = *plVar5 + 1;
              UNLOCK();
              if (*plVar5 == 0 || SCARRY8(lVar35,1) != *plVar5 < 0) goto code_r0x00014173a218;
            }
            *(undefined1 *)(puVar45 + 9) = 1;
            puVar45[0xf] = *(undefined8 *)(unaff_RBX + 0x80);
            puVar45[0x10] = pbVar33;
            puVar45[0x11] = plVar5;
            puVar45[0x12] = uVar40;
            LOCK();
            lVar35 = *(longlong *)pbVar33;
            *(longlong *)pbVar33 = *(longlong *)pbVar33 + 1;
            UNLOCK();
            if (*(longlong *)pbVar33 == 0 || SCARRY8(lVar35,1) != *(longlong *)pbVar33 < 0)
            goto code_r0x00014173a218;
            puVar45[10] = pbVar33;
            *(undefined1 *)((longlong)puVar45 + 0x49) = 0;
            *(undefined1 *)(puVar45 + 9) = 0;
            uVar40 = puVar45[0xf];
            uVar3 = puVar45[0x10];
            uVar51 = *(undefined4 *)((longlong)puVar45 + 0x8c);
            uVar52 = *(undefined4 *)(puVar45 + 0x12);
            uVar7 = *(undefined4 *)((longlong)puVar45 + 0x94);
            *(undefined4 *)(unaff_RBX + 0x290) = *(undefined4 *)(puVar45 + 0x11);
            *(undefined4 *)(unaff_RBX + 0x294) = uVar51;
            *(undefined4 *)(unaff_RBX + 0x298) = uVar52;
            *(undefined4 *)(unaff_RBX + 0x29c) = uVar7;
            *(undefined8 *)(unaff_RBX + 0x280) = uVar40;
            *(undefined8 *)(unaff_RBX + 0x288) = uVar3;
            pcVar6 = *(code **)(*(longlong *)(unaff_RBX + 0x140) + 0x30);
            *(undefined8 *)(unaff_RBX + 0x1f0) = uVar30;
            *(longlong *)(unaff_RBX + 0x1f8) = *(longlong *)(unaff_RBX + 0x140);
            lVar35 = unaff_RBX + 0x280;
            pbStack_c0 = (byte *)0x1417395eb;
            uVar40 = (*pcVar6)();
            lVar31 = *(longlong *)(unaff_RBX + 0x70);
            *(undefined8 *)(lVar31 + 0x68) = uVar40;
            *(longlong *)(lVar31 + 0x70) = lVar35;
            pbStack_c0 = (byte *)0x14173744d;
            (**(code **)(lVar35 + 0x18))(unaff_RBX + 0x280,uVar40,param_1);
            lVar35 = *(longlong *)(unaff_RBX + 0x280);
            if (lVar35 == 2) {
              pbVar26[0] = 1;
              pbVar26[1] = 0;
              pbVar26[2] = 0;
              pbVar26[3] = 0;
              pbVar26[4] = 0;
              pbVar26[5] = 0;
              pbVar26[6] = 0;
              pbVar26[7] = 0;
              uVar20 = 4;
              goto code_r0x000141739e30;
            }
            uVar40 = *(undefined8 *)(unaff_RBX + 0x288);
            pauVar39 = *(undefined1 (**) [16])(unaff_RBX + 0x290);
            *(undefined8 *)(unaff_RBX + 0x80) =
                 *(undefined8 *)(*(longlong *)(unaff_RBX + 0x70) + 0x68);
            puVar45 = *(undefined8 **)(*(longlong *)(unaff_RBX + 0x70) + 0x70);
            *(undefined8 **)(unaff_RBX + 0x88) = puVar45;
            pcVar6 = (code *)*puVar45;
            if (pcVar6 != (code *)0x0) {
              pbStack_c0 = (byte *)0x1417374a3;
              (*pcVar6)(*(undefined8 *)(unaff_RBX + 0x80));
            }
            arg1 = *(undefined1 (**) [16])(*(longlong *)(unaff_RBX + 0x88) + 8);
            if (arg1 != (undefined1 (*) [16])0x0) {
              pbStack_c0 = (byte *)0x1417374c4;
              pub_1406abac0(*(byte **)(unaff_RBX + 0x80),(ulonglong)arg1,
                            *(ulonglong *)(*(longlong *)(unaff_RBX + 0x88) + 0x10));
            }
            lVar31 = *(longlong *)(unaff_RBX + 0x70);
            if ((int)lVar35 == 1) {
              uVar30 = *(undefined8 *)(lVar31 + 0x10);
              uVar3 = *(undefined8 *)(lVar31 + 0x18);
              *(undefined8 *)(unaff_RBX + 0x1f0) = *(undefined8 *)(unaff_RBX + 0x148);
              *(undefined8 *)(unaff_RBX + 0x1f8) = *(undefined8 *)(unaff_RBX + 0x140);
              pbStack_c0 = (byte *)0x1417374fd;
              pauVar27 = (undefined1 (*) [16])pdb_140c799b0(uVar40);
              *(undefined1 (**) [16])(unaff_RBX + 0xb0) = pauVar39;
              lVar31 = *(longlong *)(unaff_RBX + 0x70);
              arg1 = pauVar39;
              pauVar39 = pauVar27;
              uVar40 = uVar3;
            }
            else {
              uVar30 = 0;
            }
            *(undefined8 *)(unaff_RBX + 0x98) = uVar30;
            *(undefined8 *)(unaff_RBX + 0xa0) = uVar40;
            *(undefined1 (**) [16])(unaff_RBX + 0xa8) = pauVar39;
            lVar35 = *(longlong *)(lVar31 + 0x50);
            pcVar36 = (char *)(lVar35 + 0x10);
            LOCK();
            bVar46 = *(char *)(lVar35 + 0x10) == '\0';
            if (bVar46) {
              *(char *)(lVar35 + 0x10) = '\x01';
            }
            UNLOCK();
            if (!bVar46) {
              *(undefined1 *)(unaff_RBX + 0x7d) = 1;
              pbStack_c0 = (byte *)0x14173885c;
              pdb_142dc6be0(pcVar36);
            }
            puVar17 = _DAT_143ca8f38;
            if ((*_DAT_143ca8f38 & 0x7fffffffffffffff) == 0) {
              bVar21 = 0;
              cVar22 = *(char *)(lVar35 + 0x11);
            }
            else {
              *(undefined1 *)(unaff_RBX + 0x7d) = 1;
              pbStack_c0 = (byte *)0x14173886b;
              bVar21 = pdb_142dc79e0();
              bVar21 = bVar21 ^ 1;
              cVar22 = *(char *)(lVar35 + 0x11);
            }
            if (cVar22 != '\0') {
              *(char **)(unaff_RBX + 0x280) = pcVar36;
              *(byte *)(unaff_RBX + 0x288) = bVar21;
              puStack_98 = &UNK_14332b190;
                    /* WARNING: Subroutine does not return */
              pbStack_c0 = (byte *)0x1417388b2;
              pdb_142dc8170(&UNK_14332b8d0,0x2b,unaff_RBX + 0x280,&UNK_14332b920);
            }
            uVar40 = *(undefined8 *)(lVar35 + 0x18);
            uVar30 = *(undefined8 *)(lVar35 + 0x20);
            uVar51 = *(undefined4 *)(lVar35 + 0x2c);
            uVar52 = *(undefined4 *)(lVar35 + 0x30);
            uVar7 = *(undefined4 *)(lVar35 + 0x34);
            *(undefined4 *)(unaff_RBX + 0x160) = *(undefined4 *)(lVar35 + 0x28);
            *(undefined4 *)(unaff_RBX + 0x164) = uVar51;
            *(undefined4 *)(unaff_RBX + 0x168) = uVar52;
            *(undefined4 *)(unaff_RBX + 0x16c) = uVar7;
            *(undefined8 *)(unaff_RBX + 0x150) = uVar40;
            *(undefined8 *)(unaff_RBX + 0x158) = uVar30;
            uVar30 = _UNK_14332bb38;
            uVar40 = _UNK_14332bb30;
            *(undefined8 *)(lVar35 + 0x18) = _UNK_14332bb30;
            *(undefined8 *)(lVar35 + 0x20) = uVar30;
            uVar4 = _UNK_14332bb48;
            uVar3 = _UNK_14332bb40;
            *(undefined8 *)(lVar35 + 0x28) = _UNK_14332bb40;
            *(undefined8 *)(lVar35 + 0x30) = uVar4;
            if ((bVar21 == 0) && ((*puVar17 & 0x7fffffffffffffff) != 0)) {
              *(undefined1 *)(unaff_RBX + 0x7b) = 1;
              pbStack_c0 = (byte *)0x141738992;
              cVar22 = pdb_142dc79e0();
              if (cVar22 == '\0') {
                *(undefined1 *)(lVar35 + 0x11) = 1;
              }
            }
            LOCK();
            cVar22 = *pcVar36;
            *pcVar36 = '\0';
            UNLOCK();
            if (cVar22 == '\x02') {
              *(undefined1 *)(unaff_RBX + 0x7b) = 1;
              pbStack_c0 = (byte *)0x1417388c4;
              pdb_142dc6ca0(pcVar36);
            }
            plVar5 = (longlong *)(*(longlong *)(unaff_RBX + 0x70) + 0x50);
            lVar31 = *plVar5;
            lVar35 = lVar31 + 0x38;
            LOCK();
            bVar46 = *(char *)(lVar31 + 0x38) == '\0';
            if (bVar46) {
              *(char *)(lVar31 + 0x38) = '\x01';
            }
            UNLOCK();
            if (!bVar46) {
              *(undefined1 *)(unaff_RBX + 0x7b) = 1;
              pbStack_c0 = (byte *)0x1417388d6;
              pdb_142dc6be0(lVar35);
            }
            if ((*puVar17 & 0x7fffffffffffffff) == 0) {
              uVar24 = 0;
              cVar22 = *(char *)(lVar31 + 0x39);
            }
            else {
              *(undefined1 *)(unaff_RBX + 0x7b) = 1;
              pbStack_c0 = (byte *)0x1417388e5;
              uVar24 = pdb_142dc79e0();
              uVar24 = uVar24 ^ 1;
              cVar22 = *(char *)(lVar31 + 0x39);
            }
            if (cVar22 != '\0') {
              *(longlong *)(unaff_RBX + 0x280) = lVar35;
              *(char *)(unaff_RBX + 0x288) = (char)uVar24;
              puStack_98 = &UNK_14332b1a8;
                    /* WARNING: Subroutine does not return */
              pbStack_c0 = (byte *)0x14173892c;
              pdb_142dc8170(&UNK_14332b8d0,0x2b,unaff_RBX + 0x280,&UNK_14332b940);
            }
            *(uint *)(unaff_RBX + 0x88) = uVar24;
            *(longlong *)(unaff_RBX + 0x80) = lVar35;
            pbStack_c0 = (byte *)0x141737633;
            plVar28 = (longlong *)pdb_140f3bda0();
            if ((char)plVar28[2] == '\x01') {
              lVar35 = *plVar28;
              arg1 = (undefined1 (*) [16])plVar28[1];
            }
            else {
              pbStack_c0 = (byte *)0x141738937;
              lVar35 = pdb_140f4fd10();
              *plVar28 = lVar35;
              plVar28[1] = (longlong)arg1;
              *(undefined1 *)(plVar28 + 2) = 1;
            }
            *plVar28 = lVar35 + 1;
            pauVar39 = *(undefined1 (**) [16])(lVar31 + 0x40);
            lVar32 = *(longlong *)(lVar31 + 0x48);
            uVar2 = *(undefined8 *)(lVar31 + 0x58);
            *(undefined8 *)(lVar31 + 0x50) = uVar3;
            *(undefined8 *)(lVar31 + 0x58) = uVar4;
            *(undefined8 *)(lVar31 + 0x40) = uVar40;
            *(undefined8 *)(lVar31 + 0x48) = uVar30;
            *(longlong *)(lVar31 + 0x60) = lVar35;
            *(undefined1 (**) [16])(lVar31 + 0x68) = arg1;
            auVar50 = *pauVar39;
            if (lVar32 == 0) {
              uVar40 = 0;
            }
            else {
              lVar35 = lVar32 * 0x61 + 0x71;
              arg1 = pauVar39 + lVar32 * -6 + -6;
              uVar40 = 0x10;
            }
            *(undefined8 *)(unaff_RBX + 0x280) = uVar40;
            *(longlong *)(unaff_RBX + 0x288) = lVar35;
            *(undefined1 (**) [16])(unaff_RBX + 0x290) = arg1;
            *(undefined1 (**) [16])(unaff_RBX + 0x298) = pauVar39;
            *(undefined1 (**) [16])(unaff_RBX + 0x2a0) = pauVar39 + 1;
            *(undefined1 **)(unaff_RBX + 0x2a8) = *pauVar39 + lVar32 + 1;
            *(ushort *)(unaff_RBX + 0x2b0) =
                 ~((ushort)(SUB161(auVar50 >> 7,0) & 1) |
                   (ushort)(SUB161(auVar50 >> 0xf,0) & 1) << 1 |
                   (ushort)(SUB161(auVar50 >> 0x17,0) & 1) << 2 |
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
                   (ushort)(SUB161(auVar50 >> 0x77,0) & 1) << 0xe |
                  (ushort)(byte)(auVar50[0xf] >> 7) << 0xf);
            *(undefined8 *)(unaff_RBX + 0x2b8) = uVar2;
            pbStack_c0 = (byte *)0x1417376f8;
            pdb_1415ed630(unaff_RBX + 0x120,unaff_RBX + 0x280);
            if ((*(char *)(unaff_RBX + 0x88) == '\0') && ((*puVar17 & 0x7fffffffffffffff) != 0)) {
              *(undefined1 *)(unaff_RBX + 0x7e) = 1;
              *(undefined1 *)(unaff_RBX + 0x7f) = 1;
              pbStack_c0 = (byte *)0x1417389b1;
              cVar22 = pdb_142dc79e0();
              if (cVar22 == '\0') {
                *(undefined1 *)(lVar31 + 0x39) = 1;
              }
            }
            LOCK();
            cVar22 = **(char **)(unaff_RBX + 0x80);
            **(char **)(unaff_RBX + 0x80) = '\0';
            UNLOCK();
            if (cVar22 == '\x02') {
              *(undefined1 *)(unaff_RBX + 0x7e) = 1;
              *(undefined1 *)(unaff_RBX + 0x7f) = 1;
              pbStack_c0 = (byte *)0x141738955;
              pdb_142dc6ca0();
            }
            pauVar39 = *(undefined1 (**) [16])(unaff_RBX + 0x150);
            auVar50 = *pauVar39;
            *(undefined1 (**) [16])(unaff_RBX + 0x280) = pauVar39;
            *(undefined1 (**) [16])(unaff_RBX + 0x288) = pauVar39 + 1;
            *(undefined1 **)(unaff_RBX + 0x290) = *pauVar39 + *(longlong *)(unaff_RBX + 0x158) + 1;
            *(ushort *)(unaff_RBX + 0x298) =
                 ~((ushort)(SUB161(auVar50 >> 7,0) & 1) |
                   (ushort)(SUB161(auVar50 >> 0xf,0) & 1) << 1 |
                   (ushort)(SUB161(auVar50 >> 0x17,0) & 1) << 2 |
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
                   (ushort)(SUB161(auVar50 >> 0x77,0) & 1) << 0xe |
                  (ushort)(byte)(auVar50[0xf] >> 7) << 0xf);
            *(undefined8 *)(unaff_RBX + 0x2a0) = *(undefined8 *)(unaff_RBX + 0x168);
            *(longlong *)(unaff_RBX + 0x2a8) = *(longlong *)(unaff_RBX + 0x70) + 0x40;
            *(undefined1 *)(unaff_RBX + 0x7e) = 1;
            *(undefined1 *)(unaff_RBX + 0x7f) = 1;
            lVar35 = unaff_RBX + 0x280;
            pbStack_c0 = (byte *)0x14173779a;
            pdb_1415ea2a0(unaff_RBX + 0x108);
            *(longlong **)(unaff_RBX + 0x88) = plVar5;
            *(byte **)(unaff_RBX + 0x80) = pbVar26;
            if (*(longlong *)(unaff_RBX + 0x98) == 0) {
              pcVar6 = *(code **)(*(longlong *)(unaff_RBX + 0xa8) + 0x18);
              lVar35 = *(longlong *)(unaff_RBX + 0xa0) +
                       (*(longlong *)(*(longlong *)(unaff_RBX + 0xa8) + 0x10) - 1U &
                       0xfffffffffffffff0) + 0x10;
              *(undefined1 *)(unaff_RBX + 0x6d) = 1;
              *(undefined1 *)(unaff_RBX + 0x6e) = 1;
              *(undefined1 *)(unaff_RBX + 0x6f) = 1;
              pbStack_c0 = (byte *)0x141737946;
              (*pcVar6)(unaff_RBX + 0x280,lVar35);
              auVar48[0] = -(*(char *)(unaff_RBX + 0x280) == DAT_14332a670);
              auVar48[1] = -(*(char *)(unaff_RBX + 0x281) == UNK_14332a671);
              auVar48[2] = -(*(char *)(unaff_RBX + 0x282) == UNK_14332a672);
              auVar48[3] = -(*(char *)(unaff_RBX + 0x283) == UNK_14332a673);
              auVar48[4] = -(*(char *)(unaff_RBX + 0x284) == UNK_14332a674);
              auVar48[5] = -(*(char *)(unaff_RBX + 0x285) == UNK_14332a675);
              auVar48[6] = -(*(char *)(unaff_RBX + 0x286) == UNK_14332a676);
              auVar48[7] = -(*(char *)(unaff_RBX + 0x287) == UNK_14332a677);
              auVar48[8] = -(*(char *)(unaff_RBX + 0x288) == UNK_14332a678);
              auVar48[9] = -(*(char *)(unaff_RBX + 0x289) == UNK_14332a679);
              auVar48[10] = -(*(char *)(unaff_RBX + 0x28a) == UNK_14332a67a);
              auVar48[0xb] = -(*(char *)(unaff_RBX + 0x28b) == UNK_14332a67b);
              auVar48[0xc] = -(*(char *)(unaff_RBX + 0x28c) == UNK_14332a67c);
              auVar48[0xd] = -(*(char *)(unaff_RBX + 0x28d) == UNK_14332a67d);
              auVar48[0xe] = -(*(char *)(unaff_RBX + 0x28e) == UNK_14332a67e);
              auVar48[0xf] = -(*(char *)(unaff_RBX + 0x28f) == UNK_14332a67f);
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
                *(undefined1 *)(unaff_RBX + 0x6d) = 1;
                *(undefined1 *)(unaff_RBX + 0x6e) = 1;
                *(undefined1 *)(unaff_RBX + 0x6f) = 1;
                pbStack_c0 = (byte *)0x1417389fc;
                pdb_142dc8110(&UNK_14332b0b8,8,&UNK_14332b1c0);
                goto code_r0x00014173a218;
              }
              *(undefined8 *)(unaff_RBX + 0xf0) = 0;
              *(undefined8 *)(unaff_RBX + 0xf8) = 0x10;
              *(undefined8 *)(unaff_RBX + 0x100) = 0;
              *(longlong *)(unaff_RBX + 0x280) = unaff_RBX + 0xf0;
              *(undefined1 *)(unaff_RBX + 0x7c) = 1;
              lVar31 = unaff_RBX + 0x280;
              pbStack_c0 = (byte *)0x1417379af;
              pdb_140d9d5e0(lVar35,lVar31,&UNK_14332b448);
              lVar32 = *(longlong *)(*(longlong *)(unaff_RBX + 0x70) + 0x38);
              lVar29 = *(longlong *)(*(longlong *)(unaff_RBX + 0x70) + 0x40);
              *(undefined8 *)(unaff_RBX + 0x208) = *(undefined8 *)(lVar32 + 0x28);
              *(undefined8 *)(unaff_RBX + 0x200) = *(undefined8 *)(lVar32 + 0x20);
              uVar40 = *(undefined8 *)(lVar32 + 0x10);
              pcVar6 = *(code **)(*(longlong *)(lVar32 + 0x18) + 0x38);
              *(undefined1 *)(unaff_RBX + 0x7c) = 1;
              pbStack_c0 = (byte *)0x1417379e4;
              uVar40 = (*pcVar6)(uVar40);
              *(undefined8 *)(unaff_RBX + 0x5d0) = uVar40;
              lVar32 = *(longlong *)(*(longlong *)(unaff_RBX + 0x70) + 0x38);
              uVar40 = *(undefined8 *)(lVar32 + 0x10);
              pcVar6 = *(code **)(*(longlong *)(lVar32 + 0x18) + 0x18);
              *(undefined1 *)(unaff_RBX + 0x7c) = 1;
              pbStack_c0 = (byte *)0x141737a08;
              uVar30 = (*pcVar6)(uVar40);
              lVar32 = *(longlong *)(*(longlong *)(unaff_RBX + 0x70) + 0x38);
              uVar40 = *(undefined8 *)(lVar32 + 0x10);
              pcVar6 = *(code **)(*(longlong *)(lVar32 + 0x18) + 0x20);
              *(undefined1 *)(unaff_RBX + 0x7c) = 1;
              pbStack_c0 = (byte *)0x141737a26;
              uVar20 = (*pcVar6)(uVar40);
              *(undefined1 *)(unaff_RBX + 0x7c) = 1;
              pbStack_c0 = (byte *)0x141737a44;
              pdb_1415e6d20((byte *)(unaff_RBX + 0x1c0),unaff_RBX + 0x120);
              *(undefined8 *)(unaff_RBX + 0xd0) = *(undefined8 *)(unaff_RBX + 0x118);
              *(undefined8 *)(unaff_RBX + 0xc0) = *(undefined8 *)(unaff_RBX + 0x108);
              *(undefined8 *)(unaff_RBX + 200) = *(undefined8 *)(unaff_RBX + 0x110);
              *(undefined8 *)(unaff_RBX + 0x290) = *(undefined8 *)(unaff_RBX + 0x100);
              *(undefined8 *)(unaff_RBX + 0x280) = *(undefined8 *)(unaff_RBX + 0xf0);
              *(undefined8 *)(unaff_RBX + 0x288) = *(undefined8 *)(unaff_RBX + 0xf8);
              *(undefined1 *)(unaff_RBX + 0x7c) = 0;
              uStack_68 = (byte *)(unaff_RBX + 0x280);
              puStack_70 = (undefined *)(unaff_RBX + 0xc0);
              puStack_98 = *(undefined **)(unaff_RBX + 0x5d0);
              pbStack_c0 = (byte *)0x141737ad8;
              lStack_90 = lVar31;
              uStack_88 = uVar30;
              uStack_80 = uVar20;
              pbStack_78 = (byte *)(unaff_RBX + 0x1c0);
              lVar31 = pdb_1417ffee0(lVar29 + 0x10,*(undefined8 *)(unaff_RBX + 0x200),
                                     *(undefined8 *)(unaff_RBX + 0x208),lVar35);
            }
            else {
              lVar31 = *(longlong *)(*(longlong *)(unaff_RBX + 0x70) + 0x38);
              lVar32 = *(longlong *)(*(longlong *)(unaff_RBX + 0x70) + 0x40);
              *(undefined8 *)(unaff_RBX + 0x208) = *(undefined8 *)(lVar31 + 0x28);
              *(undefined8 *)(unaff_RBX + 0x200) = *(undefined8 *)(lVar31 + 0x20);
              uVar40 = *(undefined8 *)(lVar31 + 0x10);
              pcVar6 = *(code **)(*(longlong *)(lVar31 + 0x18) + 0x38);
              *(undefined1 *)(unaff_RBX + 0x6d) = 1;
              *(undefined1 *)(unaff_RBX + 0x6e) = 1;
              *(undefined1 *)(unaff_RBX + 0x6f) = 1;
              pbStack_c0 = (byte *)0x1417377f3;
              lVar29 = (*pcVar6)(uVar40);
              lVar31 = *(longlong *)(*(longlong *)(unaff_RBX + 0x70) + 0x38);
              uVar40 = *(undefined8 *)(lVar31 + 0x10);
              pcVar6 = *(code **)(*(longlong *)(lVar31 + 0x18) + 0x18);
              *(undefined1 *)(unaff_RBX + 0x6d) = 1;
              *(undefined1 *)(unaff_RBX + 0x6e) = 1;
              *(undefined1 *)(unaff_RBX + 0x6f) = 1;
              pbStack_c0 = (byte *)0x14173781c;
              uVar30 = (*pcVar6)(uVar40);
              lVar31 = *(longlong *)(*(longlong *)(unaff_RBX + 0x70) + 0x38);
              uVar40 = *(undefined8 *)(lVar31 + 0x10);
              pcVar6 = *(code **)(*(longlong *)(lVar31 + 0x18) + 0x20);
              *(undefined1 *)(unaff_RBX + 0x6d) = 1;
              *(undefined1 *)(unaff_RBX + 0x6e) = 1;
              *(undefined1 *)(unaff_RBX + 0x6f) = 1;
              pbStack_c0 = (byte *)0x141737842;
              uVar20 = (*pcVar6)(uVar40);
              *(undefined1 *)(unaff_RBX + 0x6d) = 1;
              *(undefined1 *)(unaff_RBX + 0x6e) = 1;
              *(undefined1 *)(unaff_RBX + 0x6f) = 1;
              pbStack_c0 = (byte *)0x141737868;
              pdb_1415e6d20((byte *)(unaff_RBX + 0x1c0),unaff_RBX + 0x120);
              *(undefined8 *)(unaff_RBX + 0xd0) = *(undefined8 *)(unaff_RBX + 0x118);
              *(undefined8 *)(unaff_RBX + 0xc0) = *(undefined8 *)(unaff_RBX + 0x108);
              *(undefined8 *)(unaff_RBX + 200) = *(undefined8 *)(unaff_RBX + 0x110);
              *(undefined8 *)(unaff_RBX + 0x280) = 0;
              *(undefined8 *)(unaff_RBX + 0x288) = 0x10;
              *(undefined8 *)(unaff_RBX + 0x290) = 0;
              *(undefined1 *)(unaff_RBX + 0x6d) = 0;
              *(undefined1 *)(unaff_RBX + 0x6e) = 1;
              *(undefined1 *)(unaff_RBX + 0x6f) = 1;
              uStack_68 = (byte *)(unaff_RBX + 0x280);
              puStack_70 = (undefined *)(unaff_RBX + 0xc0);
              pbStack_c0 = (byte *)0x141737902;
              puStack_98 = (undefined *)lVar29;
              lStack_90 = lVar35;
              uStack_88 = uVar30;
              uStack_80 = uVar20;
              pbStack_78 = (byte *)(unaff_RBX + 0x1c0);
              lVar31 = pdb_1417ffee0(lVar32 + 0x10,*(undefined8 *)(unaff_RBX + 0x200),
                                     *(undefined8 *)(unaff_RBX + 0x208),0);
            }
            *(undefined8 *)(unaff_RBX + 0x280) = *(undefined8 *)(unaff_RBX + 0x98);
            *(undefined8 *)(unaff_RBX + 0x288) = *(undefined8 *)(unaff_RBX + 0xa0);
            *(undefined4 *)(unaff_RBX + 0x290) = *(undefined4 *)(unaff_RBX + 0xa8);
            *(undefined4 *)(unaff_RBX + 0x294) = *(undefined4 *)(unaff_RBX + 0xac);
            *(undefined4 *)(unaff_RBX + 0x298) = *(undefined4 *)(unaff_RBX + 0xb0);
            *(undefined4 *)(unaff_RBX + 0x29c) = *(undefined4 *)(unaff_RBX + 0xb4);
            *(longlong *)(unaff_RBX + 0x2a0) = lVar31;
            lVar35 = *(longlong *)(unaff_RBX + 0x280);
            if (lVar31 == 0 || lVar35 != 0) {
              uVar40 = *(undefined8 *)(unaff_RBX + 0x288);
              pbVar26 = *(byte **)(unaff_RBX + 0x290);
              *(undefined8 *)(unaff_RBX + 0x240) = *(undefined8 *)(unaff_RBX + 0x130);
              param_1 = *(byte **)(unaff_RBX + 0x298);
              *(undefined8 *)(unaff_RBX + 0x230) = *(undefined8 *)(unaff_RBX + 0x120);
              *(undefined8 *)(unaff_RBX + 0x238) = *(undefined8 *)(unaff_RBX + 0x128);
              if (lVar31 != 0) {
                *(undefined1 *)(unaff_RBX + 0x6d) = 0;
                *(undefined1 *)(unaff_RBX + 0x6e) = 0;
                *(undefined1 *)(unaff_RBX + 0x6f) = 0;
                pbStack_c0 = (byte *)0x141737b6d;
                pdb_1404b38e0(unaff_RBX + 0x2a0);
              }
            }
            else {
              lVar35 = *(longlong *)(*(longlong *)(unaff_RBX + 0x70) + 0x10);
              uVar40 = *(undefined8 *)(*(longlong *)(unaff_RBX + 0x70) + 0x18);
              *(undefined8 *)(unaff_RBX + 0xc0) = 1;
              *(undefined8 *)(unaff_RBX + 200) = 1;
              *(longlong *)(unaff_RBX + 0xd0) = lVar31;
              pbStack_c0 = (byte *)0x141737b9d;
              pdb_14007ee60();
              pbStack_c0 = (byte *)0x141737bac;
              pbVar26 = pub_1406abab0(0x18,8);
              if (pbVar26 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
                pbStack_c0 = (byte *)0x1417389d2;
                pdb_142dc7e11(8,0x18);
              }
              *(undefined8 *)(pbVar26 + 0x10) = *(undefined8 *)(unaff_RBX + 0xd0);
              uVar30 = *(undefined8 *)(unaff_RBX + 200);
              *(undefined8 *)pbVar26 = *(undefined8 *)(unaff_RBX + 0xc0);
              *(undefined8 *)(pbVar26 + 8) = uVar30;
              *(undefined8 *)(unaff_RBX + 0x230) = *(undefined8 *)(unaff_RBX + 0x120);
              *(undefined8 *)(unaff_RBX + 0x238) = *(undefined8 *)(unaff_RBX + 0x128);
              *(undefined8 *)(unaff_RBX + 0x240) = *(undefined8 *)(unaff_RBX + 0x130);
              if (*(longlong *)(unaff_RBX + 0x280) == 0) {
                plVar5 = *(longlong **)(unaff_RBX + 0x288);
                LOCK();
                *plVar5 = *plVar5 + -1;
                UNLOCK();
                param_1 = &UNK_14332b220;
                if (*plVar5 == 0) {
                  *(undefined1 *)(unaff_RBX + 0x6d) = 0;
                  *(undefined1 *)(unaff_RBX + 0x6e) = 0;
                  *(undefined1 *)(unaff_RBX + 0x6f) = 0;
                  pbStack_c0 = (byte *)0x141737e1b;
                  pdb_140c7a240(unaff_RBX + 0x288);
                }
              }
              else {
                plVar5 = *(longlong **)(unaff_RBX + 0x290);
                LOCK();
                *plVar5 = *plVar5 + -1;
                UNLOCK();
                param_1 = &UNK_14332b220;
                if (*plVar5 == 0) {
                  *(undefined1 *)(unaff_RBX + 0x6d) = 0;
                  *(undefined1 *)(unaff_RBX + 0x6e) = 0;
                  *(undefined1 *)(unaff_RBX + 0x6f) = 0;
                  pbStack_c0 = (byte *)0x141737c2a;
                  pdb_140c7a240(unaff_RBX + 0x290);
                }
              }
            }
            lVar31 = *(longlong *)(unaff_RBX + 0x158);
            if (lVar31 != 0) {
              lVar32 = lVar31 * 0x10 + 0x10;
              uVar25 = lVar31 + lVar32 + 0x11;
              if (uVar25 != 0) {
                pbStack_c0 = (byte *)0x141737e55;
                pub_1406abac0((byte *)(*(longlong *)(unaff_RBX + 0x150) - lVar32),uVar25,0x10);
              }
            }
            plVar5 = (longlong *)**(undefined8 **)(unaff_RBX + 0x88);
            LOCK();
            *plVar5 = *plVar5 + -1;
            UNLOCK();
            if (*plVar5 == 0) {
              *(undefined8 *)(unaff_RBX + 0x250) = *(undefined8 *)(unaff_RBX + 0x148);
              *(undefined8 *)(unaff_RBX + 600) = *(undefined8 *)(unaff_RBX + 0x140);
              pbStack_c0 = (byte *)0x141737e86;
              pdb_140dd7630();
            }
            lVar31 = *(longlong *)(unaff_RBX + 0x70);
            *(undefined2 *)(lVar31 + 0x48) = 0;
          }
          else {
            uVar40 = *(undefined8 *)(unaff_RBX + 0x1c0);
            pbVar26 = *(byte **)(unaff_RBX + 0x1c8);
            *(undefined8 *)(unaff_RBX + 0x658) = uVar40;
            *(byte **)(unaff_RBX + 0x660) = pbVar26;
            *(undefined8 *)(unaff_RBX + 0x130) = *(undefined8 *)(unaff_RBX + 0x1e0);
            *(undefined8 *)(unaff_RBX + 0x120) = *(undefined8 *)(unaff_RBX + 0x1d0);
            *(undefined8 *)(unaff_RBX + 0x128) = *(undefined8 *)(unaff_RBX + 0x1d8);
            plVar5 = plRam0000000143cad8a8;
            if (*_DAT_143ca4b08 < 2) {
              bVar21 = *(byte *)(plRam0000000143cad8a8 + 2);
              uVar25 = (ulonglong)bVar21;
              if (2 < bVar21) {
                *(undefined8 *)(unaff_RBX + 0x88) = uVar40;
                pbStack_c0 = (byte *)0x14173962b;
                uVar24 = pdb_142db8070(plRam0000000143cad8a8);
                uVar25 = (ulonglong)uVar24;
                uVar40 = *(undefined8 *)(unaff_RBX + 0x88);
                if ((char)uVar24 != '\0') goto code_r0x000141738635;
                goto code_r0x00014173963d;
              }
              if (bVar21 == 0) goto code_r0x00014173963d;
code_r0x000141738635:
              *(undefined8 *)(unaff_RBX + 0x88) = uVar40;
              pbStack_c0 = (byte *)0x141738644;
              cVar22 = pdb_140dd7f60(*plVar5);
              uVar40 = *(undefined8 *)(unaff_RBX + 0x88);
              if (cVar22 == '\0') goto code_r0x00014173963d;
              lVar35 = *plVar5;
              uVar25 = *(ulonglong *)(lVar35 + 0x38);
              if (uVar25 == 0) {
                pbStack_c0 = (byte *)0x14173a091;
                pdb_142dc8110(&UNK_14332aff8,0x22,&UNK_14332b118);
                goto code_r0x00014173a218;
              }
              uVar40 = *(undefined8 *)(lVar35 + 0x30);
              uVar30 = *(undefined8 *)(lVar35 + 0x40);
              uVar3 = *(undefined8 *)(lVar35 + 0x48);
              *(undefined8 *)(unaff_RBX + 0xc0) = uVar40;
              *(ulonglong *)(unaff_RBX + 200) = uVar25;
              *(undefined8 *)(unaff_RBX + 0xd0) = uVar30;
              *(undefined8 *)(unaff_RBX + 0xd8) = uVar3;
              *(undefined8 *)(unaff_RBX + 0xe0) = 0;
              *(undefined **)(unaff_RBX + 0x108) = &UNK_14332b130;
              *(undefined8 *)(unaff_RBX + 0x110) = 0x39;
              if (uVar25 == 1) {
                pbStack_c0 = (byte *)0x14173a0cd;
                pdb_142dc8110(&UNK_14332aff8,0x22,&UNK_14332b118);
                goto code_r0x00014173a218;
              }
              *(undefined8 *)(unaff_RBX + 0x98) = uVar40;
              *(ulonglong *)(unaff_RBX + 0xa0) = uVar25;
              *(undefined8 *)(unaff_RBX + 0xa8) = uVar30;
              *(undefined8 *)(unaff_RBX + 0xb0) = uVar3;
              *(undefined8 *)(unaff_RBX + 0xb8) = 1;
              *(longlong *)(unaff_RBX + 0x220) =
                   *(longlong *)(*(longlong *)(unaff_RBX + 0x70) + 0x38) + 0x20;
              if (uVar25 < 3) {
                pbStack_c0 = (byte *)0x14173a109;
                pdb_142dc8110(&UNK_14332aff8,0x22,&UNK_14332b118);
                goto code_r0x00014173a218;
              }
              *(undefined8 *)(unaff_RBX + 0x150) = uVar40;
              *(ulonglong *)(unaff_RBX + 0x158) = uVar25;
              *(undefined8 *)(unaff_RBX + 0x160) = uVar30;
              *(undefined8 *)(unaff_RBX + 0x168) = uVar3;
              *(undefined8 *)(unaff_RBX + 0x170) = 2;
              *(longlong *)(unaff_RBX + 0x280) = unaff_RBX + 0xc0;
              *(longlong *)(unaff_RBX + 0x288) = unaff_RBX + 0x108;
              *(undefined **)(unaff_RBX + 0x290) = &UNK_14332b058;
              *(longlong *)(unaff_RBX + 0x298) = unaff_RBX + 0x98;
              *(longlong *)(unaff_RBX + 0x2a0) = unaff_RBX + 0x220;
              *(undefined **)(unaff_RBX + 0x2a8) = &UNK_14332b078;
              *(longlong *)(unaff_RBX + 0x2b0) = unaff_RBX + 0x150;
              *(longlong *)(unaff_RBX + 0x2b8) = *(longlong *)(unaff_RBX + 0x70) + 0x10;
              *(undefined **)(unaff_RBX + 0x2c0) = &UNK_14332b098;
              *(longlong *)(unaff_RBX + 0xf0) = unaff_RBX + 0x280;
              *(undefined8 *)(unaff_RBX + 0xf8) = 3;
              *(longlong *)(unaff_RBX + 0x100) = lVar35 + 0x30;
              pbStack_c0 = (byte *)0x1417387d0;
              pdb_14173b830(unaff_RBX + 0xf0);
code_r0x000141739867:
              uVar40 = *(undefined8 *)(unaff_RBX + 0x88);
            }
            else {
code_r0x00014173963d:
              if ((*_DAT_143ca4ab0 == '\0') && (3 < *_DAT_143ca8e90)) {
                *(undefined8 *)(unaff_RBX + 0x88) = uVar40;
                plVar5 = plRam0000000143cad8a8;
                param_1 = (byte *)*plRam0000000143cad8a8;
                uVar40 = *(undefined8 *)(param_1 + 0x20);
                uVar30 = *(undefined8 *)(param_1 + 0x28);
                *(undefined8 *)(unaff_RBX + 0x610) = 4;
                *(undefined8 *)(unaff_RBX + 0x618) = uVar40;
                *(undefined8 *)(unaff_RBX + 0x620) = uVar30;
                pbStack_c0 = (byte *)0x141739691;
                uVar30 = pdb_140f33290();
                pbStack_c0 = (byte *)0x1417396a7;
                cVar22 = (**(code **)(uVar25 + 0x18))(uVar30,unaff_RBX + 0x610);
                uVar40 = *(undefined8 *)(unaff_RBX + 0x88);
                if (cVar22 != '\0') {
                  lVar35 = *plVar5;
                  uVar37 = *(ulonglong *)(lVar35 + 0x38);
                  if (uVar37 == 0) {
                    pbStack_c0 = (byte *)0x14173a1ab;
                    pdb_142dc8110(&UNK_14332aff8,0x22,&UNK_14332b118);
                    goto code_r0x00014173a218;
                  }
                  uVar40 = *(undefined8 *)(lVar35 + 0x30);
                  uVar3 = *(undefined8 *)(lVar35 + 0x40);
                  uVar4 = *(undefined8 *)(lVar35 + 0x48);
                  *(undefined8 *)(unaff_RBX + 0xc0) = uVar40;
                  *(ulonglong *)(unaff_RBX + 200) = uVar37;
                  *(undefined8 *)(unaff_RBX + 0xd0) = uVar3;
                  *(undefined8 *)(unaff_RBX + 0xd8) = uVar4;
                  *(undefined8 *)(unaff_RBX + 0xe0) = 0;
                  *(undefined **)(unaff_RBX + 0x220) = &UNK_14332b130;
                  *(undefined8 *)(unaff_RBX + 0x228) = 0x39;
                  if (uVar37 == 1) {
                    pbStack_c0 = (byte *)0x14173a1e1;
                    pdb_142dc8110(&UNK_14332aff8,0x22,&UNK_14332b118);
                    goto code_r0x00014173a218;
                  }
                  *(undefined8 *)(unaff_RBX + 0x98) = uVar40;
                  *(ulonglong *)(unaff_RBX + 0xa0) = uVar37;
                  *(undefined8 *)(unaff_RBX + 0xa8) = uVar3;
                  *(undefined8 *)(unaff_RBX + 0xb0) = uVar4;
                  *(undefined8 *)(unaff_RBX + 0xb8) = 1;
                  *(longlong *)(unaff_RBX + 0x5d8) =
                       *(longlong *)(*(longlong *)(unaff_RBX + 0x70) + 0x38) + 0x20;
                  if (uVar37 < 3) {
                    pbStack_c0 = (byte *)0x14173a217;
                    pdb_142dc8110(&UNK_14332aff8,0x22,&UNK_14332b118);
                    goto code_r0x00014173a218;
                  }
                  *(undefined8 *)(unaff_RBX + 0x150) = uVar40;
                  *(ulonglong *)(unaff_RBX + 0x158) = uVar37;
                  *(undefined8 *)(unaff_RBX + 0x160) = uVar3;
                  *(undefined8 *)(unaff_RBX + 0x168) = uVar4;
                  *(undefined8 *)(unaff_RBX + 0x170) = 2;
                  *(longlong *)(unaff_RBX + 0x280) = unaff_RBX + 0xc0;
                  *(longlong *)(unaff_RBX + 0x288) = unaff_RBX + 0x220;
                  *(undefined **)(unaff_RBX + 0x290) = &UNK_14332b058;
                  *(longlong *)(unaff_RBX + 0x298) = unaff_RBX + 0x98;
                  *(longlong *)(unaff_RBX + 0x2a0) = unaff_RBX + 0x5d8;
                  *(undefined **)(unaff_RBX + 0x2a8) = &UNK_14332b078;
                  *(longlong *)(unaff_RBX + 0x2b0) = unaff_RBX + 0x150;
                  *(longlong *)(unaff_RBX + 0x2b8) = *(longlong *)(unaff_RBX + 0x70) + 0x10;
                  *(undefined **)(unaff_RBX + 0x2c0) = &UNK_14332b098;
                  *(longlong *)(unaff_RBX + 0x108) = unaff_RBX + 0x280;
                  *(undefined8 *)(unaff_RBX + 0x110) = 3;
                  *(longlong *)(unaff_RBX + 0x118) = lVar35 + 0x30;
                  *(undefined8 *)(unaff_RBX + 0x100) = *(undefined8 *)(unaff_RBX + 0x620);
                  *(undefined8 *)(unaff_RBX + 0xf0) = *(undefined8 *)(unaff_RBX + 0x610);
                  *(undefined8 *)(unaff_RBX + 0xf8) = *(undefined8 *)(unaff_RBX + 0x618);
                  puStack_98 = (undefined *)(unaff_RBX + 0x108);
                  pbStack_c0 = (byte *)0x141739866;
                  pdb_140dd7f80(param_1,uVar30,uVar25,unaff_RBX + 0xf0);
                  goto code_r0x000141739867;
                }
              }
            }
            *(undefined8 *)(unaff_RBX + 0x240) = *(undefined8 *)(unaff_RBX + 0x130);
            *(undefined8 *)(unaff_RBX + 0x230) = *(undefined8 *)(unaff_RBX + 0x120);
            *(undefined8 *)(unaff_RBX + 0x238) = *(undefined8 *)(unaff_RBX + 0x128);
            lVar35 = 0;
            lVar31 = *(longlong *)(unaff_RBX + 0x70);
          }
          uVar25 = *(longlong *)(lVar31 + 0x38) + 0x10;
          *(longlong *)(unaff_RBX + 0x280) = lVar35;
          *(undefined8 *)(unaff_RBX + 0x288) = uVar40;
          *(byte **)(unaff_RBX + 0x290) = pbVar26;
          *(byte **)(unaff_RBX + 0x298) = param_1;
          *(undefined8 *)(unaff_RBX + 0x160) = *(undefined8 *)(unaff_RBX + 0x240);
          *(undefined8 *)(unaff_RBX + 0x150) = *(undefined8 *)(unaff_RBX + 0x230);
          *(undefined8 *)(unaff_RBX + 0x158) = *(undefined8 *)(unaff_RBX + 0x238);
          lVar35 = unaff_RBX + 0x280;
          lVar31 = unaff_RBX + 0x150;
          pbStack_c0 = (byte *)0x1417398f4;
          pdb_141746c10(unaff_RBX + 0x1c0,uVar25,lVar35,lVar31);
          plVar5 = (longlong *)(*(longlong *)(unaff_RBX + 0x70) + 0x38);
          *(undefined1 *)(*(longlong *)(unaff_RBX + 0x70) + 0x60) = 0;
          plVar28 = plRam0000000143cad8b8;
          if (*(longlong *)(unaff_RBX + 0x1c0) == 0) {
            if (*_DAT_143ca4b08 < 2) {
              bVar21 = *(byte *)(plRam0000000143cad8b8 + 2);
              uVar25 = (ulonglong)bVar21;
              if (2 < bVar21) {
                *(undefined1 *)(unaff_RBX + 0x6c) = 1;
                pbStack_c0 = (byte *)0x141739adb;
                uVar24 = pdb_142db8070(plRam0000000143cad8b8);
                uVar25 = (ulonglong)uVar24;
                if ((char)uVar24 != '\0') goto code_r0x00014173993f;
                goto code_r0x000141739ae6;
              }
              if (bVar21 == 0) goto code_r0x000141739ae6;
code_r0x00014173993f:
              lVar32 = *plVar28;
              *(undefined1 *)(unaff_RBX + 0x6c) = 1;
              pbStack_c0 = (byte *)0x14173994b;
              cVar22 = pdb_140dd7f60(lVar32);
              if (cVar22 == '\0') goto code_r0x000141739ae6;
              lVar32 = *plVar28;
              uVar25 = *(ulonglong *)(lVar32 + 0x38);
              if (uVar25 == 0) {
                *(undefined1 *)(unaff_RBX + 0x6c) = 1;
                pbStack_c0 = (byte *)0x141739f51;
                pdb_142dc8110(&UNK_14332aff8,0x22,&UNK_14332b278);
                goto code_r0x00014173a218;
              }
              uVar40 = *(undefined8 *)(lVar32 + 0x30);
              uVar30 = *(undefined8 *)(lVar32 + 0x40);
              uVar3 = *(undefined8 *)(lVar32 + 0x48);
              *(undefined8 *)(unaff_RBX + 0xc0) = uVar40;
              *(ulonglong *)(unaff_RBX + 200) = uVar25;
              *(undefined8 *)(unaff_RBX + 0xd0) = uVar30;
              *(undefined8 *)(unaff_RBX + 0xd8) = uVar3;
              *(undefined8 *)(unaff_RBX + 0xe0) = 0;
              *(undefined **)(unaff_RBX + 0x108) = &UNK_14332b290;
              *(undefined8 *)(unaff_RBX + 0x110) = 0x33;
              if (uVar25 == 1) {
                *(undefined1 *)(unaff_RBX + 0x6c) = 1;
                pbStack_c0 = (byte *)0x141739f73;
                pdb_142dc8110(&UNK_14332aff8,0x22,&UNK_14332b278);
                goto code_r0x00014173a218;
              }
              *(undefined8 *)(unaff_RBX + 0x98) = uVar40;
              *(ulonglong *)(unaff_RBX + 0xa0) = uVar25;
              *(undefined8 *)(unaff_RBX + 0xa8) = uVar30;
              *(undefined8 *)(unaff_RBX + 0xb0) = uVar3;
              *(undefined8 *)(unaff_RBX + 0xb8) = 1;
              *(longlong *)(unaff_RBX + 0x120) = *plVar5 + 0x20;
              if (uVar25 < 3) {
                *(undefined1 *)(unaff_RBX + 0x6c) = 1;
                pbStack_c0 = (byte *)0x141739f95;
                pdb_142dc8110(&UNK_14332aff8,0x22,&UNK_14332b278);
                goto code_r0x00014173a218;
              }
              *(undefined8 *)(unaff_RBX + 0x150) = uVar40;
              *(ulonglong *)(unaff_RBX + 0x158) = uVar25;
              *(undefined8 *)(unaff_RBX + 0x160) = uVar30;
              *(undefined8 *)(unaff_RBX + 0x168) = uVar3;
              *(undefined8 *)(unaff_RBX + 0x170) = 2;
              *(longlong *)(unaff_RBX + 0x280) = unaff_RBX + 0xc0;
              *(longlong *)(unaff_RBX + 0x288) = unaff_RBX + 0x108;
              *(undefined **)(unaff_RBX + 0x290) = &UNK_14332b058;
              *(longlong *)(unaff_RBX + 0x298) = unaff_RBX + 0x98;
              *(longlong *)(unaff_RBX + 0x2a0) = unaff_RBX + 0x120;
              *(undefined **)(unaff_RBX + 0x2a8) = &UNK_14332b078;
              *(longlong *)(unaff_RBX + 0x2b0) = lVar31;
              *(longlong *)(unaff_RBX + 0x2b8) = *(longlong *)(unaff_RBX + 0x70) + 0x10;
              *(undefined **)(unaff_RBX + 0x2c0) = &UNK_14332b098;
              *(longlong *)(unaff_RBX + 0xf0) = lVar35;
              *(undefined8 *)(unaff_RBX + 0xf8) = 3;
              *(longlong *)(unaff_RBX + 0x100) = lVar32 + 0x30;
              *(undefined1 *)(unaff_RBX + 0x6c) = 1;
              pbStack_c0 = (byte *)0x141739ac5;
              pdb_14173b780(unaff_RBX + 0xf0);
            }
            else {
code_r0x000141739ae6:
              plVar28 = plRam0000000143cad8b8;
              if ((*_DAT_143ca4ab0 == '\0') && (3 < *_DAT_143ca8e90)) {
                lVar32 = *plRam0000000143cad8b8;
                *(longlong *)(unaff_RBX + 0x88) = lVar32;
                uVar40 = *(undefined8 *)(lVar32 + 0x20);
                uVar30 = *(undefined8 *)(lVar32 + 0x28);
                *(undefined8 *)(unaff_RBX + 0x640) = 4;
                *(undefined8 *)(unaff_RBX + 0x648) = uVar40;
                *(undefined8 *)(unaff_RBX + 0x650) = uVar30;
                *(undefined1 *)(unaff_RBX + 0x6c) = 1;
                pbStack_c0 = (byte *)0x141739b3e;
                uVar40 = pdb_140f33290();
                pcVar6 = *(code **)(uVar25 + 0x18);
                *(undefined1 *)(unaff_RBX + 0x6c) = 1;
                pbStack_c0 = (byte *)0x141739b59;
                cVar22 = (*pcVar6)(uVar40,unaff_RBX + 0x640);
                if (cVar22 != '\0') {
                  lVar32 = *plVar28;
                  uVar37 = *(ulonglong *)(lVar32 + 0x38);
                  if (uVar37 == 0) {
                    *(undefined1 *)(unaff_RBX + 0x6c) = 1;
                    pbStack_c0 = (byte *)0x14173a12b;
                    pdb_142dc8110(&UNK_14332aff8,0x22,&UNK_14332b278);
                    goto code_r0x00014173a218;
                  }
                  uVar30 = *(undefined8 *)(lVar32 + 0x30);
                  uVar3 = *(undefined8 *)(lVar32 + 0x40);
                  uVar4 = *(undefined8 *)(lVar32 + 0x48);
                  *(undefined8 *)(unaff_RBX + 0xc0) = uVar30;
                  *(ulonglong *)(unaff_RBX + 200) = uVar37;
                  *(undefined8 *)(unaff_RBX + 0xd0) = uVar3;
                  *(undefined8 *)(unaff_RBX + 0xd8) = uVar4;
                  *(undefined8 *)(unaff_RBX + 0xe0) = 0;
                  *(undefined **)(unaff_RBX + 0x120) = &UNK_14332b290;
                  *(undefined8 *)(unaff_RBX + 0x128) = 0x33;
                  if (uVar37 == 1) {
                    *(undefined1 *)(unaff_RBX + 0x6c) = 1;
                    pbStack_c0 = (byte *)0x14173a14d;
                    pdb_142dc8110(&UNK_14332aff8,0x22,&UNK_14332b278);
                    goto code_r0x00014173a218;
                  }
                  *(undefined8 *)(unaff_RBX + 0x98) = uVar30;
                  *(ulonglong *)(unaff_RBX + 0xa0) = uVar37;
                  *(undefined8 *)(unaff_RBX + 0xa8) = uVar3;
                  *(undefined8 *)(unaff_RBX + 0xb0) = uVar4;
                  *(undefined8 *)(unaff_RBX + 0xb8) = 1;
                  *(longlong *)(unaff_RBX + 0x220) = *plVar5 + 0x20;
                  if (uVar37 < 3) {
                    *(undefined1 *)(unaff_RBX + 0x6c) = 1;
                    pbStack_c0 = (byte *)0x14173a16f;
                    pdb_142dc8110(&UNK_14332aff8,0x22,&UNK_14332b278);
                    goto code_r0x00014173a218;
                  }
                  *(undefined8 *)(unaff_RBX + 0x150) = uVar30;
                  *(ulonglong *)(unaff_RBX + 0x158) = uVar37;
                  *(undefined8 *)(unaff_RBX + 0x160) = uVar3;
                  *(undefined8 *)(unaff_RBX + 0x168) = uVar4;
                  *(undefined8 *)(unaff_RBX + 0x170) = 2;
                  *(longlong *)(unaff_RBX + 0x280) = unaff_RBX + 0xc0;
                  *(longlong *)(unaff_RBX + 0x288) = unaff_RBX + 0x120;
                  *(undefined **)(unaff_RBX + 0x290) = &UNK_14332b058;
                  *(longlong *)(unaff_RBX + 0x298) = unaff_RBX + 0x98;
                  *(longlong *)(unaff_RBX + 0x2a0) = unaff_RBX + 0x220;
                  *(undefined **)(unaff_RBX + 0x2a8) = &UNK_14332b078;
                  *(longlong *)(unaff_RBX + 0x2b0) = lVar31;
                  *(longlong *)(unaff_RBX + 0x2b8) = *(longlong *)(unaff_RBX + 0x70) + 0x10;
                  *(undefined **)(unaff_RBX + 0x2c0) = &UNK_14332b098;
                  *(longlong *)(unaff_RBX + 0x108) = lVar35;
                  *(undefined8 *)(unaff_RBX + 0x110) = 3;
                  *(longlong *)(unaff_RBX + 0x118) = lVar32 + 0x30;
                  *(undefined8 *)(unaff_RBX + 0x100) = *(undefined8 *)(unaff_RBX + 0x650);
                  *(undefined8 *)(unaff_RBX + 0xf0) = *(undefined8 *)(unaff_RBX + 0x640);
                  *(undefined8 *)(unaff_RBX + 0xf8) = *(undefined8 *)(unaff_RBX + 0x648);
                  *(undefined1 *)(unaff_RBX + 0x6c) = 1;
                  puStack_98 = (undefined *)(unaff_RBX + 0x108);
                  pbStack_c0 = (byte *)0x141739d0a;
                  pdb_140dd7f80(*(undefined8 *)(unaff_RBX + 0x88),uVar40,uVar25,unaff_RBX + 0xf0);
                }
              }
            }
            uVar40 = _UNK_14332b500;
            if (*(longlong *)(unaff_RBX + 0x1c0) == 0) {
              puStack_98 = (undefined *)(unaff_RBX + 0x1c8);
              lVar35 = *(longlong *)(*(longlong *)(unaff_RBX + 0x70) + 0x40);
              *(undefined8 *)(unaff_RBX + 0x280) = _DAT_14332b4f8;
              *(undefined8 *)(unaff_RBX + 0x288) = uVar40;
              lVar31 = *(longlong *)(*(longlong *)(unaff_RBX + 0x70) + 0x38);
              uVar40 = *(undefined8 *)(lVar31 + 0x20);
              uVar30 = *(undefined8 *)(lVar31 + 0x28);
              *(undefined1 *)(unaff_RBX + 0x6c) = 1;
              pbStack_c0 = (byte *)0x141739d59;
              pdb_141c2b710(lVar35 + 0x10,unaff_RBX + 0x280,uVar40,uVar30);
            }
          }
          *(undefined4 *)(unaff_RBX + 0x290) = *(undefined4 *)(unaff_RBX + 0x1d0);
          *(undefined4 *)(unaff_RBX + 0x294) = *(undefined4 *)(unaff_RBX + 0x1d4);
          *(undefined4 *)(unaff_RBX + 0x298) = *(undefined4 *)(unaff_RBX + 0x1d8);
          *(undefined4 *)(unaff_RBX + 0x29c) = *(undefined4 *)(unaff_RBX + 0x1dc);
          *(undefined8 *)(unaff_RBX + 0x280) = *(undefined8 *)(unaff_RBX + 0x1c0);
          *(undefined8 *)(unaff_RBX + 0x288) = *(undefined8 *)(unaff_RBX + 0x1c8);
          *(undefined1 *)(unaff_RBX + 0x6c) = 0;
          pbStack_c0 = (byte *)0x141739d8f;
          pdb_14173b990(unaff_RBX + 0x260,unaff_RBX + 0x280);
          *(longlong *)(unaff_RBX + 0x88) = *(longlong *)(unaff_RBX + 0x70) + 0x58;
          pbStack_c0 = (byte *)0x141739da4;
          pdb_141ac4fd0();
          plVar28 = (longlong *)**(undefined8 **)(unaff_RBX + 0x88);
          LOCK();
          *plVar28 = *plVar28 + -1;
          UNLOCK();
          pbVar26 = *(byte **)(unaff_RBX + 0x80);
          if (*plVar28 == 0) {
            pbStack_c0 = (byte *)0x141739dc1;
            pdb_140dd76c0();
          }
          plVar28 = (longlong *)*plVar5;
          LOCK();
          *plVar28 = *plVar28 + -1;
          UNLOCK();
          if (*plVar28 == 0) {
            pbStack_c0 = (byte *)0x141739dd3;
            pdb_140dd76c0(plVar5);
          }
          plVar5 = *(longlong **)(*(longlong *)(unaff_RBX + 0x70) + 0x40);
          LOCK();
          *plVar5 = *plVar5 + -1;
          UNLOCK();
          if (*plVar5 == 0) {
            pbStack_c0 = (byte *)0x141739def;
            pdb_140dd78e0(*(longlong *)(unaff_RBX + 0x70) + 0x40);
          }
          plVar5 = (longlong *)**(undefined8 **)(unaff_RBX + 0x70);
          if (plVar5 != (longlong *)0x0) {
            LOCK();
            *plVar5 = *plVar5 + -1;
            UNLOCK();
            if (*plVar5 == 0) {
              pbStack_c0 = (byte *)0x141739e0b;
              pdb_140c7a240(*(undefined8 *)(unaff_RBX + 0x70));
            }
          }
          goto code_r0x000141739e0c;
        }
        param_2 = *(undefined8 **)(pbVar26 + 0x58);
        pbVar26 = unaff_R13;
      } while (param_2 == (undefined8 *)0x0);
      pbVar26 = *(byte **)unaff_R13;
    } while( true );
  case 9:
code_r0x00014173f2db:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 10:
    goto code_r0x00014173f48a;
  case 0xb:
code_r0x00014173f47e:
    bVar47 = param_3 == 1;
code_r0x00014173f48a:
    if (!bVar47) {
                    /* WARNING: Subroutine does not return */
      pbStack_c0 = (byte *)0x14173f4cd;
      pdb_142dc8590(&UNK_14332bb50);
    }
                    /* WARNING: Subroutine does not return */
    pbStack_c0 = (byte *)0x14173f49f;
    pdb_142dc8570(&UNK_14332bb50);
  case 0xc:
code_r0x00014173f329:
    param_2[10] = in_XMM0_Qa;
    param_2[0xb] = in_XMM0_Qb;
    *(undefined4 *)(param_2 + 0xc) = uVar51;
    *(undefined4 *)((longlong)param_2 + 100) = uVar52;
    *(undefined4 *)(param_2 + 0xd) = in_XMM1_Dc;
    *(undefined4 *)((longlong)param_2 + 0x6c) = in_XMM1_Dd;
    *(int *)(param_2 + 0xe) = (int)in_XMM2_Qa;
    *(int *)((longlong)param_2 + 0x74) = (int)((ulonglong)in_XMM2_Qa >> 0x20);
    *(undefined4 *)(param_2 + 0xf) = in_XMM2_Dc;
    *(undefined4 *)((longlong)param_2 + 0x7c) = in_XMM2_Dd;
    *(int *)(param_2 + 0x10) = (int)param_4;
    *(int *)((longlong)param_2 + 0x84) = (int)((ulonglong)param_4 >> 0x20);
    *(undefined4 *)(param_2 + 0x11) = in_XMM3_Dc;
    *(undefined4 *)((longlong)param_2 + 0x8c) = in_XMM3_Dd;
    param_2[0x12] = in_XMM4_Qa;
    param_2[0x13] = in_XMM4_Qb;
    *(undefined1 *)(param_2 + 0x14) = 0;
    uStack_48 = _UNK_14332bd84;
    lStack_40 = _UNK_14332bd8c;
    lVar35 = param_2[0xc];
    uVar40 = param_2[0xf];
    uVar30 = param_2[0xd];
    uVar3 = param_2[0xe];
    uStackX_18 = param_2[0x10];
    uStackX_20 = param_2[0x11];
    pbStack_c0 = pbVar26;
    pdb_14098a860(&uStackX_18);
    lVar31 = lStack_40;
    uVar4 = uStack_48;
    uStack_38 = uStack_48;
    *(undefined1 *)(in_stack_00000070 + 0xa0) = 1;
    if (SBORROW8(0,lVar35)) {
      param_1[0] = 2;
      param_1[1] = 0;
      param_1[2] = 0;
      param_1[3] = 0;
      param_1[4] = 0;
      param_1[5] = 0;
      param_1[6] = 0;
      param_1[7] = 0;
      uVar20 = 3;
    }
    else {
      uStackX_18 = 1;
      uStackX_20 = 1;
      pdb_14007ee60();
      pbVar26 = pub_1406abab0(0x40,0x10);
      if (pbVar26 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
        pdb_142dc7e11(0x10,0x40);
      }
      *(undefined8 *)(pbVar26 + 0x30) = uVar3;
      *(undefined8 *)(pbVar26 + 0x38) = uVar40;
      *(longlong *)(pbVar26 + 0x20) = lVar35;
      *(undefined8 *)(pbVar26 + 0x28) = uVar30;
      *(undefined8 *)(pbVar26 + 0x10) = uVar4;
      *(longlong *)(pbVar26 + 0x18) = lVar31;
      *(undefined8 *)pbVar26 = uStackX_18;
      *(undefined8 *)(pbVar26 + 8) = uStackX_20;
      param_1[0] = 0;
      param_1[1] = 0;
      param_1[2] = 0;
      param_1[3] = 0;
      param_1[4] = 0;
      param_1[5] = 0;
      param_1[6] = 0;
      param_1[7] = 0;
      *(byte **)(param_1 + 8) = pbVar26;
      *(undefined **)(param_1 + 0x10) = &UNK_14332ba98;
      uVar20 = 1;
    }
    *(undefined1 *)(in_stack_00000070 + 0xb0) = uVar20;
    return param_1;
  case 0xe:
code_r0x00014173f6fe:
    *pbVar26 = *pbVar26 ^ bVar19;
    *pbVar26 = *pbVar26 + bVar19;
    goto code_r0x00014173f6f4;
  case 0xf:
code_r0x00014173f6f2:
    puVar42 = auStack_b8;
    if (!bVar47) {
      ppbVar41 = &pbStack_c0;
      pbStack_c0 = (byte *)0x2deb9001;
      goto code_r0x00014173f726;
    }
    goto code_r0x00014173f6f4;
  case 0x10:
code_r0x00014173f5e7:
    puStack_98 = (undefined *)CONCAT44(puStack_98._4_4_,(int)puStack_98 - iVar23);
    ppbVar41 = (byte **)auStack_b8;
code_r0x00014173f5ea:
    uVar7 = *(undefined4 *)(param_2 + 4);
    uVar8 = *(undefined4 *)((longlong)param_2 + 0x24);
    uVar9 = *(undefined4 *)(param_2 + 5);
    uVar10 = *(undefined4 *)((longlong)param_2 + 0x2c);
    uVar11 = *(undefined4 *)(param_2 + 6);
    uVar12 = *(undefined4 *)((longlong)param_2 + 0x34);
    uVar13 = *(undefined4 *)(param_2 + 7);
    uVar14 = *(undefined4 *)((longlong)param_2 + 0x3c);
    *(undefined4 *)(puVar45 + -8) = uVar7;
    *(undefined4 *)((longlong)puVar45 + -0x3c) = uVar8;
    *(undefined4 *)(puVar45 + -7) = uVar9;
    *(undefined4 *)((longlong)puVar45 + -0x34) = uVar10;
    *(undefined4 *)(puVar45 + -6) = uVar11;
    *(undefined4 *)((longlong)puVar45 + -0x2c) = uVar12;
    *(undefined4 *)(puVar45 + -5) = uVar13;
    *(undefined4 *)((longlong)puVar45 + -0x24) = uVar14;
    puVar45[8] = param_2 + 8;
    param_2[8] = in_XMM0_Qa;
    param_2[9] = in_XMM0_Qb;
    *(undefined4 *)(param_2 + 10) = uVar51;
    *(undefined4 *)((longlong)param_2 + 0x54) = uVar52;
    *(undefined4 *)(param_2 + 0xb) = in_XMM1_Dc;
    *(undefined4 *)((longlong)param_2 + 0x5c) = in_XMM1_Dd;
    *(undefined4 *)(param_2 + 0xc) = uVar7;
    *(undefined4 *)((longlong)param_2 + 100) = uVar8;
    *(undefined4 *)(param_2 + 0xd) = uVar9;
    *(undefined4 *)((longlong)param_2 + 0x6c) = uVar10;
    *(undefined4 *)(param_2 + 0xe) = uVar11;
    *(undefined4 *)((longlong)param_2 + 0x74) = uVar12;
    *(undefined4 *)(param_2 + 0xf) = uVar13;
    *(undefined4 *)((longlong)param_2 + 0x7c) = uVar14;
    *(undefined1 *)(param_2 + 0x10) = 0;
code_r0x00014173f632:
    unaff_RBX = param_2[8];
    uVar40 = param_2[9];
    uVar30 = param_2[0xb];
    puVar45[-4] = param_2[10];
    puVar45[-3] = uVar30;
    uVar30 = param_2[0xc];
    uVar3 = param_2[0xd];
    uVar51 = *(undefined4 *)((longlong)param_2 + 0x74);
    uVar52 = *(undefined4 *)(param_2 + 0xf);
    uVar7 = *(undefined4 *)((longlong)param_2 + 0x7c);
    *(undefined4 *)(puVar45 + 2) = *(undefined4 *)(param_2 + 0xe);
    *(undefined4 *)((longlong)puVar45 + 0x14) = uVar51;
    *(undefined4 *)(puVar45 + 3) = uVar52;
    *(undefined4 *)((longlong)puVar45 + 0x1c) = uVar7;
    *puVar45 = uVar30;
    puVar45[1] = uVar3;
    *(undefined8 *)((longlong)ppbVar41 + -8) = 0x14173f65a;
    pdb_14098a860(puVar45);
    puVar45[-2] = puVar45[-4];
    puVar45[-1] = puVar45[-3];
    lVar35 = puVar45[7];
    *(undefined1 *)(lVar35 + 0x80) = 1;
    if (SBORROW8(0,unaff_RBX)) {
      param_1[0] = 2;
      param_1[1] = 0;
      param_1[2] = 0;
      param_1[3] = 0;
      param_1[4] = 0;
      param_1[5] = 0;
      param_1[6] = 0;
      param_1[7] = 0;
      uVar20 = 3;
    }
    else {
      *puVar45 = puVar45[-2];
      puVar45[1] = puVar45[-1];
      *(undefined8 *)((longlong)ppbVar41 + -8) = 0x14173f68e;
      pdb_14007ee60();
      *(undefined8 *)((longlong)ppbVar41 + -8) = 0x14173f69d;
      pbVar26 = pub_1406abab0(0x30,8);
      if (pbVar26 == (byte *)0x0) {
        puVar45[5] = uVar40;
        puVar42 = (undefined1 *)ppbVar41;
code_r0x00014173f6f4:
        puVar45[8] = unaff_RBX;
                    /* WARNING: Subroutine does not return */
        *(undefined8 *)(puVar42 + -8) = 0x14173f707;
        pdb_142dc7e11(8,0x30);
      }
      pbVar26[0] = 1;
      pbVar26[1] = 0;
      pbVar26[2] = 0;
      pbVar26[3] = 0;
      pbVar26[4] = 0;
      pbVar26[5] = 0;
      pbVar26[6] = 0;
      pbVar26[7] = 0;
      pbVar26[8] = 1;
      pbVar26[9] = 0;
      pbVar26[10] = 0;
      pbVar26[0xb] = 0;
      pbVar26[0xc] = 0;
      pbVar26[0xd] = 0;
      pbVar26[0xe] = 0;
      pbVar26[0xf] = 0;
      *(longlong *)(pbVar26 + 0x10) = unaff_RBX;
      *(undefined8 *)(pbVar26 + 0x18) = uVar40;
      uVar40 = puVar45[1];
      *(undefined8 *)(pbVar26 + 0x20) = *puVar45;
      *(undefined8 *)(pbVar26 + 0x28) = uVar40;
      param_1[0] = 0;
      param_1[1] = 0;
      param_1[2] = 0;
      param_1[3] = 0;
      param_1[4] = 0;
      param_1[5] = 0;
      param_1[6] = 0;
      param_1[7] = 0;
      *(byte **)(param_1 + 8) = pbVar26;
      *(undefined **)(param_1 + 0x10) = &UNK_14332ba78;
      uVar20 = 1;
    }
    *(undefined1 *)(lVar35 + 0x88) = uVar20;
    return param_1;
  case 0x11:
code_r0x00014173f832:
    *(byte *)(unaff_RBX + 0x5f) = *(byte *)(unaff_RBX + 0x5f) & (byte)unaff_RBX;
    return pbVar26;
  case 0x12:
code_r0x00014173f99f:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x13:
code_r0x00014173f993:
    *(char *)(uVar25 + 0x1bb764585) = *(char *)(uVar25 + 0x1bb764585) + (char)unaff_R14 + bVar46;
    return param_1;
  case 0x14:
code_r0x00014173f883:
    *(char *)(param_2 + 3) = *(char *)(param_2 + 3) + -0x7c + bVar46;
    puStack_60 = (undefined8 *)param_2[5];
    uStack_58 = *(undefined4 *)(param_2 + 6);
    uStack_54 = *(undefined4 *)((longlong)param_2 + 0x34);
    uStack_68 = (byte *)CONCAT44(in_XMM1_Dd,in_XMM1_Dc);
    param_2[7] = in_XMM0_Qa;
    param_2[8] = in_XMM0_Qb;
    param_2[0xb] = uStack_68;
    param_2[0xc] = puStack_60;
    param_2[0xd] = param_2[6];
    param_2[9] = pbStack_78;
    param_2[10] = in_XMM1_Qa;
    *(undefined1 *)(param_2 + 0xe) = 0;
    lVar35 = param_2[7];
    uStack_48 = param_2[8];
    lStack_40 = param_2[9];
    uStack_38 = param_2[10];
    pbStack_c0 = (byte *)0x14173f90f;
    puStack_70 = (undefined *)in_XMM1_Qa;
    pdb_14098a860(puVar45,param_2,0xf);
    lVar31 = lStack_40;
    uVar40 = uStack_48;
    puStack_98 = (undefined *)uStack_48;
    lStack_90 = lStack_40;
    *(undefined1 *)(unaff_RBP + 0x70) = 1;
    if (SBORROW8(0,lVar35)) {
      param_1[0] = 2;
      param_1[1] = 0;
      param_1[2] = 0;
      param_1[3] = 0;
      param_1[4] = 0;
      param_1[5] = 0;
      param_1[6] = 0;
      param_1[7] = 0;
      uVar20 = 3;
    }
    else {
      uStack_38 = 1;
      pbStack_c0 = (byte *)0x14173f954;
      pdb_14007ee60();
      pbStack_c0 = (byte *)0x14173f963;
      pbVar26 = pub_1406abab0(0x28,8);
      if (pbVar26 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
        pbStack_c0 = (byte *)0x14173f9b8;
        pdb_142dc7e11(8,0x28);
      }
      *(longlong *)(pbVar26 + 0x20) = lVar31;
      *(longlong *)(pbVar26 + 0x10) = lVar35;
      *(undefined8 *)(pbVar26 + 0x18) = uVar40;
      *(undefined8 *)pbVar26 = uStack_38;
      pbVar26[8] = 1;
      pbVar26[9] = 0;
      pbVar26[10] = 0;
      pbVar26[0xb] = 0;
      pbVar26[0xc] = 0;
      pbVar26[0xd] = 0;
      pbVar26[0xe] = 0;
      pbVar26[0xf] = 0;
      param_1[0] = 0;
      param_1[1] = 0;
      param_1[2] = 0;
      param_1[3] = 0;
      param_1[4] = 0;
      param_1[5] = 0;
      param_1[6] = 0;
      param_1[7] = 0;
      *(byte **)(param_1 + 8) = pbVar26;
      *(undefined **)(param_1 + 0x10) = &UNK_14332ba58;
      uVar20 = 1;
    }
    *(undefined1 *)(unaff_RBP + 0x78) = uVar20;
    return param_1;
  case 0x15:
code_r0x00014173fabe:
    return pbVar26;
  case 0x16:
code_r0x00014173fc82:
    uVar24 = (iVar23 + -1) - (uint)bVar46;
    pcVar36 = (char *)(ulonglong)uVar24;
    *pcVar36 = *pcVar36 + (char)uVar24;
    goto code_r0x00014173fc81;
  case 0x17:
code_r0x00014173fc76:
    pbVar26 = (byte *)(ulonglong)(iVar23 + 0x1bebe3d);
    goto code_r0x00014173fc51;
  case 0x18:
code_r0x00014173fb14:
    puVar43 = auStack_b8;
    puVar44 = auStack_b8;
    if ((longlong)uVar25 < -0x14332bd84) goto code_r0x00014173fb16;
code_r0x00014173fb76:
    puVar45[0x4b] = puVar38;
    if ((int)pbVar26 != 0) {
      ppbVar41 = (byte **)puVar43;
      if ((int)pbVar26 != 1) {
        puVar45[0x49] = puVar45[0x4b];
                    /* WARNING: Subroutine does not return */
        *(undefined8 *)(puVar43 + -8) = 0x14173fcfc;
        pdb_142dc8590(&UNK_14332bb50);
      }
      goto code_r0x00014173fcad;
    }
    goto code_r0x00014173fb85;
  case 0x19:
code_r0x00014173fdb3:
    (&UNK_14332bd11)[uVar25] = (&UNK_14332bd11)[uVar25] + -0x7c;
    *pbVar26 = *pbVar26 + bVar19;
    pbStack_c0 = (byte *)0x14173fdc0;
    pbVar26 = (byte *)pdb_14098b910();
    return pbVar26;
  case 0x1a:
code_r0x000141740415:
    *pbVar26 = *pbVar26 + bVar19;
    *(char *)(param_2 + 7) = *(char *)(param_2 + 7) + (char)((ulonglong)unaff_RBX >> 8);
    goto code_r0x00014174041d;
  case 0x1b:
code_r0x000141740409:
    *pbVar26 = *pbVar26 + bVar19;
    goto code_r0x0001417403d8;
  case 0x1c:
code_r0x00014173fe4a:
    ppbVar41 = (byte **)puVar18;
    *pbVar26 = *pbVar26 + (char)pbVar26;
    *(undefined8 *)((longlong)ppbVar41 + -8) = 0x14173fe55;
    pdb_141748860(puVar38,param_2,puVar45 + 2);
    uVar40 = puVar45[0x18];
    uVar30 = puVar45[0x19];
    uVar51 = *(undefined4 *)(puVar45 + 0x1a);
    uVar52 = *(undefined4 *)((longlong)puVar45 + 0xd4);
    uVar7 = *(undefined4 *)(puVar45 + 0x1b);
    uVar8 = *(undefined4 *)((longlong)puVar45 + 0xdc);
    uVar9 = *(undefined4 *)(puVar45 + 0x1c);
    uVar10 = *(undefined4 *)((longlong)puVar45 + 0xe4);
    uVar11 = *(undefined4 *)(puVar45 + 0x1d);
    uVar12 = *(undefined4 *)((longlong)puVar45 + 0xec);
    uVar13 = *(undefined4 *)(puVar45 + 0x1e);
    uVar14 = *(undefined4 *)((longlong)puVar45 + 0xf4);
    uVar15 = *(undefined4 *)(puVar45 + 0x1f);
    uVar16 = *(undefined4 *)((longlong)puVar45 + 0xfc);
    puVar45[-10] = uVar40;
    puVar45[-9] = uVar30;
    *(undefined4 *)(puVar45 + -8) = uVar51;
    *(undefined4 *)((longlong)puVar45 + -0x3c) = uVar52;
    *(undefined4 *)(puVar45 + -7) = uVar7;
    *(undefined4 *)((longlong)puVar45 + -0x34) = uVar8;
    *(undefined4 *)(puVar45 + -6) = uVar9;
    *(undefined4 *)((longlong)puVar45 + -0x2c) = uVar10;
    *(undefined4 *)(puVar45 + -5) = uVar11;
    *(undefined4 *)((longlong)puVar45 + -0x24) = uVar12;
    *(undefined4 *)(puVar45 + -4) = uVar13;
    *(undefined4 *)((longlong)puVar45 + -0x1c) = uVar14;
    *(undefined4 *)(puVar45 + -3) = uVar15;
    *(undefined4 *)((longlong)puVar45 + -0x14) = uVar16;
    puVar45[-2] = puVar45[0x20];
    lVar35 = puVar45[0x29];
    *(undefined8 *)(lVar35 + 0x80) = puVar45[0x20];
    *(undefined4 *)(lVar35 + 0x70) = uVar13;
    *(undefined4 *)(lVar35 + 0x74) = uVar14;
    *(undefined4 *)(lVar35 + 0x78) = uVar15;
    *(undefined4 *)(lVar35 + 0x7c) = uVar16;
    *(undefined4 *)(lVar35 + 0x60) = uVar9;
    *(undefined4 *)(lVar35 + 100) = uVar10;
    *(undefined4 *)(lVar35 + 0x68) = uVar11;
    *(undefined4 *)(lVar35 + 0x6c) = uVar12;
    *(undefined4 *)(lVar35 + 0x50) = uVar51;
    *(undefined4 *)(lVar35 + 0x54) = uVar52;
    *(undefined4 *)(lVar35 + 0x58) = uVar7;
    *(undefined4 *)(lVar35 + 0x5c) = uVar8;
    *(undefined8 *)(lVar35 + 0x40) = uVar40;
    *(undefined8 *)(lVar35 + 0x48) = uVar30;
    if (*(char *)(lVar35 + 0x80) != '\0') {
      if (*(char *)(lVar35 + 0x80) != '\x01') {
                    /* WARNING: Subroutine does not return */
        *(undefined8 *)((longlong)ppbVar41 + -8) = 0x14174046a;
        pdb_142dc8590(&UNK_14332bb00);
      }
code_r0x00014174044f:
                    /* WARNING: Subroutine does not return */
      *(undefined8 *)((longlong)ppbVar41 + -8) = 0x14174045b;
      pdb_142dc8570(&UNK_14332bb00);
    }
    puVar45[0x26] = *(undefined8 *)(lVar35 + 0x40);
    uVar40 = *(undefined8 *)(lVar35 + 0x48);
    uVar25 = *(ulonglong *)(lVar35 + 0x50);
    uVar30 = *(undefined8 *)(lVar35 + 0x60);
    uVar3 = *(undefined8 *)(lVar35 + 0x68);
    uVar51 = *(undefined4 *)(lVar35 + 0x74);
    uVar52 = *(undefined4 *)(lVar35 + 0x78);
    uVar7 = *(undefined4 *)(lVar35 + 0x7c);
    *(undefined4 *)(puVar45 + 0x12) = *(undefined4 *)(lVar35 + 0x70);
    *(undefined4 *)((longlong)puVar45 + 0x94) = uVar51;
    *(undefined4 *)(puVar45 + 0x13) = uVar52;
    *(undefined4 *)((longlong)puVar45 + 0x9c) = uVar7;
    puVar45[0x10] = uVar30;
    puVar45[0x11] = uVar3;
    lVar35 = puVar45[0x10];
    puVar45[0x27] = uVar40;
    *(undefined8 *)((longlong)ppbVar41 + -8) = 0x14173ff09;
    pdb_141c2f360(puVar45 + 0x18,lVar35 + 0x10,uVar40,uVar25);
    auVar50[0] = -(*(char *)(puVar45 + 0x18) == DAT_142f5c7c0);
    auVar50[1] = -(*(char *)((longlong)puVar45 + 0xc1) == UNK_142f5c7c1);
    auVar50[2] = -(*(char *)((longlong)puVar45 + 0xc2) == UNK_142f5c7c2);
    auVar50[3] = -(*(char *)((longlong)puVar45 + 0xc3) == UNK_142f5c7c3);
    auVar50[4] = -(*(char *)((longlong)puVar45 + 0xc4) == UNK_142f5c7c4);
    auVar50[5] = -(*(char *)((longlong)puVar45 + 0xc5) == UNK_142f5c7c5);
    auVar50[6] = -(*(char *)((longlong)puVar45 + 0xc6) == UNK_142f5c7c6);
    auVar50[7] = -(*(char *)((longlong)puVar45 + 199) == UNK_142f5c7c7);
    auVar50[8] = -(*(char *)(puVar45 + 0x19) == UNK_142f5c7c8);
    auVar50[9] = -(*(char *)((longlong)puVar45 + 0xc9) == UNK_142f5c7c9);
    auVar50[10] = -(*(char *)((longlong)puVar45 + 0xca) == UNK_142f5c7ca);
    auVar50[0xb] = -(*(char *)((longlong)puVar45 + 0xcb) == UNK_142f5c7cb);
    auVar50[0xc] = -(*(char *)((longlong)puVar45 + 0xcc) == UNK_142f5c7cc);
    auVar50[0xd] = -(*(char *)((longlong)puVar45 + 0xcd) == UNK_142f5c7cd);
    auVar50[0xe] = -(*(char *)((longlong)puVar45 + 0xce) == UNK_142f5c7ce);
    auVar50[0xf] = -(*(char *)((longlong)puVar45 + 0xcf) == UNK_142f5c7cf);
    uVar40 = puVar45[0x1a];
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
                ) == 0xffff) {
      *(undefined8 *)((longlong)ppbVar41 + -8) = 0x14173ff38;
      pdb_14098a860(puVar45 + 0x10);
      uVar25 = puVar45[0x26];
      if (uVar25 != 0) {
        pbVar26 = (byte *)puVar45[0x27];
        *(undefined8 *)((longlong)ppbVar41 + -8) = 0x14173ff57;
        pub_1406abac0(pbVar26,uVar25,1);
      }
      lVar31 = puVar45[0x29];
      *(undefined1 *)(lVar31 + 0x80) = 1;
code_r0x000141740265:
      puVar45[0x18] = uVar40;
      *(undefined8 *)((longlong)ppbVar41 + -8) = 0x141740271;
      pdb_14007ee60();
      *(undefined8 *)((longlong)ppbVar41 + -8) = 0x141740280;
      pbVar26 = pub_1406abab0(8,8);
      if (pbVar26 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
        *(undefined8 *)((longlong)ppbVar41 + -8) = 0x141740363;
        pdb_142dc7e11(8,8);
      }
      *(undefined8 *)pbVar26 = uVar40;
      uVar40 = 1;
      puVar38 = &UNK_1430712c0;
    }
    else {
      puVar45[0xf] = puVar45[0x25];
      puVar45[0xd] = puVar45[0x23];
      puVar45[0xe] = puVar45[0x24];
      *(undefined4 *)(puVar45 + 0xb) = *(undefined4 *)(puVar45 + 0x21);
      *(undefined4 *)((longlong)puVar45 + 0x5c) = *(undefined4 *)((longlong)puVar45 + 0x10c);
      *(undefined4 *)(puVar45 + 0xc) = *(undefined4 *)(puVar45 + 0x22);
      *(undefined4 *)((longlong)puVar45 + 100) = *(undefined4 *)((longlong)puVar45 + 0x114);
      *(undefined4 *)(puVar45 + 9) = *(undefined4 *)(puVar45 + 0x1f);
      *(undefined4 *)((longlong)puVar45 + 0x4c) = *(undefined4 *)((longlong)puVar45 + 0xfc);
      *(undefined4 *)(puVar45 + 10) = *(undefined4 *)(puVar45 + 0x20);
      *(undefined4 *)((longlong)puVar45 + 0x54) = *(undefined4 *)((longlong)puVar45 + 0x104);
      *(undefined4 *)(puVar45 + 7) = *(undefined4 *)(puVar45 + 0x1d);
      *(undefined4 *)((longlong)puVar45 + 0x3c) = *(undefined4 *)((longlong)puVar45 + 0xec);
      *(undefined4 *)(puVar45 + 8) = *(undefined4 *)(puVar45 + 0x1e);
      *(undefined4 *)((longlong)puVar45 + 0x44) = *(undefined4 *)((longlong)puVar45 + 0xf4);
      puVar45[5] = puVar45[0x1b];
      puVar45[6] = puVar45[0x1c];
      puVar45[2] = puVar45[0x18];
      puVar45[3] = puVar45[0x19];
      puVar45[4] = uVar40;
      lVar35 = puVar45[0x11];
      if (lVar35 == 0) {
        uVar51 = (undefined4)CONCAT71((int7)((ulonglong)puVar45[0x19] >> 8),1);
      }
      else {
        unaff_R15 = lVar35 + 0x38;
        LOCK();
        bVar46 = *(char *)(lVar35 + 0x38) == '\0';
        if (bVar46) {
          *(char *)(lVar35 + 0x38) = '\x01';
        }
        UNLOCK();
        if (!bVar46) {
          *(undefined1 *)((longlong)puVar45 + 0x15f) = 1;
          *(undefined1 *)((longlong)puVar45 + 0x15e) = 1;
          *(undefined8 *)((longlong)ppbVar41 + -8) = 0x1417403b0;
          pdb_142dc6be0(unaff_R15);
        }
        puVar17 = _DAT_143ca8f38;
        if ((*_DAT_143ca8f38 & 0x7fffffffffffffff) == 0) {
          pbVar26 = (byte *)0x0;
          uVar51 = 0;
          cVar22 = *(char *)(lVar35 + 0x39);
        }
        else {
          *(undefined1 *)((longlong)puVar45 + 0x15f) = 1;
          *(undefined1 *)((longlong)puVar45 + 0x15e) = 1;
          *(undefined8 *)((longlong)ppbVar41 + -8) = 0x1417403c9;
          uVar37 = pdb_142dc79e0();
          pbVar26 = (byte *)(uVar37 ^ 1);
          uVar51 = SUB84(pbVar26,0);
          cVar22 = *(char *)(lVar35 + 0x39);
        }
        puVar44 = (undefined1 *)ppbVar41;
        if (cVar22 != '\0') {
code_r0x0001417403d8:
          puVar45[0x18] = unaff_R15;
          *(char *)(puVar45 + 0x19) = (char)pbVar26;
          *(undefined **)(puVar44 + 0x20) = &UNK_14332bae8;
                    /* WARNING: Subroutine does not return */
          *(undefined8 *)(puVar44 + -8) = 0x141740410;
          pdb_142dc8170(&UNK_14332b8d0,0x2b,puVar45 + 0x18,&UNK_14332b940);
        }
        *(undefined4 *)(puVar45 + 0x2b) = uVar51;
        puVar45[0x28] = unaff_R15;
        puVar45[0x22] = puVar45[0xc];
        puVar45[0x23] = puVar45[0xd];
        puVar45[0x20] = puVar45[10];
        puVar45[0x21] = puVar45[0xb];
        *(undefined4 *)(puVar45 + 0x1e) = *(undefined4 *)(puVar45 + 8);
        *(undefined4 *)((longlong)puVar45 + 0xf4) = *(undefined4 *)((longlong)puVar45 + 0x44);
        *(undefined4 *)(puVar45 + 0x1f) = *(undefined4 *)(puVar45 + 9);
        *(undefined4 *)((longlong)puVar45 + 0xfc) = *(undefined4 *)((longlong)puVar45 + 0x4c);
        *(undefined4 *)(puVar45 + 0x1c) = *(undefined4 *)(puVar45 + 6);
        *(undefined4 *)((longlong)puVar45 + 0xe4) = *(undefined4 *)((longlong)puVar45 + 0x34);
        *(undefined4 *)(puVar45 + 0x1d) = *(undefined4 *)(puVar45 + 7);
        *(undefined4 *)((longlong)puVar45 + 0xec) = *(undefined4 *)((longlong)puVar45 + 0x3c);
        *(undefined4 *)(puVar45 + 0x1a) = *(undefined4 *)(puVar45 + 4);
        *(undefined4 *)((longlong)puVar45 + 0xd4) = *(undefined4 *)((longlong)puVar45 + 0x24);
        *(undefined4 *)(puVar45 + 0x1b) = *(undefined4 *)(puVar45 + 5);
        *(undefined4 *)((longlong)puVar45 + 0xdc) = *(undefined4 *)((longlong)puVar45 + 0x2c);
        puVar45[0x18] = puVar45[2];
        puVar45[0x19] = puVar45[3];
        *(undefined8 *)((longlong)ppbVar41 + -8) = 0x141740071;
        pdb_1417b89d0(lVar35 + 0x40,puVar45 + 0x18);
        if ((*(char *)(puVar45 + 0x2b) == '\0') && ((*puVar17 & 0x7fffffffffffffff) != 0)) {
          *(undefined1 *)((longlong)puVar45 + 0x15f) = 0;
          *(undefined1 *)((longlong)puVar45 + 0x15e) = 1;
          *(undefined8 *)((longlong)ppbVar41 + -8) = 0x141740438;
          cVar22 = pdb_142dc79e0();
          if (cVar22 == '\0') {
            *(undefined1 *)(lVar35 + 0x39) = 1;
          }
        }
        uVar51 = 0;
        LOCK();
        cVar22 = *(char *)(lVar35 + 0x38);
        *(char *)(lVar35 + 0x38) = '\0';
        UNLOCK();
        if (cVar22 == '\x02') {
          *(undefined1 *)((longlong)puVar45 + 0x15f) = 0;
          *(undefined1 *)((longlong)puVar45 + 0x15e) = 1;
          *(undefined8 *)((longlong)ppbVar41 + -8) = 0x1417400af;
          pdb_142dc6ca0();
          uVar51 = 0;
        }
      }
      *(undefined4 *)(puVar45 + 0x2b) = uVar51;
      *puVar45 = puVar45[0x27];
      puVar45[1] = uVar25;
      puVar45[0x14] = 0;
      puVar45[0x15] = 1;
      puVar45[0x16] = 0;
      puVar45[0x1a] = 0x60000020;
      puVar45[0x18] = puVar45 + 0x14;
      puVar45[0x19] = &UNK_14332b508;
      *(undefined8 *)((longlong)ppbVar41 + -8) = 0x141740122;
      cVar22 = pdb_140f58310(puVar45,puVar45 + 0x18);
      if (cVar22 != '\0') {
        *(undefined **)((longlong)ppbVar41 + 0x20) = &UNK_14332b5e0;
                    /* WARNING: Subroutine does not return */
        *(undefined8 *)((longlong)ppbVar41 + -8) = 0x141740394;
        pdb_142dc8170(&UNK_14332b538,0x37,(longlong)puVar45 + 0x157,&UNK_14332b890);
      }
      uVar40 = puVar45[0x15];
      uVar30 = puVar45[0x16];
      lVar35 = puVar45[0xe];
      puVar45[0x28] = puVar45[0x14];
      if (lVar35 == 0) {
        pbVar26 = (byte *)0x0;
        cVar22 = *(char *)(puVar45 + 0x2b);
      }
      else {
        uVar25 = puVar45[0xf];
        puVar45[0x18] = lVar35;
        puVar45[0x19] = uVar25;
        puVar45[0x17] = uVar40;
        if (uVar25 == 0) {
          pbVar26 = (byte *)0x1;
        }
        else {
          *(undefined8 *)((longlong)ppbVar41 + -8) = 0x141740173;
          pdb_14007ee60();
          *(undefined8 *)((longlong)ppbVar41 + -8) = 0x141740180;
          pbVar26 = pub_1406abab0(uVar25,1);
          if (pbVar26 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
            *(undefined8 *)((longlong)ppbVar41 + -8) = 0x141740195;
            pdb_142dc7e11(1,uVar25);
          }
        }
        *(undefined8 *)((longlong)ppbVar41 + -8) = 0x1417401bf;
        pub_142e32760(pbVar26,lVar35 + 0x10,uVar25);
        plVar5 = (longlong *)puVar45[0x18];
        LOCK();
        *plVar5 = *plVar5 + -1;
        UNLOCK();
        if (*plVar5 == 0) {
          *(undefined8 *)((longlong)ppbVar41 + -8) = 0x1417401d8;
          pdb_1406ed6a0(puVar45 + 0x18);
        }
        uVar40 = puVar45[0x17];
        cVar22 = *(char *)(puVar45 + 0x2b);
      }
      if ((cVar22 != '\0') && (uVar37 = puVar45[10], uVar37 != 0)) {
        pbVar33 = (byte *)puVar45[0xb];
        *(undefined8 *)((longlong)ppbVar41 + -8) = 0x141740201;
        pub_1406abac0(pbVar33,uVar37,1);
      }
      *(undefined8 *)((longlong)ppbVar41 + -8) = 0x14174020e;
      pdb_14098a860(puVar45 + 0x10);
      lVar35 = puVar45[0x28];
      uVar37 = puVar45[0x26];
      if (uVar37 != 0) {
        pbVar33 = (byte *)puVar45[0x27];
        *(undefined8 *)((longlong)ppbVar41 + -8) = 0x141740234;
        pub_1406abac0(pbVar33,uVar37,1);
      }
      lVar31 = puVar45[0x29];
      *(undefined1 *)(lVar31 + 0x80) = 1;
      if (SBORROW8(0,lVar35)) goto code_r0x000141740265;
      if (lVar35 == -0x7fffffffffffffff) {
        param_1[0] = 2;
        param_1[1] = 0;
        param_1[2] = 0;
        param_1[3] = 0;
        param_1[4] = 0;
        param_1[5] = 0;
        param_1[6] = 0;
        param_1[7] = 0;
        uVar20 = 3;
        goto code_r0x0001417402a5;
      }
      puVar45[0x18] = 1;
      puVar45[0x19] = 1;
      puVar45[0x1a] = lVar35;
      puVar45[0x1b] = uVar40;
      puVar45[0x1c] = uVar30;
      puVar45[0x1d] = pbVar26;
      puVar45[0x1e] = uVar25;
      *(undefined8 *)((longlong)ppbVar41 + -8) = 0x141740301;
      pdb_14007ee60();
      *(undefined8 *)((longlong)ppbVar41 + -8) = 0x141740310;
      pbVar26 = pub_1406abab0(0x38,8);
      if (pbVar26 == (byte *)0x0) {
        puVar38 = (undefined *)0x8;
        param_2 = (undefined8 *)0x38;
code_r0x00014174041d:
                    /* WARNING: Subroutine does not return */
        *(undefined8 *)((longlong)ppbVar41 + -8) = 0x141740422;
        pdb_142dc7e11(puVar38,param_2);
      }
      *(undefined8 *)(pbVar26 + 0x30) = puVar45[0x1e];
      uVar40 = puVar45[0x18];
      uVar30 = puVar45[0x19];
      uVar3 = puVar45[0x1a];
      uVar4 = puVar45[0x1b];
      uVar2 = puVar45[0x1d];
      *(undefined8 *)(pbVar26 + 0x20) = puVar45[0x1c];
      *(undefined8 *)(pbVar26 + 0x28) = uVar2;
      *(undefined8 *)(pbVar26 + 0x10) = uVar3;
      *(undefined8 *)(pbVar26 + 0x18) = uVar4;
      *(undefined8 *)pbVar26 = uVar40;
      *(undefined8 *)(pbVar26 + 8) = uVar30;
      puVar38 = &UNK_14332ba38;
      uVar40 = 0;
    }
    *(undefined8 *)param_1 = uVar40;
    *(byte **)(param_1 + 8) = pbVar26;
    *(undefined **)(param_1 + 0x10) = puVar38;
    uVar20 = 1;
code_r0x0001417402a5:
    *(undefined1 *)(lVar31 + 0x88) = uVar20;
    return param_1;
  }
code_r0x00014173f5a7:
  ppbVar41 = (byte **)(ulonglong)((int)auStack_b8 - 0xd0);
  puVar45 = (undefined8 *)((longlong)ppbVar41 + 0x80);
  *(undefined8 *)((longlong)ppbVar41 + 200) = 0xfffffffffffffffe;
  param_1 = &UNK_14332bd84;
  bVar21 = *(byte *)(param_2 + 0x11);
  puVar38 = &UNK_14332bdb8;
  lVar35 = (longlong)*(int *)(&UNK_14332bdb8 + (ulonglong)bVar21 * 4);
  pbVar26 = &UNK_14332bdb8 + lVar35;
  *(undefined8 **)((longlong)ppbVar41 + 0xb8) = param_2;
  cVar22 = (char)pbVar26;
  puVar44 = (undefined1 *)ppbVar41;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(bVar21) {
  case 0:
    in_XMM0_Qa = *param_2;
    in_XMM0_Qb = param_2[1];
    uVar51 = *(undefined4 *)(param_2 + 2);
    uVar52 = *(undefined4 *)((longlong)param_2 + 0x14);
    in_XMM1_Dc = *(undefined4 *)(param_2 + 3);
    in_XMM1_Dd = *(undefined4 *)((longlong)param_2 + 0x1c);
    *(undefined4 *)((longlong)ppbVar41 + 0x30) = uVar51;
    *(undefined4 *)((longlong)ppbVar41 + 0x34) = uVar52;
    *(undefined4 *)((longlong)ppbVar41 + 0x38) = in_XMM1_Dc;
    *(undefined4 *)((longlong)ppbVar41 + 0x3c) = in_XMM1_Dd;
    *(undefined8 *)((longlong)ppbVar41 + 0x20) = in_XMM0_Qa;
    *(undefined8 *)((longlong)ppbVar41 + 0x28) = in_XMM0_Qb;
    goto code_r0x00014173f5ea;
  case 1:
                    /* WARNING: Subroutine does not return */
    *(undefined8 *)((longlong)ppbVar41 + -8) = 0x14173f73e;
    pdb_142dc8570(&UNK_14332ba20);
  case 2:
code_r0x00014173f726:
                    /* WARNING: Subroutine does not return */
    *(undefined8 *)((longlong)ppbVar41 + -8) = 0x14173f732;
    pdb_142dc8590(&UNK_14332ba20);
  case 3:
    cVar22 = *(char *)(param_2 + 0x10);
    *(undefined8 **)((longlong)ppbVar41 + 0xc0) = param_2 + 8;
    if (cVar22 != '\0') {
      if (cVar22 != '\x01') {
        *(undefined8 *)((longlong)ppbVar41 + 0xb0) = *(undefined8 *)((longlong)ppbVar41 + 0xc0);
                    /* WARNING: Subroutine does not return */
        *(undefined8 *)((longlong)ppbVar41 + -8) = 0x14173f752;
        pdb_142dc8590(&UNK_14332bb50);
      }
      *(undefined8 *)((longlong)ppbVar41 + 0xb0) = *(undefined8 *)((longlong)ppbVar41 + 0xc0);
                    /* WARNING: Subroutine does not return */
      *(undefined8 *)((longlong)ppbVar41 + -8) = 0x14173f723;
      pdb_142dc8570(&UNK_14332bb50);
    }
    goto code_r0x00014173f632;
  case 4:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 5:
    *(int *)(lVar35 + 0xd07aeba3) = *(int *)(lVar35 + 0xd07aeba3) + (int)param_2;
                    /* WARNING: Subroutine does not return */
    *(undefined8 *)((longlong)ppbVar41 + -8) = 0x14173f9e3;
    pdb_142dc8590();
  case 6:
    (&UNK_14332bd45)[lVar35] = (&UNK_14332bd45)[lVar35] + 'H';
                    /* WARNING: Subroutine does not return */
    *(undefined8 *)((longlong)ppbVar41 + -8) = 0x14173f9d4;
    pdb_142dc8570();
  case 7:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 8:
    param_1 = (byte *)0x4332bdb8;
    bVar21 = *(byte *)(param_2 + 0x3b);
    puVar38 = &UNK_14332bdd8;
    uVar25 = (ulonglong)*(int *)(&UNK_14332bdd8 + (ulonglong)bVar21 * 4);
    pbVar26 = &UNK_14332bdd8 + uVar25;
    *(undefined8 **)((longlong)ppbVar41 + 0x2d0) = param_2;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(bVar21) {
    case 0:
      unaff_RDI = (byte *)((longlong)ppbVar41 + 0xe0);
      break;
    case 1:
                    /* WARNING: Subroutine does not return */
      *(undefined8 *)((longlong)ppbVar41 + -8) = 0x14173fce2;
      pdb_142dc8570(&UNK_14332ba20);
    case 2:
                    /* WARNING: Subroutine does not return */
      *(undefined8 *)((longlong)ppbVar41 + -8) = 0x14173fcd6;
      pdb_142dc8590(&UNK_14332ba20);
    case 3:
      pbVar26 = (byte *)(ulonglong)*(byte *)(unaff_RBX + 0x1d0);
      puVar38 = (undefined *)(unaff_RBX + 0xe8);
      puVar43 = (undefined1 *)ppbVar41;
      goto code_r0x00014173fb76;
    case 4:
      iVar23 = *(int *)(&UNK_14332bdd8 + (longlong)pbVar26 * 4);
      *(undefined8 **)((longlong)ppbVar41 + 0x1c8) = param_2;
                    /* WARNING: Could not emulate address calculation at 0x00014173fe07 */
                    /* WARNING: Treating indirect jump as call */
      pbVar26 = (byte *)(*(code *)(&UNK_14332bdd8 + iVar23))();
      return pbVar26;
    case 5:
      *(int *)(uVar25 + 0xd07ac8e7) = *(int *)(uVar25 + 0xd07ac8e7) + (int)param_2;
      pbVar26 = (byte *)(ulonglong)((uint)pbVar26 | 0x1beb5ac);
    case 6:
      piVar1 = (int *)((ulonglong)(((uint)pbVar26 | 0x9b0d8d48) + (int)puVar45) + 1);
      *piVar1 = *piVar1 + -0x480b0f90;
                    /* WARNING: Subroutine does not return */
      *(undefined8 *)((longlong)ppbVar41 + -8) = 0x141740479;
      pdb_142dc8590(0x4332ba20);
    case 7:
      *(uint *)(param_2 + 0xe) =
           *(int *)(param_2 + 0xe) + (int)unaff_RBX + (uint)(0xfffffffebccd4227 < uVar25);
      puVar18 = (undefined1 *)ppbVar41;
      goto code_r0x00014173fe4a;
    }
    break;
  case 9:
    *pbVar26 = *pbVar26 + cVar22;
    goto code_r0x00014173fcad;
  case 10:
    *(int *)((longlong)ppbVar41 + 0xb5) = *(int *)((longlong)ppbVar41 + 0xb5) + 0x4332bd84;
code_r0x00014173fcad:
    puVar45[0x49] = puVar45[0x4b];
                    /* WARNING: Subroutine does not return */
    *(undefined8 *)((longlong)ppbVar41 + -8) = 0x14173fcc7;
    pdb_142dc8570(&UNK_14332bb50);
  case 0xb:
    *pbVar26 = *pbVar26 + cVar22;
    break;
  case 0xc:
    *pbVar26 = *pbVar26;
    (&UNK_14332bd7f)[lVar35] = (&UNK_14332bd7f)[lVar35] + -0x48;
    *pbVar26 = *pbVar26 + cVar22;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0xd:
    *(int *)(unaff_RBX + 0xf7501f8) = *(int *)(unaff_RBX + 0xf7501f8) + 1;
    goto code_r0x00014174044f;
  case 0xe:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0xf:
    *(undefined8 **)((longlong)ppbVar41 + -8) = puVar45;
    *unaff_RDI = *unaff_RDI >> 1 | *unaff_RDI << 7;
    *(int *)((longlong)ppbVar41 + 0x60) = *(int *)((longlong)ppbVar41 + 0x60) - (int)unaff_RBX;
    puVar18 = (undefined1 *)((longlong)ppbVar41 + -8);
    goto code_r0x00014173fe4a;
  }
code_r0x00014173fb16:
  puVar43 = puVar44;
  *(undefined8 *)(puVar43 + -8) = 0x14173fb27;
  pub_142e32760(unaff_RDI,uVar51,200);
  uVar40 = *(undefined8 *)(unaff_RBX + 0xd0);
  uVar51 = *(undefined4 *)(unaff_RBX + 0xd8);
  uVar52 = *(undefined4 *)(unaff_RBX + 0xdc);
  uVar7 = *(undefined4 *)(unaff_RBX + 0xe0);
  uVar8 = *(undefined4 *)(unaff_RBX + 0xe4);
  puVar45[0x25] = *(undefined8 *)(unaff_RBX + 200);
  puVar45[0x26] = uVar40;
  *(undefined4 *)(puVar45 + 0x27) = uVar51;
  *(undefined4 *)((longlong)puVar45 + 0x13c) = uVar52;
  *(undefined4 *)(puVar45 + 0x28) = uVar7;
  *(undefined4 *)((longlong)puVar45 + 0x144) = uVar8;
  puVar45[0x4b] = unaff_RBX + 0xe8;
  *(undefined8 *)(puVar43 + -8) = 0x14173fb5f;
  pub_142e32760(unaff_RBX + 0xe8,unaff_RDI,0xe8);
  *(undefined1 *)(unaff_RBX + 0x1d0) = 0;
code_r0x00014173fb85:
  lVar35 = *(longlong *)(unaff_RBX + 0xe8);
  *(undefined8 *)(puVar43 + -8) = 0x14173fba5;
  pub_142e32760(puVar45 + 0x29,unaff_RBX + 0xf0,0xc0);
  uVar40 = *(undefined8 *)(unaff_RBX + 0x1b0);
  uVar30 = *(undefined8 *)(unaff_RBX + 0x1b8);
  uVar51 = *(undefined4 *)(unaff_RBX + 0x1c4);
  uVar52 = *(undefined4 *)(unaff_RBX + 0x1c8);
  uVar7 = *(undefined4 *)(unaff_RBX + 0x1cc);
  *(undefined4 *)(puVar45 + 0x46) = *(undefined4 *)(unaff_RBX + 0x1c0);
  *(undefined4 *)((longlong)puVar45 + 0x234) = uVar51;
  *(undefined4 *)(puVar45 + 0x47) = uVar52;
  *(undefined4 *)((longlong)puVar45 + 0x23c) = uVar7;
  puVar45[0x44] = uVar40;
  puVar45[0x45] = uVar30;
  *(undefined8 *)(puVar43 + -8) = 0x14173fbcd;
  pdb_14098a860(puVar45 + 0x44);
  *(undefined8 *)(puVar43 + -8) = 0x14173fbe4;
  pub_142e32760(puVar45 + -0xc,puVar45 + 0x29,0xc0);
  unaff_RBX = puVar45[0x4a];
  *(undefined1 *)(unaff_RBX + 0x1d0) = 1;
  if (SBORROW8(0,lVar35)) {
    param_1[0] = 2;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[4] = 0;
    param_1[5] = 0;
    param_1[6] = 0;
    param_1[7] = 0;
    pcVar36 = (char *)0x3;
  }
  else {
    *(undefined8 *)(puVar43 + -8) = 0x14173fc1b;
    pub_142e32760(puVar45 + 0x2c,puVar45 + -0xc,0xc0);
    puVar45[0x29] = 1;
    puVar45[0x2a] = 1;
    puVar45[0x2b] = lVar35;
    *(undefined8 *)(puVar43 + -8) = 0x14173fc3d;
    pdb_14007ee60();
    *(undefined8 *)(puVar43 + -8) = 0x14173fc4c;
    pbVar26 = pub_1406abab0(0xd8,8);
    if (pbVar26 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
      *(undefined8 *)(puVar43 + -8) = 0x14173fca5;
      pdb_142dc7e11(8,0xd8);
    }
code_r0x00014173fc51:
    *(undefined8 *)(puVar43 + -8) = 0x14173fc69;
    pub_142e32760(pbVar26,puVar45 + 0x29,0xd8);
    param_1[0] = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[4] = 0;
    param_1[5] = 0;
    param_1[6] = 0;
    param_1[7] = 0;
    *(byte **)(param_1 + 8) = pbVar26;
    *(undefined **)(param_1 + 0x10) = &UNK_14332bab8;
    pcVar36 = (char *)0x1;
  }
code_r0x00014173fc81:
  *(char *)(unaff_RBX + 0x1d8) = (char)pcVar36;
  return param_1;
}

