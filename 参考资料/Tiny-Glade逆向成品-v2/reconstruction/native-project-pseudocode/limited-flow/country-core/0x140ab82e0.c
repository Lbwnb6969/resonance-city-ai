// VA 0x140ab82e0, PDB extent 8087 bytes
// country_core::systems::audio::menu_audio::menu_audio
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/audio/menu_audio.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Instruction at (ram,0x000140ac8257) overlaps instruction at (ram,0x000140ac8256)
    */
/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: country_core::systems::audio::menu_audio::menu_audio
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/audio/menu_audio.rs
   Extent: 8087 */

ulonglong *******
pdb_140ab82e0(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
             ulonglong ****param_5,undefined8 param_6,ulonglong *******param_7,ulonglong param_8,
             ulonglong param_9,byte *param_10,ulonglong *****param_11,ulonglong *****param_12,
             uint param_13,byte *param_14,ulonglong *****param_15,code *param_16,
             ulonglong *******param_17,ulonglong *******param_18,byte *param_19,
             ulonglong *******param_20,ulonglong *******param_21,undefined8 param_22,
             ulonglong *******param_23,ulonglong param_24,ulonglong ******param_25,
             undefined8 param_26,ulonglong *******param_27,byte *param_28,ulonglong *******param_29,
             undefined8 param_30,ulonglong *param_31,undefined8 param_32,undefined4 *param_33,
             ulonglong ******param_34,undefined8 param_35,ulonglong *******param_36,byte *param_37,
             ulonglong *******param_38,undefined8 param_39,ulonglong *******param_40,
             undefined8 param_41)

