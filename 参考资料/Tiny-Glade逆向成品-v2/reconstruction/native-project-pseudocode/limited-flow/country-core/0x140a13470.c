// VA 0x140a13470, PDB extent 15782 bytes
// country_core::game_key_bindings::KeyBindings::assign_input
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/game_key_bindings.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001430388f5) overlaps instruction at (ram,0x0001430388f4)
    */
/* WARNING: Removing unreachable block (ram,0x000140f3c374) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: country_core::game_key_bindings::KeyBindings::assign_input
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/game_key_bindings.rs
   Extent: 15782 */

ulonglong * pdb_140a13470(longlong *param_1,longlong *param_2,longlong *param_3)

{
  char *pcVar1;
  char *pcVar2;
  code *pcVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  char cVar7;
  uint uVar8;
  undefined4 uVar9;
  ulonglong *puVar10;
  ulonglong *extraout_RAX;
  byte *pbVar11;
  longlong lVar12;
  byte *arg0;
  byte *pbVar13;
  ulonglong uVar14;
  longlong *plVar15;
  undefined8 uVar16;
  longlong *plVar17;
  longlong *plVar18;
  ulonglong uVar19;
  longlong *unaff_RBX;
  longlong *plVar20;
  undefined1 *puVar21;
  ulonglong *puVar22;
  ulonglong *puVar23;
  undefined1 *puVar24;
  longlong *plVar25;
  longlong *unaff_RSI;
  longlong *unaff_RDI;
  uint uVar26;
  longlong *plVar27;
  longlong lVar28;
  longlong *unaff_R12;
  longlong *unaff_R13;
  longlong *plVar29;
  undefined8 uVar30;
  longlong *plVar31;
  longlong *plVar32;
  longlong *plVar33;
  bool bVar34;
  bool bVar35;
  byte bVar36;
  ulonglong uVar37;
  longlong *plStackX_8;
  byte *pbStackX_10;
  byte *pbStackX_18;
  undefined4 uStackX_20;
  undefined4 uStackX_24;
  longlong *plStack0000000000000040;
  byte bStack0000000000000054;
  byte in_stack_ffffffff9dd745b5;
  undefined1 auStack_f0 [16];
  undefined8 uStack_e0;
  longlong *plStack_d8;
  longlong *plStack_d0;
  longlong *plStack_c8;
  longlong *plStack_c0;
  longlong *plStack_b8;
  longlong *plStack_b0;
  undefined1 auStack_a8 [8];
  byte abStack_a0 [8];
  longlong *plStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  longlong *plStack_80;
  longlong *plStack_78;
  longlong *plStack_70;
  longlong *plStack_68;
  longlong *plStack_60;
  longlong lStack_58;
  longlong *plStack_50;
  longlong lStack_48;
  
  bVar36 = 0;
  puVar21 = auStack_a8;
  puVar22 = (ulonglong *)auStack_a8;
  puVar23 = (ulonglong *)auStack_a8;
  plVar25 = &lStack_48;
  lStack_48 = -2;
  plStack_80 = param_3;
  uStack_88 = (longlong *)CONCAT17((char)param_2,(undefined7)uStack_88);
  plVar18 = (longlong *)param_1[0x62];
  plStack_50 = param_1;
  plVar20 = unaff_RBX;
  if (plVar18 != (longlong *)0x0) {
    unaff_R13 = (longlong *)param_1[0x61];
    unaff_RSI = (longlong *)param_3[1];
    unaff_RDI = (longlong *)param_3[2];
    plVar33 = (longlong *)-(longlong)plVar18;
    lStack_58 = (longlong)plVar18 * 0xc + -0xc;
    plVar20 = (longlong *)((longlong)unaff_R13 + 0xc);
    plVar29 = (longlong *)0x0;
LAB_140a134e0:
    plVar33 = (longlong *)((longlong)plVar33 + 1);
    plStack_b0 = (longlong *)0x140a134fa;
    param_2 = unaff_RSI;
    param_3 = unaff_RDI;
    cVar7 = pdb_14182b120((longlong)plVar29 * 0xc + (longlong)unaff_R13);
    unaff_R12 = (longlong *)((longlong)plVar29 + 1);
    if (cVar7 == '\0') goto code_r0x000140a13508;
    plVar32 = plVar20;
    plVar31 = unaff_R13;
    if (unaff_R12 < plVar18) {
      do {
        plStack_78 = plVar31;
        plStack_b0 = (longlong *)0x140a14a4e;
        param_2 = unaff_RSI;
        param_3 = unaff_RDI;
        plStack_70 = plVar33;
        plStack_68 = plVar32;
        plStack_60 = plVar29;
        cVar7 = pdb_14182b120();
        if (cVar7 == '\0') {
          *(int *)((longlong)unaff_R13 + (longlong)plStack_60 * 0xc + 8) = (int)plStack_68[1];
          param_2 = (longlong *)*plStack_68;
          *(longlong **)((longlong)unaff_R13 + (longlong)plStack_60 * 0xc) = param_2;
          plVar29 = (longlong *)((longlong)plStack_60 + 1);
          lStack_58 = lStack_58 + -0xc;
        }
        else {
          lStack_58 = lStack_58 + -0xc;
          plVar29 = plStack_60;
        }
        plVar33 = (longlong *)((longlong)plStack_70 + 1);
        plVar32 = (longlong *)((longlong)plStack_68 + 0xc);
        plVar31 = plStack_78;
      } while (plVar33 != (longlong *)0x0);
    }
    plStack_50[0x62] = (longlong)plVar29;
    plVar18 = (longlong *)plStack_50[0x65];
    unaff_R12 = plVar29;
    goto joined_r0x000140a14a86;
  }
LAB_140a1351c:
  plVar18 = (longlong *)plStack_50[0x65];
joined_r0x000140a14a86:
  if (plVar18 != (longlong *)0x0) {
    unaff_R13 = (longlong *)plStack_50[100];
    unaff_RSI = (longlong *)plStack_80[1];
    unaff_RDI = (longlong *)plStack_80[2];
    plVar33 = (longlong *)-(longlong)plVar18;
    lStack_58 = (longlong)plVar18 * 0xc + -0xc;
    plVar20 = (longlong *)((longlong)unaff_R13 + 0xc);
    unaff_R12 = (longlong *)0x0;
LAB_140a13570:
    plVar33 = (longlong *)((longlong)plVar33 + 1);
    plStack_b0 = (longlong *)0x140a1358a;
    param_2 = unaff_RSI;
    param_3 = unaff_RDI;
    cVar7 = pdb_14182b120((longlong)unaff_R12 * 0xc + (longlong)unaff_R13);
    plVar29 = (longlong *)((longlong)unaff_R12 + 1);
    if (cVar7 == '\0') goto code_r0x000140a13598;
    plVar32 = unaff_R13;
    if (plVar29 < plVar18) {
      do {
        plStack_78 = plVar32;
        plStack_b0 = (longlong *)0x140a14aeb;
        param_2 = unaff_RSI;
        param_3 = unaff_RDI;
        plStack_70 = plVar33;
        plStack_68 = plVar20;
        plStack_60 = unaff_R12;
        cVar7 = pdb_14182b120(plVar20);
        if (cVar7 == '\0') {
          *(int *)((longlong)unaff_R13 + (longlong)plStack_60 * 0xc + 8) = (int)plStack_68[1];
          *(longlong *)((longlong)unaff_R13 + (longlong)plStack_60 * 0xc) = *plStack_68;
          lStack_58 = lStack_58 + -0xc;
          unaff_R12 = (longlong *)((longlong)plStack_60 + 1);
        }
        else {
          lStack_58 = lStack_58 + -0xc;
          unaff_R12 = plStack_60;
        }
        plVar33 = (longlong *)((longlong)plStack_70 + 1);
        plVar20 = (longlong *)((longlong)plStack_68 + 0xc);
        plVar32 = plStack_78;
      } while (plVar33 != (longlong *)0x0);
    }
    plStack_50[0x65] = (longlong)unaff_R12;
  }
LAB_140a135ac:
  plVar18 = (longlong *)plStack_50[0x68];
  if (plVar18 != (longlong *)0x0) {
    unaff_R13 = (longlong *)plStack_50[0x67];
    unaff_RSI = (longlong *)plStack_80[1];
    unaff_RDI = (longlong *)plStack_80[2];
    plVar33 = (longlong *)-(longlong)plVar18;
    lStack_58 = (longlong)plVar18 * 0xc + -0xc;
    plVar20 = (longlong *)((longlong)unaff_R13 + 0xc);
    plVar29 = (longlong *)0x0;
LAB_140a13600:
    plVar33 = (longlong *)((longlong)plVar33 + 1);
    plStack_b0 = (longlong *)0x140a1361a;
    param_2 = unaff_RSI;
    param_3 = unaff_RDI;
    cVar7 = pdb_14182b120((longlong)plVar29 * 0xc + (longlong)unaff_R13);
    unaff_R12 = (longlong *)((longlong)plVar29 + 1);
    if (cVar7 == '\0') goto code_r0x000140a13628;
    plVar32 = unaff_R13;
    if (unaff_R12 < plVar18) {
      do {
        plStack_78 = plVar32;
        plStack_b0 = (longlong *)0x140a14b7b;
        param_2 = unaff_RSI;
        param_3 = unaff_RDI;
        plStack_70 = plVar33;
        plStack_68 = plVar20;
        plStack_60 = plVar29;
        cVar7 = pdb_14182b120(plVar20);
        plVar29 = plStack_60;
        if (cVar7 == '\0') {
          *(int *)((longlong)unaff_R13 + (longlong)plStack_60 * 0xc + 8) = (int)plStack_68[1];
          *(longlong *)((longlong)unaff_R13 + (longlong)plStack_60 * 0xc) = *plStack_68;
          plVar29 = (longlong *)((longlong)plStack_60 + 1);
        }
        lStack_58 = lStack_58 + -0xc;
        plVar20 = (longlong *)((longlong)plStack_68 + 0xc);
        plVar33 = (longlong *)((longlong)plStack_70 + 1);
        plVar32 = plStack_78;
      } while (plVar33 != (longlong *)0x0);
    }
    plStack_50[0x68] = (longlong)plVar29;
    plVar18 = (longlong *)plStack_50[0x6b];
    unaff_R12 = plVar29;
    goto joined_r0x000140a14bab;
  }
LAB_140a1363c:
  plVar18 = (longlong *)plStack_50[0x6b];
joined_r0x000140a14bab:
  if (plVar18 != (longlong *)0x0) {
    unaff_R13 = (longlong *)plStack_50[0x6a];
    unaff_RSI = (longlong *)plStack_80[1];
    unaff_RDI = (longlong *)plStack_80[2];
    plVar33 = (longlong *)-(longlong)plVar18;
    lStack_58 = (longlong)plVar18 * 0xc + -0xc;
    plVar20 = (longlong *)((longlong)unaff_R13 + 0xc);
    unaff_R12 = (longlong *)0x0;
LAB_140a13690:
    plVar33 = (longlong *)((longlong)plVar33 + 1);
    plStack_b0 = (longlong *)0x140a136aa;
    param_2 = unaff_RSI;
    param_3 = unaff_RDI;
    cVar7 = pdb_14182b120((longlong)unaff_R12 * 0xc + (longlong)unaff_R13);
    plVar29 = (longlong *)((longlong)unaff_R12 + 1);
    if (cVar7 == '\0') goto code_r0x000140a136b8;
    plVar32 = unaff_R13;
    if (plVar29 < plVar18) {
      do {
        plStack_78 = plVar32;
        plStack_b0 = (longlong *)0x140a14c17;
        param_2 = unaff_RSI;
        param_3 = unaff_RDI;
        plStack_70 = plVar33;
        plStack_68 = plVar20;
        plStack_60 = unaff_R12;
        cVar7 = pdb_14182b120(plVar20);
        unaff_R12 = plStack_60;
        if (cVar7 == '\0') {
          *(int *)((longlong)unaff_R13 + (longlong)plStack_60 * 0xc + 8) = (int)plStack_68[1];
          *(longlong *)((longlong)unaff_R13 + (longlong)plStack_60 * 0xc) = *plStack_68;
          unaff_R12 = (longlong *)((longlong)plStack_60 + 1);
        }
        lStack_58 = lStack_58 + -0xc;
        plVar20 = (longlong *)((longlong)plStack_68 + 0xc);
        plVar33 = (longlong *)((longlong)plStack_70 + 1);
        plVar32 = plStack_78;
      } while (plVar33 != (longlong *)0x0);
    }
    plStack_50[0x6b] = (longlong)unaff_R12;
  }
LAB_140a136cc:
  plVar18 = (longlong *)plStack_50[0x6e];
  if (plVar18 != (longlong *)0x0) {
    unaff_R13 = (longlong *)plStack_50[0x6d];
    unaff_RSI = (longlong *)plStack_80[1];
    unaff_RDI = (longlong *)plStack_80[2];
    plVar33 = (longlong *)-(longlong)plVar18;
    lStack_58 = (longlong)plVar18 * 0xc + -0xc;
    plVar20 = (longlong *)((longlong)unaff_R13 + 0xc);
    plVar29 = (longlong *)0x0;
LAB_140a13720:
    plVar33 = (longlong *)((longlong)plVar33 + 1);
    plStack_b0 = (longlong *)0x140a1373a;
    param_2 = unaff_RSI;
    param_3 = unaff_RDI;
    cVar7 = pdb_14182b120((longlong)plVar29 * 0xc + (longlong)unaff_R13);
    unaff_R12 = (longlong *)((longlong)plVar29 + 1);
    if (cVar7 == '\0') goto code_r0x000140a13748;
    plVar32 = unaff_R13;
    if (unaff_R12 < plVar18) {
      do {
        plStack_78 = plVar32;
        plStack_b0 = (longlong *)0x140a14c98;
        param_2 = unaff_RSI;
        param_3 = unaff_RDI;
        plStack_70 = plVar33;
        plStack_68 = plVar20;
        plStack_60 = plVar29;
        cVar7 = pdb_14182b120(plVar20);
        if (cVar7 == '\0') {
          *(int *)((longlong)unaff_R13 + (longlong)plStack_60 * 0xc + 8) = (int)plStack_68[1];
          *(longlong *)((longlong)unaff_R13 + (longlong)plStack_60 * 0xc) = *plStack_68;
          lStack_58 = lStack_58 + -0xc;
          plVar29 = (longlong *)((longlong)plStack_60 + 1);
        }
        else {
          lStack_58 = lStack_58 + -0xc;
          plVar29 = plStack_60;
        }
        plVar33 = (longlong *)((longlong)plStack_70 + 1);
        plVar20 = (longlong *)((longlong)plStack_68 + 0xc);
        plVar32 = plStack_78;
      } while (plVar33 != (longlong *)0x0);
    }
    plStack_50[0x6e] = (longlong)plVar29;
    plVar18 = (longlong *)plStack_50[0x71];
    unaff_R12 = plVar29;
    goto joined_r0x000140a14cd0;
  }
LAB_140a1375c:
  plVar18 = (longlong *)plStack_50[0x71];
joined_r0x000140a14cd0:
  if (plVar18 != (longlong *)0x0) {
    unaff_R13 = (longlong *)plStack_50[0x70];
    unaff_RSI = (longlong *)plStack_80[1];
    unaff_RDI = (longlong *)plStack_80[2];
    plVar33 = (longlong *)-(longlong)plVar18;
    lStack_58 = (longlong)plVar18 * 0xc + -0xc;
    plVar20 = (longlong *)((longlong)unaff_R13 + 0xc);
    unaff_R12 = (longlong *)0x0;
LAB_140a137b0:
    plVar33 = (longlong *)((longlong)plVar33 + 1);
    plStack_b0 = (longlong *)0x140a137ca;
    param_2 = unaff_RSI;
    param_3 = unaff_RDI;
    cVar7 = pdb_14182b120((longlong)unaff_R12 * 0xc + (longlong)unaff_R13);
    plVar29 = (longlong *)((longlong)unaff_R12 + 1);
    if (cVar7 == '\0') goto code_r0x000140a137d8;
    plVar32 = unaff_R13;
    if (plVar29 < plVar18) {
      do {
        plStack_78 = plVar32;
        plStack_b0 = (longlong *)0x140a14d35;
        param_2 = unaff_RSI;
        param_3 = unaff_RDI;
        plStack_70 = plVar33;
        plStack_68 = plVar20;
        plStack_60 = unaff_R12;
        cVar7 = pdb_14182b120(plVar20);
        if (cVar7 == '\0') {
          *(int *)((longlong)unaff_R13 + (longlong)plStack_60 * 0xc + 8) = (int)plStack_68[1];
          *(longlong *)((longlong)unaff_R13 + (longlong)plStack_60 * 0xc) = *plStack_68;
          lStack_58 = lStack_58 + -0xc;
          unaff_R12 = (longlong *)((longlong)plStack_60 + 1);
        }
        else {
          lStack_58 = lStack_58 + -0xc;
          unaff_R12 = plStack_60;
        }
        plVar33 = (longlong *)((longlong)plStack_70 + 1);
        plVar20 = (longlong *)((longlong)plStack_68 + 0xc);
        plVar32 = plStack_78;
      } while (plVar33 != (longlong *)0x0);
    }
    plStack_50[0x71] = (longlong)unaff_R12;
  }
LAB_140a137ec:
  plVar18 = (longlong *)plStack_50[0x74];
  if (plVar18 != (longlong *)0x0) {
    unaff_R13 = (longlong *)plStack_50[0x73];
    unaff_RSI = (longlong *)plStack_80[1];
    unaff_RDI = (longlong *)plStack_80[2];
    plVar33 = (longlong *)-(longlong)plVar18;
    lStack_58 = (longlong)plVar18 * 0xc + -0xc;
    plVar20 = (longlong *)((longlong)unaff_R13 + 0xc);
    plVar29 = (longlong *)0x0;
LAB_140a13840:
    plVar33 = (longlong *)((longlong)plVar33 + 1);
    plStack_b0 = (longlong *)0x140a1385a;
    param_2 = unaff_RSI;
    param_3 = unaff_RDI;
    cVar7 = pdb_14182b120((longlong)plVar29 * 0xc + (longlong)unaff_R13);
    unaff_R12 = (longlong *)((longlong)plVar29 + 1);
    if (cVar7 == '\0') goto code_r0x000140a13868;
    plVar32 = unaff_R13;
    if (unaff_R12 < plVar18) {
      do {
        plStack_78 = plVar32;
        plStack_b0 = (longlong *)0x140a14dc5;
        param_2 = unaff_RSI;
        param_3 = unaff_RDI;
        plStack_70 = plVar33;
        plStack_68 = plVar20;
        plStack_60 = plVar29;
        cVar7 = pdb_14182b120(plVar20);
        plVar29 = plStack_60;
        if (cVar7 == '\0') {
          *(int *)((longlong)unaff_R13 + (longlong)plStack_60 * 0xc + 8) = (int)plStack_68[1];
          *(longlong *)((longlong)unaff_R13 + (longlong)plStack_60 * 0xc) = *plStack_68;
          plVar29 = (longlong *)((longlong)plStack_60 + 1);
        }
        lStack_58 = lStack_58 + -0xc;
        plVar20 = (longlong *)((longlong)plStack_68 + 0xc);
        plVar33 = (longlong *)((longlong)plStack_70 + 1);
        plVar32 = plStack_78;
      } while (plVar33 != (longlong *)0x0);
    }
    plStack_50[0x74] = (longlong)plVar29;
    plVar18 = (longlong *)plStack_50[0x77];
    unaff_R12 = plVar29;
    goto joined_r0x000140a14df5;
  }
LAB_140a1387c:
  plVar18 = (longlong *)plStack_50[0x77];
joined_r0x000140a14df5:
  if (plVar18 != (longlong *)0x0) {
    unaff_R13 = (longlong *)plStack_50[0x76];
    unaff_RSI = (longlong *)plStack_80[1];
    unaff_RDI = (longlong *)plStack_80[2];
    plVar33 = (longlong *)-(longlong)plVar18;
    lStack_58 = (longlong)plVar18 * 0xc + -0xc;
    plVar20 = (longlong *)((longlong)unaff_R13 + 0xc);
    unaff_R12 = (longlong *)0x0;
LAB_140a138d0:
    plVar33 = (longlong *)((longlong)plVar33 + 1);
    plStack_b0 = (longlong *)0x140a138ea;
    param_2 = unaff_RSI;
    param_3 = unaff_RDI;
    cVar7 = pdb_14182b120((longlong)unaff_R12 * 0xc + (longlong)unaff_R13);
    plVar29 = (longlong *)((longlong)unaff_R12 + 1);
    if (cVar7 == '\0') goto code_r0x000140a138f8;
    plVar32 = unaff_R13;
    if (plVar29 < plVar18) {
      do {
        plStack_78 = plVar32;
        plStack_b0 = (longlong *)0x140a14e61;
        param_2 = unaff_RSI;
        param_3 = unaff_RDI;
        plStack_70 = plVar33;
        plStack_68 = plVar20;
        plStack_60 = unaff_R12;
        cVar7 = pdb_14182b120(plVar20);
        unaff_R12 = plStack_60;
        if (cVar7 == '\0') {
          *(int *)((longlong)unaff_R13 + (longlong)plStack_60 * 0xc + 8) = (int)plStack_68[1];
          *(longlong *)((longlong)unaff_R13 + (longlong)plStack_60 * 0xc) = *plStack_68;
          unaff_R12 = (longlong *)((longlong)plStack_60 + 1);
        }
        lStack_58 = lStack_58 + -0xc;
        plVar20 = (longlong *)((longlong)plStack_68 + 0xc);
        plVar33 = (longlong *)((longlong)plStack_70 + 1);
        plVar32 = plStack_78;
      } while (plVar33 != (longlong *)0x0);
    }
    plStack_50[0x77] = (longlong)unaff_R12;
  }
LAB_140a1390c:
  plVar18 = (longlong *)plStack_50[0xe];
  if (plVar18 != (longlong *)0x0) {
    unaff_R13 = (longlong *)plStack_50[0xd];
    unaff_RSI = (longlong *)plStack_80[1];
    unaff_RDI = (longlong *)plStack_80[2];
    plVar33 = (longlong *)-(longlong)plVar18;
    lStack_58 = (longlong)plVar18 * 0xc + -0xc;
    plVar20 = (longlong *)((longlong)unaff_R13 + 0xc);
    plVar29 = (longlong *)0x0;
LAB_140a13950:
    plVar33 = (longlong *)((longlong)plVar33 + 1);
    plStack_b0 = (longlong *)0x140a1396a;
    param_2 = unaff_RSI;
    param_3 = unaff_RDI;
    cVar7 = pdb_14182b120((longlong)plVar29 * 0xc + (longlong)unaff_R13);
    unaff_R12 = (longlong *)((longlong)plVar29 + 1);
    if (cVar7 == '\0') goto code_r0x000140a13978;
    plVar32 = unaff_R13;
    if (unaff_R12 < plVar18) {
      do {
        plStack_78 = plVar32;
        plStack_b0 = (longlong *)0x140a14ee2;
        param_2 = unaff_RSI;
        param_3 = unaff_RDI;
        plStack_70 = plVar33;
        plStack_68 = plVar20;
        plStack_60 = plVar29;
        cVar7 = pdb_14182b120(plVar20);
        if (cVar7 == '\0') {
          *(int *)((longlong)unaff_R13 + (longlong)plStack_60 * 0xc + 8) = (int)plStack_68[1];
          *(longlong *)((longlong)unaff_R13 + (longlong)plStack_60 * 0xc) = *plStack_68;
          lStack_58 = lStack_58 + -0xc;
          plVar29 = (longlong *)((longlong)plStack_60 + 1);
        }
        else {
          lStack_58 = lStack_58 + -0xc;
          plVar29 = plStack_60;
        }
        plVar33 = (longlong *)((longlong)plStack_70 + 1);
        plVar20 = (longlong *)((longlong)plStack_68 + 0xc);
        plVar32 = plStack_78;
      } while (plVar33 != (longlong *)0x0);
    }
    plStack_50[0xe] = (longlong)plVar29;
    plVar18 = (longlong *)plStack_50[0x11];
    unaff_R12 = plVar29;
    goto joined_r0x000140a14f17;
  }
LAB_140a1398c:
  plVar18 = (longlong *)plStack_50[0x11];
joined_r0x000140a14f17:
  if (plVar18 != (longlong *)0x0) {
    unaff_R13 = (longlong *)plStack_50[0x10];
    unaff_RSI = (longlong *)plStack_80[1];
    unaff_RDI = (longlong *)plStack_80[2];
    plVar33 = (longlong *)-(longlong)plVar18;
    lStack_58 = (longlong)plVar18 * 0xc + -0xc;
    plVar20 = (longlong *)((longlong)unaff_R13 + 0xc);
    unaff_R12 = (longlong *)0x0;
LAB_140a139e0:
    plVar33 = (longlong *)((longlong)plVar33 + 1);
    plStack_b0 = (longlong *)0x140a139fa;
    param_2 = unaff_RSI;
    param_3 = unaff_RDI;
    cVar7 = pdb_14182b120((longlong)unaff_R12 * 0xc + (longlong)unaff_R13);
    plVar29 = (longlong *)((longlong)unaff_R12 + 1);
    if (cVar7 == '\0') goto code_r0x000140a13a08;
    plVar32 = unaff_R13;
    if (plVar29 < plVar18) {
      do {
        plStack_78 = plVar32;
        plStack_b0 = (longlong *)0x140a14f7c;
        param_2 = unaff_RSI;
        param_3 = unaff_RDI;
        plStack_70 = plVar33;
        plStack_68 = plVar20;
        plStack_60 = unaff_R12;
        cVar7 = pdb_14182b120(plVar20);
        if (cVar7 == '\0') {
          *(int *)((longlong)unaff_R13 + (longlong)plStack_60 * 0xc + 8) = (int)plStack_68[1];
          *(longlong *)((longlong)unaff_R13 + (longlong)plStack_60 * 0xc) = *plStack_68;
          lStack_58 = lStack_58 + -0xc;
          unaff_R12 = (longlong *)((longlong)plStack_60 + 1);
        }
        else {
          lStack_58 = lStack_58 + -0xc;
          unaff_R12 = plStack_60;
        }
        plVar33 = (longlong *)((longlong)plStack_70 + 1);
        plVar20 = (longlong *)((longlong)plStack_68 + 0xc);
        plVar32 = plStack_78;
      } while (plVar33 != (longlong *)0x0);
    }
    plStack_50[0x11] = (longlong)unaff_R12;
  }
LAB_140a13a1c:
  plVar18 = (longlong *)plStack_50[8];
  if (plVar18 != (longlong *)0x0) {
    unaff_R13 = (longlong *)plStack_50[7];
    unaff_RSI = (longlong *)plStack_80[1];
    unaff_RDI = (longlong *)plStack_80[2];
    plVar33 = (longlong *)-(longlong)plVar18;
    lStack_58 = (longlong)plVar18 * 0xc + -0xc;
    plVar20 = (longlong *)((longlong)unaff_R13 + 0xc);
    plVar29 = (longlong *)0x0;
LAB_140a13a60:
    plVar33 = (longlong *)((longlong)plVar33 + 1);
    plStack_b0 = (longlong *)0x140a13a7a;
    param_2 = unaff_RSI;
    param_3 = unaff_RDI;
    cVar7 = pdb_14182b120((longlong)plVar29 * 0xc + (longlong)unaff_R13);
    unaff_R12 = (longlong *)((longlong)plVar29 + 1);
    if (cVar7 == '\0') goto code_r0x000140a13a88;
    plVar32 = unaff_R13;
    if (unaff_R12 < plVar18) {
      do {
        plStack_78 = plVar32;
        plStack_b0 = (longlong *)0x140a15005;
        param_2 = unaff_RSI;
        param_3 = unaff_RDI;
        plStack_70 = plVar33;
        plStack_68 = plVar20;
        plStack_60 = plVar29;
        cVar7 = pdb_14182b120(plVar20);
        if (cVar7 == '\0') {
          *(int *)((longlong)unaff_R13 + (longlong)plStack_60 * 0xc + 8) = (int)plStack_68[1];
          *(longlong *)((longlong)unaff_R13 + (longlong)plStack_60 * 0xc) = *plStack_68;
          lStack_58 = lStack_58 + -0xc;
          plVar29 = (longlong *)((longlong)plStack_60 + 1);
        }
        else {
          lStack_58 = lStack_58 + -0xc;
          plVar29 = plStack_60;
        }
        plVar33 = (longlong *)((longlong)plStack_70 + 1);
        plVar20 = (longlong *)((longlong)plStack_68 + 0xc);
        plVar32 = plStack_78;
      } while (plVar33 != (longlong *)0x0);
    }
    plStack_50[8] = (longlong)plVar29;
    plVar18 = (longlong *)plStack_50[0xb];
    unaff_R12 = plVar29;
    goto joined_r0x000140a15037;
  }
LAB_140a13a9c:
  plVar18 = (longlong *)plStack_50[0xb];
joined_r0x000140a15037:
  if (plVar18 != (longlong *)0x0) {
    unaff_R13 = (longlong *)plStack_50[10];
    unaff_RSI = (longlong *)plStack_80[1];
    unaff_RDI = (longlong *)plStack_80[2];
    plVar33 = (longlong *)-(longlong)plVar18;
    lStack_58 = (longlong)plVar18 * 0xc + -0xc;
    plVar20 = (longlong *)((longlong)unaff_R13 + 0xc);
    unaff_R12 = (longlong *)0x0;
LAB_140a13ae0:
    plVar33 = (longlong *)((longlong)plVar33 + 1);
    plStack_b0 = (longlong *)0x140a13afa;
    param_2 = unaff_RSI;
    param_3 = unaff_RDI;
    cVar7 = pdb_14182b120((longlong)unaff_R12 * 0xc + (longlong)unaff_R13);
    plVar29 = (longlong *)((longlong)unaff_R12 + 1);
    if (cVar7 == '\0') goto code_r0x000140a13b08;
    plVar32 = unaff_R13;
    if (plVar29 < plVar18) {
      do {
        plStack_78 = plVar32;
        plStack_b0 = (longlong *)0x140a1509c;
        param_2 = unaff_RSI;
        param_3 = unaff_RDI;
        plStack_70 = plVar33;
        plStack_68 = plVar20;
        plStack_60 = unaff_R12;
        cVar7 = pdb_14182b120(plVar20);
        if (cVar7 == '\0') {
          *(int *)((longlong)unaff_R13 + (longlong)plStack_60 * 0xc + 8) = (int)plStack_68[1];
          *(longlong *)((longlong)unaff_R13 + (longlong)plStack_60 * 0xc) = *plStack_68;
          lStack_58 = lStack_58 + -0xc;
          unaff_R12 = (longlong *)((longlong)plStack_60 + 1);
        }
        else {
          lStack_58 = lStack_58 + -0xc;
          unaff_R12 = plStack_60;
        }
        plVar33 = (longlong *)((longlong)plStack_70 + 1);
        plVar20 = (longlong *)((longlong)plStack_68 + 0xc);
        plVar32 = plStack_78;
      } while (plVar33 != (longlong *)0x0);
    }
    plStack_50[0xb] = (longlong)unaff_R12;
  }
LAB_140a13b1c:
  plVar18 = (longlong *)plStack_50[2];
  if (plVar18 != (longlong *)0x0) {
    unaff_R13 = (longlong *)plStack_50[1];
    unaff_RSI = (longlong *)plStack_80[1];
    unaff_RDI = (longlong *)plStack_80[2];
    plVar33 = (longlong *)-(longlong)plVar18;
    lStack_58 = (longlong)plVar18 * 0xc + -0xc;
    plVar20 = (longlong *)((longlong)unaff_R13 + 0xc);
    plVar29 = (longlong *)0x0;
LAB_140a13b60:
    plVar33 = (longlong *)((longlong)plVar33 + 1);
    plStack_b0 = (longlong *)0x140a13b7a;
    param_2 = unaff_RSI;
    param_3 = unaff_RDI;
    cVar7 = pdb_14182b120((longlong)plVar29 * 0xc + (longlong)unaff_R13);
    unaff_R12 = (longlong *)((longlong)plVar29 + 1);
    if (cVar7 == '\0') goto code_r0x000140a13b88;
    plVar32 = unaff_R13;
    if (unaff_R12 < plVar18) {
      do {
        plStack_78 = plVar32;
        plStack_b0 = (longlong *)0x140a15129;
        param_2 = unaff_RSI;
        param_3 = unaff_RDI;
        plStack_70 = plVar33;
        plStack_68 = plVar20;
        plStack_60 = plVar29;
        cVar7 = pdb_14182b120(plVar20);
        plVar29 = plStack_60;
        if (cVar7 == '\0') {
          *(int *)((longlong)unaff_R13 + (longlong)plStack_60 * 0xc + 8) = (int)plStack_68[1];
          *(longlong *)((longlong)unaff_R13 + (longlong)plStack_60 * 0xc) = *plStack_68;
          plVar29 = (longlong *)((longlong)plStack_60 + 1);
        }
        lStack_58 = lStack_58 + -0xc;
        plVar20 = (longlong *)((longlong)plStack_68 + 0xc);
        plVar33 = (longlong *)((longlong)plStack_70 + 1);
        plVar32 = plStack_78;
      } while (plVar33 != (longlong *)0x0);
    }
    plStack_50[2] = (longlong)plVar29;
    plVar18 = (longlong *)plStack_50[5];
    unaff_R12 = plVar29;
    goto joined_r0x000140a15153;
  }
LAB_140a13b9c:
  plVar18 = (longlong *)plStack_50[5];
joined_r0x000140a15153:
  if (plVar18 != (longlong *)0x0) {
    unaff_R13 = (longlong *)plStack_50[4];
    unaff_RSI = (longlong *)plStack_80[1];
    unaff_RDI = (longlong *)plStack_80[2];
    plVar33 = (longlong *)-(longlong)plVar18;
    lStack_58 = (longlong)plVar18 * 0xc + -0xc;
    plVar20 = (longlong *)((longlong)unaff_R13 + 0xc);
    unaff_R12 = (longlong *)0x0;
LAB_140a13be0:
    plVar33 = (longlong *)((longlong)plVar33 + 1);
    plStack_b0 = (longlong *)0x140a13bfa;
    param_2 = unaff_RSI;
    param_3 = unaff_RDI;
    cVar7 = pdb_14182b120((longlong)unaff_R12 * 0xc + (longlong)unaff_R13);
    plVar29 = (longlong *)((longlong)unaff_R12 + 1);
    if (cVar7 == '\0') goto code_r0x000140a13c08;
    plVar32 = unaff_R13;
    if (plVar29 < plVar18) {
      do {
        plStack_78 = plVar32;
        plStack_b0 = (longlong *)0x140a151b8;
        param_2 = unaff_RSI;
        param_3 = unaff_RDI;
        plStack_70 = plVar33;
        plStack_68 = plVar20;
        plStack_60 = unaff_R12;
        cVar7 = pdb_14182b120(plVar20);
        if (cVar7 == '\0') {
          *(int *)((longlong)unaff_R13 + (longlong)plStack_60 * 0xc + 8) = (int)plStack_68[1];
          *(longlong *)((longlong)unaff_R13 + (longlong)plStack_60 * 0xc) = *plStack_68;
          lStack_58 = lStack_58 + -0xc;
          unaff_R12 = (longlong *)((longlong)plStack_60 + 1);
        }
        else {
          lStack_58 = lStack_58 + -0xc;
          unaff_R12 = plStack_60;
        }
        plVar33 = (longlong *)((longlong)plStack_70 + 1);
        plVar20 = (longlong *)((longlong)plStack_68 + 0xc);
        plVar32 = plStack_78;
      } while (plVar33 != (longlong *)0x0);
    }
    plStack_50[5] = (longlong)unaff_R12;
  }
LAB_140a13c1c:
  plVar18 = (longlong *)plStack_50[0x14];
  if (plVar18 != (longlong *)0x0) {
    unaff_R13 = (longlong *)plStack_50[0x13];
    unaff_RSI = (longlong *)plStack_80[1];
    unaff_RDI = (longlong *)plStack_80[2];
    plVar33 = (longlong *)-(longlong)plVar18;
    lStack_58 = (longlong)plVar18 * 0xc + -0xc;
    plVar20 = (longlong *)((longlong)unaff_R13 + 0xc);
    plVar29 = (longlong *)0x0;
LAB_140a13c70:
    plVar33 = (longlong *)((longlong)plVar33 + 1);
    plStack_b0 = (longlong *)0x140a13c8a;
    param_2 = unaff_RSI;
    param_3 = unaff_RDI;
    cVar7 = pdb_14182b120((longlong)plVar29 * 0xc + (longlong)unaff_R13);
    unaff_R12 = (longlong *)((longlong)plVar29 + 1);
    if (cVar7 == '\0') goto code_r0x000140a13c98;
    plVar32 = unaff_R13;
    if (unaff_R12 < plVar18) {
      do {
        plStack_78 = plVar32;
        plStack_b0 = (longlong *)0x140a1523e;
        param_2 = unaff_RSI;
        param_3 = unaff_RDI;
        plStack_70 = plVar33;
        plStack_68 = plVar20;
        plStack_60 = plVar29;
        cVar7 = pdb_14182b120(plVar20);
        if (cVar7 == '\0') {
          *(int *)((longlong)unaff_R13 + (longlong)plStack_60 * 0xc + 8) = (int)plStack_68[1];
          *(longlong *)((longlong)unaff_R13 + (longlong)plStack_60 * 0xc) = *plStack_68;
          lStack_58 = lStack_58 + -0xc;
          plVar29 = (longlong *)((longlong)plStack_60 + 1);
        }
        else {
          lStack_58 = lStack_58 + -0xc;
          plVar29 = plStack_60;
        }
        plVar33 = (longlong *)((longlong)plStack_70 + 1);
        plVar20 = (longlong *)((longlong)plStack_68 + 0xc);
        plVar32 = plStack_78;
      } while (plVar33 != (longlong *)0x0);
    }
    plStack_50[0x14] = (longlong)plVar29;
    plVar18 = (longlong *)plStack_50[0x17];
    unaff_R12 = plVar29;
    goto joined_r0x000140a15276;
  }
LAB_140a13cac:
  plVar18 = (longlong *)plStack_50[0x17];
joined_r0x000140a15276:
  if (plVar18 != (longlong *)0x0) {
    unaff_R13 = (longlong *)plStack_50[0x16];
    unaff_RSI = (longlong *)plStack_80[1];
    unaff_RDI = (longlong *)plStack_80[2];
    plVar33 = (longlong *)-(longlong)plVar18;
    lStack_58 = (longlong)plVar18 * 0xc + -0xc;
    plVar20 = (longlong *)((longlong)unaff_R13 + 0xc);
    unaff_R12 = (longlong *)0x0;
LAB_140a13d00:
    plVar33 = (longlong *)((longlong)plVar33 + 1);
    plStack_b0 = (longlong *)0x140a13d1a;
    param_2 = unaff_RSI;
    param_3 = unaff_RDI;
    cVar7 = pdb_14182b120((longlong)unaff_R12 * 0xc + (longlong)unaff_R13);
    plVar29 = (longlong *)((longlong)unaff_R12 + 1);
    if (cVar7 == '\0') goto code_r0x000140a13d28;
    plVar32 = unaff_R13;
    if (plVar29 < plVar18) {
      do {
        plStack_78 = plVar32;
        plStack_b0 = (longlong *)0x140a152db;
        param_2 = unaff_RSI;
        param_3 = unaff_RDI;
        plStack_70 = plVar33;
        plStack_68 = plVar20;
        plStack_60 = unaff_R12;
        cVar7 = pdb_14182b120(plVar20);
        if (cVar7 == '\0') {
          *(int *)((longlong)unaff_R13 + (longlong)plStack_60 * 0xc + 8) = (int)plStack_68[1];
          *(longlong *)((longlong)unaff_R13 + (longlong)plStack_60 * 0xc) = *plStack_68;
          lStack_58 = lStack_58 + -0xc;
          unaff_R12 = (longlong *)((longlong)plStack_60 + 1);
        }
        else {
          lStack_58 = lStack_58 + -0xc;
          unaff_R12 = plStack_60;
        }
        plVar33 = (longlong *)((longlong)plStack_70 + 1);
        plVar20 = (longlong *)((longlong)plStack_68 + 0xc);
        plVar32 = plStack_78;
      } while (plVar33 != (longlong *)0x0);
    }
    plStack_50[0x17] = (longlong)unaff_R12;
  }
LAB_140a13d3c:
  plVar18 = (longlong *)plStack_50[0x1d];
  if (plVar18 != (longlong *)0x0) {
    unaff_R13 = (longlong *)plStack_50[0x1c];
    unaff_RSI = (longlong *)plStack_80[1];
    unaff_RDI = (longlong *)plStack_80[2];
    plVar33 = (longlong *)-(longlong)plVar18;
    lStack_58 = (longlong)plVar18 * 0xc + -0xc;
    plVar20 = (longlong *)((longlong)unaff_R13 + 0xc);
    plVar29 = (longlong *)0x0;
LAB_140a13d90:
    plVar33 = (longlong *)((longlong)plVar33 + 1);
    plStack_b0 = (longlong *)0x140a13daa;
    param_2 = unaff_RSI;
    param_3 = unaff_RDI;
    cVar7 = pdb_14182b120((longlong)plVar29 * 0xc + (longlong)unaff_R13);
    unaff_R12 = (longlong *)((longlong)plVar29 + 1);
    if (cVar7 == '\0') goto code_r0x000140a13db8;
    plVar32 = unaff_R13;
    if (unaff_R12 < plVar18) {
      do {
        plStack_78 = plVar32;
        plStack_b0 = (longlong *)0x140a1536b;
        param_2 = unaff_RSI;
        param_3 = unaff_RDI;
        plStack_70 = plVar33;
        plStack_68 = plVar20;
        plStack_60 = plVar29;
        cVar7 = pdb_14182b120(plVar20);
        plVar29 = plStack_60;
        if (cVar7 == '\0') {
          *(int *)((longlong)unaff_R13 + (longlong)plStack_60 * 0xc + 8) = (int)plStack_68[1];
          *(longlong *)((longlong)unaff_R13 + (longlong)plStack_60 * 0xc) = *plStack_68;
          plVar29 = (longlong *)((longlong)plStack_60 + 1);
        }
        lStack_58 = lStack_58 + -0xc;
        plVar20 = (longlong *)((longlong)plStack_68 + 0xc);
        plVar33 = (longlong *)((longlong)plStack_70 + 1);
        plVar32 = plStack_78;
      } while (plVar33 != (longlong *)0x0);
    }
    plStack_50[0x1d] = (longlong)plVar29;
    plVar18 = (longlong *)plStack_50[0x20];
    unaff_R12 = plVar29;
    goto joined_r0x000140a1539b;
  }
LAB_140a13dcc:
  plVar18 = (longlong *)plStack_50[0x20];
joined_r0x000140a1539b:
  if (plVar18 != (longlong *)0x0) {
    unaff_R13 = (longlong *)plStack_50[0x1f];
    unaff_RSI = (longlong *)plStack_80[1];
    unaff_RDI = (longlong *)plStack_80[2];
    plVar33 = (longlong *)-(longlong)plVar18;
    lStack_58 = (longlong)plVar18 * 0xc + -0xc;
    plVar20 = (longlong *)((longlong)unaff_R13 + 0xc);
    unaff_R12 = (longlong *)0x0;
LAB_140a13e20:
    plVar33 = (longlong *)((longlong)plVar33 + 1);
    plStack_b0 = (longlong *)0x140a13e3a;
    param_2 = unaff_RSI;
    param_3 = unaff_RDI;
    cVar7 = pdb_14182b120((longlong)unaff_R12 * 0xc + (longlong)unaff_R13);
    plVar29 = (longlong *)((longlong)unaff_R12 + 1);
    if (cVar7 == '\0') goto code_r0x000140a13e48;
    plVar32 = unaff_R13;
    if (plVar29 < plVar18) {
      do {
        plStack_78 = plVar32;
        plStack_b0 = (longlong *)0x140a15400;
        param_2 = unaff_RSI;
        param_3 = unaff_RDI;
        plStack_70 = plVar33;
        plStack_68 = plVar20;
        plStack_60 = unaff_R12;
        cVar7 = pdb_14182b120(plVar20);
        if (cVar7 == '\0') {
          *(int *)((longlong)unaff_R13 + (longlong)plStack_60 * 0xc + 8) = (int)plStack_68[1];
          *(longlong *)((longlong)unaff_R13 + (longlong)plStack_60 * 0xc) = *plStack_68;
          lStack_58 = lStack_58 + -0xc;
          unaff_R12 = (longlong *)((longlong)plStack_60 + 1);
        }
        else {
          lStack_58 = lStack_58 + -0xc;
          unaff_R12 = plStack_60;
        }
        plVar33 = (longlong *)((longlong)plStack_70 + 1);
        plVar20 = (longlong *)((longlong)plStack_68 + 0xc);
        plVar32 = plStack_78;
      } while (plVar33 != (longlong *)0x0);
    }
    plStack_50[0x20] = (longlong)unaff_R12;
  }
LAB_140a13e5c:
  plVar18 = (longlong *)plStack_50[0x23];
  if (plVar18 != (longlong *)0x0) {
    unaff_R13 = (longlong *)plStack_50[0x22];
    unaff_RSI = (longlong *)plStack_80[1];
    unaff_RDI = (longlong *)plStack_80[2];
    plVar33 = (longlong *)-(longlong)plVar18;
    lStack_58 = (longlong)plVar18 * 0xc + -0xc;
    plVar20 = (longlong *)((longlong)unaff_R13 + 0xc);
    plVar29 = (longlong *)0x0;
LAB_140a13eb0:
    plVar33 = (longlong *)((longlong)plVar33 + 1);
    plStack_b0 = (longlong *)0x140a13eca;
    param_2 = unaff_RSI;
    param_3 = unaff_RDI;
    cVar7 = pdb_14182b120((longlong)plVar29 * 0xc + (longlong)unaff_R13);
    unaff_R12 = (longlong *)((longlong)plVar29 + 1);
    if (cVar7 == '\0') goto code_r0x000140a13ed8;
    plVar32 = unaff_R13;
    if (unaff_R12 < plVar18) {
      do {
        plStack_78 = plVar32;
        plStack_b0 = (longlong *)0x140a15490;
        param_2 = unaff_RSI;
        param_3 = unaff_RDI;
        plStack_70 = plVar33;
        plStack_68 = plVar20;
        plStack_60 = plVar29;
        cVar7 = pdb_14182b120(plVar20);
        plVar29 = plStack_60;
        if (cVar7 == '\0') {
          *(int *)((longlong)unaff_R13 + (longlong)plStack_60 * 0xc + 8) = (int)plStack_68[1];
          *(longlong *)((longlong)unaff_R13 + (longlong)plStack_60 * 0xc) = *plStack_68;
          plVar29 = (longlong *)((longlong)plStack_60 + 1);
        }
        lStack_58 = lStack_58 + -0xc;
        plVar20 = (longlong *)((longlong)plStack_68 + 0xc);
        plVar33 = (longlong *)((longlong)plStack_70 + 1);
        plVar32 = plStack_78;
      } while (plVar33 != (longlong *)0x0);
    }
    plStack_50[0x23] = (longlong)plVar29;
    plVar18 = (longlong *)plStack_50[0x26];
    unaff_R12 = plVar29;
    goto joined_r0x000140a154c0;
  }
LAB_140a13eec:
  plVar18 = (longlong *)plStack_50[0x26];
joined_r0x000140a154c0:
  if (plVar18 != (longlong *)0x0) {
    unaff_R13 = (longlong *)plStack_50[0x25];
    unaff_RSI = (longlong *)plStack_80[1];
    unaff_RDI = (longlong *)plStack_80[2];
    plVar33 = (longlong *)-(longlong)plVar18;
    lStack_58 = (longlong)plVar18 * 0xc + -0xc;
    plVar20 = (longlong *)((longlong)unaff_R13 + 0xc);
    unaff_R12 = (longlong *)0x0;
LAB_140a13f40:
    plVar33 = (longlong *)((longlong)plVar33 + 1);
    plStack_b0 = (longlong *)0x140a13f5a;
    param_2 = unaff_RSI;
    param_3 = unaff_RDI;
    cVar7 = pdb_14182b120((longlong)unaff_R12 * 0xc + (longlong)unaff_R13);
    plVar29 = (longlong *)((longlong)unaff_R12 + 1);
    if (cVar7 == '\0') goto code_r0x000140a13f68;
    plVar32 = unaff_R13;
    if (plVar29 < plVar18) {
      do {
        plStack_78 = plVar32;
        plStack_b0 = (longlong *)0x140a15525;
        param_2 = unaff_RSI;
        param_3 = unaff_RDI;
        plStack_70 = plVar33;
        plStack_68 = plVar20;
        plStack_60 = unaff_R12;
        cVar7 = pdb_14182b120(plVar20);
        if (cVar7 == '\0') {
          *(int *)((longlong)unaff_R13 + (longlong)plStack_60 * 0xc + 8) = (int)plStack_68[1];
          *(longlong *)((longlong)unaff_R13 + (longlong)plStack_60 * 0xc) = *plStack_68;
          lStack_58 = lStack_58 + -0xc;
          unaff_R12 = (longlong *)((longlong)plStack_60 + 1);
        }
        else {
          lStack_58 = lStack_58 + -0xc;
          unaff_R12 = plStack_60;
        }
        plVar33 = (longlong *)((longlong)plStack_70 + 1);
        plVar20 = (longlong *)((longlong)plStack_68 + 0xc);
        plVar32 = plStack_78;
      } while (plVar33 != (longlong *)0x0);
    }
    plStack_50[0x26] = (longlong)unaff_R12;
  }
LAB_140a13f7c:
  plVar18 = (longlong *)plStack_50[0x29];
  if (plVar18 != (longlong *)0x0) {
    unaff_R13 = (longlong *)plStack_50[0x28];
    unaff_RSI = (longlong *)plStack_80[1];
    unaff_RDI = (longlong *)plStack_80[2];
    plVar33 = (longlong *)-(longlong)plVar18;
    lStack_58 = (longlong)plVar18 * 0xc + -0xc;
    plVar20 = (longlong *)((longlong)unaff_R13 + 0xc);
    plVar29 = (longlong *)0x0;
LAB_140a13fd0:
    plVar33 = (longlong *)((longlong)plVar33 + 1);
    plStack_b0 = (longlong *)0x140a13fea;
    param_2 = unaff_RSI;
    param_3 = unaff_RDI;
    cVar7 = pdb_14182b120((longlong)plVar29 * 0xc + (longlong)unaff_R13);
    unaff_R12 = (longlong *)((longlong)plVar29 + 1);
    if (cVar7 == '\0') goto code_r0x000140a13ff8;
    plVar32 = unaff_R13;
    if (unaff_R12 < plVar18) {
      do {
        plStack_78 = plVar32;
        plStack_b0 = (longlong *)0x140a155ae;
        param_2 = unaff_RSI;
        param_3 = unaff_RDI;
        plStack_70 = plVar33;
        plStack_68 = plVar20;
        plStack_60 = plVar29;
        cVar7 = pdb_14182b120(plVar20);
        if (cVar7 == '\0') {
          *(int *)((longlong)unaff_R13 + (longlong)plStack_60 * 0xc + 8) = (int)plStack_68[1];
          *(longlong *)((longlong)unaff_R13 + (longlong)plStack_60 * 0xc) = *plStack_68;
          lStack_58 = lStack_58 + -0xc;
          plVar29 = (longlong *)((longlong)plStack_60 + 1);
        }
        else {
          lStack_58 = lStack_58 + -0xc;
          plVar29 = plStack_60;
        }
        plVar33 = (longlong *)((longlong)plStack_70 + 1);
        plVar20 = (longlong *)((longlong)plStack_68 + 0xc);
        plVar32 = plStack_78;
      } while (plVar33 != (longlong *)0x0);
    }
    plStack_50[0x29] = (longlong)plVar29;
    plVar18 = (longlong *)plStack_50[0x2c];
    unaff_R12 = plVar29;
    goto joined_r0x000140a155e6;
  }
LAB_140a1400c:
  plVar18 = (longlong *)plStack_50[0x2c];
joined_r0x000140a155e6:
  if (plVar18 != (longlong *)0x0) {
    unaff_R13 = (longlong *)plStack_50[0x2b];
    unaff_RSI = (longlong *)plStack_80[1];
    unaff_RDI = (longlong *)plStack_80[2];
    plVar33 = (longlong *)-(longlong)plVar18;
    lStack_58 = (longlong)plVar18 * 0xc + -0xc;
    plVar20 = (longlong *)((longlong)unaff_R13 + 0xc);
    unaff_R12 = (longlong *)0x0;
LAB_140a14060:
    plVar33 = (longlong *)((longlong)plVar33 + 1);
    plStack_b0 = (longlong *)0x140a1407a;
    param_2 = unaff_RSI;
    param_3 = unaff_RDI;
    cVar7 = pdb_14182b120((longlong)unaff_R12 * 0xc + (longlong)unaff_R13);
    plVar29 = (longlong *)((longlong)unaff_R12 + 1);
    if (cVar7 == '\0') goto code_r0x000140a14088;
    plVar32 = unaff_R13;
    if (plVar29 < plVar18) {
      do {
        plStack_78 = plVar32;
        plStack_b0 = (longlong *)0x140a1564b;
        param_2 = unaff_RSI;
        param_3 = unaff_RDI;
        plStack_70 = plVar33;
        plStack_68 = plVar20;
        plStack_60 = unaff_R12;
        cVar7 = pdb_14182b120(plVar20);
        if (cVar7 == '\0') {
          *(int *)((longlong)unaff_R13 + (longlong)plStack_60 * 0xc + 8) = (int)plStack_68[1];
          *(longlong *)((longlong)unaff_R13 + (longlong)plStack_60 * 0xc) = *plStack_68;
          lStack_58 = lStack_58 + -0xc;
          unaff_R12 = (longlong *)((longlong)plStack_60 + 1);
        }
        else {
          lStack_58 = lStack_58 + -0xc;
          unaff_R12 = plStack_60;
        }
        plVar33 = (longlong *)((longlong)plStack_70 + 1);
        plVar20 = (longlong *)((longlong)plStack_68 + 0xc);
        plVar32 = plStack_78;
      } while (plVar33 != (longlong *)0x0);
    }
    plStack_50[0x2c] = (longlong)unaff_R12;
  }
LAB_140a1409c:
  plVar18 = (longlong *)plStack_50[0x2f];
  if (plVar18 != (longlong *)0x0) {
    unaff_R13 = (longlong *)plStack_50[0x2e];
    unaff_RSI = (longlong *)plStack_80[1];
    unaff_RDI = (longlong *)plStack_80[2];
    plVar33 = (longlong *)-(longlong)plVar18;
    lStack_58 = (longlong)plVar18 * 0xc + -0xc;
    plVar20 = (longlong *)((longlong)unaff_R13 + 0xc);
    plVar29 = (longlong *)0x0;
LAB_140a140f0:
    plVar33 = (longlong *)((longlong)plVar33 + 1);
    plStack_b0 = (longlong *)0x140a1410a;
    param_2 = unaff_RSI;
    param_3 = unaff_RDI;
    cVar7 = pdb_14182b120((longlong)plVar29 * 0xc + (longlong)unaff_R13);
    unaff_R12 = (longlong *)((longlong)plVar29 + 1);
    if (cVar7 == '\0') goto code_r0x000140a14118;
    plVar32 = unaff_R13;
    if (unaff_R12 < plVar18) {
      do {
        plStack_78 = plVar32;
        plStack_b0 = (longlong *)0x140a156d4;
        param_2 = unaff_RSI;
        param_3 = unaff_RDI;
        plStack_70 = plVar33;
        plStack_68 = plVar20;
        plStack_60 = plVar29;
        cVar7 = pdb_14182b120(plVar20);
        if (cVar7 == '\0') {
          *(int *)((longlong)unaff_R13 + (longlong)plStack_60 * 0xc + 8) = (int)plStack_68[1];
          *(longlong *)((longlong)unaff_R13 + (longlong)plStack_60 * 0xc) = *plStack_68;
          lStack_58 = lStack_58 + -0xc;
          plVar29 = (longlong *)((longlong)plStack_60 + 1);
        }
        else {
          lStack_58 = lStack_58 + -0xc;
          plVar29 = plStack_60;
        }
        plVar33 = (longlong *)((longlong)plStack_70 + 1);
        plVar20 = (longlong *)((longlong)plStack_68 + 0xc);
        plVar32 = plStack_78;
      } while (plVar33 != (longlong *)0x0);
    }
    plStack_50[0x2f] = (longlong)plVar29;
    plVar18 = (longlong *)plStack_50[0x32];
    unaff_R12 = plVar29;
    goto joined_r0x000140a1570c;
  }
LAB_140a1412c:
  plVar18 = (longlong *)plStack_50[0x32];
joined_r0x000140a1570c:
  if (plVar18 != (longlong *)0x0) {
    unaff_R13 = (longlong *)plStack_50[0x31];
    unaff_RSI = (longlong *)plStack_80[1];
    unaff_RDI = (longlong *)plStack_80[2];
    plVar33 = (longlong *)-(longlong)plVar18;
    lStack_58 = (longlong)plVar18 * 0xc + -0xc;
    plVar20 = (longlong *)((longlong)unaff_R13 + 0xc);
    unaff_R12 = (longlong *)0x0;
LAB_140a14180:
    plVar33 = (longlong *)((longlong)plVar33 + 1);
    plStack_b0 = (longlong *)0x140a1419a;
    param_2 = unaff_RSI;
    param_3 = unaff_RDI;
    cVar7 = pdb_14182b120((longlong)unaff_R12 * 0xc + (longlong)unaff_R13);
    plVar29 = (longlong *)((longlong)unaff_R12 + 1);
    if (cVar7 == '\0') goto code_r0x000140a141a8;
    plVar32 = unaff_R13;
    if (plVar29 < plVar18) {
      do {
        plStack_78 = plVar32;
        plStack_b0 = (longlong *)0x140a15778;
        param_2 = unaff_RSI;
        param_3 = unaff_RDI;
        plStack_70 = plVar33;
        plStack_68 = plVar20;
        plStack_60 = unaff_R12;
        cVar7 = pdb_14182b120(plVar20);
        unaff_R12 = plStack_60;
        if (cVar7 == '\0') {
          *(int *)((longlong)unaff_R13 + (longlong)plStack_60 * 0xc + 8) = (int)plStack_68[1];
          *(longlong *)((longlong)unaff_R13 + (longlong)plStack_60 * 0xc) = *plStack_68;
          unaff_R12 = (longlong *)((longlong)plStack_60 + 1);
        }
        lStack_58 = lStack_58 + -0xc;
        plVar20 = (longlong *)((longlong)plStack_68 + 0xc);
        plVar33 = (longlong *)((longlong)plStack_70 + 1);
        plVar32 = plStack_78;
      } while (plVar33 != (longlong *)0x0);
    }
    plStack_50[0x32] = (longlong)unaff_R12;
  }
LAB_140a141bc:
  plVar18 = (longlong *)plStack_50[0x35];
  if (plVar18 != (longlong *)0x0) {
    unaff_R13 = (longlong *)plStack_50[0x34];
    unaff_RSI = (longlong *)plStack_80[1];
    unaff_RDI = (longlong *)plStack_80[2];
    plVar33 = (longlong *)-(longlong)plVar18;
    lStack_58 = (longlong)plVar18 * 0xc + -0xc;
    plVar20 = (longlong *)((longlong)unaff_R13 + 0xc);
    plVar29 = (longlong *)0x0;
LAB_140a14210:
    plVar33 = (longlong *)((longlong)plVar33 + 1);
    plStack_b0 = (longlong *)0x140a1422a;
    param_2 = unaff_RSI;
    param_3 = unaff_RDI;
    cVar7 = pdb_14182b120((longlong)plVar29 * 0xc + (longlong)unaff_R13);
    unaff_R12 = (longlong *)((longlong)plVar29 + 1);
    if (cVar7 == '\0') goto code_r0x000140a14238;
    plVar32 = unaff_R13;
    if (unaff_R12 < plVar18) {
      do {
        plStack_78 = plVar32;
        plStack_b0 = (longlong *)0x140a157f9;
        param_2 = unaff_RSI;
        param_3 = unaff_RDI;
        plStack_70 = plVar33;
        plStack_68 = plVar20;
        plStack_60 = plVar29;
        cVar7 = pdb_14182b120(plVar20);
        if (cVar7 == '\0') {
          *(int *)((longlong)unaff_R13 + (longlong)plStack_60 * 0xc + 8) = (int)plStack_68[1];
          *(longlong *)((longlong)unaff_R13 + (longlong)plStack_60 * 0xc) = *plStack_68;
          lStack_58 = lStack_58 + -0xc;
          plVar29 = (longlong *)((longlong)plStack_60 + 1);
        }
        else {
          lStack_58 = lStack_58 + -0xc;
          plVar29 = plStack_60;
        }
        plVar33 = (longlong *)((longlong)plStack_70 + 1);
        plVar20 = (longlong *)((longlong)plStack_68 + 0xc);
        plVar32 = plStack_78;
      } while (plVar33 != (longlong *)0x0);
    }
    plStack_50[0x35] = (longlong)plVar29;
    plVar18 = (longlong *)plStack_50[0x38];
    unaff_R12 = plVar29;
    goto joined_r0x000140a15831;
  }
LAB_140a1424c:
  plVar18 = (longlong *)plStack_50[0x38];
joined_r0x000140a15831:
  if (plVar18 != (longlong *)0x0) {
    unaff_R13 = (longlong *)plStack_50[0x37];
    unaff_RSI = (longlong *)plStack_80[1];
    unaff_RDI = (longlong *)plStack_80[2];
    plVar33 = (longlong *)-(longlong)plVar18;
    lStack_58 = (longlong)plVar18 * 0xc + -0xc;
    plVar20 = (longlong *)((longlong)unaff_R13 + 0xc);
    unaff_R12 = (longlong *)0x0;
LAB_140a142a0:
    plVar33 = (longlong *)((longlong)plVar33 + 1);
    plStack_b0 = (longlong *)0x140a142ba;
    param_2 = unaff_RSI;
    param_3 = unaff_RDI;
    cVar7 = pdb_14182b120((longlong)unaff_R12 * 0xc + (longlong)unaff_R13);
    plVar29 = (longlong *)((longlong)unaff_R12 + 1);
    if (cVar7 == '\0') goto code_r0x000140a142c8;
    plVar32 = unaff_R13;
    if (plVar29 < plVar18) {
      do {
        plStack_78 = plVar32;
        plStack_b0 = (longlong *)0x140a15896;
        param_2 = unaff_RSI;
        param_3 = unaff_RDI;
        plStack_70 = plVar33;
        plStack_68 = plVar20;
        plStack_60 = unaff_R12;
        cVar7 = pdb_14182b120(plVar20);
        if (cVar7 == '\0') {
          *(int *)((longlong)unaff_R13 + (longlong)plStack_60 * 0xc + 8) = (int)plStack_68[1];
          *(longlong *)((longlong)unaff_R13 + (longlong)plStack_60 * 0xc) = *plStack_68;
          lStack_58 = lStack_58 + -0xc;
          unaff_R12 = (longlong *)((longlong)plStack_60 + 1);
        }
        else {
          lStack_58 = lStack_58 + -0xc;
          unaff_R12 = plStack_60;
        }
        plVar33 = (longlong *)((longlong)plStack_70 + 1);
        plVar20 = (longlong *)((longlong)plStack_68 + 0xc);
        plVar32 = plStack_78;
      } while (plVar33 != (longlong *)0x0);
    }
    plStack_50[0x38] = (longlong)unaff_R12;
  }
LAB_140a142dc:
  plVar18 = (longlong *)plStack_50[0x3b];
  if (plVar18 != (longlong *)0x0) {
    unaff_R13 = (longlong *)plStack_50[0x3a];
    unaff_RSI = (longlong *)plStack_80[1];
    unaff_RDI = (longlong *)plStack_80[2];
    plVar33 = (longlong *)-(longlong)plVar18;
    lStack_58 = (longlong)plVar18 * 0xc + -0xc;
    plVar20 = (longlong *)((longlong)unaff_R13 + 0xc);
    plVar29 = (longlong *)0x0;
LAB_140a14330:
    plVar33 = (longlong *)((longlong)plVar33 + 1);
    plStack_b0 = (longlong *)0x140a1434a;
    param_2 = unaff_RSI;
    param_3 = unaff_RDI;
    cVar7 = pdb_14182b120((longlong)plVar29 * 0xc + (longlong)unaff_R13);
    unaff_R12 = (longlong *)((longlong)plVar29 + 1);
    if (cVar7 == '\0') goto code_r0x000140a14358;
    plVar32 = unaff_R13;
    if (unaff_R12 < plVar18) {
      do {
        plStack_78 = plVar32;
        plStack_b0 = (longlong *)0x140a1591f;
        param_2 = unaff_RSI;
        param_3 = unaff_RDI;
        plStack_70 = plVar33;
        plStack_68 = plVar20;
        plStack_60 = plVar29;
        cVar7 = pdb_14182b120(plVar20);
        if (cVar7 == '\0') {
          *(int *)((longlong)unaff_R13 + (longlong)plStack_60 * 0xc + 8) = (int)plStack_68[1];
          *(longlong *)((longlong)unaff_R13 + (longlong)plStack_60 * 0xc) = *plStack_68;
          lStack_58 = lStack_58 + -0xc;
          plVar29 = (longlong *)((longlong)plStack_60 + 1);
        }
        else {
          lStack_58 = lStack_58 + -0xc;
          plVar29 = plStack_60;
        }
        plVar33 = (longlong *)((longlong)plStack_70 + 1);
        plVar20 = (longlong *)((longlong)plStack_68 + 0xc);
        plVar32 = plStack_78;
      } while (plVar33 != (longlong *)0x0);
    }
    plStack_50[0x3b] = (longlong)plVar29;
    plVar18 = (longlong *)plStack_50[0x41];
    unaff_R12 = plVar29;
    goto joined_r0x000140a15957;
  }
LAB_140a1436c:
  plVar18 = (longlong *)plStack_50[0x41];
joined_r0x000140a15957:
  if (plVar18 != (longlong *)0x0) {
    unaff_R13 = (longlong *)plStack_50[0x40];
    unaff_RSI = (longlong *)plStack_80[1];
    unaff_RDI = (longlong *)plStack_80[2];
    plVar33 = (longlong *)-(longlong)plVar18;
    lStack_58 = (longlong)plVar18 * 0xc + -0xc;
    plVar20 = (longlong *)((longlong)unaff_R13 + 0xc);
    unaff_R12 = (longlong *)0x0;
LAB_140a143c0:
    plVar33 = (longlong *)((longlong)plVar33 + 1);
    plStack_b0 = (longlong *)0x140a143da;
    param_2 = unaff_RSI;
    param_3 = unaff_RDI;
    cVar7 = pdb_14182b120((longlong)unaff_R12 * 0xc + (longlong)unaff_R13);
    plVar29 = (longlong *)((longlong)unaff_R12 + 1);
    if (cVar7 == '\0') goto code_r0x000140a143e8;
    plVar32 = unaff_R13;
    if (plVar29 < plVar18) {
      do {
        plStack_78 = plVar32;
        plStack_b0 = (longlong *)0x140a159bc;
        param_2 = unaff_RSI;
        param_3 = unaff_RDI;
        plStack_70 = plVar33;
        plStack_68 = plVar20;
        plStack_60 = unaff_R12;
        cVar7 = pdb_14182b120(plVar20);
        if (cVar7 == '\0') {
          *(int *)((longlong)unaff_R13 + (longlong)plStack_60 * 0xc + 8) = (int)plStack_68[1];
          *(longlong *)((longlong)unaff_R13 + (longlong)plStack_60 * 0xc) = *plStack_68;
          lStack_58 = lStack_58 + -0xc;
          unaff_R12 = (longlong *)((longlong)plStack_60 + 1);
        }
        else {
          lStack_58 = lStack_58 + -0xc;
          unaff_R12 = plStack_60;
        }
        plVar33 = (longlong *)((longlong)plStack_70 + 1);
        plVar20 = (longlong *)((longlong)plStack_68 + 0xc);
        plVar32 = plStack_78;
      } while (plVar33 != (longlong *)0x0);
    }
    plStack_50[0x41] = (longlong)unaff_R12;
  }
LAB_140a143fc:
  plVar18 = (longlong *)plStack_50[0x44];
  if (plVar18 != (longlong *)0x0) {
    unaff_R13 = (longlong *)plStack_50[0x43];
    unaff_RSI = (longlong *)plStack_80[1];
    unaff_RDI = (longlong *)plStack_80[2];
    plVar33 = (longlong *)-(longlong)plVar18;
    lStack_58 = (longlong)plVar18 * 0xc + -0xc;
    plVar20 = (longlong *)((longlong)unaff_R13 + 0xc);
    plVar29 = (longlong *)0x0;
LAB_140a14450:
    plVar33 = (longlong *)((longlong)plVar33 + 1);
    plStack_b0 = (longlong *)0x140a1446a;
    param_2 = unaff_RSI;
    param_3 = unaff_RDI;
    cVar7 = pdb_14182b120((longlong)plVar29 * 0xc + (longlong)unaff_R13);
    unaff_R12 = (longlong *)((longlong)plVar29 + 1);
    if (cVar7 == '\0') goto code_r0x000140a14478;
    plVar32 = unaff_R13;
    if (unaff_R12 < plVar18) {
      do {
        plStack_78 = plVar32;
        plStack_b0 = (longlong *)0x140a15a4c;
        param_2 = unaff_RSI;
        param_3 = unaff_RDI;
        plStack_70 = plVar33;
        plStack_68 = plVar20;
        plStack_60 = plVar29;
        cVar7 = pdb_14182b120(plVar20);
        plVar29 = plStack_60;
        if (cVar7 == '\0') {
          *(int *)((longlong)unaff_R13 + (longlong)plStack_60 * 0xc + 8) = (int)plStack_68[1];
          *(longlong *)((longlong)unaff_R13 + (longlong)plStack_60 * 0xc) = *plStack_68;
          plVar29 = (longlong *)((longlong)plStack_60 + 1);
        }
        lStack_58 = lStack_58 + -0xc;
        plVar20 = (longlong *)((longlong)plStack_68 + 0xc);
        plVar33 = (longlong *)((longlong)plStack_70 + 1);
        plVar32 = plStack_78;
      } while (plVar33 != (longlong *)0x0);
    }
    plStack_50[0x44] = (longlong)plVar29;
    plVar18 = (longlong *)plStack_50[0x47];
    unaff_R12 = plVar29;
    goto joined_r0x000140a15a7c;
  }
LAB_140a1448c:
  plVar18 = (longlong *)plStack_50[0x47];
joined_r0x000140a15a7c:
  if (plVar18 != (longlong *)0x0) {
    unaff_R13 = (longlong *)plStack_50[0x46];
    unaff_RSI = (longlong *)plStack_80[1];
    unaff_RDI = (longlong *)plStack_80[2];
    plVar33 = (longlong *)-(longlong)plVar18;
    lStack_58 = (longlong)plVar18 * 0xc + -0xc;
    plVar20 = (longlong *)((longlong)unaff_R13 + 0xc);
    unaff_R12 = (longlong *)0x0;
LAB_140a144e0:
    plVar33 = (longlong *)((longlong)plVar33 + 1);
    plStack_b0 = (longlong *)0x140a144fa;
    param_2 = unaff_RSI;
    param_3 = unaff_RDI;
    cVar7 = pdb_14182b120((longlong)unaff_R12 * 0xc + (longlong)unaff_R13);
    plVar29 = (longlong *)((longlong)unaff_R12 + 1);
    if (cVar7 == '\0') goto code_r0x000140a14508;
    plVar32 = unaff_R13;
    if (plVar29 < plVar18) {
      do {
        plStack_78 = plVar32;
        plStack_b0 = (longlong *)0x140a15ae8;
        param_2 = unaff_RSI;
        param_3 = unaff_RDI;
        plStack_70 = plVar33;
        plStack_68 = plVar20;
        plStack_60 = unaff_R12;
        cVar7 = pdb_14182b120(plVar20);
        unaff_R12 = plStack_60;
        if (cVar7 == '\0') {
          *(int *)((longlong)unaff_R13 + (longlong)plStack_60 * 0xc + 8) = (int)plStack_68[1];
          *(longlong *)((longlong)unaff_R13 + (longlong)plStack_60 * 0xc) = *plStack_68;
          unaff_R12 = (longlong *)((longlong)plStack_60 + 1);
        }
        lStack_58 = lStack_58 + -0xc;
        plVar20 = (longlong *)((longlong)plStack_68 + 0xc);
        plVar33 = (longlong *)((longlong)plStack_70 + 1);
        plVar32 = plStack_78;
      } while (plVar33 != (longlong *)0x0);
    }
    plStack_50[0x47] = (longlong)unaff_R12;
  }
LAB_140a1451c:
  plVar18 = (longlong *)plStack_50[0x4a];
  if (plVar18 != (longlong *)0x0) {
    unaff_R13 = (longlong *)plStack_50[0x49];
    unaff_RSI = (longlong *)plStack_80[1];
    unaff_RDI = (longlong *)plStack_80[2];
    plVar33 = (longlong *)-(longlong)plVar18;
    lStack_58 = (longlong)plVar18 * 0xc + -0xc;
    plVar20 = (longlong *)((longlong)unaff_R13 + 0xc);
    plVar29 = (longlong *)0x0;
LAB_140a14570:
    plVar33 = (longlong *)((longlong)plVar33 + 1);
    plStack_b0 = (longlong *)0x140a1458a;
    param_2 = unaff_RSI;
    param_3 = unaff_RDI;
    cVar7 = pdb_14182b120((longlong)plVar29 * 0xc + (longlong)unaff_R13);
    unaff_R12 = (longlong *)((longlong)plVar29 + 1);
    if (cVar7 == '\0') goto code_r0x000140a14598;
    plVar32 = unaff_R13;
    if (unaff_R12 < plVar18) {
      do {
        plStack_78 = plVar32;
        plStack_b0 = (longlong *)0x140a15b70;
        param_2 = unaff_RSI;
        param_3 = unaff_RDI;
        plStack_70 = plVar33;
        plStack_68 = plVar20;
        plStack_60 = plVar29;
        cVar7 = pdb_14182b120(plVar20);
        plVar29 = plStack_60;
        if (cVar7 == '\0') {
          *(int *)((longlong)unaff_R13 + (longlong)plStack_60 * 0xc + 8) = (int)plStack_68[1];
          *(longlong *)((longlong)unaff_R13 + (longlong)plStack_60 * 0xc) = *plStack_68;
          plVar29 = (longlong *)((longlong)plStack_60 + 1);
        }
        lStack_58 = lStack_58 + -0xc;
        plVar20 = (longlong *)((longlong)plStack_68 + 0xc);
        plVar33 = (longlong *)((longlong)plStack_70 + 1);
        plVar32 = plStack_78;
      } while (plVar33 != (longlong *)0x0);
    }
    plStack_50[0x4a] = (longlong)plVar29;
    plVar18 = (longlong *)plStack_50[0x4d];
    unaff_R12 = plVar29;
    goto joined_r0x000140a15ba0;
  }
LAB_140a145ac:
  plVar18 = (longlong *)plStack_50[0x4d];
joined_r0x000140a15ba0:
  if (plVar18 != (longlong *)0x0) {
    unaff_R13 = (longlong *)plStack_50[0x4c];
    unaff_RSI = (longlong *)plStack_80[1];
    unaff_RDI = (longlong *)plStack_80[2];
    plVar33 = (longlong *)-(longlong)plVar18;
    lStack_58 = (longlong)plVar18 * 0xc + -0xc;
    plVar20 = (longlong *)((longlong)unaff_R13 + 0xc);
    unaff_R12 = (longlong *)0x0;
LAB_140a14600:
    plVar33 = (longlong *)((longlong)plVar33 + 1);
    plStack_b0 = (longlong *)0x140a1461a;
    param_2 = unaff_RSI;
    param_3 = unaff_RDI;
    cVar7 = pdb_14182b120((longlong)unaff_R12 * 0xc + (longlong)unaff_R13);
    plVar29 = (longlong *)((longlong)unaff_R12 + 1);
    if (cVar7 == '\0') goto code_r0x000140a14628;
    plVar32 = unaff_R13;
    if (plVar29 < plVar18) {
      do {
        plStack_78 = plVar32;
        plStack_b0 = (longlong *)0x140a15c05;
        param_2 = unaff_RSI;
        param_3 = unaff_RDI;
        plStack_70 = plVar33;
        plStack_68 = plVar20;
        plStack_60 = unaff_R12;
        cVar7 = pdb_14182b120(plVar20);
        if (cVar7 == '\0') {
          *(int *)((longlong)unaff_R13 + (longlong)plStack_60 * 0xc + 8) = (int)plStack_68[1];
          *(longlong *)((longlong)unaff_R13 + (longlong)plStack_60 * 0xc) = *plStack_68;
          lStack_58 = lStack_58 + -0xc;
          unaff_R12 = (longlong *)((longlong)plStack_60 + 1);
        }
        else {
          lStack_58 = lStack_58 + -0xc;
          unaff_R12 = plStack_60;
        }
        plVar33 = (longlong *)((longlong)plStack_70 + 1);
        plVar20 = (longlong *)((longlong)plStack_68 + 0xc);
        plVar32 = plStack_78;
      } while (plVar33 != (longlong *)0x0);
    }
    plStack_50[0x4d] = (longlong)unaff_R12;
  }
LAB_140a1463c:
  plVar18 = (longlong *)plStack_50[0x53];
  if (plVar18 != (longlong *)0x0) {
    unaff_R13 = (longlong *)plStack_50[0x52];
    unaff_RSI = (longlong *)plStack_80[1];
    unaff_RDI = (longlong *)plStack_80[2];
    plVar33 = (longlong *)-(longlong)plVar18;
    lStack_58 = (longlong)plVar18 * 0xc + -0xc;
    plVar20 = (longlong *)((longlong)unaff_R13 + 0xc);
    plVar29 = (longlong *)0x0;
LAB_140a14690:
    plVar33 = (longlong *)((longlong)plVar33 + 1);
    plStack_b0 = (longlong *)0x140a146aa;
    param_2 = unaff_RSI;
    param_3 = unaff_RDI;
    cVar7 = pdb_14182b120((longlong)plVar29 * 0xc + (longlong)unaff_R13);
    unaff_R12 = (longlong *)((longlong)plVar29 + 1);
    if (cVar7 == '\0') goto code_r0x000140a146b8;
    plVar32 = unaff_R13;
    if (unaff_R12 < plVar18) {
      do {
        plStack_78 = plVar32;
        plStack_b0 = (longlong *)0x140a15c8e;
        param_2 = unaff_RSI;
        param_3 = unaff_RDI;
        plStack_70 = plVar33;
        plStack_68 = plVar20;
        plStack_60 = plVar29;
        cVar7 = pdb_14182b120(plVar20);
        if (cVar7 == '\0') {
          *(int *)((longlong)unaff_R13 + (longlong)plStack_60 * 0xc + 8) = (int)plStack_68[1];
          *(longlong *)((longlong)unaff_R13 + (longlong)plStack_60 * 0xc) = *plStack_68;
          lStack_58 = lStack_58 + -0xc;
          plVar29 = (longlong *)((longlong)plStack_60 + 1);
        }
        else {
          lStack_58 = lStack_58 + -0xc;
          plVar29 = plStack_60;
        }
        plVar33 = (longlong *)((longlong)plStack_70 + 1);
        plVar20 = (longlong *)((longlong)plStack_68 + 0xc);
        plVar32 = plStack_78;
      } while (plVar33 != (longlong *)0x0);
    }
    plStack_50[0x53] = (longlong)plVar29;
    plVar18 = (longlong *)plStack_50[0x56];
    unaff_R12 = plVar29;
    goto joined_r0x000140a15cc6;
  }
LAB_140a146cc:
  plVar18 = (longlong *)plStack_50[0x56];
joined_r0x000140a15cc6:
  if (plVar18 != (longlong *)0x0) {
    unaff_R13 = (longlong *)plStack_50[0x55];
    unaff_RSI = (longlong *)plStack_80[1];
    unaff_RDI = (longlong *)plStack_80[2];
    plVar33 = (longlong *)-(longlong)plVar18;
    lStack_58 = (longlong)plVar18 * 0xc + -0xc;
    plVar20 = (longlong *)((longlong)unaff_R13 + 0xc);
    unaff_R12 = (longlong *)0x0;
LAB_140a14720:
    plVar33 = (longlong *)((longlong)plVar33 + 1);
    plStack_b0 = (longlong *)0x140a1473a;
    param_2 = unaff_RSI;
    param_3 = unaff_RDI;
    cVar7 = pdb_14182b120((longlong)unaff_R12 * 0xc + (longlong)unaff_R13);
    plVar29 = (longlong *)((longlong)unaff_R12 + 1);
    if (cVar7 == '\0') goto code_r0x000140a14748;
    plVar32 = unaff_R13;
    if (plVar29 < plVar18) {
      do {
        plStack_78 = plVar32;
        plStack_b0 = (longlong *)0x140a15d2b;
        param_2 = unaff_RSI;
        param_3 = unaff_RDI;
        plStack_70 = plVar33;
        plStack_68 = plVar20;
        plStack_60 = unaff_R12;
        cVar7 = pdb_14182b120(plVar20);
        if (cVar7 == '\0') {
          *(int *)((longlong)unaff_R13 + (longlong)plStack_60 * 0xc + 8) = (int)plStack_68[1];
          *(longlong *)((longlong)unaff_R13 + (longlong)plStack_60 * 0xc) = *plStack_68;
          lStack_58 = lStack_58 + -0xc;
          unaff_R12 = (longlong *)((longlong)plStack_60 + 1);
        }
        else {
          lStack_58 = lStack_58 + -0xc;
          unaff_R12 = plStack_60;
        }
        plVar33 = (longlong *)((longlong)plStack_70 + 1);
        plVar20 = (longlong *)((longlong)plStack_68 + 0xc);
        plVar32 = plStack_78;
      } while (plVar33 != (longlong *)0x0);
    }
    plStack_50[0x56] = (longlong)unaff_R12;
  }
LAB_140a1475c:
  plVar18 = (longlong *)plStack_50[0x59];
  if (plVar18 != (longlong *)0x0) {
    unaff_R13 = (longlong *)plStack_50[0x58];
    unaff_RSI = (longlong *)plStack_80[1];
    unaff_RDI = (longlong *)plStack_80[2];
    plVar33 = (longlong *)-(longlong)plVar18;
    lStack_58 = (longlong)plVar18 * 0xc + -0xc;
    plVar20 = (longlong *)((longlong)unaff_R13 + 0xc);
    plVar29 = (longlong *)0x0;
LAB_140a147b0:
    plVar33 = (longlong *)((longlong)plVar33 + 1);
    plStack_b0 = (longlong *)0x140a147ca;
    param_2 = unaff_RSI;
    param_3 = unaff_RDI;
    cVar7 = pdb_14182b120((longlong)plVar29 * 0xc + (longlong)unaff_R13);
    unaff_R12 = (longlong *)((longlong)plVar29 + 1);
    if (cVar7 == '\0') goto code_r0x000140a147d8;
    plVar32 = unaff_R13;
    if (unaff_R12 < plVar18) {
      do {
        plStack_78 = plVar32;
        plStack_b0 = (longlong *)0x140a15dbb;
        param_2 = unaff_RSI;
        param_3 = unaff_RDI;
        plStack_70 = plVar33;
        plStack_68 = plVar20;
        plStack_60 = plVar29;
        cVar7 = pdb_14182b120(plVar20);
        plVar29 = plStack_60;
        if (cVar7 == '\0') {
          *(int *)((longlong)unaff_R13 + (longlong)plStack_60 * 0xc + 8) = (int)plStack_68[1];
          *(longlong *)((longlong)unaff_R13 + (longlong)plStack_60 * 0xc) = *plStack_68;
          plVar29 = (longlong *)((longlong)plStack_60 + 1);
        }
        lStack_58 = lStack_58 + -0xc;
        plVar20 = (longlong *)((longlong)plStack_68 + 0xc);
        plVar33 = (longlong *)((longlong)plStack_70 + 1);
        plVar32 = plStack_78;
      } while (plVar33 != (longlong *)0x0);
    }
    plStack_50[0x59] = (longlong)plVar29;
    plVar18 = (longlong *)plStack_50[0x5c];
    unaff_R12 = plVar29;
    goto joined_r0x000140a15deb;
  }
LAB_140a147ec:
  plVar18 = (longlong *)plStack_50[0x5c];
joined_r0x000140a15deb:
  if (plVar18 != (longlong *)0x0) {
    unaff_R13 = (longlong *)plStack_50[0x5b];
    unaff_RSI = (longlong *)plStack_80[1];
    unaff_RDI = (longlong *)plStack_80[2];
    plVar33 = (longlong *)-(longlong)plVar18;
    lStack_58 = (longlong)plVar18 * 0xc + -0xc;
    plVar20 = (longlong *)((longlong)unaff_R13 + 0xc);
    unaff_R12 = (longlong *)0x0;
LAB_140a14840:
    plVar33 = (longlong *)((longlong)plVar33 + 1);
    plStack_b0 = (longlong *)0x140a1485a;
    param_2 = unaff_RSI;
    param_3 = unaff_RDI;
    cVar7 = pdb_14182b120((longlong)unaff_R12 * 0xc + (longlong)unaff_R13);
    plVar29 = (longlong *)((longlong)unaff_R12 + 1);
    if (cVar7 == '\0') goto code_r0x000140a14868;
    plVar32 = unaff_R13;
    if (plVar29 < plVar18) {
      do {
        plStack_78 = plVar32;
        plStack_b0 = (longlong *)0x140a15e50;
        param_2 = unaff_RSI;
        param_3 = unaff_RDI;
        plStack_70 = plVar33;
        plStack_68 = plVar20;
        plStack_60 = unaff_R12;
        cVar7 = pdb_14182b120(plVar20);
        if (cVar7 == '\0') {
          *(int *)((longlong)unaff_R13 + (longlong)plStack_60 * 0xc + 8) = (int)plStack_68[1];
          *(longlong *)((longlong)unaff_R13 + (longlong)plStack_60 * 0xc) = *plStack_68;
          lStack_58 = lStack_58 + -0xc;
          unaff_R12 = (longlong *)((longlong)plStack_60 + 1);
        }
        else {
          lStack_58 = lStack_58 + -0xc;
          unaff_R12 = plStack_60;
        }
        plVar33 = (longlong *)((longlong)plStack_70 + 1);
        plVar20 = (longlong *)((longlong)plStack_68 + 0xc);
        plVar32 = plStack_78;
      } while (plVar33 != (longlong *)0x0);
    }
    plStack_50[0x5c] = (longlong)unaff_R12;
  }
LAB_140a1487c:
  plVar18 = (longlong *)plStack_50[0x5f];
  if (plVar18 != (longlong *)0x0) {
    unaff_R13 = (longlong *)plStack_50[0x5e];
    unaff_RSI = (longlong *)plStack_80[1];
    unaff_RDI = (longlong *)plStack_80[2];
    plVar33 = (longlong *)-(longlong)plVar18;
    lStack_58 = (longlong)plVar18 * 0xc + -0xc;
    plVar20 = (longlong *)((longlong)unaff_R13 + 0xc);
    plVar29 = (longlong *)0x0;
LAB_140a148d0:
    plVar33 = (longlong *)((longlong)plVar33 + 1);
    plStack_b0 = (longlong *)0x140a148ea;
    param_2 = unaff_RSI;
    param_3 = unaff_RDI;
    cVar7 = pdb_14182b120((longlong)plVar29 * 0xc + (longlong)unaff_R13);
    unaff_R12 = (longlong *)((longlong)plVar29 + 1);
    if (cVar7 == '\0') goto code_r0x000140a148f8;
    plVar32 = unaff_R13;
    if (unaff_R12 < plVar18) {
      do {
        plStack_78 = plVar32;
        plStack_b0 = (longlong *)0x140a15ee0;
        param_2 = unaff_RSI;
        param_3 = unaff_RDI;
        plStack_70 = plVar33;
        plStack_68 = plVar20;
        plStack_60 = plVar29;
        cVar7 = pdb_14182b120(plVar20);
        plVar29 = plStack_60;
        if (cVar7 == '\0') {
          *(int *)((longlong)unaff_R13 + (longlong)plStack_60 * 0xc + 8) = (int)plStack_68[1];
          *(longlong *)((longlong)unaff_R13 + (longlong)plStack_60 * 0xc) = *plStack_68;
          plVar29 = (longlong *)((longlong)plStack_60 + 1);
        }
        lStack_58 = lStack_58 + -0xc;
        plVar20 = (longlong *)((longlong)plStack_68 + 0xc);
        plVar33 = (longlong *)((longlong)plStack_70 + 1);
        plVar32 = plStack_78;
      } while (plVar33 != (longlong *)0x0);
    }
    plStack_50[0x5f] = (longlong)plVar29;
    unaff_R12 = plVar29;
    goto joined_r0x000140a15f06;
  }
LAB_140a1490c:
joined_r0x000140a15f06:
  if (uStack_88._7_1_ != '\x1a') {
    plVar18 = (longlong *)plStack_50[0x1a];
    if (plVar18 != (longlong *)0x0) {
      unaff_R13 = (longlong *)plStack_50[0x19];
      unaff_RSI = (longlong *)plStack_80[1];
      unaff_RDI = (longlong *)plStack_80[2];
      plVar33 = (longlong *)-(longlong)plVar18;
      lStack_58 = (longlong)plVar18 * 0xc + -0xc;
      plVar20 = (longlong *)((longlong)unaff_R13 + 0xc);
      unaff_R12 = (longlong *)0x0;
LAB_140a14960:
      plVar33 = (longlong *)((longlong)plVar33 + 1);
      plStack_b0 = (longlong *)0x140a1497a;
      param_2 = unaff_RSI;
      param_3 = unaff_RDI;
      cVar7 = pdb_14182b120((longlong)unaff_R12 * 0xc + (longlong)unaff_R13);
      plVar29 = (longlong *)((longlong)unaff_R12 + 1);
      if (cVar7 == '\0') goto code_r0x000140a14988;
      plVar32 = unaff_R13;
      if (plVar29 < plVar18) {
        do {
          plStack_78 = plVar32;
          plStack_b0 = (longlong *)0x140a15f6b;
          param_2 = unaff_RSI;
          param_3 = unaff_RDI;
          plStack_70 = plVar33;
          plStack_68 = plVar20;
          plStack_60 = unaff_R12;
          cVar7 = pdb_14182b120(plVar20);
          if (cVar7 == '\0') {
            *(int *)((longlong)unaff_R13 + (longlong)plStack_60 * 0xc + 8) = (int)plStack_68[1];
            *(longlong *)((longlong)unaff_R13 + (longlong)plStack_60 * 0xc) = *plStack_68;
            lStack_58 = lStack_58 + -0xc;
            unaff_R12 = (longlong *)((longlong)plStack_60 + 1);
          }
          else {
            lStack_58 = lStack_58 + -0xc;
            unaff_R12 = plStack_60;
          }
          plVar33 = (longlong *)((longlong)plStack_70 + 1);
          plVar20 = (longlong *)((longlong)plStack_68 + 0xc);
          plVar32 = plStack_78;
        } while (plVar33 != (longlong *)0x0);
      }
      plStack_50[0x1a] = (longlong)unaff_R12;
      if (uStack_88._7_1_ != '\b') goto LAB_140a15f9f;
      goto LAB_140a149a6;
    }
LAB_140a1499c:
    if (uStack_88._7_1_ == '\b') goto LAB_140a149a6;
  }
LAB_140a15f9f:
  plVar18 = plStack_50 + 0xc;
  plVar33 = (longlong *)plStack_50[0x50];
  if (plVar33 != (longlong *)0x0) {
    plStack_70 = (longlong *)plStack_50[0x4f];
    unaff_RSI = (longlong *)plStack_80[1];
    unaff_RDI = (longlong *)plStack_80[2];
    lStack_58 = (longlong)plVar33 * 0xc + -0xc;
    plVar20 = (longlong *)((longlong)plStack_70 + 0xc);
    unaff_R12 = (longlong *)0x0;
    plVar29 = (longlong *)(1 - (longlong)plVar33);
    do {
      plStack_b0 = (longlong *)0x140a16007;
      param_2 = unaff_RSI;
      param_3 = unaff_RDI;
      cVar7 = pdb_14182b120((longlong)plStack_70 + (longlong)unaff_R12 * 0xc);
      plVar32 = (longlong *)((longlong)unaff_R12 + 1);
      if (cVar7 != '\0') {
        unaff_R13 = plVar29;
        if (plVar32 < plVar33) {
          do {
            plStack_b0 = (longlong *)0x140a160cb;
            param_2 = unaff_RSI;
            param_3 = unaff_RDI;
            plStack_78 = unaff_R12;
            plStack_68 = plVar29;
            plStack_60 = plVar20;
            cVar7 = pdb_14182b120(plVar20);
            unaff_R12 = plStack_78;
            if (cVar7 == '\0') {
              *(int *)((longlong)plStack_70 + (longlong)plStack_78 * 0xc + 8) = (int)plStack_60[1];
              *(longlong *)((longlong)plStack_70 + (longlong)plStack_78 * 0xc) = *plStack_60;
              param_2 = plStack_70;
              unaff_R12 = (longlong *)((longlong)plStack_78 + 1);
            }
            lStack_58 = lStack_58 + -0xc;
            plVar20 = (longlong *)((longlong)plStack_60 + 0xc);
            plVar29 = (longlong *)((longlong)plStack_68 + 1);
            unaff_R13 = (longlong *)0x0;
          } while (plVar29 != (longlong *)0x0);
        }
        goto LAB_140a1604b;
      }
      unaff_R13 = (longlong *)((longlong)plVar29 + 1);
      lStack_58 = lStack_58 + -0xc;
      plVar20 = (longlong *)((longlong)plVar20 + 0xc);
      unaff_R12 = plVar32;
      plVar29 = unaff_R13;
    } while (plVar32 != plVar33);
  }
  puVar10 = (ulonglong *)
            (&UNK_1430388f4 + *(int *)(&UNK_1430388f4 + ((ulonglong)uStack_88 >> 0x38) * 4));
  puVar22 = (ulonglong *)auStack_a8;
  puVar21 = auStack_a8;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
  switch(puVar10) {
  case (ulonglong *)0x140a149a6:
LAB_140a149a6:
    plVar18 = plStack_50 + 0x18;
  case (ulonglong *)0x140a149b1:
    goto code_r0x000140a149b1;
  case (ulonglong *)0x140a1606a:
code_r0x000140a1606a:
    plVar18 = plStack_50 + 6;
    goto code_r0x000140a149b1;
  case (ulonglong *)0x140a160e2:
code_r0x000140a160e2:
    plVar18 = plStack_50 + 0x6f;
    goto code_r0x000140a149b1;
  case (ulonglong *)0x140a160f2:
code_r0x000140a160f2:
    plVar18 = plStack_50 + 0x69;
    goto code_r0x000140a149b1;
  case (ulonglong *)0x140a16102:
code_r0x000140a16102:
    plVar18 = plStack_50 + 0x6c;
    goto code_r0x000140a149b1;
  case (ulonglong *)0x140a16112:
code_r0x000140a16112:
    plVar18 = plStack_50 + 0x51;
    goto code_r0x000140a149b1;
  case (ulonglong *)0x140a16122:
code_r0x000140a16122:
    plVar18 = plStack_50 + 0x66;
    goto code_r0x000140a149b1;
  case (ulonglong *)0x140a16132:
code_r0x000140a16132:
    plVar18 = plStack_50 + 0x30;
    goto code_r0x000140a149b1;
  case (ulonglong *)0x140a16142:
code_r0x000140a16142:
    plVar18 = plStack_50 + 0x2a;
    goto code_r0x000140a149b1;
  case (ulonglong *)0x140a16152:
code_r0x000140a16152:
    plVar18 = plStack_50 + 99;
    goto code_r0x000140a149b1;
  case (ulonglong *)0x140a16162:
code_r0x000140a16162:
    plVar18 = plStack_50 + 0x21;
    goto code_r0x000140a149b1;
  case (ulonglong *)0x140a16172:
code_r0x000140a16172:
    plVar18 = plStack_50;
    goto code_r0x000140a149b1;
  case (ulonglong *)0x140a1617b:
code_r0x000140a1617b:
    plVar18 = plStack_50 + 0x78;
    goto code_r0x000140a149b1;
  case (ulonglong *)0x140a1618b:
code_r0x000140a1618b:
    plVar18 = plStack_50 + 0x24;
    goto code_r0x000140a149b1;
  case (ulonglong *)0x140a1619b:
code_r0x000140a1619b:
    plVar18 = plStack_50 + 0x1b;
    goto code_r0x000140a149b1;
  case (ulonglong *)0x140a161ab:
code_r0x000140a161ab:
    plVar18 = plStack_50 + 0x4b;
    goto code_r0x000140a149b1;
  case (ulonglong *)0x140a161bb:
code_r0x000140a161bb:
    plVar18 = plStack_50 + 0x48;
    goto code_r0x000140a149b1;
  case (ulonglong *)0x140a161cb:
code_r0x000140a161cb:
    plVar18 = plStack_50 + 0x2d;
    goto code_r0x000140a149b1;
  case (ulonglong *)0x140a161db:
code_r0x000140a161db:
    plVar18 = plStack_50 + 9;
    goto code_r0x000140a149b1;
  case (ulonglong *)0x140a161e8:
code_r0x000140a161e8:
    plVar18 = plStack_50 + 0x15;
    goto code_r0x000140a149b1;
  case (ulonglong *)0x140a161f8:
code_r0x000140a161f8:
    plVar18 = plStack_50 + 0x5d;
    goto code_r0x000140a149b1;
  case (ulonglong *)0x140a16208:
code_r0x000140a16208:
    plVar18 = plStack_50 + 0x33;
    goto code_r0x000140a149b1;
  case (ulonglong *)0x140a16218:
code_r0x000140a16218:
    plVar18 = plStack_50 + 0x3c;
    goto code_r0x000140a149b1;
  case (ulonglong *)0x140a16228:
code_r0x000140a16228:
    plVar18 = plStack_50 + 3;
    goto code_r0x000140a149b1;
  case (ulonglong *)0x140a16235:
code_r0x000140a16235:
    plVar18 = plStack_50 + 0x3f;
    goto code_r0x000140a149b1;
  case (ulonglong *)0x140a16245:
code_r0x000140a16245:
    plVar18 = plStack_50 + 0x27;
    goto code_r0x000140a149b1;
  case (ulonglong *)0x140a16255:
code_r0x000140a16255:
    plVar18 = plStack_50 + 0x12;
    goto code_r0x000140a149b1;
  case (ulonglong *)0x140a16265:
code_r0x000140a16265:
    plVar18 = plStack_50 + 0x36;
    goto code_r0x000140a149b1;
  case (ulonglong *)0x140a16275:
code_r0x000140a16275:
    plVar18 = plStack_50 + 0x1e;
    goto code_r0x000140a149b1;
  case (ulonglong *)0x140a16285:
code_r0x000140a16285:
    plVar18 = plStack_50 + 0x5a;
    goto code_r0x000140a149b1;
  case (ulonglong *)0x140a16295:
code_r0x000140a16295:
    plVar18 = plStack_50 + 0x60;
    goto code_r0x000140a149b1;
  case (ulonglong *)0x140a162a5:
code_r0x000140a162a5:
    plVar18 = plStack_50 + 0x42;
    goto code_r0x000140a149b1;
  case (ulonglong *)0x140a162b5:
code_r0x000140a162b5:
    plVar18 = plStack_50 + 0x75;
    goto code_r0x000140a149b1;
  case (ulonglong *)0x140a162c5:
code_r0x000140a162c5:
    plVar18 = plStack_50 + 0x39;
    goto code_r0x000140a149b1;
  case (ulonglong *)0x140a162d5:
code_r0x000140a162d5:
    plVar18 = plStack_50 + 0x45;
    goto code_r0x000140a149b1;
  case (ulonglong *)0x140a162e5:
code_r0x000140a162e5:
    plVar18 = plStack_50 + 0x54;
    goto code_r0x000140a149b1;
  case (ulonglong *)0x140a162f5:
code_r0x000140a162f5:
    plVar18 = plStack_50 + 0x57;
    goto code_r0x000140a149b1;
  case (ulonglong *)0x140a16305:
code_r0x000140a16305:
    plVar18 = plStack_50 + 0x72;
    goto code_r0x000140a149b1;
  case (ulonglong *)0x140a16315:
code_r0x000140a16315:
    plVar18 = plStack_50 + 0x4e;
    goto code_r0x000140a149b1;
  case (ulonglong *)0x140a17399:
code_r0x000140a17399:
    puVar21 = auStack_f0;
    plVar25 = param_2 + 0xe;
    plStack_c8 = plVar20;
    plStack_c0 = unaff_RDI;
    plStack_b8 = unaff_RSI;
    plStack_b0 = unaff_RSI;
code_r0x000140a173a5:
    uVar37 = plVar25[-3];
    if (uVar37 != 0) {
      pbVar11 = (byte *)plVar25[-2];
      *(undefined8 *)(puVar21 + -8) = 0x140a173bd;
      pub_1406abac0(pbVar11,uVar37,1);
      puVar10 = extraout_RAX;
    }
    return puVar10;
  case (ulonglong *)0x140a173a5:
    goto code_r0x000140a173a5;
  case (ulonglong *)0x140a173fa:
code_r0x000140a173fa:
    pcVar3 = (code *)swi(3);
    puVar22 = (ulonglong *)(*pcVar3)();
    return puVar22;
  case (ulonglong *)0x140a17403:
    goto code_r0x000140a17403;
  case (ulonglong *)0x140a1741e:
code_r0x000140a1741e:
    uStackX_20 = 0x430388f4;
code_r0x000140a17403:
    uStack_e0 = 0xfffffffffffffffe;
    plStack_d8 = plVar20;
    plStack_d0 = unaff_RDI;
    plStack_c8 = unaff_RSI;
    plStack_c0 = unaff_R12;
    plStack_b8 = unaff_R13;
    plStack_b0 = plVar18;
                    /* WARNING: Could not recover jumptable at 0x000140a1743b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    puVar22 = (ulonglong *)
              (*(code *)(&UNK_143038998 +
                        *(int *)(&UNK_143038998 + ((ulonglong)param_2 & 0xffff) * 4)))();
    return puVar22;
  case (ulonglong *)0x140a17445:
code_r0x000140a17445:
    *(char *)puVar10 = (char)*puVar10;
    *(char *)((longlong)puVar10 + -0x73) = *(char *)((longlong)puVar10 + -0x73) + -0xc;
    uVar37 = 0x16;
    plStack_b0 = (longlong *)0x140a1745a;
    uVar16 = pdb_140dc6290();
    if ((longlong)uVar37 < 0) {
      uVar30 = 0;
code_r0x000140a174de:
      plStack_b0 = (longlong *)0x140a174e9;
      pdb_142dc7e2a(uVar30,uVar37);
      plVar20 = (longlong *)0x15;
      plStack_b0 = (longlong *)0x140a174fd;
      lVar12 = pdb_140dc6290(&UNK_14303717a);
      pbVar11 = abStack_a0;
      plStack_b0 = (longlong *)0x140a17516;
      uVar37 = pdb_140f64c00((ulonglong)param_3 & 0xffffffff,pbVar11,5);
      if (-1 < (longlong)pbVar11) {
        if (pbVar11 == (byte *)0x0) {
          arg0 = (byte *)0x1;
code_r0x000140a175bc:
          pbVar13 = (byte *)0x1;
          plVar25 = (longlong *)0x0;
        }
        else {
          plStack_b0 = (longlong *)0x140a17562;
          pdb_14007ee60();
          uVar16 = 1;
          plStack_b0 = (longlong *)0x140a17578;
          arg0 = pub_1406abab0((ulonglong)pbVar11,1);
          if (arg0 == (byte *)0x0) goto code_r0x000140a17525;
          plStack_b0 = (longlong *)0x140a1758e;
          pub_142e32760(arg0,uVar37,pbVar11);
          plVar18 = (longlong *)0x0;
          plVar25 = plVar20;
          if (pbVar11 < (byte *)0x4) {
            plVar25 = plVar18;
          }
          if ((longlong)plVar25 < 0) {
code_r0x000140a175a4:
            plStack_b0 = (longlong *)0x140a175ad;
            pdb_142dc7e2a(plVar18,plVar20);
code_r0x000140a17cd8:
                    /* WARNING: Does not return */
            pcVar3 = (code *)invalidInstructionException();
            (*pcVar3)();
          }
          if (plVar25 == (longlong *)0x0) goto code_r0x000140a175bc;
          plStack_b0 = (longlong *)0x140a175cf;
          pdb_14007ee60();
          plStack_b0 = (longlong *)0x140a175dc;
          pbVar13 = pub_1406abab0((ulonglong)plVar25,1);
          plVar25 = plVar20;
          if (pbVar13 == (byte *)0x0) {
            plVar18 = (longlong *)0x1;
            goto code_r0x000140a175a4;
          }
        }
        pbStackX_18 = (byte *)0x0;
        uStack_88 = (longlong *)0x4;
        plStack_b0 = (longlong *)0x140a1761a;
        plStackX_8 = plVar25;
        pbStackX_10 = pbVar13;
        pdb_140f67bb0(abStack_a0,lVar12,plVar20,&UNK_14303718f);
        lVar6 = lStack_48;
        plVar18 = plStack_50;
        lVar5 = lStack_58;
        plVar25 = plStack_80;
        uVar37 = (ulonglong)uStack_88;
        uVar14 = (ulonglong)uStack_88 & 0xffffffffffffff00;
        pbVar13 = (byte *)0x0;
        _bStack0000000000000054 = (uint)uStack_88;
        plVar33 = (longlong *)0x0;
        plVar29 = plStack_98;
        plVar32 = plStack_68;
        plVar31 = plStack_78;
