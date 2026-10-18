// VA 0x1417c1540, PDB extent 767 bytes
// country_core::resources::walls::decorator::_::impl$0::deserialize::impl$2::visit_enum<serde_json::value::de::EnumDeserializer>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/walls/decorator.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x000143337708) overlaps instruction at (ram,0x000143337707)
    */
/* WARNING: Removing unreachable block (ram,0x0001417c1b5d) */
/* WARNING: Removing unreachable block (ram,0x0001417c35a7) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::resources::walls::decorator::_::impl$0::deserialize::impl$2::visit_enum<serde_json::value::de::EnumDeserializer>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/walls/decorator.rs
   Extent: 767 */

code * pdb_1417c1540(code *param_1,undefined8 param_2,undefined8 param_3,code *param_4)

{
  char *pcVar1;
  code cVar2;
  longlong lVar3;
  byte *pbVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  char cVar7;
  byte bVar8;
  uint uVar9;
  longlong lVar10;
  undefined8 uVar11;
  undefined7 uVar14;
  code *extraout_RAX;
  code *extraout_RAX_00;
  code *extraout_RAX_01;
  code *pcVar12;
  code *pcVar13;
  code *pcVar15;
  ulonglong uVar16;
  undefined2 uVar17;
  int iVar18;
  ulonglong uVar19;
  code *pcVar20;
  undefined *puVar21;
  longlong unaff_RBX;
  undefined8 *puVar22;
  undefined1 *puVar23;
  undefined1 *puVar24;
  undefined1 *puVar25;
  undefined1 *puVar26;
  undefined1 *puVar27;
  undefined1 *puVar28;
  undefined1 *puVar29;
  undefined8 *puVar30;
  undefined1 *puVar31;
  undefined1 *puVar32;
  undefined1 *puVar33;
  undefined1 *puVar34;
  undefined1 *puVar35;
  undefined8 *unaff_RBP;
  code *unaff_RDI;
  code *pcVar36;
  ulonglong uVar37;
  undefined *in_R10;
  ulonglong in_R11;
  undefined8 unaff_R14;
  undefined2 in_FS;
  bool bVar38;
  bool bVar39;
  undefined1 auStack_f8 [40];
  code *pcStack_d0;
  undefined1 auStack_b8 [16];
  code *pcStack_a8;
  undefined8 uStack_98;
  undefined4 *puStack_90;
  undefined *puStack_88;
  code *UNRECOVERED_JUMPTABLE;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 uStack_68;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 uStack_18;
  
  puVar22 = (undefined8 *)auStack_b8;
  puVar23 = auStack_b8;
  puVar24 = auStack_b8;
  puVar26 = auStack_b8;
  puVar25 = auStack_b8;
  puVar32 = auStack_b8;
  pdb_141be78f0(&puStack_88);
  if ((byte)puStack_88 == 4) {
    *(code **)param_1 = UNRECOVERED_JUMPTABLE;
    param_1[0x22] = (code)0x5;
    return param_1;
  }
  uStack_18 = uStack_68;
  uStack_28 = uStack_78;
  uStack_24 = uStack_74;
  uStack_20 = uStack_70;
  uStack_1c = uStack_6c;
  bVar8 = (byte)UNRECOVERED_JUMPTABLE;
  pcVar13 = (code *)((ulonglong)UNRECOVERED_JUMPTABLE & 0xff);
  pcVar36 = (code *)&UNK_143337708;
  uVar19 = (ulonglong)*(int *)(&UNK_143337708 + (ulonglong)(uint)(byte)puStack_88 * 4);
  bVar38 = 0xfffffffebccc88f7 < uVar19;
  pcVar20 = (code *)(&UNK_143337708 + uVar19);
  bVar39 = pcVar20 != (code *)0x0;
  uVar14 = (undefined7)((ulonglong)UNRECOVERED_JUMPTABLE >> 8);
  uVar9 = (uint)pcVar13;
  uVar17 = SUB82(pcVar20,0);
  pcVar12 = UNRECOVERED_JUMPTABLE;
  pcVar15 = pcVar13;
  puVar29 = auStack_b8;
  puVar27 = auStack_b8;
  puVar34 = auStack_b8;
  puVar33 = auStack_b8;
  puVar31 = auStack_b8;
  puVar28 = auStack_b8;
  puVar35 = auStack_b8;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch((byte)puStack_88) {
  case 5:
    *(ulonglong *)param_1 = 7;
    return param_1;
  case 6:
    *(ulonglong *)param_1 = 4;
    return param_1;
  case 7:
    *(ulonglong *)param_1 = 2;
    return param_1;
  case 8:
    *(ulonglong *)param_1 = 0;
    return param_1;
  case 9:
    *(ulonglong *)param_1 = 1;
    return param_1;
  case 10:
    *(ulonglong *)param_1 = 5;
    return param_1;
  case 0xb:
    *(ulonglong *)param_1 = 3;
    return param_1;
  case 0xc:
    return UNRECOVERED_JUMPTABLE;
  case 0xd:
  case 0x10:
  case 0x12:
  case 0x13:
    if (bVar39) {
      UNRECOVERED_JUMPTABLE = (code *)CONCAT71(uVar14,bVar8 + 0x41);
      uVar9 = uVar9 ^ 0x7372;
code_r0x0001417c1b6f:
      puVar23 = auStack_b8;
      if ((int)param_4 == 0 && uVar9 == 0) {
        UNRECOVERED_JUMPTABLE[1] = (code)0x7;
        goto code_r0x0001417c1b84;
      }
      goto LAB_1417c1b8e;
    }
    puVar27 = auStack_f8;
    param_1 = pcVar13;
    break;
  case 0xe:
    out(*param_1,uVar17);
    out(*(undefined4 *)(param_1 + 1),uVar17);
    if (!bVar38 && bVar39) {
code_r0x0001417c1b7a:
      UNRECOVERED_JUMPTABLE[1] = (code)0x3;
      goto code_r0x0001417c1b84;
    }
    bVar38 = uVar9 == 0;
code_r0x0001417c1b33:
    puVar23 = auStack_b8;
    if (bVar38) {
      UNRECOVERED_JUMPTABLE[1] = (code)0x1;
      goto code_r0x0001417c1b84;
    }
    goto LAB_1417c1b8e;
  case 0xf:
    *UNRECOVERED_JUMPTABLE = (code)((char)*UNRECOVERED_JUMPTABLE + bVar8);
    UNRECOVERED_JUMPTABLE = UNRECOVERED_JUMPTABLE + -0x47;
    *UNRECOVERED_JUMPTABLE = (code)((char)*UNRECOVERED_JUMPTABLE + bVar8);
    out(*(uint *)param_1,uVar17);
    if (*UNRECOVERED_JUMPTABLE == (code)0x0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x11:
    UNRECOVERED_JUMPTABLE = UNRECOVERED_JUMPTABLE + *(longlong *)(pcVar13 + 9);
    puVar22 = unaff_RBP + 1;
    goto code_r0x0001417c1afc;
  case 0x14:
    UNRECOVERED_JUMPTABLE = (code *)CONCAT71(uVar14,bVar8 | (byte)pcVar13[-0x47]);
    if ((bVar8 | (byte)pcVar13[-0x47]) == 0) {
      bVar38 = uVar9 == 0;
code_r0x0001417c1b54:
      puVar23 = auStack_b8;
      if (bVar38) {
        UNRECOVERED_JUMPTABLE[1] = (code)0x2;
        goto code_r0x0001417c1b84;
      }
      goto LAB_1417c1b8e;
    }
code_r0x0001417c1aef:
    if ((int)param_4 == *(int *)(&UNK_14333770b + uVar19) && uVar9 == 0) {
      UNRECOVERED_JUMPTABLE[1] = (code)0x4;
      goto code_r0x0001417c1b84;
    }
code_r0x0001417c1afc:
    puVar23 = (undefined1 *)puVar22;
    if (*(int *)(&UNK_14333770b + uVar19) == 0x72657474 && *(uint *)pcVar20 == 0x74756c43) {
      UNRECOVERED_JUMPTABLE[1] = (code)0x6;
code_r0x0001417c1b84:
      *UNRECOVERED_JUMPTABLE = (code)0x0;
      return UNRECOVERED_JUMPTABLE;
    }
    goto LAB_1417c1b8e;
  case 0x15:
    puVar23 = auStack_b8;
    switch(pcVar13) {
    case (code *)0x0:
      puVar23 = auStack_b8;
      if (*(uint *)pcVar20 == 0x67616c46) {
        UNRECOVERED_JUMPTABLE[1] = (code)0x5;
        goto code_r0x0001417c1b84;
      }
      break;
    case (code *)0x2:
      uVar9 = *(uint *)pcVar20 ^ 0x69617453;
      param_4 = (code *)(ulonglong)(*(ushort *)(&UNK_14333770c + uVar19) ^ 0x7372);
      goto code_r0x0001417c1b6f;
    case (code *)0x3:
      if (*(int *)(&UNK_14333770b + uVar19) != 0x79656e6d || *(uint *)pcVar20 != 0x6d696843) {
        uVar9 = *(uint *)pcVar20 ^ 0x746e614c;
        param_4 = (code *)0x6e726574;
        goto code_r0x0001417c1aef;
      }
      goto code_r0x0001417c1b7a;
    case (code *)0x5:
      bVar38 = (&UNK_143337710)[uVar19] == 't' && *(ulonglong *)pcVar20 == 0x696c53776f727241;
      goto code_r0x0001417c1b54;
    case (code *)0x8:
      bVar38 = *(int *)(&UNK_143337710 + uVar19) == 0x776f646e &&
               *(ulonglong *)pcVar20 == 0x6957636968746f47;
      goto code_r0x0001417c1b33;
    case (code *)0x9:
      puVar23 = auStack_b8;
      if (*(longlong *)(&UNK_14333770d + uVar19) == 0x776f646e69576567 &&
          *(ulonglong *)pcVar20 == 0x5765676174746f43) {
        UNRECOVERED_JUMPTABLE[1] = (code)0x0;
        goto code_r0x0001417c1b84;
      }
    }
LAB_1417c1b8e:
    in_R10 = &UNK_143336b38;
    pcVar12 = UNRECOVERED_JUMPTABLE;
code_r0x0001417c1b9b:
    *(undefined8 *)(puVar23 + -8) = 0x1417c1bac;
    pcVar13 = (code *)pdb_142d8f140(pcVar20,&UNK_143337708,in_R10);
    param_1 = pcVar12;
code_r0x0001417c1baa:
    *(int *)(pcVar12 + -0x77) = *(int *)(pcVar12 + -0x77) + (int)pcVar13;
    pcVar20 = pcVar12 + -0x77;
    *(uint *)pcVar20 = *(uint *)pcVar20 >> 0x10 | *(uint *)pcVar20 << 0x10;
    *(code **)(param_1 + 8) = pcVar13;
    *pcVar12 = (code)0x1;
    return pcVar12;
  case 0x16:
    *(int *)(pcVar13 + -0x47) = *(int *)(pcVar13 + -0x47) + (int)UNRECOVERED_JUMPTABLE;
    *UNRECOVERED_JUMPTABLE = (code)((byte)*UNRECOVERED_JUMPTABLE | bVar8);
    *UNRECOVERED_JUMPTABLE = (code)((char)*UNRECOVERED_JUMPTABLE + bVar8);
    goto code_r0x0001417c1b9b;
  case 0x17:
    puVar27 = auStack_b8;
    break;
  case 0x18:
    goto code_r0x0001417c1baa;
  case 0x19:
    break;
  case 0x1a:
    uVar19 = pdb_142db90e0();
    *(ulonglong *)(param_1 + 8) = uVar19;
    *(uint *)param_1 = 2;
    return param_1;
  case 0x1b:
    *UNRECOVERED_JUMPTABLE = (code)((char)*UNRECOVERED_JUMPTABLE + bVar8);
    puVar24 = auStack_b8;
    if (((((&UNK_14333770a)[uVar19] != 'e') ||
         (puVar24 = auStack_b8, (&UNK_14333770b)[uVar19] != 'm')) ||
        (puVar24 = auStack_b8, (&UNK_14333770c)[uVar19] != 'a')) ||
       (puVar24 = auStack_b8, (&UNK_14333770d)[uVar19] != 'd')) goto LAB_1417c1f58;
    goto code_r0x0001417c1eac;
  case 0x1c:
  case 0x1d:
  case 0x1e:
  case 0x1f:
  case 0x20:
  case 0x21:
  case 0x22:
  case 0x23:
  case 0x25:
    if ((POPCOUNT((ulonglong)pcVar20 & 0xff) & 1U) == 0) {
      puVar27 = auStack_b8;
      puVar24 = auStack_b8;
      if (bVar39) goto LAB_1417c1f58;
      goto code_r0x0001417c1ef5;
    }
    puVar27 = auStack_b8;
    puVar24 = auStack_b8;
    if (!bVar39) goto code_r0x0001417c1ef5;
    goto LAB_1417c1f58;
  case 0x24:
    uVar19 = pdb_142deedc0(pcVar13,UNRECOVERED_JUMPTABLE);
    *(ulonglong *)(param_1 + 8) = uVar19;
    *(uint *)param_1 = 2;
    return param_1;
  case 0x26:
    uVar9 = *(uint *)(param_1 + -0x80000000) & (uint)param_1;
    if ((POPCOUNT(uVar9 & 0xff) & 1U) == 0) {
      *UNRECOVERED_JUMPTABLE = (code)((char)*UNRECOVERED_JUMPTABLE + bVar8);
    }
    else {
      puVar24 = auStack_b8;
      if (uVar9 != 0) goto LAB_1417c1f58;
    }
code_r0x0001417c1eac:
    puVar24 = auStack_b8;
    if ((((&UNK_14333770e)[uVar19] == 'e') &&
        (puVar24 = auStack_b8, (&UNK_14333770f)[uVar19] == 'S')) &&
       ((puVar24 = auStack_b8, (&UNK_143337710)[uVar19] == 'h' &&
        ((puVar24 = auStack_b8, (&UNK_143337711)[uVar19] == 'a' &&
         (puVar27 = auStack_b8, puVar24 = auStack_b8, (&UNK_143337712)[uVar19] == 'p'))))))
    goto code_r0x0001417c1eda;
    goto LAB_1417c1f58;
  case 0x27:
    goto code_r0x0001417c1f70;
  case 0x28:
    goto code_r0x0001417c1f90;
  case 0x29:
  case 0x2a:
  case 0x2b:
  case 0x2c:
  case 0x2d:
  case 0x2e:
  case 0x2f:
  case 0x30:
  case 0x32:
    goto code_r0x0001417c1fdd;
  case 0x31:
    *(uint *)(unaff_RBP + -1) = uVar9;
    puVar25 = auStack_b8;
    goto code_r0x0001417c1f7a;
  case 0x33:
    UNRECOVERED_JUMPTABLE[-0x77] = (code)((char)UNRECOVERED_JUMPTABLE[-0x77] + bVar8);
    UNRECOVERED_JUMPTABLE = (code *)((ulonglong)UNRECOVERED_JUMPTABLE & 0xffffffffffffff10);
    puVar27 = auStack_f8;
    unaff_RBP = (undefined8 *)(&UNK_143337748 + uVar19);
    pcVar20 = *(code **)(&UNK_143337728 + uVar19);
    bVar38 = (longlong)pcVar20 < 0;
    bVar39 = pcVar20 == (code *)0x0;
    pcStack_d0 = param_1;
    goto code_r0x0001417c1fc6;
  case 0x34:
  case 0x35:
  case 0x36:
  case 0x3a:
    unaff_RBP[-1] = 0xfffffffffffffffe;
    pcVar15 = *(code **)pcVar13;
    puVar27 = auStack_b8;
    puVar26 = auStack_b8;
    pcVar36 = pcVar13;
    if (pcVar15 != (code *)0x8000000000000001) goto code_r0x0001417c2d37;
    goto code_r0x0001417c2cf7;
  case 0x37:
    pcVar13 = (code *)swi(3);
    pcVar13 = (code *)(*pcVar13)();
    return pcVar13;
  case 0x38:
    if ((POPCOUNT(bVar8) & 1U) == 0) {
      pcVar13 = (code *)swi(3);
      pcVar13 = (code *)(*pcVar13)();
      return pcVar13;
    }
    pcVar13 = (code *)swi(3);
    pcVar13 = (code *)(*pcVar13)();
    return pcVar13;
  case 0x39:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  default:
    goto code_r0x0001417c2d92;
  case 0x47:
  case 0x49:
    UNRECOVERED_JUMPTABLE[-0x75] = (code)((char)UNRECOVERED_JUMPTABLE[-0x75] + bVar8);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x4c:
    puVar29 = auStack_b8;
    pcStack_a8 = pcVar20;
  case 0x4e:
    goto code_r0x0001417c2e15;
  case 0x4f:
    goto code_r0x0001409a45e0;
  case 0x50:
    puVar30 = (undefined8 *)&stack0xffffffffffffff40;
    cVar7 = '\x18';
    do {
      unaff_RBP = unaff_RBP + -1;
      puVar30 = puVar30 + -1;
      *puVar30 = *unaff_RBP;
      cVar7 = cVar7 + -1;
    } while ('\0' < cVar7);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x51:
    *(uint *)(&UNK_143337718 + uVar19) = (uint)param_1;
    puVar27 = auStack_b8;
    goto code_r0x0001417c3227;
  case 0x52:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x53:
    UNRECOVERED_JUMPTABLE[-0x75] = (code)((char)UNRECOVERED_JUMPTABLE[-0x75] + bVar8 + bVar38);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x54:
    *(uint *)unaff_RDI = *(uint *)param_1;
    puVar27 = auStack_b8;
    goto LAB_1417c327e;
  case 0x55:
    goto code_r0x0001417c3337;
  case 0x56:
                    /* WARNING: Could not recover jumptable at 0x0001417c32ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pcVar13 = (code *)(*UNRECOVERED_JUMPTABLE)();
    return pcVar13;
  case 0x57:
    puVar27 = auStack_b8;
    if ((int)unaff_RBX + (int)unaff_RBP == 0) goto code_r0x0001417c3353;
    goto code_r0x0001417c3309;
  case 0x58:
    if (1 < uVar9) {
      param_4 = (code *)&UNK_143337708;
    }
                    /* WARNING: Could not recover jumptable at 0x0001417c32eb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pcVar13 = (code *)(*(code *)(&UNK_143337848 + *(int *)(&UNK_143337848 + (longlong)param_4 * 4)))
                                (pcVar20,&UNK_143337848,
                                 &UNK_143337848 + *(int *)(&UNK_143337848 + (longlong)param_4 * 4));
    return pcVar13;
  case 0x59:
    puVar32 = auStack_b8;
    goto code_r0x0001417c3353;
  case 0x5a:
    goto code_r0x0001417c3369;
  case 0x5b:
    puVar27 = auStack_b8;
    goto code_r0x0001417c332b;
  case 0x5c:
    UNRECOVERED_JUMPTABLE = (code *)((ulonglong)UNRECOVERED_JUMPTABLE & 0xffffffffffffff40);
    puStack_88 = &UNK_1433371f0;
    puStack_90 = &uStack_78;
  case 0x60:
    uStack_98 = 2;
    pcVar13 = (code *)pdb_140f66e50(UNRECOVERED_JUMPTABLE,&UNK_143336aff,7,&UNK_143336b06);
    return pcVar13;
  case 0x5d:
    goto code_r0x0001417c3554;
  case 0x5e:
    pcVar13 = (code *)swi(3);
    pcVar13 = (code *)(*pcVar13)();
    return pcVar13;
  case 0x5f:
    pcVar12 = (code *)(ulonglong)((int)UNRECOVERED_JUMPTABLE + 0x1b735f3);
    goto code_r0x0001417c3528;
  case 0x61:
    goto code_r0x0001417c356d;
  case 0x62:
    *(uint *)(UNRECOVERED_JUMPTABLE + -0x77) =
         *(int *)(UNRECOVERED_JUMPTABLE + -0x77) + uVar9 + (uint)bVar38;
    pcVar13 = (code *)swi(3);
    pcVar13 = (code *)(*pcVar13)();
    return pcVar13;
  case 99:
  case 100:
  case 0x65:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x66:
  case 0x67:
  case 0x68:
  case 0x69:
    param_1[-0xf01b762] = (code)((char)param_1[-0xf01b762] + '\x01');
    *unaff_RDI = (code)((char)*unaff_RDI + -1);
    pcVar13[-0x7701b761] = (code)((char)pcVar13[-0x7701b761] + -1);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(undefined8 *)(puVar27 + -8) = 0x1417c1bd2;
  pdb_141b4cd90(puVar27 + 0x30);
  pcVar20 = *(code **)(puVar27 + 0x38);
  pcVar15 = (code *)&UNK_143337760;
  uVar19 = (ulonglong)*(int *)(&UNK_143337760 + (ulonglong)(byte)puVar27[0x30] * 4);
  pcVar12 = (code *)(&UNK_143337760 + uVar19);
  iVar18 = (int)pcVar20;
  cVar7 = (char)pcVar12;
  puVar26 = puVar27;
  puVar24 = puVar27;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(puVar27[0x30]) {
  case 0:
    if ((pcVar20 == (code *)0x0) || (*pcVar20 == (code)0x12)) {
      uVar19 = 0x200000000;
code_r0x0001417c1c47:
      *(ulonglong *)param_1 = uVar19;
      return param_1;
    }
    goto code_r0x0001417c1c53;
  case 1:
    if ((pcVar20 == (code *)0x0) || (*pcVar20 == (code)0x12)) {
      uVar19 = 0x300000000;
      goto code_r0x0001417c1c47;
    }
code_r0x0001417c1c53:
    *(undefined8 *)(puVar27 + -8) = 0x1417c1c6a;
    uVar19 = pdb_142deedc0(pcVar20,puVar27 + 0x2f,&UNK_143396738);
    *(ulonglong *)(param_1 + 8) = uVar19;
code_r0x0001417c1c24:
    *(uint *)param_1 = 1;
    return param_1;
  case 2:
    *(undefined8 *)(puVar27 + -8) = 0x1417c1c17;
    pdb_141b569d0(param_1,pcVar20,&UNK_143336d98,1);
    return param_1;
  case 3:
    *(code **)(param_1 + 8) = pcVar20;
    goto code_r0x0001417c1c24;
  case 4:
                    /* WARNING: Could not emulate address calculation at 0x0001417c1e4b */
                    /* WARNING: Treating indirect jump as call */
    pcVar13 = (code *)(*(code *)(&UNK_143337770 + *(int *)(&UNK_143337770 + (longlong)pcVar12 * 4)))
                                ();
    return pcVar13;
  case 5:
code_r0x0001417c1eda:
    puVar24 = puVar27;
    if (pcVar20[0xb] == (code)0x65) {
      *(undefined2 *)param_1 = 0x200;
      return param_1;
    }
    break;
  case 6:
  case 7:
  case 8:
  case 9:
  case 10:
  case 0xb:
  case 0xc:
  case 0xd:
  case 0xf:
    param_1 = (code *)(ulonglong)((uint)param_1 | *(uint *)((longlong)unaff_RBP + 0x75));
    while( true ) {
      bVar8 = (byte)pcVar12 | 0x80;
      if ((POPCOUNT(bVar8) & 1U) != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      pcVar15 = pcVar15 + -1;
      if (pcVar15 == (code *)0x0 || bVar8 == 0) break;
      pcVar12 = (code *)CONCAT71((int7)((ulonglong)pcVar12 >> 8),
                                 bVar8 + *(char *)(((ulonglong)pcVar12 | 0x80) + 0x75750b7a));
    }
    break;
  case 0xe:
    if (pcVar12 == (code *)0x0) {
      *(undefined2 *)param_1 = 0;
      return param_1;
    }
    break;
  case 0x10:
code_r0x0001417c1ef5:
    puVar24 = puVar27;
    if (pcVar20[2] == (code)0x73) {
      *(undefined2 *)param_1 = 0x100;
      return param_1;
    }
    break;
  case 0x11:
    if (pcVar12 != (code *)0x0) {
      cVar2 = (code)in((short)pcVar20);
      *unaff_RDI = cVar2;
      goto code_r0x0001417c200d;
    }
    bVar38 = iVar18 < 0;
    bVar39 = iVar18 == 0;
    UNRECOVERED_JUMPTABLE = (code *)0x0;
code_r0x0001417c1fc6:
    if (bVar39 || bVar38) {
      return UNRECOVERED_JUMPTABLE;
    }
    goto code_r0x0001417c1fc8;
  case 0x12:
    switch(*(int *)(&UNK_143337760 + (ulonglong)(byte)puVar27[0x30] * 4)) {
    case -0x4333775e:
      if (*(short *)pcVar20 != 0x6f4e) goto LAB_1417c2079;
      goto code_r0x0001417c200d;
    case -0x4333775d:
      if (pcVar20[2] != (code)0x73 || *(short *)pcVar20 != 0x6559) goto LAB_1417c2079;
      (&UNK_143337761)[uVar19] = 1;
      goto code_r0x0001417c206f;
    default:
      goto LAB_1417c2079;
    case -0x43337754:
      uVar16 = *(ulonglong *)pcVar20 ^ 0x536564616d657250;
      uVar37 = (ulonglong)*(uint *)(pcVar20 + 8) ^ 0x65706168;
      break;
    case -0x43337752:
      uVar16 = *(ulonglong *)pcVar20 ^ 0x636e4564696c6156;
      uVar37 = *(ulonglong *)(pcVar20 + 6) ^ 0x657275736f6c636e;
    }
    if (uVar37 != 0 || uVar16 != 0) {
LAB_1417c2079:
      *(undefined8 *)(puVar27 + -8) = 0x1417c2097;
      uVar11 = pdb_142d8f140(pcVar20,pcVar36,&UNK_1433368f0,4);
      *(undefined8 *)(&UNK_143337768 + uVar19) = uVar11;
      *pcVar12 = (code)0x1;
      return pcVar12;
    }
    (&UNK_143337761)[uVar19] = 2;
    goto code_r0x0001417c206f;
  case 0x13:
  case 0x14:
  case 0x15:
  case 0x16:
  case 0x17:
  case 0x18:
  case 0x19:
  case 0x1a:
  case 0x1c:
    unaff_RDI[0x143337716] = (code)((char)unaff_RDI[0x143337716] + cVar7);
    pcVar13 = (code *)swi(1);
    pcVar13 = (code *)(*pcVar13)();
    return pcVar13;
  case 0x1b:
code_r0x0001417c1fc8:
    pbVar4 = (byte *)unaff_RBP[-1];
    *(undefined8 *)(puVar27 + -8) = 0x1417c1fd7;
    pub_1406abac0(pbVar4,(ulonglong)pcVar20,1);
    UNRECOVERED_JUMPTABLE = extraout_RAX;
code_r0x0001417c1fdd:
    return UNRECOVERED_JUMPTABLE;
  case 0x1d:
code_r0x0001417c200d:
    (&UNK_143337761)[uVar19] = 0;
code_r0x0001417c206f:
    *pcVar12 = (code)0x0;
    return pcVar12;
  case 0x1e:
  case 0x1f:
  case 0x20:
  case 0x24:
code_r0x0001417c2d32:
    goto code_r0x0001406abac0;
  case 0x21:
    *pcVar12 = (code)((char)*pcVar12 + cVar7);
    pcVar13 = pcVar15;
    pcVar12 = pcVar20;
    goto pdb_140f679a0;
  case 0x22:
code_r0x0001417c2cf7:
    cVar2 = pcVar36[8];
    if (6 < (ulonglong)(byte)cVar2) {
code_r0x0001417c2db0:
      bVar38 = (code *)0xffffffffffffffef < pcVar36;
      pcVar13 = pcVar36 + 0x10;
      puVar28 = puVar26;
code_r0x0001409a45e0:
      pcVar1 = (char *)((longlong)pcVar13 * 5 + -0x3f);
      *pcVar1 = *pcVar1 + (char)pcVar13 + bVar38;
      *(undefined8 *)(puVar28 + 0x40) = *(undefined8 *)(puVar28 + 0x40);
      *(code **)(puVar28 + 0x38) = param_1;
      *(code **)(puVar28 + 0x30) = unaff_RDI;
      *(longlong *)(puVar28 + 0x28) = unaff_RBX;
      *(undefined8 *)(puVar28 + 0x20) = 0xfffffffffffffffe;
      uVar19 = *(ulonglong *)pcVar13;
      if (uVar19 == 0) {
        uVar16 = 0;
      }
      else {
        uVar37 = *(ulonglong *)(pcVar13 + 8);
        uVar16 = *(ulonglong *)(pcVar13 + 0x10);
        *(undefined8 *)(puVar28 + -0x48) = 0;
        *(ulonglong *)(puVar28 + -0x40) = uVar19;
        *(ulonglong *)(puVar28 + -0x38) = uVar37;
        *(undefined8 *)(puVar28 + -0x28) = 0;
        *(ulonglong *)(puVar28 + -0x20) = uVar19;
        *(ulonglong *)(puVar28 + -0x18) = uVar37;
      }
      uVar19 = (ulonglong)(uVar19 != 0);
      *(ulonglong *)(puVar28 + -0x50) = uVar19;
      *(ulonglong *)(puVar28 + -0x30) = uVar19;
      *(ulonglong *)(puVar28 + -0x10) = uVar16;
      puVar23 = puVar28 + -0x50;
      *(undefined8 *)(puVar28 + -0x78) = 0x1409a4652;
      pdb_14192c4b0(puVar28 + -8,puVar23);
      lVar10 = *(longlong *)(puVar28 + -8);
      if (lVar10 != 0) {
        do {
          lVar3 = *(longlong *)(puVar28 + 8);
          *(undefined1 **)(puVar28 + 0x18) = puVar23;
          *(longlong *)(puVar28 + 0x10) = lVar3 * 0x20 + lVar10;
          uVar19 = *(ulonglong *)(lVar10 + 0x168 + lVar3 * 0x18);
          if (uVar19 != 0) {
            pbVar4 = *(byte **)(lVar10 + lVar3 * 0x18 + 0x170);
            *(undefined8 *)(puVar28 + -0x78) = 0x1409a46ad;
            pub_1406abac0(pbVar4,uVar19,1);
          }
          *(undefined8 *)(puVar28 + -0x78) = 0x1409a46b6;
          pdb_140966d70(puVar28 + 0x10);
          *(undefined8 *)(puVar28 + -0x78) = 0x1409a46c2;
          pdb_14192c4b0(puVar28 + -8,puVar23);
          lVar10 = *(longlong *)(puVar28 + -8);
        } while (lVar10 != 0);
      }
      return (code *)0x0;
    }
    switch(cVar2) {
    default:
      return (code *)(&UNK_1433377d8 + *(int *)(&UNK_1433377d8 + (ulonglong)(byte)cVar2 * 4));
    case (code)0x3:
      pcVar20 = *(code **)(pcVar36 + 0x10);
      if (pcVar20 == (code *)0x0) {
        return (code *)(&UNK_1433377d8 + *(int *)(&UNK_1433377d8 + (ulonglong)(byte)cVar2 * 4));
      }
      pcVar15 = *(code **)(pcVar36 + 0x18);
      pcVar36 = (code *)0x1;
      unaff_RBP = *(undefined8 **)(puVar26 + 0x40);
      puVar27 = puVar26 + 0x48;
      goto code_r0x0001417c2d32;
    case (code)0x4:
      uVar19 = *(ulonglong *)(pcVar36 + 0x18);
      uVar16 = *(ulonglong *)(pcVar36 + 0x20);
      unaff_RBP[-2] = uVar19;
      unaff_RBP[-3] = pcVar36;
      *(undefined **)(puVar26 + -8) = &UNK_1417c2d84;
      pdb_14098ae50(uVar19,uVar16);
      pcVar20 = *(code **)((code *)unaff_RBP[-3] + 0x10);
      if (pcVar20 == (code *)0x0) {
        return (code *)unaff_RBP[-3];
      }
code_r0x0001417c2d92:
      pcVar20 = (code *)((longlong)pcVar20 << 5);
      pcVar36 = (code *)0x8;
      pcVar15 = (code *)unaff_RBP[-2];
      unaff_RBP = *(undefined8 **)(puVar26 + 0x40);
      puVar27 = puVar26 + 0x48;
      goto code_r0x0001406abac0;
    case (code)0x5:
      goto code_r0x0001417c2db0;
    }
  case 0x23:
    *(undefined4 *)(unaff_RBP + -2) = 0x43337760;
code_r0x0001417c2d37:
    unaff_RBP[-2] = pcVar15;
    unaff_RBP[-3] = pcVar36;
    *(undefined **)(puVar27 + -8) = &UNK_1417c2d48;
    pdb_1409a45e0(pcVar36 + 0x18);
    pcVar20 = (code *)unaff_RBP[-2];
    pcVar13 = (code *)unaff_RBP[-3];
    if (SBORROW8(0,(longlong)pcVar20)) {
      return pcVar13;
    }
    if (pcVar20 == (code *)0x0) {
      return pcVar13;
    }
    pcVar15 = *(code **)(pcVar13 + 8);
    pcVar36 = (code *)0x1;
    unaff_RBP = *(undefined8 **)(puVar27 + 0x40);
    puVar27 = puVar27 + 0x48;
    goto code_r0x0001406abac0;
  default:
    goto code_r0x0001417c2dea;
  case 0x31:
  case 0x33:
    *pcVar12 = (code)((char)*pcVar12 + cVar7);
    goto code_r0x0001417c2dea;
  case 0x36:
    *unaff_RBP = 0xfffffffffffffffe;
    pcVar12 = (code *)(ulonglong)UNK_143337760;
    if (pcVar12 < (code *)0x15) {
      puVar21 = &UNK_1433377f4;
code_r0x0001417c2e75:
                    /* WARNING: Could not recover jumptable at 0x0001417c2e7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      pcVar13 = (code *)(*(code *)(puVar21 + *(int *)(puVar21 + (longlong)pcVar12 * 4)))();
      return pcVar13;
    }
    uVar11 = *(undefined8 *)(puVar27 + 0x48);
    uVar5 = *(undefined8 *)(puVar27 + 0x50);
    uVar6 = *(undefined8 *)(puVar27 + 0x58);
    *(undefined8 *)(puVar27 + 0x60) = *(undefined8 *)(puVar27 + 0x60);
    *(undefined8 *)(puVar27 + 0x58) = unaff_R14;
    *(undefined8 *)(puVar27 + 0x50) = uVar6;
    *(undefined8 *)(puVar27 + 0x48) = uVar5;
    *(undefined8 *)(puVar27 + 0x40) = uVar11;
    *(undefined8 *)(puVar27 + 0x38) = 0xfffffffffffffffe;
    *(undefined8 *)(puVar27 + 0x30) = _UNK_143337770;
    *(undefined **)(puVar27 + 0x20) = &UNK_143337768;
    *(undefined8 *)(puVar27 + 0x18) = _UNK_143337778;
    *(undefined8 *)(puVar27 + 0x28) = 0;
    while (lVar10 = *(longlong *)(puVar27 + 0x28), lVar10 != *(longlong *)(puVar27 + 0x18)) {
      *(longlong *)(puVar27 + 0x28) = lVar10 + 1;
      *(longlong *)(puVar27 + 0x10) = lVar10 * 0x40 + *(longlong *)(puVar27 + 0x30);
      *(undefined **)(puVar27 + -0x18) = &UNK_140973995;
      pdb_14098ca70();
      *(undefined **)(puVar27 + -0x18) = &UNK_1409739a3;
      pdb_14098ca70(*(longlong *)(puVar27 + 0x10) + 0x20);
    }
    lVar10 = *(longlong *)*(code **)(puVar27 + 0x20);
    pcVar15 = *(code **)(puVar27 + 0x30);
    if (lVar10 == 0) {
      return *(code **)(puVar27 + 0x20);
    }
    pcVar20 = (code *)(lVar10 << 6);
    pcVar36 = (code *)0x8;
    param_1 = *(code **)(puVar27 + 0x50);
    unaff_RBP = *(undefined8 **)(puVar27 + 0x60);
    puVar27 = puVar27 + 0x68;
    goto code_r0x0001406abac0;
  case 0x38:
    if (uVar19 < 0xfffffffebccc88a0) {
      puVar21 = (undefined *)0x433377f4;
      goto code_r0x0001417c2e75;
    }
    unaff_RBP[-2] = pcVar12;
    while (unaff_RBP[-4] != unaff_RBP[-1]) {
      unaff_RBP[-1] = unaff_RBP[-1] + 1;
      *(undefined **)(puVar27 + -8) = &UNK_1417c2eda;
      pdb_14098ca70(pcVar12);
      pcVar12 = pcVar12 + 0x20;
    }
    lVar10 = *(longlong *)((code *)unaff_RBP[-3] + 8);
    if (lVar10 == 0) {
      return (code *)unaff_RBP[-3];
    }
    pcVar20 = (code *)(lVar10 << 5);
    pcVar36 = (code *)0x8;
    pcVar15 = (code *)unaff_RBP[-2];
    param_1 = *(code **)(puVar27 + 0x58);
    unaff_RBP = *(undefined8 **)(puVar27 + 0x60);
    puVar27 = puVar27 + 0x68;
code_r0x0001406abac0:
    *(undefined8 **)(puVar27 + -8) = unaff_RBP;
    *(code **)(puVar27 + -0x10) = param_1;
    pcVar13 = pcVar15;
    if ((code *)0x10 < pcVar36) {
      pcVar13 = *(code **)(pcVar15 + -8);
    }
    *(undefined **)(puVar27 + -0x40) = &UNK_140f3c37e;
    uVar11 = GetProcessHeap(pcVar15,pcVar20);
                    /* WARNING: Could not recover jumptable at 0x000140f3c38c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pcVar13 = (code *)HeapFree(uVar11,0,pcVar13);
    return pcVar13;
  case 0x39:
    *pcVar12 = (code)((char)*pcVar12 + cVar7);
    *pcVar12 = (code)((char)*pcVar12 + cVar7);
    (&UNK_1433376e9)[uVar19] = (&UNK_1433376e9)[uVar19] + '`';
    puVar29 = puVar27 + -8;
    *(undefined1 **)(puVar27 + -8) = puVar27;
code_r0x0001417c2e15:
    *(undefined8 **)(puVar29 + -8) = unaff_RBP;
    pcVar13 = (code *)0x0;
    if ((*(ulonglong *)(pcVar20 + 0x30) & 0x7fffffffffffffff) != 0) {
      pbVar4 = *(byte **)(*(ulonglong *)(pcVar20 + 0x28) + 8);
      uVar19 = *(ulonglong *)(pcVar20 + 0x30);
      *(undefined **)(puVar29 + -0x30) = &UNK_1417c2e46;
      pub_1406abac0(pbVar4,uVar19,1);
      pcVar13 = extraout_RAX_01;
    }
    return pcVar13;
  case 0x3a:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x3b:
    puVar30 = (undefined8 *)(puVar27 + -8);
    *(undefined8 **)(puVar27 + -8) = unaff_RBP;
    cVar7 = '\x18';
    do {
      unaff_RBP = unaff_RBP + -1;
      puVar30 = puVar30 + -1;
      *puVar30 = *unaff_RBP;
      cVar7 = cVar7 + -1;
    } while ('\0' < cVar7);
    *(undefined1 **)(puVar27 + -0xd0) = puVar27 + -8;
    puVar27 = puVar27 + -0x4cd2;
    *(undefined1 *)(unaff_RBX + 0x14) = 0;
    pcVar20 = (code *)(ulonglong)(iVar18 + (uint)pcVar12);
    goto code_r0x0001417c3283;
  case 0x3c:
    *(ulonglong *)(pcVar20 + 0x10) = (ulonglong)param_1 ^ (ulonglong)unaff_RDI;
code_r0x0001417c3227:
    *(ulonglong *)(pcVar20 + 0x18) = (longlong)pcVar15 << 0x15 ^ (ulonglong)pcVar12;
    *(ulonglong *)(pcVar20 + 8) = (longlong)unaff_RDI << 0x20 | (ulonglong)unaff_RDI >> 0x20;
    *(ulonglong *)pcVar20 = (ulonglong)pcVar12 ^ in_R11;
    if (pcVar36 == (code *)0x8) {
      pcVar36 = (code *)0x4;
      in_R10 = (undefined *)0x0;
      pcVar12 = (code *)0x4;
      goto code_r0x0001417c3254;
    }
    pcVar36 = pcVar36 + -4;
    pcVar12 = (code *)0x0;
    param_4 = (code *)0x0;
    if ((code *)0x1 < pcVar36) goto LAB_1417c3260;
    goto LAB_1417c327e;
  case 0x3d:
    (&UNK_143337764)[uVar19] = (&UNK_143337764)[uVar19];
code_r0x0001417c3254:
    if ((code *)((ulonglong)pcVar12 | 1) < pcVar36) {
LAB_1417c3260:
      param_4 = (code *)((ulonglong)param_4 |
                        (ulonglong)
                        *(ushort *)(pcVar12 + (longlong)(puVar27 + (longlong)(in_R10 + 4))) <<
                        ((char)pcVar12 * '\b' & 0x3fU));
      pcVar12 = (code *)((ulonglong)pcVar12 | 2);
    }
LAB_1417c327e:
    if (pcVar12 < pcVar36) {
code_r0x0001417c3283:
      pcVar13 = pcVar12 + (longlong)in_R10;
      uVar9 = (int)pcVar12 << 3;
      pcVar12 = (code *)(ulonglong)uVar9;
      param_4 = (code *)((ulonglong)param_4 |
                        (ulonglong)(byte)(puVar27 + 4)[(longlong)pcVar13] << ((byte)uVar9 & 0x3f));
    }
    *(code **)(pcVar20 + 0x38) = param_4;
    *(code **)(pcVar20 + 0x40) = pcVar36;
    return pcVar12;
  case 0x3e:
code_r0x0001417c3309:
    *(int *)(puVar27 + 0x30) = (int)pcVar12;
    *(undefined **)(puVar27 + 0x20) = &UNK_143336fc8;
    pcVar20 = (code *)&UNK_143336a64;
  case 0x42:
code_r0x0001417c332b:
    *(undefined8 *)(puVar27 + -8) = 0x1417c3330;
    pcVar13 = (code *)pdb_140f66090(pcVar15,pcVar20);
    return pcVar13;
  case 0x3f:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x40:
    UNRECOVERED_JUMPTABLE = (code *)((ulonglong)pcVar12 & 0xffffffffffffff20);
    puVar31 = puVar27;
code_r0x0001417c3337:
    *(int *)(puVar31 + 0x30) = (int)UNRECOVERED_JUMPTABLE;
    *(undefined **)(puVar31 + 0x20) = &UNK_143336fe8;
    pcVar20 = (code *)&UNK_143336a6b;
    pcVar13 = pcVar15;
    puVar32 = puVar31;
code_r0x0001417c3353:
    *(undefined8 *)(puVar32 + -8) = 0x1417c335e;
    pcVar13 = (code *)pdb_140f66090(pcVar13,pcVar20,5);
    return pcVar13;
  case 0x41:
    pcVar13 = *(code **)(uVar19 + 0x17bf7faa8);
    *(undefined8 *)(puVar27 + -8) = 0x1417c3363;
    pcVar13 = (code *)(*pcVar13)();
    return pcVar13;
  case 0x43:
    *(undefined4 *)(puVar27 + 0x40) = 0x43337760;
    *(undefined **)(puVar27 + 0x30) = &UNK_1433371d0;
    *(undefined1 **)(puVar27 + 0x28) = puVar27 + 0x40;
    *(undefined8 *)(puVar27 + 0x20) = 1;
    goto code_r0x0001417c33cb;
  case 0x44:
    (&UNK_143337727)[uVar19] = (&UNK_143337727)[uVar19] + -0x60;
    pcVar12 = (code *)((ulonglong)pcVar12 & 0xffffffffffffff20);
    *(uint *)pcVar12 = *(uint *)pcVar12 + (int)pcVar12;
    *pcVar12 = (code)((char)*pcVar12 + (char)pcVar12);
code_r0x0001417c33cb:
    *(undefined8 *)(puVar27 + -8) = 0x1417c33e7;
    pcVar13 = (code *)pdb_140f66e50(pcVar12,&UNK_143336ab0,0xd,&UNK_143336abd);
    return pcVar13;
  case 0x45:
    puVar33 = puVar27;
code_r0x0001417c3369:
    *(undefined **)(puVar33 + 0x20) = &UNK_143336fa8;
    *(undefined8 *)(puVar33 + -8) = 0x1417c338c;
    pcVar13 = (code *)pdb_140f66090(pcVar15,&UNK_143336a60,4,puVar33 + 0x30);
    return pcVar13;
  case 0x46:
    param_4 = (code *)&UNK_143336b20;
    pcVar12 = (code *)&UNK_143336b1b;
code_r0x0001417c3528:
    pcVar13 = pcVar20;
    if (pcVar15 != (code *)0x0) {
      pcVar12 = param_4;
    }
    goto pdb_140f679a0;
  case 0x47:
    pcVar13 = (code *)swi(3);
    pcVar13 = (code *)(*pcVar13)();
    return pcVar13;
  case 0x48:
    UNRECOVERED_JUMPTABLE = (code *)((ulonglong)pcVar12 & 0xffffffffffffff30);
    puVar34 = puVar27;
code_r0x0001417c3554:
    *(int *)(puVar34 + 0x20) = (int)pcVar15;
    pcVar20 = (code *)&UNK_143337210;
    pcVar36 = (code *)0xe;
    pcVar13 = UNRECOVERED_JUMPTABLE;
    puVar35 = puVar34;
code_r0x0001417c356d:
    *(undefined8 *)(puVar35 + -8) = 0x1417c3572;
    pcVar13 = (code *)pdb_140f66090(pcVar13,pcVar20,pcVar36);
    return pcVar13;
  case 0x49:
    pcVar13 = (code *)swi(3);
    pcVar13 = (code *)(*pcVar13)();
    return pcVar13;
  case 0x4a:
    pcVar13 = pcVar20;
pdb_140f679a0:
                    /* WARNING: Could not emulate address calculation at 0x000140f679a7 */
                    /* WARNING: Treating indirect jump as call */
    pcVar13 = (code *)(**(code **)(*(ulonglong *)(pcVar13 + 8) + 0x18))
                                (*(ulonglong *)pcVar13,pcVar12);
    return pcVar13;
  case 0x4b:
    *(byte **)(puVar27 + 0x30) = &UNK_143337760;
    *(undefined1 **)(puVar27 + 0x28) = puVar27 + 0x40;
    *(undefined **)(puVar27 + 0x20) = &UNK_1433372c8;
    *(undefined8 *)(puVar27 + -8) = 0x1417c35fa;
    pcVar13 = (code *)pdb_140f661d0((uint)pcVar12 | 0x1b738f6,&UNK_1433372e8,0xe);
    return pcVar13;
  case 0x4c:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x4d:
  case 0x4e:
  case 0x4f:
    *(undefined2 *)(uVar19 + 0x4123f3a1e) = in_FS;
    pcVar20[-0x3f01b75c] = (code)((char)pcVar20[-0x3f01b75c] + '\x01');
  case 0x50:
  case 0x51:
  case 0x52:
  case 0x53:
    puVar27[-0x5b2c01b8] = puVar27[-0x5b2c01b8] + -1;
    pcVar20[-0x3f01b75c] = (code)((char)pcVar20[-0x3f01b75c] + '\x01');
    *unaff_RDI = *param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
LAB_1417c1f58:
  *(undefined8 *)(puVar24 + -8) = 0x1417c1f61;
  pdb_140f35800(unaff_RBP + -4);
  pcVar13 = (code *)unaff_RBP[-3];
  pcVar20 = (code *)unaff_RBP[-2];
  pcVar36 = (code *)&UNK_1433368f0;
code_r0x0001417c1f70:
  unaff_RBP[-1] = pcVar13;
  puVar25 = puVar24;
code_r0x0001417c1f7a:
  *(undefined8 *)(puVar25 + -8) = 0x1417c1f7f;
  uVar19 = pdb_142d8f140(pcVar13,pcVar20,pcVar36);
  *(ulonglong *)(param_1 + 8) = uVar19;
  *param_1 = (code)0x1;
  pcVar20 = (code *)unaff_RBP[-4];
  if (0 < (longlong)pcVar20) {
code_r0x0001417c1f90:
    pbVar4 = (byte *)unaff_RBP[-1];
    *(undefined8 *)(puVar25 + -8) = 0x1417c1f9f;
    pub_1406abac0(pbVar4,(ulonglong)pcVar20,1);
  }
  return param_1;
code_r0x0001417c2dea:
  pbVar4 = (byte *)unaff_RBP[-2];
  *(undefined **)(puVar27 + -8) = &UNK_1417c2dfe;
  pub_1406abac0(pbVar4,(ulonglong)(uint)(iVar18 << 5),8);
  return extraout_RAX_00;
}

