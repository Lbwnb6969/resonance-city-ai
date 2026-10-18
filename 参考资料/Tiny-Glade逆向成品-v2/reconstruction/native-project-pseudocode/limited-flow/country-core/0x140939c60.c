// VA 0x140939c60, PDB extent 1372 bytes
// country_core::input::action_set::MainActionSet::reconstruct
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/input/action_set.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00014093a216) overlaps instruction at (ram,0x00014093a215)
    */
/* Matched PDB project procedure: country_core::input::action_set::MainActionSet::reconstruct
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/input/action_set.rs
   Extent: 1372 */

code * pdb_140939c60(code *UNRECOVERED_JUMPTABLE_03,longlong param_2,longlong param_3)

{
  char *pcVar1;
  char cVar2;
  code cVar3;
  byte bVar4;
  undefined1 uVar5;
  byte bVar6;
  uint uVar8;
  undefined4 uVar9;
  undefined7 uVar13;
  int *piVar10;
  uint *puVar11;
  code *UNRECOVERED_JUMPTABLE;
  longlong lVar12;
  code cVar14;
  undefined7 uVar16;
  uint *puVar15;
  short sVar17;
  undefined2 uVar18;
  uint *puVar20;
  byte bVar22;
  byte bVar23;
  char cVar24;
  ulonglong unaff_RBX;
  undefined6 uVar26;
  undefined8 *puVar27;
  undefined8 *puVar28;
  undefined8 *puVar29;
  undefined1 *unaff_RBP;
  undefined8 *puVar30;
  byte *unaff_RSI;
  byte *unaff_RDI;
  byte *pbVar31;
  undefined *puVar32;
  undefined *puVar33;
  ulonglong uVar34;
  undefined2 in_ES;
  bool bVar35;
  byte in_AF;
  bool bVar36;
  bool bVar37;
  byte in_TF;
  byte in_IF;
  bool bVar38;
  byte in_NT;
  byte in_AC;
  byte in_VIF;
  byte in_VIP;
  byte in_ID;
  float fVar39;
  int iVar7;
  uint uVar19;
  char cVar21;
  undefined7 uVar25;
  
  *(undefined8 *)(UNRECOVERED_JUMPTABLE_03 + 0x170) = 0;
  *(undefined8 *)(UNRECOVERED_JUMPTABLE_03 + 0x178) = 0;
  *(undefined8 *)(UNRECOVERED_JUMPTABLE_03 + 0x160) = 0;
  *(undefined8 *)(UNRECOVERED_JUMPTABLE_03 + 0x168) = 0;
  *(undefined8 *)(UNRECOVERED_JUMPTABLE_03 + 0x150) = 0;
  *(undefined8 *)(UNRECOVERED_JUMPTABLE_03 + 0x158) = 0;
  *(uint *)UNRECOVERED_JUMPTABLE_03 = 4;
  *(uint *)(UNRECOVERED_JUMPTABLE_03 + 8) = 4;
  *(uint *)(UNRECOVERED_JUMPTABLE_03 + 0x10) = 4;
  *(uint *)(UNRECOVERED_JUMPTABLE_03 + 0x18) = 4;
  *(uint *)(UNRECOVERED_JUMPTABLE_03 + 0x20) = 4;
  *(uint *)(UNRECOVERED_JUMPTABLE_03 + 0x28) = 4;
  *(uint *)(UNRECOVERED_JUMPTABLE_03 + 0x30) = 4;
  *(uint *)(UNRECOVERED_JUMPTABLE_03 + 0x38) = 4;
  *(uint *)(UNRECOVERED_JUMPTABLE_03 + 0x40) = 4;
  *(uint *)(UNRECOVERED_JUMPTABLE_03 + 0x48) = 4;
  *(uint *)(UNRECOVERED_JUMPTABLE_03 + 0x50) = 4;
  *(uint *)(UNRECOVERED_JUMPTABLE_03 + 0x58) = 4;
  *(uint *)(UNRECOVERED_JUMPTABLE_03 + 0x60) = 4;
  *(uint *)(UNRECOVERED_JUMPTABLE_03 + 0x68) = 4;
  *(uint *)(UNRECOVERED_JUMPTABLE_03 + 0x70) = 4;
  *(uint *)(UNRECOVERED_JUMPTABLE_03 + 0x78) = 4;
  *(uint *)(UNRECOVERED_JUMPTABLE_03 + 0x80) = 4;
  *(uint *)(UNRECOVERED_JUMPTABLE_03 + 0x88) = 4;
  *(uint *)(UNRECOVERED_JUMPTABLE_03 + 0x90) = 4;
  *(uint *)(UNRECOVERED_JUMPTABLE_03 + 0x98) = 4;
  *(uint *)(UNRECOVERED_JUMPTABLE_03 + 0xa0) = 4;
  *(uint *)(UNRECOVERED_JUMPTABLE_03 + 0xa8) = 4;
  *(uint *)(UNRECOVERED_JUMPTABLE_03 + 0xb0) = 4;
  *(uint *)(UNRECOVERED_JUMPTABLE_03 + 0xb8) = 4;
  *(uint *)(UNRECOVERED_JUMPTABLE_03 + 0xc0) = 4;
  *(uint *)(UNRECOVERED_JUMPTABLE_03 + 200) = 4;
  *(uint *)(UNRECOVERED_JUMPTABLE_03 + 0xd0) = 4;
  *(uint *)(UNRECOVERED_JUMPTABLE_03 + 0xd8) = 4;
  *(uint *)(UNRECOVERED_JUMPTABLE_03 + 0xe0) = 4;
  *(uint *)(UNRECOVERED_JUMPTABLE_03 + 0xe8) = 4;
  *(uint *)(UNRECOVERED_JUMPTABLE_03 + 0xf0) = 4;
  *(uint *)(UNRECOVERED_JUMPTABLE_03 + 0xf8) = 4;
  *(uint *)(UNRECOVERED_JUMPTABLE_03 + 0x100) = 4;
  *(uint *)(UNRECOVERED_JUMPTABLE_03 + 0x108) = 4;
  *(uint *)(UNRECOVERED_JUMPTABLE_03 + 0x110) = 4;
  *(uint *)(UNRECOVERED_JUMPTABLE_03 + 0x118) = 4;
  *(uint *)(UNRECOVERED_JUMPTABLE_03 + 0x120) = 4;
  *(uint *)(UNRECOVERED_JUMPTABLE_03 + 0x128) = 4;
  *(uint *)(UNRECOVERED_JUMPTABLE_03 + 0x130) = 4;
  *(uint *)(UNRECOVERED_JUMPTABLE_03 + 0x138) = 4;
  *(uint *)(UNRECOVERED_JUMPTABLE_03 + 0x140) = 4;
  *(uint *)(UNRECOVERED_JUMPTABLE_03 + 0x148) = 4;
  if (param_3 == 0) {
    return UNRECOVERED_JUMPTABLE_03;
  }
  puVar15 = (uint *)(param_2 + param_3 * 0xc);
  puVar32 = &UNK_143023d00;
  puVar20 = (uint *)(param_2 + 4);
LAB_140939e45:
  bVar6 = *(byte *)((longlong)puVar20 + -3);
  fVar39 = (float)puVar20[1];
  bVar22 = (byte)unaff_RBX;
  bVar23 = (byte)(unaff_RBX >> 8);
  uVar25 = (undefined7)(unaff_RBX >> 8);
  cVar14 = SUB81(puVar15,0);
  uVar16 = (undefined7)((ulonglong)puVar15 >> 8);
  uVar26 = (undefined6)(unaff_RBX >> 0x10);
  cVar24 = (char)bVar23 >> 1;
  pbVar31 = unaff_RDI;
  if ((char)puVar20[-1] == '\0') {
    uVar8 = *puVar20;
    uVar34 = (ulonglong)*(int *)(&UNK_143023ce8 + (ulonglong)bVar6 * 4);
    bVar35 = 0xfffffffebcfdc317 < uVar34;
    puVar33 = &UNK_143023ce8 + uVar34;
    bVar36 = puVar33 == (undefined *)0x0;
    bVar4 = (byte)UNRECOVERED_JUMPTABLE_03;
    iVar7 = (int)UNRECOVERED_JUMPTABLE_03;
    uVar13 = (undefined7)((ulonglong)UNRECOVERED_JUMPTABLE_03 >> 8);
    cVar21 = (char)((ulonglong)puVar20 >> 8);
    uVar18 = SUB82(puVar20,0);
    uVar19 = (uint)puVar20;
    UNRECOVERED_JUMPTABLE = UNRECOVERED_JUMPTABLE_03;
    bVar38 = bVar35;
    switch(bVar6) {
    case 0:
      *(uint *)(UNRECOVERED_JUMPTABLE_03 + 0x150) = uVar8;
      *(float *)(UNRECOVERED_JUMPTABLE_03 + 0x154) = fVar39;
      break;
    case 1:
      *(uint *)(UNRECOVERED_JUMPTABLE_03 + 0x158) = uVar8;
      *(float *)(UNRECOVERED_JUMPTABLE_03 + 0x15c) = fVar39;
      break;
    case 2:
      *(uint *)(UNRECOVERED_JUMPTABLE_03 + 0x160) = uVar8;
      *(float *)(UNRECOVERED_JUMPTABLE_03 + 0x164) = fVar39;
      break;
    case 3:
      *(uint *)(UNRECOVERED_JUMPTABLE_03 + 0x168) = uVar8;
      *(float *)(UNRECOVERED_JUMPTABLE_03 + 0x16c) = fVar39;
      break;
    case 4:
      *(uint *)(UNRECOVERED_JUMPTABLE_03 + 0x170) = uVar8;
      *(float *)(UNRECOVERED_JUMPTABLE_03 + 0x174) = fVar39;
      break;
    case 5:
      *(uint *)(UNRECOVERED_JUMPTABLE_03 + 0x178) = uVar8;
      *(float *)(UNRECOVERED_JUMPTABLE_03 + 0x17c) = fVar39;
      break;
    case 6:
      cVar2 = bVar4 + 0x80;
      UNRECOVERED_JUMPTABLE_03 = (code *)CONCAT71(uVar13,cVar2);
      while ((POPCOUNT(cVar2) & 1U) == 0) {
        cVar2 = (char)UNRECOVERED_JUMPTABLE_03 + -0x80;
        UNRECOVERED_JUMPTABLE_03 =
             (code *)CONCAT71((int7)((ulonglong)UNRECOVERED_JUMPTABLE_03 >> 8),cVar2);
      }
      pcVar1 = (char *)(unaff_RBX * 2 + 0x44);
      *pcVar1 = *pcVar1 + cVar21;
      puVar20 = (uint *)(ulonglong)*puVar20;
      goto code_r0x000140939e55;
    case 7:
      goto code_r0x00014093a00f;
    case 8:
      *(undefined1 **)((longlong)register0x00000020 + -8) = unaff_RBP;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 9:
      goto code_r0x000140939ff3;
    case 10:
      *(code *)((longlong)puVar15 + (longlong)UNRECOVERED_JUMPTABLE_03) =
           *(code *)((longlong)puVar15 + (longlong)UNRECOVERED_JUMPTABLE_03);
      halt_baddata();
    case 0xb:
      unaff_RDI = (byte *)0x44fffffd;
      *(uint *)(UNRECOVERED_JUMPTABLE_03 + 0xa0) = uVar19;
      goto code_r0x00014093a071;
    case 0xc:
      pcVar1 = (char *)((longlong)UNRECOVERED_JUMPTABLE_03 * 2 + -0x76170000);
      *pcVar1 = *pcVar1 + '\x03';
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0xd:
      goto code_r0x00014093a001;
    case 0xe:
      pcVar1 = (char *)((longlong)UNRECOVERED_JUMPTABLE_03 * 2 + 0x59e90000);
      *pcVar1 = *pcVar1 + -3 + bVar35;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0xf:
      *(code *)((longlong)puVar15 + (longlong)UNRECOVERED_JUMPTABLE_03) =
           *(code *)((longlong)puVar15 + (longlong)UNRECOVERED_JUMPTABLE_03);
      goto code_r0x000140939f97;
    case 0x10:
      uVar9 = in(uVar18);
      *(undefined4 *)unaff_RDI = uVar9;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0x11:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0x12:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0x13:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0x14:
      do {
      } while( true );
    case 0x15:
      *UNRECOVERED_JUMPTABLE_03 = (code)((char)*UNRECOVERED_JUMPTABLE_03 + bVar4);
      break;
    case 0x16:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0x17:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0x18:
      goto code_r0x00014093a0ab;
    case 0x19:
      goto code_r0x00014093a12b;
    case 0x1a:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0x1b:
      pbVar31 = (byte *)((longlong)UNRECOVERED_JUMPTABLE_03 * 2 + -0x54170000);
      *pbVar31 = *pbVar31 & 0xfd;
      halt_baddata();
    case 0x1c:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0x1d:
      in(uVar18);
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0x1e:
      unaff_RDI = (byte *)(ulonglong)(uint)((int)unaff_RSI * -0x76bb0001);
      puVar27 = (undefined8 *)((longlong)register0x00000020 + -8);
      puVar30 = (undefined8 *)((longlong)register0x00000020 + -8);
      register0x00000020 = (BADSPACEBASE *)((longlong)register0x00000020 + -8);
      *puVar27 = unaff_RBP;
      goto code_r0x000140939fce;
    case 0x1f:
      goto code_r0x000140939faf;
    case 0x20:
      halt_baddata();
    case 0x21:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0x22:
      halt_baddata();
    case 0x23:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0x24:
      goto code_r0x00014093a0db;
    case 0x25:
      goto code_r0x00014093a01d;
    case 0x26:
    case 0x84:
      *(uint *)(UNRECOVERED_JUMPTABLE_03 + 0xf0) = uVar19;
code_r0x00014093a0f3:
      *(uint *)(UNRECOVERED_JUMPTABLE_03 + 0xf0) = (uint)puVar33;
      *(float *)(UNRECOVERED_JUMPTABLE_03 + 0xf4) = fVar39;
      break;
    case 0x27:
      pcVar1 = (char *)((longlong)UNRECOVERED_JUMPTABLE_03 * 2 + -0x28170000);
      *pcVar1 = *pcVar1 + -2;
      halt_baddata();
    case 0x28:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0x29:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0x2a:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0x2b:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0x2c:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0x2d:
      goto code_r0x00014093a117;
    case 0x2e:
      goto code_r0x000140939f7f;
    case 0x2f:
      out(0xfd,iVar7);
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0x30:
      *(uint *)UNRECOVERED_JUMPTABLE_03 = *(uint *)UNRECOVERED_JUMPTABLE_03 + iVar7;
      bVar6 = (byte)((ulonglong)puVar15 >> 8);
      bVar35 = CARRY1((byte)cVar14,bVar6);
      puVar15 = (uint *)CONCAT71(uVar16,(char)cVar14 + bVar6);
      goto code_r0x00014093a117;
    case 0x31:
      uVar8 = puVar15[0x32];
      puVar20 = (uint *)&UNK_143023f90;
      goto code_r0x00014093a3b3;
    case 0x32:
                    /* WARNING: Could not recover jumptable at 0x00014093a339. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      UNRECOVERED_JUMPTABLE =
           (code *)(*(code *)(CONCAT71(uVar13,bVar4 + 0x82) + (longlong)puVar20))();
      return UNRECOVERED_JUMPTABLE;
    case 0x33:
      puVar20 = (uint *)&UNK_143024094;
      UNRECOVERED_JUMPTABLE_03 =
           (code *)(longlong)*(int *)(&UNK_143024094 + (ulonglong)puVar15[0x18] * 4);
    case 0xca:
    case 0xf6:
    case 0xf8:
    case 0xf9:
      UNRECOVERED_JUMPTABLE_03 = UNRECOVERED_JUMPTABLE_03 + (longlong)puVar20;
code_r0x00014093a37b:
                    /* WARNING: Could not recover jumptable at 0x00014093a37b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      UNRECOVERED_JUMPTABLE = (code *)(*UNRECOVERED_JUMPTABLE_03)();
      return UNRECOVERED_JUMPTABLE;
    case 0x34:
      goto code_r0x00014093a268;
    default:
      goto code_r0x00014093a448;
    case 0x36:
      goto code_r0x00014093a4b4;
    case 0x37:
      UNRECOVERED_JUMPTABLE_03 = (code *)(ulonglong)puVar15[0x12];
      puVar20 = (uint *)&UNK_1430240d0;
      goto code_r0x00014093a392;
    case 0x38:
      uVar8 = puVar15[10];
      puVar20 = (uint *)&UNK_143024120;
      goto code_r0x00014093a51e;
    case 0x39:
                    /* WARNING: Could not recover jumptable at 0x00014093a2d9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      UNRECOVERED_JUMPTABLE =
           (code *)(*(code *)(&UNK_14302406c +
                             *(int *)(&UNK_14302406c + (ulonglong)puVar15[0x1c] * 4)))();
      return UNRECOVERED_JUMPTABLE;
    case 0x3a:
      goto code_r0x00014093a4f6;
    case 0x3b:
      UNRECOVERED_JUMPTABLE_03 = (code *)(ulonglong)(iVar7 + uVar19);
      goto code_r0x00014093a23e;
    case 0x3c:
                    /* WARNING: Could not recover jumptable at 0x00014093a2b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      UNRECOVERED_JUMPTABLE =
           (code *)(*(code *)(&UNK_143024044 +
                             *(int *)(&UNK_143024044 + (longlong)UNRECOVERED_JUMPTABLE_03 * 4)))();
      return UNRECOVERED_JUMPTABLE;
    case 0x3d:
      UNRECOVERED_JUMPTABLE = (code *)(ulonglong)(iVar7 + uVar19);
      goto code_r0x00014093a498;
    case 0x3e:
      goto code_r0x00014093a208;
    case 0x3f:
      goto code_r0x00014093a34c;
    case 0x40:
      puVar15 = (uint *)((longlong)puVar15 + -1);
      if (puVar15 == (uint *)0x0 || bVar36) {
        *(byte **)((longlong)register0x00000020 + -8) = unaff_RDI;
        *unaff_RDI = *unaff_RDI >> 6 | *unaff_RDI << 2;
        goto code_r0x00014093a1e9;
      }
    case 0xf7:
      UNRECOVERED_JUMPTABLE_03[-0x73] =
           (code)((char)UNRECOVERED_JUMPTABLE_03[-0x73] + (char)puVar15);
code_r0x00014093a1f8:
code_r0x00014093a1e9:
      piVar10 = (int *)(unaff_RBX & 0xffffffff);
      *piVar10 = *piVar10 + -0x48000001;
                    /* WARNING: Could not recover jumptable at 0x00014093a204. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      UNRECOVERED_JUMPTABLE =
           (code *)(*(code *)((longlong)*(int *)((longlong)piVar10 * 4 + 0x43023ea0) + 0x43023ea0))
                             (puVar15);
      return UNRECOVERED_JUMPTABLE;
    case 0x41:
      *UNRECOVERED_JUMPTABLE_03 = (code)((char)*UNRECOVERED_JUMPTABLE_03 + bVar4);
      goto code_r0x00014093a3e3;
    case 0x42:
      goto code_r0x00014093a4d2;
    case 0x43:
      goto code_r0x00014093a5c2;
    case 0x44:
      goto code_r0x00014093a430;
    case 0x45:
      goto code_r0x00014093a472;
    case 0x46:
    case 0x74:
    case 0x76:
    case 0x77:
      UNRECOVERED_JUMPTABLE = (code *)(CONCAT71(uVar13,bVar4 + 0x82) + (longlong)puVar20);
code_r0x00014093a585:
                    /* WARNING: Could not recover jumptable at 0x00014093a585. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      UNRECOVERED_JUMPTABLE = (code *)(*UNRECOVERED_JUMPTABLE)();
      return UNRECOVERED_JUMPTABLE;
    case 0x47:
      goto code_r0x00014093a5e6;
    case 0x48:
      UNRECOVERED_JUMPTABLE_03 = (code *)(ulonglong)puVar15[0x16];
      goto code_r0x00014093a30d;
    case 0x49:
      puVar11 = (uint *)(ulonglong)puVar15[0x42];
      puVar20 = (uint *)&UNK_143023ef0;
      goto code_r0x00014093a2f3;
    case 0x4a:
      *unaff_RDI = *unaff_RDI >> 6 | *unaff_RDI << 2;
      *(uint *)(UNRECOVERED_JUMPTABLE_03 + 0x48000000) =
           (*(uint *)(UNRECOVERED_JUMPTABLE_03 + 0x48000000) + 0x6686ea73) -
           (uint)((bVar22 >> 5 & 1) != 0);
      out(*unaff_RSI,uVar18);
      goto code_r0x00014093a68e;
    case 0x4b:
      *(uint *)(UNRECOVERED_JUMPTABLE_03 + 0x134) =
           *(uint *)(UNRECOVERED_JUMPTABLE_03 + 0x134) + iVar7 + (uint)bVar35;
      goto code_r0x00014093a193;
    case 0x4c:
      *unaff_RDI = *unaff_RDI >> 6 | *unaff_RDI << 2;
      piVar10 = (int *)(unaff_RBX & 0xffffffff);
      *piVar10 = *piVar10 + 0x48000001;
      puVar20 = (uint *)0x43023f04;
      lVar12 = (longlong)*(int *)((longlong)piVar10 * 4 + 0x43023f04);
      goto code_r0x00014093a627;
    case 0x4d:
      *unaff_RDI = *unaff_RDI >> 6 | *unaff_RDI << 2;
      *(int *)((longlong)puVar15 + (longlong)UNRECOVERED_JUMPTABLE_03) =
           *(int *)((longlong)puVar15 + (longlong)UNRECOVERED_JUMPTABLE_03) + -0x6cf10000;
      *(uint *)(UNRECOVERED_JUMPTABLE_03 + 0x48000000) =
           *(uint *)(UNRECOVERED_JUMPTABLE_03 + 0x48000000) ^ 0x9985158d;
      out(*unaff_RSI,uVar18);
      goto code_r0x00014093a646;
    case 0x4e:
      UNRECOVERED_JUMPTABLE_03 = (code *)(ulonglong)puVar15[0x2a];
      goto code_r0x00014093a538;
    case 0x4f:
    case 0x93:
      cVar14 = *UNRECOVERED_JUMPTABLE_03;
      *UNRECOVERED_JUMPTABLE_03 = (code)((char)*UNRECOVERED_JUMPTABLE_03 + bVar4);
      return (code *)CONCAT71(uVar13,!CARRY1((byte)cVar14,bVar4));
    case 0x50:
      uVar8 = puVar15[0x1a];
      puVar20 = (uint *)&UNK_143024080;
      goto code_r0x00014093a560;
    case 0x51:
      UNRECOVERED_JUMPTABLE_03 = (code *)(ulonglong)(iVar7 + uVar19);
      goto code_r0x00014093a221;
    case 0x52:
      UNRECOVERED_JUMPTABLE_03 =
           (code *)(&UNK_143023da8 + *(int *)(&UNK_143023da8 + ((ulonglong)puVar20 & 0xff) * 4));
    case 0xe8:
                    /* WARNING: Could not recover jumptable at 0x00014093a1d1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      UNRECOVERED_JUMPTABLE = (code *)(*UNRECOVERED_JUMPTABLE_03)();
      return UNRECOVERED_JUMPTABLE;
    case 0x53:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0x54:
      goto code_r0x00014093a178;
    case 0x55:
      *(uint *)(UNRECOVERED_JUMPTABLE_03 + 0x138) = uVar19;
      goto code_r0x00014093a12f;
    case 0x56:
      *unaff_RDI = *unaff_RDI >> 6 | *unaff_RDI << 2;
      puVar20 = (uint *)((longlong)UNRECOVERED_JUMPTABLE_03 * 2 + -0x6cf10000);
      *puVar20 = *puVar20 ^ 0x818bc3c0;
      *UNRECOVERED_JUMPTABLE_03 = (code)((char)*UNRECOVERED_JUMPTABLE_03 + bVar4);
      puVar20 = (uint *)&UNK_143023e78;
      lVar12 = (longlong)*(int *)(&UNK_143023e78 + (longlong)UNRECOVERED_JUMPTABLE_03 * 4);
      goto code_r0x00014093a66f;
    case 0x57:
      goto code_r0x00014093a59e;
    case 0x58:
      goto code_r0x00014093a286;
    case 0x59:
      UNRECOVERED_JUMPTABLE_03 = (code *)(ulonglong)puVar15[0x1e];
      puVar20 = (uint *)&UNK_143024058;
      goto code_r0x00014093a416;
    case 0x5a:
      return (code *)CONCAT71(uVar13,(float)puVar15[0x11] <= 0.0);
    case 0x5b:
    case 0x5d:
    case 0x5e:
      bVar36 = cVar24 == '\0';
      goto code_r0x00014093a5e6;
    case 0x5c:
      bVar35 = (bool)(bVar23 & 1);
      bVar36 = cVar24 == '\0';
      goto code_r0x00014093a37c;
    case 0x5f:
      goto code_r0x00014093a5d3;
    case 0x60:
    case 0x62:
    case 99:
      UNRECOVERED_JUMPTABLE_03 = (code *)CONCAT71(uVar13,!bVar35);
code_r0x00014093a5d3:
      return UNRECOVERED_JUMPTABLE_03;
    case 0x61:
      goto code_r0x00014093a1e0;
    case 100:
      puVar15 = (uint *)CONCAT71(uVar16,(char)cVar14 + (char)UNRECOVERED_JUMPTABLE_03[99]);
      goto code_r0x00014093a5c2;
    case 0x65:
    case 0x67:
    case 0x68:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0x66:
      goto code_r0x00014093a4e4;
    case 0x69:
      goto code_r0x00014093a5ab;
    case 0x6a:
    case 0x6c:
    case 0x6d:
      fVar39 = 0.0;
code_r0x00014093a5ab:
      return (code *)CONCAT71(uVar13,(float)puVar15[0x25] <= fVar39);
    case 0x6b:
      goto code_r0x00014093a584;
    case 0x6e:
      goto code_r0x00014093a597;
    case 0x6f:
    case 0x71:
    case 0x72:
      *UNRECOVERED_JUMPTABLE_03 = (code)((char)*UNRECOVERED_JUMPTABLE_03 + bVar4);
      goto code_r0x00014093a597;
    case 0x70:
      *UNRECOVERED_JUMPTABLE_03 = (code)((char)*UNRECOVERED_JUMPTABLE_03 + bVar4);
      goto code_r0x00014093a049;
    case 0x73:
      UNRECOVERED_JUMPTABLE = (code *)(ulonglong)(iVar7 + uVar19);
      goto code_r0x00014093a585;
    case 0x75:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0x78:
      bVar6 = in(uVar18);
      *unaff_RDI = bVar6;
      goto code_r0x00014093a570;
    case 0x79:
    case 0x7b:
    case 0x7c:
      bVar35 = fVar39 < (float)puVar15[0x1b];
      goto code_r0x00014093a570;
    case 0x7a:
      *(uint *)(UNRECOVERED_JUMPTABLE_03 + 0x88) = uVar19;
code_r0x00014093a049:
      *(uint *)(UNRECOVERED_JUMPTABLE_03 + 0x88) = (uint)puVar33;
      *(float *)(UNRECOVERED_JUMPTABLE_03 + 0x8c) = fVar39;
      break;
    case 0x7d:
      uVar8 = iVar7 + 0x26e9b20 + (uint)bVar35;
code_r0x00014093a560:
      lVar12 = (longlong)(int)puVar20[uVar8];
      goto code_r0x00014093a564;
    case 0x7e:
    case 0x80:
    case 0x81:
      goto code_r0x00014093a558;
    case 0x7f:
      goto code_r0x00014093a0a2;
    case 0x82:
      puVar15 = (uint *)((longlong)puVar15 + -1);
      if (puVar15 != (uint *)0x0 && !bVar36) goto code_r0x00014093a558;
      puVar29 = (undefined8 *)((longlong)register0x00000020 + -8);
      register0x00000020 = (BADSPACEBASE *)((longlong)register0x00000020 + -8);
      *puVar29 = unaff_RDI;
      goto code_r0x00014093a54a;
    case 0x83:
    case 0x85:
    case 0x86:
      UNRECOVERED_JUMPTABLE_03 = (code *)(ulonglong)(iVar7 + uVar19);
code_r0x00014093a538:
                    /* WARNING: Could not recover jumptable at 0x00014093a546. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      UNRECOVERED_JUMPTABLE =
           (code *)(*(code *)(&UNK_143023fe0 +
                             *(int *)(&UNK_143023fe0 + (longlong)UNRECOVERED_JUMPTABLE_03 * 4)))
                             (puVar15);
      return UNRECOVERED_JUMPTABLE;
    case 0x87:
      goto code_r0x00014093a533;
    case 0x88:
    case 0x8a:
    case 0x8b:
      goto code_r0x00014093a530;
    case 0x89:
      goto code_r0x00014093a410;
    case 0x8c:
      uVar34 = (ulonglong)puVar20[(longlong)UNRECOVERED_JUMPTABLE_03];
      goto code_r0x00014093a522;
    case 0x8d:
    case 0x8f:
    case 0x90:
      out(*unaff_RSI,uVar18);
      puVar15 = (uint *)CONCAT71(uVar16,(char)cVar14 + (char)UNRECOVERED_JUMPTABLE_03[99]);
      goto code_r0x00014093a520;
    case 0x8e:
      uVar34 = (ulonglong)puVar20[(longlong)UNRECOVERED_JUMPTABLE_03];
      goto code_r0x00014093a26d;
    case 0x91:
      goto code_r0x00014093a50b;
    case 0x92:
    case 0x94:
    case 0x95:
      *unaff_RDI = *unaff_RDI >> 6 | *unaff_RDI << 2;
      goto code_r0x00014093a50b;
    case 0x96:
      puVar20 = (uint *)0x43023ff4;
      goto code_r0x00014093a4fd;
    case 0x97:
    case 0x99:
    case 0x9a:
      *UNRECOVERED_JUMPTABLE_03 = (code)((char)*UNRECOVERED_JUMPTABLE_03 + bVar4);
      goto code_r0x00014093a4f6;
    case 0x98:
code_r0x00014093a4ac:
      *UNRECOVERED_JUMPTABLE_03 =
           (code)((char)*UNRECOVERED_JUMPTABLE_03 + (char)UNRECOVERED_JUMPTABLE_03);
      goto code_r0x00014093a4ae;
    case 0x9b:
      *(byte **)((longlong)register0x00000020 + -8) = unaff_RDI;
      goto code_r0x00014093a4e4;
    case 0x9c:
    case 0x9e:
    case 0x9f:
      goto code_r0x00014093a4e0;
    case 0x9d:
      goto code_r0x00014093a474;
    case 0xa0:
      *(uint *)UNRECOVERED_JUMPTABLE_03 = *(uint *)UNRECOVERED_JUMPTABLE_03 + iVar7;
      goto code_r0x00014093a4d1;
    case 0xa1:
    case 0xa3:
    case 0xa4:
      goto code_r0x00014093a4cc;
    case 0xa2:
      unaff_RBX = CONCAT71(uVar25,bVar22 + cVar21 + bVar35);
      *(undefined1 (*) [16])(UNRECOVERED_JUMPTABLE_03 + 0x14) = ZEXT416((uint)fVar39);
      goto code_r0x000140939ff3;
    case 0xa5:
      puVar15 = (uint *)((longlong)puVar15 + -1);
      if (puVar15 == (uint *)0x0 || cVar24 == '\0') goto code_r0x00014093a4bf;
      goto code_r0x00014093a4ce;
    case 0xa6:
    case 0xa8:
    case 0xa9:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0xa7:
      bVar35 = 0.0 < (float)puVar15[0x23];
      goto code_r0x00014093a4c8;
    case 0xaa:
      goto code_r0x00014093a4a7;
    case 0xab:
    case 0xad:
    case 0xae:
      UNRECOVERED_JUMPTABLE_03 = (code *)CONCAT71(uVar13,!bVar35);
code_r0x00014093a4a7:
      return UNRECOVERED_JUMPTABLE_03;
    case 0xac:
      *UNRECOVERED_JUMPTABLE_03 = (code)((char)*UNRECOVERED_JUMPTABLE_03 + bVar4);
      goto code_r0x00014093a10e;
    case 0xaf:
      goto code_r0x00014093a493;
    case 0xb0:
    case 0xb2:
    case 0xb3:
      puVar15 = (uint *)CONCAT71(uVar16,(char)cVar14 + (char)UNRECOVERED_JUMPTABLE_03[99]);
      goto code_r0x00014093a493;
    case 0xb1:
      *(uint *)(UNRECOVERED_JUMPTABLE_03 + 0xb4) =
           *(uint *)(UNRECOVERED_JUMPTABLE_03 + 0xb4) + iVar7 + (uint)bVar35;
      goto code_r0x00014093a11b;
    case 0xb4:
      UNRECOVERED_JUMPTABLE_03 = (code *)(unaff_RBX & 0xffffffff);
      puVar20 = (uint *)0x43023f18;
      goto code_r0x00014093a491;
    case 0xb5:
    case 0xb7:
    case 0xb8:
      bVar35 = fVar39 < (float)puVar15[3];
      goto code_r0x00014093a480;
    case 0xb6:
      goto code_r0x00014093a3ec;
    case 0xb9:
      goto code_r0x00014093a46b;
    case 0xba:
    case 0xbc:
    case 0xbd:
      bVar35 = false;
      UNRECOVERED_JUMPTABLE_03[-0x73] = (code)((byte)UNRECOVERED_JUMPTABLE_03[-0x73] | (byte)cVar14)
      ;
      goto code_r0x00014093a46b;
    case 0xbb:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0xbe:
      UNRECOVERED_JUMPTABLE = (code *)(ulonglong)(iVar7 + uVar19);
      goto code_r0x00014093a459;
    case 0xc0:
      *unaff_RDI = *unaff_RDI >> 6 | *unaff_RDI << 2;
      *(uint *)((longlong)puVar15 + (longlong)UNRECOVERED_JUMPTABLE_03) =
           *(uint *)((longlong)puVar15 + (longlong)UNRECOVERED_JUMPTABLE_03) & 0x930f0000;
      UNRECOVERED_JUMPTABLE_03 =
           (code *)(ulonglong)((iVar7 + -0x48000000) - (uint)((bVar22 >> 5 & 1) != 0));
      puVar20 = (uint *)0x43023f68;
      goto code_r0x00014093a269;
    case 0xc3:
code_r0x00014093a448:
      UNRECOVERED_JUMPTABLE =
           (code *)(&UNK_1430240f8 + *(int *)(&UNK_1430240f8 + (ulonglong)puVar15[0xe] * 4));
code_r0x00014093a459:
                    /* WARNING: Could not recover jumptable at 0x00014093a459. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      UNRECOVERED_JUMPTABLE = (code *)(*UNRECOVERED_JUMPTABLE)();
      return UNRECOVERED_JUMPTABLE;
    case 0xc4:
    case 0xc6:
    case 199:
      bVar35 = fVar39 < (float)puVar15[7];
      goto code_r0x00014093a444;
    case 0xc5:
      *(ulonglong *)((longlong)register0x00000020 + -8) =
           (ulonglong)(in_NT & 1) * 0x4000 | (ulonglong)SCARRY8(uVar34,0x143023ce8) * 0x800 |
           (ulonglong)(in_IF & 1) * 0x200 | (ulonglong)(in_TF & 1) * 0x100 |
           (ulonglong)((longlong)puVar33 < 0) * 0x80 | (ulonglong)bVar36 * 0x40 |
           (ulonglong)(in_AF & 1) * 0x10 |
           (ulonglong)((POPCOUNT((ulonglong)puVar33 & 0xff) & 1U) == 0) * 4 | (ulonglong)bVar35 |
           (ulonglong)(in_ID & 1) * 0x200000 | (ulonglong)(in_VIP & 1) * 0x100000 |
           (ulonglong)(in_VIF & 1) * 0x80000 | (ulonglong)(in_AC & 1) * 0x40000;
      out(*unaff_RSI,uVar18);
      goto code_r0x00014093a1fc;
    case 200:
      goto code_r0x00014093a42f;
    case 0xc9:
    case 0xcb:
    case 0xcc:
      UNRECOVERED_JUMPTABLE = UNRECOVERED_JUMPTABLE_03 + -0x73;
      bVar38 = (byte)*UNRECOVERED_JUMPTABLE < (byte)cVar14 ||
               (byte)((char)*UNRECOVERED_JUMPTABLE - (char)cVar14) < bVar35;
      *UNRECOVERED_JUMPTABLE = (code)(((char)*UNRECOVERED_JUMPTABLE - (char)cVar14) - bVar35);
      goto code_r0x00014093a42f;
    case 0xcd:
      UNRECOVERED_JUMPTABLE = (code *)(ulonglong)(iVar7 + uVar19);
      goto code_r0x00014093a41d;
    case 0xce:
    case 0xd0:
    case 0xd1:
      UNRECOVERED_JUMPTABLE_03 = (code *)CONCAT71(uVar13,bVar4 + 0x82);
      goto code_r0x00014093a416;
    case 0xcf:
      *unaff_RDI = *unaff_RDI >> 6 | *unaff_RDI << 2;
      UNRECOVERED_JUMPTABLE_03 = (code *)(unaff_RBX & 0xffffffff);
      *(uint *)UNRECOVERED_JUMPTABLE_03 =
           *(uint *)UNRECOVERED_JUMPTABLE_03 + 0x48000001 + (uint)((bVar4 >> 5 & 1) != 0);
      puVar20 = (uint *)0x43023edc;
      goto code_r0x00014093a28d;
    case 0xd2:
      cVar24 = bVar4 + 0xf + bVar35;
      uVar9 = (undefined4)CONCAT71(uVar13,cVar24);
code_r0x00014093a409:
      UNRECOVERED_JUMPTABLE_03 = (code *)(unaff_RBX & 0xffffffff);
      unaff_RBX = (ulonglong)CONCAT31((int3)((uint)uVar9 >> 8),(byte)uVar9 << 3 | (byte)uVar9 >> 5);
      if (cVar24 < '\0') goto code_r0x00014093a458;
      goto code_r0x00014093a410;
    case 0xd3:
    case 0xd5:
    case 0xd6:
      goto code_r0x00014093a404;
    case 0xd4:
      uVar5 = in(0);
      UNRECOVERED_JUMPTABLE_03 = (code *)CONCAT71(uVar13,uVar5);
      goto code_r0x00014093a178;
    case 0xd7:
      goto code_r0x00014093a3f3;
    case 0xd8:
    case 0xda:
    case 0xdb:
code_r0x00014093a3f0:
      UNRECOVERED_JUMPTABLE = UNRECOVERED_JUMPTABLE_03 + -0x73;
      bVar6 = (char)*UNRECOVERED_JUMPTABLE + (byte)puVar15;
      bVar38 = CARRY1((byte)*UNRECOVERED_JUMPTABLE,(byte)puVar15) || CARRY1(bVar6,bVar35);
      *UNRECOVERED_JUMPTABLE = (code)(bVar6 + bVar35);
      goto code_r0x00014093a3f3;
    case 0xd9:
      *(undefined1 (*) [16])(UNRECOVERED_JUMPTABLE_03 + 0x74) = ZEXT416((uint)fVar39);
    case 0xf2:
code_r0x000140939f5d:
      *(float *)(UNRECOVERED_JUMPTABLE_03 + 0x74) = fVar39;
      break;
    case 0xdc:
      puVar15 = (uint *)((longlong)puVar15 + -1);
      if (puVar15 != (uint *)0x0 && !bVar36) goto code_r0x00014093a3f0;
      *(byte **)((longlong)register0x00000020 + -8) = unaff_RDI;
      *unaff_RDI = *unaff_RDI >> 6 | *unaff_RDI << 2;
      UNRECOVERED_JUMPTABLE = (code *)(unaff_RBX & 0xffffffff);
      unaff_RBX = (ulonglong)UNRECOVERED_JUMPTABLE_03 & 0xffffffff;
      goto code_r0x00014093a3ec;
    case 0xdd:
    case 0xdf:
    case 0xe0:
      goto code_r0x00014093a3dc;
    case 0xde:
      pbVar31 = unaff_RDI + 1;
      bVar6 = in(uVar18);
      *unaff_RDI = bVar6;
      goto code_r0x00014093a0ab;
    case 0xe1:
      goto code_r0x00014093a3cb;
    case 0xe2:
    case 0xe4:
    case 0xe5:
      goto code_r0x00014093a3c8;
    case 0xe3:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0xe6:
      goto code_r0x00014093a3b7;
    case 0xe7:
    case 0xe9:
    case 0xea:
      UNRECOVERED_JUMPTABLE_03 = (code *)(ulonglong)puVar20[(longlong)UNRECOVERED_JUMPTABLE_03];
      goto code_r0x00014093a3b7;
    case 0xeb:
      UNRECOVERED_JUMPTABLE_03 = (code *)(unaff_RBX & 0xffffffff);
      goto code_r0x00014093a3a4;
    case 0xec:
    case 0xee:
    case 0xef:
      goto code_r0x00014093a3a0;
    case 0xed:
      *UNRECOVERED_JUMPTABLE_03 = (code)((char)*UNRECOVERED_JUMPTABLE_03 + bVar4);
      break;
    case 0xf0:
      goto code_r0x00014093a390;
    case 0xf1:
    case 0xf3:
    case 0xf4:
      puVar20 = (uint *)0x430240d0;
      goto code_r0x00014093a392;
    case 0xf5:
      goto code_r0x00014093a37b;
    case 0xfa:
      goto code_r0x00014093a368;
    case 0xfb:
    case 0xfd:
    case 0xfe:
      goto code_r0x00014093a364;
    case 0xfc:
      break;
    case 0xff:
      goto code_r0x00014093a353;
    }
    goto code_r0x000140939e30;
  }
code_r0x000140939e55:
  uVar8 = *puVar20;
  puVar33 = (undefined *)(ulonglong)uVar8;
  uVar34 = (ulonglong)*(int *)(&UNK_143023d00 + (ulonglong)bVar6 * 4);
  bVar35 = 0xfffffffebcfdc2ff < uVar34;
  bVar38 = SCARRY8(uVar34,0x143023d00);
  bVar37 = (longlong)(&UNK_143023d00 + uVar34) < 0;
  bVar36 = uVar34 == 0xfffffffebcfdc300;
  cVar3 = SUB81(UNRECOVERED_JUMPTABLE_03,0);
  iVar7 = (int)UNRECOVERED_JUMPTABLE_03;
  uVar13 = (undefined7)((ulonglong)UNRECOVERED_JUMPTABLE_03 >> 8);
  cVar21 = (char)((ulonglong)puVar20 >> 8);
  uVar18 = SUB82(puVar20,0);
  uVar19 = (uint)puVar20;
  sVar17 = (short)((ulonglong)UNRECOVERED_JUMPTABLE_03 >> 0x10) >> 0xf;
  UNRECOVERED_JUMPTABLE = UNRECOVERED_JUMPTABLE_03;
  switch(bVar6) {
  case 0:
    *(uint *)UNRECOVERED_JUMPTABLE_03 = uVar8;
    *(float *)(UNRECOVERED_JUMPTABLE_03 + 4) = fVar39;
    break;
  case 1:
    *(uint *)(UNRECOVERED_JUMPTABLE_03 + 8) = uVar8;
    *(float *)(UNRECOVERED_JUMPTABLE_03 + 0xc) = fVar39;
    break;
  case 2:
    *(uint *)(UNRECOVERED_JUMPTABLE_03 + 0x10) = uVar8;
    goto code_r0x000140939ff3;
  case 3:
    *(uint *)(UNRECOVERED_JUMPTABLE_03 + 0x18) = uVar8;
code_r0x00014093a00f:
    *(float *)(UNRECOVERED_JUMPTABLE_03 + 0x1c) = fVar39;
    break;
  case 4:
    *(uint *)(UNRECOVERED_JUMPTABLE_03 + 0x20) = uVar8;
    *(float *)(UNRECOVERED_JUMPTABLE_03 + 0x24) = fVar39;
    break;
  case 5:
    *(uint *)(UNRECOVERED_JUMPTABLE_03 + 0x28) = uVar8;
    *(float *)(UNRECOVERED_JUMPTABLE_03 + 0x2c) = fVar39;
    break;
  case 6:
    *(uint *)(UNRECOVERED_JUMPTABLE_03 + 0x30) = uVar8;
    *(float *)(UNRECOVERED_JUMPTABLE_03 + 0x34) = fVar39;
    break;
  case 7:
    *(uint *)(UNRECOVERED_JUMPTABLE_03 + 0x38) = uVar8;
code_r0x00014093a01d:
    *(float *)(UNRECOVERED_JUMPTABLE_03 + 0x3c) = fVar39;
    break;
  case 8:
    *(uint *)(UNRECOVERED_JUMPTABLE_03 + 0x40) = uVar8;
    *(float *)(UNRECOVERED_JUMPTABLE_03 + 0x44) = fVar39;
    break;
  case 9:
    *(uint *)(UNRECOVERED_JUMPTABLE_03 + 0x48) = uVar8;
    *(float *)(UNRECOVERED_JUMPTABLE_03 + 0x4c) = fVar39;
    break;
  case 10:
    *(uint *)(UNRECOVERED_JUMPTABLE_03 + 0x50) = uVar8;
code_r0x00014093a0db:
    *(float *)(UNRECOVERED_JUMPTABLE_03 + 0x54) = fVar39;
    break;
  case 0xb:
    *(uint *)(UNRECOVERED_JUMPTABLE_03 + 0x58) = uVar8;
code_r0x000140939f7f:
    *(float *)(UNRECOVERED_JUMPTABLE_03 + 0x5c) = fVar39;
    break;
  case 0xc:
    *(uint *)(UNRECOVERED_JUMPTABLE_03 + 0x60) = uVar8;
code_r0x000140939faf:
    *(float *)(UNRECOVERED_JUMPTABLE_03 + 100) = fVar39;
    break;
  case 0xd:
    *(uint *)(UNRECOVERED_JUMPTABLE_03 + 0x68) = uVar8;
    goto code_r0x00014093a0ab;
  case 0xe:
    *(uint *)(UNRECOVERED_JUMPTABLE_03 + 0x70) = uVar8;
    goto code_r0x000140939f5d;
  case 0xf:
    *(uint *)(UNRECOVERED_JUMPTABLE_03 + 0x78) = uVar8;
code_r0x00014093a001:
    *(float *)(UNRECOVERED_JUMPTABLE_03 + 0x7c) = fVar39;
    break;
  case 0x10:
    *(uint *)(UNRECOVERED_JUMPTABLE_03 + 0x80) = uVar8;
    *(float *)(UNRECOVERED_JUMPTABLE_03 + 0x84) = fVar39;
    break;
  case 0x11:
    goto code_r0x00014093a049;
  case 0x12:
    *(uint *)(UNRECOVERED_JUMPTABLE_03 + 0x90) = uVar8;
    *(float *)(UNRECOVERED_JUMPTABLE_03 + 0x94) = fVar39;
    break;
  case 0x13:
    *(uint *)(UNRECOVERED_JUMPTABLE_03 + 0x98) = uVar8;
    goto code_r0x00014093a14a;
  case 0x14:
code_r0x00014093a071:
    *(uint *)(UNRECOVERED_JUMPTABLE_03 + 0xa0) = (uint)puVar33;
    *(float *)(UNRECOVERED_JUMPTABLE_03 + 0xa4) = fVar39;
    break;
  case 0x15:
    *(uint *)(UNRECOVERED_JUMPTABLE_03 + 0xa8) = uVar8;
  case 0x6f:
    *(float *)(UNRECOVERED_JUMPTABLE_03 + 0xac) = fVar39;
code_r0x00014093a0a2:
    break;
  case 0x16:
    goto code_r0x00014093a11b;
  case 0x17:
    *(uint *)(UNRECOVERED_JUMPTABLE_03 + 0xb8) = uVar8;
    *(float *)(UNRECOVERED_JUMPTABLE_03 + 0xbc) = fVar39;
    break;
  case 0x18:
    *(uint *)(UNRECOVERED_JUMPTABLE_03 + 0xc0) = uVar8;
    *(float *)(UNRECOVERED_JUMPTABLE_03 + 0xc4) = fVar39;
    break;
  case 0x19:
    *(uint *)(UNRECOVERED_JUMPTABLE_03 + 200) = uVar8;
    puVar30 = (undefined8 *)unaff_RBP;
code_r0x000140939fce:
    *(float *)(UNRECOVERED_JUMPTABLE_03 + 0xcc) = fVar39;
    unaff_RBP = (undefined1 *)puVar30;
    break;
  case 0x1a:
    *(uint *)(UNRECOVERED_JUMPTABLE_03 + 0xd0) = uVar8;
    *(float *)(UNRECOVERED_JUMPTABLE_03 + 0xd4) = fVar39;
    break;
  case 0x1b:
    *(uint *)(UNRECOVERED_JUMPTABLE_03 + 0xd8) = uVar8;
    *(float *)(UNRECOVERED_JUMPTABLE_03 + 0xdc) = fVar39;
    break;
  case 0x1c:
    *(uint *)(UNRECOVERED_JUMPTABLE_03 + 0xe0) = uVar8;
    goto code_r0x00014093a172;
  case 0x1d:
    *(uint *)(UNRECOVERED_JUMPTABLE_03 + 0xe8) = uVar8;
    *(float *)(UNRECOVERED_JUMPTABLE_03 + 0xec) = fVar39;
  case 0xce:
    break;
  case 0x1e:
    goto code_r0x00014093a0f3;
  case 0x1f:
    *(uint *)(UNRECOVERED_JUMPTABLE_03 + 0xf8) = uVar8;
    *(float *)(UNRECOVERED_JUMPTABLE_03 + 0xfc) = fVar39;
    break;
  case 0x20:
    *(uint *)(UNRECOVERED_JUMPTABLE_03 + 0x100) = uVar8;
    goto code_r0x00014093a10e;
  case 0x21:
    *(uint *)(UNRECOVERED_JUMPTABLE_03 + 0x108) = uVar8;
    *(float *)(UNRECOVERED_JUMPTABLE_03 + 0x10c) = fVar39;
    goto code_r0x000140939f76;
  case 0x22:
    *(uint *)(UNRECOVERED_JUMPTABLE_03 + 0x110) = uVar8;
    *(float *)(UNRECOVERED_JUMPTABLE_03 + 0x114) = fVar39;
    break;
  case 0x23:
    *(uint *)(UNRECOVERED_JUMPTABLE_03 + 0x118) = uVar8;
    *(float *)(UNRECOVERED_JUMPTABLE_03 + 0x11c) = fVar39;
    break;
  case 0x24:
    *(uint *)(UNRECOVERED_JUMPTABLE_03 + 0x120) = uVar8;
    *(float *)(UNRECOVERED_JUMPTABLE_03 + 0x124) = fVar39;
    break;
  case 0x25:
    *(uint *)(UNRECOVERED_JUMPTABLE_03 + 0x128) = uVar8;
    *(float *)(UNRECOVERED_JUMPTABLE_03 + 300) = fVar39;
    break;
  case 0x26:
code_r0x00014093a193:
    *(uint *)(UNRECOVERED_JUMPTABLE_03 + 0x130) = (uint)puVar33;
    *(float *)(UNRECOVERED_JUMPTABLE_03 + 0x134) = fVar39;
    break;
  case 0x27:
code_r0x00014093a12f:
    *(uint *)(UNRECOVERED_JUMPTABLE_03 + 0x138) = (uint)puVar33;
    *(float *)(UNRECOVERED_JUMPTABLE_03 + 0x13c) = fVar39;
    break;
  case 0x28:
code_r0x000140939f97:
    *(uint *)(UNRECOVERED_JUMPTABLE_03 + 0x140) = (uint)puVar33;
    *(float *)(UNRECOVERED_JUMPTABLE_03 + 0x144) = fVar39;
    break;
  case 0x29:
    *(uint *)(UNRECOVERED_JUMPTABLE_03 + 0x148) = uVar8;
    goto code_r0x00014093a064;
  case 0x2a:
code_r0x00014093a12b:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x2b:
    goto code_r0x00014093a3be;
  case 0x2c:
    UNRECOVERED_JUMPTABLE_03 = (code *)(ulonglong)puVar15[0x50];
code_r0x00014093a34c:
    puVar20 = (uint *)&UNK_143023e64;
code_r0x00014093a353:
    UNRECOVERED_JUMPTABLE_03 = (code *)(longlong)(int)puVar20[(longlong)UNRECOVERED_JUMPTABLE_03];
    goto code_r0x00014093a357;
  case 0x2d:
    goto code_r0x00014093a382;
  case 0x2e:
    UNRECOVERED_JUMPTABLE_03 = (code *)(ulonglong)puVar15[0x44];
    goto code_r0x00014093a286;
  default:
    unaff_RBP[0x6348026e] = unaff_RBP[0x6348026e] + bVar22;
    goto code_r0x00014093a472;
  case 0x30:
code_r0x00014093a4cc:
    UNRECOVERED_JUMPTABLE_03 = (code *)(ulonglong)puVar15[0x52];
    goto code_r0x00014093a4d2;
  case 0x31:
code_r0x00014093a3a0:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x32:
    UNRECOVERED_JUMPTABLE_03 = (code *)(unaff_RBX & 0xffffffff);
code_r0x00014093a530:
code_r0x00014093a533:
    *(uint *)(UNRECOVERED_JUMPTABLE_03 + 0x48000000) =
         *(uint *)(UNRECOVERED_JUMPTABLE_03 + 0x48000000) + 0x655eea73;
    out(*unaff_RSI,(short)puVar20);
    puVar15 = (uint *)CONCAT71(uVar16,(char)cVar14 + (char)UNRECOVERED_JUMPTABLE_03[99]);
    UNRECOVERED_JUMPTABLE_03 =
         (code *)CONCAT71((int7)((ulonglong)UNRECOVERED_JUMPTABLE_03 >> 8),
                          (char)UNRECOVERED_JUMPTABLE_03 + -0x7e);
    goto code_r0x00014093a538;
  case 0x33:
    if (bVar36) {
      puVar15 = (uint *)CONCAT71(uVar16,(char)cVar14 + (char)UNRECOVERED_JUMPTABLE_03[99]);
      puVar11 = (uint *)CONCAT71(uVar13,(char)cVar3 + 0x82);
    }
    else {
      puVar11 = (uint *)(unaff_RBX & 0xffffffff);
      *puVar11 = *puVar11 | 0x48000001;
      puVar20 = (uint *)0x43023ef0;
    }
code_r0x00014093a2f3:
                    /* WARNING: Could not recover jumptable at 0x00014093a2fa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE =
         (code *)(*(code *)((longlong)(int)puVar20[(longlong)puVar11] + (longlong)puVar20))(puVar15)
    ;
    return UNRECOVERED_JUMPTABLE;
  case 0x34:
    cVar14 = *UNRECOVERED_JUMPTABLE_03;
    *UNRECOVERED_JUMPTABLE_03 = (code)((char)*UNRECOVERED_JUMPTABLE_03 + (char)cVar3);
    return (code *)CONCAT71(uVar13,!CARRY1((byte)cVar14,(byte)cVar3));
  case 0x35:
    puVar20 = (uint *)&UNK_143023f68;
code_r0x00014093a269:
    uVar34 = (ulonglong)(int)puVar20[(longlong)UNRECOVERED_JUMPTABLE_03];
code_r0x00014093a26d:
                    /* WARNING: Could not recover jumptable at 0x00014093a270. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE = (code *)(*(code *)(uVar34 + (longlong)puVar20))(puVar15);
    return UNRECOVERED_JUMPTABLE;
  case 0x36:
    cVar14 = *UNRECOVERED_JUMPTABLE_03;
    *UNRECOVERED_JUMPTABLE_03 = (code)((char)*UNRECOVERED_JUMPTABLE_03 + (char)cVar3);
    return (code *)CONCAT71(uVar13,!CARRY1((byte)cVar14,(byte)cVar3));
  case 0x37:
    goto code_r0x00014093a4ae;
  case 0x38:
    puVar15 = (uint *)CONCAT71(uVar16,(char)cVar14 + (char)UNRECOVERED_JUMPTABLE_03[99]);
    UNRECOVERED_JUMPTABLE_03 = (code *)CONCAT71(uVar13,(char)cVar3 + 0x82);
    goto code_r0x00014093a221;
  case 0x39:
code_r0x00014093a364:
    cVar14 = *UNRECOVERED_JUMPTABLE_03;
    *UNRECOVERED_JUMPTABLE_03 =
         (code)((char)*UNRECOVERED_JUMPTABLE_03 + (byte)UNRECOVERED_JUMPTABLE_03);
    return (code *)(ulonglong)!CARRY1((byte)cVar14,(byte)UNRECOVERED_JUMPTABLE_03);
  case 0x3a:
code_r0x00014093a1fc:
    puVar15 = (uint *)CONCAT71(uVar16,(char)cVar14 + (char)UNRECOVERED_JUMPTABLE_03[99]);
    goto code_r0x00014093a1e9;
  case 0x3b:
    puVar15 = (uint *)((longlong)puVar15 + -1);
    if (puVar15 == (uint *)0x0 || bVar36) {
      puVar28 = (undefined8 *)((longlong)register0x00000020 + -8);
      register0x00000020 = (BADSPACEBASE *)((longlong)register0x00000020 + -8);
      *puVar28 = unaff_RDI;
      *unaff_RDI = *unaff_RDI >> 6 | *unaff_RDI << 2;
      cVar24 = (char)cVar3 + 0xfU + ((char)*unaff_RDI < '\0');
      uVar9 = (undefined4)CONCAT71(uVar13,cVar24);
      goto code_r0x00014093a409;
    }
    UNRECOVERED_JUMPTABLE_03 = (code *)(ulonglong)(iVar7 + 0x26e9c42 + (uint)bVar35);
    goto code_r0x00014093a416;
  case 0x3c:
    cVar14 = *UNRECOVERED_JUMPTABLE_03;
    *UNRECOVERED_JUMPTABLE_03 = (code)((char)*UNRECOVERED_JUMPTABLE_03 + (char)cVar3);
    UNRECOVERED_JUMPTABLE_03 = (code *)CONCAT71(uVar13,!CARRY1((byte)cVar14,(byte)cVar3));
    goto code_r0x00014093a4e7;
  case 0x3d:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x3e:
    goto code_r0x00014093a448;
  case 0x3f:
    puVar20 = (uint *)&UNK_143023f18;
    goto code_r0x00014093a491;
  case 0x40:
    UNRECOVERED_JUMPTABLE_03 = (code *)(ulonglong)puVar15[0x24];
  case 0x6e:
  case 0x70:
  case 0x71:
    puVar20 = (uint *)&UNK_14302401c;
code_r0x00014093a59f:
    lVar12 = (longlong)(int)puVar20[(longlong)UNRECOVERED_JUMPTABLE_03];
code_r0x00014093a5a3:
                    /* WARNING: Could not recover jumptable at 0x00014093a5a6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE = (code *)(*(code *)(lVar12 + (longlong)puVar20))(puVar15);
    return UNRECOVERED_JUMPTABLE;
  case 0x41:
    goto code_r0x00014093a5fe;
  case 0x42:
    return (code *)CONCAT71(uVar13,!bVar35);
  case 0x43:
    *unaff_RDI = *unaff_RDI >> 6 | *unaff_RDI << 2;
    *(uint *)((longlong)puVar15 + (longlong)UNRECOVERED_JUMPTABLE_03) =
         *(uint *)((longlong)puVar15 + (longlong)UNRECOVERED_JUMPTABLE_03) | 0x930f0000;
    puVar32 = *(undefined **)register0x00000020;
code_r0x00014093a30d:
                    /* WARNING: Could not recover jumptable at 0x00014093a31b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE =
         (code *)(*(code *)(&UNK_1430240a8 +
                           *(int *)(&UNK_1430240a8 + (longlong)UNRECOVERED_JUMPTABLE_03 * 4)))
                           (fVar39,&UNK_1430240a8,puVar32);
    return UNRECOVERED_JUMPTABLE;
  case 0x44:
code_r0x00014093a68e:
                    /* WARNING: Could not recover jumptable at 0x00014093a696. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE =
         (code *)(*(code *)(CONCAT71((int7)((ulonglong)UNRECOVERED_JUMPTABLE_03 >> 8),
                                     (char)UNRECOVERED_JUMPTABLE_03 + -0x7e) + (longlong)puVar20))
                           (CONCAT71(uVar16,(char)cVar14 + (char)UNRECOVERED_JUMPTABLE_03[99]));
    return UNRECOVERED_JUMPTABLE;
  case 0x45:
    *UNRECOVERED_JUMPTABLE_03 = (code)((char)*UNRECOVERED_JUMPTABLE_03 + (char)cVar3);
    break;
  case 0x46:
    puVar15 = (uint *)CONCAT71(uVar16,(char)cVar14 + (char)UNRECOVERED_JUMPTABLE_03[99]);
    lVar12 = CONCAT71(uVar13,(char)cVar3 + 0x82);
code_r0x00014093a627:
                    /* WARNING: Could not recover jumptable at 0x00014093a62a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE = (code *)(*(code *)(lVar12 + (longlong)puVar20))(puVar15);
    return UNRECOVERED_JUMPTABLE;
  case 0x47:
code_r0x00014093a646:
                    /* WARNING: Could not recover jumptable at 0x00014093a64e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE =
         (code *)(*(code *)(CONCAT71((int7)((ulonglong)UNRECOVERED_JUMPTABLE_03 >> 8),
                                     (char)UNRECOVERED_JUMPTABLE_03 + -0x7e) + (longlong)puVar20))
                           (CONCAT71(uVar16,(char)cVar14 + (char)UNRECOVERED_JUMPTABLE_03[99]));
    return UNRECOVERED_JUMPTABLE;
  case 0x48:
code_r0x00014093a54a:
    *unaff_RDI = *unaff_RDI >> 6 | *unaff_RDI << 2;
    piVar10 = (int *)((longlong)UNRECOVERED_JUMPTABLE_03 * 2 + -0x6cf10000);
    *piVar10 = *piVar10 + -0x418bc3c0;
code_r0x00014093a558:
    *(undefined8 *)((longlong)register0x00000020 + -8) = 0x20158d48;
    out(*unaff_RSI,(short)puVar20);
  case 0x7c:
    puVar15 = (uint *)CONCAT71((int7)((ulonglong)puVar15 >> 8),
                               (char)puVar15 + (char)UNRECOVERED_JUMPTABLE_03[99]);
code_r0x00014093a55c:
    *(byte *)(unaff_RBX + 0x6348026e) = *(byte *)(unaff_RBX + 0x6348026e) & bVar22;
    lVar12 = CONCAT71((int7)((ulonglong)UNRECOVERED_JUMPTABLE_03 >> 8),
                      (char)UNRECOVERED_JUMPTABLE_03 + -0x7e);
code_r0x00014093a564:
                    /* WARNING: Could not recover jumptable at 0x00014093a567. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE = (code *)(*(code *)(lVar12 + (longlong)puVar20))(puVar15);
    return UNRECOVERED_JUMPTABLE;
  case 0x49:
  case 0x8d:
code_r0x00014093a3dc:
    UNRECOVERED_JUMPTABLE_03 =
         (code *)(ulonglong)(uint)((int)UNRECOVERED_JUMPTABLE_03 + (int)puVar20);
    goto code_r0x00014093a3cb;
  case 0x4a:
    bVar6 = in(uVar18);
    *unaff_RDI = bVar6;
  case 0x78:
  case 0x7a:
  case 0x7b:
code_r0x00014093a570:
    UNRECOVERED_JUMPTABLE_03 = (code *)(ulonglong)!bVar35;
code_r0x00014093a573:
    return UNRECOVERED_JUMPTABLE_03;
  case 0x4b:
code_r0x00014093a23e:
                    /* WARNING: Could not recover jumptable at 0x00014093a24c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE =
         (code *)(*(code *)(&UNK_143023eb4 +
                           *(int *)(&UNK_143023eb4 + (longlong)UNRECOVERED_JUMPTABLE_03 * 4)))();
    return UNRECOVERED_JUMPTABLE;
  case 0x4c:
    out(*unaff_RSI,uVar18);
    puVar15 = (uint *)CONCAT71(uVar16,(char)cVar14 + (char)UNRECOVERED_JUMPTABLE_03[99]);
    UNRECOVERED_JUMPTABLE_03 = (code *)CONCAT71(uVar13,(char)cVar3 + 0x82);
code_r0x00014093a1e0:
                    /* WARNING: Could not recover jumptable at 0x00014093a1e3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE = (code *)(*(UNRECOVERED_JUMPTABLE_03 + (longlong)puVar20))(puVar15);
    return UNRECOVERED_JUMPTABLE;
  case 0x4d:
    *(uint *)(UNRECOVERED_JUMPTABLE_03 + 0xe0) = uVar19;
code_r0x00014093a172:
    *(float *)(UNRECOVERED_JUMPTABLE_03 + 0xe4) = fVar39;
    break;
  case 0x4e:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x4f:
    *UNRECOVERED_JUMPTABLE_03 = (code)((char)*UNRECOVERED_JUMPTABLE_03 + (char)cVar3);
code_r0x00014093a14a:
    *(float *)(UNRECOVERED_JUMPTABLE_03 + 0x9c) = fVar39;
    break;
  case 0x50:
    puVar15 = (uint *)CONCAT71(uVar16,(char)cVar14 + (char)UNRECOVERED_JUMPTABLE_03[99]);
    lVar12 = CONCAT71(uVar13,(char)cVar3 + 0x82);
code_r0x00014093a66f:
                    /* WARNING: Could not recover jumptable at 0x00014093a672. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE = (code *)(*(code *)(lVar12 + (longlong)puVar20))(puVar15);
    return UNRECOVERED_JUMPTABLE;
  case 0x51:
    UNRECOVERED_JUMPTABLE_03 = (code *)(ulonglong)puVar15[0x14];
    goto code_r0x00014093a5b9;
  case 0x52:
    cVar14 = *UNRECOVERED_JUMPTABLE_03;
    *UNRECOVERED_JUMPTABLE_03 = (code)((char)*UNRECOVERED_JUMPTABLE_03 + (char)cVar3);
    return (code *)CONCAT71(uVar13,!CARRY1((byte)cVar14,(byte)cVar3));
  case 0x53:
    goto code_r0x00014093a424;
  case 0x54:
    goto code_r0x00014093a5ff;
  case 0x55:
  case 0x57:
  case 0x58:
    puVar20 = (uint *)(ulonglong)(uint)(iVar7 >> 0x1f);
    out(*unaff_RSI,sVar17);
code_r0x00014093a5fe:
    puVar15 = (uint *)CONCAT71(uVar16,(char)cVar14 + (char)UNRECOVERED_JUMPTABLE_03[99]);
    lVar12 = CONCAT71(uVar13,(char)cVar3 + 0x82);
code_r0x00014093a603:
                    /* WARNING: Could not recover jumptable at 0x00014093a606. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE = (code *)(*(code *)(lVar12 + (longlong)puVar20))(puVar15);
    return UNRECOVERED_JUMPTABLE;
  case 0x56:
    goto code_r0x00014093a392;
  case 0x59:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x5a:
  case 0x5c:
  case 0x5d:
    goto code_r0x00014093a5e8;
  case 0x5b:
    goto code_r0x00014093a1f8;
  case 0x5e:
    goto code_r0x00014093a5d7;
  case 0x5f:
  case 0x61:
  case 0x62:
    UNRECOVERED_JUMPTABLE_03 = (code *)(ulonglong)puVar15[0x10];
code_r0x00014093a5d7:
                    /* WARNING: Could not recover jumptable at 0x00014093a5e5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE =
         (code *)(*(code *)(&UNK_1430240e4 +
                           *(int *)(&UNK_1430240e4 + (longlong)UNRECOVERED_JUMPTABLE_03 * 4)))();
    return UNRECOVERED_JUMPTABLE;
  case 0x60:
    goto code_r0x00014093a4fc;
  case 99:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 100:
  case 0x66:
  case 0x67:
    goto code_r0x00014093a5c0;
  case 0x65:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x68:
    *UNRECOVERED_JUMPTABLE_03 = (code)((char)*UNRECOVERED_JUMPTABLE_03 + (char)cVar3);
    *unaff_RDI = *unaff_RDI + (char)cVar14;
    UNRECOVERED_JUMPTABLE_03 = (code *)(unaff_RBX & 0xffffffff);
    *(undefined **)((longlong)register0x00000020 + -8) = &UNK_143023d00;
    goto code_r0x00014093a5b9;
  case 0x69:
  case 0x6b:
  case 0x6c:
    piVar10 = (int *)((longlong)UNRECOVERED_JUMPTABLE_03 * 2 + -0x6cf10000);
    *piVar10 = *piVar10 + 0x418bc3c0 + (uint)bVar35;
    *(code **)((longlong)register0x00000020 + -8) = UNRECOVERED_JUMPTABLE_03;
code_r0x00014093a5b9:
    puVar20 = (uint *)&UNK_1430240bc;
code_r0x00014093a5c0:
    lVar12 = (longlong)(int)puVar20[(longlong)UNRECOVERED_JUMPTABLE_03];
code_r0x00014093a5c4:
                    /* WARNING: Could not recover jumptable at 0x00014093a5c7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE = (code *)(*(code *)(lVar12 + (longlong)puVar20))(puVar15);
    return UNRECOVERED_JUMPTABLE;
  case 0x6a:
    *(uint *)(UNRECOVERED_JUMPTABLE_03 + 0x14c) =
         *(uint *)(UNRECOVERED_JUMPTABLE_03 + 0x14c) + iVar7 + (uint)bVar35;
    goto code_r0x00014093a064;
  case 0x6d:
    if (-0x143023d01 < (longlong)uVar34) goto code_r0x00014093a537;
    goto code_r0x00014093a59d;
  case 0x72:
    return (code *)CONCAT71(uVar13,(float)puVar15[0xd] <= 0.0);
  case 0x73:
  case 0x75:
  case 0x76:
code_r0x00014093a584:
    puVar15 = (uint *)((longlong)puVar15 + -1);
    if (puVar15 != (uint *)0x0 && cVar24 != '\0') goto code_r0x00014093a597;
    *(byte **)((longlong)register0x00000020 + -8) = unaff_RDI;
    *unaff_RDI = *unaff_RDI >> 6 | *unaff_RDI << 2;
    bVar6 = (byte)UNRECOVERED_JUMPTABLE_03;
    UNRECOVERED_JUMPTABLE_03 = (code *)(CONCAT62(uVar26,CONCAT11(cVar24,bVar22)) & 0xffffffff);
    *(uint *)(UNRECOVERED_JUMPTABLE_03 + 0x48000000) =
         *(uint *)(UNRECOVERED_JUMPTABLE_03 + 0x48000000) + 0x9a7d158d +
         (uint)((bVar6 >> 5 & 1) != 0);
code_r0x00014093a59d:
    out(*unaff_RSI,(short)puVar20);
code_r0x00014093a59e:
    puVar15 = (uint *)CONCAT71((int7)((ulonglong)puVar15 >> 8),
                               (char)puVar15 + (char)UNRECOVERED_JUMPTABLE_03[99]);
    lVar12 = CONCAT71((int7)((ulonglong)UNRECOVERED_JUMPTABLE_03 >> 8),
                      (char)UNRECOVERED_JUMPTABLE_03 + -0x7e);
    goto code_r0x00014093a5a3;
  case 0x74:
    *UNRECOVERED_JUMPTABLE_03 = (code)((char)*UNRECOVERED_JUMPTABLE_03 + (char)cVar3);
code_r0x00014093a064:
    *(float *)(UNRECOVERED_JUMPTABLE_03 + 0x14c) = fVar39;
    break;
  case 0x77:
    goto code_r0x00014093a573;
  case 0x79:
    *(undefined1 (*) [16])(UNRECOVERED_JUMPTABLE_03 + 0x34) = ZEXT416((uint)fVar39);
    break;
  case 0x7d:
  case 0x7f:
  case 0x80:
    goto code_r0x00014093a55c;
  case 0x7e:
    *UNRECOVERED_JUMPTABLE_03 = (code)((char)*UNRECOVERED_JUMPTABLE_03 + (char)cVar3);
code_r0x00014093a10e:
    *(float *)(UNRECOVERED_JUMPTABLE_03 + 0x104) = fVar39;
    break;
  case 0x81:
    goto code_r0x00014093a54b;
  case 0x82:
  case 0x84:
  case 0x85:
    fVar39 = 0.0;
code_r0x00014093a54b:
    return (code *)CONCAT71(uVar13,(float)puVar15[0x2b] <= fVar39);
  case 0x83:
    goto code_r0x00014093a428;
  case 0x86:
code_r0x00014093a537:
    UNRECOVERED_JUMPTABLE_03 = UNRECOVERED_JUMPTABLE_03 + -0x73;
    cVar3 = *UNRECOVERED_JUMPTABLE_03;
    *UNRECOVERED_JUMPTABLE_03 = (code)((char)*UNRECOVERED_JUMPTABLE_03 + (char)cVar14);
    UNRECOVERED_JUMPTABLE_03 =
         (code *)(ulonglong)(iVar7 + 0x26e9aa1 + (uint)CARRY1((byte)cVar3,(byte)cVar14));
    goto code_r0x00014093a538;
  case 0x87:
  case 0x89:
  case 0x8a:
    *UNRECOVERED_JUMPTABLE_03 = (code)((char)*UNRECOVERED_JUMPTABLE_03 + (char)cVar3);
    goto code_r0x00014093a538;
  case 0x88:
    *(char *)puVar15 = (char)*puVar15 + (char)cVar3 + bVar35;
    *UNRECOVERED_JUMPTABLE_03 = (code)((char)*UNRECOVERED_JUMPTABLE_03 + (char)cVar3);
code_r0x00014093a286:
    puVar20 = (uint *)&UNK_143023edc;
code_r0x00014093a28d:
    lVar12 = (longlong)(int)puVar20[(longlong)UNRECOVERED_JUMPTABLE_03];
code_r0x00014093a291:
                    /* WARNING: Could not recover jumptable at 0x00014093a294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE = (code *)(*(code *)(lVar12 + (longlong)puVar20))(puVar15);
    return UNRECOVERED_JUMPTABLE;
  case 0x8b:
    uVar34 = (ulonglong)(iVar7 + uVar19);
    goto code_r0x00014093a522;
  case 0x8c:
  case 0x8e:
  case 0x8f:
code_r0x00014093a520:
    uVar34 = CONCAT71((int7)((ulonglong)UNRECOVERED_JUMPTABLE_03 >> 8),
                      (char)UNRECOVERED_JUMPTABLE_03 + -0x7e);
    goto code_r0x00014093a522;
  case 0x90:
    goto code_r0x00014093a50f;
  case 0x91:
  case 0x93:
  case 0x94:
    *unaff_RDI = *unaff_RSI;
    *UNRECOVERED_JUMPTABLE_03 = (code)((char)*UNRECOVERED_JUMPTABLE_03 + (char)cVar3);
    unaff_RDI = unaff_RDI + 1;
code_r0x00014093a50f:
    *unaff_RDI = *unaff_RDI + (char)cVar14;
    bVar35 = (byte)UNK_143023c8d < (byte)cVar14;
    UNK_143023c8d = (code)((char)UNK_143023c8d - (char)cVar14);
    uVar8 = (int)unaff_RBX + 0x26e9c02 + (uint)bVar35;
code_r0x00014093a51e:
    uVar34 = (ulonglong)(int)puVar20[uVar8];
code_r0x00014093a522:
                    /* WARNING: Could not recover jumptable at 0x00014093a525. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE = (code *)(*(code *)(uVar34 + (longlong)puVar20))(puVar15);
    return UNRECOVERED_JUMPTABLE;
  case 0x92:
    *(undefined2 *)UNRECOVERED_JUMPTABLE_03 = in_ES;
    bVar35 = CARRY1((byte)*UNRECOVERED_JUMPTABLE_03,(byte)cVar3);
    *UNRECOVERED_JUMPTABLE_03 = (code)((char)*UNRECOVERED_JUMPTABLE_03 + (char)cVar3);
code_r0x00014093a4c8:
    return (code *)(ulonglong)!bVar35;
  case 0x95:
    out(*unaff_RSI,uVar18);
code_r0x00014093a4fc:
    puVar15 = (uint *)CONCAT71(uVar16,(char)cVar14 + (char)UNRECOVERED_JUMPTABLE_03[99]);
    UNRECOVERED_JUMPTABLE_03 = (code *)CONCAT71(uVar13,(char)cVar3 + 0x82);
code_r0x00014093a4fd:
                    /* WARNING: Could not recover jumptable at 0x00014093a504. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE =
         (code *)(*(code *)((longlong)(int)puVar20[(longlong)UNRECOVERED_JUMPTABLE_03] +
                           (longlong)puVar20))(puVar15);
    return UNRECOVERED_JUMPTABLE;
  case 0x96:
  case 0x98:
  case 0x99:
    UNRECOVERED_JUMPTABLE_03 = (code *)(ulonglong)(iVar7 + 0x26e9af7 + (uint)bVar35);
    goto code_r0x00014093a4fd;
  case 0x97:
    UNRECOVERED_JUMPTABLE_03 = (code *)(ulonglong)(iVar7 + 0x26e9a87 + (uint)bVar35);
code_r0x00014093a491:
    lVar12 = (longlong)(int)puVar20[(longlong)UNRECOVERED_JUMPTABLE_03];
code_r0x00014093a495:
    UNRECOVERED_JUMPTABLE = (code *)(lVar12 + (longlong)puVar20);
code_r0x00014093a498:
                    /* WARNING: Could not recover jumptable at 0x00014093a498. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE = (code *)(*UNRECOVERED_JUMPTABLE)(puVar15);
    return UNRECOVERED_JUMPTABLE;
  case 0x9a:
    goto code_r0x00014093a4e7;
  case 0x9b:
  case 0x9d:
  case 0x9e:
    goto code_r0x00014093a4e4;
  case 0x9c:
    piVar10 = (int *)((longlong)puVar15 * 5 + 0x50);
    *piVar10 = *piVar10 + 1;
    unaff_RBX = CONCAT71(uVar25,(bVar22 - cVar21) - bVar35);
    *(undefined1 (*) [16])(UNRECOVERED_JUMPTABLE_03 + 0x1c) = ZEXT416((uint)fVar39);
    break;
  case 0x9f:
    puVar20 = (uint *)0x43023e50;
    goto code_r0x00014093a4d9;
  case 0xa0:
  case 0xa2:
  case 0xa3:
    *UNRECOVERED_JUMPTABLE_03 = (code)((char)*UNRECOVERED_JUMPTABLE_03 + (char)cVar3);
code_r0x00014093a4d2:
    puVar20 = (uint *)&UNK_143023e50;
    goto code_r0x00014093a4d9;
  case 0xa1:
    puVar20 = (uint *)(ulonglong)(uint)(iVar7 >> 0x1f);
    out(*unaff_RSI,sVar17);
    puVar15 = (uint *)CONCAT71(uVar16,(char)cVar14 + (char)UNRECOVERED_JUMPTABLE_03[99]);
    UNRECOVERED_JUMPTABLE_03 = (code *)CONCAT71(uVar13,(char)cVar3 + 0x82);
    goto code_r0x00014093a4d9;
  case 0xa4:
code_r0x00014093a4bf:
    *(byte **)((longlong)register0x00000020 + -8) = unaff_RDI;
    *unaff_RDI = *unaff_RDI >> 6 | *unaff_RDI << 2;
    puVar11 = (uint *)((longlong)UNRECOVERED_JUMPTABLE_03 * 2 + -0x6cf10000);
    *puVar11 = *puVar11 | 0x818bc3c0;
code_r0x00014093a4ce:
    *(code **)UNRECOVERED_JUMPTABLE_03 =
         UNRECOVERED_JUMPTABLE_03 + *(longlong *)UNRECOVERED_JUMPTABLE_03;
code_r0x00014093a4d1:
    UNRECOVERED_JUMPTABLE = UNRECOVERED_JUMPTABLE_03 + -0x73;
    cVar14 = *UNRECOVERED_JUMPTABLE;
    *UNRECOVERED_JUMPTABLE = (code)((char)*UNRECOVERED_JUMPTABLE + (byte)puVar15);
    UNRECOVERED_JUMPTABLE_03 =
         (code *)(ulonglong)
                 ((int)UNRECOVERED_JUMPTABLE_03 + 0x26e9977 +
                 (uint)CARRY1((byte)cVar14,(byte)puVar15));
code_r0x00014093a4d9:
    UNRECOVERED_JUMPTABLE_03 =
         (code *)((longlong)(int)puVar20[(longlong)UNRECOVERED_JUMPTABLE_03] + (longlong)puVar20);
code_r0x00014093a4e0:
                    /* WARNING: Could not recover jumptable at 0x00014093a4e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE = (code *)(*UNRECOVERED_JUMPTABLE_03)(puVar15);
    return UNRECOVERED_JUMPTABLE;
  case 0xa5:
  case 0xa7:
  case 0xa8:
    goto code_r0x00014093a4bc;
  case 0xa6:
    halt_baddata();
  case 0xa9:
    *UNRECOVERED_JUMPTABLE_03 = (code)((char)*UNRECOVERED_JUMPTABLE_03 + (char)cVar3);
    UNRECOVERED_JUMPTABLE_03 = UNRECOVERED_JUMPTABLE_03 + -0x73;
    cVar3 = *UNRECOVERED_JUMPTABLE_03;
    *UNRECOVERED_JUMPTABLE_03 = (code)((char)*UNRECOVERED_JUMPTABLE_03 + (char)cVar14);
    UNRECOVERED_JUMPTABLE_03 =
         (code *)(ulonglong)(iVar7 + 0x26e9b7b + (uint)CARRY1((byte)cVar3,(byte)cVar14));
    goto code_r0x00014093a4b5;
  case 0xaa:
  case 0xac:
  case 0xad:
    UNRECOVERED_JUMPTABLE_03 = (code *)(ulonglong)puVar15[0x22];
code_r0x00014093a4ae:
    puVar20 = (uint *)&UNK_143024030;
code_r0x00014093a4b5:
    lVar12 = (longlong)(int)puVar20[(longlong)UNRECOVERED_JUMPTABLE_03];
code_r0x00014093a4b9:
    UNRECOVERED_JUMPTABLE_03 = (code *)(lVar12 + (longlong)puVar20);
code_r0x00014093a4bc:
                    /* WARNING: Could not recover jumptable at 0x00014093a4bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE = (code *)(*UNRECOVERED_JUMPTABLE_03)(puVar15);
    return UNRECOVERED_JUMPTABLE;
  case 0xab:
    *UNRECOVERED_JUMPTABLE_03 = (code)((char)*UNRECOVERED_JUMPTABLE_03 + (char)cVar3);
    break;
  case 0xae:
    puVar15 = (uint *)((longlong)puVar15 + -1);
    if (puVar15 != (uint *)0x0 && cVar24 != '\0') {
      *UNRECOVERED_JUMPTABLE_03 = cVar3;
      goto code_r0x00014093a4ac;
    }
    *(byte **)((longlong)register0x00000020 + -8) = unaff_RDI;
    *unaff_RDI = *unaff_RDI >> 6 | *unaff_RDI << 2;
    UNRECOVERED_JUMPTABLE_03 = (code *)(CONCAT62(uVar26,CONCAT11(cVar24,bVar22)) & 0xffffffff);
    *(uint *)(UNRECOVERED_JUMPTABLE_03 + 0x48000000) =
         *(uint *)(UNRECOVERED_JUMPTABLE_03 + 0x48000000) | 0x9b7b158d;
    out(*unaff_RSI,uVar18);
code_r0x00014093a4b4:
    puVar15 = (uint *)CONCAT71((int7)((ulonglong)puVar15 >> 8),
                               (char)puVar15 + (char)UNRECOVERED_JUMPTABLE_03[99]);
    lVar12 = CONCAT71((int7)((ulonglong)UNRECOVERED_JUMPTABLE_03 >> 8),
                      (char)UNRECOVERED_JUMPTABLE_03 + -0x7e);
    goto code_r0x00014093a4b9;
  case 0xaf:
  case 0xb1:
  case 0xb2:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0xb0:
code_r0x00014093a404:
    bVar35 = fVar39 < (float)puVar15[5];
  case 0xd2:
  case 0xd4:
  case 0xd5:
    UNRECOVERED_JUMPTABLE_03 = (code *)(ulonglong)!bVar35;
code_r0x00014093a40b:
    return UNRECOVERED_JUMPTABLE_03;
  case 0xb3:
    goto code_r0x00014093a483;
  case 0xb4:
  case 0xb6:
  case 0xb7:
code_r0x00014093a480:
    UNRECOVERED_JUMPTABLE_03 = (code *)(ulonglong)!bVar35;
code_r0x00014093a483:
    return UNRECOVERED_JUMPTABLE_03;
  case 0xb5:
    return (code *)CONCAT71(uVar13,!bVar35);
  case 0xb8:
    puVar15 = (uint *)CONCAT71(uVar16,(char)cVar14 + (char)UNRECOVERED_JUMPTABLE_03[99]);
code_r0x00014093a472:
    UNRECOVERED_JUMPTABLE_03 =
         (code *)CONCAT71((int7)((ulonglong)UNRECOVERED_JUMPTABLE_03 >> 8),
                          (char)UNRECOVERED_JUMPTABLE_03 + -0x7e);
code_r0x00014093a474:
                    /* WARNING: Could not recover jumptable at 0x00014093a477. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE = (code *)(*(UNRECOVERED_JUMPTABLE_03 + (longlong)puVar20))(puVar15);
    return UNRECOVERED_JUMPTABLE;
  case 0xba:
code_r0x00014093a268:
    puVar15 = (uint *)CONCAT71(uVar16,(char)cVar14 + (char)UNRECOVERED_JUMPTABLE_03[99]);
    uVar34 = CONCAT71((int7)((ulonglong)UNRECOVERED_JUMPTABLE_03 >> 8),
                      (char)UNRECOVERED_JUMPTABLE_03 + -0x7e);
    goto code_r0x00014093a26d;
  case 0xbd:
    return (code *)CONCAT71(uVar13,(float)puVar15[0xf] <= 0.0);
  case 0xbe:
  case 0xc0:
  case 0xc1:
code_r0x00014093a458:
    bVar6 = (byte)(unaff_RBX >> 8);
    bVar35 = (bool)(bVar6 & 1);
    cVar24 = (char)bVar6 >> 1;
    puVar15 = (uint *)((longlong)puVar15 + -1);
    if (puVar15 == (uint *)0x0 || cVar24 == '\0') {
      *(byte **)((longlong)register0x00000020 + -8) = unaff_RDI;
      *unaff_RDI = *unaff_RDI >> 6 | *unaff_RDI << 2;
      UNRECOVERED_JUMPTABLE_03 =
           (code *)(CONCAT62((int6)(unaff_RBX >> 0x10),CONCAT11(cVar24,(char)unaff_RBX)) &
                   0xffffffff);
      bVar35 = false;
      UNK_143023c8d = (code)((byte)UNK_143023c8d | (byte)puVar15);
    }
    goto code_r0x00014093a46b;
  case 0xbf:
    goto code_r0x00014093a212;
  case 0xc2:
    goto code_r0x00014093a447;
  case 0xc3:
  case 0xc5:
  case 0xc6:
code_r0x00014093a444:
    UNRECOVERED_JUMPTABLE_03 = (code *)(ulonglong)!bVar35;
code_r0x00014093a447:
    return UNRECOVERED_JUMPTABLE_03;
  case 0xc4:
  case 0xf0:
  case 0xf2:
  case 0xf3:
code_r0x00014093a390:
    out(*unaff_RSI,(short)puVar20);
    puVar15 = (uint *)CONCAT71(uVar16,(char)cVar14 + (char)UNRECOVERED_JUMPTABLE_03[99]);
    uVar34 = CONCAT71((int7)((ulonglong)UNRECOVERED_JUMPTABLE_03 >> 8),
                      (char)UNRECOVERED_JUMPTABLE_03 + -0x7e);
    goto code_r0x00014093a396;
  case 199:
    goto code_r0x00014093a433;
  case 200:
  case 0xca:
  case 0xcb:
code_r0x00014093a430:
    UNRECOVERED_JUMPTABLE_03 =
         (code *)CONCAT71((int7)((ulonglong)UNRECOVERED_JUMPTABLE_03 >> 8),
                          (char)UNRECOVERED_JUMPTABLE_03 + -99 + bVar35);
    out(*unaff_RSI,(short)puVar20);
code_r0x00014093a433:
    puVar15 = (uint *)CONCAT71(uVar16,(char)cVar14 + (char)UNRECOVERED_JUMPTABLE_03[99]);
    goto code_r0x00014093a436;
  case 0xc9:
    puVar15 = (uint *)CONCAT71(uVar16,(char)cVar14 + (char)UNRECOVERED_JUMPTABLE_03[99]);
    lVar12 = CONCAT71(uVar13,(char)cVar3 + 0x82);
    goto code_r0x00014093a291;
  case 0xcc:
    return (code *)CONCAT71(uVar13,(float)puVar15[0x1f] <= 0.0);
  case 0xcd:
  case 0xcf:
  case 0xd0:
    bVar38 = (bool)(bVar23 & 1);
    unaff_RBX = CONCAT62(uVar26,CONCAT11(cVar24,bVar22));
    bVar37 = cVar24 < '\0';
    puVar15 = (uint *)((longlong)puVar15 + -1);
    if (puVar15 != (uint *)0x0 && cVar24 != '\0') goto code_r0x00014093a42f;
    *(byte **)((longlong)register0x00000020 + -8) = unaff_RDI;
    *unaff_RDI = *unaff_RDI >> 6 | *unaff_RDI << 2;
    bVar38 = false;
code_r0x00014093a424:
    if (bVar38 == bVar37) {
      UNRECOVERED_JUMPTABLE = (code *)(unaff_RBX & 0xffffffff);
      unaff_RBX = (ulonglong)UNRECOVERED_JUMPTABLE_03 & 0xffffffff;
code_r0x00014093a428:
      bVar35 = ((byte)unaff_RBX >> 5 & 1) != 0;
      bVar6 = (char)UNK_143023c8d - (char)SUB81(puVar15,0);
      bVar38 = (byte)UNK_143023c8d < (byte)SUB81(puVar15,0) || bVar6 < bVar35;
      UNK_143023c8d = (code)(bVar6 - bVar35);
      UNRECOVERED_JUMPTABLE_03 = UNRECOVERED_JUMPTABLE;
    }
    else {
code_r0x00014093a436:
      bVar38 = 0x7d < (byte)UNRECOVERED_JUMPTABLE_03;
      UNRECOVERED_JUMPTABLE_03 =
           (code *)CONCAT71((int7)((ulonglong)UNRECOVERED_JUMPTABLE_03 >> 8),
                            (byte)UNRECOVERED_JUMPTABLE_03 + 0x82);
    }
code_r0x00014093a42f:
                    /* WARNING: Could not recover jumptable at 0x00014093a43b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE =
         (code *)(*(code *)((longlong)
                            (int)puVar20[(int)UNRECOVERED_JUMPTABLE_03 + 0x26e9d14 + (uint)bVar38] +
                           (longlong)puVar20))(puVar15);
    return UNRECOVERED_JUMPTABLE;
  case 0xd1:
    goto code_r0x00014093a40b;
  case 0xd3:
    goto code_r0x000140939f76;
  case 0xd6:
    goto code_r0x00014093a3f7;
  case 0xd7:
  case 0xd9:
  case 0xda:
    out(*unaff_RSI,uVar18);
code_r0x00014093a3f7:
    puVar15 = (uint *)CONCAT71(uVar16,(char)cVar14 + (char)UNRECOVERED_JUMPTABLE_03[99]);
    lVar12 = CONCAT71(uVar13,(char)cVar3 + 0x82);
    goto code_r0x00014093a3fc;
  case 0xd8:
    *UNRECOVERED_JUMPTABLE_03 = (code)((char)*UNRECOVERED_JUMPTABLE_03 + (char)cVar3);
    unaff_RBX = CONCAT71(uVar25,bVar22 + cVar21);
    *(undefined1 (*) [16])(UNRECOVERED_JUMPTABLE_03 + 0x94) = ZEXT416((uint)fVar39);
    break;
  case 0xdb:
    goto code_r0x00014093a3e3;
  case 0xdc:
  case 0xde:
  case 0xdf:
    fVar39 = 0.0;
code_r0x00014093a3e3:
    return (code *)(ulonglong)((float)puVar15[0x31] <= fVar39);
  case 0xdd:
    *(undefined1 (*) [16])(UNRECOVERED_JUMPTABLE_03 + 0x10c) = ZEXT416((uint)fVar39);
    goto code_r0x000140939f76;
  case 0xe0:
    goto code_r0x00014093a3cf;
  case 0xe1:
  case 0xe3:
  case 0xe4:
code_r0x00014093a3cc:
    *UNRECOVERED_JUMPTABLE_03 = *UNRECOVERED_JUMPTABLE_03;
code_r0x00014093a3cf:
    UNRECOVERED_JUMPTABLE_03 = UNRECOVERED_JUMPTABLE_03 + -0x73;
    cVar14 = *UNRECOVERED_JUMPTABLE_03;
    *UNRECOVERED_JUMPTABLE_03 = (code)((char)*UNRECOVERED_JUMPTABLE_03 + (byte)puVar15);
    UNRECOVERED_JUMPTABLE_03 =
         (code *)(ulonglong)(iVar7 + 0x26e9bcd + (uint)CARRY1((byte)cVar14,(byte)puVar15));
    goto code_r0x00014093a3cb;
  case 0xe2:
    goto code_r0x00014093a1e9;
  case 0xe5:
    puVar15 = (uint *)((longlong)puVar15 + -1);
    if (puVar15 != (uint *)0x0 && !bVar36) goto code_r0x00014093a3cc;
    *(byte **)((longlong)register0x00000020 + -8) = unaff_RDI;
code_r0x00014093a3be:
    *unaff_RDI = *unaff_RDI >> 6 | *unaff_RDI << 2;
    UNRECOVERED_JUMPTABLE_03 = (code *)(unaff_RBX & 0xffffffff);
code_r0x00014093a3c8:
code_r0x00014093a3cb:
                    /* WARNING: Could not recover jumptable at 0x00014093a3de. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE =
         (code *)(*(code *)((longlong)
                            *(int *)((ulonglong)((int)UNRECOVERED_JUMPTABLE_03 + 0x48000000) * 4 +
                                    0x43023fa4) + 0x43023fa4))();
    return UNRECOVERED_JUMPTABLE;
  case 0xe6:
  case 0xe8:
  case 0xe9:
    UNRECOVERED_JUMPTABLE_03 = (code *)(ulonglong)(iVar7 + uVar19);
    goto code_r0x00014093a3b7;
  case 0xe7:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0xea:
    goto code_r0x00014093a3a7;
  case 0xeb:
  case 0xed:
  case 0xee:
code_r0x00014093a3a4:
code_r0x00014093a3a7:
    uVar8 = (uint)UNRECOVERED_JUMPTABLE_03 | 0x48000000;
    puVar20 = (uint *)0x43023f90;
code_r0x00014093a3b3:
    UNRECOVERED_JUMPTABLE_03 = (code *)(longlong)(int)puVar20[uVar8];
code_r0x00014093a3b7:
                    /* WARNING: Could not recover jumptable at 0x00014093a3ba. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE = (code *)(*(UNRECOVERED_JUMPTABLE_03 + (longlong)puVar20))();
    return UNRECOVERED_JUMPTABLE;
  case 0xec:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0xef:
    uVar34 = (ulonglong)puVar20[(longlong)UNRECOVERED_JUMPTABLE_03];
    goto code_r0x00014093a396;
  case 0xf1:
    *(uint *)UNRECOVERED_JUMPTABLE_03 = *(uint *)UNRECOVERED_JUMPTABLE_03 + iVar7;
    *unaff_RDI = *unaff_RDI + (char)cVar14;
    UNRECOVERED_JUMPTABLE = (code *)(unaff_RBX & 0xffffffff);
    unaff_RBX = (ulonglong)UNRECOVERED_JUMPTABLE_03 & 0xffffffff;
    UNRECOVERED_JUMPTABLE_03 = UNRECOVERED_JUMPTABLE;
    goto code_r0x00014093a212;
  case 0xf4:
code_r0x00014093a37f:
    *unaff_RDI = *unaff_RDI >> 6 | *unaff_RDI << 2;
code_r0x00014093a382:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0xf5:
  case 0xf7:
  case 0xf8:
code_r0x00014093a37c:
    puVar15 = (uint *)((longlong)puVar15 + -1);
    if (puVar15 == (uint *)0x0 || bVar36) {
      *(byte **)((longlong)register0x00000020 + -8) = unaff_RDI;
      goto code_r0x00014093a37f;
    }
    UNRECOVERED_JUMPTABLE_03 =
         (code *)(ulonglong)((int)UNRECOVERED_JUMPTABLE_03 + 0x26e9d3e + (uint)bVar35);
code_r0x00014093a392:
    uVar34 = (ulonglong)(int)puVar20[(longlong)UNRECOVERED_JUMPTABLE_03];
code_r0x00014093a396:
                    /* WARNING: Could not recover jumptable at 0x00014093a399. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE = (code *)(*(code *)(uVar34 + (longlong)puVar20))(puVar15);
    return UNRECOVERED_JUMPTABLE;
  case 0xf6:
    *UNRECOVERED_JUMPTABLE_03 = (code)((char)*UNRECOVERED_JUMPTABLE_03 + (char)cVar3);
    unaff_RBX = CONCAT71(uVar25,bVar22 + cVar21);
    *(undefined1 (*) [16])(UNRECOVERED_JUMPTABLE_03 + 0xcc) = ZEXT416((uint)fVar39);
    break;
  case 0xf9:
    goto code_r0x00014093a36b;
  case 0xfa:
  case 0xfc:
  case 0xfd:
code_r0x00014093a368:
code_r0x00014093a36b:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0xfb:
    unaff_RBX = (ulonglong)CONCAT11(cVar24,bVar22);
    puVar15 = (uint *)((longlong)puVar15 + -1);
    if (puVar15 != (uint *)0x0 && cVar24 != '\0') {
      *(byte *)puVar15 = (*(char *)puVar15 - (char)cVar3) - (bVar23 & 1);
      *UNRECOVERED_JUMPTABLE_03 = (code)((char)*UNRECOVERED_JUMPTABLE_03 + (char)cVar3);
      puVar20 = (uint *)&UNK_143023ec8;
      goto code_r0x00014093a221;
    }
    *(byte **)((longlong)register0x00000020 + -8) = unaff_RDI;
code_r0x00014093a208:
    *unaff_RDI = *unaff_RDI >> 6 | *unaff_RDI << 2;
    *(int *)((longlong)puVar15 + (longlong)UNRECOVERED_JUMPTABLE_03) =
         *(int *)((longlong)puVar15 + (longlong)UNRECOVERED_JUMPTABLE_03) + 0x6cf10000;
code_r0x00014093a212:
    *(uint *)UNRECOVERED_JUMPTABLE_03 =
         (*(uint *)UNRECOVERED_JUMPTABLE_03 + 0xb7ffffff) - (uint)(((byte)unaff_RBX >> 5 & 1) != 0);
    puVar20 = (uint *)0x43023ec8;
code_r0x00014093a221:
                    /* WARNING: Could not recover jumptable at 0x00014093a228. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE =
         (code *)(*(code *)((longlong)(int)puVar20[(longlong)UNRECOVERED_JUMPTABLE_03] +
                           (longlong)puVar20))(puVar15);
    return UNRECOVERED_JUMPTABLE;
  case 0xfe:
    goto code_r0x00014093a357;
  case 0xff:
    UNRECOVERED_JUMPTABLE_03 = (code *)(ulonglong)puVar20[(longlong)UNRECOVERED_JUMPTABLE_03];
code_r0x00014093a357:
                    /* WARNING: Could not recover jumptable at 0x00014093a35a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE = (code *)(*(UNRECOVERED_JUMPTABLE_03 + (longlong)puVar20))();
    return UNRECOVERED_JUMPTABLE;
  }
code_r0x000140939e30:
  puVar11 = puVar20 + 2;
  puVar20 = puVar20 + 3;
  if (puVar11 == puVar15) {
    return UNRECOVERED_JUMPTABLE_03;
  }
  goto LAB_140939e45;
code_r0x00014093a493:
  lVar12 = CONCAT71(uVar13,bVar4 + 0x82);
  goto code_r0x00014093a495;
code_r0x00014093a50b:
  puVar11 = (uint *)((longlong)UNRECOVERED_JUMPTABLE_03 * 2 + -0x6cf10000);
  *puVar11 = *puVar11 & 0x418bc3c0;
  UNRECOVERED_JUMPTABLE_03[-0x73] = (code)((char)UNRECOVERED_JUMPTABLE_03[-0x73] - (char)cVar14);
  goto code_r0x00014093a50f;
code_r0x00014093a178:
  *UNRECOVERED_JUMPTABLE_03 =
       (code)((char)*UNRECOVERED_JUMPTABLE_03 + (char)UNRECOVERED_JUMPTABLE_03);
  goto code_r0x00014093a172;
code_r0x00014093a5e6:
  puVar15 = (uint *)((longlong)puVar15 + -1);
  if (puVar15 == (uint *)0x0 || bVar36) {
code_r0x00014093a5e8:
    *(byte **)((longlong)register0x00000020 + -8) = unaff_RDI;
    *unaff_RDI = *unaff_RDI >> 6 | *unaff_RDI << 2;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  UNRECOVERED_JUMPTABLE_03 = UNRECOVERED_JUMPTABLE_03 + -0x73;
  cVar14 = *UNRECOVERED_JUMPTABLE_03;
  *UNRECOVERED_JUMPTABLE_03 = (code)((char)*UNRECOVERED_JUMPTABLE_03 + (byte)puVar15);
  UNRECOVERED_JUMPTABLE_03 =
       (code *)(ulonglong)(iVar7 + 0x26e992d + (uint)CARRY1((byte)cVar14,(byte)puVar15));
code_r0x00014093a5ff:
  lVar12 = (longlong)(int)puVar20[(longlong)UNRECOVERED_JUMPTABLE_03];
  goto code_r0x00014093a603;
code_r0x00014093a5c2:
  lVar12 = CONCAT71(uVar13,bVar4 + 0x82);
  goto code_r0x00014093a5c4;
code_r0x00014093a4f6:
  puVar20 = (uint *)&UNK_143023ff4;
  goto code_r0x00014093a4fd;
code_r0x00014093a117:
  UNRECOVERED_JUMPTABLE_03 = (code *)(ulonglong)(iVar7 + 0x44fffffd + (uint)bVar35);
  *(uint *)(UNRECOVERED_JUMPTABLE_03 + 0xb0) = uVar19;
code_r0x00014093a11b:
  *(uint *)(UNRECOVERED_JUMPTABLE_03 + 0xb0) = (uint)puVar33;
  *(float *)(UNRECOVERED_JUMPTABLE_03 + 0xb4) = fVar39;
  goto code_r0x000140939e30;
code_r0x00014093a597:
  UNRECOVERED_JUMPTABLE = UNRECOVERED_JUMPTABLE_03 + -0x73;
  cVar14 = *UNRECOVERED_JUMPTABLE;
  *UNRECOVERED_JUMPTABLE = (code)((char)*UNRECOVERED_JUMPTABLE + (byte)puVar15);
  UNRECOVERED_JUMPTABLE_03 =
       (code *)(ulonglong)
               ((int)UNRECOVERED_JUMPTABLE_03 + 0x26e9a7d + (uint)CARRY1((byte)cVar14,(byte)puVar15)
               );
  goto code_r0x00014093a59f;
code_r0x00014093a46b:
  UNRECOVERED_JUMPTABLE_03 =
       (code *)(longlong)(int)puVar20[(int)UNRECOVERED_JUMPTABLE_03 + 0x26e9d00 + (uint)bVar35];
  goto code_r0x00014093a474;
code_r0x000140939f76:
  goto code_r0x000140939e30;
code_r0x00014093a0ab:
  *(float *)(UNRECOVERED_JUMPTABLE_03 + 0x6c) = fVar39;
  unaff_RDI = pbVar31;
  goto code_r0x000140939e30;
code_r0x000140939ff3:
  *(float *)(UNRECOVERED_JUMPTABLE_03 + 0x14) = fVar39;
  goto code_r0x000140939e30;
code_r0x00014093a4e4:
  *unaff_RDI = *unaff_RDI >> 6 | *unaff_RDI << 2;
code_r0x00014093a4e7:
  *(uint *)((longlong)puVar15 + (longlong)UNRECOVERED_JUMPTABLE_03) =
       *(uint *)((longlong)puVar15 + (longlong)UNRECOVERED_JUMPTABLE_03) | 0xc0930f00;
  return UNRECOVERED_JUMPTABLE_03;
code_r0x00014093a3ec:
  bVar35 = ((byte)unaff_RBX >> 5 & 1) != 0;
  bVar6 = (char)UNK_143023c8d + (byte)puVar15;
  bVar38 = CARRY1((byte)UNK_143023c8d,(byte)puVar15) || CARRY1(bVar6,bVar35);
  UNK_143023c8d = (code)(bVar6 + bVar35);
  UNRECOVERED_JUMPTABLE_03 = UNRECOVERED_JUMPTABLE;
code_r0x00014093a3f3:
  lVar12 = (longlong)(int)puVar20[(int)UNRECOVERED_JUMPTABLE_03 + 0x26e9d64 + (uint)bVar38];
code_r0x00014093a3fc:
                    /* WARNING: Could not recover jumptable at 0x00014093a3ff. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  UNRECOVERED_JUMPTABLE = (code *)(*(code *)(lVar12 + (longlong)puVar20))(puVar15);
  return UNRECOVERED_JUMPTABLE;
code_r0x00014093a410:
  puVar20 = (uint *)0x43024058;
code_r0x00014093a416:
  UNRECOVERED_JUMPTABLE =
       (code *)((longlong)(int)puVar20[(longlong)UNRECOVERED_JUMPTABLE_03] + (longlong)puVar20);
code_r0x00014093a41d:
                    /* WARNING: Could not recover jumptable at 0x00014093a41d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  UNRECOVERED_JUMPTABLE = (code *)(*UNRECOVERED_JUMPTABLE)();
  return UNRECOVERED_JUMPTABLE;
}