code_r0x000140a1768e:
        if ((abStack_a0[0] & 1) != 0) {
          plVar15 = (longlong *)((longlong)plVar31 + (longlong)unaff_RBX + -1);
          if (plVar32 == (longlong *)0xffffffffffffffff) {
            if (plVar15 < plVar18) {
code_r0x000140a17845:
              plVar32 = unaff_RBX;
              if (((ulonglong)plVar25 >> ((ulonglong)*(byte *)(lVar5 + (longlong)plVar15) & 0x3f) &
                  1) == 0) goto code_r0x000140a1782e;
              lVar28 = 0;
              plVar15 = plVar31;
              do {
                if (unaff_RBX <= (longlong *)((longlong)plVar29 + lVar28)) {
                  if ((longlong *)((longlong)plVar29 - 1U) < unaff_RBX) {
                    plVar15 = plVar29;
                    goto code_r0x000140a178c0;
                  }
                  if (plVar29 != (longlong *)0x0) {
                    /* WARNING: Subroutine does not return */
                    plStack_b0 = (longlong *)0x140a17cd7;
                    pdb_142dc81f2((longlong *)((longlong)plVar29 - 1U),unaff_RBX,&UNK_143037418);
                  }
                  goto code_r0x000140a17a51;
                }
                if (plVar18 <= (longlong *)((longlong)plVar29 + (longlong)plVar15)) {
                  plVar20 = (longlong *)((longlong)plVar31 + (longlong)plVar29);
                  if ((longlong *)((longlong)plVar31 + (longlong)plVar29) < plVar18) {
                    plVar20 = plVar18;
                  }
                    /* WARNING: Subroutine does not return */
                  plStack_b0 = (longlong *)0x140a17c42;
                  pdb_142dc81f2(plVar20,plVar18,&UNK_143037448);
                }
                lVar4 = lVar28 + lVar6;
                plVar32 = (longlong *)((longlong)plVar15 + 1);
                lVar28 = lVar28 + 1;
                pcVar1 = (char *)(lVar5 + (longlong)plVar29 + (longlong)plVar15);
                plVar15 = plVar32;
              } while (*(char *)((longlong)plVar29 + lVar4) == *pcVar1);
              goto code_r0x000140a17831;
            }
          }
          else if (plVar15 < plVar18) {
            uVar19 = bStack0000000000000054 | uVar14;
code_r0x000140a176e0:
            if (((ulonglong)plVar25 >> ((ulonglong)*(byte *)(lVar5 + (longlong)plVar15) & 0x3f) & 1)
                == 0) {
              plVar31 = (longlong *)((longlong)plVar31 + (longlong)unaff_RBX);
            }
            else {
              plVar15 = plVar29;
              if (plVar29 < plVar32) {
                plVar15 = plVar32;
              }
              plVar27 = plVar15;
              do {
                plVar17 = plVar29;
                if (unaff_RBX <= plVar27) goto code_r0x000140a17770;
                if (plVar18 <= (longlong *)((longlong)plVar31 + (longlong)plVar27)) {
                  plVar20 = (longlong *)((longlong)plVar31 + (longlong)plVar15);
                  if ((longlong *)((longlong)plVar31 + (longlong)plVar15) < plVar18) {
                    plVar20 = plVar18;
                  }
                    /* WARNING: Subroutine does not return */
                  plStack_b0 = (longlong *)0x140a17c20;
                  pdb_142dc81f2(plVar20,plVar18,&UNK_143037448);
                }
                plVar17 = (longlong *)((longlong)plVar27 + 1);
                pcVar1 = (char *)(lVar6 + (longlong)plVar27);
                pcVar2 = (char *)(lVar5 + (longlong)plVar31 + (longlong)plVar27);
                plVar27 = plVar17;
              } while (*pcVar1 == *pcVar2);
              plVar31 = (longlong *)(((longlong)plVar31 - (longlong)plVar29) + (longlong)plVar17);
            }
            plVar32 = (longlong *)0x0;
            goto code_r0x000140a17746;
          }
code_r0x000140a17b49:
          uVar37 = (longlong)plVar20 - (longlong)plVar33;
          if ((ulonglong)((longlong)plStackX_8 - (longlong)pbVar13) < uVar37) {
            uStack_88 = (longlong *)0x1;
            plStack_b0 = (longlong *)0x140a17bec;
            pdb_142d7f1b0(&plStackX_8,pbVar13,uVar37,1);
            pbVar13 = pbStackX_18;
          }
          if (plVar20 != plVar33) {
            plStack_b0 = (longlong *)0x140a17b87;
            pub_142e32760(pbStackX_10 + (longlong)pbVar13,lVar12 + (longlong)plVar33,uVar37);
          }
          pbStackX_18 = pbVar13 + uVar37;
          puVar22 = (ulonglong *)CONCAT44(uStackX_24,uStackX_20);
          puVar22[2] = (ulonglong)pbStackX_18;
          *puVar22 = (ulonglong)plStackX_8;
          puVar22[1] = (ulonglong)pbStackX_10;
          if (pbVar11 == (byte *)0x0) {
            return puVar22;
          }
          plStack_b0 = (longlong *)0x140a17bbc;
          pub_1406abac0(arg0,(ulonglong)pbVar11,1);
          return puVar22;
        }
        if ((uVar37 & 0x10000) != 0) goto code_r0x000140a17b49;
        if (plVar29 != (longlong *)0x0) {
          if (plVar29 < plVar18) {
            if (-0x41 < *(char *)(lVar5 + (longlong)plVar29)) goto code_r0x000140a178f4;
          }
          else if (plVar29 == plVar18) goto code_r0x000140a178f4;
          goto code_r0x000140a17c8b;
        }
