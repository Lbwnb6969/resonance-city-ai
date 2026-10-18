// VA 0x141736d90, PDB extent 632 bytes
// turbosloth::asset::impl$44::build::async_block$3<asset::texture::SourceImageAsset,turbosloth::asset::BuildContext>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/turbosloth/src/asset.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Instruction at (ram,0x0001417403f9) overlaps instruction at (ram,0x0001417403f8)
    */
/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x00014173f5eb) */
/* WARNING: Removing unreachable block (ram,0x00014173f8bf) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   turbosloth::asset::impl$44::build::async_block$3<asset::texture::SourceImageAsset,turbosloth::asset::BuildContext>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/turbosloth/src/asset.rs
   Extent: 632 */

uint * pdb_141736d90(uint *param_1,longlong *param_2,uint *param_3,undefined8 param_4)

{
  char *pcVar1;
  longlong *plVar2;
  int iVar3;
  byte bVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  ulonglong uVar8;
  byte *pbVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  longlong lVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined1 uVar21;
  byte bVar22;
  char cVar23;
  uint uVar24;
  uint uVar25;
  ulonglong uVar26;
  uint *puVar27;
  code *UNRECOVERED_JUMPTABLE;
  undefined1 (*pauVar28) [16];
  longlong lVar29;
  longlong *plVar30;
  longlong lVar31;
  longlong lVar32;
  longlong *plVar33;
  uint *puVar34;
  byte *pbVar35;
  uint *puVar36;
  uint *puVar37;
  uint *puVar38;
  undefined *puVar39;
  uint uVar40;
  undefined1 (*arg1) [16];
  undefined1 (*pauVar41) [16];
  longlong *plVar42;
  undefined8 uVar43;
  longlong lVar44;
  char cVar45;
  longlong *unaff_RBX;
  uint **ppuVar46;
  uint **ppuVar47;
  uint **ppuVar48;
  uint **ppuVar49;
  uint **ppuVar50;
  uint **ppuVar51;
  uint **ppuVar52;
  uint **ppuVar53;
  uint **ppuVar54;
  uint **ppuVar55;
  uint **ppuVar56;
  ulonglong *puVar57;
  uint *unaff_RDI;
  uint *arg0;
  longlong lVar58;
  ulonglong unaff_R12;
  uint *unaff_R13;
  int *unaff_R14;
  byte *unaff_R15;
  bool bVar59;
  longlong *in_XMM0_Qa;
  longlong *in_XMM0_Qb;
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined8 in_XMM1_Qa;
  uint uVar63;
  uint in_XMM1_Dc;
  uint in_XMM1_Dd;
  undefined4 uVar64;
  undefined8 in_XMM2_Qa;
  undefined4 uVar65;
  undefined4 in_XMM2_Dc;
  undefined4 in_XMM2_Dd;
  undefined4 uVar66;
  undefined4 uVar67;
  undefined4 in_XMM3_Dc;
  undefined4 in_XMM3_Dd;
  undefined4 in_XMM4_Da;
  undefined4 in_XMM4_Db;
  undefined4 in_XMM4_Dc;
  undefined4 in_XMM4_Dd;
  longlong unaff_XMM6_Qa;
  longlong unaff_XMM6_Qb;
  longlong unaff_retaddr;
  longlong lStackX_18;
  longlong lStackX_20;
  longlong *in_stack_00000070;
  byte abStack_258 [152];
  undefined1 auStack_1c0 [6];
  byte abStack_1ba [34];
  undefined8 uStack_198;
  undefined1 auStack_190 [128];
  uint auStack_110 [2];
  undefined8 uStack_108;
  longlong *plStack_e8;
  longlong *plStack_e0;
  uint *puStack_c0;
  uint *puStack_b8;
  undefined1 auStack_b0 [24];
  longlong *plStack_98;
  longlong *plStack_90;
  longlong lStack_88;
  longlong lStack_80;
  byte *pbStack_78;
  longlong *plStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  longlong lStack_48;
  longlong lStack_40;
  longlong lStack_38;
  
  uVar67 = (undefined4)((ulonglong)param_4 >> 0x20);
  uVar66 = (undefined4)param_4;
  uVar65 = (undefined4)((ulonglong)in_XMM2_Qa >> 0x20);
  uVar64 = (undefined4)in_XMM2_Qa;
  uVar63 = (uint)((ulonglong)in_XMM1_Qa >> 0x20);
  uVar25 = (uint)in_XMM1_Qa;
  ppuVar54 = &puStack_b8;
  ppuVar46 = &puStack_b8;
  ppuVar48 = &puStack_b8;
  ppuVar47 = &puStack_b8;
  ppuVar56 = &puStack_b8;
  ppuVar53 = &puStack_b8;
  ppuVar55 = &puStack_b8;
  ppuVar49 = &puStack_b8;
  ppuVar52 = &puStack_b8;
  ppuVar51 = &puStack_b8;
  ppuVar50 = &puStack_b8;
  puVar34 = (uint *)&lStack_38;
  uStack_50 = -2;
  puVar37 = (uint *)&UNK_14332bd74;
  uVar26 = (ulonglong)*(int *)(&UNK_14332bd74 + (ulonglong)*(byte *)(param_2 + 6) * 4);
  puVar27 = (uint *)(&UNK_14332bd74 + uVar26);
  bVar59 = puVar27 == (uint *)0x0;
  cVar23 = (char)puVar27;
  uVar24 = (uint)puVar27;
  cVar45 = (char)((ulonglong)unaff_RBX >> 8);
  uVar40 = (uint)param_2;
  bVar22 = (byte)param_3;
  puVar38 = puVar37;
  arg0 = param_1;
  lStack_48 = unaff_XMM6_Qa;
  lStack_40 = unaff_XMM6_Qb;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(byte *)(param_2 + 6)) {
  case 0:
    param_2[4] = (longlong)param_2;
    param_2[5] = 0;
  case 3:
    uStack_68 = (byte *)(param_2 + 4);
    puStack_c0 = (uint *)0x141736df3;
    uStack_60 = param_2;
    pdb_140b34640(&plStack_90,uStack_68,(longlong)&uStack_58 + 7);
    if (plStack_90 == (longlong *)0x2) {
      uVar21 = 3;
      lVar44 = 1;
    }
    else {
      if ((byte *)uStack_60[5] != (byte *)0x0) {
        puStack_c0 = (uint *)0x141736e2d;
        uStack_68 = (byte *)uStack_60[5];
        pdb_140974580();
        puStack_c0 = (uint *)0x141736e42;
        pub_1406abac0(uStack_68,0x38,8);
      }
      lVar31 = lStack_80;
      lVar44 = lStack_88;
      pbVar35 = pbStack_78;
      plVar30 = plStack_70;
      if ((int)plStack_90 == 1) {
        lVar44 = uStack_60[2];
        lVar31 = uStack_60[3];
        puStack_c0 = (uint *)0x141736e59;
        pdb_14007ee60();
        puStack_c0 = (uint *)0x141736e68;
        pbVar35 = pub_1406abab0(0x10,8);
        if (pbVar35 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
          puStack_c0 = (uint *)0x141736edb;
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
        plVar30 = (longlong *)&UNK_14332b300;
      }
      puStack_c0 = (uint *)0x141736e99;
      pdb_14097afe0();
      *(longlong *)(param_1 + 2) = lVar44;
      *(longlong *)(param_1 + 4) = lVar31;
      *(byte **)(param_1 + 6) = pbVar35;
      *(longlong **)(param_1 + 8) = plVar30;
      uVar21 = 1;
      lVar44 = 0;
    }
    *(longlong *)param_1 = lVar44;
    *(undefined1 *)(uStack_60 + 6) = uVar21;
    return param_1;
  case 1:
                    /* WARNING: Subroutine does not return */
    puStack_c0 = (uint *)0x141736ef6;
    pdb_142dc8570(&UNK_14332b2c8);
  case 2:
                    /* WARNING: Subroutine does not return */
    puStack_c0 = (uint *)0x141736eea;
    pdb_142dc8590(&UNK_14332b2c8);
  case 4:
    UNRECOVERED_JUMPTABLE =
         (code *)(&UNK_14332bd84 + *(int *)(&UNK_14332bd84 + (longlong)puVar27 * 4));
    goto code_r0x00014173704c;
  case 5:
    *(int *)(uVar26 + 0xd07ac883) = *(int *)(uVar26 + 0xd07ac883) + uVar40;
                    /* WARNING: Subroutine does not return */
    puStack_c0 = (uint *)0x14173716a;
    pdb_142dc8590();
  case 6:
    *(byte *)puVar27 = (byte)*puVar27 + cVar23;
    *(char *)(param_2 + 2) = (char)param_2[2] + cVar45;
                    /* WARNING: Subroutine does not return */
    puStack_c0 = (uint *)0x14173715b;
    pdb_142dc7e11();
  case 7:
    UNRECOVERED_JUMPTABLE = (code *)(ulonglong)(uVar24 + 0x4332bd74);
code_r0x00014173704c:
                    /* WARNING: Could not recover jumptable at 0x00014173704c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    puVar34 = (uint *)(*UNRECOVERED_JUMPTABLE)();
    return puVar34;
  case 8:
    arg0 = (uint *)((ulonglong)puVar27 & 0xffffffff);
    unaff_R13 = (uint *)&UNK_14332bd74;
    bVar4 = *(byte *)((longlong)param_2 + 0x4a);
    puVar39 = &UNK_14332bd94;
    iVar3 = *(int *)(&UNK_14332bd94 + (ulonglong)bVar4 * 4);
    puVar36 = (uint *)(&UNK_14332bd94 + iVar3);
    unaff_RBX[0xe] = (longlong)param_2;
    cVar23 = (char)puVar36;
    ppuVar46 = &puStack_b8;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(bVar4) {
    case 0:
      *(undefined2 *)(param_2 + 9) = 0;
      unaff_R12 = param_2[7];
      unaff_R14 = (int *)(unaff_R12 + 0x30);
      LOCK();
      bVar59 = *(int *)(unaff_R12 + 0x30) == 0;
      if (bVar59) {
        *(int *)(unaff_R12 + 0x30) = 0x3fffffff;
      }
      UNLOCK();
      if (!bVar59) {
        puStack_c0 = (uint *)0x1417387ec;
        pdb_142dc6e70(unaff_R14);
      }
      puVar57 = _DAT_143ca8f38;
      if ((*_DAT_143ca8f38 & 0x7fffffffffffffff) == 0) {
        unaff_R15 = (byte *)0x0;
        bVar22 = 0;
        cVar23 = *(char *)(unaff_R12 + 0x38);
        lVar44 = unaff_RBX[0xe];
      }
      else {
        puStack_c0 = (uint *)0x1417387f7;
        bVar22 = pdb_142dc79e0();
        bVar22 = bVar22 ^ 1;
        unaff_R15 = (byte *)(ulonglong)bVar22;
        cVar23 = *(char *)(unaff_R12 + 0x38);
        lVar44 = unaff_RBX[0xe];
      }
      if (cVar23 != '\0') {
        unaff_RBX[0x50] = (longlong)unaff_R14;
        *(byte *)(unaff_RBX + 0x51) = bVar22;
        plStack_98 = (longlong *)&UNK_14332afe0;
                    /* WARNING: Subroutine does not return */
        puStack_c0 = (uint *)0x14173884a;
        pdb_142dc8170(&UNK_14332b8d0,0x2b,unaff_RBX + 0x50,&UNK_14332b960);
      }
      unaff_RBX[0x13] = (longlong)unaff_R14;
      cVar23 = (char)unaff_R15;
      *(char *)(unaff_RBX + 0x14) = cVar23;
      plVar30 = *(longlong **)(unaff_R12 + 0x70);
      if (plVar30 == (longlong *)0x0) {
        if (SBORROW8(0,*(longlong *)(unaff_R12 + 0x58))) {
          *(undefined8 *)(unaff_R12 + 0x58) = 0;
          *(undefined8 *)(unaff_R12 + 0x60) = 8;
          *(undefined8 *)(unaff_R12 + 0x68) = 0;
          *(undefined8 *)(lVar44 + 0x20) = 2;
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
          puStack_c0 = (uint *)0x141737d42;
          pdb_14007ee60();
          puStack_c0 = (uint *)0x141737d51;
          pbVar35 = pub_1406abab0(0x300,0x80);
          if (pbVar35 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
            puStack_c0 = (uint *)0x141738983;
            pdb_142dc7e11(0x80,0x300);
          }
          unaff_RBX[0x10] = (longlong)arg0;
          puStack_c0 = (uint *)0x141737d79;
          pub_142e32760(pbVar35,unaff_RBX + 0x50,0x300);
          LOCK();
          lVar44 = *(longlong *)pbVar35;
          *(longlong *)pbVar35 = *(longlong *)pbVar35 + 1;
          UNLOCK();
          if (*(longlong *)pbVar35 == 0 || SCARRY8(lVar44,1) != *(longlong *)pbVar35 < 0)
          goto code_r0x00014173a218;
          unaff_RBX[0x50] = (longlong)pbVar35;
          unaff_RBX[0x51] = 0;
          unaff_RBX[0x2a] = (longlong)pbVar35;
          lVar44 = *(longlong *)(unaff_R12 + 0x68);
          if (lVar44 == *(longlong *)(unaff_R12 + 0x58)) {
            puStack_c0 = (uint *)0x141737db2;
            pdb_142d7e8a0(unaff_R12 + 0x58);
          }
          *(byte **)(*(longlong *)(unaff_R12 + 0x60) + lVar44 * 8) = pbVar35;
          *(longlong *)(unaff_R12 + 0x68) = lVar44 + 1;
          lVar44 = unaff_RBX[0xe];
          *(byte **)(lVar44 + 0x28) = pbVar35;
          *(undefined8 *)(lVar44 + 0x30) = 0;
          *(undefined8 *)(lVar44 + 0x20) = 1;
          arg0 = (uint *)unaff_RBX[0x10];
          puVar57 = _DAT_143ca8f38;
        }
      }
      else {
        lVar29 = *(longlong *)(unaff_R12 + 0x78);
        LOCK();
        lVar31 = *plVar30;
        *plVar30 = *plVar30 + 1;
        UNLOCK();
        if (*plVar30 == 0 || SCARRY8(lVar31,1) != *plVar30 < 0) goto code_r0x00014173a218;
        unaff_RBX[0x2a] = (longlong)plVar30;
        unaff_RBX[0x2b] = lVar29;
        puStack_c0 = (uint *)0x141737399;
        pdb_141c34660(unaff_RBX + 0xcd,*(longlong *)(lVar44 + 0x40) + 0x10,
                      *(undefined8 *)(unaff_R12 + 0x48),*(undefined8 *)(unaff_R12 + 0x50));
        uVar26 = 1;
        if (unaff_RBX[0xcd] < 0) {
          uVar26 = unaff_RBX[0xcd] ^ 0x8000000000000000;
        }
        lVar44 = unaff_RBX[0xe];
        if (uVar26 != 0) {
          if (uVar26 != 1) {
            if (SBORROW8(0,*(longlong *)(unaff_R12 + 0x58))) {
              *(undefined8 *)(unaff_R12 + 0x58) = 0;
              *(undefined8 *)(unaff_R12 + 0x60) = 8;
              *(undefined8 *)(unaff_R12 + 0x68) = 0;
              *(undefined8 *)(lVar44 + 0x20) = 2;
              plVar30 = (longlong *)unaff_RBX[0x2a];
              LOCK();
              *plVar30 = *plVar30 + -1;
              lVar44 = *plVar30;
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
              puStack_c0 = (uint *)0x141737ef4;
              pdb_14007ee60();
              puStack_c0 = (uint *)0x141737f03;
              pbVar35 = pub_1406abab0(0x300,0x80);
              if (pbVar35 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
                puStack_c0 = (uint *)0x141738a11;
                pdb_142dc7e11(0x80,0x300);
              }
              unaff_RBX[0x10] = (longlong)arg0;
              puStack_c0 = (uint *)0x141737f2b;
              pub_142e32760(pbVar35,unaff_RBX + 0x50,0x300);
              LOCK();
              lVar44 = *(longlong *)pbVar35;
              *(longlong *)pbVar35 = *(longlong *)pbVar35 + 1;
              UNLOCK();
              if (*(longlong *)pbVar35 == 0 || SCARRY8(lVar44,1) != *(longlong *)pbVar35 < 0)
              goto code_r0x00014173a218;
              unaff_RBX[0x50] = (longlong)pbVar35;
              unaff_RBX[0x51] = 0;
              unaff_RBX[0x18] = (longlong)pbVar35;
              lVar44 = *(longlong *)(unaff_R12 + 0x68);
              if (lVar44 == *(longlong *)(unaff_R12 + 0x58)) {
                puStack_c0 = (uint *)0x141737f64;
                pdb_142d7e8a0(unaff_R12 + 0x58);
              }
              *(byte **)(*(longlong *)(unaff_R12 + 0x60) + lVar44 * 8) = pbVar35;
              *(longlong *)(unaff_R12 + 0x68) = lVar44 + 1;
              lVar44 = unaff_RBX[0xe];
              *(byte **)(lVar44 + 0x28) = pbVar35;
              *(undefined8 *)(lVar44 + 0x30) = 0;
              *(undefined8 *)(lVar44 + 0x20) = 1;
              puVar57 = _DAT_143ca8f38;
              arg0 = (uint *)unaff_RBX[0x10];
              plVar30 = (longlong *)unaff_RBX[0x2a];
              LOCK();
              *plVar30 = *plVar30 + -1;
              lVar44 = *plVar30;
              UNLOCK();
            }
            if (lVar44 == 0) {
              puStack_c0 = (uint *)0x141737fb5;
              pdb_140c7a240(unaff_RBX + 0x2a);
            }
            goto code_r0x000141737fb6;
          }
          unaff_RBX[0x10] = (longlong)&UNK_14332bd74;
          unaff_RBX[0x11] = *(longlong *)(unaff_R12 + 0x48);
          unaff_RDI = *(uint **)(unaff_R12 + 0x50);
          if (unaff_RDI != (uint *)0x0) {
            unaff_R13 = (uint *)(unaff_RBX[0x11] + 0x48);
            do {
              if (*(ulonglong *)(unaff_R13 + -2) != 0) {
                puStack_c0 = (uint *)0x141737435;
                pub_1406abac0(*(byte **)unaff_R13,*(ulonglong *)(unaff_R13 + -2),1);
              }
              unaff_R13 = unaff_R13 + 0x18;
              unaff_RDI = (uint *)((longlong)unaff_RDI + -1);
              bVar59 = unaff_RDI == (uint *)0x0;
code_r0x000141737417:
              cVar23 = (char)unaff_R15;
            } while (!bVar59);
          }
          lVar44 = *(longlong *)(unaff_R12 + 0x40);
          if (lVar44 != 0) {
            puStack_c0 = (uint *)0x141737c5b;
            pub_1406abac0((byte *)unaff_RBX[0x11],lVar44 * 0x60,0x10);
          }
          *(longlong *)(unaff_R12 + 0x50) = unaff_RBX[0xcf];
          lVar44 = unaff_RBX[0xce];
          *(longlong *)(unaff_R12 + 0x40) = unaff_RBX[0xcd];
          *(longlong *)(unaff_R12 + 0x48) = lVar44;
          lVar44 = unaff_RBX[0xe];
          unaff_R13 = (uint *)unaff_RBX[0x10];
          puVar57 = _DAT_143ca8f38;
        }
        lVar31 = unaff_RBX[0x2b];
        *(longlong *)(lVar44 + 0x28) = unaff_RBX[0x2a];
        *(longlong *)(lVar44 + 0x30) = lVar31;
        *(undefined8 *)(lVar44 + 0x20) = 0;
      }
code_r0x000141737fb6:
      if ((cVar23 == '\0') && ((*puVar57 & 0x7fffffffffffffff) != 0)) {
        puStack_c0 = (uint *)0x141738960;
        cVar23 = pdb_142dc79e0();
        if (cVar23 == '\0') {
          *(undefined1 *)(unaff_R12 + 0x38) = 1;
        }
      }
      LOCK();
      iVar3 = *unaff_R14;
      *unaff_R14 = *unaff_R14 + -0x3fffffff;
      UNLOCK();
      unaff_R12 = (ulonglong)(iVar3 + 0xc0000001U);
      if (0x3fffffff < iVar3 + 0xc0000001U) {
        puStack_c0 = (uint *)0x1417387de;
        pdb_142dc6fa0(unaff_R14);
      }
      param_2 = (longlong *)unaff_RBX[0xe];
      if (param_2[4] != 0) {
        if ((int)param_2[4] != 1) {
          unaff_RBX[0x10] = (longlong)unaff_R13;
          plVar30 = (longlong *)param_2[7];
          LOCK();
          lVar44 = *plVar30;
          *plVar30 = *plVar30 + 1;
          UNLOCK();
          if (*plVar30 == 0 || SCARRY8(lVar44,1) != *plVar30 < 0) goto code_r0x00014173a218;
          param_2[0xb] = (longlong)plVar30;
          *(undefined1 *)(param_2 + 0xc) = 1;
          plVar42 = (longlong *)(param_2[8] + 0x10);
          puStack_c0 = (uint *)0x1417383e6;
          pdb_141805d60(unaff_RBX + 0x38,plVar42,*(undefined8 *)(param_2[7] + 0x20),
                        *(undefined8 *)(param_2[7] + 0x28));
          plVar30 = plRam0000000143cad898;
          if (SBORROW8(0,unaff_RBX[0x3a])) {
            lVar44 = unaff_RBX[0xe];
            unaff_R13 = (uint *)unaff_RBX[0x10];
            if (*_DAT_143ca4b08 < 3) {
              bVar22 = *(byte *)(plRam0000000143cad898 + 2);
              plVar42 = (longlong *)(ulonglong)bVar22;
              if (2 < bVar22) {
                puStack_c0 = (uint *)0x1417391e4;
                uVar25 = pdb_142db8070(plRam0000000143cad898);
                plVar42 = (longlong *)(ulonglong)uVar25;
                lVar44 = unaff_RBX[0xe];
                unaff_R13 = (uint *)unaff_RBX[0x10];
                if ((char)uVar25 != '\0') goto code_r0x000141738431;
                goto code_r0x0001417391fa;
              }
              if (bVar22 == 0) goto code_r0x0001417391fa;
code_r0x000141738431:
              puStack_c0 = (uint *)0x141738439;
              cVar23 = pdb_140dd7f60(*plVar30);
              lVar44 = unaff_RBX[0xe];
              unaff_R13 = (uint *)unaff_RBX[0x10];
              if (cVar23 == '\0') goto code_r0x0001417391fa;
              lVar31 = *plVar30;
              uVar26 = *(ulonglong *)(lVar31 + 0x38);
              if (uVar26 == 0) {
                puStack_c0 = (uint *)0x14173a073;
                pdb_142dc8110(&UNK_14332aff8,0x22,&UNK_14332b150);
                goto code_r0x00014173a218;
              }
              lVar29 = *(longlong *)(lVar31 + 0x30);
              lVar32 = *(longlong *)(lVar31 + 0x40);
              lVar5 = *(longlong *)(lVar31 + 0x48);
              unaff_RBX[0x18] = lVar29;
              unaff_RBX[0x19] = uVar26;
              unaff_RBX[0x1a] = lVar32;
              unaff_RBX[0x1b] = lVar5;
              unaff_RBX[0x1c] = 0;
              unaff_RBX[0x1e] = (longlong)&UNK_14332b168;
              unaff_RBX[0x1f] = 0x1d;
              if (uVar26 == 1) {
                puStack_c0 = (uint *)0x14173a0af;
                pdb_142dc8110(&UNK_14332aff8,0x22,&UNK_14332b150);
                goto code_r0x00014173a218;
              }
              unaff_RBX[0x13] = lVar29;
              unaff_RBX[0x14] = uVar26;
              unaff_RBX[0x15] = lVar32;
              unaff_RBX[0x16] = lVar5;
              unaff_RBX[0x17] = 1;
              unaff_RBX[0x21] = *(longlong *)(lVar44 + 0x38) + 0x20;
              if (uVar26 < 3) {
                puStack_c0 = (uint *)0x14173a0eb;
                pdb_142dc8110(&UNK_14332aff8,0x22,&UNK_14332b150);
                goto code_r0x00014173a218;
              }
              unaff_RBX[0x2a] = lVar29;
              unaff_RBX[0x2b] = uVar26;
              unaff_RBX[0x2c] = lVar32;
              unaff_RBX[0x2d] = lVar5;
              unaff_RBX[0x2e] = 2;
              unaff_RBX[0x50] = (longlong)(unaff_RBX + 0x18);
              unaff_RBX[0x51] = (longlong)(unaff_RBX + 0x1e);
              unaff_RBX[0x52] = (longlong)&UNK_14332b058;
              unaff_RBX[0x53] = (longlong)(unaff_RBX + 0x13);
              unaff_RBX[0x54] = (longlong)(unaff_RBX + 0x21);
              unaff_RBX[0x55] = (longlong)&UNK_14332b078;
              plVar33 = unaff_RBX + 0x2a;
              unaff_RBX[0x56] = (longlong)plVar33;
              unaff_RBX[0x57] = lVar44 + 0x10;
              unaff_RBX[0x58] = (longlong)&UNK_14332b098;
              unaff_RBX[0x38] = (longlong)(unaff_RBX + 0x50);
              unaff_RBX[0x39] = 3;
              unaff_RBX[0x3a] = lVar31 + 0x30;
              puStack_c0 = (uint *)0x1417385c5;
              pdb_14173b8e0(unaff_RBX + 0x38);
code_r0x00014173941e:
              lVar44 = unaff_RBX[0xe];
              unaff_R13 = (uint *)unaff_RBX[0x10];
              plVar30 = plVar33;
            }
            else {
code_r0x0001417391fa:
              plVar2 = plRam0000000143cad898;
              plVar30 = plVar42;
              if ((*_DAT_143ca4ab0 == '\0') && (2 < *_DAT_143ca8e90)) {
                lVar31 = *plRam0000000143cad898;
                lVar44 = *(longlong *)(lVar31 + 0x20);
                lVar29 = *(longlong *)(lVar31 + 0x28);
                unaff_RBX[0xc5] = 3;
                unaff_RBX[0xc6] = lVar44;
                unaff_RBX[199] = lVar29;
                puStack_c0 = (uint *)0x141739248;
                plVar33 = (longlong *)pdb_140f33290();
                plVar30 = unaff_RBX + 0xc5;
                puStack_c0 = (uint *)0x14173925e;
                cVar23 = (*(code *)plVar42[3])(plVar33);
                lVar44 = unaff_RBX[0xe];
                unaff_R13 = (uint *)unaff_RBX[0x10];
                if (cVar23 != '\0') {
                  lVar29 = *plVar2;
                  uVar26 = *(ulonglong *)(lVar29 + 0x38);
                  if (uVar26 == 0) {
                    puStack_c0 = (uint *)0x14173a18d;
                    pdb_142dc8110(&UNK_14332aff8,0x22,&UNK_14332b150);
                    goto code_r0x00014173a218;
                  }
                  lVar32 = *(longlong *)(lVar29 + 0x30);
                  lVar5 = *(longlong *)(lVar29 + 0x40);
                  lVar58 = *(longlong *)(lVar29 + 0x48);
                  unaff_RBX[0x18] = lVar32;
                  unaff_RBX[0x19] = uVar26;
                  unaff_RBX[0x1a] = lVar5;
                  unaff_RBX[0x1b] = lVar58;
                  unaff_RBX[0x1c] = 0;
                  unaff_RBX[0x21] = (longlong)&UNK_14332b168;
                  unaff_RBX[0x22] = 0x1d;
                  if (uVar26 == 1) {
                    puStack_c0 = (uint *)0x14173a1c6;
                    pdb_142dc8110(&UNK_14332aff8,0x22,&UNK_14332b150);
                    goto code_r0x00014173a218;
                  }
                  unaff_RBX[0x13] = lVar32;
                  unaff_RBX[0x14] = uVar26;
                  unaff_RBX[0x15] = lVar5;
                  unaff_RBX[0x16] = lVar58;
                  unaff_RBX[0x17] = 1;
                  unaff_RBX[0x24] = *(longlong *)(lVar44 + 0x38) + 0x20;
                  if (uVar26 < 3) {
                    puStack_c0 = (uint *)0x14173a1fc;
                    pdb_142dc8110(&UNK_14332aff8,0x22,&UNK_14332b150);
                    goto code_r0x00014173a218;
                  }
                  unaff_RBX[0x2a] = lVar32;
                  unaff_RBX[0x2b] = uVar26;
                  unaff_RBX[0x2c] = lVar5;
                  unaff_RBX[0x2d] = lVar58;
                  unaff_RBX[0x2e] = 2;
                  unaff_RBX[0x50] = (longlong)(unaff_RBX + 0x18);
                  unaff_RBX[0x51] = (longlong)(unaff_RBX + 0x21);
                  unaff_RBX[0x52] = (longlong)&UNK_14332b058;
                  unaff_RBX[0x53] = (longlong)(unaff_RBX + 0x13);
                  unaff_RBX[0x54] = (longlong)(unaff_RBX + 0x24);
                  unaff_RBX[0x55] = (longlong)&UNK_14332b078;
                  unaff_RBX[0x56] = (longlong)(unaff_RBX + 0x2a);
                  unaff_RBX[0x57] = lVar44 + 0x10;
                  unaff_RBX[0x58] = (longlong)&UNK_14332b098;
                  unaff_RBX[0x1e] = (longlong)(unaff_RBX + 0x50);
                  unaff_RBX[0x1f] = 3;
                  unaff_RBX[0x20] = lVar29 + 0x30;
                  unaff_RBX[0x3a] = unaff_RBX[199];
                  unaff_RBX[0x38] = unaff_RBX[0xc5];
                  unaff_RBX[0x39] = unaff_RBX[0xc6];
                  plStack_98 = unaff_RBX + 0x1e;
                  puStack_c0 = (uint *)0x14173941d;
                  pdb_140dd7f80(lVar31,plVar33,plVar42,unaff_RBX + 0x38);
                  goto code_r0x00014173941e;
                }
              }
            }
            puStack_c0 = (uint *)0x141739438;
            lVar44 = (**(code **)(*(longlong *)(*(longlong *)(lVar44 + 0x38) + 0x18) + 0x28))
                               (*(undefined8 *)(*(longlong *)(lVar44 + 0x38) + 0x10));
            unaff_RBX[0x29] = lVar44;
            unaff_RBX[0x28] = (longlong)plVar30;
            lVar44 = unaff_RBX[0xe];
            *(undefined1 *)(lVar44 + 0x49) = 1;
            plVar30 = *(longlong **)(lVar44 + 0x40);
            LOCK();
            lVar44 = *plVar30;
            *plVar30 = *plVar30 + 1;
            UNLOCK();
            if (*plVar30 == 0 || SCARRY8(lVar44,1) != *plVar30 < 0) goto code_r0x00014173a218;
            unaff_RBX[0x10] = (longlong)plVar30;
            unaff_RBX[0x13] = (longlong)plVar30;
            puStack_c0 = (uint *)0x141739477;
            pdb_1417473a0(unaff_RBX + 0x2a);
            unaff_RBX[0x50] = 1;
            unaff_RBX[0x51] = 1;
            unaff_RBX[0x52] = unaff_RBX[0x2a];
            unaff_RBX[0x53] = unaff_RBX[0x2b];
            *(int *)(unaff_RBX + 0x54) = (int)unaff_RBX[0x2c];
            *(undefined4 *)((longlong)unaff_RBX + 0x2a4) =
                 *(undefined4 *)((longlong)unaff_RBX + 0x164);
            *(int *)(unaff_RBX + 0x55) = (int)unaff_RBX[0x2d];
            *(undefined4 *)((longlong)unaff_RBX + 0x2ac) =
                 *(undefined4 *)((longlong)unaff_RBX + 0x16c);
            *(int *)(unaff_RBX + 0x56) = (int)unaff_RBX[0x2e];
            *(undefined4 *)((longlong)unaff_RBX + 0x2b4) =
                 *(undefined4 *)((longlong)unaff_RBX + 0x174);
            *(int *)(unaff_RBX + 0x57) = (int)unaff_RBX[0x2f];
            *(undefined4 *)((longlong)unaff_RBX + 700) =
                 *(undefined4 *)((longlong)unaff_RBX + 0x17c);
            *(int *)(unaff_RBX + 0x58) = (int)unaff_RBX[0x30];
            *(undefined4 *)((longlong)unaff_RBX + 0x2c4) =
                 *(undefined4 *)((longlong)unaff_RBX + 0x184);
            *(int *)(unaff_RBX + 0x59) = (int)unaff_RBX[0x31];
            *(undefined4 *)((longlong)unaff_RBX + 0x2cc) =
                 *(undefined4 *)((longlong)unaff_RBX + 0x18c);
            unaff_RBX[0x5a] = unaff_RBX[0x32];
            unaff_RBX[0x5b] = unaff_RBX[0x33];
            unaff_RBX[0x5c] = unaff_RBX[0x34];
            unaff_RBX[0x5d] = unaff_RBX[0x35];
            puStack_c0 = (uint *)0x1417394e9;
            pdb_14007ee60();
            uVar43 = 8;
            puStack_c0 = (uint *)0x1417394f8;
            pbVar35 = pub_1406abab0(0x70,8);
            if (pbVar35 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
              puStack_c0 = (uint *)0x141739612;
              pdb_142dc7e11(8,0x70);
            }
            lVar44 = unaff_RBX[0x5d];
            *(longlong *)(pbVar35 + 0x60) = unaff_RBX[0x5c];
            *(longlong *)(pbVar35 + 0x68) = lVar44;
            lVar44 = unaff_RBX[0x5b];
            *(longlong *)(pbVar35 + 0x50) = unaff_RBX[0x5a];
            *(longlong *)(pbVar35 + 0x58) = lVar44;
            lVar44 = unaff_RBX[0x59];
            *(longlong *)(pbVar35 + 0x40) = unaff_RBX[0x58];
            *(longlong *)(pbVar35 + 0x48) = lVar44;
            lVar44 = unaff_RBX[0x50];
            lVar31 = unaff_RBX[0x51];
            lVar29 = unaff_RBX[0x52];
            lVar32 = unaff_RBX[0x53];
            lVar5 = unaff_RBX[0x54];
            uVar64 = *(undefined4 *)((longlong)unaff_RBX + 0x2a4);
            lVar58 = unaff_RBX[0x55];
            uVar65 = *(undefined4 *)((longlong)unaff_RBX + 0x2ac);
            uVar66 = *(undefined4 *)((longlong)unaff_RBX + 0x2b4);
            lVar18 = unaff_RBX[0x57];
            uVar67 = *(undefined4 *)((longlong)unaff_RBX + 700);
            *(int *)(pbVar35 + 0x30) = (int)unaff_RBX[0x56];
            *(undefined4 *)(pbVar35 + 0x34) = uVar66;
            *(int *)(pbVar35 + 0x38) = (int)lVar18;
            *(undefined4 *)(pbVar35 + 0x3c) = uVar67;
            *(int *)(pbVar35 + 0x20) = (int)lVar5;
            *(undefined4 *)(pbVar35 + 0x24) = uVar64;
            *(int *)(pbVar35 + 0x28) = (int)lVar58;
            *(undefined4 *)(pbVar35 + 0x2c) = uVar65;
            *(longlong *)(pbVar35 + 0x10) = lVar29;
            *(longlong *)(pbVar35 + 0x18) = lVar32;
            *(longlong *)pbVar35 = lVar44;
            *(longlong *)(pbVar35 + 8) = lVar31;
            puVar7 = (undefined8 *)unaff_RBX[0xe];
            plVar30 = (longlong *)*puVar7;
            lVar44 = unaff_RBX[0x29];
            if (plVar30 != (longlong *)0x0) {
              uVar43 = puVar7[1];
              LOCK();
              lVar31 = *plVar30;
              *plVar30 = *plVar30 + 1;
              UNLOCK();
              if (*plVar30 == 0 || SCARRY8(lVar31,1) != *plVar30 < 0) goto code_r0x00014173a218;
            }
            *(undefined1 *)(puVar7 + 9) = 1;
            puVar7[0xf] = unaff_RBX[0x10];
            puVar7[0x10] = pbVar35;
            puVar7[0x11] = plVar30;
            puVar7[0x12] = uVar43;
            LOCK();
            lVar31 = *(longlong *)pbVar35;
            *(longlong *)pbVar35 = *(longlong *)pbVar35 + 1;
            UNLOCK();
            if (*(longlong *)pbVar35 == 0 || SCARRY8(lVar31,1) != *(longlong *)pbVar35 < 0)
            goto code_r0x00014173a218;
            puVar7[10] = pbVar35;
            *(undefined1 *)((longlong)puVar7 + 0x49) = 0;
            *(undefined1 *)(puVar7 + 9) = 0;
            lVar31 = puVar7[0xf];
            lVar29 = puVar7[0x10];
            uVar64 = *(undefined4 *)((longlong)puVar7 + 0x8c);
            uVar65 = *(undefined4 *)(puVar7 + 0x12);
            uVar66 = *(undefined4 *)((longlong)puVar7 + 0x94);
            *(undefined4 *)(unaff_RBX + 0x52) = *(undefined4 *)(puVar7 + 0x11);
            *(undefined4 *)((longlong)unaff_RBX + 0x294) = uVar64;
            *(undefined4 *)(unaff_RBX + 0x53) = uVar65;
            *(undefined4 *)((longlong)unaff_RBX + 0x29c) = uVar66;
            unaff_RBX[0x50] = lVar31;
            unaff_RBX[0x51] = lVar29;
            UNRECOVERED_JUMPTABLE = *(code **)(unaff_RBX[0x28] + 0x30);
            unaff_RBX[0x3e] = lVar44;
            unaff_RBX[0x3f] = unaff_RBX[0x28];
            plVar30 = unaff_RBX + 0x50;
            puStack_c0 = (uint *)0x1417395eb;
            lVar44 = (*UNRECOVERED_JUMPTABLE)();
            lVar31 = unaff_RBX[0xe];
            *(longlong *)(lVar31 + 0x68) = lVar44;
            *(longlong **)(lVar31 + 0x70) = plVar30;
            goto code_r0x00014173743f;
          }
          lVar29 = unaff_RBX[0x38];
          pbVar35 = (byte *)unaff_RBX[0x39];
          unaff_RBX[0xcb] = lVar29;
          unaff_RBX[0xcc] = (longlong)pbVar35;
          unaff_RBX[0x26] = unaff_RBX[0x3c];
          unaff_RBX[0x24] = unaff_RBX[0x3a];
          unaff_RBX[0x25] = unaff_RBX[0x3b];
          plVar30 = plRam0000000143cad8a8;
          if (*_DAT_143ca4b08 < 2) {
            bVar22 = *(byte *)(plRam0000000143cad8a8 + 2);
            plVar42 = (longlong *)(ulonglong)bVar22;
            if (2 < bVar22) {
              unaff_RBX[0x11] = lVar29;
              puStack_c0 = (uint *)0x14173962b;
              uVar25 = pdb_142db8070(plRam0000000143cad8a8);
              plVar42 = (longlong *)(ulonglong)uVar25;
              lVar29 = unaff_RBX[0x11];
              if ((char)uVar25 != '\0') goto code_r0x000141738635;
              goto code_r0x00014173963d;
            }
            if (bVar22 == 0) goto code_r0x00014173963d;
code_r0x000141738635:
            unaff_RBX[0x11] = lVar29;
            puStack_c0 = (uint *)0x141738644;
            cVar23 = pdb_140dd7f60(*plVar30);
            lVar29 = unaff_RBX[0x11];
            if (cVar23 == '\0') goto code_r0x00014173963d;
            lVar44 = *plVar30;
            uVar26 = *(ulonglong *)(lVar44 + 0x38);
            if (uVar26 == 0) {
              puStack_c0 = (uint *)0x14173a091;
              pdb_142dc8110(&UNK_14332aff8,0x22,&UNK_14332b118);
              goto code_r0x00014173a218;
            }
            lVar31 = *(longlong *)(lVar44 + 0x30);
            lVar29 = *(longlong *)(lVar44 + 0x40);
            lVar32 = *(longlong *)(lVar44 + 0x48);
            unaff_RBX[0x18] = lVar31;
            unaff_RBX[0x19] = uVar26;
            unaff_RBX[0x1a] = lVar29;
            unaff_RBX[0x1b] = lVar32;
            unaff_RBX[0x1c] = 0;
            unaff_RBX[0x21] = (longlong)&UNK_14332b130;
            unaff_RBX[0x22] = 0x39;
            if (uVar26 == 1) {
              puStack_c0 = (uint *)0x14173a0cd;
              pdb_142dc8110(&UNK_14332aff8,0x22,&UNK_14332b118);
              goto code_r0x00014173a218;
            }
            unaff_RBX[0x13] = lVar31;
            unaff_RBX[0x14] = uVar26;
            unaff_RBX[0x15] = lVar29;
            unaff_RBX[0x16] = lVar32;
            unaff_RBX[0x17] = 1;
            unaff_RBX[0x44] = *(longlong *)(unaff_RBX[0xe] + 0x38) + 0x20;
            if (uVar26 < 3) {
              puStack_c0 = (uint *)0x14173a109;
              pdb_142dc8110(&UNK_14332aff8,0x22,&UNK_14332b118);
              goto code_r0x00014173a218;
            }
            unaff_RBX[0x2a] = lVar31;
            unaff_RBX[0x2b] = uVar26;
            unaff_RBX[0x2c] = lVar29;
            unaff_RBX[0x2d] = lVar32;
            unaff_RBX[0x2e] = 2;
            unaff_RBX[0x50] = (longlong)(unaff_RBX + 0x18);
            unaff_RBX[0x51] = (longlong)(unaff_RBX + 0x21);
            unaff_RBX[0x52] = (longlong)&UNK_14332b058;
            unaff_RBX[0x53] = (longlong)(unaff_RBX + 0x13);
            unaff_RBX[0x54] = (longlong)(unaff_RBX + 0x44);
            unaff_RBX[0x55] = (longlong)&UNK_14332b078;
            unaff_RBX[0x56] = (longlong)(unaff_RBX + 0x2a);
            unaff_RBX[0x57] = unaff_RBX[0xe] + 0x10;
            unaff_RBX[0x58] = (longlong)&UNK_14332b098;
            unaff_RBX[0x1e] = (longlong)(unaff_RBX + 0x50);
            unaff_RBX[0x1f] = 3;
            unaff_RBX[0x20] = lVar44 + 0x30;
            puStack_c0 = (uint *)0x1417387d0;
            pdb_14173b830(unaff_RBX + 0x1e);
code_r0x000141739867:
            lVar29 = unaff_RBX[0x11];
          }
          else {
code_r0x00014173963d:
            if ((*_DAT_143ca4ab0 == '\0') && (3 < *_DAT_143ca8e90)) {
              unaff_RBX[0x11] = lVar29;
              plVar30 = plRam0000000143cad8a8;
              arg0 = (uint *)*plRam0000000143cad8a8;
              lVar44 = *(longlong *)(arg0 + 8);
              lVar31 = *(longlong *)(arg0 + 10);
              unaff_RBX[0xc2] = 4;
              unaff_RBX[0xc3] = lVar44;
              unaff_RBX[0xc4] = lVar31;
              puStack_c0 = (uint *)0x141739691;
              uVar43 = pdb_140f33290();
              puStack_c0 = (uint *)0x1417396a7;
              cVar23 = (*(code *)plVar42[3])(uVar43,unaff_RBX + 0xc2);
              lVar29 = unaff_RBX[0x11];
              if (cVar23 != '\0') {
                lVar44 = *plVar30;
                uVar26 = *(ulonglong *)(lVar44 + 0x38);
                if (uVar26 == 0) {
                  puStack_c0 = (uint *)0x14173a1ab;
                  pdb_142dc8110(&UNK_14332aff8,0x22,&UNK_14332b118);
                  goto code_r0x00014173a218;
                }
                lVar31 = *(longlong *)(lVar44 + 0x30);
                lVar29 = *(longlong *)(lVar44 + 0x40);
                lVar32 = *(longlong *)(lVar44 + 0x48);
                unaff_RBX[0x18] = lVar31;
                unaff_RBX[0x19] = uVar26;
                unaff_RBX[0x1a] = lVar29;
                unaff_RBX[0x1b] = lVar32;
                unaff_RBX[0x1c] = 0;
                unaff_RBX[0x44] = (longlong)&UNK_14332b130;
                unaff_RBX[0x45] = 0x39;
                if (uVar26 == 1) {
                  puStack_c0 = (uint *)0x14173a1e1;
                  pdb_142dc8110(&UNK_14332aff8,0x22,&UNK_14332b118);
                  goto code_r0x00014173a218;
                }
                unaff_RBX[0x13] = lVar31;
                unaff_RBX[0x14] = uVar26;
                unaff_RBX[0x15] = lVar29;
                unaff_RBX[0x16] = lVar32;
                unaff_RBX[0x17] = 1;
                unaff_RBX[0xbb] = *(longlong *)(unaff_RBX[0xe] + 0x38) + 0x20;
                if (uVar26 < 3) {
                  puStack_c0 = (uint *)0x14173a217;
                  pdb_142dc8110(&UNK_14332aff8,0x22,&UNK_14332b118);
                  goto code_r0x00014173a218;
                }
                unaff_RBX[0x2a] = lVar31;
                unaff_RBX[0x2b] = uVar26;
                unaff_RBX[0x2c] = lVar29;
                unaff_RBX[0x2d] = lVar32;
                unaff_RBX[0x2e] = 2;
                unaff_RBX[0x50] = (longlong)(unaff_RBX + 0x18);
                unaff_RBX[0x51] = (longlong)(unaff_RBX + 0x44);
                unaff_RBX[0x52] = (longlong)&UNK_14332b058;
                unaff_RBX[0x53] = (longlong)(unaff_RBX + 0x13);
                unaff_RBX[0x54] = (longlong)(unaff_RBX + 0xbb);
                unaff_RBX[0x55] = (longlong)&UNK_14332b078;
                unaff_RBX[0x56] = (longlong)(unaff_RBX + 0x2a);
                unaff_RBX[0x57] = unaff_RBX[0xe] + 0x10;
                unaff_RBX[0x58] = (longlong)&UNK_14332b098;
                unaff_RBX[0x21] = (longlong)(unaff_RBX + 0x50);
                unaff_RBX[0x22] = 3;
                unaff_RBX[0x23] = lVar44 + 0x30;
                unaff_RBX[0x20] = unaff_RBX[0xc4];
                unaff_RBX[0x1e] = unaff_RBX[0xc2];
                unaff_RBX[0x1f] = unaff_RBX[0xc3];
                plStack_98 = unaff_RBX + 0x21;
                puStack_c0 = (uint *)0x141739866;
                pdb_140dd7f80(arg0,uVar43,plVar42,unaff_RBX + 0x1e);
                goto code_r0x000141739867;
              }
            }
          }
          unaff_RBX[0x48] = unaff_RBX[0x26];
          unaff_RBX[0x46] = unaff_RBX[0x24];
          unaff_RBX[0x47] = unaff_RBX[0x25];
          lVar31 = 0;
          lVar44 = unaff_RBX[0xe];
          goto code_r0x000141739892;
        }
        param_2[10] = param_2[5];
        param_2[0xb] = param_2[6];
        plVar30 = plRam0000000143cad8a0;
        unaff_RDI = arg0;
        if (*_DAT_143ca4b08 < 2) {
          bVar22 = *(byte *)(plRam0000000143cad8a0 + 2);
          unaff_R12 = (ulonglong)bVar22;
          if (2 < bVar22) {
            puStack_c0 = (uint *)0x141738a23;
            uVar25 = pdb_142db8070(plRam0000000143cad8a0);
            unaff_R12 = (ulonglong)uVar25;
            param_2 = (longlong *)unaff_RBX[0xe];
            if ((char)uVar25 != '\0') goto code_r0x00014173803c;
            goto code_r0x000141738a32;
          }
          if (bVar22 == 0) goto code_r0x000141738a32;
code_r0x00014173803c:
          puStack_c0 = (uint *)0x141738044;
          cVar23 = pdb_140dd7f60(*plVar30);
          param_2 = (longlong *)unaff_RBX[0xe];
          if (cVar23 == '\0') goto code_r0x000141738a32;
          lVar44 = *plVar30;
          uVar26 = *(ulonglong *)(lVar44 + 0x38);
          if (uVar26 == 0) {
            puStack_c0 = (uint *)0x141739e8d;
            pdb_142dc8110(&UNK_14332aff8,0x22,&UNK_14332b0d8);
            goto code_r0x00014173a218;
          }
          lVar31 = *(longlong *)(lVar44 + 0x30);
          lVar29 = *(longlong *)(lVar44 + 0x40);
          lVar32 = *(longlong *)(lVar44 + 0x48);
          unaff_RBX[0x18] = lVar31;
          unaff_RBX[0x19] = uVar26;
          unaff_RBX[0x1a] = lVar29;
          unaff_RBX[0x1b] = lVar32;
          unaff_RBX[0x1c] = 0;
          unaff_RBX[0x1e] = (longlong)&UNK_14332b0f0;
          unaff_RBX[0x1f] = 0x47;
          if (uVar26 == 1) {
            puStack_c0 = (uint *)0x141739ecd;
            pdb_142dc8110(&UNK_14332aff8,0x22,&UNK_14332b0d8);
            goto code_r0x00014173a218;
          }
          unaff_RBX[0x13] = lVar31;
          unaff_RBX[0x14] = uVar26;
          unaff_RBX[0x15] = lVar29;
          unaff_RBX[0x16] = lVar32;
          unaff_RBX[0x17] = 1;
          unaff_RBX[0x21] = param_2[7] + 0x20;
          if (uVar26 < 3) {
            puStack_c0 = (uint *)0x141739f0d;
            pdb_142dc8110(&UNK_14332aff8,0x22,&UNK_14332b0d8);
            goto code_r0x00014173a218;
          }
          unaff_RBX[0x2a] = lVar31;
          unaff_RBX[0x2b] = uVar26;
          unaff_RBX[0x2c] = lVar29;
          unaff_RBX[0x2d] = lVar32;
          unaff_RBX[0x2e] = 2;
          unaff_RBX[0x50] = (longlong)(unaff_RBX + 0x18);
          unaff_RBX[0x51] = (longlong)(unaff_RBX + 0x1e);
          unaff_RBX[0x52] = (longlong)&UNK_14332b058;
          unaff_RBX[0x53] = (longlong)(unaff_RBX + 0x13);
          unaff_RBX[0x54] = (longlong)(unaff_RBX + 0x21);
          unaff_RBX[0x55] = (longlong)&UNK_14332b078;
          unaff_RBX[0x56] = (longlong)(unaff_RBX + 0x2a);
          unaff_RBX[0x57] = (longlong)(param_2 + 2);
          unaff_RBX[0x58] = (longlong)&UNK_14332b098;
          unaff_RBX[0x38] = (longlong)(unaff_RBX + 0x50);
          unaff_RBX[0x39] = 3;
          unaff_RBX[0x3a] = lVar44 + 0x30;
          puStack_c0 = (uint *)0x1417381c9;
          pdb_14173b6d0(unaff_RBX + 0x38);
          goto code_r0x000141738c4f;
        }
code_r0x000141738a32:
        plVar30 = plRam0000000143cad8a0;
        if ((*_DAT_143ca4ab0 == '\0') && (3 < *_DAT_143ca8e90)) {
          puVar37 = (uint *)*plRam0000000143cad8a0;
          lVar44 = *(longlong *)(puVar37 + 8);
          lVar31 = *(longlong *)(puVar37 + 10);
          unaff_RBX[0xbf] = 4;
          unaff_RBX[0xc0] = lVar44;
          unaff_RBX[0xc1] = lVar31;
          puStack_c0 = (uint *)0x141738a80;
          unaff_R15 = (byte *)pdb_140f33290();
          puStack_c0 = (uint *)0x141738a96;
          cVar23 = (**(code **)(unaff_R12 + 0x18))(unaff_R15,unaff_RBX + 0xbf);
          param_2 = (longlong *)unaff_RBX[0xe];
          if (cVar23 != '\0') {
            lVar44 = *plVar30;
            uVar26 = *(ulonglong *)(lVar44 + 0x38);
            if (uVar26 == 0) {
              puStack_c0 = (uint *)0x141739fb3;
              pdb_142dc8110(&UNK_14332aff8,0x22,&UNK_14332b0d8);
              goto code_r0x00014173a218;
            }
            lVar31 = *(longlong *)(lVar44 + 0x30);
            lVar29 = *(longlong *)(lVar44 + 0x40);
            lVar32 = *(longlong *)(lVar44 + 0x48);
            unaff_RBX[0x18] = lVar31;
            unaff_RBX[0x19] = uVar26;
            unaff_RBX[0x1a] = lVar29;
            unaff_RBX[0x1b] = lVar32;
            unaff_RBX[0x1c] = 0;
            unaff_RBX[0x21] = (longlong)&UNK_14332b0f0;
            unaff_RBX[0x22] = 0x47;
            if (uVar26 == 1) {
              puStack_c0 = (uint *)0x141739ff3;
              pdb_142dc8110(&UNK_14332aff8,0x22,&UNK_14332b0d8);
              goto code_r0x00014173a218;
            }
            unaff_RBX[0x13] = lVar31;
            unaff_RBX[0x14] = uVar26;
            unaff_RBX[0x15] = lVar29;
            unaff_RBX[0x16] = lVar32;
            unaff_RBX[0x17] = 1;
            unaff_RBX[0x24] = param_2[7] + 0x20;
            if (uVar26 < 3) {
              puStack_c0 = (uint *)0x14173a033;
              pdb_142dc8110(&UNK_14332aff8,0x22,&UNK_14332b0d8);
              goto code_r0x00014173a218;
            }
            unaff_RBX[0x2a] = lVar31;
            unaff_RBX[0x2b] = uVar26;
            unaff_RBX[0x2c] = lVar29;
            unaff_RBX[0x2d] = lVar32;
            unaff_RBX[0x2e] = 2;
            unaff_RBX[0x50] = (longlong)(unaff_RBX + 0x18);
            unaff_RBX[0x51] = (longlong)(unaff_RBX + 0x21);
            unaff_RBX[0x52] = (longlong)&UNK_14332b058;
            unaff_RBX[0x53] = (longlong)(unaff_RBX + 0x13);
            unaff_RBX[0x54] = (longlong)(unaff_RBX + 0x24);
            unaff_RBX[0x55] = (longlong)&UNK_14332b078;
            unaff_RBX[0x56] = (longlong)(unaff_RBX + 0x2a);
            unaff_RBX[0x57] = (longlong)(param_2 + 2);
            unaff_RBX[0x58] = (longlong)&UNK_14332b098;
            unaff_RBX[0x1e] = (longlong)(unaff_RBX + 0x50);
            unaff_RBX[0x1f] = 3;
            unaff_RBX[0x20] = lVar44 + 0x30;
            unaff_RBX[0x3a] = unaff_RBX[0xc1];
            unaff_RBX[0x38] = unaff_RBX[0xbf];
            unaff_RBX[0x39] = unaff_RBX[0xc0];
            plStack_98 = unaff_RBX + 0x1e;
            param_3 = (uint *)(unaff_RBX + 0x38);
            goto code_r0x000141738c43;
          }
        }
        goto code_r0x000141738c53;
      }
      lVar44 = param_2[6];
      unaff_RBX[0x24] = param_2[5];
      unaff_RBX[0x25] = lVar44;
      plVar30 = plRam0000000143cad8b0;
      if (*_DAT_143ca4b08 < 2) {
        bVar22 = *(byte *)(plRam0000000143cad8b0 + 2);
        unaff_R12 = (ulonglong)bVar22;
        if (2 < bVar22) {
          *(undefined1 *)((longlong)unaff_RBX + 0x6b) = 1;
          puStack_c0 = (uint *)0x141738e3f;
          uVar25 = pdb_142db8070(plRam0000000143cad8b0);
          unaff_R12 = (ulonglong)uVar25;
          param_2 = (longlong *)unaff_RBX[0xe];
          if ((char)uVar25 != '\0') goto code_r0x00014173820d;
          goto code_r0x000141738e4e;
        }
        if (bVar22 == 0) goto code_r0x000141738e4e;
code_r0x00014173820d:
        lVar44 = *plVar30;
        *(undefined1 *)((longlong)unaff_RBX + 0x6b) = 1;
        puStack_c0 = (uint *)0x141738219;
        cVar23 = pdb_140dd7f60(lVar44);
        param_2 = (longlong *)unaff_RBX[0xe];
        if (cVar23 == '\0') goto code_r0x000141738e4e;
        lVar44 = *plVar30;
        uVar26 = *(ulonglong *)(lVar44 + 0x38);
        if (uVar26 == 0) {
          *(undefined1 *)((longlong)unaff_RBX + 0x6b) = 1;
          puStack_c0 = (uint *)0x141739eaf;
          pdb_142dc8110(&UNK_14332aff8,0x22,&UNK_14332b020);
          goto code_r0x00014173a218;
        }
        lVar31 = *(longlong *)(lVar44 + 0x30);
        lVar29 = *(longlong *)(lVar44 + 0x40);
        lVar32 = *(longlong *)(lVar44 + 0x48);
        unaff_RBX[0x18] = lVar31;
        unaff_RBX[0x19] = uVar26;
        unaff_RBX[0x1a] = lVar29;
        unaff_RBX[0x1b] = lVar32;
        unaff_RBX[0x1c] = 0;
        unaff_RBX[0x1e] = (longlong)&UNK_14332b038;
        unaff_RBX[0x1f] = 0x33;
        if (uVar26 == 1) {
          *(undefined1 *)((longlong)unaff_RBX + 0x6b) = 1;
          puStack_c0 = (uint *)0x141739eef;
          pdb_142dc8110(&UNK_14332aff8,0x22,&UNK_14332b020);
          goto code_r0x00014173a218;
        }
        unaff_RBX[0x13] = lVar31;
        unaff_RBX[0x14] = uVar26;
        unaff_RBX[0x15] = lVar29;
        unaff_RBX[0x16] = lVar32;
        unaff_RBX[0x17] = 1;
        unaff_RBX[0x21] = param_2[7] + 0x20;
        if (uVar26 < 3) {
          *(undefined1 *)((longlong)unaff_RBX + 0x6b) = 1;
          puStack_c0 = (uint *)0x141739f2f;
          pdb_142dc8110(&UNK_14332aff8,0x22,&UNK_14332b020);
          goto code_r0x00014173a218;
        }
        unaff_RBX[0x2a] = lVar31;
        unaff_RBX[0x2b] = uVar26;
        unaff_RBX[0x2c] = lVar29;
        unaff_RBX[0x2d] = lVar32;
        unaff_RBX[0x2e] = 2;
        unaff_RBX[0x50] = (longlong)(unaff_RBX + 0x18);
        unaff_RBX[0x51] = (longlong)(unaff_RBX + 0x1e);
        unaff_RBX[0x52] = (longlong)&UNK_14332b058;
        unaff_RBX[0x53] = (longlong)(unaff_RBX + 0x13);
        unaff_RBX[0x54] = (longlong)(unaff_RBX + 0x21);
        unaff_RBX[0x55] = (longlong)&UNK_14332b078;
        unaff_RBX[0x56] = (longlong)(unaff_RBX + 0x2a);
        unaff_RBX[0x57] = (longlong)(param_2 + 2);
        unaff_RBX[0x58] = (longlong)&UNK_14332b098;
        unaff_RBX[0x38] = (longlong)(unaff_RBX + 0x50);
        unaff_RBX[0x39] = 3;
        unaff_RBX[0x3a] = lVar44 + 0x30;
        *(undefined1 *)((longlong)unaff_RBX + 0x6b) = 1;
        puStack_c0 = (uint *)0x1417383a2;
        pdb_14173b620(unaff_RBX + 0x38);
code_r0x000141739077:
        param_2 = (longlong *)unaff_RBX[0xe];
      }
      else {
code_r0x000141738e4e:
        plVar30 = plRam0000000143cad8b0;
        if ((*_DAT_143ca4ab0 == '\0') && (3 < *_DAT_143ca8e90)) {
          lVar44 = *plRam0000000143cad8b0;
          lVar31 = *(longlong *)(lVar44 + 0x20);
          lVar29 = *(longlong *)(lVar44 + 0x28);
          unaff_RBX[0xbc] = 4;
          unaff_RBX[0xbd] = lVar31;
          unaff_RBX[0xbe] = lVar29;
          *(undefined1 *)((longlong)unaff_RBX + 0x6b) = 1;
          puStack_c0 = (uint *)0x141738e9f;
          uVar43 = pdb_140f33290();
          UNRECOVERED_JUMPTABLE = *(code **)(unaff_R12 + 0x18);
          *(undefined1 *)((longlong)unaff_RBX + 0x6b) = 1;
          puStack_c0 = (uint *)0x141738eba;
          cVar23 = (*UNRECOVERED_JUMPTABLE)(uVar43,unaff_RBX + 0xbc);
          param_2 = (longlong *)unaff_RBX[0xe];
          if (cVar23 != '\0') {
            lVar31 = *plVar30;
            uVar26 = *(ulonglong *)(lVar31 + 0x38);
            if (uVar26 == 0) {
              *(undefined1 *)((longlong)unaff_RBX + 0x6b) = 1;
              puStack_c0 = (uint *)0x141739fd5;
              pdb_142dc8110(&UNK_14332aff8,0x22,&UNK_14332b020);
code_r0x00014173a218:
                    /* WARNING: Does not return */
              UNRECOVERED_JUMPTABLE = (code *)invalidInstructionException();
              (*UNRECOVERED_JUMPTABLE)();
            }
            lVar29 = *(longlong *)(lVar31 + 0x30);
            lVar32 = *(longlong *)(lVar31 + 0x40);
            lVar5 = *(longlong *)(lVar31 + 0x48);
            unaff_RBX[0x18] = lVar29;
            unaff_RBX[0x19] = uVar26;
            unaff_RBX[0x1a] = lVar32;
            unaff_RBX[0x1b] = lVar5;
            unaff_RBX[0x1c] = 0;
            unaff_RBX[0x21] = (longlong)&UNK_14332b038;
            unaff_RBX[0x22] = 0x33;
            if (uVar26 == 1) {
              *(undefined1 *)((longlong)unaff_RBX + 0x6b) = 1;
              puStack_c0 = (uint *)0x14173a015;
              pdb_142dc8110(&UNK_14332aff8,0x22,&UNK_14332b020);
              goto code_r0x00014173a218;
            }
            unaff_RBX[0x13] = lVar29;
            unaff_RBX[0x14] = uVar26;
            unaff_RBX[0x15] = lVar32;
            unaff_RBX[0x16] = lVar5;
            unaff_RBX[0x17] = 1;
            unaff_RBX[0x46] = param_2[7] + 0x20;
            if (uVar26 < 3) {
              *(undefined1 *)((longlong)unaff_RBX + 0x6b) = 1;
              puStack_c0 = (uint *)0x14173a055;
              pdb_142dc8110(&UNK_14332aff8,0x22,&UNK_14332b020);
              goto code_r0x00014173a218;
            }
            unaff_RBX[0x2a] = lVar29;
            unaff_RBX[0x2b] = uVar26;
            unaff_RBX[0x2c] = lVar32;
            unaff_RBX[0x2d] = lVar5;
            unaff_RBX[0x2e] = 2;
            unaff_RBX[0x50] = (longlong)(unaff_RBX + 0x18);
            unaff_RBX[0x51] = (longlong)(unaff_RBX + 0x21);
            unaff_RBX[0x52] = (longlong)&UNK_14332b058;
            unaff_RBX[0x53] = (longlong)(unaff_RBX + 0x13);
            unaff_RBX[0x54] = (longlong)(unaff_RBX + 0x46);
            unaff_RBX[0x55] = (longlong)&UNK_14332b078;
            unaff_RBX[0x56] = (longlong)(unaff_RBX + 0x2a);
            unaff_RBX[0x57] = (longlong)(param_2 + 2);
            unaff_RBX[0x58] = (longlong)&UNK_14332b098;
            unaff_RBX[0x1e] = (longlong)(unaff_RBX + 0x50);
            unaff_RBX[0x1f] = 3;
            unaff_RBX[0x20] = lVar31 + 0x30;
            unaff_RBX[0x3a] = unaff_RBX[0xbe];
            unaff_RBX[0x38] = unaff_RBX[0xbc];
            unaff_RBX[0x39] = unaff_RBX[0xbd];
            *(undefined1 *)((longlong)unaff_RBX + 0x6b) = 1;
            plStack_98 = unaff_RBX + 0x1e;
            puStack_c0 = (uint *)0x141739076;
            pdb_140dd7f80(lVar44,uVar43,unaff_R12,unaff_RBX + 0x38);
            goto code_r0x000141739077;
          }
        }
      }
      lVar31 = _UNK_14332b500;
      lVar44 = param_2[8];
      unaff_RBX[0x50] = _DAT_14332b4f8;
      unaff_RBX[0x51] = lVar31;
      uVar43 = *(undefined8 *)(param_2[7] + 0x20);
      uVar6 = *(undefined8 *)(param_2[7] + 0x28);
      *(undefined1 *)((longlong)unaff_RBX + 0x6b) = 1;
      plStack_98 = unaff_RBX + 0x24;
      puStack_c0 = (uint *)0x1417390bb;
      pdb_141c2b710(lVar44 + 0x10,unaff_RBX + 0x50,uVar43,uVar6);
      lVar44 = unaff_RBX[0x24];
      lVar31 = unaff_RBX[0x25];
      unaff_RBX[0x2a] = lVar44;
      unaff_RBX[0x2b] = lVar31;
      lVar29 = *(longlong *)(lVar31 + 0x10);
      unaff_RBX[0x10] = lVar44;
      puStack_c0 = (uint *)0x1417390fc;
      (**(code **)(lVar31 + 0x18))
                (unaff_RBX + 0x50,lVar44 + (lVar29 - 1U & 0xfffffffffffffff0) + 0x10);
      auVar61[0] = -((char)unaff_RBX[0x50] == DAT_14332a670);
      auVar61[1] = -(*(char *)((longlong)unaff_RBX + 0x281) == UNK_14332a671);
      auVar61[2] = -(*(char *)((longlong)unaff_RBX + 0x282) == UNK_14332a672);
      auVar61[3] = -(*(char *)((longlong)unaff_RBX + 0x283) == UNK_14332a673);
      auVar61[4] = -(*(char *)((longlong)unaff_RBX + 0x284) == UNK_14332a674);
      auVar61[5] = -(*(char *)((longlong)unaff_RBX + 0x285) == UNK_14332a675);
      auVar61[6] = -(*(char *)((longlong)unaff_RBX + 0x286) == UNK_14332a676);
      auVar61[7] = -(*(char *)((longlong)unaff_RBX + 0x287) == UNK_14332a677);
      auVar61[8] = -((char)unaff_RBX[0x51] == UNK_14332a678);
      auVar61[9] = -(*(char *)((longlong)unaff_RBX + 0x289) == UNK_14332a679);
      auVar61[10] = -(*(char *)((longlong)unaff_RBX + 0x28a) == UNK_14332a67a);
      auVar61[0xb] = -(*(char *)((longlong)unaff_RBX + 0x28b) == UNK_14332a67b);
      auVar61[0xc] = -(*(char *)((longlong)unaff_RBX + 0x28c) == UNK_14332a67c);
      auVar61[0xd] = -(*(char *)((longlong)unaff_RBX + 0x28d) == UNK_14332a67d);
      auVar61[0xe] = -(*(char *)((longlong)unaff_RBX + 0x28e) == UNK_14332a67e);
      auVar61[0xf] = -(*(char *)((longlong)unaff_RBX + 0x28f) == UNK_14332a67f);
      if ((ushort)((ushort)(SUB161(auVar61 >> 7,0) & 1) |
                   (ushort)(SUB161(auVar61 >> 0xf,0) & 1) << 1 |
                   (ushort)(SUB161(auVar61 >> 0x17,0) & 1) << 2 |
                   (ushort)(SUB161(auVar61 >> 0x1f,0) & 1) << 3 |
                   (ushort)(SUB161(auVar61 >> 0x27,0) & 1) << 4 |
                   (ushort)(SUB161(auVar61 >> 0x2f,0) & 1) << 5 |
                   (ushort)(SUB161(auVar61 >> 0x37,0) & 1) << 6 |
                   (ushort)(SUB161(auVar61 >> 0x3f,0) & 1) << 7 |
                   (ushort)(SUB161(auVar61 >> 0x47,0) & 1) << 8 |
                   (ushort)(SUB161(auVar61 >> 0x4f,0) & 1) << 9 |
                   (ushort)(SUB161(auVar61 >> 0x57,0) & 1) << 10 |
                   (ushort)(SUB161(auVar61 >> 0x5f,0) & 1) << 0xb |
                   (ushort)(SUB161(auVar61 >> 0x67,0) & 1) << 0xc |
                   (ushort)(SUB161(auVar61 >> 0x6f,0) & 1) << 0xd |
                   (ushort)(SUB161(auVar61 >> 0x77,0) & 1) << 0xe |
                  (ushort)(auVar61[0xf] >> 7) << 0xf) != 0xffff) {
        unaff_RBX[0x50] = unaff_RBX[0x10];
        unaff_RBX[0x51] = lVar31;
        plStack_98 = (longlong *)&UNK_14332b0c0;
                    /* WARNING: Subroutine does not return */
        puStack_c0 = (uint *)0x1417391d2;
        pdb_142dc8170(&UNK_14332b0b8,8,unaff_RBX + 0x50,&UNK_14332b870);
      }
      unaff_RBX[0x4d] = unaff_RBX[0x10];
      unaff_RBX[0x4c] = 0;
      plVar30 = *(longlong **)(unaff_RBX[0xe] + 0x38);
      LOCK();
      *plVar30 = *plVar30 + -1;
      lVar44 = *plVar30;
      UNLOCK();
      goto joined_r0x000141738e0f;
    case 1:
                    /* WARNING: Subroutine does not return */
      puStack_c0 = (uint *)0x141739e68;
      pdb_142dc8570(&UNK_14332b178);
    case 2:
                    /* WARNING: Subroutine does not return */
      puStack_c0 = (uint *)0x141739e74;
      pdb_142dc8590(&UNK_14332b178);
    case 3:
      goto code_r0x000141738c63;
    case 4:
      lVar44 = param_2[0xd];
      plVar30 = (longlong *)param_2[0xe];
code_r0x00014173743f:
      puStack_c0 = (uint *)0x14173744d;
      (*(code *)plVar30[3])(unaff_RBX + 0x50,lVar44,arg0);
      lVar44 = unaff_RBX[0x50];
      if (lVar44 == 2) {
        unaff_R13[0] = 1;
        unaff_R13[1] = 0;
        uVar21 = 4;
        puVar27 = unaff_R13;
        goto code_r0x000141739e30;
      }
      lVar31 = unaff_RBX[0x51];
      pauVar41 = (undefined1 (*) [16])unaff_RBX[0x52];
      unaff_RBX[0x10] = *(longlong *)(unaff_RBX[0xe] + 0x68);
      puVar7 = *(undefined8 **)(unaff_RBX[0xe] + 0x70);
      unaff_RBX[0x11] = (longlong)puVar7;
      UNRECOVERED_JUMPTABLE = (code *)*puVar7;
      if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
        puStack_c0 = (uint *)0x1417374a3;
        (*UNRECOVERED_JUMPTABLE)(unaff_RBX[0x10]);
      }
      arg1 = *(undefined1 (**) [16])(unaff_RBX[0x11] + 8);
      if (arg1 != (undefined1 (*) [16])0x0) {
        puStack_c0 = (uint *)0x1417374c4;
        pub_1406abac0((byte *)unaff_RBX[0x10],(ulonglong)arg1,*(ulonglong *)(unaff_RBX[0x11] + 0x10)
                     );
      }
      lVar29 = unaff_RBX[0xe];
      if ((int)lVar44 == 1) {
        lVar44 = *(longlong *)(lVar29 + 0x10);
        lVar32 = *(longlong *)(lVar29 + 0x18);
        unaff_RBX[0x3e] = unaff_RBX[0x29];
        unaff_RBX[0x3f] = unaff_RBX[0x28];
        puStack_c0 = (uint *)0x1417374fd;
        pauVar28 = (undefined1 (*) [16])pdb_140c799b0(lVar31);
        unaff_RBX[0x16] = (longlong)pauVar41;
        lVar29 = unaff_RBX[0xe];
        arg1 = pauVar41;
        pauVar41 = pauVar28;
        lVar31 = lVar32;
      }
      else {
        lVar44 = 0;
      }
      unaff_RBX[0x13] = lVar44;
      unaff_RBX[0x14] = lVar31;
      unaff_RBX[0x15] = (longlong)pauVar41;
      lVar44 = *(longlong *)(lVar29 + 0x50);
      pcVar1 = (char *)(lVar44 + 0x10);
      LOCK();
      bVar59 = *(char *)(lVar44 + 0x10) == '\0';
      if (bVar59) {
        *(char *)(lVar44 + 0x10) = '\x01';
      }
      UNLOCK();
      if (!bVar59) {
        *(undefined1 *)((longlong)unaff_RBX + 0x7d) = 1;
        puStack_c0 = (uint *)0x14173885c;
        pdb_142dc6be0(pcVar1);
      }
      puVar57 = _DAT_143ca8f38;
      if ((*_DAT_143ca8f38 & 0x7fffffffffffffff) == 0) {
        bVar22 = 0;
        cVar23 = *(char *)(lVar44 + 0x11);
      }
      else {
        *(undefined1 *)((longlong)unaff_RBX + 0x7d) = 1;
        puStack_c0 = (uint *)0x14173886b;
        bVar22 = pdb_142dc79e0();
        bVar22 = bVar22 ^ 1;
        cVar23 = *(char *)(lVar44 + 0x11);
      }
      if (cVar23 != '\0') {
        unaff_RBX[0x50] = (longlong)pcVar1;
        *(byte *)(unaff_RBX + 0x51) = bVar22;
        plStack_98 = (longlong *)&UNK_14332b190;
                    /* WARNING: Subroutine does not return */
        puStack_c0 = (uint *)0x1417388b2;
        pdb_142dc8170(&UNK_14332b8d0,0x2b,unaff_RBX + 0x50,&UNK_14332b920);
      }
      lVar31 = *(longlong *)(lVar44 + 0x18);
      lVar29 = *(longlong *)(lVar44 + 0x20);
      uVar64 = *(undefined4 *)(lVar44 + 0x2c);
      uVar65 = *(undefined4 *)(lVar44 + 0x30);
      uVar66 = *(undefined4 *)(lVar44 + 0x34);
      *(undefined4 *)(unaff_RBX + 0x2c) = *(undefined4 *)(lVar44 + 0x28);
      *(undefined4 *)((longlong)unaff_RBX + 0x164) = uVar64;
      *(undefined4 *)(unaff_RBX + 0x2d) = uVar65;
      *(undefined4 *)((longlong)unaff_RBX + 0x16c) = uVar66;
      unaff_RBX[0x2a] = lVar31;
      unaff_RBX[0x2b] = lVar29;
      uVar6 = _UNK_14332bb38;
      uVar43 = _UNK_14332bb30;
      *(undefined8 *)(lVar44 + 0x18) = _UNK_14332bb30;
      *(undefined8 *)(lVar44 + 0x20) = uVar6;
      uVar20 = _UNK_14332bb48;
      uVar19 = _UNK_14332bb40;
      *(undefined8 *)(lVar44 + 0x28) = _UNK_14332bb40;
      *(undefined8 *)(lVar44 + 0x30) = uVar20;
      if ((bVar22 == 0) && ((*puVar57 & 0x7fffffffffffffff) != 0)) {
        *(undefined1 *)((longlong)unaff_RBX + 0x7b) = 1;
        puStack_c0 = (uint *)0x141738992;
        cVar23 = pdb_142dc79e0();
        if (cVar23 == '\0') {
          *(undefined1 *)(lVar44 + 0x11) = 1;
        }
      }
      LOCK();
      cVar23 = *pcVar1;
      *pcVar1 = '\0';
      UNLOCK();
      if (cVar23 == '\x02') {
        *(undefined1 *)((longlong)unaff_RBX + 0x7b) = 1;
        puStack_c0 = (uint *)0x1417388c4;
        pdb_142dc6ca0(pcVar1);
      }
      lVar31 = unaff_RBX[0xe];
      lVar29 = *(longlong *)(lVar31 + 0x50);
      lVar44 = lVar29 + 0x38;
      LOCK();
      bVar59 = *(char *)(lVar29 + 0x38) == '\0';
      if (bVar59) {
        *(char *)(lVar29 + 0x38) = '\x01';
      }
      UNLOCK();
      if (!bVar59) {
        *(undefined1 *)((longlong)unaff_RBX + 0x7b) = 1;
        puStack_c0 = (uint *)0x1417388d6;
        pdb_142dc6be0(lVar44);
      }
      if ((*puVar57 & 0x7fffffffffffffff) == 0) {
        uVar25 = 0;
        cVar23 = *(char *)(lVar29 + 0x39);
      }
      else {
        *(undefined1 *)((longlong)unaff_RBX + 0x7b) = 1;
        puStack_c0 = (uint *)0x1417388e5;
        uVar25 = pdb_142dc79e0();
        uVar25 = uVar25 ^ 1;
        cVar23 = *(char *)(lVar29 + 0x39);
      }
      if (cVar23 != '\0') {
        unaff_RBX[0x50] = lVar44;
        *(char *)(unaff_RBX + 0x51) = (char)uVar25;
        plStack_98 = (longlong *)&UNK_14332b1a8;
                    /* WARNING: Subroutine does not return */
        puStack_c0 = (uint *)0x14173892c;
        pdb_142dc8170(&UNK_14332b8d0,0x2b,unaff_RBX + 0x50,&UNK_14332b940);
      }
      *(uint *)(unaff_RBX + 0x11) = uVar25;
      unaff_RBX[0x10] = lVar44;
      puStack_c0 = (uint *)0x141737633;
      plVar30 = (longlong *)pdb_140f3bda0();
      if ((char)plVar30[2] == '\x01') {
        lVar44 = *plVar30;
        arg1 = (undefined1 (*) [16])plVar30[1];
      }
      else {
        puStack_c0 = (uint *)0x141738937;
        lVar44 = pdb_140f4fd10();
        *plVar30 = lVar44;
        plVar30[1] = (longlong)arg1;
        *(undefined1 *)(plVar30 + 2) = 1;
      }
      *plVar30 = lVar44 + 1;
      pauVar41 = *(undefined1 (**) [16])(lVar29 + 0x40);
      lVar32 = *(longlong *)(lVar29 + 0x48);
      lVar5 = *(longlong *)(lVar29 + 0x58);
      *(undefined8 *)(lVar29 + 0x50) = uVar19;
      *(undefined8 *)(lVar29 + 0x58) = uVar20;
      *(undefined8 *)(lVar29 + 0x40) = uVar43;
      *(undefined8 *)(lVar29 + 0x48) = uVar6;
      *(longlong *)(lVar29 + 0x60) = lVar44;
      *(undefined1 (**) [16])(lVar29 + 0x68) = arg1;
      auVar62 = *pauVar41;
      if (lVar32 == 0) {
        lVar58 = 0;
      }
      else {
        lVar44 = lVar32 * 0x61 + 0x71;
        arg1 = pauVar41 + lVar32 * -6 + -6;
        lVar58 = 0x10;
      }
      unaff_RBX[0x50] = lVar58;
      unaff_RBX[0x51] = lVar44;
      unaff_RBX[0x52] = (longlong)arg1;
      unaff_RBX[0x53] = (longlong)pauVar41;
      unaff_RBX[0x54] = (longlong)(pauVar41 + 1);
      unaff_RBX[0x55] = (longlong)(*pauVar41 + lVar32 + 1);
      *(ushort *)(unaff_RBX + 0x56) =
           ~((ushort)(SUB161(auVar62 >> 7,0) & 1) | (ushort)(SUB161(auVar62 >> 0xf,0) & 1) << 1 |
             (ushort)(SUB161(auVar62 >> 0x17,0) & 1) << 2 |
             (ushort)(SUB161(auVar62 >> 0x1f,0) & 1) << 3 |
             (ushort)(SUB161(auVar62 >> 0x27,0) & 1) << 4 |
             (ushort)(SUB161(auVar62 >> 0x2f,0) & 1) << 5 |
             (ushort)(SUB161(auVar62 >> 0x37,0) & 1) << 6 |
             (ushort)(SUB161(auVar62 >> 0x3f,0) & 1) << 7 |
             (ushort)(SUB161(auVar62 >> 0x47,0) & 1) << 8 |
             (ushort)(SUB161(auVar62 >> 0x4f,0) & 1) << 9 |
             (ushort)(SUB161(auVar62 >> 0x57,0) & 1) << 10 |
             (ushort)(SUB161(auVar62 >> 0x5f,0) & 1) << 0xb |
             (ushort)(SUB161(auVar62 >> 0x67,0) & 1) << 0xc |
             (ushort)(SUB161(auVar62 >> 0x6f,0) & 1) << 0xd |
             (ushort)(SUB161(auVar62 >> 0x77,0) & 1) << 0xe |
            (ushort)(byte)(auVar62[0xf] >> 7) << 0xf);
      unaff_RBX[0x57] = lVar5;
      puStack_c0 = (uint *)0x1417376f8;
      pdb_1415ed630(unaff_RBX + 0x24,unaff_RBX + 0x50);
      if (((char)unaff_RBX[0x11] == '\0') && ((*puVar57 & 0x7fffffffffffffff) != 0)) {
        *(undefined1 *)((longlong)unaff_RBX + 0x7e) = 1;
        *(undefined1 *)((longlong)unaff_RBX + 0x7f) = 1;
        puStack_c0 = (uint *)0x1417389b1;
        cVar23 = pdb_142dc79e0();
        if (cVar23 == '\0') {
          *(undefined1 *)(lVar29 + 0x39) = 1;
        }
      }
      LOCK();
      cVar23 = *(char *)unaff_RBX[0x10];
      *(char *)unaff_RBX[0x10] = '\0';
      UNLOCK();
      if (cVar23 == '\x02') {
        *(undefined1 *)((longlong)unaff_RBX + 0x7e) = 1;
        *(undefined1 *)((longlong)unaff_RBX + 0x7f) = 1;
        puStack_c0 = (uint *)0x141738955;
        pdb_142dc6ca0();
      }
      pauVar41 = (undefined1 (*) [16])unaff_RBX[0x2a];
      auVar62 = *pauVar41;
      unaff_RBX[0x50] = (longlong)pauVar41;
      unaff_RBX[0x51] = (longlong)(pauVar41 + 1);
      unaff_RBX[0x52] = (longlong)(*pauVar41 + unaff_RBX[0x2b] + 1);
      *(ushort *)(unaff_RBX + 0x53) =
           ~((ushort)(SUB161(auVar62 >> 7,0) & 1) | (ushort)(SUB161(auVar62 >> 0xf,0) & 1) << 1 |
             (ushort)(SUB161(auVar62 >> 0x17,0) & 1) << 2 |
             (ushort)(SUB161(auVar62 >> 0x1f,0) & 1) << 3 |
             (ushort)(SUB161(auVar62 >> 0x27,0) & 1) << 4 |
             (ushort)(SUB161(auVar62 >> 0x2f,0) & 1) << 5 |
             (ushort)(SUB161(auVar62 >> 0x37,0) & 1) << 6 |
             (ushort)(SUB161(auVar62 >> 0x3f,0) & 1) << 7 |
             (ushort)(SUB161(auVar62 >> 0x47,0) & 1) << 8 |
             (ushort)(SUB161(auVar62 >> 0x4f,0) & 1) << 9 |
             (ushort)(SUB161(auVar62 >> 0x57,0) & 1) << 10 |
             (ushort)(SUB161(auVar62 >> 0x5f,0) & 1) << 0xb |
             (ushort)(SUB161(auVar62 >> 0x67,0) & 1) << 0xc |
             (ushort)(SUB161(auVar62 >> 0x6f,0) & 1) << 0xd |
             (ushort)(SUB161(auVar62 >> 0x77,0) & 1) << 0xe |
            (ushort)(byte)(auVar62[0xf] >> 7) << 0xf);
      unaff_RBX[0x54] = unaff_RBX[0x2d];
      unaff_RBX[0x55] = unaff_RBX[0xe] + 0x40;
      *(undefined1 *)((longlong)unaff_RBX + 0x7e) = 1;
      *(undefined1 *)((longlong)unaff_RBX + 0x7f) = 1;
      plVar30 = unaff_RBX + 0x50;
      puStack_c0 = (uint *)0x14173779a;
      pdb_1415ea2a0(unaff_RBX + 0x21);
      unaff_RBX[0x11] = lVar31 + 0x50;
      unaff_RBX[0x10] = (longlong)unaff_R13;
      if (unaff_RBX[0x13] == 0) {
        UNRECOVERED_JUMPTABLE = *(code **)(unaff_RBX[0x15] + 0x18);
        lVar44 = unaff_RBX[0x14] + (*(longlong *)(unaff_RBX[0x15] + 0x10) - 1U & 0xfffffffffffffff0)
                 + 0x10;
        *(undefined1 *)((longlong)unaff_RBX + 0x6d) = 1;
        *(undefined1 *)((longlong)unaff_RBX + 0x6e) = 1;
        *(undefined1 *)((longlong)unaff_RBX + 0x6f) = 1;
        puStack_c0 = (uint *)0x141737946;
        (*UNRECOVERED_JUMPTABLE)(unaff_RBX + 0x50,lVar44);
        auVar60[0] = -((char)unaff_RBX[0x50] == DAT_14332a670);
        auVar60[1] = -(*(char *)((longlong)unaff_RBX + 0x281) == UNK_14332a671);
        auVar60[2] = -(*(char *)((longlong)unaff_RBX + 0x282) == UNK_14332a672);
        auVar60[3] = -(*(char *)((longlong)unaff_RBX + 0x283) == UNK_14332a673);
        auVar60[4] = -(*(char *)((longlong)unaff_RBX + 0x284) == UNK_14332a674);
        auVar60[5] = -(*(char *)((longlong)unaff_RBX + 0x285) == UNK_14332a675);
        auVar60[6] = -(*(char *)((longlong)unaff_RBX + 0x286) == UNK_14332a676);
        auVar60[7] = -(*(char *)((longlong)unaff_RBX + 0x287) == UNK_14332a677);
        auVar60[8] = -((char)unaff_RBX[0x51] == UNK_14332a678);
        auVar60[9] = -(*(char *)((longlong)unaff_RBX + 0x289) == UNK_14332a679);
        auVar60[10] = -(*(char *)((longlong)unaff_RBX + 0x28a) == UNK_14332a67a);
        auVar60[0xb] = -(*(char *)((longlong)unaff_RBX + 0x28b) == UNK_14332a67b);
        auVar60[0xc] = -(*(char *)((longlong)unaff_RBX + 0x28c) == UNK_14332a67c);
        auVar60[0xd] = -(*(char *)((longlong)unaff_RBX + 0x28d) == UNK_14332a67d);
        auVar60[0xe] = -(*(char *)((longlong)unaff_RBX + 0x28e) == UNK_14332a67e);
        auVar60[0xf] = -(*(char *)((longlong)unaff_RBX + 0x28f) == UNK_14332a67f);
        if ((ushort)((ushort)(SUB161(auVar60 >> 7,0) & 1) |
                     (ushort)(SUB161(auVar60 >> 0xf,0) & 1) << 1 |
                     (ushort)(SUB161(auVar60 >> 0x17,0) & 1) << 2 |
                     (ushort)(SUB161(auVar60 >> 0x1f,0) & 1) << 3 |
                     (ushort)(SUB161(auVar60 >> 0x27,0) & 1) << 4 |
                     (ushort)(SUB161(auVar60 >> 0x2f,0) & 1) << 5 |
                     (ushort)(SUB161(auVar60 >> 0x37,0) & 1) << 6 |
                     (ushort)(SUB161(auVar60 >> 0x3f,0) & 1) << 7 |
                     (ushort)(SUB161(auVar60 >> 0x47,0) & 1) << 8 |
                     (ushort)(SUB161(auVar60 >> 0x4f,0) & 1) << 9 |
                     (ushort)(SUB161(auVar60 >> 0x57,0) & 1) << 10 |
                     (ushort)(SUB161(auVar60 >> 0x5f,0) & 1) << 0xb |
                     (ushort)(SUB161(auVar60 >> 0x67,0) & 1) << 0xc |
                     (ushort)(SUB161(auVar60 >> 0x6f,0) & 1) << 0xd |
                     (ushort)(SUB161(auVar60 >> 0x77,0) & 1) << 0xe |
                    (ushort)(auVar60[0xf] >> 7) << 0xf) != 0xffff) {
          *(undefined1 *)((longlong)unaff_RBX + 0x6d) = 1;
          *(undefined1 *)((longlong)unaff_RBX + 0x6e) = 1;
          *(undefined1 *)((longlong)unaff_RBX + 0x6f) = 1;
          puStack_c0 = (uint *)0x1417389fc;
          pdb_142dc8110(&UNK_14332b0b8,8,&UNK_14332b1c0);
          goto code_r0x00014173a218;
        }
        unaff_RBX[0x1e] = 0;
        unaff_RBX[0x1f] = 0x10;
        unaff_RBX[0x20] = 0;
        unaff_RBX[0x50] = (longlong)(unaff_RBX + 0x1e);
        *(undefined1 *)((longlong)unaff_RBX + 0x7c) = 1;
        plVar30 = unaff_RBX + 0x50;
        puStack_c0 = (uint *)0x1417379af;
        pdb_140d9d5e0(lVar44,plVar30,&UNK_14332b448);
        lVar31 = *(longlong *)(unaff_RBX[0xe] + 0x38);
        lVar29 = *(longlong *)(unaff_RBX[0xe] + 0x40);
        unaff_RBX[0x41] = *(longlong *)(lVar31 + 0x28);
        unaff_RBX[0x40] = *(longlong *)(lVar31 + 0x20);
        uVar43 = *(undefined8 *)(lVar31 + 0x10);
        UNRECOVERED_JUMPTABLE = *(code **)(*(longlong *)(lVar31 + 0x18) + 0x38);
        *(undefined1 *)((longlong)unaff_RBX + 0x7c) = 1;
        puStack_c0 = (uint *)0x1417379e4;
        lVar31 = (*UNRECOVERED_JUMPTABLE)(uVar43);
        unaff_RBX[0xba] = lVar31;
        uVar43 = *(undefined8 *)(*(longlong *)(unaff_RBX[0xe] + 0x38) + 0x10);
        UNRECOVERED_JUMPTABLE =
             *(code **)(*(longlong *)(*(longlong *)(unaff_RBX[0xe] + 0x38) + 0x18) + 0x18);
        *(undefined1 *)((longlong)unaff_RBX + 0x7c) = 1;
        puStack_c0 = (uint *)0x141737a08;
        lVar31 = (*UNRECOVERED_JUMPTABLE)(uVar43);
        uVar43 = *(undefined8 *)(*(longlong *)(unaff_RBX[0xe] + 0x38) + 0x10);
        UNRECOVERED_JUMPTABLE =
             *(code **)(*(longlong *)(*(longlong *)(unaff_RBX[0xe] + 0x38) + 0x18) + 0x20);
        *(undefined1 *)((longlong)unaff_RBX + 0x7c) = 1;
        puStack_c0 = (uint *)0x141737a26;
        uVar21 = (*UNRECOVERED_JUMPTABLE)(uVar43);
        *(undefined1 *)((longlong)unaff_RBX + 0x7c) = 1;
        puStack_c0 = (uint *)0x141737a44;
        pdb_1415e6d20(unaff_RBX + 0x38,unaff_RBX + 0x24);
        unaff_RBX[0x1a] = unaff_RBX[0x23];
        unaff_RBX[0x18] = unaff_RBX[0x21];
        unaff_RBX[0x19] = unaff_RBX[0x22];
        unaff_RBX[0x52] = unaff_RBX[0x20];
        unaff_RBX[0x50] = unaff_RBX[0x1e];
        unaff_RBX[0x51] = unaff_RBX[0x1f];
        *(undefined1 *)((longlong)unaff_RBX + 0x7c) = 0;
        uStack_68 = (byte *)(unaff_RBX + 0x50);
        plStack_70 = unaff_RBX + 0x18;
        lStack_80 = CONCAT71(lStack_80._1_7_,uVar21);
        plStack_98 = (longlong *)unaff_RBX[0xba];
        puStack_c0 = (uint *)0x141737ad8;
        plStack_90 = plVar30;
        lStack_88 = lVar31;
        pbStack_78 = (byte *)(unaff_RBX + 0x38);
        lVar44 = pdb_1417ffee0(lVar29 + 0x10,unaff_RBX[0x40],unaff_RBX[0x41],lVar44);
      }
      else {
        lVar44 = *(longlong *)(unaff_RBX[0xe] + 0x38);
        lVar31 = *(longlong *)(unaff_RBX[0xe] + 0x40);
        unaff_RBX[0x41] = *(longlong *)(lVar44 + 0x28);
        unaff_RBX[0x40] = *(longlong *)(lVar44 + 0x20);
        uVar43 = *(undefined8 *)(lVar44 + 0x10);
        UNRECOVERED_JUMPTABLE = *(code **)(*(longlong *)(lVar44 + 0x18) + 0x38);
        *(undefined1 *)((longlong)unaff_RBX + 0x6d) = 1;
        *(undefined1 *)((longlong)unaff_RBX + 0x6e) = 1;
        *(undefined1 *)((longlong)unaff_RBX + 0x6f) = 1;
        puStack_c0 = (uint *)0x1417377f3;
        plVar42 = (longlong *)(*UNRECOVERED_JUMPTABLE)(uVar43);
        uVar43 = *(undefined8 *)(*(longlong *)(unaff_RBX[0xe] + 0x38) + 0x10);
        UNRECOVERED_JUMPTABLE =
             *(code **)(*(longlong *)(*(longlong *)(unaff_RBX[0xe] + 0x38) + 0x18) + 0x18);
        *(undefined1 *)((longlong)unaff_RBX + 0x6d) = 1;
        *(undefined1 *)((longlong)unaff_RBX + 0x6e) = 1;
        *(undefined1 *)((longlong)unaff_RBX + 0x6f) = 1;
        puStack_c0 = (uint *)0x14173781c;
        lVar44 = (*UNRECOVERED_JUMPTABLE)(uVar43);
        uVar43 = *(undefined8 *)(*(longlong *)(unaff_RBX[0xe] + 0x38) + 0x10);
        UNRECOVERED_JUMPTABLE =
             *(code **)(*(longlong *)(*(longlong *)(unaff_RBX[0xe] + 0x38) + 0x18) + 0x20);
        *(undefined1 *)((longlong)unaff_RBX + 0x6d) = 1;
        *(undefined1 *)((longlong)unaff_RBX + 0x6e) = 1;
        *(undefined1 *)((longlong)unaff_RBX + 0x6f) = 1;
        puStack_c0 = (uint *)0x141737842;
        uVar21 = (*UNRECOVERED_JUMPTABLE)(uVar43);
        *(undefined1 *)((longlong)unaff_RBX + 0x6d) = 1;
        *(undefined1 *)((longlong)unaff_RBX + 0x6e) = 1;
        *(undefined1 *)((longlong)unaff_RBX + 0x6f) = 1;
        puStack_c0 = (uint *)0x141737868;
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
        uStack_68 = (byte *)(unaff_RBX + 0x50);
        plStack_70 = unaff_RBX + 0x18;
        lStack_80 = CONCAT71(lStack_80._1_7_,uVar21);
        puStack_c0 = (uint *)0x141737902;
        plStack_98 = plVar42;
        plStack_90 = plVar30;
        lStack_88 = lVar44;
        pbStack_78 = (byte *)(unaff_RBX + 0x38);
        lVar44 = pdb_1417ffee0(lVar31 + 0x10,unaff_RBX[0x40],unaff_RBX[0x41],0);
      }
      unaff_RBX[0x50] = unaff_RBX[0x13];
      unaff_RBX[0x51] = unaff_RBX[0x14];
      *(int *)(unaff_RBX + 0x52) = (int)unaff_RBX[0x15];
      *(undefined4 *)((longlong)unaff_RBX + 0x294) = *(undefined4 *)((longlong)unaff_RBX + 0xac);
      *(int *)(unaff_RBX + 0x53) = (int)unaff_RBX[0x16];
      *(undefined4 *)((longlong)unaff_RBX + 0x29c) = *(undefined4 *)((longlong)unaff_RBX + 0xb4);
      unaff_RBX[0x54] = lVar44;
      lVar31 = unaff_RBX[0x50];
      if (lVar44 == 0 || lVar31 != 0) {
        lVar29 = unaff_RBX[0x51];
        pbVar35 = (byte *)unaff_RBX[0x52];
        unaff_RBX[0x48] = unaff_RBX[0x26];
        arg0 = (uint *)unaff_RBX[0x53];
        unaff_RBX[0x46] = unaff_RBX[0x24];
        unaff_RBX[0x47] = unaff_RBX[0x25];
        if (lVar44 != 0) {
          *(undefined1 *)((longlong)unaff_RBX + 0x6d) = 0;
          *(undefined1 *)((longlong)unaff_RBX + 0x6e) = 0;
          *(undefined1 *)((longlong)unaff_RBX + 0x6f) = 0;
          puStack_c0 = (uint *)0x141737b6d;
          pdb_1404b38e0(unaff_RBX + 0x54);
        }
      }
      else {
        lVar31 = *(longlong *)(unaff_RBX[0xe] + 0x10);
        lVar29 = *(longlong *)(unaff_RBX[0xe] + 0x18);
        unaff_RBX[0x18] = 1;
        unaff_RBX[0x19] = 1;
        unaff_RBX[0x1a] = lVar44;
        puStack_c0 = (uint *)0x141737b9d;
        pdb_14007ee60();
        puStack_c0 = (uint *)0x141737bac;
        pbVar35 = pub_1406abab0(0x18,8);
        if (pbVar35 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
          puStack_c0 = (uint *)0x1417389d2;
          pdb_142dc7e11(8,0x18);
        }
        *(longlong *)(pbVar35 + 0x10) = unaff_RBX[0x1a];
        lVar44 = unaff_RBX[0x19];
        *(longlong *)pbVar35 = unaff_RBX[0x18];
        *(longlong *)(pbVar35 + 8) = lVar44;
        unaff_RBX[0x46] = unaff_RBX[0x24];
        unaff_RBX[0x47] = unaff_RBX[0x25];
        unaff_RBX[0x48] = unaff_RBX[0x26];
        if (unaff_RBX[0x50] == 0) {
          plVar30 = (longlong *)unaff_RBX[0x51];
          LOCK();
          *plVar30 = *plVar30 + -1;
          UNLOCK();
          arg0 = (uint *)&UNK_14332b220;
          if (*plVar30 == 0) {
            *(undefined1 *)((longlong)unaff_RBX + 0x6d) = 0;
            *(undefined1 *)((longlong)unaff_RBX + 0x6e) = 0;
            *(undefined1 *)((longlong)unaff_RBX + 0x6f) = 0;
            puStack_c0 = (uint *)0x141737e1b;
            pdb_140c7a240(unaff_RBX + 0x51);
          }
        }
        else {
          plVar30 = (longlong *)unaff_RBX[0x52];
          LOCK();
          *plVar30 = *plVar30 + -1;
          UNLOCK();
          arg0 = (uint *)&UNK_14332b220;
          if (*plVar30 == 0) {
            *(undefined1 *)((longlong)unaff_RBX + 0x6d) = 0;
            *(undefined1 *)((longlong)unaff_RBX + 0x6e) = 0;
            *(undefined1 *)((longlong)unaff_RBX + 0x6f) = 0;
            puStack_c0 = (uint *)0x141737c2a;
            pdb_140c7a240(unaff_RBX + 0x52);
          }
        }
      }
      lVar44 = unaff_RBX[0x2b];
      if (lVar44 != 0) {
        lVar32 = lVar44 * 0x10 + 0x10;
        uVar26 = lVar44 + lVar32 + 0x11;
        if (uVar26 != 0) {
          puStack_c0 = (uint *)0x141737e55;
          pub_1406abac0((byte *)(unaff_RBX[0x2a] - lVar32),uVar26,0x10);
        }
      }
      plVar30 = *(longlong **)unaff_RBX[0x11];
      LOCK();
      *plVar30 = *plVar30 + -1;
      UNLOCK();
      if (*plVar30 == 0) {
        unaff_RBX[0x4a] = unaff_RBX[0x29];
        unaff_RBX[0x4b] = unaff_RBX[0x28];
        puStack_c0 = (uint *)0x141737e86;
        pdb_140dd7630();
      }
      lVar44 = unaff_RBX[0xe];
      *(undefined2 *)(lVar44 + 0x48) = 0;