{
  uint *puVar1;
  char *pcVar2;
  char cVar3;
  undefined4 uVar4;
  undefined1 uVar5;
  int iVar6;
  undefined4 uVar7;
  ulonglong *****pppppuVar8;
  ulonglong *****pppppuVar9;
  longlong *plVar10;
  ulonglong ******ppppppuVar11;
  ulonglong ****ppppuVar12;
  uint uVar13;
  uint uVar14;
  ulonglong uVar15;
  uint uVar16;
  ulonglong *******pppppppuVar17;
  ulonglong *******pppppppuVar18;
  ulonglong uVar19;
  ulonglong *******pppppppuVar20;
  undefined7 uVar26;
  ulonglong ******ppppppuVar21;
  undefined8 uVar22;
  ulonglong *******extraout_RAX;
  ulonglong *******extraout_RAX_00;
  int *piVar23;
  ulonglong *******extraout_RAX_01;
  ulonglong *******pppppppuVar24;
  ulonglong *******pppppppuVar25;
  byte bVar29;
  ulonglong *******pppppppuVar27;
  code *UNRECOVERED_JUMPTABLE;
  int *piVar28;
  ulonglong *******pppppppuVar30;
  ulonglong unaff_RBX;
  ulonglong *******pppppppuVar31;
  byte *pbVar32;
  undefined8 *puVar33;
  undefined8 *puVar34;
  undefined8 *puVar35;
  ulonglong ******unaff_RBP;
  byte bVar36;
  ulonglong unaff_RSI;
  byte *pbVar37;
  ulonglong *******pppppppuVar38;
  ulonglong unaff_RDI;
  ulonglong *******pppppppuVar39;
  ulonglong *******pppppppuVar40;
  ulonglong *******pppppppuVar41;
  longlong lVar42;
  byte bVar43;
  ulonglong *******pppppppuVar44;
  longlong lVar45;
  ushort uVar46;
  longlong lVar47;
  ulonglong uVar48;
  ulonglong *******pppppppuVar49;
  ulonglong unaff_R12;
  ulonglong unaff_R13;
  ulonglong ******ppppppuVar50;
  ulonglong unaff_R14;
  ulonglong *******arg0;
  ulonglong unaff_R15;
  bool bVar51;
  bool bVar52;
  byte bVar53;
  byte bVar54;
  float fVar55;
  undefined1 in_XMM0 [16];
  undefined8 extraout_XMM0_Qb;
  undefined8 extraout_XMM0_Qb_00;
  undefined8 extraout_XMM0_Qb_01;
  undefined8 extraout_XMM0_Qb_02;
  undefined8 extraout_XMM0_Qb_03;
  undefined8 extraout_XMM0_Qb_04;
  undefined8 extraout_XMM0_Qb_05;
  undefined8 extraout_XMM0_Qb_06;
  undefined8 extraout_XMM0_Qb_07;
  undefined8 extraout_XMM0_Qb_08;
  undefined8 extraout_XMM0_Qb_09;
  undefined8 extraout_XMM0_Qb_10;
  undefined8 extraout_XMM0_Qb_11;
  undefined8 extraout_XMM0_Qb_12;
  undefined8 extraout_XMM0_Qb_13;
  undefined8 extraout_XMM0_Qb_14;
  undefined8 extraout_XMM0_Qb_15;
  undefined1 extraout_XMM0 [16];
  undefined1 auVar56 [16];
  float in_XMM1_Da;
  undefined1 auVar58 [16];
  int iVar57;
  undefined1 auVar59 [16];
  undefined8 in_XMM2_Qa;
  float fVar62;
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  int iVar63;
  float fVar64;
  float fVar65;
  float fVar71;
  undefined1 in_XMM3 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  float in_XMM4_Da;
  float in_XMM5_Da;
  float in_XMM5_Db;
  float unaff_XMM6_Da;
  undefined4 unaff_XMM6_Db;
  undefined4 unaff_XMM6_Dc;
  undefined4 unaff_XMM6_Dd;
  float unaff_XMM7_Da;
  uint unaff_XMM8_Da;
  uint unaff_XMM8_Db;
  float fVar72;
  undefined4 unaff_XMM14_Da;
  undefined4 unaff_XMM14_Db;
  undefined4 unaff_XMM14_Dc;
  undefined4 unaff_XMM14_Dd;
  float unaff_XMM15_Da;
  ulonglong ******unaff_retaddr;
  ulonglong uStackX_8;
  undefined8 uStackX_10;
  ulonglong *****pppppuStackX_18;
  ulonglong *****pppppuStackX_20;
  longlong *in_stack_000001e8;
  ulonglong *******apppppppuStack_108 [3];
  undefined1 auStack_f0 [24];
  ulonglong *****pppppuStack_d8;
  ulonglong *******pppppppuStack_d0;
  ulonglong ******ppppppuStack_c8;
  ulonglong *******pppppppuStack_c0;
  ulonglong *******pppppppuStack_b8;
  undefined8 uStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  ulonglong *******pppppppuStack_98;
  undefined8 uStack_90;
  ulonglong *******pppppppuStack_88;
  ulonglong *******apppppppuStack_80 [2];
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined1 uStack_60;
  undefined4 uStack_5f;
  undefined2 uStack_5b;
  byte bStack_59;
  ulonglong *******pppppppuStack_58;
  undefined8 uStack_50;
  ulonglong uStack_48;
  undefined1 auVar70 [16];
  
  fVar62 = (float)((ulonglong)in_XMM2_Qa >> 0x20);
  fVar64 = (float)in_XMM2_Qa;
  puVar33 = apppppppuStack_108 + 2;
  puVar34 = apppppppuStack_108 + 2;
  puVar35 = apppppppuStack_108 + 2;
  pppppppuVar25 = (ulonglong *******)(apppppppuStack_80 + 1);
  uStack_48 = 0xfffffffffffffffe;
  lVar42 = 4;
  if (1 < *(ulonglong *)*param_2) {
    lVar42 = *(ulonglong *)*param_2 - 2;
  }
  piVar23 = (int *)*param_1;
  if ((lVar42 == 0) || (lVar42 == 9)) {
    if (*piVar23 == 1) {
      apppppppuStack_108[1] = (ulonglong *******)0x140ab833f;
      in_XMM0._0_8_ = pdb_141808d70(&pppppppuStack_88,piVar23 + 2);
      in_XMM0._8_8_ = extraout_XMM0_Qb;
      if (pppppppuStack_88 != (ulonglong *******)0x8000000000000004) {
        pppppppuStack_98 = pppppppuStack_58;
        puStack_a8 = puStack_68;
        pppppppuStack_b8 = apppppppuStack_80[1];
        uStack_b0 = uStack_70;
        ppppppuStack_c8 = (ulonglong ******)pppppppuStack_88;
        pppppppuStack_c0 = apppppppuStack_80[0];
        pppppuStack_d8 = (ulonglong *****)&UNK_143043d90;
                    /* WARNING: Subroutine does not return */
        apppppppuStack_108[1] = (ulonglong *******)0x140ab8397;
        pdb_142dc8170(&UNK_143044570,0x2b,&ppppppuStack_c8,&UNK_143044530);
      }
    }
  }
  else {
    apppppppuStack_108[1] = (ulonglong *******)0x140ab83a5;
    in_XMM0._0_8_ = pdb_140a8a6f0(piVar23);
    in_XMM0._8_8_ = extraout_XMM0_Qb_00;
  }
  arg0 = (ulonglong *******)*param_3;
  lVar42 = param_3[1];
  ppppppuVar50 = *arg0;
  pppppppuVar24 = (ulonglong *******)0x0;
  pppppppuVar27 = (ulonglong *******)((longlong)ppppppuVar50 - *(ulonglong *)(lVar42 + 0x18));
  if (ppppppuVar50 < *(ulonglong *******)(lVar42 + 0x18)) {
    pppppppuVar27 = pppppppuVar24;
  }
  pppppppuVar44 = (ulonglong *******)((longlong)ppppppuVar50 - *(ulonglong *)(lVar42 + 0x38));
  if (ppppppuVar50 < *(ulonglong *******)(lVar42 + 0x38)) {
    pppppppuVar44 = pppppppuVar24;
  }
  pppppppuVar17 = (ulonglong *******)((longlong)pppppppuVar27 * 0x10 + *(longlong *)(lVar42 + 8));
  pppppppuVar38 = *(ulonglong ********)(lVar42 + 0x10);
  pppppppuVar40 = (ulonglong *******)((longlong)pppppppuVar38 - (longlong)pppppppuVar27);
  if (pppppppuVar38 < pppppppuVar27) {
    pppppppuVar40 = pppppppuVar24;
  }
  lVar47 = 8;
  if (pppppppuVar38 < pppppppuVar27) {
    pppppppuVar17 = (ulonglong *******)0x8;
  }
  pppppppuVar27 = (ulonglong *******)((longlong)pppppppuVar44 * 0x10 + *(longlong *)(lVar42 + 0x28))
  ;
  pppppppuVar38 =
       (ulonglong *******)((longlong)*(ulonglong ********)(lVar42 + 0x30) - (longlong)pppppppuVar44)
  ;
  if (*(ulonglong ********)(lVar42 + 0x30) < pppppppuVar44) {
    pppppppuVar27 = (ulonglong *******)0x8;
    pppppppuVar38 = pppppppuVar24;
  }
  pppppppuVar30 =
       (ulonglong *******)
       ((*(longlong *)(lVar42 + 0x40) - (longlong)pppppppuVar38) - (longlong)pppppppuVar40);
  *arg0 = (ulonglong ******)pppppppuVar30;
  pppppppuVar39 = pppppppuVar17 + (longlong)pppppppuVar40 * 2;
  pppppppuVar49 = pppppppuVar27 + (longlong)pppppppuVar38 * 2;
  pppppppuVar40 = (ulonglong *******)*param_4;
  ppppppuVar50 = (ulonglong ******)&UNK_14304c76c;
  pppppppuVar38 = (ulonglong *******)&pppppppuStack_88;
  pppppppuStack_d0 = pppppppuVar49;
  do {
    pppppppuVar41 = apppppppuStack_108[2];
    lVar42 = (longlong)param_17;
    fVar55 = in_XMM3._0_4_;
    if ((pppppppuVar17 == (ulonglong *******)0x0) || (pppppppuVar17 == pppppppuVar39)) {
      if ((pppppppuVar27 == (ulonglong *******)0x0) || (pppppppuVar27 == pppppppuStack_d0)) {
        return pppppppuVar17;
      }
      pppppppuVar31 = pppppppuVar27 + 2;
      pppppppuVar17 = (ulonglong *******)0x0;
      pppppppuVar18 = pppppppuVar27;
    }
    else {
      pppppppuVar18 = pppppppuVar17;
      pppppppuVar31 = pppppppuVar27;
      pppppppuVar17 = pppppppuVar17 + 2;
    }
    *arg0 = (ulonglong ******)((longlong)*arg0 + 1);
    iVar57 = *(int *)(&UNK_14304c76c + (ulonglong)*(byte *)(pppppppuVar18 + 1) * 4);
    uVar19 = (ulonglong)iVar57;
    bVar51 = 0xfffffffebcfb3893 < uVar19;
    pppppppuVar20 = (ulonglong *******)(&UNK_14304c76c + uVar19);
    bVar52 = pppppppuVar20 == (ulonglong *******)0x0;
    bVar54 = (byte)pppppppuVar20;
    fVar65 = SUB84(pppppppuVar20,0);
    uVar26 = (undefined7)((ulonglong)pppppppuVar20 >> 8);
    bVar53 = (byte)pppppppuVar27;
    bVar29 = (byte)((ulonglong)pppppppuVar27 >> 8);
    uVar16 = (uint)pppppppuVar27;
    bVar43 = (byte)pppppppuVar44;
    bVar36 = (byte)pppppppuVar38;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(byte *)(pppppppuVar18 + 1)) {
    case 0:
      if (*pppppppuVar40 == (ulonglong ******)0x0) {
        apppppppuStack_108[1] = (ulonglong *******)0x140ab8d53;
        pdb_14007ee60();
        apppppppuStack_108[1] = (ulonglong *******)0x140ab8d62;
        pppppppuVar24 = (ulonglong *******)pub_1406abab0(0x14,1);
        ppppppuVar21 = _UNK_14304add0;
        if (pppppppuVar24 == (ulonglong *******)0x0) {
code_r0x000140ab95b3:
          apppppppuStack_108[1] = (ulonglong *******)0x140ab95c2;
          pdb_142dc7e2a(1,0x14);
code_r0x000140ab95c2:
          apppppppuStack_108[1] = (ulonglong *******)0x140ab95d1;
          pdb_142dc7e2a(1,0x17);
code_r0x000140ab95d1:
          apppppppuStack_108[1] = (ulonglong *******)0x140ab95e0;
          pdb_142dc7e2a(1,0x1a);
code_r0x000140ab95e0:
          apppppppuStack_108[1] = (ulonglong *******)0x140ab95ef;
          pdb_142dc7e2a(1,0x1d);
code_r0x000140ab95ef:
          apppppppuStack_108[1] = (ulonglong *******)0x140ab95fe;
          pdb_142dc7e2a(1,0x15);
code_r0x000140ab95fe:
          apppppppuStack_108[1] = (ulonglong *******)0x140ab960d;
          pdb_142dc7e2a(1,0x1c);
          UNRECOVERED_JUMPTABLE = (code *)swi(3);
          pppppppuVar25 = (ulonglong *******)(*UNRECOVERED_JUMPTABLE)();
          return pppppppuVar25;
        }
        *pppppppuVar24 = _UNK_14304adc8;
        pppppppuVar24[1] = ppppppuVar21;
        *(uint *)(pppppppuVar24 + 2) = 0x7265766f;
        ppppppuStack_c8 = (ulonglong ******)0x0;
        pppppppuStack_b8 = (ulonglong *******)0x14;
        puStack_a8 = (undefined *)0x14;
        uStack_a0 = (undefined4 *)CONCAT71(uStack_a0._1_7_,2);
        uStack_b0 = pppppppuVar24;
      }
      else {
        apppppppuStack_108[1] = (ulonglong *******)0x140ab84a5;
        pdb_140a8b180(&ppppppuStack_c8,*pppppppuVar40 + 2,&UNK_14304adc8,0x14);
        if ((int)ppppppuStack_c8 == 2) {
          pppppppuStack_88 = pppppppuStack_c0;
          pppppuStack_d8 = (ulonglong *****)&UNK_14304af60;
                    /* WARNING: Subroutine does not return */
          apppppppuStack_108[1] = (ulonglong *******)0x140ab9550;
          pdb_142dc8170(&UNK_14304c468,0x2b,&pppppppuStack_88,&UNK_14304c448);
        }
      }
      puStack_68 = puStack_a8;
      uStack_60 = (undefined1)uStack_a0;
      uStack_5f = uStack_a0._1_4_;
      uStack_5b = uStack_a0._5_2_;
      pppppppuVar44 = (ulonglong *******)(ulonglong)uStack_a0._7_1_;
      bStack_59 = uStack_a0._7_1_;
      apppppppuStack_80[1] = pppppppuStack_b8;
      uStack_70 = uStack_b0;
      pppppppuStack_88 = (ulonglong *******)ppppppuStack_c8;
      apppppppuStack_80[0] = pppppppuStack_c0;
      apppppppuStack_108[1] = (ulonglong *******)0x140ab8df0;
      pppppppuVar24 = uStack_b0;
      pdb_140a8a6f0(pppppppuVar38);
      apppppppuStack_108[1] = (ulonglong *******)0x140ab8df9;
      in_XMM0._0_8_ = pdb_1409a5ed0(pppppppuVar38);
      in_XMM0._8_8_ = extraout_XMM0_Qb_09;
      break;
    case 1:
      if (*pppppppuVar40 == (ulonglong ******)0x0) {
        apppppppuStack_108[1] = (ulonglong *******)0x140ab8e04;
        pdb_14007ee60();
        apppppppuStack_108[1] = (ulonglong *******)0x140ab8e13;
        pppppppuVar24 = (ulonglong *******)pub_1406abab0(0x13,1);
        ppppppuVar21 = _UNK_14304ade4;
        if (pppppppuVar24 == (ulonglong *******)0x0) {
code_r0x000140ab9586:
          apppppppuStack_108[1] = (ulonglong *******)0x140ab9595;
          pdb_142dc7e2a(1,0x13);
code_r0x000140ab9595:
          apppppppuStack_108[1] = (ulonglong *******)0x140ab95a4;
          pdb_142dc7e2a(1,0x1b);
code_r0x000140ab95a4:
          apppppppuStack_108[1] = (ulonglong *******)0x140ab95b3;
          pdb_142dc7e2a(1,0x19);
          goto code_r0x000140ab95b3;
        }
        *pppppppuVar24 = _UNK_14304addc;
        pppppppuVar24[1] = ppppppuVar21;
        *(undefined4 *)((longlong)pppppppuVar24 + 0xf) = 0x7265766f;
        ppppppuStack_c8 = (ulonglong ******)0x0;
        pppppppuStack_b8 = (ulonglong *******)0x13;
        puStack_a8 = (undefined *)0x13;
        uStack_a0 = (undefined4 *)CONCAT71(uStack_a0._1_7_,2);
        uStack_b0 = pppppppuVar24;
      }
      else {
        apppppppuStack_108[1] = (ulonglong *******)0x140ab868b;
        pdb_140a8b180(&ppppppuStack_c8,*pppppppuVar40 + 2,&UNK_14304addc,0x13);
        if ((int)ppppppuStack_c8 == 2) {
          pppppppuStack_88 = pppppppuStack_c0;
          pppppuStack_d8 = (ulonglong *****)&UNK_14304af60;
                    /* WARNING: Subroutine does not return */
          apppppppuStack_108[1] = (ulonglong *******)0x140ab9445;
          pdb_142dc8170(&UNK_14304c468,0x2b,&pppppppuStack_88,&UNK_14304c448);
        }
      }
      puStack_68 = puStack_a8;
      uStack_60 = (undefined1)uStack_a0;
      uStack_5f = uStack_a0._1_4_;
      uStack_5b = uStack_a0._5_2_;
      pppppppuVar44 = (ulonglong *******)(ulonglong)uStack_a0._7_1_;
      bStack_59 = uStack_a0._7_1_;
      apppppppuStack_80[1] = pppppppuStack_b8;
      uStack_70 = uStack_b0;
      pppppppuStack_88 = (ulonglong *******)ppppppuStack_c8;
      apppppppuStack_80[0] = pppppppuStack_c0;
      apppppppuStack_108[1] = (ulonglong *******)0x140ab8ea1;
      pppppppuVar24 = uStack_b0;
      pdb_140a8a6f0(pppppppuVar38);
      apppppppuStack_108[1] = (ulonglong *******)0x140ab8eaa;
      in_XMM0._0_8_ = pdb_1409a5ed0(pppppppuVar38);
      in_XMM0._8_8_ = extraout_XMM0_Qb_10;
      break;
    case 2:
      if (*pppppppuVar40 == (ulonglong ******)0x0) {
        apppppppuStack_108[1] = (ulonglong *******)0x140ab8b2e;
        pdb_14007ee60();
        apppppppuStack_108[1] = (ulonglong *******)0x140ab8b3d;
        pppppppuVar24 = (ulonglong *******)pub_1406abab0(0x15,1);
        ppppppuVar21 = _UNK_14304adf7;
        if (pppppppuVar24 == (ulonglong *******)0x0) goto code_r0x000140ab95ef;
        *pppppppuVar24 = _UNK_14304adef;
        pppppppuVar24[1] = ppppppuVar21;
        *(undefined8 *)((longlong)pppppppuVar24 + 0xd) = 0x7463656c65532f75;
        ppppppuStack_c8 = (ulonglong ******)0x0;
        pppppppuStack_b8 = (ulonglong *******)0x15;
        puStack_a8 = (undefined *)0x15;
        uStack_a0 = (undefined4 *)CONCAT71(uStack_a0._1_7_,2);
        uStack_b0 = pppppppuVar24;
      }
      else {
        apppppppuStack_108[1] = (ulonglong *******)0x140ab85e9;
        pdb_140a8b180(&ppppppuStack_c8,*pppppppuVar40 + 2,&UNK_14304adef,0x15);
        if ((int)ppppppuStack_c8 == 2) {
          pppppppuStack_88 = pppppppuStack_c0;
          pppppuStack_d8 = (ulonglong *****)&UNK_14304af60;
                    /* WARNING: Subroutine does not return */
          apppppppuStack_108[1] = (ulonglong *******)0x140ab9337;
          pdb_142dc8170(&UNK_14304c468,0x2b,&pppppppuStack_88,&UNK_14304c448);
        }
      }
      puStack_68 = puStack_a8;
      uStack_60 = (undefined1)uStack_a0;
      uStack_5f = uStack_a0._1_4_;
      uStack_5b = uStack_a0._5_2_;
      pppppppuVar44 = (ulonglong *******)(ulonglong)uStack_a0._7_1_;
      bStack_59 = uStack_a0._7_1_;
      apppppppuStack_80[1] = pppppppuStack_b8;
      uStack_70 = uStack_b0;
      pppppppuStack_88 = (ulonglong *******)ppppppuStack_c8;
      apppppppuStack_80[0] = pppppppuStack_c0;
      apppppppuStack_108[1] = (ulonglong *******)0x140ab8bd2;
      pppppppuVar24 = uStack_b0;
      pdb_140a8a6f0(pppppppuVar38);
      apppppppuStack_108[1] = (ulonglong *******)0x140ab8bdb;
      in_XMM0._0_8_ = pdb_1409a5ed0(pppppppuVar38);
      in_XMM0._8_8_ = extraout_XMM0_Qb_06;
      break;
    case 3:
      if (*pppppppuVar40 == (ulonglong ******)0x0) {
        apppppppuStack_108[1] = (ulonglong *******)0x140ab8be6;
        pdb_14007ee60();
        apppppppuStack_108[1] = (ulonglong *******)0x140ab8bf5;
        pppppppuVar24 = (ulonglong *******)pub_1406abab0(0x17,1);
        ppppppuVar21 = _UNK_14304ae0c;
        if (pppppppuVar24 == (ulonglong *******)0x0) goto code_r0x000140ab95c2;
        *pppppppuVar24 = _UNK_14304ae04;
        pppppppuVar24[1] = ppppppuVar21;
        *(undefined8 *)((longlong)pppppppuVar24 + 0xf) = 0x73676e6974746553;
        ppppppuStack_c8 = (ulonglong ******)0x0;
        pppppppuStack_b8 = (ulonglong *******)0x17;
        puStack_a8 = (undefined *)0x17;
        uStack_a0 = (undefined4 *)CONCAT71(uStack_a0._1_7_,2);
        uStack_b0 = pppppppuVar24;
      }
      else {
        apppppppuStack_108[1] = (ulonglong *******)0x140ab861f;
        pdb_140a8b180(&ppppppuStack_c8,*pppppppuVar40 + 2,&UNK_14304ae04,0x17);
        if ((int)ppppppuStack_c8 == 2) {
          pppppppuStack_88 = pppppppuStack_c0;
          pppppuStack_d8 = (ulonglong *****)&UNK_14304af60;
                    /* WARNING: Subroutine does not return */
          apppppppuStack_108[1] = (ulonglong *******)0x140ab936d;
          pdb_142dc8170(&UNK_14304c468,0x2b,&pppppppuStack_88,&UNK_14304c448);
        }
      }
      puStack_68 = puStack_a8;
      uStack_60 = (undefined1)uStack_a0;
      uStack_5f = uStack_a0._1_4_;
      uStack_5b = uStack_a0._5_2_;
      pppppppuVar44 = (ulonglong *******)(ulonglong)uStack_a0._7_1_;
      bStack_59 = uStack_a0._7_1_;
      apppppppuStack_80[1] = pppppppuStack_b8;
      uStack_70 = uStack_b0;
      pppppppuStack_88 = (ulonglong *******)ppppppuStack_c8;
      apppppppuStack_80[0] = pppppppuStack_c0;
      apppppppuStack_108[1] = (ulonglong *******)0x140ab8c8a;
      pppppppuVar24 = uStack_b0;
      pdb_140a8a6f0(pppppppuVar38);
      apppppppuStack_108[1] = (ulonglong *******)0x140ab8c93;
      in_XMM0._0_8_ = pdb_1409a5ed0(pppppppuVar38);
      in_XMM0._8_8_ = extraout_XMM0_Qb_07;
      break;
    case 4:
      if (*pppppppuVar40 == (ulonglong ******)0x0) {
        apppppppuStack_108[1] = (ulonglong *******)0x140ab8913;
        pdb_14007ee60();
        apppppppuStack_108[1] = (ulonglong *******)0x140ab8922;
        pppppppuVar24 = (ulonglong *******)pub_1406abab0(0x1a,1);
        uVar22 = _UNK_14304ae2d;
        if (pppppppuVar24 == (ulonglong *******)0x0) goto code_r0x000140ab95d1;
        *(ulonglong *)((longlong)pppppppuVar24 + 10) = CONCAT26(_UNK_14304ae2b,_UNK_14304ae25);
        *(undefined8 *)((longlong)pppppppuVar24 + 0x12) = uVar22;
        ppppppuVar21 = (ulonglong ******)CONCAT62(_UNK_14304ae25,_UNK_14304ae23);
        *pppppppuVar24 = _UNK_14304ae1b;
        pppppppuVar24[1] = ppppppuVar21;
        ppppppuStack_c8 = (ulonglong ******)0x0;
        pppppppuStack_b8 = (ulonglong *******)0x1a;
        puStack_a8 = (undefined *)0x1a;
        uStack_a0 = (undefined4 *)CONCAT71(uStack_a0._1_7_,2);
        uStack_b0 = pppppppuVar24;
      }
      else {
        apppppppuStack_108[1] = (ulonglong *******)0x140ab8547;
        pdb_140a8b180(&ppppppuStack_c8,*pppppppuVar40 + 2,&UNK_14304ae1b,0x1a);
        if ((int)ppppppuStack_c8 == 2) {
          pppppppuStack_88 = pppppppuStack_c0;
          pppppuStack_d8 = (ulonglong *****)&UNK_14304af60;
                    /* WARNING: Subroutine does not return */
          apppppppuStack_108[1] = (ulonglong *******)0x140ab93d9;
          pdb_142dc8170(&UNK_14304c468,0x2b,&pppppppuStack_88,&UNK_14304c448);
        }
      }
      puStack_68 = puStack_a8;
      uStack_60 = (undefined1)uStack_a0;
      uStack_5f = uStack_a0._1_4_;
      uStack_5b = uStack_a0._5_2_;
      pppppppuVar44 = (ulonglong *******)(ulonglong)uStack_a0._7_1_;
      bStack_59 = uStack_a0._7_1_;
      apppppppuStack_80[1] = pppppppuStack_b8;
      uStack_70 = uStack_b0;
      pppppppuStack_88 = (ulonglong *******)ppppppuStack_c8;
      apppppppuStack_80[0] = pppppppuStack_c0;
      apppppppuStack_108[1] = (ulonglong *******)0x140ab89b4;
      pppppppuVar24 = uStack_b0;
      pdb_140a8a6f0(pppppppuVar38);
      apppppppuStack_108[1] = (ulonglong *******)0x140ab89bd;
      in_XMM0._0_8_ = pdb_1409a5ed0(pppppppuVar38);
      in_XMM0._8_8_ = extraout_XMM0_Qb_03;
      break;
    case 5:
      if (*pppppppuVar40 == (ulonglong ******)0x0) {
        apppppppuStack_108[1] = (ulonglong *******)0x140ab8eb5;
        pdb_14007ee60();
        apppppppuStack_108[1] = (ulonglong *******)0x140ab8ec4;
        pppppppuVar24 = (ulonglong *******)pub_1406abab0(0x19,1);
        uVar22 = _UNK_14304ae46;
        if (pppppppuVar24 == (ulonglong *******)0x0) goto code_r0x000140ab95a4;
        *(ulonglong *)((longlong)pppppppuVar24 + 9) = CONCAT17(UNK_14304ae45,_UNK_14304ae3e);
        *(undefined8 *)((longlong)pppppppuVar24 + 0x11) = uVar22;
        ppppppuVar21 = (ulonglong ******)CONCAT71(_UNK_14304ae3e,UNK_14304ae3d);
        *pppppppuVar24 = _UNK_14304ae35;
        pppppppuVar24[1] = ppppppuVar21;
        ppppppuStack_c8 = (ulonglong ******)0x0;
        pppppppuStack_b8 = (ulonglong *******)0x19;
        puStack_a8 = (undefined *)0x19;
        uStack_a0 = (undefined4 *)CONCAT71(uStack_a0._1_7_,2);
        uStack_b0 = pppppppuVar24;
      }
      else {
        apppppppuStack_108[1] = (ulonglong *******)0x140ab86c1;
        pdb_140a8b180(&ppppppuStack_c8,*pppppppuVar40 + 2,&UNK_14304ae35,0x19);
        if ((int)ppppppuStack_c8 == 2) {
          pppppppuStack_88 = pppppppuStack_c0;
          pppppuStack_d8 = (ulonglong *****)&UNK_14304af60;
                    /* WARNING: Subroutine does not return */
          apppppppuStack_108[1] = (ulonglong *******)0x140ab94e7;
          pdb_142dc8170(&UNK_14304c468,0x2b,&pppppppuStack_88,&UNK_14304c448);
        }
      }
      puStack_68 = puStack_a8;
      uStack_60 = (undefined1)uStack_a0;
      uStack_5f = uStack_a0._1_4_;
      uStack_5b = uStack_a0._5_2_;
      pppppppuVar44 = (ulonglong *******)(ulonglong)uStack_a0._7_1_;
      bStack_59 = uStack_a0._7_1_;
      apppppppuStack_80[1] = pppppppuStack_b8;
      uStack_70 = uStack_b0;
      pppppppuStack_88 = (ulonglong *******)ppppppuStack_c8;
      apppppppuStack_80[0] = pppppppuStack_c0;
      apppppppuStack_108[1] = (ulonglong *******)0x140ab8f56;
      pppppppuVar24 = uStack_b0;
      pdb_140a8a6f0(pppppppuVar38);
      apppppppuStack_108[1] = (ulonglong *******)0x140ab8f5f;
      in_XMM0._0_8_ = pdb_1409a5ed0(pppppppuVar38);
      in_XMM0._8_8_ = extraout_XMM0_Qb_11;
      break;
    case 6:
      if (*pppppppuVar40 == (ulonglong ******)0x0) {
        apppppppuStack_108[1] = (ulonglong *******)0x140ab901f;
        pdb_14007ee60();
        apppppppuStack_108[1] = (ulonglong *******)0x140ab902e;
        pppppppuVar24 = (ulonglong *******)pub_1406abab0(0x1b,1);
        uVar22 = _UNK_14304ae61;
        if (pppppppuVar24 == (ulonglong *******)0x0) goto code_r0x000140ab9595;
        *(ulonglong *)((longlong)pppppppuVar24 + 0xb) = CONCAT35(_UNK_14304ae5e,_UNK_14304ae59);
        *(undefined8 *)((longlong)pppppppuVar24 + 0x13) = uVar22;
        ppppppuVar21 = (ulonglong ******)CONCAT53(_UNK_14304ae59,_UNK_14304ae56);
        *pppppppuVar24 = _UNK_14304ae4e;
        pppppppuVar24[1] = ppppppuVar21;
        ppppppuStack_c8 = (ulonglong ******)0x0;
        pppppppuStack_b8 = (ulonglong *******)0x1b;
        puStack_a8 = (undefined *)0x1b;
        uStack_a0 = (undefined4 *)CONCAT71(uStack_a0._1_7_,2);
        uStack_b0 = pppppppuVar24;
      }
      else {
        apppppppuStack_108[1] = (ulonglong *******)0x140ab872d;
        pdb_140a8b180(&ppppppuStack_c8,*pppppppuVar40 + 2,&UNK_14304ae4e,0x1b);
        if ((int)ppppppuStack_c8 == 2) {
          pppppppuStack_88 = pppppppuStack_c0;
          pppppuStack_d8 = (ulonglong *****)&UNK_14304af60;
                    /* WARNING: Subroutine does not return */
          apppppppuStack_108[1] = (ulonglong *******)0x140ab92cb;
          pdb_142dc8170(&UNK_14304c468,0x2b,&pppppppuStack_88,&UNK_14304c448);
        }
      }
      puStack_68 = puStack_a8;
      uStack_60 = (undefined1)uStack_a0;
      uStack_5f = uStack_a0._1_4_;
      uStack_5b = uStack_a0._5_2_;
      pppppppuVar44 = (ulonglong *******)(ulonglong)uStack_a0._7_1_;
      bStack_59 = uStack_a0._7_1_;
      apppppppuStack_80[1] = pppppppuStack_b8;
      uStack_70 = uStack_b0;
      pppppppuStack_88 = (ulonglong *******)ppppppuStack_c8;
      apppppppuStack_80[0] = pppppppuStack_c0;
      apppppppuStack_108[1] = (ulonglong *******)0x140ab90c0;
      pppppppuVar24 = uStack_b0;
      pdb_140a8a6f0(pppppppuVar38);
      apppppppuStack_108[1] = (ulonglong *******)0x140ab90c9;
      in_XMM0._0_8_ = pdb_1409a5ed0(pppppppuVar38);
      in_XMM0._8_8_ = extraout_XMM0_Qb_13;
      break;
    case 7:
      if (*pppppppuVar40 == (ulonglong ******)0x0) {
        apppppppuStack_108[1] = (ulonglong *******)0x140ab8c9e;
        pdb_14007ee60();
        apppppppuStack_108[1] = (ulonglong *******)0x140ab8cad;
        pppppppuVar24 = (ulonglong *******)pub_1406abab0(0x19,1);
        uVar22 = _UNK_14304ae7a;
        if (pppppppuVar24 == (ulonglong *******)0x0) goto code_r0x000140ab95a4;
        *(ulonglong *)((longlong)pppppppuVar24 + 9) = CONCAT17(UNK_14304ae79,_UNK_14304ae72);
        *(undefined8 *)((longlong)pppppppuVar24 + 0x11) = uVar22;
        ppppppuVar21 = (ulonglong ******)CONCAT71(_UNK_14304ae72,UNK_14304ae71);
        *pppppppuVar24 = _UNK_14304ae69;
        pppppppuVar24[1] = ppppppuVar21;
        ppppppuStack_c8 = (ulonglong ******)0x0;
        pppppppuStack_b8 = (ulonglong *******)0x19;
        puStack_a8 = (undefined *)0x19;
        uStack_a0 = (undefined4 *)CONCAT71(uStack_a0._1_7_,2);
        uStack_b0 = pppppppuVar24;
      }
      else {
        apppppppuStack_108[1] = (ulonglong *******)0x140ab8655;
        pdb_140a8b180(&ppppppuStack_c8,*pppppppuVar40 + 2,&UNK_14304ae69,0x19);
        if ((int)ppppppuStack_c8 == 2) {
          pppppppuStack_88 = pppppppuStack_c0;
          pppppuStack_d8 = (ulonglong *****)&UNK_14304af60;
                    /* WARNING: Subroutine does not return */
          apppppppuStack_108[1] = (ulonglong *******)0x140ab94b1;
          pdb_142dc8170(&UNK_14304c468,0x2b,&pppppppuStack_88,&UNK_14304c448);
        }
      }
      puStack_68 = puStack_a8;
      uStack_60 = (undefined1)uStack_a0;
      uStack_5f = uStack_a0._1_4_;
      uStack_5b = uStack_a0._5_2_;
      pppppppuVar44 = (ulonglong *******)(ulonglong)uStack_a0._7_1_;
      bStack_59 = uStack_a0._7_1_;
      apppppppuStack_80[1] = pppppppuStack_b8;
      uStack_70 = uStack_b0;
      pppppppuStack_88 = (ulonglong *******)ppppppuStack_c8;
      apppppppuStack_80[0] = pppppppuStack_c0;
      apppppppuStack_108[1] = (ulonglong *******)0x140ab8d3f;
      pppppppuVar24 = uStack_b0;
      pdb_140a8a6f0(pppppppuVar38);
      apppppppuStack_108[1] = (ulonglong *******)0x140ab8d48;
      in_XMM0._0_8_ = pdb_1409a5ed0(pppppppuVar38);
      in_XMM0._8_8_ = extraout_XMM0_Qb_08;
      break;
    case 8:
      if (*pppppppuVar40 == (ulonglong ******)0x0) {
        apppppppuStack_108[1] = (ulonglong *******)0x140ab9185;
        pdb_14007ee60();
        apppppppuStack_108[1] = (ulonglong *******)0x140ab9194;
        pppppppuVar24 = (ulonglong *******)pub_1406abab0(0x1b,1);
        uVar22 = _UNK_14304ae95;
        if (pppppppuVar24 == (ulonglong *******)0x0) goto code_r0x000140ab9595;
        *(ulonglong *)((longlong)pppppppuVar24 + 0xb) = CONCAT35(_UNK_14304ae92,_UNK_14304ae8d);
        *(undefined8 *)((longlong)pppppppuVar24 + 0x13) = uVar22;
        ppppppuVar21 = (ulonglong ******)CONCAT53(_UNK_14304ae8d,_UNK_14304ae8a);
        *pppppppuVar24 = _UNK_14304ae82;
        pppppppuVar24[1] = ppppppuVar21;
        ppppppuStack_c8 = (ulonglong ******)0x0;
        pppppppuStack_b8 = (ulonglong *******)0x1b;
        puStack_a8 = (undefined *)0x1b;
        uStack_a0 = (undefined4 *)CONCAT71(uStack_a0._1_7_,2);
        uStack_b0 = pppppppuVar24;
      }
      else {
        apppppppuStack_108[1] = (ulonglong *******)0x140ab8799;
        pdb_140a8b180(&ppppppuStack_c8,*pppppppuVar40 + 2,&UNK_14304ae82,0x1b);
        if ((int)ppppppuStack_c8 == 2) {
          pppppppuStack_88 = pppppppuStack_c0;
          pppppuStack_d8 = (ulonglong *****)&UNK_14304af60;
                    /* WARNING: Subroutine does not return */
          apppppppuStack_108[1] = (ulonglong *******)0x140ab9301;
          pdb_142dc8170(&UNK_14304c468,0x2b,&pppppppuStack_88,&UNK_14304c448);
        }
      }
      puStack_68 = puStack_a8;
      uStack_60 = (undefined1)uStack_a0;
      uStack_5f = uStack_a0._1_4_;
      uStack_5b = uStack_a0._5_2_;
      pppppppuVar44 = (ulonglong *******)(ulonglong)uStack_a0._7_1_;
      bStack_59 = uStack_a0._7_1_;
      apppppppuStack_80[1] = pppppppuStack_b8;
      uStack_70 = uStack_b0;
      pppppppuStack_88 = (ulonglong *******)ppppppuStack_c8;
      apppppppuStack_80[0] = pppppppuStack_c0;
      apppppppuStack_108[1] = (ulonglong *******)0x140ab9226;
      pppppppuVar24 = uStack_b0;
      pdb_140a8a6f0(pppppppuVar38);
      apppppppuStack_108[1] = (ulonglong *******)0x140ab922f;
      in_XMM0._0_8_ = pdb_1409a5ed0(pppppppuVar38);
      in_XMM0._8_8_ = extraout_XMM0_Qb_15;
      break;
    case 9:
      if (*pppppppuVar40 == (ulonglong ******)0x0) {
        apppppppuStack_108[1] = (ulonglong *******)0x140ab8a7d;
        pdb_14007ee60();
        apppppppuStack_108[1] = (ulonglong *******)0x140ab8a8c;
        pppppppuVar24 = (ulonglong *******)pub_1406abab0(0x13,1);
        ppppppuVar21 = _UNK_14304aea5;
        if (pppppppuVar24 == (ulonglong *******)0x0) goto code_r0x000140ab9586;
        *pppppppuVar24 = _UNK_14304ae9d;
        pppppppuVar24[1] = ppppppuVar21;
        *(undefined4 *)((longlong)pppppppuVar24 + 0xf) = 0x6b636142;
        ppppppuStack_c8 = (ulonglong ******)0x0;
        pppppppuStack_b8 = (ulonglong *******)0x13;
        puStack_a8 = (undefined *)0x13;
        uStack_a0 = (undefined4 *)CONCAT71(uStack_a0._1_7_,2);
        uStack_b0 = pppppppuVar24;
      }
      else {
        apppppppuStack_108[1] = (ulonglong *******)0x140ab85b3;
        pdb_140a8b180(&ppppppuStack_c8,*pppppppuVar40 + 2,&UNK_14304ae9d,0x13);
        if ((int)ppppppuStack_c8 == 2) {
          pppppppuStack_88 = pppppppuStack_c0;
          pppppuStack_d8 = (ulonglong *****)&UNK_14304af60;
                    /* WARNING: Subroutine does not return */
          apppppppuStack_108[1] = (ulonglong *******)0x140ab947b;
          pdb_142dc8170(&UNK_14304c468,0x2b,&pppppppuStack_88,&UNK_14304c448);
        }
      }
      puStack_68 = puStack_a8;
      uStack_60 = (undefined1)uStack_a0;
      uStack_5f = uStack_a0._1_4_;
      uStack_5b = uStack_a0._5_2_;
      pppppppuVar44 = (ulonglong *******)(ulonglong)uStack_a0._7_1_;
      bStack_59 = uStack_a0._7_1_;
      apppppppuStack_80[1] = pppppppuStack_b8;
      uStack_70 = uStack_b0;
      pppppppuStack_88 = (ulonglong *******)ppppppuStack_c8;
      apppppppuStack_80[0] = pppppppuStack_c0;
      apppppppuStack_108[1] = (ulonglong *******)0x140ab8b1a;
      pppppppuVar24 = uStack_b0;
      pdb_140a8a6f0(pppppppuVar38);
      apppppppuStack_108[1] = (ulonglong *******)0x140ab8b23;
      in_XMM0._0_8_ = pdb_1409a5ed0(pppppppuVar38);
      in_XMM0._8_8_ = extraout_XMM0_Qb_05;
      break;
    case 10:
      if (*pppppppuVar40 == (ulonglong ******)0x0) {
        apppppppuStack_108[1] = (ulonglong *******)0x140ab90d4;
        pdb_14007ee60();
        apppppppuStack_108[1] = (ulonglong *******)0x140ab90e3;
        pppppppuVar24 = (ulonglong *******)pub_1406abab0(0x13,1);
        ppppppuVar21 = _UNK_14304aeb8;
        if (pppppppuVar24 == (ulonglong *******)0x0) goto code_r0x000140ab9586;
        *pppppppuVar24 = _UNK_14304aeb0;
        pppppppuVar24[1] = ppppppuVar21;
        *(undefined4 *)((longlong)pppppppuVar24 + 0xf) = 0x6e65704f;
        ppppppuStack_c8 = (ulonglong ******)0x0;
        pppppppuStack_b8 = (ulonglong *******)0x13;
        puStack_a8 = (undefined *)0x13;
        uStack_a0 = (undefined4 *)CONCAT71(uStack_a0._1_7_,2);
        uStack_b0 = pppppppuVar24;
      }
      else {
        apppppppuStack_108[1] = (ulonglong *******)0x140ab8763;
        pdb_140a8b180(&ppppppuStack_c8,*pppppppuVar40 + 2,&UNK_14304aeb0,0x13);
        if ((int)ppppppuStack_c8 == 2) {
          pppppppuStack_88 = pppppppuStack_c0;
          pppppuStack_d8 = (ulonglong *****)&UNK_14304af60;
                    /* WARNING: Subroutine does not return */
          apppppppuStack_108[1] = (ulonglong *******)0x140ab940f;
          pdb_142dc8170(&UNK_14304c468,0x2b,&pppppppuStack_88,&UNK_14304c448);
        }
      }
      puStack_68 = puStack_a8;
      uStack_60 = (undefined1)uStack_a0;
      uStack_5f = uStack_a0._1_4_;
      uStack_5b = uStack_a0._5_2_;
      pppppppuVar44 = (ulonglong *******)(ulonglong)uStack_a0._7_1_;
      bStack_59 = uStack_a0._7_1_;
      apppppppuStack_80[1] = pppppppuStack_b8;
      uStack_70 = uStack_b0;
      pppppppuStack_88 = (ulonglong *******)ppppppuStack_c8;
      apppppppuStack_80[0] = pppppppuStack_c0;
      apppppppuStack_108[1] = (ulonglong *******)0x140ab9171;
      pppppppuVar24 = uStack_b0;
      pdb_140a8a6f0(pppppppuVar38);
      apppppppuStack_108[1] = (ulonglong *******)0x140ab917a;
      in_XMM0._0_8_ = pdb_1409a5ed0(pppppppuVar38);
      in_XMM0._8_8_ = extraout_XMM0_Qb_14;
      break;
    case 0xb:
      if (*pppppppuVar40 == (ulonglong ******)0x0) {
        apppppppuStack_108[1] = (ulonglong *******)0x140ab8862;
        pdb_14007ee60();
        apppppppuStack_108[1] = (ulonglong *******)0x140ab8871;
        pppppppuVar24 = (ulonglong *******)pub_1406abab0(0x14,1);
        ppppppuVar21 = _UNK_14304aecb;
        if (pppppppuVar24 == (ulonglong *******)0x0) goto code_r0x000140ab95b3;
        *pppppppuVar24 = _UNK_14304aec3;
        pppppppuVar24[1] = ppppppuVar21;
        *(uint *)(pppppppuVar24 + 2) = 0x65736f6c;
        ppppppuStack_c8 = (ulonglong ******)0x0;
        pppppppuStack_b8 = (ulonglong *******)0x14;
        puStack_a8 = (undefined *)0x14;
        uStack_a0 = (undefined4 *)CONCAT71(uStack_a0._1_7_,2);
        uStack_b0 = pppppppuVar24;
      }
      else {
        apppppppuStack_108[1] = (ulonglong *******)0x140ab8511;
        pdb_140a8b180(&ppppppuStack_c8,*pppppppuVar40 + 2,&UNK_14304aec3,0x14);
        if ((int)ppppppuStack_c8 == 2) {
          pppppppuStack_88 = pppppppuStack_c0;
          pppppuStack_d8 = (ulonglong *****)&UNK_14304af60;
                    /* WARNING: Subroutine does not return */
          apppppppuStack_108[1] = (ulonglong *******)0x140ab951d;
          pdb_142dc8170(&UNK_14304c468,0x2b,&pppppppuStack_88,&UNK_14304c448);
        }
      }
      puStack_68 = puStack_a8;
      uStack_60 = (undefined1)uStack_a0;
      uStack_5f = uStack_a0._1_4_;
      uStack_5b = uStack_a0._5_2_;
      pppppppuVar44 = (ulonglong *******)(ulonglong)uStack_a0._7_1_;
      bStack_59 = uStack_a0._7_1_;
      apppppppuStack_80[1] = pppppppuStack_b8;
      uStack_70 = uStack_b0;
      pppppppuStack_88 = (ulonglong *******)ppppppuStack_c8;
      apppppppuStack_80[0] = pppppppuStack_c0;
      apppppppuStack_108[1] = (ulonglong *******)0x140ab88ff;
      pppppppuVar24 = uStack_b0;
      pdb_140a8a6f0(pppppppuVar38);
      apppppppuStack_108[1] = (ulonglong *******)0x140ab8908;
      in_XMM0._0_8_ = pdb_1409a5ed0(pppppppuVar38);
      in_XMM0._8_8_ = extraout_XMM0_Qb_02;
      break;
    case 0xc:
      if (*pppppppuVar40 == (ulonglong ******)0x0) {
        apppppppuStack_108[1] = (ulonglong *******)0x140ab89c8;
        pdb_14007ee60();
        apppppppuStack_108[1] = (ulonglong *******)0x140ab89d7;
        pppppppuVar24 = (ulonglong *******)pub_1406abab0(0x1d,1);
        uVar22 = _UNK_14304aeec;
        if (pppppppuVar24 == (ulonglong *******)0x0) goto code_r0x000140ab95e0;
        *(ulonglong *)((longlong)pppppppuVar24 + 0xd) = CONCAT53(_UNK_14304aee7,_UNK_14304aee4);
        *(undefined8 *)((longlong)pppppppuVar24 + 0x15) = uVar22;
        ppppppuVar21 = (ulonglong ******)CONCAT35(_UNK_14304aee4,_UNK_14304aedf);
        *pppppppuVar24 = _UNK_14304aed7;
        pppppppuVar24[1] = ppppppuVar21;
        ppppppuStack_c8 = (ulonglong ******)0x0;
        pppppppuStack_b8 = (ulonglong *******)0x1d;
        puStack_a8 = (undefined *)0x1d;
        uStack_a0 = (undefined4 *)CONCAT71(uStack_a0._1_7_,2);
        uStack_b0 = pppppppuVar24;
      }
      else {
        apppppppuStack_108[1] = (ulonglong *******)0x140ab857d;
        pdb_140a8b180(&ppppppuStack_c8,*pppppppuVar40 + 2,&UNK_14304aed7,0x1d);
        if ((int)ppppppuStack_c8 == 2) {
          pppppppuStack_88 = pppppppuStack_c0;
          pppppuStack_d8 = (ulonglong *****)&UNK_14304af60;
                    /* WARNING: Subroutine does not return */
          apppppppuStack_108[1] = (ulonglong *******)0x140ab9583;
          pdb_142dc8170(&UNK_14304c468,0x2b,&pppppppuStack_88,&UNK_14304c448);
        }
      }
      puStack_68 = puStack_a8;
      uStack_60 = (undefined1)uStack_a0;
      uStack_5f = uStack_a0._1_4_;
      uStack_5b = uStack_a0._5_2_;
      pppppppuVar44 = (ulonglong *******)(ulonglong)uStack_a0._7_1_;
      bStack_59 = uStack_a0._7_1_;
      apppppppuStack_80[1] = pppppppuStack_b8;
      uStack_70 = uStack_b0;
      pppppppuStack_88 = (ulonglong *******)ppppppuStack_c8;
      apppppppuStack_80[0] = pppppppuStack_c0;
      apppppppuStack_108[1] = (ulonglong *******)0x140ab8a69;
      pppppppuVar24 = uStack_b0;
      pdb_140a8a6f0(pppppppuVar38);
      apppppppuStack_108[1] = (ulonglong *******)0x140ab8a72;
      in_XMM0._0_8_ = pdb_1409a5ed0(pppppppuVar38);
      in_XMM0._8_8_ = extraout_XMM0_Qb_04;
      break;
    case 0xd:
      if (*pppppppuVar40 == (ulonglong ******)0x0) {
        apppppppuStack_108[1] = (ulonglong *******)0x140ab8f6a;
        pdb_14007ee60();
        apppppppuStack_108[1] = (ulonglong *******)0x140ab8f79;
        pppppppuVar24 = (ulonglong *******)pub_1406abab0(0x1b,1);
        uVar22 = _UNK_14304af07;
        if (pppppppuVar24 == (ulonglong *******)0x0) goto code_r0x000140ab9595;
        *(ulonglong *)((longlong)pppppppuVar24 + 0xb) = CONCAT35(_UNK_14304af04,_UNK_14304aeff);
        *(undefined8 *)((longlong)pppppppuVar24 + 0x13) = uVar22;
        ppppppuVar21 = (ulonglong ******)CONCAT53(_UNK_14304aeff,_UNK_14304aefc);
        *pppppppuVar24 = _UNK_14304aef4;
        pppppppuVar24[1] = ppppppuVar21;
        ppppppuStack_c8 = (ulonglong ******)0x0;
        pppppppuStack_b8 = (ulonglong *******)0x1b;
        puStack_a8 = (undefined *)0x1b;
        uStack_a0 = (undefined4 *)CONCAT71(uStack_a0._1_7_,2);
        uStack_b0 = pppppppuVar24;
      }
      else {
        apppppppuStack_108[1] = (ulonglong *******)0x140ab86f7;
        pdb_140a8b180(&ppppppuStack_c8,*pppppppuVar40 + 2,&UNK_14304aef4,0x1b);
        if ((int)ppppppuStack_c8 == 2) {
          pppppppuStack_88 = pppppppuStack_c0;
          pppppuStack_d8 = (ulonglong *****)&UNK_14304af60;
                    /* WARNING: Subroutine does not return */
          apppppppuStack_108[1] = (ulonglong *******)0x140ab93a3;
          pdb_142dc8170(&UNK_14304c468,0x2b,&pppppppuStack_88,&UNK_14304c448);
        }
      }
      puStack_68 = puStack_a8;
      uStack_60 = (undefined1)uStack_a0;
      uStack_5f = uStack_a0._1_4_;
      uStack_5b = uStack_a0._5_2_;
      pppppppuVar44 = (ulonglong *******)(ulonglong)uStack_a0._7_1_;
      bStack_59 = uStack_a0._7_1_;
      apppppppuStack_80[1] = pppppppuStack_b8;
      uStack_70 = uStack_b0;
      pppppppuStack_88 = (ulonglong *******)ppppppuStack_c8;
      apppppppuStack_80[0] = pppppppuStack_c0;
      apppppppuStack_108[1] = (ulonglong *******)0x140ab900b;
      pppppppuVar24 = uStack_b0;
      pdb_140a8a6f0(pppppppuVar38);
      apppppppuStack_108[1] = (ulonglong *******)0x140ab9014;
      in_XMM0._0_8_ = pdb_1409a5ed0(pppppppuVar38);
      in_XMM0._8_8_ = extraout_XMM0_Qb_12;
      break;
    case 0xe:
      if (*pppppppuVar40 == (ulonglong ******)0x0) {
        apppppppuStack_108[1] = (ulonglong *******)0x140ab87ad;
        pdb_14007ee60();
        apppppppuStack_108[1] = (ulonglong *******)0x140ab87bc;
        pppppppuVar24 = (ulonglong *******)pub_1406abab0(0x1c,1);
        uVar22 = _UNK_14304af23;
        if (pppppppuVar24 == (ulonglong *******)0x0) goto code_r0x000140ab95fe;
        *(ulonglong *)((longlong)pppppppuVar24 + 0xc) = CONCAT44(_UNK_14304af1f,_UNK_14304af1b);
        *(undefined8 *)((longlong)pppppppuVar24 + 0x14) = uVar22;
        ppppppuVar21 = (ulonglong ******)CONCAT44(_UNK_14304af1b,_UNK_14304af17);
        *pppppppuVar24 = _UNK_14304af0f;
        pppppppuVar24[1] = ppppppuVar21;
        ppppppuStack_c8 = (ulonglong ******)0x0;
        pppppppuStack_b8 = (ulonglong *******)0x1c;
        puStack_a8 = (undefined *)0x1c;
        uStack_a0 = (undefined4 *)CONCAT71(uStack_a0._1_7_,2);
        uStack_b0 = pppppppuVar24;
      }
      else {
        apppppppuStack_108[1] = (ulonglong *******)0x140ab84db;
        pdb_140a8b180(&ppppppuStack_c8,*pppppppuVar40 + 2,&UNK_14304af0f,0x1c);
        if ((int)ppppppuStack_c8 == 2) {
          pppppppuStack_88 = pppppppuStack_c0;
          pppppuStack_d8 = (ulonglong *****)&UNK_14304af60;
                    /* WARNING: Subroutine does not return */
          apppppppuStack_108[1] = (ulonglong *******)0x140ab9295;
          pdb_142dc8170(&UNK_14304c468,0x2b,&pppppppuStack_88,&UNK_14304c448);
        }
      }
      puStack_68 = puStack_a8;
      uStack_60 = (undefined1)uStack_a0;
      uStack_5f = uStack_a0._1_4_;
      uStack_5b = uStack_a0._5_2_;
      pppppppuVar44 = (ulonglong *******)(ulonglong)uStack_a0._7_1_;
      bStack_59 = uStack_a0._7_1_;
      apppppppuStack_80[1] = pppppppuStack_b8;
      uStack_70 = uStack_b0;
      pppppppuStack_88 = (ulonglong *******)ppppppuStack_c8;
      apppppppuStack_80[0] = pppppppuStack_c0;
      apppppppuStack_108[1] = (ulonglong *******)0x140ab884e;
      pppppppuVar24 = uStack_b0;
      pdb_140a8a6f0(pppppppuVar38);
      apppppppuStack_108[1] = (ulonglong *******)0x140ab8857;
      in_XMM0._0_8_ = pdb_1409a5ed0(pppppppuVar38);
      in_XMM0._8_8_ = extraout_XMM0_Qb_01;
      break;
    case 0xf:
      *(byte *)((longlong)pppppppuVar27 + -0x77) =
           *(byte *)((longlong)pppppppuVar27 + -0x77) - bVar53;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0x10:
      puVar34 = apppppppuStack_108 + 2;
      goto LAB_140aba736;
    case 0x11:
      *(byte *)pppppppuVar20 = *(byte *)pppppppuVar20 + bVar54;
      param_8 = CONCAT44(param_8._4_4_,puStack_68._0_4_);
      param_7 = uStack_70;
      apppppppuStack_108[1] = (ulonglong *******)0x140aba865;
      pdb_140abb950(pppppppuVar31,&UNK_14304b14c,0x16,&param_7);
      pppppppuVar20 = pppppppuVar39;
      pppppppuVar30 = arg0;
      puVar34 = apppppppuStack_108 + 2;
      goto LAB_140aba736;
    case 0x12:
      lVar42 = CONCAT62((int6)((ulonglong)pppppppuVar27 >> 0x10),CONCAT11(bVar29 + bVar54,bVar53));
      pppppppuVar25 = (ulonglong *******)(ulonglong)(uint)((int)pppppppuVar25 + (int)pppppppuVar39);
      apppppppuStack_108[2] = (ulonglong *******)0x140aba8a7;
      (**(code **)(uVar19 + 0x18b1052b4))();
      if ((int)lVar42 != 0) {
        apppppppuStack_108[2] = (ulonglong *******)0x140aba8c4;
        pdb_140a8aa00(lVar42 + 0x10,&UNK_14304b070,0xb);
      }
      *(uint *)(pppppppuVar25 + 0xb) = *(uint *)(pppppppuVar41 + 4);
      pppppppuVar25[10] = pppppppuVar41[3];
      pppppppuVar20 = pppppppuVar39;
      pppppppuVar30 = arg0;
      puVar34 = (undefined8 *)auStack_f0;
      pppppppuVar38 = pppppppuVar41;
      goto LAB_140aba736;
    case 0x13:
      apppppppuStack_108[1] = (ulonglong *******)0x140aba7ce;
      pdb_140abb950(pppppppuVar31,&UNK_14304b03c);
      *(undefined4 *)CONCAT71(param_6._1_7_,(byte)param_6) = param_15._0_4_;
      param_14[0xa8] = 0;
      param_14[0xa9] = 0;
      param_14[0xaa] = 0;
      param_14[0xab] = 0;
      pppppppuVar20 = pppppppuVar39;
      pppppppuVar30 = arg0;
      puVar34 = apppppppuStack_108 + 2;
      goto LAB_140aba736;
    case 0x14:
      apppppppuStack_108[1] = (ulonglong *******)0x140aba9db;
      pdb_140abb950(pppppppuVar31,&UNK_14304b051);
      *(undefined4 *)CONCAT71(param_6._1_7_,(byte)param_6) = param_15._0_4_;
      param_14[0xac] = 0;
      param_14[0xad] = 0;
      param_14[0xae] = 0;
      param_14[0xaf] = 0;
      pppppppuVar20 = pppppppuVar39;
      pppppppuVar30 = arg0;
      puVar34 = apppppppuStack_108 + 2;
      goto LAB_140aba736;
    case 0x15:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0x16:
      pbVar32 = (byte *)((longlong)pppppppuVar27 + -1);
      apppppppuStack_108[1] = (ulonglong *******)0x140aba923;
      (**(code **)(uVar19 + 0x18b1052b4))();
      pppppppuVar20 = (ulonglong *******)((ulonglong)pppppppuVar39 & 0xffffffff);
      pppppppuVar30 = arg0;
      puVar34 = apppppppuStack_108 + 2;
      if (pbVar32 != (byte *)0x0) {
        apppppppuStack_108[1] = (ulonglong *******)0x140aba94a;
        pdb_140a8aa00(pbVar32 + 0x10,&UNK_14304b08b,0xd);
        pppppppuVar20 = pppppppuVar39;
        puVar34 = apppppppuStack_108 + 2;
      }
      goto LAB_140aba736;
    case 0x17:
      *(byte *)((longlong)pppppppuVar27 + 2) =
           *(byte *)((longlong)pppppppuVar27 + 2) & (byte)pppppppuVar31;
      goto code_r0x000140aba6c3;
    case 0x18:
      *(byte *)pppppppuVar20 = *(byte *)pppppppuVar20 + bVar54;
      *(byte *)((longlong)pppppppuVar31 + -0x73) =
           *(byte *)((longlong)pppppppuVar31 + -0x73) + bVar53;
      pppppppuVar20 = (ulonglong *******)((ulonglong)pppppppuVar20 | 0x9b);
      puVar33 = apppppppuStack_108 + 2;
      goto code_r0x000140aba6c3;
    case 0x19:
      if (*pppppppuVar31 == (ulonglong ******)0x0) {
        apppppppuStack_108[1] = (ulonglong *******)0x140abaac5;
        pdb_14007ee60();
        apppppppuStack_108[1] = (ulonglong *******)0x140abaad4;
        pbVar32 = pub_1406abab0(0x18,1);
        uVar22 = _UNK_14304b0a0;
        if (pbVar32 == (byte *)0x0) goto code_r0x000140abb0b1;
        *(undefined8 *)pbVar32 = _UNK_14304b098;
        *(undefined8 *)(pbVar32 + 8) = uVar22;
        pbVar32[0x10] = 0x69;
        pbVar32[0x11] = 0x6c;
        pbVar32[0x12] = 0x65;
        pbVar32[0x13] = 0x73;
        pbVar32[0x14] = 0x4c;
        pbVar32[0x15] = 0x61;
        pbVar32[0x16] = 0x6e;
        pbVar32[0x17] = 100;
        param_9 = 0x18;
        param_11 = (ulonglong *****)0x18;
        param_12 = (ulonglong *****)CONCAT71(param_12._1_7_,2);
        param_10 = pbVar32;
      }
      else {
        apppppppuStack_108[1] = (ulonglong *******)0x140aba822;
        pdb_140a8b180(&param_7,*pppppppuVar31 + 2,&UNK_14304b098,0x18);
        if ((int)param_7 == 2) {
          pppppuStack_d8 = (ulonglong *****)&UNK_14304b0b0;
                    /* WARNING: Subroutine does not return */
          apppppppuStack_108[1] = (ulonglong *******)0x140abb06a;
          pdb_142dc8170(&UNK_14304c468,0x2b,&stack0xfffffffffffffff8,&UNK_14304c448);
        }
      }
      pppppuStackX_18 = param_11;
      pppppuStackX_20 = param_12;
      uStackX_8 = param_9;
      uStackX_10 = param_10;
      param_8 = CONCAT44(param_8._4_4_,puStack_68._0_4_);
      param_7 = uStack_70;
      apppppppuStack_108[1] = (ulonglong *******)0x140ababc7;
      pdb_140a8e190(&stack0xfffffffffffffff8,&param_7);
      apppppppuStack_108[1] = (ulonglong *******)0x140ababe0;
      pdb_140a8e730(&stack0xfffffffffffffff8,&UNK_14304b0c8,0xe);
      apppppppuStack_108[1] = (ulonglong *******)0x140ababe9;
      pdb_140a8a6f0(&stack0xfffffffffffffff8);
      apppppppuStack_108[1] = (ulonglong *******)0x140ababf2;
      pdb_1409a5ed0(&stack0xfffffffffffffff8);
      goto code_r0x000140abad1d;
    case 0x1a:
      if ((int)pppppppuVar30 == 0) {
        apppppppuStack_108[1] = (ulonglong *******)0x140ababfd;
        pdb_14007ee60();
        apppppppuStack_108[1] = (ulonglong *******)0x140abac0c;
        pbVar32 = pub_1406abab0(0x18,1);
        uVar22 = _UNK_14304b0f8;
        if (pbVar32 == (byte *)0x0) {
          apppppppuStack_108[1] = (ulonglong *******)0x140abb0d2;
          pdb_142dc7e2a(1,0x18);
          goto LAB_140abb11e;
        }
        *(undefined8 *)pbVar32 = _UNK_14304b0f0;
        *(undefined8 *)(pbVar32 + 8) = uVar22;
        pbVar32[0x10] = 0x6e;
        pbVar32[0x11] = 0x73;
        pbVar32[0x12] = 0x41;
        pbVar32[0x13] = 0x70;
        pbVar32[0x14] = 0x70;
        pbVar32[0x15] = 0x65;
        pbVar32[0x16] = 0x61;
        pbVar32[0x17] = 0x72;
        param_7 = (ulonglong *******)0x0;
        param_9 = 0x18;
        param_11 = (ulonglong *****)0x18;
        param_12 = (ulonglong *****)CONCAT71(param_12._1_7_,2);
        param_10 = pbVar32;
      }
      else {
        apppppppuStack_108[1] = (ulonglong *******)0x140abaa73;
        pdb_140a8b180(&param_7,pppppppuVar30 + 2,&UNK_14304b0f0,0x18);
        if ((int)param_7 == 2) {
          pppppuStack_d8 = (ulonglong *****)&UNK_14304b108;
                    /* WARNING: Subroutine does not return */
          apppppppuStack_108[1] = (ulonglong *******)0x140abb031;
          pdb_142dc8170(&UNK_14304c468,0x2b,&stack0xfffffffffffffff8,&UNK_14304c448);
        }
      }
      pppppuStackX_18 = param_11;
      pppppuStackX_20 = param_12;
      uStackX_8 = param_9;
      uStackX_10 = param_10;
      apppppppuStack_108[1] = (ulonglong *******)0x140abacfd;
      pdb_140a8e730(&stack0xfffffffffffffff8,&UNK_14304b120,0xe);
      apppppppuStack_108[1] = (ulonglong *******)0x140abad0a;
      pdb_140a8e190(&stack0xfffffffffffffff8,&uStack_70);
      apppppppuStack_108[1] = (ulonglong *******)0x140abad13;
      pdb_140a8a6f0(&stack0xfffffffffffffff8);
      apppppppuStack_108[1] = (ulonglong *******)0x140abad1c;
      pdb_1409a5ed0(&stack0xfffffffffffffff8);
code_r0x000140abad1d:
      pppppppuVar20 = pppppppuVar39;
      pppppppuVar30 = arg0;
      puVar34 = apppppppuStack_108 + 2;
      pppppppuVar38 = (ulonglong *******)&stack0xfffffffffffffff8;
      if (uStackX_8 != 0) {
        apppppppuStack_108[1] = (ulonglong *******)0x140abad3f;
        pub_1406abac0(uStackX_10,uStackX_8,1);
        puVar34 = apppppppuStack_108 + 2;
      }
LAB_140aba736:
      do {
        if (((pppppppuVar20 != (ulonglong *******)0x0) &&
            (pppppppuVar20 != (ulonglong *******)pppppppuVar25[0x1c])) ||
           ((pppppppuVar30 != (ulonglong *******)0x0 &&
            (pppppppuVar20 = pppppppuVar30, pppppppuVar30 != (ulonglong *******)pppppppuVar25[3]))))
        {
          *ppppppuVar50 = (ulonglong *****)((longlong)*ppppppuVar50 + 1);
          UNRECOVERED_JUMPTABLE =
               (code *)((longlong)
                        (int)*(uint *)((longlong)pppppppuVar17 +
                                      (ulonglong)*(byte *)(pppppppuVar20 + 1) * 4) +
                       (longlong)pppppppuVar17);
                    /* WARNING: Could not recover jumptable at 0x000140aba781. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          pppppppuVar25 = (ulonglong *******)(*UNRECOVERED_JUMPTABLE)(UNRECOVERED_JUMPTABLE);
          return pppppppuVar25;
        }
        if (*(char *)((longlong)pppppppuVar25 + 0xf7) == '\x02') {
          *(undefined4 *)pppppppuVar25[0x15] = *(undefined4 *)(pppppppuVar25 + 0x1e);
          ppppppuVar21 = pppppppuVar25[0x1d];
          puVar34[0xffffffffffffffff] = 0x140abad68;
          pdb_140a87f70(ppppppuVar21);
        }
        else {
          *(undefined4 *)pppppppuVar25 = *(undefined4 *)(pppppppuVar25 + 0xb);
          pppppppuVar25[-1] = pppppppuVar25[10];
          *(undefined4 *)pppppppuVar25[0x15] = *(undefined4 *)(pppppppuVar25 + 0x1e);
          ppppppuVar21 = pppppppuVar25[0x1d];
          puVar34[0xffffffffffffffff] = 0x140abad97;
          pdb_140a87e10(ppppppuVar21);
          ppppppuVar21 = pppppppuVar25[0x1d];
          pppppuVar9 = ppppppuVar21[2];
          pppppuVar8 = ppppppuVar21[5];
          if (pppppuVar9 <= pppppuVar8) {
                    /* WARNING: Subroutine does not return */
            puVar34[0xffffffffffffffff] = 0x140abb0e1;
            pdb_142dc81f2(pppppuVar8,pppppuVar9,&UNK_143043a80);
          }
          pppppuVar9 = ppppppuVar21[1];
          puVar34[0xffffffffffffffff] = 0x140abadc5;
          pdb_140a8e190(pppppuVar9 + (longlong)pppppuVar8 * 6,pppppppuVar25 + -1);
          puVar34[0xffffffffffffffff] = 0x140abade2;
          pdb_140de8220();
          ppppppuVar21 = pppppppuVar25[0x1d];
          pppppuVar9 = ppppppuVar21[2];
          pppppuVar8 = ppppppuVar21[5];
          if (pppppuVar9 <= pppppuVar8) {
                    /* WARNING: Subroutine does not return */
            puVar34[0xffffffffffffffff] = 0x140abb0f0;
            pdb_142dc81f2(pppppuVar8,pppppuVar9,&UNK_143043a80);
          }
          pppppuVar9 = ppppppuVar21[1];
          puVar34[0xffffffffffffffff] = 0x140abae2f;
          pdb_140a8e730(pppppuVar9 + (longlong)pppppuVar8 * 6,&UNK_14304b027,0xd);
          ppppppuVar21 = pppppppuVar25[0x1d];
          pppppuVar9 = ppppppuVar21[2];
          pppppuVar8 = ppppppuVar21[5];
          if (pppppuVar9 <= pppppuVar8) {
                    /* WARNING: Subroutine does not return */
            puVar34[0xffffffffffffffff] = 0x140abb10e;
            pdb_142dc81f2(pppppuVar8,pppppuVar9,&UNK_143043a80);
          }
          pppppuVar9 = ppppppuVar21[1];
          puVar34[0xffffffffffffffff] = 0x140abae75;
          pdb_140a8e730(pppppuVar9 + (longlong)pppppuVar8 * 6,&UNK_14304b034,8);
        }
        if (((ulonglong)pppppppuVar25[0xc] & 1) == 0) {
          *(undefined4 *)pppppppuVar25[0x15] = *(undefined4 *)(pppppppuVar25 + 0x1e);
          ppppppuVar21 = pppppppuVar25[0x1d];
          puVar34[0xffffffffffffffff] = 0x140abaef9;
          pdb_140a87f70(ppppppuVar21 + 7);
        }
        else {
          *(undefined4 *)(pppppppuVar25 + -2) = *(undefined4 *)(pppppppuVar25 + 9);
          pppppppuVar25[-3] = pppppppuVar25[8];
          *(undefined4 *)pppppppuVar25[0x15] = *(undefined4 *)(pppppppuVar25 + 0x1e);
          ppppppuVar21 = pppppppuVar25[0x1d];
          puVar34[0xffffffffffffffff] = 0x140abaea9;
          pdb_140a87e10(ppppppuVar21 + 7);
          ppppppuVar21 = pppppppuVar25[0x1d];
          pppppuVar9 = ppppppuVar21[9];
          pppppuVar8 = ppppppuVar21[0xc];
          if (pppppuVar9 <= pppppuVar8) {
                    /* WARNING: Subroutine does not return */
            puVar34[0xffffffffffffffff] = 0x140abb0ff;
            pdb_142dc81f2(pppppuVar8,pppppuVar9,&UNK_143043a80);
          }
          pppppuVar9 = ppppppuVar21[8];
          puVar34[0xffffffffffffffff] = 0x140abaed7;
          pdb_140a8e190(pppppuVar9 + (longlong)pppppuVar8 * 6,pppppppuVar25 + -3);
        }
        if (((ulonglong)pppppppuVar25[0xd] & 1) == 0) {
          *(undefined4 *)pppppppuVar25[0x15] = *(undefined4 *)(pppppppuVar25 + 0x1e);
          ppppppuVar21 = pppppppuVar25[0x1d];
          puVar34[0xffffffffffffffff] = 0x140abaf83;
          pppppppuVar24 = (ulonglong *******)pdb_140a87f70(ppppppuVar21 + 0xe);
        }
        else {
          *(undefined4 *)(pppppppuVar25 + -4) = *(undefined4 *)(pppppppuVar25 + 7);
          pppppppuVar25[-5] = pppppppuVar25[6];
          *(undefined4 *)pppppppuVar25[0x15] = *(undefined4 *)(pppppppuVar25 + 0x1e);
          ppppppuVar21 = pppppppuVar25[0x1d];
          puVar34[0xffffffffffffffff] = 0x140abaf2d;
          pdb_140a87e10(ppppppuVar21 + 0xe);
          ppppppuVar21 = pppppppuVar25[0x1d];
          pppppuVar9 = ppppppuVar21[0x10];
          pppppuVar8 = ppppppuVar21[0x13];
          if (pppppuVar9 <= pppppuVar8) {
                    /* WARNING: Subroutine does not return */
            puVar34[0xffffffffffffffff] = 0x140abb11d;
            pdb_142dc81f2(pppppuVar8,pppppuVar9,&UNK_143043a80);
          }
          pppppuVar9 = ppppppuVar21[0xf];
          puVar34[0xffffffffffffffff] = 0x140abaf61;
          pppppppuVar24 =
               (ulonglong *******)
               pdb_140a8e190(pppppuVar9 + (longlong)pppppuVar8 * 6,pppppppuVar25 + -5);
        }
        if (*(char *)((longlong)pppppppuVar25 + 0xf6) == '\0') {
          return pppppppuVar24;
        }
        puVar34[0xffffffffffffffff] = 0x140abaf92;
        ppppppuVar21 = (ulonglong ******)pdb_140e97000();
        if (*(char *)(ppppppuVar21 + 0xd) != '\x01') {
          puVar34[0xffffffffffffffff] = 0x140abb09b;
          ppppppuVar21 = (ulonglong ******)pdb_142d8ec20(ppppppuVar21,0);
          if (ppppppuVar21 == (ulonglong ******)0x0) {
LAB_140abb0a4:
            puVar34[0xffffffffffffffff] = 0x140abb0b0;
            pdb_142dc7890(&UNK_143326860);
code_r0x000140abb0b1:
            puVar34[0xffffffffffffffff] = 0x140abb0c0;
            pdb_142dc7e2a(1,0x18);
LAB_140abb11e:
                    /* WARNING: Does not return */
            UNRECOVERED_JUMPTABLE = (code *)invalidInstructionException();
            (*UNRECOVERED_JUMPTABLE)();
          }
        }
        if (*ppppppuVar21 == (ulonglong *****)0x0) {
          *ppppppuVar21 = (ulonglong *****)0xffffffffffffffff;
          ppppppuVar50 = pppppppuVar25[5];
          pppppppuVar25[0x1c] = ppppppuVar21;
          puVar34[0xffffffffffffffff] = 0x140abafc1;
          pdb_140e95370(ppppppuVar21 + 1,ppppppuVar50);
          pppppppuVar25 = (ulonglong *******)pppppppuVar25[0x1c];
          *pppppppuVar25 = (ulonglong ******)((longlong)*pppppppuVar25 + 1);
          return pppppppuVar25;
        }
        do {
          puVar34[0xffffffffffffffff] = 0x140abb07c;
          uVar22 = pdb_142dc8090(&UNK_143326a50);
          puVar34[0xffffffffffffffff] = 0x140abb086;
          ppppppuVar21 = (ulonglong ******)pdb_142d8ec20(uVar22,0);
          if (ppppppuVar21 == (ulonglong ******)0x0) goto LAB_140abb0a4;
        } while (*ppppppuVar21 != (ulonglong *****)0x0);
        *ppppppuVar21 = (ulonglong *****)0xffffffffffffffff;
        puVar34[4] = pppppppuVar38;
        puVar34[6] = 0;
        puVar34[5] = 1;
        ppppppuVar11 = pppppppuVar25[0x1c];
        pppppppuVar25[0x1c] = ppppppuVar21;
        puVar34[0xffffffffffffffff] = 0x140aba5ec;
        ppppppuVar50 = (ulonglong ******)
                       pdb_140e94f10(ppppppuVar21 + 1,pppppppuVar40,ppppppuVar11,ppppppuVar50);
        *pppppppuVar25[0x1c] = (ulonglong *****)((longlong)*pppppppuVar25[0x1c] + 1);
        pppppppuVar25[5] = ppppppuVar50;
        pppppppuVar25[-8] = ppppppuVar50;
        pppppppuVar25[-9] = (ulonglong ******)0x1;
        ppppppuVar50 = *arg0;
        fVar64 = *(float *)(ppppppuVar50 + 0xb);
        uVar16 = *(uint *)((longlong)pppppppuVar39 + 0x1c);
        ppppppuVar21 = pppppppuVar39[2];
        *(uint *)ppppppuVar21 = uVar16;
        ppppppuVar11 = *pppppppuVar39;
        *(float *)(ppppppuVar11 + 0x15) = fVar64 + *(float *)(ppppppuVar11 + 0x15);
        pppppppuVar25[4] = ppppppuVar50;
        fVar64 = *(float *)(ppppppuVar50 + 0xb);
        *(uint *)(pppppppuVar25 + 0x1e) = uVar16;
        pppppppuVar25[0x15] = ppppppuVar21;
        *(uint *)ppppppuVar21 = uVar16;
        fVar62 = *(float *)((longlong)ppppppuVar11 + 0xac);
        pppppppuVar25[0x1d] = ppppppuVar11;
        *(float *)((longlong)ppppppuVar11 + 0xac) = fVar64 + fVar62;
        ppppppuVar50 = *pppppppuVar31;
        pppppppuVar27 = (ulonglong *******)pppppppuVar31[1];
        ppppppuVar21 = (ulonglong ******)*ppppppuVar50;
        pppppppuVar38 = (ulonglong *******)0x0;
        pppppppuVar24 = (ulonglong *******)((longlong)ppppppuVar21 - (longlong)pppppppuVar27[3]);
        if (ppppppuVar21 < pppppppuVar27[3]) {
          pppppppuVar24 = pppppppuVar38;
        }
        pppppppuVar41 = (ulonglong *******)((longlong)ppppppuVar21 - (longlong)pppppppuVar27[7]);
        if (ppppppuVar21 < pppppppuVar27[7]) {
          pppppppuVar41 = pppppppuVar38;
        }
        pppppppuVar20 = (ulonglong *******)(pppppppuVar27[1] + (longlong)pppppppuVar24 * 5);
        pppppppuVar44 = (ulonglong *******)((longlong)pppppppuVar27[2] - (longlong)pppppppuVar24);
        if (pppppppuVar27[2] < pppppppuVar24) {
          pppppppuVar20 = (ulonglong *******)0x8;
          pppppppuVar44 = pppppppuVar38;
        }
        pppppppuVar30 = (ulonglong *******)(pppppppuVar27[5] + (longlong)pppppppuVar41 * 5);
        pppppppuVar24 = (ulonglong *******)pppppppuVar27[6];
        if (pppppppuVar24 < pppppppuVar41) {
          pppppppuVar30 = (ulonglong *******)0x8;
        }
        pppppppuVar25[0xc] = (ulonglong ******)0x0;
        puVar33 = puVar34;
        pppppppuVar49 = (ulonglong *******)((longlong)pppppppuVar24 - (longlong)pppppppuVar41);
        if (pppppppuVar24 < pppppppuVar41) {
          pppppppuVar49 = pppppppuVar38;
        }
code_r0x000140aba6c3:
        *ppppppuVar50 =
             (ulonglong *****)
             ((longlong)pppppppuVar27[8] + (-(longlong)pppppppuVar44 - (longlong)pppppppuVar49));
        pppppppuVar25[0x1c] = (ulonglong ******)(pppppppuVar20 + (longlong)pppppppuVar44 * 5);
        pppppppuVar25[3] = (ulonglong ******)(pppppppuVar30 + (longlong)pppppppuVar49 * 5);
        pppppppuVar31 = (ulonglong *******)*pppppppuVar17;
        *(undefined1 *)((longlong)pppppppuVar25 + 0xf7) = 2;
        pppppppuVar17 = (ulonglong *******)&UNK_14304c7a8;
        pppppppuVar25[0xd] = (ulonglong ******)0x0;
        puVar34 = puVar33;
      } while( true );
    case 0x1b:
      *(byte *)pppppppuVar20 = *(byte *)pppppppuVar20 + bVar54;
      *(byte *)pppppppuVar27 = *(byte *)pppppppuVar27 + (char)((ulonglong)pppppppuVar30 >> 8);
      pbVar32 = &UNK_14304c6f9 + uVar19;
      *pbVar32 = *pbVar32 >> 5 | *pbVar32 << 3;
      pppppppuVar20 = (ulonglong *******)(ulonglong)((int)fVar65 + 0xcfda6fd);
      goto code_r0x000140abc4c4;
    case 0x1c:
      goto code_r0x000140abc4ed;
    case 0x1d:
      param_24 = 0;
      if (!bVar52) {
        param_24 = unaff_R14;
      }
      goto code_r0x000140abc5e9;
    case 0x1e:
      *(byte *)pppppppuVar20 = *(byte *)pppppppuVar20 + bVar54;
      (&UNK_14304c77b)[uVar19] = (&UNK_14304c77b)[uVar19] + bVar53;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0x1f:
code_r0x000140abc4c4:
      uStack_50 = pppppppuVar27;
      pppppppuVar27 = uStack_50;
      goto joined_r0x000140abd06a;
    case 0x20:
      (&UNK_14304c77b)[uVar19] = (&UNK_14304c77b)[uVar19] + bVar53;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0x21:
    case 0x22:
    case 0x23:
LAB_140abd477:
                    /* WARNING: Does not return */
      UNRECOVERED_JUMPTABLE = (code *)invalidInstructionException();
      (*UNRECOVERED_JUMPTABLE)();
    case 0x24:
                    /* WARNING: Call to offcut address within same function */
      apppppppuStack_108[1] = (ulonglong *******)0x140abc573;
      lVar42 = func_0x000140abc62b();
      *(char *)(lVar42 + 0xf) = *(char *)(lVar42 + 0xf) + (char)pppppppuVar27;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    default:
      *(uint *)((byte *)((longlong)pppppppuVar39 + 0x45) + (longlong)pppppppuVar27) =
           *(int *)((byte *)((longlong)pppppppuVar39 + 0x45) + (longlong)pppppppuVar27) + uVar16;
                    /* WARNING: Call to offcut address within same function */
      apppppppuStack_108[1] = (ulonglong *******)0x140abc5cb;
      lVar42 = func_0x000140abc683();
      *(char *)(lVar42 + 0xf) = *(char *)(lVar42 + 0xf) + (char)pppppppuVar27;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0x2a:
      param_24 = 0;
      if (!bVar52) {
        param_24 = unaff_RSI;
      }
code_r0x000140abc5e9:
      bVar51 = false;
      param_25 = (ulonglong ******)CONCAT17(bVar43,param_25._0_7_);
      ppppppuVar50 = unaff_retaddr;
      goto code_r0x000140abc600;
    case 0x2e:
      (&UNK_14304c6f5)[uVar19] = (&UNK_14304c6f5)[uVar19] + bVar53;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0x2f:
      goto code_r0x000140ac0848;
    case 0x30:
      goto code_r0x000140ac0c7a;
    case 0x31:
      *(byte *)(pppppppuVar27 + -9) = *(byte *)(pppppppuVar27 + -9) + bVar54;
      apppppppuStack_108[1] = (ulonglong *******)0x140ac0d2c;
      pdb_140abb950((undefined4)param_32);
      goto LAB_140abfc90;
    case 0x32:
      param_35._0_4_ = *(float *)(pppppppuVar39 + 4);
      param_34 = pppppppuVar39[3];
      apppppppuStack_108[1] = (ulonglong *******)0x140ac0c65;
      pdb_140a8e190((byte *)((longlong)pppppppuVar27 +
                            *(longlong *)(&UNK_14304c774 + uVar19 + (longlong)pppppppuVar31)),
                    &param_34);
      arg0 = *(ulonglong ********)((longlong)(param_40 + 5) + (longlong)pppppppuVar31);
      bVar51 = arg0 < *(ulonglong ********)((longlong)(param_40 + 2) + (longlong)pppppppuVar31);
      pppppppuVar20 = param_40;
code_r0x000140ac0c7a:
      if (!bVar51) {
                    /* WARNING: Subroutine does not return */
        apppppppuStack_108[1] = (ulonglong *******)0x140ac2b13;
        pdb_142dc81f2(arg0);
      }
      lVar42 = *(longlong *)((longlong)(pppppppuVar20 + 1) + (longlong)pppppppuVar31);
      apppppppuStack_108[1] = (ulonglong *******)0x140ac0c9b;
      pdb_140de8220();
      apppppppuStack_108[1] = (ulonglong *******)0x140ac0ccc;
      pdb_140a8e730(lVar42 + (longlong)arg0 * 0x30,&UNK_14304b027,0xd);
      param_5 = (ulonglong ****)CONCAT71((int7)((ulonglong)param_5 >> 8),(byte)param_5 | bVar36);
      pppppppuVar38 = (ulonglong *******)(ulonglong)(bVar36 ^ 1);
code_r0x000140ac0ce2:
      pppppuStackX_20 =
           (ulonglong *****)
           CONCAT71((int7)((ulonglong)pppppuStackX_20 >> 8),
                    (byte)pppppuStackX_20 | (byte)pppppppuVar38);
      puVar35 = apppppppuStack_108 + 2;
      goto LAB_140abfc90;
    case 0x33:
      param_34 = pppppppuVar39[3];
      apppppppuStack_108[1] = (ulonglong *******)0x140ac0dcb;
      param_35._0_4_ = fVar65;
      pdb_140abb950(CONCAT44(param_32._4_4_,(undefined4)param_32),&UNK_14304bbb8,0x16,&param_34);
      puVar35 = apppppppuStack_108 + 2;
      goto LAB_140abfc90;
    case 0x34:
      *(uint *)pppppppuVar20 = *(uint *)pppppppuVar20 + (int)fVar65;
      bVar51 = CARRY1(uStack_50._3_1_,bVar53);
      cVar3 = uStack_50._3_1_ + bVar53;
      uStack_50._0_4_ = CONCAT13(cVar3,(undefined3)uStack_50);
      uStack_70 = (ulonglong *******)
                  CONCAT17((uStack_70._7_1_ - bVar43) - bVar51,(undefined7)uStack_70);
      puVar33 = apppppppuStack_108 + 1;
      cVar3 = '\x15';
      do {
        pppppppuVar25 = pppppppuVar25 + -1;
        puVar33 = puVar33 + -1;
        *puVar33 = *pppppppuVar25;
        cVar3 = cVar3 + -1;
      } while ('\0' < cVar3);
      *(byte *)((longlong)pppppppuVar27 + 0x29) = *(byte *)((longlong)pppppppuVar27 + 0x29) ^ bVar53
      ;
      pbVar32 = (byte *)((longlong)pppppppuVar27 + 0xf);
      *pbVar32 = *pbVar32 << 1 | (char)*pbVar32 < '\0';
      return (ulonglong *******)((ulonglong)pppppppuVar38 & 0xffffffff);
    case 0x35:
      if (SCARRY8(uVar19,0x14304c76c)) {
        uVar19 = (ulonglong)(((int)fVar65 + 0xfdc89979U) - (uint)bVar51);
        goto code_r0x000140ac0899;
      }
      apppppppuStack_108[1] = (ulonglong *******)0x140ac08c5;
      piVar23 = (int *)(**(code **)(&UNK_142f89255 + uVar19))();
      *(int *)((longlong)pppppppuVar31 + -0x7a76dfb9) =
           *(int *)((longlong)pppppppuVar31 + -0x7a76dfb9) + -1;
      *piVar23 = *piVar23 + (int)piVar23;
      pbVar32 = (byte *)((longlong)piVar23 + -0x75);
      bVar54 = *pbVar32;
      *pbVar32 = *pbVar32 + (byte)pppppppuVar27;
      *(byte *)((longlong)pppppppuVar24 + -0x77) =
           (*(byte *)((longlong)pppppppuVar24 + -0x77) - (char)pppppppuVar44) -
           CARRY1(bVar54,(byte)pppppppuVar27);
      apppppppuStack_108[1] = (ulonglong *******)0x140ac08fa;
      pdb_140abb950(CONCAT44(param_32._4_4_,(undefined4)param_32),0x4304bc48,0x19,&param_34);
      puVar35 = apppppppuStack_108 + 2;
      goto LAB_140abfc90;
    case 0x36:
      uVar16 = in((short)pppppppuVar30);
      if (bVar51 || bVar52) {
        *(byte *)pppppppuVar39 = *(byte *)pppppppuVar39;
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      *(char *)((ulonglong)uVar16 - 0x77) = *(char *)((ulonglong)uVar16 - 0x77) + bVar53;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0x37:
      goto code_r0x000140ac0486;
    case 0x38:
      goto code_r0x000140ac0ce2;
    case 0x39:
      puVar1 = (uint *)((longlong)pppppppuVar27 + 0x29);
      *puVar1 = *puVar1 >> 1 | (uint)((*puVar1 & 1) != 0) << 0x1f;
      UNRECOVERED_JUMPTABLE = (code *)swi(1);
      pppppppuVar25 = (ulonglong *******)(*UNRECOVERED_JUMPTABLE)();
      return pppppppuVar25;
    case 0x3a:
      *(byte *)pppppppuVar20 = *(byte *)pppppppuVar20 + bVar54;
      goto code_r0x000140ac1fb5;
    case 0x3b:
      *(byte *)pppppppuVar20 = *(byte *)pppppppuVar20 + bVar54;
      if (pppppppuVar30 <= pppppppuVar27) {
                    /* WARNING: Subroutine does not return */
        apppppppuStack_108[1] = (ulonglong *******)0x140ac2a5f;
        pdb_142dc81f2();
      }
      apppppppuStack_108[1] = (ulonglong *******)0x140ac042e;
      pdb_140a8e730((longlong)pppppppuVar27 * 0x30 + *(longlong *)(&UNK_14304cb64 + uVar19),
                    &UNK_14304bc40,8);
      ppppppuVar50 = param_40[0x83];
      if (param_40[0x80] <= ppppppuVar50) {
                    /* WARNING: Subroutine does not return */
        apppppppuStack_108[1] = (ulonglong *******)0x140ac2ab0;
        pdb_142dc81f2(ppppppuVar50,param_40[0x80],&UNK_143043a80);
      }
      ppppppuVar21 = param_40[0x7f];
      apppppppuStack_108[1] = (ulonglong *******)0x140ac046a;
      pdb_140de8220();
      pppppppuVar31 = (ulonglong *******)(ppppppuVar21 + (longlong)ppppppuVar50 * 6);
code_r0x000140ac0486:
      unaff_RSI = 1;
      apppppppuStack_108[1] = (ulonglong *******)0x140ac04a1;
      pdb_140a8e730(pppppppuVar31,&UNK_14304b027,0xd);
      puVar35 = apppppppuStack_108 + 2;
      goto LAB_140abfc90;
    case 0x3c:
      *(byte *)pppppppuVar24 = (*(byte *)pppppppuVar24 - bVar54) - CARRY1(bVar53,bVar29);
      fVar62 = *(float *)(pppppppuVar39 + 3);
      fVar55 = *(float *)((longlong)pppppppuVar39 + 0x1c);
      fVar64 = *(float *)(pppppppuVar39 + 4);
      apppppppuStack_108[1] = (ulonglong *******)0x140ac10ee;
      pdb_140e08f50(&param_34,pppppppuStack_88);
      pppppppuVar25 = param_20;
      fVar65 = fVar55 - param_34._4_4_;
      fVar71 = fVar64 - (float)param_35;
      fVar72 = fVar62 - param_34._0_4_;
      if (param_20 == param_18) {
        apppppppuStack_108[1] = (ulonglong *******)0x140ac1137;
        pdb_142d7ef30(&param_18);
      }
      lVar42 = (longlong)pppppppuVar25 * 0x10;
      *(float *)(param_19 + lVar42) = SQRT(fVar71 * fVar71 + fVar65 * fVar65 + fVar72 * fVar72);
      *(float *)(param_19 + lVar42 + 4) = fVar62;
      *(float *)((longlong)(param_19 + lVar42 + 4) + 4) = fVar55;
      *(float *)(param_19 + lVar42 + 0xc) = fVar64;
      param_20 = (ulonglong *******)((longlong)pppppppuVar25 + 1);
      puVar35 = apppppppuStack_108 + 2;
      goto LAB_140abfc90;
    case 0x3d:
      if (pppppppuVar30 <= *(ulonglong ********)(&UNK_14304c9fc + uVar19)) {
                    /* WARNING: Subroutine does not return */
        apppppppuStack_108[1] = (ulonglong *******)0x140ac2b4c;
        pdb_142dc81f2();
      }
      pppppppuVar27 =
           (ulonglong *******)
           ((longlong)*(ulonglong ********)(&UNK_14304c9fc + uVar19) * 0x30 +
           *(longlong *)(&UNK_14304c9dc + uVar19));
      param_35._0_4_ = *(float *)(pppppppuVar39 + 4);
      param_34 = pppppppuVar39[3];
code_r0x000140ac0848:
      apppppppuStack_108[1] = (ulonglong *******)0x140ac084d;
      pdb_140a8e190(pppppppuVar27);
      ppppppuVar50 = param_40[0x52];
      if (param_40[0x4f] <= ppppppuVar50) {
                    /* WARNING: Subroutine does not return */
        apppppppuStack_108[1] = (ulonglong *******)0x140ac2b85;
        pdb_142dc81f2(ppppppuVar50,param_40[0x4f],&UNK_143043a80);
      }
      ppppppuVar21 = param_40[0x4e];
      apppppppuStack_108[1] = (ulonglong *******)0x140ac0889;
      pdb_140de8220();
      uVar19 = (longlong)ppppppuVar50 * 0x30;
      pppppppuVar31 = (ulonglong *******)(ppppppuVar21 + (longlong)ppppppuVar50 * 6);
code_r0x000140ac0899:
      uStack_48 = CONCAT71((int7)(uVar19 >> 8),1);
      apppppppuStack_108[1] = (ulonglong *******)0x140ac08c0;
      pdb_140a8e730(pppppppuVar31,&UNK_14304b027,0xd);
      puVar35 = apppppppuStack_108 + 2;
      goto LAB_140abfc90;
    case 0x3e:
      apppppppuStack_108[1] = (ulonglong *******)0x140ac103a;
      pdb_140abb950(CONCAT44(param_32._4_4_,(undefined4)param_32));
      puVar35 = apppppppuStack_108 + 2;
      goto LAB_140abfc90;
    case 0x3f:
      *(uint *)pppppppuVar20 = *(uint *)pppppppuVar20 + (int)fVar65;
      (&UNK_14304c6f7)[uVar19] = (&UNK_14304c6f7)[uVar19] + bVar53;
      piVar23 = (int *)((ulonglong)(iVar57 + 0xcc04c76d) - 0x75);
      *piVar23 = *piVar23 + uVar16;
      goto code_r0x000140ac0f4b;
    case 0x40:
      (&UNK_14304c6f7)[uVar19] = (&UNK_14304c6f7)[uVar19] | bVar53;
      *(byte *)pppppppuVar20 = *(byte *)pppppppuVar20 + bVar54;
      if (*pppppppuVar20 == (ulonglong ******)0x0) {
        apppppppuStack_108[1] = (ulonglong *******)0x140ac1511;
        pdb_14007ee60();
        apppppppuStack_108[1] = (ulonglong *******)0x140ac1520;
        pbVar32 = pub_1406abab0(0x16,1);
        uVar22 = _UNK_14304bd3e;
        if (pbVar32 == (byte *)0x0) {
          apppppppuStack_108[1] = (ulonglong *******)0x140ac2c3f;
          pdb_142dc7e2a(1,0x16);
          goto LAB_140ac2ca5;
        }
        *(undefined8 *)pbVar32 = _UNK_14304bd36;
        *(undefined8 *)(pbVar32 + 8) = uVar22;
        pbVar32[0xe] = 0x67;
        pbVar32[0xf] = 0x73;
        pbVar32[0x10] = 0x2f;
        pbVar32[0x11] = 0x50;
        pbVar32[0x12] = 0x6c;
        pbVar32[0x13] = 0x61;
        pbVar32[0x14] = 99;
        pbVar32[0x15] = 0x65;
        param_34 = (ulonglong ******)0x0;
        param_36 = (ulonglong *******)0x16;
        param_38 = (ulonglong *******)0x16;
        param_39._0_1_ = 2;
        param_37 = pbVar32;
      }
      else {
        apppppppuStack_108[1] = (ulonglong *******)0x140ac019a;
        pdb_140a8b180(&param_34,*pppppppuVar20 + 2,&UNK_14304bd36,0x16);
        if (param_34._0_4_ == 2.8026e-45) {
          param_25 = (ulonglong ******)CONCAT44(param_35._4_4_,(float)param_35);
          pppppuStack_d8 = (ulonglong *****)&UNK_14304bd50;
                    /* WARNING: Subroutine does not return */
          apppppppuStack_108[1] = (ulonglong *******)0x140ac28db;
          pdb_142dc8170(&UNK_14304c468,0x2b,&param_25,&UNK_14304c448);
        }
      }
      param_26 = CONCAT44(param_35._4_4_,(float)param_35);
      param_29 = param_38;
      param_30._0_1_ = (undefined1)param_39;
      param_30._1_4_ = param_39._1_4_;
      param_30._5_2_ = param_39._5_2_;
      param_30._7_1_ = param_39._7_1_;
      param_27 = param_36;
      param_28 = param_37;
      param_25 = param_34;
      param_35._0_4_ = *(float *)(pppppppuVar39 + 4);
      param_34 = pppppppuVar39[3];
      apppppppuStack_108[1] = (ulonglong *******)0x140ac1619;
      pdb_140a8e190(&param_25,&param_34);
      apppppppuStack_108[1] = (ulonglong *******)0x140ac1644;
      pdb_140a8e730(&param_25,&UNK_14304ba48,6);
      apppppppuStack_108[1] = (ulonglong *******)0x140ac1651;
      pdb_140a8a6f0(&param_25);
      apppppppuStack_108[1] = (ulonglong *******)0x140ac165e;
      pdb_1409a5ed0(&param_25);
      goto code_r0x000140ac21db;
    case 0x41:
      pppppppuVar25 = *(ulonglong ********)(&UNK_14304ca34 + uVar19);
      if (pppppppuVar30 <= pppppppuVar25) {
                    /* WARNING: Subroutine does not return */
        apppppppuStack_108[1] = (ulonglong *******)0x140ac29ff;
        pdb_142dc81f2(pppppppuVar25);
      }
      lVar42 = *(longlong *)(&UNK_14304ca14 + uVar19);
      apppppppuStack_108[1] = (ulonglong *******)0x140ac06fb;
      pdb_140de8220();
      apppppppuStack_108[1] = (ulonglong *******)0x140ac072f;
      pdb_140a8e730(lVar42 + (longlong)pppppppuVar25 * 0x30,&UNK_14304b027,0xd);
      ppppppuVar50 = param_40[0x59];
      if (param_40[0x56] <= ppppppuVar50) {
                    /* WARNING: Subroutine does not return */
        apppppppuStack_108[1] = (ulonglong *******)0x140ac2a86;
        pdb_142dc81f2(ppppppuVar50,param_40[0x56],&UNK_143043a80);
      }
      unaff_RBX = 1;
      apppppppuStack_108[1] = (ulonglong *******)0x140ac0780;
      pdb_140a8e730(param_40[0x55] + (longlong)ppppppuVar50 * 6,&UNK_14304ba48,6);
      puVar35 = apppppppuStack_108 + 2;
      goto LAB_140abfc90;
    case 0x42:
      *pppppppuVar49 =
           (ulonglong ******)
           ((uStack_48 & 0xffffffff) - (longlong)(lVar47 + (longlong)pppppppuVar24));
      puVar35 = apppppppuStack_108 + 2;
      if (((bVar51 || bVar52) & bVar43) == 0) {
        *param_31 = uStack_48 & 0xffffffff;
        arg0 = (ulonglong *******)0x310;
        if (bVar36 != 0) {
          arg0 = (ulonglong *******)0x348;
        }
code_r0x000140ac0f4b:
        *param_33 = param_41._4_4_;
        uVar19 = *(ulonglong *)((longlong)(param_40 + 5) + (longlong)arg0);
        if (*(ulonglong *)((longlong)(param_40 + 2) + (longlong)arg0) <= uVar19) {
                    /* WARNING: Subroutine does not return */
          apppppppuStack_108[1] = (ulonglong *******)0x140ac2afe;
          pdb_142dc81f2(uVar19,*(ulonglong *)((longlong)(param_40 + 2) + (longlong)arg0),
                        &UNK_143043a80);
        }
        pppppppuVar27 =
             (ulonglong *******)
             (uVar19 * 0x30 + *(longlong *)((longlong)(param_40 + 1) + (longlong)arg0));
        param_35._0_4_ = *(float *)(pppppppuVar39 + 4);
code_r0x000140ac0f8a:
        param_34 = pppppppuVar39[3];
        apppppppuStack_108[1] = (ulonglong *******)0x140ac0fa1;
        pdb_140a8e190(pppppppuVar27,&param_34);
        pppppppuVar27 = *(ulonglong ********)((longlong)(param_40 + 5) + (longlong)arg0);
        pppppppuVar20 = param_40;
        if (*(ulonglong ********)((longlong)(param_40 + 2) + (longlong)arg0) <= pppppppuVar27) {
                    /* WARNING: Subroutine does not return */
          apppppppuStack_108[1] = (ulonglong *******)0x140ac2bbb;
          pdb_142dc81f2(pppppppuVar27,
                        *(ulonglong ********)((longlong)(param_40 + 2) + (longlong)arg0),
                        &UNK_143043a80);
        }
code_r0x000140ac1fb5:
        apppppppuStack_108[1] = (ulonglong *******)0x140ac1fd4;
        pdb_140a8e730((longlong)pppppppuVar27 * 0x30 +
                      *(longlong *)((longlong)(pppppppuVar20 + 1) + (longlong)arg0),&UNK_14304ba48,6
                     );
        uVar19 = *(ulonglong *)((longlong)(param_40 + 5) + (longlong)arg0);
        if (*(ulonglong *)((longlong)(param_40 + 2) + (longlong)arg0) <= uVar19) {
                    /* WARNING: Subroutine does not return */
          apppppppuStack_108[1] = (ulonglong *******)0x140ac2a26;
          pdb_142dc81f2(uVar19,*(ulonglong *)((longlong)(param_40 + 2) + (longlong)arg0),
                        &UNK_143043a80);
        }
        lVar42 = *(longlong *)((longlong)(param_40 + 1) + (longlong)arg0);
        apppppppuStack_108[1] = (ulonglong *******)0x140ac200a;
        pdb_140de8220();
        param_9 = CONCAT71((int7)(param_9 >> 8),(byte)param_9 | bVar36);
        param_8 = CONCAT71((int7)(param_8 >> 8),(byte)param_8 | bVar36 ^ 1);
        apppppppuStack_108[1] = (ulonglong *******)0x140ac2061;
        pdb_140a8e730(lVar42 + uVar19 * 0x30,&UNK_14304b027,0xd);
        puVar35 = apppppppuStack_108 + 2;
      }
      goto LAB_140abfc90;
    case 0x43:
      *(byte *)pppppppuVar20 = *(byte *)pppppppuVar20 + bVar54;
      goto code_r0x000140ac0f8a;
    case 0x44:
      param_34 = pppppppuVar39[3];
      apppppppuStack_108[1] = (ulonglong *******)0x140ac021b;
      pdb_140abb950(CONCAT44(param_32._4_4_,(undefined4)param_32),&UNK_14304bd03,0x18,&param_34);
      puVar35 = apppppppuStack_108 + 2;
      goto LAB_140abfc90;
    case 0x45:
      puVar1 = (uint *)(&UNK_14304c6f5 + uVar19);
      uVar13 = *puVar1;
      uVar14 = *puVar1;
      *puVar1 = *puVar1 + uVar16;
      if (SCARRY4(uVar14,uVar16)) {
        pcVar2 = (char *)((longlong)pppppppuVar27 * 9 + 0x1927840f);
        *pcVar2 = *pcVar2 + bVar54 + CARRY4(uVar13,uVar16);
        *(byte *)pppppppuVar20 = *(byte *)pppppppuVar20 + bVar54;
        unaff_RBP = (ulonglong ******)CONCAT71(uVar26,1);
        uVar19 = *(ulonglong *)((longlong)param_17 + 0x28);
        if (*(ulonglong *)((longlong)param_17 + 0x10) <= uVar19) {
                    /* WARNING: Subroutine does not return */
          apppppppuStack_108[1] = (ulonglong *******)0x140ac2b25;
          pdb_142dc81f2(uVar19,*(ulonglong *)((longlong)param_17 + 0x10),&UNK_143043a80);
        }
        param_34 = pppppppuVar39[3];
        param_35._0_4_ = *(float *)(pppppppuVar39 + 4);
        apppppppuStack_108[1] = (ulonglong *******)0x140ac1ee6;
        pdb_140a8e190(uVar19 * 0x30 + *(longlong *)((longlong)param_17 + 8),&param_34);
        pppppuStack_d8 = (ulonglong *****)CONCAT44(pppppuStack_d8._4_4_,0x43020000);
        apppppppuStack_108[1] = (ulonglong *******)0x140ac1f07;
        pdb_140a7d8d0(&stack0x00000000);
        uVar19 = *(ulonglong *)(lVar42 + 0x28);
        if (*(ulonglong *)(lVar42 + 0x10) <= uVar19) {
                    /* WARNING: Subroutine does not return */
          apppppppuStack_108[1] = (ulonglong *******)0x140ac2b70;
          pdb_142dc81f2(uVar19,*(ulonglong *)(lVar42 + 0x10),&UNK_143043a80);
        }
        apppppppuStack_108[1] = (ulonglong *******)0x140ac1f4a;
        pdb_140a8e730(uVar19 * 0x30 + *(longlong *)(lVar42 + 8),&UNK_14304bc40,8);
        uVar19 = *(ulonglong *)(lVar42 + 0x28);
        if (*(ulonglong *)(lVar42 + 0x10) <= uVar19) {
                    /* WARNING: Subroutine does not return */
          apppppppuStack_108[1] = (ulonglong *******)0x140ac2ad7;
          pdb_142dc81f2(uVar19,*(ulonglong *)(lVar42 + 0x10),&UNK_143043a80);
        }
        lVar42 = *(longlong *)(lVar42 + 8);
        apppppppuStack_108[1] = (ulonglong *******)0x140ac1f76;
        pdb_140de8220();
        apppppppuStack_108[1] = (ulonglong *******)0x140ac1fa7;
        pdb_140a8e730(lVar42 + uVar19 * 0x30,&UNK_14304b027,0xd);
        puVar35 = apppppppuStack_108 + 2;
      }
      else {
        *(uint *)pppppppuVar20 =
             (*(uint *)pppppppuVar20 - (int)fVar65) - (uint)CARRY4(uVar13,uVar16);
        *(byte *)((longlong)pppppppuVar31 + -0x7a76dfb9) =
             *(byte *)((longlong)pppppppuVar31 + -0x7a76dfb9) + bVar53;
        *(uint *)pppppppuVar20 = *(uint *)pppppppuVar20 + (int)fVar65;
        pbVar32 = &UNK_14304c6f7 + uVar19;
        bVar54 = *pbVar32;
        *pbVar32 = *pbVar32 + bVar53;
        *(byte *)((longlong)pppppppuVar24 + -0x77) =
             (*(byte *)((longlong)pppppppuVar24 + -0x77) - bVar43) - CARRY1(bVar54,bVar53);
        apppppppuStack_108[1] = pppppppuVar30;
        pdb_140abb950(CONCAT44(param_32._4_4_,(undefined4)param_32),0x4304bb9d,0x1b,&param_34);
        puVar35 = apppppppuStack_108 + 1;
      }
      goto LAB_140abfc90;
    case 0x46:
      param_34 = pppppppuVar39[3];
      apppppppuStack_108[1] = (ulonglong *******)0x140ac0160;
      param_35._0_4_ = fVar65;
      pdb_140abb950(CONCAT44(param_32._4_4_,(undefined4)param_32),&UNK_14304be2c,0x23,&param_34);
      puVar35 = apppppppuStack_108 + 2;
      goto LAB_140abfc90;
    case 0x47:
      piVar23 = (int *)CONCAT71(uVar26,0xb0);
      *piVar23 = *piVar23 + (int)piVar23;
      *(byte *)((longlong)pppppppuVar27 + 0x39) = *(byte *)((longlong)pppppppuVar27 + 0x39) + bVar53
      ;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0x48:
      *(byte *)pppppppuVar20 = *(byte *)pppppppuVar20 + bVar54;
      if (*pppppppuVar20 == (ulonglong ******)0x0) {
        apppppppuStack_108[1] = (ulonglong *******)0x140ac1847;
        param_21 = pppppppuVar17;
        pdb_14007ee60();
        apppppppuStack_108[1] = (ulonglong *******)0x140ac1854;
        pbVar32 = pub_1406abab0((ulonglong)arg0,1);
        if (pbVar32 == (byte *)0x0) {
          apppppppuStack_108[1] = (ulonglong *******)0x140ac2c4f;
          pdb_142dc7e2a(1,arg0);
          goto LAB_140ac2ca5;
        }
        apppppppuStack_108[1] = (ulonglong *******)0x140ac186e;
        pub_142e32760(pbVar32,pppppppuVar31,arg0);
        param_34 = (ulonglong ******)0x0;
        param_39._0_1_ = 2;
        pppppppuVar17 = param_21;
        param_36 = arg0;
        param_37 = pbVar32;
        param_38 = arg0;
      }
      else {
        apppppppuStack_108[1] = (ulonglong *******)0x140ac0d84;
        pdb_140a8b180(&param_34,*pppppppuVar20 + 2,pppppppuVar31,arg0);
        if (param_34._0_4_ == 2.8026e-45) {
          param_25 = (ulonglong ******)CONCAT44(param_35._4_4_,(float)param_35);
          pppppuStack_d8 = (ulonglong *****)&UNK_14304baa0;
                    /* WARNING: Subroutine does not return */
          apppppppuStack_108[1] = (ulonglong *******)0x140ac289c;
          pdb_142dc8170(&UNK_14304c468,0x2b,&param_25,&UNK_14304c448);
        }
      }
      param_26 = CONCAT44(param_35._4_4_,(float)param_35);
      param_29 = param_38;
      param_30._0_1_ = (undefined1)param_39;
      param_30._1_4_ = param_39._1_4_;
      param_30._5_2_ = param_39._5_2_;
      param_30._7_1_ = param_39._7_1_;
      param_27 = param_36;
      param_28 = param_37;
      param_25 = param_34;
      param_35._0_4_ = *(float *)(pppppppuVar39 + 4);
      param_34 = pppppppuVar39[3];
      apppppppuStack_108[1] = (ulonglong *******)0x140ac1945;
      pdb_140a8e190(&param_25,&param_34);
      apppppppuStack_108[1] = (ulonglong *******)0x140ac1967;
      pdb_140a8e730(&param_25,&UNK_14304ba48,6);
      apppppppuStack_108[1] = (ulonglong *******)0x140ac19a8;
      pdb_140a8e730(&param_25,&UNK_14304ba4e,10,(float)pppppppuVar38);
      pbVar32 = (byte *)((longlong)pppppppuVar17 + -1);
      if ((longlong)pbVar32 < 0) {
        fVar64 = (float)pbVar32;
      }
      else {
        fVar64 = (float)(int)pbVar32;
      }
      apppppppuStack_108[1] = (ulonglong *******)0x140ac19ea;
      pdb_140a8e730(&param_25,&UNK_14304ba58,10,fVar64);
      apppppppuStack_108[1] = (ulonglong *******)0x140ac19f7;
      pdb_140a8a6f0(&param_25);
      apppppppuStack_108[1] = (ulonglong *******)0x140ac1a04;
      pdb_1409a5ed0(&param_25);
      goto code_r0x000140ac21db;
    case 0x49:
      goto code_r0x000140ac00ae;
    case 0x4a:
      if (pppppppuVar30 <= *(ulonglong ********)(&UNK_14304c91c + uVar19)) {
                    /* WARNING: Subroutine does not return */
        apppppppuStack_108[1] = (ulonglong *******)0x140ac2a11;
        pdb_142dc81f2();
      }
      param_35._0_4_ = *(float *)(pppppppuVar39 + 4);
      param_34 = pppppppuVar39[3];
      apppppppuStack_108[1] = (ulonglong *******)0x140ac124d;
      pdb_140a8e190((longlong)*(ulonglong ********)(&UNK_14304c91c + uVar19) * 0x30 +
                    *(longlong *)(&UNK_14304c8fc + uVar19),&param_34);
      ppppppuVar50 = param_40[0x36];
      if (param_40[0x33] <= ppppppuVar50) {
                    /* WARNING: Subroutine does not return */
        apppppppuStack_108[1] = (ulonglong *******)0x140ac2a74;
        pdb_142dc81f2(ppppppuVar50,param_40[0x33],&UNK_143043a80);
      }
      ppppppuVar21 = param_40[0x32];
      apppppppuStack_108[1] = (ulonglong *******)0x140ac1289;
      pdb_140de8220();
      uStack_50 = (ulonglong *******)
                  CONCAT71((int7)((ulonglong)((longlong)ppppppuVar50 * 0x30) >> 8),1);
      apppppppuStack_108[1] = (ulonglong *******)0x140ac12c0;
      pdb_140a8e730(ppppppuVar21 + (longlong)ppppppuVar50 * 6,&UNK_14304b027,0xd);
      puVar35 = apppppppuStack_108 + 2;
      goto LAB_140abfc90;
    case 0x4b:
      *(byte *)pppppppuVar20 = *(byte *)pppppppuVar20 + bVar54;
code_r0x000140ac0e13:
      param_25 = (ulonglong ******)CONCAT44(param_35._4_4_,(float)param_35);
      pppppuStack_d8 = (ulonglong *****)&UNK_14304bad0;
                    /* WARNING: Subroutine does not return */
      apppppppuStack_108[1] = (ulonglong *******)0x140ac281e;
      pdb_142dc8170(&UNK_14304c468,0x2b,&param_25,&UNK_14304c448);
    case 0x4c:
      *(byte *)pppppppuVar39 = *(byte *)pppppppuVar39 + bVar53;
      apppppppuStack_108[1] = (ulonglong *******)0x140abfde2;
      uVar19 = pdb_1417c5550(uStack_90,(int)pppppppuVar25 + 0x188);
      ppppuVar12 = pppppuStackX_18[0x10];
      bVar54 = (byte)(uVar19 >> 0x39);
      auVar56 = ZEXT216(CONCAT11(bVar54,bVar54));
      auVar56 = pshuflw(auVar56,auVar56,0);
      lVar42 = 0;
      while( true ) {
        uVar19 = uVar19 & (ulonglong)pppppuStackX_18[0x11];
        pcVar2 = (char *)((longlong)ppppuVar12 + uVar19);
        auVar61[0] = -(*pcVar2 == auVar56[0]);
        auVar61[1] = -(pcVar2[1] == auVar56[1]);
        auVar61[2] = -(pcVar2[2] == auVar56[2]);
        auVar61[3] = -(pcVar2[3] == auVar56[3]);
        auVar61[4] = -(pcVar2[4] == auVar56[4]);
        auVar61[5] = -(pcVar2[5] == auVar56[5]);
        auVar61[6] = -(pcVar2[6] == auVar56[6]);
        auVar61[7] = -(pcVar2[7] == auVar56[7]);
        auVar61[8] = -(pcVar2[8] == auVar56[0]);
        auVar61[9] = -(pcVar2[9] == auVar56[1]);
        auVar61[10] = -(pcVar2[10] == auVar56[2]);
        auVar61[0xb] = -(pcVar2[0xb] == auVar56[3]);
        auVar61[0xc] = -(pcVar2[0xc] == auVar56[4]);
        auVar61[0xd] = -(pcVar2[0xd] == auVar56[5]);
        auVar61[0xe] = -(pcVar2[0xe] == auVar56[6]);
        auVar61[0xf] = -(pcVar2[0xf] == auVar56[7]);
        uVar46 = (ushort)(SUB161(auVar61 >> 7,0) & 1) | (ushort)(SUB161(auVar61 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar61 >> 0x17,0) & 1) << 2 |
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
                 (ushort)(SUB161(auVar61 >> 0x77,0) & 1) << 0xe | (ushort)(auVar61[0xf] >> 7) << 0xf
        ;
        uVar16 = (uint)uVar46;
        while (uVar46 != 0) {
          uVar13 = 0;
          for (uVar14 = uVar16; (uVar14 & 1) == 0; uVar14 = uVar14 >> 1 | 0x80000000) {
            uVar13 = uVar13 + 1;
          }
          uVar48 = uVar13 + uVar19 & (ulonglong)pppppuStackX_18[0x11];
          if (pppppppuVar38 == (ulonglong *******)ppppuVar12[uVar48 * -0xe + -0xe]) {
            if (ppppuVar12[uVar48 * -0xe + -0xd] == (ulonglong ***)0x3) goto code_r0x000140ac1464;
            pppppppuStack_98 = (ulonglong *******)(ppppuVar12 + uVar48 * -0xe + -0xc);
            goto code_r0x000140ac1479;
          }
          uVar46 = (ushort)(uVar16 - 1) & (ushort)uVar16;
          uVar16 = CONCAT22((short)(uVar16 - 1 >> 0x10),uVar46);
        }
        auVar59[0] = -(*pcVar2 == -1);
        auVar59[1] = -(pcVar2[1] == -1);
        auVar59[2] = -(pcVar2[2] == -1);
        auVar59[3] = -(pcVar2[3] == -1);
        auVar59[4] = -(pcVar2[4] == -1);
        auVar59[5] = -(pcVar2[5] == -1);
        auVar59[6] = -(pcVar2[6] == -1);
        auVar59[7] = -(pcVar2[7] == -1);
        auVar59[8] = -(pcVar2[8] == -1);
        auVar59[9] = -(pcVar2[9] == -1);
        auVar59[10] = -(pcVar2[10] == -1);
        auVar59[0xb] = -(pcVar2[0xb] == -1);
        auVar59[0xc] = -(pcVar2[0xc] == -1);
        auVar59[0xd] = -(pcVar2[0xd] == -1);
        auVar59[0xe] = -(pcVar2[0xe] == -1);
        auVar59[0xf] = -(pcVar2[0xf] == -1);
        if ((((((((((((((((SUB161(auVar59 >> 7,0) & 1) != 0 || (SUB161(auVar59 >> 0xf,0) & 1) != 0)
                        || (SUB161(auVar59 >> 0x17,0) & 1) != 0) ||
                       (SUB161(auVar59 >> 0x1f,0) & 1) != 0) || (SUB161(auVar59 >> 0x27,0) & 1) != 0
                      ) || (SUB161(auVar59 >> 0x2f,0) & 1) != 0) ||
                    (SUB161(auVar59 >> 0x37,0) & 1) != 0) || (SUB161(auVar59 >> 0x3f,0) & 1) != 0)
                  || (SUB161(auVar59 >> 0x47,0) & 1) != 0) || (SUB161(auVar59 >> 0x4f,0) & 1) != 0)
                || (SUB161(auVar59 >> 0x57,0) & 1) != 0) || (SUB161(auVar59 >> 0x5f,0) & 1) != 0) ||
              (SUB161(auVar59 >> 0x67,0) & 1) != 0) || (SUB161(auVar59 >> 0x6f,0) & 1) != 0) ||
            (SUB161(auVar59 >> 0x77,0) & 1) != 0) || auVar59[0xf] < '\0') break;
        uVar19 = uVar19 + lVar42 + 0x10;
        lVar42 = lVar42 + 0x10;
      }
code_r0x000140ac1464:
      if (*pppppuStackX_18 == (ulonglong ****)0x3) {
        apppppppuStack_108[1] = (ulonglong *******)0x140ac2772;
        pdb_142dc8110(&UNK_14306aed6,0x32,&UNK_14306af08);
LAB_140ac2ca5:
                    /* WARNING: Does not return */
        UNRECOVERED_JUMPTABLE = (code *)invalidInstructionException();
        (*UNRECOVERED_JUMPTABLE)();
      }
code_r0x000140ac1479:
      uVar5 = *(undefined1 *)((longlong)pppppppuStack_98 + 0x5d);
      param_35._0_4_ = *(float *)(pppppppuVar39 + 4);
      param_34 = pppppppuVar39[3];
      *uStack_a0 = uStackX_10._4_4_;
      ppppppuVar50 = pppppppuStack_58[6];
      ppppppuVar21 = pppppppuStack_58[8];
      if (ppppppuVar50 == pppppppuStack_58[4]) {
        apppppppuStack_108[1] = (ulonglong *******)0x140ac14c3;
        pdb_142d7e830(apppppppuStack_80[0]);
      }
      ppppppuVar11 = pppppppuStack_58[5];
      ppppppuVar11[(longlong)ppppppuVar50 * 3] = (ulonglong *****)ppppppuVar21;
      ppppppuVar11[(longlong)ppppppuVar50 * 3 + 1] = (ulonglong *****)param_34;
      *(float *)(ppppppuVar11 + (longlong)ppppppuVar50 * 3 + 2) = (float)param_35;
      *(undefined1 *)((longlong)ppppppuVar11 + (longlong)ppppppuVar50 * 0x18 + 0x14) = uVar5;
      *(char *)((longlong)ppppppuVar11 + (longlong)ppppppuVar50 * 0x18 + 0x15) =
           (pppppppuVar31 == (ulonglong *******)0x22) + '\x01';
      pppppppuStack_58[6] = (ulonglong ******)((longlong)ppppppuVar50 + 1);
      pppppppuStack_58[8] = (ulonglong ******)((longlong)pppppppuStack_58[8] + 1);
      puVar35 = apppppppuStack_108 + 2;
LAB_140abfc90:
      if ((pppppppuVar40 == (ulonglong *******)0x0) || (pppppppuVar40 == uStack_b0)) {
        if (puStack_a8 == &UNK_14304c76c) {
          *param_33 = param_41._4_4_;
          if (((byte)param_6 & 1) == 0) {
            puVar35[0xffffffffffffffff] = 0x140ac2235;
            pdb_140a87f70(param_40);
          }
          else {
            puVar35[0xffffffffffffffff] = 0x140ac2226;
            pdb_140a87e10(param_40);
          }
          *param_33 = param_41._4_4_;
          if (((ulonglong)param_7 & 1) == 0) {
            puVar35[0xffffffffffffffff] = 0x140ac2266;
            pdb_140a87f70(param_40 + 7);
          }
          else {
            puVar35[0xffffffffffffffff] = 0x140ac225e;
            pdb_140a87e10();
          }
          *param_33 = param_41._4_4_;
          if (((ulonglong)pppppuStackX_20 & 1) == 0) {
            puVar35[0xffffffffffffffff] = 0x140ac2297;
            pdb_140a87f70(param_40 + 0xe);
          }
          else {
            puVar35[0xffffffffffffffff] = 0x140ac228f;
            pdb_140a87e10();
          }
          *param_33 = param_41._4_4_;
          if (((ulonglong)param_5 & 1) == 0) {
            puVar35[0xffffffffffffffff] = 0x140ac22cb;
            pdb_140a87f70(param_40 + 0x15);
          }
          else {
            puVar35[0xffffffffffffffff] = 0x140ac22c3;
            pdb_140a87e10();
          }
          *param_33 = param_41._4_4_;
          if (((ulonglong)unaff_RBP & 1) == 0) {
            puVar35[0xffffffffffffffff] = 0x140ac22fc;
            pdb_140a87f70(param_17);
          }
          else {
            puVar35[0xffffffffffffffff] = 0x140ac22ed;
            pdb_140a87e10(param_17);
          }
          *param_33 = param_41._4_4_;
          if (((ulonglong)param_12 & 1) == 0) {
            puVar35[0xffffffffffffffff] = 0x140ac2330;
            pdb_140a87f70(param_40 + 0x1c);
          }
          else {
            puVar35[0xffffffffffffffff] = 0x140ac2328;
            pdb_140a87e10();
          }
          *param_33 = param_41._4_4_;
          if ((param_13 & 1) == 0) {
            puVar35[0xffffffffffffffff] = 0x140ac2364;
            pdb_140a87f70(param_40 + 0x23);
          }
          else {
            puVar35[0xffffffffffffffff] = 0x140ac235c;
            pdb_140a87e10();
          }
          *param_33 = param_41._4_4_;
          if (((ulonglong)uStack_50 & 1) == 0) {
            puVar35[0xffffffffffffffff] = 0x140ac2395;
            pdb_140a87f70(param_40 + 0x31);
          }
          else {
            puVar35[0xffffffffffffffff] = 0x140ac238d;
            pdb_140a87e10();
          }
          *param_33 = param_41._4_4_;
          if ((uStack_48 & 1) == 0) {
            puVar35[0xffffffffffffffff] = 0x140ac23c6;
            pdb_140a87f70(param_40 + 0x4d);
          }
          else {
            puVar35[0xffffffffffffffff] = 0x140ac23be;
            pdb_140a87e10();
          }
          *param_33 = param_41._4_4_;
          if ((unaff_RBX & 1) == 0) {
            puVar35[0xffffffffffffffff] = 0x140ac23f7;
            pdb_140a87f70(param_40 + 0x54);
          }
          else {
            puVar35[0xffffffffffffffff] = 0x140ac23ef;
            pdb_140a87e10();
          }
          *param_33 = param_41._4_4_;
          if ((unaff_RDI & 1) == 0) {
            puVar35[0xffffffffffffffff] = 0x140ac2428;
            pdb_140a87f70(param_40 + 0x5b);
          }
          else {
            puVar35[0xffffffffffffffff] = 0x140ac2420;
            pdb_140a87e10();
          }
          *param_33 = param_41._4_4_;
          if ((unaff_RSI & 1) == 0) {
            puVar35[0xffffffffffffffff] = 0x140ac2459;
            pdb_140a87f70(param_40 + 0x7e);
          }
          else {
            puVar35[0xffffffffffffffff] = 0x140ac2451;
            pdb_140a87e10();
          }
          *param_33 = param_41._4_4_;
          if ((param_8 & 1) == 0) {
            puVar35[0xffffffffffffffff] = 0x140ac248d;
            pdb_140a87f70(param_40 + 0x62);
          }
          else {
            puVar35[0xffffffffffffffff] = 0x140ac2485;
            pdb_140a87e10();
          }
          *param_33 = param_41._4_4_;
          if ((param_9 & 1) == 0) {
            puVar35[0xffffffffffffffff] = 0x140ac24c1;
            pdb_140a87f70(param_40 + 0x69);
          }
          else {
            puVar35[0xffffffffffffffff] = 0x140ac24b9;
            pdb_140a87e10();
          }
          *param_33 = param_41._4_4_;
          if (((ulonglong)param_10 & 1) == 0) {
            puVar35[0xffffffffffffffff] = 0x140ac24f5;
            pdb_140a87f70(param_40 + 0x70);
          }
          else {
            puVar35[0xffffffffffffffff] = 0x140ac24ed;
            pdb_140a87e10();
          }
          *param_33 = param_41._4_4_;
          if (((ulonglong)param_11 & 1) == 0) {
            puVar35[0xffffffffffffffff] = 0x140ac2529;
            pdb_140a87f70(param_40 + 0x77);
          }
          else {
            puVar35[0xffffffffffffffff] = 0x140ac2521;
            pdb_140a87e10();
          }
          *param_33 = param_41._4_4_;
          if ((unaff_R12 & 1) == 0) {
            puVar35[0xffffffffffffffff] = 0x140ac255a;
            pdb_140a87f70(param_40 + 0x85);
          }
          else {
            puVar35[0xffffffffffffffff] = 0x140ac2552;
            pdb_140a87e10();
          }
          *param_33 = param_41._4_4_;
          if ((unaff_R13 & 1) == 0) {
            puVar35[0xffffffffffffffff] = 0x140ac258b;
            pdb_140a87f70(param_14);
          }
          else {
            puVar35[0xffffffffffffffff] = 0x140ac257c;
            pdb_140a87e10(param_14);
          }
          *param_33 = param_41._4_4_;
          if ((unaff_R14 & 1) == 0) {
            puVar35[0xffffffffffffffff] = 0x140ac25bc;
            pdb_140a87f70(param_15);
          }
          else {
            puVar35[0xffffffffffffffff] = 0x140ac25ad;
            pdb_140a87e10(param_15);
          }
          *param_33 = param_41._4_4_;
          if ((unaff_R15 & 1) == 0) {
            puVar35[0xffffffffffffffff] = 0x140ac25ed;
            pdb_140a87f70(param_16);
          }
          else {
            puVar35[0xffffffffffffffff] = 0x140ac25de;
            pdb_140a87e10(param_16);
          }
          param_34 = (ulonglong ******)((longlong)register0x00000020 + 0xb7);
          pppppppuVar25 = param_20;
          if ((ulonglong *******)0x1 < param_20) goto LAB_140ac2784;
          while( true ) {
            param_40 = param_40 + 0x38;
            pppppppuVar24 = (ulonglong *******)0x0;
            while (pppppppuVar24 < (ulonglong *******)0x3) {
              *param_33 = param_41._4_4_;
              pppppppuVar25 = param_40 + (longlong)pppppppuVar24 * 7;
              if (pppppppuVar24 < param_20) {
                ppppppuVar50 = pppppppuVar25[2];
                ppppppuVar21 = pppppppuVar25[5];
                if (ppppppuVar50 <= ppppppuVar21) {
                    /* WARNING: Subroutine does not return */
                  puVar35[0xffffffffffffffff] = 0x140ac2960;
                  pdb_142dc81f2(ppppppuVar21,ppppppuVar50,&UNK_143043a80);
                }
                ppppppuVar50 = pppppppuVar25[1];
                param_35._0_4_ = *(float *)(param_19 + (longlong)pppppppuVar24 * 0x10 + 0xc);
                param_34 = *(ulonglong *******)(param_19 + (longlong)pppppppuVar24 * 0x10 + 4);
                puVar35[0xffffffffffffffff] = 0x140ac26ad;
                pdb_140a8e190(ppppppuVar50 + (longlong)ppppppuVar21 * 6,&param_34);
                puVar35[0xffffffffffffffff] = 0x140ac26b6;
                pdb_140a87e10(pppppppuVar25);
                pppppppuVar24 = (ulonglong *******)((longlong)pppppppuVar24 + 1);
              }
              else {
                puVar35[0xffffffffffffffff] = 0x140ac2638;
                pdb_140a87f70(pppppppuVar25);
                pppppppuVar24 = (ulonglong *******)((longlong)pppppppuVar24 + 1);
              }
            }
            pppppppuVar25 = (ulonglong *******)0x0;
            if (param_18 != (ulonglong *******)0x0) {
              pppppppuVar25 = (ulonglong *******)((longlong)param_18 << 4);
              puVar35[0xffffffffffffffff] = 0x140ac26de;
              pub_1406abac0(param_19,(ulonglong)pppppppuVar25,4);
              pppppppuVar24 = extraout_RAX_01;
            }
            if (puStack_68 == (undefined *)0x0) {
              return pppppppuVar24;
            }
            puVar35[0xffffffffffffffff] = 0x140ac26ea;
            pppppppuVar24 = (ulonglong *******)pdb_140e97000();
            if (*(char *)(pppppppuVar24 + 0xd) != '\x01') {
              pppppppuVar25 = (ulonglong *******)0x0;
              puVar35[0xffffffffffffffff] = 0x140ac28eb;
              pppppppuVar24 = (ulonglong *******)pdb_142d8ec20(pppppppuVar24);
              if (pppppppuVar24 == (ulonglong *******)0x0) {
                puVar35[0xffffffffffffffff] = 0x140ac2915;
                pdb_142dc7890(&UNK_143326860);
                param_25 = (ulonglong ******)CONCAT44(param_35._4_4_,(float)param_35);
                puVar35[4] = &UNK_14304bc28;
                    /* WARNING: Subroutine does not return */
                puVar35[0xffffffffffffffff] = 0x140ac294e;
                pdb_142dc8170(&UNK_14304c468,0x2b,&param_25,&UNK_14304c448);
              }
            }
            if (*pppppppuVar24 == (ulonglong ******)0x0) break;
            puVar35[0xffffffffffffffff] = 0x140ac2784;
            pdb_142dc8090(&UNK_143326a50);
LAB_140ac2784:
            if (pppppppuVar25 < (ulonglong *******)0x15) {
              puVar35[0xffffffffffffffff] = 0x140ac27a0;
              pdb_14151bd50();
            }
            else {
              puVar35[0xffffffffffffffff] = 0x140ac2c6e;
              pdb_140c76cb0();
            }
          }
          *pppppppuVar24 = (ulonglong ******)0xffffffffffffffff;
          puVar35[0xffffffffffffffff] = 0x140ac2715;
          param_23 = pppppppuVar24;
          pdb_140e95370(pppppppuVar24 + 1,
                        CONCAT17(bStack_59,CONCAT25(uStack_5b,CONCAT41(uStack_5f,uStack_60))));
          *param_23 = (ulonglong ******)((longlong)*param_23 + 1);
          return param_23;
        }
        pppppppuVar40 = (ulonglong *******)&UNK_14304c76c;
      }
      *param_23 = (ulonglong ******)((longlong)*param_23 + 1);
      ppppppuVar50 = *pppppppuVar40 + -1;
      if (*pppppppuVar40 < (ulonglong ******)0x8) {
        ppppppuVar50 = (ulonglong ******)0x3;
      }
                    /* WARNING: Could not recover jumptable at 0x000140abfcf8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      pppppppuVar25 =
           (ulonglong *******)
           (*(code *)(&UNK_14304c824 + *(int *)(&UNK_14304c824 + (longlong)ppppppuVar50 * 4)))();
      return pppppppuVar25;
    case 0x4d:
      *(byte *)pppppppuVar20 = *(byte *)pppppppuVar20 + bVar54;
      (&UNK_14304c6f9)[uVar19] = (&UNK_14304c6f9)[uVar19] + bVar53;
      pppppppuVar25 = (ulonglong *******)&UNK_14304bc7a;
      if (((uint)fVar65 | 0x258ba5d) != 0) {
        pppppppuVar25 = pppppppuVar27;
      }
      param_35._0_4_ = *(float *)(pppppppuVar39 + 4);
      param_34 = pppppppuVar39[3];
      apppppppuStack_108[1] = (ulonglong *******)0x140ac0268;
      pdb_140abb950(CONCAT44(param_32._4_4_,(undefined4)param_32),pppppppuVar25);
      puVar35 = apppppppuStack_108 + 2;
      goto LAB_140abfc90;
    case 0x4e:
      param_34 = pppppppuVar39[3];
      apppppppuStack_108[1] = (ulonglong *******)0x140ac01e1;
      pdb_140abb950(CONCAT44(param_32._4_4_,(undefined4)param_32),&UNK_14304bdd9,0x23,&param_34);
      puVar35 = apppppppuStack_108 + 2;
      goto LAB_140abfc90;
    case 0x4f:
      (&UNK_14304c6f7)[uVar19] = (&UNK_14304c6f7)[uVar19] + bVar53 + bVar51;
      *(byte *)pppppppuVar20 = *(byte *)pppppppuVar20 + bVar54;
      if (*pppppppuVar20 == (ulonglong ******)0x0) {
        apppppppuStack_108[1] = (ulonglong *******)0x140ac1a0f;
        pdb_14007ee60();
        apppppppuStack_108[1] = (ulonglong *******)0x140ac1a1e;
        pbVar32 = pub_1406abab0(0x18,1);
        uVar22 = _UNK_14304bac0;
        if (pbVar32 == (byte *)0x0) {
          apppppppuStack_108[1] = (ulonglong *******)0x140ac2c2d;
          pdb_142dc7e2a(1,0x18);
          goto LAB_140ac2ca5;
        }
        *(undefined8 *)pbVar32 = _UNK_14304bab8;
        *(undefined8 *)(pbVar32 + 8) = uVar22;
        pbVar32[0x10] = 0x77;
        pbVar32[0x11] = 0x43;
        pbVar32[0x12] = 0x6f;
        pbVar32[0x13] = 0x6d;
        pbVar32[0x14] = 0x62;
        pbVar32[0x15] = 0x69;
        pbVar32[0x16] = 0x6e;
        pbVar32[0x17] = 0x65;
        param_34 = (ulonglong ******)0x0;
        param_36 = (ulonglong *******)0x18;
        param_38 = (ulonglong *******)0x18;
        param_39._0_1_ = 2;
        param_37 = pbVar32;
      }
      else {
        apppppppuStack_108[1] = (ulonglong *******)0x140ac0e05;
        pdb_140a8b180(&param_34,*pppppppuVar20 + 2,&UNK_14304bab8,0x18);
        if (param_34._0_4_ == 2.8026e-45) goto code_r0x000140ac0e13;
      }
      param_26 = CONCAT44(param_35._4_4_,(float)param_35);
      param_29 = param_38;
      param_30._0_1_ = (undefined1)param_39;
      param_30._1_4_ = param_39._1_4_;
      param_30._5_2_ = param_39._5_2_;
      param_30._7_1_ = param_39._7_1_;
      param_27 = param_36;
      param_28 = param_37;
      param_25 = param_34;
      param_35._0_4_ = *(float *)(pppppppuVar39 + 4);
      param_34 = pppppppuVar39[3];
      apppppppuStack_108[1] = (ulonglong *******)0x140ac1b17;
      pdb_140a8e190(&param_25,&param_34);
      pbVar32 = (byte *)((longlong)pppppppuVar31 + -1);
      auVar70._4_12_ = in_XMM3._4_12_;
      if ((longlong)pbVar32 < 0) {
        fVar64 = (float)pbVar32;
      }
      else {
        fVar64 = (float)(int)pbVar32;
      }
      auVar70._0_4_ = fVar64;
      apppppppuStack_108[1] = (ulonglong *******)0x140ac1b51;
      pdb_140a8e730(&param_25,&UNK_14304ba58,10,auVar70._0_8_);
      if (2 < (uint)pppppppuVar38) {
                    /* WARNING: Subroutine does not return */
        apppppppuStack_108[1] = (ulonglong *******)0x140ac297e;
        pdb_142dc83d0(&UNK_14304bae8,0x8d,&UNK_14304bb30);
      }
      apppppppuStack_108[1] = (ulonglong *******)0x140ac1b80;
      pdb_140a8e730(&param_25,&UNK_14304ba4e,10);
      apppppppuStack_108[1] = (ulonglong *******)0x140ac1b8d;
      pdb_140a8a6f0(&param_25);
      apppppppuStack_108[1] = (ulonglong *******)0x140ac1b9a;
      pdb_1409a5ed0(&param_25);
code_r0x000140ac21db:
      puVar35 = apppppppuStack_108 + 2;
      if (param_27 != (ulonglong *******)0x0) {
        apppppppuStack_108[1] = (ulonglong *******)0x140ac21fd;
        pub_1406abac0(param_28,(ulonglong)param_27,1);
        puVar35 = apppppppuStack_108 + 2;
      }
      goto LAB_140abfc90;
    case 0x50:
    case 0x53:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0x51:
      pppppppuVar25 = (ulonglong *******)(ulonglong)(uint)((int)fVar65 << 4);
      goto code_r0x000140ac00d2;
    case 0x52:
      param_35._0_4_ = *(float *)(pppppppuVar39 + 4);
      param_34 = pppppppuVar39[3];
      apppppppuStack_108[1] = (ulonglong *******)0x140abff59;
      pdb_140a8e190((byte *)((longlong)pppppppuVar27 +
                            *(longlong *)(&UNK_14304c774 + uVar19 + (longlong)pppppppuVar31)),
                    &param_34);
      uVar19 = *(ulonglong *)((longlong)(param_40 + 5) + (longlong)pppppppuVar31);
      if (*(ulonglong *)((longlong)(param_40 + 2) + (longlong)pppppppuVar31) <= uVar19) {
                    /* WARNING: Subroutine does not return */
        apppppppuStack_108[1] = (ulonglong *******)0x140ac2b3a;
        pdb_142dc81f2(uVar19,*(ulonglong *)((longlong)(param_40 + 2) + (longlong)pppppppuVar31),
                      &UNK_143043a80);
      }
      lVar42 = *(longlong *)((longlong)(param_40 + 1) + (longlong)pppppppuVar31);
      apppppppuStack_108[1] = (ulonglong *******)0x140abff8f;
      pdb_140de8220();
      apppppppuStack_108[1] = (ulonglong *******)0x140abffc0;
      pdb_140a8e730(lVar42 + uVar19 * 0x30,&UNK_14304b027,0xd);
      param_11 = (ulonglong *****)CONCAT71((int7)((ulonglong)param_11 >> 8),(byte)param_11 | bVar36)
      ;
      param_10 = (byte *)CONCAT71((int7)((ulonglong)param_10 >> 8),(byte)param_10 | bVar36 ^ 1);
      puVar35 = apppppppuStack_108 + 2;
      goto LAB_140abfc90;
    case 0x54:
      unaff_RBP = (ulonglong ******)0x0;
      puVar35 = apppppppuStack_108 + 2;
      goto LAB_140abfc90;
    case 0x55:
      if (pppppppuVar30 <= *(ulonglong ********)(&UNK_14304cbbc + uVar19)) {
                    /* WARNING: Subroutine does not return */
        apppppppuStack_108[1] = (ulonglong *******)0x140ac29c6;
        pdb_142dc81f2();
      }
      pppppppuVar27 =
           (ulonglong *******)
           ((longlong)*(ulonglong ********)(&UNK_14304cbbc + uVar19) * 0x30 +
           *(longlong *)(&UNK_14304cb9c + uVar19));
      param_35._0_4_ = *(float *)(pppppppuVar39 + 4);
      param_34 = pppppppuVar39[3];
code_r0x000140ac00ae:
      apppppppuStack_108[1] = (ulonglong *******)0x140ac00b3;
      pdb_140a8e190(pppppppuVar27);
      arg0 = (ulonglong *******)param_40[0x8a];
      pppppppuVar25 = param_40;
      if (param_40[0x87] <= arg0) {
                    /* WARNING: Subroutine does not return */
        apppppppuStack_108[1] = (ulonglong *******)0x140ac2a3b;
        pdb_142dc81f2(arg0,param_40[0x87],&UNK_143043a80);
      }
code_r0x000140ac00d2:
      ppppppuVar50 = pppppppuVar25[0x86];
      apppppppuStack_108[1] = (ulonglong *******)0x140ac00ef;
      pdb_140de8220();
      unaff_R12 = 1;
      apppppppuStack_108[1] = (ulonglong *******)0x140ac0126;
      pdb_140a8e730(ppppppuVar50 + (longlong)arg0 * 6,&UNK_14304b027,0xd);
      puVar35 = apppppppuStack_108 + 2;
      goto LAB_140abfc90;
    case 0x56:
      in((short)pppppppuVar30);
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0x57:
      ppppppuStack_c8 = (ulonglong ******)0x4304c5d0;
      pppppppuStack_d0 = (ulonglong *******)&pppppppuStack_b8;
      pppppuStack_d8 = (ulonglong *****)0x7;
      apppppppuStack_108[1] = (ulonglong *******)0x140ac822d;
      pppppppuVar25 =
           (ulonglong *******)pdb_140f66e50(pppppppuVar20,&UNK_14304c5f0,6,&UNK_14304c5f6);
      return pppppppuVar25;
    case 0x58:
      in_XMM5_Da = in_XMM5_Da - in_XMM0._0_4_;
      in_XMM5_Db = in_XMM5_Db - in_XMM0._4_4_;
      goto code_r0x000140ac8126;
    case 0x59:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0x5a:
      fVar55 = _DAT_142e36f28 - in_XMM0._0_4_;
      uVar16 = *(uint *)pppppppuVar31;
      in_XMM4_Da = unaff_XMM6_Da;
      if ((uVar16 & 1) != 0) {
        in_XMM4_Da = *(float *)((longlong)pppppppuVar31 + 0xc);
      }
      auVar56._4_4_ = unaff_XMM6_Db;
      auVar56._0_4_ = unaff_XMM6_Da;
      auVar56._8_4_ = unaff_XMM6_Dc;
      auVar56._12_4_ = unaff_XMM6_Dd;
      in_XMM0._4_12_ = auVar56._4_12_;
      in_XMM0._0_4_ = (unaff_XMM6_Da - in_XMM4_Da) * fVar55;
      fVar64 = *(float *)((longlong)pppppppuVar31 + 0x14);
      fVar62 = *(float *)(pppppppuVar31 + 3);
      in_XMM5_Da = *(float *)((longlong)pppppppuVar31 + 4);
      in_XMM5_Db = *(float *)(pppppppuVar31 + 1);
      unaff_XMM8_Da = (int)(uVar16 << 0x1f) >> 0x1f;
      unaff_XMM8_Db = (int)(uVar16 << 0x1f) >> 0x1f;
      in_XMM1_Da = _DAT_142e36f28;
      goto code_r0x000140ac8126;
    case 0x5b:
      ppppppuStack_c8 = (ulonglong ******)0x4304c5d0;
      pppppppuStack_d0 = (ulonglong *******)&pppppppuStack_b8;
      pppppuStack_d8 = (ulonglong *****)0x7;
      goto code_r0x000140ac825e;
    case 0x5c:
      *(byte *)pppppppuVar39 = *(byte *)pppppppuVar39 & bVar54;
      *(byte *)pppppppuVar20 = *(byte *)pppppppuVar20 + bVar54;
      pbVar32 = &UNK_14304c6f9 + uVar19;
      bVar54 = *pbVar32;
      *pbVar32 = *pbVar32 + bVar53;
      pppppppuVar20 =
           (ulonglong *******)(ulonglong)((int)fVar65 + 0x25843c6U + (uint)CARRY1(bVar54,bVar53));
code_r0x000140ac825e:
      apppppppuStack_108[1] = (ulonglong *******)0x140ac8273;
      pppppppuVar25 = (ulonglong *******)pdb_140f66e50(pppppppuVar20);
      return pppppppuVar25;
    case 0x5d:
      goto code_r0x000140ac81ad;
    case 0x5e:
      ppppppuStack_c8 = (ulonglong ******)0x4304c5d0;
      pppppppuStack_d0 = (ulonglong *******)&pppppppuStack_b8;
      pppppuStack_d8 = (ulonglong *****)0x7;
      apppppppuStack_108[1] = (ulonglong *******)0x140ac82ff;
      pppppppuVar25 =
           (ulonglong *******)pdb_140f66e50(pppppppuVar20,&UNK_14304c60c,0xc,&UNK_14304c5f6);
      return pppppppuVar25;
    case 0x5f:
code_r0x000140ac8126:
      fVar65 = (float)(~unaff_XMM8_Da & (uint)fVar64 | (uint)in_XMM5_Da & unaff_XMM8_Da);
      fVar71 = (float)(~unaff_XMM8_Db & (uint)fVar62 | (uint)in_XMM5_Db & unaff_XMM8_Db);
      fVar65 = fVar55 * (fVar64 - fVar65) + fVar65;
      fVar71 = fVar55 * (fVar62 - fVar71) + fVar71;
      uVar22 = CONCAT44(fVar71,fVar65);
      fVar55 = in_XMM0._0_4_ + in_XMM4_Da;
      *(uint *)pppppppuVar31 = 1;
      *(undefined8 *)((longlong)pppppppuVar31 + 4) = uVar22;
      *(float *)((longlong)pppppppuVar31 + 0xc) = fVar55;
      if ((unaff_XMM7_Da != in_XMM1_Da) || (NAN(unaff_XMM7_Da) || NAN(in_XMM1_Da))) {
        uVar22 = CONCAT44(unaff_XMM7_Da * (fVar71 - fVar62) + fVar62,
                          unaff_XMM7_Da * (fVar65 - fVar64) + fVar64);
        fVar55 = (fVar55 - unaff_XMM6_Da) * unaff_XMM7_Da + unaff_XMM6_Da;
      }
      pppppuStack_d8 =
           (ulonglong *****)
           CONCAT44((float)((ulonglong)uVar22 >> 0x20) -
                    (float)((ulonglong)apppppppuStack_80[1] >> 0x20),
                    (float)uVar22 - SUB84(apppppppuStack_80[1],0));
      pppppppuStack_d0 =
           (ulonglong *******)CONCAT44(pppppppuStack_d0._4_4_,fVar55 - (float)uStack_70);
      apppppppuStack_108[1] = (ulonglong *******)&UNK_140ac81a3;
      pdb_140a76ef0(pppppppuVar39,&pppppuStack_d8);
      *(float *)(pppppppuVar39 + 3) = (float)uStack_70;
      pppppppuVar20 = apppppppuStack_80[1];
code_r0x000140ac81ad:
      pppppppuVar39[2] = (ulonglong ******)pppppppuVar20;
      return pppppppuVar39;
    case 0x60:
      return (ulonglong *******)
             CONCAT62((int6)((ulonglong)pppppppuVar20 >> 0x10),CONCAT11(0xbd,bVar54));
    }
    pppppppuVar27 = pppppppuVar31;
    pppppppuVar30 = apppppppuStack_80[1];
    if (apppppppuStack_80[1] != (ulonglong *******)0x0) {
      pppppppuVar24 = (ulonglong *******)0x1;
      apppppppuStack_108[1] = (ulonglong *******)0x140ab924c;
      pub_1406abac0((byte *)uStack_70,(ulonglong)apppppppuStack_80[1],1);
      in_XMM0 = extraout_XMM0;
    }
  } while( true );