code_r0x000140a178f4:
        if (plVar29 == plVar18) {
          if ((_bStack0000000000000054 & 1) == 0) goto code_r0x000140a17b49;
code_r0x000140a179f0:
          _bStack0000000000000054 = 0;
          plStack0000000000000040 = plVar18;
          plVar29 = plVar18;
          plVar15 = plVar18;
        }
        else {
          bVar36 = *(byte *)(lVar5 + (longlong)plVar29);
          uVar8 = (uint)bVar36;
          if ((char)bVar36 < '\0') {
            uVar26 = *(byte *)(lVar5 + 1 + (longlong)plVar29) & 0x3f;
            if (bVar36 < 0xe0) {
              uVar8 = (uVar8 & 0x1f) << 6 | uVar26;
            }
            else {
              uVar26 = *(byte *)(lVar5 + 2 + (longlong)plVar29) & 0x3f | uVar26 << 6;
              if (bVar36 < 0xf0) {
                uVar8 = (uVar8 & 0x1f) << 0xc | uVar26;
              }
              else {
                uVar8 = (uVar8 & 7) << 0x12 |
                        *(byte *)(lVar5 + 3 + (longlong)plVar29) & 0x3f | uVar26 << 6;
              }
            }
          }
          if ((_bStack0000000000000054 & 1) != 0) {
            _bStack0000000000000054 = 0;
            plVar15 = plVar29;
            plStack0000000000000040 = plVar29;
            goto code_r0x000140a17a67;
          }
          lVar28 = 1;
          if ((0x7f < uVar8) && (lVar28 = 2, 0x7ff < uVar8)) {
            lVar28 = 4 - (ulonglong)(uVar8 < 0x10000);
          }
          plVar29 = (longlong *)(lVar28 + (longlong)plVar29);
          if (plVar29 != (longlong *)0x0) {
            if (plVar29 < plVar18) {
              if (*(char *)(lVar5 + (longlong)plVar29) < -0x40) {
code_r0x000140a17c8b:
                uStack_88 = (longlong *)&UNK_143036690;
                plStack_b0 = (longlong *)0x140a17cac;
                pdb_142dc8070(lVar5,plVar18,plVar29,plVar18);
                goto code_r0x000140a17cd8;
              }
            }
            else if (plVar29 != plVar18) goto code_r0x000140a17c8b;
          }
          if (plVar29 == plVar18) goto code_r0x000140a179f0;
          _bStack0000000000000054 = 0;
          plVar15 = plVar29;
          plStack0000000000000040 = plVar29;
        }