code_r0x000141739892:
      uVar26 = *(longlong *)(lVar44 + 0x38) + 0x10;
      unaff_RBX[0x50] = lVar31;
      unaff_RBX[0x51] = lVar29;
      unaff_RBX[0x52] = (longlong)pbVar35;
      unaff_RBX[0x53] = (longlong)arg0;
      unaff_RBX[0x2c] = unaff_RBX[0x48];
      unaff_RBX[0x2a] = unaff_RBX[0x46];
      unaff_RBX[0x2b] = unaff_RBX[0x47];
      plVar42 = unaff_RBX + 0x50;
      plVar2 = unaff_RBX + 0x2a;
      puStack_c0 = (uint *)0x1417398f4;
      pdb_141746c10(unaff_RBX + 0x38,uVar26,plVar42,plVar2);
      plVar30 = (longlong *)(unaff_RBX[0xe] + 0x38);
      *(undefined1 *)(unaff_RBX[0xe] + 0x60) = 0;
      plVar33 = plRam0000000143cad8b8;
      if (unaff_RBX[0x38] == 0) {
        if (*_DAT_143ca4b08 < 2) {
          bVar22 = *(byte *)(plRam0000000143cad8b8 + 2);
          uVar26 = (ulonglong)bVar22;
          if (2 < bVar22) {
            *(undefined1 *)((longlong)unaff_RBX + 0x6c) = 1;
            puStack_c0 = (uint *)0x141739adb;
            uVar25 = pdb_142db8070(plRam0000000143cad8b8);
            uVar26 = (ulonglong)uVar25;
            if ((char)uVar25 != '\0') goto code_r0x00014173993f;
            goto code_r0x000141739ae6;
          }
          if (bVar22 == 0) goto code_r0x000141739ae6;
code_r0x00014173993f:
          lVar44 = *plVar33;
          *(undefined1 *)((longlong)unaff_RBX + 0x6c) = 1;
          puStack_c0 = (uint *)0x14173994b;
          cVar23 = pdb_140dd7f60(lVar44);
          if (cVar23 == '\0') goto code_r0x000141739ae6;
          lVar44 = *plVar33;
          uVar26 = *(ulonglong *)(lVar44 + 0x38);
          if (uVar26 == 0) {
            *(undefined1 *)((longlong)unaff_RBX + 0x6c) = 1;
            puStack_c0 = (uint *)0x141739f51;
            pdb_142dc8110(&UNK_14332aff8,0x22,&UNK_14332b278);
            goto code_r0x00014173a218;
          }
          lVar31 = *(longlong *)(lVar44 + 0x30);
          lVar29 = *(longlong *)(lVar44 + 0x40);
          lVar32 = *(longlong *)(lVar44 + 0x48);
          unaff_RBX[0x18] = lVar31;
          unaff_RBX[0x19] = uVar26;
          unaff_RBX[0x1a] = lVar29;
          unaff_RBX[0x1b] = lVar32;
          unaff_RBX[0x1c] = 0;
          unaff_RBX[0x21] = (longlong)&UNK_14332b290;
          unaff_RBX[0x22] = 0x33;
          if (uVar26 == 1) {
            *(undefined1 *)((longlong)unaff_RBX + 0x6c) = 1;
            puStack_c0 = (uint *)0x141739f73;
            pdb_142dc8110(&UNK_14332aff8,0x22,&UNK_14332b278);
            goto code_r0x00014173a218;
          }
          unaff_RBX[0x13] = lVar31;
          unaff_RBX[0x14] = uVar26;
          unaff_RBX[0x15] = lVar29;
          unaff_RBX[0x16] = lVar32;
          unaff_RBX[0x17] = 1;
          unaff_RBX[0x24] = *plVar30 + 0x20;
          if (uVar26 < 3) {
            *(undefined1 *)((longlong)unaff_RBX + 0x6c) = 1;
            puStack_c0 = (uint *)0x141739f95;
            pdb_142dc8110(&UNK_14332aff8,0x22,&UNK_14332b278);
            goto code_r0x00014173a218;
          }
          unaff_RBX[0x2a] = lVar31;
          unaff_RBX[0x2b] = uVar26;
          unaff_RBX[0x2c] = lVar29;
          unaff_RBX[0x2d] = lVar32;
          unaff_RBX[0x2e] = 2;
          unaff_RBX[0x50] = (longlong)(unaff_RBX + 0x18);
          unaff_RBX[0x51] = (longlong)(unaff_RBX + 0x21);
          unaff_RBX[0x52] = (longlong)&UNK_14332b058;
          unaff_RBX[0x53] = (longlong)(unaff_RBX + 0x13);
          unaff_RBX[0x54] = (longlong)(unaff_RBX + 0x24);
          unaff_RBX[0x55] = (longlong)&UNK_14332b078;
          unaff_RBX[0x56] = (longlong)plVar2;
          unaff_RBX[0x57] = unaff_RBX[0xe] + 0x10;
          unaff_RBX[0x58] = (longlong)&UNK_14332b098;
          unaff_RBX[0x1e] = (longlong)plVar42;
          unaff_RBX[0x1f] = 3;
          unaff_RBX[0x20] = lVar44 + 0x30;
          *(undefined1 *)((longlong)unaff_RBX + 0x6c) = 1;
          puStack_c0 = (uint *)0x141739ac5;
          pdb_14173b780(unaff_RBX + 0x1e);
        }
        else {
code_r0x000141739ae6:
          plVar33 = plRam0000000143cad8b8;
          if ((*_DAT_143ca4ab0 == '\0') && (3 < *_DAT_143ca8e90)) {
            lVar44 = *plRam0000000143cad8b8;
            unaff_RBX[0x11] = lVar44;
            lVar31 = *(longlong *)(lVar44 + 0x20);
            lVar44 = *(longlong *)(lVar44 + 0x28);
            unaff_RBX[200] = 4;
            unaff_RBX[0xc9] = lVar31;
            unaff_RBX[0xca] = lVar44;
            *(undefined1 *)((longlong)unaff_RBX + 0x6c) = 1;
            puStack_c0 = (uint *)0x141739b3e;
            uVar43 = pdb_140f33290();
            UNRECOVERED_JUMPTABLE = *(code **)(uVar26 + 0x18);
            *(undefined1 *)((longlong)unaff_RBX + 0x6c) = 1;
            puStack_c0 = (uint *)0x141739b59;
            cVar23 = (*UNRECOVERED_JUMPTABLE)(uVar43,unaff_RBX + 200);
            if (cVar23 != '\0') {
              lVar44 = *plVar33;
              uVar8 = *(ulonglong *)(lVar44 + 0x38);
              if (uVar8 == 0) {
                *(undefined1 *)((longlong)unaff_RBX + 0x6c) = 1;
                puStack_c0 = (uint *)0x14173a12b;
                pdb_142dc8110(&UNK_14332aff8,0x22,&UNK_14332b278);
                goto code_r0x00014173a218;
              }
              lVar31 = *(longlong *)(lVar44 + 0x30);
              lVar29 = *(longlong *)(lVar44 + 0x40);
              lVar32 = *(longlong *)(lVar44 + 0x48);
              unaff_RBX[0x18] = lVar31;
              unaff_RBX[0x19] = uVar8;
              unaff_RBX[0x1a] = lVar29;
              unaff_RBX[0x1b] = lVar32;
              unaff_RBX[0x1c] = 0;
              unaff_RBX[0x24] = (longlong)&UNK_14332b290;
              unaff_RBX[0x25] = 0x33;
              if (uVar8 == 1) {
                *(undefined1 *)((longlong)unaff_RBX + 0x6c) = 1;
                puStack_c0 = (uint *)0x14173a14d;
                pdb_142dc8110(&UNK_14332aff8,0x22,&UNK_14332b278);
                goto code_r0x00014173a218;
              }
              unaff_RBX[0x13] = lVar31;
              unaff_RBX[0x14] = uVar8;
              unaff_RBX[0x15] = lVar29;
              unaff_RBX[0x16] = lVar32;
              unaff_RBX[0x17] = 1;
              unaff_RBX[0x44] = *plVar30 + 0x20;
              if (uVar8 < 3) {
                *(undefined1 *)((longlong)unaff_RBX + 0x6c) = 1;
                puStack_c0 = (uint *)0x14173a16f;
                pdb_142dc8110(&UNK_14332aff8,0x22,&UNK_14332b278);
                goto code_r0x00014173a218;
              }
              unaff_RBX[0x2a] = lVar31;
              unaff_RBX[0x2b] = uVar8;
              unaff_RBX[0x2c] = lVar29;
              unaff_RBX[0x2d] = lVar32;
              unaff_RBX[0x2e] = 2;
              unaff_RBX[0x50] = (longlong)(unaff_RBX + 0x18);
              unaff_RBX[0x51] = (longlong)(unaff_RBX + 0x24);
              unaff_RBX[0x52] = (longlong)&UNK_14332b058;
              unaff_RBX[0x53] = (longlong)(unaff_RBX + 0x13);
              unaff_RBX[0x54] = (longlong)(unaff_RBX + 0x44);
              unaff_RBX[0x55] = (longlong)&UNK_14332b078;
              unaff_RBX[0x56] = (longlong)plVar2;
              unaff_RBX[0x57] = unaff_RBX[0xe] + 0x10;
              unaff_RBX[0x58] = (longlong)&UNK_14332b098;
              unaff_RBX[0x21] = (longlong)plVar42;
              unaff_RBX[0x22] = 3;
              unaff_RBX[0x23] = lVar44 + 0x30;
              unaff_RBX[0x20] = unaff_RBX[0xca];
              unaff_RBX[0x1e] = unaff_RBX[200];
              unaff_RBX[0x1f] = unaff_RBX[0xc9];
              *(undefined1 *)((longlong)unaff_RBX + 0x6c) = 1;
              plStack_98 = unaff_RBX + 0x21;
              puStack_c0 = (uint *)0x141739d0a;
              pdb_140dd7f80(unaff_RBX[0x11],uVar43,uVar26,unaff_RBX + 0x1e);
            }
          }
        }
        lVar44 = _UNK_14332b500;
        if (unaff_RBX[0x38] == 0) {
          plStack_98 = unaff_RBX + 0x39;
          lVar31 = *(longlong *)(unaff_RBX[0xe] + 0x40);
          unaff_RBX[0x50] = _DAT_14332b4f8;
          unaff_RBX[0x51] = lVar44;
          lVar44 = *(longlong *)(unaff_RBX[0xe] + 0x38);
          uVar43 = *(undefined8 *)(lVar44 + 0x20);
          uVar6 = *(undefined8 *)(lVar44 + 0x28);
          *(undefined1 *)((longlong)unaff_RBX + 0x6c) = 1;
          puStack_c0 = (uint *)0x141739d59;
          pdb_141c2b710(lVar31 + 0x10,unaff_RBX + 0x50,uVar43,uVar6);
        }
      }
      *(int *)(unaff_RBX + 0x52) = (int)unaff_RBX[0x3a];
      *(undefined4 *)((longlong)unaff_RBX + 0x294) = *(undefined4 *)((longlong)unaff_RBX + 0x1d4);
      *(int *)(unaff_RBX + 0x53) = (int)unaff_RBX[0x3b];
      *(undefined4 *)((longlong)unaff_RBX + 0x29c) = *(undefined4 *)((longlong)unaff_RBX + 0x1dc);
      unaff_RBX[0x50] = unaff_RBX[0x38];
      unaff_RBX[0x51] = unaff_RBX[0x39];
      *(undefined1 *)((longlong)unaff_RBX + 0x6c) = 0;
      puStack_c0 = (uint *)0x141739d8f;
      pdb_14173b990(unaff_RBX + 0x4c,unaff_RBX + 0x50);
      unaff_RBX[0x11] = unaff_RBX[0xe] + 0x58;
      puStack_c0 = (uint *)0x141739da4;
      pdb_141ac4fd0();
      plVar42 = *(longlong **)unaff_RBX[0x11];
      LOCK();
      *plVar42 = *plVar42 + -1;
      UNLOCK();
      unaff_R13 = (uint *)unaff_RBX[0x10];
      if (*plVar42 == 0) {
        puStack_c0 = (uint *)0x141739dc1;
        pdb_140dd76c0();
      }
      plVar42 = (longlong *)*plVar30;
      LOCK();
      *plVar42 = *plVar42 + -1;
      UNLOCK();
      if (*plVar42 == 0) {
        puStack_c0 = (uint *)0x141739dd3;
        pdb_140dd76c0(plVar30);
      }
      plVar30 = *(longlong **)(unaff_RBX[0xe] + 0x40);
      LOCK();
      *plVar30 = *plVar30 + -1;
      UNLOCK();
      if (*plVar30 == 0) {
        puStack_c0 = (uint *)0x141739def;
        pdb_140dd78e0(unaff_RBX[0xe] + 0x40);
      }
      plVar30 = *(longlong **)unaff_RBX[0xe];
      if (plVar30 != (longlong *)0x0) {
        LOCK();
        *plVar30 = *plVar30 + -1;
        UNLOCK();
        if (*plVar30 == 0) {
          puStack_c0 = (uint *)0x141739e0b;
          pdb_140c7a240(unaff_RBX[0xe]);
        }
      }
      break;
    case 5:
      puVar38 = (uint *)0x4801beca;
      unaff_RDI = arg0;
      goto code_r0x00014173f2cb;
    case 7:
      ppuVar46 = (uint **)(ulonglong)(iVar3 + 0x8b32bd94);
      puVar39 = (undefined *)0x4332bb50;
    case 6:
code_r0x00014173f49a:
                    /* WARNING: Subroutine does not return */
      *(undefined8 *)((longlong)ppuVar46 + -8) = 0x14173f49f;
      pdb_142dc8570(puVar39);
    case 8:
      *(byte *)puVar36 = (byte)*puVar36;
      *(byte *)arg0 = (byte)*arg0 + 0x94;
      *(int *)(param_2 + 0x12) = (int)param_2[0x12] - (int)&puStack_b8;
      goto code_r0x00014173f31e;
    case 9:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 10:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0xb:
      goto code_r0x00014173f702;
    case 0xc:
      bVar59 = (uint)uStack_68 < (uint)unaff_RBX;
      ppuVar47 = &puStack_b8;
      puVar27 = param_1;
      goto code_r0x00014173f5dc;
    case 0xd:
      puStack_c0 = arg0;
      ppuVar54 = (uint **)auStack_190;
      ppuVar52 = (uint **)auStack_190;
      ppuVar51 = (uint **)auStack_190;
      ppuVar49 = (uint **)auStack_190;
      ppuVar50 = (uint **)auStack_190;
      ppuVar48 = (uint **)auStack_190;
      puVar34 = auStack_110;
      param_1 = (uint *)&UNK_14332bd94;
      puVar37 = (uint *)&UNK_14332bdc8;
      lVar44 = (longlong)*(int *)(&UNK_14332bdc8 + (ulonglong)*(byte *)(param_2 + 0xf) * 4);
      bVar59 = &UNK_14332bdc8 + lVar44 == (undefined *)0x0;
      plStack_e0 = param_2;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
      switch(*(byte *)(param_2 + 0xf)) {
      case 0:
        puVar36 = (uint *)param_2[2];
        goto code_r0x00014173f87a;
      case 1:
                    /* WARNING: Subroutine does not return */
        uStack_198 = 0x14173f9ef;
        pdb_142dc8570(&UNK_14332ba20);
      case 2:
                    /* WARNING: Subroutine does not return */
        uStack_198 = 0x14173f9e3;
        pdb_142dc8590(&UNK_14332ba20);
      case 3:
        plStack_e8 = param_2 + 7;
        if ((char)param_2[0xe] != '\0') {
          if ((char)param_2[0xe] != '\x01') {
                    /* WARNING: Subroutine does not return */
            uStack_198 = 0x14173fa03;
            pdb_142dc8590(&UNK_14332bb50);
          }
          goto code_r0x00014173f9c0;
        }
        break;
      case 4:
        lVar44 = (longlong)*(int *)(&UNK_14332bdc8 + (longlong)(&UNK_14332bdc8 + lVar44) * 4);
        goto code_r0x00014173fb06;
      case 5:
        *(int *)(lVar44 + 0xd07af1b3) = *(int *)(lVar44 + 0xd07af1b3) + uVar40;
                    /* WARNING: Subroutine does not return */
        uStack_198 = 0x14173fcd6;
        pdb_142dc8590();
      case 6:
        (&UNK_14332bd55)[lVar44] = (&UNK_14332bd55)[lVar44] + -0x38;
                    /* WARNING: Subroutine does not return */
        uStack_198 = 0x14173fcc7;
        pdb_142dc8570();
      case 7:
        goto code_r0x00014173fb3c;
      case 8:
        puVar38 = (uint *)0x4332bdc8;
        goto code_r0x00014173fdd7;
      case 9:
        ppuVar54 = (uint **)&uStack_198;
        uStack_198 = 0xdeb9001;
        goto code_r0x00014174045e;
      case 10:
        goto code_r0x00014174044d;
      case 0xb:
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      goto code_r0x00014173f8db;
    case 0xe:
      *(byte *)puVar36 = (byte)*puVar36 - cVar23;
      *(byte *)puVar36 = (byte)*puVar36 + cVar23;
      goto code_r0x00014173f9a9;
    case 0xf:
      *(char *)((longlong)unaff_RBX + 0x5f) =
           *(char *)((longlong)unaff_RBX + 0x5f) + (char)unaff_RBX;
      return puVar36;
    case 0x10:
      ppuVar48 = &puStack_c0;
      puStack_c0 = puVar34;
      *(uint *)(param_2 + 7) = (int)param_2[7] + (int)puVar36 + (uint)(*unaff_R15 < bVar22);
      goto code_r0x00014173f87a;
    case 0x11:
      UNRECOVERED_JUMPTABLE = (code *)swi(3);
      puVar34 = (uint *)(*UNRECOVERED_JUMPTABLE)();
      return puVar34;
    case 0x12:
      goto code_r0x00014173fc92;
    case 0x13:
      (&UNK_14332bd1d)[iVar3] = (&UNK_14332bd1d)[iVar3] + -0x6c;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0x14:
      uVar25 = *arg0;
      *arg0 = *arg0 + 0x4332bd94;
      *(char *)(unaff_RBX + 0x19) = (char)unaff_RBX[0x19] + cVar23 + -0x6f + (0xbccd426b < uVar25);
      uVar25 = *(uint *)(unaff_RBX + 0x1b);
      uVar63 = *(uint *)((longlong)unaff_RBX + 0xdc);
      in_XMM1_Dc = *(uint *)(unaff_RBX + 0x1c);
      in_XMM1_Dd = *(uint *)((longlong)unaff_RBX + 0xe4);
      ppuVar51 = &puStack_b8;
      goto code_r0x00014173fb3c;
    case 0x15:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0x16:
code_r0x000141740425:
      *(byte *)((longlong)puVar34 + 0x15f) = 0;
      *(byte *)((longlong)puVar34 + 0x15e) = 1;
      *(undefined8 *)((longlong)ppuVar56 + -8) = 0x141740438;
      puVar36 = (uint *)pdb_142dc79e0();
      ppuVar54 = ppuVar56;
      puVar38 = param_1;
      goto code_r0x000141740439;
    case 0x17:
      *(byte *)puVar36 = (byte)*puVar36 + cVar23;
      goto code_r0x000141740413;
    case 0x18:
      *(byte *)puVar36 = (byte)*puVar36;
      *(byte *)arg0 = (byte)*arg0 + 0x94;
      puVar37 = param_1;
      goto code_r0x00014173fe3e;
    }
    goto code_r0x000141739e0c;
  case 9:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 10:
    goto code_r0x000141739e48;
  case 0xb:
code_r0x000141738c43:
    puStack_c0 = (uint *)0x141738c4e;
    pdb_140dd7f80(puVar37,unaff_R15,unaff_R12,param_3);
code_r0x000141738c4f:
    param_2 = (longlong *)unaff_RBX[0xe];
    arg0 = unaff_RDI;
code_r0x000141738c53:
    param_2[0xc] = (longlong)(param_2 + 10);
    param_2[0xd] = 0;
code_r0x000141738c63:
    unaff_RBX[0x10] = (longlong)(param_2 + 0xc);
    puStack_c0 = (uint *)0x141738c84;
    pdb_140b35bb0(unaff_RBX + 0x50,param_2 + 0xc,(longlong)unaff_RBX + 0x1bf,arg0);
    lVar44 = unaff_RBX[0x50];
    if (lVar44 == 2) {
      unaff_R13[0] = 1;
      unaff_R13[1] = 0;
      uVar21 = 3;
      puVar27 = unaff_R13;
    }
    else {
      lVar31 = unaff_RBX[0x51];
      lVar29 = unaff_RBX[0x52];
      lVar5 = unaff_RBX[0x53];
      lVar58 = unaff_RBX[0x54];
      lVar32 = unaff_RBX[0xe];
      if (*(longlong *)(lVar32 + 0x68) != 0) {
        unaff_RBX[0x10] = *(longlong *)(lVar32 + 0x68);
        puStack_c0 = (uint *)0x141738ccf;
        pdb_140974580();
        puStack_c0 = (uint *)0x141738ce7;
        pub_1406abac0((byte *)unaff_RBX[0x10],0x38,8);
        lVar32 = unaff_RBX[0xe];
      }
      if ((int)lVar44 == 1) {
        lVar44 = *(longlong *)(lVar32 + 0x10);
        lVar31 = *(longlong *)(lVar32 + 0x18);
        puStack_c0 = (uint *)0x141738cfd;
        pdb_14007ee60();
        puStack_c0 = (uint *)0x141738d0c;
        pbVar35 = pub_1406abab0(0x10,8);
        if (pbVar35 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
          puStack_c0 = (uint *)0x141738e29;
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
        unaff_RBX[0x4c] = lVar44;
        unaff_RBX[0x4d] = lVar31;
        unaff_RBX[0x4e] = (longlong)pbVar35;
        unaff_RBX[0x4f] = (longlong)&UNK_14332b300;
      }
      else {
        unaff_RBX[0x2a] = lVar31;
        unaff_RBX[0x2b] = lVar29;
        unaff_RBX[0x2c] = lVar5;
        unaff_RBX[0x2d] = lVar58;
        lVar44 = _UNK_14332b500;
        if (lVar31 == 0) {
          plStack_98 = unaff_RBX + 0x2b;
          lVar31 = *(longlong *)(unaff_RBX[0xe] + 0x40);
          unaff_RBX[0x50] = _DAT_14332b4f8;
          unaff_RBX[0x51] = lVar44;
          lVar44 = *(longlong *)(unaff_RBX[0xe] + 0x38);
          uVar43 = *(undefined8 *)(lVar44 + 0x20);
          uVar6 = *(undefined8 *)(lVar44 + 0x28);
          *(undefined1 *)((longlong)unaff_RBX + 0x97) = 1;
          puStack_c0 = (uint *)0x141738dad;
          pdb_141c2b710(lVar31 + 0x10,unaff_RBX + 0x50,uVar43,uVar6);
        }
        unaff_RBX[0x52] = unaff_RBX[0x2c];
        unaff_RBX[0x53] = unaff_RBX[0x2d];
        unaff_RBX[0x50] = unaff_RBX[0x2a];
        unaff_RBX[0x51] = unaff_RBX[0x2b];
        *(undefined1 *)((longlong)unaff_RBX + 0x97) = 0;
        puStack_c0 = (uint *)0x141738df4;
        pdb_14173b990(unaff_RBX + 0x4c,unaff_RBX + 0x50);
        lVar32 = unaff_RBX[0xe];
      }
      puStack_c0 = (uint *)0x141738e02;
      pdb_140981490(lVar32 + 0x50);
      plVar30 = *(longlong **)(unaff_RBX[0xe] + 0x38);
      LOCK();
      *plVar30 = *plVar30 + -1;
      lVar44 = *plVar30;
      UNLOCK();
joined_r0x000141738e0f:
      if (lVar44 == 0) {
        puStack_c0 = (uint *)0x14173914c;
        pdb_140dd76c0(unaff_RBX[0xe] + 0x38);
      }
      plVar30 = *(longlong **)(unaff_RBX[0xe] + 0x40);
      LOCK();
      *plVar30 = *plVar30 + -1;
      UNLOCK();
      if (*plVar30 == 0) {
        puStack_c0 = (uint *)0x141739168;
        pdb_140dd78e0(unaff_RBX[0xe] + 0x40);
      }
      plVar30 = *(longlong **)unaff_RBX[0xe];
      if (plVar30 != (longlong *)0x0) {
        LOCK();
        *plVar30 = *plVar30 + -1;
        UNLOCK();
        if (*plVar30 == 0) {
          puStack_c0 = (uint *)0x14173918c;
          pdb_140c7a240(unaff_RBX[0xe]);
        }
      }
code_r0x000141739e0c:
      lVar44 = unaff_RBX[0x4c];
      lVar31 = unaff_RBX[0x4d];
      lVar29 = unaff_RBX[0x4f];
      *(longlong *)(unaff_R13 + 6) = unaff_RBX[0x4e];
      *(longlong *)(unaff_R13 + 8) = lVar29;
      *(longlong *)(unaff_R13 + 2) = lVar44;
      *(longlong *)(unaff_R13 + 4) = lVar31;
      unaff_R13[0] = 0;
      unaff_R13[1] = 0;
      uVar21 = 1;
      puVar27 = unaff_R13;
    }
code_r0x000141739e30:
    *(undefined1 *)(unaff_RBX[0xe] + 0x4a) = uVar21;
code_r0x000141739e48:
    return puVar27;
  case 0xc:
    goto code_r0x000141737417;
  case 0xd:
code_r0x00014173f2cb:
    arg0 = unaff_RDI;
    puVar34 = (uint *)&lStack_38;
    puVar37 = (uint *)&UNK_14332bda8;
    uVar26 = (ulonglong)*(int *)(&UNK_14332bda8 + (ulonglong)*(byte *)(param_2 + 0x16) * 4);
    puVar36 = (uint *)(&UNK_14332bda8 + uVar26);
    cVar23 = (char)puVar36;
    ppuVar54 = &puStack_b8;
    in_stack_00000070 = param_2;
    param_1 = puVar38;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(byte *)(param_2 + 0x16)) {
    case 0:
      in_XMM0_Qa = (longlong *)*param_2;
      in_XMM0_Qb = (longlong *)param_2[1];
      uVar25 = *(uint *)(param_2 + 2);
      uVar63 = *(uint *)((longlong)param_2 + 0x14);
      lStack_88 = param_2[2];
      in_XMM1_Dc = *(uint *)(param_2 + 3);
      in_XMM1_Dd = *(uint *)((longlong)param_2 + 0x1c);
      lStack_80 = param_2[3];
      uVar64 = (undefined4)param_2[4];
      uVar65 = *(undefined4 *)((longlong)param_2 + 0x24);
      pbStack_78 = (byte *)param_2[4];
      in_XMM2_Dc = (undefined4)param_2[5];
      in_XMM2_Dd = *(undefined4 *)((longlong)param_2 + 0x2c);
      plStack_70 = (longlong *)param_2[5];
      uVar66 = (undefined4)param_2[6];
      uVar67 = *(undefined4 *)((longlong)param_2 + 0x34);
      in_XMM3_Dc = (undefined4)param_2[7];
      in_XMM3_Dd = *(undefined4 *)((longlong)param_2 + 0x3c);
      in_XMM4_Da = (undefined4)param_2[8];
      in_XMM4_Db = *(undefined4 *)((longlong)param_2 + 0x44);
      in_XMM4_Dc = (undefined4)param_2[9];
      in_XMM4_Dd = *(undefined4 *)((longlong)param_2 + 0x4c);
      plStack_98 = in_XMM0_Qa;
      plStack_90 = in_XMM0_Qb;
      goto code_r0x00014173f31e;
    case 1:
                    /* WARNING: Subroutine does not return */
      puStack_c0 = (uint *)0x14173f4ba;
      pdb_142dc8570(&UNK_14332ba20);
    case 2:
                    /* WARNING: Subroutine does not return */
      puStack_c0 = (uint *)0x14173f4ae;
      pdb_142dc8590(&UNK_14332ba20);
    case 3:
      if ((char)param_2[0x14] != '\0') {
        if ((char)param_2[0x14] != '\x01') {
                    /* WARNING: Subroutine does not return */
          puStack_c0 = (uint *)0x14173f4cd;
          pdb_142dc8590(&UNK_14332bb50);
        }
        puVar39 = &UNK_14332bb50;
        ppuVar46 = &puStack_b8;
        goto code_r0x00014173f49a;
      }
      goto code_r0x00014173f360;
    case 4:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 5:
      *(int *)(uVar26 + 0xd07aeb93) = *(int *)(uVar26 + 0xd07aeb93) + uVar40;
                    /* WARNING: Subroutine does not return */
      puStack_c0 = (uint *)0x14173f732;
      pdb_142dc8590();
    case 6:
      (&UNK_14332bd35)[uVar26] = (&UNK_14332bd35)[uVar26] ^ 0xa8;
                    /* WARNING: Subroutine does not return */
      puStack_c0 = (uint *)0x14173f723;
      pdb_142dc8570();
    case 7:
      puVar34 = (uint *)(param_2 + 0xc);
      bVar59 = CARRY4(*puVar34,uVar40) ||
               CARRY4(*puVar34 + uVar40,(uint)(0xfffffffebccd4257 < uVar26));
      *puVar34 = *puVar34 + uVar40 + (uint)(0xfffffffebccd4257 < uVar26);
      ppuVar47 = &puStack_b8;
      puVar27 = puVar38;
      goto code_r0x00014173f5dc;
    case 8:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 9:
      *(byte *)((longlong)param_3 + -0x73) = *(byte *)((longlong)param_3 + -0x73) - bVar22;
      goto code_r0x00014173f9c0;
    case 10:
      *(int *)(uVar26 + 0x13bb60793) = *(int *)(uVar26 + 0x13bb60793) + uVar40;
      ppuVar50 = &puStack_b8;
code_r0x00014173f9c0:
      *(longlong *)(puVar34 + 10) = *(longlong *)(puVar34 + 0xe);
                    /* WARNING: Subroutine does not return */
      *(undefined8 *)((longlong)ppuVar50 + -8) = 0x14173f9d4;
      pdb_142dc8570(&UNK_14332bb50);
    case 0xb:
      ppuVar48 = (uint **)auStack_b0;
      puVar36 = puStack_b8;
      goto code_r0x00014173f87a;
    case 0xc:
      (&UNK_14332bd6f)[uVar26] = (&UNK_14332bd6f)[uVar26] + -0x58;
      *(byte *)puVar36 = (byte)*puVar36 + cVar23;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0xd:
                    /* WARNING: Does not return */
      UNRECOVERED_JUMPTABLE = (code *)invalidInstructionException();
      (*UNRECOVERED_JUMPTABLE)();
    case 0xe:
      *(char *)(param_2 + 0x1b) = (char)param_2[0x1b] + cVar45;
      goto code_r0x00014173fca0;
    case 0xf:
      UNK_14332bda8 = UNK_14332bda8 - cVar23;
      *(byte *)puVar36 = (byte)*puVar36 + cVar23;
      ppuVar51 = &puStack_b8;
code_r0x00014173fb3c:
      puVar34[0x4e] = uVar25;
      puVar34[0x4f] = uVar63;
      puVar34[0x50] = in_XMM1_Dc;
      puVar34[0x51] = in_XMM1_Dd;
      *(longlong **)(puVar34 + 0x96) = unaff_RBX + 0x1d;
      *(undefined8 *)((longlong)ppuVar51 + -8) = 0x14173fb5f;
      pub_142e32760(unaff_RBX + 0x1d,arg0,0xe8);
      *(undefined1 *)(unaff_RBX + 0x3a) = 0;
      lVar44 = unaff_RBX[0x1d];
      *(undefined8 *)((longlong)ppuVar51 + -8) = 0x14173fba5;
      pub_142e32760(puVar34 + 0x52,unaff_RBX + 0x1e,0xc0);
      lVar31 = unaff_RBX[0x36];
      lVar29 = unaff_RBX[0x37];
      uVar25 = *(uint *)((longlong)unaff_RBX + 0x1c4);
      uVar63 = *(uint *)(unaff_RBX + 0x39);
      uVar24 = *(uint *)((longlong)unaff_RBX + 0x1cc);
      puVar34[0x8c] = *(uint *)(unaff_RBX + 0x38);
      puVar34[0x8d] = uVar25;
      puVar34[0x8e] = uVar63;
      puVar34[0x8f] = uVar24;
      *(longlong *)(puVar34 + 0x88) = lVar31;
      *(longlong *)(puVar34 + 0x8a) = lVar29;
      *(undefined8 *)((longlong)ppuVar51 + -8) = 0x14173fbcd;
      pdb_14098a860(puVar34 + 0x88);
      *(undefined8 *)((longlong)ppuVar51 + -8) = 0x14173fbe4;
      pub_142e32760(puVar34 + -0x18,puVar34 + 0x52,0xc0);
      unaff_RBX = *(longlong **)(puVar34 + 0x94);
      *(undefined1 *)(unaff_RBX + 0x3a) = 1;
      if (!SBORROW8(0,lVar44)) {
        *(undefined8 *)((longlong)ppuVar51 + -8) = 0x14173fc1b;
        pub_142e32760(puVar34 + 0x58,puVar34 + -0x18,0xc0);
        puVar34[0x52] = 1;
        puVar34[0x53] = 0;
        puVar34[0x54] = 1;
        puVar34[0x55] = 0;
        *(longlong *)(puVar34 + 0x56) = lVar44;
        *(undefined8 *)((longlong)ppuVar51 + -8) = 0x14173fc3d;
        pdb_14007ee60();
        *(undefined8 *)((longlong)ppuVar51 + -8) = 0x14173fc4c;
        unaff_RDI = (uint *)pub_1406abab0(0xd8,8);
        if (unaff_RDI == (uint *)0x0) {
          puVar37 = (uint *)0x8;
          param_2 = (longlong *)0xd8;
code_r0x00014173fca0:
                    /* WARNING: Subroutine does not return */
          *(undefined8 *)((longlong)ppuVar51 + -8) = 0x14173fca5;
          pdb_142dc7e11(puVar37,param_2);
        }
        *(undefined8 *)((longlong)ppuVar51 + -8) = 0x14173fc69;
        pub_142e32760(unaff_RDI,puVar34 + 0x52,0xd8);
        goto code_r0x00014173fc69;
      }
      param_1[0] = 2;
      param_1[1] = 0;
      uVar21 = 3;
      puVar36 = param_1;
      goto code_r0x00014173fc81;
    case 0x10:
code_r0x00014173fdd7:
      *(ulonglong *)((longlong)ppuVar52 + -8) = unaff_R12;
      *(uint **)((longlong)ppuVar52 + -0x10) = puVar38;
      *(uint **)((longlong)ppuVar52 + -0x18) = arg0;
      *(longlong **)((longlong)ppuVar52 + -0x20) = unaff_RBX;
      ppuVar54 = (uint **)((longlong)ppuVar52 + -0x208);
      ppuVar53 = (uint **)((longlong)ppuVar52 + -0x208);
      puVar34 = (uint *)((longlong)ppuVar52 + -0x188);
      *(undefined8 *)((longlong)ppuVar52 + -0x28) = 0xfffffffffffffffe;
      lVar44 = param_2[0x11];
      *(longlong **)((longlong)ppuVar52 + -0x40) = param_2;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
      switch((char)lVar44) {
      case '\0':
        lVar44 = *param_2;
        lVar31 = param_2[1];
        lVar29 = param_2[3];
        *(longlong *)((longlong)ppuVar52 + -0xf8) = param_2[2];
        *(longlong *)((longlong)ppuVar52 + -0xf0) = lVar29;
        *(longlong *)((longlong)ppuVar52 + -0x108) = lVar44;
        *(longlong *)((longlong)ppuVar52 + -0x100) = lVar31;
        lVar44 = param_2[4];
        lVar31 = param_2[5];
        uVar64 = *(undefined4 *)((longlong)param_2 + 0x34);
        lVar29 = param_2[7];
        uVar65 = *(undefined4 *)((longlong)param_2 + 0x3c);
        *(int *)((longlong)ppuVar52 + -0x168) = (int)param_2[6];
        *(undefined4 *)((longlong)ppuVar52 + -0x164) = uVar64;
        *(int *)((longlong)ppuVar52 + -0x160) = (int)lVar29;
        *(undefined4 *)((longlong)ppuVar52 + -0x15c) = uVar65;
        *(longlong *)((longlong)ppuVar52 + -0x178) = lVar44;
        *(longlong *)((longlong)ppuVar52 + -0x170) = lVar31;
        goto code_r0x00014173fe3e;
      case '\x01':
                    /* WARNING: Subroutine does not return */
        *(undefined8 *)((longlong)ppuVar52 + -0x210) = 0x141740485;
        pdb_142dc8570(&UNK_14332ba20);
      case '\x02':
                    /* WARNING: Subroutine does not return */
        *(undefined8 *)((longlong)ppuVar52 + -0x210) = 0x141740479;
        pdb_142dc8590(&UNK_14332ba20);
      }
      goto code_r0x00014173feae;
    case 0x11:
code_r0x000141740439:
      bVar59 = (char)puVar36 == '\0';
      puVar37 = puVar38;
      break;
    case 0x12:
      *(byte *)puVar36 = (byte)*puVar36 + cVar23;
      bVar59 = ((int)puVar36 + (int)puVar34 & 0x75U) == 0;
      ppuVar54 = &puStack_c0;
      puStack_c0 = (uint *)0xffffffffc0849001;
      puVar37 = puVar38;
      break;
    case 0x13:
      ppuVar53 = (uint **)auStack_b0;
      LOCK();
      *(byte *)puVar36 = (byte)*puVar36 + cVar23;
      UNLOCK();
      pbVar35 = (byte *)((longlong)puVar38 + 0xf);
      bVar22 = *pbVar35;
      cVar23 = (char)((ulonglong)puVar36 >> 8);
      *pbVar35 = *pbVar35 + cVar23;
      if (*pbVar35 != 0 && SCARRY1(bVar22,cVar23) == (char)*pbVar35 < '\0') {
        (&UNK_14332bd33)[uVar26] = (&UNK_14332bd33)[uVar26] + -0x58;
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      pbStack_78 = (byte *)CONCAT44(pbStack_78._4_4_,(int)pbStack_78 + -0x4332bda8);
      puVar37 = puVar38;
      goto code_r0x00014173fe3e;
    }
    if (bVar59) {
      *(undefined1 *)((longlong)unaff_RBX + 0x39) = 1;
    }
code_r0x00014174008e:
    uVar25 = 0;
    LOCK();
    bVar22 = *unaff_R15;
    *unaff_R15 = 0;
    UNLOCK();
    ppuVar55 = ppuVar54;
    if (bVar22 == 2) {
      *(byte *)((longlong)puVar34 + 0x15f) = 0;
      *(byte *)((longlong)puVar34 + 0x15e) = 1;
      *(undefined8 *)((longlong)ppuVar54 + -8) = 0x1417400af;
      pdb_142dc6ca0();
      uVar25 = 0;
    }
code_r0x0001417400b6:
    puVar34[0x56] = uVar25;
    *(longlong *)puVar34 = *(longlong *)(puVar34 + 0x4e);
    *(uint **)(puVar34 + 2) = arg0;
    puVar34[0x28] = 0;
    puVar34[0x29] = 0;
    puVar34[0x2a] = 1;
    puVar34[0x2b] = 0;
    puVar34[0x2c] = 0;
    puVar34[0x2d] = 0;
    puVar34[0x34] = 0x60000020;
    puVar34[0x35] = 0;
    *(uint **)(puVar34 + 0x30) = puVar34 + 0x28;
    *(undefined **)(puVar34 + 0x32) = &UNK_14332b508;
    *(undefined8 *)((longlong)ppuVar55 + -8) = 0x141740122;
    cVar23 = pdb_140f58310(puVar34,puVar34 + 0x30);
    if (cVar23 != '\0') {
      *(undefined **)((longlong)ppuVar55 + 0x20) = &UNK_14332b5e0;
                    /* WARNING: Subroutine does not return */
      *(undefined8 *)((longlong)ppuVar55 + -8) = 0x141740394;
      pdb_142dc8170(&UNK_14332b538,0x37,(byte *)((longlong)puVar34 + 0x157),&UNK_14332b890);
    }
    lVar44 = *(longlong *)(puVar34 + 0x2a);
    lVar31 = *(longlong *)(puVar34 + 0x2c);
    lVar29 = *(longlong *)(puVar34 + 0x1c);
    *(longlong *)(puVar34 + 0x50) = *(longlong *)(puVar34 + 0x28);
    if (lVar29 == 0) {
      pbVar35 = (byte *)0x0;
      bVar22 = (byte)puVar34[0x56];
    }
    else {
      arg0 = *(uint **)(puVar34 + 0x1e);
      *(longlong *)(puVar34 + 0x30) = lVar29;
      *(uint **)(puVar34 + 0x32) = arg0;
      *(longlong *)(puVar34 + 0x2e) = lVar44;
      if (arg0 == (uint *)0x0) {
        pbVar35 = (byte *)0x1;
      }
      else {
        *(undefined8 *)((longlong)ppuVar55 + -8) = 0x141740173;
        pdb_14007ee60();
        *(undefined8 *)((longlong)ppuVar55 + -8) = 0x141740180;
        pbVar35 = pub_1406abab0((ulonglong)arg0,1);
        if (pbVar35 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
          *(undefined8 *)((longlong)ppuVar55 + -8) = 0x141740195;
          pdb_142dc7e11(1,arg0);
        }
      }
      *(undefined8 *)((longlong)ppuVar55 + -8) = 0x1417401bf;
      pub_142e32760(pbVar35,lVar29 + 0x10,arg0);
      plVar30 = *(longlong **)(puVar34 + 0x30);
      LOCK();
      *plVar30 = *plVar30 + -1;
      UNLOCK();
      if (*plVar30 == 0) {
        *(undefined8 *)((longlong)ppuVar55 + -8) = 0x1417401d8;
        pdb_1406ed6a0(puVar34 + 0x30);
      }
      lVar44 = *(longlong *)(puVar34 + 0x2e);
      bVar22 = (byte)puVar34[0x56];
    }
    if ((bVar22 != 0) && (uVar26 = *(ulonglong *)(puVar34 + 0x14), uVar26 != 0)) {
      pbVar9 = *(byte **)(puVar34 + 0x16);
      *(undefined8 *)((longlong)ppuVar55 + -8) = 0x141740201;
      pub_1406abac0(pbVar9,uVar26,1);
    }
    *(undefined8 *)((longlong)ppuVar55 + -8) = 0x14174020e;
    pdb_14098a860(puVar34 + 0x20);
    lVar29 = *(longlong *)(puVar34 + 0x50);
    uVar26 = *(ulonglong *)(puVar34 + 0x4c);
    if (uVar26 != 0) {
      pbVar9 = *(byte **)(puVar34 + 0x4e);
      *(undefined8 *)((longlong)ppuVar55 + -8) = 0x141740234;
      pub_1406abac0(pbVar9,uVar26,1);
    }
    lVar32 = *(longlong *)(puVar34 + 0x52);
    *(undefined1 *)(lVar32 + 0x80) = 1;
    if (SBORROW8(0,lVar29)) {
code_r0x000141740265:
      *(longlong *)(puVar34 + 0x30) = lVar44;
      *(undefined8 *)((longlong)ppuVar55 + -8) = 0x141740271;
      pdb_14007ee60();
      *(undefined8 *)((longlong)ppuVar55 + -8) = 0x141740280;
      pbVar35 = pub_1406abab0(8,8);
      if (pbVar35 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
        *(undefined8 *)((longlong)ppuVar55 + -8) = 0x141740363;
        pdb_142dc7e11(8,8);
      }
      *(longlong *)pbVar35 = lVar44;
      lVar44 = 1;
      puVar39 = &UNK_1430712c0;
    }
    else {
      if (lVar29 == -0x7fffffffffffffff) {
        puVar37[0] = 2;
        puVar37[1] = 0;
        uVar21 = 3;
        goto code_r0x0001417402a5;
      }
      puVar34[0x30] = 1;
      puVar34[0x31] = 0;
      puVar34[0x32] = 1;
      puVar34[0x33] = 0;
      *(longlong *)(puVar34 + 0x34) = lVar29;
      *(longlong *)(puVar34 + 0x36) = lVar44;
      *(longlong *)(puVar34 + 0x38) = lVar31;
      *(byte **)(puVar34 + 0x3a) = pbVar35;
      *(uint **)(puVar34 + 0x3c) = arg0;
      *(undefined8 *)((longlong)ppuVar55 + -8) = 0x141740301;
      pdb_14007ee60();
      *(undefined8 *)((longlong)ppuVar55 + -8) = 0x141740310;
      pbVar35 = pub_1406abab0(0x38,8);
      if (pbVar35 == (byte *)0x0) {
code_r0x000141740413:
                    /* WARNING: Subroutine does not return */
        *(undefined8 *)((longlong)ppuVar55 + -8) = 0x141740422;
        pdb_142dc7e11(8,0x38);
      }
      *(longlong *)(pbVar35 + 0x30) = *(longlong *)(puVar34 + 0x3c);
      lVar44 = *(longlong *)(puVar34 + 0x30);
      lVar31 = *(longlong *)(puVar34 + 0x32);
      lVar29 = *(longlong *)(puVar34 + 0x34);
      lVar5 = *(longlong *)(puVar34 + 0x36);
      lVar58 = *(longlong *)(puVar34 + 0x3a);
      *(longlong *)(pbVar35 + 0x20) = *(longlong *)(puVar34 + 0x38);
      *(longlong *)(pbVar35 + 0x28) = lVar58;
      *(longlong *)(pbVar35 + 0x10) = lVar29;
      *(longlong *)(pbVar35 + 0x18) = lVar5;
      *(longlong *)pbVar35 = lVar44;
      *(longlong *)(pbVar35 + 8) = lVar31;
      puVar39 = &UNK_14332ba38;
      lVar44 = 0;
    }
    *(longlong *)puVar37 = lVar44;
    *(byte **)(puVar37 + 2) = pbVar35;
    *(undefined **)(puVar37 + 4) = puVar39;
    uVar21 = 1;
code_r0x0001417402a5:
    *(undefined1 *)(lVar32 + 0x88) = uVar21;
    return puVar37;
  case 0xe:
    goto code_r0x00014173f47a;
  case 0xf:
    *(byte *)puVar27 = (byte)*puVar27 + cVar23;
    in_stack_00000070 = unaff_RBX;
    goto code_r0x00014173f460;
  case 0x10:
    *(byte *)unaff_RDI = (byte)*unaff_RDI ^ 0x74;
    *(char *)(param_2 + 8) = (char)param_2[8] - (char)((ulonglong)puVar27 >> 8);
code_r0x00014173f31e:
    uStack_68 = (byte *)CONCAT44(uVar67,uVar66);
    uStack_60 = (longlong *)CONCAT44(in_XMM3_Dd,in_XMM3_Dc);
    uStack_58 = CONCAT44(in_XMM4_Db,in_XMM4_Da);
    uStack_50 = CONCAT44(in_XMM4_Dd,in_XMM4_Dc);
    param_2[10] = (longlong)in_XMM0_Qa;
    param_2[0xb] = (longlong)in_XMM0_Qb;
    *(uint *)(param_2 + 0xc) = uVar25;
    *(uint *)((longlong)param_2 + 100) = uVar63;
    *(uint *)(param_2 + 0xd) = in_XMM1_Dc;
    *(uint *)((longlong)param_2 + 0x6c) = in_XMM1_Dd;
    *(undefined4 *)(param_2 + 0xe) = uVar64;
    *(undefined4 *)((longlong)param_2 + 0x74) = uVar65;
    *(undefined4 *)(param_2 + 0xf) = in_XMM2_Dc;
    *(undefined4 *)((longlong)param_2 + 0x7c) = in_XMM2_Dd;
    *(undefined4 *)(param_2 + 0x10) = uVar66;
    *(undefined4 *)((longlong)param_2 + 0x84) = uVar67;
    *(undefined4 *)(param_2 + 0x11) = in_XMM3_Dc;
    *(undefined4 *)((longlong)param_2 + 0x8c) = in_XMM3_Dd;
    *(undefined4 *)(param_2 + 0x12) = in_XMM4_Da;
    *(undefined4 *)((longlong)param_2 + 0x94) = in_XMM4_Db;
    *(undefined4 *)(param_2 + 0x13) = in_XMM4_Dc;
    *(undefined4 *)((longlong)param_2 + 0x9c) = in_XMM4_Dd;
    *(undefined1 *)(param_2 + 0x14) = 0;
    puVar38 = param_1;
code_r0x00014173f360:
    lStack_48 = param_2[10];
    lStack_40 = param_2[0xb];
    lVar44 = param_2[0xc];
    lVar31 = param_2[0xf];
    lVar29 = param_2[0xd];
    lVar32 = param_2[0xe];
    lStackX_18 = param_2[0x10];
    lStackX_20 = param_2[0x11];
    puStack_c0 = (uint *)0x14173f3a1;
    pdb_14098a860(&lStackX_18);
    lVar58 = lStack_40;
    lVar5 = lStack_48;
    lStack_38 = lStack_48;
    *(undefined1 *)(in_stack_00000070 + 0x14) = 1;
    param_1 = puVar38;
    if (SBORROW8(0,lVar44)) {
      puVar38[0] = 2;
      puVar38[1] = 0;
      puVar27 = (uint *)0x3;
    }
    else {
      lStackX_18 = 1;
      lStackX_20 = 1;
      puStack_c0 = (uint *)0x14173f412;
      pdb_14007ee60();
      puStack_c0 = (uint *)0x14173f421;
      pbVar35 = pub_1406abab0(0x40,0x10);
      if (pbVar35 == (byte *)0x0) {
        puVar37 = (uint *)0x10;
code_r0x00014173f47a:
                    /* WARNING: Subroutine does not return */
        puStack_c0 = (uint *)0x14173f484;
        pdb_142dc7e11(puVar37,0x40);
      }
      *(longlong *)(pbVar35 + 0x30) = lVar32;
      *(longlong *)(pbVar35 + 0x38) = lVar31;
      *(longlong *)(pbVar35 + 0x20) = lVar44;
      *(longlong *)(pbVar35 + 0x28) = lVar29;
      *(longlong *)(pbVar35 + 0x10) = lVar5;
      *(longlong *)(pbVar35 + 0x18) = lVar58;
      *(longlong *)pbVar35 = lStackX_18;
      *(longlong *)(pbVar35 + 8) = lStackX_20;
      puVar38[0] = 0;
      puVar38[1] = 0;
      *(byte **)(puVar38 + 2) = pbVar35;
      *(undefined **)(puVar38 + 4) = &UNK_14332ba98;
      puVar27 = (uint *)0x1;
    }
code_r0x00014173f460:
    *(char *)(in_stack_00000070 + 0x16) = (char)puVar27;
    return param_1;
  case 0x11:
    UNRECOVERED_JUMPTABLE = (code *)swi(3);
    puVar34 = (uint *)(*UNRECOVERED_JUMPTABLE)();
    return puVar34;
  case 0x12:
    goto code_r0x00014173f6ee;
  case 0x14:
    bVar59 = false;
    puVar36 = puVar27;
    ppuVar47 = &puStack_c0;
    puVar27 = param_1;
    puStack_c0 = puVar34;
code_r0x00014173f5dc:
    *(char *)param_2 = (char)*param_2 + (char)puVar36 + bVar59;
    lStack_88 = param_2[2];
    lStack_80 = param_2[3];
    pbStack_78 = (byte *)param_2[4];
    plStack_70 = (longlong *)param_2[5];
    uStack_68 = (byte *)param_2[6];
    uStack_60 = (longlong *)param_2[7];
    param_2[8] = (longlong)in_XMM0_Qa;
    param_2[9] = (longlong)in_XMM0_Qb;
    param_2[10] = lStack_88;
    param_2[0xb] = lStack_80;
    *(int *)(param_2 + 0xc) = (int)param_2[4];
    *(undefined4 *)((longlong)param_2 + 100) = *(undefined4 *)((longlong)param_2 + 0x24);
    *(int *)(param_2 + 0xd) = (int)param_2[5];
    *(undefined4 *)((longlong)param_2 + 0x6c) = *(undefined4 *)((longlong)param_2 + 0x2c);
    *(int *)(param_2 + 0xe) = (int)param_2[6];
    *(undefined4 *)((longlong)param_2 + 0x74) = *(undefined4 *)((longlong)param_2 + 0x34);
    *(int *)(param_2 + 0xf) = (int)param_2[7];
    *(undefined4 *)((longlong)param_2 + 0x7c) = *(undefined4 *)((longlong)param_2 + 0x3c);
    *(undefined1 *)(param_2 + 0x10) = 0;
    lVar44 = param_2[8];
    lVar31 = param_2[9];
    uStack_58 = param_2[10];
    uStack_50 = param_2[0xb];
    lStack_38 = param_2[0xc];
    *(undefined8 *)((longlong)ppuVar47 + -8) = 0x14173f65a;
    plStack_98 = in_XMM0_Qa;
    pdb_14098a860(&lStack_38);
    lVar29 = uStack_50;
    lStack_48 = uStack_58;
    lStack_40 = uStack_50;
    *(undefined1 *)(unaff_retaddr + 0x80) = 1;
    if (SBORROW8(0,lVar44)) {
      puVar27[0] = 2;
      puVar27[1] = 0;
      uVar21 = 3;
    }
    else {
      lStack_38 = uStack_58;
      *(undefined8 *)((longlong)ppuVar47 + -8) = 0x14173f68e;
      pdb_14007ee60();
      *(undefined8 *)((longlong)ppuVar47 + -8) = 0x14173f69d;
      pbVar35 = pub_1406abab0(0x30,8);
      if (pbVar35 == (byte *)0x0) {
        puVar39 = (undefined *)0x8;
        param_2 = (longlong *)0x30;
code_r0x00014173f702:
                    /* WARNING: Subroutine does not return */
        *(undefined8 *)((longlong)ppuVar47 + -8) = 0x14173f707;
        pdb_142dc7e11(puVar39,param_2);
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
      *(longlong *)(pbVar35 + 0x10) = lVar44;
      *(longlong *)(pbVar35 + 0x18) = lVar31;
      *(longlong *)(pbVar35 + 0x20) = lStack_38;
      *(longlong *)(pbVar35 + 0x28) = lVar29;
      puVar27[0] = 0;
      puVar27[1] = 0;
      *(byte **)(puVar27 + 2) = pbVar35;
      *(undefined **)(puVar27 + 4) = &UNK_14332ba78;
      uVar21 = 1;
    }
    *(undefined1 *)(unaff_retaddr + 0x88) = uVar21;
  case 0x13:
code_r0x00014173f6ee:
    return puVar27;
  case 0x15:
    *(byte *)puVar27 = (byte)*puVar27 + cVar23;
    (&UNK_14332bcff)[uVar26] = (&UNK_14332bcff)[uVar26] + 't';
    return (uint *)((ulonglong)param_2 & 0xffffffff);
  case 0x16:
    *(char *)(uVar26 + 0x1bb764575) =
         *(char *)(uVar26 + 0x1bb764575) + (char)((ulonglong)param_2 >> 8) +
         (0xfffffffebccd428b < uVar26);
    return (uint *)0x46894801;
  case 0x17:
    *(byte *)puVar27 = (byte)*puVar27 + cVar23;
    (&UNK_14332bcfd)[uVar26] = (&UNK_14332bcfd)[uVar26] + 't';
    (&UNK_14332bd01)[uVar26] = (&UNK_14332bd01)[uVar26] | bVar22;
    pbVar35 = (byte *)(ulonglong)(uVar24 + 0x1bec0c7);
    break;
  case 0x18:
    puVar36 = (uint *)(ulonglong)*(uint *)(param_2 + 2);
code_r0x00014173f87a:
    *(uint **)(puVar34 + -0x10) = puVar36;
    lVar44 = *param_2;
    lVar31 = param_2[1];
    *(longlong *)(puVar34 + -0x14) = lVar44;
    *(longlong *)(puVar34 + -0x12) = lVar31;
    uVar25 = *(uint *)((longlong)param_2 + 0x1c);
    uVar63 = *(uint *)(param_2 + 4);
    uVar24 = *(uint *)((longlong)param_2 + 0x24);
    uVar40 = *(uint *)(param_2 + 5);
    uVar10 = *(uint *)((longlong)param_2 + 0x2c);
    uVar11 = *(uint *)(param_2 + 6);
    uVar12 = *(uint *)((longlong)param_2 + 0x34);
    puVar34[-0xe] = *(uint *)(param_2 + 3);
    puVar34[-0xd] = uVar25;
    puVar34[-0xc] = uVar63;
    puVar34[-0xb] = uVar24;
    puVar34[-10] = uVar40;
    puVar34[-9] = uVar10;
    puVar34[-8] = uVar11;
    puVar34[-7] = uVar12;
    *(longlong **)(puVar34 + 0xe) = param_2 + 7;
    param_2[7] = lVar44;
    param_2[8] = lVar31;
    lVar44 = *(longlong *)(puVar34 + -10);
    param_2[0xb] = *(longlong *)(puVar34 + -0xc);
    param_2[0xc] = lVar44;
    param_2[0xd] = *(longlong *)(puVar34 + -8);
    param_2[9] = *(longlong *)(puVar34 + -0x10);
    param_2[10] = *(longlong *)(puVar34 + -0xe);
    *(undefined1 *)(param_2 + 0xe) = 0;
    ppuVar49 = ppuVar48;
code_r0x00014173f8db:
    lVar44 = param_2[7];
    *(longlong *)(puVar34 + -4) = param_2[8];
    *(longlong *)(puVar34 + -2) = param_2[9];
    lVar31 = param_2[10];
    lVar29 = param_2[0xb];
    lVar32 = param_2[0xd];
    *(longlong *)(puVar34 + 4) = param_2[0xc];
    *(longlong *)(puVar34 + 6) = lVar32;
    *(longlong *)puVar34 = lVar31;
    *(longlong *)(puVar34 + 2) = lVar29;
    *(undefined8 *)((longlong)ppuVar49 + -8) = 0x14173f90f;
    pdb_14098a860(puVar34);
    *(longlong *)(puVar34 + -0x18) = *(longlong *)(puVar34 + -4);
    *(longlong *)(puVar34 + -0x16) = *(longlong *)(puVar34 + -2);
    unaff_RBX = *(longlong **)(puVar34 + 0xc);
    *(undefined1 *)(unaff_RBX + 0xe) = 1;
    if (SBORROW8(0,lVar44)) {
      param_1[0] = 2;
      param_1[1] = 0;
      uVar21 = 3;
      goto code_r0x00014173f997;
    }
    *(longlong *)(puVar34 + 6) = *(longlong *)(puVar34 + -0x18);
    *(longlong *)(puVar34 + 8) = *(longlong *)(puVar34 + -0x16);
    puVar34[0] = 1;
    puVar34[1] = 0;
    puVar34[2] = 1;
    puVar34[3] = 0;
    *(longlong *)(puVar34 + 4) = lVar44;
    *(undefined8 *)((longlong)ppuVar49 + -8) = 0x14173f954;
    pdb_14007ee60();
    *(undefined8 *)((longlong)ppuVar49 + -8) = 0x14173f963;
    pbVar35 = pub_1406abab0(0x28,8);
    if (pbVar35 == (byte *)0x0) {
code_r0x00014173f9a9:
                    /* WARNING: Subroutine does not return */
      *(undefined8 *)((longlong)ppuVar49 + -8) = 0x14173f9b8;
      pdb_142dc7e11(8,0x28);
    }
    break;
  case 0x19:
    puStack_c0 = (uint *)0x14173fabc;
    puVar34 = (uint *)pdb_140974040(uVar40 + 0x80);
    return puVar34;
  case 0x1a:
    if (bVar59 || (longlong)uVar26 < -0x14332bd74) {
      param_1[4] = uVar24;
    }
    goto code_r0x00014173fc74;
  case 0x1b:
code_r0x00014173fc69:
    param_1[0] = 0;
    param_1[1] = 0;
    *(uint **)(param_1 + 2) = unaff_RDI;
code_r0x00014173fc74:
    *(undefined **)(param_1 + 4) = &UNK_14332bab8;
    uVar21 = 1;
    puVar36 = param_1;
code_r0x00014173fc81:
    *(undefined1 *)(unaff_RBX + 0x3b) = uVar21;
code_r0x00014173fc92:
    return puVar36;
  case 0x1c:
    lVar44 = CONCAT71((int7)((ulonglong)puVar27 >> 8),cVar23 + -0x7f);
code_r0x00014173fb06:
    *(longlong **)(puVar34 + 0x94) = param_2;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
    switch((byte *)(lVar44 + (longlong)puVar37)) {
    case (byte *)0x284a62ac3:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case (byte *)0x284a62acf:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case (byte *)0x284a62bd3:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case (byte *)0x284a62bdf:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case (byte *)0x284a62e33:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case (byte *)0x284a62e3f:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case (byte *)0x284a62f43:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case (byte *)0x284a62f4f:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case (byte *)0x284a62fc8:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case (byte *)0x284a6320c:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case (byte *)0x284a64a38:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case (byte *)0x284a65c31:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case (byte *)0x284a65c3d:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case (byte *)0x284a6afc0:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case (byte *)0x284a6b10e:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case (byte *)0x284a6b263:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case (byte *)0x284a6b26f:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case (byte *)0x284a6b28c:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case (byte *)0x284a6b2cc:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case (byte *)0x284a6b3d7:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case (byte *)0x284a6b3e3:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case (byte *)0x284a6b617:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case (byte *)0x284a6b668:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case (byte *)0x284a6b678:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case (byte *)0x284a6b684:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case (byte *)0x284a6b7a3:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case (byte *)0x284a6b8f9:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case (byte *)0x284a6ba5b:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case (byte *)0x284a6ba67:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case (byte *)0x284a6ba98:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case (byte *)0x284a6bc2f:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case (byte *)0x284a6c0ee:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case (byte *)0x284a6c1fa:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  case 0x1d:
    uStack_108 = 0x14173fdc0;
    puStack_c0 = puVar34;
    puVar34 = (uint *)pdb_14098b910(param_2 + 0x3b);
    return puVar34;
  case 0x1e:
    *(char *)((longlong)param_2 + 0x2b) = *(char *)((longlong)param_2 + 0x2b) + cVar45;
    puVar34 = param_3;
    goto code_r0x00014174040b;
  case 0x1f:
code_r0x0001417403d8:
    *(byte **)(puVar34 + 0x30) = unaff_R15;
    *(byte *)(puVar34 + 0x32) = (byte)puVar27;
    *(undefined **)((longlong)ppuVar54 + 0x20) = &UNK_14332bae8;
    puVar37 = (uint *)&UNK_14332b8d0;
    param_3 = puVar34 + 0x30;
    param_2 = (longlong *)0x2b;
    ppuVar46 = ppuVar54;
    puVar34 = (uint *)&UNK_14332b940;
code_r0x00014174040b:
                    /* WARNING: Subroutine does not return */
    *(undefined8 *)((longlong)ppuVar46 + -8) = 0x141740410;
    pdb_142dc8170(puVar37,param_2,param_3,puVar34);
  case 0x20:
    ppuVar53 = &puStack_b8;
    puVar37 = param_1;
code_r0x00014173fe3e:
    *(undefined8 *)((longlong)ppuVar53 + -8) = 0x14173fe55;
    pdb_141748860(puVar34 + 0x30,puVar34 + 0x20,puVar34 + 4);
    lVar44 = *(longlong *)(puVar34 + 0x30);
    lVar31 = *(longlong *)(puVar34 + 0x32);
    uVar25 = puVar34[0x34];
    uVar63 = puVar34[0x35];
    uVar24 = puVar34[0x36];
    uVar40 = puVar34[0x37];
    uVar10 = puVar34[0x38];
    uVar11 = puVar34[0x39];
    uVar12 = puVar34[0x3a];
    uVar13 = puVar34[0x3b];
    uVar14 = puVar34[0x3c];
    uVar15 = puVar34[0x3d];
    uVar16 = puVar34[0x3e];
    uVar17 = puVar34[0x3f];
    *(longlong *)(puVar34 + -0x14) = lVar44;
    *(longlong *)(puVar34 + -0x12) = lVar31;
    puVar34[-0x10] = uVar25;
    puVar34[-0xf] = uVar63;
    puVar34[-0xe] = uVar24;
    puVar34[-0xd] = uVar40;
    puVar34[-0xc] = uVar10;
    puVar34[-0xb] = uVar11;
    puVar34[-10] = uVar12;
    puVar34[-9] = uVar13;
    puVar34[-8] = uVar14;
    puVar34[-7] = uVar15;
    puVar34[-6] = uVar16;
    puVar34[-5] = uVar17;
    *(longlong *)(puVar34 + -4) = *(longlong *)(puVar34 + 0x40);
    param_2 = *(longlong **)(puVar34 + 0x52);
    param_2[0x10] = *(longlong *)(puVar34 + 0x40);
    *(uint *)(param_2 + 0xe) = uVar14;
    *(uint *)((longlong)param_2 + 0x74) = uVar15;
    *(uint *)(param_2 + 0xf) = uVar16;
    *(uint *)((longlong)param_2 + 0x7c) = uVar17;
    *(uint *)(param_2 + 0xc) = uVar10;
    *(uint *)((longlong)param_2 + 100) = uVar11;
    *(uint *)(param_2 + 0xd) = uVar12;
    *(uint *)((longlong)param_2 + 0x6c) = uVar13;
    *(uint *)(param_2 + 10) = uVar25;
    *(uint *)((longlong)param_2 + 0x54) = uVar63;
    *(uint *)(param_2 + 0xb) = uVar24;
    *(uint *)((longlong)param_2 + 0x5c) = uVar40;
    param_2[8] = lVar44;
    param_2[9] = lVar31;
    ppuVar54 = ppuVar53;
code_r0x00014173feae:
    if ((char)param_2[0x10] != '\0') {
      bVar59 = (char)param_2[0x10] == '\x01';
code_r0x00014174044d:
      if (bVar59) {
                    /* WARNING: Subroutine does not return */
        *(undefined8 *)((longlong)ppuVar54 + -8) = 0x14174045b;
        pdb_142dc8570(&UNK_14332bb00);
      }
code_r0x00014174045e:
                    /* WARNING: Subroutine does not return */
      *(undefined8 *)((longlong)ppuVar54 + -8) = 0x14174046a;
      pdb_142dc8590(&UNK_14332bb00);
    }
    *(longlong *)(puVar34 + 0x4c) = param_2[8];
    lVar44 = param_2[9];
    arg0 = (uint *)param_2[10];
    lVar31 = param_2[0xc];
    lVar29 = param_2[0xd];
    uVar25 = *(uint *)((longlong)param_2 + 0x74);
    uVar63 = *(uint *)(param_2 + 0xf);
    uVar24 = *(uint *)((longlong)param_2 + 0x7c);
    puVar34[0x24] = *(uint *)(param_2 + 0xe);
    puVar34[0x25] = uVar25;
    puVar34[0x26] = uVar63;
    puVar34[0x27] = uVar24;
    *(longlong *)(puVar34 + 0x20) = lVar31;
    *(longlong *)(puVar34 + 0x22) = lVar29;
    lVar31 = *(longlong *)(puVar34 + 0x20);
    *(longlong *)(puVar34 + 0x4e) = lVar44;
    *(undefined8 *)((longlong)ppuVar54 + -8) = 0x14173ff09;
    pdb_141c2f360(puVar34 + 0x30,lVar31 + 0x10,lVar44,arg0);
    auVar62[0] = -((byte)puVar34[0x30] == DAT_142f5c7c0);
    auVar62[1] = -(*(byte *)((longlong)puVar34 + 0xc1) == UNK_142f5c7c1);
    auVar62[2] = -(*(byte *)((longlong)puVar34 + 0xc2) == UNK_142f5c7c2);
    auVar62[3] = -(*(byte *)((longlong)puVar34 + 0xc3) == UNK_142f5c7c3);
    auVar62[4] = -((byte)puVar34[0x31] == UNK_142f5c7c4);
    auVar62[5] = -(*(byte *)((longlong)puVar34 + 0xc5) == UNK_142f5c7c5);
    auVar62[6] = -(*(byte *)((longlong)puVar34 + 0xc6) == UNK_142f5c7c6);
    auVar62[7] = -(*(byte *)((longlong)puVar34 + 199) == UNK_142f5c7c7);
    auVar62[8] = -((byte)puVar34[0x32] == UNK_142f5c7c8);
    auVar62[9] = -(*(byte *)((longlong)puVar34 + 0xc9) == UNK_142f5c7c9);
    auVar62[10] = -(*(byte *)((longlong)puVar34 + 0xca) == UNK_142f5c7ca);
    auVar62[0xb] = -(*(byte *)((longlong)puVar34 + 0xcb) == UNK_142f5c7cb);
    auVar62[0xc] = -((byte)puVar34[0x33] == UNK_142f5c7cc);
    auVar62[0xd] = -(*(byte *)((longlong)puVar34 + 0xcd) == UNK_142f5c7cd);
    auVar62[0xe] = -(*(byte *)((longlong)puVar34 + 0xce) == UNK_142f5c7ce);
    auVar62[0xf] = -(*(byte *)((longlong)puVar34 + 0xcf) == UNK_142f5c7cf);
    lVar44 = *(longlong *)(puVar34 + 0x34);
    ppuVar55 = ppuVar54;
    if ((ushort)((ushort)(SUB161(auVar62 >> 7,0) & 1) | (ushort)(SUB161(auVar62 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar62 >> 0x17,0) & 1) << 2 |
                 (ushort)(SUB161(auVar62 >> 0x1f,0) & 1) << 3 |
                 (ushort)(SUB161(auVar62 >> 0x27,0) & 1) << 4 |
                 (ushort)(SUB161(auVar62 >> 0x2f,0) & 1) << 5 |
                 (ushort)(SUB161(auVar62 >> 0x37,0) & 1) << 6 |
                 (ushort)(SUB161(auVar62 >> 0x3f,0) & 1) << 7 |
                 (ushort)(SUB161(auVar62 >> 0x47,0) & 1) << 8 |
                 (ushort)(SUB161(auVar62 >> 0x4f,0) & 1) << 9 |
                 (ushort)(SUB161(auVar62 >> 0x57,0) & 1) << 10 |
                 (ushort)(SUB161(auVar62 >> 0x5f,0) & 1) << 0xb |
                 (ushort)(SUB161(auVar62 >> 0x67,0) & 1) << 0xc |
                 (ushort)(SUB161(auVar62 >> 0x6f,0) & 1) << 0xd |
                 (ushort)(SUB161(auVar62 >> 0x77,0) & 1) << 0xe | (ushort)(auVar62[0xf] >> 7) << 0xf
                ) != 0xffff) {
      *(longlong *)(puVar34 + 0x1e) = *(longlong *)(puVar34 + 0x4a);
      *(longlong *)(puVar34 + 0x1a) = *(longlong *)(puVar34 + 0x46);
      *(longlong *)(puVar34 + 0x1c) = *(longlong *)(puVar34 + 0x48);
      puVar34[0x16] = puVar34[0x42];
      puVar34[0x17] = puVar34[0x43];
      puVar34[0x18] = puVar34[0x44];
      puVar34[0x19] = puVar34[0x45];
      puVar34[0x12] = puVar34[0x3e];
      puVar34[0x13] = puVar34[0x3f];
      puVar34[0x14] = puVar34[0x40];
      puVar34[0x15] = puVar34[0x41];
      puVar34[0xe] = puVar34[0x3a];
      puVar34[0xf] = puVar34[0x3b];
      puVar34[0x10] = puVar34[0x3c];
      puVar34[0x11] = puVar34[0x3d];
      *(longlong *)(puVar34 + 10) = *(longlong *)(puVar34 + 0x36);
      *(longlong *)(puVar34 + 0xc) = *(longlong *)(puVar34 + 0x38);
      *(longlong *)(puVar34 + 4) = *(longlong *)(puVar34 + 0x30);
      *(longlong *)(puVar34 + 6) = *(longlong *)(puVar34 + 0x32);
      *(longlong *)(puVar34 + 8) = lVar44;
      unaff_RBX = *(longlong **)(puVar34 + 0x22);
      if (unaff_RBX != (longlong *)0x0) {
        unaff_R15 = (byte *)(unaff_RBX + 7);
        LOCK();
        bVar59 = (char)unaff_RBX[7] == '\0';
        if (bVar59) {
          *(undefined1 *)(unaff_RBX + 7) = 1;
        }
        UNLOCK();
        if (!bVar59) {
          *(byte *)((longlong)puVar34 + 0x15f) = 1;
          *(byte *)((longlong)puVar34 + 0x15e) = 1;
          *(undefined8 *)((longlong)ppuVar54 + -8) = 0x1417403b0;
          pdb_142dc6be0(unaff_R15);
        }
        puVar57 = _DAT_143ca8f38;
        if ((*_DAT_143ca8f38 & 0x7fffffffffffffff) == 0) {
          puVar27 = (uint *)0x0;
          uVar25 = 0;
          cVar23 = *(char *)((longlong)unaff_RBX + 0x39);
        }
        else {
          *(byte *)((longlong)puVar34 + 0x15f) = 1;
          *(byte *)((longlong)puVar34 + 0x15e) = 1;
          *(undefined8 *)((longlong)ppuVar54 + -8) = 0x1417403c9;
          uVar26 = pdb_142dc79e0();
          puVar27 = (uint *)(uVar26 ^ 1);
          uVar25 = (uint)puVar27;
          cVar23 = *(char *)((longlong)unaff_RBX + 0x39);
        }
        if (cVar23 != '\0') goto code_r0x0001417403d8;
        puVar34[0x56] = uVar25;
        *(byte **)(puVar34 + 0x50) = unaff_R15;
        *(longlong *)(puVar34 + 0x44) = *(longlong *)(puVar34 + 0x18);
        *(longlong *)(puVar34 + 0x46) = *(longlong *)(puVar34 + 0x1a);
        *(longlong *)(puVar34 + 0x40) = *(longlong *)(puVar34 + 0x14);
        *(longlong *)(puVar34 + 0x42) = *(longlong *)(puVar34 + 0x16);
        puVar34[0x3c] = puVar34[0x10];
        puVar34[0x3d] = puVar34[0x11];
        puVar34[0x3e] = puVar34[0x12];
        puVar34[0x3f] = puVar34[0x13];
        puVar34[0x38] = puVar34[0xc];
        puVar34[0x39] = puVar34[0xd];
        puVar34[0x3a] = puVar34[0xe];
        puVar34[0x3b] = puVar34[0xf];
        puVar34[0x34] = puVar34[8];
        puVar34[0x35] = puVar34[9];
        puVar34[0x36] = puVar34[10];
        puVar34[0x37] = puVar34[0xb];
        *(longlong *)(puVar34 + 0x30) = *(longlong *)(puVar34 + 4);
        *(longlong *)(puVar34 + 0x32) = *(longlong *)(puVar34 + 6);
        *(undefined8 *)((longlong)ppuVar54 + -8) = 0x141740071;
        pdb_1417b89d0(unaff_RBX + 8,puVar34 + 0x30);
        unaff_R15 = (byte *)(unaff_RBX + 7);
        if (((byte)puVar34[0x56] == 0) &&
           (ppuVar56 = ppuVar54, param_1 = puVar37, (*puVar57 & 0x7fffffffffffffff) != 0))
        goto code_r0x000141740425;
        goto code_r0x00014174008e;
      }
      uVar25 = (uint)CONCAT71((int7)((ulonglong)*(longlong *)(puVar34 + 0x32) >> 8),1);
      goto code_r0x0001417400b6;
    }
    *(undefined8 *)((longlong)ppuVar54 + -8) = 0x14173ff38;
    pdb_14098a860(puVar34 + 0x20);
    uVar26 = *(ulonglong *)(puVar34 + 0x4c);
    if (uVar26 != 0) {
      pbVar35 = *(byte **)(puVar34 + 0x4e);
      *(undefined8 *)((longlong)ppuVar54 + -8) = 0x14173ff57;
      pub_1406abac0(pbVar35,uVar26,1);
    }
    lVar32 = *(longlong *)(puVar34 + 0x52);
    *(undefined1 *)(lVar32 + 0x80) = 1;
    goto code_r0x000141740265;
  }
  *(longlong *)(pbVar35 + 0x20) = *(longlong *)(puVar34 + 8);
  lVar44 = *(longlong *)puVar34;
  lVar31 = *(longlong *)(puVar34 + 2);
  lVar29 = *(longlong *)(puVar34 + 6);
  *(longlong *)(pbVar35 + 0x10) = *(longlong *)(puVar34 + 4);
  *(longlong *)(pbVar35 + 0x18) = lVar29;
  *(longlong *)pbVar35 = lVar44;
  *(longlong *)(pbVar35 + 8) = lVar31;
  param_1[0] = 0;
  param_1[1] = 0;
  *(byte **)(param_1 + 2) = pbVar35;
  *(undefined **)(param_1 + 4) = &UNK_14332ba58;
  uVar21 = 1;
code_r0x00014173f997:
  *(undefined1 *)(unaff_RBX + 0xf) = uVar21;
  return param_1;
}

