// VA 0x14198e1d0, PDB extent 1476 bytes
// country_core::resources::history::_::impl$0::deserialize::impl$2::visit_enum<serde_json::value::de::EnumDeserializer>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/history/mod.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00014198fb81) overlaps instruction at (ram,0x00014198fb80)
    */
/* WARNING: Removing unreachable block (ram,0x00014198ec66) */
/* WARNING: Removing unreachable block (ram,0x00014198e949) */
/* WARNING: Removing unreachable block (ram,0x00014198e8fb) */
/* WARNING: Removing unreachable block (ram,0x00014198e8fd) */
/* WARNING: Removing unreachable block (ram,0x00014198e96d) */
/* WARNING: Removing unreachable block (ram,0x00014198ec7e) */
/* WARNING: Removing unreachable block (ram,0x0001409a46cb) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::resources::history::_::impl$0::deserialize::impl$2::visit_enum<serde_json::value::de::EnumDeserializer>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/history/mod.rs
   Extent: 1476 */

longlong *
pdb_14198e1d0(longlong *param_1,undefined8 param_2,code *UNRECOVERED_JUMPTABLE,longlong param_4)

{
  uint *puVar1;
  char *pcVar2;
  undefined1 uVar3;
  undefined4 uVar4;
  code cVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  uint uVar8;
  undefined8 uVar9;
  longlong *plVar10;
  longlong lVar11;
  longlong *extraout_RAX;
  byte bVar12;
  longlong lVar14;
  ulonglong uVar15;
  code *pcVar16;
  code *pcVar17;
  byte *arg0;
  undefined *arg1;
  undefined8 unaff_RBX;
  ulonglong *puVar18;
  undefined *unaff_RBP;
  longlong lVar19;
  undefined4 *unaff_RDI;
  byte unaff_R14B;
  longlong unaff_GS_OFFSET;
  bool bVar20;
  ulonglong auStack_c8 [3];
  undefined8 uStack_b0;
  ulonglong uStack_a8;
  undefined8 uStack_a0;
  undefined1 auStack_78 [8];
  undefined *puStack_70;
  undefined *puStack_68;
  ulonglong *puStack_60;
  ulonglong uStack_58;
  uint uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined1 auStack_28 [20];
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  int iVar13;
  
  puVar18 = (ulonglong *)auStack_78;
  pdb_141be6220(&uStack_58);
  uVar7 = uStack_44;
  uVar4 = uStack_48;
  plVar10 = (longlong *)(ulonglong)(byte)uStack_50;
  if ((byte)uStack_50 == 7) {
    param_1[1] = uStack_58;
    *param_1 = 0x10;
    return param_1;
  }
  uStack_14 = uStack_3c;
  uStack_10 = uStack_38;
  uStack_c = uStack_34;
  arg1 = &UNK_14335cf1c;
  uVar15 = (ulonglong)*(int *)(&UNK_14335cf1c + (uStack_58 & 0xff) * 4);
  pcVar16 = (code *)(&UNK_14335cf1c + uVar15);
  uVar8 = uStack_50 & 0xff;
  bVar12 = (byte)pcVar16;
  iVar13 = (int)pcVar16;
  uStack_48 = SUB84(unaff_RDI,0);
  pcVar17 = pcVar16;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(uStack_58 & 0xff) {
  case 0:
    if ((byte)uStack_50 == 6) {
      uStack_58 = CONCAT71(uStack_58._1_7_,0xd);
      arg1 = (undefined *)pdb_142db90e0(&uStack_58,&UNK_14339ab48,&UNK_143399fa8);
      lVar11 = 0x10;
    }
    else {
      uStack_48 = uStack_40;
      uStack_44 = uStack_3c;
      uStack_40 = uStack_38;
      uStack_3c = uStack_34;
      uStack_50 = uVar4;
      uStack_4c = uVar7;
      lVar11 = pdb_140c78ab0(&uStack_58);
      lVar11 = lVar11 << 4;
    }
    goto code_r0x00014198e54e;
  case 1:
    if ((byte)uStack_50 == 6) {
      uStack_58 = CONCAT71(uStack_58._1_7_,0xd);
      arg1 = (undefined *)pdb_142db90e0(&uStack_58,&UNK_14339ab48,&UNK_143399fa8);
      uVar15 = 1;
    }
    else {
      uStack_48 = uStack_40;
      uStack_44 = uStack_3c;
      uStack_40 = uStack_38;
      uStack_3c = uStack_34;
      uStack_50 = uVar4;
      uStack_4c = uVar7;
      uVar15 = pdb_140c788c0(&uStack_58);
    }
    bVar20 = (uVar15 & 1) == 0;
    lVar11 = 1;
    break;
  case 2:
    if ((byte)uStack_50 == 6) {
      uStack_58 = CONCAT71(uStack_58._1_7_,0xd);
      arg1 = (undefined *)pdb_142db90e0(&uStack_58,&UNK_14339ab48,&UNK_143399fa8);
      uVar15 = 1;
    }
    else {
      uStack_48 = uStack_40;
      uStack_44 = uStack_3c;
      uStack_40 = uStack_38;
      uStack_3c = uStack_34;
      uStack_50 = uVar4;
      uStack_4c = uVar7;
      uVar15 = pdb_140c788c0(&uStack_58);
    }
    bVar20 = (uVar15 & 1) == 0;
    lVar11 = 2;
    break;
  case 3:
    if ((byte)uStack_50 == 6) {
      uStack_58 = CONCAT71(uStack_58._1_7_,0xd);
      arg1 = (undefined *)pdb_142db90e0(&uStack_58,&UNK_14339ab48,&UNK_143399fa8);
      uVar15 = 1;
    }
    else {
      uStack_48 = uStack_40;
      uStack_44 = uStack_3c;
      uStack_40 = uStack_38;
      uStack_3c = uStack_34;
      uStack_50 = uVar4;
      uStack_4c = uVar7;
      uVar15 = pdb_140c788c0(&uStack_58);
    }
    bVar20 = (uVar15 & 1) == 0;
    lVar11 = 3;
    break;
  case 4:
    if ((byte)uStack_50 == 6) {
      uStack_58 = CONCAT71(uStack_58._1_7_,0xd);
      arg1 = (undefined *)pdb_142db90e0(&uStack_58,&UNK_14339ab48,&UNK_143399fa8);
      uVar15 = 1;
    }
    else {
      uStack_48 = uStack_40;
      uStack_44 = uStack_3c;
      uStack_40 = uStack_38;
      uStack_3c = uStack_34;
      uStack_50 = uVar4;
      uStack_4c = uVar7;
      uVar15 = pdb_140c788c0(&uStack_58);
    }
    bVar20 = (uVar15 & 1) == 0;
    lVar11 = 4;
    break;
  case 5:
    if ((byte)uStack_50 == 6) {
      uStack_58 = CONCAT71(uStack_58._1_7_,0xd);
      arg1 = (undefined *)pdb_142db90e0(&uStack_58,&UNK_14339ab48,&UNK_143399fa8);
      uVar15 = 1;
    }
    else {
      uStack_48 = uStack_40;
      uStack_44 = uStack_3c;
      uStack_40 = uStack_38;
      uStack_3c = uStack_34;
      uStack_50 = uVar4;
      uStack_4c = uVar7;
      uVar15 = pdb_140c788c0(&uStack_58);
    }
    bVar20 = (uVar15 & 1) == 0;
    lVar11 = 5;
    break;
  case 6:
    if ((byte)uStack_50 == 6) {
      uStack_58 = CONCAT71(uStack_58._1_7_,0xd);
      arg1 = (undefined *)pdb_142db90e0(&uStack_58,&UNK_14339ab48,&UNK_143399fa8);
      uVar15 = 1;
    }
    else {
      uStack_48 = uStack_40;
      uStack_44 = uStack_3c;
      uStack_40 = uStack_38;
      uStack_3c = uStack_34;
      uStack_50 = uVar4;
      uStack_4c = uVar7;
      uVar15 = pdb_140c788c0(&uStack_58);
    }
    bVar20 = (uVar15 & 1) == 0;
    lVar11 = 6;
    break;
  case 7:
    pdb_141bec2a0(&uStack_58,auStack_28);
    if (uStack_58 == 0) {
      lVar11 = 0x10;
      uStack_58 = CONCAT44(uStack_4c,uStack_50);
    }
    else {
      param_1[2] = CONCAT44(uStack_4c,uStack_50);
      lVar11 = 7;
    }
    param_1[1] = uStack_58;
    goto code_r0x00014198e512;
  case 8:
    if ((byte)uStack_50 == 6) {
      uStack_58 = CONCAT71(uStack_58._1_7_,0xd);
      arg1 = (undefined *)pdb_142db90e0(&uStack_58,&UNK_14339ab48,&UNK_143399fa8);
      uVar8 = 1;
    }
    else {
      uStack_48 = uStack_40;
      uStack_44 = uStack_3c;
      uStack_40 = uStack_38;
      uStack_3c = uStack_34;
      uStack_50 = uVar4;
      uStack_4c = uVar7;
      uVar8 = pdb_140c79450(&uStack_58);
    }
    lVar11 = (ulonglong)uVar8 * 8 + 8;
    goto code_r0x00014198e54e;
  case 9:
    if ((byte)uStack_50 == 6) {
      uStack_58 = CONCAT71(uStack_58._1_7_,0xd);
      arg1 = (undefined *)pdb_142db90e0(&uStack_58,&UNK_14339ab48,&UNK_143399fa8);
      uVar15 = 1;
    }
    else {
      uStack_48 = uStack_40;
      uStack_44 = uStack_3c;
      uStack_40 = uStack_38;
      uStack_3c = uStack_34;
      uStack_50 = uVar4;
      uStack_4c = uVar7;
      uVar15 = pdb_140c78d60(&uStack_58);
    }
    bVar20 = (uVar15 & 1) == 0;
    lVar11 = 9;
    break;
  case 10:
    if ((byte)uStack_50 == 6) {
      uStack_58 = CONCAT71(uStack_58._1_7_,0xd);
      arg1 = (undefined *)pdb_142db90e0(&uStack_58,&UNK_14339ab48,&UNK_143399fa8);
      uVar15 = 1;
    }
    else {
      uStack_48 = uStack_40;
      uStack_44 = uStack_3c;
      uStack_40 = uStack_38;
      uStack_3c = uStack_34;
      uStack_50 = uVar4;
      uStack_4c = uVar7;
      uVar15 = pdb_140c78790(&uStack_58);
    }
    bVar20 = (uVar15 & 1) == 0;
    lVar11 = 10;
    break;
  case 0xb:
    pdb_141be9530(param_1,auStack_28,8,0);
    return param_1;
  case 0xc:
    if ((byte)uStack_50 == 6) {
      uStack_58 = CONCAT71(uStack_58._1_7_,0xd);
      arg1 = (undefined *)pdb_142db90e0(&uStack_58,&UNK_14339ab48,&UNK_143399fa8);
      uVar8 = 1;
    }
    else {
      uStack_48 = uStack_40;
      uStack_44 = uStack_3c;
      uStack_40 = uStack_38;
      uStack_3c = uStack_34;
      uStack_50 = uVar4;
      uStack_4c = uVar7;
      uVar8 = pdb_140c78c50(&uStack_58);
    }
    lVar11 = (ulonglong)uVar8 * 4 + 0xc;
    goto code_r0x00014198e54e;
  case 0xd:
    lVar11 = pdb_141bec310(auStack_28);
    lVar11 = lVar11 * 3 + 0xd;
    goto code_r0x00014198e54e;
  case 0xe:
    if ((byte)uStack_50 == 6) {
      uStack_58 = CONCAT71(uStack_58._1_7_,0xd);
      arg1 = (undefined *)pdb_142db90e0(&uStack_58,&UNK_14339ab48,&UNK_143399fa8);
      uVar8 = 1;
    }
    else {
      uStack_48 = uStack_40;
      uStack_44 = uStack_3c;
      uStack_40 = uStack_38;
      uStack_3c = uStack_34;
      uStack_50 = uVar4;
      uStack_4c = uVar7;
      uVar8 = pdb_140c79320(&uStack_58);
    }
    lVar11 = (ulonglong)uVar8 * 2 + 0xe;
    goto code_r0x00014198e54e;
  case 0xf:
    if ((byte)uStack_50 == 6) {
      uStack_58 = CONCAT71(uStack_58._1_7_,0xd);
      arg1 = (undefined *)pdb_142db90e0(&uStack_58,&UNK_14339ab48,&UNK_143399fa8);
      lVar11 = 1;
    }
    else {
      uStack_48 = uStack_40;
      uStack_44 = uStack_3c;
      uStack_40 = uStack_38;
      uStack_3c = uStack_34;
      uStack_50 = uVar4;
      uStack_4c = uVar7;
      lVar11 = pdb_140c79080(&uStack_58);
    }
    lVar11 = lVar11 + 0xf;
code_r0x00014198e54e:
    param_1[1] = (longlong)arg1;
    *param_1 = lVar11;
    return param_1;
  case 0x10:
    *(int *)((longlong)plVar10 + -0x77) = *(int *)((longlong)plVar10 + -0x77) + iVar13;
    return plVar10;
  case 0x11:
    *(char *)((longlong)plVar10 + 0x33) = *(char *)((longlong)plVar10 + 0x33) + bVar12;
    (&UNK_14335ce9d)[uVar15] = (&UNK_14335ce9d)[uVar15] | bVar12;
    pcVar17 = (code *)swi(1);
    plVar10 = (longlong *)(*pcVar17)();
    return plVar10;
  case 0x12:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x13:
    return plVar10;
  case 0x14:
    plVar10 = (longlong *)(ulonglong)(byte)((byte)uStack_50 + 0x41);
    if ((int)param_4 == 0 && iVar13 == 0x72) {
      *(undefined1 *)((longlong)plVar10 + 1) = 9;
      goto code_r0x00014198ea74;
    }
    goto LAB_14198ea1a;
  case 0x15:
                    /* WARNING: Could not recover jumptable at 0x00014198e7c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    plVar10 = (longlong *)(*(pcVar16 + param_4))(pcVar16 + param_4);
    return plVar10;
  case 0x16:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x17:
    out((int)*param_1,0xcf1c);
    if (0xfffffffebcca30e3 < uVar15) {
      if (CONCAT17(UNK_14335cf26,
                   CONCAT16(UNK_14335cf25,
                            CONCAT15(UNK_14335cf24,CONCAT41(_UNK_14335cf20,UNK_14335cf1f)))) ==
          0x72657474756c436f && CONCAT44(_UNK_14335cf20,_UNK_14335cf1c) == 0x74756c436f747541) {
        *(undefined1 *)((longlong)plVar10 + 1) = 0xd;
        goto code_r0x00014198ea74;
      }
    }
    else if (pcVar16 == (code *)0x0) {
      uVar3 = in(0xcf1c);
      *(undefined1 *)unaff_RDI = uVar3;
      if (CONCAT11(UNK_14335cf25,UNK_14335cf24) == 0x3572 && param_4 == 0) {
        *(undefined1 *)((longlong)plVar10 + 1) = 10;
        goto code_r0x00014198ea74;
      }
      if (CONCAT11(UNK_14335cf25,UNK_14335cf24) == 0x3472 &&
          CONCAT44(_UNK_14335cf20,_UNK_14335cf1c) == 0) goto code_r0x00014198e81e;
      if (CONCAT11(UNK_14335cf25,UNK_14335cf24) == 0x746e &&
          CONCAT44(_UNK_14335cf20,_UNK_14335cf1c) == 0x696150746e616c50) goto code_r0x00014198e9ae;
    }
    else if (CONCAT13(UNK_14335cf27,CONCAT12(UNK_14335cf26,CONCAT11(UNK_14335cf25,UNK_14335cf24)))
             == 0x646c4f72 && pcVar16 == (code *)CONCAT44(_UNK_14335cf20,_UNK_14335cf1c)) {
code_r0x00014198e81e:
      *(undefined1 *)((longlong)plVar10 + 1) = 0xb;
code_r0x00014198ea74:
      *(undefined1 *)plVar10 = 0;
      return plVar10;
    }
    goto LAB_14198ea1a;
  case 0x18:
    uStack_50._0_1_ = (byte)uStack_50 + (char)*plVar10;
    plVar10 = (longlong *)(ulonglong)(byte)uStack_50;
    pcVar2 = (char *)(uVar15 + 0x1a8a82356);
    *pcVar2 = *pcVar2 + (byte)uStack_50;
    if (*pcVar2 == '\0') {
      *(undefined1 *)((longlong)plVar10 + 1) = 0xc;
      goto code_r0x00014198ea74;
    }
LAB_14198ea1a:
    pcVar16 = (code *)pdb_142d8f140(&UNK_14335cf1c,UNRECOVERED_JUMPTABLE,&UNK_14335c908,0x14);
    param_1 = plVar10;
code_r0x00014198ea3a:
    puVar1 = (uint *)((longlong)plVar10 + -0x77);
    *puVar1 = *puVar1 >> 0x10 | *puVar1 << 0x10;
    param_1[1] = (longlong)pcVar16;
    *(undefined1 *)plVar10 = 1;
    return plVar10;
  case 0x19:
code_r0x00014198e9ae:
    *(undefined1 *)((longlong)plVar10 + 1) = 0xf;
    goto code_r0x00014198ea74;
  case 0x1a:
    goto code_r0x00014198ea3a;
  default:
    *(byte *)plVar10 = (char)*plVar10 + (byte)uStack_50;
    if (UNRECOVERED_JUMPTABLE ==
        (code *)CONCAT44(_UNK_14335cf27,
                         CONCAT13(UNK_14335cf26,
                                  CONCAT12(UNK_14335cf25,CONCAT11(UNK_14335cf24,UNK_14335cf23)))) &&
        pcVar16 == (code *)0x0) {
      *(undefined1 *)((longlong)plVar10 + 1) = 6;
      *(undefined1 *)plVar10 = 0;
      return plVar10;
    }
    goto LAB_14198eb89;
  case 0x1e:
    *(byte *)((longlong)param_1 + -0x3d) = *(byte *)((longlong)param_1 + -0x3d) & (byte)unaff_RBX;
    pcVar17 = (code *)swi(3);
    plVar10 = (longlong *)(*pcVar17)();
    return plVar10;
  case 0x1f:
    if (UNRECOVERED_JUMPTABLE ==
        (code *)CONCAT17(UNK_14335cf26,
                         CONCAT16(UNK_14335cf25,
                                  CONCAT15(UNK_14335cf24,CONCAT41(_UNK_14335cf20,UNK_14335cf1f))))
        && pcVar16 == (code *)0x0) {
      *(undefined1 *)((longlong)plVar10 + 1) = 5;
      *(undefined1 *)plVar10 = 0;
      return plVar10;
    }
LAB_14198eb89:
    *(undefined1 *)((longlong)plVar10 + 1) = 7;
    *(undefined1 *)plVar10 = 0;
    return plVar10;
  case 0x20:
    while (pcVar16 != (code *)0x0) {
      pcVar16 = pcVar16 + -1;
      uVar4 = in(0xcf1c);
      *unaff_RDI = uVar4;
      unaff_RDI = unaff_RDI + 1;
    }
    return (longlong *)(ulonglong)(byte)((byte)uStack_50 + 0x81);
  case 0x22:
    return plVar10;
  case 0x23:
    _UNK_14335cf1c = _UNK_14335cf1c + uVar8;
    goto code_r0x00014198ea74;
  case 0x27:
                    /* WARNING: Could not recover jumptable at 0x00014198ea9f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    plVar10 = (longlong *)(*UNRECOVERED_JUMPTABLE)();
    return plVar10;
  case 0x28:
    arg1 = (undefined *)
           CONCAT62(0x14335,CONCAT11(*(byte *)((longlong)plVar10 * 3 + 0x48) | 0xcf,0x1c));
    if (*(longlong *)(arg1 + unaff_GS_OFFSET) == 0x7265764f) {
LAB_14198ec27:
      *(undefined1 *)((longlong)plVar10 + 1) = 2;
      *(undefined1 *)plVar10 = 0;
      return plVar10;
    }
    goto LAB_14198ec3b;
  case 0x29:
    *(byte *)(uVar15 + 0x18b3e571d) = *(byte *)(uVar15 + 0x18b3e571d) | unaff_R14B;
    goto code_r0x00014198ec5f;
  case 0x2a:
  case 0x2d:
  case 0x2e:
    if (UNK_14335cf24 == '1' && iVar13 == _UNK_14335cf1c) {
      *(undefined1 *)((longlong)plVar10 + 1) = 1;
      *(undefined1 *)plVar10 = 0;
      return plVar10;
    }
    if (UNK_14335cf24 == 'r' && CONCAT44(_UNK_14335cf20,_UNK_14335cf1c) == 0x69645f6567646972) {
      *(undefined1 *)((longlong)plVar10 + 1) = 4;
      *(undefined1 *)plVar10 = 0;
      return plVar10;
    }
    goto LAB_14198edf3;
  case 0x2b:
    *(uint *)plVar10 = (int)*plVar10 + uVar8;
    *(char *)((longlong)plVar10 + -0x47) = *(char *)((longlong)plVar10 + -0x47) + bVar12;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x2c:
    if (UNRECOVERED_JUMPTABLE == (code *)0x0 && pcVar16 == (code *)0x0) {
      *(undefined1 *)((longlong)plVar10 + 1) = 6;
      *(undefined1 *)plVar10 = 0;
      return plVar10;
    }
    goto LAB_14198edf3;
  case 0x2f:
    plVar10 = (longlong *)
              (ulonglong)
              (uVar8 ^ CONCAT13(UNK_14335cf26,
                                CONCAT12(UNK_14335cf25,CONCAT11(UNK_14335cf24,UNK_14335cf23))));
    if (UNRECOVERED_JUMPTABLE == (code *)0x0 && pcVar16 == (code *)0x0) {
      *(undefined1 *)((longlong)plVar10 + 1) = 3;
      *(undefined1 *)plVar10 = 0;
      return plVar10;
    }
LAB_14198edf3:
    *(undefined1 *)((longlong)plVar10 + 1) = 7;
    *(undefined1 *)plVar10 = 0;
    return plVar10;
  case 0x30:
    if (0xfffffffebcca30e3 < uVar15) {
      plVar10 = (longlong *)(ulonglong)(byte)((byte)uStack_50 + 0x81);
      goto code_r0x00014198ec80;
    }
    if (pcVar16 == (code *)0x0) goto code_r0x00014198ec5f;
    if (UNK_14335cf24 == 'e' && iVar13 == _UNK_14335cf1c) goto LAB_14198ec27;
LAB_14198ec3b:
    pcVar16 = (code *)pdb_142d8f140(arg1,UNRECOVERED_JUMPTABLE,&UNK_14335c600,4);
    param_1 = plVar10;
code_r0x00014198ec5f:
    param_1[1] = (longlong)pcVar16;
    *(undefined1 *)plVar10 = 1;
                    /* WARNING: Bad instruction - Truncating control flow here */
    return plVar10;
  case 0x31:
code_r0x00014198ec80:
    *(char *)((longlong)plVar10 + -0x73) = *(char *)((longlong)plVar10 + -0x73) + bVar12;
                    /* WARNING: Could not recover jumptable at 0x00014198ec8f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    plVar10 = (longlong *)
              (*(pcVar16 + *(int *)(pcVar16 + (longlong)UNRECOVERED_JUMPTABLE * 4)))
                        (pcVar16,&UNK_14335cf1c,
                         pcVar16 + *(int *)(pcVar16 + (longlong)UNRECOVERED_JUMPTABLE * 4));
    return plVar10;
  case 0x32:
  case 0x33:
  case 0x34:
  case 0x38:
    pcVar17 = *(code **)pcVar16;
    UNRECOVERED_JUMPTABLE = pcVar16;
  case 0x37:
    uStack_40 = SUB84(param_1,0);
    uStack_3c = (undefined4)((ulonglong)param_1 >> 0x20);
    if (pcVar17 != (code *)0x8000000000000001) {
      *(code **)(unaff_RBP + -0x10) = pcVar17;
      *(code **)(unaff_RBP + -0x18) = UNRECOVERED_JUMPTABLE;
      pdb_1409a45e0(UNRECOVERED_JUMPTABLE + 0x18);
      lVar11 = *(longlong *)(unaff_RBP + -0x10);
      plVar10 = *(longlong **)(unaff_RBP + -0x18);
      if (SBORROW8(0,lVar11)) {
        return plVar10;
      }
      if (lVar11 == 0) {
        return plVar10;
      }
      lVar14 = plVar10[1];
      uVar15 = 1;
      goto code_r0x0001406abac0;
    }
    cVar5 = UNRECOVERED_JUMPTABLE[8];
    if (6 < (ulonglong)(byte)cVar5) {
code_r0x00014198f100:
      uStack_44 = (undefined4)((ulonglong)unaff_RDI >> 0x20);
      uStack_50 = (uint)unaff_RBX;
      uStack_4c = (undefined4)((ulonglong)unaff_RBX >> 0x20);
      uStack_58 = 0xfffffffffffffffe;
      lVar11 = *(longlong *)(UNRECOVERED_JUMPTABLE + 0x10);
      if (lVar11 != 0) {
        uStack_b0 = *(undefined8 *)(UNRECOVERED_JUMPTABLE + 0x18);
        auStack_c8[1] = 0;
        uStack_a0 = 0;
        auStack_c8[2] = lVar11;
      }
      auStack_c8[0] = (ulonglong)(lVar11 != 0);
      uStack_a8 = auStack_c8[0];
      pdb_14192c4b0(&stack0xffffffffffffff80,auStack_c8);
      do {
        puStack_68 = (undefined *)((longlong)puStack_70 * 0x20 + 0x14198e1e2);
        uVar15 = *(ulonglong *)((longlong)puStack_70 * 0x18 + 0x14198e34a);
        puStack_60 = auStack_c8;
        if (uVar15 != 0) {
          pub_1406abac0(*(byte **)((longlong)puStack_70 * 0x18 + 0x14198e352),uVar15,1);
        }
        pdb_140966d70(&puStack_68);
        pdb_14192c4b0(&stack0xffffffffffffff80,auStack_c8);
      } while( true );
    }
    plVar10 = (longlong *)(&UNK_14335cfe4 + *(int *)(&UNK_14335cfe4 + (ulonglong)(byte)cVar5 * 4));
    switch(cVar5) {
    case (code)0x3:
      lVar11 = *(longlong *)(UNRECOVERED_JUMPTABLE + 0x10);
      if (lVar11 != 0) {
        lVar14 = *(longlong *)(UNRECOVERED_JUMPTABLE + 0x18);
        uVar15 = 1;
code_r0x0001406abac0:
        lVar19 = lVar14;
        if (0x10 < uVar15) {
          lVar19 = *(longlong *)(lVar14 + -8);
        }
        puStack_70 = &UNK_140f3c37e;
        uVar9 = GetProcessHeap(lVar14,lVar11);
                    /* WARNING: Could not recover jumptable at 0x000140f3c38c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        plVar10 = (longlong *)HeapFree(uVar9,0,lVar19);
        return plVar10;
      }
      break;
    case (code)0x4:
      uVar9 = *(undefined8 *)(UNRECOVERED_JUMPTABLE + 0x18);
      uVar6 = *(undefined8 *)(UNRECOVERED_JUMPTABLE + 0x20);
      *(undefined8 *)(unaff_RBP + -0x10) = uVar9;
      *(code **)(unaff_RBP + -0x18) = UNRECOVERED_JUMPTABLE;
      pdb_14098ae50(uVar9,uVar6);
      plVar10 = *(longlong **)(unaff_RBP + -0x18);
      if (plVar10[2] != 0) {
        lVar11 = plVar10[2] << 5;
        uVar15 = 8;
        lVar14 = *(longlong *)(unaff_RBP + -0x10);
        goto code_r0x0001406abac0;
      }
      break;
    case (code)0x5:
      goto code_r0x00014198f100;
    }
    return plVar10;
  case 0x35:
    pcVar17 = (code *)swi(3);
    plVar10 = (longlong *)(*pcVar17)();
    return plVar10;
  case 0x36:
    pcVar17 = (code *)swi(3);
    plVar10 = (longlong *)(*pcVar17)();
    return plVar10;
  case 0x39:
    goto code_r0x00014198fbb5;
  case 0x3a:
    UNRECOVERED_JUMPTABLE = UNRECOVERED_JUMPTABLE + -0x3f;
    *UNRECOVERED_JUMPTABLE =
         (code)((byte)*UNRECOVERED_JUMPTABLE >> 1 | (char)*UNRECOVERED_JUMPTABLE << 7);
    arg0 = &UNK_14335cf1b + uVar15;
    puVar18 = (ulonglong *)auStack_78;
    if (arg0 != (byte *)0x0) {
      *(byte *)plVar10 = (char)*plVar10 + (byte)uStack_50;
      puVar18 = (ulonglong *)auStack_78;
    }
    goto code_r0x00014198fbc2;
  case 0x3b:
    *(undefined4 *)(param_1 + 1) = uStack_48;
    goto LAB_14198fb79;
  case 0x3c:
    puStack_68 = &UNK_14335cf1c;
    puVar18 = auStack_c8 + 1;
    unaff_RBP = &UNK_14335cf7c;
    arg1 = _UNK_14335cf44;
    goto code_r0x00014198fbb5;
  case 0x3d:
    if (SBORROW8(0,(longlong)pcVar16)) {
      param_1[1] = (longlong)unaff_RDI;
      *param_1 = -0x8000000000000000;
      return param_1;
    }
LAB_14198fb79:
    lVar11 = *(longlong *)(unaff_RBP + -8);
    *param_1 = (longlong)plVar10;
    param_1[1] = (longlong)unaff_RDI;
    param_1[2] = lVar11;
    return param_1;
  case 0x3e:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (!bVar20) {
    lVar11 = 0x10;
  }
  param_1[1] = (longlong)arg1;
code_r0x00014198e512:
  *param_1 = lVar11;
  return param_1;
code_r0x00014198fbb5:
  if (arg1 != (undefined *)0x0) {
    arg0 = *(byte **)(unaff_RBP + -0x30);
    arg1 = (undefined *)((longlong)arg1 << 4);
code_r0x00014198fbc2:
    *(undefined8 *)((longlong)puVar18 + -8) = 0x14198fbcd;
    pub_1406abac0(arg0,(ulonglong)arg1,8);
    plVar10 = extraout_RAX;
  }
  return plVar10;
}