code_r0x000140a17a67:
        uVar19 = (longlong)plVar15 - (longlong)plVar33;
        if ((ulonglong)((longlong)plStackX_8 - (longlong)pbVar13) < uVar19) {
          uStack_88 = (longlong *)0x1;
          plStack_b0 = (longlong *)0x140a17afc;
          pdb_142d7f1b0(&plStackX_8,pbVar13,uVar19,1);
          pbVar13 = pbStackX_18;
        }
        if (plVar15 != plVar33) {
          plStack_b0 = (longlong *)0x140a17aa4;
          pub_142e32760(pbStackX_10 + (longlong)pbVar13,(longlong)plVar33 + lVar12,uVar19);
        }
        pbStackX_18 = pbVar13 + uVar19;
        pbVar13 = pbStackX_18;
        if ((byte *)((longlong)plStackX_8 - (longlong)pbStackX_18) < pbVar11) {
          uStack_88 = (longlong *)0x1;
          plStack_b0 = (longlong *)0x140a17b36;
          pdb_142d7f1b0(&plStackX_8,pbStackX_18,pbVar11,1);
          pbVar13 = pbStackX_18;
        }
        if (pbVar11 != (byte *)0x0) {
          plStack_b0 = (longlong *)0x140a17ad4;
          pbStackX_18 = pbVar13;
          pub_142e32760(pbStackX_10 + (longlong)pbVar13,arg0);
        }
        pbVar13 = pbVar13 + (longlong)pbVar11;
        plVar33 = plStack0000000000000040;
        pbStackX_18 = pbVar13;
        goto code_r0x000140a1768e;
      }
      uVar16 = 0;
      uVar37 = (ulonglong)param_3 & 0xffffffff;