code_r0x000140abc600:
  do {
    ppppppuVar21 = ppppppuVar50;
    bVar54 = (byte)arg0;
    pbVar32 = uStackX_10;
    if (ppppppuVar21 == unaff_RBP) {
      while (pbVar32 != param_14) {
        if (((uint)arg0 < 9) && ((uint)arg0 != 5)) {
          while( true ) {
            pbVar37 = pbVar32 + 0x2c;
            param_13 = *(uint *)(pbVar32 + 8);
            param_12 = *(ulonglong ******)pbVar32;
            if ((pbVar32[0x28] == bVar54) && (pbVar32[0x29] == param_25._7_1_)) break;
            pbVar32 = pbVar37;
            if (pbVar37 == param_14) goto code_r0x000140abd031;
          }
        }
        else {
          while( true ) {
            param_13 = *(uint *)(pbVar32 + 8);
            param_12 = *(ulonglong ******)pbVar32;
            if (pbVar32[0x28] == bVar54) break;
            pbVar32 = pbVar32 + 0x2c;
            if (pbVar32 == param_14) goto code_r0x000140abd031;
          }
          pbVar37 = pbVar32 + 0x2c;
        }
        if (_UNK_14304c77c <= _UNK_14304c794) {
                    /* WARNING: Subroutine does not return */
          apppppppuStack_108[1] = (ulonglong *******)0x140abd33f;
          pdb_142dc81f2(_UNK_14304c794,_UNK_14304c77c,&UNK_143043a80);
        }
        uVar4 = *(undefined4 *)(pbVar32 + 0xc);
        uVar7 = *(undefined4 *)(pbVar32 + 0x10);
        fVar64 = *(float *)(pbVar32 + 0x24);
        param_16 = (code *)CONCAT44(param_16._4_4_,param_13);
        apppppppuStack_108[1] = (ulonglong *******)0x140abcc60;
        param_15 = param_12;
        pdb_140a8e190(_UNK_14304c794 * 0x30 + _UNK_14304c774,&param_15);
        if (_UNK_14304c77c <= _UNK_14304c794) {
                    /* WARNING: Subroutine does not return */
          apppppppuStack_108[1] = (ulonglong *******)0x140abd351;
          pdb_142dc81f2(_UNK_14304c794,_UNK_14304c77c,&UNK_143043a80);
        }
        apppppppuStack_108[1] = (ulonglong *******)0x140abcc94;
        pdb_140a8e730(_UNK_14304c794 * 0x30 + _UNK_14304c774,&UNK_14304b4a8,8);
        if (_UNK_14304c77c <= _UNK_14304c794) {
                    /* WARNING: Subroutine does not return */
          apppppppuStack_108[1] = (ulonglong *******)0x140abd363;
          pdb_142dc81f2(_UNK_14304c794,_UNK_14304c77c,&UNK_143043a80);
        }
        apppppppuStack_108[1] = (ulonglong *******)0x140abccc9;
        pdb_140a8e730(_UNK_14304c794 * 0x30 + _UNK_14304c774,&UNK_14304b468,0xc,uVar7);
        if (_UNK_14304c77c <= _UNK_14304c794) {
                    /* WARNING: Subroutine does not return */
          apppppppuStack_108[1] = (ulonglong *******)0x140abd375;
          pdb_142dc81f2(_UNK_14304c794,_UNK_14304c77c,&UNK_143043a80);
        }
        apppppppuStack_108[1] = (ulonglong *******)0x140abccfd;
        pdb_140a8e730(_UNK_14304c794 * 0x30 + _UNK_14304c774,&UNK_14304b4b0,0xe);
        if (_UNK_14304c77c <= _UNK_14304c794) {
                    /* WARNING: Subroutine does not return */
          apppppppuStack_108[1] = (ulonglong *******)0x140abd387;
          pdb_142dc81f2(_UNK_14304c794,_UNK_14304c77c,&UNK_143043a80);
        }
        apppppppuStack_108[1] = (ulonglong *******)0x140abcd32;
        pdb_140a8e730(_UNK_14304c794 * 0x30 + _UNK_14304c774,&UNK_14304b027,0xd,uVar4);
        if (_UNK_14304c77c <= _UNK_14304c794) {
                    /* WARNING: Subroutine does not return */
          apppppppuStack_108[1] = (ulonglong *******)0x140abd31b;
          pdb_142dc81f2(_UNK_14304c794,_UNK_14304c77c,&UNK_143043a80);
        }
        apppppppuStack_108[1] = (ulonglong *******)0x140abcd66;
        pdb_140a8e730(_UNK_14304c794 * 0x30 + _UNK_14304c774,&UNK_14304b120,0xe);
        if (_UNK_14304c77c <= _UNK_14304c794) {
                    /* WARNING: Subroutine does not return */
          apppppppuStack_108[1] = (ulonglong *******)0x140abd32d;
          pdb_142dc81f2(_UNK_14304c794,_UNK_14304c77c,&UNK_143043a80);
        }
        apppppppuStack_108[1] = (ulonglong *******)0x140abcd99;
        pdb_140a8e730(_UNK_14304c794 * 0x30 + _UNK_14304c774,&UNK_14304b4be,10);
        if (param_24 != 0) {
          if (_UNK_14304c77c <= _UNK_14304c794) {
                    /* WARNING: Subroutine does not return */
            apppppppuStack_108[1] = (ulonglong *******)0x140abd3b1;
            pdb_142dc81f2(_UNK_14304c794,_UNK_14304c77c,&UNK_143043a80);
          }
          auVar68._4_4_ = unaff_XMM6_Db;
          auVar68._0_4_ = unaff_XMM6_Da;
          auVar68._8_4_ = unaff_XMM6_Dc;
          auVar68._12_4_ = unaff_XMM6_Dd;
          auVar69._4_12_ = auVar68._4_12_;
          auVar69._0_4_ = unaff_XMM6_Da - fVar64;
          apppppppuStack_108[1] = (ulonglong *******)0x140abcddf;
          pdb_140a8e730(_UNK_14304c794 * 0x30 + _UNK_14304c774,&UNK_14304b298,8,auVar69._0_8_);
          uVar19 = *(ulonglong *)(param_24 + 0x28);
          if (*(ulonglong *)(param_24 + 0x10) <= uVar19) {
                    /* WARNING: Subroutine does not return */
            apppppppuStack_108[1] = (ulonglong *******)0x140abd3c3;
            pdb_142dc81f2(uVar19,*(ulonglong *)(param_24 + 0x10),&UNK_143043a80);
          }
          apppppppuStack_108[1] = (ulonglong *******)0x140abce1a;
          pdb_140a8e730(uVar19 * 0x30 + *(longlong *)(param_24 + 8),&UNK_14304b298,8);
          uVar19 = *(ulonglong *)(param_24 + 0x28);
          if (*(ulonglong *)(param_24 + 0x10) <= uVar19) {
                    /* WARNING: Subroutine does not return */
            apppppppuStack_108[1] = (ulonglong *******)0x140abd3d5;
            pdb_142dc81f2(uVar19,*(ulonglong *)(param_24 + 0x10),&UNK_143043a80);
          }
          param_16 = (code *)CONCAT44(param_16._4_4_,param_13);
          param_15 = param_12;
          apppppppuStack_108[1] = (ulonglong *******)0x140abce65;
          pdb_140a8e190(uVar19 * 0x30 + *(longlong *)(param_24 + 8),&param_15);
          uVar19 = *(ulonglong *)(param_24 + 0x28);
          if (*(ulonglong *)(param_24 + 0x10) <= uVar19) {
                    /* WARNING: Subroutine does not return */
            apppppppuStack_108[1] = (ulonglong *******)0x140abd3e7;
            pdb_142dc81f2(uVar19,*(ulonglong *)(param_24 + 0x10),&UNK_143043a80);
          }
          apppppppuStack_108[1] = (ulonglong *******)0x140abcea0;
          pdb_140a8e730(uVar19 * 0x30 + *(longlong *)(param_24 + 8),&UNK_14304b4a8,8);
          uVar19 = *(ulonglong *)(param_24 + 0x28);
          if (*(ulonglong *)(param_24 + 0x10) <= uVar19) {
                    /* WARNING: Subroutine does not return */
            apppppppuStack_108[1] = (ulonglong *******)0x140abd3f9;
            pdb_142dc81f2(uVar19,*(ulonglong *)(param_24 + 0x10),&UNK_143043a80);
          }
          apppppppuStack_108[1] = (ulonglong *******)0x140abcedc;
          pdb_140a8e730(uVar19 * 0x30 + *(longlong *)(param_24 + 8),&UNK_14304b468,0xc,uVar7);
          uVar19 = *(ulonglong *)(param_24 + 0x28);
          if (*(ulonglong *)(param_24 + 0x10) <= uVar19) {
                    /* WARNING: Subroutine does not return */
            apppppppuStack_108[1] = (ulonglong *******)0x140abd408;
            pdb_142dc81f2(uVar19,*(ulonglong *)(param_24 + 0x10),&UNK_143043a80);
          }
          apppppppuStack_108[1] = (ulonglong *******)0x140abcf17;
          pdb_140a8e730(uVar19 * 0x30 + *(longlong *)(param_24 + 8),&UNK_14304b4b0,0xe);
          uVar19 = *(ulonglong *)(param_24 + 0x28);
          if (*(ulonglong *)(param_24 + 0x10) <= uVar19) {
                    /* WARNING: Subroutine does not return */
            apppppppuStack_108[1] = (ulonglong *******)0x140abd417;
            pdb_142dc81f2(uVar19,*(ulonglong *)(param_24 + 0x10),&UNK_143043a80);
          }
          apppppppuStack_108[1] = (ulonglong *******)0x140abcf53;
          pdb_140a8e730(uVar19 * 0x30 + *(longlong *)(param_24 + 8),&UNK_14304b027,0xd,uVar4);
          uVar19 = *(ulonglong *)(param_24 + 0x28);
          if (*(ulonglong *)(param_24 + 0x10) <= uVar19) {
                    /* WARNING: Subroutine does not return */
            apppppppuStack_108[1] = (ulonglong *******)0x140abd426;
            pdb_142dc81f2(uVar19,*(ulonglong *)(param_24 + 0x10),&UNK_143043a80);
          }
          apppppppuStack_108[1] = (ulonglong *******)0x140abcf8e;
          pdb_140a8e730(uVar19 * 0x30 + *(longlong *)(param_24 + 8),&UNK_14304b120,0xe);
          uVar19 = *(ulonglong *)(param_24 + 0x28);
          if (*(ulonglong *)(param_24 + 0x10) <= uVar19) {
                    /* WARNING: Subroutine does not return */
            apppppppuStack_108[1] = (ulonglong *******)0x140abd435;
            pdb_142dc81f2(uVar19,*(ulonglong *)(param_24 + 0x10),&UNK_143043a80);
          }
          apppppppuStack_108[1] = (ulonglong *******)0x140abcfc8;
          pdb_140a8e730(uVar19 * 0x30 + *(longlong *)(param_24 + 8),&UNK_14304b4be,10);
          apppppppuStack_108[1] = (ulonglong *******)0x140abcfd5;
          pdb_140a87e10(param_24);
        }
        bVar51 = true;
        apppppppuStack_108[1] = (ulonglong *******)0x140abcfe1;
        pdb_140a87e10(&UNK_14304c76c);
        pbVar32 = pbVar37;
      }
code_r0x000140abd031:
      if (!bVar51) {
        apppppppuStack_108[1] = (ulonglong *******)0x140abd03f;
        pdb_140a87f70(&UNK_14304c76c);
        if (param_24 != 0) {
          apppppppuStack_108[1] = (ulonglong *******)0x140abd056;
          pdb_140a87f70(param_24);
        }
      }
      pppppppuVar30 = (ulonglong *******)&UNK_14304c7d8;
      pppppppuVar20 = pppppppuStack_58;
      pppppppuVar27 = uStack_50;
joined_r0x000140abd06a:
      uStack_50 = pppppppuVar27;
      if (pppppppuVar20 == (ulonglong *******)0xc) {
        pppppppuVar25 = (ulonglong *******)0x0;
        if (pppppppuStack_88 != (ulonglong *******)0x0) {
          apppppppuStack_108[1] = (ulonglong *******)0x140abd08f;
          pub_1406abac0(uStackX_10,(longlong)pppppppuStack_88 * 0x2c,4);
          pppppppuVar25 = extraout_RAX;
        }
        if (uStack_70 != (ulonglong *******)0x0) {
          apppppppuStack_108[1] = (ulonglong *******)0x140abd0ab;
          pub_1406abac0((byte *)unaff_retaddr,(longlong)uStack_70 << 5,8);
          pppppppuVar25 = extraout_RAX_00;
        }
        return pppppppuVar25;
      }
      pppppppuVar24 = (ulonglong *******)((longlong)pppppppuVar20 + 1);
      bVar54 = *(byte *)((longlong)&uStack_b0 + (longlong)pppppppuVar20 * 2);
      arg0 = (ulonglong *******)(ulonglong)bVar54;
      pppppppuVar44 =
           (ulonglong *******)
           (ulonglong)*(byte *)((longlong)&uStack_b0 + (longlong)pppppppuVar20 * 2 + 1);
      param_23._0_7_ = CONCAT16(bVar54,SUB86(param_23,0));
      param_23 = (ulonglong *******)(ulonglong)(uint7)param_23;
      pppppppuStack_c0 = pppppppuVar24;
code_r0x000140abc4ed:
      param_23 = (ulonglong *******)CONCAT17((char)pppppppuVar44,(uint7)param_23);
      if (arg0 < (ulonglong *******)0xa) {
        pppppppuStack_58 = pppppppuVar24;
                    /* WARNING: Could not recover jumptable at 0x000140abc509. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        pppppppuVar25 =
             (ulonglong *******)
             (*(code *)((longlong)(int)*(uint *)((longlong)pppppppuVar30 + (longlong)arg0 * 4) +
                       (longlong)pppppppuVar30))(pppppppuVar27);
        return pppppppuVar25;
      }
      param_15 = (ulonglong *****)((longlong)&param_23 + 6);
      param_16 = pdb_140ac81d0;
                    /* WARNING: Subroutine does not return */
      apppppppuStack_108[1] = (ulonglong *******)0x140abd46e;
      pdb_142dc83d0(&UNK_14304b2de,&param_15,&UNK_14304b338);
    }
    ppppppuVar50 = ppppppuVar21 + 4;
    pppppuStackX_20 =
         (ulonglong *****)CONCAT44(pppppuStackX_20._4_4_,*(undefined4 *)(ppppppuVar21 + 2));
    pppppuStackX_18 = ppppppuVar21[1];
  } while (*(byte *)(ppppppuVar21 + 3) != bVar54);
  pppppuVar9 = *ppppppuVar21;
  uVar4 = *(undefined4 *)((longlong)ppppppuVar21 + 0x14);
  switch((ulonglong)arg0 & 0xffffffff) {
  case 0:
  case 1:
  case 2:
  case 3:
  case 4:
  case 6:
  case 7:
  case 8:
    goto code_r0x000140abc656;
  }
  goto code_r0x000140abc65b;
code_r0x000140abc656:
  if (*(byte *)((longlong)ppppppuVar21 + 0x19) == (byte)pppppppuVar44) {
code_r0x000140abc65b:
    plVar10 = (longlong *)*in_stack_000001e8;
    param_15 = pppppuVar9;
    if (plVar10[3] == 0) {
code_r0x000140abd10d:
                    /* WARNING: Subroutine does not return */
      apppppppuStack_108[1] = (ulonglong *******)0x140abd119;
      pdb_142dc8150(&UNK_14304b2b8);
    }
    apppppppuStack_108[1] = (ulonglong *******)0x140abc687;
    uVar19 = pdb_1400af0a0(plVar10 + 4,&param_15);
    lVar42 = *plVar10;
    bVar53 = (byte)(uVar19 >> 0x39);
    auVar56 = ZEXT216(CONCAT11(bVar53,bVar53));
    auVar56 = pshuflw(auVar56,auVar56,0);
    lVar47 = 0;
    while( true ) {
      uVar19 = uVar19 & plVar10[1];
      auVar70 = *(undefined1 (*) [16])(lVar42 + uVar19);
      auVar60[0] = -(auVar70[0] == auVar56[0]);
      auVar60[1] = -(auVar70[1] == auVar56[1]);
      auVar60[2] = -(auVar70[2] == auVar56[2]);
      auVar60[3] = -(auVar70[3] == auVar56[3]);
      auVar60[4] = -(auVar70[4] == auVar56[4]);
      auVar60[5] = -(auVar70[5] == auVar56[5]);
      auVar60[6] = -(auVar70[6] == auVar56[6]);
      auVar60[7] = -(auVar70[7] == auVar56[7]);
      auVar60[8] = -(auVar70[8] == auVar56[0]);
      auVar60[9] = -(auVar70[9] == auVar56[1]);
      auVar60[10] = -(auVar70[10] == auVar56[2]);
      auVar60[0xb] = -(auVar70[0xb] == auVar56[3]);
      auVar60[0xc] = -(auVar70[0xc] == auVar56[4]);
      auVar60[0xd] = -(auVar70[0xd] == auVar56[5]);
      auVar60[0xe] = -(auVar70[0xe] == auVar56[6]);
      auVar60[0xf] = -(auVar70[0xf] == auVar56[7]);
      uVar46 = (ushort)(SUB161(auVar60 >> 7,0) & 1) | (ushort)(SUB161(auVar60 >> 0xf,0) & 1) << 1 |
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
               (ushort)(SUB161(auVar60 >> 0x77,0) & 1) << 0xe | (ushort)(auVar60[0xf] >> 7) << 0xf;
      uVar16 = (uint)uVar46;
      if (uVar46 != 0) break;
code_r0x000140abc6f0:
      auVar58[0] = -(auVar70[0] == (char)unaff_XMM14_Da);
      auVar58[1] = -(auVar70[1] == (char)((uint)unaff_XMM14_Da >> 8));
      auVar58[2] = -(auVar70[2] == (char)((uint)unaff_XMM14_Da >> 0x10));
      auVar58[3] = -(auVar70[3] == (char)((uint)unaff_XMM14_Da >> 0x18));
      auVar58[4] = -(auVar70[4] == (char)unaff_XMM14_Db);
      auVar58[5] = -(auVar70[5] == (char)((uint)unaff_XMM14_Db >> 8));
      auVar58[6] = -(auVar70[6] == (char)((uint)unaff_XMM14_Db >> 0x10));
      auVar58[7] = -(auVar70[7] == (char)((uint)unaff_XMM14_Db >> 0x18));
      auVar58[8] = -(auVar70[8] == (char)unaff_XMM14_Dc);
      auVar58[9] = -(auVar70[9] == (char)((uint)unaff_XMM14_Dc >> 8));
      auVar58[10] = -(auVar70[10] == (char)((uint)unaff_XMM14_Dc >> 0x10));
      auVar58[0xb] = -(auVar70[0xb] == (char)((uint)unaff_XMM14_Dc >> 0x18));
      auVar58[0xc] = -(auVar70[0xc] == (char)unaff_XMM14_Dd);
      auVar58[0xd] = -(auVar70[0xd] == (char)((uint)unaff_XMM14_Dd >> 8));
      auVar58[0xe] = -(auVar70[0xe] == (char)((uint)unaff_XMM14_Dd >> 0x10));
      auVar58[0xf] = -(auVar70[0xf] == (char)((uint)unaff_XMM14_Dd >> 0x18));
      if ((((((((((((((((SUB161(auVar58 >> 7,0) & 1) != 0 || (SUB161(auVar58 >> 0xf,0) & 1) != 0) ||
                      (SUB161(auVar58 >> 0x17,0) & 1) != 0) || (SUB161(auVar58 >> 0x1f,0) & 1) != 0)
                    || (SUB161(auVar58 >> 0x27,0) & 1) != 0) || (SUB161(auVar58 >> 0x2f,0) & 1) != 0
                   ) || (SUB161(auVar58 >> 0x37,0) & 1) != 0) ||
                 (SUB161(auVar58 >> 0x3f,0) & 1) != 0) || (SUB161(auVar58 >> 0x47,0) & 1) != 0) ||
               (SUB161(auVar58 >> 0x4f,0) & 1) != 0) || (SUB161(auVar58 >> 0x57,0) & 1) != 0) ||
             (SUB161(auVar58 >> 0x5f,0) & 1) != 0) || (SUB161(auVar58 >> 0x67,0) & 1) != 0) ||
           (SUB161(auVar58 >> 0x6f,0) & 1) != 0) || (SUB161(auVar58 >> 0x77,0) & 1) != 0) ||
          auVar58[0xf] < '\0') goto code_r0x000140abd10d;
      uVar19 = uVar19 + lVar47 + 0x10;
      lVar47 = lVar47 + 0x10;
    }
    while( true ) {
      uVar13 = 0;
      for (uVar14 = uVar16; (uVar14 & 1) == 0; uVar14 = uVar14 >> 1 | 0x80000000) {
        uVar13 = uVar13 + 1;
      }
      lVar45 = (uVar13 + uVar19 & plVar10[1]) * -0x2b0;
      if (pppppuVar9 == *(ulonglong ******)(lVar42 + -0x2b0 + lVar45)) break;
      uVar46 = (ushort)(uVar16 - 1) & (ushort)uVar16;
      uVar16 = CONCAT22((short)(uVar16 - 1 >> 0x10),uVar46);
      if (uVar46 == 0) goto code_r0x000140abc6f0;
    }
    lVar42 = lVar42 + lVar45;
    if ((*(ulonglong *)(lVar42 + -0x298) < 2) || (*(float *)(lVar42 + -0x278) <= unaff_XMM15_Da)) {
                    /* WARNING: Subroutine does not return */
      apppppppuStack_108[1] = (ulonglong *******)0x140abd1a6;
      pdb_142dc83b0(&UNK_143059e50,0x32,&UNK_14304b2a0);
    }
    cVar3 = *(char *)(lVar42 + -5);
    param_16 = (code *)CONCAT44(param_16._4_4_,pppppuStackX_20._0_4_);
    param_15 = pppppuStackX_18;
    ppppppuStack_c8 = (ulonglong ******)CONCAT71(ppppppuStack_c8._1_7_,cVar3 == '\x02');
    pppppppuStack_d0 = (ulonglong *******)CONCAT44(pppppppuStack_d0._4_4_,uVar4);
    pppppuStack_d8 = (ulonglong *****)&param_15;
    apppppppuStack_108[1] = (ulonglong *******)0x140abc789;
    pdb_140abdad0(*in_stack_000001e8,pppppuVar9,uStackX_8,&UNK_14304c76c);
    if (((bVar54 == 3) || (((ulonglong)arg0 & 0xff) == 0)) &&
       (((ulonglong)param_25 & 0x100000000000000) != 0)) {
      if (_UNK_14304c77c <= _UNK_14304c794) {
                    /* WARNING: Subroutine does not return */
        apppppppuStack_108[1] = (ulonglong *******)0x140abd2d9;
        pdb_142dc81f2(_UNK_14304c794,_UNK_14304c77c,&UNK_143043a80);
      }
      apppppppuStack_108[1] = (ulonglong *******)0x140abc7dc;
      pdb_140a8e730(_UNK_14304c794 * 0x30 + _UNK_14304c774,&UNK_14304b2d0,0xe);
    }
    if (param_24 == 0) goto code_r0x000140abc9fc;
    fVar64 = 0.0;
    if (((*(char *)(lVar42 + -9) != '\x01') || (1 < *(uint *)(lVar42 + -0x50))) ||
       (*(float *)(lVar42 + -0x14) <= 0.0)) goto code_r0x000140abc89e;
    lVar47 = *(longlong *)(lVar42 + -0x210);
    if (lVar47 == 0) {
      if (*(int *)(lVar42 + -0x198) != 1) goto code_r0x000140abd471;
      iVar57 = *(int *)(lVar42 + -0x24);
    }
    else {
      iVar63 = *(int *)(*(longlong *)(lVar42 + -0x218) + 4);
      iVar57 = iVar63;
      if (lVar47 == 1) {
        if (*(char *)(lVar42 + -0x198) != '\0') goto code_r0x000140abc86d;
        goto code_r0x000140abd471;
      }
      uVar48 = (lVar47 * 0xc - 0xcU) / 0xc;
      piVar28 = (int *)(*(longlong *)(lVar42 + -0x218) + 0x10);
      piVar23 = piVar28;
      uVar19 = uVar48;
      do {
        iVar6 = *piVar23;
        uVar15 = CONCAT44((uint)(iVar6 >> 0x1f) >> 1,(uint)(iVar57 >> 0x1f) >> 1) ^
                 CONCAT44(iVar6,iVar57);
        if ((int)uVar15 <= (int)(uVar15 >> 0x20)) {
          iVar6 = iVar57;
        }
        iVar57 = iVar6;
        piVar23 = piVar23 + 3;
        uVar19 = uVar19 - 1;
      } while (uVar19 != 0);
      if (*(char *)(lVar42 + -0x198) == '\0') {
code_r0x000140abd471:
        apppppppuStack_108[1] = (ulonglong *******)0x140abd476;
        pdb_142d8e000();
        goto LAB_140abd477;
      }
      do {
        iVar6 = *piVar28;
        uVar19 = CONCAT44((uint)(iVar6 >> 0x1f) >> 1,(uint)(iVar63 >> 0x1f) >> 1) ^
                 CONCAT44(iVar6,iVar63);
        if ((int)uVar19 <= (int)(uVar19 >> 0x20)) {
          iVar6 = iVar63;
        }
        iVar63 = iVar6;
        piVar28 = piVar28 + 3;
        uVar48 = uVar48 - 1;
      } while (uVar48 != 0);
    }
code_r0x000140abc86d:
    apppppppuStack_108[1] = (ulonglong *******)0x140abc88f;
    fVar64 = (float)pdb_140de8220(iVar57);
    fVar62 = 0.0;
    if (0.0 <= fVar64) {
      fVar62 = fVar64;
    }
    fVar64 = unaff_XMM6_Da;
    if (fVar62 <= unaff_XMM6_Da) {
      fVar64 = fVar62;
    }
code_r0x000140abc89e:
    if (_UNK_14304c77c <= _UNK_14304c794) {
                    /* WARNING: Subroutine does not return */
      apppppppuStack_108[1] = (ulonglong *******)0x140abd29d;
      pdb_142dc81f2(_UNK_14304c794,_UNK_14304c77c,&UNK_143043a80);
    }
    auVar66._4_4_ = unaff_XMM6_Db;
    auVar66._0_4_ = unaff_XMM6_Da;
    auVar66._8_4_ = unaff_XMM6_Dc;
    auVar66._12_4_ = unaff_XMM6_Dd;
    auVar67._4_12_ = auVar66._4_12_;
    auVar67._0_4_ = unaff_XMM6_Da - fVar64;
    apppppppuStack_108[1] = (ulonglong *******)0x140abc8d4;
    pdb_140a8e730(_UNK_14304c794 * 0x30 + _UNK_14304c774,&UNK_14304b298,8,auVar67._0_8_);
    uVar19 = *(ulonglong *)(param_24 + 0x28);
    if (*(ulonglong *)(param_24 + 0x10) <= uVar19) {
                    /* WARNING: Subroutine does not return */
      apppppppuStack_108[1] = (ulonglong *******)0x140abd2af;
      pdb_142dc81f2(uVar19,*(ulonglong *)(param_24 + 0x10),&UNK_143043a80);
    }
    apppppppuStack_108[1] = (ulonglong *******)0x140abc90e;
    pdb_140a8e730(uVar19 * 0x30 + *(longlong *)(param_24 + 8),&UNK_14304b298,8);
    ppppppuStack_c8 = (ulonglong ******)CONCAT71(ppppppuStack_c8._1_7_,cVar3 == '\x02');
    pppppppuStack_d0 = (ulonglong *******)CONCAT44(pppppppuStack_d0._4_4_,uVar4);
    pppppuStack_d8 = (ulonglong *****)&pppppuStackX_18;
    apppppppuStack_108[1] = (ulonglong *******)0x140abc94b;
    pdb_140abdad0(*in_stack_000001e8,pppppuVar9,uStackX_8,param_24);
    *(undefined4 *)(param_24 + 0x20) = 1000000000;
    if (*(char *)(param_24 + 0x34) == '\0') {
      uVar19 = *(ulonglong *)(param_24 + 0x10);
      uVar48 = *(ulonglong *)(param_24 + 0x28);
      if (*(char *)(param_24 + 0x35) != '\0') {
        if (uVar19 <= uVar48) {
                    /* WARNING: Subroutine does not return */
          apppppppuStack_108[1] = (ulonglong *******)0x140abd39f;
          pdb_142dc81f2(uVar48,uVar19,&UNK_143043a20);
        }
        apppppppuStack_108[1] = (ulonglong *******)0x140abc9a3;
        pdb_140a8e730(uVar48 * 0x30 + *(longlong *)(param_24 + 8),&UNK_143043a00,4);
      }
      if (uVar19 <= uVar48) {
                    /* WARNING: Subroutine does not return */
        apppppppuStack_108[1] = (ulonglong *******)0x140abd2f1;
        pdb_142dc81f2(uVar48,uVar19,&UNK_143043a38);
      }
      if (*(int *)(*(longlong *)(param_24 + 8) + uVar48 * 0x30) == 1) {
        apppppppuStack_108[1] = (ulonglong *******)0x140abc9d9;
        pdb_141808ec0(&param_5,*(longlong *)(param_24 + 8) + uVar48 * 0x30 + 8);
        if (param_5 != (ulonglong ****)0x8000000000000004) {
          param_21 = (ulonglong *******)param_11;
          param_16 = (code *)CONCAT71(param_6._1_7_,(byte)param_6);
          param_19 = (byte *)param_9;
          param_20 = (ulonglong *******)param_10;
          param_17 = param_7;
          param_18 = (ulonglong *******)param_8;
          param_15 = (ulonglong *****)param_5;
          pppppuStack_d8 = (ulonglong *****)&UNK_143043dc0;
                    /* WARNING: Subroutine does not return */
          apppppppuStack_108[1] = (ulonglong *******)0x140abd278;
          pdb_142dc8170(&UNK_143044570,0x2b,&param_15,&UNK_143044530);
        }
      }
      *(undefined1 *)(param_24 + 0x34) = 1;
    }
code_r0x000140abc9fc:
    uVar48 = _UNK_14304c794;
    uVar19 = _UNK_14304c77c;
    _UNK_14304c78c = 1000000000;
    bVar51 = true;
    pppppppuVar44 = (ulonglong *******)((ulonglong)param_25 >> 0x38);
    if (UNK_14304c7a0 == '\0') {
      if (UNK_14304c7a1 != '\0') {
        if (_UNK_14304c77c <= _UNK_14304c794) {
                    /* WARNING: Subroutine does not return */
          apppppppuStack_108[1] = (ulonglong *******)0x140abd309;
          pdb_142dc81f2(_UNK_14304c794,_UNK_14304c77c,&UNK_143043a20);
        }
        apppppppuStack_108[1] = (ulonglong *******)0x140abca53;
        pdb_140a8e730(_UNK_14304c794 * 0x30 + _UNK_14304c774,&UNK_143043a00,4);
      }
      if (uVar19 <= uVar48) {
                    /* WARNING: Subroutine does not return */
        apppppppuStack_108[1] = (ulonglong *******)0x140abd2c7;
        pdb_142dc81f2(uVar48,uVar19,&UNK_143043a38);
      }
      if (*(int *)(_UNK_14304c774 + uVar48 * 0x30) == 1) {
        apppppppuStack_108[1] = (ulonglong *******)0x140abca82;
        pdb_141808ec0(&param_5,_UNK_14304c774 + uVar48 * 0x30 + 8);
        if (param_5 != (ulonglong ****)0x8000000000000004) {
          param_21 = (ulonglong *******)param_11;
          param_16 = (code *)CONCAT71(param_6._1_7_,(byte)param_6);
          param_19 = (byte *)param_9;
          param_20 = (ulonglong *******)param_10;
          param_17 = param_7;
          param_18 = (ulonglong *******)param_8;
          param_15 = (ulonglong *****)param_5;
          pppppuStack_d8 = (ulonglong *****)&UNK_143043dc0;
                    /* WARNING: Subroutine does not return */
          apppppppuStack_108[1] = (ulonglong *******)0x140abd20f;
          pdb_142dc8170(&UNK_143044570,0x2b,&param_15,&UNK_143044530);
        }
      }
      UNK_14304c7a0 = '\x01';
      pppppppuVar44 = (ulonglong *******)((ulonglong)param_25 >> 0x38);
    }
  }
  goto code_r0x000140abc600;
}

