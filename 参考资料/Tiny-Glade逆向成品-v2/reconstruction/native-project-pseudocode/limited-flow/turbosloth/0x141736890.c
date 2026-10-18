// VA 0x141736890, PDB extent 632 bytes
// turbosloth::asset::impl$44::build::async_block$3<clutter_pack_pipe::ClutterMeshAsset,turbosloth::asset::BuildContext>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/turbosloth/src/asset.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Instruction at (ram,0x0001417403d9) overlaps instruction at (ram,0x0001417403d8)
    */
/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x00014173f5eb) */
/* WARNING: Removing unreachable block (ram,0x00014173f8bf) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   turbosloth::asset::impl$44::build::async_block$3<clutter_pack_pipe::ClutterMeshAsset,turbosloth::asset::BuildContext>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/turbosloth/src/asset.rs
   Extent: 632 */

uint * pdb_141736890(uint *param_1,char *param_2,uint *param_3,undefined8 param_4)

{
  int *piVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  longlong *plVar7;
  byte *pbVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined1 *puVar13;
  undefined1 *puVar14;
  undefined1 *puVar15;
  undefined1 *puVar16;
  undefined1 *puVar17;
  undefined1 *puVar18;
  undefined1 *puVar19;
  undefined1 uVar20;
  byte bVar21;
  char cVar22;
  uint uVar23;
  uint *puVar24;
  code *UNRECOVERED_JUMPTABLE;
  undefined1 (*pauVar25) [16];
  longlong *plVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  longlong lVar29;
  longlong lVar30;
  char *pcVar31;
  uint *puVar32;
  char *pcVar33;
  uint *extraout_RAX;
  longlong lVar34;
  byte *pbVar35;
  uint *puVar36;
  undefined *puVar37;
  undefined1 (*arg1) [16];
  undefined1 (*pauVar38) [16];
  ulonglong uVar39;
  char *pcVar40;
  undefined8 uVar41;
  char cVar42;
  char *unaff_RBX;
  undefined1 *puVar43;
  undefined1 *puVar44;
  undefined1 *puVar45;
  undefined1 *puVar46;
  undefined1 *puVar47;
  undefined1 *puVar48;
  undefined1 *puVar49;
  undefined1 *puVar50;
  undefined1 *puVar51;
  undefined1 *puVar52;
  undefined8 *puVar53;
  undefined1 *puVar54;
  undefined1 *puVar55;
  undefined1 *puVar56;
  undefined8 *puVar57;
  undefined1 *puVar58;
  char *pcVar59;
  undefined1 *puVar60;
  ulonglong *puVar61;
  uint *unaff_RDI;
  uint *puVar62;
  uint *puVar63;
  char *in_R11;
  ulonglong unaff_R12;
  uint *unaff_R13;
  uint *unaff_R14;
  byte *unaff_R15;
  bool bVar64;
  bool bVar65;
  unkbyte10 in_ST0;
  undefined8 in_XMM0_Qa;
  undefined8 in_XMM0_Qb;
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined4 uVar69;
  undefined8 in_XMM1_Qa;
  undefined4 uVar70;
  undefined4 in_XMM1_Dc;
  undefined4 in_XMM1_Dd;
  undefined4 uVar71;
  undefined8 in_XMM2_Qa;
  undefined4 uVar72;
  undefined4 in_XMM2_Dc;
  undefined4 in_XMM2_Dd;
  undefined4 uVar73;
  undefined4 uVar74;
  undefined4 in_XMM3_Dc;
  undefined4 in_XMM3_Dd;
  undefined8 in_XMM4_Qa;
  undefined8 in_XMM4_Qb;
  byte *unaff_XMM6_Qa;
  undefined *unaff_XMM6_Qb;
  undefined1 auStack_b8 [104];
  undefined8 uStack_50;
  char acStack_38 [8];
  
  uVar74 = (undefined4)((ulonglong)param_4 >> 0x20);
  uVar73 = (undefined4)param_4;
  uVar72 = (undefined4)((ulonglong)in_XMM2_Qa >> 0x20);
  uVar71 = (undefined4)in_XMM2_Qa;
  uVar70 = (undefined4)((ulonglong)in_XMM1_Qa >> 0x20);
  uVar69 = (undefined4)in_XMM1_Qa;
  pcVar59 = auStack_b8;
  pcVar40 = acStack_38;
  uStack_50 = 0xfffffffffffffffe;
  puVar36 = (uint *)&UNK_14332bd54;
  puVar24 = (uint *)(&UNK_14332bd54 + *(int *)(&UNK_14332bd54 + (ulonglong)(byte)param_2[0x30] * 4))
  ;
  bVar64 = puVar24 == (uint *)0x0;
  puVar58 = auStack_b8;
  puVar13 = auStack_b8;
  puVar55 = auStack_b8;
  puVar60 = auStack_b8;
  puVar49 = auStack_b8;
  puVar14 = auStack_b8;
  puVar15 = auStack_b8;
  puVar16 = auStack_b8;
  puVar56 = auStack_b8;
  puVar54 = auStack_b8;
  puVar17 = auStack_b8;
  puVar52 = auStack_b8;
  puVar18 = auStack_b8;
  puVar51 = auStack_b8;
  puVar50 = auStack_b8;
  puVar19 = auStack_b8;
  puVar47 = auStack_b8;
  puVar48 = auStack_b8;
  puVar45 = auStack_b8;
  puVar46 = auStack_b8;
  puVar43 = auStack_b8;
  puVar44 = auStack_b8;
  puVar32 = param_1;
  puVar62 = unaff_RDI;
  puVar63 = param_3;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(param_2[0x30]) {
  case '\0':
code_r0x0001417368ce:
    *(char **)(param_2 + 0x20) = param_2;
    param_2[0x28] = '\0';
    param_2[0x29] = '\0';
    param_2[0x2a] = '\0';
    param_2[0x2b] = '\0';
    param_2[0x2c] = '\0';
    param_2[0x2d] = '\0';
    param_2[0x2e] = '\0';
    param_2[0x2f] = '\0';
    puVar44 = puVar43;
  case '\x03':
code_r0x0001417368da:
    *(char **)(pcVar40 + -0x28) = param_2;
    *(char **)(pcVar40 + -0x30) = param_2 + 0x20;
    *(undefined8 *)(puVar44 + -8) = 0x1417368f3;
    pdb_140b35ec0(pcVar40 + -0x58,param_2 + 0x20,pcVar40 + -0x19);
    lVar34 = *(longlong *)(pcVar40 + -0x58);
    if (lVar34 == 2) {
      uVar20 = 3;
      uVar41 = 1;
    }
    else {
      uVar41 = *(undefined8 *)(pcVar40 + -0x50);
      uVar27 = *(undefined8 *)(pcVar40 + -0x48);
      pbVar35 = *(byte **)(pcVar40 + -0x40);
      puVar37 = *(undefined **)(pcVar40 + -0x38);
      lVar29 = *(longlong *)(pcVar40 + -0x28);
      if (*(longlong *)(lVar29 + 0x28) != 0) {
        *(longlong *)(pcVar40 + -0x30) = *(longlong *)(lVar29 + 0x28);
        *(undefined8 *)(puVar44 + -8) = 0x14173692d;
        pdb_140974580();
        pbVar8 = *(byte **)(pcVar40 + -0x30);
        *(undefined8 *)(puVar44 + -8) = 0x141736942;
        pub_1406abac0(pbVar8,0x38,8);
        lVar29 = *(longlong *)(pcVar40 + -0x28);
      }
      if ((int)lVar34 == 1) {
        uVar41 = *(undefined8 *)(lVar29 + 0x10);
        uVar27 = *(undefined8 *)(lVar29 + 0x18);
        *(undefined8 *)(puVar44 + -8) = 0x141736959;
        pdb_14007ee60();
        *(undefined8 *)(puVar44 + -8) = 0x141736968;
        pbVar35 = pub_1406abab0(0x10,8);
        if (pbVar35 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
          *(undefined8 *)(puVar44 + -8) = 0x1417369db;
          pdb_142dc7e11(8,0x10);
        }
        pbVar35[0] = 1;
        pbVar35[1] = 0;
        pbVar35[2] = 0;
        pbVar35[3] = 0;
        pbVar35[4] = 0;
        pbVar35[5] = 0;
        pbVar35[6] = 0;
        pbVar35[7] = 0;
        pbVar35[8] = 1;
        pbVar35[9] = 0;
        pbVar35[10] = 0;
        pbVar35[0xb] = 0;
        pbVar35[0xc] = 0;
        pbVar35[0xd] = 0;
        pbVar35[0xe] = 0;
        pbVar35[0xf] = 0;
        puVar37 = &UNK_14332b300;
      }
      *(undefined8 *)(puVar44 + -8) = 0x141736999;
      pdb_14097d2c0();
      *(undefined8 *)(param_1 + 2) = uVar41;
      *(undefined8 *)(param_1 + 4) = uVar27;
      *(byte **)(param_1 + 6) = pbVar35;
      *(undefined **)(param_1 + 8) = puVar37;
      uVar20 = 1;
      uVar41 = 0;
    }
    lVar34 = *(longlong *)(pcVar40 + -0x28);
    *(undefined8 *)param_1 = uVar41;
    *(undefined1 *)(lVar34 + 0x30) = uVar20;
    return param_1;
  case '\x01':
code_r0x0001417369ea:
                    /* WARNING: Subroutine does not return */
    *(undefined8 *)(puVar46 + -8) = 0x1417369f6;
    pdb_142dc8570(&UNK_14332b2c8);
  case '\x02':
code_r0x0001417369de:
                    /* WARNING: Subroutine does not return */
    *(undefined8 *)(puVar45 + -8) = 0x1417369ea;
    pdb_142dc8590(&UNK_14332b2c8);
  case '\x04':
code_r0x000141736b3e:
    UNRECOVERED_JUMPTABLE =
         (code *)(&UNK_14332bd64 + *(int *)(&UNK_14332bd64 + (longlong)puVar24 * 4));
    goto code_r0x000141736b4c;
  case '\x05':
code_r0x000141736c5a:
    *(int *)((longlong)puVar24 + -0x72b7f4f1) =
         *(int *)((longlong)puVar24 + -0x72b7f4f1) + (int)param_2;
                    /* WARNING: Subroutine does not return */
    *(undefined8 *)(puVar48 + -8) = 0x141736c6a;
    pdb_142dc8590();
  case '\x06':
code_r0x000141736c4e:
    *(byte *)puVar24 = (byte)*puVar24 + (char)puVar24;
    param_2[0x10] = param_2[0x10] + (char)((ulonglong)unaff_RBX >> 8);
                    /* WARNING: Subroutine does not return */
    *(undefined8 *)(puVar47 + -8) = 0x141736c5b;
    pdb_142dc7e11();
  case '\a':
code_r0x000141736b4a:
    UNRECOVERED_JUMPTABLE = (code *)(ulonglong)(uint)((int)puVar24 + (int)puVar36);
code_r0x000141736b4c:
                    /* WARNING: Could not recover jumptable at 0x000141736b4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    puVar32 = (uint *)(*UNRECOVERED_JUMPTABLE)();
    return puVar32;
  case '\b':
code_r0x000141736dae:
                    /* WARNING: Call to offcut address within same function */
    *(undefined8 *)(puVar49 + -8) = 0x141736db4;
    in_XMM0_Qa = func_0x000141736db2();
    puVar14 = puVar49;
    param_1 = puVar36;
    puVar62 = unaff_RDI;
    puVar63 = param_3;
    in_XMM0_Qb = extraout_XMM0_Qb;
code_r0x000141736dba:
    pcVar59 = puVar14;
    puVar36 = (uint *)&UNK_14332bd74;
    uVar39 = (ulonglong)*(int *)(&UNK_14332bd74 + (ulonglong)(byte)param_2[0x30] * 4);
    puVar24 = (uint *)(&UNK_14332bd74 + uVar39);
    bVar64 = puVar24 == (uint *)0x0;
    cVar22 = (char)puVar24;
    uVar23 = (uint)puVar24;
    cVar42 = (char)((ulonglong)unaff_RBX >> 8);
    unaff_RDI = param_1;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(param_2[0x30]) {
    case '\0':
      *(char **)(param_2 + 0x20) = param_2;
      param_2[0x28] = '\0';
      param_2[0x29] = '\0';
      param_2[0x2a] = '\0';
      param_2[0x2b] = '\0';
      param_2[0x2c] = '\0';
      param_2[0x2d] = '\0';
      param_2[0x2e] = '\0';
      param_2[0x2f] = '\0';
    case '\x03':
      *(char **)(pcVar40 + -0x28) = param_2;
      *(char **)(pcVar40 + -0x30) = param_2 + 0x20;
      *(undefined8 *)(pcVar59 + -8) = 0x141736df3;
      pdb_140b34640(pcVar40 + -0x58,param_2 + 0x20,pcVar40 + -0x19);
      lVar34 = *(longlong *)(pcVar40 + -0x58);
      if (lVar34 == 2) {
        uVar20 = 3;
        uVar41 = 1;
      }
      else {
        uVar41 = *(undefined8 *)(pcVar40 + -0x50);
        uVar27 = *(undefined8 *)(pcVar40 + -0x48);
        pbVar35 = *(byte **)(pcVar40 + -0x40);
        puVar37 = *(undefined **)(pcVar40 + -0x38);
        lVar29 = *(longlong *)(pcVar40 + -0x28);
        if (*(longlong *)(lVar29 + 0x28) != 0) {
          *(longlong *)(pcVar40 + -0x30) = *(longlong *)(lVar29 + 0x28);
          *(undefined8 *)(pcVar59 + -8) = 0x141736e2d;
          pdb_140974580();
          pbVar8 = *(byte **)(pcVar40 + -0x30);
          *(undefined8 *)(pcVar59 + -8) = 0x141736e42;
          pub_1406abac0(pbVar8,0x38,8);
          lVar29 = *(longlong *)(pcVar40 + -0x28);
        }
        if ((int)lVar34 == 1) {
          uVar41 = *(undefined8 *)(lVar29 + 0x10);
          uVar27 = *(undefined8 *)(lVar29 + 0x18);
          *(undefined8 *)(pcVar59 + -8) = 0x141736e59;
          pdb_14007ee60();
          *(undefined8 *)(pcVar59 + -8) = 0x141736e68;
          pbVar35 = pub_1406abab0(0x10,8);
          if (pbVar35 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
            *(undefined8 *)(pcVar59 + -8) = 0x141736edb;
            pdb_142dc7e11(8,0x10);
          }
          pbVar35[0] = 1;
          pbVar35[1] = 0;
          pbVar35[2] = 0;
          pbVar35[3] = 0;
          pbVar35[4] = 0;
          pbVar35[5] = 0;
          pbVar35[6] = 0;
          pbVar35[7] = 0;
          pbVar35[8] = 1;
          pbVar35[9] = 0;
          pbVar35[10] = 0;
          pbVar35[0xb] = 0;
          pbVar35[0xc] = 0;
          pbVar35[0xd] = 0;
          pbVar35[0xe] = 0;
          pbVar35[0xf] = 0;
          puVar37 = &UNK_14332b300;
        }
        *(undefined8 *)(pcVar59 + -8) = 0x141736e99;
        pdb_14097afe0();
        *(undefined8 *)(param_1 + 2) = uVar41;
        *(undefined8 *)(param_1 + 4) = uVar27;
        *(byte **)(param_1 + 6) = pbVar35;
        *(undefined **)(param_1 + 8) = puVar37;
        uVar20 = 1;
        uVar41 = 0;
      }
      lVar34 = *(longlong *)(pcVar40 + -0x28);
      *(undefined8 *)param_1 = uVar41;
      *(undefined1 *)(lVar34 + 0x30) = uVar20;
      return param_1;
    case '\x01':
                    /* WARNING: Subroutine does not return */
      *(undefined8 *)(pcVar59 + -8) = 0x141736ef6;
      pdb_142dc8570(&UNK_14332b2c8);
    case '\x02':
                    /* WARNING: Subroutine does not return */
      *(undefined8 *)(pcVar59 + -8) = 0x141736eea;
      pdb_142dc8590(&UNK_14332b2c8);
    case '\x04':
      goto code_r0x00014173703e;
    case '\x05':
      *(int *)(uVar39 + 0xd07ac883) = *(int *)(uVar39 + 0xd07ac883) + (int)param_2;
code_r0x00014173715e:
                    /* WARNING: Subroutine does not return */
      *(undefined8 *)(pcVar59 + -8) = 0x14173716a;
      pdb_142dc8590(&UNK_14332b2c8);
    case '\x06':
      *(byte *)puVar24 = (byte)*puVar24 + cVar22;
      param_2[0x10] = param_2[0x10] + cVar42;
      goto code_r0x000141737156;
    case '\a':
      puVar24 = (uint *)(ulonglong)(uVar23 + 0x4332bd74);
code_r0x00014173703e:
      unaff_RDI = puVar62;
      puVar36 = (uint *)&UNK_14332bd84;
      uVar39 = (ulonglong)*(int *)(&UNK_14332bd84 + (longlong)puVar24 * 4);
      bVar64 = 0xfffffffebccd427b < uVar39;
      puVar24 = (uint *)(&UNK_14332bd84 + uVar39);
      bVar65 = puVar24 == (uint *)0x0;
      bVar21 = (byte)puVar24;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
      switch(puVar24) {
      case (uint *)0x14173704e:
        *(char **)(param_2 + 0x20) = param_2;
        param_2[0x28] = '\0';
        param_2[0x29] = '\0';
        param_2[0x2a] = '\0';
        param_2[0x2b] = '\0';
        param_2[0x2c] = '\0';
        param_2[0x2d] = '\0';
        param_2[0x2e] = '\0';
        param_2[0x2f] = '\0';
      case (uint *)0x14173705a:
        *(char **)(pcVar40 + -0x28) = param_2;
        *(char **)(pcVar40 + -0x30) = param_2 + 0x20;
        *(undefined8 *)(pcVar59 + -8) = 0x141737073;
        pdb_140b34f70(pcVar40 + -0x58,param_2 + 0x20,pcVar40 + -0x19);
        unaff_R14 = *(uint **)(pcVar40 + -0x58);
        if (unaff_R14 == (uint *)0x2) {
          puVar24 = (uint *)0x3;
          puVar36 = (uint *)0x1;
          goto code_r0x00014173712b;
        }
        unaff_RDI = *(uint **)(pcVar40 + -0x50);
        unaff_RBX = *(char **)(pcVar40 + -0x48);
        unaff_XMM6_Qa = *(byte **)(pcVar40 + -0x40);
        unaff_XMM6_Qb = *(undefined **)(pcVar40 + -0x38);
        unaff_R15 = *(byte **)(pcVar40 + -0x28);
        puVar36 = *(uint **)(unaff_R15 + 0x28);
        bVar64 = puVar36 == (uint *)0x0;
        goto code_r0x0001417370a2;
      case (uint *)0x14173715e:
        goto code_r0x00014173715e;
      case (uint *)0x14173716a:
                    /* WARNING: Subroutine does not return */
        *(undefined8 *)(pcVar59 + -8) = 0x141737176;
        pdb_142dc8570(&UNK_14332b2c8);
      case (uint *)0x1417372e3:
        unaff_RDI = (uint *)0xc801488104634801;
        puVar32 = puVar36;
code_r0x0001417372ed:
        puVar36 = puVar32;
        *(char **)(unaff_RBX + 0x70) = param_2;
        bVar21 = (byte)puVar36;
        cVar22 = (char)puVar24;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
        switch(puVar24) {
        case (uint *)0x1417372f3:
          in_R11[0x48] = '\0';
          in_R11[0x49] = '\0';
          unaff_R12 = *(ulonglong *)(in_R11 + 0x38);
          unaff_R14 = (uint *)(unaff_R12 + 0x30);
          LOCK();
          bVar64 = *(int *)(unaff_R12 + 0x30) == 0;
          if (bVar64) {
            *(int *)(unaff_R12 + 0x30) = 0x3fffffff;
          }
          UNLOCK();
          if (!bVar64) {
            *(undefined8 *)(pcVar59 + -8) = 0x1417387ec;
            pdb_142dc6e70(unaff_R14);
          }
          puVar61 = _DAT_143ca8f38;
          if ((*_DAT_143ca8f38 & 0x7fffffffffffffff) == 0) {
            unaff_R15 = (byte *)0x0;
            bVar21 = 0;
            cVar22 = *(char *)(unaff_R12 + 0x38);
            lVar34 = *(longlong *)(unaff_RBX + 0x70);
          }
          else {
            *(undefined8 *)(pcVar59 + -8) = 0x1417387f7;
            bVar21 = pdb_142dc79e0();
            bVar21 = bVar21 ^ 1;
            unaff_R15 = (byte *)(ulonglong)bVar21;
            cVar22 = *(char *)(unaff_R12 + 0x38);
            lVar34 = *(longlong *)(unaff_RBX + 0x70);
          }
          if (cVar22 != '\0') {
            *(uint **)(unaff_RBX + 0x280) = unaff_R14;
            unaff_RBX[0x288] = bVar21;
            *(undefined **)(pcVar59 + 0x20) = &UNK_14332afe0;
                    /* WARNING: Subroutine does not return */
            *(undefined8 *)(pcVar59 + -8) = 0x14173884a;
            pdb_142dc8170(&UNK_14332b8d0,0x2b,unaff_RBX + 0x280,&UNK_14332b960);
          }
          *(uint **)(unaff_RBX + 0x98) = unaff_R14;
          cVar22 = (char)unaff_R15;
          unaff_RBX[0xa0] = cVar22;
          plVar26 = *(longlong **)(unaff_R12 + 0x70);
          if (plVar26 == (longlong *)0x0) {
            if (SBORROW8(0,*(longlong *)(unaff_R12 + 0x58))) {
              *(undefined8 *)(unaff_R12 + 0x58) = 0;
              *(undefined8 *)(unaff_R12 + 0x60) = 8;
              *(undefined8 *)(unaff_R12 + 0x68) = 0;
              *(undefined8 *)(lVar34 + 0x20) = 2;
              goto code_r0x000141737fb6;
            }
            unaff_RBX[0x280] = '\x01';
            unaff_RBX[0x281] = '\0';
            unaff_RBX[0x282] = '\0';
            unaff_RBX[0x283] = '\0';
            unaff_RBX[0x284] = '\0';
            unaff_RBX[0x285] = '\0';
            unaff_RBX[0x286] = '\0';
            unaff_RBX[0x287] = '\0';
            unaff_RBX[0x288] = '\x01';
            unaff_RBX[0x289] = '\0';
            unaff_RBX[0x28a] = '\0';
            unaff_RBX[0x28b] = '\0';
            unaff_RBX[0x28c] = '\0';
            unaff_RBX[0x28d] = '\0';
            unaff_RBX[0x28e] = '\0';
            unaff_RBX[0x28f] = '\0';
            unaff_RBX[0x300] = '\0';
            unaff_RBX[0x301] = '\0';
            unaff_RBX[0x302] = '\0';
            unaff_RBX[0x303] = '\0';
            unaff_RBX[0x304] = '\0';
            unaff_RBX[0x305] = '\0';
            unaff_RBX[0x306] = '\0';
            unaff_RBX[0x307] = '\0';
            unaff_RBX[0x328] = '\0';
            unaff_RBX[0x329] = '\0';
            unaff_RBX[0x32a] = '\0';
            unaff_RBX[0x32b] = '\0';
            unaff_RBX[0x32c] = '\0';
            unaff_RBX[0x32d] = '\0';
            unaff_RBX[0x32e] = '\0';
            unaff_RBX[0x32f] = '\0';
            *(undefined1 (*) [16])(unaff_RBX + 0x500) = (undefined1  [16])0x0;
            unaff_RBX[0x510] = '\0';
            unaff_RBX[0x511] = '\0';
            unaff_RBX[0x512] = '\0';
            unaff_RBX[0x513] = '\0';
            unaff_RBX[0x514] = '\0';
            unaff_RBX[0x515] = '\0';
            unaff_RBX[0x516] = '\0';
            unaff_RBX[0x517] = '\0';
            unaff_RBX[0x518] = '\x01';
            unaff_RBX[0x519] = '\0';
            unaff_RBX[0x51a] = '\0';
            unaff_RBX[0x51b] = '\0';
            unaff_RBX[0x51c] = '\0';
            unaff_RBX[0x51d] = '\0';
            unaff_RBX[0x51e] = '\0';
            unaff_RBX[0x51f] = '\0';
            unaff_RBX[0x520] = '\x01';
            unaff_RBX[0x521] = '\0';
            unaff_RBX[0x522] = '\0';
            unaff_RBX[0x523] = '\0';
            unaff_RBX[0x524] = '\0';
            unaff_RBX[0x525] = '\0';
            unaff_RBX[0x526] = '\0';
            unaff_RBX[0x527] = '\0';
            *(undefined8 *)(pcVar59 + -8) = 0x141737d42;
            pdb_14007ee60();
            *(undefined8 *)(pcVar59 + -8) = 0x141737d51;
            pbVar35 = pub_1406abab0(0x300,0x80);
            if (pbVar35 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
              *(undefined8 *)(pcVar59 + -8) = 0x141738983;
              pdb_142dc7e11(0x80,0x300);
            }
            *(uint **)(unaff_RBX + 0x80) = unaff_RDI;
            *(undefined8 *)(pcVar59 + -8) = 0x141737d79;
            pub_142e32760(pbVar35,unaff_RBX + 0x280,0x300);
            LOCK();
            lVar34 = *(longlong *)pbVar35;
            *(longlong *)pbVar35 = *(longlong *)pbVar35 + 1;
            UNLOCK();
            if (*(longlong *)pbVar35 == 0 || SCARRY8(lVar34,1) != *(longlong *)pbVar35 < 0)
            goto code_r0x00014173a218;
            *(byte **)(unaff_RBX + 0x280) = pbVar35;
            unaff_RBX[0x288] = '\0';
            unaff_RBX[0x289] = '\0';
            unaff_RBX[0x28a] = '\0';
            unaff_RBX[0x28b] = '\0';
            unaff_RBX[0x28c] = '\0';
            unaff_RBX[0x28d] = '\0';
            unaff_RBX[0x28e] = '\0';
            unaff_RBX[0x28f] = '\0';
            *(byte **)(unaff_RBX + 0x150) = pbVar35;
            lVar34 = *(longlong *)(unaff_R12 + 0x68);
            if (lVar34 == *(longlong *)(unaff_R12 + 0x58)) {
              *(undefined8 *)(pcVar59 + -8) = 0x141737db2;
              pdb_142d7e8a0(unaff_R12 + 0x58);
            }
            *(byte **)(*(longlong *)(unaff_R12 + 0x60) + lVar34 * 8) = pbVar35;
            *(longlong *)(unaff_R12 + 0x68) = lVar34 + 1;
            lVar34 = *(longlong *)(unaff_RBX + 0x70);
            *(byte **)(lVar34 + 0x28) = pbVar35;
            *(undefined8 *)(lVar34 + 0x30) = 0;
            *(undefined8 *)(lVar34 + 0x20) = 1;
            unaff_RDI = *(uint **)(unaff_RBX + 0x80);
            puVar61 = _DAT_143ca8f38;
            goto code_r0x000141737fb6;
          }
          uVar41 = *(undefined8 *)(unaff_R12 + 0x78);
          LOCK();
          lVar29 = *plVar26;
          *plVar26 = *plVar26 + 1;
          UNLOCK();
          if (*plVar26 == 0 || SCARRY8(lVar29,1) != *plVar26 < 0) goto code_r0x00014173a218;
          *(longlong **)(unaff_RBX + 0x150) = plVar26;
          *(undefined8 *)(unaff_RBX + 0x158) = uVar41;
          lVar34 = *(longlong *)(lVar34 + 0x40);
          uVar41 = *(undefined8 *)(unaff_R12 + 0x48);
          uVar27 = *(undefined8 *)(unaff_R12 + 0x50);
          *(undefined8 *)(pcVar59 + -8) = 0x141737399;
          pdb_141c34660(unaff_RBX + 0x668,lVar34 + 0x10,uVar41,uVar27);
          uVar39 = 1;
          if ((longlong)*(ulonglong *)(unaff_RBX + 0x668) < 0) {
            uVar39 = *(ulonglong *)(unaff_RBX + 0x668) ^ 0x8000000000000000;
          }
          lVar34 = *(longlong *)(unaff_RBX + 0x70);
          if (uVar39 == 0) goto code_r0x000141737c84;
          if (uVar39 == 1) {
            *(uint **)(unaff_RBX + 0x80) = unaff_R13;
            *(undefined8 *)(unaff_RBX + 0x88) = *(undefined8 *)(unaff_R12 + 0x48);
            puVar62 = *(uint **)(unaff_R12 + 0x50);
            if (puVar62 != (uint *)0x0) {
              unaff_R13 = (uint *)(*(longlong *)(unaff_RBX + 0x88) + 0x48);
              do {
                param_2 = *(char **)(unaff_R13 + -2);
                param_1 = unaff_RDI;
                unaff_RDI = puVar62;
                if (param_2 != (char *)0x0) {
code_r0x000141737426:
                  pbVar35 = *(byte **)unaff_R13;
                  *(undefined8 *)(pcVar59 + -8) = 0x141737435;
                  pub_1406abac0(pbVar35,(ulonglong)param_2,1);
                }
code_r0x000141737410:
                unaff_R13 = unaff_R13 + 0x18;
                puVar62 = (uint *)((longlong)unaff_RDI + -1);
                bVar64 = puVar62 == (uint *)0x0;
                unaff_RDI = param_1;
code_r0x000141737417:
                cVar22 = (char)unaff_R15;
              } while (!bVar64);
            }
            lVar34 = *(longlong *)(unaff_R12 + 0x40);
            if (lVar34 != 0) {
              pbVar35 = *(byte **)(unaff_RBX + 0x88);
              *(undefined8 *)(pcVar59 + -8) = 0x141737c5b;
              pub_1406abac0(pbVar35,lVar34 * 0x60,0x10);
            }
            *(undefined8 *)(unaff_R12 + 0x50) = *(undefined8 *)(unaff_RBX + 0x678);
            uVar41 = *(undefined8 *)(unaff_RBX + 0x670);
            *(longlong *)(unaff_R12 + 0x40) = *(longlong *)(unaff_RBX + 0x668);
            *(undefined8 *)(unaff_R12 + 0x48) = uVar41;
            lVar34 = *(longlong *)(unaff_RBX + 0x70);
            unaff_R13 = *(uint **)(unaff_RBX + 0x80);
            puVar61 = _DAT_143ca8f38;
code_r0x000141737c84:
            uVar41 = *(undefined8 *)(unaff_RBX + 0x158);
            *(undefined8 *)(lVar34 + 0x28) = *(undefined8 *)(unaff_RBX + 0x150);
            *(undefined8 *)(lVar34 + 0x30) = uVar41;
            *(undefined8 *)(lVar34 + 0x20) = 0;
          }
          else {
            if (SBORROW8(0,*(longlong *)(unaff_R12 + 0x58))) {
              *(undefined8 *)(unaff_R12 + 0x58) = 0;
              *(undefined8 *)(unaff_R12 + 0x60) = 8;
              *(undefined8 *)(unaff_R12 + 0x68) = 0;
              *(undefined8 *)(lVar34 + 0x20) = 2;
              plVar26 = *(longlong **)(unaff_RBX + 0x150);
              LOCK();
              *plVar26 = *plVar26 + -1;
              lVar34 = *plVar26;
              UNLOCK();
            }
            else {
              unaff_RBX[0x280] = '\x01';
              unaff_RBX[0x281] = '\0';
              unaff_RBX[0x282] = '\0';
              unaff_RBX[0x283] = '\0';
              unaff_RBX[0x284] = '\0';
              unaff_RBX[0x285] = '\0';
              unaff_RBX[0x286] = '\0';
              unaff_RBX[0x287] = '\0';
              unaff_RBX[0x288] = '\x01';
              unaff_RBX[0x289] = '\0';
              unaff_RBX[0x28a] = '\0';
              unaff_RBX[0x28b] = '\0';
              unaff_RBX[0x28c] = '\0';
              unaff_RBX[0x28d] = '\0';
              unaff_RBX[0x28e] = '\0';
              unaff_RBX[0x28f] = '\0';
              unaff_RBX[0x300] = '\0';
              unaff_RBX[0x301] = '\0';
              unaff_RBX[0x302] = '\0';
              unaff_RBX[0x303] = '\0';
              unaff_RBX[0x304] = '\0';
              unaff_RBX[0x305] = '\0';
              unaff_RBX[0x306] = '\0';
              unaff_RBX[0x307] = '\0';
              unaff_RBX[0x328] = '\0';
              unaff_RBX[0x329] = '\0';
              unaff_RBX[0x32a] = '\0';
              unaff_RBX[0x32b] = '\0';
              unaff_RBX[0x32c] = '\0';
              unaff_RBX[0x32d] = '\0';
              unaff_RBX[0x32e] = '\0';
              unaff_RBX[0x32f] = '\0';
              *(undefined1 (*) [16])(unaff_RBX + 0x500) = (undefined1  [16])0x0;
              unaff_RBX[0x510] = '\0';
              unaff_RBX[0x511] = '\0';
              unaff_RBX[0x512] = '\0';
              unaff_RBX[0x513] = '\0';
              unaff_RBX[0x514] = '\0';
              unaff_RBX[0x515] = '\0';
              unaff_RBX[0x516] = '\0';
              unaff_RBX[0x517] = '\0';
              unaff_RBX[0x518] = '\x01';
              unaff_RBX[0x519] = '\0';
              unaff_RBX[0x51a] = '\0';
              unaff_RBX[0x51b] = '\0';
              unaff_RBX[0x51c] = '\0';
              unaff_RBX[0x51d] = '\0';
              unaff_RBX[0x51e] = '\0';
              unaff_RBX[0x51f] = '\0';
              unaff_RBX[0x520] = '\x01';
              unaff_RBX[0x521] = '\0';
              unaff_RBX[0x522] = '\0';
              unaff_RBX[0x523] = '\0';
              unaff_RBX[0x524] = '\0';
              unaff_RBX[0x525] = '\0';
              unaff_RBX[0x526] = '\0';
              unaff_RBX[0x527] = '\0';
              *(undefined8 *)(pcVar59 + -8) = 0x141737ef4;
              pdb_14007ee60();
              *(undefined8 *)(pcVar59 + -8) = 0x141737f03;
              pbVar35 = pub_1406abab0(0x300,0x80);
              if (pbVar35 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
                *(undefined8 *)(pcVar59 + -8) = 0x141738a11;
                pdb_142dc7e11(0x80,0x300);
              }
              *(uint **)(unaff_RBX + 0x80) = unaff_RDI;
              *(undefined8 *)(pcVar59 + -8) = 0x141737f2b;
              pub_142e32760(pbVar35,unaff_RBX + 0x280,0x300);
              LOCK();
              lVar34 = *(longlong *)pbVar35;
              *(longlong *)pbVar35 = *(longlong *)pbVar35 + 1;
              UNLOCK();
              if (*(longlong *)pbVar35 == 0 || SCARRY8(lVar34,1) != *(longlong *)pbVar35 < 0)
              goto code_r0x00014173a218;
              *(byte **)(unaff_RBX + 0x280) = pbVar35;
              unaff_RBX[0x288] = '\0';
              unaff_RBX[0x289] = '\0';
              unaff_RBX[0x28a] = '\0';
              unaff_RBX[0x28b] = '\0';
              unaff_RBX[0x28c] = '\0';
              unaff_RBX[0x28d] = '\0';
              unaff_RBX[0x28e] = '\0';
              unaff_RBX[0x28f] = '\0';
              *(byte **)(unaff_RBX + 0xc0) = pbVar35;
              lVar34 = *(longlong *)(unaff_R12 + 0x68);
              if (lVar34 == *(longlong *)(unaff_R12 + 0x58)) {
                *(undefined8 *)(pcVar59 + -8) = 0x141737f64;
                pdb_142d7e8a0(unaff_R12 + 0x58);
              }
              *(byte **)(*(longlong *)(unaff_R12 + 0x60) + lVar34 * 8) = pbVar35;
              *(longlong *)(unaff_R12 + 0x68) = lVar34 + 1;
              lVar34 = *(longlong *)(unaff_RBX + 0x70);
              *(byte **)(lVar34 + 0x28) = pbVar35;
              *(undefined8 *)(lVar34 + 0x30) = 0;
              *(undefined8 *)(lVar34 + 0x20) = 1;
              puVar61 = _DAT_143ca8f38;
              unaff_RDI = *(uint **)(unaff_RBX + 0x80);
              plVar26 = *(longlong **)(unaff_RBX + 0x150);
              LOCK();
              *plVar26 = *plVar26 + -1;
              lVar34 = *plVar26;
              UNLOCK();
            }
            if (lVar34 == 0) {
              *(undefined8 *)(pcVar59 + -8) = 0x141737fb5;
              pdb_140c7a240(unaff_RBX + 0x150);
            }
          }
code_r0x000141737fb6:
          if ((cVar22 == '\0') && ((*puVar61 & 0x7fffffffffffffff) != 0)) {
            *(undefined8 *)(pcVar59 + -8) = 0x141738960;
            cVar22 = pdb_142dc79e0();
            if (cVar22 == '\0') {
              *(undefined1 *)(unaff_R12 + 0x38) = 1;
            }
          }
          LOCK();
          uVar23 = *unaff_R14;
          *unaff_R14 = *unaff_R14 + 0xc0000001;
          UNLOCK();
          unaff_R12 = (ulonglong)(uVar23 + 0xc0000001);
          if (0x3fffffff < uVar23 + 0xc0000001) {
            *(undefined8 *)(pcVar59 + -8) = 0x1417387de;
            pdb_142dc6fa0(unaff_R14);
          }
          in_R11 = *(char **)(unaff_RBX + 0x70);
          if (*(longlong *)(in_R11 + 0x20) != 0) {
            if ((int)*(longlong *)(in_R11 + 0x20) == 1) {
              *(undefined8 *)(in_R11 + 0x50) = *(undefined8 *)(in_R11 + 0x28);
              *(undefined8 *)(in_R11 + 0x58) = *(undefined8 *)(in_R11 + 0x30);
              plVar26 = plRam0000000143cad8a0;
              if (*_DAT_143ca4b08 < 2) {
                bVar21 = *(byte *)(plRam0000000143cad8a0 + 2);
                unaff_R12 = (ulonglong)bVar21;
                if (2 < bVar21) {
                  *(undefined8 *)(pcVar59 + -8) = 0x141738a23;
                  uVar23 = pdb_142db8070(plRam0000000143cad8a0);
                  unaff_R12 = (ulonglong)uVar23;
                  in_R11 = *(char **)(unaff_RBX + 0x70);
                  if ((char)uVar23 != '\0') goto code_r0x00014173803c;
                  goto code_r0x000141738a32;
                }
                if (bVar21 == 0) goto code_r0x000141738a32;
code_r0x00014173803c:
                lVar34 = *plVar26;
                *(undefined8 *)(pcVar59 + -8) = 0x141738044;
                cVar22 = pdb_140dd7f60(lVar34);
                in_R11 = *(char **)(unaff_RBX + 0x70);
                if (cVar22 == '\0') goto code_r0x000141738a32;
                lVar34 = *plVar26;
                uVar39 = *(ulonglong *)(lVar34 + 0x38);
                if (uVar39 == 0) {
                  *(undefined8 *)(pcVar59 + -8) = 0x141739e8d;
                  pdb_142dc8110(&UNK_14332aff8,0x22,&UNK_14332b0d8);
                  goto code_r0x00014173a218;
                }
                uVar41 = *(undefined8 *)(lVar34 + 0x30);
                uVar27 = *(undefined8 *)(lVar34 + 0x40);
                uVar28 = *(undefined8 *)(lVar34 + 0x48);
                *(undefined8 *)(unaff_RBX + 0xc0) = uVar41;
                *(ulonglong *)(unaff_RBX + 200) = uVar39;
                *(undefined8 *)(unaff_RBX + 0xd0) = uVar27;
                *(undefined8 *)(unaff_RBX + 0xd8) = uVar28;
                unaff_RBX[0xe0] = '\0';
                unaff_RBX[0xe1] = '\0';
                unaff_RBX[0xe2] = '\0';
                unaff_RBX[0xe3] = '\0';
                unaff_RBX[0xe4] = '\0';
                unaff_RBX[0xe5] = '\0';
                unaff_RBX[0xe6] = '\0';
                unaff_RBX[0xe7] = '\0';
                *(undefined **)(unaff_RBX + 0xf0) = &UNK_14332b0f0;
                unaff_RBX[0xf8] = 'G';
                unaff_RBX[0xf9] = '\0';
                unaff_RBX[0xfa] = '\0';
                unaff_RBX[0xfb] = '\0';
                unaff_RBX[0xfc] = '\0';
                unaff_RBX[0xfd] = '\0';
                unaff_RBX[0xfe] = '\0';
                unaff_RBX[0xff] = '\0';
                if (uVar39 == 1) {
                  *(undefined8 *)(pcVar59 + -8) = 0x141739ecd;
                  pdb_142dc8110(&UNK_14332aff8,0x22,&UNK_14332b0d8);
                  goto code_r0x00014173a218;
                }
                *(undefined8 *)(unaff_RBX + 0x98) = uVar41;
                *(ulonglong *)(unaff_RBX + 0xa0) = uVar39;
                *(undefined8 *)(unaff_RBX + 0xa8) = uVar27;
                *(undefined8 *)(unaff_RBX + 0xb0) = uVar28;
                unaff_RBX[0xb8] = '\x01';
                unaff_RBX[0xb9] = '\0';
                unaff_RBX[0xba] = '\0';
                unaff_RBX[0xbb] = '\0';
                unaff_RBX[0xbc] = '\0';
                unaff_RBX[0xbd] = '\0';
                unaff_RBX[0xbe] = '\0';
                unaff_RBX[0xbf] = '\0';
                *(longlong *)(unaff_RBX + 0x108) = *(longlong *)(in_R11 + 0x38) + 0x20;
                if (uVar39 < 3) {
                  *(undefined8 *)(pcVar59 + -8) = 0x141739f0d;
                  pdb_142dc8110(&UNK_14332aff8,0x22,&UNK_14332b0d8);
                  goto code_r0x00014173a218;
                }
                *(undefined8 *)(unaff_RBX + 0x150) = uVar41;
                *(ulonglong *)(unaff_RBX + 0x158) = uVar39;
                *(undefined8 *)(unaff_RBX + 0x160) = uVar27;
                *(undefined8 *)(unaff_RBX + 0x168) = uVar28;
                unaff_RBX[0x170] = '\x02';
                unaff_RBX[0x171] = '\0';
                unaff_RBX[0x172] = '\0';
                unaff_RBX[0x173] = '\0';
                unaff_RBX[0x174] = '\0';
                unaff_RBX[0x175] = '\0';
                unaff_RBX[0x176] = '\0';
                unaff_RBX[0x177] = '\0';
                *(char **)(unaff_RBX + 0x280) = unaff_RBX + 0xc0;
                *(char **)(unaff_RBX + 0x288) = unaff_RBX + 0xf0;
                *(undefined **)(unaff_RBX + 0x290) = &UNK_14332b058;
                *(char **)(unaff_RBX + 0x298) = unaff_RBX + 0x98;
                *(char **)(unaff_RBX + 0x2a0) = unaff_RBX + 0x108;
                *(undefined **)(unaff_RBX + 0x2a8) = &UNK_14332b078;
                *(char **)(unaff_RBX + 0x2b0) = unaff_RBX + 0x150;
                *(char **)(unaff_RBX + 0x2b8) = in_R11 + 0x10;
                *(undefined **)(unaff_RBX + 0x2c0) = &UNK_14332b098;
                *(char **)(unaff_RBX + 0x1c0) = unaff_RBX + 0x280;
                unaff_RBX[0x1c8] = '\x03';
                unaff_RBX[0x1c9] = '\0';
                unaff_RBX[0x1ca] = '\0';
                unaff_RBX[0x1cb] = '\0';
                unaff_RBX[0x1cc] = '\0';
                unaff_RBX[0x1cd] = '\0';
                unaff_RBX[0x1ce] = '\0';
                unaff_RBX[0x1cf] = '\0';
                *(longlong *)(unaff_RBX + 0x1d0) = lVar34 + 0x30;
                *(undefined8 *)(pcVar59 + -8) = 0x1417381c9;
                pdb_14173b6d0(unaff_RBX + 0x1c0);
                goto code_r0x000141738c4f;
              }
code_r0x000141738a32:
              plVar26 = plRam0000000143cad8a0;
              if ((*_DAT_143ca4ab0 == '\0') && (3 < *_DAT_143ca8e90)) {
                unaff_R14 = (uint *)*plRam0000000143cad8a0;
                uVar41 = *(undefined8 *)(unaff_R14 + 8);
                uVar27 = *(undefined8 *)(unaff_R14 + 10);
                unaff_RBX[0x5f8] = '\x04';
                unaff_RBX[0x5f9] = '\0';
                unaff_RBX[0x5fa] = '\0';
                unaff_RBX[0x5fb] = '\0';
                unaff_RBX[0x5fc] = '\0';
                unaff_RBX[0x5fd] = '\0';
                unaff_RBX[0x5fe] = '\0';
                unaff_RBX[0x5ff] = '\0';
                *(undefined8 *)(unaff_RBX + 0x600) = uVar41;
                *(undefined8 *)(unaff_RBX + 0x608) = uVar27;
                *(undefined8 *)(pcVar59 + -8) = 0x141738a80;
                unaff_R15 = (byte *)pdb_140f33290();
                UNRECOVERED_JUMPTABLE = *(code **)(unaff_R12 + 0x18);
                *(undefined8 *)(pcVar59 + -8) = 0x141738a96;
                cVar22 = (*UNRECOVERED_JUMPTABLE)(unaff_R15,unaff_RBX + 0x5f8);
                in_R11 = *(char **)(unaff_RBX + 0x70);
                if (cVar22 == '\0') goto code_r0x000141738c53;
                puVar24 = (uint *)*plVar26;
                puVar36 = *(uint **)(puVar24 + 0xe);
                if (puVar36 == (uint *)0x0) {
                  *(undefined8 *)(pcVar59 + -8) = 0x141739fb3;
                  pdb_142dc8110(&UNK_14332aff8,0x22,&UNK_14332b0d8);
                  goto code_r0x00014173a218;
                }
                puVar63 = *(uint **)(puVar24 + 0xc);
                param_2 = *(char **)(puVar24 + 0x10);
                param_3 = *(uint **)(puVar24 + 0x12);
                *(uint **)(unaff_RBX + 0xc0) = puVar63;
                *(uint **)(unaff_RBX + 200) = puVar36;
                *(char **)(unaff_RBX + 0xd0) = param_2;
                *(uint **)(unaff_RBX + 0xd8) = param_3;
                unaff_RBX[0xe0] = '\0';
                unaff_RBX[0xe1] = '\0';
                unaff_RBX[0xe2] = '\0';
                unaff_RBX[0xe3] = '\0';
                unaff_RBX[0xe4] = '\0';
                unaff_RBX[0xe5] = '\0';
                unaff_RBX[0xe6] = '\0';
                unaff_RBX[0xe7] = '\0';
                *(undefined **)(unaff_RBX + 0x108) = &UNK_14332b0f0;
                unaff_RBX[0x110] = 'G';
                unaff_RBX[0x111] = '\0';
                unaff_RBX[0x112] = '\0';
                unaff_RBX[0x113] = '\0';
                unaff_RBX[0x114] = '\0';
                unaff_RBX[0x115] = '\0';
                unaff_RBX[0x116] = '\0';
                unaff_RBX[0x117] = '\0';
                if (puVar36 == (uint *)0x1) {
                  *(undefined8 *)(pcVar59 + -8) = 0x141739ff3;
                  pdb_142dc8110(&UNK_14332aff8,0x22,&UNK_14332b0d8);
                  goto code_r0x00014173a218;
                }
                *(uint **)(unaff_RBX + 0x98) = puVar63;
                *(uint **)(unaff_RBX + 0xa0) = puVar36;
                *(char **)(unaff_RBX + 0xa8) = param_2;
                *(uint **)(unaff_RBX + 0xb0) = param_3;
                unaff_RBX[0xb8] = '\x01';
                unaff_RBX[0xb9] = '\0';
                unaff_RBX[0xba] = '\0';
                unaff_RBX[0xbb] = '\0';
                unaff_RBX[0xbc] = '\0';
                unaff_RBX[0xbd] = '\0';
                unaff_RBX[0xbe] = '\0';
                unaff_RBX[0xbf] = '\0';
                *(longlong *)(unaff_RBX + 0x120) = *(longlong *)(in_R11 + 0x38) + 0x20;
                if (puVar36 < (uint *)0x3) {
                  *(undefined8 *)(pcVar59 + -8) = 0x14173a033;
                  pdb_142dc8110(&UNK_14332aff8,0x22,&UNK_14332b0d8);
                  goto code_r0x00014173a218;
                }
                goto code_r0x000141738b49;
              }
              goto code_r0x000141738c53;
            }
            *(uint **)(unaff_RBX + 0x80) = unaff_R13;
            plVar26 = *(longlong **)(in_R11 + 0x38);
            LOCK();
            lVar34 = *plVar26;
            *plVar26 = *plVar26 + 1;
            UNLOCK();
            if (*plVar26 == 0 || SCARRY8(lVar34,1) != *plVar26 < 0) goto code_r0x00014173a218;
            *(longlong **)(in_R11 + 0x58) = plVar26;
            in_R11[0x60] = '\x01';
            pcVar40 = (char *)(*(longlong *)(in_R11 + 0x40) + 0x10);
            uVar41 = *(undefined8 *)(*(longlong *)(in_R11 + 0x38) + 0x20);
            uVar27 = *(undefined8 *)(*(longlong *)(in_R11 + 0x38) + 0x28);
            *(undefined8 *)(pcVar59 + -8) = 0x1417383e6;
            pdb_141805d60(unaff_RBX + 0x1c0,pcVar40,uVar41,uVar27);
            plVar26 = plRam0000000143cad898;
            if (!SBORROW8(0,*(longlong *)(unaff_RBX + 0x1d0))) {
              uVar41 = *(undefined8 *)(unaff_RBX + 0x1c0);
              pbVar35 = *(byte **)(unaff_RBX + 0x1c8);
              *(undefined8 *)(unaff_RBX + 0x658) = uVar41;
              *(byte **)(unaff_RBX + 0x660) = pbVar35;
              *(undefined8 *)(unaff_RBX + 0x130) = *(undefined8 *)(unaff_RBX + 0x1e0);
              *(undefined8 *)(unaff_RBX + 0x120) = *(undefined8 *)(unaff_RBX + 0x1d0);
              *(undefined8 *)(unaff_RBX + 0x128) = *(undefined8 *)(unaff_RBX + 0x1d8);
              plVar26 = plRam0000000143cad8a8;
              if (*_DAT_143ca4b08 < 2) {
                bVar21 = *(byte *)(plRam0000000143cad8a8 + 2);
                pcVar40 = (char *)(ulonglong)bVar21;
                if (2 < bVar21) {
                  *(undefined8 *)(unaff_RBX + 0x88) = uVar41;
                  *(undefined8 *)(pcVar59 + -8) = 0x14173962b;
                  uVar23 = pdb_142db8070(plRam0000000143cad8a8);
                  pcVar40 = (char *)(ulonglong)uVar23;
                  uVar41 = *(undefined8 *)(unaff_RBX + 0x88);
                  if ((char)uVar23 != '\0') goto code_r0x000141738635;
                  goto code_r0x00014173963d;
                }
                if (bVar21 == 0) goto code_r0x00014173963d;
code_r0x000141738635:
                *(undefined8 *)(unaff_RBX + 0x88) = uVar41;
                lVar34 = *plVar26;
                *(undefined8 *)(pcVar59 + -8) = 0x141738644;
                cVar22 = pdb_140dd7f60(lVar34);
                uVar41 = *(undefined8 *)(unaff_RBX + 0x88);
                if (cVar22 == '\0') goto code_r0x00014173963d;
                lVar34 = *plVar26;
                uVar39 = *(ulonglong *)(lVar34 + 0x38);
                if (uVar39 == 0) {
                  *(undefined8 *)(pcVar59 + -8) = 0x14173a091;
                  pdb_142dc8110(&UNK_14332aff8,0x22,&UNK_14332b118);
                  goto code_r0x00014173a218;
                }
                uVar41 = *(undefined8 *)(lVar34 + 0x30);
                uVar27 = *(undefined8 *)(lVar34 + 0x40);
                uVar28 = *(undefined8 *)(lVar34 + 0x48);
                *(undefined8 *)(unaff_RBX + 0xc0) = uVar41;
                *(ulonglong *)(unaff_RBX + 200) = uVar39;
                *(undefined8 *)(unaff_RBX + 0xd0) = uVar27;
                *(undefined8 *)(unaff_RBX + 0xd8) = uVar28;
                unaff_RBX[0xe0] = '\0';
                unaff_RBX[0xe1] = '\0';
                unaff_RBX[0xe2] = '\0';
                unaff_RBX[0xe3] = '\0';
                unaff_RBX[0xe4] = '\0';
                unaff_RBX[0xe5] = '\0';
                unaff_RBX[0xe6] = '\0';
                unaff_RBX[0xe7] = '\0';
                *(undefined **)(unaff_RBX + 0x108) = &UNK_14332b130;
                unaff_RBX[0x110] = '9';
                unaff_RBX[0x111] = '\0';
                unaff_RBX[0x112] = '\0';
                unaff_RBX[0x113] = '\0';
                unaff_RBX[0x114] = '\0';
                unaff_RBX[0x115] = '\0';
                unaff_RBX[0x116] = '\0';
                unaff_RBX[0x117] = '\0';
                if (uVar39 == 1) {
                  *(undefined8 *)(pcVar59 + -8) = 0x14173a0cd;
                  pdb_142dc8110(&UNK_14332aff8,0x22,&UNK_14332b118);
                  goto code_r0x00014173a218;
                }
                *(undefined8 *)(unaff_RBX + 0x98) = uVar41;
                *(ulonglong *)(unaff_RBX + 0xa0) = uVar39;
                *(undefined8 *)(unaff_RBX + 0xa8) = uVar27;
                *(undefined8 *)(unaff_RBX + 0xb0) = uVar28;
                unaff_RBX[0xb8] = '\x01';
                unaff_RBX[0xb9] = '\0';
                unaff_RBX[0xba] = '\0';
                unaff_RBX[0xbb] = '\0';
                unaff_RBX[0xbc] = '\0';
                unaff_RBX[0xbd] = '\0';
                unaff_RBX[0xbe] = '\0';
                unaff_RBX[0xbf] = '\0';
                *(longlong *)(unaff_RBX + 0x220) =
                     *(longlong *)(*(longlong *)(unaff_RBX + 0x70) + 0x38) + 0x20;
                if (uVar39 < 3) {
                  *(undefined8 *)(pcVar59 + -8) = 0x14173a109;
                  pdb_142dc8110(&UNK_14332aff8,0x22,&UNK_14332b118);
                  goto code_r0x00014173a218;
                }
                *(undefined8 *)(unaff_RBX + 0x150) = uVar41;
                *(ulonglong *)(unaff_RBX + 0x158) = uVar39;
                *(undefined8 *)(unaff_RBX + 0x160) = uVar27;
                *(undefined8 *)(unaff_RBX + 0x168) = uVar28;
                unaff_RBX[0x170] = '\x02';
                unaff_RBX[0x171] = '\0';
                unaff_RBX[0x172] = '\0';
                unaff_RBX[0x173] = '\0';
                unaff_RBX[0x174] = '\0';
                unaff_RBX[0x175] = '\0';
                unaff_RBX[0x176] = '\0';
                unaff_RBX[0x177] = '\0';
                *(char **)(unaff_RBX + 0x280) = unaff_RBX + 0xc0;
                *(char **)(unaff_RBX + 0x288) = unaff_RBX + 0x108;
                *(undefined **)(unaff_RBX + 0x290) = &UNK_14332b058;
                *(char **)(unaff_RBX + 0x298) = unaff_RBX + 0x98;
                *(char **)(unaff_RBX + 0x2a0) = unaff_RBX + 0x220;
                *(undefined **)(unaff_RBX + 0x2a8) = &UNK_14332b078;
                *(char **)(unaff_RBX + 0x2b0) = unaff_RBX + 0x150;
                *(longlong *)(unaff_RBX + 0x2b8) = *(longlong *)(unaff_RBX + 0x70) + 0x10;
                *(undefined **)(unaff_RBX + 0x2c0) = &UNK_14332b098;
                *(char **)(unaff_RBX + 0xf0) = unaff_RBX + 0x280;
                unaff_RBX[0xf8] = '\x03';
                unaff_RBX[0xf9] = '\0';
                unaff_RBX[0xfa] = '\0';
                unaff_RBX[0xfb] = '\0';
                unaff_RBX[0xfc] = '\0';
                unaff_RBX[0xfd] = '\0';
                unaff_RBX[0xfe] = '\0';
                unaff_RBX[0xff] = '\0';
                *(longlong *)(unaff_RBX + 0x100) = lVar34 + 0x30;
                *(undefined8 *)(pcVar59 + -8) = 0x1417387d0;
                pdb_14173b830(unaff_RBX + 0xf0);
code_r0x000141739867:
                uVar41 = *(undefined8 *)(unaff_RBX + 0x88);
              }
              else {
code_r0x00014173963d:
                if ((*_DAT_143ca4ab0 == '\0') && (3 < *_DAT_143ca8e90)) {
                  *(undefined8 *)(unaff_RBX + 0x88) = uVar41;
                  plVar26 = plRam0000000143cad8a8;
                  unaff_RDI = (uint *)*plRam0000000143cad8a8;
                  uVar41 = *(undefined8 *)(unaff_RDI + 8);
                  uVar27 = *(undefined8 *)(unaff_RDI + 10);
                  unaff_RBX[0x610] = '\x04';
                  unaff_RBX[0x611] = '\0';
                  unaff_RBX[0x612] = '\0';
                  unaff_RBX[0x613] = '\0';
                  unaff_RBX[0x614] = '\0';
                  unaff_RBX[0x615] = '\0';
                  unaff_RBX[0x616] = '\0';
                  unaff_RBX[0x617] = '\0';
                  *(undefined8 *)(unaff_RBX + 0x618) = uVar41;
                  *(undefined8 *)(unaff_RBX + 0x620) = uVar27;
                  *(undefined8 *)(pcVar59 + -8) = 0x141739691;
                  uVar27 = pdb_140f33290();
                  UNRECOVERED_JUMPTABLE = *(code **)(pcVar40 + 0x18);
                  *(undefined8 *)(pcVar59 + -8) = 0x1417396a7;
                  cVar22 = (*UNRECOVERED_JUMPTABLE)(uVar27,unaff_RBX + 0x610);
                  uVar41 = *(undefined8 *)(unaff_RBX + 0x88);
                  if (cVar22 != '\0') {
                    lVar34 = *plVar26;
                    uVar39 = *(ulonglong *)(lVar34 + 0x38);
                    if (uVar39 == 0) {
                      *(undefined8 *)(pcVar59 + -8) = 0x14173a1ab;
                      pdb_142dc8110(&UNK_14332aff8,0x22,&UNK_14332b118);
                      goto code_r0x00014173a218;
                    }
                    uVar41 = *(undefined8 *)(lVar34 + 0x30);
                    uVar28 = *(undefined8 *)(lVar34 + 0x40);
                    uVar6 = *(undefined8 *)(lVar34 + 0x48);
                    *(undefined8 *)(unaff_RBX + 0xc0) = uVar41;
                    *(ulonglong *)(unaff_RBX + 200) = uVar39;
                    *(undefined8 *)(unaff_RBX + 0xd0) = uVar28;
                    *(undefined8 *)(unaff_RBX + 0xd8) = uVar6;
                    unaff_RBX[0xe0] = '\0';
                    unaff_RBX[0xe1] = '\0';
                    unaff_RBX[0xe2] = '\0';
                    unaff_RBX[0xe3] = '\0';
                    unaff_RBX[0xe4] = '\0';
                    unaff_RBX[0xe5] = '\0';
                    unaff_RBX[0xe6] = '\0';
                    unaff_RBX[0xe7] = '\0';
                    *(undefined **)(unaff_RBX + 0x220) = &UNK_14332b130;
                    unaff_RBX[0x228] = '9';
                    unaff_RBX[0x229] = '\0';
                    unaff_RBX[0x22a] = '\0';
                    unaff_RBX[0x22b] = '\0';
                    unaff_RBX[0x22c] = '\0';
                    unaff_RBX[0x22d] = '\0';
                    unaff_RBX[0x22e] = '\0';
                    unaff_RBX[0x22f] = '\0';
                    if (uVar39 == 1) {
                      *(undefined8 *)(pcVar59 + -8) = 0x14173a1e1;
                      pdb_142dc8110(&UNK_14332aff8,0x22,&UNK_14332b118);
                      goto code_r0x00014173a218;
                    }
                    *(undefined8 *)(unaff_RBX + 0x98) = uVar41;
                    *(ulonglong *)(unaff_RBX + 0xa0) = uVar39;
                    *(undefined8 *)(unaff_RBX + 0xa8) = uVar28;
                    *(undefined8 *)(unaff_RBX + 0xb0) = uVar6;
                    unaff_RBX[0xb8] = '\x01';
                    unaff_RBX[0xb9] = '\0';
                    unaff_RBX[0xba] = '\0';
                    unaff_RBX[0xbb] = '\0';
                    unaff_RBX[0xbc] = '\0';
                    unaff_RBX[0xbd] = '\0';
                    unaff_RBX[0xbe] = '\0';
                    unaff_RBX[0xbf] = '\0';
                    *(longlong *)(unaff_RBX + 0x5d8) =
                         *(longlong *)(*(longlong *)(unaff_RBX + 0x70) + 0x38) + 0x20;
                    if (uVar39 < 3) {
                      *(undefined8 *)(pcVar59 + -8) = 0x14173a217;
                      pdb_142dc8110(&UNK_14332aff8,0x22,&UNK_14332b118);
                      goto code_r0x00014173a218;
                    }
                    *(undefined8 *)(unaff_RBX + 0x150) = uVar41;
                    *(ulonglong *)(unaff_RBX + 0x158) = uVar39;
                    *(undefined8 *)(unaff_RBX + 0x160) = uVar28;
                    *(undefined8 *)(unaff_RBX + 0x168) = uVar6;
                    unaff_RBX[0x170] = '\x02';
                    unaff_RBX[0x171] = '\0';
                    unaff_RBX[0x172] = '\0';
                    unaff_RBX[0x173] = '\0';
                    unaff_RBX[0x174] = '\0';
                    unaff_RBX[0x175] = '\0';
                    unaff_RBX[0x176] = '\0';
                    unaff_RBX[0x177] = '\0';
                    *(char **)(unaff_RBX + 0x280) = unaff_RBX + 0xc0;
                    *(char **)(unaff_RBX + 0x288) = unaff_RBX + 0x220;
                    *(undefined **)(unaff_RBX + 0x290) = &UNK_14332b058;
                    *(char **)(unaff_RBX + 0x298) = unaff_RBX + 0x98;
                    *(char **)(unaff_RBX + 0x2a0) = unaff_RBX + 0x5d8;
                    *(undefined **)(unaff_RBX + 0x2a8) = &UNK_14332b078;
                    *(char **)(unaff_RBX + 0x2b0) = unaff_RBX + 0x150;
                    *(longlong *)(unaff_RBX + 0x2b8) = *(longlong *)(unaff_RBX + 0x70) + 0x10;
                    *(undefined **)(unaff_RBX + 0x2c0) = &UNK_14332b098;
                    *(char **)(unaff_RBX + 0x108) = unaff_RBX + 0x280;
                    unaff_RBX[0x110] = '\x03';
                    unaff_RBX[0x111] = '\0';
                    unaff_RBX[0x112] = '\0';
                    unaff_RBX[0x113] = '\0';
                    unaff_RBX[0x114] = '\0';
                    unaff_RBX[0x115] = '\0';
                    unaff_RBX[0x116] = '\0';
                    unaff_RBX[0x117] = '\0';
                    *(longlong *)(unaff_RBX + 0x118) = lVar34 + 0x30;
                    *(undefined8 *)(unaff_RBX + 0x100) = *(undefined8 *)(unaff_RBX + 0x620);
                    *(undefined8 *)(unaff_RBX + 0xf0) = *(undefined8 *)(unaff_RBX + 0x610);
                    *(undefined8 *)(unaff_RBX + 0xf8) = *(undefined8 *)(unaff_RBX + 0x618);
                    *(char **)(pcVar59 + 0x20) = unaff_RBX + 0x108;
                    *(undefined8 *)(pcVar59 + -8) = 0x141739866;
                    pdb_140dd7f80(unaff_RDI,uVar27,pcVar40,unaff_RBX + 0xf0);
                    goto code_r0x000141739867;
                  }
                }
              }
              *(undefined8 *)(unaff_RBX + 0x240) = *(undefined8 *)(unaff_RBX + 0x130);
              *(undefined8 *)(unaff_RBX + 0x230) = *(undefined8 *)(unaff_RBX + 0x120);
              *(undefined8 *)(unaff_RBX + 0x238) = *(undefined8 *)(unaff_RBX + 0x128);
              lVar34 = 0;
              lVar29 = *(longlong *)(unaff_RBX + 0x70);
code_r0x000141739892:
              uVar39 = *(longlong *)(lVar29 + 0x38) + 0x10;
              *(longlong *)(unaff_RBX + 0x280) = lVar34;
              *(undefined8 *)(unaff_RBX + 0x288) = uVar41;
              *(byte **)(unaff_RBX + 0x290) = pbVar35;
              *(uint **)(unaff_RBX + 0x298) = unaff_RDI;
              *(undefined8 *)(unaff_RBX + 0x160) = *(undefined8 *)(unaff_RBX + 0x240);
              *(undefined8 *)(unaff_RBX + 0x150) = *(undefined8 *)(unaff_RBX + 0x230);
              *(undefined8 *)(unaff_RBX + 0x158) = *(undefined8 *)(unaff_RBX + 0x238);
              pcVar40 = unaff_RBX + 0x280;
              pcVar33 = unaff_RBX + 0x150;
              *(undefined8 *)(pcVar59 + -8) = 0x1417398f4;
              pdb_141746c10(unaff_RBX + 0x1c0,uVar39,pcVar40,pcVar33);
              plVar26 = (longlong *)(*(longlong *)(unaff_RBX + 0x70) + 0x38);
              *(undefined1 *)(*(longlong *)(unaff_RBX + 0x70) + 0x60) = 0;
              plVar7 = plRam0000000143cad8b8;
              if (*(longlong *)(unaff_RBX + 0x1c0) == 0) {
                if (*_DAT_143ca4b08 < 2) {
                  bVar21 = *(byte *)(plRam0000000143cad8b8 + 2);
                  uVar39 = (ulonglong)bVar21;
                  if (2 < bVar21) {
                    unaff_RBX[0x6c] = '\x01';
                    *(undefined8 *)(pcVar59 + -8) = 0x141739adb;
                    uVar23 = pdb_142db8070(plRam0000000143cad8b8);
                    uVar39 = (ulonglong)uVar23;
                    if ((char)uVar23 != '\0') goto code_r0x00014173993f;
                    goto code_r0x000141739ae6;
                  }
                  if (bVar21 == 0) goto code_r0x000141739ae6;
code_r0x00014173993f:
                  lVar34 = *plVar7;
                  unaff_RBX[0x6c] = '\x01';
                  *(undefined8 *)(pcVar59 + -8) = 0x14173994b;
                  cVar22 = pdb_140dd7f60(lVar34);
                  if (cVar22 == '\0') goto code_r0x000141739ae6;
                  lVar34 = *plVar7;
                  uVar39 = *(ulonglong *)(lVar34 + 0x38);
                  if (uVar39 == 0) {
                    unaff_RBX[0x6c] = '\x01';
                    *(undefined8 *)(pcVar59 + -8) = 0x141739f51;
                    pdb_142dc8110(&UNK_14332aff8,0x22,&UNK_14332b278);
                    goto code_r0x00014173a218;
                  }
                  uVar41 = *(undefined8 *)(lVar34 + 0x30);
                  uVar27 = *(undefined8 *)(lVar34 + 0x40);
                  uVar28 = *(undefined8 *)(lVar34 + 0x48);
                  *(undefined8 *)(unaff_RBX + 0xc0) = uVar41;
                  *(ulonglong *)(unaff_RBX + 200) = uVar39;
                  *(undefined8 *)(unaff_RBX + 0xd0) = uVar27;
                  *(undefined8 *)(unaff_RBX + 0xd8) = uVar28;
                  unaff_RBX[0xe0] = '\0';
                  unaff_RBX[0xe1] = '\0';
                  unaff_RBX[0xe2] = '\0';
                  unaff_RBX[0xe3] = '\0';
                  unaff_RBX[0xe4] = '\0';
                  unaff_RBX[0xe5] = '\0';
                  unaff_RBX[0xe6] = '\0';
                  unaff_RBX[0xe7] = '\0';
                  *(undefined **)(unaff_RBX + 0x108) = &UNK_14332b290;
                  unaff_RBX[0x110] = '3';
                  unaff_RBX[0x111] = '\0';
                  unaff_RBX[0x112] = '\0';
                  unaff_RBX[0x113] = '\0';
                  unaff_RBX[0x114] = '\0';
                  unaff_RBX[0x115] = '\0';
                  unaff_RBX[0x116] = '\0';
                  unaff_RBX[0x117] = '\0';
                  if (uVar39 == 1) {
                    unaff_RBX[0x6c] = '\x01';
                    *(undefined8 *)(pcVar59 + -8) = 0x141739f73;
                    pdb_142dc8110(&UNK_14332aff8,0x22,&UNK_14332b278);
                    goto code_r0x00014173a218;
                  }
                  *(undefined8 *)(unaff_RBX + 0x98) = uVar41;
                  *(ulonglong *)(unaff_RBX + 0xa0) = uVar39;
                  *(undefined8 *)(unaff_RBX + 0xa8) = uVar27;
                  *(undefined8 *)(unaff_RBX + 0xb0) = uVar28;
                  unaff_RBX[0xb8] = '\x01';
                  unaff_RBX[0xb9] = '\0';
                  unaff_RBX[0xba] = '\0';
                  unaff_RBX[0xbb] = '\0';
                  unaff_RBX[0xbc] = '\0';
                  unaff_RBX[0xbd] = '\0';
                  unaff_RBX[0xbe] = '\0';
                  unaff_RBX[0xbf] = '\0';
                  *(longlong *)(unaff_RBX + 0x120) = *plVar26 + 0x20;
                  if (uVar39 < 3) {
                    unaff_RBX[0x6c] = '\x01';
                    *(undefined8 *)(pcVar59 + -8) = 0x141739f95;
                    pdb_142dc8110(&UNK_14332aff8,0x22,&UNK_14332b278);
                    goto code_r0x00014173a218;
                  }
                  *(undefined8 *)(unaff_RBX + 0x150) = uVar41;
                  *(ulonglong *)(unaff_RBX + 0x158) = uVar39;
                  *(undefined8 *)(unaff_RBX + 0x160) = uVar27;
                  *(undefined8 *)(unaff_RBX + 0x168) = uVar28;
                  unaff_RBX[0x170] = '\x02';
                  unaff_RBX[0x171] = '\0';
                  unaff_RBX[0x172] = '\0';
                  unaff_RBX[0x173] = '\0';
                  unaff_RBX[0x174] = '\0';
                  unaff_RBX[0x175] = '\0';
                  unaff_RBX[0x176] = '\0';
                  unaff_RBX[0x177] = '\0';
                  *(char **)(unaff_RBX + 0x280) = unaff_RBX + 0xc0;
                  *(char **)(unaff_RBX + 0x288) = unaff_RBX + 0x108;
                  *(undefined **)(unaff_RBX + 0x290) = &UNK_14332b058;
                  *(char **)(unaff_RBX + 0x298) = unaff_RBX + 0x98;
                  *(char **)(unaff_RBX + 0x2a0) = unaff_RBX + 0x120;
                  *(undefined **)(unaff_RBX + 0x2a8) = &UNK_14332b078;
                  *(char **)(unaff_RBX + 0x2b0) = pcVar33;
                  *(longlong *)(unaff_RBX + 0x2b8) = *(longlong *)(unaff_RBX + 0x70) + 0x10;
                  *(undefined **)(unaff_RBX + 0x2c0) = &UNK_14332b098;
                  *(char **)(unaff_RBX + 0xf0) = pcVar40;
                  unaff_RBX[0xf8] = '\x03';
                  unaff_RBX[0xf9] = '\0';
                  unaff_RBX[0xfa] = '\0';
                  unaff_RBX[0xfb] = '\0';
                  unaff_RBX[0xfc] = '\0';
                  unaff_RBX[0xfd] = '\0';
                  unaff_RBX[0xfe] = '\0';
                  unaff_RBX[0xff] = '\0';
                  *(longlong *)(unaff_RBX + 0x100) = lVar34 + 0x30;
                  unaff_RBX[0x6c] = '\x01';
                  *(undefined8 *)(pcVar59 + -8) = 0x141739ac5;
                  pdb_14173b780(unaff_RBX + 0xf0);
                }
                else {
code_r0x000141739ae6:
                  plVar7 = plRam0000000143cad8b8;
                  if ((*_DAT_143ca4ab0 == '\0') && (3 < *_DAT_143ca8e90)) {
                    lVar34 = *plRam0000000143cad8b8;
                    *(longlong *)(unaff_RBX + 0x88) = lVar34;
                    uVar41 = *(undefined8 *)(lVar34 + 0x20);
                    uVar27 = *(undefined8 *)(lVar34 + 0x28);
                    unaff_RBX[0x640] = '\x04';
                    unaff_RBX[0x641] = '\0';
                    unaff_RBX[0x642] = '\0';
                    unaff_RBX[0x643] = '\0';
                    unaff_RBX[0x644] = '\0';
                    unaff_RBX[0x645] = '\0';
                    unaff_RBX[0x646] = '\0';
                    unaff_RBX[0x647] = '\0';
                    *(undefined8 *)(unaff_RBX + 0x648) = uVar41;
                    *(undefined8 *)(unaff_RBX + 0x650) = uVar27;
                    unaff_RBX[0x6c] = '\x01';
                    *(undefined8 *)(pcVar59 + -8) = 0x141739b3e;
                    uVar41 = pdb_140f33290();
                    UNRECOVERED_JUMPTABLE = *(code **)(uVar39 + 0x18);
                    unaff_RBX[0x6c] = '\x01';
                    *(undefined8 *)(pcVar59 + -8) = 0x141739b59;
                    cVar22 = (*UNRECOVERED_JUMPTABLE)(uVar41,unaff_RBX + 0x640);
                    if (cVar22 != '\0') {
                      lVar34 = *plVar7;
                      uVar5 = *(ulonglong *)(lVar34 + 0x38);
                      if (uVar5 == 0) {
                        unaff_RBX[0x6c] = '\x01';
                        *(undefined8 *)(pcVar59 + -8) = 0x14173a12b;
                        pdb_142dc8110(&UNK_14332aff8,0x22,&UNK_14332b278);
                        goto code_r0x00014173a218;
                      }
                      uVar27 = *(undefined8 *)(lVar34 + 0x30);
                      uVar28 = *(undefined8 *)(lVar34 + 0x40);
                      uVar6 = *(undefined8 *)(lVar34 + 0x48);
                      *(undefined8 *)(unaff_RBX + 0xc0) = uVar27;
                      *(ulonglong *)(unaff_RBX + 200) = uVar5;
                      *(undefined8 *)(unaff_RBX + 0xd0) = uVar28;
                      *(undefined8 *)(unaff_RBX + 0xd8) = uVar6;
                      unaff_RBX[0xe0] = '\0';
                      unaff_RBX[0xe1] = '\0';
                      unaff_RBX[0xe2] = '\0';
                      unaff_RBX[0xe3] = '\0';
                      unaff_RBX[0xe4] = '\0';
                      unaff_RBX[0xe5] = '\0';
                      unaff_RBX[0xe6] = '\0';
                      unaff_RBX[0xe7] = '\0';
                      *(undefined **)(unaff_RBX + 0x120) = &UNK_14332b290;
                      unaff_RBX[0x128] = '3';
                      unaff_RBX[0x129] = '\0';
                      unaff_RBX[0x12a] = '\0';
                      unaff_RBX[299] = '\0';
                      unaff_RBX[300] = '\0';
                      unaff_RBX[0x12d] = '\0';
                      unaff_RBX[0x12e] = '\0';
                      unaff_RBX[0x12f] = '\0';
                      if (uVar5 == 1) {
                        unaff_RBX[0x6c] = '\x01';
                        *(undefined8 *)(pcVar59 + -8) = 0x14173a14d;
                        pdb_142dc8110(&UNK_14332aff8,0x22,&UNK_14332b278);
                        goto code_r0x00014173a218;
                      }
                      *(undefined8 *)(unaff_RBX + 0x98) = uVar27;
                      *(ulonglong *)(unaff_RBX + 0xa0) = uVar5;
                      *(undefined8 *)(unaff_RBX + 0xa8) = uVar28;
                      *(undefined8 *)(unaff_RBX + 0xb0) = uVar6;
                      unaff_RBX[0xb8] = '\x01';
                      unaff_RBX[0xb9] = '\0';
                      unaff_RBX[0xba] = '\0';
                      unaff_RBX[0xbb] = '\0';
                      unaff_RBX[0xbc] = '\0';
                      unaff_RBX[0xbd] = '\0';
                      unaff_RBX[0xbe] = '\0';
                      unaff_RBX[0xbf] = '\0';
                      *(longlong *)(unaff_RBX + 0x220) = *plVar26 + 0x20;
                      if (uVar5 < 3) {
                        unaff_RBX[0x6c] = '\x01';
                        *(undefined8 *)(pcVar59 + -8) = 0x14173a16f;
                        pdb_142dc8110(&UNK_14332aff8,0x22,&UNK_14332b278);
                        goto code_r0x00014173a218;
                      }
                      *(undefined8 *)(unaff_RBX + 0x150) = uVar27;
                      *(ulonglong *)(unaff_RBX + 0x158) = uVar5;
                      *(undefined8 *)(unaff_RBX + 0x160) = uVar28;
                      *(undefined8 *)(unaff_RBX + 0x168) = uVar6;
                      unaff_RBX[0x170] = '\x02';
                      unaff_RBX[0x171] = '\0';
                      unaff_RBX[0x172] = '\0';
                      unaff_RBX[0x173] = '\0';
                      unaff_RBX[0x174] = '\0';
                      unaff_RBX[0x175] = '\0';
                      unaff_RBX[0x176] = '\0';
                      unaff_RBX[0x177] = '\0';
                      *(char **)(unaff_RBX + 0x280) = unaff_RBX + 0xc0;
                      *(char **)(unaff_RBX + 0x288) = unaff_RBX + 0x120;
                      *(undefined **)(unaff_RBX + 0x290) = &UNK_14332b058;
                      *(char **)(unaff_RBX + 0x298) = unaff_RBX + 0x98;
                      *(char **)(unaff_RBX + 0x2a0) = unaff_RBX + 0x220;
                      *(undefined **)(unaff_RBX + 0x2a8) = &UNK_14332b078;
                      *(char **)(unaff_RBX + 0x2b0) = pcVar33;
                      *(longlong *)(unaff_RBX + 0x2b8) = *(longlong *)(unaff_RBX + 0x70) + 0x10;
                      *(undefined **)(unaff_RBX + 0x2c0) = &UNK_14332b098;
                      *(char **)(unaff_RBX + 0x108) = pcVar40;
                      unaff_RBX[0x110] = '\x03';
                      unaff_RBX[0x111] = '\0';
                      unaff_RBX[0x112] = '\0';
                      unaff_RBX[0x113] = '\0';
                      unaff_RBX[0x114] = '\0';
                      unaff_RBX[0x115] = '\0';
                      unaff_RBX[0x116] = '\0';
                      unaff_RBX[0x117] = '\0';
                      *(longlong *)(unaff_RBX + 0x118) = lVar34 + 0x30;
                      *(undefined8 *)(unaff_RBX + 0x100) = *(undefined8 *)(unaff_RBX + 0x650);
                      *(undefined8 *)(unaff_RBX + 0xf0) = *(undefined8 *)(unaff_RBX + 0x640);
                      *(undefined8 *)(unaff_RBX + 0xf8) = *(undefined8 *)(unaff_RBX + 0x648);
                      unaff_RBX[0x6c] = '\x01';
                      *(char **)(pcVar59 + 0x20) = unaff_RBX + 0x108;
                      uVar27 = *(undefined8 *)(unaff_RBX + 0x88);
                      *(undefined8 *)(pcVar59 + -8) = 0x141739d0a;
                      pdb_140dd7f80(uVar27,uVar41,uVar39,unaff_RBX + 0xf0);
                    }
                  }
                }
                uVar41 = _UNK_14332b500;
                if (*(longlong *)(unaff_RBX + 0x1c0) == 0) {
                  lVar34 = *(longlong *)(*(longlong *)(unaff_RBX + 0x70) + 0x40);
                  *(undefined8 *)(unaff_RBX + 0x280) = _DAT_14332b4f8;
                  *(undefined8 *)(unaff_RBX + 0x288) = uVar41;
                  lVar29 = *(longlong *)(*(longlong *)(unaff_RBX + 0x70) + 0x38);
                  uVar41 = *(undefined8 *)(lVar29 + 0x20);
                  uVar27 = *(undefined8 *)(lVar29 + 0x28);
                  unaff_RBX[0x6c] = '\x01';
                  *(char **)(pcVar59 + 0x20) = unaff_RBX + 0x1c8;
                  *(undefined8 *)(pcVar59 + -8) = 0x141739d59;
                  pdb_141c2b710(lVar34 + 0x10,unaff_RBX + 0x280,uVar41,uVar27);
                }
              }
              *(undefined4 *)(unaff_RBX + 0x290) = *(undefined4 *)(unaff_RBX + 0x1d0);
              *(undefined4 *)(unaff_RBX + 0x294) = *(undefined4 *)(unaff_RBX + 0x1d4);
              *(undefined4 *)(unaff_RBX + 0x298) = *(undefined4 *)(unaff_RBX + 0x1d8);
              *(undefined4 *)(unaff_RBX + 0x29c) = *(undefined4 *)(unaff_RBX + 0x1dc);
              *(undefined8 *)(unaff_RBX + 0x280) = *(undefined8 *)(unaff_RBX + 0x1c0);
              *(undefined8 *)(unaff_RBX + 0x288) = *(undefined8 *)(unaff_RBX + 0x1c8);
              unaff_RBX[0x6c] = '\0';
              *(undefined8 *)(pcVar59 + -8) = 0x141739d8f;
              pdb_14173b990(unaff_RBX + 0x260,unaff_RBX + 0x280);
              *(longlong *)(unaff_RBX + 0x88) = *(longlong *)(unaff_RBX + 0x70) + 0x58;
              *(undefined8 *)(pcVar59 + -8) = 0x141739da4;
              pdb_141ac4fd0();
              plVar7 = (longlong *)**(undefined8 **)(unaff_RBX + 0x88);
              LOCK();
              *plVar7 = *plVar7 + -1;
              UNLOCK();
              unaff_R13 = *(uint **)(unaff_RBX + 0x80);
              if (*plVar7 == 0) {
                *(undefined8 *)(pcVar59 + -8) = 0x141739dc1;
                pdb_140dd76c0();
              }
              plVar7 = (longlong *)*plVar26;
              LOCK();
              *plVar7 = *plVar7 + -1;
              UNLOCK();
              if (*plVar7 == 0) {
                *(undefined8 *)(pcVar59 + -8) = 0x141739dd3;
                pdb_140dd76c0(plVar26);
              }
              plVar26 = *(longlong **)(*(longlong *)(unaff_RBX + 0x70) + 0x40);
              LOCK();
              *plVar26 = *plVar26 + -1;
              UNLOCK();
              if (*plVar26 == 0) {
                lVar34 = *(longlong *)(unaff_RBX + 0x70);
                *(undefined8 *)(pcVar59 + -8) = 0x141739def;
                pdb_140dd78e0(lVar34 + 0x40);
              }
              plVar26 = (longlong *)**(undefined8 **)(unaff_RBX + 0x70);
              if (plVar26 != (longlong *)0x0) {
                LOCK();
                *plVar26 = *plVar26 + -1;
                UNLOCK();
                if (*plVar26 == 0) {
                  uVar41 = *(undefined8 *)(unaff_RBX + 0x70);
                  *(undefined8 *)(pcVar59 + -8) = 0x141739e0b;
                  pdb_140c7a240(uVar41);
                }
              }
              goto code_r0x000141739e0c;
            }
            lVar34 = *(longlong *)(unaff_RBX + 0x70);
            unaff_R13 = *(uint **)(unaff_RBX + 0x80);
            if (*_DAT_143ca4b08 < 3) {
              bVar21 = *(byte *)(plRam0000000143cad898 + 2);
              pcVar40 = (char *)(ulonglong)bVar21;
              if (2 < bVar21) {
                *(undefined8 *)(pcVar59 + -8) = 0x1417391e4;
                uVar23 = pdb_142db8070(plRam0000000143cad898);
                pcVar40 = (char *)(ulonglong)uVar23;
                lVar34 = *(longlong *)(unaff_RBX + 0x70);
                unaff_R13 = *(uint **)(unaff_RBX + 0x80);
                if ((char)uVar23 != '\0') goto code_r0x000141738431;
                goto code_r0x0001417391fa;
              }
              if (bVar21 == 0) goto code_r0x0001417391fa;
code_r0x000141738431:
              lVar34 = *plVar26;
              *(undefined8 *)(pcVar59 + -8) = 0x141738439;
              cVar22 = pdb_140dd7f60(lVar34);
              lVar34 = *(longlong *)(unaff_RBX + 0x70);
              unaff_R13 = *(uint **)(unaff_RBX + 0x80);
              if (cVar22 == '\0') goto code_r0x0001417391fa;
              lVar29 = *plVar26;
              uVar39 = *(ulonglong *)(lVar29 + 0x38);
              if (uVar39 == 0) {
                *(undefined8 *)(pcVar59 + -8) = 0x14173a073;
                pdb_142dc8110(&UNK_14332aff8,0x22,&UNK_14332b150);
                goto code_r0x00014173a218;
              }
              uVar41 = *(undefined8 *)(lVar29 + 0x30);
              uVar27 = *(undefined8 *)(lVar29 + 0x40);
              uVar28 = *(undefined8 *)(lVar29 + 0x48);
              *(undefined8 *)(unaff_RBX + 0xc0) = uVar41;
              *(ulonglong *)(unaff_RBX + 200) = uVar39;
              *(undefined8 *)(unaff_RBX + 0xd0) = uVar27;
              *(undefined8 *)(unaff_RBX + 0xd8) = uVar28;
              unaff_RBX[0xe0] = '\0';
              unaff_RBX[0xe1] = '\0';
              unaff_RBX[0xe2] = '\0';
              unaff_RBX[0xe3] = '\0';
              unaff_RBX[0xe4] = '\0';
              unaff_RBX[0xe5] = '\0';
              unaff_RBX[0xe6] = '\0';
              unaff_RBX[0xe7] = '\0';
              *(undefined **)(unaff_RBX + 0xf0) = &UNK_14332b168;
              unaff_RBX[0xf8] = '\x1d';
              unaff_RBX[0xf9] = '\0';
              unaff_RBX[0xfa] = '\0';
              unaff_RBX[0xfb] = '\0';
              unaff_RBX[0xfc] = '\0';
              unaff_RBX[0xfd] = '\0';
              unaff_RBX[0xfe] = '\0';
              unaff_RBX[0xff] = '\0';
              if (uVar39 == 1) {
                *(undefined8 *)(pcVar59 + -8) = 0x14173a0af;
                pdb_142dc8110(&UNK_14332aff8,0x22,&UNK_14332b150);
                goto code_r0x00014173a218;
              }
              *(undefined8 *)(unaff_RBX + 0x98) = uVar41;
              *(ulonglong *)(unaff_RBX + 0xa0) = uVar39;
              *(undefined8 *)(unaff_RBX + 0xa8) = uVar27;
              *(undefined8 *)(unaff_RBX + 0xb0) = uVar28;
              unaff_RBX[0xb8] = '\x01';
              unaff_RBX[0xb9] = '\0';
              unaff_RBX[0xba] = '\0';
              unaff_RBX[0xbb] = '\0';
              unaff_RBX[0xbc] = '\0';
              unaff_RBX[0xbd] = '\0';
              unaff_RBX[0xbe] = '\0';
              unaff_RBX[0xbf] = '\0';
              *(longlong *)(unaff_RBX + 0x108) = *(longlong *)(lVar34 + 0x38) + 0x20;
              if (uVar39 < 3) {
                *(undefined8 *)(pcVar59 + -8) = 0x14173a0eb;
                pdb_142dc8110(&UNK_14332aff8,0x22,&UNK_14332b150);
                goto code_r0x00014173a218;
              }
              *(undefined8 *)(unaff_RBX + 0x150) = uVar41;
              *(ulonglong *)(unaff_RBX + 0x158) = uVar39;
              *(undefined8 *)(unaff_RBX + 0x160) = uVar27;
              *(undefined8 *)(unaff_RBX + 0x168) = uVar28;
              unaff_RBX[0x170] = '\x02';
              unaff_RBX[0x171] = '\0';
              unaff_RBX[0x172] = '\0';
              unaff_RBX[0x173] = '\0';
              unaff_RBX[0x174] = '\0';
              unaff_RBX[0x175] = '\0';
              unaff_RBX[0x176] = '\0';
              unaff_RBX[0x177] = '\0';
              *(char **)(unaff_RBX + 0x280) = unaff_RBX + 0xc0;
              *(char **)(unaff_RBX + 0x288) = unaff_RBX + 0xf0;
              *(undefined **)(unaff_RBX + 0x290) = &UNK_14332b058;
              *(char **)(unaff_RBX + 0x298) = unaff_RBX + 0x98;
              *(char **)(unaff_RBX + 0x2a0) = unaff_RBX + 0x108;
              *(undefined **)(unaff_RBX + 0x2a8) = &UNK_14332b078;
              pcVar31 = unaff_RBX + 0x150;
              *(char **)(unaff_RBX + 0x2b0) = pcVar31;
              *(longlong *)(unaff_RBX + 0x2b8) = lVar34 + 0x10;
              *(undefined **)(unaff_RBX + 0x2c0) = &UNK_14332b098;
              *(char **)(unaff_RBX + 0x1c0) = unaff_RBX + 0x280;
              unaff_RBX[0x1c8] = '\x03';
              unaff_RBX[0x1c9] = '\0';
              unaff_RBX[0x1ca] = '\0';
              unaff_RBX[0x1cb] = '\0';
              unaff_RBX[0x1cc] = '\0';
              unaff_RBX[0x1cd] = '\0';
              unaff_RBX[0x1ce] = '\0';
              unaff_RBX[0x1cf] = '\0';
              *(longlong *)(unaff_RBX + 0x1d0) = lVar29 + 0x30;
              *(undefined8 *)(pcVar59 + -8) = 0x1417385c5;
              pdb_14173b8e0(unaff_RBX + 0x1c0);
code_r0x00014173941e:
              lVar34 = *(longlong *)(unaff_RBX + 0x70);
              unaff_R13 = *(uint **)(unaff_RBX + 0x80);
              pcVar33 = pcVar31;
            }
            else {
code_r0x0001417391fa:
              plVar26 = plRam0000000143cad898;
              pcVar33 = pcVar40;
              if ((*_DAT_143ca4ab0 == '\0') && (2 < *_DAT_143ca8e90)) {
                lVar29 = *plRam0000000143cad898;
                uVar41 = *(undefined8 *)(lVar29 + 0x20);
                uVar27 = *(undefined8 *)(lVar29 + 0x28);
                unaff_RBX[0x628] = '\x03';
                unaff_RBX[0x629] = '\0';
                unaff_RBX[0x62a] = '\0';
                unaff_RBX[0x62b] = '\0';
                unaff_RBX[0x62c] = '\0';
                unaff_RBX[0x62d] = '\0';
                unaff_RBX[0x62e] = '\0';
                unaff_RBX[0x62f] = '\0';
                *(undefined8 *)(unaff_RBX + 0x630) = uVar41;
                *(undefined8 *)(unaff_RBX + 0x638) = uVar27;
                *(undefined8 *)(pcVar59 + -8) = 0x141739248;
                pcVar31 = (char *)pdb_140f33290();
                pcVar33 = unaff_RBX + 0x628;
                UNRECOVERED_JUMPTABLE = *(code **)(pcVar40 + 0x18);
                *(undefined8 *)(pcVar59 + -8) = 0x14173925e;
                cVar22 = (*UNRECOVERED_JUMPTABLE)(pcVar31);
                lVar34 = *(longlong *)(unaff_RBX + 0x70);
                unaff_R13 = *(uint **)(unaff_RBX + 0x80);
                if (cVar22 != '\0') {
                  lVar30 = *plVar26;
                  uVar39 = *(ulonglong *)(lVar30 + 0x38);
                  if (uVar39 == 0) {
                    *(undefined8 *)(pcVar59 + -8) = 0x14173a18d;
                    pdb_142dc8110(&UNK_14332aff8,0x22,&UNK_14332b150);
                    goto code_r0x00014173a218;
                  }
                  uVar41 = *(undefined8 *)(lVar30 + 0x30);
                  uVar27 = *(undefined8 *)(lVar30 + 0x40);
                  uVar28 = *(undefined8 *)(lVar30 + 0x48);
                  *(undefined8 *)(unaff_RBX + 0xc0) = uVar41;
                  *(ulonglong *)(unaff_RBX + 200) = uVar39;
                  *(undefined8 *)(unaff_RBX + 0xd0) = uVar27;
                  *(undefined8 *)(unaff_RBX + 0xd8) = uVar28;
                  unaff_RBX[0xe0] = '\0';
                  unaff_RBX[0xe1] = '\0';
                  unaff_RBX[0xe2] = '\0';
                  unaff_RBX[0xe3] = '\0';
                  unaff_RBX[0xe4] = '\0';
                  unaff_RBX[0xe5] = '\0';
                  unaff_RBX[0xe6] = '\0';
                  unaff_RBX[0xe7] = '\0';
                  *(undefined **)(unaff_RBX + 0x108) = &UNK_14332b168;
                  unaff_RBX[0x110] = '\x1d';
                  unaff_RBX[0x111] = '\0';
                  unaff_RBX[0x112] = '\0';
                  unaff_RBX[0x113] = '\0';
                  unaff_RBX[0x114] = '\0';
                  unaff_RBX[0x115] = '\0';
                  unaff_RBX[0x116] = '\0';
                  unaff_RBX[0x117] = '\0';
                  if (uVar39 == 1) {
                    *(undefined8 *)(pcVar59 + -8) = 0x14173a1c6;
                    pdb_142dc8110(&UNK_14332aff8,0x22,&UNK_14332b150);
                    goto code_r0x00014173a218;
                  }
                  *(undefined8 *)(unaff_RBX + 0x98) = uVar41;
                  *(ulonglong *)(unaff_RBX + 0xa0) = uVar39;
                  *(undefined8 *)(unaff_RBX + 0xa8) = uVar27;
                  *(undefined8 *)(unaff_RBX + 0xb0) = uVar28;
                  unaff_RBX[0xb8] = '\x01';
                  unaff_RBX[0xb9] = '\0';
                  unaff_RBX[0xba] = '\0';
                  unaff_RBX[0xbb] = '\0';
                  unaff_RBX[0xbc] = '\0';
                  unaff_RBX[0xbd] = '\0';
                  unaff_RBX[0xbe] = '\0';
                  unaff_RBX[0xbf] = '\0';
                  *(longlong *)(unaff_RBX + 0x120) = *(longlong *)(lVar34 + 0x38) + 0x20;
                  if (uVar39 < 3) {
                    *(undefined8 *)(pcVar59 + -8) = 0x14173a1fc;
                    pdb_142dc8110(&UNK_14332aff8,0x22,&UNK_14332b150);
                    goto code_r0x00014173a218;
                  }
                  *(undefined8 *)(unaff_RBX + 0x150) = uVar41;
                  *(ulonglong *)(unaff_RBX + 0x158) = uVar39;
                  *(undefined8 *)(unaff_RBX + 0x160) = uVar27;
                  *(undefined8 *)(unaff_RBX + 0x168) = uVar28;
                  unaff_RBX[0x170] = '\x02';
                  unaff_RBX[0x171] = '\0';
                  unaff_RBX[0x172] = '\0';
                  unaff_RBX[0x173] = '\0';
                  unaff_RBX[0x174] = '\0';
                  unaff_RBX[0x175] = '\0';
                  unaff_RBX[0x176] = '\0';
                  unaff_RBX[0x177] = '\0';
                  *(char **)(unaff_RBX + 0x280) = unaff_RBX + 0xc0;
                  *(char **)(unaff_RBX + 0x288) = unaff_RBX + 0x108;
                  *(undefined **)(unaff_RBX + 0x290) = &UNK_14332b058;
                  *(char **)(unaff_RBX + 0x298) = unaff_RBX + 0x98;
                  *(char **)(unaff_RBX + 0x2a0) = unaff_RBX + 0x120;
                  *(undefined **)(unaff_RBX + 0x2a8) = &UNK_14332b078;
                  *(char **)(unaff_RBX + 0x2b0) = unaff_RBX + 0x150;
                  *(longlong *)(unaff_RBX + 0x2b8) = lVar34 + 0x10;
                  *(undefined **)(unaff_RBX + 0x2c0) = &UNK_14332b098;
                  *(char **)(unaff_RBX + 0xf0) = unaff_RBX + 0x280;
                  unaff_RBX[0xf8] = '\x03';
                  unaff_RBX[0xf9] = '\0';
                  unaff_RBX[0xfa] = '\0';
                  unaff_RBX[0xfb] = '\0';
                  unaff_RBX[0xfc] = '\0';
                  unaff_RBX[0xfd] = '\0';
                  unaff_RBX[0xfe] = '\0';
                  unaff_RBX[0xff] = '\0';
                  *(longlong *)(unaff_RBX + 0x100) = lVar30 + 0x30;
                  *(undefined8 *)(unaff_RBX + 0x1d0) = *(undefined8 *)(unaff_RBX + 0x638);
                  *(undefined8 *)(unaff_RBX + 0x1c0) = *(undefined8 *)(unaff_RBX + 0x628);
                  *(undefined8 *)(unaff_RBX + 0x1c8) = *(undefined8 *)(unaff_RBX + 0x630);
                  *(char **)(pcVar59 + 0x20) = unaff_RBX + 0xf0;
                  *(undefined8 *)(pcVar59 + -8) = 0x14173941d;
                  pdb_140dd7f80(lVar29,pcVar31,pcVar40,unaff_RBX + 0x1c0);
                  goto code_r0x00014173941e;
                }
              }
            }
            uVar41 = *(undefined8 *)(*(longlong *)(lVar34 + 0x38) + 0x10);
            UNRECOVERED_JUMPTABLE =
                 *(code **)(*(longlong *)(*(longlong *)(lVar34 + 0x38) + 0x18) + 0x28);
            *(undefined8 *)(pcVar59 + -8) = 0x141739438;
            uVar41 = (*UNRECOVERED_JUMPTABLE)(uVar41);
            *(undefined8 *)(unaff_RBX + 0x148) = uVar41;
            *(char **)(unaff_RBX + 0x140) = pcVar33;
            lVar34 = *(longlong *)(unaff_RBX + 0x70);
            *(undefined1 *)(lVar34 + 0x49) = 1;
            plVar26 = *(longlong **)(lVar34 + 0x40);
            LOCK();
            lVar34 = *plVar26;
            *plVar26 = *plVar26 + 1;
            UNLOCK();
            if (*plVar26 == 0 || SCARRY8(lVar34,1) != *plVar26 < 0) goto code_r0x00014173a218;
            *(longlong **)(unaff_RBX + 0x80) = plVar26;
            *(longlong **)(unaff_RBX + 0x98) = plVar26;
            *(undefined8 *)(pcVar59 + -8) = 0x141739477;
            pdb_1417473a0(unaff_RBX + 0x150);
            unaff_RBX[0x280] = '\x01';
            unaff_RBX[0x281] = '\0';
            unaff_RBX[0x282] = '\0';
            unaff_RBX[0x283] = '\0';
            unaff_RBX[0x284] = '\0';
            unaff_RBX[0x285] = '\0';
            unaff_RBX[0x286] = '\0';
            unaff_RBX[0x287] = '\0';
            unaff_RBX[0x288] = '\x01';
            unaff_RBX[0x289] = '\0';
            unaff_RBX[0x28a] = '\0';
            unaff_RBX[0x28b] = '\0';
            unaff_RBX[0x28c] = '\0';
            unaff_RBX[0x28d] = '\0';
            unaff_RBX[0x28e] = '\0';
            unaff_RBX[0x28f] = '\0';
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
            *(undefined8 *)(pcVar59 + -8) = 0x1417394e9;
            pdb_14007ee60();
            uVar41 = 8;
            *(undefined8 *)(pcVar59 + -8) = 0x1417394f8;
            pbVar35 = pub_1406abab0(0x70,8);
            if (pbVar35 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
              *(undefined8 *)(pcVar59 + -8) = 0x141739612;
              pdb_142dc7e11(8,0x70);
            }
            uVar27 = *(undefined8 *)(unaff_RBX + 0x2e8);
            *(undefined8 *)(pbVar35 + 0x60) = *(undefined8 *)(unaff_RBX + 0x2e0);
            *(undefined8 *)(pbVar35 + 0x68) = uVar27;
            uVar27 = *(undefined8 *)(unaff_RBX + 0x2d8);
            *(undefined8 *)(pbVar35 + 0x50) = *(undefined8 *)(unaff_RBX + 0x2d0);
            *(undefined8 *)(pbVar35 + 0x58) = uVar27;
            uVar27 = *(undefined8 *)(unaff_RBX + 0x2c8);
            *(undefined8 *)(pbVar35 + 0x40) = *(undefined8 *)(unaff_RBX + 0x2c0);
            *(undefined8 *)(pbVar35 + 0x48) = uVar27;
            uVar27 = *(undefined8 *)(unaff_RBX + 0x280);
            uVar28 = *(undefined8 *)(unaff_RBX + 0x288);
            uVar6 = *(undefined8 *)(unaff_RBX + 0x290);
            uVar3 = *(undefined8 *)(unaff_RBX + 0x298);
            uVar69 = *(undefined4 *)(unaff_RBX + 0x2a0);
            uVar70 = *(undefined4 *)(unaff_RBX + 0x2a4);
            uVar71 = *(undefined4 *)(unaff_RBX + 0x2a8);
            uVar72 = *(undefined4 *)(unaff_RBX + 0x2ac);
            uVar73 = *(undefined4 *)(unaff_RBX + 0x2b4);
            uVar74 = *(undefined4 *)(unaff_RBX + 0x2b8);
            uVar9 = *(undefined4 *)(unaff_RBX + 700);
            *(undefined4 *)(pbVar35 + 0x30) = *(undefined4 *)(unaff_RBX + 0x2b0);
            *(undefined4 *)(pbVar35 + 0x34) = uVar73;
            *(undefined4 *)(pbVar35 + 0x38) = uVar74;
            *(undefined4 *)(pbVar35 + 0x3c) = uVar9;
            *(undefined4 *)(pbVar35 + 0x20) = uVar69;
            *(undefined4 *)(pbVar35 + 0x24) = uVar70;
            *(undefined4 *)(pbVar35 + 0x28) = uVar71;
            *(undefined4 *)(pbVar35 + 0x2c) = uVar72;
            *(undefined8 *)(pbVar35 + 0x10) = uVar6;
            *(undefined8 *)(pbVar35 + 0x18) = uVar3;
            *(undefined8 *)pbVar35 = uVar27;
            *(undefined8 *)(pbVar35 + 8) = uVar28;
            puVar4 = *(undefined8 **)(unaff_RBX + 0x70);
            plVar26 = (longlong *)*puVar4;
            uVar27 = *(undefined8 *)(unaff_RBX + 0x148);
            if (plVar26 != (longlong *)0x0) {
              uVar41 = puVar4[1];
              LOCK();
              lVar34 = *plVar26;
              *plVar26 = *plVar26 + 1;
              UNLOCK();
              if (*plVar26 == 0 || SCARRY8(lVar34,1) != *plVar26 < 0) goto code_r0x00014173a218;
            }
            *(undefined1 *)(puVar4 + 9) = 1;
            puVar4[0xf] = *(undefined8 *)(unaff_RBX + 0x80);
            puVar4[0x10] = pbVar35;
            puVar4[0x11] = plVar26;
            puVar4[0x12] = uVar41;
            LOCK();
            lVar34 = *(longlong *)pbVar35;
            *(longlong *)pbVar35 = *(longlong *)pbVar35 + 1;
            UNLOCK();
            if (*(longlong *)pbVar35 == 0 || SCARRY8(lVar34,1) != *(longlong *)pbVar35 < 0)
            goto code_r0x00014173a218;
            puVar4[10] = pbVar35;
            *(undefined1 *)((longlong)puVar4 + 0x49) = 0;
            *(undefined1 *)(puVar4 + 9) = 0;
            uVar41 = puVar4[0xf];
            uVar28 = puVar4[0x10];
            uVar69 = *(undefined4 *)((longlong)puVar4 + 0x8c);
            uVar70 = *(undefined4 *)(puVar4 + 0x12);
            uVar71 = *(undefined4 *)((longlong)puVar4 + 0x94);
            *(undefined4 *)(unaff_RBX + 0x290) = *(undefined4 *)(puVar4 + 0x11);
            *(undefined4 *)(unaff_RBX + 0x294) = uVar69;
            *(undefined4 *)(unaff_RBX + 0x298) = uVar70;
            *(undefined4 *)(unaff_RBX + 0x29c) = uVar71;
            *(undefined8 *)(unaff_RBX + 0x280) = uVar41;
            *(undefined8 *)(unaff_RBX + 0x288) = uVar28;
            UNRECOVERED_JUMPTABLE = *(code **)(*(longlong *)(unaff_RBX + 0x140) + 0x30);
            *(undefined8 *)(unaff_RBX + 0x1f0) = uVar27;
            *(longlong *)(unaff_RBX + 0x1f8) = *(longlong *)(unaff_RBX + 0x140);
            pcVar40 = unaff_RBX + 0x280;
            *(undefined8 *)(pcVar59 + -8) = 0x1417395eb;
            uVar41 = (*UNRECOVERED_JUMPTABLE)();
            lVar34 = *(longlong *)(unaff_RBX + 0x70);
            *(undefined8 *)(lVar34 + 0x68) = uVar41;
            *(char **)(lVar34 + 0x70) = pcVar40;
code_r0x00014173743f:
            UNRECOVERED_JUMPTABLE = *(code **)(pcVar40 + 0x18);
            *(undefined8 *)(pcVar59 + -8) = 0x14173744d;
            (*UNRECOVERED_JUMPTABLE)(unaff_RBX + 0x280,uVar41,unaff_RDI);
            lVar34 = *(longlong *)(unaff_RBX + 0x280);
            if (lVar34 != 2) {
              uVar41 = *(undefined8 *)(unaff_RBX + 0x288);
              pauVar38 = *(undefined1 (**) [16])(unaff_RBX + 0x290);
              *(undefined8 *)(unaff_RBX + 0x80) =
                   *(undefined8 *)(*(longlong *)(unaff_RBX + 0x70) + 0x68);
              puVar4 = *(undefined8 **)(*(longlong *)(unaff_RBX + 0x70) + 0x70);
              *(undefined8 **)(unaff_RBX + 0x88) = puVar4;
              UNRECOVERED_JUMPTABLE = (code *)*puVar4;
              if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                uVar27 = *(undefined8 *)(unaff_RBX + 0x80);
                *(undefined8 *)(pcVar59 + -8) = 0x1417374a3;
                (*UNRECOVERED_JUMPTABLE)(uVar27);
              }
              pbVar35 = *(byte **)(unaff_RBX + 0x80);
              arg1 = *(undefined1 (**) [16])(*(longlong *)(unaff_RBX + 0x88) + 8);
              if (arg1 != (undefined1 (*) [16])0x0) {
                uVar39 = *(ulonglong *)(*(longlong *)(unaff_RBX + 0x88) + 0x10);
                *(undefined8 *)(pcVar59 + -8) = 0x1417374c4;
                pub_1406abac0(pbVar35,(ulonglong)arg1,uVar39);
              }
              lVar29 = *(longlong *)(unaff_RBX + 0x70);
              if ((int)lVar34 == 1) {
                uVar27 = *(undefined8 *)(lVar29 + 0x10);
                uVar28 = *(undefined8 *)(lVar29 + 0x18);
                *(undefined8 *)(unaff_RBX + 0x1f0) = *(undefined8 *)(unaff_RBX + 0x148);
                *(undefined8 *)(unaff_RBX + 0x1f8) = *(undefined8 *)(unaff_RBX + 0x140);
                *(undefined8 *)(pcVar59 + -8) = 0x1417374fd;
                pauVar25 = (undefined1 (*) [16])pdb_140c799b0(uVar41);
                *(undefined1 (**) [16])(unaff_RBX + 0xb0) = pauVar38;
                lVar29 = *(longlong *)(unaff_RBX + 0x70);
                arg1 = pauVar38;
                pauVar38 = pauVar25;
                uVar41 = uVar28;
              }
              else {
                uVar27 = 0;
              }
              *(undefined8 *)(unaff_RBX + 0x98) = uVar27;
              *(undefined8 *)(unaff_RBX + 0xa0) = uVar41;
              *(undefined1 (**) [16])(unaff_RBX + 0xa8) = pauVar38;
              lVar34 = *(longlong *)(lVar29 + 0x50);
              pcVar40 = (char *)(lVar34 + 0x10);
              LOCK();
              bVar64 = *(char *)(lVar34 + 0x10) == '\0';
              if (bVar64) {
                *(char *)(lVar34 + 0x10) = '\x01';
              }
              UNLOCK();
              if (!bVar64) {
                unaff_RBX[0x7d] = '\x01';
                *(undefined8 *)(pcVar59 + -8) = 0x14173885c;
                pdb_142dc6be0(pcVar40);
              }
              puVar61 = _DAT_143ca8f38;
              if ((*_DAT_143ca8f38 & 0x7fffffffffffffff) == 0) {
                bVar21 = 0;
                cVar22 = *(char *)(lVar34 + 0x11);
              }
              else {
                unaff_RBX[0x7d] = '\x01';
                *(undefined8 *)(pcVar59 + -8) = 0x14173886b;
                bVar21 = pdb_142dc79e0();
                bVar21 = bVar21 ^ 1;
                cVar22 = *(char *)(lVar34 + 0x11);
              }
              if (cVar22 != '\0') {
                *(char **)(unaff_RBX + 0x280) = pcVar40;
                unaff_RBX[0x288] = bVar21;
                *(undefined **)(pcVar59 + 0x20) = &UNK_14332b190;
                    /* WARNING: Subroutine does not return */
                *(undefined8 *)(pcVar59 + -8) = 0x1417388b2;
                pdb_142dc8170(&UNK_14332b8d0,0x2b,unaff_RBX + 0x280,&UNK_14332b920);
              }
              uVar41 = *(undefined8 *)(lVar34 + 0x18);
              uVar27 = *(undefined8 *)(lVar34 + 0x20);
              uVar69 = *(undefined4 *)(lVar34 + 0x2c);
              uVar70 = *(undefined4 *)(lVar34 + 0x30);
              uVar71 = *(undefined4 *)(lVar34 + 0x34);
              *(undefined4 *)(unaff_RBX + 0x160) = *(undefined4 *)(lVar34 + 0x28);
              *(undefined4 *)(unaff_RBX + 0x164) = uVar69;
              *(undefined4 *)(unaff_RBX + 0x168) = uVar70;
              *(undefined4 *)(unaff_RBX + 0x16c) = uVar71;
              *(undefined8 *)(unaff_RBX + 0x150) = uVar41;
              *(undefined8 *)(unaff_RBX + 0x158) = uVar27;
              uVar27 = _UNK_14332bb38;
              uVar41 = _UNK_14332bb30;
              *(undefined8 *)(lVar34 + 0x18) = _UNK_14332bb30;
              *(undefined8 *)(lVar34 + 0x20) = uVar27;
              uVar6 = _UNK_14332bb48;
              uVar28 = _UNK_14332bb40;
              *(undefined8 *)(lVar34 + 0x28) = _UNK_14332bb40;
              *(undefined8 *)(lVar34 + 0x30) = uVar6;
              if ((bVar21 == 0) && ((*puVar61 & 0x7fffffffffffffff) != 0)) {
                unaff_RBX[0x7b] = '\x01';
                *(undefined8 *)(pcVar59 + -8) = 0x141738992;
                cVar22 = pdb_142dc79e0();
                if (cVar22 == '\0') {
                  *(undefined1 *)(lVar34 + 0x11) = 1;
                }
              }
              LOCK();
              cVar22 = *pcVar40;
              *pcVar40 = '\0';
              UNLOCK();
              if (cVar22 == '\x02') {
                unaff_RBX[0x7b] = '\x01';
                *(undefined8 *)(pcVar59 + -8) = 0x1417388c4;
                pdb_142dc6ca0(pcVar40);
              }
              lVar29 = *(longlong *)(unaff_RBX + 0x70);
              lVar30 = *(longlong *)(lVar29 + 0x50);
              lVar34 = lVar30 + 0x38;
              LOCK();
              bVar64 = *(char *)(lVar30 + 0x38) == '\0';
              if (bVar64) {
                *(char *)(lVar30 + 0x38) = '\x01';
              }
              UNLOCK();
              if (!bVar64) {
                unaff_RBX[0x7b] = '\x01';
                *(undefined8 *)(pcVar59 + -8) = 0x1417388d6;
                pdb_142dc6be0(lVar34);
              }
              if ((*puVar61 & 0x7fffffffffffffff) == 0) {
                uVar23 = 0;
                cVar22 = *(char *)(lVar30 + 0x39);
              }
              else {
                unaff_RBX[0x7b] = '\x01';
                *(undefined8 *)(pcVar59 + -8) = 0x1417388e5;
                uVar23 = pdb_142dc79e0();
                uVar23 = uVar23 ^ 1;
                cVar22 = *(char *)(lVar30 + 0x39);
              }
              if (cVar22 != '\0') {
                *(longlong *)(unaff_RBX + 0x280) = lVar34;
                unaff_RBX[0x288] = (char)uVar23;
                *(undefined **)(pcVar59 + 0x20) = &UNK_14332b1a8;
                    /* WARNING: Subroutine does not return */
                *(undefined8 *)(pcVar59 + -8) = 0x14173892c;
                pdb_142dc8170(&UNK_14332b8d0,0x2b,unaff_RBX + 0x280,&UNK_14332b940);
              }
              *(uint *)(unaff_RBX + 0x88) = uVar23;
              *(longlong *)(unaff_RBX + 0x80) = lVar34;
              *(undefined8 *)(pcVar59 + -8) = 0x141737633;
              plVar26 = (longlong *)pdb_140f3bda0();
              if ((char)plVar26[2] == '\x01') {
                lVar34 = *plVar26;
                arg1 = (undefined1 (*) [16])plVar26[1];
              }
              else {
                *(undefined8 *)(pcVar59 + -8) = 0x141738937;
                lVar34 = pdb_140f4fd10();
                *plVar26 = lVar34;
                plVar26[1] = (longlong)arg1;
                *(undefined1 *)(plVar26 + 2) = 1;
              }
              *plVar26 = lVar34 + 1;
              pauVar38 = *(undefined1 (**) [16])(lVar30 + 0x40);
              lVar2 = *(longlong *)(lVar30 + 0x48);
              uVar3 = *(undefined8 *)(lVar30 + 0x58);
              *(undefined8 *)(lVar30 + 0x50) = uVar28;
              *(undefined8 *)(lVar30 + 0x58) = uVar6;
              *(undefined8 *)(lVar30 + 0x40) = uVar41;
              *(undefined8 *)(lVar30 + 0x48) = uVar27;
              *(longlong *)(lVar30 + 0x60) = lVar34;
              *(undefined1 (**) [16])(lVar30 + 0x68) = arg1;
              auVar68 = *pauVar38;
              if (lVar2 == 0) {
                uVar41 = 0;
              }
              else {
                lVar34 = lVar2 * 0x61 + 0x71;
                arg1 = pauVar38 + lVar2 * -6 + -6;
                uVar41 = 0x10;
              }
              *(undefined8 *)(unaff_RBX + 0x280) = uVar41;
              *(longlong *)(unaff_RBX + 0x288) = lVar34;
              *(undefined1 (**) [16])(unaff_RBX + 0x290) = arg1;
              *(undefined1 (**) [16])(unaff_RBX + 0x298) = pauVar38;
              *(undefined1 (**) [16])(unaff_RBX + 0x2a0) = pauVar38 + 1;
              *(undefined1 **)(unaff_RBX + 0x2a8) = *pauVar38 + lVar2 + 1;
              *(ushort *)(unaff_RBX + 0x2b0) =
                   ~((ushort)(SUB161(auVar68 >> 7,0) & 1) |
                     (ushort)(SUB161(auVar68 >> 0xf,0) & 1) << 1 |
                     (ushort)(SUB161(auVar68 >> 0x17,0) & 1) << 2 |
                     (ushort)(SUB161(auVar68 >> 0x1f,0) & 1) << 3 |
                     (ushort)(SUB161(auVar68 >> 0x27,0) & 1) << 4 |
                     (ushort)(SUB161(auVar68 >> 0x2f,0) & 1) << 5 |
                     (ushort)(SUB161(auVar68 >> 0x37,0) & 1) << 6 |
                     (ushort)(SUB161(auVar68 >> 0x3f,0) & 1) << 7 |
                     (ushort)(SUB161(auVar68 >> 0x47,0) & 1) << 8 |
                     (ushort)(SUB161(auVar68 >> 0x4f,0) & 1) << 9 |
                     (ushort)(SUB161(auVar68 >> 0x57,0) & 1) << 10 |
                     (ushort)(SUB161(auVar68 >> 0x5f,0) & 1) << 0xb |
                     (ushort)(SUB161(auVar68 >> 0x67,0) & 1) << 0xc |
                     (ushort)(SUB161(auVar68 >> 0x6f,0) & 1) << 0xd |
                     (ushort)(SUB161(auVar68 >> 0x77,0) & 1) << 0xe |
                    (ushort)(byte)(auVar68[0xf] >> 7) << 0xf);
              *(undefined8 *)(unaff_RBX + 0x2b8) = uVar3;
              *(undefined8 *)(pcVar59 + -8) = 0x1417376f8;
              pdb_1415ed630(unaff_RBX + 0x120,unaff_RBX + 0x280);
              if ((unaff_RBX[0x88] == '\0') && ((*puVar61 & 0x7fffffffffffffff) != 0)) {
                unaff_RBX[0x7e] = '\x01';
                unaff_RBX[0x7f] = '\x01';
                *(undefined8 *)(pcVar59 + -8) = 0x1417389b1;
                cVar22 = pdb_142dc79e0();
                if (cVar22 == '\0') {
                  *(undefined1 *)(lVar30 + 0x39) = 1;
                }
              }
              LOCK();
              cVar22 = **(char **)(unaff_RBX + 0x80);
              **(char **)(unaff_RBX + 0x80) = '\0';
              UNLOCK();
              if (cVar22 == '\x02') {
                unaff_RBX[0x7e] = '\x01';
                unaff_RBX[0x7f] = '\x01';
                *(undefined8 *)(pcVar59 + -8) = 0x141738955;
                pdb_142dc6ca0();
              }
              pauVar38 = *(undefined1 (**) [16])(unaff_RBX + 0x150);
              auVar68 = *pauVar38;
              *(undefined1 (**) [16])(unaff_RBX + 0x280) = pauVar38;
              *(undefined1 (**) [16])(unaff_RBX + 0x288) = pauVar38 + 1;
              *(undefined1 **)(unaff_RBX + 0x290) = *pauVar38 + *(longlong *)(unaff_RBX + 0x158) + 1
              ;
              *(ushort *)(unaff_RBX + 0x298) =
                   ~((ushort)(SUB161(auVar68 >> 7,0) & 1) |
                     (ushort)(SUB161(auVar68 >> 0xf,0) & 1) << 1 |
                     (ushort)(SUB161(auVar68 >> 0x17,0) & 1) << 2 |
                     (ushort)(SUB161(auVar68 >> 0x1f,0) & 1) << 3 |
                     (ushort)(SUB161(auVar68 >> 0x27,0) & 1) << 4 |
                     (ushort)(SUB161(auVar68 >> 0x2f,0) & 1) << 5 |
                     (ushort)(SUB161(auVar68 >> 0x37,0) & 1) << 6 |
                     (ushort)(SUB161(auVar68 >> 0x3f,0) & 1) << 7 |
                     (ushort)(SUB161(auVar68 >> 0x47,0) & 1) << 8 |
                     (ushort)(SUB161(auVar68 >> 0x4f,0) & 1) << 9 |
                     (ushort)(SUB161(auVar68 >> 0x57,0) & 1) << 10 |
                     (ushort)(SUB161(auVar68 >> 0x5f,0) & 1) << 0xb |
                     (ushort)(SUB161(auVar68 >> 0x67,0) & 1) << 0xc |
                     (ushort)(SUB161(auVar68 >> 0x6f,0) & 1) << 0xd |
                     (ushort)(SUB161(auVar68 >> 0x77,0) & 1) << 0xe |
                    (ushort)(byte)(auVar68[0xf] >> 7) << 0xf);
              *(undefined8 *)(unaff_RBX + 0x2a0) = *(undefined8 *)(unaff_RBX + 0x168);
              *(longlong *)(unaff_RBX + 0x2a8) = *(longlong *)(unaff_RBX + 0x70) + 0x40;
              unaff_RBX[0x7e] = '\x01';
              unaff_RBX[0x7f] = '\x01';
              pcVar40 = unaff_RBX + 0x280;
              *(undefined8 *)(pcVar59 + -8) = 0x14173779a;
              pdb_1415ea2a0(unaff_RBX + 0x108);
              *(longlong **)(unaff_RBX + 0x88) = (longlong *)(lVar29 + 0x50);
              *(uint **)(unaff_RBX + 0x80) = unaff_R13;
              if (*(longlong *)(unaff_RBX + 0x98) == 0) {
                UNRECOVERED_JUMPTABLE = *(code **)(*(longlong *)(unaff_RBX + 0xa8) + 0x18);
                lVar34 = *(longlong *)(unaff_RBX + 0xa0) +
                         (*(longlong *)(*(longlong *)(unaff_RBX + 0xa8) + 0x10) - 1U &
                         0xfffffffffffffff0) + 0x10;
                unaff_RBX[0x6d] = '\x01';
                unaff_RBX[0x6e] = '\x01';
                unaff_RBX[0x6f] = '\x01';
                *(undefined8 *)(pcVar59 + -8) = 0x141737946;
                (*UNRECOVERED_JUMPTABLE)(unaff_RBX + 0x280,lVar34);
                auVar66[0] = -(unaff_RBX[0x280] == DAT_14332a670);
                auVar66[1] = -(unaff_RBX[0x281] == UNK_14332a671);
                auVar66[2] = -(unaff_RBX[0x282] == UNK_14332a672);
                auVar66[3] = -(unaff_RBX[0x283] == UNK_14332a673);
                auVar66[4] = -(unaff_RBX[0x284] == UNK_14332a674);
                auVar66[5] = -(unaff_RBX[0x285] == UNK_14332a675);
                auVar66[6] = -(unaff_RBX[0x286] == UNK_14332a676);
                auVar66[7] = -(unaff_RBX[0x287] == UNK_14332a677);
                auVar66[8] = -(unaff_RBX[0x288] == UNK_14332a678);
                auVar66[9] = -(unaff_RBX[0x289] == UNK_14332a679);
                auVar66[10] = -(unaff_RBX[0x28a] == UNK_14332a67a);
                auVar66[0xb] = -(unaff_RBX[0x28b] == UNK_14332a67b);
                auVar66[0xc] = -(unaff_RBX[0x28c] == UNK_14332a67c);
                auVar66[0xd] = -(unaff_RBX[0x28d] == UNK_14332a67d);
                auVar66[0xe] = -(unaff_RBX[0x28e] == UNK_14332a67e);
                auVar66[0xf] = -(unaff_RBX[0x28f] == UNK_14332a67f);
                if ((ushort)((ushort)(SUB161(auVar66 >> 7,0) & 1) |
                             (ushort)(SUB161(auVar66 >> 0xf,0) & 1) << 1 |
                             (ushort)(SUB161(auVar66 >> 0x17,0) & 1) << 2 |
                             (ushort)(SUB161(auVar66 >> 0x1f,0) & 1) << 3 |
                             (ushort)(SUB161(auVar66 >> 0x27,0) & 1) << 4 |
                             (ushort)(SUB161(auVar66 >> 0x2f,0) & 1) << 5 |
                             (ushort)(SUB161(auVar66 >> 0x37,0) & 1) << 6 |
                             (ushort)(SUB161(auVar66 >> 0x3f,0) & 1) << 7 |
                             (ushort)(SUB161(auVar66 >> 0x47,0) & 1) << 8 |
                             (ushort)(SUB161(auVar66 >> 0x4f,0) & 1) << 9 |
                             (ushort)(SUB161(auVar66 >> 0x57,0) & 1) << 10 |
                             (ushort)(SUB161(auVar66 >> 0x5f,0) & 1) << 0xb |
                             (ushort)(SUB161(auVar66 >> 0x67,0) & 1) << 0xc |
                             (ushort)(SUB161(auVar66 >> 0x6f,0) & 1) << 0xd |
                             (ushort)(SUB161(auVar66 >> 0x77,0) & 1) << 0xe |
                            (ushort)(auVar66[0xf] >> 7) << 0xf) != 0xffff) {
                  unaff_RBX[0x6d] = '\x01';
                  unaff_RBX[0x6e] = '\x01';
                  unaff_RBX[0x6f] = '\x01';
                  *(undefined8 *)(pcVar59 + -8) = 0x1417389fc;
                  pdb_142dc8110(&UNK_14332b0b8,8,&UNK_14332b1c0);
                  goto code_r0x00014173a218;
                }
                unaff_RBX[0xf0] = '\0';
                unaff_RBX[0xf1] = '\0';
                unaff_RBX[0xf2] = '\0';
                unaff_RBX[0xf3] = '\0';
                unaff_RBX[0xf4] = '\0';
                unaff_RBX[0xf5] = '\0';
                unaff_RBX[0xf6] = '\0';
                unaff_RBX[0xf7] = '\0';
                unaff_RBX[0xf8] = '\x10';
                unaff_RBX[0xf9] = '\0';
                unaff_RBX[0xfa] = '\0';
                unaff_RBX[0xfb] = '\0';
                unaff_RBX[0xfc] = '\0';
                unaff_RBX[0xfd] = '\0';
                unaff_RBX[0xfe] = '\0';
                unaff_RBX[0xff] = '\0';
                unaff_RBX[0x100] = '\0';
                unaff_RBX[0x101] = '\0';
                unaff_RBX[0x102] = '\0';
                unaff_RBX[0x103] = '\0';
                unaff_RBX[0x104] = '\0';
                unaff_RBX[0x105] = '\0';
                unaff_RBX[0x106] = '\0';
                unaff_RBX[0x107] = '\0';
                *(char **)(unaff_RBX + 0x280) = unaff_RBX + 0xf0;
                unaff_RBX[0x7c] = '\x01';
                pcVar40 = unaff_RBX + 0x280;
                *(undefined8 *)(pcVar59 + -8) = 0x1417379af;
                pdb_140d9d5e0(lVar34,pcVar40,&UNK_14332b448);
                lVar29 = *(longlong *)(*(longlong *)(unaff_RBX + 0x70) + 0x38);
                lVar30 = *(longlong *)(*(longlong *)(unaff_RBX + 0x70) + 0x40);
                *(undefined8 *)(unaff_RBX + 0x208) = *(undefined8 *)(lVar29 + 0x28);
                *(undefined8 *)(unaff_RBX + 0x200) = *(undefined8 *)(lVar29 + 0x20);
                uVar41 = *(undefined8 *)(lVar29 + 0x10);
                UNRECOVERED_JUMPTABLE = *(code **)(*(longlong *)(lVar29 + 0x18) + 0x38);
                unaff_RBX[0x7c] = '\x01';
                *(undefined8 *)(pcVar59 + -8) = 0x1417379e4;
                uVar41 = (*UNRECOVERED_JUMPTABLE)(uVar41);
                *(undefined8 *)(unaff_RBX + 0x5d0) = uVar41;
                uVar41 = *(undefined8 *)
                          (*(longlong *)(*(longlong *)(unaff_RBX + 0x70) + 0x38) + 0x10);
                UNRECOVERED_JUMPTABLE =
                     *(code **)(*(longlong *)
                                 (*(longlong *)(*(longlong *)(unaff_RBX + 0x70) + 0x38) + 0x18) +
                               0x18);
                unaff_RBX[0x7c] = '\x01';
                *(undefined8 *)(pcVar59 + -8) = 0x141737a08;
                uVar27 = (*UNRECOVERED_JUMPTABLE)(uVar41);
                uVar41 = *(undefined8 *)
                          (*(longlong *)(*(longlong *)(unaff_RBX + 0x70) + 0x38) + 0x10);
                UNRECOVERED_JUMPTABLE =
                     *(code **)(*(longlong *)
                                 (*(longlong *)(*(longlong *)(unaff_RBX + 0x70) + 0x38) + 0x18) +
                               0x20);
                unaff_RBX[0x7c] = '\x01';
                *(undefined8 *)(pcVar59 + -8) = 0x141737a26;
                uVar20 = (*UNRECOVERED_JUMPTABLE)(uVar41);
                unaff_RBX[0x7c] = '\x01';
                *(undefined8 *)(pcVar59 + -8) = 0x141737a44;
                pdb_1415e6d20(unaff_RBX + 0x1c0,unaff_RBX + 0x120);
                *(undefined8 *)(unaff_RBX + 0xd0) = *(undefined8 *)(unaff_RBX + 0x118);
                *(undefined8 *)(unaff_RBX + 0xc0) = *(undefined8 *)(unaff_RBX + 0x108);
                *(undefined8 *)(unaff_RBX + 200) = *(undefined8 *)(unaff_RBX + 0x110);
                *(undefined8 *)(unaff_RBX + 0x290) = *(undefined8 *)(unaff_RBX + 0x100);
                *(undefined8 *)(unaff_RBX + 0x280) = *(undefined8 *)(unaff_RBX + 0xf0);
                *(undefined8 *)(unaff_RBX + 0x288) = *(undefined8 *)(unaff_RBX + 0xf8);
                unaff_RBX[0x7c] = '\0';
                *(char **)(pcVar59 + 0x50) = unaff_RBX + 0x280;
                *(char **)(pcVar59 + 0x48) = unaff_RBX + 0xc0;
                *(char **)(pcVar59 + 0x40) = unaff_RBX + 0x1c0;
                pcVar59[0x38] = uVar20;
                *(undefined8 *)(pcVar59 + 0x30) = uVar27;
                *(char **)(pcVar59 + 0x28) = pcVar40;
                *(undefined8 *)(pcVar59 + 0x20) = *(undefined8 *)(unaff_RBX + 0x5d0);
                uVar41 = *(undefined8 *)(unaff_RBX + 0x200);
                uVar27 = *(undefined8 *)(unaff_RBX + 0x208);
                *(undefined8 *)(pcVar59 + -8) = 0x141737ad8;
                lVar29 = pdb_1417ffee0(lVar30 + 0x10,uVar41,uVar27,lVar34);
              }
              else {
                lVar34 = *(longlong *)(*(longlong *)(unaff_RBX + 0x70) + 0x38);
                lVar29 = *(longlong *)(*(longlong *)(unaff_RBX + 0x70) + 0x40);
                *(undefined8 *)(unaff_RBX + 0x208) = *(undefined8 *)(lVar34 + 0x28);
                *(undefined8 *)(unaff_RBX + 0x200) = *(undefined8 *)(lVar34 + 0x20);
                uVar41 = *(undefined8 *)(lVar34 + 0x10);
                UNRECOVERED_JUMPTABLE = *(code **)(*(longlong *)(lVar34 + 0x18) + 0x38);
                unaff_RBX[0x6d] = '\x01';
                unaff_RBX[0x6e] = '\x01';
                unaff_RBX[0x6f] = '\x01';
                *(undefined8 *)(pcVar59 + -8) = 0x1417377f3;
                uVar27 = (*UNRECOVERED_JUMPTABLE)(uVar41);
                uVar41 = *(undefined8 *)
                          (*(longlong *)(*(longlong *)(unaff_RBX + 0x70) + 0x38) + 0x10);
                UNRECOVERED_JUMPTABLE =
                     *(code **)(*(longlong *)
                                 (*(longlong *)(*(longlong *)(unaff_RBX + 0x70) + 0x38) + 0x18) +
                               0x18);
                unaff_RBX[0x6d] = '\x01';
                unaff_RBX[0x6e] = '\x01';
                unaff_RBX[0x6f] = '\x01';
                *(undefined8 *)(pcVar59 + -8) = 0x14173781c;
                uVar28 = (*UNRECOVERED_JUMPTABLE)(uVar41);
                uVar41 = *(undefined8 *)
                          (*(longlong *)(*(longlong *)(unaff_RBX + 0x70) + 0x38) + 0x10);
                UNRECOVERED_JUMPTABLE =
                     *(code **)(*(longlong *)
                                 (*(longlong *)(*(longlong *)(unaff_RBX + 0x70) + 0x38) + 0x18) +
                               0x20);
                unaff_RBX[0x6d] = '\x01';
                unaff_RBX[0x6e] = '\x01';
                unaff_RBX[0x6f] = '\x01';
                *(undefined8 *)(pcVar59 + -8) = 0x141737842;
                uVar20 = (*UNRECOVERED_JUMPTABLE)(uVar41);
                unaff_RBX[0x6d] = '\x01';
                unaff_RBX[0x6e] = '\x01';
                unaff_RBX[0x6f] = '\x01';
                *(undefined8 *)(pcVar59 + -8) = 0x141737868;
                pdb_1415e6d20(unaff_RBX + 0x1c0,unaff_RBX + 0x120);
                *(undefined8 *)(unaff_RBX + 0xd0) = *(undefined8 *)(unaff_RBX + 0x118);
                *(undefined8 *)(unaff_RBX + 0xc0) = *(undefined8 *)(unaff_RBX + 0x108);
                *(undefined8 *)(unaff_RBX + 200) = *(undefined8 *)(unaff_RBX + 0x110);
                unaff_RBX[0x280] = '\0';
                unaff_RBX[0x281] = '\0';
                unaff_RBX[0x282] = '\0';
                unaff_RBX[0x283] = '\0';
                unaff_RBX[0x284] = '\0';
                unaff_RBX[0x285] = '\0';
                unaff_RBX[0x286] = '\0';
                unaff_RBX[0x287] = '\0';
                unaff_RBX[0x288] = '\x10';
                unaff_RBX[0x289] = '\0';
                unaff_RBX[0x28a] = '\0';
                unaff_RBX[0x28b] = '\0';
                unaff_RBX[0x28c] = '\0';
                unaff_RBX[0x28d] = '\0';
                unaff_RBX[0x28e] = '\0';
                unaff_RBX[0x28f] = '\0';
                unaff_RBX[0x290] = '\0';
                unaff_RBX[0x291] = '\0';
                unaff_RBX[0x292] = '\0';
                unaff_RBX[0x293] = '\0';
                unaff_RBX[0x294] = '\0';
                unaff_RBX[0x295] = '\0';
                unaff_RBX[0x296] = '\0';
                unaff_RBX[0x297] = '\0';
                unaff_RBX[0x6d] = '\0';
                unaff_RBX[0x6e] = '\x01';
                unaff_RBX[0x6f] = '\x01';
                *(char **)(pcVar59 + 0x50) = unaff_RBX + 0x280;
                *(char **)(pcVar59 + 0x48) = unaff_RBX + 0xc0;
                *(char **)(pcVar59 + 0x40) = unaff_RBX + 0x1c0;
                pcVar59[0x38] = uVar20;
                *(undefined8 *)(pcVar59 + 0x30) = uVar28;
                *(char **)(pcVar59 + 0x28) = pcVar40;
                *(undefined8 *)(pcVar59 + 0x20) = uVar27;
                uVar41 = *(undefined8 *)(unaff_RBX + 0x200);
                uVar27 = *(undefined8 *)(unaff_RBX + 0x208);
                *(undefined8 *)(pcVar59 + -8) = 0x141737902;
                lVar29 = pdb_1417ffee0(lVar29 + 0x10,uVar41,uVar27,0);
              }
              *(undefined8 *)(unaff_RBX + 0x280) = *(undefined8 *)(unaff_RBX + 0x98);
              *(undefined8 *)(unaff_RBX + 0x288) = *(undefined8 *)(unaff_RBX + 0xa0);
              *(undefined4 *)(unaff_RBX + 0x290) = *(undefined4 *)(unaff_RBX + 0xa8);
              *(undefined4 *)(unaff_RBX + 0x294) = *(undefined4 *)(unaff_RBX + 0xac);
              *(undefined4 *)(unaff_RBX + 0x298) = *(undefined4 *)(unaff_RBX + 0xb0);
              *(undefined4 *)(unaff_RBX + 0x29c) = *(undefined4 *)(unaff_RBX + 0xb4);
              *(longlong *)(unaff_RBX + 0x2a0) = lVar29;
              lVar34 = *(longlong *)(unaff_RBX + 0x280);
              if (lVar29 == 0 || lVar34 != 0) {
                uVar41 = *(undefined8 *)(unaff_RBX + 0x288);
                pbVar35 = *(byte **)(unaff_RBX + 0x290);
                *(undefined8 *)(unaff_RBX + 0x240) = *(undefined8 *)(unaff_RBX + 0x130);
                unaff_RDI = *(uint **)(unaff_RBX + 0x298);
                *(undefined8 *)(unaff_RBX + 0x230) = *(undefined8 *)(unaff_RBX + 0x120);
                *(undefined8 *)(unaff_RBX + 0x238) = *(undefined8 *)(unaff_RBX + 0x128);
                if (lVar29 != 0) {
                  unaff_RBX[0x6d] = '\0';
                  unaff_RBX[0x6e] = '\0';
                  unaff_RBX[0x6f] = '\0';
                  *(undefined8 *)(pcVar59 + -8) = 0x141737b6d;
                  pdb_1404b38e0(unaff_RBX + 0x2a0);
                }
              }
              else {
                lVar34 = *(longlong *)(*(longlong *)(unaff_RBX + 0x70) + 0x10);
                uVar41 = *(undefined8 *)(*(longlong *)(unaff_RBX + 0x70) + 0x18);
                unaff_RBX[0xc0] = '\x01';
                unaff_RBX[0xc1] = '\0';
                unaff_RBX[0xc2] = '\0';
                unaff_RBX[0xc3] = '\0';
                unaff_RBX[0xc4] = '\0';
                unaff_RBX[0xc5] = '\0';
                unaff_RBX[0xc6] = '\0';
                unaff_RBX[199] = '\0';
                unaff_RBX[200] = '\x01';
                unaff_RBX[0xc9] = '\0';
                unaff_RBX[0xca] = '\0';
                unaff_RBX[0xcb] = '\0';
                unaff_RBX[0xcc] = '\0';
                unaff_RBX[0xcd] = '\0';
                unaff_RBX[0xce] = '\0';
                unaff_RBX[0xcf] = '\0';
                *(longlong *)(unaff_RBX + 0xd0) = lVar29;
                *(undefined8 *)(pcVar59 + -8) = 0x141737b9d;
                pdb_14007ee60();
                *(undefined8 *)(pcVar59 + -8) = 0x141737bac;
                pbVar35 = pub_1406abab0(0x18,8);
                if (pbVar35 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
                  *(undefined8 *)(pcVar59 + -8) = 0x1417389d2;
                  pdb_142dc7e11(8,0x18);
                }
                *(undefined8 *)(pbVar35 + 0x10) = *(undefined8 *)(unaff_RBX + 0xd0);
                uVar27 = *(undefined8 *)(unaff_RBX + 200);
                *(undefined8 *)pbVar35 = *(undefined8 *)(unaff_RBX + 0xc0);
                *(undefined8 *)(pbVar35 + 8) = uVar27;
                *(undefined8 *)(unaff_RBX + 0x230) = *(undefined8 *)(unaff_RBX + 0x120);
                *(undefined8 *)(unaff_RBX + 0x238) = *(undefined8 *)(unaff_RBX + 0x128);
                *(undefined8 *)(unaff_RBX + 0x240) = *(undefined8 *)(unaff_RBX + 0x130);
                if (*(longlong *)(unaff_RBX + 0x280) == 0) {
                  plVar26 = *(longlong **)(unaff_RBX + 0x288);
                  LOCK();
                  *plVar26 = *plVar26 + -1;
                  UNLOCK();
                  unaff_RDI = (uint *)&UNK_14332b220;
                  if (*plVar26 == 0) {
                    unaff_RBX[0x6d] = '\0';
                    unaff_RBX[0x6e] = '\0';
                    unaff_RBX[0x6f] = '\0';
                    *(undefined8 *)(pcVar59 + -8) = 0x141737e1b;
                    pdb_140c7a240(unaff_RBX + 0x288);
                  }
                }
                else {
                  plVar26 = *(longlong **)(unaff_RBX + 0x290);
                  LOCK();
                  *plVar26 = *plVar26 + -1;
                  UNLOCK();
                  unaff_RDI = (uint *)&UNK_14332b220;
                  if (*plVar26 == 0) {
                    unaff_RBX[0x6d] = '\0';
                    unaff_RBX[0x6e] = '\0';
                    unaff_RBX[0x6f] = '\0';
                    *(undefined8 *)(pcVar59 + -8) = 0x141737c2a;
                    pdb_140c7a240(unaff_RBX + 0x290);
                  }
                }
              }
              lVar29 = *(longlong *)(unaff_RBX + 0x158);
              if (lVar29 != 0) {
                lVar30 = lVar29 * 0x10 + 0x10;
                uVar39 = lVar29 + lVar30 + 0x11;
                if (uVar39 != 0) {
                  lVar29 = *(longlong *)(unaff_RBX + 0x150);
                  *(undefined8 *)(pcVar59 + -8) = 0x141737e55;
                  pub_1406abac0((byte *)(lVar29 - lVar30),uVar39,0x10);
                }
              }
              plVar26 = (longlong *)**(undefined8 **)(unaff_RBX + 0x88);
              LOCK();
              *plVar26 = *plVar26 + -1;
              UNLOCK();
              if (*plVar26 == 0) {
                *(undefined8 *)(unaff_RBX + 0x250) = *(undefined8 *)(unaff_RBX + 0x148);
                *(undefined8 *)(unaff_RBX + 600) = *(undefined8 *)(unaff_RBX + 0x140);
                *(undefined8 *)(pcVar59 + -8) = 0x141737e86;
                pdb_140dd7630();
              }
              lVar29 = *(longlong *)(unaff_RBX + 0x70);
              *(undefined2 *)(lVar29 + 0x48) = 0;
              goto code_r0x000141739892;
            }
            unaff_R13[0] = 1;
            unaff_R13[1] = 0;
            uVar20 = 4;
            puVar24 = unaff_R13;
            goto code_r0x000141739e30;
          }
          uVar41 = *(undefined8 *)(in_R11 + 0x30);
          *(undefined8 *)(unaff_RBX + 0x120) = *(undefined8 *)(in_R11 + 0x28);
          *(undefined8 *)(unaff_RBX + 0x128) = uVar41;
          plVar26 = plRam0000000143cad8b0;
          if (*_DAT_143ca4b08 < 2) {
            bVar21 = *(byte *)(plRam0000000143cad8b0 + 2);
            unaff_R12 = (ulonglong)bVar21;
            if (2 < bVar21) {
              unaff_RBX[0x6b] = '\x01';
              *(undefined8 *)(pcVar59 + -8) = 0x141738e3f;
              uVar23 = pdb_142db8070(plRam0000000143cad8b0);
              unaff_R12 = (ulonglong)uVar23;
              in_R11 = *(char **)(unaff_RBX + 0x70);
              if ((char)uVar23 != '\0') goto code_r0x00014173820d;
              goto code_r0x000141738e4e;
            }
            if (bVar21 == 0) goto code_r0x000141738e4e;
code_r0x00014173820d:
            lVar34 = *plVar26;
            unaff_RBX[0x6b] = '\x01';
            *(undefined8 *)(pcVar59 + -8) = 0x141738219;
            cVar22 = pdb_140dd7f60(lVar34);
            in_R11 = *(char **)(unaff_RBX + 0x70);
            if (cVar22 == '\0') goto code_r0x000141738e4e;
            lVar34 = *plVar26;
            uVar39 = *(ulonglong *)(lVar34 + 0x38);
            if (uVar39 == 0) {
              unaff_RBX[0x6b] = '\x01';
              *(undefined8 *)(pcVar59 + -8) = 0x141739eaf;
              pdb_142dc8110(&UNK_14332aff8,0x22,&UNK_14332b020);
              goto code_r0x00014173a218;
            }
            uVar41 = *(undefined8 *)(lVar34 + 0x30);
            uVar27 = *(undefined8 *)(lVar34 + 0x40);
            uVar28 = *(undefined8 *)(lVar34 + 0x48);
            *(undefined8 *)(unaff_RBX + 0xc0) = uVar41;
            *(ulonglong *)(unaff_RBX + 200) = uVar39;
            *(undefined8 *)(unaff_RBX + 0xd0) = uVar27;
            *(undefined8 *)(unaff_RBX + 0xd8) = uVar28;
            unaff_RBX[0xe0] = '\0';
            unaff_RBX[0xe1] = '\0';
            unaff_RBX[0xe2] = '\0';
            unaff_RBX[0xe3] = '\0';
            unaff_RBX[0xe4] = '\0';
            unaff_RBX[0xe5] = '\0';
            unaff_RBX[0xe6] = '\0';
            unaff_RBX[0xe7] = '\0';
            *(undefined **)(unaff_RBX + 0xf0) = &UNK_14332b038;
            unaff_RBX[0xf8] = '3';
            unaff_RBX[0xf9] = '\0';
            unaff_RBX[0xfa] = '\0';
            unaff_RBX[0xfb] = '\0';
            unaff_RBX[0xfc] = '\0';
            unaff_RBX[0xfd] = '\0';
            unaff_RBX[0xfe] = '\0';
            unaff_RBX[0xff] = '\0';
            if (uVar39 == 1) {
              unaff_RBX[0x6b] = '\x01';
              *(undefined8 *)(pcVar59 + -8) = 0x141739eef;
              pdb_142dc8110(&UNK_14332aff8,0x22,&UNK_14332b020);
              goto code_r0x00014173a218;
            }
            *(undefined8 *)(unaff_RBX + 0x98) = uVar41;
            *(ulonglong *)(unaff_RBX + 0xa0) = uVar39;
            *(undefined8 *)(unaff_RBX + 0xa8) = uVar27;
            *(undefined8 *)(unaff_RBX + 0xb0) = uVar28;
            unaff_RBX[0xb8] = '\x01';
            unaff_RBX[0xb9] = '\0';
            unaff_RBX[0xba] = '\0';
            unaff_RBX[0xbb] = '\0';
            unaff_RBX[0xbc] = '\0';
            unaff_RBX[0xbd] = '\0';
            unaff_RBX[0xbe] = '\0';
            unaff_RBX[0xbf] = '\0';
            *(longlong *)(unaff_RBX + 0x108) = *(longlong *)(in_R11 + 0x38) + 0x20;
            if (uVar39 < 3) {
              unaff_RBX[0x6b] = '\x01';
              *(undefined8 *)(pcVar59 + -8) = 0x141739f2f;
              pdb_142dc8110(&UNK_14332aff8,0x22,&UNK_14332b020);
              goto code_r0x00014173a218;
            }
            *(undefined8 *)(unaff_RBX + 0x150) = uVar41;
            *(ulonglong *)(unaff_RBX + 0x158) = uVar39;
            *(undefined8 *)(unaff_RBX + 0x160) = uVar27;
            *(undefined8 *)(unaff_RBX + 0x168) = uVar28;
            unaff_RBX[0x170] = '\x02';
            unaff_RBX[0x171] = '\0';
            unaff_RBX[0x172] = '\0';
            unaff_RBX[0x173] = '\0';
            unaff_RBX[0x174] = '\0';
            unaff_RBX[0x175] = '\0';
            unaff_RBX[0x176] = '\0';
            unaff_RBX[0x177] = '\0';
            *(char **)(unaff_RBX + 0x280) = unaff_RBX + 0xc0;
            *(char **)(unaff_RBX + 0x288) = unaff_RBX + 0xf0;
            *(undefined **)(unaff_RBX + 0x290) = &UNK_14332b058;
            *(char **)(unaff_RBX + 0x298) = unaff_RBX + 0x98;
            *(char **)(unaff_RBX + 0x2a0) = unaff_RBX + 0x108;
            *(undefined **)(unaff_RBX + 0x2a8) = &UNK_14332b078;
            *(char **)(unaff_RBX + 0x2b0) = unaff_RBX + 0x150;
            *(char **)(unaff_RBX + 0x2b8) = in_R11 + 0x10;
            *(undefined **)(unaff_RBX + 0x2c0) = &UNK_14332b098;
            *(char **)(unaff_RBX + 0x1c0) = unaff_RBX + 0x280;
            unaff_RBX[0x1c8] = '\x03';
            unaff_RBX[0x1c9] = '\0';
            unaff_RBX[0x1ca] = '\0';
            unaff_RBX[0x1cb] = '\0';
            unaff_RBX[0x1cc] = '\0';
            unaff_RBX[0x1cd] = '\0';
            unaff_RBX[0x1ce] = '\0';
            unaff_RBX[0x1cf] = '\0';
            *(longlong *)(unaff_RBX + 0x1d0) = lVar34 + 0x30;
            unaff_RBX[0x6b] = '\x01';
            *(undefined8 *)(pcVar59 + -8) = 0x1417383a2;
            pdb_14173b620(unaff_RBX + 0x1c0);
code_r0x000141739077:
            in_R11 = *(char **)(unaff_RBX + 0x70);
          }
          else {
code_r0x000141738e4e:
            plVar26 = plRam0000000143cad8b0;
            if ((*_DAT_143ca4ab0 == '\0') && (3 < *_DAT_143ca8e90)) {
              lVar34 = *plRam0000000143cad8b0;
              uVar41 = *(undefined8 *)(lVar34 + 0x20);
              uVar27 = *(undefined8 *)(lVar34 + 0x28);
              unaff_RBX[0x5e0] = '\x04';
              unaff_RBX[0x5e1] = '\0';
              unaff_RBX[0x5e2] = '\0';
              unaff_RBX[0x5e3] = '\0';
              unaff_RBX[0x5e4] = '\0';
              unaff_RBX[0x5e5] = '\0';
              unaff_RBX[0x5e6] = '\0';
              unaff_RBX[0x5e7] = '\0';
              *(undefined8 *)(unaff_RBX + 0x5e8) = uVar41;
              *(undefined8 *)(unaff_RBX + 0x5f0) = uVar27;
              unaff_RBX[0x6b] = '\x01';
              *(undefined8 *)(pcVar59 + -8) = 0x141738e9f;
              uVar41 = pdb_140f33290();
              UNRECOVERED_JUMPTABLE = *(code **)(unaff_R12 + 0x18);
              unaff_RBX[0x6b] = '\x01';
              *(undefined8 *)(pcVar59 + -8) = 0x141738eba;
              cVar22 = (*UNRECOVERED_JUMPTABLE)(uVar41,unaff_RBX + 0x5e0);
              in_R11 = *(char **)(unaff_RBX + 0x70);
              if (cVar22 != '\0') {
                lVar29 = *plVar26;
                uVar39 = *(ulonglong *)(lVar29 + 0x38);
                if (uVar39 != 0) {
                  uVar27 = *(undefined8 *)(lVar29 + 0x30);
                  uVar28 = *(undefined8 *)(lVar29 + 0x40);
                  uVar6 = *(undefined8 *)(lVar29 + 0x48);
                  *(undefined8 *)(unaff_RBX + 0xc0) = uVar27;
                  *(ulonglong *)(unaff_RBX + 200) = uVar39;
                  *(undefined8 *)(unaff_RBX + 0xd0) = uVar28;
                  *(undefined8 *)(unaff_RBX + 0xd8) = uVar6;
                  unaff_RBX[0xe0] = '\0';
                  unaff_RBX[0xe1] = '\0';
                  unaff_RBX[0xe2] = '\0';
                  unaff_RBX[0xe3] = '\0';
                  unaff_RBX[0xe4] = '\0';
                  unaff_RBX[0xe5] = '\0';
                  unaff_RBX[0xe6] = '\0';
                  unaff_RBX[0xe7] = '\0';
                  *(undefined **)(unaff_RBX + 0x108) = &UNK_14332b038;
                  unaff_RBX[0x110] = '3';
                  unaff_RBX[0x111] = '\0';
                  unaff_RBX[0x112] = '\0';
                  unaff_RBX[0x113] = '\0';
                  unaff_RBX[0x114] = '\0';
                  unaff_RBX[0x115] = '\0';
                  unaff_RBX[0x116] = '\0';
                  unaff_RBX[0x117] = '\0';
                  if (uVar39 == 1) {
                    unaff_RBX[0x6b] = '\x01';
                    *(undefined8 *)(pcVar59 + -8) = 0x14173a015;
                    pdb_142dc8110(&UNK_14332aff8,0x22,&UNK_14332b020);
                    goto code_r0x00014173a218;
                  }
                  *(undefined8 *)(unaff_RBX + 0x98) = uVar27;
                  *(ulonglong *)(unaff_RBX + 0xa0) = uVar39;
                  *(undefined8 *)(unaff_RBX + 0xa8) = uVar28;
                  *(undefined8 *)(unaff_RBX + 0xb0) = uVar6;
                  unaff_RBX[0xb8] = '\x01';
                  unaff_RBX[0xb9] = '\0';
                  unaff_RBX[0xba] = '\0';
                  unaff_RBX[0xbb] = '\0';
                  unaff_RBX[0xbc] = '\0';
                  unaff_RBX[0xbd] = '\0';
                  unaff_RBX[0xbe] = '\0';
                  unaff_RBX[0xbf] = '\0';
                  *(longlong *)(unaff_RBX + 0x230) = *(longlong *)(in_R11 + 0x38) + 0x20;
                  if (uVar39 < 3) {
                    unaff_RBX[0x6b] = '\x01';
                    *(undefined8 *)(pcVar59 + -8) = 0x14173a055;
                    pdb_142dc8110(&UNK_14332aff8,0x22,&UNK_14332b020);
                    goto code_r0x00014173a218;
                  }
                  *(undefined8 *)(unaff_RBX + 0x150) = uVar27;
                  *(ulonglong *)(unaff_RBX + 0x158) = uVar39;
                  *(undefined8 *)(unaff_RBX + 0x160) = uVar28;
                  *(undefined8 *)(unaff_RBX + 0x168) = uVar6;
                  unaff_RBX[0x170] = '\x02';
                  unaff_RBX[0x171] = '\0';
                  unaff_RBX[0x172] = '\0';
                  unaff_RBX[0x173] = '\0';
                  unaff_RBX[0x174] = '\0';
                  unaff_RBX[0x175] = '\0';
                  unaff_RBX[0x176] = '\0';
                  unaff_RBX[0x177] = '\0';
                  *(char **)(unaff_RBX + 0x280) = unaff_RBX + 0xc0;
                  *(char **)(unaff_RBX + 0x288) = unaff_RBX + 0x108;
                  *(undefined **)(unaff_RBX + 0x290) = &UNK_14332b058;
                  *(char **)(unaff_RBX + 0x298) = unaff_RBX + 0x98;
                  *(char **)(unaff_RBX + 0x2a0) = unaff_RBX + 0x230;
                  *(undefined **)(unaff_RBX + 0x2a8) = &UNK_14332b078;
                  *(char **)(unaff_RBX + 0x2b0) = unaff_RBX + 0x150;
                  *(char **)(unaff_RBX + 0x2b8) = in_R11 + 0x10;
                  *(undefined **)(unaff_RBX + 0x2c0) = &UNK_14332b098;
                  *(char **)(unaff_RBX + 0xf0) = unaff_RBX + 0x280;
                  unaff_RBX[0xf8] = '\x03';
                  unaff_RBX[0xf9] = '\0';
                  unaff_RBX[0xfa] = '\0';
                  unaff_RBX[0xfb] = '\0';
                  unaff_RBX[0xfc] = '\0';
                  unaff_RBX[0xfd] = '\0';
                  unaff_RBX[0xfe] = '\0';
                  unaff_RBX[0xff] = '\0';
                  *(longlong *)(unaff_RBX + 0x100) = lVar29 + 0x30;
                  *(undefined8 *)(unaff_RBX + 0x1d0) = *(undefined8 *)(unaff_RBX + 0x5f0);
                  *(undefined8 *)(unaff_RBX + 0x1c0) = *(undefined8 *)(unaff_RBX + 0x5e0);
                  *(undefined8 *)(unaff_RBX + 0x1c8) = *(undefined8 *)(unaff_RBX + 0x5e8);
                  unaff_RBX[0x6b] = '\x01';
                  *(char **)(pcVar59 + 0x20) = unaff_RBX + 0xf0;
                  *(undefined8 *)(pcVar59 + -8) = 0x141739076;
                  pdb_140dd7f80(lVar34,uVar41,unaff_R12,unaff_RBX + 0x1c0);
                  goto code_r0x000141739077;
                }
                unaff_RBX[0x6b] = '\x01';
                *(undefined8 *)(pcVar59 + -8) = 0x141739fd5;
                pdb_142dc8110(&UNK_14332aff8,0x22,&UNK_14332b020);
code_r0x00014173a218:
                    /* WARNING: Does not return */
                UNRECOVERED_JUMPTABLE = (code *)invalidInstructionException();
                (*UNRECOVERED_JUMPTABLE)();
              }
            }
          }
          uVar41 = _UNK_14332b500;
          lVar34 = *(longlong *)(in_R11 + 0x40);
          *(undefined8 *)(unaff_RBX + 0x280) = _DAT_14332b4f8;
          *(undefined8 *)(unaff_RBX + 0x288) = uVar41;
          uVar41 = *(undefined8 *)(*(longlong *)(in_R11 + 0x38) + 0x20);
          uVar27 = *(undefined8 *)(*(longlong *)(in_R11 + 0x38) + 0x28);
          unaff_RBX[0x6b] = '\x01';
          *(char **)(pcVar59 + 0x20) = unaff_RBX + 0x120;
          *(undefined8 *)(pcVar59 + -8) = 0x1417390bb;
          pdb_141c2b710(lVar34 + 0x10,unaff_RBX + 0x280,uVar41,uVar27);
          lVar34 = *(longlong *)(unaff_RBX + 0x120);
          lVar29 = *(longlong *)(unaff_RBX + 0x128);
          *(longlong *)(unaff_RBX + 0x150) = lVar34;
          *(longlong *)(unaff_RBX + 0x158) = lVar29;
          lVar30 = *(longlong *)(lVar29 + 0x10);
          *(longlong *)(unaff_RBX + 0x80) = lVar34;
          UNRECOVERED_JUMPTABLE = *(code **)(lVar29 + 0x18);
          *(undefined8 *)(pcVar59 + -8) = 0x1417390fc;
          (*UNRECOVERED_JUMPTABLE)
                    (unaff_RBX + 0x280,lVar34 + (lVar30 - 1U & 0xfffffffffffffff0) + 0x10);
          auVar67[0] = -(unaff_RBX[0x280] == DAT_14332a670);
          auVar67[1] = -(unaff_RBX[0x281] == UNK_14332a671);
          auVar67[2] = -(unaff_RBX[0x282] == UNK_14332a672);
          auVar67[3] = -(unaff_RBX[0x283] == UNK_14332a673);
          auVar67[4] = -(unaff_RBX[0x284] == UNK_14332a674);
          auVar67[5] = -(unaff_RBX[0x285] == UNK_14332a675);
          auVar67[6] = -(unaff_RBX[0x286] == UNK_14332a676);
          auVar67[7] = -(unaff_RBX[0x287] == UNK_14332a677);
          auVar67[8] = -(unaff_RBX[0x288] == UNK_14332a678);
          auVar67[9] = -(unaff_RBX[0x289] == UNK_14332a679);
          auVar67[10] = -(unaff_RBX[0x28a] == UNK_14332a67a);
          auVar67[0xb] = -(unaff_RBX[0x28b] == UNK_14332a67b);
          auVar67[0xc] = -(unaff_RBX[0x28c] == UNK_14332a67c);
          auVar67[0xd] = -(unaff_RBX[0x28d] == UNK_14332a67d);
          auVar67[0xe] = -(unaff_RBX[0x28e] == UNK_14332a67e);
          auVar67[0xf] = -(unaff_RBX[0x28f] == UNK_14332a67f);
          if ((ushort)((ushort)(SUB161(auVar67 >> 7,0) & 1) |
                       (ushort)(SUB161(auVar67 >> 0xf,0) & 1) << 1 |
                       (ushort)(SUB161(auVar67 >> 0x17,0) & 1) << 2 |
                       (ushort)(SUB161(auVar67 >> 0x1f,0) & 1) << 3 |
                       (ushort)(SUB161(auVar67 >> 0x27,0) & 1) << 4 |
                       (ushort)(SUB161(auVar67 >> 0x2f,0) & 1) << 5 |
                       (ushort)(SUB161(auVar67 >> 0x37,0) & 1) << 6 |
                       (ushort)(SUB161(auVar67 >> 0x3f,0) & 1) << 7 |
                       (ushort)(SUB161(auVar67 >> 0x47,0) & 1) << 8 |
                       (ushort)(SUB161(auVar67 >> 0x4f,0) & 1) << 9 |
                       (ushort)(SUB161(auVar67 >> 0x57,0) & 1) << 10 |
                       (ushort)(SUB161(auVar67 >> 0x5f,0) & 1) << 0xb |
                       (ushort)(SUB161(auVar67 >> 0x67,0) & 1) << 0xc |
                       (ushort)(SUB161(auVar67 >> 0x6f,0) & 1) << 0xd |
                       (ushort)(SUB161(auVar67 >> 0x77,0) & 1) << 0xe |
                      (ushort)(auVar67[0xf] >> 7) << 0xf) != 0xffff) {
            *(undefined8 *)(unaff_RBX + 0x280) = *(undefined8 *)(unaff_RBX + 0x80);
            *(longlong *)(unaff_RBX + 0x288) = lVar29;
            *(undefined **)(pcVar59 + 0x20) = &UNK_14332b0c0;
                    /* WARNING: Subroutine does not return */
            *(undefined8 *)(pcVar59 + -8) = 0x1417391d2;
            pdb_142dc8170(&UNK_14332b0b8,8,unaff_RBX + 0x280,&UNK_14332b870);
          }
          *(undefined8 *)(unaff_RBX + 0x268) = *(undefined8 *)(unaff_RBX + 0x80);
          unaff_RBX[0x260] = '\0';
          unaff_RBX[0x261] = '\0';
          unaff_RBX[0x262] = '\0';
          unaff_RBX[0x263] = '\0';
          unaff_RBX[0x264] = '\0';
          unaff_RBX[0x265] = '\0';
          unaff_RBX[0x266] = '\0';
          unaff_RBX[0x267] = '\0';
          plVar26 = *(longlong **)(*(longlong *)(unaff_RBX + 0x70) + 0x38);
          LOCK();
          *plVar26 = *plVar26 + -1;
          lVar34 = *plVar26;
          UNLOCK();
          goto joined_r0x000141738e0f;
        case (uint *)0x141737437:
          uVar41 = *(undefined8 *)(in_R11 + 0x68);
          pcVar40 = *(char **)(in_R11 + 0x70);
          goto code_r0x00014173743f;
        case (uint *)0x141738c63:
          goto code_r0x000141738c63;
        case (uint *)0x141739e5c:
                    /* WARNING: Subroutine does not return */
          *(undefined8 *)(pcVar59 + -8) = 0x141739e68;
          pdb_142dc8570(&UNK_14332b178);
        case (uint *)0x141739e68:
                    /* WARNING: Subroutine does not return */
          *(undefined8 *)(pcVar59 + -8) = 0x141739e74;
          pdb_142dc8590(&UNK_14332b178);
        case (uint *)0x14173f2eb:
          puVar36 = (uint *)0x4801beca;
          uVar39 = (ulonglong)*(uint *)((longlong)puVar24 * 4 + 0x4801beca);
          puVar62 = unaff_RDI;
code_r0x00014173f2f3:
          puVar24 = (uint *)(uVar39 + (longlong)puVar36);
          bVar64 = puVar24 == (uint *)0x0;
          *(char **)(pcVar40 + 0xa8) = param_2;
          unaff_RDI = puVar62;
          do {
            puVar58 = pcVar59;
            puVar13 = pcVar59;
            puVar55 = pcVar59;
            puVar60 = pcVar59;
            puVar49 = pcVar59;
            puVar14 = pcVar59;
            puVar15 = pcVar59;
            puVar16 = pcVar59;
            puVar56 = pcVar59;
            puVar54 = pcVar59;
            puVar17 = pcVar59;
            puVar52 = pcVar59;
            puVar18 = pcVar59;
            puVar51 = pcVar59;
            puVar50 = pcVar59;
            puVar19 = pcVar59;
            puVar47 = pcVar59;
            puVar48 = pcVar59;
            puVar45 = pcVar59;
            puVar46 = pcVar59;
            puVar43 = pcVar59;
            puVar44 = pcVar59;
            puVar32 = param_1;
            puVar62 = unaff_RDI;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
            switch(puVar24) {
            case (uint *)0x1417368ce:
              goto code_r0x0001417368ce;
            case (uint *)0x1417368da:
              goto code_r0x0001417368da;
            case (uint *)0x1417369de:
              goto code_r0x0001417369de;
            case (uint *)0x1417369ea:
              goto code_r0x0001417369ea;
            case (uint *)0x141736b3e:
              goto code_r0x000141736b3e;
            case (uint *)0x141736b4a:
              goto code_r0x000141736b4a;
            case (uint *)0x141736c4e:
              goto code_r0x000141736c4e;
            case (uint *)0x141736c5a:
              goto code_r0x000141736c5a;
            case (uint *)0x141736dae:
              goto code_r0x000141736dae;
            case (uint *)0x141736dba:
              goto code_r0x000141736dba;
            case (uint *)0x141736ebe:
              goto code_r0x000141736ebe;
            case (uint *)0x141736eca:
              goto code_r0x000141736eca;
            case (uint *)0x14173701e:
              goto code_r0x00014173701e;
            case (uint *)0x14173702a:
              goto code_r0x00014173702a;
            case (uint *)0x14173712e:
              goto code_r0x00014173712e;
            case (uint *)0x14173713a:
              goto code_r0x00014173713a;
            case (uint *)0x1417372b3:
              goto code_r0x0001417372b3;
            case (uint *)0x1417373f7:
              goto code_r0x0001417373f7;
            case (uint *)0x141738c23:
              goto code_r0x000141738c23;
            case (uint *)0x141739e1c:
              goto code_r0x000141739e1c;
            case (uint *)0x141739e28:
              goto code_r0x000141739e28;
            case (uint *)0x14173f2ab:
              goto code_r0x00014173f2ab;
            case (uint *)0x14173f2f9:
code_r0x00014173f2f9:
              pcVar59 = puVar17;
              *(byte *)puVar24 = (byte)*puVar24 + (char)puVar24;
              bVar64 = (byte)*puVar24 == 0;
              break;
            case (uint *)0x14173f44e:
              goto code_r0x00014173f44e;
            case (uint *)0x14173f45a:
              goto code_r0x00014173f45a;
            case (uint *)0x14173f577:
              goto code_r0x00014173f577;
            case (uint *)0x14173f5b7:
              goto code_r0x00014173f5b7;
            case (uint *)0x14173f6c2:
              goto code_r0x00014173f6c2;
            case (uint *)0x14173f6ce:
              goto code_r0x00014173f6ce;
            case (uint *)0x14173f802:
              goto code_r0x00014173f802;
            case (uint *)0x14173f853:
              goto code_r0x00014173f853;
            case (uint *)0x14173f963:
              goto code_r0x00014173f963;
            case (uint *)0x14173f96f:
              goto code_r0x00014173f96f;
            case (uint *)0x14173fa8e:
              goto code_r0x00014173fa8e;
            case (uint *)0x14173fae4:
              goto code_r0x00014173fae4;
            case (uint *)0x14173fc46:
              goto code_r0x00014173fc46;
            case (uint *)0x14173fc52:
              goto code_r0x00014173fc52;
            case (uint *)0x14173fd83:
              goto code_r0x00014173fd83;
            case (uint *)0x14173fe1a:
              goto code_r0x00014173fe1a;
            case (uint *)0x1417403d9:
              goto code_r0x0001417403d9;
            case (uint *)0x1417403e5:
              goto code_r0x0001417403e5;
            }
          } while( true );
        case (uint *)0x14173f339:
          *(byte *)puVar24 = (byte)*puVar24;
          *(byte *)unaff_RDI = (byte)*unaff_RDI + bVar21;
          *(int *)(param_2 + 0x90) = *(int *)(param_2 + 0x90) - (int)pcVar59;
          goto code_r0x00014173f344;
        case (uint *)0x14173f48e:
          pcVar59 = (char *)(ulonglong)((int)puVar24 + 0x48000000);
          puVar36 = (uint *)0x4332bb50;
        case (uint *)0x14173f49a:
          goto code_r0x00014173f49a;
        case (uint *)0x14173f5b7:
          goto code_r0x00014173f5b7;
        case (uint *)0x14173f5f7:
          *(int *)(pcVar40 + -0x30) = *(int *)(pcVar40 + -0x30) - (int)unaff_RBX;
          goto code_r0x00014173f5fa;
        case (uint *)0x14173f702:
          goto code_r0x00014173f702;
        case (uint *)0x14173f70e:
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        case (uint *)0x14173f842:
          *(uint **)(pcVar59 + -8) = unaff_RDI;
          *(char **)(pcVar59 + -0x10) = unaff_RBX;
          pcVar40 = pcVar59 + -0x58;
          puVar13 = pcVar59 + -0xd8;
          goto code_r0x00014173f853;
        case (uint *)0x14173f893:
          puVar57 = (undefined8 *)(pcVar59 + -8);
          pcVar59 = pcVar59 + -8;
          *puVar57 = pcVar40;
          *(uint *)(param_2 + 0x38) =
               *(int *)(param_2 + 0x38) + (int)puVar24 + (uint)(*unaff_R15 < (byte)puVar63);
          goto code_r0x00014173f876;
        case (uint *)0x14173f9a3:
          unaff_RBX[0x5f] = unaff_RBX[0x5f] + (char)unaff_RBX;
          return puVar24;
        case (uint *)0x14173f9af:
          *(byte *)puVar24 = (byte)*puVar24 - cVar22;
          *(byte *)puVar24 = (byte)*puVar24 + cVar22;
          goto code_r0x00014173f9a9;
        case (uint *)0x14173face:
          UNRECOVERED_JUMPTABLE = (code *)swi(3);
          puVar32 = (uint *)(*UNRECOVERED_JUMPTABLE)();
          return puVar32;
        case (uint *)0x14173fb24:
          uVar23 = *unaff_RDI;
          *unaff_RDI = *unaff_RDI + (uint)puVar36;
          unaff_RBX[200] = unaff_RBX[200] + cVar22 + -0x6f + CARRY4(uVar23,(uint)puVar36);
          puVar55 = pcVar59;
          goto code_r0x00014173fb16;
        case (uint *)0x14173fc86:
          *(byte *)((longlong)puVar24 + -0x77) = *(byte *)((longlong)puVar24 + -0x77) + bVar21;
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        case (uint *)0x14173fc92:
          goto code_r0x00014173fc92;
        case (uint *)0x14173fdc3:
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        case (uint *)0x14173fe5a:
          *(byte *)puVar24 = (byte)*puVar24;
          uVar23 = *unaff_RDI;
          *(byte *)unaff_RDI = (byte)*unaff_RDI + bVar21;
          pcVar40[0xd0] = pcVar40[0xd0] + bVar21 + CARRY1((byte)uVar23,bVar21);
          goto code_r0x00014173fe1a;
        case (uint *)0x141740419:
          *(byte *)puVar24 = (byte)*puVar24 + cVar22;
          goto code_r0x00014174041d;
        }
        goto code_r0x000141740425;
      case (uint *)0x141737427:
        goto code_r0x000141737426;
      case (uint *)0x141739e4c:
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      case (uint *)0x141739e58:
        goto code_r0x000141739e58;
      case (uint *)0x14173f2db:
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      case (uint *)0x14173f329:
        puVar53 = (undefined8 *)(pcVar59 + -8);
        pcVar59 = pcVar59 + -8;
        *puVar53 = puVar24;
        goto code_r0x00014173f32a;
      case (uint *)0x14173f47e:
        puVar36 = (uint *)0x2ec2beec;
        bVar65 = (int)param_3 == 1;
code_r0x00014173f48a:
        if (!bVar65) {
          *(uint **)(pcVar40 + 0xa0) = puVar36;
                    /* WARNING: Subroutine does not return */
          *(undefined8 *)(pcVar59 + -8) = 0x14173f4cd;
          pdb_142dc8590(&UNK_14332bb50);
        }
        *(uint **)(pcVar40 + 0xa0) = puVar36;
        puVar36 = (uint *)&UNK_14332bb50;
code_r0x00014173f49a:
                    /* WARNING: Subroutine does not return */
        *(undefined8 *)(pcVar59 + -8) = 0x14173f49f;
        pdb_142dc8570(puVar36);
      case (uint *)0x14173f48a:
        goto code_r0x00014173f48a;
      case (uint *)0x14173f5a7:
        puVar55 = (undefined1 *)(ulonglong)((int)pcVar59 - 0xd0);
        pcVar40 = puVar55 + 0x80;
        *(undefined8 *)(puVar55 + 200) = 0xfffffffffffffffe;
        param_1 = (uint *)&UNK_14332bd84;
        bVar21 = param_2[0x88];
        puVar36 = (uint *)&UNK_14332bdb8;
        lVar34 = (longlong)*(int *)(&UNK_14332bdb8 + (ulonglong)bVar21 * 4);
        pcVar33 = &UNK_14332bdb8 + lVar34;
        *(char **)(puVar55 + 0xb8) = param_2;
        cVar22 = (char)pcVar33;
        pcVar59 = puVar55;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
        switch(bVar21) {
        case 0:
          in_XMM0_Qa = *(undefined8 *)param_2;
          in_XMM0_Qb = *(undefined8 *)(param_2 + 8);
          goto code_r0x00014173f5de;
        case 1:
                    /* WARNING: Subroutine does not return */
          *(undefined8 *)(puVar55 + -8) = 0x14173f73e;
          pdb_142dc8570(&UNK_14332ba20);
        case 2:
          goto code_r0x00014173f726;
        case 3:
          cVar22 = param_2[0x80];
          *(char **)(puVar55 + 0xc0) = param_2 + 0x40;
          if (cVar22 != '\0') {
            if (cVar22 == '\x01') {
              *(undefined8 *)(puVar55 + 0xb0) = *(undefined8 *)(puVar55 + 0xc0);
                    /* WARNING: Subroutine does not return */
              *(undefined8 *)(puVar55 + -8) = 0x14173f723;
              pdb_142dc8570(&UNK_14332bb50);
            }
            *(undefined8 *)(puVar55 + 0xb0) = *(undefined8 *)(puVar55 + 0xc0);
                    /* WARNING: Subroutine does not return */
            *(undefined8 *)(puVar55 + -8) = 0x14173f752;
            pdb_142dc8590(&UNK_14332bb50);
          }
          goto code_r0x00014173f632;
        case 4:
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        case 5:
          *(int *)(lVar34 + 0xd07aeba3) = *(int *)(lVar34 + 0xd07aeba3) + (int)param_2;
          goto code_r0x00014173f9d7;
        case 6:
          (&UNK_14332bd45)[lVar34] = (&UNK_14332bd45)[lVar34] + 'H';
          goto code_r0x00014173f9c0;
        case 7:
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        case 8:
          goto code_r0x00014173fae4;
        case 9:
          *pcVar33 = *pcVar33 + cVar22;
          goto code_r0x00014173fcbb;
        case 10:
          *(int *)(puVar55 + 0xb5) = *(int *)(puVar55 + 0xb5) + 0x4332bd84;
          goto code_r0x00014173fcad;
        case 0xb:
          *pcVar33 = *pcVar33 + cVar22;
          goto code_r0x00014173fb16;
        case 0xc:
          *pcVar33 = *pcVar33;
          (&UNK_14332bd7f)[lVar34] = (&UNK_14332bd7f)[lVar34] + -0x48;
          *pcVar33 = *pcVar33 + cVar22;
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        case 0xd:
          *(int *)(unaff_RBX + 0xf7501f8) = *(int *)(unaff_RBX + 0xf7501f8) + 1;
          goto code_r0x00014174044f;
        case 0xe:
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        case 0xf:
          pcVar59 = puVar55 + -8;
          *(char **)(puVar55 + -8) = pcVar40;
          *(byte *)unaff_RDI = (byte)*unaff_RDI >> 1 | (byte)*unaff_RDI << 7;
          *(int *)(puVar55 + 0x60) = *(int *)(puVar55 + 0x60) - (int)unaff_RBX;
        }
        goto code_r0x00014173fe1a;
      case (uint *)0x14173f5e7:
        *(int *)(pcVar40 + -0x60) = *(int *)(pcVar40 + -0x60) - (int)puVar24;
        goto code_r0x00014173f5ea;
      case (uint *)0x14173f6f2:
        if (!bVar65) {
          puVar55 = pcVar59 + -8;
          *(undefined8 *)(pcVar59 + -8) = 0x2deb9001;
code_r0x00014173f726:
                    /* WARNING: Subroutine does not return */
          *(undefined8 *)(puVar55 + -8) = 0x14173f732;
          pdb_142dc8590(&UNK_14332ba20);
        }
        goto code_r0x00014173f6f4;
      case (uint *)0x14173f6fe:
        *(byte *)puVar24 = (byte)*puVar24 ^ bVar21;
        *(byte *)puVar24 = (byte)*puVar24 + bVar21;
        goto code_r0x00014173f702;
      case (uint *)0x14173f832:
        unaff_RBX[0x5f] = unaff_RBX[0x5f] & (byte)unaff_RBX;
        return puVar24;
      case (uint *)0x14173f883:
        param_2[0x18] = param_2[0x18] + -0x7c + bVar64;
        goto code_r0x00014173f876;
      case (uint *)0x14173f993:
        *(char *)(uVar39 + 0x1bb764585) = *(char *)(uVar39 + 0x1bb764585) + (char)unaff_R14 + bVar64
        ;
        return param_1;
      case (uint *)0x14173f99f:
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      case (uint *)0x14173fabe:
        return puVar24;
      case (uint *)0x14173fb14:
        puVar55 = pcVar59;
        if ((longlong)uVar39 < -0x14332bd84) goto code_r0x00014173fb16;
        goto code_r0x00014173fb76;
      case (uint *)0x14173fc76:
        goto code_r0x00014173fc74;
      case (uint *)0x14173fc82:
        uVar23 = ((int)puVar24 + -1) - (uint)bVar64;
        *(char *)(ulonglong)uVar23 = *(char *)(ulonglong)uVar23 + (char)uVar23;
        return param_1;
      case (uint *)0x14173fdb3:
        (&UNK_14332bd11)[uVar39] = (&UNK_14332bd11)[uVar39] + -0x7c;
        *(byte *)puVar24 = (byte)*puVar24 + bVar21;
        goto code_r0x00014173fdbb;
      case (uint *)0x14173fe4a:
        *(byte *)puVar24 = (byte)*puVar24 + bVar21;
        goto code_r0x00014173fe1a;
      case (uint *)0x141740409:
        *(byte *)puVar24 = (byte)*puVar24 + bVar21;
        goto code_r0x00014174040b;
      case (uint *)0x141740415:
        *(byte *)puVar24 = (byte)*puVar24 + bVar21;
        param_2[0x38] = param_2[0x38] + (char)((ulonglong)unaff_RBX >> 8);
        goto code_r0x00014174041d;
      }
      goto code_r0x000141738c53;
    case '\b':
      puVar51 = pcVar59;
      goto code_r0x0001417372b3;
    case '\t':
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case '\n':
      goto code_r0x000141739e48;
    case '\f':
      goto code_r0x000141737417;
    case '\r':
      pcVar40 = pcVar59 + 0x80;
      *(undefined8 *)(pcVar59 + 0x130) = 0xfffffffffffffffe;
      param_1 = (uint *)&UNK_14332bd74;
      puVar36 = (uint *)&UNK_14332bda8;
      uVar39 = (ulonglong)*(int *)(&UNK_14332bda8 + (ulonglong)(byte)param_2[0xb0] * 4);
      goto code_r0x00014173f2f3;
    case '\x0f':
      *(byte *)puVar24 = (byte)*puVar24 + cVar22;
      goto code_r0x00014173f460;
    case '\x10':
      *(byte *)puVar62 = (byte)*puVar62 ^ 0x74;
      param_2[0x40] = param_2[0x40] - (char)((ulonglong)puVar24 >> 8);
      *(undefined4 *)(pcVar40 + -0x30) = uVar73;
      *(undefined4 *)(pcVar40 + -0x2c) = uVar74;
      *(undefined4 *)(pcVar40 + -0x28) = in_XMM3_Dc;
      *(undefined4 *)(pcVar40 + -0x24) = in_XMM3_Dd;
      *(undefined8 *)(pcVar40 + -0x20) = in_XMM4_Qa;
      *(undefined8 *)(pcVar40 + -0x18) = in_XMM4_Qb;
      puVar36 = (uint *)(param_2 + 0x50);
code_r0x00014173f32a:
      *(undefined8 *)(param_2 + 0x50) = in_XMM0_Qa;
      *(undefined8 *)(param_2 + 0x58) = in_XMM0_Qb;
      *(undefined4 *)(param_2 + 0x60) = uVar69;
      *(undefined4 *)(param_2 + 100) = uVar70;
      *(undefined4 *)(param_2 + 0x68) = in_XMM1_Dc;
      *(undefined4 *)(param_2 + 0x6c) = in_XMM1_Dd;
      *(undefined4 *)(param_2 + 0x70) = uVar71;
      *(undefined4 *)(param_2 + 0x74) = uVar72;
      *(undefined4 *)(param_2 + 0x78) = in_XMM2_Dc;
      *(undefined4 *)(param_2 + 0x7c) = in_XMM2_Dd;
      *(undefined4 *)(param_2 + 0x80) = uVar73;
      *(undefined4 *)(param_2 + 0x84) = uVar74;
      *(undefined4 *)(param_2 + 0x88) = in_XMM3_Dc;
      *(undefined4 *)(param_2 + 0x8c) = in_XMM3_Dd;
      *(undefined8 *)(param_2 + 0x90) = in_XMM4_Qa;
      *(undefined8 *)(param_2 + 0x98) = in_XMM4_Qb;
code_r0x00014173f344:
      param_2[0xa0] = '\0';
      *(uint **)(pcVar40 + 0x98) = puVar36;
      uVar41 = *(undefined8 *)(puVar36 + 2);
      *(undefined8 *)(pcVar40 + -0x10) = *(undefined8 *)puVar36;
      *(undefined8 *)(pcVar40 + -8) = uVar41;
      lVar34 = *(longlong *)(param_2 + 0x60);
      *(undefined8 *)(pcVar40 + 0x20) = *(undefined8 *)(param_2 + 0x78);
      uVar41 = *(undefined8 *)(param_2 + 0x70);
      *(undefined8 *)(pcVar40 + 0x10) = *(undefined8 *)(param_2 + 0x68);
      *(undefined8 *)(pcVar40 + 0x18) = uVar41;
      uVar41 = *(undefined8 *)(param_2 + 0x80);
      uVar27 = *(undefined8 *)(param_2 + 0x88);
      uVar69 = *(undefined4 *)(param_2 + 0x94);
      uVar70 = *(undefined4 *)(param_2 + 0x98);
      uVar71 = *(undefined4 *)(param_2 + 0x9c);
      *(undefined4 *)(pcVar40 + 0x60) = *(undefined4 *)(param_2 + 0x90);
      *(undefined4 *)(pcVar40 + 100) = uVar69;
      *(undefined4 *)(pcVar40 + 0x68) = uVar70;
      *(undefined4 *)(pcVar40 + 0x6c) = uVar71;
      *(undefined8 *)(pcVar40 + 0x50) = uVar41;
      *(undefined8 *)(pcVar40 + 0x58) = uVar27;
      *(undefined8 *)(pcVar59 + -8) = 0x14173f3a1;
      pdb_14098a860(pcVar40 + 0x50);
      *(undefined8 *)pcVar40 = *(undefined8 *)(pcVar40 + -0x10);
      *(undefined8 *)(pcVar40 + 8) = *(undefined8 *)(pcVar40 + -8);
      *(undefined8 *)(pcVar40 + 0x30) = *(undefined8 *)(pcVar40 + 0x10);
      *(undefined8 *)(pcVar40 + 0x38) = *(undefined8 *)(pcVar40 + 0x18);
      *(undefined8 *)(pcVar40 + 0x40) = *(undefined8 *)(pcVar40 + 0x20);
      unaff_RBX = *(char **)(pcVar40 + 0xa8);
      unaff_RBX[0xa0] = '\x01';
      if (SBORROW8(0,lVar34)) {
        param_1[0] = 2;
        param_1[1] = 0;
        puVar24 = (uint *)0x3;
        goto code_r0x00014173f460;
      }
      *(undefined8 *)(pcVar40 + 0x60) = *(undefined8 *)pcVar40;
      *(undefined8 *)(pcVar40 + 0x68) = *(undefined8 *)(pcVar40 + 8);
      *(undefined8 *)(pcVar40 + 0x78) = *(undefined8 *)(pcVar40 + 0x30);
      *(undefined8 *)(pcVar40 + 0x80) = *(undefined8 *)(pcVar40 + 0x38);
      *(undefined8 *)(pcVar40 + 0x88) = *(undefined8 *)(pcVar40 + 0x40);
      pcVar40[0x50] = '\x01';
      pcVar40[0x51] = '\0';
      pcVar40[0x52] = '\0';
      pcVar40[0x53] = '\0';
      pcVar40[0x54] = '\0';
      pcVar40[0x55] = '\0';
      pcVar40[0x56] = '\0';
      pcVar40[0x57] = '\0';
      pcVar40[0x58] = '\x01';
      pcVar40[0x59] = '\0';
      pcVar40[0x5a] = '\0';
      pcVar40[0x5b] = '\0';
      pcVar40[0x5c] = '\0';
      pcVar40[0x5d] = '\0';
      pcVar40[0x5e] = '\0';
      pcVar40[0x5f] = '\0';
      *(longlong *)(pcVar40 + 0x70) = lVar34;
      *(undefined8 *)(pcVar59 + -8) = 0x14173f412;
      pdb_14007ee60();
      *(undefined8 *)(pcVar59 + -8) = 0x14173f421;
      pbVar35 = pub_1406abab0(0x40,0x10);
      if (pbVar35 != (byte *)0x0) {
        uVar41 = *(undefined8 *)(pcVar40 + 0x50);
        uVar27 = *(undefined8 *)(pcVar40 + 0x58);
        uVar28 = *(undefined8 *)(pcVar40 + 0x60);
        uVar6 = *(undefined8 *)(pcVar40 + 0x68);
        uVar3 = *(undefined8 *)(pcVar40 + 0x70);
        uVar11 = *(undefined8 *)(pcVar40 + 0x78);
        uVar12 = *(undefined8 *)(pcVar40 + 0x88);
        *(undefined8 *)(pbVar35 + 0x30) = *(undefined8 *)(pcVar40 + 0x80);
        *(undefined8 *)(pbVar35 + 0x38) = uVar12;
        *(undefined8 *)(pbVar35 + 0x20) = uVar3;
        *(undefined8 *)(pbVar35 + 0x28) = uVar11;
        *(undefined8 *)(pbVar35 + 0x10) = uVar28;
        *(undefined8 *)(pbVar35 + 0x18) = uVar6;
        *(undefined8 *)pbVar35 = uVar41;
        *(undefined8 *)(pbVar35 + 8) = uVar27;
        param_1[0] = 0;
        param_1[1] = 0;
        *(byte **)(param_1 + 2) = pbVar35;
        puVar24 = (uint *)&UNK_14332ba98;
        goto code_r0x00014173f45a;
      }
      puVar36 = (uint *)0x10;
    case '\x0e':
                    /* WARNING: Subroutine does not return */
      *(undefined8 *)(pcVar59 + -8) = 0x14173f484;
      pdb_142dc7e11(puVar36,0x40);
    case '\x11':
      UNRECOVERED_JUMPTABLE = (code *)swi(3);
      puVar32 = (uint *)(*UNRECOVERED_JUMPTABLE)();
      return puVar32;
    case '\x12':
      return puVar24;
    case '\x13':
      return puVar24;
    case '\x14':
      *(char **)(pcVar59 + -8) = pcVar40;
      *param_2 = *param_2 + cVar22;
      pcVar59 = pcVar59 + -8;
code_r0x00014173f5de:
      uVar69 = *(undefined4 *)(param_2 + 0x10);
      uVar70 = *(undefined4 *)(param_2 + 0x14);
      in_XMM1_Dc = *(undefined4 *)(param_2 + 0x18);
      in_XMM1_Dd = *(undefined4 *)(param_2 + 0x1c);
      *(undefined4 *)(pcVar40 + -0x50) = uVar69;
      *(undefined4 *)(pcVar40 + -0x4c) = uVar70;
      *(undefined4 *)(pcVar40 + -0x48) = in_XMM1_Dc;
      *(undefined4 *)(pcVar40 + -0x44) = in_XMM1_Dd;
      *(undefined8 *)(pcVar40 + -0x60) = in_XMM0_Qa;
      *(undefined8 *)(pcVar40 + -0x58) = in_XMM0_Qb;
code_r0x00014173f5ea:
      uVar71 = *(undefined4 *)(param_2 + 0x20);
      uVar72 = *(undefined4 *)(param_2 + 0x24);
      in_XMM2_Dc = *(undefined4 *)(param_2 + 0x28);
      in_XMM2_Dd = *(undefined4 *)(param_2 + 0x2c);
      uVar73 = *(undefined4 *)(param_2 + 0x30);
      uVar74 = *(undefined4 *)(param_2 + 0x34);
      in_XMM3_Dc = *(undefined4 *)(param_2 + 0x38);
      in_XMM3_Dd = *(undefined4 *)(param_2 + 0x3c);
      *(undefined4 *)(pcVar40 + -0x40) = uVar71;
      *(undefined4 *)(pcVar40 + -0x3c) = uVar72;
      *(undefined4 *)(pcVar40 + -0x38) = in_XMM2_Dc;
      *(undefined4 *)(pcVar40 + -0x34) = in_XMM2_Dd;
      *(undefined4 *)(pcVar40 + -0x30) = uVar73;
      *(undefined4 *)(pcVar40 + -0x2c) = uVar74;
      *(undefined4 *)(pcVar40 + -0x28) = in_XMM3_Dc;
      *(undefined4 *)(pcVar40 + -0x24) = in_XMM3_Dd;
code_r0x00014173f5fa:
      *(char **)(pcVar40 + 0x40) = param_2 + 0x40;
      *(undefined8 *)(param_2 + 0x40) = in_XMM0_Qa;
      *(undefined8 *)(param_2 + 0x48) = in_XMM0_Qb;
      *(undefined4 *)(param_2 + 0x50) = uVar69;
      *(undefined4 *)(param_2 + 0x54) = uVar70;
      *(undefined4 *)(param_2 + 0x58) = in_XMM1_Dc;
      *(undefined4 *)(param_2 + 0x5c) = in_XMM1_Dd;
      *(undefined4 *)(param_2 + 0x60) = uVar71;
      *(undefined4 *)(param_2 + 100) = uVar72;
      *(undefined4 *)(param_2 + 0x68) = in_XMM2_Dc;
      *(undefined4 *)(param_2 + 0x6c) = in_XMM2_Dd;
      *(undefined4 *)(param_2 + 0x70) = uVar73;
      *(undefined4 *)(param_2 + 0x74) = uVar74;
      *(undefined4 *)(param_2 + 0x78) = in_XMM3_Dc;
      *(undefined4 *)(param_2 + 0x7c) = in_XMM3_Dd;
      param_2[0x80] = '\0';
code_r0x00014173f632:
      unaff_RBX = *(char **)(param_2 + 0x40);
      uVar41 = *(undefined8 *)(param_2 + 0x48);
      uVar27 = *(undefined8 *)(param_2 + 0x58);
      *(undefined8 *)(pcVar40 + -0x20) = *(undefined8 *)(param_2 + 0x50);
      *(undefined8 *)(pcVar40 + -0x18) = uVar27;
      uVar27 = *(undefined8 *)(param_2 + 0x60);
      uVar28 = *(undefined8 *)(param_2 + 0x68);
      uVar69 = *(undefined4 *)(param_2 + 0x74);
      uVar70 = *(undefined4 *)(param_2 + 0x78);
      uVar71 = *(undefined4 *)(param_2 + 0x7c);
      *(undefined4 *)(pcVar40 + 0x10) = *(undefined4 *)(param_2 + 0x70);
      *(undefined4 *)(pcVar40 + 0x14) = uVar69;
      *(undefined4 *)(pcVar40 + 0x18) = uVar70;
      *(undefined4 *)(pcVar40 + 0x1c) = uVar71;
      *(undefined8 *)pcVar40 = uVar27;
      *(undefined8 *)(pcVar40 + 8) = uVar28;
      *(undefined8 *)(pcVar59 + -8) = 0x14173f65a;
      pdb_14098a860(pcVar40);
      *(undefined8 *)(pcVar40 + -0x10) = *(undefined8 *)(pcVar40 + -0x20);
      *(undefined8 *)(pcVar40 + -8) = *(undefined8 *)(pcVar40 + -0x18);
      unaff_RDI = *(uint **)(pcVar40 + 0x38);
      *(byte *)(unaff_RDI + 0x20) = 1;
      if (SBORROW8(0,(longlong)unaff_RBX)) {
        param_1[0] = 2;
        param_1[1] = 0;
        bVar21 = 3;
        goto code_r0x00014173f6d9;
      }
      *(undefined8 *)pcVar40 = *(undefined8 *)(pcVar40 + -0x10);
      *(undefined8 *)(pcVar40 + 8) = *(undefined8 *)(pcVar40 + -8);
      *(undefined8 *)(pcVar59 + -8) = 0x14173f68e;
      pdb_14007ee60();
      *(undefined8 *)(pcVar59 + -8) = 0x14173f69d;
      puVar24 = (uint *)pub_1406abab0(0x30,8);
      if (puVar24 == (uint *)0x0) {
        *(undefined8 *)(pcVar40 + 0x28) = uVar41;
code_r0x00014173f6f4:
        *(char **)(pcVar40 + 0x40) = unaff_RBX;
        puVar36 = (uint *)0x8;
code_r0x00014173f702:
                    /* WARNING: Subroutine does not return */
        *(undefined8 *)(pcVar59 + -8) = 0x14173f707;
        pdb_142dc7e11(puVar36);
      }
      puVar24[0] = 1;
      puVar24[1] = 0;
      puVar24[2] = 1;
      puVar24[3] = 0;
      *(char **)(puVar24 + 4) = unaff_RBX;
      *(undefined8 *)(puVar24 + 6) = uVar41;
      uVar41 = *(undefined8 *)(pcVar40 + 8);
      *(undefined8 *)(puVar24 + 8) = *(undefined8 *)pcVar40;
      *(undefined8 *)(puVar24 + 10) = uVar41;
      param_1[0] = 0;
      param_1[1] = 0;
      goto code_r0x00014173f6c8;
    case '\x15':
      *(byte *)puVar24 = (byte)*puVar24 + cVar22;
      (&UNK_14332bcff)[uVar39] = (&UNK_14332bcff)[uVar39] + 't';
      return (uint *)((ulonglong)param_2 & 0xffffffff);
    case '\x16':
      *(char *)(uVar39 + 0x1bb764575) =
           *(char *)(uVar39 + 0x1bb764575) + (char)((ulonglong)param_2 >> 8) +
           (0xfffffffebccd428b < uVar39);
      return (uint *)0x46894801;
    case '\x17':
      *(byte *)puVar24 = (byte)*puVar24 + cVar22;
      (&UNK_14332bcfd)[uVar39] = (&UNK_14332bcfd)[uVar39] + 't';
      (&UNK_14332bd01)[uVar39] = (&UNK_14332bd01)[uVar39] | (byte)puVar63;
      puVar24 = (uint *)(ulonglong)(uVar23 + 0x1bec0c7);
      goto code_r0x00014173f968;
    case '\x18':
      goto code_r0x00014173f876;
    case '\x19':
      *(undefined8 *)(pcVar59 + -8) = 0x14173fabc;
      puVar32 = (uint *)pdb_140974040((int)param_2 + 0x80);
      return puVar32;
    case '\x1a':
      if (bVar64 || (longlong)uVar39 < -0x14332bd74) {
        param_1[4] = uVar23;
      }
      goto code_r0x00014173fc74;
    case '\x1b':
      goto code_r0x00014173fc54;
    case '\x1c':
      puVar37 = (undefined *)CONCAT71((int7)((ulonglong)puVar24 >> 8),cVar22 + -0x7f);
      puVar32 = puVar36;
      goto code_r0x00014173fb02;
    case '\x1d':
      *(char **)(pcVar59 + -8) = pcVar40;
      *(uint **)(pcVar59 + -0x10) = param_1;
      *(uint **)(pcVar59 + -0x18) = puVar62;
      *(char **)(pcVar59 + -0x20) = unaff_RBX;
      pcVar59 = pcVar59 + -0x48;
      puVar36 = (uint *)(param_2 + 0x1d8);
code_r0x00014173fdbb:
      *(undefined8 *)(pcVar59 + -8) = 0x14173fdc0;
      puVar32 = (uint *)pdb_14098b910(puVar36);
      return puVar32;
    case '\x1e':
      param_2[0x2b] = param_2[0x2b] + cVar42;
      goto code_r0x00014174040b;
    case '\x1f':
      puVar60 = pcVar59;
      goto code_r0x0001417403e5;
    case ' ':
      *(longlong *)(pcVar40 + 0x10) = (longlong)in_ST0;
      goto code_r0x00014173fe1a;
    }
    break;
  case '\t':
code_r0x000141736eca:
    return puVar24;
  case '\n':
code_r0x000141736ebe:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case '\v':
    goto code_r0x000141736dba;
  case '\f':
code_r0x00014173701e:
    pcVar59 = puVar19;
    *(byte *)((longlong)puVar24 + -0x73) = *(byte *)((longlong)puVar24 + -0x73) + (char)puVar36;
    param_1 = (uint *)((longlong)puVar32 + 1);
    pcVar33 = (char *)(CONCAT71((int7)((ulonglong)puVar24 >> 8),(byte)*puVar32) & 0xffffffffffffff80
                      );
    *pcVar33 = *pcVar33 + (char)pcVar33;
    puVar32 = puVar32 + 4;
    uVar23 = *puVar32;
    cVar22 = (char)((ulonglong)pcVar33 >> 8);
    *(byte *)puVar32 = (byte)*puVar32 + cVar22;
    if ((byte)*puVar32 == 0 || SCARRY1((byte)uVar23,cVar22) != (char)(byte)*puVar32 < '\0') {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    bVar64 = (int)puVar36 == 0;
code_r0x0001417370a2:
    if (!bVar64) {
      *(uint **)(pcVar40 + -0x30) = puVar36;
      *(undefined8 *)(pcVar59 + -8) = 0x1417370ad;
      pdb_140974580();
      pbVar35 = *(byte **)(pcVar40 + -0x30);
      *(undefined8 *)(pcVar59 + -8) = 0x1417370c2;
      pub_1406abac0(pbVar35,0x38,8);
      unaff_R15 = *(byte **)(pcVar40 + -0x28);
    }
    if ((int)unaff_R14 == 1) {
      unaff_RDI = *(uint **)(unaff_R15 + 0x10);
      unaff_RBX = *(char **)(unaff_R15 + 0x18);
      *(undefined8 *)(pcVar59 + -8) = 0x1417370d9;
      pdb_14007ee60();
      *(undefined8 *)(pcVar59 + -8) = 0x1417370e8;
      unaff_XMM6_Qa = pub_1406abab0(0x10,8);
      if (unaff_XMM6_Qa == (byte *)0x0) {
        puVar36 = (uint *)0x8;
code_r0x000141737156:
                    /* WARNING: Subroutine does not return */
        *(undefined8 *)(pcVar59 + -8) = 0x14173715b;
        pdb_142dc7e11(puVar36);
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
    *(undefined8 *)(pcVar59 + -8) = 0x141737119;
    pdb_14097d110();
    *(uint **)(param_1 + 2) = unaff_RDI;
    *(char **)(param_1 + 4) = unaff_RBX;
    *(byte **)(param_1 + 6) = unaff_XMM6_Qa;
    *(undefined **)(param_1 + 8) = unaff_XMM6_Qb;
    puVar24 = (uint *)0x1;
    puVar36 = (uint *)0x0;
code_r0x00014173712b:
    uVar39 = *(ulonglong *)(pcVar40 + -0x28);
    goto code_r0x00014173712f;
  case '\r':
code_r0x00014173713a:
    if (bVar64) {
      return puVar24;
    }
    uVar39 = (ulonglong)*(uint *)(pcVar40 + -0x28);
code_r0x00014173712f:
    *(uint **)param_1 = puVar36;
    *(char *)(uVar39 + 0x30) = (char)puVar24;
    return param_1;
  case '\x0e':
code_r0x00014173712e:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case '\x0f':
    goto code_r0x00014173702a;
  case '\x10':
    goto code_r0x0001417372b3;
  case '\x11':
code_r0x000141739e1c:
    *(undefined4 *)(pcVar40 + 0x18) = uVar69;
    *(undefined4 *)(pcVar40 + 0x1c) = uVar70;
    *(undefined4 *)(pcVar40 + 0x20) = in_XMM1_Dc;
    *(undefined4 *)(pcVar40 + 0x24) = in_XMM1_Dd;
    goto code_r0x000141739e0c;
  case '\x12':
code_r0x000141739e28:
    *(byte *)param_3 = (byte)*param_3 + (char)param_3;
    *(byte *)puVar24 = (byte)*puVar24 + (char)puVar24;
    pbVar35 = (byte *)((longlong)puVar24 + 0x4b8b4801);
    bVar21 = *pbVar35;
    cVar22 = (char)((ulonglong)param_2 >> 8);
    *pbVar35 = *pbVar35 + cVar22;
    if (!SCARRY1(bVar21,cVar22)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case '\x13':
code_r0x000141738c23:
    pcVar59 = puVar18;
    *(byte *)puVar24 = (byte)*puVar24 + (char)puVar24;
code_r0x000141738b49:
    *(uint **)(unaff_RBX + 0x150) = puVar63;
    *(uint **)(unaff_RBX + 0x158) = puVar36;
    *(char **)(unaff_RBX + 0x160) = param_2;
    *(uint **)(unaff_RBX + 0x168) = param_3;
    unaff_RBX[0x170] = '\x02';
    unaff_RBX[0x171] = '\0';
    unaff_RBX[0x172] = '\0';
    unaff_RBX[0x173] = '\0';
    unaff_RBX[0x174] = '\0';
    unaff_RBX[0x175] = '\0';
    unaff_RBX[0x176] = '\0';
    unaff_RBX[0x177] = '\0';
    *(char **)(unaff_RBX + 0x280) = unaff_RBX + 0xc0;
    *(char **)(unaff_RBX + 0x288) = unaff_RBX + 0x108;
    *(undefined **)(unaff_RBX + 0x290) = &UNK_14332b058;
    *(char **)(unaff_RBX + 0x298) = unaff_RBX + 0x98;
    *(char **)(unaff_RBX + 0x2a0) = unaff_RBX + 0x120;
    *(undefined **)(unaff_RBX + 0x2a8) = &UNK_14332b078;
    *(char **)(unaff_RBX + 0x2b0) = unaff_RBX + 0x150;
    *(char **)(unaff_RBX + 0x2b8) = in_R11 + 0x10;
    *(undefined **)(unaff_RBX + 0x2c0) = &UNK_14332b098;
    *(char **)(unaff_RBX + 0xf0) = unaff_RBX + 0x280;
    unaff_RBX[0xf8] = '\x03';
    unaff_RBX[0xf9] = '\0';
    unaff_RBX[0xfa] = '\0';
    unaff_RBX[0xfb] = '\0';
    unaff_RBX[0xfc] = '\0';
    unaff_RBX[0xfd] = '\0';
    unaff_RBX[0xfe] = '\0';
    unaff_RBX[0xff] = '\0';
    *(uint **)(unaff_RBX + 0x100) = puVar24 + 0xc;
    *(undefined8 *)(unaff_RBX + 0x1d0) = *(undefined8 *)(unaff_RBX + 0x608);
    *(undefined8 *)(unaff_RBX + 0x1c0) = *(undefined8 *)(unaff_RBX + 0x5f8);
    *(undefined8 *)(unaff_RBX + 0x1c8) = *(undefined8 *)(unaff_RBX + 0x600);
    *(char **)(pcVar59 + 0x20) = unaff_RBX + 0xf0;
    puVar63 = (uint *)(unaff_RBX + 0x1c0);
    puVar36 = unaff_R14;
    puVar62 = unaff_RDI;
    break;
  case '\x14':
code_r0x0001417373f7:
    puVar24[0x13000000] = puVar24[0x13000000] | 0xffffff8d;
    pcVar59 = puVar52 + -8;
    *(undefined8 *)(puVar52 + -8) = 0x661beb48;
    goto code_r0x000141737410;
  case '\x15':
code_r0x00014173f2ab:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case '\x16':
    goto code_r0x00014173f45a;
  case '\x17':
code_r0x00014173f44e:
    *(byte *)((longlong)puVar24 + -0x77) = *(byte *)((longlong)puVar24 + -0x77) + (char)puVar36;
    *(byte *)((longlong)puVar24 + -0x73) = *(byte *)((longlong)puVar24 + -0x73) | (byte)puVar63;
    puVar24 = (uint *)(ulonglong)((int)puVar24 + 0x1bec63e);
    goto code_r0x00014173f45a;
  case '\x18':
    goto code_r0x00014173f2f9;
  case '\x19':
code_r0x00014173f577:
    *(uint **)(puVar54 + -8) = unaff_RDI;
    *(char **)(puVar54 + -0x10) = unaff_RBX;
    *(undefined8 *)(puVar54 + -0x40) = 0x14173f58d;
    puVar32 = (uint *)pdb_1409737b0(param_2 + 0xd0);
    return puVar32;
  case '\x1a':
code_r0x00014173f6ce:
    puVar24 = (uint *)(ulonglong)((int)puVar24 + 0x1bec3a5);
    goto code_r0x00014173f6c8;
  case '\x1b':
code_r0x00014173f6c2:
    *param_1 = 0;
code_r0x00014173f6c8:
    *(uint **)(param_1 + 2) = puVar24;
    *(undefined **)(param_1 + 4) = &UNK_14332ba78;
    bVar21 = 1;
code_r0x00014173f6d9:
    *(byte *)(unaff_RDI + 0x22) = bVar21;
    return param_1;
  case '\x1c':
code_r0x00014173f5b7:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case '\x1d':
code_r0x00014173f802:
    *(undefined1 **)(puVar56 + -8) = puVar56;
    puVar24 = (uint *)((ulonglong)puVar24 & 0xffffffffffffff10);
    *(char **)(puVar56 + -0x10) = pcVar40;
    *(uint **)(puVar56 + -0x18) = unaff_R14;
    *(uint **)(puVar56 + -0x20) = param_1;
    *(uint **)(puVar56 + -0x28) = unaff_RDI;
    *(char **)(puVar56 + -0x30) = unaff_RBX;
    uVar39 = *(ulonglong *)(param_2 + 0xc0);
    if (uVar39 != 0) {
      pbVar35 = *(byte **)(param_2 + 0xa8);
      *(undefined8 *)(puVar56 + -0x58) = 0x14173f82e;
      pub_1406abac0(pbVar35,uVar39,1);
      puVar24 = extraout_RAX;
    }
    return puVar24;
  case '\x1e':
code_r0x00014173f96f:
    *(byte *)unaff_RDI = (byte)*unaff_RDI & (byte)puVar36;
    *pcVar40 = *pcVar40 + (char)puVar24;
    goto code_r0x00014173f968;
  case ' ':
code_r0x00014173f853:
    pcVar59 = puVar13;
    pcVar40[0x40] = -2;
    pcVar40[0x41] = -1;
    pcVar40[0x42] = -1;
    pcVar40[0x43] = -1;
    pcVar40[0x44] = -1;
    pcVar40[0x45] = -1;
    pcVar40[0x46] = -1;
    pcVar40[0x47] = -1;
    bVar21 = param_2[0x78];
    lVar34 = (longlong)*(int *)(&UNK_14332bdc8 + (ulonglong)bVar21 * 4);
    puVar37 = &UNK_14332bdc8 + lVar34;
    bVar64 = puVar37 == (undefined *)0x0;
    *(char **)(pcVar40 + 0x30) = param_2;
    puVar32 = (uint *)&UNK_14332bdc8;
    puVar55 = pcVar59;
    param_1 = puVar36;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(bVar21) {
    case 0:
code_r0x00014173f876:
      *(undefined8 *)(pcVar40 + -0x40) = *(undefined8 *)(param_2 + 0x10);
      uVar41 = *(undefined8 *)param_2;
      uVar27 = *(undefined8 *)(param_2 + 8);
      *(undefined8 *)(pcVar40 + -0x50) = uVar41;
      *(undefined8 *)(pcVar40 + -0x48) = uVar27;
      uVar28 = *(undefined8 *)(param_2 + 0x20);
      uVar6 = *(undefined8 *)(param_2 + 0x28);
      uVar3 = *(undefined8 *)(param_2 + 0x30);
      *(undefined8 *)(pcVar40 + -0x38) = *(undefined8 *)(param_2 + 0x18);
      *(undefined8 *)(pcVar40 + -0x30) = uVar28;
      *(undefined8 *)(pcVar40 + -0x28) = uVar6;
      *(undefined8 *)(pcVar40 + -0x20) = uVar3;
      *(char **)(pcVar40 + 0x38) = param_2 + 0x38;
      *(undefined8 *)(param_2 + 0x38) = uVar41;
      *(undefined8 *)(param_2 + 0x40) = uVar27;
      uVar41 = *(undefined8 *)(pcVar40 + -0x28);
      *(undefined8 *)(param_2 + 0x58) = *(undefined8 *)(pcVar40 + -0x30);
      *(undefined8 *)(param_2 + 0x60) = uVar41;
      *(undefined8 *)(param_2 + 0x68) = *(undefined8 *)(pcVar40 + -0x20);
      *(undefined8 *)(param_2 + 0x48) = *(undefined8 *)(pcVar40 + -0x40);
      *(undefined8 *)(param_2 + 0x50) = *(undefined8 *)(pcVar40 + -0x38);
      param_2[0x70] = '\0';
      puVar58 = pcVar59;
      break;
    case 1:
                    /* WARNING: Subroutine does not return */
      *(undefined8 *)(pcVar59 + -8) = 0x14173f9ef;
      pdb_142dc8570(&UNK_14332ba20);
    case 2:
code_r0x00014173f9d7:
                    /* WARNING: Subroutine does not return */
      *(undefined8 *)(puVar55 + -8) = 0x14173f9e3;
      pdb_142dc8590(&UNK_14332ba20);
    case 3:
      cVar22 = param_2[0x70];
      *(char **)(pcVar40 + 0x38) = param_2 + 0x38;
      puVar58 = pcVar59;
      if (cVar22 != '\0') {
        if (cVar22 != '\x01') {
          *(undefined8 *)(pcVar40 + 0x28) = *(undefined8 *)(pcVar40 + 0x38);
                    /* WARNING: Subroutine does not return */
          *(undefined8 *)(pcVar59 + -8) = 0x14173fa03;
          pdb_142dc8590(&UNK_14332bb50);
        }
code_r0x00014173f9c0:
        *(undefined8 *)(pcVar40 + 0x28) = *(undefined8 *)(pcVar40 + 0x38);
                    /* WARNING: Subroutine does not return */
        *(undefined8 *)(puVar55 + -8) = 0x14173f9d4;
        pdb_142dc8570(&UNK_14332bb50);
      }
      break;
    case 4:
      goto code_r0x00014173fb02;
    case 5:
      *(int *)(lVar34 + 0xd07af1b3) = *(int *)(lVar34 + 0xd07af1b3) + (int)param_2;
      goto code_r0x00014173fcca;
    case 6:
      (&UNK_14332bd55)[lVar34] = (&UNK_14332bd55)[lVar34] + -0x38;
      goto code_r0x00014173fcbb;
    case 7:
      goto code_r0x00014173fb16;
    case 8:
      pbVar35 = (byte *)(ulonglong)(byte)param_2[0x88];
      puVar32 = (uint *)&UNK_14332bde8;
      goto code_r0x00014173fe07;
    case 9:
      puVar55 = pcVar59 + -8;
      *(undefined8 *)(pcVar59 + -8) = 0xdeb9001;
      goto code_r0x00014174045e;
    case 10:
      goto code_r0x00014174044d;
    case 0xb:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    lVar34 = *(longlong *)(param_2 + 0x38);
    *(undefined8 *)(pcVar40 + -0x10) = *(undefined8 *)(param_2 + 0x40);
    *(undefined8 *)(pcVar40 + -8) = *(undefined8 *)(param_2 + 0x48);
    uVar41 = *(undefined8 *)(param_2 + 0x50);
    uVar27 = *(undefined8 *)(param_2 + 0x58);
    uVar28 = *(undefined8 *)(param_2 + 0x68);
    *(undefined8 *)(pcVar40 + 0x10) = *(undefined8 *)(param_2 + 0x60);
    *(undefined8 *)(pcVar40 + 0x18) = uVar28;
    *(undefined8 *)pcVar40 = uVar41;
    *(undefined8 *)(pcVar40 + 8) = uVar27;
    *(undefined8 *)(puVar58 + -8) = 0x14173f90f;
    pdb_14098a860(pcVar40);
    *(undefined8 *)(pcVar40 + -0x60) = *(undefined8 *)(pcVar40 + -0x10);
    *(undefined8 *)(pcVar40 + -0x58) = *(undefined8 *)(pcVar40 + -8);
    unaff_RBX = *(char **)(pcVar40 + 0x30);
    unaff_RBX[0x70] = '\x01';
    if (SBORROW8(0,lVar34)) {
      param_1[0] = 2;
      param_1[1] = 0;
      cVar22 = '\x03';
      goto code_r0x00014173f997;
    }
    *(undefined8 *)(pcVar40 + 0x18) = *(undefined8 *)(pcVar40 + -0x60);
    *(undefined8 *)(pcVar40 + 0x20) = *(undefined8 *)(pcVar40 + -0x58);
    pcVar40[0] = '\x01';
    pcVar40[1] = '\0';
    pcVar40[2] = '\0';
    pcVar40[3] = '\0';
    pcVar40[4] = '\0';
    pcVar40[5] = '\0';
    pcVar40[6] = '\0';
    pcVar40[7] = '\0';
    pcVar40[8] = '\x01';
    pcVar40[9] = '\0';
    pcVar40[10] = '\0';
    pcVar40[0xb] = '\0';
    pcVar40[0xc] = '\0';
    pcVar40[0xd] = '\0';
    pcVar40[0xe] = '\0';
    pcVar40[0xf] = '\0';
    *(longlong *)(pcVar40 + 0x10) = lVar34;
    *(undefined8 *)(puVar58 + -8) = 0x14173f954;
    pdb_14007ee60();
    *(undefined8 *)(puVar58 + -8) = 0x14173f963;
    puVar24 = (uint *)pub_1406abab0(0x28,8);
  case '\x1f':
code_r0x00014173f963:
    pcVar59 = puVar58;
    if (puVar24 == (uint *)0x0) {
code_r0x00014173f9a9:
                    /* WARNING: Subroutine does not return */
      *(undefined8 *)(pcVar59 + -8) = 0x14173f9b8;
      pdb_142dc7e11(8,0x28);
    }
code_r0x00014173f968:
    *(undefined8 *)(puVar24 + 8) = *(undefined8 *)(pcVar40 + 0x20);
    uVar41 = *(undefined8 *)pcVar40;
    uVar27 = *(undefined8 *)(pcVar40 + 8);
    uVar28 = *(undefined8 *)(pcVar40 + 0x18);
    *(undefined8 *)(puVar24 + 4) = *(undefined8 *)(pcVar40 + 0x10);
    *(undefined8 *)(puVar24 + 6) = uVar28;
    *(undefined8 *)puVar24 = uVar41;
    *(undefined8 *)(puVar24 + 2) = uVar27;
    param_1[0] = 0;
    param_1[1] = 0;
    *(uint **)(param_1 + 2) = puVar24;
    *(undefined **)(param_1 + 4) = &UNK_14332ba58;
    cVar22 = '\x01';
code_r0x00014173f997:
    unaff_RBX[0x78] = cVar22;
    return param_1;
  case '!':
code_r0x00014173fa8e:
    *(byte *)((longlong)param_3 + -0x7d) = *(byte *)((longlong)param_3 + -0x7d) - (char)puVar63;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case '\"':
code_r0x00014173fc52:
    pcVar59 = puVar16;
    puVar62 = (uint *)((ulonglong)puVar24 & 0xffffffff);
    goto code_r0x00014173fc54;
  case '#':
code_r0x00014173fc46:
    pcVar40[CONCAT71((int7)((ulonglong)puVar24 >> 8),(char)puVar24 + (char)((ulonglong)puVar36 >> 8)
                    ) * 2 + 0x48] = '\0';
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case '$':
code_r0x00014173fae4:
    pcVar40[0x260] = -2;
    pcVar40[0x261] = -1;
    pcVar40[0x262] = -1;
    pcVar40[0x263] = -1;
    puVar37 = (undefined *)(ulonglong)(byte)param_2[0x1d8];
    puVar32 = (uint *)&UNK_14332bdd8;
    unaff_RBX = param_2;
    pcVar59 = puVar55;
    param_1 = puVar36;
code_r0x00014173fb02:
    uVar23 = puVar32[(longlong)puVar37];
    pbVar35 = (byte *)((longlong)(int)uVar23 + (longlong)puVar32);
    *(char **)(pcVar40 + 0x250) = param_2;
    puVar55 = pcVar59;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
    switch(pbVar35) {
    case (byte *)0x14173fb12:
      unaff_RDI = (uint *)(pcVar40 + 0x60);
code_r0x00014173fb16:
      *(undefined8 *)(puVar55 + -8) = 0x14173fb27;
      pub_142e32760(unaff_RDI,unaff_RBX,200);
      uVar41 = *(undefined8 *)(unaff_RBX + 0xd0);
      uVar69 = *(undefined4 *)(unaff_RBX + 0xd8);
      uVar70 = *(undefined4 *)(unaff_RBX + 0xdc);
      uVar71 = *(undefined4 *)(unaff_RBX + 0xe0);
      uVar72 = *(undefined4 *)(unaff_RBX + 0xe4);
      *(undefined8 *)(pcVar40 + 0x128) = *(undefined8 *)(unaff_RBX + 200);
      *(undefined8 *)(pcVar40 + 0x130) = uVar41;
      *(undefined4 *)(pcVar40 + 0x138) = uVar69;
      *(undefined4 *)(pcVar40 + 0x13c) = uVar70;
      *(undefined4 *)(pcVar40 + 0x140) = uVar71;
      *(undefined4 *)(pcVar40 + 0x144) = uVar72;
      *(char **)(pcVar40 + 600) = unaff_RBX + 0xe8;
      *(undefined8 *)(puVar55 + -8) = 0x14173fb5f;
      pub_142e32760(unaff_RBX + 0xe8,unaff_RDI,0xe8);
      unaff_RBX[0x1d0] = '\0';
      pcVar59 = puVar55;
      break;
    case (byte *)0x14173fb68:
      puVar24 = (uint *)(ulonglong)(byte)unaff_RBX[0x1d0];
      puVar36 = (uint *)(unaff_RBX + 0xe8);
code_r0x00014173fb76:
      *(uint **)(pcVar40 + 600) = puVar36;
      pcVar59 = puVar55;
      if ((int)puVar24 != 0) {
        if ((int)puVar24 != 1) {
          *(undefined8 *)(pcVar40 + 0x248) = *(undefined8 *)(pcVar40 + 600);
                    /* WARNING: Subroutine does not return */
          *(undefined8 *)(puVar55 + -8) = 0x14173fcfc;
          pdb_142dc8590(&UNK_14332bb50);
        }
code_r0x00014173fcad:
        *(undefined8 *)(pcVar40 + 0x248) = *(undefined8 *)(pcVar40 + 600);
code_r0x00014173fcbb:
                    /* WARNING: Subroutine does not return */
        *(undefined8 *)(puVar55 + -8) = 0x14173fcc7;
        pdb_142dc8570(&UNK_14332bb50);
      }
      break;
    case (byte *)0x14173fcca:
code_r0x00014173fcca:
                    /* WARNING: Subroutine does not return */
      *(undefined8 *)(pcVar59 + -8) = 0x14173fcd6;
      pdb_142dc8590(&UNK_14332ba20);
    case (byte *)0x14173fcd6:
                    /* WARNING: Subroutine does not return */
      *(undefined8 *)(pcVar59 + -8) = 0x14173fce2;
      pdb_142dc8570(&UNK_14332ba20);
    case (byte *)0x14173fe07:
code_r0x00014173fe07:
      uVar23 = puVar32[(longlong)pbVar35];
      *(char **)(pcVar40 + 0x148) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00014173fe15. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      puVar32 = (uint *)(*(code *)((longlong)(int)uVar23 + (longlong)puVar32))();
      return puVar32;
    case (byte *)0x14173fe9e:
      *(uint *)(param_2 + 0x70) =
           *(int *)(param_2 + 0x70) + (int)unaff_RBX +
           (uint)CARRY8((longlong)(int)uVar23,(ulonglong)puVar32);
      goto code_r0x00014173fe1a;
    case (byte *)0x141740469:
      *(int *)(pbVar35 + -0x72b7f4f1) = *(int *)(pbVar35 + -0x72b7f4f1) + (int)param_2;
      pbVar35 = (byte *)(ulonglong)((uint)pbVar35 | 0x1beb5ac);
    case (byte *)0x14174045d:
      piVar1 = (int *)((ulonglong)(((uint)pbVar35 | 0x9b0d8d48) + (int)pcVar40) + 1);
      *piVar1 = *piVar1 + -0x480b0f90;
                    /* WARNING: Subroutine does not return */
      *(undefined8 *)(pcVar59 + -8) = 0x141740479;
      pdb_142dc8590(0x4332ba20);
    }
    lVar34 = *(longlong *)(unaff_RBX + 0xe8);
    *(undefined8 *)(pcVar59 + -8) = 0x14173fba5;
    pub_142e32760(pcVar40 + 0x148,unaff_RBX + 0xf0,0xc0);
    uVar41 = *(undefined8 *)(unaff_RBX + 0x1b0);
    uVar27 = *(undefined8 *)(unaff_RBX + 0x1b8);
    uVar69 = *(undefined4 *)(unaff_RBX + 0x1c4);
    uVar70 = *(undefined4 *)(unaff_RBX + 0x1c8);
    uVar71 = *(undefined4 *)(unaff_RBX + 0x1cc);
    *(undefined4 *)(pcVar40 + 0x230) = *(undefined4 *)(unaff_RBX + 0x1c0);
    *(undefined4 *)(pcVar40 + 0x234) = uVar69;
    *(undefined4 *)(pcVar40 + 0x238) = uVar70;
    *(undefined4 *)(pcVar40 + 0x23c) = uVar71;
    *(undefined8 *)(pcVar40 + 0x220) = uVar41;
    *(undefined8 *)(pcVar40 + 0x228) = uVar27;
    *(undefined8 *)(pcVar59 + -8) = 0x14173fbcd;
    pdb_14098a860(pcVar40 + 0x220);
    *(undefined8 *)(pcVar59 + -8) = 0x14173fbe4;
    pub_142e32760(pcVar40 + -0x60,pcVar40 + 0x148,0xc0);
    unaff_RBX = *(char **)(pcVar40 + 0x250);
    unaff_RBX[0x1d0] = '\x01';
    if (SBORROW8(0,lVar34)) {
      param_1[0] = 2;
      param_1[1] = 0;
      cVar22 = '\x03';
      puVar24 = param_1;
      goto code_r0x00014173fc81;
    }
    *(undefined8 *)(pcVar59 + -8) = 0x14173fc1b;
    pub_142e32760(pcVar40 + 0x160,pcVar40 + -0x60,0xc0);
    pcVar40[0x148] = '\x01';
    pcVar40[0x149] = '\0';
    pcVar40[0x14a] = '\0';
    pcVar40[0x14b] = '\0';
    pcVar40[0x14c] = '\0';
    pcVar40[0x14d] = '\0';
    pcVar40[0x14e] = '\0';
    pcVar40[0x14f] = '\0';
    pcVar40[0x150] = '\x01';
    pcVar40[0x151] = '\0';
    pcVar40[0x152] = '\0';
    pcVar40[0x153] = '\0';
    pcVar40[0x154] = '\0';
    pcVar40[0x155] = '\0';
    pcVar40[0x156] = '\0';
    pcVar40[0x157] = '\0';
    *(longlong *)(pcVar40 + 0x158) = lVar34;
    *(undefined8 *)(pcVar59 + -8) = 0x14173fc3d;
    pdb_14007ee60();
    *(undefined8 *)(pcVar59 + -8) = 0x14173fc4c;
    puVar24 = (uint *)pub_1406abab0(0xd8,8);
    puVar62 = puVar24;
    if (puVar24 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
      *(undefined8 *)(pcVar59 + -8) = 0x14173fca5;
      pdb_142dc7e11(8,0xd8);
    }
code_r0x00014173fc54:
    *(undefined8 *)(pcVar59 + -8) = 0x14173fc69;
    pub_142e32760(puVar24,pcVar40 + 0x148,0xd8);
    param_1[0] = 0;
    param_1[1] = 0;
    *(uint **)(param_1 + 2) = puVar62;
code_r0x00014173fc74:
    *(undefined **)(param_1 + 4) = &UNK_14332bab8;
    cVar22 = '\x01';
    puVar24 = param_1;
code_r0x00014173fc81:
    unaff_RBX[0x1d8] = cVar22;
code_r0x00014173fc92:
    return puVar24;
  case '%':
code_r0x00014173fd83:
    *(uint **)(pcVar40 + 0x248) = (uint *)(ulonglong)*(uint *)(pcVar40 + 600);
    return (uint *)(ulonglong)*(uint *)(pcVar40 + 600);
  case '&':
    goto code_r0x0001417403e5;
  case '\'':
code_r0x0001417403d9:
    pcVar59 = puVar15;
    cVar22 = (char)puVar24;
    *(int *)(pcVar40 + 0xc0) = (int)unaff_RDI;
code_r0x0001417403d8:
    *(byte **)(pcVar40 + 0xc0) = unaff_R15;
    pcVar40[200] = cVar22;
    puVar60 = pcVar59;
code_r0x0001417403e5:
    *(undefined **)(puVar60 + 0x20) = &UNK_14332bae8;
    puVar36 = (uint *)&UNK_14332b8d0;
    pcVar59 = puVar60;
code_r0x00014174040b:
                    /* WARNING: Subroutine does not return */
    *(undefined8 *)(pcVar59 + -8) = 0x141740410;
    pdb_142dc8170(puVar36);
  case '(':
code_r0x00014173fe1a:
    uVar41 = *(undefined8 *)(param_2 + 0x18);
    *(undefined8 *)(pcVar40 + 0x90) = *(undefined8 *)(param_2 + 0x10);
    *(undefined8 *)(pcVar40 + 0x98) = uVar41;
    *(undefined8 *)(pcVar40 + 0x80) = in_XMM0_Qa;
    *(undefined8 *)(pcVar40 + 0x88) = in_XMM0_Qb;
    uVar41 = *(undefined8 *)(param_2 + 0x20);
    uVar27 = *(undefined8 *)(param_2 + 0x28);
    uVar69 = *(undefined4 *)(param_2 + 0x34);
    uVar70 = *(undefined4 *)(param_2 + 0x38);
    uVar71 = *(undefined4 *)(param_2 + 0x3c);
    *(undefined4 *)(pcVar40 + 0x20) = *(undefined4 *)(param_2 + 0x30);
    *(undefined4 *)(pcVar40 + 0x24) = uVar69;
    *(undefined4 *)(pcVar40 + 0x28) = uVar70;
    *(undefined4 *)(pcVar40 + 0x2c) = uVar71;
    *(undefined8 *)(pcVar40 + 0x10) = uVar41;
    *(undefined8 *)(pcVar40 + 0x18) = uVar27;
    *(undefined8 *)(pcVar59 + -8) = 0x14173fe55;
    pdb_141748860(pcVar40 + 0xc0,pcVar40 + 0x80,pcVar40 + 0x10);
    uVar41 = *(undefined8 *)(pcVar40 + 0xc0);
    uVar27 = *(undefined8 *)(pcVar40 + 200);
    uVar28 = *(undefined8 *)(pcVar40 + 0xd0);
    uVar6 = *(undefined8 *)(pcVar40 + 0xd8);
    uVar69 = *(undefined4 *)(pcVar40 + 0xe0);
    uVar70 = *(undefined4 *)(pcVar40 + 0xe4);
    uVar71 = *(undefined4 *)(pcVar40 + 0xe8);
    uVar72 = *(undefined4 *)(pcVar40 + 0xec);
    uVar73 = *(undefined4 *)(pcVar40 + 0xf0);
    uVar74 = *(undefined4 *)(pcVar40 + 0xf4);
    uVar9 = *(undefined4 *)(pcVar40 + 0xf8);
    uVar10 = *(undefined4 *)(pcVar40 + 0xfc);
    *(undefined8 *)(pcVar40 + -0x50) = uVar41;
    *(undefined8 *)(pcVar40 + -0x48) = uVar27;
    *(undefined8 *)(pcVar40 + -0x40) = uVar28;
    *(undefined8 *)(pcVar40 + -0x38) = uVar6;
    *(undefined4 *)(pcVar40 + -0x30) = uVar69;
    *(undefined4 *)(pcVar40 + -0x2c) = uVar70;
    *(undefined4 *)(pcVar40 + -0x28) = uVar71;
    *(undefined4 *)(pcVar40 + -0x24) = uVar72;
    *(undefined4 *)(pcVar40 + -0x20) = uVar73;
    *(undefined4 *)(pcVar40 + -0x1c) = uVar74;
    *(undefined4 *)(pcVar40 + -0x18) = uVar9;
    *(undefined4 *)(pcVar40 + -0x14) = uVar10;
    *(undefined8 *)(pcVar40 + -0x10) = *(undefined8 *)(pcVar40 + 0x100);
    lVar34 = *(longlong *)(pcVar40 + 0x148);
    *(undefined8 *)(lVar34 + 0x80) = *(undefined8 *)(pcVar40 + 0x100);
    *(undefined4 *)(lVar34 + 0x70) = uVar73;
    *(undefined4 *)(lVar34 + 0x74) = uVar74;
    *(undefined4 *)(lVar34 + 0x78) = uVar9;
    *(undefined4 *)(lVar34 + 0x7c) = uVar10;
    *(undefined4 *)(lVar34 + 0x60) = uVar69;
    *(undefined4 *)(lVar34 + 100) = uVar70;
    *(undefined4 *)(lVar34 + 0x68) = uVar71;
    *(undefined4 *)(lVar34 + 0x6c) = uVar72;
    *(undefined8 *)(lVar34 + 0x50) = uVar28;
    *(undefined8 *)(lVar34 + 0x58) = uVar6;
    *(undefined8 *)(lVar34 + 0x40) = uVar41;
    *(undefined8 *)(lVar34 + 0x48) = uVar27;
    if (*(char *)(lVar34 + 0x80) != '\0') {
      bVar64 = *(char *)(lVar34 + 0x80) == '\x01';
      puVar55 = pcVar59;
code_r0x00014174044d:
      if (bVar64) {
code_r0x00014174044f:
                    /* WARNING: Subroutine does not return */
        *(undefined8 *)(puVar55 + -8) = 0x14174045b;
        pdb_142dc8570(&UNK_14332bb00);
      }
code_r0x00014174045e:
                    /* WARNING: Subroutine does not return */
      *(undefined8 *)(puVar55 + -8) = 0x14174046a;
      pdb_142dc8590(&UNK_14332bb00);
    }
    *(undefined8 *)(pcVar40 + 0x130) = *(undefined8 *)(lVar34 + 0x40);
    uVar41 = *(undefined8 *)(lVar34 + 0x48);
    unaff_RDI = *(uint **)(lVar34 + 0x50);
    uVar27 = *(undefined8 *)(lVar34 + 0x60);
    uVar28 = *(undefined8 *)(lVar34 + 0x68);
    uVar69 = *(undefined4 *)(lVar34 + 0x74);
    uVar70 = *(undefined4 *)(lVar34 + 0x78);
    uVar71 = *(undefined4 *)(lVar34 + 0x7c);
    *(undefined4 *)(pcVar40 + 0x90) = *(undefined4 *)(lVar34 + 0x70);
    *(undefined4 *)(pcVar40 + 0x94) = uVar69;
    *(undefined4 *)(pcVar40 + 0x98) = uVar70;
    *(undefined4 *)(pcVar40 + 0x9c) = uVar71;
    *(undefined8 *)(pcVar40 + 0x80) = uVar27;
    *(undefined8 *)(pcVar40 + 0x88) = uVar28;
    lVar34 = *(longlong *)(pcVar40 + 0x80);
    *(undefined8 *)(pcVar40 + 0x138) = uVar41;
    *(undefined8 *)(pcVar59 + -8) = 0x14173ff09;
    pdb_141c2f360(pcVar40 + 0xc0,lVar34 + 0x10,uVar41,unaff_RDI);
    auVar68[0] = -(pcVar40[0xc0] == DAT_142f5c7c0);
    auVar68[1] = -(pcVar40[0xc1] == UNK_142f5c7c1);
    auVar68[2] = -(pcVar40[0xc2] == UNK_142f5c7c2);
    auVar68[3] = -(pcVar40[0xc3] == UNK_142f5c7c3);
    auVar68[4] = -(pcVar40[0xc4] == UNK_142f5c7c4);
    auVar68[5] = -(pcVar40[0xc5] == UNK_142f5c7c5);
    auVar68[6] = -(pcVar40[0xc6] == UNK_142f5c7c6);
    auVar68[7] = -(pcVar40[199] == UNK_142f5c7c7);
    auVar68[8] = -(pcVar40[200] == UNK_142f5c7c8);
    auVar68[9] = -(pcVar40[0xc9] == UNK_142f5c7c9);
    auVar68[10] = -(pcVar40[0xca] == UNK_142f5c7ca);
    auVar68[0xb] = -(pcVar40[0xcb] == UNK_142f5c7cb);
    auVar68[0xc] = -(pcVar40[0xcc] == UNK_142f5c7cc);
    auVar68[0xd] = -(pcVar40[0xcd] == UNK_142f5c7cd);
    auVar68[0xe] = -(pcVar40[0xce] == UNK_142f5c7ce);
    auVar68[0xf] = -(pcVar40[0xcf] == UNK_142f5c7cf);
    uVar41 = *(undefined8 *)(pcVar40 + 0xd0);
    if ((ushort)((ushort)(SUB161(auVar68 >> 7,0) & 1) | (ushort)(SUB161(auVar68 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar68 >> 0x17,0) & 1) << 2 |
                 (ushort)(SUB161(auVar68 >> 0x1f,0) & 1) << 3 |
                 (ushort)(SUB161(auVar68 >> 0x27,0) & 1) << 4 |
                 (ushort)(SUB161(auVar68 >> 0x2f,0) & 1) << 5 |
                 (ushort)(SUB161(auVar68 >> 0x37,0) & 1) << 6 |
                 (ushort)(SUB161(auVar68 >> 0x3f,0) & 1) << 7 |
                 (ushort)(SUB161(auVar68 >> 0x47,0) & 1) << 8 |
                 (ushort)(SUB161(auVar68 >> 0x4f,0) & 1) << 9 |
                 (ushort)(SUB161(auVar68 >> 0x57,0) & 1) << 10 |
                 (ushort)(SUB161(auVar68 >> 0x5f,0) & 1) << 0xb |
                 (ushort)(SUB161(auVar68 >> 0x67,0) & 1) << 0xc |
                 (ushort)(SUB161(auVar68 >> 0x6f,0) & 1) << 0xd |
                 (ushort)(SUB161(auVar68 >> 0x77,0) & 1) << 0xe | (ushort)(auVar68[0xf] >> 7) << 0xf
                ) == 0xffff) {
      *(undefined8 *)(pcVar59 + -8) = 0x14173ff38;
      pdb_14098a860(pcVar40 + 0x80);
      uVar39 = *(ulonglong *)(pcVar40 + 0x130);
      if (uVar39 != 0) {
        pbVar35 = *(byte **)(pcVar40 + 0x138);
        *(undefined8 *)(pcVar59 + -8) = 0x14173ff57;
        pub_1406abac0(pbVar35,uVar39,1);
      }
      lVar29 = *(longlong *)(pcVar40 + 0x148);
      *(undefined1 *)(lVar29 + 0x80) = 1;
code_r0x000141740265:
      *(undefined8 *)(pcVar40 + 0xc0) = uVar41;
      *(undefined8 *)(pcVar59 + -8) = 0x141740271;
      pdb_14007ee60();
      *(undefined8 *)(pcVar59 + -8) = 0x141740280;
      pbVar35 = pub_1406abab0(8,8);
      if (pbVar35 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
        *(undefined8 *)(pcVar59 + -8) = 0x141740363;
        pdb_142dc7e11(8,8);
      }
      *(undefined8 *)pbVar35 = uVar41;
      uVar41 = 1;
      puVar37 = &UNK_1430712c0;
    }
    else {
      *(undefined8 *)(pcVar40 + 0x78) = *(undefined8 *)(pcVar40 + 0x128);
      *(undefined8 *)(pcVar40 + 0x68) = *(undefined8 *)(pcVar40 + 0x118);
      *(undefined8 *)(pcVar40 + 0x70) = *(undefined8 *)(pcVar40 + 0x120);
      *(undefined4 *)(pcVar40 + 0x58) = *(undefined4 *)(pcVar40 + 0x108);
      *(undefined4 *)(pcVar40 + 0x5c) = *(undefined4 *)(pcVar40 + 0x10c);
      *(undefined4 *)(pcVar40 + 0x60) = *(undefined4 *)(pcVar40 + 0x110);
      *(undefined4 *)(pcVar40 + 100) = *(undefined4 *)(pcVar40 + 0x114);
      *(undefined4 *)(pcVar40 + 0x48) = *(undefined4 *)(pcVar40 + 0xf8);
      *(undefined4 *)(pcVar40 + 0x4c) = *(undefined4 *)(pcVar40 + 0xfc);
      *(undefined4 *)(pcVar40 + 0x50) = *(undefined4 *)(pcVar40 + 0x100);
      *(undefined4 *)(pcVar40 + 0x54) = *(undefined4 *)(pcVar40 + 0x104);
      *(undefined4 *)(pcVar40 + 0x38) = *(undefined4 *)(pcVar40 + 0xe8);
      *(undefined4 *)(pcVar40 + 0x3c) = *(undefined4 *)(pcVar40 + 0xec);
      *(undefined4 *)(pcVar40 + 0x40) = *(undefined4 *)(pcVar40 + 0xf0);
      *(undefined4 *)(pcVar40 + 0x44) = *(undefined4 *)(pcVar40 + 0xf4);
      *(undefined8 *)(pcVar40 + 0x28) = *(undefined8 *)(pcVar40 + 0xd8);
      *(undefined8 *)(pcVar40 + 0x30) = *(undefined8 *)(pcVar40 + 0xe0);
      *(undefined8 *)(pcVar40 + 0x10) = *(undefined8 *)(pcVar40 + 0xc0);
      *(undefined8 *)(pcVar40 + 0x18) = *(undefined8 *)(pcVar40 + 200);
      *(undefined8 *)(pcVar40 + 0x20) = uVar41;
      unaff_RBX = *(char **)(pcVar40 + 0x88);
      if (unaff_RBX == (char *)0x0) {
        uVar69 = (undefined4)CONCAT71((int7)((ulonglong)*(undefined8 *)(pcVar40 + 200) >> 8),1);
      }
      else {
        unaff_R15 = (byte *)(unaff_RBX + 0x38);
        LOCK();
        bVar64 = unaff_RBX[0x38] == '\0';
        if (bVar64) {
          unaff_RBX[0x38] = '\x01';
        }
        UNLOCK();
        if (!bVar64) {
          pcVar40[0x15f] = '\x01';
          pcVar40[0x15e] = '\x01';
          *(undefined8 *)(pcVar59 + -8) = 0x1417403b0;
          pdb_142dc6be0(unaff_R15);
        }
        puVar61 = _DAT_143ca8f38;
        if ((*_DAT_143ca8f38 & 0x7fffffffffffffff) == 0) {
          uVar23 = 0;
          cVar42 = unaff_RBX[0x39];
        }
        else {
          pcVar40[0x15f] = '\x01';
          pcVar40[0x15e] = '\x01';
          *(undefined8 *)(pcVar59 + -8) = 0x1417403c9;
          uVar23 = pdb_142dc79e0();
          uVar23 = uVar23 ^ 1;
          cVar42 = unaff_RBX[0x39];
        }
        cVar22 = (char)uVar23;
        if (cVar42 != '\0') goto code_r0x0001417403d8;
        *(uint *)(pcVar40 + 0x158) = uVar23;
        *(byte **)(pcVar40 + 0x140) = unaff_R15;
        *(undefined8 *)(pcVar40 + 0x110) = *(undefined8 *)(pcVar40 + 0x60);
        *(undefined8 *)(pcVar40 + 0x118) = *(undefined8 *)(pcVar40 + 0x68);
        *(undefined8 *)(pcVar40 + 0x100) = *(undefined8 *)(pcVar40 + 0x50);
        *(undefined8 *)(pcVar40 + 0x108) = *(undefined8 *)(pcVar40 + 0x58);
        *(undefined4 *)(pcVar40 + 0xf0) = *(undefined4 *)(pcVar40 + 0x40);
        *(undefined4 *)(pcVar40 + 0xf4) = *(undefined4 *)(pcVar40 + 0x44);
        *(undefined4 *)(pcVar40 + 0xf8) = *(undefined4 *)(pcVar40 + 0x48);
        *(undefined4 *)(pcVar40 + 0xfc) = *(undefined4 *)(pcVar40 + 0x4c);
        *(undefined4 *)(pcVar40 + 0xe0) = *(undefined4 *)(pcVar40 + 0x30);
        *(undefined4 *)(pcVar40 + 0xe4) = *(undefined4 *)(pcVar40 + 0x34);
        *(undefined4 *)(pcVar40 + 0xe8) = *(undefined4 *)(pcVar40 + 0x38);
        *(undefined4 *)(pcVar40 + 0xec) = *(undefined4 *)(pcVar40 + 0x3c);
        *(undefined4 *)(pcVar40 + 0xd0) = *(undefined4 *)(pcVar40 + 0x20);
        *(undefined4 *)(pcVar40 + 0xd4) = *(undefined4 *)(pcVar40 + 0x24);
        *(undefined4 *)(pcVar40 + 0xd8) = *(undefined4 *)(pcVar40 + 0x28);
        *(undefined4 *)(pcVar40 + 0xdc) = *(undefined4 *)(pcVar40 + 0x2c);
        *(undefined8 *)(pcVar40 + 0xc0) = *(undefined8 *)(pcVar40 + 0x10);
        *(undefined8 *)(pcVar40 + 200) = *(undefined8 *)(pcVar40 + 0x18);
        *(undefined8 *)(pcVar59 + -8) = 0x141740071;
        pdb_1417b89d0(unaff_RBX + 0x40,pcVar40 + 0xc0);
        unaff_R15 = (byte *)(unaff_RBX + 0x38);
        if ((pcVar40[0x158] == '\0') && ((*puVar61 & 0x7fffffffffffffff) != 0)) {
code_r0x000141740425:
          pcVar40[0x15f] = '\0';
          pcVar40[0x15e] = '\x01';
          *(undefined8 *)(pcVar59 + -8) = 0x141740438;
          cVar22 = pdb_142dc79e0();
          if (cVar22 == '\0') {
            unaff_RBX[0x39] = '\x01';
          }
        }
        uVar69 = 0;
        LOCK();
        bVar21 = *unaff_R15;
        *unaff_R15 = 0;
        UNLOCK();
        if (bVar21 == 2) {
          pcVar40[0x15f] = '\0';
          pcVar40[0x15e] = '\x01';
          *(undefined8 *)(pcVar59 + -8) = 0x1417400af;
          pdb_142dc6ca0();
          uVar69 = 0;
        }
      }
      *(undefined4 *)(pcVar40 + 0x158) = uVar69;
      *(undefined8 *)pcVar40 = *(undefined8 *)(pcVar40 + 0x138);
      *(uint **)(pcVar40 + 8) = unaff_RDI;
      pcVar40[0xa0] = '\0';
      pcVar40[0xa1] = '\0';
      pcVar40[0xa2] = '\0';
      pcVar40[0xa3] = '\0';
      pcVar40[0xa4] = '\0';
      pcVar40[0xa5] = '\0';
      pcVar40[0xa6] = '\0';
      pcVar40[0xa7] = '\0';
      pcVar40[0xa8] = '\x01';
      pcVar40[0xa9] = '\0';
      pcVar40[0xaa] = '\0';
      pcVar40[0xab] = '\0';
      pcVar40[0xac] = '\0';
      pcVar40[0xad] = '\0';
      pcVar40[0xae] = '\0';
      pcVar40[0xaf] = '\0';
      pcVar40[0xb0] = '\0';
      pcVar40[0xb1] = '\0';
      pcVar40[0xb2] = '\0';
      pcVar40[0xb3] = '\0';
      pcVar40[0xb4] = '\0';
      pcVar40[0xb5] = '\0';
      pcVar40[0xb6] = '\0';
      pcVar40[0xb7] = '\0';
      pcVar40[0xd0] = ' ';
      pcVar40[0xd1] = '\0';
      pcVar40[0xd2] = '\0';
      pcVar40[0xd3] = '`';
      pcVar40[0xd4] = '\0';
      pcVar40[0xd5] = '\0';
      pcVar40[0xd6] = '\0';
      pcVar40[0xd7] = '\0';
      *(char **)(pcVar40 + 0xc0) = pcVar40 + 0xa0;
      *(undefined **)(pcVar40 + 200) = &UNK_14332b508;
      *(undefined8 *)(pcVar59 + -8) = 0x141740122;
      cVar22 = pdb_140f58310(pcVar40,pcVar40 + 0xc0);
      if (cVar22 != '\0') {
        *(undefined **)(pcVar59 + 0x20) = &UNK_14332b5e0;
                    /* WARNING: Subroutine does not return */
        *(undefined8 *)(pcVar59 + -8) = 0x141740394;
        pdb_142dc8170(&UNK_14332b538,0x37,pcVar40 + 0x157,&UNK_14332b890);
      }
      uVar41 = *(undefined8 *)(pcVar40 + 0xa8);
      uVar27 = *(undefined8 *)(pcVar40 + 0xb0);
      lVar34 = *(longlong *)(pcVar40 + 0x70);
      *(undefined8 *)(pcVar40 + 0x140) = *(undefined8 *)(pcVar40 + 0xa0);
      if (lVar34 == 0) {
        pbVar35 = (byte *)0x0;
        cVar22 = pcVar40[0x158];
      }
      else {
        unaff_RDI = *(uint **)(pcVar40 + 0x78);
        *(longlong *)(pcVar40 + 0xc0) = lVar34;
        *(uint **)(pcVar40 + 200) = unaff_RDI;
        *(undefined8 *)(pcVar40 + 0xb8) = uVar41;
        if (unaff_RDI == (uint *)0x0) {
          pbVar35 = (byte *)0x1;
        }
        else {
          *(undefined8 *)(pcVar59 + -8) = 0x141740173;
          pdb_14007ee60();
          *(undefined8 *)(pcVar59 + -8) = 0x141740180;
          pbVar35 = pub_1406abab0((ulonglong)unaff_RDI,1);
          if (pbVar35 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
            *(undefined8 *)(pcVar59 + -8) = 0x141740195;
            pdb_142dc7e11(1,unaff_RDI);
          }
        }
        *(undefined8 *)(pcVar59 + -8) = 0x1417401bf;
        pub_142e32760(pbVar35,lVar34 + 0x10,unaff_RDI);
        plVar26 = *(longlong **)(pcVar40 + 0xc0);
        LOCK();
        *plVar26 = *plVar26 + -1;
        UNLOCK();
        if (*plVar26 == 0) {
          *(undefined8 *)(pcVar59 + -8) = 0x1417401d8;
          pdb_1406ed6a0(pcVar40 + 0xc0);
        }
        uVar41 = *(undefined8 *)(pcVar40 + 0xb8);
        cVar22 = pcVar40[0x158];
      }
      if ((cVar22 != '\0') && (uVar39 = *(ulonglong *)(pcVar40 + 0x50), uVar39 != 0)) {
        pbVar8 = *(byte **)(pcVar40 + 0x58);
        *(undefined8 *)(pcVar59 + -8) = 0x141740201;
        pub_1406abac0(pbVar8,uVar39,1);
      }
      *(undefined8 *)(pcVar59 + -8) = 0x14174020e;
      pdb_14098a860(pcVar40 + 0x80);
      lVar34 = *(longlong *)(pcVar40 + 0x140);
      uVar39 = *(ulonglong *)(pcVar40 + 0x130);
      if (uVar39 != 0) {
        pbVar8 = *(byte **)(pcVar40 + 0x138);
        *(undefined8 *)(pcVar59 + -8) = 0x141740234;
        pub_1406abac0(pbVar8,uVar39,1);
      }
      lVar29 = *(longlong *)(pcVar40 + 0x148);
      *(undefined1 *)(lVar29 + 0x80) = 1;
      if (SBORROW8(0,lVar34)) goto code_r0x000141740265;
      if (lVar34 == -0x7fffffffffffffff) {
        param_1[0] = 2;
        param_1[1] = 0;
        uVar20 = 3;
        goto code_r0x0001417402a5;
      }
      pcVar40[0xc0] = '\x01';
      pcVar40[0xc1] = '\0';
      pcVar40[0xc2] = '\0';
      pcVar40[0xc3] = '\0';
      pcVar40[0xc4] = '\0';
      pcVar40[0xc5] = '\0';
      pcVar40[0xc6] = '\0';
      pcVar40[199] = '\0';
      pcVar40[200] = '\x01';
      pcVar40[0xc9] = '\0';
      pcVar40[0xca] = '\0';
      pcVar40[0xcb] = '\0';
      pcVar40[0xcc] = '\0';
      pcVar40[0xcd] = '\0';
      pcVar40[0xce] = '\0';
      pcVar40[0xcf] = '\0';
      *(longlong *)(pcVar40 + 0xd0) = lVar34;
      *(undefined8 *)(pcVar40 + 0xd8) = uVar41;
      *(undefined8 *)(pcVar40 + 0xe0) = uVar27;
      *(byte **)(pcVar40 + 0xe8) = pbVar35;
      *(uint **)(pcVar40 + 0xf0) = unaff_RDI;
      *(undefined8 *)(pcVar59 + -8) = 0x141740301;
      pdb_14007ee60();
      *(undefined8 *)(pcVar59 + -8) = 0x141740310;
      pbVar35 = pub_1406abab0(0x38,8);
      if (pbVar35 == (byte *)0x0) {
        puVar36 = (uint *)0x8;
code_r0x00014174041d:
                    /* WARNING: Subroutine does not return */
        *(undefined8 *)(pcVar59 + -8) = 0x141740422;
        pdb_142dc7e11(puVar36);
      }
      *(undefined8 *)(pbVar35 + 0x30) = *(undefined8 *)(pcVar40 + 0xf0);
      uVar41 = *(undefined8 *)(pcVar40 + 0xc0);
      uVar27 = *(undefined8 *)(pcVar40 + 200);
      uVar28 = *(undefined8 *)(pcVar40 + 0xd0);
      uVar6 = *(undefined8 *)(pcVar40 + 0xd8);
      uVar3 = *(undefined8 *)(pcVar40 + 0xe8);
      *(undefined8 *)(pbVar35 + 0x20) = *(undefined8 *)(pcVar40 + 0xe0);
      *(undefined8 *)(pbVar35 + 0x28) = uVar3;
      *(undefined8 *)(pbVar35 + 0x10) = uVar28;
      *(undefined8 *)(pbVar35 + 0x18) = uVar6;
      *(undefined8 *)pbVar35 = uVar41;
      *(undefined8 *)(pbVar35 + 8) = uVar27;
      puVar37 = &UNK_14332ba38;
      uVar41 = 0;
    }
    *(undefined8 *)param_1 = uVar41;
    *(byte **)(param_1 + 2) = pbVar35;
    *(undefined **)(param_1 + 4) = puVar37;
    uVar20 = 1;
code_r0x0001417402a5:
    *(undefined1 *)(lVar29 + 0x88) = uVar20;
    return param_1;
  }
  *(undefined8 *)(pcVar59 + -8) = 0x141738c4e;
  pdb_140dd7f80(puVar36,unaff_R15,unaff_R12,puVar63);
  unaff_RDI = puVar62;
code_r0x000141738c4f:
  in_R11 = *(char **)(unaff_RBX + 0x70);
code_r0x000141738c53:
  *(char **)(in_R11 + 0x60) = in_R11 + 0x50;
  in_R11[0x68] = '\0';
  in_R11[0x69] = '\0';
  in_R11[0x6a] = '\0';
  in_R11[0x6b] = '\0';
  in_R11[0x6c] = '\0';
  in_R11[0x6d] = '\0';
  in_R11[0x6e] = '\0';
  in_R11[0x6f] = '\0';
code_r0x000141738c63:
  *(char **)(unaff_RBX + 0x80) = in_R11 + 0x60;
  *(undefined8 *)(pcVar59 + -8) = 0x141738c84;
  pdb_140b35bb0(unaff_RBX + 0x280,in_R11 + 0x60,unaff_RBX + 0x1bf,unaff_RDI);
  lVar34 = *(longlong *)(unaff_RBX + 0x280);
  if (lVar34 == 2) {
    unaff_R13[0] = 1;
    unaff_R13[1] = 0;
    uVar20 = 3;
    puVar24 = unaff_R13;
  }
  else {
    lVar29 = *(longlong *)(unaff_RBX + 0x288);
    uVar41 = *(undefined8 *)(unaff_RBX + 0x290);
    uVar27 = *(undefined8 *)(unaff_RBX + 0x298);
    uVar28 = *(undefined8 *)(unaff_RBX + 0x2a0);
    lVar30 = *(longlong *)(unaff_RBX + 0x70);
    if (*(longlong *)(lVar30 + 0x68) != 0) {
      *(longlong *)(unaff_RBX + 0x80) = *(longlong *)(lVar30 + 0x68);
      *(undefined8 *)(pcVar59 + -8) = 0x141738ccf;
      pdb_140974580();
      pbVar35 = *(byte **)(unaff_RBX + 0x80);
      *(undefined8 *)(pcVar59 + -8) = 0x141738ce7;
      pub_1406abac0(pbVar35,0x38,8);
      lVar30 = *(longlong *)(unaff_RBX + 0x70);
    }
    if ((int)lVar34 == 1) {
      uVar41 = *(undefined8 *)(lVar30 + 0x10);
      uVar27 = *(undefined8 *)(lVar30 + 0x18);
      *(undefined8 *)(pcVar59 + -8) = 0x141738cfd;
      pdb_14007ee60();
      *(undefined8 *)(pcVar59 + -8) = 0x141738d0c;
      pbVar35 = pub_1406abab0(0x10,8);
      if (pbVar35 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
        *(undefined8 *)(pcVar59 + -8) = 0x141738e29;
        pdb_142dc7e11(8,0x10);
      }
      pbVar35[0] = 1;
      pbVar35[1] = 0;
      pbVar35[2] = 0;
      pbVar35[3] = 0;
      pbVar35[4] = 0;
      pbVar35[5] = 0;
      pbVar35[6] = 0;
      pbVar35[7] = 0;
      pbVar35[8] = 1;
      pbVar35[9] = 0;
      pbVar35[10] = 0;
      pbVar35[0xb] = 0;
      pbVar35[0xc] = 0;
      pbVar35[0xd] = 0;
      pbVar35[0xe] = 0;
      pbVar35[0xf] = 0;
      *(undefined8 *)(unaff_RBX + 0x260) = uVar41;
      *(undefined8 *)(unaff_RBX + 0x268) = uVar27;
      *(byte **)(unaff_RBX + 0x270) = pbVar35;
      *(undefined **)(unaff_RBX + 0x278) = &UNK_14332b300;
    }
    else {
      *(longlong *)(unaff_RBX + 0x150) = lVar29;
      *(undefined8 *)(unaff_RBX + 0x158) = uVar41;
      *(undefined8 *)(unaff_RBX + 0x160) = uVar27;
      *(undefined8 *)(unaff_RBX + 0x168) = uVar28;
      uVar41 = _UNK_14332b500;
      if (lVar29 == 0) {
        lVar34 = *(longlong *)(*(longlong *)(unaff_RBX + 0x70) + 0x40);
        *(undefined8 *)(unaff_RBX + 0x280) = _DAT_14332b4f8;
        *(undefined8 *)(unaff_RBX + 0x288) = uVar41;
        lVar29 = *(longlong *)(*(longlong *)(unaff_RBX + 0x70) + 0x38);
        uVar41 = *(undefined8 *)(lVar29 + 0x20);
        uVar27 = *(undefined8 *)(lVar29 + 0x28);
        unaff_RBX[0x97] = '\x01';
        *(char **)(pcVar59 + 0x20) = unaff_RBX + 0x158;
        *(undefined8 *)(pcVar59 + -8) = 0x141738dad;
        pdb_141c2b710(lVar34 + 0x10,unaff_RBX + 0x280,uVar41,uVar27);
      }
      *(undefined8 *)(unaff_RBX + 0x290) = *(undefined8 *)(unaff_RBX + 0x160);
      *(undefined8 *)(unaff_RBX + 0x298) = *(undefined8 *)(unaff_RBX + 0x168);
      *(undefined8 *)(unaff_RBX + 0x280) = *(undefined8 *)(unaff_RBX + 0x150);
      *(undefined8 *)(unaff_RBX + 0x288) = *(undefined8 *)(unaff_RBX + 0x158);
      unaff_RBX[0x97] = '\0';
      *(undefined8 *)(pcVar59 + -8) = 0x141738df4;
      pdb_14173b990(unaff_RBX + 0x260,unaff_RBX + 0x280);
      lVar30 = *(longlong *)(unaff_RBX + 0x70);
    }
    *(undefined8 *)(pcVar59 + -8) = 0x141738e02;
    pdb_140981490(lVar30 + 0x50);
    plVar26 = *(longlong **)(*(longlong *)(unaff_RBX + 0x70) + 0x38);
    LOCK();
    *plVar26 = *plVar26 + -1;
    lVar34 = *plVar26;
    UNLOCK();
joined_r0x000141738e0f:
    if (lVar34 == 0) {
      lVar34 = *(longlong *)(unaff_RBX + 0x70);
      *(undefined8 *)(pcVar59 + -8) = 0x14173914c;
      pdb_140dd76c0(lVar34 + 0x38);
    }
    plVar26 = *(longlong **)(*(longlong *)(unaff_RBX + 0x70) + 0x40);
    LOCK();
    *plVar26 = *plVar26 + -1;
    UNLOCK();
    if (*plVar26 == 0) {
      lVar34 = *(longlong *)(unaff_RBX + 0x70);
      *(undefined8 *)(pcVar59 + -8) = 0x141739168;
      pdb_140dd78e0(lVar34 + 0x40);
    }
    plVar26 = (longlong *)**(undefined8 **)(unaff_RBX + 0x70);
    if (plVar26 != (longlong *)0x0) {
      LOCK();
      *plVar26 = *plVar26 + -1;
      UNLOCK();
      if (*plVar26 == 0) {
        uVar41 = *(undefined8 *)(unaff_RBX + 0x70);
        *(undefined8 *)(pcVar59 + -8) = 0x14173918c;
        pdb_140c7a240(uVar41);
      }
    }
code_r0x000141739e0c:
    uVar41 = *(undefined8 *)(unaff_RBX + 0x260);
    uVar27 = *(undefined8 *)(unaff_RBX + 0x268);
    uVar28 = *(undefined8 *)(unaff_RBX + 0x278);
    *(undefined8 *)(unaff_R13 + 6) = *(undefined8 *)(unaff_RBX + 0x270);
    *(undefined8 *)(unaff_R13 + 8) = uVar28;
    *(undefined8 *)(unaff_R13 + 2) = uVar41;
    *(undefined8 *)(unaff_R13 + 4) = uVar27;
    unaff_R13[0] = 0;
    unaff_R13[1] = 0;
    uVar20 = 1;
    puVar24 = unaff_R13;
  }
code_r0x000141739e30:
  *(undefined1 *)(*(longlong *)(unaff_RBX + 0x70) + 0x4a) = uVar20;
code_r0x000141739e48:
code_r0x000141739e58:
  return puVar24;
code_r0x0001417372b3:
  unaff_RDI = param_3;
  *(int *)(pcVar40 + 0x610) = *(int *)(pcVar40 + 0x610) - (int)param_1;
  unaff_RBX = (char *)((ulonglong)puVar51 & 0xffffffffffffff80);
  *(char **)(unaff_RBX + 0x680) = pcVar40;
  pcVar40[0x608] = -2;
  pcVar40[0x609] = -1;
  pcVar40[0x60a] = -1;
  pcVar40[0x60b] = -1;
  pcVar40[0x60c] = -1;
  pcVar40[0x60d] = -1;
  pcVar40[0x60e] = -1;
  pcVar40[0x60f] = -1;
  puVar24 = (uint *)(&UNK_14332bd94 + *(int *)(&UNK_14332bd94 + (ulonglong)(byte)param_2[0x4a] * 4))
  ;
  puVar32 = (uint *)&UNK_14332bd94;
  pcVar59 = unaff_RBX;
  param_3 = unaff_RDI;
  in_R11 = param_2;
  unaff_R13 = puVar36;
  goto code_r0x0001417372ed;
code_r0x00014173702a:
  if (!bVar64) {
    *(byte *)puVar24 = (byte)*puVar24 + (char)puVar24;
    puVar19 = puVar50;
    puVar32 = param_1;
    goto code_r0x00014173701e;
  }
  pcVar40[-0x18] = -2;
  pcVar40[-0x17] = -1;
  pcVar40[-0x16] = -1;
  pcVar40[-0x15] = -1;
  pcVar40[-0x14] = -1;
  pcVar40[-0x13] = -1;
  pcVar40[-0x12] = -1;
  pcVar40[-0x11] = -1;
  puVar24 = (uint *)(ulonglong)(byte)param_2[0x30];
  pcVar59 = puVar50;
  param_1 = puVar36;
  puVar62 = unaff_RDI;
  puVar63 = param_3;
  goto code_r0x00014173703e;
code_r0x00014173f45a:
  *(uint **)(param_1 + 4) = puVar24;
  puVar24 = (uint *)0x1;
code_r0x00014173f460:
  unaff_RBX[0xb0] = (char)puVar24;
  return param_1;
}