code_r0x000140a17525:
      plStack_b0 = (longlong *)0x140a17530;
      pdb_142dc7e2a(uVar16,pbVar11);
    }
    else if (uVar37 != 0) {
      plStack_b0 = (longlong *)0x140a17470;
      pdb_14007ee60();
      uVar30 = 1;
      plStack_b0 = (longlong *)0x140a17483;
      pbVar11 = pub_1406abab0(uVar37,1);
      if (pbVar11 != (byte *)0x0) {
        plStack_b0 = (longlong *)0x140a17499;
        pub_142e32760(pbVar11,uVar16,uVar37);
        goto code_r0x000140a17535;
      }
      goto code_r0x000140a174de;
    }
    pbVar11 = (byte *)0x1;
code_r0x000140a17535:
    puVar22 = (ulonglong *)CONCAT44(uStackX_24,uStackX_20);
    *puVar22 = uVar37;
    puVar22[1] = (ulonglong)pbVar11;
    puVar22[2] = uVar37;
    return puVar22;
  case (ulonglong *)0x140a1eb70:
code_r0x000140a1eb70:
                    /* WARNING: Could not recover jumptable at 0x000140f679ae. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    puVar22 = (ulonglong *)(**(code **)(_UNK_1430388fc + 0x18))(_UNK_1430388f4);
    return puVar22;
  case (ulonglong *)0x140a1eba8:
code_r0x000140a1eba8:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (ulonglong *)0x140a1ec22:
code_r0x000140a1ec22:
                    /* WARNING: Could not recover jumptable at 0x000140a1ec2a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    puVar22 = (ulonglong *)
              (*(code *)(CONCAT71((int7)((ulonglong)puVar10 >> 8),(char)puVar10 + -0x7f) +
                        CONCAT71(0x1430388,*(char *)((longlong)puVar10 + 99) + -0xc)))();
    return puVar22;
  case (ulonglong *)0x140a1ec4c:
    goto code_r0x000140a1ec4c;
  case (ulonglong *)0x140a1ec52:
code_r0x000140a1ec52:
    param_2 = (longlong *)(ulonglong)*(uint *)(unaff_RSI + 4);
code_r0x000140a1ec4c:
    plStack_b0 = (longlong *)0x140a1ec51;
    pub_1406abac0(&UNK_1430388f4,(ulonglong)param_2,(ulonglong)param_3);
    if (unaff_RSI[4] == 0) {
      return (ulonglong *)0x28;
    }
    lVar12 = unaff_RSI[5];
    puStack_90 = (undefined *)uStack_88;
    plStack_c0 = (longlong *)&UNK_140f3c37e;
    uStack_88 = plVar25;
    uVar16 = GetProcessHeap(lVar12,unaff_RSI[4] << 2);
                    /* WARNING: Could not recover jumptable at 0x000140f3c38c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    puVar22 = (ulonglong *)HeapFree(uVar16,0,lVar12);
    return puVar22;
  case (ulonglong *)0x1430388f4:
code_r0x0001430388f4:
    do {
      plVar25 = (longlong *)0x45fd9dc0;
      uVar9 = (undefined4)
              CONCAT71((int7)((ulonglong)puVar10 >> 8),
                       *(undefined1 *)((longlong)plVar20 + ((ulonglong)puVar10 & 0xff)));
      puVar23 = puVar22 + 1;
      bVar35 = (*puVar22 & 0x40) != 0;
      bVar34 = (*puVar22 & 1) != 0;
      bVar36 = 1;
code_r0x0001430388fc:
      if (bVar34 || bVar35) {
        unaff_RDI = (longlong *)((longlong)unaff_RDI + (ulonglong)bVar36 * -2 + 1);
        unaff_RSI = (longlong *)((longlong)unaff_RSI + (ulonglong)bVar36 * -2 + 1);
        puVar24 = (undefined1 *)((longlong)puVar23 + 8);
        LOCK();
        *(char *)((longlong)plVar25 + -0x5af30263) = (char)((uint)uVar9 >> 8);
        UNLOCK();
      }
      else {
        out(0xd8,uVar9);
        uVar37 = *(ulonglong *)((longlong)puVar23 + 8);
        puVar24 = (undefined1 *)((longlong)puVar23 + 0x10);
        if ((uVar37 & 0x40) == 0 && ((uVar37 & 0x800) != 0) == ((uVar37 & 0x80) != 0)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
      }
      *unaff_RDI = *unaff_RSI;
      pcVar3 = (code *)swi(0xa4);
      bVar36 = (*pcVar3)();
      *(byte *)(unaff_RDI + -1) = bVar36 | 0xab;
      puVar10 = (ulonglong *)(ulonglong)*(uint *)(unaff_RSI + -1);
      unaff_RDI = (longlong *)((longlong)unaff_RDI + -10);
      unaff_RSI = (longlong *)((longlong)unaff_RSI + -0xd);
      puVar22 = (ulonglong *)(puVar24 + 0x38);
    } while( true );
  case (ulonglong *)0x1430388f5:
code_r0x0001430388f5:
    bVar35 = puVar10 == (ulonglong *)0x0;
    uVar9 = SUB84(puVar10,0);
    bVar34 = (in_stack_ffffffff9dd745b5 & 2) != 0;
    goto code_r0x0001430388fc;
  case (ulonglong *)0x143038af4:
code_r0x000143038af4:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
code_r0x000140a16039:
  plVar18 = plStack_50 + 0xf;
code_r0x000140a149b1:
  if (*plVar18 != 0) {
    plStack_b0 = (longlong *)0x140a149d0;
    pub_1406abac0((byte *)plVar18[1],*plVar18 * 0xc,4);
  }
  puVar22 = (ulonglong *)plStack_80[2];
  plVar18[2] = (longlong)puVar22;
  lVar12 = plStack_80[1];
  *plVar18 = *plStack_80;
  plVar18[1] = lVar12;
  return puVar22;
code_r0x000140a13508:
  lStack_58 = lStack_58 + -0xc;
  plVar20 = (longlong *)((longlong)plVar20 + 0xc);
  plVar29 = unaff_R12;
  if (unaff_R12 == plVar18) goto LAB_140a1351c;
  goto LAB_140a134e0;
code_r0x000140a13598:
  lStack_58 = lStack_58 + -0xc;
  plVar20 = (longlong *)((longlong)plVar20 + 0xc);
  unaff_R12 = plVar29;
  if (plVar29 == plVar18) goto LAB_140a135ac;
  goto LAB_140a13570;
code_r0x000140a13628:
  lStack_58 = lStack_58 + -0xc;
  plVar20 = (longlong *)((longlong)plVar20 + 0xc);
  plVar29 = unaff_R12;
  if (unaff_R12 == plVar18) goto LAB_140a1363c;
  goto LAB_140a13600;
code_r0x000140a136b8:
  lStack_58 = lStack_58 + -0xc;
  plVar20 = (longlong *)((longlong)plVar20 + 0xc);
  unaff_R12 = plVar29;
  if (plVar29 == plVar18) goto LAB_140a136cc;
  goto LAB_140a13690;
code_r0x000140a13748:
  lStack_58 = lStack_58 + -0xc;
  plVar20 = (longlong *)((longlong)plVar20 + 0xc);
  plVar29 = unaff_R12;
  if (unaff_R12 == plVar18) goto LAB_140a1375c;
  goto LAB_140a13720;
code_r0x000140a137d8:
  lStack_58 = lStack_58 + -0xc;
  plVar20 = (longlong *)((longlong)plVar20 + 0xc);
  unaff_R12 = plVar29;
  if (plVar29 == plVar18) goto LAB_140a137ec;
  goto LAB_140a137b0;
code_r0x000140a13868:
  lStack_58 = lStack_58 + -0xc;
  plVar20 = (longlong *)((longlong)plVar20 + 0xc);
  plVar29 = unaff_R12;
  if (unaff_R12 == plVar18) goto LAB_140a1387c;
  goto LAB_140a13840;
code_r0x000140a138f8:
  lStack_58 = lStack_58 + -0xc;
  plVar20 = (longlong *)((longlong)plVar20 + 0xc);
  unaff_R12 = plVar29;
  if (plVar29 == plVar18) goto LAB_140a1390c;
  goto LAB_140a138d0;
code_r0x000140a13978:
  lStack_58 = lStack_58 + -0xc;
  plVar20 = (longlong *)((longlong)plVar20 + 0xc);
  plVar29 = unaff_R12;
  if (unaff_R12 == plVar18) goto LAB_140a1398c;
  goto LAB_140a13950;
code_r0x000140a13a08:
  lStack_58 = lStack_58 + -0xc;
  plVar20 = (longlong *)((longlong)plVar20 + 0xc);
  unaff_R12 = plVar29;
  if (plVar29 == plVar18) goto LAB_140a13a1c;
  goto LAB_140a139e0;
code_r0x000140a13a88:
  lStack_58 = lStack_58 + -0xc;
  plVar20 = (longlong *)((longlong)plVar20 + 0xc);
  plVar29 = unaff_R12;
  if (unaff_R12 == plVar18) goto LAB_140a13a9c;
  goto LAB_140a13a60;
code_r0x000140a13b08:
  lStack_58 = lStack_58 + -0xc;
  plVar20 = (longlong *)((longlong)plVar20 + 0xc);
  unaff_R12 = plVar29;
  if (plVar29 == plVar18) goto LAB_140a13b1c;
  goto LAB_140a13ae0;
code_r0x000140a13b88:
  lStack_58 = lStack_58 + -0xc;
  plVar20 = (longlong *)((longlong)plVar20 + 0xc);
  plVar29 = unaff_R12;
  if (unaff_R12 == plVar18) goto LAB_140a13b9c;
  goto LAB_140a13b60;
code_r0x000140a13c08:
  lStack_58 = lStack_58 + -0xc;
  plVar20 = (longlong *)((longlong)plVar20 + 0xc);
  unaff_R12 = plVar29;
  if (plVar29 == plVar18) goto LAB_140a13c1c;
  goto LAB_140a13be0;
code_r0x000140a13c98:
  lStack_58 = lStack_58 + -0xc;
  plVar20 = (longlong *)((longlong)plVar20 + 0xc);
  plVar29 = unaff_R12;
  if (unaff_R12 == plVar18) goto LAB_140a13cac;
  goto LAB_140a13c70;
code_r0x000140a13d28:
  lStack_58 = lStack_58 + -0xc;
  plVar20 = (longlong *)((longlong)plVar20 + 0xc);
  unaff_R12 = plVar29;
  if (plVar29 == plVar18) goto LAB_140a13d3c;
  goto LAB_140a13d00;
code_r0x000140a13db8:
  lStack_58 = lStack_58 + -0xc;
  plVar20 = (longlong *)((longlong)plVar20 + 0xc);
  plVar29 = unaff_R12;
  if (unaff_R12 == plVar18) goto LAB_140a13dcc;
  goto LAB_140a13d90;
code_r0x000140a13e48:
  lStack_58 = lStack_58 + -0xc;
  plVar20 = (longlong *)((longlong)plVar20 + 0xc);
  unaff_R12 = plVar29;
  if (plVar29 == plVar18) goto LAB_140a13e5c;
  goto LAB_140a13e20;
code_r0x000140a13ed8:
  lStack_58 = lStack_58 + -0xc;
  plVar20 = (longlong *)((longlong)plVar20 + 0xc);
  plVar29 = unaff_R12;
  if (unaff_R12 == plVar18) goto LAB_140a13eec;
  goto LAB_140a13eb0;
code_r0x000140a13f68:
  lStack_58 = lStack_58 + -0xc;
  plVar20 = (longlong *)((longlong)plVar20 + 0xc);
  unaff_R12 = plVar29;
  if (plVar29 == plVar18) goto LAB_140a13f7c;
  goto LAB_140a13f40;
code_r0x000140a13ff8:
  lStack_58 = lStack_58 + -0xc;
  plVar20 = (longlong *)((longlong)plVar20 + 0xc);
  plVar29 = unaff_R12;
  if (unaff_R12 == plVar18) goto LAB_140a1400c;
  goto LAB_140a13fd0;
code_r0x000140a14088:
  lStack_58 = lStack_58 + -0xc;
  plVar20 = (longlong *)((longlong)plVar20 + 0xc);
  unaff_R12 = plVar29;
  if (plVar29 == plVar18) goto LAB_140a1409c;
  goto LAB_140a14060;
code_r0x000140a14118:
  lStack_58 = lStack_58 + -0xc;
  plVar20 = (longlong *)((longlong)plVar20 + 0xc);
  plVar29 = unaff_R12;
  if (unaff_R12 == plVar18) goto LAB_140a1412c;
  goto LAB_140a140f0;
code_r0x000140a141a8:
  lStack_58 = lStack_58 + -0xc;
  plVar20 = (longlong *)((longlong)plVar20 + 0xc);
  unaff_R12 = plVar29;
  if (plVar29 == plVar18) goto LAB_140a141bc;
  goto LAB_140a14180;
code_r0x000140a14238:
  lStack_58 = lStack_58 + -0xc;
  plVar20 = (longlong *)((longlong)plVar20 + 0xc);
  plVar29 = unaff_R12;
  if (unaff_R12 == plVar18) goto LAB_140a1424c;
  goto LAB_140a14210;
code_r0x000140a142c8:
  lStack_58 = lStack_58 + -0xc;
  plVar20 = (longlong *)((longlong)plVar20 + 0xc);
  unaff_R12 = plVar29;
  if (plVar29 == plVar18) goto LAB_140a142dc;
  goto LAB_140a142a0;
code_r0x000140a14358:
  lStack_58 = lStack_58 + -0xc;
  plVar20 = (longlong *)((longlong)plVar20 + 0xc);
  plVar29 = unaff_R12;
  if (unaff_R12 == plVar18) goto LAB_140a1436c;
  goto LAB_140a14330;
code_r0x000140a143e8:
  lStack_58 = lStack_58 + -0xc;
  plVar20 = (longlong *)((longlong)plVar20 + 0xc);
  unaff_R12 = plVar29;
  if (plVar29 == plVar18) goto LAB_140a143fc;
  goto LAB_140a143c0;
code_r0x000140a14478:
  lStack_58 = lStack_58 + -0xc;
  plVar20 = (longlong *)((longlong)plVar20 + 0xc);
  plVar29 = unaff_R12;
  if (unaff_R12 == plVar18) goto LAB_140a1448c;
  goto LAB_140a14450;
code_r0x000140a14508:
  lStack_58 = lStack_58 + -0xc;
  plVar20 = (longlong *)((longlong)plVar20 + 0xc);
  unaff_R12 = plVar29;
  if (plVar29 == plVar18) goto LAB_140a1451c;
  goto LAB_140a144e0;
code_r0x000140a14598:
  lStack_58 = lStack_58 + -0xc;
  plVar20 = (longlong *)((longlong)plVar20 + 0xc);
  plVar29 = unaff_R12;
  if (unaff_R12 == plVar18) goto LAB_140a145ac;
  goto LAB_140a14570;
code_r0x000140a14628:
  lStack_58 = lStack_58 + -0xc;
  plVar20 = (longlong *)((longlong)plVar20 + 0xc);
  unaff_R12 = plVar29;
  if (plVar29 == plVar18) goto LAB_140a1463c;
  goto LAB_140a14600;
code_r0x000140a146b8:
  lStack_58 = lStack_58 + -0xc;
  plVar20 = (longlong *)((longlong)plVar20 + 0xc);
  plVar29 = unaff_R12;
  if (unaff_R12 == plVar18) goto LAB_140a146cc;
  goto LAB_140a14690;
code_r0x000140a14748:
  lStack_58 = lStack_58 + -0xc;
  plVar20 = (longlong *)((longlong)plVar20 + 0xc);
  unaff_R12 = plVar29;
  if (plVar29 == plVar18) goto LAB_140a1475c;
  goto LAB_140a14720;
code_r0x000140a147d8:
  lStack_58 = lStack_58 + -0xc;
  plVar20 = (longlong *)((longlong)plVar20 + 0xc);
  plVar29 = unaff_R12;
  if (unaff_R12 == plVar18) goto LAB_140a147ec;
  goto LAB_140a147b0;
code_r0x000140a14868:
  lStack_58 = lStack_58 + -0xc;
  plVar20 = (longlong *)((longlong)plVar20 + 0xc);
  unaff_R12 = plVar29;
  if (plVar29 == plVar18) goto LAB_140a1487c;
  goto LAB_140a14840;
code_r0x000140a148f8:
  lStack_58 = lStack_58 + -0xc;
  plVar20 = (longlong *)((longlong)plVar20 + 0xc);
  plVar29 = unaff_R12;
  if (unaff_R12 == plVar18) goto LAB_140a1490c;
  goto LAB_140a148d0;
code_r0x000140a14988:
  lStack_58 = lStack_58 + -0xc;
  plVar20 = (longlong *)((longlong)plVar20 + 0xc);
  unaff_R12 = plVar29;
  if (plVar29 == plVar18) goto LAB_140a1499c;
  goto LAB_140a14960;
LAB_140a1604b:
  plStack_50[0x50] = (longlong)unaff_R12;
  puVar10 = (ulonglong *)
            (&UNK_1430388f4 + *(int *)(&UNK_1430388f4 + ((ulonglong)uStack_88 >> 0x38) * 4));
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
  switch(puVar10) {
  case (ulonglong *)0x140a149a6:
    goto LAB_140a149a6;
  case (ulonglong *)0x140a149b1:
    goto code_r0x000140a149b1;
  case (ulonglong *)0x140a1606a:
    goto code_r0x000140a1606a;
  case (ulonglong *)0x140a160e2:
    goto code_r0x000140a160e2;
  case (ulonglong *)0x140a160f2:
    goto code_r0x000140a160f2;
  case (ulonglong *)0x140a16102:
    goto code_r0x000140a16102;
  case (ulonglong *)0x140a16112:
    goto code_r0x000140a16112;
  case (ulonglong *)0x140a16122:
    goto code_r0x000140a16122;
  case (ulonglong *)0x140a16132:
    goto code_r0x000140a16132;
  case (ulonglong *)0x140a16142:
    goto code_r0x000140a16142;
  case (ulonglong *)0x140a16152:
    goto code_r0x000140a16152;
  case (ulonglong *)0x140a16162:
    goto code_r0x000140a16162;
  case (ulonglong *)0x140a16172:
    goto code_r0x000140a16172;
  case (ulonglong *)0x140a1617b:
    goto code_r0x000140a1617b;
  case (ulonglong *)0x140a1618b:
    goto code_r0x000140a1618b;
  case (ulonglong *)0x140a1619b:
    goto code_r0x000140a1619b;
  case (ulonglong *)0x140a161ab:
    goto code_r0x000140a161ab;
  case (ulonglong *)0x140a161bb:
    goto code_r0x000140a161bb;
  case (ulonglong *)0x140a161cb:
    goto code_r0x000140a161cb;
  case (ulonglong *)0x140a161db:
    goto code_r0x000140a161db;
  case (ulonglong *)0x140a161e8:
    goto code_r0x000140a161e8;
  case (ulonglong *)0x140a161f8:
    goto code_r0x000140a161f8;
  case (ulonglong *)0x140a16208:
    goto code_r0x000140a16208;
  case (ulonglong *)0x140a16218:
    goto code_r0x000140a16218;
  case (ulonglong *)0x140a16228:
    goto code_r0x000140a16228;
  case (ulonglong *)0x140a16235:
    goto code_r0x000140a16235;
  case (ulonglong *)0x140a16245:
    goto code_r0x000140a16245;
  case (ulonglong *)0x140a16255:
    goto code_r0x000140a16255;
  case (ulonglong *)0x140a16265:
    goto code_r0x000140a16265;
  case (ulonglong *)0x140a16275:
    goto code_r0x000140a16275;
  case (ulonglong *)0x140a16285:
    goto code_r0x000140a16285;
  case (ulonglong *)0x140a16295:
    goto code_r0x000140a16295;
  case (ulonglong *)0x140a162a5:
    goto code_r0x000140a162a5;
  case (ulonglong *)0x140a162b5:
    goto code_r0x000140a162b5;
  case (ulonglong *)0x140a162c5:
    goto code_r0x000140a162c5;
  case (ulonglong *)0x140a162d5:
    goto code_r0x000140a162d5;
  case (ulonglong *)0x140a162e5:
    goto code_r0x000140a162e5;
  case (ulonglong *)0x140a162f5:
    goto code_r0x000140a162f5;
  case (ulonglong *)0x140a16305:
    goto code_r0x000140a16305;
  case (ulonglong *)0x140a16315:
    goto code_r0x000140a16315;
  case (ulonglong *)0x140a17399:
    goto code_r0x000140a17399;
  case (ulonglong *)0x140a173a5:
    goto code_r0x000140a173a5;
  case (ulonglong *)0x140a173fa:
    goto code_r0x000140a173fa;
  case (ulonglong *)0x140a17403:
    goto code_r0x000140a17403;
  case (ulonglong *)0x140a1741e:
    goto code_r0x000140a1741e;
  case (ulonglong *)0x140a17445:
    goto code_r0x000140a17445;
  case (ulonglong *)0x140a1eb70:
    goto code_r0x000140a1eb70;
  case (ulonglong *)0x140a1eba8:
    goto code_r0x000140a1eba8;
  case (ulonglong *)0x140a1ec22:
    goto code_r0x000140a1ec22;
  case (ulonglong *)0x140a1ec4c:
    goto code_r0x000140a1ec4c;
  case (ulonglong *)0x140a1ec52:
    goto code_r0x000140a1ec52;
  case (ulonglong *)0x1430388f4:
    goto code_r0x0001430388f4;
  case (ulonglong *)0x1430388f5:
    goto code_r0x0001430388f5;
  case (ulonglong *)0x143038af4:
    goto code_r0x000143038af4;
  }
  goto code_r0x000140a16039;
  while( true ) {
    if (plVar18 <= (longlong *)(((longlong)plVar31 - 1U) + (longlong)plVar15)) {
                    /* WARNING: Subroutine does not return */
      plStack_b0 = (longlong *)0x140a17c85;
      pdb_142dc81f2((longlong)plVar31 + (longlong)plVar15 + -1,plVar18,&UNK_143037430);
    }
    pcVar2 = (char *)(lVar6 + -1 + (longlong)plVar15);
    pcVar1 = (char *)((longlong)plVar31 + lVar5 + -1 + (longlong)plVar15);
    plVar15 = (longlong *)((longlong)plVar15 + -1);
    plVar32 = (longlong *)(bStack0000000000000054 | uVar14);
    if (*pcVar2 != *pcVar1) break;
code_r0x000140a178c0:
    if (plVar15 == (longlong *)0x0) goto code_r0x000140a17a51;
  }
code_r0x000140a1782e:
  plVar32 = (longlong *)((longlong)plVar31 + (longlong)plVar32);
code_r0x000140a17831:
  plVar15 = (longlong *)((longlong)plVar32 + (longlong)unaff_RBX + -1);
  plVar31 = plVar32;
  if (plVar18 <= plVar15) goto code_r0x000140a17b49;
  goto code_r0x000140a17845;
code_r0x000140a17a51:
  plVar32 = (longlong *)0xffffffffffffffff;
code_r0x000140a17a5c:
  plVar15 = plVar31;
  plStack0000000000000040 = (longlong *)((longlong)plVar31 + (longlong)unaff_RBX);
  plVar31 = (longlong *)((longlong)plVar31 + (longlong)unaff_RBX);
  goto code_r0x000140a17a67;
  while( true ) {
    plVar17 = (longlong *)((longlong)plVar17 + -1);
    if (unaff_RBX <= plVar17) {
                    /* WARNING: Subroutine does not return */
      plStack_b0 = (longlong *)0x140a17c57;
      pdb_142dc81f2(plVar17,unaff_RBX,&UNK_143037418);
    }
    plVar15 = (longlong *)((longlong)plVar17 + (longlong)plVar31);
    if (plVar18 <= plVar15) {
                    /* WARNING: Subroutine does not return */
      plStack_b0 = (longlong *)0x140a17c6c;
      pdb_142dc81f2(plVar15,plVar18,&UNK_143037430);
    }
    if (*(char *)(lVar6 + (longlong)plVar17) != *(char *)(lVar5 + (longlong)plVar15)) break;
code_r0x000140a17770:
    if (plVar17 <= plVar32) {
      plVar32 = (longlong *)0x0;
      goto code_r0x000140a17a5c;
    }
  }
  plVar31 = (longlong *)((longlong)plVar31 + uVar19);
  plVar32 = (longlong *)((longlong)unaff_RBX - uVar19);
code_r0x000140a17746:
  plVar15 = (longlong *)((longlong)plVar31 + (longlong)unaff_RBX + -1);
  if (plVar18 <= plVar15) goto code_r0x000140a17b49;
  goto code_r0x000140a176e0;
}

